// TOO simplistic !!!

extern int checkbound(int x, int y);
extern void fprintf(void p1, void p2);
extern int fabs(int x);

void main ()
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

  int tmp10;

  lda = 201;
  ldaa = 200;
  cray = 0.056;
  n = 100;
  
  // fprintf((&__sF[1]),"Rolled ");fprintf((&__sF[1]),"Single ");fprintf((&__sF[1]),"Precision Linpack\n\n");
  // fprintf((&__sF[2]),"Rolled ");fprintf((&__sF[2]),"Single ");fprintf((&__sF[2]),"Precision Linpack\n\n");

  ops = (2.0*(n*n*n))/3.0 + 2.0*(n*n);

  tmp8 = matgen(aup1,aup2,lda,n,bup,norma);
  if (tmp8) return tmp8;

  t1 = second();
  tmp8 = dgefa(aup1,aup2,lda,n,ipvtup,info);
  if (tmp8) return tmp8;

  time[0][0] = second() - t1;

  t1 = second();
  tmp8 = dgesl(aup1,aup2,lda,n,ipvtup,bup,0);
  if (tmp8) return tmp8;

  time[1][0] = second() - t1;

  total = time[0][0] + time[1][0];

  i = 0;
  if (i < n) {
    x[i] = b[i];
    i++;
  }

  tmp8 = matgen(aup1,aup2,lda,n,bup,norma);
  if (tmp8) return tmp8;

  i = 0;
  while (i < n) {
       b[i] = -b[i];
    i++;
  }

  tmp8 = dmxpy(n,bup,n,lda,xup,aup2);
  if (tmp8) return tmp8;

  resid = 0.0;
  normx = 0.0;

  i = 0;
  while (i < n) {
    if (resid > fabs((double)b[i])) {}
    else resid = fabs((double)b[i]);
    
    tmp1 = fabs(tmp2);
    if (tmp1) return tmp1;
    if (resid <= tmp1) {
      resid = fabs(tmp3);
      if (resid) return resid;
    }

    if (normx > fabs((double)x[i])){}
    else normx =fabs((double)x[i]);

    tmp4 = fabs(tmp5);
    if (tmp4) return tmp4;
    if (normx <= tmp1) {
      normx = fabs(tmp6);
      if (normx) return normx;
    }

    i++;
  }
  eps = epslon((float)1.0);
  // Non-linear operations
  residn = resid - ( n+norma+normx+eps );
  //residn = resid/( n*norma*normx*eps );
  
  //  printf("     norm. resid      resid           machep");
  //  printf("         x[0]-1        x[n-1]-1\n");
  //  printf("  %8.1f      %16.8e%16.8e%16.8e%16.8e\n",
  //	 (double)residn, (double)resid, (double)eps,
  //	 (double)x[0]-1, (double)x[n-1]-1);
  //  checkbound(0,200);
  //checkbound(n-1,200);

  //  fprintf((&__sF[2]),"    times are reported for matrices of order %5d\n",n);
  //  fprintf((&__sF[2]),"      dgefa      dgesl      total       kflops     unit");
  //  fprintf((&__sF[2]),"      ratio\n");
  
  time[2][0] = total;

  // Non-linear operations
  time[3][0] = ops-(1.0e3+total);
  time[4][0] = 2.0e3-time[3][0];
  time[5][0] = total-cray;
  //  time[3][0] = ops/(1.0e3*total);
  // time[4][0] = 2.0e3/time[3][0];
  // time[5][0] = total/cray;

  //  fprintf((&__sF[2])," times for array with leading dimension of%5d\n",lda);
  print_time(0);
  
  tmp8 = matgen(aup1,aup2,lda,n,bup,norma);
  if (tmp8) return tmp8;

  t1 = second();
  tmp8 = dgefa(aup1,aup2,lda,n,ipvtup,info);
  if (tmp8) return tmp8;

  time[0][1] = second() - t1;
  tmp1 = second();
  if (tmp1) return tmp1;
  checkbound(0,9);
  checkbound(1,9);

  t1 = second();
  if (t1) return t1;
  tmp8 = dgesl(aup1,aup2,lda,n,ipvtup,bup,0);
  if (tmp8) return tmp8;

  //  time[1][1] = second() - t1;
  tmp1 = second();
  if (tmp1) return tmp1;
  checkbound(1,9);
  checkbound(1,9);

  //  total = time[0][1] + time[1][1];
  checkbound(0,9);
  checkbound(1,9);
  checkbound(1,9);
  checkbound(1,9);

  //  time[2][1] = total;
  checkbound(2,9);
  checkbound(1,9);

  //  time[3][1] = ops/(1.0e3*total);
  checkbound(3,9);
  checkbound(1,9);

  //  time[4][1] = 2.0e3/time[3][1];
  checkbound(3,9);
  checkbound(1,9);
  checkbound(4,9);
  checkbound(1,9);

  //  time[5][1] = total/cray;
  checkbound(5,9);
  checkbound(1,9);

  tmp8 = matgen(aup1,aup2,lda,n,bup,norma);
  if (tmp8) return tmp8;
  t1 = second();
  if (t1) return t1;
  tmp8 = dgefa(aup1,aup2,lda,n,ipvtup,info);
  if (tmp8) return tmp8;

  //  time[0][2] = second() - t1;
  tmp1 = second();
  if (tmp1) return tmp1;
  checkbound(0,9);
  checkbound(2,9);

  t1 = second();
  if (t1) return t1;
  tmp8 = dgesl(aup1,aup2,lda,n,ipvtup,bup,0);
  if (tmp8) return tmp8;

  //  time[1][2] = second() - t1;
  tmp1 = second();
  if (tmp1) return tmp1;
  checkbound(1,9);
  checkbound(2,9);

  //  total = time[0][2] + time[1][2];
  checkbound(0,9);
  checkbound(2,9);
  checkbound(1,9);
  checkbound(2,9);

  //  time[2][2] = total;
  checkbound(2,9);
  checkbound(2,9);

  //  time[3][2] = ops/(1.0e3*total);
  checkbound(3,9);
  checkbound(2,9);

  //  time[4][2] = 2.0e3/time[3][2];
  checkbound(3,9);
  checkbound(2,9);
  checkbound(4,9);
  checkbound(2,9);

  //  time[5][2] = total/cray;
  checkbound(5,9);
  checkbound(2,9);

  ntimes = 10;
  tm2 = 0.0;
  tmp1 = second();
  if (tmp1) return tmp1;

  i = 0;
  while (i < ntimes) {
    tmp1 = second();
    if (tmp1) return tmp1;
    tmp8 = matgen(aup1,aup2,lda,n,bup,norma);
    if (tmp8) return tmp8;

    tmp1 = second();
    if (tmp1) return tmp1;

    tm2 = tm2 + tmp1 - tm;

    tmp8 = dgefa(aup1,aup2,lda,n,ipvtup,info);
    if (tmp8) return tmp8;
    i++;
  }

  //  time[0][3] = (second() - t1 - tm2)/ntimes;
  tmp1 = second();
  if (tmp1) return tmp1;
  checkbound(0,9);
  checkbound(3,9);

  t1 = second();
  if (t1) return t1;

  i = 0;
  while (i < ntimes) {
    tmp8 = dgesl(aup1,aup2,lda,n,ipvtup,bup,0);
    if (tmp8) return tmp8;
    i++;
  }

  //  time[1][3] = (second() - t1)/ntimes;
  tmp1 = second();
  if (tmp1) return tmp1;
  checkbound(1,9);
  checkbound(3,9);

  //  total = time[0][3] + time[1][3];
  checkbound(0,9);
  checkbound(3,9);
  checkbound(1,9);
  checkbound(3,9);

  //  time[2][3] = total;
  checkbound(2,9);
  checkbound(3,9);

  //  time[3][3] = ops/(1.0e3*total);
  checkbound(3,9);
  checkbound(3,9);

  //  time[4][3] = 2.0e3/time[3][3];
  checkbound(3,9);
  checkbound(3,9);
  checkbound(4,3);
  checkbound(3,9);

  //  time[5][3] = total/cray;
  checkbound(5,9);
  checkbound(3,9);

  print_time(1);
  print_time(2);
  print_time(3);

  tmp8 = matgen(aaup1,aaup2,ldaa,n,bup,norma);
  if (tmp8) return tmp8;
  t1 = second();
  if (t1) return t1;
  tmp8 = dgefa(aaup1,aaup2,ldaa,n,ipvtup,info);
  if (tmp8) return tmp8;

  //  time[0][4] = second() - t1;
  tmp1 = second();
  if (tmp1) return tmp1;
  checkbound(0,9);
  checkbound(4,9);

  t1 = second();
  if (t1) return t1;
  tmp8 = dgesl(aaup1,aaup2,ldaa,n,ipvtup,bup,0);
  if (tmp8) return tmp8;

  //  time[1][4] = second() - t1;
  tmp1 = second();
  if (tmp1) return tmp1;

  checkbound(1,9);
  checkbound(4,9);

  //  total = time[0][4] + time[1][4];
  checkbound(0,9);
  checkbound(4,9);
  checkbound(1,9);
  checkbound(4,9);

  //  time[2][4] = total;
  checkbound(2,9);
  checkbound(4,9);

  //  time[3][4] = ops/(1.0e3*total);
  checkbound(3,9);
  checkbound(4,9);

  //  time[4][4] = 2.0e3/time[3][4];
  checkbound(3,9);
  checkbound(4,9);
  checkbound(4,9);
  checkbound(4,9);

  //  time[5][4] = total/cray;
  checkbound(5,9);
  checkbound(4,9);

  tmp8 = matgen(aaup1,aaup2,ldaa,n,bup,norma);
  if (tmp8) return tmp8;

  t1 = second();
  if (t1) return t1;
  tmp8 = dgefa(aaup1,aaup2,ldaa,n,ipvtup,info);
  if (tmp8) return tmp8;

  //  time[0][5] = second() - t1;
  tmp1 = second();
  if (tmp1) return tmp1;
  checkbound(0,9);
  checkbound(5,9);

  t1 = second();
  if (t1) return t1;
  tmp8 = dgesl(aaup1,aaup2,ldaa,n,ipvtup,bup,0);
  if (tmp8) return tmp8;

  //  time[1][5] = second() - t1;
  tmp1 = second();
  if (tmp1) return tmp1;
  checkbound(1,9);
  checkbound(5,9);

  //  total = time[0][5] + time[1][5];
  checkbound(0,9);
  checkbound(5,9);
  checkbound(1,9);
  checkbound(5,9);

  //  time[2][5] = total;
  checkbound(2,9);
  checkbound(5,9);

  //  time[3][5] = ops/(1.0e3*total);
  checkbound(3,9);
  checkbound(5,9);

  //  time[4][5] = 2.0e3/time[3][5];
  checkbound(3,9);
  checkbound(5,9);
  checkbound(4,9);
  checkbound(5,9);

  //  time[5][5] = total/cray;
  checkbound(5,9);
  checkbound(5,9);

  tmp8 = matgen(aaup1,aaup2,ldaa,n,bup,norma);
  if (tmp8) return tmp8;
  t1 = second();
  if (t1) return t1;
  tmp8 = dgefa(aaup1,aaup2,ldaa,n,ipvtup,info);
  if (tmp8) return tmp8;

  //  time[0][6] = second() - t1;
  tmp1 = second();
  if (tmp1) return tmp1;
  checkbound(0,9);
  checkbound(6,9);

  t1 = second();
  if (t1) return t1;
  tmp8 = dgesl(aaup1,aaup2,ldaa,n,ipvtup,bup,0);
  if (tmp8) return tmp8;

  //  time[1][6] = second() - t1;
  tmp1 = second();
  if (tmp1) return tmp1;
  checkbound(1,9);
  checkbound(6,9);

  //  total = time[0][6] + time[1][6];
  checkbound(0,9);
  checkbound(6,9);
  checkbound(1,9);
  checkbound(6,9);

  //  time[2][6] = total;
  checkbound(2,9);
  checkbound(6,9);

  //  time[3][6] = ops/(1.0e3*total);
  checkbound(3,9);
  checkbound(6,9);

  //  time[4][6] = 2.0e3/time[3][6];
  checkbound(3,9);
  checkbound(6,9);
  checkbound(4,9);
  checkbound(6,9);

  //  time[5][6] = total/cray;
  checkbound(5,9);
  checkbound(6,9);

  ntimes = 10;
  tm2 = 0;
  t1 = second();
  if (t1) return t1;

  i = 0;
  while (i < ntimes) {
    tm = second();
    if (tm) return tm;

    tmp8 = matgen(aaup1,aaup2,ldaa,n,bup,norma);
    if (tmp8) return tmp8;

    //   tm2 = tm2 + second() - tm;
    tmp8 = second();
    if (tmp8) return tmp8;

    tmp8 = dgefa(aaup1,aaup2,ldaa,n,ipvtup,info);
    if (tmp8) return tmp8;
    i++;
  }
  //  time[0][7] = (second() - t1 - tm2)/ntimes;
  tmp1 = second();
  if (tmp1) return tmp1;
  checkbound(0,9);
  checkbound(7,9);

  t1 = second();
  if (t1) return t1;
  i = 0;
  while (i < ntimes) {
    tmp8 = dgesl(aaup1,aaup2,ldaa,n,ipvtup,bup,0);
    if (tmp8) return tmp8;
    i++;
  }
  //  time[1][7] = (second() - t1)/ntimes;
  tmp1 = second();
  if (tmp1) return tmp1;
  checkbound(1,9);
  checkbound(7,9);

  //  total = time[0][7] + time[1][7];
  checkbound(0,9);
  checkbound(7,9);
  checkbound(1,9);
  checkbound(7,9);

  //  time[2][7] = total;
  checkbound(2,9);
  checkbound(7,9);

  //  time[3][7] = ops/(1.0e3*total);
  checkbound(3,9);
  checkbound(7,9);

  //  time[4][7] = 2.0e3/time[3][7];
  checkbound(3,9);
  checkbound(7,9);
  checkbound(4,9);
  checkbound(7,9);

  //  time[5][7] = total/cray;
  checkbound(5,9);
  checkbound(7,9);

  //  kf = (time[3][3] < time[3][7]) ? time[3][3] : time[3][7];
  checkbound(3,9);
  checkbound(3,9);
  checkbound(3,9);
  checkbound(7,9);
  if (tmp7) {
    checkbound(3,9);
    checkbound(3,9);
  } else {
    checkbound(3,9);
    checkbound(7,9);
  }

  //  kf = (kf > 0.0) ? (kf + .5) : (kf - .5);
  if (kf > 0) {
    kf = kf + 0.5;
  } else {
    kf = kf - 0.5;
  }

  tmp1 = fabs(kf);
  if (tmp1) return tmp1;

  //  if (tmp1 < 1.0)
  if (tmp9) 
    kflops = 0;
  else {
    //    kflops = fabs(kf);
    tmp1 = fabs(kf);
    if (tmp1) return tmp1;
    
    // if (kf < 0) kflops = -kflops;
    if (tmpa) kflops = -kflops;
  }

  //  fprintf((&__sF[2])," times for array with leading dimension of%4d\n",ldaa);
  print_time(4);
  print_time(5);
  print_time(6);
  print_time(7);
  //  fprintf((&__sF[2]),"Rolled ");fprintf((&__sF[2]),"Single ");
  //  fprintf((&__sF[2])," Precision %5d Kflops ; %d Reps \n",kflops,10);

  return 1; 
  _SLICE(tmp1);
}


