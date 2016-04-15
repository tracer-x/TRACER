package crystal.parser;

import java.util.*;

import crystal.ast.*;
import crystal.general.*;
import crystal.util.*;

public class Actions {
	private static final boolean SANITY_CHECKS = true;
	
	/* A global symbol table for all files parsed so far. */
	private static HashSymtab allglobal = null;
	
	/* The block where initializations must go. When we're at the file scope,
	 * this block is the body of the file-wide initialization function */
	private static Stack<BlockStat> initBlockStack = new Stack<BlockStat>();

    /* The main and startup functions */
    private static Function mainfun = null;
    private static List<Function> inits = new ArrayList<Function>();

    /* Indicates we're parsing old-style parameters. */
    private static Symtab oldStyleParams = null;
    
    /* A stack of symbols to be initialized. */
    protected static Stack<Symbol>initStack = new Stack<Symbol>();

    /* A stack of specifiers */
    protected static Stack<Specifiers> specifiersStack = new Stack<Specifiers>();
    
    /* The stack of scopes where struct/union/enum symbols are added.
     * Different than the Symtab's scope stack when we enter nested
     * struct scopes. When the top of the stack is null, we're in a 
     * function param scope, and no new struct declarations are allowed. */
    private static Stack<Symtab> structScopeStack = new Stack<Symtab>();
    
    /* counter for default struct names */
    private static int c = 1;

    /** Process a declaration and enter the symbol it declares 
     *  in the appropriate symbol table. Uses the specifiers on
     *  top of the specifiers stack. Returns the declared symbol.
     *  @param popit: if true, pop the specifier stack
     *  @param init: if true, the declaration initializes the symbol */
    static Symbol processDeclaration(Declarator d, boolean popit, boolean init) 
    		    throws SemanticError 
    {
        Specifiers s = popit ? specifiersStack.pop()
                             : specifiersStack.peek();

        Symbol sym = d.getSymbol(s, Flags.DECLARED);

        /* function param void declarations must be alone. */
        if (sym.getType() == Type.Void) {
        	Symtab stab = Symtab.getCurrentScope();
        	if (stab instanceof FunSymtab) {
            	FunSymtab fstab = (FunSymtab) stab;
            	if (fstab.hasVoidArgs() || fstab.getParams().size() > 0)
            		error("void argument must be alone");            	
            	fstab.setVoidArgs();
            	return sym;
        	}
        }

        boolean oldStyle = oldStyleParams == Symtab.getCurrentScope();
    	Symtab crt = Symtab.getCurrentScope();
    	Symtab global = Symtab.getGlobalScope();
    	boolean globalScope = crt.getParent() == global;
        boolean declaredExtern = s.hasFlags(Flags.EXTERN); 
        boolean declaredStatic = s.hasFlags(Flags.STATIC);
        boolean declaredTypedef = s.hasFlags(Flags.TYPEDEF);
    	boolean defaultExtern = 
    		!declaredTypedef && !declaredStatic &&
    		(sym.isFunction() || crt instanceof FileSymtab);
        boolean isExtern = declaredExtern || defaultExtern; 
        
    	if (declaredExtern && declaredStatic)
    		error("declaration is both extern and static");
            	
    	if (declaredTypedef && (declaredStatic || declaredExtern))
    		error("typedef cannot be extern or static");    		
    	
    	if (init && declaredTypedef)
    		error("typedef cannot be initialized");    		
    	
    	if (init && declaredExtern)
    		error("extern symbol cannot be initialized");    		
    	
        /* calculate symbol status */
        byte status;
        if(declaredExtern || sym.isFunction())
        	status = Flags.DECLARED;
        else if (declaredTypedef || init || !globalScope)
        	status = Flags.DEFINED;
        else
        	status = Flags.COMMON;
        sym.setStatus(status);
        
        /* the symtab where the symbol will be inserted. */
        Symtab thetab = crt;

        if (isExtern && !oldStyle) {
        	checkAll(sym, crt, global);
        	thetab = global;
        }
        
        Symbol oldsym = thetab.lookupSymbol(sym);

        if (oldsym == null) {
        	if (oldStyle) 
        		error("invalid old-style parameter " + sym.getQuotName());
            thetab.insertSymLocal(sym);
            return sym;        	
        } else {
        	if (oldStyle) 
        		oldsym.setType(sym.getType());
        	else 
        		setSymbolInfoFrom(sym, oldsym);
        	
        	return oldsym;	
        }
    }

    private static void setSymbolInfoFrom(Symbol newsym, Symbol oldsym) 
    					throws SemanticError 
    {
		if (newsym.getKind() != oldsym.getKind())
			error(newsym.getQuotName() + 
					" redeclared as a different kind of symbol");

		if (newsym.isDefined() && oldsym.isDefined() && 
				(!newsym.isFunction() || newsym.isInline()))
			error("redefinition of " + newsym.getQuotName());
    		
		Order ord = TypeEquiv.cmpByName(newsym.getType(), oldsym.getType());

		if (ord == Order.INCOMPATIBLE) 
			error("conflicting types for " + newsym.getQuotName() + 
					"\n" + newsym.getType() + "\n" + oldsym.getType());
		
		if (ord == Order.GREATER)
			oldsym.setType(newsym.getType());
	        		
		oldsym.addInfoFrom(newsym);
    }
    
