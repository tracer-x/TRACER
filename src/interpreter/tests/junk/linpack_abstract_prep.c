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





  tmp8 = ops;

  tmp8 = matgen(aup1,aup2,lda,n,bup,norma);
  if (tmp8) return tmp8;

  t1 = second();
  tmp8 = dgefa(aup1,aup2,lda,n,ipvtup,info);
  if (tmp8) return tmp8;


  if ((0<=-1) || (0>=(9))) return 1;
  if ((0<=-1) || (0>=(9))) return 1;

  t1 = second();
  tmp8 = dgesl(aup1,aup2,lda,n,ipvtup,bup,0);
  if (tmp8) return tmp8;


  if ((1<=-1) || (1>=(9))) return 1;
  if ((0<=-1) || (0>=(9))) return 1;


  if ((0<=-1) || (0>=(9))) return 1;
  if ((0<=-1) || (0>=(9))) return 1;
  if ((1<=-1) || (1>=(9))) return 1;
  if ((0<=-1) || (0>=(9))) return 1;

  i = 0;


  if (tmp10 < 0 || tmp10 > n) return -1;
  i = tmp10;



  if (i+1 <= n) {

    if ((i<=-1) || (i>=(200))) return 1;
    if ((i<=-1) || (i>=(200))) return 1;

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

    if ((i<=-1) || (i>=(200))) return 1;
    if ((i<=-1) || (i>=(200))) return 1;

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


    if ((i<=-1) || (i>=(200))) return 1;


    if (resid <= tmp1) {
      if ((i<=-1) || (i>=(200))) return 1;


    }



    if ((i<=-1) || (i>=(200))) return 1;


    if (normx <= tmp1) {
      if ((i<=-1) || (i>=(200))) return 1;


    }

    i++;

    if (i < 0 || i > n) return 1;
    return 0;

  }

  eps = epslon((float)1.0);







  if ((0<=-1) || (0>=(200))) return 1;
  if ((n-1<=-1) || (n-1>=(200))) return 1;






  if ((2<=-1) || (2>=(9))) return 1;
  if ((0<=-1) || (0>=(9))) return 1;


  if ((3<=-1) || (3>=(9))) return 1;
  if ((0<=-1) || (0>=(9))) return 1;


  if ((3<=-1) || (3>=(9))) return 1;
  if ((0<=-1) || (0>=(9))) return 1;
  if ((4<=-1) || (4>=(9))) return 1;
  if ((0<=-1) || (0>=(9))) return 1;


  if ((5<=-1) || (5>=(9))) return 1;
  if ((0<=-1) || (0>=(9))) return 1;


  print_time(0);

  tmp8 = matgen(aup1,aup2,lda,n,bup,norma);
  if (tmp8) return tmp8;

  t1 = second();
  tmp8 = dgefa(aup1,aup2,lda,n,ipvtup,info);
  if (tmp8) return tmp8;


  tmp1 = second();
  if (tmp1) return tmp1;
  if ((0<=-1) || (0>=(9))) return 1;
  if ((1<=-1) || (1>=(9))) return 1;

  t1 = second();
  if (t1) return t1;
  tmp8 = dgesl(aup1,aup2,lda,n,ipvtup,bup,0);
  if (tmp8) return tmp8;


  tmp1 = second();
  if (tmp1) return tmp1;
  if ((1<=-1) || (1>=(9))) return 1;
  if ((1<=-1) || (1>=(9))) return 1;


  if ((0<=-1) || (0>=(9))) return 1;
  if ((1<=-1) || (1>=(9))) return 1;
  if ((1<=-1) || (1>=(9))) return 1;
  if ((1<=-1) || (1>=(9))) return 1;


  if ((2<=-1) || (2>=(9))) return 1;
  if ((1<=-1) || (1>=(9))) return 1;


  if ((3<=-1) || (3>=(9))) return 1;
  if ((1<=-1) || (1>=(9))) return 1;


  if ((3<=-1) || (3>=(9))) return 1;
  if ((1<=-1) || (1>=(9))) return 1;
  if ((4<=-1) || (4>=(9))) return 1;
  if ((1<=-1) || (1>=(9))) return 1;


  if ((5<=-1) || (5>=(9))) return 1;
  if ((1<=-1) || (1>=(9))) return 1;

  tmp8 = matgen(aup1,aup2,lda,n,bup,norma);
  if (tmp8) return tmp8;
  t1 = second();
  if (t1) return t1;
  tmp8 = dgefa(aup1,aup2,lda,n,ipvtup,info);
  if (tmp8) return tmp8;


  tmp1 = second();
  if (tmp1) return tmp1;
  if ((0<=-1) || (0>=(9))) return 1;
  if ((2<=-1) || (2>=(9))) return 1;

  t1 = second();
  if (t1) return t1;
  tmp8 = dgesl(aup1,aup2,lda,n,ipvtup,bup,0);
  if (tmp8) return tmp8;


  tmp1 = second();
  if (tmp1) return tmp1;
  if ((1<=-1) || (1>=(9))) return 1;
  if ((2<=-1) || (2>=(9))) return 1;


  if ((0<=-1) || (0>=(9))) return 1;
  if ((2<=-1) || (2>=(9))) return 1;
  if ((1<=-1) || (1>=(9))) return 1;
  if ((2<=-1) || (2>=(9))) return 1;


  if ((2<=-1) || (2>=(9))) return 1;
  if ((2<=-1) || (2>=(9))) return 1;


  if ((3<=-1) || (3>=(9))) return 1;
  if ((2<=-1) || (2>=(9))) return 1;


  if ((3<=-1) || (3>=(9))) return 1;
  if ((2<=-1) || (2>=(9))) return 1;
  if ((4<=-1) || (4>=(9))) return 1;
  if ((2<=-1) || (2>=(9))) return 1;


  if ((5<=-1) || (5>=(9))) return 1;
  if ((2<=-1) || (2>=(9))) return 1;

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

    tmp8 = dgefa(aup1,aup2,lda,n,ipvtup,info);
    if (tmp8) return tmp8;
    i++;

    if (i < 0 || i > ntimes) return 1;
    return 0;

  }


  tmp1 = second();
  if (tmp1) return tmp1;
  if ((0<=-1) || (0>=(9))) return 1;
  if ((3<=-1) || (3>=(9))) return 1;

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
  if ((1<=-1) || (1>=(9))) return 1;
  if ((3<=-1) || (3>=(9))) return 1;


  if ((0<=-1) || (0>=(9))) return 1;
  if ((3<=-1) || (3>=(9))) return 1;
  if ((1<=-1) || (1>=(9))) return 1;
  if ((3<=-1) || (3>=(9))) return 1;


  if ((2<=-1) || (2>=(9))) return 1;
  if ((3<=-1) || (3>=(9))) return 1;


  if ((3<=-1) || (3>=(9))) return 1;
  if ((3<=-1) || (3>=(9))) return 1;


  if ((3<=-1) || (3>=(9))) return 1;
  if ((3<=-1) || (3>=(9))) return 1;
  if ((4<=-1) || (4>=(3))) return 1;
  if ((3<=-1) || (3>=(9))) return 1;


  if ((5<=-1) || (5>=(9))) return 1;
  if ((3<=-1) || (3>=(9))) return 1;

  print_time(1);
  print_time(2);
  print_time(3);

  tmp8 = matgen(aaup1,aaup2,ldaa,n,bup,norma);
  if (tmp8) return tmp8;
  t1 = second();
  if (t1) return t1;
  tmp8 = dgefa(aaup1,aaup2,ldaa,n,ipvtup,info);
  if (tmp8) return tmp8;


  tmp1 = second();
  if (tmp1) return tmp1;
  if ((0<=-1) || (0>=(9))) return 1;
  if ((4<=-1) || (4>=(9))) return 1;

  t1 = second();
  if (t1) return t1;
  tmp8 = dgesl(aaup1,aaup2,ldaa,n,ipvtup,bup,0);
  if (tmp8) return tmp8;


  tmp1 = second();
  if (tmp1) return tmp1;

  if ((1<=-1) || (1>=(9))) return 1;
  if ((4<=-1) || (4>=(9))) return 1;


  if ((0<=-1) || (0>=(9))) return 1;
  if ((4<=-1) || (4>=(9))) return 1;
  if ((1<=-1) || (1>=(9))) return 1;
  if ((4<=-1) || (4>=(9))) return 1;


  if ((2<=-1) || (2>=(9))) return 1;
  if ((4<=-1) || (4>=(9))) return 1;


  if ((3<=-1) || (3>=(9))) return 1;
  if ((4<=-1) || (4>=(9))) return 1;


  if ((3<=-1) || (3>=(9))) return 1;
  if ((4<=-1) || (4>=(9))) return 1;
  if ((4<=-1) || (4>=(9))) return 1;
  if ((4<=-1) || (4>=(9))) return 1;


  if ((5<=-1) || (5>=(9))) return 1;
  if ((4<=-1) || (4>=(9))) return 1;

  tmp8 = matgen(aaup1,aaup2,ldaa,n,bup,norma);
  if (tmp8) return tmp8;

  t1 = second();
  if (t1) return t1;
  tmp8 = dgefa(aaup1,aaup2,ldaa,n,ipvtup,info);
  if (tmp8) return tmp8;


  tmp1 = second();
  if (tmp1) return tmp1;
  if ((0<=-1) || (0>=(9))) return 1;
  if ((5<=-1) || (5>=(9))) return 1;

  t1 = second();
  if (t1) return t1;
  tmp8 = dgesl(aaup1,aaup2,ldaa,n,ipvtup,bup,0);
  if (tmp8) return tmp8;


  tmp1 = second();
  if (tmp1) return tmp1;
  if ((1<=-1) || (1>=(9))) return 1;
  if ((5<=-1) || (5>=(9))) return 1;


  if ((0<=-1) || (0>=(9))) return 1;
  if ((5<=-1) || (5>=(9))) return 1;
  if ((1<=-1) || (1>=(9))) return 1;
  if ((5<=-1) || (5>=(9))) return 1;


  if ((2<=-1) || (2>=(9))) return 1;
  if ((5<=-1) || (5>=(9))) return 1;


  if ((3<=-1) || (3>=(9))) return 1;
  if ((5<=-1) || (5>=(9))) return 1;


  if ((3<=-1) || (3>=(9))) return 1;
  if ((5<=-1) || (5>=(9))) return 1;
  if ((4<=-1) || (4>=(9))) return 1;
  if ((5<=-1) || (5>=(9))) return 1;


  if ((5<=-1) || (5>=(9))) return 1;
  if ((5<=-1) || (5>=(9))) return 1;

  tmp8 = matgen(aaup1,aaup2,ldaa,n,bup,norma);
  if (tmp8) return tmp8;
  t1 = second();
  if (t1) return t1;
  tmp8 = dgefa(aaup1,aaup2,ldaa,n,ipvtup,info);
  if (tmp8) return tmp8;


  tmp1 = second();
  if (tmp1) return tmp1;
  if ((0<=-1) || (0>=(9))) return 1;
  if ((6<=-1) || (6>=(9))) return 1;

  t1 = second();
  if (t1) return t1;
  tmp8 = dgesl(aaup1,aaup2,ldaa,n,ipvtup,bup,0);
  if (tmp8) return tmp8;


  tmp1 = second();
  if (tmp1) return tmp1;
  if ((1<=-1) || (1>=(9))) return 1;
  if ((6<=-1) || (6>=(9))) return 1;


  if ((0<=-1) || (0>=(9))) return 1;
  if ((6<=-1) || (6>=(9))) return 1;
  if ((1<=-1) || (1>=(9))) return 1;
  if ((6<=-1) || (6>=(9))) return 1;


  if ((2<=-1) || (2>=(9))) return 1;
  if ((6<=-1) || (6>=(9))) return 1;


  if ((3<=-1) || (3>=(9))) return 1;
  if ((6<=-1) || (6>=(9))) return 1;


  if ((3<=-1) || (3>=(9))) return 1;
  if ((6<=-1) || (6>=(9))) return 1;
  if ((4<=-1) || (4>=(9))) return 1;
  if ((6<=-1) || (6>=(9))) return 1;


  if ((5<=-1) || (5>=(9))) return 1;
  if ((6<=-1) || (6>=(9))) return 1;

  ntimes = 10;
  tm2 = 0;
  t1 = second();
  if (t1) return t1;

  i = 0;


  if (tmp15 < 0 || tmp15 > n) return -1;
  i = tmp15;



  if (i+1 <= ntimes) {
    tm = second();
    if (tm) return tm;

    tmp8 = matgen(aaup1,aaup2,ldaa,n,bup,norma);
    if (tmp8) return tmp8;


    tmp8 = second();
    if (tmp8) return tmp8;

    tmp8 = dgefa(aaup1,aaup2,ldaa,n,ipvtup,info);
    if (tmp8) return tmp8;
    i++;

    if (i < 0 || i > ntimes) return 1;
    return 0;

  }

  tmp1 = second();
  if (tmp1) return tmp1;
  if ((0<=-1) || (0>=(9))) return 1;
  if ((7<=-1) || (7>=(9))) return 1;

  t1 = second();
  if (t1) return t1;

  i = 0;

  if (i < 0 || i > ntimes) return -1;
  i = tmp16;



  if (i+1 <= ntimes) {
    tmp8 = dgesl(aaup1,aaup2,ldaa,n,ipvtup,bup,0);
    if (tmp8) return tmp8;
    i++;

    if (i < 0 || i > ntimes) return 1;
    return 0;

  }

  tmp1 = second();
  if (tmp1) return tmp1;
  if ((1<=-1) || (1>=(9))) return 1;
  if ((7<=-1) || (7>=(9))) return 1;


  if ((0<=-1) || (0>=(9))) return 1;
  if ((7<=-1) || (7>=(9))) return 1;
  if ((1<=-1) || (1>=(9))) return 1;
  if ((7<=-1) || (7>=(9))) return 1;


  if ((2<=-1) || (2>=(9))) return 1;
  if ((7<=-1) || (7>=(9))) return 1;


  if ((3<=-1) || (3>=(9))) return 1;
  if ((7<=-1) || (7>=(9))) return 1;


  if ((3<=-1) || (3>=(9))) return 1;
  if ((7<=-1) || (7>=(9))) return 1;
  if ((4<=-1) || (4>=(9))) return 1;
  if ((7<=-1) || (7>=(9))) return 1;


  if ((5<=-1) || (5>=(9))) return 1;
  if ((7<=-1) || (7>=(9))) return 1;


  if ((3<=-1) || (3>=(9))) return 1;
  if ((3<=-1) || (3>=(9))) return 1;
  if ((3<=-1) || (3>=(9))) return 1;
  if ((7<=-1) || (7>=(9))) return 1;
  if (tmp7) {
    if ((3<=-1) || (3>=(9))) return 1;
    if ((3<=-1) || (3>=(9))) return 1;
  } else {
    if ((3<=-1) || (3>=(9))) return 1;
    if ((7<=-1) || (7>=(9))) return 1;
  }


  if (kf > 0) {
    kf = kf + 0.5;
  } else {
    kf = kf - 0.5;
  }





  if (tmp9)
    kflops = 0;
  else {





    if (tmpa) kflops = -kflops;
  }


  print_time(4);
  print_time(5);
  print_time(6);
  print_time(7);



  return 0;
  _SLICE(cray);
}


