package crystal.ast;

public class AutoIncExpr extends ComplexExpr {
	private static final long serialVersionUID = 3256999973538510644L;

	Expression expr;
	boolean post;
	boolean inc;

	public AutoIncExpr(Expression e, boolean p, boolean i) {
		expr = e;
		post = p;
		inc = i;
	}
	
	public Expression getExpr() {
		return expr;
	}
	
	public boolean isPost() {
		return post;
	}
	
	public boolean isInc() {
		return inc;
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
