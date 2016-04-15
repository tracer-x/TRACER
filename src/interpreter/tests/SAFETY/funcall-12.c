// UNSAFE

// As funcall-7.c but unsafe

int * bar(int x[],int y[])
{
  x[0] = 10;
  y[3] = 666;
  return y;
}

void main()
{
  /* int x,z, status;   */
  int a[5]; 
  int b[5];
  int * c;

  c = bar(a,b);
  _TRACER_abort(*(c+3) == 666);
  return;
}
