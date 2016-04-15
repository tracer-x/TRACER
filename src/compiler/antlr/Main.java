package compiler;
/**
 * 
 */
import java.io.* ;
import java.util.*;
import java.util.regex.*;
import antlr.* ;
import antlr.collections.*;
import antlr.TreeParser;
import antlr.debug.misc.* ;

/**
 * @author dcsrv
 */
public class Main {

	public static PrologEmitter emitter;

    static void setEnv() {
        String trunk = System.getenv("TRACER_PATH");
        if(trunk == null)
            FATAL.error("please set the environment variable TRACER_PATH");
        OPTIONS.TRUNK_PATH = trunk;
        OPTIONS.LIB_PATH = trunk + "/lib";
    }

    /**
     * @param args
     */
    public static void main ( String [] args )
    {
        File in, cillied, sliced;

        setEnv();

        in = new File(args[0]);
        if(!in.exists())
            FATAL.error("file " + args[0] + " not found");

        try {
            if(!OPTIONS.RUN_CIL || OPTIONS.DECOMP_MODE || (args.length == 3 && args[2].contains("run_cil=false"))) {
                System.out.println("NOT RUNNING CIL!!!");
                new Main().runAntlr(args);
            }
            else {
                if(OPTIONS.SLICE_BEFORE_COMPILATION || (args.length == 3 && args[2].contains("slice_before_compilation=true"))) {
                    sliced = getSlicedFile(in);
                    cillied = getCilliedFile(sliced);
                    sliced.delete();
                }
                else cillied = getCilliedFile(in);

                String [] antlrArgs = { cillied.getAbsolutePath(), args[1], args[2] };
                new Main().runAntlr(antlrArgs);

                cillied.delete();
            }
        } catch (Exception e) {
            FATAL.error("error occurred during compilation: " + e.getMessage());
        }
	}

	void runAntlr(String [] args) throws Exception {
        if(!(new File(args[0])).exists())
            FATAL.error("file " + args[0] + " does not exist");

		/* --------------------------
		 * pass = 1: pre-processing
		 * pass = 2: compilation
		 * --------------------------
		 */
		int pass = 1;
		while (pass == 1 || pass == 2) {
			DataInputStream dis = null ;
			PrintStream outFile = null;
			String options = "";

			if(args.length < 2)
				usage();
			
			// read input filename
			if(args[0].equals("-"))
				dis = new DataInputStream(System.in);
			else
				dis = new DataInputStream(new FileInputStream(args[0])) ;

			// read output filename
			if(args[1].equals("-"))
				outFile = new PrintStream(System.out);
			else
				outFile = new PrintStream(new FileOutputStream(args[1]));


			// read 3rd optional arg to set options, but only in compilation pass
			if(args.length == 3 && pass == 2)
				parse_options(args[2]);

			/*
			if (args.length >= 1) {
				String programName = args [ 0 ] ;

				if ( programName.equals("-") )
					dis = new DataInputStream(System.in) ;
				else
					dis = new DataInputStream(new FileInputStream(programName)) ;

				if (args.length >= 2)
					outFile = new PrintStream(new FileOutputStream(args[1]));
				else
					outFile = new PrintStream(System.out);
			}
			else {
				dis = new DataInputStream(System.in);
				outFile = new PrintStream(System.out);
			}
			*/

			GnuCLexer lexer = new GnuCLexer(dis) ;
			lexer.setTokenObjectClass("compiler.CToken") ;
			lexer.initialize() ;
			GnuCParser parser = new GnuCParser(lexer) ;
			parser.setASTNodeClass(TNode.class.getName()) ;
			TNode.setTokenVocabulary("compiler.GnuCTokenTypes") ;

			// invoke parser
			try {
				parser.translationUnit() ;
			} catch ( RecognitionException e ) {
				System.err.println("Fatal IO error:\n" + e) ;
				System.exit(1) ;
			} catch ( TokenStreamException e ) {
				System.err.println("Fatal IO error:\n" + e) ;
				System.exit(1) ;
			}
			
			/* commenting this code to solve the X11 problem while
			 * running tracer through a non-X11 terminal (paella)
			 */
			/*
			AST ptr = parser.getAST();
			while(ptr != null){
				ASTFrame f = new ASTFrame("Parse Tree", ptr) ;
				// Uncomment the following to pop up AST windows
				//            f.setVisible(true) ;
				if(ptr == ptr.getNextSibling()) break;
				else ptr = ptr.getNextSibling();
			}
			*/
			
			try {
				if(pass == 1) {
					emitter = new PrologEmitter() ;
					PrologEmitter.PREPROCESS = true;
					emitter.setASTNodeClass(TNode.class.getName()) ;
					emitter.translationUnit(parser.getAST()) ;
				}
				else 
				if (pass == 2){
					if(OPTIONS.ALIAS_ANALYSIS)
						PAHelper.initHeaps(args[0]);
			
					emitter = new PrologEmitter() ;
					PrologEmitter.PREPROCESS = false;
					emitter.setASTNodeClass(TNode.class.getName()) ;
					emitter.translationUnit(parser.getAST()) ;
					emitter.outputAll(outFile);

                    if(OPTIONS.ABSTRACT_DOMAIN > 0) {
                        if(args.length == 3 && args[2].contains("run_cil=false"))
                            FATAL.error("run_cil=true needed to run abstract domain");
                        System.out.println("Compiling file for abstract domain...");
                        File f = new File(args[0]);
                        CEmitter cemitter = new CEmitter() ;

                        cemitter.file = new File(f.getAbsolutePath() + ".ABSTRACT_DOMAIN.c");
                        cemitter.setASTNodeClass(TNode.class.getName()) ;
                        cemitter.translationUnit(parser.getAST()) ;

                        emitter.outputLoopInvariants(outFile);
                    }
				}
			}
			catch (Exception e) {
				e.printStackTrace();
				FATAL.error("check line no." + emitter.parseNode.getLineNum() + 
					" in source program");
			}

			if(pass == 1) PrologEmitter.reset();

			pass++;
		}
    }

