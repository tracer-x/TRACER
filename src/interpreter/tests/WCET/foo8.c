// For testing the effects of disjunction with Compositional WCET
int foo(int n, int x, int y){
  int res;
  if (n > 0)
    res = x;
  else 
    res = y;

  return res;
}

int main(){
  int x, res;

  res = foo(x,4,10);
  return res;
}
