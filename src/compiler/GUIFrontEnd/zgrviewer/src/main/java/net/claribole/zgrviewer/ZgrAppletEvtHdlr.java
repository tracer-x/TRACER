/*   FILE: ZgrAppletEvtHdlr.java
 *   DATE OF CREATION:   Fri May 09 09:54:03 2003
 *   AUTHOR :            Emmanuel Pietriga (emmanuel@w3.org)
 *   MODIF:              Fri May 09 10:09:49 2003 by Emmanuel Pietriga (emmanuel@w3.org, emmanuel@claribole.net)
 *   Copyright (c) 2003 World Wide Web Consortium. All Rights Reserved
 *   Copyright (c) INRIA, 2004-2009. All Rights Reserved
 *   Licensed under the GNU LGPL. For full terms see the file COPYING.
 */ 

package net.claribole.zgrviewer;

import java.awt.Graphics2D;
import java.awt.Color;
import java.awt.Font;
import java.util.Vector;

import com.xerox.VTM.engine.AnimManager;
import com.xerox.VTM.engine.Camera;
import com.xerox.VTM.engine.VCursor;
import com.xerox.VTM.engine.Utilities;
import com.xerox.VTM.engine.View;
import com.xerox.VTM.engine.ViewPanel;
import com.xerox.VTM.engine.VirtualSpace;
import com.xerox.VTM.glyphs.Glyph;
import com.xerox.VTM.glyphs.VSegment;
import com.xerox.VTM.glyphs.VImage;

import net.claribole.zvtm.engine.ViewEventHandler;
import net.claribole.zvtm.engine.Portal;

import java.awt.event.KeyEvent;
import java.awt.event.MouseEvent;
import java.awt.event.MouseWheelEvent;

public class ZgrAppletEvtHdlr extends BaseEventHandler implements ViewEventHandler {

    ZGRApplet application;
    GraphicsManager grMngr;

    ZgrAppletEvtHdlr(ZGRApplet app, GraphicsManager gm){
	this.application=app;
	this.grMngr = gm;
    }

    public void press1(ViewPanel v,int mod,int jpx,int jpy, MouseEvent e){
	if (toolPaletteIsActive){return;}
	else {
	    lastJPX = jpx;
	    lastJPY = jpy;
	    if (inZoomWindow){
		if (grMngr.dmPortal.coordInsideBar(jpx, jpy)){
		    draggingZoomWindow = true;
		}
		else {
		    draggingZoomWindowContent = true;
		}
	    }
	    else if (inMagWindow){
		grMngr.vsm.stickToMouse(grMngr.magWindow);
		draggingMagWindow = true;
	    }
	    else {
		grMngr.rememberLocation(v.cams[0].getLocation());
		if (mod == NO_MODIFIER || mod == SHIFT_MOD || mod == META_MOD || mod == META_SHIFT_MOD){
		    manualLeftButtonMove=true;
		    lastJPX=jpx;
		    lastJPY=jpy;
		    //grMngr.vsm.setActiveCamera(v.cams[0]);
		    v.setDrawDrag(true);
		    grMngr.vsm.activeView.mouse.setSensitivity(false);  //because we would not be consistent  (when dragging the mouse, we computeMouseOverList, but if there is an anim triggered by {X,Y,A}speed, and if the mouse is not moving, this list is not computed - so here we choose to disable this computation when dragging the mouse with button 3 pressed)
		    activeCam=grMngr.vsm.getActiveCamera();
		}
		else if (mod == ALT_MOD){
		    zoomingInRegion=true;
		    x1=v.getVCursor().vx;
		    y1=v.getVCursor().vy;
		    v.setDrawRect(true);
		}
	    }
	}
    }

    public void release1(ViewPanel v,int mod,int jpx,int jpy, MouseEvent e){
	if (toolPaletteIsActive){return;}
	else {
	    draggingZoomWindow = false;
	    draggingZoomWindowContent = false;
	    if (draggingMagWindow){
		draggingMagWindow = false;
		grMngr.vsm.unstickFromMouse();
	    }
	    if (zoomingInRegion){
		v.setDrawRect(false);
		x2=v.getVCursor().vx;
		y2=v.getVCursor().vy;
		if ((Math.abs(x2-x1)>=4) && (Math.abs(y2-y1)>=4)){
		    grMngr.vsm.centerOnRegion(grMngr.vsm.getActiveCamera(),ConfigManager.ANIM_MOVE_LENGTH,x1,y1,x2,y2);
		}
		zoomingInRegion=false;
	    }
	    else if (manualLeftButtonMove){
		grMngr.vsm.animator.Xspeed=0;
		grMngr.vsm.animator.Yspeed=0;
		grMngr.vsm.animator.Aspeed=0;
		v.setDrawDrag(false);
		grMngr.vsm.activeView.mouse.setSensitivity(true);
		if (autoZooming){unzoom(v);}
		manualLeftButtonMove=false;
	    }
	}
    }

