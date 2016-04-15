package crystal.cfg;

/** A DFS walk of the graph */
public class CFGWalker {
	
	public void visitAll(CFGInfo i) {
		for (CFGNode node : i.getAllNodes())
			if (node instanceof CFGStatNode) {
				visit((CFGStatNode)node);
				
				if (node instanceof CFGAssignNode)
					visit((CFGAssignNode)node);
				else if (node instanceof CFGCallNode)
					visit((CFGCallNode)node);
				else if (node instanceof CFGReturnNode)
					visit((CFGReturnNode)node);
				else if (node instanceof CFGNopNode)
					visit((CFGNopNode)node);
			} else
				visit((CFGSwitchNode)node);
	}

	public void visit(CFGStatNode node) {}
	public void visit(CFGAssignNode node) {}
	public void visit(CFGCallNode node) {}
	public void visit(CFGReturnNode node) {}
	public void visit(CFGNopNode node) {}
	public void visit(CFGSwitchNode node) {}
}
