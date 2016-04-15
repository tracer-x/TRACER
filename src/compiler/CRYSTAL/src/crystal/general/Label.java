package crystal.general;

import crystal.ast.*;

public class Label extends Symbol {
	private static final long serialVersionUID = 3977863990124819766L;
        
	/**	The label statement this is pointing to. */
	private LabelStat label;
	
	public Label(String name) {
		super(name, null, Flags.LABEL, Flags.NONE, 0);
	}

	public void setLabelStat(LabelStat label) {
		this.label = label;
		setStatus(Flags.COMMON);
	}
	
	public LabelStat getLabelStat() {
		return label;
	}
}
