package crystal.general;

import java.io.*;
import java.util.*;

/** A source program location */
public class Loc implements Serializable {
	private static final long serialVersionUID = 5384207765069294494L;

	private String file;
	private int line;
	
	private Loc(String f, int l) {
		file = f;
		line = l;
	}
	
	private static Map<Loc,Loc> cache;
	public static Loc UNK;
	
	static {
		cache = new HashMap<Loc,Loc>();
		UNK = newLoc("unknown", -1);
	}

	public static Loc newLoc(String f, int l) {
		Loc loc = new Loc(f, l);
		Loc old = cache.get(loc);
		if (old == null) {
			cache.put(loc, loc);
			return loc;
		}
		else
			return old;
	}
	
	public String getFile() {
		return file;
	}

	public int getLine() {
		return line;
	}

	public boolean equals(Object obj) {
		if (!(obj instanceof Loc))
			return false;
		
		Loc other = (Loc)obj;
		return line == other.line && file.equals(other.file);
	}
	
	public int hashCode() {
		return file.hashCode() ^ line;
	}
	
	public String toString() {
		if (this == UNK) return "[unknown location]";
		return "\"" + file + "\":" + line;
	}
}
