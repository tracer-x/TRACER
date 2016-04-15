package crystal.util;

public enum Order {
	INCOMPATIBLE, LESS, EQUAL, GREATER, NONE;
	
	public Order merge(Order other) {
		if (this == INCOMPATIBLE || other == INCOMPATIBLE)
			return INCOMPATIBLE;
		
		if (this == NONE || other == NONE ||
		    (this == LESS && other == GREATER) ||
		    (this == GREATER && other == LESS))
			return NONE;
		
		if (this == LESS || other == LESS)
			return LESS;
		
		if (this == GREATER || other == GREATER)
			return GREATER;
		
		return EQUAL;
	}
}
