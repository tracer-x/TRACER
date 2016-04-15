package crystal.analysis.ipa;

import crystal.cfg.*;
import crystal.core.*;
import crystal.general.*;
import crystal.util.*;

public interface IPAnalysis <E extends Element<?,?,E>> {

	/** Transfer function for a CFG node. 
	 *  Argument e is the component before the node.
	 *  Returns the components after the node. */
    public Iterable<E> transfer(CFGNode node, E e, Function function);

    /** Refine the information in e knowing that the test t evaluates to b.
     *  Returns false if t != b (i.e., if the result is bottom). */
    public boolean filter(E e, CoreExpr t, boolean b);
    
    /** The mapping function. Returns a pair where the first element
     * is the set of elements to propagate into the callee, and the
     * second is the set of elements that should bypass the call. */
    public Pair<Iterable<E>,Iterable<E>> 
    map(CFGCallNode callsite, E atcall, Function callee);

    /** The unmapping function. */
    public Iterable<E> 
    unmap(CFGCallNode callsite, E atcall, E atexit, Function callee);
}

