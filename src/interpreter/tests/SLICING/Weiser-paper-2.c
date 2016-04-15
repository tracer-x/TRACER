/******************************************************************/
/* This program is adapted to C from Weiser'84 "Program Slicing"  */
/******************************************************************/
/* Features:                                                      */
/*  * Single Loop                                                 */
/*  * Intraprocedural                                             */
/*  * Control dependencies generate new data dependencies.        */
/******************************************************************/

int main(int c, int k){
  int a,b,x,y,z;

/* 1 */  a = 5;            /* IN */
/* 2 */  while ( k < 100){ /* IN */
/* 3 */    if (c < 7){     /* IN */
/* 4 */      b = a;        /* IN */
/* 5 */      x = 1;        /* IN */
           }
          else{
/* 6 */      c = b;        /* IN */
/* 7 */      y = 2;        /* IN */
          }
/* 8 */    k = k + 1;      /* IN */
         }
  /* 9 */  z = x + y ;     /* IN */
  /* 10 */ return z;       /* OUT */
  _SLICE(z);
}
