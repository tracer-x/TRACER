// SAFE

struct foo{
  int data;  
};

struct foo bar(struct foo x, struct foo y)
{
  x.data = 10;
  return x;
}

void main()
{
  int x,z, status;  
  struct foo a;
  struct foo b;
  struct foo c;

  c = bar(a,b);
  _TRACER_abort(c.data != 10);
  return;
}
