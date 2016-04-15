package decompiler;

import java.util.*;
import java.io.*;
import compiler.*;

public class Parser {

	String filename;

	// core graph info
	public Map<Vertex, List<Vertex>> edges = new HashMap<Vertex, List<Vertex>>();
	public Vector<Edge> inf_edges = new Vector<Edge>();
	public Map<Edge, Integer> ids = new HashMap<Edge, Integer>();
	public Map<Vertex, List<Vertex>> subsumptions = new HashMap<Vertex, List<Vertex>>();
    public Vector<Vertex> slice = new Vector<Vertex>();
	public Map<Vertex, Vertex> calls = new HashMap<Vertex, Vertex>();
	public Map<Vertex, Vertex> returns = new HashMap<Vertex, Vertex>();
	public Map<Vertex, Vertex> exits = new HashMap<Vertex, Vertex>();

	// supplementary
	public Vector<Vertex> loopStarts = new Vector<Vertex>();
	public Vector<Vertex> loopExits = new Vector<Vertex>();

	public Parser(String filename) {
		this.filename = filename;
	}

	public void parse() {
		int count = 0;
		try {
			File f = new File(filename);
			BufferedReader br = new BufferedReader(new FileReader(f));

			String line;
			boolean firstedge = true;

			initLoops();
			while((line = br.readLine()) != null) {
				count++;

				if(line.startsWith("edge") || line.startsWith("inf_edge")) {
					boolean inf = line.startsWith("inf_edge");
					line = line.substring(line.indexOf('(')+1, line.indexOf(')'));
					StringTokenizer tokens = new StringTokenizer(line, ",");

					String t = tokens.nextToken();
					Vertex v1 = new Vertex(tokens.nextToken());
					Vertex v2 = new Vertex(tokens.nextToken());

					if(t.compareTo("call") == 0) {
						if(!inf) calls.put(v1, v2);
					}
					else if(t.compareTo("return") == 0) {
						returns.put(v1, v2);
					}
					else if(t.compareTo("subsumes") == 0) {
						if(subsumptions.get(v1) == null)
							subsumptions.put(v1, new Vector<Vertex>());
						subsumptions.get(v1).add(v2);
					}
					else if(t.compareTo("exit") == 0) {
						if(exits.get(v1) == null)
							exits.put(v1,v2);
						else
							FATAL.error("two exits from " + v1 + "!");
					}
					else if (!inf) {
						if(edges.get(v1) == null)
							edges.put(v1, new Vector<Vertex>());
						edges.get(v1).add(v2);
						ids.put(new Edge(v1,v2),Integer.parseInt(t.substring(1)));

						if(inf)
							inf_edges.add(new Edge(v1,v2));
					}
				}
                else if (line.startsWith("trans_in_slice_pscfg")) {
					line = line.substring(line.indexOf('(')+1, line.indexOf(')'));
					StringTokenizer tokens = new StringTokenizer(line, ",");

                    slice.add(new Vertex(tokens.nextToken()));
                }
				else {
					if(!(line.trim().compareTo("") == 0))
						FATAL.error("parse error in line:" + count + " in TRACES");
				}
			}

			br.close();
		}
		catch(Exception e) {
			FATAL.error("in parsing TRACES file. last line parsed: line#" + count
				+ e.getMessage());
		}
	}

	public void initLoops() {
		for(ClauseFactory cf : compiler.Main.emitter.factories) {
			for(String PP : cf.loopStartPPs)
				loopStarts.add(new Vertex(cf.getFuncName(), PP, -1));
			for(String PP: cf.loopExitPPs)
				loopExits.add(new Vertex(cf.getFuncName(), PP, -1));
		}
	}

}
