package crystal.ast;

/**
 *  A case or default label, containing an another label.
 */
public class CaseLabelStat extends Statement {
	static final long serialVersionUID = 399986971862817034L;

	/* guard is null for default */
	Expression guard; 
	Statement  labeled;

	public static final Expression DEFAULT = null;

	public Expression getGuard() {
		return guard;
	}

	public boolean isDefault() {
		return guard == DEFAULT;
	}

	public Statement getLabeled() {
		return labeled;
	}
	
	public void setLabeled(Statement labeled) {
		this.labeled = labeled;
	}
	
	public CaseLabelStat(Expression guard, Statement labeled) {
		this.guard   = guard;
		this.labeled = labeled;
	}

	/* Child expressions interface */
	public int numExprKids() {
		return 1;
	}

	public Expression getExprKid(int i) {
		assert (i < 1);
		return guard;
	}

	public void setExprKid(int i, Expression e) {
		assert (i < 1);

		guard = e;
	}

	/* Child statements interface */
	public int numStatKids() {
		return 1;
	}
    
	public Statement getStatKid(int i) {
		assert (i == 0);
		return labeled;
	}

	protected void setStatKid(int i, Statement s) {
		assert (i == 0);
		labeled = s;
	}

	public <S,T> S accept(StatVisitor<S,T>  v, T t) {
		return v.visit(this, t);
	}
}
