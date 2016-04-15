/*
  Modified l1.c on Joxan's request.

  Run statistics:

  Model checker stats:

  Nb iterations of outer while loop: 0
  Nb iterations of reachability: 1348
  Nb created nodes: 0
  Nb refinment processes: 53
  Nb refined nodes: 0
  Nb proof tree nodes: 612
  Nb proof tree covered nodes: 187Nb deleted nodes: 0


  Abstractor stats:

  Total number of non-post queries = 1 
  Total number of cached queries = 8355 
  Total number of queries = 18767 
  Worst-case number of post queries = 18830 
  Actual number of post queries = 18830 
  NonDC number of post queries = 1139 
  Assume post queries = 3458 
  Total posts = 473 
  Total assume posts = 103 
  Total foci queries = 158 
  Foci Theory Clauses:
  Num theory clauses: 0
  List of predicates: 

  Number of predicates =54 
  Maximum number of predicates active together (discounting scope) = 0


  Timings:

  real	0m14.594s
  user	0m7.909s
  sys	0m7.061s

*/

/*
BLAST
 w/o -predH 7 
  12 predicates
  1.15s
 w/ -predH 7 
  11 predicates
  0.66s
TRACER
  46 states and 2 subsumed
  0.07s
*/

int BLAST_NONDET;

void main()
{
  int s;
  s=0;
  if (BLAST_NONDET) { s = s+1; }
  if (BLAST_NONDET) { s = s+2; }
  if (BLAST_NONDET) { s = s+4; }
  if (BLAST_NONDET) { s = s+8; }
  if (BLAST_NONDET) { s = s+16; }
  if (BLAST_NONDET) { s = s+32; }
  if (BLAST_NONDET) { s = s+64; }
  if (BLAST_NONDET) { s = s+128; }

  // BLAST 
  if (s>600) ERROR: goto ERROR;
  // TRACER _ABORT(s>600);
  

  return;
}