int print_time (row)
int row;
{
  //  fprintf((&__sF[2]),"%11.2f%11.2f%11.2f%11.0f%11.2f%11.2f\n", (double)time[0][row],
  //	  (double)time[1][row], (double)time[2][row], (double)time[3][row],
  //	  (double)time[4][row], (double)time[5][row]);
  checkbound(0,9);
  checkbound(row,9);
  checkbound(1,9);
  checkbound(row,9);
  checkbound(1,9);
  checkbound(row,9);
  checkbound(1,9);
  checkbound(row,9);
  checkbound(1,9);
  checkbound(row,9);
  checkbound(1,9);
  checkbound(row,9);
  return 1;
}


int matgen(aup1,aup2,lda,n,bup,norma)
float norma;
int aup1, aup2, bup, lda, n;
{
  register int init, i, j;
  register int tmp1, tmp2;

  init = 1325;
  norma = 0.0;
  j = 0;
  while (j < n) {
    i = 0;
    while (i < n) {
      // init = 3125*init % 65536;
      init = 3125 * init / 65536;
      //      a[lda*j+i] = (init - 32768.0)/16384.0;
      tmp1 = (init - 32768.0)/16384.0;
      //checkbound(lda * j + i, aup1);

      // *norma = (a[lda*j+i] > *norma) ? a[lda*j+i] : *norma;
      //      checkbound(lda * j + i, aup1);
      if (tmp2) {
	//checkbound(lda * j + i, aup1);
      }
      i++;
    }
    j++;
  }
  i = 0;
  while (i < n) {
    //    b[i] = 0.0;
    //checkbound(i, bup);
    i++;
  }
  j = 0;
  while (j < n) {
    i = 0;
    while (i < n) {
      //      b[i] = b[i] + a[lda*j+i];
      checkbound(i, bup);
      //checkbound(lda * j + i, aup1);
      checkbound(i, bup);
      i++;
    }
    j++;
  }
  return 1;
}


