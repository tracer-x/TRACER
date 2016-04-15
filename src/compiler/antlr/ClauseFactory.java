package compiler;

/**
 * 
 */
import java.io.*;
import java.util.*;
import java.util.regex.*;

class FATAL {
    public static void error(String e) {
	  System.out.flush();
	  if(Main.emitter == null)
		  System.out.println("Fatal error: " + e);
	  else if(Main.emitter.parseNode == null)
		  System.out.println("Fatal error: " + e);
	  else
		  System.out.println("Fatal error in line " + Main.emitter.parseNode.getLineNum() + ": " + e);
	  System.exit(1);
    }
}

class DEBUG {
	public static void print(Object o) {
		if(OPTIONS.PRINT_DEBUG_INFO) {
			System.out.flush();
			System.out.print(o.toString());
		}
	}

	public static void println(Object o) {
		if(OPTIONS.PRINT_DEBUG_INFO) {
			System.out.flush();
			System.out.println(o.toString());
		}
	}

	public static void fprintln(Object o) {
		System.out.flush();
		System.out.println(o.toString());
	}

	public static void warn(Object o) {
		if(!PrologEmitter.PREPROCESS && OPTIONS.PRINT_DEBUG_INFO) {
			System.out.flush();
			System.out.println("** WARNING ** : (line " + Main.emitter.parseNode.getLineNum() + ") " + o.toString());
		}
	}
}

/**
 * @author dcsrv
 */
public class ClauseFactory {
	private Vector<Clause> clauseList = new Vector<Clause>();

	private Vector<Variable> variables = new Vector<Variable>();
	private Vector<Variable> array_variables = new Vector<Variable>();
	private Vector<Variable> pointer_variables = new Vector<Variable>();
	private Map<Variable, String> struct_variables = new HashMap<Variable, String>();

	// Vijay - changed these two to be static since they represent global variables
	private static Vector<Variable> global_array_variables = new Vector<Variable>();
	private static Vector<Variable> global_variables = new Vector<Variable>();
	private static Vector<Variable> global_pointer_variables = new Vector<Variable>();
	private static Map<Variable, String> global_struct_variables = new HashMap<Variable, String>();

	public Map<String,String> addrefs = new HashMap<String,String>();
	
	public Map<Variable,Vector<Expression>> arraySizes = new HashMap<Variable,Vector<Expression>>();

	public static Map<Variable,Vector<Expression>> globalArraySizes = new HashMap<Variable,Vector<Expression>>();

	private Stack<Clause> delayedClauses = new Stack<Clause>();
	
	// stores blocks as a stack for dynamic changes to its structure
	public Stack<Block> blockStack = new Stack<Block>();

	// stores blocks as a list for printing all blocks in the end
	public Vector<Block> blockList = new Vector<Block>();

	private Vector<Variable> params = new Vector<Variable>();

	// list of loop start & exit PPs (for use by decompiler). format of elements is: p<int>
	public Vector<String> loopStartPPs = new Vector<String>();
	public Vector<String> loopExitPPs = new Vector<String>();

	public Vector<Clause> callClauses = new Vector<Clause>();

	private String structDef = null;

	private String funcName = null;
	
	private boolean currentIsLoop = false;

	public int numLoops = 0;

	public boolean hasReturn = false;

	// Vijay - denotes if we are "inside" the condition of a block
	public boolean inCondition = false;

	// denotes if we are in switch condition...
	public boolean inSwitchCondition = false;
	// ... stores switch condition variables
	private Stack <Vector<String>> switchCondVars = new Stack <Vector<String>>();

	// Vijay - denotes if we are in an assignment group
	public boolean inAssignGroup = false;
	private VariableReferenceTable vrt = new VariableReferenceTable();

	// Start program point of this clause factory
	private int startPoint;

	// End program points of this clause factory
	private Vector<Integer> endPoints = new Vector<Integer>();
	
	private Vector<String> inputVars = new Vector<String>();

	private boolean externFunction = false;
	private int externNParams = 0;

	// records if the function returns a struct/pointer
	public boolean returnsStruct = false;
	public boolean returnsPtr = false;

	public static int cid = 1;
	static boolean firstMainEncounter = true;
	static int firstMainId = 0;
	// holds id->clause mapping. for decompiler purposes.
	public static Map<Integer, Clause> clauseMap = new HashMap<Integer, Clause>();

	public static int emptyTrans = 0;

	// sanity checking
	public Vector<Integer> idRange = new Vector<Integer>();

	Vector<Integer> excludedIdRange = new Vector<Integer>();

	// note: resets STATIC data only!
	public static void reset() {
		global_array_variables = new Vector<Variable>();
		global_variables = new Vector<Variable>();
		global_pointer_variables = new Vector<Variable>();
		globalArraySizes = new HashMap<Variable,Vector<Expression>>();
		cid = 1;
		firstMainEncounter = true;
		firstMainId = 0;
		emptyTrans = 0;
		clauseMap = new HashMap<Integer, Clause>();
		blockMap = new HashMap<Block, Vector<Block>>();
		funBlocks = new HashMap<String, Vector<Block>>();
	}

	public void addStructVariable(Variable v, String struc) {
		String name = v.getName();
		if(name.compareTo("_") == 0 || name.compareTo("TRACER_NONDET") == 0)
			return;
		DEBUG.println("in " + funcName + ": adding struct variable " + v + " of type " + struc);
		struct_variables.put(v, struc);
	}
	
	public static void addGlobalStructVariable(Variable v, String struc) {
		String name = v.getName();
		if(name.compareTo("_") == 0 || name.compareTo("TRACER_NONDET") == 0)
			return;
		DEBUG.println("adding global struct variable " + v + " of type " + struc);
		global_struct_variables.put(v, struc);
	}

	public String getStruct(Variable v) {
		if(v == null || v.getName() == null)
			return "";
		String name = v.getName();
		if(name.compareTo("_") == 0 || name.compareTo("TRACER_NONDET") == 0)
			return "";
		if(struct_variables.get(v) != null)
			return struct_variables.get(v);
		if(global_struct_variables.get(v) != null)
			return global_struct_variables.get(v);

        if(OPTIONS.WP_COMPILATION) {
            if(name.contains("$VAR$")) name = name.substring(name.indexOf("$VAR$")+5);
            else if(name.contains("$ARG$")) name = name.substring(name.indexOf("$ARG$")+5);
            else FATAL.error("998015");
            name = name.substring(0, name.indexOf("$"));
            return getStruct(new Variable(name));
        }

		if(OPTIONS.IGNORE_STRUCT_ERRORS) {
			DEBUG.warn("struct variable " + v + " could not be found in struct map!");
			return "";
		}
		FATAL.error("struct variable " + v + " could not be found in struct map!");
		return null;
	}

	public void addVariable(String name, Number initialValue) {
        if(name.startsWith("CIL___tmp")) return;
		// if WP_COMPILATION and this is the main function and variable is something other than ReturnValue, then the variable should be made global
		if(!PrologEmitter.PREPROCESS && OPTIONS.WP_COMPILATION && funcName.compareTo("func_main") == 0 && name.compareTo("ReturnValue") != 0) {
			PrologEmitter.liftedVars.add(name);
            String newname = "func_main$VAR$" + name + "$";
            if(!PrologEmitter.PREPROCESS && Main.emitter.IsAddrVar("GLOBAL", newname))
                addGlobalVariable(Main.emitter.getAddrVar("GLOBAL", newname), initialValue);
            else
    			addGlobalVariable(newname, initialValue);
			return;
		}
		if(name.compareTo("_") == 0 || name.compareTo("TRACER_NONDET") == 0)
			return;
		Variable v = new Variable(name, initialValue);


		if(PrologEmitter.inFunction && (variables.contains(v) || array_variables.contains(v) || global_variables.contains(v) || global_array_variables.contains(v))
						|| (!PrologEmitter.PREPROCESS && PreprocessInfo.getGlobalVars().contains(v))) {
			v = new Variable(name + "$__" + PrologEmitter.scopeCnt + "$", initialValue);
			if(PrologEmitter.varScopes.get(name) == null) {
				PrologEmitter.varScopes.put(name, new Stack<Integer>());
				PrologEmitter.varScopes.get(name).push(0); // dummy, popped below
			}
			PrologEmitter.varScopes.get(name).pop();
			PrologEmitter.varScopes.get(name).push(PrologEmitter.scopeCnt);
		}


		DEBUG.println(String.format("Adding variable %s to function %s",
				name, funcName));
		if(v.getCurrentName().compareTo("H") == 0)
			FATAL.error("variable " + v + " in " + funcName + " conflicts with TRACER's heap variable. please use anything other than " + v);
		if(!variables.contains(v) && !array_variables.contains(v) && !global_variables.contains(v) && !global_array_variables.contains(v))
			variables.add(v);
		// limitation check: duplicate variable names *in CLPR*
		else
		    FATAL.error(String.format("Duplicate variable %s in function %s", name, funcName));
	}

	public void addPointerVariable(Variable v) {
		String name = v.getName();
		if(name.compareTo("_") == 0 || name.compareTo("TRACER_NONDET") == 0)
			return;
		if(!pointer_variables.contains(v))
			pointer_variables.add(v);
	}
	
