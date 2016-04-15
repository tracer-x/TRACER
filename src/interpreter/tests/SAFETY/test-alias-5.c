// UNSAFE
// As test-alias-3.c but unsafe.

main(){
  int a[5]; 
  int *p;


  a[0]=45;
  a[1]=88;

  p =a;
  _TRACER_abort(*p == 45 || *(p+0) == 45);
}
