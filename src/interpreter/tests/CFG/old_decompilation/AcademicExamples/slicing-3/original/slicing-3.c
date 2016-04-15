int * main(){

  int *ptr;
  int x,y;

  if(x>0)
    y=0;
  if(y>0)
    ptr=&x;
  else
    ptr=&y;
  
  return ptr;
}
