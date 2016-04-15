main() {
  int x,y,z;
  int NONDET1,NONDET2;

  x=0; z=0;

  if (z>0)  x=10;
  else if (NONDET1>0) y=1;
  else y=2;
    
  if (NONDET2>0) x=x+1;
  else  x=x+2;

  y=y+1;
 
  _TRACER_abort(x>3);
}

