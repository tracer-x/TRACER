/* $Id: crc.c,v 1.2 2005/04/04 11:34:58 csg Exp $ */

/*************************************************************************/
/*                                                                       */
/*   SNU-RT Benchmark Suite for Worst Case Timing Analysis               */
/*   =====================================================               */
/*                              Collected and Modified by S.-S. Lim      */
/*                                           sslim@archi.snu.ac.kr       */
/*                                         Real-Time Research Group      */
/*                                        Seoul National University      */
/*                                                                       */
/*                                                                       */
/*        < Features > - restrictions for our experimental environment   */
/*                                                                       */
/*          1. Completely structured.                                    */
/*               - There are no unconditional jumps.                     */
/*               - There are no exit from loop bodies.                   */
/*                 (There are no 'break' or 'return' in loop bodies)     */
/*          2. No 'switch' statements.                                   */
/*          3. No 'do..while' statements.                                */
/*          4. Expressions are restricted.                               */
/*               - There are no multiple expressions joined by 'or',     */
/*                'and' operations.                                      */
/*          5. No library calls.                                         */
/*               - All the functions needed are implemented in the       */
/*                 source file.                                          */
/*                                                                       */
/*                                                                       */
/*************************************************************************/
/*                                                                       */
/*  FILE: crc.c                                                          */
/*  SOURCE : Numerical Recipes in C - The Second Edition                 */
/*                                                                       */
/*  DESCRIPTION :                                                        */
/*                                                                       */
/*     A demonstration for CRC (Cyclic Redundancy Check) operation.      */
/*     The CRC is manipulated as two functions, icrc1 and icrc.          */
/*     icrc1 is for one character and icrc uses icrc1 for a string.      */
/*     The input string is stored in array lin[].                        */
/*     icrc is called two times, one for X-Modem string CRC and the      */
/*     other for X-Modem packet CRC.                                     */
/*                                                                       */
/*  REMARK :                                                             */
/*                                                                       */
/*  EXECUTION TIME :                                                     */
/*                                                                       */
/*                                                                       */
/*************************************************************************/


#define LOBYTE(x) ((unsigned char)((x) & 0xFF))
#define HIBYTE(x) ((unsigned char)((x) >> 8))
unsigned char lin[256] = "asdffeagewaHAFEFaeDsFEawFdsFaefaeerdjgp";

/****************************************/
/******* PROBLEMS to be compiled ********/
/****************************************/
/* - only integer arrays ?              */
/* - bitwise operations not supported ? */
/****************************************/


unsigned short icrc1(unsigned short crc, unsigned char onech) 
{
	int i;
	unsigned short ans =(crc^onech << 8); 

	for (i=0;i<8;i++) {
	  if (ans & 0x8000)  
	    ans = (ans <<= 1) ^ 4129;
	  else
	    ans <<= 1;
	}
	return ans;
}

unsigned short icrc(unsigned short crc, unsigned long len,
		    short jinit, int jrev)
{
  /* unsigned short icrc1(unsigned short crc, unsigned char onech); */
  static unsigned short icrctb[256],init=0;
  static unsigned char  rchr[256];
  unsigned short tmp1, tmp2, j,cword=crc;
  static unsigned char it[16]={0,8,4,12,2,10,6,14,1,9,5,13,3,11,7,15};

  if (!init) {
    init=1;
    for (j=0;j<=255;j++) {
      icrctb[j]=icrc1(j << 8,(unsigned char)0);
      rchr[j]=(unsigned char)(it[j & 0xF] << 4 | it[j >> 4]);
    }
  }
  if (jinit >= 0) cword=((unsigned char) jinit) | (((unsigned char) jinit) << 8);
  else if (jrev < 0)
    cword=rchr[HIBYTE(cword)] | rchr[LOBYTE(cword)] << 8;

  for (j=1;j<=len;j++) {
    if (jrev < 0) {
      tmp1 = rchr[lin[j]]^ HIBYTE(cword);
    }
    else {
      tmp1 = lin[j]^ HIBYTE(cword);
    }
    cword = icrctb[tmp1] ^ LOBYTE(cword) << 8;
  }
  if (jrev >= 0) {
    tmp2 = cword;
  }
  else {
    tmp2 = rchr[HIBYTE(cword)] | rchr[LOBYTE(cword)] << 8;
  }
  return (tmp2 );
}


int main(void) 
{ 

/* /\* unsigned char lin[256] = "asdffeagewaHAFEFaeDsFEawFdsFaefaeerdjgp"; *\/ */
/* /\*   lin[0] = 'a';    lin[10] = 'a';    lin[20] = 'F';    lin[30] = 'f';   *\/ */
/* /\*   lin[1] = 's';    lin[11] = 'H';    lin[21] = 'E';    lin[31] = 'a';    *\/ */
/* /\*   lin[2] = 'd';    lin[12] = 'A';    lin[22] = 'a';    lin[32] = 'e';    *\/ */
/* /\*   lin[3] = 'f';    lin[13] = 'F';    lin[23] = 'w';    lin[33] = 'e';    *\/ */
/* /\*   lin[4] = 'f';    lin[14] = 'E';    lin[24] = 'F';    lin[34] = 'r';   *\/ */
/* /\*   lin[5] = 'e';    lin[15] = 'F';    lin[25] = 'd';    lin[35] = 'd';   *\/ */
/* /\*   lin[6] = 'a';    lin[16] = 'a';    lin[26] = 's';    lin[36] = 'j';   *\/ */
/* /\*   lin[7] = 'g';    lin[17] = 'e';    lin[27] = 'F';    lin[37] = 'g';   *\/ */
/* /\*   lin[8] = 'e';    lin[18] = 'D';    lin[28] = 'a';    lin[38] = 'p';   *\/ */
/* /\*   lin[9] = 'w';    lin[19] = 's';    lin[29] = 'e';    lin[39] = '\0';   *\/ */

  unsigned short i1,i2;
  unsigned long n;

  n=40;
  lin[n+1]=0;
  i1=icrc(0,n,(short)0,1);
  lin[n+1]=HIBYTE(i1);
  lin[n+2]=LOBYTE(i1);
  i2=icrc(i1,n+2,(short)0,1);
     return 0; 
} 


