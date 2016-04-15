int mymalloc(int a) {int x; return x;}
/* For copyright information, see olden_v1.0/COPYRIGHT */

/* tree.h
 */

typedef struct tree {
    int		val;
    struct tree *left, *right;
} tree_t;

#define NULL	0

tree_t *TreeAlloc (/*int level, int lo, int hi*/);

/* For copyright information, see olden_v1.0/COPYRIGHT */

//#include <cm/cmmd.h>
//#include <fcntl.h>
int __NumNodes;
int stdout, CMMD_independent, F_SETFL, O_APPEND;
int CMMD_fset_io_mode(int a, int b) {int x; return x;}
int CMMD_self_address() {int x; return x;}
int fcntl(int a, int b, int c) {int x; return x;}
int __InitRegs(int a) {int x; return x;}


void filestuff()
{
  CMMD_fset_io_mode(stdout, CMMD_independent);
  fcntl(fileno(stdout), F_SETFL, O_APPEND);
  if (CMMD_self_address()) exit(0);
  __InitRegs(0);
}

int dealwithargs(int argc, char *argv[])
{
  int level;

  if (argc > 2) 
    __NumNodes = atoi(argv[2]);
  else 
    __NumNodes = 4;

  if (argc > 1)
    level = atoi(argv[1]);
  else
    level = 5;

  return level;
  
}
/* For copyright information, see olden_v1.0/COPYRIGHT */

/* node.c
 */
//#include <cm/cmmd.h>

#ifdef FUTURES
//#include "future-cell.h"
#endif
//#include "mem-ref.h"
//#include "tree.h"

int dealwithargs(int argc, char *argv[]);

typedef struct {
    long 	level;
} startmsg_t;

int TreeAdd (/* tree_t *t */);
tree_t *TreeAlloc (/* int level, int lo, int hi */);

main (int argc, char *argv[])
{
    tree_t	*root;
    int level,result;

#ifdef FUTURES
    level = SPMDInit(argc,argv);
#else
    filestuff();
    level = dealwithargs(argc, argv);
#endif
    /* only processor 0 will continue here. */
    root = TreeAlloc (level, 0, __NumNodes);
    
#ifndef PLAIN
#endif

    result = TreeAdd (root);
#ifdef FUTURES
    __ShutDown();
#endif
    exit(0);


}

/* TreeAdd:
 */
int TreeAdd (t)
     register tree_t	*t;
{
  if (t == NULL)  {
    return 0;
  }
  else {
#ifdef FUTURES    
    future_cell_int leftval;
    int rightval;
    tree_t *tleft, *tright;
    int value;

    tleft = t->left;
    RPC(tleft, tleft,TreeAdd,&(leftval));
    NOTEST();
    tright = t->right;
    rightval = TreeAdd(tright);
    RTOUCH(&leftval);
    /*chatting("after touch @ 0x%x\n",t);*/
    value = t->val;
    /*chatting("returning from treeadd %d\n",*/
	     /*leftval.value + rightval.value + value);*/
    return leftval.value + rightval + value;
    RETEST();
#else
    int leftval;
    int rightval;
    tree_t *tleft, *tright;
    int value;

    tleft = t->left;
    leftval = TreeAdd(tleft);
    tright = t->right;
    rightval = TreeAdd(tright);
    /*chatting("after touch\n");*/
    value = t->val;
    /*chatting("returning from treeadd %d\n",*/
	     /*leftval.value + rightval.value + value);*/
    return leftval + rightval + value;
#endif
  }
} /* end of TreeAdd */



/* For copyright information, see olden_v1.0/COPYRIGHT */

/* tree-alloc.c
 */

//#include "mem-ref.h"
//#include "future-cell.h"
//#include "tree.h"


tree_t *TreeAlloc (level, lo, proc)
    int		level, lo, proc;
{

  if (level == 0)
    return NULL;
  else {
#ifdef FUTURES    
    struct tree *new, *right;
    int mid, lo_tmp;
    future_cell_int fleft;
    
    new = (struct tree *) ALLOC(lo, sizeof(tree_t));
    NOTEST();
    FUTURE(level -1, lo+proc/2, proc/2,TreeAlloc,&fleft);
    right=TreeAlloc(level-1,lo,proc/2);
    new->val = 1;
    TOUCH(&fleft);
    new->left = (struct tree *) fleft.value;
    new->right = (struct tree *) right;
    RETEST();
    return new;
#else
    struct tree *new, *right, *left;
    int mid, lo_tmp;

    
    new = (struct tree *) mymalloc(sizeof(tree_t));
    left = TreeAlloc(level -1, lo+proc/2, proc/2);
    right=TreeAlloc(level-1,lo,proc/2);
    new->val = 1;
    new->left = (struct tree *) left;
    new->right = (struct tree *) right;
    return new;
#endif
  }

}
