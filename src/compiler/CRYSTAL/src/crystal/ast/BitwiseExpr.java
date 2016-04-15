package crystal.ast;

public class BitwiseExpr extends BinaryExpr {
	private static final long serialVersionUID = 3258135773344903736L;

	BitwiseOps op;

	public BitwiseExpr(BitwiseOps o, Expression l, Expression r) {
		op = o;
		left = l;
		right = r;
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
