package compiler;

import java.util.*;

public class StructInfo {

	static Vector<StructField> structs = new Vector<StructField>();
	static Vector<StructField> structPtrs = new Vector<StructField>();
	static Map<String, StructField> typedefs = new HashMap<String, StructField>();

	public static void addStruct(String name, Vector<StructField> fields) {
		if(!OPTIONS.INCLUDE_ARRAY_CONSTRAINTS)
			return;
		if(name == null)
			FATAL.error("struct with null name tried to be added!");

		StructField sf = new StructField(name, fields);
		if(structs.contains(sf)) {
			StructField old_sf = structs.elementAt(structs.indexOf(sf));
			DEBUG.println("struct " + old_sf + " already exists! replacing it with new def: " + sf);
			structs.setElementAt(sf, structs.indexOf(old_sf));
		}
		else
			structs.add(new StructField(name, fields));
	}

	public static void setTypedef(String typedefName, String structName) {
		StructField s = new StructField(structName);
		if(!structs.contains(s))
			FATAL.error(structName + " does not exist! but " + typedefName + " was set to be its typedef");
		DEBUG.println(typedefName + " is a typedef of struct " + s);
		typedefs.put(typedefName, s);
	}

	public static void setStructPtr(String name) {
		if(!OPTIONS.INCLUDE_ARRAY_CONSTRAINTS)
			return;
		if(name == null || name.compareTo("") == 0)
			FATAL.error("struct ptr with null (or empty) name tried to be added!");

		StructField sf = new StructField(name);
		if(!structs.contains(sf))
			FATAL.error("struct " + name + " does not exist! but it was tried to be set as ptr");
		structPtrs.add(sf);
	}

	public static boolean isStructPtr(String name) {
		if(!OPTIONS.INCLUDE_ARRAY_CONSTRAINTS)
			return false;

		if(name == null || name.compareTo("") == 0)
			return false;

		return structPtrs.contains(new StructField(name));
	}

	public static Vector<StructField> getFields(String name) {
		if(!OPTIONS.INCLUDE_ARRAY_CONSTRAINTS)
			return null;
		StructField s = new StructField(name);
		if(typedefs.containsKey(name))
			s = typedefs.get(name);
		if(name == null || !structs.contains(s))
			FATAL.error("struct " + name + " does not exist!");

				
		return structs.elementAt(structs.indexOf(s)).fields;
	}

	public static StructField getField(String name, String field) {
		if(!OPTIONS.INCLUDE_ARRAY_CONSTRAINTS)
			FATAL.error("include_array_constraints was false but getField() was called!");
		if(name == null || field == null)
			FATAL.error("null struct or field!");

		StructField s = new StructField(name);
		if(typedefs.containsKey(name))
			s = typedefs.get(name);
		if(!structs.contains(s)) {
			if(OPTIONS.IGNORE_STRUCT_ERRORS) {
				DEBUG.warn("struct " + name + " does not exist but field " + field + " was requested");
				return new StructField("");
			}
			else
				FATAL.error("struct " + name + " does not exist but field " + field + " was requested");
		}
		
		return structs.elementAt(structs.indexOf(s)).getField(field);
	}

	public static boolean isStruct(String name) {
		if(!OPTIONS.INCLUDE_ARRAY_CONSTRAINTS)
			return false;
		return structs.contains(new StructField(name));
	}

	public static String getInd(String name, String field) {
		if(!OPTIONS.INCLUDE_ARRAY_CONSTRAINTS)
			FATAL.error("include_array_constraints was false but getInd() was called!");
		if(name == null || field == null)
			FATAL.error("name of struct or field was null!");
		StructField s = new StructField(name);
		if(typedefs.containsKey(name))
			s = typedefs.get(name);
		if(!structs.contains(s)) {
			if(OPTIONS.IGNORE_STRUCT_ERRORS) {
				DEBUG.warn("struct " + name + " does not exist! But index of field " + field + " was requested");
				return "_";
			}
			else
				FATAL.error("struct " + name + " does not exist! But index of field " + field + " was requested");
		}

		DEBUG.println("struct " + name + " contains: " + structs.elementAt(structs.indexOf(s)));
		return structs.elementAt(structs.indexOf(s)).getInd(field);
	}

	public static void reset() {
		structs.clear();
	}
}

class StructField {
	public String name;
	
	public boolean isStruct;
	public Vector<StructField> fields = new Vector<StructField>();

	public StructField(String name) {
		this.name = name;
		isStruct = false;
	}

	public StructField(String name, Vector<StructField> fields) {
		this.name = name;
		isStruct = true;
		this.fields = fields;
	}

	public String getInd(String field) {
		if(!OPTIONS.INCLUDE_ARRAY_CONSTRAINTS)
			FATAL.error("include_array_constraints was false but getInd() was called for StructField!");
		StructField f = new StructField(field);
		if(!isStruct) {
			if(OPTIONS.IGNORE_STRUCT_ERRORS) {
				DEBUG.warn("field " + name + " is not struct but index of its field " + field + " was requested");
				return "_";
			}
			else
				FATAL.error("field " + name + " is not struct but index of its field " + field + " was requested");
		}
		if(!fields.contains(f)) {
			if(OPTIONS.IGNORE_STRUCT_ERRORS) {
				DEBUG.warn("struct " + name + " does not contain field " + field + " but its index was requested");
				return "_";
			}
			else
				FATAL.error("struct " + name + " does not contain field " + field + " but its index was requested");
		}

		return "" + fields.indexOf(f);
	}

	public StructField getField(String field) {
		if(!OPTIONS.INCLUDE_ARRAY_CONSTRAINTS)
			FATAL.error("include_array_constraints was false but getField() was called for StructField!");
		StructField f = new StructField(field);
		if(!isStruct) {
			if(OPTIONS.IGNORE_STRUCT_ERRORS) {
				DEBUG.warn("field " + name + " is not struct but its field " + field + " was requested");
				return new StructField("");
			}
			else
				FATAL.error("field " + name + " is not struct but its field " + field + " was requested");
		}
		if(!fields.contains(f)) {
			if(OPTIONS.IGNORE_STRUCT_ERRORS) {
				DEBUG.warn("struct " + name + " does not contain field " + field + " but it was requested");
				return new StructField("");
			}
			else
				FATAL.error("struct " + name + " does not contain field " + field + " but it was requested");
		}

		return fields.elementAt(fields.indexOf(f));
	}

	public boolean equals(Object o) {
		if(this == o) return true;
		if(!(o instanceof StructField)) return false;
		StructField f = (StructField) o;

		return name.compareTo(f.name) == 0;
		/*
		if(isStruct) {
			if(!f.isStruct) return false;
			if(name.compareTo(f.name) != 0) return false;

			for(int i=0; i < fields.size(); i++)
				if(!(fields.elementAt(i).equals(f.fields.elementAt(i))))
					return false;
			return true;
		}
		else {
			if(f.isStruct) return false;
			return name.compareTo(f.name) == 0;
		}
		*/
	}

	public int hashCode() {
		return 0;
	}

	public String toString() {
		if(isStruct) {
			String s = "";
			Iterator<StructField> i = fields.iterator();
			while(i.hasNext()) {
				s += i.next().toString();
				if(i.hasNext()) s += ",";
			}
			return "{" + s + "} " + name;
		}
		else
			return name;
	}
}