    public void click1(ViewPanel v,int mod,int jpx,int jpy,int clickNumber, MouseEvent e){
	if (toolPaletteIsActive){
	    if (v.lastGlyphEntered() != null){grMngr.tp.selectButton((VImage)v.lastGlyphEntered());}
	}
	else {
	    if (grMngr.tp.isFadingLensNavMode() || grMngr.tp.isProbingLensNavMode() || grMngr.tp.isMeltingLensNavMode()){
		lastJPX = jpx;
		lastJPY = jpy;
		lastVX = v.getVCursor().vx;
		lastVY = v.getVCursor().vy;
		if (grMngr.lensType != GraphicsManager.NO_LENS){
		    grMngr.zoomInPhase2(lastVX, lastVY);
		}
		else {
		    if (cursorNearBorder){// do not activate the lens when cursor is near the border
			return;
		    }
		    grMngr.zoomInPhase1(jpx, jpy);
		}
	    }
	    else if (grMngr.tp.isDragMagNavMode()){
		grMngr.triggerDM(jpx, jpy);
	    }
	    else {
		if (clickNumber == 2){click2(v, mod, jpx, jpy, clickNumber, e);}
		else {
		    Glyph g = v.lastGlyphEntered();
		    if (mod == SHIFT_MOD){
			grMngr.highlightElement(g, v.cams[0], v.getVCursor(), true);
		    }
		    else {
			if (g != null && g != grMngr.boundingBox){
			    grMngr.vsm.centerOnGlyph(g, v.cams[0], ConfigManager.ANIM_MOVE_LENGTH, true, ConfigManager.MAG_FACTOR);
			}
		    }
		}
	    }
	}
    }

    public void press2(ViewPanel v,int mod,int jpx,int jpy, MouseEvent e){
	grMngr.paMngr.requestToolPaletteRelocation();
    }

    public void release2(ViewPanel v,int mod,int jpx,int jpy, MouseEvent e){}

    public void click2(ViewPanel v,int mod,int jpx,int jpy,int clickNumber, MouseEvent e){
        if (toolPaletteIsActive){return;}
        Glyph g=v.lastGlyphEntered();
        if (g!=null && g != grMngr.boundingBox){
            if (g.getOwner()!=null){getAndDisplayURL((LElem)g.getOwner(), g);}
        }
        else {
            attemptDisplayEdgeURL(v.getVCursor(),v.cams[0]);
        }
    }

    public void press3(ViewPanel v,int mod,int jpx,int jpy, MouseEvent e){
	if (toolPaletteIsActive){return;}
	else {
	    if (grMngr.tp.isFadingLensNavMode() || grMngr.tp.isProbingLensNavMode() || grMngr.tp.isMeltingLensNavMode()){
		lastJPX = jpx;
		lastJPY = jpy;
	    }
	}
    }

    public void release3(ViewPanel v,int mod,int jpx,int jpy, MouseEvent e){}

    public void click3(ViewPanel v,int mod,int jpx,int jpy,int clickNumber, MouseEvent e){
	if (toolPaletteIsActive){return;}
	else {
	    if (grMngr.tp.isFadingLensNavMode() || grMngr.tp.isProbingLensNavMode() || grMngr.tp.isMeltingLensNavMode()){
		lastJPX = jpx;
		lastJPY = jpy;
		lastVX = v.getVCursor().vx;
		lastVY = v.getVCursor().vy;
		if (grMngr.lensType != GraphicsManager.NO_LENS){
		    grMngr.zoomOutPhase2();
		}
		else {
		    if (cursorNearBorder){// do not activate the lens when cursor is near the border
			return;
		    }
		    grMngr.zoomOutPhase1(jpx, jpy, lastVX, lastVY);
		}
	    }
	}
    }

