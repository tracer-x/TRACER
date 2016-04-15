int foo(){
  int x;
  x = 5;
  return x;
}
  
int main(){
  int NONDET;
  int i,N;
  int a,res;

  res=0;
  i=0;a=0;
  
  while (i != N){
    if (a>0){
      res = foo();
      break;
    }
    i++;
  }

  return res;
}
   
