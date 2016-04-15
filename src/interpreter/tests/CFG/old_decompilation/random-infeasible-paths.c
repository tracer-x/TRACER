/////////////////////////////////////////////////////
// Original program   105 LOC
/////////////////////////////////////////////////////
// States visited              : 6107 
// Analysis time               : 77.66 sec 
// # subsumed nodes            : 277 
// # calls to solver during interpolation : 70358 
// Total time on interpolation phase: 26 %. 
// Total time on backward      phase: 3 %. 
// Total time on forward       phase: 27 %. 
// Total time on memo store    phase: 6 %. 
// Total time on memo lookup   phase: 36 %. 
// Total time on partition     phase: 2 %. 
/////////////////////////////////////////////////////
// Decompiled program 3144 LOC  (30x)
/////////////////////////////////////////////////////
// States visited              : 4066 
// Analysis time               : 18.8 sec 
// Analysis throughput         : 216.277 states/sec 
// # subsumed nodes            : 327 
// # calls to solver during interpolation : 61952 
// Total time on interpolation phase: 13 %. 
// Total time on backward      phase: 14 %. 
// Total time on forward       phase: 24 %. 
// Total time on memo store    phase: 29 %. 
// Total time on memo lookup   phase: 10 %. 
// Total time on partition     phase: 9 %. 
/////////////////////////////////////////////////////
// Reduction 75% in time!
/////////////////////////////////////////////////////

void main() {
int sum = 0; 
int x0 ; 
int x1 ; 
int x2 ; 
int x3 ; 
int x4 ; 
int x5 ; 
int x6 ; 
int x7 ; 
int x8 ; 
int x9 ; 
int x10 ; 
int x11 ; 
int x12 ; 
int x13 ; 
int x14 ; 
int x15 ; 
int x16 ; 
int x17 ; 
int x18 ; 
int x19 ; 
int x20 ; 
int x21 ; 
int x22 ; 
int x23 ; 
int x24 ; 
int x25 ; 
int x26 ; 
int x27 ; 
int x28 ; 
int x29 ; 
int x30 ; 
int x31 ; 
int x32 ; 
int x33 ; 
int x34 ; 
int x35 ; 
int x36 ; 
int x37 ; 
int x38 ; 
int x39 ; 
int x40 ; 
int x41 ; 
int x42 ; 
int x43 ; 
int x44 ; 
int x45 ; 
int x46 ; 
int x47 ; 
int x48 ; 
int x49 ; 
if (x2 < x1) sum += 2;
if (x1 < x2) sum += 3;
if (x3 < x2) sum += 0;
if (x3 < x4) sum += 1;
if (x4 < x4) sum += 1;
if (x1 < x3) sum += 0;
if (x0 < x1) sum += 4;
if (x2 < x0) sum += 4;
if (x0 < x0) sum += 1;
if (x1 < x2) sum += 2;
if (x0 < x1) sum += 0;
if (x0 < x0) sum += 3;
if (x3 < x3) sum += 0;
if (x0 < x3) sum += 4;
if (x1 < x2) sum += 3;
if (x4 < x4) sum += 4;
if (x4 < x1) sum += 2;
if (x0 < x3) sum += 2;
if (x2 < x0) sum += 3;
if (x0 < x3) sum += 2;
if (x4 < x1) sum += 3;
if (x4 < x1) sum += 0;
if (x2 < x1) sum += 0;
if (x4 < x1) sum += 4;
if (x1 < x4) sum += 1;
if (x1 < x3) sum += 2;
if (x0 < x4) sum += 4;
if (x3 < x2) sum += 2;
if (x2 < x1) sum += 3;
if (x0 < x1) sum += 1;
if (x4 < x0) sum += 2;
if (x3 < x4) sum += 0;
if (x0 < x4) sum += 1;
if (x1 < x0) sum += 2;
if (x0 < x1) sum += 1;
if (x1 < x3) sum += 1;
if (x1 < x0) sum += 3;
if (x0 < x0) sum += 2;
if (x2 < x3) sum += 3;
if (x2 < x0) sum += 4;
if (x4 < x0) sum += 1;
if (x3 < x0) sum += 2;
if (x4 < x0) sum += 1;
if (x2 < x1) sum += 2;
if (x0 < x3) sum += 0;
if (x3 < x2) sum += 3;
if (x2 < x3) sum += 1;
if (x2 < x3) sum += 1;
if (x4 < x0) sum += 1;
if (x2 < x0) sum += 4;
//_ABORT(sum > 250);
_DECOMPILE_ABORT(sum > 250);
return; 
}
