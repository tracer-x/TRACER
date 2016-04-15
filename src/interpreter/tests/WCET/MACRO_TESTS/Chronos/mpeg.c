/* Begin commented by Jorge */
//#include <stdlib.h>
//void exit(int);
/* End commented by Jorge */

int clock;
int inbit;
int isinbit;
int isfull;
int outbit;
int isoutbit;

//
//type block_type is array(0 to 63) of integer;   // Type of a block
//type storage_type is array(0 to 3071) of integer;   // 2 Picture storage
//

int curr_block[64];
int pred_block[64];
int temp_block[64];

int picture_type;
int mb_type;
int b_num;

int scan[64];
int intra_quant[64];
int non_intra_quant[64];

int quantizer_scale;
int past_intra_address;
int macroblock_address;

int dct_zz[64];

int dct_dc_differential;
int dct_dc_y_past ;
int dct_dc_cb_past;
int dct_dc_cr_past;

int idct_coeff[64];

int set_prev_values;

int is_for_info;

int full_pel_forward_vector;
int forward_f_code;
int forward_r_size;
int forward_f;

int complement_horizontal_forward_r;
int complement_vertical_forward_r;

int motion_horizontal_forward_code;
int motion_horizontal_forward_r;
int motion_vertical_forward_code;
int motion_vertical_forward_r;

int recon_right_for_prev;
int recon_down_for_prev;

int is_back_info;

int full_pel_backward_vector;
int backward_f_code;
int backward_r_size;
int backward_f;

int complement_horizontal_backward_r;
int complement_vertical_backward_r;


int motion_horizontal_backward_code;
int motion_horizontal_backward_r;
int motion_vertical_backward_code;
int motion_vertical_backward_r;

int recon_right_back_prev;
int recon_down_back_prev;

//
////////////////////////////////////////////////-
//// STORAGE-VARIABLES                     //
//// =================                     //
//// These are variables that              //
//// are used in conjunctionthe STORAGE-block. //
////////////////////////////////////////////////-
//
int storage[64];

/* Commented by Jorge */
//int low_picture_address = 0; 
//int high_picture_address = 24;

int previous_picture/*  =0 */;
int future_picture/*  = 24 */;

//
//////////////////////////////////////////////////-
//// BUFFER-VARIABLES                        //
//// ================                        //
//// The following variables are used to     //
//// communicate with the inbuffer and outbuffer //
//////////////////////////////////////////////////-
//
int getinbuffer;
int getbits;
int to_receive;
int look_only;

int setoutbuffer;
int putbits;
int to_transmit;

//
////////////////////////////////////////////////
// VLDCONTROL-VARIABLES                   //
// ====================                   //
// These variables are used in the vldcontrol //
// behavior, to keep track of the last state. //
// Also used for the VLD itself.          //
////////////////////////////////////////////////

////////////////////////////////////////////////////////-
// VLD-types; length and bits of the possible vld-bits //
////////////////////////////////////////////////////////-
//type vld_int_array_type is array(0 to 49) of integer;
//type vld_bit_array_type is array(0 to 49) of bit_vector(0 to 31);
//

int data_type;
int data_stat;

int reading_zz;
int run;
int level;

int is_mb_quant;
int is_mb_intra;

int vld_length[50];
int vld_bits[50];

int mb_inc[50];

int table2b2aq[50];
int table2b2bq[50];
int table2b2cq[50];

int table2b2af[50];
int table2b2bf[50];
int table2b2cf[50];

int table2b2ab[50];
int table2b2bb[50];
int table2b2cb[50];

int table2b2ai[50];
int table2b2bi[50];
int table2b2ci[50];

int table2b4[50];

int table2b5a[50];
int table2b5b[50];



int right_little;
int right_big ;
int down_little;
int down_big ;

int right_for;
int down_for;
int right_half_for;
int down_half_for;
int right_back ;
int down_back ;
int right_half_back;
int down_half_back;

int min,max;
int new_vector;

int recon_right_for;
int recon_down_for;
int recon_right_back;
int recon_down_back;

int pred_temp_bit_vector;

int b_00 ;
int b_01 ;
int b_10;

int p_i0;
int p_i1;

int p_j0;
int p_j1;

int count;
int vld_temp;
int temp;

int read_done;
int read_int;
int vld_found;
int vld_size;

/* void init(); */
/* void execute(); */

////////////////////////////////////////////////////////////////////
// INIT: Initialize                                           //
// ================                                           //
// When the simulation is starting (power put on chip) there are  //
// some initialization that have to take place. Some of the init- //
// ializations are here solely for simulation purposes, like the  //
// initialization of the IDCT-coefficients ROM, and others need   //
// to be implemented.                                         //
////////////////////////////////////////////////////////////////////
//

