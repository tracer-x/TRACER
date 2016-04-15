{
import java.io.*;
import antlr.CommonAST;
import antlr.DumpASTVisitor;
import java.util.*;
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
        //System.out.println("match("+ttype+"); cursor is "+t);
        super.match(t, ttype);
    }
    public void match(AST t, BitSet b) throws MismatchedTokenException {
        //System.out.println("match("+b+"); cursor is "+t);
        super.match(t, b);
    }
    protected void matchNot(AST t, int ttype) throws MismatchedTokenException {
        //System.out.println("matchNot("+ttype+"); cursor is "+t);
        super.matchNot(t, ttype);
    }
    public void traceIn(String rname, AST t) {
        traceDepth += 1;
        for (int x=0; x<traceDepth; x++) System.out.print(" ");
        super.traceIn(rname, t);   
    }
    public void traceOut(String rname, AST t) {
        for (int x=0; x<traceDepth; x++) System.out.print(" ");
        super.traceOut(rname, t);
        traceDepth -= 1;
    }
    public int getCurrPP () {
        return currPP ;
    }
    
    int traceDepth = 0;
    private Number currentInitializerValue ;
    private String currentID ;
    private boolean inDeclaration = false ;
    private boolean inStatement = false ;
    private boolean nextVarsNeeded = false ;
    private boolean inLHSOfAssign = false;
    private boolean inAssign = false;
    private boolean arrOnLHS = false;
    private boolean inParamDec = false;
    private int bracDepth = 0;
    private String assignArrInd;
    private int currPP = 0 ;
    private int currClause = 0 ;
    TreeMap<Pair, String> ArrRefToVar;
	TreeMap<String, Integer> ArrToCount;

	private int numCall = 0;
    private int numTempVar = 1;

    // List of expressions (function call arguments)
	private Vector<Expression> explist = null;

	private String structName = null;
	private boolean inStructDec = false;
	private boolean structVar = false;
	private int structMemInd = 0;
	private String structDec = "";

    // Added to distinguish syntactic components within and
    // outside of functions.
    private boolean inFunction = false;

    // Added to store global variables
	private Vector<Variable> globalVariables = new Vector<Variable>();

    // Flag to denote whether we're in switch statement
    private boolean inSwitch = false;

    // Stack to store the escape (break) program points, e.g.,
    // when breaking from while, for, switch, etc.
    private Stack<Integer> breakContext = new Stack<Integer>();

    // Start program point of switch statement
    private Stack<Integer> switchStartPP = new Stack<Integer>();

    // Exit program point of switch statement
    private int switchExitPP;

    // Switch expression placeholder
    private Stack<String> switchExpr = new Stack<String>();

    // Switch symbolic expression placeholder
    private Stack<String> switchSymbolicExpr = new Stack<String>();

    // The target program point of the last return statement
    private int lastReturnNextPP;

    // Start program point of while loop
    private Stack<Integer> whileStartPP = new Stack<Integer>();

    // Start program point of if conditional
    private Stack<Integer> ifStartPP = new Stack<Integer>();

    // End program point of the body of if conditional
    // The start of the "else" body should be this value + 1
    private Stack<Integer> ifBodyEndPP = new Stack<Integer>();

	private int currentFac = -1;
	public Vector<ClauseFactory> factories = new Vector<ClauseFactory>();
	
	public void initialize(){
		traceDepth = 0;
    	currentInitializerValue = 0;
    	String currentID = null;
    	inDeclaration = false ;
    	inStatement = false ;
    	nextVarsNeeded = false ;
    	inLHSOfAssign = false;
    	arrOnLHS = false;
    	inParamDec = false;
    	bracDepth = 0;
    	assignArrInd = null;
    	currPP = 0 ;

//        System.out.println(String.format("CurrPP: %d", currPP));

    	currClause = 0 ;
    	ArrRefToVar = null;
		ArrToCount = null;
		explist = null;

		numCall = 0;
        numTempVar = 1;

		structName = null;
		inStructDec = false;
		inAssign = false;
		structMemInd = 0;
		structDec = "";
		structVar = false;
		
		currentFac++;
		factories.add(new ClauseFactory());
        // System.out.println(String.format("Added Factory %d", currentFac));
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
	
	public String ArrRefToString(String ArrName, Integer count){
		return ArrName + "Ref" + count.toString();
	}
	public void addArrAccCons(ClauseFactory cf, TreeMap<Pair, String> ArrRefToVar,
								int CurrClause){
		Set<Pair> ks = ArrRefToVar.keySet();
		Iterator<Pair> itr = ks.iterator();
		Pair pair;
		String var, arr, index;
 
		while(itr.hasNext()){
			pair = itr.next();
			var = ArrRefToVar.get(pair);
			arr = (String)pair.a;
			index = (String)pair.b;
			String newCons = "acc("+arr+","+index+","+var+")";
			cf.addConstraint(CurrClause, newCons);
		}
	}
	public String getOpposite(String comparator){
		if(comparator.compareTo("<") == 0) return ">=";
		if(comparator.compareTo("<=") == 0) return ">";
		if(comparator.compareTo(">") == 0) return "<=";
		if(comparator.compareTo(">=") == 0) return "<";
		return comparator;
	}
	public void outputAll(PrintStream stream){
		Iterator<ClauseFactory> itr = factories.iterator();
        Iterator<ClauseFactory> itr1 = factories.iterator();
        Iterator<ClauseFactory> itr2 = factories.iterator();
        Iterator<ClauseFactory> itr3 = factories.iterator();
        Iterator<Variable> j = globalVariables.iterator() ;
        String var;
        String nilList = "";
        String globals = "";
        String symbolic_constraints = "";


		ClauseFactory fac;

		while(itr.hasNext()){

			fac = itr.next();
			fac.outputAll(stream);
		}

        stream.print("%--------------------------------------------------\n");

		while(itr1.hasNext()){
			fac = itr1.next();
			fac.outputStartPoint(stream);
		}

        stream.print("%--------------------------------------------------\n");

		while(itr2.hasNext()){
			fac = itr2.next();
			fac.outputEndPoints(stream);
		}

        stream.print("%--------------------------------------------------\n");

		while(itr3.hasNext()){
			fac = itr3.next();
			fac.outputLocalFreshVars(stream);
		}

        stream.print("%--------------------------------------------------\n");

        while (j.hasNext()) {
            var = "S" + j.next().getCurrentName();
            nilList += "0";
            globals += var;
            symbolic_constraints += "eq(" + var + ",0)";
            if (j.hasNext()) {
                nilList += ","; 
                globals += ",";
                symbolic_constraints += ",";
            }
        }
		
        stream.print("init_goal(func_main, [0], ["
            + nilList + "],[" + globals 
            + "],L,SL,[" 
            + symbolic_constraints + "]) :-\n");
        stream.print("\tfreshlocalvars(func_main, L), freshlocalvars(func_main, SL).\n");

//        stream.print("%--------------------------------------------------\n");
//        stream.print(":- consult('wcetmulti.clpr').\n");

	}
}

translationUnit  options {
  defaultErrorHandler=false;
}
        :       ( externalList )? 
        ;


externalList
        :       ( externalDef )+
        ;

externalDef
        :       {initialize();}declaration
        |       {initialize();}functionDef
        |       {initialize();}asm_expr
        |       {initialize();}SEMI
        |       {initialize();}typelessDeclaration
        ;

typelessDeclaration
        :       #(NTypeMissing initDeclList SEMI)
        ;

asm_expr
        :       #( "asm" ( "volatile" )? LCURLY expr RCURLY ( SEMI )+ )
        ;

declaration
        :       #( NDeclaration 
            { 
                inDeclaration = true;
                currentInitializerValue = 0 ;
            }
                    declSpecifiers
                    (                   
                        initDeclList
                    )?          
            {
                inDeclaration = false ;
                structVar = false;
            }
                    ( SEMI )+
                )
        ;


