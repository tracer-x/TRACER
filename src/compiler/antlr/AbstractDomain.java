package compiler;

import java.util.*;
import java.io.*;
import java.util.regex.*;

public class AbstractDomain {
    File file;

    static Map<String,Invariants> loop_invariants;

    public AbstractDomain(String file) {
        File f = new File(file);
        if(!f.exists())
            FATAL.error("file " + file + " does not exist");
        this.file = f;
        loop_invariants = new HashMap<String,Invariants>();
    }

    public boolean initLoopInvariants(String func) {
		if(OPTIONS.ABSTRACT_DOMAIN == 0)
			FATAL.error("544212");
        if(loop_invariants.get(func) != null)
            FATAL.error("544213");

        File outfile = new File(file.getAbsolutePath() + "." + func + ".pl");

        boolean pass;
        if(!ad_frontend(func, outfile.getAbsolutePath())) {
            loop_invariants.put(func, new Invariants());
            pass = false;
        }
        else if(!OPTIONS.HEAVYWEIGHT_INVARIANTS) {
            loop_invariants.put(func, ad_invariants(outfile.getAbsolutePath(), func.equals("main")));
            pass = true;
        }
        else {
            loop_invariants.put(func, ad_heavyweight_invariants(outfile.getAbsolutePath(), func.equals("main")));
            pass = true;
        }

        outfile.delete();
        return pass;
    }

    public static Vector<Vector<String>> getLoopInvariants(String func) {
        func = func.substring(5); /* remove "func_" */
        Invariants i = loop_invariants.get(func);
        if(i == null)
            FATAL.error("66315");
        return i.getLoopInvariants();
    }

    private String c2clpr(String inv) {
        inv = inv.replaceAll("=<", "<=");

        /* capitalize all words */
        StringBuilder result = new StringBuilder(inv.length());
        String delimiters = "+-*/(),. =<>";
        StringTokenizer st = new StringTokenizer(inv, delimiters, true);

        while (st.hasMoreTokens()) {
            String w = st.nextToken();
            char c = Character.toUpperCase(w.charAt(0));
            if(w.length() > 1)
                w = c + w.substring(1);
            else
                w = c + "";
            result.append(w);
        }
        return result.toString();
    }

    private String replaceAllWords(String original, String find, String replacement) {
        StringBuilder result = new StringBuilder(original.length());
        String delimiters = "+-*/(),. =<>";
        StringTokenizer st = new StringTokenizer(original, delimiters, true);

        while (st.hasMoreTokens()) {
            String w = st.nextToken();
            if (w.equals(find)) {
                result.append(replacement);
            } else {
                result.append(w);
            }
        }
        return result.toString();
    }

    private boolean ad_frontend(String func, String outfile) {
        Vector<String> cmd = new Vector<String>();
        cmd.add(OPTIONS.LIB_PATH + "/frontend");
        cmd.add("-domain"); cmd.add(OPTIONS.ABSTRACT_DOMAIN.toString());
        cmd.add("-o"); cmd.add(outfile);
        cmd.add("-main"); cmd.add(func);
        cmd.add(file.getAbsolutePath());

        try {
            ProcessBuilder pb = (new ProcessBuilder(cmd)).redirectErrorStream(true);
            System.out.print("running abstract domain " + OPTIONS.ABSTRACT_DOMAIN + 
                                " on function: " + func + "... ");
            System.out.flush();

            Process p = pb.start();
            BufferedReader br = new BufferedReader(new InputStreamReader(
                                    p.getInputStream()));
            while(br.readLine() != null);
            p.waitFor();
            if(p.exitValue() != 0 || !((new File(outfile)).exists())) {
                System.out.println("failed! using TRACER's invariants for its loops");
                return false;
            }
        } catch(Exception e) { FATAL.error("26193:" + e.getMessage()); }
        System.out.println("done!");
        return true;
    }