void init()
{
 int i;

 // Begin added by Jorge
 previous_picture =0;
 future_picture = 24;
 // End added by Jorge 

 getbits=0;
 to_receive=-1;
 
 putbits=0;
 to_transmit=-1;
 look_only=0;
 
 data_type=0;
 data_stat=0;
 
 //
 //////////////////////////////////////////////////////////
 // IDCT-COEFFICIENTS                                //
 // =================                                //
 // There is a short-comming in SpecCharts so that an//
 // array can not be initialised using the conventional: //
 // variable demo : array = ((1,2,3),(4,5,6));      //
 // that's why the following code is here for.       //
 //////////////////////////////////////////////////////////
 //
 idct_coeff[0]  = 2896; idct_coeff[1]  = 4017;
 idct_coeff[2]  = 3784; idct_coeff[3]  = 3405;
 idct_coeff[4]  = 2896; idct_coeff[5]  = 2275;
 idct_coeff[6]  = 1567; idct_coeff[7]  =  799;
 //  if(1) { } 
 idct_coeff[8]  = 2896; idct_coeff[9] = 3405;
 idct_coeff[10] = 1567; idct_coeff[11] = -799;
 idct_coeff[12] =-2896; idct_coeff[13] =-4017;
 idct_coeff[14] =-3784; idct_coeff[15] =-2275;
 //   if(1) { }
 idct_coeff[16] = 2896; idct_coeff[17] = 2275;
 idct_coeff[18] =-1567; idct_coeff[19] =-4017;
 idct_coeff[20] =-2896; idct_coeff[21] =  799;
 idct_coeff[22] = 3784; idct_coeff[23] = 3405;
 //  if(1) { }
 idct_coeff[24] = 2896; idct_coeff[25] =  799;
 idct_coeff[26] =-3784; idct_coeff[27] =-2275;
 idct_coeff[28] = 2896; idct_coeff[29] = 3405;
 idct_coeff[30] =-1567; idct_coeff[31] =-4017;
 //  if(1) { }
 idct_coeff[32] = 2896; idct_coeff[33] = -799;
 idct_coeff[34] =-3784; idct_coeff[35] = 2275;
 idct_coeff[36] = 2896; idct_coeff[37] =-3405;
 idct_coeff[38] =-1567; idct_coeff[39] = 4017;
 //  if(1) { }
 idct_coeff[40] = 2896; idct_coeff[41] =-2275;
 idct_coeff[42] =-1567; idct_coeff[43] = 4017;
 idct_coeff[44] =-2896; idct_coeff[45] = -799;
 idct_coeff[46] = 3784; idct_coeff[47] =-3405;
 //  if(1) { }
 idct_coeff[48] = 2896; idct_coeff[49] =-3405;
 idct_coeff[50] = 1567; idct_coeff[51] =  799;
 idct_coeff[52] =-2896; idct_coeff[53] = 4017;
 idct_coeff[54] =-3784; idct_coeff[55] = 2275;
 // if(1) { }
 idct_coeff[56] = 2896; idct_coeff[57] =-4017;
 idct_coeff[58] = 3784; idct_coeff[59] =-3405;
 idct_coeff[60] = 2896; idct_coeff[61] =-2275;
 idct_coeff[62] = 1567; idct_coeff[63] = -799;
 
 //
 ////////////////////////////////////////////////////////-
 // SCAN:                                           //
 // =====                                           //
 // This array is defined to be the matrix defining the //
 // zigzag scanning sequence as follows:            //
 ////////////////////////////////////////////////////////-
 //

 // if(1) { }
 scan[0]  =  0; scan[1]  =  1;
 scan[2]  =  5; scan[3]  =  6;
 scan[4]  = 14; scan[5]  = 14;
 scan[6]  = 27; scan[7]  = 28;
 // if(1) { }
 scan[8]  =  2; scan[9]  =  4;
 scan[10] =  7; scan[11] = 13;
 scan[12] = 16; scan[13] = 26;
 scan[14] = 29; scan[15] = 42;
 // if(1) { }
 scan[16] =  3; scan[17] =  8;
 scan[18] = 12; scan[19] = 17;
 scan[20] = 25; scan[21] = 30;
 scan[22] = 41; scan[23] = 43;
 //if(1) { }
 scan[24] =  9; scan[25] = 11;
 scan[26] = 18; scan[27] = 24;
 scan[28] = 31; scan[29] = 40;
 scan[30] = 44; scan[31] = 53;
 //  if(1) { }
 scan[32] = 10; scan[33] = 19;
 scan[34] = 23; scan[35] = 32;
 scan[36] = 39; scan[37] = 45;
 scan[38] = 52; scan[39] = 54;
 //  if(1) { }
 scan[40] = 20; scan[41] = 22;
 scan[42] = 33; scan[43] = 38;
 scan[44] = 46; scan[45] = 51;
 scan[46] = 55; scan[47] = 60;
 //  if(1) { }
 scan[48] = 21; scan[49] = 34;
 scan[50] = 37; scan[51] = 47;
 scan[52] = 50; scan[53] = 56;
 scan[54] = 59; scan[55] = 61;
 //  if(1) { }
 scan[56] = 35; scan[57] = 36;
 scan[58] = 48; scan[59] = 49;
 scan[60] = 57; scan[61] = 58;
 scan[62] = 62; scan[63] = 63;
 
 //
 ////////////////////////////////////////////////////////
 // VLD-VARIABLES                                  //
 // =============                                  //
 // The main two arrays here are vld_length and    //
 // vld_bits, which hold the vld-bit-sequences and the //
 // corresponding lengths. The other arrays are used   //
 // to hold the absolute information that is being //
 // received and translated.                       //
 ////////////////////////////////////////////////////////
 //
 
 
 for (i=0; i<=49; i++)
 {
  mb_inc[i]=-1;
  
  table2b2ai[i]=-1;
  table2b2aq[i]=-1;
  table2b2af[i]=-1;
  table2b2ab[i]=-1;
  //  if(1) { }
  table2b2bi[i]=-1;
  table2b2bq[i]=-1;
  table2b2bf[i]=-1;
  table2b2bb[i]=-1;
  //  if(1) { }
  table2b2ci[i]=-1;
  table2b2cq[i]=-1;
  table2b2cf[i]=-1;
  table2b2cb[i]=-1;
  //  if(1) { }
  table2b4[i]=99;
  
  table2b5a[i]=-1; 
  table2b5b[i]=-1;
 }
 
 //// 1 //
 vld_length[0]=1;
 vld_bits[0]=1;
 mb_inc[0]=1;
 table2b2ai[0]=1;
 table2b2aq[0]=0;
 table2b2af[0]=0;
 table2b2ab[0]=0;
 table2b2bi[0]=0;
 table2b2bq[0]=0;
 table2b2bf[0]=1;
 table2b2bb[0]=0;
 table2b4[0]=0;
 //  if(1) { }
 //// 00 //
 vld_length[1]=2;
 vld_bits[1]=0;
 table2b5a[1]=1;
 table2b5b[1]=0;
 //  if(1) { }
 //// 01 //
 vld_length[2]=2;
 vld_bits[2]=1;
 table2b2ai[2]=1;
 table2b2aq[2]=1;
 table2b2af[2]=0;
 table2b2ab[2]=0;
 // if(1) { }
 table2b2bi[2]=0;
 table2b2bq[2]=0;
 table2b2bf[2]=0;
 table2b2bb[2]=0;
 table2b5a[2]=2;
 table2b5b[2]=1;
 
 //// 10 //
 vld_length[3]=2;
 vld_bits[3]=4;
 table2b2ci[3]=0;
 table2b2cq[3]=0;
 table2b2cf[3]=1;
 table2b2cb[3]=1;
 table2b5b[3]=2;
 //  if(1) { }
 //// 11 //
 vld_length[4]=2;
 vld_bits[4]=3;
 table2b2ci[4]=0;
 table2b2cq[4]=0;
 table2b2cf[4]=1;
 table2b2cb[4]=1;
 //  if(1) { }
 //// 001 //
 vld_length[5]=3;
 vld_bits[5]=1;
 table2b2bi[5]=0;
 table2b2bq[5]=0;
 table2b2bf[5]=1;
 table2b2bb[5]=0;
 //  if(1) { }
 //// 010 //
 vld_length[6]=3;
 vld_bits[6]=2;
 mb_inc[6]=3;
 table2b2ci[6]=0;
 table2b2cq[6]=0;
 table2b2cf[6]=0;
 table2b2cb[6]=1;
 table2b4[6]=1;
 //  if(1) { }
 //// 011 //
 vld_length[7]=3;
 vld_bits[7]=3;
 mb_inc[7]=2;
 table2b2ci[7]=0;
 table2b2cq[7]=0;
 table2b2cf[7]=0;
 table2b2cb[7]=1;
 table2b4[7]=-1;
 //  if(1) { }
 //// 100 //
 vld_length[8]=3;
 vld_bits[8]=4;
 table2b5a[8]=0;
 //  if(1) { }
 //// 101 //
 vld_length[9]=3;
 vld_bits[9]=5;
 table2b5a[9]=3;
 //  if(1) { }
 //// 110 //
 vld_length[10]=3;
 vld_bits[10]=6;
 table2b5a[10]=4;
 table2b5b[10]=3;
 //  if(1) { }
 //// 0010 //
 vld_length[11]=4;
 vld_bits[11]=2;
 mb_inc[11]=5;
 table2b2ci[11]=0;
 table2b2cq[11]=0;
 table2b2cf[11]=1;
 table2b2cb[11]=0;
 table2b4[11]=2;
 //  if(1) { }
 //// 0011 //
 vld_length[12]=4;
 vld_bits[12]=3;
 mb_inc[12]=4;
 table2b2ci[12]=0;
 table2b2cq[12]=0;
 table2b2cf[12]=1;
 table2b2cb[12]=0;
 table2b4[12]=-2;
 // if(1) { } 
 //// 1110 //
 vld_length[13]=4;
 vld_bits[13]=14;
 table2b5a[13]=5;
 table2b5b[13]=4;
 //  if(1) { }
 //// 0000 1 //
 vld_length[14]=5;
 vld_bits[14]=1;
 table2b2bi[14]=0;
 table2b2bq[14]=1;
 table2b2bf[14]=0;
 table2b2bb[14]=0;
 //  if(1) { }
 //// 0001 0 //
 vld_length[15]=5;
 vld_bits[15]=2;
 mb_inc[15]=7;
 table2b2bi[15]=0;
 table2b2bq[15]=1;
 table2b2bf[15]=1;
 table2b2bb[15]=0;
 table2b2ci[15]=0;
 table2b2cq[15]=1;
 table2b2cf[15]=1;
 table2b2cb[15]=1;
 table2b4[15]=3;
 //  if(1) { }
 //// 0001 1 //
 vld_length[16]=5;
 vld_bits[16]=3;
 mb_inc[16]=6;
 table2b2bi[16]=1;
 table2b2bq[16]=0;
 table2b2bf[16]=0;
 table2b2bb[16]=0;
 table2b2ci[16]=1;
 table2b2cq[16]=0;
 table2b2cf[16]=0;
 table2b2cb[16]=0;
 table2b4[16]=-3;
 //  if(1) { }
 //// 1111 0 //
 vld_length[17]=5;
 vld_bits[17]=30;
 table2b5a[17]=6;
 table2b5b[17]=5;
 //  if(1) { }
 //// 0000 01 //
 vld_length[18]=6;
 vld_bits[18]=1;
 table2b2bi[18]=1;
 table2b2bq[18]=1;
 table2b2bf[18]=0;
 table2b2bb[18]=0;
 table2b2ci[18]=1;
 table2b2cq[18]=1;
 table2b2cf[18]=0;
 table2b2cb[18]=0;
 //  if(1) { }
 //// 0000 10 //
 vld_length[19]=6;
 vld_bits[19]=2;
 table2b2ci[19]=0;
 table2b2cq[19]=1;
 table2b2cf[19]=0;
 table2b2cb[19]=1;
 //  if(1) { }
 //// 0000 11 //
 vld_length[20]=6;
 vld_bits[20]=3;
 table2b2ci[20]=0;
 table2b2cq[20]=1;
 table2b2cf[20]=1;
 table2b2cb[20]=0;
 //  if(1) { }
 //// 1111 10 //
 vld_length[21]=6;
 vld_bits[21]=62;
 table2b5a[21]=7;
 table2b5b[21]=6;
 //  if(1) { }
 //// 0000 110 //
 vld_length[22]=7;
 vld_bits[22]=6;
 mb_inc[22]=9;
 table2b4[22]=4;
 //  if(1) { }
 //// 0000 111 //
 vld_length[23]=7;
 vld_bits[23]=7;
 mb_inc[23]=8;
 table2b4[23]=-4;
 //  if(1) { }
 //// 1111 110 //
 vld_length[24]=7;
 vld_bits[24]=126;
 table2b5a[24]=8;
 table2b5b[24]=7;
 //  if(1) { }
 //// 0000 0110 //
 vld_length[25]=8;
 vld_bits[25]=3;
 mb_inc[25]=15;
 table2b4[25]=7;
 //  if(1) { }
 //// 0000 0111 //
 vld_length[26]=8;
 vld_bits[26]=7;
 mb_inc[26]=14;
 table2b4[26]=-7;
 //  if(1) { }
 //// 0000 1000 //
 vld_length[27]=8;
 vld_bits[27]=8;
 mb_inc[27]=13;
 table2b4[27]=6;
 //  if(1) { }
 //// 0000 1001 //
 vld_length[28]=8;
 vld_bits[28]=9;
 mb_inc[28]=12;
 table2b4[28]=-6;
 //  if(1) { }
 //// 0000 1010 //
 vld_length[29]=8;
 vld_bits[29]=10;
 mb_inc[29]=11;
 table2b4[29]=5;
 //  if(1) { }
 //// 0000 1011 //
 vld_length[30]=8;
 vld_bits[30]=11;
 mb_inc[30]=10;
 table2b4[30]=-5;
 //  if(1) { }
 //// 0000 1011 //
 vld_length[31]=8;
 vld_bits[31]=254;
 table2b5b[31]=8;
 //  if(1) { }
 //// 0000 0100 10 //
 vld_length[32]=10;
 vld_bits[32]=18;
 mb_inc[32]=21;
 table2b4[32]=10;
 //  if(1) { }
 //// 0000 0100 11 //
 vld_length[33]=10;
 vld_bits[33]=19;
 mb_inc[33]=20;
 table2b4[33]=-10;
 // if(1) { } 
 //// 0000 0101 00 //
 vld_length[34]=10;
 vld_bits[34]=20;
 mb_inc[34]=19;
 table2b4[34]=9;
 //  if(1) { }
 //// 0000 0101 01 //
 vld_length[35]=10;
 vld_bits[35]=21;
 mb_inc[35]=18;
 table2b4[35]=-9;
 //  if(1) { }
 //// 0000 0101 10 //
 vld_length[36]=10;
 vld_bits[36]=22;
 mb_inc[36]=17;
 table2b4[36]=8;
 //  if(1) { }
 //// 0000 0101 11 //
 vld_length[37]=10;
 vld_bits[37]=23;
 mb_inc[37]=16;
 table2b4[37]=-8;
 //  if(1) { }
 //// 0000 0011 000 //
 vld_length[38]=11;
 vld_bits[38]=24;
 mb_inc[38]=33;
 table2b4[38]=16;
 // if(1) { } 
 //// 0000 0011 001 //
 vld_length[39]=11;
 vld_bits[39]=25;
 mb_inc[39]=32;
 table2b4[39]=-16;
 //  if(1) { }
 //// 0000 0011 010 //
 vld_length[40]=11;
 vld_bits[40]=26;
 mb_inc[40]=31;
 table2b4[40]=15;
 //  if(1) { }
 //// 0000 0011 011 //
 vld_length[41]=11;
 vld_bits[41]=27;
 mb_inc[41]=30;
 table2b4[41]=-15;
 //  if(1) { }
 //// 0000 0011 100 //
 vld_length[42]=11;
 vld_bits[42]=28;
 mb_inc[42]=29;
 table2b4[42]=14;
 //  if(1) { }
 //// 0000 0011 101 //
 vld_length[43]=11;
 vld_bits[43]=29;
 mb_inc[43]=28;
 table2b4[43]=-14;
 //  if(1) { }
 //// 0000 0011 110 //
 vld_length[44]=11;
 vld_bits[44]=30;
 mb_inc[44]=27;
 table2b4[44]=13;
 //  if(1) { }
 //// 0000 0011 111 //
 vld_length[45]=11;
 vld_bits[45]=31;
 mb_inc[45]=26;
 table2b4[45]=-13;
 //  if(1) { }
 //// 0000 0100 000 //
 vld_length[46]=11;
 vld_bits[46]=32;
 mb_inc[46]=25;
 table2b4[46]=12;
 //  if(1) { }
 //// 0000 0100 001 //
 vld_length[47]=11;
 vld_bits[47]=33;
 mb_inc[47]=24;
 table2b4[47]=-12;
 // if(1) { } 
 //// 0000 0100 010 //
 vld_length[48]=11;
 vld_bits[48]=34;
 mb_inc[48]=23;
 table2b4[48]=11;
 //  if(1) { }
 //// 0000 0100 011 //
 vld_length[49]=11;
 vld_bits[49]=35;
 mb_inc[49]=22;
 table2b4[49]=-11;
} // end init //