declSpecifiers 
        :       ( storageClassSpecifier
                | typeQualifier
                | typeSpecifier
                )+
        ;

storageClassSpecifier
        :       "auto"
        |       "register"
        |       "typedef"
        |       functionStorageClassSpecifier
        ;


functionStorageClassSpecifier
        :       "extern"
        |       "static"
        |       "inline"
        ;


typeQualifier
        :       "const"
        |       "volatile"
        ;


typeSpecifier
        :       "void"
        |       "char"
        |       "short"
        |       "int"
        |       "long"
        |       "float"
        |       "double"
        |       "signed"
        |       "unsigned"
        |       structSpecifier ( attributeDecl )* {structVar = true;}
        |       unionSpecifier  ( attributeDecl )*
        |       enumSpecifier
        |       typedefName
        |       #("typeof" LPAREN
                    ( (typeName )=> typeName 
                    | expr
                    )
                    RPAREN
                )
        |       "__complex"
        ;


typedefName
        :       #(NTypedefName ID)
        ;


structSpecifier
        :   #( "struct" structOrUnionBody )
        ;

unionSpecifier
        :   #( "union" structOrUnionBody )
        ;
   
structOrUnionBody
        :       ( (ID LCURLY) => id:ID LCURLY
        			{structName = id.getText(); inStructDec = true;}
                        ( structDeclarationList )?
                        RCURLY  
                |   LCURLY
                    ( structDeclarationList )?
                    RCURLY
                | id2:ID {structName = id2.getText();}
                )
        ;

structDeclarationList
        :       ( structDeclaration )+
        ;

structDeclaration
        :       specifierQualifierList structDeclaratorList
        ;

specifierQualifierList
        :       (
                typeSpecifier
                | typeQualifier
                )+
        ;

structDeclaratorList
        :       ( structDeclarator )+
        ;

structDeclarator
        :
        #( NStructDeclarator    
            ( declarator )?
            ( COLON expr )?
            ( attributeDecl )*
            {//factories.elementAt(currentFac).setStructDef(structDec);
            }
        )
        ;

enumSpecifier
        :   #(  "enum"
                ( ID )? 
                ( LCURLY enumList RCURLY )?
            )
        ;


enumList
        :       ( enumerator )+
        ;

enumerator
        :       ID ( ASSIGN expr )?
        ;

attributeDecl:
        #( "__attribute" (.)* )
        | #( NAsmAttribute LPAREN expr RPAREN )
        ;

initDeclList
        :       ( initDecl )+
        ;


initDecl
                                        //{ String declName = ""; }
        :       #( NInitDecl
                declarator
            {
                if (inFunction) {
                    ClauseFactory factory =
                    factories.elementAt(currentFac);
                    
                    currClause = factory.openClause(#initDecl);
                    factory.setFromPP(currClause, currPP++);
                    factory.setToPP(currClause, currPP);
                    factory.clauseRefVar(currClause, currentID);
                }
            }
                ( attributeDecl )*
                ( ASSIGN i:initializer
                {
                    if (inFunction) {
                        ClauseFactory factory =
                        factories.elementAt(currentFac);
                        String nv =
                        factory.getNextVarName(currentID);
                        String symbnv =
                        factory.getSymbolicNextVarName(currentID);
                        String exstr = "", symbstr = "";
                        Expression iexpr =
                        (Expression)(i.getAttribute("expression"));

                        exstr = nv + "=" + iexpr.toString();
                        symbstr = "eq(" + symbnv + "," +
                        iexpr.toString_symbolic() + ")";

                        factory.addConstraint(currClause, exstr);
                        factory.addSymbolicConstraint(currClause, symbstr);
                    }
                }

                | COLON expr
                )?
                ) 
        { 
            ClauseFactory factory = factories.elementAt(currentFac);

            if (inFunction) {
                factory.addVariable(currentID, currentInitializerValue);
                if(structVar){
                    GlobalDef.addVarStruct(
                        new Variable(currentID,0).getCurrentName(),
                        structName);
                }
            } else {
                // Process global variable, store it in global
                // variables pool
                globalVariables.add(
                    new Variable(currentID, currentInitializerValue));
            }
        }
        ;

pointerGroup
        :       #( NPointerGroup ( STAR ( typeQualifier )* )+ )
        ;


idList
        :       ID ( COMMA ID )*
        ;

initializer
        :       #( NInitializer (initializerElementLabel)? initexpr:expr )
        {
            Expression x = (Expression)(initexpr.getAttribute("expression"));

            #initializer.setAttribute("expression",
                initexpr.getAttribute("expression"));
        }
                |   lcurlyInitializer
        ;

initializerElementLabel
        :   #( NInitializerElementLabel
                (
                    ( LBRACKET expr RBRACKET (ASSIGN)? )
                    | ID COLON
                    | DOT ID ASSIGN
                )
            )
        ;

lcurlyInitializer
        :  #( NLcurlyInitializer
                initializerList
                RCURLY
            )
        ;

initializerList
        :       ( initializer )*
        ;


declarator
        :   #( NDeclarator
                ( pointerGroup )?               
                ( id:ID
                | LPAREN declarator RPAREN
                )
                (   #( NParameterTypeList
                      (
                        parameterTypeList
                        | (idList)?
                      )
                      RPAREN
                    )
                 | LBRACKET ( expr )? RBRACKET
                )*
             ) {

                if (inParamDec){
              	  factories.elementAt(currentFac).addVariable(
                     id.getText(), 
                     currentInitializerValue);
             	  factories.elementAt(currentFac).addParam(
                    id.getText(),
                    currentInitializerValue);
                } else if ( inDeclaration ) {

                	if(inStructDec){
                		GlobalDef.addStructMember(
                            structName,
                            id.getText(),
                            structMemInd);
                		structMemInd++;
                		
                		/*
                		structDec += "member_extract(";
                		structDec += structName;
                		structDec += ",";
                		structDec += id.getText();
                		structDec += ",";
                		structDec += "Var";
                		structDec += ",";
                		structDec += "Mem";
                		structDec += "):-arg(";
                		structDec += structMemInd;
                		structDec += ",";
                		structDec += "Var";
                		structDec += ",";
                		structDec += "Mem";
                		structDec += ").\n";
                		*/
                		
                	} else {
                        currentID = id.getText() ;
                    }
                } else {

                  //in declaration of a function
                    factories.elementAt(currentFac).setFuncName(id.getText());
                } 
             }
        ;

parameterTypeList
        :       ( parameterDeclaration ( COMMA | SEMI )? )+ ( VARARGS )?
        ;
    
parameterDeclaration
        :       #( NParameterDeclaration {inParamDec=true;}
                declSpecifiers
                (declarator | nonemptyAbstractDeclarator)?
                ) {inParamDec = false;}
        ;

functionDef
        :   #( NFunctionDef 
            {
                Variable globalvar;

                // Add special ReturnValue variable: a placeholder
                // for the return value
                factories.elementAt(currentFac).addVariable("ReturnValue", 0);

                // Add info on the start program point of the function
                factories.elementAt(currentFac).setStartPoint(currPP);

                // We also add global variables to the variables of the
                // current clause factory
                for (Enumeration<Variable> e = globalVariables.elements();
                        e.hasMoreElements();) {
                    globalvar = e.nextElement();
                    factories.elementAt(currentFac).addGlobalVariable(
                        globalvar.getName(), 
                        globalvar.getInitialValue());
                }

                // Declare that we are currently processing syntactic
                // elements in the context of a function.
                inFunction = true;
            }
                ( functionDeclSpecifiers)? 
                declarator
                (declaration | VARARGS)*
                compoundStatement
                {
                    //---------------------------------------------------------
                    // Add an end point to the current function, if it does not
                    // end with a return.
                    //---------------------------------------------------------
                    if (lastReturnNextPP != currPP) {
                        factories.elementAt(currentFac).addEndPoint(currPP);
                        currPP++;
                        
//                        System.out.println(String.format("CurrPP: %d", currPP));

                        }
                        // Declare that we are not inside a function anymore.
                        inFunction = false;

                    }
            )
        ;

