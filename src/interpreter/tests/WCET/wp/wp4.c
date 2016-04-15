/*
  Using wp should result in less state space than using deletion alone
 */

int foo(int x)
{
  int y;

  if (x<0) {
    y = -1;
  } else {
    y = 1;
  }

  return y;
}


int main()
{
  int i, j, x, y;

  if (y<0) {
    x = 1;
  } else {
    x = 2;
  }

  i=0;

  /* 
     Here we gotta have wp:
     x<0 -> false
  */
  y = foo(x);

  return 0;
}
