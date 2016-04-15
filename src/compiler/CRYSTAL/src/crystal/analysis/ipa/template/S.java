package crystal.analysis.ipa.template;

import crystal.analysis.ipa.*;

/** The secondary portion of the abstraction element. */
public class S implements Secondary<S> {
	/* --> Fill in the contents of the secondary information. */
	
	/* --> define an appropriate merge operation */
	public boolean merge(S other) {
		return false;
	}

	/* --> define an appropriate clone method. */
	public S clone() {
		return null;
	}
}

