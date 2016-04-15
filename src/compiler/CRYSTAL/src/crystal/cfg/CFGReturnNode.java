package crystal.cfg;

import crystal.ast.*;
import crystal.core.*;
import crystal.general.*;

public class CFGReturnNode extends CFGStatNode {
	CoreExpr expr;
	
	CFGReturnNode(ReturnStat s) {
		stat = s;
	}
	
	public boolean isReturn() {
		return true;
	}
	
	public CFGReturnNode clone() {
		return new CFGReturnNode(expr, stat);
	}
	
	CFGReturnNode(CoreExpr expr, Statement stat) {
		this.expr = expr;
		this.stat = stat;
	}
	
	public void buildCoreExpressions() {
		Expression e = ((ReturnStat)stat).getExpr();
		if (e != null) {
			expr = CoreExpr.fromAST(e);
			
			/* construct field expressions as well */
			if (Options.DISMANTLE_STRUCTURE_ASSIGNMENTS) {
				Type typ = expr.getType().unwrap();
				if (typ.isStruct() || typ.isUnion()) 
					((CoreDerefExpr)expr).fieldSubExprs(typ);
			}
		}
	}
	
	public CoreExpr getExpr() {
		return expr;
	}
	
	public CoreExpr getCoreKid(int i) {
		return expr;
	}

	public int numCoreKids() {
		return expr == null ? 0 : 1;
	}	
}
