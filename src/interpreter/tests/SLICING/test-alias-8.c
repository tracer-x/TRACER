/*
  This program is complementary to test-alias-5.c because here we
  include *p =10 because a heap variable may alias to a stack variable
*/
int *p;
int x, y, z;

int main()
{
                            // PS w/ control opt.  // PS w/o control opt. 
  y = 0;                         /*OUT*/                  /*IN*/
  x = 5;                         /*IN*/                   /*IN*/
  p = &x;                        /*IN*/                   /*IN*/

  if (y>0) {                     /*OUT*/                  /*OUT*/
    y = 1;                       /*OUT*/                  /*OUT*/
  } else {                       /*OUT*/                  /*IN*/
    y = 2;                       /*IN*/                   /*IN*/
  }

  *p = 10;                       /*IN*/                   /*IN*/ 
   z=y;                          /*OUT*/                  /*OUT*/ 

  _SLICE(x,y);

}
