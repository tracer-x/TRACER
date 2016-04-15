
static char B0;
static char B1;
static char B2;
static char B3;
static char B4;
static char B5;
static char B6;
static char B7;
static char B8;
static char B9;
static char B10;
static char B11;
static char B12;
static char B13;
static char B14;
static char B15;
static char B16;
static char B17;
static char B18;
static char B19;
static char B20;
static char B21;
static char B22;
static char B23;
static char B24;
static char B25;
static char B26;
static char B27;
static char B28;
static char B29;
static char B30;
static char B31;
static char B32;
static char B33;
static char B34;
static char B35;
static char B36;
static char B37;
static char B38;
static char B39;
static char B40;
static char B41;
static char B42;
static char B43;
static char B44;
static char B45;
static char B46;
static char B47;
static char B48;
static char B49;
static char B50;
static char B51;
static char B52;
static char B53;
static char B54;
static char B55;
static char B56;
static char B57;
static char B58;
static char B59;
static char B60;
static char B61;
static char B62;
static char B63;

unsigned long X1;

unsigned long X2;
unsigned long X3;
unsigned long X4;
unsigned long X5;
unsigned long X6;
int X7;
int X8;
int X9;
unsigned long X10;
unsigned long X11;
int X12;
int X13;
int X14;
int X15;
int X16;
int X17;
int X18;
int X19;
int X20;
int X21;
int X22;
int X23;
int X24;
char X25;
char X27;
char X26;
char X28;
char X29;
char X30;
char X31;
char X32;
char X33;
char X34;
char X35;
char X36;
char X37;
char X38;
char X39;
char X40;
char X41;
char X42;
char X43;
char X44;
char X45;
char X46;
char X47;
char X48;
char X49;
char X50;
char X51;
char X52;
char X53;
char X54;
char X55;
char X56;
char X57;
char X58;
char X59;
char X60;
char X61;
char X62;
char X63;
char X64;
char X65;
char X66;
char X67;
char X68;
char X69;
char X70;
char X71;
char X72;
char X73;
char X74;
char X75;
char X76;
char X77;
char X78;
char X79;
char X80;
char X81;
char X82;
char X83;
char X84;
char X85;
char X86;

unsigned long time;
char stable;
char step;

char X87;
char X88;
char X89;
char X90;
char X91;
char X92;
char X93;
char X94;
char X95;
char X96;
char X97;
char X98;
char X99;
char X100;
char X101;
char X102;


void interface()
{
   if (B4)
   X3 = time;
   if (B4 || B6)
   X2 = time;
   if ((X4 != 0) && (time - X4 >= 0.5))
   {
      X53 = 0;
      X4 = 0;

   }
   if ((X5 != 0) && (time - X5 >= 0.5))
   {
      X50 = 0;
      X5 = 0;

   }
   if ((X6 != 0) && (time - X6 >= 0.5))
   {
      X50 = 0;
      X6 = 0;

   }
   if ((X10 != 0) && (time - X10 >= 0.5))
   {
      X10 = 0;

   }
   if ((X11 != 0) && (time - X11 >= 0.5))
   {
      X11 = 0;

   }
   if ((B0 || X22 != X24))
   X1 = time;


}


void init()
{
    X1 = 0;
    X2 = 0;
    X3 = 0;
   X87 = 0;
   X88 = 0;
   X89 = 0;
   X90 = 0;
   X91 = 0;
   X92 = 0;
   X93 = 0;
   X94 = 0;
   X95 = 0;
   X96 = 0;
   X97 = 0;
   X98 = 0;
   X99 = 0;
   X100 = 0;
   X101 = 0;
   X102 = 0;


}



