package crystal.analysis.ipa;

import java.util.*;

import crystal.cfg.*;

public class ResultDump<A extends Abstraction<?,?>> 
	extends CFGDump 
{
	Map<CFGNode,A> result;
	boolean before = true;
	
	public ResultDump(Map<CFGNode,A> result) {
		this.result = result;
	}

	public ResultDump(Map<CFGNode,A> result, boolean b) {
		this.result = result;
		before = b;
	}

	protected String nodeLabel(CFGNode node) {
		String label;
		if (node.isEntry())
			label = "Entry";
		else if (node.isExit())
			label = "Exit";
		else if (node instanceof CFGStatNode) 
			label = ((CFGStatNode)node).getStatement().toString();
		else 
			label = "switch " + ((CFGSwitchNode)node).getTestSrc();
		label = escape(label);
				
		A absb = result.get(node);
		String str = ((absb == null) ? "BOTTOM" : absb.toStringDot());
		str = escape(str) + "|";

		if (before)
			return "shape=record,label=\"{" + str + label + "}\"";
		else
			return "shape=record,label=\"{" + label + str + "}\"";
	}
}
