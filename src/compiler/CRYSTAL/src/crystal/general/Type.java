package crystal.general;

import java.io.Serializable;

public abstract class Type implements Serializable {
    int quals;
    
    public int getQuals() {
    	return quals;
    }
    
    public static final PrimitiveType Void;

    public static final PrimitiveType Char;
    public static final PrimitiveType SignedInt;
    public static final PrimitiveType SignedShort;
    public static final PrimitiveType SignedChar;
    public static final PrimitiveType SignedLong;
    public static final PrimitiveType SignedLongLong;

    public static final PrimitiveType UnsignedInt;
    public static final PrimitiveType UnsignedShort;
    public static final PrimitiveType UnsignedChar;
    public static final PrimitiveType UnsignedLong;
    public static final PrimitiveType UnsignedLongLong;

    public static final PrimitiveType Float;
    public static final PrimitiveType Double;
    public static final PrimitiveType LongDouble;

    public static final PrimitiveType ComplexFloat;
    public static final PrimitiveType ComplexDouble;
    public static final PrimitiveType ComplexLongDouble;

    public static final PrimitiveType BuiltinVaList;
    public static final PrimitiveType VarArgs;
    
    public static final PointerType CharPtr;
    public static final PointerType VoidPtr;
    public static final FunType     VoidToInt;
    public static final FunType     VoidToVoid;
    
    static {
        Void = new PrimitiveType("void", Flags.VOID);
        
        Char = new PrimitiveType("char", Flags.INTEGER | Flags.CHAR);        
        
        SignedInt = new PrimitiveType("int", 
        		Flags.INTEGER | Flags.SIGNED | Flags.INT);
        
        SignedShort = new PrimitiveType("short", 
        		Flags.INTEGER | Flags.SIGNED | Flags.SHORT);
        
        SignedChar = new PrimitiveType("signed char", 
        		Flags.INTEGER | Flags.SIGNED | Flags.CHAR);
        
        SignedLong = new PrimitiveType("long", 
        		Flags.INTEGER | Flags.SIGNED | Flags.LONG);
        
        SignedLongLong = new PrimitiveType("long long", 
        		Flags.INTEGER | Flags.SIGNED | Flags.LONGLONG);
    
        UnsignedInt = new PrimitiveType("unsigned int", 
        		Flags.INTEGER | Flags.UNSIGNED | Flags.INT);
        
        UnsignedShort = new PrimitiveType("unsigned short", 
        		Flags.INTEGER | Flags.UNSIGNED | Flags.SHORT);
        
        UnsignedChar = new PrimitiveType("unsigned char", 
        		Flags.INTEGER | Flags.UNSIGNED | Flags.CHAR);
        
        UnsignedLong = new PrimitiveType("unsigned long", 
        		Flags.INTEGER | Flags.UNSIGNED | Flags.LONG);
        
        UnsignedLongLong = new PrimitiveType("unsigned long long", 
        		Flags.INTEGER | Flags.UNSIGNED | Flags.LONGLONG);
    
        Float = new PrimitiveType("float", 
        		Flags.FLOAT);
        
        Double = new PrimitiveType("double", 
        		Flags.FLOAT | Flags.LONG);
        
        LongDouble = new PrimitiveType("long double", 
        		Flags.FLOAT | Flags.LONGLONG);
        
        ComplexFloat = new PrimitiveType("complex float", 
        		Flags.COMPLEX);
        
        ComplexDouble = new PrimitiveType("complex double", 
        		Flags.COMPLEX | Flags.LONG);
        
        ComplexLongDouble = new PrimitiveType("complex long double", 
        		Flags.COMPLEX | Flags.LONGLONG);

        BuiltinVaList = new PrimitiveType("__builtin_va_list", Flags.VOID);
        VarArgs       = new PrimitiveType("va_args", Flags.VOID);
               
        CharPtr     = new PointerType(Char);
        VoidPtr     = new PointerType(Void);
        VoidToInt   = new FunType(SignedInt);
        VoidToVoid  = new FunType(Void);
    }
    
