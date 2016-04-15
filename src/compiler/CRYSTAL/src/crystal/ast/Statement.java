package crystal.ast;

import java.io.*;

abstract public class Statement extends ASTNode
	implements Serializable, Parent 
{

	/** Accept method for visitors. */
	abstract public <S,T> S accept(StatVisitor<S,T>  v, T t);

	/** Number of children expressions. */
	abstract public int numExprKids();
    
	/** Get child number i. */
	abstract public Expression getExprKid(int i);

	/** Change child number i. */
	public abstract void setExprKid(int i, Expression e);

	/** Replaces child expression */
	public void replaceKid(Expression prevVal, Expression newVal) {
		for (int i = 0; i < numExprKids(); ++i) {
			if (getExprKid(i) == prevVal) {
				setExprKid(i, newVal);

				/* Sanity check */
				assert (getExprKid(i) == newVal) : 
					    "replaceKid: incorrect kid replacement";
				return;
			}
		}

		assert false : "replaceKid: non-existing kid";
	}


	/** Number of children statements. */
	abstract public int numStatKids();
    
	/** Get child number i. */
	abstract public Statement getStatKid(int i);

	/** Change child number i. */
	abstract protected void setStatKid(int i, Statement s);

	public void replaceStatKid(Statement prevVal, Statement newVal) {
		for (int i = 0; i < numStatKids(); ++i) {
			if (getStatKid(i) == prevVal) {
				setStatKid(i, newVal);

				/* Sanity check */
				assert (getStatKid(i) == newVal) :
						"replaceStatKid: incorrect kid replacement";
				return;
			}
		}

		assert false : "replaceStatKid: non-existing kid";
	}

	public String toString() {
		return ASTPrinter.toString(this, "");
	}
}


