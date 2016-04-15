package crystal.cfg;

import java.io.*;
import java.util.*;

/** Information about the CFG for a function */
public class CFGInfo implements Serializable {
	private static final long serialVersionUID = -7950689232967234029L;

	public CFGInfo(CFGNode entryNode, CFGNode exitNode) {
		this.entryNode = entryNode;
		this.exitNode  = exitNode;
	}

	
	public CFGNode entryNode;
	public CFGNode exitNode;

	static private Stack  <CFGNode> work = new Stack<CFGNode>();
	static private HashSet<CFGNode> visited = new HashSet<CFGNode>();

	private List<CFGNode> nodes = null; 
	
	/** Returns the list of CFG nodes in pre-order
	 *  Uses the cached list, if it is available */
	public List<CFGNode> getAllNodes() {
		return nodes != null ? nodes : computeAllNodes();
	}
	
	/** Returns the list of CFG nodes in pre-order */
	public List<CFGNode> computeAllNodes() {
		nodes = new ArrayList<CFGNode>();
		visited.clear();
		work.clear();
		work.push(entryNode);
		while (!work.empty()) {
			CFGNode node = work.pop();
			if (!visited.contains(node)) {
				visited.add(node);
				nodes.add(node);
				for (int i = 0; i < node.numSuccs(); i++) {
					CFGNode next = node.getSucc(i);
					if (next != null)
						work.push(next);
				}
			}
		}
		
		return nodes;
	}
}
