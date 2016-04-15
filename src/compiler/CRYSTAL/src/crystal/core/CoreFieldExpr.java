package crystal.core;

import crystal.general.*;
import crystal.util.*;

public class CoreFieldExpr extends CoreExpr {
	Symbol field;
	CoreExpr expr;
	
	private CoreFieldExpr(CoreExpr expr, Symbol field) {
		assert field != null;
		this.expr = expr;
		this.field = field;
	}
	
	protected static CoreExpr newExpr(CoreExpr expr, Symbol field) {
		assert field != null;
		
		if (!KEEP_FIRST_FIELD && field.isFirstField())
			return expr;
		else
			return new CoreFieldExpr(expr, field);
	}
	
	public Type getType() {
		return new PointerType(field.getType());
	}

	protected CoreExpr clone() {
		return new CoreFieldExpr(expr, field);
	}
	
	public CoreExpr getExpr() {
		return expr;
	}

	public Symbol getField() {
		return field;
	}

	public boolean equals(Object o) {
		if (!(o instanceof CoreFieldExpr))
			return false;
		
		CoreFieldExpr other = (CoreFieldExpr)o;
		return (field == other.field &&
				expr.equals(other.expr));
	}
	
	public int hashCode() {
		return field.hashCode() + expr.hashCode();
	}
	
	public String toStringRaw() {
		return "#" + field.getIdName() + "(" + expr.toStringRaw() + ")";
	}

	Pair<String,Boolean> toStringHelper() {
		Pair<String,Boolean> p = expr.toStringHelper();
		String s = p.fst;
		if (p.snd) 
			return new Pair<String,Boolean>(s + "." + field.getIdName(), true);
		else
			return new Pair<String,Boolean>(s + "->" + field.getIdName(), true);
	}

	public Object accept(CoreExprVisitor visitor, Object obj) {
		return visitor.visit(this, obj);
	}

	public int numKids() {
		return 1;
	}
	
	public CoreExpr getKid(int i) {
		if  (i == 0) 
			return expr;
		
		assert false; 
		return null;
	}

	public void setKid(int i, CoreExpr e) { 
		if  (i == 0) 
			expr = e;
		else 
			assert false;
	}
}
