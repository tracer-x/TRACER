// SAFE

void main(){
  int a[5], b[5],c[5], d[5],e[5];
  int x,*y,*z;

  x = 0;

  a[0]=13;a[1]=14;a[2]=15;a[3]=16;a[4]=17;
  b[0]=13;b[1]=14;b[2]=15;b[3]=16;b[4]=17;
  c[0]=13;c[1]=14;c[2]=15;c[3]=16;c[4]=17;

  *y=0;
  *z=0;
  
  // Cannot be subsumed
  if(*y>=0){ 
    x++;
    *z=1;
  }

  if(*z>0) *z=0;
  
  // Should be subsumed
  if (d[0] > 0 ) x++;
  if (d[1] > 0 ) x++;  
  if (d[2] > 0 ) x++;
  if (d[3] > 0 ) x++;
  if (d[4] > 0 ) x++;
  
  
  if (e[0] > 0 ) x++;
  if (e[1] > 0 ) x++;
  if (e[2] > 0 ) x++;
  if (e[3] > 0 ) x++;
  if (e[4] > 0 ) x++;

  _TRACER_abort(a[3] != 16 || *z !=0 ); 
}
