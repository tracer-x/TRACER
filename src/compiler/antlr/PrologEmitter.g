header
{
package compiler;
}
{
import java.io.*;
import antlr.CommonAST;
import antlr.DumpASTVisitor;
import java.util.*;
import java.util.regex.*;
}

                     
class PrologEmitter extends TreeParser;
 

options
        {
        importVocab = GNUC;
        buildAST = false;
        ASTLabelType = "TNode";

        // Copied following options from java grammar.
        codeGenMakeSwitchThreshold = 2;
        codeGenBitsetTestThreshold = 3;
        }


{


	    /* ===============================
	        true :
	            in the absence of else block, the opposite condition is added to if block
	            block_hierarchy/2 will be disconnected (i.e., no root block)
	        false:
	            in the absence of else block, the opposite condition is added to parent
	            block_hierarchy/2 will be connected (root block b0)
	       ===============================
       */
       public final boolean OLD_CHANGES = false;


    public void reportError(RecognitionException ex) {
        if ( ex != null)   {
            System.err.println("ANTLR Tree Parsing RecognitionException Error: " + ex.getClass().getName() + " " + ex );
            ex.printStackTrace(System.err);
        }
    }   
    public void reportError(NoViableAltException ex) {
        System.err.println("ANTLR Tree Parsing NoViableAltException Error: " + ex.toString());
        TNode.printTree( ex.node );
        ex.printStackTrace(System.err);
    }
    public void reportError(MismatchedTokenException ex) {
        if ( ex != null)   {
            TNode.printTree( ex.node );
            System.err.println("ANTLR Tree Parsing MismatchedTokenException Error: " + ex );
            ex.printStackTrace(System.err);
        }
    }
    public void reportError(String s) {
        System.err.println("ANTLR Error from String: " + s);
    }
    public void reportWarning(String s) {
        System.err.println("ANTLR Warning from String: " + s);
    }
    protected void match(AST t, int ttype) throws MismatchedTokenException {
        //DEBUG.println("match("+ttype+"); cursor is "+t);
        super.match(t, ttype);
    }
    public void match(AST t, BitSet b) throws MismatchedTokenException {
        //DEBUG.println("match("+b+"); cursor is "+t);
        super.match(t, b);
    }
    protected void matchNot(AST t, int ttype) throws MismatchedTokenException {
        //DEBUG.println("matchNot("+ttype+"); cursor is "+t);
        super.matchNot(t, ttype);
    }
    public void traceIn(String rname, AST t) {
        traceDepth += 1;
        for (int x=0; x<traceDepth; x++) DEBUG.print(" ");
        super.traceIn(rname, t);   
    }
    public void traceOut(String rname, AST t) {
        for (int x=0; x<traceDepth; x++) DEBUG.print(" ");
        super.traceOut(rname, t);
        traceDepth -= 1;
    }
    public int getCurrPP () {
        return currPP ;
    }
	private int crashcount = 0;
    int traceDepth = 0;
    private Number currentInitializerValue ;
    private String currentID ;
    private boolean inDeclaration = false ;
	private boolean inRHSOfDeclaration = false;
    private boolean inStatement = false ;
    private boolean nextVarsNeeded = false ;
    private boolean possibleINC = false ;
    private boolean inLHSOfAssign = false;
    private boolean inAssign = false;
    private String assignLHSVar = "";
    private String assignLHSVar_forInput = "";
	private String prevArtificialVar = "";
	private String prevSymbolicVar = "";
	private boolean NUMERICTYPE = false;
    private boolean arrOnLHS = false;
    private boolean inParamDec = false;
    private boolean inFuncPtrDec = false;
	private boolean nestedDeclarator = false;
	public Vector<String> backedge = new Vector<String>();

	public static Vector<String> liftedVars = new Vector<String>();

	public Vector<decompiler.Vertex> endifs = new Vector<decompiler.Vertex>();

	// supporting nested function calls in 1 statement
	Stack<Vector<Expression>> nestedCallExprs = new Stack<Vector<Expression>>();
	int tmpCallVarId = 0;

	// supporting calls in block conditions
	Map<String, Integer> condCallVarCount = new TreeMap <String, Integer>();

	// function name -> clause factory mapping
	public Map <String, ClauseFactory> factoryMap = new TreeMap <String, ClauseFactory>();
    
    // by Duc Hiep
    boolean updatingArray = false;
    private boolean IDisArray = false;
    private boolean isDelayed = false; // for compiling for loop

    // Vijay - for generating safety and slicing clauses
    private Boolean inSafety = false;
    private Boolean inSliceFunction = false; // for _SLICE's DEFINITION
    private Boolean slicing = false; // for CALL to _SLICE

    private Boolean inAssume = false;

	private Boolean inAbstract = false;

	// tells if a block ended with control break
	// control break is either "break", "return" or "continue"
	private Stack<Boolean> controlBreakingEnd = new Stack<Boolean>();
	private Stack<Boolean> returnStack = new Stack<Boolean>();

    // sanity checks for safety and slicing goals
    private int slicingSanityCheck = 0;
    
    // keeps track of blocks
    private int blockId = -1;

	// supporting calls in conditions
	private Stack<Boolean> loopCondHasCall = new Stack<Boolean>();
	private Stack<Integer> condCallPP = new Stack<Integer>();

	public static Vector<String> calledFuncs = new Vector<String>();
	public Map<String, TreeSet<String>> callMap = new HashMap<String, TreeSet<String>>();

	// global initializations
	Map<String, Expression> globalInit = new HashMap<String, Expression>();
	Map<String, Vector<Expression>> globalArrInit = new HashMap<String, Vector<Expression>>();
	public static int emptyClauseId = -1;
    
    // keeps track of clause Ids
    private int tId = 1;

	boolean firstStmt = false;

	Vector<CallInfo> callSanity = new Vector<CallInfo>(); // sanity check for calls

	// to identify system calls
	private TreeSet<String> systemCalls = new TreeSet<String>();
	private boolean functionDecl = false, externDecl = false;

	// type of blocks
	private Integer FUNCTION = 0, IF = 1, SWITCH = 2, WHILE = 3, FOR = 4, DO = 5;

	// denotes what type of block is on top of the stack
	private Stack<Integer> blockType = new Stack<Integer>();

	// keeps track of functions with variable arguments like printf(char *, ...)
	private TreeMap<String, Integer> varArityFuncs = new TreeMap<String, Integer>();

    // Vijay - for compressing assignments
    private TreeSet<String> assignGroupVars = new TreeSet<String>();

    // to be used locally in unaryExpr and posfixExpr
    String arrIndex = "";
    String arrowIndexForINC = null;
    String SarrowIndexForINC = null;
    String arrSymbolic = "";

	// for decompiler abort
	private boolean inAbort = false;
	public Map<decompiler.Vertex, String> aborts = new HashMap<decompiler.Vertex, String>();
    
    private int bracDepth = 0;
	private int starDepth = 0;
	private int arrowDepth = 0;

    private String assignArrInd;
    private String assignArrIndSymbolic;
    private String assignArrInd_replace = "";
    private String assignArrIndSymbolic_replace = "";
    private int currPP = 0 ;
	private String currStruct = null;
	private int currAssignPP = 0;
    private int currClause = -1 ;
	private int addrefCount = 0;
    TreeMap<Pair, String> ArrRefToVar = new TreeMap<Pair, String>();
	TreeMap<String, Integer> ArrToCount = new TreeMap<String, Integer>();

	private int numCall = 0;
    private int numTempVar = 1;

	private String globalArrIndex = "";
	private String globalArrSymbolic = "";

	// used for & as address
	private boolean inForInitialization = false;
	private boolean addSymbolicReference = false;
	private String symbolicReference = "";

    // List of expressions (function call arguments)
	private Vector<Expression> explist = null;
	private Vector<Expression> opplist = null;
	private Vector<String> varlist = new Vector<String>();
	private Expression ref_expr = null;
	private boolean recordFuncReturnType = false;

	private String structDefName = null;
	private boolean inStructDef = false;
	private boolean structVar = false;
	private int structMemInd = 0;
	private String structDec = "";
	private String currChainStructVar = "";

	private Stack<Integer> arrayDimensions = new Stack<Integer>();
	private Stack< Vector<String> > multiDimArrayIndices = new Stack< Vector<String> >();
	private Stack< Vector<String> > multiDimArrayIndices_s = new Stack< Vector<String> >();

    // Added to distinguish syntactic components within and
    // outside of functions.
    public static boolean inFunction = false;

    // Added to store global variables
	private Vector<Variable> globalVariables = new Vector<Variable>();

	// support variables with same name in different scopes
	public static Map<String, Stack<Integer>> varScopes = new HashMap<String, Stack<Integer>>();
	public static int scopeCnt = 0;
	
    // By Duc Hiep
    // Added to store global array variables
    private Vector<Variable> globalArrayVariables = new Vector<Variable>();
    
    // Flag to denote whether we're in switch statement
    private boolean inSwitch = false;
	private boolean firstCase = true;
	private Stack<Boolean> hasBreak = new Stack<Boolean> ();

    // Stack to store the escape (break) program points, e.g.,
    // when breaking from while, for, switch, etc.
    private Stack<Integer> breakContext = new Stack<Integer>();

	// unfolder req: break/1
	private Vector<Integer> breakPredicates = new Vector<Integer>();

	// Stack to store program points for "continue"
    private Stack<Integer> continueContext = new Stack<Integer>();

	private Stack<Expression> forIncrements = new Stack<Expression>();

    // Start program point of switch statement
    private Stack<Integer> switchStartPP = new Stack<Integer>();

	// stack for holding the "text" of switch(...) to be used by decompiler
	private Stack<String> switchExprText = new Stack<String>();

	private Stack<Vector<Integer>> defCondCases = new Stack<Vector<Integer>>();
    private Stack<Boolean> defaultPresent = new Stack<Boolean>();

    // Exit program point of switch statement
    private int switchExitPP;

    // Switch expression placeholder
    private Stack<Expression> switchExpr = new Stack<Expression>();

	private Vector<Expression> arraySize = new Vector<Expression>();

	private Map<String,Vector<Integer>> aliasArraySize = new HashMap<String, Vector<Integer>>();

    // Switch symbolic expression placeholder
    private Stack<String> switchSymbolicExpr = new Stack<String>();

    // The target program point of the last return statement
    private int lastReturnNextPP = -1;

    // Start program point of while loop
    private Stack<Integer> whileStartPP = new Stack<Integer>();

    // Start program point of for loop
    private Stack<Integer> forStartPP = new Stack<Integer>();
    
    // Start program point of for loop
    private Stack<Integer> doStartPP = new Stack<Integer>();

	// list of clauseIds of continue and break clauses for do-while loop
	private Stack<Vector<Integer>> delayedContinueClauses = new Stack<Vector<Integer>>();
	private Stack<Vector<Integer>> delayedBreakClauses = new Stack<Vector<Integer>>();

    // Vijay - information for block hierarchy
    private Vector<Hierarchy> hierarchy = new Vector<Hierarchy>();
    private Stack<Integer> blockStack = new Stack<Integer>();
    private Stack<Boolean> hasChildren = new Stack<Boolean>();

    // Vijay - init_slicing_goals
    public Vector<Slice> sliceGoals = new Vector<Slice>();

	private Vector<Abstraction> abstractions = new Vector<Abstraction>();

    // for pointers
    private boolean varIsPointer = false;
    private boolean ptrOnLHS = false;

	// for shorthand assignments (like +=)
	private String shorthandRef = null, shorthandRef_s = null;
	private boolean inLHSOfShorthandAssign = false;

    // Start program point of if conditional
    private Stack<Integer> ifStartPP = new Stack<Integer>();

    // End program point of the body of if conditional
    // The start of the "else" body should be this value + 1
    private Stack<Integer> ifBodyEndPP = new Stack<Integer>();

	// Vijay - supporting goto statements
	private Map <Integer, String> gotoStatements = new TreeMap <Integer, String> ();
	private Map <String, Integer> labels = new TreeMap <String, Integer> ();

    private Map<Integer,Integer> crest_branches = new TreeMap<Integer,Integer>();

	private String nestedStructDeclName = "";
	private String structDeclName = "";
	public static int currentFac = -1;
	private int mainFac = -1;
	private boolean typedefVar = false;

	public Vector<ClauseFactory> factories = new Vector<ClauseFactory>();

	private Vector<Integer> marked = new Vector<Integer>();

	public TNode parseNode = null;

	// denotes if the compiler is in preprocessing mode
	public static boolean PREPROCESS = false;

	// note: resets STATIC data only!
	public static void reset() {
		// local
		calledFuncs = new Vector<String>();
		emptyClauseId = -1;
		inFunction = false;
		varScopes = new HashMap<String, Stack<Integer>>();
		scopeCnt = 0;
		currentFac = -1;

		// ClauseFactory
		ClauseFactory.reset();

		// GlobalDef
		GlobalDef.reset();

		// StructInfo
		StructInfo.reset();
	}

	public void initialize(){
		traceDepth = 0;
    	currentInitializerValue = 0;
    	String currentID = null;
    	inDeclaration = false ;
    	inStatement = false ;
		inSliceFunction = false;
    	nextVarsNeeded = false ;
    	inLHSOfAssign = false;
    	arrOnLHS = false;
    	inParamDec = false;
		inFuncPtrDec = false;
		varIsPointer = false;
	// Duc Hiep
	IDisArray = false;
	isDelayed = false;
	// reset the id
	ClauseFactory.cid = 1;
	
    	bracDepth = 0;
		starDepth = 0;
		arrowDepth = 0;
    	assignArrInd = null;
	assignArrIndSymbolic = null;
    	currPP = 0 ;
		currAssignPP = 0;
		recordFuncReturnType = false;

//        DEBUG.println(String.format("CurrPP: %d", currPP));

    	currClause = -1 ;
//    	ArrRefToVar = null;
//		ArrToCount = null;
		explist = null;
		ref_expr = null;

		numCall = 0;
        numTempVar = 1;

		structDefName = null;
		inStructDef = false;
		inAssign = false;
		structMemInd = 0;
		structDec = "";
		structVar = false;
		externDecl = false;
		typedefVar = false;
		structDeclName = "";
		
		currentFac++;
		addrefCount = 0;
		factories.add(new ClauseFactory());
        // DEBUG.println(String.format("Added Factory %d", currentFac));
	}

    //=========================================================================
    // The constraint for "default:" case of switch statement, as 
    // learned from "case:" statements before the "default:".
    //=========================================================================

    private Stack<Expression> switchDefaultCondition = new Stack<Expression>();

    private void initDefaultCondition()
    {
        switchDefaultCondition.push(new Expression(Expression.DISJUNCTION));
    }

    private void defaultAddOpposite(Expression e)
    {
        Expression top_disjunction;

        if (switchDefaultCondition.size() > 0) {
            switchDefaultCondition.peek().restrict(e);
        }
    }

    private void removeDefaultCondition()
    {
        switchDefaultCondition.pop();
    }

    private Expression currentDefaultCondition()
    {
        return switchDefaultCondition.peek();
    }

	public String localToGlobalVar(String func, int num) {
		return Character.toUpperCase(func.charAt(0)) + func.substring(1) + "$ARG$" + num;
	}

    Map<String,String> tmpCilMap = new TreeMap<String,String>();
    int tmpCilVarNum = 0;
    int maxTmpCilVarNum = 0;

    String getNewTmpCilVar() {
        tmpCilVarNum++;
        if(tmpCilVarNum > maxTmpCilVarNum)
            maxTmpCilVarNum = tmpCilVarNum;
        return "CIL_Tmp" + tmpCilVarNum;
    }

    void clearTmpCilVar() {
        tmpCilVarNum = 0;
    }

	private String getTmpCallVar() {
		tmpCallVarId++;
		return "Tmp_Call" + tmpCallVarId + "_";
	}

	int tmpIdxVarId = 0;
	Map<String,String> tmpIdxVarMap = new HashMap<String,String>();
	Stack<Vector<Expression>> condArrayIndexExps = new Stack<Vector<Expression>>();
	Stack<Vector<String>> condArrayIndexVars = new Stack<Vector<String>>();

	ClauseFactory Factory() {
		return factories.elementAt(currentFac);
	}

	private String getTmpIdxVar() {
		tmpIdxVarId++;
		return "Tmp_IDX" + tmpIdxVarId + "_";
	}

	boolean idx_var_nextNameNeeded() {
		return Factory().inCondition || Factory().inSwitchCondition || inSafety || inAssume;
	}

	String insert_intermediate_index_var(String ex, String symb) {
		if(!OPTIONS.COMPILE_IDX_VARS) return "";
		if(tmpIdxVarMap.containsKey(ex) && !idx_var_nextNameNeeded())
			return tmpIdxVarMap.get(ex);

		/* =============== insert intermediate index variable =============== */
		ClauseFactory factory = Factory();
		String idx_var = getTmpIdxVar();
		String idx_nv = factory.getNextVarName(idx_var);
		String idx_symbnv = factory.getSymbolicNextVarName(idx_var);
		
		String idx_exstr = idx_nv + "=" + ex;
		String idx_symbStr = "assign(" + idx_symbnv + "," + symb + ")";

		if(factory.inCondition || factory.inSwitchCondition || inSafety || inAssume) {
			condArrayIndexExps.peek().add(new Expression(idx_exstr,idx_symbStr));
			condArrayIndexVars.peek().add(idx_var);
		}
		else {
			factory.addConstraint(currClause, idx_exstr);
			factory.addSymbolicConstraint(currClause, idx_symbStr);
			factory.clauseRefVar(currClause, idx_var);
			assignGroupVars.add(idx_var);
		}

		if(!factory.getVariables().contains(new Variable(idx_var)))
			factory.addVariable(idx_var, 0);
		tmpIdxVarMap.put(ex, idx_var);
		/* =============== insert intermediate index variable =============== */

		return idx_var;
	}

	private String getCondCallVar(String func) {
		if(condCallVarCount.get(func) == null)
			condCallVarCount.put(func, 0);
		condCallVarCount.put(func, condCallVarCount.get(func)+1);
		return "ConCall_" + condCallVarCount.get(func) + "_";
	}

    // =========================================================================

    public String getCallRetVar()
    {
    	return "RV" + (new Integer(numCall++)).toString();
    }

    public String getCallTempVar()
    {
        return "_V" + (new Integer(numTempVar++)).toString();
    }
    /*
    class Pair implements Comparable{
		public Comparable a;
		public Comparable b;
		public Pair(Comparable ai, Comparable bi){
			a = ai;
			b = bi;
		}
		public int compareTo(Object o){
			Pair p = (Pair)o;
			if(a.compareTo(p.a) == 0) return b.compareTo(p.b);
			else return a.compareTo(p.a);
		}
	}*/
	
	public void addToDefCondCases(Integer n) {
		int i=-1;
		Vector<Integer> d = defCondCases.pop();
		while(++i < d.size() && d.get(i) < n);
		//DEBUG.println("adding " + n + " to defCondCases");
		d.add(i, n);
		defCondCases.push(d);
		/*
		for(int i=0; i < defCondCases.size(); i++) {
			if(defCondCases.get(i) > n) {
				defCondCases.add(i, n);
				return;
			}
		}
		defCondCases.add(n);
		*/
	}

	public String ArrRefToString(String ArrName, Integer count){
		if(OPTIONS.INCLUDE_ARRAY_CONSTRAINTS && !OPTIONS.INCLUDE_ONLY_SYM_ARRAY_CONSTRAINTS)
			return ArrName + "Ref" + count.toString();
		else
			return "_";
	}
	public String getOpposite(String comparator){
		if(comparator.compareTo("<") == 0) return ">=";
		if(comparator.compareTo("<=") == 0) return ">";
		if(comparator.compareTo(">") == 0) return "<=";
		if(comparator.compareTo(">=") == 0) return "<";
		return comparator;
	}
	public String getAddrVar(String func, String var) {
		return "Addr_" + func + "__" + var + "_";
	}
	public boolean IsAddrVar(String func, String var) {
		return (
		PreprocessInfo.isAddrVar(func, var) ||
		OPTIONS.ARR_TO_PTR && PreprocessInfo.isAddrArr(func, var)
		);
	}

	public String getNumericName(String var, String func) {
		return func + "$_$" + var;
	}

	public void populateCalledFuncs(String func) {
		calledFuncs.add(func);
		if(callMap.get(func) != null) {
			for(String f : callMap.get(func))
				if(!calledFuncs.contains(f))
					populateCalledFuncs(f);
		}
	}
	public static PrintStream varOut = null, transOut = null, blockOut = null, hierarchyOut = null;
	public Vector<String> transList = new Vector<String>();
	public void outputAll(PrintStream stream){
		if(factories.size() == 0 || mainFac < 0)
			FATAL.error("no main function found!");

		populateCalledFuncs("func_main");
		// build function name -> clause factory mapping
		for(ClauseFactory factory : factories)
			if(factory.getFuncName() != null && factory.numClauses() > 0) {
				if(calledFuncs.contains(factory.getFuncName()))
					factoryMap.put(factory.getFuncName(), factory);
				else if(OPTIONS.WP_COMPILATION) // remove lifted vars (local->global) of uncalled funcs from global var list
					for(int i = 0; i < factory.getParams().size(); i++)
						ClauseFactory.removeLiftedVar(localToGlobalVar(factory.getFuncName(), i));
			}


		if(OPTIONS.PRINT_COMPILER_DATA) {
			try {
				varOut = new PrintStream(new FileOutputStream(OPTIONS.COMPILER_DATA_PATH + "/var-list"));
				transOut = new PrintStream(new FileOutputStream(OPTIONS.COMPILER_DATA_PATH + "/trans-tree"));
				blockOut = new PrintStream(new FileOutputStream(OPTIONS.COMPILER_DATA_PATH + "/block-list"));
				hierarchyOut = new PrintStream(new FileOutputStream(OPTIONS.COMPILER_DATA_PATH + "/hierarchy-list"));
			}
			catch (Exception e) { FATAL.error("exception in compiler info output file"); }

			varOut.print("global:\n\t" + ClauseFactory.getGlobalArrayVariables() + "\n\t" + ClauseFactory.getGlobalVariables() + "\n");
			for(Hierarchy hie : hierarchy)
				hierarchyOut.print(hie + "\n");
		}


		// differentiate system calls from function calls

		ClauseFactory.populateBlocks();

		globalInitFunc(stream);

        if (OPTIONS.INC_ANALYSIS_COMPILATION)
            for(int iii=0; iii < factories.size(); iii++)
                if(factories.elementAt(iii).getFuncName().equals("func___TRACER_INIT")) {
                    factories.elementAt(iii).resetFuncName(); break;
                }

		Iterator<ClauseFactory> itr = factories.iterator();
		Iterator<ClauseFactory> itr1 = factories.iterator();
		Iterator<ClauseFactory> itr2 = factories.iterator();
		Iterator<ClauseFactory> itr3 = factories.iterator();
		Iterator<ClauseFactory> itr4 = factories.iterator();
		Iterator<ClauseFactory> itr5 = factories.iterator();
		Iterator<ClauseFactory> itr6 = factories.iterator();
		Iterator<ClauseFactory> itr7 = factories.iterator();

		Iterator<Hierarchy> itr_hierarchy = hierarchy.iterator();
		Iterator<Slice> itr_slice = sliceGoals.iterator();
		Iterator<String> itr_systemCalls = systemCalls.iterator();
		Iterator<Abstraction> abs_iterator = abstractions.iterator();
		
		Iterator<Variable> j = globalVariables.iterator() ;
		
		Iterator<Variable> h = globalArrayVariables.iterator();
		
		String var;
		String nilList = "";
		String globals = "";
		String symbolic_constraints = "";
		String block;
		String globalArrays = "";
		Hierarchy block_h;

		if(OPTIONS.PROLOG_SYSTEM)
			stream.println(":-style_check(-singleton).");

		ClauseFactory fac = new ClauseFactory();

		Vector<String> uncalledFuncs = new Vector<String>();

		int totalClauses = 0, totalBranches = 0, totalLoops = 0;
		while(itr.hasNext()){
			fac = itr.next();
			if(fac.numClauses() > 0) {
				if(fac.getFuncName() != null) {
					if(calledFuncs.contains(fac.getFuncName())) {
						int nClauses = fac.numClauses();
						int nBranches = fac.numBranches();
						int nLoops = fac.numLoops;
						DEBUG.println(String.format("%s:\t%d\tclauses\t%d\tbranches\t%d\tloops", fac.getFuncName(), nClauses, nBranches, nLoops));
						totalClauses += nClauses; totalBranches += nBranches; totalLoops += nLoops;
						fac.outputAll(stream);
					}
					else {
						/* if DECOMP_MODE, then we should compile ALL functions regardless of whether they are called or not 
						 * because we want to compare the decompiled and original programs only based on path-sensitiveness, not other optimizations like this
						 */
						if(OPTIONS.DECOMP_MODE) {
							calledFuncs.add(fac.getFuncName());
                            factoryMap.put(fac.getFuncName(), fac);
							int nClauses = fac.numClauses();
							int nBranches = fac.numBranches();
							int nLoops = fac.numLoops;
							DEBUG.println(String.format("%s:\t%d\tclauses\t%d\tbranches\t%d\tloops", fac.getFuncName(), nClauses, nBranches, nLoops));
							totalClauses += nClauses; totalBranches += nBranches; totalLoops += nLoops;
							fac.outputAll(stream);
						}
						else {
							uncalledFuncs.add(fac.getFuncName());
							ClauseFactory.cid += fac.numClauses();
						}
					}
				}
			}
		}
		if(OPTIONS.REVERSE_TRANS_ORDER)
			for(int i = transList.size()-1; i >= 0; i--)
				stream.println(transList.elementAt(i));
        else if(OPTIONS.RANDOM_TRANS_ORDER) {
            Random rand = new Random();
            while(transList.size() > 0) {
                int i = rand.nextInt(transList.size());
                stream.println(transList.elementAt(i));
                transList.removeElementAt(i);
            }
        }

		DEBUG.println(String.format("Total:\t%d\tclauses\t%d\tbranches\t%d\tloops", totalClauses, totalBranches, totalLoops));


		// save block and transition info before printing syscalls
		int lastBlockId = blockId;
		int lastTransitionId = fac.getTransitionId();

		stream.print("%--------------------------------------------------\n");

		while(itr5.hasNext()){
			fac = itr5.next();
			if(fac.getFuncName() != null && calledFuncs.contains(fac.getFuncName()) && fac.numClauses() > 0)
				fac.outputBlocks(stream);
		}
		
        stream.print("%--------------------------------------------------\n");
		itr5 = factories.iterator();
		while(itr5.hasNext()){
			fac = itr5.next();
			if(fac.getFuncName() != null && calledFuncs.contains(fac.getFuncName()) && fac.numClauses() > 0)
				fac.outputBlockConditionVars(stream);
		}
		
		if(OPTIONS.INCLUDE_BLOCK_HIERARCHY) {
			stream.print("%--------------------------------------------------\n");
		
			while(itr_hierarchy.hasNext()) {
				block_h = itr_hierarchy.next();
				if(calledFuncs.contains(block_h.getFac().getFuncName()))
					stream.println(block_h);
			}

			stream.print("%--------------------------------------------------\n");
		
			if(breakPredicates.size() == 0)
				stream.print("break(a1234).\n");
			else
				for(Integer i : breakPredicates)
					stream.print(String.format("break(i%d).\n", i));
		}

		stream.print("%--------------------------------------------------\n");

		for(String back : backedge)
			stream.print("ancestor_pp(" + back + ").\n");

		stream.print("%--------------------------------------------------\n");
		
		while(itr1.hasNext()){
			fac = itr1.next();
			if(fac.getFuncName() != null && calledFuncs.contains(fac.getFuncName()) && fac.numClauses() > 0)
				fac.outputStartPoint(stream);
		}

		stream.print("%--------------------------------------------------\n");

		while(itr2.hasNext()){
			fac = itr2.next();
			if(fac.getFuncName() != null && calledFuncs.contains(fac.getFuncName()) && fac.numClauses() > 0)
				fac.outputEndPoints(stream);
		}

        stream.print("%--------------------------------------------------\n");

		stream.println("freshglobalarrays([" + Factory().getGlobalArrays(true) + "]).");

        stream.print("%--------------------------------------------------\n");

		stream.println("freshglobalvars([" + Factory().getGlobalVars(true) + "]).");

        stream.print("%--------------------------------------------------\n");

		while(itr3.hasNext()){
			fac = itr3.next();
			if(fac.getFuncName() != null && calledFuncs.contains(fac.getFuncName()) && fac.numClauses() > 0)
		        fac.outputLocalFreshArrays(stream);
		}

		stream.print("%--------------------------------------------------\n");
	
		while (itr4.hasNext()) {
			fac = itr4.next();
			if(fac.getFuncName() != null && calledFuncs.contains(fac.getFuncName()) && fac.numClauses() > 0)
				fac.outputLocalFreshVars(stream);
		}

		stream.print("%--------------------------------------------------\n");
	
		while (itr7.hasNext()) {
			fac = itr7.next();
			if(fac.getFuncName() != null && calledFuncs.contains(fac.getFuncName())
				&& PreprocessInfo.isRealFunc(fac.getFuncName()) && fac.numClauses() > 0)
				fac.outputFreshParams(stream);
		}

		while (h.hasNext()) {
			h.next();
			globalArrays += "_";
			if (h.hasNext())
			{
				globalArrays += ",";
			}
		}
	
		if(OPTIONS.INCLUDE_TEST_INPUT_VARS) {
			stream.print("%--------------------------------------------------\n");

			while(itr6.hasNext()) {
				fac = itr6.next();
				if(fac.getFuncName() != null && calledFuncs.contains(fac.getFuncName()) && fac.numClauses() > 0) {
					fac.printVariableReferences(); // print to stdout
					fac.printInputVars(stream);
				}
			}
		}

		stream.print("%--------------------------------------------------\n");

		stream.print("init_goal(func_main, [p$init_0], i" + emptyClauseId + ", " + 
						"[" + factories.elementAt(mainFac).getGlobalArrays(false) + "]," + 
						"[" + factories.elementAt(mainFac).getGlobalVars(false) + "]," +
						"[" + factories.elementAt(mainFac).getGlobalArrays(true) + "]," +
						"[" + factories.elementAt(mainFac).getGlobalVars(true) + "]," + 
						"[" + factories.elementAt(mainFac).getLocalArrays(false) + "]," + 
						"[" + factories.elementAt(mainFac).getLocalVars(false) + "]," +
						"[" + factories.elementAt(mainFac).getLocalArrays(true) + "]," +
						"[" + factories.elementAt(mainFac).getLocalVars(true) + "]," + 
						"[" + symbolic_constraints + "]).\n");

		/***********************
		 *** print alias vars ***
		 **********************/

		/*
		if(OPTIONS.ALIAS_ANALYSIS) {

			Map <String, Vector <String>> aliases = PAHelper.getAliasMap(); 

			stream.print("%--------------------------------------------------\n");

			stream.print("alias([");

			Iterator<String> it = aliases.keySet().iterator();
			while(it.hasNext()) {
				String heap = it.next();
				stream.print(aliasToString(heap, aliases.get(heap)));

				if (it.hasNext())
					stream.print(",");
			}

			stream.print("]).\n");
		}
		*/
		/***************************
		 *** end print addr vars ***
		 **************************/

		if(sliceGoals.size() > 0)
				stream.print("%--------------------------------------------------\n");
		
		while(itr_slice.hasNext()) {
			itr_slice.next().printSlice(stream);
		}

		if(abstractions.size() > 0)
			stream.print("%--------------------------------------------------\n");

		while(abs_iterator.hasNext())
			stream.println(abs_iterator.next());

		if(OPTIONS.INCLUDE_DICT) {
			stream.print("%--------------------------------------------------\n");
			
			for(ClauseFactory cf : factoryMap.values()) {
                if (cf.getFuncName() != null)
				    cf.outputDict(stream);
			}

			stream.print("%--------------------------------------------------\n");
			
			ClauseFactory.outputGlobalDict(stream);
		}

        stream.print("%--------------------------------------------------\n");
        for(Integer crestBranchId : crest_branches.keySet())
            stream.print(String.format("crest_branch(%d,b%d).\n", crestBranchId, crest_branches.get(crestBranchId)));

		if(uncalledFuncs.size() > 0) {
			DEBUG.fprintln("unused functions (not compiled): " + uncalledFuncs.size());
			for(String f : uncalledFuncs)
				DEBUG.fprintln(f);
		}

		// sanity check for variables. make sure that no function has a clash with its own local/global variables
		for(ClauseFactory cf : factories) {
			for(Variable v : cf.getVariables())
				if(cf.getArrayVariables().contains(v) || ClauseFactory.getGlobalVariables().contains(v) || ClauseFactory.getGlobalArrayVariables().contains(v))
					FATAL.error("variable " + v + " in " + cf.getFuncName() + " is duplicated (either locally or globally)! please check!");
			for(Variable v : cf.getArrayVariables())
				if(cf.getVariables().contains(v) || ClauseFactory.getGlobalVariables().contains(v) || ClauseFactory.getGlobalArrayVariables().contains(v))
					FATAL.error("array variable " + v + " in " + cf.getFuncName() + " is duplicated (either locally or globally)! please check!");
		}

		// sanity check for calls
		for(CallInfo call : callSanity) {
			String func = call.getFunc();
			ClauseFactory cfac = factoryMap.get(func);

			if(cfac == null) { // if cfac is null, then func should be uncalled
				if(!uncalledFuncs.contains(func))
					DEBUG.warn("call sanity check failed! function " + func + " could not be found in fac map and is not uncalled!");
			}
			else { // otherwise, check if the no. of params of cfac == the arity of the call
				if(cfac.getParams().size() != call.getArity())
					FATAL.error("call sanity check failed! arity of call to " + func + " is " + call.getArity() + 
								" but function has arity " + cfac.getParams().size() + "(both include ReturnValue).\n" + cfac.getParams() + "\n" +
								"Check if the function is not declared twice, or if declaration follows the definition, which is usually the case.");
			}
		}

		// sanity check for &-vars supposedly function pointers
		for(String f : PreprocessInfo.getFuncPtrs())
			if(!calledFuncs.contains("func_" + f) && !uncalledFuncs.contains("func_" + f))
				FATAL.error("sanity check for &-vars: &-var " + f + " not found in variable list or function pointer list");

		// DFS sanity check for transitions
		DEBUG.fprintln("sanity checking...");
		for(ClauseFactory cf : factories)
			if(cf != null && cf.getFuncName() != null && cf.numClauses() != 0 /* means extern func */) {
				DEBUG.println("========= " + cf.getFuncName() + " =========");
				marked.clear();
				if(cf.getFuncName().compareTo("func_main") == 0) // for main, start at p$init_0
					dfs_sanity(-1980, cf);
				else
					dfs_sanity(0, cf);
			}
		DEBUG.fprintln("program is sane!");
		DEBUG.fprintln("no. of empty trans (removed): " + ClauseFactory.emptyTrans);

	}

    void outputLoopInvariants(PrintStream stream) {
        if(OPTIONS.ABSTRACT_DOMAIN > 0) {
            stream.print("%--------------------------------------------------\n");
            Iterator<ClauseFactory> itr5 = factories.iterator();

            while(itr5.hasNext()){
                ClauseFactory fac = itr5.next();
                if(fac.getFuncName() != null && calledFuncs.contains(fac.getFuncName()) && fac.numClauses() > 0)
                    fac.outputLoopInvariants(stream);
            }
        }
		
    }

	private void dfs_sanity(Integer PP, ClauseFactory cf) {
		// if PP is an end point, return (note: -1988 = $unsafe)...
		if(PP == -1988 || cf.getEndPoints().contains(PP))
			return;

		// ...otherwise collect the clauses for which this PP is fromPP
		Vector<Integer> v = new Vector<Integer>();
		for(Clause c : cf.getClauses())
			if(c.getFromPP() == PP)
				v.add(c.getToPP());

		// ...if there's no clause like that, something's wrong
		if(v.size() == 0)
			FATAL.error("dfs sanity check failed!!! at p" + PP + " in function " + cf.getFuncName());

		else {
			marked.add(PP);
			for(Integer to : v)
				if(!marked.contains(to))
					dfs_sanity(to, cf);
		}
	}

	// given a string heap and a LIST of aliases of the form "func.var" this returns
	// its representation as a LIST of items in v(scope,type,index) format
	public String aliasToString(String heap, Vector<String> vars) {
		String ret = "[";

		// add the heap first
		ret += String.format("v(global,array,%d)", ClauseFactory.getGlobalArrayVariables().indexOf(new Variable(heap)));

		// add vars in heap
		for(String var : vars) {
			Matcher m1 = (Pattern.compile("(\\w+)\\.(\\w+)"))           .matcher(var);
			Matcher m2 = (Pattern.compile("\\&\\((\\w+)\\.(\\w+)\\)"))  .matcher(var);
			
			// if variable is of the form "func.var" do normal procedure
			if(m1.matches()) {
				String func = m1.group(1);
				Variable v = new Variable(m1.group(2));
				// sometimes &x and x are in the same heap.. wth? just ignore x
				if(vars.contains("&(" + m1.group(1) + "." + m1.group(2) + ")"))
					continue;
				if(func.compareTo("GLOBAL") == 0) {
					if(ClauseFactory.getGlobalVariables().contains(v))
						ret += String.format(",v(global,var,%d)", ClauseFactory.getGlobalVariables().indexOf(v));
					else if(ClauseFactory.getGlobalArrayVariables().contains(v))
						ret += String.format(",v(global,array,%d)", ClauseFactory.getGlobalArrayVariables().indexOf(v));
					else
						FATAL.error("in alias vars1: could not find " + var + " in variable list");
				}
				else {
					func = "func_" + func;
					if(calledFuncs.contains(func)) {
						ClauseFactory fac = factoryMap.get(func);

						if(fac.getVariables().contains(v))
							ret += String.format(",v(%s,var,%d)", func, fac.getVariables().indexOf(v));
						else if(fac.getArrayVariables().contains(v))
							ret += String.format(",v(%s,array,%d)", func, fac.getArrayVariables().indexOf(v));
						else
							FATAL.error("in alias vars2: could not find " + var + " in variable list");
					}
				}
			}

			// if variable is of the form "&(func.var)" do appropriate procedure for AddrVar
			else if(m2.matches()) {
				String func = m2.group(1);
				Variable v;

				// if ARR_TO_PTR = false and ALIAS_ANALYSIS = true, then for an array a,
				// &(main.a) will appear in addrVars from Crystal but AddrA would'nt have
				// been added to any list since ARR_TO_PTR is false.
				// in such cases, nothing to do but just ignore it.
				if(func.compareTo("GLOBAL") == 0) {
					if(!OPTIONS.ARR_TO_PTR && ClauseFactory.getGlobalArrayVariables().contains(new Variable(m2.group(2))))
						continue;
					v = new Variable(getAddrVar("GLOBAL", m2.group(2)));
				}
				else {
					if(calledFuncs.contains("func_" + func))
						if(!OPTIONS.ARR_TO_PTR && factoryMap.get("func_" + func).getArrayVariables().contains(new Variable(m2.group(2))))
							continue;
					v = new Variable(getAddrVar("func_" + func, m2.group(2)));
				}

				if(ClauseFactory.getGlobalVariables().contains(v))
					ret += String.format(",v(global,var,%d)", ClauseFactory.getGlobalVariables().indexOf(v));
				else
					FATAL.error("in alias vars3: could not find " + var + " in variable list");
			}
		}

		return ret + "]";
	}

	public void globalInitFunc(PrintStream stream) {

		// ---------------------------
		// SET UP THE FUNCTION
		// ---------------------------
		initialize();
		ClauseFactory factory = Factory();
		factory.setFuncName("__TRACER_INIT");
		factory.addVariable("ReturnValue", 0);
		factory.addParam("ReturnValue", 0);
		factory.setStartPoint(currPP);
		factoryMap.put(factory.getFuncName(), factory);
		calledFuncs.add(factory.getFuncName());

		int thisBlockId = blockId++;
		if(!OLD_CHANGES)
			hierarchy.add(new Hierarchy(0, thisBlockId));
		factory.createBlockClause(thisBlockId, false);
		blockStack.push(thisBlockId);
		hasChildren.push(false);
		inFunction = true;
		lastReturnNextPP = -1;
		blockType.push(FUNCTION);


		// ---------------------------
		// ADD THE CONSTRAINTS CLAUSE(S)
		// ---------------------------
		if(!factory.inAssignGroup) {
			factory.inAssignGroup = true;
			currClause = factory.openClause(null);
			factory.clauseInfluencedId(tId++);
			factory.setFromPP(currClause, currPP);
		}
		factory.setToPP(currClause, ++currPP);
		for(String v : globalInit.keySet()) {
			String exstr = factory.getNextVarName(v) + "=" + globalInit.get(v);
			String symbstr = "assign(" + factory.getSymbolicCurrVarName(v) + 
							"," + globalInit.get(v).toString_symbolic() + ")";

			factory.clauseRefVar(currClause, v);
			if(factory.inAssignGroup)
				assignGroupVars.add(v);
			factory.addConstraint(currClause, exstr);
			factory.addSymbolicConstraint(currClause, symbstr);

			/***************** CHECK FOR CONSTRAINT LIMIT! *********************/
			if(factory.numConstraints(currClause) >= OPTIONS.MAX_CONSTRAINTS || factory.numSymbolicConstraints(currClause) >= OPTIONS.MAX_CONSTRAINTS) {
				// closing rituals for the previous assignment group, if any
				if(Factory().inAssignGroup)
				{
					ArrRefToVar.clear(); ArrToCount.clear();
					Factory().closeAssignGroup(currClause, assignGroupVars);
					assignGroupVars.clear();
				}
				if(!factory.inAssignGroup) {
					factory.inAssignGroup = true;
					currClause = factory.openClause(null);
					factory.clauseInfluencedId(tId++);
					factory.setFromPP(currClause, currPP);
				}
				factory.setToPP(currClause, ++currPP);
			}
		}

		for(String v : globalArrInit.keySet()) {
			int idx = 0;
			for(Expression e : globalArrInit.get(v)) {
				String exstr = factory.getNextVarName(v) + "=upd(" + 
								factory.getPrevVarName(v) + "," + idx + "," +
								e.toString() + ")";
				String symbstr = "arrassign(" + factory.getSymbolicCurrVarName(v) + 
								",upd(" + factory.getSymbolicPrevVarName(v) + "," + idx +
								"," + e.toString_symbolic() + "))";
				factory.addConstraint(currClause, exstr);
				factory.addSymbolicConstraint(currClause, symbstr);
				idx++;

				/***************** CHECK FOR CONSTRAINT LIMIT! *********************/
				if(factory.numConstraints(currClause) >= OPTIONS.MAX_CONSTRAINTS || factory.numSymbolicConstraints(currClause) >= OPTIONS.MAX_CONSTRAINTS) {
					factory.clauseRefVar(currClause, v);
					if(factory.inAssignGroup)
						assignGroupVars.add(v);
					// closing rituals for the previous assignment group, if any
					if(Factory().inAssignGroup)
					{
						ArrRefToVar.clear(); ArrToCount.clear();
						Factory().closeAssignGroup(currClause, assignGroupVars);
						assignGroupVars.clear();
					}
					if(!factory.inAssignGroup) {
						factory.inAssignGroup = true;
						currClause = factory.openClause(null);
						factory.clauseInfluencedId(tId++);
						factory.setFromPP(currClause, currPP);
					}
					factory.setToPP(currClause, ++currPP);
				}
			}
			factory.clauseRefVar(currClause, v);
			if(factory.inAssignGroup)
				assignGroupVars.add(v);
		}

		if(factory.inAssignGroup)
		{
			ArrRefToVar.clear(); ArrToCount.clear();
			factory.closeAssignGroup(currClause, assignGroupVars);
			assignGroupVars.clear();
		}


		// ---------------------------
		// ADD THE RETURN TRANSITION
		// ---------------------------
		Factory().hasReturn = true;
		if(!factory.inAssignGroup) {
			factory.inAssignGroup = true;
			currClause = factory.openClause(null);
			factory.clauseInfluencedId(tId++);
			factory.setFromPP(currClause, currPP);
		}
		factory.setToPP(currClause, ++currPP);

		String retcons = factory.getNextVarName("ReturnValue") + "=_";
		factory.clauseRefVar(currClause, "ReturnValue");
		if(Factory().inAssignGroup)
			assignGroupVars.add("ReturnValue");
		factory.addConstraint(currClause,retcons) ;  

		retcons = "assign(" + factory.getSymbolicNextVarName("ReturnValue") + ",_)";
		factory.addSymbolicConstraint(currClause, retcons);

		if(factory.inAssignGroup)
		{
			ArrRefToVar.clear(); ArrToCount.clear();
			factory.closeAssignGroup(currClause, assignGroupVars);
			assignGroupVars.clear();
		}

		blockType.pop();
		blockStack.pop();
		factory.popBlockClause();
		hasChildren.pop();

		factory.addEndPoint(currPP);

		// ----------------------------------
		// ADD CALL FROM MAIN
		// NOTE: Using some hard-coded values
		// ----------------------------------
		factory = factories.elementAt(mainFac);
		if(!factory.inAssignGroup) {
			factory.inAssignGroup = true;
			emptyClauseId = tId++; // this is the laaaast Id going to be printed
			factory.openInitCallClause(); // will set up fromPP and toPP automatically
		}
		CallInfo call = new CallInfo();
		call.setFunc("func___TRACER_INIT");
		String args = "[RV0|_]";
		call.addArgs("RV0");
		String args_symbolic = "[SRV0|_]";
		call.addArgs_symbolic("SRV0");
		String constraints_symbolic = "[]";

        if (!OPTIONS.INC_ANALYSIS_COMPILATION)
		factory.addCall(1, call); // add call to 2nd clause because 1st should be empty clause

		if(factory.inAssignGroup)
		{
			ArrRefToVar.clear(); ArrToCount.clear();
			factory.closeAssignGroup(currClause, assignGroupVars);
			assignGroupVars.clear();
		}

	}

	public Long octalToDecimal(String octal) {
		// Initialize result to 0
		long res = 0;

		// Do not continue on an empty string
		if (octal.isEmpty()) {
			FATAL.error("octal number is null!");
		}

		// Consider each digit in the string
		for (int i = 0; i < octal.length(); i++) {
			// Get the nth char from the right (first = 0)
			char n = octal.charAt(octal.length() - (i+1));

			int f = (int) n - 48;
			// Check if it's a valid bit
			if (f < 0 || f > 7) {
				// And if not, die horribly
				FATAL.error("invalid octal number " + octal + "!");
			}
			else {
				// Only add the value if it's a 1
				res += f*Math.round(Math.pow(2.0, (3*i)));
			}
		}

		return res;
	}

	public Long hexaToDecimal(String hex) {
		// Initialize result to 0
		long res = 0;

		// Do not continue on an empty string
		if (hex == null || hex.isEmpty()) {
			FATAL.error("hexadecimal number is null!");
		}

		// Consider each digit in the string
		for (int i = 0; i < hex.length(); i++) {
			// Get the nth char from the right (first = 0)
			char n = hex.charAt(hex.length() - (i+1));

			int f = (int) n - 48;

			// Try to fix A-F values
			if (f > 9) {
				// A-F
				f = f - 7;
				if (f > 15) {
					// a-f
					f = f - 32;
				}
			}

			// Check if it's a valid bit
			if (f < 0 || f > 15) {
				// And if not, die horribly
				FATAL.error("invalid hexadecimal number " + hex + "!");
			} else {
				// Only add the value if it's a 1
				res += f*Math.round(Math.pow(2.0, (4*i)));
			}
		}

		return res;
	}

}

translationUnit  options {
  defaultErrorHandler=false;
}
	{
		if(OLD_CHANGES)
			blockId = 0;
		else
			blockId = 1;
 	}
        :       ( externalList )? 
	{
		if(OPTIONS.ALIAS_ANALYSIS) {
			for(String h : PAHelper.getHeapVars())
				ClauseFactory.addGlobalArrayVariable(new Variable(h));
			// no need to add H$0$, because if it was used, it would've been added above
			//if(PAHelper.heapZero())
			//  ClauseFactory.addGlobalArrayVariable(new Variable("H$0$"));
		}
		else
			ClauseFactory.addGlobalArrayVariable(new Variable("H$$"));

		DEBUG.println("\narray sizes:");
		for(ClauseFactory cf : factories)
			for(Variable v : cf.arraySizes.keySet())
				DEBUG.println(v + " " + cf.arraySizes.get(v));

		if(PREPROCESS) {
			for(ClauseFactory factory : factories)
				if(factory.getFuncName() != null && factory.numClauses() > 0)
					PreprocessInfo.addRealFunc(factory.getFuncName());
			PreprocessInfo.addRealFunc("func___TRACER_INIT");
		}
	}
        ;


externalList
{
	parseNode = #externalList;
}
        :       ( externalDef )+
        ;

externalDef
{
	parseNode = #externalDef;
}
        :       {initialize();}declaration
        |       {initialize();}functionDef
        |       {initialize();}asm_expr
        |       {initialize();}SEMI
        |       {initialize();}typelessDeclaration
        ;

typelessDeclaration
{
	parseNode = #typelessDeclaration;
}
        :       #(NTypeMissing initDeclList SEMI)
        ;

asm_expr
{
	parseNode = #asm_expr;
}
        :       #( "asm" ( "volatile" )? LCURLY expr RCURLY ( SEMI )+ )
        ;

declaration
{
	parseNode = #declaration;
}
        :       #( NDeclaration 
            { 
                inDeclaration = true;
                currentInitializerValue = 0 ;
				structDeclName = "";
				functionDecl = false;
            }
            d: declSpecifiers 
                    (
                        i:initDeclList
                    )?
            {
				if(i != null) {
					TreeSet<String> funcs = (TreeSet<String>) i.getAttribute("functions");
					Iterator<String> q = funcs.iterator();
					while(q.hasNext()) {
						systemCalls.add(q.next());
						DEBUG.println(" ...done");
					}

					if(typedefVar && i.getAttribute("idtexts") != null) { // handles cases (1) typedef struct {...} T; (2) typedef struct FOO T;

						Vector<String> idtexts = (Vector<String>) i.getAttribute("idtexts");
						Vector<Boolean> ptr_idtexts = (Vector<Boolean>) i.getAttribute("ptr_idtexts");
						if(idtexts.size() == 0)
							FATAL.error("at line: " + parseNode.getLineNum() + ". could not define typedef struct because idtexts was empty");


						if(d.getAttribute("sfields") != null) {
							Vector<StructField> fields = (Vector<StructField>) d.getAttribute("sfields");

							DEBUG.println("defining typedef struct { " + fields + " } " + idtexts + ";");
							int idx = 0;
							for(String idtext : idtexts) {
								StructInfo.addStruct(idtext, fields);
								if(ptr_idtexts.elementAt(idx)) {
									DEBUG.println(idtext + " is a struct ptr!");
									StructInfo.setStructPtr(idtext);
								}
								idx++;
							}
						}

						else if(d.getAttribute("sname") != null) {
							String structName = (String) d.getAttribute("sname");
							Vector<StructField> fields = StructInfo.getFields(structName);
							if(fields != null) {
								DEBUG.println("re-defining typedef struct " + structName + " { " + fields + " } " + idtexts + ";");
								int idx = 0;
								for(String idtext : idtexts) {
									if(idtext.compareTo(structName) != 0) { // don't define it if the typedef name == struct name (eg, typedef struct FOO FOO)
										StructInfo.addStruct(idtext, fields);
										StructInfo.setTypedef(idtext, structName); // tyepdef struct foo T; --> idtext = T, structName = foo. record this.
										if(ptr_idtexts.elementAt(idx)) {
											DEBUG.println(idtext + " is a struct ptr to " + structName + "!");
											StructInfo.setStructPtr(idtext);
										}
										idx++;
									}
								}
							}
						}
					}
					else if(d.getAttribute("sname") != null && i.getAttribute("idtexts") != null) { // handles the case struct FOO a;
						String structType = (String) d.getAttribute("sname");
						Vector<String> idtexts = (Vector<String>) i.getAttribute("idtexts");
						if(idtexts.size() == 0)
							FATAL.error("at line: " + parseNode.getLineNum() + ". could not declare struct var because idtexts was empty");
						
						if(inFunction) {
							String fn = Factory().getFuncName();
							for(String idtext : idtexts)
								if(IsAddrVar(fn, idtext))
									ClauseFactory.addGlobalStructVariable(new Variable(getAddrVar(fn, idtext)), structType);
								else
									Factory().addStructVariable(new Variable(idtext), structType);
						}
						else {
							for(String idtext : idtexts)
								if(IsAddrVar("GLOBAL", idtext))
									ClauseFactory.addGlobalStructVariable(new Variable(getAddrVar("GLOBAL", idtext)), structType);
								else
									ClauseFactory.addGlobalStructVariable(new Variable(idtext), structType);
						}
					}
				}
                inDeclaration = false ;
				structDeclName = "";
                structVar = false;
				typedefVar = false;
            }
                    ( SEMI )+
                )
        ;


declSpecifiers 
{
	parseNode = #declSpecifiers;
}
        :       ( storageClassSpecifier
                | typeQualifier
                | t:typeSpecifier
				{
					if(typedefVar && t.getAttribute("sfields") != null) // meaning "typedef struct { ... } T;"
						#declSpecifiers.setAttribute("sfields", t.getAttribute("sfields"));
					else if(typedefVar && t.getAttribute("sname") != null) // meaning "typedef struct FOO T;"
						#declSpecifiers.setAttribute("sname", t.getAttribute("sname"));
				}
                )+
        ;

storageClassSpecifier
{
	parseNode = #storageClassSpecifier;
}
        :       "auto"
        |       "register"
        |       "typedef" { typedefVar = true; }
        |       functionStorageClassSpecifier
        ;


functionStorageClassSpecifier
{
	parseNode = #functionStorageClassSpecifier;
}
        :       "extern" { externDecl = true; }
        |       "static"
        |       "inline"
        ;


typeQualifier
{
	parseNode = #typeQualifier;
}
        :       "const"
        |       "volatile"
        ;


typeSpecifier
{
	parseNode = #typeSpecifier;
}
        :       "void"
        |       "char"
        |       "short" { NUMERICTYPE = true; }
        |       "int" { NUMERICTYPE = true; }
        |       "long" { NUMERICTYPE = true; }
        |       "float" { NUMERICTYPE = true; }
        |       "double" { NUMERICTYPE = true; }
        |       "signed"
        |       "unsigned"
        |       s:structSpecifier ( attributeDecl )* 
		{
			structVar = true;
			if(s.getAttribute("sfields") != null) // meaning struct DEFINITION using { }
				#typeSpecifier.setAttribute("sfields", s.getAttribute("sfields"));
			else if(s.getAttribute("sname") != null) // meaning struct typedef, like typedef struct FOO T;
				#typeSpecifier.setAttribute("sname", s.getAttribute("sname"));
			else
				FATAL.error("struct did not have definition or name!");
		}
        |       unionSpecifier  ( attributeDecl )*
        |       enumSpecifier
        |       t:typedefName
		{
			if(t.getAttribute("sname") != null) // stands for tyepdefName of struct ONLY!
				#typeSpecifier.setAttribute("sname", t.getAttribute("sname"));
		}
        |       #("typeof" LPAREN
                    ( (typeName )=> typeName 
                    | expr
                    )
                    RPAREN
                )
        |       "__complex"
        ;


typedefName
{
	parseNode = #typedefName;
}
        :       #(NTypedefName i:ID)
		{ 
			if(inStructDef) { // already in struct def. => nested struct encountered
				nestedStructDeclName = i.getText();
				DEBUG.println("Nested struct: " + nestedStructDeclName + " within " + structDefName);
			}
 			// not in struct def. => a simple struct variable in a function
			// but verify if it's really a struct or just a typedef var (like __u_long)
			// BUG found: do this only if we are not in RHS of declaration. for eg.
			// int f = malloc(sizeof(FILE)); since FILE is typedef, structDeclName was set to i.getText() and this caused f to appear in array vars
			else if(!inRHSOfDeclaration && StructInfo.isStruct(i.getText()))// GlobalDef.getStructFromName(i.getText()) != null)
				structDeclName = i.getText();

			if(StructInfo.isStruct(i.getText()))
				#typedefName.setAttribute("sname", i.getText());
		}
        ;


structSpecifier
{
	parseNode = #structSpecifier;
}
        :   #( "struct" s:structOrUnionBody 
		{
			if(recordFuncReturnType)
				Factory().returnsStruct = true;
			Vector<StructField> fields = (Vector<StructField>) s.getAttribute("sfields");
			if(fields != null)
				#structSpecifier.setAttribute("sfields", fields);
			else if(s.getAttribute("sname") != null)
				#structSpecifier.setAttribute("sname", s.getAttribute("sname"));
			else
				FATAL.error("at line: " + parseNode.getLineNum() + ". struct did not have name or definition!");
		})
        ;

unionSpecifier
{
	parseNode = #unionSpecifier;
}
        :   #( "union" s:structOrUnionBody
		{
			Vector<StructField> fields = (Vector<StructField>) s.getAttribute("sfields");
			if(fields != null)
				#unionSpecifier.setAttribute("sfields", fields);
			else if(s.getAttribute("sname") != null)
				#unionSpecifier.setAttribute("sname", s.getAttribute("sname"));
			else
				FATAL.error("at line: " + parseNode.getLineNum() + ". struct did not have name or definition!");
		})
        ;
   
structOrUnionBody
{
	parseNode = #structOrUnionBody;
}
        :       ( (ID LCURLY) => id:ID LCURLY
        		{ 
					ClauseFactory.addGlobalDeclLineNum(id.getLineNum());
					if(!inStructDef) {
						structDefName = id.getText(); 
						GlobalDef.addNameForStruct(structDefName, structDefName);
					  }
					  inStructDef = true; 
					  structDeclName = id.getText();
					  currStruct = id.getText();
					// DEBUG.println("declaring struct " + id.getText());
				}
                ( s:structDeclarationList )?
				{ 
					Vector<StructField> fields;
					if(s != null)
						fields = (Vector<StructField>) s.getAttribute("sfields");
					else
						fields = new Vector<StructField>();

					if(fields == null)
						FATAL.error("struct " + id.getText() + " has fields null!");

					DEBUG.println("defining struct " + id.getText() + " with fields " + fields);
					StructInfo.addStruct(id.getText(), fields);
					#structOrUnionBody.setAttribute("sfields", fields);

					inStructDef = false; structMemInd = 0; 
					currStruct = null;
				}
                rc:RCURLY   { ClauseFactory.addGlobalDeclLineNum(rc.getLineNum()); }
                |   LCURLY
                    ( sd:structDeclarationList )?
				{ 
					Vector<StructField> fields;
					if(sd != null)
						fields = (Vector<StructField>) sd.getAttribute("sfields");
					else
						fields = new Vector<StructField>();
					if(fields == null)
						FATAL.error("typedef struct has fields null!");

					#structOrUnionBody.setAttribute("sfields", fields);
					inStructDef = false; structMemInd = 0; 
				}
                    RCURLY
                | id2:ID 
				{
					if(!inStructDef)
						structDefName = id2.getText();
					structDeclName = id2.getText();
					if(!StructInfo.isStruct(structDeclName) && (currStruct == null || structDeclName.compareTo(currStruct) != 0))
						// if it's not already defined (and we're not in recursive def), define it
						StructInfo.addStruct(structDeclName, new Vector<StructField>());
					#structOrUnionBody.setAttribute("sname", id2.getText());
				}
                )
        ;

structDeclarationList
{
	parseNode = #structDeclarationList;
	Vector<StructField> fields = new Vector<StructField>();
}
        :       ( s:structDeclaration 
		{
			Vector<StructField> field = (Vector<StructField>) s.getAttribute("sfields");
			if(field == null)
				FATAL.error("cannot retrieve fields in struct when adding to list!");
			
			for(StructField f : field) fields.add(f); // add all elements in f to fields
			ClauseFactory.addGlobalDeclLineNum(s.getLineNum());
		})+
		{
			#structDeclarationList.setAttribute("sfields", fields);
		}
        ;

structDeclaration
{
	parseNode = #structDeclaration;
	nestedStructDeclName = "";
}
        :      d:specifierQualifierList
		s:structDeclaratorList
		{
			Vector<StructField> vars = (Vector<StructField>) s.getAttribute("sfields");
			if(vars == null)
				FATAL.error("cannot retrieve fields in struct!");
			
			if(d.getAttribute("sfields") != null) { // nested struct
				Vector<StructField> fields = (Vector<StructField>) d.getAttribute("sfields");
				// this is the list of vars IN THIS 1 LINE OF DECLARATION (separated by ,) which are of the nested struct type. Usually, this just consists of 1 var. 
				for(StructField var : vars) {
					for(StructField f : fields) { // this is the list of fields IN THAT NESTED STRUCT. for every variable of the nested struct type (usually just 1),
						var.fields.add(f); // add all fields in the nested struct type to the var's field list
						var.isStruct = true; // and set var.isStruct to be true.
					}
				}
			}
			#structDeclaration.setAttribute("sfields", vars);
			nestedStructDeclName = "";
		}
        ;

specifierQualifierList
{
	parseNode = #specifierQualifierList;
}
        :       (
                t:typeSpecifier
		{
			NUMERICTYPE = false; // not needed anymore here
			if(t.getAttribute("sname") != null) { // nested struct declared like FOO a; within another struct
				String structType = (String) t.getAttribute("sname");
				if(currStruct != null && structType.compareTo(currStruct) == 0) { // nested RECURSIVE struct
					if(OPTIONS.INCLUDE_ARRAY_CONSTRAINTS)
						DEBUG.warn("recursive struct " + currStruct + " defined!");
				}
				else {
					Vector<StructField> fields = StructInfo.getFields(structType);
					if(fields != null)
						#specifierQualifierList.setAttribute("sfields", fields);
				}
			}
			else if(t.getAttribute("sfields") != null) { // nested struct declared like struct { ... } a; within another struct
				#specifierQualifierList.setAttribute("sfields", t.getAttribute("sfields"));
			}
		}
                | typeQualifier
                )+
        ;

structDeclaratorList
{
	parseNode = #structDeclaratorList;
	Vector<StructField> fields = new Vector<StructField>();
}
        :       ( s:structDeclarator 
		{
			String f = (String)s.getAttribute("sfield");
			if(f != null)
				fields.add(new StructField(f));
			else {}
				// FATAL.error("at line: " + parseNode.getLineNum() + ". struct field null when adding to list!"); _|_ 
				// this was disabled because of the following code in cdaudio-TRACER.c (or tlan-TRACER.c, can't remember)
				// typedef union _LARGE_INTEGER {
				// 		struct  {
				// 			int LowPart ;
				// 			int HighPart ;
				// 		}  ; <------- notice that there is no name for this struct, which is a field of the parent union!! Yeah, so this check was disabled.
				// 		struct  {
				// 			int LowPart ; 
				// 			int HighPart ;
				// 		} u ;
				// 		int QuadPart ;
				// } LARGE_INTEGER ;
		})+
		{
			#structDeclaratorList.setAttribute("sfields", fields);
		}
        ;

structDeclarator
{
	parseNode = #structDeclarator;
}
        :
        #( NStructDeclarator    
            ( d:declarator
			{
				String s = (String) d.getAttribute("idtext");
				if(s == null)
					FATAL.error("at line: " + parseNode.getLineNum() + ". struct field null!");

				#structDeclarator.setAttribute("sfield", s);
			} )?
            ( COLON expr )?
            ( attributeDecl )*
        )
        ;

enumSpecifier
{
	parseNode = #enumSpecifier;
}
        :   #(  "enum"
                ( ID )? 
                ( LCURLY enumList RCURLY )?
            )
        ;


enumList
{
	parseNode = #enumList;
}
        :       ( enumerator )+
        ;

enumerator
{
	parseNode = #enumerator;
}
        :       ID ( ASSIGN expr )?
        ;

attributeDecl:
{
	parseNode = #attributeDecl;
}
        #( "__attribute" (.)* )
        | #( NAsmAttribute LPAREN expr RPAREN )
        ;

initDeclList {
	parseNode = #initDeclList;
	TreeSet<String> funcDeclList = new TreeSet<String>();
	Vector<String> idtexts = new Vector<String>();
	Vector<Boolean> ptr_idtexts = new Vector<Boolean>();
}
        :       ( i:initDecl 
		{
			if(externDecl && functionDecl && !inFunction) {
				funcDeclList.add((String)i.getAttribute("function"));

				// get function name as record in factory
				String funcName = (String)i.getAttribute("function");
				Integer nparams = Integer.parseInt(funcName.substring(funcName.indexOf(",") +1,
									funcName.length()));
				funcName = funcName.substring(0, funcName.indexOf(","));

				// set extern function attributes
				Factory().setFuncName(funcName);
				Factory().setExternFunction(true);
				Factory().setExternNParams(nparams);
				DEBUG.print("generating stub for " + i.getAttribute("function"));
			}

			if(i.getAttribute("idtext") != null) {
				idtexts.add((String) i.getAttribute("idtext"));
				if(i.getAttribute("ptr_idtext") != null)
					ptr_idtexts.add((Boolean) i.getAttribute("ptr_idtext"));
				else
					FATAL.error("ptr_idext attribute is absent for initDecl: " + (String)i.getAttribute("idtext"));
			}

			if(inFunction)
				Factory().addDeclLineNum(i.getLineNum());
			else
				ClauseFactory.addGlobalDeclLineNum(i.getLineNum());
		}
		)+
		{
			/* reset structDeclName here and not in initDecl (refer to comment at the end of initDecl for more info on this) - Feb 25 '11 */
			structDeclName = "";
			#initDeclList.setAttribute("functions", funcDeclList);
			// typedefVar = false; // note: typedefVar is not used anywhere after this. so setting it to false. edit: was being used in declaration (search above)
			#initDeclList.setAttribute("idtexts", idtexts);
			#initDeclList.setAttribute("ptr_idtexts", ptr_idtexts);
		}
        ;


initDecl
{
	parseNode = #initDecl;
	// for cases where the variable is initialized to *something like int a = *x.
	// in this case, varIsPointer was getting set to true while parsing *x. But a was being
	// considered as pointer. So, need to store the varIsPointer of the declaration variable.
	boolean varIsPointer_decl = false;
}
                                        //{ String declName = ""; }
        :       #( NInitDecl
				{
					// bug found - need to reset this variable to false
					varIsPointer = false;
				}
                d:declarator
            {
				if(d.getAttribute("idtext") != null) {
					#initDecl.setAttribute("idtext", d.getAttribute("idtext"));
					if(d.getAttribute("ptr_idtext") != null)
						#initDecl.setAttribute("ptr_idtext", d.getAttribute("ptr_idtext"));
					else
						FATAL.error("ptr_idext attribute missing for declarator " + (String)d.getAttribute("idtext"));
				}

				varIsPointer_decl = varIsPointer;
                if (inFunction) {
                    ClauseFactory factory = Factory();
                    if(!Factory().inAssignGroup) {
						Factory().inAssignGroup = true;
						currClause = factory.openClause(#initDecl);
						Factory().clauseInfluencedId(tId++);
						factory.setFromPP(currClause, currPP);
					}
                    factory.setToPP(currClause, ++currPP);
					assignGroupVars.add(currentID);

					/* These lines moved to after ASSIGN initializer */
					// factory.clauseRefVar(currClause, currentID);
					// factory.clauseCondVar(currentID);
                }
				else if(externDecl && functionDecl) // this is a function declaration, so pass it on to initDeclList
					#initDecl.setAttribute("function", (String) d.getAttribute("function"));
            }
                ( attributeDecl )*
                ( ASSIGN { inRHSOfDeclaration = true; } i:initializer { inRHSOfDeclaration = false; }
                {
					ClauseFactory factory = Factory();
					if(!varIsPointer_decl) {
						if(currClause >= 0) {
							factory.clauseRefVar(currClause, currentID);
							factory.clauseCondVar(currentID);
						}
					}
                    if (inFunction) {
                      Expression iexpr =
                        (Expression)(i.getAttribute("expression"));

   					  // was if(varIsPointer) but it was wrong. even if varIsPointer, we are not updating heap but just the value (since this is variable declaration part).
					  // leaving the code here, just in case.
                      if(false)
                      {
						String fun = factory.getFuncName();
						String heapVar = "";
						heapVar = PAHelper.getHeap(fun, currentID);
						DEBUG.println("heap of " + fun + "." + currentID + " is " + heapVar);

                        String currHeap = factory.getCurrVarName(heapVar), currHeap_s = factory.getSymbolicCurrVarName(heapVar);
                        String nv = factory.getNextVarName(heapVar), symbnv = factory.getSymbolicNextVarName(heapVar);
                        String exstr = nv + "=upd(" + currHeap + "," + factory.getCurrVarName(currentID) + "," + iexpr.toString() + ")";
                        String symbstr = "arrassign(" + symbnv + ",upd(" + currHeap_s + "," + factory.getSymbolicCurrVarName(currentID) +
                                            "," + iexpr.toString_symbolic() + "))";

                        factory.addConstraint(currClause, exstr);
                        factory.addSymbolicConstraint(currClause, symbstr);

						if(currClause >= 0) {
							Factory().clauseRefVar(currClause, heapVar);
							assignGroupVars.add(heapVar);
							varIsPointer = false;
						}
                      }
                      else
                      {
						// ----------------------------------------
						// If arrayvar is not null, then assignment is
						// of the form x = a where a is an array and hence 
						// should be converted to x = & a[0]
						// ----------------------------------------

						if(OPTIONS.TRANSLATE_ARRAYVARS && i.getAttribute("arrayvar") != null) {

							DEBUG.println("array variable used as non-array variable in declaration in function "
										+ Factory().getFuncName());

							// ----------------------------------------
							// Set up the array reference for a[0]
							// ----------------------------------------

							// remove all parantheses from e2's expr
							String t_i = iexpr.toString();
							t_i = t_i.replaceAll("\\(", "");
							t_i = t_i.replaceAll("\\)", "");
							iexpr.setEvaluated(t_i);

							String arrName = ((Expression) (i.getAttribute("expression"))).toString();
							arrIndex = "0";
							String bvar = "0";
							globalArrIndex = arrIndex;
							arrSymbolic = "0";
							globalArrSymbolic = arrSymbolic;
							String artificialVar;
								
							Integer count = ArrToCount.get(arrName);
							if(count == null){
							count = new Integer(0);
							}
							artificialVar = ArrRefToString(arrName, count);
							count = new Integer(count.intValue() + 1);
							ArrToCount.put(arrName, count);
							String arrayRef = "ref(" + arrName + "," + "0" + "," + artificialVar + ")";
							String symbRef = "ref(" + ((Expression) (i.getAttribute("expression"))).toString_symbolic() + "," + "0" + ")";


							// ----------------------------------------
							// Now set up the addr reference for & a[0]
							// ----------------------------------------

							String exstr = "And" + iexpr.toString();
							String symbstr = "SAnd" + iexpr.toString_symbolic();
							if(symbstr.contains("ref(")) 
							{
								symbstr = symbstr.replaceAll("\\(", "");
								symbstr = symbstr.replaceAll(",", "");
								symbstr = symbstr.replaceAll("\\)", "");
							}

							Expression andEx = new Expression(Expression.CONSTRAINT, exstr, symbstr);

							String currHeap, currHeap_s;
							String fun = Factory().getFuncName();
							String heapVar = "";

							String var = (String) i.getAttribute("vartext");
							Variable v = new Variable(var);
							if(Factory().getVariables().contains(v) || Factory().getArrayVariables().contains(v))
								heapVar = PAHelper.getHeap2(fun, var);
							else if(ClauseFactory.getGlobalVariables().contains(v) || ClauseFactory.getGlobalArrayVariables().contains(v))
								heapVar = PAHelper.getHeap2("GLOBAL", var);
							else // trying to get address of function pointer
								heapVar = PAHelper.getHeap3(var);

							if(ptrOnLHS && !inDeclaration)
							{
								currHeap = Factory().getPrevVarName(heapVar);
								currHeap_s = Factory().getSymbolicPrevVarName(heapVar);
							}
							else
							{
								currHeap = Factory().getCurrVarName(heapVar);
								currHeap_s = Factory().getSymbolicCurrVarName(heapVar);
							}

							andEx.addArrayReference(iexpr.getAllArrayReference());
							andEx.addArrayReference(arrayRef);
							andEx.addArrayReference("ref(" + currHeap + "," + andEx.toString() + "," + artificialVar + ")");
							
							Factory().addSymbolicConstraint(currClause,
										"addref(" + symbRef + ",ref(" + currHeap_s + "," + andEx.toString_symbolic() + "))");

							iexpr = andEx; // set e2_expr as andEx, to be used appropriately below
						}

						ClauseFactory fac = Factory();
						if(IsAddrVar(fac.getFuncName(), currentID)) { // here func name canNOT be GLOBAL cos we're in declaration
							if(OPTIONS.INCLUDE_ARRAY_CONSTRAINTS) {
								String heapVar = PAHelper.getHeap2(fac.getFuncName(), currentID);
								String currVar = factory.getCurrVarName(heapVar);
								String currVar_s = factory.getSymbolicCurrVarName(heapVar);
								String nv = factory.getNextVarName(heapVar);
								String symbnv = factory.getSymbolicNextVarName(heapVar);
								String idx = getAddrVar(fac.getFuncName(), currentID);

								String exstr = nv + "=upd(" + currVar + "," + idx + "," + iexpr.toString() + ")";
								String symbstr = "arrassign(" + symbnv + ",upd(" + currVar_s + ",S" + idx + "," + iexpr.toString() + "))";

								if(OPTIONS.INCLUDE_ONLY_SYM_ARRAY_CONSTRAINTS)
									exstr = "_=_";
								factory.addConstraint(currClause, exstr);
								factory.addSymbolicConstraint(currClause, symbstr);

								if(currClause >= 0) {
									Factory().clauseRefVar(currClause, heapVar);
									assignGroupVars.add(heapVar);
								}
							}
						}
						else {
							String nv = factory.getNextVarName(currentID);
							String symbnv = factory.getSymbolicNextVarName(currentID);
							String exstr = "", symbstr = "";
							exstr = nv + "=" + iexpr.toString();
							symbstr = "assign(" + symbnv + "," +
							iexpr.toString_symbolic() + ")";

							factory.addConstraint(currClause, exstr);
							factory.addSymbolicConstraint(currClause, symbstr);

							if(currClause >= 0) {
								Factory().clauseRefVar(currClause, currentID);
								assignGroupVars.add(currentID);
							}
						}
                      }
			    
			// array reference is passed up
			factory.addArrayReference(currClause, iexpr.getAllArrayReference());
                    }
                }

                | COLON expr
                )?
                ) 
        { 
            ClauseFactory factory = Factory();

			if(structVar && typedefVar && !inFunction) // if you are in function, then you are not defining a struct
				GlobalDef.addNameForStruct(new Variable(currentID).getCurrentName(), structDefName);
            if (inFunction) {
				// limitation check: variable starting with _
				if(currentID.startsWith("_"))
					FATAL.error("Variable starting with _ encountered: " + currentID + " in function " + factory.getFuncName());
				// if we are not declaring array/struct, add variable. pointer is always a variable
				//if (varIsPointer_decl || (!IDisArray && structDeclName.compareTo("") == 0))
				//if (varIsPointer_decl || !IDisArray) // 13 Sep '10. Andrew asked to compile structs always into normal vars
				if (varIsPointer_decl || StructInfo.isStructPtr(structDeclName) || (!IDisArray && structDeclName.compareTo("") == 0))
				{ // 12 Dec '10. Jorge asked to revert the above change

					if(PREPROCESS && varIsPointer_decl && IDisArray)
						PreprocessInfo.addAddrArr(factory.getFuncName(), currentID);
					// check if the variable is referenced using &. if it is, then add its Addref variable and not the currentID
					if(IsAddrVar(factory.getFuncName(), currentID)) {
						String addrvar = getAddrVar(factory.getFuncName(), currentID);
						ClauseFactory.addGlobalVariable(addrvar, currentInitializerValue);
						ClauseFactory.addGlobalPointerVariable(new Variable(addrvar));
					}
					else {
						factory.addVariable(currentID, currentInitializerValue);
						if(varIsPointer_decl)
							factory.addPointerVariable(new Variable(currentID));
					}
				}
				else //... else add array variable
				{
					if(PREPROCESS && (structDeclName.compareTo("") == 0 || IDisArray) /* structs are not to be compiled as addrVars unless they are pointers by themselves
																						(EDIT: 19-01-11) OR... the struct itself is an array: struct foo a[2]; */)
						PreprocessInfo.addAddrArr(factory.getFuncName(), currentID);
					// check if the variable is referenced using &. if it is, then add its Addref variable and not the currentID
					if(IsAddrVar(factory.getFuncName(), currentID)) {
						String addrvar = getAddrVar(factory.getFuncName(), currentID);
						ClauseFactory.addGlobalVariable(addrvar, currentInitializerValue);
						ClauseFactory.addGlobalPointerVariable(new Variable(addrvar));

						if(aliasArraySize.get(addrvar) == null)
							aliasArraySize.put(addrvar, new Vector<Integer>());
						try { 
							for(Expression size : arraySize) {
								Integer sz = Integer.parseInt(size.toString());
								aliasArraySize.get(addrvar).add(sz);
							}
						}catch (NumberFormatException e) { /* commenting this out to compile ntdrivers */ /*FATAL.error("improper size of array " + addrvar);*/ }
						IDisArray = false;
						arraySize.clear();
					}
					else {
						factory.addArrayVariable(currentID, currentInitializerValue);
						factory.arraySizes.put(new Variable(currentID), (Vector<Expression>)arraySize.clone());
						IDisArray = false;
						arraySize.clear();
					}
				}
			} 
			else if(!functionDecl) {
                // Process global variable, store it in global
                // variables pool
				// limitation check: variable starting with _, but struct names and typedefs are OK
				if(currentID.startsWith("_") && !typedefVar)
					FATAL.error("Global variable starting with _ encountered: " + currentID);
				if(!typedefVar) { // typedef variables do not go into any variable list as they are not actually variables (just names of structs)
					if (varIsPointer_decl || (!IDisArray && !structVar && structDeclName.compareTo("") == 0)) {
						if(PREPROCESS && varIsPointer_decl && IDisArray) // global pointer arrays
							PreprocessInfo.addAddrVar("GLOBAL", currentID);

						// check if the variable is referenced using &. if it is, then add its Addref variable and not the currentID
						if(IsAddrVar("GLOBAL", currentID)) {
							String addrvar = getAddrVar("GLOBAL", currentID);
							Variable v = new Variable(addrvar);
							globalVariables.add(v);
							ClauseFactory.addGlobalVariable(v.getName(), v.getInitialValue());
							ClauseFactory.addGlobalPointerVariable(v);
						}
						else {
							Variable v = new Variable(currentID);
							globalVariables.add(v);
							ClauseFactory.addGlobalVariable(v.getName(), v.getInitialValue());
							if(varIsPointer_decl)
								ClauseFactory.addGlobalPointerVariable(v);
							/* bug found - not trying to be a douche but GLOBAL POINTER ARRAYS 
							   should go into globalArrInit and not globalInit */
							if(i != null)
								if(IDisArray && i.getAttribute("initlist") != null)
								// fix - for cases like global structs (in the form of typedefs) BUT the typedef is actually a pointer
								// eg: typedef struct s *PTR_S; ... PTR_S p = (void *) 0; here, p should go to global init list, not array list.
								// so make sure initlist != null too.
									globalArrInit.put(v.getName(), (Vector<Expression>) i.getAttribute("initlist"));
								else
									globalInit.put(v.getName(), (Expression)i.getAttribute("expression"));
						}
					}
					else 
					{
						if(PREPROCESS && (structDeclName.compareTo("") == 0 || IDisArray) /* structs are not to be compiled as addrVars unless they are pointers by themselves
																							(EDIT: 19-01-11) OR... the struct itself is an array: struct foo a[2]; */)
							PreprocessInfo.addAddrArr("GLOBAL", currentID);
						// check if the variable is referenced using &. if it is, then add its Addref variable and not the currentID
						if(IsAddrVar("GLOBAL", currentID)) {
							String addrvar = getAddrVar("GLOBAL", currentID);
							Variable v = new Variable(addrvar);
							globalVariables.add(v);
							ClauseFactory.addGlobalVariable(v.getName(), v.getInitialValue());
							ClauseFactory.addGlobalPointerVariable(v);

							if(aliasArraySize.get(addrvar) == null)
								aliasArraySize.put(addrvar, new Vector<Integer>());
							try { 
								for(Expression size : arraySize) {
									Integer sz = Integer.parseInt(size.toString());
									aliasArraySize.get(addrvar).add(sz);
								}
							}catch (NumberFormatException e) { /* commenting this out to compile ntdrivers */ /*FATAL.error("improper size of array " + addrvar);*/ }

							IDisArray = false;
							arraySize.clear();
						}
						else {
							Variable v = new Variable(currentID);
							globalArrayVariables.add(v);
							ClauseFactory.addGlobalArrayVariable(v.getName(), v.getInitialValue());
							ClauseFactory.globalArraySizes.put(v, arraySize);
							IDisArray = false;
							arraySize.clear();
							if(i != null){
								// fix - for cases like global structs (in the form of typedefs) BUT the typedef is actually a pointer
								// eg: typedef struct s *PTR_S; ... PTR_S p = (void *) 0; here, p should go to global init list, not array list.
								// so make sure initlist != null too.
								if(i.getAttribute("initlist") != null)
									globalArrInit.put(v.getName(), (Vector<Expression>) i.getAttribute("initlist"));
								else
									globalInit.put(v.getName(), (Expression)i.getAttribute("expression"));
							}
						}
					}
				}
			}
			varIsPointer = false;
			varIsPointer_decl = false;
			NUMERICTYPE = false;
			
			/* bug discovered by Jorge on Feb 25 '11. Basically, structDeclName should not be reset here but after the entire initDeclList has been processed (look
			 * in initDeclList). this is because for eg: struct foo a,b,c. Here the "struct foo" should apply to all variables and not just a.
			 * (note that varIsPointer has to be still reset here though, because the * will apply ONLY to that variable and not other variables) */
			// structDeclName = "";

				// closing rituals for this assignment group, but only if there is a function call
				if((Factory().inAssignGroup && Factory().callPresent(currClause)) ||
					(!PREPROCESS && Factory().inAssignGroup && PreprocessInfo.isCallPP(Factory().getFuncName(), currPP+1)))
				{
					ArrRefToVar.clear(); ArrToCount.clear();
					Factory().closeAssignGroup(currClause, assignGroupVars);
					assignGroupVars.clear();
				}
        }
        ;

pointerGroup
{
	parseNode = #pointerGroup;
}
        :       #( NPointerGroup ( STAR ( typeQualifier )* )+ ) { varIsPointer = true; }
        ;


idList
{
	parseNode = #idList;
}
        :       ID ( COMMA ID )*
        ;

initializer
{
	parseNode = #initializer;
}
        :       #( NInitializer (initializerElementLabel)? initexpr:expr )
        {
			if(initexpr.getAttribute("arrayvar") != null)
 	           #initializer.setAttribute("arrayvar", initexpr.getAttribute("arrayvar"));
			if(initexpr.getAttribute("vartext") != null)
			   #initializer.setAttribute("vartext", initexpr.getAttribute("vartext"));
			if(initexpr.getAttribute("expression") != null)
			   #initializer.setAttribute("expression", initexpr.getAttribute("expression"));
			if(initexpr.getAttribute("initlist") != null)
			   #initializer.setAttribute("initlist", initexpr.getAttribute("initlist"));
        }
                |   lci: lcurlyInitializer
		{
			#initializer.setAttribute("initlist", lci.getAttribute("initlist"));
		}	
        ;

initializerElementLabel
{
	parseNode = #initializerElementLabel;
}
        :   #( NInitializerElementLabel
                (
                    ( LBRACKET expr RBRACKET (ASSIGN)? )
                    | ID COLON
                    | DOT ID ASSIGN
                )
            )
        ;

lcurlyInitializer
{
	parseNode = #lcurlyInitializer;
}
        :  #( NLcurlyInitializer
                il: initializerList
                RCURLY
            )
		{
			#lcurlyInitializer.setAttribute("initlist", il.getAttribute("initlist"));
		}
        ;

initializerList
{
	parseNode = #initializerList;
	Vector<Expression> exList = new Vector<Expression>();
}
        :       ( i:initializer
		{
			exList.add((Expression)i.getAttribute("expression"));
		})*
		{
			#initializerList.setAttribute("initlist", exList);
		}
        ;


declarator
{
	parseNode = #declarator;
	int nparams = 0;
	boolean arrayFlag = false;
}
        :   #( NDeclarator { varIsPointer = false; }
                ( pointerGroup
					{
						if(recordFuncReturnType) // record the fact that function returns pointer
							Factory().returnsPtr = true;
					}
				)?
                ( id:ID {
					recordFuncReturnType = false;
					if(Factory().getFuncName() == null)
						Factory().setFuncName(id.getText());

					if(inStructDef && nestedStructDeclName.compareTo("") != 0) {
						GlobalDef.addStructVariable(id.getText(), nestedStructDeclName);
					}
					else if(structDeclName.compareTo("") != 0) {
						GlobalDef.addStructVariable(id.getText(), structDeclName);
					}

					// nested declarator! (the case below)
					if(nestedDeclarator) {
						DEBUG.println("nested declarator! " + id.getText() + " inFunction?" + inFunction);
						#declarator.setAttribute("id", id.getText());
					}
					#declarator.setAttribute("idtext", id.getText());
					if(varIsPointer)
						#declarator.setAttribute("ptr_idtext", true);
					else
						#declarator.setAttribute("ptr_idtext", false);
				}
                | LPAREN 
				{ nestedDeclarator = true; }
				d:declarator
				RPAREN
				{
					nestedDeclarator = false; 
					#declarator.setAttribute("idtext", d.getAttribute("idtext"));
					if(varIsPointer)
						#declarator.setAttribute("ptr_idtext", true);
					else
						#declarator.setAttribute("ptr_idtext", false);
				}
                )
                (   #( NParameterTypeList
						{
							// this is the code for adding RetVal to either variable or array list
							// it is present here because only in ( pointerGroup )? above, varIsPointer
							// is updated. varIsPointer is used to check whether the return type of
							// the function is * or not.
							if(!inDeclaration && !inParamDec && !inStructDef) { // if inParamDec, then we're inside function pointer dec. so don't add RetVal again.
								// EDIT: since we are now compiling normal structs (not pointers) just like pointer structs (Andrew email on 13-Sep-'10)
								// we can just add ReturnValue to normal variable list always, since there's no other way to return an array
								// EDIT2: changing it back because we are now compiling non pointer structs as arrays. so if the function returns that, RetVal should
								// be in arrays list - Feb 25 '11
								if(structDeclName.compareTo("") == 0 || varIsPointer || StructInfo.isStructPtr(structDeclName))
									Factory().addVariable("ReturnValue", 0);
								else
									Factory().addArrayVariable("ReturnValue", 0);

								Factory().addParam("ReturnValue", 0);
							}
							
							functionDecl = true;

							// setting with 0 params. will be replaced if it has more params
							if(id != null)
								#declarator.setAttribute("function", id.getText() + ",0");
							else // nested declarator
								#declarator.setAttribute("function", d.getAttribute("id") + ",0");

							typedefVar = false;
						}
                      (
                      p: parameterTypeList
						{
							nparams = (Integer) (p.getAttribute("nparams"));
								
							if(id != null) {
								// DEBUG.println("defining " + id.getText() + "," + nparams);
								#declarator.setAttribute("function", id.getText() + "," + nparams);
								if(p.getAttribute("varargs") != null) { // this function has variable args, note it down
									DEBUG.println(id.getText() + " has variable arguments!");
									varArityFuncs.put((String)id.getText(), nparams);
								}
							}
							else {
								// DEBUG.println("defining " + d.getAttribute("id") + "," + nparams);
								#declarator.setAttribute("function", d.getAttribute("id") + "," + nparams);
								if(p.getAttribute("varargs") != null) { // this function has variable args, note it down
									DEBUG.println(d.getAttribute("id") + " has variable arguments!");
									varArityFuncs.put((String)d.getAttribute("id"), nparams);
								}
							}
						}
                        | (idList)?
                      )
                      RPAREN
                    )
                 | LBRACKET ( arrsize: expr )? RBRACKET
			{
				IDisArray = true;
				arrayFlag = true;
				if(arrsize != null && arrsize.getAttribute("expression") != null)
					arraySize.add( (Expression) arrsize.getAttribute("expression") );
				else
					arraySize.add( new Expression("", "") );
			}
                )*
             ) 
	{
		String declText = (id != null)? id.getText() : (String) d.getAttribute("id");
		if(declText.compareTo("_SLICE") == 0)
			inSliceFunction = true;

		// if not a slice function or an external function declaration...
		if(!inSliceFunction && !(externDecl && functionDecl))
		{
			if (inParamDec && !inFuncPtrDec)
			{
			    	// limitation check: variable starting with _, but those in extern functions are OK
				if(declText.startsWith("_") && !externDecl && !typedefVar)
					FATAL.error("Variable starting with _ encountered: " + declText + " as parameter of a function (unknown)");

				ClauseFactory factory = Factory();
				
				if(inFunction) { // make sure we are not in a C function declaration, otherwise if a param is &-referenced, it will get added into global list
									// and cause duplicate error when the actual function is defined

					if(!inDeclaration && !inStatement) { // sometimes, we are inStatement and calling a function one of whose arguments is a function pointer.
														// in such cases. it ends up adding params to the parent function! so just make sure we are not inStatement
														// reason for adding !inDeclaration: sometimes a function pointer is declared as a local variable in a function
														// in such cases, its params got added to the params of the function itself. (eg, floppy when run through CIL)
						// if (varIsPointer || (!arrayFlag && structDeclName.compareTo("") == 0))
						//if (varIsPointer || !arrayFlag) // 13 Sep'10. Andrew asked to always compile structs into normal vars
						if (varIsPointer || StructInfo.isStructPtr(structDeclName) || (!arrayFlag && structDeclName.compareTo("") == 0))
						{ // 12 Dec'10. Jorge asked to revert above change
							// check if the variable is referenced using &. if it is, then add its Addref variable and not the declText
							if(IsAddrVar(factory.getFuncName(), declText)) {
								String addrvar = getAddrVar(factory.getFuncName(), declText);
								ClauseFactory.addGlobalVariable(addrvar, currentInitializerValue);
								ClauseFactory.addGlobalPointerVariable(new Variable(addrvar));

								Factory().addInputVariable(getAddrVar(factory.getFuncName(), declText));
								Factory().addParam(getAddrVar(factory.getFuncName(), declText), 0);
							}
							else {
								factory.addVariable(declText, currentInitializerValue);
								if(varIsPointer)
									factory.addPointerVariable(new Variable(declText));

								Factory().addInputVariable(declText);
								Factory().addParam(declText, 0);
							}
						}
						else {
							if(PREPROCESS && structDeclName.compareTo("") == 0 /* structs are not to be compiled as addrVars unless they are pointers by themselves */)
								PreprocessInfo.addAddrArr(factory.getFuncName(), declText);
							// check if the variable is referenced using &. if it is, then add its Addref variable and not the declText
							if(IsAddrVar(factory.getFuncName(), declText)) {
								String addrvar = getAddrVar(factory.getFuncName(), declText);
								ClauseFactory.addGlobalVariable(addrvar, currentInitializerValue);
								ClauseFactory.addGlobalPointerVariable(new Variable(addrvar));

								if(aliasArraySize.get(addrvar) == null)
									aliasArraySize.put(addrvar, new Vector<Integer>());
								try { 
									for(Expression size : arraySize) {
										Integer sz = Integer.parseInt(size.toString());
										aliasArraySize.get(addrvar).add(sz);
									}
								}
								catch (NumberFormatException e) { 
									/* commenting this out to compile ntdrivers */ /*FATAL.error("improper size of array " + addrvar);*/
								}
								arraySize.clear();

								Factory().addInputVariable(getAddrVar(factory.getFuncName(), declText));
								Factory().addParam(getAddrVar(factory.getFuncName(), declText), 0);
							}
							else {
								factory.addArrayVariable(declText, currentInitializerValue);
								factory.arraySizes.put(new Variable(declText), (Vector<Expression>)arraySize.clone());
								arraySize.clear();

								Factory().addInputVariable(declText);
								Factory().addParam(declText, 0);
							}
						}
						arrayFlag = false;
					}
				}
					//DEBUG.println(declText + " is input variable");
					//Factory().addInputVariable(declText);
					//if(varIsPointer)
					//	Factory().addPointerVariable(new Variable(declText));
					//Factory().addParam(
					//	declText,
					//	currentInitializerValue);
			}
			else if(inStructDef)
			{
				DEBUG.println("struct " + structDefName + "[" + structMemInd + "] is " + declText);
				currentID = declText;
				GlobalDef.addStructMember(
					structDefName,
					declText,
					structMemInd);
				structMemInd++;
			} 
			else if ( inDeclaration ) 
			{
				//else
				{
					currentID = declText;

					if(inFunction) {
						Variable v = new Variable(currentID);
						ClauseFactory fac = Factory();
						boolean isAddrVar = false;
						String addrvar = null;
						if(fac.getFuncName() != null && IsAddrVar(fac.getFuncName(), currentID)) {
							isAddrVar = true;
							addrvar = getAddrVar(fac.getFuncName(), currentID);
						}
						else if(IsAddrVar("GLOBAL", currentID)) {
							isAddrVar = true;
							addrvar = getAddrVar("GLOBAL", currentID);
						}

						// doing this check here itself (from ClauseFactory.addVariable().. etc) in order to properly add variables which are defined
						// in the same function in different blocks AND &-referenced. Essentially the check in addVariable() won't be triggered, at
						// least when adding variables from here (there are some cases like adding condCallVar etc where it might be triggered)
						// so the check in addVariable() has not been deleted
						// =================================================================
						if(fac.getVariables().contains(v) || fac.getArrayVariables().contains(v) || 
								ClauseFactory.getGlobalVariables().contains(v) || ClauseFactory.getGlobalArrayVariables().contains(v) ||
								(!PREPROCESS && PreprocessInfo.getGlobalVars().contains(v)) ||
								(!PREPROCESS && isAddrVar && ClauseFactory.getGlobalVariables().contains(new Variable(addrvar)))
						)
						{
							if(varScopes.get(currentID) == null) {
								varScopes.put(currentID, new Stack<Integer>());
								varScopes.get(currentID).push(0); // dummy, popped below
							}
							varScopes.get(currentID).pop();
							varScopes.get(currentID).push(scopeCnt);
							currentID = currentID + "$__" + scopeCnt + "$";
						}
						// =================================================================
					}
				}
			}
		    else if(!inAssign && !inFuncPtrDec) // make sure we are not in function POINTER dec
		    {
               	 //in declaration of a function
				 String funcName = declText;
               	 Factory().setFuncName(funcName);
				 Factory().protoLineNum = #declarator.getLineNum();
				 if(funcName.compareTo("main") == 0)
					 mainFac = currentFac;
            }
	    } 
    }
        ;

parameterTypeList
{
	parseNode = #parameterTypeList;
	structDeclName = "";
	varIsPointer = false;
	IDisArray = false;
	int nparams = 0;
}
        :       ({if(inParamDec)inFuncPtrDec = true; inParamDec=true;} parameterDeclaration {inParamDec = false;} ( COMMA | SEMI )? 
		{
			nparams++;	
			structDeclName = "";
			varIsPointer = false;
			IDisArray = false;
		}
		)+ ( VARARGS 
		{
			#parameterTypeList.setAttribute("varargs", true);
		})?
		{
			#parameterTypeList.setAttribute("nparams", nparams);inFuncPtrDec = false; 
		}
        ;
    
parameterDeclaration
{
	parseNode = #parameterDeclaration;
}
        :       #( NParameterDeclaration 
                d:declSpecifiers
                (i:declarator | nonemptyAbstractDeclarator)?
				{
					if(i != null && d.getAttribute("sname") != null && i.getAttribute("idtext") != null) { // handles the case struct FOO a and FOO a in parameter
						String structType = (String) d.getAttribute("sname");
						String idtext = (String) i.getAttribute("idtext");
						
						String func = Factory().getFuncName();
						if(IsAddrVar(func, idtext))
							Factory().addGlobalStructVariable(new Variable(getAddrVar(func, idtext)), structType);
						else if(IsAddrVar("GLOBAL", idtext))
							Factory().addGlobalStructVariable(new Variable(getAddrVar("GLOBAL", idtext)), structType);
						else
							Factory().addStructVariable(new Variable(idtext), structType);
					}
				}
                )
        ;

functionDef
{
	parseNode = #functionDef;
	int thisBlockId = 0;
}
        :   #( NFunctionDef 
            {
		//if(!inSliceFunction) {
                    Variable globalvar;

                    // Add special ReturnValue variable: a placeholder
                    // for the return value
					varScopes.clear();
					scopeCnt = 0;

                    // Add info on the start program point of the function
                    Factory().setStartPoint(currPP);

                    // We also add global variables to the variables of the
                    // current clause factory
	
		    /* ===============================================================================
			Vijay - This process is now done when the variable is encountered because
				global variables are STATIC and it makes more sense to do this there.
				Code is still in comments for backtracking in case of bug.

                    for (Enumeration<Variable> e = globalVariables.elements(); e.hasMoreElements();) {
                        globalvar = e.nextElement();
                        Factory().addGlobalVariable(
                            globalvar.getName(), 
                            globalvar.getInitialValue());
                    }

	    	    for (Enumeration<Variable> e = globalArrayVariables.elements(); e
			 .hasMoreElements();)
		    {
		        globalvar = e.nextElement();
		        Factory().addGlobalArrayVariable(
					globalvar.getName(), globalvar.getInitialValue());
		    }
		    ==================================================================================
		    */

		    thisBlockId = blockId++;
			if(!OLD_CHANGES)
				hierarchy.add(new Hierarchy(0, thisBlockId));
		    Factory().createBlockClause(thisBlockId, false);
		    blockStack.push(thisBlockId);
		    hasChildren.push(false);

                    // Declare that we are currently processing syntactic
                    // elements in the context of a function.
                    inFunction = true;
					
			// minor bug: have to reset lastReturnNextPP
			lastReturnNextPP = -1;

					blockType.push(FUNCTION);
                //}
	}
        ( { recordFuncReturnType = true; /* will be set to false in declarator after checking if function returns pointer */ }
		functionDeclSpecifiers)?
        declarator
        (declaration | VARARGS)*
		{
			if(OPTIONS.WP_COMPILATION) firstStmt=true;
		}
                compoundStatement
        {
			if(OPTIONS.WP_COMPILATION)
				for(int i = 0; i < Factory().getParams().size(); i++)
					ClauseFactory.addGlobalVariable(localToGlobalVar(Factory().getFuncName(), i), 0);

            for(int i = 1; i <= maxTmpCilVarNum; i++)
                Factory().addVariable("CIL_Tmp" + i, 0);
            maxTmpCilVarNum = 0;
            if(tmpCilMap.size() != 0)
                tmpCilMap.clear();
            clearTmpCilVar();

			blockType.pop();
			varScopes.clear();
			tmpIdxVarId = 0;
			tmpIdxVarMap.clear();
			scopeCnt = 0;

			inSliceFunction = false;
		    //if(!inSliceFunction) // we are not in _SLICE DEFINITION
			//{
				// closing rituals for the previous assignment group, if any
				if(Factory().inAssignGroup)
				{
					ArrRefToVar.clear(); ArrToCount.clear();
					Factory().closeAssignGroup(currClause, assignGroupVars);
					assignGroupVars.clear();
				}

				// do sanity checks
				if(slicing && slicingSanityCheck != currPP)
					FATAL.error("call to _SLICE is not the last statement in " + Factory().getFuncName());

				// reset variables
				slicing = false;
				inSafety = false;
				slicingSanityCheck = 0;

				while(blockStack.peek() != thisBlockId) {
					Factory().popBlockClause();
					int thatBlockId = blockStack.pop();

					if(!hasChildren.pop())
						hierarchy.add(new Hierarchy(thatBlockId, thatBlockId));
				}
				if(!hasChildren.pop())
					hierarchy.add(new Hierarchy(thisBlockId, thisBlockId));
				blockStack.pop();

				//---------------------------------------------------------
				// map all goto statements to their labels
				//---------------------------------------------------------
				for (Integer clauseId : gotoStatements.keySet()) {
					Integer toPP = labels.get(gotoStatements.get(clauseId));
					if (toPP == null)
						DEBUG.println("WARNING! Invalid label goto " + gotoStatements.get(clauseId) + " in function " 
							+ Factory().getFuncName());
					else
						Factory().setToPP(clauseId, toPP);
				}
				gotoStatements.clear();
				labels.clear();


				//---------------------------------------------------------
				// If function does not end with a return
				//---------------------------------------------------------
				if (lastReturnNextPP != currPP) 
				{
					ClauseFactory factory = Factory();

					DEBUG.println(factory.getFuncName() + " does not end in return. Adding artificial return...");
					String RETVAL = OPTIONS.WP_COMPILATION? localToGlobalVar(factory.getFuncName(), 0) : "ReturnValue";

					// create an artificial return transition
					currClause = factory.openClause(#functionDef);
					factory.setFromPP(currClause, currPP);
					factory.setToPP(currClause, ++currPP);
					factory.clauseInfluencedId(tId++);

                    //---------------------------------------------------------
                    // Evaluated representation of return statement
                    //---------------------------------------------------------
                    String retcons = factory.getNextVarName(RETVAL);
                    retcons += "=_";
                    factory.clauseRefVar(currClause, RETVAL);
					if(Factory().inAssignGroup)
						assignGroupVars.add(RETVAL);
                    factory.addConstraint(currClause,retcons) ;  

                    //---------------------------------------------------------
                    // Symbolic representation of return
                    //---------------------------------------------------------
                    retcons = "assign(";
                    retcons += factory.getSymbolicNextVarName(RETVAL);
                    retcons += ",_)";
                    factory.addSymbolicConstraint(currClause, retcons);

					// add end point
					Factory().addEndPoint(currPP);
					currPP++;
				}

				// Declare that we are not inside a function anymore.
				inFunction = false;

				DEBUG.println("");

				Factory().popBlockClause();
				if(Factory().blockStack.size() != 0)
					FATAL.error("after popping " + Factory().getFuncName() + ", block stack is not empty! contents: " +
									Factory().blockStack);
            //}
		}
            )
        ;

functionDeclSpecifiers
{
	parseNode = #functionDeclSpecifiers;
}
        :       
                ( functionStorageClassSpecifier
                | typeQualifier
                | typeSpecifier { NUMERICTYPE =false; } //not needed anymore here
                )+
        ;

declarationList
{
	parseNode = #declarationList;
}
        :
                (   options {
                        warnWhenFollowAmbig = false;
                    } :
                localLabelDecl
                | declaration
                )+
        ;

localLabelDecl
{
	parseNode = #localLabelDecl;
}
        :   #("__label__" (ID)+ )
        ;
   
compoundStatement
{
	parseNode = #compoundStatement;
	scopeCnt++;
	for(Stack<Integer> s : varScopes.values()) // replicate
		s.push(s.peek());
	
	if(OPTIONS.WP_COMPILATION && firstStmt && Factory().getFuncName().compareTo("func_main") != 0 /* doesn' apply to main*/) {
		firstStmt = false;
		ClauseFactory factory = Factory();

		currClause = factory.openClause(#compoundStatement);
		factory.setFromPP(currClause, currPP);
		factory.setToPP(currClause, ++currPP);
		factory.clauseInfluencedId(tId++);

		for(int i = 0; i < factory.getParams().size(); i++) {
			String v = factory.getParams().elementAt(i).getName();

			// small sanity check
			if(i == 0 || v.compareTo("ReturnValue") == 0)
				if(i != 0 || v.compareTo("ReturnValue") != 0)
					FATAL.error("716203 in " + Factory().getFuncName() + ": " + i + " " + v);

 			// ReturnValue is not strictly a parameter
			if(v.compareTo("ReturnValue") == 0)
				continue;
			String var = localToGlobalVar(factory.getFuncName(), i);
			String cons = factory.getNextVarName(v);
			cons += "=" + var;
			factory.clauseRefVar(currClause, v);
			if(Factory().inAssignGroup)
				assignGroupVars.add(v);
			factory.addConstraint(currClause,cons) ;  

			cons = "assign(";
			cons += factory.getSymbolicNextVarName(v);
			cons += ",S" + var + ")";
			factory.addSymbolicConstraint(currClause, cons);
		}
	}
}
        :       #( NCompoundStatement
                ( declarationList
                | functionDef
                )*
                ( statementList )?
                RCURLY
                )

{
	Vector<String> removing = new Vector<String>();
	for(String s : varScopes.keySet()) {
		varScopes.get(s).pop();
		if(varScopes.get(s).empty())
			removing.add(s);
	}
	for(String s : removing)
		varScopes.remove(s);
}
        ;

statementList
{
	parseNode = #statementList;
}
        :       ( statement )+
        ;

statement
{
	parseNode = #statement;
}
        :        {
                    inStatement = true;
       		 }
       		 statementBody
       		 {
                    inStatement = false;
                 }
        ;
        
statementBody {
	parseNode = #statementBody;
    int clauseA = -1;
    int clauseB = -1;
    int clauseC = -1;
    int clauseD = -1; 
    int startPP = -1;
    int midPP = -1;
    int thisBlockId = -1;
    int ifBlockId = -1, elseBlockId = -1, ifBlockParent = -1;
    int whileBlockParent = -1;
    int doBlockParent = -1;
    int forBlockParent = -1;
	int forInitClause = -1;

	// supporting calls in block conditions
	boolean loopCondHasCall_ = false;
	int condCallPP_ = -1;

    Collection<Variable> conditionVars = null;


	// for & as address
	boolean internalSignal = false; // used to signal to the clause created AFTER processing statement
									// from the clause created BEFORE statement, to add a symbolic reference
	String internalSymbolicReference = "";
	Expression ei_obj = new Expression();
	Expression ef_obj = new Expression();
	Expression ew_obj = new Expression();
	Expression edo_obj = new Expression();

	Vector<Expression> condArrayIndexExps_;
	Vector<String> condArrayIndexVars_;
}
        :       SEMI                    // Empty statements
        |       compoundStatement
        |       #( NStatementExpr 
                    {
			if(Factory().inAssignGroup && (Factory().numConstraints(currClause) >= OPTIONS.MAX_CONSTRAINTS ||
				Factory().numSymbolicConstraints(currClause) >= OPTIONS.MAX_CONSTRAINTS))
			{
				ArrRefToVar.clear(); ArrToCount.clear();
				Factory().closeAssignGroup(currClause, assignGroupVars);
				assignGroupVars.clear();
			}
			if(!Factory().inAssignGroup)
			{
				tmpIdxVarId = 0;
				tmpIdxVarMap.clear();
				Factory().inAssignGroup = true;
	                        currClause = Factory().openClause(#statementBody) ;
				Factory().clauseInfluencedId(tId++);
                        	Factory().setFromPP(currClause, currPP);
			}
//                        DEBUG.println(String.format("CurrPP: %d", currPP));

        	        Factory().setToPP(currClause, ++currPP);
					currChainStructVar = "";

			if(nestedCallExprs.empty())
				tmpCallVarId = 0;
                    }   
            e:expr
			{
				if(e.getAttribute("expression") != null) {
					#statementBody.setAttribute("expression", e.getAttribute("expression"));
				}
				if(e.getAttribute("opposite") != null) {
					#statementBody.setAttribute("opposite", e.getAttribute("opposite"));
				}
			}
//             { 
//                 // I think we should not need anything here.
//                 // Arbitrary expressions need not be translated.
//                 int i;
//                 Expression cons = (Expression)e.getAttribute("expression");

//                 if (cons.getType() == "disjunction") {
//                     Disjunction cons1 = (Disjunction)cons;
//                     currClause = 
//                     cons1.makeClause(Factory(),
//                         #statementBody, currPP++, currPP);
//                 } else if (cons.getType() == "conjunction") {
//                     Conjunction cons1 = (Conjunction)cons;
//                     currClause = 
//                     cons1.makeClause(Factory(),
//                         #statementBody, currPP++, currPP);
//                 } else if (cons.getType() == "constraint") {
//                     Constraint cons1 = (Constraint)cons;
//                     currClause = 
//                     cons1.makeClause(Factory(),
//                         #statementBody, currPP++, currPP);
//                 }
//             } 
                )
        |       #( "while"
	    {
		ClauseFactory factory = Factory();
		factory.numLoops++;
		blockType.push(WHILE);
		
		// closing rituals for the previous assignment group, if any
		if(Factory().inAssignGroup)
		{
			ArrRefToVar.clear(); ArrToCount.clear();
			Factory().closeAssignGroup(currClause, assignGroupVars);
			assignGroupVars.clear();
		}

		/* Vijay
		 * Create block clause here itself since we need to cater for condition variables.
		 * inCondition = true - any variable encountered will be considered to be a condition variable
		*/
		thisBlockId = blockId++;
		Factory().createBlockClause(thisBlockId, true);
		Factory().setInCondition(true);

		if(blockStack.size() > 0)
			hierarchy.add(new Hierarchy(blockStack.peek(), thisBlockId));
		else
			DEBUG.println("In while: Block stack became empty!");
        whileBlockParent = blockStack.peek();
		blockStack.push(thisBlockId);

		// denote that the previous block, if any, has a child
		if(hasChildren.size() > 0)
		{
			hasChildren.pop();
			hasChildren.push(true);
		}
		
		// denote that THIS block does not have a child (as of now)
		hasChildren.push(false);

		// to check if the condition has any call
		loopCondHasCall.push(false);
		condCallPP.push(currPP);

		// temporary array index vars for arrays that appear in conditions
		condArrayIndexExps.push(new Vector<Expression>());
		condArrayIndexVars.push(new Vector<String>());
		tmpIdxVarId = 0;
	    }
	    ew:expr 
            {
				condArrayIndexExps_ = condArrayIndexExps.peek();
				condArrayIndexVars_ = condArrayIndexVars.peek();

				// check if the condition has any call
				loopCondHasCall_ = loopCondHasCall.pop();
				if(loopCondHasCall_)
					condCallPP_ = condCallPP.peek();
				condCallPP.pop();

				// inCondition set to false - variables no longer considered to be condition variables
				Factory().setInCondition(false);
				conditionVars = Factory().getBlockClauseConditionVariables();

                int i;
                int startPP1, exitPP, bodyPP;
                Expression exp = (Expression)(ew.getAttribute("expression"));

                startPP1 = currPP++;
                exitPP = currPP++;
                bodyPP = currPP;
                DEBUG.println(String.format("While Loop at function %s PP: %d", Factory().getFuncName(), startPP1));
				Factory().loopStartPPs.add("p" + startPP1);
				Factory().loopExitPPs.add("p" + exitPP);
                whileStartPP.push(startPP1);

				Factory().setBlockStartPP(startPP1);
				Factory().setBlockEndPP(exitPP);

				// if the loop condition had a call, then "continue" should go to the call and not the condition directly
				if(loopCondHasCall_)
					continueContext.push(condCallPP_);
				else
					continueContext.push(startPP1);
				// break would be unaffected though
                breakContext.push(exitPP);

                if (!(exp.isLogical())) {

                    Expression dis = new Expression(Expression.DISJUNCTION);
                    Expression c1 = new Expression(Expression.CONJUNCTION);
                    Expression c2 = new Expression(Expression.CONJUNCTION);

                    // DEBUG.println(String.format("1: Converting %s to boolean", exp.toString()));

					Expression exp1 = new Expression(Expression.CONSTRAINT,
                            exp.toString() + ">0",
                            "gt(" + exp.toString_symbolic() + ",0)");
					exp1.setText(ew.getAttribute("plaintext") + " > 0");
                    c1.addConstraint(exp1);

					Expression exp2 = new Expression(Expression.CONSTRAINT,
                            exp.toString() + "<0",
                            "gt(0," + exp.toString_symbolic() + ")");
					exp2.setText(ew.getAttribute("plaintext") + " < 0");
                    c2.addConstraint(exp2);

                    dis.addDisjunct(c1);
                    dis.addDisjunct(c2);

					int prevCurrClause = currClause;
                    currClause =
                    dis.makeClause(Factory(),
                        #statementBody, startPP1, bodyPP, condArrayIndexExps_, condArrayIndexVars_);

					ew_obj = (Expression) (ew.getAttribute("expression"));
					// find out how many clauses were created
					for(int t = prevCurrClause; t < currClause; t++) {
						Factory().clauseInfluencedId(tId++);
						Factory().addArrayReference(t+1, ew_obj.getAllArrayReference());
						// add branch indicator by Duc Hiep
						Factory().setBranch(t+1);
					}

					// add symbolic references if needed
					if(addSymbolicReference) {
						Factory().addSymbolicConstraints(currClause - prevCurrClause, symbolicReference);
						addSymbolicReference = false;
						internalSignal = true;
						internalSymbolicReference = symbolicReference;
					}

                    Expression opp;
                    if(OPTIONS.EQ_TO_INEQ) {
                        opp = new Expression(Expression.CONJUNCTION);

                        Expression tmpex1 = new Expression(Expression.CONSTRAINT,
                            exp.toString() + ">=0", 
                            "geq(" + exp.toString_symbolic() + ",0)");
                        tmpex1.setText(ew.getAttribute("plaintext") + " >= 0");

                        Expression tmpex2 = new Expression(Expression.CONSTRAINT,
                            exp.toString() + "<=0", 
                            "geq(0," + exp.toString_symbolic() + ")");
                        tmpex2.setText(ew.getAttribute("plaintext") + " <= 0");

                        opp.addConstraint(tmpex1);
                        opp.addConstraint(tmpex2);
                    }
                    else {
                        opp =
                        new Expression(Expression.CONSTRAINT,
                            exp.toString() + "=0", 
                            "eq(" + exp.toString_symbolic() + ",0)");
                        opp.setText(ew.getAttribute("plaintext") + " == 0");
                    }

                    // DEBUG.println(String.format("1: Storing attribute %s type %d", opp.toString(), opp.getType()));
                    ew.setAttribute("opposite", opp);


                } else {
					int prevCurrClause = currClause;
                    currClause = 
                    exp.makeClause(Factory(),
                        #statementBody, startPP1, bodyPP, condArrayIndexExps_, condArrayIndexVars_);
		    
					// find out how many clauses were created
					for(int t = prevCurrClause; t < currClause; t++) {
						Factory().clauseInfluencedId(tId++);
						Factory().addArrayReference(t+1, ew_obj.getAllArrayReference());
						// add branch indicator by Duc Hiep
						Factory().setBranch(t+1);
					}

					// add symbolic references if needed
					if(addSymbolicReference) {
						Factory().addSymbolicConstraints(currClause - prevCurrClause, symbolicReference);
						addSymbolicReference = false;
						internalSignal = true;
						internalSymbolicReference = symbolicReference;
					}


					#statementBody.setAttribute("expression", ew.getAttribute("expression"));
					#statementBody.setAttribute("opposite", ew.getAttribute("opposite"));
                }
				controlBreakingEnd.push(false);
            }
            statement
            {
				condArrayIndexExps_ = condArrayIndexExps.pop();
				condArrayIndexVars_ = condArrayIndexVars.pop();

		// closing rituals for the previous assignment group, if any
		if(Factory().inAssignGroup)
		{	
			ArrRefToVar.clear(); ArrToCount.clear();
			Factory().closeAssignGroup(currClause, assignGroupVars);
			assignGroupVars.clear();
		}
				boolean controlBreak = controlBreakingEnd.pop();
				if(controlBreak) // if some idiot wrote a while loop ending in an unconditional break, essentially invalidating the loop (it happened, seriously) 
					currPP--;    // then decrease currPP

                int startPP1, exitPP;
                Expression nexp = (Expression)(ew.getAttribute("opposite"));

                startPP1 = whileStartPP.pop();

//                DEBUG.println("Pop breakContext");

                exitPP = breakContext.pop();
				continueContext.pop();

                //-------------------------------------------------------------
                // Construct a clause exiting the loop
				// Do this under a separate sibling block
                //-------------------------------------------------------------
                if (nexp.isLogical()) {
					int oppBlockId = blockId++;
					Factory().createBlockClause(oppBlockId, false);
					Factory().setBlockClauseConditionVariables(conditionVars);

					// do the following step because the current block on top of the stack
					// is the while block (along with all the artificial blocks).
					// We need the while block's parent block id, so keep popping until that.
					Stack <Integer> tempStack = new Stack <Integer>();
					while(blockStack.peek() != thisBlockId)
						tempStack.push(blockStack.pop());
					tempStack.push(blockStack.pop()); // one more pop to expose parent block on top
					
					if(blockStack.size() > 0)
						hierarchy.add(new Hierarchy(blockStack.peek(), oppBlockId));
					else
						DEBUG.println("In while opp: Block stack became empty!");

					// push all the blocks' ids in again
					while(tempStack.size() > 0)
						blockStack.push(tempStack.pop());

					// this block will never have a child
					hierarchy.add(new Hierarchy(oppBlockId, oppBlockId));

					int prevCurrClause = currClause;
                    currClause = nexp.makeClause(Factory(), #statementBody, startPP1, exitPP, condArrayIndexExps_, condArrayIndexVars_);

					// find out how many clauses were created
					for(int t = prevCurrClause; t < currClause; t++) {
						Factory().clauseInfluencedId(oppBlockId, tId++);
						Factory().addArrayReference(t+1, ew_obj.getAllArrayReference());
						// add branch indicator by Duc Hiep
						Factory().setBranch(t+1);
					}

					// add symbolic references if needed
					if(internalSignal)
						Factory().addSymbolicConstraints(currClause - prevCurrClause, internalSymbolicReference);

					// pop this block immediately
					Factory().popBlockClause();

                }

                //-------------------------------------------------------------
                // Construct a clause representing transition from the end of
                // the loop body into the loop start
				// ADDING SUPPORT: if the loop condition has a call then this
				// trans should go to the call trans and not loop start trans
                //-------------------------------------------------------------
                currClause = 
                Factory().openClause(#statementBody);
		Factory().clauseInfluencedId(tId++);
                Factory().setFromPP(currClause, currPP);
				if(loopCondHasCall_)
	                Factory().setToPP(currClause, condCallPP_); // condCallPP_ is the PP of the call when loop cond has call
				else
    	            Factory().setToPP(currClause, startPP1);

				// until we hit this block's id on the stack, keep popping.
				// artificial blocks could have been created by breaks/returns within ifs
				while(blockStack.peek() != thisBlockId) {
					Factory().popBlockClause();
					int thatBlockId = blockStack.pop();

					if(!hasChildren.pop())
						hierarchy.add(new Hierarchy(thatBlockId, thatBlockId));
				}
				Factory().popBlockClause();
				blockStack.pop();

		// if this block does not have a child, record in hierarchy about it
		if(!hasChildren.pop())
		    hierarchy.add(new Hierarchy(thisBlockId, thisBlockId));

                // Increment current pp value
                currPP++;

//                DEBUG.println(String.format("CurrPP: %d", currPP));

                //-------------------------------------------------------------
                // Construct a clause representing transition from the exit
                // program point into the "current" fresh program point
                //-------------------------------------------------------------
                currClause = 
                Factory().openClause(#statementBody);
		Factory().clauseInfluencedId(tId++);
                Factory().setFromPP(currClause, exitPP);
                Factory().setToPP(currClause, currPP);
				Factory().splEmptyTrans(currClause);

//                 addArrAccCons(
//                     Factory(), ArrRefToVar, clauseA);
//                 addArrAccCons(
//                     Factory(), ArrRefToVar, clauseB);
//                 addArrAccCons(
//                     Factory(), ArrRefToVar, clauseC);
//                 addArrAccCons(
//                     Factory(), ArrRefToVar, clauseD);

				blockType.pop();
            }
                )
        |       #( "do" 
		{
			ClauseFactory factory = Factory();
			factory.numLoops++;
			blockType.push(DO);
			
			// closing rituals for the previous assignment group, if any
			if(Factory().inAssignGroup)
			{
				ArrRefToVar.clear(); ArrToCount.clear();
				Factory().closeAssignGroup(currClause, assignGroupVars);
				assignGroupVars.clear();
			}

			/* Vijay
			 * Create block clause here itself since we need to cater for condition variables.
			 * inCondition = false - not yet. wait until we are going to parse the block condition
			*/
			thisBlockId = blockId++;
			Factory().createBlockClause(thisBlockId, true);

			if(blockStack.size() > 0)
				hierarchy.add(new Hierarchy(blockStack.peek(), thisBlockId));
			else
				DEBUG.println("In do: Block stack became empty!");
			doBlockParent = blockStack.peek();
			blockStack.push(thisBlockId);

			// denote that the previous block, if any, has a child
			if(hasChildren.size() > 0)
			{
				hasChildren.pop();
				hasChildren.push(true);
			}
			
			// denote that THIS block does not have a child (as of now)
			hasChildren.push(false);
			
			// do special things for do-while loop
			doStartPP.push(currPP);
			delayedBreakClauses.push(new Vector<Integer>());
			delayedContinueClauses.push(new Vector<Integer>());
		}
		statement
		{
			Factory().setInCondition(true);
			// closing rituals for the previous assignment group, if any
			if(Factory().inAssignGroup)
			{	
				ArrRefToVar.clear(); ArrToCount.clear();
				Factory().closeAssignGroup(currClause, assignGroupVars);
				assignGroupVars.clear();
			}
			inStatement = true;

			// until we hit this block's id on the stack, keep popping.
			// artificial blocks could have been created by breaks/returns within ifs
			// we do this step here for do-while because the expr clauses (coming up next) 
			// should fall into do-while's block and not any other artificial block
			while(blockStack.peek() != thisBlockId) {
				Factory().popBlockClause();
				int thatBlockId = blockStack.pop();

				if(!hasChildren.pop())
					hierarchy.add(new Hierarchy(thatBlockId, thatBlockId));
			}

			// not relevant for do loops but just for consistency...
			loopCondHasCall.push(false);

			// temporary array index vars for arrays that appear in conditions
			condArrayIndexExps.push(new Vector<Expression>());
			condArrayIndexVars.push(new Vector<String>());
		}
		edo: expr
		{
			condArrayIndexExps_ = condArrayIndexExps.pop();
			condArrayIndexVars_ = condArrayIndexVars.pop();
		
			loopCondHasCall.pop();
			inStatement = false;
			Factory().setInCondition(false);
			conditionVars = Factory().getBlockClauseConditionVariables();
			Expression exp = (Expression)(edo.getAttribute("expression"));

			// establish the PPs
			int bodyPP = doStartPP.pop(); // start of the STATEMENTS in do-while
			startPP = currPP;		  	  // condition clause's PP
			int exitPP = ++currPP;		  // exit clause's PP

			/* ********************** BLOCK/CLAUSES FOR EXPR ****************** */
			//-------------------------------------------------------------
			// Construct clause(s) from the condition
			// to the first statement in the loop's body
			//-------------------------------------------------------------
			/* **************************************************************** */
			if (!(exp.isLogical())) {

				Expression dis = new Expression(Expression.DISJUNCTION);
				Expression c1 = new Expression(Expression.CONJUNCTION);
				Expression c2 = new Expression(Expression.CONJUNCTION);

				c1.addConstraint(
					new Expression(Expression.CONSTRAINT,
						exp.toString() + ">0",
						"gt(" + exp.toString_symbolic() + ",0)"));
				c2.addConstraint(
					new Expression(Expression.CONSTRAINT,
						exp.toString() + "<0",
						"gt(0," + exp.toString_symbolic() + ")"));

				dis.addDisjunct(c1);
				dis.addDisjunct(c2);

				int prevCurrClause = currClause;
				currClause = dis.makeClause(Factory(),
								#statementBody, startPP, bodyPP, condArrayIndexExps_, condArrayIndexVars_);

				edo_obj = (Expression) (edo.getAttribute("expression"));
				// find out how many clauses were created
				for(int t = prevCurrClause; t < currClause; t++) {
					Factory().clauseInfluencedId(tId++);
					Factory().addArrayReference(t+1, edo_obj.getAllArrayReference());
					// add branch indicator by Duc Hiep
					Factory().setBranch(t+1);
				}

				// add symbolic references if needed
				if(addSymbolicReference) {
					Factory().addSymbolicConstraints(currClause - prevCurrClause, symbolicReference);
					addSymbolicReference = false;
					internalSignal = true;
					internalSymbolicReference = symbolicReference;
				}

				Expression opp = 
					new Expression(Expression.CONSTRAINT,
						exp.toString() + "=0", 
						"eq(" + exp.toString_symbolic() + ",0)");

				edo.setAttribute("opposite", opp);
			}
			else {
				int prevCurrClause = currClause;
				currClause = 
					exp.makeClause(Factory(),
						#statementBody, startPP, bodyPP, condArrayIndexExps_, condArrayIndexVars_);
		
				// find out how many clauses were created
				for(int t = prevCurrClause; t < currClause; t++) {
					Factory().clauseInfluencedId(tId++);
					Factory().addArrayReference(t+1, edo_obj.getAllArrayReference());
					// add branch indicator by Duc Hiep
					Factory().setBranch(t+1);
				}

				// add symbolic references if needed
				if(addSymbolicReference) {
					Factory().addSymbolicConstraints(currClause - prevCurrClause, symbolicReference);
					addSymbolicReference = false;
					internalSignal = true;
					internalSymbolicReference = symbolicReference;
				}
			}

			// set the toPP of "continue" or "break" clauses within this do-while
			for(Integer clauseId: delayedBreakClauses.pop())
				Factory().setToPP(clauseId, exitPP);
			for(Integer clauseId: delayedContinueClauses.pop())
				Factory().setToPP(clauseId, startPP);
		
			// now pop the do-while block, it is needed no more
		    Factory().setBlockStartPP(startPP);
		    Factory().setBlockEndPP(exitPP);
			Factory().popBlockClause();
			blockStack.pop();

			// if this block does not have a child, record in hierarchy about it
			if(!hasChildren.pop())
				hierarchy.add(new Hierarchy(thisBlockId, thisBlockId));




			/* ********************** OPPOSITE BLOCK/CLAUSES ****************** */
			//-------------------------------------------------------------
			// Construct clause(s) exiting the loop
			// Do this under a separate sibling block
			//-------------------------------------------------------------
			/* **************************************************************** */
			Expression nexp = (Expression)(edo.getAttribute("opposite"));
			if (nexp.isLogical()) {
				int oppBlockId = blockId++;
				Factory().createBlockClause(oppBlockId, false);
				Factory().setBlockClauseConditionVariables(conditionVars);

				// the block on top is the parent of the do-while block because all blocks upto and 
				// including the do-while block have been popped off before
				if(blockStack.size() > 0)
					hierarchy.add(new Hierarchy(blockStack.peek(), oppBlockId));
				else
					DEBUG.println("In do opp: Block stack became empty!");

				// this block will never have a child
				hierarchy.add(new Hierarchy(oppBlockId, oppBlockId));

				int prevCurrClause = currClause;
				currClause = nexp.makeClause(Factory(), #statementBody, startPP, exitPP, condArrayIndexExps_, condArrayIndexVars_);

				// find out how many clauses were created
				for(int t = prevCurrClause; t < currClause; t++) {
					Factory().clauseInfluencedId(oppBlockId, tId++);
					Factory().addArrayReference(t+1, ew_obj.getAllArrayReference());
					// add branch indicator by Duc Hiep
					Factory().setBranch(t+1);
				}

				// add symbolic references if needed
				if(internalSignal)
					Factory().addSymbolicConstraints(currClause - prevCurrClause, internalSymbolicReference);

				// pop this block immediately
				Factory().popBlockClause();
			}
			blockType.pop();
		})
        |       #( "for"
		{
			ClauseFactory factory = Factory();
			factory.numLoops++;
			blockType.push(FOR);

			// closing rituals for the previous assignment group, if any
			if(Factory().inAssignGroup)
			{
				ArrRefToVar.clear(); ArrToCount.clear();
				Factory().closeAssignGroup(currClause, assignGroupVars);
				assignGroupVars.clear();
			}

			// a list of instantiations
			isDelayed = true;
			Factory().createDelayedClause(
			    #statementBody, false);
			inForInitialization = true;
			tmpIdxVarId = 0;
		} 
		efi:expr
		{
			inForInitialization = false;
			isDelayed = false;
			/* Vijay
			* Create block clause here itself since we need to cater for condition variables.
			* inCondition = true - any variable encountered will be considered to be a condition variable
			*/
			thisBlockId = blockId++;
	                Factory().createBlockClause(thisBlockId, true);
			if(blockStack.size() > 0)
                        	hierarchy.add(new Hierarchy(blockStack.peek(), thisBlockId));
			else
        	                DEBUG.println("In for: Block stack became empty!");
            forBlockParent = blockStack.peek();
			blockStack.push(thisBlockId);

			// denote that the previous block, if any, has a child
			if(hasChildren.size() > 0)
			{
					hasChildren.pop();
					hasChildren.push(true);
			}

			// denote that THIS block does not have a child (as of now)
			hasChildren.push(false);

			Factory().setInCondition(true);

			// open delayed clause (for init clause) here itself, as the loop's condition may add clauses
			// if there is a call in it.. this clause's fromPP and toPP set after condition is parsed
		    currClause = Factory().openDelayedClause();
		    Factory().clauseInfluencedId(tId++);
		    Factory().setFromPP(currClause, currPP++);
		    Factory().setToPP(currClause, currPP);
			forInitClause = currClause;

			loopCondHasCall.push(false);
			condCallPP.push(currPP);

			// temporary array index vars for arrays that appear in conditions
			condArrayIndexExps.push(new Vector<Expression>());
			condArrayIndexVars.push(new Vector<String>());
		}
		ef: expr
		{
			condArrayIndexExps_ = condArrayIndexExps.peek();
			condArrayIndexVars_ = condArrayIndexVars.peek();

			loopCondHasCall_ = loopCondHasCall.pop();
			if(loopCondHasCall_)
				condCallPP_ = condCallPP.peek();
			condCallPP.pop();

			if(ef.getAttribute("expression") == null) { // empty condition in for
				ef.setAttribute("expression", new Expression("1", "1"));
				ef.setAttribute("vartext", "1");
			}
		     // inCondition set to false - variables no longer considered to be condition variables
	            Factory().setInCondition(false);
				conditionVars = Factory().getBlockClauseConditionVariables();
		    
		    int i;
		    int initPP, startPP1, exitPP, bodyPP;
		    Expression initExp = (Expression) (efi
					   .getAttribute("expression"));
		    Expression exp = (Expression) (ef
						   .getAttribute("expression"));
			//initPP = currPP++;
		    startPP1 = currPP++;
		    // Modidfied by Duc Hiep to fix bug on May 11
		    
			// this clause was open before condition is parsed (above). just set its fromPP and toPP here
		    //currClause = Factory().openDelayedClause();
		    //Factory().clauseInfluencedId(tId++);
		    //Factory().setFromPP(forInitClause,
			//				      initPP);
		    //Factory().setToPP(forInitClause,
			//				    startPP1);
		    
		    DEBUG.println(String.format(
						     "For Loop at function %s PP: %d", factories
						     .elementAt(currentFac).getFuncName(),
						     startPP1));
		    exitPP = currPP++;
		    bodyPP = currPP;
		    forStartPP.push(startPP1);
			Factory().loopStartPPs.add("p" + startPP1);
			Factory().loopExitPPs.add("p" + exitPP);

		    Factory().setBlockStartPP(startPP1);
		    Factory().setBlockEndPP(exitPP);
		
			// if the condition had a call, "continue" should go to the call and not the condition directly
			if(loopCondHasCall_)
				continueContext.push(condCallPP_);
			else
				continueContext.push(startPP1);
			// break will remain unaffected though
		    breakContext.push(exitPP);
		    
		    // if (exp==null) DEBUG.println("NULL!");
		    
		    if (!(exp.isLogical())) 
			{
				Expression dis = new Expression(Expression.DISJUNCTION);
				Expression c1 = new Expression(Expression.CONJUNCTION);
				Expression c2 = new Expression(Expression.CONJUNCTION);

				// DEBUG.println(String.format("1: Converting %s to boolean",
				// exp.toString()));

				c1.addConstraint(new Expression(Expression.CONSTRAINT,
								exp.toString() + ">0", "gt("
								+ exp.toString_symbolic() + ",0)"));
				c2.addConstraint(new Expression(Expression.CONSTRAINT,
								exp.toString() + "<0", "gt(0,"
								+ exp.toString_symbolic() + ")"));
				
				dis.addDisjunct(c1);
				dis.addDisjunct(c2);
				
				int prevCurrClause = currClause;
				currClause = dis.makeClause(factories
								.elementAt(currentFac), #statementBody,
								startPP1, bodyPP, condArrayIndexExps_, condArrayIndexVars_);

				ef_obj = (Expression) (ef.getAttribute("expression"));
				// find out how many clauses were created
				for(int t = prevCurrClause; t < currClause; t++) {
					Factory().clauseInfluencedId(tId++);
					Factory().addArrayReference(t+1, ef_obj.getAllArrayReference());
					// add branch indicator by Duc Hiep
					Factory().setBranch(t+1);
				}
				
				// add symbolic references if needed
				if(addSymbolicReference) {
					Factory().addSymbolicConstraints(currClause - prevCurrClause, symbolicReference);
					addSymbolicReference = false;
					internalSignal = true;
					internalSymbolicReference = symbolicReference;
				}

				
				Expression opp = new Expression(Expression.CONSTRAINT,
								exp.toString() + "=0", "eq("
								+ exp.toString_symbolic() + ",0)");

				// DEBUG.println(String.format("1: Storing attribute %s type %d",
				// opp.toString(), opp.getType()));
				ef.setAttribute("opposite", opp);
			
		    }
			else 
			{
				int prevCurrClause = currClause;
				currClause = exp.makeClause(factories
						    .elementAt(currentFac), #statementBody,
						    startPP1, bodyPP, condArrayIndexExps_, condArrayIndexVars_);

				// find out how many clauses were created
				for(int t = prevCurrClause; t < currClause; t++) {
					Factory().clauseInfluencedId(tId++);
					Factory().addArrayReference(t+1, ef_obj.getAllArrayReference());
					// add branch indicator by Duc Hiep
					Factory().setBranch(t+1);
				}

				// add symbolic references if needed
				if(addSymbolicReference) {
					Factory().addSymbolicConstraints(currClause - prevCurrClause, symbolicReference);
					addSymbolicReference = false;
					internalSignal = true;
					internalSymbolicReference = symbolicReference;
				}

		    }
		    
		    // It's not solving the problem, though it works for normal way of programming
		    // incrementation expression
		    isDelayed = true;
		    Factory().createDelayedClause(#statementBody, true);

		}
		fInc: expr
		{
			isDelayed = false;
			forIncrements.push((Expression)(fInc.getAttribute("incrementedExpr")));
			controlBreakingEnd.push(false);
		} 
		statement
		{
			condArrayIndexExps_ = condArrayIndexExps.pop();
			condArrayIndexVars_ = condArrayIndexVars.pop();

		    // closing rituals for the previous assignment group, if any
		    if(Factory().inAssignGroup)
		    {
			ArrRefToVar.clear(); ArrToCount.clear();
			Factory().closeAssignGroup(currClause, assignGroupVars);
			assignGroupVars.clear();
		    }

			boolean controlBreak = controlBreakingEnd.pop();
			if(controlBreak) // if some idiot wrote a for loop ending in an unconditional break, essentially invalidating the loop
				currPP--;    // then decrease currPP

		    int startPP1, exitPP;
		    Expression nexp = (Expression) (ef.getAttribute("opposite"));
		    
		    startPP1 = forStartPP.pop();
		    
		    // DEBUG.println("Pop breakContext");
		    
		    exitPP = breakContext.pop();
				continueContext.pop();
		    
		    // -------------------------------------------------------------
		    // Construct a clause exiting the loop
			// Do this in a separate sibling block
		    // -------------------------------------------------------------
		    if (nexp.isLogical()) 
			{
				int oppBlockId = blockId++;
				Factory().createBlockClause(oppBlockId, false);
				Factory().setBlockClauseConditionVariables(conditionVars);

				// do the following step because the current block on top of the stack
				// is the for block (along with all the artificial blocks).
				// We need the for block's parent block id, so keep popping until that.
				Stack <Integer> tempStack = new Stack <Integer>();
				while(blockStack.peek() != thisBlockId)
					tempStack.push(blockStack.pop());
				tempStack.push(blockStack.pop()); // one more pop to expose parent block on top
				
				if(blockStack.size() > 0)
					hierarchy.add(new Hierarchy(blockStack.peek(), oppBlockId));
				else
					DEBUG.println("In for opp: Block stack became empty!");

				// push all the blocks' ids in again
				while(tempStack.size() > 0)
					blockStack.push(tempStack.pop());

				// this block will never have a child
				hierarchy.add(new Hierarchy(oppBlockId, oppBlockId));

				int prevCurrClause = currClause;
				currClause = nexp.makeClause(factories
								 .elementAt(currentFac), #statementBody,
								 startPP1, exitPP, condArrayIndexExps_, condArrayIndexVars_);

				// find out how many clauses were created
				for(int t = prevCurrClause; t < currClause; t++) {
					Factory().clauseInfluencedId(oppBlockId, tId++);
					Factory().addArrayReference(t+1, ef_obj.getAllArrayReference());
					// add branch indicator by Duc Hiep
					Factory().setBranch(t+1);
				}

				// add symbolic references if needed
				if(internalSignal)
					Factory().addSymbolicConstraints(currClause - prevCurrClause, internalSymbolicReference);

				// pop this block immediately
				Factory().popBlockClause();
		    }
		    
		    // -------------------------------------------------------------
		    // Construct a clause representing transition from the end
		    // of
		    // the loop body into the loop start
			// ADDING SUPPORT: if the loop cond has a call, this trans must
			// go to the call trans and not the loop's start PP
		    // -------------------------------------------------------------
		    currClause = Factory().openDelayedClause();
		    Factory().clauseInfluencedId(tId++);
		    Factory().setFromPP(currClause,
							      currPP);
			if(loopCondHasCall_)
				Factory().setToPP(currClause,
									condCallPP_);
			else
				Factory().setToPP(currClause,
									startPP1);
		    
			while(blockStack.peek() != thisBlockId) {
				Factory().popBlockClause();
				int thatBlockId = blockStack.pop();

				if(!hasChildren.pop())
					hierarchy.add(new Hierarchy(thatBlockId, thatBlockId));
			}
			Factory().popBlockClause();
			blockStack.pop();

		    // if this block does not have a child, record in hierarchy about it
                    if(!hasChildren.pop())
                        hierarchy.add(new Hierarchy(thisBlockId, thisBlockId));

		    // Increment current pp value
		    currPP++;
		    
		    // DEBUG.println(String.format("CurrPP: %d", currPP));
		    
		    // -------------------------------------------------------------
		    // Construct a clause representing transition from the exit
		    // program point into the "current" fresh program point
		    // -------------------------------------------------------------
		    currClause = Factory().openClause(
									    #statementBody);
		    Factory().clauseInfluencedId(tId++);
		    Factory().setFromPP(currClause,
							      exitPP);
		    Factory().setToPP(currClause, currPP);
			Factory().splEmptyTrans(currClause);

		    
		    // addArrAccCons(
		    // Factory(), ArrRefToVar, clauseA);
		    // addArrAccCons(
		    // Factory(), ArrRefToVar, clauseB);
		    // addArrAccCons(
		    // Factory(), ArrRefToVar, clauseC);
		    // addArrAccCons(
		    // Factory(), ArrRefToVar, clauseD);

		    // By Duc Hiep - to provide information on updated Variables
                    // By Vijay - to provide information on condition variables (only applicable for "if" and loops)
                    // and to provide "influenced transition Ids
		    
			forIncrements.pop();
			blockType.pop();
		}				
	)
        |       #( "goto" labelId:ID )
		{
			if(!controlBreakingEnd.empty()) {
				controlBreakingEnd.pop();
				controlBreakingEnd.push(true);
			}
			// closing rituals for the previous assignment group, if any
			if(Factory().inAssignGroup)
			{
				ArrRefToVar.clear(); ArrToCount.clear();
				Factory().closeAssignGroup(currClause, assignGroupVars);
				assignGroupVars.clear();
			}
			currClause = Factory().openClause(#statementBody) ;
			Factory().clauseInfluencedId(tId++);
			Factory().setFromPP(currClause,currPP++) ;
			Factory().setToPP(currClause,currPP);
			gotoStatements.put(currClause, labelId.getText());

			if(labels.get(labelId.getText()) != null) // backedge; record it
				backedge.add(Factory().getFuncName() + ",[p" + labels.get(labelId.getText()) + "]" ) ;
		}
        |       "continue" 	
        {
			if(!controlBreakingEnd.empty()) {
				controlBreakingEnd.pop();
				controlBreakingEnd.push(true);
			}

			// closing rituals for the previous assignment group, if any
			if(Factory().inAssignGroup)
			{
				ArrRefToVar.clear(); ArrToCount.clear();
				Factory().closeAssignGroup(currClause, assignGroupVars);
				assignGroupVars.clear();
			}
            // Instantiate a new clause, and keep its index in
            // currClause
            currClause = 
            Factory().openClause(
                #statementBody);
			Factory().clauseInfluencedId(tId++);

            // Set the current pp as from pp
            Factory().setFromPP(currClause,
                currPP);

            // Set the exit pp as to pp only if this is not do-while loop
			if(!(blockType.peek() == DO))
	            Factory().setToPP(currClause,
    	            continueContext.peek());
			else
				delayedContinueClauses.peek().add(currClause);

			// if the current loop is for, then add its incrementation constraint to this clause
			if(blockType.peek() == FOR) {
				Factory().addConstraint(currClause, forIncrements.peek().toString());
				Factory().addSymbolicConstraint(currClause, forIncrements.peek().toString_symbolic());
				Factory().addArrayReference(currClause, forIncrements.peek().getAllArrayReference());
			}

            // Increment current pp value
            currPP++;

//            DEBUG.println(String.format("CurrPP: %d", currPP));
        }
        |       "break"
        {
			if(!controlBreakingEnd.empty()) {
				controlBreakingEnd.pop();
				controlBreakingEnd.push(true);
			}

			// closing rituals for the previous assignment group, if any
			if(Factory().inAssignGroup)
			{
				ArrRefToVar.clear(); ArrToCount.clear();
				Factory().closeAssignGroup(currClause, assignGroupVars);
				assignGroupVars.clear();
			}
            // Instantiate a new clause, and keep its index in
            // currClause
            currClause = 
            Factory().openClause(
                #statementBody);
			if(OPTIONS.INCLUDE_BLOCK_HIERARCHY)
				breakPredicates.add(tId);
			Factory().clauseInfluencedId(tId++);

            // Set the current pp as from pp
            Factory().setFromPP(currClause,
                currPP);

			// if we're in switch, notify about break present
			if(inSwitch) {
				hasBreak.pop();
				hasBreak.push(true);
			}

            // Set the exit pp as to pp only if this is not do-while loop
			if(blockType.size() > 0 && blockType.peek() == DO)
				delayedBreakClauses.peek().add(currClause);
			else
	            Factory().setToPP(currClause,
    	            breakContext.peek());

			Factory().splEmptyTrans(currClause);
            // Increment current pp value
            currPP++;

        }
        |       #( "return" 
            {
                Factory().hasReturn = true;
				if(!controlBreakingEnd.empty()) {
					controlBreakingEnd.pop();
					controlBreakingEnd.push(true);
				}

				if(!returnStack.empty()) {
					returnStack.pop();
					returnStack.push(true);
				}

		// closing rituals for the previous assignment group, if any
		if(Factory().inAssignGroup)
		{
			ArrRefToVar.clear(); ArrToCount.clear();
			Factory().closeAssignGroup(currClause, assignGroupVars);
			assignGroupVars.clear();
		}

                    ClauseFactory factory = Factory();

                    currClause = factory.openClause(#statementBody) ;
		    Factory().clauseInfluencedId(tId++);
                    factory.setFromPP(currClause,currPP++) ;
                    factory.setToPP(currClause,currPP);
            }
            ( 
                {
                
                    // DEBUG.println(String.format("CurrPP: %d", currPP));
                }
                re:expr 
                {
                    ClauseFactory factory = Factory();
					String RETVAL = OPTIONS.WP_COMPILATION? localToGlobalVar(factory.getFuncName(), 0) : "ReturnValue";

                    //---------------------------------------------------------
                    // Evaluated representation of return statement
                    //---------------------------------------------------------
                    String retcons = factory.getNextVarName(RETVAL);
                    Expression return_value = (Expression)(re.getAttribute("expression"));


					/* EDIT: This entire section is obsolete since we are now compiling non-pointer
					 * structs as arrays directly (Jorge email on 12 Dec'10). Leaving the code JIC.
					// if the function returns a non-pointer struct, return the heap of the struct instead
					// of the struct variable itself. this is because in the calling function, there will be
					// something like <some struct variable> = callee(...); so the callee should return an
					// array (the struct's heap) to match with the return variable
					if(factory.returnsStruct && !factory.returnsPtr) {
						String heap = null;
						Variable var = new Variable((String) re.getAttribute("vartext"));

						if(IsAddrVar(factory.getFuncName(), var.getName()) || factory.getVariables().contains(var)
								|| factory.getArrayVariables().contains(var)) {
							heap = PAHelper.getHeap2(factory.getFuncName(), var.getName());
							if(heap.compareTo("H$0$") == 0)
								heap = PAHelper.getHeap(factory.getFuncName(), var.getName());
						}
						else if(IsAddrVar("GLOBAL", var.getName()) || ClauseFactory.getGlobalVariables().contains(var)
								|| ClauseFactory.getGlobalArrayVariables().contains(var)) {
							heap = PAHelper.getHeap2("GLOBAL", var.getName());
							if(heap.compareTo("H$0$") == 0)
								heap = PAHelper.getHeap("GLOBAL", var.getName());
						}
						else
							FATAL.error(factory.getFuncName() + " returns a non-pointer struct. " +
									"but the variable could not be found in any variable list!");

						return_value = new Expression(heap, "S" + heap);
					}
					*/

                    retcons += "=";
                    retcons += return_value.toString();
                    factory.clauseRefVar(currClause, RETVAL);
		    if(Factory().inAssignGroup)
			assignGroupVars.add(RETVAL);
            /* Jorge - we don't convert here equalities to
               inequalities because it breaks some TRACER assumptions
            */
            
            // if(OPTIONS.EQ_TO_INEQ) {
            //     retcons = factory.getCurrVarName(RETVAL) + ">=" + return_value.toString();
            //     factory.addConstraint(currClause,retcons) ;  
            
            //     retcons = factory.getCurrVarName(RETVAL) + "<=" + return_value.toString();
            //     factory.addConstraint(currClause,retcons) ;  
            // }
            // else {
            factory.addConstraint(currClause,retcons) ;  
            // }
            factory.addLineNum(currClause, re.getLineNum());
                    
		    // array reference is passed up
		    factory.addArrayReference(currClause, return_value.getAllArrayReference());
			
			/* Vijay - not sure why this was uncommented. Haven't seen this anywhere else
                    // addArrAccCons(factory, ArrRefToVar, currClause);
			*/
            /* Jorge - we don't convert here equalities to
                       inequalities because it breaks some TRACER assumptions
             */
                    //---------------------------------------------------------
                    // Symbolic representation of return
                    //---------------------------------------------------------
                    // if(OPTIONS.EQ_TO_INEQ) {
                    //     retcons = "geq(";
                    //     retcons += factory.getSymbolicNextVarName(RETVAL);
                    //     retcons += ",";
                    //     retcons += return_value.toString_symbolic();
                    //     retcons += ")";
                    //     factory.addSymbolicConstraint(currClause, retcons);

                    //     retcons = "geq(";
                    //     retcons += return_value.toString_symbolic();
                    //     retcons += ",";
                    //     retcons += factory.getSymbolicNextVarName(RETVAL);
                    //     retcons += ")";
                    //     factory.addSymbolicConstraint(currClause, retcons);
                    // }
                    // else {
                        retcons = "assign(";
                        retcons += factory.getSymbolicNextVarName(RETVAL);
                        retcons += ",";
                        retcons += return_value.toString_symbolic();
                        retcons += ")";
                        factory.addSymbolicConstraint(currClause, retcons);
                    // }

                } )? 
            {
                    ClauseFactory factory = Factory();
					String RETVAL = OPTIONS.WP_COMPILATION? localToGlobalVar(factory.getFuncName(), 0) : "ReturnValue";
				if(re == null) // no expression to return, so just _
				{
                    //---------------------------------------------------------
                    // Evaluated representation of return statement
                    //---------------------------------------------------------
                    String retcons = factory.getNextVarName(RETVAL);
                    retcons += "=_";
                    factory.clauseRefVar(currClause, RETVAL);
					if(Factory().inAssignGroup)
						assignGroupVars.add(RETVAL);
                    factory.addConstraint(currClause,retcons) ;  

                    //---------------------------------------------------------
                    // Symbolic representation of return
                    //---------------------------------------------------------
                    retcons = "assign(";
                    retcons += factory.getSymbolicNextVarName(RETVAL);
                    retcons += ",_)";
                    factory.addSymbolicConstraint(currClause, retcons);
				}

                //---------------------------------------------------------
                // Add end point to the current function
                //---------------------------------------------------------
				Factory().addEndPoint(currPP);

		// Vijay - commented this because of bug when last statement ended with
		// return and _SLICE, bottom would be off by 1 due to _SLICE procedure
		// (see below). Confirmed to work with returns even in the middle of a function.

		// Vijay - correction - ignore previous comment. leave this uncommented (19-Feb-10).

				currPP++;

                // DEBUG.println(String.format("CurrPP: %d", currPP));
                // Flag that the "next" pp of the last pp is currPP.
                // This is to signal that the program has ended in a return
	            lastReturnNextPP = currPP;
            } )
        |       #( NLabel id:ID 

		{
			// closing rituals for the previous assignment group, if any
			if(Factory().inAssignGroup)
			{
				ArrRefToVar.clear(); ArrToCount.clear();
				Factory().closeAssignGroup(currClause, assignGroupVars);
				assignGroupVars.clear();
			}

			if(labels.get(id.getText()) != null)
				DEBUG.println("WARNING! Duplicate label present in function " + Factory().getFuncName());
			labels.put(id.getText(), currPP);
			currClause = Factory().openClause(#statementBody) ;
			Factory().clauseInfluencedId(tId++);
			Factory().setFromPP(currClause,currPP++) ;
            if(id.getText().equals("ERROR"))
    			Factory().setToPP(currClause,-1988);
            else
    			Factory().setToPP(currClause,currPP);
			if(id.getText().compareTo("TRACER_LABEL") == 0)
				Factory().addLineNum(currClause,id.getLineNum());
		} 

		(statement)? 
		 )
        |       #( "case"
			{
				// closing rituals for the previous assignment group, if any
				if(Factory().inAssignGroup)
				{
					ArrRefToVar.clear(); ArrToCount.clear();
					Factory().closeAssignGroup(currClause, assignGroupVars);
					assignGroupVars.clear();
				}


				// Closing previous block, if it was a case block
				if(!firstCase) {
	                Factory().popBlockClause();
					int bId = blockStack.pop();

					// if that block does not have a child, record in hierarchy about it
					if(!hasChildren.pop())
						hierarchy.add(new Hierarchy(bId, bId));
				}
				firstCase = false;

				/**** Block stuff ****/
				thisBlockId = blockId++;
				DEBUG.println("creating case block");
				Factory().createBlockClause(thisBlockId, false);

				// MANUALLY add condition variables to case block as they would have
				// already been encountered in switch(...)
				Factory().setInCondition(true);
				if(Factory().inSwitchCondition)
					DEBUG.println("WARNING: Switch condition true while processing case!");

				Vector<String> switchVars = Factory().getCurrentSwitchCondVars();
				for(int q=0; q < switchVars.size(); q++)
					Factory().clauseCondVar(switchVars.get(q));

				Factory().setInCondition(false);
				// END of adding condition variables

				if(blockStack.size() > 0)
					hierarchy.add(new Hierarchy(blockStack.peek(), thisBlockId));
				else
					DEBUG.println("In case: Block stack became empty!");
				blockStack.push(thisBlockId);

				// denote that the previous block, if any, has a child
				if(hasChildren.size() > 0)
				{
					hasChildren.pop();
					hasChildren.push(true);
				}
				
				// denote that THIS block does not have a child (as of now)
				hasChildren.push(false);

				/**** END block stuff ****/
			}
			case_expr:expr
            {
                String caseTest, caseSymbolicTest;
                Expression case_expr_obj =
                    (Expression)(case_expr.getAttribute("expression"));

                Expression defcond = currentDefaultCondition();
                Expression defcond_restriction =
                    new Expression(Expression.DISJUNCTION);
                Expression disjunct1 =
                    new Expression(Expression.CONJUNCTION);
                Expression disjunct2 =
                    new Expression(Expression.CONJUNCTION);

                //-------------------------------------------------------------
                // Make clause
                //-------------------------------------------------------------

				/* VIJAY - changed currentcond to be a new expression for every case
					Previously, it was "inheriting" its contraints from the previous
					cases (as their opposites) which is unnecessary because for switch
					you just need to equate the variable with each case separately.
				*/
				// Expression currentcond = defcond.clone();

                Expression currentcond = new Expression(Expression.DISJUNCTION);
                ClauseFactory factory = Factory();

				Expression caseEx;
                if(OPTIONS.EQ_TO_INEQ) {
                    caseEx = new Expression(Expression.CONJUNCTION);

                    Expression tmpex1 = new Expression(Expression.CONSTRAINT,
                        switchExpr.peek().toString() + ">=" + case_expr_obj.toString(),
                        "geq(" + switchSymbolicExpr.peek() + "," +
                        case_expr_obj.toString_symbolic() + ")");
                    tmpex1.setText(switchExprText.peek() + " >= " + case_expr_obj);

                    Expression tmpex2 = new Expression(Expression.CONSTRAINT,
                        switchExpr.peek().toString() + "<=" + case_expr_obj.toString(),
                        "geq(" + case_expr_obj.toString_symbolic() + "," +
                        switchSymbolicExpr.peek() + ")");
                    tmpex2.setText(switchExprText.peek() + " <= " + case_expr_obj);

                    caseEx.addConstraint(tmpex1);
                    caseEx.addConstraint(tmpex2);
                }
                else {
                    caseEx = new Expression(Expression.CONSTRAINT,
                        switchExpr.peek().toString() + "=" + case_expr_obj.toString(),
                        "eq(" + switchSymbolicExpr.peek() + "," +
                        case_expr_obj.toString_symbolic() + ")");
                    caseEx.setText(switchExprText.peek() + " == " + case_expr_obj);
                }
                currentcond.restrict(caseEx);

				int prevCurrClause = currClause;
                int nextCurrClause = currentcond.makeClause(factory, #statementBody,
                    switchStartPP.peek(), currPP, condArrayIndexExps.peek(), condArrayIndexVars.peek());

				// find out how many clauses were created
				for(int t=prevCurrClause; t < nextCurrClause; t++) {
					DEBUG.println("i" + tId + " is influenced by case");
					Factory().clauseInfluencedId(tId++);
					Factory().addArrayReference(t+1, case_expr_obj.getAllArrayReference());
					Factory().addArrayReference(t+1, switchExpr.peek().getAllArrayReference());
					// add branch indicator by Duc Hiep
					Factory().setBranch(t+1);
				}

				// add symbolic references if needed
				if(addSymbolicReference) {
					Factory().addSymbolicConstraints(nextCurrClause - prevCurrClause, symbolicReference);
				}

                //-------------------------------------------------------------
                // Add restriction to current "default" condition
                //-------------------------------------------------------------
                disjunct1.addConstraint(
                    new Expression(Expression.CONSTRAINT,
                        switchExpr.peek().toString() + "<" + case_expr_obj.toString(),
                        "gt(" + case_expr_obj.toString_symbolic() + "," +
                        switchSymbolicExpr.peek() + ")"));
                disjunct2.addConstraint(
                    new Expression(Expression.CONSTRAINT,
                        switchExpr.peek().toString() + ">" + case_expr_obj.toString(),
                        "gt(" + switchSymbolicExpr.peek() + "," +
                        case_expr_obj.toString() + ")"));
                defcond_restriction.addDisjunct(disjunct1);
                defcond_restriction.addDisjunct(disjunct2);

				// Vijay - trying out a quicker method for generating default condition
				// WARNING: works only with numbers (case 1, case 2 etc.)
                // defcond.restrict(defcond_restriction);
				String case_expr_str = case_expr_obj.toString();
				if(case_expr_str.startsWith("0-(")) // bug fix for unary negative number
					case_expr_str = case_expr_str.substring(3, case_expr_str.length() -1);
				Integer caseInt = Integer.parseInt(case_expr_str);
				addToDefCondCases(caseInt);

//                 currClause = 
//                     Factory().openClause(#statementBody);

//                 Factory().setFromPP(currClause,
//                     switchStartPP.peek());
//                 Factory().setToPP(currClause,currPP);

//                 caseTest = switchExpr.peek() + "=" + case_expr_obj.toString();
//                 Factory().addConstraint(
//                     currClause, caseTest);

//                 caseSymbolicTest = "eq(" + switchSymbolicExpr.peek() + "," +
//                     case_expr_obj.toString_symbolic() + ")"; 
//                 Factory().addSymbolicConstraint(
//                     currClause, caseSymbolicTest);

				// testing
				currClause = Factory().openClause(#statementBody);
				Factory().setFromPP(currClause, currPP);
				Factory().setToPP(currClause, ++currPP);
				Factory().clauseInfluencedId(tId++);
				Factory().inAssignGroup = true;

            }
                    (statement)?
			)
			{
			}
        |       #( "default" 
            {

				// Closing previous block, if it was a case block
				if(!firstCase) {
	                Factory().popBlockClause();
					int bId = blockStack.pop();

					// if that block does not have a child, record in hierarchy about it
					if(!hasChildren.pop())
						hierarchy.add(new Hierarchy(bId, bId));
				}
				firstCase = false;

				/**** Block stuff ****/
				thisBlockId = blockId++;
				DEBUG.println("creating default block");
				Factory().createBlockClause(thisBlockId, false);

				// MANUALLY add condition variables to case block as they would have
				// already been encountered in switch(...)
				Factory().setInCondition(true);
				if(Factory().inSwitchCondition)
					DEBUG.println("WARNING: Switch condition true while processing default!");

				Vector<String> switchVars = Factory().getCurrentSwitchCondVars();
				for(int q=0; q < switchVars.size(); q++)
					Factory().clauseCondVar(switchVars.get(q));

				Factory().setInCondition(false);
				// END of adding condition variables

				if(blockStack.size() > 0)
					hierarchy.add(new Hierarchy(blockStack.peek(), thisBlockId));
				else
					DEBUG.println("In default: Block stack became empty!");
				blockStack.push(thisBlockId);

				// denote that the previous block, if any, has a child
				if(hasChildren.size() > 0)
				{
					hasChildren.pop();
					hasChildren.push(true);
				}
				
				// denote that THIS block does not have a child (as of now)
				hasChildren.push(false);

				/**** END block stuff ****/

                defaultPresent.pop();
                defaultPresent.push(true);
				// closing rituals for the previous assignment group, if any
				if(Factory().inAssignGroup)
				{
					ArrRefToVar.clear(); ArrToCount.clear();
					Factory().closeAssignGroup(currClause, assignGroupVars);
					assignGroupVars.clear();
				}

                Expression defcond = currentDefaultCondition();
                ClauseFactory factory = Factory();

				int prevCurrClause = currClause;

				// DEBUG.println("making default condition " + defCondCases.peek().size());
				int nextCurrClause = Expression.makeDefCondClause(factory, #statementBody,
										switchStartPP.peek(), currPP, switchExpr.peek().toString(), 
										switchSymbolicExpr.peek(), defCondCases.peek(), switchExprText.peek(), condArrayIndexExps.peek(), condArrayIndexVars.peek());
				if(nextCurrClause == -1) nextCurrClause = currClause;
                //int nextCurrClause = defcond.makeClause(factory, #statementBody,
                //    switchStartPP.peek(), currPP);

				// find out how many clauses were created
				for(int t=prevCurrClause; t < nextCurrClause; t++)
				{
					DEBUG.println("i" + tId + " is influenced by default");
					Factory().clauseInfluencedId(tId++);
					Factory().addArrayReference(t+1, defcond.getAllArrayReference());
					Factory().addArrayReference(t+1, switchExpr.peek().getAllArrayReference());
					// add branch indicator by Duc Hiep
					Factory().setBranch(t+1);
				}

				// add symbolic references if needed
				if(addSymbolicReference) {
					Factory().addSymbolicConstraints(nextCurrClause - prevCurrClause, symbolicReference);
					addSymbolicReference = false;
				}

//                 currClause = 
//                     Factory().openClause(#statementBody);

//                 Factory().setFromPP(currClause,
//                     switchStartPP.peek());
//                 Factory().setToPP(currClause,currPP);
				// testing
				currClause = Factory().openClause(#statementBody);
				Factory().setFromPP(currClause, currPP);
				Factory().setToPP(currClause, ++currPP);
				Factory().clauseInfluencedId(tId++);
				Factory().inAssignGroup = true;
            }
                (statement)? 
			{
			}
			)
        |       #( 
                 "if" 

            {
				ClauseFactory factory = Factory();

				// closing rituals for the previous assignment group, if any
				if(Factory().inAssignGroup)
				{
					ArrRefToVar.clear(); ArrToCount.clear();
					Factory().closeAssignGroup(currClause, assignGroupVars);
					assignGroupVars.clear();
				}

				// ifStartPP.push(currPP); // moved this to AFTER the condition is processed (aiming to support assignments within conditions)
				ifBlockId = blockId++;
						Factory().createBlockClause(ifBlockId, false);
				if(blockStack.size() > 0)
								hierarchy.add(new Hierarchy(blockStack.peek(), ifBlockId));
				else
								DEBUG.println("In if: Block stack became empty!");

				if(OLD_CHANGES)
					ifBlockParent = ifBlockId;
				else
					ifBlockParent = blockStack.peek();
				blockStack.push(ifBlockId);

				// denote that the previous block, if any, has a child
				if(hasChildren.size() > 0)
				{
					hasChildren.pop();
					hasChildren.push(true);
				}

				// denote that THIS block does not have a child (as of now)
				hasChildren.push(false);
				Factory().setInCondition(true);

				// only applicable for loops, but to maintain consistency...
				loopCondHasCall.push(false);

				// temporary array index vars for arrays that appear in conditions
				condArrayIndexExps.push(new Vector<Expression>());
				condArrayIndexVars.push(new Vector<String>());
				tmpIdxVarId = 0;
            }

            ei:expr 

            {
				loopCondHasCall.pop();

                Factory().setInCondition(false);
				ifStartPP.push(currPP); // moved this from BEFORE the condition is processed (look above)
				currPP++;

				// get condition variables as a set to be used by "else" block
				conditionVars = Factory().getBlockClauseConditionVariables();
				// store the symbolic references (if any) for later use
				if(addSymbolicReference)
				{
					addSymbolicReference = false;
					internalSignal = true;
					internalSymbolicReference = symbolicReference;
				}

				controlBreakingEnd.push(false);
				returnStack.push(false);
            }

            statement 

            {
				// closing rituals for the previous assignment group, if any
				if(Factory().inAssignGroup)
				{
					ArrRefToVar.clear(); ArrToCount.clear();
					Factory().closeAssignGroup(currClause, assignGroupVars);
					assignGroupVars.clear();
				}

				ei_obj = (Expression) ei.getAttribute("expression");


			 while(blockStack.peek() != ifBlockId) {
				 Factory().popBlockClause();
				 int thatBlockId = blockStack.pop();

				if(!hasChildren.pop())
					hierarchy.add(new Hierarchy(thatBlockId, thatBlockId));
			 }
			 Factory().popBlockClause();
			 blockStack.pop();

			 // if this block does not have a child, record in hierarchy about it
			 if(!hasChildren.pop())
				 hierarchy.add(new Hierarchy(ifBlockId, ifBlockId));
		    
			 ifBodyEndPP.push(currPP);
	    }
                 (
		el:"else" 
                
		{
		    // changed by Duc Hiep - to fix the bug suggested by Jorge
		    currPP++;

		    // Vijay - create a new block here because "else" is considered as another block
		    elseBlockId = blockId++;
		    Factory().createBlockClause(elseBlockId, false);
		    Factory().setBlockClauseConditionVariables(conditionVars);

		    if(blockStack.size() > 0)
                        hierarchy.add(new Hierarchy(ifBlockParent, elseBlockId));
		    else
                        DEBUG.println("In else: Block stack became empty!");

		    blockStack.push(elseBlockId);

		    // denote that the previous block, if any, has a child
			if(hasChildren.size() > 0)
			{
				hasChildren.pop();
				hasChildren.push(true);
			}

			// denote that THIS block does not have a child (as of now)
			hasChildren.push(false);
			controlBreakingEnd.push(false);
			returnStack.push(false);
		}
        
	statement

	{
		// closing rituals for the previous assignment group, if any
		if(Factory().inAssignGroup)
		{
			ArrRefToVar.clear(); ArrToCount.clear();
			Factory().closeAssignGroup(currClause, assignGroupVars);
			assignGroupVars.clear();
		}

			while(blockStack.peek() != elseBlockId) {
				Factory().popBlockClause();
				int thatBlockId = blockStack.pop();

				if(!hasChildren.pop())
					hierarchy.add(new Hierarchy(thatBlockId, thatBlockId));
			}
		    Factory().popBlockClause();
		    blockStack.pop();

		    // if this block does not have a child, record in hierarchy about it
			if(!hasChildren.pop())
			hierarchy.add(new Hierarchy(elseBlockId, elseBlockId));
	}
                 )? )
        {
			condArrayIndexExps_ = condArrayIndexExps.pop();
			condArrayIndexVars_ = condArrayIndexVars.pop();

            int startPP1 = ifStartPP.pop();
            int bodyEndPP = ifBodyEndPP.pop();
            Factory().setBlockStartPP(ifBlockId, startPP1);
            Factory().setBlockEndPP(ifBlockId, currPP);
            Factory().setBlockStartPP(elseBlockId, startPP1);
            Factory().setBlockEndPP(elseBlockId, currPP);
            int oppositeTarget;
            ei_obj = (Expression)(ei.getAttribute("expression"));

			if(controlBreakingEnd.empty())
				FATAL.error("control break stack became empty!");

			boolean elseBlockEndedWithRet = false;
			boolean elseBlockEndedWithCB = false; // was true by default, which is wrong. if there's no else, it wont be updated below & so it should be set to false
			if(el != null) {
				elseBlockEndedWithCB = controlBreakingEnd.pop();
				elseBlockEndedWithRet = returnStack.pop();
			}

			boolean ifBlockEndedWithRet = returnStack.pop();
			boolean ifBlockEndedWithCB = controlBreakingEnd.pop();

			if(ifBlockEndedWithCB && elseBlockEndedWithCB) { // pass forward CB to parent block
				if(!controlBreakingEnd.empty()) {
					controlBreakingEnd.pop();
					controlBreakingEnd.push(true);
				}
			}

            if (el != null)
			{
                // else present

                //-------------------------------------------------------------
                // Construct a clause representing a transition from the
                // end of body of the if conditional to the current program
                // point. *BUG* Check if the block ended with break or return. 
				// If yes, don't construct this clause
                //-------------------------------------------------------------
				if(true || !ifBlockEndedWithCB) {
					currClause = 
						Factory().openClause(#statementBody);
					Factory().clauseInfluencedId(tId++);
					Factory().
						setFromPP(currClause, bodyEndPP);
					Factory().
						setToPP(currClause, currPP);

					endifs.add(new decompiler.Vertex(Factory().getFuncName(), "p" + currPP, -1));

				}
				oppositeTarget = bodyEndPP+1;
            }
			else 
			{
				// bug found by Jorge : empty ifs without else (could be insidious)
				boolean emptyIf = ((startPP1+1) == currPP); // refer code for why this means empty if
				if(emptyIf) {
					DEBUG.println("empty if found at PP:" + startPP1 + " w/o else!");
					//-------------------------------------------------------------
					// Construct a clause representing a transition from the
					// end of body of the if conditional to the current program
					// point.
					//-------------------------------------------------------------
					currClause = Factory().openClause(#statementBody);
					Factory().clauseInfluencedId(tId++);
					Factory().setFromPP(currClause, currPP);
					Factory().setToPP(currClause, currPP+1);
					endifs.add(new decompiler.Vertex(Factory().getFuncName(), "p" + (currPP+1), -1));
					currPP++;
				}

                // else not present
                oppositeTarget = currPP;

				// create artificial block for else
				elseBlockId = blockId++;
				Factory().createBlockClause(elseBlockId, false);
				Factory().setBlockClauseConditionVariables(conditionVars);

				if(blockStack.size() > 0)
							hierarchy.add(new Hierarchy(ifBlockParent, elseBlockId));
				else
							DEBUG.println("In else: Block stack became empty!");

				// denote that the previous block, if any, has a child
				if(hasChildren.size() > 0)
				{
					hasChildren.pop();
					hasChildren.push(true);
				}

				// if the "if" block did not end with break/return carry out normal procedure
				if(!ifBlockEndedWithCB) {
					hierarchy.add(new Hierarchy(elseBlockId, elseBlockId));
					Factory().popBlockClause();
				}

				// otherwise, the lines that follow the block should be put into the artificial else
				// this artificial else is to be popped only when the current parent is popped
				// because it encompasses all lines till the parent's end
				else {
					DEBUG.println("\"if\" ended with control break! putting all following statements into artificial else");
					blockStack.push(elseBlockId);
					hasChildren.push(false);
				}
            }

            if (!(ei_obj.isLogical())) 
			{
                Expression dis = new Expression(Expression.DISJUNCTION);
                Expression c1 = new Expression(Expression.CONJUNCTION);
                Expression c2 = new Expression(Expression.CONJUNCTION);

                // DEBUG.println(String.format("2: Converting %s to boolean", ei_obj.toString()));
                
				Expression exp1 = new Expression(Expression.CONSTRAINT,
                        ei_obj.toString() + ">0",
                        "gt(" + ei_obj.toString_symbolic() + ",0)");
				exp1.setText(ei.getAttribute("plaintext") + " > 0");
                c1.addConstraint(exp1);

				Expression exp2 = new Expression(Expression.CONSTRAINT,
                        ei_obj.toString() + "<0",
                        "gt(0," + ei_obj.toString_symbolic() + ")");
				exp2.setText(ei.getAttribute("plaintext") + " < 0");
                c2.addConstraint(exp2);

                dis.addDisjunct(c1);
                dis.addDisjunct(c2);

				int prevCurrClause = currClause;
				currClause =
					dis.makeClause(Factory(),
						#statementBody, startPP1, startPP1+1, condArrayIndexExps_, condArrayIndexVars_);

				// find out how many clauses were created
				for(int t = prevCurrClause; t < currClause; t++)
				{
					Factory().clauseInfluencedId(ifBlockId, tId++);
					Factory().addArrayReference(t+1, ei_obj.getAllArrayReference());
					// add branch indicator by Duc Hiep
					Factory().setBranch(t+1);
				}
			
				// add symbolic references if needed
				if(internalSignal)
					Factory().addSymbolicConstraints(currClause - prevCurrClause, internalSymbolicReference);


				Expression opp;
                if(OPTIONS.EQ_TO_INEQ) {
                    opp = new Expression(Expression.CONJUNCTION);

                    Expression tmpex1 = new Expression(Expression.CONSTRAINT, ei_obj.toString() + ">=0", "geq(" + ei_obj.toString_symbolic() + ",0)");
                    tmpex1.setText(ei.getAttribute("plaintext") + " >= 0");
                    Expression tmpex2 = new Expression(Expression.CONSTRAINT, ei_obj.toString() + "<=0", "geq(0," + ei_obj.toString_symbolic() + ")");
                    tmpex2.setText(ei.getAttribute("plaintext") + " <= 0");

                    opp.addConstraint(tmpex1);
                    opp.addConstraint(tmpex2);
                }
                else {
                    opp = new Expression(Expression.CONSTRAINT, ei_obj.toString() + "=0", "eq(" + ei_obj.toString_symbolic() + ",0)");
                    opp.setText(ei.getAttribute("plaintext") + " == 0");
                }

				/****************************/
				/* CREATING OPPOSITE CLAUSE */
				/****************************/

				prevCurrClause = currClause;
				currClause = 
						opp.makeClause(Factory(),
							#statementBody, startPP1, oppositeTarget, condArrayIndexExps_, condArrayIndexVars_);

				// find out how many clauses were created
				if(el == null) // else block not present, so add the above clause(s) to if block's parent if OLD_CHANGES is false
				{
					for(int t = prevCurrClause; t < currClause; t++) {
						Factory().clauseInfluencedId(elseBlockId, tId++);
						Factory().addArrayReference(t+1, ei_obj.getAllArrayReference());
						// add branch indicator by Duc Hiep
						Factory().setBranch(t+1);
					}
				}
				else // else block is present, so add the clauses to its list
				{
					for(int t = prevCurrClause; t < currClause; t++) {
						Factory().clauseInfluencedId(elseBlockId, tId++);
						Factory().addArrayReference(t+1, ei_obj.getAllArrayReference());
						// add branch indicator by Duc Hiep
						Factory().setBranch(t+1);
					}
				}

				// add symbolic references if needed
				if(internalSignal)
					Factory().addSymbolicConstraints(currClause - prevCurrClause, internalSymbolicReference);


            }
			else 
			{

                Expression ei_obj_opp =
                (Expression)(ei.getAttribute("opposite"));
		
				int prevCurrClause = currClause;
                currClause =
                ei_obj.makeClause(Factory(),
                    #statementBody, startPP1, startPP1+1, condArrayIndexExps_, condArrayIndexVars_);
                
                // find out how many clauses were created
                for(int t = prevCurrClause; t < currClause; t++)
                {
					Factory().clauseInfluencedId(ifBlockId, tId++);
					Factory().addArrayReference(t+1, ei_obj.getAllArrayReference());
					// add branch indicator by Duc Hiep
					Factory().setBranch(t+1);
                }

				// add symbolic references if needed
				if(internalSignal)
					Factory().addSymbolicConstraints(currClause - prevCurrClause, internalSymbolicReference);


                if (ei_obj_opp.isLogical()) 
				{
					prevCurrClause = currClause;
                    currClause =
                    ei_obj_opp.makeClause(Factory(),
                        #statementBody, startPP1, oppositeTarget, condArrayIndexExps_, condArrayIndexVars_);

                    // find out how many clauses were created
					if(el == null) // else is not present, so add the above clause(s) to if block's parent if OLD_CHANGES is false
					{
							for(int t = prevCurrClause; t < currClause; t++) {
								Factory().clauseInfluencedId(elseBlockId, tId++);
								Factory().addArrayReference(t+1, ei_obj.getAllArrayReference());
								// add branch indicator by Duc Hiep
								Factory().setBranch(t+1);
							}
					}
					else // else block is present, so add the clauses to its list
					{		    
							for(int t = prevCurrClause; t < currClause; t++) {
								Factory().clauseInfluencedId(elseBlockId, tId++);
								Factory().addArrayReference(t+1, ei_obj.getAllArrayReference());
								// add branch indicator by Duc Hiep
								Factory().setBranch(t+1);
							}
					}

					// add symbolic references if needed
					if(internalSignal)
						Factory().addSymbolicConstraints(currClause - prevCurrClause, internalSymbolicReference);

                }
            }
			if(ifBlockEndedWithRet && elseBlockEndedWithRet) {
				if(!returnStack.empty()) {
					returnStack.pop();
					returnStack.push(true);
				}
				lastReturnNextPP = currPP;
			}
			else
				lastReturnNextPP = -1;

        }

        |       #( "switch" 
            {
				blockType.push(SWITCH);
				// closing rituals for the previous assignment group, if any
				if(Factory().inAssignGroup)
				{
					ArrRefToVar.clear(); ArrToCount.clear();
					Factory().closeAssignGroup(currClause, assignGroupVars);
					assignGroupVars.clear();
				}

				Factory().setInCondition(true);

				/**** Block stuff ****/
				thisBlockId = blockId++;
				Factory().createBlockClause(thisBlockId, false);

				if(blockStack.size() > 0)
					hierarchy.add(new Hierarchy(blockStack.peek(), thisBlockId));
				else
					DEBUG.println("In switch: Block stack became empty!");
				blockStack.push(thisBlockId);

				// denote that the previous block, if any, has a child
				if(hasChildren.size() > 0)
				{
					hasChildren.pop();
					hasChildren.push(true);
				}
				
				// denote that THIS block does not have a child (as of now)
				hasChildren.push(false);
				/**** END block stuff ****/

                inSwitch = true;

				/* --------------------------------
				 * moved this to AFTER the condition is processed
				 * --------------------------------
				switchStartPP.push(currPP);
                currPP++;
                breakContext.push(currPP);
                currPP++;
				*/

				hasBreak.push(false); // assume no break present in this switch

				defCondCases.push(new Vector<Integer>());
                
				Factory().addNewSwitchCondVars();
				Factory().inSwitchCondition = true;

				// not relevant for switch, but to maintain consistency...
				loopCondHasCall.push(false);
				condCallPP.push(currPP);

				// temporary array index vars for arrays that appear in conditions
				condArrayIndexExps.push(new Vector<Expression>());
				condArrayIndexVars.push(new Vector<String>());
            }
                    switch_expr:expr 
            {
				loopCondHasCall.pop();
				condCallPP.pop();

				switchStartPP.push(currPP);
                currPP++;
                breakContext.push(currPP);
                currPP++;

				Factory().inSwitchCondition = false;
				Expression sw = (Expression) switch_expr.getAttribute("expression");
				Factory().setInCondition(false);
                switchExpr.push(sw);
                switchSymbolicExpr.push(sw.toString_symbolic());

                // Initialize new data structure for storing condition
                // for default:
                initDefaultCondition();
                
                // For now, assume there is no default statement
                defaultPresent.push(false);
				firstCase = true;

				switchExprText.push((String) switch_expr.getAttribute("plaintext"));
				controlBreakingEnd.push(false); // we're not going to use controlBreakingEnd for switch at all, but just to be consistent with "if" blocks do this (otherwises causes dead trans bug)
            }
                    statement
            {
				condArrayIndexExps_ = condArrayIndexExps.pop();
				condArrayIndexVars_ = condArrayIndexVars.pop();

				controlBreakingEnd.pop(); // useless, but to be consistent with "if" blocks (read above)

				// bug fix - need to pop from text stack too
				String exprText = switchExprText.pop();

				// closing rituals for the previous assignment group, if any
				if(Factory().inAssignGroup)
				{
					ArrRefToVar.clear(); ArrToCount.clear();
					Factory().closeAssignGroup(currClause, assignGroupVars);
					assignGroupVars.clear();
				}

				// Closing previous block, if it was a case
				if(!firstCase) {
	                Factory().popBlockClause();
					int bId = blockStack.pop();

					// if that block does not have a child, record in hierarchy about it
					if(!hasChildren.pop())
						hierarchy.add(new Hierarchy(bId, bId));
				}
				firstCase = false;

                // if default is not present, SIMULATE it!
                if(!defaultPresent.pop()) {
					/**** Block stuff ****/
					int defaultBlockId = blockId++;
					DEBUG.println("creating default block");
					Factory().createBlockClause(defaultBlockId, false);

					// MANUALLY add condition variables to case block as they would have
					// already been encountered in switch(...)
					Factory().setInCondition(true);
					if(Factory().inSwitchCondition)
						DEBUG.println("WARNING: Switch condition true while processing default!");

					Vector<String> switchVars = Factory().getCurrentSwitchCondVars();
					for(int q=0; q < switchVars.size(); q++)
						Factory().clauseCondVar(switchVars.get(q));

					Factory().setInCondition(false);
					// END of adding condition variables

					if(blockStack.size() > 0)
						hierarchy.add(new Hierarchy(blockStack.peek(), defaultBlockId));
					else
						DEBUG.println("In default: Block stack became empty!");
					hierarchy.add(new Hierarchy(defaultBlockId, defaultBlockId));
					blockStack.push(thisBlockId);

					// denote that the previous block, if any, has a child
					if(hasChildren.size() > 0)
					{
						hasChildren.pop();
						hasChildren.push(true);
					}

					/**** END block stuff ****/

                    Expression defcond = currentDefaultCondition();
                    ClauseFactory factory = Factory();

                    int prevCurrClause = currClause;
                    // DEBUG.println("making default condition " + defCondCases.peek().size());
                    int nextCurrClause = Expression.makeDefCondClause(factory, #statementBody,
                                            switchStartPP.peek(), breakContext.peek(), switchExpr.peek().toString(), 
                                            switchSymbolicExpr.peek(), defCondCases.peek(), exprText, condArrayIndexExps_, condArrayIndexVars_);
                    if(nextCurrClause == -1) nextCurrClause = currClause;

                    // find out how many clauses were created
                    for(int t=prevCurrClause; t < nextCurrClause; t++)
                    {
						DEBUG.println("i" + tId + " is influenced by default");
                        Factory().clauseInfluencedId(tId++);
                        Factory().addArrayReference(t+1, defcond.getAllArrayReference());
                        // add branch indicator by Duc Hiep
                        Factory().setBranch(t+1);
                    }

                    // add symbolic references if needed
                    if(addSymbolicReference) {
                        Factory().addSymbolicConstraints(nextCurrClause - prevCurrClause, symbolicReference);
                        addSymbolicReference = false;
                    }
					blockStack.pop();
					Factory().popBlockClause();
                }
				defCondCases.pop();
				Factory().removeSwitchCondVars();

                // Pop the stacks; we're finished with this switch
                switchStartPP.pop();
                switchExpr.pop();
                switchSymbolicExpr.pop();

                // DEBUG.println("Pop breakContext");
                switchExitPP = breakContext.pop();

                //-------------------------------------------------------------
                // Construct a clause that exits from the last
                // statement in the switch 
                //-------------------------------------------------------------

				/*** Vijay - is this clause really needed?
					Update (Aug 13 '10): Yes, it is the only clause that increases
					currPP in case the final case (or default) in switch ended with
					a return. problems arose because if the function ended with the
					switch, then no artificial return was added because lastReturnNextPP == currPP.
					*Technically*, this clause can be unreachable if the last case
					ended with return, because return will do currPP++ after it creates
					its clause. just something to note.. */
                // Instantiate a new clause, and keep its index in currClause
                currClause = Factory().openClause(#statementBody);
				Factory().clauseInfluencedId(tId++);

                // Set the current pp as from pp
                Factory().setFromPP(currClause,currPP);

                // Set the exit pp as to pp
                Factory().setToPP(currClause,switchExitPP);

                // Increment current pp value
                currPP++;

				// Closing switch block
				// until we hit this block's id on the stack, keep popping.
				// artificial blocks could have been created by breaks/returns within ifs
				while(blockStack.peek() != thisBlockId) {
					Factory().popBlockClause();
					int thatBlockId = blockStack.pop();

					if(!hasChildren.pop())
						hierarchy.add(new Hierarchy(thatBlockId, thatBlockId));
				}
				Factory().popBlockClause();
				blockStack.pop();

				// if this block does not have a child, record in hierarchy about it
				if(!hasChildren.pop())
					hierarchy.add(new Hierarchy(thisBlockId, thisBlockId));


                //-------------------------------------------------------------
                // Construct another clause that continues from
                // the exit point to the next program point
				// Vijay - do it only if this switch had a break, otherwise
				// it just creates a useless unreachable transition
				// update (Aug 13 '10): do this always. because if the switch
				// cases all end with return instead of break (and there's no
				// default), then we NEED to create this clause in order to
				// carry on. otherwise, dfs sanity check will fail (dangerous)
                //-------------------------------------------------------------
				hasBreak.pop();
				if(true) /* if(hasBreak.pop()) */ {
					currClause = Factory().openClause(#statementBody);
					Factory().clauseInfluencedId(tId++);

					// Set the switch exit pp as the source pp
					Factory().setFromPP(currClause, switchExitPP);

					// Set the exit pp as the target pp
					Factory().setToPP(currClause, currPP);
				}

                //-------------------------------------------------------------
                // We're no longer in a switch statement
                //-------------------------------------------------------------
                inSwitch = false;
				addSymbolicReference = false;

                //-------------------------------------------------------------
                // Remove the default condition from stack
                //-------------------------------------------------------------
                removeDefaultCondition();

				blockType.pop();
            }

        )
        ;

// expr is here
expr
{
	parseNode = #expr;
}
        :       assignExpr
        |       conditionalExpr
        |       logicalOrExpr
        |       logicalAndExpr
        |       inclusiveOrExpr
        |       exclusiveOrExpr
        |       bitAndExpr
        |       { if(inAssign) FATAL.error("relational expression in assignment (not supported by compiler). kindly modify the line."); } equalityExpr
        |       { if(inAssign) FATAL.error("relational expression in assignment (not supported by compiler). kindly modify the line."); } relationalExpr
        |       shiftExpr
        |       additiveExpr
        |       multExpr
        |       castExpr
        |       unaryExpr
        |       { 
					arrayDimensions.push(1);
					multiDimArrayIndices.push(new Vector<String>());
					multiDimArrayIndices_s.push(new Vector<String>());
				} 
				postfixExpr 
				{ 
					currChainStructVar = ""; // quick-fix! have to test!
					arrayDimensions.pop(); 
					multiDimArrayIndices.pop();
					multiDimArrayIndices_s.pop();
				}
        |       primaryExpr
        |       commaExpr
        |       emptyExpr
        |       compoundStatementExpr
        |       initializer
        |       rangeExpr
        |       gnuAsmExpr
//        |		structVarDecExpr //struct variable declaration
        ;

/*
structVarDecExpr
		: #(a:LITERAL b:LITERAL)
		  {DEBUG.println(a.getText());
		   DEBUG.println(b.getText());
		  }
		;
*/
		
commaExpr
{
	parseNode = #commaExpr;
}
        :   #(NCommaExpr expr expr)
        ;

emptyExpr
{
	parseNode = #emptyExpr;
}
        :   NEmptyExpression
        ;

compoundStatementExpr
{
	parseNode = #compoundStatementExpr;
}
        :   #(LPAREN compoundStatement RPAREN)
        ;

rangeExpr
{
	parseNode = #rangeExpr;
}
        :   #(NRangeExpr expr VARARGS expr)
        ;

gnuAsmExpr
{
	parseNode = #gnuAsmExpr;
}
        :   #(NGnuAsmExpr
                ("volatile")? 
                LPAREN stringConst
                ( options { warnWhenFollowAmbig = false; }:
                  COLON (strOptExprPair ( COMMA strOptExprPair)* )?
                  ( options { warnWhenFollowAmbig = false; }:
                    COLON (strOptExprPair ( COMMA strOptExprPair)* )?
                  )?
                )?
                ( COLON stringConst ( COMMA stringConst)* )?
                RPAREN
            )
        ;

strOptExprPair
{
	parseNode = #strOptExprPair;
}
        :  stringConst ( LPAREN expr RPAREN )?
        ;
        
assignExpr
{
	parseNode = #assignExpr;
}
        :       #( ASSIGN 
            {
				if(inAssign)
					FATAL.error("multiple assignment statement in " + Factory().getFuncName());
				if(Factory().inCondition)
					FATAL.error("assignment within block condition! in " + Factory().getFuncName());
                nextVarsNeeded=true ; 
                inLHSOfAssign = true;
                inAssign = true; 
                arrOnLHS = false;
                ptrOnLHS = false;
                bracDepth = 0;
				starDepth = 0;
				arrowDepth = 0;
				assignLHSVar = "";
				assignLHSVar_forInput = "";
				currChainStructVar = "";
            }
            e1:expr 
            {
				currChainStructVar = "";
                nextVarsNeeded=false ;
                inLHSOfAssign = false; 
                bracDepth = 0;
				starDepth = 0;
				arrowDepth = 0;
				currAssignPP = currPP;
            } 
            e2:expr 
            {
                inAssign = false;
				currAssignPP = 0;
            }
            ) 
        {
			assignLHSVar = "";
			assignLHSVar_forInput = "";
            Expression e1_expr = (Expression)(e1.getAttribute("expression"));
            Expression e2_expr = (Expression)(e2.getAttribute("expression"));
            String exstr="", symbstr="";
            String exstr1="", symbstr1="", exstr2="", symbstr2="";

			if(!OPTIONS.INCLUDE_ARRAY_CONSTRAINTS && (ptrOnLHS || arrOnLHS)) {
				// just close this assignment group if there's a call
				if(Factory().inAssignGroup && Factory().callPresent(currClause))
				{
					ArrRefToVar.clear(); ArrToCount.clear();
					Factory().closeAssignGroup(currClause, assignGroupVars);
					assignGroupVars.clear();
				}
			}
            else if (inStatement) {
				// ----------------------------------------
				// If arrayvar is not null, then assignment is
				// of the form x = a where a is an array and hence 
				// should be converted to x = & a[0]
				// ----------------------------------------

				if(OPTIONS.TRANSLATE_ARRAYVARS && e2.getAttribute("arrayvar") != null) {

					DEBUG.println("array variable used as non-array variable in assignment in function " + Factory().getFuncName());

					// ----------------------------------------
					// Set up the array reference for a[0]
					// ----------------------------------------

					// remove all parantheses from e2's expr
					String t_e2 = e2_expr.toString();
					t_e2 = t_e2.replaceAll("\\(", "");
					t_e2 = t_e2.replaceAll("\\)", "");
					e2_expr.setEvaluated(t_e2);

					String arrName = ((Expression) (e2.getAttribute("expression"))).toString();
					arrIndex = "0";
					String bvar = "0";
					globalArrIndex = arrIndex;
					arrSymbolic = "0";
					globalArrSymbolic = arrSymbolic;
					String artificialVar;
						
					Integer count = ArrToCount.get(arrName);
					if(count == null){
					count = new Integer(0);
					}
					artificialVar = ArrRefToString(arrName, count);
					count = new Integer(count.intValue() + 1);
					ArrToCount.put(arrName, count);
					String arrayRef = "ref(" + arrName + "," + "0" + "," + artificialVar + ")";
					String symbRef = "ref(" + ((Expression) (e2.getAttribute("expression"))).toString_symbolic() + "," + "0" + ")";


					// ----------------------------------------
					// Now set up the addr reference for & a[0]
					// ----------------------------------------

					exstr = "And" + e2_expr.toString();
					symbstr = "SAnd" + e2_expr.toString_symbolic();
					if(symbstr.contains("ref(")) 
					{
						symbstr = symbstr.replaceAll("\\(", "");
						symbstr = symbstr.replaceAll(",", "");
						symbstr = symbstr.replaceAll("\\)", "");
					}

					Expression andEx = new Expression(Expression.CONSTRAINT, exstr, symbstr);

					String currHeap, currHeap_s;
					String fun = Factory().getFuncName();
					String heapVar = "";

					String var = (String) e2.getAttribute("vartext");
					Variable v = new Variable(var);
					if(Factory().getVariables().contains(v) || Factory().getArrayVariables().contains(v))
						heapVar = PAHelper.getHeap2(fun, var);
					else if(ClauseFactory.getGlobalVariables().contains(v) || ClauseFactory.getGlobalArrayVariables().contains(v))
						heapVar = PAHelper.getHeap2("GLOBAL", var);
					else // trying to get address of function pointer
						heapVar = PAHelper.getHeap3(var);

					if(ptrOnLHS && !inDeclaration)
					{
						currHeap = Factory().getPrevVarName(heapVar);
						currHeap_s = Factory().getSymbolicPrevVarName(heapVar);
					}
					else
					{
						currHeap = Factory().getCurrVarName(heapVar);
						currHeap_s = Factory().getSymbolicCurrVarName(heapVar);
					}

					andEx.addArrayReference(e2_expr.getAllArrayReference());
					andEx.addArrayReference(arrayRef);
					andEx.addArrayReference("ref(" + currHeap + "," + andEx.toString() + "," + artificialVar + ")");
					
					Factory().addSymbolicConstraint(currClause,
								"addref(" + symbRef + ",ref(" + currHeap_s + "," + andEx.toString_symbolic() + "))");

					e2_expr = andEx; // set e2_expr as andEx, to be used appropriately below
				}

				// print the actual assignment
                if(!arrOnLHS && !ptrOnLHS) // warning: if you change this condition, change ~50 lines below regd. EQ_TO_INEQ
				{
                    if(OPTIONS.EQ_TO_INEQ) {
                        String nextvar = Factory().getNextVarName((String) e1.getAttribute("vartext"));
                        String nextvar_s = Factory().getSymbolicNextVarName((String) e1.getAttribute("vartext"));

                        exstr1 = nextvar + ">=" + e2_expr.toString();
                        symbstr1 = "geq(" + nextvar_s + "," +
                                    e2_expr.toString_symbolic() + ")";

                        exstr2 = nextvar + "<=" + e2_expr.toString();
                        symbstr2 = "geq(" + e2_expr.toString_symbolic() + "," +
                                    nextvar_s + ")";

                    }
                    else {
                        exstr = Factory().getNextVarName((String) e1.getAttribute("vartext")) + "=" + e2_expr.toString();
                        symbstr = "assign(" + Factory().getSymbolicNextVarName((String) e1.getAttribute("vartext")) + "," +
                                    e2_expr.toString_symbolic() + ")";
                    }
                }
				else 
				{
					// bug found - if there is a call, get e1's vartext instead of 
					// currvar, since the call would've cleared all previous 
					// references anyway (trying out a quick fix)
					String t_var = Factory().getCurrVarName((String)e1.getAttribute("vartext"));
					String t_var_s = Factory().getSymbolicCurrVarName((String)e1.getAttribute("vartext"));
					String assignArr = Factory().getNextVarName((String)e1.getAttribute("assignarr"));
					String assignArr_s = Factory().getSymbolicNextVarName((String)e1.getAttribute("assignarr"));
					String idx_var = insert_intermediate_index_var(assignArrInd, assignArrIndSymbolic);
					String idx_nv = !OPTIONS.COMPILE_IDX_VARS? assignArrInd :
										(idx_var_nextNameNeeded()? Factory().getNextVarName(idx_var) : Factory().getCurrVarName(idx_var));
					String idx_symbnv = !OPTIONS.COMPILE_IDX_VARS? assignArrIndSymbolic :
										(idx_var_nextNameNeeded()? Factory().getSymbolicNextVarName(idx_var) : Factory().getSymbolicCurrVarName(idx_var));

					if(!Factory().callPresent(currClause)) {
						exstr = assignArr + "=" + "upd("
								+ e1.getAttribute("currvar") + ","
								+ /*assignArrInd*/ idx_nv + "," + e2_expr.toString()
								+ ")";
						symbstr = "arrassign(" + assignArr_s + ","
								+ "upd(" + ((Expression) e1.getAttribute("currvar")).toString_symbolic()
								+ "," + /*assignArrIndSymbolic*/ idx_symbnv + ","
								+ e2_expr.toString_symbolic() + "))";
					}
					else {
						exstr = assignArr + "=" + "upd("
								+ t_var + ","
								+ /*assignArrInd*/ idx_nv + "," + e2_expr.toString()
								+ ")";
						symbstr = "arrassign(" + assignArr_s + ","
								+ "upd(" + t_var_s
								+ "," + /*assignArrIndSymbolic*/ idx_symbnv + ","
								+ e2_expr.toString_symbolic() + "))";
					}

					if(OPTIONS.INCLUDE_ONLY_SYM_ARRAY_CONSTRAINTS)
						exstr = "_=_";
                }

                if(OPTIONS.EQ_TO_INEQ && !arrOnLHS && !ptrOnLHS) {
                    Expression assignex = new Expression(Expression.CONJUNCTION);

                    assignex.addConstraint(new Expression(Expression.CONSTRAINT, exstr1, symbstr1));
                    assignex.addConstraint(new Expression(Expression.CONSTRAINT, exstr2, symbstr2));

                    #assignExpr.setAttribute("expression", assignex);
                }
                else
                    #assignExpr.setAttribute("expression",
                            new Expression(Expression.CONSTRAINT, exstr, symbstr));

				// dealing with for loops
				if (isDelayed)
				{
					Factory().delayedClauseRefVar(
									(String) (e1.getAttribute("vartext")));
					if(Factory().inAssignGroup)
						assignGroupVars.add((String)(e1.getAttribute("vartext")));
						
					Factory().addDelayedConstraint(exstr);					
					Factory().addDelayedSymbolicConstraint(symbstr);

					// array reference is passed up
					Factory().addDelayedArrayReference(e2_expr.getAllArrayReference());
				}
				else
				{
					Factory().clauseRefVar(currClause,
									(String)(e1.getAttribute("vartext")));
					if(Factory().inAssignGroup)
						assignGroupVars.add((String)(e1.getAttribute("vartext")));
                    if(OPTIONS.EQ_TO_INEQ && !arrOnLHS && !ptrOnLHS) {
                        Factory().addConstraint(currClause, exstr1);
                        Factory().addSymbolicConstraint(currClause, symbstr1);

                        Factory().addConstraint(currClause, exstr2);
                        Factory().addSymbolicConstraint(currClause, symbstr2);
                    }
                    else {
                        Factory().addConstraint(currClause, exstr);
                        Factory().addSymbolicConstraint(currClause, symbstr);
                    }
					Factory().addLineNum(currClause, #assignExpr.getLineNum());

					// array reference is passed up
					Factory().addArrayReference(
										  currClause, e1_expr.getAllArrayReference());
					Factory().addArrayReference(
										  currClause, e2_expr.getAllArrayReference());
				}

				// closing rituals for this assignment group, but only if there is a function call in THIS assignment group,
				// or there is a function call in the NEXT assignment group
				if((Factory().inAssignGroup && Factory().callPresent(currClause)) ||
					(!PREPROCESS && Factory().inAssignGroup && PreprocessInfo.isCallPP(Factory().getFuncName(), currPP+1)))
				{
					// add a reference because e1's vartext would've added a reference in the previous clause
					ArrRefToVar.clear(); ArrToCount.clear();
					Factory().closeAssignGroup(currClause, assignGroupVars);
					assignGroupVars.clear();

					if(Factory().callPresent(currClause)) {
						// do special replace because of discrepancies in VRT for LHS variable
						String vartext = (String) e1.getAttribute("vartext");
						String from = e1_expr.toString();
						String to = Factory().getNextVarName(vartext);

						DEBUG.println("assignment with call: replacing LHS variable " + from + " with " + to);
						if(!arrOnLHS && !ptrOnLHS)
							Factory().assignCallReplace(currClause, from, to);
					}
				}

			}
            arrOnLHS = false;
            ptrOnLHS = false;
        }
        |       #( DIV_ASSIGN
		{
			if(inAssign)
				FATAL.error("multiple assignment statement in " + Factory().getFuncName());
			if(Factory().inCondition)
				FATAL.error("assignment within block condition! in " + Factory().getFuncName());
			nextVarsNeeded=true ; 
			inLHSOfAssign = true;
			inAssign = true; 
			inLHSOfShorthandAssign = true;
			arrOnLHS = false;
			ptrOnLHS = false;
			bracDepth = 0;
			starDepth = 0;
			arrowDepth = 0;
			assignLHSVar = "";
			assignLHSVar_forInput = "";
			currChainStructVar = "";
		}
		eDA1:expr
		{
			currChainStructVar = "";
			nextVarsNeeded=false ;
			inLHSOfAssign = false; 
			inLHSOfShorthandAssign = false;
			bracDepth = 0;
			starDepth = 0;
			arrowDepth = 0;
			currAssignPP = currPP;
		}
		eDA2:expr
		{
			inAssign = false;
			currAssignPP = 0;
		})
		{
			assignLHSVar = "";
			assignLHSVar_forInput = "";
            Expression e1_expr = (Expression)(eDA1.getAttribute("expression"));
            Expression e2_expr = (Expression)(eDA2.getAttribute("expression"));
            Expression e1_currvar = (Expression)(eDA1.getAttribute("currvar"));
            Expression e2_currvar = (Expression)(eDA2.getAttribute("currvar"));
            String var1 = (String) (eDA1.getAttribute("vartext"));
            String var2 = (String) (eDA2.getAttribute("vartext"));
            String exstr, symbstr;
			ClauseFactory factory = Factory();

			if(!OPTIONS.INCLUDE_ARRAY_CONSTRAINTS && (ptrOnLHS || arrOnLHS)) {
				// just close this assignment group if there's a call
				if(Factory().inAssignGroup && Factory().callPresent(currClause))
				{
					ArrRefToVar.clear(); ArrToCount.clear();
					Factory().closeAssignGroup(currClause, assignGroupVars);
					assignGroupVars.clear();
				}
			}
            else if (inStatement) {
                if(!arrOnLHS && !ptrOnLHS) 
				{
					String prev = factory.getPrevVarName(var1);
					String s_prev = factory.getSymbolicPrevVarName(var1);
                    exstr = factory.getNextVarName(var1) + "=" + prev + "/(" + e2_expr.toString() + ")";
                    symbstr = "assign(" + factory.getSymbolicNextVarName(var1) + ",div(" + s_prev + "," +
								e2_expr.toString_symbolic() + "))";
                }
				else 
				{
					String assignArr = Factory().getNextVarName((String)eDA1.getAttribute("assignarr"));
					String assignArr_s = Factory().getSymbolicNextVarName((String)eDA1.getAttribute("assignarr"));
					String idx_var = insert_intermediate_index_var(assignArrInd, assignArrIndSymbolic);
					String idx_nv = !OPTIONS.COMPILE_IDX_VARS? assignArrInd :
										(idx_var_nextNameNeeded()? Factory().getNextVarName(idx_var) : Factory().getCurrVarName(idx_var));
					String idx_symbnv = !OPTIONS.COMPILE_IDX_VARS? assignArrIndSymbolic :
										(idx_var_nextNameNeeded()? Factory().getSymbolicNextVarName(idx_var) : Factory().getSymbolicCurrVarName(idx_var));

					if(!Factory().callPresent(currClause)) {
						exstr = assignArr + "=" + "upd("
								+ e1_currvar.toString() + ","
								+ /*assignArrInd*/ idx_nv + "," + shorthandRef + "/("
								+ e2_expr.toString()
								+ "))";
						symbstr = "arrassign(" + assignArr_s + ","
								+ "upd(" + e1_currvar.toString_symbolic()
								+ "," + /*assignArrIndSymbolic*/ idx_symbnv + ",div(" + shorthandRef_s + ","
								+ e2_expr.toString_symbolic() + ")))";
					}
					else {
						String t_var = Character.toUpperCase(var1.charAt(0)) + var1.substring(1);
						exstr = assignArr + "=" + "upd("
								+ e1_currvar + ","
								+ /*assignArrInd*/ idx_nv + "," + shorthandRef + "/("
								+ e2_expr.toString()
								+ "))";
						symbstr = "arrassign(" + e1_expr.toString_symbolic() + ","
								+ "upd(" + e1_currvar.toString_symbolic()
								+ "," + /*assignArrIndSymbolic*/ idx_symbnv + ",div(" + shorthandRef_s + ","
								+ e2_expr.toString_symbolic() + ")))";
					}
					shorthandRef = null;
					shorthandRef_s = null;
					if(OPTIONS.INCLUDE_ONLY_SYM_ARRAY_CONSTRAINTS)
						exstr = "_=_";
                }

                #assignExpr.setAttribute("expression",
                        new Expression(Expression.CONSTRAINT, exstr, symbstr));

				// dealing with for loops
				if (isDelayed)
				{
					Factory().delayedClauseRefVar(var1);
					if(Factory().inAssignGroup)
						assignGroupVars.add(var1);
						
					Factory().addDelayedConstraint(exstr);					
					Factory().addDelayedSymbolicConstraint(symbstr);

					// array reference is passed up
					Factory().addDelayedArrayReference(e2_expr.getAllArrayReference());
				}
				else
				{
					Factory().clauseRefVar(currClause, var1);
					if(Factory().inAssignGroup)
						assignGroupVars.add(var1);
					Factory().addConstraint(currClause, exstr);
					Factory().addSymbolicConstraint(currClause, symbstr);

					// array reference is passed up
					Factory().addArrayReference(currClause, e1_expr.getAllArrayReference());
					Factory().addArrayReference(currClause, e2_expr.getAllArrayReference());
				}

				// closing rituals for this assignment group, but only if there is a function call
				if(Factory().inAssignGroup && Factory().callPresent(currClause) ||
					(!PREPROCESS && Factory().inAssignGroup && PreprocessInfo.isCallPP(Factory().getFuncName(), currPP+1)))
				{
					// add a reference because e1's vartext would've added a reference in the previous clause
					ArrRefToVar.clear(); ArrToCount.clear();
					Factory().closeAssignGroup(currClause, assignGroupVars);
					assignGroupVars.clear();

					// do special replace because of discrepancies in VRT for LHS variable
					if(Factory().callPresent(currClause)) {
						String from = e1_expr.toString();
						String to = Factory().getNextVarName(var1);

						DEBUG.println("assignment with call: replacing LHS variable " + from + " with " + to);
						if(!arrOnLHS && !ptrOnLHS)
							Factory().assignCallReplace(currClause, from, to);
					}
				}

			}
            arrOnLHS = false;
            ptrOnLHS = false;
		}
        |       #( PLUS_ASSIGN
		{  
			if(inAssign)
				FATAL.error("multiple assignment statement in " + Factory().getFuncName());
			if(Factory().inCondition)
				FATAL.error("assignment within block condition! in " + Factory().getFuncName());
			nextVarsNeeded=true ; 
			inLHSOfAssign = true;
			inAssign = true; 
			inLHSOfShorthandAssign = true;
			arrOnLHS = false;
			ptrOnLHS = false;
			bracDepth = 0;
			starDepth = 0;
			arrowDepth = 0;
			assignLHSVar = "";
			assignLHSVar_forInput = "";
			currChainStructVar = "";
		}
		ePA1: expr
		{
			currChainStructVar = "";
			nextVarsNeeded=false ;
			inLHSOfAssign = false; 
			inLHSOfShorthandAssign = false;
			bracDepth = 0;
			starDepth = 0;
			arrowDepth = 0;
			currAssignPP = currPP;
		}
		ePA2: expr
		{
			inAssign = false;
			currAssignPP = 0;
		} )
        {
			assignLHSVar = "";
			assignLHSVar_forInput = "";
            Expression e1_expr = (Expression)(ePA1.getAttribute("expression"));
            Expression e2_expr = (Expression)(ePA2.getAttribute("expression"));
            Expression e1_currvar = (Expression)(ePA1.getAttribute("currvar"));
            Expression e2_currvar = (Expression)(ePA2.getAttribute("currvar"));
            String var1 = (String) (ePA1.getAttribute("vartext"));
            String var2 = (String) (ePA2.getAttribute("vartext"));
            String exstr, symbstr;
			ClauseFactory factory = Factory();

			if(!OPTIONS.INCLUDE_ARRAY_CONSTRAINTS && (ptrOnLHS || arrOnLHS)) {
				// just close this assignment group if there's a call
				if(Factory().inAssignGroup && Factory().callPresent(currClause))
				{
					ArrRefToVar.clear(); ArrToCount.clear();
					Factory().closeAssignGroup(currClause, assignGroupVars);
					assignGroupVars.clear();
				}
			}
            else if (inStatement) {
                if(!arrOnLHS && !ptrOnLHS) 
				{
					String prev = factory.getPrevVarName(var1);
					String s_prev = factory.getSymbolicPrevVarName(var1);
                    exstr = factory.getNextVarName(var1) + "=" + prev + "+(" + e2_expr.toString() + ")";
                    symbstr = "assign(" + factory.getSymbolicNextVarName(var1) + ",plus(" + s_prev + "," +
								e2_expr.toString_symbolic() + "))";
                }
				else 
				{
					String assignArr = Factory().getNextVarName((String)ePA1.getAttribute("assignarr"));
					String assignArr_s = Factory().getSymbolicNextVarName((String)ePA1.getAttribute("assignarr"));
					String idx_var = insert_intermediate_index_var(assignArrInd, assignArrIndSymbolic);
					String idx_nv = !OPTIONS.COMPILE_IDX_VARS? assignArrInd :
										(idx_var_nextNameNeeded()? Factory().getNextVarName(idx_var) : Factory().getCurrVarName(idx_var));
					String idx_symbnv = !OPTIONS.COMPILE_IDX_VARS? assignArrIndSymbolic :
										(idx_var_nextNameNeeded()? Factory().getSymbolicNextVarName(idx_var) : Factory().getSymbolicCurrVarName(idx_var));

					if(!Factory().callPresent(currClause)) {
						exstr = assignArr + "=" + "upd("
								+ e1_currvar.toString() + ","
								+ /*assignArrInd*/ idx_nv + "," + shorthandRef + "+("
								+ e2_expr.toString()
								+ "))";
						symbstr = "arrassign(" + assignArr_s + ","
								+ "upd(" + e1_currvar.toString_symbolic()
								+ "," + /*assignArrIndSymbolic*/ idx_symbnv + ",plus(" + shorthandRef_s + ","
								+ e2_expr.toString_symbolic() + ")))";
					}
					else {
						String t_var = Character.toUpperCase(var1.charAt(0)) + var1.substring(1);
						exstr = assignArr + "=" + "upd("
								+ e1_currvar.toString() + ","
								+ /*assignArrInd*/ idx_nv + "," + shorthandRef + "+("
								+ e2_expr.toString()
								+ "))";
						symbstr = "arrassign(" + assignArr_s + ","
								+ "upd(" + e1_currvar.toString_symbolic()
								+ "," + /*assignArrIndSymbolic*/ idx_symbnv + ",plus(" + shorthandRef_s + ","
								+ e2_expr.toString_symbolic() + ")))";
					}
					shorthandRef = null;
					shorthandRef_s = null;
					if(OPTIONS.INCLUDE_ONLY_SYM_ARRAY_CONSTRAINTS)
						exstr = "_=_";
                }

                #assignExpr.setAttribute("expression",
                        new Expression(Expression.CONSTRAINT, exstr, symbstr));

				// dealing with for loops
				if (isDelayed)
				{
					Factory().delayedClauseRefVar(var1);
					if(Factory().inAssignGroup)
						assignGroupVars.add(var1);
						
					Factory().addDelayedConstraint(exstr);					
					Factory().addDelayedSymbolicConstraint(symbstr);

					// array reference is passed up
					Factory().addDelayedArrayReference(e2_expr.getAllArrayReference());
				}
				else
				{
					Factory().clauseRefVar(currClause, var1);
					if(Factory().inAssignGroup)
						assignGroupVars.add(var1);
					Factory().addConstraint(currClause, exstr);
					Factory().addSymbolicConstraint(currClause, symbstr);

					// array reference is passed up
					Factory().addArrayReference(currClause, e1_expr.getAllArrayReference());
					Factory().addArrayReference(currClause, e2_expr.getAllArrayReference());
				}

				// closing rituals for this assignment group, but only if there is a function call
				if(Factory().inAssignGroup && Factory().callPresent(currClause) ||
					(!PREPROCESS && Factory().inAssignGroup && PreprocessInfo.isCallPP(Factory().getFuncName(), currPP+1)))
				{
					// add a reference because e1's vartext would've added a reference in the previous clause
					ArrRefToVar.clear(); ArrToCount.clear();
					Factory().closeAssignGroup(currClause, assignGroupVars);
					assignGroupVars.clear();

					// do special replace because of discrepancies in VRT for LHS variable
					if(Factory().callPresent(currClause)) {
						String from = e1_expr.toString();
						String to = Factory().getNextVarName(var1);

						DEBUG.println("assignment with call: replacing LHS variable " + from + " with " + to);
						if(!arrOnLHS && !ptrOnLHS)
							Factory().assignCallReplace(currClause, from, to);
					}
				}

			}
            arrOnLHS = false;
            ptrOnLHS = false;
        }
        |       #( MINUS_ASSIGN
		{  
			if(inAssign)
				FATAL.error("multiple assignment statement in " + Factory().getFuncName());
			if(Factory().inCondition)
				FATAL.error("assignment within block condition! in " + Factory().getFuncName());
			nextVarsNeeded=true ; 
			inLHSOfAssign = true;
			inAssign = true; 
			inLHSOfShorthandAssign = true;
			arrOnLHS = false;
			ptrOnLHS = false;
			bracDepth = 0;
			starDepth = 0;
			arrowDepth = 0;
			assignLHSVar = "";
			assignLHSVar_forInput = "";
			currChainStructVar = "";
		}
		eMA1: expr
		{
			currChainStructVar = "";
			nextVarsNeeded=false ;
			inLHSOfAssign = false; 
			inLHSOfShorthandAssign = false;
			bracDepth = 0;
			starDepth = 0;
			arrowDepth = 0;
			currAssignPP = currPP;
		}
		eMA2: expr
		{
			inAssign = false;
			currAssignPP = 0;
		} )
        {
			assignLHSVar = "";
			assignLHSVar_forInput = "";
            Expression e1_expr = (Expression)(eMA1.getAttribute("expression"));
            Expression e2_expr = (Expression)(eMA2.getAttribute("expression"));
            Expression e1_currvar = (Expression)(eMA1.getAttribute("currvar"));
            Expression e2_currvar = (Expression)(eMA2.getAttribute("currvar"));
            String var1 = (String) (eMA1.getAttribute("vartext"));
            String var2 = (String) (eMA2.getAttribute("vartext"));
            String exstr, symbstr;
			ClauseFactory factory = Factory();

			if(!OPTIONS.INCLUDE_ARRAY_CONSTRAINTS && (ptrOnLHS || arrOnLHS)) {
				// just close this assignment group if there's a call
				if(Factory().inAssignGroup && Factory().callPresent(currClause))
				{
					ArrRefToVar.clear(); ArrToCount.clear();
					Factory().closeAssignGroup(currClause, assignGroupVars);
					assignGroupVars.clear();
				}
			}
            else if (inStatement) {
                if(!arrOnLHS && !ptrOnLHS) 
				{
					String prev = factory.getPrevVarName(var1);
					String s_prev = factory.getSymbolicPrevVarName(var1);
                    exstr = factory.getNextVarName(var1) + "=" + prev + "-(" + e2_expr.toString() + ")";
                    symbstr = "assign(" + factory.getSymbolicNextVarName(var1) + ",minus(" + s_prev + "," +
								e2_expr.toString_symbolic() + "))";
                }
				else 
				{
					String assignArr = Factory().getNextVarName((String)eMA1.getAttribute("assignarr"));
					String assignArr_s = Factory().getSymbolicNextVarName((String)eMA1.getAttribute("assignarr"));
					String idx_var = insert_intermediate_index_var(assignArrInd, assignArrIndSymbolic);
					String idx_nv = !OPTIONS.COMPILE_IDX_VARS? assignArrInd :
										(idx_var_nextNameNeeded()? Factory().getNextVarName(idx_var) : Factory().getCurrVarName(idx_var));
					String idx_symbnv = !OPTIONS.COMPILE_IDX_VARS? assignArrIndSymbolic :
										(idx_var_nextNameNeeded()? Factory().getSymbolicNextVarName(idx_var) : Factory().getSymbolicCurrVarName(idx_var));

					if(!Factory().callPresent(currClause)) {
						exstr = assignArr + "=" + "upd("
								+ e1_currvar.toString() + ","
								+ /*assignArrInd*/ idx_nv + "," + shorthandRef + "-("
								+ e2_expr.toString()
								+ "))";
						symbstr = "arrassign(" + assignArr_s + ","
								+ "upd(" + e1_currvar.toString_symbolic()
								+ "," + /*assignArrIndSymbolic*/ idx_symbnv + ",minus(" + shorthandRef_s + ","
								+ e2_expr.toString_symbolic() + ")))";
					}
					else {
						String t_var = Character.toUpperCase(var1.charAt(0)) + var1.substring(1);
						exstr = assignArr + "=" + "upd("
								+ e1_currvar.toString() + ","
								+ /*assignArrInd*/ idx_nv + "," + shorthandRef + "-("
								+ e2_expr.toString()
								+ "))";
						symbstr = "arrassign(" + assignArr_s + ","
								+ "upd(" + e1_currvar.toString_symbolic()
								+ "," + /*assignArrIndSymbolic*/ idx_symbnv + ",minus(" + shorthandRef_s + ","
								+ e2_expr.toString_symbolic() + ")))";
					}
					shorthandRef = null;
					shorthandRef_s = null;
					if(OPTIONS.INCLUDE_ONLY_SYM_ARRAY_CONSTRAINTS)
						exstr = "_=_";
                }

                #assignExpr.setAttribute("expression",
                        new Expression(Expression.CONSTRAINT, exstr, symbstr));

				// dealing with for loops
				if (isDelayed)
				{
					Factory().delayedClauseRefVar(var1);
					if(Factory().inAssignGroup)
						assignGroupVars.add(var1);
						
					Factory().addDelayedConstraint(exstr);					
					Factory().addDelayedSymbolicConstraint(symbstr);

					// array reference is passed up
					Factory().addDelayedArrayReference(e2_expr.getAllArrayReference());
				}
				else
				{
					Factory().clauseRefVar(currClause, var1);
					if(Factory().inAssignGroup)
						assignGroupVars.add(var1);
					Factory().addConstraint(currClause, exstr);
					Factory().addSymbolicConstraint(currClause, symbstr);

					// array reference is passed up
					Factory().addArrayReference(currClause, e1_expr.getAllArrayReference());
					Factory().addArrayReference(currClause, e2_expr.getAllArrayReference());
				}

				// closing rituals for this assignment group, but only if there is a function call
				if(Factory().inAssignGroup && Factory().callPresent(currClause) ||
					(!PREPROCESS && Factory().inAssignGroup && PreprocessInfo.isCallPP(Factory().getFuncName(), currPP+1)))
				{
					// add a reference because e1's vartext would've added a reference in the previous clause
					ArrRefToVar.clear(); ArrToCount.clear();
					Factory().closeAssignGroup(currClause, assignGroupVars);
					assignGroupVars.clear();

					// do special replace because of discrepancies in VRT for LHS variable
					if(Factory().callPresent(currClause)) {
						String from = e1_expr.toString();
						String to = Factory().getNextVarName(var1);

						DEBUG.println("assignment with call: replacing LHS variable " + from + " with " + to);
						if(!arrOnLHS && !ptrOnLHS)
							Factory().assignCallReplace(currClause, from, to);
					}
				}

			}
            arrOnLHS = false;
            ptrOnLHS = false;
        }
        |       #( STAR_ASSIGN
		{  
			if(inAssign)
				FATAL.error("multiple assignment statement in " + Factory().getFuncName());
			if(Factory().inCondition)
				FATAL.error("assignment within block condition! in " + Factory().getFuncName());
			nextVarsNeeded=true ; 
			inLHSOfAssign = true;
			inAssign = true; 
			inLHSOfShorthandAssign = true;
			arrOnLHS = false;
			ptrOnLHS = false;
			bracDepth = 0;
			starDepth = 0;
			arrowDepth = 0;
			assignLHSVar = "";
			assignLHSVar_forInput = "";
			currChainStructVar = "";
		}
		eSA1: expr
		{
			currChainStructVar = "";
			nextVarsNeeded=false ;
			inLHSOfAssign = false; 
			inLHSOfShorthandAssign = false;
			bracDepth = 0;
			starDepth = 0;
			arrowDepth = 0;
			currAssignPP = currPP;
		}
		eSA2: expr
		{
			inAssign = false;
			currAssignPP = 0;
		} )
        {
			assignLHSVar = "";
			assignLHSVar_forInput = "";
            Expression e1_expr = (Expression)(eSA1.getAttribute("expression"));
            Expression e2_expr = (Expression)(eSA2.getAttribute("expression"));
            Expression e1_currvar = (Expression)(eSA1.getAttribute("currvar"));
            Expression e2_currvar = (Expression)(eSA2.getAttribute("currvar"));
            String var1 = (String) (eSA1.getAttribute("vartext"));
            String var2 = (String) (eSA2.getAttribute("vartext"));
            String exstr, symbstr;
			ClauseFactory factory = Factory();

			if(!OPTIONS.INCLUDE_ARRAY_CONSTRAINTS && (ptrOnLHS || arrOnLHS)) {
				// just close this assignment group if there's a call
				if(Factory().inAssignGroup && Factory().callPresent(currClause))
				{
					ArrRefToVar.clear(); ArrToCount.clear();
					Factory().closeAssignGroup(currClause, assignGroupVars);
					assignGroupVars.clear();
				}
			}
            else if (inStatement) {
                if(!arrOnLHS && !ptrOnLHS) 
				{
					String prev = factory.getPrevVarName(var1);
					String s_prev = factory.getSymbolicPrevVarName(var1);
                    exstr = factory.getNextVarName(var1) + "=" + prev + "*(" + e2_expr.toString() + ")";
                    symbstr = "assign(" + factory.getSymbolicNextVarName(var1) + ",mult(" + s_prev + "," +
								e2_expr.toString_symbolic() + "))";
                }
				else 
				{
					String assignArr = Factory().getNextVarName((String)eSA1.getAttribute("assignarr"));
					String assignArr_s = Factory().getSymbolicNextVarName((String)eSA1.getAttribute("assignarr"));
					String idx_var = insert_intermediate_index_var(assignArrInd, assignArrIndSymbolic);
					String idx_nv = !OPTIONS.COMPILE_IDX_VARS? assignArrInd :
										(idx_var_nextNameNeeded()? Factory().getNextVarName(idx_var) : Factory().getCurrVarName(idx_var));
					String idx_symbnv = !OPTIONS.COMPILE_IDX_VARS? assignArrIndSymbolic :
										(idx_var_nextNameNeeded()? Factory().getSymbolicNextVarName(idx_var) : Factory().getSymbolicCurrVarName(idx_var));

					if(!Factory().callPresent(currClause)) {
						exstr = assignArr + "=" + "upd("
								+ e1_currvar.toString() + ","
								+ /*assignArrInd*/ idx_nv + "," + shorthandRef + "*"
								+ e2_expr.toString()
								+ ")";
						symbstr = "arrassign(" + assignArr_s + ","
								+ "upd(" + e1_currvar.toString_symbolic()
								+ "," + /*assignArrIndSymbolic*/ idx_symbnv + ",mult(" + shorthandRef_s + ","
								+ e2_expr.toString_symbolic() + ")))";
					}
					else {
						String t_var = Character.toUpperCase(var1.charAt(0)) + var1.substring(1);
						exstr = assignArr + "=" + "upd("
								+ e1_currvar + ","
								+ /*assignArrInd*/ idx_nv + "," + shorthandRef + "*"
								+ e2_expr.toString()
								+ ")";
						symbstr = "arrassign(" + assignArr_s + ","
								+ "upd(" + e1_currvar.toString_symbolic()
								+ "," + /*assignArrIndSymbolic*/ idx_symbnv + ",mult(" + shorthandRef_s + ","
								+ e2_expr.toString_symbolic() + ")))";
					}
					shorthandRef = null;
					shorthandRef_s = null;
					if(OPTIONS.INCLUDE_ONLY_SYM_ARRAY_CONSTRAINTS)
						exstr = "_=_";
                }

                #assignExpr.setAttribute("expression",
                        new Expression(Expression.CONSTRAINT, exstr, symbstr));

				// dealing with for loops
				if (isDelayed)
				{
					Factory().delayedClauseRefVar(var1);
					if(Factory().inAssignGroup)
						assignGroupVars.add(var1);
						
					Factory().addDelayedConstraint(exstr);					
					Factory().addDelayedSymbolicConstraint(symbstr);

					// array reference is passed up
					Factory().addDelayedArrayReference(e2_expr.getAllArrayReference());
				}
				else
				{
					Factory().clauseRefVar(currClause, var1);
					if(Factory().inAssignGroup)
						assignGroupVars.add(var1);
					Factory().addConstraint(currClause, exstr);
					Factory().addSymbolicConstraint(currClause, symbstr);

					// array reference is passed up
					Factory().addArrayReference(currClause, e1_expr.getAllArrayReference());
					Factory().addArrayReference(currClause, e2_expr.getAllArrayReference());
				}

				// closing rituals for this assignment group, but only if there is a function call
				if(Factory().inAssignGroup && Factory().callPresent(currClause) ||
					(!PREPROCESS && Factory().inAssignGroup && PreprocessInfo.isCallPP(Factory().getFuncName(), currPP+1)))
				{
					// add a reference because e1's vartext would've added a reference in the previous clause
					ArrRefToVar.clear(); ArrToCount.clear();
					Factory().closeAssignGroup(currClause, assignGroupVars);
					assignGroupVars.clear();

					// do special replace because of discrepancies in VRT for LHS variable
					if(Factory().callPresent(currClause)) {
						String from = e1_expr.toString();
						String to = Factory().getNextVarName(var1);

						DEBUG.println("assignment with call: replacing LHS variable " + from + " with " + to);
						if(!arrOnLHS && !ptrOnLHS)
							Factory().assignCallReplace(currClause, from, to);
					}
				}

			}
            arrOnLHS = false;
            ptrOnLHS = false;
        }
        |       #( MOD_ASSIGN 		{ FATAL.error("shorthand %= encountered in " + Factory().getFuncName()); } expr expr)
        |       #( RSHIFT_ASSIGN 	{ FATAL.error("shorthand >>= encountered in " + Factory().getFuncName()); } expr expr)
        |       #( LSHIFT_ASSIGN 	{ FATAL.error("shorthand <<= encountered in " + Factory().getFuncName()); } expr expr)
        |       #( BAND_ASSIGN
		{  
			if(inAssign)
				FATAL.error("multiple assignment statement in " + Factory().getFuncName());
			if(Factory().inCondition)
				FATAL.error("assignment within block condition! in " + Factory().getFuncName());
			nextVarsNeeded=true ; 
			inLHSOfAssign = true;
			inAssign = true; 
			inLHSOfShorthandAssign = true;
			arrOnLHS = false;
			ptrOnLHS = false;
			bracDepth = 0;
			starDepth = 0;
			arrowDepth = 0;
			assignLHSVar = "";
			assignLHSVar_forInput = "";
			currChainStructVar = "";
		}
		eBAND1: expr
		{
			currChainStructVar = "";
			nextVarsNeeded=false ;
			inLHSOfAssign = false; 
			inLHSOfShorthandAssign = false;
			bracDepth = 0;
			starDepth = 0;
			arrowDepth = 0;
			currAssignPP = currPP;
		}
		eBAND2: expr
		{
			inAssign = false;
			currAssignPP = 0;
		} )
        {
			assignLHSVar = "";
			assignLHSVar_forInput = "";
            Expression e1_expr = (Expression)(eBAND1.getAttribute("expression"));
            Expression e2_expr = (Expression)(eBAND2.getAttribute("expression"));
            Expression e1_currvar = (Expression)(eBAND1.getAttribute("currvar"));
            Expression e2_currvar = (Expression)(eBAND2.getAttribute("currvar"));
            String var1 = (String) (eBAND1.getAttribute("vartext"));
            String var2 = (String) (eBAND2.getAttribute("vartext"));
            String exstr, symbstr;
			ClauseFactory factory = Factory();

			if(!OPTIONS.INCLUDE_ARRAY_CONSTRAINTS && (ptrOnLHS || arrOnLHS)) {
				// just close this assignment group if there's a call
				if(Factory().inAssignGroup && Factory().callPresent(currClause))
				{
					ArrRefToVar.clear(); ArrToCount.clear();
					Factory().closeAssignGroup(currClause, assignGroupVars);
					assignGroupVars.clear();
				}
			}
            else if (inStatement) {
                if(!arrOnLHS) 
				{
					String prev = factory.getPrevVarName(var1);
					String s_prev = factory.getSymbolicPrevVarName(var1);
                    exstr = factory.getNextVarName(var1) + "=_";
                    symbstr = "assign(" + factory.getSymbolicNextVarName(var1) + ",unk(1," + s_prev + "," +
								e2_expr.toString_symbolic() + "))";
                }
				else 
				{
					String idx_var = insert_intermediate_index_var(assignArrInd, assignArrIndSymbolic);
					String idx_nv = !OPTIONS.COMPILE_IDX_VARS? assignArrInd :
										(idx_var_nextNameNeeded()? Factory().getNextVarName(idx_var) : Factory().getCurrVarName(idx_var));
					String idx_symbnv = !OPTIONS.COMPILE_IDX_VARS? assignArrIndSymbolic :
										(idx_var_nextNameNeeded()? Factory().getSymbolicNextVarName(idx_var) : Factory().getSymbolicCurrVarName(idx_var));

					if(!Factory().callPresent(currClause)) {
						exstr = e1_expr.toString() + "=" + "upd("
								+ e1_currvar.toString() + ","
								+ /*assignArrInd*/ idx_nv + ",_)";
						symbstr = "arrassign(" + e1_expr.toString_symbolic() + ","
								+ "upd(" + e1_currvar.toString_symbolic()
								+ "," + /*assignArrIndSymbolic*/ idx_symbnv + ",unk(1," + shorthandRef_s + ","
								+ e2_expr.toString_symbolic() + ")))";
					}
					else {
						Variable t_var = new Variable(var1);
						exstr = e1_expr.toString() + "=" + "upd("
								+ t_var + ","
								+ /*assignArrInd*/ idx_nv + ",_)";
						symbstr = "arrassign(" + e1_expr.toString_symbolic() + ","
								+ "upd(" + t_var.getSymbolicCurrentName()
								+ "," + /*assignArrIndSymbolic*/ idx_symbnv + ",unk(1," + shorthandRef_s + ","
								+ e2_expr.toString_symbolic() + ")))";
					}
					shorthandRef = null;
					shorthandRef_s = null;
					if(OPTIONS.INCLUDE_ONLY_SYM_ARRAY_CONSTRAINTS)
						exstr = "_=_";
                }

                #assignExpr.setAttribute("expression",
                        new Expression(Expression.CONSTRAINT, exstr, symbstr));

				// dealing with for loops
				if (isDelayed)
				{
					Factory().delayedClauseRefVar(var1);
					if(Factory().inAssignGroup)
						assignGroupVars.add(var1);
						
					Factory().addDelayedConstraint(exstr);					
					Factory().addDelayedSymbolicConstraint(symbstr);

					// array reference is passed up
					Factory().addDelayedArrayReference(e2_expr.getAllArrayReference());
				}
				else
				{
					Factory().clauseRefVar(currClause, var1);
					if(Factory().inAssignGroup)
						assignGroupVars.add(var1);
					Factory().addConstraint(currClause, exstr);
					Factory().addSymbolicConstraint(currClause, symbstr);

					// array reference is passed up
					Factory().addArrayReference(currClause, e1_expr.getAllArrayReference());
					Factory().addArrayReference(currClause, e2_expr.getAllArrayReference());
				}

				// closing rituals for this assignment group, but only if there is a function call
				if(Factory().inAssignGroup && Factory().callPresent(currClause) ||
					(!PREPROCESS && Factory().inAssignGroup && PreprocessInfo.isCallPP(Factory().getFuncName(), currPP+1)))
				{
					// add a reference because e1's vartext would've added a reference in the previous clause
					ArrRefToVar.clear(); ArrToCount.clear();
					Factory().closeAssignGroup(currClause, assignGroupVars);
					assignGroupVars.clear();

					// do special replace because of discrepancies in VRT for LHS variable
					if(Factory().callPresent(currClause)) {
						String from = e1_expr.toString();
						String to = Factory().getNextVarName(var1);

						DEBUG.println("assignment with call: replacing LHS variable " + from + " with " + to);
						if(!arrOnLHS && !ptrOnLHS)
							Factory().assignCallReplace(currClause, from, to);
					}
				}

			}
            arrOnLHS = false;
            ptrOnLHS = false;
        }
        |       #( BOR_ASSIGN
		{  
			if(inAssign)
				FATAL.error("multiple assignment statement in " + Factory().getFuncName());
			if(Factory().inCondition)
				FATAL.error("assignment within block condition! in " + Factory().getFuncName());
			nextVarsNeeded=true ; 
			inLHSOfAssign = true;
			inAssign = true; 
			inLHSOfShorthandAssign = true;
			arrOnLHS = false;
			ptrOnLHS = false;
			bracDepth = 0;
			starDepth = 0;
			arrowDepth = 0;
			assignLHSVar = "";
			assignLHSVar_forInput = "";
			currChainStructVar = "";
		}
		eBOR1: expr
		{
			currChainStructVar = "";
			nextVarsNeeded=false ;
			inLHSOfAssign = false; 
			inLHSOfShorthandAssign = false;
			bracDepth = 0;
			starDepth = 0;
			arrowDepth = 0;
			currAssignPP = currPP;
		}
		eBOR2: expr
		{
			inAssign = false;
			currAssignPP = 0;
		} )
        {
			assignLHSVar = "";
			assignLHSVar_forInput = "";
            Expression e1_expr = (Expression)(eBOR1.getAttribute("expression"));
            Expression e2_expr = (Expression)(eBOR2.getAttribute("expression"));
            Expression e1_currvar = (Expression)(eBOR1.getAttribute("currvar"));
            Expression e2_currvar = (Expression)(eBOR2.getAttribute("currvar"));
            String var1 = (String) (eBOR1.getAttribute("vartext"));
            String var2 = (String) (eBOR2.getAttribute("vartext"));
            String exstr, symbstr;
			ClauseFactory factory = Factory();

			if(!OPTIONS.INCLUDE_ARRAY_CONSTRAINTS && (ptrOnLHS || arrOnLHS)) {
				// just close this assignment group if there's a call
				if(Factory().inAssignGroup && Factory().callPresent(currClause))
				{
					ArrRefToVar.clear(); ArrToCount.clear();
					Factory().closeAssignGroup(currClause, assignGroupVars);
					assignGroupVars.clear();
				}
			}
            else if (inStatement) {
                if(!arrOnLHS) 
				{
					String prev = factory.getPrevVarName(var1);
					String s_prev = factory.getSymbolicPrevVarName(var1);
                    exstr = factory.getNextVarName(var1) + "=_";
                    symbstr = "assign(" + factory.getSymbolicNextVarName(var1) + ",unk(2," + s_prev + "," +
								e2_expr.toString_symbolic() + "))";
                }
				else 
				{
					String idx_var = insert_intermediate_index_var(assignArrInd, assignArrIndSymbolic);
					String idx_nv = !OPTIONS.COMPILE_IDX_VARS? assignArrInd :
										(idx_var_nextNameNeeded()? Factory().getNextVarName(idx_var) : Factory().getCurrVarName(idx_var));
					String idx_symbnv = !OPTIONS.COMPILE_IDX_VARS? assignArrIndSymbolic :
										(idx_var_nextNameNeeded()? Factory().getSymbolicNextVarName(idx_var) : Factory().getSymbolicCurrVarName(idx_var));

					if(!Factory().callPresent(currClause)) {
						exstr = e1_expr.toString() + "=" + "upd("
								+ e1_currvar.toString() + ","
								+ /*assignArrInd*/ idx_nv + ",_)";
						symbstr = "arrassign(" + e1_expr.toString_symbolic() + ","
								+ "upd(" + e1_currvar.toString_symbolic()
								+ "," + /*assignArrIndSymbolic*/ idx_symbnv + ",unk(2," + shorthandRef_s + ","
								+ e2_expr.toString_symbolic() + ")))";
					}
					else {
						Variable t_var = new Variable(var1);
						exstr = e1_expr.toString() + "=" + "upd("
								+ t_var + ","
								+ /*assignArrInd*/ idx_nv + ",_)";
						symbstr = "arrassign(" + e1_expr.toString_symbolic() + ","
								+ "upd(" + t_var.getSymbolicCurrentName()
								+ "," + /*assignArrIndSymbolic*/ idx_symbnv + ",unk(2," + shorthandRef_s + ","
								+ e2_expr.toString_symbolic() + ")))";
					}
					shorthandRef = null;
					shorthandRef_s = null;
					if(OPTIONS.INCLUDE_ONLY_SYM_ARRAY_CONSTRAINTS)
						exstr = "_=_";
                }

                #assignExpr.setAttribute("expression",
                        new Expression(Expression.CONSTRAINT, exstr, symbstr));

				// dealing with for loops
				if (isDelayed)
				{
					Factory().delayedClauseRefVar(var1);
					if(Factory().inAssignGroup)
						assignGroupVars.add(var1);
						
					Factory().addDelayedConstraint(exstr);					
					Factory().addDelayedSymbolicConstraint(symbstr);

					// array reference is passed up
					Factory().addDelayedArrayReference(e2_expr.getAllArrayReference());
				}
				else
				{
					Factory().clauseRefVar(currClause, var1);
					if(Factory().inAssignGroup)
						assignGroupVars.add(var1);
					Factory().addConstraint(currClause, exstr);
					Factory().addSymbolicConstraint(currClause, symbstr);

					// array reference is passed up
					Factory().addArrayReference(currClause, e1_expr.getAllArrayReference());
					Factory().addArrayReference(currClause, e2_expr.getAllArrayReference());
				}

				// closing rituals for this assignment group, but only if there is a function call
				if(Factory().inAssignGroup && Factory().callPresent(currClause) ||
					(!PREPROCESS && Factory().inAssignGroup && PreprocessInfo.isCallPP(Factory().getFuncName(), currPP+1)))
				{
					// add a reference because e1's vartext would've added a reference in the previous clause
					ArrRefToVar.clear(); ArrToCount.clear();
					Factory().closeAssignGroup(currClause, assignGroupVars);
					assignGroupVars.clear();

					// do special replace because of discrepancies in VRT for LHS variable
					if(Factory().callPresent(currClause)) {
						String from = e1_expr.toString();
						String to = Factory().getNextVarName(var1);

						DEBUG.println("assignment with call: replacing LHS variable " + from + " with " + to);
						if(!arrOnLHS && !ptrOnLHS)
							Factory().assignCallReplace(currClause, from, to);
					}
				}

			}
            arrOnLHS = false;
            ptrOnLHS = false;
        }
        |       #( BXOR_ASSIGN
		{  
			if(inAssign)
				FATAL.error("multiple assignment statement in " + Factory().getFuncName());
			if(Factory().inCondition)
				FATAL.error("assignment within block condition! in " + Factory().getFuncName());
			nextVarsNeeded=true ; 
			inLHSOfAssign = true;
			inAssign = true; 
			inLHSOfShorthandAssign = true;
			arrOnLHS = false;
			ptrOnLHS = false;
			bracDepth = 0;
			starDepth = 0;
			arrowDepth = 0;
			assignLHSVar = "";
			assignLHSVar_forInput = "";
			currChainStructVar = "";
		}
		eXOR1: expr
		{
			currChainStructVar = "";
			nextVarsNeeded=false ;
			inLHSOfAssign = false; 
			inLHSOfShorthandAssign = false;
			bracDepth = 0;
			starDepth = 0;
			arrowDepth = 0;
			currAssignPP = currPP;
		}
		eXOR2: expr
		{
			inAssign = false;
			currAssignPP = 0;
		} )
        {
			assignLHSVar = "";
			assignLHSVar_forInput = "";
            Expression e1_expr = (Expression)(eXOR1.getAttribute("expression"));
            Expression e2_expr = (Expression)(eXOR2.getAttribute("expression"));
            Expression e1_currvar = (Expression)(eXOR1.getAttribute("currvar"));
            Expression e2_currvar = (Expression)(eXOR2.getAttribute("currvar"));
            String var1 = (String) (eXOR1.getAttribute("vartext"));
            String var2 = (String) (eXOR2.getAttribute("vartext"));
            String exstr, symbstr;
			ClauseFactory factory = Factory();

			if(!OPTIONS.INCLUDE_ARRAY_CONSTRAINTS && (ptrOnLHS || arrOnLHS)) {
				// just close this assignment group if there's a call
				if(Factory().inAssignGroup && Factory().callPresent(currClause))
				{
					ArrRefToVar.clear(); ArrToCount.clear();
					Factory().closeAssignGroup(currClause, assignGroupVars);
					assignGroupVars.clear();
				}
			}
            else if (inStatement) {
                if(!arrOnLHS) 
				{
					String prev = factory.getPrevVarName(var1);
					String s_prev = factory.getSymbolicPrevVarName(var1);
                    exstr = factory.getNextVarName(var1) + "=_";
                    symbstr = "assign(" + factory.getSymbolicNextVarName(var1) + ",unk(3," + s_prev + "," +
								e2_expr.toString_symbolic() + "))";
                }
				else 
				{
					String idx_var = insert_intermediate_index_var(assignArrInd, assignArrIndSymbolic);
					String idx_nv = !OPTIONS.COMPILE_IDX_VARS? assignArrInd :
										(idx_var_nextNameNeeded()? Factory().getNextVarName(idx_var) : Factory().getCurrVarName(idx_var));
					String idx_symbnv = !OPTIONS.COMPILE_IDX_VARS? assignArrIndSymbolic :
										(idx_var_nextNameNeeded()? Factory().getSymbolicNextVarName(idx_var) : Factory().getSymbolicCurrVarName(idx_var));

					if(!Factory().callPresent(currClause)) {
						exstr = e1_expr.toString() + "=" + "upd("
								+ e1_currvar.toString() + ","
								+ /*assignArrInd*/ idx_nv + ",_)";
						symbstr = "arrassign(" + e1_expr.toString_symbolic() + ","
								+ "upd(" + e1_currvar.toString_symbolic()
								+ "," + /*assignArrIndSymbolic*/ idx_symbnv + ",unk(3," + shorthandRef_s + ","
								+ e2_expr.toString_symbolic() + ")))";
					}
					else {
						Variable t_var = new Variable(var1);
						exstr = e1_expr.toString() + "=" + "upd("
								+ t_var + ","
								+ /*assignArrInd*/ idx_nv + ",_)";
						symbstr = "arrassign(" + e1_expr.toString_symbolic() + ","
								+ "upd(" + t_var.getSymbolicCurrentName()
								+ "," + /*assignArrIndSymbolic*/ idx_symbnv + ",unk(3," + shorthandRef_s + ","
								+ e2_expr.toString_symbolic() + ")))";
					}
					shorthandRef = null;
					shorthandRef_s = null;
					if(OPTIONS.INCLUDE_ONLY_SYM_ARRAY_CONSTRAINTS)
						exstr = "_=_";
                }

                #assignExpr.setAttribute("expression",
                        new Expression(Expression.CONSTRAINT, exstr, symbstr));

				// dealing with for loops
				if (isDelayed)
				{
					Factory().delayedClauseRefVar(var1);
					if(Factory().inAssignGroup)
						assignGroupVars.add(var1);
						
					Factory().addDelayedConstraint(exstr);					
					Factory().addDelayedSymbolicConstraint(symbstr);

					// array reference is passed up
					Factory().addDelayedArrayReference(e2_expr.getAllArrayReference());
				}
				else
				{
					Factory().clauseRefVar(currClause, var1);
					if(Factory().inAssignGroup)
						assignGroupVars.add(var1);
					Factory().addConstraint(currClause, exstr);
					Factory().addSymbolicConstraint(currClause, symbstr);

					// array reference is passed up
					Factory().addArrayReference(currClause, e1_expr.getAllArrayReference());
					Factory().addArrayReference(currClause, e2_expr.getAllArrayReference());
				}

				// closing rituals for this assignment group, but only if there is a function call
				if(Factory().inAssignGroup && Factory().callPresent(currClause) ||
					(!PREPROCESS && Factory().inAssignGroup && PreprocessInfo.isCallPP(Factory().getFuncName(), currPP+1)))
				{
					// add a reference because e1's vartext would've added a reference in the previous clause
					ArrRefToVar.clear(); ArrToCount.clear();
					Factory().closeAssignGroup(currClause, assignGroupVars);
					assignGroupVars.clear();

					// do special replace because of discrepancies in VRT for LHS variable
					if(Factory().callPresent(currClause)) {
						String from = e1_expr.toString();
						String to = Factory().getNextVarName(var1);

						DEBUG.println("assignment with call: replacing LHS variable " + from + " with " + to);
						if(!arrOnLHS && !ptrOnLHS)
							Factory().assignCallReplace(currClause, from, to);
					}
				}

			}
            arrOnLHS = false;
            ptrOnLHS = false;
        }
        ;

conditionalExpr
{
	parseNode = #conditionalExpr;
}
        :       #( QUESTION expr (expr)? COLON expr )
        ;

logicalOrExpr
{
	parseNode = #logicalOrExpr;
}
        :       #( LOR lor_expr1:expr lor_expr2:expr) 
		{ #logicalOrExpr.setAttribute("plaintext", lor_expr1.getAttribute("plaintext") + " || " + lor_expr2.getAttribute("plaintext")); }
            {
                Expression lor_expr1_obj =
                (Expression)(lor_expr1.getAttribute("expression"));
                Expression lor_expr2_obj =
                (Expression)(lor_expr2.getAttribute("expression"));

                Expression lor_expr1_expr;
                Expression lor_expr1_opp;

                Expression lor_expr2_expr;
                Expression lor_expr2_opp;

                Expression lor_expr;
                Expression lor_opp;

		/* Vijay - Adding condition variable to block */
                String var1 = (String)lor_expr1.getAttribute("vartext");
                String var2 = (String)lor_expr2.getAttribute("vartext");
                if(var1 != null) Factory().clauseCondVar(var1);
                if(var2 != null) Factory().clauseCondVar(var2);

                //-------------------------------------------------------------
                // lor_expr1 may not be logical, construct a logical one,
                // store in lor_expr1_expr, and the opposite in lor_expr1_opp.
                //-------------------------------------------------------------
                if (!(lor_expr1_obj.isLogical())) {

                    // DEBUG.println(String.format("3: Converting %s to constraint", lor_expr1_obj.toString()));

                    lor_expr1_expr = lor_expr1_obj.makeLogical();
                    lor_expr1_opp = lor_expr1_obj.makeLogicalOpposite();
                } else {
                    lor_expr1_expr = lor_expr1_obj;
                    lor_expr1_opp =
                    (Expression)(lor_expr1.getAttribute("opposite"));
                }

                //-------------------------------------------------------------
                // lor_expr2 may not be logical, construct a logical one,
                // store in lor_expr2_expr, and the opposite in lor_expr2_opp.
                //-------------------------------------------------------------
                if (!(lor_expr2_obj.isLogical())) {

                    // DEBUG.println(String.format("4: Converting %s to constraint", lor_expr2_obj.toString()));

                    lor_expr2_expr = lor_expr2_obj.makeLogical();
                    lor_expr2_opp = lor_expr2_obj.makeLogicalOpposite();
                } else {
                    lor_expr2_expr = lor_expr2_obj;
                    lor_expr2_opp = 
                    (Expression)(lor_expr2.getAttribute("opposite"));
                }

                //-------------------------------------------------------------
                // Construct output expression
                //-------------------------------------------------------------
                if (lor_expr1_expr.getType() == Expression.CONSTRAINT ||
                    lor_expr1_expr.getType() == Expression.CONJUNCTION) {
                    lor_expr = lor_expr1_expr.makeDisjunction();
                } else {
                    // lor_expr1_expr.getType() == Expression.DISJUNCTION
                    lor_expr = lor_expr1_expr;
                }
                lor_expr.addDisjunct(lor_expr2_expr);

                //-------------------------------------------------------------
                // Construct output "opposite" expression
                //-------------------------------------------------------------
                if (lor_expr2_opp.getType() == Expression.DISJUNCTION) {
                    if (lor_expr1_opp.getType() == Expression.CONSTRAINT ||
                        lor_expr1_opp.getType() == Expression.CONJUNCTION) {
                        lor_opp = lor_expr1_opp.makeDisjunction();
                    } else {
                        // lor_expr1_opp.getType() == Expression.DISJUNCTION
                        lor_opp = lor_expr1_opp;
                    }
                } else {
                    if (lor_expr1_opp.getType() == Expression.CONSTRAINT) {
                        lor_opp = lor_expr1_opp.makeConjunction();
                    } else {
                        lor_opp = lor_expr1_opp;
                    }
                }

                if (lor_opp.getType() == Expression.CONJUNCTION) {
                    if (lor_expr2_opp.getType() == Expression.CONSTRAINT ||
                        lor_expr2_opp.getType() == Expression.CONJUNCTION) {
                        lor_opp.restrict(lor_expr2_opp);
                    }
                } else {
                    // lor_opp.getType() == Expression.DISJUNCTION
                    if (lor_expr2_opp.getType() == Expression.CONSTRAINT ||
                        lor_expr2_opp.getType() == Expression.CONJUNCTION) {
                        lor_opp.restrict(lor_expr2_opp);
                    } else {
                        // lor_expr2_opp.getType() == Expression.DISJUNCTION
                        lor_opp.restrict(lor_expr2_opp);
                    }
                }

                // DEBUG.println(String.format("3: Storing attribute %s type %d", lor_expr.toString(), lor_expr.getType()));
                // DEBUG.println(String.format("3: Storing attribute %s type %d", lor_opp.toString(), lor_opp.getType()));

				lor_expr.addArrayReference(lor_expr1_obj.getAllArrayReference());
				lor_expr.addArrayReference(lor_expr2_obj.getAllArrayReference());
                #logicalOrExpr.setAttribute("expression", lor_expr);
                #logicalOrExpr.setAttribute("opposite", lor_opp);
            }
        ;

logicalAndExpr
{
	parseNode = #logicalAndExpr;
}
        :       #( LAND land_expr1:expr land_expr2:expr )
		{ #logicalAndExpr.setAttribute("plaintext", land_expr1.getAttribute("plaintext") + " && " + land_expr2.getAttribute("plaintext")); }
        {
            
            Expression land_expr1_obj =
            (Expression)(land_expr1.getAttribute("expression"));
            Expression land_expr2_obj =
            (Expression)(land_expr2.getAttribute("expression"));

            Expression land_expr1_expr;
            Expression land_expr1_opp;

            Expression land_expr2_expr;
            Expression land_expr2_opp;

            Expression land_expr;
            Expression land_opp;

	    /* Vijay - Adding condition variable to block */
            String var1 = (String)land_expr1.getAttribute("vartext");
            String var2 = (String)land_expr2.getAttribute("vartext");
            if(var1 != null) Factory().clauseCondVar(var1);
            if(var2 != null) Factory().clauseCondVar(var2);

            //-----------------------------------------------------------------
            // land_expr1 may not be logical, construct a logical one,
            // store in land_expr1_expr, and the opposite in
            // land_expr1_opp.
            //-----------------------------------------------------------------
            if (!(land_expr1_obj.isLogical())) {
                land_expr1_expr = land_expr1_obj.makeLogical();
                land_expr1_opp = land_expr1_obj.makeLogicalOpposite();
            } else {
                land_expr1_expr = land_expr1_obj;
                land_expr1_opp = 
                (Expression)(land_expr1.getAttribute("opposite"));
            }

            //-----------------------------------------------------------------
            // land_expr2 may not be logical, construct a logical one,
            // store in land_expr2_expr, and the opposite in
            // land_expr2_opp.
            //-----------------------------------------------------------------
            if (!(land_expr2_obj.isLogical())) {
                land_expr2_expr = land_expr2_obj.makeLogical();
                land_expr2_opp = land_expr2_obj.makeLogicalOpposite();
            } else {
                land_expr2_expr = land_expr2_obj;
                land_expr2_opp =
                (Expression)(land_expr2.getAttribute("opposite"));
            }

            //-----------------------------------------------------------------
            // Construct output expression
            //-----------------------------------------------------------------
            if (land_expr2_expr.getType() == Expression.DISJUNCTION) {
                if (land_expr1_expr.getType() == Expression.CONSTRAINT || land_expr1_expr.getType() == Expression.CONJUNCTION) {
					land_expr = land_expr1_expr.makeDisjunction();
                } else {
                    land_expr = land_expr1_expr;
                }
                land_expr.restrict(land_expr2_expr);
            } else {
                if (land_expr1_expr.getType() == Expression.CONSTRAINT) {
                    land_expr = land_expr1_expr.makeConjunction();
                    land_expr.restrict(land_expr2_expr);
                } else if (land_expr1_expr.getType() ==
                    Expression.CONJUNCTION) {
                    land_expr = land_expr1_expr;
                    land_expr.restrict(land_expr2_expr);
                } else {
                    land_expr = land_expr1_expr;
                    land_expr.restrict(land_expr2_expr);
                }
            }

            //-----------------------------------------------------------------
            // Construct output "opposite" expression
            //-----------------------------------------------------------------

            if (land_expr1_opp.getType() == Expression.CONSTRAINT ||
                land_expr1_opp.getType() == Expression.CONJUNCTION) {
                land_opp = land_expr1_opp.makeDisjunction();
            } else {
                land_opp = land_expr1_opp;
            }
            land_opp.addDisjunct(land_expr2_opp);
            
			land_expr.addArrayReference(land_expr1_obj.getAllArrayReference());
			land_expr.addArrayReference(land_expr2_obj.getAllArrayReference());

            #logicalAndExpr.setAttribute("expression", land_expr);
            #logicalAndExpr.setAttribute("opposite", land_opp);
        }
        ;

inclusiveOrExpr
{
	parseNode = #inclusiveOrExpr;
}
        :       #( BOR e1:expr e2:expr { #inclusiveOrExpr.setAttribute("plaintext", e1.getAttribute("plaintext") + " | " + e2.getAttribute("plaintext")); }
		{
			String v1_s = (String) e1.getAttribute("vartext");
			String v2_s = (String) e2.getAttribute("vartext");

			if(v1_s != null && !Character.isDigit(v1_s.charAt(0))) {
				if(!inLHSOfAssign && v1_s.compareTo(assignLHSVar) == 0)
					v1_s = Factory().getSymbolicPrevVarName(v1_s);
				else
					v1_s = Factory().getSymbolicCurrVarName(v1_s);
			}

			if(v2_s != null && !Character.isDigit(v2_s.charAt(0))) {
				if(!inLHSOfAssign && v2_s.compareTo(assignLHSVar) == 0)
					v2_s = Factory().getSymbolicPrevVarName(v2_s);
				else
					v2_s = Factory().getSymbolicCurrVarName(v2_s);
			}
			
			// by Vijay - why do we need to store vartext?! just store the expression
			//if(v1_s == null)
				v1_s = ((Expression)e1.getAttribute("expression")).toString_symbolic();
			//if(v2_s == null)
				v2_s = ((Expression)e2.getAttribute("expression")).toString_symbolic();

			String ex = "_";
			String ex_s = "unk(2," + v1_s + "," + v2_s + ")";

			Expression e = new Expression(ex, ex_s);
			#inclusiveOrExpr.setAttribute("unkexpression", true);
			#inclusiveOrExpr.setAttribute("expression", e);
		}
		)
        ;

exclusiveOrExpr
{
	parseNode = #exclusiveOrExpr;
}
        :       #( BXOR e1:expr e2:expr { #exclusiveOrExpr.setAttribute("plaintext", e1.getAttribute("plaintext") + " ^ " + e2.getAttribute("plaintext")); }
		{
			String v1_s = (String) e1.getAttribute("vartext");
			String v2_s = (String) e2.getAttribute("vartext");

			if(v1_s != null && !Character.isDigit(v1_s.charAt(0))) {
				if(!inLHSOfAssign && v1_s.compareTo(assignLHSVar) == 0)
					v1_s = Factory().getSymbolicPrevVarName(v1_s);
				else
					v1_s = Factory().getSymbolicCurrVarName(v1_s);
			}

			if(v2_s != null && !Character.isDigit(v2_s.charAt(0))) {
				if(!inLHSOfAssign && v2_s.compareTo(assignLHSVar) == 0)
					v2_s = Factory().getSymbolicPrevVarName(v2_s);
				else
					v2_s = Factory().getSymbolicCurrVarName(v2_s);
			}

			// by Vijay - why do we need to store vartext?! just store the expression
			//if(v1_s == null)
				v1_s = ((Expression)e1.getAttribute("expression")).toString_symbolic();
			//if(v2_s == null)
				v2_s = ((Expression)e2.getAttribute("expression")).toString_symbolic();

			String ex = "_";
			String ex_s = "unk(3," + v1_s + "," + v2_s + ")";

			Expression e = new Expression(ex, ex_s);
			#exclusiveOrExpr.setAttribute("unkexpression", true);
			#exclusiveOrExpr.setAttribute("expression", e);
		}
		)
        ;

bitAndExpr
{
	parseNode = #bitAndExpr;
}
        :       #( BAND e1:expr e2:expr { #bitAndExpr.setAttribute("plaintext", e1.getAttribute("plaintext") + " & " + e2.getAttribute("plaintext")); }
		{
			String v1_s = (String) e1.getAttribute("vartext");
			String v2_s = (String) e2.getAttribute("vartext");

			if(v1_s != null && !Character.isDigit(v1_s.charAt(0))) {
				if(!inLHSOfAssign && v1_s.compareTo(assignLHSVar) == 0)
					v1_s = Factory().getSymbolicPrevVarName(v1_s);
				else
					v1_s = Factory().getSymbolicCurrVarName(v1_s);
			}

			if(v2_s != null && !Character.isDigit(v2_s.charAt(0))) {
				if(!inLHSOfAssign && v2_s.compareTo(assignLHSVar) == 0)
					v2_s = Factory().getSymbolicPrevVarName(v2_s);
				else
					v2_s = Factory().getSymbolicCurrVarName(v2_s);
			}

			// by Vijay - why do we need to store vartext?! just store the expression
			//if(v1_s == null)
				v1_s = ((Expression)e1.getAttribute("expression")).toString_symbolic();
			//if(v2_s == null)
				v2_s = ((Expression)e2.getAttribute("expression")).toString_symbolic();

			String ex = "_";
			String ex_s = "unk(1," + v1_s + "," + v2_s + ")";

			Expression e = new Expression(ex, ex_s);
			#bitAndExpr.setAttribute("unkexpression", true);
			#bitAndExpr.setAttribute("expression", e);
		}
		)
        ;

equalityExpr
{
	parseNode = #equalityExpr;
}
        :       #( EQUAL e1:expr e2:expr) { #equalityExpr.setAttribute("plaintext", e1.getAttribute("plaintext") + " == " + e2.getAttribute("plaintext")); }
        {
            Expression e1_obj =
            (Expression)(e1.getAttribute("expression"));
            Expression e2_obj =
            (Expression)(e2.getAttribute("expression"));
            Expression opp_eq_expr;

	    /* Vijay - Adding condition variable to block */
            String var1 = (String)e1.getAttribute("vartext");
            String var2 = (String)e2.getAttribute("vartext");
            if(var1 != null) Factory().clauseCondVar(var1);
            if(var2 != null) Factory().clauseCondVar(var2);

            if (inStatement) {
		Expression eq_expr;
        if(OPTIONS.EQ_TO_INEQ) {
            eq_expr = new Expression(Expression.CONJUNCTION);

            Expression tmpex1 = new Expression(Expression.CONSTRAINT, e1_obj
							    .toString()
							    + ">=" + e2_obj.toString(), "geq("
							    + e1_obj.toString_symbolic() + ","
							    + e2_obj.toString_symbolic() + ")");
            tmpex1.addArrayReference(e1_obj.getAllArrayReference());
            tmpex1.addArrayReference(e2_obj.getAllArrayReference());
            tmpex1.setText(e1.getAttribute("plaintext") + " >= " + e2.getAttribute("plaintext"));

            Expression tmpex2 = new Expression(Expression.CONSTRAINT, e1_obj
							    .toString()
							    + "<=" + e2_obj.toString(), "geq("
							    + e2_obj.toString_symbolic() + ","
							    + e1_obj.toString_symbolic() + ")");
            tmpex2.addArrayReference(e1_obj.getAllArrayReference());
            tmpex2.addArrayReference(e2_obj.getAllArrayReference());
            tmpex2.setText(e1.getAttribute("plaintext") + " <= " + e2.getAttribute("plaintext"));

            eq_expr.addConstraint(tmpex1);
            eq_expr.addConstraint(tmpex2);
        }
        else {
            eq_expr = new Expression(Expression.CONSTRAINT, e1_obj
							    .toString()
							    + "=" + e2_obj.toString(), "eq("
							    + e1_obj.toString_symbolic() + ","
							    + e2_obj.toString_symbolic() + ")");
            eq_expr.addArrayReference(e1_obj.getAllArrayReference());
            eq_expr.addArrayReference(e2_obj.getAllArrayReference());
            eq_expr.setText(e1.getAttribute("plaintext") + " == " + e2.getAttribute("plaintext"));
        }

                #equalityExpr.setAttribute("expression",eq_expr);
						
				Expression opp_exp1 = new Expression(Expression.CONSTRAINT,
                           	 e1_obj.toString() + "<" + e2_obj.toString(),
                                 "gt(" + e2_obj.toString_symbolic() + "," +
                                 e1_obj.toString_symbolic() + ")");
				opp_exp1.setText(e1.getAttribute("plaintext") + " < " + e2.getAttribute("plaintext"));
                opp_eq_expr = opp_exp1.makeDisjunction();

				Expression opp_exp2 = new Expression(Expression.CONSTRAINT,
                            e1_obj.toString() + ">" + e2_obj.toString(),
                            "gt(" + e1_obj.toString_symbolic() + "," +
                            e2_obj.toString_symbolic() + ")");
				opp_exp2.setText(e1.getAttribute("plaintext") + " > " + e2.getAttribute("plaintext"));
                opp_eq_expr.addDisjunct(opp_exp2.makeConjunction());

		opp_eq_expr.addArrayReference(e1_obj.getAllArrayReference());
		opp_eq_expr.addArrayReference(e2_obj.getAllArrayReference());

                #equalityExpr.setAttribute("opposite", opp_eq_expr);
                }
            }
        |       #( NOT_EQUAL e3:expr e4:expr) { #equalityExpr.setAttribute("plaintext", e3.getAttribute("plaintext") + " != " + e4.getAttribute("plaintext")); }
        { 
            Expression e3_obj =
            (Expression)(e3.getAttribute("expression"));
            Expression e4_obj =
            (Expression)(e4.getAttribute("expression"));
            Expression neq_expr;

            if (inStatement) {
				Expression exp1 = new Expression(Expression.CONSTRAINT,
                        e3_obj.toString() + "<" + e4_obj.toString(),
                        "gt(" + e4_obj.toString_symbolic() + "," +
                        e3_obj.toString_symbolic() + ")");
				exp1.setText(e3.getAttribute("plaintext") + " < " + e4.getAttribute("plaintext"));
                neq_expr = exp1.makeDisjunction();

				Expression exp2 = new Expression(Expression.CONSTRAINT,
                            e3_obj.toString() + ">" + e4_obj.toString(),
                            "gt(" + e3_obj.toString_symbolic() + "," +
                            e4_obj.toString_symbolic() + ")");
				exp2.setText(e3.getAttribute("plaintext") + " > " + e4.getAttribute("plaintext"));
                neq_expr.addDisjunct(exp2.makeConjunction());

		neq_expr.addArrayReference(e3_obj.getAllArrayReference());
		neq_expr.addArrayReference(e4_obj.getAllArrayReference());
                // DEBUG.println(String.format("4: Storing attribute %s type %d", neq_expr.toString(), neq_expr.getType()));

                #equalityExpr.setAttribute("expression", neq_expr);

		Expression opp_neq_expr;
        if(OPTIONS.EQ_TO_INEQ) {
            opp_neq_expr = new Expression(Expression.CONJUNCTION);

            Expression tmpex1 = new Expression(Expression.CONSTRAINT, e3_obj
						 .toString()
						 + ">=" + e4_obj.toString(), "geq("
						 + e3_obj.toString_symbolic() + ","
						 + e4_obj.toString_symbolic() + ")");
            tmpex1.addArrayReference(e3_obj.getAllArrayReference());
            tmpex1.addArrayReference(e4_obj.getAllArrayReference());
            tmpex1.setText(e3.getAttribute("plaintext") + " >= " + e4.getAttribute("plaintext"));

            Expression tmpex2 = new Expression(Expression.CONSTRAINT, e3_obj
						 .toString()
						 + "<=" + e4_obj.toString(), "geq("
						 + e4_obj.toString_symbolic() + ","
						 + e3_obj.toString_symbolic() + ")");
            tmpex2.addArrayReference(e3_obj.getAllArrayReference());
            tmpex2.addArrayReference(e4_obj.getAllArrayReference());
            tmpex2.setText(e3.getAttribute("plaintext") + " <= " + e4.getAttribute("plaintext"));

            opp_neq_expr.addConstraint(tmpex1);
            opp_neq_expr.addConstraint(tmpex2);
        }
        else {
            opp_neq_expr = new Expression(Expression.CONSTRAINT, e3_obj
						 .toString()
						 + "=" + e4_obj.toString(), "eq("
						 + e3_obj.toString_symbolic() + ","
						 + e4_obj.toString_symbolic() + ")");
            opp_neq_expr.addArrayReference(e3_obj.getAllArrayReference());
            opp_neq_expr.addArrayReference(e4_obj.getAllArrayReference());
            opp_neq_expr.setText(e3.getAttribute("plaintext") + " == " + e4.getAttribute("plaintext"));
        }

                #equalityExpr.setAttribute("opposite", opp_neq_expr);
                }
            }

        ;

relationalExpr
{
	parseNode = #relationalExpr;
}
        :       #( LT e1:expr e2:expr) { #relationalExpr.setAttribute("plaintext", e1.getAttribute("plaintext") + " < " + e2.getAttribute("plaintext")); }
        { 
            Expression e1_obj = (Expression)(e1.getAttribute("expression"));
            Expression e2_obj = (Expression)(e2.getAttribute("expression"));

	    /* Vijay - Adding condition variable to block */
	    String var1 = (String)e1.getAttribute("vartext");
	    String var2 = (String)e2.getAttribute("vartext");
	    if(var1 != null) Factory().clauseCondVar(var1);
	    if(var2 != null) Factory().clauseCondVar(var2);
            
		if (inStatement) {

			Expression lt_expr, opp_lt_expr;
			if(!OPTIONS.CONVERT_STRICT_INEQUALITIES) {
				lt_expr = new Expression(Expression.CONSTRAINT, e1_obj
								.toString()
								+ "<" + e2_obj.toString(), "gt("
								+ e2_obj.toString_symbolic() + ","
								+ e1_obj.toString_symbolic() + ")");						

				opp_lt_expr = new Expression(Expression.CONSTRAINT, e1_obj
							.toString()
							+ ">=" + e2_obj.toString(), "geq("
							+ e1_obj.toString_symbolic() + ","
							+ e2_obj.toString_symbolic() + ")");
			}
			else {
				lt_expr = new Expression(Expression.CONSTRAINT, e1_obj
								.toString() + "+1"
								+ "<=" + e2_obj.toString(), "geq("
								+ e2_obj.toString_symbolic() + ",plus("
								+ e1_obj.toString_symbolic() + ",1))");						

				opp_lt_expr = new Expression(Expression.CONSTRAINT, e1_obj
							.toString()
							+ ">=" + e2_obj.toString(), "geq("
							+ e1_obj.toString_symbolic() + ","
							+ e2_obj.toString_symbolic() + ")");
			}
			lt_expr.addArrayReference(e1_obj.getAllArrayReference());
			lt_expr.addArrayReference(e2_obj.getAllArrayReference());
			lt_expr.setText(e1.getAttribute("plaintext") + " < " + e2.getAttribute("plaintext"));
			opp_lt_expr.addArrayReference(e1_obj.getAllArrayReference());
			opp_lt_expr.addArrayReference(e2_obj.getAllArrayReference());
			opp_lt_expr.setText(e1.getAttribute("plaintext") + " >= " + e2.getAttribute("plaintext"));
			#relationalExpr.setAttribute("expression", lt_expr);
			#relationalExpr.setAttribute("opposite", opp_lt_expr);			
		}
        }

        |       #( LTE e3:expr e4:expr) { #relationalExpr.setAttribute("plaintext", e3.getAttribute("plaintext") + " <= " + e4.getAttribute("plaintext")); }
        { 
            Expression e3_obj = (Expression)(e3.getAttribute("expression"));
            Expression e4_obj = (Expression)(e4.getAttribute("expression"));

	    /* Vijay - Adding condition variable to block */
	    String var1 = (String)e3.getAttribute("vartext");
	    String var2 = (String)e4.getAttribute("vartext");
	    if(var1 != null) Factory().clauseCondVar(var1);
	    if(var2 != null) Factory().clauseCondVar(var2);
            
		if (inStatement) {
			Expression lte_expr, opp_lte_expr;
			if(!OPTIONS.CONVERT_STRICT_INEQUALITIES) {
				lte_expr = new Expression(Expression.CONSTRAINT, e3_obj
							 .toString()
							 + "<=" + e4_obj.toString(), "geq("
							 + e4_obj.toString_symbolic() + ","
							 + e3_obj.toString_symbolic() + ")");
		
				opp_lte_expr = new Expression(Expression.CONSTRAINT, e3_obj
							 .toString()
							 + ">" + e4_obj.toString(), "gt("
							 + e3_obj.toString_symbolic() + ","
							 + e4_obj.toString_symbolic() + ")");
			}
			else {
				lte_expr = new Expression(Expression.CONSTRAINT, e3_obj
							 .toString()
							 + "<=" + e4_obj.toString(), "geq("
							 + e4_obj.toString_symbolic() + ","
							 + e3_obj.toString_symbolic() + ")");

				opp_lte_expr = new Expression(Expression.CONSTRAINT, e3_obj
							 .toString()
							 + ">=" + e4_obj.toString() + "+1", "geq("
							 + e3_obj.toString_symbolic() + ",plus("
							 + e4_obj.toString_symbolic() + ",1))");
			}
			lte_expr.addArrayReference(e3_obj.getAllArrayReference());
			lte_expr.addArrayReference(e4_obj.getAllArrayReference());
			lte_expr.setText(e3.getAttribute("plaintext") + " <= " + e4.getAttribute("plaintext"));
			opp_lte_expr.addArrayReference(e3_obj.getAllArrayReference());
			opp_lte_expr.addArrayReference(e4_obj.getAllArrayReference());
			opp_lte_expr.setText(e3.getAttribute("plaintext") + " > " + e4.getAttribute("plaintext"));
			#relationalExpr.setAttribute("expression", lte_expr);
			#relationalExpr.setAttribute("opposite", opp_lte_expr);
		}
        }
        |       #( GT e5:expr e6:expr) { #relationalExpr.setAttribute("plaintext", e5.getAttribute("plaintext") + " > " + e6.getAttribute("plaintext")); }
        { 
            Expression e5_obj = (Expression)(e5.getAttribute("expression"));
            Expression e6_obj = (Expression)(e6.getAttribute("expression"));

	    /* Vijay - Adding condition variable to block */
	    String var1 = (String)e5.getAttribute("vartext");
	    String var2 = (String)e6.getAttribute("vartext");
	    if(var1 != null) Factory().clauseCondVar(var1);
	    if(var2 != null) Factory().clauseCondVar(var2);

		if (inStatement) {
			Expression gt_expr, opp_gt_expr;
			if(!OPTIONS.CONVERT_STRICT_INEQUALITIES) {
				gt_expr = new Expression(Expression.CONSTRAINT, e5_obj
						    .toString()
						    + ">" + e6_obj.toString(), "gt("
						    + e5_obj.toString_symbolic() + ","
						    + e6_obj.toString_symbolic() + ")");
				opp_gt_expr = new Expression(Expression.CONSTRAINT, e5_obj
							.toString()
							+ "<=" + e6_obj.toString(), "geq("
							+ e6_obj.toString_symbolic() + ","
							+ e5_obj.toString_symbolic() + ")");
			}
			else {
				gt_expr = new Expression(Expression.CONSTRAINT, e5_obj
						    .toString()
						    + ">=" + e6_obj.toString() + "+1", "geq("
						    + e5_obj.toString_symbolic() + ",plus("
						    + e6_obj.toString_symbolic() + ",1))");
				opp_gt_expr = new Expression(Expression.CONSTRAINT, e5_obj
							.toString()
							+ "<=" + e6_obj.toString(), "geq("
							+ e6_obj.toString_symbolic() + ","
							+ e5_obj.toString_symbolic() + ")");
			}
			gt_expr.addArrayReference(e5_obj.getAllArrayReference());
			gt_expr.addArrayReference(e6_obj.getAllArrayReference());
			gt_expr.setText(e5.getAttribute("plaintext") + " > " + e6.getAttribute("plaintext"));
			opp_gt_expr.addArrayReference(e5_obj.getAllArrayReference());
			opp_gt_expr.addArrayReference(e6_obj.getAllArrayReference());
			opp_gt_expr.setText(e5.getAttribute("plaintext") + " <= " + e6.getAttribute("plaintext"));
			#relationalExpr.setAttribute("expression", gt_expr);
			#relationalExpr.setAttribute("opposite",opp_gt_expr);
		}
        }

        |       #( GTE e7:expr e8:expr) { #relationalExpr.setAttribute("plaintext", e7.getAttribute("plaintext") + " >= " + e8.getAttribute("plaintext")); }
        {
            Expression e7_obj = (Expression)(e7.getAttribute("expression"));
            Expression e8_obj = (Expression)(e8.getAttribute("expression"));

	    /* Vijay - Adding condition variable to block */
	    String var1 = (String)e7.getAttribute("vartext");
	    String var2 = (String)e8.getAttribute("vartext");
	    if(var1 != null) Factory().clauseCondVar(var1);
	    if(var2 != null) Factory().clauseCondVar(var2);

		if (inStatement) {
			Expression gte_expr, opp_gte_expr;
			if(!OPTIONS.CONVERT_STRICT_INEQUALITIES) {
				gte_expr = new Expression(Expression.CONSTRAINT, e7_obj
						     .toString()
						     + ">=" + e8_obj.toString(), "geq("
						     + e7_obj.toString_symbolic() + ","
						     + e8_obj.toString_symbolic() + ")");
				opp_gte_expr = new Expression(Expression.CONSTRAINT, e7_obj
							 .toString()
							 + "<" + e8_obj.toString(), "gt("
							 + e8_obj.toString_symbolic() + ","
							 + e7_obj.toString_symbolic() + ")");
			}
			else {
				gte_expr = new Expression(Expression.CONSTRAINT, e7_obj
						     .toString()
						     + ">=" + e8_obj.toString(), "geq("
						     + e7_obj.toString_symbolic() + ","
						     + e8_obj.toString_symbolic() + ")");
				opp_gte_expr = new Expression(Expression.CONSTRAINT, e7_obj
							 .toString() + "+1"
							 + "<=" + e8_obj.toString(), "geq("
							 + e8_obj.toString_symbolic() + ",plus("
							 + e7_obj.toString_symbolic() + ",1))");
			}
		
			gte_expr.addArrayReference(e7_obj.getAllArrayReference());
			gte_expr.addArrayReference(e8_obj.getAllArrayReference());
			gte_expr.setText(e7.getAttribute("plaintext") + " >= " + e8.getAttribute("plaintext"));
			opp_gte_expr.addArrayReference(e7_obj.getAllArrayReference());
			opp_gte_expr.addArrayReference(e8_obj.getAllArrayReference());
			opp_gte_expr.setText(e7.getAttribute("plaintext") + " < " + e8.getAttribute("plaintext"));
			#relationalExpr.setAttribute("expression", gte_expr);
			#relationalExpr.setAttribute("opposite", opp_gte_expr);
		}
        }
        ;

shiftExpr
{
	parseNode = #shiftExpr;
}
        :       #( LSHIFT e1:expr e2:expr { #shiftExpr.setAttribute("plaintext", e1.getAttribute("plaintext") + " << " + e2.getAttribute("plaintext")); }
		{
			String v1_s = (String) e1.getAttribute("vartext");
			String v2_s = (String) e2.getAttribute("vartext");

			if(v1_s != null && !Character.isDigit(v1_s.charAt(0))) {
				if(!inLHSOfAssign && v1_s.compareTo(assignLHSVar) == 0)
					v1_s = Factory().getSymbolicPrevVarName(v1_s);
				else
					v1_s = Factory().getSymbolicCurrVarName(v1_s);
			}

			if(v2_s != null && !Character.isDigit(v2_s.charAt(0))) {
				if(!inLHSOfAssign && v2_s.compareTo(assignLHSVar) == 0)
					v2_s = Factory().getSymbolicPrevVarName(v2_s);
				else
					v2_s = Factory().getSymbolicCurrVarName(v2_s);
			}

			// by Vijay - why do we need to store vartext?! just store the expression
			//if(v1_s == null)
				v1_s = ((Expression)e1.getAttribute("expression")).toString_symbolic();
			//if(v2_s == null)
				v2_s = ((Expression)e2.getAttribute("expression")).toString_symbolic();

			String ex = "_";
			String ex_s = "unk(4," + v1_s + "," + v2_s + ")";

			Expression e = new Expression(ex, ex_s);
			#shiftExpr.setAttribute("unkexpression", true);
			#shiftExpr.setAttribute("expression", e);
		}
		)
                | #( RSHIFT e3:expr e4:expr { #shiftExpr.setAttribute("plaintext", e3.getAttribute("plaintext") + " >> " + e4.getAttribute("plaintext")); }
		{
			String v1_s = (String) e3.getAttribute("vartext");
			String v2_s = (String) e4.getAttribute("vartext");

			if(v1_s != null && !Character.isDigit(v1_s.charAt(0))) {
				if(!inLHSOfAssign && v1_s.compareTo(assignLHSVar) == 0)
					v1_s = Factory().getSymbolicPrevVarName(v1_s);
				else
					v1_s = Factory().getSymbolicCurrVarName(v1_s);
			}

			if(v2_s != null && !Character.isDigit(v2_s.charAt(0))) {
				if(!inLHSOfAssign && v2_s.compareTo(assignLHSVar) == 0)
					v2_s = Factory().getSymbolicPrevVarName(v2_s);
				else
					v2_s = Factory().getSymbolicCurrVarName(v2_s);
			}

			// by Vijay - why do we need to store vartext?! just store the expression
			//if(v1_s == null)
				v1_s = ((Expression)e3.getAttribute("expression")).toString_symbolic();
			//if(v2_s == null)
				v2_s = ((Expression)e4.getAttribute("expression")).toString_symbolic();

			String ex = "_";
			String ex_s = "unk(5," + v1_s + "," + v2_s + ")";

			Expression e = new Expression(ex, ex_s);
			#shiftExpr.setAttribute("unkexpression", true);
			#shiftExpr.setAttribute("expression", e);
		}
		)
        ;

additiveExpr
{
	parseNode = #additiveExpr;
}
        :       #( PLUS e1:expr e2:expr) { #additiveExpr.setAttribute("plaintext", e1.getAttribute("plaintext") + " + " + e2.getAttribute("plaintext")); } 
        { 
            Expression e1_obj = (Expression)(e1.getAttribute("expression"));
            Expression e2_obj = (Expression)(e2.getAttribute("expression"));

			/* Vijay - Adding condition variable to block */
            String var1 = (String)e1.getAttribute("vartext");
            String var2 = (String)e2.getAttribute("vartext");
            if(var1 != null) Factory().clauseCondVar(var1);
            if(var2 != null) Factory().clauseCondVar(var2);
			Boolean e1hasvar = (Boolean) e1.getAttribute("hasvar");
			Boolean e2hasvar = (Boolean) e2.getAttribute("hasvar");
			Boolean thishasvar = true;
			if(e1hasvar != null && e2hasvar != null)
				thishasvar = e1hasvar | e2hasvar;
			else if(e1hasvar != null && var2 != null)
				thishasvar = e1hasvar | !Character.isDigit(var2.charAt(0));
			else if(var1 != null && var2 != null)
				thishasvar = !Character.isDigit(var1.charAt(0)) || !Character.isDigit(var2.charAt(0));

            //if (inStatement) {
			Expression add_expr = new Expression(e1_obj.toString() + "+"
								 + e2_obj.toString(), "plus("
								 + e1_obj.toString_symbolic() + ","
								 + e2_obj.toString_symbolic() + ")");
			add_expr.addArrayReference(e1_obj.getAllArrayReference());
			add_expr.addArrayReference(e2_obj.getAllArrayReference());
			#additiveExpr.setAttribute("expression", add_expr);
			#additiveExpr.setAttribute("hasvar", thishasvar);
			if(var1 != null) {
				#additiveExpr.setAttribute("vartext", var1); // temp, for -> sake
				#additiveExpr.setAttribute("currvar", e1_obj); // temp, for -> sake
			}
        }
        |       #( MINUS e3:expr e4:expr) { #additiveExpr.setAttribute("plaintext", e3.getAttribute("plaintext") + " - " + e4.getAttribute("plaintext")); }
        { 
            Expression e3_obj = (Expression)(e3.getAttribute("expression"));
            Expression e4_obj = (Expression)(e4.getAttribute("expression"));

	    /* Vijay - Adding condition variable to block */
            String var1 = (String)e3.getAttribute("vartext");
            String var2 = (String)e4.getAttribute("vartext");
            if(var1 != null) Factory().clauseCondVar(var1);
            if(var2 != null) Factory().clauseCondVar(var2);
			Boolean e1hasvar = (Boolean) e3.getAttribute("hasvar");
			Boolean e2hasvar = (Boolean) e4.getAttribute("hasvar");
			Boolean thishasvar = true;
			if(e1hasvar != null && e2hasvar != null)
				thishasvar = e1hasvar | e2hasvar;
			else if(e1hasvar != null && var2 != null)
				thishasvar = e1hasvar | !Character.isDigit(var2.charAt(0));
			else if(var1 != null && var2 != null)
				thishasvar = !Character.isDigit(var1.charAt(0)) | !Character.isDigit(var2.charAt(0));

            //if (inStatement) {
		Expression minus_expr = new Expression(e3_obj.toString() + "-"
						       + e4_obj.toString(), "minus("
						       + e3_obj.toString_symbolic() + ","
						       + e4_obj.toString_symbolic() + ")");
		minus_expr.addArrayReference(e3_obj.getAllArrayReference());
		minus_expr.addArrayReference(e4_obj.getAllArrayReference());
		#additiveExpr.setAttribute("expression", minus_expr);
		#additiveExpr.setAttribute("hasvar", thishasvar);
		if(var1 != null) {
			#additiveExpr.setAttribute("vartext", var1); // temp, for -> sake
			#additiveExpr.setAttribute("currvar", e3_obj); // temp, for -> sake
        }
        }
       ;

multExpr
{
	parseNode = #multExpr;
}
        :       #( STAR e1:expr e2:expr) { #multExpr.setAttribute("plaintext", e1.getAttribute("plaintext") + " * " + e2.getAttribute("plaintext")); }
        { 
            Expression e1_obj = (Expression)(e1.getAttribute("expression"));
            Expression e2_obj = (Expression)(e2.getAttribute("expression"));

	    /* Vijay - Adding condition variable to block */
            String var1 = (String)e1.getAttribute("vartext");
            String var2 = (String)e2.getAttribute("vartext");
            if(var1 != null) Factory().clauseCondVar(var1);
            if(var2 != null) Factory().clauseCondVar(var2);

			String operator = "", operator_s = "";
			Boolean e1hasvar = (Boolean) e1.getAttribute("hasvar");
			Boolean e2hasvar = (Boolean) e2.getAttribute("hasvar");
			Boolean thishasvar = true, multOperator = false; 
			if(e1hasvar != null && e2hasvar != null) {
				thishasvar = e1hasvar | e2hasvar;
				multOperator = !e1hasvar | !e2hasvar;
			}
			else if(e1hasvar != null && var2 != null) {
				thishasvar = e1hasvar | !Character.isDigit(var2.charAt(0));
				multOperator = !e1hasvar | Character.isDigit(var2.charAt(0));
			}
			else if(var1 != null && var2 != null) {
				thishasvar = !Character.isDigit(var1.charAt(0)) | !Character.isDigit(var2.charAt(0));
				multOperator = Character.isDigit(var1.charAt(0)) | Character.isDigit(var2.charAt(0));
			}

			if(OPTIONS.ALLOW_NONLINEAR || multOperator) {
				operator = "*";
				operator_s = "mult";
			}
			else {
				operator = "+";
				operator_s = "plus";
			}

//            if (e1_obj == null) { DEBUG.println("e1 NULL"); }
//            else { DEBUG.println("e1 = " + e1_obj.toString()); }
//            if (e2_obj == null) { DEBUG.println("e2 NULL"); }
//            else { DEBUG.println("e2 = " + e2_obj.toString()); }

            // if (inStatement || (inFunction && inDeclaration)) {
		Expression mult_expr =  new Expression(e1_obj.toString() + operator
						       + e2_obj.toString(), operator_s + "("
						       + e1_obj.toString_symbolic() + ","
						       + e2_obj.toString_symbolic() + ")");
		mult_expr.addArrayReference(e1_obj.getAllArrayReference());
		mult_expr.addArrayReference(e2_obj.getAllArrayReference());
		#multExpr.setAttribute("expression", mult_expr);
		#multExpr.setAttribute("hasvar", thishasvar);
		if(var1 != null) {
			#multExpr.setAttribute("vartext", var1); // temp, for -> sake
			#multExpr.setAttribute("currvar", e1_obj); // temp, for -> sake
			}
        }

        |       #( DIV e3:expr e4:expr) { #multExpr.setAttribute("plaintext", e3.getAttribute("plaintext") + " / " + e4.getAttribute("plaintext")); }
        { 
            Expression e3_obj = (Expression)(e3.getAttribute("expression"));
            Expression e4_obj = (Expression)(e4.getAttribute("expression"));

	    /* Vijay - Adding condition variable to block */
            String var1 = (String)e3.getAttribute("vartext");
            String var2 = (String)e4.getAttribute("vartext");
            if(var1 != null) Factory().clauseCondVar(var1);
            if(var2 != null) Factory().clauseCondVar(var2);

			String operator = "", operator_s = "";
			Boolean e1hasvar = (Boolean) e3.getAttribute("hasvar");
			Boolean e2hasvar = (Boolean) e4.getAttribute("hasvar");
			Boolean thishasvar = true, divOperator = false; 
			if(e1hasvar != null && e2hasvar != null) {
				thishasvar = e1hasvar | e2hasvar;
				divOperator = !e1hasvar | !e2hasvar;
			}
			else if(e1hasvar != null && var2 != null) {
				thishasvar = e1hasvar | !Character.isDigit(var2.charAt(0));
				divOperator = !e1hasvar | Character.isDigit(var2.charAt(0));
			}
			else if(var1 != null && var2 != null) {
				thishasvar = !Character.isDigit(var1.charAt(0)) | !Character.isDigit(var2.charAt(0));
				divOperator = Character.isDigit(var1.charAt(0)) | Character.isDigit(var2.charAt(0));
			}

			if(OPTIONS.ALLOW_NONLINEAR || divOperator) {
				operator = "/";
				operator_s = "div";
			}
			else {
				operator = "-";
				operator_s = "minus";
			}

//            if (e3_obj == null) { DEBUG.println("e3 NULL"); }
//            else { DEBUG.println("e3 = " + e3_obj.toString()); }
//            if (e4_obj == null) { DEBUG.println("e4 NULL"); }
//            else { DEBUG.println("e4 = " + e4_obj.toString()); }

           // if (inStatement) {
		Expression div_expr = new Expression(e3_obj.toString() + operator 
						     + e4_obj.toString(), operator_s + "("
						     + e3_obj.toString_symbolic() + ","
						     + e4_obj.toString_symbolic() + ")");
		div_expr.addArrayReference(e3_obj.getAllArrayReference());
		div_expr.addArrayReference(e4_obj.getAllArrayReference());
		#multExpr.setAttribute("expression", div_expr);
		#multExpr.setAttribute("hasvar", thishasvar);
		if(var1 != null) {
			#multExpr.setAttribute("vartext", var1); // temp, for -> sake
			#multExpr.setAttribute("currvar", e3_obj); // temp, for -> sake
        }
        }
        |       #( MOD e5:expr e6:expr) { #multExpr.setAttribute("plaintext", e5.getAttribute("plaintext") + " % " + e6.getAttribute("plaintext")); }
	{
            Expression e1_obj = (Expression)(e5.getAttribute("expression"));
            Expression e2_obj = (Expression)(e6.getAttribute("expression"));

	    /* Vijay - Adding condition variable to block */
            String var1 = (String)e5.getAttribute("vartext");
            String var2 = (String)e6.getAttribute("vartext");
            if(var1 != null) Factory().clauseCondVar(var1);
            if(var2 != null) Factory().clauseCondVar(var2);

			String operator = "", operator_s = "";
			Boolean e1hasvar = (Boolean) e5.getAttribute("hasvar");
			Boolean e2hasvar = (Boolean) e6.getAttribute("hasvar");
			Boolean thishasvar = true, multOperator = false; 
			if(e1hasvar != null && e2hasvar != null) {
				thishasvar = e1hasvar | e2hasvar;
				multOperator = !e1hasvar | !e2hasvar;
			}
			else if(e1hasvar != null && var2 != null) {
				thishasvar = e1hasvar | !Character.isDigit(var2.charAt(0));
				multOperator = !e1hasvar | Character.isDigit(var2.charAt(0));
			}
			else if(var1 != null && var2 != null) {
				thishasvar = !Character.isDigit(var1.charAt(0)) | !Character.isDigit(var2.charAt(0));
				multOperator = Character.isDigit(var1.charAt(0)) | Character.isDigit(var2.charAt(0));
			}

			operator = "_";
			operator_s = "unk";

		Expression mult_expr =  new Expression("_",
							   operator_s + "(6,"
						       + e1_obj.toString_symbolic() + ","
						       + e2_obj.toString_symbolic() + ")");
		mult_expr.addArrayReference(e1_obj.getAllArrayReference());
		mult_expr.addArrayReference(e2_obj.getAllArrayReference());
		#multExpr.setAttribute("expression", mult_expr);
		#multExpr.setAttribute("hasvar", thishasvar);
		if(var1 != null) {
			#multExpr.setAttribute("vartext", var1); // temp, for -> sake
			#multExpr.setAttribute("currvar", e1_obj); // temp, for -> sake
			}
	}
        ;

castExpr
{
	parseNode = #castExpr;
}
        :       #( NCast typeName RPAREN e:expr 
		{ if(e.getAttribute("plaintext") != null) #castExpr.setAttribute("plaintext", e.getAttribute("plaintext")); }
            {
		    /* Vijay - Adding condition variable to block */
                    String var = (String)e.getAttribute("vartext");
                    if(var != null) Factory().clauseCondVar(var);
                    #castExpr.setAttribute("expression",
                    	e.getAttribute("expression"));
                    #castExpr.setAttribute("currvar",
                    	e.getAttribute("expression"));
                    if(var != null)
                    #castExpr.setAttribute("vartext", var);
					if(e.getAttribute("actualvar") != null)
						#castExpr.setAttribute("actualvar", e.getAttribute("actualvar"));
					if(e.getAttribute("aliasexpr") != null)
						#castExpr.setAttribute("aliasexpr", e.getAttribute("aliasexpr"));
            } )
        ;

typeName
{
	parseNode = #typeName;
}
        :       specifierQualifierList (nonemptyAbstractDeclarator)?
        ;

nonemptyAbstractDeclarator
{
	parseNode = #nonemptyAbstractDeclarator;
}
        :   #( NNonemptyAbstractDeclarator
            (   pointerGroup
                (   (LPAREN  
                    (   nonemptyAbstractDeclarator
                        | parameterTypeList
                    )?
                    RPAREN)
                | (LBRACKET (expr)? RBRACKET)
                )*

            |  (   (LPAREN  
                    (   nonemptyAbstractDeclarator
                        | parameterTypeList
                    )?
                    RPAREN)
                | (LBRACKET (expr)? RBRACKET)
                )+
            )
            )
        ;

unaryExpr 
{
	parseNode = #unaryExpr ;
	updatingArray = false; 
}
        :       #( 
		INC { possibleINC = true; } einc:expr )
        {
		// closing rituals for previous assignment group, if any (and creation of new clause)
		if(Factory().inCondition)
			FATAL.error("incrementation within block condition! in " + Factory().getFuncName());

		ClauseFactory factory = Factory();
	    Expression ex = (Expression) (einc
					  .getAttribute("expression"));

	    /* Vijay - Adding condition variable to block */
		String var = (String)einc.getAttribute("vartext");
		String exstr, symbstr;
		if(var != null) {
			Factory().clauseRefVar(currClause, var);
			Factory().clauseCondVar(var);
		}

	    // debugging Jorge
	    DEBUG.println("Unary Expression (check update array!)" + updatingArray);
	    if (updatingArray)
	    {
			String index = (arrowIndexForINC == null)? arrIndex:arrowIndexForINC;
			String Sindex = (SarrowIndexForINC == null)? arrSymbolic:SarrowIndexForINC;
		    String v = factory.getCurrVarName(var);
		    String symbv = factory.getSymbolicCurrVarName(var);
		    String nv = factory.getNextVarName(var);
		    String symbnv = factory.getSymbolicNextVarName(var);
					
			String idx_var = insert_intermediate_index_var(index, Sindex);
			String idx_nv = !OPTIONS.COMPILE_IDX_VARS? index : (idx_var_nextNameNeeded()? Factory().getNextVarName(idx_var) : Factory().getCurrVarName(idx_var));
			String idx_symbnv = !OPTIONS.COMPILE_IDX_VARS? Sindex : 
								(idx_var_nextNameNeeded()? Factory().getSymbolicNextVarName(idx_var) : Factory().getSymbolicCurrVarName(idx_var));

		    exstr = nv + "=" + "upd("
						+ v + ","
						+ /*index*/ idx_nv + "," + ex.toString() + "+1"
						+ ")";			    
		    symbstr = "arrassign(" + symbnv + ","
						+ "upd(" + symbv
						+ "," + /*Sindex*/ idx_symbnv + ",plus("
						+ ex.toString_symbolic() + ",1)))";

			if(factory.inAssignGroup)
				assignGroupVars.add(var);

			String arrName = nv, arrIndex = globalArrIndex, arrSymbolic = globalArrSymbolic;
			String artificialVar;
			Integer count = ArrToCount.get(arrName);
			if(count == null)
			{
				count = new Integer(0);
			}
			artificialVar = ArrRefToString(arrName, count);
			count = new Integer(count.intValue() + 1);
			ArrToCount.put(arrName, count);
			
			idx_var = insert_intermediate_index_var(index, Sindex);
			idx_nv = !OPTIONS.COMPILE_IDX_VARS? index : (idx_var_nextNameNeeded()? Factory().getNextVarName(idx_var) : Factory().getCurrVarName(idx_var));
			idx_symbnv = !OPTIONS.COMPILE_IDX_VARS? Sindex : 
								(idx_var_nextNameNeeded()? Factory().getSymbolicNextVarName(idx_var) : Factory().getSymbolicCurrVarName(idx_var));

			String arrayRef = "", symbStr = "";
			arrayRef = "ref(" + nv + "," + /*index*/ idx_nv + "," + artificialVar + ")";
			symbStr = "ref(" + symbnv + "," + /*Sindex*/ idx_symbnv + ")";

			Expression arrExpr = new Expression(artificialVar, symbStr);

			// new, passing array reference up
			arrExpr.addArrayReference(ex.getAllArrayReference());
			arrExpr.addArrayReference(arrayRef);

			#unaryExpr.setAttribute("expression", arrExpr);
			if(var != null) #unaryExpr.setAttribute("vartext", var);
	    }		    		    
		else
		{
			// Vijay - add incrementation constraint to current clause
			String v = factory.getCurrVarName(var);
			String symbv = factory.getSymbolicCurrVarName(var);
			String nv = factory.getNextVarName(var);
			String symbnv = factory.getSymbolicNextVarName(var);

			exstr = nv + "=" + v + "+1";
			symbstr = "assign(" + symbnv + ",plus(" + symbv + ",1))";
			
			if(factory.inAssignGroup)
				assignGroupVars.add(var);

			Expression unary_expr = null;
			// if in condition of block or there's call in this PP, expression should be variable itself, not var$Next$
			if(factory.inCondition || (!PREPROCESS && PreprocessInfo.isCallPP(factory.getFuncName(), currPP) && nestedCallExprs.empty()))
				unary_expr = new Expression(v, symbv);
			else // otherwise proceed normally
				unary_expr = new Expression(nv, symbnv);
			unary_expr.addArrayReference(ex.getAllArrayReference());
			#unaryExpr.setAttribute("expression", unary_expr);
			if(var != null) #unaryExpr.setAttribute("vartext", var);
		}

		// dealing with for loops
		if (isDelayed)
		{
			Factory().delayedClauseRefVar(var);
				if(Factory().inAssignGroup)
					assignGroupVars.add(var);
			
				Factory().addDelayedConstraint(exstr);					
				Factory().addDelayedSymbolicConstraint(symbstr);
				// array reference is passed up
				Factory().addDelayedArrayReference(ex.getAllArrayReference());
		}
		else
		{
			Factory().clauseRefVar(currClause, var);
			if(Factory().inAssignGroup)
				assignGroupVars.add(var);

			Factory().clauseCondVar(var);
			Factory().addConstraint(currClause, exstr);
			Factory().addSymbolicConstraint(currClause, symbstr);
			Factory().addArrayReference(currClause, ex.getAllArrayReference());
		}
        }
        |       #( DEC { possibleINC = true; } edec:expr )
        {
		// closing rituals for previous assignment group, if any (and creation of new clause)
		if(Factory().inCondition)
			FATAL.error("decrementation within block condition! in " + Factory().getFuncName());

		ClauseFactory factory = Factory();
	    Expression ex = (Expression) (edec
					  .getAttribute("expression"));

	    /* Vijay - Adding condition variable to block */
		String var = (String)edec.getAttribute("vartext");
		String exstr, symbstr;
		if(var != null) {
			Factory().clauseRefVar(currClause, var);
			Factory().clauseCondVar(var);
		}

	    // debugging Jorge
	    DEBUG.println("Unary Expression (check update array!)" + updatingArray);
	    if (updatingArray)
	    {
			String index = (arrowIndexForINC == null)? arrIndex:arrowIndexForINC;
			String Sindex = (SarrowIndexForINC == null)? arrSymbolic:SarrowIndexForINC;
		    String v = factory.getCurrVarName(var);
		    String symbv = factory.getSymbolicCurrVarName(var);
		    String nv = factory.getNextVarName(var);
		    String symbnv = factory.getSymbolicNextVarName(var);
					
			String idx_var = insert_intermediate_index_var(index, Sindex);
			String idx_nv = !OPTIONS.COMPILE_IDX_VARS? index : (idx_var_nextNameNeeded()? Factory().getNextVarName(idx_var) : Factory().getCurrVarName(idx_var));
			String idx_symbnv = !OPTIONS.COMPILE_IDX_VARS? Sindex : 
								(idx_var_nextNameNeeded()? Factory().getSymbolicNextVarName(idx_var) : Factory().getSymbolicCurrVarName(idx_var));

		    exstr = nv + "=" + "upd("
						+ v + ","
						+ /*index*/ idx_nv + "," + ex.toString() + "-1"
						+ ")";			    
		    symbstr = "arrassign(" + symbnv + ","
						+ "upd(" + symbv
						+ "," + /*Sindex*/ idx_symbnv + ",minus("
						+ ex.toString_symbolic() + ",1)))";

			if(factory.inAssignGroup)
				assignGroupVars.add(var);

			String arrName = nv, arrIndex = globalArrIndex, arrSymbolic = globalArrSymbolic;
			String artificialVar;
			Integer count = ArrToCount.get(arrName);
			if(count == null)
			{
				count = new Integer(0);
			}
			artificialVar = ArrRefToString(arrName, count);
			count = new Integer(count.intValue() + 1);
			ArrToCount.put(arrName, count);
			
			idx_var = insert_intermediate_index_var(index, Sindex);
			idx_nv = !OPTIONS.COMPILE_IDX_VARS? index : (idx_var_nextNameNeeded()? Factory().getNextVarName(idx_var) : Factory().getCurrVarName(idx_var));
			idx_symbnv = !OPTIONS.COMPILE_IDX_VARS? Sindex : 
								(idx_var_nextNameNeeded()? Factory().getSymbolicNextVarName(idx_var) : Factory().getSymbolicCurrVarName(idx_var));

			String arrayRef = "", symbStr = "";
			arrayRef = "ref(" + nv + "," + /*index*/ idx_nv + "," + artificialVar + ")";
			symbStr = "ref(" + symbnv + "," + /*Sindex*/ idx_symbnv + ")";

			Expression arrExpr = new Expression(artificialVar, symbStr);

			// new, passing array reference up
			arrExpr.addArrayReference(ex.getAllArrayReference());
			arrExpr.addArrayReference(arrayRef);

			#unaryExpr.setAttribute("expression", arrExpr);
			if(var != null) #unaryExpr.setAttribute("vartext", var);
	    }		    		    
		else
		{
			// Vijay - add incrementation constraint to current clause
			String v = factory.getCurrVarName(var);
			String symbv = factory.getSymbolicCurrVarName(var);
			String nv = factory.getNextVarName(var);
			String symbnv = factory.getSymbolicNextVarName(var);

			exstr = nv + "=" + v + "-1";
			symbstr = "assign(" + symbnv + ",minus(" + symbv + ",1))";
			
			if(factory.inAssignGroup)
				assignGroupVars.add(var);

			Expression unary_expr = null;
			// if in condition of block or there's call in this PP, expression should be variable itself, not var$Next$
			if(factory.inCondition || (!PREPROCESS && PreprocessInfo.isCallPP(factory.getFuncName(), currPP)) && nestedCallExprs.empty())
				unary_expr = new Expression(v, symbv);
			else // otherwise proceed normally
				unary_expr = new Expression(nv, symbnv);
			unary_expr.addArrayReference(ex.getAllArrayReference());
			#unaryExpr.setAttribute("expression", unary_expr);
			if(var != null) #unaryExpr.setAttribute("vartext", var);
		}

		// dealing with for loops
		if (isDelayed)
		{
			Factory().delayedClauseRefVar(var);
				if(Factory().inAssignGroup)
					assignGroupVars.add(var);
			
				Factory().addDelayedConstraint(exstr);					
				Factory().addDelayedSymbolicConstraint(symbstr);
				// array reference is passed up
				Factory().addDelayedArrayReference(ex.getAllArrayReference());
		}
		else
		{
			Factory().clauseRefVar(currClause, var);
			if(Factory().inAssignGroup)
				assignGroupVars.add(var);

			Factory().clauseCondVar(var);
			Factory().addConstraint(currClause, exstr);
			Factory().addSymbolicConstraint(currClause, symbstr);
			Factory().addArrayReference(currClause, ex.getAllArrayReference());
		}
        }
        |       #( NUnaryExpr op:unaryOperator 
                // bug found - Vijay
                { 
                    if(op.getType() == STAR)
                    {
                        // going inside pointer -> set this variable back to false
                        nextVarsNeeded = false;

                        // if we are on LHS of assign, set flag
                        if(inLHSOfAssign && !arrOnLHS)
                            ptrOnLHS = true;
						starDepth++;
                    }
                } 
                eun:expr) 
		{
			String opText = "";
			switch(op.getType()) {
				case STAR: opText = "*"; break;
				case BAND: opText = "&"; break;
				case PLUS: break;
				case MINUS: opText = "-"; break;
				case BNOT: opText = "~"; break;
				case LNOT: opText = "!"; break;
				default: FATAL.error("unrecognized unary operator " + op.getText());
			}
			#unaryExpr.setAttribute("plaintext", opText + eun.getAttribute("plaintext"));
		}
        {
            int op_type = op.getType();

	    /* Vijay - Adding condition variable to block */
            String var = (String)eun.getAttribute("vartext");
			if(eun.getAttribute("actualvar") != null)
				var = (String) eun.getAttribute("actualvar");
            if(var != null) Factory().clauseCondVar(var);

			if(op_type == BAND) {
				// ----------------------------------------------
				// --- if in preprocess mode, store the &-var ---
				// --- and compile like you normally would    ---
				// ----------------------------------------------

				ClauseFactory factory = Factory();
				if(PREPROCESS) {
					Variable v = new Variable(var);
					String func = null;
					if(factory.getVariables().contains(v) || factory.getArrayVariables().contains(v))
						func = factory.getFuncName();
					else if(ClauseFactory.getGlobalVariables().contains(v) || ClauseFactory.getGlobalArrayVariables().contains(v))
						func = "GLOBAL";
					else if(var.compareTo("0") != 0)
						PreprocessInfo.addFuncPtr(var); // add to function pointers list (supposedly). in the end, sanity check will verify if it's indeed a func ptr

					// func ptrs won't be added to &-vars because it causes complications when the func is called and primaryEx treats the func name as aliasVar 
					// instead, they will be dealt with in & Expr itself (during 2nd pass when PREPROCESS is false)
					if(func != null) {
						PreprocessInfo.addAddrVar(func, var);
					}

					// ----------------------------------------------
					// compile as usual, because the preprocessor
					// needs to continue parsing
					// ----------------------------------------------

					updatingArray = true; // treating addresses as items on the array H
					Expression ex = (Expression)(eun.getAttribute("expression"));
					
					// in case of reference, just remove the ( ) and ,
					String exstr = "Addref$" + addrefCount + "$";
					String symbstr = "S" + exstr;
					addrefCount++;

					Expression andEx = new Expression(Expression.CONSTRAINT, exstr, symbstr);

					String currHeap, currHeap_s;
					String fun = Factory().getFuncName();
					String heapVar = "";

					if(Factory().getVariables().contains(v) || Factory().getArrayVariables().contains(v))
						heapVar = PAHelper.getHeap2(fun, var);
					else if(ClauseFactory.getGlobalVariables().contains(v) || ClauseFactory.getGlobalArrayVariables().contains(v))
						heapVar = PAHelper.getHeap2("GLOBAL", var);
					else // trying to get address of function pointer
						heapVar = PAHelper.getHeap3(var);

					if(ptrOnLHS && !inDeclaration) // TODO: check if this condition is correct
					{
						currHeap = Factory().getPrevVarName(heapVar);
						currHeap_s = Factory().getSymbolicPrevVarName(heapVar);
					}
					else
					{
						currHeap = Factory().getCurrVarName(heapVar);
						currHeap_s = Factory().getSymbolicCurrVarName(heapVar);
					}

					andEx.addArrayReference(ex.getAllArrayReference());
					andEx.addArrayReference("ref(" + currHeap + "," + andEx.toString() + "," + ex.toString() + ")");
					
					// if this is an assignment group, add symbolic constraint to this clause...
					if(Factory().inAssignGroup || inForInitialization) {
						Factory().addSymbolicConstraint(currClause,
									"addref(" + ex.toString_symbolic() + ",ref(" + currHeap_s + "," + andEx.toString_symbolic() + "))");
					}
					else {
						// ... else notify that a reference has to be added to symbolic constraints in the next clause that is created
						addSymbolicReference = true;
						symbolicReference = "addref(" + ex.toString_symbolic() + ",ref(" + currHeap_s + "," + andEx.toString_symbolic() + "))";
					}

					Factory().addrefs.put(andEx.toString_symbolic(),ex.toString_symbolic());

					#unaryExpr.setAttribute("expression", andEx);
					DEBUG.println("setting vartext in BAND to " + var);
					if(var != null) #unaryExpr.setAttribute("vartext", var);
				}

				// -------------------------------------------------------
				// if not in pre-process mode (i.e, in compilation mode)
				// then use the preprocessor's information on &-vars
				// -------------------------------------------------------
				else {
					if(!OPTIONS.INCLUDE_ARRAY_CONSTRAINTS)
						#unaryExpr.setAttribute("expression", new Expression("_", "_"));
					else if(var.compareTo("0") != 0) {
						Expression aliasExpr = (Expression)eun.getAttribute("aliasexpr");
						if(aliasExpr == null) {
							if(!PreprocessInfo.getFuncPtrs().contains(var)) // if not a function pointer, panic
								FATAL.error("aliasexpr is null for " + eun.getAttribute("vartext") + ",actual var: " + var + " in function: " + factory.getFuncName());

							// otherwise, compile function pointer into its addrVar (and add to global var list if not already done)
							String funcPtr = getAddrVar("GLOBAL", var);
							if(!ClauseFactory.getGlobalVariables().contains(funcPtr))
								ClauseFactory.addGlobalVariable(funcPtr, 0);
							aliasExpr = new Expression(funcPtr, "S" + funcPtr);
							String currFunc = Factory().getFuncName();
							if(callMap.get(currFunc) == null)
								callMap.put(currFunc, new TreeSet<String>());
							callMap.get(currFunc).add("func_" + eun.getAttribute("plaintext"));

						}
						aliasExpr.addArrayReference(((Expression)eun.getAttribute("expression")).getAllArrayReference());

						#unaryExpr.setAttribute("expression", aliasExpr);
					}
					else
						#unaryExpr.setAttribute("expression", new Expression("0", "0"));

					#unaryExpr.setAttribute("vartext", var);
				}
			}

            if (op_type == LNOT) {
                Expression ex = (Expression)(eun.getAttribute("expression"));
				ex.setText((String) eun.getAttribute("plaintext"));
                if (ex.isLogical()) {
                    Expression ex_opp = (Expression)(eun.getAttribute("opposite"));
                    #unaryExpr.setAttribute("expression", ex_opp);
                    #unaryExpr.setAttribute("opposite", ex);
                    if(var != null) #unaryExpr.setAttribute("vartext", var);
                } else {
                    #unaryExpr.setAttribute("expression", ex.makeLogicalOpposite());
                    #unaryExpr.setAttribute("opposite", ex.makeLogical());
                    if(var != null) #unaryExpr.setAttribute("vartext", var);
                }
            }


            else if (op_type == MINUS) {
                Expression ex = (Expression)(eun.getAttribute("expression"));
    		    // Duc Hiep
    	    	Expression unary_expr = new Expression("0-(" + ex.toString() + ")",
						       "minus(0," + ex.toString_symbolic() + ")");
	        	unary_expr.addArrayReference(ex.getAllArrayReference());
		        #unaryExpr.setAttribute("expression", unary_expr);
                if(var != null) #unaryExpr.setAttribute("vartext", var);
            }
            
            
            else if (op_type == PLUS) {
                #unaryExpr.setAttribute("expression",
                    eun.getAttribute("expression"));
                if(var != null) #unaryExpr.setAttribute("vartext", var);
            }

            else if (op_type == BNOT) {
				String ex = "_";
				String ex_s = "unk(8," + ((Expression) eun.getAttribute("expression")).toString_symbolic() + ")";
                #unaryExpr.setAttribute("expression", new Expression(ex, ex_s));
                if(var != null) #unaryExpr.setAttribute("vartext", var);
            }



            /* ----------------------------------
               Vijay - adding support for pointers 
               -----------------------------------
            */
        else if(op_type == STAR) {
			updatingArray = true; // pointers treated as references on the array H
			String v = (eun.getAttribute("actualvar") != null)? (String) eun.getAttribute("actualvar"): (String) eun.getAttribute("vartext");
			Expression eun_expr = (Expression) eun.getAttribute("expression");

	    	String currHeap, currHeap_s;
			String heapVar = "";
			String fun = Factory().getFuncName();

			if(eun.getAttribute("heap") != null) {
				heapVar = (String)eun.getAttribute("heap");
			}
			else {
				if(Factory().getVariables().contains(new Variable(v))
							|| Factory().getArrayVariables().contains(new Variable(v)))
				{
					heapVar = PAHelper.getHeap(fun, v);
					DEBUG.println("heap of " + fun + "." + v + " is " + heapVar);
				}
				else {
					heapVar = PAHelper.getHeap("GLOBAL", v);
					DEBUG.println("heap of GLOBAL." + v + " is " + heapVar);
				}
			}

			currHeap = Factory().getCurrVarName(heapVar);
			currHeap_s = Factory().getSymbolicCurrVarName(heapVar);

            String arrName = currHeap;

			arrIndex = eun_expr.toString();
			arrSymbolic = eun_expr.toString_symbolic();
			String artificialVar;
			    
			Integer count = ArrToCount.get(arrName);
			if(count == null){
				count = new Integer(0);
			}
			artificialVar = ArrRefToString(arrName, count);
			count = new Integer(count.intValue() + 1);
			ArrToCount.put(arrName, count);

			String idx_var = insert_intermediate_index_var(arrIndex, arrSymbolic);
			String idx_nv = !OPTIONS.COMPILE_IDX_VARS? arrIndex : (idx_var_nextNameNeeded()? Factory().getNextVarName(idx_var) : Factory().getCurrVarName(idx_var));
			String idx_symbnv = !OPTIONS.COMPILE_IDX_VARS? arrSymbolic : 
								(idx_var_nextNameNeeded()? Factory().getSymbolicNextVarName(idx_var) : Factory().getSymbolicCurrVarName(idx_var));

			String arrayRef = "ref(" + currHeap + "," + /*arrIndex*/ idx_nv + "," + artificialVar + ")";
			String symbStr = "ref(" + currHeap_s + "," + /*arrSymbolic*/ idx_symbnv + ")";
			globalArrIndex = arrIndex;
			globalArrSymbolic = arrSymbolic;

			// for assignExpr
			if(inLHSOfAssign) {
				assignArrInd = arrIndex;
				assignArrIndSymbolic = arrSymbolic;
				Variable t_var = new Variable(v);
				assignArrInd_replace = t_var + "+" + arrIndex;
				assignArrIndSymbolic_replace = "plus(" + t_var.getSymbolicCurrentName() + "," + arrIndex + ")";
			}

			if(inLHSOfShorthandAssign) {
				shorthandRef = artificialVar;
				shorthandRef_s = symbStr;
			}

			Expression arrExpr = new Expression(artificialVar, symbStr);
			// new, passing array reference up
			arrExpr.addArrayReference(eun_expr.getAllArrayReference());
			arrExpr.addArrayReference(arrayRef);
			
			// need to save the information
			#unaryExpr.setAttribute("vartext", heapVar);
			#unaryExpr.setAttribute("currvar", new Expression(currHeap, currHeap_s));
			#unaryExpr.setAttribute("arrvar", "S" + heapVar);
			#unaryExpr.setAttribute("heap", heapVar);
			#unaryExpr.setAttribute("assignarr", heapVar);

			// for expression, check slicing. if yes, set heapVar as expression because slicing is to be 
			// done on the variable's heap. not the variable itself.
			if(slicing)
				#unaryExpr.setAttribute("expression", new Expression(heapVar, "S" + heapVar));
			else
				#unaryExpr.setAttribute("expression", arrExpr);

			// do the same for pe
			eun.setAttribute("vartext", heapVar);
			eun.setAttribute("currvar", new Expression(currHeap, currHeap_s));
			eun.setAttribute("arrvar", "S" + heapVar);
			if(eun.getAttribute("actualvar") == null)
				eun.setAttribute("actualvar", v);
			#unaryExpr.setAttribute("actualvar", eun.getAttribute("actualvar"));
			eun.setAttribute("heap", heapVar);
			eun.setAttribute("assignarr", heapVar);
			if(slicing)
				eun.setAttribute("expression", new Expression(heapVar, "S" + heapVar));
			else
				eun.setAttribute("expression", arrExpr);
		}
		if(eun.getAttribute("aliasexpr") != null)
			#unaryExpr.setAttribute("aliasexpr", eun.getAttribute("aliasexpr"));
	}
        |       #( "sizeof"
                    ( ( LPAREN typeName )=> LPAREN typeName RPAREN
					{
						#unaryExpr.setAttribute("expression", new Expression("_", "unk(7,_)"));
					}
                    | sizeEx: expr
					{
						String v1_s = (String) sizeEx.getAttribute("vartext");

						if(v1_s != null && !Character.isDigit(v1_s.charAt(0))) {
							if(!inLHSOfAssign && v1_s.compareTo(assignLHSVar) == 0)
								v1_s = Factory().getSymbolicPrevVarName(v1_s);
							else
								v1_s = Factory().getSymbolicCurrVarName(v1_s);
						}

						if(v1_s != null) {
							String ex = "_";
							String ex_s = "unk(7," + v1_s + ")";

							Expression e = new Expression(ex, ex_s);
							#unaryExpr.setAttribute("expression", e);
							#unaryExpr.setAttribute("currvar", e);
							#unaryExpr.setAttribute("vartext", v1_s);
						}
						else {
							#unaryExpr.setAttribute("expression", new Expression("_", "unk(7,_)"));
							#unaryExpr.setAttribute("currvar", new Expression("_", "unk(7,_)"));
						}

					}
                    )
                )
        |       #( "__alignof"
                    ( ( LPAREN typeName )=> LPAREN typeName RPAREN
                    | expr
                    )
                )
        ;

unaryOperator
{
	parseNode = #unaryOperator;
}
        :       BAND
        |       STAR
        |       PLUS
        |       MINUS
        |       BNOT
        |       LNOT
        |       LAND
        |       "__real"
        |       "__imag"
        ;

postfixExpr
{
	parseNode = #postfixExpr;
	// by Duc Hiep for array handling
	updatingArray = false;
	arrIndex = "";
	arrSymbolic = "";

	// set possibleINC = true now. primaryEx will set some global stuff to be used by INC/DEC
	// in case INC/DEC is the postfix. this is to avoid problems with setting nextVarsNeeded = true
	// (look below)
	possibleINC = true;

	// for [], *, -> and . they will set "assignarr" and assignExpr will do getNextVarName on it
	// so, need to avoid primaryExpr from calling getNextVarName
	nextVarsNeeded = false;

	// declaring externFuncCall here because the implicit "stack" nature of declaring it here can be exploited
	boolean externFuncCall = false;

	Vector<Expression> condArrayIndexExps_;
	Vector<String> condArrayIndexVars_;

    boolean inCrestBranch = false;
}
        :       #( NPostfixExpr
                    pe:primaryExpr
            {
                // We set the attribute of the postfix expression
                // first, which will be updated later according on
                // whether some postfix exists or not.

		/* Vijay - Adding condition variable to block */
                String var = (String)pe.getAttribute("vartext");
                if(var != null) Factory().clauseCondVar(var);

                #postfixExpr.setAttribute("expression",
                    pe.getAttribute("expression"));

		// assuming this is going to be a function call, check its name and set appropriate flags
		String funcCallName = (String) (pe.getAttribute("vartext"));
		if(funcCallName.compareTo("_SLICE") == 0)
		{
			slicing = true;
			if(Factory().inAssignGroup) 
			{ 	// there is an assign group clause - close it!
				Factory().closeAssignGroup(currClause, assignGroupVars);
				assignGroupVars.clear();
				Factory().inAssignGroup = false;
			}
		}

		else if(funcCallName.compareTo("_ABORT") == 0 || funcCallName.compareTo("_TRACER_assert") == 0
			|| funcCallName.compareTo("_TRACER_abort") == 0)
		{
			inSafety = true;
			if(Factory().inAssignGroup)
			{ 	// there is an assign group clause - close it!
				Factory().closeAssignGroup(currClause, assignGroupVars);
				assignGroupVars.clear();
				Factory().inAssignGroup = false;
			}
		}

		else if(funcCallName.compareTo("_DECOMPILE_ABORT") == 0 || funcCallName.compareTo("_DECOMPILE_abort") == 0)
			inAbort = true;

		else if(funcCallName.compareTo("_TRACER_abstract") == 0)
			inAbstract = true;

		else if(funcCallName.compareTo("_TRACER_assume") == 0) {
			// closing rituals for the previous assignment group, if any
			if(Factory().inAssignGroup)
			{
				ArrRefToVar.clear(); ArrToCount.clear();
				Factory().closeAssignGroup(currClause, assignGroupVars);
				assignGroupVars.clear();
			}

			int ifBlockId = blockId++;
			Factory().createBlockClause(ifBlockId, false);
			if(blockStack.size() > 0)
				hierarchy.add(new Hierarchy(blockStack.peek(), ifBlockId));
			else
				DEBUG.println("In _TRACER_assume: Block stack became empty!");

			blockStack.push(ifBlockId);

			// denote that the previous block, if any, has a child
			if(hasChildren.size() > 0)
			{
				hasChildren.pop();
				hasChildren.push(true);
			}

			// denote that THIS block does not have a child (as of now)
			hasChildren.push(false);
			Factory().setInCondition(true);
			inAssume = true;
		}

        else if(funcCallName.compareTo("__CrestBranch") == 0)
            inCrestBranch = true;

		// manually check in extern calls because their syntax is different (cannot use contains)
		Iterator<String> g = systemCalls.iterator();
		while(g.hasNext()) {
			String extName = g.next();
			extName = extName.substring(0, extName.indexOf(","));
			if(extName.compareTo(funcCallName) == 0) {
				DEBUG.println("Call to extern function " + funcCallName + " encountered!");
				externFuncCall = true;

				if(assignLHSVar.compareTo("") != 0) {
					// NOTE: String inVar = (assignLHSVar.compareTo("H") != 0)? assignLHSVar: assignLHSVar_forInput;
					String inVar = !(PAHelper.getHeapVars().contains(assignLHSVar))? assignLHSVar: assignLHSVar_forInput;
					DEBUG.println(inVar + " is input");
					Factory().addInputVariable(inVar);
				}

				break;
			}
		}
            }
                    ( PTR // arrow notation (->)
		{ 
			nextVarsNeeded = false;
			if(inLHSOfAssign && !arrOnLHS)
				ptrOnLHS = true;
			
			arrowDepth++; 
		}
		indVar: ID { #postfixExpr.setAttribute("plaintext", pe.getAttribute("plaintext") + "->" + indVar.getText()); }
		{ #pe.setAttribute("plaintext", pe.getAttribute("plaintext") + "->" + indVar.getText()); }
		{
			updatingArray = true; // pointers treated as references on the array H
			String v = (String) pe.getAttribute("vartext");

	    	String currHeap, currHeap_s;
			String heapVar = "";
			String fun = Factory().getFuncName();
			Expression aliasExpr = null;
			boolean isAlias = (pe.getAttribute("aliasexpr") != null);
			if(isAlias)
				aliasExpr = (Expression) pe.getAttribute("aliasexpr");

			if(pe.getAttribute("heap") != null) {
				heapVar = (String)pe.getAttribute("heap");
			}
			else {
				if(Factory().getVariables().contains(new Variable(v))
							|| Factory().getArrayVariables().contains(new Variable(v)))
				{
					heapVar = PAHelper.getHeap(fun, v);
					DEBUG.println("heap of " + fun + "." + v + " is " + heapVar);
				}
				else {
					heapVar = PAHelper.getHeap("GLOBAL", v);
					DEBUG.println("heap of GLOBAL." + v + " is " + heapVar);
				}
			}

			currHeap = Factory().getCurrVarName(heapVar);
			currHeap_s = Factory().getSymbolicCurrVarName(heapVar);

            String arrName = currHeap;

			String structType = null;
			StructField sf = null;
			if(!OPTIONS.INCLUDE_ARRAY_CONSTRAINTS)
				arrIndex = "_";
			else {
				if(pe.getAttribute("chainstruct") == null) {
					if(isAlias) {
						String aliasvar = (String)pe.getAttribute("aliasedvar");
						structType = Factory().getStruct(new Variable(aliasvar));
					}
					else {
						String tmp = (pe.getAttribute("actualvar") != null)? (String)pe.getAttribute("actualvar") : v;
						structType = Factory().getStruct(new Variable(tmp));
					}
					arrIndex = "" + StructInfo.getInd(structType, indVar.getText());
				}
				else {
					sf = (StructField) pe.getAttribute("chainstruct");
					arrIndex = "" + sf.getInd(indVar.getText());
				}
			}
			//arrIndex = "" + GlobalDef.getStructMemberInd(v, indVar.getText());
			arrowIndexForINC = ((Expression)pe.getAttribute("expression")).toString() + "+" + arrIndex;
			SarrowIndexForINC = "plus(" + ((Expression)pe.getAttribute("expression")).toString_symbolic() + "," + arrIndex + ")";
			arrSymbolic = arrIndex;

			String artificialVar;
			    
			Integer count = ArrToCount.get(arrName);
			if(count == null){
				count = new Integer(0);
			}
			artificialVar = ArrRefToString(arrName, count);
			count = new Integer(count.intValue() + 1);
			ArrToCount.put(arrName, count);

			Expression pe_expr = (Expression) pe.getAttribute("expression");

			String idx_var = insert_intermediate_index_var(pe_expr + "+" + arrIndex, "plus(" + pe_expr.toString_symbolic() + "," + arrSymbolic + ")");
			String idx_nv = !OPTIONS.COMPILE_IDX_VARS? pe_expr + "+" + arrIndex : 
							(idx_var_nextNameNeeded()? Factory().getNextVarName(idx_var) : Factory().getCurrVarName(idx_var));
			String idx_symbnv = !OPTIONS.COMPILE_IDX_VARS? "plus(" + pe_expr.toString_symbolic() + "," + arrSymbolic + ")" :
								(idx_var_nextNameNeeded()? Factory().getSymbolicNextVarName(idx_var) : Factory().getSymbolicCurrVarName(idx_var));

			String arrayRef = "ref(" + currHeap + "," + /*pe_expr.toString() + "+" + arrIndex*/ idx_nv + "," + artificialVar + ")";
			String symbStr = "ref(" + currHeap_s + "," + /*"plus(" + pe_expr.toString_symbolic() + "," + arrSymbolic + "))"*/ idx_symbnv + ")";

			if(isAlias) {
				String aliasRef = aliasExpr.toString() + "+" + arrIndex;
				String aliasSym = "plus(" + aliasExpr.toString_symbolic() + "," + arrSymbolic + ")";

				pe.setAttribute("aliasexpr", new Expression(aliasRef, aliasSym));
			}

			globalArrIndex = arrIndex;
			globalArrSymbolic = arrIndex;

			// for assignExpr
			if(inLHSOfAssign) {
				assignArrInd = pe_expr.toString() + "+" + arrIndex;
				assignArrIndSymbolic = "plus(" + pe_expr.toString_symbolic() + "," + arrIndex + ")";
				Variable t_var = new Variable(v);
				assignArrInd_replace = t_var + "+" + arrIndex;
				assignArrIndSymbolic_replace = "plus(" + t_var.getSymbolicCurrentName() + "," + arrIndex + ")";
			}

			if(inLHSOfShorthandAssign) {
				shorthandRef = artificialVar;
				shorthandRef_s = symbStr;
			}

			Expression arrExpr = new Expression(artificialVar, symbStr);
			// new, passing array reference up
			arrExpr.addArrayReference(pe_expr.getAllArrayReference());
			arrExpr.addArrayReference(arrayRef);
			
			// need to save the information
			#postfixExpr.setAttribute("vartext", heapVar);
			#postfixExpr.setAttribute("currvar", new Expression(currHeap, currHeap_s));
			#postfixExpr.setAttribute("arrvar", "S" + heapVar);
			#postfixExpr.setAttribute("heap", heapVar);
			#postfixExpr.setAttribute("assignarr", heapVar);

			// for expression, check slicing. if yes, set heapVar as expression because slicing is to be 
			// done on the variable's heap. not the variable itself.
			if(slicing)
				#postfixExpr.setAttribute("expression", new Expression(heapVar, "S" + heapVar));
			else
				#postfixExpr.setAttribute("expression", arrExpr);

			// do the same for pe
			pe.setAttribute("vartext", heapVar);
			pe.setAttribute("currvar", new Expression(currHeap, currHeap_s));
			pe.setAttribute("arrvar", "S" + heapVar);
			if(pe.getAttribute("actualvar") == null)
				pe.setAttribute("actualvar", v);
			#postfixExpr.setAttribute("actualvar", pe.getAttribute("actualvar"));
			pe.setAttribute("heap", heapVar);
			pe.setAttribute("assignarr", heapVar);

			if(OPTIONS.INCLUDE_ARRAY_CONSTRAINTS) {
				if(pe.getAttribute("chainstruct") == null)
					pe.setAttribute("chainstruct", StructInfo.getField(structType, indVar.getText()));
				else
					pe.setAttribute("chainstruct", sf.getField(indVar.getText()));
				#postfixExpr.setAttribute("chainstruct", pe.getAttribute("chainstruct"));
			}

			if(pe.getAttribute("aliasexpr") != null)
				#postfixExpr.setAttribute("aliasexpr", pe.getAttribute("aliasexpr"));

			if(slicing)
				pe.setAttribute("expression", new Expression(heapVar, "S" + heapVar));
			else
				pe.setAttribute("expression", arrExpr);
      }
	  |
	  DOT  // TREATING DOT EXPRESSIONS THE SAME AS -> EXPRESSIONS (REFER TO EMAIL FROM ANDREW ON 13 Sep 2010). EDIT: *NOT* (REFER TO JORGE EMAIL ON 12 Dec 2010)
	  { 
			nextVarsNeeded = false;
			if(inLHSOfAssign && !arrOnLHS)
				ptrOnLHS = true;
			
			arrowDepth++; 
	  }
	  id:ID { #postfixExpr.setAttribute("plaintext", pe.getAttribute("plaintext") + "." + id.getText()); }//member extraction
	  { pe.setAttribute("plaintext", pe.getAttribute("plaintext") + "." + id.getText()); }
      {
			updatingArray = true; // pointers treated as references on the array H
			String v = (String) pe.getAttribute("vartext");

	    	String currHeap, currHeap_s;
			String heapVar = "";
			String fun = Factory().getFuncName();
			Expression aliasExpr = null;
			boolean isAlias = (pe.getAttribute("aliasexpr") != null);
			if(isAlias)
				aliasExpr = (Expression) pe.getAttribute("aliasexpr");

			boolean isArrDot = (pe.getAttribute("DOTheap") != null); // array dot expressions like a[i].valid
			String dotHeap = null; String dotArr = null; Expression dotIdx = null;
			if(isArrDot) {
				dotHeap = (String) pe.getAttribute("DOTheap");
				dotArr = (String) pe.getAttribute("DOTarr");
				dotIdx = (Expression) pe.getAttribute("DOTidx");
			}


			// =================================================
			// =================================================
			if(isAlias && !PREPROCESS) { // if the struct is an addrVar
			// =================================================
			// =================================================
				if(pe.getAttribute("heap") != null) {
					heapVar = (String)pe.getAttribute("heap");
				}
				else {
					if(pe.getAttribute("aliasedvar") == null) {
						if(Factory().getVariables().contains(new Variable(v))
									|| Factory().getArrayVariables().contains(new Variable(v)))
						{
							heapVar = PAHelper.getHeap2(fun, v);
							DEBUG.println("heap of " + fun + "." + v + " is " + heapVar);
						}
						else {
							heapVar = PAHelper.getHeap2("GLOBAL", v);
							DEBUG.println("heap of GLOBAL." + v + " is " + heapVar);
						}
					}
					else {
						// get the aliased var in the form Addr_<func>__<name>_, check if <func> is a function name or GLOBAL and proceed accordingly
						String aliased = (String) pe.getAttribute("aliasedvar");
						if(aliased == null)
							FATAL.error("in function " + Factory().getFuncName() + ": aliased DOT var for " + v + " was null!");
						Matcher m = Pattern.compile("Addr_(\\w+)__(.+)_").matcher(aliased);
						if(!m.matches())
							FATAL.error("in function " + Factory().getFuncName() + ": DOT var " + aliased + " not aliased var but isAlias is true!");

						String a_func = m.group(1);
						String a_var = m.group(2);
						heapVar = PAHelper.getHeap2(a_func, a_var);
						DEBUG.println("heap of " + a_func + "." + a_var + " is " + heapVar);
					}
				}

				currHeap = Factory().getCurrVarName(heapVar);
				currHeap_s = Factory().getSymbolicCurrVarName(heapVar);

				String arrName = currHeap;

				String structType = null;
				StructField sf = null;
				// find arrIndex
				if(!OPTIONS.INCLUDE_ARRAY_CONSTRAINTS)
					arrIndex = "_";
				else {
					if(pe.getAttribute("chainstruct") == null) {
						if(isAlias) {
							String aliasvar = (String)pe.getAttribute("aliasedvar");
							structType = Factory().getStruct(new Variable(aliasvar));
						}
						else {
							String tmp = (pe.getAttribute("actualvar") != null)? (String)pe.getAttribute("actualvar") : v;
							structType = Factory().getStruct(new Variable(tmp));
						}
						arrIndex = "" + StructInfo.getInd(structType, id.getText());
					}
					else {
						sf = (StructField) pe.getAttribute("chainstruct");
						arrIndex = "" + sf.getInd(id.getText());
					}
				}

				//arrIndex = "" + GlobalDef.getStructMemberInd(v, id.getText());
				if(isArrDot) {
					arrowIndexForINC = dotArr + "+" + dotIdx + "+" + arrIndex;
					SarrowIndexForINC = "plus(plus(S" + dotArr + "," + dotIdx.toString_symbolic() + ")," + arrIndex + ")";
				}
				else {
					arrowIndexForINC = ((Expression)pe.getAttribute("expression")).toString() + "+" + arrIndex;
					SarrowIndexForINC = "plus(" + ((Expression)pe.getAttribute("expression")).toString_symbolic() + "," + arrIndex + ")";
				}
				arrSymbolic = arrIndex;

				String artificialVar;
					
				Integer count = ArrToCount.get(arrName);
				if(count == null){
					count = new Integer(0);
				}
				artificialVar = ArrRefToString(arrName, count);
				count = new Integer(count.intValue() + 1);
				ArrToCount.put(arrName, count);

				Expression pe_expr = (Expression) pe.getAttribute("expression");
				String arrayRef, symbStr;
				if(isArrDot) {
					String idx_var = insert_intermediate_index_var(dotArr + "+" + dotIdx + "+" + arrIndex, "plus(plus(S" + dotArr + "," + dotIdx.toString_symbolic() +
													")," + arrSymbolic + ")");
					String idx_nv = !OPTIONS.COMPILE_IDX_VARS? dotArr + "+" + dotIdx + "+" + arrIndex :
									(idx_var_nextNameNeeded()? Factory().getNextVarName(idx_var) : Factory().getCurrVarName(idx_var));
					String idx_symbnv = !OPTIONS.COMPILE_IDX_VARS? "plus(plus(S" + dotArr + "," + dotIdx.toString_symbolic() + ")," + arrSymbolic + ")" :
										(idx_var_nextNameNeeded()? Factory().getSymbolicNextVarName(idx_var) : Factory().getSymbolicCurrVarName(idx_var));

					arrayRef = "ref(" + currHeap + "," + /*dotArr + "+" + dotIdx + "+" + arrIndex*/ idx_nv + "," + artificialVar + ")";
					symbStr = "ref(" + currHeap_s + "," + /*plus(plus(S" + dotArr + "," + dotIdx.toString_symbolic() + ")," + arrSymbolic + "))"*/ idx_symbnv + ")";
				}
				else {
					String idx_var = insert_intermediate_index_var(pe_expr + "+" + arrIndex, "plus(" + pe_expr.toString_symbolic() + "," + arrSymbolic + ")");
					String idx_nv = !OPTIONS.COMPILE_IDX_VARS? pe_expr + "+" + arrIndex :
									(idx_var_nextNameNeeded()? Factory().getNextVarName(idx_var) : Factory().getCurrVarName(idx_var));
					String idx_symbnv = !OPTIONS.COMPILE_IDX_VARS? "plus(" + pe_expr.toString_symbolic() + "," + arrSymbolic + ")" :
										(idx_var_nextNameNeeded()? Factory().getSymbolicNextVarName(idx_var) : Factory().getSymbolicCurrVarName(idx_var));

					arrayRef = "ref(" + currHeap + "," + /*pe_expr.toString() + "+" + arrIndex*/ idx_nv + "," + artificialVar + ")";
					symbStr = "ref(" + currHeap_s + "," + /*plus(" + pe_expr.toString_symbolic() + "," + arrSymbolic + "))"*/ idx_symbnv + ")";
				}

				if(isAlias) {
					String aliasRef = aliasExpr.toString() + "+" + arrIndex;
					String aliasSym = "plus(" + aliasExpr.toString_symbolic() + "," + arrSymbolic + ")";

					pe.setAttribute("aliasexpr", new Expression(aliasRef, aliasSym));
				}

				globalArrIndex = arrIndex;
				globalArrSymbolic = arrIndex;

				// for assignExpr
				if(inLHSOfAssign) {
					if(isArrDot) { // for array dot expression like: a[i].valid on the LHS
						assignArrInd = dotArr + "+" + dotIdx + "+" + arrIndex;
						assignArrIndSymbolic = "plus(plus(S" + dotArr + "," + dotIdx.toString_symbolic() + ")," + arrIndex + ")";
					}
					else {
						assignArrInd = pe_expr.toString() + "+" + arrIndex;
						assignArrIndSymbolic = "plus(" + pe_expr.toString_symbolic() + "," + arrIndex + ")";
					}
					Variable t_var = new Variable(v);
					assignArrInd_replace = t_var + "+" + arrIndex;
					assignArrIndSymbolic_replace = "plus(" + t_var.getSymbolicCurrentName() + "," + arrIndex + ")";
				}

				if(inLHSOfShorthandAssign) {
					shorthandRef = artificialVar;
					shorthandRef_s = symbStr;
				}

				Expression arrExpr = new Expression(artificialVar, symbStr);
				// new, passing array reference up
				arrExpr.addArrayReference(pe_expr.getAllArrayReference());
				arrExpr.addArrayReference(arrayRef);
				
				// need to save the information
				#postfixExpr.setAttribute("vartext", heapVar);
				#postfixExpr.setAttribute("currvar", new Expression(currHeap, currHeap_s));
				#postfixExpr.setAttribute("arrvar", "S" + heapVar);
				#postfixExpr.setAttribute("heap", heapVar);
				#postfixExpr.setAttribute("assignarr", heapVar);

				// for expression, check slicing. if yes, set heapVar as expression because slicing is to be 
				// done on the variable's heap. not the variable itself.
				if(slicing)
					#postfixExpr.setAttribute("expression", new Expression(heapVar, "S" + heapVar));
				else
					#postfixExpr.setAttribute("expression", arrExpr);

				// do the same for pe
				pe.setAttribute("vartext", heapVar);
				pe.setAttribute("currvar", new Expression(currHeap, currHeap_s));
				pe.setAttribute("arrvar", "S" + heapVar);
				if(pe.getAttribute("actualvar") == null)
					pe.setAttribute("actualvar", v);
				#postfixExpr.setAttribute("actualvar", pe.getAttribute("actualvar"));
				pe.setAttribute("heap", heapVar);
				pe.setAttribute("assignarr", heapVar);

				if(OPTIONS.INCLUDE_ARRAY_CONSTRAINTS) {
					if(pe.getAttribute("chainstruct") == null)
						pe.setAttribute("chainstruct", StructInfo.getField(structType, id.getText()));
					else
						pe.setAttribute("chainstruct", sf.getField(id.getText()));
					#postfixExpr.setAttribute("chainstruct", pe.getAttribute("chainstruct"));
				}

				if(pe.getAttribute("aliasexpr") != null)
					#postfixExpr.setAttribute("aliasexpr", pe.getAttribute("aliasexpr"));

				if(slicing)
					pe.setAttribute("expression", new Expression(heapVar, "S" + heapVar));
				else
					pe.setAttribute("expression", arrExpr);
			}

			// =================================================
			// =================================================
			else  { // i.e, isAlias == false
			// =================================================
			// =================================================
				String arrName = Factory().getCurrVarName(v);
				String structType = null;
				StructField sf = null;

				// find arrIndex
				if(!OPTIONS.INCLUDE_ARRAY_CONSTRAINTS)
					arrIndex = "_";
				else {
					if(pe.getAttribute("chainstruct") == null) {
						String tmp = (pe.getAttribute("actualvar") != null)? (String)pe.getAttribute("actualvar") : v;
						structType = Factory().getStruct(new Variable(tmp));
						arrIndex = "" + StructInfo.getInd(structType, id.getText());
					}
					else {
						sf = (StructField) pe.getAttribute("chainstruct");
						arrIndex = "" + sf.getInd(id.getText());
					}
				}


				arrowIndexForINC = arrIndex;
				SarrowIndexForINC = arrIndex;
				arrSymbolic = arrIndex;

				String artificialVar;
					
				Integer count = ArrToCount.get(arrName);
				if(count == null){
					count = new Integer(0);
				}
				artificialVar = ArrRefToString(arrName, count);
				count = new Integer(count.intValue() + 1);
				ArrToCount.put(arrName, count);

				Expression pe_expr = (Expression) pe.getAttribute("expression");
				String arrayRef = "ref(" + pe_expr.toString() + "," + arrIndex + "," + artificialVar + ")";
				String symbStr = "ref(" + pe_expr.toString_symbolic() + "," + arrSymbolic + ")";

				globalArrIndex = arrIndex;
				globalArrSymbolic = arrIndex;

				// for assignExpr
				if(inLHSOfAssign) {
					assignArrInd = arrIndex;
					assignArrIndSymbolic = arrIndex;
					assignArrInd_replace = arrIndex;
					assignArrIndSymbolic_replace = arrIndex;
				}

				if(inLHSOfShorthandAssign) {
					shorthandRef = artificialVar;
					shorthandRef_s = symbStr;
				}

				Expression arrExpr = new Expression(artificialVar, symbStr);
				// new, passing array reference up
				arrExpr.addArrayReference(pe_expr.getAllArrayReference());
				arrExpr.addArrayReference(arrayRef);
				
				// need to save the information
				String currvar = Factory().getCurrVarName(v);
				#postfixExpr.setAttribute("vartext", v);
				#postfixExpr.setAttribute("currvar", new Expression(currvar, "S" + currvar));
				#postfixExpr.setAttribute("arrvar", "S" + v);
				#postfixExpr.setAttribute("assignarr", v);

				// for expression, check slicing. if yes, set heapVar as expression because slicing is to be 
				// done on the variable's heap. not the variable itself. EDIT: NOT so for non-pointer structs.
				// it is always arrExpr
				//if(slicing)
				//	#postfixExpr.setAttribute("expression", new Expression(heapVar, "S" + heapVar));
				//else
				#postfixExpr.setAttribute("expression", arrExpr);

				// do the same for pe
				pe.setAttribute("vartext", v);
				pe.setAttribute("currvar", new Expression(currvar, "S" + currvar));
				pe.setAttribute("arrvar", "S" + v);
				if(pe.getAttribute("actualvar") == null)
					pe.setAttribute("actualvar", v);
				#postfixExpr.setAttribute("actualvar", pe.getAttribute("actualvar"));
				pe.setAttribute("assignarr", v);

				if(OPTIONS.INCLUDE_ARRAY_CONSTRAINTS) {
					if(pe.getAttribute("chainstruct") == null)
						pe.setAttribute("chainstruct", StructInfo.getField(structType, id.getText()));
					else
						pe.setAttribute("chainstruct", sf.getField(id.getText()));
					#postfixExpr.setAttribute("chainstruct", pe.getAttribute("chainstruct"));
				}

				//if(slicing)
					//pe.setAttribute("expression", new Expression(heapVar, "S" + heapVar));
				//else
				pe.setAttribute("expression", arrExpr);

			}
      }
		| #( NFunctionCallArgs 
			{ 
				String callee = "func_" + pe.getAttribute("vartext");
				if(Factory().inCondition && !externFuncCall && !inAssume)
					DEBUG.warn("call to function " + callee + " within block condition! in " + Factory().getFuncName());
				updatingArray = false;

				ClauseFactory factory = Factory();
				if(!inCrestBranch && !inAssume && !inSafety && !slicing && !inAbort && !inAbstract && !externFuncCall) {
					if(!nestedCallExprs.empty()) {
						int count = 0;
						for(Expression e : nestedCallExprs.peek()) {
							if(!e.toString().contains("Tmp$Call")) {
								String tmpCallVar = getTmpCallVar();
								String nv = factory.getNextVarName(tmpCallVar);
								String symbnv = factory.getSymbolicCurrVarName(tmpCallVar);
								
								String exstr = nv + "=" + e.toString();
								String symbStr = "assign(" + symbnv + "," + e.toString_symbolic() + ")";

								factory.addConstraint(currClause, exstr);
								factory.addSymbolicConstraint(currClause, symbStr);
								factory.clauseRefVar(currClause, tmpCallVar);
								assignGroupVars.add(tmpCallVar);

								if(!factory.getGlobalVariables().contains(new Variable(tmpCallVar)))
									factory.addGlobalVariable(tmpCallVar, 0);

								Expression tmpCallExpr = new Expression(tmpCallVar, "S" + tmpCallVar);
								tmpCallExpr.addArrayReference(e.getAllArrayReference());
								nestedCallExprs.peek().setElementAt(tmpCallExpr, count);
							}
							count++;
						}
					}

					nestedCallExprs.push(new Vector<Expression>());
				}





				// after a loooooong time of testing and verification, I have concluded this:
				// for normal function calls, THIS IF BELOW MUST BE EXECUTED, even if the
				// previous clause has 0 constraints! This is because only here, the preprocessor
				// records that currPP has a function call..
				// do NOT, EVER delete the condition !externFuncCall from here 
				// or it will break stuff (for eg, remove it and test SAFETY/funcall-4.c)
				if(!inCrestBranch && !inSafety && !slicing && !inAssume && (!externFuncCall || inAbort || inAbstract))
				{
					// closing rituals for previous assignGroup
					if(Factory().inAssignGroup)
					{
						String currFun = Factory().getFuncName();
						if(PREPROCESS) {
							if(PreprocessInfo.isCallPP(currFun, currAssignPP)) {
								DEBUG.fprintln(currAssignPP + " is multi call PP!");
								PreprocessInfo.addMultiCallPP(currFun, currAssignPP);
							}
							PreprocessInfo.addCallPP(currFun, currPP);
						}
						// check if current assignment LHS var is referenced in the group. if yes,
						// remove a reference because this assignment is going into a separate clause
						if(inAssign && assignGroupVars.contains(assignLHSVar)) {
							DEBUG.println("assignment with call: LHS variable " + assignLHSVar + " referenced in previous group! Removing 1 reference");
							Factory().removeReference(assignLHSVar);
						}

						ArrRefToVar.clear(); ArrToCount.clear();
						Factory().closeAssignGroup(currClause, assignGroupVars);
						assignGroupVars.clear();

						//assignArrInd = assignArrInd_replace;
						//assignArrIndSymbolic = assignArrIndSymbolic_replace;
						assignArrInd_replace = "";
						assignArrIndSymbolic_replace = "";
					}

					// open a new clause
					// IMPORTANT: this clause MUST ALWAYS be created, even if it's just going to be empty. do not add an if here or something to constraint it!
					// don't ask why. if it's not created, it causes SAFETY/MACRO/tcas tests to fail.
					if(currClause == -1 || Factory().numConstraints(currClause) != 0) {
						currClause = Factory().openClause(#postfixExpr);
						Factory().setFromPP(currClause, currPP);
						Factory().setToPP(currClause, ++currPP);
						Factory().clauseInfluencedId(tId++);
					}

					// assignment "group" with 1 statement
					Factory().inAssignGroup = true;
				}

				if(inSafety || inAssume) {
					tmpIdxVarId = 0;
					condArrayIndexExps.push(new Vector<Expression>());
					condArrayIndexVars.push(new Vector<String>());
				}
			} 
			(el:argExprList
			{
				String functionid = (String)(pe.getAttribute("vartext"));

				// ------------------------------------
				// ----------- inSafety ---------------
				// Contains code for both _TRACER_abort and
				// _TRACER_assert.
				// ------------------------------------
				if(inSafety)
				{
					condArrayIndexExps_ = condArrayIndexExps.pop();
					condArrayIndexVars_ = condArrayIndexVars.pop();

					/* DEBUG */ DEBUG.println("safety goal encountered at " + Factory().getFuncName() + ": " + currPP);

					Expression ei_obj = (Expression) (((Vector<Expression>) el.getAttribute("arglist")).elementAt(0));
					Expression ref_expr = (Expression) (el.getAttribute("expression"));
					if (!(ei_obj.isLogical())) 
					{
						Expression opp;
                        if(OPTIONS.EQ_TO_INEQ) {
                            opp = new Expression(Expression.CONJUNCTION);

                            Expression tmpex1 = new Expression(Expression.CONSTRAINT, ei_obj.toString() + ">=0", "geq(" + ei_obj.toString_symbolic() + ",0)");
                            Expression tmpex2 = new Expression(Expression.CONSTRAINT, ei_obj.toString() + "<=0", "geq(0," + ei_obj.toString_symbolic() + ")");

                            opp.addConstraint(tmpex1);
                            opp.addConstraint(tmpex2);
                        }
                        else {
                            opp = new Expression(Expression.CONSTRAINT, ei_obj.toString() + "=0", "eq(" + ei_obj.toString_symbolic() + ",0)");
                        }
						Expression dis = new Expression(Expression.DISJUNCTION);
						Expression c1 = new Expression(Expression.CONJUNCTION);
						Expression c2 = new Expression(Expression.CONJUNCTION);

						c1.addConstraint(
							new Expression(Expression.CONSTRAINT,
								ei_obj.toString() + ">0",
								"gt(" + ei_obj.toString_symbolic() + ",0)"));
						c2.addConstraint(
							new Expression(Expression.CONSTRAINT,
								ei_obj.toString() + "<0",
								"gt(0," + ei_obj.toString_symbolic() + ")"));

						dis.addDisjunct(c1);
						dis.addDisjunct(c2);

						if(functionid.compareTo("_ABORT") == 0 || functionid.compareTo("_TRACER_abort") == 0) {
							// ----------------------------------------------------
							// _TRACER_abort - clause with condition should go to $unsafe
							// opposite clause (empty) should continue to next PP
							// ----------------------------------------------------
							int prevCurrClause = currClause;
							currClause =
								dis.makeClause(Factory(),
									#postfixExpr, currPP, -1988, condArrayIndexExps_, condArrayIndexVars_);

							// find out how many clauses were created
							for(int t = prevCurrClause; t < currClause; t++) {
								Factory().setBranch(t+1);
								Factory().addArrayReference(t+1, ref_expr.getAllArrayReference());
								Factory().clauseInfluencedId(tId++);
							}

							currClause = Factory().openClause(#postfixExpr);
							Factory().setFromPP(currClause, currPP);
							Factory().setToPP(currClause, ++currPP);
							Factory().clauseInfluencedId(tId++);
							Factory().splEmptyTrans(currClause);
						}

						else if(functionid.compareTo("_TRACER_assert") == 0) {
							// ----------------------------------------------------
							// _TRACER_assert - opposite clause should go to $unsafe
							// clause with condition (empty) should go to next PP
							// ----------------------------------------------------
							int prevCurrClause = currClause;
							currClause = 
									opp.makeClause(Factory(),
										#postfixExpr, currPP, -1988, condArrayIndexExps_, condArrayIndexVars_);

							// find out how many clauses were created
							for(int t = prevCurrClause; t < currClause; t++) {
								Factory().setBranch(t+1);
								Factory().addArrayReference(t+1, ref_expr.getAllArrayReference());
								Factory().clauseInfluencedId(tId++);
							}

							currClause = Factory().openClause(#postfixExpr);
							Factory().setFromPP(currClause, currPP);
							Factory().setToPP(currClause, ++currPP);
							Factory().clauseInfluencedId(tId++);
							Factory().splEmptyTrans(currClause);
						}

						else
							FATAL.error("improper safety condition. must use _TRACER_abort or _TRACER_assert. limitation: no function calls within condition");
					}
					else 
					{

						Expression ei_obj_opp = (Expression) (((Vector<Expression>) el.getAttribute("arglist_opp")).elementAt(0));
				
						if(functionid.compareTo("_ABORT") == 0 || functionid.compareTo("_TRACER_abort") == 0) {
							// ----------------------------------------------------
							// _TRACER_abort - clause with condition should go to $unsafe
							// opposite clause (empty) should continue to next PP
							// ----------------------------------------------------
							int prevCurrClause = currClause;
							currClause =
							ei_obj.makeClause(Factory(),
								#postfixExpr, currPP, -1988, condArrayIndexExps_, condArrayIndexVars_);
							
							// find out how many clauses were created
							for(int t = prevCurrClause; t < currClause; t++) {
								Factory().setBranch(t+1);
								Factory().addArrayReference(t+1, ref_expr.getAllArrayReference());
								Factory().clauseInfluencedId(tId++);
							}

							currClause = Factory().openClause(#postfixExpr);
							Factory().setFromPP(currClause, currPP);
							Factory().setToPP(currClause, ++currPP);
							Factory().clauseInfluencedId(tId++);
							Factory().splEmptyTrans(currClause);
						}

						else if (functionid.compareTo("_TRACER_assert") == 0) {
							// ----------------------------------------------------
							// _TRACER_assert - opposite clause should go to $unsafe
							// clause with condition (empty) should go to next PP
							// ----------------------------------------------------
							int prevCurrClause = currClause;
							currClause =
							ei_obj_opp.makeClause(Factory(),
								#postfixExpr, currPP, -1988, condArrayIndexExps_, condArrayIndexVars_);

							// find out how many clauses were created
							for(int t = prevCurrClause; t < currClause; t++) {
								Factory().setBranch(t+1);
								Factory().addArrayReference(t+1, ref_expr.getAllArrayReference());
								Factory().clauseInfluencedId(tId++);
							}

							currClause = Factory().openClause(#postfixExpr);
							Factory().setFromPP(currClause, currPP);
							Factory().setToPP(currClause, ++currPP);
							Factory().clauseInfluencedId(tId++);
							Factory().splEmptyTrans(currClause);
						}

						else
							FATAL.error("improper safety condition. must use _TRACER_abort or _TRACER_assert. limitation: no function calls within condition");
					}
	         	}

			// ------------------------------------
			// ----------- inSlicing---------------
			// Record the slice from the arglist
			// and do some cleaning up of the clause
			// that would've been created for slicing
			// before itself.
			// ------------------------------------
			else if(slicing)
			{
				/* DEBUG */ DEBUG.println("slicing goal encountered at " + Factory().getFuncName()
									+ ": " + (currPP-2));
				
				Vector<Expression> sliceVars = (Vector<Expression>) (el.getAttribute("arglist"));
				sliceGoals.add(new Slice(Factory(), sliceVars));

				// Undo previous changes just like for safety
				// the clause for _SLICE call has already been created in statementBody->NStatementExpr, so remove it but
				// only if there are no other constraints in the clause (i.e., the clause was created exclusively for _SLICE)
				if(Factory().numConstraints(currClause) == 0) {
					currClause = Factory().removeClause(Factory().numClauses() -1);

					// this removes the _SLICE call's Id from being influenced by its parent block
					Factory().popClauseInfluencedId();
					tId--;
					--currPP;
				}

				slicingSanityCheck = currPP;
			}
			
			// ------------------------------------
			// ----------- inAbort-----------------
			// This abort is for _DECOMPILE_abort
			// Make note of the Vertex and the
			// abort condition. decompiler will take
			// care of the rest.
			// ------------------------------------
			else if(inAbort)
			{
				Expression abortCond = (Expression)((Vector<Expression>) el.getAttribute("arglist")).elementAt(0);
				decompiler.Vertex v = new decompiler.Vertex(Factory().getFuncName(), "p"+(currPP-1), -1);
				DEBUG.println("ABORT condition at " + v + ": "  + abortCond.toString_DNF());
				aborts.put(v, abortCond.toString_DNF());
			}

			// ------------------------------------
			// ----------- inAbstract--------------
			// Just close the current assign group here
			// and make note of currPP, the current clause
			// factory and the actual abstraction. its
			// fact will be added in the end
			// ------------------------------------
			else if(inAbstract) {
                if(!PREPROCESS && OPTIONS.RUN_CIL)
                    DEBUG.fprintln("WARNING: abstraction encountered in function " + Factory().getFuncName() + " while running with CIL. " +
                                    "Make sure all conjunctions are split into parameters.");
				Vector<Expression> arglist = (Vector<Expression>) el.getAttribute("arglist");
				Vector<String> varlist = (Vector<String>) el.getAttribute("varlist");
				Vector<Expression> abslist = new Vector<Expression>();

				for(int i=0; i < arglist.size(); i++) {
					Expression e = arglist.elementAt(i);
					if(!e.isLogical())
						abslist.add(new Expression(varlist.elementAt(i), "S" + varlist.elementAt(i)));
					else
						abslist.add(e);
				}
				DEBUG.println("abstraction " + abslist + " in " + Factory().getFuncName() + " at PP:" + currPP);

				Abstraction abs = new Abstraction(Factory(), currPP, abslist);
				abstractions.add(abs);

				// closing rituals for the current assignment "group" (with just this only clause)
				if(Factory().inAssignGroup)
				{
					ArrRefToVar.clear(); ArrToCount.clear();
					Factory().closeAssignGroup(currClause, assignGroupVars);
					assignGroupVars.clear();
				}
			}

			// ------------------------------------
			// ----------- inAssume ---------------
			// Emulate the scenario if (Cond) P;
			// There is *NO* else block for this and
			// *NO* else transition with opposite condition.
			// Noted from Jorge.
			// ------------------------------------
			else if(inAssume) {
				condArrayIndexExps_ = condArrayIndexExps.pop();
				condArrayIndexVars_ = condArrayIndexVars.pop();

                Factory().setInCondition(false);
				Expression ei_obj = (Expression) (((Vector<Expression>) el.getAttribute("arglist")).elementAt(0));

				if (!(ei_obj.isLogical())) 
				{
					Expression dis = new Expression(Expression.DISJUNCTION);
					Expression c1 = new Expression(Expression.CONJUNCTION);
					Expression c2 = new Expression(Expression.CONJUNCTION);
					
					c1.addConstraint(
						new Expression(Expression.CONSTRAINT,
							ei_obj.toString() + ">0",
							"gt(" + ei_obj.toString_symbolic() + ",0)"));
					c2.addConstraint(
						new Expression(Expression.CONSTRAINT,
							ei_obj.toString() + "<0",
							"gt(0," + ei_obj.toString_symbolic() + ")"));

					dis.addDisjunct(c1);
					dis.addDisjunct(c2);

					int prevCurrClause = currClause;
					currClause = dis.makeClause(Factory(), #postfixExpr, currPP, ++currPP, condArrayIndexExps_, condArrayIndexVars_);

					for(int t = prevCurrClause; t < currClause; t++) {
						Factory().setBranch(t+1);
						Factory().addArrayReference(t+1, ref_expr.getAllArrayReference());
						Factory().clauseInfluencedId(tId++);
					}
				}
				else 
				{
					int prevCurrClause = currClause;
					currClause = ei_obj.makeClause(Factory(),	#postfixExpr, currPP, ++currPP, condArrayIndexExps_, condArrayIndexVars_);
					
					// find out how many clauses were created
					for(int t = prevCurrClause; t < currClause; t++) {
						Factory().setBranch(t+1);
						Factory().addArrayReference(t+1, ref_expr.getAllArrayReference());
						Factory().clauseInfluencedId(tId++);
					}
				}
			}

			// ------------------------------------
			// ----------- inCrestBranch-----------
            // Just make a note that the current block
            // id is mapped to the CREST branch id
            // obtained from the call's arguments
			// ------------------------------------
			else if(inCrestBranch) {
                Vector<Expression> xs = (Vector<Expression>) el.getAttribute("arglist");
                if(xs.size() != 3)
                    FATAL.error("incorrect number of arguments in __CrestBranch: " + xs.size());
                try {
                    int thisBlockId = Factory().blockStack.peek().getBlockId();
                    Integer crestBranchId = Integer.parseInt(xs.elementAt(1).toString()); /* second element is branch id */
                    if(crest_branches.keySet().contains(crestBranchId) || crest_branches.values().contains(thisBlockId))
                        throw new Exception();
                    crest_branches.put(crestBranchId, thisBlockId);
                } catch (Exception e) {
                    FATAL.error("something went wrong when creating branch ids map between CREST and TRACER");
                }
            }

			// ------------------------------------
			// !inAssume && !inSafety && !slicing && !inAbort && !inAbstract && !inCrestBranch
			// ----------- Normal call ------------
			// ------------------------------------
			else {
				if(externFuncCall) {
					ClauseFactory factory = Factory();
					Iterator<String> i = ((Vector<String>)(el.getAttribute("varlist"))).iterator();
					int count = 0;
					String unk_s = "";
					while(i.hasNext()) {
						String v_s = i.next();
                        boolean isAlreadyUnk = v_s.startsWith("unk(");

						if(!Character.isDigit(v_s.charAt(0)) && !isAlreadyUnk) {
							if(!inLHSOfAssign && assignLHSVar.compareTo(v_s) == 0)
								v_s = Factory().getSymbolicPrevVarName(v_s);
							else
								v_s = Factory().getSymbolicCurrVarName(v_s);
						}
						unk_s += v_s; 
                        if(i.hasNext()) unk_s += ",";
						count++;
					}
					unk_s = "unk(0," + functionid + "," + count + "," + unk_s + ")";

					if(!nestedCallExprs.empty()) { // remove "count"-many elements in the stack's peek Vector starting from the end
						Vector<Expression> t = nestedCallExprs.pop();
						for(int j = 1; j <= count; j++)
							t.removeElementAt(t.size()-j);
						nestedCallExprs.push(t);
					}

					Expression e = new Expression("_", "_");
					#postfixExpr.setAttribute("expression", e);
					factory.addLineNum(currClause, #postfixExpr.getLineNum());
				}
				else {

					String currFunc = Factory().getFuncName();
					if(callMap.get(currFunc) == null)
						callMap.put(currFunc, new TreeSet<String>());
					callMap.get(currFunc).add("func_" + functionid);

					// -------------------------------------------------
					// if WP_COMPILATION, setup actual-formal parameters
					// -------------------------------------------------
					if(OPTIONS.WP_COMPILATION) {
						Vector<Expression> args_exps = nestedCallExprs.peek();
						ClauseFactory fac = Factory();
						for(int i = 0; i < args_exps.size(); i++) {
							String var = localToGlobalVar("func_" + functionid, i+1 /*+1 since first element is reserved for RetVal*/);
							String exstr = fac.getNextVarName(var);
							exstr += "=";
							exstr += args_exps.elementAt(i).toString();

							String symbstr = "assign(";
							symbstr += fac.getSymbolicNextVarName(var);
							symbstr += ",";
							symbstr += args_exps.elementAt(i).toString_symbolic();
							symbstr += ")";

							fac.addConstraint(currClause, exstr);
							fac.addSymbolicConstraint(currClause, symbstr);
							fac.clauseRefVar(currClause, var);
							if(fac.inAssignGroup)
								assignGroupVars.add(var);
						}
					}

					// closing rituals for previous assignGroup
					if(OPTIONS.WP_COMPILATION || PreprocessInfo.isMultiCallPP(currFunc, currAssignPP) && Factory().inAssignGroup)
					{
						// check if current assignment LHS var is referenced in the group. if yes,
						// remove a reference because this assignment is going into a separate clause
						if(inAssign && assignGroupVars.contains(assignLHSVar)) {
							DEBUG.println("assignment with call: LHS variable " + assignLHSVar + " referenced in previous group! Removing 1 reference");
							Factory().removeReference(assignLHSVar);
						}

						ArrRefToVar.clear(); ArrToCount.clear();
						Factory().closeAssignGroup(currClause, assignGroupVars);
						assignGroupVars.clear();

						//assignArrInd = assignArrInd_replace;
						//assignArrIndSymbolic = assignArrIndSymbolic_replace;
						assignArrInd_replace = "";
						assignArrIndSymbolic_replace = "";
					}

					// open a new clause
					// i'm not ENTIRELY sure about this condition, but in case of problem, just remove it. you'll just get an extra trans for every call. no big deal.
					if(OPTIONS.WP_COMPILATION || PreprocessInfo.isMultiCallPP(currFunc, currAssignPP) && Factory().numConstraints(currClause) != 0) {
						currClause = Factory().openClause(#postfixExpr);
						Factory().setFromPP(currClause, currPP);
						Factory().setToPP(currClause, ++currPP);
						Factory().clauseInfluencedId(tId++);
					}
					// assignment "group" with 1 statement
					Factory().inAssignGroup = true;



					// ------ DO NORMAL PROCEDURE FOR A FUNCTION CALL -------- //


					ClauseFactory factory = Factory();
					//Iterator<Expression> i = ((Vector<Expression>)(el.getAttribute("arglist"))).iterator();
					Iterator<Expression> i = nestedCallExprs.peek().iterator();
					CallInfo call = new CallInfo();
					call.setFunc("func_" + functionid);
					String args = "[";
					String args_symbolic = "[";
					String constraints_symbolic = "[";
					String RV = getCallRetVar();
					String TV;
					Expression expr;
					int nparams = 0;
					
					//                            DEBUG.println(el.getText());
					Integer varArityFunc = varArityFuncs.get(functionid);

					int count = 0;
					if ((varArityFunc != null && count < varArityFunc) 
					  || (varArityFunc == null && i.hasNext())) {
						args += RV + ",";
						call.addArgs(RV);
						args_symbolic += "S" + RV + ",";
						call.addArgs_symbolic("S" + RV);
						
						while ((varArityFunc != null && count < varArityFunc) 
						  || (varArityFunc == null && i.hasNext())) {
								nparams++;
								count++;
								expr = i.next();
								TV = getCallTempVar();
								args += expr.toString();
								call.addArgs(expr.toString());
								args_symbolic += TV;
								call.addArgs_symbolic(TV);
								constraints_symbolic += "assign(" + TV + "," + expr.toString_symbolic() + ")";
								call.addConstraint_symbolic("assign(" + TV + "," + expr.toString_symbolic() + ")");
								if ((varArityFunc != null && count < varArityFunc) 
								  || (varArityFunc == null && i.hasNext()))
								{
									args += ",";
									args_symbolic += ",";
									constraints_symbolic += ",";
								} 
								else 
								{
									args += "|_]";
									args_symbolic += "|_]";
									constraints_symbolic += "]";
									break;
								}
						}
					}
					else {
						args += RV + "]";
						call.addArgs(RV);
						args_symbolic += "S" + RV + "]";
						call.addArgs_symbolic("S" + RV);
						constraints_symbolic += "]"; 
					}

					nestedCallExprs.pop();
					String currFun = Factory().getFuncName();

					// not a real function? (meaning function pointer) don't do anything, just set expression as _ (no need to even pass up any reference)
					Expression pfExpr;
					if(!PREPROCESS && !PreprocessInfo.isRealFunc("func_" + functionid)) {
						pfExpr = new Expression("_", "_");
						factory.addCall(currClause, new CallInfo()); // dummy call
					}
					else if(factory.inCondition) {
						if(OPTIONS.WP_COMPILATION) // change return value accordingly, since it will be a global variable
							RV = localToGlobalVar("func_" + functionid, 0 /*0 is for ReturnValue */);

						// notify the current loop it has a call in its condition
						loopCondHasCall.pop(); loopCondHasCall.push(true);

						factory.addCall(currClause, call);
						callSanity.add(call);

						String condCallVar = getCondCallVar(factory.getFuncName());
						String nv = factory.getNextVarName(condCallVar);
						String symbnv = factory.getSymbolicCurrVarName(condCallVar);

						String exstr = nv + "=" + RV;
						String symbStr = "assign(" + symbnv + ",S" + RV + ")";

						factory.addConstraint(currClause, exstr);
						factory.addSymbolicConstraint(currClause, symbStr);
						factory.clauseRefVar(currClause, condCallVar);
						assignGroupVars.add(condCallVar);

						if(!factory.getVariables().contains(new Variable(condCallVar)))
							factory.addVariable(condCallVar, 0);

						pfExpr = new Expression(condCallVar, "S" + condCallVar);
						pfExpr.addArrayReference(((Expression) el.getAttribute("expression")).getAllArrayReference());
					}
					else {
						if(OPTIONS.WP_COMPILATION) // change return value accordingly, since it will be a global variable
							RV = localToGlobalVar("func_" + functionid, 0 /*0 is for ReturnValue */);

						factory.addCall(currClause, call);
						callSanity.add(call);
						factory.addLineNum(currClause, #postfixExpr.getLineNum());
						
						if(PreprocessInfo.isMultiCallPP(currFun, currAssignPP) || !nestedCallExprs.empty()) {
							String tmpCallVar = getTmpCallVar();
							String nv = factory.getNextVarName(tmpCallVar);
							String symbnv = factory.getSymbolicCurrVarName(tmpCallVar);
							
							String exstr = nv + "=" + RV;
							String symbStr = "assign(" + symbnv + ",S" + RV + ")";

							factory.addConstraint(currClause, exstr);
							factory.addSymbolicConstraint(currClause, symbStr);
							factory.clauseRefVar(currClause, tmpCallVar);
							assignGroupVars.add(tmpCallVar);

							if(!factory.getGlobalVariables().contains(new Variable(tmpCallVar)))
								factory.addGlobalVariable(tmpCallVar, 0);

							pfExpr = new Expression(tmpCallVar, "S" + tmpCallVar);
							pfExpr.addArrayReference(((Expression) el.getAttribute("expression")).getAllArrayReference());
						}
						else {
							// Vijay - bug found: pass array reference here too, cases like calling a function using array reference as param
							pfExpr = new Expression(RV, "S" + RV);
							pfExpr.addArrayReference(((Expression) el.getAttribute("expression")).getAllArrayReference());
						}
					}
					if(!OPTIONS.OLD_BLOCKS)
						factory.addBlockFunCall("func_" + functionid);

					#postfixExpr.setAttribute("expression", pfExpr);

					// since there is a call in this group, close it so that the next statement will begin in a new group..
					// *BUT* only if this is not an assignment stmt. if yes, it will close only after the whole statement is processed
					if(PreprocessInfo.isMultiCallPP(currFun, currAssignPP) || (!inAssign && Factory().inAssignGroup)
							|| factory.inCondition)
					{
						ArrRefToVar.clear(); ArrToCount.clear();
						Factory().closeAssignGroup(currClause, assignGroupVars);
						assignGroupVars.clear();

						// additional job - add array references to currClause
						Factory().addArrayReference(currClause, pfExpr.getAllArrayReference());

						if(PreprocessInfo.isMultiCallPP(currFunc, currAssignPP) || factory.inCondition) {
							currClause = Factory().openClause(#postfixExpr);
							Factory().setFromPP(currClause, currPP);
							Factory().setToPP(currClause, ++currPP);
							Factory().clauseInfluencedId(tId++);
							// assignment "group" with 1 statement
							Factory().inAssignGroup = true;
						}
					}
				}
			}
		}
                      )? RPAREN )
                {
		    if(!inSafety && !slicing && !inAbort && !inAssume && !inAbstract) {
				//---------------------------------------------------------
				// Function call without arguments list
				//---------------------------------------------------------
				String functionid = (String)(pe.getAttribute("vartext"));

				ClauseFactory factory = Factory();
				String RV = getCallRetVar();

				if (el == null) {
					if(externFuncCall) {
						#postfixExpr.setAttribute("expression", new Expression("_", "unk(0," + functionid + ")"));
					}
					else {

						String currFunc = Factory().getFuncName();
						if(callMap.get(currFunc) == null)
							callMap.put(currFunc, new TreeSet<String>());
						callMap.get(currFunc).add("func_" + functionid);

						// closing rituals for previous assignGroup
						if(PreprocessInfo.isMultiCallPP(currFunc, currAssignPP) && Factory().inAssignGroup)
						{
							// check if current assignment LHS var is referenced in the group. if yes,
							// remove a reference because this assignment is going into a separate clause
							if(inAssign && assignGroupVars.contains(assignLHSVar)) {
								DEBUG.println("assignment with call: LHS variable " + assignLHSVar + " referenced in previous group! Removing 1 reference");
								Factory().removeReference(assignLHSVar);
							}

							ArrRefToVar.clear(); ArrToCount.clear();
							Factory().closeAssignGroup(currClause, assignGroupVars);
							assignGroupVars.clear();

							//assignArrInd = assignArrInd_replace;
							//assignArrIndSymbolic = assignArrIndSymbolic_replace;
							assignArrInd_replace = "";
							assignArrIndSymbolic_replace = "";
						}

						// open a new clause
						// im not ENTIRELY sure about this condition but in case of problem just remove it. you'll just get an extra trans for every call. no big deal.
						if(PreprocessInfo.isMultiCallPP(currFunc, currAssignPP) && Factory().numConstraints(currClause) != 0) {
							currClause = Factory().openClause(#postfixExpr);
							Factory().setFromPP(currClause, currPP);
							Factory().setToPP(currClause, ++currPP);
							Factory().clauseInfluencedId(tId++);
						}
						// assignment "group" with 1 statement
						Factory().inAssignGroup = true;



						nestedCallExprs.pop();

						CallInfo call = new CallInfo();
						call.setFunc("func_" + functionid);
						call.addArgs(RV);
						call.addArgs_symbolic("S" + RV);
						factory.addCall(currClause, call);
						callSanity.add(call);
						factory.addLineNum(currClause, #postfixExpr.getLineNum());

						String currFun = Factory().getFuncName();
						if(OPTIONS.WP_COMPILATION) // change return value accordingly, since it will be a global variable
							RV = localToGlobalVar("func_" + functionid, 0 /*0 is for ReturnValue */);

						if(factory.inCondition) {
							// notify the current loop it has a call in its condition
							loopCondHasCall.pop(); loopCondHasCall.push(true);

							String condCallVar = getCondCallVar(factory.getFuncName());
							String nv = factory.getNextVarName(condCallVar);
							String symbnv = factory.getSymbolicCurrVarName(condCallVar);

							String exstr = nv + "=" + RV;
							String symbStr = "assign(" + symbnv + ",S" + RV + ")";

							factory.addConstraint(currClause, exstr);
							factory.addSymbolicConstraint(currClause, symbStr);
							factory.clauseRefVar(currClause, condCallVar);
							assignGroupVars.add(condCallVar);

							if(!factory.getVariables().contains(new Variable(condCallVar)))
								factory.addVariable(condCallVar, 0);

							#postfixExpr.setAttribute("expression", new Expression(condCallVar, "S" + condCallVar));
						}
						else if(PreprocessInfo.isMultiCallPP(currFun, currAssignPP)) {
							String tmpCallVar = getTmpCallVar();
							String nv = factory.getNextVarName(tmpCallVar);
							String symbnv = factory.getSymbolicCurrVarName(tmpCallVar);
							
							String exstr = nv + "=" + RV;
							String symbStr = "assign(" + symbnv + ",S" + RV + ")";

							factory.addConstraint(currClause, exstr);
							factory.addSymbolicConstraint(currClause, symbStr);
							factory.clauseRefVar(currClause, tmpCallVar);
							assignGroupVars.add(tmpCallVar);

							if(!factory.getGlobalVariables().contains(new Variable(tmpCallVar)))
								factory.addGlobalVariable(tmpCallVar, 0);

							#postfixExpr.setAttribute("expression", new Expression(tmpCallVar, "S" + tmpCallVar));
						}
						else
							#postfixExpr.setAttribute("expression", new Expression(RV, "S" + RV));

						if(!OPTIONS.OLD_BLOCKS)
							factory.addBlockFunCall("func_" + functionid);


						if(PreprocessInfo.isMultiCallPP(currFun, currAssignPP) || (!inAssign && Factory().inAssignGroup)
								|| factory.inCondition)
						{
							ArrRefToVar.clear(); ArrToCount.clear();
							Factory().closeAssignGroup(currClause, assignGroupVars);
							assignGroupVars.clear();

							if(PreprocessInfo.isMultiCallPP(currFun, currAssignPP) || factory.inCondition) {
								currClause = Factory().openClause(#postfixExpr);
								Factory().setFromPP(currClause, currPP);
								Factory().setToPP(currClause, ++currPP);
								Factory().clauseInfluencedId(tId++);
								// assignment "group" with 1 statement
								Factory().inAssignGroup = true;
							}
						}
					}
				}

				if(!externFuncCall) {
					// since there is a call in this group, close it so that the next statement will begin in a new group
					if(!inAssign && Factory().inAssignGroup)
					{
						ArrRefToVar.clear(); ArrToCount.clear();
						Factory().closeAssignGroup(currClause, assignGroupVars);
						assignGroupVars.clear();
					}
				}
		    }
			inSafety = false;
			slicing = false;
			inAbort = false;
			inAssume = false;
			inAbstract = false;
			externFuncCall = false;
                }

                    | LBRACKET {
			    updatingArray = true; 	    

			    // Duc Hiep - bug found
			    nextVarsNeeded = false;
			    // go inside array index -> set this variable back to false

			    bracDepth++;

				if(inLHSOfAssign && !ptrOnLHS)
					arrOnLHS = true;
		}
		be:expr
		RBRACKET
		{ #postfixExpr.setAttribute("plaintext", pe.getAttribute("plaintext") + "[" + be.getAttribute("plaintext") + "]"); } 
		{ pe.setAttribute("plaintext", pe.getAttribute("plaintext") + "[" + be.getAttribute("plaintext") + "]"); } 
		{
			Expression pe_expr;
			if(pe.getAttribute("originalexpr") != null)
				pe_expr = ((Expression) (pe.getAttribute("originalexpr")));
			else
				pe_expr = ((Expression) (pe.getAttribute("expression")));

			String arrName = pe_expr.toString();
			String vartext = (String) pe.getAttribute("vartext");
			boolean isAliasArr = (pe.getAttribute("aliasheap") != null);
			String heapVar = (isAliasArr)? Factory().getCurrVarName((String) pe.getAttribute("aliasheap")) : null;
			String aliasedVar = (isAliasArr)? (String)pe.getAttribute("aliasedvar"): null;
			Expression aliasExpr = null;
			if(isAliasArr)
				if(pe.getAttribute("aliasexpr") != null)
					aliasExpr = (Expression) pe.getAttribute("aliasexpr");
				else
					FATAL.error("array " + vartext + " recognized as alias arr but no expr is present!");

			arrIndex = ((Expression)(be.getAttribute("expression"))).toString();
			String bvar = (String) be.getAttribute("vartext");
			globalArrIndex = arrIndex;
			arrSymbolic = ((Expression)(be.getAttribute("expression"))).toString_symbolic();
			globalArrSymbolic = arrSymbolic;
			String artificialVar;
			    
				arrName = arrName.replaceAll("\\(", "");
				arrName = arrName.replaceAll("\\)", "");
			    
			// -----------------------------------------------------
			// -----------------------------------------------------
			// ---------------- ARRAY IN RHS -----------------------
			// -----------------------------------------------------
			// -----------------------------------------------------
			    
			if(!inLHSOfAssign || (inLHSOfAssign && ptrOnLHS)){
				/*
				 * Modified by Duc Hiep to accommodate arrays
				 * 12/12/2008
				 */
					
				Integer count = ArrToCount.get(arrName);
				if(count == null){
				count = new Integer(0);
				}
				artificialVar = ArrRefToString(arrName, count);
				count = new Integer(count.intValue() + 1);
				ArrToCount.put(arrName, count);

				// -----------------------------------------------------
				// -----------------------------------------------------
				if(arrayDimensions.peek() > 1) { // --------------------
				// -----------------------------------------------------
				// -----------------------------------------------------
					Expression prevExpr = (Expression) (#postfixExpr.getAttribute("expression"));
					String arrayRef, symbStr, aliasRef, aliasSym;

					if(isAliasArr) {
						Vector<Integer> arrSize = aliasArraySize.get(aliasedVar);
						if(arrSize == null)
							FATAL.error("could not find size of array " + aliasedVar);

						aliasRef = aliasedVar;
						aliasSym = "";
							for(int a = 0; a < multiDimArrayIndices_s.peek().size(); a++) aliasSym += "plus(";
						aliasSym += "plus(S" + aliasedVar;

						for(int a=0; a < multiDimArrayIndices.peek().size(); a++) {
							aliasRef += "+(" + multiDimArrayIndices.peek().elementAt(a);
							aliasSym += ",";
								for(int b=a+1; b < arrSize.size(); b++) aliasSym += "mult(";
							aliasSym += multiDimArrayIndices_s.peek().elementAt(a);

							for(int b=a+1; b < arrSize.size(); b++) {
								aliasRef += "*" + arrSize.elementAt(b);
								aliasSym += "," + arrSize.elementAt(b) + ")";
							}

							aliasRef += ")";
							aliasSym += ")";
						}

						aliasRef += "+(" + arrIndex + ")";
						aliasSym += "," + arrSymbolic + ")"; // this should be only 1 bracket!! please don't change it! eg: try with foo() {int a[5][5],x; x = a[2][3];}

						String idx_var = insert_intermediate_index_var(aliasRef, aliasSym);
						String idx_nv = !OPTIONS.COMPILE_IDX_VARS? aliasRef :
										(idx_var_nextNameNeeded()? Factory().getNextVarName(idx_var) : Factory().getCurrVarName(idx_var));
						String idx_symbnv = !OPTIONS.COMPILE_IDX_VARS? aliasSym :
											(idx_var_nextNameNeeded()? Factory().getSymbolicNextVarName(idx_var) : Factory().getSymbolicCurrVarName(idx_var));

						arrayRef = "ref(" + heapVar + "," + idx_nv + "," + artificialVar + ")";
						symbStr = "ref(S" + heapVar + "," + idx_symbnv + ")";

						pe.setAttribute("aliasexpr", new Expression(aliasRef, aliasSym));
					}
					else {
						// change arrIndex also so that prefix INC/DEC will use it
						arrayRef = "ref(" + pe_expr.toString() + ",[";
						arrIndex = "[";
						symbStr = "ref(" + pe_expr.toString_symbolic() + ",[";
						arrSymbolic = "[";
						for(int d=0; d < multiDimArrayIndices.peek().size(); d++) {
							arrayRef += multiDimArrayIndices.peek().elementAt(d) + ",";
							arrIndex += multiDimArrayIndices.peek().elementAt(d) + ",";
							symbStr += multiDimArrayIndices_s.peek().elementAt(d) + ",";
							arrSymbolic += multiDimArrayIndices_s.peek().elementAt(d) + ",";
						}
						arrayRef += ((Expression) (be.getAttribute("expression"))).toString() + "]," + artificialVar + ")";
						arrIndex += ((Expression) (be.getAttribute("expression"))).toString() + "]";
						symbStr += ((Expression) (be.getAttribute("expression"))).toString_symbolic() + "])";
						arrSymbolic += ((Expression) (be.getAttribute("expression"))).toString_symbolic() + "]";
					}

					multiDimArrayIndices.peek().add(((Expression)(be.getAttribute("expression"))).toString());
					multiDimArrayIndices_s.peek().add(((Expression)(be.getAttribute("expression"))).toString_symbolic());

					// remove the last reference and add the remaining ones to the current expression
					Expression arrExpr = new Expression(artificialVar, symbStr);
					prevExpr.removeLatestReference();
					arrExpr.addArrayReference(prevExpr.getAllArrayReference());
					arrExpr.addArrayReference(pe_expr.getAllArrayReference());
					arrExpr.addArrayReference(((Expression) (be.getAttribute("expression"))).getAllArrayReference());
					arrExpr.addArrayReference(arrayRef);

					#postfixExpr.setAttribute("expression",arrExpr);
					pe.setAttribute("expression",arrExpr);
					if(pe.getAttribute("assignarr") != null)
						#postfixExpr.setAttribute("assignarr",pe.getAttribute("assignarr"));
				}

				// -----------------------------------------------------
				// -----------------------------------------------------
				else { // -------- arrayDimensions.peek() <= 1 ---------
				// -----------------------------------------------------
				// -----------------------------------------------------
					String arrayRef, symbStr, aliasRef, aliasSym;
					if(isAliasArr) {
						String idx_var = insert_intermediate_index_var(aliasedVar + "+" + arrIndex, "plus(S" + aliasedVar + "," + arrSymbolic + ")");
						String idx_nv = !OPTIONS.COMPILE_IDX_VARS? aliasedVar + "+" + arrIndex :
										(idx_var_nextNameNeeded()? Factory().getNextVarName(idx_var) : Factory().getCurrVarName(idx_var));
						String idx_symbnv = !OPTIONS.COMPILE_IDX_VARS? "plus(S" + aliasedVar + "," + arrSymbolic + ")" :
											(idx_var_nextNameNeeded()? Factory().getSymbolicNextVarName(idx_var) : Factory().getSymbolicCurrVarName(idx_var));

						arrayRef = "ref(" + heapVar + "," + /*aliasedVar + "+" + arrIndex*/ idx_nv + "," + artificialVar + ")";
						symbStr = "ref(S" + heapVar + "," + /*plus(S" + aliasedVar + "," + arrSymbolic + "))"*/ idx_symbnv + ")";

						aliasRef = aliasExpr.toString() + "+" + arrIndex;
						aliasSym = "plus(" + aliasExpr.toString_symbolic() + "," + arrSymbolic + ")";
						pe.setAttribute("aliasexpr", new Expression(aliasRef, aliasSym));

						arrowIndexForINC = aliasedVar + "+" + arrIndex;
						SarrowIndexForINC = "plus(S" + aliasedVar + "," + arrSymbolic + ")";
					}
					else {
						arrayRef = "ref(" + pe_expr.toString() + "," + ((Expression) be.getAttribute("expression")).toString() + "," + artificialVar + ")";
						symbStr = "ref(" + pe_expr.toString_symbolic() + "," + 
									((Expression) be.getAttribute("expression")).toString_symbolic() + ")";
					}
					Expression arrExpr = new Expression(artificialVar, symbStr);
					// new, passing array reference up
					arrExpr.addArrayReference(pe_expr.getAllArrayReference());
					arrExpr.addArrayReference(((Expression) (be.getAttribute("expression"))).getAllArrayReference());
					arrExpr.addArrayReference(arrayRef);
					
					multiDimArrayIndices.peek().add(((Expression)be.getAttribute("expression")).toString()); // add to multi dim indices, even if it's just going to be single dim array
					multiDimArrayIndices_s.peek().add(((Expression)be.getAttribute("expression")).toString_symbolic());
						
					// need to save the information
					
					#postfixExpr.setAttribute("vartext", pe.getAttribute("vartext"));
					pe.setAttribute("vartext", pe.getAttribute("vartext"));
					
					if(pe.getAttribute("actualvar") != null)
						#postfixExpr.setAttribute("actualvar", pe.getAttribute("actualvar"));

					if(pe.getAttribute("currvar") != null) {
						#postfixExpr.setAttribute("currvar", (Expression) (pe.getAttribute("currvar")));
						pe.setAttribute("currvar", (Expression) (pe.getAttribute("currvar")));
					}
					else {
						#postfixExpr.setAttribute("currvar", pe_expr);
						pe.setAttribute("currvar", pe_expr);
					}

					// store the original expr of pe (because "expression" attribute keeps changing as more dimensions are parsed)
					#postfixExpr.setAttribute("originalexpr", (Expression) (pe.getAttribute("expression")));
					pe.setAttribute("originalexpr", (Expression) (pe.getAttribute("expression")));
					
					#postfixExpr.setAttribute("arrvar", ((Expression) (pe.getAttribute("expression"))).toString_symbolic());
					pe.setAttribute("arrvar", ((Expression) (pe.getAttribute("expression"))).toString_symbolic());
					
					if(isAliasArr) {
						#postfixExpr.setAttribute("DOTheap", heapVar);
						pe.setAttribute("DOTheap", heapVar);
						
						#postfixExpr.setAttribute("DOTarr", aliasedVar);
						pe.setAttribute("DOTarr", aliasedVar);

						#postfixExpr.setAttribute("DOTidx", new Expression(arrIndex, arrSymbolic));
						pe.setAttribute("DOTidx", new Expression(arrIndex, arrSymbolic));
					}
					
					#postfixExpr.setAttribute("expression",arrExpr);
					pe.setAttribute("expression",arrExpr);

					if(pe.getAttribute("assignarr") != null)
						#postfixExpr.setAttribute("assignarr",pe.getAttribute("assignarr"));
				}	
				if(inLHSOfAssign) {
					assignArrInd = pe_expr.toString() + "+" + arrIndex;
					assignArrIndSymbolic = "plus(" + pe_expr.toString_symbolic() + "," + arrSymbolic + ")";
				}
		    }

			// -----------------------------------------------------
			// -----------------------------------------------------
			else { // ---------------- ARRAY IN LHS ----------------
			// -----------------------------------------------------
			// -----------------------------------------------------


				// -----------------------------------------------------
				// -----------------------------------------------------
				if(bracDepth == 1){ // ---------------------------------
				// -----------------------------------------------------
				// -----------------------------------------------------

					arrName = ((Expression)(pe.getAttribute("currvar"))).toString();
					Integer count = ArrToCount.get(arrName);
					if(count == null){
						count = new Integer(0);
					}
					artificialVar = ArrRefToString(arrName, count);
					count = new Integer(count.intValue() + 1);
					ArrToCount.put(arrName, count);

					
					// -----------------------------------------------------
					// -----------------------------------------------------
					if(arrayDimensions.peek() == 2) { // -------------------
					// -----------------------------------------------------
					// -----------------------------------------------------

						if(isAliasArr) {
							Vector<Integer> arrSize = aliasArraySize.get(aliasedVar);
							if(arrSize == null)
								FATAL.error("could not find size of array " + aliasedVar);

							assignArrInd = aliasedVar;
							assignArrIndSymbolic = "";
								for(int a = 0; a < multiDimArrayIndices_s.peek().size(); a++) assignArrIndSymbolic += "plus(";
							assignArrIndSymbolic += "plus(S" + aliasedVar;

							for(int a=0; a < multiDimArrayIndices.peek().size(); a++) {
								assignArrInd += "+(" + multiDimArrayIndices.peek().elementAt(a);
								assignArrIndSymbolic += ",";
									for(int b=a+1; b < arrSize.size(); b++) assignArrIndSymbolic += "mult(";
								assignArrIndSymbolic += multiDimArrayIndices_s.peek().elementAt(a);

								for(int b=a+1; b < arrSize.size(); b++) {
									assignArrInd += "*" + arrSize.elementAt(b);
									assignArrIndSymbolic += "," + arrSize.elementAt(b) + ")";
								}
								assignArrInd += ")";
								assignArrIndSymbolic += ")";
							}

							assignArrInd += "+(" + arrIndex + ")";
							assignArrIndSymbolic += "," + arrSymbolic + ")";
						}
						else {
							// change arrIndex also so that prefix INC/DEC will use it
							assignArrInd = "[" + assignArrInd + "," + arrIndex + "]";
							arrIndex = assignArrInd;
							assignArrIndSymbolic = "[" + assignArrIndSymbolic + "," + arrSymbolic + "]";
							arrSymbolic = assignArrIndSymbolic;
						}

						Expression arrExpr = (Expression) (#postfixExpr.getAttribute("expression"));
						arrExpr.addArrayReference(((Expression) (be.getAttribute("expression"))).getAllArrayReference());

						if(inLHSOfShorthandAssign) {
							String v = Factory().getPrevVarName((String)pe.getAttribute("vartext"));
							count = ArrToCount.get(v);
							if(count == null){
								count = new Integer(0);
							}
							artificialVar = ArrRefToString(v, count);
							count = new Integer(count.intValue() + 1);
							ArrToCount.put(v, count);
							Expression prevExpr = (Expression) (#postfixExpr.getAttribute("expression"));
							String arrayRef = "ref(" + Factory().getPrevVarName(v) + ",[";
							String symbStr = "ref(" + Factory().getSymbolicPrevVarName(v) + ",[";
							for(int d=0; d < multiDimArrayIndices.peek().size(); d++) {
								arrayRef += multiDimArrayIndices.peek().elementAt(d) + ",";
								symbStr += multiDimArrayIndices_s.peek().elementAt(d) + ",";
							}
							arrayRef += ((Expression) (be.getAttribute("expression"))).toString() + "]," + artificialVar + ")";
							symbStr += ((Expression) (be.getAttribute("expression"))).toString_symbolic() + "])";

							// remove the last reference and add the remaining ones to the current expression
							prevExpr.removeLatestReference();
							arrExpr.addArrayReference(prevExpr.getAllArrayReference());

							shorthandRef = artificialVar;
							shorthandRef_s = symbStr;
							arrExpr.addArrayReference(arrayRef);
						}

						multiDimArrayIndices.peek().add(((Expression)(be.getAttribute("expression"))).toString());
						multiDimArrayIndices_s.peek().add(((Expression)(be.getAttribute("expression"))).toString_symbolic());

						#postfixExpr.setAttribute("expression", arrExpr);
						pe.setAttribute("expression", arrExpr);
						if(pe.getAttribute("assignarr") == null)
							#postfixExpr.setAttribute("assignarr",pe.getAttribute("vartext"));
						else
							#postfixExpr.setAttribute("assignarr",pe.getAttribute("assignarr"));
					}

					// -----------------------------------------------------
					// -----------------------------------------------------
					else if(arrayDimensions.peek() > 2) { // ---------------
					// -----------------------------------------------------
					// -----------------------------------------------------
						if(isAliasArr) {
							Vector<Integer> arrSize = aliasArraySize.get(aliasedVar);
							if(arrSize == null)
								FATAL.error("could not find size of array " + aliasedVar);

							assignArrInd = aliasedVar;
							assignArrIndSymbolic = "";
								for(int a = 0; a < multiDimArrayIndices_s.peek().size(); a++) assignArrIndSymbolic += "plus(";
							assignArrIndSymbolic += "plus(S" + aliasedVar;

							for(int a=0; a < multiDimArrayIndices.peek().size(); a++) {
								assignArrInd += "+(" + multiDimArrayIndices.peek().elementAt(a);
								assignArrIndSymbolic += ",";
									for(int b=a+1; b < arrSize.size(); b++) assignArrIndSymbolic += "mult(";
								assignArrIndSymbolic += multiDimArrayIndices_s.peek().elementAt(a);

								for(int b=a+1; b < arrSize.size(); b++) {
									assignArrInd += "*" + arrSize.elementAt(b);
									assignArrIndSymbolic += "," + arrSize.elementAt(b) + ")";
								}
								assignArrInd += ")";
								assignArrIndSymbolic += ")";
							}

							assignArrInd += "+(" + arrIndex + ")";
							assignArrIndSymbolic += "," + arrSymbolic + ")";
						}
						else {
							// change arrIndex also so that prefix INC/DEC will use it
							assignArrInd = assignArrInd.substring(0, assignArrInd.length() -1) + "," + arrIndex + "]";
							arrIndex = assignArrInd;
							assignArrIndSymbolic = assignArrIndSymbolic.substring(0, assignArrIndSymbolic.length() -1) + "," + arrSymbolic + "]";
							arrSymbolic = assignArrIndSymbolic;
						}

						// add to multi dim indices, even if it's just going to be single dim array
						multiDimArrayIndices.peek().add(((Expression)be.getAttribute("expression")).toString());
						multiDimArrayIndices_s.peek().add(((Expression)be.getAttribute("expression")).toString_symbolic());

						Expression arrExpr = (Expression) (#postfixExpr.getAttribute("expression"));
						arrExpr.addArrayReference(((Expression) (be.getAttribute("expression"))).getAllArrayReference());

						#postfixExpr.setAttribute("expression", arrExpr);
						pe.setAttribute("expression", arrExpr);
						if(pe.getAttribute("assignarr") == null)
							#postfixExpr.setAttribute("assignarr",pe.getAttribute("vartext"));
						else
							#postfixExpr.setAttribute("assignarr",pe.getAttribute("assignarr"));
					}

					// -----------------------------------------------------
					// -----------------------------------------------------
					else { // -------- arrayDimensions.peek() == 1 ---------
					// -----------------------------------------------------
					// -----------------------------------------------------
						String arrayRef, symbStr;
						if(isAliasArr) {
							String idx_var = insert_intermediate_index_var(aliasedVar + "+" + ((Expression)be.getAttribute("expression")).toString(),
													"plus(S" + aliasedVar + "," + ((Expression)be.getAttribute("expression")).toString_symbolic() + ")");
							String idx_nv = !OPTIONS.COMPILE_IDX_VARS? aliasedVar + "+" + ((Expression)be.getAttribute("expression")).toString() :
											(idx_var_nextNameNeeded()? Factory().getNextVarName(idx_var) : Factory().getCurrVarName(idx_var));
							String idx_symbnv = !OPTIONS.COMPILE_IDX_VARS?
												"plus(S" + aliasedVar + "," + ((Expression)be.getAttribute("expression")).toString_symbolic() + ")" :
												(idx_var_nextNameNeeded()? Factory().getSymbolicNextVarName(idx_var) : Factory().getSymbolicCurrVarName(idx_var));

							assignArrInd = aliasedVar + "+" + arrIndex;
							assignArrIndSymbolic = "plus(S" + aliasedVar + "," + arrSymbolic + ")";
							arrayRef = "ref(" + heapVar + "," + /*aliasedVar + "+" + ((Expression) be.getAttribute("expression")).toString()*/ idx_nv + "," +
											artificialVar + ")";
							arrIndex = aliasedVar + "+" + ((Expression) be.getAttribute("expression")).toString();
							symbStr = "ref(S" + heapVar + "," /*plus(S" + aliasedVar + "," + ((Expression) be.getAttribute("expression")).toString_symbolic() + "))"*/
										+ idx_symbnv + ")";
							arrSymbolic = "plus(S" + aliasedVar + "," + ((Expression) be.getAttribute("expression")).toString_symbolic() + ")";
						}
						else {
							arrayRef = "ref(" + pe_expr.toString() 
													+ "," + ((Expression) be.getAttribute("expression")).toString() + "," + artificialVar + ")";
							symbStr = "ref(" + pe_expr.toString_symbolic() 
													+ "," + ((Expression) be.getAttribute("expression")).toString_symbolic() + ")";
							assignArrInd = arrIndex;
							assignArrIndSymbolic = arrSymbolic;
						}
						Variable t_var = new Variable(bvar);
						assignArrInd_replace = t_var.toString();
						assignArrIndSymbolic_replace = t_var.getSymbolicCurrentName();
						
						Expression arrExpr;
						if(ptrOnLHS) {
							String v = Factory().getPrevVarName((String)pe.getAttribute("vartext"));
							count = ArrToCount.get(v);
							if(count == null){
								count = new Integer(0);
							}
							artificialVar = ArrRefToString(v, count);
							count = new Integer(count.intValue() + 1);
							ArrToCount.put(v, count);
							arrayRef = "ref(" + v + "," + ((Expression) be.getAttribute("expression")).toString() + "," + artificialVar + ")";
							symbStr = "ref(" + pe_expr.toString_symbolic()
													+ "," + ((Expression) be.getAttribute("expression")).toString_symbolic() + ")";
							arrExpr = new Expression(artificialVar, symbStr);
							arrExpr.addArrayReference(arrayRef);
						}
						else {
							arrExpr = new Expression(artificialVar, symbStr);
							arrExpr.addArrayReference(arrayRef);
						}
						arrExpr.addArrayReference(((Expression) (be.getAttribute("expression"))).getAllArrayReference());

						if(inLHSOfShorthandAssign) {
							String v = Factory().getPrevVarName((String)pe.getAttribute("vartext"));
							count = ArrToCount.get(v);
							if(count == null){
								count = new Integer(0);
							}
							artificialVar = ArrRefToString(v, count);
							count = new Integer(count.intValue() + 1);
							ArrToCount.put(v, count);
							arrayRef = "ref(" + v + "," + ((Expression) be.getAttribute("expression")).toString() + "," + artificialVar + ")";
							symbStr = "ref(" + pe_expr.toString_symbolic()
													+ "," + ((Expression) be.getAttribute("expression")).toString_symbolic() + ")";
							shorthandRef = artificialVar;
							shorthandRef_s = symbStr;
							arrExpr.addArrayReference(arrayRef);
						}

						// add to multi dim indices, even if it's just going to be single dim array
						multiDimArrayIndices.peek().add(((Expression)be.getAttribute("expression")).toString());
						multiDimArrayIndices_s.peek().add(((Expression)be.getAttribute("expression")).toString_symbolic());

						// store the original expression because "expression" attribute keeps changing as more dimensions are parsed.
						#postfixExpr.setAttribute("originalexpr", pe.getAttribute("expression"));
						pe.setAttribute("originalexpr", pe.getAttribute("expression"));

						#postfixExpr.setAttribute("expression", arrExpr);
						pe.setAttribute("expression", arrExpr);
						#postfixExpr.setAttribute("currvar",pe.getAttribute("currvar"));
						#postfixExpr.setAttribute("vartext",pe.getAttribute("vartext"));
						if(pe.getAttribute("assignarr") == null)
							#postfixExpr.setAttribute("assignarr",pe.getAttribute("vartext"));
						else
							#postfixExpr.setAttribute("assignarr",pe.getAttribute("assignarr"));

						if(isAliasArr) {
							#postfixExpr.setAttribute("DOTheap", heapVar);
							pe.setAttribute("DOTheap", heapVar);

							#postfixExpr.setAttribute("DOTarr", aliasedVar);
							pe.setAttribute("DOTarr", aliasedVar);

							#postfixExpr.setAttribute("DOTidx", be.getAttribute("expression"));
							pe.setAttribute("DOTidx", be.getAttribute("expression"));
						}
					}
				}

				// -----------------------------------------------------
				// -----------------------------------------------------
				else { // -------------- bracDepth > 1 -----------------
				// -----------------------------------------------------
				// -----------------------------------------------------

					arrName = ((Expression)(pe.getAttribute("currvar"))).toString();
					Integer count = ArrToCount.get(arrName);
					if(count == null){
						count = new Integer(0);
					}
					artificialVar = ArrRefToString(arrName, count);
					count = new Integer(count.intValue() + 1);
					ArrToCount.put(arrName, count);

					// -----------------------------------------------------
					// -----------------------------------------------------
					if(arrayDimensions.peek() > 1) { // --------------------
					// -----------------------------------------------------
					// -----------------------------------------------------
						Expression prevExpr = (Expression) (#postfixExpr.getAttribute("expression"));
						String arrayRef, symbStr;

						if(isAliasArr) {
							Vector<Integer> arrSize = aliasArraySize.get(aliasedVar);
							if(arrSize == null)
								FATAL.error("could not find size of array " + aliasedVar);

							String _arrayRef, _symbStr;
							_arrayRef = aliasedVar;
							_symbStr = "";
								for(int a = 0; a < multiDimArrayIndices_s.peek().size(); a++) _symbStr += "plus(";
							_symbStr += "plus(S" + aliasedVar;

							for(int a=0; a < multiDimArrayIndices.peek().size(); a++) {
								_arrayRef += "+(" + multiDimArrayIndices.peek().elementAt(a);
								_symbStr += ",";
									for(int b=a+1; b < arrSize.size(); b++) _symbStr += "mult(";
								_symbStr += multiDimArrayIndices_s.peek().elementAt(a);

								for(int b=a+1; b < arrSize.size(); b++) {
									_arrayRef += "*" + arrSize.elementAt(b);
									_symbStr += "," + arrSize.elementAt(b) + ")";
								}
								_arrayRef += ")";
								_symbStr += ")";
							}

							_arrayRef += "+(" + arrIndex + ")";
							_symbStr += "," + arrSymbolic + "))";

							String idx_var = insert_intermediate_index_var(_arrayRef, _symbStr);
							String idx_nv = !OPTIONS.COMPILE_IDX_VARS? _arrayRef :
											(idx_var_nextNameNeeded()? Factory().getNextVarName(idx_var) : Factory().getCurrVarName(idx_var));
							String idx_symbnv = !OPTIONS.COMPILE_IDX_VARS? _symbStr :
												(idx_var_nextNameNeeded()? Factory().getSymbolicNextVarName(idx_var) : Factory().getSymbolicCurrVarName(idx_var));

							arrayRef = "ref(" + heapVar + "," + idx_nv + ")";
							symbStr = "ref(S" + heapVar + "," + idx_symbnv + ")";
						}
						else {
							// change arrIndex also so that prefix INC/DEC will use it
							arrayRef = "ref(" + pe_expr.toString() + ",[";
							arrIndex = "[";
							symbStr = "ref(" + pe_expr.toString_symbolic() + ",[";
							arrSymbolic = "[";

							for(int d=0; d < multiDimArrayIndices.peek().size(); d++) {
								arrayRef += multiDimArrayIndices.peek().elementAt(d) + ",";
								arrIndex += multiDimArrayIndices.peek().elementAt(d) + ",";
								symbStr += multiDimArrayIndices_s.peek().elementAt(d) + ",";
								arrSymbolic += multiDimArrayIndices_s.peek().elementAt(d) + ",";
							}
							arrayRef += ((Expression)(be.getAttribute("expression"))).toString() + "]," + artificialVar + ")";
							arrIndex += ((Expression)(be.getAttribute("expression"))).toString() + "]";
							symbStr += ((Expression)(be.getAttribute("expression"))).toString_symbolic() + "])";
							arrSymbolic += ((Expression)(be.getAttribute("expression"))).toString_symbolic() + "]";
						}

						multiDimArrayIndices.peek().add(((Expression)(be.getAttribute("expression"))).toString());
						multiDimArrayIndices_s.peek().add(((Expression)(be.getAttribute("expression"))).toString_symbolic());

						// remove the last reference and add the remaining ones to the current expression
						Expression arrExpr = new Expression(artificialVar, symbStr);
						prevExpr.removeLatestReference();
						arrExpr.addArrayReference(prevExpr.getAllArrayReference());
						arrExpr.addArrayReference(pe_expr.getAllArrayReference());
						arrExpr.addArrayReference(((Expression) (be.getAttribute("expression"))).getAllArrayReference());
						arrExpr.addArrayReference(arrayRef);

						#postfixExpr.setAttribute("expression",arrExpr);
						pe.setAttribute("expression", arrExpr);
					}

					// -----------------------------------------------------
					// -----------------------------------------------------
					else { // ------- arrayDimensions.peek() <= 1 ---------
					// -----------------------------------------------------
					// -----------------------------------------------------
						String arrayRef, symbStr;
						if(isAliasArr) {
							String idx_var = insert_intermediate_index_var(aliasedVar + "+" + ((Expression)be.getAttribute("expression")).toString(),
												"plus(S" + aliasedVar + "," + ((Expression)be.getAttribute("expression")).toString_symbolic()+")");
							String idx_nv = !OPTIONS.COMPILE_IDX_VARS? aliasedVar + "+" + ((Expression)be.getAttribute("expression")).toString() :
											(idx_var_nextNameNeeded()? Factory().getNextVarName(idx_var) : Factory().getCurrVarName(idx_var));
							String idx_symbnv = !OPTIONS.COMPILE_IDX_VARS?
												"plus(S" + aliasedVar + "," + ((Expression)be.getAttribute("expression")).toString_symbolic()+")" :
												(idx_var_nextNameNeeded()? Factory().getSymbolicNextVarName(idx_var) : Factory().getSymbolicCurrVarName(idx_var));

							arrayRef = "ref(" + heapVar + "," + /*aliasedVar + "+" + ((Expression) be.getAttribute("expression")).toString()*/ idx_nv + "," +
												artificialVar + ")";
							arrIndex = aliasedVar + "+" + ((Expression) be.getAttribute("expression")).toString();
							symbStr = "ref(S" + heapVar + "," /*plus(S" + aliasedVar + "," + ((Expression) be.getAttribute("expression")).toString_symbolic() + "))"*/
											+ idx_symbnv + ")";
							arrSymbolic = "plus(S" + aliasedVar + "," + ((Expression) be.getAttribute("expression")).toString_symbolic() + ")";
						}
						else {
							arrayRef = "ref(" + pe_expr.toString() 
													+ "," + ((Expression) be.getAttribute("expression")).toString() + "," + artificialVar + ")";
							symbStr = "ref(" + pe_expr.toString_symbolic() 
													+ "," + ((Expression) be.getAttribute("expression")).toString_symbolic() + ")";
						}
						Expression arrExpr = new Expression(artificialVar, symbStr);

						multiDimArrayIndices.peek().add(((Expression) (be.getAttribute("expression"))).toString());
						multiDimArrayIndices_s.peek().add(((Expression) (be.getAttribute("expression"))).toString_symbolic());

						// new, passing array reference up
						arrExpr.addArrayReference(pe_expr.getAllArrayReference());
						arrExpr.addArrayReference(((Expression) (be.getAttribute("expression"))).getAllArrayReference());
						arrExpr.addArrayReference(arrayRef);

						// store the original expression because "expression" attribute keeps changing as more dimensions are parsed.
						#postfixExpr.setAttribute("originalexpr", pe.getAttribute("expression"));
						pe.setAttribute("originalexpr", pe.getAttribute("expression"));

						#postfixExpr.setAttribute("expression", arrExpr);
						pe.setAttribute("expression", arrExpr);
						#postfixExpr.setAttribute("vartext", pe.getAttribute("vartext"));
					}
				}
			}
			bracDepth--;
			int numDims = arrayDimensions.pop() + 1;
			arrayDimensions.push(numDims);
			if(pe.getAttribute("aliasexpr") != null)
				#postfixExpr.setAttribute("aliasexpr", pe.getAttribute("aliasexpr"));
		}
                    | INC
                {
					if(Factory().inCondition)
						FATAL.error("incrementation within block condition! in " + Factory().getFuncName());

                    ClauseFactory factory = Factory();

					// pe may get changed
					Expression expr = (Expression) pe.getAttribute("expression");
                    String vartext = (String)(pe.getAttribute("vartext"));
                    String exstr;
                    String symbstr;

                    String v = factory.getCurrVarName(vartext);
                    String symbv = factory.getSymbolicCurrVarName(vartext);
                    String nv = factory.getNextVarName(vartext);
                    String symbnv = factory.getSymbolicNextVarName(vartext);

					if(!OPTIONS.INCLUDE_ARRAY_CONSTRAINTS && updatingArray) {
						Expression toAdd = new Expression("_", "_");
						toAdd.addArrayReference(expr.getAllArrayReference());
						#postfixExpr.setAttribute("incrementedExpr", toAdd);
						#postfixExpr.setAttribute("expression", toAdd);
						#postfixExpr.setAttribute("vartext", vartext);
						pe.setAttribute("expression", toAdd);
					}
                    else if (inStatement) {
						Expression toAdd;
						if(!nestedCallExprs.empty())
							toAdd = new Expression(v + "-1", "minus(" + symbv + ",1)");
						else
							toAdd = new Expression(v,symbv);

						// Vijay - deleted !arrOnLHS && from conditions
						if (!updatingArray) {
							exstr = (nv + "=" + expr.toString() + "+1");
							symbstr = "assign(" + symbnv + ",plus(" + expr.toString_symbolic() + ",1))";
						} else {
							String index = (arrowIndexForINC == null)? arrIndex:arrowIndexForINC;
							String Sindex = (SarrowIndexForINC == null)? arrSymbolic:SarrowIndexForINC;
							arrowIndexForINC = null;
							SarrowIndexForINC = null;

							String idx_var = insert_intermediate_index_var(index, Sindex);
							String idx_nv = !OPTIONS.COMPILE_IDX_VARS? index :
											(idx_var_nextNameNeeded()? Factory().getNextVarName(idx_var) : Factory().getCurrVarName(idx_var));
							String idx_symbnv = !OPTIONS.COMPILE_IDX_VARS? Sindex :
												(idx_var_nextNameNeeded()? Factory().getSymbolicNextVarName(idx_var) : Factory().getSymbolicCurrVarName(idx_var));

							exstr = nv + "=" + "upd("
										+ ((Expression) pe.getAttribute("currvar")).toString() + ","
										+ /*index*/ idx_nv + "," + expr.toString() + "+1"
										+ ")";
							symbstr = "arrassign(" + symbnv + ","
										+ "upd(" + ((Expression)pe.getAttribute("currvar")).toString_symbolic()
										+ "," + /*Sindex*/ idx_symbnv + ",plus("
										+ expr.toString_symbolic() + ",1)))";
							if(!nestedCallExprs.empty())
								toAdd = new Expression(expr.toString() + "-1", "minus(" + expr.toString_symbolic() + ",1)");
							else
								toAdd = new Expression(expr.toString(), expr.toString_symbolic());
							
						}
						// bug found, incorrect semantics for incrementation
						// Expression toAdd = new Expression(Expression.CONSTRAINT, exstr, symbstr);
						// see unary expression for constrast
							
						toAdd.addArrayReference(expr.getAllArrayReference());
						#postfixExpr.setAttribute("incrementedExpr", new Expression(exstr, symbstr));
						#postfixExpr.setAttribute("expression", toAdd);
						#postfixExpr.setAttribute("vartext", vartext);
						pe.setAttribute("expression", toAdd);

						// dealing with for loops
						if (isDelayed)
						{
							Factory().delayedClauseRefVar(vartext);
								if(Factory().inAssignGroup)
									assignGroupVars.add(vartext);
							
								Factory().addDelayedConstraint(exstr);					
								Factory().addDelayedSymbolicConstraint(symbstr);
								// array reference is passed up
								Factory().addDelayedArrayReference(expr.getAllArrayReference());
						}
						else
						{
							Factory().clauseRefVar(currClause, vartext);
							if(Factory().inAssignGroup)
								assignGroupVars.add(vartext);

							Factory().clauseCondVar(vartext);
							Factory().addConstraint(currClause, exstr);
							Factory().addSymbolicConstraint(currClause, symbstr);
							Factory().addArrayReference(currClause, expr.getAllArrayReference());
						}
               	    }
					// Vijay - commented this line since it caused bugs. Cannot think of why arrOnLHS should be set to false 
					// once we're done processing a postfix incrementation.
                    // arrOnLHS = false;
					updatingArray = false;
                }
                    | DEC
                { 
					if(Factory().inCondition)
						FATAL.error("decrementation within block condition! in " + Factory().getFuncName());

                    ClauseFactory factory = Factory();

					// pe may get changed
					Expression expr = (Expression) pe.getAttribute("expression");
                    String vartext = (String)(pe.getAttribute("vartext"));
                    String exstr;
                    String symbstr;

                    String v = factory.getCurrVarName(vartext);
                    String symbv = factory.getSymbolicCurrVarName(vartext);
                    String nv = factory.getNextVarName(vartext);
                    String symbnv = factory.getSymbolicNextVarName(vartext);

					if(!OPTIONS.INCLUDE_ARRAY_CONSTRAINTS && updatingArray) {
						Expression toAdd = new Expression("_", "_");
						toAdd.addArrayReference(expr.getAllArrayReference());
						#postfixExpr.setAttribute("incrementedExpr", toAdd);
						#postfixExpr.setAttribute("expression", toAdd);
						#postfixExpr.setAttribute("vartext", vartext);
						pe.setAttribute("expression", toAdd);
					}
                    else if (inStatement) {
						Expression toAdd;
						if(!nestedCallExprs.empty())
							toAdd = new Expression(v + "+1", "plus(" + symbv + ",1)");
						else
							toAdd = new Expression(v,symbv);
						// Vijay - deleted !arrOnLHS && from conditions
						if (!updatingArray) {
							exstr = (nv + "=" + expr.toString() + "-1");
							symbstr = "assign(" + symbnv + ",minus(" + expr.toString_symbolic() + ",1))";
						} else {
							String index = (arrowIndexForINC == null)? arrIndex:arrowIndexForINC;
							String Sindex = (SarrowIndexForINC == null)? arrSymbolic:SarrowIndexForINC;
							arrowIndexForINC = null;
							SarrowIndexForINC = null;

							String idx_var = insert_intermediate_index_var(index, Sindex);
							String idx_nv = !OPTIONS.COMPILE_IDX_VARS? index :
											(idx_var_nextNameNeeded()? Factory().getNextVarName(idx_var) : Factory().getCurrVarName(idx_var));
							String idx_symbnv = !OPTIONS.COMPILE_IDX_VARS? Sindex :
												(idx_var_nextNameNeeded()? Factory().getSymbolicNextVarName(idx_var) : Factory().getSymbolicCurrVarName(idx_var));

							exstr = nv + "=" + "upd("
										+ ((Expression) pe.getAttribute("currvar")).toString() + ","
										+ /*index*/ idx_nv + "," + expr.toString() + "-1"
										+ ")";
							symbstr = "arrassign(" + symbnv + ","
										+ "upd(" + ((Expression)pe.getAttribute("currvar")).toString_symbolic()
										+ "," + /*Sindex*/ idx_symbnv + ",minus("
										+ expr.toString_symbolic() + ",1)))";
							if(!nestedCallExprs.empty())
								toAdd = new Expression(expr.toString() + "+1", "plus(" + expr.toString_symbolic() + ",1)");
							else
								toAdd = new Expression(expr.toString(), expr.toString_symbolic());
							
						}
						// bug found, incorrect semantics for incrementation
						// Expression toAdd = new Expression(Expression.CONSTRAINT, exstr, symbstr);
						// see unary expression for constrast
							
							
						toAdd.addArrayReference(expr.getAllArrayReference());
						#postfixExpr.setAttribute("incrementedExpr", new Expression(exstr, symbstr));
						#postfixExpr.setAttribute("expression", toAdd);
						#postfixExpr.setAttribute("vartext", vartext);
						pe.setAttribute("expression", toAdd);

						// dealing with for loops
						if (isDelayed)
						{
							Factory().delayedClauseRefVar(vartext);
								if(Factory().inAssignGroup)
									assignGroupVars.add(vartext);
							
								Factory().addDelayedConstraint(exstr);					
								Factory().addDelayedSymbolicConstraint(symbstr);
								// array reference is passed up
								Factory().addDelayedArrayReference(expr.getAllArrayReference());
						}
						else
						{
							Factory().clauseRefVar(currClause, vartext);
							if(Factory().inAssignGroup)
								assignGroupVars.add(vartext);

							Factory().clauseCondVar(vartext);
							Factory().addConstraint(currClause, exstr);
							Factory().addSymbolicConstraint(currClause, symbstr);
							Factory().addArrayReference(currClause, expr.getAllArrayReference());
						}
               	    }
					// Vijay - commented this line since it caused bugs. Cannot think of why arrOnLHS should be set to false 
					// once we're done processing a postfix incrementation.
                    // arrOnLHS = false;
					updatingArray = false;
                }
                    )+
                )
        ;

primaryExpr
{
	parseNode = #primaryExpr;
}
        :       i:ID     { #primaryExpr.setAttribute("plaintext", i.getText()); }
        {
            ClauseFactory factory = Factory();

	    /* Vijay - Adding condition variable to block */
            String var = i.getText();
			String heapVar = null;
			if(var.compareTo("TRACER_NONDET") == 0)
				var = "_";
            if(var.startsWith("CIL___tmp")) {
                if(inAssign && inLHSOfAssign) {
                    String newvar = tmpCilMap.get(var);
                    if(newvar == null) {
                        newvar = getNewTmpCilVar();
                        tmpCilMap.put(var, newvar);
                    }
                    var = newvar;
                }
                else {
                    String newvar = tmpCilMap.get(var);
                    if(newvar == null)
                        FATAL.error("812993");
                    tmpCilMap.remove(var);
                    var = newvar;
                    clearTmpCilVar();
                }
            }
			if(var.compareTo("NULL") == 0) { // if the "var" is NULL, treat it as the Number 0
				if (inDeclaration)
					currentInitializerValue = 0;

				#primaryExpr.setAttribute("vartext", "0");
				#primaryExpr.setAttribute("expression",	new Expression("0", "0"));
				#primaryExpr.setAttribute("currvar", new Expression("0", "0"));
				
			}

			else {
				if(!PREPROCESS && OPTIONS.WP_COMPILATION && Factory().getFuncName().compareTo("func_main") == 0
                        && (liftedVars.contains(var) || var.startsWith("CIL_Tmp")) && !IsAddrVar(factory.getFuncName(), var))
					var = "func_main$VAR$" + var + "$";
				if(varScopes.containsKey(var))
					var = var + "$__" + varScopes.get(var).peek() + "$";

				int isAddrVar = 0;
				if(IsAddrVar(factory.getFuncName(), var)) {
					var = getAddrVar(factory.getFuncName(), var);
					isAddrVar = 1;
					/* Basically, the issue here is that sometimes for arrays, the pointer analysis prints using & and sometimes not.
					 * For eg, in (SAFETY) test-alias-3.c, it prints [main.p, ..., &(main.a)] (a is an array) but in funcall-7.c it prints
					 * [... main.c, bar.x, ...] (x is an array). I'm not sure when it prints what because it's not written by us.
					 * But from examples, I *think* it prints with & if the array has been referenced using its name directly (like, p = a where a is the array)
					 * SO what I'm doing is this: first get the heap of the &-referenced array, if any. If there is no such heap (i.e, heap is H$0$)
					 * then, get the heap of the array w/o using &. This should either give a proper heap for the array or again give H$0$. Suppose
					 * if the &-referenced array itself has a proper heap, then that heap is assumed to be the array's heap and the 2nd step is not
					 * performed. Similarly for "GLOBAL" too below. Hopefully this is correct...
					 */
					heapVar = PAHelper.getHeap2(factory.getFuncName(), i.getText()); // getHeap2 is just getHeap for &-vars
					if(heapVar.compareTo("H$0$") == 0)
						heapVar = PAHelper.getHeap(factory.getFuncName(), i.getText());
					/*if(PreprocessInfo.isAddrArr(factory.getFuncName(), i.getText()))
						heapVar = PAHelper.getHeap(factory.getFuncName(), i.getText());
					else
						heapVar = PAHelper.getHeap2(factory.getFuncName(), i.getText());*/
				}
				else if(IsAddrVar("GLOBAL", var)) {
					var = getAddrVar("GLOBAL", var);
					isAddrVar = 2;
					heapVar = PAHelper.getHeap2("GLOBAL", i.getText());
					if(heapVar.compareTo("H$0$") == 0)
						heapVar = PAHelper.getHeap("GLOBAL", i.getText());
					/*if(PreprocessInfo.isAddrArr("GLOBAL", i.getText()))
						heapVar = PAHelper.getHeap("GLOBAL", i.getText());
					else
						heapVar = PAHelper.getHeap2("GLOBAL", i.getText());*/
				}

				if(var != null) Factory().clauseCondVar(var);
				if ( inStatement || (inFunction && inDeclaration)) 
				{
					/*
					 * ---------------------------------
					 * set the currvar attribute
					 * ---------------------------------
					*/
					if(inAssign && !inLHSOfAssign && var.compareTo(assignLHSVar) == 0)
						#primaryExpr.setAttribute("currvar", new Expression(
								factory.getPrevVarName(var),
								factory.getSymbolicPrevVarName(var)));
					else {
						if(isAddrVar == 0)
							#primaryExpr.setAttribute("currvar", new Expression(
									factory.getCurrVarName(var),
									factory.getSymbolicCurrVarName(var)));
						else {
							// supporting compilation of normal variables into their respective addrVars
							// if they are referenced using &.
							if(inLHSOfAssign || possibleINC)
								#primaryExpr.setAttribute("currvar", new Expression(
										factory.getCurrVarName(heapVar),
										factory.getSymbolicCurrVarName(heapVar)));
							else {
								String arrName = factory.getCurrVarName(heapVar);
								String symbArrName = factory.getSymbolicCurrVarName(heapVar);
								String arrIndex = factory.getCurrVarName(var);
								String arrSymbolic = factory.getSymbolicCurrVarName(var);
								String artificialVar;
								Integer count = ArrToCount.get(arrName);
								if(count == null)
								{
									count = new Integer(0);
								}
								artificialVar = ArrRefToString(arrName, count);
								count = new Integer(count.intValue() + 1);
								ArrToCount.put(arrName, count);
								String arrayRef = "ref(" + arrName + "," + arrIndex + "," + artificialVar + ")";
								String symbStr = "ref(" + symbArrName + "," + arrSymbolic + ")";

								Expression arrExpr = new Expression(artificialVar, symbStr);
								arrExpr.addArrayReference(arrayRef);
								#primaryExpr.setAttribute("currvar", arrExpr);
							}
						}
					}

					/*
					 * ---------------------------------
					 * set assignLHSVar
					 * ---------------------------------
					*/
					if(inLHSOfAssign && assignLHSVar.compareTo("") == 0) 
					{
						if(isAddrVar == 0) {
							if(ptrOnLHS) {
								String fun = Factory().getFuncName();
								String heap = "";

								if(Factory().getVariables().contains(new Variable(var))
										|| Factory().getArrayVariables().contains(new Variable(var)))
									heap = PAHelper.getHeap(fun, var);
								else
									heap = PAHelper.getHeap("GLOBAL", var);
								assignLHSVar = heap;
								assignLHSVar_forInput = var; // used only for deciding input variable
							}
							else
								assignLHSVar = var;
						}
						else
							assignLHSVar = heapVar;
					}


					/*
					 * ---------------------------------
					 * set the expression attribute
					 * ---------------------------------
					*/

					// if isAddrVar != 0 just set expression to be the heap of current var
					// normal cases (isAddrVar == 0) are already being handled properly.
					if(slicing && isAddrVar != 0) {
						#primaryExpr.setAttribute("expression", new Expression(heapVar, "S" + heapVar));
					}
					else if (nextVarsNeeded) // generally meaning we are on LHS of assignment
					{
						if(isAddrVar == 0)
							#primaryExpr.setAttribute("expression",
								new Expression(
									factory.getNextVarName(var),
									factory.getSymbolicNextVarName(var)));
						else {
							ptrOnLHS = true;
							updatingArray = true;
							#primaryExpr.setAttribute("assignarr", heapVar);
							assignArrInd = var;
							assignArrIndSymbolic = "S" + var;

							// all the work was done before for currvar, just use the same attribute for expression too
							#primaryExpr.setAttribute("expression", #primaryExpr.getAttribute("currvar"));
						}
					}
					// this variable is used by INC to avoid problems with setting nextVarsNeeded = true.
					// it also sets a couple of globals used by INC/DEC
					else if(possibleINC && isAddrVar != 0) {
						#primaryExpr.setAttribute("expression", new Expression(
							factory.getCurrVarName(var),
							factory.getSymbolicCurrVarName(var)));
					}
					else {
						// Vijay - if this var appears on LHS as well, get its previous name and not curr name
						// EDIT: ...PROVIDED it is not an array or pointer variable. because in that case, even if this var appears
						// on the LHS, we wouldn't have done getNextVarName(var) while parsing LHS. so we shouldn't do
						// getPrevVarName(var) now but rather getCurrVarName(var)
						if(inAssign && !inLHSOfAssign && var.compareTo(assignLHSVar) == 0 && !(arrOnLHS || ptrOnLHS))
								#primaryExpr.setAttribute("expression", new Expression(
									factory.getPrevVarName(var),
									factory.getSymbolicPrevVarName(var)));
						else {
							if(isAddrVar == 0 || (isAddrVar == 1 && PreprocessInfo.isAddrArr(factory.getFuncName(), i.getText())) ||
									(isAddrVar == 2 && PreprocessInfo.isAddrArr("GLOBAL", i.getText())))
								#primaryExpr.setAttribute("expression", new Expression(
										factory.getCurrVarName(var),
										factory.getSymbolicCurrVarName(var)));
							else
								// all the work was done before for currvar, just use the same attribute for expression too
								#primaryExpr.setAttribute("expression", #primaryExpr.getAttribute("currvar"));
						}
					}


					/*
					 * ---------------------------------
					 * set the vartext attribute
					 * ---------------------------------
					*/

					if(isAddrVar == 0) {
						#primaryExpr.setAttribute("vartext", var); 
					}
					else {
						#primaryExpr.setAttribute("aliasexpr", new Expression(var, "S" + var));
						#primaryExpr.setAttribute("aliasedvar", var);
						if(inLHSOfAssign || possibleINC) {
							#primaryExpr.setAttribute("vartext", heapVar);
						}
						else
							#primaryExpr.setAttribute("vartext", var); 
					}


					/*
					 * ---------------------------------
					 * set other attribute as needed
					 * ---------------------------------
					*/
					Variable v = new Variable(var);

					// if var is aliased, then set the aliasheap attribute to name of the var's heap
					if(isAddrVar != 0) {
						#primaryExpr.setAttribute("aliasheap", heapVar);
					}

					// check for the case x=a where a is an array. just set an attribute at this point, assignExpr will take care
					if(Factory().getArrayVariables().contains(v) || ClauseFactory.getGlobalArrayVariables().contains(v))
						#primaryExpr.setAttribute("arrayvar", var);
					possibleINC = false;
				}
			}
        }
        |       n:Number  { #primaryExpr.setAttribute("plaintext", n.getText()); }
        { 
			String num = n.getText();

			// keep removing short-hand notations like 23L, 7254U etc, until you are left with the number alone
			Character lastChar = num.charAt(num.length() - 1);
			while(  (lastChar < 48) // < 0
				 || (lastChar > 57 && lastChar < 65) // > 9 and < A
				 || (lastChar > 70 && lastChar < 97) // > F and < a
				 || (lastChar > 102)) // > f
			{
				num = num.substring(0, num.length() - 1);
				lastChar = num.charAt(num.length() - 1);
			}

            if (inDeclaration)
				currentInitializerValue = Double.parseDouble(num) ; 

			if(num.startsWith("0x")) // hexadecimal number
				num = hexaToDecimal(num.substring(2)).toString();
			else if(num.startsWith("0") && num.compareTo("0") != 0 && num.indexOf(".") < 0) // octal number but make sure it's not "0" or "0.something"
				num = octalToDecimal(num.substring(1)).toString();
			
			#primaryExpr.setAttribute("vartext", num);
			#primaryExpr.setAttribute("expression",	new Expression(num, num));
			#primaryExpr.setAttribute("currvar", new Expression(num, num));
			
        }
        |       c:charConst { #primaryExpr.setAttribute("plaintext", c.getText()); }
				{ 
					#primaryExpr.setAttribute("expression", c.getAttribute("expression")); 
					#primaryExpr.setAttribute("currvar", c.getAttribute("expression")); 
					#primaryExpr.setAttribute("vartext", c.getAttribute("expression").toString()); 
				}
        |       s: stringConst { #primaryExpr.setAttribute("plaintext", s.getText()); }
				{
					#primaryExpr.setAttribute("expression", s.getAttribute("expression"));
					#primaryExpr.setAttribute("currvar", s.getAttribute("expression"));
					#primaryExpr.setAttribute("vartext", s.getAttribute("expression").toString());
				}

// JTC:
// ID should catch the enumerator
// leaving it in gives ambiguous err
//      | enumerator

        |       #( NExpressionGroup e:expr )  { #primaryExpr.setAttribute("plaintext", "(" + e.getAttribute("plaintext") + ")"); }
        {
			if(e.getAttribute("unkexpression") != null) { // if this is an unknown expression just set this expression and do nothing
				Expression e_obj = (Expression)(e.getAttribute("expression"));
				Expression ex = new Expression(e_obj.getType(), "(" + e_obj.toString() + ")", e_obj.toString_symbolic());
				ex.addArrayReference(e_obj.getAllArrayReference());
				#primaryExpr.setAttribute("expression", ex);
			}
			else {
				Expression e_obj = (Expression)(e.getAttribute("expression"));
				ClauseFactory factory = Factory();
				String vartext = (String) (e.getAttribute("vartext"));
				if(e.getAttribute("hasvar") != null)
					#primaryExpr.setAttribute("hasvar", e.getAttribute("hasvar"));

				if (e_obj.getType() == Expression.GENERAL) 
				{
					Expression ex = new Expression(e_obj.getType(), "(" + e_obj.toString() + ")", e_obj.toString_symbolic());

					ex.addArrayReference(e_obj.getAllArrayReference());
					#primaryExpr.setAttribute("expression", ex);

					// set currvar & vartext also, in case someone tries to assign to a variable within ( ) on the LHS -.-
					// currvar should be set to prevVarName because it would've been referenced already
					if(ptrOnLHS && vartext != null)
					{
						String fun = Factory().getFuncName();
						String heapVar = "";

						if(e.getAttribute("actualvar") != null)
							vartext = (String)e.getAttribute("actualvar");
						if(Factory().getVariables().contains(new Variable(vartext)) || Factory().getArrayVariables().contains(new Variable(vartext)))
							heapVar = PAHelper.getHeap(fun, vartext);
						else
							heapVar = PAHelper.getHeap("GLOBAL", vartext);
						#primaryExpr.setAttribute("currvar", new Expression(factory.getCurrVarName(heapVar), 
															factory.getSymbolicCurrVarName(heapVar)));
						#primaryExpr.setAttribute("vartext", heapVar);
						#primaryExpr.setAttribute("actualvar", vartext);
					}
					else
					{
						if(vartext != null)
						{
							if(currChainStructVar.compareTo("") != 0 && e.getAttribute("currvar") != null) { // struct chain, so set its currvar itself!
								// DEBUG.println(currChainStructVar + " " + vartext);
								// DEBUG.println("here");
								#primaryExpr.setAttribute("currvar", e.getAttribute("currvar"));
								// DEBUG.println("there");
							}
							else {
								#primaryExpr.setAttribute("currvar", 
									new Expression(factory.getCurrVarName(vartext), factory.getSymbolicCurrVarName(vartext)));
							}
							#primaryExpr.setAttribute("vartext", vartext);
						}
					}
				} 
				else 
				{
					Expression e_opp = (Expression)(e.getAttribute("opposite"));
					e_obj.addArrayReference(e_obj.getAllArrayReference());

					#primaryExpr.setAttribute("expression", e_obj);
					if(e_opp != null)
						#primaryExpr.setAttribute("opposite", e_opp);

					// set currvar & vartext also, in case someone tries to assign to a variable within ( ) on the LHS -.-
					// currvar should be set to prevVarName because it would've been referenced already
					if(ptrOnLHS && vartext != null)
					{
						String fun = Factory().getFuncName();
						String heapVar = "";

						if(e.getAttribute("actualvar") != null)
							vartext = (String)e.getAttribute("actualvar");
						if(Factory().getVariables().contains(new Variable(vartext)) || Factory().getArrayVariables().contains(new Variable(vartext)))
							heapVar = PAHelper.getHeap(fun, vartext);
						else
							heapVar = PAHelper.getHeap("GLOBAL", vartext);
						#primaryExpr.setAttribute("currvar", new Expression(factory.getCurrVarName(heapVar), 
																	factory.getSymbolicCurrVarName(heapVar)));
						#primaryExpr.setAttribute("vartext", heapVar);
						#primaryExpr.setAttribute("actualvar", vartext);
					}
					else
					{
						if(vartext != null)
						{
							#primaryExpr.setAttribute("currvar", 
												new Expression(factory.getCurrVarName(vartext), factory.getSymbolicCurrVarName(vartext)));
							#primaryExpr.setAttribute("vartext", vartext);
						}
					}
				}
				// pass other attributes forward
				if(e.getAttribute("aliasexpr") != null)
					#primaryExpr.setAttribute("aliasexpr", e.getAttribute("aliasexpr"));
				if(e.getAttribute("chainStructVar") != null)
					#primaryExpr.setAttribute("chainStructVar", e.getAttribute("chainStructVar"));
				if(e.getAttribute("arrayvar") != null)
					#primaryExpr.setAttribute("arrayvar", e.getAttribute("arrayvar"));
				if(e.getAttribute("assignarr") != null)
					#primaryExpr.setAttribute("assignarr", e.getAttribute("assignarr"));
				if(e.getAttribute("actualvar") != null)
					#primaryExpr.setAttribute("actualvar", e.getAttribute("actualvar"));
				if(e.getAttribute("chainstruct") != null)
					#primaryExpr.setAttribute("chainstruct", e.getAttribute("chainstruct"));
			}
        }
        ;

argExprList
{
	parseNode = #argExprList;
}
        :   
            {
                explist = new Vector<Expression>();
				opplist = new Vector<Expression> ();
				varlist = new Vector<String>();
				ref_expr = new Expression();
            }
                ( e:expr
            {
                Expression e_obj = (Expression)(e.getAttribute("expression"));
				Expression e_obj_opp = (Expression) (e.getAttribute("opposite"));
				String vartext = (String)(e.getAttribute("vartext"));


				// TO REVIEW: the test condition is to avoid a NullPointerException
				// It works for tested small examples but I'm not sure if there are
				// side effects (Jorge)
				if (e_obj != null) {
					if(vartext == null)
						vartext = e_obj.toString_symbolic();
					varlist.add(vartext);
					explist.add(e_obj);
					if(!nestedCallExprs.empty())
						nestedCallExprs.peek().add(e_obj);
					opplist.add(e_obj_opp);
					ref_expr.addArrayReference(e_obj.getAllArrayReference());
				}
			} 
					)+ 
				{
					#argExprList.setAttribute("arglist", explist);
					#argExprList.setAttribute("arglist_opp", opplist);
					#argExprList.setAttribute("expression", ref_expr);
					#argExprList.setAttribute("varlist", varlist);
				}
			;

protected
charConst
        :       c:CharLiteral
				{
					String s = c.getText().replaceAll("'", "");
					char [] ch_a = s.toCharArray();
					Integer ascii = null;
					try {
						if(ch_a.length == 1)
							ascii = (int) ch_a[0];
						else
							switch(ch_a[1]) {
								case 't': ascii = (int) '\t'; break;
								case 'b': ascii = (int) '\b'; break;
								case 'n': ascii = (int) '\n'; break;
								case 'r': ascii = (int) '\r'; break;
								case 'f': ascii = (int) '\f'; break;
								case '0': ascii = (int) '\0'; break;
								case '\\': ascii = (int) '\\'; break;
								case '\"': ascii = (int) '\"'; break;
								default: FATAL.error("improper escape sequence: " + "\\" + ch_a[1] + " at line: " + parseNode.getLineNum());
							}

						Expression ex = new Expression(ascii.toString(), ascii.toString());
						#charConst.setAttribute("expression", ex);
					}
					catch(Exception e) {
						FATAL.error("improper char literal " + c.getText() + " at line: " + parseNode.getLineNum());
					}
				}
        ;


protected
stringConst
        :       #(NStringSeq (e:StringLiteral)+)
				{
					Expression ex = new Expression(e.getText(), e.getText());
					if(e.getText().compareTo("\"$ret\"") == 0)
						#stringConst.setAttribute("expression", new Expression("ReturnValue", "SReturnValue"));
					else
						#stringConst.setAttribute("expression", new Expression("_", "_"));
				}
        ;


protected
intConst
        :       IntOctalConst
        |       LongOctalConst
        |       UnsignedOctalConst
        |       IntIntConst
        |       LongIntConst
        |       UnsignedIntConst
        |       IntHexConst
        |       LongHexConst
        |       UnsignedHexConst
        ;


protected
floatConst
        :       FloatDoubleConst
        |       DoubleDoubleConst
        |       LongDoubleConst
        ;
