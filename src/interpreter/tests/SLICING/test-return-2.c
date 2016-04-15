// NOTE: the last return may be included even if it does not affect
// the value of the variable of interest. We need to fix this.
int main(){
  int x;
  int a,b,c;
  int R;

  /*IN*/ if (x==0){ /*IN*/  return 0;}
  else{  /* (2) IN */
    /*IN*/ if (x==1){ /*IN*/ return 1;}
    else{ /* (2) IN */
      /*IN*/ if (x==2){/*IN*/  return 2;}
      else{ /* (2) IN */
	/*IN*/ if (x==3){ /*IN*/ return 3;}
	else{           /* (2) IN */
	  b=a;          /*IN*/
	  c=b;          /*IN*/
          return 1000;  /*OUT*/ //but it's IN due to how we deal with return's
	}
      }
    }
  }
  _SLICE(c);
}  
