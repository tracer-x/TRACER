/*---------------------------------------------------------------------------
  Schorr-Waite Algorithm
  As found in Hubert and Marche: "A Case Study of C Source Code Verification:
  The Schorr-Waite Algorithm"

  We add a "main" function
  ---------------------------------------------------------------------------*/
typedef struct struct_node {
  unsigned int m:1, c:1; /* Boolean flags, int over 1 bit */
  struct struct_node *l, *r;
} * node;

/* The specification in Caduceus syntax */

/*@ requires
  @  \forall node x;
  @     x != \null && reachable(root,x) => \valid(x) && !x->m
  @ ensures
  @  (\forall node x; \old(x->l) == x->l && \old(x->r) == x->r)
  @ &&
  @  (\forall node x; x != \null && reachable(root,x) => x->m)
  @ &&
  @  (\forall node x; !reachable(root,x) => x->m == \old(x->m))
  @*/

void schorr_waite(node root) {

  node t = root; node p = NULL;

  /* t points to one of the children, and p points to its parent 

     When p->r points to a real right child in the original structure,
     t points to the real left child of p in the original structure,
     and p->l points to the parent of p in the original structure,
     and conversely,
     when p->l points to a real left child in the original structure,
     t points to the real right child of p in the original structure,
     and p->r points to the parent of p in the original structure.
     
   */

  while (p != NULL || (t != NULL && ! t->m)) {

    /* Here either p is non-null or (t is non-null and unmarked) */

    if (t == NULL || t->m) {

      /* If t is null (we reach the end of the structure) or
         the structure that we found is already marked (since we
         assume arbitrary graph not just trees) */

      if (p->c) { /* pop */

        /* This is when p's children have all been traversed
           completely (p->c = 1), in which case we backtrack.

           In this situation,
           t points to the right child in the original structure,
           p->r points to the parent of p in the original structure,
           and p->l points to the left child of p in the original
           structure.

           Backtracking point for p is stored as its right child,
           so we assign p = p->r. t backtracks to its parent
           p (t=p), and assign as its right child its previous
           pointed to node.
         */

        node q = t; t = p; p = p->r; t->r = q;
      } else { /* swing */

        /* This is the case when the children have not
           all been traversed, so we swing from one child to another.

           In this situation,
           t points to the left child in the original structure,
           p->l points to the parent of p in the original structure,
           and p->r points to the actual right child of p in the
           original structure.

           We change this situation as follows:
           We make t points to the right child in the original structure
           (t = p->r), we store the original parent of p in p->r
           (p->r = p->l), and we connect the left child p->l of p
           to the actual left child in the original structure
           (q = t; p->l = q). We also set the bit p->c = 1;

         */
        node q = t; t = p->r; p->r = p->l; p->l = q; p->c = 1;
      }
    } else { /* push */

      /* Here t is not null (we have not reached the end of the
         structure) and t is unmarked, so we go further down in
         the structure.

         We assign p to t, and make p->l points to the previous
         value of p, while we make t = t->l.

         Notice that in the resulting situation we maintain that
         p->l points to its original parent, t points to the original
         left child of p, and p->r points to the original right child
         of p. Here we mark p.

       */


      node q = p; p = t; t = t->l; p->l = q; p->m = 1; p->c = 0;
    }
  }
}

int main()
{
  node x;
  schorr_waite(x);
  return 0;
}
