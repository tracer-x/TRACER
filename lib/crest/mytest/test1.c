#include <crest.h>
#include <stdio.h>

void _TRACER_abort(int x) { }

int main() {
    int x,y,z,a,b;

    CREST_int(x);
    CREST_int(a);
    if(a > 456)
        b = a*2;
    else
        b = a*3;

    if(x > 123) {
        y=0;z=1;
    }
    else {
        y=1;z=0;
    }

    if(y+z > 1) _TRACER_abort(1);
}
