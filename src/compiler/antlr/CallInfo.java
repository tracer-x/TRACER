package compiler; 
import java.util.*;

public class CallInfo {
	private String func;

	private Vector<String> args;

	private Vector<String> args_symbolic;

	private Vector<String> constraints_symbolic;

	CallInfo() {
		args = new Vector<String>();
		args_symbolic = new Vector<String>();
		constraints_symbolic = new Vector<String>();	
	}

	public void setFunc(String f) {
		func = f;
	}

	public void addArgs(String arg) {
		args.add(arg);
	}

	public String getFunc() {
		return func;
	}

	public int getArity() { // includes RetVal
		return args.size();
	}

	public void addArgs_symbolic(String arg_s) {
		args_symbolic.add(arg_s);
	}

	public void addConstraint_symbolic(String con) {
		constraints_symbolic.add(con);
	}

	public void replaceArgs(String s1, String s2) {
		/* Java quirk - first replace all occurrences of $ sign in both strings
		   by \\$ because $ sign is treated by Matcher as a backreference to a
		   group (refer javadoc for details). ANOTHER quirk - escape $ sign by \\
		   and \\$ by \\\\\\$.. sheesh */
		s1 = s1.replaceAll("\\$","\\\\\\$");
		s2 = s2.replaceAll("\\$","\\\\\\$");

		for(int i=0; i < args.size(); i++)
			args.setElementAt(args.elementAt(i).replaceAll(s1,s2), i);

		for(int i=0; i < args_symbolic.size(); i++)
			args_symbolic.setElementAt(args_symbolic.elementAt(i).replaceAll(s1,s2), i);

		for(int i=0; i < constraints_symbolic.size(); i++)
			constraints_symbolic.setElementAt(constraints_symbolic.elementAt(i).replaceAll(s1,s2), i);
	}

	public Vector<String> getArguments_C() {
		Vector<String> v = new Vector<String>();
		for(String s : constraints_symbolic)
			v.add(s.substring(s.indexOf(',')+1, s.length()-1));
		return v;
	}

	public String toString() {
		if(func == null) // dummy call
			return "";
		if(OPTIONS.WP_COMPILATION) {// no args for any call (except the 1st arg which will be RV# but useless anyway)
			if(args.size() <= 0 || args_symbolic.size() <= 0) FATAL.error("917231");
			else if(!(args.elementAt(0).startsWith("RV"))) FATAL.error("917232");
			else return "call(" + func + ",[" + args.elementAt(0) + "|_],[" + args_symbolic.elementAt(0) + "|_],[])";
		}

		Iterator<String> i;
		String r = "call(" + func + ",";

		// arguments
		r += "[";
		i = args.iterator();
		if(i.hasNext()) {
			r += i.next();
			while(i.hasNext())
				r += "," + i.next();
		}
		r += "|_],";

		// symbolic arguments
		r += "[";
		i = args_symbolic.iterator();
		if(i.hasNext()) {
			r += i.next();
			while(i.hasNext())
				r += "," + i.next();
		}
		r += "|_],";

		// symbolic constraints
		r += "[";
		i = constraints_symbolic.iterator();
		if(i.hasNext()) {
			r += i.next();
			while(i.hasNext())
				r += "," + i.next();
		}
		r += "])";

		return r;
	}
}
