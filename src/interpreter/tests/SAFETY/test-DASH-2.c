// UNSAFE

// SLAM, BLAST or TRACER reports UNSAFE because they use field-insensitive
// pointer analysis. Therefore, the update of de->y implies that 
// de->lock can be unknown.

struct __DE {
  int lock;
  int y;
}; 
typedef struct __DE DE;

int NONDET;

void Inc(DE *de){ de-> y++;}
extern int unknown();

void main(DE *de, int x){
  de->lock =0;
  do {    
    _TRACER_abort(de->lock == 0);//assert(de->lock==0);
    de->lock = 1;
    x = de->y;
    if (unknown()){
      de->lock = 0;
      Inc(de);
    }
  } while (x != de-> y);
} 

