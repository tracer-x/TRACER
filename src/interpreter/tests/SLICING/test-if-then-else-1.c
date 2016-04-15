// To test that we can count when a if-then-else can be sliced away.
void main(int x){
  int a,b,c,d,y,z;
                                          /* c */     /* a */   /* y */
  if (z > 0) {   /* i9 */                  /*IN*/     /*IN*/    /*OUT*/
    if (x > 0){  /* i5 */                  /*IN*/     /*IN*/    /*OUT*/
      a = b;     /* i2 */                  /*OUT*/    /*IN*/    /*OUT*/
      c = d;                               /*IN*/     /*OUT*/   /*OUT*/
    }
    /* i6 */ else  /* i3 */ a = d;         /*OUT*/    /*IN*/    /*OUT*/
  }
  /* i10 */ else /* i7 */ a = d;           /*OUT*/    /*IN*/    /*OUT*/
 
  return;                                  /*OUT*/    /*OUT*/   /*OUT*/
  _SLICE(a);
  //_SLICE(y);
  //_SLICE(c);
}

// Slicing criteria : {a}  --> sliced away only a=b in i2
// Slicing criteria : {y}  --> no slice statements
// Slicing criteria : {c}  --> slice: i9, i5 and i2 (only c=d;)
