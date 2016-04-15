// SAFE

/* 
   This program shows that TRACER is linear but BLAST is exponential.
/*

BLAST
Note big numbers so we use clp solver.

  w/o -predH 7 -clp
    102 predicates and 117.98s
  w/o -clp
    Fatal error
  
TRACER
    53 states and 0 subsumed
    0.1s
 */

int main() {

  int BLAST_NONDET;
  int c = 0;
  int sum = 0;

  if(c == 0) sum=sum+10;  else sum=sum+40;   
  if(c == 0) sum=sum+50;  else sum=sum+20;  
  if(c == 0) sum=sum+100; else sum=sum+400;   
  if(c == 0) sum=sum+500; else sum=sum+200;    
  if(c == 0) sum=sum+100; else sum=sum+400;  
  if(c == 0) sum=sum+500; else sum=sum+200;  
  if(c == 0) sum=sum+100; else sum=sum+400;  
  if(c == 0) sum=sum+500; else sum=sum+200;
  
  if(c == 0) sum=sum+10; else sum=sum+11;
  if(c == 0) sum=sum+10; else sum=sum+11;
  if(c == 0) sum=sum+10; else sum=sum+11;
  if(c == 0) sum=sum+10; else sum=sum+11;
  if(c == 0) sum=sum+10; else sum=sum+11;
  if(c == 0) sum=sum+10; else sum=sum+11;
  if(c == 0) sum=sum+10; else sum=sum+11;
  if(c == 0) sum=sum+10; else sum=sum+11;
  
  // BLAST
  if(sum == 3000) ERROR: goto ERROR; 
  // TRACER _ABORT(sum == 3000); 
  
  return 0;
}
