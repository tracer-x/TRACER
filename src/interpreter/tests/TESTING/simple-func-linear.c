// From DART paper
void main(int x, int y){
  int DART_ERROR = 0;
  int z;
  
  z = 2*x;
  DART_ERROR = foo(x,y,z,DART_ERROR);

  return;
  if (DART_ERROR > 0)
  ERROR: goto ERROR;
}

int foo(int x, int y, int z, int e){

  if (z == y){
    if (y == x+10)
      e++;
  }

  return e;

}
