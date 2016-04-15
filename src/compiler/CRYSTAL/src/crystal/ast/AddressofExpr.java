package crystal.ast;

public class AddressofExpr extends Expression {
	private static final long serialVersionUID = 4123103965711185464L;

	Expression e;
	
	public AddressofExpr(Expression e) {
		if (e instanceof VarExpr)
			((VarExpr)e).sym.setAddressTaken();
		this.e = e;
	}
	
	public Expression getBase() {
		return e;
	}
	
	public int numExprKids() {
		return 1;
	}
    
	public Expression getExprKid(int i) {
		switch (i) {
		case 0 : return e;
		default : return null;
		}
	}

	public void setExprKid(int i, Expression newE) {
		assert (i < numExprKids());

		e = newE;
	}
	
	public <S,T> S accept(ExprVisitor<S,T> v, T t) {
		return v.visit(this, t);		
	}
}
