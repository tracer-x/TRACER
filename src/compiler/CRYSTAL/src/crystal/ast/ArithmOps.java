package crystal.ast;

public enum ArithmOps {
	Plus, Minus, Times, Mod, Div;
	
	public static final int PLUS = 1;
	public static final int MINUS = 2;
	public static final int TIMES = 3;
	public static final int MOD = 4;
	public static final int DIV = 5;
	
	public ArithmOps fromInt(int i) {
		switch (i) {
		case PLUS :  return Plus;
		case MINUS : return Minus;
		case TIMES : return Times;
		case MOD :   return Mod;
		case DIV :   return Div;
		default:     assert false; return null;
		}
	}
	
	public int toInt() {
		switch(this) {
		case Plus:  return PLUS;
		case Minus: return MINUS;
		case Times: return TIMES;
		case Mod:   return MOD;
		case Div:   return DIV;
		default:    assert false; return 0;
		}
	}
	
	public String toString() {
		switch (this) {
		case Plus  : return "+";
		case Minus : return "-";
		case Times : return "*";
		case Mod   : return "%";
		case Div   : return "/";
		}
		return null;
	}
}