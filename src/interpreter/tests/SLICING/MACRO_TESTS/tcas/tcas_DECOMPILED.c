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

// ---- func_Own_Below_Threat ----

// ---- func_Own_Above_Threat ----

// ---- func_initialize ----

// ---- func_ALIM ----

// ---- func_Inhibit_Biased_Climb ----

// ---- func_Non_Crossing_Biased_Climb ----
	int func_Non_Crossing_Biased_Climb_Upward_preferred;
	int func_Non_Crossing_Biased_Climb_Upward_crossing_situation;
	int func_Non_Crossing_Biased_Climb_Result;
	int func_Non_Crossing_Biased_Climb_Alim;
	int func_Non_Crossing_Biased_Climb_Temp1;
	int func_Non_Crossing_Biased_Climb_Temp2;
	int func_Non_Crossing_Biased_Climb_Temp3;

// ---- func_Non_Crossing_Biased_Descend ----
	int func_Non_Crossing_Biased_Descend_Upward_preferred;
	int func_Non_Crossing_Biased_Descend_Upward_crossing_situation;
	int func_Non_Crossing_Biased_Descend_Result;
	int func_Non_Crossing_Biased_Descend_Alim;
	int func_Non_Crossing_Biased_Descend_Temp1;
	int func_Non_Crossing_Biased_Descend_Temp2;
	int func_Non_Crossing_Biased_Descend_Temp3;

// ---- func_Own_Below_Threat ----

// ---- func_Own_Above_Threat ----

// ---- func_alt_sep_test ----
	int func_alt_sep_test_Enabled;
	int func_alt_sep_test_Tcas_equipped;
	int func_alt_sep_test_Intent_not_known;
	int func_alt_sep_test_Need_upward_RA;
	int func_alt_sep_test_Need_downward_RA;
	int func_alt_sep_test_Alt_sep;
	int func_alt_sep_test_Alim;
	int func_alt_sep_test_Temp1;
	int func_alt_sep_test_Temp2;
	int func_alt_sep_test_Temp3;
	int func_alt_sep_test_Temp4;

// ---- func_main ----

// ---- func___TRACER_INIT ----

