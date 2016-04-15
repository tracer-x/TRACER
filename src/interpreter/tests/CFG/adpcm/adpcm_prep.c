// This program has many nonlinear operations 

typedef struct {
    int real, imag;
} COMPLEX;

///////////////////////////////////////////////////////////////////////////
///                            PROTOTYPES
///////////////////////////////////////////////////////////////////////////
/* void fft(COMPLEX *, int); */
/* int fir_filter(int input, int *coef, int n, int *history); */
/* int iir_filter(int input, int *coef, int n, int *history); */
/* int gaussian(void); */
/* int my_abs(int n); */
/* void setup_codec(int), key_down(), int_enable(), int_disable(); */
/* int flags(int); */
/* int getinput(void); */
/* void sendout(int), flush(); */
/* int encode(int, int); */
/* void decode(int); */
/* int filtez(int *bpl, int *dlt); */
/* void upzero(int dlt, int *dlti, int *bli); */
/* int filtep(int rlt_tmp_1, int al1, int rlt_tmp_2, int al2); */
/* int quantl(int el, int detl); */
/* int logscl(int il, int nbl); */
/* int scalel(int nbl, int shift_constant); */
/* int uppol2(int al1, int al2, int plt, int plt_tmp_1, int plt_tmp_2); */
/* int uppol1(int al1, int apl2, int plt, int plt_tmp_1); */
/* int logsch(int ih, int nbh); */
/* void reset(); */
/* int my_fabs(int n); */
/* int my_cos(int n); */
/* int my_sin(int n); */
///////////////////////////////////////////////////////////////////////////

int tqmf[24];
int h_tmp[24];
int xl, xh;
int accumc[11], accumd[11];
int xout1, xout2;
int xs, xd;
int il, szl, spl, sl, el;
int qq4_code4_table[16];
int qq5_code5_table[32];
int qq6_code6_table[64];
int delay_bpl[6];
int delay_dltx[6];
int wl_code_table[16];
int wl_table[8];
int ilb_table[32];
int nbl;
int al1, al2;
int plt, plt_tmp_1, plt_tmp_2;
int rs;
int dlt;
int rlt, rlt_tmp_1, rlt_tmp_2;
int decis_levl[30];
int detl;
int quant26bt_pos[31];
int quant26bt_neg[31];
int deth;
int sh;
int eh;
int qq2_code2_table[4];
int wh_code_table[4];
int dh, ih;
int nbh, szh;
int sph, ph, yh, rh;
int delay_dhx[6];
int delay_bph[6];
int ah_tmp_1, ah_tmp_2;
int ph_tmp_1, ph_tmp_2;
int rh_tmp_1, rh_tmp_2;
int ilr, yl, rl;
int dec_deth, dec_detl, dec_dlt;
int dec_del_bpl[6];
int dec_del_dltx[6];
int dec_plt, dec_plt_tmp_1, dec_plt_tmp_2;
int dec_szl, dec_spl, dec_sl;
int dec_rlt_tmp_1, dec_rlt_tmp_2, dec_rlt;
int dec_al1, dec_al2;
int dl;
int dec_nbl, dec_yh, dec_dh, dec_nbh;
int dec_del_bph[6];
int dec_del_dhx[6];
int dec_szh;
int dec_rh_tmp_1, dec_rh_tmp_2;
int dec_ah_tmp_1, dec_ah_tmp_2;
int dec_ph, dec_sph;
int dec_sh, dec_rh;
int dec_ph_tmp_1, dec_ph_tmp_2;

