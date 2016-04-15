package crystal.core;

import java.util.*;

import crystal.general.*;
import crystal.util.*;
import crystal.analysis.alias.demand.*;
import crystal.analysis.pointer.*;
import crystal.ast.*;

/**
 *  Core Expressions: a basic, low-level, canonical representation of
 *  program expressions. A core expression is one of the following:
 *
 *    - numeric constant: a number or a sizeof expression
 *    - string constant: a string expression
 *    - address constant: symbolic address &x 
 *    - allocation site: a malloc() expression 
 *    - dereference expression  : * (core-expression)
 *    - field access expression : #f (core-expression)
 *    - arithmetic expressions  : core-expression op core-expression
 *
 *  Translation rules from AST expressions to core expressions: R(e) is the
 *  r-value of e, and L(e) is the l-value of e:
 *    R(&e) = L(e)
 *    R(e + e') = R(e) + R(e'),  if e not a pointer
 *    R(e + e') = R(e) + R(e') x size(type(*e)),  if e = pointer
 *    R(e)  = * L(e), otherwise
 *    
 *    L(x) = &x
 *    L(*e) = R(e)
 *    L(e.f) = #f L(e)
 *    L(e->f) = #f R(e)
 *    L(e[e']) = R(e) + R(e') x size(element(type(e)))
 *    
 *  Examples:
 *    x       = *(&x)
 *    *x      = *(*(&x))
 *    x.f     = *(#f(&x))
 *    &(x.f)  = #f(&x)
 *    x.f     = *(#f(&x))
 *    &(x->f) = #f(*(&x))
 *    x->f    = *(#f(*(&x)))
 *    v[i] = *(&v + *(&i) * sizeof(v[i])) if v is an array
 *    x[i] = *(*(&x) + *(&i) * sizeof(*x)) if x is a pointer
 *    
 *     
 *  Properties:
 *      - the address-of operator can be applied only to variables 
 *        (it cannot occur in the middle of an expression);
 *      - lvalue expressions always start with a dereference.
 */
public abstract class CoreExpr {
	
	/** Used during points-to analysis. 
	 *  For eq. class representatives, it points to the PTInfo object. 
	 *  For all others, it points to the parent in the union-find structure. */
	public Object ptinfo;
	
	/** The PEG node for this expression. */
	public PEGNode peg;
		
	/** If false, the first fields of structures, and all field of unions
	 *  are eliminated in core expressions */
	public static boolean KEEP_FIRST_FIELD = true;

	/** Map variables to their address-of core expressions. */
	public static Map<Symbol, CoreAddrExpr> varMap = 
		new HashMap<Symbol, CoreAddrExpr>();

	/** Map allocations to their address-of core expressions. */
	public static Map<CallExpr, CoreAllocExpr> allocMap = 
		new HashMap<CallExpr, CoreAllocExpr>();

	/** The set of all field and arithmetic core expressions */
	public static Map<CoreExpr,CoreExpr> allExprs = 
		new HashMap<CoreExpr, CoreExpr>();
	
	public static final CoreExpr zero = getExpr(new CoreConstExpr(0));
	public static final CoreExpr one = getExpr(new CoreConstExpr(1));
	
	public boolean isNumConstant() {
		return false;
	}
	
	public boolean isStringConstant() {
		return false;
	}
	
	public boolean isAddrConstant() {
		return false;
	}
	
	public boolean isAlloc() {
		return false;
	}
	
	public boolean isDeref() {
		return false;
	}

	public boolean isVariable() {
		return false;
	}

	public Symbol getVariable() {
		return null;
	}

	public boolean isParameterVar() {
		return false;
	}
	
	public boolean isAutomaticVar() {
		return false;
	}
	
	public boolean isPureLocalVar() {
		return false;
	}
	
	public boolean isLocalVar() {
		return false;
	}

	public boolean isGlobalVar() {
		return false;
	}

	public boolean isStaticVar() {
		return false;
	}

	public boolean hasAddressTaken() {
		return false;
	}
	
	public boolean isInteger(int n) {
		return false;
	}
	
	/** Returns true if this is an expression that doesn't involve global
	 *  variables or pointer indirection. Such expressions remain unchanged
	 *  across function calls. */
	public boolean isPureLocalExpr() {
		if (isAlloc() || (isDeref() && !isPureLocalVar()))
			return false;
		
		for (int i = 0; i < numKids(); i++)
			if (!getKid(i).isPureLocalExpr())
				return false;
		
		return true;
	}
	
	public CoreExpr getRep() {
		Object o = ptinfo;
		if (o instanceof PTInfo)
			return this;
		
		CoreExpr ce = null;
		while (o instanceof CoreExpr) {
			ce = (CoreExpr)o;
			o = ce.ptinfo;
		}
		
		assert o instanceof PTInfo;
		ptinfo = ce; 
		return ce;
	}
	
