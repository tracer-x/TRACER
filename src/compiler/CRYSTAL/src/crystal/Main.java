package crystal;

import java.io.*;
import java.util.*;

import crystal.cfg.*;
import crystal.general.*;
import crystal.parser.*;
import crystal.analysis.callgraph.*;
import crystal.analysis.pointer.*;
import crystal.emitc.*;

/** The main class of the Crystal framework. */
public class Main {
	/** List of input C files to parse. */
	private static Vector<String> files = new Vector<String>();

	/** AST serialization: output file name. */
	private static String outputName = null;

	/** AST serialization: input file name. */
	private static String inputName = null;
	
	/** The main method.
	 *  The method is called by client analyses implemented in Crystal.
	 *  Clients must set up their options(in Options.* and elsewhere), 
	 *  and then call this method to parse the files and build the IR. 
	 *  See an example in /projects/sample. */
	public static void main(String args[]) {
		/* Parse command line arguments. */
		parseArgs(args);
		
		try {
			long time = System.currentTimeMillis();
			if (inputName != null) {
				/* Load structures in from the input file. */
				out(1, "Loading AST from input file \"%s\" ...", inputName);
				FileInputStream fis = new FileInputStream(inputName);
				ObjectInputStream inputStream = new ObjectInputStream(fis);
				deserialize(inputStream);
				out(1, "done. (%.2f s)%n", getSeconds(time));
			}
			else {
				/* Parse the input C files. */
				outeq(1, "Parsing %d file%s ... ", files.size(), 
						files.size() > 1 ? "s" : "");
				Actions.startParsing();
				int i = 1;
				for(String file : files) {
					out(2, "(%02d) Parsing file: \"%s\"", i++, file);
					long perfiletime = System.currentTimeMillis ();
					new parser(file).parse();
					out(2, " (%.2f s)%n", getSeconds(perfiletime));
				}
				Actions.doneParsing();
				out(2, "Parsed %d file%s, %d functions successfully. ",
						files.size(), files.size() > 1 ? "s" : "", 
						Symtab.getFunctions().size());
				outeq(1, "done. ");

                                ////////////////////////////////////////////////////////
			        // line added by Jorge
                                Options.POINTER_ANALYSIS = true;	                                
				PointerAnalysis.STEENSGAARD = true;	
                                //// Field-insensitive	
				PointerAnalysis.FIELD_TREATMENT = 'I';		
                                ////////////////////////////////////////////////////////


				if (Options.VERBOSITY >= 1)
					System.out.printf("(%.2f s)\n", getSeconds(time));
				printMemoryUsage(3);
			}
			
			if (Options.MERGE_FILES) {
				out(1, "Writing the merged file ...");
				time = System.currentTimeMillis();
				FileMerger.run();
				out(1, "done. (%.2f s)%n", getSeconds(time));
				return;
			}

			if (outputName != null) {
				out(1, "Writing AST to output file \"" + outputName + "\" ...");
				time = System.currentTimeMillis();
				FileOutputStream fos = new FileOutputStream(outputName);
				ObjectOutputStream outputStream = new ObjectOutputStream(fos);
				serialize(outputStream);
				out(1, "done. (%.2f s)%n", getSeconds(time));
				return;
			}

			
			if (Options.CFG) {
				out(1, "Build CFGs ... ");
				time = System.currentTimeMillis();
				ScopeCollapse.collapseScopes();
				CFGBuilder.buildCFGs();
				out(1, "done. (%.2f s)%n", getSeconds(time));
				printMemoryUsage(3);
				
				if (Options.EMIT_DOT) { 
					out(1, "Print CFGs to dot files ... ");
					time = System.currentTimeMillis();
					CFGDump.dumper.printAll();
					out(1, "done. (%.2f s)%n", getSeconds(time));
				}
				
				if (Options.ALLOC_WRAPPER_DETECTION) {
					out(1, "Alloc wrappers ... ");
					time = System.currentTimeMillis();
					Set<Function> wrap = AllocWrapperDetector.run();
					out(1, "done. (%.2f s)%n", getSeconds(time));
					out(3, "   Detected alloc wrappers: " + wrap);
					printMemoryUsage(3);
				}

				if (Options.POINTER_ANALYSIS) {
					out(1, "Pointer analysis ... ");
					time = System.currentTimeMillis();
					PointerAnalysis.run();
					out(1, "done. (%.2f s)%n", getSeconds(time));
					PointerAnalysis.printStats(false);
					printMemoryUsage(3);
				}
			}
			
			if (Options.CALL_GRAPH) {
				out(1, "Call graph ... ");
				time = System.currentTimeMillis();
				CallGraph.construct();
				out(1, "done. (%.2f s)%n", getSeconds(time));
				printMemoryUsage(3);
			}

			if (Options.EMIT_C) {
				out(1, "Emit C code from %s", (Options.CFG ? "CFGs" : "the AST"));
				time = System.currentTimeMillis();
				EmitC.run(Options.VERBOSITY >= 2, false);
				out(1, " (%.2f s)%n", getSeconds(time));
				printMemoryUsage(3);
			}
		} 
        catch (SemanticError e) {
        	System.out.flush();
        	System.err.println("\nError: \"" + e.file + "\", line " +
        			e.line + " : " + e.message);
        	System.exit(1);
        } 
        catch (Exception e) {
        	System.out.flush();
        	e.printStackTrace();
        	System.exit(1);
        }
	}

	private static void outeq(int n, String fmt, Object... args) {
		if (Options.VERBOSITY == n)
			System.out.printf(fmt, args);
	}