void generic_KINDERSICHERUNG_CTRL(void)
{
   if (B10)
   {
      switch (X90)
      {
         case 1 :
         {
            if (!(X34 || X30))
            {
               stable = 0;
                X44 = 0;
                 X47 = 0;

               X90 = 3;
               X88 = 0;
               break;
            }
            switch (X88)
            {
               case 1 :
               {
                  if ((X34 && !(X35)))
                  {
                     stable = 0;
                      X47 = 1;

                     X88 = 1;
                     break;
                  }
                  if ((X30 && !(X31)))
                  {
                     stable = 0;
                      X44 = 1;

                     X88 = 1;
                     break;
                  }
                  if ((!(X34) && X35))
                  {
                     stable = 0;
                      X47 = 0;

                     X88 = 1;
                     break;
                  }
                  if ((!(X30) && X31))
                  {
                     stable = 0;
                      X44 = 0;

                     X88 = 1;
                     break;
                  }
                  break;
               }
               default:
               {
                  stable = 0;
                  break;
               }
            }
            break;
         }
         case 2 :
         {
            if (!(X36 || X32))
            {
               stable = 0;
                X44 = 0;
                 X47 = 0;

               X90 = 3;
               X89 = 0;
               break;
            }
            switch (X89)
            {
               case 1 :
               {
                  if ((X36 && !(X37)))
                  {
                     stable = 0;
                      X47 = 1;

                     X89 = 1;
                     break;
                  }
                  if ((X32 && !(X33)))
                  {
                     stable = 0;
                      X44 = 1;

                     X89 = 1;
                     break;
                  }
                  if ((!(X36) && X37))
                  {
                     stable = 0;
                      X47 = 0;

                     X89 = 1;
                     break;
                  }
                  if ((!(X32) && X33))
                  {
                     stable = 0;
                      X44 = 0;

                     X89 = 1;
                     break;
                  }
                  break;
               }
               default:
               {
                  stable = 0;
                  break;
               }
            }
            break;
         }
         case 3 :
         {
            if ((!X38) && (X32 && X36))
            {
               stable = 0;
                 X44 = 1;
                 X47 = 1;

               X90 = 2;
               break;
            }
            if ((!X38) && (X32 && !X36))
            {
               stable = 0;
                 X44 = 1;

               X90 = 2;
               break;
            }
            if ((!X38) && (!X32 && X36))
            {
               stable = 0;
                 X47 = 1;

               X90 = 2;
               break;
            }
            if ((!X30 && X34 && !X38))
            {
               stable = 0;
                X47 = 1;

               X90 = 1;
               break;
            }
            if ((X30 && X34))
            {
               stable = 0;
                X47 = 1;
                 X44 = 1;

               X90 = 1;
               break;
            }
            if ((X30 && !X34 && !X38))
            {
               stable = 0;
                X44 = 1;

               X90 = 1;
               break;
            }
            break;
         }
         default:
         {
            stable = 0;
            X90 = 3;
            break;
         }
      }
   }
}

