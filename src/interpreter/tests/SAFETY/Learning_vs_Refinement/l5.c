/*
  Modified l1.c on Joxan's request.

  Run statistics:

  Model checker stats:

  Nb iterations of outer while loop: 0
  Nb iterations of reachability: 3031
  Nb created nodes: 0
  Nb refinment processes: 56
  Nb refined nodes: 0
  Nb proof tree nodes: 623
  Nb proof tree covered nodes: 190Nb deleted nodes: 0


  Abstractor stats:

  Total number of non-post queries = 1 
  Total number of cached queries = 26576 
  Total number of queries = 74006 
  Worst-case number of post queries = 107822 
  Actual number of post queries = 107822 
  NonDC number of post queries = 15117 
  Assume post queries = 19096 
  Total posts = 1145 
  Total assume posts = 218 
  Total foci queries = 390 
  Foci Theory Clauses:
  Num theory clauses: 0
  List of predicates: 

  Number of predicates =110 
  Maximum number of predicates active together (discounting scope) = 0

  Timings:

  real	1m15.484s
  user	0m30.548s
  sys	0m17.931s

*/

/*
BLAST 
 w/ -predH 7
  30 
  1.8s
 w/o -predH 7 
  23 predicates
  3.02s
TRACER
  44 states and 2 subsumed
  0.06s
 */
int BLAST_NONDET;

void main()
{
  int s, t;


  s=0;
  if (BLAST_NONDET) { s = s+1; }
  if (BLAST_NONDET) { s = s+2; }
  if (BLAST_NONDET) { s = s+4; }
  if (BLAST_NONDET) { s = s+8; }
  if (BLAST_NONDET) { s = s+16; }
  if (BLAST_NONDET) { s = s+32; }
  if (BLAST_NONDET) { s = s+64; }
  if (BLAST_NONDET) { s = s+128; }

  if (s>600) {
    t=0;

    if (BLAST_NONDET) { t = t+1; }
    if (BLAST_NONDET) { t = t+2; }
    if (BLAST_NONDET) { t = t+4; }
    if (BLAST_NONDET) { t = t+8; }
    if (BLAST_NONDET) { t = t+16; }
    if (BLAST_NONDET) { t = t+32; }
    if (BLAST_NONDET) { t = t+64; }
    if (BLAST_NONDET) { t = t+128; }

    // BLAST
    if (s+t>600) ERROR: goto ERROR;
    // TRACER _ABORT(s+t>600);  
    
  }
    
  return;
}
