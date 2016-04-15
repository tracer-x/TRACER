package crystal.ast;

import crystal.general.*;

/**
 * A labeled statement, containing an another statement. 
 * The representation as a node is for easier modification of the AST, 
 * as one can swap the contents without affecting the control flow.
 */
public class LabelStat extends Statement {
	static final long serialVersionUID = 399986971862817034L;

	Label lab;
	Statement labeled;

	public Label getLabel() {
		return lab;
	}

	public Statement getLabeled() {
		return labeled;
	}
	
	public LabelStat(Label lab, Statement labeled) {
		this.lab     = lab;
		this.labeled = labeled;
	}


	/* Child expressions interface */
	public int numExprKids() {
		return 0;
	}

	public Expression getExprKid(int i) {
		assert (false);
		return null;
	}

	public void setExprKid(int i, Expression e) {
		assert (false);
	}

	/* Child statements interface */
	public int numStatKids() {
		return 1;
	}
    
	public Statement getStatKid(int i) {
		assert (i == 0);
		return labeled;
	}

	protected void setStatKid(int i, Statement s) {
		assert (i == 0);
		labeled = s;
	}

	public <S,T> S accept(StatVisitor<S,T>  v, T t) {
		return v.visit(this, t);
	}
}
