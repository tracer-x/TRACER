package crystal.analysis.alias.demand;

import java.io.FileWriter;
import java.io.PrintWriter;
import java.util.ArrayList;
import java.util.BitSet;
import java.util.Collection;
import java.util.HashMap;
import java.util.HashSet;
import java.util.LinkedList;
import java.util.List;
import java.util.Map;
import java.util.Set;

import crystal.analysis.alias.demand.ReachableInfo.Color;
import crystal.analysis.callgraph.CallGraph;
import crystal.analysis.pointer.PointerAnalysis;
import crystal.core.CoreAddrExpr;
import crystal.core.CoreAllocExpr;
import crystal.core.CoreExpr;
import crystal.core.CoreFieldExpr;
import crystal.core.CoreStringExpr;
import crystal.general.AggregateType;
import crystal.general.Symbol;
import crystal.util.MultiQueue;
import crystal.util.Pair;

public class Interference {

	/** When true, some debugging info will be generated. */
	public static boolean DEBUG_INFO = false;
	
	/** Maximum number of search steps to take. */
	public static int MAX_STEPS = 50;
	
	/** When true, worklist elements will be propagated through mismatched
	 *  struct fields. Otherwise, incompatible fields will be ignored. */
	public static boolean FIELD_SAFE = true;
	
	/** When true, search will attempt to stop early when the frontiers of the
	 *  two ends meet. Otherwise, search only ends when one end reaches the
	 *  other. */
	public static boolean MEET_IN_MIDDLE = true;
	
	/** When true, search results will be cached for future use. This includes
	 *  the results from sub-searches (i.e., searches at deeper pointer 
	 *  levels). */
	public static boolean CACHE_RESULTS = true;

	/** Maximum number of pointer levels to search. */
	public static int MAX_LEVELS = Integer.MAX_VALUE;
	
	/** Set this to true if approximations are available and you want to use
	 *  them. */
	public static boolean APPROX_AVAIL = false;
	
	/** DISTR_1 and DISTR_2 determine the ratio of the number of steps
	 *  that should be spent on the first and second directions respectively. */
	public static int DISTR_1 = 1;
	
	/** See DISTR_1. */
	public static int DISTR_2 = 1;
	
	/** When true, only expressions and assignments local to a function will
	 *  be explored. Not currently implemented. */
	public static boolean LOCAL_ANALYSIS = false;
	
	/** A log of the number of steps that searches take. */
	public static final List<Integer> stepStats = new ArrayList<Integer>();
	
	/** A log of the maximum size of the worklist during searches. */
	public static final List<Integer> sizeStats = new ArrayList<Integer>();

	private static final MultiQueue<Pair<PEGNode, ReachableInfo>> worklist0 = 
		new MultiQueue<Pair<PEGNode, ReachableInfo>>();
	private static final MultiQueue<Pair<PEGNode, ReachableInfo>> worklist1 = 
		new MultiQueue<Pair<PEGNode, ReachableInfo>>();
	
	private static final Map<PEGNode, Set<ReachableInfo>> reachable0 = 
		new HashMap<PEGNode, Set<ReachableInfo>>();
	private static final Map<PEGNode, Set<ReachableInfo>> reachable1 = 
		new HashMap<PEGNode, Set<ReachableInfo>>();
	
	private static final Collection<PEGNode> mayComplete0 = 
		new LinkedList<PEGNode>();
	private static final Collection<PEGNode> mayComplete1 = 
		new LinkedList<PEGNode>();

	private static boolean[] discardComplete = new boolean[2];
	private static boolean[] searchFinished = new boolean[2];
	
	protected static Map<CoreExpr, List<CoreExpr>> approxAlias =
		new HashMap<CoreExpr, List<CoreExpr>>();
	
	private static final Collection<DebugInfo> debugInfo = 
		new ArrayList<DebugInfo>();
    
    private static final BitSet cacheTouches = new BitSet();
    public static int cacheEdges;
	
	public static int steps;
	public static int workSize;
    public static int infoSize;
	public static int distA;
	public static int distI;
    
    private static boolean isPT;
	
	protected Interference() {}
	