	public PTInfo getInfo() {
		Object o = ptinfo;
		CoreExpr ce = null;
		while (o instanceof CoreExpr) {
			ce = (CoreExpr)o;
			o = ce.ptinfo;
		}
		
		assert o instanceof PTInfo;
		return ((PTInfo)o).getRep();
	}
	
	public static CoreExpr fromAST(Expression e) {
		return rvalue(e);
	}
	
	/** Build a core expression for the r-value of an AST expression */
	private static CoreExpr rvalue(Expression e) {
		assert e != null;
		
		if (e instanceof CastExpr) {
			CastExpr ce = (CastExpr)e;
			Type cast = ce.getCastType();
			Expression base = ce.getBase();
			Type btype = base.getType();
			CoreExpr c = getExpr(rvalue(base));
			if (cast.isPointer() && btype.isPointer())
				return c;
			else 
				return getExpr(new CoreUnaryExpr(ce.getCastType(), c));
		}
		else if (e instanceof AddressofExpr) {
			AddressofExpr ae = (AddressofExpr)e;
			return getExpr(lvalue(ae.getBase())); 
		} 
		else if (e instanceof StringExpr) {
			StringExpr se = (StringExpr)e;
			return getExpr(new CoreStringExpr(se));
		}
		else if (e instanceof NumberExpr) {
			NumberExpr ne = (NumberExpr)e;
			return getExpr(new CoreConstExpr(ne.getNumber()));
		}
		else if (e instanceof SizeofExpr) {
			SizeofExpr se = (SizeofExpr)e;
			return getExpr(new CoreConstExpr(se.getSizeofType()));
		}
		else if (e instanceof VarExpr) {
			Symbol var = ((VarExpr)e).getSymbol();
			if (var.isFunction() || var.getType().isArray()) 
				return lvalue(e);
			else if (var instanceof EnumConstant) {
				EnumConstant econst = (EnumConstant)var;
				return getExpr(new CoreConstExpr(econst));
			}
		}
		else if (e instanceof FieldExpr) {
			Symbol field = ((FieldExpr)e).getField();
			if (field.getType().isArray())
				return lvalue(e);
		}
		else if (e instanceof UnaryExpr) {
			UnaryExpr ue = (UnaryExpr)e;
			CoreExpr cex = rvalue(ue.getExpr());
			return getExpr(new CoreUnaryExpr(ue.getIntOp(), cex));
		}
		else if (e instanceof BinaryExpr) {
			BinaryExpr be = (BinaryExpr)e;
			CoreExpr cl = rvalue(be.getLeft());
			CoreExpr cr = rvalue(be.getRight());
			return getExpr(CoreBinaryExpr.newExpr(be.getIntOp(), cl, cr));
		}
		else if (e instanceof FieldExpr ||
				 e instanceof DerefExpr ||
				 e instanceof ArrayExpr) {
			/* break */
		}
		else 
			assert false : "\n *** Invalid expr after simplification: " + e;

		CoreExpr loc = lvalue(e);
		assert loc != null : e;
		return getExpr(new CoreDerefExpr(loc, e.getType()));
	}
	
	
	/** Build a core expression representing the l-value 
	 *  of an AST expression */
	private static CoreExpr lvalue(Expression e) {		
		if (e instanceof CastExpr) {
			assert false;
		}
		else if (e instanceof VarExpr) {
			Symbol var = ((VarExpr)e).getSymbol();
			return getAddressOf(var);
		}
		else if (e instanceof DerefExpr) {
			DerefExpr de = (DerefExpr)e;
			assert de.getBase() != null;
			return getExpr(rvalue(de.getBase()));
		}
		else if (e instanceof FieldExpr) {
			FieldExpr fe = (FieldExpr)e;
			Symbol field = fe.getField();
			CoreExpr ce = fe.isDeref() ? 
					rvalue(fe.getBase()) : lvalue(fe.getBase());
			
			if (ce == null)
				return null;
			
			return getExpr(CoreFieldExpr.newExpr(ce, field));
		}
		else if (e instanceof ArrayExpr) {
			ArrayExpr ae = (ArrayExpr)e;
			CoreExpr csub = getExpr(rvalue(ae.getSub()));
			Expression arr = ae.getArray();
			Type tarr = arr.getType().unwrap();
			CoreExpr carr = null;
			if (tarr.isPointer()) 
				carr = getExpr(rvalue(ae.getArray()));
			else if (tarr.isArray())
				carr = getExpr(lvalue(ae.getArray()));
			
			assert carr != null;
			CoreExpr ee = 
				getExpr(CoreBinaryExpr.newExpr(ArithmOps.PLUS, carr, csub));
			return ee;
		}
		
		return null;
	}

