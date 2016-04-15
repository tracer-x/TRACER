package crystal.general;

import java.util.*;

/** Global options in the Crystal framework. */
public class Options {

	/** The program name. */
	public static String PROGNAME = "crystal";
	
	/** The verbosity level. */
	public static int VERBOSITY = 1;

	/** The indentation. */
	public static String INDENT = "   ";	

	/** If true, print out C code */
	public static boolean EMIT_C = false;

	/** If true, print out CFGs to dot files */
	public static boolean EMIT_DOT = false;

	/** If true, build the control-flow graphs. */
	public static boolean CFG = true;

	/** If true, build the call graph */
	public static boolean CALL_GRAPH = false;

	/** If true, run the pointer analysis. 
	 *  See the PointerAnalysis package for pointer analysis options
	 *  (e.g., Steensgaard vs One-Level Flow, and field-sensitive vs 
	 *   field-based vs field-insensitive analysis.) */
	public static boolean POINTER_ANALYSIS = false;
	
	/** If true, the system will automatically identify allocator 
	 *  wrappers and will add them to the allocNames list below. */
	public static boolean ALLOC_WRAPPER_DETECTION = false;

	/** If true, report line numbers in source (not preprocessed) files. */
	public static boolean REPORT_SOURCE = true;

	/** If true, structure assignments are translated into sequences 
	 * of field assignments. */
	public static boolean DISMANTLE_STRUCTURE_ASSIGNMENTS = true;

	/** If true, generate explicit assignments for the initialization
	 *  of global variables. The initialization code is placed in startup 
	 *  functions, which are called at the beginning of main. */
	public static boolean STARTUP_FUNCTIONS = true;

	/** Cleanup declarations printed out in the output C files, 
	 * by printing only the variables, functions, and types that  
	 * are needed by the code in that file. */
	public static boolean PURGE_DECLARATIONS = true;
	
	/** Merge all input files into a single output file. */
	public static boolean MERGE_FILES = false;
	
	/** Special prefixes and names */
	public static final String TEMP_PREFIX           = "_t_";
	public static final String ANONYM_STRUCT_PREFIX  = "__anonym_";
	public static final String ANONYM_DECL_PREFIX    = "__anonym_decl_";
	public static final String FILE_STARTUP_PREFIX   = "__crystal_init_";
	public static final String SHADOW_ARG_PREFIX     = "shd$";
	public static final String SHADOW_RET_PREFIX     = "ret$";

		
	/** Allocation function names */
	public static final List<String> allocNames;
	public static final List<String> freeNames;

	static {
		allocNames = new ArrayList<String>();
		allocNames.add("malloc");
		allocNames.add("calloc");
		allocNames.add("xmalloc");
		allocNames.add("xcalloc");
		allocNames.add("strdup");
		allocNames.add("strndup");

		freeNames = new ArrayList<String>();
		freeNames.add("free");
		freeNames.add("xfree");
	}
}

