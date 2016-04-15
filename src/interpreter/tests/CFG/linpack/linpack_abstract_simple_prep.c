// Criteria slicing: aup1

int matgen(int aup1, int aup2, int lda, int n, int bup, float norma)
{
  register int init, i, j;
  register int tmp1, tmp2, tmp3, tmp4, tmp5, tmp6, tmp7;

  init = 1325;
  norma = 0.0;
  j = 0;

  if (tmp3 < 0 || tmp3 > n) return -1;
  j = tmp3;

  if (j+1 <= n) {
    i = 0;
    if (tmp4 < 0 || tmp4 > n) return -1;
    i = tmp4;

    if (i+1 <= n) {
      if (tmp2) {      }
      i++;
      if (i < 0 || i > n) return 1;
      return 0;
    }
    j++;
    if (j < 0 || j > n) return 1;
    return 0;
  }

  i = 0;
  if (tmp5 < 0 || tmp5 > n) return -1;
  i = tmp5;
  if (i+1 <= n) {
    i++;
    if (i < 0 || i > n) return 1;
    return 0;
  }
  j = 0;
  if (tmp6 < 0 || tmp6 > n) return -1;
  j = tmp6;

  if (j+1 <= n) {
    i = 0;
    if (tmp7 < 0 || tmp7 > n) return -1;
    i = tmp7;
    if (i+1 <= n) {
      i++;
      if (i < 0 || i > n) return 1;
      return 0;
    }
    j++;

    if (j < 0 || j > n) return 1;
    return 0;

  }
  return 0;
}


int daxpy(int n, float da, int dx, int incx, int dy, int incy)
{
  register int i,ix,iy,m,mp1;
  register int tmp1, tmp2;

  if(n <= 0) return 0;
  if (da == 0.0) return 0;

  if(incx != 1 || incy != 1) {

    ix = 0;
    iy = 0;
    if(incx < 0) {

      ix = 0;
    }
    if(incy < 0) {

      iy = 0;
    }

    i = 0;

    if (tmp1 < 0 || tmp1 > n) return -1;
    i = tmp1;
    if (i+1 <= n) {
      ix = ix + incx;
      iy = iy + incy;
      i++;
      if (i < 0 || i > n) return 1;
      return 0;
    }
    return 0;
  }

  i = 0;
  if (tmp2 < 0 || tmp2 > n) return -1;
  i = tmp2;
  if (i+1 <= n) {
    i++;
    if (i < 0 || i > n) return 1;
    return 0;
  }
  return 0;
}

int epslon (float x)
{
  register float a,b,c,eps;
  register int tmp1, tmp3;
  register int tmp2;

  a = 4.0/3.0;
  eps = 0.0;
  if (eps == 0.0) {
    b = a - 1.0;
    c = b + b + b;
    return 0;
  }
  return 0;
}

int dscal(int n, float da, int dxup, int incx)
{
  register int i,m,mp1,nincx;
  register int tmp1, tmp2;

  if(n <= 0)return 0;
  if(incx != 1) {
    nincx = n + nincx;
    i = 0;
    if (tmp1 < 0 || tmp1 > nincx) return -1;
    i = tmp1;
    if (i+1 <= nincx) {
      i = i+incx;
      if (i < 0 || i > nincx) return 1;
      return 0;
    }
    return 0;
  }

  i = 0;
  if (tmp2 < 0 || tmp2 > n) return -1;
  i = tmp2;
  if (i+1 <= n) {
    i++;
    if (i < 0 || i > n) return 1;
    return 0;
  }
  return 0;
}

int print_time (int row)
{
  return 0;
}

int dmxpy (int n1, int yup, int n2, int ldm, int xup, int mup)

