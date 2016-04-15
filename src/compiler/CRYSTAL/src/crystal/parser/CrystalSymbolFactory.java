package crystal.parser;

import crystal.ast.*;

public class CrystalSymbolFactory 
	implements java_cup.runtime.SymbolFactory 
{
	public Token newSymbol(String name, int id, 
				java_cup.runtime.Symbol left, 
				java_cup.runtime.Symbol right, Object value) 
	{
		Token ltok = (Token)left;
		Token rtok = (Token)right;

		if (value instanceof ASTNode)
			((ASTNode)value).setLocation(ltok.file, 
					ltok.left, ltok.right, 
					rtok.rline, rtok.rcol);
		
		return new Token (id, ltok.file, 
						ltok.left, ltok.right, 
						rtok.rline, rtok.rcol, value);
	}

	public Token newSymbol(String name, int id, 
				java_cup.runtime.Symbol left, 
				java_cup.runtime.Symbol right) 
	{
		Token ltok = (Token)left;
		Token rtok = (Token)right;
		return new Token (id, ltok.file, 
				ltok.left, ltok.right, 
				rtok.rline, rtok.rcol, name);
	}

	public Token newSymbol(String name, int id, Object value) {
		throw new RuntimeException("unimplemented");
	}

	public Token newSymbol(String name, int id) {
		throw new RuntimeException("unimplemented");
	}

	public Token startSymbol(String name, int id, int state) {
		Token tok = new Token(id, state);
		return tok;
	}
}
