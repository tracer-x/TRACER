package decompiler;

import java.io.*;
import java.util.*;

import compiler.*;

public class Decompiler {

	PrintStream out = new PrintStream(System.out);

	// core data
	Map<Vertex, List<Vertex>> edges;
	Vector<Edge> inf_edges;
	Map<Edge, Integer> ids;
	Map<Vertex, List<Vertex>> subsumptions;
	Map<Vertex, Vertex> calls;
	Map<Vertex, Vertex> returns;
	Map<Vertex, Vertex> exits;
    Vector<Vertex> slice;

	// supplementary data
	Vertex root = new Vertex("func_main", "p$init_0", -1);
	Vector<Vertex> loopStarts;
	Vector<Vertex> loopExits;

	// for decompiling aborts
	Map<Vertex, String> aborts = compiler.Main.emitter.aborts;
	Vector<Vertex> abortsDone = new Vector<Vertex>();

	Map<Vertex, String> labelMap = new HashMap<Vertex, String>();
	Map<Vertex, String> retCons = new HashMap<Vertex, String>();
	Vector<Vertex> marked = new Vector<Vertex>();
	String tab = "";
	int label = 1;

	Vector<String> prog;
	String dProg = "";

	public Decompiler(Parser p) {
		edges = p.edges;
		inf_edges = p.inf_edges;
		ids = p.ids;
		subsumptions = p.subsumptions;
        slice = p.slice;
		calls = p.calls;
		returns = p.returns;
		exits = p.exits;

		loopStarts = p.loopStarts;
		loopExits = p.loopExits;
	}

	public void setStream(PrintStream out) {
		this.out = out;
	}

	private void print(String s) {
		dProg += s;
	}

	private void println(String s) {
		dProg += s + "\n";
	}

	public void setRoot(Vertex root) {
		this.root = root;
	}

	public void setProgram(Vector<String> prog) {
		this.prog = prog;
	}

    void resetLocalVariables(ClauseFactory fac) {
            if(fac.getFuncName().equals("func___TRACER_INIT"))
                return;
            for(Integer i : fac.declLineNums) {
                String line = prog.elementAt(i-1);
                if(line.startsWith("{"))
                    line = line.substring(1);
                line = line.replaceAll("\\bint\\b", "");
                line = line.replaceAll(";", " = nondet();");
                println(line);
            }
            String line = prog.elementAt(fac.protoLineNum -1);
            line = line.substring(line.indexOf("(")+1, line.length()-1);
            line = line.replaceAll("\\bint\\b", "");
            line = line.replaceAll(",", " = nondet();");
            if(line.contains(" ")) /* at least one param */
                println(tab + line + " = nondet();");
    }
    void printSLICE(ClauseFactory fac) { // actually for scanf
            return;
            /*if(fac.getFuncName().equals("func___TRACER_INIT"))
                return;
            for(Integer i : fac.declLineNums) {
                String line = prog.elementAt(i-1);
                if(line.startsWith("{"))
                    line = line.substring(1);
                line = line.replace("int ", "_SLICE(");
                line = line.replace(";", ");");
                println(line);
            }*/
    }
    void printLocalVariables(ClauseFactory fac) {
            if(fac.getFuncName().equals("func___TRACER_INIT"))
                return;
            for(Integer i : fac.declLineNums) {
                String line = prog.elementAt(i-1);
                if(line.startsWith("{"))
                    line = line.substring(1);
                println(line);
            }
            String line = prog.elementAt(fac.protoLineNum -1);
            line = line.substring(line.indexOf("(")+1, line.length()-1);
            line = line.replaceAll(",", ";");
            if(line.contains(" ")) /* at least one param */
                println(tab + line + ";");
    }

    int rule1apps = 0, rule2apps = 0, rule3apps = 0;
	public String decompile() {
		println(prog.elementAt(root.fac().protoLineNum -1)); // prototype
        println("{");

        println("int TRACER_RV;");
        printLocalVariables(root.fac());
        printSLICE(root.fac());
        //for(ClauseFactory fac : compiler.Main.emitter.factoryMap.values())
        //    printLocalVariables(fac);
		tab += "\t";
		decompile(root);

		tab = tab.substring(1);
        println(tab + "_SLICE(" + compiler.Main.emitter.sliceGoals.elementAt(0).toStringSliceVars() + ");");
		println("}");

        //System.out.println(String.format("Rule1: %d, Rule2: %d, Rule3: %d\n", rule1apps, rule2apps, rule3apps));

		if(aborts.size() != abortsDone.size())
			DEBUG.println("One or more aborts were not decompiled! Please check");

		return dProg;
	}

