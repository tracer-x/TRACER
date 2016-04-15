package crystal.analysis.dataflow;

import java.util.*;

import crystal.cfg.*;
import crystal.general.*;
import crystal.util.*;

public class Dominators extends BitVectorAnalysis<CFGNode> {

	Map<CFGNode, CFGNode> idom = new HashMap<CFGNode,CFGNode>();
	
	public static final boolean PREDOM = true;
	public static final boolean POSTDOM = false;
	
	/** Dominators(PREDOM) computes dominators 
	 *  Domniators(POSTDOM) computes post-dominators */
    public Dominators(boolean d) {
    	super((d ? "Dominators" : "Post-dominators") + " analysis", 
    		   d, MUST);
    }

    public Dominators() {
    	this(PREDOM);
    }

    /** Returns true if node n1 dominates ndoe n2 */
	public boolean dominates(CFGNode n1, CFGNode n2) {
		return res.get(n2).get(n1);
	}

	/** Returns the immediate dominator of node n */
	public CFGNode idom(CFGNode n) {
		return idom.get(n);
	}

    protected void initialize(Function func) {
        /* build the indexer */
		CFGInfo cfg = func.getCFG();
        index = new Indexer<CFGNode>(cfg.getAllNodes());
		
        /* initialize the worklist */
		IBitVector<CFGNode> init = new IBitVector<CFGNode>(index);
		CFGNode start = forward ? cfg.entryNode : cfg.exitNode;
		res.put(start, init);
		work.push(start);
	}

    protected IBitVector<CFGNode> transfer(CFGNode n) {
		IBitVector<CFGNode> before = res.get(n);
		IBitVector<CFGNode> after = before.copy();
        after.set(n);
		return after;
	}
	
	/** Computes the dominator set, as well the immediate dominators.
	 *  Only the dominator sets are returned. */
	public Map<CFGNode,IBitVector<CFGNode>> analyze(Function fun) {
		super.analyze(fun);
		computeIDom();
		return res;
	}

	/** Compute the immediate dominators */
	private void computeIDom() {
		for (CFGNode n : res.keySet()) {
			IBitVector<CFGNode> rn = res.get(n);

			CFGNode id = null;
			int rnsize = rn.size();
			List<CFGNode> rnlist = rn.elementList();
			for (int i = rnsize-1; i >= 0; i--) {
				CFGNode d = rnlist.get(i);
				if (res.get(d).size() == rnsize - 1) {
					id = d;
					break;
				}
			}
			
			assert id != null 
				|| (forward && n.isEntry())
				|| (!forward && n.isExit());
			
			idom.put(n, id);
		}
	}
	
	public void printResult(Function func) {
		System.out.println("\nRESULT for: " + func.getNameAndFile());
		for (CFGNode n : func.getCFGNodes()) 
            System.out.printf("Node %d: %-20s \n", index.indexOf(n), n);
		
		System.out.println();
		for (CFGNode n : func.getCFGNodes()) {
			System.out.printf("Node %2d: idom = %2d, doms = %s\n", 
					index.indexOf(n), index.indexOf(idom.get(n)),
            		res.get(n).toStringIndexList());
		}
	}
}
