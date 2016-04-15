package crystal.analysis.alias;

import java.util.*;

import crystal.analysis.alias.demand.*;
import crystal.core.*;
import crystal.general.*;
import crystal.util.*;

/** Address-taken alias analysis. */
public class ATAlias extends Alias {

	public boolean mayAlias(CoreDerefExpr e1, CoreDerefExpr e2) {
		if (notAliased(e1.peg, e2.peg)) {
			return false;
		}
		
		return true;
	}

	private boolean notAliased(PEGNode n1, PEGNode n2) {
		PEGNode a1 = n1.getAddr();
		PEGNode a2 = n2.getAddr();
		
		Pair<PEGNode, List<Symbol>> b1 = getBase(a1);
		Pair<PEGNode, List<Symbol>> b2 = getBase(a2);
		
		if (b1.fst == b2.fst) {
			return !b1.snd.equals(b2.snd);
		} else {
			if (!nested(b1.snd, b2.snd)) {
				return true;
			}
		}
		
		if (addrNotTaken(a1)) {
			return true;
		}
		
		if (addrNotTaken(a2)) {
			return true;
		}
		
		if (isVar(a1) && isVar(a2)) {
			return true;
		}
		
		Symbol f1 = a1.getField();
		Symbol f2 = a2.getField();
		
		if (f1 != f2) {
			return true;
		}
		
		return false;
	}

	private boolean addrNotTaken(PEGNode n) {
		if (n.getAddr() != null) {
			return false;
		}
		
		if (n.getAssignedTo().length == 0) {
			if (n.getBase() != null) {
				return addrNotTaken(n.getBase());
			} else {
				return true;
			}
		} else {
			return false;
		}
	}

	private boolean isVar(PEGNode n) {
		if (n.getAddr() != null) {
			return false;
		}
		
		if (n.getBase() != null) {
			return isVar(n.getBase());
		} else {
			return true;
		}
	}

	private Pair<PEGNode, List<Symbol>> getBase(PEGNode n) {
		Pair<PEGNode, List<Symbol>> b;
		
		if (n.getBase() != null) {
			b = getBase(n.getBase());
			b.snd.add(n.getField());
			return b;
		} else {
			b = new Pair<PEGNode, List<Symbol>>(n, new ArrayList<Symbol>());
			return b;
		}
	}

	private boolean nested(List<?> f1, List<?> f2) {
		if (f1.size() > f2.size()) {
			return nested(f2, f1);
		}
		
		for (int i = 0; i < f1.size(); i++) {
			if (!f1.get(i).equals(f2.get(i))) {
				return false;
			}
		}
		
		return true;
	}
	
}