// Created by Jorge (11/24/09)
// During our compilation we don't allow initialization of global
// variables.
void initialize_global(){
/*   h = { 12, -44, -44, 212, 48, -624, 128, 1448, */
/* 	-840, -3220, 3804, 15504, 15504, 3804, -3220, -840, */
/* 	1448, 128, -624, 48, 212, -44, -44, 12}; */
  h_tmp[0]=12;h_tmp[1]=-44;h_tmp[2]=-44;h_tmp[3]=212;h_tmp[4]=48; 
  h_tmp[5]=-624;h_tmp[6]=128;h_tmp[7]=1448;h_tmp[8]=-840;h_tmp[9]=-3220;
  h_tmp[10]=3804;h_tmp[11]=15504;h_tmp[12]=15504;h_tmp[13]=3804;h_tmp[14]=-3220;
  h_tmp[15]=-840;h_tmp[16]=1448;h_tmp[17]=128;h_tmp[18]=-624;h_tmp[19]=48;
  h_tmp[20]=212;h_tmp[21]=-44;h_tmp[22]=-44;h_tmp[23]=12;
/*   qq4_code4_table = { 0, -20456, -12896, -8968, -6288, -4240, -2584, -1200, */
/* 		      20456, 12896, 8968, 6288, 4240, 2584, 1200, 0}; */

  qq4_code4_table[0]=0;qq4_code4_table[1]=-20456;
  qq4_code4_table[2]=-12896;qq4_code4_table[3]=-8968;
  qq4_code4_table[4]=-6288;qq4_code4_table[5]=-4240;
  qq4_code4_table[6]=-2584;qq4_code4_table[7]=-1200;
  qq4_code4_table[8]=20456;qq4_code4_table[9]=12896;
  qq4_code4_table[10]=8968;qq4_code4_table[11]=6288;
  qq4_code4_table[12]=4240;qq4_code4_table[13]=2584;
  qq4_code4_table[14]=1200;qq4_code4_table[15]=0;  
/*   qq5_code5_table = { -280, -280, -23352, -17560, -14120, -11664, -9752, -8184, */
/* 		      -6864, -5712, -4696, -3784, -2960, -2208, -1520, -880, */
/* 		      23352, 17560, 14120, 11664, 9752, 8184, 6864, 5712, */
/* 		      4696, 3784, 2960, 2208, 1520, 880, 280, -280}; */

  qq5_code5_table[0]=-280;qq5_code5_table[1]=-280;qq5_code5_table[2]=-23352;
  qq5_code5_table[3]=-17560;qq5_code5_table[4]=-14120;qq5_code5_table[5]=-11664;
  qq5_code5_table[6]=-9752;qq5_code5_table[7]=-8184;qq5_code5_table[8]=-6864;
  qq5_code5_table[9]=-5712;qq5_code5_table[10]=-4696;qq5_code5_table[11]=-3784;
  qq5_code5_table[12]=-2960;qq5_code5_table[13]=-2208;qq5_code5_table[14]=-1520;
  qq5_code5_table[15]=-880;qq5_code5_table[16]=23352;qq5_code5_table[17]=17560;
  qq5_code5_table[18]=14120;qq5_code5_table[19]=11664;qq5_code5_table[20]=9752;
  qq5_code5_table[21]=8184;qq5_code5_table[22]=6864;qq5_code5_table[23]=5712;
  qq5_code5_table[24]=4696;qq5_code5_table[25]=3784;qq5_code5_table[26]=2960; 
  qq5_code5_table[27]=2208;qq5_code5_table[28]=1520;qq5_code5_table[29]=880;
  qq5_code5_table[30]=280;qq5_code5_table[31]=-280;
/*   qq6_code6_table = { -136, -136, -136, -136, -24808, -21904, -19008, -16704, */
/* 		      -14984, -13512, -12280, -11192, -10232, -9360, -8576, -7856, */
/* 		      -7192, -6576, -6000, -5456, -4944, -4464, -4008, -3576, */
/* 		      -3168, -2776, -2400, -2032, -1688, -1360, -1040, -728, */
/* 		      24808, 21904, 19008, 16704, 14984, 13512, 12280, 11192, */
/* 		      10232, 9360, 8576, 7856, 7192, 6576, 6000, 5456, */
/* 		      4944, 4464, 4008, 3576, 3168, 2776, 2400, 2032, */
/* 		      1688, 1360, 1040, 728, 432, 136, -432, -136}; */

  qq6_code6_table[0]=-136;qq6_code6_table[1]=-136;qq6_code6_table[2]=-136;
  qq6_code6_table[3]=-136;qq6_code6_table[4]=-24808;qq6_code6_table[5]=-21904;
  qq6_code6_table[6]=-19008;qq6_code6_table[7]=-16704;qq6_code6_table[8]=-14984;
  qq6_code6_table[9]=-13512;qq6_code6_table[10]=-12280;qq6_code6_table[11]=-11192;
  qq6_code6_table[12]=-10232;qq6_code6_table[13]=-9360;qq6_code6_table[14]=-8576;
  qq6_code6_table[15]=-7856;qq6_code6_table[16]=-7192;qq6_code6_table[17]=-6576;
  qq6_code6_table[18]=-6000;qq6_code6_table[19]=-5456;qq6_code6_table[20]=-4944;
  qq6_code6_table[21]=-4464;qq6_code6_table[22]=-4008;qq6_code6_table[23]=-3576;
  qq6_code6_table[24]=-3168;qq6_code6_table[25]=-2776;qq6_code6_table[26]=-2400;
  qq6_code6_table[27]=-2032;qq6_code6_table[28]=-1688;qq6_code6_table[29]=-1360;
  qq6_code6_table[30]=-1040;qq6_code6_table[31]=-728;qq6_code6_table[32]=24808;
  qq6_code6_table[33]=21904;qq6_code6_table[34]=19008;qq6_code6_table[35]=16704;
  qq6_code6_table[36]=14984;qq6_code6_table[37]=13512;qq6_code6_table[38]=12280;
  qq6_code6_table[39]=11192;qq6_code6_table[40]=10232;qq6_code6_table[41]=9360;
  qq6_code6_table[42]=8576;qq6_code6_table[43]=7856;qq6_code6_table[44]=7192;
  qq6_code6_table[45]=6576;qq6_code6_table[46]=6000;qq6_code6_table[47]=5456;
  qq6_code6_table[48]=4944;qq6_code6_table[49]=4464;qq6_code6_table[50]=4008;
  qq6_code6_table[51]=3576;qq6_code6_table[52]=3168;qq6_code6_table[53]=2776;
  qq6_code6_table[54]=2400;qq6_code6_table[55]=2032;qq6_code6_table[56]=1688;
  qq6_code6_table[57]=1360;qq6_code6_table[58]=1040;qq6_code6_table[59]=728;
  qq6_code6_table[60]=432;qq6_code6_table[61]=136;qq6_code6_table[62]=-432;
  qq6_code6_table[63]=-136;
/*   wl_code_table = { -60, 3042, 1198, 538, 334, 172, 58, -30, */
/* 		    3042, 1198, 538, 334, 172, 58, -30, -60}; */

  wl_code_table[0]=-60;wl_code_table[1]=3042;wl_code_table[2]=1198;
  wl_code_table[3]=538;wl_code_table[4]=334;wl_code_table[5]=172;
  wl_code_table[6]=58;wl_code_table[7]=-30;wl_code_table[8]=3042;
  wl_code_table[9]=1198;wl_code_table[10]=538;wl_code_table[11]=334;
  wl_code_table[12]=172;wl_code_table[13]=58;wl_code_table[14]=-30;
  wl_code_table[15]=-60;
 /*  wl_table = { -60, -30, 58, 172, 334, 538, 1198, 3042 }; */
  wl_table[0]=-60;wl_table[1]=-30;wl_table[2]=58;wl_table[3]=172;
  wl_table[4]=334;wl_table[5]=538;wl_table[6]=1198;wl_table[7]=3042;
/*   ilb_table = { 2048, 2093, 2139, 2186, 2233, 2282, 2332, 2383, */
/* 		2435, 2489, 2543, 2599, 2656, 2714, 2774, 2834, */
/* 		2896, 2960, 3025, 3091, 3158, 3228, 3298, 3371, */
/* 		3444, 3520, 3597, 3676, 3756, 3838, 3922, 4008}; */
  
  ilb_table[0]=2048;ilb_table[1]=2093;ilb_table[2]=2139;ilb_table[3]=2186;
  ilb_table[4]=2233;ilb_table[5]=2282;ilb_table[6]=2332;ilb_table[7]=2383;
  ilb_table[8]=2435;ilb_table[9]=2489;ilb_table[10]=2543;ilb_table[11]=2599;
  ilb_table[12]=2656;ilb_table[13]=2714;ilb_table[14]=2774;ilb_table[15]=2834;
  ilb_table[16]=2896;ilb_table[17]=2960;ilb_table[18]=3025;ilb_table[19]=3091;
  ilb_table[20]=3158;ilb_table[21]=3228;ilb_table[22]=3298;ilb_table[23]=3371;
  ilb_table[24]=3444;ilb_table[25]=3520;ilb_table[26]=3597;ilb_table[27]=3676;
  ilb_table[28]=3756;ilb_table[29]=3838;ilb_table[30]=3922;ilb_table[31]=4008;
/*   decis_levl = { 280, 576, 880, 1200, 1520, 1864, 2208, 2584, */
/* 		 2960, 3376, 3784, 4240, 4696, 5200, 5712, 6288, */
/* 		 6864, 7520, 8184, 8968, 9752, 10712, 11664, 12896, */
/* 		 14120, 15840, 17560, 20456, 23352, 32767 }; */
  decis_levl[0]=280;decis_levl[1]=576;decis_levl[2]=880;decis_levl[3]=1200;
  decis_levl[4]=1520;decis_levl[5]=1864;decis_levl[6]=2208;decis_levl[7]=2584;
  decis_levl[8]=2960;decis_levl[9]=3376;decis_levl[10]=3784;decis_levl[11]=4240;
  decis_levl[12]=4696;decis_levl[13]=5200;decis_levl[14]=5712;decis_levl[15]=6288;
  decis_levl[16]=6864;decis_levl[17]=7520;decis_levl[18]=8184;decis_levl[19]=8968;
  decis_levl[20]=9752;decis_levl[21]=10712;decis_levl[22]=11664;decis_levl[23]=12896;
  decis_levl[24]=14120;decis_levl[25]=15840;decis_levl[26]=17560;decis_levl[27]=20456;
  decis_levl[28]=23352;decis_levl[29]=32767;
/*   quant26bt_pos = { 61, 60, 59, 58, 57, 56, 55, 54, */
/* 		    53, 52, 51, 50, 49, 48, 47, 46, */
/* 		    45, 44, 43, 42, 41, 40, 39, 38, */
/* 		    37, 36, 35, 34, 33, 32, 32}; */
  quant26bt_pos[0]=61;quant26bt_pos[1]=60;quant26bt_pos[2]=59;quant26bt_pos[3]=58;
  quant26bt_pos[4]=57;quant26bt_pos[5]=56;quant26bt_pos[6]=55;quant26bt_pos[7]=54;
  quant26bt_pos[8]=53;quant26bt_pos[9]=52;quant26bt_pos[10]=51;quant26bt_pos[11]=50;
  quant26bt_pos[12]=49;quant26bt_pos[13]=48;quant26bt_pos[14]=47;quant26bt_pos[15]=46;
  quant26bt_pos[16]=45;quant26bt_pos[17]=44;quant26bt_pos[18]=43;quant26bt_pos[19]=42;
  quant26bt_pos[20]=41;quant26bt_pos[21]=40;quant26bt_pos[22]=39;quant26bt_pos[23]=38;
  quant26bt_pos[24]=37;quant26bt_pos[25]=36;quant26bt_pos[26]=35;quant26bt_pos[27]=34;
  quant26bt_pos[28]=33;quant26bt_pos[29]=32;quant26bt_pos[30]=32;
/*   quant26bt_pos[31] = { */
/*     61, 60, 59, 58, 57, 56, 55, 54, */
/*     53, 52, 51, 50, 49, 48, 47, 46, */
/*     45, 44, 43, 42, 41, 40, 39, 38, */
/*     37, 36, 35, 34, 33, 32, 32 */
/*   }; */
  quant26bt_neg[0]=63;quant26bt_neg[1]=62;quant26bt_neg[2]=31;quant26bt_neg[3]=30;
  quant26bt_neg[4]=29;quant26bt_neg[5]=28;quant26bt_neg[6]=27;quant26bt_neg[7]=26;
  quant26bt_neg[8]=25;quant26bt_neg[9]=24;quant26bt_neg[10]=23;quant26bt_neg[11]=22;
  quant26bt_neg[12]=21;quant26bt_neg[13]=20;quant26bt_neg[14]=19;quant26bt_neg[15]=18;
  quant26bt_neg[16]=17;quant26bt_neg[17]=16;quant26bt_neg[18]=15;quant26bt_neg[19]=14;
  quant26bt_neg[20]=13;quant26bt_neg[21]=12;quant26bt_neg[22]=11;quant26bt_neg[23]=10;
  quant26bt_neg[24]=9;quant26bt_neg[25]=8;quant26bt_neg[26]=7;quant26bt_neg[27]=6;
  quant26bt_neg[28]=5;quant26bt_neg[29]=4;quant26bt_neg[30]=4;
/*   quant26bt_neg[31] = { */
/*     63, 62, 31, 30, 29, 28, 27, 26, */
/*     25, 24, 23, 22, 21, 20, 19, 18, */
/*     17, 16, 15, 14, 13, 12, 11, 10, */
/*     9, 8, 7, 6, 5, 4, 4 */
/*   }; */
  qq2_code2_table[0]=-7408;qq2_code2_table[1]=-1616;qq2_code2_table[2]=7408;
  qq2_code2_table[3]=1616;
/*   qq2_code2_table = { -7408, -1616, 7408, 1616}; */
  wh_code_table[0]=798;wh_code_table[1]=-214;wh_code_table[2]=798;wh_code_table[3]=-214;
/*   wh_code_table = { 798, -214, 798, -214 }; */
  return;
}

