// SAFE

main(){
  int *p,*a;

  *a =45;
  *(a+1) = 88;
  
  p =a;
  _TRACER_abort(*(p+1) != 88);
}

