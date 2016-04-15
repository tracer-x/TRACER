// ---- begin global declarations ----
int RetVal;

// ---- end global declarations ----

int main() {

// ---- begin local declarations ----

// ---- func_main ----
	int func_main_X;
	int func_main_Y;

// ---- func___TRACER_INIT ----

// ---- end local declarations ----

	RetVal = 0;
	;
	if((func_main_X > 0)) {
		func_main_Y = 0;
L1:		func_main_X = 2;
L2:		RetVal = func_main_X;
		return RetVal;
	}
	else {
		if((func_main_Y > 0)) {
			func_main_X = func_main_Y;
			goto L2;
		}
		else {
			goto L1;
		}
	}
}
