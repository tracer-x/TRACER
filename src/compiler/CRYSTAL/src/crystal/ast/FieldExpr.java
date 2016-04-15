package crystal.ast;

import crystal.general.Symbol;

public class FieldExpr extends Expression {
	private static final long serialVersionUID = 4048797866182980404L;

	/** If d then e->f else e.f */
	boolean d;
	Expression e;
	Symbol f;
	
	public FieldExpr(boolean d, Expression e, Symbol f) {
		this.d = d;
		this.e = e;
		this.f = f;
	}

	public Expression getBase() {
		return e;
	}

	public boolean isDeref() {
		return d;
	}
	
	public Symbol getField() {
		return f;
	}
	
	public void setField(Symbol f) {
		this.f = f;
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
