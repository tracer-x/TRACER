/****
This program shows how sensitive is BLAST to the safety
condition. Instead, TRACER is mostly insensitive.

    BLAST          TRACER
    #pred T       #states #sub #T
199  6   0.31     51       2   0.06s
353      2.95     51       2   0.06s
388      2.37         .........
400      2.34
416  31  4.04     51       2   0.07s
417      3.00         ......... 
418      4.02     51       2   0.06s
419      3.06         ......... 
474      1.55         .........
519      1.24         .........
699      1.25         .........
799      1.35     51       2   0.06s       

***/

void p();
int BLAST_NONDET;
int c;

int main() {
  c = 0;
  p();
  // BLAST 
  if(c == 199) ERROR:goto ERROR;
  // TRACER  _ABORT(c == 416); 
  return 0;
}

void p() {
	if (BLAST_NONDET) c=c+1; else c=c+2; 
	if (BLAST_NONDET) c=c+4; else c=c+8; 
	if (BLAST_NONDET) c=c+16; else c=c+32; 
	if (BLAST_NONDET) c=c+64; else c=c+128; 
	if (BLAST_NONDET) c=c+256; else c=c+512; 
}

