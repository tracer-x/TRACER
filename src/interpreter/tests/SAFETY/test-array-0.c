// SAFE

// Test subsumption with arrays

extern int unknown();

main(){
  int i,x;
  int a[5],b[5],c[5],d[5],e[5];

/*   for (i=0;i<5;i++){ b[i]=0;} */
/*   for (i=0;i<5;i++){ c[i]=0;} */
/*   for (i=0;i<5;i++){ d[i]=0;} */
/*   for (i=0;i<5;i++){ e[i]=0;} */

  a[x]=3;
  a[a[x]] = 999;

  if (unknown()){
    b[0]++;b[1]++;b[2]++;b[3]++;b[4]++;
  }
  else{
    b[0]--;b[1]--;b[2]--;b[3]--;b[4]--;
  }

  if (unknown()){
    c[0]++;c[1]++;c[2]++;c[3]++;c[4]++;
  }
  else{
    c[0]--;c[1]--;c[2]--;c[3]--;c[4]--;
  }

  if (unknown()){
    d[0]++;d[1]++;d[2]++;d[3]++;d[4]++;
  }
  else{
    d[0]--;d[1]--;d[2]--;d[3]--;d[4]--;
  }

  if (unknown()){
    e[0]++;e[1]++;e[2]++;e[3]++;e[4]++;
  }
  else{
    e[0]--;e[1]--;e[2]--;e[3]--;e[4]--;
  }

  
  // Full subsumption
  _TRACER_abort( a[3] != 999);
  
  // No subsumption   
  // _TRACER_abort( b[0] > 2 || c[1] > 2 || d[2] > 2 || e[3] > 2) ;

}
