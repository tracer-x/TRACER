// UNSAFE

struct foo{
  int data;  
};

int bar(struct foo *x, struct foo *y)
{

  x->data = 10;
  y->data = 20;

  return 0;
}

void main()
{
  struct foo a;
  struct foo b;

  bar(&a,&b);
  _TRACER_abort(b.data == 20);
  return;
}
