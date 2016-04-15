/*
  Modified l1.c on Joxan's request.

  Run statistics:

  Model checker stats:

  Nb iterations of outer while loop: 0
  Nb iterations of reachability: 12716
  Nb created nodes: 0
  Nb refinment processes: 43
  Nb refined nodes: 0
  Nb proof tree nodes: 906
  Nb proof tree covered nodes: 303Nb deleted nodes: 0


  Abstractor stats:

  Total number of non-post queries = 1 
  Total number of cached queries = 143678 
  Total number of queries = 172259 
  Worst-case number of post queries = 175096 
  Actual number of post queries = 175096 
  NonDC number of post queries = 4995 
  Assume post queries = 36658 
  Total posts = 4641 
  Total assume posts = 1115 
  Total foci queries = 256 
  Foci Theory Clauses:
  Num theory clauses: 0
  List of predicates: 

  Number of predicates =69 
  Maximum number of predicates active together (discounting scope) = 0

  Timings:

  real	0m32.110s
  user	0m17.108s
  sys	0m12.173s

*/

/*
BLAST
 w/o -predH 7
  12 predicates 
  1.11s
 w/ -predH 7
  11 predicates 
  0.88s
TRACER
  44 states and 2 subsumed
  0.05s
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

  if (s>600) {
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
    if (s>600)  ERROR: goto ERROR;
    // TRACER _ABORT(s>600);
        
  }
  return;
}
