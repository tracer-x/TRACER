#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include "sglib.h"
#include <cute.h>

typedef struct llist {
    int i;
    struct llist *ptr_to_next;
} llist;

#define LLIST_COMPARATOR(e1, e2) (e1->i - e2->i)

SGLIB_DEFINE_LIST_PROTOTYPES(llist, LLIST_COMPARATOR, ptr_to_next);
SGLIB_DEFINE_LIST_FUNCTIONS(llist, LLIST_COMPARATOR, ptr_to_next);

int isLlist(llist * head) {
  llist * cur, *tmp;
  int i,j;


  if (head == 0) return 1;
  i=j=0;
  for (cur = head; cur!=0; cur = cur->ptr_to_next){
    i++;
    j=1;
    for (tmp = head; j<i; tmp = tmp->ptr_to_next){
      j++;
      if(cur==tmp) return 0;
    }
  }
  return 1;
}

int isLlistElement(llist * head) {
  if (head == 0) return 0;
  if (head->ptr_to_next == 0) return 1;  
  return 0;
}

g(){
}

f(){
  llist * m;

  int toss;
  llist *l; 
  llist *e;
  llist * l2;


  CUTE_input(toss);
  CUTE_input(l);
  CUTE_input(e);
  CUTE_input(l2);

  CUTE_assume(isLlist(l));
  CUTE_assume(isLlistElement(e));
  switch(toss){
  case 1:
    sglib_llist_add(&l,e); break;
  case 4:
    sglib_llist_add_if_not_member(&l,e,&m); break;
  case 8:
    if(sglib_llist_is_member(l,e))
      sglib_llist_delete(&l,e); 
    break;
  case 9:
    sglib_llist_delete_if_member(&l,e,&m); break;
  case 10:
    sglib_llist_find_member(l,e); break;
  case 11:
    sglib_llist_is_member(l,e); break;
  case 14:
    sglib_llist_len(l); break;
  case 15:
    sglib_llist_sort(&l); break;
  case 16:
    sglib_llist_reverse(&l); break;    
  case 7:
    CUTE_assume(isLlist(l2));
    sglib_llist_concat(&l,l2); break;
   } 
  g(); 
}

/* ./cute llist-cute -i 20000 -d 50 -c */

/* sglib_llist_add  */
/* sglib_llist_add_before  */
/* sglib_llist_add_after  */
/* sglib_llist_add_if_not_member  */
/* sglib_llist_add_before_if_not_member  */
/* sglib_llist_add_after_if_not_member  */
/* sglib_llist_concat  */
/* sglib_llist_delete  */
/* sglib_llist_delete_if_member  */
/* sglib_llist_find_member  */
/* sglib_llist_is_member  */
/* sglib_llist_get_first  */
/* sglib_llist_get_last  */
/* sglib_llist_len  */
/* sglib_llist_sort  */
/* sglib_llist_reverse  */
/* sglib_llist_it_init  */
/* sglib_llist_it_init_on_equal  */
/* sglib_llist_it_next  */