	public static int memoryAlias(CoreExpr e1, CoreExpr e2) {
		if (e1.peg == null) {
			PEGBuilder.subexps.map(e1);
		}
		
		if (e2.peg == null) {
			PEGBuilder.subexps.map(e2);
		}
		
		return memoryAlias(e1.peg, e2.peg, MAX_LEVELS);
	}
	
	public static int memoryAlias(PEGNode n1, PEGNode n2, int k) {
		reset();
		int result = memInterfere(n1, n2, k);
		//recordStats();
		cleanUp();
		return result;
	}
	
	public static int valueAlias(CoreExpr e1, CoreExpr e2) {
		if (e1.peg == null) {
			PEGBuilder.subexps.map(e1);
		}
		
		if (e2.peg == null) {
			PEGBuilder.subexps.map(e2);
		}
		
		PEGNode n1 = e1.peg;
		PEGNode n2 = e2.peg;
		
		PEGNode d1 = n1.getDeref();
		PEGNode d2 = n2.getDeref();
		
		if (d1 == null) {
			d1 = new PEGNode(null);
            d1.id = PEGBuilder.nextId++;
			d1.setAddr(n1);
			n1.setDeref(d1);
			PEGNode.allNodes.put(d1.id, d1);
		}

		if (d2 == null) {
			d2 = new PEGNode(null);
            d2.id = PEGBuilder.nextId++;
			d2.setAddr(n2);
			n2.setDeref(d2);
			PEGNode.allNodes.put(d2.id, d2);
		}
		
		return memoryAlias(d1, d2, MAX_LEVELS);
	}
	
	public static Set<PEGNode> pointsTo(CoreExpr e) {
		return pointsTo(e.peg, MAX_LEVELS);
	}
	
	public static Set<PEGNode> pointsTo(PEGNode n1, int k) {
		reset();
		Set<PEGNode> result = ptSet(n1, k);
		//recordStats();
		cleanUp();
		return result;
	}
	
	public static void reset() {
		steps = 0;
		workSize = 0;
		distA = -1;
		distI = -1;
		searchFinished[0] = false;
		searchFinished[1] = false;
		discardComplete[0] = false;
		discardComplete[1] = false;
		worklist0.clear();
		worklist1.clear();
		reachable0.clear();
		reachable1.clear();
		mayComplete0.clear();
		mayComplete1.clear();
		debugInfo.clear();
        cacheTouches.clear();
	}
	
	public static void recordStats() {
		stepStats.add(steps);
		sizeStats.add(workSize);
        infoSize = ReachableInfo.getCacheSize();
	}
	
	public static void init() {
		CallGraph.construct();
		approxAlias = PointerAnalysis.buildSets(true);
	}
		
