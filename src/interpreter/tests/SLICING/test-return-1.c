// NOTE: the last return may be included even if it does not affect
// the value of the variable of interest.  We need to fix this.

int main(){
  int x;
  int a,b,c;

  /*IN*/  if (x==0) { /*IN*/ return 0;}  // IN else's
  /*IN*/  if (x==1) { /*IN*/ return 1;}  // IN else's
  /*IN*/  if (x==2) { /*IN*/ return 2;}  // IN else's
  /*IN*/  if (x==3) { /*IN*/ return 3;}  // IN else's

  b=a;                /*IN*/ 
  c=b;                /*IN*/
  return 1000;        /*OUT*/ //but it's IN due to how we deal with return's
  _SLICE(c);
}  
