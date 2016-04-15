package crystal.ast;

import crystal.general.*;

public class GotoStat extends JumpStat {
	private static final long serialVersionUID = 3618421505772826935L;
                                                 
	Label label;
	
	public GotoStat(Label label) {
		this.label     = label;
	}

	public Label getLabel() {
		return label;
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
		return 0;
	}
    
	public Statement getStatKid(int i) {
		assert (false);
		return null;
	}

	protected void setStatKid(int i, Statement s) {
		assert (false);
	}	

	public <S,T> S accept(StatVisitor<S,T>  v, T t) {
		return v.visit(this, t);
	}
}