functionDeclSpecifiers
        :       
                ( functionStorageClassSpecifier
                | typeQualifier
                | typeSpecifier
                )+
        ;

declarationList
        :       
                (   options {
                        warnWhenFollowAmbig = false;
                    } :
                localLabelDecl
                | declaration
                )+
        ;

localLabelDecl
        :   #("__label__" (ID)+ )
        ;
   
compoundStatement
        :       #( NCompoundStatement
                ( declarationList
                | functionDef
                )*
                ( statementList )?
                RCURLY
                )
        ;

statementList
        :       ( statement )+
        ;

statement
        :        {
                    inStatement = true;
                    ArrRefToVar = new TreeMap<Pair, String>();
                    ArrToCount = new TreeMap<String, Integer>();
        		 }
        		 statementBody
        		 {
                    inStatement = false;
                 }
        ;
        
statementBody {
    int clauseA = -1;
    int clauseB = -1;
    int clauseC = -1;
    int clauseD = -1; 
    int startPP = -1;
    int midPP = -1;
    TreeMap<Pair,String> tempMap
    = new TreeMap<Pair,String>();
}
        :       SEMI                    // Empty statements
        |       compoundStatement
        |       #( NStatementExpr 
                    {
                        currClause =
                        factories.elementAt(currentFac).openClause(#statementBody) ;
                        factories.elementAt(currentFac).setFromPP(currClause, currPP);
                        currPP++;

//                        System.out.println(String.format("CurrPP: %d", currPP));

                        factories.elementAt(currentFac).setToPP(currClause, currPP);
                    }   
            e:expr 
//             { 
//                 // I think we should not need anything here.
//                 // Arbitrary expressions need not be translated.
//                 int i;
//                 Expression cons = (Expression)e.getAttribute("expression");

//                 if (cons.getType() == "disjunction") {
//                     Disjunction cons1 = (Disjunction)cons;
//                     currClause = 
//                     cons1.makeClause(factories.elementAt(currentFac),
//                         #statementBody, currPP++, currPP);
//                 } else if (cons.getType() == "conjunction") {
//                     Conjunction cons1 = (Conjunction)cons;
//                     currClause = 
//                     cons1.makeClause(factories.elementAt(currentFac),
//                         #statementBody, currPP++, currPP);
//                 } else if (cons.getType() == "constraint") {
//                     Constraint cons1 = (Constraint)cons;
//                     currClause = 
//                     cons1.makeClause(factories.elementAt(currentFac),
//                         #statementBody, currPP++, currPP);
//                 }
//             } 
                )
        |       #( "while" ew:expr 
            {
                int i;
                int startPP1, exitPP, bodyPP;
                Expression exp = (Expression)(ew.getAttribute("expression"));

                startPP1 = currPP++;

                System.out.println(String.format("While Loop at function %s PP: %d\n", factories.elementAt(currentFac).getFuncName(), startPP1));

//                System.out.println(String.format("CurrPP: %d", currPP));

                exitPP = currPP++;

//                System.out.println(String.format("CurrPP: %d", currPP));

                bodyPP = currPP;

                whileStartPP.push(startPP1);

//                System.out.println("Push breakContext");

                breakContext.push(exitPP);

//                if (exp==null) System.out.println("NULL!");

                if (!(exp.isLogical())) {

                    Expression dis = new Expression(Expression.DISJUNCTION);
                    Expression c1 = new Expression(Expression.CONJUNCTION);
                    Expression c2 = new Expression(Expression.CONJUNCTION);

                    // System.out.println(String.format("1: Converting %s to boolean", exp.toString()));

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

                    currClause =
                    dis.makeClause(factories.elementAt(currentFac),
                        #statementBody, startPP1, bodyPP);

                    Expression opp = 
                        new Expression(Expression.CONSTRAINT,
                            exp.toString() + "=0", 
                            "eq(" + exp.toString_symbolic() + ",0)");

                    // System.out.println(String.format("1: Storing attribute %s type %d", opp.toString(), opp.getType()));
                    ew.setAttribute("opposite", opp);


                } else {
                    currClause = 
                    exp.makeClause(factories.elementAt(currentFac),
                        #statementBody, startPP1, bodyPP);
                }

            }
            statement
            {
                int startPP1, exitPP;
                Expression nexp = (Expression)(ew.getAttribute("opposite"));

                startPP1 = whileStartPP.pop();

//                System.out.println("Pop breakContext");

                exitPP = breakContext.pop();

                //-------------------------------------------------------------
                // Construct a clause exiting the loop
                //-------------------------------------------------------------
                if (nexp.isLogical()) {
                    currClause = 
                    nexp.makeClause(factories.elementAt(currentFac),
                        #statementBody, startPP1, exitPP);
                }

                //-------------------------------------------------------------
                // Construct a clause representing transition from the end of
                // the loop body into the loop start
                //-------------------------------------------------------------
                currClause = 
                factories.elementAt(currentFac).openClause(#statementBody);
                factories.elementAt(currentFac).setFromPP(currClause, currPP);
                factories.elementAt(currentFac).setToPP(currClause, startPP1);

                // Increment current pp value
                currPP++;

//                System.out.println(String.format("CurrPP: %d", currPP));

                //-------------------------------------------------------------
                // Construct a clause representing transition from the exit
                // program point into the "current" fresh program point
                //-------------------------------------------------------------
                currClause = 
                factories.elementAt(currentFac).openClause(#statementBody);
                factories.elementAt(currentFac).setFromPP(currClause, exitPP);
                factories.elementAt(currentFac).setToPP(currClause, currPP);

//                 addArrAccCons(
//                     factories.elementAt(currentFac), ArrRefToVar, clauseA);
//                 addArrAccCons(
//                     factories.elementAt(currentFac), ArrRefToVar, clauseB);
//                 addArrAccCons(
//                     factories.elementAt(currentFac), ArrRefToVar, clauseC);
//                 addArrAccCons(
//                     factories.elementAt(currentFac), ArrRefToVar, clauseD);
            }
                )
        |       #( "do" statement expr )
        |       #( "for" expr expr expr statement )
        |       #( "goto" expr )
        |       "continue" 
        |       "break"
        {
            // Instantiate a new clause, and keep its index in
            // currClause
            currClause = 
            factories.elementAt(currentFac).openClause(
                #statementBody);

            // Set the current pp as from pp
            factories.elementAt(currentFac).setFromPP(currClause,
                currPP);

//            System.out.println("peeking 6");

            // Set the exit pp as to pp
            factories.elementAt(currentFac).setToPP(currClause,
                breakContext.peek());

            // Increment current pp value
            currPP++;

//            System.out.println(String.format("CurrPP: %d", currPP));
        }
        |       #( "return" 
            {
                factories.elementAt(currentFac).hasReturn = true;
            }
            ( 
                {
                    ClauseFactory factory = factories.elementAt(currentFac);

                    currClause = factory.openClause(#statementBody) ;
                    factory.setFromPP(currClause,currPP++) ;
                    factory.setToPP(currClause,currPP);
                
                    // System.out.println(String.format("CurrPP: %d", currPP));
                }
                re:expr 
                {
                    ClauseFactory factory = factories.elementAt(currentFac);

                    //---------------------------------------------------------
                    // Evaluated representation of return statement
                    //---------------------------------------------------------
                    String retcons = factory.getNextVarName("ReturnValue");
                    Expression return_value =
                        (Expression)(re.getAttribute("expression"));

                    retcons += "=";
                    retcons += return_value.toString();
                    factory.clauseRefVar(currClause, "ReturnValue");
                    factory.addConstraint(currClause,retcons) ;  

                    addArrAccCons(factory, ArrRefToVar, currClause);

                    //---------------------------------------------------------
                    // Symbolic representation of return
                    //---------------------------------------------------------
                    retcons = "eq(";
                    retcons += factory.getSymbolicNextVarName("ReturnValue");
                    retcons += ",";
                    retcons += return_value.toString_symbolic();
                    retcons += ")";
                    factory.addSymbolicConstraint(currClause, retcons);

                } )? 
            {
                //---------------------------------------------------------
                // Add end point to the current function
                //---------------------------------------------------------
                factories.elementAt(currentFac).addEndPoint(currPP);
                currPP++;

                // System.out.println(String.format("CurrPP: %d", currPP));

                // Flag that the "next" pp of the last pp is currPP.
                // This is to signal that the program has ended in a return
                lastReturnNextPP = currPP;
            } )
        |       #( NLabel ID (statement)? )
        |       #( "case" case_expr:expr
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

                Expression currentcond = defcond.clone();
                ClauseFactory factory = factories.elementAt(currentFac);

                currentcond.restrict(new Expression(Expression.CONSTRAINT,
                    switchExpr.peek() + "=" + case_expr_obj.toString(),
                    "eq(" + switchSymbolicExpr.peek() + "," +
                    case_expr_obj.toString_symbolic() + ")"));

                currentcond.makeClause(factory, #statementBody,
                    switchStartPP.peek(), currPP);

                //-------------------------------------------------------------
                // Add restriction to current "default" condition
                //-------------------------------------------------------------
                disjunct1.addConstraint(
                    new Expression(Expression.CONSTRAINT,
                        switchExpr.peek() + "<" + case_expr_obj.toString(),
                        "gt(" + case_expr_obj.toString_symbolic() + "," +
                        switchSymbolicExpr.peek() + ")"));
                disjunct2.addConstraint(
                    new Expression(Expression.CONSTRAINT,
                        switchExpr.peek() + ">" + case_expr_obj.toString(),
                        "gt(" + switchSymbolicExpr.peek() + "," +
                        case_expr_obj.toString() + ")"));
                defcond_restriction.addDisjunct(disjunct1);
                defcond_restriction.addDisjunct(disjunct2);

                defcond.restrict(defcond_restriction);


//                 currClause = 
//                     factories.elementAt(currentFac).openClause(#statementBody);

//                 factories.elementAt(currentFac).setFromPP(currClause,
//                     switchStartPP.peek());
//                 factories.elementAt(currentFac).setToPP(currClause,currPP);

//                 caseTest = switchExpr.peek() + "=" + case_expr_obj.toString();
//                 factories.elementAt(currentFac).addConstraint(
//                     currClause, caseTest);

//                 caseSymbolicTest = "eq(" + switchSymbolicExpr.peek() + "," +
//                     case_expr_obj.toString_symbolic() + ")"; 
//                 factories.elementAt(currentFac).addSymbolicConstraint(
//                     currClause, caseSymbolicTest);

            }
                    (statement)? )
        |       #( "default" 
            {

                Expression defcond = currentDefaultCondition();
                ClauseFactory factory = factories.elementAt(currentFac);

                defcond.makeClause(factory, #statementBody,
                    switchStartPP.peek(), currPP);

//                 currClause = 
//                     factories.elementAt(currentFac).openClause(#statementBody);

//                 factories.elementAt(currentFac).setFromPP(currClause,
//                     switchStartPP.peek());
//                 factories.elementAt(currentFac).setToPP(currClause,currPP);
            }
                (statement)? )
        |       #( 
                 "if" 
            { 
//                System.out.println(String.format("ifStartPP %d", currPP));
                ifStartPP.push(currPP);
                currPP++;

//                System.out.println(String.format("CurrPP: %d", currPP));

            }
                 ei:expr 
            {
                tempMap = ArrRefToVar;
            }
                 statement 
            { 
//                System.out.println(String.format("ifBodyEndPP %d", currPP));
                ifBodyEndPP.push(currPP);
            }
                 ( el:"else" 
                { 
                    clauseD = factories.elementAt(currentFac).numClauses()-1;
                }
                 statement 
                 )? )
        {
            int startPP1 = ifStartPP.pop();
            int bodyEndPP = ifBodyEndPP.pop();
            int oppositeTarget;
            Expression ei_obj = (Expression)(ei.getAttribute("expression"));

            if (el != null) {
                // else present

                //-------------------------------------------------------------
                // Construct a clause representing a transition from the
                // end of body of the if conditional to the current program
                // point.
                //-------------------------------------------------------------
                currClause = 
                    factories.elementAt(currentFac).openClause(#statementBody);
                factories.elementAt(currentFac).
                    setFromPP(currClause, bodyEndPP);
                factories.elementAt(currentFac).
                    setToPP(currClause, currPP);

                oppositeTarget = bodyEndPP+1;
            } else {
                // else not present
                oppositeTarget = currPP;
            }

            if (!(ei_obj.isLogical())) {

                Expression dis = new Expression(Expression.DISJUNCTION);
                Expression c1 = new Expression(Expression.CONJUNCTION);
                Expression c2 = new Expression(Expression.CONJUNCTION);

                // System.out.println(String.format("2: Converting %s to boolean", ei_obj.toString()));
                
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

                currClause =
                dis.makeClause(factories.elementAt(currentFac),
                    #statementBody, startPP1, startPP1+1);

                Expression opp = 
                    new Expression(Expression.CONSTRAINT,
                        ei_obj.toString() + "=0", 
                        "eq(" + ei_obj.toString_symbolic() + ",0)");

                currClause = 
                opp.makeClause(factories.elementAt(currentFac),
                    #statementBody, startPP1, oppositeTarget);

            } else {

                Expression ei_obj_opp =
                (Expression)(ei.getAttribute("opposite"));

                currClause =
                ei_obj.makeClause(factories.elementAt(currentFac),
                    #statementBody, startPP1, startPP1+1);

                if (ei_obj_opp.isLogical()) {
                    currClause =
                    ei_obj_opp.makeClause(factories.elementAt(currentFac),
                        #statementBody, startPP1, oppositeTarget);
                }
            }

        }

        |       #( "switch" 
            {
                inSwitch = true;
                switchStartPP.push(currPP);
                currPP++;

//                System.out.println(String.format("CurrPP: %d", currPP));

//                System.out.println("Push breakContext");

                breakContext.push(currPP);
                currPP++;

//                System.out.println(String.format("CurrPP: %d", currPP));
                
            }
                    switch_expr:expr 
            {
                switchExpr.push(((Expression)(switch_expr.getAttribute("expression"))).
                    toString());
                switchSymbolicExpr.push(((Expression)(switch_expr.getAttribute("expression"))).
                    toString_symbolic());

                // Initialize new data structure for storing condition
                // for default:
                initDefaultCondition();

            }
                    statement
            {

                // Pop the stacks; we're finished with this switch
                switchStartPP.pop();
                switchExpr.pop();
                switchSymbolicExpr.pop();

                // System.out.println("Pop breakContext");
                switchExitPP = breakContext.pop();

                //-------------------------------------------------------------
                // Construct a clause that exits from the last
                // statement in the switch
                //-------------------------------------------------------------

                // Instantiate a new clause, and keep its index in
                // currClause
                currClause = 
                factories.elementAt(currentFac).openClause(#statementBody);

                // Set the current pp as from pp
                factories.elementAt(currentFac).setFromPP(
                    currClause,currPP);

//                System.out.println("peeking 5");

                // Set the exit pp as to pp
                factories.elementAt(currentFac).setToPP(
                    currClause,switchExitPP);

                // Increment current pp value
                currPP++;
                // System.out.println(String.format("CurrPP: %d", currPP));
                

                //-------------------------------------------------------------
                // Construct another clause that continues from
                // the exit point to the next program point
                //-------------------------------------------------------------
                currClause = 
                factories.elementAt(currentFac).openClause(#statementBody);

                // Set the switch exit pp as the source pp
                factories.elementAt(currentFac).setFromPP(
                    currClause, switchExitPP);

                // Set the exit pp as the target pp
                factories.elementAt(currentFac).setToPP(
                    currClause, currPP);

                //-------------------------------------------------------------
                // We're no longer in a switch statement
                //-------------------------------------------------------------
                inSwitch = false;

                //-------------------------------------------------------------
                // Remove the default condition from stack
                //-------------------------------------------------------------
                removeDefaultCondition();
            }

        )
        ;

expr
        :       assignExpr
        |       conditionalExpr
        |       logicalOrExpr
        |       logicalAndExpr
        |       inclusiveOrExpr
        |       exclusiveOrExpr
        |       bitAndExpr
        |       equalityExpr
        |       relationalExpr
        |       shiftExpr
        |       additiveExpr
        |       multExpr
        |       castExpr
        |       unaryExpr
        |       postfixExpr
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
		  {System.out.println(a.getText());
		   System.out.println(b.getText());
		  }
		;
*/
		
commaExpr
        :   #(NCommaExpr expr expr)
        ;

emptyExpr
        :   NEmptyExpression
        ;

compoundStatementExpr
        :   #(LPAREN compoundStatement RPAREN)
        ;

rangeExpr
        :   #(NRangeExpr expr VARARGS expr)
        ;

gnuAsmExpr
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
        :  stringConst ( LPAREN expr RPAREN )?
        ;
        
assignExpr
        :       #( ASSIGN 
            {
                nextVarsNeeded=true ; 
                inLHSOfAssign = true;
                inAssign = true; 
                arrOnLHS = false;
                bracDepth = 0;
            }
            e1:expr 
            {
                nextVarsNeeded=false ;
                inLHSOfAssign = false; 
                bracDepth = 0;
            } 
            e2:expr 
            {
                inAssign = false;
            }
            ) 
        { 
            Expression e1_expr = (Expression)(e1.getAttribute("expression"));
            Expression e2_expr = (Expression)(e2.getAttribute("expression"));
            String exstr, symbstr;

            // System.out.println(e1.getText());
            // System.out.println(e2.getText());


            if (inStatement) {
                if(!arrOnLHS) {
                    exstr = e1_expr.toString() + "=" + e2_expr.toString();
                    symbstr = "eq(" + e1_expr.toString_symbolic() + "," +
                              e2_expr.toString_symbolic() + ")";
                } else {
                    exstr = e1_expr.toString() + "=" + "update(" +
                            e1.getAttribute("currvar") + "," +
                            assignArrInd + "," + e2_expr.toString() +
                            ")";
                    symbstr = "eq(" + e1_expr.toString() + "," + "update(" +
                            e1.getAttribute("currvar") + "," +
                            assignArrInd + "," + e2_expr.toString() +
                            "))";
                }

                // System.out.println(String.format("2: Storing attribute %s type %d", exstr, Expression.CONSTRAINT));

                #assignExpr.setAttribute("expression",
                        new Expression(Expression.CONSTRAINT, exstr, symbstr));

                factories.elementAt(currentFac).clauseRefVar(
                    currClause, (String)(e1.getAttribute("vartext")));

                factories.elementAt(currentFac).addConstraint(
                    currClause, exstr);
                factories.elementAt(currentFac).addSymbolicConstraint(
                    currClause, symbstr);
            }
            arrOnLHS = false;
        }
        |       #( DIV_ASSIGN expr expr)
        |       #( PLUS_ASSIGN expr expr)
        |       #( MINUS_ASSIGN expr expr)
        |       #( STAR_ASSIGN expr expr)
        |       #( MOD_ASSIGN expr expr)
        |       #( RSHIFT_ASSIGN expr expr)
        |       #( LSHIFT_ASSIGN expr expr)
        |       #( BAND_ASSIGN expr expr)
        |       #( BOR_ASSIGN expr expr)
        |       #( BXOR_ASSIGN expr expr)
        ;

conditionalExpr
        :       #( QUESTION expr (expr)? COLON expr )
        ;

logicalOrExpr
        :       #( LOR lor_expr1:expr lor_expr2:expr) 
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

                //-------------------------------------------------------------
                // lor_expr1 may not be logical, construct a logical one,
                // store in lor_expr1_expr, and the opposite in lor_expr1_opp.
                //-------------------------------------------------------------
                if (!(lor_expr1_obj.isLogical())) {

                    // System.out.println(String.format("3: Converting %s to constraint", lor_expr1_obj.toString()));

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

                    // System.out.println(String.format("4: Converting %s to constraint", lor_expr2_obj.toString()));

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

                // System.out.println(String.format("3: Storing attribute %s type %d", lor_expr.toString(), lor_expr.getType()));
                // System.out.println(String.format("3: Storing attribute %s type %d", lor_opp.toString(), lor_opp.getType()));

                #logicalOrExpr.setAttribute("expression", lor_expr);
                #logicalOrExpr.setAttribute("opposite", lor_opp);
            }
        ;

logicalAndExpr
        :       #( LAND land_expr1:expr land_expr2:expr )
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

            //-----------------------------------------------------------------
            // land_expr1 may not be logical, construct a logical one,
            // store in land_expr1_expr, and the opposite in
            // land_expr1_opp.
            //-----------------------------------------------------------------
            if (!(land_expr1_obj.isLogical())) {

                // System.out.println(String.format("Class %s",
                //        land_expr1_obj.getType()));
                // System.out.println(String.format("5: Converting %s to constraint",
                //        land_expr1_obj.toString()));

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

//                System.out.println(String.format("6: Converting %s to constraint", land_expr2_obj.toString()));

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

  //              System.out.println(String.format("Disjunction"));

                if (land_expr1_expr.getType() == Expression.CONSTRAINT ||
                    land_expr1_expr.getType() == Expression.CONJUNCTION) {

    //                System.out.println(String.format("First exp %s", land_expr1_expr.toString()));

                    land_expr = land_expr1_expr.makeDisjunction();

      //              System.out.println(String.format("Type %d", land_expr.getType()));
        //            System.out.println(String.format("First exp %s", land_expr.toString()));

                } else {
          //          System.out.println(String.format("Type %d", land_expr1_expr.getType()));

                    land_expr = land_expr1_expr;
                }

            //    System.out.println(String.format("Type %d", land_expr2_expr.getType()));
   //             System.out.println(String.format("Second exp %s", land_expr2_expr.toString()));

                land_expr.restrict(land_expr2_expr);

     //           System.out.println(String.format("Type %d", land_expr.getType()));
       //         System.out.println(String.format("First exp %s", land_expr.toString()));


            } else {
                // land_expr2_expr.getType() == Expression.CONSTRAINT ||
                // land_expr2_expr.getType() == Expression.CONJUNCTION
                if (land_expr1_expr.getType() == Expression.CONSTRAINT) {
                    land_expr = land_expr1_expr.makeConjunction();
                    land_expr.restrict(land_expr2_expr);
                } else if (land_expr1_expr.getType() ==
                    Expression.CONJUNCTION) {
                    land_expr = land_expr1_expr;
                    land_expr.restrict(land_expr2_expr);
                } else {
                    // land_expr1_expr.getType() == Expression.DISJUNCTION
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
                // land_expr1_opp.getType() == Expression.DISJUNCTION
                land_opp = land_expr1_opp;
            }
            land_opp.addDisjunct(land_expr2_opp);
            
            #logicalAndExpr.setAttribute("expression", land_expr);
            #logicalAndExpr.setAttribute("opposite", land_opp);
        }
        ;

inclusiveOrExpr
        :       #( BOR expr expr )
        ;

exclusiveOrExpr
        :       #( BXOR expr expr )
        ;

bitAndExpr
        :       #( BAND expr expr )
        ;

equalityExpr
        :       #( EQUAL e1:expr e2:expr)
        {
            Expression e1_obj =
            (Expression)(e1.getAttribute("expression"));
            Expression e2_obj =
            (Expression)(e2.getAttribute("expression"));
            Expression opp;

            if (inStatement) {
                #equalityExpr.setAttribute("expression",
                    new Expression(Expression.CONSTRAINT,
                        e1_obj.toString() + "=" + e2_obj.toString(),
                        "eq(" + e1_obj.toString_symbolic() + "," +
                        e2_obj.toString_symbolic() + ")"));

                opp = (new Expression(Expression.CONSTRAINT,
                            e1_obj.toString() + "<" + e2_obj.toString(),
                            "gt(" + e2_obj.toString_symbolic() + "," +
                            e1_obj.toString_symbolic() + ")")).makeDisjunction();

                opp.addDisjunct(
                    (new Expression(Expression.CONSTRAINT,
                            e1_obj.toString() + ">" + e2_obj.toString(),
                            "gt(" + e1_obj.toString_symbolic() + "," +
                            e2_obj.toString_symbolic() + ")")).
                    makeConjunction());

                    #equalityExpr.setAttribute("opposite", opp);
                }
            }
        |       #( NOT_EQUAL e3:expr e4:expr)
        { 
            Expression e3_obj =
            (Expression)(e3.getAttribute("expression"));
            Expression e4_obj =
            (Expression)(e4.getAttribute("expression"));
            Expression neq_expr;

            if (inStatement) {
                neq_expr = (new Expression(Expression.CONSTRAINT,
                        e3_obj.toString() + "<" + e4_obj.toString(),
                        "gt(" + e4_obj.toString_symbolic() + "," +
                        e3_obj.toString_symbolic() + ")")).makeDisjunction();

                neq_expr.addDisjunct(
                    (new Expression(Expression.CONSTRAINT,
                            e3_obj.toString() + ">" + e4_obj.toString(),
                            "gt(" + e3_obj.toString_symbolic() + "," +
                            e4_obj.toString_symbolic() + ")")).
                    makeConjunction());

                // System.out.println(String.format("4: Storing attribute %s type %d", neq_expr.toString(), neq_expr.getType()));

                #equalityExpr.setAttribute("expression", neq_expr);
                #equalityExpr.setAttribute("opposite",
                    new Expression(Expression.CONSTRAINT,
                        e3_obj.toString() + "=" + e4_obj.toString(),
                        "eq(" + e3_obj.toString_symbolic() + "," +
                        e4_obj.toString_symbolic() + ")"));
                }
            }

        ;

relationalExpr
        :       #( LT e1:expr e2:expr)
        { 
            Expression e1_obj = (Expression)(e1.getAttribute("expression"));
            Expression e2_obj = (Expression)(e2.getAttribute("expression"));
            
            if (inStatement) {
                #relationalExpr.setAttribute("expression",
                    new Expression(Expression.CONSTRAINT,
                        e1_obj.toString() + "<" + e2_obj.toString(),
                        "gt(" + e2_obj.toString_symbolic() + "," +
                        e1_obj.toString_symbolic() + ")"));
                #relationalExpr.setAttribute("opposite",
                    new Expression(Expression.CONSTRAINT,
                        e1_obj.toString() + ">=" + e2_obj.toString(),
                        "geq(" + e1_obj.toString_symbolic() + "," +
                        e2_obj.toString_symbolic() + ")"));
            }
        }

        |       #( LTE e3:expr e4:expr)
        { 
            Expression e3_obj = (Expression)(e3.getAttribute("expression"));
            Expression e4_obj = (Expression)(e4.getAttribute("expression"));

            if (inStatement) {
                #relationalExpr.setAttribute("expression",
                    new Expression(Expression.CONSTRAINT,
                        e3_obj.toString() + "<=" + e4_obj.toString(),
                        "geq(" + e4_obj.toString_symbolic() + "," +
                        e3_obj.toString_symbolic() + ")"));
                #relationalExpr.setAttribute("opposite",
                    new Expression(Expression.CONSTRAINT,
                        e3_obj.toString() + ">" + e4_obj.toString(),
                        "gt(" + e3_obj.toString_symbolic() + "," +
                        e4_obj.toString_symbolic() + ")"));
            }
        }
        |       #( GT e5:expr e6:expr)
        { 
            Expression e5_obj = (Expression)(e5.getAttribute("expression"));
            Expression e6_obj = (Expression)(e6.getAttribute("expression"));

            if (inStatement) {
                #relationalExpr.setAttribute("expression",
                    new Expression(Expression.CONSTRAINT,
                        e5_obj.toString() + ">" + e6_obj.toString(),
                        "gt(" + e5_obj.toString_symbolic() + "," +
                        e6_obj.toString_symbolic() + ")"));
                #relationalExpr.setAttribute("opposite",
                    new Expression(Expression.CONSTRAINT,
                        e5_obj.toString() + "<=" + e6_obj.toString(),
                        "geq(" + e6_obj.toString_symbolic() + "," +
                        e5_obj.toString_symbolic() + ")"));
            }
        }

        |       #( GTE e7:expr e8:expr)
        {
            Expression e7_obj = (Expression)(e7.getAttribute("expression"));
            Expression e8_obj = (Expression)(e8.getAttribute("expression"));

            if (inStatement) {
                #relationalExpr.setAttribute("expression",
                    new Expression(Expression.CONSTRAINT,
                        e7_obj.toString() + ">=" + e8_obj.toString(),
                        "geq(" + e7_obj.toString_symbolic() + "," +
                        e8_obj.toString_symbolic() + ")"));
                #relationalExpr.setAttribute("opposite",
                    new Expression(Expression.CONSTRAINT,
                        e7_obj.toString() + "<" + e8_obj.toString(),
                        "gt(" + e8_obj.toString_symbolic() + "," +
                        e7_obj.toString_symbolic() + ")"));
            }
        }
        ;

