// To run pointer analysis: crystal -v=20 alias-1-DECOMPILED.c
// decompiled program:
//  points-to-set([func_main_Ptr, Addr_func_main__y_])
//  points-to-set([*Addr_func_main__y_, *func_main_Ptr])


// ---- begin global declarations ----
int RetVal;
int *Addr_func_main__x_;
int *Addr_func_main__y_;

// ---- end global declarations ----

int main() {

// ---- begin local declarations ----

// ---- func_main ----
	int func_main_P;
	int func_main_Q;
	int *func_main_Ptr;
	int func_main_Result;
	int func_main_NONDET;

// ---- func___TRACER_INIT ----

// ---- end local declarations ----

	RetVal = 0;
	;
	func_main_P = 5;
L1:	if((func_main_NONDET == 0)) {
L2:		func_main_Result = *(func_main_Ptr);
		RetVal = 0;
		return RetVal;
	}
	else if((func_main_NONDET > 0)) {
L3:		func_main_Ptr = Addr_func_main__y_;
		if((0 > func_main_Q)) {
			*(Addr_func_main__x_) = 17;
			*(Addr_func_main__y_) = 18;
L4:			goto L1;
		}
		else {
			*(Addr_func_main__x_) = 19;
			*(Addr_func_main__y_) = 20;
			goto L4;
		}
	}
	else {
		goto L3;
	}
}
