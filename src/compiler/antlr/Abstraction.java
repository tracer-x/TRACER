package compiler;

import java.util.*;
import java.util.regex.*;

public class Abstraction {

	ClauseFactory cf;

	int PP;

	Vector<Variable> vars = new Vector<Variable>();

	Vector<Expression> arrays = new Vector<Expression>();

	Vector<Expression> abstractions = new Vector<Expression>();

	StringTokenizer tok;

	public Abstraction(ClauseFactory cf, int PP, Vector<Expression> abs) {
		this.cf = cf;
		this.PP = PP;
		
		for (Expression e : abs) {
			if(!e.isLogical()) {
				if(abstractions.size() == 0) {
					if(e.toString_symbolic().contains("ref("))
						arrays.add(e);
					else if(!vars.contains(new Variable(e.toString())))
						vars.add(new Variable(e.toString()));
				}
				else { // should not add to vars once abstractions has been added to. some problem then.
					FATAL.error("incorrect semantics for _TRACER_abstract(" + abs + ") in function " + cf.getFuncName());
				}
			}
			else {
				abstractions.add(e);
			}
		}
	}

	public String toString() {
		String f = cf.getFuncName();

		String ex = String.format("[%s],[%s],[%s],[%s]",
						cf.getGlobalArrays(false),
						cf.getGlobalVars(false),
						cf.getLocalArrays(false),
						cf.getLocalVars(false));
		
		String symb = String.format("[%s],[%s],[%s],[%s]",
						cf.getGlobalArrays(true),
						cf.getGlobalVars(true),
						cf.getLocalArrays(true),
						cf.getLocalVars(true));

		String markedVars = getMarkedVars();

		// obsolete, but use for sanity checking
		String markedArrays = getMarkedArrays();
		if(markedArrays.compareTo("[]") != 0)
			FATAL.error("in abstraction in function " + cf.getFuncName() + ". marked arrays was active");

		String abs = getAbstractions();

		return String.format("abstract(%s,[p%d],\n\t%s,\n\t%s,\n\t%s,\n\t%s).",
								f, PP, ex, symb, markedVars, /* markedArrays, */abs);
	}

	public String getAbstractions() {
		Iterator<Expression> i = abstractions.iterator();
		String ret = "";

		while(i.hasNext()) {
			Expression e = i.next();
			String s = "";

			if(e.getType() == Expression.CONSTRAINT || e.getType() == Expression.CONJUNCTION) {
				s = e.toString_symbolic();

				// sanity check
				if(!s.startsWith("eq(") && !s.startsWith("geq(") && !s.startsWith("gt("))
					FATAL.error("incorrect syntax for abstraction " + abstractions + " in " + cf.getFuncName());
			}

			else if(e.getType() == Expression.DISJUNCTION) {
				Iterator<String> j = e.getAllDisjuncts_symbolic().iterator();

				while(j.hasNext()) {
					s += j.next();

					// sanity check
					if(!s.startsWith("eq(") && !s.startsWith("geq(") && !s.startsWith("gt("))
						FATAL.error("incorrect syntax for abstraction " + abstractions + " in " + cf.getFuncName());

					if(j.hasNext()) s += ",";
				}
			}
			else
				FATAL.error("in getting constraints for abstraction " + abstractions);

			ret += s;
			if(i.hasNext()) ret += ",";
		}

		return "[" + ret + "]";
	}

	public String getMarkedArrays() {
		String ret = "";
		Iterator<Expression> i = arrays.iterator();

		while(i.hasNext()) {
			tok = new StringTokenizer(i.next().toString_symbolic(), "(),");
			String s = getExplicitVars();

			// sanity check
			if(!s.startsWith("ref("))
				FATAL.error("problem in " + cf.getFuncName() + ". abstraction array constraint: " + arrays);

			ret += s;
			if(i.hasNext()) ret += ",";
		}

		return "[" + ret + "]";
	}

	public String getExplicitVars() {
		if(!tok.hasMoreTokens())
			FATAL.error("ran out of tokens while getting explicit vars of " + arrays + " in " + cf.getFuncName());

		String s = tok.nextToken();

		if(s.matches("ref") || s.matches("plus") || s.matches("minus") || s.matches("mult") || s.matches("div"))
			return s + "(" + getExplicitVars() + "," + getExplicitVars() + ")";
		else if(s.matches("\\d+"))
			return s;
		else if(s.startsWith("S"))
			return s.substring(1);
		
		FATAL.error("in getting explicit vars of " + arrays + " in " + cf.getFuncName());
		return null;
	}

	public String getMarkedVars() {
		Iterator<Variable> i;
		Vector<Variable> sanity = new Vector<Variable>();

		// global arrays
		String s1 = "";
		i = ClauseFactory.getGlobalArrayVariables().iterator();
		while(i.hasNext()) {
			Variable v = i.next();
			if(vars.contains(v) && !cf.getArrayVariables().contains(v) && !cf.getVariables().contains(v)) {
				s1 += "o";
				sanity.add(v);
			}
			else
				s1 += "_";

			if(i.hasNext()) s1 += ",";
		}

		// global vars
		String s2 = "";
		i = ClauseFactory.getGlobalVariables().iterator();
		while(i.hasNext()) {
			Variable v = i.next();
			if(vars.contains(v) && !cf.getArrayVariables().contains(v) && !cf.getVariables().contains(v)) {
				s2 += "o";
				sanity.add(v);
			}
			else
				s2 += "_";

			if(i.hasNext()) s2 += ",";
		}

		// local arrays
		String s3 = "";
		i = cf.getArrayVariables().iterator();
		while(i.hasNext()) {
			Variable v = i.next();
			if(vars.contains(v)) {
				s3 += "o";
				sanity.add(v);
			}
			else
				s3 += "_";

			if(i.hasNext()) s3 += ",";
		}

		// local vars
		String s4 = "";
		i = cf.getVariables().iterator();
		while(i.hasNext()) {
			Variable v = i.next();
			if(vars.contains(v)) {
				s4 += "o";
				sanity.add(v);
			}
			else
				s4 += "_";

			if(i.hasNext()) s4 += ",";
		}

		// perform sanity check
		// size of sanity == size of vars
		if(sanity.size() != vars.size())
			FATAL.error("in function " + cf.getFuncName() + " in the abstraction of variables " + vars);

		return String.format("[%s],[%s],[%s],[%s]", s1, s2, s3, s4);
	}
}
