/*
  Example with pointers
*/
int *p;
int x, y, z;

int main()
{
/*   void *p; */
/*   int x, y, z; */

                            // PS w/ control opt.   PS w/o control opt.     PI
  y = 0;                         /*OUT*/            /*IN*/                /*IN*/          
  x = 0;                         /*OUT*/            /*OUT*/               /*OUT*/                       
  p = &x;                        /*OUT*/            /*OUT*/               /*OUT*/

  if (y>0) {                     /*OUT*/            /*OUT*/               /*IN*/  
    y = 1;                       /*OUT*/            /*OUT*/               /*IN*/ 
  } else {                       /*OUT*/            /*IN*/                /*IN*/ 
    y = 2;                       /*IN*/             /*IN*/                /*IN*/
  }

  *p = 10;                       /*OUT*/            /*OUT*/               /*OUT*/

  z=y;                           /*IN*/             /*IN*/                /*IN*/

  _SLICE(z);

}
