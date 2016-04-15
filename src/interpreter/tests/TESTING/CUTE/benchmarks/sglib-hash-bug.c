
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


main() {
  struct ilist *e,*e1,*e2,*m;

  sglib_hashed_ilist_init(htab);

  e = (ilist *)malloc(sizeof(ilist));
  e->next = 0;
  e->i=0;
  sglib_hashed_ilist_add(htab,e);
  sglib_hashed_ilist_add(htab,e);

  e2 = (ilist *)malloc(sizeof(ilist));
  e2->next = 0;
  e2->i=0; 
  sglib_hashed_ilist_is_member(htab,e2);
}
