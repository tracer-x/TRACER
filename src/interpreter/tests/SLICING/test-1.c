int main(int n){
  int i   = 1;              /* IN */
  int sum = 0;              /* OUT */
  int product = 1;          /* IN */ 

  if (i<=n){                /* IN */ /* else OUT */
    sum     = sum + i;      /* OUT */
    product = product * i;  /* IN */
    i       = i + 1;        /* OUT */
  }
  // i =< 2 

  return sum;               /* OUT */
  _SLICE(product);
}
