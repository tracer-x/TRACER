

int main()
{
  /* 0 */
  int a[10];
  int i;
  int tmp;

  i = 0;                    /*IN*/

  /* 4 */
  while (i <= 8) {          /*IN*/
    /* 6 */
    if (a[i] > a[i+1]) {    /*IN*/
      /* 7 */ 
      tmp = a[i+1];         /*IN*/
      a[i+1] = a[i];        /*IN*/
      a[i] = tmp;           /*IN*/
    }
    /* 10 */
    i++;                    /*IN*/
    /* 11 */
  }
  /* 5 */

  /* 12 */
  _SLICE(a);
}