	private static int memInterfere(PEGNode n1, PEGNode n2, int k) {
        isPT = false;
        
		if (n1 == n2) {
			return 1;
		}
		
		if (n1 == null || n2 == null) {
			return 2;
		}
		
		PEGNode a1 = n1.getAddr();
		PEGNode a2 = n2.getAddr();
		
		if (a1 == null || a2 == null) {
			return 0;
		}
		
		if (a1 == a2) {
			return 1;
		}

		if (APPROX_AVAIL) {
			if (PointerAnalysis.STEENSGAARD) {
				// use value interference approx
				if (a1.coreExpr.getRep() != a2.coreExpr.getRep()) {
					return 0;
				}
			} else if (n1 != null && n2 != null) {
				// use memory interference approx
				if (n1.coreExpr.getRep() != n2.coreExpr.getRep()) {
					return 0;
				}
			}
		}
		
		if (getInterfere(n1).contains(n2)) {
			return 1;
		}
		
		if (getInterfere(n2).contains(n1)) {
			return 1;
		}

		if (isComplete(n1) && !getInterfere(n1).contains(n2)) {
			return 0;
		}
		
		if (isComplete(n2) && !getInterfere(n2).contains(n1)) {
			return 0;
		}
		
		startSearch(0, n1, new PEGNode(null), 0);
		startSearch(1, n2, new PEGNode(null), 0);
		
		while (!worklist0.empty() && !worklist1.empty()) {
			int which;
			MultiQueue<Pair<PEGNode, ReachableInfo>> worklist;
			
			if (steps % (DISTR_1 + DISTR_2) < DISTR_1) {
				which = 0;
				worklist = worklist0;
			} else {
				which = 1;
				worklist = worklist1;
			}
			
			if (++steps > MAX_STEPS) {
				return 2;
			}
			
			Pair<PEGNode, ReachableInfo> item = worklist.remove();
			PEGNode n = item.fst;
			PEGNode s = item.snd.getSource();
			byte c = item.snd.getColor();
			Symbol f = item.snd.getField();
			
			if (MEET_IN_MIDDLE) {
				Set<ReachableInfo> r0 = reachable0.get(n);
				Set<ReachableInfo> r1 = reachable1.get(n);
				
				if (s == a1 && r1 != null) {
					for (ReachableInfo info : r1) {
						if (info.getSource() == a2 &&
								f == null && info.getField() == null &&
								colorsConnect(c, info.getColor())) {
							distA = item.snd.distA;
							distI = item.snd.distI;
							addInterfere(n1, n2);
							return 1;
						}
					}
				}
	
				if (s == a2 && r0 != null) {
					for (ReachableInfo info : r0) {
						if (info.getSource() == a1 &&
								f == null && info.getField() == null &&
								colorsConnect(c, info.getColor())) {
							distA = item.snd.distA;
							distI = item.snd.distI;
							addInterfere(n1, n2);
							return 1;
						}
					}
				}
			}
			
			if (f == null) {
				boolean alias = (s == a1 && n == a2) || 
					(s == a2 && n == a1);
				
				if (alias) {
					distA = item.snd.distA;
					distI = item.snd.distI;
					addInterfere(n1, n2);
					return 1;
				}
			}

			propagate(which, item, k);
		}
		
		if (worklist0.empty()) {
			searchFinished[0] = true;
		}

		if (worklist1.empty()) {
			searchFinished[1] = true;
		}
		
		return 0;
	}
	
	protected static boolean colorsConnect(byte c1, byte c2) {
		switch (c1) {
		case Color.RED:
			return true;
			
		case Color.BLUE:
			return c2 == Color.RED || c2 == Color.YELLOW;
			
		case Color.YELLOW:
			return c2 == Color.RED || c2 == Color.BLUE;
			
		case Color.GREEN:
			return c2 == Color.RED;
		}
		
		return false;
	}

	private static Set<PEGNode> ptSet(PEGNode n1, int k) {
        isPT = true;
        
		if (n1.ptSet != null) {
			return n1.ptSet;
		}
		
		Set<PEGNode> ptset = new HashSet<PEGNode>();
		startPT(n1);
		
		while (!worklist0.empty()) {
			if (++steps > MAX_STEPS) {
				return null;
			}
			
			Pair<PEGNode, ReachableInfo> item = worklist0.remove();
			PEGNode n = item.fst;
			PEGNode s = item.snd.getSource();
			Symbol f = item.snd.getField();
			
			if (s == null && f == null && isAddress(n)) {
				ptset.add(n);
			}
			
			propagate(0, item, k);
		}
		
		searchFinished[0] = true;
		
		if (CACHE_RESULTS) {
			n1.ptSet = ptset;
		}
		
		return ptset;
	}
	
