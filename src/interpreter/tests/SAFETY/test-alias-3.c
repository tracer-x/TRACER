// SAFE
// Here an array is casted to a pointer

/* 

   This example shows that we need to compile arrays like pointers.

   If ARR_TO_PTR=false then we don't compile arrays like pointers. The
   problem arises with the statement "p=a" because a pointer variable
   is unified to an array variable. Then the abort condition
   _TRACER_abort(*(p+0) != 45) is false simply because at that point p is
   unified to upd(upd(A,0,45),1,88) but p is not an array variable!
   This causes the unification in check_feasibility:
   LocalArr=LocalArrX fails

*/

main(){
  int a[5]; 
  int *p;


  a[0]=45;
  a[1]=88;

  p =a;
  _TRACER_abort((*(p+0) != 45) || (*p != 45));
}