int print_time (int row)
{



  if ((0<=-1) || (0>=(9))) return 1;
  if ((row<=-1) || (row>=(9))) return 1;
  if ((1<=-1) || (1>=(9))) return 1;
  if ((row<=-1) || (row>=(9))) return 1;
  if ((1<=-1) || (1>=(9))) return 1;
  if ((row<=-1) || (row>=(9))) return 1;
  if ((1<=-1) || (1>=(9))) return 1;
  if ((row<=-1) || (row>=(9))) return 1;
  if ((1<=-1) || (1>=(9))) return 1;
  if ((row<=-1) || (row>=(9))) return 1;
  if ((1<=-1) || (1>=(9))) return 1;
  if ((row<=-1) || (row>=(9))) return 1;
  return 0;
}


int matgen(int aup1, int aup2, int lda, int n, int bup, float norma)
{
  int init, i, j;
  int tmp1, tmp2, tmp3, tmp4, tmp5, tmp6, tmp7;

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




      if ((j + i<=-1) || (j + i>=(aup1))) return 1;


      if ((j + i<=-1) || (j + i>=(aup1))) return 1;
      if (tmp2) {
 if ((j + i<=-1) || (j + i>=(aup1))) return 1;
      }
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

    if ((i<=-1) || (i>=(bup))) return 1;
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

      if ((i<=-1) || (i>=(bup))) return 1;
      if ((j + i<=-1) || (j + i>=(aup1))) return 1;
      if ((i<=-1) || (i>=(bup))) return 1;
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


int dgefa(int aup1, int aup2, int lda, int n, int ipvtup, int info)
{

  float t;
  int j,k,kp1,l,nm1;
  int tmp1, tmp2, tmp3, tmp4, tmp5, tmp6;

  info = 0;
  nm1 = n - 1;
  if (nm1 >= 0) {
    k = 0;


    if (tmp5 < 0 || tmp5 > nm1) return -1;
    k = tmp5;



    if (k+1 <= nm1) {
      kp1 = k + 1;


      if ((k + k<=-1) || (k + k>=(aup1))) return 1;
      tmp1 = idamax(n-k, 200, 1);
      if (tmp1) return tmp1;



      if ((k<=-1) || (k>=(ipvtup))) return 1;


      if ((k + l<=-1) || (k + l>=(aup1))) return 1;


      if (tmp3) {

 if (l != k) {

   if ((k + l<=-1) || (k + l>=(aup1))) return 1;


   if ((k + k<=-1) || (k + k>=(aup1))) return 1;
   if ((k + l<=-1) || (k + l>=(aup1))) return 1;


   if ((k + k<=-1) || (k + k>=(aup1))) return 1;
 }


 if ((k + k<=-1) || (k + k>=(aup1))) return 1;


 if ((k + k + 1<=-1) || (k + k + 1>=(aup1))) return 1;
 tmp1 = dscal(n-(k+1), t, aup2, 1);
 if (tmp1) return tmp1;

 j = kp1;


 if (tmp6 < kp1 || tmp6 > n) return -1;
 j = tmp6;



 if (j+1<=n) {

   if ((j + l<=-1) || (j + l>=(aup1))) return 1;

   if (l != k) {

     if ((j + k<=-1) || (j + k>=(aup1))) return 1;
     if ((j + l<=-1) || (j + l>=(aup1))) return 1;


     if ((j + k<=-1) || (j + k>=(aup1))) return 1;
   }

   if ((k + k + 1<=-1) || (k + k + 1>=(aup1))) return 1;
   if ((j + k + 1<=-1) || (j + k + 1>=(aup1))) return 1;
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

      if (k < 0 || k > nm1) return ERRCOE;
      return 0;

    }
  }

  if ((n-1<=-1) || (n-1>=(ipvtup))) return 1;


  if (((n-1) + (n-1)<=-1) || ((n-1) + (n-1)>=(aup))) return 1;
  if (tmp4) { info = n - 1; }
  return 0;
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

      if (tmp4 < 0 || tmp4 > nm1) return -1;
      k = tmp4;



      if (k+1 <= nm1) {

 if ((k<=-1) || (k>=(ipvtup))) return 1;

 if ((l<=-1) || (l>=(bup))) return 1;

 if (l != k){

   if ((k<=-1) || (k>=(bup))) return 1;
   if ((l<=-1) || (l>=(bup))) return 1;


   if ((k<=-1) || (k>=(bup))) return 1;
 }


 if ((k + k + 1<=-1) || (k + k + 1>=(aup1))) return 1;
 if ((k+1<=-1) || (k+1>=(bup))) return 1;
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

      if ((k<=-1) || (k>=(bup))) return 1;
      if ((k + k<=-1) || (k + k>=(aup1))) return 1;
      if ((k<=-1) || (k>=(bup))) return 1;


      if ((k<=-1) || (k>=(bup))) return 1;


      if ((k<=-1) || (k>=(aup1))) return 1;
      if ((0<=-1) || (0>=(bup))) return 1;
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

      if ((k<=-1) || (k>=(aup1))) return 1;
      if ((0<=-1) || (0>=(bup))) return 1;
      t = ddot(k, aup2, 1, tmp3, 1);


      if ((k<=-1) || (k>=(bup))) return 1;
      if ((k + k<=-1) || (k + k>=(aup1))) return 1;
      if ((k<=-1) || (k>=(bup))) return 1;
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

 if ((k<=-1) || (k>=(bup))) return 1;
 if ((k + k + 1<=-1) || (k + k + 1>=(aup1))) return 1;
 if ((k + 1<=-1) || (k + 1>=(bup))) return 1;
 tmp1 = ddot(n-(k+1), aup2, 1, bup, 1);
 if (tmp1) return tmp1;
 if ((k<=-1) || (k>=(bup))) return 1;


 if ((k<=-1) || (k>=(ipvtup))) return 1;
 if (l != k) {

   if ((l<=-1) || (l>=(bup))) return 1;


   if ((k<=-1) || (k>=(bup))) return 1;
   if ((l<=-1) || (l>=(bup))) return 1;


   if ((k<=-1) || (k>=(bup))) return 1;
 }
 kb++;

 if (kb < 1 || kb > nm1) return 1;
 return 0;

      }
    }
  }
  return 0;
}


int daxpy(int n, float da, int dx, int incx, int dy, int incy)


{
  int i,ix,iy,m,mp1;
  int tmp1, tmp2;

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

      if ((ix<=-1) || (ix>=(dxup))) return 1;
      if ((iy<=-1) || (iy>=(dyup))) return 1;
      if ((iy<=-1) || (iy>=(dyup))) return 1;

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

    if ((i<=-1) || (i>=(dyup))) return 1;
    if ((i<=-1) || (i>=(dxup))) return 1;
    if ((i<=-1) || (i>=(dyup))) return 1;

    i++;

    if (i < 0 || i > n) return 1;
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

      if ((ix<=-1) || (ix>=(dxup))) return 1;
      if ((iy<=-1) || (iy>=(dyup))) return 1;

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

    if ((i<=-1) || (i>=(dxup))) return 1;
    if ((i<=-1) || (i>=(dyup))) return 1;
    i++;

    if (i < 0 || i > n) return 1;
    return 0;

  }
  return 0;
}


