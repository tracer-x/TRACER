// Trivial example to check basic functionality

int error=0;
void main(){
  int x,y,z;
 
  if(z>0){
    x=4;
    y=1;
  }
  else{
    x=100;
    y=2;
  }

  _TRACER_abstract(x,x>0);     // SAFE
  //_TRACER_abstract(x);       // UNSAFE (w/ minmax it forces 
                               // restarts until safe is proved)
  //_TRACER_abstract(x,x==5);  // UNSOUND abstraction  
  //_TRACER_abstract(y,y>=1);  // SAFE
  //_TRACER_abstract(y);       // SAFE
  //_TRACER_abstract(y,y>1);   // UNSOUND abstraction

  _TRACER_abort(x<=0);

}
  
    
    

