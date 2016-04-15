int main(){
  int x=0;
  int y=0;
  int error=0;
  int TRACER_NONDET;

  while (TRACER_NONDET) {
    x = x+1;
    y = y+1;
  }
  
  while (x != 0) {
    x = x-1;
    y = y-1;
  }
  
  if (y != 0)
    error=1;
  
  _TRACER_abort(error==1);
}

