package decompiler;
import compiler.*;

public class Vertex {

	String func, PP;
	int context;
	ClauseFactory fac;

	public Vertex(String ver) {
		try {
			func = ver.substring(0, ver.indexOf('@'));
			PP = ver.substring(ver.indexOf('@')+1, ver.indexOf('#'));
			context = Integer.parseInt(ver.substring(ver.indexOf('#')+1));

			fac = compiler.Main.emitter.factoryMap.get(func);
		}
		catch(Exception e) {
			FATAL.error("in parsing vertex from string " + ver + ":"
				+ e.getMessage());
		}
	}

	public Vertex(String func, String PP, int context) {
		this.func = func;
		this.PP = PP;
		this.context = context;

		fac = compiler.Main.emitter.factoryMap.get(func);
	}

	public String func() {
		return func;
	}

	public String PP() {
		return PP;
	}

	public int context() {
		return context;
	}

	public ClauseFactory fac() {
		return fac;
	}

	public Vertex sansContext() {
		return new Vertex(func, PP, -1);
	}

	public String toString() {
		if(context == -1)
			return func + "@" + PP;
		else
			return func + "@" + PP + "#" + context;
	}

	public boolean equals(Object o) {
		if(this == o)
			return true;
		if(!(o instanceof Vertex))
			return false;
		Vertex v = (Vertex) o;

		boolean contextless = (context == -1) || (v.context() == -1);
		return contextless ?
			((func.compareTo(v.func()) == 0) && (PP.compareTo(v.PP()) == 0))
			:
			((func.compareTo(v.func()) == 0) && (PP.compareTo(v.PP()) == 0)
						&& (context == v.context()));
	}

	public int hashCode() {
		return 0;
	}
}
