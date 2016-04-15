#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include "sglib.h"
#include <cute.h>

typedef struct slist {
    int i;
    struct slist *ptr_to_next;
} slist;

#define SLIST_COMPARATOR(e1, e2) (e1->i - e2->i)

SGLIB_DEFINE_SORTED_LIST_PROTOTYPES(slist, SLIST_COMPARATOR, ptr_to_next);
SGLIB_DEFINE_SORTED_LIST_FUNCTIONS(slist, SLIST_COMPARATOR, ptr_to_next);

int isSortedSlist(slist * head) {
  slist * cur, *tmp;
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
  for (cur = head; cur->ptr_to_next!=0; cur = cur->ptr_to_next){
    if(cur->i > cur->ptr_to_next->i) return 0;
  }
  return 1;
}


int isSlistElement(slist * head) {
  if (head == 0) return 0;
  if (head->ptr_to_next == 0) return 1;  
  return 0;
}

g(){
}

f(){
  slist * m;
  int toss;
  slist *l; 
  slist *e;
  slist * l2;


  CUTE_input(toss);
  CUTE_input(l);
  CUTE_input(e);
  CUTE_input(l2);

  CUTE_assume(isSortedSlist(l));
  CUTE_assume(isSlistElement(e));
  switch(toss){
  case 1:
    sglib_slist_add(&l,e); break;
  case 4:
    sglib_slist_add_if_not_member(&l,e,&m); break;
  case 8:
    if(sglib_slist_is_member(l,e))
      sglib_slist_delete(&l,e); 
    break;
  case 9:
    sglib_slist_delete_if_member(&l,e,&m); break;
  case 10:
    sglib_slist_find_member(l,e); break;
  case 11:
    sglib_slist_is_member(l,e); break;
  case 14:
    sglib_slist_len(l); break;
  case 15:
    sglib_slist_sort(&l); break;
  } 
  g(); 
}

/* ./cute slist-cute -i 20000 -d 50 -c */

/* sglib_slist_add  */
/* sglib_slist_add_before  */
/* sglib_slist_add_after  */
/* sglib_slist_add_if_not_member  */
/* sglib_slist_add_before_if_not_member  */
/* sglib_slist_add_after_if_not_member  */
/* sglib_slist_concat  */
/* sglib_slist_delete  */
/* sglib_slist_delete_if_member  */
/* sglib_slist_find_member  */
/* sglib_slist_is_member  */
/* sglib_slist_get_first  */
/* sglib_slist_get_last  */
/* sglib_slist_len  */
/* sglib_slist_sort  */
/* sglib_slist_reverse  */
/* sglib_slist_it_init  */
/* sglib_slist_it_init_on_equal  */
/* sglib_slist_it_next  */

