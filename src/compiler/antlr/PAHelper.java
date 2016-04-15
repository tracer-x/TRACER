package compiler;

/**
 * Pointer Analysis Helper class
 * Author: Vijay
**/

import java.io.*;
import java.util.*;
import java.util.regex.*;

import crystal.cfg.*;
import crystal.general.*;
import crystal.analysis.pointer.*;
import crystal.util.*;
import crystal.core.*;

public class PAHelper {

	// maps each variable to a heap
	private static TreeMap <String, Integer> heapMap = new TreeMap <String, Integer>();

	// stores & variables
	private static Vector <String> addrVars = new Vector <String>();

	// heaps containing aliased vars
	private static Vector <Integer> aliased = new Vector <Integer>();

	public static Integer nHeaps = 0;

	private static Set <Integer> usedHeaps = new TreeSet <Integer>();

	public static void initHeaps(String filepath) {
		if(!OPTIONS.ALIAS_ANALYSIS)
			return;

		heapMap.clear();
		addrVars.clear();
		nHeaps = 0;

		if(OPTIONS.GUI_RUN) 	// GUI would've run Crystal and formed serialized data, get it
			getSerializedCrystalData();
		else 					// run Crystal manually now and populate heapMap
			runCrystal(filepath);
	}

	// get serialized pointer-analysis info from Crystal	
	private static void getSerializedCrystalData() {
		FileInputStream fin = null;
		ObjectInputStream in = null;
		
		try {
			fin = new FileInputStream(OPTIONS.trunk_dir + "/runtime/heapmap.ser");
			in = new ObjectInputStream(fin);
			heapMap = (TreeMap <String, Integer>) in.readObject();

			fin = new FileInputStream(OPTIONS.trunk_dir + "/runtime/addrvars.ser");
			in = new ObjectInputStream(fin);
			addrVars = (Vector<String>) in.readObject();

			fin = new FileInputStream(OPTIONS.trunk_dir + "/runtime/nheaps.ser");
			in = new ObjectInputStream(fin);
			nHeaps = (Integer) in.readObject();
		}
		catch (IOException e) {
			FATAL.error("in trying to read serialized crystal data! " + e.getMessage());
		}
		catch (ClassNotFoundException e) {
			FATAL.error("in trying to read serialized crystal data! " + e.getMessage());
		}

		DEBUG.println("serialized crystal data read successfully!");
	}

	private static void runCrystal(String filepath) {
		String[] crystalArgs = new String[1];
		crystalArgs[0] = filepath;

		// set options and run crystal
		DEBUG.println("Running crystal pointer analysis on file " + filepath);

		Options.VERBOSITY = 20;
		Options.CFG = true;
		Options.CALL_GRAPH = true;
		Options.POINTER_ANALYSIS = true;
		PointerAnalysis.STEENSGAARD = true;
		crystal.Main.main(crystalArgs);

		DEBUG.println("Pointer analysis done!");

		for(List<CoreExpr> eqClass : PointerAnalysis.getEquivalenceClasses()) {
			nHeaps++;
			for(CoreExpr core : eqClass) {
				heapMap.put(core.toString(), nHeaps);
				if(core instanceof CoreAddrExpr)
					addrVars.add(core.toString());
			}
		}
		if(heapMap.size() > 0)		printHeapMap();
		if(addrVars.size() > 0)		printAddrVars();
	}

	public static void printHeapMap() {
		DEBUG.println("\t\t============= Heap map =============");
 		for(String var : heapMap.keySet())
			DEBUG.println("\t\t\t" + var + " : H$" + heapMap.get(var) + "$");
	}

	public static void printAddrVars() {
		DEBUG.println("\t\t============= Addr vars =============");
		for(String var : addrVars)
			DEBUG.println("\t\t\t" + var);
	}

	// deprecated and moved to PreprocessInfo. code still left here
	/*
	public static boolean isAddrVar(String func, String var) { // func can be GLOBAL too
		if(!OPTIONS.ALIAS_ANALYSIS)
			return false;
		if(func.startsWith("func_"))
			func = func.substring(5);
		if(addrVars.contains("&(" + func + "." + var + ")"))
			return true;
		return false;
	}
	*/

