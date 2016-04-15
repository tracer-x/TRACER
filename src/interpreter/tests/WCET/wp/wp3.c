/*
  Using constraint deletion instead of wp
  would result in two traversals of the loop
*/

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
  while (i<10) {
    if (x<0) {
      j+=2;
    } else {
      j++;
    }
    i++;
  }

  return 0;
}
