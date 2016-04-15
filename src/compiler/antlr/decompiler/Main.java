package decompiler;

import java.util.*;
import java.io.*;

import compiler.*;

public class Main {

	final int TRACER_OPT = 1; /* 1: SAFETY, 2: SAFETY with minmax, 3: wcet */
	final int TIMEOUT = 0; // in secs (0=infinite)

	public static void main(String args[]) {
        String trunk = System.getenv("TRACER_PATH");
        if(trunk == null)
            FATAL.error("please set the environment variable TRACER_PATH");
        OPTIONS.TRUNK_PATH = trunk;
        OPTIONS.LIB_PATH = trunk + "/lib";

		new Main().run(args);
	}

	void run(String args[]) {
		if(args.length != 1)
			usage();

		String in = args[0];
		File c = new File(in);
        File clp = new File(c.getAbsolutePath() + "lp");
        long t1, t2;

        t1 = new Date().getTime();
		try {
			String[] antlrargs = { c.getAbsolutePath(), clp.getAbsolutePath(),
				"include_array_constraints=false," +
				"include_only_sym_array_constraints=false," +
				"alias_analysis=false," +
				"run_cil=false," +
				"ignore_struct_errors=true,"
            };

            OPTIONS.INCLUDE_BLOCK_HIERARCHY = true;
			compiler.Main.main(antlrargs);
		} catch(Exception e) { FATAL.error("in compiler: " + e.getMessage()); }

		// record the program with line numbers
		Vector<String> prog = new Vector<String>();
		try {
			Scanner sc = new Scanner(c);
			while(sc.hasNext())
				prog.add(sc.nextLine().trim());
		} catch(Exception e) { FATAL.error("reading program: " + e.getMessage()); }

        t2 = new Date().getTime();
        System.out.println("Front-end: " + (t2-t1)/1000 + "s");
        System.out.flush();

		File outF = new File(in.substring(0, in.length()-2) + "-dec.c");
		try {
			PrintStream stream = new PrintStream(new FileOutputStream(outF));

			// global declarations
			for(Integer i : ClauseFactory.globalDeclLineNums)
				stream.println(prog.elementAt(i-1));

            // run TRACER slicer
            t1 = new Date().getTime();
            File TRACES = tracerclp(clp);
            t2 = new Date().getTime();
            System.out.println("SPS-CFG: " + (t2-t1)/1000 + "s");
            System.out.flush();

            // decompile
            t1 = new Date().getTime();
            stream.println(decompiler(TRACES, prog));
            t2 = new Date().getTime();
            System.out.println("Decompile: " + (t2-t1)/1000 + "s");
            System.out.flush();

            //TRACES.delete();
            DEBUG.fprintln("DONE!");
			stream.close();
		}
        catch(Exception e) { FATAL.error("in printing to " + outF); }
	}

	File tracerclp(File clp) {
		Vector<String> cmd = new Vector<String>();

		cmd.add("tracerclp");
        cmd.add("slicer");
        cmd.add(clp.getAbsolutePath());
        cmd.add("-tree-traces"); cmd.add("y");
        cmd.add("-witnesses"); cmd.add("n");
        cmd.add("-slice-pscfg"); cmd.add("y");

		ProcessBuilder pb = new ProcessBuilder(cmd);
		try {
            Process p = pb.start();
            p.waitFor();
		} catch(Exception e) { FATAL.error("in running tracerclp: " + e.getMessage()); }

 		File TRACES = new File(clp.getAbsolutePath() + ".TRACES");
		if(!TRACES.exists())
            FATAL.error(TRACES + " was not created by tracerclp!");

		return TRACES;
	}

	String decompiler(File TRACES, Vector<String> prog) {
		Parser p = new Parser(TRACES.getAbsolutePath());
		p.parse();
		
		Decompiler dc = new Decompiler(p);
		dc.setRoot(new Vertex("func_main", "p$init_0", -1));
		dc.setProgram(prog);

		return dc.decompile();
	}

	public static void usage() {
		DEBUG.print("Usage: decompiler.Main prog.c");
		System.exit(1);
	}
}
