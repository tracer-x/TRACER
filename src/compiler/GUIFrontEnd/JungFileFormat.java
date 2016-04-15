import java.io.*;
import edu.uci.ics.jung.graph.*;
import edu.uci.ics.jung.io.GraphMLFile;
import edu.uci.ics.jung.io.PajekNetFile;
import edu.uci.ics.jung.io.PajekNetReader;

public interface JungFileFormat{
    /**
     * Generates a graph reading it from a file.
     * @param FileName the file
     * @return a directed graph 
     */
    public Graph getGraph(String FileName);
}

class JungGraphMLFormat implements JungFileFormat{

    JungGraphMLFormat(){}

    /**
     * Using graphML format
     **/
    public Graph getGraph(String FileName) {
	GraphMLFile gmf    = new GraphMLFile();
	Graph g = gmf.load(FileName);	
	return g;
    }    
}

class JungPajekFormat implements JungFileFormat{
    
    JungPajekFormat(){}

    /**
     * Using Pajek format
     **/

    public Graph getGraph(String FileName) {
        PajekNetReader pnr = new PajekNetReader();
	Graph g = null;
	try{
	    g = pnr.load(FileName);
	}
	catch (IOException e){
	    System.err.println("Problems reading Pajek format") ;
	    e.printStackTrace() ;
	}
	return g;
    }
}
