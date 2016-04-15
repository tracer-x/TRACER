// SAFE

int * bar(int * x,int *y)
{
  *x = 10;
  *y = 20;
  return x;
}

void main()
{
  /* int x,z, status;   */
  int *a; 
  int *b;
  int *c;

  c = bar(a,b);
  _TRACER_abort(*c != 10);
  return;
}
