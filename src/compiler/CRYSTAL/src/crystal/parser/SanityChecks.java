package crystal.parser;

import java.util.*;

import crystal.ast.*;
import crystal.general.*;

class SanityChecks {

	private static Set<Type> checked;
	private static String filename;
	private static Function current;
	
	static void run() {
		/* check the symbol tables */
		checked = new HashSet<Type>();
		Symtab global = Symtab.getGlobalScope();
		checkSymtab(global);
		
		/* check the code */
		for (FileSymtab tab : Symtab.getFileScopes()) {
			filename = tab.getFileName();
	        for (Function fun : Symtab.getFunctions(filename)) {
	        	current = fun;
	        	checkAST(fun.getBody(), fun.getSymTab());
	        	current = null;
	        }
	        filename = null;
		}
	}
	
	private static void checkSymtab(Symtab tab) {
		for (Symbol s : tab.getAllSymbols()) {
			Initializer init = s.getInitializer();
			if (init != null)
		    	try{
		    		checkInitializer(init, tab);
		    	}
			catch(RuntimeException e) {
				System.out.printf("Initialization error for %s:\n\t%s\n\n",
						s.getNameAndFile(), e.getMessage());
    	}
			
			checkType(s.getType(), tab);
		}
		
		for(Symtab kidtab : tab.getKids()) 
			checkSymtab(kidtab);
	}
	
    private static void checkInitializer(Initializer init, Symtab tab) {
    	if (init instanceof InitExpr) 
    		checkAST(((InitExpr)init).getExpr(), tab);
    	else
    		for (InitElement i : ((InitList)init).getElems())
    			checkInitializer(i.getValue(), tab);
    }
    
	private static void checkType(Type t, Symtab tab) 
    {
    	if (t == null) return;
    	
    	if (checked.contains(t)) return;
    	else checked.add(t);
    	
    	if (t instanceof AggrNameType) {
    		AggrNameType agg = (AggrNameType)t;
    		Symbol sym = agg.getTypeSymbol();
    		checkSymbol(sym, tab);
    	}
    	
    	if (t instanceof TypedefType) {
    		Symbol sym = t.getTypeSymbol();
    		checkSymbol(sym, tab);
    		if(sym.getKind() != Flags.TYPE)
    			throw new RuntimeException(
    					"Invalid kind for: " +
    					sym.getNameAndFile());
    	} 

    	for (int i = 0; i < t.numTypeKids(); i++)
    		checkType(t.getTypeKid(i), tab);
    }

	private static void checkAST(Statement stat, Symtab tab) 
    {
    	if (stat == null) return;
	    	
    	if (stat instanceof BlockStat) 
    		tab = ((BlockStat)stat).getSymTab();
	    		
    	for (int i = 0; i < stat.numStatKids(); i++)
    		checkAST(stat.getStatKid(i), tab);
			
    	for (int i = 0; i < stat.numExprKids(); i++)
    		checkAST(stat.getExprKid(i), tab);
    }

    private static void checkAST(Expression expr, Symtab tab) 
    {
    	if (expr == null) return;
			
    	for (int i = 0; i < expr.numExprKids(); i++)
    		checkAST(expr.getExprKid(i), tab);

    	for (int i = 0; i < expr.numTypeKids(); i++)
    		checkType(expr.getTypeKid(i), tab);

    	for (int i = 0; i < expr.numStatKids(); i++)
    		checkAST(expr.getStatKid(i), tab);
    		
    	if (expr instanceof VarExpr) {
    		VarExpr e = (VarExpr)expr;
    		Symbol sym = e.getSymbol();
    		checkSymbol(sym, tab);
		}
    	else if (expr instanceof FieldExpr) {
    		FieldExpr e = (FieldExpr)expr;
    		Type ftype = e.getField().getType();
    		checkType(ftype, tab);

    		Type etype = e.getBase().getType().unwrap();
    		if (e.isDeref()) 
    			etype = etype.getTargetType().unwrap();
    		AggregateType atype = (AggregateType)etype;
    		Symbol field = atype.getField(e.getField().getName());
    		if (field != e.getField())
    			throw new RuntimeException("invalid field in: " + expr);
    	}
    }

    private static void checkSymbol(Symbol sym, Symtab tab) {
    	Symbol other = tab.lookupSymbol(sym);
    	if (sym == other) return;

    	other = null;
    	if (tab.getParent() != null)
    		other = tab.getParent().lookupSymbolRecurse(sym);
    	if (sym == other) return;

    	throw new RuntimeException(
    			"\nSymbol not found in symbol table: " + 
    			sym.getNameAndFile() + 
    			"\nWhile checking file \"" + filename +
    			"\", function \"" + current.getName() +"\"");
	}

}
