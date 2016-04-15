// SAFE
// Trivial example to check basic functionality

int error=0;
void main(){
  int x,y,z;
 
  z=1;
  x=4;

  _TRACER_abstract(x,z);

  if(z>0){
    x=4;
    y=1;
  }
  else{
    x=100;
    y=2;
  }
  _TRACER_abstract(y,z,error);
  _TRACER_abort(x<=0);

}
  
    
    

