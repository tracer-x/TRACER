int main(){
                                /* sum */   /* return */
  int N; 
  int i = 1;                    /* OUT */    /* OUT */
  int sum = 0;                  /* IN */     /* IN */
  int product = 2;              /* OUT */    /* OUT */ 
  int a = 666;                  /* IN */     /* IN */

  i = a;                        /* IN */     /* IN */
 
  while (i <= N){               /* IN */     /* IN */
    sum = sum + i;              /* IN */     /* IN */
    product = product * i;      /* OUT */    /* OUT */   
    i++;                        /* IN */     /* IN */
  }

  return sum;                   /* OUT */    /*IN*/
  //_SLICE("$ret");
  _SLICE(sum);
}