	public static void addGlobalPointerVariable(Variable v) {
		String name = v.getName();
		if(name.compareTo("_") == 0 || name.compareTo("TRACER_NONDET") == 0)
			return;
		if(!global_pointer_variables.contains(v))
			global_pointer_variables.add(v);
	}
	
	public Vector<Variable> getPointerVariables() {
		return pointer_variables;
	}
	
	public static Vector<Variable> getGlobalPointerVariables() {
		return global_pointer_variables;
	}
	
	// Duc Hiep
	public void addArrayVariable(String name, Number initialValue) {
        if(name.startsWith("CIL___tmp"))
            FATAL.error("071239");
		if(!PrologEmitter.PREPROCESS && OPTIONS.WP_COMPILATION && funcName.compareTo("func_main") == 0 && name.compareTo("ReturnValue") != 0) {
			PrologEmitter.liftedVars.add(name);
            String newname = "func_main$VAR$" + name + "$";
            if(!PrologEmitter.PREPROCESS && Main.emitter.IsAddrVar("GLOBAL", newname))
                addGlobalArrayVariable(Main.emitter.getAddrVar("GLOBAL", newname), initialValue);
            else
    			addGlobalArrayVariable(newname, initialValue);
			return;
		}
		if(name.compareTo("_") == 0 || name.compareTo("TRACER_NONDET") == 0)
			return;
		Variable v = new Variable(name, initialValue);


		if(PrologEmitter.inFunction && (variables.contains(v) || array_variables.contains(v) || global_variables.contains(v) || global_array_variables.contains(v))
						|| (!PrologEmitter.PREPROCESS && PreprocessInfo.getGlobalVars().contains(v))) {
			v = new Variable(name + "$__" + PrologEmitter.scopeCnt + "$", initialValue);
			if(PrologEmitter.varScopes.get(name) == null) {
				PrologEmitter.varScopes.put(name, new Stack<Integer>());
				PrologEmitter.varScopes.get(name).push(0); // dummy, popped below
			}
			PrologEmitter.varScopes.get(name).pop();
			PrologEmitter.varScopes.get(name).push(PrologEmitter.scopeCnt);
		}


		DEBUG.println(String.format("Adding array variable %s to function %s",
				name, funcName));
		if(v.getCurrentName().compareTo("H") == 0)
			FATAL.error("array variable " + v + " in " + funcName + " conflicts with TRACER's heap variable. please use anything other than " + v);
		if(!array_variables.contains(v) && !variables.contains(v) && !global_variables.contains(v) && !global_array_variables.contains(v))
			array_variables.add(v);
		// limitation check: duplicate variable names *in CLPR*
		else
		    FATAL.error(String.format("Duplicate array variable %s in function %s", name, funcName));
	}

	private static String getNonAddrName(String var) {
		Matcher m = Pattern.compile("Addr_(\\w+)__(.+)_").matcher(var);
		if(!m.matches())
			FATAL.error("improperly formed addrVar: " + var);
		return m.group(2);
	}

	public static void addGlobalVariable(String name, Number initialValue) {
        if(name.startsWith("CIL___tmp"))
            FATAL.error("071238");
		if(name.compareTo("_") == 0 || name.compareTo("TRACER_NONDET") == 0)
			return;
		Variable v = new Variable(name, initialValue);


		// this section is not for normal global variables, but Addr vars which are made global.
		// if 2 addr vars with same name in the same function are declared IN DIFFERENT BLOCKS,
		// this will make sure both get added to global vars list but with different (unique) names.
		if(global_variables.contains(v) || global_array_variables.contains(v)) {
			if(!name.startsWith("Addr")) // this check makes sure duplicate normal global vars are caught
				FATAL.error("duplicate global variable " + v + " which is not addr variable");
			v = new Variable(name + "$__" + PrologEmitter.scopeCnt + "$", initialValue);
			String nonAddrName = getNonAddrName(name);
			if(PrologEmitter.varScopes.get(nonAddrName) == null) {
				PrologEmitter.varScopes.put(nonAddrName, new Stack<Integer>());
				PrologEmitter.varScopes.get(nonAddrName).push(0); // dummy, popped below
			}
			PrologEmitter.varScopes.get(nonAddrName).pop();
			PrologEmitter.varScopes.get(nonAddrName).push(PrologEmitter.scopeCnt);
		}


		DEBUG.println(String.format("Adding global variable %s",
				name));
		if(v.getCurrentName().compareTo("H") == 0)
			FATAL.error("global variable " + v + " conflicts with TRACER's heap variable. please use anything other than " + v);
		if(PrologEmitter.PREPROCESS)
			PreprocessInfo.addGlobalVar(v);
		if(!global_variables.contains(v) && !global_array_variables.contains(v) )
			global_variables.add(v);
		// limitation check: duplicate variable names *in CLPR*
		else
		    FATAL.error(String.format("Duplicate global variable %s", name));
	}

	public static void addGlobalVariable(Variable v) {
		addGlobalVariable(v.getName(), 0);
	}

	// Duc Hiep
	public static void addGlobalArrayVariable(String name, Number initialValue) {
        if(name.startsWith("CIL___tmp"))
            FATAL.error("071237");
		if(name.compareTo("_") == 0 || name.compareTo("TRACER_NONDET") == 0)
			return;
		Variable v = new Variable(name, initialValue);
		DEBUG.println(String.format("Adding global array variable %s",
				name));
		if(v.getCurrentName().compareTo("H") == 0)
			FATAL.error("global array variable " + v + " conflicts with TRACER's heap variable. please use anything other than " + v);
		if(PrologEmitter.PREPROCESS)
			PreprocessInfo.addGlobalVar(v); // we don't distinguish between global var and global arrays for this (just need to record all globally declared vars)
		if(!global_array_variables.contains(v) && !global_variables.contains(v))
			global_array_variables.add(v);
		// limitation check: duplicate variable names *in CLPR*
		else
		    FATAL.error(String.format("Duplicate global array variable %s", name));
	}

	public static void addGlobalArrayVariable(Variable v) {
		addGlobalArrayVariable(v.getName(), 0);
	}
	
	public void addParam(String name, Number initialValue) {
		if(name.compareTo("_") == 0)
			return;

		Variable v = new Variable(name, initialValue);


		if(PrologEmitter.inFunction && (!PrologEmitter.PREPROCESS && PreprocessInfo.getGlobalVars().contains(v))) {
			v = new Variable(name + "$__" + PrologEmitter.scopeCnt + "$", initialValue);
			if(PrologEmitter.varScopes.get(name) == null) {
				PrologEmitter.varScopes.put(name, new Stack<Integer>());
				PrologEmitter.varScopes.get(name).push(0); // dummy, popped below
			}
			PrologEmitter.varScopes.get(name).pop();
			PrologEmitter.varScopes.get(name).push(PrologEmitter.scopeCnt);
		}


		if(!params.contains(v))
			params.add(v);
	}

	public Vector<Variable> getParams() {
		return params;
	}

	public static void removeLiftedVar(String varname) {
		if(!OPTIONS.WP_COMPILATION) return;
		Variable v = new Variable(varname);
		if(global_array_variables.contains(v))
			global_array_variables.remove(v);
		else if(global_variables.contains(v))
			global_variables.remove(v);
		else FATAL.error("123155: " + v);
	}

	public void addInputVariable(String name) {
		if(name.compareTo("_") == 0 || name.compareTo("TRACER_NONDET") == 0)
			return;
		if(!inputVars.contains(name))
			inputVars.add(name);
	}
	
	public Vector<Variable> getVariables() {
		return variables;
	}

	public Vector<Variable> getArrayVariables() {
		return array_variables;
	}

	public static Vector<Variable> getGlobalVariables() {
		return global_variables;
	}
	
	public static Vector<Variable> getGlobalArrayVariables() {
		return global_array_variables;
	}

    public void resetFuncName() {
        funcName = null;
    }

	/* set or retrieve the name of the function associated with this clause factory
	 */
	public void setFuncName(String s) {
		funcName = "func_" + s;

		if(OPTIONS.OLD_BLOCKS) return;

		// this check, although counter-intuitive (block stack being empty when setting the name of a function)
		// is because global variables are also considered as a Clausefactory, although they will have no trans..
		if(blockStack.size() == 0) return;

		// also set the block's name, thereby recording the fact that it's a function block
		if(blockStack.size() != 1)
			FATAL.error("block stack has more than 1 elements while setting name for " + s);
		blockStack.peek().setFunctionBlockName(funcName);
	}

	public void setExternFunction(boolean b) {
		externFunction = b;
	}

	public void setExternNParams(int n) {
		externNParams = n;
	}

	public String getFuncName() {
		return funcName;
	}

	public String getNextVarName(String var) {
		if(var.compareTo("_") == 0 || var.compareTo("TRACER_NONDET") == 0)
			return "_";
		if(inAssignGroup)
		{
			//DEBUG.println("next var name is " + vrt.getLatestReference(var));
			vrt.addReference(var);
			return vrt.getLatestReference(var);
		}
		return (new Variable(var, 0).getNextName());
	}

	public void removeReference(String var) {
		vrt.removeReference(var);
	}

	public void forceRemoveReference(String var) {
		vrt.forceRemoveReference(var);
	}

	public void splEmptyTrans(int clauseIndex) {
		clauseList.elementAt(clauseIndex).splEmptyTrans();
	}