int dscal(int n, float da, int dxup, int incx)
{
  int i,m,mp1,nincx;
  int tmp1, tmp2;

  if(n <= 0)return 0;
  if(incx != 1) {

    nincx = n + nincx;

    i = 0;

    if (tmp1 < 0 || tmp1 > nincx) return -1;
    i = tmp1;



    if (i+1 <= nincx) {

      if ((i<=-1) || (i>=(dxup))) return 1;
      if ((i<=-1) || (i>=(dxup))) return 1;
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

    if ((i<=-1) || (i>=(dxup))) return 1;
    if ((i<=-1) || (i>=(dxup))) return 1;
    i++;

    if (i < 0 || i > n) return 1;
    return 0;

  }
  return 0;
}


int idamax(int n, int dxup, int incx)
{
  float dmax;
  int i, ix, itemp;
  int tmp1;

  int tmpa;

  if( n < 1 ) return 0;
  if(n ==1 ) return 0;
  if(incx != 1) {
    ix = 1;


    if ((0<=-1) || (0>=(dxup))) return 1;




    ix = ix + incx;
    i = 1;


    if (tmpa < 1 || tmpa > n) return -1;
    i = tmpa;



    if (i+1 <= n) {
      int tmp2, tmp3, tmp4;






      if ((ix<=-1) || (ix>=(dxup))) return 1;

      if (tmp3) {
 itemp = i;
 if ((ix<=-1) || (ix>=(dxup))) return 1;


      }

      ix = ix + incx;
      i++;

      if (i < 1 || i > n) return 1;
      return 0;

    }
  }
  else {
    int tmp5, tmp6;

    itemp = 0;



    if ((0<=-1) || (0>=(dxup))) return 1;


    dmax = tmp6;

    i = 1;

    if (tmpa < 1 || tmpa > n) return -1;
    i = tmpa;



    if (i+1 <= n) {
      int tmp7, tmp8, tmp9;






      if ((i<=-1) || (i>=(dxup))) return 1;


      if (tmp8) {
 itemp = i;
 if ((i<=-1) || (i>=(dxup))) return 1;


      }
      i++;

      if (i < 1 || i > n) return 1;
      return 0;

    }
  }
  return 0;
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




    return 0;
  }





  return 0;
}
# 1364 "linpack_abstract.c"
int dmxpy (int n1, int yup, int n2, int ldm, int xup, int mup)

