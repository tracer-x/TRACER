/*
  Blast traverses the following tree:

    x=0
     |
  +--+-----+
  |x=x     |x=x+1
 x=0   +---+----+
REFINE |x=x-1   |x=x-1
       The value
     of x is "forgotten"
     s.t. another refinement
     necessary

 We note that after the first refinement, Blast attaches all
 the predicates to "live" region of x=0, that is, in all code part
 before the variable x is redefined. However, since in the else
 branch of the outer if conditional x is redefined, the fact that
 x=0 after the if conditional is forgotten and the exit from the
 else branch is not subsumed.
 */

/*
BLAST 
 w/ -predH 7
  2 predicates (x >=0,x>=1) 
  0.18s
 w/o -predH 7
  2 predicates (x >=0,x>=1) 
  0.17s
TRACER
  13 states and 2 subsumed
  0.02s
 */
int BLAST_NONDET;

void main()
{
  int x;

  x=0;

  if (BLAST_NONDET) x=x;
  else {
    x++;
    if (BLAST_NONDET) x--;
    else x--;
  }

  // BLAST  
  if (x<0) ERROR: goto ERROR;
  // TRACER _ABORT(x<0);
  
}
