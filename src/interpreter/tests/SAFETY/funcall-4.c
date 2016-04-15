// SAFE

int foo(int a){

  int b;
  b = a+1;
  return b;
}

void main(){

  int init,x,y,z;
   
  init=8;
  x= foo(init+1);
  y= foo(x+2);
  z= foo(y+3);

  _TRACER_abort(z != 17);
}
