package crystal.analysis.alias;

import crystal.core.*;

/** An abstract class for answering alias queries. */
public abstract class Alias {

	/** Returns true if e1 and e2 may represent the same memory location. */
	abstract public boolean mayAlias(CoreDerefExpr e1, CoreDerefExpr e2);

	/** Returns true if e does not change when w is written. */
	public boolean stable(CoreExpr e, CoreDerefExpr w) {
		if (e.isDeref() && mayAlias((CoreDerefExpr)e, w))
			return false;
		
		for (int i = 0; i < e.numKids(); i++)
			if (!stable(e.getKid(i), w))
				return false;
		
		return true;
	}
	
	/** Returns true if e's address doesn't change when w is written. */
	public boolean lstable(CoreDerefExpr e, CoreDerefExpr w) {
		return stable(e.getExpr(), w);
	}
}
