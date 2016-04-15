// UNSAFE

// TRACER suffers from non-termination while BLAST does not.
// if -h td (lock in top-down order) then TRACER can terminate
main(){
  int i,n,x,NONDET;

  i=0;x=0;
  while (i < 1){
     x++;
    if (NONDET > 0 ){
      x--;
    }
    i++;
  }

  _TRACER_abort(x !=0);
  //if (x!=0) ERROR:goto ERROR;

}
