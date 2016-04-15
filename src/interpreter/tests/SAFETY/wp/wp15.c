// Limitations of ndwp: solved with special compilation. Basically,
// all variables used across multiple functions (return values, actual
// parameters, etc) are defined as global variables

int z;  

//int x,y,z;

int foo(){
  int y1;
  if (y1>0) {
   z = 3;
  }
  else {
    y1 = 1;
  }
  return y1;
}

main()
{

  int x,y;

  if (x>0) {
    z = 2;  
  }
  else {
    x = 0; 
  }
  
  y= foo();
  
  _TRACER_abort(x+y<=0);
}
