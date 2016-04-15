package crystal.general;

public class AggrNameType extends Type {
	private static final long serialVersionUID = 3257847662559900217L;

	private Symbol sym;
    
    public AggrNameType(Symbol s) {
        sym = s;
    } 
    
    public AggregateType getStructType() {
    	Type type = sym.getType();
    	assert type == null || type instanceof AggregateType;
    	AggregateType st = (AggregateType) type;
    	return st;
    }
    
    public Type unwrap() {
        if (sym.getType() == null)
            return null;
    	return sym.getType().unwrap();
    }
    
    /** Returns the most specific type for this possible, removing 
    typedef and struct name wrapping if possible. If the type is incomplete,
    the AggrNameType will be returned*/
    public Type mostSpecificType() {
        if (sym.getType() == null)
            return this;
    	return sym.getType().mostSpecificType();
    }


    public Symbol getTypeSymbol() {
    	return sym;
    }
    
    public void setTypeSymbol(Symbol sym) {
    	this.sym = sym;
    }
    
    public int numTypeKids() {
    	return 0;
    }
    
    public Type getTypeKid(int i) {
    	return null;
    }
    
    public String toString() {
    	return Flags.kindToString(sym.getKind()) + 
	    	   "(" + sym.getIdName() + ")";
    }

    public <S,T> S accept(TypeVisitor<S,T> v, T o) {
		return v.visit(this, o);
	}
}

