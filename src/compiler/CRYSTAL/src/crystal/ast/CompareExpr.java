package crystal.ast;

public class CompareExpr extends BinaryExpr {
	private static final long serialVersionUID = 3690472502824284473L;

	CompareOps op;

	public CompareExpr(CompareOps o, Expression l, Expression r) {
		op = o;
		left = l;
		right = r;
	}

	public CompareOps getOp() {
		return op;
	}

	public int getIntOp() {
		return op.toInt();
	}
	
	public <S,T> S accept(ExprVisitor<S,T> v, T t) {
		return v.visit(this, t);		
	}
}
