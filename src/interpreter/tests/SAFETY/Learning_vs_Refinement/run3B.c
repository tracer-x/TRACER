void p();
int BLAST_NONDET;
int a, b, c;
int x0, x1, x2, x3, x4, x5,x6, x7, x8, x9;

int main() {
  a = 0; b = 0; c = 0;
  x0 = 0; x1 = 0; x2 = 0; x3 = 0; x4 = 0; x5 = 0; 
  x6 = 0; x7 = 0; x8 = 0; x9 = 0;

  if (BLAST_NONDET) a = 1; else a = 2; 
  if (BLAST_NONDET) b = 1; else b = 2; 
  p();
  _ABORT(c == 416 || a == 3 || b == 3);
  return 0;  
}

void p() {
	if (BLAST_NONDET) c=c+1; else c=c+2; 
	if (BLAST_NONDET) c=c+4; else c=c+8; 
	if (BLAST_NONDET) c=c+16; else c=c+32; 
	if (BLAST_NONDET) c=c+64; else c=c+128; 
	if (BLAST_NONDET) c=c+256; else c=c+512; 
}

