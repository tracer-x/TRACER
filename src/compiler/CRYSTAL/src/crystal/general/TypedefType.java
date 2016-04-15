package crystal.general;

public class TypedefType extends Type {
    private static final long serialVersionUID = 3689630285373648944L;
    
	public Symbol sym;
    
    public TypedefType(Symbol s) {
        sym = s;
    } 

    public Type getBaseType() {
    	return sym.getType();
    }
    
    public Symbol getTypeSymbol() {
    	return sym;
    }
    
    public void setTypeSymbol(Symbol sym) {
    	this.sym = sym;
    }

    /** Unwrap typedef types. */
    public Type skipTypedefs() {
    	return sym.getType().skipTypedefs();
    }

    /** Remove typedef and struct name wrapping. This method will never  
        return an  AggrNameType, but may return null if this type is incomplete */
    public Type unwrap() {
    	return sym.getType().unwrap();
    }
    
    /** Returns the most specific type for this possible, removing 
    typedef and struct name wrapping if possible. If the type is incomplete,
    the AggrNameType will be returned*/
    public Type mostSpecificType() {
    	return sym.getType().mostSpecificType();
    }
    
    public int numTypeKids() {
    	return 0;
    }
    
    public Type getTypeKid(int i) {
    	return null;
    }
    
	public <S,T> S accept(TypeVisitor<S,T> v, T o) {
		return v.visit(this, o);
	}
	
    public String toString() {
        return "typedef(" + sym.getIdName() + ")";
    }
}
