#define checkbound(A,B) if ((A<=-1) || (A>=(B))) return ERRCODE;
#define ERRCODE 1
#define ABORTCODE -1
#define OKCODE 0

// static float time[9][9];

main ()
{
  float cray,ops,total,norma,normx;
  float resid,residn,eps,t1,tm,tm2;
  float kf;
  static int n,i,ntimes,info,lda,ldaa,kflops;
  
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
  
  //  fprintf((&__sF[1]),"Rolled ");fprintf((&__sF[1]),"Single ");fprintf((&__sF[1]),"Precision Linpack\n\n");
  //  fprintf((&__sF[2]),"Rolled ");fprintf((&__sF[2]),"Single ");fprintf((&__sF[2]),"Precision Linpack\n\n");

  //  ops = (2.0*(n*n*n))/3.0 + 2.0*(n*n);
  tmp8 = ops;

  tmp8 = matgen(aup1,aup2,lda,n,bup,norma);
  if (tmp8) return tmp8;

  t1 = second();
  tmp8 = dgefa(aup1,aup2,lda,n,ipvtup,info);
  if (tmp8) return tmp8;

  //  time[0][0] = second() - t1;
  checkbound(0,9);
  checkbound(0,9);

  t1 = second();
  tmp8 = dgesl(aup1,aup2,lda,n,ipvtup,bup,0);
  if (tmp8) return tmp8;

  //  time[1][0] = second() - t1;
  checkbound(1,9);
  checkbound(0,9);

  //  total = time[0][0] + time[1][0];
  checkbound(0,9);
  checkbound(0,9);
  checkbound(1,9);
  checkbound(0,9);

  i = 0;

  // Abstract i
  if (tmp10 < 0 || tmp10 > n) return ABORTCODE;
  i = tmp10;
  // End abstract i

  // Converted while loop
  if (i+1 <= n) {
    //    x[i] = b[i];
    checkbound(i,200);
    checkbound(i,200);

    i++;
    // Check loop invariant
    if (i < 0 || i > n) return ERRCODE;
    return OKCODE;
    // End check loop invariant
  }

  tmp8 = matgen(aup1,aup2,lda,n,bup,norma);
  if (tmp8) return tmp8;

  i = 0;

  // Abstract i
  if (tmp11 < 0 || tmp11 > n) return ABORTCODE;
  i = tmp11;
  // End abstract i

  // Converted while loop
  if (i+1 <= n) {
    //    b[i] = -b[i];
    checkbound(i,200);
    checkbound(i,200);

    i++;
    // Check loop invariant
    if (i < 0 || i > n) return ERRCODE;
    return OKCODE;
    // End check loop invariant
  }

  tmp8 = dmxpy(n,bup,n,lda,xup,aup2);
  if (tmp8) return tmp8;

  resid = 0.0;
  normx = 0.0;

  i = 0;

  // Abstract i
  if (tmp12 < 0 || tmp12 > n) return ABORTCODE;
  i = tmp12;
  // End abstract i

  // Converted while loop
  if (i+1 <= n) {
    //    resid = (resid > fabs((double)b[i]))
    //      ? resid : fabs((double)b[i]);
    checkbound(i,200);
/*     tmp1 = fabs(tmp2); */
/*     if (tmp1) return tmp1; */
    if (resid <= tmp1) {
      checkbound(i,200);
/*       resid = fabs(tmp3); */
/*       if (resid) return resid; */
    }

    //    normx = (normx > fabs((double)x[i]))
    //      ? normx : fabs((double)x[i]);
    checkbound(i,200);
/*     tmp4 = fabs(tmp5); */
/*     if (tmp4) return tmp4; */
    if (normx <= tmp1) {
      checkbound(i,200);
/*       normx = fabs(tmp6); */
/*       if (normx) return normx; */
    }

    i++;
    // Check loop invariant
    if (i < 0 || i > n) return ERRCODE;
    return OKCODE;
    // End check loop invariant
  }

  eps = epslon((float)1.0);
  //  residn = resid/( n*norma*normx*eps );
  
  //  printf("     norm. resid      resid           machep");
  //  printf("         x[0]-1        x[n-1]-1\n");
  //  printf("  %8.1f      %16.8e%16.8e%16.8e%16.8e\n",
  //	 (double)residn, (double)resid, (double)eps,
  //	 (double)x[0]-1, (double)x[n-1]-1);
  checkbound(0,200);
  checkbound(n-1,200);

  //  fprintf((&__sF[2]),"    times are reported for matrices of order %5d\n",n);
  //  fprintf((&__sF[2]),"      dgefa      dgesl      total       kflops     unit");
  //  fprintf((&__sF[2]),"      ratio\n");
  
  //  time[2][0] = total;
  checkbound(2,9);
  checkbound(0,9);

  //  time[3][0] = ops/(1.0e3*total);
  checkbound(3,9);
  checkbound(0,9);

  //  time[4][0] = 2.0e3/time[3][0];
  checkbound(3,9);
  checkbound(0,9);
  checkbound(4,9);
  checkbound(0,9);

  //  time[5][0] = total/cray;
  checkbound(5,9);
  checkbound(0,9);

  //  fprintf((&__sF[2])," times for array with leading dimension of%5d\n",lda);
  print_time(0);
  
  tmp8 = matgen(aup1,aup2,lda,n,bup,norma);
  if (tmp8) return tmp8;

  t1 = second();
  tmp8 = dgefa(aup1,aup2,lda,n,ipvtup,info);
  if (tmp8) return tmp8;

  //  time[0][1] = second() - t1;
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

  // Abstract i
  if (tmp13 < 0 || tmp13 > ntimes) return ABORTCODE;
  i = tmp13;
  // End abstract i
  if (i < ntimes) {
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
    // Check loop invariant
    if (i < 0 || i > ntimes) return ERRCODE;
    return OKCODE;
    // End check loop invariant
  }

  //  time[0][3] = (second() - t1 - tm2)/ntimes;
  tmp1 = second();
  if (tmp1) return tmp1;
  checkbound(0,9);
  checkbound(3,9);

  t1 = second();
  if (t1) return t1;

  i = 0;

  // Abstract i
  if (tmp14 < 0 || tmp14 > ntimes) return ABORTCODE;
  i = tmp14;
  // End abstract i

  // Converted while loop
  if (i+1 <= ntimes) {
    tmp8 = dgesl(aup1,aup2,lda,n,ipvtup,bup,0);
    if (tmp8) return tmp8;
    i++;
    // Check loop invariant
    if (i < 0 || i > ntimes) return ERRCODE;
    return OKCODE;
    // End check loop invariant
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

  // Abstract i
  if (tmp15 < 0 || tmp15 > n) return ABORTCODE;
  i = tmp15;
  // End abstract i

  // Converted while loop
  if (i+1 <= ntimes) {
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
    // Check loop invariant
    if (i < 0 || i > ntimes) return ERRCODE;
    return OKCODE;
    // End loop invariant
  }
  //  time[0][7] = (second() - t1 - tm2)/ntimes;
  tmp1 = second();
  if (tmp1) return tmp1;
  checkbound(0,9);
  checkbound(7,9);

  t1 = second();
  if (t1) return t1;

  i = 0;
  // Abstract i
  if (i < 0 || i > ntimes) return ABORTCODE;
  i = tmp16;
  // End abstract

  // Converted while loop
  if (i+1 <= ntimes) {
    tmp8 = dgesl(aaup1,aaup2,ldaa,n,ipvtup,bup,0);
    if (tmp8) return tmp8;
    i++;
    // Check loop invariant
    if (i < 0 || i > ntimes) return ERRCODE;
    return OKCODE;
    // End check loop invariant    
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

/*   tmp1 = fabs(kf); */
/*   if (tmp1) return tmp1; */

  //  if (tmp1 < 1.0)
  if (tmp9) 
    kflops = 0;
  else {
    //    kflops = fabs(kf);
/*     tmp1 = fabs(kf); */
/*     if (tmp1) return tmp1; */
    
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

  return OKCODE;
}


int print_time (int row)
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
  return OKCODE;
}


int matgen(int aup1, int aup2, int lda, int n, int bup, float norma)
{
  int init, i, j;
  int tmp1, tmp2, tmp3, tmp4, tmp5, tmp6, tmp7;

  init = 1325;
  norma = 0.0;
  j = 0;

  // Abstract j
  if (tmp3 < 0 || tmp3 > n) return ABORTCODE;
  j = tmp3;
  // End abstract j

  // Converted while loop
  if (j+1 <= n) {
    i = 0;

    // Abstract i
    if (tmp4 < 0 || tmp4 > n) return ABORTCODE;
    i = tmp4;
    // End abstract i

    // Converted while loop
    if (i+1 <= n) {
      // init = 3125*init % 65536;

      //      a[lda*j+i] = (init - 32768.0)/16384.0;

      checkbound( j + i, aup1);

      // *norma = (a[lda*j+i] > *norma) ? a[lda*j+i] : *norma;
      checkbound( j + i, aup1);
      if (tmp2) {
	checkbound( j + i, aup1);
      }
      i++;
      // Check loop invariant
      if (i < 0 || i > n) return ERRCODE;
      return OKCODE;
      // End check loop invariant
    }
    j++;
    // Check loop invariant
    if (j < 0 || j > n) return ERRCODE;
    return OKCODE;
    // End check 
  }

  i = 0;

  // Abstract i
  if (tmp5 < 0 || tmp5 > n) return ABORTCODE;
  i = tmp5;
  // End abstract i

  // Converted while loop
  if (i+1 <= n) {
    //    b[i] = 0.0;
    checkbound(i, bup);
    i++;
    // Check loop invariant
    if (i < 0 || i > n) return ERRCODE;
    return OKCODE;
    // End check loop invariant
  }

  j = 0;

  // Abstract j
  if (tmp6 < 0 || tmp6 > n) return ABORTCODE;
  j = tmp6;
  // End abstract j

  // Converted while loop
  if (j+1 <= n) {
    i = 0;

    // Abstract i
    if (tmp7 < 0 || tmp7 > n) return ABORTCODE;
    i = tmp7;
    // End abstract i

    // Converted while loop
    if (i+1 <= n) {
      //      b[i] = b[i] + a[lda*j+i];
      checkbound(i, bup);
      checkbound( j + i, aup1);
      checkbound(i, bup);
      i++;
      // Check loop invariant
      if (i < 0 || i > n) return ERRCODE;
      return OKCODE;
      // End check loop invariant
    }
    j++;
    // Check loop invariant
    if (j < 0 || j > n) return ERRCODE;
    return OKCODE;
    // End check loop invariant
  }
  return OKCODE;
}


int dgefa(int aup1, int aup2, int lda, int n, int ipvtup, int info)
{

  float t;
  int j,k,kp1,l,nm1;
  int tmp1, tmp2, tmp3, tmp4, tmp5, tmp6;

  info = 0;
  nm1 = n - 1;
  if (nm1 >= 0) {
    k = 0;

    // Absract k
    if (tmp5 < 0 || tmp5 > nm1) return ABORTCODE;
    k = tmp5;
    // End abstract k

    // Converted while loop
    if (k+1 <= nm1) {
      kp1 = k + 1;

      //      l = idamax(n-k,&a[lda*k+k],1) + k;
      checkbound( k + k, aup1);
      tmp1 = idamax(n-k, 200, 1);
      if (tmp1) return tmp1;
      //      l = tmp1 + k;

      //      ipvt[k] = l;
      checkbound(k, ipvtup);
      
      // POTENTIAL PROBLEM UNLESS VALUE OF L MORE SPECIFIC
      checkbound( k + l, aup1);
      
      //      if (a[lda*k+l] != 0.0) {
      if (tmp3) {

	if (l != k) {
	  //	  t = a[lda*k+l];
	  checkbound( k + l, aup1);

	  //	  a[lda*k+l] = a[lda*k+k];
	  checkbound( k + k, aup1);
	  checkbound( k + l, aup1);

	  //	  a[lda*k+k] = t;
	  checkbound( k + k, aup1);
	}

	//	t = -1.0/a[lda*k+k];
	checkbound( k + k, aup1);

	//	dscal(n-(k+1),t,&a[lda*k+k+1],1);
	checkbound( k + k + 1, aup1);
	tmp1 = dscal(n-(k+1), t, aup2, 1);
	if (tmp1) return tmp1;

	j = kp1;

	// Abstract j
	if (tmp6 < kp1 || tmp6 > n) return ABORTCODE;
	j = tmp6;
	// End abstract j

	// Converted while loop
	if (j+1<=n) {
	  //  t = a[lda*j+l];
	  checkbound( j + l, aup1);

	  if (l != k) {
	    //	    a[lda*j+l] = a[lda*j+k];
	    checkbound( j + k, aup1);
	    checkbound( j + l, aup1);

	    //	    a[lda*j+k] = t;
	    checkbound( j + k, aup1);
	  }
	  //	  daxpy(n-(k+1),t,&a[lda*k+k+1],1,&a[lda*j+k+1],1);
	  checkbound( k + k + 1, aup1);
	  checkbound( j + k + 1, aup1);
	  tmp1 = daxpy(n-(k+1), t, aup2, 1, aup2, 1);
	  if (tmp1) return tmp1;

	  j++;
	  // Check loop invariant
	  if (j < kp1 || j > n) return ERRCODE;
	  return OKCODE;
	  // End check loop invariant
	}
      }
      else {
	info = k;
      }
      k++;
      // Check loop invariant
      if (k < 0 || k > nm1) return ERRCOE;
      return OKCODE;
      // End loop invariant
    }
  }
  //  ipvt[n-1] = n-1;
  checkbound(n-1, ipvtup);

  //  if (a[lda*(n-1)+(n-1)] == 0.0) *info = n-1;
  checkbound( (n-1) + (n-1), aup);
  if (tmp4) { info = n - 1; }
  return OKCODE;
}



int dgesl(int aup1, int aup2, int lda, int n, int ipvtup, int bup, int job)
{
  float t;
  int k,kb,l,nm1;
  int tmp1, tmp2, tmp3, tmp4, tmp5, tmp6;
  int tmp7;

  nm1 = n - 1;
  if (job == 0) {

    if (nm1 >= 1) {
      k = 0;
      // Abstract k
      if (tmp4 < 0 || tmp4 > nm1) return ABORTCODE;
      k = tmp4;
      // End abstract k

      // Converted while loop
      if (k+1 <= nm1) {
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
	checkbound( k + k + 1, aup1);
	checkbound(k+1, bup);
	tmp1 = daxpy(n-(k+1), t, aup2, 1, tmp1, 1);
	if (tmp1) return tmp1;
	k++;

	// Check loop invariant
	if (k < 0 || k > nm1) return ERRCODE;
	return OKCODE;
	// End check loop invariant
      }
    }

    kb = 0;

    // Abstract kb
    if (tmp5 < 0 || tmp5 > n) return ABORTCODE;
    kb = tmp5;
    // End abstract kb

    // Converted while loop
    if (kb+1 <= n) {
      k = n - (kb + 1);
      //      b[k] = b[k]/a[lda*k+k];
      checkbound(k, bup);
      checkbound( k + k, aup1);
      checkbound(k, bup);

      //      t = -b[k];
      checkbound(k, bup);

      //      daxpy(k,t,&a[lda*k+0],1,&b[0],1);
      checkbound( k, aup1);
      checkbound(0, bup);
      tmp1 = daxpy(k, t, aup2, 1, tmp2, 1);
      if (tmp1) return tmp1;

      kb++;
      // Check loop invariant
      if (kb < 0 || kb > n) return ERRCODE;
      return OKCODE;
      // End check loop invariant
    }
  }
  else {

    k = 0;
    // Abstract k
    if (tmp6 < 0 || tmp6 > 6) return ABORTCODE;
    k = tmp6;
    // End abstract k

    // Converted while loop
    if (k+1 <= n) {
      //      t = ddot(k,&a[lda*k+0],1,&b[0],1);
      checkbound( k, aup1);
      checkbound(0, bup);
      t = ddot(k, aup2, 1, tmp3, 1);

      //      b[k] = (b[k] - t)/a[lda*k+k];
      checkbound(k, bup);
      checkbound( k + k, aup1);
      checkbound(k, bup);
      k++;
      // Check loop invariant
      if (k < 0 || k > 6) return ERRCODE;
      return OKCODE;
      // End check loop invariant
    }

    if (nm1 >= 1) {
      kb = 1;

      // Abstract kb
      if (tmp7 < 1 || tmp7 > nm1) return ABORTCODE;
      kb = tmp7;
      // End abstract kb

      // Converted while loop
      if (kb+1 <= nm1) {
	k = n - (kb+1);
	//	b[k] = b[k] + ddot(n-(k+1),&a[lda*k+k+1],1,&b[k+1],1);
	checkbound(k, bup);
	checkbound( k + k + 1, aup1);
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
	// Check loop invariant
	if (kb < 1 || kb > nm1) return ERRCODE;
	return OKCODE;
	// End check loop invariant
      }
    }
  }
  return OKCODE;
}


int daxpy(int n, float da, int dx, int incx, int dy, int incy)
// float dx[],dy[],da;
// int incx,incy,n;
{
  int i,ix,iy,m,mp1;
  int tmp1, tmp2;

  if(n <= 0) return OKCODE;
  if (da == 0.0) return OKCODE;

  if(incx != 1 || incy != 1) {

    ix = 0;
    iy = 0;
    if(incx < 0) {
      //      ix = (-n+1) * incx;
      ix = 0;
    }
    if(incy < 0) {
      //      iy = (-n+1) * incy;
      iy = 0;
    }

    i = 0;
    // Abstract i
    if (tmp1 < 0 || tmp1 > n) return ABORTCODE;
    i = tmp1;
    // End abstract i

    // Converted while loop
    if (i+1 <= n) {
      //      dy[iy] = dy[iy] + da*dx[ix];
      checkbound(ix,dxup);
      checkbound(iy,dyup);
      checkbound(iy,dyup);

      ix = ix + incx;
      iy = iy + incy;

      i++;
      // Check loop invariant
      if (i < 0 || i > n) return ERRCODE;
      return OKCODE;
      // End check loop invariant
    }
    return OKCODE;
  }

  i = 0;

  // Abstract i
  if (tmp2 < 0 || tmp2 > n) return ABORTCODE;
  i = tmp2;
  // End abstract i

  // Converted while loop
  if (i+1 <= n) {
    //    dy[i] = dy[i] + da*dx[i];
    checkbound(i, dyup);
    checkbound(i, dxup);
    checkbound(i, dyup);

    i++;
    // Check loop invariant
    if (i < 0 || i > n) return ERRCODE;
    return OKCODE;
    // End check loop invariant
  }

  return OKCODE;
}



int ddot(int n, int dxup, int incx, int dyup, int incy)
{
  float dtemp;
  int i,ix,iy,m,mp1;
  int tmp1, tmp2;

  dtemp = 0.0;

  if(n <= 0) return OKCODE;

  if(incx != 1 || incy != 1) {
    ix = 0;
    iy = 0;
    if (incx < 0) {
      // ix = (-n+1)*incx;
      ix = 0;
    }
    if (incy < 0) {
      // iy = (-n+1)*incy;
      iy = 0;
    }

    i = 0;
    // Abstract i
    if (tmp1 < 0 || tmp1 > n) return ABORTCODE;
    i = tmp1;
    // End abstract i

    // Converted while loop
    if (i+1 <= n) {
      //      dtemp = dtemp + dx[ix]*dy[iy];
      checkbound(ix, dxup);
      checkbound(iy, dyup);

      ix = ix + incx;
      iy = iy + incy;
      i++;
      // Check loop invariant
      if (i < 0 || i > n) return ERRCODE;
      return OKCODE;
      // End check loop invariant
    }
    return OKCODE;
  }

  i = 0;
  // Abstract i
  if (tmp2 < 0 || tmp2 > n) return ABORTCODE;
  i = tmp2;
  // End abstract i

  // Converted while loop
  if (i+1 <= n) {
    //    dtemp = dtemp + dx[i]*dy[i];
    checkbound(i, dxup);
    checkbound(i, dyup);
    i++;
    // Check loop invariant
    if (i < 0 || i > n) return ERRCODE;
    return OKCODE;
    // End check loop invariant
  }
  return OKCODE;
}


int dscal(int n, float da, int dxup, int incx)
{
  int i,m,mp1,nincx;
  int tmp1, tmp2;

  if(n <= 0)return OKCODE;
  if(incx != 1) {
    //    nincx = n*incx;
    nincx = n + nincx;

    i = 0;
    // Abstract i
    if (tmp1 < 0 || tmp1 > nincx) return ABORTCODE;
    i = tmp1;
    // End abstract i

    // Converted while loop
    if (i+1 <= nincx) {
      //      dx[i] = da*dx[i];
      checkbound(i, dxup);
      checkbound(i, dxup);
      i = i+incx;
      // Check loop invariant
      if (i < 0 || i > nincx) return ERRCODE;
      return OKCODE;
      // End check loop invariant
    }
    return OKCODE;
  }

  i = 0;
  // Abstract i
  if (tmp2 < 0 || tmp2 > n) return ABORTCODE;
  i = tmp2;
  // End abstract i
  
  // Converted while loop
  if (i+1 <= n) {
    //    dx[i] = da*dx[i];
    checkbound(i, dxup);
    checkbound(i, dxup);
    i++;
    // Check loop invariant
    if (i < 0 || i > n) return ERRCODE;
    return OKCODE;
    // End check loop invariant
  }
  return OKCODE;
}


int idamax(int n, int dxup, int incx)
{
  float dmax;
  int i, ix, itemp;
  int tmp1;

  int tmpa;

  if( n < 1 ) return OKCODE;
  if(n ==1 ) return OKCODE;
  if(incx != 1) {
    ix = 1;

    //    dmax = fabs((double)dx[0]);
    checkbound(0, dxup);
/*     tmp1 = fabs(tmp1); */
/*     if (tmp1) return tmp1; */


    ix = ix + incx;
    i = 1;

    // Abstract i
    if (tmpa < 1 || tmpa > n) return ABORTCODE;
    i = tmpa;
    // End abstract i

    // Converted while loop
    if (i+1 <= n) {
      int tmp2, tmp3, tmp4;

      //      if(fabs((double)dx[ix]) > dmax) {
      //	itemp = i;
      //	dmax = fabs((double)dx[ix]);
      //      }

      checkbound(ix,dxup);
      //      tmp1 = fabs(tmp2);
      if (tmp3) {
	itemp = i;
	checkbound(ix,dxup);
/* 	tmp1 = fabs(tmp4); */
/* 	if (tmp1) return tmp1; */
      }

      ix = ix + incx;
      i++;
      // Check loop invariant
      if (i < 1 || i > n) return ERRCODE;
      return OKCODE;
      // End check loop invariant
    }
  }
  else {
    int tmp5, tmp6;

    itemp = 0;

    //    dmax = fabs((double)dx[0]);

    checkbound(0,dxup);
/*     tmp1 = fabs(tmp5); */
/*     if (tmp1) return tmp1; */
    dmax = tmp6;

    i = 1;
    // Abstract i
    if (tmpa < 1 || tmpa > n) return ABORTCODE;
    i = tmpa;
    // End abstract i

    // Converted while loop
    if (i+1 <= n) {
      int tmp7, tmp8, tmp9;

      //      if(fabs((double)dx[i]) > dmax) {
      //	itemp = i;
      //	dmax = fabs((double)dx[i]);
      //      }

      checkbound(i,dxup);
/*       tmp1 = fabs(tmp7); */
/*       if (tmp1) return tmp1; */
      if (tmp8) {
	itemp = i;
	checkbound(i,dxup);
/* 	tmp1 = fabs(tmp9); */
/* 	if (tmp1) return tmp1; */
      }
      i++;
      // Check loop invariant
      if (i < 1 || i > n) return ERRCODE;
      return OKCODE;
      // End check loop invariant
    }
  }
  return OKCODE;
}


int epslon (float x)
{
  float a,b,c,eps;
  int tmp1, tmp3;

  a = 4.0/3.0;
  eps = 0.0;
  if (eps == 0.0) {
    int tmp2;

    b = a - 1.0;
    c = b + b + b;

    //    eps = fabs((double)(c-1.0));
/*     tmp1 = fabs(tmp2); */
/*     if (tmp1) return tmp1; */
    return OKCODE;
  }

  //  return(eps*fabs((double)x));

  //  tmp1 = fabs(x);
  //  if (tmp1) return tmp1;
  return OKCODE;
}

/* int fabs(double x) */
/* { */
/*   int y; */
/*   if (x < 0) return OKCODE; */
/*   return OKCODE; */
/* } */

int dmxpy (int n1, int yup, int n2, int ldm, int xup, int mup)
// float y[], x[], m[];
{
  int j,i,jmin, tmp1, tmp2, tmp3;
  int tmp4;

  //  j = n2 % 2;
  if (tmp1 < 0 || tmp1 > 1) return ABORTCODE;
  j = tmp1;

/*   if (tmp1) { j = 0; } */
/*   else { j = 1; } */

  if (j >= 1) {
    j = j - 1;

    i = 0;
    // Abstract i
    if (tmp4 < 0 || tmp4 > n1) return ABORTCODE;
    i = tmp4;
    // End abstract i

    // Converted while loop
    if (i+1 <= n1) {
      //      y[i] = (y[i]) + x[j]*m[ldm*j+i];
      checkbound(i,yup);
      checkbound(j,xup);
      checkbound( j + 1, mup);
      checkbound(i, yup);

      i++;
      // Check loop invariant
      if (i < 0 || i > n1) return ERRCODE;
      return OKCODE;
      // End check loop invariant
    }
  }

  //  j = n2 % 4;
  if (tmp2 < 0 || tmp2 > 3) return ABORTCODE;
  j = tmp2;

/*   if (tmp1) { */
/*     if (tmp2) { j = 0; } */
/*     else { j = 2; } */
/*   } else { */
/*     if (tmp3) { j = 1; } */
/*     else { j = 3; } */
/*   } */
  
  if (j >= 2) {
    j = j - 1;

    i = 0;
    // Abstract i
    if (tmp5 < 0 || tmp5 > n1) return ABORTCODE;
    i = tmp5;
    // End abstract i

    // Converted while loop
    if (i+1 <= n1) {
      //      y[i] = ( (y[i])
      //	       + x[j-1]*m[ldm*(j-1)+i]) + x[j]*m[ldm*j+i];
      checkbound(i,yup);
      checkbound(j-1,xup);
      checkbound((j-1)+i, mup);
      checkbound(j,xup);
      checkbound(j+i,mup);

      i++;
      // Check loop invariant
      if (i < 0 || i > n1) return ERRCODE;
      return OKCODE;
      // End check loop invariant
    }
  }

  //  j = n2 % 8;
  if (tmp3 < 0 || tmp3 > 7) return ABORTCODE;
  j = tmp3;

/*   if (tmp1) { */
/*     if (tmp2) { */
/*       if (tmp4) { j = 0; } */
/*       else { j = 4; } */
/*     } else { */
/*       if (tmp5) { j = 2; } */
/*       else { j = 6; } */
/*     } */
/*   } else { */
/*     if (tmp3) {  */
/*       if (tmp6) { j = 1; } */
/*       else { j = 5; } */
/*     } else {  */
/*       if (tmp7) { j = 3; } */
/*       else { j = 7; } */
/*     } */
/*   } */
    
  if (j >= 4) {
    j = j - 1;
    i = 0;
    // Abstract i
    if (tmp6 < 0 || tmp6 > n1) return ABORTCODE;
    i = tmp6;
    // End abstract i

    // Converted while loop
    if (i+1 <= n1) {
      //      y[i] = ((( (y[i])
      //		 + x[j-3]*m[ldm*(j-3)+i])
      //	       + x[j-2]*m[ldm*(j-2)+i])
      //	      + x[j-1]*m[ldm*(j-1)+i]) + x[j]*m[ldm*j+i];
      checkbound(i,yup);
      checkbound(j-3,xup);
      checkbound( (j-3) + i, mup);
      checkbound(j-2,xup);
      checkbound( (j-2) + i, mup);
      checkbound(j-1, xup);
      checkbound( (j-1) + i, mup);
      checkbound(j, xup);
      checkbound( j + i, mup);
      i++;
      // Check loop invariant
      if (i < 0 || i > n1) return ERRCODE;
      return OKCODE;
      // End check loop invariant
    }
  }



  //  j = n2 % 16;

  if (tmp10 < 0 || tmp10 > 15) return ABORTCODE;
  j = tmp10;

/*   if (tmp1) { */
/*     if (tmp2) { */
/*       if (tmp4) {  */
/* 	if (tmp8) { j = 0; } */
/* 	else { j = 8; } */
/*       } else {  */
/* 	if (tmp9) { j = 4; } */
/* 	else { j = 12; } */
/*       } */
/*     } else { */
/*       if (tmp5) {  */
/* 	if (tmpa) { j = 2; } */
/* 	else { j = 10; } */
/*       } else {  */
/* 	if (tmpb) { j = 6; } */
/* 	else { j = 14; } */
/*       } */
/*     } */
/*   } else { */
/*     if (tmp3) {  */
/*       if (tmp6) {  */
/* 	if (tmpc) { j = 1; } */
/* 	else { j = 9; } */
/*       } else {  */
/* 	if (tmpd) { j = 5; } */
/* 	else { j = 13; } */
/*       } */
/*     } else {  */
/*       if (tmp7) { */
/* 	if (tmpe) { j = 3; } */
/* 	else { j = 11; } */
/*       } else { */
/* 	if (tmpf) { j = 7; } */
/* 	else { j = 15; } */
/*       } */
/*     } */
/*   } */

  if (j >= 8) {
    j = j - 1;
    i = 0;
    // Abstract i
    if (tmp7 < 0 || tmp7 > n1) return ABORTCODE;
    i = tmp7;
    // End abstract i

    // Converted while loop
    if (i+1 <= n1) {
      //      y[i] = ((((((( (y[i])
      //		     + x[j-7]*m[ldm*(j-7)+i]) + x[j-6]*m[ldm*(j-6)+i])
      //		  + x[j-5]*m[ldm*(j-5)+i]) + x[j-4]*m[ldm*(j-4)+i])
      //		+ x[j-3]*m[ldm*(j-3)+i]) + x[j-2]*m[ldm*(j-2)+i])
      //	      + x[j-1]*m[ldm*(j-1)+i]) + x[j] *m[ldm*j+i];
      checkbound(i,yup);
      checkbound(j-7,xup);
      checkbound((j-7)+i, mup);
      checkbound(j-6,xup);
      checkbound((j-6)+i, mup);
      checkbound(j-5, xup);
      checkbound((j-5)+i, mup);
      checkbound(j-4, xup);
      checkbound((j-4)+i, mup);
      checkbound(j-3, xup);
      checkbound((j-3)+i, mup);
      checkbound(j-2, xup);
      checkbound((j-2)+i, mup);
      checkbound(j-1, xup);
      checkbound((j-1)+i, mup);
      checkbound(j, xup);
      checkbound(j+i, mup);
      checkbound(i,yup);
      i++;
      // Check loop invariant
      if (i < 0 || i > n1) return ERRCODE;
      return OKCODE;
      // End check loop invariant
    }
  }



  //  jmin = (n2%16)+16;

  if (tmp11 < 16 || tmp11 > 31) return ABORTCODE;
  jmin = tmp11;

/*   if (tmp1) { */
/*     if (tmp2) { */
/*       if (tmp4) {  */
/* 	if (tmp8) { jmin = 16; } */
/* 	else { jmin = 24; } */
/*       } else {  */
/* 	if (tmp9) { jmin = 20; } */
/* 	else { jmin = 28; } */
/*       } */
/*     } else { */
/*       if (tmp5) {  */
/* 	if (tmpa) { jmin = 18; } */
/* 	else { jmin = 26; } */
/*       } else {  */
/* 	if (tmpb) { jmin = 22; } */
/* 	else { jmin = 32; } */
/*       } */
/*     } */
/*   } else { */
/*     if (tmp3) {  */
/*       if (tmp6) {  */
/* 	if (tmpc) { jmin = 17; } */
/* 	else { jmin = 25; } */
/*       } else {  */
/* 	if (tmpd) { jmin = 21; } */
/* 	else { jmin = 29; } */
/*       } */
/*     } else {  */
/*       if (tmp7) { */
/* 	if (tmpe) { jmin = 19; } */
/* 	else { jmin = 27; } */
/*       } else { */
/* 	if (tmpf) { jmin = 23; } */
/* 	else { jmin = 31; } */
/*       } */
/*     } */
/*   } */


  j = jmin - 1;
  // Abstract j
  if (tmp8 < jmin-1 || tmp8 > n2) return ABORTCODE;
  j = tmp8;
  // End abstract j

  // Converted while loop
  if (j+1 <= n2) {

    i = 0;
    // Abstract i
    if (tmp9 < 0 || tmp9 > n1) return ABORTCODE;
    i = tmp9;
    // End abstract i

    // Converted while loop
    if (i+1 <= n1) {
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
      checkbound((j-15)+i, mup);
      checkbound(j-14,xup);
      checkbound((j-14)+i, mup);
      checkbound(j-13,xup);
      checkbound((j-13)+i, mup);
      checkbound(j-12,xup);
      checkbound((j-12)+i, mup);
      checkbound(j-11,xup);
      checkbound((j-11)+i, mup);
      checkbound(j-10,xup);
      checkbound((j-10)+i, mup);
      checkbound(j-9,xup);
      checkbound((j-9)+i, mup);
      checkbound(j-8,xup);
      checkbound((j-8)+i, mup);
      checkbound(j-7,xup);
      checkbound((j-7)+i, mup);
      checkbound(j-6,xup);
      checkbound((j-6)+i, mup);
      checkbound(j-5, xup);
      checkbound((j-5)+i, mup);
      checkbound(j-4, xup);
      checkbound((j-4)+i, mup);
      checkbound(j-3, xup);
      checkbound((j-3)+i, mup);
      checkbound(j-2, xup);
      checkbound((j-2)+i, mup);
      checkbound(j-1, xup);
      checkbound((j-1)+i, mup);
      checkbound(j, xup);
      checkbound(j+i, mup);
      checkbound(i,yup);

      i++;
      // Check loop invariant
      if (i < 0 || i > n1) return ERRCODE;
      return OKCODE;
      // End check loop invariant
    }

    j = j + 16;

    // Check loop invariant
    if (j < jmin - 1 || j > n2) return ERRCODE;
    return OKCODE;
    // End loop invariant
  }

  return OKCODE;
}


int second()
{
  int ru_utime_tv_sec, ru_stime_tv_sec, ru_utime_tv_usec, ru_stime_tv_usec;
  float t ;

  //  void getrusage();

  //  getrusage(0,&ru) ;

  t = (float) (ru_utime_tv_sec+ru_stime_tv_sec) +
    ((float) (ru_utime_tv_usec+ru_stime_tv_usec)) ;
/*   t = (float) (ru_utime_tv_sec+ru_stime_tv_sec) + */
/*     ((float) (ru_utime_tv_usec+ru_stime_tv_usec))/1.0e6 ; */
  return OKCODE ;
}
