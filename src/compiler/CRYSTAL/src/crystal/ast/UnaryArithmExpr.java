package crystal.ast;

public class UnaryArithmExpr extends UnaryExpr {
	private static final long serialVersionUID = 2615786180732998476L;

	ArithmOps op;
	
	public UnaryArithmExpr(ArithmOps op, Expression e) {
		this.op = op;
		this.e  = e;
	}
	
	public static Expression newExpr(ArithmOps op, Expression e) {
		if (op == ArithmOps.Plus) 
			return new UnaryArithmExpr(op, e);
		
		if (op == ArithmOps.Minus && e instanceof NumberExpr) {
			NumberExpr ne = (NumberExpr)e;
			if (!ne.unsigned && ne.num instanceof Integer &&
					!ne.lng && !ne.lnglng) {
				Integer i = new Integer(- ne.num.intValue());
				return new NumberExpr(i);
			}
		}
		
		return new UnaryArithmExpr(op, e);
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
