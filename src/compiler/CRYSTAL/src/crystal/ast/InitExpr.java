package crystal.ast;

public class InitExpr extends Initializer {
    Expression expr;
    
    public InitExpr(Expression e) {
    	expr = e;
    }
    
    public String toString() {
    	return expr.toString();
    }

	public Expression getSingleInit() {
		return expr;
	}

	public Expression getExpr() {
		return expr;
	}
}

