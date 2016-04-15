// Recursive functions.
// The number of calls is finite.
int x,y,z;

void f1(int a){
    if(a > 0){
	x++;
	f2(a-1);
    }
    return;
}

void f2(int a){
    if (a > 0){
	y++;
	f1(a-1);
    }
    return;
}

void main(){
  x=0;
  y=0;

  z = 10;
  
  f1(z);
  
  _TRACER_abort(x > 5);
  return;
}
