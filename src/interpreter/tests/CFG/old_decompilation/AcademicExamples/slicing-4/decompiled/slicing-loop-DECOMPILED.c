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
	int func_main_I;
	int func_main_N;

// ---- func___TRACER_INIT ----

// ---- end local declarations ----

	RetVal = 0;
	;
	func_main_I = 0;
L1:	if((func_main_I >= func_main_N)) {
L2:		RetVal = func_main_X;
		return RetVal;
	}
	else {
		if((func_main_P > 0)) {
			func_main_Z = 2;
L3:			if((func_main_X > 0)) {
				func_main_Y = 0;
L4:				func_main_X = 2;
L5:				func_main_I = (func_main_I + 1);
				goto L1;
			}
			else {
				if((func_main_Y > 0)) {
					func_main_X = func_main_Y;
					goto L5;
				}
				else {
					goto L4;
				}
			}
		}
		else {
			func_main_Z = 3;
			goto L3;
		}
	}
}
