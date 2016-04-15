/*
  Example with array
*/
int a[5];

int main()
{
  //int a[5];
  int x;

              /* w/ array solver */            /* w/o array solver */
             /*     w/o    w/   control opt  */
  a[x]=10;        /*IN*/  /*OUT*/                     /*IN*/
  if (a[x]>0) {   /*IN*/  /*OUT*/                     /*IN*/
    x = 1;        /*IN*/  /*IN*/                      /*IN*/
  } else { 
    x = 0;        /*OUT*/                             /*IN*/
  }

  _SLICE(x);
}
