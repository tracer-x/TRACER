package crystal.emitc;

import crystal.ast.*;
import crystal.general.*;

import java.util.*;
import java.io.*;

/** Print all declaration in a symbol table. */
public class SymtabPrinter implements TypeVisitor<Object,Boolean> {

	static SymtabPrinter v = new SymtabPrinter();
	
	static Map<Symbol,Set<Symbol>> deps;
	static HashSymtab  scope;
	static Set<Symbol> tset, fset;
	
	static void initialize(HashSymtab s) {
		scope = s;
		deps = new HashMap<Symbol,Set<Symbol>>(); 
	}
	
	static public void getDeps(Symbol sym, boolean putdep) {
		tset = new HashSet<Symbol>();
		fset = new HashSet<Symbol>();
		
		Boolean o = sym.getKind() != Flags.TYPE 
					? Boolean.TRUE : Boolean.FALSE; 

		Type type = sym.getType();
		if (type != null) type.accept(v, o);

		Initializer init = sym.getInitializer(); 
		if (init != null) v.accept(init, o);
		
		tset.addAll(fset);
		deps.put(sym, tset);
	}
	
	private void accept(Initializer i, Boolean o) {
		if (i instanceof InitExpr) 
			accept(((InitExpr)i).getExpr(), o);
		else 
			for (InitElement il : ((InitList)i).getElems()) 
				accept(il.getValue(), o);
	}

	private void accept(Expression e, Boolean o) {
		if (e == null) return;
		
		if (e instanceof VarExpr) {
			Symbol sym = ((VarExpr)e).getSymbol();
			if (scope.lookupSymbol(sym) != sym)
				return;
			
			if (sym instanceof EnumConstant)
				e.getType().accept(this, o);
			else {
				tset.add(sym);
			}
		}
		
		for (int i = 0; i < e.numTypeKids(); i++) 
			e.getTypeKid(i).accept(this, o);

		for (int i = 0; i < e.numExprKids(); i++)
			accept(e.getExprKid(i), o);

		for (int i = 0; i < e.numStatKids(); i++)
			accept(e.getStatKid(i), o);
	}
	
	private void accept(Statement s, Boolean o) {
		if (s == null) return;
		
		for (int i = 0; i < s.numExprKids(); i++)
			accept(s.getExprKid(i), o);

		for (int i = 0; i < s.numStatKids(); i++)
			accept(s.getStatKid(i), o);
	}

	public Object visit(PrimitiveType t, Boolean o) {
		return null;
	}
	
	public Object visit(ArrayType t, Boolean o) {
		t.getElementType().accept(this, o);
		
		Expression e = t.getExpression();
		if (e != null) accept(e, o);

		return null;
	}
	
	/* Record struct symbols that occur inside params. */
	private static Stack<FunType> funStack = new Stack<FunType>();
	private static Set<Symbol> structsInParams = new HashSet<Symbol>();
	
	public Object visit(FunType t, Boolean o) {
		t.getReturnType().accept(this, o);
		
		funStack.push(t);
		for (int i = 0; i < t.numArgs(); ++i)
			t.getArg(i).accept(this, Boolean.TRUE);
		funStack.pop();
		return null;
	}
	
	public Object visit(PointerType t, Boolean o) {
		t.getTargetType().accept(this, Boolean.FALSE);
		return null;
	}
	
	public Object visit(AggregateType t, Boolean o) {
		for (int f = 0; f < t.numFields(); ++f) {
			Symbol field = t.getField(f);
			
			if (t.isEnum()) {
				Expression e = ((EnumConstant)field).getValue();
				if (e != null) accept(e, o);
			}
			else {
				field.getType().accept(this, o);
			}
		}
		return null;
	}
	
	public Object visit(AggrNameType t, Boolean o) {
		Set<Symbol> set = o ? tset : fset;
		Symbol sym = t.getTypeSymbol();
		
		if (set.contains(sym) || scope.lookupSymbol(sym) != sym)
			return null;

		if (!funStack.isEmpty())
			structsInParams.add(sym);
		
		if (o == Boolean.TRUE) {
			set.add(sym);

			Type st = t.getStructType();
			if (st != null) 
				st.accept(this, Boolean.TRUE);
		}
		
		return null;
	}

	public Object visit(TypedefType t, Boolean o) {
		Set<Symbol> set = o ? tset : fset;
		Symbol sym = t.getTypeSymbol();

		if (set.contains(sym) || scope.lookupSymbol(sym) != sym)
			return null;
		
		set.add(sym);

		if (o == Boolean.TRUE)
			t.getBaseType().accept(this, Boolean.TRUE);
		
		return null;
	}

	static Set<Symbol> visited;
	static Set<Symbol> traversed;
	static List<Symbol> list;
	