	private static void checkAll(Symbol sym, Symtab tab, Symtab global) 
    	throws SemanticError
    {
    	Symbol oldsym = null;
    	while (tab != null && tab != global) {
    		oldsym = tab.lookupSymbol(sym);
    		if (oldsym != null)
    			error("Shadowed declaration for " + sym.getQuotName());
    		tab = tab.getParent();
    	}
    }
    
    static void addSpecifier(Specifiers s) throws SemanticError {
    	Specifiers crt = specifiersStack.peek();
    	if (crt != null)
    		crt.merge(s);
    	else {
    		specifiersStack.pop();
    		specifiersStack.push(s);
    	}
    }
    
    static void addInitializer(Symbol sym, Initializer init) 
    	throws SemanticError 
    {
    	BlockStat iblock = initBlockStack.peek();
    	
		if (sym.isLocal() && sym.isStatic()) {
    		HashSymtab current = (HashSymtab)Symtab.getCurrentScope();
    		assert current.lookupSymbol(sym) == sym;
    		promoteLocalInitStatic(current, sym);
    		
    		Set<Symbol> set = new HashSet<Symbol>();
    		collectStaticsInInits(init, set);
    		for (Symbol s : set)
    			promoteLocalInitStatic(current, s);
    		
    		iblock = initBlockStack.get(0);
    	}

		if (sym.isGlobal() && !Options.STARTUP_FUNCTIONS) {
    		FileSymtab filetab = getFileScope();
    		sym.setInitializer(init, filetab);
    		iblock = null;
    	}

    	initialize(new VarExpr(sym), init, iblock);
    }
    
	/** Move initialized, function-static variables to the file scope */
	private static void promoteLocalInitStatic(HashSymtab tab, Symbol sym) {
		tab.removeSymLocal(sym);
		getFileScope().forceInsertLocal(sym);
		sym.setGlobal();

		/* move the necessay types out, too. */
		Set<Symbol> typeSymbols = new HashSet<Symbol>();
		collectTypeSymbols(sym.getType(), tab, typeSymbols);
		for (Symbol typesym : typeSymbols) 
			getFileScope().forceInsertLocal(typesym);
	}

	private static void collectTypeSymbols(Type type, HashSymtab tab,
			Set<Symbol> set) 
	{
		Symbol tsym = type.getTypeSymbol();
		if (tsym != null && tab.lookupSymbol(tsym) == tsym) {
			tab.removeSymLocal(tsym);
			set.add(tsym);
		}
		
		for (int i = 0; i < type.numTypeKids(); i++)
			collectTypeSymbols(type.getTypeKid(i), tab, set);
	}

	private static FileSymtab getFileScope() {
    	Symtab crt = Symtab.getCurrentScope();
    	while (crt.getParent().getParent() != null)
    		crt = crt.getParent();
		return (FileSymtab)crt;
	}

	static private void initialize(Expression e, Initializer init, 
    		                       BlockStat block) throws SemanticError 
    {
    	Type t = e.getType().unwrap();
    	Expression ie = init.getSingleInit();
    	
    	if (init instanceof InitExpr || specialCase(t, ie)) {
    		if (t.isArray()) {
    			ArrayType at = (ArrayType)t;
    			Type elem = at.getElementType();
    			assert isChar(elem) && ie.getType().isPointer();
    			if (at.getExpression() == null) {
    				int len = ((StringExpr)ie).length();
    				at.setExpression(len + 1);
    			}
    			if (block != null) {
    				Symtab global = Symtab.getGlobalScope();
    				Symbol fun = global.lookupSymbol(Flags.FUN, "strcpy");
    				if (fun == null) fun = Builtins.get("strcpy");
    				fun.setAccessed();

    				Expression func = new VarExpr(fun);
    				List<Expression> args = new ArrayList<Expression>();
    				args.add(coerceCharPtrType(e));
    				args.add(ie);    			
    				block.add(new ExprStat(new CallExpr(func, args)));
    			}
    		
    			return;
    		}
    		
    		if (block != null)
    			block.add(new ExprStat(new AssignExpr(e, ie)));
    		
    		return;
    	}
    	
		InitList il = (InitList)init;
		for (InitElement elem : il.fill(t)) 
			initialize(elem.getElement(e), elem.getValue(), block);
    }
    
	private static boolean specialCase(Type t, Expression ie) {
		return ie instanceof StringExpr 
			&& t instanceof ArrayType 
			&& isChar(((ArrayType)t).getElementType());
	}

