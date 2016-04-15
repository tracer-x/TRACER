// Example takend from McMillan's CAV'10 paper.
// Synergy-like tools will produce the interpolant (p=1) and (a=1).
void main(){
  int a,x,TRACER_NONDET;
  int p=1;
  int s;

  if (TRACER_NONDET>0)
    a=1;
  else
    a=0;
  // W/ options "reuse-intp-infeasible y -delete-subsumed-memo y" the
  // interpolant should be only (p=1).
  // Without them the interpolant will be stronger (p=1) and (a=1)  
  if (a>0)
    x++;
  else
    x--;

  _TRACER_abort(!p);
}
