
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include "sglib.h"

#define HASH_TAB_SIZE  10

typedef struct ilist {
  int i;
  struct ilist *next;
} ilist;

ilist *htab[HASH_TAB_SIZE];

#define ILIST_COMPARATOR(e1, e2)    (e1->i - e2->i)

unsigned int ilist_hash_function(ilist *e) {
  return(e->i);
}

SGLIB_DEFINE_LIST_PROTOTYPES(ilist, ILIST_COMPARATOR, next)
SGLIB_DEFINE_LIST_FUNCTIONS(ilist, ILIST_COMPARATOR, next)
SGLIB_DEFINE_HASHED_CONTAINER_PROTOTYPES(ilist, HASH_TAB_SIZE, ilist_hash_function)
SGLIB_DEFINE_HASHED_CONTAINER_FUNCTIONS(ilist, HASH_TAB_SIZE, ilist_hash_function)

int isListElem(ilist * head) {
  if (head == 0) return 0;
  if (head->next == 0) return 1;  
  return 0;
}

#include <cute.h>

g(){}

f() {
  int                                   i,toss;
  struct ilist                          *e, *m;

  sglib_hashed_ilist_init(htab);

  for (i=1; i<10; i++) {
    CUTE_input(toss);
    CUTE_input(e);
    CUTE_assume(isListElem(e));
    switch(toss){
    case 2:
      sglib_hashed_ilist_add_if_not_member(htab,e,&m); break;
    case 3:
      sglib_hashed_ilist_delete_if_member(htab,e,&m); break;
    case 4:
      if(sglib_hashed_ilist_is_member(htab,e))
	sglib_hashed_ilist_delete(htab,e); 
      break;
    case 5:
      sglib_hashed_ilist_is_member(htab,e); break;
    case 6:
      sglib_hashed_ilist_find_member(htab,e); break;
    }
    g();
    fflush(stdout);
  }
    g();
  fflush(stdout);
}
