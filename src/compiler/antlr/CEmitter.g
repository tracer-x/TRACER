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


class CEmitter extends TreeParser;


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

    public TNode parseNode = null;

    String tab = "";
    String delayed = "";
    String globalStuff = "";

    boolean getFuncName = false;
    String currFunc = null;
    boolean inFunc = false;
    boolean inAssign = false;
    int delayedEmit = 0;
    int noEmit = 0;
    boolean emitSTAR = false;
    boolean inLHSOfAssign = false;
    boolean exprHasPtr = false;
    String ptrvar = null;

    int NONDETnum = 1;
    int MAXNONDETnum = 0;

    Map<String,Set<String>> gmod = new HashMap<String,Set<String>>();

    void initGMod() {
        for(String f : Main.emitter.factoryMap.keySet()) {
            if(f == null || gmod.get(f) != null) fatal("827135");
            Set<String> modvars = new HashSet<String>();

            Block b = Main.emitter.factoryMap.get(f).blockList.elementAt(0); // first block is func block
            if(b == null) fatal("827136");
            
            for(Variable v : b.getReferencedGlobalVariables())
                modvars.add(v.getName());

            gmod.put(f, modvars);
        }

//        System.out.println("GMOD:");
//        for(String f : gmod.keySet())
//            System.out.println(f + "::" + gmod.get(f));
    }

    public BufferedWriter bw;
    public File file;

    void print(String s) {
        if(delayedEmit > 0)
            delayed += s;
        else {
            try {
                bw.write(s);
                bw.flush();
            }
            catch (Exception e) {
                fatal("901231");
            }
        }
    }

    void printDelayed() {
        try {
            bw.write(delayed);
            bw.flush();
        }
        catch (Exception e) {
            fatal("901232");
        }
    }

    void clearDelayed() {
        delayed = "";
    }

    void emit(Object o) {
        if(noEmit > 0) return;

        String s = o.toString();
        print(s);
        print(" ");

        // indentation (to some extent)
        if(s.endsWith("{"))
            tab = tab + "\t";
        if(s.endsWith("}"))
            tab = tab.substring(1);
        if(s.endsWith(";") || s.endsWith("{") || s.endsWith("}"))
            print("\n" + tab);
    }

    void unsupported(String s) {
        fatal("unsupported construct: " + s);
    }

    void fatal(String s) {
        System.out.flush();
        if(parseNode != null) System.err.println("\nfatal error in line: " + parseNode.getLineNum());
        System.err.println(s);
        System.exit(1);
    }

    String newNONDET() {
        if(NONDETnum > MAXNONDETnum)
            MAXNONDETnum = NONDETnum;
        return "ADNONDET" + NONDETnum++;
    }

    void resetNONDET() {
        NONDETnum = 1;
    }

    void replaceCall(String func) {
        if(gmod.get("func_" + func) == null) return;
        for(String var : gmod.get("func_" + func))
            if(!var.contains("$"))
                emit(var + " = " + newNONDET() + ";");
            else { // var is a heap
                if(!var.startsWith("H$")) continue;
                Vector<String> eq = PAHelper.getEquivalenceClass(var);
                for(String v : eq) {
                    Matcher m1 = (Pattern.compile("(\\w+)\\.(\\w+)")).matcher(v);
                    Matcher m2 = (Pattern.compile("\\&\\((\\w+)\\.(\\w+)\\)")).matcher(v);

                    if(m1.matches()) {
                        /* do nothing because assigning to *p does not change p */
                    }
                    else if(m2.matches()) {
                        /* assigning to *p changes all ADDRESSES that p is aliased to (&x, &y etc)*/
                        if(m2.group(1).equals(currFunc) || m2.group(1).equals("GLOBAL"))
                            emit(m2.group(2) + " = " + newNONDET() + ";");
                    }
                    else fatal("123096");
                }
            }
    }

    void replacePtrAssignment(String var) {
        if(!OPTIONS.ALIAS_ANALYSIS)
            fatal("pointer encountered in function " + currFunc + ". " +
                "run with -alias y -include-pointers y, else invariants may be unsound.");
        emit("/* ptr assignment to var: " + ptrvar + " */;");
        ClauseFactory cf = Main.emitter.factoryMap.get("func_" + currFunc);
        if(cf == null) return;

        String heap;
        if(cf.getVariables().contains(new Variable(var)))
            heap = PAHelper.getHeap(currFunc, var);
        else // var is global variable
            heap = PAHelper.getHeap("GLOBAL", var);

        Vector<String> eq = PAHelper.getEquivalenceClass(heap);
        for(String v : eq) {
			Matcher m1 = (Pattern.compile("(\\w+)\\.(\\w+)")).matcher(v);
			Matcher m2 = (Pattern.compile("\\&\\((\\w+)\\.(\\w+)\\)")).matcher(v);

            if(m1.matches()) {
                /* do nothing because assigning to *p does not change p */
            }
            else if(m2.matches()) {
                if(m2.group(1).equals(currFunc) || m2.group(1).equals("GLOBAL"))
                    emit(m2.group(2) + " = " + newNONDET() + ";");
            }
            else fatal("696898");
        }
        emit("/* end ptr assignment to var: " + ptrvar + " */;");
    }
}

