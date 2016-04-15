// UNSAFE

extern int unknown();
main(){
  int i,n,x, NONDET;
  
  x=0;
  i=0;
  while (i<n) {
    if (unknown() >0){
      _TRACER_abort(x>0); //if (x>0) ERROR: goto ERROR;
    } 
    else{ 
      x = 1;
    }
    i++;
  }
}
