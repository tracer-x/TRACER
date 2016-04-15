package crystal.analysis.callgraph;

import java.util.*;

import crystal.cfg.*;
import crystal.core.*;
import crystal.general.*;
import crystal.util.*;

public class AllocWrapperDetector {
	
	public static Set<Function> run() {
		AllocWrapperDetector awd = new AllocWrapperDetector();
		Set<Function> toAnalyze = new HashSet<Function>();
		Set<Function> detected = new HashSet<Function>();

		buildCallers();
		
		toAnalyze.addAll(Symtab.getFunctions());
		while (true) {
			List<Function> newfuns = awd.run(toAnalyze);
			newfuns.removeAll(detected);
			if (newfuns.isEmpty())
				break;

			detected.addAll(newfuns);
			toAnalyze.clear();
			
			for (Function newfun : newfuns) {
				String name = newfun.getName();
				if (!Options.allocNames.contains(name))
					Options.allocNames.add(name);

				Set<Function> thecallers = callers.get(newfun);
				if (thecallers != null) 
					toAnalyze.addAll(thecallers);
			}
		}
		
		callers = null;
		return detected;
	}
	
	List<Function> run(Set<Function> toAnalyze) {
		List<Function> list = new ArrayList<Function>();
		
		for (Function fun : toAnalyze)
			if (allocCompatibleArgs(fun) && analyze(fun))
				list.add(fun);
		
		return list;
	}
    
    /** Returns whether f has args compatible with malloc or calloc. */
    private boolean allocCompatibleArgs(Function f) {
        for (int i = 0; i < f.numParams(); i++) {
            Type t = f.getParam(i).getType().unwrap();
            if (!t.equals(Type.SignedInt) && !t.equals(Type.UnsignedInt))
                return false;
        }
    
        switch(f.numParams()) {
        case 1:  return true;
        case 2:  return true;
        default: return false;
        }
    }

	Set<CoreExpr> returns, allocs, accesses;
	Set<Pair<CoreExpr,CoreExpr>> assigns;
	
	private boolean analyze(Function fun) {
		returns = new HashSet<CoreExpr>();
		allocs = new HashSet<CoreExpr>();
		accesses = new HashSet<CoreExpr>();
		assigns = new HashSet<Pair<CoreExpr,CoreExpr>>();
		
		for (CFGNode n : fun.getCFGNodes())
			if (!process(n))
				return false;
			
		traverse(); 
		boolean noacc = !returns.removeAll(accesses);
		boolean alloc = returns.removeAll(allocs);

		returns = allocs = accesses = null;
		assigns = null;
		
		return noacc && alloc;
	}

	private void traverse() {
		Stack<CoreExpr> stk = new Stack<CoreExpr>();
		stk.addAll(returns);
		while (!stk.isEmpty()) {
			CoreExpr e = stk.pop();
			for (Pair<CoreExpr,CoreExpr> p : assigns) {
				CoreExpr succ;
				if (p.fst == e) succ = p.snd;
				else if (p.snd == e) succ = p.fst;
				else continue;
	
				if (!returns.contains(succ)) {
					returns.add(succ);
					stk.push(succ);
				}
			}
		}
	}

	/* return false if function cannot be an allocator */
	private boolean process(CFGNode n) {
		if (n.isSwitch()) {
			return true;
		}
		else if (n.isReturn()) {
			CFGReturnNode retn = (CFGReturnNode)n;
			CoreExpr rete = retn.getExpr();
			if (rete == null) {
				return false;
			}
			else if (isLocal(rete)) {
				returns.add(rete);
				return true;
			}
			else if (rete.isNumConstant()) {
				return true;
			}
			else {
				return false;
			}
		}
		else if (n.isCall()) {
			CFGCallNode call = (CFGCallNode)n;
			Function fun = call.getCall().getFunSymbol();
			/* ignore library calls. */
			if (fun != null  && call.getLeft() == null &&
					!fun.isDefined())
				return true;
		}
		else if(n.isAlloc()) {
			CFGCallNode c = (CFGCallNode)n;
			CoreDerefExpr d = c.getLeft();
			if (isLocal(d)) {
				allocs.add(d);
				return true;
			}
		} 
		else if (n.isAssign()) {
			CFGAssignNode asgn = (CFGAssignNode)n;
			CoreDerefExpr lhs = asgn.getLeft();
			CoreExpr rhs = asgn.getRight();
			if (isLocal(lhs) && isLocal(rhs)) {
				assigns.add(new Pair<CoreExpr,CoreExpr>(lhs, rhs));
				return true;
			}
		}
		
		for (int i = 0; i < n.numCoreKids(); i++)
			collectLocals(n.getCoreKid(i));
			
		return true;
	}

	private void collectLocals(CoreExpr e) {
		if (isLocal(e))
			accesses.add(e);

		for (int i = 0; i < e.numKids(); i++)
			collectLocals(e.getKid(i));
	}

	private boolean isLocal(CoreExpr e) {
		if (!e.isVariable())
			return false;
		
		Symbol var = e.getVariable();
		return !var.hasAddressTaken() && 
			   !var.isParameter();
	}

	private static Map<Function, Set<Function>> callers;
	private static void buildCallers() {
		callers = new HashMap<Function, Set<Function>>();
		for (Function caller : Symtab.getFunctions())
			for (CFGNode n : caller.getCFGNodes())
				if (n.isCall()) {
					CFGCallNode call = (CFGCallNode)n;
					Function callee = call.getCall().getFunSymbol();
					if (callee == null) continue;
					
					Set<Function> set = callers.get(callee);
					if (set == null) {
						set = new HashSet<Function>();
						callers.put(callee, set);
					}
					set.add(caller);
				}
	}
}
