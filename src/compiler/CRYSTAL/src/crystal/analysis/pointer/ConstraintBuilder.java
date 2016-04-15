package crystal.analysis.pointer;

import java.util.*;

import crystal.core.*;
import crystal.ast.*;
import crystal.cfg.*;
import crystal.general.*;

public class ConstraintBuilder extends CFGWalker {
	static CoreExpr funexpr;
	static Function funsym;
	
	public static ConstraintBuilder builder = new ConstraintBuilder(); 
	
	public void collectConstraints(Function fun) {
		funsym = fun;
		visitAll(fun.getCFG());
	}
	
	public void visit(CFGAssignNode n) {
		PointerAnalysis.addAssign(n.getLeft(), n.getRight());
	}
	
	public void visit(CFGSwitchNode n) {
	}
	
	public void visit(CFGCallNode n) {
		CoreExpr lhs = n.getLeft();

		CallExpr call = n.getCall();
		if (call.isAlloc()) {
			CoreExpr alloc = CoreExpr.getAlloc(call);
			if (lhs != null) 
				PointerAnalysis.addAssign(lhs, alloc);
			return;
		}

		Function fsym = call.getFunSymbol();
		CoreExpr cfun = n.getFun();
		PTInfo.fill(cfun);
		PTInfo info = cfun.getInfo();

		List<CoreExpr> funptr = info.funptr;
		if (funptr == null) {
			funptr = new ArrayList<CoreExpr>();
			info.funptr = funptr;
		}

		for (int i = 0; i < n.numArgs() + 1; i++) {
			CoreExpr p = null;
			if (i < funptr.size()) 
				p = funptr.get(i);
			else {
				Symbol sym = Symbol.newTemp("@dummy" + i, Type.VoidPtr);
				p = CoreExpr.fromAST(new VarExpr(sym));
				funptr.add(p);
			}

			/* No parameter assignments for library functions. */
			if (fsym == null  || fsym.isDefined())
				if (i > 0) 
					PointerAnalysis.addAssign(p, n.getArg(i-1));
				else if (lhs != null) {
					if (p != null)
						PointerAnalysis.addAssign(lhs, p);
					else {
						System.err.println("\nIn function "  
								+ funsym.getNameAndFile() + " :\n\t"
								+ "void-returning function possibly called "
								+ "in assignment:\n\t" + n);
						System.err.flush();
					}
				}
		}
	}
	
	public void visit(CFGReturnNode n) {
		CoreExpr rete = n.getExpr();
		if (rete == null) 
			return;
		
		Symbol retvar = funsym.getReturnVar();		
		if (retvar == null)
			throw new RuntimeException("Function returns value, but "
					+ "return var is missing: " + funsym.getNameAndFile());
		
		CoreExpr retv = CoreExpr.getVar(retvar);
		PointerAnalysis.addAssign(retv, rete);
	}
}
