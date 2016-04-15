import java.io.*;
import java.util.*;
import java.util.regex.Pattern;
import java.util.regex.Matcher;

public class Usedef {

	final Pattern pat1 = Pattern.compile("\\[Elem\\] (\\d+) : .+( : .+)?");
	final Pattern pat2 = Pattern.compile("\\[Elem\\] (\\d+) \\(.+:(\\d+)\\) : .+");
	final Pattern pat3 = Pattern.compile("-\\[[a-][c-]d\\](\\(.+\\))?-> (\\d+)");
	final Pattern pat4 = Pattern.compile("\\[pdg\\] RESULT for (.+):");
	
	final boolean DEBUG = false;

	Map<Integer,Set<Integer>> pdg1, pdg2, ser;

	public static void main(String args[]) {
		new Usedef().run(args);
	}

	void run(String args[]) {
		if(args.length != 3)
			usage();

		File f1 = new File(args[0]);
		File f2 = new File(args[1]);
		File f3 = new File(args[2]);

		if(!(f1.exists() && f2.exists() && f3.exists()))
			fatal("731230");

		/* read files */
		try {
			pdg1 = parse(f1);
			pdg2 = parse(f2);

			FileInputStream fis = new FileInputStream(f3);
			ObjectInputStream ois = new ObjectInputStream(fis);
			Map<Integer,Vector<String>> tmp = (Map<Integer,Vector<String>>) ois.readObject();
			ser = new TreeMap<Integer,Set<Integer>>();
			for(Integer i : tmp.keySet())
				ser.put(i, getlines(tmp.get(i)));

			println(pdg1);
			println(pdg2);
			println(ser);

			for(Integer pp : ser.keySet()) {
				Set<Integer> images = ser.get(pp);
				Set<Integer> dep = pdg1.get(pp);
				if(dep == null) continue;
				Set<Set<Integer>> R = getR(dep);

				int m = dep.size();
				int n = mark(images, R);

				if(n > m)
					fatal(String.format("FAIL! we make n(%d) > m(%d) at pp:%d", n,m,pp));

				println(pp + " " + m + " " + n);
			}

			debug("DONE!");
		}
		catch(Exception e) { fatal("861093: " + e.getMessage()); }
	}

	int mark(Set<Integer> images, Set<Set<Integer>> in_R) {
		Set<Set<Integer>> R = new HashSet<Set<Integer>>();
		for(Set<Integer> Rs : in_R) {
			TreeSet<Integer> T = new TreeSet<Integer>();
			for(Integer i : Rs) T.add(i);
			R.add(T);
		}

		debug(images + "::" + R);
		for(Integer pp : images) {
			Set<Integer> dep = pdg2.get(pp);
			if(dep == null) continue; /* fatal("223858: " + pp); */
			debug(pp + "##" + dep);

			/* for every pp in dep... */
			for(Integer pp2 : dep) {
				/* ... mark the set in R which contains pp */
				for(Set<Integer> Rs : R)
					if(Rs.contains(pp2)) {
						Rs.add(-1404); /* to signify marking */
						break;
					}
			}
		}

		/* return no. of sets that contain -1 (marked sets) */
		int count = 0;
		for(Set<Integer> Rs : R)
			if(Rs.contains(-1404)) count++;
		return count;
	}

	Set<Set<Integer>> getR(Set<Integer> dep) {
		Set<Set<Integer>> R = new HashSet<Set<Integer>>();
		if(dep == null) fatal("112315");
		for(Integer pp : dep)
			if(ser.get(pp) == null) continue;
			else R.add(ser.get(pp));
		return R;
	}

