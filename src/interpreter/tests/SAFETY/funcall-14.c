// UNSAFE 

int foo(){
  int  tmp=1;
  return tmp;
}

main(){
  int x,y,p,q;
  
  if (q>0) y=2;
  else y=3;


  if (p>0) x=1;
  else x=2;

  foo();

  _TRACER_abort(x==2);

}
  
