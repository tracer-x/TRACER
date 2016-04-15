package crystal.parser;

public class SemanticError extends Exception {
	private static final long serialVersionUID = -1470800876836457632L;

	public String file;
	public int line;
    public String message;

    public SemanticError(String m) {
        file = Lexer.getSourceFile();
        line = Lexer.getSourceLine();
        message = m;        
    }
    
    public static void err(String msg) {
    	throw new RuntimeException("\nError: " + msg);
    }
}
