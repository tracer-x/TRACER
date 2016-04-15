package crystal.general;

public class Flags {
    /* storage specifiers */
    public static final int STORAGE      = 000000077;
    public static final int TYPEDEF      = 000000001;
    public static final int EXTERN       = 000000002;
    public static final int STATIC       = 000000004;
    public static final int AUTO         = 000000010;
    public static final int REGISTER     = 000000020;
    public static final int INLINE       = 000000040;

    /* type qualifiers */
    public static final int QUALS        = 000000700;
    public static final int CONST        = 000000100;
    public static final int VOLATILE     = 000000200;
    public static final int RESTRICT     = 000000400;

    /* primitive types */
    public static final int PRIMTYPES    = 000037000;
    public static final int VOID         = 000001000;
    public static final int INTEGER      = 000002000;
    public static final int COMPLEX      = 000004000;
    public static final int FLOAT        = 000010000;
    public static final int DOUBLE       = 000020000;

    /* sizes for numeric types */
    public static final int SIZES        = 001740000;
    public static final int CHAR         = 000040000;
    public static final int SHORT        = 000100000;
    public static final int INT          = 000200000;
    public static final int LONG         = 000400000;
    public static final int LONGLONG     = 001000000;

    /* signs for numeric integer types */
    public static final int SIGNS        = 006000000;
    public static final int SIGNED       = 002000000;
    public static final int UNSIGNED     = 004000000;

    /* cannot have more than one var/fun/type with the same
     * name in a scope */
    public static final byte KIND 	   = 014;

    public static final byte VAR       = 004;
    public static final byte FUN       = 005;
    public static final byte TYPE      = 006;

    /* cannot have more than one struct/union/enum with the 
     * same name in a scope */
    public static final byte SUE 	   = 010;
    public static final byte STRUCT    = 010;
    public static final byte UNION     = 011;
    public static final byte ENUM      = 012;
    
    /* statement labels */
    public static final byte LABEL     = 000;

    
    /* symbol status */
    public static final byte DEFINED   = 010;
    public static final byte COMMON    = 004;
    public static final byte DECLARED  = 002;
    public static final byte NONE      = 001;

    /* other flags */
    
    /* indicates that the symbol's address has been taken */
    static final byte ADDR_TAKEN  = 0001;
    
    /* indicates that the symbol doesn't have a name in the source,
     * and the compiler has automatically generated a name for it */
    static final byte ANONYM      = 0002;

    /* indicates that this is the first field of a structure */
    static final byte FIRST_FIELD = 0004; 

    /* indicates that this is a function parameter */
    static final byte PARAMETER   = 0010; 

    /* indicates that this is a shadow parameter */
    static final byte SHADOW      = 0020; 

    /* indicates that this is a global variable */
    static final byte GLOBAL      = 0040; 

    /* indicates that the code refers to this symbol */
    static final byte ACCESSED    = 0100; 

    
    static public boolean isPrimitiveType(int n) {
        return (n & (PRIMTYPES | SIZES | SIGNS)) != 0;
    }
    
    static public String kindToString(byte n) {
        switch (n) {
        case FUN     : return "fun";
        case VAR     : return "var";
        case TYPE    : return "type";
        case STRUCT  : return "struct";
        case UNION   : return "union";
        case ENUM    : return "enum";
        case LABEL   : return "label";
        default      : assert false; 
        }
        return null;
    }    

    /** Check kind equivalence, with struct/union/enum in the same class, 
     * and var/fun/type in the same class */
    public static boolean sameKind(byte x, byte y) {
    	return (x & KIND) == (y & KIND);
    }
        
    static public char statusToChar(byte n) {
        if (n >= DEFINED)       return 'D';
        else if (n >= COMMON)   return 'C';
        else if (n >= DECLARED) return 'E';
        else if (n >= NONE)     return 'N';
        
        assert false;
        return ' ';
    }    

    /** Check if a specifier has any bits that refer to a type. */
    public static boolean hasType(int k) {
    	return (k & (PRIMTYPES | SIZES | SIGNS)) != 0;
    }

	public static boolean isSUETag(byte kind) {
		return kind == STRUCT || kind == ENUM || kind == UNION;
	}
}