translationUnit  options {
    defaultErrorHandler=false;
}
{
    File tmpfile = new File(file.getAbsolutePath() + ".tmp");
    initGMod();
    try {
        bw = new BufferedWriter(new FileWriter(tmpfile));
    }
    catch (Exception e) {
        fatal("888213");
    }
}
:       ( externalList )? 
{
    try {
        bw.close();
        BufferedReader br;

        br = new BufferedReader(new FileReader(tmpfile));
        bw = new BufferedWriter(new FileWriter(file));

        bw.write("int NONDET;");
        bw.newLine();
        for(int i = 1; i <= MAXNONDETnum; i++) {
            bw.write("int ADNONDET" + i + " ;");
            bw.newLine();
        }
        bw.flush();

        String line;
        while((line = br.readLine()) != null) {
            bw.write(line);
            bw.newLine();
        }

        bw.flush();
        bw.close();
        br.close();
        tmpfile.delete();
    }
    catch(Exception e) {
        fatal("373357");
    }

    AbstractDomain ad = new AbstractDomain(file.getAbsolutePath());
    Vector<String> funcsWithLoop = new Vector<String>();

    for(String func : gmod.keySet()) {
        ClauseFactory cf = Main.emitter.factoryMap.get(func);
        if(cf == null || cf.loopStartPPs.size() == 0) continue;
        funcsWithLoop.add(func);
    }

    int count = 0;
    for(String func : funcsWithLoop) {
        if(ad.initLoopInvariants(func.substring(5) /* remove "func_" */))
            count++;
    }

    file.delete();
    DEBUG.fprintln("Abstract domain done for: " + count + "/" + funcsWithLoop.size() + " functions with loops");
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
:       declaration
|       functionDef
|       asm_expr
|       SEMI { emit(";"); }
|       typelessDeclaration
;

typelessDeclaration
{
    parseNode = #typelessDeclaration;
}
:       #(NTypeMissing initDeclList SEMI { emit(";"); })
;

asm_expr
{
    parseNode = #asm_expr;
    unsupported("asm_expr");
}
:       #( "asm" ( "volatile" )? LCURLY expr RCURLY ( SEMI )+ )
;

declaration
{
    parseNode = #declaration;
}
:       #( NDeclaration 
        declSpecifiers 
        (
         initDeclList
        )?
        {
        }
        ( SEMI { emit(";"); } )+
        )
;


declSpecifiers 
{
    parseNode = #declSpecifiers;
}
:       ( storageClassSpecifier
        | typeQualifier
        | typeSpecifier
        )+
;

storageClassSpecifier
{
    parseNode = #storageClassSpecifier;
}
:       "auto" { emit("auto"); }
|       "register" { emit("register"); }
|       "typedef" { emit("typedef"); }
|       functionStorageClassSpecifier
;


functionStorageClassSpecifier
{
    parseNode = #functionStorageClassSpecifier;
}
:       "extern" { emit("extern"); }
|       "static" { emit("static"); }
|       "inline" { emit("inline"); }
;


typeQualifier
{
    parseNode = #typeQualifier;
}
:       "const" { emit("const"); }
|       "volatile" { emit("volatile"); }
;


typeSpecifier
{
    parseNode = #typeSpecifier;
}
:       "void" { emit("int"); }
|       "char" { emit("int"); }
|       "short" { emit("int"); }
|       "int" { emit("int"); }
|       "long" { emit("int"); }
|       "float" { emit("int"); }
|       "double" { emit("int"); }
|       "signed"
|       "unsigned"
|       { noEmit++; } structSpecifier { noEmit--; emit("int"); } ( attributeDecl )* 
|       unionSpecifier  ( attributeDecl )*
|       enumSpecifier
|       { noEmit++; }
        typedefName
        {
            noEmit--;
            emit("int");
        }
