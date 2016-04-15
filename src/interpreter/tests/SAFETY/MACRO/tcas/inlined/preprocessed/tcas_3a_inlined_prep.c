int Cur_Vertical_Sep;
int High_Confidence;
int Two_of_Three_Reports_Valid;
int Own_Tracked_Alt;
int Own_Tracked_Alt_Rate;
int Other_Tracked_Alt;
int Alt_Layer_Value;
int Positive_RA_Alt_Thresh__0;
int Positive_RA_Alt_Thresh__1;
int Positive_RA_Alt_Thresh__2;
int Positive_RA_Alt_Thresh__3;
int Up_Separation;
int Down_Separation;
int Other_RAC;
int Other_Capability;
int Climb_Inhibit;
main() {
  int RetVal;
  int Enabled;
  int Tcas_equipped;
  int Intent_not_known;
  int Need_upward_RA;
  int Need_downward_RA;
  int Alt_sep;
  int Alim;
  int Temp1;
  int Temp2;
  int Temp3;
  int Temp4;
  int Result_Non_Crossing_Biased_Climb;
  int Result_Non_Crossing_Biased_Descend;
  int Upward_preferred_1;
  int Alim_Non_Crossing_Biased_Climb;
  int Temp11;
  int Temp12;
  int Temp13;
  int Upward_preferred_2;
  int Alim_Non_Crossing_Biased_Descend;
  int Temp21;
  int Temp22;
  int Temp23;
  {
    RetVal = 0;
  }
  Positive_RA_Alt_Thresh__0 = 400;
  Positive_RA_Alt_Thresh__1 = 500;
  Positive_RA_Alt_Thresh__2 = 640;
  Positive_RA_Alt_Thresh__3 = 740;
  Enabled = 0;
  Tcas_equipped = 0;
  Intent_not_known = 0;
  Need_upward_RA = 0;
  Need_downward_RA = 0;
  if((Alt_Layer_Value == 0)) {
    Alim = Positive_RA_Alt_Thresh__0;
    Alim = Positive_RA_Alt_Thresh__3;
    if((0 > High_Confidence) && (600 >= Own_Tracked_Alt_Rate) && (Cur_Vertical_Sep > 600)) {
    L1:				Enabled = 1;
      if((Other_Capability == 0)) {
	Tcas_equipped = 1;
	if((0 > Two_of_Three_Reports_Valid) && (Other_RAC == 0)) {
	L2:						Intent_not_known = 1;
	  Alt_sep = 0;
	L3:						Upward_preferred_1 = 0;
	  Result_Non_Crossing_Biased_Climb = 0;
	  Alim_Non_Crossing_Biased_Climb = Positive_RA_Alt_Thresh__0;
	  Alim_Non_Crossing_Biased_Climb = Positive_RA_Alt_Thresh__3;
	  if((Climb_Inhibit == 1)) {
	    Temp11 = (Up_Separation + 100);
	    if((Temp11 > Down_Separation)) {
	      Upward_preferred_1 = 1;
	      if((Other_Tracked_Alt > Own_Tracked_Alt)) {
		Temp12 = 1;
		if((Temp12 > 0) && (Alim_Non_Crossing_Biased_Climb > Down_Separation)) {
		  Result_Non_Crossing_Biased_Climb = 1;
		  Temp1 = Result_Non_Crossing_Biased_Climb;
		  Temp2 = 1;
		  Need_upward_RA = 1;
		  Upward_preferred_2 = 0;
		  Result_Non_Crossing_Biased_Descend = 0;
		  Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__0;
		L4:										Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__3;
		  Temp21 = (Up_Separation + 100);
		L5:										Upward_preferred_2 = 1;
		  Temp22 = 1;
		  Temp3 = Result_Non_Crossing_Biased_Descend;
		  Temp4 = 0;
		  if((Temp3 == 0)) {
		  L6: // Here properties 1b,2b,3b,4b,5b											
                     Alt_sep = 1;
		  L7:											RetVal = 0;
		    return RetVal;
		  }
		  else {
		    goto L6;
		  }
		}
		else {
		  Temp1 = Result_Non_Crossing_Biased_Climb;
		  Temp2 = 1;
		  Upward_preferred_2 = 0;
		  Result_Non_Crossing_Biased_Descend = 0;
		  Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__0;
		L8:										Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__3;
		  Temp21 = (Up_Separation + 100);
		L9:										Upward_preferred_2 = 1;
		  Temp22 = 1;
		  Result_Non_Crossing_Biased_Descend = 1;
		L10:										Temp3 = Result_Non_Crossing_Biased_Descend;
		L11:										Temp4 = 0;
		L12:										if((Need_upward_RA == 0)) {
		  L13:											Alt_sep = 0;
		    goto L7;
		  }
		  else {
		    goto L13;
		  }
		}
	      }
	      else {
		Temp12 = 0;
		Result_Non_Crossing_Biased_Climb = 1;
		Temp1 = Result_Non_Crossing_Biased_Climb;
		Temp2 = 0;
		Upward_preferred_2 = 0;
		Result_Non_Crossing_Biased_Descend = 0;
		Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__0;
	      L14:									Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__3;
		Temp21 = (Up_Separation + 100);
	      L15:									Upward_preferred_2 = 1;
		Temp22 = 0;
		if((Temp22 == 0)) {
		L16:										Temp3 = Result_Non_Crossing_Biased_Descend;
		  if((Own_Tracked_Alt > Other_Tracked_Alt)) {
		  L17:											Temp4 = 1;
		    goto L12;
		  }
		  else {
		    Temp4 = 0;
		    if((Temp3 == 0)) {
		      goto L12;
		    }
		    else {
		      goto L12;
		    }
		  }
		}
		else {
		  goto L16;
		}
	      }
	    }
	    else {
	      if((Own_Tracked_Alt > Other_Tracked_Alt)) {
		Temp13 = 1;
		if((Temp13 > 0) && (Cur_Vertical_Sep >= 300) && (Up_Separation >= Alim_Non_Crossing_Biased_Climb)) {
		  Result_Non_Crossing_Biased_Climb = 1;
		  Temp1 = Result_Non_Crossing_Biased_Climb;
		  Temp2 = 0;
		  Upward_preferred_2 = 0;
		  Result_Non_Crossing_Biased_Descend = 0;
		  Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__0;
		L18:										Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__3;
		  Temp21 = (Up_Separation + 100);
		L19:										Temp23 = 1;
		  Result_Non_Crossing_Biased_Descend = 1;
		  Temp3 = Result_Non_Crossing_Biased_Descend;
		  Temp4 = 1;
		  Need_downward_RA = 1;
		  // Here properties 1a,2a,3a,4a,5a
		  _ABORT(Up_Separation >= Alim && Down_Separation >= Alim && Own_Tracked_Alt > Other_Tracked_Alt);
		  Alt_sep = 2;
		  
		  goto L7;
		}
		else {
		  Temp1 = Result_Non_Crossing_Biased_Climb;
		  Temp2 = 0;
		  if((Temp1 == 0)) {
		  L20:											Upward_preferred_2 = 0;
		    Result_Non_Crossing_Biased_Descend = 0;
		    Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__0;
		  L21:											Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__3;
		    Temp21 = (Up_Separation + 100);
		  L22:											Temp23 = 1;
		    Temp3 = Result_Non_Crossing_Biased_Descend;
		    goto L17;
		  }
		  else {
		    goto L20;
		  }
		}
	      }
	      else {
		Temp13 = 0;
		if((Temp13 == 0)) {
		L23:										Temp1 = Result_Non_Crossing_Biased_Climb;
		  if((Other_Tracked_Alt > Own_Tracked_Alt)) {
		    Temp2 = 1;
		    Upward_preferred_2 = 0;
		    Result_Non_Crossing_Biased_Descend = 0;
		    Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__0;
		  L24:											Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__3;
		    Temp21 = (Up_Separation + 100);
		  L25:											Temp23 = 0;
		    Result_Non_Crossing_Biased_Descend = 1;
		    goto L10;
		  }
		  else {
		    Temp2 = 0;
		    if((Temp1 == 0)) {
		    L26:												Upward_preferred_2 = 0;
		      Result_Non_Crossing_Biased_Descend = 0;
		      Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__0;
		    L27:												Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__3;
		      Temp21 = (Up_Separation + 100);
		    L28:												Temp23 = 0;
		      Result_Non_Crossing_Biased_Descend = 1;
		      Temp3 = Result_Non_Crossing_Biased_Descend;
		      goto L11;
		    }
		    else {
		      goto L26;
		    }
		  }
		}
		else {
		  goto L23;
		}
	      }
	    }
	  }
	  else if((1 > Climb_Inhibit)) {
	    Temp11 = Up_Separation;
	    if((Temp11 > Down_Separation)) {
	      Upward_preferred_1 = 1;
	      if((Other_Tracked_Alt > Own_Tracked_Alt)) {
		Temp12 = 1;
		if((Temp12 > 0) && (Alim_Non_Crossing_Biased_Climb > Down_Separation)) {
		  Result_Non_Crossing_Biased_Climb = 1;
		  Temp1 = Result_Non_Crossing_Biased_Climb;
		  Temp2 = 1;
		  Need_upward_RA = 1;
		  Upward_preferred_2 = 0;
		  Result_Non_Crossing_Biased_Descend = 0;
		  Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__0;
		L29:										Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__3;
		L30:										Temp21 = Up_Separation;
		  goto L5;
		}
		else {
		  Temp1 = Result_Non_Crossing_Biased_Climb;
		  Temp2 = 1;
		  Upward_preferred_2 = 0;
		  Result_Non_Crossing_Biased_Descend = 0;
		  Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__0;
		L31:										Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__3;
		L32:										Temp21 = Up_Separation;
		  goto L9;
		}
	      }
	      else {
		Temp12 = 0;
		Result_Non_Crossing_Biased_Climb = 1;
		Temp1 = Result_Non_Crossing_Biased_Climb;
		Temp2 = 0;
		Upward_preferred_2 = 0;
		Result_Non_Crossing_Biased_Descend = 0;
		Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__0;
	      L33:									Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__3;
	      L34:									Temp21 = Up_Separation;
		goto L15;
	      }
	    }
	    else {
	      if((Own_Tracked_Alt > Other_Tracked_Alt)) {
		Temp13 = 1;
		if((Temp13 > 0) && (Cur_Vertical_Sep >= 300) && (Up_Separation >= Alim_Non_Crossing_Biased_Climb)) {
		  Result_Non_Crossing_Biased_Climb = 1;
		  Temp1 = Result_Non_Crossing_Biased_Climb;
		  Temp2 = 0;
		  Upward_preferred_2 = 0;
		  Result_Non_Crossing_Biased_Descend = 0;
		  Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__0;
		L35:										Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__3;
		L36:										Temp21 = Up_Separation;
		  goto L19;
		}
		else {
		  Temp1 = Result_Non_Crossing_Biased_Climb;
		  Temp2 = 0;
		  if((Temp1 == 0)) {
		  L37:											Upward_preferred_2 = 0;
		    Result_Non_Crossing_Biased_Descend = 0;
		    Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__0;
		  L38:											Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__3;
		  L39:											Temp21 = Up_Separation;
		    goto L22;
		  }
		  else {
		    goto L37;
		  }
		}
	      }
	      else {
		Temp13 = 0;
		if((Temp13 == 0)) {
		L40:										Temp1 = Result_Non_Crossing_Biased_Climb;
		  if((Other_Tracked_Alt > Own_Tracked_Alt)) {
		    Temp2 = 1;
		    Upward_preferred_2 = 0;
		    Result_Non_Crossing_Biased_Descend = 0;
		    Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__0;
		  L41:											Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__3;
		  L42:											Temp21 = Up_Separation;
		    goto L25;
		  }
		  else {
		    Temp2 = 0;
		    if((Temp1 == 0)) {
		    L43:												Upward_preferred_2 = 0;
		      Result_Non_Crossing_Biased_Descend = 0;
		      Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__0;
		    L44:												Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__3;
		    L45:												Temp21 = Up_Separation;
		      goto L28;
		    }
		    else {
		      goto L43;
		    }
		  }
		}
		else {
		  goto L40;
		}
	      }
	    }
	  }
	  else {
	    Temp11 = Up_Separation;
	    if((Temp11 > Down_Separation)) {
	      Upward_preferred_1 = 1;
	      if((Other_Tracked_Alt > Own_Tracked_Alt)) {
		Temp12 = 1;
		if((Temp12 > 0) && (Alim_Non_Crossing_Biased_Climb > Down_Separation)) {
		  Result_Non_Crossing_Biased_Climb = 1;
		  Temp1 = Result_Non_Crossing_Biased_Climb;
		  Temp2 = 1;
		  Need_upward_RA = 1;
		  Upward_preferred_2 = 0;
		  Result_Non_Crossing_Biased_Descend = 0;
		  Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__0;
		L46:										Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__3;
		  goto L30;
		}
		else {
		  Temp1 = Result_Non_Crossing_Biased_Climb;
		  Temp2 = 1;
		  Upward_preferred_2 = 0;
		  Result_Non_Crossing_Biased_Descend = 0;
		  Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__0;
		L47:										Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__3;
		  goto L32;
		}
	      }
	      else {
		Temp12 = 0;
		Result_Non_Crossing_Biased_Climb = 1;
		Temp1 = Result_Non_Crossing_Biased_Climb;
		Temp2 = 0;
		Upward_preferred_2 = 0;
		Result_Non_Crossing_Biased_Descend = 0;
		Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__0;
	      L48:									Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__3;
		goto L34;
	      }
	    }
	    else {
	      if((Own_Tracked_Alt > Other_Tracked_Alt)) {
		Temp13 = 1;
		if((Temp13 > 0) && (Cur_Vertical_Sep >= 300) && (Up_Separation >= Alim_Non_Crossing_Biased_Climb)) {
		  Result_Non_Crossing_Biased_Climb = 1;
		  Temp1 = Result_Non_Crossing_Biased_Climb;
		  Temp2 = 0;
		  Upward_preferred_2 = 0;
		  Result_Non_Crossing_Biased_Descend = 0;
		  Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__0;
		L49:										Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__3;
		  goto L36;
		}
		else {
		  Temp1 = Result_Non_Crossing_Biased_Climb;
		  Temp2 = 0;
		  if((Temp1 == 0)) {
		  L50:											Upward_preferred_2 = 0;
		    Result_Non_Crossing_Biased_Descend = 0;
		    Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__0;
		  L51:											Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__3;
		    goto L39;
		  }
		  else {
		    goto L50;
		  }
		}
	      }
	      else {
		Temp13 = 0;
		if((Temp13 == 0)) {
		L52:										Temp1 = Result_Non_Crossing_Biased_Climb;
		  if((Other_Tracked_Alt > Own_Tracked_Alt)) {
		    Temp2 = 1;
		    Upward_preferred_2 = 0;
		    Result_Non_Crossing_Biased_Descend = 0;
		    Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__0;
		  L53:											Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__3;
		    goto L42;
		  }
		  else {
		    Temp2 = 0;
		    if((Temp1 == 0)) {
		    L54:												Upward_preferred_2 = 0;
		      Result_Non_Crossing_Biased_Descend = 0;
		      Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__0;
		    L55:												Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__3;
		      goto L45;
		    }
		    else {
		      goto L54;
		    }
		  }
		}
		else {
		  goto L52;
		}
	      }
	    }
	  }
	}
	else if((Two_of_Three_Reports_Valid > 0) && (Other_RAC == 0)) {
	  goto L2;
	}
	else if((Two_of_Three_Reports_Valid == 0)) {
	L56:						Alt_sep = 0;
	  goto L7;
	}
	else if((0 > Other_RAC)) {
	  goto L56;
	}
	else {
	  goto L56;
	}
      }
      else if((0 > Other_Capability)) {
      L57:					if((0 > Two_of_Three_Reports_Valid) && (Other_RAC == 0)) {
	L58:						Intent_not_known = 1;
	  Alt_sep = 0;
	  goto L3;
	}
	else if((Two_of_Three_Reports_Valid > 0) && (Other_RAC == 0)) {
	  goto L58;
	}
	else if((Two_of_Three_Reports_Valid == 0)) {
	L59:						Alt_sep = 0;
	  goto L3;
	}
	else if((0 > Other_RAC)) {
	  goto L59;
	}
	else {
	  goto L59;
	}
      }
      else {
	goto L57;
      }
    }
    else if((High_Confidence > 0) && (600 >= Own_Tracked_Alt_Rate) && (Cur_Vertical_Sep > 600)) {
      goto L1;
    }
    else if((High_Confidence == 0)) {
    L60:				if((Other_Capability == 0)) {
	Tcas_equipped = 1;
	if((0 > Two_of_Three_Reports_Valid) && (Other_RAC == 0)) {
	L61:						Intent_not_known = 1;
	  Alt_sep = 0;
	  goto L7;
	}
	else if((Two_of_Three_Reports_Valid > 0) && (Other_RAC == 0)) {
	  goto L61;
	}
	else if((Two_of_Three_Reports_Valid == 0)) {
	L62:						Alt_sep = 0;
	  if((Enabled == 0)) {
	    goto L7;
	  }
	  else {
	    goto L7;
	  }
	}
	else if((0 > Other_RAC)) {
	  goto L62;
	}
	else {
	  goto L62;
	}
      }
      else if((0 > Other_Capability)) {
      L63:					if((0 > Two_of_Three_Reports_Valid) && (Other_RAC == 0)) {
	  goto L61;
	}
	else if((Two_of_Three_Reports_Valid > 0) && (Other_RAC == 0)) {
	  goto L61;
	}
	else if((Two_of_Three_Reports_Valid == 0)) {
	L64:						Alt_sep = 0;
	  goto L7;
	}
	else if((0 > Other_RAC)) {
	  goto L64;
	}
	else {
	  goto L64;
	}
      }
      else {
	goto L63;
      }
    }
    else if((Own_Tracked_Alt_Rate > 600)) {
      goto L60;
    }
    else {
      goto L60;
    }
  }
  else if((0 > Alt_Layer_Value)) {
    Alim = Positive_RA_Alt_Thresh__3;
    if((0 > High_Confidence) && (600 >= Own_Tracked_Alt_Rate) && (Cur_Vertical_Sep > 600)) {
    L65:				Enabled = 1;
      if((Other_Capability == 0)) {
	Tcas_equipped = 1;
	if((0 > Two_of_Three_Reports_Valid) && (Other_RAC == 0)) {
	L66:						Intent_not_known = 1;
	  Alt_sep = 0;
	L67:						Upward_preferred_1 = 0;
	  Result_Non_Crossing_Biased_Climb = 0;
	  Alim_Non_Crossing_Biased_Climb = Positive_RA_Alt_Thresh__3;
	  if((Climb_Inhibit == 1)) {
	    Temp11 = (Up_Separation + 100);
	    if((Temp11 > Down_Separation)) {
	      Upward_preferred_1 = 1;
	      if((Other_Tracked_Alt > Own_Tracked_Alt)) {
		Temp12 = 1;
		if((Temp12 > 0) && (Alim_Non_Crossing_Biased_Climb > Down_Separation)) {
		  Result_Non_Crossing_Biased_Climb = 1;
		  Temp1 = Result_Non_Crossing_Biased_Climb;
		  Temp2 = 1;
		  Need_upward_RA = 1;
		  Upward_preferred_2 = 0;
		  Result_Non_Crossing_Biased_Descend = 0;
		  goto L4;
		}
		else {
		  Temp1 = Result_Non_Crossing_Biased_Climb;
		  Temp2 = 1;
		  Upward_preferred_2 = 0;
		  Result_Non_Crossing_Biased_Descend = 0;
		  goto L8;
		}
	      }
	      else {
		Temp12 = 0;
		Result_Non_Crossing_Biased_Climb = 1;
		Temp1 = Result_Non_Crossing_Biased_Climb;
		Temp2 = 0;
		Upward_preferred_2 = 0;
		Result_Non_Crossing_Biased_Descend = 0;
		goto L14;
	      }
	    }
	    else {
	      if((Own_Tracked_Alt > Other_Tracked_Alt)) {
		Temp13 = 1;
		if((Temp13 > 0) && (Cur_Vertical_Sep >= 300) && (Up_Separation >= Alim_Non_Crossing_Biased_Climb)) {
		  Result_Non_Crossing_Biased_Climb = 1;
		  Temp1 = Result_Non_Crossing_Biased_Climb;
		  Temp2 = 0;
		  Upward_preferred_2 = 0;
		  Result_Non_Crossing_Biased_Descend = 0;
		  goto L18;
		}
		else {
		  Temp1 = Result_Non_Crossing_Biased_Climb;
		  Temp2 = 0;
		  if((Temp1 == 0)) {
		  L68:											Upward_preferred_2 = 0;
		    Result_Non_Crossing_Biased_Descend = 0;
		    goto L21;
		  }
		  else {
		    goto L68;
		  }
		}
	      }
	      else {
		Temp13 = 0;
		if((Temp13 == 0)) {
		L69:										Temp1 = Result_Non_Crossing_Biased_Climb;
		  if((Other_Tracked_Alt > Own_Tracked_Alt)) {
		    Temp2 = 1;
		    Upward_preferred_2 = 0;
		    Result_Non_Crossing_Biased_Descend = 0;
		    goto L24;
		  }
		  else {
		    Temp2 = 0;
		    if((Temp1 == 0)) {
		    L70:												Upward_preferred_2 = 0;
		      Result_Non_Crossing_Biased_Descend = 0;
		      goto L27;
		    }
		    else {
		      goto L70;
		    }
		  }
		}
		else {
		  goto L69;
		}
	      }
	    }
	  }
	  else if((1 > Climb_Inhibit)) {
	    Temp11 = Up_Separation;
	    if((Temp11 > Down_Separation)) {
	      Upward_preferred_1 = 1;
	      if((Other_Tracked_Alt > Own_Tracked_Alt)) {
		Temp12 = 1;
		if((Temp12 > 0) && (Alim_Non_Crossing_Biased_Climb > Down_Separation)) {
		  Result_Non_Crossing_Biased_Climb = 1;
		  Temp1 = Result_Non_Crossing_Biased_Climb;
		  Temp2 = 1;
		  Need_upward_RA = 1;
		  Upward_preferred_2 = 0;
		  Result_Non_Crossing_Biased_Descend = 0;
		  goto L29;
		}
		else {
		  Temp1 = Result_Non_Crossing_Biased_Climb;
		  Temp2 = 1;
		  Upward_preferred_2 = 0;
		  Result_Non_Crossing_Biased_Descend = 0;
		  goto L31;
		}
	      }
	      else {
		Temp12 = 0;
		Result_Non_Crossing_Biased_Climb = 1;
		Temp1 = Result_Non_Crossing_Biased_Climb;
		Temp2 = 0;
		Upward_preferred_2 = 0;
		Result_Non_Crossing_Biased_Descend = 0;
		goto L33;
	      }
	    }
	    else {
	      if((Own_Tracked_Alt > Other_Tracked_Alt)) {
		Temp13 = 1;
		if((Temp13 > 0) && (Cur_Vertical_Sep >= 300) && (Up_Separation >= Alim_Non_Crossing_Biased_Climb)) {
		  Result_Non_Crossing_Biased_Climb = 1;
		  Temp1 = Result_Non_Crossing_Biased_Climb;
		  Temp2 = 0;
		  Upward_preferred_2 = 0;
		  Result_Non_Crossing_Biased_Descend = 0;
		  goto L35;
		}
		else {
		  Temp1 = Result_Non_Crossing_Biased_Climb;
		  Temp2 = 0;
		  if((Temp1 == 0)) {
		  L71:											Upward_preferred_2 = 0;
		    Result_Non_Crossing_Biased_Descend = 0;
		    goto L38;
		  }
		  else {
		    goto L71;
		  }
		}
	      }
	      else {
		Temp13 = 0;
		if((Temp13 == 0)) {
		L72:										Temp1 = Result_Non_Crossing_Biased_Climb;
		  if((Other_Tracked_Alt > Own_Tracked_Alt)) {
		    Temp2 = 1;
		    Upward_preferred_2 = 0;
		    Result_Non_Crossing_Biased_Descend = 0;
		    goto L41;
		  }
		  else {
		    Temp2 = 0;
		    if((Temp1 == 0)) {
		    L73:												Upward_preferred_2 = 0;
		      Result_Non_Crossing_Biased_Descend = 0;
		      goto L44;
		    }
		    else {
		      goto L73;
		    }
		  }
		}
		else {
		  goto L72;
		}
	      }
	    }
	  }
	  else {
	    Temp11 = Up_Separation;
	    if((Temp11 > Down_Separation)) {
	      Upward_preferred_1 = 1;
	      if((Other_Tracked_Alt > Own_Tracked_Alt)) {
		Temp12 = 1;
		if((Temp12 > 0) && (Alim_Non_Crossing_Biased_Climb > Down_Separation)) {
		  Result_Non_Crossing_Biased_Climb = 1;
		  Temp1 = Result_Non_Crossing_Biased_Climb;
		  Temp2 = 1;
		  Need_upward_RA = 1;
		  Upward_preferred_2 = 0;
		  Result_Non_Crossing_Biased_Descend = 0;
		  goto L46;
		}
		else {
		  Temp1 = Result_Non_Crossing_Biased_Climb;
		  Temp2 = 1;
		  Upward_preferred_2 = 0;
		  Result_Non_Crossing_Biased_Descend = 0;
		  goto L47;
		}
	      }
	      else {
		Temp12 = 0;
		Result_Non_Crossing_Biased_Climb = 1;
		Temp1 = Result_Non_Crossing_Biased_Climb;
		Temp2 = 0;
		Upward_preferred_2 = 0;
		Result_Non_Crossing_Biased_Descend = 0;
		goto L48;
	      }
	    }
	    else {
	      if((Own_Tracked_Alt > Other_Tracked_Alt)) {
		Temp13 = 1;
		if((Temp13 > 0) && (Cur_Vertical_Sep >= 300) && (Up_Separation >= Alim_Non_Crossing_Biased_Climb)) {
		  Result_Non_Crossing_Biased_Climb = 1;
		  Temp1 = Result_Non_Crossing_Biased_Climb;
		  Temp2 = 0;
		  Upward_preferred_2 = 0;
		  Result_Non_Crossing_Biased_Descend = 0;
		  goto L49;
		}
		else {
		  Temp1 = Result_Non_Crossing_Biased_Climb;
		  Temp2 = 0;
		  if((Temp1 == 0)) {
		  L74:											Upward_preferred_2 = 0;
		    Result_Non_Crossing_Biased_Descend = 0;
		    goto L51;
		  }
		  else {
		    goto L74;
		  }
		}
	      }
	      else {
		Temp13 = 0;
		if((Temp13 == 0)) {
		L75:										Temp1 = Result_Non_Crossing_Biased_Climb;
		  if((Other_Tracked_Alt > Own_Tracked_Alt)) {
		    Temp2 = 1;
		    Upward_preferred_2 = 0;
		    Result_Non_Crossing_Biased_Descend = 0;
		    goto L53;
		  }
		  else {
		    Temp2 = 0;
		    if((Temp1 == 0)) {
		    L76:												Upward_preferred_2 = 0;
		      Result_Non_Crossing_Biased_Descend = 0;
		      goto L55;
		    }
		    else {
		      goto L76;
		    }
		  }
		}
		else {
		  goto L75;
		}
	      }
	    }
	  }
	}
	else if((Two_of_Three_Reports_Valid > 0) && (Other_RAC == 0)) {
	  goto L66;
	}
	else if((Two_of_Three_Reports_Valid == 0)) {
	  goto L56;
	}
	else if((0 > Other_RAC)) {
	  goto L56;
	}
	else {
	  goto L56;
	}
      }
      else if((0 > Other_Capability)) {
      L77:					if((0 > Two_of_Three_Reports_Valid) && (Other_RAC == 0)) {
	L78:						Intent_not_known = 1;
	  Alt_sep = 0;
	  goto L67;
	}
	else if((Two_of_Three_Reports_Valid > 0) && (Other_RAC == 0)) {
	  goto L78;
	}
	else if((Two_of_Three_Reports_Valid == 0)) {
	L79:						Alt_sep = 0;
	  goto L67;
	}
	else if((0 > Other_RAC)) {
	  goto L79;
	}
	else {
	  goto L79;
	}
      }
      else {
	goto L77;
      }
    }
    else if((High_Confidence > 0) && (600 >= Own_Tracked_Alt_Rate) && (Cur_Vertical_Sep > 600)) {
      goto L65;
    }
    else if((High_Confidence == 0)) {
      goto L60;
    }
    else if((Own_Tracked_Alt_Rate > 600)) {
      goto L60;
    }
    else {
      goto L60;
    }
  }
  else {
    if((Alt_Layer_Value == 1)) {
      Alim = Positive_RA_Alt_Thresh__1;
      Alim = Positive_RA_Alt_Thresh__3;
      if((0 > High_Confidence) && (600 >= Own_Tracked_Alt_Rate) && (Cur_Vertical_Sep > 600)) {
      L80:					Enabled = 1;
	if((Other_Capability == 0)) {
	  Tcas_equipped = 1;
	  if((0 > Two_of_Three_Reports_Valid) && (Other_RAC == 0)) {
	  L81:							Intent_not_known = 1;
	    Alt_sep = 0;
	  L82:							Upward_preferred_1 = 0;
	    Result_Non_Crossing_Biased_Climb = 0;
	    Alim_Non_Crossing_Biased_Climb = Positive_RA_Alt_Thresh__1;
	    Alim_Non_Crossing_Biased_Climb = Positive_RA_Alt_Thresh__3;
	    if((Climb_Inhibit == 1)) {
	      Temp11 = (Up_Separation + 100);
	      if((Temp11 > Down_Separation)) {
		Upward_preferred_1 = 1;
		if((Other_Tracked_Alt > Own_Tracked_Alt)) {
		  Temp12 = 1;
		  if((Temp12 > 0) && (Alim_Non_Crossing_Biased_Climb > Down_Separation)) {
		    Result_Non_Crossing_Biased_Climb = 1;
		    Temp1 = Result_Non_Crossing_Biased_Climb;
		    Temp2 = 1;
		    Need_upward_RA = 1;
		    Upward_preferred_2 = 0;
		    Result_Non_Crossing_Biased_Descend = 0;
		    Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__1;
		    goto L4;
		  }
		  else {
		    Temp1 = Result_Non_Crossing_Biased_Climb;
		    Temp2 = 1;
		    Upward_preferred_2 = 0;
		    Result_Non_Crossing_Biased_Descend = 0;
		    Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__1;
		    goto L8;
		  }
		}
		else {
		  Temp12 = 0;
		  Result_Non_Crossing_Biased_Climb = 1;
		  Temp1 = Result_Non_Crossing_Biased_Climb;
		  Temp2 = 0;
		  Upward_preferred_2 = 0;
		  Result_Non_Crossing_Biased_Descend = 0;
		  Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__1;
		  goto L14;
		}
	      }
	      else {
		if((Own_Tracked_Alt > Other_Tracked_Alt)) {
		  Temp13 = 1;
		  if((Temp13 > 0) && (Cur_Vertical_Sep >= 300) && (Up_Separation >= Alim_Non_Crossing_Biased_Climb)) {
		    Result_Non_Crossing_Biased_Climb = 1;
		    Temp1 = Result_Non_Crossing_Biased_Climb;
		    Temp2 = 0;
		    Upward_preferred_2 = 0;
		    Result_Non_Crossing_Biased_Descend = 0;
		    Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__1;
		    goto L18;
		  }
		  else {
		    Temp1 = Result_Non_Crossing_Biased_Climb;
		    Temp2 = 0;
		    if((Temp1 == 0)) {
		    L83:												Upward_preferred_2 = 0;
		      Result_Non_Crossing_Biased_Descend = 0;
		      Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__1;
		      goto L21;
		    }
		    else {
		      goto L83;
		    }
		  }
		}
		else {
		  Temp13 = 0;
		  if((Temp13 == 0)) {
		  L84:											Temp1 = Result_Non_Crossing_Biased_Climb;
		    if((Other_Tracked_Alt > Own_Tracked_Alt)) {
		      Temp2 = 1;
		      Upward_preferred_2 = 0;
		      Result_Non_Crossing_Biased_Descend = 0;
		      Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__1;
		      goto L24;
		    }
		    else {
		      Temp2 = 0;
		      if((Temp1 == 0)) {
		      L85:													Upward_preferred_2 = 0;
			Result_Non_Crossing_Biased_Descend = 0;
			Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__1;
			goto L27;
		      }
		      else {
			goto L85;
		      }
		    }
		  }
		  else {
		    goto L84;
		  }
		}
	      }
	    }
	    else if((1 > Climb_Inhibit)) {
	      Temp11 = Up_Separation;
	      if((Temp11 > Down_Separation)) {
		Upward_preferred_1 = 1;
		if((Other_Tracked_Alt > Own_Tracked_Alt)) {
		  Temp12 = 1;
		  if((Temp12 > 0) && (Alim_Non_Crossing_Biased_Climb > Down_Separation)) {
		    Result_Non_Crossing_Biased_Climb = 1;
		    Temp1 = Result_Non_Crossing_Biased_Climb;
		    Temp2 = 1;
		    Need_upward_RA = 1;
		    Upward_preferred_2 = 0;
		    Result_Non_Crossing_Biased_Descend = 0;
		    Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__1;
		    goto L29;
		  }
		  else {
		    Temp1 = Result_Non_Crossing_Biased_Climb;
		    Temp2 = 1;
		    Upward_preferred_2 = 0;
		    Result_Non_Crossing_Biased_Descend = 0;
		    Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__1;
		    goto L31;
		  }
		}
		else {
		  Temp12 = 0;
		  Result_Non_Crossing_Biased_Climb = 1;
		  Temp1 = Result_Non_Crossing_Biased_Climb;
		  Temp2 = 0;
		  Upward_preferred_2 = 0;
		  Result_Non_Crossing_Biased_Descend = 0;
		  Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__1;
		  goto L33;
		}
	      }
	      else {
		if((Own_Tracked_Alt > Other_Tracked_Alt)) {
		  Temp13 = 1;
		  if((Temp13 > 0) && (Cur_Vertical_Sep >= 300) && (Up_Separation >= Alim_Non_Crossing_Biased_Climb)) {
		    Result_Non_Crossing_Biased_Climb = 1;
		    Temp1 = Result_Non_Crossing_Biased_Climb;
		    Temp2 = 0;
		    Upward_preferred_2 = 0;
		    Result_Non_Crossing_Biased_Descend = 0;
		    Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__1;
		    goto L35;
		  }
		  else {
		    Temp1 = Result_Non_Crossing_Biased_Climb;
		    Temp2 = 0;
		    if((Temp1 == 0)) {
		    L86:												Upward_preferred_2 = 0;
		      Result_Non_Crossing_Biased_Descend = 0;
		      Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__1;
		      goto L38;
		    }
		    else {
		      goto L86;
		    }
		  }
		}
		else {
		  Temp13 = 0;
		  if((Temp13 == 0)) {
		  L87:											Temp1 = Result_Non_Crossing_Biased_Climb;
		    if((Other_Tracked_Alt > Own_Tracked_Alt)) {
		      Temp2 = 1;
		      Upward_preferred_2 = 0;
		      Result_Non_Crossing_Biased_Descend = 0;
		      Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__1;
		      goto L41;
		    }
		    else {
		      Temp2 = 0;
		      if((Temp1 == 0)) {
		      L88:													Upward_preferred_2 = 0;
			Result_Non_Crossing_Biased_Descend = 0;
			Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__1;
			goto L44;
		      }
		      else {
			goto L88;
		      }
		    }
		  }
		  else {
		    goto L87;
		  }
		}
	      }
	    }
	    else {
	      Temp11 = Up_Separation;
	      if((Temp11 > Down_Separation)) {
		Upward_preferred_1 = 1;
		if((Other_Tracked_Alt > Own_Tracked_Alt)) {
		  Temp12 = 1;
		  if((Temp12 > 0) && (Alim_Non_Crossing_Biased_Climb > Down_Separation)) {
		    Result_Non_Crossing_Biased_Climb = 1;
		    Temp1 = Result_Non_Crossing_Biased_Climb;
		    Temp2 = 1;
		    Need_upward_RA = 1;
		    Upward_preferred_2 = 0;
		    Result_Non_Crossing_Biased_Descend = 0;
		    Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__1;
		    goto L46;
		  }
		  else {
		    Temp1 = Result_Non_Crossing_Biased_Climb;
		    Temp2 = 1;
		    Upward_preferred_2 = 0;
		    Result_Non_Crossing_Biased_Descend = 0;
		    Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__1;
		    goto L47;
		  }
		}
		else {
		  Temp12 = 0;
		  Result_Non_Crossing_Biased_Climb = 1;
		  Temp1 = Result_Non_Crossing_Biased_Climb;
		  Temp2 = 0;
		  Upward_preferred_2 = 0;
		  Result_Non_Crossing_Biased_Descend = 0;
		  Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__1;
		  goto L48;
		}
	      }
	      else {
		if((Own_Tracked_Alt > Other_Tracked_Alt)) {
		  Temp13 = 1;
		  if((Temp13 > 0) && (Cur_Vertical_Sep >= 300) && (Up_Separation >= Alim_Non_Crossing_Biased_Climb)) {
		    Result_Non_Crossing_Biased_Climb = 1;
		    Temp1 = Result_Non_Crossing_Biased_Climb;
		    Temp2 = 0;
		    Upward_preferred_2 = 0;
		    Result_Non_Crossing_Biased_Descend = 0;
		    Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__1;
		    goto L49;
		  }
		  else {
		    Temp1 = Result_Non_Crossing_Biased_Climb;
		    Temp2 = 0;
		    if((Temp1 == 0)) {
		    L89:												Upward_preferred_2 = 0;
		      Result_Non_Crossing_Biased_Descend = 0;
		      Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__1;
		      goto L51;
		    }
		    else {
		      goto L89;
		    }
		  }
		}
		else {
		  Temp13 = 0;
		  if((Temp13 == 0)) {
		  L90:											Temp1 = Result_Non_Crossing_Biased_Climb;
		    if((Other_Tracked_Alt > Own_Tracked_Alt)) {
		      Temp2 = 1;
		      Upward_preferred_2 = 0;
		      Result_Non_Crossing_Biased_Descend = 0;
		      Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__1;
		      goto L53;
		    }
		    else {
		      Temp2 = 0;
		      if((Temp1 == 0)) {
		      L91:													Upward_preferred_2 = 0;
			Result_Non_Crossing_Biased_Descend = 0;
			Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__1;
			goto L55;
		      }
		      else {
			goto L91;
		      }
		    }
		  }
		  else {
		    goto L90;
		  }
		}
	      }
	    }
	  }
	  else if((Two_of_Three_Reports_Valid > 0) && (Other_RAC == 0)) {
	    goto L81;
	  }
	  else if((Two_of_Three_Reports_Valid == 0)) {
	    goto L56;
	  }
	  else if((0 > Other_RAC)) {
	    goto L56;
	  }
	  else {
	    goto L56;
	  }
	}
	else if((0 > Other_Capability)) {
	L92:						if((0 > Two_of_Three_Reports_Valid) && (Other_RAC == 0)) {
	  L93:							Intent_not_known = 1;
	    Alt_sep = 0;
	    goto L82;
	  }
	  else if((Two_of_Three_Reports_Valid > 0) && (Other_RAC == 0)) {
	    goto L93;
	  }
	  else if((Two_of_Three_Reports_Valid == 0)) {
	  L94:							Alt_sep = 0;
	    goto L82;
	  }
	  else if((0 > Other_RAC)) {
	    goto L94;
	  }
	  else {
	    goto L94;
	  }
	}
	else {
	  goto L92;
	}
      }
      else if((High_Confidence > 0) && (600 >= Own_Tracked_Alt_Rate) && (Cur_Vertical_Sep > 600)) {
	goto L80;
      }
      else if((High_Confidence == 0)) {
	goto L60;
      }
      else if((Own_Tracked_Alt_Rate > 600)) {
	goto L60;
      }
      else {
	goto L60;
      }
    }
    else if((1 > Alt_Layer_Value)) {
      Alim = Positive_RA_Alt_Thresh__3;
      if((0 > High_Confidence) && (600 >= Own_Tracked_Alt_Rate) && (Cur_Vertical_Sep > 600)) {
      L95:					Enabled = 1;
	if((Other_Capability == 0)) {
	  Tcas_equipped = 1;
	  if((0 > Two_of_Three_Reports_Valid) && (Other_RAC == 0)) {
	  L96:							Intent_not_known = 1;
	    Alt_sep = 0;
	  L97:							Upward_preferred_1 = 0;
	    Result_Non_Crossing_Biased_Climb = 0;
	    Alim_Non_Crossing_Biased_Climb = Positive_RA_Alt_Thresh__3;
	    if((Climb_Inhibit == 1)) {
	      Temp11 = (Up_Separation + 100);
	      if((Temp11 > Down_Separation)) {
		Upward_preferred_1 = 1;
		if((Other_Tracked_Alt > Own_Tracked_Alt)) {
		  Temp12 = 1;
		  if((Temp12 > 0) && (Alim_Non_Crossing_Biased_Climb > Down_Separation)) {
		    Result_Non_Crossing_Biased_Climb = 1;
		    Temp1 = Result_Non_Crossing_Biased_Climb;
		    Temp2 = 1;
		    Need_upward_RA = 1;
		    Upward_preferred_2 = 0;
		    Result_Non_Crossing_Biased_Descend = 0;
		    goto L4;
		  }
		  else {
		    Temp1 = Result_Non_Crossing_Biased_Climb;
		    Temp2 = 1;
		    Upward_preferred_2 = 0;
		    Result_Non_Crossing_Biased_Descend = 0;
		    goto L8;
		  }
		}
		else {
		  Temp12 = 0;
		  Result_Non_Crossing_Biased_Climb = 1;
		  Temp1 = Result_Non_Crossing_Biased_Climb;
		  Temp2 = 0;
		  Upward_preferred_2 = 0;
		  Result_Non_Crossing_Biased_Descend = 0;
		  goto L14;
		}
	      }
	      else {
		if((Own_Tracked_Alt > Other_Tracked_Alt)) {
		  Temp13 = 1;
		  if((Temp13 > 0) && (Cur_Vertical_Sep >= 300) && (Up_Separation >= Alim_Non_Crossing_Biased_Climb)) {
		    Result_Non_Crossing_Biased_Climb = 1;
		    Temp1 = Result_Non_Crossing_Biased_Climb;
		    Temp2 = 0;
		    Upward_preferred_2 = 0;
		    Result_Non_Crossing_Biased_Descend = 0;
		    goto L18;
		  }
		  else {
		    Temp1 = Result_Non_Crossing_Biased_Climb;
		    Temp2 = 0;
		    if((Temp1 == 0)) {
		    L98:												Upward_preferred_2 = 0;
		      Result_Non_Crossing_Biased_Descend = 0;
		      goto L21;
		    }
		    else {
		      goto L98;
		    }
		  }
		}
		else {
		  Temp13 = 0;
		  if((Temp13 == 0)) {
		  L99:											Temp1 = Result_Non_Crossing_Biased_Climb;
		    if((Other_Tracked_Alt > Own_Tracked_Alt)) {
		      Temp2 = 1;
		      Upward_preferred_2 = 0;
		      Result_Non_Crossing_Biased_Descend = 0;
		      goto L24;
		    }
		    else {
		      Temp2 = 0;
		      if((Temp1 == 0)) {
		      L100:													Upward_preferred_2 = 0;
			Result_Non_Crossing_Biased_Descend = 0;
			goto L27;
		      }
		      else {
			goto L100;
		      }
		    }
		  }
		  else {
		    goto L99;
		  }
		}
	      }
	    }
	    else if((1 > Climb_Inhibit)) {
	      Temp11 = Up_Separation;
	      if((Temp11 > Down_Separation)) {
		Upward_preferred_1 = 1;
		if((Other_Tracked_Alt > Own_Tracked_Alt)) {
		  Temp12 = 1;
		  if((Temp12 > 0) && (Alim_Non_Crossing_Biased_Climb > Down_Separation)) {
		    Result_Non_Crossing_Biased_Climb = 1;
		    Temp1 = Result_Non_Crossing_Biased_Climb;
		    Temp2 = 1;
		    Need_upward_RA = 1;
		    Upward_preferred_2 = 0;
		    Result_Non_Crossing_Biased_Descend = 0;
		    goto L29;
		  }
		  else {
		    Temp1 = Result_Non_Crossing_Biased_Climb;
		    Temp2 = 1;
		    Upward_preferred_2 = 0;
		    Result_Non_Crossing_Biased_Descend = 0;
		    goto L31;
		  }
		}
		else {
		  Temp12 = 0;
		  Result_Non_Crossing_Biased_Climb = 1;
		  Temp1 = Result_Non_Crossing_Biased_Climb;
		  Temp2 = 0;
		  Upward_preferred_2 = 0;
		  Result_Non_Crossing_Biased_Descend = 0;
		  goto L33;
		}
	      }
	      else {
		if((Own_Tracked_Alt > Other_Tracked_Alt)) {
		  Temp13 = 1;
		  if((Temp13 > 0) && (Cur_Vertical_Sep >= 300) && (Up_Separation >= Alim_Non_Crossing_Biased_Climb)) {
		    Result_Non_Crossing_Biased_Climb = 1;
		    Temp1 = Result_Non_Crossing_Biased_Climb;
		    Temp2 = 0;
		    Upward_preferred_2 = 0;
		    Result_Non_Crossing_Biased_Descend = 0;
		    goto L35;
		  }
		  else {
		    Temp1 = Result_Non_Crossing_Biased_Climb;
		    Temp2 = 0;
		    if((Temp1 == 0)) {
		    L101:												Upward_preferred_2 = 0;
		      Result_Non_Crossing_Biased_Descend = 0;
		      goto L38;
		    }
		    else {
		      goto L101;
		    }
		  }
		}
		else {
		  Temp13 = 0;
		  if((Temp13 == 0)) {
		  L102:											Temp1 = Result_Non_Crossing_Biased_Climb;
		    if((Other_Tracked_Alt > Own_Tracked_Alt)) {
		      Temp2 = 1;
		      Upward_preferred_2 = 0;
		      Result_Non_Crossing_Biased_Descend = 0;
		      goto L41;
		    }
		    else {
		      Temp2 = 0;
		      if((Temp1 == 0)) {
		      L103:													Upward_preferred_2 = 0;
			Result_Non_Crossing_Biased_Descend = 0;
			goto L44;
		      }
		      else {
			goto L103;
		      }
		    }
		  }
		  else {
		    goto L102;
		  }
		}
	      }
	    }
	    else {
	      Temp11 = Up_Separation;
	      if((Temp11 > Down_Separation)) {
		Upward_preferred_1 = 1;
		if((Other_Tracked_Alt > Own_Tracked_Alt)) {
		  Temp12 = 1;
		  if((Temp12 > 0) && (Alim_Non_Crossing_Biased_Climb > Down_Separation)) {
		    Result_Non_Crossing_Biased_Climb = 1;
		    Temp1 = Result_Non_Crossing_Biased_Climb;
		    Temp2 = 1;
		    Need_upward_RA = 1;
		    Upward_preferred_2 = 0;
		    Result_Non_Crossing_Biased_Descend = 0;
		    goto L46;
		  }
		  else {
		    Temp1 = Result_Non_Crossing_Biased_Climb;
		    Temp2 = 1;
		    Upward_preferred_2 = 0;
		    Result_Non_Crossing_Biased_Descend = 0;
		    goto L47;
		  }
		}
		else {
		  Temp12 = 0;
		  Result_Non_Crossing_Biased_Climb = 1;
		  Temp1 = Result_Non_Crossing_Biased_Climb;
		  Temp2 = 0;
		  Upward_preferred_2 = 0;
		  Result_Non_Crossing_Biased_Descend = 0;
		  goto L48;
		}
	      }
	      else {
		if((Own_Tracked_Alt > Other_Tracked_Alt)) {
		  Temp13 = 1;
		  if((Temp13 > 0) && (Cur_Vertical_Sep >= 300) && (Up_Separation >= Alim_Non_Crossing_Biased_Climb)) {
		    Result_Non_Crossing_Biased_Climb = 1;
		    Temp1 = Result_Non_Crossing_Biased_Climb;
		    Temp2 = 0;
		    Upward_preferred_2 = 0;
		    Result_Non_Crossing_Biased_Descend = 0;
		    goto L49;
		  }
		  else {
		    Temp1 = Result_Non_Crossing_Biased_Climb;
		    Temp2 = 0;
		    if((Temp1 == 0)) {
		    L104:												Upward_preferred_2 = 0;
		      Result_Non_Crossing_Biased_Descend = 0;
		      goto L51;
		    }
		    else {
		      goto L104;
		    }
		  }
		}
		else {
		  Temp13 = 0;
		  if((Temp13 == 0)) {
		  L105:											Temp1 = Result_Non_Crossing_Biased_Climb;
		    if((Other_Tracked_Alt > Own_Tracked_Alt)) {
		      Temp2 = 1;
		      Upward_preferred_2 = 0;
		      Result_Non_Crossing_Biased_Descend = 0;
		      goto L53;
		    }
		    else {
		      Temp2 = 0;
		      if((Temp1 == 0)) {
		      L106:													Upward_preferred_2 = 0;
			Result_Non_Crossing_Biased_Descend = 0;
			goto L55;
		      }
		      else {
			goto L106;
		      }
		    }
		  }
		  else {
		    goto L105;
		  }
		}
	      }
	    }
	  }
	  else if((Two_of_Three_Reports_Valid > 0) && (Other_RAC == 0)) {
	    goto L96;
	  }
	  else if((Two_of_Three_Reports_Valid == 0)) {
	    goto L56;
	  }
	  else if((0 > Other_RAC)) {
	    goto L56;
	  }
	  else {
	    goto L56;
	  }
	}
	else if((0 > Other_Capability)) {
	L107:						if((0 > Two_of_Three_Reports_Valid) && (Other_RAC == 0)) {
	  L108:							Intent_not_known = 1;
	    Alt_sep = 0;
	    goto L97;
	  }
	  else if((Two_of_Three_Reports_Valid > 0) && (Other_RAC == 0)) {
	    goto L108;
	  }
	  else if((Two_of_Three_Reports_Valid == 0)) {
	  L109:							Alt_sep = 0;
	    goto L97;
	  }
	  else if((0 > Other_RAC)) {
	    goto L109;
	  }
	  else {
	    goto L109;
	  }
	}
	else {
	  goto L107;
	}
      }
      else if((High_Confidence > 0) && (600 >= Own_Tracked_Alt_Rate) && (Cur_Vertical_Sep > 600)) {
	goto L95;
      }
      else if((High_Confidence == 0)) {
	goto L60;
      }
      else if((Own_Tracked_Alt_Rate > 600)) {
	goto L60;
      }
      else {
	goto L60;
      }
    }
    else {
      if((Alt_Layer_Value == 2)) {
	Alim = Positive_RA_Alt_Thresh__2;
	Alim = Positive_RA_Alt_Thresh__3;
	if((0 > High_Confidence) && (600 >= Own_Tracked_Alt_Rate) && (Cur_Vertical_Sep > 600)) {
	L110:						Enabled = 1;
	  if((Other_Capability == 0)) {
	    Tcas_equipped = 1;
	    if((0 > Two_of_Three_Reports_Valid) && (Other_RAC == 0)) {
	    L111:								Intent_not_known = 1;
	      Alt_sep = 0;
	    L112:								Upward_preferred_1 = 0;
	      Result_Non_Crossing_Biased_Climb = 0;
	      Alim_Non_Crossing_Biased_Climb = Positive_RA_Alt_Thresh__2;
	      Alim_Non_Crossing_Biased_Climb = Positive_RA_Alt_Thresh__3;
	      if((Climb_Inhibit == 1)) {
		Temp11 = (Up_Separation + 100);
		if((Temp11 > Down_Separation)) {
		  Upward_preferred_1 = 1;
		  if((Other_Tracked_Alt > Own_Tracked_Alt)) {
		    Temp12 = 1;
		    if((Temp12 > 0) && (Alim_Non_Crossing_Biased_Climb > Down_Separation)) {
		      Result_Non_Crossing_Biased_Climb = 1;
		      Temp1 = Result_Non_Crossing_Biased_Climb;
		      Temp2 = 1;
		      Need_upward_RA = 1;
		      Upward_preferred_2 = 0;
		      Result_Non_Crossing_Biased_Descend = 0;
		      Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__2;
		      goto L4;
		    }
		    else {
		      Temp1 = Result_Non_Crossing_Biased_Climb;
		      Temp2 = 1;
		      Upward_preferred_2 = 0;
		      Result_Non_Crossing_Biased_Descend = 0;
		      Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__2;
		      goto L8;
		    }
		  }
		  else {
		    Temp12 = 0;
		    Result_Non_Crossing_Biased_Climb = 1;
		    Temp1 = Result_Non_Crossing_Biased_Climb;
		    Temp2 = 0;
		    Upward_preferred_2 = 0;
		    Result_Non_Crossing_Biased_Descend = 0;
		    Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__2;
		    goto L14;
		  }
		}
		else {
		  if((Own_Tracked_Alt > Other_Tracked_Alt)) {
		    Temp13 = 1;
		    if((Temp13 > 0) && (Cur_Vertical_Sep >= 300) && (Up_Separation >= Alim_Non_Crossing_Biased_Climb)) {
		      Result_Non_Crossing_Biased_Climb = 1;
		      Temp1 = Result_Non_Crossing_Biased_Climb;
		      Temp2 = 0;
		      Upward_preferred_2 = 0;
		      Result_Non_Crossing_Biased_Descend = 0;
		      Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__2;
		      goto L18;
		    }
		    else {
		      Temp1 = Result_Non_Crossing_Biased_Climb;
		      Temp2 = 0;
		      if((Temp1 == 0)) {
		      L113:													Upward_preferred_2 = 0;
			Result_Non_Crossing_Biased_Descend = 0;
			Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__2;
			goto L21;
		      }
		      else {
			goto L113;
		      }
		    }
		  }
		  else {
		    Temp13 = 0;
		    if((Temp13 == 0)) {
		    L114:												Temp1 = Result_Non_Crossing_Biased_Climb;
		      if((Other_Tracked_Alt > Own_Tracked_Alt)) {
			Temp2 = 1;
			Upward_preferred_2 = 0;
			Result_Non_Crossing_Biased_Descend = 0;
			Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__2;
			goto L24;
		      }
		      else {
			Temp2 = 0;
			if((Temp1 == 0)) {
			L115:														Upward_preferred_2 = 0;
			  Result_Non_Crossing_Biased_Descend = 0;
			  Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__2;
			  goto L27;
			}
			else {
			  goto L115;
			}
		      }
		    }
		    else {
		      goto L114;
		    }
		  }
		}
	      }
	      else if((1 > Climb_Inhibit)) {
		Temp11 = Up_Separation;
		if((Temp11 > Down_Separation)) {
		  Upward_preferred_1 = 1;
		  if((Other_Tracked_Alt > Own_Tracked_Alt)) {
		    Temp12 = 1;
		    if((Temp12 > 0) && (Alim_Non_Crossing_Biased_Climb > Down_Separation)) {
		      Result_Non_Crossing_Biased_Climb = 1;
		      Temp1 = Result_Non_Crossing_Biased_Climb;
		      Temp2 = 1;
		      Need_upward_RA = 1;
		      Upward_preferred_2 = 0;
		      Result_Non_Crossing_Biased_Descend = 0;
		      Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__2;
		      goto L29;
		    }
		    else {
		      Temp1 = Result_Non_Crossing_Biased_Climb;
		      Temp2 = 1;
		      Upward_preferred_2 = 0;
		      Result_Non_Crossing_Biased_Descend = 0;
		      Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__2;
		      goto L31;
		    }
		  }
		  else {
		    Temp12 = 0;
		    Result_Non_Crossing_Biased_Climb = 1;
		    Temp1 = Result_Non_Crossing_Biased_Climb;
		    Temp2 = 0;
		    Upward_preferred_2 = 0;
		    Result_Non_Crossing_Biased_Descend = 0;
		    Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__2;
		    goto L33;
		  }
		}
		else {
		  if((Own_Tracked_Alt > Other_Tracked_Alt)) {
		    Temp13 = 1;
		    if((Temp13 > 0) && (Cur_Vertical_Sep >= 300) && (Up_Separation >= Alim_Non_Crossing_Biased_Climb)) {
		      Result_Non_Crossing_Biased_Climb = 1;
		      Temp1 = Result_Non_Crossing_Biased_Climb;
		      Temp2 = 0;
		      Upward_preferred_2 = 0;
		      Result_Non_Crossing_Biased_Descend = 0;
		      Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__2;
		      goto L35;
		    }
		    else {
		      Temp1 = Result_Non_Crossing_Biased_Climb;
		      Temp2 = 0;
		      if((Temp1 == 0)) {
		      L116:													Upward_preferred_2 = 0;
			Result_Non_Crossing_Biased_Descend = 0;
			Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__2;
			goto L38;
		      }
		      else {
			goto L116;
		      }
		    }
		  }
		  else {
		    Temp13 = 0;
		    if((Temp13 == 0)) {
		    L117:												Temp1 = Result_Non_Crossing_Biased_Climb;
		      if((Other_Tracked_Alt > Own_Tracked_Alt)) {
			Temp2 = 1;
			Upward_preferred_2 = 0;
			Result_Non_Crossing_Biased_Descend = 0;
			Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__2;
			goto L41;
		      }
		      else {
			Temp2 = 0;
			if((Temp1 == 0)) {
			L118:														Upward_preferred_2 = 0;
			  Result_Non_Crossing_Biased_Descend = 0;
			  Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__2;
			  goto L44;
			}
			else {
			  goto L118;
			}
		      }
		    }
		    else {
		      goto L117;
		    }
		  }
		}
	      }
	      else {
		Temp11 = Up_Separation;
		if((Temp11 > Down_Separation)) {
		  Upward_preferred_1 = 1;
		  if((Other_Tracked_Alt > Own_Tracked_Alt)) {
		    Temp12 = 1;
		    if((Temp12 > 0) && (Alim_Non_Crossing_Biased_Climb > Down_Separation)) {
		      Result_Non_Crossing_Biased_Climb = 1;
		      Temp1 = Result_Non_Crossing_Biased_Climb;
		      Temp2 = 1;
		      Need_upward_RA = 1;
		      Upward_preferred_2 = 0;
		      Result_Non_Crossing_Biased_Descend = 0;
		      Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__2;
		      goto L46;
		    }
		    else {
		      Temp1 = Result_Non_Crossing_Biased_Climb;
		      Temp2 = 1;
		      Upward_preferred_2 = 0;
		      Result_Non_Crossing_Biased_Descend = 0;
		      Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__2;
		      goto L47;
		    }
		  }
		  else {
		    Temp12 = 0;
		    Result_Non_Crossing_Biased_Climb = 1;
		    Temp1 = Result_Non_Crossing_Biased_Climb;
		    Temp2 = 0;
		    Upward_preferred_2 = 0;
		    Result_Non_Crossing_Biased_Descend = 0;
		    Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__2;
		    goto L48;
		  }
		}
		else {
		  if((Own_Tracked_Alt > Other_Tracked_Alt)) {
		    Temp13 = 1;
		    if((Temp13 > 0) && (Cur_Vertical_Sep >= 300) && (Up_Separation >= Alim_Non_Crossing_Biased_Climb)) {
		      Result_Non_Crossing_Biased_Climb = 1;
		      Temp1 = Result_Non_Crossing_Biased_Climb;
		      Temp2 = 0;
		      Upward_preferred_2 = 0;
		      Result_Non_Crossing_Biased_Descend = 0;
		      Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__2;
		      goto L49;
		    }
		    else {
		      Temp1 = Result_Non_Crossing_Biased_Climb;
		      Temp2 = 0;
		      if((Temp1 == 0)) {
		      L119:													Upward_preferred_2 = 0;
			Result_Non_Crossing_Biased_Descend = 0;
			Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__2;
			goto L51;
		      }
		      else {
			goto L119;
		      }
		    }
		  }
		  else {
		    Temp13 = 0;
		    if((Temp13 == 0)) {
		    L120:												Temp1 = Result_Non_Crossing_Biased_Climb;
		      if((Other_Tracked_Alt > Own_Tracked_Alt)) {
			Temp2 = 1;
			Upward_preferred_2 = 0;
			Result_Non_Crossing_Biased_Descend = 0;
			Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__2;
			goto L53;
		      }
		      else {
			Temp2 = 0;
			if((Temp1 == 0)) {
			L121:														Upward_preferred_2 = 0;
			  Result_Non_Crossing_Biased_Descend = 0;
			  Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__2;
			  goto L55;
			}
			else {
			  goto L121;
			}
		      }
		    }
		    else {
		      goto L120;
		    }
		  }
		}
	      }
	    }
	    else if((Two_of_Three_Reports_Valid > 0) && (Other_RAC == 0)) {
	      goto L111;
	    }
	    else if((Two_of_Three_Reports_Valid == 0)) {
	      goto L56;
	    }
	    else if((0 > Other_RAC)) {
	      goto L56;
	    }
	    else {
	      goto L56;
	    }
	  }
	  else if((0 > Other_Capability)) {
	  L122:							if((0 > Two_of_Three_Reports_Valid) && (Other_RAC == 0)) {
	    L123:								Intent_not_known = 1;
	      Alt_sep = 0;
	      goto L112;
	    }
	    else if((Two_of_Three_Reports_Valid > 0) && (Other_RAC == 0)) {
	      goto L123;
	    }
	    else if((Two_of_Three_Reports_Valid == 0)) {
	    L124:								Alt_sep = 0;
	      goto L112;
	    }
	    else if((0 > Other_RAC)) {
	      goto L124;
	    }
	    else {
	      goto L124;
	    }
	  }
	  else {
	    goto L122;
	  }
	}
	else if((High_Confidence > 0) && (600 >= Own_Tracked_Alt_Rate) && (Cur_Vertical_Sep > 600)) {
	  goto L110;
	}
	else if((High_Confidence == 0)) {
	  goto L60;
	}
	else if((Own_Tracked_Alt_Rate > 600)) {
	  goto L60;
	}
	else {
	  goto L60;
	}
      }
      else if((2 > Alt_Layer_Value)) {
	Alim = Positive_RA_Alt_Thresh__3;
	if((0 > High_Confidence) && (600 >= Own_Tracked_Alt_Rate) && (Cur_Vertical_Sep > 600)) {
	L125:						Enabled = 1;
	  if((Other_Capability == 0)) {
	    Tcas_equipped = 1;
	    if((0 > Two_of_Three_Reports_Valid) && (Other_RAC == 0)) {
	    L126:								Intent_not_known = 1;
	      Alt_sep = 0;
	    L127:								Upward_preferred_1 = 0;
	      Result_Non_Crossing_Biased_Climb = 0;
	      Alim_Non_Crossing_Biased_Climb = Positive_RA_Alt_Thresh__3;
	      if((Climb_Inhibit == 1)) {
		Temp11 = (Up_Separation + 100);
		if((Temp11 > Down_Separation)) {
		  Upward_preferred_1 = 1;
		  if((Other_Tracked_Alt > Own_Tracked_Alt)) {
		    Temp12 = 1;
		    if((Temp12 > 0) && (Alim_Non_Crossing_Biased_Climb > Down_Separation)) {
		      Result_Non_Crossing_Biased_Climb = 1;
		      Temp1 = Result_Non_Crossing_Biased_Climb;
		      Temp2 = 1;
		      Need_upward_RA = 1;
		      Upward_preferred_2 = 0;
		      Result_Non_Crossing_Biased_Descend = 0;
		      goto L4;
		    }
		    else {
		      Temp1 = Result_Non_Crossing_Biased_Climb;
		      Temp2 = 1;
		      Upward_preferred_2 = 0;
		      Result_Non_Crossing_Biased_Descend = 0;
		      goto L8;
		    }
		  }
		  else {
		    Temp12 = 0;
		    Result_Non_Crossing_Biased_Climb = 1;
		    Temp1 = Result_Non_Crossing_Biased_Climb;
		    Temp2 = 0;
		    Upward_preferred_2 = 0;
		    Result_Non_Crossing_Biased_Descend = 0;
		    goto L14;
		  }
		}
		else {
		  if((Own_Tracked_Alt > Other_Tracked_Alt)) {
		    Temp13 = 1;
		    if((Temp13 > 0) && (Cur_Vertical_Sep >= 300) && (Up_Separation >= Alim_Non_Crossing_Biased_Climb)) {
		      Result_Non_Crossing_Biased_Climb = 1;
		      Temp1 = Result_Non_Crossing_Biased_Climb;
		      Temp2 = 0;
		      Upward_preferred_2 = 0;
		      Result_Non_Crossing_Biased_Descend = 0;
		      goto L18;
		    }
		    else {
		      Temp1 = Result_Non_Crossing_Biased_Climb;
		      Temp2 = 0;
		      if((Temp1 == 0)) {
		      L128:													Upward_preferred_2 = 0;
			Result_Non_Crossing_Biased_Descend = 0;
			goto L21;
		      }
		      else {
			goto L128;
		      }
		    }
		  }
		  else {
		    Temp13 = 0;
		    if((Temp13 == 0)) {
		    L129:												Temp1 = Result_Non_Crossing_Biased_Climb;
		      if((Other_Tracked_Alt > Own_Tracked_Alt)) {
			Temp2 = 1;
			Upward_preferred_2 = 0;
			Result_Non_Crossing_Biased_Descend = 0;
			goto L24;
		      }
		      else {
			Temp2 = 0;
			if((Temp1 == 0)) {
			L130:														Upward_preferred_2 = 0;
			  Result_Non_Crossing_Biased_Descend = 0;
			  goto L27;
			}
			else {
			  goto L130;
			}
		      }
		    }
		    else {
		      goto L129;
		    }
		  }
		}
	      }
	      else if((1 > Climb_Inhibit)) {
		Temp11 = Up_Separation;
		if((Temp11 > Down_Separation)) {
		  Upward_preferred_1 = 1;
		  if((Other_Tracked_Alt > Own_Tracked_Alt)) {
		    Temp12 = 1;
		    if((Temp12 > 0) && (Alim_Non_Crossing_Biased_Climb > Down_Separation)) {
		      Result_Non_Crossing_Biased_Climb = 1;
		      Temp1 = Result_Non_Crossing_Biased_Climb;
		      Temp2 = 1;
		      Need_upward_RA = 1;
		      Upward_preferred_2 = 0;
		      Result_Non_Crossing_Biased_Descend = 0;
		      goto L29;
		    }
		    else {
		      Temp1 = Result_Non_Crossing_Biased_Climb;
		      Temp2 = 1;
		      Upward_preferred_2 = 0;
		      Result_Non_Crossing_Biased_Descend = 0;
		      goto L31;
		    }
		  }
		  else {
		    Temp12 = 0;
		    Result_Non_Crossing_Biased_Climb = 1;
		    Temp1 = Result_Non_Crossing_Biased_Climb;
		    Temp2 = 0;
		    Upward_preferred_2 = 0;
		    Result_Non_Crossing_Biased_Descend = 0;
		    goto L33;
		  }
		}
		else {
		  if((Own_Tracked_Alt > Other_Tracked_Alt)) {
		    Temp13 = 1;
		    if((Temp13 > 0) && (Cur_Vertical_Sep >= 300) && (Up_Separation >= Alim_Non_Crossing_Biased_Climb)) {
		      Result_Non_Crossing_Biased_Climb = 1;
		      Temp1 = Result_Non_Crossing_Biased_Climb;
		      Temp2 = 0;
		      Upward_preferred_2 = 0;
		      Result_Non_Crossing_Biased_Descend = 0;
		      goto L35;
		    }
		    else {
		      Temp1 = Result_Non_Crossing_Biased_Climb;
		      Temp2 = 0;
		      if((Temp1 == 0)) {
		      L131:													Upward_preferred_2 = 0;
			Result_Non_Crossing_Biased_Descend = 0;
			goto L38;
		      }
		      else {
			goto L131;
		      }
		    }
		  }
		  else {
		    Temp13 = 0;
		    if((Temp13 == 0)) {
		    L132:												Temp1 = Result_Non_Crossing_Biased_Climb;
		      if((Other_Tracked_Alt > Own_Tracked_Alt)) {
			Temp2 = 1;
			Upward_preferred_2 = 0;
			Result_Non_Crossing_Biased_Descend = 0;
			goto L41;
		      }
		      else {
			Temp2 = 0;
			if((Temp1 == 0)) {
			L133:														Upward_preferred_2 = 0;
			  Result_Non_Crossing_Biased_Descend = 0;
			  goto L44;
			}
			else {
			  goto L133;
			}
		      }
		    }
		    else {
		      goto L132;
		    }
		  }
		}
	      }
	      else {
		Temp11 = Up_Separation;
		if((Temp11 > Down_Separation)) {
		  Upward_preferred_1 = 1;
		  if((Other_Tracked_Alt > Own_Tracked_Alt)) {
		    Temp12 = 1;
		    if((Temp12 > 0) && (Alim_Non_Crossing_Biased_Climb > Down_Separation)) {
		      Result_Non_Crossing_Biased_Climb = 1;
		      Temp1 = Result_Non_Crossing_Biased_Climb;
		      Temp2 = 1;
		      Need_upward_RA = 1;
		      Upward_preferred_2 = 0;
		      Result_Non_Crossing_Biased_Descend = 0;
		      goto L46;
		    }
		    else {
		      Temp1 = Result_Non_Crossing_Biased_Climb;
		      Temp2 = 1;
		      Upward_preferred_2 = 0;
		      Result_Non_Crossing_Biased_Descend = 0;
		      goto L47;
		    }
		  }
		  else {
		    Temp12 = 0;
		    Result_Non_Crossing_Biased_Climb = 1;
		    Temp1 = Result_Non_Crossing_Biased_Climb;
		    Temp2 = 0;
		    Upward_preferred_2 = 0;
		    Result_Non_Crossing_Biased_Descend = 0;
		    goto L48;
		  }
		}
		else {
		  if((Own_Tracked_Alt > Other_Tracked_Alt)) {
		    Temp13 = 1;
		    if((Temp13 > 0) && (Cur_Vertical_Sep >= 300) && (Up_Separation >= Alim_Non_Crossing_Biased_Climb)) {
		      Result_Non_Crossing_Biased_Climb = 1;
		      Temp1 = Result_Non_Crossing_Biased_Climb;
		      Temp2 = 0;
		      Upward_preferred_2 = 0;
		      Result_Non_Crossing_Biased_Descend = 0;
		      goto L49;
		    }
		    else {
		      Temp1 = Result_Non_Crossing_Biased_Climb;
		      Temp2 = 0;
		      if((Temp1 == 0)) {
		      L134:													Upward_preferred_2 = 0;
			Result_Non_Crossing_Biased_Descend = 0;
			goto L51;
		      }
		      else {
			goto L134;
		      }
		    }
		  }
		  else {
		    Temp13 = 0;
		    if((Temp13 == 0)) {
		    L135:												Temp1 = Result_Non_Crossing_Biased_Climb;
		      if((Other_Tracked_Alt > Own_Tracked_Alt)) {
			Temp2 = 1;
			Upward_preferred_2 = 0;
			Result_Non_Crossing_Biased_Descend = 0;
			goto L53;
		      }
		      else {
			Temp2 = 0;
			if((Temp1 == 0)) {
			L136:														Upward_preferred_2 = 0;
			  Result_Non_Crossing_Biased_Descend = 0;
			  goto L55;
			}
			else {
			  goto L136;
			}
		      }
		    }
		    else {
		      goto L135;
		    }
		  }
		}
	      }
	    }
	    else if((Two_of_Three_Reports_Valid > 0) && (Other_RAC == 0)) {
	      goto L126;
	    }
	    else if((Two_of_Three_Reports_Valid == 0)) {
	      goto L56;
	    }
	    else if((0 > Other_RAC)) {
	      goto L56;
	    }
	    else {
	      goto L56;
	    }
	  }
	  else if((0 > Other_Capability)) {
	  L137:							if((0 > Two_of_Three_Reports_Valid) && (Other_RAC == 0)) {
	    L138:								Intent_not_known = 1;
	      Alt_sep = 0;
	      goto L127;
	    }
	    else if((Two_of_Three_Reports_Valid > 0) && (Other_RAC == 0)) {
	      goto L138;
	    }
	    else if((Two_of_Three_Reports_Valid == 0)) {
	    L139:								Alt_sep = 0;
	      goto L127;
	    }
	    else if((0 > Other_RAC)) {
	      goto L139;
	    }
	    else {
	      goto L139;
	    }
	  }
	  else {
	    goto L137;
	  }
	}
	else if((High_Confidence > 0) && (600 >= Own_Tracked_Alt_Rate) && (Cur_Vertical_Sep > 600)) {
	  goto L125;
	}
	else if((High_Confidence == 0)) {
	  goto L60;
	}
	else if((Own_Tracked_Alt_Rate > 600)) {
	  goto L60;
	}
	else {
	  goto L60;
	}
      }
      else {
	Alim = Positive_RA_Alt_Thresh__3;
	if((0 > High_Confidence) && (600 >= Own_Tracked_Alt_Rate) && (Cur_Vertical_Sep > 600)) {
	L140:						Enabled = 1;
	  if((Other_Capability == 0)) {
	    Tcas_equipped = 1;
	    if((0 > Two_of_Three_Reports_Valid) && (Other_RAC == 0)) {
	    L141:								Intent_not_known = 1;
	      Alt_sep = 0;
	    L142:								Upward_preferred_1 = 0;
	      Result_Non_Crossing_Biased_Climb = 0;
	      Alim_Non_Crossing_Biased_Climb = Positive_RA_Alt_Thresh__3;
	      if((Climb_Inhibit == 1)) {
		Temp11 = (Up_Separation + 100);
		if((Temp11 > Down_Separation)) {
		  Upward_preferred_1 = 1;
		  if((Other_Tracked_Alt > Own_Tracked_Alt)) {
		    Temp12 = 1;
		    if((Temp12 > 0) && (Alim_Non_Crossing_Biased_Climb > Down_Separation)) {
		      Result_Non_Crossing_Biased_Climb = 1;
		      Temp1 = Result_Non_Crossing_Biased_Climb;
		      Temp2 = 1;
		      Need_upward_RA = 1;
		      Upward_preferred_2 = 0;
		      Result_Non_Crossing_Biased_Descend = 0;
		      goto L4;
		    }
		    else {
		      Temp1 = Result_Non_Crossing_Biased_Climb;
		      Temp2 = 1;
		      Upward_preferred_2 = 0;
		      Result_Non_Crossing_Biased_Descend = 0;
		      goto L8;
		    }
		  }
		  else {
		    Temp12 = 0;
		    Result_Non_Crossing_Biased_Climb = 1;
		    Temp1 = Result_Non_Crossing_Biased_Climb;
		    Temp2 = 0;
		    Upward_preferred_2 = 0;
		    Result_Non_Crossing_Biased_Descend = 0;
		    goto L14;
		  }
		}
		else {
		  if((Own_Tracked_Alt > Other_Tracked_Alt)) {
		    Temp13 = 1;
		    if((Temp13 > 0) && (Cur_Vertical_Sep >= 300) && (Up_Separation >= Alim_Non_Crossing_Biased_Climb)) {
		      Result_Non_Crossing_Biased_Climb = 1;
		      Temp1 = Result_Non_Crossing_Biased_Climb;
		      Temp2 = 0;
		      Upward_preferred_2 = 0;
		      Result_Non_Crossing_Biased_Descend = 0;
		      goto L18;
		    }
		    else {
		      Temp1 = Result_Non_Crossing_Biased_Climb;
		      Temp2 = 0;
		      if((Temp1 == 0)) {
		      L143:													Upward_preferred_2 = 0;
			Result_Non_Crossing_Biased_Descend = 0;
			goto L21;
		      }
		      else {
			goto L143;
		      }
		    }
		  }
		  else {
		    Temp13 = 0;
		    if((Temp13 == 0)) {
		    L144:												Temp1 = Result_Non_Crossing_Biased_Climb;
		      if((Other_Tracked_Alt > Own_Tracked_Alt)) {
			Temp2 = 1;
			Upward_preferred_2 = 0;
			Result_Non_Crossing_Biased_Descend = 0;
			goto L24;
		      }
		      else {
			Temp2 = 0;
			if((Temp1 == 0)) {
			L145:														Upward_preferred_2 = 0;
			  Result_Non_Crossing_Biased_Descend = 0;
			  goto L27;
			}
			else {
			  goto L145;
			}
		      }
		    }
		    else {
		      goto L144;
		    }
		  }
		}
	      }
	      else if((1 > Climb_Inhibit)) {
		Temp11 = Up_Separation;
		if((Temp11 > Down_Separation)) {
		  Upward_preferred_1 = 1;
		  if((Other_Tracked_Alt > Own_Tracked_Alt)) {
		    Temp12 = 1;
		    if((Temp12 > 0) && (Alim_Non_Crossing_Biased_Climb > Down_Separation)) {
		      Result_Non_Crossing_Biased_Climb = 1;
		      Temp1 = Result_Non_Crossing_Biased_Climb;
		      Temp2 = 1;
		      Need_upward_RA = 1;
		      Upward_preferred_2 = 0;
		      Result_Non_Crossing_Biased_Descend = 0;
		      goto L29;
		    }
		    else {
		      Temp1 = Result_Non_Crossing_Biased_Climb;
		      Temp2 = 1;
		      Upward_preferred_2 = 0;
		      Result_Non_Crossing_Biased_Descend = 0;
		      goto L31;
		    }
		  }
		  else {
		    Temp12 = 0;
		    Result_Non_Crossing_Biased_Climb = 1;
		    Temp1 = Result_Non_Crossing_Biased_Climb;
		    Temp2 = 0;
		    Upward_preferred_2 = 0;
		    Result_Non_Crossing_Biased_Descend = 0;
		    goto L33;
		  }
		}
		else {
		  if((Own_Tracked_Alt > Other_Tracked_Alt)) {
		    Temp13 = 1;
		    if((Temp13 > 0) && (Cur_Vertical_Sep >= 300) && (Up_Separation >= Alim_Non_Crossing_Biased_Climb)) {
		      Result_Non_Crossing_Biased_Climb = 1;
		      Temp1 = Result_Non_Crossing_Biased_Climb;
		      Temp2 = 0;
		      Upward_preferred_2 = 0;
		      Result_Non_Crossing_Biased_Descend = 0;
		      goto L35;
		    }
		    else {
		      Temp1 = Result_Non_Crossing_Biased_Climb;
		      Temp2 = 0;
		      if((Temp1 == 0)) {
		      L146:													Upward_preferred_2 = 0;
			Result_Non_Crossing_Biased_Descend = 0;
			goto L38;
		      }
		      else {
			goto L146;
		      }
		    }
		  }
		  else {
		    Temp13 = 0;
		    if((Temp13 == 0)) {
		    L147:												Temp1 = Result_Non_Crossing_Biased_Climb;
		      if((Other_Tracked_Alt > Own_Tracked_Alt)) {
			Temp2 = 1;
			Upward_preferred_2 = 0;
			Result_Non_Crossing_Biased_Descend = 0;
			goto L41;
		      }
		      else {
			Temp2 = 0;
			if((Temp1 == 0)) {
			L148:														Upward_preferred_2 = 0;
			  Result_Non_Crossing_Biased_Descend = 0;
			  goto L44;
			}
			else {
			  goto L148;
			}
		      }
		    }
		    else {
		      goto L147;
		    }
		  }
		}
	      }
	      else {
		Temp11 = Up_Separation;
		if((Temp11 > Down_Separation)) {
		  Upward_preferred_1 = 1;
		  if((Other_Tracked_Alt > Own_Tracked_Alt)) {
		    Temp12 = 1;
		    if((Temp12 > 0) && (Alim_Non_Crossing_Biased_Climb > Down_Separation)) {
		      Result_Non_Crossing_Biased_Climb = 1;
		      Temp1 = Result_Non_Crossing_Biased_Climb;
		      Temp2 = 1;
		      Need_upward_RA = 1;
		      Upward_preferred_2 = 0;
		      Result_Non_Crossing_Biased_Descend = 0;
		      goto L46;
		    }
		    else {
		      Temp1 = Result_Non_Crossing_Biased_Climb;
		      Temp2 = 1;
		      Upward_preferred_2 = 0;
		      Result_Non_Crossing_Biased_Descend = 0;
		      goto L47;
		    }
		  }
		  else {
		    Temp12 = 0;
		    Result_Non_Crossing_Biased_Climb = 1;
		    Temp1 = Result_Non_Crossing_Biased_Climb;
		    Temp2 = 0;
		    Upward_preferred_2 = 0;
		    Result_Non_Crossing_Biased_Descend = 0;
		    goto L48;
		  }
		}
		else {
		  if((Own_Tracked_Alt > Other_Tracked_Alt)) {
		    Temp13 = 1;
		    if((Temp13 > 0) && (Cur_Vertical_Sep >= 300) && (Up_Separation >= Alim_Non_Crossing_Biased_Climb)) {
		      Result_Non_Crossing_Biased_Climb = 1;
		      Temp1 = Result_Non_Crossing_Biased_Climb;
		      Temp2 = 0;
		      Upward_preferred_2 = 0;
		      Result_Non_Crossing_Biased_Descend = 0;
		      goto L49;
		    }
		    else {
		      Temp1 = Result_Non_Crossing_Biased_Climb;
		      Temp2 = 0;
		      if((Temp1 == 0)) {
		      L149:													Upward_preferred_2 = 0;
			Result_Non_Crossing_Biased_Descend = 0;
			goto L51;
		      }
		      else {
			goto L149;
		      }
		    }
		  }
		  else {
		    Temp13 = 0;
		    if((Temp13 == 0)) {
		    L150:												Temp1 = Result_Non_Crossing_Biased_Climb;
		      if((Other_Tracked_Alt > Own_Tracked_Alt)) {
			Temp2 = 1;
			Upward_preferred_2 = 0;
			Result_Non_Crossing_Biased_Descend = 0;
			goto L53;
		      }
		      else {
			Temp2 = 0;
			if((Temp1 == 0)) {
			L151:														Upward_preferred_2 = 0;
			  Result_Non_Crossing_Biased_Descend = 0;
			  goto L55;
			}
			else {
			  goto L151;
			}
		      }
		    }
		    else {
		      goto L150;
		    }
		  }
		}
	      }
	    }
	    else if((Two_of_Three_Reports_Valid > 0) && (Other_RAC == 0)) {
	      goto L141;
	    }
	    else if((Two_of_Three_Reports_Valid == 0)) {
	      goto L56;
	    }
	    else if((0 > Other_RAC)) {
	      goto L56;
	    }
	    else {
	      goto L56;
	    }
	  }
	  else if((0 > Other_Capability)) {
	  L152:							if((0 > Two_of_Three_Reports_Valid) && (Other_RAC == 0)) {
	    L153:								Intent_not_known = 1;
	      Alt_sep = 0;
	      goto L142;
	    }
	    else if((Two_of_Three_Reports_Valid > 0) && (Other_RAC == 0)) {
	      goto L153;
	    }
	    else if((Two_of_Three_Reports_Valid == 0)) {
	    L154:								Alt_sep = 0;
	      goto L142;
	    }
	    else if((0 > Other_RAC)) {
	      goto L154;
	    }
	    else {
	      goto L154;
	    }
	  }
	  else {
	    goto L152;
	  }
	}
	else if((High_Confidence > 0) && (600 >= Own_Tracked_Alt_Rate) && (Cur_Vertical_Sep > 600)) {
	  goto L140;
	}
	else if((High_Confidence == 0)) {
	  goto L60;
	}
	else if((Own_Tracked_Alt_Rate > 600)) {
	  goto L60;
	}
	else {
	  goto L60;
	}
      }
    }
  }
}