	public static String getHeap(String func, String var) { // func can be GLOBAL too
		if(!OPTIONS.ALIAS_ANALYSIS)
			return "H$$";
        if(OPTIONS.WP_COMPILATION && (var.contains("$VAR$") || var.contains("$ARG$"))) {
            func = var.substring(var.indexOf("func_"), var.indexOf('$'));
            if(var.contains("$VAR$"))
                var = var.substring(var.indexOf("$VAR$") + 5);
            else if(var.contains("$ARG$"))
                var = var.substring(var.indexOf("$VAR$") + 5);
            else FATAL.error("811124");
            var = var.substring(0, var.indexOf('$'));
        }
		if(func.startsWith("func_"))
			func = func.substring(5);
		if(heapMap.get(func + "." + var) == null) {
			heapMap.put(func + "." + var, 0);
			DEBUG.println(func + "." + var + " did not appear in pointer analysis. "
								+ "Assigning heap H$0$ for it");
		}
		else {
			Integer heap = heapMap.get(func + "." + var);
			if(heap != 0 && !aliased.contains(heap)) {
				DEBUG.println("H$" + heap + "$ is heap with aliased var");
				aliased.add(heap);
			}
		}
		usedHeaps.add(heapMap.get(func + "." + var));
		return "H$" + heapMap.get(func + "." + var) + "$";
	}

	public static String getHeap2(String func, String var) { // getHeap for addr vars
		if(!OPTIONS.ALIAS_ANALYSIS)
			return "H$$";
        if(OPTIONS.WP_COMPILATION && (var.contains("$VAR$") || var.contains("$ARG$"))) {
            func = var.substring(var.indexOf("func_"), var.indexOf('$'));
            if(var.contains("$VAR$"))
                var = var.substring(var.indexOf("$VAR$") + 5);
            else if(var.contains("$ARG$"))
                var = var.substring(var.indexOf("$VAR$") + 5);
            else FATAL.error("811124");
            var = var.substring(0, var.indexOf('$'));
        }
		if(func.startsWith("func_"))
			func = func.substring(5);
		if(heapMap.get("&(" + func + "." + var + ")") == null) {
			heapMap.put("&(" + func + "." + var + ")", 0);
			DEBUG.println("Warning: heap of &(" + func + "." + var + ")" + "could not be found in heap map! "
								+ "Assigning heap H$0$ for it");
		}
		else {
			Integer heap = heapMap.get("&(" + func + "." + var + ")");
			if(heap != 0 && !aliased.contains(heap)) {
				DEBUG.println("H$" + heap + "$ is heap with aliased addr");
				aliased.add(heap);
			}
		}
		usedHeaps.add(heapMap.get("&(" + func + "." + var + ")"));
		return "H$" + heapMap.get("&(" + func + "." + var + ")") + "$";
	}

	public static String getHeap3(String var) { // getHeap for function pointers
		if(!OPTIONS.ALIAS_ANALYSIS)
			return "H$$";
		if(heapMap.get("&(" + var + ")") == null) {
			heapMap.put("&(" + var + ")", 0);
			DEBUG.println("Warning: heap of function pointer &(" + var + ")" + "could not be found in heap map! "
								+ "Assigning heap H$0$ for it");
		}
		usedHeaps.add(heapMap.get("&(" + var + ")"));
		return "H$" + heapMap.get("&(" + var + ")") + "$";
	}

	// returns whether the generic heap H$0$ is present
	public static boolean heapZero() {
		return heapMap.values().contains(0);
	}

	public static Vector<String> getHeapVars() {
		Vector <String> heapVars = new Vector <String>();
		if(!OPTIONS.ALIAS_ANALYSIS) {
			heapVars.add("H$$");
			return heapVars;
		}
		for(int i=1; i <= nHeaps; i++)
			if(usedHeaps.contains(i))
				heapVars.add("H$" + i + "$");
		if(heapZero())
			heapVars.add("H$0$");
		return heapVars;
	}

	// produces a heap -> var map that only consists of alias'd vars
	// (just used to print the alias predicate)
	public static Map <String, Vector <String>> getAliasMap() {
		Map <String, Vector <String>> ret = new TreeMap <String, Vector <String>>();

		for(String var : heapMap.keySet()) {
			Integer h = heapMap.get(var);
			if(aliased.contains(h)) {
				String heap = "H$" + h + "$";
				if(ret.get(heap) == null)
					ret.put(heap, new Vector<String>());

				ret.get(heap).add(var);	
			}
		}
		
		return ret;
	}

    // given a heap (eg H$1$), return variables in the heap's equivalence class
    public static Vector<String> getEquivalenceClass(String h) {
        int idx1 = h.indexOf('$') + 1;
        int idx2 = h.lastIndexOf('$');
        Integer heap = Integer.parseInt(h.substring(idx1, idx2));
        Vector<String> eq = new Vector<String>();

        for(String var : heapMap.keySet()) {
            if(heapMap.get(var) == heap && isNormalVar(var))
                eq.add(var);
        }
        return eq;
    }

    static boolean isNormalVar(String var) {
        return var.matches("\\w+\\.\\w+") || var.matches("\\&\\(\\w+\\.\\w+\\)");
    }
}
