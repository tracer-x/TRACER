/*
  1st set        2nd set        no. nodes     covered       time
  no. of ifs     no. of ifs
  ---------------------------------------------------------------
  3              3              171           49            0m5.750s
  3              4              216           61            0m8.859s
  3              5              260           73            0m9.984s
  3              6              307           86            0m12.406s
  3              7              357           100           0m14.578s 
  4              7              462           130           0m16.656s
  5              7              298           84            0m24.515s
  6              7              326           92            0m26.032s
  7              7              430           124           0m36.453s    
*/


#define skip (x=x)

int x;
int a1, a2, a3, a4, a5, a6, a7;
int b1, b2, b3, b4, b5, b6, b7;

main()
{
  int r, s;

  r = s = 0;

  /* 1st set */
  if (a1) skip; else r += 1;
  if (a2) skip; else r += 2;
  if (a3) skip; else r += 4;
  if (a4) skip; else r += 8;
  if (a5) skip; else r += 16;
  if (a6) skip; else r += 32;
  if (a7) skip; else r += 64;

  /* 2nd set */
  if (b1) skip; else s += 1;
  if (b2) skip; else s += 2;
  if (b3) skip; else s += 4;
  if (b4) skip; else s += 8;
  if (b5) skip; else s += 16;
  if (b6) skip; else s += 32;
  if (b7) skip; else s += 64;

  if ( (r!=0 || s >= 128) && r <=0)
    ERROR: goto ERROR;

}
