int x;
int y;
int TRACER_NONDET;

int main(){
  x=0;
  y=0;

  while (TRACER_NONDET) {
    x=x+1;
    y=y+1;
  }
  
  while (x > 0 || x < 0) {
    x=x-1;
    y=y-1;
  }
  
  
  _TRACER_abort(y < 0 || y > 0);
}
