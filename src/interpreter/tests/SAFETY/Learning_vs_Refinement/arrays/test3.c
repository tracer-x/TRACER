/*
  Blast cannot prove that this program is safe
 */

main()
{
  int a[10];
  int i, x;

  i = 0;
  while (i < 10) {
    a[i]=0;
    i = i+1;
  }

  i = 0;
  while (i < 9) {
    if (x > 0) {
      a[i]=1;
    }
    i = i+1;
  }

  /*
  if (a[10]>0)
    ERROR: goto ERROR;
  */

  _ABORT(a[10]>0);

}