    public void mouseMoved(ViewPanel v,int jpx,int jpy, MouseEvent e){
        lx = jpx;
        ly = jpy;
        if ((jpx-grMngr.LENS_R1) < 0){
            lx = grMngr.LENS_R1;
            cursorNearBorder = true;
        }
        else if ((jpx+grMngr.LENS_R1) > grMngr.panelWidth){
            lx = grMngr.panelWidth - grMngr.LENS_R1;
            cursorNearBorder = true;
        }
        else {
            cursorNearBorder = false;
        }
        if ((jpy-grMngr.LENS_R1) < 0){
            ly = grMngr.LENS_R1;
            cursorNearBorder = true;
        }
        else if ((jpy+grMngr.LENS_R1) > grMngr.panelHeight){
            ly = grMngr.panelHeight - grMngr.LENS_R1;
            cursorNearBorder = true;
        }
        if (grMngr.lensType != 0 && grMngr.lens != null){
            grMngr.moveLens(lx, ly, e.getWhen());
        }
        else if (grMngr.tp.isEnabled()){
            if (grMngr.tp.insidePaletteTriggerZone(jpx, jpy)){
                if (!grMngr.tp.isShowing()){grMngr.tp.show();}
            }
            else {
                if (grMngr.tp.isShowing()){grMngr.tp.hide();}
            }
        }
    }

    public void mouseDragged(ViewPanel v,int mod,int buttonNumber,int jpx,int jpy, MouseEvent e){
	if (toolPaletteIsActive){return;}
	if (mod != ALT_MOD && buttonNumber == 1){
	    if (draggingZoomWindow){
		grMngr.dmPortal.move(jpx-lastJPX, jpy-lastJPY);
		lastJPX = jpx;
		lastJPY = jpy;
		grMngr.vsm.repaintNow();
	    }
	    else if (draggingZoomWindowContent){
		tfactor = (grMngr.dmCamera.focal+(grMngr.dmCamera.altitude))/grMngr.dmCamera.focal;
		synchronized(grMngr.dmCamera){
		    grMngr.dmCamera.move(Math.round(tfactor*(lastJPX-jpx)),
					      Math.round(tfactor*(jpy-lastJPY)));
		    lastJPX = jpx;
		    lastJPY = jpy;
		    grMngr.updateMagWindow();
		}
	    }
	    else if (draggingMagWindow){
		grMngr.updateZoomWindow();
	    }
	    else {
		tfactor=(activeCam.focal+Math.abs(activeCam.altitude))/activeCam.focal;
		if (mod == SHIFT_MOD || mod == META_SHIFT_MOD){
		    grMngr.vsm.animator.Xspeed=0;
		    grMngr.vsm.animator.Yspeed=0;
		    grMngr.vsm.animator.Aspeed=(activeCam.altitude>0) ? (long)((lastJPY-jpy)*(tfactor/cfactor)) : (long)((lastJPY-jpy)/(tfactor*cfactor));
		    //50 is just a speed factor (too fast otherwise)
		}
		else {
		    jpxD = jpx-lastJPX;
		    jpyD = lastJPY-jpy;
		    grMngr.vsm.animator.Xspeed=(activeCam.altitude>0) ? (long)(jpxD*(tfactor/cfactor)) : (long)(jpxD/(tfactor*cfactor));
		    grMngr.vsm.animator.Yspeed=(activeCam.altitude>0) ? (long)(jpyD*(tfactor/cfactor)) : (long)(jpyD/(tfactor*cfactor));
		    grMngr.vsm.animator.Aspeed=0;
		    if (application.cfgMngr.isSDZoomEnabled()){
			dragValue = Math.sqrt(Math.pow(jpxD, 2) + Math.pow(jpyD, 2));
			if (!autoZooming && dragValue > application.cfgMngr.SD_ZOOM_THRESHOLD){
			    autoZooming = true;
			    grMngr.vsm.animator.createCameraAnimation(300, AnimManager.CA_ALT_LIN, new Float(application.cfgMngr.autoZoomFactor*(v.cams[0].getAltitude()+v.cams[0].getFocal())), v.cams[0].getID());
			}
		    }
		}
	    }
	}
	if (grMngr.lensType != GraphicsManager.NO_LENS && grMngr.lens != null){
	    grMngr.moveLens(jpx, jpy, e.getWhen());
	}
    }

