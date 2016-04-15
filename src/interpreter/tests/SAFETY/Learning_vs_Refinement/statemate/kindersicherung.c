
static char B10;


char X30;
char X31;
char X32 ;
char X33;
char X34;
char X35;
char X36;
char X37;
char X38;
char X44;
char X47;
char X90;
char X88;
char X89;

unsigned long time;
char stable;
char step;



void main(void)
{
#ifdef BLAST
  int t = 0;
#endif

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
#ifdef BLAST
		t++;
#endif
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
#ifdef BLAST
		      t++;
#endif
		      break;
		    }
                  if ((X30 && !(X31)))
		    {
		      stable = 0;
                      X44 = 1;

		      X88 = 1;
#ifdef BLAST
		      t++;
#endif
		      break;
		    }
                  if ((!(X34) && X35))
		    {
		      stable = 0;
                      X47 = 0;

		      X88 = 1;
#ifdef BLAST
		      t++;
#endif
		      break;
		    }
                  if ((!(X30) && X31))
		    {
		      stable = 0;
                      X44 = 0;

		      X88 = 1;
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
            if (!(X36 || X32))
	      {
		stable = 0;
                X44 = 0;
		X47 = 0;

		X90 = 3;
		X89 = 0;
#ifdef BLAST
		t++;
#endif
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
#ifdef BLAST
		      t++;
#endif
		      break;
		    }
                  if ((X32 && !(X33)))
		    {
		      stable = 0;
                      X44 = 1;

		      X89 = 1;
#ifdef BLAST
		      t++;
#endif
		      break;
		    }
                  if ((!(X36) && X37))
		    {
		      stable = 0;
                      X47 = 0;

		      X89 = 1;
#ifdef BLAST
		      t++;
#endif
		      break;
		    }
                  if ((!(X32) && X33))
		    {
		      stable = 0;
                      X44 = 0;

		      X89 = 1;
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
            if ((!X38) && (X32 && X36))
	      {
		stable = 0;
		X44 = 1;
		X47 = 1;

		X90 = 2;
#ifdef BLAST
		t++;
#endif
		break;
	      }
            if ((!X38) && (X32 && !X36))
	      {
		stable = 0;
		X44 = 1;

		X90 = 2;
#ifdef BLAST
		t++;
#endif
		break;
	      }
            if ((!X38) && (!X32 && X36))
	      {
		stable = 0;
		X47 = 1;

		X90 = 2;
#ifdef BLAST
		t++;
#endif
		break;
	      }
            if ((!X30 && X34 && !X38))
	      {
		stable = 0;
                X47 = 1;

		X90 = 1;
#ifdef BLAST
		t++;
#endif
		break;
	      }
            if ((X30 && X34))
	      {
		stable = 0;
                X47 = 1;
		X44 = 1;

		X90 = 1;
#ifdef BLAST
		t++;
#endif
		break;
	      }
            if ((X30 && !X34 && !X38))
	      {
		stable = 0;
                X44 = 1;

		X90 = 1;
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
            X90 = 3;
#ifdef BLAST
	    t++;
#endif
            break;
	  }
	}
    }

#ifdef BLAST
  if (t > 200) {
  ERROR: goto ERROR;
  }
#endif
}
