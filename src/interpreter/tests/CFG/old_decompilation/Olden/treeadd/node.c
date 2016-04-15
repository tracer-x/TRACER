/* For copyright information, see olden_v1.0/COPYRIGHT */

/* node.c
 */
#include <cm/cmmd.h>

#ifdef FUTURES
#include "future-cell.h"
#endif
#include "mem-ref.h"
#include "tree.h"

int dealwithargs(int argc, char *argv[]);

typedef struct {
    long 	level;
} startmsg_t;

int TreeAdd (/* tree_t *t */);
extern tree_t *TreeAlloc (/* int level, int lo, int hi */);

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
    CMMD_node_timer_clear(0);
    CMMD_node_timer_clear(1);
    chatting("Treeadd with %d levels on %d processors \n",
	     level, __NumNodes);
    /* only processor 0 will continue here. */
    chatting("About to enter TreeAlloc\n"); 
    CMMD_node_timer_start(0);
    root = TreeAlloc (level, 0, __NumNodes);
    CMMD_node_timer_stop(0);
    chatting("About to enter TreeAdd\n"); 
    
#ifndef PLAIN
    ClearAllStats();
#endif

    CMMD_node_timer_start(1);
    result = TreeAdd (root);
    CMMD_node_timer_stop(1);
    chatting("Received result of %d\n",result);
    chatting("Alloc Time = %f seconds\n", CMMD_node_timer_elapsed(0));
    chatting("Add Time = %f seconds\n", CMMD_node_timer_elapsed(1));
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



