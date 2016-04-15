// SAFE
// Trivial example to check basic functionality

/* 
   User abstraction is too weak so minmax locks "x=0" and restarts.
   Interestingly, even if we don't have a loop, minmax restarts since
   the abstraction done was too weak.
 */

void main(){

  int x,y;
  y=99; 
  x=0;  

  _TRACER_abstract(x,x>=-2);
  _TRACER_abort(x<0);

}
  
    
    

