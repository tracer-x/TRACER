package compiler;

import java.io.*;
import java.util.*;
import java.util.regex.*;

/**
 * Models clauses in the ClauseFactory.
 */
public class Clause {
	private ClauseFactory factory;

	private TNode node;

	// Program points between which the transition is performed
	private int fromPP, toPP;

	private Vector<String> constraints = new Vector<String>();

	private Vector<CallInfo> call_list = new Vector<CallInfo>();

	// Placeholder for symbolic constraints
	private Vector<String> symbolic_constraints = new Vector<String>();
	
	/*
	 * Modified by Duc Hiep to accommodate arrays
	 * 12/12/2008
	 */
	// Placeholder for array references
	private Vector<String> array_references = new Vector<String>();

	private boolean initCallClause = false;

	// used by empty trans removal routine to distinguish normal empty trans from 
	boolean splEmptyTrans = false; // the empty trans following $unsafe trans

	/* OBSOLETE
	private TreeSet<Variable> referencedSymbolicVariables = new TreeSet<Variable>();
	*/
	
	private int id = -1;

	// Add branch and not_branch indicator as requested by Jorge - Duc Hiep
	private boolean isBranch = false;

	private TreeSet<Variable> referencedVariables = new TreeSet<Variable>();

	String text = null;

	public void setId(int id) {
		this.id = id;
	}

	public void addRefVariable(Variable v) {
		referencedVariables.add(v);
	}

	public void addRefVariable(Collection<Variable> set) {
		referencedVariables.addAll(set);
	}

	public TreeSet<Variable> getReferencedVariables() {
		return referencedVariables;
	}

	public void setBranch()
	{
		isBranch = true;
	}

	public boolean isInitCall() {
		return initCallClause;
	}

	public void setInitCall(boolean b) {
		initCallClause = b;
	}

	public boolean getBranch()
	{
		return isBranch;
	}
	
	public int getId()
	{
		return id;
	}

	public void addArrayReference(String constraint) {
		if(OPTIONS.INCLUDE_ARRAY_CONSTRAINTS && !OPTIONS.INCLUDE_ONLY_SYM_ARRAY_CONSTRAINTS)
			if(!array_references.contains(constraint))
				array_references.add(constraint);		
	}
	
	public void addArrayReference(Vector<String> constraints) {
		if(OPTIONS.INCLUDE_ARRAY_CONSTRAINTS && !OPTIONS.INCLUDE_ONLY_SYM_ARRAY_CONSTRAINTS)
			for(String con : constraints)
				if(!array_references.contains(con))
					array_references.add(con);
	}

	/* OBSOLETE 
	public void addSymbolicRefVariable(Variable v) {
		referencedSymbolicVariables.add(v);
	}

	public TreeSet<Variable> getReferencedSymbolicVariables() {
		return referencedSymbolicVariables;
	}
	*/

	public Clause(ClauseFactory f, TNode n) {
		factory = f;
		node = n;
	}

	public void setNode(TNode n) {
		node = n;
	}

	public TNode getNode() {
		return node;
	}

	public void setFromPP(int pp) {
		fromPP = pp;
	}

	public int getFromPP() {
		return fromPP;
	}

	public void setToPP(int pp) {
		toPP = pp;
	}

	public int getToPP() {
		return toPP;
	}

	public void splEmptyTrans() {
		splEmptyTrans = true;
	}

	public boolean isSplEmptyTrans() {
		return splEmptyTrans;
	}

	public void addConstraint(String constraint) {
		if(!constraints.contains(constraint))
			constraints.add(constraint);
	}

	public void replaceInConstraints(String s1, String s2, boolean isReference) {
		for(int i=0; i < constraints.size(); i++) {
			// do manual replace because of many special checks - not much extra overhead than Java replace
			String str = constraints.elementAt(i);
			for(int idx = str.indexOf(s1); idx != -1; idx = str.indexOf(s1, idx+1)) {
				// check if character before s1 is letter or digit
				if(idx != 0 && Character.isLetterOrDigit(str.charAt(idx-1))) continue;

				// for character after s1, check only for letter in case of reference (A1Ref0 etc)
				if(isReference) {
					if(idx+s1.length() < str.length() && Character.isLetter(str.charAt(idx+s1.length()))) continue;
				}
				else {
					if(idx+s1.length() < str.length() && Character.isLetterOrDigit(str.charAt(idx+s1.length()))) continue;
				}
				str = str.substring(0, idx) + s2 + str.substring(idx+s1.length());
			}
			constraints.setElementAt(str, i);
		}
	}

