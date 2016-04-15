package crystal.analysis.dataflow;

import java.util.*;

import crystal.cfg.*;
import crystal.core.*;
import crystal.general.*;
import crystal.util.*;

/** Liveness analysis for local variables whose addresses
 *  have not been taken. */
public class LiveVariables extends BitVectorAnalysis<Symbol> {
	
	private Map<CFGNode,IBitVector<Symbol>> gen;
	private Map<CFGNode,Symbol> kill;

	public LiveVariables() {
		super("Live variable analysis", BACKWARD, MAY);
	}
	
	protected IBitVector<Symbol> transfer(CFGNode n) {
		IBitVector<Symbol> after = res.get(n);
		IBitVector<Symbol> before = after.copy();
		
		Symbol ksym = kill.get(n);
		if (ksym != null)
			before.clear(ksym);

		before.or(gen.get(n));
		return before;
	}
	
    protected void initialize(Function fun) {
		/* build the indexer */
		Set<Symbol> set = Util.getLocalsOf(fun);
		index = new Indexer<Symbol>(set);
		
		/* initialize the worklist */
		CFGInfo cfg = fun.getCFG();
		IBitVector<Symbol> init = new IBitVector<Symbol>(index);
		res.put(cfg.exitNode, init);
		work.push(cfg.exitNode);

		/* build the gen/kill set at each node */
		gen = new HashMap<CFGNode, IBitVector<Symbol>>();
		kill = new HashMap<CFGNode, Symbol>();
		for (CFGNode n : cfg.getAllNodes()) {
			IBitVector<Symbol> bv = new IBitVector<Symbol>(index);
			gen.put(n, bv);
			
			CoreDerefExpr wr = n.getWrittenMem();
			if (wr != null && wr.isVariable()) {
				Symbol var = wr.getVariable();
				if (index.contains(var))
					kill.put(n, var);
			}
			
			for (int i = 0; i < n.numCoreKids(); i++) {
				CoreExpr e = n.getCoreKid(i);
				if (e != wr) setAll(e, bv);
			}
		}
	}

	private void setAll(CoreExpr e, IBitVector<Symbol> v) {
		if (e.isVariable()) {
			Symbol var = e.getVariable();
			if (index.contains(var))
				v.set(var);
		}
		for (int j = 0; j < e.numKids(); j++) 
			setAll(e.getKid(j), v);
	}
}