	private static List<Symbol> topSort() {
		list = new ArrayList<Symbol>();
		visited = new HashSet<Symbol>();
		traversed = new HashSet<Symbol>();

		for (Symbol sym : deps.keySet()) 
			if (!visited.contains(sym))
				DFS(sym);
		
		return list;
	}
	
	private static void DFS(Symbol sym) {
		visited.add(sym);
	
		Set<Symbol> set = deps.get(sym);
		if (set != null)
			for (Symbol kid : set) 
				if (!visited.contains(kid))
					DFS(kid);

		if (!(sym instanceof EnumConstant))
			list.add(sym);
	}
	
	public static void printGlobal(FileSymtab filetab, 
			PrintStream out, String ind) 
	{
		printSymtab(Symtab.getGlobalScope(), filetab, out, ind);
	}
	
	public static void printSymtab(HashSymtab symtab, 
			PrintStream out, String ind) 
	{
		printSymtab(symtab, null, out, ind);
	}
	
	private static void printSymtab(HashSymtab symtab, 
			FileSymtab filetab,
			PrintStream out, String ind) 
	{
		if (symtab == null || symtab.isEmpty())
			return; /* Nothing to print */
	
		Set<Symbol> needed = null;
		if (symtab == Symtab.getGlobalScope() && 
			Options.PURGE_DECLARATIONS && !Options.MERGE_FILES) {
			needed = PurgeDeclarations.compute(filetab);
		}
		
		/* Collect symbol declaration dependences. */
		initialize(symtab);

		for (Symbol sym: symtab.getVFTSymbols()) 
			getDeps(sym, sym.getKind() == Flags.TYPE);
	
		for (Symbol sym: symtab.getSUESymbols())
			getDeps(sym, true);
				
		/* Declare structs that appear in function params. */
		for (Symbol sym : structsInParams) {
			if (needed != null && !needed.contains(sym))
				continue;

			out.print(Flags.kindToString(sym.getKind()) + " ");
			out.println(sym.getName() + ";");
		}
		structsInParams.clear();

		/* Print typedefs, structs in topological order. */
		List<Symbol> topsort = topSort();
		for (Symbol sym : topsort) {
			if (sym.getKind() == Flags.VAR ||
				sym.getKind() == Flags.FUN)
					continue;
			
			if (needed != null && !needed.contains(sym))
				continue;

			/* don't print globals if they are shadowed */
			if (filetab != null && filetab.lookupSymbol(sym) != null)
				continue;

			if (ind != null) 
				out.print(ind);

			if (sym.getKind() == Flags.TYPE)
				out.print("typedef ");
			
			Type type = sym.getType();
			if (type == null) continue;
			
			out.print(DeclPrinter.toString(sym.getType(), sym.getName(), ind));
			out.println(";");
		}
			
		if (symtab.getParent() == null) out.println();

		StringBuffer vars = null;
		StringBuffer funs = null;
		
		/* Print variables and functions in topological order. */
		for (Symbol sym: topsort) {
			if (sym.getKind() != Flags.VAR &&
				sym.getKind() != Flags.FUN)
				continue;
			
			if (needed != null && !needed.contains(sym))
				continue;
			
			if (sym.isFunction() && !sym.isDeclared())
				continue;
			
			if (filetab != null && filetab.lookupSymbol(sym) != null)
				continue;
			
			StringBuffer sb = sym.isFunction() ? funs : vars;
			if (sb == null) {
				sb = new StringBuffer();
				if (sym.isFunction()) funs = sb; else vars = sb;
			}
			if (ind != null) sb.append(ind);
				
			if (sym.isStatic()) {
				sb.append("static ");
			}
			else if (!sym.isCommon() || 
					(sym.isInline() && sym.isExtern())) {
				sb.append("extern ");
			}

			if (sym.isInline()) 
				sb.append("inline ");
				
			String name = sym.getIdName();
			sb.append(DeclPrinter.toString(sym.getType(), name, ind));
			
			if (sym.isFunction()) {
				Function fun = (Function)sym;
				String asm = fun.getAsm();
				if (asm != null) sb.append(' ').append(asm);
			}
			
			Initializer init = sym.getInitializer();
			if (init != null && 
				(symtab.getDepth() > 0 
						|| sym.getInitFile() == filetab
						|| Options.MERGE_FILES)) {
				sb.append(" = ").append(init);
				initialized.add(sym);
			}
			
			sb.append(";\n");
		}
		
		if (funs != null) out.println(funs);
		if (vars != null) out.print(vars);
	}
	
	private static Set<Symbol> initialized = new HashSet<Symbol>();
	
	public static void checkInit() {
		Set<Symbol> iset = Symbol.getInitSymbols();
		if (!(initialized.equals(iset)))
			throw new RuntimeException("Init errors when writing files out.");
	}	
}
