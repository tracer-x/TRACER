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
   69 predicates
   13.41s
 BLAST w/ -predH 7 
   68 predicates
   157.05s
 TRACER
   1546 states and 515 subsumed
   4.09s
 */

main()
{
  int s;
  int b1, b2, b3, b4, b5;
  s = 0;

  if (b1>0) {
    if (b2>0) {
      if (b3>0) {
	if (b4>0) {
	  if (b5>0) { s=s; }
	}
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

  // BLAST 
  if (b1>0 && b2>0 && b3>0 && b4>0 && b5>0 && s >= 256) ERROR: goto ERROR;    
  // TRACER _ABORT (b1>0 && b2>0 && b3>0 && b4>0 && b5>0 && s >= 256);
  


}