	private static void propagate(int which, Pair<PEGNode, ReachableInfo> item, 
			int k) {
		PEGNode n = item.fst;
		PEGNode s = item.snd.getSource();
		byte c = item.snd.getColor();
		int p = item.snd.getPriority();
		Symbol f = item.snd.getField();
		int dA = item.snd.distA;
		int dI = item.snd.distI;
		
		// propagate interference info backward
		if (s != null && f == null) {
			PEGNode sd = s.getDeref();
			PEGNode nd = n.getDeref();
			
			if (nd != null && nd != sd) {
				if (addInterfere(sd, nd)) {
					interfereExpanded(0, sd, nd);
					interfereExpanded(1, sd, nd);
				}
			}
		}

		// propagate field info backward
		if (f != null) {
			PEGNode sf = s.getFields().get(f);
			
			for (Symbol ff : n.getFields().keySet()) {
				if (!fieldsDisjoint(f, ff)) {
					PEGNode nf = n.getFields().get(ff);
					
					if (nf != null && nf != sf) {
						if (addFieldInterfere(sf, nf)) {
							fieldInterfereExpanded(0, sf, nf);
							fieldInterfereExpanded(1, sf, nf);
						}
					}
				}
			}
		}

        PEGNode[] assignedTo = n.getAssignedTo();
        int toSize = assignedTo.length;
        PEGNode[] assignedFrom = n.getAssignedFrom();
        int fromSize = assignedFrom.length;
        
		// propagate reachability forward
		switch (c) {
		case Color.RED:
			if (s != null) {
				for (int i = 0; i < toSize; i++) {  // to
                    PEGNode m = assignedTo[i];
					addReachable(which, p, n, m, s, f, Color.YELLOW, dA, dI);
				}
			}

			for (int i = 0; i < fromSize; i++) {  // from
                PEGNode m = assignedFrom[i];
				addReachable(which, p, n, m, s, f, Color.RED, dA, dI);
			}

			if (p < k) {
				for (PEGNode m : getInterfere(n)) {
					addReachable(which, p, n, m, s, f, Color.BLUE, dA, dI);
				}
			} else {
				discardComplete[which] = true;
				
				for (CoreExpr e : approxAlias.get(
						n.coreExpr.getRep())) {
					addReachable(which, p, n, e.peg, s, f, Color.BLUE, dA, dI);
				}
			}
			
			for (PEGNode m : getFieldInterfere(n)) {
				addReachable(which, p, n, m, s, f, Color.YELLOW, dA, dI);
			}
			
			break;
			
		case Color.BLUE:
			if (s != null) {
				for (int i = 0; i < toSize; i++) {  // to
                    PEGNode m = assignedTo[i];
					addReachable(which, p, n, m, s, f, Color.YELLOW, dA, dI);
				}
			}

			for (int i = 0; i < fromSize; i++) {  // from
                PEGNode m = assignedFrom[i];
				addReachable(which, p, n, m, s, f, Color.RED, dA, dI);
			}
			
			break;
			
		case Color.YELLOW:
			if (s != null) {
				for (int i = 0; i < toSize; i++) {  // to
                    PEGNode m = assignedTo[i];
					addReachable(which, p, n, m, s, f, Color.YELLOW, dA, dI);
				}
			}

			if (p < k) {
				for (PEGNode m : getInterfere(n)) {
					addReachable(which, p, n, m, s, f, Color.GREEN, dA, dI);
				}
			} else {
				discardComplete[which] = true;
				
				for (CoreExpr e : approxAlias.get(
						n.coreExpr.getRep())) {
					addReachable(which, p, n, e.peg, s, f, Color.GREEN, dA, dI);
				}
			}
			
			break;
			
		case Color.GREEN:
			if (s != null) {
				for (int i = 0; i < toSize; i++) {  // to
                    PEGNode m = assignedTo[i];
					addReachable(which, p, n, m, s, f, Color.YELLOW, dA, dI);
				}
			}
			
			break;
		}
		
        PEGNode m = n.getBase();
        
		// propagate field info forward
		if (m != null && c == Color.RED) {
			addReachable(which, p, n, m, m, n.getField(), Color.RED,
					dA, dI);
		}
		
		// refine info deeper
		if (!isComplete(n) && p < k) {
			if (c == Color.RED || c == Color.YELLOW) {
				startSearch(which, n, s, p + 1);
			}
		}
	}
	
	private static void startSearch(int which, PEGNode n, PEGNode oldSource, 
			int p) {
		PEGNode a = n.getAddr();
        
		if (a != null) {
			if (addReachable(which, p, null, a, a, null, Color.RED, -1, 0)) {
				if (which == 0) {
					mayComplete0.add(n);
				} else {
					mayComplete1.add(n);
				}
				
				addDebugInfo(n, a, oldSource, Color.NONE);
			}
		}
	}

	private static void startPT(PEGNode n) {
		addReachable(0, 0, null, n, null, null, Color.RED, -1, 0);
	}
	
	protected static void addComplete(PEGNode n) {
		n.setInterfereComplete(true);
	}
	
	protected static boolean isComplete(PEGNode n) {
		if (!CACHE_RESULTS) {
			return false;
		}
		
		return n.isInterfereComplete();
	}
	
	protected static Set<PEGNode> getInterfere(PEGNode n) {
		return n.getInterfere();
	}

