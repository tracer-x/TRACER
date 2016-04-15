package crystal.analysis.alias.demand;

import java.io.*;
import java.util.*;

import crystal.*;
import crystal.analysis.callgraph.CallGraph;
import crystal.analysis.pointer.*;
import crystal.ast.*;
import crystal.cfg.*;
import crystal.core.*;
import crystal.general.*;

/**
 * Class containing functions to build a PEG from program expressions.
 */
public class PEGBuilder {
    
    public static boolean FIELD_SENSITIVE = true;

	public static final SubExprs subexps = new SubExprs();
	
	private static Map<PEGNode, Set<PEGNode>> assignedTo;
	private static Map<PEGNode, Set<PEGNode>> assignedFrom;

	private static Set<String> libFuns = new HashSet<String>();
	
	private static boolean pegBuilt = false;
    
    private static Set<CoreExpr> allExprs = new HashSet<CoreExpr>();
    
    public static int nextId;
	
	private PEGBuilder() {}
	
	public static void buildPEG() {
		if (pegBuilt) {
			return;
		}
		
		long time = 0;
		
		if (Options.VERBOSITY >= 3) {
			System.out.print("Building PEG... ");
			time = System.currentTimeMillis();
		}
		
		makePEG();
		
		if (Options.VERBOSITY >= 3) {
			printInfo();
			
			time = System.currentTimeMillis() - time;
			System.out.printf("done. (%.2f s)%n", time / 1000.0);
		}
		
		pegBuilt = true;
	}
    
    public static void clearPEG() {
        for (CoreExpr e : allExprs) {
            e.peg = null;
        }
        
        allExprs.clear();
        PEGNode.allNodes.clear();
        pegBuilt = false;
        nextId = 0;
    }
	
	private static void printInfo() {
		System.out.println();
		System.out.println("   Nodes: " + PEGNode.allNodes.size());
		int edges = 0;
		
		for (PEGNode n : PEGNode.allNodes.values()) {
			if (n.getDeref() != null) {
				edges++;
			}
			
			edges += n.getFields().size();
			edges += n.getAssignedTo().length;
		}
		
		System.out.println("   Edges: " + edges);
		
		Object[] libNames = libFuns.toArray();
		Arrays.sort(libNames);
		System.out.println("   Lib calls: " + Arrays.toString(libNames));
	}
	
	private static void makePEG() {
		assignedTo = new HashMap<PEGNode, Set<PEGNode>>();
		assignedFrom = new HashMap<PEGNode, Set<PEGNode>>();
		
		for (Function f : Symtab.getFunctions()) {
			subexps.map(CoreExpr.getAddressOf(f));
			
			if (f.getReturnVar() != null) {
				subexps.map(CoreExpr.getVar(f.getReturnVar()));
			}
			
			for (int i = 0; i < f.numParams(); i++) {
				CoreExpr p = CoreExpr.getVar(f.getParam(i));
				CoreExpr s = CoreExpr.getVar(f.getShadowParam(i));
				subexps.map(p);
				subexps.map(s);
				addAssign(p, s);
			}
		}

		for (CoreExpr e : CoreExpr.varMap.values()) {
			subexps.map(e);
		}

		for (CoreExpr e : CoreExpr.allocMap.values()) {
			subexps.map(e);
		}

		for (CoreExpr e : CoreExpr.allExprs.values()) {
			subexps.map(e);
		}

		for (Function f : Symtab.getFunctions()) {
			buildPEG(f);
		}
		
		for (PEGNode n : PEGNode.allNodes.values()) {
			fillAssign(n);
		}

		assignedTo = null;
		assignedFrom = null;
	}
	
	private static void fillAssign(PEGNode n) {
		n.setAssignedTo(getArray(assignedTo, n));
		n.setAssignedFrom(getArray(assignedFrom, n));
	}
	
	private static PEGNode[] getArray(Map<PEGNode, Set<PEGNode>> map, 
			PEGNode n) {
		Set<PEGNode> set = map.get(n);
		
		if (set == null) {
			return PEGNode.EMPTY_ARRAY;
		}
		
		return set.toArray(PEGNode.EMPTY_ARRAY);
	}

