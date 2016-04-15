import java.io.*;
import javax.swing.JFileChooser;
import javax.swing.JOptionPane;
//import edu.uci.ics.jung.visualization.*;
//import edu.uci.ics.jung.graph.*;

public class TracerUI extends javax.swing.JFrame {

    /**
     * Indicates whether a file has been loaded.
     **/
    boolean fileChosen;
    /**
     * Stores the the selected file.
     **/
    File selectedFile;
  
    // Variables declaration 
    private javax.swing.JMenu       jMenuRun;
    private javax.swing.JMenuBar    jMenuBar;
    private javax.swing.JMenu       jMenuFile;
    private javax.swing.JMenuItem   jMenuFileOpen;
    private javax.swing.JMenuItem   jMenuFileQuit;
    private javax.swing.JMenu       jMenuHelp;
    private javax.swing.JMenuItem   jMenuHelpAbout;

    private javax.swing.JMenuItem   jMenuRunSafety;
    private javax.swing.JMenu       jMenuRunWCET;
    private javax.swing.JMenu       jMenuRunSlicing;

    private javax.swing.JMenuItem   jMenuRunWCETPS;
    private javax.swing.JMenuItem   jMenuRunWCETPSNoWit;
    private javax.swing.JMenuItem   jMenuRunWCETPI;

    private javax.swing.JMenuItem   jMenuRunSlicingPS;
    private javax.swing.JMenuItem   jMenuRunSlicingPSNoWit;
    private javax.swing.JMenuItem   jMenuRunSlicingPI;

    // If JUNG
    //private GraphZoomScrollPane     jScrollPaneTree; 
    //private javax.swing.JSplitPane  jSplitPane1;  

    private javax.swing.JSplitPane  innerPane;
    private javax.swing.JSplitPane  outerPane;
  


    private javax.swing.JScrollPane jScrollPaneSource;
    private javax.swing.JScrollPane jScrollPaneOutput;
    private javax.swing.JScrollPane jScrollPaneTree;

    // Here the source code
    private javax.swing.JTextArea   jTextAreaSource;
    // Here the verbose output of TRACER
    private javax.swing.JTextArea   jTextAreaOutput;
    // Here the symbolic tree of TRACER 
    private javax.swing.JTextArea   jTextAreaTree;
    
    /** Creates new form TracerUI */
    public TracerUI() {
	setSize(900,700);
	fileChosen = false;	
        selectedFile = null;
        initComponents();
    }
    
    /**
    * @param args the command line arguments
    */
    public static void main(String args[]) {
        java.awt.EventQueue.invokeLater(new Runnable() {
            public void run() {
                new TracerUI().setVisible(true);
            }
        });
    }

