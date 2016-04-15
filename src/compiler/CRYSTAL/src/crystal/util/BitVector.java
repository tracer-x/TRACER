package crystal.util;

import java.util.*;

/** A simple bitvector implementation, without dynamic resizing.
 *  The first 64 bits are inlined. */
public class BitVector {
	
	long bits;
    long[] more;

    BitVector() {
    }
    
    public BitVector(BitVector other) {
        bits = other.bits;
        
        if (other.more != null) {
        	more = new long[other.more.length];
        	for (int i = 0; i < other.more.length; i++)
        		more[i] = other.more[i];
        }
    }
    
    public BitVector(int num) {
    	if (num > 64)
    		more = new long[1 + ((num-65) >> 6)];
    }
    
    public boolean get(int bit) {
    	assert bit >= 0;
        long mask = (1L << bit);

        if (bit < 64)
    		return (bits & mask) != 0L;
        assert more != null: bit;
        return (more[(bit-64) >> 6] & mask) != 0L;
    }
    
    public void set(int bit) {
    	assert bit >= 0;
        long mask = (1L << bit);

        if (bit < 64)
        	bits |= mask;
        else 
        	more[(bit-64) >> 6] |= mask;
    }


	public void setValue(int bit, boolean val) {
		if (val) set(bit);
		else clear(bit);
	}

	public void clear(int bit) {
    	assert bit >= 0;
        long mask = ~(1L << bit);

        if (bit < 64) 
    		bits &= mask;
    	else  	
    		more[(bit-64) >> 6] &= mask;
    }
    
    public boolean or(BitVector other) {
        boolean changed = false;
        long newbits = bits | other.bits;
        changed |= (newbits != bits);
        bits = newbits;

        long[] otherbits = other.more;
        if (otherbits == null)
        	return changed;
        
        assert more != null;
        assert otherbits.length <= more.length;
        for(int i = 0; i < otherbits.length; i++) {
        	long oldbits = more[i];
            newbits = oldbits | other.more[i];
            changed |= (newbits != oldbits);
            more[i] = newbits;
        }
        
        return changed;
    }
    
    public boolean and(BitVector other) {
        boolean changed = false;
        long newbits = bits & other.bits;
        changed |= (newbits != bits);
        bits = newbits;

        long[] otherbits = other.more;
        if (otherbits == null)
        	return changed;
        
        assert more != null;
        assert otherbits.length <= more.length;
        for(int i = 0; i < otherbits.length; i++) {
        	long oldbits = more[i];
            newbits = oldbits & other.more[i];
            changed |= (newbits != oldbits);
            more[i] = newbits;
        }
        
        return changed;
    }

    public boolean andNot(BitVector other) {
        boolean changed = false;
        long newbits = bits & ~other.bits;
        changed |= (newbits != bits);
        bits = newbits;

        long[] otherbits = other.more;
        if (otherbits == null)
        	return changed;
        
        assert more != null;
        assert otherbits.length <= more.length;
        for(int i = 0; i < otherbits.length; i++) {
        	long oldbits = more[i];
            newbits = oldbits & ~other.more[i];
            changed |= (newbits != oldbits);
            more[i] = newbits;
        }
        
        return changed;
    }
    
    public void not() {
        bits = ~bits;
        if (more != null) 
            for(int i = 0; i < more.length; i++) 
                more[i] = ~more[i];
    }
        
    public void clear() {
        bits = 0;
        if (more != null) 
            for(int i = 0; i < more.length; i++) 
                more[i] = 0;
    }
        
    public boolean equals( Object o ) {
        if( !( o instanceof BitVector ) ) 
        	return false;
        
        BitVector other = (BitVector) o;
        if (bits != other.bits)
        	return false;
        
        if (more == null) 
        	return other.more == null;
        
        if (more.length != other.more.length)
        	return false;
        
        for (int i = 0; i < more.length; i++)
        	if (more[i] != other.more[i])
        		return false;

        return true;
    }
    
    public BitVector copy() {
    	return new BitVector(this);
    }
    
    public int hashCode() {
        return (int)bits;
    }
    
    public String toString() {
    	
        StringBuffer buf = new StringBuffer();
        buf.append('{');
        buf.append(String.format("%022o.", bits));
        if (more != null) 
        	for (int i = 0; i < more.length; i++)
        		buf.append(String.format("%022o.",more[i]));
        buf.append('}');
        return buf.toString();
    }

	public List<Integer> indexList() {
		List<Integer> l = new ArrayList<Integer>(size());
		
		if (bits != 0L) 
			addBits(bits, 0, l);
		
		if (more != null)
			for (int i = 0; i < more.length; i++)
				if (more[i] != 0L)
					addBits(more[i], (i+1)*64, l);
		
		return l;
	}
	
	private void addBits(long n, int o, List<Integer> v) {
		for (int i = 0; i < 64; i++, n >>= 1) 
			if ((n & 1L) != 0) 
				v.add(o+i);
	}

	public boolean isEmpty() {
		if (bits != 0L)
			return false;
		
		if (more != null)
			for (int i = 0; i < more.length; i++)
				if (more[i] != 0L)
					return false;
		
		return true;
	}

	/** Returns the number of non-zero bits */
	public int size() {
		int n = countBits(bits);
		
		if (more != null)
			for (int i = 0; i < more.length; i++)
				if (more[i] != 0L)
					n += countBits(more[i]);
		
		return n;
	}

	int countBits(long n) {
		long sign = n < 0 ? 1 : 0;
		n = n & 0x7fffffffffffffffL;

		n = ((n & 0xaaaaaaaaaaaaaaaaL) >>  1) + (n & 0x5555555555555555L);
	    n = ((n & 0xccccccccccccccccL) >>  2) + (n & 0x3333333333333333L);
	    n = ((n & 0xf0f0f0f0f0f0f0f0L) >>  4) + (n & 0x0f0f0f0f0f0f0f0fL);
	    n = ((n & 0xff00ff00ff00ff00L) >>  8) + (n & 0x00ff00ff00ff00ffL);
	    n = ((n & 0xffff0000ffff0000L) >> 16) + (n & 0x0000ffff0000ffffL);
	    n = ((n & 0xffffffff00000000L) >> 32) + (n & 0x00000000ffffffffL);
	    
	    return (int)(n + sign);
	}

	int countBits2(long n) {
		int sign = n < 0 ? 1 : 0;
		n = n & 0x7fffffffffffffffL;

		int count = 0;
		for(; n > 0; count++) 
			n = n & (n-1);
		
		return count + sign;
	}
}


