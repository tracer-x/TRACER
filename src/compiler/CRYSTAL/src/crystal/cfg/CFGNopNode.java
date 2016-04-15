package crystal.cfg;

import crystal.ast.*;

public class CFGNopNode extends CFGStatNode {

	public static enum NopType {Entry, Exit, Empty};
	NopType nt;
	
	public CFGNopNode(NopType t) {
		stat = new ExprStat(NumberExpr.one);
		nt = t;
	}
	
	public String toString() {
		return nt.toString(); 
	}
	
	public void setSucc(int i, CFGNode n) {
		if(nt == NopType.Entry) {
			// Changed to allow Entry nodes to have successor set...    -ljp
			super.setSucc(i, n);
		} else {
			assert false;
		}
	}
	
	CFGNopNode(NopType nt, Statement stat) {
		this.stat = stat;
		this.nt = nt;
	}
	
	public CFGNopNode clone() {
		return new CFGNopNode(nt, stat);
	}
	public boolean isEntry() {
		return nt.equals(NopType.Entry);
	}

	public boolean isExit() {
		return nt.equals(NopType.Exit);
	}
}
