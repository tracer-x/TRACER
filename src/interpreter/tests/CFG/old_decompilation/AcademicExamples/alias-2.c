// To run pointer analysis: crystal -v=20 alias-2.c

// original program: 
//  points-to-set([ptr, &(y), &(x)])
//  points-to-set([y, x])

void main(){

  int *ptr;
  int x,y;

  if(x>0)
    y=0;
  if(y>0)
    ptr=&x;
  else
    ptr=&y;
  
  return;
}
