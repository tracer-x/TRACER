package crystal.general;

public class PointerType extends Type {
	private static final long serialVersionUID = 3257847675528755504L;

	private Type target;

    public PointerType(Type target, int flags) {
        this.target = target;
        this.quals = (flags & Flags.QUALS);      
    }

    public PointerType(Type target) {
        this.target = target;
    }

    public Type getTargetType() {
    	return target;
    }
    
    public boolean isPointer() {
    	return true;
    }
    
    public int numTypeKids() {
    	return 1;
    }
    
    public Type getTypeKid(int i) {
    	if (i == 0) return target;
    	else return null;
    }
    
	public <S,T> S accept(TypeVisitor<S,T> v, T o) {
		return v.visit(this, o);
	}

    String stringRep;
	
    public String toString() {
	if (stringRep == null)
		stringRep = "ptr(" + target.toString() + ")";
        return stringRep;
    }
}
