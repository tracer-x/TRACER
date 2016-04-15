package crystal.analysis.alias.demand;

import java.util.*;

import crystal.core.*;
import crystal.general.*;

public class PEGNode {
	
	public static final PEGNode[] EMPTY_ARRAY = new PEGNode[0];
	public static final Map<Integer, PEGNode> allNodes =
        new HashMap<Integer, PEGNode>();
	
	public final CoreExpr coreExpr;
    
    public int id;

	private PEGNode addr;
	private PEGNode deref;
	private PEGNode[] assignedTo;
	private PEGNode[] assignedFrom;
	
	private Map<Symbol, PEGNode> fields;
	private Symbol field;
	
	private Set<PEGNode> interfere;
	private boolean interfereComplete = false;
	
	private Set<PEGNode> fieldInterfere;
	
	/** Cache the computed points-to set for this node */
	public Set<PEGNode> ptSet;
	
	
	public PEGNode(CoreExpr coreExpr) {
		this.coreExpr = coreExpr;
		this.assignedFrom = EMPTY_ARRAY;
		this.assignedTo = EMPTY_ARRAY;
	}

	public PEGNode getAddr() {
		if (field != null) {
			return null;
		}
		
		return addr;
	}

	public void setAddr(PEGNode addr) {
		this.addr = addr;
		
		if (addr.getDeref() != this) {
			addr.setDeref(this);
		}
	}

	public PEGNode getDeref() {
		return deref;
	}

	public void setDeref(PEGNode deref) {
		this.deref = deref;
		
		if (deref.getAddr() != this) {
			deref.setAddr(this);
		}
	}

	public PEGNode[] getAssignedTo() {
		return assignedTo;
	}

	public void setAssignedTo(PEGNode[] assignedTo) {
		this.assignedTo = assignedTo;
	}

	public PEGNode[] getAssignedFrom() {
		return assignedFrom;
	}

	public void setAssignedFrom(PEGNode[] assignedFrom) {
		this.assignedFrom = assignedFrom;
	}

	public Set<PEGNode> getInterfere() {
		if (interfere == null) {
			return Collections.emptySet();
		}
		
		return interfere;
	}
	
	public boolean addInterfere(PEGNode node) {
		if (interfere == null) {
			interfere = new HashSet<PEGNode>();
		}
		
		if (interfere.add(node)) {
			node.addInterfere(this);
			return true;
		}
		
		return false;
	}

	public Set<PEGNode> getFieldInterfere() {
		if (fieldInterfere == null) {
			return Collections.emptySet();
		}
		
		return fieldInterfere;
	}
	
	public boolean addFieldInterfere(PEGNode node) {
		if (fieldInterfere == null) {
			fieldInterfere = new HashSet<PEGNode>();
		}
		
		if (fieldInterfere.add(node)) {
			node.addFieldInterfere(this);
			return true;
		}
		
		return false;
	}
	
	public void resetInterfere() {
		interfere = null;
		interfereComplete = false;
        fieldInterfere = null;
	}

	public boolean isInterfereComplete() {
		return interfereComplete;
	}

	public void setInterfereComplete(boolean interfereComplete) {
		this.interfereComplete = interfereComplete;
	}

	public Symbol getField() {
		return field;
	}

	public void setField(Symbol field, PEGNode base) {
		this.field = field;
		this.addr = base;
		
		base.addField(field, this);
	}
	
	public PEGNode getBase() {
		if (field == null) {
			return null;
		}
		
		return addr;
	}
	
	public Map<Symbol, PEGNode> getFields() {
		if (fields == null) {
			return Collections.emptyMap();
		}
		
		return fields;
	}
	
	public boolean addField(Symbol fld, PEGNode node) {
		if (fields == null) {
			fields = new HashMap<Symbol, PEGNode>();
		}
		
		if (fields.put(fld, node) == null) {
			node.setField(fld, this);
			return true;
		}
		
		return false;
	}

	public String toString() {
		if (coreExpr instanceof CoreDerefExpr) {
			if (getAddr().coreExpr instanceof CoreAddrExpr) {
				CoreAddrExpr a = (CoreAddrExpr) getAddr().coreExpr;
				return a.getSymbol().getIdName();
			} else {
				return "*(" + getAddr() + ")";
			}
		} else if (coreExpr instanceof CoreFieldExpr) {
			return getBase() + "." + getField();
		} else if (coreExpr instanceof CoreAddrExpr) {
			return "&" + ((CoreAddrExpr) coreExpr).getSymbol().getIdName();
		} else {
			return coreExpr.toString();
		}
	}
	
	public boolean isField() {
		if (getAddr() != null) {
			return getAddr().isField();
		}
		
		if (coreExpr instanceof CoreFieldExpr) {
			return true;
		}
		
		return false;
	}
	
	public boolean isParam() {
		if (getAddr() != null) {
			return getAddr().isParam();
		}
		
		if (coreExpr instanceof CoreAddrExpr) {
			CoreAddrExpr a = (CoreAddrExpr) coreExpr;
			return a.getSymbol().isParameter();
		}
		
		return false;
	}
}
