int main(){

  int x=0;
  int y=0;
  int TRACER_NONDET;

  while (TRACER_NONDET) {
    if (TRACER_NONDET) {
      x = x+1; 
      y = y+2;
    } else if (TRACER_NONDET) {
      if (x >= 4) {
	x = x+1; 
	y = y+3; 
      }
    } 
  }
  
  _TRACER_abort(3*x < y);
}  
