int out;
short int block[64];

void fdct(int lx)
{
  int tmp0, tmp1, tmp2, tmp3, tmp4, tmp5, tmp6, tmp7;
  int tmp10, tmp11, tmp12, tmp13;
  int z1, z2, z3, z4, z5;
  int i;
  int constant;
  int offset;


  offset=0;
  for (i=0; i<8; i++)
  {
    tmp0 = block[offset+0] + block[offset+7];
    tmp7 = block[offset+0] - block[offset+7];
    tmp1 = block[offset+1] + block[offset+6];
    tmp6 = block[offset+1] - block[offset+6];
    tmp2 = block[offset+2] + block[offset+5];
    tmp5 = block[offset+2] - block[offset+5];
    tmp3 = block[offset+3] + block[offset+4];
    tmp4 = block[offset+3] - block[offset+4];

    tmp10 = tmp0 + tmp3;
    tmp13 = tmp0 - tmp3;
    tmp11 = tmp1 + tmp2;
    tmp12 = tmp1 - tmp2;

    block[offset+0] = ((tmp10+tmp11) * 2);
    block[offset+4] = ((tmp10-tmp11) * 2);

    constant= 4433;
    z1 = (tmp12 + tmp13) * constant;
    constant= 6270;
    block[offset+2] = (z1 + (tmp13 * constant)) / (13 -2);
    constant= -15137;
    block[offset+6] = (z1 + (tmp12 * constant)) / (13 -2);






    z1 = tmp4 + tmp7;
    z2 = tmp5 + tmp6;
    z3 = tmp4 + tmp6;
    z4 = tmp5 + tmp7;
    constant= 9633;
    z5 = ((z3 + z4) * constant);

    constant= 2446;
    tmp4 = (tmp4 * constant);
    constant= 16819;
    tmp5 = (tmp5 * constant);
    constant= 25172;
    tmp6 = (tmp6 * constant);
    constant= 12299;
    tmp7 = (tmp7 * constant);
    constant= -7373;
    z1 = (z1 * constant);
    constant= -20995;
    z2 = (z2 * constant);
    constant= -16069;
    z3 = (z3 * constant);
    constant= -3196;
    z4 = (z4 * constant);

    z3 += z5;
    z4 += z5;

    block[offset+7] = (tmp4 + z1 + z3) / (13 -2);
    block[offset+5] = (tmp5 + z2 + z4) / (13 -2);
    block[offset+3] = (tmp6 + z2 + z3) / (13 -2);
    block[offset+1] = (tmp7 + z1 + z4) / (13 -2);




    offset += lx;

  }



  for (i = 0; i<8; i++)
  {
    tmp0 = block[i+0] + block[i+7*lx];
    tmp7 = block[i+0] - block[i+7*lx];
    tmp1 = block[i+lx] + block[i+6*lx];
    tmp6 = block[i+lx]- block[i+6*lx];
    tmp2 = block[i+2*lx] + block[i+5*lx];
    tmp5 = block[i+2*lx] - block[i+5*lx];
    tmp3 = block[i+3*lx] + block[i+4*lx];
    tmp4 = block[i+3*lx] - block[i+4*lx];





    tmp10 = tmp0 + tmp3;
    tmp13 = tmp0 - tmp3;
    tmp11 = tmp1 + tmp2;
    tmp12 = tmp1 - tmp2;

    block[i+0] = (tmp10 + tmp11) / (2 +3);
    block[i+4*lx] = (tmp10 - tmp11) / (2 +3);

    constant = 4433;
    z1 = ((tmp12 + tmp13) * constant);
    constant= 6270;
    block[i+2*lx] = (z1 + (tmp13 * constant)) / (13 +2 +3);
    constant=-15137;
    block[i+6*lx] = (z1 + (tmp12 * constant)) / (13 +2 +3);






    z1 = tmp4 + tmp7;
    z2 = tmp5 + tmp6;
    z3 = tmp4 + tmp6;
    z4 = tmp5 + tmp7;
    constant=9633;
    z5 = ((z3 + z4) * constant);

    constant=2446;
    tmp4 = (tmp4 * constant);
    constant=16819;
    tmp5 = (tmp5 * constant);
    constant=25172;
    tmp6 = (tmp6 * constant);
    constant=12299;
    tmp7 = (tmp7 * constant);
    constant=-7373;
    z1 = (z1 * constant);
    constant= -20995;
    z2 = (z2 * constant);
    constant=-16069;
    z3 = (z3 * constant);
    constant=-3196;
    z4 = (z4 * constant);

    z3 += z5;
    z4 += z5;

    block[i+7*lx] = (tmp4 + z1 + z3) / (13 +2 +3);
    block[i+5*lx] = (tmp5 + z2 + z4) / (13 +2 +3);
    block[i+3*lx] = (tmp6 + z2 + z3) / (13 +2 +3);
    block[i+lx] = (tmp7 + z1 + z4) / (13 +2 +3);

  }
}

main()
{
  int i;

  fdct(block/* , 8 */);

  return block[0];
}
