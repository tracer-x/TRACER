/*
  For this example Blast doesn't seem to get the
  wp as predicates
*/

int main()
{
  int x;
  int a[10];

  x=0;
  if (a[0]) x+=9;
  if (a[1]) x+=8;
  if (a[2]) x+=55;
  if (a[3]) x+=0;
  if (a[4]) x+=41;
  if (a[5]) x+=27;
  if (a[6]) x+=13;

  if (x==99) {
  ERROR: goto ERROR;
  }
  return 0;
}
