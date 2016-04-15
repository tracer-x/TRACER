#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include "sglib.h"
#include <cute.h>

typedef struct rbtree {
  int i;
  struct rbtree *left_ptr;
  struct rbtree *right_ptr;
  char color;
} rbtree;

#define RBTREE_COMPARATOR(e1, e2) (e1->i - e2->i)

SGLIB_DEFINE_RBTREE_PROTOTYPES(rbtree, left_ptr, right_ptr, color, RBTREE_COMPARATOR);
SGLIB_DEFINE_RBTREE_FUNCTIONS(rbtree, left_ptr, right_ptr, color, RBTREE_COMPARATOR);


int isRbtreeElement(rbtree * head) {
  if (head == 0) return 0;
  if (head->left_ptr == 0) return 1;
  if (head->right_ptr == 0) return 1;  
  return 0;
}

g(){
}

f(){
  rbtree * m;
  int toss;
  rbtree *l; 
  rbtree *e;


  CUTE_input(toss);
  CUTE_input(l);
  CUTE_input(e);

  CUTE_assume(sglib___rbtree_consistency_check(l));
  CUTE_assume(isRbtreeElement(e));

  switch(toss){
  case 1:
    sglib_rbtree_add(&l,e); break;
  case 4:
    sglib_rbtree_add_if_not_member(&l,e,&m); break;
  case 8:
    if(sglib_rbtree_is_member(l,e))
      sglib_rbtree_delete(&l,e); 
    break;
  case 9:
    sglib_rbtree_delete_if_member(&l,e,&m); break;
  case 10:
    sglib_rbtree_find_member(l,e); break;
  case 11:
    sglib_rbtree_is_member(l,e); break;
  case 14:
    sglib_rbtree_len(l); break;
  } 
  g(); 
}

/* ./cute rbtree-cute -i 20000 -d 50 -c */
