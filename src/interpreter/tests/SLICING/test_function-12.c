// Example to show what dependencies have to be propagated back in a
// function call. Basically, when a function call lhs =foo(...) we need 
// to store the caller state EXCEPT lhs and global variables.

                                /* slice on x,y */                /* slice on x*/
int foo(int a){ return 0;}           /*IN*/                           /*IN*/

void main(){
  int x,y,z;
                     
  y = z;                            /*IN*/                           /*OUT*/
  x = foo(/*OUT*/y);                /*IN*/                           /*IN*/ 
  return ;                          /*OUT*/                          /*OUT*/  
  _SLICE(x,y);       
  //  _SLICE(x);
} 
