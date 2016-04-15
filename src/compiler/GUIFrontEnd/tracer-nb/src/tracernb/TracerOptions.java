package tracernb;

/**
 *
 * @author vijay
 */
public class TracerOptions {

    /**
     * CLPR working directory
     */
    public static final String CLPR_DIR = "/home/jorge/SvnReps/Systems/CLPR/clpr-1.2b";

    /**
     * ANT path
     */
    public static final String TRUNK_DIR = "/home/jorge/SvnReps/Systems/TRACER/trunk";

    /**
     * ZGRViewer path
     */
    public static final String ZGR_DIR = TRUNK_DIR + "/src/java/GUIFrontEnd/zgrviewer";

    /**
     * TRACER script directory 
     */
    public static final String TRACER_SCRIPT_DIR = TRUNK_DIR;

    /**
     * Delimiter string for the end of one path in Tracer's output
     */
    public static final String DELIM = "END OF PATH";

    /**
     * DETERMINES WHICH VERSION OF TRACER TO RUN
     * 1 = operations are run using PIPES
     * 2 = operations are run using SCRIPTS
     */
    public static final int TRACER_VER = 2;
}
