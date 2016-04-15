package crystal.core;

import java.util.*;

import crystal.ast.*;
import crystal.general.*;
import crystal.util.*;

public class CoreDerefExpr extends CoreExpr {
	Type type;
	CoreExpr expr;
	
	protected CoreDerefExpr(CoreExpr e, Type t) {
		expr = e;
		type = t.unwrap();
	}
	
	protected CoreExpr clone() {
		return new CoreDerefExpr(expr, type);
	}
	
	public CoreExpr getExpr() {
		return expr;
	}

	public Type getType() {
		return type;
	}

	public boolean isDeref() {
		return true;
	}

	public boolean isVariable() {
		return expr.isAddrConstant();
	}

	public Symbol getVariable() {
		if (expr instanceof CoreAddrExpr)
			return ((CoreAddrExpr)expr).getSymbol();
		else
			return null;	
	}

	public boolean isParameterVar() {
		Symbol var = getVariable();
		return var != null && var.isParameter();
	}
	
	public boolean isAutomaticVar() {
		Symbol var = getVariable();
		return var != null && var.isAutomatic();
	}
	
	public boolean isPureLocalVar() {
		Symbol var = getVariable();
		return var != null && var.isAutomatic() && !var.hasAddressTaken();
	}
	
	public boolean isLocalVar() {
		Symbol var = getVariable();
		return var != null && var.isLocal();
	}
	
	public boolean isGlobalVar() {
		Symbol var = getVariable();
		return var != null && var.isGlobal();
	}

	public boolean isStaticVar() {
		Symbol var = getVariable();
		return var != null && var.isStatic();
	}

	public boolean hasAddressTaken() {
		Symbol var = getVariable();
		return var != null && var.hasAddressTaken();
	}
	
	/** Lists all field subexpressions of this expression */
	public List<CoreDerefExpr> fieldSubExprs(Type typ) {
		List<CoreDerefExpr> list = new ArrayList<CoreDerefExpr>();
		helperFieldSub(typ, list);
		return list;
	}
	
	private void helperFieldSub(Type t, List<CoreDerefExpr> l) {
		t = t.unwrap();
		if (t.isStruct())  {
			AggregateType at = (AggregateType) t;
			for (int i = 0; i < at.numFields(); i++) {
				Symbol f = at.getField(i);
				
				CoreExpr fex = CoreExpr.getFieldExpr(expr, f);
				Type typ = f.getType().unwrap();
				if (typ.isArray()) {
					fex = CoreExpr.getBinaryExpr(ArithmOps.PLUS, 
												 fex, CoreExpr.zero);
					typ = ((ArrayType)typ).getElementType();
				}
				CoreDerefExpr dfex = CoreExpr.getDerefExpr(fex, typ);
				dfex.helperFieldSub(typ, l);
			}
		}
		else if (t.isArray()) {
			
		}
		else {
			l.add(this);
		}
	}

	public boolean equals(Object o) {
		if (!(o instanceof CoreDerefExpr))
			return false;
		
		CoreDerefExpr other = (CoreDerefExpr)o;
		return (TypeEquiv.cmpByName(type, other.type) == Order.EQUAL &&
				expr.equals(other.expr));
	}
	
	public int hashCode() {
		return expr.hashCode() + type.hashCode();
	}
	
	public String toStringRaw() {
		return "*(" + expr.toStringRaw() + "," + type + ")";
	}

	Pair<String,Boolean> toStringHelper() {
		Pair<String,Boolean> p = expr.toStringHelper();
		if (p.snd)
			return new Pair<String,Boolean>(p.fst, false);
		else 
			return new Pair<String,Boolean>("*" + p.fst, false);
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
