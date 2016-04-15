/*   FILE: LNode.java
 *   DATE OF CREATION:  Thu Mar 15 19:18:17 2007
 *   AUTHOR :           Emmanuel Pietriga (emmanuel.pietriga@inria.fr)
 *   MODIF:             Emmanuel Pietriga (emmanuel.pietriga@inria.fr)
 *   Copyright (c) INRIA, 2007. All Rights Reserved
 *   Licensed under the GNU LGPL. For full terms see the file COPYING.
 *
 * $Id: LElem.java 1246 2008-08-28 17:01:30Z epietrig $
 */ 

package net.claribole.zgrviewer;

import com.xerox.VTM.glyphs.Glyph;
import com.xerox.VTM.svg.Metadata;

class LElem {

    String title;
    // URLs associated with each glyph (there might be different URLs associated with
    // the various glyphs constituting a node or edge)
    String[] URLs;

    Glyph[] glyphs;

    LElem(){}

    LElem(Metadata md){
        this.title = md.getTitle();
        this.URLs = new String[1];
        this.URLs[0] = md.getURL();
    }

    String getTitle(){
        return title;
    }

    String getURL(Glyph g){
        return URLs[0];
    }

	Glyph[] getGlyphs(){
		Glyph[] res = new Glyph[glyphs.length];
		System.arraycopy(glyphs, 0, res, 0, glyphs.length);
		return res;
	}

}
