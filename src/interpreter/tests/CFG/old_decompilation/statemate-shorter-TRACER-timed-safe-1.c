// t == 40
/////////////////////////////////////////////////////////////
// Original
/////////////////////////////////////////////////////////////
// States visited              : 6483
// Analysis time               : 106.12s
// # subsumed nodes            : 3082 
// # calls to solver during interpolation : 981426 
// Total time on interpolation phase: 32 %. 
// Total time on backward      phase: 7 %. 
// Total time on forward       phase: 10 %. 
// Total time on memo store    phase: 10 %. 
// Total time on memo lookup   phase: 33 %. 
// Total time on partition     phase: 8 %. 
/////////////////////////////////////////////////////////////
// Decompiled
/////////////////////////////////////////////////////////////


int main()
{

register char B0;
register char B1;
register char B2;
register char B3;
register char B4;
register char B5;
register char B6;
register char B7;
register char B8;
register char B9;
register char B10;
register char B11;
register char B12;
register char B13;
register char B14;
register char B15;
register char B16;
register char B17;
register char B18;
register char B19;
register char B20;
register char B21;
register char B22;
register char B23;
register char B24;
register char B25;
register char B26;
register char B27;
register char B28;
register char B29;
register char B30;
register char B31;
register char B32;
register char B33;
register char B34;
register char B35;
register char B36;
register char B37;
register char B38;
register char B39;
register char B40;
register char B41;
register char B42;
register char B43;
register char B44;
register char B45;
register char B46;
register char B47;
register char B48;
register char B49;
register char B50;
register char B51;
register char B52;
register char B53;
register char B54;
register char B55;
register char B56;
register char B57;
register char B58;
register char B59;
register char B60;
register char B61;
register char B62;
register char B63;

register unsigned long X1;

register unsigned long X2;
register unsigned long X3;
register unsigned long X4 ;
register unsigned long X5 ;
register unsigned long X6 ;
register int X7;
register int X8;
register int X9;
register unsigned long X10 ;
register unsigned long X11 ;
register int X12 ;
register int X13 ;
register int X14;
register int X15;
register int X16;
register int X17 ;
register int X18 ;
register int X19;
register int X20;
register int X21;
register int X22;
register int X23;
register int X24;
register char X25;
register char X27;
register char X26;
register char X28;
register char X29;
register char X30 ;
register char X31;
register char X32 ;
register char X33;
register char X34;
register char X35;
register char X36;
register char X37;
register char X38;
register char X39;
register char X40;
register char X41;
register char X42;
register char X43;
register char X44;
register char X45;
register char X46;
register char X47;
register char X48;
register char X49;
register char X50;
register char X51;
register char X52;
register char X53;
register char X54;
register char X55;
register char X56;
register char X57;
register char X58;
register char X59;
register char X60;
register char X61;
register char X62;
register char X63;
register char X64;
register char X65;
register char X66;
register char X67;
register char X68;
register char X69;
register char X70;
register char X71;
register char X72;
register char X73;
register char X74;
register char X75;
register char X76;
register char X77;
register char X78;
register char X79;
register char X80;
register char X81;
register char X82;
register char X83;
register char X84;
register char X85;
register char X86;




register unsigned long time;
register char stable;
register char step;

register char X87;
register char X88;
register char X89;
register char X90;
register char X91;
register char X92;
register char X93;
register char X94;
register char X95;
register char X96;
register char X97;
register char X98;
register char X99;
register char X100;
register char X101;
register char X102;



register int t;





  t=0;




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

  t++;

  if (B4) {
    X3 = time;
    t++;
  }
  if (B4 || B6) {
    X2 = time;
    t++;
  }
  if ((X4 != 0) && (time - X4 >= 0.5)){
    X53 = 0;
    X4 = 0;
    t++;
  }
  if ((X5 != 0) && (time - X5 >= 0.5)){
    X50 = 0;
    X5 = 0;
    t++;
  }
  if ((X6 != 0) && (time - X6 >= 0.5)){
    X50 = 0;
    X6 = 0;
    t++;
  }
  if ((X10 != 0) && (time - X10 >= 0.5)){
    X10 = 0;
    t++;
  }
  if ((X11 != 0) && (time - X11 >= 0.5)){
    X11 = 0;
    t++;
  }
  if ((B0 || X22 != X24)) {
    X1 = time;
    t++;    
  }


  time = 1;
  stable = 0;
  step = 0;
  t++;
  {
    stable = 1;
    step++;
    
    t++;
    
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
		t++;
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
		t++;
		break;
	      }
	    if ((X84 && !(X86)))
	      {
		stable = 0;
		X15 = 100;
		X99 = 3;
		t++;
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
		t++;
		break;
	      }
	    break;
	  }
	default:
	  {
	    stable = 0;
	    X15 = 0;
	    X99 = 2;
	    t++;
	    break;
	  }
	}
    }
    {
      {
	if (!B10)
	  {
	    X90 = 3;
	    t++;
	  }
	B11 = 0;
	t++;
	if (!B16)
	  {
	    X100 = 1;
	    t++;
	  }
	B17 = 0;
	t++;
	if (!B19)
	  {
	    B0 = 0;
	    X102 = 1;
	    t++;
	  }
	B20 = 0;
	t++;
	if (!B13)
	  {
	    B4 = 0;
	    B6 = 0;
	    X91 = 2;
	    X7 = 0;
	    X92 = 1;
	    B5 = 1;
	    X93 = 1;
	    t++;
	  }
	B14 = 0;
	B11 = 1;
	B17 = 1;
	B20 = 1;
	B14 = 1;
	
	t++;
	
	
	if (X68 != X70)
	  {
	    if ((!X77))
	      {
		X60 = X68;
		t++;
	      }
	  }
	if (X71 != X72)
	  {
	    if (X77)
	      {
		X68 = X71;
		t++;
	      }
	  }
	if (X65 != X67)
	  {
	    if ((!X77))
	      {
		X61 = X65;
		t++;
	      }
	    
	  }
	if (X73 != X74)
	  {
	    if (X77)
	      {
		X65 = X73;
		t++;
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
    t++;
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

    t++;

    if (!B13 && B15 && !B14)
      {
	B4 = 0;
	B6 = 0;
	t++;
      }
    if (B13)
      {
	if (!B10)
	  {
	    X90 = 3;
	    t++;
	  }
	B11 = 0;
	t++;
	if (!B19)
	  {
	    B0 = 0;
	    X102 = 1;
	    t++;
	  }
	B20 = 0;
	B11 = 1;
	B20 = 1;
	t++;
	
	switch (X91)
	  {
	  case 1 :
	    {
	      if ((X7 == 59 && !(X9 == 59)))
		{
		  stable = 0;
		  X91 = 3;
		  X94 = 3;
		  t++;
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
		  t++;
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
			t++;
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
			t++;
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
			t++;
			break;
		      }
		    if ((X43))
		      {
			stable = 0;
			X50 = 1;
			X87 = 1;
			t++;
			break;
		      }
		    break;
		  }
		default:
		  {
		    stable = 0;
		    X87 = 3;
		    t++;
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
	     t++;
	     break;
	   }
	 if (((X39 && !(X41))) && ((X52)))
	   {
	     stable = 0;
	     X53 = 0;
	     X4 = time;
	     X91 = 2;
	     X87 = 3;
	     t++;
	     break;
	   }
	 if (((X39 && !(X41))) && ((X49)))
	   {
	     stable = 0;
	     X50 = 0;
	     X5 = time;
	     X91 = 2;
	     X87 = 3;
	     t++;
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
	    t++;
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
		  t++;
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
		  t++;
		  break;
		}
	      if ((!(X46) && X48))
		{
		  stable = 0;
		  X53 = 0;
		  X94 = 3;
		  X97 = 0;
		  t++;
		  break;
		}
	      break;
	    }
	  default:
	    {
	      stable = 0;
	      X97 = 2;
	      t++;
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
		   t++;
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
			 t++;
			 break;
		       }
		     switch (X95)
		       {
		       case 1 :
			 {
			   B23 = 0;
			   
			   t++;
			   
			   if (B22)
			     {
			       stable = 0;
			       X50 = 1;
			       X27 = 0;
			       
			       X95 = 2;
			       X53 = 0;

			       B17 = 1;
			       
			       t++;
			       
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

			       t++;

			       break;
			     }
			   break;
			 }
		       default:
			 {
			   stable = 0;
			   X95 = 2;
			   B17 = 1;

			   t++;

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

			 t++;

			 break;
		       }
		     switch (X96)
		       {
		       case 1 :
			 {
			   B23 = 0;

			   t++;

			   if (B22)
			     {
			       stable = 0;
			       X28 = 0;

			       X96 = 2;
			       X53 = 0;

			       B17 = 1;
			       X50 = 1;

			       t++;

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

			       t++;

			       break;
			     }
			   if ((X46 && !(X48)))
			     {
			       stable = 0;
			       X98 = 1;
			       X96 = 0;

			       t++;

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

			   t++;

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

		     t++;

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

		   t++;

		   break;
		 }
	       if (((X46 && !(X48))) && ((X12 < 405)))
		 {
		   stable = 0;
		   X53 = 1;

		   X94 = 1;
		   X97 = 2;

		   t++;

		   break;
		 }
	       break;
	     }
	   default:
	     {
	       stable = 0;
	       X94 = 3;

	       t++;

	       break;
	     }
	   }
	 break;
       }
	  default:
	    {
	      stable = 0;
	      X91 = 2;

	      t++;

	      break;
	    }
	  }
	switch (X92)
	  {
	  case 1 :
	    {
	      B5 = 0;

	      t++;

	      if ((step == 1 && X2 != 0 && (time - X2 == 1)) && ((X49 || X52)))
		{
		  stable = 0;
		  X7 = X7 + 1;

		  X92 = 1;
		  B5 = 1;
		  X93 = 1;

		  t++;

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

			t++;

			break;
		      }
		    break;
		  }
		default:
		  {
		    stable = 0;
		    B5 = 1;
		    X93 = 1;

		    t++;

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

	      t++;

	      break;
	    }
	  }
	B5 = B4;
	B7 = B6;

	t++;

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

    t++;




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

    t++;

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

    t++;
  }

  //_ABORT(t >= 40);
  return 0;
}