    /** This method is called from within the constructor to
     *  initialize the form.
     */
    private void initComponents() {

        jScrollPaneTree        = new javax.swing.JScrollPane();
	// jScrollPaneTree     = null; // If JUNG
	jScrollPaneSource      = new javax.swing.JScrollPane();
	jScrollPaneOutput      = new javax.swing.JScrollPane();	

        jTextAreaTree          = new javax.swing.JTextArea();	
        jTextAreaSource        = new javax.swing.JTextArea();
        jTextAreaOutput        = new javax.swing.JTextArea();

        jMenuBar               = new javax.swing.JMenuBar();

        // File
        jMenuFile              = new javax.swing.JMenu();
        jMenuFileOpen          = new javax.swing.JMenuItem();
        jMenuFileQuit          = new javax.swing.JMenuItem();

        // Run
        jMenuRun               = new javax.swing.JMenu();
        jMenuRunSafety         = new javax.swing.JMenuItem();
        jMenuRunWCET           = new javax.swing.JMenu();
        jMenuRunSlicing        = new javax.swing.JMenu();
        jMenuRunWCETPS         = new javax.swing.JMenuItem();
        jMenuRunWCETPSNoWit    = new javax.swing.JMenuItem();
        jMenuRunWCETPI         = new javax.swing.JMenuItem();
        jMenuRunSlicingPS      = new javax.swing.JMenuItem();
        jMenuRunSlicingPSNoWit = new javax.swing.JMenuItem();
        jMenuRunSlicingPI      = new javax.swing.JMenuItem();

        // Help
        jMenuHelp              = new javax.swing.JMenu();
        jMenuHelpAbout         = new javax.swing.JMenuItem();

	// TITLE MAIN WINDOW
        setDefaultCloseOperation(javax.swing.WindowConstants.EXIT_ON_CLOSE);
        setTitle("TRACER: A Symbolic Tool for Program Reasoning");

        /////////////////////////////////////////////////////////////////// 
	// Set up components for panels
        /////////////////////////////////////////////////////////////////// 

	// Set up top left side
        jTextAreaSource.setColumns(20);
        jTextAreaSource.setFont(new java.awt.Font("DejaVu Sans", 0, 12));
        jTextAreaSource.setRows(5);
        jScrollPaneSource.setViewportView(jTextAreaSource);

	// Set up top right side
        jTextAreaTree.setColumns(20);
        jTextAreaTree.setFont(new java.awt.Font("DejaVu Sans", 0, 12));
        jTextAreaTree.setRows(5);
	// if grappa is used
        jScrollPaneTree.setViewportView(jTextAreaTree);

	// Set up bottom side
        jTextAreaOutput.setColumns(20);
        jTextAreaOutput.setFont(new java.awt.Font("DejaVu Sans", 0, 12));
        jTextAreaOutput.setRows(5);
        jScrollPaneOutput.setViewportView(jTextAreaOutput);

        // Set up split panes

// 	innerPane = new javax.swing.JSplitPane(
// 					       javax.swing.JSplitPane.HORIZONTAL_SPLIT,
// 					       true,              // continuous layout
// 					       jScrollPaneSource, // left
// 					       jScrollPaneTree    // right
// 					       );	
// 	innerPane.setOneTouchExpandable(true);
	
	outerPane = new javax.swing.JSplitPane(
					       javax.swing.JSplitPane.VERTICAL_SPLIT,
					       true,              // continuous layout
					       //innerPane,       // top
					       jScrollPaneSource,  // top			    
					       jScrollPaneOutput  // bottom
					       );
	
	getContentPane().add(outerPane, "Center");

	//Set up divider location
        outerPane.setDividerLocation(400);  
	         
	// Create Menu

        /////////////////////////////////////////////////////////////////////
        /////////////////////////////////////////////////////////////////////
        // FILE
        /////////////////////////////////////////////////////////////////////
        /////////////////////////////////////////////////////////////////////
        jMenuFile.setText("File");
        // FILE --> OPEN 
        jMenuFileOpen.setText("Open");
        jMenuFileOpen.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jMenuFileOpenActionPerformed(evt);
            }
        });
        jMenuFile.add(jMenuFileOpen);
        // FILE --> QUIT
        jMenuFileQuit.setText("Quit");
        jMenuFileQuit.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jMenuFileQuitActionPerformed(evt);
            }
        });
        jMenuFile.add(jMenuFileQuit);
        jMenuBar.add(jMenuFile);

        /////////////////////////////////////////////////////////////////////
        /////////////////////////////////////////////////////////////////////
	// RUN
        /////////////////////////////////////////////////////////////////////
        /////////////////////////////////////////////////////////////////////

        jMenuRun.setText("Run");

        /////////////////////////////////////////////////////////////////////
	// RUN --> SAFETY
        /////////////////////////////////////////////////////////////////////
        jMenuRunSafety.setText("Safety");
        jMenuRunSafety.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jMenuRunSafetyActionPerformed(evt);
            }
        });

        jMenuRun.add(jMenuRunSafety);

        /////////////////////////////////////////////////////////////////////
	// RUN --> WCET
        /////////////////////////////////////////////////////////////////////
        jMenuRunWCET.setText("Worst-Case Execution Time");
        jMenuRun.add(jMenuRunWCET);

        // Path-Sensitive w/ witnesses
        jMenuRunWCETPS.setText("Path-Sensitive WCET w/ Witnesses");
        jMenuRunWCETPS.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jMenuRunWCETPSActionPerformed(evt);
            }
        });
        jMenuRunWCET.add(jMenuRunWCETPS);
        // Path-Sensitive w/o witnesses
        jMenuRunWCETPSNoWit.setText("Path-Sensitive WCET w/o Witnesses");
        jMenuRunWCETPSNoWit.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
		String message = "We're sorry, option not available yet\n";
		JOptionPane.showMessageDialog(outerPane,message,"WCET w/o witnesses",
					      JOptionPane.WARNING_MESSAGE);
                //jMenuRunWCETPSNoWitActionPerformed(evt);
            }

        });
        jMenuRunWCET.add(jMenuRunWCETPSNoWit);
        // Path-Insensitive 
        jMenuRunWCETPI.setText("Path-Insensitive WCET");
        jMenuRunWCETPI.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
		String message = "We're sorry, option not available yet\n";
		JOptionPane.showMessageDialog(outerPane,message,"Path-Insensitive WCET",
					      JOptionPane.WARNING_MESSAGE);
                //jMenuRunWCETPIActionPerformed(evt);
            }
        });
        jMenuRunWCET.add(jMenuRunWCETPI);

        /////////////////////////////////////////////////////////////////////
	// RUN --> SLICING
        /////////////////////////////////////////////////////////////////////
        jMenuRunSlicing.setText("Program Slicing");
        jMenuRun.add(jMenuRunSlicing);
        // Path-sensitive w/ witnesses
        jMenuRunSlicingPS.setText("Path-Sensitive Slicing w/ Witnesses");
        jMenuRunSlicingPS.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jMenuRunSlicingPSActionPerformed(evt);
            }
        });
        jMenuRunSlicing.add(jMenuRunSlicingPS);
        // Path-sensitive w/o witnesses
        jMenuRunSlicingPSNoWit.setText("Path-Sensitive Slicing w/o Witnesses");
        jMenuRunSlicingPSNoWit.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
		String message = "We're sorry, option not available yet\n";
		JOptionPane.showMessageDialog(outerPane,message,"Slicing w/o witnesses",
					      JOptionPane.WARNING_MESSAGE);
		// jMenuRunSlicingPSNoWitActionPerformed(evt);
            }
        });
        jMenuRunSlicing.add(jMenuRunSlicingPSNoWit);
        // Path-Insensitive
        jMenuRunSlicingPI.setText("Path-Insensitive Slicing");
        jMenuRunSlicingPI.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
		String message = "We're sorry, option not available yet\n";
		JOptionPane.showMessageDialog(outerPane,message,"Path-Insensitive Slicing",
					      JOptionPane.WARNING_MESSAGE);
                // jMenuRunSlicingPIActionPerformed(evt);
            }
        });
        jMenuRunSlicing.add(jMenuRunSlicingPI);

        //////////////////////////////////////////////////////////////////////////
        jMenuBar.add(jMenuRun);

        ///////////////////////////////////////////////////////////////////////////
        ///////////////////////////////////////////////////////////////////////////
	// HELP
        ///////////////////////////////////////////////////////////////////////////
        ///////////////////////////////////////////////////////////////////////////
        jMenuHelp.setText("Help");

	// HELP --> ABOUT
        jMenuHelpAbout.setText("About");
        jMenuHelpAbout.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jMenuHelpAboutActionPerformed(evt);
            }
        });
        jMenuHelp.add(jMenuHelpAbout);
        jMenuBar.add(jMenuHelp);
        setJMenuBar(jMenuBar);

	
	// MAIN WINDOW SIZE is 800x600
        javax.swing.GroupLayout layout = new javax.swing.GroupLayout(getContentPane());
        getContentPane().setLayout(layout);
        layout.setHorizontalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(layout.createSequentialGroup()
                .addContainerGap()
                .addComponent(outerPane, javax.swing.GroupLayout.DEFAULT_SIZE, 
			      900, Short.MAX_VALUE)
                .addContainerGap())
        );
        layout.setVerticalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(layout.createSequentialGroup()
                .addComponent(outerPane, javax.swing.GroupLayout.DEFAULT_SIZE, 
			      700, Short.MAX_VALUE)
                .addContainerGap())
        );
	
	
        pack();
    }

    private void jMenuFileOpenActionPerformed(java.awt.event.ActionEvent evt) {
        JFileChooser jfc = new JFileChooser();  
	/////////////////////////////////////////////////////////////
        // For now this is the default directory      
	/////////////////////////////////////////////////////////////
	String baseDir = "src/clpr/tests";

	// Set the current directory
	File f = null;
        // I don't remember why I wrote this:
        // 	try {
        // 	    f = new File(new File("examples").getCanonicalPath());	    
        // 	    jfc.setCurrentDirectory(f);
        // 	} catch (IOException e) {
        // 	    System.err.println("Setting the current directory ..." + e);
        // 	    e.printStackTrace() ;	    
        // 	}
	if (f == null){
	    try{
		//f = new File(new File(".").getCanonicalPath());	    
                f = new File(new File(baseDir).getCanonicalPath());	    
		jfc.setCurrentDirectory(f);
	    }
	    catch (IOException e) {
		System.err.println("Setting the current directory ..." + e);
		e.printStackTrace() ;	    
	    }	   	    
	}
	// Adding a filter (only .c files)
        jfc.addChoosableFileFilter(new CFilter());
        int result = jfc.showOpenDialog(null);
        if ( result == JFileChooser.APPROVE_OPTION ) {
            // Read the file and write it to JTextArea
            try{
                String strLine;
                selectedFile = jfc.getSelectedFile();
                FileInputStream in = new FileInputStream(selectedFile);
                BufferedReader br = new BufferedReader(new InputStreamReader(in));
		jTextAreaSource.setText(null);
		this.fileChosen = false;
                while ((strLine = br.readLine()) != null) {
                    jTextAreaSource.append(strLine + "\n");
                }
		this.fileChosen = true;
		jTextAreaTree.setText(null);
            }
            catch(Exception e){
                   System.err.println("Opening a file ..." + e);
		   e.printStackTrace() ;
            }
        } else {
            System.err.println("Open file cancelled, or error!");
        }
    }

    private void jMenuFileQuitActionPerformed(java.awt.event.ActionEvent evt) {
        System.exit(0);
    }

    private void jMenuRunSafetyActionPerformed(java.awt.event.ActionEvent evt) {
	jMenuRunTracer(evt, 1, 1);
    }

    private void jMenuRunWCETPSActionPerformed(java.awt.event.ActionEvent evt) {
	jMenuRunTracer(evt, 2, 1);
    }
    private void jMenuRunWCETPSNoWitActionPerformed(java.awt.event.ActionEvent evt) {
	jMenuRunTracer(evt, 2, 2);
    }
    private void jMenuRunWCETPIActionPerformed(java.awt.event.ActionEvent evt) {
	jMenuRunTracer(evt, 2, 3);
    }

    private void jMenuRunSlicingPSActionPerformed(java.awt.event.ActionEvent evt) {
	jMenuRunTracer(evt, 3, 1);
    }
    private void jMenuRunSlicingPSNoWitActionPerformed(java.awt.event.ActionEvent evt) {
	jMenuRunTracer(evt, 3, 2);
    }
    private void jMenuRunSlicingPIActionPerformed(java.awt.event.ActionEvent evt) {
	jMenuRunTracer(evt, 3, 3);
    }

    private void jMenuHelpAboutActionPerformed(java.awt.event.ActionEvent evt) {
        String message = "TRACER 0.1 \n" +
                         "National University of Singapore \n" +
	                 "Joxan Jaffar, Vijay Murali, Jorge Navas, and Andrew Santosa\n" +
                         "(C)2010 \n";
        JOptionPane.showMessageDialog(innerPane,message,"About",
                                      JOptionPane.PLAIN_MESSAGE);

    }

    private void jMenuRunTracer(java.awt.event.ActionEvent evt, int app, int opt) {
	/** This method runs TRACER  (method defined in Tracer.java)
	 *  @app app the application: 1 safety, 2 WCET, and 3 Slicing
         *  @opt opt the app options: 1 default,2: w/witnesses, and 3 path-insensitive
	 **/ 

	/////////////////////////////////////////////////////////////
	// To run TRACER
	/////////////////////////////////////////////////////////////
        String tracerCmd = "src/clpr/bin/tracer";
	/////////////////////////////////////////////////////////////
	// To run ZGRViewer
	/////////////////////////////////////////////////////////////
        String ZGRCmd = "src/java/GUIFrontEnd/zgrviewer/run.sh";
	/////////////////////////////////////////////////////////////

	if (fileChosen){
	    // Dump execution traces on the right panel	    
	    Process p = null;
	    String strLine = null;
	    try{
		p = new Tracer().runProgram(this.selectedFile,app,opt,tracerCmd);
		System.out.println("Came back from Tracer class.");
		try{
		    // Here we dump the tracer verbose output
		    InputStream in = p.getInputStream();
		    BufferedReader br = new BufferedReader(new InputStreamReader(in));
		    jTextAreaOutput.setText(null);
		    while ((strLine = br.readLine()) != null) {
			jTextAreaOutput.append(strLine + "\n");
			
	   	    }
		} catch(Exception e){
		    System.err.println("Opening a file ..." + e);
		    e.printStackTrace() ;
		}
		System.out.println("Dumped the output.");

		// Here we get the .dot file generated by TRACER
		String tracerOutput = null;
		String basePathName = null;
		try{
		    basePathName = this.selectedFile.getCanonicalPath().substring(0, 
				   this.selectedFile.getCanonicalPath().lastIndexOf('.')); 
		}
		catch (IOException e) {
		    System.err.println("Getting the basename of the program." + e);
		    e.printStackTrace() ;	    
		}	  
		
		switch (app) {
		case 1 /*safety*/: 
                    // We don't show *_STS.dot
		    tracerOutput = new String(basePathName + ".clp"  + "_GRAPH.dot") ;	       
		    break;
		case 2/*wcet*/: 
                    // We don't show *_STS.dot
		    tracerOutput = new String(basePathName + ".clp"  + "_GRAPH.dot") ;
		    break;
		case 3/*slicer*/: 
                    // We don't show *_STS.dot
		    // We don't show *_GRAPH.dot
		    tracerOutput = new String(basePathName + ".clp"  + "_Sliced_STS.dot") ;
		    break;
		default: 
		    System.err.println("Application not recognized.");
		    break;
		}
		    
		if (tracerOutput != null){		    
		    // ** Using ZGRViewer
		    try{	
			System.out.println("Executing " + ZGRCmd + " " + tracerOutput);		     
			Runtime.getRuntime().exec(ZGRCmd + " " + tracerOutput);			    
		    }
		    catch (Exception e){
			System.err.println("An error occurred executing ZGRViewer.") ;
			e.printStackTrace() ;
		    }                         
		    // OLD graphical packages used.
		    // ** Using grappa + java_cup 
		    // - Dot
		    //new GrappaUI().showGraph(tracerOutput, jScrollPaneTree); 
		    // ** Using JUNG
		    // JungUI jungUI         = new JungUI();
		    // - GraphML
		    // JungGraphMLFormat j = new JungGraphMLFormat();
		    // - Pajek
		    // JungPajekFormat j = new JungPajekFormat();
		    // Graph g               = j.getGraph(traceFile.getCanonicalPath());
		    // VisualizationViewer vv = jungUI.drawGraph(g);			
		    // jScrollPaneTree = new GraphZoomScrollPane(vv);
		    // jSplitPane1.setRightComponent(jScrollPaneTree);   		    
		}
		else
		    jTextAreaTree.setText("Make sure that .dot files exist.\n");		
	}
	catch (UserOptionError e){
	    System.err.println("An error occurred reading user options") ;
	    e.printStackTrace() ;
	}
    }
    else{
	String message = "You need to select a file \n";
	JOptionPane.showMessageDialog(innerPane,message,"Run program",
					  JOptionPane.WARNING_MESSAGE);	
    }	
}// End method

} // End class

class CFilter extends javax.swing.filechooser.FileFilter {
    public boolean accept(File file) {
	String filename = file.getName();
	return (file.isDirectory() || filename.endsWith(".c"));
    }
    public String getDescription() {
	return "*.c";
    }
}


