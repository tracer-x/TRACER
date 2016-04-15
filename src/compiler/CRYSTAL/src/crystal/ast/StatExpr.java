package crystal.ast;

public class StatExpr extends ComplexExpr {
	private static final long serialVersionUID = 3256444702969837624L;

	BlockStat stat;

	public StatExpr(BlockStat stat) {
		this.stat = stat;
	}
	
	public BlockStat getStat() {
		return stat;
	}
	
	public int numExprKids() {
		return 0;
	}
    
	public Expression getExprKid(int i) {
		return null;
	}

	public void setExprKid(int i, Expression newE) {
		assert (false);
	}

	public int numStatKids() {
		return 1;
	}
    
	public Statement getStatKid(int i) {
		assert(i == 0);
		return stat;
	}

	protected void setStatKid(int i, Statement s) {
		assert(i == 0);
		stat = (BlockStat)s;
	}

	public <S,T> S accept(ExprVisitor<S,T> v, T t) {
		return v.visit(this, t);		
	}
}
