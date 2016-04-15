package crystal.ast;

import java.util.*;

public class CommaExpr extends ComplexExpr {
	private static final long serialVersionUID = 3906371515032088631L;

	Expression[] es;
	
	public CommaExpr(List<Expression> v) {
		es = new Expression[v.size()];
		es = v.toArray(es);
	}
	
	public int numExprKids() {
		return es.length;
	}
    
	public Expression getExprKid(int i) {
		if (0 <= i && i < es.length) 
				return es[i];
		return null;
	}

	public void setExprKid(int i, Expression e) {
		assert (i < numExprKids());
		es[i] = e;
	}
	
	public <S,T> S accept(ExprVisitor<S,T> v, T t) {
		return v.visit(this, t);		
	}
}
