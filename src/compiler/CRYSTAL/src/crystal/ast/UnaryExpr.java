package crystal.ast;

public abstract class UnaryExpr extends Expression {
	Expression e;

	public Expression getExpr() {
		return e;
	}
	
	public int numExprKids() {
		return 1;
	}

	public Expression getExprKid(int i) {
		if (i == 0)
			return e;
		
		assert false;
		return null;
	}

	public void setExprKid(int i, Expression newe) {
		if (i == 0) 
			e = newe;
		else
			assert false;
	}

	abstract public int getIntOp();
}
