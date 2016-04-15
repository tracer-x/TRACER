package crystal.core;

import crystal.general.*;

public class CoreConstExpr extends CoreExpr {
	/** The number, if numeric value 
	 *  The symbol, if enum constant
	 *  The type, if sizeof expression */
	Object obj;
	
	protected CoreConstExpr(Type type) {
		obj = type;
	}

	protected CoreConstExpr(EnumConstant con) {
		obj = con;
	}

	public CoreConstExpr(Number num) {
		obj = num;
	}
	
	public boolean isNumConstant() {
		return true;
	}

	public Number getNumber() {
		return obj instanceof Number ? (Number)obj : null;
	}
	
	public boolean isInteger(int n) {
		return obj instanceof Integer && 
			((Integer)obj).intValue() == n;
	}
	
	public Type getType() {
		if (obj instanceof Float)
			return Type.Float;
		else if (obj instanceof Double)
			return Type.Double;
		else 
			return Type.SignedInt;
	}

	public boolean equals(Object o) {
		if (!(o instanceof CoreConstExpr))
			return false;
		
		CoreConstExpr other = (CoreConstExpr)o;
		return obj != null && obj.equals(other.obj);
	}
		
	public int hashCode() {
		return obj.hashCode();
	}
	
	public String toStringRaw() {
		return isSizeOf() ? ("size(" + obj + ")") : obj.toString();
	}

	public Object accept(CoreExprVisitor visitor, Object o) {
		return visitor.visit(this, o);
	}

	public boolean isSizeOf() {
		return obj instanceof Type;
	}

	public Type getSizeOf() {
		return obj instanceof Type ? (Type) obj : null;
	}
}
