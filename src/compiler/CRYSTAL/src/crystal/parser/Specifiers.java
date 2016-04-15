package crystal.parser;

import crystal.general.*;

public class Specifiers {
    Type type;
    int flags;

    Specifiers(int flags) {
        this.flags = flags;
    }

    Specifiers(Type type) {
        this.type = type;
    }

    Specifiers() { }

    public Type getType() throws SemanticError {
    	/* if no type specified, assume int. */
        if (type == null && !Flags.hasType(flags)) 
        	type = Type.SignedInt;
        
        if (type != null && Flags.hasType(flags))
        	throw new SemanticError("multiple type specifiers");

        if (type != null)
            return type;
        
        Type t = Type.fromFlags(flags);

        if (t == null)
            throw new SemanticError("invalid type specifiers.");

        return t;
    }

    public boolean hasFlags(int n) {
        return (flags & n) != 0;
    }
    
    public void setFlags(int n) {
    	flags |= n;
    }

    public void clearFlags(int n) {
    	flags &= ~n;
    }

    int qualifiers() {
        return flags & Flags.QUALS;
    }
    
    boolean qualifiersOnly() {
        return (flags & ~Flags.QUALS) == 0;
    }
    
    public Specifiers merge(Specifiers other) throws SemanticError {
        if ((this.type != null && other.type != null) ||
            (this.type != null && Flags.isPrimitiveType(other.flags)) ||
            (other.type != null && Flags.isPrimitiveType(this.flags)))
            throw new SemanticError("multiple types in declaration.");

        if ((this.flags & other.flags) != 0)
            throw new SemanticError("multiple occurences of a specifier " +
            		                "in a declaration");

        this.flags |= other.flags;

        if (other.type != null)
            this.type = other.type;

        return this;
    }    
}