int my_abs(register int n)
{
 register int m;
 if (n >= 0)
   m = n;
 else
   m = -n;
 return m;
}


int my_fabs(register int n)
{
 register int f;

 if (n >= 0)
   f = n;
 else
   f = -n;
 return f;
}

int my_sin(register int rad)
{
 register int diff;
 register int app = 0;
 register int inc = 1;
 register int tmp_my_sin;

 while (rad > 2 * 3141) // ITER ?? 5
   rad = rad - 2 * 3141;

 while (rad < -2 * 3141) // ITER ?? 5
   rad = rad + 2 * 3141;
 diff = rad;
 app = diff;
 diff = (diff * (-(rad * rad))) / ((2 * inc) * (2 * inc + 1));
 app = app + diff;
 inc++;


 /* This to avoid function calls inside in a condition */
 tmp_my_sin = my_fabs(diff);
 while (tmp_my_sin >= 1) { // ITER ?? 5
   //while (my_fabs(diff) >= 1) { // ITER ?? 5
   diff = (diff * (-(rad * rad))) / ((2 * inc) * (2 * inc + 1));
   app = app + diff;
   inc++;
   tmp_my_sin = my_fabs(diff);
 }
 return app;
}

int my_cos(int rad)
{
  return (my_sin(3141 / 2 - rad));
}


