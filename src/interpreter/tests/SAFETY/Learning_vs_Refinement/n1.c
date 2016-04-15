/*
  Sum-of-subset problem, to be compared with n2.c,
  hopefully we can see significan difference in running time.
  Unfortunately, the experimental results do not show
  significant difference.

Nb iterations of outer while loop: 0
Nb iterations of reachability: 363
Nb created nodes: 0
Nb refinment processes: 16
Nb refined nodes: 0
Nb proof tree nodes: 220
Nb proof tree covered nodes: 56Nb deleted nodes: 0

real	0m12.485s
user	0m4.067s
sys	0m3.085s

*/

/*
BLAST
  w/o -predH 7 
    42 predicates
    4.02s
  w/ -predH 7
    28 predicates
    1.63s 
TRACER 
   45 states and 2 subsumed
   0.06s
 */
int BLAST_NONDET;

void main()
{
  int x1, x2, x3, x4, x5;

  if (BLAST_NONDET) { x1=0; } else { x1=1; }
  if (BLAST_NONDET) { x2=0; } else { x2=2; }
  if (BLAST_NONDET) { x3=0; } else { x3=3; }
  if (BLAST_NONDET) { x4=0; } else { x4=4; }
  if (BLAST_NONDET) { x5=0; } else { x5=5; }

  // BLAST 
  if (x1+x2+x3+x4+x5==100) ERROR: goto ERROR;
  // TRACER _ABORT(x1+x2+x3+x4+x5==100);
    
  return;
}
