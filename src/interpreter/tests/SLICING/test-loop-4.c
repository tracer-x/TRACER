int main(){
  int a,b,n;
                  /* slice on b */ /* slice on ret*/
  n = 0;             /* IN */          /* IN */
  while (n < 100){   /* IN */          /* IN */
    if (a > 0)       /* IN */          /* IN */ 
      b = 5;         /* IN */          /* IN */
    else             /* IN */          /* IN */
      b = 6;         /* IN */          /* IN */
    n++;             /* IN */          /* IN */
  }                  
  return b;          /* OUT */         /* IN */
  //  _SLICE(b);
  _SLICE("$ret");
}
