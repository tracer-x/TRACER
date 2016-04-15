package crystal.analysis.pointer;

import java.util.*;

import crystal.ast.*;
import crystal.core.*;
import crystal.general.*;
import crystal.util.*;

/** The points-to information annotated to each core expression. */
public class PTInfo {
	
	/** Map fields to Core Expressions. There is one single target 
	 * per field, because the analysis is unification-based. */
	Map<Symbol,CoreExpr> fieldmap;
	
	/** The dereference target and the deref type. 
	 *  Null type means inconsistent dereferences. */
	CoreExpr deref;
	Type derefType;
	
	/** If the node contains function pointers, this points
	 *  to the set of parameters + a "return" parameter. */
	List<CoreExpr> funptr;	
	
	/** True if the equivalence class might contain pointer values */
	private boolean pointer;

	/** Parent pointer for one-level union-find structures. */
	private PTInfo parent;
	
	public boolean hasPointers() {
		return pointer;
	}
	
	public PTInfo getRep() {
		PTInfo par = parent;
		if (par == null)
			return this;
		
		PTInfo crt = null;
		while (par != null) { 
			crt = par;
			par = crt.parent;
		}

		parent = crt;
		return crt;
	}
	
	public static void fill(CoreExpr e) {
		assert e != null;
		if (e.ptinfo != null) return;
		e.ptinfo = new PTInfo();
		e.accept(fillvis, null);
	}
	
	static Set<CoreAddrExpr> funSymbols = new HashSet<CoreAddrExpr>();
	
	private static CoreExprVisitor fillvis = new CoreExprVisitor() {		
		public Object visit(CoreAddrExpr e, Object obj) {
			PTInfo info = (PTInfo)e.ptinfo;
			assert info != null;
			info.pointer = true;
			
			Symbol sym = e.getSymbol();
			if (sym.isFunction() && sym.isDefined()) {
				Function fun = (Function)sym;
				funSymbols.add(e);

				List<CoreExpr> v = new ArrayList<CoreExpr>();
				info.funptr = v;
				
				Symbol retsym = fun.getReturnVar();
				if (retsym != null) {
					VarExpr ret = new VarExpr(retsym);
					CoreExpr cret = CoreExpr.fromAST(ret);
					fill(cret);
					v.add(cret);
				}
				else
					v.add(null);
				
				for (int i = 0; i < fun.numParams(); i++) {
					Symbol param = fun.getParam(i);
					if (param == Symbol.varargs) continue;
					VarExpr par = new VarExpr(param);
					CoreExpr cpar = CoreExpr.fromAST(par); 
					fill(cpar);
					v.add(cpar);

					/* shadow assignments */
					if (PointerAnalysis.INCLUDE_SHADOWS) {
						Symbol paramShadow = fun.getShadowParam(i);
						VarExpr parShadow = new VarExpr(paramShadow);
						CoreExpr cparShadow = CoreExpr.fromAST(parShadow); 
						fill(cparShadow);					
						PointerAnalysis.addUnify(cpar, cparShadow);
					}
				}
			}
			return null;
		}
		
		public Object visit(CoreFieldExpr e, Object obj) {
			CoreExpr base = e.getExpr();
			Symbol field = e.getField();
						
			fill(base);
			PTInfo info = (PTInfo)e.ptinfo;
			PTInfo binfo = base.getInfo();
			
			if (!(base.isNumConstant())) {
				binfo.pointer = true;
				info.pointer = true;

				if (PointerAnalysis.isFieldInsensitive()) {
					PointerAnalysis.addUnify(e, base);
				}
				else if (PointerAnalysis.isFieldBased()) {
					CoreExpr fexp = PointerAnalysis.fmap.get(field);
					if (fexp == null) 
						PointerAnalysis.fmap.put(field, e);
					else
						PointerAnalysis.addUnify(e, fexp);
				}
				else /* field-sensitive */ {
					Map<Symbol, CoreExpr> m = binfo.fieldmap;
					if (m == null) {
						m = new HashMap<Symbol, CoreExpr>(3);
						binfo.fieldmap = m;
					}

					CoreExpr old = m.get(field);
					if (old == null)
						m.put(field, e);
					else
						PointerAnalysis.addUnify(old, e);
				}
			}
			return null; 
		};

		public Object visit(CoreDerefExpr e, Object obj) {
			Type type = e.getType();
			CoreExpr base = e.getExpr();

			PTInfo info = (PTInfo)e.ptinfo;
			info.pointer = type.isPointer() || type.isArray();
			
			fill(base);
			PTInfo binfo = base.getInfo();
			
			if (!(base.isNumConstant())) {
				binfo.pointer = true;

				CoreExpr old = binfo.deref;
				if (old == null) {
					binfo.deref = e;
					binfo.derefType = type;
				}
				else if (binfo.derefType != null &&
						!sameType(type, binfo.derefType)) 
				{
					binfo.derefType = null;
				}
					
				PointerAnalysis.addUnify(binfo.deref, e);
			}
			
			return null;
		}
		
		public Object visit(CoreAllocExpr e, Object obj) {
			PTInfo info = (PTInfo)e.ptinfo;
			info.pointer = true;
			return null; 
		};
		
		public Object visit(CoreStringExpr e, Object obj) {
			PTInfo info = (PTInfo)e.ptinfo;
			info.pointer = true;
			return null; 
		};
		
		public Object visit(CoreUnaryExpr e, Object obj) {
			visitOp(e);
			return null; 
		};
		
		public Object visit(CoreBinaryExpr e, Object obj) {
			visitOp(e);
			return null; 
		};
		
		private void visitOp(CoreExpr e) {
			PTInfo info = (PTInfo)e.ptinfo;
			info.pointer = false;

			boolean unify = false;
			if (e instanceof CoreBinaryExpr) 
				switch(((CoreBinaryExpr)e).getOp()) {
				case ArithmOps.PLUS:
				case ArithmOps.MINUS: unify = true;
				}
			else if (e instanceof CoreUnaryExpr &&
						((CoreUnaryExpr)e).isCast()) {
				unify = true;
			}
			
			for (int i = 0; i < e.numKids(); i++) {
				CoreExpr kid = e.getKid(i);
				fill(kid);
				if (unify) 
					PointerAnalysis.addOpAssign(e, kid);
			}
		}

		public Object visit(CoreConstExpr e, Object obj) {
			PTInfo info = (PTInfo)e.ptinfo;
			info.pointer = false;
			return null; 
		};		
	};
		
