// SAFE

int * bar(int x[],int y[])
{
  x[0] = 10;
  y[0] = 20;
  return x;
}

void main()
{
  /* int x,z, status;   */
  int a[5]; 
  int b[5];
  int * c;

  c = bar(a,b);
  _TRACER_abort(*c != 10);
  return;
}
