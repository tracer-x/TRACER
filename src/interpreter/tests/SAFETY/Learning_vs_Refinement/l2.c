/* 
  w/o -predH 7

  Run statistics:

  Model checker stats:
  
  Nb iterations of outer while loop: 0
  Nb iterations of reachability: 1778
  Nb created nodes: 0
  Nb refinment processes: 64
  Nb refined nodes: 0
  Nb proof tree nodes: 811
  Nb proof tree covered nodes: 250Nb deleted nodes: 0


  Abstractor stats:
  
  Total number of non-post queries = 1 
  Total number of cached queries = 13066 
  Total number of queries = 28764 
  Worst-case number of post queries = 28840 
  Actual number of post queries = 28840 
  NonDC number of post queries = 1666 
  Assume post queries = 4674 
  Total posts = 623 
  Total assume posts = 124 
  Total foci queries = 191 
  Foci Theory Clauses:
  Num theory clauses: 0
  List of predicates: 

  Number of predicates =64 
  Maximum number of predicates active together (discounting scope) = 0

  Timings:
  real	0m19.672s
  user	0m9.852s
  sys	0m8.643s

*/

/*
BLAST with -predH 7 
12 predicates
0.675s
TRACER
49 states and 2 subsumed
0.06s
*/

int BLAST_NONDET;

main()
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
  if (BLAST_NONDET) { s = s+256; }

  // BLAST 
  if (s>600) ERROR: goto ERROR;
  // TRACER _ABORT(s>600);
  

}