	private static boolean isChar(Type type) { 
		Type t = type.skipTypedefs();
		return t.isPrimitive("char") 
			|| t.isPrimitive("signed char") 
			|| t.isPrimitive("unsigned char");
	}

	private static Expression coerceCharPtrType(Expression e) {
		Type type = e.getType().unwrap();
		Type tgt = type.getTargetType();
		return isChar(tgt) ? e : new CastExpr(Type.CharPtr, e);
	}

	/** Push a function scope. */
    static void pushFunScope(Declarator d, boolean oldstyle) 
                throws SemanticError 
    {    	
    	FunDeclarator fd = getFunDeclarator(d);        
        if (fd == null)
        	error("incorrect function declarator.");

    	if (oldstyle) 
    		oldStyleParams = fd.symtab;

        Symtab.pushScope(fd.symtab);
        structScopeStack.push(null);
    }

    private static FunDeclarator getFunDeclarator(Declarator d) {
        FunDeclarator fd = null;
        for (Declarator crt = d; crt != null; crt = crt.base)
        	if (crt != null &&
        		crt instanceof FunDeclarator &&
        		crt.base instanceof IdDeclarator) {
        		fd = (FunDeclarator)crt; 
        		break;
        	}
        return fd;
    }
    
    /** Fixup function symbol after an old style param declaration. */
    static void setFunSymbol(Declarator d, boolean hasspec) 
                throws SemanticError 
    {
    	oldStyleParams = null;

    	/* Assume signed int if nothing specified. */
        Specifiers s;
        if (hasspec) 
        	s = specifiersStack.pop();
        else
        	s = new Specifiers(Type.SignedInt);

        /* build the function symbol */
        Function sym = (Function) d.getSymbol(s, Flags.DEFINED);

        Symtab global = Symtab.getGlobalScope();
        Symtab current = Symtab.getCurrentScope().getParent();
        boolean declaredExtern = (s.flags & Flags.EXTERN) != 0;
        boolean declaredStatic = (s.flags & Flags.STATIC) != 0;
        boolean declaredInline = (s.flags & Flags.INLINE) != 0;
        boolean declaredTypedef = (s.flags & Flags.TYPEDEF) != 0;
    	boolean defaultExtern = !declaredStatic;
        boolean isExtern = declaredExtern || defaultExtern; 

        sym.setSpecifiers(declaredStatic, declaredExtern, declaredInline);
        
    	if (declaredExtern && declaredStatic)
    		error("declaration is both extern and static");

    	if (declaredTypedef)
    		error("function cannot be declared typedef");

    	Symbol oldsym = current.lookupSymbol(sym);
    	if (oldsym != null && oldsym.isStatic()) {
    		if (declaredExtern)
    			error("function previously declared static");
    		else if (!declaredStatic)
    			isExtern = false;
    	}    			

    	Symtab thetab = null;
    	if (oldsym == null) {
    		thetab = isExtern ? global : current;

    		/* check if the extern "skips over" other declarations */
    		if (isExtern) 
    			checkAll(sym, current, global);

    		oldsym = thetab.lookupSymbol(sym);
    	}
    	
        if (oldsym == null) {
	        thetab.insertSymLocal(sym);
        }
        else {
        	setSymbolInfoFrom(sym, oldsym);
        	
        	Function fun = (Function)oldsym;
        	fun.setInfoFrom(sym);
        	sym = fun;
        }

        FunDeclarator fd = getFunDeclarator(d);
        fd.symtab.setFunctionSymbol(sym);
        if (fd.symtab.hasVoidArgs())
        	((FunType)sym.getType()).setVoidArgs();
        
        assert structScopeStack.peek() == null;
        structScopeStack.pop();
    }
    
    /** Return any existing label with this name, or add a new one, 
     *  also considering local label scope extension */
    static Label lookupOrAddLabel(String name) {
        Symtab current = Symtab.getCurrentScope();
        Label sym = current.isGnuLocalLabel(name) ? 
        		current.lookupLabelLocal(name) :
        		Symtab.lookupLabelRecurse(name);
        
        return sym != null ? sym : Symtab.addLabel(name);
    }

    static LabelStat makeLabelStatement(String id, Statement stmt) 
    	throws SemanticError {
    	Label labelSym = Actions.lookupOrAddLabel(id);
    	if (labelSym.isDefined())
    		error("Multiple definitions of label " + id);
       
    	LabelStat labelStat = new LabelStat(labelSym, stmt);
    	labelSym.setLabelStat(labelStat);
    	return labelStat;
    }
    
	public static void markLocalLabel(String id) {
		HashSymtab tab = (HashSymtab)Symtab.getCurrentScope();
		tab.markGnuLocalLabel(id);
	}

    private static class GotoChecker extends SimplePass {
    	/* Queue up the error as we can't throw it through the visitor */
    	SemanticError error; 
    	
        void checkGotos(BlockStat body) throws SemanticError {
            process(body);
            if (error != null) throw error;
        }

