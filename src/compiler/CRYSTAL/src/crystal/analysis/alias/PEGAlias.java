package crystal.analysis.alias;

import java.util.*;

import crystal.analysis.alias.demand.*;
import crystal.analysis.callgraph.*;
import crystal.analysis.pointer.*;
import crystal.core.*;

public class PEGAlias extends Alias {
	
	private PTAlias ptAlias = null;

	public PEGAlias() {
		CallGraph.construct();
		PEGBuilder.buildPEG();
		
		if (PointerAnalysis.available) {
			ptAlias = new PTAlias();
		}
	}

	public boolean mayAlias(CoreDerefExpr e1, CoreDerefExpr e2) {
		if (ptAlias != null && !ptAlias.mayAlias(e1, e2))
			return false;
		
		return Interference.memoryAlias(e1, e2) != 0;
	}

	public boolean valueMayAlias(CoreExpr e1, CoreExpr e2) {
		return Interference.valueAlias(e1, e2) != 0;
	}
	
	public Set<PEGNode> pointsSet(CoreExpr e) {
		return Interference.pointsTo(e);
	}

	public void setSteps(int steps) {
		Interference.MAX_STEPS = steps;
	}

}