	private static void out(int n, String fmt, Object... args) {
		if (Options.VERBOSITY >= n)
			System.out.printf(fmt, args);
	}

	/** Returns seconds since the given start time. */
	static float getSeconds(long time) {
		time = System.currentTimeMillis() - time;
		return ((float)(time/1000.0));
	}
	
	public static void printMemoryUsage(int n) {
		if (Options.VERBOSITY >= n)
			printMemoryUsage();
	}

	public static void printMemoryUsage() {
		long tot = Runtime.getRuntime().totalMemory();
		long free = Runtime.getRuntime().freeMemory();
		double mb = 1024.0 * 1024.0;
		System.out.printf("Memory usage: %.2f Mb used, %.2f Mb total.%n", 
				(tot-free)/mb, tot/mb);
	}
	
	private static void serialize(ObjectOutputStream outputStream) 
		throws IOException 
	{
		outputStream.writeObject(Symtab.getGlobalScope());
		AggregateType.serializeStatic(outputStream);
	}

	private static void deserialize(ObjectInputStream inputStream) 
		throws IOException, ClassNotFoundException 
	{
		Symtab.setGlobalScope((HashSymtab)inputStream.readObject());
		AggregateType.deserializeStatic(inputStream);
	}

	/** Parse the comand line arguments. */
	static void parseArgs(String[] args) {
		if (args.length == 0)
			usage();
		
		for(int i = 0; i < args.length; i++) {
			String arg = args[i];
			if (arg.equals("-ast")) {
				Options.CFG = false;
			} 
			else if (arg.equals("-cfg")) {
				Options.CFG = true;
			} 
			else if (arg.equals("-emit-dot")) {
				Options.CFG = true;
				Options.EMIT_DOT = true;
			} 
			else if (arg.equals("-emit-c")) {
				Options.EMIT_C = true;
			} 
			else if (arg.equals("-report-source")) {
				Options.REPORT_SOURCE = true;
			} 
			else if (arg.equals("-report-preproc")) {
				Options.REPORT_SOURCE = false;
			} 
			else if (arg.startsWith("-dismantle-struct-assigns=")) {
				Options.DISMANTLE_STRUCTURE_ASSIGNMENTS = bvalue(arg);
			} 
			else if (arg.startsWith("-startup-functions")) {
				Options.STARTUP_FUNCTIONS = bvalue(arg);
			} 
			else if (arg.startsWith("-purge-declarations=")) {
				Options.PURGE_DECLARATIONS = bvalue(arg);
			} 
			else if (arg.equals("-merge-files")) {
				Options.MERGE_FILES = true;
				Options.REPORT_SOURCE = true;
				Options.STARTUP_FUNCTIONS = false;
				Options.CFG = false;
			} 
			else if (arg.startsWith("-out=")) {
				outputName = value(arg);
				Options.CFG = false;
			} 
			else if (arg.startsWith("-in=")) {
				inputName = value(arg);
			}
			else if (arg.startsWith("-verbose")) {
				Options.VERBOSITY = 2;
			} 
			else if (arg.startsWith("-v=")) {
				try {
					Options.VERBOSITY = Integer.parseInt(value(arg));
				} catch (Exception e) {
					error("option -v requires a number.\n");
				}
			} 
			else if (arg.startsWith("-alloc=")) {
				for (String name : value(args[i]).split(","))
					Options.allocNames.add(name);
			} 
			else if (arg.startsWith("-free=")) {
				for (String name : value(args[i]).split(","))
					Options.freeNames.add(name);
			} 
			else if (arg.startsWith("-")) {
				error(String.format("option %s not supported.", arg)); 
			} 
			else  {
				files.add(arg);
			}
		}
		
		if (Options.POINTER_ANALYSIS && !Options.CFG)
			error("pointer analysis requires CFG construction.");
		
		if (Options.ALLOC_WRAPPER_DETECTION && !Options.CFG)
			error("Alloc wrapper detection requires CFG construction.");
		
		if (Options.CALL_GRAPH && !Options.CFG)
			error("the call graph requires CFG construction.");
		
		if (Options.EMIT_DOT && !Options.CFG)
			error("dot files require CFG construction.");
		
		if (inputName != null && files.size() > 0) 
			error("cannot both read input and parse files.");

		if (inputName == null && files.size() == 0) 
			error("no files specified.");
	}
	
	private static String value(String s) {
		return s.substring(s.indexOf("=")+1);
	}

	private static boolean bvalue(String s) {
		String val = s.substring(s.indexOf("=")+1);
		if (val.equals("yes") || val.equals("y"))
			return true;
		if (val.equals("no") || val.equals("n"))
			return false;
		
		error("invalid boolean flag.");
		return false;
	}

	/** Print error message and exit. */
	public static void error(String msg) {
		System.out.printf("%s : %s\n", Options.PROGNAME, msg);
		System.exit(1);
	}
	
	/** Print the command line usage. */
	static void usage() {
		System.out.printf ("Usage: %s [options] [preprocessed C files]\n", 
				Options.PROGNAME);
		
		String options = 
			"\n" +
			"General options:\n"  +
			"    -ast             build the AST \n" +
			"    -cfg             build the CFG (default) \n" +
			"    -emit-c          emit output C code\n" +
			"    -emit-dot        print the CFGs to dot files\n" +
			"    -report-source   refer to source file positions \n" +
			"    -report-preproc  refer to preprocessed file positions\n" +
			"    -merge-files     merge input files\n" + 
			"    -verbose         verbose output\n" 
			;
		
		System.out.print(options);
		System.exit(0);
	}
}