void generic_FH_TUERMODUL_CTRL(void)
{
   if (!B13 && B15 && !B14)
   {
      B4 = 0;
      B6 = 0;
   }
   if (B13)
   {
      if (!B10)
      {
         X90 = 3;
      }
      B11 = 0;
      if (!B19)
      {
         B0 = 0;
         X102 = 1;
      }
      B20 = 0;
      B11 = 1;
      B20 = 1;
      switch (X91)
      {
         case 1 :
         {
            if ((X7 == 59 && !(X9 == 59)))
            {
               stable = 0;

               X91 = 3;
               X94 = 3;
               break;
            }
            break;
         }
         case 2 :
         {
            if (((X39 && !(X41))) && ((X49)))
            {
               stable = 0;
               X50 = 0;
               X6 = time;

               X91 = 3;
               X94 = 3;
               break;
            }
            switch (X87)
            {
               case 1 :
               {
                  if (!(X43))
                  {
                     stable = 0;
                     X50 = 0;

                     X87 = 3;
                     break;
                  }
                  break;
               }
               case 2 :
               {
                  if (!(X46))
                  {
                     stable = 0;
                     X53 = 0;

                     X87 = 3;
                     break;
                  }
                  break;
               }
               case 3 :
               {
                  if ((X46))
                  {
                     stable = 0;
                     X53 = 1;

                     X87 = 2;
                     break;
                  }
                  if ((X43))
                  {
                     stable = 0;
                     X50 = 1;

                     X87 = 1;
                     break;
                  }
                  break;
               }
               default:
               {
                  stable = 0;
                  X87 = 3;
                  break;
               }
            }
            break;
         }
         case 3 :
         {
            if (((X7 > 60 && !(X9 > 60))) && ((!(X26 || X25))))
            {
               stable = 0;
               X50 = 0;
               X53 = 0;

               X91 = 1;
               break;
            }
            if (((X39 && !(X41))) && ((X52)))
            {
               stable = 0;
               X53 = 0;
               X4 = time;

               X91 = 2;
               X87 = 3;
               break;
            }
            if (((X39 && !(X41))) && ((X49)))
            {
               stable = 0;
               X50 = 0;
               X5 = time;

               X91 = 2;
               X87 = 3;
               break;
            }
            switch (X94)
            {
               case 1 :
               {
                  if ((X12 >= 405))
                  {
                     stable = 0;
                     X53 = 0;

                     X94 = 3;
                     break;
                  }
                  switch (X97)
                  {
                     case 1 :
                     {
                        if ((X43 && !(X45)) || (X46 && !(X48)))
                        {
                           stable = 0;
                           X53 = 0;

                           X94 = 3;
                           X97 = 0;
                           break;
                        }
                        break;
                     }
                     case 2 :
                     {
                        if ((X43 && !(X45)))
                        {
                           stable = 0;

                           X97 = 1;
                           break;
                        }
                        if ((!(X46) && X48))
                        {
                           stable = 0;
                           X53 = 0;

                           X94 = 3;
                           X97 = 0;
                           break;
                        }
                        break;
                     }
                     default:
                     {
                        stable = 0;
                        X97 = 2;
                        break;
                     }
                  }
                  break;
               }
               case 2 :
               {
                  if ((X12 <= 0))
                  {
                     stable = 0;
                     X50 = 0;

                     X94 = 3;
                     break;
                  }
                  switch (X98)
                  {
                     case 1 :
                     {
                        if ((X46 && !(X48)) || (X43 && !(X45)))
                        {
                           stable = 0;
                           X50 = 0;

                           X94 = 3;
                           break;
                        }
                        switch (X95)
                        {
                           case 1 :
                           {
                              B23 = 0;
                              if (B22)
                              {
                                 stable = 0;
                                 X50 = 1;
                                 X27 = 0;

                                 X95 = 2;
                                  X53 = 0;

                                 B17 = 1;
                                 break;
                              }
                              break;
                           }
                           case 2 :
                           {
                              if (B24)
                              {
                                 stable = 0;
                                 X27 = 1;

                                 B23 = 1;
                                 X95 = 1;
                                  B17 = 0;
                                 X50 = 0;

                                 X10 = time;
                                 X53 = 1;
                                 break;
                              }
                              break;
                           }
                           default:
                           {
                              stable = 0;
                              X95 = 2;
                              B17 = 1;
                              break;
                           }
                        }
                        break;
                     }
                     case 2 :
                     {
                        if ((!(X43) && X45))
                        {
                           stable = 0;
                           X50 = 0;

                           X94 = 3;
                           break;
                        }
                        switch (X96)
                        {
                           case 1 :
                           {
                              B23 = 0;
                              if (B22)
                              {
                                 stable = 0;
                                 X28 = 0;

                                 X96 = 2;
                                  X53 = 0;

                                 B17 = 1;
                                 X50 = 1;
                                 break;
                              }
                              break;
                           }
                           case 2 :
                           {
                              if (B24)
                              {
                                 stable = 0;
                                 X50 = 0;
                                 X28 = 1;

                                 B23 = 1;
                                 X96 = 1;
                                  B17 = 0;

                                 X11 = time;
                                 X53 = 1;
                                 break;
                              }
                              if ((X46 && !(X48)))
                              {
                                 stable = 0;

                                 X98 = 1;
                                 X96 = 0;
                                 break;
                              }
                              break;
                           }
                           default:
                           {
                              stable = 0;
                              X96 = 2;
                              B17 = 1;
                              X50 = 1;
                              break;
                           }
                        }
                        break;
                     }
                     default:
                     {
                        stable = 0;
                        X98 = 2;
                        X96 = 2;
                        B17 = 1;
                        X50 = 1;
                        break;
                     }
                  }
                  break;
               }
               case 3 :
               {
                  if (((X43 && !(X45))) && ((X12 > 0)))
                  {
                     stable = 0;

                     X94 = 2;
                     X98 = 2;
                     X96 = 2;
                     B17 = 1;
                     X50 = 1;
                     break;
                  }
                  if (((X46 && !(X48))) && ((X12 < 405)))
                  {
                     stable = 0;
                     X53 = 1;

                     X94 = 1;
                     X97 = 2;
                     break;
                  }
                  break;
               }
               default:
               {
                  stable = 0;
                  X94 = 3;
                  break;
               }
            }
            break;
         }
         default:
         {
            stable = 0;
            X91 = 2;
            break;
         }
      }
      switch (X92)
      {
         case 1 :
         {
            B5 = 0;
            if ((step == 1 && X2 != 0 && (time - X2 == 1)) && ((X49 || X52)))
            {
               stable = 0;
               X7 = X7 + 1;

               X92 = 1;
               B5 = 1;
               X93 = 1;
               break;
            }
            switch (X93)
            {
               case 1 :
               {
                  if ((step == 1 && X3 != 0 && (time - X3 == 3)) && (((!(X49 || X52)) && X7 > 0)))
                  {
                     stable = 0;
                     X7 = X7 - 1;

                     X93 = 1;
                     break;
                  }
                  break;
               }
               default:
               {
                  stable = 0;
                  B5 = 1;
                  X93 = 1;
                  break;
               }
            }
            break;
         }
         default:
         {
            stable = 0;
             X7 = 0;
            X92 = 1;
            B5 = 1;
            X93 = 1;
            break;
         }
      }
      B5 = B4;
      B7 = B6;
   }
}