	Map<Integer,Set<Integer>> parse(File f) throws Exception {
		Vector<Dependence> fdgs = new Vector<Dependence>();
		Scanner sc = new Scanner(f);
		Dependence currfunc = null;
		Integer currelem = null;

		while(sc.hasNext()) {
			String line = sc.nextLine().trim();
			Matcher m1 = pat1.matcher(line);
			Matcher m2 = pat2.matcher(line);
			Matcher m3 = pat3.matcher(line);
			Matcher m4 = pat4.matcher(line);

			if(m1.matches()) {
				currelem = null; /* ignore any dependency info */
			}
			else if(m2.matches()) {
				Integer i = Integer.parseInt(m2.group(1));
				Integer j = Integer.parseInt(m2.group(2));
				currfunc.addElem(i, j);
				currelem = i;
			}
			else if(m3.matches()) {
				currfunc.addDependency(currelem, Integer.parseInt(m3.group(2)));
			}
			else if(m4.matches()) {
				if(currfunc != null) {
					currfunc.compile();
					fdgs.add(currfunc);
				}
				currfunc = new Dependence(m4.group(1));
			}
			else fatal("697121");
		}

		/* add last parsed function */
		if(currfunc != null) {
			currfunc.compile();
			fdgs.add(currfunc);
		}

		/* merge fdgs into one pdg */
		Map<Integer,Set<Integer>> pdg = new TreeMap<Integer,Set<Integer>>();
		for(Dependence d : fdgs)
			pdg.putAll(d.fdg);

		return pdg;
	}

	Set<Integer> getlines(Vector<String> v) {
		Set<Integer> ret = new TreeSet<Integer>();
		try {
			for(int i = 1 /* func name is first element */; i < v.size(); i++)
				ret.add(Integer.parseInt(v.elementAt(i)));
		} catch(Exception e) { fatal("986494: " + e.getMessage()); }

		return ret;
	}

	void debug(Object o) {
		if(DEBUG) println(o);
	}

	void println(Object o) {
		System.out.flush();
		System.err.flush();

		System.out.println(o.toString());
	}

	void fatal(Object o) {
		System.out.flush();
		System.err.flush();

		System.err.println("fatal error: " + o.toString());
		System.exit(1);
	}

	void usage() {
		debug("usage: java Usedef pdg1.out pdg2.out linenumber.ser");
		debug("to generate linenumber.ser, decompile the program");
		System.exit(0);
	}
}

class Dependence {
	
	Map<Integer,Integer> elemToLNo;
	Map<Integer,Set<Integer>> dep; /* dependency info of the form: elem -> set of elem */
	public Map<Integer,Set<Integer>> fdg; /* dependency info of the form: lno -> set of lno */
	public String func;

	public Dependence(String func) {
		this.func = func;
		elemToLNo = new TreeMap<Integer,Integer>();
		dep = new TreeMap<Integer,Set<Integer>>();
	}

	public void addElem(Integer elem, Integer lNo) {
		if(elem == null) return;
		elemToLNo.put(elem, lNo);
	}

	public void addDependency(Integer elem1, Integer elem2) {
		if(elem1 == null) return;
		if(dep.get(elem1) == null)
			dep.put(elem1, new TreeSet<Integer>());
		dep.get(elem1).add(elem2);
	}

	/* compiles elemToLNo and dep information into fdg */
	public void compile() {
		fdg = new TreeMap<Integer,Set<Integer>>();

		for(Integer elem : elemToLNo.keySet()) {
			Integer lNo = elemToLNo.get(elem);

			Set<Integer> lNos = getLNos(dep.get(elem));
			if(fdg.get(lNo) == null)
				fdg.put(lNo, lNos);
			/* sometimes same line no. is associated with multiple elems 
			 * so union in case that happens */
			else
				fdg.get(lNo).addAll(lNos);
		}
	}

	/* returns list of lNos representing elems (could be not in order) */
	Set<Integer> getLNos(Set<Integer> elems) {
		Set<Integer> lNos = new TreeSet<Integer>();
		if(elems != null)
			for(Integer e : elems)
				if(elemToLNo.get(e) != null)
					lNos.add(elemToLNo.get(e));

		return lNos;
	}
}
