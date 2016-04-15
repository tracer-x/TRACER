// SAFE 

main(){

  int x,y,z;

  if (x>4)
    z=4;
  else
    x=5;

  _TRACER_assume(x>0);

  y=x;
  
  _TRACER_abort(!(y > 4));

}
