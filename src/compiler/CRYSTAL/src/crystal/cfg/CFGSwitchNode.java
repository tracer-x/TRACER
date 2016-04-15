package crystal.cfg;

import crystal.ast.*;
import crystal.core.*;

import java.util.*;

/**
 * This represent a conditional statement, which evaluates some expression,
 *  and based on that, goes someplace.
 */
public class CFGSwitchNode extends CFGNode {

	/** Successor edges */
	List<CFGNode> outEdges;
	
	/** The test expression */
	CoreExpr test;
	Expression testSrc;

	/** Edge conditions, showing when the branch is taken. 
	 *  The default case has a null expression; and must be the last
	 *  in the vector of cases. */
	CoreExpr[] labels;
	List<Expression> labelsSrc;
	
	CFGSwitchNode(CFGSwitchNode other) {
		test = other.test;
		testSrc = other.testSrc;
		labelsSrc = new ArrayList<Expression>();
		outEdges = new ArrayList<CFGNode>();
		//for(int i = 0; i < other.outEdges.size(); i++)
		//	outEdges.add(null);
	}
	
	public CFGSwitchNode clone() {
		return new CFGSwitchNode(this);
	}
	
	CFGSwitchNode(Expression e) {
		labelsSrc = new ArrayList<Expression>();
		testSrc = e;
		outEdges = new ArrayList<CFGNode>();
	}
	
	public boolean isSwitch() {
		return true;
	}

	public void buildCoreExpressions() {
		test = CoreExpr.fromAST(testSrc);
		labels = new CoreExpr[labelsSrc.size()];
		for (int i = 0; i < labelsSrc.size(); i++) {
			Expression lab = labelsSrc.get(i);
			labels[i] = lab  == null ? null : CoreExpr.fromAST(lab);
		}
	}
	
	public int numSuccs() {
		return outEdges.size();
	}
	
	public CFGNode getSucc(int k) {
		return outEdges.get(k);
	}

	public void setSucc(int k, CFGNode n) {
		outEdges.set(k, n);
	}
	
	public void addSucc(CFGNode n) {
		labelsSrc.add(null);
		outEdges.add(n);
	}
	
	public void addSucc(CFGNode n, Expression labelSrc) {
		labelsSrc.add(labelSrc);
		outEdges.add(n);
	}
	
	/** Returns true if the switch has a default case.
	 *  The default edge is always at position 0. */
	boolean hasDefault() {
		return  outEdges.size() > 0 && labelsSrc.get(0) == null;
	}
	
	/** Adds an outgoing edge to node dest, annotated with label. 
	 *  Default edges are always placed at position 0. */
	void addEdge(CFGNode dest, Expression label) {
		if (label != null) {
			labelsSrc.add(label);
			outEdges.add(dest);
		}
		else {
			labelsSrc.add(0, null);
			outEdges.add(0, dest);
		}
	}
	
	public int numEdges() {
		return outEdges.size();
	}
	
	public CFGNode getEdge(int i) {
		return outEdges.get(i);
	}

	public CoreExpr getLabel(int i) {
		return labels[i];
	}
	
	public Expression getLabelSrc(int i) {
		return labelsSrc.get(i);
	}
	
	public CoreExpr getTest() {
		return test;
	}

	public Expression getTestSrc() {
		return testSrc;
	}

	public CoreExpr getCoreKid(int i) {
		switch (i) {
		case 0: return test;
		default: return null;
		}
	}

	public int numCoreKids() {
		return 1;
	}

	public String toString() {
		return "switch " + ASTPrinter.toString(testSrc, true);
	}

	public CFGNode getDefaultSucc() {
		for (int i = 0; i < outEdges.size(); i++)
			if (labelsSrc.get(i) == null)
				return outEdges.get(i);

		return null;
	}

    public boolean isIfThenElse() {
		return 
			numEdges() == 2 &&
			labelsSrc.get(0) == CaseLabelStat.DEFAULT &&
			labelsSrc.get(1) instanceof NumberExpr &&
			((NumberExpr)labelsSrc.get(1)).isZero();
    }
    
}
