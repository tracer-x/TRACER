package crystal.ast;

public class ConditionalExpr extends ComplexExpr {
	private static final long serialVersionUID = 3258417239597069621L;

	Expression cond, expr1, expr2;

	public ConditionalExpr(Expression c, Expression e1, Expression e2) {
		cond = c;
		expr1 = e1;
		expr2 = e2;
	}
	
	public Expression getCond() {
		return cond;
	}

	public Expression getTrue() {
		return expr1;
	}
	
	public Expression getFalse() {
		return expr2;
	}

	public int numExprKids() {
		return 3;
	}
    
	public Expression getExprKid(int i) {
		switch (i) {
		case 0 : return cond;
		case 1 : return expr1;
		case 2 : return expr2;
		default : return null;
		}
	}

	public void setExprKid(int i, Expression newE) {
		switch (i) {
			case 0:
				cond = newE;
				break;
			case 1:
				expr1   = newE;
				break;
			case 2:
				expr2   = newE;
				break;

			default:
				assert (false);
		}
	}

	public <S,T> S accept(ExprVisitor<S,T> v, T t) {
		return v.visit(this, t);		
	}
}
