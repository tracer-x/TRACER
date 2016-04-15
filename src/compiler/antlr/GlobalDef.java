package compiler;
import java.util.*;

public class GlobalDef {
    private static Vector<String> v = new Vector<String>();
    private static TreeMap<Pair<String>, Integer> StructToInd =
        new TreeMap<Pair<String>, Integer>();
    //map from variable name to the name of its structure type
    private static TreeMap<String, String> StructNames = 
        new TreeMap<String, String>();
	// map from variable name to structure name
	private static TreeMap<String, String> StructVars =
		new TreeMap<String, String>();

	// note: resets STATIC data only!
	public static void reset() {
		v = new Vector<String>();
		StructToInd = new TreeMap<Pair<String>, Integer>();
		StructNames = new TreeMap<String, String>();
		StructVars = new TreeMap<String, String>();
	}

    public static Vector<String> getV(){
        return v;
    }
    public static void add(String s){
        v.add(s);
    }
    //add a new instance to the mapping of (StructName X MemberName -> Index)
    public static void addStructMember(String structName, String memName, int Ind){
        StructToInd.put(new Pair<String>(structName, memName), new Integer(Ind));
    }
    //get the index of a member of a struct
    public static int getStructMemberInd(String varName, String memName){
		String structName = StructVars.get(varName);
		if(structName == null) {
			varName = Character.toLowerCase(varName.charAt(0))
							+ varName.substring(1);
			structName = StructVars.get(varName);
		}
		if(structName == null) {
			DEBUG.println(varName + " is not valid struct" + memName);
			return 1987;
		}

        Integer ret = StructToInd.get(new Pair<String>(structName, memName));
		DEBUG.println(varName + ":" + structName + "[" + ret + "] is " + memName);
		if(ret == null) 
			return 1988;
        return ret.intValue();
    }
    public static void addNameForStruct(String name, String struct){
		name = Character.toLowerCase(name.charAt(0)) + name.substring(1);
        StructNames.put(name, struct);
		DEBUG.println(name + " is the name for " + struct);
    }
    public static String getStructFromName(String name){
		String s = StructNames.get(name);
		if(s != null)
			return s;
		s = "" + Character.toLowerCase(name.charAt(0)) + name.substring(1);
        return StructNames.get(s);
    }
	public static void addStructVariable(String var, String name) {
		String struct = getStructFromName(name);
		DEBUG.println(var + " is of struct " + struct + " referred to by " + name);
		StructVars.put(var, struct);
	}
}
