// SAFE
void main(int N){
  int i;
  int *x;

  *x=0;
  while(i<N){
    (*x)++;
    (*x)--;
  }

  _TRACER_abort(*x !=0);
}
