/*---------------------------------------------------------------------------*/
// This example shows one of the main features of MINMAX apart from
// restart.
// 
// This feature is SPECULATIVE SUBSUMPTION. Within a loop, our
// algorithm attempts to perform subsumption speculatively (for
// obvious reasons) but establishing some conditions so that the
// subsumption is still correct.
/*---------------------------------------------------------------------------*/

// SAFE

void main()
{
  int i,x,y,NONDET,z;

  x=0;
  z=1;

  _TRACER_assume(y>=0);
  i = 0;
  while (i < 10) {
    if (NONDET > 0) {
      x = x; /* A: any code that preserves x=0 as invariant */
    } else {
      x++;
    }
    /* B:  a piece of code with a big search space */
    _TRACER_abort(y < 0);    
    i++;
  }  
  _TRACER_abort(z<0);
}


/*
                 | x=0,z=1
                 |
                 / 
           y>=0 /
                | i=0
                *
               /
         i<10 /
              |
             / \ 
            /   \
           |    | 
           |    | x++
           |<---
          /\    conditional subsumption
      y<0/  \
       inf   \
             |
             |i++
             |
            goto *
 

*/