{
  int j,i,jmin, tmp1, tmp2, tmp3;
  int tmp4;
  int tmp5, tmp6, tmp7,tmp8, tmp9, tmp10, tmp11;

  if (tmp1 < 0 || tmp1 > 1) return -1;
  j = tmp1;
  if (j >= 1) {
    j = j - 1;
    i = 0;
    if (tmp4 < 0 || tmp4 > n1) return -1;
    i = tmp4;
    if (i+1 <= n1) {
      i++;
      if (i < 0 || i > n1) return 1;
      return 0;

    }
  }

  if (tmp2 < 0 || tmp2 > 3) return -1;
  j = tmp2;
  if (j >= 2) {
    j = j - 1;
    i = 0;
    if (tmp5 < 0 || tmp5 > n1) return -1;
    i = tmp5;
    if (i+1 <= n1) {
      i++;
      if (i < 0 || i > n1) return 1;
      return 0;
    }
  }


  if (tmp3 < 0 || tmp3 > 7) return -1;
  j = tmp3;
  if (j >= 4) {
    j = j - 1;
    i = 0;
    if (tmp6 < 0 || tmp6 > n1) return -1;
    i = tmp6;
    if (i+1 <= n1) {
      i++;
      if (i < 0 || i > n1) return 1;
      return 0;
    }
  }

  if (tmp10 < 0 || tmp10 > 15) return -1;
  j = tmp10;
  if (j >= 8) {
    j = j - 1;
    i = 0;
    if (tmp7 < 0 || tmp7 > n1) return -1;
    i = tmp7;
    if (i+1 <= n1) {
      i++;
      if (i < 0 || i > n1) return 1;
      return 0;
    }
  }
  if (tmp11 < 16 || tmp11 > 31) return -1;
  jmin = tmp11;
  j = jmin - 1;
  if (tmp8 < jmin-1 || tmp8 > n2) return -1;
  j = tmp8;

  if (j+1 <= n2) {
    i = 0;
    if (tmp9 < 0 || tmp9 > n1) return -1;
    i = tmp9;
    if (i+1 <= n1) {
      i++;
      if (i < 0 || i > n1) return 1;
      return 0;
    }
    j = j + 16;
    if (j < jmin - 1 || j > n2) return 1;
    return 0;
  }
  return 0;
}

int ddot(int n, int dxup, int incx, int dyup, int incy)
{
  float dtemp;
  int i,ix,iy,m,mp1;
  int tmp1, tmp2;

  dtemp = 0.0;

  if(n <= 0) return 0;

  if(incx != 1 || incy != 1) {
    ix = 0;
    iy = 0;
    if (incx < 0) {

      ix = 0;
    }
    if (incy < 0) {

      iy = 0;
    }

    i = 0;

    if (tmp1 < 0 || tmp1 > n) return -1;
    i = tmp1;
    if (i+1 <= n) {
      ix = ix + incx;
      iy = iy + incy;
      i++;

      if (i < 0 || i > n) return 1;
      return 0;

    }
    return 0;
  }

  i = 0;

  if (tmp2 < 0 || tmp2 > n) return -1;
  i = tmp2;
  if (i+1 <= n) {
    i++;
    if (i < 0 || i > n) return 1;
    return 0;
  }
  return 0;
}



int second()
{
  int ru_utime_tv_sec, ru_stime_tv_sec, ru_utime_tv_usec, ru_stime_tv_usec;
  float t ;
  t = (float) (ru_utime_tv_sec+ru_stime_tv_sec) +
    ((float) (ru_utime_tv_usec+ru_stime_tv_usec)) ;
  return 0 ;
}
int dgesl(int aup1, int aup2, int lda, int n, int ipvtup, int bup, int job)
{
  register float t;
  register int k,kb,l,nm1;
  register int tmp1, tmp2, tmp3, tmp4, tmp5, tmp6;
  register int tmp7;

  nm1 = n - 1;
  if (job == 0) {

    if (nm1 >= 1) {
      k = 0;

      if (tmp4 < 0 || tmp4 > nm1) return -1;
      k = tmp4;
      if (k+1 <= nm1) {
/* 	if (l != k){} */

	tmp1 = daxpy(n-(k+1), t, aup2, 1, tmp1, 1);
	if (tmp1) return tmp1;
	k++;
	
	if (k < 0 || k > nm1) return 1;
	return 0;
	
      }
    }

    kb = 0;
    if (tmp5 < 0 || tmp5 > n) return -1;
    kb = tmp5;
    if (kb+1 <= n) {
      k = n - (kb + 1);
      tmp1 = daxpy(k, t, aup2, 1, tmp2, 1);
      if (tmp1) return tmp1;
      kb++;

      if (kb < 0 || kb > n) return 1;
      return 0;

    }
  }
  else {
    k = 0;
    if (tmp6 < 0 || tmp6 > 6) return -1;
    k = tmp6;
    if (k+1 <= n) {
      t = ddot(k, aup2, 1, tmp3, 1);
      k++;
      if (k < 0 || k > 6) return 1;
      return 0;
    }

    if (nm1 >= 1) {
      kb = 1;
      if (tmp7 < 1 || tmp7 > nm1) return -1;
      kb = tmp7;
      if (kb+1 <= nm1) {
	k = n - (kb+1);			
	tmp1 = ddot(n-(k+1), aup2, 1, bup, 1);
	if (tmp1) return tmp1;		    	
/* 	if (l != k) { } */
	kb++;
	if (kb < 1 || kb > nm1) return 1;
	return 0;	
      }
    }
  }
  return 0;
}

