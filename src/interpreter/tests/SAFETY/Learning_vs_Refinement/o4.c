int BLAST_NONDET1;
int BLAST_NONDET2;
int BLAST_NONDET3;
int BLAST_NONDET4;
int BLAST_NONDET5;
int BLAST_NONDET6;
int BLAST_NONDET7;
int BLAST_NONDET8;
/*
 BLAST w/o -predH 7 
   48 predicates
   7.39s
 BLAST w/ -predH 7 
   36 predicates
   18.77s
 TRACER
   1544 states and 514 subsumed
   3.9s
 */

main()
{
  int s;
  int b1, b2, b3, b4;
  s = 0;

  if (b1>0) {
    if (b2>0) {
      if (b3>0) {
	if (b4>0) { s=s; }
      }
    }
  }

  if (BLAST_NONDET1) s+=1;
  if (BLAST_NONDET2) s+=2;
  if (BLAST_NONDET3) s+=4;
  if (BLAST_NONDET4) s+=8;
  if (BLAST_NONDET5) s+=16;
  if (BLAST_NONDET6) s+=32;
  if (BLAST_NONDET7) s+=64;
  if (BLAST_NONDET8) s+=128;

  // BLAST if (b1>0 && b2>0 && b3>0 && b4>0 && s >= 256) ERROR: goto ERROR;
  
  // TRACER 
  _ABORT(b1>0 && b2>0 && b3>0 && b4>0 && s >= 256);
  
    
}
