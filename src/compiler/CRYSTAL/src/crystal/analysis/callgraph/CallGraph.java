package crystal.analysis.callgraph;

import java.util.*;

import crystal.analysis.pointer.PointerAnalysis;
import crystal.cfg.*;
import crystal.core.*;
import crystal.general.*;
import crystal.util.*;

/** The call-graph of the program. 
 *  Use points-to information to resolve indirect calls, if Steensgaard's 
 *  analysis has been run. Otherwise, resolve indirect via function signatures:
 *  among functions whose addresses have been taken, select those with
 *  matching number of arguments. */
public class CallGraph {
	
	private static Map<CFGCallNode, Pair<Function,List<Function>>> callersAndCallees;
	private static Map<Function, List<CFGCallNode>> callsites;
	private static boolean constructed = false;
	
	/** Returns the caller of a given callsite.  */
	public static Function getCaller(CFGStatNode callsite) {
		return callersAndCallees.get(callsite).fst;
	}
	
	/** Returns the set of callees at a given callsite.  */
	public static List<Function> getCallees(CFGStatNode callsite) {
		return callersAndCallees.get(callsite).snd; 
	}

	/** Returns the set of all callsites to a given function.  */
	public static List<CFGCallNode> getCallSitesTo(Function callee) {
		return callsites.get(callee);
	}

	/** Returns true if the function is called at least once. */
	public static boolean isCalled(Function callee) {
		return callsites.get(callee) != null;
	}

	public static void construct() {
		if (constructed)
			return;
				
		boolean pointer = 
			PointerAnalysis.available && PointerAnalysis.STEENSGAARD;
		
		collectAddrTakenFunctions();
		
		callersAndCallees =
			new HashMap<CFGCallNode, Pair<Function,List<Function>>>();
		callsites = new HashMap<Function, List<CFGCallNode>>();
		
		for (Function caller : Symtab.getFunctions()) 
			for (CFGNode n : caller.getCFG().getAllNodes())
				if (n instanceof CFGCallNode) {
					CFGCallNode callsite = (CFGCallNode)n;
					
					List<Function> v;
					
					if (pointer) 
						v = PointerAnalysis.getCallees(callsite);
					else
						v = CallGraph.getCalleesByType(callsite);
					
					callersAndCallees.put(callsite, 
							new Pair<Function,List<Function>>(caller,v));

					for (Function callee : v) {
						List<CFGCallNode> cv = callsites.get(callee);
						if (cv == null) {
							cv = new ArrayList<CFGCallNode>();
							callsites.put(callee, cv);
						}
						cv.add(callsite);
					}
				}
		
		constructed = true;
	}
	
	static public void printIndirectCalls() {
		assert constructed;

		if (funcsAddrTaken.size() == 0 && calls == direct) 
			return;
		
		System.out.println( 
				  "   Functions with address taken: " + funcsAddrTaken.size() +
			    "\n   Indirect function calls:      " + (calls - direct));

		if (calls == direct) 
			return;

		Map<Integer,Integer> histo1 = new HashMap<Integer,Integer>();
		Map<Integer,Integer> histo2 = new HashMap<Integer,Integer>();

		List<Function> l1 = null, l2 = null;
		for (CFGCallNode site : indSites) {
			if (PointerAnalysis.STEENSGAARD) {
				l1 = PointerAnalysis.getCallees(site);
				record(l1.size(), histo1);
			}
			
			l2 = CallGraph.getCalleesByType(site);
			record(l2.size(), histo2);
		}

		if (PointerAnalysis.STEENSGAARD)
			printHisto(histo1, "Pointer analysis");
		
		printHisto(histo2, "Signature-based");
	}

	public static void printHisto(Map<Integer, Integer> histo, String s) {
		List<Integer> list = new ArrayList<Integer>();
		for (Integer i : histo.keySet()) list.add(i);
		Collections.sort(list);
		System.out.println("   " + s + " indirect call disambiguation:");
		System.out.println("     Function set sizes: " + list);
		List<Integer> counts = new ArrayList<Integer>();
		for (Integer i : list) counts.add(histo.get(i));
		System.out.println("     Call site counts:   " + counts);

	}

