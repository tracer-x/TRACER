// SAFE

struct foo{
  int data;  
};

void main()
{
  struct foo a,*x;
  a.data =33;  

  x =&a;
  _TRACER_abort(x->data == 44);
  return;
}