	private static CoreExpr getExpr(CoreExpr newe) {
		if (newe instanceof CoreAddrExpr)
			return getAddressOf(((CoreAddrExpr)newe).getSymbol());
			
		CoreExpr olde = allExprs.get(newe);
		if (olde != null) 
			return olde;
		
		for (int i = 0; i < newe.numKids(); i++) {
			CoreExpr kid = newe.getKid(i);
			CoreExpr newkid = getExpr(kid);
			if (newkid != kid)
				newe.setKid(i, newkid);
		}
		
		olde = allExprs.put(newe,newe);
		assert olde == null;
		return newe;
	}	

	/** Build a binary expression */
	public static CoreExpr getBinaryExpr(int op, CoreExpr l, CoreExpr r) {
		CoreExpr fe = CoreBinaryExpr.newExpr(op, l, r);
		return getExpr(fe);
	}
	
	/** Build a const expression */
	public static CoreExpr getConstExpr(Integer n) {
		CoreExpr fe = new CoreConstExpr(n);
		return getExpr(fe);
	}
	
	/** Build a unary expression */
	public static CoreExpr getUnaryExpr(int op, CoreExpr e) {
		CoreExpr fe = new CoreUnaryExpr(op, e);
		return getExpr(fe);
	}
	
	/** Build a field expression */
	public static CoreExpr getFieldExpr(CoreExpr e, Symbol field) {
		CoreExpr fe = CoreFieldExpr.newExpr(e, field);
		return getExpr(fe);
	}
	
	/** Build a dereference expression */
	public static CoreDerefExpr getDerefExpr(CoreExpr e, Type type) {
		CoreDerefExpr de = new CoreDerefExpr(e, type);
		return (CoreDerefExpr)getExpr(de);
	}
	
	/** Build a core expression for a variable v of type t */
	public static CoreDerefExpr getVar(Symbol v) {
		assert !(v instanceof EnumConstant);
		return getDerefExpr(getAddressOf(v), v.getType());
	}
	
	/** Build a symbolic address expression */
	public static CoreAddrExpr getAddressOf(Symbol var) {
		CoreAddrExpr ce = varMap.get(var);
		if (ce == null) {
			ce = new CoreAddrExpr(var);
			varMap.put(var, ce);
		}
		return ce;
	}

	/** Build an allocation expression */
	public static CoreExpr getAlloc(CallExpr alloc) {
		CoreAllocExpr ce = allocMap.get(alloc);
		if (ce == null) {
			ce = new CoreAllocExpr(alloc);
			allocMap.put(alloc, ce);
		}
		return ce;
	}

	/** Substitute all occurrences of oldExpr with newExpr.
	 *  Returns null if no substitution has been performed. */
	public CoreExpr substitute(CoreExpr oldExpr, CoreExpr newExpr) {
		if (this == oldExpr) 
			return newExpr;
		
		int nkids = numKids();
		if (nkids == 0)
			return null;
		
		CoreExpr clone = null;
		for (int i = 0; i < nkids; i++) {
			CoreExpr kid = getKid(i).substitute(oldExpr, newExpr);
			if (kid == null) continue;
			if (clone == null)
			    clone = this.clone(); //Also sets earlier kids right
			clone.setKid(i, kid);
		}
		
		return clone != null ? getExpr(clone) : null;
	}

	public abstract Type getType();
	
	protected CoreExpr clone() { 
		return this;
	}
	
	public String toString() {
		return false ? toStringRaw() : toStringC();
	}
	
	/** Returns a string representation, in raw form. */
	abstract public String toStringRaw();

	/** Returns a string represenation, in a more readable form.
	 *  This representation is closer to the source C expression. */
	public String toStringC() {
		Pair<String,Boolean> p = toStringHelper();
		if (p.snd) p.fst = "&(" + p.fst + ")";
		return p.fst;		
	}
	
	Pair<String,Boolean> toStringHelper() {
		return new Pair<String,Boolean>(toStringRaw(), false);
	}

	/** Visitor accept method. */
	abstract public Object accept(CoreExprVisitor visitor, Object obj);

	/** Returns the number of children expressions */
	public int numKids() {
		return 0;
	}
	
	/** Get child expression i */
	public CoreExpr getKid(int i) {
		assert false;
		return null;
	}

	/** Set child expression i to e */
	public void setKid(int i, CoreExpr e) { }

	/** Return all of the memory accesses in this expression */
	public List<CoreDerefExpr> getMemExpr() {
		List<CoreDerefExpr> list = new ArrayList<CoreDerefExpr>();
		getMemExpr(list);
		return list;
	}
	
	private void getMemExpr(List<CoreDerefExpr> list) {
		if (isDeref())
			list.add((CoreDerefExpr)this);
		
		for (int i = 0; i < this.numKids(); i++)
			this.getKid(i).getMemExpr(list);
	}
}
