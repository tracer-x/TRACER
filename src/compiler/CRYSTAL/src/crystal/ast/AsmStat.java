package crystal.ast;

import java.util.*;

public class AsmStat extends Statement {
	private static final long serialVersionUID = 4671988750717667249L;

	String instr;
	AsmOperand[] dsts; 
	AsmOperand[] srcs; 
	String[] clobbers;
	
	public AsmStat(StringExpr ins, 
			List<AsmOperand> d, 
			List<AsmOperand> s, 
			List<String> c) 
	{
		instr = ins.toString();
		
		if (d == null) {
			dsts = new AsmOperand[0];
		}
		else {
			dsts = new AsmOperand[d.size()];
			for (int i = 0; i < dsts.length; i++)
				dsts[i] = d.get(i);
		}
		
		if (s == null) {
			srcs = new AsmOperand[0];
		}
		else {
			srcs = new AsmOperand[s.size()];
			for (int i = 0; i < srcs.length; i++)
				srcs[i] = s.get(i);
		}
		
		if (c == null) {
			clobbers = new String[0];
		}
		else {
			clobbers = new String[c.size()];
			for (int i = 0; i < clobbers.length; i++)
				clobbers[i] = c.get(i);
		}
	}
	
	public String getInstruction() {
		return instr;
	}
	
	public int numExprKids() {
		return dsts.length + srcs.length;
	}

	public Expression getExprKid(int i) {
		if (i < 0)
			return null;
		else if (i < dsts.length)
			return dsts[i].expr;
		else if (i - dsts.length < srcs.length)
			return srcs[i - dsts.length].expr;
		else
			return null;
	}

	public void setExprKid(int i, Expression e) {
		if (i < 0)
			return;
		else if (i < dsts.length)
			dsts[i].expr = e;
		if (i - dsts.length < srcs.length)
			srcs[i - dsts.length].expr = e;
	}

	public int numStatKids() {
		return 0;
	}

	public Statement getStatKid(int i) {
		return null;
	}

	protected void setStatKid(int i, Statement s) {
	}

	public <S,T> S accept(StatVisitor<S,T> v, T t) {
		return v.visit(this, t);
	}
}
