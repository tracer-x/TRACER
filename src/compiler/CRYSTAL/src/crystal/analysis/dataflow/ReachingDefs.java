package crystal.analysis.dataflow;

import crystal.cfg.*;
import crystal.core.*;
import crystal.general.*;
import crystal.util.*;

public class ReachingDefs extends BitVectorAnalysis<CFGNode> {
    private Function fun;

    /* parameters redefined inside function body */
    public int paramOver = 0;

    
    public ReachingDefs() {
    	super("Reaching definitions analysis", FORWARD, MAY);
    }

	/** Parameters have definitions at the entry CFGNode. 
     *  Return values are defined at return statements. */
    protected void initialize(Function func) {
        this.fun = func;

        /* build the indexer */
		CFGInfo cfg = func.getCFG();
        index = new Indexer<CFGNode>(cfg.getAllNodes());
		
        /* initialize the worklist
         * create phantom definition for all parameters */
		IBitVector<CFGNode> init = new IBitVector<CFGNode>(index);
        init.set(cfg.entryNode);
		res.put(cfg.entryNode, init);
		work.push(cfg.entryNode);
	}

    /** transfer (removes redefined values, adds new defs) */
    protected IBitVector<CFGNode> transfer(CFGNode n) {
        
		IBitVector<CFGNode> before = res.get(n);
		IBitVector<CFGNode> after = before.copy();

		CoreDerefExpr wr = n.getWrittenMem();
        if (wr != null && wr.isLocalVar()) {
		    for (CFGNode rd : before) {
                CoreDerefExpr d = rd.getWrittenMem();
                if (d == wr)
                    after.clear(rd);
                else if (d == null) {
                	assert rd.isEntry();
                	for (int i = 0; i < fun.numParams(); i++)
                		if (d == CoreExpr.getVar(fun.getParam(i)))
                			paramOver++;
                }
            }

		    after.set(n);
		}

        if (n.isReturn())
            after.set(n);
		
		return after;
	}
	
	public void printResult(Function func) {
		System.out.println("RESULT for: " + func.getNameAndFile());
		for (CFGNode n : func.getCFGNodes()) {
            System.out.printf("Before node %-30s : \n", n);
            for (CFGNode rd : res.get(n))
                System.out.printf("\t %-30s\n",rd);
		}
	}
}
