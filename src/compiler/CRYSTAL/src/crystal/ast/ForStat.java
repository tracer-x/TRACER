package crystal.ast;

public class ForStat extends Statement {
	private static final long serialVersionUID = 3257003271972272183L;

	Expression init, cond, step;
	Statement body;
	
	public ForStat(Expression i, Expression c, Expression s, Statement b) {
		this.init = i == null ? NumberExpr.one : i;
		this.cond = c == null ? NumberExpr.one : c;
		this.step = s == null ? NumberExpr.one : s;
		this.body = b;
	}

	public Expression getInit() { 
		return init;
	}
	
	public Expression getCond() { 
		return cond;
	}
	
	public Expression getStep() { 
		return step;
	}
	
	public Statement getBody() {
		return body;
	}
	
	/* Child expressions interface */
	public int numExprKids() {
		return 3;
	}

	public Expression getExprKid(int i) {
		assert (i < numExprKids());
		switch (i) {
			case 0:
				return init;
			case 1:
				return cond;
			case 2:
				return step;
		}

		/* Never reached */
		return null;
	}

	public void setExprKid(int i, Expression e) {
		assert (i < numExprKids());
		switch (i) {
			case 0:
				init = e;
				break;
			case 1:
				cond = e;
				break;
			case 2:
				step = e;
				break;
		}
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
