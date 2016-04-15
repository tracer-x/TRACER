/******************************************************************/
/*                 Slicing Test Problem                           */
/******************************************************************/
/* Features:                                                      */
/*  * control optimization                                        */
/*  * Interprocedural                                             */
/******************************************************************/

// NOTE: Despite the control optimization is applied, i=0 is included
// because of the data-dependency with foo(i)

int foo(int /*IN*/n){ return n + 5;  /*IN*/}  

int bar(int /*OUT*/n){ return n + 25; /*OUT*/} 

void main()
{
  int x,y;
  int i=0;              /*IN*/
  if (i<10) {           /*OUT*/   /*IN*/ /*if slicer_control_opt is 'n'*/
    y = y+foo(/*IN*/i); /*IN*/
    x = bar(y)+1;       /*OUT*/
    i++;                /*OUT*/
  }

  return;
  _SLICE(y);
}