void generic_EINKLEMMSCHUTZ_CTRL(void)
{
   if (B16)
   {
      switch (X100)
      {
         case 1 :
         {
            if (((X55 && !(X56))) && ((!(X43 && X46))))
            {
               stable = 0;

               B24 = 1;
               X100 = 2;
               break;
            }
            break;
         }
         case 2 :
         {
            B24 = 0;
            if ((!(X55) && X56))
            {
               stable = 0;

               X100 = 1;
               break;
            }
            break;
         }
         default:
         {
            stable = 0;
            X100 = 1;
            break;
         }
      }
   }
}

void generic_BLOCK_ERKENNUNG_CTRL(void)
{
   if (!B19 && B21 && !B20)
   {
      B0 = 0;
   }
   if (B19)
   {
      switch (X102)
      {
         case 1 :
         {
            if ((X13 != X14) && ((X13 > 0)))
            {
               stable = 0;
                X40 = 0;

               X102 = 2;
                X22 = 0;
                 X20 = 2;
               X101 = 3;
               B0 = 1;
               break;
            }
            break;
         }
         case 2 :
         {
            if ((!(X52) && X54) || (!(X49) && X51))
            {
               stable = 0;

               X102 = 1;
               X101 = 0;
               break;
            }
            switch (X101)
            {
               case 1 :
               {
                  break;
               }
               case 2 :
               {
                  if ((X13 > (X20 - 2)))
                  {
                     stable = 0;
                      X40 = 1;

                     X101 = 1;
                     break;
                  }
                  break;
               }
               case 3 :
               {
                  B0 = 0;
                  if ((X22 == 11 && !(X24 == 11)))
                  {
                     stable = 0;

                     X101 = 2;
                     break;
                  }

                  if (X101 == 3)
                       {
                          if (step == 1 && X1 != 0 && (time - X1 == 0.002))
                     {
                         X22 = X22 + 1;
                          if ((X13 > X20))
                        {
                           X20 = X13;

                        }

                     }
                  }

                  break;
               }
               default:
               {
                  stable = 0;
                   X22 = 0;
                    X20 = 2;
                  X101 = 3;
                  B0 = 1;
                  break;
               }
            }
            break;
         }
         default:
         {
            stable = 0;
            X102 = 1;
            break;
         }
      }
   }
}



