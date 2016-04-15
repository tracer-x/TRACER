package crystal.ast;

public class ArithmExpr extends BinaryExpr  {
	private static final long serialVersionUID = 3833461790993429046L;

	ArithmOps op;
	
	public ArithmExpr(ArithmOps o, Expression l, Expression r) {
		op = o;
		left = l;
		right = r;
	}
	
	public ArithmOps getOp() {
		return op;
	}
	
	public int getIntOp() {
		return op.toInt();
	}
	
	public <S,T> S accept(ExprVisitor<S,T> v, T t) {
		return v.visit(this, t);		
	}
}