	public String getSymbolicNextVarName(String var) {
		if(var.compareTo("_") == 0 || var.compareTo("TRACER_NONDET") == 0)
			return "_";
		if(inAssignGroup)
		{
			//DEBUG.println("next symbolic var name is S" + vrt.getLatestReference(var));
			return "S" + vrt.getLatestReference(var);
		}
		return (new Variable(var, 0).getSymbolicNextName());
	}

	public String getParamName(String param) {
		if(param.compareTo("_") == 0 || param.compareTo("TRACER_NONDET") == 0)
			return "_";
		return getCurrVarName(param);
	}

	public String getCurrVarName(String var) {
		if(var.compareTo("_") == 0 || var.compareTo("TRACER_NONDET") == 0)
			return "_";
		if(inAssignGroup)
		{
			//DEBUG.println("curr var name is " + vrt.getLatestReference(var));
			return vrt.getLatestReference(var);
		}
		return (new Variable(var, 0).getCurrentName());
	}

	public String getSymbolicCurrVarName(String var) {
		if(var.compareTo("_") == 0 || var.compareTo("TRACER_NONDET") == 0)
			return "_";
		if(inAssignGroup)
		{
			//DEBUG.println("curr symbolic var name is S" + vrt.getLatestReference(var));
			return "S" + vrt.getLatestReference(var);
		}
		return (new Variable(var, 0).getSymbolicCurrentName());
	}

	public String getPrevVarName(String var) {
		if(var.compareTo("_") == 0 || var.compareTo("TRACER_NONDET") == 0)
			return "_";
		//DEBUG.println("prev var name is " + vrt.getPrevReference(var));
		return vrt.getPrevReference(var);
	}

	public String getSymbolicPrevVarName(String var) {
		if(var.compareTo("_") == 0 || var.compareTo("TRACER_NONDET") == 0)
			return "_";
		//DEBUG.println("prev symbolic var name is " + vrt.getPrevReference(var));
		return "S" + vrt.getPrevReference(var);
	}

	public String getLatestReference(String var) {
		if(var.compareTo("_") == 0 || var.compareTo("TRACER_NONDET") == 0)
			return "_";
		return vrt.getLatestReference(var);
	}

	public String getLatestSymbolicReference(String var) {
		if(var.compareTo("_") == 0 || var.compareTo("TRACER_NONDET") == 0)
			return "_";
		return "S" + vrt.getLatestReference(var);
	}

	public int openClause(TNode n) {
		//	DEBUG.println(String.format("Add clause of function %s with number %d", funcName, clauseList.size()-1));
		clauseList.add(new Clause(this, n));
		return clauseList.size() - 1;
	}

	public int removeClause(int n) {
		clauseList.removeElementAt(n);
		return clauseList.size() - 1;
	}
	
	public int openDelayedClause() {
		clauseList.add(delayedClauses.pop());
		return clauseList.size() - 1;
	}

	public void addConstraint(int clauseIndex, String constraint) {
		clauseList.elementAt(clauseIndex).addConstraint(constraint);
	}
	
	// by Duc Hiep
	// to deal with for loops
	public void addDelayedConstraint(String constraint) {
		delayedClauses.peek().addConstraint(constraint);
	}

	public void addCall(int clauseIndex, CallInfo call) {
		//	DEBUG.println(String.format("Addcall %s %d", funcName, clauseIndex));
		clauseList.elementAt(clauseIndex).addCall(call);
		callClauses.add(clauseList.elementAt(clauseIndex));
	}

	public void setText(int clauseIndex, String text) {
		clauseList.elementAt(clauseIndex).setText(text);
	}

	public String getText(int clauseIndex) {
		return clauseList.elementAt(clauseIndex).getText();
	}

	public int protoLineNum = -1;
	public Vector<Integer> declLineNums = new Vector<Integer>();
	public static Vector<Integer> globalDeclLineNums = new Vector<Integer>();

	public void addDeclLineNum(int i) {
		if(!declLineNums.contains(i))
			declLineNums.add(i);
	}

	public static void addGlobalDeclLineNum(int i) {
		if(!globalDeclLineNums.contains(i))
			globalDeclLineNums.add(i);
	}

	// adds line number of the original code which resulted in the current clause
	public void addLineNum(int clauseIndex, int lineNum) {
		clauseList.elementAt(clauseIndex).addLineNum(lineNum);
	}

	public static Map<String, TreeSet<Variable>> gmod = new HashMap<String, TreeSet<Variable>>();
	public Vector<Abstraction> abstractCalls = new Vector<Abstraction>();

	// update gmod for this ClauseFactory
	public void updateGMod() {
		if(gmod.get(funcName) == null)
			gmod.put(funcName, blockList.elementAt(0).getReferencedGlobalVariables());
		else
			FATAL.error("gmod already contains information about " + funcName);
	}

	// converts calls to abstractions using gmod information. mainly used by decompiler.
	public void convertCallsToAbstractions() {
		if(gmod.isEmpty()) FATAL.error("no gmod information available for " + funcName + "!");
		for(Clause c : callClauses) {
			CallInfo call = c.getCall();
			String callee = call.getFunc();
			if(callee == null) continue;
			TreeSet<Variable> gmodded_vars = gmod.get(callee);

			if(gmodded_vars.size() != 0 && callee.compareTo("func___TRACER_INIT") != 0) {
				Vector<Expression> gmodded_exps = new Vector<Expression>();
				for(Variable var : gmodded_vars)
					gmodded_exps.add(new Expression(var.getCurrentName(), var.getSymbolicCurrentName()));

				Abstraction abs = new Abstraction(this, c.getFromPP(), gmodded_exps);
				abstractCalls.add(abs);
			}
		}
	}

	// outputs the abstracted calls
	public void outputAbstractCalls(PrintStream stream) {
		for(Abstraction abs : abstractCalls)
			stream.println(abs);
	}

	public Vector<Clause> getClauses() {
		return clauseList;
	}

	public Vector<Integer> getEndPoints() {
		return endPoints;
	}

	public Clause getCallClause(String PP) {
		int pp;
		PP = PP.substring(1); // remove "p"
		if(PP.compareTo("$init_0") == 0)
			pp = -1980;
		else if(PP.compareTo("$init_1") == 0)
			pp = -1987;
		else
			pp = Integer.parseInt(PP);

		for(Clause c : callClauses)
			if(c.getFromPP() == pp)
				return c;
		return null;
	}

	public boolean callPresent(int clauseIndex) {
		return clauseList.elementAt(clauseIndex).callPresent();
	}

	public void addSymbolicConstraint(int clauseIndex, String constraint) {
		clauseList.elementAt(clauseIndex).addSymbolicConstraint(constraint);
	}

	public void addSymbolicConstraints(int numClauses, String constraint) {
		for(int i=clauseList.size()-1; i >= clauseList.size()-numClauses; i--)
			clauseList.elementAt(i).addSymbolicConstraint(constraint);
	}
	
	// by Duc Hiep
	// to deal with for loops
	public void addDelayedSymbolicConstraint(String constraint) {
		delayedClauses.peek().addSymbolicConstraint(constraint);
	}
	/*
	 * Modidfied by Duc Hiep to accommodate arrays
	 * 12/12/2008
	 */
	public void addArrayReference(int clauseIndex, String constraint)
	{
		clauseList.elementAt(clauseIndex).addArrayReference(constraint);
	}

	public void addArrayReferences(int numClauses, String constraint) {
		for(int i=clauseList.size()-1; i >= clauseList.size()-numClauses; i--)
			clauseList.elementAt(i).addArrayReference(constraint);
	}
	
	public void addDelayedArrayReference(String constraint)
	{
		delayedClauses.peek().addArrayReference(constraint);
	}
	
	public void addArrayReference(int clauseIndex, Vector<String> constraints)
	{
		clauseList.elementAt(clauseIndex).addArrayReference(constraints);
	}
	
	public void addDelayedArrayReference(Vector<String> constraints)
	{
		delayedClauses.peek().addArrayReference(constraints);
	}

	public void setFromPP(int clauseIndex, int pp) {
		clauseList.elementAt(clauseIndex).setFromPP(pp);
	}

	public void setToPP(int clauseIndex, int pp) {
		clauseList.elementAt(clauseIndex).setToPP(pp);
	}

	public int getFromPP(int clauseIndex) {
		return clauseList.elementAt(clauseIndex).getFromPP();
	}

	public int getToPP(int clauseIndex) {
		return clauseList.elementAt(clauseIndex).getToPP();
	}
	
	public void setBranch(int clauseIndex)
	{
		clauseList.elementAt(clauseIndex).setBranch();
	}

	/**
	 * @return a string representation of all variables and their initial values.
	 */
	public String listVariables() {
		StringBuilder s = new StringBuilder();
		Iterator<Variable> i = variables.iterator();
		while (i.hasNext()) {
			Variable v = i.next();
			s.append(v.getName());
			s.append("=");
			s.append(v.getInitialValue());
			s.append(" ");
		}
		return s.toString();
	}

	public int numClauses() {
		return clauseList.size();
	}

	public int numBranches() {
		int count = 0;
		for(int i=0; i < clauseList.size(); i++) {
			if(clauseList.get(i).getBranch()) count++;
		}
		return count;
	}

	//     private String varList ( int index, boolean isHead ) {
	//         return varList(index,isHead,false) ;
	//     }

