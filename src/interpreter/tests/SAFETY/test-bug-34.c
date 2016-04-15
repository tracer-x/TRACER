// SAFE

////////////////////////////////////////////////////////////////////////////
// To run this program w/ or wo/ minmax:
//
// tracer safety tests/SAFETY/test-bug-34.c -minmax n -alias y  -mccarthy y 
// tracer safety tests/SAFETY/test-bug-34.c -minmax y -alias y  -mccarthy y 
// To see the symbolic execution tree in .dot format, add the option: -tree-dot y 
// To see verbose mode, add the option: -debug 1
// To use naive lists rather than complicated union find, add the option:
// -path-datastructure naive
////////////////////////////////////////////////////////////////////////////

void main(){
  int a[5], b[5];
  int x,p,*z;

  x = 0;  a[0]=16;
  if(p>0)
    *z=1;
  else
    *z=2;
  
  if (b[0] > 0 ) x++;
  if (b[1] > 0 ) x++;  
  
  _TRACER_abort(a[0] > 16 || *z <= 0 ); 
}
