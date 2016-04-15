
package crystal.util;

import java.util.*;

/** Generic two-level map A -> B -> C */
public class TwoLevelMap<A, B, C> extends HashMap<A, HashMap<B, C>> {

    private static final long serialVersionUID = -3692515871046948598L;


    /** contains an element for map(a)(b) */
    public boolean containsKeys(A a, B b) {
        return containsKey(a) && get(a).containsKey(b);
    }

    /** get the value map(a)(b) */
    public C get(A a, B b) {
        HashMap<B,C> mi = get(a);
        return (mi == null) ? null : mi.get(b);
    }

    /** puts a value c in map(a)(b)
     *  Returns old value if any. */
    public C put(A a, B b, C c) {
        HashMap<B,C> mi = get(a);
        if (mi == null) {
            mi = new HashMap<B,C>();
            put(a, mi);
        }
        return mi.put(b, c);
    }
    
    /** return final values in domain C, may contain duplicates */
    public Iterable<C> finalValues() {
        List<C> l = new LinkedList<C>();
        for (HashMap<B,C> m : values())
            for (C c : m.values())
                l.add(c);
        return l;
    }
    
    public Iterable<C> valuesOfFst(A a) {
        return get(a).values();
    }
    
    public Iterable<C> valuesOfSnd(B b) {
        List<C> l = new LinkedList<C>();
        for (Map<B,C> m : values())
            if (m.containsKey(b))
                l.add(m.get(b));
        return l;
    }
    
    public String toString() {
        String s = "[ ";
        boolean first = true;
        for (A a : keySet())
            for (B b : get(a).keySet()) {
                if (!first) 
                    s += ",\n ";
                first = false;
                s += a.toString().trim() +
                " -> " + b.toString().trim() + 
                " -> " + get(a,b).toString().trim();
            }
        return s + " ]";
    }
}
