package crystal.ast;

public enum LogicalOps {
	And, Or, Not;
	
	public static final int AND = 6;
	public static final int OR = 7;
	public static final int NOT = 8;

	public LogicalOps fromInt(int i) {
		switch (i) {
		case AND : return And;
		case OR :  return Or;
		case NOT : return Not;
		default:   assert false; return null;
		}
	}

	public int toInt() {
		switch (this) {
		case And : return AND;
		case Or:   return OR;
		case Not : return NOT;
		default:   assert false; return 0;
		}
	}

	public String toString() {
		switch (this) {
		case And : return "&&";
		case Or  : return "||";
		case Not : return "!";
		}
		return null;
	}
}
