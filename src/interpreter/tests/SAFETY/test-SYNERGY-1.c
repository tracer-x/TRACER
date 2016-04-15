// UNSAFE

// Example on which SLAM/BLAST/TRACER does not work well because it has to
// discover 100 predicates


void main(int a){

  int i, c;
  i = 0; c = 0; 
  // a = 1; 
  while (i <100) {
    c = c + i;
    i = i + 1;
  }

  _TRACER_abort(a <=0);
  //if(a<=0) ERROR:goto ERROR;
}
