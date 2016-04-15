#include <cute.h>

f(){
    int x, y, z;
    CUTE_input(x);
    CUTE_input(y);
    CUTE_input(z);
    printf("Input is %d %d %d\n",x,y,z);

    if(x+y+z==6)
	if(2*x+7*y+3*z==25)
	    if(-4*x-2*y+2*z==-2){
		printf("Reached destination\n");
	    }
}




