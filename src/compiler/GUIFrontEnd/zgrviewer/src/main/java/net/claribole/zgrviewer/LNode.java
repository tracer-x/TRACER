/*   FILE: LNode.java
 *   DATE OF CREATION:  Thu Mar 15 19:18:17 2007
 *   AUTHOR :           Emmanuel Pietriga (emmanuel.pietriga@inria.fr)
 *   MODIF:             Emmanuel Pietriga (emmanuel.pietriga@inria.fr)
 *   Copyright (c) INRIA, 2007. All Rights Reserved
 *   Licensed under the GNU LGPL. For full terms see the file COPYING.
 *
 * $Id: LNode.java 1250 2008-08-29 09:21:50Z epietrig $
 */ 

package net.claribole.zgrviewer;

import java.util.Vector;

import com.xerox.VTM.glyphs.Glyph;
import com.xerox.VTM.glyphs.ClosedShape;
import com.xerox.VTM.svg.Metadata;

class LNode extends LElem {

    LEdge[] edges;
    short[] edgeDirections;

    LNode(String title, Vector glyphs){
        this.title = title;
        this.glyphs = new Glyph[glyphs.size()];
        this.URLs = new String[glyphs.size()];
        for (int i=0;i<this.glyphs.length;i++){
            this.glyphs[i] = (Glyph)glyphs.elementAt(i);
            // URL associated with each glyph (there might be different URLs associated with
            // the various glyphs constituting a node or edge)
            if (this.glyphs[i].getOwner() != null){
                URLs[i] = ((Metadata)this.glyphs[i].getOwner()).getURL();
            }
        }
        for (int i=0;i<this.glyphs.length;i++){
            this.glyphs[i].setOwner(this);
        }
        edges = new LEdge[0];
        edgeDirections = new short[0];
    }
    
    String getURL(Glyph g){
        for (int i=0;i<glyphs.length;i++){
            if (g == glyphs[i]){
                return URLs[i];
            }
        }
        return null;
    }

    void addArc(LEdge e, short direction){
	LEdge[] nedges = new LEdge[edges.length+1];
	short[] nedgeDirections = new short[nedges.length];
	System.arraycopy(edges, 0, nedges, 0, edges.length);
	System.arraycopy(edgeDirections, 0, nedgeDirections, 0, edgeDirections.length);
	nedges[edges.length] = e;
	nedgeDirections[edgeDirections.length] = direction;
	edges = nedges;
	edgeDirections = nedgeDirections;
    }

	LEdge[] getAllArcs(){
		LEdge[] res = new LEdge[edges.length];
		System.arraycopy(edges, 0, res, 0, edges.length);
		return res;
	}
	
	/** Get all arcs incoming or outgoing from this node, except for the specified one. */
	LEdge[] getOtherArcs(LEdge arc){
		int count = 0;
		for (int i=0;i<edges.length;i++){
			if (arc != edges[i]){count++;}
		}
		LEdge[] res = new LEdge[count];
		int j = 0;
		for (int i=0;i<edges.length;i++){
			if (arc != edges[i]){res[j++] = edges[i];}
		}
		return res;
	}

    LEdge[] getOutgoingArcs(){
	int oaCount = 0;
	for (int i=0;i<edgeDirections.length;i++){
	    if (edgeDirections[i] == LEdge.OUTGOING){oaCount++;}
	}
	LEdge[] res = new LEdge[oaCount];
	int j = 0;
	for (int i=0;i<edges.length;i++){
	    if (edgeDirections[i] == LEdge.OUTGOING){
		res[j++] = edges[i];
	    }
	}
	return res;
    }

    LEdge[] getIncomingArcs(){
	int oaCount = 0;
	for (int i=0;i<edgeDirections.length;i++){
	    if (edgeDirections[i] == LEdge.INCOMING){oaCount++;}
	}
	LEdge[] res = new LEdge[oaCount];
	int j = 0;
	for (int i=0;i<edges.length;i++){
	    if (edgeDirections[i] == LEdge.INCOMING){
		res[j++] = edges[i];
	    }
	}
	return res;
    }

    LEdge[] getUndirectedArcs(){
	int oaCount = 0;
	for (int i=0;i<edgeDirections.length;i++){
	    if (edgeDirections[i] == LEdge.UNDIRECTED){oaCount++;}
	}
	LEdge[] res = new LEdge[oaCount];
	int j = 0;
	for (int i=0;i<edges.length;i++){
	    if (edgeDirections[i] == LEdge.UNDIRECTED){
		res[j++] = edges[i];
	    }
	}
	return res;
    }

    ClosedShape getShape(){
	for (int i=0;i<glyphs.length;i++){
	    if (glyphs[i] instanceof ClosedShape){return (ClosedShape)glyphs[i];}
	}
	return null;
    }

    public String toString(){
	String res = title + "[";
	for (int i=0;i<edges.length;i++){
	    res += ((edges[i] != null) ? edges[i].title + "@" + edges[i].hashCode() : "NULL") + "(" + edgeDirections[i] + ") ";
	}
	res += "]";
	return res;
    }

}
