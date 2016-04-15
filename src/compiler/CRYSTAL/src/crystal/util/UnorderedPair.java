package crystal.util;

public class UnorderedPair<A, B> {
	
	public A fst;
	public B snd;
	
	public UnorderedPair(A a, B b) {
		fst = a;
		snd = b;
	}
	
	public boolean equals(Object other) {
		if (!(other instanceof UnorderedPair)) 
			return false;
		
		UnorderedPair<?,?> o = (UnorderedPair<?,?>) other;
		return ( fst.equals(o.fst) && snd.equals(o.snd) ) ||
		       ( fst.equals(o.snd) && snd.equals(o.fst) );
	}

	public int hashCode() {
		return fst.hashCode() ^ snd.hashCode();
	}
	
	public String toString() {
		return "(" + String.valueOf(fst) + ", " + String.valueOf(snd) + ")";
	}
	
}
