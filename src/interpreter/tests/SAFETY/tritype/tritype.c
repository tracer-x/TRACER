// SAFE

/* 

Taken from the paper "Comparison between CPBPV, ESC/Java, CBMC, Blast,
Eureka and Why(Cadeceus) for Bounded Program Verification"

The tritype program is a standard benchmark in test case generation
and program verification since it contains numerous infeasible paths:
only 10 paths correspond to actual inputs because of complex
conditional statements in the program. The program takes three
positive integers as inputs (the triangle sides) and returns 2 if the
inputs correspond to an isoscele triangle, 3 if they correspond to an
equilateral triangle, 1 if they correspond to some other triangle, and
4 otherwise.
*/

int main(int i,int j,int k){

  int trityp;
  int safety_cond;

  _TRACER_assume((i>=0) && (j>=0) && (k>=0));
  
  if ((i<=0) || (j <=0) || (k <=0)){
    trityp = 4;
  }
  else{
    trityp=0;
    if (i==j) trityp=trityp+1;
    if (i==k) trityp=trityp+2;
    if (j==k) trityp=trityp+3;
    if (trityp==0){
      if ((i+j <= k) || (j+k <= i) || (i+k <=j )){
	trityp = 4;
      }
      else{
	trityp = 1;
      }
    }
    else{
      if (trityp >3) {
	trityp=3;
      }
      else{
	if((trityp==1) && (i+j>k)){
	  trityp=2;
	}
	else{
	  if ((trityp==2) && (i+k>j)) { // ERROR trityp==1
	    trityp=2;
	  }
	  else{
	    if ((trityp==3) && (j+k>i)) { 
	      trityp=2;
	    }
	    else{
	      trityp=4;
	    }
	  }
	}
      }
    }
  }
  
  _TRACER_abort(!((!((i+j<=k)||(j+k<=i)||(i+k<=j)|| trityp ==4) && 
		 (!(!((i+j<=k)||(j+k<=i)||(i+k<=j)) && ((i==j)&&(j==k))) || trityp==3) &&
		 (!(!((i+j<=k)||(j+k<=i)||(i+k<=j)) && !((i==j)&&(j==k)) && 
		    ((i==j)||(j==k)||(i==k))) || trityp==2) &&	
		 (!(!((i+j<=k)||(j+k<=i)||(i+k<=j))&& !((i==j)&&(j==k))&& 
		    !((i==j)||(j==k)||(i==k))) || trityp == 1))));
  
  return trityp;
}
