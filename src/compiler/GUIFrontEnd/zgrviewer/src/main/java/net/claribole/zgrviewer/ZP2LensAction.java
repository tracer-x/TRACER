/*   FILE: ZP2LensAction.java
 *   DATE OF CREATION:  2006/03/15 13:12:32
 *   AUTHOR :           Emmanuel Pietriga (emmanuel.pietriga@inria.fr)
 *   MODIF:             Emmanuel Pietriga (emmanuel.pietriga@inria.fr)
 *   Copyright (c) INRIA, 2006. All Rights Reserved
 *   Licensed under the GNU LGPL. For full terms see the file COPYING.
 *
 * $Id: ZP2LensAction.java 576 2007-03-29 18:32:53Z epietrig $
 */ 

package net.claribole.zgrviewer;

import net.claribole.zvtm.engine.PostAnimationAction;
import net.claribole.zvtm.lens.Lens;

public class ZP2LensAction implements PostAnimationAction {

    GraphicsManager grMngr;
    
    public ZP2LensAction(GraphicsManager gm){
	this.grMngr = gm;
    }
    
    public void animationEnded(Object target, short type, String dimension){
	if (type == PostAnimationAction.LENS){
	    grMngr.vsm.getOwningView(((Lens)target).getID()).setLens(null);
	    ((Lens)target).dispose();
	    grMngr.setMagFactor(GraphicsManager.DEFAULT_MAG_FACTOR);
	    grMngr.lens.dispose();
	    grMngr.lens = null;
	    grMngr.setLens(GraphicsManager.NO_LENS);
	}
    }
    
}