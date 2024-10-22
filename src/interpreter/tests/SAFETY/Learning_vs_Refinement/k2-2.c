/*
  Test program to check that the big subtree is redone since the
  predicate x<=n, once discovered, is not transfered to the other
  branch of the first if conditional.
*/

int BLAST_NONDET;

// BLAST 
// 25 predicates
//  6.34s

void main()
{
  int x, y, n;
  int x1, y1, n1;

  if (x<n) { x++; } else { x=n; }
  if (x1<n1) { x1++; } else { x1=n1; }

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

  // BLAST 
  if (x>n || x1>n1 || y<0) ERROR: goto ERROR;
  // TRACER _ABORT(x>n || x1>n1 || y<0);
  return;

}
