package crystal.general;

import java.util.*;

public class HashSymtab extends Symtab {
	private static final long serialVersionUID = 3257846571688341813L;

	protected Map<String, Symbol> vftsyms, suesyms, labsyms;
	protected Set<String> localLabels;
    
    static private List<Symbol> emptyset = new ArrayList<Symbol>();    
    static private Map<String,Symbol> emptymap = new HashMap<String,Symbol>();    

    /** Get var/fun/type symbols. */
    public Iterable<Symbol> getVFTSymbols() {
    	return (vftsyms != null) ? vftsyms.values() : emptyset;
    }

    /** Get struct/union/enum symbols. */
    public Iterable<Symbol> getSUESymbols() {
    	return (suesyms != null) ? suesyms.values() : emptyset;
    }

	/** Get label symbols */
    public Iterable<Symbol> getLabelSymbols() {
    	return (labsyms != null) ? labsyms.values() : emptyset;
    }
    
    public Map<String, Symbol> getVFTMap() {
    	return (vftsyms != null) ? vftsyms : emptymap;
    }
    
    public Map<String, Symbol> getSUEMap() {
    	return (suesyms != null) ? suesyms : emptymap;
    }
    
    public Map<String, Symbol> getLabMap() {
    	return (labsyms != null) ? labsyms : emptymap;
    }
    
    public List<Symbol> getAllSymbols() {
    	List<Symbol> res = new ArrayList<Symbol>();
    	if (vftsyms != null) res.addAll(vftsyms.values());
    	if (suesyms != null) res.addAll(suesyms.values());
    	if (labsyms != null) res.addAll(labsyms.values());
    	return res;
    }
    
    public void insertSymLocal(Symbol sym) {
    	if (parent == null || parent.parent == null)
    		sym.setGlobal();
    	
    	symbolMapOf(sym.getKind()).put(sym.getName(), sym);
    }

    public void removeSymLocal(Symbol sym) {
    	symbolMapOf(sym.getKind()).remove(sym.getName());
    }
    
	public Symbol lookupVFTLocal(String id) {
		return symbolMapOf(Flags.VAR).get(id);
	}

	public Symbol lookupSUELocal(String id) {
		return symbolMapOf(Flags.STRUCT).get(id);
	}

	public Label lookupLabelLocal(String id) {
		return (Label)symbolMapOf(Flags.LABEL).get(id);
	}

	/** This registers the label name ID as a local label, 
	 *  implementing the GCC __label__ extension */
	public void markGnuLocalLabel(String id) {
		if (localLabels == null) 
			localLabels = new HashSet<String>();
		localLabels.add(id);
	}

	/** This returns whether the label was registered as local 
	 *  via the GCC __label__ extension */
	public boolean isGnuLocalLabel(String id) {
		if (localLabels == null) return false;
		return localLabels.contains(id);
	}
	
	public void printLocal(String s) {
		if (vftsyms != null)
			for(Symbol sym : vftsyms.values())
				if (!(sym instanceof EnumConstant))
					sym.print(s);
		if (suesyms != null)
			for(Symbol sym : suesyms.values())
				sym.print(s);
		if (labsyms != null)
			for(Symbol sym : labsyms.values())
				sym.print(s);
	}

	public boolean isEmpty() {
		return 
			(vftsyms == null || vftsyms.isEmpty()) && 
			(suesyms == null || suesyms.isEmpty()) && 
			(labsyms == null || labsyms.isEmpty());
	}

    private Map<String,Symbol> symbolMapOf(int kind) {
    	switch (kind) {
    	case Flags.VAR :
    	case Flags.FUN :
    	case Flags.TYPE : 
    		if (vftsyms == null) 
    			vftsyms = new HashMap<String,Symbol>();
    		return vftsyms;

    	case Flags.STRUCT :
    	case Flags.UNION :
    	case Flags.ENUM : 
    		if (suesyms == null) 
    			suesyms = new HashMap<String,Symbol>();
    		return suesyms;
    		
    	case Flags.LABEL :
    		if (labsyms == null) 
    			labsyms = new HashMap<String,Symbol>();
    		return labsyms;
    		
    	default: assert false;
    	}
    	return null;
    }
}