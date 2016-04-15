// SAFE

/* Example where SLAM or BLAST has difficulty without a flow-sensitive
   alias analysis.

   This example requires separation information, s.t. reasoning can be
   done correctly. Here execution of malloc should allocate a memory
   region separated from existing allocated regions.
*/

struct __DE {
  int lock;
  int y;
};
typedef struct __DE DE;

extern void* malloc(int size);

void main(DE *p, DE *p1, DE *p2)
{
    
  _TRACER_assume(p  != p1); 
  //p1=malloc(sizeof(DE));

  p1->lock = 0;

  _TRACER_assume(p  != p2); 
  //p2=malloc(sizeof(DE));

  p2->lock = 0;

  p->lock=1;

  _TRACER_abort(p1->lock==1 || p2->lock ==1);

  p = p1;
  p = p2;

  return;
 
}

