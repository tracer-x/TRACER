/*
  Test program to check that the big subtree is redone since the
  predicate x<=n, once discovered, is not transfered to the other
  branch of the first if conditional.
*/

// -predH 7  
// 42 predicates added 
// 32s
//

// TRACER 
// 325 states and 2 subsumed
// 0.71s

int BLAST_NONDET;

void main()
{
  int x, y, n;

/*   if (x<n) { */
/*     x++; */
/*   } else { */
/*     x=n; */
/*   } */
  x=n;

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
  if (x>n || y<0) ERROR: goto ERROR;
  // TRACER
  //_ABORT(x>n || y<0);

  return;

}
