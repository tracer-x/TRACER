package crystal.ast;

import crystal.general.*;

public class SizeofExpr extends PrimitiveExpr {
	private static final long serialVersionUID = 3690753994998035511L;

	Type type;
	
	public SizeofExpr(Type type) {
		this.type = type;
	}
	
	public Type getSizeofType() {
		return type;
	}
	
	public int numExprKids() {
		return 0;
	}
    
	public Expression getExprKid(int i) {
		return null;
	}

	public void setExprKid(int i, Expression newE) {
		assert (false);
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