shiftExpr
        :       #( LSHIFT expr expr)
                | #( RSHIFT expr expr)
        ;

additiveExpr
        :       #( PLUS e1:expr e2:expr) 
        { 
            Expression e1_obj = (Expression)(e1.getAttribute("expression"));
            Expression e2_obj = (Expression)(e2.getAttribute("expression"));

            if (inStatement) {
                #additiveExpr.setAttribute("expression",
                    new Expression(
                        e1_obj.toString() + "+" + e2_obj.toString(),
                        "plus(" + e1_obj.toString_symbolic() + "," +
                        e2_obj.toString_symbolic() + ")"));
            }
        }
        |       #( MINUS e3:expr e4:expr)
        { 
            Expression e3_obj = (Expression)(e3.getAttribute("expression"));
            Expression e4_obj = (Expression)(e4.getAttribute("expression"));

            if (inStatement) {
                #additiveExpr.setAttribute("expression",
                    new Expression(
                        e3_obj.toString() + "-" + e4_obj.toString(),
                        "minus(" + e3_obj.toString_symbolic() + "," +
                        e4_obj.toString_symbolic() + ")"));
            }
        }
       ;

multExpr
        :       #( STAR e1:expr e2:expr)
        { 
            Expression e1_obj = (Expression)(e1.getAttribute("expression"));
            Expression e2_obj = (Expression)(e2.getAttribute("expression"));

//            if (e1_obj == null) { System.out.println("e1 NULL"); }
 //           else { System.out.println("e1 = " + e1_obj.toString()); }
//            if (e2_obj == null) { System.out.println("e2 NULL"); }

            if (inStatement || (inFunction && inDeclaration)) {
                #multExpr.setAttribute("expression",
                    new Expression(
                        e1_obj.toString() + "*" + e2_obj.toString(),
                        "mult(" + e1_obj.toString_symbolic() + "," +
                        e2_obj.toString_symbolic() + ")"));
            }
        }

        |       #( DIV e3:expr e4:expr)
        { 
            Expression e3_obj = (Expression)(e3.getAttribute("expression"));
            Expression e4_obj = (Expression)(e4.getAttribute("expression"));

            if (inStatement) {
                #multExpr.setAttribute("expression",
                    new Expression(
                        e3_obj.toString() + "-" + e4_obj.toString(),
                        "mult(" + e3_obj.toString_symbolic() + "," +
                        e4_obj.toString_symbolic() + ")"));
            }
        }
        |       #( MOD expr expr)
        ;