/* void inbuffer(); */
/* void vldcontrol(); */
/* void dequant(); */
/* void idct(); */
/* void pred(); */
/* void plus(); */
/* void store(); */
/* void display(); */
/* void outbuffer(); */


//
//////////////////////////////////////////-
// INBUFFER                          //
// ========                          //
// Gets data from input signals and  //
// returns it to the vldcontrol behavior //
//////////////////////////////////////////-
//
void inbuffer()
{
 int status ;
 
 int iobuffer_in;
 int iobuf_hd_in;
 int iobuf_tl_in;
 int iobuf_look;

 int i;
 
 status=0;
 iobuf_hd_in=0;
 iobuf_tl_in=0;
 iobuf_look=0;

/* Begin commented by Jorge */
/* Since for our WCET benchmarks we assume that loop information is
   given by a third party we can replace while(1) for a for-loop. The
   key part is to replace it with another loop in order to apply loop
   invariant generation. */
 //while(1) 
/* End commented by Jorge */

 for (i=0;i<10;i++)
 {
  //  wait on clock; //
  //  if (clock=='0')
  //  {
   if (isinbit==1) 
   {
    if (((iobuf_hd_in+1) % 256)!=iobuf_tl_in) 
    {
     iobuffer_in=inbit;
     iobuf_hd_in=(iobuf_hd_in+1) % 256;
    }
   }
   
   //      // Is the buffer full then indcate to external circutary//
   if (((iobuf_hd_in+1) % 256)==iobuf_tl_in) isfull=1;
   else isfull=0;
   
   if (status==0) 
   {
    if (getbits>0)
    {
     to_receive=getbits;
     iobuf_look=iobuf_tl_in;
     status=1;
    }
   }
   else if (status==1)
   {
    while ((to_receive!=0)  && (iobuf_look!=iobuf_hd_in)) 
    {
     getinbuffer=iobuffer_in;
     iobuf_look=(iobuf_look+1) % 256;
     to_receive=to_receive-1;
    }
    if (to_receive==0) status=2;
   }
   else if (status==2)
   {
    if (look_only==0) iobuf_tl_in=iobuf_look; 
    if (getbits==0)
    {
     to_receive=-1;
     status=0;
    }
   }
   //  } // end if; //
 } // end loop; //
} //inbuffer //


