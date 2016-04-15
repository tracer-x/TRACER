/***************************/
/* Original program        */
/***************************/
/* 

int main(){
  int p,x,y,z;
  if(p>0)
    z=2;
  else
    z=3;
  if(x>0)
    y=0;
  if(y>0)
    x=y;
  else
    x=2;

  return x;
}
*/

/***************************/
/* Path-sensitive  program */
/***************************/

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

	RetVal = 0;
	;
	if((func_main_P > 0)) {
		func_main_Z = 2;
L1:		if((func_main_X > 0)) {
			func_main_Y = 0;
L2:			func_main_X = 2;
L3:			RetVal = func_main_X;
			return RetVal;
		}
		else {
			if((func_main_Y > 0)) {
				func_main_X = func_main_Y;
				goto L3;
			}
			else {
				goto L2;
			}
		}
	}
	else {
		func_main_Z = 3;
		goto L1;
	}
}
