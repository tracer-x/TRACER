// From DART paper (modified)
void main(int x, int y, int z){
/*<0>*/  int DART_ERROR = 0; 
         x = -5;
/*<1>*/  if (x*x*x > 0)
         {
           z = 5;
           // x > 0
/*<2>*/    if (x<0 && y==10)  // false positive (bug not reachable)
/*<3>*/             DART_ERROR++;
/*<4>*/  } else 
         { // x < 0
           z = -5;
/*<5>*/    if (x<0 && y==20)
/*<6>*/       DART_ERROR++;    // real bug
/*<7>*/  }

  return;
  if (DART_ERROR > 0)
  ERROR: goto ERROR;
}

/* // For CUTE */
/* f(){  */
/*   int tmp1; */
/*   int tmp2; */
/*   CUTE_input(tmp1); */
/*   CUTE_input(tmp2); */
/*   testme(tmp1,tmp2); */
/* } */
