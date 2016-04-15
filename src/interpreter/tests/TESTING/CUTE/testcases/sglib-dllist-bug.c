#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include "sglib.h"

typedef struct dllist {
    int i;
    struct dllist *ptr_to_next;
    struct dllist *ptr_to_previous;
} dllist;

#define DLLIST_COMPARATOR(e1, e2) (e1->i - e2->i)

SGLIB_DEFINE_DL_LIST_PROTOTYPES(dllist, DLLIST_COMPARATOR, ptr_to_previous, ptr_to_next);
SGLIB_DEFINE_DL_LIST_FUNCTIONS(dllist, DLLIST_COMPARATOR, ptr_to_previous, ptr_to_next);


main(){
  dllist * l, * e, *l2;
  e = (dllist *) malloc(sizeof(dllist));
  e->i=0; e->ptr_to_next=NULL; e->ptr_to_previous=NULL;
  l = NULL;
  sglib_dllist_add(&l,e);
  l2 = NULL; 
  sglib_dllist_concat(&l,l2); 
}
