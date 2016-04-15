
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
unsigned long X4 ;
unsigned long X5 ;
unsigned long X6 ;
int X7;
int X8;
int X9;
unsigned long X10 ;
unsigned long X11 ;
int X12 ;
int X13 ;
int X14;
int X15;
int X16;
int X17 ;
int X18 ;
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
char X30 ;
char X31;
char X32 ;
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

#ifdef BLAST
// Global "time" variable
int t;
#endif

int main()
{

#ifdef BLAST
  t=0;
#endif

  /* Code from Maalardalen */

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
#ifdef BLAST
  t++;
#endif

  time = 1;
  stable = 0;
  step = 0;
#ifdef BLAST
  t++;
#endif

  if (!B13)
    {
      B4 = 0;
      B6 = 0;
      X91 = 2;
      X7 = 0;
      X92 = 1;
      B5 = 1;
      X93 = 1;
#ifdef BLAST
      t++;
#endif
    }
  B14 = 0;
  B11 = 1;
  B17 = 1;
  B20 = 1;
  B14 = 1;
#ifdef BLAST
  t++;
#endif


  B10 = B12;
  B13 = B15;
  B16 = B18;
  B19 = B21;
  X36 = X76;
  X34 = X61;
  X32 = X75;
  X30 = X60;
#ifdef BLAST
  t++;
#endif


  if (B10)
    {
      stable = 0;
      X90 = 3;
#ifdef BLAST
      t++;
#endif
    }

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
#ifdef BLAST
  t++;
#endif


  if (!B13 && B15 && !B14)
    {
      B4 = 0;
      B6 = 0;
#ifdef BLAST
      t++;
#endif
    }
  if (B13)
    {
      if (!B10)
	{
	  X90 = 3;
#ifdef BLAST
	  t++;
#endif
	}
      B11 = 0;
#ifdef BLAST
      t++;
#endif
      if (!B19)
	{
	  B0 = 0;
	  X102 = 1;
#ifdef BLAST
	  t++;
#endif
	}
      B20 = 0;
      B11 = 1;
      B20 = 1;
#ifdef BLAST
      t++;
#endif
      switch (X91)
	{
	case 1 :
	  {
            if ((X7 == 59 && !(X9 == 59)))
	      {
		stable = 0;

		X91 = 3;
		X94 = 3;
#ifdef BLAST
		t++;
#endif
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
#ifdef BLAST
		t++;
#endif
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
#ifdef BLAST
		      t++;
#endif
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
#ifdef BLAST
		      t++;
#endif
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
#ifdef BLAST
		      t++;
#endif
		      break;
		    }
                  if ((X43))
		    {
		      stable = 0;
		      X50 = 1;

		      X87 = 1;
#ifdef BLAST
		      t++;
#endif
		      break;
		    }
                  break;
		}
	      default:
		{
                  stable = 0;
                  X87 = 3;
#ifdef BLAST
		  t++;
#endif
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
#ifdef BLAST
		t++;
#endif
		break;
	      }
            if (((X39 && !(X41))) && ((X52)))
	      {
		stable = 0;
		X53 = 0;
		X4 = time;

		X91 = 2;
		X87 = 3;
#ifdef BLAST
		t++;
#endif
		break;
	      }
            if (((X39 && !(X41))) && ((X49)))
	      {
		stable = 0;
		X50 = 0;
		X5 = time;

		X91 = 2;
		X87 = 3;
#ifdef BLAST
		t++;
#endif
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
#ifdef BLAST
		      t++;
#endif
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
#ifdef BLAST
			    t++;
#endif
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
#ifdef BLAST
			    t++;
#endif
			    break;
			  }
                        if ((!(X46) && X48))
			  {
			    stable = 0;
			    X53 = 0;

			    X94 = 3;
			    X97 = 0;
#ifdef BLAST
			    t++;
#endif
			    break;
			  }
                        break;
		      }
		    default:
		      {
                        stable = 0;
                        X97 = 2;
#ifdef BLAST
			t++;
#endif
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
#ifdef BLAST
		      t++;
#endif
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
#ifdef BLAST
			    t++;
#endif
			    break;
			  }
                        switch (X95)
			  {
			  case 1 :
			    {
                              B23 = 0;
#ifdef BLAST
			      t++;
#endif
                              if (B22)
				{
				  stable = 0;
				  X50 = 1;
				  X27 = 0;

				  X95 = 2;
                                  X53 = 0;

				  B17 = 1;
#ifdef BLAST
				  t++;
#endif
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
#ifdef BLAST
				  t++;
#endif
				  break;
				}
                              break;
			    }
			  default:
			    {
                              stable = 0;
                              X95 = 2;
                              B17 = 1;
#ifdef BLAST
			      t++;
#endif
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
#ifdef BLAST
			    t++;
#endif
			    break;
			  }
                        switch (X96)
			  {
			  case 1 :
			    {
                              B23 = 0;
#ifdef BLAST
			      t++;
#endif
                              if (B22)
				{
				  stable = 0;
				  X28 = 0;

				  X96 = 2;
                                  X53 = 0;

				  B17 = 1;
				  X50 = 1;
#ifdef BLAST
				  t++;
#endif
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
#ifdef BLAST
				  t++;
#endif
				  break;
				}
                              if ((X46 && !(X48)))
				{
				  stable = 0;

				  X98 = 1;
				  X96 = 0;
#ifdef BLAST
				  t++;
#endif
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
#ifdef BLAST
			      t++;
#endif
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
#ifdef BLAST
			t++;
#endif
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
#ifdef BLAST
		      t++;
#endif
		      break;
		    }
                  if (((X46 && !(X48))) && ((X12 < 405)))
		    {
		      stable = 0;
		      X53 = 1;

		      X94 = 1;
		      X97 = 2;
#ifdef BLAST
		      t++;
#endif
		      break;
		    }
                  break;
		}
	      default:
		{
                  stable = 0;
                  X94 = 3;
#ifdef BLAST
		  t++;
#endif
                  break;
		}
	      }
            break;
	  }
	default:
	  {
            stable = 0;
            X91 = 2;
#ifdef BLAST
	    t++;
#endif
            break;
	  }
	}
      switch (X92)
	{
	case 1 :
	  {
            B5 = 0;
#ifdef BLAST
	    t++;
#endif
            if ((step == 1 && X2 != 0 && (time - X2 == 1)) && ((X49 || X52)))
	      {
		stable = 0;
		X7 = X7 + 1;

		X92 = 1;
		B5 = 1;
		X93 = 1;
#ifdef BLAST
		t++;
#endif
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
#ifdef BLAST
		      t++;
#endif
		      break;
		    }
                  break;
		}
	      default:
		{
                  stable = 0;
                  B5 = 1;
                  X93 = 1;
#ifdef BLAST
		  t++;
#endif
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
#ifdef BLAST
	    t++;
#endif
            break;
	  }
	}
      B5 = B4;
      B7 = B6;
#ifdef BLAST
      t++;
#endif
    }

#ifdef BLAST
  if (t > 40) {
  ERROR: goto ERROR;
  }
#endif

  return 0;

  /* Uppsala-Paderborn instead uses the following */
  /*    while (1) */
  /*    { */
  /*       FH_DU(); */
  /*    } */
  /*    return 0; */
}
