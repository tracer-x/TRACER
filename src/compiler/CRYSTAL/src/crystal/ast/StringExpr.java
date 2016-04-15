package crystal.ast;

public class StringExpr extends PrimitiveExpr {
	private static final long serialVersionUID = 3689067361240428598L;

	String str;
	boolean wide;

	public StringExpr(String s) {
		wide = s.charAt(0) == 'L';
		str = s.substring(wide ? 2 : 1, s.length() - 1);
	}
	
	
	public StringExpr add(String s) {
		boolean otherwide = s.charAt(0) == 'L';
		wide = wide || otherwide;
		str = str + s.substring(otherwide ? 2 : 1, s.length() - 1);
		return this;
	}
	
	public boolean isWide() {
		return wide;
	}

	public int length() {
		/* TODO: take into account escaped characters */
		return str.length();
	}

	public String getString() {
		return str;
	}
	
	public int numExprKids() {
		return 0;
	}
    
	public Expression getExprKid(int i) {
		return null;
	}

	public void setExprKid(int i, Expression newE) {
		assert (false);
	}
	
	public <S,T> S accept(ExprVisitor<S,T> v, T t) {
		return v.visit(this, t);		
	}
}
