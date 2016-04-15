// UNSAFE
// See tritype.c for comments

int main(int i,int j,int k){

  int trityp;

  if ((i<=0) || (j <=0) || (k <=0)){
    trityp = 4;
    _TRACER_abort(!((i<=0) || (j <=0) || (k <=0)));
  }
  else{
    trityp=0;
    if (i==j) 
      trityp=trityp+1;
    if (i==k) 
      trityp=trityp+2;
    if (j==k) 
      trityp=trityp+3;
    if (trityp==0){
      if ((i+j <= k) || (j+k <= i) || (i+k <=j )){
	trityp = 4;
	_TRACER_abort(!((i+j<=k)||(j+k<=i)||(i+k<=j)));
      }
      else{
	trityp = 1;
	_TRACER_abort(!((i!=j) && (j!=k) && (i!=k)
			&& !((i+j<=k)||(j+k<=i)||(i+k<=j)) ));
      }
    }
    else{
      if (trityp >3) {
	trityp=3;
	_TRACER_abort(!((i==j) && j==k && i==k));
      }
      else{
	if((trityp==1) && (i+j>k)){
	  trityp=2;
	  _TRACER_abort(i!=j);
	  // assert(!((i+j<=k)||(j+k<=i)||(i+k<=j)) );
	}
	else{
	  if ((trityp==1) && (i+k>j)) { // ERROR trityp==1
	    trityp=2;
	    _TRACER_abort(i!=k);
	  }
	  else{
	    if ((trityp==3) && (j+k>i)) { 
	      trityp=2;
	      _TRACER_abort(j!=k);
	    }
	    else{
	      trityp=4;
	      _TRACER_abort(!((i+j<=k)||(j+k<=i)||(i+k<=j)));
	    }
	  }
	}
      }
    }
  }
    
  return trityp;
}
