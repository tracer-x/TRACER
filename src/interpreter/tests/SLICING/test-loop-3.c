/* Two exits from the loop, one entry. */

int main(){

  int N;
  int i = 1;                 /* IN */
  int sum = 0;               /* IN */
  int product = 1;           /* OUT */

   while (i == N){           /* IN */
    sum = sum + i;           /* IN */
    product = product * i;   /* OUT */
    i++;                     /* IN */
  }

  return sum;                /* OUT */
  _SLICE(sum);
}