|       #("typeof" { emit("typeof"); } LPAREN { emit("("); }
        ( (typeName )=> typeName 
          | expr
        )
        RPAREN { emit(")"); }
        )
|       "__complex" { emit("__complex"); }
;


typedefName
{
    parseNode = #typedefName;
}
:       #(NTypedefName i:ID) { emit(i.getText()); }
;


structSpecifier
{
    parseNode = #structSpecifier;
}
:   #( "struct" { emit("struct"); } structOrUnionBody )
;

unionSpecifier
{
    parseNode = #unionSpecifier;
}
:   #( "union" { emit("union"); } structOrUnionBody )
;

structOrUnionBody
{
    parseNode = #structOrUnionBody;
}
:       (
        (ID LCURLY) => id:ID { emit(id.getText()); } LCURLY { emit("{"); }
        ( structDeclarationList )?
        RCURLY { emit("}"); }

        |   LCURLY { emit("{"); }
        ( structDeclarationList )?
        RCURLY { emit("}"); }

        | id2:ID  { emit(id2.getText()); }
        )
;

structDeclarationList
{
    parseNode = #structDeclarationList;
}
:       ( structDeclaration { emit(";"); } )+
;

structDeclaration
{
    parseNode = #structDeclaration;
}
:      specifierQualifierList
structDeclaratorList
;

specifierQualifierList
{
    parseNode = #specifierQualifierList;
}
:       (
        typeSpecifier
        | typeQualifier
        )+
;

structDeclaratorList
{
    parseNode = #structDeclaratorList;
}
:       ( structDeclarator )+
;

structDeclarator
{
    parseNode = #structDeclarator;
}
:
#( NStructDeclarator    
        ( declarator)?
        ( COLON { emit(":"); } expr )?
        ( attributeDecl )*
)
;

enumSpecifier
{
    parseNode = #enumSpecifier;
}
:   #(  "enum" { emit("enum"); }
        ( i:ID { emit(i.getText()); } )? 
        ( LCURLY { emit("{"); }
        enumList
        RCURLY { emit("}"); } )?
     )
;


enumList
{
    parseNode = #enumList;
}
:       ( enumerator { emit(","); } )+
;

enumerator
{
    parseNode = #enumerator;
}
:       i:ID { emit(i.getText()); }
        ( ASSIGN { emit("="); }
        expr )?
;

attributeDecl:
{
    parseNode = #attributeDecl;
    unsupported("__attribute");
}
#( "__attribute" (.)* )
| #( NAsmAttribute LPAREN expr RPAREN )
;

initDeclList {
    parseNode = #initDeclList;
}
:       ( initDecl )+
;


initDecl
{
    parseNode = #initDecl;
}
:       #( NInitDecl
        declarator
        ( attributeDecl )*
        ( ASSIGN { emit("="); } initializer
          | COLON { emit(":"); } expr
        )?
        ) 
;

pointerGroup
{
    parseNode = #pointerGroup;
}
:       #( NPointerGroup ( STAR { if(emitSTAR) emit("*"); else emit("/* ptr */"); } ( typeQualifier )* )+ )
;


idList
{
    parseNode = #idList;
}
:       i:ID { emit(i.getText()); } ( COMMA { emit(","); } j:ID { emit(j.getText()); } )*
;

initializer
{
    parseNode = #initializer;
}
:       #( NInitializer (initializerElementLabel)? expr )
|   lcurlyInitializer
;

initializerElementLabel
{
    parseNode = #initializerElementLabel;
}
:   #( NInitializerElementLabel
        (
         ( LBRACKET { noEmit++; emit("["); } expr RBRACKET { emit("]"); noEmit--; } (ASSIGN { emit("="); })? )
         | i:ID { emit(i.getText()); } COLON { emit(":"); }
         | DOT { emit("."); } j:ID { emit(j.getText()); } ASSIGN { emit("="); }
        )
     )
;

lcurlyInitializer
{
    parseNode = #lcurlyInitializer;
}
:  #( NLcurlyInitializer
        { emit("{"); }
        initializerList
        RCURLY { emit("}"); }
    )
;

initializerList
{
    parseNode = #initializerList;
}
:       ( initializer )*
;


