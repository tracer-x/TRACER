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
		RetVal = func_main_Ptr;
		return RetVal;
	}
	else {
		goto L1;
	}
}
