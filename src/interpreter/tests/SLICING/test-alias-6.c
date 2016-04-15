// Compare with test-alias-13.c

/* By Vijay: */

/* If ptr is a pointer, then there is a difference between doing: */
/* ptr = something */
/* and */
/* ptr->x = something; *ptr = something; */
/* If the user wants _SLICE(ptr) then he is requesting for slice on the */
/* pointer itself, so only statements like the first one should appear. */
/* For the case _SLICE(ptr->x) or _SLICE(*ptr) I agree we need to print the */
/* heap of ptr in the slice condition, but for that I need to implement */
/* multiple heaps first. */


struct __s1 {
  int x;
  int y;
};

typedef struct __s1 S1;

/* void main(){ */
/*   S1 * ptr; */
 
/*   ptr->x = 9;       /\* IN *\/ */
/*   ptr->y = 10;      /\* IN *\/ */

/*   _SLICE(ptr->x); */
/* } */


void main(){
  S1 * ptr;
 
  ptr->x = 9;       /* OUT */
  ptr->y = 10;      /* OUT */

  _SLICE(ptr);
}


