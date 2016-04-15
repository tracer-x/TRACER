// SAFE

// run with -loop-inv invgen and
// minmax internal flag "flag_mark_non_invariant_to_subsume(n)"

void main(){
  int k,a,b,n,TRACER_NONDET;
  int i,j,x,y;

  // first loop  
  if(n >=0){    
    k=0; a=0; b=0;    
    while (k < n){
      if (TRACER_NONDET){
	a=a+1;
	b=b+2;
      }
      else{
	a=a+2;
	b=b+1;
      }
      k++;    
    }  
  } 

  // second loop
  x = i;
  y = j;
  while ( x!=0){
    x--;
    y--;
  }
   
  if (i==j)
    _TRACER_abort(y !=0);

  if (n > 0)
    _TRACER_abort(a+b != 3*n);

}
