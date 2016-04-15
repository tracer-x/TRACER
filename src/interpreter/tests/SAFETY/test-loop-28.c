// SAFE

void main(int N){
  int i,j,x,p;

  x=0;
  
  // first loop  
  _TRACER_assume(p>0);
  i=0;
  
  while (i < N){
    i++;
    p++;
  }

  // second loop  
  j=0;
  while (j < N){
    j++;
    if (!p) x=1;
  }
   
  _TRACER_abort(x>0);

}