	public void replaceInSymbolicConstraints(String s1, String s2, boolean isReference) {
		for(int i=0; i < symbolic_constraints.size(); i++) {
			// do manual replace because of many special checks - not much extra overhead than Java replace
			String str = symbolic_constraints.elementAt(i);
			for(int idx = str.indexOf(s1); idx != -1; idx = str.indexOf(s1, idx+1)) {
				// check if character before s1 is letter or digit
				if(idx != 0 && Character.isLetterOrDigit(str.charAt(idx-1))) continue;

				// for character after s1, check only for letter in case of reference (A1Ref0 etc)
				if(isReference) {
					if(idx+s1.length() < str.length() && Character.isLetter(str.charAt(idx+s1.length()))) continue;
				}
				else {
					if(idx+s1.length() < str.length() && Character.isLetterOrDigit(str.charAt(idx+s1.length()))) continue;
				}
				str = str.substring(0, idx) + s2 + str.substring(idx+s1.length());
			}
			symbolic_constraints.setElementAt(str, i);
		}

	}

	public void replaceInArrayReferences(String s1, String s2, boolean isReference) {
		for(int i=0; i < array_references.size(); i++) {
			// do manual replace because of many special checks - not much extra overhead than Java replace
			String str = array_references.elementAt(i);
			for(int idx = str.indexOf(s1); idx != -1; idx = str.indexOf(s1, idx+1)) {
				// check if character before s1 is letter or digit
				if(idx != 0 && Character.isLetterOrDigit(str.charAt(idx-1))) continue;

				// for character after s1, check only for letter in case of reference (A1Ref0 etc)
				if(isReference) {
					if(idx+s1.length() < str.length() && Character.isLetter(str.charAt(idx+s1.length()))) continue;
				}
				else {
					if(idx+s1.length() < str.length() && Character.isLetterOrDigit(str.charAt(idx+s1.length()))) continue;
				}
				str = str.substring(0, idx) + s2 + str.substring(idx+s1.length());
			}
			array_references.setElementAt(str, i);
		}
	}

	public void replaceInCalls(String s1, String s2) {
		for(int i=0; i < call_list.size(); i++) {
			CallInfo call = call_list.elementAt(i);

			// doing blind replace for now instead of checking for letter/digit because it could be anything!
			// eg: X1| or X1Ref0| so you cannot tell if next char is going to be letter or digit or something else
			// TODO: Fix this!
			call.replaceArgs(s1, s2);
			
			/*
			String str = call.getArguments().replace(s1, s2);
			call.setArguments(str);

			str = call.getSymbolicArguments().replace(s1, s2);
			call.setSymbolicArguments(str);

			str = call.getSymbolicConstraints().replace(s1, s2);
			call.setSymbolicConstraints(str);
			*/
		}
	}

	public void addCall(CallInfo call) {
		//	DEBUG.println(String.format("Adding call %s %s %s %s", id, args, sargs, sconstraints));
		call_list.add(call);
	}

	public Vector<Integer> lineNums = new Vector<Integer>();
	public void addLineNum(int lineNum) {
		if(!lineNums.contains(lineNum))
			lineNums.add(lineNum);
	}

	public Vector<CallInfo> getCallInfo() {
		return call_list;
	}
	
	// assumes there's only 1 call
	public CallInfo getCall() {
		if(call_list.size() > 0)
			return call_list.elementAt(0);
		return null;
	}

	public boolean callPresent() {
		return call_list.size() > 0;
	}

	public Vector<String> getConstraints() {
		return constraints;
	}

	public Vector<String> getSymbolicConstraints() {
		return symbolic_constraints;
	}

	public String getConstraint(int index) {
		return constraints.elementAt(index);
	}

	public void addSymbolicConstraint(String constraint) {
		if(OPTIONS.INCLUDE_ARRAY_CONSTRAINTS || OPTIONS.INCLUDE_ONLY_SYM_ARRAY_CONSTRAINTS
				|| !(constraint.contains("ref(")))
			if(!symbolic_constraints.contains(constraint))
				symbolic_constraints.add(constraint);
	}

	public String getSymbolicConstraint(int index) {
		return symbolic_constraints.elementAt(index);
	}

	public int getNumCons() {
		return constraints.size();
	}
	
	public int getNumCons_symbolic() {
		return symbolic_constraints.size();
	}