    private Invariants ad_invariants(String f, boolean isMain) {
        Map<String,String> vars = null;
        File outfile = new File(f);
        if(!outfile.exists())
            FATAL.error("871971");

        Vector<String> lines = new Vector<String>();
        try {
            BufferedReader br = new BufferedReader(new FileReader(f));
            String line;
            while((line = br.readLine()) != null) {
                if(line.startsWith("var2names")) {
                    if(vars != null)
                        FATAL.error("871974");

                    /* MUST be TreeMap, else order of keys will be messed up */
                    vars = new TreeMap<String,String>();
                    int idx1 = line.indexOf('[') + 1;
                    int idx2 = line.lastIndexOf(']');

                    String s = line.substring(idx1, idx2);
                    s = s.replaceAll("[\\[\\]\\(\\),']", "");
                    StringTokenizer tok = new StringTokenizer(s);
                    while(tok.hasMoreTokens()) {
                        String clpname = tok.nextToken(); /* V0, V1 etc */
                        String cname = tok.nextToken(); /* x, y etc */

                        vars.put(clpname, cname);
                    }
                }
                else if(line.startsWith("strengthening"))
                    lines.add(line);
            }
            br.close();
        }
        catch(Exception e) {
            FATAL.error("871972");
        }
        if(vars == null)
            FATAL.error("871973");

        Invariants invariants = new Invariants();
        Collections.reverse(lines);

        for(String line: lines) {
            /* if we don't do this, problem occurs when there are actually
             * variables V1, V2 etc in the C program */
            line = line.replaceAll("V", "#V");
            int idx1 = line.indexOf('[') + 1;
            int idx2 = line.lastIndexOf(']');
            String s = line.substring(idx1, idx2);

            /* quick fix: store in a temp list the keys in ascending
             * order and reverse it */
            Vector<String> keys = new Vector<String>();
            Iterator<String> i = vars.keySet().iterator();
            while(i.hasNext()) keys.add(i.next());
            Collections.reverse(keys);

            for(String r: keys)
                s = s.replaceAll("#"+r, vars.get(r));

            if(s.contains("#")) FATAL.error("871975");
            
            if(isMain && OPTIONS.WP_COMPILATION) {
                for(String lvar : PrologEmitter.liftedVars)
                    s = replaceAllWords(s, lvar, "func_main$VAR$" + lvar + "$");
            }

            StringTokenizer tok = new StringTokenizer(s, ",");
            Vector<String> invs = new Vector<String>();
            while(tok.hasMoreTokens()) {
                String t = removeZeroCoefficient(tok.nextToken());
                String inv = c2clpr(t).trim();
                if(inv.contains("ADNONDET") || invs.contains(inv))
                    continue;
                invs.add(inv);
            }

            invariants.addLoopInvariants(invs);
        }

        return invariants;
    }

    // remove terms with 0 as coefficient. eg: 0*X + Y > 2*Z ==> Y > 2*Z
    String removeZeroCoefficient(String s) {
        s = s.replaceAll("\\(\\s*0\\s*\\)\\s*\\*\\w+\\s*[+-]", "");
        
        // sanity check
        if(s.contains("( 0)*")) FATAL.error("170960");
        return s;
    }

    private Invariants ad_heavyweight_invariants(String f, boolean isMain) {
        Vector<String> lines = new Vector<String>();
        Vector<String> cmd = new Vector<String>();
        cmd.add(OPTIONS.LIB_PATH + "/invgen");
        cmd.add(f);

        try {
            ProcessBuilder pb = new ProcessBuilder(cmd);
            DEBUG.println("running abstract domain on the program: "
                    + pb.command());

            Process p = pb.start();
            BufferedReader br = new BufferedReader(new InputStreamReader
                    (p.getInputStream()));
            p.waitFor();

            String line;
            Pattern pat = Pattern.compile("#pc\\(.*\\): \\[(.*)\\]");
            while((line = br.readLine()) != null) {
                if(!line.startsWith("#pc")) continue;
                Matcher m = pat.matcher(line);
                if(!m.matches())
                    FATAL.error("ad_heavyweight_invariants improper line format: " + line);
                lines.add(m.group(1));
            }
        } catch(Exception e) { FATAL.error("26194:" + e.getMessage()); }

        if(lines.size() <= 0)
            DEBUG.warn("no invariants found in " + f);
        DEBUG.println("LINES WITH INVS: " + lines);

        Collections.reverse(lines);
        Invariants loopinvs = new Invariants();
        for(String i: lines) {
            if(isMain && OPTIONS.WP_COMPILATION) {
                for(String lvar : PrologEmitter.liftedVars)
                    i = replaceAllWords(i, lvar, "func_main$VAR$" + lvar + "$");
            }

            StringTokenizer t = new StringTokenizer(i, ",");
            Vector<String> invs = new Vector<String>();

            while(t.hasMoreTokens()) {
                String inv = t.nextToken();
                if(inv.contains("ADNONDET")) continue;
                invs.add(c2clpr(inv));
            }
            loopinvs.addLoopInvariants(invs);
        }

        return loopinvs;
    }

    boolean character(char c) {
        return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
    }

    boolean small(char c) {
        return (c >= 'a' && c <= 'z');
    }
}

/* invariants for a single function (i.e., many loops) */
class Invariants {
    Vector<Vector<String>> invs;

    public Invariants() {
        invs = new Vector<Vector<String>>();
    }

    public void addLoopInvariants(Vector<String> i) {
        invs.add(i /* list of invs for a single loop */);
    }

    /* returns invariants of all loops */
    public Vector<Vector<String>> getLoopInvariants() {
        return invs;
    }

    public int numLoops() {
        return invs.size();
    }

    public String toString() {
        return invs.toString();
    }
}
