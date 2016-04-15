package crystal.general;

import java.util.*;

public class FunType extends Type {
	private static final long serialVersionUID = 3545800987551019832L;

	Type rettype;
    List<Type> args;
	boolean voidargs;

    public FunType(Type r) {
        rettype = r;
        args = new ArrayList<Type>(3);
        voidargs = false;
    }
    
    public void addArg(Type type) {
    	args.add(type);
    }
    
    public void setArg(int i, Type type) {
    	args.set(i,type);
    }
    
    public Type getReturnType() {
    	return rettype;
    }
    
    public boolean hasVoidArgs() {
    	return voidargs;
    }
    
    public void setVoidArgs() {
    	voidargs = true;
    }
    
    public int numArgs() {
    	return args.size();
    }
    
    public Type getArg(int i) {
    	return args.get(i);
    }
    
	public boolean isFunction() {
		return true;
	} 
    
    public int numTypeKids() {
    	return args.size() + 1;
    }
 
    public Type getTypeKid(int i) {
		if (i == 0) 
			return rettype;
		else if (0 < i && i <= args.size())
			return args.get(i-1);
		else
			return null;
    }
    
    public String toString() {
        String s = "(";
        int i = 0;
        for (Type t : args) {
            if (i++ != 0) s += ", ";
            s += t.toString();
        }
        return s + ") -> " + rettype.toString();
    }

	public <S,T> S accept(TypeVisitor<S,T> v, T o) {
		return v.visit(this, o);
	}	
}