castExpr
        :       #( NCast typeName RPAREN e:expr
            {
                #castExpr.setAttribute("expression",
                    e.getAttribute("expression"));
            } )
        ;

typeName
        :       specifierQualifierList (nonemptyAbstractDeclarator)?
        ;

nonemptyAbstractDeclarator
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
        :       #( INC einc:expr )
        {
            Expression ex = (Expression)(einc.getAttribute("expression"));
            #unaryExpr.setAttribute("expression",
                new Expression(ex.toString() + "+1",
                    "plus(" + ex.toString_symbolic() + ",1)"));
        }
        |       #( DEC edec:expr )
        {
            Expression ex = (Expression)(edec.getAttribute("expression"));
            #unaryExpr.setAttribute("expression",
                new Expression(ex.toString() + "-1",
                    "minus(" + ex.toString_symbolic() + ",1)"));
        }
        |       #( NUnaryExpr op:unaryOperator eun:expr)
        {
            int op_type = op.getType();

//            System.out.println("hello");
//            System.out.println(op.getText());
//            System.out.println(String.format("%d %d", LNOT, op.getType()));

            if (op_type == LNOT) {

//                System.out.println("world");

                Expression ex = (Expression)(eun.getAttribute("expression"));
                if (ex.isLogical()) {
                    Expression ex_opp = (Expression)(eun.getAttribute("opposite"));
                    #unaryExpr.setAttribute("expression", ex_opp);
                    #unaryExpr.setAttribute("opposite", ex);
                } else {
                    #unaryExpr.setAttribute("expression", ex.makeLogicalOpposite());
                    #unaryExpr.setAttribute("opposite", ex.makeLogical());
                }
            } else if (op_type == MINUS) {
                Expression ex = (Expression)(eun.getAttribute("expression"));
                #unaryExpr.setAttribute("expression", 
                    new Expression("0-(" + ex.toString() + ")",
                        "minus(0," + ex.toString_symbolic() + ")"));
            } else if (op_type == PLUS) {
                #unaryExpr.setAttribute("expression",
                    eun.getAttribute("expression"));
            }
        }
        |       #( "sizeof"
                    ( ( LPAREN typeName )=> LPAREN typeName RPAREN
                    | expr
                    )
                )
        |       #( "__alignof"
                    ( ( LPAREN typeName )=> LPAREN typeName RPAREN
                    | expr
                    )
                )
        ;

    unaryOperator
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
        :       #( NPostfixExpr
                    pe:primaryExpr
            {
//                if (pe.getAttribute("expression") == null) {
 //                   System.out.println("NULL");
  //              }
                
                // We set the attribute of the postfix expression
                // first, which will be updated later according on
                // whether some postfix exists or not.
                #postfixExpr.setAttribute("expression",
                    pe.getAttribute("expression"));
            }
                    ( PTR ID
                    | DOT id:ID //member extraction
                      {
                      	//System.out.println(pe.getAttribute("expression")+","+ id.getText());
                      	String varName = (String)pe.getAttribute("currvar");
                      	String strName = GlobalDef.getVarStruct(varName);
                      	String arrName, arrIndex, artificialVar;
                      	
                      	int index = GlobalDef.getStructMemberInd(strName, id.getText());
                      	arrName = varName;
                      	arrIndex = "" + index;
                      	if(!inLHSOfAssign){
                    		artificialVar = 
                    			ArrRefToVar.get(new Pair(arrName, arrIndex));
                    		if(artificialVar == null){
                    			Integer count = ArrToCount.get(arrName);
                    			if(count == null){
                    				count = new Integer(0);	
                    			}
                    			artificialVar = ArrRefToString(arrName, count);
                    			count = new Integer(count.intValue() + 1);
                    			ArrToCount.put(arrName, count);
                    			ArrRefToVar.put(new Pair(arrName, arrIndex), artificialVar);
                    		}
                    		#postfixExpr.setAttribute("expression", artificialVar);
                    	} else {
                    		arrOnLHS = true;
                    		if(bracDepth == 0){
                    			assignArrInd = arrIndex;
                    			#postfixExpr.setAttribute("expression",
                    			  (String)pe.getAttribute("expression"));
                    			#postfixExpr.setAttribute("currvar",
                    				pe.getAttribute("currvar"));
                    			#postfixExpr.setAttribute("vartext",
                    				pe.getAttribute("vartext"));
                    		} else {
                    			arrName = (String)pe.getAttribute("currvar");
                    			artificialVar = 
                    				ArrRefToVar.get(new Pair(arrName, arrIndex));
                    			if(artificialVar == null){
                    				Integer count = ArrToCount.get(arrName);
                    				if(count == null){
                    					count = new Integer(0);	
                    				}
                    				artificialVar = ArrRefToString(arrName, count);
                    				count = new Integer(count.intValue() + 1);
                    				ArrToCount.put(arrName, count);
                    				ArrRefToVar.put(new Pair(arrName, arrIndex), artificialVar);
                    			}
                    			#postfixExpr.setAttribute("expression", artificialVar);
                    		}
                    	}
                      }
                    | #( NFunctionCallArgs (el:argExprList
                        {
                            //-------------------------------------------------
                            // Function call with arguments list
                            //-------------------------------------------------
                            String functionid = (String)(pe.getAttribute("vartext"));
			    ClauseFactory factory = factories.elementAt(currentFac);
			    Iterator<Expression> i = ((Vector<Expression>)(el.getAttribute("arglist"))).iterator();
			    String args = "[";
			    String args_symbolic = "[";
			    String constraints_symbolic = "[";
			    String RV = getCallRetVar();
			    String TV;
			    Expression expr;
			    
			    //                            System.out.println(el.getText());
			    
			    if (i.hasNext()) {
				args += RV + ",";
				args_symbolic += "S" + RV + ",";
				
				while (i.hasNext()) {
				    expr = i.next();
				    TV = getCallTempVar();
				    args += expr.toString();
				    args_symbolic += TV;
				    constraints_symbolic += "eq(" + TV + "," + expr.toString_symbolic() + ")";
				    if (i.hasNext()) {
					args += ",";
					args_symbolic += ",";
					constraints_symbolic += ",";
				    } else {
					args += "|_]";
					args_symbolic += "|_]";
					constraints_symbolic += "]";
				    }
				}
			    } else {
				args += RV + "]";
				args_symbolic += "S" + RV + "]";
				constraints_symbolic += "]"; 
			    }
			    
			    factory.addCall(currClause, "func_" + functionid, args, args_symbolic, constraints_symbolic);
			    #postfixExpr.setAttribute("expression", new Expression(RV, "S" + RV));
                        }
                      )? RPAREN )
                {
                    //---------------------------------------------------------
                    // Function call without arguments list
                    //---------------------------------------------------------
                    String functionid = (String)(pe.getAttribute("vartext"));
                    ClauseFactory factory = factories.elementAt(currentFac);
                    String RV = getCallRetVar();

                    if (el == null) {
                        factory.addCall(currClause, "func_" + functionid, "[" + RV + "|_]", "[S" + RV + "|_]", "[]");
                        #postfixExpr.setAttribute("expression", new Expression(RV, "S" + RV));
                    }
                }

                    | LBRACKET {bracDepth++;} be:expr
                       RBRACKET
                {
                    String arrName =
                    ((Expression)(pe.getAttribute("expression"))).toString();
//                     String arrIndex;
//                     ((Expression)(be.getAttribute("expression"))).toString();
//                     String artificialVar;

//                     if(!inLHSOfAssign){
//                     		artificialVar = 
//                     			ArrRefToVar.get(new Pair(arrName, arrIndex));
//                     		if(artificialVar == null){
//                     			Integer count = ArrToCount.get(arrName);
//                     			if(count == null){
//                     				count = new Integer(0);	
//                     			}
//                     			artificialVar = ArrRefToString(arrName, count);
//                     			count = new Integer(count.intValue() + 1);
//                     			ArrToCount.put(arrName, count);
//                     			ArrRefToVar.put(new Pair(arrName, arrIndex), artificialVar);
//                     		}
//                     		#postfixExpr.setAttribute("expression", artificialVar);
//                     	} else {
//                     		arrOnLHS = true;
//                     		if(bracDepth == 1){
//                     			assignArrInd = arrIndex;
//                     			#postfixExpr.setAttribute("expression", arrName);
//                     			#postfixExpr.setAttribute("currvar",
//                     				pe.getAttribute("currvar"));
//                     			#postfixExpr.setAttribute("vartext",
//                     				pe.getAttribute("vartext"));
//                     		} else {
//                     			arrName = ((Expression)(pe.getAttribute("currvar"))).toString();
//                     			artificialVar = 
//                     				ArrRefToVar.get(new Pair(arrName, arrIndex));
//                     			if(artificialVar == null){
//                     				Integer count = ArrToCount.get(arrName);
//                     				if(count == null){
//                     					count = new Integer(0);	
//                     				}
//                     				artificialVar = ArrRefToString(arrName, count);
//                     				count = new Integer(count.intValue() + 1);
//                     				ArrToCount.put(arrName, count);
//                     				ArrRefToVar.put(new Pair(arrName, arrIndex), artificialVar);
//                     			}
//                     			#postfixExpr.setAttribute("expression", artificialVar);
//                     		}
//                     	}
//                     	bracDepth--;
                    }
                    | INC
                { 
                    ClauseFactory factory = factories.elementAt(currentFac);

                    String vartext = (String)(pe.getAttribute("vartext"));
                    String exstr;
                    String symbstr;

                    String nv = factory.getNextVarName(vartext);
                    String symbnv = factory.getSymbolicNextVarName(vartext);
                    String v = factory.getCurrVarName(vartext);
                    String symbv = factory.getSymbolicCurrVarName(vartext);

                    if (inStatement) {
                        if(!arrOnLHS) {
                            exstr = (nv + "=" + v + "+1");
                            symbstr = "eq(" + symbnv + ",plus(" + symbv + ",1))";
                        } else {
                            // Array handling
                            exstr = "";
                            symbstr = "";
//                             exstr = e1_expr.toString() + "=" + "update(" +
//                             e1.getAttribute("currvar") + "," +
//                             assignArrInd + "," + e2_expr.toString() +
//                             ")";
//                             symbstr = "eq(" + e1_expr.toString() + "," + "update(" +
//                             e1.getAttribute("currvar") + "," +
//                             assignArrInd + "," + e2_expr.toString() +
//                             "))";
                        }

                        #postfixExpr.setAttribute("expression",
                            new Expression(Expression.CONSTRAINT, exstr, symbstr));

                        factories.elementAt(currentFac).clauseRefVar(
                            currClause, vartext);
                        factories.elementAt(currentFac).addConstraint(
                            currClause, exstr);
                        factories.elementAt(currentFac).addSymbolicConstraint(
                            currClause, symbstr);
                    }
                    arrOnLHS = false;
                }
                    | DEC
                { 
                    ClauseFactory factory = factories.elementAt(currentFac);

                    String vartext = (String)(pe.getAttribute("vartext"));
                    String exstr;
                    String symbstr;

                    String nv = factory.getNextVarName(vartext);
                    String symbnv = factory.getSymbolicNextVarName(vartext);
                    String v = factory.getCurrVarName(vartext);
                    String symbv = factory.getSymbolicCurrVarName(vartext);

                    if (inStatement) {
                        if(!arrOnLHS) {
                            exstr = (nv + "=" + v + "-1");
                            symbstr = "eq(" + symbnv + ",minus(" + symbv + ",1))";
                        } else {
                            // Array handling
                            exstr = "";
                            symbstr = "";
//                             exstr = e1_expr.toString() + "=" + "update(" +
//                             e1.getAttribute("currvar") + "," +
//                             assignArrInd + "," + e2_expr.toString() +
//                             ")";
//                             symbstr = "eq(" + e1_expr.toString() + "," + "update(" +
//                             e1.getAttribute("currvar") + "," +
//                             assignArrInd + "," + e2_expr.toString() +
//                             "))";
                        }

                        #postfixExpr.setAttribute("expression",
                            new Expression(Expression.CONSTRAINT, exstr, symbstr));

                        factories.elementAt(currentFac).clauseRefVar(
                            currClause, vartext);
                        factories.elementAt(currentFac).addConstraint(
                            currClause, exstr);
                        factories.elementAt(currentFac).addSymbolicConstraint(
                            currClause, symbstr);
                    }
                    arrOnLHS = false;
                }
                    )+
                )
        ;