//
////////////////////////////////////////////////////////////-
// VLDCONTROL: Variable Length Decoder and Controller  //
// ==================================================  //
// This is the behavior that sets/resets all the necessery //
// variables so the rest of the model can continue. The//
// behavior is modeled using a "state-machine" to make //
// individual steps easy to follow.                    //
////////////////////////////////////////////////////////////-
//


void read_bits(int amount)
{
 if (read_done==1)
 {
  read_done=0;
  look_only=0;
  getbits=amount;
 }
 else if (read_done==0)
 {
  if (to_receive==0)
  {
   read_int=getinbuffer;
   getbits=0;
   read_done=1;
  }
 }
}

void look_bits(int amount)
{
 if (read_done==1)
 {
  read_done=0;
  look_only=1;
  getbits=amount;
 }
 else if (read_done==0)
 {
  if (to_receive==0)
  {
   read_int=getinbuffer;
   getbits=0;
   read_done=1;
  }
 }
}


void next_vld(int start,int max)
{ 
 int i;
 int vld_read;
 
 if (vld_found>=0) 
 {
  vld_found=-1;
  vld_size=start-1;
 }
 
 if (vld_size==max) 
 {
  return;
  //  exit(-1);
  //assert(false);
  //report "vld-code not found"
  // severity error;
  //end if; //
 }
 
 
 look_bits(vld_size+1);
 if (read_done==1)
 {
  vld_size=vld_size+1;
  for (i=0; i<=vld_size-1; i++)
   vld_read=getinbuffer;
  
  i=0;
  while (i<50) 
  {
   if (vld_length[i]==vld_size) 
   {
    if (vld_read==vld_bits[i])
    {
     vld_found=i;
     i=49;
    }
   }
   else if (vld_length[i]>vld_size) 
    i=49;
   i=i+1;
  } // end loop;//
 } // end if; //
} //      end; next_vld //


