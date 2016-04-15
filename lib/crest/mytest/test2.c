#include <crest.h>

void _TRACER_abort(int x) { }

int main() {
    int c1,c2,c3,c4,c5,c6,c7,c8,c9,c10,c11,c12,c13,c14,c15,s,x;

    x=0;
    CREST_int(c1);
    CREST_int(c2);
    CREST_int(c3);
    CREST_int(c4);
    CREST_int(c5);
    CREST_int(c6);
    CREST_int(c7);
    CREST_int(c8);
    CREST_int(c9);
//    CREST_int(c10);
//    CREST_int(c11);
//    CREST_int(c12);
//    CREST_int(c13);
//    CREST_int(c14);
//    CREST_int(c15);

    s=0;
    if(c1>0) s=s+1;
    if(c2>0) s=s+2;
    if(c3>0) s=s+3;
    if(c4>0) s=s+4;
    if(c5>0) s=s+5;
    if(c6>0) s=s+6;
    if(c7>0) s=s+7;
    if(c8>0) s=s+8;
    if(c9>0) s=s+9;
//    if(c10>0) s=s+10;
//    if(c11>0) s=s+11;
//    if(c12>0) s=s+12;
//    if(c13>0) s=s+13;
//    if(c14>0) s=s+14;
//    if(c15>0) s=s+15;

    if(s>=22 && s<=22) {
        printf("#######################ERROR#####################\n");
    }
}
