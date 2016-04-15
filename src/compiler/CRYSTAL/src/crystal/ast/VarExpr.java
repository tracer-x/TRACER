package crystal.ast;

import crystal.general.*;

public class VarExpr extends PrimitiveExpr {
	private static final long serialVersionUID = 3689068443622258743L;

	Symbol sym;

    public VarExpr(Symbol sym) {
    	assert sym != null;
    	this.sym = sym;
    }

    public Symbol getSymbol() {
    	return sym;
    }
    
	public void setSymbol(Symbol sym) {
		this.sym = sym;
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
	
	public <S,T> S accept(ExprVisitor<S,T> v, T t) {
		return v.visit(this, t);		
	}
}

