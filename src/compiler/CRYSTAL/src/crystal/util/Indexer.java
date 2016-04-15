
package crystal.util;

import java.util.*;


/**
 * A class that indexes a set of elements of type E.
 * The Indexer contains a map from elements to indices,
 * and a reverse map from indices to elements. 
 * There are no duplicate elements.
 * 
 * This class is useful in conjunction with bitvectors: the
 * indices represent the position in the bitvector.
 */
public class Indexer<E> {
    
    /** Map from indices to elements. */
    List<E> elems = new ArrayList<E>();

    /** Map from elements to their indices. */
    Map<E, Integer> map = new HashMap<E,Integer>();
    
    /** The number of elements in the indexer. */
    int count;

    /** Builds an empty indexer. */
    public Indexer() {
    }
    
    /** Builds an indexer from an iterable collection.  */
    public Indexer(Iterable<E> collection) {
    	for (E e : collection) 
    		register(e);
    }

    public void register(E e) {
        Integer i = map.get(e);
        if (i == null) {
            i = count++;
            map.put(e, i);
            elems.add(e);
        }
    }

    public List<E> getElementList() {
    	return elems;
    }
    
    /** Returns the element at index i.
     *  Requires: 0 <= i <= size() */
    public E elementAt(int i) {
        return elems.get(i);
    }

    /** Returns the index of element e. */
    public int indexOf(E e) {
        return e == null ? -1 : map.get(e);
    }

    /** The number of elements in the indexed set. */
    public int size() {
        return count;
    }
    
    /** Returns true if the indexed set contains the element e. */
	public boolean contains(E e) {
		return map.get(e) != null;
	}    
}
