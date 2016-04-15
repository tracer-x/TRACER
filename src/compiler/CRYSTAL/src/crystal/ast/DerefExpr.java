package crystal.ast;

public class DerefExpr extends Expression {
	private static final long serialVersionUID = 3258132457562779696L;

	Expression expr;
	
	public DerefExpr(Expression e) {
		this.expr = e;
	}

	public Expression getBase() {
		return expr;
	}
	
	public int numExprKids() {
		return 1;
	}
    
	public Expression getExprKid(int i) {
		switch (i) {
		case 0 : return expr;
		default : return null;
		}
	}
	
	public void setExprKid(int i, Expression newE) {
		assert (i < numExprKids());
		expr = newE;
	}
	
	public <S,T> S accept(ExprVisitor<S,T> v, T t) {
		return v.visit(this, t);		
	}
}
