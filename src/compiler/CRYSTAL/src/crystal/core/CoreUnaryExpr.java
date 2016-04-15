package crystal.core;

import crystal.ast.*;
import crystal.general.*;
import crystal.util.*;

public class CoreUnaryExpr extends CoreExpr {
	CoreExpr expr;
	
	/** The op if unary minus, or negation */
	int op;
	
	/** The cast, if cast operation */
	Type cast;
	
	protected CoreUnaryExpr(int o, CoreExpr e) {
		op = o;
		expr = e;
	}

	protected CoreUnaryExpr(Type c, CoreExpr e) {
		cast = c;
		expr = e;
	}

	public boolean isNumConstant() {
		return expr.isNumConstant();
	}

	public boolean isCast() {
		return (cast != null);
	}
	
	public Type getType() {
		if (cast != null)
			return cast;
		else if (op == LogicalOps.NOT) 
			return Type.SignedInt;
		else
			return expr.getType();
	}

	protected CoreExpr clone() {
		if (cast != null)
			return new CoreUnaryExpr(cast, expr);
		else
			return new CoreUnaryExpr(op, expr);
	}
	
	public CoreExpr getExpr() {
		return expr;
	}

	public int getOp() {
		return op;
	}

	public boolean equals(Object o) {
		if (!(o instanceof CoreUnaryExpr))
			return false;
		
		CoreUnaryExpr other = (CoreUnaryExpr)o;
		return (op == other.op &&
				((expr != null && expr.equals(other.expr)) || 
						(expr == null && other.expr == null)));
	}
	
	public int hashCode() {
		return op + expr.hashCode();
	}

	public String toStringRaw() {
		if (cast != null)
			return "(" + cast + ")" + expr.toStringRaw();
		else
			return Ops.toString(op) + " " + expr.toStringRaw();
	}

	Pair<String,Boolean> toStringHelper() {
		if (cast != null)
			return new Pair<String,Boolean>("((" + 
				cast + ")" + expr +")", false);
		else
			return new Pair<String,Boolean>("(" + 
					Ops.toString(op) + " " + expr +")", false);
	}

	public Object accept(CoreExprVisitor visitor, Object obj) {
		return visitor.visit(this, obj);
	}

	public int numKids() {
		return 1;
	}
	
	public CoreExpr getKid(int i) {
		switch (i) {
		case 0: return expr;
		default: assert false; return null;
		}
	}

	public void setKid(int i, CoreExpr e) { 
		switch (i) {
		case 0: expr = e; return;
		default: assert false;
		}
	}

}
