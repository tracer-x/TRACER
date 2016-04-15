#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include "sglib.h"
#include <cute.h>

typedef struct dllist {
    int i;
    struct dllist *ptr_to_next;
    struct dllist *ptr_to_previous;
} dllist;

#define DLLIST_COMPARATOR(e1, e2) (e1->i - e2->i)

SGLIB_DEFINE_DL_LIST_PROTOTYPES(dllist, DLLIST_COMPARATOR, ptr_to_previous, ptr_to_next);
SGLIB_DEFINE_DL_LIST_FUNCTIONS(dllist, DLLIST_COMPARATOR, ptr_to_previous, ptr_to_next);

/* int isDoublyLinkedSortedList(dllist * head) { */
/*   dllist * cur; */
/*   if (head == 0) return 1; */
/*   if (head->ptr_to_previous != 0) return 0; */
/*   for (cur = head; cur->ptr_to_next!=0; cur = cur->ptr_to_next){ */
/*     if (cur->ptr_to_next->ptr_to_previous != cur) return 0; */
/*     if(cur->e >= cur->ptr_to_next->e) return 0; */
/*   } */
/*   return 1; */
/* } */

/* int isDoublyLinkedList(dllist * head) { */
/*   dllist * cur; */
/*   if (head == 0) return 1; */
/*   if (head->ptr_to_previous != 0) return 0; */
/*   for (cur = head; cur->ptr_to_next!=0; cur = cur->ptr_to_next){ */
/*     if (cur->ptr_to_next->ptr_to_previous != cur) return 0; */
/*   } */
/*   return 1; */
/* } */

int isDoublyLinkedList(dllist * head) {
  dllist * cur;
  for (cur = head; cur!=0; cur = cur->ptr_to_next){
    if(cur->ptr_to_previous!=0 && cur->ptr_to_previous->ptr_to_next!=cur) return 0;
    if(cur->ptr_to_next!=0 && cur->ptr_to_next->ptr_to_previous!=cur) return 0;
  }
  for (cur = head; cur!=0; cur = cur->ptr_to_previous){
    if(cur->ptr_to_previous!=0 && cur->ptr_to_previous->ptr_to_next!=cur) return 0;
    if(cur->ptr_to_next!=0 && cur->ptr_to_next->ptr_to_previous!=cur) return 0;
  }
  return 1;
}


int isDoublyLinkedListElement(dllist * head) {
  if (head == 0) return 0;
  if (head->ptr_to_previous == 0) return 1;
  if (head->ptr_to_next == 0) return 1;  
  return 0;
}

g(){
}

f(){
  dllist * m;
  int toss;
  dllist *l; 
  dllist *e;
  dllist * l2;


  CUTE_input(toss);
  CUTE_input(l);
  CUTE_input(e);
  CUTE_input(l2);

  CUTE_assume(isDoublyLinkedList(l));
  CUTE_assume(isDoublyLinkedListElement(e));
  switch(toss){
  case 1:
    sglib_dllist_add(&l,e); break;
  case 2:
    sglib_dllist_add_before(&l,e); break;
  case 3:
    sglib_dllist_add_after(&l,e); break;
  case 4:
    sglib_dllist_add_if_not_member(&l,e,&m); break;
  case 5:
    sglib_dllist_add_before_if_not_member(&l,e,&m); break;
  case 6:
    sglib_dllist_add_after_if_not_member(&l,e,&m); break;
  case 8:
    sglib_dllist_delete(&l,e); break;
  case 9:
    sglib_dllist_delete_if_member(&l,e,&m); break;
  case 10:
    sglib_dllist_find_member(l,e); break;
  case 11:
    sglib_dllist_is_member(l,e); break;
  case 12:
    sglib_dllist_get_first(l); break;
  case 13:
    sglib_dllist_get_last(l); break;
  case 14:
    sglib_dllist_len(l); break;
  case 15:
    sglib_dllist_sort(&l); break;
    /* BUGGY */

/*   case 7: */
/*     CUTE_assume(isDoublyLinkedList(l2)); */
/*     sglib_dllist_concat(&l,l2); break; */
   } 
  g(); 
}

/* ./cute dllist-cute -i 20000 -d 50 -c */

/* sglib_dllist_add  */
/* sglib_dllist_add_before  */
/* sglib_dllist_add_after  */
/* sglib_dllist_add_if_not_member  */
/* sglib_dllist_add_before_if_not_member  */
/* sglib_dllist_add_after_if_not_member  */
/* sglib_dllist_concat  */
/* sglib_dllist_delete  */
/* sglib_dllist_delete_if_member  */
/* sglib_dllist_find_member  */
/* sglib_dllist_is_member  */
/* sglib_dllist_get_first  */
/* sglib_dllist_get_last  */
/* sglib_dllist_len  */
/* sglib_dllist_sort  */
/* sglib_dllist_reverse  */
/* sglib_dllist_it_init  */
/* sglib_dllist_it_init_on_equal  */
/* sglib_dllist_it_next  */