{
  int j,i,jmin, tmp1, tmp2, tmp3;
  int tmp4;


  if (tmp1 < 0 || tmp1 > 1) return -1;
  j = tmp1;




  if (j >= 1) {
    j = j - 1;

    i = 0;

    if (tmp4 < 0 || tmp4 > n1) return -1;
    i = tmp4;



    if (i+1 <= n1) {

      if ((i<=-1) || (i>=(yup))) return 1;
      if ((j<=-1) || (j>=(xup))) return 1;
      if ((j + 1<=-1) || (j + 1>=(mup))) return 1;
      if ((i<=-1) || (i>=(yup))) return 1;

      i++;

      if (i < 0 || i > n1) return 1;
      return 0;

    }
  }


  if (tmp2 < 0 || tmp2 > 3) return -1;
  j = tmp2;
# 1414 "linpack_abstract.c"
  if (j >= 2) {
    j = j - 1;

    i = 0;

    if (tmp5 < 0 || tmp5 > n1) return -1;
    i = tmp5;



    if (i+1 <= n1) {


      if ((i<=-1) || (i>=(yup))) return 1;
      if ((j-1<=-1) || (j-1>=(xup))) return 1;
      if (((j-1)+i<=-1) || ((j-1)+i>=(mup))) return 1;
      if ((j<=-1) || (j>=(xup))) return 1;
      if ((j+i<=-1) || (j+i>=(mup))) return 1;

      i++;

      if (i < 0 || i > n1) return 1;
      return 0;

    }
  }


  if (tmp3 < 0 || tmp3 > 7) return -1;
  j = tmp3;
# 1463 "linpack_abstract.c"
  if (j >= 4) {
    j = j - 1;
    i = 0;

    if (tmp6 < 0 || tmp6 > n1) return -1;
    i = tmp6;



    if (i+1 <= n1) {




      if ((i<=-1) || (i>=(yup))) return 1;
      if ((j-3<=-1) || (j-3>=(xup))) return 1;
      if (((j-3) + i<=-1) || ((j-3) + i>=(mup))) return 1;
      if ((j-2<=-1) || (j-2>=(xup))) return 1;
      if (((j-2) + i<=-1) || ((j-2) + i>=(mup))) return 1;
      if ((j-1<=-1) || (j-1>=(xup))) return 1;
      if (((j-1) + i<=-1) || ((j-1) + i>=(mup))) return 1;
      if ((j<=-1) || (j>=(xup))) return 1;
      if ((j + i<=-1) || (j + i>=(mup))) return 1;
      i++;

      if (i < 0 || i > n1) return 1;
      return 0;

    }
  }





  if (tmp10 < 0 || tmp10 > 15) return -1;
  j = tmp10;
# 1539 "linpack_abstract.c"
  if (j >= 8) {
    j = j - 1;
    i = 0;

    if (tmp7 < 0 || tmp7 > n1) return -1;
    i = tmp7;



    if (i+1 <= n1) {





      if ((i<=-1) || (i>=(yup))) return 1;
      if ((j-7<=-1) || (j-7>=(xup))) return 1;
      if (((j-7)+i<=-1) || ((j-7)+i>=(mup))) return 1;
      if ((j-6<=-1) || (j-6>=(xup))) return 1;
      if (((j-6)+i<=-1) || ((j-6)+i>=(mup))) return 1;
      if ((j-5<=-1) || (j-5>=(xup))) return 1;
      if (((j-5)+i<=-1) || ((j-5)+i>=(mup))) return 1;
      if ((j-4<=-1) || (j-4>=(xup))) return 1;
      if (((j-4)+i<=-1) || ((j-4)+i>=(mup))) return 1;
      if ((j-3<=-1) || (j-3>=(xup))) return 1;
      if (((j-3)+i<=-1) || ((j-3)+i>=(mup))) return 1;
      if ((j-2<=-1) || (j-2>=(xup))) return 1;
      if (((j-2)+i<=-1) || ((j-2)+i>=(mup))) return 1;
      if ((j-1<=-1) || (j-1>=(xup))) return 1;
      if (((j-1)+i<=-1) || ((j-1)+i>=(mup))) return 1;
      if ((j<=-1) || (j>=(xup))) return 1;
      if ((j+i<=-1) || (j+i>=(mup))) return 1;
      if ((i<=-1) || (i>=(yup))) return 1;
      i++;

      if (i < 0 || i > n1) return 1;
      return 0;

    }
  }





  if (tmp11 < 16 || tmp11 > 31) return -1;
  jmin = tmp11;
# 1626 "linpack_abstract.c"
  j = jmin - 1;

  if (tmp8 < jmin-1 || tmp8 > n2) return -1;
  j = tmp8;



  if (j+1 <= n2) {

    i = 0;

    if (tmp9 < 0 || tmp9 > n1) return -1;
    i = tmp9;



    if (i+1 <= n1) {
# 1661 "linpack_abstract.c"
      if ((i<=-1) || (i>=(yup))) return 1;
      if ((j-15<=-1) || (j-15>=(xup))) return 1;
      if (((j-15)+i<=-1) || ((j-15)+i>=(mup))) return 1;
      if ((j-14<=-1) || (j-14>=(xup))) return 1;
      if (((j-14)+i<=-1) || ((j-14)+i>=(mup))) return 1;
      if ((j-13<=-1) || (j-13>=(xup))) return 1;
      if (((j-13)+i<=-1) || ((j-13)+i>=(mup))) return 1;
      if ((j-12<=-1) || (j-12>=(xup))) return 1;
      if (((j-12)+i<=-1) || ((j-12)+i>=(mup))) return 1;
      if ((j-11<=-1) || (j-11>=(xup))) return 1;
      if (((j-11)+i<=-1) || ((j-11)+i>=(mup))) return 1;
      if ((j-10<=-1) || (j-10>=(xup))) return 1;
      if (((j-10)+i<=-1) || ((j-10)+i>=(mup))) return 1;
      if ((j-9<=-1) || (j-9>=(xup))) return 1;
      if (((j-9)+i<=-1) || ((j-9)+i>=(mup))) return 1;
      if ((j-8<=-1) || (j-8>=(xup))) return 1;
      if (((j-8)+i<=-1) || ((j-8)+i>=(mup))) return 1;
      if ((j-7<=-1) || (j-7>=(xup))) return 1;
      if (((j-7)+i<=-1) || ((j-7)+i>=(mup))) return 1;
      if ((j-6<=-1) || (j-6>=(xup))) return 1;
      if (((j-6)+i<=-1) || ((j-6)+i>=(mup))) return 1;
      if ((j-5<=-1) || (j-5>=(xup))) return 1;
      if (((j-5)+i<=-1) || ((j-5)+i>=(mup))) return 1;
      if ((j-4<=-1) || (j-4>=(xup))) return 1;
      if (((j-4)+i<=-1) || ((j-4)+i>=(mup))) return 1;
      if ((j-3<=-1) || (j-3>=(xup))) return 1;
      if (((j-3)+i<=-1) || ((j-3)+i>=(mup))) return 1;
      if ((j-2<=-1) || (j-2>=(xup))) return 1;
      if (((j-2)+i<=-1) || ((j-2)+i>=(mup))) return 1;
      if ((j-1<=-1) || (j-1>=(xup))) return 1;
      if (((j-1)+i<=-1) || ((j-1)+i>=(mup))) return 1;
      if ((j<=-1) || (j>=(xup))) return 1;
      if ((j+i<=-1) || (j+i>=(mup))) return 1;
      if ((i<=-1) || (i>=(yup))) return 1;

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


int second()
{
  int ru_utime_tv_sec, ru_stime_tv_sec, ru_utime_tv_usec, ru_stime_tv_usec;
  float t ;





  t = (float) (ru_utime_tv_sec+ru_stime_tv_sec) +
    ((float) (ru_utime_tv_usec+ru_stime_tv_usec)) ;


  return 0 ;
}
