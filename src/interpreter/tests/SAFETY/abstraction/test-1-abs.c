// SAFE

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
  _TRACER_abstract(x,y,z,error,x>0);

  _TRACER_abort(x<=0);

}
  
    
    