void vldcontrol()
{
 int i;
 
 read_done=1;
 vld_found=0;
 
 if (data_type==7) data_type=6; 
 while (data_type<7)
 {
  //        wait on clock; //
  if (clock==1)
  {
   if (data_type==0)
   {
    read_bits(32);
    if (read_done==1)
    {
     data_stat=0;
     switch(read_int)
     { 
     case 435        :  
       data_type=1;     
       break;
     case 440        :  
       data_type=2;     
       break;
     default         :  
       if (read_int==256)
	 data_type=3;
       else
	 data_type=4;
       break ;
     } // end case; //
    } // end if; //
   } // if //
   else if (data_type==1)
   {
    if (data_stat==0) 
    {
     read_bits(1);
     if (read_done==1) 
     {
      //            //### load_intra_quantizer_matrix //
      if (getinbuffer==1) 
      {
       data_stat=1;
       count=64;
      }
      else data_stat=2; 
     } // end if; //
    }
    else if (data_stat==1)
    {
     read_bits(8);
     if (read_done==1)
     {
      //            //### Elem 64-count in intra_quantizer_matrix in read_int //
      temp=scan[64-count];
      intra_quant[temp]=read_int;
      count=count-1;
      if (count==0) data_stat=2; 
     } // end if; //
    }
    else if (data_stat==2)
    {
     read_bits(1);
     if (read_done==1) 
     {
      
      //  //### load_none_intra_quantizer_matrix //
      if (getinbuffer==1) 
      {
       data_stat=3;
       count=64;
      }
      else data_type=0; 
     } // end if; //
    }
    else if (data_stat==3) 
    {
     read_bits(8);
     if (read_done==1) 
     {
      //  //### Elem 64-count in non_intra_quantizer_matrix in read_int //
      temp=scan[64-count];
      non_intra_quant[temp]=read_int;
      count=count-1;
      if (count==0) data_type=0; 
     } // end if; //
    } // end if; //
   }
   else if (data_type==2)
    data_type=0;
   
   else if (data_type==3)
   {
    if (data_stat==0) 
    {
     if (picture_type<2) 
     {
      temp=previous_picture;
      previous_picture=future_picture;
      future_picture=temp;
     } //end if; //
     macroblock_address=0;
     data_stat=1;
    }  
    else if (data_stat==1) 
    {
     read_bits(3);
     if (read_done==1) 
      temp=getinbuffer;
     
     switch(temp) {
     case 1:
     case 2:
     case 3:    
       picture_type=temp-1; 
       break;
      
     } // end case; //
     
     if (picture_type>0)  data_stat=2;
     else data_type=0; 
    } //end if; //
   }
   
   else if (data_stat==2) 
   {
    read_bits(4);
    if (read_done==1)
    {
     //  //### full_pel_forward_vector //
     full_pel_forward_vector=getinbuffer;
     
     ////### forward_f_code //
     forward_f_code=getinbuffer;
     forward_r_size=forward_f_code-1;
     vld_temp=1;
     vld_temp=vld_temp*forward_r_size;
     forward_f=vld_temp;
     
     if (picture_type==2)  data_stat=3;
     else data_type=0; 
    } // end if; //
   }
   else if (data_stat==3)
   {
    read_bits(4);
    if (read_done==1) 
    {
     //  //### full_pel_backward_vector //
     full_pel_backward_vector=getinbuffer;
     
     // //### backward_f_code //
     backward_f_code=getinbuffer;
     backward_r_size=backward_f_code-1;
     vld_temp=1;
     vld_temp=vld_temp*backward_r_size;
     backward_f=vld_temp;
     
     data_type=0;
    } // end if; //
   } // end if; //
   
   else if (data_type==4)
   {
    read_bits(5);
    if (read_done==1) 
    {
     //  //### quantizer_scale is in read_int //
     quantizer_scale=read_int;
     
     count=0;      
     data_type=5;
     data_stat=0;
    } // end if; //
   }
   else if (data_type==5)
   {
    if (data_stat==0)
    {
     look_bits(11);
     if (read_done==1)
     {
      if (read_int==8) data_stat=1; //HUH? =8?
      else data_stat=2;
     } // end if; //
    }
    else if (data_stat==1)
    {
     read_bits(11);
     if (read_done==1)
     {
      //  //### macroblock_escape is in read_int //
      count=count+1;
      data_stat=0;
     } // end if; //
    }
    else if (data_stat==2)
    {
     next_vld(1,11);
     if (vld_found>=0) data_stat=3; 
    }
    else if (data_stat==3) 
    {
     //  //### vld-index to //
     if (mb_inc[vld_found]==-1)
     {
      vld_found=-1;
      data_stat=2;
     }
     else
     {
      if (mb_type==0)
       past_intra_address=macroblock_address;
      
      read_bits(vld_size);
      macroblock_address=macroblock_address+33*count+mb_inc[vld_found];
      data_stat=4;
     } //end if; //
    }
    else if (data_stat==4) 
    {
     next_vld(1,6);
     if (vld_found>=0) data_stat=5;
    }
    else if (data_stat==5)
    {
     // //### vld-index to macroblock_type is in vld_found //
     switch (picture_type) { 
     case 0 :  is_mb_quant=table2b2aq[vld_found];
      is_for_info=table2b2af[vld_found];
      is_back_info=table2b2ab[vld_found];
      is_mb_intra=table2b2ai[vld_found];
      break;
      
     case 1 :  is_mb_quant=table2b2bq[vld_found];
      is_for_info=table2b2bf[vld_found];
      is_back_info=table2b2bb[vld_found];
      is_mb_intra=table2b2bi[vld_found];
      break;
      
     case 2 :  is_mb_quant=table2b2cq[vld_found];
      is_for_info=table2b2cf[vld_found];
      is_back_info=table2b2cb[vld_found];
      is_mb_intra=table2b2bi[vld_found];
      break;
      
     } // end case; //
     
     if ((is_mb_quant==-1) || (is_for_info==-1) ||
      (is_back_info==-1) || (is_mb_intra==-1)) 
     {
      vld_found=-1;
      data_stat=4;
     }
     else
     {
      if (is_mb_intra==1) mb_type=0;
      else mb_type=picture_type;
      
      read_bits(vld_size);
      if (is_mb_quant==1) data_stat=6;
      else data_stat=7; 
     } // end if; //
    }
    else if (data_stat==6)
    {
     read_bits(5);
     if (read_done==1) 
     {
      //  //### quantizer_scale is in read_int //
      quantizer_scale=read_int;
      data_stat=7;
     } // end if;//
    }
    else if (data_stat==7) 
    {
     if (is_for_info==1) data_stat=8;
     else data_stat=14; 
    }
    else if (data_stat==8)
    {
     next_vld(1,11);
     if (vld_found>=0) data_stat=9; 
    }
    else if (data_stat==9) 
    {
     // //### vld-index to motion_horizontal_forward_code in vld_found //
     motion_horizontal_forward_code=table2b4[vld_found];
     if (motion_horizontal_forward_code==99)
     {
      vld_found=-1;
      data_stat=8;
     }
     else
     {
      read_bits(vld_size);
      if ((forward_f==1) ||
       (motion_horizontal_forward_code==0))
      {
       complement_horizontal_forward_r=0;
       data_stat=11;
      }
      else
       data_stat=10;
     } // end if;  //
    }
    else if (data_stat==10)
    {
     read_bits(forward_r_size);
     if (read_done==1)
     {
      // //### motion_horizontal_forward_r is in read_int //
      motion_horizontal_forward_r=read_int;
      complement_horizontal_forward_r=forward_f-1-motion_horizontal_forward_r;
      data_stat=11;
     } // end if; //
    }
    else if (data_stat==11)
    {
     next_vld(1,11);
     if (vld_found>=0) data_stat=12; 
    }
    else if (data_stat==12) 
    {
     //
     //### vld-index to 
     //    motion_vertical_forward_code is in vld_found //
     motion_vertical_forward_code=table2b4[vld_found];
     if (motion_vertical_forward_code==99) 
     {
      vld_found=-1;
      data_stat=11;
     }
     else
     {
      read_bits(vld_size);
      if ((forward_f==1) || (motion_vertical_forward_code==0)) 
      {
       complement_vertical_forward_r=0;
       data_stat=14;
      }
      else
       data_stat=13;
     } // end if; //
    }
    else if (data_stat==13) 
    {
     read_bits(forward_r_size);
     if (read_done==1) 
     {
      // //### motion_vertical_forward_r is in read_int //
      motion_vertical_forward_r=read_int;
      complement_vertical_forward_r=forward_f-1-
       motion_vertical_forward_r;
      data_stat=14;
     } // end if; //
    }
    else if (data_stat==14)
    {
     if (is_back_info==1) data_stat=15;
     else
     {
      b_num=0;
      data_type=6;
      data_stat=0;
     } // end if;  //
    }
    else if (data_stat==15) 
    {
     next_vld(1,11);
     if (vld_found>=0) data_stat=16; 
    }
    else if (data_stat==16) 
    {
     //
     //### vld-index to motion_horizontal_backward_code in vld_found//
     motion_horizontal_backward_code=table2b4[vld_found];
     if (motion_horizontal_backward_code==99) 
     {
      vld_found=-1;
      data_stat=15;
     }
     else
     {
      read_bits(vld_size);
      if ((forward_f==1) ||
       (motion_horizontal_backward_code==0))
      {
       complement_horizontal_backward_r=0;
       data_stat=18;
      }
      else
       data_stat=17;
     } // end if; //
    }
    else if (data_stat==17)
    {
     read_bits(backward_r_size);
     if (read_done==1) 
     {
      // //### motion_horizontal_backward_r is in read_int //
      motion_horizontal_backward_r=read_int;
      complement_horizontal_backward_r=backward_f-1-motion_horizontal_backward_r;
      data_stat=18;
     } // end if; //
    }
    else if (data_stat==18) 
    {
     next_vld(1,11);
     if (vld_found>=0) data_stat=19; 
    }
    else if (data_stat==19) 
    {
     
     ////### vld-index to motion_vertical_backward_code in vld_found //
     motion_vertical_backward_code=table2b4[vld_found];
     if (motion_vertical_backward_code==99) 
     {
      vld_found=-1;
      data_stat=18;
     }
     else
     {
      read_bits(vld_size);
      if ((forward_f==1) ||
       (motion_vertical_backward_code==0)) 
      {
       complement_vertical_backward_r=0;
       b_num=0;
       data_type=6;
       data_stat=0;
      }
      else
       data_stat=20;
     } // end if; //
    }
    else if (data_stat==20) 
    {
     read_bits(backward_r_size);
     if (read_done==1) 
     {
      // //### motion_vertical_backward_r is in read_int //
      motion_vertical_backward_r=read_int;
      complement_vertical_backward_r=backward_f-1-motion_vertical_backward_r;
      b_num=0;
      data_type=6;
      data_stat=0;
     } // end if; //
    }//end if; //
  }
  else if (data_type==6)
  { 
   if (data_stat==0)
   {
    reading_zz=1; 
    if (mb_type==0) data_stat=1;
    else data_stat=7; 
   }
   else if (data_stat==1)
   {
    if (b_num<4) data_stat=4;
    else data_stat=2;
   }
   else if (data_stat==2)
   {
    next_vld(2,8);
    if (vld_found>=0) data_stat=3; 
   }
   else if (data_stat==3)
   {
    //  //### vld-index to dct_dc_size_chrominance is in vld_found //
    count=table2b5b[vld_found];
    if (count==-1)
    {
     vld_found=-1;
     data_stat=2;
    }
    else
    {
     read_bits(vld_size);
     data_stat=6;
    } // end if; //
   }
   else if (data_stat==4) 
   {
    next_vld(2,7);
    if (vld_found>=0) data_stat=5; 
   }
   else if (data_stat==5) 
   {
    //  //### vld-index to dct_dc_size_luminance is in vld_found //
    count=table2b5a[vld_found];
    if (count==-1) 
    {
     vld_found=-1;
     data_stat=4;
    }
    else
    {
     read_bits(vld_size);
     data_stat=6;
    } // end if; //
   }
   else if (data_stat==6)
   {
    if (count==0)
    {
     dct_dc_differential=0;
     dct_zz[0]=0;
     data_stat=9;
    }
    else
    {
     read_bits(count);
     
     if (read_done==1)
     {
      // //### dct_dc_differential is in getinbuffer or read_int //
      if (getinbuffer==1) 
       dct_zz[0]=read_int;
      else
      {
       vld_temp=-1;
       vld_temp=vld_temp*count;
       vld_temp=vld_temp | (dct_dc_differential+1);
       dct_zz[0]=vld_temp;
      } // end if; //
      data_stat=9;
     } //end if; //
    } //end if; //
   }
   else if (data_stat==7)
   {
    look_bits(6);
    if (read_done==1)
    {
     if (read_int==1) 
     {
      ////### only escape sequences are allowed //
      read_bits(6);
      count=0;
      data_stat=8;
     }
     else data_stat=11; 
    } //end if; //
   }
   else if (data_stat==8) 
   {
    // //### escape is followed by dct_coeff_first run and level //
    if (count==0) 
    {
     read_bits(6);
     if (read_done==1) 
     {
      run=read_int;
      count=1;
     } // end if; //
    } // end if; //
    if (count==1) 
    {
     read_bits(8);
     if (read_done==1) 
     {
      if (read_int==0) 
       count=2;
      else if (read_int==128) 
       count=3;
      else
      {
       if (read_int<128) level=read_int;
       else level=read_int-256;
       count=4;
      } //end if; //
     } //end if; //
    } // end if;//
    if (count==2) 
    {
     read_bits(8);
     if (read_done==1) 
     {
      level=read_int;
      count=4;
     } //end if; //
    } //end if; //
    if (count==3) 
    {
     read_bits(8);
     if (read_done==1) 
     {
      level=read_int-256;
      count=4;
     } //end if; //
    } //end if; //
    if (count==4) 
    {
     for (i=0; i<=run; i++)
     {
      temp=scan[reading_zz];
      dct_zz[temp]=level;
      reading_zz=reading_zz+1;
     } //end loop; //
     data_stat=9;
    } //end if; //
   }
   else if (data_stat==9) 
   {
    look_bits(6);
    if (read_done==1) 
    {
     if (read_int==1) 
     {
      // //### only escape sequences are allowed //
      read_bits(6);
      count=0;
      data_stat=10;
     }
     else data_stat=11; 
    } //end if; //
   }
   else if (data_stat==10)
   {
    // //### escape is followed by dct_coeff_next run and level//
    if (count==0) 
    {
     read_bits(6);
     if (read_done==1) 
     {
      run=read_int;
      count=1;
     } //end if; //
    } //end if; //
    if (count==1) 
    {
     read_bits(8);
     if (read_done==1) 
     {
      if (read_int==0) 
       count=2;
      else if (read_int==128) 
       count=3;
      else
      {
       if (read_int<128) level=read_int;
       else level=read_int-256; 
       count=4;
      } //end if;//
     } //end if; //
    } //end if;//
    if (count==2)
    {
     read_bits(8);
     if (read_done==1) 
     {
      level=read_int;
      count=4;
     } // end if; //
    } // end if; //
    if (count==3)
    {
     read_bits(8);
     if (read_done==1) 
     {
      level=read_int-256;
      count=4;
     } // end if; //
    } // end if; //
    if (count==4) 
    {
     for (i=0; i<=run; i++)
     {
      temp=scan[reading_zz];
      dct_zz[temp]=level;
      reading_zz=reading_zz+1;
     } //end loop; //
     data_stat=9;
    } //end if; //
   }
   else if (data_stat==11) 
   {
    look_bits(2);
    if (read_done==1) 
    {
     if (read_int==2) data_stat=10;
     else data_stat=12;
    } //end if;//
   }
   else if (data_stat==12)
   {
    read_bits(2);
    if (read_done==1)
    {
     if (b_num==5) data_stat=13; //HUH? =5?
     else
     {
      b_num=b_num+1;
      data_stat=0;
     } //end if; //
    } //end if; //
   } 
   else if (data_stat==13)
   {
    look_bits(23);
    if (read_done==1)
    {
     if (read_int==0) data_type=0;
     else
     {
      count=0;
      data_type=5;
      data_stat=0;
     } // end if; //
    } // end if; //
   }//end if; //
          }//end if; //
        } //end if; //
      } //end loop; //
} //    end vldcontrol; //

