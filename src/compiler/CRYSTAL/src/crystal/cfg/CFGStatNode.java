package crystal.cfg;

import crystal.ast.*;
import crystal.core.*;

/** A node representing a (potentially no-op) statement, with one successor */
public class CFGStatNode extends CFGNode
{
	Statement stat;
	CFGNode   succ;

	CFGStatNode() {
	}
	
	CFGStatNode(Statement stat) {
		this.stat = stat;
	}
	
	public void addSucc(CFGNode s) {
		assert succ == null;
		succ = s;
	}
	
	public CFGStatNode clone() { 
		return new CFGStatNode(stat);
	}
	
	public Statement getStatement() {
		return stat;
	}

	public boolean isExit() {
		return false;
	}

	public int numSuccs() {
		return isExit() ? 0 : 1;
	}
	
	public CFGNode getSucc(int k) {
		return k == 0 ? succ : null;
	}

	public void setSucc(int k, CFGNode n) {
		assert k == 0;
		succ = n;
	}

	public void buildCoreExpressions() {
	}
	
	public CoreExpr getCoreKid(int i) {
		return null;
	}

	public int numCoreKids() {
		return 0;
	}
	
	public String toString() {
		return stat.toString();
	}
}
