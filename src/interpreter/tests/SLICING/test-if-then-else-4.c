// control optimization is not applicable (compare with
// test-if-then-else-3.c to see effects of the optimization).

void main(int x){
  int y;
  int flag, x1,x2,x3,x4;

    x3   = x4;      /*IN*/ 
    x2   = x3;      /*IN*/
    x1   = x2;      /*IN*/
    flag = x1;      /*IN*/ 

    if (flag > 0){  /*IN*/ // the else is excluded
      y = x;        /*IN*/
    }
 
    return;         /*OUT*/
  _SLICE(y);
}
