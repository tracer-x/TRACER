// SAFE

// SLAM or BLAST reports UNSAFE because they use field-insensitive
// pointer analysis. Therefore, the update of de->y implies that 
// de->lock can be unknown.

// TRACER uses -mccarthy y to prove safety

struct __DE {
  int lock;
  int y;
}; 
typedef struct __DE DE;

int NONDET;

void Inc(DE *de){ de-> y++;}

void main(DE *de, int x){
  de->lock =0;
  do {    
    _TRACER_abort(de->lock != 0);//assert(de->lock==0);
    de->lock = 1;
    x = de->y;
    if (NONDET){
      de->lock = 0;
      Inc(de);
    }
  } while (x != de-> y);
} 