void FH_DU()
{
   time = 1;
   stable = 0;
   step = 0;
   while (!stable)
   {
      stable = 1;
      step++;
      {
         switch (X99)
         {
            case 1 :
            {
               if ((!(X81) && X83))
               {
                  stable = 0;
                  X15 = 0;

                  X99 = 2;
                  break;
               }
               break;
            }
            case 2 :
            {
               if ((X81 && !(X83)))
               {
                  stable = 0;
                  X15 = -100;

                  X99 = 1;
                  break;
               }
               if ((X84 && !(X86)))
               {
                  stable = 0;
                  X15 = 100;

                  X99 = 3;
                  break;
               }
               break;
            }
            case 3 :
            {
               if ((!(X84) && X86))
               {
                  stable = 0;
                  X15 = 0;

                  X99 = 2;
                  break;
               }
               break;
            }
            default:
            {
               stable = 0;
                X15 = 0;
               X99 = 2;
               break;
            }
         }
      }
      {
         {
            if (!B10)
            {
               X90 = 3;
            }
            B11 = 0;
            if (!B16)
            {
               X100 = 1;
            }
            B17 = 0;
            if (!B19)
            {
               B0 = 0;
               X102 = 1;
            }
            B20 = 0;
            if (!B13)
            {
               B4 = 0;
               B6 = 0;
               X91 = 2;
                X7 = 0;
               X92 = 1;
               B5 = 1;
               X93 = 1;
            }
            B14 = 0;
            B11 = 1;
            B17 = 1;
            B20 = 1;
            B14 = 1;

            if (X68 != X70)
            {
                if ((!X77))
               {
                  X60 = X68;

               }

            }
            if (X71 != X72)
            {
                if (X77)
               {
                  X68 = X71;

               }

            }
            if (X65 != X67)
            {
                if ((!X77))
               {
                  X61 = X65;

               }

            }
            if (X73 != X74)
            {
                if (X77)
               {
                  X65 = X73;

               }

            }

         }
      }
      B10 = B12;
      B13 = B15;
      B16 = B18;
      B19 = B21;
       X36 = X76;
       X34 = X61;
       X32 = X75;
       X30 = X60;

      generic_KINDERSICHERUNG_CTRL();

       X84 = X52;
       X81 = X49;
       X18 = X13;
       X63 = X55;
       X17 = X12;
       X62 = X42;
       X76 = X36;
       X61 = X34;
       X75 = X32;
       X60 = X30;
       X59 = X38;
       X78 = X39;

       X36 = X76;
       X34 = X61;
       X32 = X75;
       X30 = X60;

      generic_FH_TUERMODUL_CTRL();

       X84 = X52;
       X81 = X49;
       X18 = X13;
       X63 = X55;
       X17 = X12;
       X62 = X42;
       X76 = X36;
       X61 = X34;
       X75 = X32;
       X60 = X30;
       X59 = X38;
       X78 = X39;

       X36 = X76;
       X34 = X61;
       X32 = X75;
       X30 = X60;

      generic_EINKLEMMSCHUTZ_CTRL();

       X84 = X52;
       X81 = X49;
       X18 = X13;
       X63 = X55;
       X17 = X12;
       X62 = X42;
       X76 = X36;
       X61 = X34;
       X75 = X32;
       X60 = X30;
       X59 = X38;
       X78 = X39;

       X36 = X76;
       X34 = X61;
       X32 = X75;
       X30 = X60;

      generic_BLOCK_ERKENNUNG_CTRL();

       X84 = X52;
       X81 = X49;
       X18 = X13;
       X63 = X55;
       X17 = X12;
       X62 = X42;
       X76 = X36;
       X61 = X34;
       X75 = X32;
       X60 = X30;
       X59 = X38;
       X78 = X39;

      B11 = B10;
      B14 = B13;
      B17 = B16;
      B20 = B19;
      X9 = X7;
      X14 = X13;
      X15 = X16;
      X19 = X18;
      X24 = X22;
      X31 = X30;
      X33 = X32;
      X35 = X34;
      X37 = X36;
      X39 = X40;
      X41 = X39;
      X43 = X44;
      X45 = X43;
      X46 = X47;
      X48 = X46;
      X49 = X50;
      X51 = X49;
      X52 = X53;
      X54 = X52;
      X56 = X55;
      X64 = X63;
      X67 = X65;
      X70 = X68;
      X72 = X71;
      X74 = X73;
      X78 = X79;
      X80 = X78;
      X81 = X82;
      X83 = X81;
      X84 = X85;
      X86 = X84;

   }

}



