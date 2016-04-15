#define UPPERLIMIT 20

/****************************************/
/******* PROBLEMS to be compiled ********/
/****************************************/
/* 2-dimensional matrices supported?    */
/****************************************/


int Seed;

int ArrayA[UPPERLIMIT][UPPERLIMIT];
int ArrayB[UPPERLIMIT][UPPERLIMIT];
int ResultArray[UPPERLIMIT][UPPERLIMIT];

void InitSeed(void)
{
  Seed = 0;
}


void Test(int A[UPPERLIMIT][UPPERLIMIT],
	  int B[UPPERLIMIT][UPPERLIMIT],
	  int Res[UPPERLIMIT][UPPERLIMIT])
{
   Initialize(A);
   Initialize(B);
   Multiply(A, B, Res);
}


int RandomInteger(void)
{
   Seed = ((Seed * 133) + 81) % 8095;   
   return (Seed);
}

void Initialize(int Array[UPPERLIMIT][UPPERLIMIT])
{
   int OuterIndex, InnerIndex;

   for (OuterIndex = 0; OuterIndex < UPPERLIMIT; OuterIndex++)
      for (InnerIndex = 0; InnerIndex < UPPERLIMIT; InnerIndex++)
         Array[OuterIndex][InnerIndex] = RandomInteger(); 
}

void Multiply(int A[UPPERLIMIT][UPPERLIMIT],
	      int B[UPPERLIMIT][UPPERLIMIT],
	      int Res[UPPERLIMIT][UPPERLIMIT])
{
   int Outer, Inner, Index;

   for (Outer = 0; Outer < UPPERLIMIT; Outer++)
      for (Inner = 0; Inner < UPPERLIMIT; Inner++)
      {
         Res [Outer][Inner] = 0;
         for (Index = 0; Index < UPPERLIMIT; Index++)
            Res[Outer][Inner]  +=
               A[Outer][Index] * B[Index][Inner];
       }
}

void main()
{
   InitSeed();   
   Test(ArrayA, ArrayB, ResultArray);
}
