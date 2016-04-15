#include <stdio.h>

int main(){
  int c,n;
  n = 100;

  c = n;
  for( ; c != 1; ) {
    //  while (c != 1) {
    printf("Value of c=%d\n",c);
    if ( c % 2 == 0) c = c/2;
    else c = 3*c + 1;
  }
  return 1;
}