	public static void parse_options(String ops) {
		if(ops.compareTo("${arg3}") == 0) // for running with Ant
			return;
		StringTokenizer t = new StringTokenizer(ops, ",");
		while(t.hasMoreTokens()) {
			String s = t.nextToken().trim();
			Matcher m = (Pattern.compile("(\\w+)=(true|false|basic|pplloose|polka|pplstrict)")).matcher(s);
			if(!m.matches())
				FATAL.error("unknown option format: " + s);

			String option = m.group(1);
			Boolean val = null;
			try {
				val = Boolean.valueOf(m.group(2));
			} catch(Exception e) {
				if(!option.equals("abstract_domain")) FATAL.error("incorrect option " + option);
			}

			if(option.equals("allow_nonlinear"))
				OPTIONS.ALLOW_NONLINEAR = val;

			else if(option.equals("alias_analysis"))
				OPTIONS.ALIAS_ANALYSIS = val;

			else if(option.equals("heavyweight_invariants"))
				OPTIONS.HEAVYWEIGHT_INVARIANTS = val;

			else if(option.equals("include_array_constraints"))
				OPTIONS.INCLUDE_ARRAY_CONSTRAINTS = val;

			else if(option.equals("include_only_sym_array_constraints"))
				OPTIONS.INCLUDE_ONLY_SYM_ARRAY_CONSTRAINTS = val;

			else if(option.equals("include_block_hierarchy"))
				OPTIONS.INCLUDE_BLOCK_HIERARCHY = val;

			else if(option.equals("arr_to_ptr"))
				OPTIONS.ARR_TO_PTR = val;

			else if(option.equals("eq_to_ineq"))
				OPTIONS.EQ_TO_INEQ = val;

			else if(option.equals("include_test_input_vars"))
				OPTIONS.INCLUDE_TEST_INPUT_VARS = val;


			else if(option.equals("slice_before_compilation"))
				OPTIONS.SLICE_BEFORE_COMPILATION = val;

			else if(option.equals("convert_strict_inequalities"))
				OPTIONS.CONVERT_STRICT_INEQUALITIES = val;

			else if(option.equals("compile_idx_vars"))
				OPTIONS.COMPILE_IDX_VARS = val;

			else if(option.equals("reverse_trans_order"))
				OPTIONS.REVERSE_TRANS_ORDER = val;

			else if(option.equals("random_trans_order"))
				OPTIONS.RANDOM_TRANS_ORDER = val;

			else if(option.equals("ignore_struct_errors"))
				OPTIONS.IGNORE_STRUCT_ERRORS = val;

			else if(option.equals("remove_empty_trans"))
				OPTIONS.REMOVE_EMPTY_TRANS = val;

			else if(option.equals("remove_unused_refs"))
				OPTIONS.REMOVE_UNUSED_REFS = val;

			else if(option.equals("decomp_mode"))
				OPTIONS.DECOMP_MODE = val;

			else if(option.equals("wp_compilation")) {
                System.out.println("############# RUNNING WITHOUT WP COMPILATION ##########");
				OPTIONS.WP_COMPILATION = false;
            }

			else if(option.equals("include_dict"))
				OPTIONS.INCLUDE_DICT = val;

			else if(option.equals("print_debug_info"))
				OPTIONS.PRINT_DEBUG_INFO = val;

			else if(option.equals("old_blocks"))
				OPTIONS.OLD_BLOCKS = val;

			else if(option.equals("run_cil"))
                OPTIONS.RUN_CIL = val;

			else if(option.equals("abstract_domain")) {
				String val2 = m.group(2);
				if(val2.equals("basic"))
					OPTIONS.ABSTRACT_DOMAIN = 1;
				else if(val2.equals("pplloose"))
					OPTIONS.ABSTRACT_DOMAIN = 2;
				else if(val2.equals("polka"))
					OPTIONS.ABSTRACT_DOMAIN = 3;
				else if(val2.equals("pplstrict"))
					OPTIONS.ABSTRACT_DOMAIN = 4;
				else
					FATAL.error("incorrect option for " + option);
			}

			else
				FATAL.error("unknown option: " + option);
		}

		if(OPTIONS.HEAVYWEIGHT_INVARIANTS && OPTIONS.ABSTRACT_DOMAIN == 0)
			FATAL.error("set abstract_domain=basic|pplloose|polka|pplstrict in order to set heavyweight_invariants=true");

		// sanity checking of options
		if(!OPTIONS.INCLUDE_ARRAY_CONSTRAINTS && OPTIONS.INCLUDE_ONLY_SYM_ARRAY_CONSTRAINTS)
			FATAL.error("you need to set include_array_constraints = true in order to set include_only_sym_array_constraints = true");
	}

