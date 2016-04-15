
package crystal.util;

import java.util.*;

/** Generic three-level map A -> B -> C -> D */
public class ThreeLevelMap<A, B, C, D> extends TwoLevelMap<A, B, HashMap<C, D>> 
{
    private static final long serialVersionUID = -3692515871046948598L;

    /** contains an element in map(a)(b)(c) */
    public boolean containsKeys(A a, B b, C c) {
        return containsKeys(a,b) && get(a,b).containsKey(c);
    }

    /** get the value map(a)(b)(c) */
    public D get(A a, B b, C c) {
        HashMap<C,D> mi = get(a,b);
        return (mi == null) ? null : mi.get(c);
    }

    /** puts a value d in map(a)(b)(c), 
     *  Returns old value if any */
    public D put(A a, B b, C c, D d) {
        HashMap<C,D> mi = get(a, b);
        if (mi == null) {
            mi = new HashMap<C,D>();
            put(a, b, mi);
        }
        return mi.put(c, d);
    }
    
    /** return final values in domain C, may contain duplicates */
    public Iterable<D> threeFinalValues() {
        List<D> l = new LinkedList<D>();
        for (HashMap<C,D> m : finalValues())
            for (D c : m.values())
                l.add(c);
        return l;
    }
    
    public String toString() {
        String s = "[ ";
        boolean first = true;
        for (A a : keySet())
            for (B b : get(a).keySet())
                for (C c : get(a,b).keySet()) {
                    if (!first) 
                        s += ",\n ";
                    first = false;
                    s += a.toString().trim() +
                    " -> " + b.toString().trim() + 
                    " -> " + c.toString().trim() +
                    " -> " + get(a,b,c).toString().trim();
                }

        return s + " ]";
    }
}