        protected void localVisitPre (GotoStat e) {
            Label ls = e.getLabel();
            if (!ls.isCommon())
               error = new SemanticError("use of undefined label " + 
               		                           ls.getQuotName());
        }
    }

    /** Extract the type of the specifier on top of the
     * specifiers stack. Combine it with declarator d, if non-null. */
    static Type getType(Declarator d) throws SemanticError {
    	Specifiers s = specifiersStack.pop();
    	Type t = s.getType();    	
    	if (d == null) return t;
    	else return d.getType(t);
    }
    
    /** Pop a function scope. */
    static void popFunScope(BlockStat body) 
    throws SemanticError 
    {
    	Symtab st = Symtab.getCurrentScope();
    	if (!(st instanceof FunSymtab)) 
    		error("expected function symtab");

    	FunSymtab fst = (FunSymtab)st;
    	Function fun = fst.getFunctionSymbol();
    	(new GotoChecker()).checkGotos(body);
    	fun.setBody(body);
    	fun.setParams(fst.getParams());
    	Symtab.popScope();

    	if (fun.getName().equals("main")) 
    		mainfun = fun;
    }
    
    /** Push a new scope for parsing parameters. */
    static void pushParamScope() {
    	Symtab.pushScopeNoLink(new FunSymtab());
    	structScopeStack.push(null);
    }
    
    /** Pop the parameter scope. */
    static Declarator popParamScope(Declarator d) {
        FunSymtab fs = (FunSymtab)Symtab.popScope();
        assert structScopeStack.peek() == null;
        structScopeStack.pop();
        if (d == null) d = new IdDeclarator();
        return new FunDeclarator(d, fs);
    }

    /** Push a statement block scope. */
    static void pushBlockScope() {
    	HashSymtab newscope = new HashSymtab();
    	Symtab.pushScope(newscope);
        structScopeStack.push(newscope);
        initBlockStack.push(new BlockStat(newscope));
    }
    
    /** Pop a statement block scope. */
    static BlockStat popBlockScope() {
        Symtab.popScope();
        structScopeStack.pop();
    	return initBlockStack.pop();
    }
    
    static void addStatement(Statement s) {
    	initBlockStack.peek().add(s);
    }
    
    /** Push a scope for declarations in a struct, union, or enum. */
    static void pushStructScope(byte kind, String id) 
                throws SemanticError 
    {
    	boolean unnamed = (id == null);
    	if (unnamed)
    		id = Options.ANONYM_STRUCT_PREFIX + (c++);
    	
    	Symtab scope = structScopeStack.peek();
    	if (scope == null)
        	error("struct definition in parameter list");
        
        Symbol sym = scope.lookupSUELocal(id);
        
        if (sym != null) {
        	if (sym.getKind() != kind)
        		error("incorrect kind for " + sym.getQuotName());
            
        	if (sym.getType() != null)
        		error("redefinition of " + sym.getQuotName());
        } 
        else {
            sym = Symbol.newStruct(id, kind);
            if (unnamed) sym.setAnonymous();
            scope.insertSymLocal(sym);
        }

        StructSymtab symtab = new StructSymtab(kind);
        symtab.tag = sym;
        Symtab.pushScopeNoLink(symtab);
        /* no pushing on structScopeStack! */
    }

    /** Pop a struct/union/enum scope and create its type. */
    static Type popStructScope(int kind) throws SemanticError {
        /* no popping off structScopeStack! */
    	Symtab scope = structScopeStack.peek();
    	StructSymtab stab = (StructSymtab)Symtab.popScope(); 
    	AggregateType type = new AggregateType(stab.kind);
        for (Symbol s : stab.getVFTSymbols()) 
            if (s.getKind() == Flags.VAR) 
                type.addField(s);
            else 
            	error("invalid declaration in struct.");
        
        Symbol sym = stab.tag;
        if (sym.getType() != null) 
            error("redefinition of " + sym.getQuotName());
        
        sym.setType(type);
        sym.setStatus(Flags.DEFINED);
        
        if (type.isEnum()) {
			Type ent = new AggrNameType(sym);
			for (int i = 0; i < type.numFields(); i++) {
				Symbol enumsym = type.getField(i);
				Symbol oldsym = scope.lookupVFTLocal(enumsym.getName());
				if (oldsym != null)
					error("redefinition of " + enumsym.getQuotName());

				enumsym.setType(ent);
				scope.insertSymLocal(enumsym);
			}
        }

        return new AggrNameType(sym);
    }

    /** Enter a struct/union/enum name in current scope. */
    static Type enterStructName(byte k, String id) throws SemanticError {
        Symbol sym = Symtab.getCurrentScope().lookupSUERecurse(id);
        if (sym != null) {
            if (sym.getKind() != k)
                error("incorrect kind for " + sym.getQuotName());
        } else {
            sym = Symbol.newStruct(id, k);
            Symtab scope = structScopeStack.peek();
            if (scope == null)
            	error("struct declaration in parameter list");
            
            scope.insertSymLocal(sym);
        }

        return new AggrNameType(sym);
    }

