// Test control optimization
int main(){
                         /* w/ control opt */ /*w/o control opt */
  int i   = 1;              /* IN */                /* IN */ 
  int sum = 0;              /* OUT */               /* OUT */
  int product = 1;          /* IN */                /* IN */

  if (i<=5){                /* OUT */               /* IN */   
    sum     = sum + i;      /* OUT */               /* OUT */
    product = product * i;  /* IN */                /* IN */ 
    i       = i + 1;        /* OUT */               /* OUT */
  }
  // i =< 2 

  return sum;               /* OUT */               /* OUT */
  _SLICE(product);
}
