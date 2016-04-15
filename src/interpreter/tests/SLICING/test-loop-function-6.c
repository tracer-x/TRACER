/******************************************************************/
/*                 Slicing Test Problem                           */
/******************************************************************/
/* Features:                                                      */
/*  * Loops                                                       */
/*  * Interprocedural                                             */
/******************************************************************/

int foo(int n)
{
  int i=0;        /* IN */
  int s=0;        /* IN */

  while (i<n) {   /* IN */  // and the exit condition is OUT */
    s = s+i;      /* IN */
    i++;          /* IN */ 
  }
  return s;       /* IN */
}

int bar(int n)
{
  int x;          
  x = n+n;        /* IN */
  return x;       /* IN */
}

int main()
{
  int i=0;                 /* IN */
  int x, y;
      
  while (i<10) {           /* IN */  // and the exit condition is OUT 
    y = y + foo(/*IN*/i);  /* IN */
    x = bar(/*IN*/y) + 1;  /* IN */
    i++;                   /* IN */
  }

  return y;            /* OUT */ 
  _SLICE(x);
}
