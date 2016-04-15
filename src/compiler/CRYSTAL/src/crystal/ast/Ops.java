package crystal.ast;

public class Ops {
	public static String toString(int i) {
		switch (i) {
		case ArithmOps.PLUS :   return ArithmOps.Plus.toString(); 
		case ArithmOps.MINUS:   return ArithmOps.Minus.toString(); 
		case ArithmOps.TIMES:   return ArithmOps.Times.toString(); 
		case ArithmOps.MOD:     return ArithmOps.Mod.toString(); 
		case ArithmOps.DIV:     return ArithmOps.Div.toString(); 
		
		case LogicalOps.AND:    return LogicalOps.And.toString(); 
		case LogicalOps.OR:     return LogicalOps.Or.toString(); 
		case LogicalOps.NOT:    return LogicalOps.Not.toString(); 

		case CompareOps.LESS:   return CompareOps.Less.toString();
		case CompareOps.LESSEQ: return CompareOps.LessEq.toString();
		case CompareOps.MORE:   return CompareOps.More.toString();
		case CompareOps.MOREEQ: return CompareOps.MoreEq.toString();
		case CompareOps.EQ:     return CompareOps.Eq.toString();
		case CompareOps.NEQ:    return CompareOps.Neq.toString();

		case BitwiseOps.BAND:   return BitwiseOps.Band.toString();
		case BitwiseOps.BOR:    return BitwiseOps.Bor.toString();
		case BitwiseOps.XOR:    return BitwiseOps.Xor.toString();
		case BitwiseOps.SHR:    return BitwiseOps.Shr.toString();
		case BitwiseOps.SHL:    return BitwiseOps.Shl.toString();
		case BitwiseOps.NEG:    return BitwiseOps.Neg.toString();
		
		default:                assert false; return "";
		}
	}
	
	public static boolean isArithmOp(int i) {
		switch(i) {
		case ArithmOps.PLUS : 
		case ArithmOps.MINUS: 
		case ArithmOps.TIMES: 
		case ArithmOps.MOD: 
		case ArithmOps.DIV: return true; 
		default: return false;
		}
	}

	public static boolean isLogicalOp(int i) {
		switch(i) {
		case LogicalOps.AND: 
		case LogicalOps.OR: 
		case LogicalOps.NOT: return true; 
		default: return false;
		}
	}

	public static boolean isCompareOp(int i) {
		switch(i) {
		case CompareOps.LESS:
		case CompareOps.LESSEQ:
		case CompareOps.MORE:
		case CompareOps.MOREEQ:
		case CompareOps.EQ:
		case CompareOps.NEQ: return true;
		default: return false;
		}
	}

	public static boolean isBitwiseOp(int i) {
		switch(i) {
		case BitwiseOps.BAND:
		case BitwiseOps.BOR:
		case BitwiseOps.XOR:
		case BitwiseOps.SHR:
		case BitwiseOps.SHL:
		case BitwiseOps.NEG: return true;
		default: return false;
		}
	}
}
