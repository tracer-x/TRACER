package crystal.ast;

public abstract class BinaryExpr extends Expression {
	Expression left, right;

	public Expression getLeft() {
		return left;
	}
	
	public Expression getRight() {
		return right;
	}
	
	public int numExprKids() {
		return 2;
	}
    
	public Expression getExprKid(int i) {
		switch(i) {
		case 0 : return left;
		case 1 : return right;
		default : return null;
		}
	}

	public void setExprKid(int i, Expression newE) {
		assert (i < numExprKids());

		if (i == 0)
			left = newE;
		else
			right = newE;
	}

	public abstract int getIntOp();
	
}