declarator
{
    parseNode = #declarator;
    String s = currFunc;
}
:   #( NDeclarator
        ( pointerGroup
        )?
        ( id:ID {
            emit(id.getText());
            if(getFuncName)
                if(currFunc != null) fatal("827192");
                else { currFunc = id.getText(); getFuncName = false; }
        } 
          | LPAREN { emit("("); } 
          declarator
          RPAREN { emit(")"); }
        )
        (   #( NParameterTypeList
               { if(s != null) noEmit++; emit("("); }
               (
                parameterTypeList
                | (idList)?
               )
               RPAREN { emit(")"); if(s != null) noEmit--; }
             )
            | LBRACKET { noEmit++; emit("["); } ( arrsize: expr )? RBRACKET { emit("]"); noEmit--; }
        )*
     ) 
;

parameterTypeList
{
    parseNode = #parameterTypeList;
}
:       ( parameterDeclaration ( COMMA { emit(","); } | SEMI { emit(";"); } )? )+ ( VARARGS { emit("..."); } )?
;

parameterDeclaration
{
    parseNode = #parameterDeclaration;
}
:       #( NParameterDeclaration 
        declSpecifiers
        (declarator | nonemptyAbstractDeclarator)?
        )
;

functionDef
{
    parseNode = #functionDef;
    if(inFunc) fatal("971522");
    else inFunc = true;
}
:   #( NFunctionDef 
        (
        functionDeclSpecifiers)?
        { getFuncName = true; } declarator
        (declaration | VARARGS { emit("..."); })*
        compoundStatement
     )
{ inFunc = false; currFunc = null; resetNONDET(); }
;

functionDeclSpecifiers
{
    parseNode = #functionDeclSpecifiers;
}
:       
( functionStorageClassSpecifier
  | typeQualifier
  | typeSpecifier
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
:   #("__label__" { emit("__label__"); } (i:ID { emit(i.getText()); })+ )
;

compoundStatement
{
    parseNode = #compoundStatement;
}
:       #( NCompoundStatement
        { emit("{"); }
        ( declarationList
          | functionDef
        )*
        ( statementList )?
        RCURLY { emit("}"); }
        )

;

statementList
{
    parseNode = #statementList;
}
:       ( statement { emit(";"); } )+
;

statement
{
    parseNode = #statement;
}
:        
statementBody
;

statementBody {
    parseNode = #statementBody;
}
:       SEMI { emit(";"); }
|       compoundStatement
|       #( NStatementExpr 
        expr
        )
|       #( "while" { emit("while"); emit("("); delayedEmit++; exprHasPtr = false; }
        expr
        {
            delayedEmit--;
            if(exprHasPtr) emit("NONDET");
            else printDelayed();
            clearDelayed();
            exprHasPtr = false;
            emit(")");
        }
        statement
        )
|       #( "do" { unsupported("do"); } 
        statement
        expr
        )
|       #( "for" { unsupported("for"); }
        expr
        expr
        expr
        statement
        )
|       #( "goto" { emit("goto"); } i:ID { emit(i.getText()); } )
|       "continue"  { emit("continue"); }	
|       "break" { emit("break"); }
|       #( "return" { emit("return"); delayedEmit++; exprHasPtr = false; }
        ( expr )?
        {
            delayedEmit--;
            if(!exprHasPtr) printDelayed();
            clearDelayed();
            exprHasPtr = false;
        }
        )
|       #( NLabel id:ID { emit(id.getText()); emit(":"); } 
        (statement)? 
        )
|       #( "case" { emit("case"); }
        expr { emit(":;"); }
        (statement)?
        )
|       #( "default" { emit("default :;"); }
        (statement)? 
        )
|       #( 
        "if" { emit("if"); emit("("); delayedEmit++; exprHasPtr = false; }
        expr
        {
            delayedEmit--;
            if(exprHasPtr) emit("NONDET");
            else printDelayed();
            clearDelayed();
            exprHasPtr = false;
            emit(")");
        }
        statement 
        (
         "else" { emit("else"); } 
         statement
        )? )
|       #( "switch" { emit("switch"); } 
        { emit("("); delayedEmit++; exprHasPtr = false; }
        expr
        {
            delayedEmit--;
            if(exprHasPtr) emit("NONDET");
            else printDelayed();
            clearDelayed();
            exprHasPtr = false;
            emit(")");
        }
        statement
        )
;

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
;

/* FIXME */
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
:   #(LPAREN { emit("("); } compoundStatement RPAREN { emit(")"); })
;

rangeExpr
{
    parseNode = #rangeExpr;
    unsupported("rangeExpr");
}
:   #(NRangeExpr expr VARARGS { emit("..."); } expr)
;

