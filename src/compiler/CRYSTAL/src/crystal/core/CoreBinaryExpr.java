package crystal.core;

import crystal.ast.*;
import crystal.general.*;
import crystal.util.*;

public class CoreBinaryExpr extends CoreExpr {
	CoreExpr left, right;
	int op;
	
	private CoreBinaryExpr(int op, CoreExpr left, CoreExpr right) {
		this.op = op;
		this.left = left;
		this.right = right;
	}

	protected static CoreExpr newExpr(int op, CoreExpr left, CoreExpr right) {
		if (right.isInteger(0))
			switch(op) {
			case ArithmOps.PLUS : 
			case ArithmOps.MINUS : return left;
			case ArithmOps.TIMES : return right;
			}
		else if (right.isInteger(1) && op == ArithmOps.TIMES)
			return left;

		if (left.isInteger(0))
			switch(op) {
			case ArithmOps.PLUS : return right;
			case ArithmOps.TIMES : return left;
			}
		else if (left.isInteger(1) && op == ArithmOps.TIMES)
			return right;
		
		if (op == ArithmOps.PLUS) {
			if (right instanceof CoreFieldExpr) {
				CoreFieldExpr fex = (CoreFieldExpr)right;
				if (fex.getExpr() instanceof CoreConstExpr) {
					CoreExpr ex = newExpr(op, left, fex.getExpr());
					return CoreFieldExpr.newExpr(ex, fex.field);
				}
			}
			else if (left instanceof CoreFieldExpr) {
				CoreFieldExpr fex = (CoreFieldExpr)left;
				if (fex.getExpr() instanceof CoreConstExpr) {
					CoreExpr ex = newExpr(op, fex.getExpr(), right);
					return CoreFieldExpr.newExpr(ex, fex.field);
				}
			}
		}
		
		return new CoreBinaryExpr(op, left, right);
	}

	public boolean isNumConstant() {
		return left.isNumConstant() && right.isNumConstant();
	}
	
	public Type getType() {
		if (Ops.isLogicalOp(op) || Ops.isCompareOp(op))
			return Type.SignedInt;
		else
			return left.getType();
	}

	protected CoreExpr clone() {
		return new CoreBinaryExpr(op, left, right);
	}
	
	public int getOp() {
		return op;
	}
	
	public CoreExpr getLeft() {
		return left;
	}

	public CoreExpr getRight() {
		return right;
	}

	public boolean equals(Object o) {
		if (!(o instanceof CoreBinaryExpr))
			return false;
		
		CoreBinaryExpr other = (CoreBinaryExpr)o;
		return (op == other.op &&
				((left != null && left.equals(other.left)) || 
						(left == null && other.left == null)) &&
				((right !=null && right.equals(other.right)) || 
						(right == null && other.right == null)));
	}
	
	public int hashCode() {
		return op + left.hashCode() + right.hashCode();
	}

	public String toStringRaw() {
		return "(" + left.toStringRaw() + " " + 
				Ops.toString(op) + " " + right.toStringRaw() + ")";
	}

	Pair<String,Boolean> toStringHelper() {
		if (left.getType().unwrap().isPointer() && op == ArithmOps.PLUS)
			return new Pair<String,Boolean>(left + "[" + right +"]", true);
		else
			return new Pair<String,Boolean>("(" + left + " " +
					Ops.toString(op) + " " + right +")", false);
	}

	public Object accept(CoreExprVisitor visitor, Object obj) {
		return visitor.visit(this, obj);
	}

	public int numKids() {
		return 2;
	}
	
	public CoreExpr getKid(int i) {
		switch (i) {
		case 0: return left;
		case 1: return right;
		default: assert false; return null;
		}
	}

	public void setKid(int i, CoreExpr e) { 
		switch (i) {
		case 0: left = e; return;
		case 1: right = e; return;
		default: assert false;
		}
	}
}