    protected static Set<PEGNode> getFieldInterfere(PEGNode n) {
        return n.getFieldInterfere();
    }
    
	protected static boolean addInterfere(PEGNode n1, PEGNode n2) {
		boolean added = n1.addInterfere(n2);
        
        if (added) {
            cacheTouches.set(n1.id);
            cacheTouches.set(n2.id);
            cacheEdges++;
        }
        
        return added;
	}

	private static boolean addFieldInterfere(PEGNode n1, PEGNode n2) {
		boolean added = n1.addFieldInterfere(n2);
        
        if (added) {
            cacheTouches.set(n1.id);
            cacheTouches.set(n2.id);
            cacheEdges++;
        }
        
        return added;
	}
	
	private static void interfereExpanded(int which, PEGNode n1, PEGNode n2) {
		Set<ReachableInfo> set;
		
		if (which == 0) {
			set = reachable0.get(n1);
		} else {
			set = reachable1.get(n1);
		}
		
		if (set != null) {
			for (ReachableInfo info : set) {
				if (info.getColor() == Color.RED) {
					addReachable(which, info.getPriority(), n1, n2, 
							info.getSource(), info.getField(), Color.BLUE, 
							info.distA, info.distI);
				} else if (info.getColor() == Color.YELLOW) {
					addReachable(which, info.getPriority(), n1, n2, 
							info.getSource(), info.getField(), Color.GREEN, 
							info.distA, info.distI);
				}
			}
		}
	}

	private static void fieldInterfereExpanded(int which, PEGNode n1, PEGNode n2) {
		Set<ReachableInfo> set;
		
		if (which == 0) {
			set = reachable0.get(n1);
		} else {
			set = reachable1.get(n1);
		}
		
		if (set != null) {
			for (ReachableInfo info : set) {
				if (info.getColor() == Color.RED) {
					addReachable(which, info.getPriority(), n1, n2, 
							info.getSource(), info.getField(), Color.YELLOW, 
							info.distA, info.distI);
				}
			}
		}
	}

	private static boolean addReachable(int which, int p, PEGNode parent, 
			PEGNode n, PEGNode s, Symbol field, byte c, int dA, int dI) 
	{
		Map<PEGNode, Set<ReachableInfo>> reachable;
		MultiQueue<Pair<PEGNode, ReachableInfo>> worklist;
        int distr;
		
		if (which == 0) {
			reachable = reachable0;
			worklist = worklist0;
            distr = DISTR_1;
		} else {
			reachable = reachable1;
			worklist = worklist1;
            distr = DISTR_2;
		}
        
        int stepsRemaining = MAX_STEPS - steps;
        
        if (!isPT) {
            stepsRemaining = (stepsRemaining + 1) * distr / (DISTR_1 + DISTR_2);
        }

        int wp = p * 2;
        
        if (worklist.sizeBelow(wp + 1) > stepsRemaining + 1) {
            return false;
        }
        
		Set<ReachableInfo> set = reachable.get(n);
		
		if (set == null) {
			set = new HashSet<ReachableInfo>();
			reachable.put(n, set);
		}
		
		ReachableInfo red = ReachableInfo.get(p, s, field, Color.RED);
		ReachableInfo blue = ReachableInfo.get(p, s, field, Color.BLUE);
		ReachableInfo yellow = ReachableInfo.get(p, s, field, Color.YELLOW);
		
		if (c == Color.BLUE && set.contains(red)) {
			return false;
		}

		if (c == Color.YELLOW && set.contains(red)) {
			return false;
		}

		if (c == Color.GREEN && (set.contains(red) || set.contains(blue) ||
				set.contains(yellow))) {
			return false;
		}
		
		ReachableInfo info = ReachableInfo.get(p, s, field, c);
		info.distA = dA;
		info.distI = dI;
		
		if (c == Color.RED || c == Color.YELLOW) {
			info.distA++;
		} else {
			info.distI++;
		}
		
		if (set.add(info)) {
			if (c == Color.BLUE || c == Color.GREEN) {
				wp++;
			}
			
			worklist.add(wp, new Pair<PEGNode, ReachableInfo>(n, info));
            
            if (worklist0.size() + worklist1.size() > workSize) {
                workSize = worklist0.size() + worklist1.size();
            }
			
			if (parent != null) {
				addDebugInfo(parent, n, s, c);
			}
			
			return true;
		}
		
		return false;
	}
	
