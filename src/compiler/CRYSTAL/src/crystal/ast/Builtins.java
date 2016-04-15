package crystal.ast;

import java.util.*;

import crystal.general.*;
import crystal.emitc.*;

/** This class incorporates the logic about gcc's __builtin_ functions. */
public class Builtins {
	/** The builtin function names and their types, in abbreviated text form */
	private static Map<String,String> builtins = new HashMap<String,String>();
	
	/** Standard C library builtin function names and their types. */
	private static Map<String,String> libbi = new HashMap<String,String>();
	
	public static Symbol get(String name) {
		String fullname = name;
		String textType = libbi.get(name);
			
		if (textType == null) {
			textType = builtins.get(name);
			fullname = "__builtin_" + name;
		}
		if (textType == null) return null;
			
		Symtab global = Symtab.getGlobalScope();
		Symbol sym = global.lookupSymbol(Flags.FUN, fullname);
		if (sym != null) return sym;
		
		FunType type = getFunType(textType);
		sym = Function.builtinFun(fullname, type);
		global.insertSymLocal(sym);
		return sym;
	}
	
	private static Symbol symbolOf(Expression e) {
		return e instanceof VarExpr ? ((VarExpr)e).getSymbol() : null;
	}

	public static boolean isVaArg(Expression e) {
		Symbol sym = symbolOf(e);
		return sym != null && sym.getName().equals("__builtin_va_arg");
	}

	public static StringBuffer PrintVaArg(Expression fun, Expression args[]) {
		assert isVaArg(fun);
		Symbol sym = symbolOf(fun);
		
		StringBuffer sb = new StringBuffer();
		sb.append(sym.getName());
		sb.append("(");
		sb.append(ASTPrinter.toString(args[0], false));
		sb.append(",");
		sb.append(DeclPrinter.toString(((SizeofExpr)args[1]).type, ""));
		sb.append(")");
		return sb;
	}

	private static FunType getFunType(String name) {
		String[] args = name.split(" ");
		Type rettype = getType(args[args.length - 1]);
		FunType ft = new FunType(rettype);
		for (int i = 0; i < args.length - 1; i++)
			ft.addArg(getType(args[i]));
		return ft;
	}

	private static Type getType(String s) {
		Type t = null;
		switch (s.charAt(0)) {
		case 'P' : 
			t = new PointerType(getType(s.substring(1)));
			break;
			
		case 'C' :
			/* TODO: add const qualifier */
			t = getType(s.substring(1));
			break;
			
		default:
			if (s.equals("I"))        t = Type.SignedInt;
			else if (s.equals("UI"))  t = Type.UnsignedInt;
			else if (s.equals("L"))   t = Type.SignedLong;
			else if (s.equals("UL"))  t = Type.UnsignedLong;
			else if (s.equals("LL"))  t = Type.SignedLongLong;
			else if (s.equals("ULL")) t = Type.UnsignedLongLong;
			else if (s.equals("F"))   t = Type.Float;
			else if (s.equals("V"))   t = Type.Void;
			else if (s.equals("H"))   t = Type.Char;
			else if (s.equals("D"))   t = Type.Double;
			else if (s.equals("LD"))  t = Type.LongDouble;
			else if (s.equals("...")) t = Type.VarArgs;
			else throw new RuntimeException("Unrecognized type: " + s);
		}
		
		return t;
	}

	static {
		builtins.put("va_arg",          "V V");
		builtins.put("va_start",        "V V");
		builtins.put("va_end",          "V V");
		builtins.put("offsetof",        "V V");
		
		/* use void arg types because these are polymorphic */
		builtins.put("types_compatible_p", "V I");
		builtins.put("constant_p",         "V I");

		builtins.put("return_address",  "UI PV");
		builtins.put("frame_address",   "UI PV");
		builtins.put("expect",          "L L L");
		builtins.put("prefetch",        "PCV ... V");
		builtins.put("huge_val",        "V D");
		builtins.put("huge_valf",       "V F");
		builtins.put("huge_vall",       "V LD");
		builtins.put("inf",             "V D");
		builtins.put("inff",            "V F");
		builtins.put("infl",            "V LD");
		builtins.put("nan",             "PCH D");
		builtins.put("nanf",            "PCH F");
		builtins.put("nanl",            "PCH LD");
		builtins.put("nans",            "PCH D");
		builtins.put("nansf",           "PCH F");
		builtins.put("nansl",           "PCH LD");
		builtins.put("ffs",             "UI I");
		builtins.put("clz",             "UI I");
		builtins.put("ctz",             "UI I");
		builtins.put("popcount",        "UI I");
		builtins.put("parity",          "UI I");
		builtins.put("ffsl",            "UL I");
		builtins.put("clzl",            "UL I");
		builtins.put("ctzl",            "UL I");
		builtins.put("popcountl",       "UL I");
		builtins.put("parityl",         "UL I");
		builtins.put("ffsll",           "ULL I");
		builtins.put("clzll",           "ULL I");
		builtins.put("ctzll",           "ULL I");
		builtins.put("popcountll",      "ULL I");
		builtins.put("parityll",        "ULL I");
		builtins.put("powi",            "D I D");
		builtins.put("powif",           "F I F");
		builtins.put("powil",           "LD I LD");
		builtins.put("bswap32",         "I I");
		builtins.put("bswap64",         "LL LL");

		libbi.put("alloca", "UI PV");
		libbi.put("strcpy", "PH PCH PH");
		libbi.put("memcpy", "PV PCV UI PV");
	}
}
