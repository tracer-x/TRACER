package crystal.ast;

import java.util.*;

import crystal.util.*;

public class SwitchStat extends Statement {
	private static final long serialVersionUID = 3257284734064015667L;

	Expression e;
    Statement s;
    
    public SwitchStat(Expression e, Statement s) {
    	this.e = e;
    	this.s = s;
    }

    public Expression getExpr() {
    	return e;
    }
    
    public Statement getStat() {
    	return s;
    }
    
    /* Extracts cases from a switch statement. */
    public Pair<List<Expression>,List<List<Statement>>> getCases() {
    	if (!(s instanceof BlockStat))
    		return null;
    	
    	BlockStat bs = (BlockStat)s;
    	List<Expression> le = new ArrayList<Expression>();
    	List<List<Statement>> ls = new ArrayList<List<Statement>>();
    	
    	List<Statement> currentCase = null;
    	for (Statement crt : bs.body) {
    		if (crt instanceof CaseLabelStat) {
    			CaseLabelStat labelstat = (CaseLabelStat)crt;
    			Statement inside = labelstat.labeled;

    			while (inside instanceof CaseLabelStat) {
        			le.add(labelstat.guard);
        			ls.add(new ArrayList<Statement>());
        			labelstat = (CaseLabelStat)inside;
        			inside = labelstat.labeled;
    			}
    			
    			currentCase = new ArrayList<Statement>();
    			currentCase.add(inside);
    			le.add(labelstat.guard);
    			ls.add(currentCase);
    		}
    		else {
    			if (currentCase == null)
    				return null;

    			currentCase.add(crt);
    		}
    	}
    	
    	return new Pair<List<Expression>, List<List<Statement>>>(le,ls);
    }
    
	/* Child expressions interface */
	public int numExprKids() {
		return 1;
	}

	public Expression getExprKid(int i) {
		assert (i < numExprKids());
		return e;
	}

	public void setExprKid(int i, Expression e) {
		assert (i < numExprKids());
		this.e = e;
	}

	/* Child statements interface */
	public int numStatKids() {
		return 1;
	}
    
	public Statement getStatKid(int i) {
		assert (i < numStatKids());
		return s;
	}

	protected void setStatKid(int i, Statement s) {
		assert (i < numStatKids());
		this.s = s;
	}

	public <S,T> S accept(StatVisitor<S,T>  v, T t) {
		return v.visit(this, t);
	}
}
