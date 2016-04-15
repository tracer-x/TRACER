package crystal.general;

public class FileSymtab extends HashSymtab {
	private static final long serialVersionUID = 3618700811757499960L;
	
	/** The file name. */
	String file;
	
    public FileSymtab(String file) {
    	this.file = file;
    }
    
    public String getFileName() {
    	return file;
    }
    
    public String description() {
    	return "file " + file;
    }
}


