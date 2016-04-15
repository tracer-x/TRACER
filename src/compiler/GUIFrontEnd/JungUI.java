/** 
 *  This class draws a graph using JUNG in a Swing component.
 **/

import java.io.*;
import java.awt.Color;
import edu.uci.ics.jung.graph.*;
import edu.uci.ics.jung.visualization.*; 
import edu.uci.ics.jung.visualization.contrib.TreeLayout; 

public class JungUI 
{
    JungUI(){}

    /**
     * In general, a visualization is accomplished with
     * - A Layout, which takes a graph and determines the location at
     * which each of its vertices will be drawn.
     * - A (Swing) Component, into which the data is
     * rendered. (Current implementations use a VisualizationViewer,
     * which is an extension of the Swing JPanel class.)
     * - A Renderer, which takes the data provided by the Layout and
     * paints the vertices and edges into the provided Component.
     *
     * @param g the graph.
     * @result a VisualizationViewer component.
     **/
    public VisualizationViewer drawGraph(Graph g)
    {	
	 
	Layout l               = new FRLayout(g);
 	VisualizationViewer vv = new VisualizationViewer(
					 new FRLayout(g),new PluggableRenderer());
	// Dimension of vv!!!
	vv.setPickSupport(new ShapePickSupport());
	vv.setBackground(Color.white);
	return vv;
	
    }    

}

    