int encode(register int xin1, register int xin2)
{
  register int i;
  register int *h_ptr, *tqmf_ptr, *tqmf_tmp_ptr1;
  register long int xa, xb;
  register int decis;
  register int temp_my_abs;

  h_ptr = h_tmp;
  tqmf_ptr = tqmf;
  xa = (long) (*tqmf_ptr++) * (*h_ptr++);
  xb = (long) (*tqmf_ptr++) * (*h_ptr++);
  for (i = 0; i < 10; i++) { // ITER 10
    xa = xa + (long) (*tqmf_ptr++) * (*h_ptr++);
    xb = xb + (long) (*tqmf_ptr++) * (*h_ptr++);
  }
  xa = xa + (long) (*tqmf_ptr++) * (*h_ptr++);
  xb = xb + (long) (*tqmf_ptr) * (*h_ptr++);
  tqmf_tmp_ptr1 = tqmf_ptr - 2;

  for (i = 0; i < 22; i++) // ITER 21
    *tqmf_ptr-- = *tqmf_tmp_ptr1--;

  *tqmf_ptr-- = xin1;
  *tqmf_ptr = xin2;
  
  xl = (xa + xb) >> 15;
  xh = (xa - xb) >> 15;

  szl = filtez(delay_bpl, delay_dltx);
  spl = filtep(rlt_tmp_1, al1, rlt_tmp_2, al2);
  sl = szl + spl;
  el = xl - sl;
  il = quantl(el, detl);
  dlt = ((long) detl * qq4_code4_table[il >> 2]) >> 15;
  nbl = logscl(il, nbl);
  detl = scalel(nbl, 8);
  plt = dlt + szl;
  upzero(dlt, delay_dltx, delay_bpl);
  al2 = uppol2(al1, al2, plt, plt_tmp_1, plt_tmp_2);
  al1 = uppol1(al1, al2, plt, plt_tmp_1);
  rlt = sl + dlt;
  rlt_tmp_2 = rlt_tmp_1;
  rlt_tmp_1 = rlt;
  plt_tmp_2 = plt_tmp_1;
  plt_tmp_1 = plt;
  szh = filtez(delay_bph, delay_dhx);
  sph = filtep(rh_tmp_1, ah_tmp_1, rh_tmp_2, ah_tmp_2);
  sh = sph + szh;
  eh = xh - sh;
  if (eh >= 0) {
    ih = 3;
  } else {
    ih = 1;
  }

  // Replaced by Jorge
  //  decis = (564L * (long) deth) >> 12L;
  decis = (564 * (long) deth) >> 12;

  temp_my_abs = my_abs(eh); /* Replaced by Jorge */ 
  /*if (my_abs(eh) > decis) */
  if (temp_my_abs > decis)
    ih--;

  // Replaced by Jorge
  // dh = ((long) deth * qq2_code2_table[ih]) >> 15L;
  dh = ((long) deth * qq2_code2_table[ih]) >> 15;
  nbh = logsch(ih, nbh);
  deth = scalel(nbh, 10);
  ph = dh + szh;
  upzero(dh, delay_dhx, delay_bph);
  ah_tmp_2 = uppol2(ah_tmp_1, ah_tmp_2, ph, ph_tmp_1, ph_tmp_2);
  ah_tmp_1 = uppol1(ah_tmp_1, ah_tmp_2, ph, ph_tmp_1);
  yh = sh + dh;
  rh_tmp_2 = rh_tmp_1;
  rh_tmp_1 = yh;
  ph_tmp_2 = ph_tmp_1;
  ph_tmp_1 = ph;

  return (il | (ih << 6));
}


