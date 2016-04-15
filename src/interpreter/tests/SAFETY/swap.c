// UNSAFE
int Swap(int* x, int* y) { // params are int* instead of int
   int temp;
   temp = *x;              // use * to follow the pointer back to the caller's memory
   *x = *y;
   *y = temp;

   return 0;
}


void main(){
  int x=15;
  int y=30;
  int ret; 

  ret = Swap(&x,&y);
  _TRACER_abort(x==30);


}
