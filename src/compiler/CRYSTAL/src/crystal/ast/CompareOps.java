package crystal.ast;

public enum CompareOps {
	Less, LessEq, More, MoreEq, Eq, Neq;
	
	public static final int LESS = 9;
	public static final int LESSEQ = 10;
	public static final int MORE = 11;
	public static final int MOREEQ = 12;
	public static final int EQ = 13;
	public static final int NEQ = 14;

	public CompareOps fromInt(int i) {
		switch (i) {
		case LESS :   return Less;
		case LESSEQ : return LessEq;
		case MORE :   return More;
		case MOREEQ : return MoreEq;
		case EQ :     return Eq;
		case NEQ :    return Neq;
		default:      assert false; return null;
		}
	}

	public int toInt() {
		switch (this) {
		case Less :   return LESS;
		case LessEq : return LESSEQ;
		case More :   return MORE;
		case MoreEq : return MOREEQ;
		case Eq :     return EQ;
		case Neq :    return NEQ;
		default:      assert false; return 0;
		}
	}

	public String toString() {
		switch (this) {
		case Less   : return "<";
		case LessEq : return "<=";
		case More   : return ">";
		case MoreEq : return ">=";
		case Eq     : return "==";
		case Neq    : return "!=";
		}
		return null;
	}
}
