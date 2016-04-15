

int foo(int x)
{
  int i, j;

  i = 0;
  j = 0;

  while (i<x) {
    if (x<0) {
      j+=2;
    } else {
      j++;
    }
    i++;
  }

  return j;
}


int bar(int x)
{
  return x + x + x;
}

int main()
{
  int x, y, z;

  if (z>0) {
    z = 1;
    x = foo(z);
  } else {
    z = 2;
    x = foo(z);
  }

  if (x<0) {
    y = bar(x);
  } else {
    y = 1;
  }

  return y;
}
