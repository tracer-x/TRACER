// SAFE

main(){
  int x,y,z;
  int NONDET1,NONDET2,NONDET3;

  if (NONDET2>0)
    y=2;
  else
    y=3;

  if (NONDET3>0)
    x=4;
  else
    x=5;

  if (NONDET1>0)
    z=5;
  else
    z=6;


  _TRACER_abort(x > 10 || y > 5 );

}