	//     private String symbolicVarList(int index, boolean isHead)
	//     {
	// 	return symbolicVarList(index, isHead, false);
	//     }

	private String paramList() {
		String result = "";
		Iterator<Variable> itr = params.iterator();
		while (itr.hasNext()) {
			result += itr.next().getCurrentName();
			if (itr.hasNext())
				result += ",";
		}
		return result;
	}

	//     public String callClause(String predName){
	//         String result = predName + "_call(";
	//         result += paramList();
	//         if(paramList().compareTo("")!=0) result += ",";
	//         if(hasReturn) result += getCurrVarName("ReturnValue");
	//         else result += "_";
	//         result += ") :- ";
	//         result += getFuncName();
	//         result += "(0,";
	//         result += varList(0, true);
	//         result += ").";
	//         return result;
	//     }

	//     private String varList ( int index, boolean isHead, boolean initVal ) {
	//         StringBuilder s = new StringBuilder() ;
	//         Iterator<Variable> i = variables.iterator() ;
	//         Clause c = clauseList.elementAt(index) ;
	//         TreeSet<Variable> refVars = c.getReferencedVariables() ;

	//         while ( i.hasNext() ) {
	//             Variable v = i.next() ;
	//             String varName = "" ;
	//             if ( initVal ) {
	//                 varName = "" + v.getInitialValue() ;
	//             } else {
	//                 boolean needCurrentVarName = isHead || !refVars.contains(v) ;
	//                 varName = needCurrentVarName ? v.getCurrentName() : v.getNextName() ;
	//             }
	//             s.append(varName) ;
	//             if ( i.hasNext() )
	//                 s.append(",") ; // don't append comma after last var
	//         }
	//         return s.toString() ;
	//     }

	//     private String symbolicVarList(int index, boolean isHead, boolean initVal)
	//     {

	//         StringBuilder s = new StringBuilder() ;
	//         Iterator<Variable> i = variables.iterator() ;
	//         Clause c = clauseList.elementAt(index) ;
	//         TreeSet<Variable> refVars = c.getReferencedVariables() ;

	//         while ( i.hasNext() ) {
	//             Variable v = i.next() ;
	//             String varName = "" ;
	//             if ( initVal ) {
	//                 varName = "" + v.getInitialValue() ;
	//             } else {
	//                 varName = (isHead || !refVars.contains(v)) ?
	// 		    v.getSymbolicCurrentName() :
	// 		    v.getSymbolicNextName() ;
	//             }
	//             s.append(varName) ;
	//             if ( i.hasNext() )
	//                 s.append(",") ; // don't append comma after last var
	//         }
	//         return s.toString() ;
	//     }

	private String namedVarList() {
		StringBuilder s = new StringBuilder();
		Iterator<Variable> i = variables.iterator();
		while (i.hasNext()) {
			Variable v = i.next();
			String varName = v.getCurrentName();
			String labeledVar = "\"" + varName + "=\"," + varName;
			s.append(labeledVar);
			if (i.hasNext())
				s.append(","); // don't append comma after last var
		}
		return s.toString();
	}

	//     public String clauseToString ( String predName, int clauseIndex ) {
	//         Clause c = clauseList.elementAt(clauseIndex) ;

	//         String headVarList = c.varList(true) ;
	//         String bodyVarList = c.varList(false) ;

	// 	String symbolicHeadVarList = c.symbolicVarList(true);
	// 	String symbolicBodyVarList = c.symbolicVarList(false);

	//         String returnStr;
	// 	int i;

	// 	returnStr = String.format("trans(%s,[%d],[%s],[%s],\n",
	// 				  predName,
	// 				  c.getFromPP(),
	// 				  headVarList,
	// 				  symbolicHeadVarList);
	// 	returnStr += String.format("\t[%d],[%s],[%s],\n\t[",
	// 				   c.getToPP(),
	// 				   bodyVarList,
	// 				   symbolicBodyVarList);

	// 	for (i=0; i<c.getNumCons() -1; i++) {
	// 	    returnStr += c.getSymbolicConstraint(i) + ",";
	// 	}
	// 	if (c.getNumCons() >= 1) {
	// 	    returnStr += c.getSymbolicConstraint(c.getNumCons()-1);
	// 	}

	// 	returnStr += "]) :-\n\t";

	//         for(i=0; i<c.getNumCons() -1; i++){
	//             returnStr += c.getConstraint(i) + ",";
	//         }
	// 	if (c.getNumCons() >= 1) {
	// 	    returnStr += c.getConstraint(c.getNumCons()-1);
	// 	}
	// 	returnStr += ".";

	//         return returnStr;
	//     }

	//     public String goalToString ( String predName ) {
	//         return ":- " + predName + "(0," + varList(0,true,true) + ")." ;
	//     }

	//     public String lastClause ( String predName, int pp )d++
	//         return predName + "(" + pp + "," + varList(0,true) d++") :- write(["
	//                + namedVarList() + "]),nl." ;
	//     }
	public int numConstraints(int ClauseNo) {
		Clause c = clauseList.elementAt(ClauseNo);
		return c.getNumCons();
	}

	// used to get no. of symbolic cons in a clause. usually it's the same as numCons, but if INCLUDE_ONLY_SYM_ARRAY_CONSTRAINTS is used, 
	// this may be different because only symbolic cons will be added for arrays
	public int numSymbolicConstraints(int ClauseNo) {
		Clause c = clauseList.elementAt(ClauseNo);
		return c.getNumCons_symbolic();
	}

	// opens AN EMPTY CLAUSE FOLLOWED BY a clause for init call (generally from func_main) at the start of clauseList, i.e index 0.
	public void openInitCallClause() {
		Clause emptyClause = new Clause(this, null);
		emptyClause.setFromPP(-1980); // -1980 = p$init_0, which is start of main function
		emptyClause.setToPP(-1987); // -1987 = p$init_1
		clauseList.insertElementAt(emptyClause, 0);

		Clause initCallClause = new Clause(this, null);
		initCallClause.setInitCall(true);
		initCallClause.setFromPP(-1987); // -1987 = p$init_1
		initCallClause.setToPP(0); // 0 = first PP in main
		clauseList.insertElementAt(initCallClause, 1);

		// set the start for this function to be p$init_0
		setStartPoint(-1980);

		DEBUG.println("main function's block is " + blockList.elementAt(0).getBlockId());
		if(blockList.size() > 0) {
			DEBUG.println("adding id " + PrologEmitter.emptyClauseId + " to main function's block " + blockList.elementAt(0).getBlockId());

			// add both clause Ids to main function's block (element 0).
			blockList.elementAt(0).addInfluencedId(PrologEmitter.emptyClauseId);
			blockList.elementAt(0).addInfluencedId(PrologEmitter.emptyClauseId+1);
		}
	}

	public Vector<Integer> getExcludedIdRange() {
		return excludedIdRange;
	}

	// used by decompiler (assumes outputAll has already been called and has set the ids)
	public void outputFunc(PrintStream stream) {
        if(OPTIONS.RANDOM_TRANS_ORDER) {
            Random rand = new Random();
            Vector<Clause> tmpcl = (Vector<Clause>) clauseList.clone();
            while(tmpcl.size() > 0) {
                int i = rand.nextInt(tmpcl.size());
                stream.println(tmpcl.elementAt(i));
                tmpcl.removeElementAt(i);
            }
        }
        else
		for(Clause cl : clauseList)
			stream.println(cl.toString());
	}

	// Output All Clauses
	public void outputAll(PrintStream stream) {
		if(OPTIONS.PRINT_COMPILER_DATA) {
			PrologEmitter.varOut.print(funcName + ":\n\t" + array_variables + "\n\t" + variables + "\n");
			outputBlocks(PrologEmitter.blockOut);
		}
		if(OPTIONS.DECOMP_MODE)
			updateGMod();

		if(numClauses() == 0) return;

		// set first main transition id
		if(firstMainEncounter && funcName != null && funcName.compareTo("func_main") == 0) {
			firstMainEncounter = false;
			firstMainId = cid;
		}

		int i = 0;
		if(funcName != null && funcName.compareTo("func_main") == 0) {
			// print empty clause & init call clause separately. these will be the first 2
			// elements in clauseList
			clauseList.elementAt(0).setId(PrologEmitter.emptyClauseId);
			clauseList.elementAt(1).setId(PrologEmitter.emptyClauseId+1);

			idRange.add(PrologEmitter.emptyClauseId);
			idRange.add(PrologEmitter.emptyClauseId+1);

			i = 2; /* first 2 clauses compiled above, so start from 3rd */
		}

		for (; i < numClauses(); i++) {
			Clause cl = clauseList.elementAt(i);
			if(OPTIONS.REMOVE_EMPTY_TRANS && i != 0 /* first clause should always be compiled, otherwise it may mess up start(..) */
					&& !cl.callPresent() && cl.getNumCons() == 0 && !cl.isSplEmptyTrans() /* empty trans after $unsafe should not be removed */) {
				emptyTrans++;
				int fromPP = cl.getFromPP();
				for(Clause cl2 : clauseList)
					if(cl2.getToPP() == fromPP)
						cl2.setToPP(cl.getToPP());
				excludedIdRange.add(cid);
				clauseList.remove(cl); // caution: this only works because the loop condition is querying the size of clauseList for every iteration
				i--;
				cid++;
			}
			else {
				idRange.add(cid);
				cl.setId(cid++);
				//stream.println(cl.toString(cid++));
			}
		}

		if(OPTIONS.REVERSE_TRANS_ORDER)
			for(Clause cl : clauseList)
				compiler.Main.emitter.transList.add(cl.toString());
		else
			for(Clause cl : clauseList)
				stream.println(cl.toString());

		// sanity check - all transitions influenced by a block must be a transition of this function
		DEBUG.println("trans id sanity check for " + funcName + " going on..");
		for(Block b : blockList)
			for(Integer inf_id : b.getInfluencedIds())
				if(!idRange.contains(inf_id) && !excludedIdRange.contains(inf_id))
					FATAL.error("trans id sanity check failed! trans i" + inf_id + " is influenced by block b" + b.getBlockId() + " but it's not a trans of "
							+ funcName);

		// sanity check (opposite of prev. one)- all transitions of this function must be influenced by a block of this function
		for(Integer t_id : idRange) {
			boolean isInfd = false;
			for(Block b : blockList) {
				if(b.getInfluencedIds().contains(t_id)) {
					isInfd = true;
					break;
				}
			}

			if(!isInfd)
				FATAL.error("transition i" + t_id + " of function " + funcName + " is not in any of the function's blocks!\n" + 
					"Make sure you are not running safety with REMOVE_EMPTY_TRANS = true");
		}
		DEBUG.println("trans id sanity check successfully complete!");
	}

