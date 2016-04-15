package crystal.parser;

import java.util.*;

import crystal.general.*;

class StructSymtab extends Symtab {
	private static final long serialVersionUID = 3256719572236054578L;

	byte kind;
	
	/** The structure fields */
	private List<Symbol> fields, structs;
	
	/** The structure name symbol */
	protected Symbol tag;

	/** Constructor. */
	StructSymtab(int k) {
		fields = new ArrayList<Symbol>();
		structs = new ArrayList<Symbol>();
		kind = (byte)k;
	}
	
    /** Get var/fun/type symbols. */
    public Collection<Symbol> getVFTSymbols() {
    	return fields;
    }

    /** Get struct/union/enum symbols. */
    public Collection<Symbol> getSUESymbols() {
    	return structs;
    }

	/** Get label symbols */
    public Collection<Symbol> getLabelSymbols() {
    	return empty; 
    }

    public List<Symbol> getAllSymbols() {
    	List<Symbol> res = new ArrayList<Symbol>();
    	if (fields != null) res.addAll(fields);
    	return res;
    }

    protected int numFields() {
    	return fields.size();
    }
    
    private static List<Symbol> empty = new ArrayList<Symbol>();

    private List<Symbol> vectorOf(int k) {
    	switch (k) {
    	case Flags.VAR : return fields;

    	case Flags.STRUCT :
    	case Flags.UNION :
    	case Flags.ENUM : return structs;
    	
    	default: return null;
    	}
    }

    public void insertSymLocal(Symbol sym){
    	(vectorOf(sym.getKind())).add(sym);
    }

    public void removeSymLocal(Symbol sym) {
    	(vectorOf(sym.getKind())).remove(sym);
    }
    
	public Symbol lookupVFTLocal(String id) {
    	for (Symbol sym : vectorOf(Flags.VAR))
    		if (sym.getName().equals(id))
    			return sym;
    	return null;
	}

	public Symbol lookupSUELocal(String id) {
    	for (Symbol sym : vectorOf(Flags.STRUCT))
    		if (sym.getName().equals(id))
    			return sym;
    	return null;
	}

	public Label lookupLabelLocal(String id) {
		return null;
	}
	
	public void printLocal(String s) {
		for (Symbol field : fields)
			field.print(s);
	}
	
	public boolean isEmpty() {
		return 
			(fields == null || fields.isEmpty()) && 
			(structs == null || structs.isEmpty());
	}
}