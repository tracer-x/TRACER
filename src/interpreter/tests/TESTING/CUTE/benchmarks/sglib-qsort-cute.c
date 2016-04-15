// sglib selftest. This file invokes ALL documented
// functions and macros from sglib library and checks
// the internal consistency of results.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "sglib.h"
#include <cute.h>

#define DEBUG 0
#define REPEAT 1
#define ORDER 6

int * val;

int counts[ORDER];
int check_counts[ORDER];

#define ARRAY_CORRESPONDENCE_FUN(val) (2 * val)

#define MY_AB_EXCHANGER(type, a, i, j) {		\
    SGLIB_ARRAY_ELEMENTS_EXCHANGER(int, a, i, j);	\
    SGLIB_ARRAY_ELEMENTS_EXCHANGER(int, b, i, j);	\
  }


void generate_values() {
  int i;
  CUTE_array_input(val,ORDER);
  for(i=0; i<ORDER; i++) {
    CUTE_assume(val[i]<ORDER && val[i]>=0);
  }
}

void compute_orders_for_array(int *a, int *counts, int max) {
  int i;
  memset(counts, 0, ORDER*sizeof(int));
  for(i=0; i<max; i++) {
    counts[a[i]]++;
  }
}


void compare_counts(int *counts, int *check_counts) {
  int i;
  for(i=0; i<ORDER; i++) {
    if (counts[i] != check_counts[i]) {
      fprintf(stderr,"[ERROR] DIFFERENT NUMBERS IN TEST STRUCTURE !!!!!!!!!!!!!!!\n");
      fprintf(stderr,"[ERROR] %d ", i);
      if (counts[i] > check_counts[i]) {
	fprintf(stderr,"IS MISSING\n");
      } else {
	fprintf(stderr,"APPEARED\n");
      }
      assert(0);
    }
  }
}

void compare_unique_counts(int *counts, int *check_counts) {
  int i;
  for(i=0; i<ORDER; i++) {
    if (counts[i] == 0) assert(check_counts[i]==0);
    else assert(check_counts[i]==1);
  }
}

void check_array_values(int *a, int max) {
  compute_orders_for_array(val, counts, ORDER);
  compute_orders_for_array(a, check_counts, max);
  compare_counts(counts, check_counts);
}


void check_multiple_array_correspondence(int *a, int *b) {
  int i;
  for (i=0; i<ORDER; i++) {
    if (b[i] != ARRAY_CORRESPONDENCE_FUN(a[i])) {
      fprintf(stderr,"[ERROR] ARRAY CORRESPONDENCE PROBLEM AT INDEX %d !!!!!!!!!!!!!!!\n", i);
      assert(0);
    }
  }
}

void check_that_int_array_is_sorted(int *a, int max) {
  int i;
  for(i=0; i<max-1; i++) {
    if (a[i]>a[i+1]) {
      fprintf(stderr,"[ERROR] ARRAY UNSORTED AT INDEX %d !!!!!!!!!!!!!!!\n", i);
      assert(0);
    }
  }
  return;
}



void array_quick_sort_test() {
  int a[ORDER];
  int b[ORDER];
  int i,pass;
  generate_values();
  for(i=0; i<ORDER; i++) {
    a[i] = val[i];
    b[i] = ARRAY_CORRESPONDENCE_FUN(val[i]);
  }
  SGLIB_ARRAY_QUICK_SORT(int, a, ORDER, SGLIB_NUMERIC_COMPARATOR, MY_AB_EXCHANGER);
/*   check_that_int_array_is_sorted(a, ORDER); */
/*   check_array_values(a, ORDER); */
/*   check_multiple_array_correspondence(a, b); */
}



/////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////

f(){
  array_quick_sort_test(); 
}
  

/* int main() { */
/* 	int pass; */
/* 	srandom(0); */
/* 	srandom(time(NULL)); */
/* 	for(pass=0; pass<REPEAT; pass++) { */
/* 		array_quick_sort_test(); */
/* 		array_heap_sort_test(); */
/* 		list_sort_test(); */
/* 		list_test(); */
/* 		hashed_list_test(); */
/* 		double_linked_list_test(); */
/* 		sorted_list_test(); */
/* 		rbtree_test(); */
/* 	} */
/* 	return(0); */
/* } */
