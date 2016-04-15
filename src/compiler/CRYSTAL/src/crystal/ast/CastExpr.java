package crystal.ast;

import crystal.general.*;

public class CastExpr extends Expression {
	private static final long serialVersionUID = 3616724972283115315L;

	Expression expr;
	Type type;
	
	public CastExpr(Type t, Expression e) {
		type = t;
		expr = e;
	}
	
	public Expression getBase() {
		return expr;
	}
	
	public Type getCastType() {
		return type;
	}

	public int numExprKids() {
		return 1;
	}
    
	public Expression getExprKid(int i) {
		switch (i) {
		case 0 : return expr;
		default : return null;
		}
	}

	public void setExprKid(int i, Expression newE) {
		assert (i < numExprKids());

		expr = newE;
	}

	public int numTypeKids() {
		return 1;
	}
    
	public Type getTypeKid(int i) {
		switch (i) {
		case 0 : return type;
		default : return null;
		}
	}

	public <S,T> S accept(ExprVisitor<S,T> v, T t) {
		return v.visit(this, t);		
	}
}
