package crystal.analysis.ipa.template;

import java.util.*;

/** The index portion of the abstraction element. */
public class I {
	/* --> Fill in the structure of the index. */
	
	
	/* It is required to maintain a single copy for each index, 
	 * because the IPAnalysisEngine and Abstraction classes assume 
	 * reference equality for indices and contexts. 
	 * Use "return index.hash()" instead of "return index".  */
	
	@SuppressWarnings("unused")
	private I hash() {
		Wrapper si = new Wrapper(this);
		I i = table.get(si);
		if (i != null) 
			return i;
		else {
			table.put(si, this);
			return this;
		}
	}
		
	private static Map<Wrapper,I> table = new HashMap<Wrapper,I>();
	
	class Wrapper {
		I i;
		Wrapper(I i) { this.i = i; }
		
		public boolean equals(Object other) {
			if (!(other instanceof Wrapper)) 
				return false;
			
			Wrapper o = (Wrapper) other;
			
			/* --> do the content equality between this and o. */
			return this == o;
		}
		
		public int hashCode() {
			/* --> define an appropriate hash code. */
			return 0;
		}
	}
}
