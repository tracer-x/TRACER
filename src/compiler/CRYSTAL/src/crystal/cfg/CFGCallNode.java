package crystal.cfg;

import java.util.HashSet;
import java.util.Set;

import crystal.ast.*;
import crystal.core.*;
import crystal.general.*;

public class CFGCallNode extends CFGStatNode {

	Type cast;
	CoreDerefExpr lhs;
	CoreExpr fun;
	CoreExpr args[]; 

	CFGCallNode(Expression left, CallExpr right) {
		stat = new ExprStat(new AssignExpr(left, right));
		
		/* Attempt to preserve location info */
		if (left != null && left.getFile() != null)
			stat.setLocationFrom(left);
		else if (right.getFile() != null)
			stat.setLocationFrom(right);
		
		Type t = right.getCast();
		if (t != null && !t.isVoid()) 
			cast = t;
	}

	CFGCallNode(Type cast, CoreDerefExpr lhs, CoreExpr fun, CoreExpr args[], Statement stat) {
		this.cast = cast;
		this.lhs = lhs;
		this.fun = fun;
		this.args = args;
		this.stat = stat;
	}
	
	public CFGCallNode clone() {
		return new CFGCallNode(cast, lhs, fun, args, stat);
	}
	
	public CallExpr getCall() {
		AssignExpr cexpr = (AssignExpr)((ExprStat)stat).getExpr();
		return (CallExpr)cexpr.getRight();
	}
	
	public boolean isCall() {
		return !getCall().isAlloc();
	}
	
	public boolean isAlloc() {
		return getCall().isAlloc();
	}
	
	public boolean isFree() {
		return getCall().isFree();
	}
	
	public CoreDerefExpr getWrittenMem() {
		return lhs;
	}

	public Set<CoreDerefExpr> getReadMem() {
		Set<CoreDerefExpr> set = new HashSet<CoreDerefExpr>();
		if (lhs != null)
			addRead(lhs.getExpr(), set);
		
		addRead(fun, set);
		
		for (int i = 0; i < args.length; i++)
			addRead(args[i], set);
		
		return set;
	}

	public void buildCoreExpressions() {
		if (this.isAlloc()) {
			/* build the alloc expression, too. */
			CoreExpr.getAlloc(this.getCall());
		}

		AssignExpr cexpr = (AssignExpr)((ExprStat)stat).getExpr();
		Expression lhsExpr = cexpr.getLeft();
		if (lhsExpr != null) {
			CoreExpr e = CoreExpr.fromAST(lhsExpr);
			assert e instanceof CoreDerefExpr :
				"\nInvalid expression in LHS: " + cexpr.getLeft(); 
			lhs = (CoreDerefExpr) e;

			/* construct field expressions as well */
			if (Options.DISMANTLE_STRUCTURE_ASSIGNMENTS) 
				buildFields(lhs, lhsExpr.getType());
		} else
			lhs = null;

		CallExpr call = getCall();
		Expression efun = call.getFun();
		if (!(efun instanceof VarExpr))
			efun = cleanupFunctionExpr(efun);
		fun = CoreExpr.fromAST(efun);
		
		int nargs = call.numArgs();
		args = new CoreExpr[nargs];
		for (int i = 0; i < nargs; i++) {
			Expression arg = call.getArg(i);
			args[i] = CoreExpr.fromAST(arg);
			
			/* construct field expressions as well */
			if (Options.DISMANTLE_STRUCTURE_ASSIGNMENTS) 
				buildFields(args[i], arg.getType());
		}
	}
	
	public void buildFields(CoreExpr e, Type t) {
		if (!e.isDeref())
			return;
		
		t = t.unwrap();
		if (t.isStruct() || t.isUnion()) 
			((CoreDerefExpr)e).fieldSubExprs(t);
	}
	
	public CoreDerefExpr getLeft() {
		return lhs;
	}
	
	public CoreExpr getFun() {
		return fun;
	}
	
	public int numArgs() {
		return args.length;
	}
	
	public CoreExpr getArg(int i) {
		assert i >= 0 && i <args.length : 
			"\nInvalid arg number: " + i + " in " + stat;
		return args[i];
	}

	public CoreExpr getCoreKid(int i) {
		if (lhs != null) {
			if (i == 0) return lhs;
			i = i - 1;
		}
				
		switch (i) {
		case 0: return fun;
		default: return args[i-1];
		}
	}

	public int numCoreKids() {
		if (lhs == null)
			return args.length + 1;
		else
			return args.length + 2;
	}

	
	/** Deal with the "feature" that allows indirect calls of the form
	 *  (*******f)() where f is just a one-level function pointer. */
	static private Expression cleanupFunctionExpr(Expression e) {
		Expression se = simplifyHelper(e);
		return se == null ? e : se;
	}
	
	static private Expression simplifyHelper(Expression e) {
		if (e instanceof DerefExpr) {
			DerefExpr de = (DerefExpr)e;
			Expression base = de.getBase();
			Expression e1 = simplifyHelper(base);
			if (e1 != null) 
				return e1;			
		}
		
		Type t = ExprType.typeOf(e).unwrap(); 
		if (t instanceof PointerType) {
			Type tgt = t.getTargetType().unwrap();
			if (!(tgt instanceof PointerType))
				return e;
		}
		
		return null;
	}	
}