	public static void outputGlobalDict(PrintStream stream) {
		String logical_arr = "";
		String actual_arr = "";
		for(Iterator<Variable> i = global_array_variables.iterator(); i.hasNext(); ) {
			Variable v = i.next();
			logical_arr += v.getCurrentName();
			actual_arr += "'" + v.getName() + "'";

			if(i.hasNext()) {
				logical_arr += ",";
				actual_arr += ",";
			}
		}

		String logical_var = "";
		String actual_var = "";
		for(Iterator<Variable> i = global_variables.iterator(); i.hasNext(); ) {
			Variable v = i.next();
			logical_var += v.getCurrentName();
			actual_var += "'" + v.getName() + "'";

			if(i.hasNext()) {
				logical_var += ",";
				actual_var += ",";
			}
		}

		stream.print(String.format("globaldict([%s],[%s],\n\t[%s],[%s]).\n", logical_arr, logical_var, actual_arr, actual_var));
	}

	public void outputDict(PrintStream stream) {
		String logical_arr = "";
		String actual_arr = "";
		for(Iterator<Variable> i = array_variables.iterator(); i.hasNext(); ) {
			Variable v = i.next();
			logical_arr += v.getCurrentName();
			actual_arr += "'" + v.getName() + "'";

			if(i.hasNext()) {
				logical_arr += ",";
				actual_arr += ",";
			}
		}

		String logical_var = "";
		String actual_var = "";
		for(Iterator<Variable> i = variables.iterator(); i.hasNext(); ) {
			Variable v = i.next();
			logical_var += v.getCurrentName();
			actual_var += "'" + v.getName() + "'";

			if(i.hasNext()) {
				logical_var += ",";
				actual_var += ",";
			}
		}

        if (funcName != null)
		stream.print(String.format("dict(%s,[%s],[%s],\n\t[%s],[%s]).\n", funcName, logical_arr, logical_var, actual_arr, actual_var));
	}

	// Output Start Point
	public void outputStartPoint(PrintStream stream) {
		if (numClauses() > 0) {
			stream.print(startPointToString());
		}
	}

	// Output End Points
	public void outputEndPoints(PrintStream stream) {
		if (numClauses() > 0) {
			stream.print(endPointsToString());
		}
	}

	// Output Local Fresh Variables
	public void outputLocalFreshVars(PrintStream stream) {
		if (numClauses() > 0) {
			stream.println(localFreshVarsToString());
		}
	}
	
	// by Duc Hiep
	// Output Local Fresh Arrays
	public void outputLocalFreshArrays(PrintStream stream) {
		if (numClauses() > 0) {
			stream.println(localFreshArraysToString());
		}
	}

	public void outputFreshParams(PrintStream stream) {
		stream.println("freshparams(" + funcName + ",[" + getFreshParams() + "]).");
	}

	public String getFreshParams() {
		if(OPTIONS.WP_COMPILATION) // no formal params for any function
			return "";
		String s = "";
		Iterator<Variable> i = params.iterator();

		if(params.size() == 0)
			FATAL.error("no ReturnValue param for function " + funcName + "!");

		// sanity check, first param should always be ReturnValue
		if(!params.elementAt(0).getName().startsWith("ReturnValue"))
			FATAL.error("ReturnValue not the first param in " + funcName + "!");

		while(i.hasNext()) {
			Variable v = i.next();

			String r = "";
			if(variables.contains(v))
				r = String.format("lv(%d)", variables.indexOf(v));
			else if(array_variables.contains(v))
				r = String.format("la(%d)", array_variables.indexOf(v));
			else if(global_variables.contains(v))
				r = String.format("gv(%d)", global_variables.indexOf(v));
			else
				FATAL.error("could not find param " + v + " in any list in " + funcName);

			// sanity check. shouldn't add same variable twice
			if(s.contains(r))
				FATAL.error("parameter " + v + " (" + r + ") was already present in freshparams(" + funcName + ",[" + s + "])");

			s += r;
			if(i.hasNext()) s += ",";
		}

		return s;
	}

	public String localFreshVarsToString() {
	/*
		String s = "";

		if (variables.size() > 0) {
			s = "_";
			for (int i = 1; i < variables.size(); i++) {
				s += ",_";
			}
		}
	*/
		return "freshlocalvars(" + funcName + ",[" + getLocalVars(true) + "]).";
	}
	
	// by Duc Hiep
	public String localFreshArraysToString() {
	/*
		String s = "";

		if (array_variables.size() > 0) {
			s = "_";
			for (int i = 1; i < array_variables.size(); i++) {
				s += ",_";
			}
		}
	*/
		return "freshlocalarrays(" + funcName + ",[" + getLocalArrays(true) + "]).";
	}

	//set a structure definition
	public void setStructDef(String s) {
		structDef = s;
	}

	public String getStructDef() {
		return structDef;
	}

	// Start program point
	public void setStartPoint(int n) {
		startPoint = n;
	}

	public String startPointToString() {
		if(startPoint == -1980)
			return String.format("start(%s, [p$init_0]).\n", funcName);
		return String.format("start(%s, [p%d]).\n", funcName, startPoint);
	}

	// End program points
	public void addEndPoint(int n) {
		endPoints.add(n);
	}

	public String endPointsToString() {
		Iterator<Integer> i = endPoints.iterator();
		String endPointsString = "";

		while (i.hasNext()) {
            if (OPTIONS.INC_ANALYSIS_COMPILATION)
		    	endPointsString += String.format("bottom(%s, [%d]).\n", funcName, i
					.next());
            else
			    endPointsString += String.format("bottom(%s, [p%d]).\n", funcName, i
					.next());
		}
		return endPointsString;
	}
	
	// by Duc Hiep to deal with for loop
	
	public void createDelayedClause(TNode n, boolean option)
	{
		delayedClauses.push(new Clause(this, n));
		currentIsLoop = option; // note we don't need a stack as if the current is not Loop
		// we will use it right away.
	}
	
	/* =======================================
	 * Vijay - functions for assignment groups
	 * =======================================
	*/
	
	// perfoms closing rituals of an assignment group
	public void closeAssignGroup(int clauseId, TreeSet<String> assignGroupVars)
	{
		inAssignGroup = false;
		Iterator<String> t = assignGroupVars.iterator();
		while(t.hasNext())
		{
			 String var = t.next();
			 String nv = getNextVarName(var);
			 String symbnv = getSymbolicNextVarName(var);
		     String latestRef = getLatestReference(var);
		     String latestSymbolicRef = getLatestSymbolicReference(var);

		     // no initialization, only declaration (cases like ANext=A, BNext=B...) - simply continue
		     if((new Variable(var)).getCurrentName().compareTo(latestRef) == 0) 
				continue;

		     // replace var with varNext in all constraints and array references
		     // DEBUG.println("replace: " + latestRef + " " + nv);
		     clauseList.elementAt(clauseId).replaceInConstraints(latestRef, nv, false);
		     clauseList.elementAt(clauseId).replaceInSymbolicConstraints(latestSymbolicRef, symbnv, false);
		     clauseList.elementAt(clauseId).replaceInArrayReferences(latestRef, nv, false);
		     clauseList.elementAt(clauseId).replaceInCalls(latestRef, nv);

		     // replace varRef# with varNextRef# in all constraints and array references
		     clauseList.elementAt(clauseId).replaceInConstraints(latestRef + "Ref", nv + "Ref", true);
		     clauseList.elementAt(clauseId).replaceInSymbolicConstraints(latestSymbolicRef + "Ref", symbnv + "Ref", true);
		     clauseList.elementAt(clauseId).replaceInArrayReferences(latestRef + "Ref", nv + "Ref", true);
		 }

		 vrt.clear();
	}

