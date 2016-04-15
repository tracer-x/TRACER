// control optimization is applied. (compare with
// test-if-then-else-4.c to see effects of the optimization).

void main(int x){
  int y;
  int flag, x1,x2,x3;

    x3   = 1;          /*IN*/ /*OUT if control opt*/
    x2   = x3;         /*IN*/ /*OUT if control opt*/
    x1   = x2;         /*IN*/ /*OUT if control opt*/
    flag = x1;         /*IN*/ /*OUT if control opt*/

    if (flag > 0){     /*IN*/ /*OUT if control opt*/  // else branch also OUT
      y = x;           /*IN*/
    }
 
    return;            /*OUT*/
  _SLICE(y);
}
