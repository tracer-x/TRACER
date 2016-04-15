#include <cute.h>

void f(int x,int y,int z){
    if(2*x+3*y+4 == 3*y+5*z+10)
	printf("x y z = %d %d %d ERROR\n",x,y,z);
}

