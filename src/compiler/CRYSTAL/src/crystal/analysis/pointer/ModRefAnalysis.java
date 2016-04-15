package crystal.analysis.pointer;

import crystal.analysis.callgraph.CallGraph;
import crystal.cfg.*;
import crystal.core.*;
import crystal.general.*;

import java.util.*;

public class ModRefAnalysis {
	static Map<Function, Set<Region>> modRegions = 
		new HashMap<Function, Set<Region>>();

	static Map<Function, Set<Region>> refRegions =
		new HashMap<Function, Set<Region>>();

	static Set<Region> empty = new HashSet<Region>();

	public static Set<Region> modRegionsOf(Function fun) {
		Set<Region> regs = modRegions.get(fun);
		return regs != null ? regs : empty;
	}

	public static Set<Region> refRegionsOf(Function fun) {
		Set<Region> regs = refRegions.get(fun);
		return regs != null ? regs : empty;
	}

	public static void run() {
		Stack<Function> worklist = new Stack<Function>();

		/* Compute locally accessed regions */
		for (Function fun : Symtab.getFunctions()) {
			getLocalRegions(fun);
			worklist.push(fun);
		}

		/* Propagate region sets inter-procedurally */
		while (!worklist.isEmpty()) {
			Function fun = worklist.pop();
			Set<Region> calleeMod = modRegions.get(fun);
			Set<Region> calleeRef = refRegions.get(fun);
			
			Iterable<CFGCallNode> callsites = CallGraph.getCallSitesTo(fun);
			if (callsites != null)
				for (CFGCallNode callsite : callsites) {
					Function caller = CallGraph.getCaller(callsite);
					Set<Region> callerMod = modRegions.get(caller);
					Set<Region> callerRef = refRegions.get(caller);
					
					boolean bmod = callerMod.addAll(calleeMod);
					boolean bref = callerRef.addAll(calleeRef);
					if (bmod || bref) 
						worklist.add(caller);
				}
		}
	}

	private static void getLocalRegions(Function fun) {
		Set<Region> modSet = new HashSet<Region>();
		Set<Region> refSet = new HashSet<Region>();
		
		for (CFGNode node : fun.getCFGNodes()) {
			CoreDerefExpr wr = node.getWrittenMem();
			if (wr != null) {
				Region rwr = Region.regionOf(wr);
				if (!rwr.isLocal()) 
					modSet.add(rwr);
			}
			
			for (CoreDerefExpr rd : node.getReadMem()) {
				Region rrd = Region.regionOf(rd);
				if (!rrd.isLocal())
					refSet.add(rrd);
			}
		}
		
		modRegions.put(fun, modSet);
		refRegions.put(fun, refSet);
	}

	public static boolean modifies(Function callee, CoreExpr e) {
		if (e.isDeref()) {
			CoreDerefExpr de = (CoreDerefExpr)e;
			Region r = Region.regionOf(de);
			if (modRegions.get(callee).contains(r))
				return true;
		}
		
		for (int i = 0; i < e.numKids(); i++)
			if (modifies(callee, e.getKid(i)))
				return true;
		
		return false;
	}

	public static boolean accesses(Function callee, Region r) {
		return 
			modRegions.get(callee).contains(r) ||
			refRegions.get(callee).contains(r);
	}
}