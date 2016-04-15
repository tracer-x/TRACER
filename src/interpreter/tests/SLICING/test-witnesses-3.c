/***********************************************************************/
//       Show witness paths improve precision w/ functions
/***********************************************************************/

int NONDET1,NONDET2;

int foo(){
  int x,y,z;

  if (NONDET1)   
    y =0;    
  else{
    y = z ;  
    x = 0 ;  
  }
 
  if (x > 0)   
    x = y ;  

  return x;               
}


void main(){
  int p;

  if (NONDET2) p=5;
  else  p = foo();

  return;               
  _SLICE(p);
}

     
