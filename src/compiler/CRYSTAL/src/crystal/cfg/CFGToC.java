package crystal.cfg;

import java.io.*;
import java.util.*;

import crystal.ast.*;
import crystal.general.*;
import crystal.emitc.*;


public class CFGToC {
	
	private PrintStream out;

	public static void printC(PrintStream ps, HashSymtab syms, CFGInfo cfg) {
		CFGToC converter = new CFGToC();
		converter.out = ps;
		ps.println("{");
		SymtabPrinter.printSymtab(syms, ps, "\t");
		
		ps.println();
		List<CFGNode> v = cfg.getAllNodes();
		CFGNode prev = null;
		CFGNode crt = null;
		CFGNode next = null;
		int size = v.size();
		for (int i = 0; i < size; i++) {
			prev = i == 0 ? null : crt;
			crt = i == 0 ? v.get(0) : next;
			next = i+1 < size ? v.get(i+1) : null;
			if (crt != cfg.entryNode && crt != cfg.exitNode)
				converter.print(prev, crt, next);
		}
		ps.println("}");
	}


	private void print(CFGNode prev, CFGNode crt, CFGNode next) {
		if (crt.numPreds() > 1 || 
			(prev != null && getSucc(prev) != crt))
			out.println(getLabel(crt) + ":");

		if (crt instanceof CFGStatNode) {
			out.printf("\t%s", crt);
		}
		else {
			CFGSwitchNode node = (CFGSwitchNode)crt;
			
			/* Go through all cases. 
			 * The default case need not be at a certain position. */
			for (int arm = 0; arm < node.outEdges.size(); arm++) {
				CFGNode dest = node.outEdges.get(arm);
				Expression label = node.labelsSrc.get(arm);
				
				if (label != CaseLabelStat.DEFAULT) {
					out.print("\tif (");
					
					if (label.isZero()) 
						out.printf("!(%s)", node.testSrc);
					else 
						out.printf("(%s) == (%s)", node.testSrc, label);

					out.println(") goto " + getLabel(dest) + ";");
				}
			}
		}
		
		CFGNode succ = getSucc(crt);
		if (!crt.isReturn() && succ != next) 
			out.println("\tgoto " + getLabel(succ) + ";");

	}

	private CFGNode getSucc(CFGNode crt) {
		if (crt == null)
			return null;
		else if (crt instanceof CFGStatNode)
			return ((CFGStatNode)crt).succ;
		else
			return ((CFGSwitchNode)crt).getDefaultSucc();
	}
	
	private HashMap<CFGNode, String> labels = new HashMap<CFGNode, String>();
	private int nextID = 0;

	private String getLabel(CFGNode node) {
		String label = labels.get(node);

		if (label == null) {
			label = "L" + nextID;
			++nextID;
			labels.put(node, label);
		}

		return label;
	}
}
