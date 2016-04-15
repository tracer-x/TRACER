/*
 * In this example second visitation
 * of <7> should not be subsumed
 */

void main()
{
  /* 0 */
  int a[5];
  int x, y;
  /* 3 */
  if (a[x]>0) {   /*OUT*/
    /* 4 */
    y=1;          /*OUT*/
    /* 5 */
  } else {        /*OUT*/
    /* 6 */
    y=1;          /*OUT*/
  }
  /* 7 */
  if (a[x]<0) {   /*OUT*/
    /* 8 */
    y=0;          /*OUT*/
    /* 9 */
  } else {        /*OUT*/
    /* 10 */
    y=1;          /*OUT*/
  }
  /* 11 */
  x=a[x];         /*IN*/
  /* 13 */
  _SLICE(x);
}
