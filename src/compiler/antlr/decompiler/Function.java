package decompiler;

import java.util.*;
import compiler.*;

public class Function {

	Vector<Vertex> vertices = new Vector<Vertex>();
	Map<Vertex, String> calls = new HashMap<Vertex, String>();
	ClauseFactory cf;

	String name = "";
	String body = "";

	public Function(String name, ClauseFactory cf) {
		this.name = name;
		this.cf = cf;
	}

	public void add(Vertex v) {
		vertices.add(v);
	}

	public void addCall(Vertex v, String func) {
		calls.put(v, func);
	}

	public Vector<Vertex> getVertices() {
		return vertices;
	}

	public Map<Vertex, String> getCalls() {
		return calls;
	}

	public ClauseFactory getFac() {
		return cf;
	}

	public String getName() {
		return name;
	}
	
	public void println(String s) {
		body += s + "\n";
	}

	public void print(String s) {
		body += s;
	}

	public boolean equals(Object o) {
		if(this == o)
			return true;
		if(!(o instanceof Function))
			return false;

		Function c = (Function) o;
		Vector<Vertex> vertices_c = c.getVertices();
		Map<Vertex, String> calls_c = c.getCalls();

		if(vertices.size() != vertices_c.size())
			return false;
		if(calls.size() != calls_c.size())
			return false;

		int i = 0;
		for(Vertex v : vertices) {
			if(!v.equals(vertices_c.elementAt(i++)))
				return false;
			if(calls.containsKey(v) && (!calls_c.containsKey(v)
								|| calls.get(v).compareTo(calls_c.get(v)) != 0))
				return false;
		}

		return true;
	}

	public int hashCode() {
		return 0;
	}

	public String declareVars() {
		String ret = "";

		for(Variable v : cf.getVariables()) {
			if(v.getCurrentName().compareTo("ReturnValue") != 0
				&& !cf.getParams().contains(v))
				if(cf.getPointerVariables().contains(v))
					ret += "\tint *" + v + ";\n";
				else
					ret += "\tint " + v + ";\n";
		}
		
		for(Variable v : cf.getArrayVariables())
			ret += "\tint " + v + "[" + cf.arraySizes.get(v) + "];\n";

		return ret;
	}

	private String declareParams() {
		String ret = "";
		Iterator<Variable> i = cf.getParams().iterator();
		while(i.hasNext()) {
			Variable v = i.next();
			if(cf.getPointerVariables().contains(v))
				ret += "int *" + v;
			else
				ret += "int " + v;

			if(i.hasNext())
				ret += ", ";
		}

		return ret;
	}
	
	public String toString() {
		String tab = "";
		String ret = "int " + name + "(" + declareParams() + ") ";
		ret += "{\n";
		ret += declareVars();
		ret += body;
		ret += "\treturn RetVal;\n";
		ret += "}\n";

		return ret;
	}
}
