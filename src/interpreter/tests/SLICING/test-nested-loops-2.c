// If option -DOPTIMIZED_SLICING_FIXPO is used then the slicing
// fixpoint can be more efficient. The inner loop is computed only once rather than twice.

int main()
{
  int i, j, a, b, n, tmp;
  i = 0;                  /*IN*/
  while (i < n-1) {       /*IN*/
    j = 0;                /*IN*/
    
    while (j < n-1-i) {   /*IN*/
      if (a > b) {        /*IN*/
        /* swap */
        tmp = b;	  /*OUT*/
	b = a;	          /*IN*/ 
	a = b;            /*IN*/
      }      
      j++;                /*IN*/
    }           

    i++;                  /*IN*/
  }
  return a;
  _SLICE(a);
}
