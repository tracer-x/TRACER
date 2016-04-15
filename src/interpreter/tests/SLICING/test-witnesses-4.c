/***********************************************************************/
//       Show witness paths improve precision w/ loops
/***********************************************************************/

int NONDET1,NONDET2;

int foo(){
  int x,y,z;

  if (NONDET1)   
    y =0;    
  else{
    y = z ;  /*OUT w/witnesses */
    x = 0 ;  
  }
 
  if (x > 0)   
    x = y ;  

  return x;               
}


void main(int n){
  int p,i;

  i=0;
  while (i<n){
    if (NONDET2) 
      p=5;
    else  
      p=foo();
    i++;
  }
  return;               
  _SLICE(p);
}

     
