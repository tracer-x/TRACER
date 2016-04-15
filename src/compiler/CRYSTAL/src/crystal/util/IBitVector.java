package crystal.util;

import java.util.*;


/** Indexed Bit Vector: a bit vector augmented with a supporting Indexer. 
 * The bitvector is parameterized by a type E. It denotes a set
 * of elements of type E. The indexer indicates the relation between 
 * elements and their indices in the bitvector. 
 **/
public class IBitVector<E> extends BitVector implements Iterable<E> {
	
    public Indexer<E> index;

    IBitVector() {
    }
    
    public IBitVector(IBitVector<E> other) {
    	super(other);
    	index = other.index;
    }
    
    public IBitVector(Indexer<E> ind) {
        super(ind.size());
        index = ind;
    }
    
    public boolean get(E e) {
        return get(index.indexOf(e));
    }
    
    public void set(E e) {
        set(index.indexOf(e));
    }
    
    public void clear(E e) {
        clear(index.indexOf(e));
    }
    
    public IBitVector<E> copy() {
    	return new IBitVector<E>(this);
    }
    
    public Iterator<E> iterator() {
    	return elementList().iterator();
    }
    
    public List<E> elementList() {    	
        List<E> l = new ArrayList<E>(size());
        
        if (bits != 0L) 
            addBits(bits, 0, l);
        
        if (more != null)
            for (int i = 0; i < more.length; i++)
                if (more[i] != 0L)
                    addBits(more[i], (i+1)*64, l);
        
        return l;
    }
    
	private void addBits(long n, int o, List<E> v) {
		for (int i = 0; i < 64; i++, n >>= 1) 
			if ((n & 1L) != 0)  
				v.add(index.elementAt(o+i));		
	}

    
    public String toString() {
        String s = "{";
        boolean first = true;
        for (E e : this) {
            if (first) first = false;
            else s += ", ";
            s += e.toString();
        }
        s+="}";
        return s;
    }

    public String toStringIndexList() {
        String s = "{";
        boolean first = true;
        for (Integer i : this.indexList()) {
            if (first) first = false;
            else s += ", ";
            s += i.toString();
        }
        s+="}";
        return s;
    }
}


