package crystal.ast;

public class AssignArithmExpr extends AssignExpr {
	private static final long serialVersionUID = 3906364943698834994L;

	ArithmOps op;

	public AssignArithmExpr(ArithmOps op, Expression e1, Expression e2) {
		super(e1, e2);
		this.op = op;
	}

	public AssignArithmExpr clone() {
		return new AssignArithmExpr(op, e1, e2);
	}
	
	public ArithmOps getOp() {
		return op;
	}
	
	public <S,T> S accept(ExprVisitor<S,T> v, T t) {
		return v.visit(this, t);		
	}
}
