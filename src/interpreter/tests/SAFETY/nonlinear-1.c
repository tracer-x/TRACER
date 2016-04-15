// UNSAFE (false positive)

void main(int x, int y){
  int z = 0;
  if (x*x*x > 0){
    if (x>0 && y==10)  
      z = 0;
    _TRACER_abort(z > 0);
  } else { // x < 0
    if (x>0 && y==20)
      z = x*x*x;        // z < 0      
    _TRACER_abort(z > 0);
  }

  return;
}

