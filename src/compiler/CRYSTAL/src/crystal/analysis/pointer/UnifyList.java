package crystal.analysis.pointer;

import crystal.core.CoreExpr;

public class UnifyList {

	Elem head;
	Elem tail;
	
	void addTail(Elem elem) {
		if (head == null) {
			head = tail = elem;
			elem.next = null;
		}
		else {
			tail.next = elem;
			tail = elem;
			elem.next = null;
		}
	}
	
	void addHead(CoreExpr e1, CoreExpr e2, boolean p, boolean o) {
		Elem elem = new Elem(e1, e2, p, o);
		if (head == null) {
			head = tail = elem;
			elem.next = null;
		}
		else {
			elem.next = head;
			head = elem;
		}
	}
	
	void append(UnifyList other) {
		if (other.head == null)
			return;		
		
		if (this.head == null) {
			this.head = other.head;
			this.tail = other.tail;
			other.head = null;
			other.tail = null;
		}
		else {
			tail.next = other.head;
			tail = other.tail;
			other.head = null;
			other.tail = null;
		}
	}
	
	boolean isEmpty() {
		return head == null;
	}
		
	Elem removeHead() {
		Elem elem = head;
		head = head.next;
		return elem;
	}

	void clear() {
		head = tail = null;
	}

	public int size() {
		int count = 0;
		for (Elem e = head; e != null; e = e.next)
			count ++;
		return count;
	}

	public class Elem {
		CoreExpr expr1, expr2;
		boolean pending;
		boolean onelevel;
		Elem next;
			
		Elem(CoreExpr e1, CoreExpr e2, boolean p, boolean o) {
			expr1 = e1;
			expr2 = e2;
			pending = p;
			onelevel = o;
		}
		
		public String toString() {
			return expr1.toStringRaw() + (pending ? " <- " : " = ") + 
				   expr2.toStringRaw() + (onelevel ? " [1]" : "");
		}
	}
}
