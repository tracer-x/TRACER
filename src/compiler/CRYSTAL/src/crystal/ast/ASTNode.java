package crystal.ast;

abstract public class ASTNode {
	String file;
	short lline, lcol, rline, rcol;
	
	public void setLocation(String f, int ll, int lc, int rl, int rc) {
		file  = f;
		lline = (short)ll;
		lcol  = (short)lc;
		rline = (short)rl;
		rcol  = (short)rc;
	}
	
	public void setLocationFrom(ASTNode other) {
		setLocation(other.getFile(),
			other.getLeftLine(),  other.getLeftCol(),
			other.getRightLine(), other.getRightCol());
	}
	
	public String getFile() {
		return file;
	}
	
	public int getLeftLine() {
		return lline;
	}
	
	public int getLeftCol() {
		return lcol;
	}
	
	public int getRightLine() {
		return rline;
	}
	
	public int getRightCol() {
		return rcol;
	}
	
	public String getSourceLocation() {
		return " " + lline + ":" + lcol + "-" + rline + ":" + rcol + " ";
	}
}
