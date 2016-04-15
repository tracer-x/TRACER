int KernelMode  ;
int Executive  ;
int s  ;
int UNLOADED  ;
int NP  ;
int DC  ;
int SKIP1  ;
int SKIP2  ;
int MPR1  ;
int MPR3  ;
int IPC  ;
int pended  ;
int compFptr  ;
int compRegistered  ;
int lowerDriverReturn  ;
int setEventCalled  ;
int customIrp  ;
int myStatus  ;
int safety  ;
void IofCompleteRequest(int IofCompleteRequest_Irp , int IofCompleteRequest_PriorityBoost ) ;
int IofCallDriver(int IofCallDriver_DeviceObject , int IofCallDriver_Irp ) ;
int KeWaitForSingleObject(int KeWaitForSingleObject_Object , int KeWaitForSingleObject_WaitReason , int KeWaitForSingleObject_WaitMode , int KeWaitForSingleObject_Alertable , int KeWaitForSingleObject_Timeout ) ;
extern int __VERIFIER_nondet_int() ;
extern int _SLICE() ;
int KbFilter_Complete(int KbFilter_Complete_DeviceObject , int KbFilter_Complete_Irp , int KbFilter_Complete_Context ) ;
void main(void)
{
int TRACER_RV;
 int main_status ;
int main_irp ;
int main_pirp ;
int main_devobj ;
int main_tmp_ndt_1 ;
{
	;
	TRACER_RV = nondet();
	safety = 0;
	main_pirp = main_irp;
{
	UNLOADED = 0;
	NP = 1;
	DC = 2;
	SKIP1 = 3;
	SKIP2 = 4;
	MPR1 = 5;
	MPR3 = 6;
	IPC = 7;
	s = UNLOADED;
	pended = 0;
	compFptr = 0;
	compRegistered = 0;
	lowerDriverReturn = 0;
	setEventCalled = 0;
	customIrp = 0;
	;
	TRACER_RV = nondet();
{
	s = NP;
	pended = 0;
	compFptr = 0;
	compRegistered = 0;
	lowerDriverReturn = 0;
	setEventCalled = 0;
	customIrp = 0;
	;
	TRACER_RV = nondet();
	main_tmp_ndt_1 = __VERIFIER_nondet_int();
	if(main_tmp_ndt_1 == 3) {
{
 int KbFilter_PnP_devExt ;
int KbFilter_PnP_irpStack ;
int KbFilter_PnP_status ;
int KbFilter_PnP_event ;
int KbFilter_PnP_DeviceObject__DeviceExtension ;
int KbFilter_PnP_Irp__Tail__Overlay__CurrentStackLocation ;
int KbFilter_PnP_irpStack__MinorFunction ;
int KbFilter_PnP_devExt__TopOfStack ;
int KbFilter_PnP_devExt__Started ;
int KbFilter_PnP_devExt__Removed ;
int KbFilter_PnP_devExt__SurpriseRemoved ;
int KbFilter_PnP_Irp__IoStatus__Status ;
int KbFilter_PnP_Irp__IoStatus__Information ;
int KbFilter_PnP_Irp__CurrentLocation ;
int KbFilter_PnP_irpSp ;
int KbFilter_PnP_nextIrpSp ;
int KbFilter_PnP_nextIrpSp__Control ;
int KbFilter_PnP_irpSp___0 ;
int KbFilter_PnP_irpSp__Control ;
int KbFilter_PnP_CIL___Tmp23 ;
		int KbFilter_PnP_DeviceObject ; int KbFilter_PnP_Irp ;
		KbFilter_PnP_DeviceObject = main_devobj;
		KbFilter_PnP_Irp = main_pirp;
		if(KbFilter_PnP_irpStack__MinorFunction == 0) {
			KbFilter_PnP_irpSp = KbFilter_PnP_Irp__Tail__Overlay__CurrentStackLocation;
			KbFilter_PnP_nextIrpSp = KbFilter_PnP_Irp__Tail__Overlay__CurrentStackLocation - 1;
			KbFilter_PnP_nextIrpSp__Control = 0;
			safety = safety + (s - NP);
			safety = safety + (compRegistered - 0);
			compRegistered = 1;
			KbFilter_PnP_irpSp___0 = KbFilter_PnP_Irp__Tail__Overlay__CurrentStackLocation - 1;
			KbFilter_PnP_irpSp__Control = 224;
{
 int IofCallDriver_returnVal2 ;
int IofCallDriver_compRetStatus ;
int IofCallDriver_lcontext ;
int IofCallDriver_tmp_ndt_2 ;
int IofCallDriver_tmp_ndt_3 ;
			int IofCallDriver_DeviceObject ; int IofCallDriver_Irp ;
			IofCallDriver_DeviceObject = KbFilter_PnP_devExt__TopOfStack;
			IofCallDriver_Irp = KbFilter_PnP_Irp;
{
 int retres ;
int KbFilter_Complete_event ;
			int KbFilter_Complete_DeviceObject ; int KbFilter_Complete_Irp ; int KbFilter_Complete_Context ;
			KbFilter_Complete_DeviceObject = IofCallDriver_DeviceObject;
			KbFilter_Complete_Irp = IofCallDriver_Irp;
			KbFilter_Complete_Context = IofCallDriver_lcontext;
{
 int KeSetEvent_l ;
			int KeSetEvent_Event ; int KeSetEvent_Increment ; int KeSetEvent_Wait ;
			KeSetEvent_Event = KbFilter_Complete_event;
			KeSetEvent_Increment = 0;
			KeSetEvent_Wait = 0;
			setEventCalled = 1;
			;
			TRACER_RV = nondet();
			IofCallDriver_compRetStatus = TRACER_RV;
			TRACER_RV = nondet();
{
			safety = safety + (s - NP);
			s = MPR1;
			;
			TRACER_RV = nondet();
			IofCallDriver_tmp_ndt_2 = __VERIFIER_nondet_int();
			if(IofCallDriver_tmp_ndt_2 == 0) {
				IofCallDriver_returnVal2 = 0;
				s = NP;
				lowerDriverReturn = IofCallDriver_returnVal2;
				KbFilter_PnP_status = TRACER_RV;
				TRACER_RV = nondet();
L1:;
L2:;
{
				int IofCompleteRequest_Irp ; int IofCompleteRequest_PriorityBoost ;
				IofCompleteRequest_Irp = KbFilter_PnP_Irp;
				IofCompleteRequest_PriorityBoost = 0;
				safety = safety + (s - NP);
				s = DC;
				;
				TRACER_RV = nondet();
L3:;
				main_status = TRACER_RV;
				TRACER_RV = nondet();
L4:;
                _SLICE(safety);
				/* END OF PATH at func_main@p13#1 */
}
			}
			else if(IofCallDriver_tmp_ndt_2 < 0) {
L5:;
				IofCallDriver_tmp_ndt_3 = __VERIFIER_nondet_int();
				if(IofCallDriver_tmp_ndt_3 == 1) {
					IofCallDriver_returnVal2 = -1073741823;
					s = NP;
					lowerDriverReturn = IofCallDriver_returnVal2;
					TRACER_RV = (IofCallDriver_returnVal2);
					KbFilter_PnP_status = TRACER_RV;
					TRACER_RV = nondet();
					KbFilter_PnP_CIL___Tmp23 = KbFilter_PnP_status;
					goto L2;
				}
				else if(IofCallDriver_tmp_ndt_3 < 1) {
L6:;
					IofCallDriver_returnVal2 = 259;
					s = MPR3;
					lowerDriverReturn = IofCallDriver_returnVal2;
					TRACER_RV = (IofCallDriver_returnVal2);
					KbFilter_PnP_status = TRACER_RV;
					TRACER_RV = nondet();
					KbFilter_PnP_CIL___Tmp23 = KbFilter_PnP_status;
{
 int KeWaitForSingleObject_tmp_ndt_4 ;
int retres ;
					int KeWaitForSingleObject_Object ; int KeWaitForSingleObject_WaitReason ; int KeWaitForSingleObject_WaitMode ; int KeWaitForSingleObject_Alertable ; int KeWaitForSingleObject_Timeout ;
					KeWaitForSingleObject_Object = KbFilter_PnP_event;
					KeWaitForSingleObject_WaitReason = Executive;
					KeWaitForSingleObject_WaitMode = KernelMode;
					KeWaitForSingleObject_Alertable = 0;
					KeWaitForSingleObject_Timeout = 0;
					s = NP;
					setEventCalled = 0;
L7:;
					;
					TRACER_RV = nondet();
					goto L1;
}
				}
				else {
					goto L6;
				}
			}
			else {
				goto L5;
			}
}
}
}
}
		}
		else if(KbFilter_PnP_irpStack__MinorFunction < 0) {
L8:;
			safety = safety + (s - NP);
			s = SKIP1;
			KbFilter_PnP_Irp__CurrentLocation = KbFilter_PnP_Irp__CurrentLocation + 1;
			KbFilter_PnP_Irp__Tail__Overlay__CurrentStackLocation = KbFilter_PnP_Irp__Tail__Overlay__CurrentStackLocation + 1;
{
 int IofCallDriver_returnVal2 ;
int IofCallDriver_compRetStatus ;
int IofCallDriver_lcontext ;
int IofCallDriver_tmp_ndt_2 ;
int IofCallDriver_tmp_ndt_3 ;
			int IofCallDriver_DeviceObject ; int IofCallDriver_Irp ;
			IofCallDriver_DeviceObject = KbFilter_PnP_devExt__TopOfStack;
			IofCallDriver_Irp = KbFilter_PnP_Irp;
			IofCallDriver_tmp_ndt_2 = __VERIFIER_nondet_int();
			if(IofCallDriver_tmp_ndt_2 == 0) {
L9:;
				safety = safety + (s - SKIP1);
				s = SKIP2;
				lowerDriverReturn = IofCallDriver_returnVal2;
				KbFilter_PnP_status = TRACER_RV;
				TRACER_RV = nondet();
				goto L3;
			}
			else if(IofCallDriver_tmp_ndt_2 < 0) {
L10:;
				IofCallDriver_tmp_ndt_3 = __VERIFIER_nondet_int();
				if(IofCallDriver_tmp_ndt_3 == 1) {
					goto L9;
				}
				else if(IofCallDriver_tmp_ndt_3 < 1) {
L11:;
					goto L9;
				}
				else {
					goto L11;
				}
			}
			else {
				goto L10;
			}
}
		}
		else {
			if(KbFilter_PnP_irpStack__MinorFunction == 23) {
				KbFilter_PnP_devExt__SurpriseRemoved = 1;
				safety = safety + (s - NP);
				s = SKIP1;
				KbFilter_PnP_Irp__CurrentLocation = KbFilter_PnP_Irp__CurrentLocation + 1;
				KbFilter_PnP_Irp__Tail__Overlay__CurrentStackLocation = KbFilter_PnP_Irp__Tail__Overlay__CurrentStackLocation + 1;
{
 int IofCallDriver_returnVal2 ;
int IofCallDriver_compRetStatus ;
int IofCallDriver_lcontext ;
int IofCallDriver_tmp_ndt_2 ;
int IofCallDriver_tmp_ndt_3 ;
				int IofCallDriver_DeviceObject ; int IofCallDriver_Irp ;
				IofCallDriver_DeviceObject = KbFilter_PnP_devExt__TopOfStack;
				IofCallDriver_Irp = KbFilter_PnP_Irp;
				IofCallDriver_tmp_ndt_2 = __VERIFIER_nondet_int();
				if(IofCallDriver_tmp_ndt_2 == 0) {
L12:;
					safety = safety + (s - SKIP1);
					s = SKIP2;
					lowerDriverReturn = IofCallDriver_returnVal2;
					KbFilter_PnP_status = TRACER_RV;
					TRACER_RV = nondet();
					goto L3;
				}
				else if(IofCallDriver_tmp_ndt_2 < 0) {
L13:;
					IofCallDriver_tmp_ndt_3 = __VERIFIER_nondet_int();
					if(IofCallDriver_tmp_ndt_3 == 1) {
						goto L12;
					}
					else if(IofCallDriver_tmp_ndt_3 < 1) {
L14:;
						goto L12;
					}
					else {
						goto L14;
					}
				}
				else {
					goto L13;
				}
}
			}
			else if(KbFilter_PnP_irpStack__MinorFunction < 23) {
L15:;
				if(KbFilter_PnP_irpStack__MinorFunction == 2) {
					KbFilter_PnP_devExt__Removed = 1;
					safety = safety + (s - NP);
					s = SKIP1;
					KbFilter_PnP_Irp__CurrentLocation = KbFilter_PnP_Irp__CurrentLocation + 1;
					KbFilter_PnP_Irp__Tail__Overlay__CurrentStackLocation = KbFilter_PnP_Irp__Tail__Overlay__CurrentStackLocation + 1;
{
 int IofCallDriver_returnVal2 ;
int IofCallDriver_compRetStatus ;
int IofCallDriver_lcontext ;
int IofCallDriver_tmp_ndt_2 ;
int IofCallDriver_tmp_ndt_3 ;
					int IofCallDriver_DeviceObject ; int IofCallDriver_Irp ;
					IofCallDriver_DeviceObject = KbFilter_PnP_devExt__TopOfStack;
					IofCallDriver_Irp = KbFilter_PnP_Irp;
					IofCallDriver_tmp_ndt_2 = __VERIFIER_nondet_int();
					if(IofCallDriver_tmp_ndt_2 == 0) {
L16:;
						safety = safety + (s - SKIP1);
						s = SKIP2;
						lowerDriverReturn = IofCallDriver_returnVal2;
						;
						TRACER_RV = nondet();
						goto L3;
					}
					else if(IofCallDriver_tmp_ndt_2 < 0) {
L17:;
						IofCallDriver_tmp_ndt_3 = __VERIFIER_nondet_int();
						if(IofCallDriver_tmp_ndt_3 == 1) {
							goto L16;
						}
						else if(IofCallDriver_tmp_ndt_3 < 1) {
L18:;
							goto L16;
						}
						else {
							goto L18;
						}
					}
					else {
						goto L17;
					}
}
				}
				else if(KbFilter_PnP_irpStack__MinorFunction < 2) {
					goto L8;
				}
				else {
					goto L8;
				}
			}
			else {
				goto L15;
			}
		}
}
	}
	else if(main_tmp_ndt_1 < 3) {
		goto L4;
	}
	else {
		goto L4;
	}
}
}
}
}