void decode(register int input)
{
  register int i;
  register long int xa1, xa2;
  register int *h_ptr, *ac_ptr, *ac_tmp_ptr1, *ad_ptr, *ad_ptr1;


  ilr = input & 33;
  // Replaced by Jorge
  // ilr = input & 0x3f;
  ih = input >> 6;


  dec_szl = filtez(dec_del_bpl, dec_del_dltx);

  dec_spl = filtep(dec_rlt_tmp_1, dec_al1, dec_rlt_tmp_2, dec_al2);
  dec_sl = dec_spl + dec_szl;

  dec_dlt = ((long) dec_detl * qq4_code4_table[ilr >> 2]) >> 15;

  dl = ((long) dec_detl * qq6_code6_table[il]) >> 15;
  rl = dl + dec_sl;

  dec_nbl = logscl(ilr, dec_nbl);

  dec_detl = scalel(dec_nbl, 8);


  dec_plt = dec_dlt + dec_szl;

  upzero(dec_dlt, dec_del_dltx, dec_del_bpl);

  dec_al2 = uppol2(dec_al1, dec_al2, dec_plt, dec_plt_tmp_1, dec_plt_tmp_2);

  dec_al1 = uppol1(dec_al1, dec_al2, dec_plt, dec_plt_tmp_1);

  dec_rlt = dec_sl + dec_dlt;

  dec_rlt_tmp_2 = dec_rlt_tmp_1;
  dec_rlt_tmp_1 = dec_rlt;
  dec_plt_tmp_2 = dec_plt_tmp_1;
  dec_plt_tmp_1 = dec_plt;


  dec_szh = filtez(dec_del_bph, dec_del_dhx);

  dec_sph = filtep(dec_rh_tmp_1, dec_ah_tmp_1, dec_rh_tmp_2, dec_ah_tmp_2);

  dec_sh = dec_sph + dec_szh;

  // Replaced by Jorge
  //dec_dh = ((long) dec_deth * qq2_code2_table[ih]) >> 15L;
  dec_dh = ((long) dec_deth * qq2_code2_table[ih]) >> 15;

  dec_nbh = logsch(ih, dec_nbh);

  dec_deth = scalel(dec_nbh, 10);

  dec_ph = dec_dh + dec_szh;

  upzero(dec_dh, dec_del_dhx, dec_del_bph);

  dec_ah_tmp_2 = uppol2(dec_ah_tmp_1, dec_ah_tmp_2, dec_ph, dec_ph_tmp_1, dec_ph_tmp_2); /* here */

  dec_ah_tmp_1 = uppol1(dec_ah_tmp_1, dec_ah_tmp_2, dec_ph, dec_ph_tmp_1);

  rh = dec_sh + dec_dh;

  dec_rh_tmp_2 = dec_rh_tmp_1;
  dec_rh_tmp_1 = rh;
  dec_ph_tmp_2 = dec_ph_tmp_1;
  dec_ph_tmp_1 = dec_ph;

  xd = rl - rh;
  xs = rl + rh;

  h_ptr = h_tmp;
  ac_ptr = accumc;
  ad_ptr = accumd;
  xa1 = (long) xd *(*h_ptr++);
  xa2 = (long) xs *(*h_ptr++);

  for (i = 0; i < 10; i++) { // ITER 10
    xa1 = xa1 + (long) (*ac_ptr++) * (*h_ptr++);
    xa2 = xa2 + (long) (*ad_ptr++) * (*h_ptr++);
  }

  xa1 = xa1 + (long) (*ac_ptr) * (*h_ptr++);
  xa2 = xa2 + (long) (*ad_ptr) * (*h_ptr++);

  xout1 = xa1 >> 14;
  xout2 = xa2 >> 14;

  ac_tmp_ptr1 = ac_ptr - 1;
  ad_ptr1 = ad_ptr - 1;
  for (i = 0; i < 10; i++) { // ITER 10
    *ac_ptr-- = *ac_tmp_ptr1--;
    *ad_ptr-- = *ad_ptr1--;
  }
  *ac_ptr = xd;
  *ad_ptr = xs;

  return;
}