	/* Returns true if the derefs exist and get unified. */
	public static void assign(CoreExpr expr1, CoreExpr expr2) {
		CoreExpr rep1 = expr1.getRep();
		CoreExpr rep2 = expr2.getRep();
		if (rep1 == rep2) return;

		PTInfo info1 = ((PTInfo)rep1.ptinfo).getRep();
		PTInfo info2 = ((PTInfo)rep2.ptinfo).getRep();
		
		info1.unify(info2);
	}

	public static void unify(CoreExpr expr1, CoreExpr expr2) {
		assert expr1 != expr2;
		
		CoreExpr rep1 = expr1.getRep();
		CoreExpr rep2 = expr2.getRep();
		if (rep1 == rep2) return;
				
		PTInfo info1 = ((PTInfo)rep1.ptinfo).getRep();
		PTInfo info2 = ((PTInfo)rep2.ptinfo).getRep();
		
		/* swap the two sides for faster unification */
		if (info2.fieldmap != null && 
				(info1.fieldmap == null ||
				 info1.fieldmap.size() < info2.fieldmap.size())) 
		{
			CoreExpr rep  = rep1;  rep1  = rep2;  rep2  = rep;
			PTInfo   info = info1; info1 = info2; info2 = info;
			CoreExpr expr = expr1; expr1 = expr2; expr2 = expr;
		}
		
		rep2.ptinfo = rep1;
		info1.unify(info2);
		
		if (PointerAnalysis.checkConsistency()) 
			enforceTypeConsistency(rep1);
	}
	
	private void unify(PTInfo other) {
		if (other == this)
			return;
		
		pointer = pointer || other.pointer;
		mergeFunPtrs(other); 
		mergeDeref(other);
		mergeFields(other);
		
		other.pointer = false;
		other.funptr = null;
		other.deref = null;
		other.derefType = null;
		other.fieldmap = null;
		
		other.parent = this;
	}