int main()
{
  /* Initialization of global variables */

  B0 = 0;
  B1 = 0;
  B2 = 0;
  B3 = 0;
  B4 = 0;
  B5 = 0;
  B6 = 0;
  B7 = 0;
  B8 = 0;
  B9 = 0;
  B10 = 0;
  B11 = 0;
  B12 = 0;
  B13 = 0;
  B14 = 0;
  B15 = 0;
  B16 = 0;
  B17 = 0;
  B18 = 0;
  B19 = 0;
  B20 = 0;
  B21 = 0;
  B22 = 0;
  B23 = 0;
  B24 = 0;
  B25 = 0;
  B26 = 0;
  B27 = 0;
  B28 = 0;
  B29 = 0;
  B30 = 0;
  B31 = 0;
  B32 = 0;
  B33 = 0;
  B34 = 0;
  B35 = 0;
  B36 = 0;
  B37 = 0;
  B38 = 0;
  B39 = 0;
  B40 = 0;
  B41 = 0;
  B42 = 0;
  B43 = 0;
  B44 = 0;
  B45 = 0;
  B46 = 0;
  B47 = 0;
  B48 = 0;
  B49 = 0;
  B50 = 0;
  B51 = 0;
  B52 = 0;
  B53 = 0;
  B54 = 0;
  B55 = 0;
  B56 = 0;
  B57 = 0;
  B58 = 0;
  B59 = 0;
  B60 = 0;
  B61 = 0;
  B62 = 0;
  B63 = 0;
  
  X1 = 0;
  
  X2 = 0;
  X3 = 0;
  X4  = 0;
  X5  = 0;
  X6  = 0;
  X7 = 0;
  X8 = 0;
  X9 = 0;
  X10  = 0;
  X11  = 0;
  X12  = 0;
  X13  = 0;
  X14 = 0;
  X15 = 0;
  X16 = 0;
  X17  = 0;
  X18  = 0;
  X19 = 0;
  X20 = 0;
  X21 = 0;
  X22 = 0;
  X23 = 0;
  X24 = 0;
  X25 = 0;
  X27 = 0;
  X26 = 0;
  X28 = 0;
  X29 = 0;
  X30  = 0;
  X31 = 0;
  X32  = 0;
  X33 = 0;
  X34 = 0;
  X35 = 0;
  X36 = 0;
  X37 = 0;
  X38 = 0;
  X39 = 0;
  X40 = 0;
  X41 = 0;
  X42 = 0;
  X43 = 0;
  X44 = 0;
  X45 = 0;
  X46 = 0;
  X47 = 0;
  X48 = 0;
  X49 = 0;
  X50 = 0;
  X51 = 0;
  X52 = 0;
  X53 = 0;
  X54 = 0;
  X55 = 0;
  X56 = 0;
  X57 = 0;
  X58 = 0;
  X59 = 0;
  X60 = 0;
  X61 = 0;
  X62 = 0;
  X63 = 0;
  X64 = 0;
  X65 = 0;
  X66 = 0;
  X67 = 0;
  X68 = 0;
  X69 = 0;
  X70 = 0;
  X71 = 0;
  X72 = 0;
  X73 = 0;
  X74 = 0;
  X75 = 0;
  X76 = 0;
  X77 = 0;
  X78 = 0;
  X79 = 0;
  X80 = 0;
  X81 = 0;
  X82 = 0;
  X83 = 0;
  X84 = 0;
  X85 = 0;
  X86 = 0;
  
  time = 0;
  stable = 0;
  step = 0;
  
  X87 = 0;
  X88 = 0;
  X89 = 0;
  X90 = 0;
  X91 = 0;
  X92 = 0;
  X93 = 0;
  X94 = 0;
  X95 = 0;
  X96 = 0;
  X97 = 0;
  X98 = 0;
  X99 = 0;
  X100 = 0;
  X101 = 0;
  X102 = 0;
  

  /* Code from Maalardalen */
  init();
  interface();
  FH_DU();

  return 0;
  _SLICE(B0);
  /* Uppsala-Paderborn instead uses the following */
/*    while (1) */
/*    { */
/*       FH_DU(); */
/*    } */
/*    return 0; */
}