    /** Enter an enumeration symbol in the current enum scope. */
    static void enterEnumId(String id, Expression e, Loc l) 
    	throws SemanticError 
    {
        Symbol sym = new EnumConstant(id, e);
        sym.setLoc(l);
        Symbol oldsym = Symtab.getCurrentScope().lookupSymbol(sym);
        
        if (oldsym != null) 
            error("multiple occurrences of " + id );

        Symtab.getCurrentScope().insertSymLocal(sym);
    }
    
    /** Adds a nested struct with no declarator. */
    static void processNestedStruct() throws SemanticError {
    	Type t = specifiersStack.peek().getType();
    	if (!(t instanceof AggrNameType))
    		error("fields with no declarators must be structs.");

    	Actions.processDeclaration(new IdDeclarator(), false, true);
   }
    
    /** Creates an empty global void -> void function with given name, 
     * and returns the symbol */
    static private Function makeInitFunction(String name) 
    	throws SemanticError 
   {
        /* Create function scope. */
        FunSymtab fst = new FunSymtab();
        Symtab.pushScope(fst);
        
        /* ... and the body scope */
        HashSymtab tab = new HashSymtab();
		Symtab.pushScope(tab);
        
        /* Create symbol */
        Function fs = Function.initFun(name, Lexer.getFile());
        fst.setFunctionSymbol(fs);
                
        /* Exit function body scope. */
        Symtab.popScope();
        
        /* Exit function scope */
        popFunScope(new BlockStat(tab));
                
        /* insert the symbol, register the function */
        Symtab.getGlobalScope().insertSymLocal(fs);
        
        return fs;
    }

    /** Helper function: make sure that the name is a valid ID */
    static String escapeName(String name) {
        StringBuffer out = new StringBuffer();
        for (int i = 0; i < name.length(); i++)
            if (Character.isLetter(name.charAt(i)) ||
            	Character.isDigit(name.charAt(i)))
                out.append(name.charAt(i));
            else
                out.append('_');
        return out.toString();
    }
    
    /** Push a file scope. */
    static void pushFileScope() throws SemanticError {
    	Symtab.setGlobalScope(new HashSymtab());

        /* Do the actual scope-pushing */
    	FileSymtab filetab = new FileSymtab(Lexer.getFile());
        Symtab.pushScope(filetab);
        structScopeStack.push(filetab);
    
        /* Create a function for global file-level initializations */
        String name = escapeName(Options.FILE_STARTUP_PREFIX + Lexer.getFile());
        Function initFn = makeInitFunction(name);
        initBlockStack.push(initFn.getBody());
        inits.add(initFn);
    }
    
    /** Pop a file scope. */
    static void popFileScope() throws SemanticError {
    	assert specifiersStack.isEmpty();
    	
        final HashMap<Symbol,Symbol> map = new HashMap<Symbol,Symbol>();
        HashSymtab gtab = Symtab.getGlobalScope();
    	FileSymtab filetab = (FileSymtab)Symtab.popScope();
    	structScopeStack.pop();
        initBlockStack.pop();

        /* Remove the initializer if it is empty */
        int last = inits.size() - 1;
        Function initFn = inits.get(last);
        if (initFn.getBody().numStatKids() == 0) {
        	initFn.getSymTab().getParent().detach();
        	inits.remove(last);
        	Symtab.getGlobalScope().removeSymLocal(initFn);
        }
        
        /* collect functions defined in this file */
        Set<Function> filefuncs = new HashSet<Function>();
    	for (Symbol sym : gtab.getVFTSymbols()) {
        	if (!sym.isFunction()) continue;
        	Function fun = (Function)sym;        	
        	if (fun.isDefined()) filefuncs.add(fun);
    	}        
    	for (Symbol sym : filetab.getVFTSymbols()) {
        	if (!sym.isFunction()) continue;
        	Function fun = (Function)sym;
        	if (fun.isDefined()) filefuncs.add(fun);
    	}        
    	
    	/* move var/fun symbols from the file scope to allglobal.
    	 * Extern symbols that are not used in this file are not moved. */
        if (allglobal == null) 
        	allglobal = new HashSymtab();

        Iterator<Map.Entry<String, Symbol>> it;
        it = gtab.getVFTMap().entrySet().iterator();
        while (it.hasNext()) {
        	Map.Entry<String, Symbol> e = it.next();
        	Symbol sym = e.getValue();
        	
        	if (sym.isCommon() || sym.isAccessed()) 
        	{
            	it.remove();
        		moveSymbol(sym, allglobal, map, filefuncs);
        	}
        }
        
		/* move typdefs, struct/union/enum names, and enum constants */
        it = filetab.getSUEMap().entrySet().iterator();
        while (it.hasNext()) {
        	Map.Entry<String, Symbol> e = it.next();
        	Symbol sym = e.getValue();
        	it.remove();
    		moveSymbol(sym, allglobal, map, filefuncs);
        }

        it = filetab.getVFTMap().entrySet().iterator();
        while (it.hasNext()) {
        	Map.Entry<String, Symbol> e = it.next();
        	Symbol sym = e.getValue();
        	if (!sym.isStatic() && 
        			(sym.getKind() == Flags.TYPE || 
        			 sym instanceof EnumConstant)) {
            	it.remove();
        		moveSymbol(sym, allglobal, map, filefuncs);
        	}
        }
                
        /* fix references in symbol tables and in the AST. */
        allglobal.addKid(filetab);
        fixupSymtab(allglobal, map);
        for (Function fun : filefuncs)
    		fixupAST(fun.getBody(), fun.getSymTab(), map);
        
        /* cleanup */
        Symtab.setGlobalScope(null);
        
        Symtab.recordFileFunctions(filetab.getFileName(), filefuncs);
    }
    