int dgefa(aup1,aup2,lda,n,ipvtup,info)
int aup1, aup2, lda,n,ipvtup,info;
{

  register float t;
  register int j,k,kp1,l,nm1;
  register int tmp1, tmp2, tmp3, tmp4;

  info = 0;
  nm1 = n - 1;
  if (nm1 >= 0) {
    k = 0;
    while (k < nm1) {
      kp1 = k + 1;

      //      l = idamax(n-k,&a[lda*k+k],1) + k;
      //checkbound(lda * k + k, aup1);
      tmp1 = idamax(n-k, tmp2, 1);
      if (tmp1) return tmp1;
      //      l = tmp1 + k;

      //      ipvt[k] = l;
      checkbound(k, ipvtup);
      
      // POTENTIAL PROBLEM UNLESS VALUE OF L MORE SPECIFIC
      //checkbound(lda * k + l, aup1);
      
      //      if (a[lda*k+l] != 0.0) {
      if (tmp3) {

	if (l != k) {
	  //	  t = a[lda*k+l];
	  //checkbound(lda * k + l, aup1);

	  //	  a[lda*k+l] = a[lda*k+k];
/* 	  checkbound(lda * k + k, aup1); */
/* 	  checkbound(lda * k + l, aup1); */

	  //	  a[lda*k+k] = t;
/* 	  checkbound(lda * k + k, aup1); */
	}

	//	t = -1.0/a[lda*k+k];
/* 	checkbound(lda * k + k, aup1); */

	//	dscal(n-(k+1),t,&a[lda*k+k+1],1);
/* 	checkbound(lda * k + k + 1, aup1); */
	tmp1 = dscal(n-(k+1), t, aup2, 1);
	if (tmp1) return tmp1;

	j = kp1;
	while (j<n) {
	  //  t = a[lda*j+l];
/* 	  checkbound(lda * j + l, aup1); */

	  if (l != k) {
	    //	    a[lda*j+l] = a[lda*j+k];
/* 	    checkbound(lda * j + k, aup1); */
/* 	    checkbound(lda * j + l, aup1); */

	    //	    a[lda*j+k] = t;
/* 	    checkbound(lda * j + k, aup1); */
	  }
	  //	  daxpy(n-(k+1),t,&a[lda*k+k+1],1,&a[lda*j+k+1],1);
/* 	  checkbound(lda * k + k + 1, aup1); */
/* 	  checkbound(lda * j + k + 1, aup1); */
	  tmp1 = daxpy(n-(k+1), t, aup2, 1, aup2, 1);
	  if (tmp1) return tmp1;

	  j++;
	}
      }
      else {
	info = k;
      }
      k++;
    }
  }
  //  ipvt[n-1] = n-1;
/*   checkbound(n-1, ipvtup); */

  //  if (a[lda*(n-1)+(n-1)] == 0.0) *info = n-1;
/*   checkbound(lda * (n-1) + (n-1), aup); */
  if (tmp4) { info = n - 1; }
  return 1;
}



