int c;
void p() {
  int BLAST_NONDET;

  if (BLAST_NONDET) c=c+1; else c=c+2; 
  if (BLAST_NONDET) c=c+4; else c=c+8; 
  if (BLAST_NONDET) c=c+16; else c=c+32; 
  if (BLAST_NONDET) c=c+64; else c=c+128; 
  if (BLAST_NONDET) c=c+256; else c=c+512; 

/*   if (BLAST_NONDET) c=c+1; else c=c+2;  */
/*   if (BLAST_NONDET) c=c+4; else c=c+8;  */
/*   if (BLAST_NONDET) c=c+16; else c=c+32;  */
/*   if (BLAST_NONDET) c=c+64; else c=c+128;  */
/*   if (BLAST_NONDET) c=c+256; else c=c+512;  */

  return;
}

int main() {  
  c = 0;
  p();p();p();p();  p();p();p();p();
  p();p();p();p();  p();p();p();p();

  _ABORT(c == 832); 
  return 0;  
  //  if (c == 341) 
  //  if (c == 682)
  //  if (c == 1384)
}

// 1  p's: 0.05s
// 2  p's: 0.19s
// 4  p's: 0.95s
// 8  p's: 6.37s
// 16 p's: 55.1s
