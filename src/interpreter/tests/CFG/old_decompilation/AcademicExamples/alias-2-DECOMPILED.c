// To run pointer analysis: crystal -v=20 alias-2-DECOMPILED.c
// decompiled program:
//  points-to-set([Addr_func_main__y_, func_main_Ptr])

// ---- begin global declarations ----
int RetVal;
int *Addr_func_main__x_;
int *Addr_func_main__y_;

// ---- end global declarations ----

int main() {

// ---- begin local declarations ----

// ---- func_main ----
	int *func_main_Ptr;

// ---- func___TRACER_INIT ----

// ---- end local declarations ----

	RetVal = 0;
	;
	if((*(Addr_func_main__x_) > 0)) {
		*(Addr_func_main__y_) = 0;
L1:		func_main_Ptr = Addr_func_main__y_;
		RetVal = 0;
		return RetVal;
	}
	else {
		goto L1;
	}
}