gnuAsmExpr
{
    parseNode = #gnuAsmExpr;
}
:   #(NGnuAsmExpr { unsupported("gnuAsmExpr"); }
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
    unsupported("strOptExprPair");
}
:  stringConst ( LPAREN expr RPAREN )?
;

assignExpr
{
    parseNode = #assignExpr;
    boolean ignoreRHS = false;
}
:       #( ASSIGN {
            inAssign = true;
            inLHSOfAssign = true;
            delayedEmit++;
            exprHasPtr = false;
            ptrvar = null;
        }
        expr {
            delayedEmit--;
            if(!exprHasPtr) {
                printDelayed();
                emit("=");
            }
            else {
                if(ptrvar == null)
                    fatal("117087");
                replacePtrAssignment(ptrvar);
                ignoreRHS = true;
            }
            clearDelayed();
            inLHSOfAssign = false;
            exprHasPtr = false;
            ptrvar = null;
            delayedEmit++;
        }
        expr {
            delayedEmit--;
            if(!ignoreRHS) {
                if(!exprHasPtr) printDelayed();
                else emit(newNONDET() + ";");
            }
            clearDelayed();
            exprHasPtr = false;
            inAssign = false;
        }
        ) 
|       #( DIV_ASSIGN expr { unsupported("DIV_ASSIGN"); } expr )
|       #( PLUS_ASSIGN expr { unsupported("PLUS_ASSIGN"); } expr )
|       #( MINUS_ASSIGN expr { unsupported("MINUS_ASSIGN"); } expr )
|       #( STAR_ASSIGN expr { unsupported("STAR_ASSIGN"); } expr )
|       #( MOD_ASSIGN expr { unsupported("MOD_ASSIGN"); } expr )
|       #( RSHIFT_ASSIGN expr { unsupported("RSHIFT_ASSIGN"); } expr )
|       #( LSHIFT_ASSIGN expr { unsupported("LSHIFT_ASSIGN"); } expr )
|       #( BAND_ASSIGN expr { unsupported("BAND_ASSIGN"); } expr )
|       #( BOR_ASSIGN expr { unsupported("BOR_ASSIGN"); } expr )
|       #( BXOR_ASSIGN expr { unsupported("BXOR_ASSIGN"); } expr )
;

conditionalExpr
{
    parseNode = #conditionalExpr;
    unsupported("conditionalExpr");
}
:       #( QUESTION expr (expr)? COLON expr )
;

logicalOrExpr
{
    parseNode = #logicalOrExpr;
}
:       #( LOR expr { emit("||"); } expr) 
;

logicalAndExpr
{
    parseNode = #logicalAndExpr;
}
:       #( LAND expr { emit("&&"); } expr )
;

inclusiveOrExpr
{
    parseNode = #inclusiveOrExpr;
    exprHasPtr = true; /* hack */
}
:       #( BOR expr { emit("|"); } expr 
        )
;

exclusiveOrExpr
{
    parseNode = #exclusiveOrExpr;
    exprHasPtr = true; /* hack */
}
:       #( BXOR expr { emit("^"); } expr
        )
;

bitAndExpr
{
    parseNode = #bitAndExpr;
    exprHasPtr = true; /* hack */
}
:       #( BAND expr { emit("&"); } expr
        )
;

equalityExpr
{
    parseNode = #equalityExpr;
}
    :       
    #( EQUAL expr { emit("=="); } expr)
|   #( NOT_EQUAL expr { emit("!="); } expr)
;

relationalExpr
{
    parseNode = #relationalExpr;
}
    :       #( LT expr { emit("<"); } expr)
    |       #( LTE expr { emit("<="); } expr)
    |       #( GT expr { emit(">"); } expr)
    |       #( GTE expr { emit(">="); } expr)
;

shiftExpr
{
    parseNode = #shiftExpr;
    exprHasPtr = true; /* hack */
}
:   #( LSHIFT expr { emit("<<"); } expr )
|   #( RSHIFT expr { emit(">>"); } expr )
;

additiveExpr
{
    parseNode = #additiveExpr;
}
:       #( PLUS expr { emit("+"); } expr)
|       #( MINUS expr { emit("-"); } expr)
;

multExpr
{
    parseNode = #multExpr;
}
:       #( STAR expr { emit("*"); } expr)
|       #( DIV expr { emit("/"); } expr)
|       #( MOD expr { emit("%"); } expr)
;

