// UNSAFE

int i = 0;

int foo() 
{ 
  i++; 
  return i; 
}

void main() {

  while(foo() < 10){}

  _TRACER_abort(i == 10);

}