// ---- end local declarations ----

	RetVal = 0;
	;
	Positive_RA_Alt_Thresh__0 = 400;
	Positive_RA_Alt_Thresh__1 = 500;
	Positive_RA_Alt_Thresh__2 = 640;
	Positive_RA_Alt_Thresh__3 = 740;
	RetVal = 0;
	;
	func_alt_sep_test_Enabled = 0;
	func_alt_sep_test_Tcas_equipped = 0;
	func_alt_sep_test_Intent_not_known = 0;
	func_alt_sep_test_Need_upward_RA = 0;
	func_alt_sep_test_Need_downward_RA = 0;
	func_alt_sep_test_Enabled = 0;
	func_alt_sep_test_Tcas_equipped = 0;
	func_alt_sep_test_Intent_not_known = 0;
	func_alt_sep_test_Need_upward_RA = 0;
	func_alt_sep_test_Need_downward_RA = 0;
	if((Alt_Layer_Value == 0)) {
		RetVal = Positive_RA_Alt_Thresh__0;
		func_alt_sep_test_Alim = RetVal;
		if((High_Confidence > 0) && (600 >= Own_Tracked_Alt_Rate) && (Cur_Vertical_Sep > 600)) {
L1:			func_alt_sep_test_Enabled = 1;
			if((Other_Capability == 0)) {
				func_alt_sep_test_Tcas_equipped = 1;
				if((Two_of_Three_Reports_Valid > 0) && (Other_RAC == 0)) {
L2:					func_alt_sep_test_Intent_not_known = 1;
					func_alt_sep_test_Alt_sep = 0;
L3:					func_Non_Crossing_Biased_Climb_Upward_preferred = 0;
					func_Non_Crossing_Biased_Climb_Result = 0;
					RetVal = Positive_RA_Alt_Thresh__0;
					func_Non_Crossing_Biased_Climb_Alim = RetVal;
					if((Climb_Inhibit == 1)) {
						RetVal = (Up_Separation + 100);
						func_Non_Crossing_Biased_Climb_Temp1 = RetVal;
						if((func_Non_Crossing_Biased_Climb_Temp1 > Down_Separation)) {
							func_Non_Crossing_Biased_Climb_Upward_preferred = 1;
							if((Other_Tracked_Alt > Own_Tracked_Alt)) {
								RetVal = 1;
								func_Non_Crossing_Biased_Climb_Temp2 = RetVal;
								if((func_Non_Crossing_Biased_Climb_Temp2 > 0) && (func_Non_Crossing_Biased_Climb_Alim > Down_Separation)) {
									func_Non_Crossing_Biased_Climb_Result = 1;
									RetVal = func_Non_Crossing_Biased_Climb_Result;
									func_alt_sep_test_Temp1 = RetVal;
									RetVal = 1;
									func_alt_sep_test_Temp2 = RetVal;
									func_alt_sep_test_Need_upward_RA = 1;
									func_Non_Crossing_Biased_Descend_Upward_preferred = 0;
									func_Non_Crossing_Biased_Descend_Result = 0;
									RetVal = Positive_RA_Alt_Thresh__0;
									func_Non_Crossing_Biased_Descend_Alim = RetVal;
									RetVal = (Up_Separation + 100);
									func_Non_Crossing_Biased_Descend_Temp1 = RetVal;
									func_Non_Crossing_Biased_Descend_Upward_preferred = 1;
									RetVal = 1;
									func_Non_Crossing_Biased_Descend_Temp2 = RetVal;
									RetVal = func_Non_Crossing_Biased_Descend_Result;
									func_alt_sep_test_Temp3 = RetVal;
L4:									RetVal = 0;
									func_alt_sep_test_Temp4 = RetVal;
									if((func_alt_sep_test_Temp3 == 0)) {
L5:										func_alt_sep_test_Alt_sep = 1;
L6:										RetVal = func_alt_sep_test_Alt_sep;
										;
										RetVal = 0;
										return RetVal;
									}
									else {
										goto L5;
									}
								}
								else {
									RetVal = func_Non_Crossing_Biased_Climb_Result;
									func_alt_sep_test_Temp1 = RetVal;
									RetVal = 1;
									func_alt_sep_test_Temp2 = RetVal;
									func_Non_Crossing_Biased_Descend_Upward_preferred = 0;
									func_Non_Crossing_Biased_Descend_Result = 0;
									RetVal = Positive_RA_Alt_Thresh__0;
									func_Non_Crossing_Biased_Descend_Alim = RetVal;
									RetVal = (Up_Separation + 100);
									func_Non_Crossing_Biased_Descend_Temp1 = RetVal;
									func_Non_Crossing_Biased_Descend_Upward_preferred = 1;
									RetVal = 1;
									func_Non_Crossing_Biased_Descend_Temp2 = RetVal;
									func_Non_Crossing_Biased_Descend_Result = 1;
									RetVal = func_Non_Crossing_Biased_Descend_Result;
									func_alt_sep_test_Temp3 = RetVal;
L7:									RetVal = 0;
									func_alt_sep_test_Temp4 = RetVal;
L8:L9:									if((func_alt_sep_test_Need_upward_RA == 0)) {
L10:										func_alt_sep_test_Alt_sep = 0;
										goto L6;
									}
									else {
										goto L10;
									}
								}
							}
							else {
								RetVal = 0;
								func_Non_Crossing_Biased_Climb_Temp2 = RetVal;
								func_Non_Crossing_Biased_Climb_Result = 1;
								RetVal = func_Non_Crossing_Biased_Climb_Result;
								func_alt_sep_test_Temp1 = RetVal;
								RetVal = 0;
								func_alt_sep_test_Temp2 = RetVal;
								func_Non_Crossing_Biased_Descend_Upward_preferred = 0;
								func_Non_Crossing_Biased_Descend_Result = 0;
								RetVal = Positive_RA_Alt_Thresh__0;
								func_Non_Crossing_Biased_Descend_Alim = RetVal;
								RetVal = (Up_Separation + 100);
								func_Non_Crossing_Biased_Descend_Temp1 = RetVal;
								func_Non_Crossing_Biased_Descend_Upward_preferred = 1;
								RetVal = 0;
								func_Non_Crossing_Biased_Descend_Temp2 = RetVal;
								if((func_Non_Crossing_Biased_Descend_Temp2 == 0)) {
L11:									RetVal = func_Non_Crossing_Biased_Descend_Result;
									func_alt_sep_test_Temp3 = RetVal;
L12:									if((Own_Tracked_Alt > Other_Tracked_Alt)) {
										RetVal = 1;
										func_alt_sep_test_Temp4 = RetVal;
										goto L9;
									}
									else {
										RetVal = 0;
										func_alt_sep_test_Temp4 = RetVal;
										if((func_alt_sep_test_Temp3 == 0)) {
											goto L9;
										}
										else {
											goto L9;
										}
									}
								}
								else {
									goto L11;
								}
							}
						}
						else {
							if((Own_Tracked_Alt > Other_Tracked_Alt)) {
								RetVal = 1;
								func_Non_Crossing_Biased_Climb_Temp3 = RetVal;
								if((func_Non_Crossing_Biased_Climb_Temp3 > 0) && (Cur_Vertical_Sep >= 300) && (Up_Separation >= func_Non_Crossing_Biased_Climb_Alim)) {
									func_Non_Crossing_Biased_Climb_Result = 1;
									RetVal = func_Non_Crossing_Biased_Climb_Result;
									func_alt_sep_test_Temp1 = RetVal;
									RetVal = 0;
									func_alt_sep_test_Temp2 = RetVal;
									func_Non_Crossing_Biased_Descend_Upward_preferred = 0;
									func_Non_Crossing_Biased_Descend_Result = 0;
									RetVal = Positive_RA_Alt_Thresh__0;
									func_Non_Crossing_Biased_Descend_Alim = RetVal;
									RetVal = (Up_Separation + 100);
									func_Non_Crossing_Biased_Descend_Temp1 = RetVal;
									RetVal = 1;
									func_Non_Crossing_Biased_Descend_Temp3 = RetVal;
									func_Non_Crossing_Biased_Descend_Result = 1;
									RetVal = func_Non_Crossing_Biased_Descend_Result;
									func_alt_sep_test_Temp3 = RetVal;
L13:									RetVal = 1;
									func_alt_sep_test_Temp4 = RetVal;
									func_alt_sep_test_Need_downward_RA = 1;
									func_alt_sep_test_Alt_sep = 2;
									goto L6;
								}
								else {
									RetVal = func_Non_Crossing_Biased_Climb_Result;
									func_alt_sep_test_Temp1 = RetVal;
									RetVal = 0;
									func_alt_sep_test_Temp2 = RetVal;
									if((func_alt_sep_test_Temp1 == 0)) {
L14:										func_Non_Crossing_Biased_Descend_Upward_preferred = 0;
										func_Non_Crossing_Biased_Descend_Result = 0;
										RetVal = Positive_RA_Alt_Thresh__0;
										func_Non_Crossing_Biased_Descend_Alim = RetVal;
										RetVal = (Up_Separation + 100);
										func_Non_Crossing_Biased_Descend_Temp1 = RetVal;
										RetVal = 1;
										func_Non_Crossing_Biased_Descend_Temp3 = RetVal;
										RetVal = func_Non_Crossing_Biased_Descend_Result;
										func_alt_sep_test_Temp3 = RetVal;
										goto L12;
									}
									else {
										goto L14;
									}
								}
							}
							else {
								RetVal = 0;
								func_Non_Crossing_Biased_Climb_Temp3 = RetVal;
								if((func_Non_Crossing_Biased_Climb_Temp3 == 0)) {
L15:									RetVal = func_Non_Crossing_Biased_Climb_Result;
									func_alt_sep_test_Temp1 = RetVal;
									if((Other_Tracked_Alt > Own_Tracked_Alt)) {
										RetVal = 1;
										func_alt_sep_test_Temp2 = RetVal;
										func_Non_Crossing_Biased_Descend_Upward_preferred = 0;
										func_Non_Crossing_Biased_Descend_Result = 0;
										RetVal = Positive_RA_Alt_Thresh__0;
										func_Non_Crossing_Biased_Descend_Alim = RetVal;
										RetVal = (Up_Separation + 100);
										func_Non_Crossing_Biased_Descend_Temp1 = RetVal;
										RetVal = 0;
										func_Non_Crossing_Biased_Descend_Temp3 = RetVal;
										func_Non_Crossing_Biased_Descend_Result = 1;
										RetVal = func_Non_Crossing_Biased_Descend_Result;
										func_alt_sep_test_Temp3 = RetVal;
										goto L7;
									}
									else {
										RetVal = 0;
										func_alt_sep_test_Temp2 = RetVal;
										if((func_alt_sep_test_Temp1 == 0)) {
L16:											func_Non_Crossing_Biased_Descend_Upward_preferred = 0;
											func_Non_Crossing_Biased_Descend_Result = 0;
											RetVal = Positive_RA_Alt_Thresh__0;
											func_Non_Crossing_Biased_Descend_Alim = RetVal;
											RetVal = (Up_Separation + 100);
											func_Non_Crossing_Biased_Descend_Temp1 = RetVal;
											RetVal = 0;
											func_Non_Crossing_Biased_Descend_Temp3 = RetVal;
											func_Non_Crossing_Biased_Descend_Result = 1;
											RetVal = func_Non_Crossing_Biased_Descend_Result;
											func_alt_sep_test_Temp3 = RetVal;
L17:											RetVal = 0;
											func_alt_sep_test_Temp4 = RetVal;
											goto L8;
										}
										else {
											goto L16;
										}
									}
								}
								else {
									goto L15;
								}
							}
						}
					}
					else if((1 > Climb_Inhibit)) {
						RetVal = Up_Separation;
						func_Non_Crossing_Biased_Climb_Temp1 = RetVal;
						if((func_Non_Crossing_Biased_Climb_Temp1 > Down_Separation)) {
							func_Non_Crossing_Biased_Climb_Upward_preferred = 1;
							if((Other_Tracked_Alt > Own_Tracked_Alt)) {
								RetVal = 1;
								func_Non_Crossing_Biased_Climb_Temp2 = RetVal;
								if((func_Non_Crossing_Biased_Climb_Temp2 > 0) && (func_Non_Crossing_Biased_Climb_Alim > Down_Separation)) {
									func_Non_Crossing_Biased_Climb_Result = 1;
									RetVal = func_Non_Crossing_Biased_Climb_Result;
									func_alt_sep_test_Temp1 = RetVal;
									RetVal = 1;
									func_alt_sep_test_Temp2 = RetVal;
									func_alt_sep_test_Need_upward_RA = 1;
									func_Non_Crossing_Biased_Descend_Upward_preferred = 0;
									func_Non_Crossing_Biased_Descend_Result = 0;
									RetVal = Positive_RA_Alt_Thresh__0;
									func_Non_Crossing_Biased_Descend_Alim = RetVal;
									RetVal = Up_Separation;
									func_Non_Crossing_Biased_Descend_Temp1 = RetVal;
									func_Non_Crossing_Biased_Descend_Upward_preferred = 1;
									RetVal = 1;
									func_Non_Crossing_Biased_Descend_Temp2 = RetVal;
									RetVal = func_Non_Crossing_Biased_Descend_Result;
									func_alt_sep_test_Temp3 = RetVal;
									goto L4;
								}
								else {
									RetVal = func_Non_Crossing_Biased_Climb_Result;
									func_alt_sep_test_Temp1 = RetVal;
									RetVal = 1;
									func_alt_sep_test_Temp2 = RetVal;
									func_Non_Crossing_Biased_Descend_Upward_preferred = 0;
									func_Non_Crossing_Biased_Descend_Result = 0;
									RetVal = Positive_RA_Alt_Thresh__0;
									func_Non_Crossing_Biased_Descend_Alim = RetVal;
									RetVal = Up_Separation;
									func_Non_Crossing_Biased_Descend_Temp1 = RetVal;
									func_Non_Crossing_Biased_Descend_Upward_preferred = 1;
									RetVal = 1;
									func_Non_Crossing_Biased_Descend_Temp2 = RetVal;
									func_Non_Crossing_Biased_Descend_Result = 1;
									RetVal = func_Non_Crossing_Biased_Descend_Result;
									func_alt_sep_test_Temp3 = RetVal;
									goto L7;
								}
							}
							else {
								RetVal = 0;
								func_Non_Crossing_Biased_Climb_Temp2 = RetVal;
								func_Non_Crossing_Biased_Climb_Result = 1;
								RetVal = func_Non_Crossing_Biased_Climb_Result;
								func_alt_sep_test_Temp1 = RetVal;
								RetVal = 0;
								func_alt_sep_test_Temp2 = RetVal;
								func_Non_Crossing_Biased_Descend_Upward_preferred = 0;
								func_Non_Crossing_Biased_Descend_Result = 0;
								RetVal = Positive_RA_Alt_Thresh__0;
								func_Non_Crossing_Biased_Descend_Alim = RetVal;
								RetVal = Up_Separation;
								func_Non_Crossing_Biased_Descend_Temp1 = RetVal;
								func_Non_Crossing_Biased_Descend_Upward_preferred = 1;
								RetVal = 0;
								func_Non_Crossing_Biased_Descend_Temp2 = RetVal;
								if((func_Non_Crossing_Biased_Descend_Temp2 == 0)) {
L18:									RetVal = func_Non_Crossing_Biased_Descend_Result;
									func_alt_sep_test_Temp3 = RetVal;
									goto L12;
								}
								else {
									goto L18;
								}
							}
						}
						else {
							if((Own_Tracked_Alt > Other_Tracked_Alt)) {
								RetVal = 1;
								func_Non_Crossing_Biased_Climb_Temp3 = RetVal;
								if((func_Non_Crossing_Biased_Climb_Temp3 > 0) && (Cur_Vertical_Sep >= 300) && (Up_Separation >= func_Non_Crossing_Biased_Climb_Alim)) {
									func_Non_Crossing_Biased_Climb_Result = 1;
									RetVal = func_Non_Crossing_Biased_Climb_Result;
									func_alt_sep_test_Temp1 = RetVal;
									RetVal = 0;
									func_alt_sep_test_Temp2 = RetVal;
									func_Non_Crossing_Biased_Descend_Upward_preferred = 0;
									func_Non_Crossing_Biased_Descend_Result = 0;
									RetVal = Positive_RA_Alt_Thresh__0;
									func_Non_Crossing_Biased_Descend_Alim = RetVal;
									RetVal = Up_Separation;
									func_Non_Crossing_Biased_Descend_Temp1 = RetVal;
									RetVal = 1;
									func_Non_Crossing_Biased_Descend_Temp3 = RetVal;
									func_Non_Crossing_Biased_Descend_Result = 1;
									RetVal = func_Non_Crossing_Biased_Descend_Result;
									func_alt_sep_test_Temp3 = RetVal;
									goto L13;
								}
								else {
									RetVal = func_Non_Crossing_Biased_Climb_Result;
									func_alt_sep_test_Temp1 = RetVal;
									RetVal = 0;
									func_alt_sep_test_Temp2 = RetVal;
									if((func_alt_sep_test_Temp1 == 0)) {
L19:										func_Non_Crossing_Biased_Descend_Upward_preferred = 0;
										func_Non_Crossing_Biased_Descend_Result = 0;
										RetVal = Positive_RA_Alt_Thresh__0;
										func_Non_Crossing_Biased_Descend_Alim = RetVal;
										RetVal = Up_Separation;
										func_Non_Crossing_Biased_Descend_Temp1 = RetVal;
										RetVal = 1;
										func_Non_Crossing_Biased_Descend_Temp3 = RetVal;
										RetVal = func_Non_Crossing_Biased_Descend_Result;
										func_alt_sep_test_Temp3 = RetVal;
										goto L12;
									}
									else {
										goto L19;
									}
								}
							}
							else {
								RetVal = 0;
								func_Non_Crossing_Biased_Climb_Temp3 = RetVal;
								if((func_Non_Crossing_Biased_Climb_Temp3 == 0)) {
L20:									RetVal = func_Non_Crossing_Biased_Climb_Result;
									func_alt_sep_test_Temp1 = RetVal;
									if((Other_Tracked_Alt > Own_Tracked_Alt)) {
										RetVal = 1;
										func_alt_sep_test_Temp2 = RetVal;
										func_Non_Crossing_Biased_Descend_Upward_preferred = 0;
										func_Non_Crossing_Biased_Descend_Result = 0;
										RetVal = Positive_RA_Alt_Thresh__0;
										func_Non_Crossing_Biased_Descend_Alim = RetVal;
										RetVal = Up_Separation;
										func_Non_Crossing_Biased_Descend_Temp1 = RetVal;
										RetVal = 0;
										func_Non_Crossing_Biased_Descend_Temp3 = RetVal;
										func_Non_Crossing_Biased_Descend_Result = 1;
										RetVal = func_Non_Crossing_Biased_Descend_Result;
										func_alt_sep_test_Temp3 = RetVal;
										goto L7;
									}
									else {
										RetVal = 0;
										func_alt_sep_test_Temp2 = RetVal;
										if((func_alt_sep_test_Temp1 == 0)) {
L21:											func_Non_Crossing_Biased_Descend_Upward_preferred = 0;
											func_Non_Crossing_Biased_Descend_Result = 0;
											RetVal = Positive_RA_Alt_Thresh__0;
											func_Non_Crossing_Biased_Descend_Alim = RetVal;
											RetVal = Up_Separation;
											func_Non_Crossing_Biased_Descend_Temp1 = RetVal;
											RetVal = 0;
											func_Non_Crossing_Biased_Descend_Temp3 = RetVal;
											func_Non_Crossing_Biased_Descend_Result = 1;
											RetVal = func_Non_Crossing_Biased_Descend_Result;
											func_alt_sep_test_Temp3 = RetVal;
											goto L17;
										}
										else {
											goto L21;
										}
									}
								}
								else {
									goto L20;
								}
							}
						}
					}
					else {
						RetVal = Up_Separation;
						func_Non_Crossing_Biased_Climb_Temp1 = RetVal;
						if((func_Non_Crossing_Biased_Climb_Temp1 > Down_Separation)) {
							func_Non_Crossing_Biased_Climb_Upward_preferred = 1;
							if((Other_Tracked_Alt > Own_Tracked_Alt)) {
								RetVal = 1;
								func_Non_Crossing_Biased_Climb_Temp2 = RetVal;
								if((func_Non_Crossing_Biased_Climb_Temp2 > 0) && (func_Non_Crossing_Biased_Climb_Alim > Down_Separation)) {
									func_Non_Crossing_Biased_Climb_Result = 1;
									RetVal = func_Non_Crossing_Biased_Climb_Result;
									func_alt_sep_test_Temp1 = RetVal;
									RetVal = 1;
									func_alt_sep_test_Temp2 = RetVal;
									func_alt_sep_test_Need_upward_RA = 1;
									func_Non_Crossing_Biased_Descend_Upward_preferred = 0;
									func_Non_Crossing_Biased_Descend_Result = 0;
									RetVal = Positive_RA_Alt_Thresh__0;
									func_Non_Crossing_Biased_Descend_Alim = RetVal;
									RetVal = Up_Separation;
									func_Non_Crossing_Biased_Descend_Temp1 = RetVal;
									func_Non_Crossing_Biased_Descend_Upward_preferred = 1;
									RetVal = 1;
									func_Non_Crossing_Biased_Descend_Temp2 = RetVal;
									RetVal = func_Non_Crossing_Biased_Descend_Result;
									func_alt_sep_test_Temp3 = RetVal;
									goto L4;
								}
								else {
									RetVal = func_Non_Crossing_Biased_Climb_Result;
									func_alt_sep_test_Temp1 = RetVal;
									RetVal = 1;
									func_alt_sep_test_Temp2 = RetVal;
									func_Non_Crossing_Biased_Descend_Upward_preferred = 0;
									func_Non_Crossing_Biased_Descend_Result = 0;
									RetVal = Positive_RA_Alt_Thresh__0;
									func_Non_Crossing_Biased_Descend_Alim = RetVal;
									RetVal = Up_Separation;
									func_Non_Crossing_Biased_Descend_Temp1 = RetVal;
									func_Non_Crossing_Biased_Descend_Upward_preferred = 1;
									RetVal = 1;
									func_Non_Crossing_Biased_Descend_Temp2 = RetVal;
									func_Non_Crossing_Biased_Descend_Result = 1;
									RetVal = func_Non_Crossing_Biased_Descend_Result;
									func_alt_sep_test_Temp3 = RetVal;
									goto L7;
								}
							}
							else {
								RetVal = 0;
								func_Non_Crossing_Biased_Climb_Temp2 = RetVal;
								func_Non_Crossing_Biased_Climb_Result = 1;
								RetVal = func_Non_Crossing_Biased_Climb_Result;
								func_alt_sep_test_Temp1 = RetVal;
								RetVal = 0;
								func_alt_sep_test_Temp2 = RetVal;
								func_Non_Crossing_Biased_Descend_Upward_preferred = 0;
								func_Non_Crossing_Biased_Descend_Result = 0;
								RetVal = Positive_RA_Alt_Thresh__0;
								func_Non_Crossing_Biased_Descend_Alim = RetVal;
								RetVal = Up_Separation;
								func_Non_Crossing_Biased_Descend_Temp1 = RetVal;
								func_Non_Crossing_Biased_Descend_Upward_preferred = 1;
								RetVal = 0;
								func_Non_Crossing_Biased_Descend_Temp2 = RetVal;
								if((func_Non_Crossing_Biased_Descend_Temp2 == 0)) {
L22:									RetVal = func_Non_Crossing_Biased_Descend_Result;
									func_alt_sep_test_Temp3 = RetVal;
									goto L12;
								}
								else {
									goto L22;
								}
							}
						}
						else {
							if((Own_Tracked_Alt > Other_Tracked_Alt)) {
								RetVal = 1;
								func_Non_Crossing_Biased_Climb_Temp3 = RetVal;
								if((func_Non_Crossing_Biased_Climb_Temp3 > 0) && (Cur_Vertical_Sep >= 300) && (Up_Separation >= func_Non_Crossing_Biased_Climb_Alim)) {
									func_Non_Crossing_Biased_Climb_Result = 1;
									RetVal = func_Non_Crossing_Biased_Climb_Result;
									func_alt_sep_test_Temp1 = RetVal;
									RetVal = 0;
									func_alt_sep_test_Temp2 = RetVal;
									func_Non_Crossing_Biased_Descend_Upward_preferred = 0;
									func_Non_Crossing_Biased_Descend_Result = 0;
									RetVal = Positive_RA_Alt_Thresh__0;
									func_Non_Crossing_Biased_Descend_Alim = RetVal;
									RetVal = Up_Separation;
									func_Non_Crossing_Biased_Descend_Temp1 = RetVal;
									RetVal = 1;
									func_Non_Crossing_Biased_Descend_Temp3 = RetVal;
									func_Non_Crossing_Biased_Descend_Result = 1;
									RetVal = func_Non_Crossing_Biased_Descend_Result;
									func_alt_sep_test_Temp3 = RetVal;
									goto L13;
								}
								else {
									RetVal = func_Non_Crossing_Biased_Climb_Result;
									func_alt_sep_test_Temp1 = RetVal;
									RetVal = 0;
									func_alt_sep_test_Temp2 = RetVal;
									if((func_alt_sep_test_Temp1 == 0)) {
L23:										func_Non_Crossing_Biased_Descend_Upward_preferred = 0;
										func_Non_Crossing_Biased_Descend_Result = 0;
										RetVal = Positive_RA_Alt_Thresh__0;
										func_Non_Crossing_Biased_Descend_Alim = RetVal;
										RetVal = Up_Separation;
										func_Non_Crossing_Biased_Descend_Temp1 = RetVal;
										RetVal = 1;
										func_Non_Crossing_Biased_Descend_Temp3 = RetVal;
										RetVal = func_Non_Crossing_Biased_Descend_Result;
										func_alt_sep_test_Temp3 = RetVal;
										goto L12;
									}
									else {
										goto L23;
									}
								}
							}
							else {
								RetVal = 0;
								func_Non_Crossing_Biased_Climb_Temp3 = RetVal;
								if((func_Non_Crossing_Biased_Climb_Temp3 == 0)) {
L24:									RetVal = func_Non_Crossing_Biased_Climb_Result;
									func_alt_sep_test_Temp1 = RetVal;
									if((Other_Tracked_Alt > Own_Tracked_Alt)) {
										RetVal = 1;
										func_alt_sep_test_Temp2 = RetVal;
										func_Non_Crossing_Biased_Descend_Upward_preferred = 0;
										func_Non_Crossing_Biased_Descend_Result = 0;
										RetVal = Positive_RA_Alt_Thresh__0;
										func_Non_Crossing_Biased_Descend_Alim = RetVal;
										RetVal = Up_Separation;
										func_Non_Crossing_Biased_Descend_Temp1 = RetVal;
										RetVal = 0;
										func_Non_Crossing_Biased_Descend_Temp3 = RetVal;
										func_Non_Crossing_Biased_Descend_Result = 1;
										RetVal = func_Non_Crossing_Biased_Descend_Result;
										func_alt_sep_test_Temp3 = RetVal;
										goto L7;
									}
									else {
										RetVal = 0;
										func_alt_sep_test_Temp2 = RetVal;
										if((func_alt_sep_test_Temp1 == 0)) {
L25:											func_Non_Crossing_Biased_Descend_Upward_preferred = 0;
											func_Non_Crossing_Biased_Descend_Result = 0;
											RetVal = Positive_RA_Alt_Thresh__0;
											func_Non_Crossing_Biased_Descend_Alim = RetVal;
											RetVal = Up_Separation;
											func_Non_Crossing_Biased_Descend_Temp1 = RetVal;
											RetVal = 0;
											func_Non_Crossing_Biased_Descend_Temp3 = RetVal;
											func_Non_Crossing_Biased_Descend_Result = 1;
											RetVal = func_Non_Crossing_Biased_Descend_Result;
											func_alt_sep_test_Temp3 = RetVal;
											goto L17;
										}
										else {
											goto L25;
										}
									}
								}
								else {
									goto L24;
								}
							}
						}
					}
				}
				else if((0 > Two_of_Three_Reports_Valid) && (Other_RAC == 0)) {
					goto L2;
				}
				else if((Two_of_Three_Reports_Valid == 0)) {
L26:					func_alt_sep_test_Alt_sep = 0;
					goto L6;
				}
				else if((0 > Other_RAC)) {
					goto L26;
				}
				else {
					goto L26;
				}
			}
			else if((0 > Other_Capability)) {
L27:				if((Two_of_Three_Reports_Valid > 0) && (Other_RAC == 0)) {
L28:					func_alt_sep_test_Intent_not_known = 1;
					func_alt_sep_test_Alt_sep = 0;
					goto L3;
				}
				else if((0 > Two_of_Three_Reports_Valid) && (Other_RAC == 0)) {
					goto L28;
				}
				else if((Two_of_Three_Reports_Valid == 0)) {
L29:					func_alt_sep_test_Alt_sep = 0;
					goto L3;
				}
				else if((0 > Other_RAC)) {
					goto L29;
				}
				else {
					goto L29;
				}
			}
			else {
				goto L27;
			}
		}
		else if((0 > High_Confidence) && (600 >= Own_Tracked_Alt_Rate) && (Cur_Vertical_Sep > 600)) {
			goto L1;
		}
		else if((High_Confidence == 0)) {
L30:			if((Other_Capability == 0)) {
				func_alt_sep_test_Tcas_equipped = 1;
				if((Two_of_Three_Reports_Valid > 0) && (Other_RAC == 0)) {
L31:					func_alt_sep_test_Intent_not_known = 1;
					func_alt_sep_test_Alt_sep = 0;
					goto L6;
				}
				else if((0 > Two_of_Three_Reports_Valid) && (Other_RAC == 0)) {
					goto L31;
				}
				else if((Two_of_Three_Reports_Valid == 0)) {
L32:					func_alt_sep_test_Alt_sep = 0;
					if((func_alt_sep_test_Enabled == 0)) {
						goto L6;
					}
					else {
						goto L6;
					}
				}
				else if((0 > Other_RAC)) {
					goto L32;
				}
				else {
					goto L32;
				}
			}
			else if((0 > Other_Capability)) {
L33:				if((Two_of_Three_Reports_Valid > 0) && (Other_RAC == 0)) {
					goto L31;
				}
				else if((0 > Two_of_Three_Reports_Valid) && (Other_RAC == 0)) {
					goto L31;
				}
				else if((Two_of_Three_Reports_Valid == 0)) {
L34:					func_alt_sep_test_Alt_sep = 0;
					goto L6;
				}
				else if((0 > Other_RAC)) {
					goto L34;
				}
				else {
					goto L34;
				}
			}
			else {
				goto L33;
			}
		}
		else if((Own_Tracked_Alt_Rate > 600)) {
			goto L30;
		}
		else {
			goto L30;
		}
	}
	else if((0 > Alt_Layer_Value)) {
		RetVal = Positive_RA_Alt_Thresh__3;
		func_alt_sep_test_Alim = RetVal;
		if((High_Confidence > 0) && (600 >= Own_Tracked_Alt_Rate) && (Cur_Vertical_Sep > 600)) {
L35:			func_alt_sep_test_Enabled = 1;
			if((Other_Capability == 0)) {
				func_alt_sep_test_Tcas_equipped = 1;
				if((Two_of_Three_Reports_Valid > 0) && (Other_RAC == 0)) {
L36:					func_alt_sep_test_Intent_not_known = 1;
					func_alt_sep_test_Alt_sep = 0;
L37:					func_Non_Crossing_Biased_Climb_Upward_preferred = 0;
					func_Non_Crossing_Biased_Climb_Result = 0;
					RetVal = Positive_RA_Alt_Thresh__3;
					func_Non_Crossing_Biased_Climb_Alim = RetVal;
					if((Climb_Inhibit == 1)) {
						RetVal = (Up_Separation + 100);
						func_Non_Crossing_Biased_Climb_Temp1 = RetVal;
						if((func_Non_Crossing_Biased_Climb_Temp1 > Down_Separation)) {
							func_Non_Crossing_Biased_Climb_Upward_preferred = 1;
							if((Other_Tracked_Alt > Own_Tracked_Alt)) {
								RetVal = 1;
								func_Non_Crossing_Biased_Climb_Temp2 = RetVal;
								if((func_Non_Crossing_Biased_Climb_Temp2 > 0) && (func_Non_Crossing_Biased_Climb_Alim > Down_Separation)) {
									func_Non_Crossing_Biased_Climb_Result = 1;
									RetVal = func_Non_Crossing_Biased_Climb_Result;
									func_alt_sep_test_Temp1 = RetVal;
									RetVal = 1;
									func_alt_sep_test_Temp2 = RetVal;
									func_alt_sep_test_Need_upward_RA = 1;
									func_Non_Crossing_Biased_Descend_Upward_preferred = 0;
									func_Non_Crossing_Biased_Descend_Result = 0;
									RetVal = Positive_RA_Alt_Thresh__3;
									func_Non_Crossing_Biased_Descend_Alim = RetVal;
									RetVal = (Up_Separation + 100);
									func_Non_Crossing_Biased_Descend_Temp1 = RetVal;
									func_Non_Crossing_Biased_Descend_Upward_preferred = 1;
									RetVal = 1;
									func_Non_Crossing_Biased_Descend_Temp2 = RetVal;
									RetVal = func_Non_Crossing_Biased_Descend_Result;
									func_alt_sep_test_Temp3 = RetVal;
									goto L4;
								}
								else {
									RetVal = func_Non_Crossing_Biased_Climb_Result;
									func_alt_sep_test_Temp1 = RetVal;
									RetVal = 1;
									func_alt_sep_test_Temp2 = RetVal;
									func_Non_Crossing_Biased_Descend_Upward_preferred = 0;
									func_Non_Crossing_Biased_Descend_Result = 0;
									RetVal = Positive_RA_Alt_Thresh__3;
									func_Non_Crossing_Biased_Descend_Alim = RetVal;
									RetVal = (Up_Separation + 100);
									func_Non_Crossing_Biased_Descend_Temp1 = RetVal;
									func_Non_Crossing_Biased_Descend_Upward_preferred = 1;
									RetVal = 1;
									func_Non_Crossing_Biased_Descend_Temp2 = RetVal;
									func_Non_Crossing_Biased_Descend_Result = 1;
									RetVal = func_Non_Crossing_Biased_Descend_Result;
									func_alt_sep_test_Temp3 = RetVal;
									goto L7;
								}
							}
							else {
								RetVal = 0;
								func_Non_Crossing_Biased_Climb_Temp2 = RetVal;
								func_Non_Crossing_Biased_Climb_Result = 1;
								RetVal = func_Non_Crossing_Biased_Climb_Result;
								func_alt_sep_test_Temp1 = RetVal;
								RetVal = 0;
								func_alt_sep_test_Temp2 = RetVal;
								func_Non_Crossing_Biased_Descend_Upward_preferred = 0;
								func_Non_Crossing_Biased_Descend_Result = 0;
								RetVal = Positive_RA_Alt_Thresh__3;
								func_Non_Crossing_Biased_Descend_Alim = RetVal;
								RetVal = (Up_Separation + 100);
								func_Non_Crossing_Biased_Descend_Temp1 = RetVal;
								func_Non_Crossing_Biased_Descend_Upward_preferred = 1;
								RetVal = 0;
								func_Non_Crossing_Biased_Descend_Temp2 = RetVal;
								if((func_Non_Crossing_Biased_Descend_Temp2 == 0)) {
L38:									RetVal = func_Non_Crossing_Biased_Descend_Result;
									func_alt_sep_test_Temp3 = RetVal;
									goto L12;
								}
								else {
									goto L38;
								}
							}
						}
						else {
							if((Own_Tracked_Alt > Other_Tracked_Alt)) {
								RetVal = 1;
								func_Non_Crossing_Biased_Climb_Temp3 = RetVal;
								if((func_Non_Crossing_Biased_Climb_Temp3 > 0) && (Cur_Vertical_Sep >= 300) && (Up_Separation >= func_Non_Crossing_Biased_Climb_Alim)) {
									func_Non_Crossing_Biased_Climb_Result = 1;
									RetVal = func_Non_Crossing_Biased_Climb_Result;
									func_alt_sep_test_Temp1 = RetVal;
									RetVal = 0;
									func_alt_sep_test_Temp2 = RetVal;
									func_Non_Crossing_Biased_Descend_Upward_preferred = 0;
									func_Non_Crossing_Biased_Descend_Result = 0;
									RetVal = Positive_RA_Alt_Thresh__3;
									func_Non_Crossing_Biased_Descend_Alim = RetVal;
									RetVal = (Up_Separation + 100);
									func_Non_Crossing_Biased_Descend_Temp1 = RetVal;
									RetVal = 1;
									func_Non_Crossing_Biased_Descend_Temp3 = RetVal;
									func_Non_Crossing_Biased_Descend_Result = 1;
									RetVal = func_Non_Crossing_Biased_Descend_Result;
									func_alt_sep_test_Temp3 = RetVal;
									goto L13;
								}
								else {
									RetVal = func_Non_Crossing_Biased_Climb_Result;
									func_alt_sep_test_Temp1 = RetVal;
									RetVal = 0;
									func_alt_sep_test_Temp2 = RetVal;
									if((func_alt_sep_test_Temp1 == 0)) {
L39:										func_Non_Crossing_Biased_Descend_Upward_preferred = 0;
										func_Non_Crossing_Biased_Descend_Result = 0;
										RetVal = Positive_RA_Alt_Thresh__3;
										func_Non_Crossing_Biased_Descend_Alim = RetVal;
										RetVal = (Up_Separation + 100);
										func_Non_Crossing_Biased_Descend_Temp1 = RetVal;
										RetVal = 1;
										func_Non_Crossing_Biased_Descend_Temp3 = RetVal;
										RetVal = func_Non_Crossing_Biased_Descend_Result;
										func_alt_sep_test_Temp3 = RetVal;
										goto L12;
									}
									else {
										goto L39;
									}
								}
							}
							else {
								RetVal = 0;
								func_Non_Crossing_Biased_Climb_Temp3 = RetVal;
								if((func_Non_Crossing_Biased_Climb_Temp3 == 0)) {
L40:									RetVal = func_Non_Crossing_Biased_Climb_Result;
									func_alt_sep_test_Temp1 = RetVal;
									if((Other_Tracked_Alt > Own_Tracked_Alt)) {
										RetVal = 1;
										func_alt_sep_test_Temp2 = RetVal;
										func_Non_Crossing_Biased_Descend_Upward_preferred = 0;
										func_Non_Crossing_Biased_Descend_Result = 0;
										RetVal = Positive_RA_Alt_Thresh__3;
										func_Non_Crossing_Biased_Descend_Alim = RetVal;
										RetVal = (Up_Separation + 100);
										func_Non_Crossing_Biased_Descend_Temp1 = RetVal;
										RetVal = 0;
										func_Non_Crossing_Biased_Descend_Temp3 = RetVal;
										func_Non_Crossing_Biased_Descend_Result = 1;
										RetVal = func_Non_Crossing_Biased_Descend_Result;
										func_alt_sep_test_Temp3 = RetVal;
										goto L7;
									}
									else {
										RetVal = 0;
										func_alt_sep_test_Temp2 = RetVal;
										if((func_alt_sep_test_Temp1 == 0)) {
L41:											func_Non_Crossing_Biased_Descend_Upward_preferred = 0;
											func_Non_Crossing_Biased_Descend_Result = 0;
											RetVal = Positive_RA_Alt_Thresh__3;
											func_Non_Crossing_Biased_Descend_Alim = RetVal;
											RetVal = (Up_Separation + 100);
											func_Non_Crossing_Biased_Descend_Temp1 = RetVal;
											RetVal = 0;
											func_Non_Crossing_Biased_Descend_Temp3 = RetVal;
											func_Non_Crossing_Biased_Descend_Result = 1;
											RetVal = func_Non_Crossing_Biased_Descend_Result;
											func_alt_sep_test_Temp3 = RetVal;
											goto L17;
										}
										else {
											goto L41;
										}
									}
								}
								else {
									goto L40;
								}
							}
						}
					}
					else if((1 > Climb_Inhibit)) {
						RetVal = Up_Separation;
						func_Non_Crossing_Biased_Climb_Temp1 = RetVal;
						if((func_Non_Crossing_Biased_Climb_Temp1 > Down_Separation)) {
							func_Non_Crossing_Biased_Climb_Upward_preferred = 1;
							if((Other_Tracked_Alt > Own_Tracked_Alt)) {
								RetVal = 1;
								func_Non_Crossing_Biased_Climb_Temp2 = RetVal;
								if((func_Non_Crossing_Biased_Climb_Temp2 > 0) && (func_Non_Crossing_Biased_Climb_Alim > Down_Separation)) {
									func_Non_Crossing_Biased_Climb_Result = 1;
									RetVal = func_Non_Crossing_Biased_Climb_Result;
									func_alt_sep_test_Temp1 = RetVal;
									RetVal = 1;
									func_alt_sep_test_Temp2 = RetVal;
									func_alt_sep_test_Need_upward_RA = 1;
									func_Non_Crossing_Biased_Descend_Upward_preferred = 0;
									func_Non_Crossing_Biased_Descend_Result = 0;
									RetVal = Positive_RA_Alt_Thresh__3;
									func_Non_Crossing_Biased_Descend_Alim = RetVal;
									RetVal = Up_Separation;
									func_Non_Crossing_Biased_Descend_Temp1 = RetVal;
									func_Non_Crossing_Biased_Descend_Upward_preferred = 1;
									RetVal = 1;
									func_Non_Crossing_Biased_Descend_Temp2 = RetVal;
									RetVal = func_Non_Crossing_Biased_Descend_Result;
									func_alt_sep_test_Temp3 = RetVal;
									goto L4;
								}
								else {
									RetVal = func_Non_Crossing_Biased_Climb_Result;
									func_alt_sep_test_Temp1 = RetVal;
									RetVal = 1;
									func_alt_sep_test_Temp2 = RetVal;
									func_Non_Crossing_Biased_Descend_Upward_preferred = 0;
									func_Non_Crossing_Biased_Descend_Result = 0;
									RetVal = Positive_RA_Alt_Thresh__3;
									func_Non_Crossing_Biased_Descend_Alim = RetVal;
									RetVal = Up_Separation;
									func_Non_Crossing_Biased_Descend_Temp1 = RetVal;
									func_Non_Crossing_Biased_Descend_Upward_preferred = 1;
									RetVal = 1;
									func_Non_Crossing_Biased_Descend_Temp2 = RetVal;
									func_Non_Crossing_Biased_Descend_Result = 1;
									RetVal = func_Non_Crossing_Biased_Descend_Result;
									func_alt_sep_test_Temp3 = RetVal;
									goto L7;
								}
							}
							else {
								RetVal = 0;
								func_Non_Crossing_Biased_Climb_Temp2 = RetVal;
								func_Non_Crossing_Biased_Climb_Result = 1;
								RetVal = func_Non_Crossing_Biased_Climb_Result;
								func_alt_sep_test_Temp1 = RetVal;
								RetVal = 0;
								func_alt_sep_test_Temp2 = RetVal;
								func_Non_Crossing_Biased_Descend_Upward_preferred = 0;
								func_Non_Crossing_Biased_Descend_Result = 0;
								RetVal = Positive_RA_Alt_Thresh__3;
								func_Non_Crossing_Biased_Descend_Alim = RetVal;
								RetVal = Up_Separation;
								func_Non_Crossing_Biased_Descend_Temp1 = RetVal;
								func_Non_Crossing_Biased_Descend_Upward_preferred = 1;
								RetVal = 0;
								func_Non_Crossing_Biased_Descend_Temp2 = RetVal;
								if((func_Non_Crossing_Biased_Descend_Temp2 == 0)) {
L42:									RetVal = func_Non_Crossing_Biased_Descend_Result;
									func_alt_sep_test_Temp3 = RetVal;
									goto L12;
								}
								else {
									goto L42;
								}
							}
						}
						else {
							if((Own_Tracked_Alt > Other_Tracked_Alt)) {
								RetVal = 1;
								func_Non_Crossing_Biased_Climb_Temp3 = RetVal;
								if((func_Non_Crossing_Biased_Climb_Temp3 > 0) && (Cur_Vertical_Sep >= 300) && (Up_Separation >= func_Non_Crossing_Biased_Climb_Alim)) {
									func_Non_Crossing_Biased_Climb_Result = 1;
									RetVal = func_Non_Crossing_Biased_Climb_Result;
									func_alt_sep_test_Temp1 = RetVal;
									RetVal = 0;
									func_alt_sep_test_Temp2 = RetVal;
									func_Non_Crossing_Biased_Descend_Upward_preferred = 0;
									func_Non_Crossing_Biased_Descend_Result = 0;
									RetVal = Positive_RA_Alt_Thresh__3;
									func_Non_Crossing_Biased_Descend_Alim = RetVal;
									RetVal = Up_Separation;
									func_Non_Crossing_Biased_Descend_Temp1 = RetVal;
									RetVal = 1;
									func_Non_Crossing_Biased_Descend_Temp3 = RetVal;
									func_Non_Crossing_Biased_Descend_Result = 1;
									RetVal = func_Non_Crossing_Biased_Descend_Result;
									func_alt_sep_test_Temp3 = RetVal;
									goto L13;
								}
								else {
									RetVal = func_Non_Crossing_Biased_Climb_Result;
									func_alt_sep_test_Temp1 = RetVal;
									RetVal = 0;
									func_alt_sep_test_Temp2 = RetVal;
									if((func_alt_sep_test_Temp1 == 0)) {
L43:										func_Non_Crossing_Biased_Descend_Upward_preferred = 0;
										func_Non_Crossing_Biased_Descend_Result = 0;
										RetVal = Positive_RA_Alt_Thresh__3;
										func_Non_Crossing_Biased_Descend_Alim = RetVal;
										RetVal = Up_Separation;
										func_Non_Crossing_Biased_Descend_Temp1 = RetVal;
										RetVal = 1;
										func_Non_Crossing_Biased_Descend_Temp3 = RetVal;
										RetVal = func_Non_Crossing_Biased_Descend_Result;
										func_alt_sep_test_Temp3 = RetVal;
										goto L12;
									}
									else {
										goto L43;
									}
								}
							}
							else {
								RetVal = 0;
								func_Non_Crossing_Biased_Climb_Temp3 = RetVal;
								if((func_Non_Crossing_Biased_Climb_Temp3 == 0)) {
L44:									RetVal = func_Non_Crossing_Biased_Climb_Result;
									func_alt_sep_test_Temp1 = RetVal;
									if((Other_Tracked_Alt > Own_Tracked_Alt)) {
										RetVal = 1;
										func_alt_sep_test_Temp2 = RetVal;
										func_Non_Crossing_Biased_Descend_Upward_preferred = 0;
										func_Non_Crossing_Biased_Descend_Result = 0;
										RetVal = Positive_RA_Alt_Thresh__3;
										func_Non_Crossing_Biased_Descend_Alim = RetVal;
										RetVal = Up_Separation;
										func_Non_Crossing_Biased_Descend_Temp1 = RetVal;
										RetVal = 0;
										func_Non_Crossing_Biased_Descend_Temp3 = RetVal;
										func_Non_Crossing_Biased_Descend_Result = 1;
										RetVal = func_Non_Crossing_Biased_Descend_Result;
										func_alt_sep_test_Temp3 = RetVal;
										goto L7;
									}
									else {
										RetVal = 0;
										func_alt_sep_test_Temp2 = RetVal;
										if((func_alt_sep_test_Temp1 == 0)) {
L45:											func_Non_Crossing_Biased_Descend_Upward_preferred = 0;
											func_Non_Crossing_Biased_Descend_Result = 0;
											RetVal = Positive_RA_Alt_Thresh__3;
											func_Non_Crossing_Biased_Descend_Alim = RetVal;
											RetVal = Up_Separation;
											func_Non_Crossing_Biased_Descend_Temp1 = RetVal;
											RetVal = 0;
											func_Non_Crossing_Biased_Descend_Temp3 = RetVal;
											func_Non_Crossing_Biased_Descend_Result = 1;
											RetVal = func_Non_Crossing_Biased_Descend_Result;
											func_alt_sep_test_Temp3 = RetVal;
											goto L17;
										}
										else {
											goto L45;
										}
									}
								}
								else {
									goto L44;
								}
							}
						}
					}
					else {
						RetVal = Up_Separation;
						func_Non_Crossing_Biased_Climb_Temp1 = RetVal;
						if((func_Non_Crossing_Biased_Climb_Temp1 > Down_Separation)) {
							func_Non_Crossing_Biased_Climb_Upward_preferred = 1;
							if((Other_Tracked_Alt > Own_Tracked_Alt)) {
								RetVal = 1;
								func_Non_Crossing_Biased_Climb_Temp2 = RetVal;
								if((func_Non_Crossing_Biased_Climb_Temp2 > 0) && (func_Non_Crossing_Biased_Climb_Alim > Down_Separation)) {
									func_Non_Crossing_Biased_Climb_Result = 1;
									RetVal = func_Non_Crossing_Biased_Climb_Result;
									func_alt_sep_test_Temp1 = RetVal;
									RetVal = 1;
									func_alt_sep_test_Temp2 = RetVal;
									func_alt_sep_test_Need_upward_RA = 1;
									func_Non_Crossing_Biased_Descend_Upward_preferred = 0;
									func_Non_Crossing_Biased_Descend_Result = 0;
									RetVal = Positive_RA_Alt_Thresh__3;
									func_Non_Crossing_Biased_Descend_Alim = RetVal;
									RetVal = Up_Separation;
									func_Non_Crossing_Biased_Descend_Temp1 = RetVal;
									func_Non_Crossing_Biased_Descend_Upward_preferred = 1;
									RetVal = 1;
									func_Non_Crossing_Biased_Descend_Temp2 = RetVal;
									RetVal = func_Non_Crossing_Biased_Descend_Result;
									func_alt_sep_test_Temp3 = RetVal;
									goto L4;
								}
								else {
									RetVal = func_Non_Crossing_Biased_Climb_Result;
									func_alt_sep_test_Temp1 = RetVal;
									RetVal = 1;
									func_alt_sep_test_Temp2 = RetVal;
									func_Non_Crossing_Biased_Descend_Upward_preferred = 0;
									func_Non_Crossing_Biased_Descend_Result = 0;
									RetVal = Positive_RA_Alt_Thresh__3;
									func_Non_Crossing_Biased_Descend_Alim = RetVal;
									RetVal = Up_Separation;
									func_Non_Crossing_Biased_Descend_Temp1 = RetVal;
									func_Non_Crossing_Biased_Descend_Upward_preferred = 1;
									RetVal = 1;
									func_Non_Crossing_Biased_Descend_Temp2 = RetVal;
									func_Non_Crossing_Biased_Descend_Result = 1;
									RetVal = func_Non_Crossing_Biased_Descend_Result;
									func_alt_sep_test_Temp3 = RetVal;
									goto L7;
								}
							}
							else {
								RetVal = 0;
								func_Non_Crossing_Biased_Climb_Temp2 = RetVal;
								func_Non_Crossing_Biased_Climb_Result = 1;
								RetVal = func_Non_Crossing_Biased_Climb_Result;
								func_alt_sep_test_Temp1 = RetVal;
								RetVal = 0;
								func_alt_sep_test_Temp2 = RetVal;
								func_Non_Crossing_Biased_Descend_Upward_preferred = 0;
								func_Non_Crossing_Biased_Descend_Result = 0;
								RetVal = Positive_RA_Alt_Thresh__3;
								func_Non_Crossing_Biased_Descend_Alim = RetVal;
								RetVal = Up_Separation;
								func_Non_Crossing_Biased_Descend_Temp1 = RetVal;
								func_Non_Crossing_Biased_Descend_Upward_preferred = 1;
								RetVal = 0;
								func_Non_Crossing_Biased_Descend_Temp2 = RetVal;
								if((func_Non_Crossing_Biased_Descend_Temp2 == 0)) {
L46:									RetVal = func_Non_Crossing_Biased_Descend_Result;
									func_alt_sep_test_Temp3 = RetVal;
									goto L12;
								}
								else {
									goto L46;
								}
							}
						}
						else {
							if((Own_Tracked_Alt > Other_Tracked_Alt)) {
								RetVal = 1;
								func_Non_Crossing_Biased_Climb_Temp3 = RetVal;
								if((func_Non_Crossing_Biased_Climb_Temp3 > 0) && (Cur_Vertical_Sep >= 300) && (Up_Separation >= func_Non_Crossing_Biased_Climb_Alim)) {
									func_Non_Crossing_Biased_Climb_Result = 1;
									RetVal = func_Non_Crossing_Biased_Climb_Result;
									func_alt_sep_test_Temp1 = RetVal;
									RetVal = 0;
									func_alt_sep_test_Temp2 = RetVal;
									func_Non_Crossing_Biased_Descend_Upward_preferred = 0;
									func_Non_Crossing_Biased_Descend_Result = 0;
									RetVal = Positive_RA_Alt_Thresh__3;
									func_Non_Crossing_Biased_Descend_Alim = RetVal;
									RetVal = Up_Separation;
									func_Non_Crossing_Biased_Descend_Temp1 = RetVal;
									RetVal = 1;
									func_Non_Crossing_Biased_Descend_Temp3 = RetVal;
									func_Non_Crossing_Biased_Descend_Result = 1;
									RetVal = func_Non_Crossing_Biased_Descend_Result;
									func_alt_sep_test_Temp3 = RetVal;
									goto L13;
								}
								else {
									RetVal = func_Non_Crossing_Biased_Climb_Result;
									func_alt_sep_test_Temp1 = RetVal;
									RetVal = 0;
									func_alt_sep_test_Temp2 = RetVal;
									if((func_alt_sep_test_Temp1 == 0)) {
L47:										func_Non_Crossing_Biased_Descend_Upward_preferred = 0;
										func_Non_Crossing_Biased_Descend_Result = 0;
										RetVal = Positive_RA_Alt_Thresh__3;
										func_Non_Crossing_Biased_Descend_Alim = RetVal;
										RetVal = Up_Separation;
										func_Non_Crossing_Biased_Descend_Temp1 = RetVal;
										RetVal = 1;
										func_Non_Crossing_Biased_Descend_Temp3 = RetVal;
										RetVal = func_Non_Crossing_Biased_Descend_Result;
										func_alt_sep_test_Temp3 = RetVal;
										goto L12;
									}
									else {
										goto L47;
									}
								}
							}
							else {
								RetVal = 0;
								func_Non_Crossing_Biased_Climb_Temp3 = RetVal;
								if((func_Non_Crossing_Biased_Climb_Temp3 == 0)) {
L48:									RetVal = func_Non_Crossing_Biased_Climb_Result;
									func_alt_sep_test_Temp1 = RetVal;
									if((Other_Tracked_Alt > Own_Tracked_Alt)) {
										RetVal = 1;
										func_alt_sep_test_Temp2 = RetVal;
										func_Non_Crossing_Biased_Descend_Upward_preferred = 0;
										func_Non_Crossing_Biased_Descend_Result = 0;
										RetVal = Positive_RA_Alt_Thresh__3;
										func_Non_Crossing_Biased_Descend_Alim = RetVal;
										RetVal = Up_Separation;
										func_Non_Crossing_Biased_Descend_Temp1 = RetVal;
										RetVal = 0;
										func_Non_Crossing_Biased_Descend_Temp3 = RetVal;
										func_Non_Crossing_Biased_Descend_Result = 1;
										RetVal = func_Non_Crossing_Biased_Descend_Result;
										func_alt_sep_test_Temp3 = RetVal;
										goto L7;
									}
									else {
										RetVal = 0;
										func_alt_sep_test_Temp2 = RetVal;
										if((func_alt_sep_test_Temp1 == 0)) {
L49:											func_Non_Crossing_Biased_Descend_Upward_preferred = 0;
											func_Non_Crossing_Biased_Descend_Result = 0;
											RetVal = Positive_RA_Alt_Thresh__3;
											func_Non_Crossing_Biased_Descend_Alim = RetVal;
											RetVal = Up_Separation;
											func_Non_Crossing_Biased_Descend_Temp1 = RetVal;
											RetVal = 0;
											func_Non_Crossing_Biased_Descend_Temp3 = RetVal;
											func_Non_Crossing_Biased_Descend_Result = 1;
											RetVal = func_Non_Crossing_Biased_Descend_Result;
											func_alt_sep_test_Temp3 = RetVal;
											goto L17;
										}
										else {
											goto L49;
										}
									}
								}
								else {
									goto L48;
								}
							}
						}
					}
				}
				else if((0 > Two_of_Three_Reports_Valid) && (Other_RAC == 0)) {
					goto L36;
				}
				else if((Two_of_Three_Reports_Valid == 0)) {
					goto L26;
				}
				else if((0 > Other_RAC)) {
					goto L26;
				}
				else {
					goto L26;
				}
			}
			else if((0 > Other_Capability)) {
L50:				if((Two_of_Three_Reports_Valid > 0) && (Other_RAC == 0)) {
L51:					func_alt_sep_test_Intent_not_known = 1;
					func_alt_sep_test_Alt_sep = 0;
					goto L37;
				}
				else if((0 > Two_of_Three_Reports_Valid) && (Other_RAC == 0)) {
					goto L51;
				}
				else if((Two_of_Three_Reports_Valid == 0)) {
L52:					func_alt_sep_test_Alt_sep = 0;
					goto L37;
				}
				else if((0 > Other_RAC)) {
					goto L52;
				}
				else {
					goto L52;
				}
			}
			else {
				goto L50;
			}
		}
		else if((0 > High_Confidence) && (600 >= Own_Tracked_Alt_Rate) && (Cur_Vertical_Sep > 600)) {
			goto L35;
		}
		else if((High_Confidence == 0)) {
			goto L30;
		}
		else if((Own_Tracked_Alt_Rate > 600)) {
			goto L30;
		}
		else {
			goto L30;
		}
	}
	else {
		if((Alt_Layer_Value == 1)) {
			RetVal = Positive_RA_Alt_Thresh__1;
			func_alt_sep_test_Alim = RetVal;
			if((High_Confidence > 0) && (600 >= Own_Tracked_Alt_Rate) && (Cur_Vertical_Sep > 600)) {
L53:				func_alt_sep_test_Enabled = 1;
				if((Other_Capability == 0)) {
					func_alt_sep_test_Tcas_equipped = 1;
					if((Two_of_Three_Reports_Valid > 0) && (Other_RAC == 0)) {
L54:						func_alt_sep_test_Intent_not_known = 1;
						func_alt_sep_test_Alt_sep = 0;
L55:						func_Non_Crossing_Biased_Climb_Upward_preferred = 0;
						func_Non_Crossing_Biased_Climb_Result = 0;
						RetVal = Positive_RA_Alt_Thresh__1;
						func_Non_Crossing_Biased_Climb_Alim = RetVal;
						if((Climb_Inhibit == 1)) {
							RetVal = (Up_Separation + 100);
							func_Non_Crossing_Biased_Climb_Temp1 = RetVal;
							if((func_Non_Crossing_Biased_Climb_Temp1 > Down_Separation)) {
								func_Non_Crossing_Biased_Climb_Upward_preferred = 1;
								if((Other_Tracked_Alt > Own_Tracked_Alt)) {
									RetVal = 1;
									func_Non_Crossing_Biased_Climb_Temp2 = RetVal;
									if((func_Non_Crossing_Biased_Climb_Temp2 > 0) && (func_Non_Crossing_Biased_Climb_Alim > Down_Separation)) {
										func_Non_Crossing_Biased_Climb_Result = 1;
										RetVal = func_Non_Crossing_Biased_Climb_Result;
										func_alt_sep_test_Temp1 = RetVal;
										RetVal = 1;
										func_alt_sep_test_Temp2 = RetVal;
										func_alt_sep_test_Need_upward_RA = 1;
										func_Non_Crossing_Biased_Descend_Upward_preferred = 0;
										func_Non_Crossing_Biased_Descend_Result = 0;
										RetVal = Positive_RA_Alt_Thresh__1;
										func_Non_Crossing_Biased_Descend_Alim = RetVal;
										RetVal = (Up_Separation + 100);
										func_Non_Crossing_Biased_Descend_Temp1 = RetVal;
										func_Non_Crossing_Biased_Descend_Upward_preferred = 1;
										RetVal = 1;
										func_Non_Crossing_Biased_Descend_Temp2 = RetVal;
										RetVal = func_Non_Crossing_Biased_Descend_Result;
										func_alt_sep_test_Temp3 = RetVal;
										goto L4;
									}
									else {
										RetVal = func_Non_Crossing_Biased_Climb_Result;
										func_alt_sep_test_Temp1 = RetVal;
										RetVal = 1;
										func_alt_sep_test_Temp2 = RetVal;
										func_Non_Crossing_Biased_Descend_Upward_preferred = 0;
										func_Non_Crossing_Biased_Descend_Result = 0;
										RetVal = Positive_RA_Alt_Thresh__1;
										func_Non_Crossing_Biased_Descend_Alim = RetVal;
										RetVal = (Up_Separation + 100);
										func_Non_Crossing_Biased_Descend_Temp1 = RetVal;
										func_Non_Crossing_Biased_Descend_Upward_preferred = 1;
										RetVal = 1;
										func_Non_Crossing_Biased_Descend_Temp2 = RetVal;
										func_Non_Crossing_Biased_Descend_Result = 1;
										RetVal = func_Non_Crossing_Biased_Descend_Result;
										func_alt_sep_test_Temp3 = RetVal;
										goto L7;
									}
								}
								else {
									RetVal = 0;
									func_Non_Crossing_Biased_Climb_Temp2 = RetVal;
									func_Non_Crossing_Biased_Climb_Result = 1;
									RetVal = func_Non_Crossing_Biased_Climb_Result;
									func_alt_sep_test_Temp1 = RetVal;
									RetVal = 0;
									func_alt_sep_test_Temp2 = RetVal;
									func_Non_Crossing_Biased_Descend_Upward_preferred = 0;
									func_Non_Crossing_Biased_Descend_Result = 0;
									RetVal = Positive_RA_Alt_Thresh__1;
									func_Non_Crossing_Biased_Descend_Alim = RetVal;
									RetVal = (Up_Separation + 100);
									func_Non_Crossing_Biased_Descend_Temp1 = RetVal;
									func_Non_Crossing_Biased_Descend_Upward_preferred = 1;
									RetVal = 0;
									func_Non_Crossing_Biased_Descend_Temp2 = RetVal;
									if((func_Non_Crossing_Biased_Descend_Temp2 == 0)) {
L56:										RetVal = func_Non_Crossing_Biased_Descend_Result;
										func_alt_sep_test_Temp3 = RetVal;
										goto L12;
									}
									else {
										goto L56;
									}
								}
							}
							else {
								if((Own_Tracked_Alt > Other_Tracked_Alt)) {
									RetVal = 1;
									func_Non_Crossing_Biased_Climb_Temp3 = RetVal;
									if((func_Non_Crossing_Biased_Climb_Temp3 > 0) && (Cur_Vertical_Sep >= 300) && (Up_Separation >= func_Non_Crossing_Biased_Climb_Alim)) {
										func_Non_Crossing_Biased_Climb_Result = 1;
										RetVal = func_Non_Crossing_Biased_Climb_Result;
										func_alt_sep_test_Temp1 = RetVal;
										RetVal = 0;
										func_alt_sep_test_Temp2 = RetVal;
										func_Non_Crossing_Biased_Descend_Upward_preferred = 0;
										func_Non_Crossing_Biased_Descend_Result = 0;
										RetVal = Positive_RA_Alt_Thresh__1;
										func_Non_Crossing_Biased_Descend_Alim = RetVal;
										RetVal = (Up_Separation + 100);
										func_Non_Crossing_Biased_Descend_Temp1 = RetVal;
										RetVal = 1;
										func_Non_Crossing_Biased_Descend_Temp3 = RetVal;
										func_Non_Crossing_Biased_Descend_Result = 1;
										RetVal = func_Non_Crossing_Biased_Descend_Result;
										func_alt_sep_test_Temp3 = RetVal;
										goto L13;
									}
									else {
										RetVal = func_Non_Crossing_Biased_Climb_Result;
										func_alt_sep_test_Temp1 = RetVal;
										RetVal = 0;
										func_alt_sep_test_Temp2 = RetVal;
										if((func_alt_sep_test_Temp1 == 0)) {
L57:											func_Non_Crossing_Biased_Descend_Upward_preferred = 0;
											func_Non_Crossing_Biased_Descend_Result = 0;
											RetVal = Positive_RA_Alt_Thresh__1;
											func_Non_Crossing_Biased_Descend_Alim = RetVal;
											RetVal = (Up_Separation + 100);
											func_Non_Crossing_Biased_Descend_Temp1 = RetVal;
											RetVal = 1;
											func_Non_Crossing_Biased_Descend_Temp3 = RetVal;
											RetVal = func_Non_Crossing_Biased_Descend_Result;
											func_alt_sep_test_Temp3 = RetVal;
											goto L12;
										}
										else {
											goto L57;
										}
									}
								}
								else {
									RetVal = 0;
									func_Non_Crossing_Biased_Climb_Temp3 = RetVal;
									if((func_Non_Crossing_Biased_Climb_Temp3 == 0)) {
L58:										RetVal = func_Non_Crossing_Biased_Climb_Result;
										func_alt_sep_test_Temp1 = RetVal;
										if((Other_Tracked_Alt > Own_Tracked_Alt)) {
											RetVal = 1;
											func_alt_sep_test_Temp2 = RetVal;
											func_Non_Crossing_Biased_Descend_Upward_preferred = 0;
											func_Non_Crossing_Biased_Descend_Result = 0;
											RetVal = Positive_RA_Alt_Thresh__1;
											func_Non_Crossing_Biased_Descend_Alim = RetVal;
											RetVal = (Up_Separation + 100);
											func_Non_Crossing_Biased_Descend_Temp1 = RetVal;
											RetVal = 0;
											func_Non_Crossing_Biased_Descend_Temp3 = RetVal;
											func_Non_Crossing_Biased_Descend_Result = 1;
											RetVal = func_Non_Crossing_Biased_Descend_Result;
											func_alt_sep_test_Temp3 = RetVal;
											goto L7;
										}
										else {
											RetVal = 0;
											func_alt_sep_test_Temp2 = RetVal;
											if((func_alt_sep_test_Temp1 == 0)) {
L59:												func_Non_Crossing_Biased_Descend_Upward_preferred = 0;
												func_Non_Crossing_Biased_Descend_Result = 0;
												RetVal = Positive_RA_Alt_Thresh__1;
												func_Non_Crossing_Biased_Descend_Alim = RetVal;
												RetVal = (Up_Separation + 100);
												func_Non_Crossing_Biased_Descend_Temp1 = RetVal;
												RetVal = 0;
												func_Non_Crossing_Biased_Descend_Temp3 = RetVal;
												func_Non_Crossing_Biased_Descend_Result = 1;
												RetVal = func_Non_Crossing_Biased_Descend_Result;
												func_alt_sep_test_Temp3 = RetVal;
												goto L17;
											}
											else {
												goto L59;
											}
										}
									}
									else {
										goto L58;
									}
								}
							}
						}
						else if((1 > Climb_Inhibit)) {
							RetVal = Up_Separation;
							func_Non_Crossing_Biased_Climb_Temp1 = RetVal;
							if((func_Non_Crossing_Biased_Climb_Temp1 > Down_Separation)) {
								func_Non_Crossing_Biased_Climb_Upward_preferred = 1;
								if((Other_Tracked_Alt > Own_Tracked_Alt)) {
									RetVal = 1;
									func_Non_Crossing_Biased_Climb_Temp2 = RetVal;
									if((func_Non_Crossing_Biased_Climb_Temp2 > 0) && (func_Non_Crossing_Biased_Climb_Alim > Down_Separation)) {
										func_Non_Crossing_Biased_Climb_Result = 1;
										RetVal = func_Non_Crossing_Biased_Climb_Result;
										func_alt_sep_test_Temp1 = RetVal;
										RetVal = 1;
										func_alt_sep_test_Temp2 = RetVal;
										func_alt_sep_test_Need_upward_RA = 1;
										func_Non_Crossing_Biased_Descend_Upward_preferred = 0;
										func_Non_Crossing_Biased_Descend_Result = 0;
										RetVal = Positive_RA_Alt_Thresh__1;
										func_Non_Crossing_Biased_Descend_Alim = RetVal;
										RetVal = Up_Separation;
										func_Non_Crossing_Biased_Descend_Temp1 = RetVal;
										func_Non_Crossing_Biased_Descend_Upward_preferred = 1;
										RetVal = 1;
										func_Non_Crossing_Biased_Descend_Temp2 = RetVal;
										RetVal = func_Non_Crossing_Biased_Descend_Result;
										func_alt_sep_test_Temp3 = RetVal;
										goto L4;
									}
									else {
										RetVal = func_Non_Crossing_Biased_Climb_Result;
										func_alt_sep_test_Temp1 = RetVal;
										RetVal = 1;
										func_alt_sep_test_Temp2 = RetVal;
										func_Non_Crossing_Biased_Descend_Upward_preferred = 0;
										func_Non_Crossing_Biased_Descend_Result = 0;
										RetVal = Positive_RA_Alt_Thresh__1;
										func_Non_Crossing_Biased_Descend_Alim = RetVal;
										RetVal = Up_Separation;
										func_Non_Crossing_Biased_Descend_Temp1 = RetVal;
										func_Non_Crossing_Biased_Descend_Upward_preferred = 1;
										RetVal = 1;
										func_Non_Crossing_Biased_Descend_Temp2 = RetVal;
										func_Non_Crossing_Biased_Descend_Result = 1;
										RetVal = func_Non_Crossing_Biased_Descend_Result;
										func_alt_sep_test_Temp3 = RetVal;
										goto L7;
									}
								}
								else {
									RetVal = 0;
									func_Non_Crossing_Biased_Climb_Temp2 = RetVal;
									func_Non_Crossing_Biased_Climb_Result = 1;
									RetVal = func_Non_Crossing_Biased_Climb_Result;
									func_alt_sep_test_Temp1 = RetVal;
									RetVal = 0;
									func_alt_sep_test_Temp2 = RetVal;
									func_Non_Crossing_Biased_Descend_Upward_preferred = 0;
									func_Non_Crossing_Biased_Descend_Result = 0;
									RetVal = Positive_RA_Alt_Thresh__1;
									func_Non_Crossing_Biased_Descend_Alim = RetVal;
									RetVal = Up_Separation;
									func_Non_Crossing_Biased_Descend_Temp1 = RetVal;
									func_Non_Crossing_Biased_Descend_Upward_preferred = 1;
									RetVal = 0;
									func_Non_Crossing_Biased_Descend_Temp2 = RetVal;
									if((func_Non_Crossing_Biased_Descend_Temp2 == 0)) {
L60:										RetVal = func_Non_Crossing_Biased_Descend_Result;
										func_alt_sep_test_Temp3 = RetVal;
										goto L12;
									}
									else {
										goto L60;
									}
								}
							}
							else {
								if((Own_Tracked_Alt > Other_Tracked_Alt)) {
									RetVal = 1;
									func_Non_Crossing_Biased_Climb_Temp3 = RetVal;
									if((func_Non_Crossing_Biased_Climb_Temp3 > 0) && (Cur_Vertical_Sep >= 300) && (Up_Separation >= func_Non_Crossing_Biased_Climb_Alim)) {
										func_Non_Crossing_Biased_Climb_Result = 1;
										RetVal = func_Non_Crossing_Biased_Climb_Result;
										func_alt_sep_test_Temp1 = RetVal;
										RetVal = 0;
										func_alt_sep_test_Temp2 = RetVal;
										func_Non_Crossing_Biased_Descend_Upward_preferred = 0;
										func_Non_Crossing_Biased_Descend_Result = 0;
										RetVal = Positive_RA_Alt_Thresh__1;
										func_Non_Crossing_Biased_Descend_Alim = RetVal;
										RetVal = Up_Separation;
										func_Non_Crossing_Biased_Descend_Temp1 = RetVal;
										RetVal = 1;
										func_Non_Crossing_Biased_Descend_Temp3 = RetVal;
										func_Non_Crossing_Biased_Descend_Result = 1;
										RetVal = func_Non_Crossing_Biased_Descend_Result;
										func_alt_sep_test_Temp3 = RetVal;
										goto L13;
									}
									else {
										RetVal = func_Non_Crossing_Biased_Climb_Result;
										func_alt_sep_test_Temp1 = RetVal;
										RetVal = 0;
										func_alt_sep_test_Temp2 = RetVal;
										if((func_alt_sep_test_Temp1 == 0)) {
L61:											func_Non_Crossing_Biased_Descend_Upward_preferred = 0;
											func_Non_Crossing_Biased_Descend_Result = 0;
											RetVal = Positive_RA_Alt_Thresh__1;
											func_Non_Crossing_Biased_Descend_Alim = RetVal;
											RetVal = Up_Separation;
											func_Non_Crossing_Biased_Descend_Temp1 = RetVal;
											RetVal = 1;
											func_Non_Crossing_Biased_Descend_Temp3 = RetVal;
											RetVal = func_Non_Crossing_Biased_Descend_Result;
											func_alt_sep_test_Temp3 = RetVal;
											goto L12;
										}
										else {
											goto L61;
										}
									}
								}
								else {
									RetVal = 0;
									func_Non_Crossing_Biased_Climb_Temp3 = RetVal;
									if((func_Non_Crossing_Biased_Climb_Temp3 == 0)) {
L62:										RetVal = func_Non_Crossing_Biased_Climb_Result;
										func_alt_sep_test_Temp1 = RetVal;
										if((Other_Tracked_Alt > Own_Tracked_Alt)) {
											RetVal = 1;
											func_alt_sep_test_Temp2 = RetVal;
											func_Non_Crossing_Biased_Descend_Upward_preferred = 0;
											func_Non_Crossing_Biased_Descend_Result = 0;
											RetVal = Positive_RA_Alt_Thresh__1;
											func_Non_Crossing_Biased_Descend_Alim = RetVal;
											RetVal = Up_Separation;
											func_Non_Crossing_Biased_Descend_Temp1 = RetVal;
											RetVal = 0;
											func_Non_Crossing_Biased_Descend_Temp3 = RetVal;
											func_Non_Crossing_Biased_Descend_Result = 1;
											RetVal = func_Non_Crossing_Biased_Descend_Result;
											func_alt_sep_test_Temp3 = RetVal;
											goto L7;
										}
										else {
											RetVal = 0;
											func_alt_sep_test_Temp2 = RetVal;
											if((func_alt_sep_test_Temp1 == 0)) {
L63:												func_Non_Crossing_Biased_Descend_Upward_preferred = 0;
												func_Non_Crossing_Biased_Descend_Result = 0;
												RetVal = Positive_RA_Alt_Thresh__1;
												func_Non_Crossing_Biased_Descend_Alim = RetVal;
												RetVal = Up_Separation;
												func_Non_Crossing_Biased_Descend_Temp1 = RetVal;
												RetVal = 0;
												func_Non_Crossing_Biased_Descend_Temp3 = RetVal;
												func_Non_Crossing_Biased_Descend_Result = 1;
												RetVal = func_Non_Crossing_Biased_Descend_Result;
												func_alt_sep_test_Temp3 = RetVal;
												goto L17;
											}
											else {
												goto L63;
											}
										}
									}
									else {
										goto L62;
									}
								}
							}
						}
						else {
							RetVal = Up_Separation;
							func_Non_Crossing_Biased_Climb_Temp1 = RetVal;
							if((func_Non_Crossing_Biased_Climb_Temp1 > Down_Separation)) {
								func_Non_Crossing_Biased_Climb_Upward_preferred = 1;
								if((Other_Tracked_Alt > Own_Tracked_Alt)) {
									RetVal = 1;
									func_Non_Crossing_Biased_Climb_Temp2 = RetVal;
									if((func_Non_Crossing_Biased_Climb_Temp2 > 0) && (func_Non_Crossing_Biased_Climb_Alim > Down_Separation)) {
										func_Non_Crossing_Biased_Climb_Result = 1;
										RetVal = func_Non_Crossing_Biased_Climb_Result;
										func_alt_sep_test_Temp1 = RetVal;
										RetVal = 1;
										func_alt_sep_test_Temp2 = RetVal;
										func_alt_sep_test_Need_upward_RA = 1;
										func_Non_Crossing_Biased_Descend_Upward_preferred = 0;
										func_Non_Crossing_Biased_Descend_Result = 0;
										RetVal = Positive_RA_Alt_Thresh__1;
										func_Non_Crossing_Biased_Descend_Alim = RetVal;
										RetVal = Up_Separation;
										func_Non_Crossing_Biased_Descend_Temp1 = RetVal;
										func_Non_Crossing_Biased_Descend_Upward_preferred = 1;
										RetVal = 1;
										func_Non_Crossing_Biased_Descend_Temp2 = RetVal;
										RetVal = func_Non_Crossing_Biased_Descend_Result;
										func_alt_sep_test_Temp3 = RetVal;
										goto L4;
									}
									else {
										RetVal = func_Non_Crossing_Biased_Climb_Result;
										func_alt_sep_test_Temp1 = RetVal;
										RetVal = 1;
										func_alt_sep_test_Temp2 = RetVal;
										func_Non_Crossing_Biased_Descend_Upward_preferred = 0;
										func_Non_Crossing_Biased_Descend_Result = 0;
										RetVal = Positive_RA_Alt_Thresh__1;
										func_Non_Crossing_Biased_Descend_Alim = RetVal;
										RetVal = Up_Separation;
										func_Non_Crossing_Biased_Descend_Temp1 = RetVal;
										func_Non_Crossing_Biased_Descend_Upward_preferred = 1;
										RetVal = 1;
										func_Non_Crossing_Biased_Descend_Temp2 = RetVal;
										func_Non_Crossing_Biased_Descend_Result = 1;
										RetVal = func_Non_Crossing_Biased_Descend_Result;
										func_alt_sep_test_Temp3 = RetVal;
										goto L7;
									}
								}
								else {
									RetVal = 0;
									func_Non_Crossing_Biased_Climb_Temp2 = RetVal;
									func_Non_Crossing_Biased_Climb_Result = 1;
									RetVal = func_Non_Crossing_Biased_Climb_Result;
									func_alt_sep_test_Temp1 = RetVal;
									RetVal = 0;
									func_alt_sep_test_Temp2 = RetVal;
									func_Non_Crossing_Biased_Descend_Upward_preferred = 0;
									func_Non_Crossing_Biased_Descend_Result = 0;
									RetVal = Positive_RA_Alt_Thresh__1;
									func_Non_Crossing_Biased_Descend_Alim = RetVal;
									RetVal = Up_Separation;
									func_Non_Crossing_Biased_Descend_Temp1 = RetVal;
									func_Non_Crossing_Biased_Descend_Upward_preferred = 1;
									RetVal = 0;
									func_Non_Crossing_Biased_Descend_Temp2 = RetVal;
									if((func_Non_Crossing_Biased_Descend_Temp2 == 0)) {
L64:										RetVal = func_Non_Crossing_Biased_Descend_Result;
										func_alt_sep_test_Temp3 = RetVal;
										goto L12;
									}
									else {
										goto L64;
									}
								}
							}
							else {
								if((Own_Tracked_Alt > Other_Tracked_Alt)) {
									RetVal = 1;
									func_Non_Crossing_Biased_Climb_Temp3 = RetVal;
									if((func_Non_Crossing_Biased_Climb_Temp3 > 0) && (Cur_Vertical_Sep >= 300) && (Up_Separation >= func_Non_Crossing_Biased_Climb_Alim)) {
										func_Non_Crossing_Biased_Climb_Result = 1;
										RetVal = func_Non_Crossing_Biased_Climb_Result;
										func_alt_sep_test_Temp1 = RetVal;
										RetVal = 0;
										func_alt_sep_test_Temp2 = RetVal;
										func_Non_Crossing_Biased_Descend_Upward_preferred = 0;
										func_Non_Crossing_Biased_Descend_Result = 0;
										RetVal = Positive_RA_Alt_Thresh__1;
										func_Non_Crossing_Biased_Descend_Alim = RetVal;
										RetVal = Up_Separation;
										func_Non_Crossing_Biased_Descend_Temp1 = RetVal;
										RetVal = 1;
										func_Non_Crossing_Biased_Descend_Temp3 = RetVal;
										func_Non_Crossing_Biased_Descend_Result = 1;
										RetVal = func_Non_Crossing_Biased_Descend_Result;
										func_alt_sep_test_Temp3 = RetVal;
										goto L13;
									}
									else {
										RetVal = func_Non_Crossing_Biased_Climb_Result;
										func_alt_sep_test_Temp1 = RetVal;
										RetVal = 0;
										func_alt_sep_test_Temp2 = RetVal;
										if((func_alt_sep_test_Temp1 == 0)) {
L65:											func_Non_Crossing_Biased_Descend_Upward_preferred = 0;
											func_Non_Crossing_Biased_Descend_Result = 0;
											RetVal = Positive_RA_Alt_Thresh__1;
											func_Non_Crossing_Biased_Descend_Alim = RetVal;
											RetVal = Up_Separation;
											func_Non_Crossing_Biased_Descend_Temp1 = RetVal;
											RetVal = 1;
											func_Non_Crossing_Biased_Descend_Temp3 = RetVal;
											RetVal = func_Non_Crossing_Biased_Descend_Result;
											func_alt_sep_test_Temp3 = RetVal;
											goto L12;
										}
										else {
											goto L65;
										}
									}
								}
								else {
									RetVal = 0;
									func_Non_Crossing_Biased_Climb_Temp3 = RetVal;
									if((func_Non_Crossing_Biased_Climb_Temp3 == 0)) {
L66:										RetVal = func_Non_Crossing_Biased_Climb_Result;
										func_alt_sep_test_Temp1 = RetVal;
										if((Other_Tracked_Alt > Own_Tracked_Alt)) {
											RetVal = 1;
											func_alt_sep_test_Temp2 = RetVal;
											func_Non_Crossing_Biased_Descend_Upward_preferred = 0;
											func_Non_Crossing_Biased_Descend_Result = 0;
											RetVal = Positive_RA_Alt_Thresh__1;
											func_Non_Crossing_Biased_Descend_Alim = RetVal;
											RetVal = Up_Separation;
											func_Non_Crossing_Biased_Descend_Temp1 = RetVal;
											RetVal = 0;
											func_Non_Crossing_Biased_Descend_Temp3 = RetVal;
											func_Non_Crossing_Biased_Descend_Result = 1;
											RetVal = func_Non_Crossing_Biased_Descend_Result;
											func_alt_sep_test_Temp3 = RetVal;
											goto L7;
										}
										else {
											RetVal = 0;
											func_alt_sep_test_Temp2 = RetVal;
											if((func_alt_sep_test_Temp1 == 0)) {
L67:												func_Non_Crossing_Biased_Descend_Upward_preferred = 0;
												func_Non_Crossing_Biased_Descend_Result = 0;
												RetVal = Positive_RA_Alt_Thresh__1;
												func_Non_Crossing_Biased_Descend_Alim = RetVal;
												RetVal = Up_Separation;
												func_Non_Crossing_Biased_Descend_Temp1 = RetVal;
												RetVal = 0;
												func_Non_Crossing_Biased_Descend_Temp3 = RetVal;
												func_Non_Crossing_Biased_Descend_Result = 1;
												RetVal = func_Non_Crossing_Biased_Descend_Result;
												func_alt_sep_test_Temp3 = RetVal;
												goto L17;
											}
											else {
												goto L67;
											}
										}
									}
									else {
										goto L66;
									}
								}
							}
						}
					}
					else if((0 > Two_of_Three_Reports_Valid) && (Other_RAC == 0)) {
						goto L54;
					}
					else if((Two_of_Three_Reports_Valid == 0)) {
						goto L26;
					}
					else if((0 > Other_RAC)) {
						goto L26;
					}
					else {
						goto L26;
					}
				}
				else if((0 > Other_Capability)) {
L68:					if((Two_of_Three_Reports_Valid > 0) && (Other_RAC == 0)) {
L69:						func_alt_sep_test_Intent_not_known = 1;
						func_alt_sep_test_Alt_sep = 0;
						goto L55;
					}
					else if((0 > Two_of_Three_Reports_Valid) && (Other_RAC == 0)) {
						goto L69;
					}
					else if((Two_of_Three_Reports_Valid == 0)) {
L70:						func_alt_sep_test_Alt_sep = 0;
						goto L55;
					}
					else if((0 > Other_RAC)) {
						goto L70;
					}
					else {
						goto L70;
					}
				}
				else {
					goto L68;
				}
			}
			else if((0 > High_Confidence) && (600 >= Own_Tracked_Alt_Rate) && (Cur_Vertical_Sep > 600)) {
				goto L53;
			}
			else if((High_Confidence == 0)) {
				goto L30;
			}
			else if((Own_Tracked_Alt_Rate > 600)) {
				goto L30;
			}
			else {
				goto L30;
			}
		}
		else if((1 > Alt_Layer_Value)) {
			RetVal = Positive_RA_Alt_Thresh__3;
			func_alt_sep_test_Alim = RetVal;
			if((High_Confidence > 0) && (600 >= Own_Tracked_Alt_Rate) && (Cur_Vertical_Sep > 600)) {
L71:				func_alt_sep_test_Enabled = 1;
				if((Other_Capability == 0)) {
					func_alt_sep_test_Tcas_equipped = 1;
					if((Two_of_Three_Reports_Valid > 0) && (Other_RAC == 0)) {
L72:						func_alt_sep_test_Intent_not_known = 1;
						func_alt_sep_test_Alt_sep = 0;
L73:						func_Non_Crossing_Biased_Climb_Upward_preferred = 0;
						func_Non_Crossing_Biased_Climb_Result = 0;
						RetVal = Positive_RA_Alt_Thresh__3;
						func_Non_Crossing_Biased_Climb_Alim = RetVal;
						if((Climb_Inhibit == 1)) {
							RetVal = (Up_Separation + 100);
							func_Non_Crossing_Biased_Climb_Temp1 = RetVal;
							if((func_Non_Crossing_Biased_Climb_Temp1 > Down_Separation)) {
								func_Non_Crossing_Biased_Climb_Upward_preferred = 1;
								if((Other_Tracked_Alt > Own_Tracked_Alt)) {
									RetVal = 1;
									func_Non_Crossing_Biased_Climb_Temp2 = RetVal;
									if((func_Non_Crossing_Biased_Climb_Temp2 > 0) && (func_Non_Crossing_Biased_Climb_Alim > Down_Separation)) {
										func_Non_Crossing_Biased_Climb_Result = 1;
										RetVal = func_Non_Crossing_Biased_Climb_Result;
										func_alt_sep_test_Temp1 = RetVal;
										RetVal = 1;
										func_alt_sep_test_Temp2 = RetVal;
										func_alt_sep_test_Need_upward_RA = 1;
										func_Non_Crossing_Biased_Descend_Upward_preferred = 0;
										func_Non_Crossing_Biased_Descend_Result = 0;
										RetVal = Positive_RA_Alt_Thresh__3;
										func_Non_Crossing_Biased_Descend_Alim = RetVal;
										RetVal = (Up_Separation + 100);
										func_Non_Crossing_Biased_Descend_Temp1 = RetVal;
										func_Non_Crossing_Biased_Descend_Upward_preferred = 1;
										RetVal = 1;
										func_Non_Crossing_Biased_Descend_Temp2 = RetVal;
										RetVal = func_Non_Crossing_Biased_Descend_Result;
										func_alt_sep_test_Temp3 = RetVal;
										goto L4;
									}
									else {
										RetVal = func_Non_Crossing_Biased_Climb_Result;
										func_alt_sep_test_Temp1 = RetVal;
										RetVal = 1;
										func_alt_sep_test_Temp2 = RetVal;
										func_Non_Crossing_Biased_Descend_Upward_preferred = 0;
										func_Non_Crossing_Biased_Descend_Result = 0;
										RetVal = Positive_RA_Alt_Thresh__3;
										func_Non_Crossing_Biased_Descend_Alim = RetVal;
										RetVal = (Up_Separation + 100);
										func_Non_Crossing_Biased_Descend_Temp1 = RetVal;
										func_Non_Crossing_Biased_Descend_Upward_preferred = 1;
										RetVal = 1;
										func_Non_Crossing_Biased_Descend_Temp2 = RetVal;
										func_Non_Crossing_Biased_Descend_Result = 1;
										RetVal = func_Non_Crossing_Biased_Descend_Result;
										func_alt_sep_test_Temp3 = RetVal;
										goto L7;
									}
								}
								else {
									RetVal = 0;
									func_Non_Crossing_Biased_Climb_Temp2 = RetVal;
									func_Non_Crossing_Biased_Climb_Result = 1;
									RetVal = func_Non_Crossing_Biased_Climb_Result;
									func_alt_sep_test_Temp1 = RetVal;
									RetVal = 0;
									func_alt_sep_test_Temp2 = RetVal;
									func_Non_Crossing_Biased_Descend_Upward_preferred = 0;
									func_Non_Crossing_Biased_Descend_Result = 0;
									RetVal = Positive_RA_Alt_Thresh__3;
									func_Non_Crossing_Biased_Descend_Alim = RetVal;
									RetVal = (Up_Separation + 100);
									func_Non_Crossing_Biased_Descend_Temp1 = RetVal;
									func_Non_Crossing_Biased_Descend_Upward_preferred = 1;
									RetVal = 0;
									func_Non_Crossing_Biased_Descend_Temp2 = RetVal;
									if((func_Non_Crossing_Biased_Descend_Temp2 == 0)) {
L74:										RetVal = func_Non_Crossing_Biased_Descend_Result;
										func_alt_sep_test_Temp3 = RetVal;
										goto L12;
									}
									else {
										goto L74;
									}
								}
							}
							else {
								if((Own_Tracked_Alt > Other_Tracked_Alt)) {
									RetVal = 1;
									func_Non_Crossing_Biased_Climb_Temp3 = RetVal;
									if((func_Non_Crossing_Biased_Climb_Temp3 > 0) && (Cur_Vertical_Sep >= 300) && (Up_Separation >= func_Non_Crossing_Biased_Climb_Alim)) {
										func_Non_Crossing_Biased_Climb_Result = 1;
										RetVal = func_Non_Crossing_Biased_Climb_Result;
										func_alt_sep_test_Temp1 = RetVal;
										RetVal = 0;
										func_alt_sep_test_Temp2 = RetVal;
										func_Non_Crossing_Biased_Descend_Upward_preferred = 0;
										func_Non_Crossing_Biased_Descend_Result = 0;
										RetVal = Positive_RA_Alt_Thresh__3;
										func_Non_Crossing_Biased_Descend_Alim = RetVal;
										RetVal = (Up_Separation + 100);
										func_Non_Crossing_Biased_Descend_Temp1 = RetVal;
										RetVal = 1;
										func_Non_Crossing_Biased_Descend_Temp3 = RetVal;
										func_Non_Crossing_Biased_Descend_Result = 1;
										RetVal = func_Non_Crossing_Biased_Descend_Result;
										func_alt_sep_test_Temp3 = RetVal;
										goto L13;
									}
									else {
										RetVal = func_Non_Crossing_Biased_Climb_Result;
										func_alt_sep_test_Temp1 = RetVal;
										RetVal = 0;
										func_alt_sep_test_Temp2 = RetVal;
										if((func_alt_sep_test_Temp1 == 0)) {
L75:											func_Non_Crossing_Biased_Descend_Upward_preferred = 0;
											func_Non_Crossing_Biased_Descend_Result = 0;
											RetVal = Positive_RA_Alt_Thresh__3;
											func_Non_Crossing_Biased_Descend_Alim = RetVal;
											RetVal = (Up_Separation + 100);
											func_Non_Crossing_Biased_Descend_Temp1 = RetVal;
											RetVal = 1;
											func_Non_Crossing_Biased_Descend_Temp3 = RetVal;
											RetVal = func_Non_Crossing_Biased_Descend_Result;
											func_alt_sep_test_Temp3 = RetVal;
											goto L12;
										}
										else {
											goto L75;
										}
									}
								}
								else {
									RetVal = 0;
									func_Non_Crossing_Biased_Climb_Temp3 = RetVal;
									if((func_Non_Crossing_Biased_Climb_Temp3 == 0)) {
L76:										RetVal = func_Non_Crossing_Biased_Climb_Result;
										func_alt_sep_test_Temp1 = RetVal;
										if((Other_Tracked_Alt > Own_Tracked_Alt)) {
											RetVal = 1;
											func_alt_sep_test_Temp2 = RetVal;
											func_Non_Crossing_Biased_Descend_Upward_preferred = 0;
											func_Non_Crossing_Biased_Descend_Result = 0;
											RetVal = Positive_RA_Alt_Thresh__3;
											func_Non_Crossing_Biased_Descend_Alim = RetVal;
											RetVal = (Up_Separation + 100);
											func_Non_Crossing_Biased_Descend_Temp1 = RetVal;
											RetVal = 0;
											func_Non_Crossing_Biased_Descend_Temp3 = RetVal;
											func_Non_Crossing_Biased_Descend_Result = 1;
											RetVal = func_Non_Crossing_Biased_Descend_Result;
											func_alt_sep_test_Temp3 = RetVal;
											goto L7;
										}
										else {
											RetVal = 0;
											func_alt_sep_test_Temp2 = RetVal;
											if((func_alt_sep_test_Temp1 == 0)) {
L77:												func_Non_Crossing_Biased_Descend_Upward_preferred = 0;
												func_Non_Crossing_Biased_Descend_Result = 0;
												RetVal = Positive_RA_Alt_Thresh__3;
												func_Non_Crossing_Biased_Descend_Alim = RetVal;
												RetVal = (Up_Separation + 100);
												func_Non_Crossing_Biased_Descend_Temp1 = RetVal;
												RetVal = 0;
												func_Non_Crossing_Biased_Descend_Temp3 = RetVal;
												func_Non_Crossing_Biased_Descend_Result = 1;
												RetVal = func_Non_Crossing_Biased_Descend_Result;
												func_alt_sep_test_Temp3 = RetVal;
												goto L17;
											}
											else {
												goto L77;
											}
										}
									}
									else {
										goto L76;
									}
								}
							}
						}
						else if((1 > Climb_Inhibit)) {
							RetVal = Up_Separation;
							func_Non_Crossing_Biased_Climb_Temp1 = RetVal;
							if((func_Non_Crossing_Biased_Climb_Temp1 > Down_Separation)) {
								func_Non_Crossing_Biased_Climb_Upward_preferred = 1;
								if((Other_Tracked_Alt > Own_Tracked_Alt)) {
									RetVal = 1;
									func_Non_Crossing_Biased_Climb_Temp2 = RetVal;
									if((func_Non_Crossing_Biased_Climb_Temp2 > 0) && (func_Non_Crossing_Biased_Climb_Alim > Down_Separation)) {
										func_Non_Crossing_Biased_Climb_Result = 1;
										RetVal = func_Non_Crossing_Biased_Climb_Result;
										func_alt_sep_test_Temp1 = RetVal;
										RetVal = 1;
										func_alt_sep_test_Temp2 = RetVal;
										func_alt_sep_test_Need_upward_RA = 1;
										func_Non_Crossing_Biased_Descend_Upward_preferred = 0;
										func_Non_Crossing_Biased_Descend_Result = 0;
										RetVal = Positive_RA_Alt_Thresh__3;
										func_Non_Crossing_Biased_Descend_Alim = RetVal;
										RetVal = Up_Separation;
										func_Non_Crossing_Biased_Descend_Temp1 = RetVal;
										func_Non_Crossing_Biased_Descend_Upward_preferred = 1;
										RetVal = 1;
										func_Non_Crossing_Biased_Descend_Temp2 = RetVal;
										RetVal = func_Non_Crossing_Biased_Descend_Result;
										func_alt_sep_test_Temp3 = RetVal;
										goto L4;
									}
									else {
										RetVal = func_Non_Crossing_Biased_Climb_Result;
										func_alt_sep_test_Temp1 = RetVal;
										RetVal = 1;
										func_alt_sep_test_Temp2 = RetVal;
										func_Non_Crossing_Biased_Descend_Upward_preferred = 0;
										func_Non_Crossing_Biased_Descend_Result = 0;
										RetVal = Positive_RA_Alt_Thresh__3;
										func_Non_Crossing_Biased_Descend_Alim = RetVal;
										RetVal = Up_Separation;
										func_Non_Crossing_Biased_Descend_Temp1 = RetVal;
										func_Non_Crossing_Biased_Descend_Upward_preferred = 1;
										RetVal = 1;
										func_Non_Crossing_Biased_Descend_Temp2 = RetVal;
										func_Non_Crossing_Biased_Descend_Result = 1;
										RetVal = func_Non_Crossing_Biased_Descend_Result;
										func_alt_sep_test_Temp3 = RetVal;
										goto L7;
									}
								}
								else {
									RetVal = 0;
									func_Non_Crossing_Biased_Climb_Temp2 = RetVal;
									func_Non_Crossing_Biased_Climb_Result = 1;
									RetVal = func_Non_Crossing_Biased_Climb_Result;
									func_alt_sep_test_Temp1 = RetVal;
									RetVal = 0;
									func_alt_sep_test_Temp2 = RetVal;
									func_Non_Crossing_Biased_Descend_Upward_preferred = 0;
									func_Non_Crossing_Biased_Descend_Result = 0;
									RetVal = Positive_RA_Alt_Thresh__3;
									func_Non_Crossing_Biased_Descend_Alim = RetVal;
									RetVal = Up_Separation;
									func_Non_Crossing_Biased_Descend_Temp1 = RetVal;
									func_Non_Crossing_Biased_Descend_Upward_preferred = 1;
									RetVal = 0;
									func_Non_Crossing_Biased_Descend_Temp2 = RetVal;
									if((func_Non_Crossing_Biased_Descend_Temp2 == 0)) {
L78:										RetVal = func_Non_Crossing_Biased_Descend_Result;
										func_alt_sep_test_Temp3 = RetVal;
										goto L12;
									}
									else {
										goto L78;
									}
								}
							}
							else {
								if((Own_Tracked_Alt > Other_Tracked_Alt)) {
									RetVal = 1;
									func_Non_Crossing_Biased_Climb_Temp3 = RetVal;
									if((func_Non_Crossing_Biased_Climb_Temp3 > 0) && (Cur_Vertical_Sep >= 300) && (Up_Separation >= func_Non_Crossing_Biased_Climb_Alim)) {
										func_Non_Crossing_Biased_Climb_Result = 1;
										RetVal = func_Non_Crossing_Biased_Climb_Result;
										func_alt_sep_test_Temp1 = RetVal;
										RetVal = 0;
										func_alt_sep_test_Temp2 = RetVal;
										func_Non_Crossing_Biased_Descend_Upward_preferred = 0;
										func_Non_Crossing_Biased_Descend_Result = 0;
										RetVal = Positive_RA_Alt_Thresh__3;
										func_Non_Crossing_Biased_Descend_Alim = RetVal;
										RetVal = Up_Separation;
										func_Non_Crossing_Biased_Descend_Temp1 = RetVal;
										RetVal = 1;
										func_Non_Crossing_Biased_Descend_Temp3 = RetVal;
										func_Non_Crossing_Biased_Descend_Result = 1;
										RetVal = func_Non_Crossing_Biased_Descend_Result;
										func_alt_sep_test_Temp3 = RetVal;
										goto L13;
									}
									else {
										RetVal = func_Non_Crossing_Biased_Climb_Result;
										func_alt_sep_test_Temp1 = RetVal;
										RetVal = 0;
										func_alt_sep_test_Temp2 = RetVal;
										if((func_alt_sep_test_Temp1 == 0)) {
L79:											func_Non_Crossing_Biased_Descend_Upward_preferred = 0;
											func_Non_Crossing_Biased_Descend_Result = 0;
											RetVal = Positive_RA_Alt_Thresh__3;
											func_Non_Crossing_Biased_Descend_Alim = RetVal;
											RetVal = Up_Separation;
											func_Non_Crossing_Biased_Descend_Temp1 = RetVal;
											RetVal = 1;
											func_Non_Crossing_Biased_Descend_Temp3 = RetVal;
											RetVal = func_Non_Crossing_Biased_Descend_Result;
											func_alt_sep_test_Temp3 = RetVal;
											goto L12;
										}
										else {
											goto L79;
										}
									}
								}
								else {
									RetVal = 0;
									func_Non_Crossing_Biased_Climb_Temp3 = RetVal;
									if((func_Non_Crossing_Biased_Climb_Temp3 == 0)) {
L80:										RetVal = func_Non_Crossing_Biased_Climb_Result;
										func_alt_sep_test_Temp1 = RetVal;
										if((Other_Tracked_Alt > Own_Tracked_Alt)) {
											RetVal = 1;
											func_alt_sep_test_Temp2 = RetVal;
											func_Non_Crossing_Biased_Descend_Upward_preferred = 0;
											func_Non_Crossing_Biased_Descend_Result = 0;
											RetVal = Positive_RA_Alt_Thresh__3;
											func_Non_Crossing_Biased_Descend_Alim = RetVal;
											RetVal = Up_Separation;
											func_Non_Crossing_Biased_Descend_Temp1 = RetVal;
											RetVal = 0;
											func_Non_Crossing_Biased_Descend_Temp3 = RetVal;
											func_Non_Crossing_Biased_Descend_Result = 1;
											RetVal = func_Non_Crossing_Biased_Descend_Result;
											func_alt_sep_test_Temp3 = RetVal;
											goto L7;
										}
										else {
											RetVal = 0;
											func_alt_sep_test_Temp2 = RetVal;
											if((func_alt_sep_test_Temp1 == 0)) {
L81:												func_Non_Crossing_Biased_Descend_Upward_preferred = 0;
												func_Non_Crossing_Biased_Descend_Result = 0;
												RetVal = Positive_RA_Alt_Thresh__3;
												func_Non_Crossing_Biased_Descend_Alim = RetVal;
												RetVal = Up_Separation;
												func_Non_Crossing_Biased_Descend_Temp1 = RetVal;
												RetVal = 0;
												func_Non_Crossing_Biased_Descend_Temp3 = RetVal;
												func_Non_Crossing_Biased_Descend_Result = 1;
												RetVal = func_Non_Crossing_Biased_Descend_Result;
												func_alt_sep_test_Temp3 = RetVal;
												goto L17;
											}
											else {
												goto L81;
											}
										}
									}
									else {
										goto L80;
									}
								}
							}
						}
						else {
							RetVal = Up_Separation;
							func_Non_Crossing_Biased_Climb_Temp1 = RetVal;
							if((func_Non_Crossing_Biased_Climb_Temp1 > Down_Separation)) {
								func_Non_Crossing_Biased_Climb_Upward_preferred = 1;
								if((Other_Tracked_Alt > Own_Tracked_Alt)) {
									RetVal = 1;
									func_Non_Crossing_Biased_Climb_Temp2 = RetVal;
									if((func_Non_Crossing_Biased_Climb_Temp2 > 0) && (func_Non_Crossing_Biased_Climb_Alim > Down_Separation)) {
										func_Non_Crossing_Biased_Climb_Result = 1;
										RetVal = func_Non_Crossing_Biased_Climb_Result;
										func_alt_sep_test_Temp1 = RetVal;
										RetVal = 1;
										func_alt_sep_test_Temp2 = RetVal;
										func_alt_sep_test_Need_upward_RA = 1;
										func_Non_Crossing_Biased_Descend_Upward_preferred = 0;
										func_Non_Crossing_Biased_Descend_Result = 0;
										RetVal = Positive_RA_Alt_Thresh__3;
										func_Non_Crossing_Biased_Descend_Alim = RetVal;
										RetVal = Up_Separation;
										func_Non_Crossing_Biased_Descend_Temp1 = RetVal;
										func_Non_Crossing_Biased_Descend_Upward_preferred = 1;
										RetVal = 1;
										func_Non_Crossing_Biased_Descend_Temp2 = RetVal;
										RetVal = func_Non_Crossing_Biased_Descend_Result;
										func_alt_sep_test_Temp3 = RetVal;
										goto L4;
									}
									else {
										RetVal = func_Non_Crossing_Biased_Climb_Result;
										func_alt_sep_test_Temp1 = RetVal;
										RetVal = 1;
										func_alt_sep_test_Temp2 = RetVal;
										func_Non_Crossing_Biased_Descend_Upward_preferred = 0;
										func_Non_Crossing_Biased_Descend_Result = 0;
										RetVal = Positive_RA_Alt_Thresh__3;
										func_Non_Crossing_Biased_Descend_Alim = RetVal;
										RetVal = Up_Separation;
										func_Non_Crossing_Biased_Descend_Temp1 = RetVal;
										func_Non_Crossing_Biased_Descend_Upward_preferred = 1;
										RetVal = 1;
										func_Non_Crossing_Biased_Descend_Temp2 = RetVal;
										func_Non_Crossing_Biased_Descend_Result = 1;
										RetVal = func_Non_Crossing_Biased_Descend_Result;
										func_alt_sep_test_Temp3 = RetVal;
										goto L7;
									}
								}
								else {
									RetVal = 0;
									func_Non_Crossing_Biased_Climb_Temp2 = RetVal;
									func_Non_Crossing_Biased_Climb_Result = 1;
									RetVal = func_Non_Crossing_Biased_Climb_Result;
									func_alt_sep_test_Temp1 = RetVal;
									RetVal = 0;
									func_alt_sep_test_Temp2 = RetVal;
									func_Non_Crossing_Biased_Descend_Upward_preferred = 0;
									func_Non_Crossing_Biased_Descend_Result = 0;
									RetVal = Positive_RA_Alt_Thresh__3;
									func_Non_Crossing_Biased_Descend_Alim = RetVal;
									RetVal = Up_Separation;
									func_Non_Crossing_Biased_Descend_Temp1 = RetVal;
									func_Non_Crossing_Biased_Descend_Upward_preferred = 1;
									RetVal = 0;
									func_Non_Crossing_Biased_Descend_Temp2 = RetVal;
									if((func_Non_Crossing_Biased_Descend_Temp2 == 0)) {
L82:										RetVal = func_Non_Crossing_Biased_Descend_Result;
										func_alt_sep_test_Temp3 = RetVal;
										goto L12;
									}
									else {
										goto L82;
									}
								}
							}
							else {
								if((Own_Tracked_Alt > Other_Tracked_Alt)) {
									RetVal = 1;
									func_Non_Crossing_Biased_Climb_Temp3 = RetVal;
									if((func_Non_Crossing_Biased_Climb_Temp3 > 0) && (Cur_Vertical_Sep >= 300) && (Up_Separation >= func_Non_Crossing_Biased_Climb_Alim)) {
										func_Non_Crossing_Biased_Climb_Result = 1;
										RetVal = func_Non_Crossing_Biased_Climb_Result;
										func_alt_sep_test_Temp1 = RetVal;
										RetVal = 0;
										func_alt_sep_test_Temp2 = RetVal;
										func_Non_Crossing_Biased_Descend_Upward_preferred = 0;
										func_Non_Crossing_Biased_Descend_Result = 0;
										RetVal = Positive_RA_Alt_Thresh__3;
										func_Non_Crossing_Biased_Descend_Alim = RetVal;
										RetVal = Up_Separation;
										func_Non_Crossing_Biased_Descend_Temp1 = RetVal;
										RetVal = 1;
										func_Non_Crossing_Biased_Descend_Temp3 = RetVal;
										func_Non_Crossing_Biased_Descend_Result = 1;
										RetVal = func_Non_Crossing_Biased_Descend_Result;
										func_alt_sep_test_Temp3 = RetVal;
										goto L13;
									}
									else {
										RetVal = func_Non_Crossing_Biased_Climb_Result;
										func_alt_sep_test_Temp1 = RetVal;
										RetVal = 0;
										func_alt_sep_test_Temp2 = RetVal;
										if((func_alt_sep_test_Temp1 == 0)) {
L83:											func_Non_Crossing_Biased_Descend_Upward_preferred = 0;
											func_Non_Crossing_Biased_Descend_Result = 0;
											RetVal = Positive_RA_Alt_Thresh__3;
											func_Non_Crossing_Biased_Descend_Alim = RetVal;
											RetVal = Up_Separation;
											func_Non_Crossing_Biased_Descend_Temp1 = RetVal;
											RetVal = 1;
											func_Non_Crossing_Biased_Descend_Temp3 = RetVal;
											RetVal = func_Non_Crossing_Biased_Descend_Result;
											func_alt_sep_test_Temp3 = RetVal;
											goto L12;
										}
										else {
											goto L83;
										}
									}
								}
								else {
									RetVal = 0;
									func_Non_Crossing_Biased_Climb_Temp3 = RetVal;
									if((func_Non_Crossing_Biased_Climb_Temp3 == 0)) {
L84:										RetVal = func_Non_Crossing_Biased_Climb_Result;
										func_alt_sep_test_Temp1 = RetVal;
										if((Other_Tracked_Alt > Own_Tracked_Alt)) {
											RetVal = 1;
											func_alt_sep_test_Temp2 = RetVal;
											func_Non_Crossing_Biased_Descend_Upward_preferred = 0;
											func_Non_Crossing_Biased_Descend_Result = 0;
											RetVal = Positive_RA_Alt_Thresh__3;
											func_Non_Crossing_Biased_Descend_Alim = RetVal;
											RetVal = Up_Separation;
											func_Non_Crossing_Biased_Descend_Temp1 = RetVal;
											RetVal = 0;
											func_Non_Crossing_Biased_Descend_Temp3 = RetVal;
											func_Non_Crossing_Biased_Descend_Result = 1;
											RetVal = func_Non_Crossing_Biased_Descend_Result;
											func_alt_sep_test_Temp3 = RetVal;
											goto L7;
										}
										else {
											RetVal = 0;
											func_alt_sep_test_Temp2 = RetVal;
											if((func_alt_sep_test_Temp1 == 0)) {
L85:												func_Non_Crossing_Biased_Descend_Upward_preferred = 0;
												func_Non_Crossing_Biased_Descend_Result = 0;
												RetVal = Positive_RA_Alt_Thresh__3;
												func_Non_Crossing_Biased_Descend_Alim = RetVal;
												RetVal = Up_Separation;
												func_Non_Crossing_Biased_Descend_Temp1 = RetVal;
												RetVal = 0;
												func_Non_Crossing_Biased_Descend_Temp3 = RetVal;
												func_Non_Crossing_Biased_Descend_Result = 1;
												RetVal = func_Non_Crossing_Biased_Descend_Result;
												func_alt_sep_test_Temp3 = RetVal;
												goto L17;
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
					}
					else if((0 > Two_of_Three_Reports_Valid) && (Other_RAC == 0)) {
						goto L72;
					}
					else if((Two_of_Three_Reports_Valid == 0)) {
						goto L26;
					}
					else if((0 > Other_RAC)) {
						goto L26;
					}
					else {
						goto L26;
					}
				}
				else if((0 > Other_Capability)) {
L86:					if((Two_of_Three_Reports_Valid > 0) && (Other_RAC == 0)) {
L87:						func_alt_sep_test_Intent_not_known = 1;
						func_alt_sep_test_Alt_sep = 0;
						goto L73;
					}
					else if((0 > Two_of_Three_Reports_Valid) && (Other_RAC == 0)) {
						goto L87;
					}
					else if((Two_of_Three_Reports_Valid == 0)) {
L88:						func_alt_sep_test_Alt_sep = 0;
						goto L73;
					}
					else if((0 > Other_RAC)) {
						goto L88;
					}
					else {
						goto L88;
					}
				}
				else {
					goto L86;
				}
			}
			else if((0 > High_Confidence) && (600 >= Own_Tracked_Alt_Rate) && (Cur_Vertical_Sep > 600)) {
				goto L71;
			}
			else if((High_Confidence == 0)) {
				goto L30;
			}
			else if((Own_Tracked_Alt_Rate > 600)) {
				goto L30;
			}
			else {
				goto L30;
			}
		}
		else {
			if((Alt_Layer_Value == 2)) {
				RetVal = Positive_RA_Alt_Thresh__2;
				func_alt_sep_test_Alim = RetVal;
				if((High_Confidence > 0) && (600 >= Own_Tracked_Alt_Rate) && (Cur_Vertical_Sep > 600)) {
L89:					func_alt_sep_test_Enabled = 1;
					if((Other_Capability == 0)) {
						func_alt_sep_test_Tcas_equipped = 1;
						if((Two_of_Three_Reports_Valid > 0) && (Other_RAC == 0)) {
L90:							func_alt_sep_test_Intent_not_known = 1;
							func_alt_sep_test_Alt_sep = 0;
L91:							func_Non_Crossing_Biased_Climb_Upward_preferred = 0;
							func_Non_Crossing_Biased_Climb_Result = 0;
							RetVal = Positive_RA_Alt_Thresh__2;
							func_Non_Crossing_Biased_Climb_Alim = RetVal;
							if((Climb_Inhibit == 1)) {
								RetVal = (Up_Separation + 100);
								func_Non_Crossing_Biased_Climb_Temp1 = RetVal;
								if((func_Non_Crossing_Biased_Climb_Temp1 > Down_Separation)) {
									func_Non_Crossing_Biased_Climb_Upward_preferred = 1;
									if((Other_Tracked_Alt > Own_Tracked_Alt)) {
										RetVal = 1;
										func_Non_Crossing_Biased_Climb_Temp2 = RetVal;
										if((func_Non_Crossing_Biased_Climb_Temp2 > 0) && (func_Non_Crossing_Biased_Climb_Alim > Down_Separation)) {
											func_Non_Crossing_Biased_Climb_Result = 1;
											RetVal = func_Non_Crossing_Biased_Climb_Result;
											func_alt_sep_test_Temp1 = RetVal;
											RetVal = 1;
											func_alt_sep_test_Temp2 = RetVal;
											func_alt_sep_test_Need_upward_RA = 1;
											func_Non_Crossing_Biased_Descend_Upward_preferred = 0;
											func_Non_Crossing_Biased_Descend_Result = 0;
											RetVal = Positive_RA_Alt_Thresh__2;
											func_Non_Crossing_Biased_Descend_Alim = RetVal;
											RetVal = (Up_Separation + 100);
											func_Non_Crossing_Biased_Descend_Temp1 = RetVal;
											func_Non_Crossing_Biased_Descend_Upward_preferred = 1;
											RetVal = 1;
											func_Non_Crossing_Biased_Descend_Temp2 = RetVal;
											RetVal = func_Non_Crossing_Biased_Descend_Result;
											func_alt_sep_test_Temp3 = RetVal;
											goto L4;
										}
										else {
											RetVal = func_Non_Crossing_Biased_Climb_Result;
											func_alt_sep_test_Temp1 = RetVal;
											RetVal = 1;
											func_alt_sep_test_Temp2 = RetVal;
											func_Non_Crossing_Biased_Descend_Upward_preferred = 0;
											func_Non_Crossing_Biased_Descend_Result = 0;
											RetVal = Positive_RA_Alt_Thresh__2;
											func_Non_Crossing_Biased_Descend_Alim = RetVal;
											RetVal = (Up_Separation + 100);
											func_Non_Crossing_Biased_Descend_Temp1 = RetVal;
											func_Non_Crossing_Biased_Descend_Upward_preferred = 1;
											RetVal = 1;
											func_Non_Crossing_Biased_Descend_Temp2 = RetVal;
											func_Non_Crossing_Biased_Descend_Result = 1;
											RetVal = func_Non_Crossing_Biased_Descend_Result;
											func_alt_sep_test_Temp3 = RetVal;
											goto L7;
										}
									}
									else {
										RetVal = 0;
										func_Non_Crossing_Biased_Climb_Temp2 = RetVal;
										func_Non_Crossing_Biased_Climb_Result = 1;
										RetVal = func_Non_Crossing_Biased_Climb_Result;
										func_alt_sep_test_Temp1 = RetVal;
										RetVal = 0;
										func_alt_sep_test_Temp2 = RetVal;
										func_Non_Crossing_Biased_Descend_Upward_preferred = 0;
										func_Non_Crossing_Biased_Descend_Result = 0;
										RetVal = Positive_RA_Alt_Thresh__2;
										func_Non_Crossing_Biased_Descend_Alim = RetVal;
										RetVal = (Up_Separation + 100);
										func_Non_Crossing_Biased_Descend_Temp1 = RetVal;
										func_Non_Crossing_Biased_Descend_Upward_preferred = 1;
										RetVal = 0;
										func_Non_Crossing_Biased_Descend_Temp2 = RetVal;
										if((func_Non_Crossing_Biased_Descend_Temp2 == 0)) {
L92:											RetVal = func_Non_Crossing_Biased_Descend_Result;
											func_alt_sep_test_Temp3 = RetVal;
											goto L12;
										}
										else {
											goto L92;
										}
									}
								}
								else {
									if((Own_Tracked_Alt > Other_Tracked_Alt)) {
										RetVal = 1;
										func_Non_Crossing_Biased_Climb_Temp3 = RetVal;
										if((func_Non_Crossing_Biased_Climb_Temp3 > 0) && (Cur_Vertical_Sep >= 300) && (Up_Separation >= func_Non_Crossing_Biased_Climb_Alim)) {
											func_Non_Crossing_Biased_Climb_Result = 1;
											RetVal = func_Non_Crossing_Biased_Climb_Result;
											func_alt_sep_test_Temp1 = RetVal;
											RetVal = 0;
											func_alt_sep_test_Temp2 = RetVal;
											func_Non_Crossing_Biased_Descend_Upward_preferred = 0;
											func_Non_Crossing_Biased_Descend_Result = 0;
											RetVal = Positive_RA_Alt_Thresh__2;
											func_Non_Crossing_Biased_Descend_Alim = RetVal;
											RetVal = (Up_Separation + 100);
											func_Non_Crossing_Biased_Descend_Temp1 = RetVal;
											RetVal = 1;
											func_Non_Crossing_Biased_Descend_Temp3 = RetVal;
											func_Non_Crossing_Biased_Descend_Result = 1;
											RetVal = func_Non_Crossing_Biased_Descend_Result;
											func_alt_sep_test_Temp3 = RetVal;
											goto L13;
										}
										else {
											RetVal = func_Non_Crossing_Biased_Climb_Result;
											func_alt_sep_test_Temp1 = RetVal;
											RetVal = 0;
											func_alt_sep_test_Temp2 = RetVal;
											if((func_alt_sep_test_Temp1 == 0)) {
L93:												func_Non_Crossing_Biased_Descend_Upward_preferred = 0;
												func_Non_Crossing_Biased_Descend_Result = 0;
												RetVal = Positive_RA_Alt_Thresh__2;
												func_Non_Crossing_Biased_Descend_Alim = RetVal;
												RetVal = (Up_Separation + 100);
												func_Non_Crossing_Biased_Descend_Temp1 = RetVal;
												RetVal = 1;
												func_Non_Crossing_Biased_Descend_Temp3 = RetVal;
												RetVal = func_Non_Crossing_Biased_Descend_Result;
												func_alt_sep_test_Temp3 = RetVal;
												goto L12;
											}
											else {
												goto L93;
											}
										}
									}
									else {
										RetVal = 0;
										func_Non_Crossing_Biased_Climb_Temp3 = RetVal;
										if((func_Non_Crossing_Biased_Climb_Temp3 == 0)) {
L94:											RetVal = func_Non_Crossing_Biased_Climb_Result;
											func_alt_sep_test_Temp1 = RetVal;
											if((Other_Tracked_Alt > Own_Tracked_Alt)) {
												RetVal = 1;
												func_alt_sep_test_Temp2 = RetVal;
												func_Non_Crossing_Biased_Descend_Upward_preferred = 0;
												func_Non_Crossing_Biased_Descend_Result = 0;
												RetVal = Positive_RA_Alt_Thresh__2;
												func_Non_Crossing_Biased_Descend_Alim = RetVal;
												RetVal = (Up_Separation + 100);
												func_Non_Crossing_Biased_Descend_Temp1 = RetVal;
												RetVal = 0;
												func_Non_Crossing_Biased_Descend_Temp3 = RetVal;
												func_Non_Crossing_Biased_Descend_Result = 1;
												RetVal = func_Non_Crossing_Biased_Descend_Result;
												func_alt_sep_test_Temp3 = RetVal;
												goto L7;
											}
											else {
												RetVal = 0;
												func_alt_sep_test_Temp2 = RetVal;
												if((func_alt_sep_test_Temp1 == 0)) {
L95:													func_Non_Crossing_Biased_Descend_Upward_preferred = 0;
													func_Non_Crossing_Biased_Descend_Result = 0;
													RetVal = Positive_RA_Alt_Thresh__2;
													func_Non_Crossing_Biased_Descend_Alim = RetVal;
													RetVal = (Up_Separation + 100);
													func_Non_Crossing_Biased_Descend_Temp1 = RetVal;
													RetVal = 0;
													func_Non_Crossing_Biased_Descend_Temp3 = RetVal;
													func_Non_Crossing_Biased_Descend_Result = 1;
													RetVal = func_Non_Crossing_Biased_Descend_Result;
													func_alt_sep_test_Temp3 = RetVal;
													goto L17;
												}
												else {
													goto L95;
												}
											}
										}
										else {
											goto L94;
										}
									}
								}
							}
							else if((1 > Climb_Inhibit)) {
								RetVal = Up_Separation;
								func_Non_Crossing_Biased_Climb_Temp1 = RetVal;
								if((func_Non_Crossing_Biased_Climb_Temp1 > Down_Separation)) {
									func_Non_Crossing_Biased_Climb_Upward_preferred = 1;
									if((Other_Tracked_Alt > Own_Tracked_Alt)) {
										RetVal = 1;
										func_Non_Crossing_Biased_Climb_Temp2 = RetVal;
										if((func_Non_Crossing_Biased_Climb_Temp2 > 0) && (func_Non_Crossing_Biased_Climb_Alim > Down_Separation)) {
											func_Non_Crossing_Biased_Climb_Result = 1;
											RetVal = func_Non_Crossing_Biased_Climb_Result;
											func_alt_sep_test_Temp1 = RetVal;
											RetVal = 1;
											func_alt_sep_test_Temp2 = RetVal;
											func_alt_sep_test_Need_upward_RA = 1;
											func_Non_Crossing_Biased_Descend_Upward_preferred = 0;
											func_Non_Crossing_Biased_Descend_Result = 0;
											RetVal = Positive_RA_Alt_Thresh__2;
											func_Non_Crossing_Biased_Descend_Alim = RetVal;
											RetVal = Up_Separation;
											func_Non_Crossing_Biased_Descend_Temp1 = RetVal;
											func_Non_Crossing_Biased_Descend_Upward_preferred = 1;
											RetVal = 1;
											func_Non_Crossing_Biased_Descend_Temp2 = RetVal;
											RetVal = func_Non_Crossing_Biased_Descend_Result;
											func_alt_sep_test_Temp3 = RetVal;
											goto L4;
										}
										else {
											RetVal = func_Non_Crossing_Biased_Climb_Result;
											func_alt_sep_test_Temp1 = RetVal;
											RetVal = 1;
											func_alt_sep_test_Temp2 = RetVal;
											func_Non_Crossing_Biased_Descend_Upward_preferred = 0;
											func_Non_Crossing_Biased_Descend_Result = 0;
											RetVal = Positive_RA_Alt_Thresh__2;
											func_Non_Crossing_Biased_Descend_Alim = RetVal;
											RetVal = Up_Separation;
											func_Non_Crossing_Biased_Descend_Temp1 = RetVal;
											func_Non_Crossing_Biased_Descend_Upward_preferred = 1;
											RetVal = 1;
											func_Non_Crossing_Biased_Descend_Temp2 = RetVal;
											func_Non_Crossing_Biased_Descend_Result = 1;
											RetVal = func_Non_Crossing_Biased_Descend_Result;
											func_alt_sep_test_Temp3 = RetVal;
											goto L7;
										}
									}
									else {
										RetVal = 0;
										func_Non_Crossing_Biased_Climb_Temp2 = RetVal;
										func_Non_Crossing_Biased_Climb_Result = 1;
										RetVal = func_Non_Crossing_Biased_Climb_Result;
										func_alt_sep_test_Temp1 = RetVal;
										RetVal = 0;
										func_alt_sep_test_Temp2 = RetVal;
										func_Non_Crossing_Biased_Descend_Upward_preferred = 0;
										func_Non_Crossing_Biased_Descend_Result = 0;
										RetVal = Positive_RA_Alt_Thresh__2;
										func_Non_Crossing_Biased_Descend_Alim = RetVal;
										RetVal = Up_Separation;
										func_Non_Crossing_Biased_Descend_Temp1 = RetVal;
										func_Non_Crossing_Biased_Descend_Upward_preferred = 1;
										RetVal = 0;
										func_Non_Crossing_Biased_Descend_Temp2 = RetVal;
										if((func_Non_Crossing_Biased_Descend_Temp2 == 0)) {
L96:											RetVal = func_Non_Crossing_Biased_Descend_Result;
											func_alt_sep_test_Temp3 = RetVal;
											goto L12;
										}
										else {
											goto L96;
										}
									}
								}
								else {
									if((Own_Tracked_Alt > Other_Tracked_Alt)) {
										RetVal = 1;
										func_Non_Crossing_Biased_Climb_Temp3 = RetVal;
										if((func_Non_Crossing_Biased_Climb_Temp3 > 0) && (Cur_Vertical_Sep >= 300) && (Up_Separation >= func_Non_Crossing_Biased_Climb_Alim)) {
											func_Non_Crossing_Biased_Climb_Result = 1;
											RetVal = func_Non_Crossing_Biased_Climb_Result;
											func_alt_sep_test_Temp1 = RetVal;
											RetVal = 0;
											func_alt_sep_test_Temp2 = RetVal;
											func_Non_Crossing_Biased_Descend_Upward_preferred = 0;
											func_Non_Crossing_Biased_Descend_Result = 0;
											RetVal = Positive_RA_Alt_Thresh__2;
											func_Non_Crossing_Biased_Descend_Alim = RetVal;
											RetVal = Up_Separation;
											func_Non_Crossing_Biased_Descend_Temp1 = RetVal;
											RetVal = 1;
											func_Non_Crossing_Biased_Descend_Temp3 = RetVal;
											func_Non_Crossing_Biased_Descend_Result = 1;
											RetVal = func_Non_Crossing_Biased_Descend_Result;
											func_alt_sep_test_Temp3 = RetVal;
											goto L13;
										}
										else {
											RetVal = func_Non_Crossing_Biased_Climb_Result;
											func_alt_sep_test_Temp1 = RetVal;
											RetVal = 0;
											func_alt_sep_test_Temp2 = RetVal;
											if((func_alt_sep_test_Temp1 == 0)) {
L97:												func_Non_Crossing_Biased_Descend_Upward_preferred = 0;
												func_Non_Crossing_Biased_Descend_Result = 0;
												RetVal = Positive_RA_Alt_Thresh__2;
												func_Non_Crossing_Biased_Descend_Alim = RetVal;
												RetVal = Up_Separation;
												func_Non_Crossing_Biased_Descend_Temp1 = RetVal;
												RetVal = 1;
												func_Non_Crossing_Biased_Descend_Temp3 = RetVal;
												RetVal = func_Non_Crossing_Biased_Descend_Result;
												func_alt_sep_test_Temp3 = RetVal;
												goto L12;
											}
											else {
												goto L97;
											}
										}
									}
									else {
										RetVal = 0;
										func_Non_Crossing_Biased_Climb_Temp3 = RetVal;
										if((func_Non_Crossing_Biased_Climb_Temp3 == 0)) {
L98:											RetVal = func_Non_Crossing_Biased_Climb_Result;
											func_alt_sep_test_Temp1 = RetVal;
											if((Other_Tracked_Alt > Own_Tracked_Alt)) {
												RetVal = 1;
												func_alt_sep_test_Temp2 = RetVal;
												func_Non_Crossing_Biased_Descend_Upward_preferred = 0;
												func_Non_Crossing_Biased_Descend_Result = 0;
												RetVal = Positive_RA_Alt_Thresh__2;
												func_Non_Crossing_Biased_Descend_Alim = RetVal;
												RetVal = Up_Separation;
												func_Non_Crossing_Biased_Descend_Temp1 = RetVal;
												RetVal = 0;
												func_Non_Crossing_Biased_Descend_Temp3 = RetVal;
												func_Non_Crossing_Biased_Descend_Result = 1;
												RetVal = func_Non_Crossing_Biased_Descend_Result;
												func_alt_sep_test_Temp3 = RetVal;
												goto L7;
											}
											else {
												RetVal = 0;
												func_alt_sep_test_Temp2 = RetVal;
												if((func_alt_sep_test_Temp1 == 0)) {
L99:													func_Non_Crossing_Biased_Descend_Upward_preferred = 0;
													func_Non_Crossing_Biased_Descend_Result = 0;
													RetVal = Positive_RA_Alt_Thresh__2;
													func_Non_Crossing_Biased_Descend_Alim = RetVal;
													RetVal = Up_Separation;
													func_Non_Crossing_Biased_Descend_Temp1 = RetVal;
													RetVal = 0;
													func_Non_Crossing_Biased_Descend_Temp3 = RetVal;
													func_Non_Crossing_Biased_Descend_Result = 1;
													RetVal = func_Non_Crossing_Biased_Descend_Result;
													func_alt_sep_test_Temp3 = RetVal;
													goto L17;
												}
												else {
													goto L99;
												}
											}
										}
										else {
											goto L98;
										}
									}
								}
							}
							else {
								RetVal = Up_Separation;
								func_Non_Crossing_Biased_Climb_Temp1 = RetVal;
								if((func_Non_Crossing_Biased_Climb_Temp1 > Down_Separation)) {
									func_Non_Crossing_Biased_Climb_Upward_preferred = 1;
									if((Other_Tracked_Alt > Own_Tracked_Alt)) {
										RetVal = 1;
										func_Non_Crossing_Biased_Climb_Temp2 = RetVal;
										if((func_Non_Crossing_Biased_Climb_Temp2 > 0) && (func_Non_Crossing_Biased_Climb_Alim > Down_Separation)) {
											func_Non_Crossing_Biased_Climb_Result = 1;
											RetVal = func_Non_Crossing_Biased_Climb_Result;
											func_alt_sep_test_Temp1 = RetVal;
											RetVal = 1;
											func_alt_sep_test_Temp2 = RetVal;
											func_alt_sep_test_Need_upward_RA = 1;
											func_Non_Crossing_Biased_Descend_Upward_preferred = 0;
											func_Non_Crossing_Biased_Descend_Result = 0;
											RetVal = Positive_RA_Alt_Thresh__2;
											func_Non_Crossing_Biased_Descend_Alim = RetVal;
											RetVal = Up_Separation;
											func_Non_Crossing_Biased_Descend_Temp1 = RetVal;
											func_Non_Crossing_Biased_Descend_Upward_preferred = 1;
											RetVal = 1;
											func_Non_Crossing_Biased_Descend_Temp2 = RetVal;
											RetVal = func_Non_Crossing_Biased_Descend_Result;
											func_alt_sep_test_Temp3 = RetVal;
											goto L4;
										}
										else {
											RetVal = func_Non_Crossing_Biased_Climb_Result;
											func_alt_sep_test_Temp1 = RetVal;
											RetVal = 1;
											func_alt_sep_test_Temp2 = RetVal;
											func_Non_Crossing_Biased_Descend_Upward_preferred = 0;
											func_Non_Crossing_Biased_Descend_Result = 0;
											RetVal = Positive_RA_Alt_Thresh__2;
											func_Non_Crossing_Biased_Descend_Alim = RetVal;
											RetVal = Up_Separation;
											func_Non_Crossing_Biased_Descend_Temp1 = RetVal;
											func_Non_Crossing_Biased_Descend_Upward_preferred = 1;
											RetVal = 1;
											func_Non_Crossing_Biased_Descend_Temp2 = RetVal;
											func_Non_Crossing_Biased_Descend_Result = 1;
											RetVal = func_Non_Crossing_Biased_Descend_Result;
											func_alt_sep_test_Temp3 = RetVal;
											goto L7;
										}
									}
									else {
										RetVal = 0;
										func_Non_Crossing_Biased_Climb_Temp2 = RetVal;
										func_Non_Crossing_Biased_Climb_Result = 1;
										RetVal = func_Non_Crossing_Biased_Climb_Result;
										func_alt_sep_test_Temp1 = RetVal;
										RetVal = 0;
										func_alt_sep_test_Temp2 = RetVal;
										func_Non_Crossing_Biased_Descend_Upward_preferred = 0;
										func_Non_Crossing_Biased_Descend_Result = 0;
										RetVal = Positive_RA_Alt_Thresh__2;
										func_Non_Crossing_Biased_Descend_Alim = RetVal;
										RetVal = Up_Separation;
										func_Non_Crossing_Biased_Descend_Temp1 = RetVal;
										func_Non_Crossing_Biased_Descend_Upward_preferred = 1;
										RetVal = 0;
										func_Non_Crossing_Biased_Descend_Temp2 = RetVal;
										if((func_Non_Crossing_Biased_Descend_Temp2 == 0)) {
L100:											RetVal = func_Non_Crossing_Biased_Descend_Result;
											func_alt_sep_test_Temp3 = RetVal;
											goto L12;
										}
										else {
											goto L100;
										}
									}
								}
								else {
									if((Own_Tracked_Alt > Other_Tracked_Alt)) {
										RetVal = 1;
										func_Non_Crossing_Biased_Climb_Temp3 = RetVal;
										if((func_Non_Crossing_Biased_Climb_Temp3 > 0) && (Cur_Vertical_Sep >= 300) && (Up_Separation >= func_Non_Crossing_Biased_Climb_Alim)) {
											func_Non_Crossing_Biased_Climb_Result = 1;
											RetVal = func_Non_Crossing_Biased_Climb_Result;
											func_alt_sep_test_Temp1 = RetVal;
											RetVal = 0;
											func_alt_sep_test_Temp2 = RetVal;
											func_Non_Crossing_Biased_Descend_Upward_preferred = 0;
											func_Non_Crossing_Biased_Descend_Result = 0;
											RetVal = Positive_RA_Alt_Thresh__2;
											func_Non_Crossing_Biased_Descend_Alim = RetVal;
											RetVal = Up_Separation;
											func_Non_Crossing_Biased_Descend_Temp1 = RetVal;
											RetVal = 1;
											func_Non_Crossing_Biased_Descend_Temp3 = RetVal;
											func_Non_Crossing_Biased_Descend_Result = 1;
											RetVal = func_Non_Crossing_Biased_Descend_Result;
											func_alt_sep_test_Temp3 = RetVal;
											goto L13;
										}
										else {
											RetVal = func_Non_Crossing_Biased_Climb_Result;
											func_alt_sep_test_Temp1 = RetVal;
											RetVal = 0;
											func_alt_sep_test_Temp2 = RetVal;
											if((func_alt_sep_test_Temp1 == 0)) {
L101:												func_Non_Crossing_Biased_Descend_Upward_preferred = 0;
												func_Non_Crossing_Biased_Descend_Result = 0;
												RetVal = Positive_RA_Alt_Thresh__2;
												func_Non_Crossing_Biased_Descend_Alim = RetVal;
												RetVal = Up_Separation;
												func_Non_Crossing_Biased_Descend_Temp1 = RetVal;
												RetVal = 1;
												func_Non_Crossing_Biased_Descend_Temp3 = RetVal;
												RetVal = func_Non_Crossing_Biased_Descend_Result;
												func_alt_sep_test_Temp3 = RetVal;
												goto L12;
											}
											else {
												goto L101;
											}
										}
									}
									else {
										RetVal = 0;
										func_Non_Crossing_Biased_Climb_Temp3 = RetVal;
										if((func_Non_Crossing_Biased_Climb_Temp3 == 0)) {
L102:											RetVal = func_Non_Crossing_Biased_Climb_Result;
											func_alt_sep_test_Temp1 = RetVal;
											if((Other_Tracked_Alt > Own_Tracked_Alt)) {
												RetVal = 1;
												func_alt_sep_test_Temp2 = RetVal;
												func_Non_Crossing_Biased_Descend_Upward_preferred = 0;
												func_Non_Crossing_Biased_Descend_Result = 0;
												RetVal = Positive_RA_Alt_Thresh__2;
												func_Non_Crossing_Biased_Descend_Alim = RetVal;
												RetVal = Up_Separation;
												func_Non_Crossing_Biased_Descend_Temp1 = RetVal;
												RetVal = 0;
												func_Non_Crossing_Biased_Descend_Temp3 = RetVal;
												func_Non_Crossing_Biased_Descend_Result = 1;
												RetVal = func_Non_Crossing_Biased_Descend_Result;
												func_alt_sep_test_Temp3 = RetVal;
												goto L7;
											}
											else {
												RetVal = 0;
												func_alt_sep_test_Temp2 = RetVal;
												if((func_alt_sep_test_Temp1 == 0)) {
L103:													func_Non_Crossing_Biased_Descend_Upward_preferred = 0;
													func_Non_Crossing_Biased_Descend_Result = 0;
													RetVal = Positive_RA_Alt_Thresh__2;
													func_Non_Crossing_Biased_Descend_Alim = RetVal;
													RetVal = Up_Separation;
													func_Non_Crossing_Biased_Descend_Temp1 = RetVal;
													RetVal = 0;
													func_Non_Crossing_Biased_Descend_Temp3 = RetVal;
													func_Non_Crossing_Biased_Descend_Result = 1;
													RetVal = func_Non_Crossing_Biased_Descend_Result;
													func_alt_sep_test_Temp3 = RetVal;
													goto L17;
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
						}
						else if((0 > Two_of_Three_Reports_Valid) && (Other_RAC == 0)) {
							goto L90;
						}
						else if((Two_of_Three_Reports_Valid == 0)) {
							goto L26;
						}
						else if((0 > Other_RAC)) {
							goto L26;
						}
						else {
							goto L26;
						}
					}
					else if((0 > Other_Capability)) {
L104:						if((Two_of_Three_Reports_Valid > 0) && (Other_RAC == 0)) {
L105:							func_alt_sep_test_Intent_not_known = 1;
							func_alt_sep_test_Alt_sep = 0;
							goto L91;
						}
						else if((0 > Two_of_Three_Reports_Valid) && (Other_RAC == 0)) {
							goto L105;
						}
						else if((Two_of_Three_Reports_Valid == 0)) {
L106:							func_alt_sep_test_Alt_sep = 0;
							goto L91;
						}
						else if((0 > Other_RAC)) {
							goto L106;
						}
						else {
							goto L106;
						}
					}
					else {
						goto L104;
					}
				}
				else if((0 > High_Confidence) && (600 >= Own_Tracked_Alt_Rate) && (Cur_Vertical_Sep > 600)) {
					goto L89;
				}
				else if((High_Confidence == 0)) {
					goto L30;
				}
				else if((Own_Tracked_Alt_Rate > 600)) {
					goto L30;
				}
				else {
					goto L30;
				}
			}
			else if((2 > Alt_Layer_Value)) {
				RetVal = Positive_RA_Alt_Thresh__3;
				func_alt_sep_test_Alim = RetVal;
				if((High_Confidence > 0) && (600 >= Own_Tracked_Alt_Rate) && (Cur_Vertical_Sep > 600)) {
L107:					func_alt_sep_test_Enabled = 1;
					if((Other_Capability == 0)) {
						func_alt_sep_test_Tcas_equipped = 1;
						if((Two_of_Three_Reports_Valid > 0) && (Other_RAC == 0)) {
L108:							func_alt_sep_test_Intent_not_known = 1;
							func_alt_sep_test_Alt_sep = 0;
L109:							func_Non_Crossing_Biased_Climb_Upward_preferred = 0;
							func_Non_Crossing_Biased_Climb_Result = 0;
							RetVal = Positive_RA_Alt_Thresh__3;
							func_Non_Crossing_Biased_Climb_Alim = RetVal;
							if((Climb_Inhibit == 1)) {
								RetVal = (Up_Separation + 100);
								func_Non_Crossing_Biased_Climb_Temp1 = RetVal;
								if((func_Non_Crossing_Biased_Climb_Temp1 > Down_Separation)) {
									func_Non_Crossing_Biased_Climb_Upward_preferred = 1;
									if((Other_Tracked_Alt > Own_Tracked_Alt)) {
										RetVal = 1;
										func_Non_Crossing_Biased_Climb_Temp2 = RetVal;
										if((func_Non_Crossing_Biased_Climb_Temp2 > 0) && (func_Non_Crossing_Biased_Climb_Alim > Down_Separation)) {
											func_Non_Crossing_Biased_Climb_Result = 1;
											RetVal = func_Non_Crossing_Biased_Climb_Result;
											func_alt_sep_test_Temp1 = RetVal;
											RetVal = 1;
											func_alt_sep_test_Temp2 = RetVal;
											func_alt_sep_test_Need_upward_RA = 1;
											func_Non_Crossing_Biased_Descend_Upward_preferred = 0;
											func_Non_Crossing_Biased_Descend_Result = 0;
											RetVal = Positive_RA_Alt_Thresh__3;
											func_Non_Crossing_Biased_Descend_Alim = RetVal;
											RetVal = (Up_Separation + 100);
											func_Non_Crossing_Biased_Descend_Temp1 = RetVal;
											func_Non_Crossing_Biased_Descend_Upward_preferred = 1;
											RetVal = 1;
											func_Non_Crossing_Biased_Descend_Temp2 = RetVal;
											RetVal = func_Non_Crossing_Biased_Descend_Result;
											func_alt_sep_test_Temp3 = RetVal;
											goto L4;
										}
										else {
											RetVal = func_Non_Crossing_Biased_Climb_Result;
											func_alt_sep_test_Temp1 = RetVal;
											RetVal = 1;
											func_alt_sep_test_Temp2 = RetVal;
											func_Non_Crossing_Biased_Descend_Upward_preferred = 0;
											func_Non_Crossing_Biased_Descend_Result = 0;
											RetVal = Positive_RA_Alt_Thresh__3;
											func_Non_Crossing_Biased_Descend_Alim = RetVal;
											RetVal = (Up_Separation + 100);
											func_Non_Crossing_Biased_Descend_Temp1 = RetVal;
											func_Non_Crossing_Biased_Descend_Upward_preferred = 1;
											RetVal = 1;
											func_Non_Crossing_Biased_Descend_Temp2 = RetVal;
											func_Non_Crossing_Biased_Descend_Result = 1;
											RetVal = func_Non_Crossing_Biased_Descend_Result;
											func_alt_sep_test_Temp3 = RetVal;
											goto L7;
										}
									}
									else {
										RetVal = 0;
										func_Non_Crossing_Biased_Climb_Temp2 = RetVal;
										func_Non_Crossing_Biased_Climb_Result = 1;
										RetVal = func_Non_Crossing_Biased_Climb_Result;
										func_alt_sep_test_Temp1 = RetVal;
										RetVal = 0;
										func_alt_sep_test_Temp2 = RetVal;
										func_Non_Crossing_Biased_Descend_Upward_preferred = 0;
										func_Non_Crossing_Biased_Descend_Result = 0;
										RetVal = Positive_RA_Alt_Thresh__3;
										func_Non_Crossing_Biased_Descend_Alim = RetVal;
										RetVal = (Up_Separation + 100);
										func_Non_Crossing_Biased_Descend_Temp1 = RetVal;
										func_Non_Crossing_Biased_Descend_Upward_preferred = 1;
										RetVal = 0;
										func_Non_Crossing_Biased_Descend_Temp2 = RetVal;
										if((func_Non_Crossing_Biased_Descend_Temp2 == 0)) {
L110:											RetVal = func_Non_Crossing_Biased_Descend_Result;
											func_alt_sep_test_Temp3 = RetVal;
											goto L12;
										}
										else {
											goto L110;
										}
									}
								}
								else {
									if((Own_Tracked_Alt > Other_Tracked_Alt)) {
										RetVal = 1;
										func_Non_Crossing_Biased_Climb_Temp3 = RetVal;
										if((func_Non_Crossing_Biased_Climb_Temp3 > 0) && (Cur_Vertical_Sep >= 300) && (Up_Separation >= func_Non_Crossing_Biased_Climb_Alim)) {
											func_Non_Crossing_Biased_Climb_Result = 1;
											RetVal = func_Non_Crossing_Biased_Climb_Result;
											func_alt_sep_test_Temp1 = RetVal;
											RetVal = 0;
											func_alt_sep_test_Temp2 = RetVal;
											func_Non_Crossing_Biased_Descend_Upward_preferred = 0;
											func_Non_Crossing_Biased_Descend_Result = 0;
											RetVal = Positive_RA_Alt_Thresh__3;
											func_Non_Crossing_Biased_Descend_Alim = RetVal;
											RetVal = (Up_Separation + 100);
											func_Non_Crossing_Biased_Descend_Temp1 = RetVal;
											RetVal = 1;
											func_Non_Crossing_Biased_Descend_Temp3 = RetVal;
											func_Non_Crossing_Biased_Descend_Result = 1;
											RetVal = func_Non_Crossing_Biased_Descend_Result;
											func_alt_sep_test_Temp3 = RetVal;
											goto L13;
										}
										else {
											RetVal = func_Non_Crossing_Biased_Climb_Result;
											func_alt_sep_test_Temp1 = RetVal;
											RetVal = 0;
											func_alt_sep_test_Temp2 = RetVal;
											if((func_alt_sep_test_Temp1 == 0)) {
L111:												func_Non_Crossing_Biased_Descend_Upward_preferred = 0;
												func_Non_Crossing_Biased_Descend_Result = 0;
												RetVal = Positive_RA_Alt_Thresh__3;
												func_Non_Crossing_Biased_Descend_Alim = RetVal;
												RetVal = (Up_Separation + 100);
												func_Non_Crossing_Biased_Descend_Temp1 = RetVal;
												RetVal = 1;
												func_Non_Crossing_Biased_Descend_Temp3 = RetVal;
												RetVal = func_Non_Crossing_Biased_Descend_Result;
												func_alt_sep_test_Temp3 = RetVal;
												goto L12;
											}
											else {
												goto L111;
											}
										}
									}
									else {
										RetVal = 0;
										func_Non_Crossing_Biased_Climb_Temp3 = RetVal;
										if((func_Non_Crossing_Biased_Climb_Temp3 == 0)) {
L112:											RetVal = func_Non_Crossing_Biased_Climb_Result;
											func_alt_sep_test_Temp1 = RetVal;
											if((Other_Tracked_Alt > Own_Tracked_Alt)) {
												RetVal = 1;
												func_alt_sep_test_Temp2 = RetVal;
												func_Non_Crossing_Biased_Descend_Upward_preferred = 0;
												func_Non_Crossing_Biased_Descend_Result = 0;
												RetVal = Positive_RA_Alt_Thresh__3;
												func_Non_Crossing_Biased_Descend_Alim = RetVal;
												RetVal = (Up_Separation + 100);
												func_Non_Crossing_Biased_Descend_Temp1 = RetVal;
												RetVal = 0;
												func_Non_Crossing_Biased_Descend_Temp3 = RetVal;
												func_Non_Crossing_Biased_Descend_Result = 1;
												RetVal = func_Non_Crossing_Biased_Descend_Result;
												func_alt_sep_test_Temp3 = RetVal;
												goto L7;
											}
											else {
												RetVal = 0;
												func_alt_sep_test_Temp2 = RetVal;
												if((func_alt_sep_test_Temp1 == 0)) {
L113:													func_Non_Crossing_Biased_Descend_Upward_preferred = 0;
													func_Non_Crossing_Biased_Descend_Result = 0;
													RetVal = Positive_RA_Alt_Thresh__3;
													func_Non_Crossing_Biased_Descend_Alim = RetVal;
													RetVal = (Up_Separation + 100);
													func_Non_Crossing_Biased_Descend_Temp1 = RetVal;
													RetVal = 0;
													func_Non_Crossing_Biased_Descend_Temp3 = RetVal;
													func_Non_Crossing_Biased_Descend_Result = 1;
													RetVal = func_Non_Crossing_Biased_Descend_Result;
													func_alt_sep_test_Temp3 = RetVal;
													goto L17;
												}
												else {
													goto L113;
												}
											}
										}
										else {
											goto L112;
										}
									}
								}
							}
							else if((1 > Climb_Inhibit)) {
								RetVal = Up_Separation;
								func_Non_Crossing_Biased_Climb_Temp1 = RetVal;
								if((func_Non_Crossing_Biased_Climb_Temp1 > Down_Separation)) {
									func_Non_Crossing_Biased_Climb_Upward_preferred = 1;
									if((Other_Tracked_Alt > Own_Tracked_Alt)) {
										RetVal = 1;
										func_Non_Crossing_Biased_Climb_Temp2 = RetVal;
										if((func_Non_Crossing_Biased_Climb_Temp2 > 0) && (func_Non_Crossing_Biased_Climb_Alim > Down_Separation)) {
											func_Non_Crossing_Biased_Climb_Result = 1;
											RetVal = func_Non_Crossing_Biased_Climb_Result;
											func_alt_sep_test_Temp1 = RetVal;
											RetVal = 1;
											func_alt_sep_test_Temp2 = RetVal;
											func_alt_sep_test_Need_upward_RA = 1;
											func_Non_Crossing_Biased_Descend_Upward_preferred = 0;
											func_Non_Crossing_Biased_Descend_Result = 0;
											RetVal = Positive_RA_Alt_Thresh__3;
											func_Non_Crossing_Biased_Descend_Alim = RetVal;
											RetVal = Up_Separation;
											func_Non_Crossing_Biased_Descend_Temp1 = RetVal;
											func_Non_Crossing_Biased_Descend_Upward_preferred = 1;
											RetVal = 1;
											func_Non_Crossing_Biased_Descend_Temp2 = RetVal;
											RetVal = func_Non_Crossing_Biased_Descend_Result;
											func_alt_sep_test_Temp3 = RetVal;
											goto L4;
										}
										else {
											RetVal = func_Non_Crossing_Biased_Climb_Result;
											func_alt_sep_test_Temp1 = RetVal;
											RetVal = 1;
											func_alt_sep_test_Temp2 = RetVal;
											func_Non_Crossing_Biased_Descend_Upward_preferred = 0;
											func_Non_Crossing_Biased_Descend_Result = 0;
											RetVal = Positive_RA_Alt_Thresh__3;
											func_Non_Crossing_Biased_Descend_Alim = RetVal;
											RetVal = Up_Separation;
											func_Non_Crossing_Biased_Descend_Temp1 = RetVal;
											func_Non_Crossing_Biased_Descend_Upward_preferred = 1;
											RetVal = 1;
											func_Non_Crossing_Biased_Descend_Temp2 = RetVal;
											func_Non_Crossing_Biased_Descend_Result = 1;
											RetVal = func_Non_Crossing_Biased_Descend_Result;
											func_alt_sep_test_Temp3 = RetVal;
											goto L7;
										}
									}
									else {
										RetVal = 0;
										func_Non_Crossing_Biased_Climb_Temp2 = RetVal;
										func_Non_Crossing_Biased_Climb_Result = 1;
										RetVal = func_Non_Crossing_Biased_Climb_Result;
										func_alt_sep_test_Temp1 = RetVal;
										RetVal = 0;
										func_alt_sep_test_Temp2 = RetVal;
										func_Non_Crossing_Biased_Descend_Upward_preferred = 0;
										func_Non_Crossing_Biased_Descend_Result = 0;
										RetVal = Positive_RA_Alt_Thresh__3;
										func_Non_Crossing_Biased_Descend_Alim = RetVal;
										RetVal = Up_Separation;
										func_Non_Crossing_Biased_Descend_Temp1 = RetVal;
										func_Non_Crossing_Biased_Descend_Upward_preferred = 1;
										RetVal = 0;
										func_Non_Crossing_Biased_Descend_Temp2 = RetVal;
										if((func_Non_Crossing_Biased_Descend_Temp2 == 0)) {
L114:											RetVal = func_Non_Crossing_Biased_Descend_Result;
											func_alt_sep_test_Temp3 = RetVal;
											goto L12;
										}
										else {
											goto L114;
										}
									}
								}
								else {
									if((Own_Tracked_Alt > Other_Tracked_Alt)) {
										RetVal = 1;
										func_Non_Crossing_Biased_Climb_Temp3 = RetVal;
										if((func_Non_Crossing_Biased_Climb_Temp3 > 0) && (Cur_Vertical_Sep >= 300) && (Up_Separation >= func_Non_Crossing_Biased_Climb_Alim)) {
											func_Non_Crossing_Biased_Climb_Result = 1;
											RetVal = func_Non_Crossing_Biased_Climb_Result;
											func_alt_sep_test_Temp1 = RetVal;
											RetVal = 0;
											func_alt_sep_test_Temp2 = RetVal;
											func_Non_Crossing_Biased_Descend_Upward_preferred = 0;
											func_Non_Crossing_Biased_Descend_Result = 0;
											RetVal = Positive_RA_Alt_Thresh__3;
											func_Non_Crossing_Biased_Descend_Alim = RetVal;
											RetVal = Up_Separation;
											func_Non_Crossing_Biased_Descend_Temp1 = RetVal;
											RetVal = 1;
											func_Non_Crossing_Biased_Descend_Temp3 = RetVal;
											func_Non_Crossing_Biased_Descend_Result = 1;
											RetVal = func_Non_Crossing_Biased_Descend_Result;
											func_alt_sep_test_Temp3 = RetVal;
											goto L13;
										}
										else {
											RetVal = func_Non_Crossing_Biased_Climb_Result;
											func_alt_sep_test_Temp1 = RetVal;
											RetVal = 0;
											func_alt_sep_test_Temp2 = RetVal;
											if((func_alt_sep_test_Temp1 == 0)) {
L115:												func_Non_Crossing_Biased_Descend_Upward_preferred = 0;
												func_Non_Crossing_Biased_Descend_Result = 0;
												RetVal = Positive_RA_Alt_Thresh__3;
												func_Non_Crossing_Biased_Descend_Alim = RetVal;
												RetVal = Up_Separation;
												func_Non_Crossing_Biased_Descend_Temp1 = RetVal;
												RetVal = 1;
												func_Non_Crossing_Biased_Descend_Temp3 = RetVal;
												RetVal = func_Non_Crossing_Biased_Descend_Result;
												func_alt_sep_test_Temp3 = RetVal;
												goto L12;
											}
											else {
												goto L115;
											}
										}
									}
									else {
										RetVal = 0;
										func_Non_Crossing_Biased_Climb_Temp3 = RetVal;
										if((func_Non_Crossing_Biased_Climb_Temp3 == 0)) {
L116:											RetVal = func_Non_Crossing_Biased_Climb_Result;
											func_alt_sep_test_Temp1 = RetVal;
											if((Other_Tracked_Alt > Own_Tracked_Alt)) {
												RetVal = 1;
												func_alt_sep_test_Temp2 = RetVal;
												func_Non_Crossing_Biased_Descend_Upward_preferred = 0;
												func_Non_Crossing_Biased_Descend_Result = 0;
												RetVal = Positive_RA_Alt_Thresh__3;
												func_Non_Crossing_Biased_Descend_Alim = RetVal;
												RetVal = Up_Separation;
												func_Non_Crossing_Biased_Descend_Temp1 = RetVal;
												RetVal = 0;
												func_Non_Crossing_Biased_Descend_Temp3 = RetVal;
												func_Non_Crossing_Biased_Descend_Result = 1;
												RetVal = func_Non_Crossing_Biased_Descend_Result;
												func_alt_sep_test_Temp3 = RetVal;
												goto L7;
											}
											else {
												RetVal = 0;
												func_alt_sep_test_Temp2 = RetVal;
												if((func_alt_sep_test_Temp1 == 0)) {
L117:													func_Non_Crossing_Biased_Descend_Upward_preferred = 0;
													func_Non_Crossing_Biased_Descend_Result = 0;
													RetVal = Positive_RA_Alt_Thresh__3;
													func_Non_Crossing_Biased_Descend_Alim = RetVal;
													RetVal = Up_Separation;
													func_Non_Crossing_Biased_Descend_Temp1 = RetVal;
													RetVal = 0;
													func_Non_Crossing_Biased_Descend_Temp3 = RetVal;
													func_Non_Crossing_Biased_Descend_Result = 1;
													RetVal = func_Non_Crossing_Biased_Descend_Result;
													func_alt_sep_test_Temp3 = RetVal;
													goto L17;
												}
												else {
													goto L117;
												}
											}
										}
										else {
											goto L116;
										}
									}
								}
							}
							else {
								RetVal = Up_Separation;
								func_Non_Crossing_Biased_Climb_Temp1 = RetVal;
								if((func_Non_Crossing_Biased_Climb_Temp1 > Down_Separation)) {
									func_Non_Crossing_Biased_Climb_Upward_preferred = 1;
									if((Other_Tracked_Alt > Own_Tracked_Alt)) {
										RetVal = 1;
										func_Non_Crossing_Biased_Climb_Temp2 = RetVal;
										if((func_Non_Crossing_Biased_Climb_Temp2 > 0) && (func_Non_Crossing_Biased_Climb_Alim > Down_Separation)) {
											func_Non_Crossing_Biased_Climb_Result = 1;
											RetVal = func_Non_Crossing_Biased_Climb_Result;
											func_alt_sep_test_Temp1 = RetVal;
											RetVal = 1;
											func_alt_sep_test_Temp2 = RetVal;
											func_alt_sep_test_Need_upward_RA = 1;
											func_Non_Crossing_Biased_Descend_Upward_preferred = 0;
											func_Non_Crossing_Biased_Descend_Result = 0;
											RetVal = Positive_RA_Alt_Thresh__3;
											func_Non_Crossing_Biased_Descend_Alim = RetVal;
											RetVal = Up_Separation;
											func_Non_Crossing_Biased_Descend_Temp1 = RetVal;
											func_Non_Crossing_Biased_Descend_Upward_preferred = 1;
											RetVal = 1;
											func_Non_Crossing_Biased_Descend_Temp2 = RetVal;
											RetVal = func_Non_Crossing_Biased_Descend_Result;
											func_alt_sep_test_Temp3 = RetVal;
											goto L4;
										}
										else {
											RetVal = func_Non_Crossing_Biased_Climb_Result;
											func_alt_sep_test_Temp1 = RetVal;
											RetVal = 1;
											func_alt_sep_test_Temp2 = RetVal;
											func_Non_Crossing_Biased_Descend_Upward_preferred = 0;
											func_Non_Crossing_Biased_Descend_Result = 0;
											RetVal = Positive_RA_Alt_Thresh__3;
											func_Non_Crossing_Biased_Descend_Alim = RetVal;
											RetVal = Up_Separation;
											func_Non_Crossing_Biased_Descend_Temp1 = RetVal;
											func_Non_Crossing_Biased_Descend_Upward_preferred = 1;
											RetVal = 1;
											func_Non_Crossing_Biased_Descend_Temp2 = RetVal;
											func_Non_Crossing_Biased_Descend_Result = 1;
											RetVal = func_Non_Crossing_Biased_Descend_Result;
											func_alt_sep_test_Temp3 = RetVal;
											goto L7;
										}
									}
									else {
										RetVal = 0;
										func_Non_Crossing_Biased_Climb_Temp2 = RetVal;
										func_Non_Crossing_Biased_Climb_Result = 1;
										RetVal = func_Non_Crossing_Biased_Climb_Result;
										func_alt_sep_test_Temp1 = RetVal;
										RetVal = 0;
										func_alt_sep_test_Temp2 = RetVal;
										func_Non_Crossing_Biased_Descend_Upward_preferred = 0;
										func_Non_Crossing_Biased_Descend_Result = 0;
										RetVal = Positive_RA_Alt_Thresh__3;
										func_Non_Crossing_Biased_Descend_Alim = RetVal;
										RetVal = Up_Separation;
										func_Non_Crossing_Biased_Descend_Temp1 = RetVal;
										func_Non_Crossing_Biased_Descend_Upward_preferred = 1;
										RetVal = 0;
										func_Non_Crossing_Biased_Descend_Temp2 = RetVal;
										if((func_Non_Crossing_Biased_Descend_Temp2 == 0)) {
L118:											RetVal = func_Non_Crossing_Biased_Descend_Result;
											func_alt_sep_test_Temp3 = RetVal;
											goto L12;
										}
										else {
											goto L118;
										}
									}
								}
								else {
									if((Own_Tracked_Alt > Other_Tracked_Alt)) {
										RetVal = 1;
										func_Non_Crossing_Biased_Climb_Temp3 = RetVal;
										if((func_Non_Crossing_Biased_Climb_Temp3 > 0) && (Cur_Vertical_Sep >= 300) && (Up_Separation >= func_Non_Crossing_Biased_Climb_Alim)) {
											func_Non_Crossing_Biased_Climb_Result = 1;
											RetVal = func_Non_Crossing_Biased_Climb_Result;
											func_alt_sep_test_Temp1 = RetVal;
											RetVal = 0;
											func_alt_sep_test_Temp2 = RetVal;
											func_Non_Crossing_Biased_Descend_Upward_preferred = 0;
											func_Non_Crossing_Biased_Descend_Result = 0;
											RetVal = Positive_RA_Alt_Thresh__3;
											func_Non_Crossing_Biased_Descend_Alim = RetVal;
											RetVal = Up_Separation;
											func_Non_Crossing_Biased_Descend_Temp1 = RetVal;
											RetVal = 1;
											func_Non_Crossing_Biased_Descend_Temp3 = RetVal;
											func_Non_Crossing_Biased_Descend_Result = 1;
											RetVal = func_Non_Crossing_Biased_Descend_Result;
											func_alt_sep_test_Temp3 = RetVal;
											goto L13;
										}
										else {
											RetVal = func_Non_Crossing_Biased_Climb_Result;
											func_alt_sep_test_Temp1 = RetVal;
											RetVal = 0;
											func_alt_sep_test_Temp2 = RetVal;
											if((func_alt_sep_test_Temp1 == 0)) {
L119:												func_Non_Crossing_Biased_Descend_Upward_preferred = 0;
												func_Non_Crossing_Biased_Descend_Result = 0;
												RetVal = Positive_RA_Alt_Thresh__3;
												func_Non_Crossing_Biased_Descend_Alim = RetVal;
												RetVal = Up_Separation;
												func_Non_Crossing_Biased_Descend_Temp1 = RetVal;
												RetVal = 1;
												func_Non_Crossing_Biased_Descend_Temp3 = RetVal;
												RetVal = func_Non_Crossing_Biased_Descend_Result;
												func_alt_sep_test_Temp3 = RetVal;
												goto L12;
											}
											else {
												goto L119;
											}
										}
									}
									else {
										RetVal = 0;
										func_Non_Crossing_Biased_Climb_Temp3 = RetVal;
										if((func_Non_Crossing_Biased_Climb_Temp3 == 0)) {
L120:											RetVal = func_Non_Crossing_Biased_Climb_Result;
											func_alt_sep_test_Temp1 = RetVal;
											if((Other_Tracked_Alt > Own_Tracked_Alt)) {
												RetVal = 1;
												func_alt_sep_test_Temp2 = RetVal;
												func_Non_Crossing_Biased_Descend_Upward_preferred = 0;
												func_Non_Crossing_Biased_Descend_Result = 0;
												RetVal = Positive_RA_Alt_Thresh__3;
												func_Non_Crossing_Biased_Descend_Alim = RetVal;
												RetVal = Up_Separation;
												func_Non_Crossing_Biased_Descend_Temp1 = RetVal;
												RetVal = 0;
												func_Non_Crossing_Biased_Descend_Temp3 = RetVal;
												func_Non_Crossing_Biased_Descend_Result = 1;
												RetVal = func_Non_Crossing_Biased_Descend_Result;
												func_alt_sep_test_Temp3 = RetVal;
												goto L7;
											}
											else {
												RetVal = 0;
												func_alt_sep_test_Temp2 = RetVal;
												if((func_alt_sep_test_Temp1 == 0)) {
L121:													func_Non_Crossing_Biased_Descend_Upward_preferred = 0;
													func_Non_Crossing_Biased_Descend_Result = 0;
													RetVal = Positive_RA_Alt_Thresh__3;
													func_Non_Crossing_Biased_Descend_Alim = RetVal;
													RetVal = Up_Separation;
													func_Non_Crossing_Biased_Descend_Temp1 = RetVal;
													RetVal = 0;
													func_Non_Crossing_Biased_Descend_Temp3 = RetVal;
													func_Non_Crossing_Biased_Descend_Result = 1;
													RetVal = func_Non_Crossing_Biased_Descend_Result;
													func_alt_sep_test_Temp3 = RetVal;
													goto L17;
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
						else if((0 > Two_of_Three_Reports_Valid) && (Other_RAC == 0)) {
							goto L108;
						}
						else if((Two_of_Three_Reports_Valid == 0)) {
							goto L26;
						}
						else if((0 > Other_RAC)) {
							goto L26;
						}
						else {
							goto L26;
						}
					}
					else if((0 > Other_Capability)) {
L122:						if((Two_of_Three_Reports_Valid > 0) && (Other_RAC == 0)) {
L123:							func_alt_sep_test_Intent_not_known = 1;
							func_alt_sep_test_Alt_sep = 0;
							goto L109;
						}
						else if((0 > Two_of_Three_Reports_Valid) && (Other_RAC == 0)) {
							goto L123;
						}
						else if((Two_of_Three_Reports_Valid == 0)) {
L124:							func_alt_sep_test_Alt_sep = 0;
							goto L109;
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
				else if((0 > High_Confidence) && (600 >= Own_Tracked_Alt_Rate) && (Cur_Vertical_Sep > 600)) {
					goto L107;
				}
				else if((High_Confidence == 0)) {
					goto L30;
				}
				else if((Own_Tracked_Alt_Rate > 600)) {
					goto L30;
				}
				else {
					goto L30;
				}
			}
			else {
				RetVal = Positive_RA_Alt_Thresh__3;
				func_alt_sep_test_Alim = RetVal;
				if((High_Confidence > 0) && (600 >= Own_Tracked_Alt_Rate) && (Cur_Vertical_Sep > 600)) {
L125:					func_alt_sep_test_Enabled = 1;
					if((Other_Capability == 0)) {
						func_alt_sep_test_Tcas_equipped = 1;
						if((Two_of_Three_Reports_Valid > 0) && (Other_RAC == 0)) {
L126:							func_alt_sep_test_Intent_not_known = 1;
							func_alt_sep_test_Alt_sep = 0;
L127:							func_Non_Crossing_Biased_Climb_Upward_preferred = 0;
							func_Non_Crossing_Biased_Climb_Result = 0;
							RetVal = Positive_RA_Alt_Thresh__3;
							func_Non_Crossing_Biased_Climb_Alim = RetVal;
							if((Climb_Inhibit == 1)) {
								RetVal = (Up_Separation + 100);
								func_Non_Crossing_Biased_Climb_Temp1 = RetVal;
								if((func_Non_Crossing_Biased_Climb_Temp1 > Down_Separation)) {
									func_Non_Crossing_Biased_Climb_Upward_preferred = 1;
									if((Other_Tracked_Alt > Own_Tracked_Alt)) {
										RetVal = 1;
										func_Non_Crossing_Biased_Climb_Temp2 = RetVal;
										if((func_Non_Crossing_Biased_Climb_Temp2 > 0) && (func_Non_Crossing_Biased_Climb_Alim > Down_Separation)) {
											func_Non_Crossing_Biased_Climb_Result = 1;
											RetVal = func_Non_Crossing_Biased_Climb_Result;
											func_alt_sep_test_Temp1 = RetVal;
											RetVal = 1;
											func_alt_sep_test_Temp2 = RetVal;
											func_alt_sep_test_Need_upward_RA = 1;
											func_Non_Crossing_Biased_Descend_Upward_preferred = 0;
											func_Non_Crossing_Biased_Descend_Result = 0;
											RetVal = Positive_RA_Alt_Thresh__3;
											func_Non_Crossing_Biased_Descend_Alim = RetVal;
											RetVal = (Up_Separation + 100);
											func_Non_Crossing_Biased_Descend_Temp1 = RetVal;
											func_Non_Crossing_Biased_Descend_Upward_preferred = 1;
											RetVal = 1;
											func_Non_Crossing_Biased_Descend_Temp2 = RetVal;
											RetVal = func_Non_Crossing_Biased_Descend_Result;
											func_alt_sep_test_Temp3 = RetVal;
											goto L4;
										}
										else {
											RetVal = func_Non_Crossing_Biased_Climb_Result;
											func_alt_sep_test_Temp1 = RetVal;
											RetVal = 1;
											func_alt_sep_test_Temp2 = RetVal;
											func_Non_Crossing_Biased_Descend_Upward_preferred = 0;
											func_Non_Crossing_Biased_Descend_Result = 0;
											RetVal = Positive_RA_Alt_Thresh__3;
											func_Non_Crossing_Biased_Descend_Alim = RetVal;
											RetVal = (Up_Separation + 100);
											func_Non_Crossing_Biased_Descend_Temp1 = RetVal;
											func_Non_Crossing_Biased_Descend_Upward_preferred = 1;
											RetVal = 1;
											func_Non_Crossing_Biased_Descend_Temp2 = RetVal;
											func_Non_Crossing_Biased_Descend_Result = 1;
											RetVal = func_Non_Crossing_Biased_Descend_Result;
											func_alt_sep_test_Temp3 = RetVal;
											goto L7;
										}
									}
									else {
										RetVal = 0;
										func_Non_Crossing_Biased_Climb_Temp2 = RetVal;
										func_Non_Crossing_Biased_Climb_Result = 1;
										RetVal = func_Non_Crossing_Biased_Climb_Result;
										func_alt_sep_test_Temp1 = RetVal;
										RetVal = 0;
										func_alt_sep_test_Temp2 = RetVal;
										func_Non_Crossing_Biased_Descend_Upward_preferred = 0;
										func_Non_Crossing_Biased_Descend_Result = 0;
										RetVal = Positive_RA_Alt_Thresh__3;
										func_Non_Crossing_Biased_Descend_Alim = RetVal;
										RetVal = (Up_Separation + 100);
										func_Non_Crossing_Biased_Descend_Temp1 = RetVal;
										func_Non_Crossing_Biased_Descend_Upward_preferred = 1;
										RetVal = 0;
										func_Non_Crossing_Biased_Descend_Temp2 = RetVal;
										if((func_Non_Crossing_Biased_Descend_Temp2 == 0)) {
L128:											RetVal = func_Non_Crossing_Biased_Descend_Result;
											func_alt_sep_test_Temp3 = RetVal;
											goto L12;
										}
										else {
											goto L128;
										}
									}
								}
								else {
									if((Own_Tracked_Alt > Other_Tracked_Alt)) {
										RetVal = 1;
										func_Non_Crossing_Biased_Climb_Temp3 = RetVal;
										if((func_Non_Crossing_Biased_Climb_Temp3 > 0) && (Cur_Vertical_Sep >= 300) && (Up_Separation >= func_Non_Crossing_Biased_Climb_Alim)) {
											func_Non_Crossing_Biased_Climb_Result = 1;
											RetVal = func_Non_Crossing_Biased_Climb_Result;
											func_alt_sep_test_Temp1 = RetVal;
											RetVal = 0;
											func_alt_sep_test_Temp2 = RetVal;
											func_Non_Crossing_Biased_Descend_Upward_preferred = 0;
											func_Non_Crossing_Biased_Descend_Result = 0;
											RetVal = Positive_RA_Alt_Thresh__3;
											func_Non_Crossing_Biased_Descend_Alim = RetVal;
											RetVal = (Up_Separation + 100);
											func_Non_Crossing_Biased_Descend_Temp1 = RetVal;
											RetVal = 1;
											func_Non_Crossing_Biased_Descend_Temp3 = RetVal;
											func_Non_Crossing_Biased_Descend_Result = 1;
											RetVal = func_Non_Crossing_Biased_Descend_Result;
											func_alt_sep_test_Temp3 = RetVal;
											goto L13;
										}
										else {
											RetVal = func_Non_Crossing_Biased_Climb_Result;
											func_alt_sep_test_Temp1 = RetVal;
											RetVal = 0;
											func_alt_sep_test_Temp2 = RetVal;
											if((func_alt_sep_test_Temp1 == 0)) {
L129:												func_Non_Crossing_Biased_Descend_Upward_preferred = 0;
												func_Non_Crossing_Biased_Descend_Result = 0;
												RetVal = Positive_RA_Alt_Thresh__3;
												func_Non_Crossing_Biased_Descend_Alim = RetVal;
												RetVal = (Up_Separation + 100);
												func_Non_Crossing_Biased_Descend_Temp1 = RetVal;
												RetVal = 1;
												func_Non_Crossing_Biased_Descend_Temp3 = RetVal;
												RetVal = func_Non_Crossing_Biased_Descend_Result;
												func_alt_sep_test_Temp3 = RetVal;
												goto L12;
											}
											else {
												goto L129;
											}
										}
									}
									else {
										RetVal = 0;
										func_Non_Crossing_Biased_Climb_Temp3 = RetVal;
										if((func_Non_Crossing_Biased_Climb_Temp3 == 0)) {
L130:											RetVal = func_Non_Crossing_Biased_Climb_Result;
											func_alt_sep_test_Temp1 = RetVal;
											if((Other_Tracked_Alt > Own_Tracked_Alt)) {
												RetVal = 1;
												func_alt_sep_test_Temp2 = RetVal;
												func_Non_Crossing_Biased_Descend_Upward_preferred = 0;
												func_Non_Crossing_Biased_Descend_Result = 0;
												RetVal = Positive_RA_Alt_Thresh__3;
												func_Non_Crossing_Biased_Descend_Alim = RetVal;
												RetVal = (Up_Separation + 100);
												func_Non_Crossing_Biased_Descend_Temp1 = RetVal;
												RetVal = 0;
												func_Non_Crossing_Biased_Descend_Temp3 = RetVal;
												func_Non_Crossing_Biased_Descend_Result = 1;
												RetVal = func_Non_Crossing_Biased_Descend_Result;
												func_alt_sep_test_Temp3 = RetVal;
												goto L7;
											}
											else {
												RetVal = 0;
												func_alt_sep_test_Temp2 = RetVal;
												if((func_alt_sep_test_Temp1 == 0)) {
L131:													func_Non_Crossing_Biased_Descend_Upward_preferred = 0;
													func_Non_Crossing_Biased_Descend_Result = 0;
													RetVal = Positive_RA_Alt_Thresh__3;
													func_Non_Crossing_Biased_Descend_Alim = RetVal;
													RetVal = (Up_Separation + 100);
													func_Non_Crossing_Biased_Descend_Temp1 = RetVal;
													RetVal = 0;
													func_Non_Crossing_Biased_Descend_Temp3 = RetVal;
													func_Non_Crossing_Biased_Descend_Result = 1;
													RetVal = func_Non_Crossing_Biased_Descend_Result;
													func_alt_sep_test_Temp3 = RetVal;
													goto L17;
												}
												else {
													goto L131;
												}
											}
										}
										else {
											goto L130;
										}
									}
								}
							}
							else if((1 > Climb_Inhibit)) {
								RetVal = Up_Separation;
								func_Non_Crossing_Biased_Climb_Temp1 = RetVal;
								if((func_Non_Crossing_Biased_Climb_Temp1 > Down_Separation)) {
									func_Non_Crossing_Biased_Climb_Upward_preferred = 1;
									if((Other_Tracked_Alt > Own_Tracked_Alt)) {
										RetVal = 1;
										func_Non_Crossing_Biased_Climb_Temp2 = RetVal;
										if((func_Non_Crossing_Biased_Climb_Temp2 > 0) && (func_Non_Crossing_Biased_Climb_Alim > Down_Separation)) {
											func_Non_Crossing_Biased_Climb_Result = 1;
											RetVal = func_Non_Crossing_Biased_Climb_Result;
											func_alt_sep_test_Temp1 = RetVal;
											RetVal = 1;
											func_alt_sep_test_Temp2 = RetVal;
											func_alt_sep_test_Need_upward_RA = 1;
											func_Non_Crossing_Biased_Descend_Upward_preferred = 0;
											func_Non_Crossing_Biased_Descend_Result = 0;
											RetVal = Positive_RA_Alt_Thresh__3;
											func_Non_Crossing_Biased_Descend_Alim = RetVal;
											RetVal = Up_Separation;
											func_Non_Crossing_Biased_Descend_Temp1 = RetVal;
											func_Non_Crossing_Biased_Descend_Upward_preferred = 1;
											RetVal = 1;
											func_Non_Crossing_Biased_Descend_Temp2 = RetVal;
											RetVal = func_Non_Crossing_Biased_Descend_Result;
											func_alt_sep_test_Temp3 = RetVal;
											goto L4;
										}
										else {
											RetVal = func_Non_Crossing_Biased_Climb_Result;
											func_alt_sep_test_Temp1 = RetVal;
											RetVal = 1;
											func_alt_sep_test_Temp2 = RetVal;
											func_Non_Crossing_Biased_Descend_Upward_preferred = 0;
											func_Non_Crossing_Biased_Descend_Result = 0;
											RetVal = Positive_RA_Alt_Thresh__3;
											func_Non_Crossing_Biased_Descend_Alim = RetVal;
											RetVal = Up_Separation;
											func_Non_Crossing_Biased_Descend_Temp1 = RetVal;
											func_Non_Crossing_Biased_Descend_Upward_preferred = 1;
											RetVal = 1;
											func_Non_Crossing_Biased_Descend_Temp2 = RetVal;
											func_Non_Crossing_Biased_Descend_Result = 1;
											RetVal = func_Non_Crossing_Biased_Descend_Result;
											func_alt_sep_test_Temp3 = RetVal;
											goto L7;
										}
									}
									else {
										RetVal = 0;
										func_Non_Crossing_Biased_Climb_Temp2 = RetVal;
										func_Non_Crossing_Biased_Climb_Result = 1;
										RetVal = func_Non_Crossing_Biased_Climb_Result;
										func_alt_sep_test_Temp1 = RetVal;
										RetVal = 0;
										func_alt_sep_test_Temp2 = RetVal;
										func_Non_Crossing_Biased_Descend_Upward_preferred = 0;
										func_Non_Crossing_Biased_Descend_Result = 0;
										RetVal = Positive_RA_Alt_Thresh__3;
										func_Non_Crossing_Biased_Descend_Alim = RetVal;
										RetVal = Up_Separation;
										func_Non_Crossing_Biased_Descend_Temp1 = RetVal;
										func_Non_Crossing_Biased_Descend_Upward_preferred = 1;
										RetVal = 0;
										func_Non_Crossing_Biased_Descend_Temp2 = RetVal;
										if((func_Non_Crossing_Biased_Descend_Temp2 == 0)) {
L132:											RetVal = func_Non_Crossing_Biased_Descend_Result;
											func_alt_sep_test_Temp3 = RetVal;
											goto L12;
										}
										else {
											goto L132;
										}
									}
								}
								else {
									if((Own_Tracked_Alt > Other_Tracked_Alt)) {
										RetVal = 1;
										func_Non_Crossing_Biased_Climb_Temp3 = RetVal;
										if((func_Non_Crossing_Biased_Climb_Temp3 > 0) && (Cur_Vertical_Sep >= 300) && (Up_Separation >= func_Non_Crossing_Biased_Climb_Alim)) {
											func_Non_Crossing_Biased_Climb_Result = 1;
											RetVal = func_Non_Crossing_Biased_Climb_Result;
											func_alt_sep_test_Temp1 = RetVal;
											RetVal = 0;
											func_alt_sep_test_Temp2 = RetVal;
											func_Non_Crossing_Biased_Descend_Upward_preferred = 0;
											func_Non_Crossing_Biased_Descend_Result = 0;
											RetVal = Positive_RA_Alt_Thresh__3;
											func_Non_Crossing_Biased_Descend_Alim = RetVal;
											RetVal = Up_Separation;
											func_Non_Crossing_Biased_Descend_Temp1 = RetVal;
											RetVal = 1;
											func_Non_Crossing_Biased_Descend_Temp3 = RetVal;
											func_Non_Crossing_Biased_Descend_Result = 1;
											RetVal = func_Non_Crossing_Biased_Descend_Result;
											func_alt_sep_test_Temp3 = RetVal;
											goto L13;
										}
										else {
											RetVal = func_Non_Crossing_Biased_Climb_Result;
											func_alt_sep_test_Temp1 = RetVal;
											RetVal = 0;
											func_alt_sep_test_Temp2 = RetVal;
											if((func_alt_sep_test_Temp1 == 0)) {
L133:												func_Non_Crossing_Biased_Descend_Upward_preferred = 0;
												func_Non_Crossing_Biased_Descend_Result = 0;
												RetVal = Positive_RA_Alt_Thresh__3;
												func_Non_Crossing_Biased_Descend_Alim = RetVal;
												RetVal = Up_Separation;
												func_Non_Crossing_Biased_Descend_Temp1 = RetVal;
												RetVal = 1;
												func_Non_Crossing_Biased_Descend_Temp3 = RetVal;
												RetVal = func_Non_Crossing_Biased_Descend_Result;
												func_alt_sep_test_Temp3 = RetVal;
												goto L12;
											}
											else {
												goto L133;
											}
										}
									}
									else {
										RetVal = 0;
										func_Non_Crossing_Biased_Climb_Temp3 = RetVal;
										if((func_Non_Crossing_Biased_Climb_Temp3 == 0)) {
L134:											RetVal = func_Non_Crossing_Biased_Climb_Result;
											func_alt_sep_test_Temp1 = RetVal;
											if((Other_Tracked_Alt > Own_Tracked_Alt)) {
												RetVal = 1;
												func_alt_sep_test_Temp2 = RetVal;
												func_Non_Crossing_Biased_Descend_Upward_preferred = 0;
												func_Non_Crossing_Biased_Descend_Result = 0;
												RetVal = Positive_RA_Alt_Thresh__3;
												func_Non_Crossing_Biased_Descend_Alim = RetVal;
												RetVal = Up_Separation;
												func_Non_Crossing_Biased_Descend_Temp1 = RetVal;
												RetVal = 0;
												func_Non_Crossing_Biased_Descend_Temp3 = RetVal;
												func_Non_Crossing_Biased_Descend_Result = 1;
												RetVal = func_Non_Crossing_Biased_Descend_Result;
												func_alt_sep_test_Temp3 = RetVal;
												goto L7;
											}
											else {
												RetVal = 0;
												func_alt_sep_test_Temp2 = RetVal;
												if((func_alt_sep_test_Temp1 == 0)) {
L135:													func_Non_Crossing_Biased_Descend_Upward_preferred = 0;
													func_Non_Crossing_Biased_Descend_Result = 0;
													RetVal = Positive_RA_Alt_Thresh__3;
													func_Non_Crossing_Biased_Descend_Alim = RetVal;
													RetVal = Up_Separation;
													func_Non_Crossing_Biased_Descend_Temp1 = RetVal;
													RetVal = 0;
													func_Non_Crossing_Biased_Descend_Temp3 = RetVal;
													func_Non_Crossing_Biased_Descend_Result = 1;
													RetVal = func_Non_Crossing_Biased_Descend_Result;
													func_alt_sep_test_Temp3 = RetVal;
													goto L17;
												}
												else {
													goto L135;
												}
											}
										}
										else {
											goto L134;
										}
									}
								}
							}
							else {
								RetVal = Up_Separation;
								func_Non_Crossing_Biased_Climb_Temp1 = RetVal;
								if((func_Non_Crossing_Biased_Climb_Temp1 > Down_Separation)) {
									func_Non_Crossing_Biased_Climb_Upward_preferred = 1;
									if((Other_Tracked_Alt > Own_Tracked_Alt)) {
										RetVal = 1;
										func_Non_Crossing_Biased_Climb_Temp2 = RetVal;
										if((func_Non_Crossing_Biased_Climb_Temp2 > 0) && (func_Non_Crossing_Biased_Climb_Alim > Down_Separation)) {
											func_Non_Crossing_Biased_Climb_Result = 1;
											RetVal = func_Non_Crossing_Biased_Climb_Result;
											func_alt_sep_test_Temp1 = RetVal;
											RetVal = 1;
											func_alt_sep_test_Temp2 = RetVal;
											func_alt_sep_test_Need_upward_RA = 1;
											func_Non_Crossing_Biased_Descend_Upward_preferred = 0;
											func_Non_Crossing_Biased_Descend_Result = 0;
											RetVal = Positive_RA_Alt_Thresh__3;
											func_Non_Crossing_Biased_Descend_Alim = RetVal;
											RetVal = Up_Separation;
											func_Non_Crossing_Biased_Descend_Temp1 = RetVal;
											func_Non_Crossing_Biased_Descend_Upward_preferred = 1;
											RetVal = 1;
											func_Non_Crossing_Biased_Descend_Temp2 = RetVal;
											RetVal = func_Non_Crossing_Biased_Descend_Result;
											func_alt_sep_test_Temp3 = RetVal;
											goto L4;
										}
										else {
											RetVal = func_Non_Crossing_Biased_Climb_Result;
											func_alt_sep_test_Temp1 = RetVal;
											RetVal = 1;
											func_alt_sep_test_Temp2 = RetVal;
											func_Non_Crossing_Biased_Descend_Upward_preferred = 0;
											func_Non_Crossing_Biased_Descend_Result = 0;
											RetVal = Positive_RA_Alt_Thresh__3;
											func_Non_Crossing_Biased_Descend_Alim = RetVal;
											RetVal = Up_Separation;
											func_Non_Crossing_Biased_Descend_Temp1 = RetVal;
											func_Non_Crossing_Biased_Descend_Upward_preferred = 1;
											RetVal = 1;
											func_Non_Crossing_Biased_Descend_Temp2 = RetVal;
											func_Non_Crossing_Biased_Descend_Result = 1;
											RetVal = func_Non_Crossing_Biased_Descend_Result;
											func_alt_sep_test_Temp3 = RetVal;
											goto L7;
										}
									}
									else {
										RetVal = 0;
										func_Non_Crossing_Biased_Climb_Temp2 = RetVal;
										func_Non_Crossing_Biased_Climb_Result = 1;
										RetVal = func_Non_Crossing_Biased_Climb_Result;
										func_alt_sep_test_Temp1 = RetVal;
										RetVal = 0;
										func_alt_sep_test_Temp2 = RetVal;
										func_Non_Crossing_Biased_Descend_Upward_preferred = 0;
										func_Non_Crossing_Biased_Descend_Result = 0;
										RetVal = Positive_RA_Alt_Thresh__3;
										func_Non_Crossing_Biased_Descend_Alim = RetVal;
										RetVal = Up_Separation;
										func_Non_Crossing_Biased_Descend_Temp1 = RetVal;
										func_Non_Crossing_Biased_Descend_Upward_preferred = 1;
										RetVal = 0;
										func_Non_Crossing_Biased_Descend_Temp2 = RetVal;
										if((func_Non_Crossing_Biased_Descend_Temp2 == 0)) {
L136:											RetVal = func_Non_Crossing_Biased_Descend_Result;
											func_alt_sep_test_Temp3 = RetVal;
											goto L12;
										}
										else {
											goto L136;
										}
									}
								}
								else {
									if((Own_Tracked_Alt > Other_Tracked_Alt)) {
										RetVal = 1;
										func_Non_Crossing_Biased_Climb_Temp3 = RetVal;
										if((func_Non_Crossing_Biased_Climb_Temp3 > 0) && (Cur_Vertical_Sep >= 300) && (Up_Separation >= func_Non_Crossing_Biased_Climb_Alim)) {
											func_Non_Crossing_Biased_Climb_Result = 1;
											RetVal = func_Non_Crossing_Biased_Climb_Result;
											func_alt_sep_test_Temp1 = RetVal;
											RetVal = 0;
											func_alt_sep_test_Temp2 = RetVal;
											func_Non_Crossing_Biased_Descend_Upward_preferred = 0;
											func_Non_Crossing_Biased_Descend_Result = 0;
											RetVal = Positive_RA_Alt_Thresh__3;
											func_Non_Crossing_Biased_Descend_Alim = RetVal;
											RetVal = Up_Separation;
											func_Non_Crossing_Biased_Descend_Temp1 = RetVal;
											RetVal = 1;
											func_Non_Crossing_Biased_Descend_Temp3 = RetVal;
											func_Non_Crossing_Biased_Descend_Result = 1;
											RetVal = func_Non_Crossing_Biased_Descend_Result;
											func_alt_sep_test_Temp3 = RetVal;
											goto L13;
										}
										else {
											RetVal = func_Non_Crossing_Biased_Climb_Result;
											func_alt_sep_test_Temp1 = RetVal;
											RetVal = 0;
											func_alt_sep_test_Temp2 = RetVal;
											if((func_alt_sep_test_Temp1 == 0)) {
L137:												func_Non_Crossing_Biased_Descend_Upward_preferred = 0;
												func_Non_Crossing_Biased_Descend_Result = 0;
												RetVal = Positive_RA_Alt_Thresh__3;
												func_Non_Crossing_Biased_Descend_Alim = RetVal;
												RetVal = Up_Separation;
												func_Non_Crossing_Biased_Descend_Temp1 = RetVal;
												RetVal = 1;
												func_Non_Crossing_Biased_Descend_Temp3 = RetVal;
												RetVal = func_Non_Crossing_Biased_Descend_Result;
												func_alt_sep_test_Temp3 = RetVal;
												goto L12;
											}
											else {
												goto L137;
											}
										}
									}
									else {
										RetVal = 0;
										func_Non_Crossing_Biased_Climb_Temp3 = RetVal;
										if((func_Non_Crossing_Biased_Climb_Temp3 == 0)) {
L138:											RetVal = func_Non_Crossing_Biased_Climb_Result;
											func_alt_sep_test_Temp1 = RetVal;
											if((Other_Tracked_Alt > Own_Tracked_Alt)) {
												RetVal = 1;
												func_alt_sep_test_Temp2 = RetVal;
												func_Non_Crossing_Biased_Descend_Upward_preferred = 0;
												func_Non_Crossing_Biased_Descend_Result = 0;
												RetVal = Positive_RA_Alt_Thresh__3;
												func_Non_Crossing_Biased_Descend_Alim = RetVal;
												RetVal = Up_Separation;
												func_Non_Crossing_Biased_Descend_Temp1 = RetVal;
												RetVal = 0;
												func_Non_Crossing_Biased_Descend_Temp3 = RetVal;
												func_Non_Crossing_Biased_Descend_Result = 1;
												RetVal = func_Non_Crossing_Biased_Descend_Result;
												func_alt_sep_test_Temp3 = RetVal;
												goto L7;
											}
											else {
												RetVal = 0;
												func_alt_sep_test_Temp2 = RetVal;
												if((func_alt_sep_test_Temp1 == 0)) {
L139:													func_Non_Crossing_Biased_Descend_Upward_preferred = 0;
													func_Non_Crossing_Biased_Descend_Result = 0;
													RetVal = Positive_RA_Alt_Thresh__3;
													func_Non_Crossing_Biased_Descend_Alim = RetVal;
													RetVal = Up_Separation;
													func_Non_Crossing_Biased_Descend_Temp1 = RetVal;
													RetVal = 0;
													func_Non_Crossing_Biased_Descend_Temp3 = RetVal;
													func_Non_Crossing_Biased_Descend_Result = 1;
													RetVal = func_Non_Crossing_Biased_Descend_Result;
													func_alt_sep_test_Temp3 = RetVal;
													goto L17;
												}
												else {
													goto L139;
												}
											}
										}
										else {
											goto L138;
										}
									}
								}
							}
						}
						else if((0 > Two_of_Three_Reports_Valid) && (Other_RAC == 0)) {
							goto L126;
						}
						else if((Two_of_Three_Reports_Valid == 0)) {
							goto L26;
						}
						else if((0 > Other_RAC)) {
							goto L26;
						}
						else {
							goto L26;
						}
					}
					else if((0 > Other_Capability)) {
L140:						if((Two_of_Three_Reports_Valid > 0) && (Other_RAC == 0)) {
L141:							func_alt_sep_test_Intent_not_known = 1;
							func_alt_sep_test_Alt_sep = 0;
							goto L127;
						}
						else if((0 > Two_of_Three_Reports_Valid) && (Other_RAC == 0)) {
							goto L141;
						}
						else if((Two_of_Three_Reports_Valid == 0)) {
L142:							func_alt_sep_test_Alt_sep = 0;
							goto L127;
						}
						else if((0 > Other_RAC)) {
							goto L142;
						}
						else {
							goto L142;
						}
					}
					else {
						goto L140;
					}
				}
				else if((0 > High_Confidence) && (600 >= Own_Tracked_Alt_Rate) && (Cur_Vertical_Sep > 600)) {
					goto L125;
				}
				else if((High_Confidence == 0)) {
					goto L30;
				}
				else if((Own_Tracked_Alt_Rate > 600)) {
					goto L30;
				}
				else {
					goto L30;
				}
			}
		}
	}
}
