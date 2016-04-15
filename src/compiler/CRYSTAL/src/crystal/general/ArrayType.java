package crystal.general;

import crystal.ast.*;

public class ArrayType extends Type {
	private static final long serialVersionUID = 3689345507634067769L;

	private Type elem;
    private Expression expr;

    public ArrayType(Type e, Expression size) {
        elem = e;
        expr = size;
    }

    public Type getElementType() {
    	return elem;
    }
    
    public Expression getExpression() {
    	return expr;
    }
    
	public void setExpression(int i) {
		expr = new NumberExpr(i);
	}

    public Type getTargetType() {
    	return elem;
    }
    
    public boolean isArray() {
    	return true;
    }
    

    public String toString() {
        return "array(" + expr + ", " + elem + ")";
    }

    public int numTypeKids() {
    	return 1;
    }
    
    public Type getTypeKid(int i) {
    	if (i == 0) return elem;
    	else return null;
    }
    
	public <S,T> S accept(TypeVisitor<S,T> v, T o) {
		return v.visit(this, o);
	}
}
