package crystal.ast;

public class IfStat extends Statement {
	private static final long serialVersionUID = 3256444724393818162L;

	Expression cond;
    Statement sthen, selse;

    public IfStat(Expression cond, Statement sthen, Statement selse) {
    	this.cond = cond;
    	this.sthen = sthen;
    	this.selse = selse;
    }
    
    public Expression getCond() {
    	return cond;
    }
    
    public Statement getThen() {
    	return sthen;
    }
    
    public Statement getElse() {
    	return selse;
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
		return 2;
	}
    
	public Statement getStatKid(int i) {
		assert (i < numStatKids());

		if (i == 0)
			return sthen;
		else
			return selse;
	}

	protected void setStatKid(int i, Statement s) {
		assert (i < numStatKids());

		if (i == 0)
			sthen = s;
		else
			selse = s;
	}

	public <S,T> S accept(StatVisitor<S,T>  v, T t) {
		return v.visit(this, t);
	}
}
