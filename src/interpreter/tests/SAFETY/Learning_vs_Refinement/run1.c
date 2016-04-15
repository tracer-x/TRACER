void p();
int BLAST_NONDET;
int x0, x1, x2, x3, x4, x5, x6, x7, x8, x9;
/*
BLAST
  w/ or w/o -predH 7 
  10 predicates
  4.072s
TRACER
  83 states and 2 subsumed
  0.15s  
*/
int main() {
  x0 = 0; x1 = 0; x2 = 0; x3 = 0; x4 = 0; x5 = 0;
  x6 = 0; x7 = 0; x8 = 0; x9 = 0;  
  p();  
  // BLAST
  if (x0+x1+x2+x3+x4+x5+x6+x7+x8+x9 == 33) ERROR: goto ERROR;
  // TRACER _ABORT(x0+x1+x2+x3+x4+x5+x6+x7+x8+x9 == 33); 
  
  
  return 0;
}

void p() {
	if (BLAST_NONDET) x0=x0+0; else x0=x0+1; 
	if (BLAST_NONDET) x1=x1+5; else x1=x1+61; 
	if (BLAST_NONDET) x2=x2+10; else x2=x2+11; 
	if (BLAST_NONDET) x3=x3+100; else x3=x3+111; 
	if (BLAST_NONDET) x4=x4+55; else x4=x4+331; 
	if (BLAST_NONDET) x5=x5+200; else x5=x5+201; 
	if (BLAST_NONDET) x6=x6+40; else x6=x6+211; 
	if (BLAST_NONDET) x7=x7+82; else x7=x7+207; 
	if (BLAST_NONDET) x8=x8+73; else x8=x8+21; 
	// if (BLAST_NONDET) x9=x9+49; else x9=x9+663; 
}