    public static Type fromFlags(int n) {
        /* TODO: add qualifiers to types. */
        int quals = n & Flags.QUALS;
        n = n & ~Flags.QUALS & ~Flags.STORAGE;

        if (n == Flags.CHAR)
            return quals == 0 ? Char 
            		          : new PrimitiveType(Char, quals);

        if (n == (Flags.SIGNED | Flags.INT) ||
            n == (Flags.SIGNED) ||  
            n == (Flags.INT))
            return quals == 0 ? SignedInt 
            		          : new PrimitiveType(SignedInt, quals);

        if (n == (Flags.SIGNED | Flags.SHORT | Flags.INT) ||
            n == (Flags.SIGNED | Flags.SHORT) ||  
            n == (Flags.SHORT | Flags.INT) || 
            n == (Flags.SHORT))
            return quals == 0 ? SignedShort 
            		          : new PrimitiveType(SignedShort, quals);
        
        if (n == (Flags.SIGNED | Flags.CHAR))
            return quals == 0 ? SignedChar 
            		          : new PrimitiveType(SignedChar, quals);
        
        if (n == (Flags.SIGNED | Flags.LONG | Flags.INT) ||
            n == (Flags.SIGNED | Flags.LONG) ||  
            n == (Flags.LONG | Flags.INT) || 
            n == (Flags.LONG))
            return quals == 0 ? SignedLong 
            		          : new PrimitiveType(SignedLong, quals);

        if (n == (Flags.SIGNED | Flags.LONGLONG | Flags.INT) ||
            n == (Flags.SIGNED | Flags.LONGLONG) ||  
            n == (Flags.LONGLONG | Flags.INT) || 
            n == (Flags.LONGLONG))
            return quals == 0 ? SignedLongLong 
            		          : new PrimitiveType(SignedLongLong, quals);

        if (n == (Flags.UNSIGNED | Flags.INT) ||
            n == (Flags.UNSIGNED))
            return quals == 0 ? UnsignedInt 
            		          : new PrimitiveType(UnsignedInt, quals);

        if (n == (Flags.UNSIGNED | Flags.SHORT | Flags.INT) ||
            n == (Flags.UNSIGNED | Flags.SHORT))
            return quals == 0 ? UnsignedShort 
            		          : new PrimitiveType(UnsignedShort, quals);
        
        if (n == (Flags.UNSIGNED | Flags.CHAR))
            return UnsignedChar;
        
        if (n == (Flags.UNSIGNED | Flags.LONG | Flags.INT) ||
            n == (Flags.UNSIGNED | Flags.LONG))
            return quals == 0 ? UnsignedLong 
            		          : new PrimitiveType(UnsignedLong, quals);

        if (n == (Flags.UNSIGNED | Flags.LONGLONG | Flags.INT) ||
            n == (Flags.UNSIGNED | Flags.LONGLONG))
            return quals == 0 ? UnsignedLongLong 
            		          : new PrimitiveType(UnsignedLongLong, quals);


        if (n == (Flags.FLOAT)) 
            return quals == 0 ? Float 
            		          : new PrimitiveType(Float, quals);

        if (n == (Flags.DOUBLE))
            return quals == 0 ? Double 
            		          : new PrimitiveType(Double, quals);

        if (n == (Flags.DOUBLE | Flags.LONG))
            return quals == 0 ? LongDouble 
            		          : new PrimitiveType(LongDouble, quals);

        if (n == (Flags.COMPLEX)) 
            return quals == 0 ? ComplexFloat 
            		          : new PrimitiveType(ComplexFloat, quals);

        if (n == (Flags.COMPLEX | Flags.LONG))
            return quals == 0 ? ComplexDouble 
            		          : new PrimitiveType(ComplexDouble, quals);

        if (n == (Flags.COMPLEX | Flags.LONGLONG))
            return quals == 0 ? ComplexLongDouble 
            		          : new PrimitiveType(ComplexLongDouble, quals);

        return null;
    } 

    abstract public String toString();

    public Symbol getTypeSymbol() {
    	return null;
    }
    
    /** Unwrap typedef types. */
    public Type skipTypedefs() {
    	return this;
    }
    
    /** Remove typedef and struct name wrapping. This method will never  
        return an  AggrNameType, but may return null if this type is incomplete */
    public Type unwrap() {
    	return this;
    }
    
    /** Returns the most specific type for this possible, removing 
    typedef and struct name wrapping if possible. If the type is incomplete,
    the AggrNameType will be returned*/
    public Type mostSpecificType() {
    	return this;
    } 
    
    public boolean isVoid() {
    	return false;
    }
    
    public boolean isPointer() {
    	return false;
    }
    
    /** Return the target type of a pointer or array type */
    public Type getTargetType() {
    	return null;
    }
    
    public boolean isArray() {
    	return false;
    }
    
	public boolean isAggregate() {
		return false;
	}

	public boolean isStruct() {
		return false;
	}

	public boolean isUnion() {
		return false;
	}

	public boolean isEnum() {
		return false;
	}

	public boolean isPrimitive() {
		return false;
	}

	public boolean isPrimitive(String name) {
		return false;
	}

	public boolean isFunction() {
		return false;
	} 
    
    public abstract int numTypeKids();
    
    public abstract Type getTypeKid(int i);
        
    public abstract <S,T> S accept(TypeVisitor<S,T> v, T o);
}

