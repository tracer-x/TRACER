// SAFE
void main(){

  int a;
  int *p, *x;

  /*1*/  *x=0; 
  /*2*/   p= x;
  /*3*/  *p=1;

  _TRACER_abort(*x==0); 

}
