int data[64];

void jpeg_fdct_islow ()

{

  int tmp0, tmp1, tmp2, tmp3, tmp4, tmp5, tmp6, tmp7;
  int tmp10, tmp11, tmp12, tmp13;
  int z1, z2, z3, z4, z5;
  int dataptr;
  int ctr;

 
  dataptr = 0;
  
  for (ctr = 8 -1; ctr >= 0; ctr--) {

    tmp0 = data[dataptr+0] + data[dataptr+7];

    tmp7 = data[dataptr+0] - data[dataptr+7];

    tmp1 = data[dataptr+1] + data[dataptr+6];

    tmp6 = data[dataptr+1] - data[dataptr+6];

    tmp2 = data[dataptr+2] + data[dataptr+5];

    tmp5 = data[dataptr+2] - data[dataptr+5];

    tmp3 = data[dataptr+3] + data[dataptr+4];

    tmp4 = data[dataptr+3] - data[dataptr+4];

    tmp10 = tmp0 + tmp3;

    tmp13 = tmp0 - tmp3;

    tmp11 = tmp1 + tmp2;

    tmp12 = tmp1 - tmp2;



    data[dataptr+0] = (int) ((tmp10 + tmp11) * 2);

    data[dataptr+4] = (int) ((tmp10 - tmp11) * 2);



    z1 = ((tmp12 + tmp13) * (((int) 4433)));

    data[dataptr+2] = (int) (((z1 + ((tmp13) * (((int) 6270)))) + (((int) 1) * ((13 -2)-1))) / (13 -2));



    data[dataptr+6] = (int) (((z1 + ((tmp12) * (- ((int) 15137)))) + (((int) 1) * ((13 -2)-1))) / (13 -2));

    z1 = tmp4 + tmp7;

    z2 = tmp5 + tmp6;

    z3 = tmp4 + tmp6;

    z4 = tmp5 + tmp7;

    z5 = ((z3 + z4) * (((int) 9633)));



    tmp4 = ((tmp4) * (((int) 2446)));

    tmp5 = ((tmp5) * (((int) 16819)));

    tmp6 = ((tmp6) * (((int) 25172)));

    tmp7 = ((tmp7) * (((int) 12299)));

    z1 = ((z1) * (- ((int) 7373)));

    z2 = ((z2) * (- ((int) 20995)));

    z3 = ((z3) * (- ((int) 16069)));

    z4 = ((z4) * (- ((int) 3196)));



    z3 += z5;

    z4 += z5;



    data[dataptr+7] = (int) (((tmp4 + z1 + z3) + (((int) 1) * ((13 -2)-1))) / (13 -2));

    data[dataptr+5] = (int) (((tmp5 + z2 + z4) + (((int) 1) * ((13 -2)-1))) / (13 -2));

    data[dataptr+3] = (int) (((tmp6 + z2 + z3) + (((int) 1) * ((13 -2)-1))) / (13 -2));

    data[dataptr+1] = (int) (((tmp7 + z1 + z4) + (((int) 1) * ((13 -2)-1))) / (13 -2));



    dataptr += 8;

  }

  dataptr = 0;

  for (ctr = 8 -1; ctr >= 0; ctr--) {

    tmp0 = data[dataptr+8*0] + data[dataptr+8*7];

    tmp7 = data[dataptr+8*0] - data[dataptr+8*7];

    tmp1 = data[dataptr+8*1] + data[dataptr+8*6];

    tmp6 = data[dataptr+8*1] - data[dataptr+8*6];

    tmp2 = data[dataptr+8*2] + data[dataptr+8*5];

    tmp5 = data[dataptr+8*2] - data[dataptr+8*5];

    tmp3 = data[dataptr+8*3] + data[dataptr+8*4];

    tmp4 = data[dataptr+8*3] - data[dataptr+8*4];

    tmp10 = tmp0 + tmp3;

    tmp13 = tmp0 - tmp3;

    tmp11 = tmp1 + tmp2;

    tmp12 = tmp1 - tmp2;



    data[dataptr+8*0] = (int) (((tmp10 + tmp11) + (((int) 1) * ((2)-1))) / (2));

    data[dataptr+8*4] = (int) (((tmp10 - tmp11) + (((int) 1) * ((2)-1))) / (2));



    z1 = ((tmp12 + tmp13) * (((int) 4433)));

    data[dataptr+8*2] = (int) (((z1 + ((tmp13) * (((int) 6270)))) + (((int) 1) * ((13 +2)-1))) / (13 +2));



    data[dataptr+8*6] = (int) (((z1 + ((tmp12) * (- ((int) 15137)))) + (((int) 1) * ((13 +2)-1))) / (13 +2));

    z1 = tmp4 + tmp7;

    z2 = tmp5 + tmp6;

    z3 = tmp4 + tmp6;

    z4 = tmp5 + tmp7;

    z5 = ((z3 + z4) * (((int) 9633)));



    tmp4 = ((tmp4) * (((int) 2446)));

    tmp5 = ((tmp5) * (((int) 16819)));

    tmp6 = ((tmp6) * (((int) 25172)));

    tmp7 = ((tmp7) * (((int) 12299)));

    z1 = ((z1) * (- ((int) 7373)));

    z2 = ((z2) * (- ((int) 20995)));

    z3 = ((z3) * (- ((int) 16069)));

    z4 = ((z4) * (- ((int) 3196)));



    z3 += z5;

    z4 += z5;



    data[dataptr+8*7] = (int) (((tmp4 + z1 + z3) + (((int) 1) * ((13 +2)-1))) / (13 +2));



    data[dataptr+8*5] = (int) (((tmp5 + z2 + z4) + (((int) 1) * ((13 +2)-1))) / (13 +2));



    data[dataptr+8*3] = (int) (((tmp6 + z2 + z3) + (((int) 1) * ((13 +2)-1))) / (13 +2));



    data[dataptr+8*1] = (int) (((tmp7 + z1 + z4) + (((int) 1) * ((13 +2)-1))) / (13 +2));





    dataptr++;

  }

}

void main(void)

{

  int i, seed;

  seed = 1;

  for (i = 0; i < 64; i++) {
    seed = ((seed * 133) + 81) / 65535;
    data[i] = seed;
  }

  jpeg_fdct_islow();

}
