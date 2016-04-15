package crystal.analysis.dataflow;

import java.util.*;

import crystal.analysis.alias.*;
import crystal.cfg.*;
import crystal.core.*;
import crystal.general.*;
import crystal.util.*;

public class AvailableExpr extends BitVectorAnalysis<CoreExpr> {
	
	private Map<CFGNode,IBitVector<CoreExpr>> gen;
	
	private Alias alias;
	public AvailableExpr(Alias a) {
		super("Available expressions analysis", FORWARD, MUST);
		alias = a;
	}
	
    protected IBitVector<CoreExpr> transfer(CFGNode n) {
		if (n.isReturn()) 
			return new IBitVector<CoreExpr>(index);

		IBitVector<CoreExpr> before = res.get(n);
		IBitVector<CoreExpr> after = before.copy();
		after.or(gen.get(n));

		CoreDerefExpr wr = n.getWrittenMem();
		if (wr != null)
			for (CoreExpr e : after)
				if (!alias.stable(e, wr))
					after.clear(e);
		
		if (n.isCall()) 
			for (CoreExpr e : after)
				if (!e.isPureLocalExpr())
					after.clear(e);
		
		return after;
	}
	
    protected void initialize(Function fun) {		
		/* build the indexer */
		Set<CoreExpr> set = Util.getExpressionsOf(fun);
		index = new Indexer<CoreExpr>(set);
		
		/* initialize the worklist */
		CFGInfo cfg = fun.getCFG();
		IBitVector<CoreExpr> init = new IBitVector<CoreExpr>(index);
		res.put(cfg.entryNode, init);
		work.push(cfg.entryNode);

		/* build the gen set at each node */
		gen = new HashMap<CFGNode, IBitVector<CoreExpr>>();
		for (CFGNode n : cfg.getAllNodes()) {
			IBitVector<CoreExpr> bv = new IBitVector<CoreExpr>(index);
			gen.put(n, bv);
			
			CoreExpr wr = n.getWrittenMem();
			for (int i = 0; i < n.numCoreKids(); i++) {
				CoreExpr e = n.getCoreKid(i);
				if (e != wr) setAll(e, bv);
			}
		}
	}

	private void setAll(CoreExpr e, IBitVector<CoreExpr> v) {
		if (index.contains(e))
			v.set(e);
		
		for (int j = 0; j < e.numKids(); j++) 
			setAll(e.getKid(j), v);
	}

	public int evalCSE(Function fun) {
		int count = 0;
		for (CFGNode n : fun.getCFGNodes()) {
			IBitVector<CoreExpr> bv = gen.get(n).copy();
			bv.and(res.get(n));
			count += bv.size();
		}
		return count;
	}
}