//
////////////////////////////////////////////////////////////////-
// DEQUANT: De-Quantizer                                   //
// =====================                                   //
// The dequant-behavior reconstructs the dct-coefficients from //
// intra_quant using the quantizer_scale and the zig-zag matrix//
// Resulting coefficients are put in the variable curr_block   //
////////////////////////////////////////////////////////////////-
//

int sign(int dec)
{
 if (dec<0) return(-1); 
 if (dec>0) return(+1);
 return(0);
}

void dequant()
{
 int i,n;
 int   deq_temp_bit_vector;
 
 if (mb_type==0)
 {
  for (n=0; n<=63; n++)
  {
   i=scan[n];
   
   curr_block[n]=(dct_zz[i]*quantizer_scale*intra_quant[n]*2)/16;
   deq_temp_bit_vector=curr_block[n];
   
   if (deq_temp_bit_vector==0)
    curr_block[n]=curr_block[n]-sign(curr_block[n]);
   
   if (curr_block[n]>2047) curr_block[n]=2047;
   if (curr_block[n]<-2047) curr_block[n]=-2047;
  } // end loop; //
  
  if (b_num==0) 
  {
   curr_block[0]=dct_zz[0]*8;
   if ((macroblock_address-past_intra_address)>1) 
    curr_block[0]=curr_block[0]+(128*8);
   else
    curr_block[0]=curr_block[0]+dct_dc_y_past;
   dct_dc_y_past=curr_block[0];
  }
  else if (b_num<4)
  {
   curr_block[0]=dct_zz[0]*8+dct_dc_y_past;
   dct_dc_y_past=curr_block[0];
  }
  else if (b_num==4)
  {
   curr_block[0]=dct_zz[0]*8;
   if ((macroblock_address-past_intra_address)>1) 
    curr_block[0]=curr_block[0]+(128*8);
   else
    curr_block[0]=curr_block[0]+dct_dc_cb_past;
   dct_dc_cb_past=curr_block[0];
  }
  else if (b_num==5)
  {
   curr_block[0]=dct_zz[0]*8;
   if ((macroblock_address-past_intra_address)>1) 
    curr_block[0]=curr_block[0]+(128*8);
   else
    curr_block[0]=curr_block[0]+dct_dc_cr_past;
   dct_dc_cr_past=curr_block[0];
   past_intra_address=macroblock_address;
  } // end if;//
 }
 else
 {
  for (n=0; n<=63; n++)
  {
   i=scan[n];
   curr_block[n]=(((dct_zz[i]*2)+sign(dct_zz[i]))*quantizer_scale*
    non_intra_quant[n])/16;
   deq_temp_bit_vector=curr_block[n];
   if (deq_temp_bit_vector==0)
    curr_block[n]=curr_block[n]-sign(curr_block[n]);
   if (curr_block[n]>2047) curr_block[n]=2047;
   if (curr_block[n]<-2047) curr_block[n]=-2047;
   //VIJAY
   /* old */ //if(dct_zz[i]=0)
   /* new */ dct_zz[i]=0; if(dct_zz[i])
    curr_block[n]=0;
  } // end loop;//
 } // end if;//
} //    end dequant;//
//
////////////////////////////////////////////////////////////////
// IDCT: Inverse Discrete Cosine Transform                //
// =======================================                //
// This behavior calculates the idct of the block stored  //
// in the variable "curr_block". The resulting block is   //
// also in the variable "curr_block". The algorithm below //
// is a very straight forward algorithm that uses a temporary //
// storage variable called "temp_block".              //
////////////////////////////////////////////////////////////////
//
void idct()
{
 int i,j,k ;
 
 
 for (i=0; i<=63; i++)
  temp_block[i]=0;
 
 // // Temporary_block = idct_coeff * curr_block //
 for (i=0; i<=7; i++) 
 {
  for (j=0; j<=7; j++)
  {
   for (k=0; k<=7; k++)
    temp_block[i*8+j]=temp_block[i*8+j]+
    idct_coeff[i*8+k]*curr_block[k*8+j];
   temp_block[i*8+j]=temp_block[i*8+j]/8192;
  } // end loop; //
 } // end loop; //
 
 for (i=0; i<=63; i++)
  curr_block[i]=0;
 
 // // Current_block = temp_block * Transformed(idct_coeff)//
 for (i=0; i<=7; i++)
 {
  for (j=0; j<=7; j++)
  {
   for (k=0; k<=7; k++)
    curr_block[i*8+j]=curr_block[i*8+j]+
    temp_block[i*8+k]*idct_coeff[j*8+k];
   curr_block[i*8+j]=curr_block[i*8+j]/8192;
  } // end loop; //
 } // end loop; //
} //    end idct; //
//
//////////////////////////////////////////////////////////////-
// PRED: Prediction                                      //
// ================                                      //
// The prediction block uses two, earlier received, pictures //
// "previous-" and "future-pictures" to come up with a   //
// predicted macroblock. The blocks contained in that macro- //
// block are then added to the information dct_zz (that goes //
// through the normal "intra-path") to come up with the  //
// actual block.                                         //
//////////////////////////////////////////////////////////////-
//

