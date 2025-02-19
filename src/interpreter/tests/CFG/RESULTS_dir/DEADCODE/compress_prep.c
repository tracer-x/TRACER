typedef long int code_int;
typedef long int count_int;


typedef unsigned char char_type;
int n_bits;
int maxbits;
code_int maxcode;
code_int maxmaxcode;
code_int hsize;
count_int fsize;
code_int free_ent;
int exit_stat;
int nomagic;
int zcat_flg;
int quiet;
int block_compress;
int clear_flg;
long int ratio;
count_int checkpoint;
int force;
char ofname[100];
int InCnt;
int apsim_InCnt;
unsigned char *InBuff;
unsigned char *OutBuff;
char orig_text_buffer[50];
char comp_text_buffer[50 + 5];
count_int htab[257];
unsigned short codetab[257];
char buf[16];

long int in_count;
long int out_count;

/* void initbuffer(void); */
/* void compress(void); */
/* void cl_hash(count_int hsize); */
/* unsigned int getbyte(void); */
/* void putbyte(char c); */
/* void cl_block(void); */
/* void output(code_int code); */
/* void writebytes(char *buf, int n); */

static int offset; 
/* long int in_count = 1; */
long int bytes_out;
/* long int out_count = 0; */



int main(void)
{
  int count;
 int initbuffer_seed = 1;
 int initbuffer_i;
 int initbuffer_tabort;
  register long compress_fcode;
  register code_int compress_i = 0;
  register int compress_c;
  register code_int compress_ent;
  register int compress_disp;
  register code_int compress_hsize_reg;
  register int compress_hshift;


  /*initglobalvars();*/
  maxbits = 16;
  maxmaxcode = 1L << 16;
  hsize = 257;
  free_ent = 0;
  exit_stat = 0;
  nomagic = 1;
  zcat_flg = 0;
  quiet = 1;
  block_compress = 0x80;
  clear_flg = 0;
  ratio = 0;
  checkpoint = 10000;
  force = 0;

  in_count = 1; 
  out_count = 0;

  count = 50;
  
  initbuffer();
 for (initbuffer_i = 0; initbuffer_i < 50; initbuffer_i++) {

  initbuffer_tabort = initbuffer_i;
  initbuffer_seed = ((initbuffer_seed * 133) + 81) % 8095;

  orig_text_buffer[initbuffer_i] = initbuffer_seed % 256;
 }
  
  maxbits = 16;
  maxmaxcode = 1 << maxbits;
  
  InCnt = count;
  apsim_InCnt = 50 + 3;
  InBuff = (unsigned char *) orig_text_buffer;
  OutBuff = (unsigned char *) comp_text_buffer;
  
  /*compress();*/
  
  
  offset = 0;
  bytes_out = 3;
  out_count = 0;
  clear_flg = 0;
  ratio = 0;
  in_count = 1;
  checkpoint = 10000;
  maxcode = ((1 << (n_bits = 9)) - 1);
  free_ent = ((block_compress) ? (257) : (256));
  
  compress_ent = getbyte();
  
  compress_hshift = 0;
  for (compress_fcode = (long) hsize; compress_fcode < 65536L; compress_fcode *= 2L) {
  compress_hshift++;
  }
  
  compress_hshift = 8 - compress_hshift;
  
  compress_hsize_reg = hsize;
  cl_hash((count_int) compress_hsize_reg);
  
  
  while (InCnt > 0) {
    int apsim_bound111 = 0;
    
    compress_c = getbyte();
    
    in_count++;
    compress_fcode = (long) (((long) compress_c << maxbits) + compress_ent);
    compress_i = ((compress_c << compress_hshift) ^ compress_ent);
    
    if (htab[compress_i] == compress_fcode) {
      compress_ent = codetab[compress_i];
      continue;
    } else if ((long) htab[compress_i] < 0) {
      goto nomatch;
    }
    compress_disp = compress_hsize_reg - compress_i;
    if (compress_i == 0) {
      compress_disp = 1;
    }
  probe:

    if ((compress_i -= compress_disp) < 0) {
      compress_i += compress_hsize_reg;
    }
    if (htab[compress_i] == compress_fcode) {
      compress_ent = codetab[compress_i];
   continue;
    }
    if ((long) htab[compress_i] > 0 && (++apsim_bound111 < in_count))
      goto probe;
  nomatch:
    
    out_count++;
    compress_ent = compress_c;
    if (free_ent < maxmaxcode) {
      codetab[compress_i] = free_ent++;
      htab[compress_i] = compress_fcode;
    } else if (((count_int) in_count >= checkpoint) && (block_compress)) {
      cl_block();
    }
  }
  if (bytes_out > in_count) {
    exit_stat = 2;
  }
  return;
  //return (0);  
}