	private static void buildPEG(Function fun) {
		List<CFGNode> nodes = fun.getCFG().getAllNodes();
		
		for (CFGNode n : nodes) {
			for (int i = 0; i < n.numCoreKids(); i++) {
				CoreExpr e = n.getCoreKid(i);
				subexps.map(e);
			}
			
			if (n.isAssign()) {
				CFGAssignNode a = (CFGAssignNode) n;
				addAssign(a.getLeft(), a.getRight());
			} else if (n.isCall()) {
				CFGCallNode c = (CFGCallNode) n;
				CoreExpr lhs = c.getLeft();
				List<Function> targets;
				
				if (PointerAnalysis.STEENSGAARD) {
					targets = PointerAnalysis.getCallees(c);
				} else {
					targets = CallGraph.getCalleesByType(c);
				}

				for (Function callee : targets) {
					if (!callee.isDefined()) {
						libFuns.add(callee.getIdName());
					} else {
						if (lhs != null) {
							Symbol retvar = callee.getReturnVar();
							CoreExpr ret = CoreExpr.getVar(retvar);
							addAssign(lhs, ret);
						}
						
						for (int i = 0; i < c.numArgs(); i++) {
							if (i >= callee.numParams() ||
									callee.getParam(i) == Symbol.varargs) {
								break;
							}
		
							addAssign(CoreExpr.getVar(callee.getParam(i)), 
									c.getArg(i));
							
							addAssign(CoreExpr.getVar(callee.getShadowParam(i)), 
									c.getArg(i));
						}
					}
				}
			} else if (n.isAlloc()) {
				CFGCallNode c = (CFGCallNode) n;
				CoreExpr lhs = c.getLeft();
				CallExpr call = c.getCall();
				CoreExpr alloc = CoreExpr.getAlloc(call);
				
				if (lhs != null) {
					addAssign(lhs, alloc);
				}
			} else if (n.isReturn()) {
				CFGReturnNode r = (CFGReturnNode) n;
				
				if (r.getExpr() != null) {
					CoreExpr ret = CoreExpr.getVar(fun.getReturnVar());
					addAssign(ret, r.getExpr());
				}
			}
		}
	}

    /** Creates a new peg node for expression e. */
	private static void putNode(CoreExpr e) {
		if (e.peg == null) {
			PEGNode n = new PEGNode(e);
            n.id = nextId++;
			PEGNode.allNodes.put(n.id, n);
			mapNode(e, n);
		}
	}
	
    /** Maps core expr e to peg node n. */
	private static void mapNode(CoreExpr e, PEGNode n) {
		e.peg = n;
        allExprs.add(e);
	}
	
    /** Returns the peg node for expr e. */
	private static PEGNode getNode(CoreExpr e) {
		return e.peg;
	}
	
    /** Process assignment statement lhs = rhs. */
	private static void addAssign(CoreExpr lhs, CoreExpr rhs) {
		if (!rhs.isNumConstant()) {
			if (isStruct(lhs) || isStruct(rhs)) {
				//assert TypeEquiv.cmpByStruct(lhs.getType(), rhs.getType()) == 
					//Order.EQUAL;
				
				List<CoreDerefExpr> ls, rs; 
				ls = ((CoreDerefExpr) lhs).fieldSubExprs(lhs.getType());
				rs = ((CoreDerefExpr) rhs).fieldSubExprs(rhs.getType());
				
				int size = Math.min(ls.size(), rs.size());
				
				for (int i = 0; i < size; i++) {
					addAssignPrimitive(ls.get(i), rs.get(i));
				}
			} else {
				addAssignPrimitive(lhs, rhs);
			}
		}
	}
	
    /** Process simple assignment (no structs). */
	private static void addAssignPrimitive(CoreExpr lhs, CoreExpr rhs) {
		subexps.map(lhs);
		subexps.map(rhs);
		PEGNode l = getNode(lhs);
		PEGNode r = getNode(rhs);
		
		if (l != r) {
			checkAssignMap(l);
			checkAssignMap(r);
			assignedFrom.get(l).add(r);
			assignedTo.get(r).add(l);
		}
	}
	
	private static boolean isStruct(CoreExpr e) {
		Type t = e.getType().unwrap();
		return t.isStruct() || t.isUnion();
	}
	
	private static void checkAssignMap(PEGNode n) {
		if (assignedTo.get(n) == null) {
			assignedTo.put(n, new HashSet<PEGNode>());
			assignedFrom.put(n, new HashSet<PEGNode>());
		}
	}
	
	private static boolean isAddress(CoreExpr e) {
		return e.getType().isArray() || e.getType().isPointer();
	}
	
	/* just for testing purposes. */
	public static void main(String[] args) throws Exception {
		Options.ALLOC_WRAPPER_DETECTION = true;
		Options.DISMANTLE_STRUCTURE_ASSIGNMENTS = true;
		Symbol.DEBUG_SYM = false;
		
		PointerAnalysis.FIELD_TREATMENT = 'S';
		PointerAnalysis.CHECK_TYPE_CONSISTENCY = true;
		PointerAnalysis.STEENSGAARD = true;
		
		Options.CFG = true;
		Options.POINTER_ANALYSIS = true;
		Main.main(args);
		
		PEGBuilder.buildPEG();
	}
	