int idamax(int n, int dxup, int incx)
{
  float dmax;
  int i, ix, itemp;
  int tmp1;
  int tmp2, tmp3, tmp4;
  int tmpa;
  int tmp5, tmp6;
  int tmp7, tmp8, tmp9;

  if( n < 1 ) return 0;
  if(n ==1 ) return 0;
  if(incx != 1) {
    ix = 1;
    ix = ix + incx;
    i = 1;
    if (tmpa < 1 || tmpa > n) return -1;
    i = tmpa;
    if (i+1 <= n) {

      if (tmp3) {itemp = i;}
      ix = ix + incx;
      i++;
      if (i < 1 || i > n) return 1;
      return 0;
    }
  }
  else {

    itemp = 0;
    dmax = tmp6;
    i = 1;
    if (tmpa < 1 || tmpa > n) return -1;
    i = tmpa;
    if (i+1 <= n) {

      if (tmp8) {
	itemp = i;
      }
      i++;

      if (i < 1 || i > n) return 1;
      return 0;

    }
  }
  return 0;
}



int dgefa(int aup1, int aup2, int lda, int n, int ipvtup, int info)
{

  register float t;
  register int j,k,kp1,l,nm1;
  register int tmp1, tmp2, tmp3, tmp4, tmp5, tmp6;

  info = 0;
  nm1 = n - 1;
  if (nm1 >= 0) {
    k = 0;


    if (tmp5 < 0 || tmp5 > nm1) return -1;
    k = tmp5;

    if (k+1 <= nm1) {
      kp1 = k + 1;
      tmp1 = idamax(n-k, 200, 1);
      if (tmp1) return tmp1;
      if (tmp3) {

/*  if (l != k) { */
/*  } */

	tmp1 = dscal(n-(k+1), t, aup2, 1);
	if (tmp1) return tmp1;
	
	j = kp1;
	
	
	if (tmp6 < kp1 || tmp6 > n) return -1;
	j = tmp6;
			
	if (j+1<=n) {
	  		  
/* 	  if (l != k) {	} */
	  tmp1 = daxpy(n-(k+1), t, aup2, 1, aup2, 1);
	  if (tmp1) return tmp1;
	  
	  j++;
	  
	  if (j < kp1 || j > n) return 1;
	  return 0;
	  
	}
      }
      else {
	info = k;
      }
      k++;
      
      if (k < 0 || k > nm1) return -1;
      return 0;
      
    }
  }

  if (tmp4) { info = n - 1; }
  return 0;
}