	// special replacing for assignments with call
	public void assignCallReplace(int clauseId, String from, String to)
	{
		 clauseList.elementAt(clauseId).replaceInConstraints(from, to, false);
		 clauseList.elementAt(clauseId).replaceInSymbolicConstraints("S" + from, "S" + to, false);
		 clauseList.elementAt(clauseId).replaceInArrayReferences(from, to, false);
		 clauseList.elementAt(clauseId).replaceInCalls(from, to);

		 clauseList.elementAt(clauseId).replaceInConstraints(from + "Ref", to + "Ref", true);
		 clauseList.elementAt(clauseId).replaceInSymbolicConstraints("S" + from + "Ref", "S" + to + "Ref", true);
		 clauseList.elementAt(clauseId).replaceInArrayReferences(from + "Ref", to + "Ref", true);
	}

	/* =====================================================
	 * Vijay - functions for adding/deleting/printing blocks
	 * =====================================================
	*/
	public static HashMap<Block, Vector<Block>> blockMap = new HashMap<Block, Vector<Block>>();
	public static HashMap<String, Vector<Block>> funBlocks = new HashMap<String, Vector<Block>>();

	public void createBlockClause(int blockId, boolean isLoop)
	{
		Block b = new Block(this, blockId, isLoop);
		blockStack.push(b);
		blockList.add(b);
	}

	// pops a block clause, only from the stack
	public void popBlockClause()
	{
		if(OPTIONS.OLD_BLOCKS) {
			if(blockStack.size() > 0)
			{
				Block temp = blockStack.pop();
				if(blockStack.size() > 0)
					blockStack.peek().addRefVariable(temp.getReferencedVariables());
			}
			else
			{
				FATAL.error("Block stack is empty while popping!");
			}
		}
		else {
			if(blockStack.size() > 0)
			{
				Block temp = blockStack.pop();
				if(PrologEmitter.PREPROCESS) return;

				if(blockMap.get(temp) != null)
					FATAL.error("block " + temp + " already present in blockMap");
				blockMap.put(temp, new Vector<Block>());

				for(Block b : blockStack)
					blockMap.get(temp).add(b);
			}
			else
			{
				FATAL.error("Block stack is empty when popping!");
			}
		}
	}

	public void addBlockFunCall(String func) {
		if(PrologEmitter.PREPROCESS) return;
		if(funBlocks.get(func) == null)
			funBlocks.put(func, new Vector<Block>());

		funBlocks.get(func).add(blockStack.peek());
	}

	public static void populateBlocks() {
		populateFunBlocks();
		for(Block b : blockMap.keySet()) {
			populateBlocks(b);
		}
	}
	
	public static void populateFunBlocks() {
		for(Block b : blockMap.keySet()) {
			String func = b.getFunctionBlockName();
			if(func != null) {// function block
				if(funBlocks.get(func) == null) {
					//DEBUG.fprintln("no function is calling " + func);
					continue;
				}
				//DEBUG.fprintln(func + " is being called by " + funBlocks.get(func));
				for(Block b2 : funBlocks.get(func))
					blockMap.get(b).add(b2);
			}
		}
	}

	public static void populateBlocks(Block b) {
		TreeSet<Variable> refVars;
		if(b.getFunctionBlockName() == null)
			refVars = b.getReferencedVariables();
		else {// function block
			refVars = b.getReferencedGlobalVariables();
			//DEBUG.fprintln(b + "(" + b.getFunctionBlockName() + ") is function block. refVars: " + b.getReferencedVariables());
		}

		for(Block b2 : blockMap.get(b)) {
			boolean needToPropagate = false;
			for(Variable v : refVars)
				if(!(b2.getReferencedVariables().contains(v))) {
					needToPropagate = true;
					break;
				}

			if(needToPropagate) {
				b2.addRefVariable(refVars);
				populateBlocks(b2);
			}
		}
	}

	// REMOVES a block clause PERMANENTLY - used mainly for removing safety goal "if" blocks
	public void removeBlockClause(Integer blockId) {
		// reverse traversal because most often, the block that is needed will be near the end
		for(int i=blockList.size()-1; i >= 0; i--) {
			if(blockList.elementAt(i).getBlockId() == blockId) {
				blockList.removeElementAt(i);
				return;
			}
		}
		DEBUG.println("Block clause with Id " + blockId + " not found!");
	}

    public void outputLoopInvariants(PrintStream stream) {
        if(OPTIONS.ABSTRACT_DOMAIN == 0 || funcName.compareTo("func___TRACER_INIT") == 0 || loopStartPPs.size() == 0) return;
        Vector<Vector<String>> loop_invariants = AbstractDomain.getLoopInvariants(funcName);
        if(loop_invariants.size() != loopStartPPs.size())
            return; // abstract domain failed for this func.. just return
            // FATAL.error("something is wrong in asserting loop invariants facts: " + loop_invariants.size() + ", " + loopStartPPs.size());

        int i = 0;
        for(Vector<String> invs : loop_invariants) {
            stream.print(String.format("loopinv(%s,[%s],[%s],[%s],[%s],[%s])", funcName, loopStartPPs.elementAt(i++), 
                        getGlobalArrays(false), getGlobalVars(false), getLocalArrays(false), getLocalVars(false)));
            if(invs.size() > 0)
                stream.print(":-\n\t");
            Iterator<String> j = invs.iterator();
            while(j.hasNext()) {
                stream.print(j.next());
                if(j.hasNext())
                    stream.print(",");
            }
            stream.print(".\n");
        }
    }

	public void outputBlocks(PrintStream stream)
	{
		Iterator <Block> i = blockList.iterator();
		while(i.hasNext())
		{
			Block b = i.next();
			String s = String.format("block(b%d, %s, [%s], [%s], _, %s, %s, %s).\n", 
			b.getBlockId(), funcName, b.getStartPP(), b.getEndPP(), b.getIsLoop(), b.toStringInfluencedIds(), b.toStringUpdatedVariables());
			stream.print(s);
		}
    }

    public void outputBranchFootprint(PrintStream stream) {
        Vector<String> done = new Vector<String>();
        for(Block b : blockList) {
            String PP = b.getStartPP();
            if(done.contains(PP) || PP.equals("_"))
                continue;
            String fp = b.toStringUpdatedVariables().replaceAll("n","_");
            for(Block b2 : blockList) {
                if(!(b2.getStartPP().equals(PP)))
                    continue;
                String fp1 = b2.toStringUpdatedVariables().replaceAll("n","_");
                if(fp1.length() != fp.length())
                    FATAL.error("something wrong in printing footprint");

                // unify the two footprints (painful in Java)
                String fp2 = "";
                for(int i=0; i < fp.length(); i++) {
                    char c1 = fp.charAt(i);
                    char c2 = fp1.charAt(i);
                    if(c1 == 'u' || c2 == 'u') fp2 += 'u';
                    else if(c1 == c2) fp2 += c1;
                    else FATAL.error("something wrong in printing footprint");
                }
                fp = fp2;
            }

            // unify also with condition variables
            String con = b.toStringConditionVariables();
            if(fp.length() != con.length())
                FATAL.error("something wrong in printing footprint");
            String fp2 = "";
            for(int i=0; i < fp.length(); i++) {
                char c1 = fp.charAt(i);
                char c2 = con.charAt(i);
                if(c1 == 'u' || c2 == 'u') fp2 += 'u';
                else if(c1 == c2) fp2 += c1;
                else FATAL.error("something wrong in printing footprint");
            }
            fp = fp2;

            // print
            done.add(PP);
            stream.print(String.format("branch_footprint(%s,%s,%s).\n",
                    funcName, PP, fp));
        }
    }

    public void outputBlockConditionVars(PrintStream stream) {
        Iterator<Block> i = blockList.iterator();
        while(i.hasNext()) {
            Block b = i.next();
            stream.print(String.format("block_condition_vars(b%d,%s).\n",
                    b.getBlockId(), b.toStringConditionVariables()));
        }
	}

	public int getTransitionId() {
		return cid; // cid is static
	}
	
	/* ====================================================
	 * Vijay - functions for manipulating block information
	 * ====================================================
	*/

	public void setInCondition(boolean b) {
		inCondition = b;
	}
	
	public void setBlockStartPP(int startPP) {
		blockStack.peek().setStartPP(startPP);
	}

	public void setBlockStartPP(int blockId, int startPP) {
		for(Block b : blockList)
            if(b.getBlockId() == blockId)
                b.setStartPP(startPP);
	}

	public void setBlockEndPP(int endPP) {
		blockStack.peek().setEndPP(endPP);
	}

	public void setBlockEndPP(int blockId, int endPP) {
		for(Block b : blockList)
            if(b.getBlockId() == blockId)
                b.setEndPP(endPP);
	}

	public void clauseRefVar(int clauseIndex, String varName) {
		clauseList.elementAt(clauseIndex).addRefVariable(new Variable(varName));
		if (blockStack.size() > 0)
			blockStack.peek().addRefVariable(new Variable(varName));
	}

	public void clauseCondVar(String varName) {
		if(!inCondition) return;
		if(inSwitchCondition) { // just add to list as there is no block for switch
			switchCondVars.peek().add(varName);
			return;
		}
		if(blockStack.size() > 0)
			blockStack.peek().addCondVariable(new Variable(varName));
		else
			DEBUG.println("Block clauses is empty! In blockCondVar");
	}

	public void addNewSwitchCondVars() {
		switchCondVars.push(new Vector<String>());
	}

	public void removeSwitchCondVars() {
		switchCondVars.pop();
	}