	public void decompile(Vertex from) {
		if(!edges.containsKey(from) && !calls.containsKey(from)
						&& !returns.containsKey(from)) {

			if(labelMap.containsKey(from))
				println(tab + "goto " + labelMap.get(from) + ";");
			else {
				if(exits.containsKey(from)) {
					// encountering this exit for the first time, so decompile.
					// but for other encounters, add all vertices to this exit
					// to labelMap so that just a goto will be printed
					String l = "L" + label++;
					println(l + ":;");
					Vertex exit = exits.get(from);
					for(Vertex v : exits.keySet())
						if(exits.get(v).equals(exit))
							labelMap.put(v, l);

					decompile(exit);
				}
				else {
                    Vertex subsumer = find_subsumer(from);
                    if(subsumer != null && !marked.contains(subsumer))
                        decompile(subsumer);
					else {
                        println(tab + "/* END OF PATH at " + from + " */");
                    }
				}
			}
			return;
		}

		if(loopStarts.contains(from) || loopExits.contains(from)) {
			if(!labelMap.containsKey(from)) {
				String l = "L" + label++;
				println(l + ":;");
				labelMap.put(from, l);
			}
		}

		if(subsumptions.containsKey(from)) {
			if(true /* && !labelMap.containsKey(from) */
				/* removing this condition because if a loop start subsumes something
				 * it would've been added to labelMap above but then its subsumed nodes
				 * will not be noted in labelMap */) {
				String l = "L" + label++;
				println(l + ":;");
				for(Vertex subsumed : subsumptions.get(from))
					labelMap.put(subsumed, l);
			}
		}

		if(aborts.containsKey(from) && !abortsDone.contains(from)) {
			String abort = "_ABORT(";
			abort += new Dictionary(from.fac()).translate(aborts.get(from));
			abort += ");";
			println(tab + abort);

			abortsDone.add(from);
		}

		if(edges.containsKey(from)) {
			boolean addElse = false;
			int n = 0;
			for(Vertex to : edges.get(from)) {
				Edge edge = new Edge(from, to);
				int id = ids.get(edge);
				Clause c = ClauseFactory.clauseMap.get(id);
				n++;

				DEBUG.println("i" + id + ": " + from + " -> " + to);

                if(slice.contains(from)) {
                    if(c.getBranch()) {
                        if(edges.get(from).size() > 1) {
                            if(!addElse) {
                                print(tab + "if(");
                                print(c.getText());
                                println(") {");
                            }
                            else if(n != edges.get(from).size()) {
                                print(tab + "else if(");
                                print(c.getText());
                                println(") {");
                            }
                            else
                                println(tab + "else {");
                            tab += "\t";
                            addElse = true;
                        }
                    }
                    else {
                        for(Integer lineNum : c.lineNums) {
                            String line = prog.elementAt(lineNum-1);
                            if(line.startsWith("return ")) // convert return to assignment
                                line = line.replace("return ", "TRACER_RV = ");
                            println(tab + line);
                        }
                    }
                }
                else {
                    if (c.getBranch()) rule3apps++;
                    else rule1apps++;
                }

				marked.add(from);
				if(labelMap.containsKey(to))
					println(tab + "goto " + labelMap.get(to) + ";");
				else if(inf_edges.contains(edge)) {
                    rule2apps++;
					println(tab + "/* FALSE PATH */ ");
                }
				else if(!marked.contains(to))
					decompile(to);

                if(slice.contains(from)) {
                    if(c.getBranch()) {
                        if(edges.get(from).size() > 1) {
                            tab = tab.substring(1);
                            println(tab + "}");
                        }
                    }
                }

				if(!marked.remove(from))
					FATAL.error("unmarked vertex " + from + " encountered!");

                if(!slice.contains(from)) break;
			}
		}
		else if(calls.containsKey(from)) {
			Clause c = from.fac().getCallClause(from.PP());
			if(c == null)
				FATAL.error("improper call at " + from);

			CallInfo call = c.getCall();
			Vertex callee = calls.get(from);
            Vector<String> vals = call.getArguments_C();
            Vector<Variable> params = callee.fac().getParams();

            if(params.size()-1 /*ReturnValue*/ != vals.size())
                FATAL.error("arity mismatch for call: " + from + " -> " + callee + " " +
                    params.size() + "::" + vals.size());

            println("{");
            printLocalVariables(callee.fac());
            printSLICE(callee.fac());
            for(int i = 1; i < params.size(); i++)
                println(tab + params.elementAt(i).getName() + " = " + 
                    new Dictionary(from.fac()).translate(vals.elementAt(i-1)) + ";");

			marked.add(from);

			Vector<String> scons = c.getSymbolicConstraints();
			String retCon = "";
			if(scons.size() != 0) {
				if(scons.size() > 1)
					FATAL.error("more than 1 constraint in call at " + from);
				retCon = new Dictionary(from.fac()).translate(scons.elementAt(0));
			}
			retCons.put(new Vertex(from.func(), "p" + c.getToPP(), -1), retCon);

			DEBUG.println("\ncall: " + from + " -> " + callee);
			decompile(callee);
            println("}");

			if(!marked.remove(from))
				FATAL.error("unmarked vertex " + from + " encountered!");
		}
		else if(returns.containsKey(from)) {
			Vertex to = returns.get(from);
			if(!retCons.containsKey(to))
				FATAL.error("no constraint for return: " + from + " -> " + to);
			println(tab + retCons.get(to) + ";");
            println(tab + "TRACER_RV = nondet();");
			marked.add(from);

			DEBUG.println("ret: " + from + " -> " + returns.get(from) + "\n");
			decompile(returns.get(from));

			if(!marked.remove(from))
				FATAL.error("unmarked vertex " + from + " encountered!");
		}
		else
			FATAL.error("123456");
	}

    Vertex find_subsumer(Vertex v) {
        for(Vertex v1: subsumptions.keySet())
            if(subsumptions.get(v1).contains(v)) return v1;
        return null;
    }
}