void calculate_forward_motion(int new_prev_values)
{
 
 right_little=motion_horizontal_forward_code*forward_f;
 if (right_little==0) right_big=0;
 else
 {
  if (right_little>0) 
  {
   right_little=right_little-complement_horizontal_forward_r;
   right_big=right_little-(forward_f*32);
  }
  else
  {
   right_little=right_little+complement_horizontal_forward_r;
   right_big=right_little+(forward_f*32);
  } // end if; //
 } //end if; //
 
 down_little=motion_vertical_forward_code*forward_f;
 if (down_little==0) down_big=0;
 else
 {
  if (down_little>0)
  {
   down_little=down_little-complement_vertical_forward_r;
   down_big=down_little-(forward_f*32);
  }
  else
  {
   down_little=down_little+complement_vertical_forward_r;
   down_big=down_little+(forward_f*32);
  } // end if;//
 } // end if; //
 
 max=(forward_f*16)-1;
 min=-(forward_f*16);
 
 new_vector=recon_right_for_prev+right_little;
 if ((new_vector<=max) && (new_vector>=min)) 
  recon_right_for=recon_right_for_prev+right_little;
 else
  recon_right_for=recon_right_for_prev+right_big; 
 if (new_prev_values==1)
  recon_right_for_prev=recon_right_for; 
 if (full_pel_forward_vector==1) 
 {
  pred_temp_bit_vector=recon_right_for;
  pred_temp_bit_vector=pred_temp_bit_vector*2;
  recon_right_for=pred_temp_bit_vector;
 } // end if; //
 
 new_vector=recon_down_for_prev+down_little;
 if ((new_vector<=max) && (new_vector>=min)) 
  recon_down_for=recon_down_for_prev+down_little;
 else 
  recon_down_for=recon_down_for_prev+down_big; 
 if (new_prev_values==1) 
  recon_down_for_prev=recon_down_for; 
 if (full_pel_forward_vector==1) 
 {
  pred_temp_bit_vector=recon_down_for;

  if(pred_temp_bit_vector<1) pred_temp_bit_vector=1;
  else pred_temp_bit_vector=0;
  // Transformed by hand - Jorge
  // pred_temp_bit_vector=pred_temp_bit_vector<1;
  recon_down_for=pred_temp_bit_vector;
 } // end if;//
 
 if (b_num>3) 
 {
  recon_right_for=recon_right_for/2;
  recon_down_for=recon_down_for/2;
 } // end if; //
 
 pred_temp_bit_vector=recon_right_for;
 pred_temp_bit_vector=pred_temp_bit_vector*21;
 right_for=pred_temp_bit_vector;
 
 pred_temp_bit_vector=recon_down_for;
 pred_temp_bit_vector=pred_temp_bit_vector/2;
 down_for=pred_temp_bit_vector;
 
 right_half_for=recon_right_for-(right_for*2);
 down_half_for=recon_down_for-(down_for*2);
} //      end; //


void calculate_backward_motion(int new_prev_values)
{
 
 right_little=motion_horizontal_backward_code*backward_f;
 if (right_little==0) right_big=0;
 else
 {
  if (right_little>0)
  {
   right_little=right_little-complement_horizontal_backward_r;
   right_big=right_little-(backward_f*32);
  }
  else
  {
   right_little=right_little+complement_horizontal_backward_r;
   right_big=right_little+(backward_f*32);
  } // end if; //
 } //end if; //
 
 down_little=motion_vertical_backward_code*backward_f;
 if (down_little==0) down_big=0;
 else
 {
  if (down_little>0)
  {
   down_little=down_little-complement_vertical_backward_r;
   down_big=down_little-(backward_f*32);
  }
  else
  {
   down_little=down_little+complement_vertical_backward_r;
   down_big=down_little+(backward_f*32);
  } // end if;//
 } // end if; //
 
 max=(backward_f*16)-1;
 min=-(backward_f*16);
 
 new_vector=recon_right_back_prev+right_little;
 if ((new_vector<=max)  &&(new_vector>=min)) 
  recon_right_back=recon_right_back_prev+right_little;
 else 
  recon_right_back=recon_right_back_prev+right_big; 
 if (new_prev_values==1) 
  recon_right_back_prev=recon_right_back; 
 if (full_pel_backward_vector==1) 
 {
  pred_temp_bit_vector=recon_right_back;
  pred_temp_bit_vector=pred_temp_bit_vector*2;
  recon_right_back=pred_temp_bit_vector;
 } //end if; //
 
 new_vector=recon_down_back_prev+down_little;
 if ((new_vector<=max) && (new_vector>=min)) 
  recon_down_back=recon_down_back_prev+down_little;
 else 
  recon_down_back=recon_down_back_prev+down_big; 
 if (new_prev_values==1) 
  recon_down_back_prev=recon_down_back; 
 if (full_pel_backward_vector==1) 
 {
  pred_temp_bit_vector=recon_down_back;
  pred_temp_bit_vector=pred_temp_bit_vector*2;
  recon_down_back=pred_temp_bit_vector;
 } //end if; //
 
 if (b_num>3) 
 {
  recon_right_back=recon_right_back/2;
  recon_down_back=recon_down_back/2;
 } // end if; //
 
 pred_temp_bit_vector=recon_right_back;
 pred_temp_bit_vector=pred_temp_bit_vector/2;
 right_back=pred_temp_bit_vector;
 
 pred_temp_bit_vector=recon_down_back;
 pred_temp_bit_vector=pred_temp_bit_vector/2;
 down_back=pred_temp_bit_vector;

 if(right_back<1)  
   right_half_back=recon_right_back-1;
 else
   right_half_back=recon_right_back;
 // Transformed by hand -- Jorge
 // right_half_back=recon_right_back-(right_back<1);
 if(down_back<1)
   down_half_back=recon_down_back-1;
 else
   down_half_back=recon_down_back;
 // Transformed by hand -- Jorge
 // down_half_back=recon_down_back-(down_back<1);
} //      end; //


void calcid(int picture, int mb_addr, int i, int down_for, int j, int right_for)
{
 
 b_00=picture+mb_addr+((i+down_for)/8)*2+((j+right_for)/8);
 b_10=picture+mb_addr+((i+down_for+1)/8)*2+((j+right_for)/8);
 b_01=picture+mb_addr+((i+down_for)/8)*2+((j+right_for+1)/8);
 
 p_i0=(i+down_for) % 8;
 p_i1=(i+down_for+1) % 8;
 p_j0=(j+right_for) % 8;
 p_j1=(j+right_for+1) % 8;
} //      end; //