primaryExpr
        :       i:ID     
        {
            ClauseFactory factory = factories.elementAt(currentFac);

            if ( inStatement || (inFunction && inDeclaration)) { 
                if (nextVarsNeeded) {
//                    System.out.println("Set attribute 1");
                    #primaryExpr.setAttribute("expression",
                        new Expression(
                            factory.getNextVarName(i.getText()),
                            factory.getSymbolicNextVarName(i.getText())));
                } else {
//                    System.out.println("Set attribute 2");
                    #primaryExpr.setAttribute("expression",
                        new Expression(
                            factory.getCurrVarName(i.getText()),
                            factory.getSymbolicCurrVarName(i.getText())));
                }
//                System.out.println("Set attribute 3");
                #primaryExpr.setAttribute("currvar",
                    new Expression(
                        factory.getCurrVarName(i.getText()),
                        factory.getSymbolicCurrVarName(i.getText())));

                // Store variable name
//                System.out.println("Set attribute 4");
                #primaryExpr.setAttribute("vartext", i.getText()); 

        	       /*
        	       if ( nextVarsNeeded ){
        	       	factories.elementAt(currentFac).clauseRefVar(currClause,i.getText());
        	       }
        	       */
            }
        }
        |       n:Number 
        { 
            if (inDeclaration)
            currentInitializerValue = Double.parseDouble(n.getText()) ; 

//            System.out.println(currentInitializerValue.toString());

            if ( inStatement || (inDeclaration && inFunction)) {
//                System.out.println("Set attribute 5");
                #primaryExpr.setAttribute("expression",
                    new Expression(n.getText(), n.getText()));
            }
                
        }
        |       charConst
        |       stringConst

