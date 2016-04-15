/*   FILE: LogicalStructure.java
 *   DATE OF CREATION:  Thu Mar 15 18:33:17 2007
 *   AUTHOR :           Emmanuel Pietriga (emmanuel.pietriga@inria.fr)
 *   MODIF:             Emmanuel Pietriga (emmanuel.pietriga@inria.fr)
 *   Copyright (c) INRIA, 2007. All Rights Reserved
 *   Licensed under the GNU LGPL. For full terms see the file COPYING.
 *
 * $Id: LogicalStructure.java 1246 2008-08-28 17:01:30Z epietrig $
 */ 

package net.claribole.zgrviewer;

import java.util.Enumeration;
import java.util.Hashtable;
import java.util.Vector;

import com.xerox.VTM.glyphs.Glyph;
import com.xerox.VTM.svg.Metadata;

class LogicalStructure {

    public static LogicalStructure build(Vector glyphs){
	Glyph g;
	Metadata md;
	Hashtable title2node = new Hashtable(); // key = node title, value = vector of glyphs associated with this node
	Hashtable title2edgeGroup = new Hashtable(); // key = edge title, value = hashtable in which:
	//                                                                     key = closest ancestor group ID,
	//                                                                     value = vector of glyphs associated with the
	//                                                                             edge whose id is key
	// this is necessary to avoid all glyphs of different edges linking the same nodes being associated with the same single LEdge
	String title;
	Vector v;
	Hashtable t;
	String cagid;
	int edgeCount = 0;
	for (int i=0;i<glyphs.size();i++){
	    g = (Glyph)glyphs.elementAt(i);
	    md = (Metadata)g.getOwner();
	    if (md != null && (title=md.getTitle()) != null){
		if (title.indexOf(LEdge.DIRECTED_STR) != -1 || title.indexOf(LEdge.UNDIRECTED_STR) != -1){
		    // dealing with a glyph that is part of an edge
		    cagid = md.getClosestAncestorGroupID();
		    if (title2edgeGroup.containsKey(title)){
			t = (Hashtable)title2edgeGroup.get(title);
			if (t.containsKey(cagid)){
			    v = (Vector)t.get(cagid);
			    v.add(g);
			}
			else {
			    v = new Vector();
			    v.add(g);
			    t.put(cagid, v);
			    edgeCount++;
			}
		    }
		    else {
			v = new Vector();
			v.add(g);
			t = new Hashtable(3); // initial capacity set to 3 (path, arrow head, label)
			t.put(cagid, v);
			title2edgeGroup.put(title, t);
			edgeCount++;
		    }
		}
		else {
		    // dealing with a glyph that is part of a node
		    if (title2node.containsKey(title)){
			v = (Vector)title2node.get(title);
			v.add(g);
		    }
		    else {
			v = new Vector();
			v.add(g);
			title2node.put(title, v);
		    }
		}
	    }
	    // remain silent if structural information could not be extracted
	}
	LogicalStructure res = new LogicalStructure(title2node, title2edgeGroup, edgeCount);
	title2edgeGroup.clear();
	title2node.clear();
	return (res.isEmpty()) ? null : res;
    }

    /* ----------------------------------- */

    LNode[] nodes;
    LEdge[] edges;
    
    LogicalStructure(Hashtable title2node, Hashtable title2edgeGroup, int edgeCount){
	String title;
	// construct nodes
	nodes= new LNode[title2node.size()];
	int i = 0;
	for (Enumeration e=title2node.keys();e.hasMoreElements();){
	    title = (String)e.nextElement();
	    nodes[i] = new LNode(title, (Vector)title2node.get(title));
	    i++;
	}
	// construct edges
	i = 0;
	edges = new LEdge[edgeCount];
	Hashtable group2edge;
	for (Enumeration e=title2edgeGroup.keys();e.hasMoreElements();){
	    title = (String)e.nextElement();
 	    group2edge = (Hashtable)title2edgeGroup.get(title);
	    for (Enumeration e2=group2edge.elements();e2.hasMoreElements();){
		// we do not save the group/edge's ID, not relevant for now
		// but we could if it prove to be useful (group ID is just the key)
		// and could be given to the LEdge constructor
		edges[i] = new LEdge(title, (Vector)e2.nextElement());
		i++;
	    }
	}
	// link nodes and edges
	for (int j=0;j<edges.length;j++){
	    int id = edges[j].title.indexOf(LEdge.DIRECTED_STR);
	    if (id != -1){
		edges[j].setDirected(true);
		edges[j].setTail(getNode(edges[j].title.substring(0, id)));
		edges[j].setHead(getNode(edges[j].title.substring(id+2)));
	    }
	    else {
		id = edges[j].title.indexOf(LEdge.UNDIRECTED_STR);
		if (id != -1){
		    edges[j].setDirected(false);
		    edges[j].setTail(getNode(edges[j].title.substring(0, id)));
		    edges[j].setHead(getNode(edges[j].title.substring(id+2)));
		}
	    }
	}
    }

    LNode getNode(String title){
	LNode res = null;
	for (int i=0;i<nodes.length;i++){
	    if (nodes[i].title.equals(title)){return nodes[i];}
	}
	return null;
    }

    boolean isEmpty(){
	return (nodes.length==0 || edges.length==0);
    }
    
    public String toString(){
	String res = "";
	for (int i=0;i<nodes.length;i++){
	    res += nodes[i].toString() + "\n";
	}
	for (int i=0;i<edges.length;i++){
	    res += edges[i].toString() + "\n";
	}
	return res;
    }

	/** Get the logical node corresponding to this glyph.
	 *@return null if g is not associated to a logical node.
	 */
	static LNode getNode(Glyph g){
		Object o = (g != null) ? g.getOwner() : null;
		if (o != null){
			return (o instanceof LNode) ? (LNode)o : null;
		}
		return null;
	}

	/** Get the logical arc corresponding to this glyph.
	 *@return null if g is not associated to a logical arc.
	 */
	static LEdge getEdge(Glyph g){
		Object o = (g != null) ? g.getOwner() : null;
		if (o != null){
			return (o instanceof LEdge) ? (LEdge)o : null;
		}
		return null;
	}

}
