
static char Bitlist0;
static char Bitlist4;
static char Bitlist6;

unsigned long X11;
unsigned long X2;
unsigned long X1;
unsigned long X3 ;
unsigned long X5 ;
unsigned long X7 ;
unsigned long X8 ;
unsigned long X9 ;
int X10;
int X12;
char X6;
char X4;

unsigned long time;

void interface()
{
   if (Bitlist4)
   X1 = time;
   if (Bitlist4 || Bitlist6)
   X2 = time;
   if ((X3 != 0) && (time - X3 >= 0.5))
   {
      X4 = 0;
      X3 = 0;

   }
   if ((X5 != 0) && (time - X5 >= 0.5))
   {
      X6 = 0;
      X5 = 0;

   }
   if ((X7 != 0) && (time - X7 >= 0.5))
   {
      X6 = 0;
      X7 = 0;

   }
   if ((X8 != 0) && (time - X8 >= 0.5))
   {
      X8 = 0;

   }
   if ((X9 != 0) && (time - X9 >= 0.5))
   {
      X9 = 0;

   }
   if ((Bitlist0 || X10 != X12))
   X11 = time;


}


main()
{
  interface();
}
