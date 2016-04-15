package crystal.cfg;

import crystal.ast.*;
import crystal.general.*;

import java.io.*;
import java.util.*;

/**  Dumps the AST in graphviz dot format. */
public class CFGDump {

	/* If true, predecessor edges are printed in blue */
	static final boolean PRINT_PREDECESSOR_EDGES = false;

	int nextID = 0;
	HashMap<Object, String> ids = new HashMap<Object, String>();
	protected PrintStream ps;
	
	/* graphviz node attributes set by the user */
	protected HashMap<CFGNode, HashMap<String,String>> externalNodeAttributes = new HashMap<CFGNode, HashMap<String,String>>();

	
	/* Constructs ID for label, and outputs its node it wasn't already */
	protected String getID(CFGNode node) {
		String id = ids.get(node);
		if (id != null)
			return id;

		id = "N" + nextID++;
		ids.put(node, id);
		return id;
	}
	
	protected String nodeColor(CFGNode node) {
		if (node.isEntry())
			return "green";
		else if (node.isExit())
			return "red";
		else
			return null;
	}
	
	protected Map<String,String> nodeAttributes(CFGNode node) {
		HashMap<String,String> attributes = new HashMap<String,String>();
		
		attributes.put("label", nodeLabel(node));
		attributes.put("color", nodeColor(node));
		
		if(externalNodeAttributes.containsKey(node))
			attributes.putAll(externalNodeAttributes.get(node));
		
		return attributes;
	}
	
	public void setAttribute(CFGNode node, String key, String value) {
		if(! externalNodeAttributes.containsKey(node))
			externalNodeAttributes.put(node, new HashMap<String,String>());	
		externalNodeAttributes.get(node).put(key, value);
	}

	public void setAttribute(Iterable<CFGNode> nodes, String key, String value) {
		for(CFGNode node : nodes) 
			setAttribute(node, key, value);
	}
	
	protected void printNode(CFGNode node, String id) {
		Map<String,String> attributes = nodeAttributes(node);
		ps.print("\t" + id + "[");
		int i = 0;
		for(String key : attributes.keySet()) {
			String value = attributes.get(key);
			if(value == null) continue;
			if(i++ > 0) ps.print(",");
			ps.print(key+"=\"" + escape(value) + "\"");
		}
		ps.println("];");
	}
	
	protected String nodeLabel(CFGNode node) {
		return node.toString();
	}

	protected String escape(String data) {
		StringBuffer result = new StringBuffer();
		for (int i = 0; i < data.length(); ++i) {
			char c = data.charAt(i);
			switch(c) {
			case '\n': break;
			case '\\': result.append("\\\\"); break;
			case '\"': result.append("\\\""); break;
			case '[':  result.append("\\["); break;
			case ']':  result.append("\\]"); break;
			case '>':  result.append("\\>"); break;
			case '<':  result.append("\\<"); break;
			default:   result.append(c);
			}
		}
		return result.toString();
	}

	public void visit(CFGStatNode node) {
		String ourID = getID(node);
		printNode(node, ourID);
		
		if (node.succ != null) {
			String dest = getID(node.succ);
			ps.println("\t" + ourID + " -> " + dest + "[weight=0.1];");
		}

		if (PRINT_PREDECESSOR_EDGES)
			for (int e = 0; e < node.numPreds(); ++e) {
				String pred = getID(node.getPred(e));
				ps.print("\t" + ourID + " -> " + pred + "[color=blue];");
			}
}

	public void visit(CFGSwitchNode node) {
		String ourID = getID(node);
		printNode(node, ourID);
		
		/* Go through all the edges */
		for (int e = 0; e < node.outEdges.size(); ++e) {
			String dest = getID(node.outEdges.get(e));

			ps.print("\t" + ourID + " -> " + dest);

			/* Print label.. */
			Expression label = node.labelsSrc.get(e);
			if (label == CaseLabelStat.DEFAULT)
				ps.println("[label=\"*\"];");
			else {
				ps.print("[label=\"");
				ps.print(escape(ASTPrinter.toString(label, false)));
				ps.println("\"];");
			}
		}
		
		if (PRINT_PREDECESSOR_EDGES)
			for (int e = 0; e < node.numPreds(); ++e) {
				String pred = getID(node.getPred(e));
				ps.print("\t" + ourID + " -> " + pred + "[color=blue];");
			}
	}
	
	/* Print the CFG of fun to a stream, in dot format. */
	public void printDot(Collection<CFGNode> nodes, String s, PrintStream stream) {
		this.ps    = stream;
		
		ps.println("digraph CFG {");
    	ps.println("	size=\"7.5,10\";");
    	ps.println("	center=true;");
        ps.println("	labelloc=top;");
        ps.println("	label=\"" + s + "\";");
        ps.println("	fontname=Arial; fontsize=12;");
    	ps.println("	edge[fontname=Arial,fontsize=10];");
    	ps.println("	node[fontname=Arial,fontsize=9];");
    	
		for(CFGNode n : nodes)
			if (n instanceof CFGStatNode)
				visit((CFGStatNode)n);
			else if (n instanceof CFGSwitchNode)
				visit((CFGSwitchNode)n);
		
		ps.println("}");
	}

	/* same as above, but take filename as an argument instead of stream */
	public void printDot(Collection<CFGNode> nodes, String s, String filename) {
		PrintStream stream = null;
		try {
			stream = new PrintStream(filename);
		} catch (FileNotFoundException e) {
			System.exit(1);
		}
		printDot(nodes, s, stream);
		stream.close();
	}
	
	public static CFGDump dumper = new CFGDump();
	
	public void printMatch(String str, PrintStream stream) {
		for (Function fun : Symtab.getFunctions())
			if (fun.getName().contains(str))
				printDot(fun.getCFGNodes(), "Function: " + fun, stream);
	}
	
	public void printAll() {
		if (Options.VERBOSITY >= 2)
			System.out.println();
		
		HashSymtab globals = Symtab.getGlobalScope();
		for (Symtab filetab: globals.getKids()) {
			String infile = ((FileSymtab)filetab).getFileName();
			String outfile = adjustSuffix(infile);
				
			PrintStream stream = null;
			try {
				stream = new PrintStream(outfile);
			} catch (FileNotFoundException e) {
		    	System.err.println("File not found: \"" + outfile + "\"");
		    	System.exit(1);
			}

			if (Options.VERBOSITY >= 2)
				System.out.println("\twriting file \"" + outfile + "\" ...");
			
			for (Function fun : Symtab.getFunctions(infile)) 
				printDot(fun.getCFGNodes(), "Function: " + fun, stream);
		}
	}
	
	static String adjustSuffix(String file) {
		int i = file.lastIndexOf('.');
		if (i > 0) file = file.substring(0,i);
		return file + ".dot";
	}
}
