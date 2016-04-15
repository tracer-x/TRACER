// ---- begin global declarations ----
int RetVal;
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

// ---- end global declarations ----

int main() {

// ---- begin local declarations ----

// ---- func_main ----
	int func_main_Enabled;
	int func_main_Tcas_equipped;
	int func_main_Intent_not_known;
	int func_main_Need_upward_RA;
	int func_main_Need_downward_RA;
	int func_main_Alt_sep;
	int func_main_Alim;
	int func_main_Temp1;
	int func_main_Temp2;
	int func_main_Temp3;
	int func_main_Temp4;
	int func_main_Result_Non_Crossing_Biased_Climb;
	int func_main_Result_Non_Crossing_Biased_Descend;
	int func_main_Upward_preferred_1;
	int func_main_Alim_Non_Crossing_Biased_Climb;
	int func_main_Temp11;
	int func_main_Temp12;
	int func_main_Temp13;
	int func_main_Upward_preferred_2;
	int func_main_Alim_Non_Crossing_Biased_Descend;
	int func_main_Temp21;
	int func_main_Temp22;
	int func_main_Temp23;

// ---- func___TRACER_INIT ----

// ---- end local declarations ----

	RetVal = 0;
	;
	Positive_RA_Alt_Thresh__0 = 400;
	Positive_RA_Alt_Thresh__1 = 500;
	Positive_RA_Alt_Thresh__2 = 640;
	Positive_RA_Alt_Thresh__3 = 740;
	func_main_Enabled = 0;
	func_main_Tcas_equipped = 0;
	func_main_Intent_not_known = 0;
	func_main_Need_upward_RA = 0;
	func_main_Need_downward_RA = 0;
	if((Alt_Layer_Value == 0)) {
		func_main_Alim = Positive_RA_Alt_Thresh__0;
		func_main_Alim = Positive_RA_Alt_Thresh__3;
		if((0 > High_Confidence) && (600 >= Own_Tracked_Alt_Rate) && (Cur_Vertical_Sep > 600)) {
L1:			func_main_Enabled = 1;
			if((Other_Capability == 0)) {
				func_main_Tcas_equipped = 1;
				if((0 > Two_of_Three_Reports_Valid) && (Other_RAC == 0)) {
L2:					func_main_Intent_not_known = 1;
					func_main_Alt_sep = 0;
L3:					func_main_Upward_preferred_1 = 0;
					func_main_Result_Non_Crossing_Biased_Climb = 0;
					func_main_Alim_Non_Crossing_Biased_Climb = Positive_RA_Alt_Thresh__0;
					func_main_Alim_Non_Crossing_Biased_Climb = Positive_RA_Alt_Thresh__3;
					if((Climb_Inhibit == 1)) {
						func_main_Temp11 = (Up_Separation + 100);
						if((func_main_Temp11 > Down_Separation)) {
							func_main_Upward_preferred_1 = 1;
							if((Other_Tracked_Alt > Own_Tracked_Alt)) {
								func_main_Temp12 = 1;
								if((func_main_Temp12 > 0) && (func_main_Alim_Non_Crossing_Biased_Climb > Down_Separation)) {
									func_main_Result_Non_Crossing_Biased_Climb = 1;
									func_main_Temp1 = func_main_Result_Non_Crossing_Biased_Climb;
									func_main_Temp2 = 1;
									func_main_Need_upward_RA = 1;
									func_main_Upward_preferred_2 = 0;
									func_main_Result_Non_Crossing_Biased_Descend = 0;
									func_main_Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__0;
L4:									func_main_Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__3;
									func_main_Temp21 = (Up_Separation + 100);
L5:									func_main_Upward_preferred_2 = 1;
									func_main_Temp22 = 1;
									func_main_Temp3 = func_main_Result_Non_Crossing_Biased_Descend;
									func_main_Temp4 = 0;
									if((func_main_Temp3 == 0)) {
L6:										func_main_Alt_sep = 1;
L7:										RetVal = 0;
										return RetVal;
									}
									else {
										goto L6;
									}
								}
								else {
									func_main_Temp1 = func_main_Result_Non_Crossing_Biased_Climb;
									func_main_Temp2 = 1;
									func_main_Upward_preferred_2 = 0;
									func_main_Result_Non_Crossing_Biased_Descend = 0;
									func_main_Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__0;
L8:									func_main_Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__3;
									func_main_Temp21 = (Up_Separation + 100);
L9:									func_main_Upward_preferred_2 = 1;
									func_main_Temp22 = 1;
									func_main_Result_Non_Crossing_Biased_Descend = 1;
L10:									func_main_Temp3 = func_main_Result_Non_Crossing_Biased_Descend;
L11:									func_main_Temp4 = 0;
L12:									if((func_main_Need_upward_RA == 0)) {
L13:										func_main_Alt_sep = 0;
										goto L7;
									}
									else {
										goto L13;
									}
								}
							}
							else {
								func_main_Temp12 = 0;
								func_main_Result_Non_Crossing_Biased_Climb = 1;
								func_main_Temp1 = func_main_Result_Non_Crossing_Biased_Climb;
								func_main_Temp2 = 0;
								func_main_Upward_preferred_2 = 0;
								func_main_Result_Non_Crossing_Biased_Descend = 0;
								func_main_Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__0;
L14:								func_main_Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__3;
								func_main_Temp21 = (Up_Separation + 100);
L15:								func_main_Upward_preferred_2 = 1;
								func_main_Temp22 = 0;
								if((func_main_Temp22 == 0)) {
L16:L17:									func_main_Temp3 = func_main_Result_Non_Crossing_Biased_Descend;
									if((Own_Tracked_Alt > Other_Tracked_Alt)) {
										func_main_Temp4 = 1;
										goto L12;
									}
									else {
										func_main_Temp4 = 0;
										if((func_main_Temp3 == 0)) {
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
								func_main_Temp13 = 1;
								if((func_main_Temp13 > 0) && (Cur_Vertical_Sep >= 300) && (Up_Separation >= func_main_Alim_Non_Crossing_Biased_Climb)) {
									func_main_Result_Non_Crossing_Biased_Climb = 1;
									func_main_Temp1 = func_main_Result_Non_Crossing_Biased_Climb;
									func_main_Temp2 = 0;
									func_main_Upward_preferred_2 = 0;
									func_main_Result_Non_Crossing_Biased_Descend = 0;
									func_main_Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__0;
L18:									func_main_Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__3;
									func_main_Temp21 = (Up_Separation + 100);
L19:									func_main_Temp23 = 1;
									func_main_Result_Non_Crossing_Biased_Descend = 1;
									func_main_Temp3 = func_main_Result_Non_Crossing_Biased_Descend;
									func_main_Temp4 = 1;
									func_main_Need_downward_RA = 1;
									if(((func_main_Alim > Up_Separation) && (func_main_Alim > Down_Separation) && (Up_Separation > Down_Separation))) ERROR: goto ERROR;
									func_main_Alt_sep = 2;
									goto L7;
								}
								else {
									func_main_Temp1 = func_main_Result_Non_Crossing_Biased_Climb;
									func_main_Temp2 = 0;
									if((func_main_Temp1 == 0)) {
L20:										func_main_Upward_preferred_2 = 0;
										func_main_Result_Non_Crossing_Biased_Descend = 0;
										func_main_Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__0;
L21:										func_main_Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__3;
										func_main_Temp21 = (Up_Separation + 100);
L22:										func_main_Temp23 = 1;
										goto L17;
									}
									else {
										goto L20;
									}
								}
							}
							else {
								func_main_Temp13 = 0;
								if((func_main_Temp13 == 0)) {
L23:									func_main_Temp1 = func_main_Result_Non_Crossing_Biased_Climb;
									if((Other_Tracked_Alt > Own_Tracked_Alt)) {
										func_main_Temp2 = 1;
										func_main_Upward_preferred_2 = 0;
										func_main_Result_Non_Crossing_Biased_Descend = 0;
										func_main_Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__0;
L24:										func_main_Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__3;
										func_main_Temp21 = (Up_Separation + 100);
L25:										func_main_Temp23 = 0;
										func_main_Result_Non_Crossing_Biased_Descend = 1;
										goto L10;
									}
									else {
										func_main_Temp2 = 0;
										if((func_main_Temp1 == 0)) {
L26:											func_main_Upward_preferred_2 = 0;
											func_main_Result_Non_Crossing_Biased_Descend = 0;
											func_main_Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__0;
L27:											func_main_Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__3;
											func_main_Temp21 = (Up_Separation + 100);
L28:											func_main_Temp23 = 0;
											func_main_Result_Non_Crossing_Biased_Descend = 1;
											func_main_Temp3 = func_main_Result_Non_Crossing_Biased_Descend;
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
						func_main_Temp11 = Up_Separation;
						if((func_main_Temp11 > Down_Separation)) {
							func_main_Upward_preferred_1 = 1;
							if((Other_Tracked_Alt > Own_Tracked_Alt)) {
								func_main_Temp12 = 1;
								if((func_main_Temp12 > 0) && (func_main_Alim_Non_Crossing_Biased_Climb > Down_Separation)) {
									func_main_Result_Non_Crossing_Biased_Climb = 1;
									func_main_Temp1 = func_main_Result_Non_Crossing_Biased_Climb;
									func_main_Temp2 = 1;
									func_main_Need_upward_RA = 1;
									func_main_Upward_preferred_2 = 0;
									func_main_Result_Non_Crossing_Biased_Descend = 0;
									func_main_Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__0;
L29:									func_main_Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__3;
L30:									func_main_Temp21 = Up_Separation;
									goto L5;
								}
								else {
									func_main_Temp1 = func_main_Result_Non_Crossing_Biased_Climb;
									func_main_Temp2 = 1;
									func_main_Upward_preferred_2 = 0;
									func_main_Result_Non_Crossing_Biased_Descend = 0;
									func_main_Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__0;
L31:									func_main_Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__3;
L32:									func_main_Temp21 = Up_Separation;
									goto L9;
								}
							}
							else {
								func_main_Temp12 = 0;
								func_main_Result_Non_Crossing_Biased_Climb = 1;
								func_main_Temp1 = func_main_Result_Non_Crossing_Biased_Climb;
								func_main_Temp2 = 0;
								func_main_Upward_preferred_2 = 0;
								func_main_Result_Non_Crossing_Biased_Descend = 0;
								func_main_Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__0;
L33:								func_main_Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__3;
L34:								func_main_Temp21 = Up_Separation;
								goto L15;
							}
						}
						else {
							if((Own_Tracked_Alt > Other_Tracked_Alt)) {
								func_main_Temp13 = 1;
								if((func_main_Temp13 > 0) && (Cur_Vertical_Sep >= 300) && (Up_Separation >= func_main_Alim_Non_Crossing_Biased_Climb)) {
									func_main_Result_Non_Crossing_Biased_Climb = 1;
									func_main_Temp1 = func_main_Result_Non_Crossing_Biased_Climb;
									func_main_Temp2 = 0;
									func_main_Upward_preferred_2 = 0;
									func_main_Result_Non_Crossing_Biased_Descend = 0;
									func_main_Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__0;
L35:									func_main_Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__3;
L36:									func_main_Temp21 = Up_Separation;
									goto L19;
								}
								else {
									func_main_Temp1 = func_main_Result_Non_Crossing_Biased_Climb;
									func_main_Temp2 = 0;
									if((func_main_Temp1 == 0)) {
L37:										func_main_Upward_preferred_2 = 0;
										func_main_Result_Non_Crossing_Biased_Descend = 0;
										func_main_Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__0;
L38:										func_main_Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__3;
L39:										func_main_Temp21 = Up_Separation;
										goto L22;
									}
									else {
										goto L37;
									}
								}
							}
							else {
								func_main_Temp13 = 0;
								if((func_main_Temp13 == 0)) {
L40:									func_main_Temp1 = func_main_Result_Non_Crossing_Biased_Climb;
									if((Other_Tracked_Alt > Own_Tracked_Alt)) {
										func_main_Temp2 = 1;
										func_main_Upward_preferred_2 = 0;
										func_main_Result_Non_Crossing_Biased_Descend = 0;
										func_main_Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__0;
L41:										func_main_Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__3;
L42:										func_main_Temp21 = Up_Separation;
										goto L25;
									}
									else {
										func_main_Temp2 = 0;
										if((func_main_Temp1 == 0)) {
L43:											func_main_Upward_preferred_2 = 0;
											func_main_Result_Non_Crossing_Biased_Descend = 0;
											func_main_Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__0;
L44:											func_main_Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__3;
L45:											func_main_Temp21 = Up_Separation;
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
						func_main_Temp11 = Up_Separation;
						if((func_main_Temp11 > Down_Separation)) {
							func_main_Upward_preferred_1 = 1;
							if((Other_Tracked_Alt > Own_Tracked_Alt)) {
								func_main_Temp12 = 1;
								if((func_main_Temp12 > 0) && (func_main_Alim_Non_Crossing_Biased_Climb > Down_Separation)) {
									func_main_Result_Non_Crossing_Biased_Climb = 1;
									func_main_Temp1 = func_main_Result_Non_Crossing_Biased_Climb;
									func_main_Temp2 = 1;
									func_main_Need_upward_RA = 1;
									func_main_Upward_preferred_2 = 0;
									func_main_Result_Non_Crossing_Biased_Descend = 0;
									func_main_Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__0;
L46:									func_main_Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__3;
									goto L30;
								}
								else {
									func_main_Temp1 = func_main_Result_Non_Crossing_Biased_Climb;
									func_main_Temp2 = 1;
									func_main_Upward_preferred_2 = 0;
									func_main_Result_Non_Crossing_Biased_Descend = 0;
									func_main_Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__0;
L47:									func_main_Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__3;
									goto L32;
								}
							}
							else {
								func_main_Temp12 = 0;
								func_main_Result_Non_Crossing_Biased_Climb = 1;
								func_main_Temp1 = func_main_Result_Non_Crossing_Biased_Climb;
								func_main_Temp2 = 0;
								func_main_Upward_preferred_2 = 0;
								func_main_Result_Non_Crossing_Biased_Descend = 0;
								func_main_Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__0;
L48:								func_main_Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__3;
								goto L34;
							}
						}
						else {
							if((Own_Tracked_Alt > Other_Tracked_Alt)) {
								func_main_Temp13 = 1;
								if((func_main_Temp13 > 0) && (Cur_Vertical_Sep >= 300) && (Up_Separation >= func_main_Alim_Non_Crossing_Biased_Climb)) {
									func_main_Result_Non_Crossing_Biased_Climb = 1;
									func_main_Temp1 = func_main_Result_Non_Crossing_Biased_Climb;
									func_main_Temp2 = 0;
									func_main_Upward_preferred_2 = 0;
									func_main_Result_Non_Crossing_Biased_Descend = 0;
									func_main_Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__0;
L49:									func_main_Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__3;
									goto L36;
								}
								else {
									func_main_Temp1 = func_main_Result_Non_Crossing_Biased_Climb;
									func_main_Temp2 = 0;
									if((func_main_Temp1 == 0)) {
L50:										func_main_Upward_preferred_2 = 0;
										func_main_Result_Non_Crossing_Biased_Descend = 0;
										func_main_Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__0;
L51:										func_main_Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__3;
										goto L39;
									}
									else {
										goto L50;
									}
								}
							}
							else {
								func_main_Temp13 = 0;
								if((func_main_Temp13 == 0)) {
L52:									func_main_Temp1 = func_main_Result_Non_Crossing_Biased_Climb;
									if((Other_Tracked_Alt > Own_Tracked_Alt)) {
										func_main_Temp2 = 1;
										func_main_Upward_preferred_2 = 0;
										func_main_Result_Non_Crossing_Biased_Descend = 0;
										func_main_Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__0;
L53:										func_main_Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__3;
										goto L42;
									}
									else {
										func_main_Temp2 = 0;
										if((func_main_Temp1 == 0)) {
L54:											func_main_Upward_preferred_2 = 0;
											func_main_Result_Non_Crossing_Biased_Descend = 0;
											func_main_Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__0;
L55:											func_main_Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__3;
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
L56:					func_main_Alt_sep = 0;
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
L57:				if((0 > Two_of_Three_Reports_Valid) && (Other_RAC == 0)) {
L58:					func_main_Intent_not_known = 1;
					func_main_Alt_sep = 0;
					goto L3;
				}
				else if((Two_of_Three_Reports_Valid > 0) && (Other_RAC == 0)) {
					goto L58;
				}
				else if((Two_of_Three_Reports_Valid == 0)) {
L59:					func_main_Alt_sep = 0;
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
L60:			if((Other_Capability == 0)) {
				func_main_Tcas_equipped = 1;
				if((0 > Two_of_Three_Reports_Valid) && (Other_RAC == 0)) {
L61:					func_main_Intent_not_known = 1;
					func_main_Alt_sep = 0;
					goto L7;
				}
				else if((Two_of_Three_Reports_Valid > 0) && (Other_RAC == 0)) {
					goto L61;
				}
				else if((Two_of_Three_Reports_Valid == 0)) {
L62:					func_main_Alt_sep = 0;
					if((func_main_Enabled == 0)) {
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
L63:				if((0 > Two_of_Three_Reports_Valid) && (Other_RAC == 0)) {
					goto L61;
				}
				else if((Two_of_Three_Reports_Valid > 0) && (Other_RAC == 0)) {
					goto L61;
				}
				else if((Two_of_Three_Reports_Valid == 0)) {
L64:					func_main_Alt_sep = 0;
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
		func_main_Alim = Positive_RA_Alt_Thresh__3;
		if((0 > High_Confidence) && (600 >= Own_Tracked_Alt_Rate) && (Cur_Vertical_Sep > 600)) {
L65:			func_main_Enabled = 1;
			if((Other_Capability == 0)) {
				func_main_Tcas_equipped = 1;
				if((0 > Two_of_Three_Reports_Valid) && (Other_RAC == 0)) {
L66:					func_main_Intent_not_known = 1;
					func_main_Alt_sep = 0;
L67:					func_main_Upward_preferred_1 = 0;
					func_main_Result_Non_Crossing_Biased_Climb = 0;
					func_main_Alim_Non_Crossing_Biased_Climb = Positive_RA_Alt_Thresh__3;
					if((Climb_Inhibit == 1)) {
						func_main_Temp11 = (Up_Separation + 100);
						if((func_main_Temp11 > Down_Separation)) {
							func_main_Upward_preferred_1 = 1;
							if((Other_Tracked_Alt > Own_Tracked_Alt)) {
								func_main_Temp12 = 1;
								if((func_main_Temp12 > 0) && (func_main_Alim_Non_Crossing_Biased_Climb > Down_Separation)) {
									func_main_Result_Non_Crossing_Biased_Climb = 1;
									func_main_Temp1 = func_main_Result_Non_Crossing_Biased_Climb;
									func_main_Temp2 = 1;
									func_main_Need_upward_RA = 1;
									func_main_Upward_preferred_2 = 0;
									func_main_Result_Non_Crossing_Biased_Descend = 0;
									goto L4;
								}
								else {
									func_main_Temp1 = func_main_Result_Non_Crossing_Biased_Climb;
									func_main_Temp2 = 1;
									func_main_Upward_preferred_2 = 0;
									func_main_Result_Non_Crossing_Biased_Descend = 0;
									goto L8;
								}
							}
							else {
								func_main_Temp12 = 0;
								func_main_Result_Non_Crossing_Biased_Climb = 1;
								func_main_Temp1 = func_main_Result_Non_Crossing_Biased_Climb;
								func_main_Temp2 = 0;
								func_main_Upward_preferred_2 = 0;
								func_main_Result_Non_Crossing_Biased_Descend = 0;
								goto L14;
							}
						}
						else {
							if((Own_Tracked_Alt > Other_Tracked_Alt)) {
								func_main_Temp13 = 1;
								if((func_main_Temp13 > 0) && (Cur_Vertical_Sep >= 300) && (Up_Separation >= func_main_Alim_Non_Crossing_Biased_Climb)) {
									func_main_Result_Non_Crossing_Biased_Climb = 1;
									func_main_Temp1 = func_main_Result_Non_Crossing_Biased_Climb;
									func_main_Temp2 = 0;
									func_main_Upward_preferred_2 = 0;
									func_main_Result_Non_Crossing_Biased_Descend = 0;
									goto L18;
								}
								else {
									func_main_Temp1 = func_main_Result_Non_Crossing_Biased_Climb;
									func_main_Temp2 = 0;
									if((func_main_Temp1 == 0)) {
L68:										func_main_Upward_preferred_2 = 0;
										func_main_Result_Non_Crossing_Biased_Descend = 0;
										goto L21;
									}
									else {
										goto L68;
									}
								}
							}
							else {
								func_main_Temp13 = 0;
								if((func_main_Temp13 == 0)) {
L69:									func_main_Temp1 = func_main_Result_Non_Crossing_Biased_Climb;
									if((Other_Tracked_Alt > Own_Tracked_Alt)) {
										func_main_Temp2 = 1;
										func_main_Upward_preferred_2 = 0;
										func_main_Result_Non_Crossing_Biased_Descend = 0;
										goto L24;
									}
									else {
										func_main_Temp2 = 0;
										if((func_main_Temp1 == 0)) {
L70:											func_main_Upward_preferred_2 = 0;
											func_main_Result_Non_Crossing_Biased_Descend = 0;
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
						func_main_Temp11 = Up_Separation;
						if((func_main_Temp11 > Down_Separation)) {
							func_main_Upward_preferred_1 = 1;
							if((Other_Tracked_Alt > Own_Tracked_Alt)) {
								func_main_Temp12 = 1;
								if((func_main_Temp12 > 0) && (func_main_Alim_Non_Crossing_Biased_Climb > Down_Separation)) {
									func_main_Result_Non_Crossing_Biased_Climb = 1;
									func_main_Temp1 = func_main_Result_Non_Crossing_Biased_Climb;
									func_main_Temp2 = 1;
									func_main_Need_upward_RA = 1;
									func_main_Upward_preferred_2 = 0;
									func_main_Result_Non_Crossing_Biased_Descend = 0;
									goto L29;
								}
								else {
									func_main_Temp1 = func_main_Result_Non_Crossing_Biased_Climb;
									func_main_Temp2 = 1;
									func_main_Upward_preferred_2 = 0;
									func_main_Result_Non_Crossing_Biased_Descend = 0;
									goto L31;
								}
							}
							else {
								func_main_Temp12 = 0;
								func_main_Result_Non_Crossing_Biased_Climb = 1;
								func_main_Temp1 = func_main_Result_Non_Crossing_Biased_Climb;
								func_main_Temp2 = 0;
								func_main_Upward_preferred_2 = 0;
								func_main_Result_Non_Crossing_Biased_Descend = 0;
								goto L33;
							}
						}
						else {
							if((Own_Tracked_Alt > Other_Tracked_Alt)) {
								func_main_Temp13 = 1;
								if((func_main_Temp13 > 0) && (Cur_Vertical_Sep >= 300) && (Up_Separation >= func_main_Alim_Non_Crossing_Biased_Climb)) {
									func_main_Result_Non_Crossing_Biased_Climb = 1;
									func_main_Temp1 = func_main_Result_Non_Crossing_Biased_Climb;
									func_main_Temp2 = 0;
									func_main_Upward_preferred_2 = 0;
									func_main_Result_Non_Crossing_Biased_Descend = 0;
									goto L35;
								}
								else {
									func_main_Temp1 = func_main_Result_Non_Crossing_Biased_Climb;
									func_main_Temp2 = 0;
									if((func_main_Temp1 == 0)) {
L71:										func_main_Upward_preferred_2 = 0;
										func_main_Result_Non_Crossing_Biased_Descend = 0;
										goto L38;
									}
									else {
										goto L71;
									}
								}
							}
							else {
								func_main_Temp13 = 0;
								if((func_main_Temp13 == 0)) {
L72:									func_main_Temp1 = func_main_Result_Non_Crossing_Biased_Climb;
									if((Other_Tracked_Alt > Own_Tracked_Alt)) {
										func_main_Temp2 = 1;
										func_main_Upward_preferred_2 = 0;
										func_main_Result_Non_Crossing_Biased_Descend = 0;
										goto L41;
									}
									else {
										func_main_Temp2 = 0;
										if((func_main_Temp1 == 0)) {
L73:											func_main_Upward_preferred_2 = 0;
											func_main_Result_Non_Crossing_Biased_Descend = 0;
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
						func_main_Temp11 = Up_Separation;
						if((func_main_Temp11 > Down_Separation)) {
							func_main_Upward_preferred_1 = 1;
							if((Other_Tracked_Alt > Own_Tracked_Alt)) {
								func_main_Temp12 = 1;
								if((func_main_Temp12 > 0) && (func_main_Alim_Non_Crossing_Biased_Climb > Down_Separation)) {
									func_main_Result_Non_Crossing_Biased_Climb = 1;
									func_main_Temp1 = func_main_Result_Non_Crossing_Biased_Climb;
									func_main_Temp2 = 1;
									func_main_Need_upward_RA = 1;
									func_main_Upward_preferred_2 = 0;
									func_main_Result_Non_Crossing_Biased_Descend = 0;
									goto L46;
								}
								else {
									func_main_Temp1 = func_main_Result_Non_Crossing_Biased_Climb;
									func_main_Temp2 = 1;
									func_main_Upward_preferred_2 = 0;
									func_main_Result_Non_Crossing_Biased_Descend = 0;
									goto L47;
								}
							}
							else {
								func_main_Temp12 = 0;
								func_main_Result_Non_Crossing_Biased_Climb = 1;
								func_main_Temp1 = func_main_Result_Non_Crossing_Biased_Climb;
								func_main_Temp2 = 0;
								func_main_Upward_preferred_2 = 0;
								func_main_Result_Non_Crossing_Biased_Descend = 0;
								goto L48;
							}
						}
						else {
							if((Own_Tracked_Alt > Other_Tracked_Alt)) {
								func_main_Temp13 = 1;
								if((func_main_Temp13 > 0) && (Cur_Vertical_Sep >= 300) && (Up_Separation >= func_main_Alim_Non_Crossing_Biased_Climb)) {
									func_main_Result_Non_Crossing_Biased_Climb = 1;
									func_main_Temp1 = func_main_Result_Non_Crossing_Biased_Climb;
									func_main_Temp2 = 0;
									func_main_Upward_preferred_2 = 0;
									func_main_Result_Non_Crossing_Biased_Descend = 0;
									goto L49;
								}
								else {
									func_main_Temp1 = func_main_Result_Non_Crossing_Biased_Climb;
									func_main_Temp2 = 0;
									if((func_main_Temp1 == 0)) {
L74:										func_main_Upward_preferred_2 = 0;
										func_main_Result_Non_Crossing_Biased_Descend = 0;
										goto L51;
									}
									else {
										goto L74;
									}
								}
							}
							else {
								func_main_Temp13 = 0;
								if((func_main_Temp13 == 0)) {
L75:									func_main_Temp1 = func_main_Result_Non_Crossing_Biased_Climb;
									if((Other_Tracked_Alt > Own_Tracked_Alt)) {
										func_main_Temp2 = 1;
										func_main_Upward_preferred_2 = 0;
										func_main_Result_Non_Crossing_Biased_Descend = 0;
										goto L53;
									}
									else {
										func_main_Temp2 = 0;
										if((func_main_Temp1 == 0)) {
L76:											func_main_Upward_preferred_2 = 0;
											func_main_Result_Non_Crossing_Biased_Descend = 0;
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
L77:				if((0 > Two_of_Three_Reports_Valid) && (Other_RAC == 0)) {
L78:					func_main_Intent_not_known = 1;
					func_main_Alt_sep = 0;
					goto L67;
				}
				else if((Two_of_Three_Reports_Valid > 0) && (Other_RAC == 0)) {
					goto L78;
				}
				else if((Two_of_Three_Reports_Valid == 0)) {
L79:					func_main_Alt_sep = 0;
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
			func_main_Alim = Positive_RA_Alt_Thresh__1;
			func_main_Alim = Positive_RA_Alt_Thresh__3;
			if((0 > High_Confidence) && (600 >= Own_Tracked_Alt_Rate) && (Cur_Vertical_Sep > 600)) {
L80:				func_main_Enabled = 1;
				if((Other_Capability == 0)) {
					func_main_Tcas_equipped = 1;
					if((0 > Two_of_Three_Reports_Valid) && (Other_RAC == 0)) {
L81:						func_main_Intent_not_known = 1;
						func_main_Alt_sep = 0;
L82:						func_main_Upward_preferred_1 = 0;
						func_main_Result_Non_Crossing_Biased_Climb = 0;
						func_main_Alim_Non_Crossing_Biased_Climb = Positive_RA_Alt_Thresh__1;
						func_main_Alim_Non_Crossing_Biased_Climb = Positive_RA_Alt_Thresh__3;
						if((Climb_Inhibit == 1)) {
							func_main_Temp11 = (Up_Separation + 100);
							if((func_main_Temp11 > Down_Separation)) {
								func_main_Upward_preferred_1 = 1;
								if((Other_Tracked_Alt > Own_Tracked_Alt)) {
									func_main_Temp12 = 1;
									if((func_main_Temp12 > 0) && (func_main_Alim_Non_Crossing_Biased_Climb > Down_Separation)) {
										func_main_Result_Non_Crossing_Biased_Climb = 1;
										func_main_Temp1 = func_main_Result_Non_Crossing_Biased_Climb;
										func_main_Temp2 = 1;
										func_main_Need_upward_RA = 1;
										func_main_Upward_preferred_2 = 0;
										func_main_Result_Non_Crossing_Biased_Descend = 0;
										func_main_Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__1;
										goto L4;
									}
									else {
										func_main_Temp1 = func_main_Result_Non_Crossing_Biased_Climb;
										func_main_Temp2 = 1;
										func_main_Upward_preferred_2 = 0;
										func_main_Result_Non_Crossing_Biased_Descend = 0;
										func_main_Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__1;
										goto L8;
									}
								}
								else {
									func_main_Temp12 = 0;
									func_main_Result_Non_Crossing_Biased_Climb = 1;
									func_main_Temp1 = func_main_Result_Non_Crossing_Biased_Climb;
									func_main_Temp2 = 0;
									func_main_Upward_preferred_2 = 0;
									func_main_Result_Non_Crossing_Biased_Descend = 0;
									func_main_Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__1;
									goto L14;
								}
							}
							else {
								if((Own_Tracked_Alt > Other_Tracked_Alt)) {
									func_main_Temp13 = 1;
									if((func_main_Temp13 > 0) && (Cur_Vertical_Sep >= 300) && (Up_Separation >= func_main_Alim_Non_Crossing_Biased_Climb)) {
										func_main_Result_Non_Crossing_Biased_Climb = 1;
										func_main_Temp1 = func_main_Result_Non_Crossing_Biased_Climb;
										func_main_Temp2 = 0;
										func_main_Upward_preferred_2 = 0;
										func_main_Result_Non_Crossing_Biased_Descend = 0;
										func_main_Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__1;
										goto L18;
									}
									else {
										func_main_Temp1 = func_main_Result_Non_Crossing_Biased_Climb;
										func_main_Temp2 = 0;
										if((func_main_Temp1 == 0)) {
L83:											func_main_Upward_preferred_2 = 0;
											func_main_Result_Non_Crossing_Biased_Descend = 0;
											func_main_Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__1;
											goto L21;
										}
										else {
											goto L83;
										}
									}
								}
								else {
									func_main_Temp13 = 0;
									if((func_main_Temp13 == 0)) {
L84:										func_main_Temp1 = func_main_Result_Non_Crossing_Biased_Climb;
										if((Other_Tracked_Alt > Own_Tracked_Alt)) {
											func_main_Temp2 = 1;
											func_main_Upward_preferred_2 = 0;
											func_main_Result_Non_Crossing_Biased_Descend = 0;
											func_main_Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__1;
											goto L24;
										}
										else {
											func_main_Temp2 = 0;
											if((func_main_Temp1 == 0)) {
L85:												func_main_Upward_preferred_2 = 0;
												func_main_Result_Non_Crossing_Biased_Descend = 0;
												func_main_Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__1;
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
							func_main_Temp11 = Up_Separation;
							if((func_main_Temp11 > Down_Separation)) {
								func_main_Upward_preferred_1 = 1;
								if((Other_Tracked_Alt > Own_Tracked_Alt)) {
									func_main_Temp12 = 1;
									if((func_main_Temp12 > 0) && (func_main_Alim_Non_Crossing_Biased_Climb > Down_Separation)) {
										func_main_Result_Non_Crossing_Biased_Climb = 1;
										func_main_Temp1 = func_main_Result_Non_Crossing_Biased_Climb;
										func_main_Temp2 = 1;
										func_main_Need_upward_RA = 1;
										func_main_Upward_preferred_2 = 0;
										func_main_Result_Non_Crossing_Biased_Descend = 0;
										func_main_Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__1;
										goto L29;
									}
									else {
										func_main_Temp1 = func_main_Result_Non_Crossing_Biased_Climb;
										func_main_Temp2 = 1;
										func_main_Upward_preferred_2 = 0;
										func_main_Result_Non_Crossing_Biased_Descend = 0;
										func_main_Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__1;
										goto L31;
									}
								}
								else {
									func_main_Temp12 = 0;
									func_main_Result_Non_Crossing_Biased_Climb = 1;
									func_main_Temp1 = func_main_Result_Non_Crossing_Biased_Climb;
									func_main_Temp2 = 0;
									func_main_Upward_preferred_2 = 0;
									func_main_Result_Non_Crossing_Biased_Descend = 0;
									func_main_Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__1;
									goto L33;
								}
							}
							else {
								if((Own_Tracked_Alt > Other_Tracked_Alt)) {
									func_main_Temp13 = 1;
									if((func_main_Temp13 > 0) && (Cur_Vertical_Sep >= 300) && (Up_Separation >= func_main_Alim_Non_Crossing_Biased_Climb)) {
										func_main_Result_Non_Crossing_Biased_Climb = 1;
										func_main_Temp1 = func_main_Result_Non_Crossing_Biased_Climb;
										func_main_Temp2 = 0;
										func_main_Upward_preferred_2 = 0;
										func_main_Result_Non_Crossing_Biased_Descend = 0;
										func_main_Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__1;
										goto L35;
									}
									else {
										func_main_Temp1 = func_main_Result_Non_Crossing_Biased_Climb;
										func_main_Temp2 = 0;
										if((func_main_Temp1 == 0)) {
L86:											func_main_Upward_preferred_2 = 0;
											func_main_Result_Non_Crossing_Biased_Descend = 0;
											func_main_Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__1;
											goto L38;
										}
										else {
											goto L86;
										}
									}
								}
								else {
									func_main_Temp13 = 0;
									if((func_main_Temp13 == 0)) {
L87:										func_main_Temp1 = func_main_Result_Non_Crossing_Biased_Climb;
										if((Other_Tracked_Alt > Own_Tracked_Alt)) {
											func_main_Temp2 = 1;
											func_main_Upward_preferred_2 = 0;
											func_main_Result_Non_Crossing_Biased_Descend = 0;
											func_main_Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__1;
											goto L41;
										}
										else {
											func_main_Temp2 = 0;
											if((func_main_Temp1 == 0)) {
L88:												func_main_Upward_preferred_2 = 0;
												func_main_Result_Non_Crossing_Biased_Descend = 0;
												func_main_Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__1;
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
							func_main_Temp11 = Up_Separation;
							if((func_main_Temp11 > Down_Separation)) {
								func_main_Upward_preferred_1 = 1;
								if((Other_Tracked_Alt > Own_Tracked_Alt)) {
									func_main_Temp12 = 1;
									if((func_main_Temp12 > 0) && (func_main_Alim_Non_Crossing_Biased_Climb > Down_Separation)) {
										func_main_Result_Non_Crossing_Biased_Climb = 1;
										func_main_Temp1 = func_main_Result_Non_Crossing_Biased_Climb;
										func_main_Temp2 = 1;
										func_main_Need_upward_RA = 1;
										func_main_Upward_preferred_2 = 0;
										func_main_Result_Non_Crossing_Biased_Descend = 0;
										func_main_Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__1;
										goto L46;
									}
									else {
										func_main_Temp1 = func_main_Result_Non_Crossing_Biased_Climb;
										func_main_Temp2 = 1;
										func_main_Upward_preferred_2 = 0;
										func_main_Result_Non_Crossing_Biased_Descend = 0;
										func_main_Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__1;
										goto L47;
									}
								}
								else {
									func_main_Temp12 = 0;
									func_main_Result_Non_Crossing_Biased_Climb = 1;
									func_main_Temp1 = func_main_Result_Non_Crossing_Biased_Climb;
									func_main_Temp2 = 0;
									func_main_Upward_preferred_2 = 0;
									func_main_Result_Non_Crossing_Biased_Descend = 0;
									func_main_Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__1;
									goto L48;
								}
							}
							else {
								if((Own_Tracked_Alt > Other_Tracked_Alt)) {
									func_main_Temp13 = 1;
									if((func_main_Temp13 > 0) && (Cur_Vertical_Sep >= 300) && (Up_Separation >= func_main_Alim_Non_Crossing_Biased_Climb)) {
										func_main_Result_Non_Crossing_Biased_Climb = 1;
										func_main_Temp1 = func_main_Result_Non_Crossing_Biased_Climb;
										func_main_Temp2 = 0;
										func_main_Upward_preferred_2 = 0;
										func_main_Result_Non_Crossing_Biased_Descend = 0;
										func_main_Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__1;
										goto L49;
									}
									else {
										func_main_Temp1 = func_main_Result_Non_Crossing_Biased_Climb;
										func_main_Temp2 = 0;
										if((func_main_Temp1 == 0)) {
L89:											func_main_Upward_preferred_2 = 0;
											func_main_Result_Non_Crossing_Biased_Descend = 0;
											func_main_Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__1;
											goto L51;
										}
										else {
											goto L89;
										}
									}
								}
								else {
									func_main_Temp13 = 0;
									if((func_main_Temp13 == 0)) {
L90:										func_main_Temp1 = func_main_Result_Non_Crossing_Biased_Climb;
										if((Other_Tracked_Alt > Own_Tracked_Alt)) {
											func_main_Temp2 = 1;
											func_main_Upward_preferred_2 = 0;
											func_main_Result_Non_Crossing_Biased_Descend = 0;
											func_main_Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__1;
											goto L53;
										}
										else {
											func_main_Temp2 = 0;
											if((func_main_Temp1 == 0)) {
L91:												func_main_Upward_preferred_2 = 0;
												func_main_Result_Non_Crossing_Biased_Descend = 0;
												func_main_Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__1;
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
L92:					if((0 > Two_of_Three_Reports_Valid) && (Other_RAC == 0)) {
L93:						func_main_Intent_not_known = 1;
						func_main_Alt_sep = 0;
						goto L82;
					}
					else if((Two_of_Three_Reports_Valid > 0) && (Other_RAC == 0)) {
						goto L93;
					}
					else if((Two_of_Three_Reports_Valid == 0)) {
L94:						func_main_Alt_sep = 0;
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
			func_main_Alim = Positive_RA_Alt_Thresh__3;
			if((0 > High_Confidence) && (600 >= Own_Tracked_Alt_Rate) && (Cur_Vertical_Sep > 600)) {
L95:				func_main_Enabled = 1;
				if((Other_Capability == 0)) {
					func_main_Tcas_equipped = 1;
					if((0 > Two_of_Three_Reports_Valid) && (Other_RAC == 0)) {
L96:						func_main_Intent_not_known = 1;
						func_main_Alt_sep = 0;
L97:						func_main_Upward_preferred_1 = 0;
						func_main_Result_Non_Crossing_Biased_Climb = 0;
						func_main_Alim_Non_Crossing_Biased_Climb = Positive_RA_Alt_Thresh__3;
						if((Climb_Inhibit == 1)) {
							func_main_Temp11 = (Up_Separation + 100);
							if((func_main_Temp11 > Down_Separation)) {
								func_main_Upward_preferred_1 = 1;
								if((Other_Tracked_Alt > Own_Tracked_Alt)) {
									func_main_Temp12 = 1;
									if((func_main_Temp12 > 0) && (func_main_Alim_Non_Crossing_Biased_Climb > Down_Separation)) {
										func_main_Result_Non_Crossing_Biased_Climb = 1;
										func_main_Temp1 = func_main_Result_Non_Crossing_Biased_Climb;
										func_main_Temp2 = 1;
										func_main_Need_upward_RA = 1;
										func_main_Upward_preferred_2 = 0;
										func_main_Result_Non_Crossing_Biased_Descend = 0;
										goto L4;
									}
									else {
										func_main_Temp1 = func_main_Result_Non_Crossing_Biased_Climb;
										func_main_Temp2 = 1;
										func_main_Upward_preferred_2 = 0;
										func_main_Result_Non_Crossing_Biased_Descend = 0;
										goto L8;
									}
								}
								else {
									func_main_Temp12 = 0;
									func_main_Result_Non_Crossing_Biased_Climb = 1;
									func_main_Temp1 = func_main_Result_Non_Crossing_Biased_Climb;
									func_main_Temp2 = 0;
									func_main_Upward_preferred_2 = 0;
									func_main_Result_Non_Crossing_Biased_Descend = 0;
									goto L14;
								}
							}
							else {
								if((Own_Tracked_Alt > Other_Tracked_Alt)) {
									func_main_Temp13 = 1;
									if((func_main_Temp13 > 0) && (Cur_Vertical_Sep >= 300) && (Up_Separation >= func_main_Alim_Non_Crossing_Biased_Climb)) {
										func_main_Result_Non_Crossing_Biased_Climb = 1;
										func_main_Temp1 = func_main_Result_Non_Crossing_Biased_Climb;
										func_main_Temp2 = 0;
										func_main_Upward_preferred_2 = 0;
										func_main_Result_Non_Crossing_Biased_Descend = 0;
										goto L18;
									}
									else {
										func_main_Temp1 = func_main_Result_Non_Crossing_Biased_Climb;
										func_main_Temp2 = 0;
										if((func_main_Temp1 == 0)) {
L98:											func_main_Upward_preferred_2 = 0;
											func_main_Result_Non_Crossing_Biased_Descend = 0;
											goto L21;
										}
										else {
											goto L98;
										}
									}
								}
								else {
									func_main_Temp13 = 0;
									if((func_main_Temp13 == 0)) {
L99:										func_main_Temp1 = func_main_Result_Non_Crossing_Biased_Climb;
										if((Other_Tracked_Alt > Own_Tracked_Alt)) {
											func_main_Temp2 = 1;
											func_main_Upward_preferred_2 = 0;
											func_main_Result_Non_Crossing_Biased_Descend = 0;
											goto L24;
										}
										else {
											func_main_Temp2 = 0;
											if((func_main_Temp1 == 0)) {
L100:												func_main_Upward_preferred_2 = 0;
												func_main_Result_Non_Crossing_Biased_Descend = 0;
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
							func_main_Temp11 = Up_Separation;
							if((func_main_Temp11 > Down_Separation)) {
								func_main_Upward_preferred_1 = 1;
								if((Other_Tracked_Alt > Own_Tracked_Alt)) {
									func_main_Temp12 = 1;
									if((func_main_Temp12 > 0) && (func_main_Alim_Non_Crossing_Biased_Climb > Down_Separation)) {
										func_main_Result_Non_Crossing_Biased_Climb = 1;
										func_main_Temp1 = func_main_Result_Non_Crossing_Biased_Climb;
										func_main_Temp2 = 1;
										func_main_Need_upward_RA = 1;
										func_main_Upward_preferred_2 = 0;
										func_main_Result_Non_Crossing_Biased_Descend = 0;
										goto L29;
									}
									else {
										func_main_Temp1 = func_main_Result_Non_Crossing_Biased_Climb;
										func_main_Temp2 = 1;
										func_main_Upward_preferred_2 = 0;
										func_main_Result_Non_Crossing_Biased_Descend = 0;
										goto L31;
									}
								}
								else {
									func_main_Temp12 = 0;
									func_main_Result_Non_Crossing_Biased_Climb = 1;
									func_main_Temp1 = func_main_Result_Non_Crossing_Biased_Climb;
									func_main_Temp2 = 0;
									func_main_Upward_preferred_2 = 0;
									func_main_Result_Non_Crossing_Biased_Descend = 0;
									goto L33;
								}
							}
							else {
								if((Own_Tracked_Alt > Other_Tracked_Alt)) {
									func_main_Temp13 = 1;
									if((func_main_Temp13 > 0) && (Cur_Vertical_Sep >= 300) && (Up_Separation >= func_main_Alim_Non_Crossing_Biased_Climb)) {
										func_main_Result_Non_Crossing_Biased_Climb = 1;
										func_main_Temp1 = func_main_Result_Non_Crossing_Biased_Climb;
										func_main_Temp2 = 0;
										func_main_Upward_preferred_2 = 0;
										func_main_Result_Non_Crossing_Biased_Descend = 0;
										goto L35;
									}
									else {
										func_main_Temp1 = func_main_Result_Non_Crossing_Biased_Climb;
										func_main_Temp2 = 0;
										if((func_main_Temp1 == 0)) {
L101:											func_main_Upward_preferred_2 = 0;
											func_main_Result_Non_Crossing_Biased_Descend = 0;
											goto L38;
										}
										else {
											goto L101;
										}
									}
								}
								else {
									func_main_Temp13 = 0;
									if((func_main_Temp13 == 0)) {
L102:										func_main_Temp1 = func_main_Result_Non_Crossing_Biased_Climb;
										if((Other_Tracked_Alt > Own_Tracked_Alt)) {
											func_main_Temp2 = 1;
											func_main_Upward_preferred_2 = 0;
											func_main_Result_Non_Crossing_Biased_Descend = 0;
											goto L41;
										}
										else {
											func_main_Temp2 = 0;
											if((func_main_Temp1 == 0)) {
L103:												func_main_Upward_preferred_2 = 0;
												func_main_Result_Non_Crossing_Biased_Descend = 0;
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
							func_main_Temp11 = Up_Separation;
							if((func_main_Temp11 > Down_Separation)) {
								func_main_Upward_preferred_1 = 1;
								if((Other_Tracked_Alt > Own_Tracked_Alt)) {
									func_main_Temp12 = 1;
									if((func_main_Temp12 > 0) && (func_main_Alim_Non_Crossing_Biased_Climb > Down_Separation)) {
										func_main_Result_Non_Crossing_Biased_Climb = 1;
										func_main_Temp1 = func_main_Result_Non_Crossing_Biased_Climb;
										func_main_Temp2 = 1;
										func_main_Need_upward_RA = 1;
										func_main_Upward_preferred_2 = 0;
										func_main_Result_Non_Crossing_Biased_Descend = 0;
										goto L46;
									}
									else {
										func_main_Temp1 = func_main_Result_Non_Crossing_Biased_Climb;
										func_main_Temp2 = 1;
										func_main_Upward_preferred_2 = 0;
										func_main_Result_Non_Crossing_Biased_Descend = 0;
										goto L47;
									}
								}
								else {
									func_main_Temp12 = 0;
									func_main_Result_Non_Crossing_Biased_Climb = 1;
									func_main_Temp1 = func_main_Result_Non_Crossing_Biased_Climb;
									func_main_Temp2 = 0;
									func_main_Upward_preferred_2 = 0;
									func_main_Result_Non_Crossing_Biased_Descend = 0;
									goto L48;
								}
							}
							else {
								if((Own_Tracked_Alt > Other_Tracked_Alt)) {
									func_main_Temp13 = 1;
									if((func_main_Temp13 > 0) && (Cur_Vertical_Sep >= 300) && (Up_Separation >= func_main_Alim_Non_Crossing_Biased_Climb)) {
										func_main_Result_Non_Crossing_Biased_Climb = 1;
										func_main_Temp1 = func_main_Result_Non_Crossing_Biased_Climb;
										func_main_Temp2 = 0;
										func_main_Upward_preferred_2 = 0;
										func_main_Result_Non_Crossing_Biased_Descend = 0;
										goto L49;
									}
									else {
										func_main_Temp1 = func_main_Result_Non_Crossing_Biased_Climb;
										func_main_Temp2 = 0;
										if((func_main_Temp1 == 0)) {
L104:											func_main_Upward_preferred_2 = 0;
											func_main_Result_Non_Crossing_Biased_Descend = 0;
											goto L51;
										}
										else {
											goto L104;
										}
									}
								}
								else {
									func_main_Temp13 = 0;
									if((func_main_Temp13 == 0)) {
L105:										func_main_Temp1 = func_main_Result_Non_Crossing_Biased_Climb;
										if((Other_Tracked_Alt > Own_Tracked_Alt)) {
											func_main_Temp2 = 1;
											func_main_Upward_preferred_2 = 0;
											func_main_Result_Non_Crossing_Biased_Descend = 0;
											goto L53;
										}
										else {
											func_main_Temp2 = 0;
											if((func_main_Temp1 == 0)) {
L106:												func_main_Upward_preferred_2 = 0;
												func_main_Result_Non_Crossing_Biased_Descend = 0;
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
L107:					if((0 > Two_of_Three_Reports_Valid) && (Other_RAC == 0)) {
L108:						func_main_Intent_not_known = 1;
						func_main_Alt_sep = 0;
						goto L97;
					}
					else if((Two_of_Three_Reports_Valid > 0) && (Other_RAC == 0)) {
						goto L108;
					}
					else if((Two_of_Three_Reports_Valid == 0)) {
L109:						func_main_Alt_sep = 0;
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
				func_main_Alim = Positive_RA_Alt_Thresh__2;
				func_main_Alim = Positive_RA_Alt_Thresh__3;
				if((0 > High_Confidence) && (600 >= Own_Tracked_Alt_Rate) && (Cur_Vertical_Sep > 600)) {
L110:					func_main_Enabled = 1;
					if((Other_Capability == 0)) {
						func_main_Tcas_equipped = 1;
						if((0 > Two_of_Three_Reports_Valid) && (Other_RAC == 0)) {
L111:							func_main_Intent_not_known = 1;
							func_main_Alt_sep = 0;
L112:							func_main_Upward_preferred_1 = 0;
							func_main_Result_Non_Crossing_Biased_Climb = 0;
							func_main_Alim_Non_Crossing_Biased_Climb = Positive_RA_Alt_Thresh__2;
							func_main_Alim_Non_Crossing_Biased_Climb = Positive_RA_Alt_Thresh__3;
							if((Climb_Inhibit == 1)) {
								func_main_Temp11 = (Up_Separation + 100);
								if((func_main_Temp11 > Down_Separation)) {
									func_main_Upward_preferred_1 = 1;
									if((Other_Tracked_Alt > Own_Tracked_Alt)) {
										func_main_Temp12 = 1;
										if((func_main_Temp12 > 0) && (func_main_Alim_Non_Crossing_Biased_Climb > Down_Separation)) {
											func_main_Result_Non_Crossing_Biased_Climb = 1;
											func_main_Temp1 = func_main_Result_Non_Crossing_Biased_Climb;
											func_main_Temp2 = 1;
											func_main_Need_upward_RA = 1;
											func_main_Upward_preferred_2 = 0;
											func_main_Result_Non_Crossing_Biased_Descend = 0;
											func_main_Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__2;
											goto L4;
										}
										else {
											func_main_Temp1 = func_main_Result_Non_Crossing_Biased_Climb;
											func_main_Temp2 = 1;
											func_main_Upward_preferred_2 = 0;
											func_main_Result_Non_Crossing_Biased_Descend = 0;
											func_main_Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__2;
											goto L8;
										}
									}
									else {
										func_main_Temp12 = 0;
										func_main_Result_Non_Crossing_Biased_Climb = 1;
										func_main_Temp1 = func_main_Result_Non_Crossing_Biased_Climb;
										func_main_Temp2 = 0;
										func_main_Upward_preferred_2 = 0;
										func_main_Result_Non_Crossing_Biased_Descend = 0;
										func_main_Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__2;
										goto L14;
									}
								}
								else {
									if((Own_Tracked_Alt > Other_Tracked_Alt)) {
										func_main_Temp13 = 1;
										if((func_main_Temp13 > 0) && (Cur_Vertical_Sep >= 300) && (Up_Separation >= func_main_Alim_Non_Crossing_Biased_Climb)) {
											func_main_Result_Non_Crossing_Biased_Climb = 1;
											func_main_Temp1 = func_main_Result_Non_Crossing_Biased_Climb;
											func_main_Temp2 = 0;
											func_main_Upward_preferred_2 = 0;
											func_main_Result_Non_Crossing_Biased_Descend = 0;
											func_main_Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__2;
											goto L18;
										}
										else {
											func_main_Temp1 = func_main_Result_Non_Crossing_Biased_Climb;
											func_main_Temp2 = 0;
											if((func_main_Temp1 == 0)) {
L113:												func_main_Upward_preferred_2 = 0;
												func_main_Result_Non_Crossing_Biased_Descend = 0;
												func_main_Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__2;
												goto L21;
											}
											else {
												goto L113;
											}
										}
									}
									else {
										func_main_Temp13 = 0;
										if((func_main_Temp13 == 0)) {
L114:											func_main_Temp1 = func_main_Result_Non_Crossing_Biased_Climb;
											if((Other_Tracked_Alt > Own_Tracked_Alt)) {
												func_main_Temp2 = 1;
												func_main_Upward_preferred_2 = 0;
												func_main_Result_Non_Crossing_Biased_Descend = 0;
												func_main_Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__2;
												goto L24;
											}
											else {
												func_main_Temp2 = 0;
												if((func_main_Temp1 == 0)) {
L115:													func_main_Upward_preferred_2 = 0;
													func_main_Result_Non_Crossing_Biased_Descend = 0;
													func_main_Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__2;
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
								func_main_Temp11 = Up_Separation;
								if((func_main_Temp11 > Down_Separation)) {
									func_main_Upward_preferred_1 = 1;
									if((Other_Tracked_Alt > Own_Tracked_Alt)) {
										func_main_Temp12 = 1;
										if((func_main_Temp12 > 0) && (func_main_Alim_Non_Crossing_Biased_Climb > Down_Separation)) {
											func_main_Result_Non_Crossing_Biased_Climb = 1;
											func_main_Temp1 = func_main_Result_Non_Crossing_Biased_Climb;
											func_main_Temp2 = 1;
											func_main_Need_upward_RA = 1;
											func_main_Upward_preferred_2 = 0;
											func_main_Result_Non_Crossing_Biased_Descend = 0;
											func_main_Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__2;
											goto L29;
										}
										else {
											func_main_Temp1 = func_main_Result_Non_Crossing_Biased_Climb;
											func_main_Temp2 = 1;
											func_main_Upward_preferred_2 = 0;
											func_main_Result_Non_Crossing_Biased_Descend = 0;
											func_main_Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__2;
											goto L31;
										}
									}
									else {
										func_main_Temp12 = 0;
										func_main_Result_Non_Crossing_Biased_Climb = 1;
										func_main_Temp1 = func_main_Result_Non_Crossing_Biased_Climb;
										func_main_Temp2 = 0;
										func_main_Upward_preferred_2 = 0;
										func_main_Result_Non_Crossing_Biased_Descend = 0;
										func_main_Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__2;
										goto L33;
									}
								}
								else {
									if((Own_Tracked_Alt > Other_Tracked_Alt)) {
										func_main_Temp13 = 1;
										if((func_main_Temp13 > 0) && (Cur_Vertical_Sep >= 300) && (Up_Separation >= func_main_Alim_Non_Crossing_Biased_Climb)) {
											func_main_Result_Non_Crossing_Biased_Climb = 1;
											func_main_Temp1 = func_main_Result_Non_Crossing_Biased_Climb;
											func_main_Temp2 = 0;
											func_main_Upward_preferred_2 = 0;
											func_main_Result_Non_Crossing_Biased_Descend = 0;
											func_main_Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__2;
											goto L35;
										}
										else {
											func_main_Temp1 = func_main_Result_Non_Crossing_Biased_Climb;
											func_main_Temp2 = 0;
											if((func_main_Temp1 == 0)) {
L116:												func_main_Upward_preferred_2 = 0;
												func_main_Result_Non_Crossing_Biased_Descend = 0;
												func_main_Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__2;
												goto L38;
											}
											else {
												goto L116;
											}
										}
									}
									else {
										func_main_Temp13 = 0;
										if((func_main_Temp13 == 0)) {
L117:											func_main_Temp1 = func_main_Result_Non_Crossing_Biased_Climb;
											if((Other_Tracked_Alt > Own_Tracked_Alt)) {
												func_main_Temp2 = 1;
												func_main_Upward_preferred_2 = 0;
												func_main_Result_Non_Crossing_Biased_Descend = 0;
												func_main_Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__2;
												goto L41;
											}
											else {
												func_main_Temp2 = 0;
												if((func_main_Temp1 == 0)) {
L118:													func_main_Upward_preferred_2 = 0;
													func_main_Result_Non_Crossing_Biased_Descend = 0;
													func_main_Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__2;
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
								func_main_Temp11 = Up_Separation;
								if((func_main_Temp11 > Down_Separation)) {
									func_main_Upward_preferred_1 = 1;
									if((Other_Tracked_Alt > Own_Tracked_Alt)) {
										func_main_Temp12 = 1;
										if((func_main_Temp12 > 0) && (func_main_Alim_Non_Crossing_Biased_Climb > Down_Separation)) {
											func_main_Result_Non_Crossing_Biased_Climb = 1;
											func_main_Temp1 = func_main_Result_Non_Crossing_Biased_Climb;
											func_main_Temp2 = 1;
											func_main_Need_upward_RA = 1;
											func_main_Upward_preferred_2 = 0;
											func_main_Result_Non_Crossing_Biased_Descend = 0;
											func_main_Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__2;
											goto L46;
										}
										else {
											func_main_Temp1 = func_main_Result_Non_Crossing_Biased_Climb;
											func_main_Temp2 = 1;
											func_main_Upward_preferred_2 = 0;
											func_main_Result_Non_Crossing_Biased_Descend = 0;
											func_main_Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__2;
											goto L47;
										}
									}
									else {
										func_main_Temp12 = 0;
										func_main_Result_Non_Crossing_Biased_Climb = 1;
										func_main_Temp1 = func_main_Result_Non_Crossing_Biased_Climb;
										func_main_Temp2 = 0;
										func_main_Upward_preferred_2 = 0;
										func_main_Result_Non_Crossing_Biased_Descend = 0;
										func_main_Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__2;
										goto L48;
									}
								}
								else {
									if((Own_Tracked_Alt > Other_Tracked_Alt)) {
										func_main_Temp13 = 1;
										if((func_main_Temp13 > 0) && (Cur_Vertical_Sep >= 300) && (Up_Separation >= func_main_Alim_Non_Crossing_Biased_Climb)) {
											func_main_Result_Non_Crossing_Biased_Climb = 1;
											func_main_Temp1 = func_main_Result_Non_Crossing_Biased_Climb;
											func_main_Temp2 = 0;
											func_main_Upward_preferred_2 = 0;
											func_main_Result_Non_Crossing_Biased_Descend = 0;
											func_main_Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__2;
											goto L49;
										}
										else {
											func_main_Temp1 = func_main_Result_Non_Crossing_Biased_Climb;
											func_main_Temp2 = 0;
											if((func_main_Temp1 == 0)) {
L119:												func_main_Upward_preferred_2 = 0;
												func_main_Result_Non_Crossing_Biased_Descend = 0;
												func_main_Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__2;
												goto L51;
											}
											else {
												goto L119;
											}
										}
									}
									else {
										func_main_Temp13 = 0;
										if((func_main_Temp13 == 0)) {
L120:											func_main_Temp1 = func_main_Result_Non_Crossing_Biased_Climb;
											if((Other_Tracked_Alt > Own_Tracked_Alt)) {
												func_main_Temp2 = 1;
												func_main_Upward_preferred_2 = 0;
												func_main_Result_Non_Crossing_Biased_Descend = 0;
												func_main_Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__2;
												goto L53;
											}
											else {
												func_main_Temp2 = 0;
												if((func_main_Temp1 == 0)) {
L121:													func_main_Upward_preferred_2 = 0;
													func_main_Result_Non_Crossing_Biased_Descend = 0;
													func_main_Alim_Non_Crossing_Biased_Descend = Positive_RA_Alt_Thresh__2;
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
L122:						if((0 > Two_of_Three_Reports_Valid) && (Other_RAC == 0)) {
L123:							func_main_Intent_not_known = 1;
							func_main_Alt_sep = 0;
							goto L112;
						}
						else if((Two_of_Three_Reports_Valid > 0) && (Other_RAC == 0)) {
							goto L123;
						}
						else if((Two_of_Three_Reports_Valid == 0)) {
L124:							func_main_Alt_sep = 0;
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
				func_main_Alim = Positive_RA_Alt_Thresh__3;
				if((0 > High_Confidence) && (600 >= Own_Tracked_Alt_Rate) && (Cur_Vertical_Sep > 600)) {
L125:					func_main_Enabled = 1;
					if((Other_Capability == 0)) {
						func_main_Tcas_equipped = 1;
						if((0 > Two_of_Three_Reports_Valid) && (Other_RAC == 0)) {
L126:							func_main_Intent_not_known = 1;
							func_main_Alt_sep = 0;
L127:							func_main_Upward_preferred_1 = 0;
							func_main_Result_Non_Crossing_Biased_Climb = 0;
							func_main_Alim_Non_Crossing_Biased_Climb = Positive_RA_Alt_Thresh__3;
							if((Climb_Inhibit == 1)) {
								func_main_Temp11 = (Up_Separation + 100);
								if((func_main_Temp11 > Down_Separation)) {
									func_main_Upward_preferred_1 = 1;
									if((Other_Tracked_Alt > Own_Tracked_Alt)) {
										func_main_Temp12 = 1;
										if((func_main_Temp12 > 0) && (func_main_Alim_Non_Crossing_Biased_Climb > Down_Separation)) {
											func_main_Result_Non_Crossing_Biased_Climb = 1;
											func_main_Temp1 = func_main_Result_Non_Crossing_Biased_Climb;
											func_main_Temp2 = 1;
											func_main_Need_upward_RA = 1;
											func_main_Upward_preferred_2 = 0;
											func_main_Result_Non_Crossing_Biased_Descend = 0;
											goto L4;
										}
										else {
											func_main_Temp1 = func_main_Result_Non_Crossing_Biased_Climb;
											func_main_Temp2 = 1;
											func_main_Upward_preferred_2 = 0;
											func_main_Result_Non_Crossing_Biased_Descend = 0;
											goto L8;
										}
									}
									else {
										func_main_Temp12 = 0;
										func_main_Result_Non_Crossing_Biased_Climb = 1;
										func_main_Temp1 = func_main_Result_Non_Crossing_Biased_Climb;
										func_main_Temp2 = 0;
										func_main_Upward_preferred_2 = 0;
										func_main_Result_Non_Crossing_Biased_Descend = 0;
										goto L14;
									}
								}
								else {
									if((Own_Tracked_Alt > Other_Tracked_Alt)) {
										func_main_Temp13 = 1;
										if((func_main_Temp13 > 0) && (Cur_Vertical_Sep >= 300) && (Up_Separation >= func_main_Alim_Non_Crossing_Biased_Climb)) {
											func_main_Result_Non_Crossing_Biased_Climb = 1;
											func_main_Temp1 = func_main_Result_Non_Crossing_Biased_Climb;
											func_main_Temp2 = 0;
											func_main_Upward_preferred_2 = 0;
											func_main_Result_Non_Crossing_Biased_Descend = 0;
											goto L18;
										}
										else {
											func_main_Temp1 = func_main_Result_Non_Crossing_Biased_Climb;
											func_main_Temp2 = 0;
											if((func_main_Temp1 == 0)) {
L128:												func_main_Upward_preferred_2 = 0;
												func_main_Result_Non_Crossing_Biased_Descend = 0;
												goto L21;
											}
											else {
												goto L128;
											}
										}
									}
									else {
										func_main_Temp13 = 0;
										if((func_main_Temp13 == 0)) {
L129:											func_main_Temp1 = func_main_Result_Non_Crossing_Biased_Climb;
											if((Other_Tracked_Alt > Own_Tracked_Alt)) {
												func_main_Temp2 = 1;
												func_main_Upward_preferred_2 = 0;
												func_main_Result_Non_Crossing_Biased_Descend = 0;
												goto L24;
											}
											else {
												func_main_Temp2 = 0;
												if((func_main_Temp1 == 0)) {
L130:													func_main_Upward_preferred_2 = 0;
													func_main_Result_Non_Crossing_Biased_Descend = 0;
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
								func_main_Temp11 = Up_Separation;
								if((func_main_Temp11 > Down_Separation)) {
									func_main_Upward_preferred_1 = 1;
									if((Other_Tracked_Alt > Own_Tracked_Alt)) {
										func_main_Temp12 = 1;
										if((func_main_Temp12 > 0) && (func_main_Alim_Non_Crossing_Biased_Climb > Down_Separation)) {
											func_main_Result_Non_Crossing_Biased_Climb = 1;
											func_main_Temp1 = func_main_Result_Non_Crossing_Biased_Climb;
											func_main_Temp2 = 1;
											func_main_Need_upward_RA = 1;
											func_main_Upward_preferred_2 = 0;
											func_main_Result_Non_Crossing_Biased_Descend = 0;
											goto L29;
										}
										else {
											func_main_Temp1 = func_main_Result_Non_Crossing_Biased_Climb;
											func_main_Temp2 = 1;
											func_main_Upward_preferred_2 = 0;
											func_main_Result_Non_Crossing_Biased_Descend = 0;
											goto L31;
										}
									}
									else {
										func_main_Temp12 = 0;
										func_main_Result_Non_Crossing_Biased_Climb = 1;
										func_main_Temp1 = func_main_Result_Non_Crossing_Biased_Climb;
										func_main_Temp2 = 0;
										func_main_Upward_preferred_2 = 0;
										func_main_Result_Non_Crossing_Biased_Descend = 0;
										goto L33;
									}
								}
								else {
									if((Own_Tracked_Alt > Other_Tracked_Alt)) {
										func_main_Temp13 = 1;
										if((func_main_Temp13 > 0) && (Cur_Vertical_Sep >= 300) && (Up_Separation >= func_main_Alim_Non_Crossing_Biased_Climb)) {
											func_main_Result_Non_Crossing_Biased_Climb = 1;
											func_main_Temp1 = func_main_Result_Non_Crossing_Biased_Climb;
											func_main_Temp2 = 0;
											func_main_Upward_preferred_2 = 0;
											func_main_Result_Non_Crossing_Biased_Descend = 0;
											goto L35;
										}
										else {
											func_main_Temp1 = func_main_Result_Non_Crossing_Biased_Climb;
											func_main_Temp2 = 0;
											if((func_main_Temp1 == 0)) {
L131:												func_main_Upward_preferred_2 = 0;
												func_main_Result_Non_Crossing_Biased_Descend = 0;
												goto L38;
											}
											else {
												goto L131;
											}
										}
									}
									else {
										func_main_Temp13 = 0;
										if((func_main_Temp13 == 0)) {
L132:											func_main_Temp1 = func_main_Result_Non_Crossing_Biased_Climb;
											if((Other_Tracked_Alt > Own_Tracked_Alt)) {
												func_main_Temp2 = 1;
												func_main_Upward_preferred_2 = 0;
												func_main_Result_Non_Crossing_Biased_Descend = 0;
												goto L41;
											}
											else {
												func_main_Temp2 = 0;
												if((func_main_Temp1 == 0)) {
L133:													func_main_Upward_preferred_2 = 0;
													func_main_Result_Non_Crossing_Biased_Descend = 0;
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
								func_main_Temp11 = Up_Separation;
								if((func_main_Temp11 > Down_Separation)) {
									func_main_Upward_preferred_1 = 1;
									if((Other_Tracked_Alt > Own_Tracked_Alt)) {
										func_main_Temp12 = 1;
										if((func_main_Temp12 > 0) && (func_main_Alim_Non_Crossing_Biased_Climb > Down_Separation)) {
											func_main_Result_Non_Crossing_Biased_Climb = 1;
											func_main_Temp1 = func_main_Result_Non_Crossing_Biased_Climb;
											func_main_Temp2 = 1;
											func_main_Need_upward_RA = 1;
											func_main_Upward_preferred_2 = 0;
											func_main_Result_Non_Crossing_Biased_Descend = 0;
											goto L46;
										}
										else {
											func_main_Temp1 = func_main_Result_Non_Crossing_Biased_Climb;
											func_main_Temp2 = 1;
											func_main_Upward_preferred_2 = 0;
											func_main_Result_Non_Crossing_Biased_Descend = 0;
											goto L47;
										}
									}
									else {
										func_main_Temp12 = 0;
										func_main_Result_Non_Crossing_Biased_Climb = 1;
										func_main_Temp1 = func_main_Result_Non_Crossing_Biased_Climb;
										func_main_Temp2 = 0;
										func_main_Upward_preferred_2 = 0;
										func_main_Result_Non_Crossing_Biased_Descend = 0;
										goto L48;
									}
								}
								else {
									if((Own_Tracked_Alt > Other_Tracked_Alt)) {
										func_main_Temp13 = 1;
										if((func_main_Temp13 > 0) && (Cur_Vertical_Sep >= 300) && (Up_Separation >= func_main_Alim_Non_Crossing_Biased_Climb)) {
											func_main_Result_Non_Crossing_Biased_Climb = 1;
											func_main_Temp1 = func_main_Result_Non_Crossing_Biased_Climb;
											func_main_Temp2 = 0;
											func_main_Upward_preferred_2 = 0;
											func_main_Result_Non_Crossing_Biased_Descend = 0;
											goto L49;
										}
										else {
											func_main_Temp1 = func_main_Result_Non_Crossing_Biased_Climb;
											func_main_Temp2 = 0;
											if((func_main_Temp1 == 0)) {
L134:												func_main_Upward_preferred_2 = 0;
												func_main_Result_Non_Crossing_Biased_Descend = 0;
												goto L51;
											}
											else {
												goto L134;
											}
										}
									}
									else {
										func_main_Temp13 = 0;
										if((func_main_Temp13 == 0)) {
L135:											func_main_Temp1 = func_main_Result_Non_Crossing_Biased_Climb;
											if((Other_Tracked_Alt > Own_Tracked_Alt)) {
												func_main_Temp2 = 1;
												func_main_Upward_preferred_2 = 0;
												func_main_Result_Non_Crossing_Biased_Descend = 0;
												goto L53;
											}
											else {
												func_main_Temp2 = 0;
												if((func_main_Temp1 == 0)) {
L136:													func_main_Upward_preferred_2 = 0;
													func_main_Result_Non_Crossing_Biased_Descend = 0;
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
L137:						if((0 > Two_of_Three_Reports_Valid) && (Other_RAC == 0)) {
L138:							func_main_Intent_not_known = 1;
							func_main_Alt_sep = 0;
							goto L127;
						}
						else if((Two_of_Three_Reports_Valid > 0) && (Other_RAC == 0)) {
							goto L138;
						}
						else if((Two_of_Three_Reports_Valid == 0)) {
L139:							func_main_Alt_sep = 0;
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
				func_main_Alim = Positive_RA_Alt_Thresh__3;
				if((0 > High_Confidence) && (600 >= Own_Tracked_Alt_Rate) && (Cur_Vertical_Sep > 600)) {
L140:					func_main_Enabled = 1;
					if((Other_Capability == 0)) {
						func_main_Tcas_equipped = 1;
						if((0 > Two_of_Three_Reports_Valid) && (Other_RAC == 0)) {
L141:							func_main_Intent_not_known = 1;
							func_main_Alt_sep = 0;
L142:							func_main_Upward_preferred_1 = 0;
							func_main_Result_Non_Crossing_Biased_Climb = 0;
							func_main_Alim_Non_Crossing_Biased_Climb = Positive_RA_Alt_Thresh__3;
							if((Climb_Inhibit == 1)) {
								func_main_Temp11 = (Up_Separation + 100);
								if((func_main_Temp11 > Down_Separation)) {
									func_main_Upward_preferred_1 = 1;
									if((Other_Tracked_Alt > Own_Tracked_Alt)) {
										func_main_Temp12 = 1;
										if((func_main_Temp12 > 0) && (func_main_Alim_Non_Crossing_Biased_Climb > Down_Separation)) {
											func_main_Result_Non_Crossing_Biased_Climb = 1;
											func_main_Temp1 = func_main_Result_Non_Crossing_Biased_Climb;
											func_main_Temp2 = 1;
											func_main_Need_upward_RA = 1;
											func_main_Upward_preferred_2 = 0;
											func_main_Result_Non_Crossing_Biased_Descend = 0;
											goto L4;
										}
										else {
											func_main_Temp1 = func_main_Result_Non_Crossing_Biased_Climb;
											func_main_Temp2 = 1;
											func_main_Upward_preferred_2 = 0;
											func_main_Result_Non_Crossing_Biased_Descend = 0;
											goto L8;
										}
									}
									else {
										func_main_Temp12 = 0;
										func_main_Result_Non_Crossing_Biased_Climb = 1;
										func_main_Temp1 = func_main_Result_Non_Crossing_Biased_Climb;
										func_main_Temp2 = 0;
										func_main_Upward_preferred_2 = 0;
										func_main_Result_Non_Crossing_Biased_Descend = 0;
										goto L14;
									}
								}
								else {
									if((Own_Tracked_Alt > Other_Tracked_Alt)) {
										func_main_Temp13 = 1;
										if((func_main_Temp13 > 0) && (Cur_Vertical_Sep >= 300) && (Up_Separation >= func_main_Alim_Non_Crossing_Biased_Climb)) {
											func_main_Result_Non_Crossing_Biased_Climb = 1;
											func_main_Temp1 = func_main_Result_Non_Crossing_Biased_Climb;
											func_main_Temp2 = 0;
											func_main_Upward_preferred_2 = 0;
											func_main_Result_Non_Crossing_Biased_Descend = 0;
											goto L18;
										}
										else {
											func_main_Temp1 = func_main_Result_Non_Crossing_Biased_Climb;
											func_main_Temp2 = 0;
											if((func_main_Temp1 == 0)) {
L143:												func_main_Upward_preferred_2 = 0;
												func_main_Result_Non_Crossing_Biased_Descend = 0;
												goto L21;
											}
											else {
												goto L143;
											}
										}
									}
									else {
										func_main_Temp13 = 0;
										if((func_main_Temp13 == 0)) {
L144:											func_main_Temp1 = func_main_Result_Non_Crossing_Biased_Climb;
											if((Other_Tracked_Alt > Own_Tracked_Alt)) {
												func_main_Temp2 = 1;
												func_main_Upward_preferred_2 = 0;
												func_main_Result_Non_Crossing_Biased_Descend = 0;
												goto L24;
											}
											else {
												func_main_Temp2 = 0;
												if((func_main_Temp1 == 0)) {
L145:													func_main_Upward_preferred_2 = 0;
													func_main_Result_Non_Crossing_Biased_Descend = 0;
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
								func_main_Temp11 = Up_Separation;
								if((func_main_Temp11 > Down_Separation)) {
									func_main_Upward_preferred_1 = 1;
									if((Other_Tracked_Alt > Own_Tracked_Alt)) {
										func_main_Temp12 = 1;
										if((func_main_Temp12 > 0) && (func_main_Alim_Non_Crossing_Biased_Climb > Down_Separation)) {
											func_main_Result_Non_Crossing_Biased_Climb = 1;
											func_main_Temp1 = func_main_Result_Non_Crossing_Biased_Climb;
											func_main_Temp2 = 1;
											func_main_Need_upward_RA = 1;
											func_main_Upward_preferred_2 = 0;
											func_main_Result_Non_Crossing_Biased_Descend = 0;
											goto L29;
										}
										else {
											func_main_Temp1 = func_main_Result_Non_Crossing_Biased_Climb;
											func_main_Temp2 = 1;
											func_main_Upward_preferred_2 = 0;
											func_main_Result_Non_Crossing_Biased_Descend = 0;
											goto L31;
										}
									}
									else {
										func_main_Temp12 = 0;
										func_main_Result_Non_Crossing_Biased_Climb = 1;
										func_main_Temp1 = func_main_Result_Non_Crossing_Biased_Climb;
										func_main_Temp2 = 0;
										func_main_Upward_preferred_2 = 0;
										func_main_Result_Non_Crossing_Biased_Descend = 0;
										goto L33;
									}
								}
								else {
									if((Own_Tracked_Alt > Other_Tracked_Alt)) {
										func_main_Temp13 = 1;
										if((func_main_Temp13 > 0) && (Cur_Vertical_Sep >= 300) && (Up_Separation >= func_main_Alim_Non_Crossing_Biased_Climb)) {
											func_main_Result_Non_Crossing_Biased_Climb = 1;
											func_main_Temp1 = func_main_Result_Non_Crossing_Biased_Climb;
											func_main_Temp2 = 0;
											func_main_Upward_preferred_2 = 0;
											func_main_Result_Non_Crossing_Biased_Descend = 0;
											goto L35;
										}
										else {
											func_main_Temp1 = func_main_Result_Non_Crossing_Biased_Climb;
											func_main_Temp2 = 0;
											if((func_main_Temp1 == 0)) {
L146:												func_main_Upward_preferred_2 = 0;
												func_main_Result_Non_Crossing_Biased_Descend = 0;
												goto L38;
											}
											else {
												goto L146;
											}
										}
									}
									else {
										func_main_Temp13 = 0;
										if((func_main_Temp13 == 0)) {
L147:											func_main_Temp1 = func_main_Result_Non_Crossing_Biased_Climb;
											if((Other_Tracked_Alt > Own_Tracked_Alt)) {
												func_main_Temp2 = 1;
												func_main_Upward_preferred_2 = 0;
												func_main_Result_Non_Crossing_Biased_Descend = 0;
												goto L41;
											}
											else {
												func_main_Temp2 = 0;
												if((func_main_Temp1 == 0)) {
L148:													func_main_Upward_preferred_2 = 0;
													func_main_Result_Non_Crossing_Biased_Descend = 0;
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
								func_main_Temp11 = Up_Separation;
								if((func_main_Temp11 > Down_Separation)) {
									func_main_Upward_preferred_1 = 1;
									if((Other_Tracked_Alt > Own_Tracked_Alt)) {
										func_main_Temp12 = 1;
										if((func_main_Temp12 > 0) && (func_main_Alim_Non_Crossing_Biased_Climb > Down_Separation)) {
											func_main_Result_Non_Crossing_Biased_Climb = 1;
											func_main_Temp1 = func_main_Result_Non_Crossing_Biased_Climb;
											func_main_Temp2 = 1;
											func_main_Need_upward_RA = 1;
											func_main_Upward_preferred_2 = 0;
											func_main_Result_Non_Crossing_Biased_Descend = 0;
											goto L46;
										}
										else {
											func_main_Temp1 = func_main_Result_Non_Crossing_Biased_Climb;
											func_main_Temp2 = 1;
											func_main_Upward_preferred_2 = 0;
											func_main_Result_Non_Crossing_Biased_Descend = 0;
											goto L47;
										}
									}
									else {
										func_main_Temp12 = 0;
										func_main_Result_Non_Crossing_Biased_Climb = 1;
										func_main_Temp1 = func_main_Result_Non_Crossing_Biased_Climb;
										func_main_Temp2 = 0;
										func_main_Upward_preferred_2 = 0;
										func_main_Result_Non_Crossing_Biased_Descend = 0;
										goto L48;
									}
								}
								else {
									if((Own_Tracked_Alt > Other_Tracked_Alt)) {
										func_main_Temp13 = 1;
										if((func_main_Temp13 > 0) && (Cur_Vertical_Sep >= 300) && (Up_Separation >= func_main_Alim_Non_Crossing_Biased_Climb)) {
											func_main_Result_Non_Crossing_Biased_Climb = 1;
											func_main_Temp1 = func_main_Result_Non_Crossing_Biased_Climb;
											func_main_Temp2 = 0;
											func_main_Upward_preferred_2 = 0;
											func_main_Result_Non_Crossing_Biased_Descend = 0;
											goto L49;
										}
										else {
											func_main_Temp1 = func_main_Result_Non_Crossing_Biased_Climb;
											func_main_Temp2 = 0;
											if((func_main_Temp1 == 0)) {
L149:												func_main_Upward_preferred_2 = 0;
												func_main_Result_Non_Crossing_Biased_Descend = 0;
												goto L51;
											}
											else {
												goto L149;
											}
										}
									}
									else {
										func_main_Temp13 = 0;
										if((func_main_Temp13 == 0)) {
L150:											func_main_Temp1 = func_main_Result_Non_Crossing_Biased_Climb;
											if((Other_Tracked_Alt > Own_Tracked_Alt)) {
												func_main_Temp2 = 1;
												func_main_Upward_preferred_2 = 0;
												func_main_Result_Non_Crossing_Biased_Descend = 0;
												goto L53;
											}
											else {
												func_main_Temp2 = 0;
												if((func_main_Temp1 == 0)) {
L151:													func_main_Upward_preferred_2 = 0;
													func_main_Result_Non_Crossing_Biased_Descend = 0;
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
L152:						if((0 > Two_of_Three_Reports_Valid) && (Other_RAC == 0)) {
L153:							func_main_Intent_not_known = 1;
							func_main_Alt_sep = 0;
							goto L142;
						}
						else if((Two_of_Three_Reports_Valid > 0) && (Other_RAC == 0)) {
							goto L153;
						}
						else if((Two_of_Three_Reports_Valid == 0)) {
L154:							func_main_Alt_sep = 0;
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
