package crystal.ast;

import crystal.general.*;
import crystal.emitc.*;

import java.io.*;


public class ASTPrinter implements 
		ExprVisitor<StringBuffer,Boolean>, 
		StatVisitor<StringBuffer,String>
{

	static private final ASTPrinter printer = new ASTPrinter();
		
	/** A string representation of expression e. 
	 * @param parens If true print parens around e. */
	public static String toString(Expression e, boolean parens) {
		return toSB(e, parens).toString();
	}

	private static StringBuffer toSB(Expression e, boolean parens) {
		assert e != null;
		return e.accept(printer, parens);
	}

	public StringBuffer visit(BinaryExpr e, Boolean b) {
		StringBuffer sb = new StringBuffer();
		if (b) sb.append("(");
		if (e.left != null) 
			sb.append(toSB(e.left, true));
		sb.append(" ").append(Ops.toString(e.getIntOp())).append(" ");
		sb.append(toSB(e.right, true));
		if (b) sb.append(")");
		return sb;
	}

	public StringBuffer visit(ArithmExpr e, Boolean b) {
		return visit((BinaryExpr)e, b);
	}

	public StringBuffer visit(LogicalExpr e, Boolean b) {
		return visit((BinaryExpr)e, b);
	}

	public StringBuffer visit(CompareExpr e, Boolean b) {
		return visit((BinaryExpr)e, b);
	}

	public StringBuffer visit(BitwiseExpr e, Boolean b) {
		return visit((BinaryExpr)e, b);
	}

	public StringBuffer visit(UnaryExpr e, Boolean b) {
		StringBuffer sb = new StringBuffer();
		if (b) sb.append("( ");
		sb.append(Ops.toString(e.getIntOp())).append(" ");
		sb.append(toSB(e.e, true));
		if (b) sb.append(")");
		return sb;
	}

	public StringBuffer visit(UnaryArithmExpr e, Boolean b) {
		return visit((UnaryExpr)e, b);
	}

	public StringBuffer visit(NegationExpr e, Boolean b) {
		return visit((UnaryExpr)e, b);
	}

	public StringBuffer visit(UnaryBitwiseExpr e, Boolean b) {
		return visit((UnaryExpr)e, b);
	}

	public StringBuffer visit(AddressofExpr e, Boolean b) {
		StringBuffer sb = new StringBuffer();
		if (b) sb.append("(");
		sb.append("&");
		sb.append(toSB(e.e, true));
		if (b) sb.append(")");
		return sb;
	}
	
	public StringBuffer visit(ArrayExpr e, Boolean b) { 
		StringBuffer sb = new StringBuffer();
		if (b) sb.append("(");
		sb.append(toSB(e.arr, true));
		sb.append("[");
		sb.append(toSB(e.sub, false));
		sb.append("]");
		if (b) sb.append(")");
		return sb;
	}
	
	public StringBuffer visit(CastExpr e, Boolean b) {
		StringBuffer sb = new StringBuffer();
		if (b) sb.append("(");
		sb.append("(");
		sb.append(DeclPrinter.toString(e.getCastType(), ""));
		sb.append(")");
		sb.append(toSB(e.expr, true));
		if (b) sb.append(")");
		return sb;
	}
		
	public StringBuffer visit(DerefExpr e, Boolean b) {
		StringBuffer sb = new StringBuffer();
		if (b) sb.append("(");
		sb.append("*");
		sb.append(toSB(e.expr, true));
		if (b) sb.append(")");
		return sb;
	}
	
	public StringBuffer visit(FieldExpr e, Boolean b) {
		StringBuffer sb = new StringBuffer();
		if (b) sb.append("(");
		sb.append(toSB(e.e, true));
		sb.append(e.d ? "->" : ".");
		sb.append(e.f.getIdName());
		if (b) sb.append(")");
		return sb;
	}
	
	public StringBuffer visit(NumberExpr e, Boolean b) {
		StringBuffer sb = new StringBuffer(e.toString());
		return sb;
	}

	public StringBuffer visit(StringExpr e, Boolean b) {
		StringBuffer sb = new StringBuffer();
		if (e.isWide()) sb.append('L');
		sb.append('\"').append(e.str).append('\"');
		return sb;
	}

	public StringBuffer visit(SizeofExpr e, Boolean b) {
		StringBuffer sb = new StringBuffer();
		sb.append("sizeof(");
		sb.append(DeclPrinter.toString(e.getSizeofType(), ""));
		sb.append(")");
		return sb;
	}

	public StringBuffer visit(VarExpr e, Boolean b) {
		StringBuffer sb = new StringBuffer();
		sb.append(e.sym.getIdName());
		return sb;
	}
	
	public StringBuffer visit(AssignExpr e, Boolean b) {
		StringBuffer sb = new StringBuffer();
		if (b) sb.append("(");
		if (e.e1 != null) {
			sb.append(toSB(e.e1, true));
			sb.append(" = ");
		}
		sb.append(toSB(e.e2, true));
		if (b) sb.append(")");
		return sb;
	}

	public StringBuffer visit(AssignArithmExpr e, Boolean b) {
		StringBuffer sb = new StringBuffer();
		if (b) sb.append("(");
		sb.append(toSB(e.e1, true));
		sb.append(" ");
		sb.append(e.op.toString());
		sb.append("= ");
		sb.append(toSB(e.e2, true));
		if (b) sb.append(")");
		return sb;
	}

	public StringBuffer visit(AssignBitwiseExpr e, Boolean b) {
		StringBuffer sb = new StringBuffer();
		if (b) sb.append("(");
		sb.append(toSB(e.e1, true));
		sb.append(" ");
		sb.append(e.op.toString());
		sb.append("= ");
		sb.append(toSB(e.e2, true));
		if (b) sb.append(")");
		return sb;
	}

	public StringBuffer visit(AutoIncExpr e, Boolean b) {
		StringBuffer sb = new StringBuffer();
		if (b) sb.append("(");
		if (!e.post) 
			sb.append(e.inc ? "++" : "--");
		sb.append(toSB(e.expr, true));
		if (e.post) 
			sb.append(e.inc ? "++" : "--");
		if (b) sb.append(")");
		return sb;
	}

	public StringBuffer visit(CallExpr e, Boolean b) {
		StringBuffer sb = new StringBuffer();
		if (b) sb.append("(");
		
		if (e.cast != null) {
			sb.append("(");
			sb.append(DeclPrinter.toString(e.cast, ""));
			sb.append(")");
		}
		
		if (Builtins.isVaArg(e.fun)) {
			sb.append(Builtins.PrintVaArg(e.fun, e.args));
		} 
		else {
			sb.append(toSB(e.fun, true));
			sb.append("(");
			for (int i = 0; i < e.args.length; i++) {
				if (i > 0) sb.append(", ");
				sb.append(toSB(e.args[i], false));
			}
			sb.append(")");
		}
		
		if (b) sb.append(")");
		return sb;
	}
	
	public StringBuffer visit(CommaExpr e, Boolean b) {
		StringBuffer sb = new StringBuffer();
		sb.append("(");
		
		for (int i = 0; i < e.es.length; i++) {
			if (i > 0) sb.append(", ");
			sb.append(toSB(e.es[i], false));
		}		
		
		sb.append(")");
		return sb;
	}
	
	public StringBuffer visit(ConditionalExpr e, Boolean b) {
		StringBuffer sb = new StringBuffer();
		if (b) sb.append("(");
		sb.append(toSB(e.cond,true));
		sb.append(" ? ");
		sb.append(toSB(e.expr1,true));
		sb.append(" : ");
		sb.append(toSB(e.expr2,true));
		if (b) sb.append(")");
		return sb;		
	}
	
	public StringBuffer visit(StatExpr e, Boolean b) {
		StringBuffer sb = new StringBuffer();
		sb.append("( ");
		sb.append(e.stat.accept(this,null));
		sb.append(")");
		return sb;
	}
	
	/** A string representation of statement s. 
	 * @param indent String representing the indentation. */
	public static String toString(Statement s, String indent) {
		return s.accept(printer, indent).toString();
	}
	
	public StringBuffer visit(BlockStat s, String indent) {
		StringBuffer sb = new StringBuffer();
		sb.append(val(indent));
		sb.append("{");

		sb.append(indent != null ? "\n" : " ");

		/* Print out the declarations */
		ByteArrayOutputStream buf = new ByteArrayOutputStream();
		SymtabPrinter.printSymtab(s.getSymTab(), 
				new PrintStream(buf), inc(indent));
		sb.append(buf.toString());
		
		for (Statement st : s.body)
			sb.append(st.accept(this, inc(indent))); 
		sb.append(val(indent));
		sb.append("}").append(space(indent));
		return sb;
	}
	
	public StringBuffer visit(DoWhileStat s, String indent) {
		StringBuffer sb = new StringBuffer();
		sb.append(val(indent));
		sb.append("do").append(space(indent));
		sb.append(s.body.accept(this, inc(indent)));
		sb.append(indent).append("while (");
		sb.append(toSB(s.cond, false));
		sb.append(");").append(space(indent));
		return sb;
	}
	
	public StringBuffer visit(ExprStat s, String indent) {
		StringBuffer sb = new StringBuffer();
		sb.append(val(indent));
		if (s.e != null)
			sb.append(toSB(s.e, false));
		sb.append(";").append(space(indent));
		return sb;
	}
	
	public StringBuffer visit(ForStat s, String indent) {
		StringBuffer sb = new StringBuffer();
		sb.append(val(indent)).append("for (");
		if (s.init != null) 
			sb.append(toSB(s.init, false));
		sb.append(" ; ");
		if (s.cond != null) 
			sb.append(toSB(s.cond, false));
		sb.append(" ; ");
		if (s.step != null) 
			sb.append(toSB(s.step, false));
		sb.append(")").append(space(indent));
		sb.append(s.body.accept(this, inc(indent)));
		return sb;
	}

	public StringBuffer visit(CaseLabelStat s, String indent) {
		StringBuffer sb = new StringBuffer();
		sb.append(val(indent));
		if (s.isDefault()) 
			sb.append("default:");
		else {
			sb.append("case ");
			sb.append(toSB(s.getGuard(), false));
			sb.append(":");
		}
		sb.append(space(indent));
		return sb.append(s.getLabeled().accept(this, indent));
	}

	
	public StringBuffer visit(IfStat s, String indent) {
		StringBuffer sb = new StringBuffer();
		sb.append(val(indent)).append("if (");
		sb.append(toSB(s.cond, false));
		sb.append(")").append(space(indent));
		sb.append(s.sthen.accept(this, inc(indent)));
		
		if (s.selse != null) {
			sb.append(val(indent)).append("else\n");
			sb.append(s.selse.accept(this, inc(indent)));
		}
		return sb;
	}
	
	public StringBuffer visit(BreakStat s, String indent) {
		StringBuffer sb = new StringBuffer();
		return sb.append(val(indent)).append("break;\n");
	}

	public StringBuffer visit(ContinueStat s, String indent) {
		StringBuffer sb = new StringBuffer();
		return sb.append(val(indent)).append("continue;\n");
	}

	public StringBuffer visit(GotoStat s, String indent) {
		StringBuffer sb = new StringBuffer();
		sb.append(val(indent)).append("goto ");
		sb.append(s.getLabel().getIdName());
		return sb.append(";").append(space(indent));
	}

	public StringBuffer visit(ReturnStat s, String indent) {
		StringBuffer sb = new StringBuffer();
		sb.append(val(indent)).append("return");
		if (s.e != null) {
			sb.append(" ");
			sb.append(toSB(s.e, false));
		}
		return sb.append(";").append(space(indent));
	}

	public StringBuffer visit(SwitchStat s, String indent) {
		StringBuffer sb = new StringBuffer();
		sb.append(val(indent)).append("switch ( ");
		sb.append(toSB(s.e, false));
		sb.append(" )").append(space(indent));
		return sb.append(s.s.accept(this, inc(indent)));
	}
	
	public StringBuffer visit(WhileStat s, String indent) {
		StringBuffer sb = new StringBuffer();
		sb.append(val(indent)).append("while (");
		sb.append(toSB(s.cond, false));
		sb.append(")").append(space(indent));
		return sb.append(s.body.accept(this, inc(indent)));
	}

	public StringBuffer visit(LabelStat s, String indent) {
		StringBuffer sb = new StringBuffer();
		sb.append(val(indent)).append(s.getLabel().getIdName());
		sb.append(": ");
		return sb.append(s.getLabeled().accept(this, ""));
	}

	public StringBuffer visit(AsmStat s, String indent) {
		StringBuffer sb = new StringBuffer();
		sb.append(val(indent)).append("asm (");
		sb.append(s.instr).append("\n");

		sb.append(val(indent)).append("\t : ");
		for(int i = 0; i < s.dsts.length; i++) 
			printAsmOp(sb, s.dsts[i], i != 0);
		sb.append("\n");
		
		sb.append(val(indent)).append("\t : ");
		for(int i = 0; i < s.srcs.length; i++) 
			printAsmOp(sb, s.srcs[i], i != 0);
		sb.append("\n");
			
		if (s.clobbers.length > 0) {
			sb.append(val(indent)).append("\t : ");
			for(int i = 0; i < s.clobbers.length; i++) { 
				if (i != 0) sb.append(", ");
				sb.append(s.clobbers[i]);
			}
		}
		
		return sb.append(");\n");
	}

	private void printAsmOp(StringBuffer sb, AsmOperand op, boolean b) {
		if (b) 
			sb.append(", ");
		
		if (op.id != null) 
			sb.append('[').append(op.id).append("] ");

		sb.append(op.desc).append(" ");
		
		sb.append('(').append(op.expr.accept(this, false)).append(')');
	}

	static String inc(String indent) {
		return (indent == null) ? null : (indent + Options.INDENT);
	}

	static String space(String indent) {
		return (indent == null) ? " " : "\n";
	}
	
	static String val(String indent) {
		return (indent == null) ? "" : indent;
	}
}