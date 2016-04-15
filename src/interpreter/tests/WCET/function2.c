/*
  Program to test function calls, especially to check
  that array updates are kept in order
 */

int x[10];

int inc(int a)
{
  x[5] = 0;

  return a+1;
}

main()
{
  int y, i;

  y = 0;

  i=5;

  x[i] = inc(y);

  if (x[i]==0)
    x[i]=1;

  return x[i];
}
