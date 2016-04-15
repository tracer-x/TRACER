package crystal.analysis.dataflow;

import java.util.*;

import crystal.cfg.*;
import crystal.general.*;

public abstract class DataflowAnalysis<E> {
	
	protected Stack<CFGNode> work = new Stack<CFGNode>();
	protected Map<CFGNode,E> res;
	
	protected String name;
	protected boolean forward;
	
    protected static final boolean FORWARD = true;
	protected static final boolean BACKWARD = false;
	
	public DataflowAnalysis(String n, boolean f) {
		name = n;
		forward = f;
	}
	
	/** Runs the analysis for all functions.
	 *  Returns a map containing the results for all functions. */
	public Map<Function, Map<CFGNode,E>> analyzeAll() {
		Map<Function, Map<CFGNode,E>> map = 
			new HashMap<Function, Map<CFGNode,E>>();
			
		if (Options.VERBOSITY >= 1)
			System.out.print(name + "... ");
		long time = System.currentTimeMillis();
		
		for (Function fun : Symtab.getFunctions())
			if (!fun.isInit()) 
				map.put(fun, analyze(fun));
		
		time = System.currentTimeMillis()  - time;
		if (Options.VERBOSITY >= 1)
			System.out.printf("done. (%.2f s)%n", (float)(time/1000.0));
		
		if (Options.VERBOSITY >= 3)
			crystal.Main.printMemoryUsage();
		System.out.flush();
		
		return map;
	}
	
	/** Returns the analysis result for the last function. */
	public Map<CFGNode, E> getResult() {
		return res;
	}

	/** Runs the analysis for function f and returns the result. */
	public Map<CFGNode,E> analyze(Function f) {
		analyzeOptimized(f);
		return res;
	}
	
	/** A simple implementation of the worklist dataflow algorithm */
	public int analyzeSimple(Function fun) {
		res = new HashMap<CFGNode, E>();
		work.clear();
		
		initialize(fun);

		int iter;
		for(iter = 0; !work.isEmpty(); iter++) {
			CFGNode n = work.pop();
			E e = transfer(n);
			int ns = forward ? n.numSuccs() : n.numPreds();
			for (int i = ns - 1 ; i >= 0; i--) {
                E ep = branchTaken(e, i, ns);
				CFGNode succ = forward ? n.getSucc(i) : n.getPred(i);
				if (merge(ep, succ)) work.push(succ);
			}
		}

		return iter;
	}
	
	/** An efficient implementation of the worklist dataflow algorithm. 
	 *  Each node n has a value n.val that indicates how many predecessors
	 *  of n still need to be processed. Nodes with n.val = 1 are ready to go.
	 *  A value n.val = 0 indicates that n is not in the worklist. */
	public int analyzeOptimized(Function fun) {
		res = new HashMap<CFGNode, E>();
		work.clear();
		
		initialize(fun);

		for (CFGNode n : getCFGNodes(fun))
			n.val = 0;
		for (CFGNode n : work) 
			n.val = 1;

		int iter;
		for(iter = 0; !work.isEmpty(); iter++) {
			CFGNode n = select();
			E e = transfer(n);

			int ns = forward ? n.numSuccs() : n.numPreds();
			for (int i = ns - 1; i >= 0; i--) {
				CFGNode succ = forward ? n.getSucc(i) : n.getPred(i);
				
				if (succ.val >= 2) succ.val--;
                E ep = branchTaken(e, i, ns);
				if (merge(ep, succ) && succ.val == 0) {
					work.push(succ);
					succ.val = 
						(byte) (forward ? succ.numPreds() : succ.numSuccs());
				}
			}
		}

		return iter;
	}

	protected Iterable<CFGNode> getCFGNodes(Function f) {
		// Subclasses can now override this behavior, e.g., in the 
		// case that f might be null or we only want a subset
		// of cfg nodes.
		return f.getCFGNodes();
	}
	
	/* Select a node from the top of the work stack.
	 * Look for a node whose value is 1. 
	 * Search at most 10 elements at the top of the stack. */
	private CFGNode select() 
	{
		CFGNode n = null;
		int i, j;
		for (i = work.size()-1, j = 0; i >= 0; i--, j++) {
			n = work.get(i);
			if (n.val == 1 || j == 10) {
				work.remove(i);
				break;
			}
		}

		if (i < 0) 
			n = work.pop();
		
		n.val = 0;
		return n;
	}


    protected abstract void initialize(Function fun);

    protected abstract E transfer(CFGNode n);
    
    protected abstract boolean merge(E e, CFGNode n);
    
    /** for dataflow analyses that are sensitive on conditions taken */ 
    protected E branchTaken(E in, int branch, int totalBranches) {
        return in;
    }
	
	public void printResult(Function fun) {
		System.out.println("RESULT for: " + fun.getNameAndFile());
		for (CFGNode n : fun.getCFGNodes()) 
			System.out.printf(" node %-30s : %s\n", n, res.get(n));
	}
}
