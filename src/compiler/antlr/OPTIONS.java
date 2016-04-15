package compiler;

public class OPTIONS {

	/* ===============================
		true : add a new arg to the end of every trans of the form b(v(L), X, Y, Z)
			   where L is list of variables and X, Y, Z are numbers representing 
			   delimiting indices of global arrays, global vars and local arrays in L
	   =============================== */
        /* ==================================
	   Obsolete: do not use. it should be always to false 
	   ==================================
	*/
	public static boolean NEWARG = false;

	/* ===============================
		true : compilation will follow LP syntax used in Swi-Prolog, Ciao, etc.
		false: compilation will follow CLP(R) syntax
	   =============================== */
	public static boolean PROLOG_SYSTEM = false;

	/* ===============================
		true : allow non-linear constraints
		false: do not allow non-linear constraints (will be replaced with linears)
		NOTE: this flag is UNSOUND. It should be used only temporary.
	   =============================== */
        /* ==================================
	   Obsolete: do not use. it should be always true
	   ==================================
	*/
	public static boolean ALLOW_NONLINEAR = true;

	/* ===============================
	   0 - no limit
	   N - maximum number of constraints for each transition. very rudimentary.
	       use only for special cases like initialization routines
	   =============================== */
	public static int MAX_CONSTRAINTS = 50;

	/* =============================== 

           true : use alias analysis to partition arrays (heap is modeled as an
	          array).  
           =============================== */
	public static boolean ALIAS_ANALYSIS = false;

	/* =============================== 
           0: no abstract domain
		   1: basic (box + octagon)
		   2: PPL loose convex
		   3: polka loose convex
		   4: PPL strict convex
           =============================== */
	public static Integer ABSTRACT_DOMAIN = 0;

	/* =============================== 
           true: run CIL (would've already been run in main(), but just to record we're running with CIL). NOTE: by default true.
           =============================== */
	public static boolean RUN_CIL = true;

	/* =============================== 
           true : use Rybalchenko's heavyweight tool InvGen to infer even stronger invariants
           =============================== */
	public static boolean HEAVYWEIGHT_INVARIANTS = false;

	/* ===============================
	   true : translate statements like x = a where a is an array variable to x = & a[0]
	   =============================== */
        /* ==================================
	   Obsolete: do not use. it should be always false
	   ==================================
	*/
	public static boolean TRANSLATE_ARRAYVARS = false;

	/* ===============================
	   true : include array/pointer constraints (arrassign, ref
          	   etc) in compilation
	   =============================== */
	public static boolean INCLUDE_ARRAY_CONSTRAINTS = false;

	/* ===============================
	   true : include array/pointer constraints ONLY in symbolic
	          (requires INCLUDE_ARRAY_CONSTRAINTS to be true)
                  The purpose of this is to avoid the cost of
                  evaluated array constraint but still have the
                  symbolic array constraints so that WCET and slicing
                  can reason about them to produce the answer. Of
                  course, since there is no evaluated array
                  constraints, the array solver should be off when
                  this option is used.
	   =============================== */
	public static boolean INCLUDE_ONLY_SYM_ARRAY_CONSTRAINTS = false;

	/* ===============================
	   true : ignore errors related to complex structs during compilation.
	          "ignore" meaning to continue parsing and compile whatever is
			  causing the error as "_".
	   =============================== */
	public static boolean IGNORE_STRUCT_ERRORS = false;

	/* ===============================
	   true : compile arrays as pointers on the heap
           Note: it should be always true. Otherwise, the results of
                 TRACER could be wrong. For instance,
                tests/SAFETY/test-alias-3.c
	   =============================== */
        public static boolean ARR_TO_PTR = true; 

	/* ===============================
	   true : compile equality (x=y) as two inequalities (x>=y /\ y>=x)
	   =============================== */
        public static boolean EQ_TO_INEQ = false; 

	/* ===============================
	   true : print debug info
	   =============================== */
	public static boolean PRINT_DEBUG_INFO = false;

	/* ===============================
	   true : include block hierarchy/2 facts in the compiled
 	          program. It is needed for slicing.
	   =============================== */
	public static boolean INCLUDE_BLOCK_HIERARCHY = false;

	/* ===============================
	   true : include dict and globaldict predicates
	   =============================== */
	public static boolean INCLUDE_DICT = true;

	/* ===============================
	   true : include test_input_vars/5 facts in the compiled
   	          program. It is needed for testing.
	   =============================== */
	public static boolean INCLUDE_TEST_INPUT_VARS = false;

	/* ===============================
	   true : remove empty transitions in compiled program, possibly reducing its size
	   =============================== */
	public static boolean REMOVE_EMPTY_TRANS = false;

	/* ===============================
	   false: normal compilation
	   true : x < y replaced with  x+1 <= y. x > y replaced with x >= y+1
	   =============================== */
	public static boolean CONVERT_STRICT_INEQUALITIES = false;

	/* ===============================
	   true: compile array indices using TMP_IDX# variables
	   =============================== */
	public static boolean COMPILE_IDX_VARS = false;

	/* ===============================
	   true : reverse the order of trans predicates in output
	   =============================== */
	public static boolean REVERSE_TRANS_ORDER = false;

	/* ===============================
	   true : random order of trans predicates in output
	   =============================== */
	public static boolean RANDOM_TRANS_ORDER = false;

	/* ===============================
	   true : remove unused references in transitions
	   =============================== */
	public static boolean REMOVE_UNUSED_REFS = true;

	/* ===============================
	   true : convert all formal params and return values to global
	          and rename accordingly
	   =============================== */
	public static boolean WP_COMPILATION = false;

	/* ===============================
	   true : don't compile TRACER_INIT function, its meta-data and its call from main
              print PPs in trans without the "p"
	   =============================== */
	public static boolean INC_ANALYSIS_COMPILATION = false;

	/* ===============================
	   true : slices the program before compilation
	   =============================== */
	public static boolean SLICE_BEFORE_COMPILATION = false;

	/* path of trunk directory. will be inferred automatically from $TRACER_PATH env var */
	public static String TRUNK_PATH;
	public static String LIB_PATH;

	/* ----------------- these 3 for debugging purposes only ------------------- */
	public static boolean PRINT_COMPILER_DATA = false;
	public static String COMPILER_DATA_PATH = "/home/vijay/Desktop";
	public static boolean OLD_BLOCKS = false;

	public static boolean DECOMP_MODE = false;

	/* ===============================
	   true : using GUI to run compilation
	   false: using command line
	   =============================== */
	public static boolean GUI_RUN = false;

	/* ===============================
	   holds the value of the trunk directory. this will be set by GUI. do not modify!
	   =============================== */
	public static String trunk_dir = null;
}
