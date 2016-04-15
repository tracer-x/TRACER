package crystal.ast;

import java.math.*;
import java.util.*;

import crystal.general.*;

public class ExprType implements 
	ExprVisitor<Type, Object> 
{
	private static final ExprType typer = new ExprType();
	
	/** Compute the type of an expression. */
	public static Type typeOf(Expression e) {
		return e.accept(typer, null);
	}

	public Type visit(ArithmExpr e, Object o) {
		Type t1 = typeOf(e.left).unwrap();
		Type t2 = typeOf(e.right).unwrap();
		
		if (t1.isArray()) 
			t1 = new PointerType(t1.getTargetType());

		if (t2.isArray()) 
			t2 = new PointerType(t2.getTargetType());
		
		boolean p1 = t1.isPointer();
		boolean p2 = t2.isPointer();
		
		if (!p1 && !p2)
			/* TODO: take into account type coercions */
			return t1;
		
		switch (e.getOp()) {
		case Plus: 
			if (!p2)      return t1;
			else if (!p1) return t2;
			break;
				
		case Minus:
			if (p1 && p2) return Type.SignedInt;
			else if (p1)  return t1;
			break;
			
		default: break;
		}

		throw new RuntimeException("invalid pointer arithmetic");
	}

	public Type visit(LogicalExpr e, Object o) {
		return Type.SignedInt;
	}

	public Type visit(CompareExpr e, Object o) {
		return Type.SignedInt;
	}

	public Type visit(BitwiseExpr e, Object o) {
		return typeOf(e.left);
	}

	public Type visit(UnaryArithmExpr e, Object o) {
		return typeOf(e.e);
	}

	public Type visit(NegationExpr e, Object o) {
		return Type.SignedInt;
	}

	public Type visit(UnaryBitwiseExpr e, Object o) {
		return typeOf(e.e);
	}

	public Type visit(AddressofExpr e, Object o) {
		Type t = typeOf(e.getBase());
		return new PointerType(t);
	}
	
	public Type visit(AssignArithmExpr e, Object o) {
		if (e.e1 == null) 
			return typeOf(e.e2);
		return typeOf(e.e1);
	}

	public Type visit(AssignBitwiseExpr e, Object o) {
		return typeOf(e.e1);
	}

	public Type visit(AssignExpr e, Object o) {
		return typeOf(e.e2);
	}

	public Type visit(AutoIncExpr e, Object o) {
		return typeOf(e.getExpr());
	}

	public Type visit(ArrayExpr e, Object o) {
		Type t = typeOf(e.getArray());
		Type tgt = t.unwrap().getTargetType();
		assert tgt != null : "invalid array access: " + e;
		return tgt;
	}
	
	public Type visit(CastExpr e, Object o) {
		return e.getCastType();
	}

	public Type visit(DerefExpr e, Object o) {
		/* This may be an array or a pointer type. */
		Type t = typeOf(e.getBase());
		if (t == null) return null;
		
		t = t.unwrap();
		
		if (t instanceof PointerType) {
			PointerType pt = (PointerType)t;
			Type bt = pt.getTargetType();
			
			/* dereferencing function pointers is a no-op. */
			return (bt instanceof FunType) ? pt : bt;
		}
		
		if (t instanceof ArrayType)
			return ((ArrayType)t).getElementType();

		assert false: 
			"\n\tinvalid type: [" + t + 
			"] for the expr dereferenced in: [" + e + "]";
		return null;
	}
	
	public Type visit(FieldExpr e, Object o) {
		return e.f.getType();
	}

	public Type visit(NumberExpr e, Object o) {
		Number n = e.getNumber();
		if (n instanceof Byte)
			return Type.SignedShort;
		if (n instanceof Integer)
			return Type.SignedInt;
		else if (n instanceof Long)
			return Type.SignedLongLong;
		else if (n instanceof Float) 
			return Type.Float;
		else if (n instanceof Double)
			return Type.Double;
		else if (n instanceof BigInteger)
			return Type.UnsignedLongLong;
		
		assert false : 
			"unrecognized Number";
		return null;
	}
	
	public Type visit(SizeofExpr e, Object o) {
		return Type.SignedInt;
	}

	public Type visit(StringExpr e, Object o) {
		return Type.CharPtr;
	}

	public Type visit(VarExpr e, Object o) {
		if (e.sym.isFunction())
			return new PointerType(e.sym.getType());
		else
			return e.sym.getType();
	}

	public Type visit(CallExpr e, Object o) {
		if (Builtins.isVaArg(e.fun)) {
			return ((SizeofExpr)e.args[1]).getSizeofType();
		}
		
		if (e.cast != null)
			return e.cast;
		
		Type t = ExprType.typeOf(e.fun);
		
		t = t.unwrap();
		while (t instanceof PointerType)
			t = ((PointerType)t).getTargetType().unwrap();
		
		return ((FunType)t).getReturnType();
	}

	public Type visit(CommaExpr e, Object o) {
		Expression[] exprs = e.es;
		return typeOf(exprs[exprs.length-1]);
	}

	public Type visit(ConditionalExpr e, Object o) {
		if (e.expr1.isZero())
			return typeOf(e.expr2);
		else
			return typeOf(e.expr1);
	}

	public Type visit(StatExpr e, Object o) {
		Statement s = e.stat;
		while(s instanceof BlockStat) {
			List<Statement> v = ((BlockStat)s).body;
			s = v.get(v.size()-1);
		}
		
		if (s instanceof ExprStat)
			return typeOf(((ExprStat)s).e);
		else
			return Type.Void;
	}
}
