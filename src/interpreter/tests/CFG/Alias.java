import java.util.*;
import java.io.*;

public class Alias {
	public static void main(String args[]) {
		if(args.length != 2)
			FATAL("give 2 files as input");
		File f1 = new File(args[0]), f2 = new File(args[1]);

		if(!f1.exists() || !f2.exists())
			FATAL("alias1.out or alias2.out not found");

		Scanner sc1 = null, sc2 = null;
		try {
			sc1 = new Scanner(f1); sc2 = new Scanner(f2);
		} catch(Exception e) { FATAL("xception occurred"); }

		Vector<EC> v1 = new Vector<EC>(), v2 = new Vector<EC>();

		while(sc1.hasNext())
			v1.add(new EC(sc1.nextLine()));
		while(sc2.hasNext())
			v2.add(new EC(sc2.nextLine()));

		/* old method - obsolete now
		Vector<EC> in1not2 = new Vector<EC>(), in2not1 = new Vector<EC>();
		for(EC ec : v1)
			if(!v2.contains(ec))
				in1not2.add(ec);

		for(EC ec : v2)
			if(!v1.contains(ec))
				in2not1.add(ec);

		File out = new File("acompare.out");
		try {
			BufferedWriter bw = new BufferedWriter(new FileWriter(out));
		
			bw.write("in1not2"); bw.newLine();
			bw.write("==========================================================="); bw.newLine();
			for(EC line : in1not2) {
				bw.write(line.toString()); bw.newLine();
			}
			bw.newLine();
			bw.newLine();
			bw.newLine();
			bw.write("in2not1"); bw.newLine();
			bw.write("==========================================================="); bw.newLine();
			for(EC line : in2not1) {
				bw.write(line.toString()); bw.newLine();
			}

			bw.close();
		} catch(Exception e) { FATAL("exception occurred"); }
		*/
		int total1 = 0;
		float avg1 = 0;
		println("No. of EC's in 1: " + v1.size());
		System.out.print("No. of elements in each EC:\n[ ");
		for(EC ec : v1) {
			System.out.print(ec.elems.size() + " ");
			total1 += (ec.elems.size() * ec.elems.size()-1)/2;
			avg1 += (float) ec.elems.size();
		}
		println("]\n#### TOTAL1 : " + total1 + " ####");
		println("#### AVERAGE1 : " + avg1/(float)v1.size() + " ####");

		int total2 = 0;
		float avg2 = 0;
		println("No. of EC's in 2: " + v2.size());
		System.out.print("No. of elements in each EC:\n[");
		for(EC ec : v2) {
			System.out.print(ec.elems.size() + " ");
			total2 += (ec.elems.size() * ec.elems.size()-1)/2;
			avg2 += (float) ec.elems.size();
		}
		println("]\n#### TOTAL2 : " + total2 + " ####");
		println("#### AVERAGE2 : " + avg2/(float)/* should divide by v1 size */v1.size() + " ####");

		float improv = ((float)total1 - (float)total2)/(float)total1;
		if(total1 > total2)
			println("#### % improvement : " + improv*100 + " ####");
		else
			println("not showing improvement.. check if ROM EC is removed from both outputs");

		println("DONE!");
	}

	static void FATAL(String s) {
		println(s);
		System.exit(1);
	}

	static void println(String s) {
		System.out.println(s);
	}
}

class EC {
	
	public Vector<String> elems;

	public EC(String s) {
		elems = new Vector<String>();
		s = s.trim(); // remove spaces
		s = s.substring(1, s.length()-1); // remove [ ]
		StringTokenizer tokens = new StringTokenizer(s, ",");
		while(tokens.hasMoreTokens())
			elems.add(tokens.nextToken().trim());
	}

	public boolean equals(Object o) {
		if(this == o) return true;
		if(!(o instanceof EC)) return false;

		EC e = (EC) o;
		for(String s : elems)
			if(!e.elems.contains(s)) return false;

		for(String s : e.elems)
			if(!elems.contains(s)) return false;

		return true;
	}

	public int hashCode() { return 0; }

	public String toString() {
		if(elems.size() == 0) return "";
		String s = "";
		for(String e : elems) s += e + ",";
		return s.substring(0, s.length()-1);
	}
}