	public static void printPegDot(PrintStream ps) {
		ps.println("");
		ps.println("digraph PEG {");
		ps.println("node[fontname=Arial, fontsize=8];");
		ps.println("edge[fontname=Arial, fontsize=8];");
		ps.println("graph[center=true];");

		Set<PEGNode> visited = new HashSet<PEGNode>();
		
		for (PEGNode n : PEGNode.allNodes.values()) {
			if (n == null || visited.contains(n)) {
				continue;
			}
			
			visited.add(n);
			
			if (isIsolated(n)) {
				continue;
			}
			
			printNode(n, ps);
		}
		
		ps.println("}");
	}
	
	private static boolean isIsolated(PEGNode n) {
		while (n.getAddr() != null) {
			n = n.getAddr();
		}
		
		while (n != null) {
			if (n.getAssignedFrom().length != 0 || 
					n.getAssignedTo().length != 0) {
				return false;
			}
			
			n = n.getDeref();
		}
		
		return true;
	}
	
	private static void printNode(PEGNode n, PrintStream ps) {
		ps.println(dotNode(n) + "[" + dotLabel(n.toString()) + 
				"];");
		
		if (n.getDeref() != null) {
			ps.println(dotNode(n) + "->" + dotNode(n.getDeref()) +
					"[" + dotLabel("*") + "];");
		}
		
		for (PEGNode to : n.getAssignedTo()) {
			ps.println(dotNode(n) + "->" + dotNode(to) +
					"[" + dotColor("red") + "];");
		}
	}
	
	public static String dotNode(PEGNode n) {
		return "" + n.hashCode();
	}
	
	public static String dotLabel(String s) {
		return "label=\"" + dotEscape(s) + "\", ";
	}
	
	public static String dotColor(String s) {
		return "color=\"" + dotEscape(s) + "\", ";
	}

	public static String dotEscape(String data) {
		StringBuffer result = new StringBuffer();
		
		for (int i = 0; i < data.length(); i++) {
			char c = data.charAt(i);
			
			switch (c) {
			case '\n': result.append("\\\\n"); break;
			case '\t': result.append("\\\\t"); break;
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

    /** Visits all subexpressions and maps them to peg nodes. */
    public static class SubExprs extends RecursiveCoreExprVisitor {
        
        public void map(CoreExpr e) {
            if (e != null) {
                e.accept(this, null);
            }
        }
        
        public Object visit(CoreAddrExpr e, Object o) {
            if (getNode(e) != null) {
                return null;
            }
            
            super.visit(e, o);
            putNode(e);
            return null;
        }
        
        public Object visit(CoreAllocExpr e,Object o) {
            if (getNode(e) != null) {
                return null;
            }
            
            super.visit(e, o);
            putNode(e);
            return null;
        }
        
        public Object visit(CoreUnaryExpr e, Object o) {
            if (getNode(e) != null) {
                return null;
            }
            
            super.visit(e, o);
            PEGNode base = getNode(e.getExpr());
            mapNode(e, base);
            return null;
        }
        
        public Object visit(CoreBinaryExpr e, Object o) {
            if (getNode(e) != null) {
                return null;
            }
            
            super.visit(e, o);
            
            if (e.getOp() == ArithmOps.PLUS) {
                if (isAddress(e.getLeft())) {
                    mapNode(e, getNode(e.getLeft()));
                } else if (isAddress(e.getRight())) {
                    mapNode(e, getNode(e.getRight()));
                } else {
                    putNode(e);
                }
            } else if (e.getOp() == ArithmOps.MINUS) {
                if (isAddress(e.getLeft()) && !isAddress(e.getRight())) {
                    mapNode(e, getNode(e.getLeft()));
                } else {
                    putNode(e);
                }
            } else {
                putNode(e);
            }
            
            return null;
        }
        
        public Object visit(CoreConstExpr e, Object o) {
            if (getNode(e) != null) {
                return null;
            }
            
            super.visit(e, o);
            putNode(e);
            return null;
        }
        
        public Object visit(CoreFieldExpr e, Object o) {
            if (getNode(e) != null) {
                return null;
            }
            
            super.visit(e, o);
            PEGNode base = getNode(e.getExpr());
            
            if (FIELD_SENSITIVE) {
                PEGNode field = base.getFields().get(e.getField());
                
                if (field != null) {
                    mapNode(e, field);
                } else {
                    putNode(e);
                    field = getNode(e);
                    field.setField(e.getField(), base);
                }
            } else {
                mapNode(e, base);
            }
            
            return null;
        }
        
        public Object visit(CoreDerefExpr e, Object o) {
            if (getNode(e) != null) {
                return null;
            }
            
            super.visit(e, o);
            PEGNode addr = getNode(e.getExpr());
            PEGNode deref = addr.getDeref();
            
            if (deref != null) {
                mapNode(e, deref);
            } else {
                putNode(e);
                deref = getNode(e);
                deref.setAddr(addr);
            }
            
            return null;
        }
        
        public Object visit(CoreStringExpr e, Object o) {
            if (getNode(e) != null) {
                return null;
            }
            
            super.visit(e, o);
            putNode(e);
            return null;
        }
        
    }

}
