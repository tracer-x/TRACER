package crystal.ast;

import crystal.general.*;
import crystal.parser.*;

public class Designator {
	Designator next;
	String id;
	Number n1, n2;
	
	public Designator(String s) {
		id = s;
	}
	
	public Designator(Expression e1, Expression e2) {
		n1 = e1.constValue();
		assert n1 != null;

		if (e2 == null) {
			n2 = n1;
		}
		else {
			n2 = e2.constValue();
			assert n2 != null;
		}
	}
	
	Designator(Number m1, Number m2) {
		n1 = m1;
		n2 = m2;
	}
	
	public static Designator getDefault(int k, Type t) {
		if (t instanceof ArrayType) {
			Integer nk = new Integer(k);
			return new Designator(nk, nk);
		}
		else if (t instanceof AggregateType) {
			AggregateType st = (AggregateType)t;
			if (k >= st.numFields())
				SemanticError.err("invalid initializer.");
			
			String str = st.getField(k).getName();
			return new Designator(str);
		}
		
		assert false;
		return null;
	}

	public boolean match(int k, Type t) {
		if (t instanceof ArrayType) {
			assert n1 != null;
			int n = n1.intValue();
			if (n < k)
				SemanticError.err("invalid initializer.");
			
			return n == k;
		}
		else if (t instanceof AggregateType) {
			AggregateType st = (AggregateType)t;
			if (k >= st.numFields())
				SemanticError.err("invalid initializer.");
			
			return st.getField(k).getName().equals(id);
		}
			
		assert false;
		return false;
	}

	public Designator add(Designator n) {
		this.next = n;
		return this;
	}
	
	public String toString() {
		String s = null;
		if (id == null) 
			s = n2 != null 
				? "[" + n1 + " .. " + n2 + "]"
				: "[" + n1 + "]";
		else 
			s = "." + id;
		
		if (next == null)
			return s;
		else 
			return s + next.toString();
	}
}
