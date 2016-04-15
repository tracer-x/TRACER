package crystal.general;

import java.io.*;
import java.util.*;

import crystal.ast.*;
import crystal.cfg.*;
import crystal.emitc.*;

public class Function extends Symbol {
	private static final long serialVersionUID = 3977863990124819766L;

	/** The formal function parameters. */
	private Symbol[] params;

	/** The return variable */
	private Symbol retvar;

	/** The shadow parameters */
	private Symbol[] shadows;

	/** The function body */
	private BlockStat body;
	
	/** Location */
	String file;
	short ll, lc, rl, rc;
	
	/** The asm annotation. */
	private String asm;
	
	/** True if function is defined extern */
	boolean extern; 
	
	/** True if the function is defined inline */
	boolean inline; 
	
	/** True if the function is defined static */
	boolean statik; 
	
	/** The CFG constructed for this function */
	private CFGInfo cfg;

	/** The function symbol table */
	FunSymtab symtab;

	public Function(String name, FunType type, byte status, int storage) 
	{
		super(name, convertArrays(type), Flags.FUN, status, storage);
		generateReturnVariable();
	}

	public Function(String name, FunType type, byte status, int storage, String s) 
	{
		this(name, type, status, storage);
		asm = s;
	}

	public String getAsm() {
		return asm == null ? null : "__asm__(\"" + asm + "\")";
	}
	
	private static Type convertArrays(FunType type) {
		for (int i = 0; i < type.numArgs(); i++) {
			Type t = type.getArg(i).skipTypedefs();
			if (t.isArray()) {
				t = new PointerType(t.getTargetType());
				type.setArg(i, t);
			}
		}
		return type;
	}

	public static Function initFun(String name, String file) {
    	return new Function(name, Type.VoidToVoid, Flags.DEFINED, 0);
	}
	
	public static Function builtinFun(String name, FunType type) {
    	return new Function(name, type, Flags.NONE, 0);
	}
	
	public static Function defaultFun(String name) {
		return new Function(name, Type.VoidToInt, Flags.NONE, 0);
	}

	private void generateReturnVariable() {
		Type rettype = ((FunType) type).getReturnType();
		if (rettype.equals(Type.Void)) {
			retvar = null;
		}
		else {
			retvar = Symbol.newTemp(Options.SHADOW_RET_PREFIX + getName(), 
					                rettype);
			retvar.setShadow();
		}
	}

	public String getIdName() {
		if (!isDefined()) 
			return super.getName();
		
		return super.getIdName();
	}
	
	public boolean isFunction() {
		return true;
	}
	
	public boolean isInline() {
		return (storage & Flags.INLINE) != 0;
	}

    public void unStatic() {
    	storage &= ~Flags.STATIC;
    	statik = false;
    }
	
	public void setType(Type t) {
		assert t.isFunction();
		this.type = t;
		generateReturnVariable();
	}

	public void setBody(BlockStat body) {
		this.body = body;
		if (body != null) {
			file = body.getFile();
			ll = (short)body.getLeftLine();
			lc = (short)body.getLeftCol();
			rl = (short)body.getRightLine();
			rc = (short)body.getRightCol();
		}
	}
	
	public String getFile() {
		return file;
	}
	
	public int getLeftLine() {
		return ll; 
	}

	public int getLeftCol() {
		return lc; 
	}

	public int getRightLine() {
		return rl; 
	}

	public int getRightCol() {
		return rc; 
	}

	public void setParams(List<Symbol> v) {
		this.params = new Symbol[v.size()];
		this.params = v.toArray(this.params);

		/* set param flags, fix types, generate the shadow variables */
		shadows = new Symbol[params.length];
		for (int p = 0; p < numParams(); ++p) {
			Symbol formal = getParam(p);
			formal.setParameter();
			
			/* convert array types into pointer types */
			Type t = formal.getType().skipTypedefs();
			if (t.isArray())
				formal.setType(new PointerType(t.getTargetType()));
			
			String sname = Options.SHADOW_ARG_PREFIX + formal.getName();
			Symbol shadow = Symbol.newTemp(sname, formal.getType());
			shadow.setShadow();
			shadows[p] = shadow;
		}
	}

	public void setInfoFrom(Function other) {
		this.type = other.type;
		this.params = other.params;
		this.retvar = other.retvar;
		this.shadows = other.shadows;
		setBody(other.body);
		this.cfg = other.cfg;
		this.symtab = other.symtab;
		this.extern = other.extern;
		this.statik = other.statik;
		this.inline = other.inline;

		addInfoFrom(other);
	}

    public void addInfoFrom(Symbol o) {
    	super.addInfoFrom(o);

    	Function other = (Function)o;
    	if (other.asm != null)
    		this.asm = other.asm;
    }
    
	public BlockStat getBody() {
		return body;
	}

	public int numParams() {
		if (params == null)
			return 0;
		return params.length;
	}

	public Symbol getParam(int i) {
		return params[i];
	}

	public Symbol getReturnVar() {
		assert isDefined();
		return retvar;
	}

	public Symbol getShadowParam(int i) {
		return shadows[i];
	}

	public Iterable<Symbol> getSymbols() {
		return getSymTab().getVFTSymbols();
	}

	public CFGInfo getCFG() {
		return cfg;
	}

	public void setCFG(CFGInfo cfg) {
		this.cfg = cfg;
	}

	public List<CFGNode> getCFGNodes() {
		return cfg.getAllNodes();
	}
	
	public void setSpecifiers(boolean s, boolean e, boolean i) {
		statik = s;
		extern = e;
		inline = i;
	}
	
	public void printFunction(PrintStream ps, boolean useCFG) {
		printDecl(ps);
		ps.print(" ");
		
		if (cfg != null) 
			CFGToC.printC(ps, getSymTab(), cfg);
		else if (body != null)
			ps.print(body.toString());
		else
			System.out.println(";");
		ps.println();
	}

	public void printDecl(PrintStream ps) {
		if (statik) ps.print("static ");
		if (extern) ps.print("extern ");
		if (inline) ps.print("inline ");

		FunType ftype = (FunType) type;
		String nameAndArgs = getIdName() + "(";
		for (int i = 0; i < params.length; i++) {
			if (i > 0)
				nameAndArgs += ", ";
			Symbol arg = params[i];
			nameAndArgs += (arg == Symbol.varargs ? "..." :
							DeclPrinter.toString(arg.type, arg.getIdName(), ""));
		}
		nameAndArgs += ")";
		ps.print(DeclPrinter.toString(ftype.getReturnType(), nameAndArgs, ""));
	}

	public HashSymtab getSymTab() {
		return (HashSymtab) symtab.getFirstKid();
	}

	public boolean isInit() {
		return getName().startsWith(Options.FILE_STARTUP_PREFIX);
	}

	public boolean isAlloc() {
		for (String a : Options.allocNames)
			if (getName().equals(a))
				return true;

		return false;
	}

	public boolean isFree() {
		for (String a : Options.freeNames)
			if (getName().equals(a))
				return true;

		return false;
	}
}