/*
  This is an example which demonstrates that a verifier that can avoid
  infeasible path (into the body of the second if condition) could
  have exponentially better complexity than Blast.

  Such verifier would only traverse the first if conditional, which is
  of depth one, with complexity 4 = 2^k, where k=3, the body of the
  second if condition need to be traversed with complexity 16 =
  2^(2^k), that is, exponential to the first.

  This program is to be compared with l4.c.

  Run stats:

  Model checker stats:

  Nb iterations of outer while loop: 0
  Nb iterations of reachability: 861
  Nb created nodes: 0
  Nb refinment processes: 8
  Nb refined nodes: 0
  Nb proof tree nodes: 58
  Nb proof tree covered nodes: 16Nb deleted nodes: 0


  Abstractor stats:

  Total number of non-post queries = 1 
  Total number of cached queries = 2031 
  Total number of queries = 2876 
  Worst-case number of post queries = 2870 
  Actual number of post queries = 2870 
  NonDC number of post queries = 77 
  Assume post queries = 418 
  Total posts = 309 
  Total assume posts = 57 
  Total foci queries = 46 
  Foci Theory Clauses:
  Num theory clauses: 0
  List of predicates: 

  Number of predicates =13 
  Maximum number of predicates active together (discounting scope) = 0


  Timings:

  real	0m4.672s
  user	0m2.405s
  sys	0m2.325s


*/

/* 
BLAST w/ -predH 7 
 16 predicates
 0.06s
TRACER
 19 states and 2 subsumed
 0.01s
 */
int BLAST_NONDET;

main()
{
  int s, t;
  s=0;
  if (BLAST_NONDET) { s = s+1; }
  if (BLAST_NONDET) { s = s+2; }
  if (BLAST_NONDET) { s = s+4; }

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
    if (t>600) ERROR: goto ERROR;
    // TRACER _ABORT(t>600);
  }

}