void cl_block(void)
{
 register long int rat;
 
 checkpoint = in_count + 10000;
 
 if (in_count > 0x007fffff) {

  rat = bytes_out >> 8;
  if (rat == 0) {
   rat = 0x7fffffff;
  } else {
   rat = in_count / rat;
  }
 } else {
  rat = (in_count << 8) / bytes_out;
 }
 if (rat > ratio) {
  ratio = rat;
 } else {
  ratio = 0;
  cl_hash((count_int) hsize);


  free_ent = 257;
  clear_flg = 1;
  output((code_int) 256);
 }
}

void
cl_hash(count_int hsize)
{
 register count_int *htab_p = htab + hsize;
 register long i;
 register long m1 = -1;

 i = hsize - 16;
 do {

  *(htab_p - 16) = m1;
  *(htab_p - 15) = m1;
  *(htab_p - 14) = m1;
  *(htab_p - 13) = m1;
  *(htab_p - 12) = m1;
  *(htab_p - 11) = m1;
  *(htab_p - 10) = m1;
  *(htab_p - 9) = m1;
  *(htab_p - 8) = m1;
  *(htab_p - 7) = m1;
  *(htab_p - 6) = m1;
  *(htab_p - 5) = m1;
  *(htab_p - 4) = m1;
  *(htab_p - 3) = m1;
  *(htab_p - 2) = m1;
  *(htab_p - 1) = m1;
  htab_p -= 16;
 } while ((i -= 16) >= 0);
 for (i += 16; i > 0; i--) {
  *--htab_p = m1;
 }
}



unsigned int
getbyte(void)
{
 if (InCnt > 0 && (apsim_InCnt-- > 0)) {
  InCnt--;
  return ((unsigned int) *InBuff++);
 } else {
  return (-1);
 }
}

void
putbyte(char c)
{
 *OutBuff++ = c;
}


void
writebytes(char *buf, int n)
{
 int i;
 for (i = 0; (i < n) && (i < 16); i++) {
  *OutBuff++ = buf[i];
 }
}



char_type lmask[9] = {0xff, 0xfe, 0xfc, 0xf8, 0xf0, 0xe0, 0xc0, 0x80, 0x00};
char_type rmask[9] = {0x00, 0x01, 0x03, 0x07, 0x0f, 0x1f, 0x3f, 0x7f, 0xff};

void output(code_int code)
{

 register int r_off = offset, bits = n_bits;
 register char *bp = buf;

 if (code >= 0) {

  bp += (r_off >> 3);
  r_off &= 7;
  *bp = ((*bp & rmask[r_off]) | (code << r_off)) & lmask[r_off];
  bp++;
  bits -= (8 - r_off);
  code >>= 8 - r_off;

  if (bits >= 8) {

   *bp++ = code;
   code >>= 8;
   bits -= 8;
  }

  if (bits) {
   *bp = code;
  }
  offset += n_bits;
  if (offset == (n_bits << 3)) {
   bp = buf;
   bits = n_bits;
   bytes_out += bits;
   do {
    putbyte(*bp++);
   } while ((--bits) && ((bp - buf < 16)));
   offset = 0;
  }

  if (free_ent > maxcode || ((clear_flg > 0))) {

   if (offset > 0) {
    writebytes(buf, n_bits);
    bytes_out += n_bits;
   }
   offset = 0;
   if (clear_flg) {
    maxcode = ((1 << (n_bits = 9)) - 1);
    clear_flg = 0;
   } else {
    n_bits++;
    if (n_bits == maxbits) {
     maxcode = maxmaxcode;
    } else {
     maxcode = ((1 << (n_bits)) - 1);
    }
   }
  }
 } else {

  if (offset > 0) {
   writebytes(buf, ((offset + 7) / 8));
  }
  bytes_out += (offset + 7) / 8;
  offset = 0;
 }
}
