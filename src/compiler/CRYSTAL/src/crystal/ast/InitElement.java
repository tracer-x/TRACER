package crystal.ast;

import java.util.*;

import crystal.general.*;

public class InitElement {
	Designator des;
	Initializer val;
	
	
	public InitElement(Designator d, Initializer v) {
		des = d;
		val = v;
	}

	public Initializer getValue() {
		return val;
	}

	void expandRange(List<InitElement> list) {
		if (des.id != null) {
			list.add(this);
			return;
		}
		
		int m1 = des.n1.intValue();
		int m2 = des.n2.intValue();

		if (m1 > m2) {
			System.err.println("\nInvalid range in initializer: " + des);
			System.exit(1);
		}
		
		for (int k = m1; k <= m2; k++) {
			Integer nk = new Integer(k);
			Designator ndes = new Designator(nk, nk);
			ndes.next = des.next;
			InitElement ie = new InitElement(ndes, val);
			list.add(ie);
		}

		return;
	}

	public Expression getElement(Expression e) {
		for (; des != null; des = des.next)
			if (des.id != null) {
				AggregateType st = (AggregateType)e.getType().unwrap();
				e = st.buildFieldExpr(false, e, des.id);
			}
			else 
				e = new ArrayExpr(e, new NumberExpr(des.n1));
		
		return e;
	}
	
	public String toString() {
		if (des != null)
			return des + " = " + val;
		else
			return val.toString();
	}
}