	public Vector<String> getCurrentSwitchCondVars() {
		return switchCondVars.peek();
	}

	public void clauseInfluencedId(Integer tId) {
		if(blockStack.size() > 0)
			blockStack.peek().addInfluencedId(tId);
	}

	public void clauseInfluencedId(Integer blockId, Integer tId) {

		// reverse traversal because most often, the block that is needed will be near the end
		for(int i=blockList.size()-1; i >= 0; i--) {
			if(blockList.elementAt(i).getBlockId() == blockId) {
				blockList.elementAt(i).addInfluencedId(tId);
				return;
			}
		}
		DEBUG.println("Block clause with Id " + blockId + " not found!");
	}

	// Vijay - only used situationally (primarily for undoing the last change in init_slicing_goal)
	public void popClauseInfluencedId() {
		if(blockStack.size() > 0)
			blockStack.peek().popInfluencedId();
	}

	public void delayedClauseRefVar(String varName) {
		delayedClauses.peek().addRefVariable(new Variable(varName));
		if (currentIsLoop)
			blockStack.peek().addRefVariable(new Variable(varName));
	}

	// only used by "if", to get condition variables and store it temporarily for "else" 
	public Collection<Variable> getBlockClauseConditionVariables() {
		if(blockStack.size() > 0)
			return blockStack.peek().getConditionVariables();
		return null;
	}

	// only used by "else", to store condition variables as a collection got from "if"
	public void setBlockClauseConditionVariables(Collection<Variable> v) {
		if(blockStack.size() > 0)
			blockStack.peek().addCondVariable(v);
	}

	/* ========================================
	 * Functions for printing variable database
	 * ========================================
	*/
	public String getGlobalArrays(boolean symbolic) {
		String str = "";;
		Iterator<Variable> i = global_array_variables.iterator();

		while(i.hasNext())
		{
			Variable v = i.next();
			str += (symbolic)? v.getSymbolicCurrentName(): v.getCurrentName();
			if(i.hasNext())
				str += ",";
		}
		return str;
	}

	public String getGlobalVars(boolean symbolic) {
		String str = "";
		Iterator<Variable> i = global_variables.iterator();

		while(i.hasNext())
		{
			Variable v = i.next();
			str += (symbolic)? v.getSymbolicCurrentName(): v.getCurrentName();
			if(i.hasNext())
				str += ",";
		}
		return str;
	}

	public String getLocalArrays(boolean symbolic) {
		String str = "";
		Iterator<Variable> i = array_variables.iterator();
		while(i.hasNext()) {
			Variable v = i.next();
			str += (symbolic)? v.getSymbolicCurrentName(): v.getCurrentName();
			if(i.hasNext())
				str += ",";
		}
		return str;
	}

	public String getLocalVars(boolean symbolic) {
		String str = "";
		Iterator<Variable> i = variables.iterator();
		while(i.hasNext()) {
			Variable v = i.next();
			str += (symbolic)? v.getSymbolicCurrentName(): v.getCurrentName();
			if(i.hasNext())
				str += ",";
		}
		return str;
	}

	public void printInputVars(PrintStream stream) {
		String gArrInputs = "", gVarInputs = "", lArrInputs = "", lVarInputs = "";

		for(int i=0; i < global_array_variables.size(); i++) {
			gArrInputs += "_";
			if(i != global_array_variables.size()-1) gArrInputs += ",";
		}
		
		for(int i=0; i < global_variables.size(); i++) {
			gVarInputs += "_";
			if(i != global_variables.size()-1) gVarInputs += ",";
		}
		
		if(externFunction) {
			lArrInputs = "";
			lVarInputs = "_"; // for RetVal
			for(int i=0; i < externNParams; i++) 
				lVarInputs += ",i"; // everything else is input for extern function
		}
		else {
			Iterator<Variable> i = array_variables.iterator();
			while(i.hasNext()) {
				String v = i.next().getName();
				lArrInputs += (inputVars.contains(v))? "i": "_";
				if(i.hasNext()) lArrInputs += ",";
			}

			i = variables.iterator();
			while(i.hasNext()) {
				String v = i.next().getName();
				lVarInputs += (inputVars.contains(v))? "i": "_";
				if(i.hasNext()) lVarInputs += ",";
			}
		}

		stream.print(String.format("test_input_vars(%s,[%s],[%s],[%s],[%s]).\n", 
						funcName, gArrInputs, gVarInputs, lArrInputs, lVarInputs));
	}

	public void printVariableReferences() {
		Iterator<Variable> t = global_array_variables.iterator();
		String s = "";
		int count = 0;
		while(t.hasNext()) {
			Variable v = t.next();
			for(int i=0; i < clauseList.size(); i++)
				if(clauseList.elementAt(i).getReferencedVariables().contains(v)) count++;
			if(count >= 5)
				s += "\t" + v.getName() + ": " + count + "\n";
			count = 0;
		}
		t = global_variables.iterator();
		while(t.hasNext()) {
			Variable v = t.next();
			for(int i=0; i < clauseList.size(); i++)
				if(clauseList.elementAt(i).getReferencedVariables().contains(v)) count++;
			if(count >= 5)
				s += "\t" + v.getName() + ": " + count + "\n";
			count = 0;
		}
		t = array_variables.iterator();
		while(t.hasNext()) {
			Variable v = t.next();
			for(int i=0; i < clauseList.size(); i++)
				if(clauseList.elementAt(i).getReferencedVariables().contains(v)) count++;
			if(count >= 5)
				s += "\t" + v.getName() + ": " + count + "\n";
			count = 0;
		}
		t = variables.iterator();
		while(t.hasNext()) {
			Variable v = t.next();
			if(v.getName().compareTo("ReturnValue") == 0) continue;
			for(int i=0; i < clauseList.size(); i++)
				if(clauseList.elementAt(i).getReferencedVariables().contains(v)) count++;
			if(count >= 5)
				s = "\t" + v.getName() + ": " + count + "\n";
			count = 0;
		}
		if(s.compareTo("") != 0) {
			DEBUG.println("Variable references of " + getFuncName() + ":-");
			DEBUG.println(s);
		}
	}

} // end class ClauseFactory

/**
 * Variable Reference Table, used for compressing consecutive assignments. Author: Vijay
 */

class VariableReferenceTable
{
	private Map <String, Integer> vrt = new HashMap <String, Integer>();

	public void addReference(String var) {
		if(vrt.get(var) == null)
			vrt.put(var, 1);
		else
			vrt.put(var, vrt.get(var)+1);
	}

	public void forceRemoveReference(String var) { // forces to remove reference w/o checking
		if(vrt.get(var) != null) {
			if(vrt.get(var) == 1)
				vrt.put(var, null);
			else
				vrt.put(var, vrt.get(var)-1);
		}
	}

	public void removeReference(String var) {
		if(vrt.get(var) == null || vrt.get(var) == 1) {
			DEBUG.println("Warning: improper call to removeReference()");
			return;
		}
		vrt.put(var, vrt.get(var)-1);
	}

	public String getLatestReference(String var) {
		if(var.compareTo("_") == 0)
			return "_";
		if(vrt.get(var) == null)
			return Character.toUpperCase(var.charAt(0)) + var.substring(1);

		return Character.toUpperCase(var.charAt(0)) + var.substring(1) + "$" + vrt.get(var) + "$";
	}

	public String getPrevReference(String var) {
		if(var.compareTo("_") == 0)
			return "_";
		if(vrt.get(var) == null || vrt.get(var) == 1)
			return Character.toUpperCase(var.charAt(0)) + var.substring(1);

		return Character.toUpperCase(var.charAt(0)) + var.substring(1) + "$" + (vrt.get(var)-1) + "$";
	}

	public void clear() {
		vrt.clear();
	}
}

/**
 * Represents Safety goals. Author: Vijay
 */

/**
 * THIS CLASS HAS BEEN DEPRECATED AS OF 2-MAR-2010!
 * ALL SAFETY GOALS WILL BE COMPILED INTO "IF" STATEMENTS!
 */

class Safety
{
	private ClauseFactory factory;

	private Vector<String> safetyConditions_s;

	private String func;

	public Safety(ClauseFactory f, Vector<String> cond_s) {
		factory = f;
		safetyConditions_s = cond_s;
		func = factory.getFuncName();
	}

	public void printSafetyGoal(PrintStream stream)
	{
		String func = factory.getFuncName();
		String safety = "";
		
		safety += "init_safety_goal(" + func + "," +
					"SGA,SGV,SLA,SLV," + 
					"[" + factory.getGlobalArrays(false) + "]," +
					"[" + factory.getGlobalVars(false) + "]," +
					"[" + factory.getLocalArrays(false) + "]," +
					"[" + factory.getLocalVars(false) + "],[";

		for(int i = 0; i < safetyConditions_s.size(); i++) {
			safety += "[" + safetyConditions_s.elementAt(i) + "]";
			if(i != safetyConditions_s.size() - 1)
				safety += ",";
		}
		
		safety += "]):-\n\t" +
					"freshglobalarrays(SGA),\n\t" +
					"freshglobalvars(SGV),\n\t" +
					"freshlocalarrays(" + func + ", SLA),\n\t" +
					"freshlocalvars(" + func + ", SLV),\n\t" +
					"SGA = [" + factory.getGlobalArrays(true) + "],\n\t" +
					"SGV = [" + factory.getGlobalVars(true) + "],\n\t" +
					"SLA = [" + factory.getLocalArrays(true) + "],\n\t" +
					"SLV = [" + factory.getLocalVars(true) + "].\n";

		stream.print(safety);
	}

