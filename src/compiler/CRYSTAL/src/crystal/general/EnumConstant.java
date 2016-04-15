package crystal.general;

import crystal.ast.*;

/** A constant var symbol. Typically, an enumeration constant. */
public class EnumConstant extends Symbol {
	private static final long serialVersionUID = 3834596499760887859L;

	private Expression value;
	
	public EnumConstant(String name, Expression val) {
		super(name, null, Flags.VAR, Flags.DEFINED, 0);
		value = val;
	}

	public Expression getValue() {
		return value;
	}

	public void setValue(Expression value) {
		this.value = value;
	}	
}
