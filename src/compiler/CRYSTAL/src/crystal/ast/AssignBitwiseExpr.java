package crystal.ast;

public class AssignBitwiseExpr extends AssignExpr {
	private static final long serialVersionUID = 3689636912541807153L;

	BitwiseOps op;

	public AssignBitwiseExpr(BitwiseOps op, Expression e1, Expression e2) {
		super(e1, e2);
		this.op = op;
	}

	public AssignBitwiseExpr clone() {
		return new AssignBitwiseExpr(op, e1, e2);
	}
	
	public BitwiseOps getOp() {
		return op;
	}
	
	public <S,T> S accept(ExprVisitor<S,T> v, T t) {
		return v.visit(this, t);		
	}
}
