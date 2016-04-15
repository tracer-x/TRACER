// SAFE

main(){
  int x,y,z;
  int TRACER_NONDET;

  x = 0;

  if (y>0)
    y=2;
  else
    y=5;

  if(TRACER_NONDET>0)
    x=x+1;
  else
    x=x+4;

  _TRACER_abort(x + y > 50);

}
