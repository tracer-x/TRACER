package crystal.ast;

public enum BitwiseOps {
	Band, Bor, Xor, Shl, Shr, Neg;
	
	public static final int BAND = 15;
	public static final int BOR = 16;
	public static final int XOR = 17;
	public static final int SHL = 18;
	public static final int SHR = 19;
	public static final int NEG = 20;

	public BitwiseOps toBitwise(int i) {
		switch (i) {
		case BAND : return Band;
		case BOR :  return Bor;
		case XOR :  return Xor;
		case SHL :  return Shl;
		case SHR :  return Shr;
		case NEG :  return Neg;
		default:    assert false; return null;
		}
	}

	public int toInt() {
		switch (this) {
		case Band : return BAND;
		case Bor :  return BOR;
		case Xor :  return XOR;
		case Shl :  return SHL;
		case Shr :  return SHR;
		case Neg :  return NEG;
		default:    assert false; return 0;
		}
	}
	
	public String toString() {
		switch (this) {
		case Band  : return "&";
		case Bor   : return "|";
		case Xor  : return "^";
		case Shl  : return "<<";
		case Shr  : return ">>";
		case Neg  : return "~";
		}
		return null;
	}
}
