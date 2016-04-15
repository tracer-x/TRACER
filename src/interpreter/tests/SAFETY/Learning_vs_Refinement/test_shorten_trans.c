

main()
{
  int x=1, y=2, z=3;
  int k;

  while (x < z) {
    y = x + z;
    k = y + y;
    x = x+1;

    if (x==z) {
      x = x+1;
      k = z + y;
    }

    y = y + y;
    k = k + k;
  }

  return 0;
}
