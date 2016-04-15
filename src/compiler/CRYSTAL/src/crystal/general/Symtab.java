package crystal.general;

import java.io.Serializable;
import java.util.*;

public abstract class Symtab implements Serializable {
    /** The global scope */
    private static HashSymtab global;
    
    /** The current scope */
    private static Symtab current;
    
    protected Symtab parent;
    protected List<Symtab> kids;

    /** Removes this symbol table from the parent's children list. */
	public void detach() {
		for (int i = 0; i < parent.kids.size(); ++i) {
			if (parent.kids.get(i) == this) {
				parent.kids.remove(i);
				return;
			}
		}
    }

    /** Get current scope. */
    public static Symtab getCurrentScope() {
        return current;
    }
    
    /** Returns the symtab of the enclosing file. */
    public FileSymtab getEnclosingFunctionScope() {
    	Symtab tab = this;
    	while (tab != null && !(tab instanceof FileSymtab))
    		tab = tab.parent;

    	return (FileSymtab)tab;
    }

	/** Get global scope. */
    public static HashSymtab getGlobalScope() {
        return global;
    }
    
    /** Get the file scopes. */
	public static FileSymtab[] getFileScopes() {
		FileSymtab[] files = new FileSymtab[global.kids.size()];
		for(int i = 0; i < global.kids.size(); i++)
			files[i] = (FileSymtab)global.kids.get(i);
		return files;
	}

	/** Get parent scope. */
    public Symtab getParent() {
    	return parent;
    }
    
    /** Returns the depth of the current scope.
     *  The global scope is at depth zero. */
    public int getDepth() {
    	Symtab tab = this;
    	int i = 0;
    	for (; tab != null; i++, tab = tab.parent);
    	return i - 1; 
    }
    
    /** Get children scopes */
    public Iterable<Symtab> getKids() {
    	if (kids == null)
    		kids = new ArrayList<Symtab>();
    	return kids;
    }
    
    public Symtab getFirstKid() {
    	return kids.get(0);
    }
    
    public int numKids() {
    	return kids.size();
    }
    
    public Symtab getKid(int i) {
    	return kids.get(i);
    }
    
    /** Set the global/current scopes. */
    public static void setGlobalScope(HashSymtab stab) {
    	current = global = stab;
    }
    
    public void addKid(Symtab tab) {
    	if (kids == null)
    		kids = new ArrayList<Symtab>();
    	kids.add(tab);
    	tab.parent = this;
    }

	abstract public List<Symbol> getAllSymbols();

	/** Get all functions defined in the program. */
    private static Set<Function> functions = 
    	new HashSet<Function>();
    
    public static Set<Function> getFunctions() {
    	assert functions != null;
    	return functions;
    }
    
    /** Get all functions defined in a file. */
    private static Map<String, Set<Function>> funmap =
    	new HashMap<String, Set<Function>>();
    
    public static Set<Function> getFunctions(String file) {
    	Set<Function> filefuncs = funmap.get(file);
    	assert (filefuncs != null);
    	return filefuncs;
    }
    
    public static void recordFileFunctions(String file, Set<Function> funcs) {
    	Set<Function> old = funmap.put(file, funcs);
    	assert old == null;
    	functions.addAll(funcs);
    }
    
    /** Push scope s and make it a child of the current scope. */
    public static void pushScope(Symtab s) {
        if (current.kids == null)
            current.kids = new ArrayList<Symtab>();
        current.kids.add(s);

        s.parent = current;
        current = s;
    }
    
    /** Push scope s, but don't make it a child of the current
     *  scope. Used for struct, union, enum, and parameter scopes. */
    public static void pushScopeNoLink(Symtab s) {
        s.parent = current;
        current = s;
    }
    
    /** Pop and return the current scope. */
    public static Symtab popScope() {
        assert (current.parent != null);
        Symtab crt = current;
        current = current.parent;
        return crt;
    }
	
    /** Enter a symbol in a scope; if symbol exists, replace old one. */
    public abstract void insertSymLocal(Symbol sym);


    /** Inserts a symbol in a scope. Rename the symbol in case of conflicts. */
	public void forceInsertLocal(Symbol sym) {
		String name = sym.getName();
		int i = 1;
		while (lookupSymbol(sym) != null)
			sym.setName(name + "_" + i++);
	    insertSymLocal(sym);
	}

    /** Lookup a symbol by name, just in the current table. */
    public abstract Symbol lookupVFTLocal(String id);
    public abstract Symbol lookupSUELocal(String id);
    public abstract Label lookupLabelLocal(String id);
    
    /** Lookup by symbol */
    public Symbol lookupSymbol(Symbol sym) {
    	return lookupSymbol(sym.getKind(), sym.getName());
    }
    
