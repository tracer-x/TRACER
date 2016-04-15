package crystal.cfg;

import java.util.*;

import crystal.ast.*;
import crystal.cfg.CFGNopNode.*;
import crystal.core.*;
import crystal.general.*;
import crystal.util.*;

/** A syntax-directed translation from AST to CFG */
public class CFGBuilder implements ExprVisitor<Expression, Object>,
		StatVisitor<CFGNode, Object> 
{
	Map<Label, CFGNode> map;
	
	static Function crtFunction;

	public static void buildCFGs() {
		CFGBuilder v = new CFGBuilder();
		v.map = new HashMap<Label, CFGNode>();

		for (Function fun : Symtab.getFunctions()) {
			activeSymtab = fun.getSymTab();
			crtFunction = fun;
			
			CFGStatNode entry = new CFGNopNode(NopType.Entry);
			CFGStatNode exit = new CFGNopNode(NopType.Exit);
			exit.getStatement().setLocation(
				fun.getBody().getFile(),
				fun.getBody().getRightLine(),
				fun.getBody().getRightCol(),
				fun.getBody().getRightLine(),
				fun.getBody().getRightCol());
				
			entry.getStatement().setLocation(
				fun.getBody().getFile(),
				fun.getBody().getLeftLine(),
				fun.getBody().getLeftCol(),
				fun.getBody().getLeftLine(),
				fun.getBody().getLeftCol());


			
			CFGInfo info = new CFGInfo(entry, exit);
			fun.setCFG(info);

			/* If the last statement is not a return, add one */
			BlockStat body = fun.getBody();
			List<Statement> stats = body.getStatements();
			int num = stats.size();
			if (num >= 1) {
				Statement last = stats.get(num-1);
				if (!(last instanceof ReturnStat)) {
					if (fun.getReturnVar() == null)
						body.add(new ReturnStat(null));
					else
						body.add(new ReturnStat(NumberExpr.zero));
				}
			}

			/* clear the goto map */
			v.map.clear();
			
			/* build the graph */
			pushNBC(exit, null, null);
			entry.succ = body.accept(v, null);
			popNBC();

			/* set the predecessor links and fixup remaining goto nodes */
			setLinksAndFixGotos(entry, exit, v.map);

			if (fun.isInit())
				for (Symbol sym : fun.getSymTab().getVFTSymbols())
					if (sym.hasAddressTaken())
						sym.addStorage(Flags.STATIC);

			/* build core expressions and lookup the exit node */
			boolean exitFound = false;
			for (CFGNode node : info.computeAllNodes()) {
				node.buildCoreExpressions();
				if (node == exit)
					exitFound = true;
			}
			
			if (!exitFound) {
				System.err.println("\nError: the exit point is not reachable " + 
						"for function " + fun.getNameAndFile());
				System.exit(1);
			}
			
			CoreExpr.getAddressOf(fun);
			for (int i = 0; i < fun.numParams(); i++) {
				Symbol par = fun.getParam(i);
				CoreDerefExpr expr = CoreExpr.getVar(fun.getParam(i));
				
				/* construct field expressions as well */
				if (Options.DISMANTLE_STRUCTURE_ASSIGNMENTS) {
					Type typ = par.getType().unwrap();
					if (typ.isStruct() || typ.isUnion())
						expr.fieldSubExprs(typ);
				}
			}

			Symbol retvar = fun.getReturnVar();
			if (retvar != null) {
				CoreDerefExpr expr = CoreExpr.getVar(retvar);

				/* construct field expressions as well */
				if (Options.DISMANTLE_STRUCTURE_ASSIGNMENTS) {
					Type typ = retvar.getType().unwrap();
					if (typ.isStruct() || typ.isUnion())
						expr.fieldSubExprs(typ);
				}
			}
			
			/* discard the AST */
			fun.setBody(null);
		}
	}

	private static void setLinksAndFixGotos(CFGNode entry, CFGNode exit, 
			Map<Label,CFGNode> map) 
	{
		Stack<CFGNode> work = new Stack<CFGNode>();
		Map<CFGNode,CFGNode> dfspar = new HashMap<CFGNode,CFGNode>();
		work.push(entry);

		while (!work.empty()) {
			CFGNode node = work.pop();
			
			if (node.isReturn()) {
				node.setSucc(0, exit);
				exit.addPred(node);
			}
			else {
				succloop:
				for (int i = 0; i < node.numSuccs(); i++) {
					CFGNode succ = node.getSucc(i);
					CFGNode newsucc = getRealNode(succ, map);
					if (succ != newsucc) 
						node.setSucc(i, newsucc);
					
					if (newsucc.val == 0) {
						newsucc.val = 1;
						work.push(newsucc);
						dfspar.put(newsucc, node);
					}
					else {
						for (CFGNode n = node; n != null; n = dfspar.get(n))
							if (n == newsucc) {
								newsucc.addPredFirst(node);
								continue succloop;
							}
					}
					
					newsucc.addPred(node);
				}
			}
		}
	}

	private static CFGNode getRealNode(CFGNode node, Map<Label, CFGNode> map) {
		if (!(node instanceof CFGStatNode)) 
			return node;
		
		Statement stat = ((CFGStatNode) node).getStatement();
		if (!(stat instanceof GotoStat))
			return node;
		
		Label lab = ((GotoStat) stat).getLabel();
		return getRealNode(map.get(lab), map);
	}

	
	static CFGNode cfgExit = null;
	static Stack<CFGNode> next = new Stack<CFGNode>();
	static Stack<CFGNode> cont = new Stack<CFGNode>();
	static Stack<CFGNode> brk = new Stack<CFGNode>();
	static Stack<CFGSwitchNode> sw = new Stack<CFGSwitchNode>();

	static private void pushNBC(CFGNode n, CFGNode c, CFGNode b) {
		next.push(n);
		cont.push(c);
		brk.push(b);
	}

	static private void popNBC() {
		next.pop();
		cont.pop();
		brk.pop();
	}

	/* Statements */

	public CFGNode visit(IfStat s, Object o) {
		CFGNode test = buildIfTest(s.getCond());
		CFGNode gthen = s.getThen().accept(this, null);
		CFGNode gelse = s.getElse() == null ? 
				next.peek() : 
				s.getElse().accept(this, null);
		linkThenElse(test, gthen, gelse);
		return test;
	}

	public CFGNode visit(WhileStat s, Object o) {
		CFGNode test = buildIfTest(s.getCond());

		CFGNode nxt = next.peek();
		pushNBC(test, test, nxt);

		CFGNode body = s.getBody().accept(this, null);
		linkThenElse(test, body, nxt);

		popNBC();
		return test;
	}

	public CFGNode visit(DoWhileStat s, Object o) {
		CFGNode test = buildIfTest(s.getCond());

		CFGNode nxt = next.peek();
		pushNBC(test, test, nxt);

		CFGNode body = s.getBody().accept(this, null);
		linkThenElse(test, body, nxt);

		popNBC();
		return body;
	}

	public CFGNode visit(ForStat s, Object o) {
		CFGNode test = buildIfTest(s.getCond());

		CFGNode nxt = next.peek();

		next.push(test);
		CFGNode init = (new ExprStat(s.getInit())).accept(this, null);
		CFGNode step = (new ExprStat(s.getStep())).accept(this, null);
		next.pop();

		pushNBC(step, step, nxt);

		CFGNode body = s.getBody().accept(this, null);
		linkThenElse(test, body, nxt);

		popNBC();
		return init;
	}

	public CFGNode visit(BreakStat s, Object o) {
		return brk.peek();
	}

	public CFGNode visit(ContinueStat s, Object o) {
		return cont.peek();
	}

	public CFGNode visit(BlockStat s, Object o) {
		CFGNode nxt = next.peek();
		List<Statement> l = s.getStatements();
		for (int k = l.size() - 1; k >= 0; k--) {
			Statement sk = l.get(k);
			next.push(nxt);
			nxt = sk.accept(this, null);
			next.pop();
		}
		return nxt;
	}

	public CFGNode visit(GotoStat s, Object o) {
		CFGNode g = map.get(s.getLabel());
		if (g == null) {
			g = new CFGStatNode(s);
		}
		return g;
	}

	public CFGNode visit(LabelStat s, Object o) {
		CFGNode g = s.getLabeled().accept(this, null);

		/* don't lose the label! */
		if (g == null)
			map.put(s.getLabel(), next.peek());
		else
			map.put(s.getLabel(), g);

		return g;
	}

	public CFGNode visit(SwitchStat s, Object o) {
		Pair<CFGNode, CFGSwitchNode> test = buildSwitchTest(s.getExpr());

		brk.push(next.peek());
		sw.push(test.snd);

		/*
		 * Note: the portion of the body not in a case/default statement gets
		 * dropped.
		 */
		s.getStat().accept(this, null);

		if (!test.snd.hasDefault())
			test.snd.addEdge(next.peek(), null);

		brk.pop();
		sw.pop();
		return test.fst;
	}

	public CFGNode visit(CaseLabelStat s, Object o) {
		CFGNode g = s.getLabeled().accept(this, null);
		CFGSwitchNode sn = sw.peek();
		if (sn == null) {
			System.err.println("\nInvalid case statement.");
			System.exit(1);
		}
		sn.addEdge(g, s.getGuard());
		return g;
	}

	public CFGNode visit(ReturnStat s, Object o) {
		assert pre == null && post == null;
		exprSimplify(s, null);
		CFGReturnNode n = new CFGReturnNode(s);
		CFGNode ret = link(pre, n);
		pre = post = null;
		return ret;
	}

	enum E { EXPRSTAT, ASSIGN };

	public CFGNode visit(ExprStat s, Object o) {
		assert pre == null && post == null;
		if (s.getExpr() == null)
			return new CFGNopNode(NopType.Empty);

		exprSimplify(s, E.EXPRSTAT);

		CFGNode n = buildAssign(s.getExpr());
		CFGNode ret = link(pre, link(n, link(post, next.peek())));
		pre = post = null;
		return ret;
	}

	public CFGNode visit(AsmStat s, Object t) {
		assert pre == null && post == null;
		exprSimplify(s, null);
		CFGAsmNode n = new CFGAsmNode(s);
		CFGNode ret = link(pre, link(n, link(post, next.peek())));
		pre = post = null;
		return ret;
	}

	/* Simplifies and replaces sub-expressions in s. */
	public Statement exprSimplify(Statement s, Object o) {
		for (int i = 0; i < s.numExprKids(); i++) {
			Expression ek = s.getExprKid(i);
			if (ek == null)
				continue;
			Expression newe = ek.accept(this, o);
			if (newe != ek) {
				if (newe != null) newe.setLocationFrom(ek);
				s.setExprKid(i, newe);
			}
		}
		return s;
	}

	/* Simplifies and replaces sub-expressions in e. */
	public Expression exprSimplify(Expression e, Object o) {
		for (int i = 0; i < e.numExprKids(); i++) {
			Expression ek = e.getExprKid(i);
			if (ek == null)
				continue;
			Expression newe = ek.accept(this, o);
			
			if (newe != null) newe.setLocationFrom(ek);
			assert ek != null;
			if (newe != ek)
				e.setExprKid(i, newe);
		}
		return e;
	}

	/* Expressions */

	/*
	 * Insert side-effects/control-flow into pre. Insert post-increments code
	 * into post
	 */
	CFGNode pre, post;

	/*
	 * In the visiting functions, o indicates whether e's parent is an
	 * AssignStat or ExprStat. This is used to decide whether calls should be
	 * hoisted out.
	 */

	public Expression visit(AddressofExpr e, Object o) {
		Expression base = e.getBase();
		if (base instanceof VarExpr || base instanceof FieldExpr
				|| base instanceof DerefExpr || base instanceof ArrayExpr)
			return exprSimplify(e, null);
		else
			return pushAddr(base).accept(this, o);
	}

	private static Expression pushAddr(Expression e) {
		if (e instanceof CastExpr) {
			recurse(e, ((CastExpr) e).getBase());
			return e;
		} else if (e instanceof ConditionalExpr) {
			recurse(e, ((ConditionalExpr) e).getTrue());
			recurse(e, ((ConditionalExpr) e).getFalse());
			return e;
		} else if (e instanceof StatExpr) {
			BlockStat block = ((StatExpr) e).getStat();
			int size = block.numStatKids();
			if (size == 0)
				throw new RuntimeException("Invalid address-of: " + e);
			Statement s = block.getStatKid(size - 1);
			if (!(s instanceof ExprStat))
				throw new RuntimeException("Invalid address-of: " + e);
			recurse(s, ((ExprStat) s).getExpr());
			return e;
		}
		if (e instanceof VarExpr || e instanceof FieldExpr
				|| e instanceof DerefExpr || e instanceof ArrayExpr) {
			return new AddressofExpr(e);
		} else
			throw new RuntimeException("Invalid address-of: " + e);
	}

	private static void recurse(Expression par, Expression kid) {
		Expression kid1 = pushAddr(kid);
		if (kid != kid1) {
			if (kid1 != null) kid1.setLocationFrom(kid);
			par.replaceKid(kid, kid1);
		}
	}

	private static void recurse(Statement par, Expression kid) {
		Expression kid1 = pushAddr(kid);
		if (kid != kid1) {
			if (kid!= null) kid1.setLocationFrom(kid);
			par.replaceKid(kid, kid1);
		}
	}

	public Expression visit(ArrayExpr e, Object o) {
		return exprSimplify(e, null);
	}

	public Expression visit(CastExpr e, Object o) {
		Expression res = exprSimplify(e, o);
		CastExpr newcast = (CastExpr)res;
		Expression base = newcast.getBase();
		if (base instanceof CallExpr) {
			CallExpr call = (CallExpr)base;
			call.setCast(newcast.getCastType());
			res = base;
		}
		return res;
	}

	public Expression visit(DerefExpr e, Object o) {
		return exprSimplify(e, null);
	}

	public Expression visit(FieldExpr e, Object o) {
		return exprSimplify(e, null);
	}

	public Expression visit(ArithmExpr e, Object o) {
		return exprSimplify(e, null);
	}

	public Expression visit(CompareExpr e, Object o) {
		return exprSimplify(e, null);
	}

	public Expression visit(BitwiseExpr e, Object o) {
		return exprSimplify(e, null);
	}

	public Expression visit(UnaryArithmExpr e, Object o) {
		return exprSimplify(e, null);
	}

	public Expression visit(NegationExpr e, Object o) {
		return exprSimplify(e, null);
	}

	public Expression visit(UnaryBitwiseExpr e, Object o) {
		return exprSimplify(e, null);
	}

	public Expression visit(NumberExpr e, Object o) {
		return e;
	}

	public Expression visit(SizeofExpr e, Object o) {
		return e;
	}

	public Expression visit(StringExpr e, Object o) {
		return e;
	}

	public Expression visit(VarExpr e, Object o) {
		return e;
	}

	public Expression visit(AssignExpr e, Object o) {
		if (o == E.EXPRSTAT) {
			exprSimplify(e, E.ASSIGN);
			
			if (e.getLeft().getType().isArray()) {
				System.err.println("\nInvalid assignment: " + e +
						" " + crtFunction.getNameAndFile());
				System.exit(1);
			}
			
			if (Options.DISMANTLE_STRUCTURE_ASSIGNMENTS) 
				return dismantleStructAssign(e);
			else
				return e;
		}

		exprSimplify(e, null);
		pre = linkAndSource(pre, new CFGAssignNode(e), e);
		return e.getRight();
	}

	public Expression visit(AssignArithmExpr e, Object o) {
		exprSimplify(e, null);
		Expression rhs = new ArithmExpr(e.getOp(), e.getLeft(), e.getRight());
		Expression lhs = e.getLeft();
		pre = linkAndSource(pre, new CFGAssignNode(lhs, rhs), e);
		return e.getLeft();
	}

	public Expression visit(AssignBitwiseExpr e, Object o) {
		exprSimplify(e, null);
		Expression rhs = new BitwiseExpr(e.getOp(), e.getLeft(), e.getRight());
		Expression lhs = e.getLeft();
		pre = linkAndSource(pre, new CFGAssignNode(lhs, rhs), e);
		return e.getLeft();
	}

	public Expression visit(AutoIncExpr e, Object o) {
		exprSimplify(e, null);
		ArithmOps op = e.isInc() ? ArithmOps.Plus : ArithmOps.Minus;
		
		Expression rhs = new ArithmExpr(op, e.getExpr(), NumberExpr.one);
		Expression lhs = e.getExpr();
		if (lhs instanceof CastExpr) {
			lhs = ((CastExpr)lhs).getBase();
			rhs = new CastExpr(lhs.getType(), rhs);
		}
		
		CFGAssignNode assign = new CFGAssignNode(lhs, rhs);
		if (e.isPost())
			post = linkAndSource(post, assign, e);
		else
			pre = linkAndSource(pre, assign, e);
		return e.getExpr();
	}

	public Expression visit(CommaExpr e, Object o) {
		CFGNode savepre = pre;
		CFGNode savepost = post;
		pre = post = null;
		Expression ret = null;
		for (int i = 0; i < e.numExprKids(); i++) {
			ret = e.getExprKid(i).accept(this, null);
			savepre = link(link(savepre, pre), post);
			pre = post = null;
		}
		pre = savepre;
		post = savepost;
		return ret;
	}

	public Expression visit(CallExpr e, Object o) {
		exprSimplify(e, null);
		if (o != null)
			return e;

		if (e.getType().isVoid()) {
			pre = linkAndSource(pre, new CFGCallNode(null, e), e);
			return null;
		} else {
			Symbol tmp = createTemporary(e.getType());
			VarExpr varexp = new VarExpr(tmp);
			varexp.setLocationFrom(e);
			pre = linkAndSource(pre, new CFGCallNode(varexp, e), e);
			return varexp;
		}
	}

	public Expression visit(StatExpr e, Object o) {
		CFGNode savepre = pre;
		CFGNode savepost = post;
		pre = post = null;

		BlockStat block = e.getStat();
		int size = block.numStatKids();
		if (size == 0)
			return null;

		int last = size - 1;
		Expression expr = null;
		if (block.getStatKid(last) instanceof ExprStat)
			expr = ((ExprStat) block.removeStatKid(last)).getExpr();

		next.push(null);
		CFGNode g = block.accept(this, null);
		next.pop();

		if (expr != null)
			expr = expr.accept(this, null);

		pre = link(savepre, link(g, pre));
		post = link(savepost, post);
		return expr;
	}

	/* e1 ? e2 : e3 => if (e1) then t = e2 else t = e3 , result = t */
	public Expression visit(ConditionalExpr e, Object o) {
		CFGNode savepre = pre;
		CFGNode savepost = post;

		Type type = e.getType();

		pre = post = null;
		CFGNode test = buildIfTest(e.getCond());

		pre = post = null;
		Expression e1 = e.getTrue().accept(this, E.ASSIGN);
		Symbol tmp = e1.getType().isVoid() ? null : createTemporary(type);
		CFGNode n1 = link(pre, link(buildAssign(tmp, e1), post));

		pre = post = null;
		Expression e2 = e.getFalse().accept(this, E.ASSIGN);
		CFGNode n2 = link(pre, link(buildAssign(tmp, e2), post));

		linkThenElse(test, n1, n2);

		pre = link(savepre, test);
		post = savepost;
		return tmp == null ? null : new VarExpr(tmp);
	}

	/*
	 * e1 OP e2 => result = e1 OP e2, if e1, e2 pure. 
	 * Otherwise: 
	 * e1 || e2 => if (e1) then t = 1 else t = !!e2 , result = t 
	 * e1 && e2 => if (e1) then t = !!e2 else t = 0 , result = t
	 */
	public Expression visit(LogicalExpr e, Object o) {
		CFGNode savepre = pre;
		CFGNode savepost = post;

		pre = post = null;
		CFGNode test = buildIfTest(e.getLeft());
		if (test == null)
			throw new RuntimeException("Could not evaluate to an expression:\n"
					+ e.getLeft());

		boolean lpure = true;
		for (int i = 0; i < test.numSuccs(); i++)
			lpure = lpure && (test.getSucc(i) == null);

		pre = post = null;
		Expression e2 = e.getRight().accept(this, null);
		if (e2 == null)
			throw new RuntimeException("Could not evaluate to an expression:\n"
					+ e.getRight());

		CFGNode pre2 = pre, post2 = post;
		boolean rpure = (pre2 == null) && (post2 == null);

		if (lpure && rpure) {
			pre = savepre;
			post = savepost;
			return e;
		}

		/* translate expression into control-flow */
		Symbol tmp = createTemporary(Type.SignedInt);
		boolean or = e.getIntOp() == LogicalOps.OR;
		NumberExpr c = or ? NumberExpr.one : NumberExpr.zero;
		CFGNode n1 = buildAssign(tmp, c);

		UnaryExpr negneg = new NegationExpr(new NegationExpr(e2));
		CFGNode n2 = link(pre2, link(buildAssign(tmp, negneg), post2));

		if (or)
			linkThenElse(test, n1, n2);
		else
			linkThenElse(test, n2, n1);

		pre = link(savepre, test);
		post = savepost;
		return new VarExpr(tmp);
	}

	/* Builds an assignment or a call */
	private CFGNode buildAssign(Symbol s, Expression e) {
		if (s == null) return null;
		
		VarExpr var = (s == null) ? null : new VarExpr(s);
		if (e instanceof CallExpr)
			return new CFGCallNode(var, (CallExpr) e);
		else
			return new CFGAssignNode(var, e);
	}

	/* Dismantle assignments of entire structures into
	 * assignments of the individual fields. */
	private Expression dismantleStructAssign(AssignExpr e) {
		BlockStat block = new BlockStat();
		if (helper(e.getLeft(), e.getRight(), block.getStatements()))
			return e;
		else {
			CFGNode savepre = pre;
			CFGNode savepost = post;
			pre = post = null;
			pushNBC(null, null, null);
			
			CFGNode n = visit(block, null);

			pre = link(savepre, n);
			post = savepost;
			popNBC();
			return null;
		}
	}

	private boolean helper(Expression l, Expression r, List<Statement> list) {
		Type t = l.getType().unwrap();

		if (t.isStruct()) {
			AggregateType at = (AggregateType) t;
			for (int i = 0; i < at.numFields(); i++) {
				Symbol f = at.getField(i);
				Expression lf = new FieldExpr(false, l, f);
				Expression rf = new FieldExpr(false, r, f);
				helper(lf, rf, list);
			}
			return false;
		}
		else if (t.isArray()) {
			Symtab global = Symtab.getGlobalScope();
			Symbol fun = global.lookupSymbol(Flags.FUN, "memcpy");
			if (fun == null) fun = Builtins.get("memcpy");
			fun.setAccessed();
			
			Expression func = new VarExpr(fun);
			List<Expression> args = new ArrayList<Expression>();
			Expression size = new SizeofExpr(t);
			args.add(l);
			args.add(r);
			args.add(size);
			list.add(new ExprStat(new CallExpr(func, args)));
			return false;
		}
		else {
			list.add(new ExprStat(new AssignExpr(l, r)));
			return true;
		}
	}

	/* Builds an assignment or a call */
	private CFGNode buildAssign(Expression e) {
		if (e instanceof CallExpr)
			return new CFGCallNode(null, (CallExpr) e);
		else if (e instanceof AssignExpr) {
			assert e instanceof AssignExpr;
			AssignExpr a = (AssignExpr) e;
			if (a.getRight() instanceof CallExpr)
				return new CFGCallNode(a.getLeft(), (CallExpr) a.getRight());
			else
				return new CFGAssignNode(a);
		}
		return null;
	}

	/* Builds a test condition that models switch(e). */
	private Pair<CFGNode, CFGSwitchNode> buildSwitchTest(Expression e) {
		assert pre == null && post == null;

		Expression e1 = e.accept(this, null);

		CFGSwitchNode test = null;
		CFGNode head = null;
		if (post == null) {
			test = new CFGSwitchNode(e1);
			head = link(pre, test);
		} else {
			Symbol tmp = createTemporary(e1.getType());
			VarExpr varexp = new VarExpr(tmp);
			varexp.setLocationFrom(e1);
			test = new CFGSwitchNode(varexp);
			head = link(pre, link(buildAssign(tmp, e1), link(post, test)));
		}

		pre = post = null;
		return new Pair<CFGNode, CFGSwitchNode>(head, test);
	}

	/*
	 * Builds a then-else test condition for e. Logical operators && and || are
	 * folded into the control-flow.
	 */
	private CFGNode buildIfTest(Expression e) {
		assert pre == null && post == null;

		if (e instanceof LogicalExpr) {
			LogicalExpr le = (LogicalExpr) e;
			CFGNode n1 = buildIfTest(le.getLeft());
			CFGNode n2 = buildIfTest(le.getRight());
			if (le.getOp() == LogicalOps.Or)
				linkThenElse(n1, null, n2);
			else
				linkThenElse(n1, n2, null);

			return n1;
		}

		Expression e1 = e.accept(this, null);

		CFGSwitchNode test = null;
		CFGNode head = null;
		if (post == null) {
			test = new CFGSwitchNode(e1);
			addThenElse(test, null, null);
			head = link(pre, test);
		} else {
			Symbol tmp = createTemporary(e1.getType());
			VarExpr varexp = new VarExpr(tmp);
			varexp.setLocationFrom(e1);
			test = new CFGSwitchNode(varexp);
			addThenElse(test, null, null);
			head = link(pre, link(buildAssign(tmp, e1), link(post, test)));
		}

		pre = post = null;
		return head;
	}

	private void addThenElse(CFGSwitchNode n, CFGNode nthen, CFGNode nelse) {
		n.labelsSrc.add(null);
		n.outEdges.add(nthen);

		/* if (!n.testSrc.isConst(1)) */
		n.labelsSrc.add(NumberExpr.zero);
		n.outEdges.add(nelse);
	}
	

	/* static structures used by 'computeExits' */
	static Stack<CFGNode> exits = new Stack<CFGNode>();
	static Stack<CFGNode> stack = new Stack<CFGNode>();
	static Set<CFGNode>   visited = new HashSet<CFGNode>();

	/* Returns the set of nodes with no successors reachable from head */
	private static void computeExits(CFGNode head) {
		exits.clear();
		visited.clear();
		stack.clear();
		
		stack.push(head);
		visited.add(head);
		while (!stack.isEmpty()) {
			CFGNode n = stack.pop();
			for (int i = 0; i < n.numSuccs(); i++) {
				CFGNode succ = n.getSucc(i);
				if (succ == null)
					exits.push(n);
				else if (!visited.contains(succ)) {
					stack.add(succ);
					visited.add(succ);
				}
			}
		}
	}
	
	/* Traverse all nodes reachable from n1 and link all exits to n2.
	 * Also record n2's location from src */
	private CFGNode linkAndSource(CFGNode n1, CFGNode n2, Expression src) {
		CFGNode toRet = link(n1, n2);
		if (n2 instanceof CFGStatNode) {
			((CFGStatNode)n2).getStatement().setLocationFrom(src);
		}
		return toRet;
	}

	/* Traverse all nodes reachable from n1 and link all exits to n2 */
	private CFGNode link(CFGNode n1, CFGNode n2) {
		if (n1 == null) return n2;
		if (n2 == null) return n1;

		/* Simple case: a chain of nodes */
		CFGNode crt = n1;
		while (crt instanceof CFGStatNode) {
			CFGStatNode sn = (CFGStatNode) crt;
			
			if (sn.isReturn()) {
				return n1;
			}
			else if (sn.succ == null) {
				sn.setSucc(0, n2);
				return n1;
			}
			
			crt = sn.succ;
		}

		/* link exits to n2 */
		computeExits(n1);
		while (!(exits.isEmpty())) {
			CFGNode n = exits.pop();
			for (int i = 0; i < n.numSuccs(); i++)
				if (n.getSucc(i) == null && !n.isReturn()) 
					n.setSucc(i, n2);
		}

		return n1;
	}

	private void linkThenElse(CFGNode ntest, CFGNode nthen, CFGNode nelse) {
		computeExits(ntest);
		for (CFGNode n : exits) {
			CFGSwitchNode sn = (CFGSwitchNode) n;
			assert sn.numEdges() == 2 || sn.numEdges() == 1;
			for (int i = 0; i < sn.numEdges(); i++) {
				CFGNode succ = sn.getSucc(i);
				Expression lab = sn.getLabelSrc(i);
				if (succ == null) {
					assert lab == null || lab == NumberExpr.zero;
					sn.setSucc(i, lab == null ? nthen : nelse);
				}
			}
		}
	}

	/* static data used by 'createTemporary' */
	private static Symtab activeSymtab;
	private static int offset = 1;

	/* Create a temporary variable */
	protected Symbol createTemporary(Type type) {
		String toTry;
		do
			toTry = Options.TEMP_PREFIX + offset++;
		while (activeSymtab.lookupLabelSelf(toTry) != null);

		/* convert array types to pointer types */
		type = type.skipTypedefs();
		if (type instanceof ArrayType)
			type = new PointerType(((ArrayType) type).getElementType());

		Symbol s = Symbol.newTemp(toTry, type);
		activeSymtab.insertSymLocal(s);
		return s;
	}

	static void printStats() {
		System.out.println();
		
		Map<String, Integer> map = new HashMap<String, Integer>();
		for (Function fun : Symtab.getFunctions()) {
			CFGInfo info = fun.getCFG();
			if (info == null)
				continue;
			for (CFGNode n : info.getAllNodes()) {
				if (n instanceof CFGSwitchNode)
					increment(map, "switch");
				else if (n instanceof CFGAssignNode)
					increment(map, "assign");
				else if (n instanceof CFGReturnNode)
					increment(map, "return");
				else if (n instanceof CFGCallNode)
					increment(map, "call");
			}
		}

		System.out.printf("   Total cfg nodes:  %d\n", sum(map));

		map.clear();
		map.put("alloc", CoreExpr.allocMap.values().size());
		map.put("addr", CoreExpr.varMap.values().size());
		for (CoreExpr e : CoreExpr.allExprs.values()) {
			if (e instanceof CoreDerefExpr)
				increment(map, "deref");
			else if (e instanceof CoreFieldExpr)
				increment(map, "field");
			else if (e instanceof CoreBinaryExpr || e instanceof CoreUnaryExpr)
				increment(map, "op");
			else if (e instanceof CoreConstExpr)
				increment(map, "const");
			else if (e instanceof CoreStringExpr)
				increment(map, "string");
			else
				assert false : e;
		}
		System.out.printf("   Total core exprs: %d\n", sum(map));
	}

	private static void increment(Map<String, Integer> m, String s) {
		Integer i = m.get(s);
		int v = i == null ? 0 : i.intValue();
		m.put(s, new Integer(v + 1));
	}

	private static int sum(Map<String, Integer> m) {
		int n = 0;
		for (Integer i : m.values())
			n += i.intValue();
		return n;
	}

}
