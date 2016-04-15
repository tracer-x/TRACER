//# 1 "fourier.c"
//# 1 "<built-in>"
//# 1 "<command-line>"
//# 1 "fourier.c"
//# 20 "fourier.c"

int stderr=2;
double DDC_PI=3.14;

double sin(double x){
  double NONDET;
  return NONDET;
}
double cos(double x){
  double NONDET;
  return NONDET;
}

void srand(int seed){}

float rand(void){ 
  float NONDET;
  return NONDET;
}

void printf(char * str,...){}
void fprintf(int stream, char * msg, int x){}
int atoi(char x){}

char *  malloc(int i )
{
  int NONDET;
  if(NONDET)
    return (char *  )0;
  else
    return (char *  )1;
}
void free( void * loc){}

// # 67 "fourier.c"
int IsPowerOfTwo ( unsigned x )
{
    if ( x < 2 )
        return 0;

    if ( x & (x-1) )
        return 0;

    return 1;
}


unsigned NumberOfBitsNeeded ( unsigned PowerOfTwo )
{
    unsigned i;

    if ( PowerOfTwo < 2 )
    {
        fprintf (
            stderr,
            ">>> Error in fftmisc.c: argument %d to NumberOfBitsNeeded is too small.\n",
            PowerOfTwo );

        return 0; //exit(1);
    }

    for ( i=0; ; i++ )
    {
        if ( PowerOfTwo & (1 << i) )
            return i;
    }
}



unsigned ReverseBits ( unsigned index, unsigned NumBits )
{
    unsigned i, rev;
    rev=0;
    for ( i=0; i < NumBits; i++ )
    {
        rev = (rev << 1) | (index & 1);
        index = index >> 1;
    }

    return rev;
}


double Index_to_frequency ( unsigned NumSamples, unsigned Index )
{
    if ( Index >= NumSamples )
        return 0.0;
    else if ( Index <= NumSamples/2 )
        return (double)Index / (double)NumSamples;

    return -(double)(NumSamples-Index) / (double)NumSamples;
}
// # 134 "fourier.c"
static void CheckPointer ( void *p, char *name )
{
    if ( p == (void *) 0 )
    {
        fprintf ( stderr, "Error in fft_float():  %s == NULL\n", name );
        return; // exit(1);
    }
}


void fft_float (
    unsigned NumSamples,
    int InverseTransform,
    float *RealIn,
    float *ImagIn,
    float *RealOut,
    float *ImagOut )
{
    unsigned NumBits;
    unsigned i, j, k, n;
    unsigned BlockSize, BlockEnd;

    double angle_numerator = 2.0 * DDC_PI;
    double tr, ti;
    int temp;
    temp = IsPowerOfTwo(NumSamples);
    if ( !temp )
    {
        fprintf (
            stderr,
            "Error in fft():  NumSamples=%u is not power of two\n",
            NumSamples );

        return; // exit(1);
    }

    if ( InverseTransform )
        angle_numerator = -angle_numerator;

    CheckPointer(RealIn,"RealIn");
    CheckPointer(RealOut,"RealOut");
    CheckPointer(ImagOut,"ImagOut");

    NumBits = NumberOfBitsNeeded ( NumSamples );





    for ( i=0; i < NumSamples; i++ )
    {
        j = ReverseBits ( i, NumBits );
        RealOut[j] = RealIn[i];
	if(ImagIn == (void *) 0) 
	  ImagOut[j] = 0.0;
	else 
	  ImagOut[j] =ImagIn[i];
    }





    BlockEnd = 1;
    BlockSize = 2;
    while(BlockSize <= NumSamples)
    //  for ( BlockSize = 2; BlockSize <= NumSamples; BlockSize <<= 1 )
    {
        double delta_angle = angle_numerator / (double)BlockSize;
        double sm2 = sin ( -2 * delta_angle );
        double sm1 = sin ( -delta_angle );
        double cm2 = cos ( -2 * delta_angle );
        double cm1 = cos ( -delta_angle );
        double w = 2 * cm1;
        double ar[3], ai[3];
        double temp;

        for ( i=0; i < NumSamples; i += BlockSize )
        {
            ar[2] = cm2;
            ar[1] = cm1;

            ai[2] = sm2;
            ai[1] = sm1;

            for ( j=i, n=0; n < BlockEnd; j++, n++ )
            {
                ar[0] = w*ar[1] - ar[2];
                ar[2] = ar[1];
                ar[1] = ar[0];

                ai[0] = w*ai[1] - ai[2];
                ai[2] = ai[1];
                ai[1] = ai[0];

                k = j + BlockEnd;
                tr = ar[0]*RealOut[k] - ai[0]*ImagOut[k];
                ti = ar[0]*ImagOut[k] + ai[0]*RealOut[k];

                RealOut[k] = RealOut[j] - tr;
                ImagOut[k] = ImagOut[j] - ti;

                RealOut[j] += tr;
                ImagOut[j] += ti;
            }
        }

        BlockEnd = BlockSize;
	BlockSize  = BlockSize << 1;
    }





    if ( InverseTransform )
    {
        double denom = (double)NumSamples;

        for ( i=0; i < NumSamples; i++ )
        {
            RealOut[i] /= denom;
            ImagOut[i] /= denom;
        }
    }
}