	private static void moveSymbol(Symbol fsym, HashSymtab tab, 
    							   Map<Symbol,Symbol> map,
    							   Set<Function> funset) 
    		throws SemanticError 
   {
    	Symbol gsym = tab.lookupSymbol(fsym);
    	if (gsym == null) {
    		if (Flags.isSUETag(fsym.getKind())) 
    			for (Symbol sym : tab.getSUESymbols()) 
    				if (sym.isAnonymous()) {
    					Type ftype = fsym.getType();
    					Type type = sym.getType();
    					if (TypeEquiv.cmpByStruct(ftype, type) == Order.EQUAL) {
    						gsym = sym;
    						break;
    					}
    				}
    		if (gsym == null) {
    			allglobal.insertSymLocal(fsym);
    			return;
    		}
    	}
    	
		map.put(fsym, gsym);
		if (funset.contains(fsym)) {
			funset.remove(fsym);
			funset.add((Function)gsym);
		}

		if (gsym.getType() == null) 
    		gsym.setType(fsym.getType());
    	else {
    		boolean fdef = fsym.isDefined();
    		boolean gdef = gsym.isDefined();
    		byte kind = fsym.getKind();
    		boolean isvar = kind == Flags.VAR && 
    		                !(fsym instanceof EnumConstant);
    		boolean isfun = fsym.isFunction();
    		
    		if (fdef && gdef && (isvar || isfun)) {
    			if (isfun && fsym.isInline()) {
    				/* ignore new defs of inline functions */
    				return;
    			}
    			error(fsym.getQuotName() + " defined in multiple files");
    		}
    		
    		Order ord;
    		if (fsym.isFunction() && gsym.isFunction()) {
    			if (fdef && !gdef) ord = Order.GREATER;
    			else if (!fdef && gdef) ord = Order.LESS;
    			else ord = Order.NONE;
    		} else
        		ord = TypeEquiv.cmpByStruct(fsym.getType(), gsym.getType());
        		
    		if (ord == Order.INCOMPATIBLE) {
	    		/* turn off warnings for enum constants */
	    		if (fsym instanceof EnumConstant) {
	    			assert gsym instanceof EnumConstant;
		    		allglobal.forceInsertLocal(fsym);
		    		return;
	    		}
    			else {
	    			error("\n\tIncompatible types for " + 
    					Flags.kindToString(fsym.getKind()) + 
    					" " + fsym.getNameAndFile());
    			}
    		}
    		
    		if (ord == Order.GREATER) {
    			if (gsym.isFunction()) 
        			((Function)gsym).setInfoFrom((Function)fsym);
    			else if (!gsym.isTag())
    				gsym.setType(fsym.getType());
    		}
    		
    		gsym.addInfoFrom(fsym);
    	}
    }

    private static void fixupAST(Statement stat, Symtab tab, 
    		Map<Symbol,Symbol> map) 
    {
    	if (stat == null) return;
	    	
    	if (stat instanceof BlockStat) 
    		tab = ((BlockStat)stat).getSymTab();
	    		
    	for (int i = 0; i < stat.numStatKids(); i++)
    		fixupAST(stat.getStatKid(i), tab, map);
			
    	for (int i = 0; i < stat.numExprKids(); i++)
    		fixupAST(stat.getExprKid(i), tab, map);
    }

    private static void fixupAST(Expression expr, Symtab tab, 
    		Map<Symbol,Symbol> map) 
    {
    	if (expr == null) return;
			
    	for (int i = 0; i < expr.numExprKids(); i++)
    		fixupAST(expr.getExprKid(i), tab, map);

    	for (int i = 0; i < expr.numTypeKids(); i++)
    		fixupType(expr.getTypeKid(i), tab, map);

    	for (int i = 0; i < expr.numStatKids(); i++)
    		fixupAST(expr.getStatKid(i), tab, map);
    		
    	if (expr instanceof VarExpr) {
    		VarExpr e = (VarExpr)expr;
    		Symbol oldvar = e.getSymbol();
    		Symbol newvar = map.get(oldvar);
    		if (newvar != null && newvar != oldvar) 
    			e.setSymbol(newvar);
		}
    	else if (expr instanceof FieldExpr) {
    		FieldExpr e = (FieldExpr)expr;
    		Symbol oldfield = e.getField();
    		Type etype = e.getBase().getType().unwrap();
    		if (e.isDeref()) 
    			etype = etype.getTargetType().unwrap();
    		AggregateType atype = (AggregateType)etype;
    		Symbol newfield = atype.getField(oldfield.getName());
    		assert newfield != null;
    		if (newfield != oldfield)
    			e.setField(newfield);
    	}
    }