void pred()
{
 int i,j;
 
 for (i=0; i<=63; i++)
  pred_block[i]=0;
 
 switch(mb_type){
 case 0 :  
   set_prev_values=1; 
   break;  
 case 1 :  
   calculate_forward_motion(1);
   for (i=0; i<=7; i++)
     {
       for (j=0; j<=7; j++)
	 {
	   calcid(previous_picture,macroblock_address,
		  i,down_for,j,right_for);
    
	   if ((right_half_for==0) && (down_half_for==0))
	     pred_block[i*8+j]= storage[b_00*64+p_i0*8+p_j0];
    
	   if ((right_half_for==0) &&(down_half_for==1)) 
	     pred_block[i*8+j]=(storage[b_00*64+p_i0*8+p_j0]+
				storage[b_10*64+p_i1*8+p_j0])/2;
	   
	   if ((right_half_for==1) &&(down_half_for==0)) 
	     pred_block[i*8+j]=(storage[b_00*64+p_i0*8+p_j0]+
				storage[b_01*64+p_i0*8+p_j1])/2;
	   
	   if ((right_half_for==1) &&(down_half_for==1)) 
	     pred_block[i*8+j]=(storage[b_00*64+p_i0*8+p_j0]+
				storage[b_10*64+p_i1*8+p_j0]+
				storage[b_00*64+p_i0*8+p_j0]+
				storage[b_01*64+p_i0*8+p_j1])/4;
	 } //end loop; //
     } // end loop; //
   break;  
 case 2 :  
   if (is_for_info==1) 
     {
       calculate_forward_motion(set_prev_values);
       for (i=0; i<=7; i++)
	 {
	   for(j=0; j<=7; j++)
	     { 
	       calcid(previous_picture,macroblock_address,
		      i,down_for,j,right_for);
	       
	       if ((right_half_for==0) &&(down_half_for==0))
		 pred_block[i*8+j]= storage[b_00*64+p_i0*8+p_j0];
	       
	       if ((right_half_for==0) &&(down_half_for==1)) 
		 pred_block[i*8+j]=(storage[b_00*64+p_i0*8+p_j0]+
				    storage[b_10*64+p_i1*8+p_j0])/2;
	       
	       if ((right_half_for==1) && (down_half_for==0)) {           
		 if((storage[b_00*64+p_i0*8+p_j0]+storage[b_01*64+p_i0*8+p_j1])>1)
		   pred_block[i*8+j]=1;
                 else
		   pred_block[i*8+j]=0;
	       // Transformed by hand - Jorge
/* 		 pred_block[i*8+j]=(storage[b_00*64+p_i0*8+p_j0]+ */
/* 				    storage[b_01*64+p_i0*8+p_j1])>1; */
	       }
	       
	       if ((right_half_for==1) && (down_half_for==1)) 
		 pred_block[i*8+j]=(storage[b_00*64+p_i0*8+p_j0]+
				    storage[b_10*64+p_i1*8+p_j0]+
				    storage[b_00*64+p_i0*8+p_j0]+
				    storage[b_01*64+p_i0*8+p_j1])/4;
	     } //&end loop; //
	 } //end loop; //
     }
   else
     {
       recon_right_for=recon_right_for_prev;
       recon_down_for=recon_down_for_prev;
     } //end if; //
   
   if (is_back_info==1) 
     {
       calculate_backward_motion(1);
       for (i=0; i<=7; i++)
	 {
	   for (j=0; j<=7; j++)
	     {
	       calcid(future_picture,macroblock_address,
		      i,down_for,j,right_for);
	       
	       if ((right_half_for==0) &&(down_half_for==0)) 
		 pred_block[i*8+j]= pred_block[i*8+j]+
		   storage[b_00*64+p_i0*8+p_j0];
	       
	       if ((right_half_for==0) && (down_half_for==1)) 
		 pred_block[i*8+j]= pred_block[i*8+j]+
		   (storage[b_00*64+p_i0*8+p_j0]+
		    storage[b_10*64+p_i1*8+p_j0])/2;
	       
	       if ((right_half_for==1) &&(down_half_for==0)) 
		 pred_block[i*8+j]= pred_block[i*8+j]+
		   (storage[b_00*64+p_i0*8+p_j0]+
		    storage[b_01*64+p_i0*8+p_j1])/2;
     
	       if ((right_half_for==1) &&(down_half_for==1)) 
		 pred_block[i*8+j]= pred_block[i*8+j]+
		   (storage[b_00*64+p_i0*8+p_j0]+
		    storage[b_10*64+p_i1*8+p_j0]+
		    storage[b_00*64+p_i0*8+p_j0]+
		    storage[b_01*64+p_i0*8+p_j1])/4;
	     } //end loop; //
	 } //end loop; //
     }
   else
     {
       recon_right_back=recon_right_back_prev;
       recon_down_back=recon_down_back_prev;
  } //end if; //
   
   if ((is_for_info==1) &&(is_back_info==1)) 
     {
       for (i=0; i<=7; i++)
	 {
	   for (j=0 ; j<=7; j++)
	     pred_block[i*8+j]=pred_block[i*8+j]/2;
	 } // end loop;//
     } //end if; //
   break;
   
 } // end case; //
} //    end pred; //

//

//////////////////////////////////////////////////////////
// PLUS: Addition                                   //
// ==============                                   //
// This behavior computes the addition of the variable- //
// matrices "curr_block" and "pred_block". The result   //
// is then put back intor "curr_block".             //
//////////////////////////////////////////////////////////
//
void plus()
{
 int i;
 
 for (i=0; i<=63; i++)
 {
  curr_block[i]=curr_block[i]+pred_block[i];
  if (curr_block[i]>255) curr_block[i]=255;
  if (curr_block[i]<0) curr_block[i]=0;
 } //end loop; //
} //    end plus; //


//
//////////////////////////////////////////////////
// STORE                                    //
// =====                                    //
// If the curr_block is an I- or a P-block then //
// it should be stored in memory.           //
//////////////////////////////////////////////////
//
void store()
{
 int i , addr ;
 
 if (picture_type<2) 
 {
  for (i=0; i<=63; i++) 
  { 
   addr=previous_picture+macroblock_address*6+b_num;
   addr=addr*64+i;
   storage[addr]=curr_block[i];
  } //end loop; //
 } //end if;a//
} //    end store; //

//

//////////////////////////////////////////////////-
// DISPLAY                                   //
// =======                                   //
// Displays a block either the curr_block or the //
// appropriate block from the previous picture.  //
//////////////////////////////////////////////////-
//
void display()
{
 int status;
 int addr ;
 int i ;
 
 i=0;
 status=0;
 while(status!=3) 
 {
  if (clock==1)
  {
   if (status==0) 
   {
    if (picture_type<2) 
    {
     addr=(future_picture+macroblock_address*6+b_num)*64;
     addr=addr+i;
     setoutbuffer=storage[addr];
     putbits=8;
    }
    else
    {  //- display curr_block; //
     setoutbuffer=curr_block[i];
     putbits=8;
    } //end if; //
    status=1;
   }
   else if (status==1)
   {
    if (to_transmit==0) 
    {
     putbits=0;
     status=2;
    } //end if;//
   }
   else if (status==2) 
   {
    i=i+1;
    if (i>63) status=3;
    else status=0;
   } //end if; //
  } //end if;//
 } //end loop; //
} //$a    end display; //


//
//////////////////////////////////////////////
// OUTBUFFER                            //
// =========                            //
// Gets the data that should be transmitted //
// from the display behavior.           //
//////////////////////////////////////////////
//
void outbuffer()
{
 int status;
 int i;

 status=0;
/* Begin commented by Jorge */
/* Since for our WCET benchmarks we assume that loop information is
   given by a third party we can replace while(1) for a for-loop. The
   key part is to replace it with another loop in order to apply loop
   invariant generation. */
 //while(1) 
/* End commented by Jorge */

 for (i=0;i<10;i++)
 {
  if (clock==0)
  {
   if (status==0) 
   {
    if (putbits>0) 
    {
     to_transmit=putbits;
     status=1;
    } //end if; //
   }
   else if (status==1) 
   {
    isoutbit=1;
    outbit=setoutbuffer;
    to_transmit=to_transmit-1;
    if (to_transmit==0) status=2; 
   }
   else if (status==2) 
   {
    isoutbit=0;
    if (putbits==0) 
    {
     to_transmit=-1;
     status=0;
    } //end if; //
   } //end if; //
  } //end if; //
 } //end loop; //
} //    end outbuffer; //

void execute()
{ 
  inbuffer();
  vldcontrol();
  dequant();
  idct();
  pred();
  plus();
  store();
  display();
  outbuffer();
}

int main()
{

 int i;
 init();
/* Begin commented by Jorge */
/* Since for our WCET benchmarks we assume that loop information is
   given by a third party we can replace while(1) for a for-loop. The
   key part is to replace it with another loop in order to apply loop
   invariant generation. */
 //while(1) execute();
/* End commented by Jorge */

 for (i=0;i<10;i++){ execute();}
 return 0;
}
