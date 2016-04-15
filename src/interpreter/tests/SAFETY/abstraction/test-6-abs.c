// SAFE

void main(){
  int p;
  int a[5];

  if(p){
    a[0]=1;
    a[1]=a[0]+666;
  }
  else{
    a[0]=2;
  }

  //_TRACER_abstract(a[0],a[1], a[0]>0 && a[1]==667); // unsound abstraction
  _TRACER_abstract(a[0], a[0]>0 ); // safe
  _TRACER_abort(a[0] <= 0);

  
}
