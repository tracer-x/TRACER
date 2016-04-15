package crystal.core;

import crystal.general.*;
import crystal.util.Pair;

public class CoreAddrExpr extends CoreExpr {
	Symbol sym;
	
	protected CoreAddrExpr(Symbol sym) {
		assert !(sym instanceof EnumConstant);
		this.sym = sym;
	}
		
	public Symbol getSymbol() {
		return sym;
	}

	public boolean isAddrConstant() {
		return true;
	}

	public Type getType() {
		return new PointerType(sym.getType());
	}

	public boolean equals(Object o) {
		if (!(o instanceof CoreAddrExpr))
			return false;
		
		CoreAddrExpr other = (CoreAddrExpr)o;
		return this.sym == other.sym;
	}
	
	public int hashCode() {
		return sym.hashCode();
	}
	
	public String toStringRaw() {
		return "&" + sym.getIdName();
	}

	Pair<String,Boolean> toStringHelper() {
		return new Pair<String,Boolean>(sym.getIdName(), true);
	}

	public Object accept(CoreExprVisitor visitor, Object obj) {
		return visitor.visit(this, obj);
	}
}
