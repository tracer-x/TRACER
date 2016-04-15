// To run pointer analysis: crystal -v=20 alias-3-DECOMPILED.c

// decompiled program:
//  points-to-set([func_main_Ptr, Addr_func_main__x_])

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
	*(Addr_func_main__x_) = (0 - 3);
	func_main_Ptr = Addr_func_main__x_;
	RetVal = 0;
	return RetVal;
}