	private static void record(int i, Map<Integer, Integer> histo) {
		Integer sz = new Integer(i);
		Integer count1 = histo.get(sz);
		int v = count1 == null ? 0 : count1.intValue();
		histo.put(sz, new Integer(v+1));
	}
	
	private static int calls = 0, direct = 0;
	private static Set<Function> funcsAddrTaken = new HashSet<Function>();	
	public static List<CFGCallNode> indSites = new ArrayList<CFGCallNode>();	
	
	public static void collectAddrTakenFunctions() {
		for (Function f : Symtab.getFunctions()) 
			for (CFGNode n : f.getCFG().getAllNodes()) 
				visitNode(f, n);
	}
	
	private static void visitNode(Function f, CFGNode n) {
		
		if (n instanceof CFGCallNode) {
			calls++;
			CFGCallNode call = (CFGCallNode)n;
			CoreExpr c = call.getFun();
			if (c instanceof CoreAddrExpr) {
				Symbol s = ((CoreAddrExpr)c).getSymbol();
				direct++;
				assert (s instanceof Function);
				visitCore(f, n, call.getLeft());
				for (int i = 0; i < call.numArgs(); i++) 
					visitCore(f, n, call.getArg(i));
				return;
			}
			else {
				indSites.add(call);
			}
		}
			
		for (int i = 0; i < n.numCoreKids(); i++) 
			visitCore(f, n, n.getCoreKid(i));
	}
	
	private static void visitCore(Function f, CFGNode n, CoreExpr e) {
		if (e == null) return;
		
		if (e instanceof CoreAddrExpr) {
			CoreAddrExpr ca = (CoreAddrExpr)e;
			Symbol s = ca.getSymbol();
			if (s instanceof Function) 
				funcsAddrTaken.add((Function)s);
		}
		
		for (int i = 0; i < e.numKids(); i++)
			visitCore(f, n, e.getKid(i));
	}
	
	private static Map<CFGCallNode,List<Function>> map =
		new HashMap<CFGCallNode,List<Function>>();
	
	public static List<Function> getCalleesByType(CFGCallNode callsite) {
		List<Function> targets = null;
		CoreExpr c = callsite.getFun();
		if (c instanceof CoreAddrExpr) {
			/* direct call */
			Symbol s = ((CoreAddrExpr)c).getSymbol();
			assert (s instanceof Function);
			targets = new ArrayList<Function>();
			targets.add((Function)s);
		}
		else {
			/* indirect call */
			targets = map.get(callsite);
			if (targets == null) {
				targets = new ArrayList<Function>();
				map.put(callsite, targets);

				for (Function f : funcsAddrTaken)
					if (matchArgs(f, callsite)) 
						targets.add(f);
			}
		}
		
		return targets;
	}

	public static boolean matchArgs(Function f, CFGCallNode callsite) {
		int p = f.numParams();
		int a = callsite.numArgs();
		if (a < p)
			return false;
		else if ((a == p) || ((p > 1) && f.getParam(p-1) == Symbol.varargs)) {
			CoreExpr lhs = callsite.getLeft();
			
			if (lhs == null) {
				return true;
			} else {
				Symbol ret = null;
				
				if (f.isDefined()) {
					ret = f.getReturnVar();
				}
				
				if (ret == null) {
					return false;
				}
				
				CoreExpr rhs = CoreExpr.getVar(ret);
				
				if (!isStruct(lhs.getType())) {
					return !isStruct(rhs.getType());
				} else {
					return TypeEquiv.cmpByStruct(
							lhs.getType(), rhs.getType()) == Order.EQUAL;
				}
			}
		} else {
			return false;
		}
	}
	
	private static boolean isStruct(Type t) {
		t = t.unwrap();
		return t.isStruct() || t.isUnion();
	}
}