void reset()
{
  int i;

  // Replaced multiple assignments (by Jorge)
/*   detl = dec_detl = 32; */
/*   deth = dec_deth = 8; */
/*   nbl = al1 = al2 = plt_tmp_1 = plt_tmp_2 = rlt_tmp_1 = rlt_tmp_2 = 0; */
/*   nbh = ah_tmp_1 = ah_tmp_2 = ph_tmp_1 = ph_tmp_2 = rh_tmp_1 = rh_tmp_2 = 0; */
/*   dec_nbl = dec_al1 = dec_al2 = dec_plt_tmp_1 = dec_plt_tmp_2 = dec_rlt_tmp_1 = dec_rlt_tmp_2 = 0; */
/*   dec_nbh = dec_ah_tmp_1 = dec_ah_tmp_2 = dec_ph_tmp_1 = dec_ph_tmp_2 = dec_rh_tmp_1 = dec_rh_tmp_2 = 0; */
  dec_detl = 32;
  detl = 32;

  dec_deth = 8;
  deth = 8;

  rlt_tmp_2 = 0;
  rlt_tmp_1 = 0;
  plt_tmp_2 = 0;
  plt_tmp_1 = 0;
  al2 = 0;
  al1 = 0 ;
  nbl = 0;

  rh_tmp_2 = 0;
  rh_tmp_1 = 0;
  ph_tmp_2 = 0;
  ph_tmp_1 = 0;
  ah_tmp_2 = 0;
  ah_tmp_1 = 0;
  nbh = 0;

  dec_rlt_tmp_2 = 0;
  dec_rlt_tmp_1 = 0;
  dec_plt_tmp_2 = 0;
  dec_plt_tmp_1 = 0;
  dec_al2  = 0;
  dec_al1  = 0;
  dec_nbl  = 0;

  dec_rh_tmp_2 = 0;
  dec_rh_tmp_1 = 0;
  dec_ph_tmp_2 = 0;
  dec_ph_tmp_1 = 0;
  dec_ah_tmp_2 = 0; 
  dec_ah_tmp_1 = 0; 
  dec_nbh = 0;

  for (i = 0; i < 6; i++) { // ITER 6
    delay_dltx[i] = 0;
    delay_dhx[i] = 0;
    dec_del_dltx[i] = 0;
    dec_del_dhx[i] = 0;
  }

  for (i = 0; i < 6; i++) {  // ITER 6
    delay_bpl[i] = 0;
    delay_bph[i] = 0;
    dec_del_bpl[i] = 0;
    dec_del_bph[i] = 0;
  }

  for (i = 0; i < 23; i++) // ITER 23
    tqmf[i] = 0;

  for (i = 0; i < 11; i++) { // ITER 11
    accumc[i] = 0;
    accumd[i] = 0;
  }
  return;
}

