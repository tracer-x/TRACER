/*   FILE: BaseEventHandler.java
 *   DATE OF CREATION:   Mon Nov 27 08:30:31 2006
 *   AUTHOR :            Emmanuel Pietriga (emmanuel.pietriga@inria.fr)
 *   Copyright (c) INRIA, 2006. All Rights Reserved
 *   Licensed under the GNU LGPL. For full terms see the file COPYING.
 *
 *   $Id: BaseEventHandler.java 576 2007-03-29 18:32:53Z epietrig $
 */ 

package net.claribole.zgrviewer;

import com.xerox.VTM.engine.Camera;
import com.xerox.VTM.glyphs.VSegment;

import net.claribole.zvtm.engine.Portal;
import net.claribole.zvtm.engine.PortalEventHandler;

public abstract class BaseEventHandler implements PortalEventHandler {

    static final float WHEEL_ZOOMIN_FACTOR = 21.0f;
    static final float WHEEL_ZOOMOUT_FACTOR = 22.0f;

    Camera activeCam;
    VSegment navSeg;

    boolean cursorNearBorder = false;

    int lastJPX,lastJPY;    //remember last mouse coords to compute translation  (dragging)
    long lastVX, lastVY;
    long jpxD, jpyD;
    float tfactor;
    float cfactor=50.0f;
    long x1,y1,x2,y2;                     //remember last mouse coords to display selection rectangle (dragging)
    
    // lens optimization
    int lx, ly;    

    boolean zoomingInRegion=false;
    boolean manualLeftButtonMove=false;
    boolean manualRightButtonMove=false;

    /*speed-dependant autozoom data*/
    boolean autoZooming = false;
    double dragValue;

    boolean toolPaletteIsActive = false;

    /* DragMag interaction */
    boolean inZoomWindow = false;
    boolean inMagWindow = false;
    boolean draggingMagWindow = false;
    boolean draggingZoomWindow = false;
    boolean draggingZoomWindowContent = false;
    

    /**cursor enters portal*/
    public void enterPortal(Portal p){
	inZoomWindow = true;
    }

    /**cursor exits portal*/
    public void exitPortal(Portal p){
	inZoomWindow = false;
    }

    void resetDragMagInteraction(){
	inMagWindow = false;
	inZoomWindow = false;
	draggingZoomWindow = false;
	draggingZoomWindowContent = false;
    }



}