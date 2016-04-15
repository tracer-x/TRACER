void main(){

  int *ptr1,*ptr2,*ptr3;
  int result;
                        /*PS w/ witnesses*/     /*CSURF*/

  *ptr3 = 6;               /*IN */              /*OUT*/  // <--------- INCORRECT ?
  ptr2 = ptr3;             /*IN */              /*IN */
  ptr1 = ptr2;             /*IN */              /*IN */
  result = *ptr1;          /*IN */              /*IN */

  return;                  /*OUT */
  _SLICE(result);
}