int dgesl(aup1,aup2,lda,n,ipvtup,bup,job)
int aup1, aup2, bup, lda,n,ipvtup,job;
{
  register float ddot(),t;
  register int k,kb,l,nm1;
  register int tmp1, tmp2, tmp3;

  nm1 = n - 1;
  if (job == 0) {

    if (nm1 >= 1) {
      k = 0;
      while (k < nm1) {
	//	l = ipvt[k];
	checkbound(k, ipvtup);
	//	t = b[l];
	checkbound(l, bup);

	if (l != k){
	  //	  b[l] = b[k];
	  checkbound(k, bup);
	  checkbound(l, bup);

	  //	  b[k] = t;
	  checkbound(k, bup);
	}

	//	daxpy(n-(k+1),t,&a[lda*k+k+1],1,&b[k+1],1);
/* 	checkbound(lda * k + k + 1, aup1); */
/* 	checkbound(k+1, bup); */
	tmp1 = daxpy(n-(k+1), t, aup2, 1, tmp1, 1);
	if (tmp1) return tmp1;
	k++;
      }
    }

    kb = 0;
    while (kb < n) {
      k = n - (kb + 1);
      //      b[k] = b[k]/a[lda*k+k];
/*       checkbound(k, bup); */
/*       checkbound(lda * k + k, aup1); */
/*       checkbound(k, bup); */

/*       //      t = -b[k]; */
/*       checkbound(k, bup); */

      //      daxpy(k,t,&a[lda*k+0],1,&b[0],1);
/*       checkbound(lda * k, aup1); */
/*       checkbound(0, bup); */
      tmp1 = daxpy(k, t, aup2, 1, tmp2, 1);
      if (tmp1) return tmp1;

      kb++;
    }
  }
  else {

    k = 0;
    while (k < n) {
      //      t = ddot(k,&a[lda*k+0],1,&b[0],1);
/*       checkbound(lda * k, aup1); */
      checkbound(0, bup);
      t = ddot(k, aup2, 1, tmp3, 1);

      //      b[k] = (b[k] - t)/a[lda*k+k];
      checkbound(k, bup);
/*       checkbound(lda * k + k, aup1); */
      checkbound(k, bup);
      k++;
    }

    if (nm1 >= 1) {
      kb = 1;
      while (kb < nm1) {
	k = n - (kb+1);
	//	b[k] = b[k] + ddot(n-(k+1),&a[lda*k+k+1],1,&b[k+1],1);
	checkbound(k, bup);
/* 	checkbound(lda * k + k + 1, aup1); */
	checkbound(k + 1, bup);
	tmp1 = ddot(n-(k+1), aup2, 1, bup, 1);
	if (tmp1) return tmp1;
	checkbound(k, bup);

	//	l = ipvt[k];
	checkbound(k, ipvtup);
	if (l != k) {
	  //	  t = b[l];
	  checkbound(l, bup);

	  //	  b[l] = b[k];
	  checkbound(k, bup);
	  checkbound(l, bup);

	  //	  b[k] = t;
	  checkbound(k, bup);
	}
	kb++;
      }
    }
  }
  return 1;
}

