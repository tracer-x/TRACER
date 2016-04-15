/*
  Test program to check that the big subtree is redone since the
  predicate x<=n, once discovered, is not transfered to the other
  branch of the first if conditional.

  This program, when compared with k2-1.c displays the behavior
  where one branch of the if condition is not subsumed, resulting
  in doubling of space and time. This confirms that in k2-1.c the
  other if branch is actually subsumed by another.
*/

// -predH 7  
// 56s
// 44 predicates added
// 

// TRACER
// 654 states and 5 subsumed
// 1.5s

int BLAST_NONDET;

void main()
{
  int x, y, n;

  if (x<n-1) {
    x++;
  } else {
    x=n;
  }


  /* PP */

  /* Big subtree */
  y=0;
  if (BLAST_NONDET) { y++; } else { y+=2; }
  if (BLAST_NONDET) { y++; } else { y+=2; }
  if (BLAST_NONDET) { y++; } else { y+=2; }
  if (BLAST_NONDET) { y++; } else { y+=2; }
  if (BLAST_NONDET) { y++; } else { y+=2; }

  if (BLAST_NONDET) { y++; } else { y+=2; }
  if (BLAST_NONDET) { y++; } else { y+=2; }
  if (BLAST_NONDET) { y++; } else { y+=2; }
  if (BLAST_NONDET) { y++; } else { y+=2; }
  if (BLAST_NONDET) { y++; } else { y+=2; }

  if (BLAST_NONDET) { y++; } else { y+=2; }
  if (BLAST_NONDET) { y++; } else { y+=2; }
  if (BLAST_NONDET) { y++; } else { y+=2; }
  if (BLAST_NONDET) { y++; } else { y+=2; }
  if (BLAST_NONDET) { y++; } else { y+=2; }

  if (BLAST_NONDET) { y++; } else { y+=2; }
  if (BLAST_NONDET) { y++; } else { y+=2; }
  if (BLAST_NONDET) { y++; } else { y+=2; }
  if (BLAST_NONDET) { y++; } else { y+=2; }
  if (BLAST_NONDET) { y++; } else { y+=2; }

  if (BLAST_NONDET) { y++; } else { y+=2; }
  if (BLAST_NONDET) { y++; } else { y+=2; }
  if (BLAST_NONDET) { y++; } else { y+=2; }
  if (BLAST_NONDET) { y++; } else { y+=2; }
  if (BLAST_NONDET) { y++; } else { y+=2; }

  if (BLAST_NONDET) { y++; } else { y+=2; }
  if (BLAST_NONDET) { y++; } else { y+=2; }
  if (BLAST_NONDET) { y++; } else { y+=2; }
  if (BLAST_NONDET) { y++; } else { y+=2; }
  if (BLAST_NONDET) { y++; } else { y+=2; }

  if (BLAST_NONDET) { y++; } else { y+=2; }
  if (BLAST_NONDET) { y++; } else { y+=2; }
  if (BLAST_NONDET) { y++; } else { y+=2; }
  if (BLAST_NONDET) { y++; } else { y+=2; }
  if (BLAST_NONDET) { y++; } else { y+=2; }

  if (BLAST_NONDET) { y++; } else { y+=2; }
  if (BLAST_NONDET) { y++; } else { y+=2; }
  if (BLAST_NONDET) { y++; } else { y+=2; }
  if (BLAST_NONDET) { y++; } else { y+=2; }
  if (BLAST_NONDET) { y++; } else { y+=2; }

  // BLAST 
  // if (x>n || y<0) ERROR: goto ERROR; 
  // TRACER
  _ABORT(x>n || y<0);

}
