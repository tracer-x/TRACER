/*   FILE: LNode.java
 *   Copyright (c) INRIA, 2008. All Rights Reserved
 *   Licensed under the GNU LGPL. For full terms see the file COPYING.
 *
 * $Id: BroughtElement.java 1258 2008-08-29 15:32:59Z epietrig $
 */ 

package net.claribole.zgrviewer;

import com.xerox.VTM.engine.AnimManager;
import com.xerox.VTM.engine.LongPoint;
import com.xerox.VTM.glyphs.Glyph;
import com.xerox.VTM.glyphs.VText;
import net.claribole.zvtm.glyphs.DPathST;

abstract class BroughtElement {
	
	static BroughtElement rememberPreviousState(LElem el){
		if (el instanceof LNode){return new BroughtNode((LNode)el);}
		else if (el instanceof LEdge){return new BroughtEdge((LEdge)el);}
		else {return null;}
	}

	Glyph[] glyphs;
	LongPoint[] previousLocations;
	
	abstract void restorePreviousState(AnimManager animator, int duration);
		
}

class BroughtNode extends BroughtElement {
	
	BroughtNode(LNode n){
		glyphs = n.getGlyphs();
		previousLocations = new LongPoint[glyphs.length];
		for (int i=0;i<glyphs.length;i++){
			previousLocations[i] = glyphs[i].getLocation();
		}
	}

	void restorePreviousState(AnimManager animator, int duration){
		for (int i=0;i<glyphs.length;i++){
			animator.createGlyphAnimation(duration, AnimManager.GL_TRANS_LIN,
			                              new LongPoint(previousLocations[i].x-glyphs[i].vx, previousLocations[i].y-glyphs[i].vy),
			                              glyphs[i].getID());
		}
	}
	
}

class BroughtEdge extends BroughtElement {

	DPathST spline;
	float splineAlpha;
	LongPoint[] splineCoords;
	
	BroughtEdge(LEdge e){
		glyphs = e.getGlyphs();
		spline = e.getSpline();
		if (spline != null){
			splineCoords = spline.getAllPointsCoordinates();
			splineAlpha = spline.getTranslucencyValue();
		}
		previousLocations = new LongPoint[glyphs.length];
		for (int i=0;i<glyphs.length;i++){
			if (glyphs[i] == spline){
				previousLocations[i] = null;
			}
			else if (glyphs[i] instanceof VText){
				previousLocations[i] = glyphs[i].getLocation();
			}
			else {
				// probably a tail or head decoration, we've just hidden the glyph, don't do anything
				previousLocations[i] = null;
			}
		}
	}
	
	void restorePreviousState(AnimManager animator, int duration){
		animator.createPathAnimation(duration, AnimManager.DP_TRANS_SIG_ABS, splineCoords, spline.getID(), null);
		spline.setTranslucencyValue(splineAlpha);
		for (int i=0;i<glyphs.length;i++){
			if (!glyphs[i].isVisible()){
				glyphs[i].setVisible(true);
			}
			if (previousLocations[i] != null){
				animator.createGlyphAnimation(duration, AnimManager.GL_TRANS_LIN,
				                              new LongPoint(previousLocations[i].x-glyphs[i].vx, previousLocations[i].y-glyphs[i].vy),
				                              glyphs[i].getID());				
			}
		}
	}
	
}
