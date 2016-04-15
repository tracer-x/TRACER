package crystal.emitc;

import java.util.*;

import crystal.ast.*;
import crystal.cfg.*;
import crystal.general.*;

/** A class for computing the subset of global symbols needed in a file. */
public class PurgeDeclarations {
	
	static Set<Symbol> compute(FileSymtab filetab) {
		Set<Symbol> syms = new HashSet<Symbol>();
		collect(filetab, syms);
		
		String filename = filetab.getFileName();
		for (Function fun : Symtab.getFunctions(filename)) {
			collect(fun.getType(), syms);

			CFGInfo cfg = fun.getCFG();
			if (cfg == null) {
				collect(fun.getBody(), syms);
			}
			else {
				for (CFGNode n : cfg.getAllNodes()) 
					collect(n, syms);
			}
		}
		
		if (filetab != null)
			for (Symbol sym : Symtab.getGlobalScope().getVFTSymbols()) {
				Initializer init = sym.getInitializer();
				if (init != null && filetab == sym.getInitFile()) {
					collect(init, syms);
					syms.add(sym);
					collect(sym.getType(), syms);
				}
			}
		
		for (Symbol sym : syms)
			if (sym.isGlobal() && !sym.isFunction() && !sym.isVariable())
		sym.print("  ");
		return syms;
	}

	private static void collect(CFGNode n, Set<Symbol> syms) {
		if (n instanceof CFGStatNode) {
			collect(((CFGStatNode)n).getStatement(), syms);
		}
		else {
			CFGSwitchNode s = (CFGSwitchNode) n;
			collect(s.getTestSrc(), syms);
			for (int i = 0; i < s.numEdges(); i++)
				collect(s.getLabelSrc(i), syms);
		}
	}

	private static void collect(Symtab tab, Set<Symbol> syms) {
		for (Symbol s : tab.getAllSymbols()) {
			Initializer init = s.getInitializer();
			if (init != null) collect(init, syms);
			
			collect(s.getType(), syms);
		}
	
		for (int i = 0; i < tab.numKids(); i++)
			collect(tab.getKid(i), syms);
	}

	private static void collect(Initializer init, Set<Symbol> syms) {
		if (init instanceof InitExpr) 
			collect(((InitExpr)init).getExpr(), syms);
		else 
			for (InitElement ie : ((InitList)init).getElems()) 
				collect(ie.getValue(), syms);
	}

	private static void collect(Type t, Set<Symbol> syms) {
		if (t == null) return;
		
		
		Symbol s = t.getTypeSymbol();
		if (s != null) {
			if (syms.contains(s)) 
				return;

			syms.add(s);
			collect(s.getType(), syms);
		}
		
		if (t instanceof ArrayType) {
			ArrayType at = (ArrayType)t;
			collect(at.getExpression(), syms);
		}

		if (t.isEnum()) {
			AggregateType at = (AggregateType)t;
			for (int i = 0; i < at.numFields(); i++) {
				EnumConstant ec = (EnumConstant)at.getField(i);
				collect(ec.getValue(), syms);
			}
		}

		for (int i = 0; i < t.numTypeKids(); i++)
			collect(t.getTypeKid(i), syms);
	}

	private static void collect(Statement s, Set<Symbol> syms) {
    	if (s == null) return;

    	for (int i = 0; i < s.numExprKids(); i++)
			collect(s.getExprKid(i), syms);

		for (int i = 0; i < s.numStatKids(); i++)
			collect(s.getStatKid(i), syms);
	}

	private static void collect(Expression e, Set<Symbol> syms) {
    	if (e == null) return;

		if (e instanceof VarExpr) {
			Symbol s = ((VarExpr)e).getSymbol();
			syms.add(s);
			collect(s.getType(), syms);
		}

		for (int i = 0; i < e.numTypeKids(); i++)
			collect(e.getTypeKid(i), syms);

		for (int i = 0; i < e.numExprKids(); i++)
			collect(e.getExprKid(i), syms);

		for (int i = 0; i < e.numStatKids(); i++)
			collect(e.getStatKid(i), syms);
		
	}
}
