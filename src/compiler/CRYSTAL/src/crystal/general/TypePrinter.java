package crystal.general;

import java.io.*;
import java.util.*;

public class TypePrinter implements TypeVisitor<String,String> {
	
	private static PrintStream ps;
	private static TypePrinter tp = new TypePrinter();
	private static Set<Type> tset = new HashSet<Type>();	
	
	public static void printFull(Type t, PrintStream s) {
		ps = s;
		System.out.println();
		t.accept(tp, "");
	}
		
	public String visit(ArrayType t, String ind) {
		ps.println(ind + "array");
		t.getElementType().accept(this, ind + Options.INDENT);
		return null;
	}
	
	public String visit(PrimitiveType t, String ind) {
		ps.println(ind + t.getName());
		return null;
	}
	
	public String visit(FunType t, String ind) {
		ps.println(ind + "(");
		for (int i = 0; i < t.numArgs(); i++)
			t.getArg(i).accept(this, ind + Options.INDENT);
		ps.println(") ->");
		t.getReturnType().accept(this, ind + Options.INDENT);
		return null;
	}
	
	public String visit(PointerType t, String ind) {
		if (tset.contains(t)) {
			ps.println(ind + "...");
			return null;
		} else 
			tset.add(t);
		
		ps.println(ind + "ptr");
		t.getTargetType().accept(this, ind + Options.INDENT);
		return null;
		
	}
	
	public String visit(AggregateType t, String ind) {
		if (tset.contains(t)) {
			ps.println(ind + "...");
			return null;
		} else 
			tset.add(t);
		
		for (int i = 0; i < t.numFields(); i++) {
			Symbol sym = t.getField(i);
			ps.println(ind + sym.getName() + " : ");
			sym.getType().accept(this, ind + Options.INDENT);
		}
		return null;
	}
	
	public String visit(AggrNameType t, String ind) {
		ps.println(ind + "struct name " + t.getTypeSymbol().getIdName());
		Type st = t.getTypeSymbol().getType(); 
		if (st == null)
			ps.println(ind + Options.INDENT + "[null]");
		else
			st.accept(this, ind + Options.INDENT);
		return null;
	}
	
	public String visit(TypedefType t, String ind) {
		ps.println(ind + "typedef " + t.getTypeSymbol().getIdName());
		t.getTypeSymbol().getType().accept(this, ind + Options.INDENT);
		return null;
	}
}
