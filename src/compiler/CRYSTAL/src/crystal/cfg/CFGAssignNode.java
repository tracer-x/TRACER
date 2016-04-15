package crystal.cfg;

import java.util.HashSet;
import java.util.Set;

import crystal.ast.*;
import crystal.core.*;

public class CFGAssignNode extends CFGStatNode {
	CoreDerefExpr lhs;
	CoreExpr rhs;

	CFGAssignNode(Expression left, Expression right) {
		stat = new ExprStat(new AssignExpr(left, right));
		assert left != null;
		if (left.getFile() != null)
			stat.setLocationFrom(left);
		else if (right.getFile() != null)
			stat.setLocationFrom(right);
	}
	
	CFGAssignNode(CoreDerefExpr left, CoreExpr right, Statement stat) {
		// for cloning
		lhs = left;
		rhs = right;
		this.stat = stat;
	}
	
	public CFGAssignNode clone() {
		return new CFGAssignNode(lhs, rhs, stat);
	}
	
	CFGAssignNode(AssignExpr e) {
		stat = new ExprStat(e);
		if (e.getFile() != null)
			stat.setLocationFrom(e);
	}
	
	public boolean isAssign() {
		return true;
	}
	
	public void buildCoreExpressions() {
		AssignExpr expr = (AssignExpr)((ExprStat)stat).getExpr();
		CoreExpr e = CoreExpr.fromAST(expr.getLeft());

		if (!(e instanceof CoreDerefExpr)) 
			throw new RuntimeException("Invalid LHS in assignment: " + stat);

		lhs = (CoreDerefExpr) e;
		rhs = CoreExpr.fromAST(expr.getRight());
	}
	
	public CoreDerefExpr getLeft() {
		return lhs;
	}
	
	public CoreExpr getRight() {
		return rhs;
	}
	
	public CoreDerefExpr getWrittenMem() {
		return lhs;
	}

	public Set<CoreDerefExpr> getReadMem() {
		Set<CoreDerefExpr> set = new HashSet<CoreDerefExpr>();
		addRead(lhs.getExpr(), set);
		addRead(rhs, set);
		return set;
	}

	public CoreExpr getCoreKid(int i) {
		switch (i) {
		case 0: return lhs;
		case 1: return rhs;
		default: return null;
		}
	}

	public int numCoreKids() {
		return 2;
	}	
}