	private void mergeFunPtrs(PTInfo other) {
		if (other.funptr == null)
			return;
	
		if (funptr == null) {
			funptr = other.funptr;
			return;
		}

		for (int i = 0; i < other.funptr.size(); i++) {
			CoreExpr e2 = other.funptr.get(i);
			CoreExpr e1 = null;
			if (i < funptr.size()) {
				e1 = funptr.get(i);
			} else {
				funptr.add(e2);
				continue;
			}

			/* skip null returns */
			if (i == 0 && (e1 == null || e2 == null))
				continue;
			
			PointerAnalysis.addUnify(e1, e2);	
		}
	}
	
	private void mergeDeref(PTInfo other) 
	{
		if (other.deref == null)
			return;

		if (deref == null) {
			deref = other.deref;
			derefType = other.derefType;
			return;
		}

		if (other.derefType == null ||
			(derefType != null && other.derefType != null &&
					!sameType(derefType, other.derefType)))
		{
			derefType = null;
		}
		
		PointerAnalysis.addUnify(deref, other.deref);
	}

	private void mergeFields(PTInfo other) {
		if (other.fieldmap == null)
			return;
		
		if (fieldmap == null) {
			fieldmap = other.fieldmap;
			return;
		}
		
		for (Map.Entry<Symbol,CoreExpr> entry : other.fieldmap.entrySet()) {
			Symbol field = entry.getKey();
			CoreExpr expr = entry.getValue().getRep();
			
			if (fieldmap == null) 
				fieldmap = new HashMap<Symbol, CoreExpr>(3);
			
			CoreExpr oldexpr = fieldmap.get(field);

			if (oldexpr == null)
				fieldmap.put(field, expr);
			else 
				PointerAnalysis.addUnify(expr, oldexpr);
		}
	}

	static void enforceTypeConsistency(CoreExpr expr) {
		PTInfo info = expr.getInfo();
		if (info.fieldmap == null)
			return;

		if (info.deref != null  && info.derefType == null) {
			collapseFields(expr, info);
			return;
		}
		
		Type structType = null;
		boolean consistent = true;
				
		for (Map.Entry<Symbol,CoreExpr> entry : info.fieldmap.entrySet()) {
			Symbol field = entry.getKey();
			assert field != null; 

			Type crt = AggregateType.getStructOf(field);
			if (structType == null) {
				structType = crt;
			}
			else if (prefixType(structType, crt, false)) {
				structType = crt;
			}
			else if (!prefixType(crt, structType, false)) {
				consistent = false;
				break;
			}
		}
		
		if (consistent && structType != null && info.deref != null) 
			consistent = prefixType(info.derefType, structType, true);
		
		if (!consistent) 
			collapseFields(expr, info);
	}
	
	private static void collapseFields(CoreExpr expr, PTInfo info) {
		assert info.parent == null;

		info.derefType = null;

		if (info.fieldmap == null)
			return;

		for (Map.Entry<Symbol,CoreExpr> entry : info.fieldmap.entrySet()) {
			Symbol field = entry.getKey();
			assert field != null;
			CoreExpr fexpr = entry.getValue().getRep();
			PointerAnalysis.addUnify(expr, fexpr);
		}
	}

	public static boolean prefixType(Type p, Type t, boolean smallest) 
	{
		p = p.unwrap();
		t = t.unwrap();
		
		if (!smallest && sameType(p, t))
			return true;
		
		if (t instanceof ArrayType) {
			Type elem = ((ArrayType)t).getElementType();
			return prefixType(p, elem, smallest);
		}
		
		if (t instanceof AggregateType) {
			AggregateType at = (AggregateType)t;
			if (t.isStruct()) {
				Type first = at.getField(0).getType();
				return prefixType(p, first, smallest);
			}
		}
		
		if (smallest && (t.isPrimitive() || t.isEnum() || t.isPointer()))
			return sameType(p, t);
		
		return false;
	}

	public static boolean sameType(Type t1, Type t2) {
		t1 = t1.unwrap();
		t2 = t2.unwrap();
		
		if (t1 == t2) 
			return true;
		
		if (t1 instanceof PointerType && 
			t2 instanceof PointerType)
			return true;
		
		return TypeEquiv.cmpByStruct(t1, t2) == Order.EQUAL;
	}

}
