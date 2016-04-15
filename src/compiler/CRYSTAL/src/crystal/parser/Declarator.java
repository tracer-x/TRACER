package crystal.parser;

import crystal.general.*;
import crystal.ast.*;

public abstract class Declarator {
    Declarator base;
    String asm;

    private static int c = 1;    

    public Symbol getSymbol(Specifiers s, byte status) throws SemanticError {
        Type basetype = s.getType();
        Type type = getType(basetype);

        byte kind = Flags.VAR;
        if ((s.flags & Flags.TYPEDEF) != 0)
            kind = Flags.TYPE;
        else if (type instanceof FunType) 
        	kind = Flags.FUN;

        byte storage = (byte) (s.flags & Flags.STORAGE);

        IdDeclarator idd = getIdDeclarator();
        String name = idd.name;
        boolean anonym = (name == null);
        if (anonym)  
        	name = Options.ANONYM_DECL_PREFIX + (c++);

        Symbol sym;
        if (kind == Flags.FUN)
        	sym = new Function(name, (FunType)type, status, storage, asm);
        else
        	sym = new Symbol(name, type, kind, status, storage);
                
        sym.setLoc(idd.loc);
        
        if (anonym)
        	sym.setAnonymous();
        
        return sym;
    }

    IdDeclarator getIdDeclarator() {
        Declarator d = this;
        while (d.base != null) d = d.base;
        assert(d instanceof IdDeclarator); 
        return (IdDeclarator)d;
    }
    
    Type getType(Type t) {
        return t;
    }

	public Declarator fill(Declarator d) {
		if (base == null) base = d;
		else base.fill(d);
		return this;
	}

}

class IdDeclarator extends Declarator {
    String name;
    Loc loc;
    
    IdDeclarator(String n, Loc l) {
    	assert n != null;
        base = null;
        name = n;
        loc = l;
    }

    IdDeclarator() {
        base = null;
    }
    
    Type getType(Type t) {
        return t;
    }
}

class PointerDeclarator extends Declarator {
    int quals;

    PointerDeclarator(Declarator b, Specifiers s) { 
        base = b;
        if (s != null) {
        	assert (s.qualifiersOnly());
        	quals = s.qualifiers();
        }
    }

    Type getType(Type t) {
        Type pt = new PointerType(t, quals);
        return base.getType(pt);
    }
}

class ArrayDeclarator extends Declarator {
    Expression expr;

    ArrayDeclarator(Declarator b, Expression e) { 
        base = b;
        expr = e;
    }

    Type getType(Type t) {
        Type at = new ArrayType(t, expr);
        return base.getType(at);
    }
}

class InitDeclarator extends Declarator {
    Initializer init;
    
    InitDeclarator(Declarator b, Initializer i) {
        base = b;
        init = i;
    }

    Type getType(Type t) {
        return base.getType(t);
    }
}

class FunDeclarator extends Declarator {
    FunSymtab symtab;

    FunDeclarator(Declarator b, FunSymtab s) { 
        base   = b;
        symtab = s;
    }

    Type getType(Type t) {
        FunType ft = new FunType(t);
        for (Symbol sym : symtab.getParams())
        	ft.addArg(sym.getType());

        return base.getType(ft);
    }
}

