/*
  Blast is supposed to carry over predicates from the then branch of
  the if conditional to the else branch, therefore slowing it down.

Nb iterations of outer while loop: 0
Nb iterations of reachability: 617
Nb created nodes: 0
Nb refinment processes: 26
Nb refined nodes: 0
Nb proof tree nodes: 245
Nb proof tree covered nodes: 67Nb deleted nodes: 0

real	0m13.344s
user	0m5.120s
sys	0m4.113s

 */

/*
BLAST
  w/o -predH 7
  52 predicates
  4.54s
  w/ -predH 7
  29 predicates
  1.7s
TRACER
  22 states and 2 subsumed
  0.04s
 */
int BLAST_NONDET;

void main()
{

  int x1, x2, x3, x4, x5;
  int x6, x7, x8, x9, x10;

  x1=0;
  x2=0;
  x3=0;
  x4=0;
  x5=0;
  x6=0;
  x7=0;
  x8=0;
  x9=0;
  x10=0;

  if (BLAST_NONDET) {
    // BLAST
    if (x1!=0 || x2!=0 || x3!=0 || x4!=0 || x5!=0 ||
	x6!=0 || x7!=0 || x8!=0 || x9!=0 || x10!=0)  ERROR: goto ERROR;    
/*      TRACER _ABORT(x1!=0 || x2!=0 || x3!=0 || x4!=0 || x5!=0 || */
/* 	   x6!=0 || x7!=0 || x8!=0 || x9!=0 || x10!=0); */    
  } else {
    int y1, y2, y3, y4, y5;

    if (BLAST_NONDET) { y1=0; } else { y1=1; }
    if (BLAST_NONDET) { y2=0; } else { y2=2; }
    if (BLAST_NONDET) { y3=0; } else { y3=3; }
    if (BLAST_NONDET) { y4=0; } else { y4=4; }
    if (BLAST_NONDET) { y5=0; } else { y5=5; }

    // BLAST 
    if (y1+y2+y3+y4+y5 == 100) goto ERROR;
    // TRACER _ABORT(y1+y2+y3+y4+y5 == 100);
    
  }
  return;
}
