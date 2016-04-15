// SAFE
extern bar();
int foo(){
  int a;
  a = 5;
  a = a + bar();
  return a;
}

int error=0;

void main(){
  int x,y,z;
  x = foo();

  if (x*x*x > 0){
    if (x>0 && y==10)  
      z=39;
  } else { // x < 0
    if (x>0 && y==20)
      error=1;    // false positive (bug not reachable)
  }

  _TRACER_ABORT(error==1);
  return;
}

