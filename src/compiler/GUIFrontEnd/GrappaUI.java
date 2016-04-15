import java.awt.*;
import java.awt.event.*;
import java.io.*;
import java.net.*;
import javax.swing.*;
import att.grappa.*;

/** This class outputs a graph using Grappa in a JScrollPane
 *  component. Grappa is a Java graph drawing package that simplifies
 *  the inclusion of graph display and can be thought of as a port of a
 *  subset of GraphViz to Java.
 **/


public class GrappaUI implements GrappaConstants
{
    public final static String SCRIPT = "src/java/GUIFrontEnd/formatDemo";

    GrappaUI(){}

    public void showGraph(String traceFile, JScrollPane jScrollPane)
    {
	/**
	 * @param traceFile the file that contains the program trace.
	 * @param jScrollPane the panel in which the graph is drawn.
	 **/

	try{
	    System.out.println("Reading " + traceFile + "...");
	    FileInputStream input = new FileInputStream(traceFile);
	    Parser program = new Parser(input,System.err);
	    try {
		program.debug_parse(program.getDebugLevel());
	    } catch(Exception ex) {
		System.err.println("Exception parsing " + traceFile + ": " + 
				   ex.getMessage());
		ex.printStackTrace(System.err);
		System.exit(1);
	    }
	    Graph graph = program.getGraph();	 
	    System.out.println("The graph contains " +
			       graph.countOfElements(Grappa.NODE|Grappa.EDGE|Grappa.SUBGRAPH)
			       + " elements.");	   
	    graph.setEditable(true);
	    graph.setMenuable(true);
	    graph.setErrorWriter(new PrintWriter(System.err,true));
	    //graph.printGraph(new PrintWriter(System.out));
	    //System.err.println("bbox=" + graph.getBoundingBox().getBounds().toString());

	    jScrollPane.getViewport().setScrollMode(JViewport.SIMPLE_SCROLL_MODE);   
	    GrappaPanel gp = new GrappaPanel(graph);
	    gp.setScaleToFit(true);  
	    jScrollPane.setViewportView(gp);
	    
	    Object connector = null;
	    try {
		connector = Runtime.getRuntime().exec(this.SCRIPT);
	    } catch(Exception ex) {
		System.err.println("Exception while setting up Process: " 
				   + ex.getMessage());
	    }
	    if(connector != null) {
		if(!GrappaSupport.filterGraph(graph,connector)) {
		    System.err.println("ERROR: somewhere in filterGraph");
		}
		if(connector instanceof Process) {
		    try {
			int code = ((Process)connector).waitFor();
			if(code != 0) {
			    System.err.println("WARNING: proc exit code is: " + code);
			}
		    } catch(InterruptedException ex) {
			System.err.println("Exception while closing down proc: " 
					       + ex.getMessage());
			ex.printStackTrace(System.err);
		    }
		}
		connector = null;
	    }
	    graph.repaint();
	}       
	catch (FileNotFoundException e){
	    System.out.println("Grappa.showGraph: cant Access file!!") ;
	    e.printStackTrace() ;	    
	}	
    }    

}

    
