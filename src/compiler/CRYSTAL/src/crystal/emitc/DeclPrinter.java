package crystal.emitc;

import crystal.ast.*;
import crystal.general.*;

public class DeclPrinter implements TypeVisitor<StringBuffer, StringBuffer> {
	
	static String indent;
	static DeclPrinter dp = new DeclPrinter();
	
	/** Builds a string representation of the declaration "<type> <id>;". */
	public static String toString(Type t, String id, String ind) {
		indent = ind;
		StringBuffer buf = new StringBuffer();
		if (!starBeforeId(t)) buf.append(" ");
		buf.append(id);
		return t.accept(dp, buf).toString();
	}

	private static boolean starBeforeId(Type t) {
		if (t.isPointer()) {
			PointerType pt = (PointerType)t;
			return !pt.getTargetType().isFunction();
		}
		
		if (t.isFunction()) {
			FunType ftype = (FunType)t;
			return starBeforeId(ftype.getReturnType());
		}
		
		return false;
	}

	/** Builds a string representation of the declaration "<type>;". */
	public static String toString(Type t, String ind) {
		indent = ind;
		StringBuffer buf = new StringBuffer("");
		return t.accept(dp, buf).toString();
	}
		
	public StringBuffer visit(ArrayType t, StringBuffer buf) {
		buf.append("[");
		Expression e = t.getExpression();
		String size = (e == null) ? "" : ASTPrinter.toString(e, false);
		buf.append(size);
		buf.append("]");

		return t.getElementType().accept(this, buf);
	}
	
	public StringBuffer visit(PrimitiveType t, StringBuffer buf) {
		String str = t == Type.VarArgs ? "..." : t.getName();
		return buf.insert(0, str);
	}
	
	public StringBuffer visit(FunType t, StringBuffer buf) {
		buf.append("(");
		for (int k = 0; k < t.numArgs(); k++) {
			buf.append(toString(t.getArg(k), indent));
			if (k != t.numArgs() - 1)
				buf.append(", ");
		}
		buf.append(")");

		/* wrap the return type "around" */
		return t.getReturnType().accept(this, buf);
	}
	
	public StringBuffer visit(PointerType t, StringBuffer buf) {
		Type tgt = t.getTargetType(); 
		
		/* parenthesize if dest is array or function */
		if (tgt.isArray() || tgt.isFunction()) {
			buf.insert(0, " (*");
			buf.append(")");
		} else {
			buf.insert(0, tgt.isPointer() ? "*" : " *");
		}

		return tgt.accept(this, buf);
	}
	
	public StringBuffer visit(AggregateType t, StringBuffer buf) {
		StringBuffer ours = new StringBuffer();
		ours.append(t.kind());
		if (buf != null) ours.append(buf);
		ours.append(" {");

		if (t.isEnum()) 
			for (int f = 0; f < t.numFields(); ++f) {
				EnumConstant field = (EnumConstant)t.getField(f);
				if (indent != null) ours.append(indent);
				ours.append(field.getIdName());
				Expression val = field.getValue();
				if (val != null)
					ours.append(" = " + ASTPrinter.toString(val, false));
				if (f != t.numFields() - 1)
					ours.append(", ");
			}
		else {
			if (indent != null) ours.append("\n");
			for (int f = 0; f < t.numFields(); ++f) {
				Symbol field = t.getField(f);
				if (indent != null)
					ours.append(indent).append("    ");
				ours.append(toString(field.getType(),field.getIdName(),indent));
				ours.append("; ");
				if (indent != null) ours.append("\n");
			}
			if (indent != null) ours.append(indent);
		}
		
		ours.append("}");
		return ours;
	}
	
	public StringBuffer visit(AggrNameType t, StringBuffer buf) {
		String str = t.getTypeSymbol().getName();
		String kind = Flags.kindToString(t.getTypeSymbol().getKind());
		return buf.insert(0, kind + " " + str);
	}

	public StringBuffer visit(TypedefType t, StringBuffer buf) {
		String str = t.getTypeSymbol().getName();
		return buf.insert(0, str);
	}
}
