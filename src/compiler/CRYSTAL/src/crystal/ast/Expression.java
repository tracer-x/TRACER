package crystal.ast;

import crystal.general.Type;

import java.io.*;

abstract public class Expression extends ASTNode
	implements Serializable, Parent 
{
	private static final long serialVersionUID = 4121128134759362616L;

	public boolean isZero() {
		return false;
	}

	public boolean isConst(int c) {
		return false;
	}

	/** Evaluate this expression to a const value */
	public Number constValue() {
		return null;
	}

	public Type getType() {
		return ExprType.typeOf(this);
	}

	/** Number of child expressions. */
	abstract public int numExprKids();
    
	/** Get the i-th child expression. */
	abstract public Expression getExprKid(int i);

	/** Change child number i. */
	public abstract void setExprKid(int i, Expression e);

	public void replaceKid(Expression prevVal, Expression newVal) {
		for (int i = 0; i < numExprKids(); ++i) 
			if (getExprKid(i) == prevVal) {
				setExprKid(i, newVal);
				return;
			}

		assert false : "replaceKid trying to change a non-existing kid";
	}

	/** Number of child statements. Non-zero for StatExpr */
	public int numStatKids() {
		return 0;
	}
    
	/** Get the i-th child statement. */
	public Statement getStatKid(int i) {
		assert false;
		return null;
	}

	/** Number of child types. */
	public int numTypeKids() {
		return 0;
	}
    
	/** Get i-th child type. */
	public Type getTypeKid(int i) {
		assert false;
		return null;
	}

	/** Change child number i. */
	protected void setStatKid(int i, Statement s) {
		assert(false);
	}

	public void replaceStatKid(Statement prevVal, Statement newVal) {
		for (int i = 0; i < numStatKids(); ++i) 
			if (getStatKid(i) == prevVal) {
				setStatKid(i, newVal);
				return;
			}

		assert false : "replaceKid trying to change a non-existing kid";
	}
    
	/** Accept method for visitors. */
	abstract public <S,T> S accept(ExprVisitor<S,T> v, T t);

	public String toString() {
		return ASTPrinter.toString(this,false);
	}
}