    public static File getCilliedFile(File f) throws Exception {
        File cillied = new File(f.getAbsolutePath() + "_CIL.c");
        String [] cmd = { OPTIONS.LIB_PATH + "/cilly", f.getAbsolutePath(), "--noWrap",
                        "--noPrintLn", "--out", cillied.getAbsolutePath() };
        
        Process p = Runtime.getRuntime().exec(cmd);
        BufferedReader br = new BufferedReader(new InputStreamReader(
                                p.getInputStream()));
        String s;
        while((s = br.readLine()) != null); //System.out.println(s);
        p.waitFor();
        if(p.exitValue() != 0)
            throw new Exception("CIL failed");

        return cillied;
    }

    public static File getSlicedFile(File f) throws Exception {
        File sliced = new File(f.getAbsolutePath() + "_SLICED.c");
        String [] cmd = { OPTIONS.LIB_PATH + "/frama-c-wrapper", 
                        f.getAbsolutePath(), sliced.getAbsolutePath() };
        Process p = Runtime.getRuntime().exec(cmd);
        BufferedReader br = new BufferedReader(new InputStreamReader(
                                p.getInputStream()));
        String s;
        while((s = br.readLine()) != null); //System.out.println(s);
        p.waitFor();
        if(p.exitValue() != 0)
            throw new Exception("slicing failed");

        return sliced;
    }

	public static void usage() {
		System.out.println("usage: <antlr> input_file output_file [[allow_nonlinear=B][alias_analysis=B][include_array_constraint=B][include_block_hierarchy=B]]");
		System.exit(0);
	}
}
