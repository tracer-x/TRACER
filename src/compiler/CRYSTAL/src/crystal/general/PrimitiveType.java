package crystal.general;

public class PrimitiveType extends Type {
	private static final long serialVersionUID = 3256440304805885495L;

	private String name;
	private int flags;

    protected PrimitiveType(String name, int flags) {
        this.name = name;
        this.flags = flags;
    }

    protected PrimitiveType(PrimitiveType other, int quals) {
        this.name = other.name;
        this.flags = (other.flags | quals);
    }

    public String getName() {
    	return name;
    }
    
    public boolean isVoid() { 
        return (this.flags & Flags.VOID) != 0;
    }

    public boolean isInteger() {
        return (this.flags & Flags.INTEGER) != 0;
    }

    
    public boolean isPrimitive() {
    	return true;
    }
    
    public boolean isPrimitive(String n) {
    	return name.equals(n);
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
    	return name;
    }
}

