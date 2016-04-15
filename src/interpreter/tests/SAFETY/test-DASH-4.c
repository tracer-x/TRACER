// SAFE

// Example in which BLAST, SLAM or TRACER avoid exponential blow-up.

extern void* malloc(int size);

void main(){

  int lock;
  int b1,b2,b3,b4,b5;

  int x;
  int *p;

  *p = malloc(sizeof(int));
  x=0;
  *p=0;

  lock=1;

  if (b1) x=x+1; //does not affect lock
  else  *p=*p+1; //does not affect lock

  if (b2) x=x+1; //does not affect lock
  else  *p=*p+1; //does not affect lock

  if (b3) x=x+1; //does not affect lock
  else  *p=*p+1; //does not affect lock

  if (b4) x=x+1; //does not affect lock
  else  *p=*p+1; //does not affect lock

  if (b5) x=x+1; //does not affect lock
  else  *p=*p+1; //does not affect lock

  _TRACER_abort(lock > 1 || lock < 1);
}

  
