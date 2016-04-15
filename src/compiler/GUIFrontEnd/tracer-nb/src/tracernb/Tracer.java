/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

package tracernb;

import java.io.*;

/**
 *
 * @author vijay
 */
public class Tracer {
    public Tracer(){}

    public Process runProgram(File selectedFile,
			      int app,
			      int opt,
			      String tracerCmd) throws UserOptionError

    {
	/**
	 * This method runs a program with a set of user options.
	 * @param selectedFile the input program file to be run.
	 * @param app the application: 1 safety, 2 WCET, and 3 Slicingw
	 * @param opt the app options: 1 default,2: w/witnesses, and 3 path-insensitive
	 * @tracerCmd is the command for running TRACER
	 * @return a file descriptor which contains the traces of the
	 * program.
	 *
	 */

        String arg1 = null;             // applicaction
        String arg2 = null;             // File name

	switch (app) {
	case 1 /*safety*/:
	    arg1=new String("safety");
	    break;
	case 2/*wcet*/:
	    arg1=new String("wcet");
	    break;
	case 3/*slicer*/:
	    arg1= new String("slicer");
	    break;
	default:
	    System.err.println("First argument in tracer not recognized.");
	    break;
	}
	try{
	     arg2 = selectedFile.getCanonicalPath();
	} catch (IOException e){
	    System.err.println("Second argument in tracer not found." + e);
	    e.printStackTrace() ;
	}
	// Run the shell script run_program
        Process p = null;
	try{
	    System.out.println("Executing " + tracerCmd + " " +
			       arg1 + " " +
			       arg2 + " " + "0" );
	    p = Runtime.getRuntime().exec(tracerCmd + " " +
					  arg1 + " " +
					  arg2 + " " +
					  "0" ); // 0 is non-interactive mode
	}
	catch (Exception e){
	    System.err.println("An error occurred executing CLP(R)") ;
	    e.printStackTrace() ;
	}

	return p;
    }
}
