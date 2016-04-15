package crystal.core;

public class RecursiveCoreExprVisitor extends CoreExprVisitor {
	public Object visit(CoreBinaryExpr expr, Object obj) {
		expr.left.accept (this, obj);
		expr.right.accept(this, obj);
		return null;
	}
	
	public Object visit(CoreUnaryExpr expr, Object obj) {
		expr.expr.accept (this, obj);
		return null;
	}
	
	public Object visit(CoreFieldExpr expr, Object obj) {
		expr.expr.accept(this, obj);
		return null;
	}

	public Object visit(CoreDerefExpr expr, Object obj) {
		expr.expr.accept(this, obj);
		return null;
	}
}
