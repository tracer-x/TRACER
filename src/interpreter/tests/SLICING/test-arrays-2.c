void main()
{
  /* 0 */
  int a[5];
  int x, y;
  /* 3 */

  if (a[x]>0) {       /*OUT*/
    /* 4 */
    y=1;              /*OUT*/
    /* 5 */
  } else {            /*IN*/ 
    /* 6 */
    a[x]=3;           /*IN*/
  }
  /* 7 */
  if (a[x]<0) {       /*OUT*/              
    /* 8 */  
    y=0;              /*OUT*/              
    /* 9 */
  } else {            /*OUT*/              
    /* 10 */ 
    y=1;              /*OUT*/              
  }
  /* 11 */
  x=a[x];             /*IN*/               
  /* 13 */
  _SLICE(x);
}
