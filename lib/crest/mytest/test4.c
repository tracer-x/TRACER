#include <crest.h>

void _TRACER_abort(int x) { }

int foo(int n, int m) {
    return n+m;
}

int main() {
    int c1,c2,c3,c4,c5,c6,c7,c8,c9,c10,c11,c12,c13,c14,c15,s,x,i,c[9];

    CREST_int(c[0]);
    CREST_int(c[1]);
    CREST_int(c[2]);
    CREST_int(c[3]);
    CREST_int(c[4]);
    CREST_int(c[5]);
    CREST_int(c[6]);
//    CREST_int(c[7]);
//    CREST_int(c[8]);
//    CREST_int(c[9]);
//    CREST_int(c[10]);
//    CREST_int(c[11]);
//    CREST_int(c[12]);
//    CREST_int(c[13]);
//    CREST_int(c[14]);

    x=0;
    s=0;
    i=0;
    while(i < 7) {
        if(c[i]>0) s+=(i+1);
        i++;
    }

    if(s>=14 && s<=14) {
        printf("#######################ERROR#####################\n");
    }
}
