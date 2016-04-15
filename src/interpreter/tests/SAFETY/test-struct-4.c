// UNSAFE
// As test-struct-3.c but unsafe.
struct foo{
  int data;  
};

void main()
{
  struct foo a,*x;
  a.data =33;  

  x =&a;
  _TRACER_abort(x->data == 33);
  return;
}
