package crystal.ast;

public class AssignExpr extends ComplexExpr {
	private static final long serialVersionUID = 3905242312362964277L;

	Expression e1, e2;

	public AssignExpr(Expression e1, Expression e2) {
		this.e1 = e1;
		this.e2 = e2;
	}

	public Expression getLeft() {
		return e1;
	}
	
	public Expression getRight() {
		return e2;
	}
	
	public int numExprKids() {
		return 2;
	}
    
	public Expression getExprKid(int i) {
		switch (i) {
		case 0 : return e1;
		case 1 : return e2;
		default : return null;
		}
	}

	public void setExprKid(int i, Expression newE) {
		assert (i < numExprKids());

		if (i == 0)
			e1 = newE;
		else
			e2 = newE;
	}
	
	public <S,T> S accept(ExprVisitor<S,T> v, T t) {
		return v.visit(this, t);		
	}
}