    private static void fixupSymtab(Symtab tab, Map<Symbol, Symbol> map) {
    	for(Symbol sym : tab.getAllSymbols()) {
			Initializer init = sym.getInitializer();
			if (init != null)
				fixupInitializer(init, tab, map);

			fixupType(sym.getType(), tab, map);
    	}

    	for (Symtab ktab : tab.getKids())
    		fixupSymtab(ktab, map);
    }

    private static void fixupInitializer(Initializer init, Symtab tab,
    		Map<Symbol, Symbol> map) 
    {
    	if (init instanceof InitExpr) 
    		fixupAST(((InitExpr)init).getExpr(), tab, map);
    	else
    		for (InitElement i : ((InitList)init).getElems())
    			fixupInitializer(i.getValue(), tab, map);
	}

	private static void fixupType(Type t, Symtab tab, Map<Symbol, Symbol> map) 
    {
    	if (t == null) return;
    	    	
    	if (t instanceof TypedefType) {
    		TypedefType tt = (TypedefType)t;
    		Symbol sym = tt.getTypeSymbol();
    		Symbol newsym = map.get(sym);
    		if (newsym != null && newsym != sym) 
    			tt.setTypeSymbol(newsym);
    	} 
    	else if (t instanceof AggrNameType) {
    		AggrNameType st = (AggrNameType)t;
    		Symbol sym = st.getTypeSymbol();
    		Symbol newsym = map.get(sym);
    		if (newsym != null && newsym != sym)
    			st.setTypeSymbol(newsym);    		
    	} 
    	else {
    		if (t instanceof ArrayType) {
    			ArrayType at = (ArrayType)t;
    			Expression e = at.getExpression();
    			if (e != null)
    				fixupAST(e, tab, map);
    		}
    			
    		for (int i = 0; i < t.numTypeKids(); i++)
    			fixupType(t.getTypeKid(i), tab, map);
    	}
   	}
    
    /** Build an expression representing __FUNCTION__ */
    static StringExpr buildFunctionName() {
    	Symtab tab = Symtab.getCurrentScope();
    	FileSymtab filetab = tab.getEnclosingFunctionScope(); 
    	return new StringExpr(filetab.getFileName());
    }
    
    /** Build a VarExpr from an identifier name. Requires that
     *  undeclared symbols are function symbols. */
    static VarExpr buildVarExpr(String id) {
    	Symbol sym = null;
    	if (id.startsWith("__builtin_")) {
    		String strippedid = id.substring(10);
    		sym = Builtins.get(strippedid);
    		if (sym == null) id = strippedid;
    	}
		
    	if (sym == null)
			sym = Symtab.getCurrentScope().lookupVFTRecurse(id);
		
    	if (sym == null)
    		sym = Builtins.get(id);
    	
		if 	(sym == null) {
			sym = Function.defaultFun(id);
			Symtab.getGlobalScope().insertSymLocal(sym);
		}
		
		sym.setAccessed();
		return new VarExpr(sym);
    }

    /** Build a call expression. Insert function symbol into the
     *  global symtab, if not present in scope. */
    static CallExpr buildCallExpr(Expression fun, List<Expression> args) {
    	args = args == null ? new ArrayList<Expression>() : args;
    	return new CallExpr(fun, args);
    }
    
    /** Checks if all symbols in the expression are in scope. */
    static Expression checkSymbols(Expression e) throws SemanticError {
    	check(e, null, -1);
    	return  e;
	}
    
    private static void check(Expression e, Expression par, int i) 
    	throws SemanticError 
    {
    	if (e == null) return;
    	
    	if (e instanceof VarExpr &&
    			!(par instanceof CallExpr && i == 0)) {
    		VarExpr ve = (VarExpr)e;
    		Symbol sym = ve.getSymbol();
    		if (!sym.isDeclared())
    			error("Undeclared symbol " + sym.getQuotName());
    	}
    	
    	for (int k = 0; k < e.numExprKids(); k++) 
    		check(e.getExprKid(k), e, k);
    }
	
    static Expression buildCommaExpr(List<Expression> v) {
    	if (v.size() == 1)
    		return v.get(0);
    	else
    		return new CommaExpr(v);
    }

    /** Build a va-arg expression. */
    static Expression buildVaArgExpr(Expression e, Type t) {
        List<Expression> args = new ArrayList<Expression>();
        args.add(e); args.add(new SizeofExpr(t));
        Symbol sym = Builtins.get("va_arg"); 
        sym.setAccessed();
        return new CallExpr(new VarExpr(sym), args); 
    }
    
