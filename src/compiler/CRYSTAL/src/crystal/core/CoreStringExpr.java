package crystal.core;

import crystal.ast.*;
import crystal.general.*;

public class CoreStringExpr extends CoreExpr {
	StringExpr string;
	
	protected CoreStringExpr(StringExpr string) {
		this.string = string;
	}
	
	public String getString() {
		return string.getString();
	}
	
	public boolean equals(Object o) {
		if (!(o instanceof CoreStringExpr))
			return false;
		
		CoreStringExpr other = (CoreStringExpr)o;
		return this.string == other.string;
	}
	
	public boolean isStringConstant() {
		return true;
	}

	public Type getType() {
		return Type.CharPtr;
	}

	public int hashCode() {
		return string.hashCode();
	}

	public String toStringRaw() {
		return "\"" + string.getString() + "\"";
	}

	public Object accept(CoreExprVisitor visitor, Object obj) {
		return visitor.visit(this, obj);
	}
}
