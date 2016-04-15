/*
  Run stats:

  Model checker stats:
  
  Nb iterations of outer while loop: 0
  Nb iterations of reachability: 106
  Nb created nodes: 0
  Nb refinment processes: 8
  Nb refined nodes: 0
  Nb proof tree nodes: 58
  Nb proof tree covered nodes: 16Nb deleted nodes: 0


  Abstractor stats:

  Total number of non-post queries = 1 
  Total number of cached queries = 94 
  Total number of queries = 352 
  Worst-case number of post queries = 360 
  Actual number of post queries = 360 
  NonDC number of post queries = 31 
  Assume post queries = 128 
  Total posts = 42 
  Total assume posts = 15 
  Total foci queries = 23 
  Foci Theory Clauses:
  Num theory clauses: 0
  List of predicates: 

  Number of predicates =9 
  Maximum number of predicates active together (discounting scope) = 0

  Timings:
  real	0m3.281s
  user	0m1.416s
  sys	0m1.482s

*/

/*
BLAST
  6 predicates
  0.45s
TRACER
  21 states and 2 subsumed
  0.02s
 */
int BLAST_NONDET;

void main()
{
  int s;
  s=0;
  if (BLAST_NONDET) { s = s+1; }
  if (BLAST_NONDET) { s = s+2; }
  if (BLAST_NONDET) { s = s+4; }

  // BLAST  
  if (s>600) ERROR: goto ERROR; 
  // TRACER _ABORT(s>600);
  
  
  return;

}
