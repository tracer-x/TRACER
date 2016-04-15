int i = 1;
int sum = 0;
int product = 2;

int main(int n){
  // i   = 1;                    /* IN */
  // sum = 0;                    /* OUT */
  // product = 2;                /* IN */

  if (i<=n){                  /* IN */ 
    sum     = sum + i;        /* OUT */
    product = product * i;    /* IN */
    i       = i + 1;          /* OUT */
  }

  return sum;                 /* OUT */
  _SLICE(product);
}
