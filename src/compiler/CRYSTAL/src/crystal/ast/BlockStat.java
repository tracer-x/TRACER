package crystal.ast;

import crystal.general.*;

import java.util.*;

public class BlockStat extends Statement {
	private static final long serialVersionUID = 3905804158492684601L;

	List<Statement> body;
	HashSymtab symbols;

	public BlockStat() {
		this(null);
	}
    
    public BlockStat(HashSymtab syms) {
    	body    = new ArrayList<Statement>();
    	symbols = syms;
    }

    public List<Statement> getStatements() {
        return body;
    }
    
    public BlockStat addFirst(Statement s) {
    	body.add(0, s);
    	return this;
    }

    public BlockStat add(Statement s) {
    	body.add(s);
    	return this;
    }

    public HashSymtab getSymTab() {
        return symbols;
    }

    public void discardSymTab() {
        symbols.detach();
        symbols = null;
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
		return body.size();
	}
    
	public Statement getStatKid(int i) {
		return body.get(i);
	}

	protected void setStatKid(int i, Statement s) {
		body.set(i, s);
	}

	public Statement removeStatKid(int i) {
		return body.remove(i);
	}

	public <S,T> S accept(StatVisitor<S,T>  v, T t) {
		return v.visit(this, t);
	}
}
