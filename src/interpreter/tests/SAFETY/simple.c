// SAFE
void main(){

  int a,b;
  int x = 0;
  int y = 1;

  if (a > 0) x=x+1; else x = x+2;
  if (b > 0) x=x+3; else x = x+4;

  _TRACER_abort(y <= 0);
  return;
}
