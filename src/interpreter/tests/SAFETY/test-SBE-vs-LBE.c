// SAFE
// Example of the paper Software Model Checking via Large-Block
// Encoding

// With any interpolant (sp, clp, wp) we get an exponential tree (138
// states). If we would encode this program as Boolean formula the
// tree would be linear.

main(){

  int p1,p2,p3,p4,p5;
  int x1,x2,x3,x4,x5;

  if (p1) x1=1;
  if (p2) x2=2;
  if (p3) x3=3;

  if (p1){
    _TRACER_abort(x1 != 1);
  }

  if (p2){
    _TRACER_abort(x2 != 2);
  }

  if (p3){
    _TRACER_abort(x3 != 3);
  }

}
