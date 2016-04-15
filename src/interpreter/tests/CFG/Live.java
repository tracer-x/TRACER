import java.util.*;
import java.io.*;

public class Live {

	static Map<Integer,Vector<String>> lineMap;

	public static void main(String args[]) {
		if(args.length != 4)
			usage();

		File cillied = new File(args[0]);
		File decompd = new File(args[1]);
		File seriald = new File(args[2]);

		if(!(cillied.exists() && decompd.exists() && seriald.exists()))
			fatal("cillied or decompd or seriald file not found!");
		
		try {
			FileInputStream fis = new FileInputStream(seriald);
			ObjectInputStream ois = new ObjectInputStream(fis);
			lineMap = (TreeMap<Integer,Vector<String>>) ois.readObject();
		}
		catch(Exception e) {
			fatal("could not recreate object from serialized file");
		}

		// READ FILE TO MAP
		Vector<String> cilliedProg = new Vector<String>();
		Vector<String> decompdProg = new Vector<String>();

		try {
			Scanner sc = new Scanner(cillied);
			while(sc.hasNext())
				cilliedProg.add(sc.nextLine());
			sc.close();

			sc = new Scanner(decompd);
			while(sc.hasNext())
				decompdProg.add(sc.nextLine());
			sc.close();
		} catch (Exception e) { fatal("72351"); }

		for(Integer lineNum : lineMap.keySet()) {
			debug(".");
			File f1 = new File(cillied + "_" + lineNum + ".c");
			File f2 = new File(decompd + "_" + lineNum + ".c");
			try {
				// write cillied file with TRACER_LABEL label
				BufferedWriter bw = new BufferedWriter(new FileWriter(f1));
				for(int i = 0; i < cilliedProg.size(); i++) {
					if(i+1 == lineNum) {
						bw.write("TRACER_LABEL:");
						bw.newLine();
					}
					bw.write(cilliedProg.elementAt(i));
					bw.newLine();
				}
				bw.close();
				
				// write decompd file with TRACER_LABEL label(s)
				bw = new BufferedWriter(new FileWriter(f2));
				Vector<Integer> lineNums = getLineNums(lineNum);
				for(Integer i = 0; i < decompdProg.size(); i += 1) {
					if(lineNums.contains(i+1)) {
						bw.write("TRACER_LABEL:");
						bw.newLine();
					}
					bw.write(decompdProg.elementAt(i));
					bw.newLine();
				}
				bw.close();
			}
			catch(Exception e) { fatal("625103: " + e.getMessage()); }

			runLivesolo(f1, f2, getFunc(lineNum), lineNum, /*dir*/args[3]);
			f1.delete();
			f2.delete();
		}
	}

	static void runLivesolo(File f1, File f2, String func, Integer lineNum, String dir) {
		try {
			Vector<String> cmd = new Vector<String>();
			cmd.add("livesolo");
			cmd.add(f1.getAbsolutePath());
			cmd.add(f2.getAbsolutePath());
			cmd.add(func);
			cmd.add(lineNum.toString());
			cmd.add(dir);

			ProcessBuilder pb = new ProcessBuilder(cmd);
			Process p = pb.start();
			p.waitFor();
		}
		catch(Exception e) { fatal("482812: " + e.getMessage()); }
	}

	static Vector<Integer> getLineNums(Integer lineNum) {
		if(lineMap.get(lineNum) == null)
			fatal("263821");
		
		Vector<String> lineNums = lineMap.get(lineNum);
		Vector<Integer> ret = new Vector<Integer>();
		for(int i = 1 /* first element is func name */; i < lineNums.size(); i++) {
			try {
				ret.add(Integer.parseInt(lineNums.elementAt(i)));
			}
			catch (Exception e) { fatal("726512"); }
		}
		return ret;
	}

	static String getFunc(Integer lineNum) {
		return lineMap.get(lineNum).elementAt(0).substring(5);
	}

	static void fatal(Object o) {
		System.out.flush();
		System.err.flush();

		System.out.println("fatal error: " + o.toString());
		System.exit(1);
	}

	static void debug(Object o) {
		System.out.flush();
		System.err.flush();

		System.out.print(o.toString());
	}

	static void usage() {
		System.out.println("usage: java Live <cillied.c> <decompd.c> <serializedmap>\nTo generate <serializedmap> first decompi the program");
		System.exit(0);
	}
}
