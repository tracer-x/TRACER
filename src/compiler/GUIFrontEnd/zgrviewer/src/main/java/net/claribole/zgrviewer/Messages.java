/*   FILE: Messages.java
 *   DATE OF CREATION:   Fri Jan 10 09:37:09 2003
 *   AUTHOR :            Emmanuel Pietriga (emmanuel@w3.org)
 *   MODIF:              Emmanuel Pietriga (emmanuel.pietriga@inria.fr)
 *   Copyright (c) Emmanuel Pietriga, 2002. All Rights Reserved
 *   Copyright (c) INRIA, 2004-2007. All Rights Reserved
 *   Licensed under the GNU LGPL. For full terms see the file COPYING.
 *   $Id: Messages.java 1619 2009-04-07 09:04:05Z epietrig $
 */ 

package net.claribole.zgrviewer;

import com.xerox.VTM.engine.LongPoint;

public class Messages {
    
    /*warning, error, help and other messages*/

    static final String antialiasingWarning="Antialiasing requires additional computing resources.\nSetting it ON will noticeably reduce the refresh rate.";
    
    static final String pngOnlyIn140FirstPart="This functionality is only available when running ZGRViewer using a JVM version 1.4.0 or later (it requires the ImageIO API).\nZGRViewer detected JVM version ";
    
    static final String pngOnlyIn140SecondPart="\nDo you want to proceed anyway (this will probably cause an error)?";

    static final String VERSION = "0.8.2";

    static final String about = "ZGRViewer " + VERSION + "\n\nA Visualization Tool for GraphViz based on ZVTM\nhttp://zvtm.sourceforge.net/zgrviewer.html\n\nWritten by Emmanuel Pietriga\n(INRIA project In Situ)\nemmanuel.pietriga@inria.fr";

    static final String commands="Under Mac OS X, replace Ctrl by the Command key\n\nMisc. Commands\n"
	+"* Press right mouse button to display the pie menu\n\n"
	+"* Ctrl+D = open a file with dot (SVG pipeline)\n"
	+"* Ctrl+N = open a file with neato (SVG pipeline)\n"
	+"* Ctrl+Z = open a file with another program (SVG pipeline)\n"
	+"* Ctrl+R = Reload current file (SVG pipeline)\n"
	+"* Ctrl+P = Print current view\n"
	+"* Ctrl+Q = Exit ZGRViewer\n\n"

	+"Navigation (left mouse button corresponds to the single button for Mac users)\n"
	+"* Press left mouse button and drag to move in the graph\n"
	+"* Hold Shift, press left mouse button and drag vertically to zoom-in/zoom-out\n"
	+"* Click left mouse button on a node or arc to center on it\n"
	+"* Hold Alt, press left mouse button and drag to select a region of interest\n"
	+"* Home (or G) = get a global view of the graph\n"
	+"* Ctrl+L = (de)activate distortion lens\n"
	+"* Ctrl+F = pop up search window\n"
	+"* Page Down = Zoom In\n"
	+"* Page Up = Zoom Out\n"
	+"* Mouse wheel =  zoom in/out"
	+"* Arrow Keys = Translation\n"
	+"* B = Back to previous location\n"
	+"* L or Space bar or Middle mouse button = load associated URL in a Web browser\n"
	;

    static final String customCallHelp = "Use %s for source and %t for target:\ne.g. twopi -Tsvg -o %t %s";

    static final String customCallExprError = "Command line expression is missing %s or %t.\n\nUse %s for source and %t for target:\ne.g. twopi -Tsvg -o %t %s";

    static final String customCallExprError2 = "An error occured while running the following command line:\n\n";

    static final String customCallFileError = "The source file has not been specified";

    static final String loadError="An error occured while loading from ";

