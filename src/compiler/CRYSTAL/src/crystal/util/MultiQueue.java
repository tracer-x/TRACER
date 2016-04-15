package crystal.util;

import java.util.*;

/**
 * A multi-level queue. Items are can be inserted at the end of a specified
 * level and removed from the front of the topmost level.
 * */
public class MultiQueue<E> {
	
	private final List<Queue<E>> list = new ArrayList<Queue<E>>();
	private int size = 0;
	private int lastPriority = -1;
	
    /**
     * Adds element e at level priority. Lower levels mean closer to front of
     * queue).
     */
	public void add(int priority, E e) {
		if (priority < 0) {
			throw new IllegalArgumentException();
		}
		
		if (list.size() <= priority || list.get(priority) == null) {
			for (int i = list.size(); i <= priority; i++) {
				list.add(null);
			}
			
			list.set(priority, new LinkedList<E>());
		}
		
		list.get(priority).add(e);
		size++;
	}
	
    /**
     * Removes the first element from the lowest (non-empty) level.
     */
	public E remove() {
		if (empty()) {
			throw new NoSuchElementException();
		}
		
		for (int i = 0; i < list.size(); i++) {
			Queue<E> q = list.get(i);
			
			if (q != null && q.size() > 0) {
				size--;
				lastPriority = i;
				return q.remove();
			}
		}
		
		throw new NoSuchElementException();
	}
	
    /**
     * Returns the total number of items.
     */
	public int size() {
		return size;
	}
	
    /**
     * Returns the number of items below at a certain level.
     */
	public int sizeAt(int priority) {
		if (list.size() < priority || list.get(priority) == null) {
			return 0;
		}
		
		return list.get(priority).size();
	}
    
    /**
     * Returns the number of items at levels strictly below given level.
     */
    public int sizeBelow(int priority) {
        int items = 0;
        
        for (int i = 0; i < priority; i++) {
            if (i < list.size() && list.get(i) != null) {
                items += list.get(i).size();
            }
        }
        
        return items;
    }
	
    /**
     * Returns true if there are no items.
     */
	public boolean empty() {
		return size == 0;
	}

    /**
     * Returns the level of the last removed item.
     */
	public int lastPriority() {
		return lastPriority;
	}
	
    /**
     * Clears this multi-queue.
     */
	public void clear() {
		list.clear();
		size = 0;
		lastPriority = -1;
	}
    
	public String toString() {
		StringBuffer s = new StringBuffer();
		
		for (int i = 0; i < list.size(); i++) {
			if (i > 0) {
				s.append(", ");
			}
			
			s.append(list.get(i));
		}
		
		return s.toString();
	}
	
}