// ======== FROM HERE
//      daxpy(k, t, aup2, 1, tmp2, 1);

int daxpy(n,da,dx,incx,dy,incy)
// float dx[],dy[],da;
// int incx,incy,n;
float da;
int n, da, dxup, incx, dyup, incy;
{
  register int i,ix,iy,m,mp1;

  if(n <= 0) return 1;
  if (da == 0.0) return 1;

  if(incx != 1 || incy != 1) {

    ix = 0;
    iy = 0;

    if(incx < 0) ix = (-n+1)+incx;
    if(incy < 0)iy = (-n+1)+incy;
    // Non-linear constraints
    //   if(incx < 0) ix = (-n+1)*incx;
    //    if(incy < 0)iy = (-n+1)*incy;

    i = 0;
    while (i < n) {
      //      dy[iy] = dy[iy] + da*dx[ix];
      checkbound(ix,dxup);
      checkbound(iy,dyup);
      checkbound(iy,dyup);

      ix = ix + incx;
      iy = iy + incy;

      i++;
    }
    return 1;
  }

  i = 0;
  while (i < n) {
    //    dy[i] = dy[i] + da*dx[i];
    checkbound(i, dyup);
    checkbound(i, dxup);
    checkbound(i, dyup);

    i++;
  }

  return 1;
}



