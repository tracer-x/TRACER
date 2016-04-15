package crystal.ast;

public class ExprStat extends Statement {
	private static final long serialVersionUID = 3689354307971919927L;

	Expression e;
	
	public ExprStat(Expression e) {
		this.e = e;
	}

	public Expression getExpr() {
		return e;
	}

	/* Child expressions interface */
	public int numExprKids() {
		return 1;
	}

	public Expression getExprKid(int i) {
		assert (i < numExprKids());
		return e;
	}

	public void setExprKid(int i, Expression e) {
		assert (i < numExprKids());
		this.e = e;
	}

	/* Child statements interface */
	public int numStatKids() {
		return 0;
	}
    
	public Statement getStatKid(int i) {
		assert (false);
		return null;
	}

	protected void setStatKid(int i, Statement s) {
		assert (false);
	}

	public <S,T> S accept(StatVisitor<S,T>  v, T t) {
		return v.visit(this, t);
	}
}
