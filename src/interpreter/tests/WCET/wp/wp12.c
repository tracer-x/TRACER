/*
  A small academic example to demonstrate the effectiveness of using
  wp instead of deletion
*/

int main()
{
  int x;
  int a[13];

  x=0;
  if (a[0]) x+=9;
  if (a[1]) x+=8;
  if (a[2]) x+=55;
  if (a[3]) x+=0;
  if (a[4]) x+=41;
  if (a[5]) x+=27;
  if (a[6]) x+=13;
  if (a[7]) x+=5;
  if (a[8]) x+=1;
  if (a[9]) x+=2;
  if (a[10]) x+=3;
  if (a[11]) x+=4;
  if (a[12]) x+=11;

  if (x==99)
    return 1;
  return 0;
}
