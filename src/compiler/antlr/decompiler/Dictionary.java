package decompiler;

import java.util.*;
import compiler.*;

public class Dictionary {

	String str;
	StringTokenizer t;
	ClauseFactory fac;

	public Dictionary(ClauseFactory fac) {
		if(fac == null)
			FATAL.error("invalid function provided for dictionary");

		this.fac = fac;
	}

	private String token() {
		if(!t.hasMoreTokens())
			FATAL.error("dictionary ran out of tokens while translating " + str);
		return t.nextToken();
	}

	private boolean moreTokens() {
		return t.hasMoreTokens();
	}

	private boolean match(String s1, String s2) {
		return (s1.matches(s2));
	}

	public String translate(String str) {
		this.str = str;
		t = new StringTokenizer(str, ",()");

		return translate();
	}

	public String translateCondition(String str) {
		this.str = str;
		t = new StringTokenizer(str, ",()");

		String s = translate();
		while(moreTokens())
			s += " && " + translate();

		return s;
	}

	public String translate() {
		String s = token();
		if(match(s, "assign")) {
			String l = translate();
			String r = translate();

			return l + " = " + r;
		}
		else if(match(s, "ref")) {
			String arr = translate();
			String idx = translate();

			if(match(arr, "H")) {
				if(idx.contains("->"))
					return idx;
				else
					return "*" + "(" + idx + ")";
			}
			else
				return arr + "[" + idx + "]";
		}
		else if(match(s, "pos")) {
			String idx = translate();

			return "->" + idx;
		}
		else if(match(s, "addref")) {
			String dummy1 = translate();
			String dummy2 = translate();

			return "";
		}
		else if(match(s, "plus")) {
			String arg1 = translate();
			String arg2 = translate();

			if(!arg2.startsWith("->"))
				return "(" + arg1 + " + " + arg2 + ")";
			else
				return "(" + arg1 + arg2 + ")";
		}
		else if(match(s, "minus")) {
			String arg1 = translate();
			String arg2 = translate();

			return "(" + arg1 + " - " + arg2 + ")";
		}
		else if(match(s, "mult")) {
			String arg1 = translate();
			String arg2 = translate();

			return "(" + arg1 + " * " + arg2 + ")";
		}
		else if(match(s, "div")) {
			String arg1 = translate();
			String arg2 = translate();

			return "(" + arg1 + " / " + arg2 + ")";
		}
		else if(match(s, "arrassign")) {
			String dummy = translate();
			String upd = translate();

			return upd;
		}
		else if(match(s, "upd")) {
			String arr = translate();
			String idx = translate();
			String val = translate();

			if(match(arr, "H"))
				return "*" + "(" + idx + ")" + " = " + val;
			else
				return arr + "[" + idx + "]" + " = " + val;
		}
		else if(match(s, "gt")) {
			String arg1 = translate();
			String arg2 = translate();

			return "(" + arg1 + " > " + arg2 + ")";
		}
		else if(match(s, "eq")) {
			String arg1 = translate();
			String arg2 = translate();

			return "(" + arg1 + " == " + arg2 + ")";
		}
		else if(match(s, "geq")) {
			String arg1 = translate();
			String arg2 = translate();

			return "(" + arg1 + " >= " + arg2 + ")";
		}
		else if(match(s, "dis")) {
			int arity = Integer.parseInt(translate());
			String dis = "(" + translate();
			for (int i = 1; i < arity; i++)
				dis += " || " + translate();

			return dis + ")";
		}
		else if(match(s, "con")) {
			int arity = Integer.parseInt(translate());
			String con = "(" + translate();
			for (int i = 1; i < arity; i++)
				con += " && " + translate();

			return con + ")";
		}
		else if(match(s, "_")) {
			return "0";
		}
		else if(match(s, "SRV[0-9]*")) {
			return "TRACER_RV";
		}
		else if(match(s, "[0-9]+")) {
			return s;
		}
		else if(match(s, "[0-9]+\\.[0-9]+")) {
			return s;
		}
		else if(match(s, "unk")) {
			int code = Integer.parseInt(translate());

			switch(code) {
				case 0: // extern function call
					String fun = token(); // get func name manually. no need to translate it.
					int arity = Integer.parseInt(translate());
					String args = (arity == 0)? "" : translate();

					for (int i = 1; i < arity; i++)
						args += "," + translate();

					return fun + "(" + args + ")";

				case 1: // bitwise &
					return "(" + translate() + " & " + translate() + ")";
				
				case 2: // bitwise |
					return "(" + translate() + " | " + translate() + ")";

				case 3: // bitwise ^
					return "(" + translate() + " ^ " + translate() + ")";

				case 4: // left shift <<
					return "(" + translate() + " << " + translate() + ")";

				case 5: // right shift >>
					return "(" + translate() + " >> " + translate() + ")";

				case 6: // mod %
					return "(" + translate() + " % " + translate() + ")";

				case 7: // sizeof
					return "(sizeof(" + translate() + "))";

				case 8: // bnot ~
					return "(~(" + translate() + "))";

				default:
					FATAL.error("in dictionary: resolving unk predicate in " + fac.getFuncName());
					return null;
			}
		}
		else {
			if(!s.startsWith("S")) {
				FATAL.error("in dictionary: unknown token " + s + 
					" encountered while translating " + str);
			}
			String addref = s;
			s = s.replaceAll("\\$[\\w]*\\$", "");
			if(match(s, "SReturnValue"))
				return "TRACER_RV";
			s = s.substring(1);
			Variable v = new Variable(s);
            int idx;
			if((idx = fac.getVariables().indexOf(v)) >= 0)
				return fac.getVariables().elementAt(idx).getName();
            else if((idx = fac.getArrayVariables().indexOf(v)) >= 0)
				return fac.getArrayVariables().elementAt(idx).getName();
			else if(fac.addrefs.containsKey(addref))
				return "&" + "(" + new Dictionary(fac).
								translate(fac.addrefs.get(addref)) + ")";
			else
				return s;
		}
	}
}
