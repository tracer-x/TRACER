// SAFE

// This is an example where search using wp makes a difference
// compared to w/o wp.

main()
{
  int x, y, z;
  if (z>0) {
    // wp:  true
    x = 1;
  } else {
    x = 2;
  }
  // wp : x>=0  (thus second subtree is subsumed)
  if (x<0) {
    // dead code
    y = -1;
  } else {
    // wp: true 
    y = 1;
  }
  // wp: y>=0
  _TRACER_abort(y<0);
}
