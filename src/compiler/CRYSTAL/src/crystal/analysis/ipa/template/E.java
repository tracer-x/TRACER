package crystal.analysis.ipa.template;

import crystal.analysis.ipa.*;

/** The abstraction element. */
public class E extends Element<I,S,E> {			

	public E clone() {
		E e = new E();
		e.index = index;
		e.context = context;
		e.secondary = secondary.clone();
		return e;
	}

	public String toStringDot() {
		return "";
	}
}
