package crystal.projects.sample;

import java.util.*;

import crystal.cfg.*;
import crystal.general.*;
import crystal.analysis.pointer.*;

/** A sample pass.
 *  For each function, it lists all the nodes in its CFG. */
public class Main {

	static public void main(String[] args) {

		/* Set the needed options. */
		Options.CFG = true;
		Options.CALL_GRAPH = true;
		Options.POINTER_ANALYSIS = true;
		PointerAnalysis.STEENSGAARD = true;		
		Options.PROGNAME = "sample";
		
		/* Run the driver method crystal.Main.main. */
		crystal.Main.main(filterArgs(args));

		/* The IR is now built. Run your analysis. */
		pass();
	}		
	
	static void pass() {
		System.out.println("\n");

		for (Function fun: Symtab.getFunctions()) {
			System.out.println("Function: " + fun);
			processFunction(fun);
			System.out.println();
		}
	}

	private static void processFunction(Function fun) {
		int i = 1;
		for (CFGNode node : fun.getCFGNodes()) 
			if (node.isEntry())
				System.out.printf("  [%02d] [CFG entry node]\n", i++);
			else if (node.isExit())
				System.out.printf("  [%02d] [CFG exit node]\n", i++);
			else 
				System.out.printf("  [%02d] %s\n", i++, node);
	}
	
	/** Filter the comand line arguments before passing
	 *  them to crystal.Main.main. */
	static String[] filterArgs(String[] args) {
		List<String> newargs = new ArrayList<String>();
		
		if (args.length == 0)
			usage();

		for(int i = 0; i < args.length; i++) {
			String arg = args[i];
			
			/* Add project-specific options if needed. */
			if (arg.startsWith("-")) {
				System.err.printf("Option %s not supported.\n", arg);
				System.exit(1);
			} 
			else  {
				newargs.add(arg);
			}
		}

		String[] res = new String[newargs.size()];
		return newargs.toArray(res);
	}
		
	/** Print the command line usage. */
	static void usage() {
		System.out.println("Usage: sample [preprocessed C files]");
		System.exit(0);
	}

}
