// To test witnesses

// W/ witnesses     : WCET=9
// Without witnesses: WCET=10

void main(){
  int x,t;

  t=0;
  if (x>0) 
    t=t+1;
  else{  
    t=t+1;
    t=t+1;
    t=t+1;
  }

  if (x<5) 
    t=t+1;
  else{
    t =t+1;
    t =t+1;
  }
  
  return;
}
