// UNSAFE

// Example on which path-slicing does not work well
void main (int a[])
{
  int i,j;
  i=0; j=1;
  a[j] = 0;

  while (i<1000){
    a[j] = a[j]+1;
    i = i +1;
  }
  _TRACER_abort(a[0] <= 0);
}
