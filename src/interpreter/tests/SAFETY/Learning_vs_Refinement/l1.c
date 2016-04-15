/* 
  w/o -predH 7 

  Run statistics:

  Model checker stats:

  Nb iterations of outer while loop: 0
  Nb iterations of reachability: 22840
  Nb created nodes: 0
  Nb refinment processes: 57
  Nb refined nodes: 0
  Nb proof tree nodes: 1287
  Nb proof tree covered nodes: 431Nb deleted nodes: 0


  Abstractor stats:
  
  Total number of non-post queries = 1 
  Total number of cached queries = 337578 
  Total number of queries = 394595 
  Worst-case number of post queries = 401420 
  Actual number of post queries = 401420 
  NonDC number of post queries = 12757 
  Assume post queries = 81336 
  Total posts = 8285 
  Total assume posts = 1880 
  Total foci queries = 340 
  Foci Theory Clauses:
  Num theory clauses: 0
  List of predicates: 

  Number of predicates =92 
  Maximum number of predicates active together (discounting scope) = 0


  Timings:
  real	0m59.406s
  user	0m28.577s
  sys	0m18.081s

*/

/*
BLAST with -predH 7 
12 predicates 
1.1s

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
    if (BLAST_NONDET) { s = s+256; }

    // BLAST 
    if (s>600) ERROR: goto ERROR; 
    // TRACER _ABORT(s>600);   
    
  }

}