    public void mouseWheelMoved(ViewPanel v,short wheelDirection,int jpx,int jpy, MouseWheelEvent e){
	if (grMngr.lensType != GraphicsManager.NO_LENS && grMngr.lens != null){
	    if (wheelDirection  == ViewEventHandler.WHEEL_UP){
		grMngr.magnifyFocus(GraphicsManager.WHEEL_MM_STEP, grMngr.lensType, grMngr.mainCamera);
	    }
	    else {
		grMngr.magnifyFocus(-GraphicsManager.WHEEL_MM_STEP, grMngr.lensType, grMngr.mainCamera);
	    }
	}
	else if (inZoomWindow){
	    tfactor = (grMngr.dmCamera.focal+Math.abs(grMngr.dmCamera.altitude))/grMngr.dmCamera.focal;
	    if (wheelDirection  == WHEEL_UP){// zooming in
		grMngr.dmCamera.altitudeOffset(-tfactor*WHEEL_ZOOMIN_FACTOR);
	    }
	    else {// wheelDirection == WHEEL_DOWN, zooming out
		grMngr.dmCamera.altitudeOffset(tfactor*WHEEL_ZOOMOUT_FACTOR);
	    }
	    grMngr.updateMagWindow();
	    grMngr.vsm.repaintNow();
	}
	else {
	    tfactor = (grMngr.mainCamera.focal+Math.abs(grMngr.mainCamera.altitude))/grMngr.mainCamera.focal;
	    if (wheelDirection == WHEEL_UP){// zooming in
		grMngr.mainCamera.altitudeOffset(tfactor*WHEEL_ZOOMIN_FACTOR);
		grMngr.cameraMoved();
	    }
	    else {// wheelDirection == WHEEL_DOWN, zooming out
		grMngr.mainCamera.altitudeOffset(-tfactor*WHEEL_ZOOMOUT_FACTOR);
		grMngr.cameraMoved();
	    }
	}
    }

    public void enterGlyph(Glyph g){
	grMngr.mainView.setStatusBarText(Messages.SPACE_STRING);
	if (g == grMngr.magWindow){
	    inMagWindow = true;
	    return;
	}
	if (g == grMngr.boundingBox){return;} // do not highlight graph's bounding box
	if (grMngr.tp.isHighlightMode()){
	    grMngr.highlightElement(g, null, null, true); // g is guaranteed to be != null, don't care about camera and cursor
	}
//	else if (grMngr.tp.isFresnelMode()){
//	    grMngr.fresnelizeNode(g);
//	}
	else {// node highlighting is taken care of above (in a slightly different manner)
	    g.highlight(true, null);
	}
    }

    public void exitGlyph(Glyph g){
	if (g == grMngr.magWindow){
	    inMagWindow = false;
	    return;
	}
	if (g == grMngr.boundingBox){return;} // do not highlight graph's bounding box
	if (application.grMngr.tp.isHighlightMode()){
	    grMngr.unhighlightAll();
	}
//	else if (grMngr.tp.isFresnelMode()){
//	    grMngr.unfresnelizeNodes();
//	}
	else {// node highlighting is taken care of above (in a slightly different manner)
	    g.highlight(false, null);
	}
    }

    public void Ktype(ViewPanel v,char c,int code,int mod, KeyEvent e){}

    public void Kpress(ViewPanel v,char c,int code,int mod, KeyEvent e){}

    public void Krelease(ViewPanel v,char c,int code,int mod, KeyEvent e){}

    public void viewActivated(View v){}
    
    public void viewDeactivated(View v){}

    public void viewIconified(View v){}

    public void viewDeiconified(View v){}

    public void viewClosing(View v){}

    void attemptDisplayEdgeURL(VCursor mouse,Camera cam){
	Glyph g;
	Vector otherGlyphs=mouse.getIntersectingTexts(cam);
	if (otherGlyphs!=null && otherGlyphs.size()>0){
	    g=(Glyph)otherGlyphs.firstElement();
	    if (g.getOwner()!=null){getAndDisplayURL((LElem)g.getOwner(), g);}
	}
	else {
	    otherGlyphs=mouse.getIntersectingPaths(cam);
	    if (otherGlyphs!=null && otherGlyphs.size()>0){
		g=(Glyph)otherGlyphs.firstElement();
		if (g.getOwner()!=null){getAndDisplayURL((LElem)g.getOwner(), g);}
	    }
	}
    }

    void getAndDisplayURL(LElem noa, Glyph g){
        String url = noa.getURL(g);
        if (url!=null && url.length()>0){
            application.displayURLinBrowser(url);
        }
    }

    /*cancel a speed-dependant autozoom*/
    protected void unzoom(ViewPanel v){
	grMngr.vsm.animator.createCameraAnimation(300, AnimManager.CA_ALT_LIN, new Float(application.cfgMngr.autoUnzoomFactor*(v.cams[0].getAltitude()+v.cams[0].getFocal())), v.cams[0].getID());
	autoZooming = false;
    }


}
