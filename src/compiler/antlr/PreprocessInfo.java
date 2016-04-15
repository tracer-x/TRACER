package compiler;

/**
 * Pointer Analysis Helper class
 * Author: Vijay
**/

import java.util.*;

public class PreprocessInfo {

	public static Vector<String> addrVars = new Vector<String>();

	public static Vector<String> addrArr = new Vector<String>();

	public static Vector<String> addrGlobalArr = new Vector<String>();

	public static Vector<String> funcPtrs = new Vector<String>();

	public static Vector<String> realFuncs = new Vector<String>();

	public static Vector<String> callPPs = new Vector<String>();

	public static Vector<String> multiCallPPs = new Vector<String>();

	public static Vector<Variable> globalVars = new Vector<Variable>();

	public static void addGlobalVar(Variable v) {
		globalVars.add(v);
	}

	public static Vector<Variable> getGlobalVars() {
		return globalVars;
	}

	public static void addCallPP(String func, int PP) {
		if(!callPPs.contains(func + ":" + PP))
			callPPs.add(func + ":" + PP);
	}

	public static boolean isCallPP(String func, int PP) {
		return callPPs.contains(func + ":" + PP);
	}

	public static void addMultiCallPP(String func, int PP) {
		if(!multiCallPPs.contains(func + ":" + PP))
			multiCallPPs.add(func + ":" + PP);
	}

	public static boolean isMultiCallPP(String func, int PP) {
		return multiCallPPs.contains(func + ":" + PP);
	}

	public static void addRealFunc(String func) {
		if(func == null || func.contains("H$$"))
			FATAL.error("PREPROCESSOR: null func or H$$ func tried to be added as real func");
		if(!realFuncs.contains(func))
			realFuncs.add(func);
	}

	public static boolean isRealFunc(String func) {
		if(func == null)
			FATAL.error("null func tried to be check for realness");
		if(!realFuncs.contains(func))
			return false;
		return true;
	}

	public static void addAddrVar(String func, String var) { // func can be GLOBAL too
		if(!PrologEmitter.PREPROCESS && !OPTIONS.INCLUDE_ARRAY_CONSTRAINTS)
			return;
		// sanity check (see that you are not adding any heap)
		if(var.startsWith("H$"))
			FATAL.error("heap variable " + var + " in function " + func + " tried to be added as &-var");

		String s = func + "." + var;
		if(!addrVars.contains(s)) {
			DEBUG.println("PREPROCESSOR: adding " + func + "." + var + " to &-vars");
			addrVars.add(s);
		}
	}

	public static boolean isAddrVar(String func, String var) { // func can be GLOBAL too
		if(PrologEmitter.PREPROCESS || func == null || var == null || !OPTIONS.INCLUDE_ARRAY_CONSTRAINTS)
			return false;

		return addrVars.contains(func + "." + var);
	}

	public static void addAddrArr(String func, String var) {
		if(!PrologEmitter.PREPROCESS && !OPTIONS.INCLUDE_ARRAY_CONSTRAINTS)
			return;
		// sanity check
		if(var.contains("$"))
			FATAL.error("array " + var + " in function " + func + " tried to be added as &-var");

		String s = func + "." + var;
		if(func.compareTo("GLOBAL") == 0) {
			if(!addrGlobalArr.contains(s))
				addrGlobalArr.add(s);
		}
		else {
			if(!addrArr.contains(s))
				addrArr.add(s);
		}
	}

	public static boolean isAddrArr(String func, String var) {
		if(PrologEmitter.PREPROCESS || func == null || var == null || !OPTIONS.INCLUDE_ARRAY_CONSTRAINTS)
			return false;

		String s = func + "." + var;
		if(func.compareTo("GLOBAL") == 0)
			return addrGlobalArr.contains(s);
		else
			return addrArr.contains(s);
	}

	public static void addFuncPtr(String func) {
		if(PrologEmitter.PREPROCESS && !funcPtrs.contains(func))
			funcPtrs.add(func);
	}

	public static Vector<String> getFuncPtrs() {
		return funcPtrs;
	}
}