	public String negation(String s)
	{
		if(s.indexOf("<=") != -1)
			return s.replace("<=", ">");
		if(s.indexOf(">=") != -1)
			return s.replace(">=", "<");
		if(s.indexOf("<") != -1)
			return s.replace("<", ">=");
		if(s.indexOf(">") != -1)
			return s.replace(">", "<=");
		if(s.indexOf("=") != -1) // quick fix: for == case, just return < operator. the code above will take care of manually printing > operator.
			return s.replace("=", "<");
		else // should be unreachable
			DEBUG.println("If this prints, there is an error in printing safety conditions");
		return "";
	}
}

/**
 * Models blocks in the ClauseFactory. Author: Vijay
 */

class Block
{
	private ClauseFactory factory;

	// Data structures
	private int blockId;

	private Integer startPP = -1;

	private Integer endPP = -1;

	private boolean isLoop;

	private Vector<Integer> influencedIds = new Vector<Integer>();

	private TreeSet<Variable> conditionVariables = new TreeSet<Variable>();

	private TreeSet<Variable> referencedVariables = new TreeSet<Variable>();

	private String func = null; // to record if this block is a function or not. MUST be initialized to null.

	public Block(ClauseFactory f, int b, boolean l)
	{
		factory = f;
		blockId = b;
		isLoop = l;
	}

	public void setFunctionBlockName(String func) {
		this.func = func;
	}

	public String getFunctionBlockName() {
		return func;
	}

	public String toString() {
		return "b" + blockId;
	}

	public boolean equals(Object o) {
		if(this == o) return true;
		if(!(o instanceof Block)) return false;
		Block b = (Block) o;
		return this.blockId == b.blockId;
	}

	public int hashCode() {
		return 0;
	}

	public void addInfluencedId(Integer n) {
		influencedIds.add(n);
	}

	public void addCondVariable(Variable v) {
		conditionVariables.add(v);
	}

	public void addCondVariable(Collection<Variable> set) {
		conditionVariables.addAll(set);
	}

	public void addRefVariable(Variable v) {
		referencedVariables.add(v);
	}

	public void addRefVariable(Collection<Variable> set) {
		referencedVariables.addAll(set);
	}

	public void setStartPP(int s) {
		startPP = s;
	}

	public void setEndPP(int e) {
		endPP = e;
	}

	public int getBlockId() {
		return blockId;		
	}

	public String getStartPP() {
		if(startPP != -1) {
            if (OPTIONS.INC_ANALYSIS_COMPILATION)
			    return "" + startPP.toString();
            else
    			return "p" + startPP.toString();
        }
		return "_";
	}

	public String getEndPP() {
		if(endPP != -1) {
            if (OPTIONS.INC_ANALYSIS_COMPILATION)
    			return "" + endPP.toString();
            else
	    		return "p" + endPP.toString();
        }
		return "_";
	}

	public Vector<Integer> getInfluencedIds() {
		return influencedIds;
	}

	public String getIsLoop() {
		if(isLoop)
			return "l";
		return "nl";
	}

	public TreeSet<Variable> getReferencedVariables() {
		return referencedVariables;
	}

	public TreeSet<Variable> getReferencedGlobalVariables() {
		TreeSet<Variable> tmp = new TreeSet<Variable>();
		for(Variable v : referencedVariables)
			if(ClauseFactory.getGlobalVariables().contains(v) || ClauseFactory.getGlobalArrayVariables().contains(v))
				tmp.add(v);
		return tmp;
	}

	public TreeSet<Variable> getConditionVariables() {
		return conditionVariables;
	}

	/* Vijay - only used situationally (primarily for undoing last change in init_slicing_goals) */
	public void popInfluencedId() {
		influencedIds.removeElementAt(influencedIds.size()-1);
	}

	/* 
	 * Returns the influenced Ids of this block in a format
	*/
	public String toStringInfluencedIds()
	{
		String str = "[";

		Vector<Integer> excludedIdRange = factory.getExcludedIdRange();
		
		for(Integer inf_id : influencedIds) {
			if(excludedIdRange.contains(inf_id))
				continue;
			str += "i" + inf_id + ",";
		}

		if(str.endsWith(","))
			str = str.substring(0, str.length()-1);
		return str + "]";
	}


	/* Borrowed from Duc Hiep
	 * These functions return a list of "u"s and "nu"s stating whether the variable is a referenced variable 
	 * for this block
	*/
	public String updatedGlobalArrayList()
	{
		StringBuilder s = new StringBuilder();		
		Iterator<Variable> i = factory.getGlobalArrayVariables().iterator();

		while (i.hasNext()) {
			Variable v = i.next();
			String toAppend = "";
			toAppend = referencedVariables.contains(v) ? "u" : "n";
			s.append(toAppend);
			if (i.hasNext())
				s.append(","); // don't append comma after last var
		}
		return s.toString();
	}
	
	public String updatedArrayList() {
		StringBuilder s = new StringBuilder();
		Iterator<Variable> i = factory.getArrayVariables().iterator();
		
		while (i.hasNext()) {
			Variable v = i.next();
			String toAppend = "";
			toAppend = referencedVariables.contains(v) ? "u" : "n";
			s.append(toAppend);
			if (i.hasNext())
				s.append(","); // don't append comma after last var
		}
		return s.toString();
	}
	
	public String updatedGlobalVarList() {
		StringBuilder s = new StringBuilder();
		Iterator<Variable> i = factory.getGlobalVariables().iterator();

		while (i.hasNext()) {
			Variable v = i.next();
			String toAppend = "";
			toAppend = referencedVariables.contains(v) ? "u" : "n";
			s.append(toAppend);
			if (i.hasNext())
				s.append(","); // don't append comma after last var
		}
		return s.toString();
	}
	
	public String updatedVarList() {
		
		StringBuilder s = new StringBuilder();
		Iterator<Variable> i = factory.getVariables().iterator();

		while (i.hasNext()) {
			Variable v = i.next();
			String toAppend = "";
			toAppend = referencedVariables.contains(v) ? "u" : "n";
			s.append(toAppend);
			if (i.hasNext())
				s.append(","); // don't append comma after last var
		}
		return s.toString();		
	}
	
	public String toStringUpdatedVariables()
	{
		String returnStr = String.format("[%s],[%s],[%s],[%s]", updatedGlobalArrayList(), updatedGlobalVarList(), updatedArrayList(), updatedVarList());
		
		return returnStr;
	}

	/* Vijay
	 * These functions return a list of "c"s and "nc"s stating whether the variable is a condition variable 
	 * for this block
	*/
        public String conditionGlobalArrayList()
        {
                StringBuilder s = new StringBuilder();
                Iterator<Variable> i = factory.getGlobalArrayVariables().iterator();

                while (i.hasNext()) {
                        Variable v = i.next();
                        String toAppend = "";
                        toAppend = conditionVariables.contains(v) ? "u" : "_";
                        s.append(toAppend);
                        if (i.hasNext())
                                s.append(","); // don't append comma after last var
                }
                return s.toString();
        }

        public String conditionGlobalVarList() {
                StringBuilder s = new StringBuilder();
                Iterator<Variable> i = factory.getGlobalVariables().iterator();

                while (i.hasNext()) {
                        Variable v = i.next();
                        String toAppend = "";
                        toAppend = conditionVariables.contains(v) ? "u" : "_";
                        s.append(toAppend);
                        if (i.hasNext())
                                s.append(","); // don't append comma after last var
                }
                return s.toString();
        }

        public String conditionArrayList() {
                StringBuilder s = new StringBuilder();
                Iterator<Variable> i = factory.getArrayVariables().iterator();

                while (i.hasNext()) {
                        Variable v = i.next();
                        String toAppend = "";
                        toAppend = conditionVariables.contains(v) ? "u" : "_";
                        s.append(toAppend);
                        if (i.hasNext())
                                s.append(","); // don't append comma after last var
                }
                return s.toString();
        }

        public String conditionVarList() {

                StringBuilder s = new StringBuilder();
                Iterator<Variable> i = factory.getVariables().iterator();

                while (i.hasNext()) {
                        Variable v = i.next();
                        String toAppend = "";
                        toAppend = conditionVariables.contains(v) ? "u" : "_";
                        s.append(toAppend);
                        if (i.hasNext())
                                s.append(","); // don't append comma after last var
                }
                return s.toString();
        }

        public String toStringConditionVariables()
        {
			return String.format("[%s],[%s],[%s],[%s]", conditionGlobalArrayList(), conditionGlobalVarList(), conditionArrayList(), conditionVarList());
        }

}

class Hierarchy {

	int b1;
	int b2;
	ClauseFactory cf;

	public Hierarchy(int b1, int b2) {
		this.b1 = b1;
		this.b2 = b2;
		cf = Main.emitter.factories.elementAt(PrologEmitter.currentFac);
	}
	
	public int b1() {
		return b1;
	}

	public int b2() {
		return b2;
	}

	public String toString() {
		return "block_hierarchy(b" + b1 + ",b" + b2 + ").";
	}

	public ClauseFactory getFac() {
		return cf;
	}
}
