package crystal.analysis.ipa.template;

import java.util.*;

import crystal.cfg.*;
import crystal.core.*;
import crystal.general.*;
import crystal.util.*;
import crystal.analysis.ipa.*;

/** The analysis class. */
public class Analysis implements IPAnalysis<E> {

	/* --> define the transfer functions. */
	public Iterable<E> transfer(CFGNode node, E e, Function function) {
		return null;
	}

	/* --> define the filtering operation */
	public boolean filter(E e, CoreExpr t, boolean b) {
		return false;
	}

	/* --> define the call-site mapping */
	public Pair<Iterable<E>,Iterable<E>> 
	map(CFGCallNode callsite, E atcall, Function callee) {
		return null;
	}

	/* --> define the return-site unmapping */
	public Iterable<E> unmap(CFGCallNode callsite, E atcall, E atexit, 
			                 Function callee) 
	{
		return null;
	}
	
	/* Run the analysis */
	public static void run() {
		/* Build the analysis engine object. */
		Analysis analysis = new Analysis();
		final IPAnalysisEngine<I,S,E,A> engine = 
			new IPAnalysisEngine<I,S,E,A>(analysis);

		/* --> initialize the dataflow facts appropriately. */
		for (final Function fun : Symtab.getFunctions()) {
			CFGWalker init = new CFGWalker() {
				public void visit(CFGStatNode node) {
					boolean someCondition = false;
					if (someCondition) {
						E e = new E();
						engine.initialize(fun, node, e);
					}
				}
			};
			init.visitAll(fun.getCFG());
		}
			
		/* Run the engine. */
		engine.run();
		
		/* Inspect the results. */
		Map<CFGNode,A> result = engine.getResult();
		ResultDump<A> dumper = new ResultDump<A>(result);
		dumper.printAll();
	}
}