int filtez(register int *bpl, register int *dlt_filtez)
{
  register int i;
  register long int zl;
  zl = (long) (*bpl++) * (*dlt_filtez++);

  for (i = 1; i < 6; i++)  // ITER 6
    zl = zl + (long) (*bpl++) * (*dlt_filtez++);

  return ((int) (zl >> 14));
}

int filtep(register int rlt_tmp_1_filtep, register int al1_filtep, register int rlt_tmp_2_filtep, register int al2_filtep)
{
  register long int pl, pl_tmp_2;
  pl = 2 * rlt_tmp_1_filtep;
  pl = (long) al1_filtep *pl;
  pl_tmp_2 = 2 * rlt_tmp_2_filtep;
  pl = pl + (long) al2_filtep *pl_tmp_2;
  return ((int) (pl >> 15));
}


int quantl(int el_quantl, int detl_quantl)
{
  register int ril, mil;
  register long int wd, decis;

  wd = my_abs(el_quantl);

  for (mil = 0; mil < 30; mil++) { // ITER 30
    // Commented by Jorge
    // decis = (decis_levl[mil] * (long) detl_quantl) >> 15L;
    decis = (decis_levl[mil] * (long) detl_quantl) >> 15;
    if (wd <= decis)
      break;
  }

  if (el_quantl >= 0)
    ril = quant26bt_pos[mil];
  else
    ril = quant26bt_neg[mil];
  return (ril);
}

int logscl(int il_logscl, int nbl_logscl)
{
  register long int wd;
  wd = ((long) nbl_logscl * 127L) >> 7L;
   nbl_logscl = (int) wd + wl_code_table[il_logscl >> 2];
  if (nbl_logscl < 0)
    nbl_logscl = 0;
  if (nbl_logscl > 18432)
    nbl_logscl = 18432;
  return (nbl_logscl);
}

