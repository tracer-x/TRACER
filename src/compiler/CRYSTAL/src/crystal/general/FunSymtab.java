package crystal.general;

import java.util.*;

public class FunSymtab extends Symtab {
	private static final long serialVersionUID = 3618700811757499960L;
	
	private Function funsym = null;
    private List<Symbol> params;
    private List<Symbol> labels;
    private boolean voidargs = false;

    public FunSymtab() {
    	params = new ArrayList<Symbol>(3);
    }
    
    /** Retrieve the function symbol. */
    public Function getFunctionSymbol() {
    	return funsym;
    }
    
    public boolean hasVoidArgs() {
    	return voidargs;
    }

    public void setVoidArgs() {
    	voidargs = true;
    }

    /** Set the void arguments flag to a specific value */
    public void setVoidArgsTo(boolean newVal) {
    	voidargs = newVal;
    }
    
    /** Retrieve parameter symbols */
    public List<Symbol> getParams() {
    	return params;
    }
        
    /** Set the function symbol. */
    public void setFunctionSymbol(Function sym) {
        funsym = sym;
        sym.symtab = this;
    }
    
    public List<Symbol> getAllSymbols() {
    	List<Symbol> res = new ArrayList<Symbol>();
    	if (params != null) res.addAll(params);
    	if (labels != null) res.addAll(labels);
    	return res;
    }
    
	public void insertSymLocal(Symbol sym) {
		List<Symbol> v = null;
		switch (sym.getKind()) {
		case Flags.VAR   : 	v = params; break;
		case Flags.LABEL : 	if (labels == null)
							   	labels = new ArrayList<Symbol>();
							v = labels; break;
							
		case Flags.STRUCT:
		case Flags.ENUM:
		case Flags.UNION:
			throw new RuntimeException("struct in function " +
					"parameters: " + sym);

		case Flags.FUN: 
			throw new RuntimeException("function in function " +
					"parameters: " + sym);
			
		case Flags.TYPE: 
			throw new RuntimeException("typedef in function " +
					"parameters: " + sym);
			
		default: assert false : sym;	
		}
		int i = v.indexOf(sym);
		if (i == -1) v.add(sym);
		else v.set(i, sym);
	}

	public Symbol lookupSUELocal(String id) {
		return null;
	}
	
	public Symbol lookupVFTLocal(String id) {
		for (Symbol sym : params)
			if (sym.getName().equals(id))
				return sym;
		return null;
	}

	public Label lookupLabelLocal(String id) {
		if (labels == null)
			return null;
			
		for (Symbol sym : labels)
			if (sym.getName().equals(id))
				return (Label)sym;

		return null;
	}

	public void printLocal(String s) {
		for (Symbol sym : params)
			sym.print(s);
		if (labels != null)
			for (Symbol sym : labels)
				sym.print(s);
	}
	
	public boolean isEmpty() {
		return 
			(params == null || params.isEmpty()) && 
			(labels == null || labels.isEmpty());
	}
	
	public String description() {
		return "function " + funsym.getIdName();
	}
}