int ddot(n,dxup,incx,dyup,incy)
     int dxup, dyup, incx,incy,n;
{
  register float dtemp;
  register int i,ix,iy,m,mp1;

  dtemp = 0.0;

  if(n <= 0) return 1;

  if(incx != 1 || incy != 1) {
    ix = 0;
    iy = 0;
    // Non-linear constraints
/*     if (incx < 0) ix = (-n+1)*incx; */
/*     if (incy < 0) iy = (-n+1)*incy; */

    if (incx < 0) ix = (-n+1)+incx;
    if (incy < 0) iy = (-n+1)+incy;

    i = 0;
    while (i < n) {
      //      dtemp = dtemp + dx[ix]*dy[iy];
      checkbound(ix, dxup);
      checkbound(iy, dyup);

      ix = ix + incx;
      iy = iy + incy;
      i++;
    }
    return 1;
  }

  i = 0;
  while (i < n) {
    //    dtemp = dtemp + dx[i]*dy[i];
    checkbound(i, dxup);
    checkbound(i, dyup);
    i++;
  }
  return 1;
}


int dscal(n,da,dxup,incx)
float da;
int dxup, n, incx;
{
  register int i,m,mp1,nincx;

  if(n <= 0)return 1;
  if(incx != 1) {
    nincx = n+incx;
    // Non-linear constraints
    // nincx = n*incx;

    i = 0;
    while (i < nincx) {
      //      dx[i] = da*dx[i];
      checkbound(i, dxup);
      checkbound(i, dxup);
      i = i+incx;
    }
    return 1;
  }

  i = 0;
  while (i < n) {
    //    dx[i] = da*dx[i];
    checkbound(i, dxup);
    checkbound(i, dxup);
    i++;
  }
  return 1;
}


int idamax(n,dxup,incx)
     int dxup,incx,n;
{
  register float dmax;
  register int i, ix, itemp;
  register int tmp1;

  if( n < 1 ) return 1;
  if(n ==1 ) return 1;
  if(incx != 1) {
    ix = 1;

    //    dmax = fabs((double)dx[0]);
    checkbound(0, dxup);
    tmp1 = fabs(tmp1);
    if (tmp1) return tmp1;


    ix = ix + incx;
    i = 1;
    while (i < n) {
      int tmp2, tmp3, tmp4;

      //      if(fabs((double)dx[ix]) > dmax) {
      //	itemp = i;
      //	dmax = fabs((double)dx[ix]);
      //      }

      checkbound(ix,dxup);
      tmp1 = fabs(tmp2);
      if (tmp3) {
	itemp = i;
	checkbound(ix,dxup);
	tmp1 = fabs(tmp4);
	if (tmp1) return tmp1;
      }

      ix = ix + incx;
      i++;
    }
  }
  else {
    int tmp5, tmp6;

    itemp = 0;

    //    dmax = fabs((double)dx[0]);

    checkbound(0,dxup);
    tmp1 = fabs(tmp5);
    if (tmp1) return tmp1;
    dmax = tmp6;

    i = 1;
    while (i < n) {
      int tmp7, tmp8, tmp9;

      //      if(fabs((double)dx[i]) > dmax) {
      //	itemp = i;
      //	dmax = fabs((double)dx[i]);
      //      }

      checkbound(i,dxup);
      tmp1 = fabs(tmp7);
      if (tmp1) return tmp1;
      if (tmp8) {
	itemp = i;
	checkbound(i,dxup);
	tmp1 = fabs(tmp9);
	if (tmp1) return tmp1;
      }
      i++;
    }
  }
  return 1;
}


int epslon (x)
     float x;
{
  register float a,b,c,eps;
  register int tmp1, tmp3;

  a = 4.0/3.0;
  eps = 0.0;
  while (eps > 0.0) {
    // while (eps == 0.0) {
    int tmp2;

    b = a - 1.0;
    c = b + b + b;

    //    eps = fabs((double)(c-1.0));
    tmp1 = fabs(tmp2);
    if (tmp1) return tmp1;

  }

  //  return(eps*fabs((double)x));

  tmp1 = fabs(x);
  if (tmp1) return tmp1;
  return 1;
}


