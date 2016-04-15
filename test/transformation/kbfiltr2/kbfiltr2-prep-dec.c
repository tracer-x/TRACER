int safety  ;
int KernelMode  ;
int Executive  ;
int DevicePowerState  ;
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
void IofCompleteRequest(int IofCompleteRequest_Irp , int IofCompleteRequest_PriorityBoost ) ;
int IofCallDriver(int IofCallDriver_DeviceObject , int IofCallDriver_Irp ) ;
int KeWaitForSingleObject(int KeWaitForSingleObject_Object , int KeWaitForSingleObject_WaitReason , int KeWaitForSingleObject_WaitMode , int KeWaitForSingleObject_Alertable , int KeWaitForSingleObject_Timeout ) ;
extern int __VERIFIER_nondet_int() ;
int KbFilter_CreateClose(int KbFilter_CreateClose_DeviceObject , int KbFilter_CreateClose_Irp ) ;
int KbFilter_Power(int KbFilter_Power_DeviceObject , int KbFilter_Power_Irp ) ;
int KbFilter_InternIoCtl(int KbFilter_InternIoCtl_DeviceObject , int KbFilter_InternIoCtl_Irp ) ;
extern int _SLICE() ;
int KbFilter_Complete(int KbFilter_Complete_DeviceObject , int KbFilter_Complete_Irp , int KbFilter_Complete_Context ) ;
int KbFilter_DispatchPassThrough(int KbFilter_DispatchPassThrough_DeviceObject , int KbFilter_DispatchPassThrough_Irp ) ;
int PoCallDriver(int PoCallDriver_DeviceObject , int PoCallDriver_Irp ) ;
void main(void)
{
int TRACER_RV;
 int main_status ;
int main_irp ;
int main_pirp ;
int main_irp_choice ;
int main_devobj ;
int main_tmp_ndt_1 ;
int main_tmp_ndt_2 ;
int main_tmp_ndt_3 ;
int main_tmp_ndt_4 ;
int main_tmp_ndt_5 ;
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
	myStatus = 0;
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
	if(main_tmp_ndt_1 >= 0 && main_tmp_ndt_1 <= 0) {
L1:;
{
 int KbFilter_CreateClose_irpStack__MajorFunction ;
int KbFilter_CreateClose_devExt__UpperConnectData__ClassService ;
int KbFilter_CreateClose_Irp__IoStatus__Status ;
int KbFilter_CreateClose_status ;
int KbFilter_CreateClose_tmp ;
		int KbFilter_CreateClose_DeviceObject ; int KbFilter_CreateClose_Irp ;
		KbFilter_CreateClose_DeviceObject = main_devobj;
		KbFilter_CreateClose_Irp = main_pirp;
L2:;
{
 int KbFilter_DispatchPassThrough_Irp__Tail__Overlay__CurrentStackLocation ;
int KbFilter_DispatchPassThrough_Irp__CurrentLocation ;
int KbFilter_DispatchPassThrough_DeviceObject__DeviceExtension__TopOfStack ;
int KbFilter_DispatchPassThrough_irpStack ;
int KbFilter_DispatchPassThrough_tmp ;
		int KbFilter_DispatchPassThrough_DeviceObject ; int KbFilter_DispatchPassThrough_Irp ;
		KbFilter_DispatchPassThrough_DeviceObject = KbFilter_CreateClose_DeviceObject;
		KbFilter_DispatchPassThrough_Irp = KbFilter_CreateClose_Irp;
		KbFilter_DispatchPassThrough_irpStack = KbFilter_DispatchPassThrough_Irp__Tail__Overlay__CurrentStackLocation;
		safety = safety + (s - NP);
		s = SKIP1;
		KbFilter_DispatchPassThrough_Irp__CurrentLocation = KbFilter_DispatchPassThrough_Irp__CurrentLocation + 1;
		KbFilter_DispatchPassThrough_Irp__Tail__Overlay__CurrentStackLocation = KbFilter_DispatchPassThrough_Irp__Tail__Overlay__CurrentStackLocation + 1;
{
 int IofCallDriver_returnVal2 ;
int IofCallDriver_compRetStatus ;
int IofCallDriver_lcontext ;
long long IofCallDriver_CIL___Tmp7 ;
int IofCallDriver_tmp_ndt_6 ;
int IofCallDriver_tmp_ndt_7 ;
		int IofCallDriver_DeviceObject ; int IofCallDriver_Irp ;
		IofCallDriver_DeviceObject = KbFilter_DispatchPassThrough_DeviceObject__DeviceExtension__TopOfStack;
		IofCallDriver_Irp = KbFilter_DispatchPassThrough_Irp;
L3:;
		safety = safety + (s - SKIP1);
		s = SKIP2;
		lowerDriverReturn = IofCallDriver_returnVal2;
		KbFilter_DispatchPassThrough_tmp = TRACER_RV;
		TRACER_RV = nondet();
		KbFilter_CreateClose_tmp = TRACER_RV;
		TRACER_RV = nondet();
		main_status = TRACER_RV;
		TRACER_RV = nondet();
L4:;
        _SLICE(safety);
		/* END OF PATH at func_main@p37#1 */
}
}
}
	}
	else if(main_tmp_ndt_1 < 0) {
L5:;
		main_tmp_ndt_2 = __VERIFIER_nondet_int();
		if(main_tmp_ndt_2 >= 1 && main_tmp_ndt_2 <= 1) {
L6:;
{
 int KbFilter_CreateClose_irpStack__MajorFunction ;
int KbFilter_CreateClose_devExt__UpperConnectData__ClassService ;
int KbFilter_CreateClose_Irp__IoStatus__Status ;
int KbFilter_CreateClose_status ;
int KbFilter_CreateClose_tmp ;
			int KbFilter_CreateClose_DeviceObject ; int KbFilter_CreateClose_Irp ;
			KbFilter_CreateClose_DeviceObject = main_devobj;
			KbFilter_CreateClose_Irp = main_pirp;
L7:;
{
 int KbFilter_DispatchPassThrough_Irp__Tail__Overlay__CurrentStackLocation ;
int KbFilter_DispatchPassThrough_Irp__CurrentLocation ;
int KbFilter_DispatchPassThrough_DeviceObject__DeviceExtension__TopOfStack ;
int KbFilter_DispatchPassThrough_irpStack ;
int KbFilter_DispatchPassThrough_tmp ;
			int KbFilter_DispatchPassThrough_DeviceObject ; int KbFilter_DispatchPassThrough_Irp ;
			KbFilter_DispatchPassThrough_DeviceObject = KbFilter_CreateClose_DeviceObject;
			KbFilter_DispatchPassThrough_Irp = KbFilter_CreateClose_Irp;
			KbFilter_DispatchPassThrough_irpStack = KbFilter_DispatchPassThrough_Irp__Tail__Overlay__CurrentStackLocation;
			safety = safety + (s - NP);
			s = SKIP1;
			KbFilter_DispatchPassThrough_Irp__CurrentLocation = KbFilter_DispatchPassThrough_Irp__CurrentLocation + 1;
			KbFilter_DispatchPassThrough_Irp__Tail__Overlay__CurrentStackLocation = KbFilter_DispatchPassThrough_Irp__Tail__Overlay__CurrentStackLocation + 1;
{
 int IofCallDriver_returnVal2 ;
int IofCallDriver_compRetStatus ;
int IofCallDriver_lcontext ;
long long IofCallDriver_CIL___Tmp7 ;
int IofCallDriver_tmp_ndt_6 ;
int IofCallDriver_tmp_ndt_7 ;
			int IofCallDriver_DeviceObject ; int IofCallDriver_Irp ;
			IofCallDriver_DeviceObject = KbFilter_DispatchPassThrough_DeviceObject__DeviceExtension__TopOfStack;
			IofCallDriver_Irp = KbFilter_DispatchPassThrough_Irp;
L8:;
			safety = safety + (s - SKIP1);
			s = SKIP2;
			lowerDriverReturn = IofCallDriver_returnVal2;
			KbFilter_DispatchPassThrough_tmp = TRACER_RV;
			TRACER_RV = nondet();
			KbFilter_CreateClose_tmp = TRACER_RV;
			TRACER_RV = nondet();
			main_status = TRACER_RV;
			TRACER_RV = nondet();
			goto L4;
}
}
}
		}
		else if(main_tmp_ndt_2 < 1) {
L9:;
			main_tmp_ndt_3 = __VERIFIER_nondet_int();
			if(main_tmp_ndt_3 >= 3 && main_tmp_ndt_3 <= 3) {
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
int KbFilter_PnP_irpSp__Context ;
int KbFilter_PnP_irpSp__Control ;
long KbFilter_PnP_CIL___Tmp23 ;
				int KbFilter_PnP_DeviceObject ; int KbFilter_PnP_Irp ;
				KbFilter_PnP_DeviceObject = main_devobj;
				KbFilter_PnP_Irp = main_pirp;
				if(KbFilter_PnP_irpStack__MinorFunction >= 0 && KbFilter_PnP_irpStack__MinorFunction <= 0) {
					KbFilter_PnP_irpSp = KbFilter_PnP_Irp__Tail__Overlay__CurrentStackLocation;
					KbFilter_PnP_nextIrpSp = KbFilter_PnP_Irp__Tail__Overlay__CurrentStackLocation - 1;
					KbFilter_PnP_nextIrpSp__Control = 0;
					safety = safety + (s - NP);
					safety = safety + (compRegistered - 0);
					compRegistered = 1;
					KbFilter_PnP_irpSp___0 = KbFilter_PnP_Irp__Tail__Overlay__CurrentStackLocation - 1;
					KbFilter_PnP_irpSp__Context = KbFilter_PnP_event;
					KbFilter_PnP_irpSp__Control = 224;
{
 int IofCallDriver_returnVal2 ;
int IofCallDriver_compRetStatus ;
int IofCallDriver_lcontext ;
long long IofCallDriver_CIL___Tmp7 ;
int IofCallDriver_tmp_ndt_6 ;
int IofCallDriver_tmp_ndt_7 ;
					int IofCallDriver_DeviceObject ; int IofCallDriver_Irp ;
					IofCallDriver_DeviceObject = KbFilter_PnP_devExt__TopOfStack;
					IofCallDriver_Irp = KbFilter_PnP_Irp;
{
 int KbFilter_Complete_event ;
int retres5 ;
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
					retres5 = -1073741802;
					TRACER_RV = (retres5);
					IofCallDriver_compRetStatus = TRACER_RV;
					TRACER_RV = nondet();
					IofCallDriver_CIL___Tmp7 = (long long )IofCallDriver_compRetStatus;
{
					safety = safety + (s - NP);
					s = MPR1;
					;
					TRACER_RV = nondet();
					IofCallDriver_tmp_ndt_6 = __VERIFIER_nondet_int();
					if(IofCallDriver_tmp_ndt_6 >= 0 && IofCallDriver_tmp_ndt_6 <= 0) {
						IofCallDriver_returnVal2 = 0;
						s = NP;
						lowerDriverReturn = IofCallDriver_returnVal2;
						KbFilter_PnP_status = TRACER_RV;
						TRACER_RV = nondet();
L10:;
L11:;
{
						int IofCompleteRequest_Irp ; int IofCompleteRequest_PriorityBoost ;
						IofCompleteRequest_Irp = KbFilter_PnP_Irp;
						IofCompleteRequest_PriorityBoost = 0;
						safety = safety + (s - NP);
						s = DC;
						;
						TRACER_RV = nondet();
L12:;
						main_status = TRACER_RV;
						TRACER_RV = nondet();
L13:;
						goto L4;
}
					}
					else if(IofCallDriver_tmp_ndt_6 < 0) {
L14:;
						IofCallDriver_tmp_ndt_7 = __VERIFIER_nondet_int();
						if(IofCallDriver_tmp_ndt_7 >= 1 && IofCallDriver_tmp_ndt_7 <= 1) {
							IofCallDriver_returnVal2 = -1073741823;
							s = NP;
							lowerDriverReturn = IofCallDriver_returnVal2;
							TRACER_RV = (IofCallDriver_returnVal2);
							KbFilter_PnP_status = TRACER_RV;
							TRACER_RV = nondet();
							goto L11;
						}
						else if(IofCallDriver_tmp_ndt_7 < 1) {
L15:;
							IofCallDriver_returnVal2 = 259;
							s = MPR3;
							lowerDriverReturn = IofCallDriver_returnVal2;
							TRACER_RV = (IofCallDriver_returnVal2);
							KbFilter_PnP_status = TRACER_RV;
							TRACER_RV = nondet();
							KbFilter_PnP_CIL___Tmp23 = (long )KbFilter_PnP_status;
{
 int KeWaitForSingleObject_tmp_ndt_8 ;
int retres7 ;
							int KeWaitForSingleObject_Object ; int KeWaitForSingleObject_WaitReason ; int KeWaitForSingleObject_WaitMode ; int KeWaitForSingleObject_Alertable ; int KeWaitForSingleObject_Timeout ;
							KeWaitForSingleObject_Object = KbFilter_PnP_event;
							KeWaitForSingleObject_WaitReason = Executive;
							KeWaitForSingleObject_WaitMode = KernelMode;
							KeWaitForSingleObject_Alertable = 0;
							KeWaitForSingleObject_Timeout = 0;
							s = NP;
							setEventCalled = 0;
L16:;
							;
							TRACER_RV = nondet();
							goto L10;
}
						}
						else {
							goto L15;
						}
					}
					else {
						goto L14;
					}
}
}
}
}
				}
				else if(KbFilter_PnP_irpStack__MinorFunction < 0) {
L17:;
					safety = safety + (s - NP);
					s = SKIP1;
					KbFilter_PnP_Irp__CurrentLocation = KbFilter_PnP_Irp__CurrentLocation + 1;
					KbFilter_PnP_Irp__Tail__Overlay__CurrentStackLocation = KbFilter_PnP_Irp__Tail__Overlay__CurrentStackLocation + 1;
{
 int IofCallDriver_returnVal2 ;
int IofCallDriver_compRetStatus ;
int IofCallDriver_lcontext ;
long long IofCallDriver_CIL___Tmp7 ;
int IofCallDriver_tmp_ndt_6 ;
int IofCallDriver_tmp_ndt_7 ;
					int IofCallDriver_DeviceObject ; int IofCallDriver_Irp ;
					IofCallDriver_DeviceObject = KbFilter_PnP_devExt__TopOfStack;
					IofCallDriver_Irp = KbFilter_PnP_Irp;
					IofCallDriver_tmp_ndt_6 = __VERIFIER_nondet_int();
					if(IofCallDriver_tmp_ndt_6 >= 0 && IofCallDriver_tmp_ndt_6 <= 0) {
L18:;
						safety = safety + (s - SKIP1);
						s = SKIP2;
						lowerDriverReturn = IofCallDriver_returnVal2;
						KbFilter_PnP_status = TRACER_RV;
						TRACER_RV = nondet();
						goto L12;
					}
					else if(IofCallDriver_tmp_ndt_6 < 0) {
L19:;
						IofCallDriver_tmp_ndt_7 = __VERIFIER_nondet_int();
						if(IofCallDriver_tmp_ndt_7 >= 1 && IofCallDriver_tmp_ndt_7 <= 1) {
							goto L18;
						}
						else if(IofCallDriver_tmp_ndt_7 < 1) {
L20:;
							goto L18;
						}
						else {
							goto L20;
						}
					}
					else {
						goto L19;
					}
}
				}
				else {
					if(KbFilter_PnP_irpStack__MinorFunction >= 23 && KbFilter_PnP_irpStack__MinorFunction <= 23) {
						KbFilter_PnP_devExt__SurpriseRemoved = 1;
						safety = safety + (s - NP);
						s = SKIP1;
						KbFilter_PnP_Irp__CurrentLocation = KbFilter_PnP_Irp__CurrentLocation + 1;
						KbFilter_PnP_Irp__Tail__Overlay__CurrentStackLocation = KbFilter_PnP_Irp__Tail__Overlay__CurrentStackLocation + 1;
{
 int IofCallDriver_returnVal2 ;
int IofCallDriver_compRetStatus ;
int IofCallDriver_lcontext ;
long long IofCallDriver_CIL___Tmp7 ;
int IofCallDriver_tmp_ndt_6 ;
int IofCallDriver_tmp_ndt_7 ;
						int IofCallDriver_DeviceObject ; int IofCallDriver_Irp ;
						IofCallDriver_DeviceObject = KbFilter_PnP_devExt__TopOfStack;
						IofCallDriver_Irp = KbFilter_PnP_Irp;
						IofCallDriver_tmp_ndt_6 = __VERIFIER_nondet_int();
						if(IofCallDriver_tmp_ndt_6 >= 0 && IofCallDriver_tmp_ndt_6 <= 0) {
L21:;
							safety = safety + (s - SKIP1);
							s = SKIP2;
							lowerDriverReturn = IofCallDriver_returnVal2;
							KbFilter_PnP_status = TRACER_RV;
							TRACER_RV = nondet();
							goto L12;
						}
						else if(IofCallDriver_tmp_ndt_6 < 0) {
L22:;
							IofCallDriver_tmp_ndt_7 = __VERIFIER_nondet_int();
							if(IofCallDriver_tmp_ndt_7 >= 1 && IofCallDriver_tmp_ndt_7 <= 1) {
								goto L21;
							}
							else if(IofCallDriver_tmp_ndt_7 < 1) {
L23:;
								goto L21;
							}
							else {
								goto L23;
							}
						}
						else {
							goto L22;
						}
}
					}
					else if(KbFilter_PnP_irpStack__MinorFunction < 23) {
L24:;
						if(KbFilter_PnP_irpStack__MinorFunction >= 2 && KbFilter_PnP_irpStack__MinorFunction <= 2) {
							KbFilter_PnP_devExt__Removed = 1;
							safety = safety + (s - NP);
							s = SKIP1;
							KbFilter_PnP_Irp__CurrentLocation = KbFilter_PnP_Irp__CurrentLocation + 1;
							KbFilter_PnP_Irp__Tail__Overlay__CurrentStackLocation = KbFilter_PnP_Irp__Tail__Overlay__CurrentStackLocation + 1;
{
 int IofCallDriver_returnVal2 ;
int IofCallDriver_compRetStatus ;
int IofCallDriver_lcontext ;
long long IofCallDriver_CIL___Tmp7 ;
int IofCallDriver_tmp_ndt_6 ;
int IofCallDriver_tmp_ndt_7 ;
							int IofCallDriver_DeviceObject ; int IofCallDriver_Irp ;
							IofCallDriver_DeviceObject = KbFilter_PnP_devExt__TopOfStack;
							IofCallDriver_Irp = KbFilter_PnP_Irp;
							IofCallDriver_tmp_ndt_6 = __VERIFIER_nondet_int();
							if(IofCallDriver_tmp_ndt_6 >= 0 && IofCallDriver_tmp_ndt_6 <= 0) {
L25:;
								safety = safety + (s - SKIP1);
								s = SKIP2;
								lowerDriverReturn = IofCallDriver_returnVal2;
								;
								TRACER_RV = nondet();
								goto L12;
							}
							else if(IofCallDriver_tmp_ndt_6 < 0) {
L26:;
								IofCallDriver_tmp_ndt_7 = __VERIFIER_nondet_int();
								if(IofCallDriver_tmp_ndt_7 >= 1 && IofCallDriver_tmp_ndt_7 <= 1) {
									goto L25;
								}
								else if(IofCallDriver_tmp_ndt_7 < 1) {
L27:;
									goto L25;
								}
								else {
									goto L27;
								}
							}
							else {
								goto L26;
							}
}
						}
						else if(KbFilter_PnP_irpStack__MinorFunction < 2) {
							goto L17;
						}
						else {
							goto L17;
						}
					}
					else {
						goto L24;
					}
				}
}
			}
			else if(main_tmp_ndt_3 < 3) {
L28:;
				main_tmp_ndt_4 = __VERIFIER_nondet_int();
				if(main_tmp_ndt_4 >= 4 && main_tmp_ndt_4 <= 4) {
{
 int KbFilter_Power_irpStack__MinorFunction ;
int KbFilter_Power_devExt__DeviceState ;
int KbFilter_Power_powerState__DeviceState ;
int KbFilter_Power_Irp__CurrentLocation ;
int KbFilter_Power_Irp__Tail__Overlay__CurrentStackLocation ;
int KbFilter_Power_devExt__TopOfStack ;
int KbFilter_Power_powerType ;
int KbFilter_Power_tmp ;
					int KbFilter_Power_DeviceObject ; int KbFilter_Power_Irp ;
					KbFilter_Power_DeviceObject = main_devobj;
					KbFilter_Power_Irp = main_pirp;
L29:;
					safety = safety + (s - NP);
					s = SKIP1;
					KbFilter_Power_Irp__CurrentLocation = KbFilter_Power_Irp__CurrentLocation + 1;
					KbFilter_Power_Irp__Tail__Overlay__CurrentStackLocation = KbFilter_Power_Irp__Tail__Overlay__CurrentStackLocation + 1;
{
 int PoCallDriver_compRetStatus ;
int PoCallDriver_returnVal ;
int PoCallDriver_lcontext ;
long PoCallDriver_CIL___Tmp7 ;
long PoCallDriver_CIL___Tmp8 ;
int PoCallDriver_tmp_ndt_9 ;
int PoCallDriver_tmp_ndt_10 ;
					int PoCallDriver_DeviceObject ; int PoCallDriver_Irp ;
					PoCallDriver_DeviceObject = KbFilter_Power_devExt__TopOfStack;
					PoCallDriver_Irp = KbFilter_Power_Irp;
L30:;
					safety = safety + (s - SKIP1);
					s = SKIP2;
					lowerDriverReturn = PoCallDriver_returnVal;
					KbFilter_Power_tmp = TRACER_RV;
					TRACER_RV = nondet();
					main_status = TRACER_RV;
					TRACER_RV = nondet();
					goto L4;
}
}
				}
				else if(main_tmp_ndt_4 < 4) {
L31:;
					main_tmp_ndt_5 = __VERIFIER_nondet_int();
					if(main_tmp_ndt_5 >= 8 && main_tmp_ndt_5 <= 8) {
{
 int KbFilter_InternIoCtl_Irp__IoStatus__Information ;
int KbFilter_InternIoCtl_irpStack__Parameters__DeviceIoControl__IoControlCode ;
int KbFilter_InternIoCtl_devExt__UpperConnectData__ClassService ;
int KbFilter_InternIoCtl_irpStack__Parameters__DeviceIoControl__InputBufferLength ;
int KbFilter_InternIoCtl_sizeof__CONNECT_DATA ;
int KbFilter_InternIoCtl_irpStack__Parameters__DeviceIoControl__Type3InputBuffer ;
int KbFilter_InternIoCtl_sizeof__INTERNAL_I8042_HOOK_KEYBOARD ;
int KbFilter_InternIoCtl_Irp__IoStatus__Status ;
int KbFilter_InternIoCtl_hookKeyboard ;
int KbFilter_InternIoCtl_connectData ;
int KbFilter_InternIoCtl_status ;
int KbFilter_InternIoCtl_tmp ;
int KbFilter_InternIoCtl_CIL___Tmp20 ;
int KbFilter_InternIoCtl_CIL___Tmp24 ;
int KbFilter_InternIoCtl_CIL___Tmp28 ;
int retres26 ;
int TRACER_returning ;
int TRACER_breaking ;
						int KbFilter_InternIoCtl_DeviceObject ; int KbFilter_InternIoCtl_Irp ;
						KbFilter_InternIoCtl_DeviceObject = main_devobj;
						KbFilter_InternIoCtl_Irp = main_pirp;
						TRACER_returning = 0;
						TRACER_breaking = 0;
						KbFilter_InternIoCtl_status = 0;
						KbFilter_InternIoCtl_Irp__IoStatus__Information = 0;
						if(KbFilter_InternIoCtl_irpStack__Parameters__DeviceIoControl__IoControlCode >= KbFilter_InternIoCtl_CIL___Tmp20 && KbFilter_InternIoCtl_irpStack__Parameters__DeviceIoControl__IoControlCode <= KbFilter_InternIoCtl_CIL___Tmp20) {
							if(KbFilter_InternIoCtl_devExt__UpperConnectData__ClassService > 0) {
L32:;
								KbFilter_InternIoCtl_status = -1073741757;
								TRACER_breaking = 1;
L33:;
{
								int IofCompleteRequest_Irp ; int IofCompleteRequest_PriorityBoost ;
								IofCompleteRequest_Irp = KbFilter_InternIoCtl_Irp;
								IofCompleteRequest_PriorityBoost = 0;
								safety = safety + (s - NP);
								s = DC;
								;
								TRACER_RV = nondet();
L34:;
								main_status = TRACER_RV;
								TRACER_RV = nondet();
								goto L4;
}
							}
							else if(KbFilter_InternIoCtl_devExt__UpperConnectData__ClassService < 0) {
								goto L32;
							}
							else {
								if(KbFilter_InternIoCtl_irpStack__Parameters__DeviceIoControl__InputBufferLength < KbFilter_InternIoCtl_sizeof__CONNECT_DATA) {
									KbFilter_InternIoCtl_status = -1073741811;
									TRACER_breaking = 1;
L35:;
									goto L33;
								}
								else {
L36:;
{
 int KbFilter_DispatchPassThrough_Irp__Tail__Overlay__CurrentStackLocation ;
int KbFilter_DispatchPassThrough_Irp__CurrentLocation ;
int KbFilter_DispatchPassThrough_DeviceObject__DeviceExtension__TopOfStack ;
int KbFilter_DispatchPassThrough_irpStack ;
int KbFilter_DispatchPassThrough_tmp ;
									int KbFilter_DispatchPassThrough_DeviceObject ; int KbFilter_DispatchPassThrough_Irp ;
									KbFilter_DispatchPassThrough_DeviceObject = KbFilter_InternIoCtl_DeviceObject;
									KbFilter_DispatchPassThrough_Irp = KbFilter_InternIoCtl_Irp;
									KbFilter_DispatchPassThrough_irpStack = KbFilter_DispatchPassThrough_Irp__Tail__Overlay__CurrentStackLocation;
									safety = safety + (s - NP);
									s = SKIP1;
									KbFilter_DispatchPassThrough_Irp__CurrentLocation = KbFilter_DispatchPassThrough_Irp__CurrentLocation + 1;
									KbFilter_DispatchPassThrough_Irp__Tail__Overlay__CurrentStackLocation = KbFilter_DispatchPassThrough_Irp__Tail__Overlay__CurrentStackLocation + 1;
{
 int IofCallDriver_returnVal2 ;
int IofCallDriver_compRetStatus ;
int IofCallDriver_lcontext ;
long long IofCallDriver_CIL___Tmp7 ;
int IofCallDriver_tmp_ndt_6 ;
int IofCallDriver_tmp_ndt_7 ;
									int IofCallDriver_DeviceObject ; int IofCallDriver_Irp ;
									IofCallDriver_DeviceObject = KbFilter_DispatchPassThrough_DeviceObject__DeviceExtension__TopOfStack;
									IofCallDriver_Irp = KbFilter_DispatchPassThrough_Irp;
									IofCallDriver_tmp_ndt_6 = __VERIFIER_nondet_int();
									if(IofCallDriver_tmp_ndt_6 >= 0 && IofCallDriver_tmp_ndt_6 <= 0) {
L37:;
										safety = safety + (s - SKIP1);
										s = SKIP2;
										lowerDriverReturn = IofCallDriver_returnVal2;
										KbFilter_DispatchPassThrough_tmp = TRACER_RV;
										TRACER_RV = nondet();
										KbFilter_InternIoCtl_tmp = TRACER_RV;
										TRACER_RV = nondet();
										goto L34;
									}
									else if(IofCallDriver_tmp_ndt_6 < 0) {
L38:;
										IofCallDriver_tmp_ndt_7 = __VERIFIER_nondet_int();
										if(IofCallDriver_tmp_ndt_7 >= 1 && IofCallDriver_tmp_ndt_7 <= 1) {
											goto L37;
										}
										else if(IofCallDriver_tmp_ndt_7 < 1) {
L39:;
											goto L37;
										}
										else {
											goto L39;
										}
									}
									else {
										goto L38;
									}
}
}
								}
							}
						}
						else if(KbFilter_InternIoCtl_irpStack__Parameters__DeviceIoControl__IoControlCode < KbFilter_InternIoCtl_CIL___Tmp20) {
L40:;
							if(KbFilter_InternIoCtl_irpStack__Parameters__DeviceIoControl__IoControlCode >= KbFilter_InternIoCtl_CIL___Tmp24 && KbFilter_InternIoCtl_irpStack__Parameters__DeviceIoControl__IoControlCode <= KbFilter_InternIoCtl_CIL___Tmp24) {
								KbFilter_InternIoCtl_status = -1073741822;
								goto L33;
							}
							else if(KbFilter_InternIoCtl_irpStack__Parameters__DeviceIoControl__IoControlCode < KbFilter_InternIoCtl_CIL___Tmp24) {
L41:;
								if(KbFilter_InternIoCtl_irpStack__Parameters__DeviceIoControl__IoControlCode >= KbFilter_InternIoCtl_CIL___Tmp28 && KbFilter_InternIoCtl_irpStack__Parameters__DeviceIoControl__IoControlCode <= KbFilter_InternIoCtl_CIL___Tmp28) {
									if(KbFilter_InternIoCtl_irpStack__Parameters__DeviceIoControl__InputBufferLength < KbFilter_InternIoCtl_sizeof__INTERNAL_I8042_HOOK_KEYBOARD) {
										KbFilter_InternIoCtl_status = -1073741811;
										goto L35;
									}
									else {
										KbFilter_InternIoCtl_hookKeyboard = KbFilter_InternIoCtl_irpStack__Parameters__DeviceIoControl__Type3InputBuffer;
										KbFilter_InternIoCtl_status = 0;
										goto L36;
									}
								}
								else if(KbFilter_InternIoCtl_irpStack__Parameters__DeviceIoControl__IoControlCode < KbFilter_InternIoCtl_CIL___Tmp28) {
									goto L36;
								}
								else {
									goto L36;
								}
							}
							else {
								goto L41;
							}
						}
						else {
							goto L40;
						}
}
					}
					else if(main_tmp_ndt_5 < 8) {
						goto L4;
					}
					else {
						goto L4;
					}
				}
				else {
					goto L31;
				}
			}
			else {
				goto L28;
			}
		}
		else {
			goto L9;
		}
	}
	else {
		goto L5;
	}
}
}
}
}

