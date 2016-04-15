// SAFE

// BLAST (w/ default options) unrolls completely the loop because it
// does not search for invariant predicates. The predicates added are:
// x>=1, n<=0,n<=1,n<=2, ..., x>= 36.

// However, if -predH 7 is on then will try to add as many predicates
// as possible from each counterexample. Here the details:
/*
 1st
--------------------------------------------------------------
counterexample  : x=1, y<0, x<=0, y<=0
conflict blocks : x=1, x<=0,
predicates added: {x>=1}

2nd
--------------------------------------------------------------
counterexample  : x0=1, y>=0, x1=0,n=0,n>=19,x1<=0,y<=0
conflict blocks : n=0,n>=19
predicates added: {n<=0}

3rd
--------------------------------------------------------------
counterexample  :
                  x0=1,y0>=0,x1=0,n0=0,n0<19,y1=y0+5,x2=x1+n0,n1=n0+1,n1>=19,
                  x2<=0,y1<=0
conflict blocks:  y0>=0,y1=y0+5, y1<=0 and
                  n1=n0+1, n>=19
predicates added: {y>=0, y>=5, n<=0, n<=1}

After unrolling twice (i.e., n>=2) y>=5 suffices to prove safety.

*/

void main() {
  int x, y, n;
  
  x = 1;
  if (y >= 0) {
        x = 0;
	n = 0;
        while (n < 9) {
	  y = y + 5;
	  x = x + n;
	  n++;
        }
  }
  if (x <= 0 && y <= 0) 
  ERROR: goto ERROR;
}


