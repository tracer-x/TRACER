package crystal.ast;

public class LogicalExpr extends BinaryExpr {
	private static final long serialVersionUID = 3257283630341894707L;

	LogicalOps op;

	public LogicalExpr(LogicalOps op, Expression e1, Expression e2) {
		this.op = op;
		this.left = e1;
		this.right = e2;
	}

	public LogicalOps getOp() {
		return op;
	}
	
	public int getIntOp() {
		return op.toInt();
	}
	
	public <S,T> S accept(ExprVisitor<S,T> v, T t) {
		return v.visit(this, t);		
	}
}
