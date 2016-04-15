int global_x;

void foo(int x){
  global_x = x;
}
void main(){
  int i,j;
  int x=0;
  int type;
  switch(type){
  case 0:
    break;
  case 1:
    foo(1);
   for (i=0; i<=7; i++)
     {
       for (j=0; j<=7; j++)
	 {
	   x=x+1;
	 }
     }
   break;
  }
}

