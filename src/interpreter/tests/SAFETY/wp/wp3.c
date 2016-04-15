/* Example to show that using wp produces more subsumption than
   deletion*/

void main(){
  int x,y;

  if (y>0)
  // ndwp: true
  // deletion: true
    x=2;
  else{
  // ndwp: true
  // deletion: true
    x=47;
  }
  //////////////////////////
  // ndwp    : x<=47
  // deletion: x=2
  //////////////////////////
  x++; 
  x=x+2;  
  // deletion: x = 5
  // ndwp    : x<=50
  _TRACER_abort(x > 50);

}

