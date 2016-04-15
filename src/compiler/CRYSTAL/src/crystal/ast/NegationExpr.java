package crystal.ast;

public class NegationExpr extends UnaryExpr {
	private static final long serialVersionUID = 682935403985335607L;

	public NegationExpr(Expression e) {
		this.e  = e;
	}
	
	public LogicalOps getOp() {
		return LogicalOps.Not;
	}
	
	public int getIntOp() {
		return LogicalOps.NOT;
	}
	
	public <S,T> S accept(ExprVisitor<S,T> v, T t) {
		return v.visit(this, t);		
	}
}
