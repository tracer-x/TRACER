// SAFE

void main(){

  int *p;
  int NONDET;

  if(NONDET)
    *p=1;
  else
    *p=2;

  _TRACER_abstract(*p,1 <= *p, *p <=2);  
  _TRACER_abort(*p > 2);
}
 
