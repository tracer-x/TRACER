package crystal.ast;

import java.util.*;

import crystal.general.*;

public class CallExpr extends ComplexExpr  {
	private static final long serialVersionUID = 3978984375293589560L;

	Type cast;
	Expression fun;
    Expression[] args;

	public CallExpr(Expression fun, List<Expression> args) {
		this.fun = fun;
		this.args = new Expression[args.size()];
		this.args = args.toArray(this.args);
	}

	public CallExpr(Expression fun) {
		this.fun = fun;
		this.args = new Expression[0];
	}

	public Type getCast() {
		return cast;
	}
	
	public void setCast(Type t) {
		cast = t;
	}
	
	public Expression getFun() {
		return fun;
	}

	public Function getFunSymbol() {
		if (fun instanceof VarExpr) {
			VarExpr ve = (VarExpr)fun;
			Symbol sym = ve.getSymbol();
			if (sym instanceof Function)
				return (Function)sym;
		}
		return null;
	}

	public int numArgs() {
		return args.length;
	}
	
	public Expression getArg(int i) {
		if (i < args.length) return args[i];
		return null;
	}
	
	public int numExprKids() {
		return 1 + args.length;
	}
    
	public Expression getExprKid(int i) {
		if (i == 0) 
			return fun;
		else if (0 < i && i <= args.length) 
			return args[i-1];
		return null;
	}

	public void setExprKid(int i, Expression newE) {
		assert (i < numExprKids());

		if (i == 0)
			fun = newE;
		else
			args[i-1] = newE;
	}
	
	public int numTypeKids() {
		int n = 0;
		if (cast != null) n++;
		return n;
	}
    
	public Type getTypeKid(int i) {
		if (i == 0 && cast != null) 
			return cast;
			
		assert false;
		return null;
	}
	
	public boolean isAlloc() {
		Function fn = getFunSymbol();
		return fn != null && fn.isAlloc();
	}
	
	public boolean isFree() {
		Function fn = getFunSymbol();
		return fn != null && fn.isFree();			
	}

	public <S,T> S accept(ExprVisitor<S,T> v, T t) {
		return v.visit(this, t);		
	}
}
