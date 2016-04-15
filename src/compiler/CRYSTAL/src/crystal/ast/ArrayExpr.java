package crystal.ast;

public class ArrayExpr extends Expression  {
	private static final long serialVersionUID = 3257004350026234169L;

	Expression arr, sub;

	public ArrayExpr(Expression a, Expression s) {
		arr = a;
		sub = s;
	}

	public Expression getArray() {
		return arr;
	}
	
	public Expression getSub() {
		return sub;
	}
	
	public int numExprKids() {
		return 2;
	}
    
	public Expression getExprKid(int i) {
		switch (i) {
		case 0 : return arr;
		case 1 : return sub;
		default : return null;
		}
	}

	public void setExprKid(int i, Expression newE) {
		assert (i < numExprKids());

		if (i == 0)
			arr = newE;
		else
			sub = newE;
	}
	
	public <S,T> S accept(ExprVisitor<S,T> v, T t) {
		return v.visit(this, t);		
	}
}