    /** Lookup by kind and name */
    public Symbol lookupSymbol(byte kind, String name) {
    	switch(kind) {
    	case Flags.VAR :
    	case Flags.FUN :
    	case Flags.TYPE :  return lookupVFTLocal(name);
    	
    	case Flags.STRUCT :
    	case Flags.ENUM :
    	case Flags.UNION : return lookupSUELocal(name);
    		
    	case Flags.LABEL : return lookupLabelLocal(name);

    	default: return null;
    	}
    }
    
    /** Lookup by symbol in the current and parent scopes. */
    public Symbol lookupSymbolRecurse(Symbol sym) {
        Symbol newsym = lookupSymbol(sym);
        if (newsym != null) return newsym;
        return parent == null ? null : 
        	parent.lookupSymbolRecurse(sym);
    }

    /** Lookup by symbol in the current and parent scopes. */
    public Symbol lookupSymbolRecurse(byte kind, String name) {
        Symbol newsym = lookupSymbol(kind, name);
        if (newsym != null) return newsym;
        return parent == null ? null : 
        	parent.lookupSymbolRecurse(kind, name);
    }


    /** Enter label symbol in the table of the enclosing procedure, 
     *  or inside a block that declares it as local */
    public static Label addLabel(String id) {
        return current.addLabelSelf(id);
    }

    public Label addLabelSelf(String id) {
        Symtab s = this;

        while (s != null && 
        		!(s instanceof FunSymtab) && 
        		!s.isGnuLocalLabel(id))
        	s = s.parent;

        Label lab = new Label(id);
        s.insertSymLocal(lab);
        return lab;
    }

    public boolean isGnuLocalLabel(String id) {
    	return false;
    }

    /** Lookup a label recursively starting from /this/ scope */
    public Label lookupLabelSelf(String id) {
        return this.lookupLabelHelper(id);
    }

    /** Lookup a VFT symbol recursively starting from /this/ scope */
    public Symbol lookupVFTSelf(String id) {
    	return this.lookupVFTHelper(id);
    }

    /** Lookup a SUE symbol recursively starting from /this/ scope */
    public Symbol lookupSUESelf(String id) {
    	return this.lookupSUEHelper(id);
    }
    
    /** Lookup type name symbol */
    static public Type lookupTypedef(String id) {
    	/* occurs if the first token in the file is an identifier. */
    	if (current == null) return null;
    	return current.lookupTypedefHelper(id);
    }

    private Type lookupTypedefHelper(String id) {
    	Symbol sym = lookupVFTSelf(id);
        if (sym == null || sym.getKind() != Flags.TYPE)
            return null;        
        return new TypedefType(sym);
    }

    /** Lookup type name symbol starting from /this/ scope */
    public Type lookupTypedefSelf(String id) {
    	return lookupTypedefHelper(id);
    }

    /** Lookup a label symbol in the current scope. */
    public static Label lookupLabelRecurse(String id) {
        return current.lookupLabelHelper(id);
    }
    
    /** Lookup a VFT symbol in the current scope. */
    public Symbol lookupVFTRecurse(String id) {
    	return current.lookupVFTHelper(id);
    }
    
    /** Lookup a SUE symbol in the current scope. */
    public Symbol lookupSUERecurse(String id) {
    	return current.lookupSUEHelper(id);
    }
    
    /** Lookup VFT symbol -- helper method. */
    private Symbol lookupVFTHelper(String id) {
        assert id != null;
        
        Symbol sym = lookupVFTLocal(id);
        if (sym != null) return sym;

        if (parent != null) 
            return parent.lookupVFTHelper(id);

        return null;
    }
    
    /** Lookup SUE symbol -- helper method. */
    private Symbol lookupSUEHelper(String id) {
        assert id != null;
                
        Symbol sym = lookupSUELocal(id);
        if (sym != null) return sym;

        if (parent != null) 
            return parent.lookupSUEHelper(id);

        return null;
    }

    /** Lookup label symbol -- helper method. */
    private Label lookupLabelHelper(String id) {
        assert id != null;
        
        Label sym = lookupLabelLocal(id);
        if (sym != null) return sym;

        if (parent != null) 
            return parent.lookupLabelHelper(id);

        return null;
    }
        
    /** Print method. */
    public void print() {
        printRecurse("");
    }

    /** Helper print method. */
    private void printRecurse(String s) {
		System.out.printf("\n%sSymtab: %s\n", s, description());
    	printLocal(s);
        if (kids == null) return;
        for (Symtab child : kids) 
            child.printRecurse(s + "  ");
    }

    /** Print the symbols in the current symtab. */
    abstract public void printLocal(String s);

    public String description() {
    	return "";
    }
}

