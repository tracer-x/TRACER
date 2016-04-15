package compiler;

/**
 * Class that implements a logic variable in the transition system. Class ClauseFactory will create
 * constraints on such variables.
 */
public class Variable implements Comparable<Variable> {
	private String name;

	private Number initialValue;

	public Variable(String name, Number initialValue) {
		setName(name);
		setInitialValue(initialValue);
	}

	public Variable(String name) {
		this(name, 0);
	}

	public int compareTo(Variable v) {
		return getCurrentName().compareTo(v.getCurrentName());
	}

	public boolean equals(Object v) {
		if(this == v) return true;
		if(!(v instanceof Variable)) return false;
		Variable var = (Variable) v;

		// two variables are the same (in CLPR sense) iff their names are exactly the same
		// IGNORING the case of the first letter in both variables
		// so we have to compare currentNames. not names.
		return (getCurrentName().compareTo(var.getCurrentName()) == 0);
	}

	public int hashCode() {
		return 0;
	}

	public void setName(String name) {
		this.name = name;
	}

	public String getName() {
		return name;
	}

	public void setInitialValue(Number initialValue) {
		// this.initialValue = initialValue;
		// vijay - testing if initialValue is really needed
		this.initialValue = 0;
	}

	public Number getInitialValue() {
		return initialValue;
	}

	public String getCurrentName() {
		if(name.compareTo("_") == 0)
			return "_";
		return Character.toUpperCase(name.charAt(0))
				+ name.substring(1, name.length());
	}

	public String getNextName() {
		if(name.compareTo("_") == 0)
			return "_";
		return getCurrentName() + "$Next$";
	}

	public String getSymbolicCurrentName() {
		if(name.compareTo("_") == 0)
			return "_";
		return "S" + Character.toUpperCase(name.charAt(0))
				+ name.substring(1, name.length());
	}

	public String getSymbolicNextName() {
		if(name.compareTo("_") == 0)
			return "_";
		return getSymbolicCurrentName() + "$Next$";
	}

	public String toString() {
		return getCurrentName();
	}

} // end class Variable

