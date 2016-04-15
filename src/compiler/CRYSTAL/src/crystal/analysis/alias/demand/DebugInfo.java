package crystal.analysis.alias.demand;

public class DebugInfo {
	
	public PEGNode from;
	public PEGNode to;
	public PEGNode source;
	public byte color;
	
	public DebugInfo(PEGNode from, PEGNode to, PEGNode source, byte color) {
		assert from != null;
		assert to != null;
		
		this.from = from;
		this.to = to;
		this.source = source;
		this.color = color;
	}

}