	public int getNumArrayReference() {
		return array_references.size();
	}
	
	public String varList(boolean isHead) {
		return varList(isHead, false);
	}

	public String symbolicVarList(boolean isHead) {
		return symbolicVarList(isHead, false);
	}

	public String varList(boolean isHead, boolean initVal) {
		StringBuilder s = new StringBuilder();
		Iterator<Variable> i = factory.getVariables().iterator();

		while (i.hasNext()) {
			Variable v = i.next();
			String varName = "";

			if (initVal) {
				varName = "" + v.getInitialValue();
			} else {
				boolean needCurrentVarName = (isHead || (!referencedVariables
						.contains(v) && !OPTIONS.PROLOG_SYSTEM));
				varName = needCurrentVarName ? v.getCurrentName() : v
						.getNextName();
			}
			s.append(varName);
			if (i.hasNext())
				s.append(","); // don't append comma after last var
		}
		return s.toString();
	}

	public String symbolicVarList(boolean isHead, boolean initVal) {
		StringBuilder s = new StringBuilder();
		Iterator<Variable> i = factory.getVariables().iterator();

		while (i.hasNext()) {
			Variable v = i.next();
			String varName = "";
			if (initVal) {
				varName = "" + v.getInitialValue();
			} else {
				varName = (isHead || !referencedVariables.contains(v)) ? v
						.getSymbolicCurrentName() : v.getSymbolicNextName();
			}
			s.append(varName);
			if (i.hasNext())
				s.append(","); // don't append comma after last var
		}
		return s.toString();
	}

	public String globalVarList(boolean isHead) {
		return globalVarList(isHead, false);
	}

	public String symbolicGlobalVarList(boolean isHead) {
		return symbolicGlobalVarList(isHead, false);
	}

	public String globalVarList(boolean isHead, boolean initVal) {
		StringBuilder s = new StringBuilder();
		Iterator<Variable> i = factory.getGlobalVariables().iterator();

		while (i.hasNext()) {
			Variable v = i.next();
			String varName = "";

			if (initVal) {
				varName = "" + v.getInitialValue();
			} else {
				boolean needCurrentVarName = (isHead || (!referencedVariables
						.contains(v) && !OPTIONS.PROLOG_SYSTEM));
				varName = needCurrentVarName ? v.getCurrentName() : v
						.getNextName();
			}
			s.append(varName);
			if (i.hasNext())
				s.append(","); // don't append comma after last var
		}
		return s.toString();
	}

	public String symbolicGlobalVarList(boolean isHead, boolean initVal) {
		StringBuilder s = new StringBuilder();
		Iterator<Variable> i = factory.getGlobalVariables().iterator();

		while (i.hasNext()) {
			Variable v = i.next();
			String varName = "";
			if (initVal) {
				varName = "" + v.getInitialValue();
			} else {
				varName = (isHead || !referencedVariables.contains(v)) ? v
						.getSymbolicCurrentName() : v.getSymbolicNextName();
			}
			s.append(varName);
			if (i.hasNext())
				s.append(","); // don't append comma after last var
		}
		return s.toString();
	}
	
	/*
	 * Duc Hiep new format for rules
	 */
	
	// for arrays
	
	public String arrayList(boolean isHead) {
		return arrayList(isHead, false);
	}

	public String symbolicArrayList(boolean isHead) {
		return symbolicArrayList(isHead, false);
	}

	public String arrayList(boolean isHead, boolean initVal) {
		StringBuilder s = new StringBuilder();
		Iterator<Variable> i = factory.getArrayVariables().iterator();

		while (i.hasNext()) {
			Variable v = i.next();
			String varName = "";

			if (initVal) {
				varName = "" + v.getInitialValue();
			} else {
				boolean needCurrentVarName = (isHead || (!referencedVariables
						.contains(v) && !OPTIONS.PROLOG_SYSTEM));
				varName = needCurrentVarName ? v.getCurrentName() : v
						.getNextName();
			}
			s.append(varName);
			if (i.hasNext())
				s.append(","); // don't append comma after last var
		}
		return s.toString();
	}
	
	public String symbolicArrayList(boolean isHead, boolean initVal) {
		StringBuilder s = new StringBuilder();
		Iterator<Variable> i = factory.getArrayVariables().iterator();

		while (i.hasNext()) {
			Variable v = i.next();
			String varName = "";
			if (initVal) {
				varName = "" + v.getInitialValue();
			} else {
				varName = (isHead || !referencedVariables.contains(v)) ? v
						.getSymbolicCurrentName() : v.getSymbolicNextName();
			}
			s.append(varName);
			if (i.hasNext())
				s.append(","); // don't append comma after last var
		}
		return s.toString();
	}
	
