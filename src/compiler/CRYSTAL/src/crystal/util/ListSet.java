package crystal.util;

import java.util.*;

/** A {@code Set} implementation that is backed by a {@code List}. */
public class ListSet<E> extends ArrayList<E> implements Set<E> {
	
	private static final long serialVersionUID = -3688921472291872611L;

	public boolean add(E o) {
		if (contains(o)) {
			return false;
		}
		
		add(o);
		return true;
	}
	
	public boolean addAll(Collection<? extends E> c) {
		boolean changed = false;
		for(E e : c) 
			if (add(e))
				changed = true;
				
		return changed;
	}
	
	public boolean equals(Object o) {
		if (!(o instanceof Set))
			return false;
		
		Set<?> other = (Set<?>)o;
		if (this.size() != other.size())
			return false;
		
		for (Object obj : other)
			if (!contains(obj))
				return false;
		
		return true;
	}
	
	public int hashCode() {
		int code = 0;
		for (E e : this)
			code = code ^ e.hashCode();
		
		return code;
	}
}