    static final String webBrowserHelpText="--------------------------------------\nAUTOMATIC DETECTION\n--------------------------------------\nZGRViewer can try to automatically detect your default web browser.\nThis feature is currently supported under Windows and some POSIX environments.\n\n--------------------------------------\nMANUAL CONFIGURATION\n--------------------------------------\nThe Path value should be the full command line path to your browser's main executable file. It can also be just this file's name if its parent directory is in your PATH environment variable.\n\nExamples:\nmozilla\n/usr/bin/mozilla\nC:\\Program Files\\Internet Explorer\\IEXPLORE.EXE\n\nThe Command Line Options value is an optional field where you can put command line switches, like -remote for the UNIX version of Netscape that will open URLs in an already existing Netscape process (if it exists).\n\nUnder Mac OS X, you can simply use\nopen\nor\nopen -a Safari";

    static final String proxyHelpText="If you are behind a firewall, you can manually set the proxy server to access remote resources.\n\nHostname should be the full name of the proxy server.\n\nPort should be the port number used to access external resources. This is a number (default value is 80).";

    static final String notAFile = "The specified path does not point to a file:\n";

    static final String notADirectory = "The specified path does not point to a directory:\n";

    static final String fileDoesNotExist = "This path does not point to any existing file or directory:\n";

    static final String PM_ENTRY = "mpmE";
    static final String PM_SUBMN = "mpmS";

    static final String PM_FILE = "File...";
    static final String PM_EXPORT = "Export...";
    static final String PM_BACK = "Back";
    static final String PM_GLOBALVIEW = "Global View";

    static final String[] mainMenuLabels = {PM_GLOBALVIEW, PM_FILE, PM_BACK, PM_EXPORT};
    static final LongPoint[] mainMenuLabelOffsets = {new LongPoint(0, 0), new LongPoint(0, 0),
						     new LongPoint(0, 0), new LongPoint(0, -10)};

    static final String PM_OPENDOTSVG = "Dot (SVG)...";
    static final String PM_OPENCIRCOSVG = "Circo (SVG)...";
    static final String PM_OPENNEATOSVG = "Neato (SVG)...";
    static final String PM_OPENTWOPISVG = "Twopi (SVG)...";
    static final String PM_OPENSVG = "SVG...";
    static final String PM_OPENOTHER = "Other (SVG)...";

    static final String[] fileMenuLabels = {PM_OPENSVG, PM_OPENCIRCOSVG, PM_OPENDOTSVG,
					    PM_OPENNEATOSVG, PM_OPENTWOPISVG, PM_OPENOTHER};
    static final LongPoint[] fileMenuLabelOffsets = {new LongPoint(30, 0), new LongPoint(20, 0),
						     new LongPoint(0, 10), new LongPoint(-10, 0),
						     new LongPoint(-10, 0), new LongPoint(0, -30)};

    static final String PM_EXPSVG = "Export (SVG)...";
    static final String PM_EXPPNG = "Export (PNG)...";
    static final String PM_EXPPRINT = "Print...";

    static final String[] exportMenuLabels = {PM_EXPSVG, PM_EXPPNG, PM_EXPPRINT};

    static final String LOADING_SVG = "Loading Graphviz/SVG...";

    static final String EMPTY_STRING = "";

    static final String SPACE_STRING = " ";

    static final String YOU_HAVE_THE_MOST_RECENT_VERSION = "You have the most recent version of ZGRViewer (" + VERSION + ")";
    
    static final String NEW_VERSION_AVAILABLE = "A new version of ZGRViewer is available: ";

	static final String DOWNLOAD_URL = "http://zvtm.sourceforge.net/zgrviewer.html#download";

    static final String COULD_NOT_GET_VERSION_INFO = "Failed to get version information";

    static final String CMD_LINE_ERROR = "Only -Pdot, -Pneato, -Pcirco, -Ptwopi and -Psvg are allowed";

    static final String PATH_NOT_SET = "NOT SET";

    static final String FAILED_TO_BUILD_LOGICAL_STRUCT = "Failed to build logical structure. Some tools are disabled.";
    
    static final String ERROR_LOADING_DOT_FILE = "An error occured while parsing this DOT file.";

    static final String SVG_PARSING_ERROR = "SVG parsing error";

}
