
int x;
int y;
int z;
int w;
int TRACER_NONDET;

int main(){
  x=0;
  y=0; 
  z=0; 
  w=0;

  while (TRACER_NONDET) {
    
    if (TRACER_NONDET) {
      x = x+1; 
      y = y+2;
    } else if (TRACER_NONDET) {
      if (x >= 4) {
	x = x+1; 
	y = y+3; 
	z = z+10; 
	w = w+10;
      }
    } else if (x >= z && w > y) {
      x = -1 * x; 
      y = -1 * y; 
    }
    
  }
  
  
  _TRACER_abort(3*x < y);
} 
