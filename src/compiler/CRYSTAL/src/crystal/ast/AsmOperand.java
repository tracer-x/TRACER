package crystal.ast;

import java.io.*;

public class AsmOperand implements Serializable {
	private static final long serialVersionUID = -2631609555901798258L;

	String id;
	String desc;
	Expression expr;
	
	public AsmOperand(String i, StringExpr d, Expression e) {
		id = i;
		desc = d.toString();
		expr = e;
	}
}
