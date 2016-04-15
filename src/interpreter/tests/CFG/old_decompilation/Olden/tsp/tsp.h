/* For copyright information, see olden_v1.0/COPYRIGHT */

typedef struct tree {
  int sz;
  double x,y;
  struct tree *left, *right;
  /*struct tree *next, *prev;*/
  struct tree *next {95}, *prev {95};
} *Tree;

/* Builds a 2D tree of n nodes in specified range with dir as primary 
   axis (0 for x, 1 for y) */
Tree build_tree(int n,int dir,int lo,int num_proc,double min_x,
                double max_x,double min_y,double max_y);
/* Compute TSP for the tree t -- use conquer for problems <= sz */
Tree tsp(Tree t, int sz, int nproc);
