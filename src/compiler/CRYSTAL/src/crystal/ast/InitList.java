package crystal.ast;

import java.util.*;

import crystal.general.*;

public class InitList extends Initializer {
    List<InitElement> inits;
    
	public InitList() {
    	inits = new ArrayList<InitElement>();
	}

	public InitList(InitElement e) {
    	inits = new ArrayList<InitElement>();
    	inits.add(e);
	}

	public Expression getSingleInit() {
		if (inits.size() == 1) 
			return inits.get(0).val.getSingleInit();
		else
			return null;
	}

	public InitList add(InitElement elem) {
		inits.add(elem);
		return this;
	}
		
	public List<InitElement> fill(Type t) {
		if (!(t instanceof ArrayType || t instanceof AggregateType)) {
			assert inits.size() == 1;
			return inits;
		}
			
		List<InitElement> list = new ArrayList<InitElement>();
		int k = 0;
		for (InitElement elem : inits) {
			if (elem.des == null) {
				Designator des = Designator.getDefault(k, t);
				list.add(new InitElement(des, elem.val));
			}
			else {
				elem.expandRange(list);
				while (!elem.des.match(k, t)) k++;
			}
			k++;
		}
		 
		/* set array size if not mentioned */
		if (t instanceof ArrayType) {
			ArrayType at = (ArrayType)t;
			if (at.getExpression() == null) {
				int max = 0;
				for (InitElement e : list) {
					int n = e.des.n2.intValue();
					if (n > max) max = n;
				}
				at.setExpression(max + 1);
			}
		}
		
		return list;

	}

	public List<InitElement> getElems() {
		return inits;
	}

	public String toString() {
		String s = "{";
		for (int i = 0; i < inits.size(); i++) {
			if (i > 0) s += ", ";
			s += inits.get(i);
		}
		return s + "}";
	}
}
