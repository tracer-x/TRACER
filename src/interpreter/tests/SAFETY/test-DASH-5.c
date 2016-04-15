// SAFE

// Example where SLAM or BLAST suffers from an exponential blow-up in
// predicate size. SLAM and BLAST use Morris' general axiom of
// assignment to handle pointer alias soundly. So, they need to consider
// 4 possible aliasing conditions: p=p1 or p \== p1, and p=p2 or p\=p2

// TRACER does NOT suffer from this problem since TRACER performs
// symbolic execution and hence, the constraints p1->lock=0, p2->lock=0,
// etc are propagated to the point where the condition is tested.


/* 
   TRACER NOTE: the function malloc is treated as an external call
   where the return value is completely unconstrained. Therefore, we
   need to use other means (e.g., assume) to make explicit that
   p1,p2,p3,p4,p5 are separated after calling malloc
*/

struct __DE {
  int lock;
  int y;
};
typedef struct __DE DE;

extern void* malloc(int size);

void main()
{
  
  DE *p;
  DE *p1,*p2,*p3,*p4,*p5;

  p1=malloc(sizeof(DE)); 
  _TRACER_assume(p != p1);
  
  p1->lock = 0;

  p2=malloc(sizeof(DE)); 
  _TRACER_assume(p != p2);

  p2->lock = 0;

  p3=malloc(sizeof(DE)); 
  _TRACER_assume(p != p3);
  
  p3->lock = 0;

  p4=malloc(sizeof(DE)); 
  _TRACER_assume(p != p4);

  
  p4->lock = 0;

  p5=malloc(sizeof(DE)); 
  _TRACER_assume(p != p5);  
  
  p5->lock = 0;

  p->lock=1;

  _TRACER_abort(p1->lock==1 || p2->lock ==1 || p3->lock ==1 || p4->lock ==1 || p5->lock ==1);

  p = p1;
  p = p2;
  p = p3;
  p = p4;
  p = p5; 

  return;
 
}


