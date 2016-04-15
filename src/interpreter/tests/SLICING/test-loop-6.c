/******************************************************************/
/*                 Slicing Test Problem                           */
/******************************************************************/
/* Features:                                                      */
/*  * Loop                                                        */
/*    + Fixpoint reached in several iterations (compute dependency*/
/* 		  			        through loop)     */
/*    + Control dependencies generate data dependencies           */
/*  * Intraprocedural                                             */
/******************************************************************/

int main()
{
  /* 0 */ int i=0;               /* IN */
  /* 1 */ int n=10;              /* IN */ 
  /* 2 */ int x;
  /* 3 */ int y;
  /* 4 */ int z=0;               /* IN */
  /* 5 */ int t;

  /* 6 */
  while (i<n) {                  /* IN */  
    /* 8 */ if (i>0) {           /* IN */
      /* 9 */ x=y; /* 10 */      /* IN */
    } else {                     /* IN */
      /* 11 */ y=z;              /* IN */
      /* 12 */ t=z;              /* OUT */
    }
    /* 13 */
    i=i+1;                       /* IN */
    /* 14 */
  }
  
  /* 7 */ 
  /* 15 */ return x;             /* OUT */ 
  /* 16 */
  _SLICE(x);
}
