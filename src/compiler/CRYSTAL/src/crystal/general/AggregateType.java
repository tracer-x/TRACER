package crystal.general;

import java.io.*;
import java.util.*;

import crystal.ast.*;

public class AggregateType extends Type {
	private static final long serialVersionUID = 3257009847584108592L;
	
	private byte kind;
    private List<Symbol> fields;
    
    private static Map<Symbol,AggregateType>fieldMap =
    	new HashMap<Symbol,AggregateType>();
    
    public AggregateType(int k) {
        kind = (byte)k;
        fields = new ArrayList<Symbol>(5);
    } 

    public Symbol getField(int i) {
    	return fields.get(i);
    }
    
	public Symbol getField(String name) {
		for (int i = 0; i < fields.size(); i++) {
			Symbol field = fields.get(i);
			if (field.getName().equals(name))
				return field;
		}
		return  null;
	}

	public FieldExpr buildFieldExpr(boolean d, Expression e, String id) {
    	for (Symbol f : fields)
    		if (id.equals(f.getName()))  
    			return new FieldExpr(d, e, f);
    	
    	/* lookup nested structs */
    	for (Symbol f : fields)
    		if (f.isAnonymous()) {
    			FieldExpr fe = new FieldExpr(d, e, f);
    			AggrNameType nestedstn = (AggrNameType)f.getType();
    			AggregateType nestedst = nestedstn.getStructType();
    			FieldExpr nestedfe = nestedst.buildFieldExpr(d, fe, id);
    			if (nestedfe != null)
    				return nestedfe;
    		}
    			
    	return null;
    }
    
    public int numFields() {
    	return fields.size();
    }
    
    public void addField(Symbol f) {
    	if (kind == Flags.UNION || 
    			(kind == Flags.STRUCT && fields.isEmpty()))
    		f.setFirstField();
    	
    	fields.add(f);
    	fieldMap.put(f, this);
    }

    public static AggregateType getStructOf(Symbol f) {
    	AggregateType type = fieldMap.get(f);
    	assert type != null : f;
    	return type;
    }
    
    public boolean isAggregate() { 
    	return true; 
    }
    
    public boolean isStruct() { 
    	return kind == Flags.STRUCT; 
    }
    
    public boolean isUnion()  { 
    	return kind == Flags.UNION; 
    }
    
    public boolean isEnum()   { 
    	return kind == Flags.ENUM; 
    }
    
    public String kind() {
    	switch (kind) {
    	case Flags.STRUCT : return "struct";
    	case Flags.UNION  : return "union";
    	case Flags.ENUM   : return "enum";
    	}
    	assert false;
    	return null;
    }

    private String stringRep;
    
    public String toString() {
      if (stringRep == null) {
        String s = "";
        for(int i = 0; i < fields.size(); i++) {
        	if (i > 0) s += ", ";
        	Symbol sym = fields.get(i);
            String field = sym.getIdName();
            s += field;
            if (!isEnum()) s += ":" + sym.type;
        }
        switch (kind) {
        case Flags.STRUCT : return  "{" + s + "}"; 
        case Flags.UNION  : return "[" + s + "]";  
        case Flags.ENUM   : return  "(" + s + ")"; 
        }
      }
      assert false;
      return null;
    }

	public boolean sameKind(AggregateType o) {
		return this.kind == o.kind;
	}

	public int numTypeKids() {
    	return fields.size();
    }
    
    public Type getTypeKid(int i) {
    	if (0 <= i && i < fields.size())
    		return fields.get(i).getType();
    	else
    		return null;
    }
    
	public <S,T> S accept(TypeVisitor<S,T> v, T o) {
		return v.visit(this, o);
	}
	
	@SuppressWarnings("unchecked")
	static public void deserializeStatic(ObjectInputStream is) 
		throws IOException, ClassNotFoundException {
		fieldMap = (Map)is.readObject();
	}

	static public void serializeStatic(ObjectOutputStream os) 
		throws IOException {
		os.writeObject(fieldMap);
	}
}
