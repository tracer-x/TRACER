/* Table of index changes */
const int IndexTable[16];
/* const int IndexTable[16] = { */
/*   255, 255, 255, 255, 2, 4, 6, 8, */
/*   255, 255, 255, 255, 2, 4, 6, 8 */
/* }; */

/* Quantizer step size lookup table */
const long SetSizeTable[89];
/* const long SetSizeTable[89] = { */
/*   7, 8, 9, 10, 11, 12, 13, 14, 16, 17, */
/*   19, 21, 23, 25, 28, 31, 34, 37, 41, 45, */
/*   50, 55, 60, 66, 73, 80, 88, 97, 107, 118, */
/*   130, 143, 157, 173, 190, 209, 230, 253, 279, 307, */
/*   337, 371, 408, 449, 494, 544, 598, 658, 724, 796, */
/*   876, 963, 1060, 1166, 1282, 1411, 1552, 1707, 1878, 2066, */
/*   2272, 2499, 2749, 3024, 3327, 3660, 4026, 4428, 4871, 5358, */
/*   5894, 6484, 7132, 7845, 8630, 9493, 10442, 11487, 12635, 13899, */
/*   15289, 16818, 18500, 20350, 22385, 24623, 27086, 29794, 32767 */
/* }; */

void init_global_arrays(){
  SetSizeTable[0] = 7;SetSizeTable[1] = 8;SetSizeTable[2] =9 ;
  SetSizeTable[3] = 10;SetSizeTable[4] = 11;SetSizeTable[5] = 12;
  SetSizeTable[6] = 13;SetSizeTable[7] = 14;SetSizeTable[8] = 16;
  SetSizeTable[9] = 17;SetSizeTable[10] = 19;SetSizeTable[11] = 21;
  SetSizeTable[12] = 23;SetSizeTable[13] = 25;SetSizeTable[14] = 28;
  SetSizeTable[15] = 31;SetSizeTable[16] = 34;SetSizeTable[17] = 37;
  SetSizeTable[18] = 41;SetSizeTable[19] = 45;SetSizeTable[20] = 50;
  SetSizeTable[21] = 55;SetSizeTable[22] = 60;SetSizeTable[23] = 66;
  SetSizeTable[24] = 73;SetSizeTable[25] = 80;SetSizeTable[26] = 88;
  SetSizeTable[27] = 97;SetSizeTable[28] = 107;SetSizeTable[29] = 118;
  SetSizeTable[30] = 130;SetSizeTable[31] = 143;SetSizeTable[32] =157 ;
  SetSizeTable[33] = 173;SetSizeTable[34] = 190;SetSizeTable[35] =209 ;
  SetSizeTable[36] = 230;SetSizeTable[37] = 253;SetSizeTable[38] =279 ;
  SetSizeTable[39] = 307;SetSizeTable[40] = 337;SetSizeTable[41] =371 ;
  SetSizeTable[42] = 408;SetSizeTable[43] = 449;SetSizeTable[44] =494 ;  
  SetSizeTable[45] =544 ;
  SetSizeTable[46] = 598;SetSizeTable[47] = 658;SetSizeTable[48] = 724;
  SetSizeTable[49] = 796;SetSizeTable[50] = 876;SetSizeTable[51] = 963;
  SetSizeTable[52] = 1060;SetSizeTable[53] = 1166;SetSizeTable[54] =1282 ;
  SetSizeTable[55] = 1411;SetSizeTable[56] = 1552;SetSizeTable[57] =1707 ;
  SetSizeTable[58] = 1878;SetSizeTable[59] = 2066;SetSizeTable[60] = 2272;
  SetSizeTable[61] = 2499;SetSizeTable[62] = 2749;SetSizeTable[63] = 3024;
  SetSizeTable[64] = 3327;SetSizeTable[65] = 3660;SetSizeTable[66] = 4026;
  SetSizeTable[67] = 4428;SetSizeTable[68] = 4871;SetSizeTable[69] = 5358;
  SetSizeTable[70] = 5894;SetSizeTable[71] = 6484;SetSizeTable[72] = 7132;
  SetSizeTable[73] = 7845;SetSizeTable[74] = 8630;SetSizeTable[75] = 9493;
  SetSizeTable[76] = 10442;SetSizeTable[77] =11487 ;SetSizeTable[78] = 12635;
  SetSizeTable[79] = 13899;SetSizeTable[80] =15289 ;SetSizeTable[81] = 16818;
  SetSizeTable[82] = 18500;SetSizeTable[83] = 20350;SetSizeTable[84] =22385 ;
  SetSizeTable[85] = 24623;SetSizeTable[86] = 27086;SetSizeTable[87] =29794 ;
  SetSizeTable[88] = 32767;

  IndexTable[0]=255 ;   IndexTable[1]= 255;    IndexTable[2]=255 ; 
  IndexTable[3]= 255;   IndexTable[4]= 2;    IndexTable[5]= 4; 
  IndexTable[6]= 6;   IndexTable[7]= 8;    IndexTable[8]= 255; 
  IndexTable[9]=255 ;   IndexTable[10]=255 ;    IndexTable[11]= 255; 
  IndexTable[12]= 2;   IndexTable[13]= 4;    IndexTable[14]= 6;   IndexTable[15]= 8;   

  return;

}

