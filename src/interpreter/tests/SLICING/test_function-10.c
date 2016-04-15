/******************************************************************/
/*                 Slicing Test Problem                           */
/******************************************************************/
/* Features:                                                      */
/*  * Loops                                                       */
/*  * Interprocedural                                             */
/******************************************************************/

int foo(int /*IN*/ n)
{
  int i=0;        /* IN */
  int s=0;        /* IN */

  while (i<n) {   /* IN */
    s = s+i;      /* IN */
    i++;          /* IN */ 
  }
  return s;       /* IN */
}

int bar(int n)
{
  int x;          
  x = n+n;        /* OUT */
  return x;       /* OUT */
}

int main()
{
  int i=0;                 /* IN */
  int x, y;
      
  while (i<10) {           /* IN */  
    y = y + foo(/*IN*/i);  /* IN */
    x = bar(/*OUT*/y) + 1; /* OUT */
    i++;                   /* IN */
  }

  return y;                /* OUT */
  _SLICE(y);
}
