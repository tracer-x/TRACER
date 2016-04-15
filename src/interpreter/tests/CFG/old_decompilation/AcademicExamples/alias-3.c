// To run pointer analysis: crystal -v=20 alias-3.c
// original program: 
//    points-to-set([ptr, &(x), &(y)])

void main(){

  int *ptr;
  int x,y;

  x=-3;

  if(x>0)
    ptr=&y;
  else
    ptr=&x;
  
  return;
}
