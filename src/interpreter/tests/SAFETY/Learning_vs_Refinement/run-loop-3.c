// This example works bad for BLAST and TRACER

// UNSAFE

void main(int a){

  int i,c;
  i=0;
  c=0;

  while (i<100){
    c = c+i;
    i++;
  }
  // _ABORT(a <= 0);
  if (a<=0){
  ERROR: goto ERROR;
  }
  return;
} 
