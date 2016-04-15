// To test witnesses in presence of function calls.

// W/ witnesses     : WCET=17
// Without witnesses: WCET=20 (each function call costs 1+1+1=3)

int inc(int x){
  return x+1;
}

void main(){
  int x,t;

  t=0;
  if (x>0) 
    t=inc(t);
  else{  
    t=inc(t);
    t=inc(t);
    t=inc(t);
  }

  if (x<5) 
    t=inc(t);
  else{
    t=inc(t);
    t=inc(t);
  }
  
  return;
}

