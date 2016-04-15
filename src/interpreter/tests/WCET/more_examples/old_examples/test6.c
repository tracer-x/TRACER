void main() {
  int x, z ;
  int w ;
  int a[10];
  x = x + 1 ;
  x = x + 2 ;
  {
   int y = 10 ;
   y = x+1 ;
  }
  a[0] = x;
  x = a[1];
  while(a[2] < 3){
	  x = x + 1;
	  a[2] = a[2] + 1;
  }
  a[4] = a[3];
  if(a[6] == 4){
	  x = x + 1;
  }
}
