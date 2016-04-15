int x;

// COMMENT: if the function call has no return value or no input
// arguments is needed then there is no
// constraints to be included in the slice but it doesn't mean that the 
// function call is sliced away.

int R(int a){
  x=0;              /* IN */
  return 333;       /* OUT*/
}

int P(int a){
  x=1;              /* OUT */  
  R(a);             /* OUT */  
  return x;         /* OUT */   
}

int Q(int a){
  x=2;              /* OUT */
  R(a);             /* OUT input argument */   
  return 666;       /* OUT */
}

void main(){
  int UNK;
  Q(UNK);           /* OUT input argument */  
  return;           /* OUT*/
  _SLICE(x);
}
