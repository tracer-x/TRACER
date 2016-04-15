package crystal.core;

import crystal.ast.*;
import crystal.general.Type;

public class CoreAllocExpr extends CoreExpr {
	CallExpr allocsite;
	
	private int id;
	private static int c = 0;
	
	protected CoreAllocExpr(CallExpr allocsite) {
		this.allocsite = allocsite;
		this.id = c++;
	}

	public Type getType() {
		return Type.VoidPtr;
	}

	public boolean isAlloc() {
		return true;
	}
	
	public boolean equals(Object o) {
		if (!(o instanceof CoreAllocExpr))
			return false;
		
		CoreAllocExpr other = (CoreAllocExpr)o;
		return this.allocsite == other.allocsite;
	}
	
	public int hashCode() {
		return allocsite.hashCode();
	}

	public String toStringRaw() {
		return allocsite.getFun().toString() + id;
	}

	public Object accept(CoreExprVisitor visitor, Object obj) {
		return visitor.visit(this, obj);
	}
}