	// for global arrays
	public String globalArrayList(boolean isHead) {
		return globalArrayList(isHead, false);
	}

	public String symbolicGlobalArrayList(boolean isHead) {
		return symbolicGlobalArrayList(isHead, false);
	}

	public String globalArrayList(boolean isHead, boolean initVal) {
		StringBuilder s = new StringBuilder();
		Iterator<Variable> i = factory.getGlobalArrayVariables().iterator();

		while (i.hasNext()) {
			Variable v = i.next();
			String varName = "";

			if (initVal) {
				varName = "" + v.getInitialValue();
			} else {
				boolean needCurrentVarName = (isHead || (!referencedVariables
						.contains(v) && !OPTIONS.PROLOG_SYSTEM));
				varName = needCurrentVarName ? v.getCurrentName() : v
						.getNextName();
			}
			s.append(varName);
			if (i.hasNext())
				s.append(","); // don't append comma after last var
		}
		return s.toString();
	}
	
	public String symbolicGlobalArrayList(boolean isHead, boolean initVal) {
		StringBuilder s = new StringBuilder();
		Iterator<Variable> i = factory.getGlobalArrayVariables().iterator();

		while (i.hasNext()) {
			Variable v = i.next();
			String varName = "";
			if (initVal) {
				varName = "" + v.getInitialValue();
			} else {
				varName = (isHead || !referencedVariables.contains(v)) ? v
						.getSymbolicCurrentName() : v.getSymbolicNextName();
			}
			s.append(varName);
			if (i.hasNext())
				s.append(","); // don't append comma after last var
		}
		return s.toString();
	}
	
	public String prologUnifications() {
		String s = "";
		Iterator<Variable> i;
		
		// global arrays
		i = factory.getGlobalArrayVariables().iterator();
		while(i.hasNext()) {
			Variable v = i.next();
			if(!referencedVariables.contains(v))
				s += v.getNextName() + "=" + v.getCurrentName() + ",";
		}

		// global vars
		i = factory.getGlobalVariables().iterator();
		while(i.hasNext()) {
			Variable v = i.next();
			if(!referencedVariables.contains(v))
				s += v.getNextName() + "=" + v.getCurrentName() + ",";
		}

		// local arrays
		i = factory.getArrayVariables().iterator();
		while(i.hasNext()) {
			Variable v = i.next();
			if(!referencedVariables.contains(v))
				s += v.getNextName() + "=" + v.getCurrentName() + ",";
		}

		// local vars
		i = factory.getVariables().iterator();
		while(i.hasNext()) {
			Variable v = i.next();
			if(!referencedVariables.contains(v))
				s += v.getNextName() + "=" + v.getCurrentName() + ",";
		}

		String comma = (getNumCons() > 0)? "," : "";
		return (s.compareTo("") == 0)? s: comma + s.substring(0, s.length()-1);
	}

	private String getNewArg() {
		int n1 = factory.getGlobalArrayVariables().size();
		int n2 = n1 + factory.getGlobalVariables().size();
		int n3 = n2 + factory.getArrayVariables().size();

		String str = "";

		str += symbolicGlobalArrayList(false) + ",";
		if(factory.getGlobalArrayVariables().size() == 0) 	str = str.substring(0, str.length() - 1);

		str += symbolicGlobalVarList(false) + ",";
		if(factory.getGlobalVariables().size() == 0) 		str = str.substring(0, str.length() - 1);

		str += symbolicArrayList(false) + ",";
		if(factory.getArrayVariables().size() == 0) 		str = str.substring(0, str.length() - 1);

		str += symbolicVarList(false) + ",";
		if(factory.getVariables().size() == 0) 				str = str.substring(0, str.length() - 1);

		if(str.compareTo("") != 0)
			str = str.substring(0, str.length() - 1);

		return String.format("v(b(%s),%d,%d,%d)", str, n1, n2, n3);
	}

	final Pattern refPattern = Pattern.compile("ref\\((.*),(.*),(.*)\\)");
	final Pattern updPattern = Pattern.compile("upd\\((.*),(.*),(.*)\\)");

