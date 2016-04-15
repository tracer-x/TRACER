package crystal.analysis.alias.demand;

import java.util.*;

import crystal.general.*;
import crystal.util.*;

/** A ReachableInfo object is an element propagated by the
 * worklist algorithm. */
public class ReachableInfo {
	
	/** The pointer level depth. */
	private final int priority;
	
	/** The source node. 
	 *  The current node and the source are value aliases. */
	private final PEGNode source;
	
	/** The field at the point where the propagation was started.
	 *  If field = null, propagation was started at the address of
	 *  a dereference node. */
	private final Symbol field;
	
	/** The state of the automaton. */
	private final byte color;
	
	public int distA;
	public int distI;
	
	private static final Map<Pair<Integer, ReachableInfo>, ReachableInfo> cache = 
		new HashMap<Pair<Integer, ReachableInfo>, ReachableInfo>();
	
	public ReachableInfo(int priority, PEGNode source, Symbol field, 
			byte color) {
		this.priority = priority;
		this.source = source;
		this.field = field;
		this.color = color;
	}
	
	public static ReachableInfo get(int priority, PEGNode source, 
			Symbol field, byte color) {
		ReachableInfo info = new ReachableInfo(priority, source, field, color);
		
		Pair<Integer, ReachableInfo> p = 
			new Pair<Integer, ReachableInfo>(priority, info);
		ReachableInfo cached = cache.get(p);
		
		if (cached == null) {
			cache.put(p, info);
			return info;
		}
		
		return cached;
	}

	public int getPriority() {
		return priority;
	}

	public PEGNode getSource() {
		return source;
	}

	public byte getColor() {
		return color;
	}

	public static void clearCache() {
		cache.clear();
	}
    
    public static int getCacheSize() {
        return cache.size();
    }
	
	public boolean equals(Object o) {
		if (!(o instanceof ReachableInfo)) {
			return false;
		}
		
		ReachableInfo i2 = (ReachableInfo) o;
		return source == i2.source && color == i2.color && field == i2.field;
	}
	
	public int hashCode() {
		return (source == null ? 0 : source.hashCode()) + 
			Color.hashCode(color) + (field == null ? 0 : field.hashCode());
	}
	
	public String toString() {
		return source + "/" + Color.toString(color);
	}

	public Symbol getField() {
		return field;
	}

	public static class Color { 
		
		public static final byte NONE = -1;
		public static final byte RED = 0;
		public static final byte BLUE = 1;
		public static final byte YELLOW = 2;
		public static final byte GREEN = 3;
		
		private Color() {}
		
		public static String toString(byte c) {
			switch (c) {
			case RED: return "RED";
			case BLUE: return "BLUE";
			case YELLOW: return "YELLOW";
			case GREEN: return "GREEN";
			default: return Byte.toString(c);
			}
		}
		
		public static int hashCode(byte c) {
			return c * 7919;
		}
	}
}
