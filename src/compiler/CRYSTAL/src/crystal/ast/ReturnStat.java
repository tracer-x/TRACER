package crystal.ast;

public class ReturnStat extends JumpStat {
	private static final long serialVersionUID = 3906364935108898868L;

	Expression e;

	public Expression getExpr() {
	   return e;
	}
	
	public ReturnStat(Expression e) {
		this.e = e;
	}

	/* Child expressions interface */
	public int numExprKids() {
		return 1;
	}

	public Expression getExprKid(int i) {
		assert (i == 0);
		return e;
	}

	public void setExprKid(int i, Expression e) {
		assert (i == 0);
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