	// checks if index is either a constant or a head variable (which are the only possibilities allowed for array index)
	boolean indexPatternCheck(String index) {
		Matcher n = Pattern.compile("\\d+").matcher(index);
		if(n.matches()) return true;

		Matcher m = Pattern.compile("(.*)\\$Next\\$").matcher(index);
		Variable idx_var;
		if(m.matches())
			idx_var = new Variable(m.group(1));
		else
			idx_var = new Variable(index);

		if(factory.getGlobalArrayVariables().contains(idx_var)) return true;
		if(factory.getGlobalVariables().contains(idx_var)) return true;
		if(factory.getArrayVariables().contains(idx_var)) return true;
		if(factory.getVariables().contains(idx_var)) return true;

		return false;
	}

	void arrayIndexSanityCheck() {
		for(String ref : array_references) {
			Matcher m = refPattern.matcher(ref);
			if(!m.matches() || !indexPatternCheck(m.group(2)))
				FATAL.error("improper array reference format: " + ref + " in " + factory.getFuncName() + ": p" + getFromPP());
		}
		for(String con : constraints) {
			if(!con.contains("=upd")) continue;
			String upd = con.substring(con.indexOf("=upd")+1);
			Matcher m = updPattern.matcher(upd);
			if(!m.matches() || !indexPatternCheck(m.group(2)))
				FATAL.error("improper array upd format: " + con + " in " + factory.getFuncName() + ": p" + getFromPP());
		}
	}

	public void removeUnusedRefs() {
		Vector<String> newRefs = new Vector<String>();
		for(String ref : array_references) {
			Matcher m = refPattern.matcher(ref);
			if(!m.matches()) FATAL.error("array ref " + ref + " is of improper format!");

			String artificialVar = m.group(3);
			boolean usedRef = false;
			// check if it's used in other refs
			for(String ref2 : array_references) {
				Matcher m2 = refPattern.matcher(ref2);
				if(!m2.matches()) FATAL.error("array ref " + ref2 + " is of improper format!");

				if(containsWord(m2.group(2),artificialVar)) {
					usedRef = true;
					break;
				}
			}
			// if not, check if it's used in constraints
			if(!usedRef) {
				for(String con : constraints)
					if(containsWord(con,artificialVar)) {
						usedRef = true;
						break;
					}
			}
			if(usedRef) newRefs.add(ref);
		}

		array_references = newRefs;
	}

	// returns if s1 contains the "word" s2. for eg, containsWord("Hello,world!","Hello") but not containsWord("Helloworld!","Hello")
	boolean containsWord(String s1, String s2) {
		if(!s1.contains(s2)) return false;
		int idx = s1.indexOf(s2);
		if(idx + s2.length() == s1.length()) return true;
		if(Character.isLetterOrDigit(s1.charAt(idx + s2.length()))) return false;
		return true;
	}

	public void setText(String text) {
		this.text = text;
	}

	public String getText() {
		return text;
	}

	public String toString() {
		if(OPTIONS.REMOVE_UNUSED_REFS) removeUnusedRefs();
		if(OPTIONS.COMPILE_IDX_VARS) arrayIndexSanityCheck();
		return toString(id);
	}

