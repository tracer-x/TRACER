package crystal.ast;

public class DoWhileStat extends Statement {
	private static final long serialVersionUID = 3834025853293245490L;

	Expression cond;
    Statement body;

    public DoWhileStat(Expression cond, Statement body) {
    	this.cond = cond;
    	this.body = body;
    }
    
	public Expression getCond() {
		return cond;
	}
	
	public Statement getBody() {
		return body;
	}
	
	/* Child expressions interface */
	public int numExprKids() {
		return 1;
	}

	public Expression getExprKid(int i) {
		assert (i < numExprKids());
		return cond;
	}

	public void setExprKid(int i, Expression e) {
		assert (i < numExprKids());
		cond = e;
	}

	/* Child statements interface */
	public int numStatKids() {
		return 1;
	}
    
	public Statement getStatKid(int i) {
		assert (i < numStatKids());
		return body;
	}

	protected void setStatKid(int i, Statement s) {
		assert (i < numStatKids());
		body = s;
	}

	public <S,T> S accept(StatVisitor<S,T>  v, T t) {
		return v.visit(this, t);
	}
}
