/*   FILE: Plugin.java
 *   DATE OF CREATION:  Thu May 26 16:20:27 2005
 *   AUTHOR :           Emmanuel Pietriga (emmanuel.pietriga@inria.fr)
 *   MODIF:             Emmanuel Pietriga (emmanuel.pietriga@inria.fr)
 *   Copyright (c) INRIA, 2004-2005. All Rights Reserved
 *   Licensed under the GNU LGPL. For full terms see the file COPYING.
 *
 * $Id: Plugin.java 869 2007-11-14 15:35:39Z epietrig $
 */

package net.claribole.zgrviewer;

import java.util.Hashtable;
import javax.swing.JFrame;

/**
 * An interface for ZGRViewer plugins (such as the one based on ZVTM-MPD). See <a href="http://zvtm.sourceforge.net/doc/tutorials/zgrvplugins/index.html">http://zvtm.sourceforge.net/doc/tutorials/zgrvplugins/index.html</a> for more details.
 **/
public interface Plugin {

    /**
     * Set the ZGRViewer instance this plug-in is associated with
     */
    public void setApplication(ZGRViewer app);

    /**
     * Called by ZGRViewer prior to exit (put clean up actions (if any) in here)
     */
    public void terminate();

    /**
     * Called by ZGRViewer at init time when loading preferences from zgrviewer.cfg
     * @param settings contains preferences relevant to this plug-in, as they were exported by method savePreferences
     */
    public void loadPreferences(Hashtable settings);

    /**
     * Called by ZGRViewer when saving preferences to zgrviewer.cfg
     * @return preferences relevant to this plug-in as a hashtable (can be null)
     */
    public Hashtable savePreferences();

    /**
     * Display a window for configuring plugin settings
     **/
    public void showSettings();

    /**
     * Gets author information about this plug-in - return an empty String if none
     **/
    public String getAuthor();
    
    /**
     * Gets information about this plug-in - return an empty String if none
     **/
    public String getName();

    /**
     * Gets version information about this plug-in - return an empty String if none
     **/
    public String getVersion();

    /**
     * Gets a URL pointing to more information about this plug-in (e.g. Web site) - can be null
     **/
    public java.net.URL getURL();

}