castExpr
{
    parseNode = #castExpr;
}
:       #( NCast { noEmit++; emit("("); }
        typeName RPAREN { emit(")"); noEmit--; } e:expr
        { String v = (String) e.getAttribute("var");
        if(v != null)
            #castExpr.setAttribute("var", v);
        }
        )
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
        (   { emitSTAR = true; } pointerGroup { emitSTAR = false; }
            (   (LPAREN { emit("("); } 
                 (   nonemptyAbstractDeclarator
                     | parameterTypeList
                 )?
                 RPAREN { emit(")"); })
                | (LBRACKET { emit("["); } (expr)? RBRACKET { emit("]"); })
            )*
            |  (   (LPAREN { emit("("); } 
                    (   nonemptyAbstractDeclarator
                        | parameterTypeList
                    )?
                    RPAREN { emit(")"); })
                | (LBRACKET { emit("["); } (expr)? RBRACKET { emit("]"); })
               )+
        )
     )
;

unaryExpr 
{
    parseNode = #unaryExpr ;
}
:       #( INC { unsupported("INC"); } expr )
|       #( DEC { unsupported("DEC"); } expr )
|       #( NUnaryExpr unaryOperator 
        expr)
|       #( "sizeof" { noEmit++; emit("sizeof"); }
        ( ( LPAREN typeName )=> LPAREN { emit("("); } typeName RPAREN { emit(")"); }
          | expr 
        )
        { noEmit--; emit(newNONDET()); }
        )
|       #( "__alignof" { emit("alignof"); }
        ( ( LPAREN typeName )=> LPAREN { emit("("); } typeName RPAREN { emit(")"); }
          | expr
        )
        )
;

unaryOperator
{
    parseNode = #unaryOperator;
}
:       BAND {
            exprHasPtr = true;
            emit("&");
        }
|       STAR {
            exprHasPtr = true;
            emit("*");
        }
|       PLUS { emit("+"); }
|       MINUS { emit("-"); }
|       BNOT { emit("~"); }
|       LNOT { emit("!"); }
|       LAND { emit("&&"); }
|       "__real" { emit("__real"); }
|       "__imag" { emit("__imag"); }
;

postfixExpr
{
    parseNode = #postfixExpr;
    noEmit++;
}
:       
#( NPostfixExpr 
    pe:primaryExpr 
    ( PTR { // arrow notation (->)
        exprHasPtr = true;
        if(ptrvar == null)
            ptrvar = (String) pe.getAttribute("var");
        emit("->");
    }
    i: ID { emit(i.getText()); }
|   DOT {
        exprHasPtr = true;
        if(ptrvar == null)
            ptrvar = (String) pe.getAttribute("var");
        emit(".");
    }
    j:ID { emit(j.getText()); }
|   #( NFunctionCallArgs
    (argExprList)? RPAREN 
    {
        String callee = (String) pe.getAttribute("var");
        noEmit--;
        if(inAssign) emit(newNONDET() + ";");
        replaceCall(callee);
        noEmit++;
    } )
|   LBRACKET {
        exprHasPtr = true;
        if(ptrvar == null)
            ptrvar = (String) pe.getAttribute("var");
        emit("[");
    }
    expr
    RBRACKET {
        emit("]");
    }
|   INC { unsupported("INC"); }
|   DEC { unsupported("DEC"); }
    )+
) { noEmit--; }
;

primaryExpr
{
    parseNode = #primaryExpr;
}
:   i:ID {
        emit(i.getText());
        #primaryExpr.setAttribute("var", i.getText());
        if(inAssign && inLHSOfAssign && exprHasPtr && ptrvar == null)
            ptrvar = i.getText();
    }
|   n:Number {
        String t = n.getText();
        if(t.endsWith("UL"))
            t = t.substring(0, t.length()-2);
        if(t.endsWith("U") || t.endsWith("L"))
            t = t.substring(0, t.length()-1);
        emit(t);
    }
|   charConst
|   stringConst
// JTC:
// ID should catch the enumerator
// leaving it in gives ambiguous err
//      | enumerator
|   #( NExpressionGroup { emit("("); } e:expr { emit(")"); }
    { String v = (String) e.getAttribute("var");
    if(v != null)
        #primaryExpr.setAttribute("var", v);
    }
    )
;

argExprList
{
    parseNode = #argExprList;
    boolean unary = true;
}
:   
( { if(!unary) emit(","); } e:expr { unary = false; } )+ 
;

protected
charConst
:       c:CharLiteral { emit(c.getText()); }
;


protected
stringConst
:       #(NStringSeq (e:StringLiteral { emit(e.getText()); })+)
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
