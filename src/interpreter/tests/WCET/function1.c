int inc(int a)
{
  return a+1;
}

main()
{
  int x, y;

  y = 0;

  x = inc(y);

  if (x==0)
    x=1;

  return x;
}
