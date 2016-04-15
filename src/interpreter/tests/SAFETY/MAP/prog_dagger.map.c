int x; 
int y; 
int z; 
int w;
int error;
int TRACER_NONDET;

int main(){
  x = 0;
  y = 0;
  z = 0; 
  w = 0;
  error == 0;

  while (TRACER_NONDET) { 
    if (TRACER_NONDET) {
      x = x+1; 
      y = y+100;
    } else if(TRACER_NONDET) {
      if (x >= 4) {
	x = x+1; 
	y = y+1;
      }
    } else if (y>10*w && (z>=(100*x))) {
      y = -1 * y;
    }
    w=w+1;
    z=z+10;
  }
  
  if ((x >= 4) && (y <= 2))
    error=1;
  
  _TRACER_abort(error == 1);
}
    
