package crystal.cfg;

import java.util.*;

import crystal.core.*;

/**
 *  Common base for all CFG Nodes --- provides a way of walking the tree.
 *  This class keeps track of the predecessor multiset, but the successor 
 *  lists are kept by subclasses, as they might have to annotate the edges. 
 */
public abstract class CFGNode {
	
	/** Returns the number of successors */
	abstract public int numSuccs();
	
	/** Returns the k-th successor */
	abstract public CFGNode getSucc(int k);
	
	/** Sets the k-th successor to be node n */
	abstract public void setSucc(int k, CFGNode n);
	
	/** A number used for optimizing worklist dataflow analyses */
	public byte val;

	/** The list of predecessor nodes */
	List<CFGNode> preds = new ArrayList<CFGNode>(2);

	abstract public CFGNode clone();
	
	/** Returns the number of predecessors */
	public int numPreds() {
		return preds.size();
	}
	
	/** Returns the k-th predecessor */
	public CFGNode getPred(int k) {
		return preds.get(k);
	}
	
	/** Adds predecessor p for the current node */
	public void addPred(CFGNode p) {
		preds.add(p);
	}

	abstract public void addSucc(CFGNode s);
	
	/** Adds p as the first predecessor of the current node */
	void addPredFirst(CFGNode p) {
		preds.add(0, p);
	}

	abstract public void buildCoreExpressions();
	abstract public int numCoreKids();
	abstract public CoreExpr getCoreKid(int i);
	
	public boolean isEntry() {
		return false;
	}

	public boolean isExit() {
		return false;
	}
	
	public boolean isSwitch() {
		return false;
	}

	public boolean isReturn() {
		return false;
	}
	
	public boolean isCall() {
		return false;
	}

	public boolean isAlloc() {
		return false;
	}

	public boolean isFree() {
		return false;
	}

	public boolean isAssign() {
		return false;
	}

	public CoreDerefExpr getWrittenMem() {
		return null;
	}

	public Set<CoreDerefExpr> getReadMem() {
		Set<CoreDerefExpr> set = new HashSet<CoreDerefExpr>();
		for (int i = 0; i < this.numCoreKids(); i++)
			set.addAll(getCoreKid(i).getMemExpr());
		return set;
	}

	protected void addRead(CoreExpr e, Set<CoreDerefExpr> set) {
		if (e instanceof CoreDerefExpr)
			set.add((CoreDerefExpr)e);
		
		for (int i = 0; i < e.numKids(); i++)
			addRead(e.getKid(i), set);
		
	}
	abstract public String toString();
}