	public String toString(int id) {

		String predName = factory.getFuncName();

		if(id == -1)
			FATAL.error("clause in function " + predName + " called w/o initializing an id");

		// put this clause in clauseMap. for decompiler purposes
		this.id = id;
		ClauseFactory.clauseMap.put(new Integer(id), this);

		// Note that # constraints = # symbolic constraints
		String headVarList = varList(true);
		String bodyVarList = varList(false);

		String symbolicHeadVarList = symbolicVarList(true);
		String symbolicBodyVarList = symbolicVarList(false);
		
		String headArrayList = arrayList(true);
		String bodyArrayList = arrayList(false);
		
		String symbolicHeadArrayList = symbolicArrayList(true);
		String symbolicBodyArrayList = symbolicArrayList(false);

		String headGlobalVarList = globalVarList(true);
		String bodyGlobalVarList = globalVarList(false);

		String symbolicHeadGlobalVarList = symbolicGlobalVarList(true);
		String symbolicBodyGlobalVarList = symbolicGlobalVarList(false);
		
		String headGlobalArrayList = globalArrayList(true);
		String bodyGlobalArrayList = globalArrayList(false);
		
		String symbolicHeadGlobalArrayList = symbolicGlobalArrayList(true);
		String symbolicBodyGlobalArrayList = symbolicGlobalArrayList(false);

		String returnStr;
		int i;
		Iterator<CallInfo> ci = call_list.iterator();
		CallInfo c;

		// for printing toPP in case of bad safety state
		String toPP = "";
		if(getToPP() == -1988)
			toPP = "$unsafe";
		else if(getToPP() == -1980)
			toPP = "p$init_0";
		else if(getToPP() == -1987)
			toPP = "p$init_1";
		else if(OPTIONS.INC_ANALYSIS_COMPILATION)
			toPP = "" + getToPP();
        else
			toPP = "p" + getToPP();

		String fromPP = "";
		if(getFromPP() == -1980)
			fromPP = "p$init_0";
		else if(getFromPP() == -1987)
			fromPP = "p$init_1";
		else if(OPTIONS.INC_ANALYSIS_COMPILATION)
			fromPP = "" + getFromPP();
		else
			fromPP = "p" + getFromPP();

		// Note: unique is added
		returnStr = String.format("trans(%s, i%d,\n\t[%s],[%s],[%s],[%s],[%s],[%s],[%s],[%s],[%s],\n",
				predName, id, fromPP, headGlobalArrayList, headGlobalVarList,
				symbolicHeadGlobalArrayList, symbolicHeadGlobalVarList, headArrayList, headVarList, 
				symbolicHeadArrayList, symbolicHeadVarList);
		returnStr += String.format("\t[%s],[%s],[%s],[%s],[%s],[%s],[%s],[%s],[%s]",
				toPP, bodyGlobalArrayList, bodyGlobalVarList, 
				symbolicBodyGlobalArrayList, symbolicBodyGlobalVarList, bodyArrayList, bodyVarList, 
				symbolicBodyArrayList, symbolicBodyVarList);

		if(OPTIONS.NEWARG)
			returnStr += String.format(",%s", getNewArg());

		if(OPTIONS.PRINT_COMPILER_DATA)
			PrologEmitter.transOut.print(String.format("i%d : %s - %s\n", id, fromPP, toPP));

		returnStr += ",\n\t[";

		for (i = 0; i < getNumCons_symbolic() - 1; i++) {
			returnStr += getSymbolicConstraint(i) + ",";
		}
		if (getNumCons_symbolic() >= 1) {
			returnStr += getSymbolicConstraint(getNumCons_symbolic() - 1);
		}
		
		returnStr += "],\n\t[";

		//--------------------------------------------------------
		// Function calls
		//--------------------------------------------------------

		boolean TRACER_INIT_call = call_list.size() > 0 && getCall().getFunc() != null && getCall().getFunc().compareTo("func___TRACER_INIT") == 0;
		if (call_list.size() > 0 && (!OPTIONS.DECOMP_MODE || TRACER_INIT_call)) {
			if (ci.hasNext()) {
				returnStr += ci.next().toString();
			}
			while (ci.hasNext()) {
				returnStr += "," + ci.next().toString();
			}
		}
		
		returnStr += "],\n\t[";
		
		//--------------------------------------------------------
		// Array references
		//--------------------------------------------------------

		Iterator<String> arrRefs = array_references.iterator();
		while(arrRefs.hasNext())
		{
			String tempRef = arrRefs.next();
			if (arrRefs.hasNext())
				returnStr += tempRef + ",";
			else
				returnStr += tempRef;
		}

		//--------------------------------------------------------

		String branchOption = isBranch ? "branch" : "not_branch";
		// add the branch indicator
		returnStr += "],\n\t" + branchOption + ")";

		if (getNumCons() >= 1) {
			returnStr += " :-\n\t";
			if(OPTIONS.PROLOG_SYSTEM) returnStr += "clpr:{";
			for (i = 0; i < getNumCons() - 1; i++) {
				returnStr += getConstraint(i) + ",";
				if(OPTIONS.PRINT_COMPILER_DATA)
					PrologEmitter.transOut.print(getConstraint(i) + ",");
			}
			returnStr += getConstraint(getNumCons() - 1);
			if(OPTIONS.PRINT_COMPILER_DATA)
				PrologEmitter.transOut.print(getConstraint(getNumCons()-1) + "\n");
			if(OPTIONS.PROLOG_SYSTEM)
				returnStr += prologUnifications() + "}";
		}
		else if(OPTIONS.PROLOG_SYSTEM)
			returnStr += " :-\n\tclpr:{" + prologUnifications() + "}";

		returnStr += ".";

		return returnStr;
	}
}
// end class Clause