signed long diff;          /* Difference between sample and predicted sample */
long step;                 /* Quantizer step size */
signed long predsample;    /* Output of ADPCM predictor */
signed long diffq;         /* Dequantized predicted difference */
int index;                 /* Index into step size table */
int state_prevsample;
int state_previndex;

/*****************************************************************************
 * ADPCMEncoder - ADPCM encoder routine                                      *
 *****************************************************************************
 * Input Variables:                                                          *
 *         signed long sample - 16-bit signed speech sample                  *
 * Return Variable:                                                          *
 *         char - 8-bit number containing the 4-bit ADPCM code               *
 *****************************************************************************/

int main()
{
  signed long sample;
  int code;                /* ADPCM output value */
  int tempstep;            /* Temporary step size */


  init_global_arrays;

  /* Restore previous values of predicted sample and quantizer step
     size index
  */
  predsample = state_prevsample;
  index = state_previndex;
  step = SetSizeTable[index];

  /* Compute the difference between the actual sample (sample) and the
     the predicted sample (predsample)
  */
  diff = sample - predsample;
  if (diff >= 0)
    code = 0;
  else {
    code = 8;
    diff = -diff;
  }

  /* Quantize the difference into the 4-bit ADPCM code using the
     the quantizer step size
  */
  tempstep = step;
  if (diff >= tempstep) {
    code = code + 4;
    diff = diff - tempstep;
  }
  tempstep = tempstep / 2;
  if (diff >= tempstep) {
    code = code + 2;
    diff = diff - tempstep;
  }
  tempstep = tempstep / 2;
  if (diff >= tempstep)
    code = code + 1;

  /* Inverse quantize the ADPCM code into a predicted difference
     using the quantizer step size
  */
  diffq = step / 8;
  if (code >= 4)
    diffq = diffq + step;
  if (code >= 2)
    diffq = diffq + step / 2;
  if (code >= 1)
    diffq = diffq + step / 4;

  /* Fixed predictor computes new predicted sample by adding the
     old predicted sample to predicted difference
  */
  if (code >= 8)
    predsample = predsample - diffq;
  else
    predsample = predsample + diffq;

  /* Check for overflow of the new predicted sample
   */
  if (predsample > 32767)
    predsample = 32767;
  else if (predsample < - 32768)
    predsample = -32768;

  /* Find new quantizer stepsize index by adding the old index
     to a table lookup using the ADPCM code
  */
  index = index + IndexTable[code];

  /* Check for overflow of the new quantizer step size index
   */
  if (index < 0)
    index = 0;
  if (index > 88)
    index = 88;

  /* Save the predicted sample and quantizer step size index for
     next iteration
  */
  state_prevsample = predsample;
  state_previndex = index;

  /* Return the new ADPCM code */
  return code;
}
