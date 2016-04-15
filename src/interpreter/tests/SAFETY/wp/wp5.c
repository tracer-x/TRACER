// SAFE
// w/ wp we subsume the second subtree

void main(){
  int x,y;

  x=0;

  if (y>0)
    x=x+1;
  else
    x=x+2;

  x++; 
  x=x+2;
  x=x+3;
  

  _TRACER_abort(x > 50);

}

