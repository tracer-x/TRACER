// To test witnesses

// W/ witnesses     : WCET=11
// Without witnesses: WCET=12

void main(){
  int x,t;
  int NON_DET;
  t=0;

  while (NON_DET){
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
  }
  return;
}
