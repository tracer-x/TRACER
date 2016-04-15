package crystal.parser;

public class Token extends java_cup.runtime.Symbol {
	String file;
	int rline, rcol;

	public int getLine() {
		return left;
	}
	
	public int getCol() {
		return right;
	}
	
	public int getLeftLine() {
		return left;
	}
	
	public int getLeftCol() {
		return right;
	}
	
	public int getRightLine() {
		return rline;
	}
	
	public int getRightCol() {
		return rcol;
	}
	
	public Token(int id, String f, int line, int col, 
			String text) 
	{
		super(id, line, col, text);
		file = f;
		rline = line;
		rcol = col + text.length();
	}

	public Token(int id, String f, int line, int col, 
			String text, Object value) 
	{
		super(id, line, col, value);
		file = f;
		rline = line;
		rcol = col + text.length();
	}
	
	public Token(int id, String f, int ll, int lr, int rl, int rr, 
			Object value) 
	{
		super(id, ll, lr, value);
		file = f;
		rline = rl;
		rcol = rr;
	}

	public Token(int id, int state) {
		super(id);
		parse_state = state;
	}

	public String toString() {
		return value + " \t(file '" + file + "', line " + 
			left + ":" + right + "-" + rline + ":" + rcol + ")";
	}
}
