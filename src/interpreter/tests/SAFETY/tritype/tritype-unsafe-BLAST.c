// UNSAFE
// See tritype.c for comments

/////////////////////////////////////////////////
// time pblast.opt -dfs tritype-BLAST.c
/////////////////////////////////////////////////

void error(){
 ERROR: goto ERROR;
}

int main(int i,int j,int k){

  int trityp;
  int safety_cond;

  if ((i<=0) || (j <=0) || (k <=0)){
    trityp = 4;
    if (!((i<=0) || (j <=0) || (k <=0))) error();
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
	if (!((i+j<=k)||(j+k<=i)||(i+k<=j))) error();
      }
      else{
	trityp = 1;
	if (!((i!=j) && (j!=k) && (i!=k)
	      && !((i+j<=k)||(j+k<=i)||(i+k<=j)) )) error();
      }
    }
    else{
      if (trityp >3) {
	trityp=3;
	if(!((i==j) && j==k && i==k)) error();
      }
      else{
	if((trityp==1) && (i+j>k)){
	  trityp=2;
	  if(i!=j) error();
	  // assert(!((i+j<=k)||(j+k<=i)||(i+k<=j)) );
	}
	else{
	  if ((trityp==1) && (i+k>j)) { // ERROR trityp==1
	    trityp=2;
	    if(i!=k) error();
	  }
	  else{
	    if ((trityp==3) && (j+k>i)) { 
	      trityp=2;
	      if(j!=k) error();
	    }
	    else{
	      trityp=4;
	      if(!((i+j<=k)||(j+k<=i)||(i+k<=j))) error();
	    }
	  }
	}
      }
    }
  }
    
  return trityp;
}
