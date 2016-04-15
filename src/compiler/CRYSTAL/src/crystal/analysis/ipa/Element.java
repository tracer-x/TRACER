package crystal.analysis.ipa;

/** Class that implements one element of the abstraction. */ 
public abstract class Element<I, S extends Secondary<S>, 
                              E extends Element<I, S, E>> 
{
	/** The context in the enclosing procedure */
	public I context;
	
	/** The index portion */
	public I index;
	
	/** The secondary information */
	public S secondary;
	
	/** Clone a component: must copy the referennce to the context and 
	 *  to the index; and create a duplicate of the secondary info. */
    public abstract E clone();

    /** A string for printing in dot format */
	public abstract String toStringDot();
}