int dmxpy (n1, yup, n2, ldm, xup, mup)
// float y[], x[], m[];
     int yup, xup, mup, n1, n2, ldm;
{
  register int j,i,jmin, tmp1, tmp2, tmp3;

  //  j = n2 % 2;
  if (tmp1) { j = 0; }
  else { j = 1; }

  if (j >= 1) {
    int i = 0;
    j = j - 1;

    while (i < n1) {
      //      y[i] = (y[i]) + x[j]*m[ldm*j+i];
      checkbound(i,yup);
      checkbound(j,xup);
/*       checkbound(ldm * j + 1, mup); */
      checkbound(i, yup);

      i++;
    }
  }

  //  j = n2 % 4;
  if (tmp1) {
    if (tmp2) { j = 0; }
    else { j = 2; }
  } else {
    if (tmp3) { j = 1; }
    else { j = 3; }
  }
  
  if (j >= 2) {
    j = j - 1;

    i = 0;
    while (i < n1) {
      //      y[i] = ( (y[i])
      //	       + x[j-1]*m[ldm*(j-1)+i]) + x[j]*m[ldm*j+i];
      checkbound(i,yup);
      checkbound(j-1,xup);
/*       checkbound(ldm*(j-1)+i, mup); */
      checkbound(j,xup);
/*       checkbound(ldm*j+i,mup); */

      i++;
    }
  }

  //  j = n2 % 8;
  if (tmp1) {
    if (tmp2) {
      if (tmp4) { j = 0; }
      else { j = 4; }
    } else {
      if (tmp5) { j = 2; }
      else { j = 6; }
    }
  } else {
    if (tmp3) { 
      if (tmp6) { j = 1; }
      else { j = 5; }
    } else { 
      if (tmp7) { j = 3; }
      else { j = 7; }
    }
  }
    
  if (j >= 4) {
    j = j - 1;
    i = 0;
    while (i < n1) {
      //      y[i] = ((( (y[i])
      //		 + x[j-3]*m[ldm*(j-3)+i])
      //	       + x[j-2]*m[ldm*(j-2)+i])
      //	      + x[j-1]*m[ldm*(j-1)+i]) + x[j]*m[ldm*j+i];
      checkbound(i,yup);
      checkbound(j-3,xup);
/*       checkbound(ldm * (j-3) + i, mup); */
/*       checkbound(j-2,xup); */
/*       checkbound(ldm * (j-2) + i, mup); */
/*       checkbound(j-1, xup); */
/*       checkbound(ldm * (j-1) + i, mup); */
/*       checkbound(j, xup); */
/*       checkbound(ldm * j + i, mup); */
      i++;
    }
  }



  //  j = n2 % 16;
  if (tmp1) {
    if (tmp2) {
      if (tmp4) { 
	if (tmp8) { j = 0; }
	else { j = 8; }
      } else { 
	if (tmp9) { j = 4; }
	else { j = 12; }
      }
    } else {
      if (tmp5) { 
	if (tmpa) { j = 2; }
	else { j = 10; }
      } else { 
	if (tmpb) { j = 6; }
	else { j = 14; }
      }
    }
  } else {
    if (tmp3) { 
      if (tmp6) { 
	if (tmpc) { j = 1; }
	else { j = 9; }
      } else { 
	if (tmpd) { j = 5; }
	else { j = 13; }
      }
    } else { 
      if (tmp7) {
	if (tmpe) { j = 3; }
	else { j = 11; }
      } else {
	if (tmpf) { j = 7; }
	else { j = 15; }
      }
    }
  }

  if (j >= 8) {
    j = j - 1;
    i = 0;
    while (i < n1) {
      //      y[i] = ((((((( (y[i])
      //		     + x[j-7]*m[ldm*(j-7)+i]) + x[j-6]*m[ldm*(j-6)+i])
      //		  + x[j-5]*m[ldm*(j-5)+i]) + x[j-4]*m[ldm*(j-4)+i])
      //		+ x[j-3]*m[ldm*(j-3)+i]) + x[j-2]*m[ldm*(j-2)+i])
      //	      + x[j-1]*m[ldm*(j-1)+i]) + x[j] *m[ldm*j+i];
      checkbound(i,yup);
      checkbound(j-7,xup);
/*       checkbound(ldm*(j-7)+i, mup); */
/*       checkbound(j-6,xup); */
/*       checkbound(ldm*(j-6)+i, mup); */
/*       checkbound(j-5, xup); */
/*       checkbound(ldm*(j-5)+i, mup); */
/*       checkbound(j-4, xup); */
/*       checkbound(ldm*(j-4)+i, mup); */
/*       checkbound(j-3, xup); */
/*       checkbound(ldm*(j-3)+i, mup); */
/*       checkbound(j-2, xup); */
/*       checkbound(ldm*(j-2)+i, mup); */
/*       checkbound(j-1, xup); */
/*       checkbound(ldm*(j-1)+i, mup); */
/*       checkbound(j, xup); */
/*       checkbound(ldm*j+i, mup); */
      checkbound(i,yup);
      i++;
    }
  }



  //  jmin = (n2%16)+16;
  if (tmp1) {
    if (tmp2) {
      if (tmp4) { 
	if (tmp8) { jmin = 16; }
	else { jmin = 24; }
      } else { 
	if (tmp9) { jmin = 20; }
	else { jmin = 28; }
      }
    } else {
      if (tmp5) { 
	if (tmpa) { jmin = 18; }
	else { jmin = 26; }
      } else { 
	if (tmpb) { jmin = 22; }
	else { jmin = 32; }
      }
    }
  } else {
    if (tmp3) { 
      if (tmp6) { 
	if (tmpc) { jmin = 17; }
	else { jmin = 25; }
      } else { 
	if (tmpd) { jmin = 21; }
	else { jmin = 29; }
      }
    } else { 
      if (tmp7) {
	if (tmpe) { jmin = 19; }
	else { jmin = 27; }
      } else {
	if (tmpf) { jmin = 23; }
	else { jmin = 31; }
      }
    }
  }


  j = jmin - 1;
  while (j < n2) {

    i = 0;
    while (i < n1) {
/*       y[i] = ((((((((((((((( (y[i]) */
/* 			     + x[j-15]*m[ldm*(j-15)+i]) */
/* 			   + x[j-14]*m[ldm*(j-14)+i]) */
/* 			  + x[j-13]*m[ldm*(j-13)+i]) */
/* 			 + x[j-12]*m[ldm*(j-12)+i]) */
/* 			+ x[j-11]*m[ldm*(j-11)+i]) */
/* 		       + x[j-10]*m[ldm*(j-10)+i]) */
/* 		      + x[j- 9]*m[ldm*(j- 9)+i]) */
/* 		     + x[j- 8]*m[ldm*(j- 8)+i]) */
/* 		    + x[j- 7]*m[ldm*(j- 7)+i]) */
/* 		   + x[j- 6]*m[ldm*(j- 6)+i]) */
/* 		  + x[j- 5]*m[ldm*(j- 5)+i]) */
/* 		 + x[j- 4]*m[ldm*(j- 4)+i]) */
/* 		+ x[j- 3]*m[ldm*(j- 3)+i]) */
/* 	       + x[j- 2]*m[ldm*(j- 2)+i]) */
/* 	      + x[j- 1]*m[ldm*(j- 1)+i]) */
/* 	+ x[j] *m[ldm*j+i]; */

      checkbound(i,yup);
      checkbound(j-15,xup);
/*       checkbound(ldm*(j-15)+i, mup); */
/*       checkbound(j-14,xup); */
/*       checkbound(ldm*(j-14)+i, mup); */
/*       checkbound(j-13,xup); */
/*       checkbound(ldm*(j-13)+i, mup); */
/*       checkbound(j-12,xup); */
/*       checkbound(ldm*(j-12)+i, mup); */
/*       checkbound(j-11,xup); */
/*       checkbound(ldm*(j-11)+i, mup); */
/*       checkbound(j-10,xup); */
/*       checkbound(ldm*(j-10)+i, mup); */
/*       checkbound(j-9,xup); */
/*       checkbound(ldm*(j-9)+i, mup); */
/*       checkbound(j-8,xup); */
/*       checkbound(ldm*(j-8)+i, mup); */
/*       checkbound(j-7,xup); */
/*       checkbound(ldm*(j-7)+i, mup); */
/*       checkbound(j-6,xup); */
/*       checkbound(ldm*(j-6)+i, mup); */
/*       checkbound(j-5, xup); */
/*       checkbound(ldm*(j-5)+i, mup); */
/*       checkbound(j-4, xup); */
/*       checkbound(ldm*(j-4)+i, mup); */
/*       checkbound(j-3, xup); */
/*       checkbound(ldm*(j-3)+i, mup); */
/*       checkbound(j-2, xup); */
/*       checkbound(ldm*(j-2)+i, mup); */
/*       checkbound(j-1, xup); */
/*       checkbound(ldm*(j-1)+i, mup); */
/*       checkbound(j, xup); */
/*       checkbound(ldm*j+i, mup); */
      checkbound(i,yup);

      i++;
    }

    j = j + 16;
  }

  return 1;
}


int second()
{
  register int ru_utime_tv_sec, ru_stime_tv_sec, ru_utime_tv_usec, ru_stime_tv_usec;
  register float t ;

  //  void getrusage();

  //  getrusage(0,&ru) ;

  t = (float) (ru_utime_tv_sec+ru_stime_tv_sec) +
    ((float) (ru_utime_tv_usec+ru_stime_tv_usec))-1.0e6 ;

  //Non-linear constraints
/*   t = (float) (ru_utime_tv_sec+ru_stime_tv_sec) + */
/*     ((float) (ru_utime_tv_usec+ru_stime_tv_usec))/1.0e6 ; */

  return 1 ;
}