// JTC:
// ID should catch the enumerator
// leaving it in gives ambiguous err
//      | enumerator

        |       #( NExpressionGroup e:expr ) 
        {
            Expression e_obj = (Expression)(e.getAttribute("expression"));

//            System.out.println(String.format("type %d string %s", 
 //                   e_obj.getType(), e_obj.toString()));

            if (e_obj.getType() == Expression.GENERAL) {
//                System.out.println("Set attribute 6");
                #primaryExpr.setAttribute("expression",
                    new Expression(e_obj.getType(), 
                        "(" + e_obj.toString() + ")",
                        e_obj.toString_symbolic()));
            } else {
                // e_obj.isLogical()

                Expression e_opp = (Expression)(e.getAttribute("opposite"));

//                System.out.println("Set attribute 7");

                #primaryExpr.setAttribute("expression", e_obj);

//                System.out.println("Set attribute 8");

                #primaryExpr.setAttribute("opposite", e_opp);

            }
        }
        ;

argExprList
        :   
            {
                explist = new Vector<Expression>();
            }
                ( e:expr
            {
                Expression e_obj =
                (Expression)(e.getAttribute("expression"));
           
//                if (e_obj == null) System.out.println("NULL");
     
                explist.add(new Expression(e_obj.toString(),
                        e_obj.toString_symbolic()));
            } 
        		)+ 
            {
                #argExprList.setAttribute("arglist", explist);
            }
        ;



protected
charConst
        :       CharLiteral
        ;


protected
stringConst
        :       #(NStringSeq (StringLiteral)+)
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
