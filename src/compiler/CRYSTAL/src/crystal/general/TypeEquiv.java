package crystal.general;

import java.util.*;

import crystal.util.*;

/** Checking whether two types are equivalent, either by name
 *  or structurally. 
 *  Returns an order (LESS, EQUAL, GREATER, NONE) indicating
 *  which of the types contains more information. For instance:
 *     int foo() <= int foo(int, float)
 *  Returns INCOMPATIBLE if the types are not compatible. */
public class TypeEquiv implements TypeVisitor<Order,Type> {
	static boolean byname = true;
	
	private static HashMap<Type, Type> map;	
	private static TypeVisitor<Order,Type> tv = new TypeEquiv();

	public static Order cmpByName(Type t1, Type t2) {
		byname = true;
		return compare(t1, t2);
	}
	
	static Pair<Type,Type> mismatch;
	
	public static Order cmpByStruct(Type t1, Type t2) {
		byname = false ;
		map = new HashMap<Type,Type>();
		return compare(t1, t2);
	}

	private static Order compare(Type t1, Type t2) {
		if (t1 == null && t2 == null)
			return Order.EQUAL;
		else if (t1 == null && t2 != null)
			return Order.LESS;
		else if (t1 != null && t2 == null)
			return Order.GREATER;
		
		t1 = t1.skipTypedefs();
		t2 = t2.skipTypedefs();
		return t1.accept(tv, t2);
	}

	public Order visit(PrimitiveType t, Type obj) {
		if (t == obj) return Order.EQUAL;
		
		if (!(obj instanceof PrimitiveType))
			return Order.INCOMPATIBLE;
		PrimitiveType o = (PrimitiveType)obj; 

		return ( t.getName().equals(o.getName()) ?
				 Order.EQUAL : Order.INCOMPATIBLE );
	}
	
	public Order visit(FunType t, Type obj) {
		if (t == obj) return Order.EQUAL;

		while (obj instanceof PointerType) {
			obj = ((PointerType)obj).getTargetType();
			obj = obj.skipTypedefs();
		}
		
		if (!(obj instanceof FunType))
			return Order.INCOMPATIBLE;
		FunType o = (FunType)obj;
		
		Order retval, ord;
		Type tret = t.getReturnType().skipTypedefs();
		Type oret = o.getReturnType().skipTypedefs();
		ord = tret.accept(this, oret);
		if (ord == Order.INCOMPATIBLE) 
			return ord;
		retval = ord;
		
		boolean tvoid = t.hasVoidArgs();
		boolean targs = t.numArgs() != 0;
		boolean ovoid = o.hasVoidArgs();
		boolean oargs = o.numArgs() != 0;
		
		if (!tvoid && !ovoid) {
			if (!targs && !oargs) 
				return retval;
			else if (targs && !oargs)
				return retval.merge(Order.GREATER);
			else if (!targs && oargs)
				return retval.merge(Order.LESS);
			
			if (t.numArgs() != o.numArgs())
				return Order.INCOMPATIBLE;

			for (int i = 0; i < t.numArgs(); i++) {
				Type targ = t.getArg(i).skipTypedefs();
				Type oarg = o.getArg(i).skipTypedefs();
				ord = targ.accept(this, oarg);
				if (ord == Order.INCOMPATIBLE) 
					return ord;
				retval = retval.merge(ord);
			}
			return retval;
		}
		else if (tvoid && ovoid)
			return retval;
		else if (tvoid && !oargs)
			return retval.merge(Order.GREATER);
		else if (!targs && ovoid)
			return retval.merge(Order.LESS);
		else /* ((tvoid && oargs) || (targs && ovoid)) */
			return Order.INCOMPATIBLE;
	}

	public Order visit(ArrayType t, Type obj) {		
		if (t == obj) return Order.EQUAL;

		if (!(obj instanceof ArrayType))
			return Order.INCOMPATIBLE;

		ArrayType o = (ArrayType)obj;
		boolean tsz = t.getExpression() == null;
		boolean osz = o.getExpression() == null;
		
		Order ord = Order.EQUAL;
		if (tsz && !osz) ord = Order.LESS;
		else if (!tsz && osz) ord = Order.GREATER;
		
		Type telem = t.getElementType().skipTypedefs(); 
		Type oelem = o.getElementType().skipTypedefs();
		Order res = ord.merge(telem.accept(this, oelem));
		return res;
	}

	public Order visit(PointerType t, Type obj) {
		if (t == obj) return Order.EQUAL;
		
		if (!(obj instanceof PointerType)) {
			if (obj instanceof FunType)
				return visit((FunType)obj, t);
			return Order.INCOMPATIBLE;
		}
		Type o = obj;

		Type ttgt = t.getTargetType().skipTypedefs(); 
		Type otgt = o.getTargetType().skipTypedefs();
		return ttgt.accept(this, otgt);
	}

	public Order visit(AggregateType t, Type obj) {
		if (t == obj) return Order.EQUAL;

		if (!(obj instanceof AggregateType))
			return Order.INCOMPATIBLE;		
		AggregateType o = (AggregateType)obj;

		Type oo = map.get(t);
		if (oo == null) 
			map.put(t, o);
		else if (oo == o)
			return Order.EQUAL; 
		else
			return Order.INCOMPATIBLE;				
			
		if (!(t.sameKind(o)))
			return Order.INCOMPATIBLE;
			
		Order retval = Order.EQUAL, ord;
		
		if (t.numFields() != o.numFields())
			return Order.INCOMPATIBLE;
		
		for(int i = 0; i < t.numFields(); i++) {
			Symbol tfld = t.getField(i);
			Symbol ofld = o.getField(i);
			
			/* Unless both fields are anonymous, names count. */
			if ((byname || !tfld.isAnonymous() || !ofld.isAnonymous()) 
				&& !tfld.getName().equals(ofld.getName()))
				return Order.INCOMPATIBLE;

			Type tfield = t.getField(i).getType().skipTypedefs();
			Type ofield = o.getField(i).getType().skipTypedefs();
			ord = tfield.accept(this, ofield);
			if (ord == Order.INCOMPATIBLE) 
				return ord;
			else retval = retval.merge(ord);
		}
		
		return retval;
	}

	public Order visit(AggrNameType t, Type obj) {
		if (t == obj) return Order.EQUAL;

		AggrNameType o = null;
		if (obj instanceof AggrNameType) { 
			o = (AggrNameType)obj;
			obj = o.getStructType();
		}
		else if (obj != null)
			return Order.INCOMPATIBLE;
		
		if (byname) {
			if (o != null && t.getTypeSymbol() == o.getTypeSymbol())
				return Order.EQUAL;
			else
				return Order.INCOMPATIBLE;
		}
		
		AggregateType tst = t.getStructType();
		
		/* incomplete struct */
		if (tst == null && obj == null) 
			return Order.EQUAL;
		else if (tst == null && obj != null)
			return Order.LESS;
		else if (tst != null && obj == null)
			return Order.GREATER;
			
		Order ord = tst.accept(this, obj);
		return check(ord, t, o);
	}

	private Order check(Order ord, Type t1, Type t2) {
		if (ord == Order.INCOMPATIBLE && mismatch == null)
			mismatch = new Pair<Type,Type>(t1, t2);
		return ord;
	}

	public Order visit(TypedefType t, Type obj) {
		/* typedefs have been skipped */
		assert false;
		return Order.INCOMPATIBLE;
	}
}