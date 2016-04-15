package crystal.ast;

public class UnaryBitwiseExpr extends UnaryExpr {
	private static final long serialVersionUID = -1542575606285489833L;

	BitwiseOps op;
	
	public UnaryBitwiseExpr(BitwiseOps op, Expression e) {
		this.op = op;
		this.e  = e;
	}
	
	public BitwiseOps getOp() {
		return op;
	}
	
	public int getIntOp() {
		return op.toInt();
	}
	
	public <S,T> S accept(ExprVisitor<S,T> v, T t) {
		return v.visit(this, t);		
	}
}