int main ()
{
  register float cray,ops,total,norma,normx;
  register float resid,residn,eps,t1,tm,tm2;
  register float kf;
  register int n,i,ntimes,info,lda,ldaa,kflops;

  int aup1 = 200;
  int aup2 = 201;
  int aaup1 = 200;
  int aaup2 = 200;
  int bup = 200;
  int xup = 200;
  int ipvtup = 200;

  int tmp1, tmp2, tmp3, tmp4, tmp5, tmp6, tmp7;
  int tmp8, tmp9, tmpa;

  int tmp10, tmp11, tmp12, tmp13, tmp14, tmp15;
  int tmp16;

  lda = 201;
  ldaa = 200;
  cray = 0.056;
  n = 100;

  tmp8 = ops;

  // Start here

  tmp8 = matgen(aup1,aup2,lda,n,bup,norma);
  if (tmp8) return tmp8;

  t1 = second();
  tmp8 = dgefa(aup1,aup2,lda,n,ipvtup,info);
  if (tmp8) return tmp8;

  t1 = second();
  tmp8 = dgesl(aup1,aup2,lda,n,ipvtup,bup,0);
  if (tmp8) return tmp8;
  i = 0;


  if (tmp10 < 0 || tmp10 > n) return -1;
  i = tmp10;



  if (i+1 <= n) {
    i++;
    if (i < 0 || i > n) return 1;
    return 0;
  }

  tmp8 = matgen(aup1,aup2,lda,n,bup,norma);
  if (tmp8) return tmp8;
  i = 0;

  if (tmp11 < 0 || tmp11 > n) return -1;
  i = tmp11;

  if (i+1 <= n) {
    i++;

    if (i < 0 || i > n) return 1;
    return 0;

  }

  tmp8 = dmxpy(n,bup,n,lda,xup,aup2);
  if (tmp8) return tmp8;

  resid = 0.0;
  normx = 0.0;

  i = 0;


  if (tmp12 < 0 || tmp12 > n) return -1;
  i = tmp12;



  if (i+1 <= n) {

    if (resid <= tmp1) {
    }

    if (normx <= tmp1) {
    }
    i++;

    if (i < 0 || i > n) return 1;
    return 0;

  }
  eps = epslon((float)1.0);
  print_time(0);

  tmp8 = matgen(aup1,aup2,lda,n,bup,norma);
  if (tmp8) return tmp8;

  t1 = second();
  tmp8 = dgefa(aup1,aup2,lda,n,ipvtup,info);
  if (tmp8) return tmp8;

  tmp1 = second();
  if (tmp1) return tmp1;

  t1 = second();
  if (t1) return t1;
  tmp8 = dgesl(aup1,aup2,lda,n,ipvtup,bup,0);
  if (tmp8) return tmp8;

  tmp1 = second();
  if (tmp1) return tmp1;
  tmp8 = matgen(aup1,aup2,lda,n,bup,norma);
  if (tmp8) return tmp8;
  t1 = second();
  if (t1) return t1;
  tmp8 = dgefa(aup1,aup2,lda,n,ipvtup,info);
  if (tmp8) return tmp8;
  tmp1 = second();
  if (tmp1) return tmp1;
  t1 = second();
  if (t1) return t1;
  tmp8 = dgesl(aup1,aup2,lda,n,ipvtup,bup,0);
  if (tmp8) return tmp8;
  tmp1 = second();
  if (tmp1) return tmp1;
  ntimes = 10;
  tm2 = 0.0;
  tmp1 = second();
  if (tmp1) return tmp1;
  i = 0;
  if (tmp13 < 0 || tmp13 > ntimes) return -1;
  i = tmp13;

  if (i < ntimes) {
    tmp1 = second();
    if (tmp1) return tmp1;
    tmp8 = matgen(aup1,aup2,lda,n,bup,norma);
    if (tmp8) return tmp8;

    tmp1 = second();
    if (tmp1) return tmp1;

    tm2 = tm2 + tmp1 - tm;

    tmp8 = dgefa(aup1,aup2,lda,n,ipvtup,info);   // <--------- problem here

    if (tmp8) return tmp8;
    i++;

    if (i < 0 || i > ntimes) return 1;
    return 0;

  }

  tmp1 = second();
  if (tmp1) return tmp1;
  t1 = second();
  if (t1) return t1;
  i = 0;
  if (tmp14 < 0 || tmp14 > ntimes) return -1;
  i = tmp14;
  if (i+1 <= ntimes) {
    tmp8 = dgesl(aup1,aup2,lda,n,ipvtup,bup,0);
    if (tmp8) return tmp8;
    i++;

    if (i < 0 || i > ntimes) return 1;
    return 0;

  }


  tmp1 = second();
  if (tmp1) return tmp1;
  print_time(1);
  print_time(2);
  print_time(3);

  tmp8 = matgen(aaup1,aaup2,ldaa,n,bup,norma);   // problem here <-----------
  if (tmp8) return tmp8;
  t1 = second();
  if (t1) return t1;
  tmp8 = dgefa(aaup1,aaup2,ldaa,n,ipvtup,info);
  if (tmp8) return tmp8;
  tmp1 = second();
  if (tmp1) return tmp1;
  t1 = second();
  if (t1) return t1;
  tmp8 = dgesl(aaup1,aaup2,ldaa,n,ipvtup,bup,0);   // problem here <-------- 15x4Mb heap
  if (tmp8) return tmp8;
  tmp1 = second();
  if (tmp1) return tmp1;
/*   tmp8 = matgen(aaup1,aaup2,ldaa,n,bup,norma); */
/*   if (tmp8) return tmp8; */
/*   t1 = second(); */
/*   if (t1) return t1; */
/*   tmp8 = dgefa(aaup1,aaup2,ldaa,n,ipvtup,info); */
/*   if (tmp8) return tmp8; */
/*   tmp1 = second(); */
/*   if (tmp1) return tmp1; */
/*   t1 = second(); */
/*   if (t1) return t1; */
/*   tmp8 = dgesl(aaup1,aaup2,ldaa,n,ipvtup,bup,0); */
/*   if (tmp8) return tmp8; */
/*   tmp1 = second(); */
/*   if (tmp1) return tmp1; */
/*   tmp8 = matgen(aaup1,aaup2,ldaa,n,bup,norma); */
/*   if (tmp8) return tmp8; */
/*   t1 = second(); */
/*   if (t1) return t1; */
/*   tmp8 = dgefa(aaup1,aaup2,ldaa,n,ipvtup,info); */
/*   if (tmp8) return tmp8; */
/*   tmp1 = second(); */
/*   if (tmp1) return tmp1; */
/*   t1 = second(); */
/*   if (t1) return t1; */
/*   tmp8 = dgesl(aaup1,aaup2,ldaa,n,ipvtup,bup,0); */
/*   if (tmp8) return tmp8; */
/*   tmp1 = second(); */
/*   if (tmp1) return tmp1; */
/*   ntimes = 10; */
/*   tm2 = 0; */
/*   t1 = second(); */
/*   if (t1) return t1; */
/*   i = 0; */
/*   if (tmp15 < 0 || tmp15 > n) return -1; */
/*   i = tmp15; */
/*   if (i+1 <= ntimes) { */
/*     tm = second(); */
/*     if (tm) return tm; */
/*     tmp8 = matgen(aaup1,aaup2,ldaa,n,bup,norma); */
/*     if (tmp8) return tmp8; */
/*     tmp8 = second(); */
/*     if (tmp8) return tmp8; */
/*     tmp8 = dgefa(aaup1,aaup2,ldaa,n,ipvtup,info); */
/*     if (tmp8) return tmp8; */
/*     i++; */
/*     if (i < 0 || i > ntimes) return 1; */
/*     return 0; */
/*   } */
/*   tmp1 = second(); */
/*   if (tmp1) return tmp1; */
/*   t1 = second(); */
/*   if (t1) return t1; */
/*   i = 0; */
/*   if (i < 0 || i > ntimes) return -1; */
/*   i = tmp16; */
/*   if (i+1 <= ntimes) { */
/*     tmp8 = dgesl(aaup1,aaup2,ldaa,n,ipvtup,bup,0); */
/*     if (tmp8) return tmp8; */
/*     i++; */
/*     if (i < 0 || i > ntimes) return 1; */
/*     return 0; */
/*   } */
/*   tmp1 = second(); */
/*   if (tmp1) return tmp1; */
/* /\*   if (tmp7) { *\/ */
/* /\*   } else { } *\/ */


/*   if (kf > 0) { */
/*     kf = kf + 0.5; */
/*   } else { */
/*     kf = kf - 0.5; */
/*   } */

/*   if (tmp9) */
/*     kflops = 0; */
/*   else { */
/*     if (tmpa) kflops = -kflops; */
/*   } */


/*   print_time(4); */
/*   print_time(5); */
/*   print_time(6); */
/*   print_time(7); */

  // printf("%d \n",aup1);
  return 0;
}
