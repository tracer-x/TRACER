/******************************************************************/
/*                 Slicing Test Problem                           */
/******************************************************************/
/* Features:                                                      */
/*  * control optimization (i=0)
/*  * Interprocedural                                             */
/******************************************************************/

int foo(int /*IN*/n){ return n + 5;  /*IN*/}  

int bar(int /*OUT*/n){ return n + 25; /*OUT*/} 

void main()
{
  int x,y;
                       /* w/ control opt*/ /*w/o control opt*/
  int i=0;                  /*OUT*/             /*IN*/
  if (i<10) {               /*OUT*/             /*IN*/
    y = y+foo(666);         /*IN*/              /*IN*/
    x = bar(/*OUT*/y)+1;    /*OUT*/             /*OUT*/ 
    i++;                    /*OUT*/             /*OUT*/ 
  }

  return;
  _SLICE(y);
}
