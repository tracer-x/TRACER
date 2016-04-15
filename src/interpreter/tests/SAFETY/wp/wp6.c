// SAFE
// wp avoids the second subtree

void main(){
  int x,y;

  if (y>0)
    x=1;
  else
    x=47;
  
  if (x>0)
    x=x+3;
  else
    x=x+5;
  
  _TRACER_abort(x > 50);

}

