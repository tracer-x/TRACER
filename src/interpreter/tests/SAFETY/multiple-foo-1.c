// SAFE

// To check properly working of multiple safety conditions
int main(){
  int UNKNOWN;
  int x=0;
  int y=0;
 
  if (UNKNOWN > 0)
    x = 5;
  else
    y = 10;

  _TRACER_abort(x==5 && y==10);
  return 1;

}
   