int main(int argc, char *argv[]) {
  unsigned MAXSIZE;
  unsigned MAXWAVES;
  unsigned i,j;
  float *RealIn;
  float *ImagIn;
  float *RealOut;
  float *ImagOut;
  float *coeff;
  float *amp;
  int invfft=0;
  float temp;

  if (argc<3)
    {
      printf("Usage: fft <waves> <length> -i\n");
      printf("-i performs an inverse fft\n");
      printf("make <waves> random sinusoids");
      printf("<length> is the number of samples\n");
      return -1; // exit(-1);
    }
  else if (argc==4){
    //    invfft = !strncmp(argv[3],"-i",2);

  }

  MAXSIZE=atoi(argv[2]);
  MAXWAVES=atoi(argv[1]);
  
  srand(1);
  
  RealIn=(float*)malloc(sizeof(float)*MAXSIZE);
  ImagIn=(float*)malloc(sizeof(float)*MAXSIZE);
  RealOut=(float*)malloc(sizeof(float)*MAXSIZE);
  ImagOut=(float*)malloc(sizeof(float)*MAXSIZE);
  coeff=(float*)malloc(sizeof(float)*MAXWAVES);
  amp=(float*)malloc(sizeof(float)*MAXWAVES);
  

  for(i=0;i<MAXWAVES;i++)
    {
      coeff[i] = rand() /*% 1000*/;
      amp[i] = rand() /*% 1000*/;
    }
  for(i=0;i<MAXSIZE;i++)
    {
      
      RealIn[i]=0;
      for(j=0;j<MAXWAVES;j++)
	{
	  
	  temp = rand();
	  if (temp /*%2*/)
	    {
	      RealIn[i]+=coeff[j]*cos(amp[j]*i);
	    }
	  else
	    {
	      RealIn[i]+=coeff[j]*sin(amp[j]*i);
	    }
	  ImagIn[i]=0;
	}
    }
  
  
  fft_float (MAXSIZE,invfft,RealIn,ImagIn,RealOut,ImagOut);
  
  printf("RealOut:\n");
  for (i=0;i<MAXSIZE;i++)
    printf("%f \t", RealOut[i]);

  printf("\n");
  
  printf("ImagOut:\n");
 for (i=0;i<MAXSIZE;i++)
   printf("%f \t", ImagOut[i]);

 printf("\n");
 
 free(RealIn);
 free(ImagIn);
 free(RealOut);
 free(ImagOut);
 free(coeff);
 free(amp);
 return 0; //exit(0);


}
