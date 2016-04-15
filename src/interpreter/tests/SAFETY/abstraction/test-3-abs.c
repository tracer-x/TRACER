// SAFE

// Example to see the space reduction using abstraction

/* 
   User abstractions can be used to generalize further the
   interpolant.
*/


void main(){
  int sum;
  int c1, c2, c3, c4, c5;
  int d1, d2, d3, d4, d5;
  int e1, e2, e3, e4, e5;
  int f1, f2, f3, f4, f5;
  
  sum = 0;
                                       // #States
  if (c1 == 0) sum=sum+1; else sum=sum+2;
  _TRACER_abstract(sum,sum>=0,sum<=2); // 1310->1199
  if (c2 == 0) sum=sum+1; else sum=sum+2;
  _TRACER_abstract(sum,sum>=0,sum<=4); // 1094
  if (c3 == 0) sum=sum+1; else sum=sum+2;
  _TRACER_abstract(sum,sum>=0,sum<=6);  // 995
  if (c4 == 0) sum=sum+1; else sum=sum+2;
  _TRACER_abstract(sum,sum>=0,sum<=8);  // 902
  if (c5 == 0) sum=sum+1; else sum=sum+2;
  _TRACER_abstract(sum,sum>=0,sum<=10); // 815

  if (d1 == 0) sum=sum+1; else sum=sum+2;
  _TRACER_abstract(sum,sum>=0,sum<=12); // 734
  if (d2 == 0) sum=sum+1; else sum=sum+2;
  _TRACER_abstract(sum,sum>=0,sum<=14); // 659
  if (d3 == 0) sum=sum+1; else sum=sum+2;
  _TRACER_abstract(sum,sum>=0,sum<=16); // 590
  if (d4 == 0) sum=sum+1; else sum=sum+2;
  _TRACER_abstract(sum,sum>=0,sum<=18); // 527
  if (d5 == 0) sum=sum+1; else sum=sum+2;
  _TRACER_abstract(sum,sum>=0,sum<=20); // 470
  
  if (e1 == 0) sum=sum+1; else sum=sum+2;
  _TRACER_abstract(sum,sum>=0,sum<=22); // 419
  if (e2 == 0) sum=sum+1; else sum=sum+2;
  _TRACER_abstract(sum,sum>=0,sum<=24); // 374
  if (e3 == 0) sum=sum+1; else sum=sum+2;
  _TRACER_abstract(sum,sum>=0,sum<=26); // 335
  if (e4 == 0) sum=sum+1; else sum=sum+2;
  _TRACER_abstract(sum,sum>=0,sum<=28); // 302
  if (e5 == 0) sum=sum+1; else sum=sum+2;
  _TRACER_abstract(sum,sum>=0,sum<=30); // 275
  
  if (f1 == 0) sum=sum+1; else sum=sum+2;
  _TRACER_abstract(sum,sum>=0,sum<=32); // 254
  if (f2 == 0) sum=sum+1; else sum=sum+2;
  _TRACER_abstract(sum,sum>=0,sum<=34); // 239
  if (f3 == 0) sum=sum+1; else sum=sum+2;
  _TRACER_abstract(sum,sum>=0,sum<=36); // 230
  if (f4 == 0) sum=sum+1; else sum=sum+2;
  _TRACER_abstract(sum,sum>=0,sum<=38); // 227
  if (f5 == 0) sum=sum+1; else sum=sum+2;
  _TRACER_abstract(sum,sum>=0,sum<=40); // 228

  _TRACER_abort(sum > 40);

  return;
}
