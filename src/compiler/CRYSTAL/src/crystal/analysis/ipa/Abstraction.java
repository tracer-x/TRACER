package crystal.analysis.ipa;

import java.util.*;

import crystal.util.Pair;

public class Abstraction <S extends Secondary<S>,
                          E extends Element<?,S,E>>
	implements Iterable<E> {
	/** Abstraction is bottom iff elems is null. 
	 *  Otherwise, elems contains the abstraction elements. */
	private List<E> elems;
	
	/** Constructs a bottom abstraction. */
	public Abstraction() {
		elems = null;
	}
	
	/** Constructs an abstraction from a collection. */
    public Abstraction(Collection<E> e) {
    	elems = new ArrayList<E>(e);
    }

    /** Is the current abstraction bottom? */
    public boolean isBottom() {
    	return elems == null;
    }
        
    /** Propagate e into this abstraction. Return a pair (e,b) where
     * e is the resulting element in this abstraction and b indicates if
     * this abstraction has changed */ 
    public Pair<E, Boolean> propagate(E e) {
    	if (elems == null) 
    		elems = new ArrayList<E>();
    	
    	for (E ce : elems)
    		if  (e.context == ce.context && e.index == ce.index) {
    			boolean b = ce.secondary.merge(e.secondary);
    			return new Pair<E, Boolean>(ce, b);
    		}
    		
    	E ce = e.clone();
    	elems.add(ce);
    	return new Pair<E, Boolean>(ce, true);
    }

    /** Merges one element into the current abstraction.
     *  Essentially, a simpler version of propagate. */
    public void merge(E e) {
    	if (elems == null) 
    		elems = new ArrayList<E>();
    	
    	for (E ce : elems) 
    		if  (e.context == ce.context && e.index == ce.index) {
    			ce.secondary.merge(e.secondary);
    			return;
    		}

    	elems.add(e);
    }    
    
    /** Merges multiple components into this abstraction. */
    public void merge(Iterable<E> set) {
    	if (set != null)
    		for (E e : set)
    			merge(e);
    }
    
    /** Returns all abstraction elements. */
    public Collection<E> getElements() {
    	return elems;
    }
    
    public int numElements() {
    	if (elems == null)
    		return 0;
    	else
    		return elems.size();
    }

    public Iterator<E> iterator() {
		if (elems != null)
			return elems.iterator();
		else
			return (new ArrayList<E>()).iterator();
    }
    
    public String toString() {
    	if (elems == null) return "null";
    	return elems.toString();
    }
    
    /** Print abstraction in dot format. */
    public String toStringDot() {
    	if (elems == null)
    		return "BOTTOM";
    	
    	String res = "";
    	boolean first = true;
    	for (E e : elems) {
	   		if (!first) res += "|";
	   		else first = false;
	   		res+= e.toStringDot();
	   	}
    	
    	return res;
    }    
}
