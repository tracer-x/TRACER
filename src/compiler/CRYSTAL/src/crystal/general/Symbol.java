package crystal.general;

import java.io.*;
import java.util.*;

import crystal.ast.*;
import crystal.util.*;

public class Symbol implements Serializable {
	private static final long serialVersionUID = 3258130262767711032L;

	/** If true, prefix symbol names with their numeric identifiers.
	 *  For debugging purposes, to distinguish symbols with the same name. */
	public static boolean DEBUG_SYM = false;
	
	/** The initializers */
	static Map<Symbol, Pair<Initializer, FileSymtab>> initializers = 
		new HashMap<Symbol, Pair<Initializer, FileSymtab>>();

	/** A unique numeric identifier. */
    public int id;
	public static int cid = 1;
    
    /** A special symbol denoting varargs. */
    public static final Symbol varargs = newTemp("...", Type.VarArgs);

    /** Symbol name */
    private String name;
    
    /** Symbol type */
    Type type;

    /** The symbol kind (VAR, FUN, TYPE, STRUCT, UNION, ENUM, LABEL) */
    byte kind;

    /** The symbol status (DEFINED, COMMON, UNDEFINED, NONE) */
    byte status;
        
    /** Storage information. */
    byte storage;
    
    /** Other information */
    byte info;
    
   /** The source location where the symbol was declared or defined */
    Loc loc;
    

    public static Symbol newTemp(String s, Type t) {
    	return new Symbol(s, t, Flags.VAR, Flags.DEFINED, 0);
    }
    
    public static Symbol newVar(String s, Type t, Loc l) {
    	Symbol sym = new Symbol(s, t, Flags.VAR, Flags.DEFINED, 0);
    	sym.setLoc(l);
    	return sym;
    }
    
    public static Symbol newStruct(String s, byte k) {
    	return new Symbol(s, null, k, Flags.DECLARED, 0);
    }
    
    public Symbol(String n, Type t, byte k, byte s, int r) {
    	name = n;
        type = t;
        kind = k;
        status = s;
        storage = (byte)(r & Flags.STORAGE);
        
        assert cid != Integer.MAX_VALUE;
        id = cid++;
    }

    public String toString() {
    	return name;
    }

    public String getName() {
    	return name;
    }

    public void setName(String n) {
    	name = n;
    }

    public String getIdName() {
    	if (DEBUG_SYM) 
    		return "_" + id + "_" + name;
    	else
    		return name;
    }
    

	public String getNameAndFile() {
		return "\"" + getIdName() + "\""
			+ (loc != null ? " (" + loc + ")" : "");
	}

	public String getQuotName() {
    	return "\"" + name + "\"";
    }
    
    public Type getType() {
        return type;
    }
    
    public byte getKind() {
        return kind;
    }
    
    public byte getStatus() {
        return status;
    }

    public byte getStorage() {
        return storage;
    }
    
    public void setType(Type t) {
        type = t;
    }
    
    public void setStatus(byte s) {
        status = s;
    }
    
    public void setLoc(Loc l) {
        loc = l;
    }
    
    public Loc getLoc() {
        return loc;
    }
    
    public void addStorage(int moreStorage) {
        storage |= (byte)moreStorage;
    }
    
    public boolean isTag() {
    	return kind == Flags.STRUCT || 
    	       kind == Flags.UNION || 
    		   kind == Flags.ENUM;
    }

    public boolean isDefined() {
    	return status >= Flags.DEFINED;
    }

    public boolean isCommon() {
    	return status >= Flags.COMMON;
    }

    public boolean isDeclared() {
    	return status >= Flags.DECLARED;
    }
    
    public boolean isFunction() {
    	return false;
    }
    
    public boolean isExtern() {
    	return (storage & Flags.EXTERN) != 0;
    }
    
    public boolean isStatic() {
    	return (storage & Flags.STATIC) != 0;
    }
    
    public void unStatic() {
    	storage &= ~Flags.STATIC;
    }
    
    public void setStatic() {
    	storage |= Flags.STATIC;
    }
    
    public void setParameter() {
    	info |= Flags.PARAMETER;
    }
    
    public boolean isVariable() {
		return kind == Flags.VAR;
	}

    public boolean isParameter() {
		return kind == Flags.VAR 
    		&& (info & Flags.PARAMETER) != 0; 
    }

    public boolean isAutomatic() {
		return kind == Flags.VAR 
			&& (info & Flags.GLOBAL) == 0
			&& (storage & Flags.STATIC) == 0;
	}

    public boolean isLocal() {
		return kind == Flags.VAR 
			&& (info & Flags.GLOBAL) == 0;
	}

	public boolean isGlobal() {
		return kind == Flags.VAR 
			&& (info & Flags.GLOBAL) != 0;
	}
	
	public void setGlobal() {
        this.info |= Flags.GLOBAL;
	}
	
	/*              IsParam  IsAutomatic  IsLocal  IsGlobal  IsStatic
      extern var                                       X
      file static                                      X        X
      parameter        X          X           X
      func static                             X                 X
      func auto                   X           X
	 */
	
	public boolean isInline() {
		return false;
	}

	public void setAddressTaken() {
        this.info |= Flags.ADDR_TAKEN;
    }
    
    public boolean hasAddressTaken() {
    	return (this.info & Flags.ADDR_TAKEN) != 0; 
    }
    
    public void setFirstField() {
    	this.info |= Flags.FIRST_FIELD;
    }
    
    public boolean isFirstField() {
    	return (this.info & Flags.FIRST_FIELD) != 0; 
    }
    
    public void setAnonymous() {
    	this.info |= Flags.ANONYM;
    }
    
    public boolean isAnonymous() {
    	return (this.info & Flags.ANONYM) != 0; 
    }
    
    public void setShadow() {
    	this.info |= Flags.SHADOW;
    }
    
    public boolean isShadow() {
    	return (this.info & Flags.SHADOW) != 0; 
    }
    
    public void setAccessed() {
    	this.info |= Flags.ACCESSED;
    }
    
    public boolean isAccessed() {
    	return (this.info & Flags.ACCESSED) != 0; 
    }
    
    public void addInfoFrom(Symbol other) {
    	assert this.kind == other.kind;
    	
    	if (other.status > this.status) 
    		this.loc = other.loc;
    	
    	this.status |= other.status;
    	this.storage |= other.storage;
    	this.info |= other.info;
    	
    	Pair<Initializer, FileSymtab> p = initializers.get(other);
    	if (p != null) {
        	initializers.remove(other);
        	initializers.put(this, p);
    	}
    }
    

	public void setInitializer(Initializer init, FileSymtab tab) {
		initializers.put(this, new Pair<Initializer,FileSymtab>(init, tab));
	}

	public Initializer getInitializer() {
		Pair<Initializer, FileSymtab> p = initializers.get(this);
		return p == null ? null : p.fst;
	}

	public FileSymtab getInitFile() {
		Pair<Initializer, FileSymtab> p = initializers.get(this);
		return p == null ? null : p.snd;
	}
    
	public static Set<Symbol> getInitSymbols() {
		return initializers.keySet();
	}

	public void print(String s) {
    	System.out.print(s);
        System.out.printf("(%c) ", Flags.statusToChar(status));
        if (isParameter())
        	System.out.printf("param ");
        else
        	System.out.printf("%-6s", Flags.kindToString(kind));
        System.out.printf(" : %-12s", getIdName());
        System.out.print(" : " + (type == null? "[null]" : type.toString()));
        System.out.println();
    }
}

