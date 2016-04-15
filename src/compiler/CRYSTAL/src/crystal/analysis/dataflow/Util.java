package crystal.analysis.dataflow;

import java.util.*;

import crystal.cfg.*;
import crystal.core.*;
import crystal.general.*;

public class Util {

	/** Returns the set of "non-trivial" expressions in function 'fun' 
	 *  These include binary expressions, unary expressions, and
	 *  dereferences other than plain variables */
	public static Set<CoreExpr> getExpressionsOf(Function fun) {
		Set<CoreExpr> set = new HashSet<CoreExpr>();
		for (CFGNode n : fun.getCFG().getAllNodes()) 
			for (int i = 0; i < n.numCoreKids(); i++) 
				collectExpr(n.getCoreKid(i), set);
		return set;
	}

	private static void collectExpr(CoreExpr e, Set<CoreExpr> set) {
		if (!e.isAddrConstant() && !e.isNumConstant() &&
			!e.isStringConstant() && !e.isAlloc() && !e.isVariable() &&
			!(e instanceof CoreFieldExpr))
			set.add(e);
		
		for (int j = 0; j < e.numKids(); j++) 
			collectExpr(e.getKid(j), set);
	}

	/** Returns the set of local variables of function 'fun', 
	 *  whose addresses have not been taken */
	public static Set<Symbol> getLocalsOf(Function fun) {
		Set<Symbol> set = new HashSet<Symbol>();
		for (CFGNode n : fun.getCFG().getAllNodes()) 
			for (int i = 0; i < n.numCoreKids(); i++) 
				collectVar(n.getCoreKid(i), set);
		return set;
	}

	private static void collectVar(CoreExpr e, Set<Symbol> set) {
		if (e.isPureLocalVar()) 
			set.add(e.getVariable());
		
		for (int j = 0; j < e.numKids(); j++) 
			collectVar(e.getKid(j), set);
	}
}