	protected static boolean fieldsDisjoint(Symbol f1, Symbol f2) {
		AggregateType t1 = AggregateType.getStructOf(f1);
		AggregateType t2 = AggregateType.getStructOf(f2);
		
		if (!FIELD_SAFE || t1 == t2) {
			return f1 != f2;
		}
		
		return false;
	}

	private static boolean isAddress(PEGNode n) {
		return n.coreExpr instanceof CoreAddrExpr || 
			n.coreExpr instanceof CoreAllocExpr || 
			n.coreExpr instanceof CoreStringExpr ||
			n.coreExpr instanceof CoreFieldExpr;
	}
    
    public static boolean intersects(Set<?> s1, Set<?> s2) {
        if (s2.size() < s1.size()) {
            Set<?> temp = s1;
            s1 = s2;
            s2 = temp;
        }
        
        for (Object e : s1) {
            if (s2.contains(e)) {
                return true;
            }
        }
        
        return false;
    }
	
	protected static void addDebugInfo(PEGNode parent, PEGNode n, PEGNode s, 
			byte c) {
		if (DEBUG_INFO) {
			debugInfo.add(new DebugInfo(parent, n, s, c));
		}
	}
	
	public static void cleanUp() {
		if (!CACHE_RESULTS) {
			for (int i = cacheTouches.nextSetBit(0); i >= 0; 
                    i = cacheTouches.nextSetBit(i + 1)) {
				PEGNode.allNodes.get(i).resetInterfere();
			}
            
            cacheEdges = 0;
		} else {
			if (searchFinished[0] && !discardComplete[0]) {
				for (PEGNode n : mayComplete0) {
					addComplete(n);
				}
			}

			if (searchFinished[1] && !discardComplete[1]) {
				for (PEGNode n : mayComplete1) {
					addComplete(n);
				}
			}
		}
        
        ReachableInfo.clearCache();
	}
	
	static void dumpSearch() {
		Symbol.DEBUG_SYM = true;
		
		try {
			PrintWriter w = new PrintWriter(
					new FileWriter("c:/temp/search.dot"));

			w.println("digraph PEG {");
			w.println("node[fontname=Arial, fontsize=8];");
			w.println("edge[fontname=Arial, fontsize=8];");
			w.println("graph[center=true];");
			
			int nextId = 0;
			Map<Pair<PEGNode, PEGNode>, Integer> idMap = 
				new HashMap<Pair<PEGNode, PEGNode>, Integer>();
			Map<Integer, PEGNode> nodeMap = new HashMap<Integer, PEGNode>();
			
			for (DebugInfo d : debugInfo) {
				int fromId, toId;
				String color, label;
				Pair<PEGNode, PEGNode> parent = new Pair<PEGNode, PEGNode>(
						d.from, d.source);
				
				if (idMap.get(parent) == null) {
					fromId = nextId++;
					idMap.put(parent, fromId);
					nodeMap.put(fromId, d.from);
				} else {
					fromId = idMap.get(parent);
				}
				
				if (nodeMap.values().contains(d.to)) {
					label = "+";
				} else {
					label = "";
				}
				
				toId = nextId++;
				idMap.put(new Pair<PEGNode, PEGNode>(d.to, 
						d.color == (byte) -1 ? d.to : d.source), toId);
				nodeMap.put(toId, d.to);
				
				if (d.color != (byte) -1) {
					color = Color.toString(d.color);
				} else {
					color = "BLACK";
				}
				
				w.println(fromId + "->" + toId + "[" + 
						PEGBuilder.dotColor(color) + 
						PEGBuilder.dotLabel(label) + "];");
				
			}
			
			for (int i : nodeMap.keySet()) {
				PEGNode n = nodeMap.get(i);
				String color = "BLACK";
				
				if (n.isField()) {
					color = "ORANGE";
				} else if (n.isParam()) {
					color = "MAGENTA";
				}
				
				w.println(i + "[" + "fontcolor=\"" + (color) + "\"," + 
						PEGBuilder.dotLabel(n.toString()) + "];");
			}
			
			w.println("}");
			w.close();
		} catch (Exception e) {}
	}

}
