package crystal.analysis.pointer;

import crystal.core.*;
import crystal.general.*;

/** A region partitioning of the memory obtained from unification-based 
 *  pointer analyses, either Steensgaard or One-Level Flow. */
public class Region {
	CoreExpr reg;
	
	/* Protected access needed by the leak contradictor. */
	protected Region(CoreExpr reg) {
		this.reg = reg;
	}

	/* Needed by the leak contradictor. */
	public CoreExpr getInternalExpression() {
		return reg;
	}

	/** Returns the region handle of memory location *e */
	public static Region regionOf(CoreDerefExpr e) {
		if (e.ptinfo == null) {
			/* Expression e has not been seen before. Fill in the 
			 * points-to annotation and re-run the unification algorithm. */
			PTInfo.fill(e);
			PointerAnalysis.performUnifications();
		}
		
		CoreExpr expr = PointerAnalysis.STEENSGAARD ? e.getExpr() : e;
		return new Region(expr.getRep());
	}

	/** Returns true if it e never holds pointer values */
	public static boolean noPointers(CoreDerefExpr e) {
		return !e.getInfo().hasPointers();
	}
	
	/** Returns true if updates in r don't change the value of e */
	public boolean stable(CoreExpr e) {
		if (e.isDeref() && equals(regionOf((CoreDerefExpr)e)))
			return false;
		
		for (int i = 0; i < e.numKids(); i++)
			if (!stable(e.getKid(i)))
				return false;
		
		return true;
	}
	
	/** Returns true if updates in r don't change the address of e. */
	public boolean lstable(CoreDerefExpr e) {
		return stable(e.getExpr());
	}
	
	public boolean equals(Object o) {
		if (!(o instanceof Region))
			return false;
		
		Region other = (Region)o;
		return reg.getRep() == other.reg.getRep();
	}
	
	public int hashCode() {
		return reg.hashCode();
	}
	
	public String toString() {
		CoreExpr expr = reg.getRep();
		if (expr instanceof CoreBinaryExpr) {
			CoreBinaryExpr bin = (CoreBinaryExpr)expr;
			return bin.getLeft().toString();
		}
		else if (expr instanceof CoreAddrExpr) {
			return ((CoreAddrExpr)expr).getSymbol().toString();
		}
		else if (expr instanceof CoreFieldExpr) {
			return "." + ((CoreFieldExpr)expr).getField().toString();
		}
		else
			return reg.toString();
	}

	public boolean isLocal() {
		CoreExpr expr = reg;

		/* for OLF, use the base expression. */
		if (!PointerAnalysis.STEENSGAARD) {
			if (!expr.isDeref()) return false;
			expr = ((CoreDerefExpr)expr).getExpr();
		}

		Symbol var = null;
		if (expr.isAddrConstant()) {
			CoreAddrExpr addr = (CoreAddrExpr)expr;
			var = addr.getSymbol();
		}
		
		return var != null 
			&& var.isAutomatic() 
			&& !var.hasAddressTaken();
	}
	public boolean isShadow() {
		CoreExpr expr = reg;

		/* for OLF, use the base expression. */
		if (!PointerAnalysis.STEENSGAARD) {
			if (!expr.isDeref()) return false;
			expr = ((CoreDerefExpr)expr).getExpr();
		}

		Symbol var = null;
		if (expr.isAddrConstant()) {
			CoreAddrExpr addr = (CoreAddrExpr)expr;
			var = addr.getSymbol();
		}
		
		return var != null 
			&& var.isShadow();
	}
}
