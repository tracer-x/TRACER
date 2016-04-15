package crystal.analysis.ipa;

import java.util.*;

import crystal.analysis.callgraph.*;
import crystal.cfg.*;
import crystal.core.*;
import crystal.general.*;
import crystal.util.*;

public class IPAnalysisEngine <I, S extends Secondary<S>, 
                               E extends Element<I,S,E>,
                               A extends Abstraction<S,E>> 
{
	public static final boolean FORWARD = true;
	public static final boolean BACKWARD = false;
	
	/** The analysis direction: forward or backward */
	private boolean dir;
	
	/** An implemenation of the analysis interface */
    private IPAnalysis<E> analysis;
    
    /** The worklist structure */
    private Stack<WorklistElement> worklist = new Stack<WorklistElement>();
    
    /** The cutoff */
    private int cutoff = Integer.MAX_VALUE;
    
    /** Print out each iteration of the analysis */
    private boolean tracing = false;
    
    /** Record links between configurations to aid 
        reconstruction of traces */
	private boolean keepLinks = false;
    
    /** The analysis result at each program point */
    private Map<CFGNode, A> result = new HashMap<CFGNode,A>();

    /** The call site information: 
     * (callee, callee context) -> set of (call site, component at call) */
    private Map<Pair<Function,I>, Set<Pair<CFGCallNode,E>>> callmap =
    	new HashMap<Pair<Function,I>, Set<Pair<CFGCallNode,E>>>();

    
    public IPAnalysisEngine(IPAnalysis<E> a) {
        analysis = a;
        this.dir = FORWARD;
    }
    
    public IPAnalysisEngine(IPAnalysis<E> a, boolean dir) {
        analysis = a;
        this.dir = dir;
    }

    public void initialize(Function func, CFGNode node, E elem) {
    	propagate(func, node, null, elem);
    }


	/** Starts the analysis at a node, and not one of its 
	 *  successors/predecessors */
	public void initializeAtSpot(Function func, CFGNode node, E elem) {
		insert(func, node, null, elem);
	}

    public void setCutoff(int c) {
    	cutoff = c;
    }
    
    public void setTracing() {
    	tracing = true;
    }
    
    public void setKeepLinks() {
    	keepLinks = true;
    }
    
    public void reset() {
    	worklist.clear();
    	result.clear();
    	callmap.clear();
    }
    
    public Map<CFGNode,A> getResult() {
    	return result;
    }
    
    private Iterable<E> getSummaryOut(Function fun, I ctx) 
    {
    	List<E> out = new ArrayList<E>();
    	CFGInfo cfg = fun.getCFG();
    	CFGNode exit = dir ? cfg.exitNode : cfg.entryNode;
    	Abstraction<S,E> a = result.get(exit);
    	
    	if (a != null)
    		for (E e : a)
    			if (e.context == ctx)
    				out.add(e);
    	
    	return out;
    }
    
    private void putCallInfo(Function callee, I context, 
    					     CFGCallNode call, E atcall) 
    {
    	Pair<Function,I> p = new Pair<Function,I>(callee, context); 
    	Set<Pair<CFGCallNode, E>> v = callmap.get(p);
    	if (v == null) {
    		v = new HashSet<Pair<CFGCallNode, E>>();
    		callmap.put(p, v);
    	}
    	v.add(new Pair<CFGCallNode,E>(call, atcall));
    }
        
    private Iterable<Pair<CFGCallNode,E>> 
    	getCallInfo(Function callee, I context) 
    {
    	if (context != null) 
        	return callmap.get(new Pair<Function,I>(callee, context));

    	/* If null context, then return to all callsites */
    	List<Pair<CFGCallNode, E>> v = new ArrayList<Pair<CFGCallNode, E>>();
    	Iterable<CFGCallNode> callers = CallGraph.getCallSitesTo(callee);
    	if (callers != null)
    		for (CFGCallNode call : callers)
    			v.add(new Pair<CFGCallNode,E>(call, null));
    	return v;
    }

    public int run() {
    	int i;
        for (i = 0; !worklist.isEmpty() && i < cutoff; i++) 
        	process(worklist.pop());
        return i;
    }
    
    public void process(WorklistElement we) {
    	Function func = we.func;
        CFGNode node = we.node;
        E elem = we.elem;

		if (tracing) 
			System.out.printf("  %-20s %-40s %s\n", 
					cut(func.toString(), 20), cut(node.toString(),40), elem);
		
        Iterable<E> res = null;

    	/* Call site: propagate to callees and use summaries. */
        if (node.isCall()) {
        	CFGCallNode call = (CFGCallNode)node;
        	List<E> passThrough = null;
        	
            for (Function callee : CallGraph.getCallees(call)) {
				Pair<Iterable<E>, Iterable<E>> p = 
					analysis.map(call, elem, callee);

				if (p.fst != null) {
					CFGInfo cfg = callee.getCFG();
					if (cfg == null) continue;
					CFGNode entry = dir ? cfg.entryNode : cfg.exitNode;
					for (E in : p.fst) {
						/* propagate to callee. */
						I ctx = in.index;
						in.context = ctx;
						insert(callee, entry, elem, in);
            		
						/* store call-site information. */
						putCallInfo(callee, ctx, call, elem);
                    	
						/* use summary. */
						for (E eout : getSummaryOut(callee, ctx)) 
							for (E eret: analysis.unmap(call, elem, eout, callee)) 
							{
								eret.context = elem.context;
								propagate(func, call, eout, eret);
							}
					}
				}
				
				if (p.snd != null) {
					if (passThrough == null)
						passThrough = new ArrayList<E>();

					for (E e : p.snd) 
						passThrough.add(e);
				}
            }

            res = passThrough;
        } 
        else 
        	res = analysis.transfer(node, elem, func);

        /* All instructions: propagate to successors. */
        if (res == null) return;
        for (E one : res) {
        	one.context = elem.context;
        	propagate(func, node, elem, one);
        }

		/* Method exit: propagate back to callers. */
		if (dir ? node.isExit() : node.isEntry()) {
			Iterable<Pair<CFGCallNode, E>> ii = getCallInfo(func, elem.context); 
			assert ii != null;
			for (Pair<CFGCallNode, E> p : ii) {
				CFGCallNode call = p.fst;
				Function caller = CallGraph.getCaller(call);
				
				/* Propagate unmapped results to callers. */
				for (E eout : res) 
					for (E eret : analysis.unmap(call, p.snd, eout, func)) 
					{					
						eret.context = p.snd == null ? null : p.snd.context;
						propagate(caller, call, eout, eret);
					}
			}
		}
    }

    private String cut(String s, int i) {
    	s = s.trim();
    	return (s.length() < i) ? s : s.substring(0, i-3) + "...";
	}

	/** Propagate e to successors of node n.  
     *  The predecessor component is prev. */
    private void propagate(Function func, CFGNode n, E prev, E e) {
    	int num = dir ? n.numSuccs() : n.numPreds();
    	for (int k = 0; k < num; k++) {
    		CFGNode succ = dir ? n.getSucc(k) : n.getPred(k);
    		if (succ == null) continue;

    		CFGNode swnode = dir ? n : succ;
    		CFGNode branch = dir ? succ : n;
    		
    		/* filter dataflow information at if/while tests */
    		if (swnode instanceof CFGSwitchNode) {
    			CFGSwitchNode sw = (CFGSwitchNode)swnode;
    			if (sw.isIfThenElse()) {
    				E testElem = e.clone();
    				CoreExpr testExpr = sw.getTest();
    				boolean trueBranch = (branch == sw.getEdge(0));
    				if (analysis.filter(testElem, testExpr, trueBranch))
    					insert(func, succ, prev, testElem);
    				continue;
    			}
    		}

    		/* standard case -- no filtering */
    		insert(func, succ, prev, e);
    	}
    }
        
    @SuppressWarnings("unchecked")
	private void insert(Function f, CFGNode n, E prev, E e) {
    	Abstraction<S,E> a = result.get(n);
    	if (a == null) {
    		a = new Abstraction<S,E>();
    		result.put(n, (A)a);
    	}
		Pair<E, Boolean> p = a.propagate(e);
		if (keepLinks)
			addLinkInfo (n, prev, p.fst);
		if (p.snd)
			worklist.push(new WorklistElement(f, n, p.fst));    	
    }
    
    class WorklistElement {
    	Function func;
    	CFGNode node;
    	E elem;

    	WorklistElement(Function f, CFGNode n, E e) {
    		func = f;
    		node = n;
    		elem = e;
    	}
    }

	private Map<CFGNode, List<Pair<E,E>>> links =
		new HashMap<CFGNode, List<Pair<E,E>>>();
	
	void addLinkInfo(CFGNode node, E src, E sink) { 
		List<Pair<E,E>> nlinks = links.get(node);
		if (nlinks == null) {
			nlinks = new LinkedList<Pair<E,E>>();
			links.put(node, nlinks);
		}
		
		nlinks.add(new Pair<E,E>(src, sink));
	}
	
	public List<Pair<E,E>> getLinkInfo(CFGNode node) {
		List<Pair<E,E>> nlinks = links.get(node);
		return nlinks != null ? nlinks : new LinkedList<Pair<E,E>>();
	}

	public Map<CFGNode, List<Pair<E,E>>> getLinks() {
		return links;
	}
}