    /** Build an offsetof expression. */
    static Expression buildOffsetofExpr(Type t, String d) {
  	  List<Expression> args = new ArrayList<Expression>();
      args.add(new SizeofExpr(t)); 
      args.add(new StringExpr(d));
      Symbol sym = Builtins.get("offsetof"); 
      sym.setAccessed();
      return new CallExpr(new VarExpr(sym), args); 
    }
    
    /** Build a FieldExpr from an expression and a field name. */
    static FieldExpr buildFieldExpr(boolean deref, Expression exp, String id) 
    				 throws SemanticError {
    	Type t = ExprType.typeOf(exp);
    	if (deref) {
    		t = t.unwrap();
    		if (t instanceof PointerType)
    			t = ((PointerType)t).getTargetType();
    		else if (t instanceof ArrayType)
    			t = ((ArrayType)t).getElementType();
    		else
    			error("Non-pointer type in field dereference.");
    	}

		Type real = t.unwrap();
    	if (real == null) {
    		error("Field access for an incomplete type" + 
    				"\n\t field: " + id + 
    				"\n\t type : " + t.toString() +
    				"\n\t expr : " + ASTPrinter.toString(exp, false));
    	}

    	if (!(real instanceof AggregateType))
    		error("Field access for a non-struct type: field " + id);

    	AggregateType struct = (AggregateType)real;
    	FieldExpr fexpr = struct.buildFieldExpr(deref, exp, id);
    	if (fexpr == null) 
    		error("Invalid field " + id);
    	return fexpr;
    }

	public static Expression buildCompoundLiteral(Type t, InitList ilist) 
		throws SemanticError 
	{
		pushBlockScope();
		Symbol temp = Symbol.newTemp("__t", t);
		Symtab.getCurrentScope().insertSymLocal(temp);
		addInitializer(temp, ilist);
		initBlockStack.peek().add(new ExprStat(new VarExpr(temp)));
		return new StatExpr(Actions.popBlockScope());
	}

	public static void startParsing() {
		allglobal = new HashSymtab();
		Symtab.setGlobalScope(allglobal);
		structScopeStack.push(allglobal);
	}

	/* Promote statics: if the initializer of a global variable 
	 * refers to file-static variables, promote those static variables 
	 * to the global scope. */
    private static void promoteGlobalInitStatics() {
    	HashSymtab global = Symtab.getGlobalScope();
    	Iterable<Symbol> scan = global.getVFTSymbols();

    	while (true) {
    		Set<Symbol> promote = new HashSet<Symbol>();
    		
    		for (Symbol sym : scan) {
    			Initializer init = sym.getInitializer();
    			if (init != null) 
    				collectStaticsInInits(init, promote);
    		}
    
    		/* insert promoted symbols in the global scope */
    		for (Symbol sym : promote) {
    			global.forceInsertLocal(sym);
    			sym.unStatic();
    		}

    		/* remove promoted symbols from their file scopes */
    		int found = 0;
    		for (Symtab tab : global.getKids()) {
    			HashSymtab htab = (HashSymtab)tab;
    			for (Symbol sym : promote)
    				if (htab.lookupSymbol(sym) == sym) {
    					htab.removeSymLocal(sym);
    					found++;
    				}
    		}
    	
    		if (promote.size() != found)
    			throw new RuntimeException("Error while promoting statics.");

    		if (promote.isEmpty()) break;
    		else scan = promote;
    	}
    }

	private static void collectStaticsInInits(Initializer init, Set<Symbol> set) 
	{
		if (init instanceof InitExpr)
			collectStaticsInInits(((InitExpr)init).getExpr(), set);
		else
			for (InitElement elem: ((InitList)init).getElems())
				collectStaticsInInits(elem.getValue(), set);
	}

	private static void collectStaticsInInits(Expression e, Set<Symbol> set) {
		if (e instanceof VarExpr) {
			Symbol var = ((VarExpr)e).getSymbol();
			if (var.isStatic()) set.add(var);
		}
		
		for (int i = 0; i < e.numExprKids(); i++)
			collectStaticsInInits(e.getExprKid(i), set);
	}
    
	public static void doneParsing() {
		Symtab.setGlobalScope(allglobal);
		assert allglobal != null;
		
		if (mainfun != null)
			for (Function initFn : inits) {
				CallExpr call = new CallExpr(new VarExpr(initFn));
				mainfun.getBody().addFirst(new ExprStat(call));
				
				for (Symbol sym : initFn.getSymTab().getVFTSymbols()) 
					if (sym.hasAddressTaken())
						sym.addStorage(Flags.STATIC);
			}

		promoteGlobalInitStatics();
				
        if (SANITY_CHECKS) 
        	SanityChecks.run();
	}
	
	static void error(String msg) throws SemanticError {
		System.out.flush();
		throw new SemanticError(msg);
	}
}
