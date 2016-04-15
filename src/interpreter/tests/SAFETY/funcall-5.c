// SAFE

struct foo{
  int id;
  int data;  
};

struct foo bar(struct foo x, struct foo y)
{
  x.data = 10;
  y.data = 20;
  return x;
}

void main()
{
  int x,z, status;  
  struct foo a,b,c;
  c = bar(a,b);
  _TRACER_abort(c.data != 10);
  return;
}

