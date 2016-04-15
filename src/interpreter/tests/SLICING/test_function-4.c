int x;

// COMMENT: if the function call has no return value or no input
// arguments is needed then there is no
// constraints to be included in the slice but it doesn't mean that the 
// function call is sliced away.

// NOTE: the statement x=2 in Q is included because the statement
// x=0 in R may not be executed. See test_function-11.c to test the other case.

int R(int /*IN*/ a){
  /* IN  */if (a>0){ /* IN */ x = 0;}
  return 333; /*OUT*/
}

int P(int a){
  x=1;              /* OUT */  
  R(/*OUT*/a);   
  return x;         /* OUT */   
}

int Q(int a){
  // also IN parameter passing
  x=2;        /* IN */
  R(/*IN*/a);    
  return 666; /* OUT */
}

int main(){
  int UNK;
  Q(/*IN*/UNK);     
  return 333; /*OUT*/
  _SLICE(x);
}
