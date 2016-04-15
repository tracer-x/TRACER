package crystal.ast;

/** All AST nodes implement the interface Parent, denoting that 
 *  they contain statements and expressions */
public interface Parent {
	/** Replaces child expression */
	void replaceKid(Expression prevVal, Expression newVal);

	/** Replaces child statement */
	void replaceStatKid(Statement prevVal, Statement newVal);
}