int scalel(int nbl_scalel, int shift_constant)
{
  register int wd1, wd2, wd3;
  wd1 = (nbl_scalel >> 6) & 31;
  wd2 = nbl_scalel >> 11;
  wd3 = ilb_table[wd1] >> (shift_constant + 1 - wd2);
  return (wd3 << 3);
}

void upzero(int dlt_upzero, int dlti[]/*int *dlti*/, int bli[]/*int *bli*/)
{
  register int i, wd2, wd3;

  if (dlt_upzero == 0) {
    for (i = 0; i < 6; i++) {  // ITER 6
      // Commented by Jorge
      //bli[i] = (int) ((255L * bli[i]) >> 8L);
      bli[i] = (int) ((255 * bli[i]) >> 8);
      
    }
  } else {
    for (i = 0; i < 6; i++) { // ITER 6
      if ((long) dlt_upzero * dlti[i] >= 0)
	wd2 = 128;
      else
	wd2 = -128;
      // Commented by Jorge
      // wd3 = (int) ((255L * bli[i]) >> 8L);
      wd3 = (int) ((255 * bli[i]) >> 8 );
      
      bli[i] = wd2 + wd3;
    }
  }

  dlti[5] = dlti[4];
  dlti[4] = dlti[3];
  dlti[3] = dlti[2];
  dlti[1] = dlti[0];
  dlti[0] = dlt_upzero;
  return;
}

int uppol2(int al1_uppol2, int al2_uppol2, int plt_uppol2, 
	   int plt_tmp_1_uppol2, int plt_tmp_2_uppol2)
{
  register long int wd2, wd4;
  register int apl2;
  // Commented by Jorge
  //wd2 = 4L * (long) al1_uppol2;
  wd2 = 4 * (long) al1_uppol2;
  // Commented by Jorge
  // if ((long) plt_uppol2 * plt_tmp_1_uppol2 >= 0L)
  if ((long) plt_uppol2 * plt_tmp_1_uppol2 >= 0)
    wd2 = -wd2;
  wd2 = wd2 >> 7;
  // Commented by Jorge
  // if ((long) plt_uppol2 * plt_tmp_2_uppol2 >= 0L) {
  if ((long) plt_uppol2 * plt_tmp_2_uppol2 >= 0) {
    wd4 = wd2 + 128;
  } else {
    wd4 = wd2 - 128;
  }
  // Commented by Jorge
  // apl2 = wd4 + (127L * (long) al2_uppol2 >> 7L);
  apl2 = wd4 + (127 * (long) al2_uppol2 >> 7);

  if (apl2 > 12288)
    apl2 = 12288;
  if (apl2 < -12288)
    apl2 = -12288;
  return (apl2);
}

int uppol1(int al1_uppol1, int apl2_uppol1, int plt_uppol2, int plt_tmp_1_uppol2){
  long int wd2;
  int wd3, apl1;

  // Commented by Jorge
  // wd2 = ((long) al1_uppol1 * 255L) >> 8L;
  // if ((long) plt_uppol2 * plt_tmp_1_uppol2 >= 0L) {
  wd2 = ((long) al1_uppol1 * 255) >> 8;
  if ((long) plt_uppol2 * plt_tmp_1_uppol2 >= 0) {
    apl1 = (int) wd2 + 192;
  } else {
    apl1 = (int) wd2 - 192;
  }

  wd3 = 15360 - apl2_uppol1;
  if (apl1 > wd3)
    apl1 = wd3;
  if (apl1 < -wd3)
    apl1 = -wd3;
  return (apl1);
}

int logsch(int ih_logsch, int nbh_logsch)
{
  int wd;
  // Commented by Jorge
  // wd = ((long) nbh_logsch * 127L) >> 7L;
  wd = ((long) nbh_logsch * 127) >> 7;
  nbh_logsch = wd + wh_code_table[ih_logsch];
  if (nbh_logsch < 0)
    nbh_logsch = 0;
  if (nbh_logsch > 22528)
    nbh_logsch = 22528;
  return (nbh_logsch);
}

int main()
{
  register int i, j, f ;
  int test_data[6], compressed[3], result[6];

  initialize_global();

  reset();
  j = 10;
  f = 2000;
  for (i = 0; i < 3; i++) { // ITER 3
    test_data[i] = (int) j *my_cos(f * 3141 * i);
  }

  for (i = 0; i < 4; i = i + 2) // ITER 2
    compressed[i / 2] = encode(test_data[i], test_data[i + 1]);
  for (i = 0; i < 4; i = i + 2) { // ITER 2
    decode(compressed[i / 2]);
    result[i] = xout1;
    result[i + 1] = xout2;
  }

  return result[i] + result[i + 1];
}
