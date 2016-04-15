package crystal.analysis.alias;

import crystal.analysis.pointer.*;
import crystal.core.*;

/** An Alias implementation using pointer analysis */
public class PTAlias extends Alias {

	public PTAlias() {
		if (!PointerAnalysis.available) {
			System.err.println("\nPTAlias requires running pointer analysis.");
			System.exit(1);
		}
	}
	
	public boolean mayAlias(CoreDerefExpr e1, CoreDerefExpr e2) {
		Region r1 = Region.regionOf(e1);
		Region r2 = Region.regionOf(e2);
		return r1.equals(r2);
	}
}
