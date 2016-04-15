package crystal.ast;

import java.math.*;

public class NumberExpr extends PrimitiveExpr {
	private static final long serialVersionUID = 3688790254311977522L;

	public static NumberExpr zero = new NumberExpr(0);
	public static NumberExpr one  = new NumberExpr(1);
	
	Number num;
	boolean unsigned;
	boolean lng, lnglng;
	boolean hex, oct;
	boolean widechar;
	
	public NumberExpr(int n) {
		num = new Integer(n);
	}

	public NumberExpr(Number n) {
		num = n;
		unsigned = false;
		widechar = false;
	}
	
	public NumberExpr(Number n, boolean u, int lc, char fmt) {
		num = n;
		unsigned = u;
		widechar = false;
		lng = lc >= 1;
		lnglng = lc >= 2;
		hex = fmt == 'H';
		oct = fmt == 'C';
	}
	
	public boolean isZero() {
		return num.intValue() == 0;
	}
	
	public boolean isConst(int c) {
		return num.intValue() == c;
	}
	
	public Number getNumber() {
		return num;
	}
	
	public int numExprKids() {
		return 0;
	}
    
	public Expression getExprKid(int i) {
		return null;
	}

	public void setExprKid(int i, Expression newE) {
		assert (false);
	}
	
	public Number constValue() {
		if (num instanceof Byte || 
			num instanceof Integer || 
			num instanceof Double)
			return num;
		else
			return null;
	}

	public static NumberExpr parseInt(String s) {
		StringBuffer sb = new StringBuffer();
		int lcount = 0;
		boolean unsigned = false;
		
		char fmt = 'D';
		int len = s.length();
		if (len > 1 && s.charAt(0) == '0')
			fmt = s.charAt(1) == 'x' || s.charAt(1) == 'X' ? 'H' : 'C';
				
		for (int i = 0; i < s.length(); i++) {
			char c = s.charAt(i);
			switch(c) {
			case 'u' : case 'U' : unsigned = true;  break;
			case 'l' : case 'L' : lcount++; break; 
			default: sb.append(c);
			}
		}
	       
		String str = sb.toString();
		try {
			if (lcount > 0) {
				return new NumberExpr(Long.decode(str), unsigned, lcount, fmt);
			}
			else {
				try {
					return new NumberExpr(Integer.decode(str), unsigned, lcount, fmt);
				} catch (NumberFormatException e) {
					return new NumberExpr(Long.decode(str), unsigned, lcount, fmt);
				}
			} 
		}
		catch (NumberFormatException e) {
			/* long long literals need to be represented as BigIntegers.
			 * Also, large unsigned long literals need to be represented
			 * as BigIntegers because they won't fit into java Longs */
			Number n;
			switch (fmt) {
			case 'H' :
				n = new BigInteger(str.substring(2), 16);
				return new NumberExpr(n, unsigned, lcount, 'H');
			case 'C':
				n = new BigInteger(str.substring(1), 8);
				return new NumberExpr(n, unsigned, lcount, 'C');
			default:	
				n = new BigInteger(str, 10);
				return new NumberExpr(n, unsigned, lcount, 'D');
			}
		}
	}
	   
	public static NumberExpr parseChar(String s) {
		boolean wide = false;
		
		if (s.charAt(0) == 'L') {
			wide = true;
			s = s.substring(1, s.length());
		}
		
		Byte b = parseCharHelper(s);
		NumberExpr num = new NumberExpr(b);
		num.widechar = wide;
		return num;
	}
	
	private static Byte parseCharHelper(String s) {
		/* simple characters */
		if (s.length() == 3) {
			char c = s.charAt(1);
			assert c != '\\';
			return new Byte((byte)c);
		}
	       
		/* escaped characters */
		if (s.length() == 4 && s.charAt(1) == '\\') {
			char c = s.charAt(2);
			switch (c) {
			case '0' : return new Byte((byte)'\0');

			case '\"' : return new Byte((byte)'\"');
			case '\'' : return new Byte((byte)'\'');
			case '?'  : return new Byte((byte)'?');
			case '\\' : return new Byte((byte)'\\');

			case 'a'  : return new Byte((byte)'\007'); /* bell */
			case 'e'  : return new Byte((byte)'\033'); /* escape */
			case 'v'  : return new Byte((byte)'\013'); /* vert. tab */

			case 'b'  : return new Byte((byte)'\b'); /* backspace */
			case 'f'  : return new Byte((byte)'\f'); /* form feed */
			case 'n'  : return new Byte((byte)'\n'); /* new line */
			case 'r'  : return new Byte((byte)'\r'); /* carriage return */
			case 't'  : return new Byte((byte)'\t'); /* tab */
			}
		}
	       
		/* escape codes */
                int base = 8;
                int start = 2;
                
                if (s.charAt(1) == '\\') {
                    int val = 0;
                    if (s.charAt(2) == 'x') {
                        base = 16;
                        start = 3;
                        }
                    
                    for (int i = start; i < s.length()-1; i++) {
                        int c = s.charAt(i);
                        if ('0' <= c && c <= '9') 
                            c = c - '0';
                        else if (base == 16 && 'a' <= c && c <= 'f') 
                            c = 10 + c -'a';
                        else {
                            val = -1;
                            break;
                            }
                        val = val*base + c;
                        }
                    
                    if (val >= 0) return new Byte((byte)val);
		}
	       
		assert false : "Character \'" + s + "\' not handled";
		return null;
	}

	public static NumberExpr parseFloat(String s) {
		Number n = s.indexOf('f') != -1 || s.indexOf('F') != -1 
				? new Float(s) : new Double(s);
		return new NumberExpr(n);
	}
	   
	public static NumberExpr parseHexFloat(String s) {
		Double d = new Double(s);
		d = d.isInfinite() ? Double.MAX_VALUE : d;
		return new NumberExpr(d);
	}   
	
	public String toString() {
		String s;
		if (num instanceof Byte)
			s = stringHelper(num.byteValue());
		else if (hex)
			s = String.format("0x%x", num);
		else if (oct)
			s = String.format("0%o", num);
		else
			s = num.toString();
		
		if (widechar) s = 'L' + s;
		if (unsigned) s = s + 'U';
		if (lnglng)   s = s + "LL";
		else if (lng) s = s + 'L';
		
		return s;
	}
	
	private String stringHelper(byte b) {
		switch (b) {
		case '\"' : return "'\\\"'";
		case '\'' : return "'\\''";
		case '\\' : return "'\\\\'";
		}

		if (b >= 32 && b <= 126)
			return "'" + (char)b + "'";
		
		switch (b) {
		case '\0' : return "'\\0'";
		case '\b' : return "'\\b'"; 
		case '\f' : return "'\\f'"; 
		case '\n' : return "'\\n'"; 
		case '\r' : return "'\\r'"; 
		case '\t' : return "'\\t'"; 
		}
		
		return String.format("'\\%03o'", b);
	}

	public <S,T> S accept(ExprVisitor<S,T> v, T t) {
		return v.visit(this, t);		
	}
}
