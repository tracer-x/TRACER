// SAFE

// We can prove safety without narrowing since although x is unknown
// we can detect that the inner 'if' clashes with the outer. However, 
// the testing algorithm will apply narrowing when if(x>0) and hence, 
// it cannot prove safety.

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
  if(x>0 /* && y==10 */){ 
    z=30;
  }
  else{
    if(x>0 && y==20 )
      error++;   // unreachable
  }
  _ABORT(error>0);

}

