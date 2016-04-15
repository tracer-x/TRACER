// This shows some differences between ndwp and clp
main(){
  int x;
  int NONDET;

  if(NONDET>0)
    // ndwp: 
    // clp : true 
    x=0;
  else
    x=1;
    // ndwp: x=0 and x>=0 and x<=0 ---> x=0 
    //      ^^^^ this is added due to recovery:
    // pre(x==0,{x=0})
    //     project(x==0 and x>0,{x}) = false
    //     project(x==0 and x<0,{x}) = false
    // negate(false) and negate(false) = true
    // but now the core (x=0) does not imply true!
    // clp : true and  x>=0 and x<=0 ---> x=0 
  if (x==0){
    // ndwp: x=0
    // clp : x>=0 and x <=0 ---> x=0
    _TRACER_abort(x !=0);
  }
}
