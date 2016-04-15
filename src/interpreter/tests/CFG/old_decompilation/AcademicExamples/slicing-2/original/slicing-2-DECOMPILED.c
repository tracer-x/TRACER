// ---- begin global declarations ----
int RetVal;
// ---- end global declarations ----
int main() {
// ---- begin local declarations ----
// ---- func_main ----
	int func_main_P;
	int func_main_X;
	int func_main_Y;
	int func_main_Z;
// ---- func___TRACER_INIT ----
// ---- end local declarations ----

	if((func_main_P > 0)) {          /*IN*/  /*It should be OUT*/
	  func_main_Z = 2;               /*OUT*/
L1:	  if((func_main_X > 0)) {        /*IN*/
	    func_main_Y = 0;             /*OUT*/
L2:	    func_main_X = 2;             /*IN*/
L3:	    RetVal = func_main_X;        /*IN*/
	    return RetVal;               /*IN*/
	  }
	  else {
	    if((func_main_Y > 0)) {      /*IN*/
	      func_main_X = func_main_Y; /*IN*/
	      goto L3;                 
	    else {                       /*IN*/
	      goto L2;                   
	    }
	  }
	}
	else {
	  func_main_Z = 3;               /*OUT*/
	  goto L1;
	}
}
