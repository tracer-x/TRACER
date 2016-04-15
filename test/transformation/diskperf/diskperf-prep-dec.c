extern int __VERIFIER_nondet_int() ;
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
int routine  ;
int pirp  ;
int Executive  ;
int KernelMode  ;
int safety  ;
int DiskPerfStartDevice(int DiskPerfStartDevice_DeviceObject , int DiskPerfStartDevice_Irp ) ;
int DiskPerfRemoveDevice(int DiskPerfRemoveDevice_DeviceObject , int DiskPerfRemoveDevice_Irp ) ;
int DiskPerfSendToNextDriver(int DiskPerfSendToNextDriver_DeviceObject , int DiskPerfSendToNextDriver_Irp ) ;
int KeSetEvent(int KeSetEvent_Event , int KeSetEvent_Increment , int KeSetEvent_Wait ) ;
int DiskPerfForwardIrpSynchronous(int DiskPerfForwardIrpSynchronous_DeviceObject , int DiskPerfForwardIrpSynchronous_Irp ) ;
int DiskPerfRegisterDevice(int DiskPerfRegisterDevice_DeviceObject ) ;
void IofCompleteRequest(int IofCompleteRequest_Irp , int IofCompleteRequest_PriorityBoost ) ;
int IofCallDriver(int IofCallDriver_DeviceObject , int IofCallDriver_Irp ) ;
int PoCallDriver(int PoCallDriver_DeviceObject , int PoCallDriver_Irp ) ;
int KeWaitForSingleObject(int KeWaitForSingleObject_Object , int KeWaitForSingleObject_WaitReason , int KeWaitForSingleObject_WaitMode , int KeWaitForSingleObject_Alertable , int KeWaitForSingleObject_Timeout ) ;
int IoBuildDeviceIoControlRequest(int IoBuildDeviceIoControlRequest_IoControlCode , int IoBuildDeviceIoControlRequest_DeviceObject , int IoBuildDeviceIoControlRequest_InputBuffer , int IoBuildDeviceIoControlRequest_InputBufferLength , int IoBuildDeviceIoControlRequest_OutputBuffer , int IoBuildDeviceIoControlRequest_OutputBufferLength , int IoBuildDeviceIoControlRequest_InternalDeviceIoControl , int IoBuildDeviceIoControlRequest_Event , int IoBuildDeviceIoControlRequest_IoStatusBlock ) ;
extern int _SLICE() ;
extern int (DiskPerfIoCompletion)() ;
void main(void)
{
int TRACER_RV;
 int main_status ;
int main_irp ;
int main_irp_choice ;
int main_devobj ;
int main_tmp_ndt_1 ;
int main_tmp_ndt_2 ;
int main_tmp_ndt_3 ;
int main_tmp_ndt_4 ;
int main_tmp_ndt_5 ;
int TRACER_returning ;
{
	;
	TRACER_RV = nondet();
	TRACER_returning = 0;
	safety = 0;
	routine = 0;
	pirp = main_irp;
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
	if(main_status >= 0) {
		myStatus = 0;
		if(main_irp_choice >= 0 && main_irp_choice <= 0) {
			myStatus = -1073741637;
{
			s = NP;
			customIrp = 0;
			setEventCalled = customIrp;
			lowerDriverReturn = setEventCalled;
			compRegistered = lowerDriverReturn;
			compFptr = compRegistered;
			pended = compFptr;
			;
			TRACER_RV = nondet();
			main_tmp_ndt_1 = __VERIFIER_nondet_int();
			if(main_tmp_ndt_1 >= 0 && main_tmp_ndt_1 <= 0) {
L1:;
{
 int retres3 ;
				int DiskPerfCreate_DeviceObject ; int DiskPerfCreate_Irp ;
				DiskPerfCreate_DeviceObject = main_devobj;
				DiskPerfCreate_Irp = pirp;
{
				int IofCompleteRequest_Irp ; int IofCompleteRequest_PriorityBoost ;
				IofCompleteRequest_Irp = DiskPerfCreate_Irp;
				IofCompleteRequest_PriorityBoost = 0;
				safety = safety + (s - NP);
				s = DC;
				;
				TRACER_RV = nondet();
				retres3 = 0;
				TRACER_RV = (retres3);
				main_status = TRACER_RV;
				TRACER_RV = nondet();
L2:;
L3:;
				safety = safety + (s - DC);
L4:;
L5:;
                _SLICE(safety);
				/* END OF PATH at func_main@p52#1 */
}
}
			}
			else if(main_tmp_ndt_1 < 0) {
L6:;
				main_tmp_ndt_2 = __VERIFIER_nondet_int();
				if(main_tmp_ndt_2 >= 2 && main_tmp_ndt_2 <= 2) {
L7:;
{
 int DiskPerfDeviceControl_Irp__CurrentLocation ;
int DiskPerfDeviceControl_Irp__Tail__Overlay__CurrentStackLocation ;
int DiskPerfDeviceControl_DeviceObject__DeviceExtension ;
int DiskPerfDeviceControl_deviceExtension__TargetDeviceObject ;
int DiskPerfDeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode ;
int DiskPerfDeviceControl_currentIrpStack__Parameters__DeviceIoControl__OutputBufferLength ;
int DiskPerfDeviceControl_sizeof__DISK_PERFORMANCE ;
int DiskPerfDeviceControl_Irp__IoStatus__Information ;
int DiskPerfDeviceControl_deviceExtension__DiskCounters ;
int DiskPerfDeviceControl_Irp__AssociatedIrp__SystemBuffer ;
int DiskPerfDeviceControl_totalCounters__QueueDepth ;
int DiskPerfDeviceControl_deviceExtension__QueueDepth ;
int DiskPerfDeviceControl_Irp__IoStatus__Status ;
int DiskPerfDeviceControl_deviceExtension ;
int DiskPerfDeviceControl_currentIrpStack ;
int DiskPerfDeviceControl_status ;
int DiskPerfDeviceControl_i ;
int DiskPerfDeviceControl_totalCounters ;
int DiskPerfDeviceControl_diskCounters ;
int DiskPerfDeviceControl_tmp ;
int DiskPerfDeviceControl_CIL___Tmp24 ;
int DiskPerfDeviceControl_CIL___Tmp25 ;
int DiskPerfDeviceControl_CIL___Tmp26 ;
int retres27 ;
int TRACER_returning ;
					int DiskPerfDeviceControl_DeviceObject ; int DiskPerfDeviceControl_Irp ;
					DiskPerfDeviceControl_DeviceObject = main_devobj;
					DiskPerfDeviceControl_Irp = pirp;
					TRACER_returning = 0;
					DiskPerfDeviceControl_deviceExtension = DiskPerfDeviceControl_DeviceObject__DeviceExtension;
					DiskPerfDeviceControl_currentIrpStack = DiskPerfDeviceControl_Irp__Tail__Overlay__CurrentStackLocation;
					DiskPerfDeviceControl_CIL___Tmp24 = 32;
					DiskPerfDeviceControl_CIL___Tmp25 = 458752;
					DiskPerfDeviceControl_CIL___Tmp26 = 458784;
					if(DiskPerfDeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode >= DiskPerfDeviceControl_CIL___Tmp26 && DiskPerfDeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode <= DiskPerfDeviceControl_CIL___Tmp26) {
						if(DiskPerfDeviceControl_currentIrpStack__Parameters__DeviceIoControl__OutputBufferLength < DiskPerfDeviceControl_sizeof__DISK_PERFORMANCE) {
							DiskPerfDeviceControl_status = -1073741789;
							DiskPerfDeviceControl_Irp__IoStatus__Information = 0;
{
							int IofCompleteRequest_Irp ; int IofCompleteRequest_PriorityBoost ;
							IofCompleteRequest_Irp = DiskPerfDeviceControl_Irp;
							IofCompleteRequest_PriorityBoost = 0;
							safety = safety + (s - NP);
							s = DC;
							;
							TRACER_RV = nondet();
							retres27 = DiskPerfDeviceControl_status;
							TRACER_RV = (retres27);
							main_status = TRACER_RV;
							TRACER_RV = nondet();
							goto L3;
}
						}
						else {
							DiskPerfDeviceControl_diskCounters = DiskPerfDeviceControl_deviceExtension__DiskCounters;
							if(DiskPerfDeviceControl_diskCounters >= 0 && DiskPerfDeviceControl_diskCounters <= 0) {
{
								int IofCompleteRequest_Irp ; int IofCompleteRequest_PriorityBoost ;
								IofCompleteRequest_Irp = DiskPerfDeviceControl_Irp;
								IofCompleteRequest_PriorityBoost = 0;
								safety = safety + (s - NP);
								s = DC;
								;
								TRACER_RV = nondet();
								retres27 = -1073741823;
								TRACER_returning = 1;
								TRACER_RV = (retres27);
								main_status = TRACER_RV;
								TRACER_RV = nondet();
L8:;
								goto L3;
}
							}
							else if(DiskPerfDeviceControl_diskCounters < 0) {
L9:;
								DiskPerfDeviceControl_totalCounters = DiskPerfDeviceControl_Irp__AssociatedIrp__SystemBuffer;
								DiskPerfDeviceControl_i = 0;
								DiskPerfDeviceControl_totalCounters__QueueDepth = DiskPerfDeviceControl_deviceExtension__QueueDepth;
								DiskPerfDeviceControl_status = 0;
								DiskPerfDeviceControl_Irp__IoStatus__Information = DiskPerfDeviceControl_sizeof__DISK_PERFORMANCE;
{
								int IofCompleteRequest_Irp ; int IofCompleteRequest_PriorityBoost ;
								IofCompleteRequest_Irp = DiskPerfDeviceControl_Irp;
								IofCompleteRequest_PriorityBoost = 0;
								safety = safety + (s - NP);
								s = DC;
								;
								TRACER_RV = nondet();
								retres27 = DiskPerfDeviceControl_status;
								TRACER_RV = (retres27);
								main_status = TRACER_RV;
								TRACER_RV = nondet();
								goto L2;
}
							}
							else {
								goto L9;
							}
						}
					}
					else if(DiskPerfDeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode < DiskPerfDeviceControl_CIL___Tmp26) {
L10:;
{
 int IofCallDriver_returnVal2 ;
int IofCallDriver_compRetStatus ;
int IofCallDriver_lcontext ;
int IofCallDriver_CIL___Tmp7 ;
int IofCallDriver_tmp_ndt_8 ;
int IofCallDriver_tmp_ndt_9 ;
						int IofCallDriver_DeviceObject ; int IofCallDriver_Irp ;
						IofCallDriver_DeviceObject = DiskPerfDeviceControl_deviceExtension__TargetDeviceObject;
						IofCallDriver_Irp = DiskPerfDeviceControl_Irp;
						IofCallDriver_tmp_ndt_8 = __VERIFIER_nondet_int();
						if(IofCallDriver_tmp_ndt_8 >= 0 && IofCallDriver_tmp_ndt_8 <= 0) {
							IofCallDriver_returnVal2 = 0;
							s = IPC;
							lowerDriverReturn = IofCallDriver_returnVal2;
							TRACER_RV = (IofCallDriver_returnVal2);
							DiskPerfDeviceControl_tmp = TRACER_RV;
							TRACER_RV = nondet();
							retres27 = DiskPerfDeviceControl_tmp;
							TRACER_RV = (retres27);
							main_status = TRACER_RV;
							TRACER_RV = nondet();
L11:;
L12:;
							safety = safety + (main_status - lowerDriverReturn);
							goto L4;
						}
						else if(IofCallDriver_tmp_ndt_8 < 0) {
L13:;
							IofCallDriver_tmp_ndt_9 = __VERIFIER_nondet_int();
							if(IofCallDriver_tmp_ndt_9 >= 1 && IofCallDriver_tmp_ndt_9 <= 1) {
								IofCallDriver_returnVal2 = -1073741823;
								s = IPC;
								lowerDriverReturn = IofCallDriver_returnVal2;
								TRACER_RV = (IofCallDriver_returnVal2);
								DiskPerfDeviceControl_tmp = TRACER_RV;
								TRACER_RV = nondet();
								retres27 = DiskPerfDeviceControl_tmp;
								TRACER_RV = (retres27);
								main_status = TRACER_RV;
								TRACER_RV = nondet();
L14:;
								goto L12;
							}
							else if(IofCallDriver_tmp_ndt_9 < 1) {
L15:;
								IofCallDriver_returnVal2 = 259;
								s = IPC;
								lowerDriverReturn = IofCallDriver_returnVal2;
								TRACER_RV = (IofCallDriver_returnVal2);
								DiskPerfDeviceControl_tmp = TRACER_RV;
								TRACER_RV = nondet();
								retres27 = DiskPerfDeviceControl_tmp;
								TRACER_RV = (retres27);
								main_status = TRACER_RV;
								TRACER_RV = nondet();
L16:;
								goto L12;
							}
							else {
								goto L15;
							}
						}
						else {
							goto L13;
						}
}
					}
					else {
						goto L10;
					}
}
				}
				else if(main_tmp_ndt_2 < 2) {
L17:;
					main_tmp_ndt_3 = __VERIFIER_nondet_int();
					if(main_tmp_ndt_3 >= 3 && main_tmp_ndt_3 <= 3) {
{
 int DiskPerfDispatchPnp_Irp__Tail__Overlay__CurrentStackLocation ;
int DiskPerfDispatchPnp_irpSp__MinorFunction ;
int DiskPerfDispatchPnp_irpSp ;
int DiskPerfDispatchPnp_status ;
int DiskPerfDispatchPnp_tmp ;
int retres8 ;
int TRACER_returning ;
						int DiskPerfDispatchPnp_DeviceObject ; int DiskPerfDispatchPnp_Irp ;
						DiskPerfDispatchPnp_DeviceObject = main_devobj;
						DiskPerfDispatchPnp_Irp = pirp;
						TRACER_returning = 0;
						DiskPerfDispatchPnp_irpSp = DiskPerfDispatchPnp_Irp__Tail__Overlay__CurrentStackLocation;
						if(DiskPerfDispatchPnp_irpSp__MinorFunction >= 0 && DiskPerfDispatchPnp_irpSp__MinorFunction <= 0) {
{
 int DiskPerfStartDevice_DeviceObject__DeviceExtension ;
int DiskPerfStartDevice_deviceExtension__TargetDeviceObject ;
int DiskPerfStartDevice_Irp__IoStatus__Status ;
int DiskPerfStartDevice_deviceExtension ;
int DiskPerfStartDevice_status ;
							int DiskPerfStartDevice_DeviceObject ; int DiskPerfStartDevice_Irp ;
							DiskPerfStartDevice_DeviceObject = DiskPerfDispatchPnp_DeviceObject;
							DiskPerfStartDevice_Irp = DiskPerfDispatchPnp_Irp;
{
 int DiskPerfForwardIrpSynchronous_Irp__Tail__Overlay__CurrentStackLocation ;
int DiskPerfForwardIrpSynchronous_DeviceObject__DeviceExtension ;
int DiskPerfForwardIrpSynchronous_deviceExtension__TargetDeviceObject ;
int DiskPerfForwardIrpSynchronous_deviceExtension ;
int DiskPerfForwardIrpSynchronous_event ;
int DiskPerfForwardIrpSynchronous_status ;
int DiskPerfForwardIrpSynchronous_nextIrpSp__Control ;
int DiskPerfForwardIrpSynchronous_irpSp ;
int DiskPerfForwardIrpSynchronous_nextIrpSp ;
int DiskPerfForwardIrpSynchronous_irpSp__Context ;
int DiskPerfForwardIrpSynchronous_irpSp__Control ;
int DiskPerfForwardIrpSynchronous_irpSp___0 ;
int DiskPerfForwardIrpSynchronous_CIL___Tmp15 ;
							int DiskPerfForwardIrpSynchronous_DeviceObject ; int DiskPerfForwardIrpSynchronous_Irp ;
							DiskPerfForwardIrpSynchronous_DeviceObject = DiskPerfStartDevice_DeviceObject;
							DiskPerfForwardIrpSynchronous_Irp = DiskPerfStartDevice_Irp;
							DiskPerfForwardIrpSynchronous_deviceExtension = DiskPerfForwardIrpSynchronous_DeviceObject__DeviceExtension;
							DiskPerfForwardIrpSynchronous_irpSp = DiskPerfForwardIrpSynchronous_Irp__Tail__Overlay__CurrentStackLocation;
							DiskPerfForwardIrpSynchronous_nextIrpSp = DiskPerfForwardIrpSynchronous_Irp__Tail__Overlay__CurrentStackLocation - 1;
							DiskPerfForwardIrpSynchronous_nextIrpSp__Control = 0;
							safety = safety + (s - NP);
							safety = safety + (compRegistered - 0);
							compRegistered = 1;
							routine = 0;
							DiskPerfForwardIrpSynchronous_irpSp___0 = DiskPerfForwardIrpSynchronous_Irp__Tail__Overlay__CurrentStackLocation - 1;
							DiskPerfForwardIrpSynchronous_irpSp__Context = DiskPerfForwardIrpSynchronous_event;
							DiskPerfForwardIrpSynchronous_irpSp__Control = 224;
{
 int IofCallDriver_returnVal2 ;
int IofCallDriver_compRetStatus ;
int IofCallDriver_lcontext ;
int IofCallDriver_CIL___Tmp7 ;
int IofCallDriver_tmp_ndt_8 ;
int IofCallDriver_tmp_ndt_9 ;
							int IofCallDriver_DeviceObject ; int IofCallDriver_Irp ;
							IofCallDriver_DeviceObject = DiskPerfForwardIrpSynchronous_deviceExtension__TargetDeviceObject;
							IofCallDriver_Irp = DiskPerfForwardIrpSynchronous_Irp;
{
 int DiskPerfIrpCompletion_Event ;
int retres5 ;
							int DiskPerfIrpCompletion_DeviceObject ; int DiskPerfIrpCompletion_Irp ; int DiskPerfIrpCompletion_Context ;
							DiskPerfIrpCompletion_DeviceObject = IofCallDriver_DeviceObject;
							DiskPerfIrpCompletion_Irp = IofCallDriver_Irp;
							DiskPerfIrpCompletion_Context = IofCallDriver_lcontext;
{
 int KeSetEvent_l ;
							int KeSetEvent_Event ; int KeSetEvent_Increment ; int KeSetEvent_Wait ;
							KeSetEvent_Event = DiskPerfIrpCompletion_Event;
							KeSetEvent_Increment = 0;
							KeSetEvent_Wait = 0;
							setEventCalled = 1;
							;
							TRACER_RV = nondet();
							retres5 = -1073741802;
							TRACER_RV = (retres5);
							IofCallDriver_compRetStatus = TRACER_RV;
							TRACER_RV = nondet();
							IofCallDriver_CIL___Tmp7 = IofCallDriver_compRetStatus;
{
							safety = safety + (s - NP);
							s = MPR1;
							;
							TRACER_RV = nondet();
							IofCallDriver_tmp_ndt_8 = __VERIFIER_nondet_int();
							if(IofCallDriver_tmp_ndt_8 >= 0 && IofCallDriver_tmp_ndt_8 <= 0) {
								IofCallDriver_returnVal2 = 0;
								s = NP;
								lowerDriverReturn = IofCallDriver_returnVal2;
								TRACER_RV = (IofCallDriver_returnVal2);
								DiskPerfForwardIrpSynchronous_status = TRACER_RV;
								TRACER_RV = nondet();
								TRACER_RV = (DiskPerfForwardIrpSynchronous_status);
								DiskPerfStartDevice_status = TRACER_RV;
								TRACER_RV = nondet();
{
								int DiskPerfSyncFilterWithTarget_FilterDevice ; int DiskPerfSyncFilterWithTarget_TargetDevice ;
								DiskPerfSyncFilterWithTarget_FilterDevice = DiskPerfStartDevice_DeviceObject;
								DiskPerfSyncFilterWithTarget_TargetDevice = DiskPerfStartDevice_deviceExtension__TargetDeviceObject;
								;
								TRACER_RV = nondet();
{
 int DiskPerfRegisterDevice_DeviceObject__DeviceExtension ;
int DiskPerfRegisterDevice_deviceExtension__TargetDeviceObject ;
int DiskPerfRegisterDevice_sizeof__number ;
int DiskPerfRegisterDevice_ioStatus__Status ;
int DiskPerfRegisterDevice_sizeof__VOLUME_NUMBER ;
int DiskPerfRegisterDevice_status ;
int DiskPerfRegisterDevice_ioStatus ;
int DiskPerfRegisterDevice_event ;
int DiskPerfRegisterDevice_deviceExtension ;
int DiskPerfRegisterDevice_irp ;
int DiskPerfRegisterDevice_number ;
int DiskPerfRegisterDevice_registrationFlag ;
int DiskPerfRegisterDevice_sizeof__MOUNTDEV_NAME ;
int DiskPerfRegisterDevice_output__NameLength ;
int DiskPerfRegisterDevice_outputSize ;
int DiskPerfRegisterDevice_output ;
int DiskPerfRegisterDevice_volumeNumber ;
int DiskPerfRegisterDevice_CIL___Tmp20 ;
int DiskPerfRegisterDevice_CIL___Tmp21 ;
int DiskPerfRegisterDevice_CIL___Tmp22 ;
int DiskPerfRegisterDevice_CIL___Tmp23 ;
int DiskPerfRegisterDevice_CIL___Tmp24 ;
int DiskPerfRegisterDevice_CIL___Tmp25 ;
int DiskPerfRegisterDevice_CIL___Tmp26 ;
int DiskPerfRegisterDevice_CIL___Tmp27 ;
int DiskPerfRegisterDevice_CIL___Tmp28 ;
int DiskPerfRegisterDevice_CIL___Tmp29 ;
int DiskPerfRegisterDevice_CIL___Tmp30 ;
int DiskPerfRegisterDevice_CIL___Tmp31 ;
int DiskPerfRegisterDevice_CIL___Tmp32 ;
int DiskPerfRegisterDevice_CIL___Tmp34 ;
int DiskPerfRegisterDevice_CIL___Tmp35 ;
int DiskPerfRegisterDevice_CIL___Tmp36 ;
int DiskPerfRegisterDevice_CIL___Tmp37 ;
int retres37 ;
int TRACER_returning ;
								int DiskPerfRegisterDevice_DeviceObject ;
								DiskPerfRegisterDevice_DeviceObject = DiskPerfStartDevice_DeviceObject;
								TRACER_returning = 0;
								DiskPerfRegisterDevice_registrationFlag = 0;
								DiskPerfRegisterDevice_deviceExtension = DiskPerfRegisterDevice_DeviceObject__DeviceExtension;
								DiskPerfRegisterDevice_CIL___Tmp20 = 4224;
								DiskPerfRegisterDevice_CIL___Tmp21 = 2949120;
								DiskPerfRegisterDevice_CIL___Tmp22 = 2953344;
{
 int IoBuildDeviceIoControlRequest_malloc_ret ;
int IoBuildDeviceIoControlRequest_tmp_ndt_7 ;
int retres12 ;
								int IoBuildDeviceIoControlRequest_IoControlCode ; int IoBuildDeviceIoControlRequest_DeviceObject ; int IoBuildDeviceIoControlRequest_InputBuffer ; int IoBuildDeviceIoControlRequest_InputBufferLength ; int IoBuildDeviceIoControlRequest_OutputBuffer ; int IoBuildDeviceIoControlRequest_OutputBufferLength ; int IoBuildDeviceIoControlRequest_InternalDeviceIoControl ; int IoBuildDeviceIoControlRequest_Event ; int IoBuildDeviceIoControlRequest_IoStatusBlock ;
								IoBuildDeviceIoControlRequest_IoControlCode = DiskPerfRegisterDevice_CIL___Tmp22;
								IoBuildDeviceIoControlRequest_DeviceObject = DiskPerfRegisterDevice_deviceExtension__TargetDeviceObject;
								IoBuildDeviceIoControlRequest_InputBuffer = 0;
								IoBuildDeviceIoControlRequest_InputBufferLength = 0;
								IoBuildDeviceIoControlRequest_OutputBuffer = DiskPerfRegisterDevice_number;
								IoBuildDeviceIoControlRequest_OutputBufferLength = DiskPerfRegisterDevice_sizeof__number;
								IoBuildDeviceIoControlRequest_InternalDeviceIoControl = 0;
								IoBuildDeviceIoControlRequest_Event = DiskPerfRegisterDevice_event;
								IoBuildDeviceIoControlRequest_IoStatusBlock = DiskPerfRegisterDevice_ioStatus;
								customIrp = 1;
								IoBuildDeviceIoControlRequest_tmp_ndt_7 = __VERIFIER_nondet_int();
								if(IoBuildDeviceIoControlRequest_tmp_ndt_7 >= 0 && IoBuildDeviceIoControlRequest_tmp_ndt_7 <= 0) {
									retres12 = IoBuildDeviceIoControlRequest_malloc_ret;
L18:;
									TRACER_RV = (retres12);
									DiskPerfRegisterDevice_irp = TRACER_RV;
									TRACER_RV = nondet();
									if(DiskPerfRegisterDevice_irp >= 0 && DiskPerfRegisterDevice_irp <= 0) {
L19:;
										;
										TRACER_RV = nondet();
{
										int IofCompleteRequest_Irp ; int IofCompleteRequest_PriorityBoost ;
										IofCompleteRequest_Irp = DiskPerfStartDevice_Irp;
										IofCompleteRequest_PriorityBoost = 0;
										safety = safety + (s - NP);
										s = DC;
										;
										TRACER_RV = nondet();
										TRACER_RV = (DiskPerfStartDevice_status);
										DiskPerfDispatchPnp_status = TRACER_RV;
										TRACER_RV = nondet();
L20:;
										retres8 = DiskPerfDispatchPnp_status;
										TRACER_RV = (retres8);
										main_status = TRACER_RV;
										TRACER_RV = nondet();
L21:;
										goto L2;
}
									}
									else if(DiskPerfRegisterDevice_irp < 0) {
L22:;
{
 int IofCallDriver_returnVal2 ;
int IofCallDriver_compRetStatus ;
int IofCallDriver_lcontext ;
int IofCallDriver_CIL___Tmp7 ;
int IofCallDriver_tmp_ndt_8 ;
int IofCallDriver_tmp_ndt_9 ;
										int IofCallDriver_DeviceObject ; int IofCallDriver_Irp ;
										IofCallDriver_DeviceObject = DiskPerfRegisterDevice_deviceExtension__TargetDeviceObject;
										IofCallDriver_Irp = DiskPerfRegisterDevice_irp;
{
 int DiskPerfIrpCompletion_Event ;
int retres5 ;
										int DiskPerfIrpCompletion_DeviceObject ; int DiskPerfIrpCompletion_Irp ; int DiskPerfIrpCompletion_Context ;
										DiskPerfIrpCompletion_DeviceObject = IofCallDriver_DeviceObject;
										DiskPerfIrpCompletion_Irp = IofCallDriver_Irp;
										DiskPerfIrpCompletion_Context = IofCallDriver_lcontext;
{
 int KeSetEvent_l ;
										int KeSetEvent_Event ; int KeSetEvent_Increment ; int KeSetEvent_Wait ;
										KeSetEvent_Event = DiskPerfIrpCompletion_Event;
										KeSetEvent_Increment = 0;
										KeSetEvent_Wait = 0;
										setEventCalled = 1;
										;
										TRACER_RV = nondet();
										retres5 = -1073741802;
										TRACER_RV = (retres5);
										IofCallDriver_compRetStatus = TRACER_RV;
										TRACER_RV = nondet();
										IofCallDriver_CIL___Tmp7 = IofCallDriver_compRetStatus;
{
										safety = safety + (s - NP);
										s = MPR1;
										;
										TRACER_RV = nondet();
										IofCallDriver_tmp_ndt_8 = __VERIFIER_nondet_int();
										if(IofCallDriver_tmp_ndt_8 >= 0 && IofCallDriver_tmp_ndt_8 <= 0) {
											IofCallDriver_returnVal2 = 0;
											s = NP;
											lowerDriverReturn = IofCallDriver_returnVal2;
											DiskPerfRegisterDevice_status = TRACER_RV;
											TRACER_RV = nondet();
L23:;
											goto L19;
										}
										else if(IofCallDriver_tmp_ndt_8 < 0) {
L24:;
											IofCallDriver_tmp_ndt_9 = __VERIFIER_nondet_int();
											if(IofCallDriver_tmp_ndt_9 >= 1 && IofCallDriver_tmp_ndt_9 <= 1) {
												IofCallDriver_returnVal2 = -1073741823;
												s = NP;
												lowerDriverReturn = IofCallDriver_returnVal2;
												TRACER_RV = (IofCallDriver_returnVal2);
												DiskPerfRegisterDevice_status = TRACER_RV;
												TRACER_RV = nondet();
L25:;
												if(DiskPerfRegisterDevice_output >= 0 && DiskPerfRegisterDevice_output <= 0) {
													retres37 = -1073741670;
													TRACER_returning = 1;
L26:;
													goto L19;
												}
												else if(DiskPerfRegisterDevice_output < 0) {
{
 int IoBuildDeviceIoControlRequest_malloc_ret ;
int IoBuildDeviceIoControlRequest_tmp_ndt_7 ;
int retres12 ;
													int IoBuildDeviceIoControlRequest_IoControlCode ; int IoBuildDeviceIoControlRequest_DeviceObject ; int IoBuildDeviceIoControlRequest_InputBuffer ; int IoBuildDeviceIoControlRequest_InputBufferLength ; int IoBuildDeviceIoControlRequest_OutputBuffer ; int IoBuildDeviceIoControlRequest_OutputBufferLength ; int IoBuildDeviceIoControlRequest_InternalDeviceIoControl ; int IoBuildDeviceIoControlRequest_Event ; int IoBuildDeviceIoControlRequest_IoStatusBlock ;
													IoBuildDeviceIoControlRequest_IoControlCode = DiskPerfRegisterDevice_CIL___Tmp26;
													IoBuildDeviceIoControlRequest_DeviceObject = DiskPerfRegisterDevice_deviceExtension__TargetDeviceObject;
													IoBuildDeviceIoControlRequest_InputBuffer = 0;
													IoBuildDeviceIoControlRequest_InputBufferLength = 0;
													IoBuildDeviceIoControlRequest_OutputBuffer = DiskPerfRegisterDevice_output;
													IoBuildDeviceIoControlRequest_OutputBufferLength = DiskPerfRegisterDevice_outputSize;
													IoBuildDeviceIoControlRequest_InternalDeviceIoControl = 0;
													IoBuildDeviceIoControlRequest_Event = DiskPerfRegisterDevice_event;
													IoBuildDeviceIoControlRequest_IoStatusBlock = DiskPerfRegisterDevice_ioStatus;
													customIrp = 1;
													IoBuildDeviceIoControlRequest_tmp_ndt_7 = __VERIFIER_nondet_int();
													if(IoBuildDeviceIoControlRequest_tmp_ndt_7 >= 0 && IoBuildDeviceIoControlRequest_tmp_ndt_7 <= 0) {
														retres12 = IoBuildDeviceIoControlRequest_malloc_ret;
L27:;
														TRACER_RV = (retres12);
														DiskPerfRegisterDevice_irp = TRACER_RV;
														TRACER_RV = nondet();
														if(DiskPerfRegisterDevice_irp >= 0 && DiskPerfRegisterDevice_irp <= 0) {
L28:;
															retres37 = -1073741670;
															TRACER_returning = 1;
															goto L26;
														}
														else if(DiskPerfRegisterDevice_irp < 0) {
L29:;
{
 int IofCallDriver_returnVal2 ;
int IofCallDriver_compRetStatus ;
int IofCallDriver_lcontext ;
int IofCallDriver_CIL___Tmp7 ;
int IofCallDriver_tmp_ndt_8 ;
int IofCallDriver_tmp_ndt_9 ;
															int IofCallDriver_DeviceObject ; int IofCallDriver_Irp ;
															IofCallDriver_DeviceObject = DiskPerfRegisterDevice_deviceExtension__TargetDeviceObject;
															IofCallDriver_Irp = DiskPerfRegisterDevice_irp;
{
 int DiskPerfIrpCompletion_Event ;
int retres5 ;
															int DiskPerfIrpCompletion_DeviceObject ; int DiskPerfIrpCompletion_Irp ; int DiskPerfIrpCompletion_Context ;
															DiskPerfIrpCompletion_DeviceObject = IofCallDriver_DeviceObject;
															DiskPerfIrpCompletion_Irp = IofCallDriver_Irp;
															DiskPerfIrpCompletion_Context = IofCallDriver_lcontext;
{
 int KeSetEvent_l ;
															int KeSetEvent_Event ; int KeSetEvent_Increment ; int KeSetEvent_Wait ;
															KeSetEvent_Event = DiskPerfIrpCompletion_Event;
															KeSetEvent_Increment = 0;
															KeSetEvent_Wait = 0;
															setEventCalled = 1;
															;
															TRACER_RV = nondet();
															retres5 = -1073741802;
															TRACER_RV = (retres5);
															IofCallDriver_compRetStatus = TRACER_RV;
															TRACER_RV = nondet();
															IofCallDriver_CIL___Tmp7 = IofCallDriver_compRetStatus;
{
															safety = safety + (s - NP);
															s = MPR1;
															;
															TRACER_RV = nondet();
															IofCallDriver_tmp_ndt_8 = __VERIFIER_nondet_int();
															if(IofCallDriver_tmp_ndt_8 >= 0 && IofCallDriver_tmp_ndt_8 <= 0) {
																IofCallDriver_returnVal2 = 0;
																s = NP;
																lowerDriverReturn = IofCallDriver_returnVal2;
																TRACER_RV = (IofCallDriver_returnVal2);
																DiskPerfRegisterDevice_status = TRACER_RV;
																TRACER_RV = nondet();
L30:;
L31:;
L32:;
{
 int IoBuildDeviceIoControlRequest_malloc_ret ;
int IoBuildDeviceIoControlRequest_tmp_ndt_7 ;
int retres12 ;
																int IoBuildDeviceIoControlRequest_IoControlCode ; int IoBuildDeviceIoControlRequest_DeviceObject ; int IoBuildDeviceIoControlRequest_InputBuffer ; int IoBuildDeviceIoControlRequest_InputBufferLength ; int IoBuildDeviceIoControlRequest_OutputBuffer ; int IoBuildDeviceIoControlRequest_OutputBufferLength ; int IoBuildDeviceIoControlRequest_InternalDeviceIoControl ; int IoBuildDeviceIoControlRequest_Event ; int IoBuildDeviceIoControlRequest_IoStatusBlock ;
																IoBuildDeviceIoControlRequest_IoControlCode = DiskPerfRegisterDevice_CIL___Tmp36;
																IoBuildDeviceIoControlRequest_DeviceObject = DiskPerfRegisterDevice_deviceExtension__TargetDeviceObject;
																IoBuildDeviceIoControlRequest_InputBuffer = 0;
																IoBuildDeviceIoControlRequest_InputBufferLength = 0;
																IoBuildDeviceIoControlRequest_OutputBuffer = DiskPerfRegisterDevice_volumeNumber;
																IoBuildDeviceIoControlRequest_OutputBufferLength = DiskPerfRegisterDevice_sizeof__VOLUME_NUMBER;
																IoBuildDeviceIoControlRequest_InternalDeviceIoControl = 0;
																IoBuildDeviceIoControlRequest_Event = DiskPerfRegisterDevice_event;
																IoBuildDeviceIoControlRequest_IoStatusBlock = DiskPerfRegisterDevice_ioStatus;
																customIrp = 1;
																IoBuildDeviceIoControlRequest_tmp_ndt_7 = __VERIFIER_nondet_int();
																if(IoBuildDeviceIoControlRequest_tmp_ndt_7 >= 0 && IoBuildDeviceIoControlRequest_tmp_ndt_7 <= 0) {
																	retres12 = IoBuildDeviceIoControlRequest_malloc_ret;
L33:;
																	TRACER_RV = (retres12);
																	DiskPerfRegisterDevice_irp = TRACER_RV;
																	TRACER_RV = nondet();
																	if(DiskPerfRegisterDevice_irp >= 0 && DiskPerfRegisterDevice_irp <= 0) {
																		retres37 = -1073741670;
																		TRACER_returning = 1;
																		goto L26;
																	}
																	else if(DiskPerfRegisterDevice_irp < 0) {
L34:;
{
 int IofCallDriver_returnVal2 ;
int IofCallDriver_compRetStatus ;
int IofCallDriver_lcontext ;
int IofCallDriver_CIL___Tmp7 ;
int IofCallDriver_tmp_ndt_8 ;
int IofCallDriver_tmp_ndt_9 ;
																		int IofCallDriver_DeviceObject ; int IofCallDriver_Irp ;
																		IofCallDriver_DeviceObject = DiskPerfRegisterDevice_deviceExtension__TargetDeviceObject;
																		IofCallDriver_Irp = DiskPerfRegisterDevice_irp;
{
 int DiskPerfIrpCompletion_Event ;
int retres5 ;
																		int DiskPerfIrpCompletion_DeviceObject ; int DiskPerfIrpCompletion_Irp ; int DiskPerfIrpCompletion_Context ;
																		DiskPerfIrpCompletion_DeviceObject = IofCallDriver_DeviceObject;
																		DiskPerfIrpCompletion_Irp = IofCallDriver_Irp;
																		DiskPerfIrpCompletion_Context = IofCallDriver_lcontext;
{
 int KeSetEvent_l ;
																		int KeSetEvent_Event ; int KeSetEvent_Increment ; int KeSetEvent_Wait ;
																		KeSetEvent_Event = DiskPerfIrpCompletion_Event;
																		KeSetEvent_Increment = 0;
																		KeSetEvent_Wait = 0;
																		setEventCalled = 1;
																		;
																		TRACER_RV = nondet();
																		retres5 = -1073741802;
																		TRACER_RV = (retres5);
																		IofCallDriver_compRetStatus = TRACER_RV;
																		TRACER_RV = nondet();
																		IofCallDriver_CIL___Tmp7 = IofCallDriver_compRetStatus;
{
																		safety = safety + (s - NP);
																		s = MPR1;
																		;
																		TRACER_RV = nondet();
																		IofCallDriver_tmp_ndt_8 = __VERIFIER_nondet_int();
																		if(IofCallDriver_tmp_ndt_8 >= 0 && IofCallDriver_tmp_ndt_8 <= 0) {
																			IofCallDriver_returnVal2 = 0;
																			s = NP;
																			lowerDriverReturn = IofCallDriver_returnVal2;
																			DiskPerfRegisterDevice_status = TRACER_RV;
																			TRACER_RV = nondet();
																			goto L23;
																		}
																		else if(IofCallDriver_tmp_ndt_8 < 0) {
L35:;
																			IofCallDriver_tmp_ndt_9 = __VERIFIER_nondet_int();
																			if(IofCallDriver_tmp_ndt_9 >= 1 && IofCallDriver_tmp_ndt_9 <= 1) {
																				IofCallDriver_returnVal2 = -1073741823;
																				s = NP;
																				lowerDriverReturn = IofCallDriver_returnVal2;
																				DiskPerfRegisterDevice_status = TRACER_RV;
																				TRACER_RV = nondet();
																				goto L23;
																			}
																			else if(IofCallDriver_tmp_ndt_9 < 1) {
L36:;
																				IofCallDriver_returnVal2 = 259;
																				s = MPR3;
																				lowerDriverReturn = IofCallDriver_returnVal2;
																				TRACER_RV = (IofCallDriver_returnVal2);
																				DiskPerfRegisterDevice_status = TRACER_RV;
																				TRACER_RV = nondet();
																				DiskPerfRegisterDevice_CIL___Tmp37 = DiskPerfRegisterDevice_status;
{
 int KeWaitForSingleObject_tmp_ndt_10 ;
int retres7 ;
																				int KeWaitForSingleObject_Object ; int KeWaitForSingleObject_WaitReason ; int KeWaitForSingleObject_WaitMode ; int KeWaitForSingleObject_Alertable ; int KeWaitForSingleObject_Timeout ;
																				KeWaitForSingleObject_Object = DiskPerfRegisterDevice_event;
																				KeWaitForSingleObject_WaitReason = Executive;
																				KeWaitForSingleObject_WaitMode = KernelMode;
																				KeWaitForSingleObject_Alertable = 0;
																				KeWaitForSingleObject_Timeout = 0;
																				s = NP;
																				setEventCalled = 0;
L37:;
																				;
																				TRACER_RV = nondet();
																				goto L23;
}
																			}
																			else {
																				goto L36;
																			}
																		}
																		else {
																			goto L35;
																		}
}
}
}
}
																	}
																	else {
																		goto L34;
																	}
																}
																else if(IoBuildDeviceIoControlRequest_tmp_ndt_7 < 0) {
L38:;
																	retres12 = 0;
																	goto L33;
																}
																else {
																	goto L38;
																}
}
															}
															else if(IofCallDriver_tmp_ndt_8 < 0) {
L39:;
																IofCallDriver_tmp_ndt_9 = __VERIFIER_nondet_int();
																if(IofCallDriver_tmp_ndt_9 >= 1 && IofCallDriver_tmp_ndt_9 <= 1) {
																	IofCallDriver_returnVal2 = -1073741823;
																	s = NP;
																	lowerDriverReturn = IofCallDriver_returnVal2;
																	TRACER_RV = (IofCallDriver_returnVal2);
																	DiskPerfRegisterDevice_status = TRACER_RV;
																	TRACER_RV = nondet();
L40:;
L41:;
L42:;
																	retres37 = DiskPerfRegisterDevice_status;
																	TRACER_returning = 1;
																	goto L26;
																}
																else if(IofCallDriver_tmp_ndt_9 < 1) {
L43:;
																	IofCallDriver_returnVal2 = 259;
																	s = MPR3;
																	lowerDriverReturn = IofCallDriver_returnVal2;
																	TRACER_RV = (IofCallDriver_returnVal2);
																	DiskPerfRegisterDevice_status = TRACER_RV;
																	TRACER_RV = nondet();
																	DiskPerfRegisterDevice_CIL___Tmp27 = DiskPerfRegisterDevice_status;
{
 int KeWaitForSingleObject_tmp_ndt_10 ;
int retres7 ;
																	int KeWaitForSingleObject_Object ; int KeWaitForSingleObject_WaitReason ; int KeWaitForSingleObject_WaitMode ; int KeWaitForSingleObject_Alertable ; int KeWaitForSingleObject_Timeout ;
																	KeWaitForSingleObject_Object = DiskPerfRegisterDevice_event;
																	KeWaitForSingleObject_WaitReason = Executive;
																	KeWaitForSingleObject_WaitMode = KernelMode;
																	KeWaitForSingleObject_Alertable = 0;
																	KeWaitForSingleObject_Timeout = 0;
																	s = NP;
																	setEventCalled = 0;
L44:;
																	;
																	TRACER_RV = nondet();
																	DiskPerfRegisterDevice_status = DiskPerfRegisterDevice_ioStatus__Status;
																	DiskPerfRegisterDevice_CIL___Tmp28 = DiskPerfRegisterDevice_status;
																	if(DiskPerfRegisterDevice_CIL___Tmp28 >= -2147483643 && DiskPerfRegisterDevice_CIL___Tmp28 <= -2147483643) {
L45:;
{
 int IoBuildDeviceIoControlRequest_malloc_ret ;
int IoBuildDeviceIoControlRequest_tmp_ndt_7 ;
int retres12 ;
																		int IoBuildDeviceIoControlRequest_IoControlCode ; int IoBuildDeviceIoControlRequest_DeviceObject ; int IoBuildDeviceIoControlRequest_InputBuffer ; int IoBuildDeviceIoControlRequest_InputBufferLength ; int IoBuildDeviceIoControlRequest_OutputBuffer ; int IoBuildDeviceIoControlRequest_OutputBufferLength ; int IoBuildDeviceIoControlRequest_InternalDeviceIoControl ; int IoBuildDeviceIoControlRequest_Event ; int IoBuildDeviceIoControlRequest_IoStatusBlock ;
																		IoBuildDeviceIoControlRequest_IoControlCode = DiskPerfRegisterDevice_CIL___Tmp31;
																		IoBuildDeviceIoControlRequest_DeviceObject = DiskPerfRegisterDevice_deviceExtension__TargetDeviceObject;
																		IoBuildDeviceIoControlRequest_InputBuffer = 0;
																		IoBuildDeviceIoControlRequest_InputBufferLength = 0;
																		IoBuildDeviceIoControlRequest_OutputBuffer = DiskPerfRegisterDevice_output;
																		IoBuildDeviceIoControlRequest_OutputBufferLength = DiskPerfRegisterDevice_outputSize;
																		IoBuildDeviceIoControlRequest_InternalDeviceIoControl = 0;
																		IoBuildDeviceIoControlRequest_Event = DiskPerfRegisterDevice_event;
																		IoBuildDeviceIoControlRequest_IoStatusBlock = DiskPerfRegisterDevice_ioStatus;
																		customIrp = 1;
																		IoBuildDeviceIoControlRequest_tmp_ndt_7 = __VERIFIER_nondet_int();
																		if(IoBuildDeviceIoControlRequest_tmp_ndt_7 >= 0 && IoBuildDeviceIoControlRequest_tmp_ndt_7 <= 0) {
																			retres12 = IoBuildDeviceIoControlRequest_malloc_ret;
L46:;
																			TRACER_RV = (retres12);
																			DiskPerfRegisterDevice_irp = TRACER_RV;
																			TRACER_RV = nondet();
																			if(DiskPerfRegisterDevice_irp >= 0 && DiskPerfRegisterDevice_irp <= 0) {
																				retres37 = -1073741670;
																				TRACER_returning = 1;
																				goto L26;
																			}
																			else if(DiskPerfRegisterDevice_irp < 0) {
L47:;
{
 int IofCallDriver_returnVal2 ;
int IofCallDriver_compRetStatus ;
int IofCallDriver_lcontext ;
int IofCallDriver_CIL___Tmp7 ;
int IofCallDriver_tmp_ndt_8 ;
int IofCallDriver_tmp_ndt_9 ;
																				int IofCallDriver_DeviceObject ; int IofCallDriver_Irp ;
																				IofCallDriver_DeviceObject = DiskPerfRegisterDevice_deviceExtension__TargetDeviceObject;
																				IofCallDriver_Irp = DiskPerfRegisterDevice_irp;
{
 int DiskPerfIrpCompletion_Event ;
int retres5 ;
																				int DiskPerfIrpCompletion_DeviceObject ; int DiskPerfIrpCompletion_Irp ; int DiskPerfIrpCompletion_Context ;
																				DiskPerfIrpCompletion_DeviceObject = IofCallDriver_DeviceObject;
																				DiskPerfIrpCompletion_Irp = IofCallDriver_Irp;
																				DiskPerfIrpCompletion_Context = IofCallDriver_lcontext;
{
 int KeSetEvent_l ;
																				int KeSetEvent_Event ; int KeSetEvent_Increment ; int KeSetEvent_Wait ;
																				KeSetEvent_Event = DiskPerfIrpCompletion_Event;
																				KeSetEvent_Increment = 0;
																				KeSetEvent_Wait = 0;
																				setEventCalled = 1;
																				;
																				TRACER_RV = nondet();
																				retres5 = -1073741802;
																				TRACER_RV = (retres5);
																				IofCallDriver_compRetStatus = TRACER_RV;
																				TRACER_RV = nondet();
																				IofCallDriver_CIL___Tmp7 = IofCallDriver_compRetStatus;
{
																				safety = safety + (s - NP);
																				s = MPR1;
																				;
																				TRACER_RV = nondet();
																				IofCallDriver_tmp_ndt_8 = __VERIFIER_nondet_int();
																				if(IofCallDriver_tmp_ndt_8 >= 0 && IofCallDriver_tmp_ndt_8 <= 0) {
																					IofCallDriver_returnVal2 = 0;
																					s = NP;
																					lowerDriverReturn = IofCallDriver_returnVal2;
																					TRACER_RV = (IofCallDriver_returnVal2);
																					DiskPerfRegisterDevice_status = TRACER_RV;
																					TRACER_RV = nondet();
																					goto L31;
																				}
																				else if(IofCallDriver_tmp_ndt_8 < 0) {
L48:;
																					IofCallDriver_tmp_ndt_9 = __VERIFIER_nondet_int();
																					if(IofCallDriver_tmp_ndt_9 >= 1 && IofCallDriver_tmp_ndt_9 <= 1) {
																						IofCallDriver_returnVal2 = -1073741823;
																						s = NP;
																						lowerDriverReturn = IofCallDriver_returnVal2;
																						TRACER_RV = (IofCallDriver_returnVal2);
																						DiskPerfRegisterDevice_status = TRACER_RV;
																						TRACER_RV = nondet();
																						goto L41;
																					}
																					else if(IofCallDriver_tmp_ndt_9 < 1) {
L49:;
																						IofCallDriver_returnVal2 = 259;
																						s = MPR3;
																						lowerDriverReturn = IofCallDriver_returnVal2;
																						TRACER_RV = (IofCallDriver_returnVal2);
																						DiskPerfRegisterDevice_status = TRACER_RV;
																						TRACER_RV = nondet();
																						DiskPerfRegisterDevice_CIL___Tmp32 = DiskPerfRegisterDevice_status;
{
 int KeWaitForSingleObject_tmp_ndt_10 ;
int retres7 ;
																						int KeWaitForSingleObject_Object ; int KeWaitForSingleObject_WaitReason ; int KeWaitForSingleObject_WaitMode ; int KeWaitForSingleObject_Alertable ; int KeWaitForSingleObject_Timeout ;
																						KeWaitForSingleObject_Object = DiskPerfRegisterDevice_event;
																						KeWaitForSingleObject_WaitReason = Executive;
																						KeWaitForSingleObject_WaitMode = KernelMode;
																						KeWaitForSingleObject_Alertable = 0;
																						KeWaitForSingleObject_Timeout = 0;
																						s = NP;
																						setEventCalled = 0;
L50:;
																						;
																						TRACER_RV = nondet();
																						DiskPerfRegisterDevice_status = DiskPerfRegisterDevice_ioStatus__Status;
L51:;
																						goto L42;
}
																					}
																					else {
																						goto L49;
																					}
																				}
																				else {
																					goto L48;
																				}
}
}
}
}
																			}
																			else {
																				goto L47;
																			}
																		}
																		else if(IoBuildDeviceIoControlRequest_tmp_ndt_7 < 0) {
L52:;
																			retres12 = 0;
																			goto L46;
																		}
																		else {
																			goto L52;
																		}
}
																	}
																	else if(DiskPerfRegisterDevice_CIL___Tmp28 < -2147483643) {
																		goto L51;
																	}
																	else {
L53:;
																		if(DiskPerfRegisterDevice_status < 0) {
																			goto L42;
																		}
																		else {
																			goto L32;
																		}
																	}
}
																}
																else {
																	goto L43;
																}
															}
															else {
																goto L39;
															}
}
}
}
}
														}
														else {
															goto L29;
														}
													}
													else if(IoBuildDeviceIoControlRequest_tmp_ndt_7 < 0) {
L54:;
														retres12 = 0;
														goto L27;
													}
													else {
														goto L54;
													}
}
												}
												else {
{
 int IoBuildDeviceIoControlRequest_malloc_ret ;
int IoBuildDeviceIoControlRequest_tmp_ndt_7 ;
int retres12 ;
													int IoBuildDeviceIoControlRequest_IoControlCode ; int IoBuildDeviceIoControlRequest_DeviceObject ; int IoBuildDeviceIoControlRequest_InputBuffer ; int IoBuildDeviceIoControlRequest_InputBufferLength ; int IoBuildDeviceIoControlRequest_OutputBuffer ; int IoBuildDeviceIoControlRequest_OutputBufferLength ; int IoBuildDeviceIoControlRequest_InternalDeviceIoControl ; int IoBuildDeviceIoControlRequest_Event ; int IoBuildDeviceIoControlRequest_IoStatusBlock ;
													IoBuildDeviceIoControlRequest_IoControlCode = DiskPerfRegisterDevice_CIL___Tmp26;
													IoBuildDeviceIoControlRequest_DeviceObject = DiskPerfRegisterDevice_deviceExtension__TargetDeviceObject;
													IoBuildDeviceIoControlRequest_InputBuffer = 0;
													IoBuildDeviceIoControlRequest_InputBufferLength = 0;
													IoBuildDeviceIoControlRequest_OutputBuffer = DiskPerfRegisterDevice_output;
													IoBuildDeviceIoControlRequest_OutputBufferLength = DiskPerfRegisterDevice_outputSize;
													IoBuildDeviceIoControlRequest_InternalDeviceIoControl = 0;
													IoBuildDeviceIoControlRequest_Event = DiskPerfRegisterDevice_event;
													IoBuildDeviceIoControlRequest_IoStatusBlock = DiskPerfRegisterDevice_ioStatus;
													customIrp = 1;
													IoBuildDeviceIoControlRequest_tmp_ndt_7 = __VERIFIER_nondet_int();
													if(IoBuildDeviceIoControlRequest_tmp_ndt_7 >= 0 && IoBuildDeviceIoControlRequest_tmp_ndt_7 <= 0) {
														retres12 = IoBuildDeviceIoControlRequest_malloc_ret;
L55:;
														TRACER_RV = (retres12);
														DiskPerfRegisterDevice_irp = TRACER_RV;
														TRACER_RV = nondet();
														if(DiskPerfRegisterDevice_irp >= 0 && DiskPerfRegisterDevice_irp <= 0) {
															goto L28;
														}
														else if(DiskPerfRegisterDevice_irp < 0) {
L56:;
{
 int IofCallDriver_returnVal2 ;
int IofCallDriver_compRetStatus ;
int IofCallDriver_lcontext ;
int IofCallDriver_CIL___Tmp7 ;
int IofCallDriver_tmp_ndt_8 ;
int IofCallDriver_tmp_ndt_9 ;
															int IofCallDriver_DeviceObject ; int IofCallDriver_Irp ;
															IofCallDriver_DeviceObject = DiskPerfRegisterDevice_deviceExtension__TargetDeviceObject;
															IofCallDriver_Irp = DiskPerfRegisterDevice_irp;
{
 int DiskPerfIrpCompletion_Event ;
int retres5 ;
															int DiskPerfIrpCompletion_DeviceObject ; int DiskPerfIrpCompletion_Irp ; int DiskPerfIrpCompletion_Context ;
															DiskPerfIrpCompletion_DeviceObject = IofCallDriver_DeviceObject;
															DiskPerfIrpCompletion_Irp = IofCallDriver_Irp;
															DiskPerfIrpCompletion_Context = IofCallDriver_lcontext;
{
 int KeSetEvent_l ;
															int KeSetEvent_Event ; int KeSetEvent_Increment ; int KeSetEvent_Wait ;
															KeSetEvent_Event = DiskPerfIrpCompletion_Event;
															KeSetEvent_Increment = 0;
															KeSetEvent_Wait = 0;
															setEventCalled = 1;
															;
															TRACER_RV = nondet();
															retres5 = -1073741802;
															TRACER_RV = (retres5);
															IofCallDriver_compRetStatus = TRACER_RV;
															TRACER_RV = nondet();
															IofCallDriver_CIL___Tmp7 = IofCallDriver_compRetStatus;
{
															safety = safety + (s - NP);
															s = MPR1;
															;
															TRACER_RV = nondet();
															IofCallDriver_tmp_ndt_8 = __VERIFIER_nondet_int();
															if(IofCallDriver_tmp_ndt_8 >= 0 && IofCallDriver_tmp_ndt_8 <= 0) {
																IofCallDriver_returnVal2 = 0;
																s = NP;
																lowerDriverReturn = IofCallDriver_returnVal2;
																TRACER_RV = (IofCallDriver_returnVal2);
																DiskPerfRegisterDevice_status = TRACER_RV;
																TRACER_RV = nondet();
																goto L30;
															}
															else if(IofCallDriver_tmp_ndt_8 < 0) {
L57:;
																IofCallDriver_tmp_ndt_9 = __VERIFIER_nondet_int();
																if(IofCallDriver_tmp_ndt_9 >= 1 && IofCallDriver_tmp_ndt_9 <= 1) {
																	IofCallDriver_returnVal2 = -1073741823;
																	s = NP;
																	lowerDriverReturn = IofCallDriver_returnVal2;
																	TRACER_RV = (IofCallDriver_returnVal2);
																	DiskPerfRegisterDevice_status = TRACER_RV;
																	TRACER_RV = nondet();
																	goto L40;
																}
																else if(IofCallDriver_tmp_ndt_9 < 1) {
L58:;
																	IofCallDriver_returnVal2 = 259;
																	s = MPR3;
																	lowerDriverReturn = IofCallDriver_returnVal2;
																	TRACER_RV = (IofCallDriver_returnVal2);
																	DiskPerfRegisterDevice_status = TRACER_RV;
																	TRACER_RV = nondet();
																	DiskPerfRegisterDevice_CIL___Tmp27 = DiskPerfRegisterDevice_status;
{
 int KeWaitForSingleObject_tmp_ndt_10 ;
int retres7 ;
																	int KeWaitForSingleObject_Object ; int KeWaitForSingleObject_WaitReason ; int KeWaitForSingleObject_WaitMode ; int KeWaitForSingleObject_Alertable ; int KeWaitForSingleObject_Timeout ;
																	KeWaitForSingleObject_Object = DiskPerfRegisterDevice_event;
																	KeWaitForSingleObject_WaitReason = Executive;
																	KeWaitForSingleObject_WaitMode = KernelMode;
																	KeWaitForSingleObject_Alertable = 0;
																	KeWaitForSingleObject_Timeout = 0;
																	s = NP;
																	setEventCalled = 0;
L59:;
																	;
																	TRACER_RV = nondet();
																	DiskPerfRegisterDevice_status = DiskPerfRegisterDevice_ioStatus__Status;
																	DiskPerfRegisterDevice_CIL___Tmp28 = DiskPerfRegisterDevice_status;
																	if(DiskPerfRegisterDevice_CIL___Tmp28 >= -2147483643 && DiskPerfRegisterDevice_CIL___Tmp28 <= -2147483643) {
																		goto L45;
																	}
																	else if(DiskPerfRegisterDevice_CIL___Tmp28 < -2147483643) {
																		goto L51;
																	}
																	else {
																		goto L53;
																	}
}
																}
																else {
																	goto L58;
																}
															}
															else {
																goto L57;
															}
}
}
}
}
														}
														else {
															goto L56;
														}
													}
													else if(IoBuildDeviceIoControlRequest_tmp_ndt_7 < 0) {
L60:;
														retres12 = 0;
														goto L55;
													}
													else {
														goto L60;
													}
}
												}
											}
											else if(IofCallDriver_tmp_ndt_9 < 1) {
L61:;
												IofCallDriver_returnVal2 = 259;
												s = MPR3;
												lowerDriverReturn = IofCallDriver_returnVal2;
												TRACER_RV = (IofCallDriver_returnVal2);
												DiskPerfRegisterDevice_status = TRACER_RV;
												TRACER_RV = nondet();
												DiskPerfRegisterDevice_CIL___Tmp23 = DiskPerfRegisterDevice_status;
{
 int KeWaitForSingleObject_tmp_ndt_10 ;
int retres7 ;
												int KeWaitForSingleObject_Object ; int KeWaitForSingleObject_WaitReason ; int KeWaitForSingleObject_WaitMode ; int KeWaitForSingleObject_Alertable ; int KeWaitForSingleObject_Timeout ;
												KeWaitForSingleObject_Object = DiskPerfRegisterDevice_event;
												KeWaitForSingleObject_WaitReason = Executive;
												KeWaitForSingleObject_WaitMode = KernelMode;
												KeWaitForSingleObject_Alertable = 0;
												KeWaitForSingleObject_Timeout = 0;
												s = NP;
												setEventCalled = 0;
L62:;
												;
												TRACER_RV = nondet();
												DiskPerfRegisterDevice_status = DiskPerfRegisterDevice_ioStatus__Status;
												if(DiskPerfRegisterDevice_status < 0) {
													goto L25;
												}
												else {
													goto L23;
												}
}
											}
											else {
												goto L61;
											}
										}
										else {
											goto L24;
										}
}
}
}
}
									}
									else {
										goto L22;
									}
								}
								else if(IoBuildDeviceIoControlRequest_tmp_ndt_7 < 0) {
L63:;
									retres12 = 0;
									goto L18;
								}
								else {
									goto L63;
								}
}
}
}
							}
							else if(IofCallDriver_tmp_ndt_8 < 0) {
L64:;
								IofCallDriver_tmp_ndt_9 = __VERIFIER_nondet_int();
								if(IofCallDriver_tmp_ndt_9 >= 1 && IofCallDriver_tmp_ndt_9 <= 1) {
									IofCallDriver_returnVal2 = -1073741823;
									s = NP;
									lowerDriverReturn = IofCallDriver_returnVal2;
									TRACER_RV = (IofCallDriver_returnVal2);
									DiskPerfForwardIrpSynchronous_status = TRACER_RV;
									TRACER_RV = nondet();
									TRACER_RV = (DiskPerfForwardIrpSynchronous_status);
									DiskPerfStartDevice_status = TRACER_RV;
									TRACER_RV = nondet();
{
									int DiskPerfSyncFilterWithTarget_FilterDevice ; int DiskPerfSyncFilterWithTarget_TargetDevice ;
									DiskPerfSyncFilterWithTarget_FilterDevice = DiskPerfStartDevice_DeviceObject;
									DiskPerfSyncFilterWithTarget_TargetDevice = DiskPerfStartDevice_deviceExtension__TargetDeviceObject;
									;
									TRACER_RV = nondet();
{
 int DiskPerfRegisterDevice_DeviceObject__DeviceExtension ;
int DiskPerfRegisterDevice_deviceExtension__TargetDeviceObject ;
int DiskPerfRegisterDevice_sizeof__number ;
int DiskPerfRegisterDevice_ioStatus__Status ;
int DiskPerfRegisterDevice_sizeof__VOLUME_NUMBER ;
int DiskPerfRegisterDevice_status ;
int DiskPerfRegisterDevice_ioStatus ;
int DiskPerfRegisterDevice_event ;
int DiskPerfRegisterDevice_deviceExtension ;
int DiskPerfRegisterDevice_irp ;
int DiskPerfRegisterDevice_number ;
int DiskPerfRegisterDevice_registrationFlag ;
int DiskPerfRegisterDevice_sizeof__MOUNTDEV_NAME ;
int DiskPerfRegisterDevice_output__NameLength ;
int DiskPerfRegisterDevice_outputSize ;
int DiskPerfRegisterDevice_output ;
int DiskPerfRegisterDevice_volumeNumber ;
int DiskPerfRegisterDevice_CIL___Tmp20 ;
int DiskPerfRegisterDevice_CIL___Tmp21 ;
int DiskPerfRegisterDevice_CIL___Tmp22 ;
int DiskPerfRegisterDevice_CIL___Tmp23 ;
int DiskPerfRegisterDevice_CIL___Tmp24 ;
int DiskPerfRegisterDevice_CIL___Tmp25 ;
int DiskPerfRegisterDevice_CIL___Tmp26 ;
int DiskPerfRegisterDevice_CIL___Tmp27 ;
int DiskPerfRegisterDevice_CIL___Tmp28 ;
int DiskPerfRegisterDevice_CIL___Tmp29 ;
int DiskPerfRegisterDevice_CIL___Tmp30 ;
int DiskPerfRegisterDevice_CIL___Tmp31 ;
int DiskPerfRegisterDevice_CIL___Tmp32 ;
int DiskPerfRegisterDevice_CIL___Tmp34 ;
int DiskPerfRegisterDevice_CIL___Tmp35 ;
int DiskPerfRegisterDevice_CIL___Tmp36 ;
int DiskPerfRegisterDevice_CIL___Tmp37 ;
int retres37 ;
int TRACER_returning ;
									int DiskPerfRegisterDevice_DeviceObject ;
									DiskPerfRegisterDevice_DeviceObject = DiskPerfStartDevice_DeviceObject;
									TRACER_returning = 0;
									DiskPerfRegisterDevice_registrationFlag = 0;
									DiskPerfRegisterDevice_deviceExtension = DiskPerfRegisterDevice_DeviceObject__DeviceExtension;
									DiskPerfRegisterDevice_CIL___Tmp20 = 4224;
									DiskPerfRegisterDevice_CIL___Tmp21 = 2949120;
									DiskPerfRegisterDevice_CIL___Tmp22 = 2953344;
{
 int IoBuildDeviceIoControlRequest_malloc_ret ;
int IoBuildDeviceIoControlRequest_tmp_ndt_7 ;
int retres12 ;
									int IoBuildDeviceIoControlRequest_IoControlCode ; int IoBuildDeviceIoControlRequest_DeviceObject ; int IoBuildDeviceIoControlRequest_InputBuffer ; int IoBuildDeviceIoControlRequest_InputBufferLength ; int IoBuildDeviceIoControlRequest_OutputBuffer ; int IoBuildDeviceIoControlRequest_OutputBufferLength ; int IoBuildDeviceIoControlRequest_InternalDeviceIoControl ; int IoBuildDeviceIoControlRequest_Event ; int IoBuildDeviceIoControlRequest_IoStatusBlock ;
									IoBuildDeviceIoControlRequest_IoControlCode = DiskPerfRegisterDevice_CIL___Tmp22;
									IoBuildDeviceIoControlRequest_DeviceObject = DiskPerfRegisterDevice_deviceExtension__TargetDeviceObject;
									IoBuildDeviceIoControlRequest_InputBuffer = 0;
									IoBuildDeviceIoControlRequest_InputBufferLength = 0;
									IoBuildDeviceIoControlRequest_OutputBuffer = DiskPerfRegisterDevice_number;
									IoBuildDeviceIoControlRequest_OutputBufferLength = DiskPerfRegisterDevice_sizeof__number;
									IoBuildDeviceIoControlRequest_InternalDeviceIoControl = 0;
									IoBuildDeviceIoControlRequest_Event = DiskPerfRegisterDevice_event;
									IoBuildDeviceIoControlRequest_IoStatusBlock = DiskPerfRegisterDevice_ioStatus;
									customIrp = 1;
									IoBuildDeviceIoControlRequest_tmp_ndt_7 = __VERIFIER_nondet_int();
									if(IoBuildDeviceIoControlRequest_tmp_ndt_7 >= 0 && IoBuildDeviceIoControlRequest_tmp_ndt_7 <= 0) {
										retres12 = IoBuildDeviceIoControlRequest_malloc_ret;
L65:;
										TRACER_RV = (retres12);
										DiskPerfRegisterDevice_irp = TRACER_RV;
										TRACER_RV = nondet();
										if(DiskPerfRegisterDevice_irp >= 0 && DiskPerfRegisterDevice_irp <= 0) {
L66:;
											;
											TRACER_RV = nondet();
{
											int IofCompleteRequest_Irp ; int IofCompleteRequest_PriorityBoost ;
											IofCompleteRequest_Irp = DiskPerfStartDevice_Irp;
											IofCompleteRequest_PriorityBoost = 0;
											safety = safety + (s - NP);
											s = DC;
											;
											TRACER_RV = nondet();
											TRACER_RV = (DiskPerfStartDevice_status);
											DiskPerfDispatchPnp_status = TRACER_RV;
											TRACER_RV = nondet();
L67:;
											retres8 = DiskPerfDispatchPnp_status;
											TRACER_RV = (retres8);
											main_status = TRACER_RV;
											TRACER_RV = nondet();
L68:;
											goto L8;
}
										}
										else if(DiskPerfRegisterDevice_irp < 0) {
L69:;
{
 int IofCallDriver_returnVal2 ;
int IofCallDriver_compRetStatus ;
int IofCallDriver_lcontext ;
int IofCallDriver_CIL___Tmp7 ;
int IofCallDriver_tmp_ndt_8 ;
int IofCallDriver_tmp_ndt_9 ;
											int IofCallDriver_DeviceObject ; int IofCallDriver_Irp ;
											IofCallDriver_DeviceObject = DiskPerfRegisterDevice_deviceExtension__TargetDeviceObject;
											IofCallDriver_Irp = DiskPerfRegisterDevice_irp;
{
 int DiskPerfIrpCompletion_Event ;
int retres5 ;
											int DiskPerfIrpCompletion_DeviceObject ; int DiskPerfIrpCompletion_Irp ; int DiskPerfIrpCompletion_Context ;
											DiskPerfIrpCompletion_DeviceObject = IofCallDriver_DeviceObject;
											DiskPerfIrpCompletion_Irp = IofCallDriver_Irp;
											DiskPerfIrpCompletion_Context = IofCallDriver_lcontext;
{
 int KeSetEvent_l ;
											int KeSetEvent_Event ; int KeSetEvent_Increment ; int KeSetEvent_Wait ;
											KeSetEvent_Event = DiskPerfIrpCompletion_Event;
											KeSetEvent_Increment = 0;
											KeSetEvent_Wait = 0;
											setEventCalled = 1;
											;
											TRACER_RV = nondet();
											retres5 = -1073741802;
											TRACER_RV = (retres5);
											IofCallDriver_compRetStatus = TRACER_RV;
											TRACER_RV = nondet();
											IofCallDriver_CIL___Tmp7 = IofCallDriver_compRetStatus;
{
											safety = safety + (s - NP);
											s = MPR1;
											;
											TRACER_RV = nondet();
											IofCallDriver_tmp_ndt_8 = __VERIFIER_nondet_int();
											if(IofCallDriver_tmp_ndt_8 >= 0 && IofCallDriver_tmp_ndt_8 <= 0) {
												IofCallDriver_returnVal2 = 0;
												s = NP;
												lowerDriverReturn = IofCallDriver_returnVal2;
												TRACER_RV = (IofCallDriver_returnVal2);
												DiskPerfRegisterDevice_status = TRACER_RV;
												TRACER_RV = nondet();
												DiskPerfRegisterDevice_CIL___Tmp23 = DiskPerfRegisterDevice_status;
L70:;
												goto L66;
											}
											else if(IofCallDriver_tmp_ndt_8 < 0) {
L71:;
												IofCallDriver_tmp_ndt_9 = __VERIFIER_nondet_int();
												if(IofCallDriver_tmp_ndt_9 >= 1 && IofCallDriver_tmp_ndt_9 <= 1) {
													IofCallDriver_returnVal2 = -1073741823;
													s = NP;
													lowerDriverReturn = IofCallDriver_returnVal2;
													TRACER_RV = (IofCallDriver_returnVal2);
													DiskPerfRegisterDevice_status = TRACER_RV;
													TRACER_RV = nondet();
L72:;
													if(DiskPerfRegisterDevice_output >= 0 && DiskPerfRegisterDevice_output <= 0) {
														retres37 = -1073741670;
														TRACER_returning = 1;
L73:;
														goto L66;
													}
													else if(DiskPerfRegisterDevice_output < 0) {
{
 int IoBuildDeviceIoControlRequest_malloc_ret ;
int IoBuildDeviceIoControlRequest_tmp_ndt_7 ;
int retres12 ;
														int IoBuildDeviceIoControlRequest_IoControlCode ; int IoBuildDeviceIoControlRequest_DeviceObject ; int IoBuildDeviceIoControlRequest_InputBuffer ; int IoBuildDeviceIoControlRequest_InputBufferLength ; int IoBuildDeviceIoControlRequest_OutputBuffer ; int IoBuildDeviceIoControlRequest_OutputBufferLength ; int IoBuildDeviceIoControlRequest_InternalDeviceIoControl ; int IoBuildDeviceIoControlRequest_Event ; int IoBuildDeviceIoControlRequest_IoStatusBlock ;
														IoBuildDeviceIoControlRequest_IoControlCode = DiskPerfRegisterDevice_CIL___Tmp26;
														IoBuildDeviceIoControlRequest_DeviceObject = DiskPerfRegisterDevice_deviceExtension__TargetDeviceObject;
														IoBuildDeviceIoControlRequest_InputBuffer = 0;
														IoBuildDeviceIoControlRequest_InputBufferLength = 0;
														IoBuildDeviceIoControlRequest_OutputBuffer = DiskPerfRegisterDevice_output;
														IoBuildDeviceIoControlRequest_OutputBufferLength = DiskPerfRegisterDevice_outputSize;
														IoBuildDeviceIoControlRequest_InternalDeviceIoControl = 0;
														IoBuildDeviceIoControlRequest_Event = DiskPerfRegisterDevice_event;
														IoBuildDeviceIoControlRequest_IoStatusBlock = DiskPerfRegisterDevice_ioStatus;
														customIrp = 1;
														IoBuildDeviceIoControlRequest_tmp_ndt_7 = __VERIFIER_nondet_int();
														if(IoBuildDeviceIoControlRequest_tmp_ndt_7 >= 0 && IoBuildDeviceIoControlRequest_tmp_ndt_7 <= 0) {
															retres12 = IoBuildDeviceIoControlRequest_malloc_ret;
L74:;
															TRACER_RV = (retres12);
															DiskPerfRegisterDevice_irp = TRACER_RV;
															TRACER_RV = nondet();
															if(DiskPerfRegisterDevice_irp >= 0 && DiskPerfRegisterDevice_irp <= 0) {
L75:;
																retres37 = -1073741670;
																TRACER_returning = 1;
																goto L73;
															}
															else if(DiskPerfRegisterDevice_irp < 0) {
L76:;
{
 int IofCallDriver_returnVal2 ;
int IofCallDriver_compRetStatus ;
int IofCallDriver_lcontext ;
int IofCallDriver_CIL___Tmp7 ;
int IofCallDriver_tmp_ndt_8 ;
int IofCallDriver_tmp_ndt_9 ;
																int IofCallDriver_DeviceObject ; int IofCallDriver_Irp ;
																IofCallDriver_DeviceObject = DiskPerfRegisterDevice_deviceExtension__TargetDeviceObject;
																IofCallDriver_Irp = DiskPerfRegisterDevice_irp;
{
 int DiskPerfIrpCompletion_Event ;
int retres5 ;
																int DiskPerfIrpCompletion_DeviceObject ; int DiskPerfIrpCompletion_Irp ; int DiskPerfIrpCompletion_Context ;
																DiskPerfIrpCompletion_DeviceObject = IofCallDriver_DeviceObject;
																DiskPerfIrpCompletion_Irp = IofCallDriver_Irp;
																DiskPerfIrpCompletion_Context = IofCallDriver_lcontext;
{
 int KeSetEvent_l ;
																int KeSetEvent_Event ; int KeSetEvent_Increment ; int KeSetEvent_Wait ;
																KeSetEvent_Event = DiskPerfIrpCompletion_Event;
																KeSetEvent_Increment = 0;
																KeSetEvent_Wait = 0;
																setEventCalled = 1;
																;
																TRACER_RV = nondet();
																retres5 = -1073741802;
																TRACER_RV = (retres5);
																IofCallDriver_compRetStatus = TRACER_RV;
																TRACER_RV = nondet();
																IofCallDriver_CIL___Tmp7 = IofCallDriver_compRetStatus;
{
																safety = safety + (s - NP);
																s = MPR1;
																;
																TRACER_RV = nondet();
																IofCallDriver_tmp_ndt_8 = __VERIFIER_nondet_int();
																if(IofCallDriver_tmp_ndt_8 >= 0 && IofCallDriver_tmp_ndt_8 <= 0) {
																	IofCallDriver_returnVal2 = 0;
																	s = NP;
																	lowerDriverReturn = IofCallDriver_returnVal2;
																	TRACER_RV = (IofCallDriver_returnVal2);
																	DiskPerfRegisterDevice_status = TRACER_RV;
																	TRACER_RV = nondet();
L77:;
																	DiskPerfRegisterDevice_CIL___Tmp27 = DiskPerfRegisterDevice_status;
																	DiskPerfRegisterDevice_CIL___Tmp28 = DiskPerfRegisterDevice_status;
L78:;
L79:;
{
 int IoBuildDeviceIoControlRequest_malloc_ret ;
int IoBuildDeviceIoControlRequest_tmp_ndt_7 ;
int retres12 ;
																	int IoBuildDeviceIoControlRequest_IoControlCode ; int IoBuildDeviceIoControlRequest_DeviceObject ; int IoBuildDeviceIoControlRequest_InputBuffer ; int IoBuildDeviceIoControlRequest_InputBufferLength ; int IoBuildDeviceIoControlRequest_OutputBuffer ; int IoBuildDeviceIoControlRequest_OutputBufferLength ; int IoBuildDeviceIoControlRequest_InternalDeviceIoControl ; int IoBuildDeviceIoControlRequest_Event ; int IoBuildDeviceIoControlRequest_IoStatusBlock ;
																	IoBuildDeviceIoControlRequest_IoControlCode = DiskPerfRegisterDevice_CIL___Tmp36;
																	IoBuildDeviceIoControlRequest_DeviceObject = DiskPerfRegisterDevice_deviceExtension__TargetDeviceObject;
																	IoBuildDeviceIoControlRequest_InputBuffer = 0;
																	IoBuildDeviceIoControlRequest_InputBufferLength = 0;
																	IoBuildDeviceIoControlRequest_OutputBuffer = DiskPerfRegisterDevice_volumeNumber;
																	IoBuildDeviceIoControlRequest_OutputBufferLength = DiskPerfRegisterDevice_sizeof__VOLUME_NUMBER;
																	IoBuildDeviceIoControlRequest_InternalDeviceIoControl = 0;
																	IoBuildDeviceIoControlRequest_Event = DiskPerfRegisterDevice_event;
																	IoBuildDeviceIoControlRequest_IoStatusBlock = DiskPerfRegisterDevice_ioStatus;
																	customIrp = 1;
																	IoBuildDeviceIoControlRequest_tmp_ndt_7 = __VERIFIER_nondet_int();
																	if(IoBuildDeviceIoControlRequest_tmp_ndt_7 >= 0 && IoBuildDeviceIoControlRequest_tmp_ndt_7 <= 0) {
																		retres12 = IoBuildDeviceIoControlRequest_malloc_ret;
L80:;
																		TRACER_RV = (retres12);
																		DiskPerfRegisterDevice_irp = TRACER_RV;
																		TRACER_RV = nondet();
																		if(DiskPerfRegisterDevice_irp >= 0 && DiskPerfRegisterDevice_irp <= 0) {
																			retres37 = -1073741670;
																			TRACER_returning = 1;
																			goto L73;
																		}
																		else if(DiskPerfRegisterDevice_irp < 0) {
L81:;
{
 int IofCallDriver_returnVal2 ;
int IofCallDriver_compRetStatus ;
int IofCallDriver_lcontext ;
int IofCallDriver_CIL___Tmp7 ;
int IofCallDriver_tmp_ndt_8 ;
int IofCallDriver_tmp_ndt_9 ;
																			int IofCallDriver_DeviceObject ; int IofCallDriver_Irp ;
																			IofCallDriver_DeviceObject = DiskPerfRegisterDevice_deviceExtension__TargetDeviceObject;
																			IofCallDriver_Irp = DiskPerfRegisterDevice_irp;
{
 int DiskPerfIrpCompletion_Event ;
int retres5 ;
																			int DiskPerfIrpCompletion_DeviceObject ; int DiskPerfIrpCompletion_Irp ; int DiskPerfIrpCompletion_Context ;
																			DiskPerfIrpCompletion_DeviceObject = IofCallDriver_DeviceObject;
																			DiskPerfIrpCompletion_Irp = IofCallDriver_Irp;
																			DiskPerfIrpCompletion_Context = IofCallDriver_lcontext;
{
 int KeSetEvent_l ;
																			int KeSetEvent_Event ; int KeSetEvent_Increment ; int KeSetEvent_Wait ;
																			KeSetEvent_Event = DiskPerfIrpCompletion_Event;
																			KeSetEvent_Increment = 0;
																			KeSetEvent_Wait = 0;
																			setEventCalled = 1;
																			;
																			TRACER_RV = nondet();
																			retres5 = -1073741802;
																			TRACER_RV = (retres5);
																			IofCallDriver_compRetStatus = TRACER_RV;
																			TRACER_RV = nondet();
																			IofCallDriver_CIL___Tmp7 = IofCallDriver_compRetStatus;
{
																			safety = safety + (s - NP);
																			s = MPR1;
																			;
																			TRACER_RV = nondet();
																			IofCallDriver_tmp_ndt_8 = __VERIFIER_nondet_int();
																			if(IofCallDriver_tmp_ndt_8 >= 0 && IofCallDriver_tmp_ndt_8 <= 0) {
																				IofCallDriver_returnVal2 = 0;
																				s = NP;
																				lowerDriverReturn = IofCallDriver_returnVal2;
																				TRACER_RV = (IofCallDriver_returnVal2);
																				DiskPerfRegisterDevice_status = TRACER_RV;
																				TRACER_RV = nondet();
																				DiskPerfRegisterDevice_CIL___Tmp37 = DiskPerfRegisterDevice_status;
																				goto L70;
																			}
																			else if(IofCallDriver_tmp_ndt_8 < 0) {
L82:;
																				IofCallDriver_tmp_ndt_9 = __VERIFIER_nondet_int();
																				if(IofCallDriver_tmp_ndt_9 >= 1 && IofCallDriver_tmp_ndt_9 <= 1) {
																					IofCallDriver_returnVal2 = -1073741823;
																					s = NP;
																					lowerDriverReturn = IofCallDriver_returnVal2;
																					DiskPerfRegisterDevice_status = TRACER_RV;
																					TRACER_RV = nondet();
																					goto L70;
																				}
																				else if(IofCallDriver_tmp_ndt_9 < 1) {
L83:;
																					IofCallDriver_returnVal2 = 259;
																					s = MPR3;
																					lowerDriverReturn = IofCallDriver_returnVal2;
																					TRACER_RV = (IofCallDriver_returnVal2);
																					DiskPerfRegisterDevice_status = TRACER_RV;
																					TRACER_RV = nondet();
																					DiskPerfRegisterDevice_CIL___Tmp37 = DiskPerfRegisterDevice_status;
{
 int KeWaitForSingleObject_tmp_ndt_10 ;
int retres7 ;
																					int KeWaitForSingleObject_Object ; int KeWaitForSingleObject_WaitReason ; int KeWaitForSingleObject_WaitMode ; int KeWaitForSingleObject_Alertable ; int KeWaitForSingleObject_Timeout ;
																					KeWaitForSingleObject_Object = DiskPerfRegisterDevice_event;
																					KeWaitForSingleObject_WaitReason = Executive;
																					KeWaitForSingleObject_WaitMode = KernelMode;
																					KeWaitForSingleObject_Alertable = 0;
																					KeWaitForSingleObject_Timeout = 0;
																					s = NP;
																					setEventCalled = 0;
L84:;
																					;
																					TRACER_RV = nondet();
																					goto L70;
}
																				}
																				else {
																					goto L83;
																				}
																			}
																			else {
																				goto L82;
																			}
}
}
}
}
																		}
																		else {
																			goto L81;
																		}
																	}
																	else if(IoBuildDeviceIoControlRequest_tmp_ndt_7 < 0) {
L85:;
																		retres12 = 0;
																		goto L80;
																	}
																	else {
																		goto L85;
																	}
}
																}
																else if(IofCallDriver_tmp_ndt_8 < 0) {
L86:;
																	IofCallDriver_tmp_ndt_9 = __VERIFIER_nondet_int();
																	if(IofCallDriver_tmp_ndt_9 >= 1 && IofCallDriver_tmp_ndt_9 <= 1) {
																		IofCallDriver_returnVal2 = -1073741823;
																		s = NP;
																		lowerDriverReturn = IofCallDriver_returnVal2;
																		TRACER_RV = (IofCallDriver_returnVal2);
																		DiskPerfRegisterDevice_status = TRACER_RV;
																		TRACER_RV = nondet();
L87:;
																		DiskPerfRegisterDevice_CIL___Tmp28 = DiskPerfRegisterDevice_status;
L88:;
L89:;
																		retres37 = DiskPerfRegisterDevice_status;
																		TRACER_returning = 1;
																		goto L73;
																	}
																	else if(IofCallDriver_tmp_ndt_9 < 1) {
L90:;
																		IofCallDriver_returnVal2 = 259;
																		s = MPR3;
																		lowerDriverReturn = IofCallDriver_returnVal2;
																		TRACER_RV = (IofCallDriver_returnVal2);
																		DiskPerfRegisterDevice_status = TRACER_RV;
																		TRACER_RV = nondet();
																		DiskPerfRegisterDevice_CIL___Tmp27 = DiskPerfRegisterDevice_status;
{
 int KeWaitForSingleObject_tmp_ndt_10 ;
int retres7 ;
																		int KeWaitForSingleObject_Object ; int KeWaitForSingleObject_WaitReason ; int KeWaitForSingleObject_WaitMode ; int KeWaitForSingleObject_Alertable ; int KeWaitForSingleObject_Timeout ;
																		KeWaitForSingleObject_Object = DiskPerfRegisterDevice_event;
																		KeWaitForSingleObject_WaitReason = Executive;
																		KeWaitForSingleObject_WaitMode = KernelMode;
																		KeWaitForSingleObject_Alertable = 0;
																		KeWaitForSingleObject_Timeout = 0;
																		s = NP;
																		setEventCalled = 0;
L91:;
																		;
																		TRACER_RV = nondet();
																		DiskPerfRegisterDevice_status = DiskPerfRegisterDevice_ioStatus__Status;
																		DiskPerfRegisterDevice_CIL___Tmp28 = DiskPerfRegisterDevice_status;
																		if(DiskPerfRegisterDevice_CIL___Tmp28 >= -2147483643 && DiskPerfRegisterDevice_CIL___Tmp28 <= -2147483643) {
L92:;
{
 int IoBuildDeviceIoControlRequest_malloc_ret ;
int IoBuildDeviceIoControlRequest_tmp_ndt_7 ;
int retres12 ;
																			int IoBuildDeviceIoControlRequest_IoControlCode ; int IoBuildDeviceIoControlRequest_DeviceObject ; int IoBuildDeviceIoControlRequest_InputBuffer ; int IoBuildDeviceIoControlRequest_InputBufferLength ; int IoBuildDeviceIoControlRequest_OutputBuffer ; int IoBuildDeviceIoControlRequest_OutputBufferLength ; int IoBuildDeviceIoControlRequest_InternalDeviceIoControl ; int IoBuildDeviceIoControlRequest_Event ; int IoBuildDeviceIoControlRequest_IoStatusBlock ;
																			IoBuildDeviceIoControlRequest_IoControlCode = DiskPerfRegisterDevice_CIL___Tmp31;
																			IoBuildDeviceIoControlRequest_DeviceObject = DiskPerfRegisterDevice_deviceExtension__TargetDeviceObject;
																			IoBuildDeviceIoControlRequest_InputBuffer = 0;
																			IoBuildDeviceIoControlRequest_InputBufferLength = 0;
																			IoBuildDeviceIoControlRequest_OutputBuffer = DiskPerfRegisterDevice_output;
																			IoBuildDeviceIoControlRequest_OutputBufferLength = DiskPerfRegisterDevice_outputSize;
																			IoBuildDeviceIoControlRequest_InternalDeviceIoControl = 0;
																			IoBuildDeviceIoControlRequest_Event = DiskPerfRegisterDevice_event;
																			IoBuildDeviceIoControlRequest_IoStatusBlock = DiskPerfRegisterDevice_ioStatus;
																			customIrp = 1;
																			IoBuildDeviceIoControlRequest_tmp_ndt_7 = __VERIFIER_nondet_int();
																			if(IoBuildDeviceIoControlRequest_tmp_ndt_7 >= 0 && IoBuildDeviceIoControlRequest_tmp_ndt_7 <= 0) {
																				retres12 = IoBuildDeviceIoControlRequest_malloc_ret;
L93:;
																				TRACER_RV = (retres12);
																				DiskPerfRegisterDevice_irp = TRACER_RV;
																				TRACER_RV = nondet();
																				if(DiskPerfRegisterDevice_irp >= 0 && DiskPerfRegisterDevice_irp <= 0) {
																					retres37 = -1073741670;
																					TRACER_returning = 1;
																					goto L73;
																				}
																				else if(DiskPerfRegisterDevice_irp < 0) {
L94:;
{
 int IofCallDriver_returnVal2 ;
int IofCallDriver_compRetStatus ;
int IofCallDriver_lcontext ;
int IofCallDriver_CIL___Tmp7 ;
int IofCallDriver_tmp_ndt_8 ;
int IofCallDriver_tmp_ndt_9 ;
																					int IofCallDriver_DeviceObject ; int IofCallDriver_Irp ;
																					IofCallDriver_DeviceObject = DiskPerfRegisterDevice_deviceExtension__TargetDeviceObject;
																					IofCallDriver_Irp = DiskPerfRegisterDevice_irp;
{
 int DiskPerfIrpCompletion_Event ;
int retres5 ;
																					int DiskPerfIrpCompletion_DeviceObject ; int DiskPerfIrpCompletion_Irp ; int DiskPerfIrpCompletion_Context ;
																					DiskPerfIrpCompletion_DeviceObject = IofCallDriver_DeviceObject;
																					DiskPerfIrpCompletion_Irp = IofCallDriver_Irp;
																					DiskPerfIrpCompletion_Context = IofCallDriver_lcontext;
{
 int KeSetEvent_l ;
																					int KeSetEvent_Event ; int KeSetEvent_Increment ; int KeSetEvent_Wait ;
																					KeSetEvent_Event = DiskPerfIrpCompletion_Event;
																					KeSetEvent_Increment = 0;
																					KeSetEvent_Wait = 0;
																					setEventCalled = 1;
																					;
																					TRACER_RV = nondet();
																					retres5 = -1073741802;
																					TRACER_RV = (retres5);
																					IofCallDriver_compRetStatus = TRACER_RV;
																					TRACER_RV = nondet();
																					IofCallDriver_CIL___Tmp7 = IofCallDriver_compRetStatus;
{
																					safety = safety + (s - NP);
																					s = MPR1;
																					;
																					TRACER_RV = nondet();
																					IofCallDriver_tmp_ndt_8 = __VERIFIER_nondet_int();
																					if(IofCallDriver_tmp_ndt_8 >= 0 && IofCallDriver_tmp_ndt_8 <= 0) {
																						IofCallDriver_returnVal2 = 0;
																						s = NP;
																						lowerDriverReturn = IofCallDriver_returnVal2;
																						TRACER_RV = (IofCallDriver_returnVal2);
																						DiskPerfRegisterDevice_status = TRACER_RV;
																						TRACER_RV = nondet();
																						DiskPerfRegisterDevice_CIL___Tmp32 = DiskPerfRegisterDevice_status;
																						goto L78;
																					}
																					else if(IofCallDriver_tmp_ndt_8 < 0) {
L95:;
																						IofCallDriver_tmp_ndt_9 = __VERIFIER_nondet_int();
																						if(IofCallDriver_tmp_ndt_9 >= 1 && IofCallDriver_tmp_ndt_9 <= 1) {
																							IofCallDriver_returnVal2 = -1073741823;
																							s = NP;
																							lowerDriverReturn = IofCallDriver_returnVal2;
																							TRACER_RV = (IofCallDriver_returnVal2);
																							DiskPerfRegisterDevice_status = TRACER_RV;
																							TRACER_RV = nondet();
																							goto L88;
																						}
																						else if(IofCallDriver_tmp_ndt_9 < 1) {
L96:;
																							IofCallDriver_returnVal2 = 259;
																							s = MPR3;
																							lowerDriverReturn = IofCallDriver_returnVal2;
																							TRACER_RV = (IofCallDriver_returnVal2);
																							DiskPerfRegisterDevice_status = TRACER_RV;
																							TRACER_RV = nondet();
																							DiskPerfRegisterDevice_CIL___Tmp32 = DiskPerfRegisterDevice_status;
{
 int KeWaitForSingleObject_tmp_ndt_10 ;
int retres7 ;
																							int KeWaitForSingleObject_Object ; int KeWaitForSingleObject_WaitReason ; int KeWaitForSingleObject_WaitMode ; int KeWaitForSingleObject_Alertable ; int KeWaitForSingleObject_Timeout ;
																							KeWaitForSingleObject_Object = DiskPerfRegisterDevice_event;
																							KeWaitForSingleObject_WaitReason = Executive;
																							KeWaitForSingleObject_WaitMode = KernelMode;
																							KeWaitForSingleObject_Alertable = 0;
																							KeWaitForSingleObject_Timeout = 0;
																							s = NP;
																							setEventCalled = 0;
L97:;
																							;
																							TRACER_RV = nondet();
																							DiskPerfRegisterDevice_status = DiskPerfRegisterDevice_ioStatus__Status;
L98:;
																							goto L89;
}
																						}
																						else {
																							goto L96;
																						}
																					}
																					else {
																						goto L95;
																					}
}
}
}
}
																				}
																				else {
																					goto L94;
																				}
																			}
																			else if(IoBuildDeviceIoControlRequest_tmp_ndt_7 < 0) {
L99:;
																				retres12 = 0;
																				goto L93;
																			}
																			else {
																				goto L99;
																			}
}
																		}
																		else if(DiskPerfRegisterDevice_CIL___Tmp28 < -2147483643) {
																			goto L98;
																		}
																		else {
L100:;
																			if(DiskPerfRegisterDevice_status < 0) {
																				goto L89;
																			}
																			else {
																				goto L79;
																			}
																		}
}
																	}
																	else {
																		goto L90;
																	}
																}
																else {
																	goto L86;
																}
}
}
}
}
															}
															else {
																goto L76;
															}
														}
														else if(IoBuildDeviceIoControlRequest_tmp_ndt_7 < 0) {
L101:;
															retres12 = 0;
															goto L74;
														}
														else {
															goto L101;
														}
}
													}
													else {
{
 int IoBuildDeviceIoControlRequest_malloc_ret ;
int IoBuildDeviceIoControlRequest_tmp_ndt_7 ;
int retres12 ;
														int IoBuildDeviceIoControlRequest_IoControlCode ; int IoBuildDeviceIoControlRequest_DeviceObject ; int IoBuildDeviceIoControlRequest_InputBuffer ; int IoBuildDeviceIoControlRequest_InputBufferLength ; int IoBuildDeviceIoControlRequest_OutputBuffer ; int IoBuildDeviceIoControlRequest_OutputBufferLength ; int IoBuildDeviceIoControlRequest_InternalDeviceIoControl ; int IoBuildDeviceIoControlRequest_Event ; int IoBuildDeviceIoControlRequest_IoStatusBlock ;
														IoBuildDeviceIoControlRequest_IoControlCode = DiskPerfRegisterDevice_CIL___Tmp26;
														IoBuildDeviceIoControlRequest_DeviceObject = DiskPerfRegisterDevice_deviceExtension__TargetDeviceObject;
														IoBuildDeviceIoControlRequest_InputBuffer = 0;
														IoBuildDeviceIoControlRequest_InputBufferLength = 0;
														IoBuildDeviceIoControlRequest_OutputBuffer = DiskPerfRegisterDevice_output;
														IoBuildDeviceIoControlRequest_OutputBufferLength = DiskPerfRegisterDevice_outputSize;
														IoBuildDeviceIoControlRequest_InternalDeviceIoControl = 0;
														IoBuildDeviceIoControlRequest_Event = DiskPerfRegisterDevice_event;
														IoBuildDeviceIoControlRequest_IoStatusBlock = DiskPerfRegisterDevice_ioStatus;
														customIrp = 1;
														IoBuildDeviceIoControlRequest_tmp_ndt_7 = __VERIFIER_nondet_int();
														if(IoBuildDeviceIoControlRequest_tmp_ndt_7 >= 0 && IoBuildDeviceIoControlRequest_tmp_ndt_7 <= 0) {
															retres12 = IoBuildDeviceIoControlRequest_malloc_ret;
L102:;
															TRACER_RV = (retres12);
															DiskPerfRegisterDevice_irp = TRACER_RV;
															TRACER_RV = nondet();
															if(DiskPerfRegisterDevice_irp >= 0 && DiskPerfRegisterDevice_irp <= 0) {
																goto L75;
															}
															else if(DiskPerfRegisterDevice_irp < 0) {
L103:;
{
 int IofCallDriver_returnVal2 ;
int IofCallDriver_compRetStatus ;
int IofCallDriver_lcontext ;
int IofCallDriver_CIL___Tmp7 ;
int IofCallDriver_tmp_ndt_8 ;
int IofCallDriver_tmp_ndt_9 ;
																int IofCallDriver_DeviceObject ; int IofCallDriver_Irp ;
																IofCallDriver_DeviceObject = DiskPerfRegisterDevice_deviceExtension__TargetDeviceObject;
																IofCallDriver_Irp = DiskPerfRegisterDevice_irp;
{
 int DiskPerfIrpCompletion_Event ;
int retres5 ;
																int DiskPerfIrpCompletion_DeviceObject ; int DiskPerfIrpCompletion_Irp ; int DiskPerfIrpCompletion_Context ;
																DiskPerfIrpCompletion_DeviceObject = IofCallDriver_DeviceObject;
																DiskPerfIrpCompletion_Irp = IofCallDriver_Irp;
																DiskPerfIrpCompletion_Context = IofCallDriver_lcontext;
{
 int KeSetEvent_l ;
																int KeSetEvent_Event ; int KeSetEvent_Increment ; int KeSetEvent_Wait ;
																KeSetEvent_Event = DiskPerfIrpCompletion_Event;
																KeSetEvent_Increment = 0;
																KeSetEvent_Wait = 0;
																setEventCalled = 1;
																;
																TRACER_RV = nondet();
																retres5 = -1073741802;
																TRACER_RV = (retres5);
																IofCallDriver_compRetStatus = TRACER_RV;
																TRACER_RV = nondet();
																IofCallDriver_CIL___Tmp7 = IofCallDriver_compRetStatus;
{
																safety = safety + (s - NP);
																s = MPR1;
																;
																TRACER_RV = nondet();
																IofCallDriver_tmp_ndt_8 = __VERIFIER_nondet_int();
																if(IofCallDriver_tmp_ndt_8 >= 0 && IofCallDriver_tmp_ndt_8 <= 0) {
																	IofCallDriver_returnVal2 = 0;
																	s = NP;
																	lowerDriverReturn = IofCallDriver_returnVal2;
																	TRACER_RV = (IofCallDriver_returnVal2);
																	DiskPerfRegisterDevice_status = TRACER_RV;
																	TRACER_RV = nondet();
																	goto L77;
																}
																else if(IofCallDriver_tmp_ndt_8 < 0) {
L104:;
																	IofCallDriver_tmp_ndt_9 = __VERIFIER_nondet_int();
																	if(IofCallDriver_tmp_ndt_9 >= 1 && IofCallDriver_tmp_ndt_9 <= 1) {
																		IofCallDriver_returnVal2 = -1073741823;
																		s = NP;
																		lowerDriverReturn = IofCallDriver_returnVal2;
																		TRACER_RV = (IofCallDriver_returnVal2);
																		DiskPerfRegisterDevice_status = TRACER_RV;
																		TRACER_RV = nondet();
																		goto L87;
																	}
																	else if(IofCallDriver_tmp_ndt_9 < 1) {
L105:;
																		IofCallDriver_returnVal2 = 259;
																		s = MPR3;
																		lowerDriverReturn = IofCallDriver_returnVal2;
																		TRACER_RV = (IofCallDriver_returnVal2);
																		DiskPerfRegisterDevice_status = TRACER_RV;
																		TRACER_RV = nondet();
																		DiskPerfRegisterDevice_CIL___Tmp27 = DiskPerfRegisterDevice_status;
{
 int KeWaitForSingleObject_tmp_ndt_10 ;
int retres7 ;
																		int KeWaitForSingleObject_Object ; int KeWaitForSingleObject_WaitReason ; int KeWaitForSingleObject_WaitMode ; int KeWaitForSingleObject_Alertable ; int KeWaitForSingleObject_Timeout ;
																		KeWaitForSingleObject_Object = DiskPerfRegisterDevice_event;
																		KeWaitForSingleObject_WaitReason = Executive;
																		KeWaitForSingleObject_WaitMode = KernelMode;
																		KeWaitForSingleObject_Alertable = 0;
																		KeWaitForSingleObject_Timeout = 0;
																		s = NP;
																		setEventCalled = 0;
L106:;
																		;
																		TRACER_RV = nondet();
																		DiskPerfRegisterDevice_status = DiskPerfRegisterDevice_ioStatus__Status;
																		DiskPerfRegisterDevice_CIL___Tmp28 = DiskPerfRegisterDevice_status;
																		if(DiskPerfRegisterDevice_CIL___Tmp28 >= -2147483643 && DiskPerfRegisterDevice_CIL___Tmp28 <= -2147483643) {
																			goto L92;
																		}
																		else if(DiskPerfRegisterDevice_CIL___Tmp28 < -2147483643) {
																			goto L98;
																		}
																		else {
																			goto L100;
																		}
}
																	}
																	else {
																		goto L105;
																	}
																}
																else {
																	goto L104;
																}
}
}
}
}
															}
															else {
																goto L103;
															}
														}
														else if(IoBuildDeviceIoControlRequest_tmp_ndt_7 < 0) {
L107:;
															retres12 = 0;
															goto L102;
														}
														else {
															goto L107;
														}
}
													}
												}
												else if(IofCallDriver_tmp_ndt_9 < 1) {
L108:;
													IofCallDriver_returnVal2 = 259;
													s = MPR3;
													lowerDriverReturn = IofCallDriver_returnVal2;
													TRACER_RV = (IofCallDriver_returnVal2);
													DiskPerfRegisterDevice_status = TRACER_RV;
													TRACER_RV = nondet();
													DiskPerfRegisterDevice_CIL___Tmp23 = DiskPerfRegisterDevice_status;
{
 int KeWaitForSingleObject_tmp_ndt_10 ;
int retres7 ;
													int KeWaitForSingleObject_Object ; int KeWaitForSingleObject_WaitReason ; int KeWaitForSingleObject_WaitMode ; int KeWaitForSingleObject_Alertable ; int KeWaitForSingleObject_Timeout ;
													KeWaitForSingleObject_Object = DiskPerfRegisterDevice_event;
													KeWaitForSingleObject_WaitReason = Executive;
													KeWaitForSingleObject_WaitMode = KernelMode;
													KeWaitForSingleObject_Alertable = 0;
													KeWaitForSingleObject_Timeout = 0;
													s = NP;
													setEventCalled = 0;
L109:;
													;
													TRACER_RV = nondet();
													DiskPerfRegisterDevice_status = DiskPerfRegisterDevice_ioStatus__Status;
													if(DiskPerfRegisterDevice_status < 0) {
														goto L72;
													}
													else {
														goto L70;
													}
}
												}
												else {
													goto L108;
												}
											}
											else {
												goto L71;
											}
}
}
}
}
										}
										else {
											goto L69;
										}
									}
									else if(IoBuildDeviceIoControlRequest_tmp_ndt_7 < 0) {
L110:;
										retres12 = 0;
										goto L65;
									}
									else {
										goto L110;
									}
}
}
}
								}
								else if(IofCallDriver_tmp_ndt_9 < 1) {
L111:;
									IofCallDriver_returnVal2 = 259;
									s = MPR3;
									lowerDriverReturn = IofCallDriver_returnVal2;
									TRACER_RV = (IofCallDriver_returnVal2);
									DiskPerfForwardIrpSynchronous_status = TRACER_RV;
									TRACER_RV = nondet();
									DiskPerfForwardIrpSynchronous_CIL___Tmp15 = DiskPerfForwardIrpSynchronous_status;
{
 int KeWaitForSingleObject_tmp_ndt_10 ;
int retres7 ;
									int KeWaitForSingleObject_Object ; int KeWaitForSingleObject_WaitReason ; int KeWaitForSingleObject_WaitMode ; int KeWaitForSingleObject_Alertable ; int KeWaitForSingleObject_Timeout ;
									KeWaitForSingleObject_Object = DiskPerfForwardIrpSynchronous_event;
									KeWaitForSingleObject_WaitReason = Executive;
									KeWaitForSingleObject_WaitMode = KernelMode;
									KeWaitForSingleObject_Alertable = 0;
									KeWaitForSingleObject_Timeout = 0;
									s = NP;
									setEventCalled = 0;
L112:;
									;
									TRACER_RV = nondet();
									DiskPerfForwardIrpSynchronous_status = myStatus;
									TRACER_RV = (DiskPerfForwardIrpSynchronous_status);
									DiskPerfStartDevice_status = TRACER_RV;
									TRACER_RV = nondet();
{
									int DiskPerfSyncFilterWithTarget_FilterDevice ; int DiskPerfSyncFilterWithTarget_TargetDevice ;
									DiskPerfSyncFilterWithTarget_FilterDevice = DiskPerfStartDevice_DeviceObject;
									DiskPerfSyncFilterWithTarget_TargetDevice = DiskPerfStartDevice_deviceExtension__TargetDeviceObject;
									;
									TRACER_RV = nondet();
{
 int DiskPerfRegisterDevice_DeviceObject__DeviceExtension ;
int DiskPerfRegisterDevice_deviceExtension__TargetDeviceObject ;
int DiskPerfRegisterDevice_sizeof__number ;
int DiskPerfRegisterDevice_ioStatus__Status ;
int DiskPerfRegisterDevice_sizeof__VOLUME_NUMBER ;
int DiskPerfRegisterDevice_status ;
int DiskPerfRegisterDevice_ioStatus ;
int DiskPerfRegisterDevice_event ;
int DiskPerfRegisterDevice_deviceExtension ;
int DiskPerfRegisterDevice_irp ;
int DiskPerfRegisterDevice_number ;
int DiskPerfRegisterDevice_registrationFlag ;
int DiskPerfRegisterDevice_sizeof__MOUNTDEV_NAME ;
int DiskPerfRegisterDevice_output__NameLength ;
int DiskPerfRegisterDevice_outputSize ;
int DiskPerfRegisterDevice_output ;
int DiskPerfRegisterDevice_volumeNumber ;
int DiskPerfRegisterDevice_CIL___Tmp20 ;
int DiskPerfRegisterDevice_CIL___Tmp21 ;
int DiskPerfRegisterDevice_CIL___Tmp22 ;
int DiskPerfRegisterDevice_CIL___Tmp23 ;
int DiskPerfRegisterDevice_CIL___Tmp24 ;
int DiskPerfRegisterDevice_CIL___Tmp25 ;
int DiskPerfRegisterDevice_CIL___Tmp26 ;
int DiskPerfRegisterDevice_CIL___Tmp27 ;
int DiskPerfRegisterDevice_CIL___Tmp28 ;
int DiskPerfRegisterDevice_CIL___Tmp29 ;
int DiskPerfRegisterDevice_CIL___Tmp30 ;
int DiskPerfRegisterDevice_CIL___Tmp31 ;
int DiskPerfRegisterDevice_CIL___Tmp32 ;
int DiskPerfRegisterDevice_CIL___Tmp34 ;
int DiskPerfRegisterDevice_CIL___Tmp35 ;
int DiskPerfRegisterDevice_CIL___Tmp36 ;
int DiskPerfRegisterDevice_CIL___Tmp37 ;
int retres37 ;
int TRACER_returning ;
									int DiskPerfRegisterDevice_DeviceObject ;
									DiskPerfRegisterDevice_DeviceObject = DiskPerfStartDevice_DeviceObject;
									TRACER_returning = 0;
									DiskPerfRegisterDevice_registrationFlag = 0;
									DiskPerfRegisterDevice_deviceExtension = DiskPerfRegisterDevice_DeviceObject__DeviceExtension;
									DiskPerfRegisterDevice_CIL___Tmp20 = 4224;
									DiskPerfRegisterDevice_CIL___Tmp21 = 2949120;
									DiskPerfRegisterDevice_CIL___Tmp22 = 2953344;
{
 int IoBuildDeviceIoControlRequest_malloc_ret ;
int IoBuildDeviceIoControlRequest_tmp_ndt_7 ;
int retres12 ;
									int IoBuildDeviceIoControlRequest_IoControlCode ; int IoBuildDeviceIoControlRequest_DeviceObject ; int IoBuildDeviceIoControlRequest_InputBuffer ; int IoBuildDeviceIoControlRequest_InputBufferLength ; int IoBuildDeviceIoControlRequest_OutputBuffer ; int IoBuildDeviceIoControlRequest_OutputBufferLength ; int IoBuildDeviceIoControlRequest_InternalDeviceIoControl ; int IoBuildDeviceIoControlRequest_Event ; int IoBuildDeviceIoControlRequest_IoStatusBlock ;
									IoBuildDeviceIoControlRequest_IoControlCode = DiskPerfRegisterDevice_CIL___Tmp22;
									IoBuildDeviceIoControlRequest_DeviceObject = DiskPerfRegisterDevice_deviceExtension__TargetDeviceObject;
									IoBuildDeviceIoControlRequest_InputBuffer = 0;
									IoBuildDeviceIoControlRequest_InputBufferLength = 0;
									IoBuildDeviceIoControlRequest_OutputBuffer = DiskPerfRegisterDevice_number;
									IoBuildDeviceIoControlRequest_OutputBufferLength = DiskPerfRegisterDevice_sizeof__number;
									IoBuildDeviceIoControlRequest_InternalDeviceIoControl = 0;
									IoBuildDeviceIoControlRequest_Event = DiskPerfRegisterDevice_event;
									IoBuildDeviceIoControlRequest_IoStatusBlock = DiskPerfRegisterDevice_ioStatus;
									customIrp = 1;
									IoBuildDeviceIoControlRequest_tmp_ndt_7 = __VERIFIER_nondet_int();
									if(IoBuildDeviceIoControlRequest_tmp_ndt_7 >= 0 && IoBuildDeviceIoControlRequest_tmp_ndt_7 <= 0) {
										retres12 = IoBuildDeviceIoControlRequest_malloc_ret;
L113:;
										TRACER_RV = (retres12);
										DiskPerfRegisterDevice_irp = TRACER_RV;
										TRACER_RV = nondet();
										if(DiskPerfRegisterDevice_irp >= 0 && DiskPerfRegisterDevice_irp <= 0) {
L114:;
											;
											TRACER_RV = nondet();
{
											int IofCompleteRequest_Irp ; int IofCompleteRequest_PriorityBoost ;
											IofCompleteRequest_Irp = DiskPerfStartDevice_Irp;
											IofCompleteRequest_PriorityBoost = 0;
											safety = safety + (s - NP);
											s = DC;
											;
											TRACER_RV = nondet();
											TRACER_RV = (DiskPerfStartDevice_status);
											DiskPerfDispatchPnp_status = TRACER_RV;
											TRACER_RV = nondet();
L115:;
											retres8 = DiskPerfDispatchPnp_status;
											TRACER_RV = (retres8);
											main_status = TRACER_RV;
											TRACER_RV = nondet();
											goto L3;
}
										}
										else if(DiskPerfRegisterDevice_irp < 0) {
L116:;
{
 int IofCallDriver_returnVal2 ;
int IofCallDriver_compRetStatus ;
int IofCallDriver_lcontext ;
int IofCallDriver_CIL___Tmp7 ;
int IofCallDriver_tmp_ndt_8 ;
int IofCallDriver_tmp_ndt_9 ;
											int IofCallDriver_DeviceObject ; int IofCallDriver_Irp ;
											IofCallDriver_DeviceObject = DiskPerfRegisterDevice_deviceExtension__TargetDeviceObject;
											IofCallDriver_Irp = DiskPerfRegisterDevice_irp;
{
 int DiskPerfIrpCompletion_Event ;
int retres5 ;
											int DiskPerfIrpCompletion_DeviceObject ; int DiskPerfIrpCompletion_Irp ; int DiskPerfIrpCompletion_Context ;
											DiskPerfIrpCompletion_DeviceObject = IofCallDriver_DeviceObject;
											DiskPerfIrpCompletion_Irp = IofCallDriver_Irp;
											DiskPerfIrpCompletion_Context = IofCallDriver_lcontext;
{
 int KeSetEvent_l ;
											int KeSetEvent_Event ; int KeSetEvent_Increment ; int KeSetEvent_Wait ;
											KeSetEvent_Event = DiskPerfIrpCompletion_Event;
											KeSetEvent_Increment = 0;
											KeSetEvent_Wait = 0;
											setEventCalled = 1;
											;
											TRACER_RV = nondet();
											retres5 = -1073741802;
											TRACER_RV = (retres5);
											IofCallDriver_compRetStatus = TRACER_RV;
											TRACER_RV = nondet();
											IofCallDriver_CIL___Tmp7 = IofCallDriver_compRetStatus;
{
											safety = safety + (s - NP);
											s = MPR1;
											;
											TRACER_RV = nondet();
											IofCallDriver_tmp_ndt_8 = __VERIFIER_nondet_int();
											if(IofCallDriver_tmp_ndt_8 >= 0 && IofCallDriver_tmp_ndt_8 <= 0) {
												IofCallDriver_returnVal2 = 0;
												s = NP;
												lowerDriverReturn = IofCallDriver_returnVal2;
												TRACER_RV = (IofCallDriver_returnVal2);
												DiskPerfRegisterDevice_status = TRACER_RV;
												TRACER_RV = nondet();
												DiskPerfRegisterDevice_CIL___Tmp23 = DiskPerfRegisterDevice_status;
L117:;
												goto L114;
											}
											else if(IofCallDriver_tmp_ndt_8 < 0) {
L118:;
												IofCallDriver_tmp_ndt_9 = __VERIFIER_nondet_int();
												if(IofCallDriver_tmp_ndt_9 >= 1 && IofCallDriver_tmp_ndt_9 <= 1) {
													IofCallDriver_returnVal2 = -1073741823;
													s = NP;
													lowerDriverReturn = IofCallDriver_returnVal2;
													TRACER_RV = (IofCallDriver_returnVal2);
													DiskPerfRegisterDevice_status = TRACER_RV;
													TRACER_RV = nondet();
L119:;
													if(DiskPerfRegisterDevice_output >= 0 && DiskPerfRegisterDevice_output <= 0) {
														retres37 = -1073741670;
														TRACER_returning = 1;
L120:;
														goto L114;
													}
													else if(DiskPerfRegisterDevice_output < 0) {
{
 int IoBuildDeviceIoControlRequest_malloc_ret ;
int IoBuildDeviceIoControlRequest_tmp_ndt_7 ;
int retres12 ;
														int IoBuildDeviceIoControlRequest_IoControlCode ; int IoBuildDeviceIoControlRequest_DeviceObject ; int IoBuildDeviceIoControlRequest_InputBuffer ; int IoBuildDeviceIoControlRequest_InputBufferLength ; int IoBuildDeviceIoControlRequest_OutputBuffer ; int IoBuildDeviceIoControlRequest_OutputBufferLength ; int IoBuildDeviceIoControlRequest_InternalDeviceIoControl ; int IoBuildDeviceIoControlRequest_Event ; int IoBuildDeviceIoControlRequest_IoStatusBlock ;
														IoBuildDeviceIoControlRequest_IoControlCode = DiskPerfRegisterDevice_CIL___Tmp26;
														IoBuildDeviceIoControlRequest_DeviceObject = DiskPerfRegisterDevice_deviceExtension__TargetDeviceObject;
														IoBuildDeviceIoControlRequest_InputBuffer = 0;
														IoBuildDeviceIoControlRequest_InputBufferLength = 0;
														IoBuildDeviceIoControlRequest_OutputBuffer = DiskPerfRegisterDevice_output;
														IoBuildDeviceIoControlRequest_OutputBufferLength = DiskPerfRegisterDevice_outputSize;
														IoBuildDeviceIoControlRequest_InternalDeviceIoControl = 0;
														IoBuildDeviceIoControlRequest_Event = DiskPerfRegisterDevice_event;
														IoBuildDeviceIoControlRequest_IoStatusBlock = DiskPerfRegisterDevice_ioStatus;
														customIrp = 1;
														IoBuildDeviceIoControlRequest_tmp_ndt_7 = __VERIFIER_nondet_int();
														if(IoBuildDeviceIoControlRequest_tmp_ndt_7 >= 0 && IoBuildDeviceIoControlRequest_tmp_ndt_7 <= 0) {
															retres12 = IoBuildDeviceIoControlRequest_malloc_ret;
L121:;
															TRACER_RV = (retres12);
															DiskPerfRegisterDevice_irp = TRACER_RV;
															TRACER_RV = nondet();
															if(DiskPerfRegisterDevice_irp >= 0 && DiskPerfRegisterDevice_irp <= 0) {
L122:;
																retres37 = -1073741670;
																TRACER_returning = 1;
																goto L120;
															}
															else if(DiskPerfRegisterDevice_irp < 0) {
L123:;
{
 int IofCallDriver_returnVal2 ;
int IofCallDriver_compRetStatus ;
int IofCallDriver_lcontext ;
int IofCallDriver_CIL___Tmp7 ;
int IofCallDriver_tmp_ndt_8 ;
int IofCallDriver_tmp_ndt_9 ;
																int IofCallDriver_DeviceObject ; int IofCallDriver_Irp ;
																IofCallDriver_DeviceObject = DiskPerfRegisterDevice_deviceExtension__TargetDeviceObject;
																IofCallDriver_Irp = DiskPerfRegisterDevice_irp;
{
 int DiskPerfIrpCompletion_Event ;
int retres5 ;
																int DiskPerfIrpCompletion_DeviceObject ; int DiskPerfIrpCompletion_Irp ; int DiskPerfIrpCompletion_Context ;
																DiskPerfIrpCompletion_DeviceObject = IofCallDriver_DeviceObject;
																DiskPerfIrpCompletion_Irp = IofCallDriver_Irp;
																DiskPerfIrpCompletion_Context = IofCallDriver_lcontext;
{
 int KeSetEvent_l ;
																int KeSetEvent_Event ; int KeSetEvent_Increment ; int KeSetEvent_Wait ;
																KeSetEvent_Event = DiskPerfIrpCompletion_Event;
																KeSetEvent_Increment = 0;
																KeSetEvent_Wait = 0;
																setEventCalled = 1;
																;
																TRACER_RV = nondet();
																retres5 = -1073741802;
																TRACER_RV = (retres5);
																IofCallDriver_compRetStatus = TRACER_RV;
																TRACER_RV = nondet();
																IofCallDriver_CIL___Tmp7 = IofCallDriver_compRetStatus;
{
																safety = safety + (s - NP);
																s = MPR1;
																;
																TRACER_RV = nondet();
																IofCallDriver_tmp_ndt_8 = __VERIFIER_nondet_int();
																if(IofCallDriver_tmp_ndt_8 >= 0 && IofCallDriver_tmp_ndt_8 <= 0) {
																	IofCallDriver_returnVal2 = 0;
																	s = NP;
																	lowerDriverReturn = IofCallDriver_returnVal2;
																	TRACER_RV = (IofCallDriver_returnVal2);
																	DiskPerfRegisterDevice_status = TRACER_RV;
																	TRACER_RV = nondet();
L124:;
																	DiskPerfRegisterDevice_CIL___Tmp27 = DiskPerfRegisterDevice_status;
																	DiskPerfRegisterDevice_CIL___Tmp28 = DiskPerfRegisterDevice_status;
L125:;
L126:;
{
 int IoBuildDeviceIoControlRequest_malloc_ret ;
int IoBuildDeviceIoControlRequest_tmp_ndt_7 ;
int retres12 ;
																	int IoBuildDeviceIoControlRequest_IoControlCode ; int IoBuildDeviceIoControlRequest_DeviceObject ; int IoBuildDeviceIoControlRequest_InputBuffer ; int IoBuildDeviceIoControlRequest_InputBufferLength ; int IoBuildDeviceIoControlRequest_OutputBuffer ; int IoBuildDeviceIoControlRequest_OutputBufferLength ; int IoBuildDeviceIoControlRequest_InternalDeviceIoControl ; int IoBuildDeviceIoControlRequest_Event ; int IoBuildDeviceIoControlRequest_IoStatusBlock ;
																	IoBuildDeviceIoControlRequest_IoControlCode = DiskPerfRegisterDevice_CIL___Tmp36;
																	IoBuildDeviceIoControlRequest_DeviceObject = DiskPerfRegisterDevice_deviceExtension__TargetDeviceObject;
																	IoBuildDeviceIoControlRequest_InputBuffer = 0;
																	IoBuildDeviceIoControlRequest_InputBufferLength = 0;
																	IoBuildDeviceIoControlRequest_OutputBuffer = DiskPerfRegisterDevice_volumeNumber;
																	IoBuildDeviceIoControlRequest_OutputBufferLength = DiskPerfRegisterDevice_sizeof__VOLUME_NUMBER;
																	IoBuildDeviceIoControlRequest_InternalDeviceIoControl = 0;
																	IoBuildDeviceIoControlRequest_Event = DiskPerfRegisterDevice_event;
																	IoBuildDeviceIoControlRequest_IoStatusBlock = DiskPerfRegisterDevice_ioStatus;
																	customIrp = 1;
																	IoBuildDeviceIoControlRequest_tmp_ndt_7 = __VERIFIER_nondet_int();
																	if(IoBuildDeviceIoControlRequest_tmp_ndt_7 >= 0 && IoBuildDeviceIoControlRequest_tmp_ndt_7 <= 0) {
																		retres12 = IoBuildDeviceIoControlRequest_malloc_ret;
L127:;
																		TRACER_RV = (retres12);
																		DiskPerfRegisterDevice_irp = TRACER_RV;
																		TRACER_RV = nondet();
																		if(DiskPerfRegisterDevice_irp >= 0 && DiskPerfRegisterDevice_irp <= 0) {
																			retres37 = -1073741670;
																			TRACER_returning = 1;
																			goto L120;
																		}
																		else if(DiskPerfRegisterDevice_irp < 0) {
L128:;
{
 int IofCallDriver_returnVal2 ;
int IofCallDriver_compRetStatus ;
int IofCallDriver_lcontext ;
int IofCallDriver_CIL___Tmp7 ;
int IofCallDriver_tmp_ndt_8 ;
int IofCallDriver_tmp_ndt_9 ;
																			int IofCallDriver_DeviceObject ; int IofCallDriver_Irp ;
																			IofCallDriver_DeviceObject = DiskPerfRegisterDevice_deviceExtension__TargetDeviceObject;
																			IofCallDriver_Irp = DiskPerfRegisterDevice_irp;
{
 int DiskPerfIrpCompletion_Event ;
int retres5 ;
																			int DiskPerfIrpCompletion_DeviceObject ; int DiskPerfIrpCompletion_Irp ; int DiskPerfIrpCompletion_Context ;
																			DiskPerfIrpCompletion_DeviceObject = IofCallDriver_DeviceObject;
																			DiskPerfIrpCompletion_Irp = IofCallDriver_Irp;
																			DiskPerfIrpCompletion_Context = IofCallDriver_lcontext;
{
 int KeSetEvent_l ;
																			int KeSetEvent_Event ; int KeSetEvent_Increment ; int KeSetEvent_Wait ;
																			KeSetEvent_Event = DiskPerfIrpCompletion_Event;
																			KeSetEvent_Increment = 0;
																			KeSetEvent_Wait = 0;
																			setEventCalled = 1;
																			;
																			TRACER_RV = nondet();
																			retres5 = -1073741802;
																			TRACER_RV = (retres5);
																			IofCallDriver_compRetStatus = TRACER_RV;
																			TRACER_RV = nondet();
																			IofCallDriver_CIL___Tmp7 = IofCallDriver_compRetStatus;
{
																			safety = safety + (s - NP);
																			s = MPR1;
																			;
																			TRACER_RV = nondet();
																			IofCallDriver_tmp_ndt_8 = __VERIFIER_nondet_int();
																			if(IofCallDriver_tmp_ndt_8 >= 0 && IofCallDriver_tmp_ndt_8 <= 0) {
																				IofCallDriver_returnVal2 = 0;
																				s = NP;
																				lowerDriverReturn = IofCallDriver_returnVal2;
																				TRACER_RV = (IofCallDriver_returnVal2);
																				DiskPerfRegisterDevice_status = TRACER_RV;
																				TRACER_RV = nondet();
																				DiskPerfRegisterDevice_CIL___Tmp37 = DiskPerfRegisterDevice_status;
																				goto L117;
																			}
																			else if(IofCallDriver_tmp_ndt_8 < 0) {
L129:;
																				IofCallDriver_tmp_ndt_9 = __VERIFIER_nondet_int();
																				if(IofCallDriver_tmp_ndt_9 >= 1 && IofCallDriver_tmp_ndt_9 <= 1) {
																					IofCallDriver_returnVal2 = -1073741823;
																					s = NP;
																					lowerDriverReturn = IofCallDriver_returnVal2;
																					DiskPerfRegisterDevice_status = TRACER_RV;
																					TRACER_RV = nondet();
																					goto L117;
																				}
																				else if(IofCallDriver_tmp_ndt_9 < 1) {
L130:;
																					IofCallDriver_returnVal2 = 259;
																					s = MPR3;
																					lowerDriverReturn = IofCallDriver_returnVal2;
																					TRACER_RV = (IofCallDriver_returnVal2);
																					DiskPerfRegisterDevice_status = TRACER_RV;
																					TRACER_RV = nondet();
																					DiskPerfRegisterDevice_CIL___Tmp37 = DiskPerfRegisterDevice_status;
{
 int KeWaitForSingleObject_tmp_ndt_10 ;
int retres7 ;
																					int KeWaitForSingleObject_Object ; int KeWaitForSingleObject_WaitReason ; int KeWaitForSingleObject_WaitMode ; int KeWaitForSingleObject_Alertable ; int KeWaitForSingleObject_Timeout ;
																					KeWaitForSingleObject_Object = DiskPerfRegisterDevice_event;
																					KeWaitForSingleObject_WaitReason = Executive;
																					KeWaitForSingleObject_WaitMode = KernelMode;
																					KeWaitForSingleObject_Alertable = 0;
																					KeWaitForSingleObject_Timeout = 0;
																					s = NP;
																					setEventCalled = 0;
L131:;
																					;
																					TRACER_RV = nondet();
																					goto L117;
}
																				}
																				else {
																					goto L130;
																				}
																			}
																			else {
																				goto L129;
																			}
}
}
}
}
																		}
																		else {
																			goto L128;
																		}
																	}
																	else if(IoBuildDeviceIoControlRequest_tmp_ndt_7 < 0) {
L132:;
																		retres12 = 0;
																		goto L127;
																	}
																	else {
																		goto L132;
																	}
}
																}
																else if(IofCallDriver_tmp_ndt_8 < 0) {
L133:;
																	IofCallDriver_tmp_ndt_9 = __VERIFIER_nondet_int();
																	if(IofCallDriver_tmp_ndt_9 >= 1 && IofCallDriver_tmp_ndt_9 <= 1) {
																		IofCallDriver_returnVal2 = -1073741823;
																		s = NP;
																		lowerDriverReturn = IofCallDriver_returnVal2;
																		TRACER_RV = (IofCallDriver_returnVal2);
																		DiskPerfRegisterDevice_status = TRACER_RV;
																		TRACER_RV = nondet();
L134:;
																		DiskPerfRegisterDevice_CIL___Tmp28 = DiskPerfRegisterDevice_status;
L135:;
L136:;
																		retres37 = DiskPerfRegisterDevice_status;
																		TRACER_returning = 1;
																		goto L120;
																	}
																	else if(IofCallDriver_tmp_ndt_9 < 1) {
L137:;
																		IofCallDriver_returnVal2 = 259;
																		s = MPR3;
																		lowerDriverReturn = IofCallDriver_returnVal2;
																		TRACER_RV = (IofCallDriver_returnVal2);
																		DiskPerfRegisterDevice_status = TRACER_RV;
																		TRACER_RV = nondet();
																		DiskPerfRegisterDevice_CIL___Tmp27 = DiskPerfRegisterDevice_status;
{
 int KeWaitForSingleObject_tmp_ndt_10 ;
int retres7 ;
																		int KeWaitForSingleObject_Object ; int KeWaitForSingleObject_WaitReason ; int KeWaitForSingleObject_WaitMode ; int KeWaitForSingleObject_Alertable ; int KeWaitForSingleObject_Timeout ;
																		KeWaitForSingleObject_Object = DiskPerfRegisterDevice_event;
																		KeWaitForSingleObject_WaitReason = Executive;
																		KeWaitForSingleObject_WaitMode = KernelMode;
																		KeWaitForSingleObject_Alertable = 0;
																		KeWaitForSingleObject_Timeout = 0;
																		s = NP;
																		setEventCalled = 0;
L138:;
																		;
																		TRACER_RV = nondet();
																		DiskPerfRegisterDevice_status = DiskPerfRegisterDevice_ioStatus__Status;
																		DiskPerfRegisterDevice_CIL___Tmp28 = DiskPerfRegisterDevice_status;
																		if(DiskPerfRegisterDevice_CIL___Tmp28 >= -2147483643 && DiskPerfRegisterDevice_CIL___Tmp28 <= -2147483643) {
L139:;
{
 int IoBuildDeviceIoControlRequest_malloc_ret ;
int IoBuildDeviceIoControlRequest_tmp_ndt_7 ;
int retres12 ;
																			int IoBuildDeviceIoControlRequest_IoControlCode ; int IoBuildDeviceIoControlRequest_DeviceObject ; int IoBuildDeviceIoControlRequest_InputBuffer ; int IoBuildDeviceIoControlRequest_InputBufferLength ; int IoBuildDeviceIoControlRequest_OutputBuffer ; int IoBuildDeviceIoControlRequest_OutputBufferLength ; int IoBuildDeviceIoControlRequest_InternalDeviceIoControl ; int IoBuildDeviceIoControlRequest_Event ; int IoBuildDeviceIoControlRequest_IoStatusBlock ;
																			IoBuildDeviceIoControlRequest_IoControlCode = DiskPerfRegisterDevice_CIL___Tmp31;
																			IoBuildDeviceIoControlRequest_DeviceObject = DiskPerfRegisterDevice_deviceExtension__TargetDeviceObject;
																			IoBuildDeviceIoControlRequest_InputBuffer = 0;
																			IoBuildDeviceIoControlRequest_InputBufferLength = 0;
																			IoBuildDeviceIoControlRequest_OutputBuffer = DiskPerfRegisterDevice_output;
																			IoBuildDeviceIoControlRequest_OutputBufferLength = DiskPerfRegisterDevice_outputSize;
																			IoBuildDeviceIoControlRequest_InternalDeviceIoControl = 0;
																			IoBuildDeviceIoControlRequest_Event = DiskPerfRegisterDevice_event;
																			IoBuildDeviceIoControlRequest_IoStatusBlock = DiskPerfRegisterDevice_ioStatus;
																			customIrp = 1;
																			IoBuildDeviceIoControlRequest_tmp_ndt_7 = __VERIFIER_nondet_int();
																			if(IoBuildDeviceIoControlRequest_tmp_ndt_7 >= 0 && IoBuildDeviceIoControlRequest_tmp_ndt_7 <= 0) {
																				retres12 = IoBuildDeviceIoControlRequest_malloc_ret;
L140:;
																				TRACER_RV = (retres12);
																				DiskPerfRegisterDevice_irp = TRACER_RV;
																				TRACER_RV = nondet();
																				if(DiskPerfRegisterDevice_irp >= 0 && DiskPerfRegisterDevice_irp <= 0) {
																					retres37 = -1073741670;
																					TRACER_returning = 1;
																					goto L120;
																				}
																				else if(DiskPerfRegisterDevice_irp < 0) {
L141:;
{
 int IofCallDriver_returnVal2 ;
int IofCallDriver_compRetStatus ;
int IofCallDriver_lcontext ;
int IofCallDriver_CIL___Tmp7 ;
int IofCallDriver_tmp_ndt_8 ;
int IofCallDriver_tmp_ndt_9 ;
																					int IofCallDriver_DeviceObject ; int IofCallDriver_Irp ;
																					IofCallDriver_DeviceObject = DiskPerfRegisterDevice_deviceExtension__TargetDeviceObject;
																					IofCallDriver_Irp = DiskPerfRegisterDevice_irp;
{
 int DiskPerfIrpCompletion_Event ;
int retres5 ;
																					int DiskPerfIrpCompletion_DeviceObject ; int DiskPerfIrpCompletion_Irp ; int DiskPerfIrpCompletion_Context ;
																					DiskPerfIrpCompletion_DeviceObject = IofCallDriver_DeviceObject;
																					DiskPerfIrpCompletion_Irp = IofCallDriver_Irp;
																					DiskPerfIrpCompletion_Context = IofCallDriver_lcontext;
{
 int KeSetEvent_l ;
																					int KeSetEvent_Event ; int KeSetEvent_Increment ; int KeSetEvent_Wait ;
																					KeSetEvent_Event = DiskPerfIrpCompletion_Event;
																					KeSetEvent_Increment = 0;
																					KeSetEvent_Wait = 0;
																					setEventCalled = 1;
																					;
																					TRACER_RV = nondet();
																					retres5 = -1073741802;
																					TRACER_RV = (retres5);
																					IofCallDriver_compRetStatus = TRACER_RV;
																					TRACER_RV = nondet();
																					IofCallDriver_CIL___Tmp7 = IofCallDriver_compRetStatus;
{
																					safety = safety + (s - NP);
																					s = MPR1;
																					;
																					TRACER_RV = nondet();
																					IofCallDriver_tmp_ndt_8 = __VERIFIER_nondet_int();
																					if(IofCallDriver_tmp_ndt_8 >= 0 && IofCallDriver_tmp_ndt_8 <= 0) {
																						IofCallDriver_returnVal2 = 0;
																						s = NP;
																						lowerDriverReturn = IofCallDriver_returnVal2;
																						TRACER_RV = (IofCallDriver_returnVal2);
																						DiskPerfRegisterDevice_status = TRACER_RV;
																						TRACER_RV = nondet();
																						DiskPerfRegisterDevice_CIL___Tmp32 = DiskPerfRegisterDevice_status;
																						goto L125;
																					}
																					else if(IofCallDriver_tmp_ndt_8 < 0) {
L142:;
																						IofCallDriver_tmp_ndt_9 = __VERIFIER_nondet_int();
																						if(IofCallDriver_tmp_ndt_9 >= 1 && IofCallDriver_tmp_ndt_9 <= 1) {
																							IofCallDriver_returnVal2 = -1073741823;
																							s = NP;
																							lowerDriverReturn = IofCallDriver_returnVal2;
																							TRACER_RV = (IofCallDriver_returnVal2);
																							DiskPerfRegisterDevice_status = TRACER_RV;
																							TRACER_RV = nondet();
																							goto L135;
																						}
																						else if(IofCallDriver_tmp_ndt_9 < 1) {
L143:;
																							IofCallDriver_returnVal2 = 259;
																							s = MPR3;
																							lowerDriverReturn = IofCallDriver_returnVal2;
																							TRACER_RV = (IofCallDriver_returnVal2);
																							DiskPerfRegisterDevice_status = TRACER_RV;
																							TRACER_RV = nondet();
																							DiskPerfRegisterDevice_CIL___Tmp32 = DiskPerfRegisterDevice_status;
{
 int KeWaitForSingleObject_tmp_ndt_10 ;
int retres7 ;
																							int KeWaitForSingleObject_Object ; int KeWaitForSingleObject_WaitReason ; int KeWaitForSingleObject_WaitMode ; int KeWaitForSingleObject_Alertable ; int KeWaitForSingleObject_Timeout ;
																							KeWaitForSingleObject_Object = DiskPerfRegisterDevice_event;
																							KeWaitForSingleObject_WaitReason = Executive;
																							KeWaitForSingleObject_WaitMode = KernelMode;
																							KeWaitForSingleObject_Alertable = 0;
																							KeWaitForSingleObject_Timeout = 0;
																							s = NP;
																							setEventCalled = 0;
L144:;
																							;
																							TRACER_RV = nondet();
																							DiskPerfRegisterDevice_status = DiskPerfRegisterDevice_ioStatus__Status;
L145:;
																							goto L136;
}
																						}
																						else {
																							goto L143;
																						}
																					}
																					else {
																						goto L142;
																					}
}
}
}
}
																				}
																				else {
																					goto L141;
																				}
																			}
																			else if(IoBuildDeviceIoControlRequest_tmp_ndt_7 < 0) {
L146:;
																				retres12 = 0;
																				goto L140;
																			}
																			else {
																				goto L146;
																			}
}
																		}
																		else if(DiskPerfRegisterDevice_CIL___Tmp28 < -2147483643) {
																			goto L145;
																		}
																		else {
L147:;
																			if(DiskPerfRegisterDevice_status < 0) {
																				goto L136;
																			}
																			else {
																				goto L126;
																			}
																		}
}
																	}
																	else {
																		goto L137;
																	}
																}
																else {
																	goto L133;
																}
}
}
}
}
															}
															else {
																goto L123;
															}
														}
														else if(IoBuildDeviceIoControlRequest_tmp_ndt_7 < 0) {
L148:;
															retres12 = 0;
															goto L121;
														}
														else {
															goto L148;
														}
}
													}
													else {
{
 int IoBuildDeviceIoControlRequest_malloc_ret ;
int IoBuildDeviceIoControlRequest_tmp_ndt_7 ;
int retres12 ;
														int IoBuildDeviceIoControlRequest_IoControlCode ; int IoBuildDeviceIoControlRequest_DeviceObject ; int IoBuildDeviceIoControlRequest_InputBuffer ; int IoBuildDeviceIoControlRequest_InputBufferLength ; int IoBuildDeviceIoControlRequest_OutputBuffer ; int IoBuildDeviceIoControlRequest_OutputBufferLength ; int IoBuildDeviceIoControlRequest_InternalDeviceIoControl ; int IoBuildDeviceIoControlRequest_Event ; int IoBuildDeviceIoControlRequest_IoStatusBlock ;
														IoBuildDeviceIoControlRequest_IoControlCode = DiskPerfRegisterDevice_CIL___Tmp26;
														IoBuildDeviceIoControlRequest_DeviceObject = DiskPerfRegisterDevice_deviceExtension__TargetDeviceObject;
														IoBuildDeviceIoControlRequest_InputBuffer = 0;
														IoBuildDeviceIoControlRequest_InputBufferLength = 0;
														IoBuildDeviceIoControlRequest_OutputBuffer = DiskPerfRegisterDevice_output;
														IoBuildDeviceIoControlRequest_OutputBufferLength = DiskPerfRegisterDevice_outputSize;
														IoBuildDeviceIoControlRequest_InternalDeviceIoControl = 0;
														IoBuildDeviceIoControlRequest_Event = DiskPerfRegisterDevice_event;
														IoBuildDeviceIoControlRequest_IoStatusBlock = DiskPerfRegisterDevice_ioStatus;
														customIrp = 1;
														IoBuildDeviceIoControlRequest_tmp_ndt_7 = __VERIFIER_nondet_int();
														if(IoBuildDeviceIoControlRequest_tmp_ndt_7 >= 0 && IoBuildDeviceIoControlRequest_tmp_ndt_7 <= 0) {
															retres12 = IoBuildDeviceIoControlRequest_malloc_ret;
L149:;
															TRACER_RV = (retres12);
															DiskPerfRegisterDevice_irp = TRACER_RV;
															TRACER_RV = nondet();
															if(DiskPerfRegisterDevice_irp >= 0 && DiskPerfRegisterDevice_irp <= 0) {
																goto L122;
															}
															else if(DiskPerfRegisterDevice_irp < 0) {
L150:;
{
 int IofCallDriver_returnVal2 ;
int IofCallDriver_compRetStatus ;
int IofCallDriver_lcontext ;
int IofCallDriver_CIL___Tmp7 ;
int IofCallDriver_tmp_ndt_8 ;
int IofCallDriver_tmp_ndt_9 ;
																int IofCallDriver_DeviceObject ; int IofCallDriver_Irp ;
																IofCallDriver_DeviceObject = DiskPerfRegisterDevice_deviceExtension__TargetDeviceObject;
																IofCallDriver_Irp = DiskPerfRegisterDevice_irp;
{
 int DiskPerfIrpCompletion_Event ;
int retres5 ;
																int DiskPerfIrpCompletion_DeviceObject ; int DiskPerfIrpCompletion_Irp ; int DiskPerfIrpCompletion_Context ;
																DiskPerfIrpCompletion_DeviceObject = IofCallDriver_DeviceObject;
																DiskPerfIrpCompletion_Irp = IofCallDriver_Irp;
																DiskPerfIrpCompletion_Context = IofCallDriver_lcontext;
{
 int KeSetEvent_l ;
																int KeSetEvent_Event ; int KeSetEvent_Increment ; int KeSetEvent_Wait ;
																KeSetEvent_Event = DiskPerfIrpCompletion_Event;
																KeSetEvent_Increment = 0;
																KeSetEvent_Wait = 0;
																setEventCalled = 1;
																;
																TRACER_RV = nondet();
																retres5 = -1073741802;
																TRACER_RV = (retres5);
																IofCallDriver_compRetStatus = TRACER_RV;
																TRACER_RV = nondet();
																IofCallDriver_CIL___Tmp7 = IofCallDriver_compRetStatus;
{
																safety = safety + (s - NP);
																s = MPR1;
																;
																TRACER_RV = nondet();
																IofCallDriver_tmp_ndt_8 = __VERIFIER_nondet_int();
																if(IofCallDriver_tmp_ndt_8 >= 0 && IofCallDriver_tmp_ndt_8 <= 0) {
																	IofCallDriver_returnVal2 = 0;
																	s = NP;
																	lowerDriverReturn = IofCallDriver_returnVal2;
																	TRACER_RV = (IofCallDriver_returnVal2);
																	DiskPerfRegisterDevice_status = TRACER_RV;
																	TRACER_RV = nondet();
																	goto L124;
																}
																else if(IofCallDriver_tmp_ndt_8 < 0) {
L151:;
																	IofCallDriver_tmp_ndt_9 = __VERIFIER_nondet_int();
																	if(IofCallDriver_tmp_ndt_9 >= 1 && IofCallDriver_tmp_ndt_9 <= 1) {
																		IofCallDriver_returnVal2 = -1073741823;
																		s = NP;
																		lowerDriverReturn = IofCallDriver_returnVal2;
																		TRACER_RV = (IofCallDriver_returnVal2);
																		DiskPerfRegisterDevice_status = TRACER_RV;
																		TRACER_RV = nondet();
																		goto L134;
																	}
																	else if(IofCallDriver_tmp_ndt_9 < 1) {
L152:;
																		IofCallDriver_returnVal2 = 259;
																		s = MPR3;
																		lowerDriverReturn = IofCallDriver_returnVal2;
																		TRACER_RV = (IofCallDriver_returnVal2);
																		DiskPerfRegisterDevice_status = TRACER_RV;
																		TRACER_RV = nondet();
																		DiskPerfRegisterDevice_CIL___Tmp27 = DiskPerfRegisterDevice_status;
{
 int KeWaitForSingleObject_tmp_ndt_10 ;
int retres7 ;
																		int KeWaitForSingleObject_Object ; int KeWaitForSingleObject_WaitReason ; int KeWaitForSingleObject_WaitMode ; int KeWaitForSingleObject_Alertable ; int KeWaitForSingleObject_Timeout ;
																		KeWaitForSingleObject_Object = DiskPerfRegisterDevice_event;
																		KeWaitForSingleObject_WaitReason = Executive;
																		KeWaitForSingleObject_WaitMode = KernelMode;
																		KeWaitForSingleObject_Alertable = 0;
																		KeWaitForSingleObject_Timeout = 0;
																		s = NP;
																		setEventCalled = 0;
L153:;
																		;
																		TRACER_RV = nondet();
																		DiskPerfRegisterDevice_status = DiskPerfRegisterDevice_ioStatus__Status;
																		DiskPerfRegisterDevice_CIL___Tmp28 = DiskPerfRegisterDevice_status;
																		if(DiskPerfRegisterDevice_CIL___Tmp28 >= -2147483643 && DiskPerfRegisterDevice_CIL___Tmp28 <= -2147483643) {
																			goto L139;
																		}
																		else if(DiskPerfRegisterDevice_CIL___Tmp28 < -2147483643) {
																			goto L145;
																		}
																		else {
																			goto L147;
																		}
}
																	}
																	else {
																		goto L152;
																	}
																}
																else {
																	goto L151;
																}
}
}
}
}
															}
															else {
																goto L150;
															}
														}
														else if(IoBuildDeviceIoControlRequest_tmp_ndt_7 < 0) {
L154:;
															retres12 = 0;
															goto L149;
														}
														else {
															goto L154;
														}
}
													}
												}
												else if(IofCallDriver_tmp_ndt_9 < 1) {
L155:;
													IofCallDriver_returnVal2 = 259;
													s = MPR3;
													lowerDriverReturn = IofCallDriver_returnVal2;
													TRACER_RV = (IofCallDriver_returnVal2);
													DiskPerfRegisterDevice_status = TRACER_RV;
													TRACER_RV = nondet();
													DiskPerfRegisterDevice_CIL___Tmp23 = DiskPerfRegisterDevice_status;
{
 int KeWaitForSingleObject_tmp_ndt_10 ;
int retres7 ;
													int KeWaitForSingleObject_Object ; int KeWaitForSingleObject_WaitReason ; int KeWaitForSingleObject_WaitMode ; int KeWaitForSingleObject_Alertable ; int KeWaitForSingleObject_Timeout ;
													KeWaitForSingleObject_Object = DiskPerfRegisterDevice_event;
													KeWaitForSingleObject_WaitReason = Executive;
													KeWaitForSingleObject_WaitMode = KernelMode;
													KeWaitForSingleObject_Alertable = 0;
													KeWaitForSingleObject_Timeout = 0;
													s = NP;
													setEventCalled = 0;
L156:;
													;
													TRACER_RV = nondet();
													DiskPerfRegisterDevice_status = DiskPerfRegisterDevice_ioStatus__Status;
													if(DiskPerfRegisterDevice_status < 0) {
														goto L119;
													}
													else {
														goto L117;
													}
}
												}
												else {
													goto L155;
												}
											}
											else {
												goto L118;
											}
}
}
}
}
										}
										else {
											goto L116;
										}
									}
									else if(IoBuildDeviceIoControlRequest_tmp_ndt_7 < 0) {
L157:;
										retres12 = 0;
										goto L113;
									}
									else {
										goto L157;
									}
}
}
}
}
								}
								else {
									goto L111;
								}
							}
							else {
								goto L64;
							}
}
}
}
}
}
}
						}
						else if(DiskPerfDispatchPnp_irpSp__MinorFunction < 0) {
L158:;
{
 int DiskPerfSendToNextDriver_Irp__CurrentLocation ;
int DiskPerfSendToNextDriver_Irp__Tail__Overlay__CurrentStackLocation ;
int DiskPerfSendToNextDriver_DeviceObject__DeviceExtension ;
int DiskPerfSendToNextDriver_deviceExtension__TargetDeviceObject ;
int DiskPerfSendToNextDriver_deviceExtension ;
int DiskPerfSendToNextDriver_tmp ;
							int DiskPerfSendToNextDriver_DeviceObject ; int DiskPerfSendToNextDriver_Irp ;
							DiskPerfSendToNextDriver_DeviceObject = DiskPerfDispatchPnp_DeviceObject;
							DiskPerfSendToNextDriver_Irp = DiskPerfDispatchPnp_Irp;
							safety = safety + (s - NP);
							s = SKIP1;
							DiskPerfSendToNextDriver_Irp__CurrentLocation = DiskPerfSendToNextDriver_Irp__CurrentLocation + 1;
							DiskPerfSendToNextDriver_Irp__Tail__Overlay__CurrentStackLocation = DiskPerfSendToNextDriver_Irp__Tail__Overlay__CurrentStackLocation + 1;
							DiskPerfSendToNextDriver_deviceExtension = DiskPerfSendToNextDriver_DeviceObject__DeviceExtension;
{
 int IofCallDriver_returnVal2 ;
int IofCallDriver_compRetStatus ;
int IofCallDriver_lcontext ;
int IofCallDriver_CIL___Tmp7 ;
int IofCallDriver_tmp_ndt_8 ;
int IofCallDriver_tmp_ndt_9 ;
							int IofCallDriver_DeviceObject ; int IofCallDriver_Irp ;
							IofCallDriver_DeviceObject = DiskPerfSendToNextDriver_deviceExtension__TargetDeviceObject;
							IofCallDriver_Irp = DiskPerfSendToNextDriver_Irp;
							IofCallDriver_tmp_ndt_8 = __VERIFIER_nondet_int();
							if(IofCallDriver_tmp_ndt_8 >= 0 && IofCallDriver_tmp_ndt_8 <= 0) {
								IofCallDriver_returnVal2 = 0;
								safety = safety + (s - SKIP1);
								s = SKIP2;
								lowerDriverReturn = IofCallDriver_returnVal2;
								TRACER_RV = (IofCallDriver_returnVal2);
								DiskPerfSendToNextDriver_tmp = TRACER_RV;
								TRACER_RV = nondet();
								TRACER_RV = (DiskPerfSendToNextDriver_tmp);
								DiskPerfDispatchPnp_tmp = TRACER_RV;
								TRACER_RV = nondet();
								retres8 = DiskPerfDispatchPnp_tmp;
								TRACER_returning = 1;
								TRACER_RV = (retres8);
								main_status = TRACER_RV;
								TRACER_RV = nondet();
L159:;
L160:;
L161:;
								safety = safety + (main_status - lowerDriverReturn);
								goto L5;
							}
							else if(IofCallDriver_tmp_ndt_8 < 0) {
L162:;
								IofCallDriver_tmp_ndt_9 = __VERIFIER_nondet_int();
								if(IofCallDriver_tmp_ndt_9 >= 1 && IofCallDriver_tmp_ndt_9 <= 1) {
									IofCallDriver_returnVal2 = -1073741823;
									safety = safety + (s - SKIP1);
									s = SKIP2;
									lowerDriverReturn = IofCallDriver_returnVal2;
									TRACER_RV = (IofCallDriver_returnVal2);
									DiskPerfSendToNextDriver_tmp = TRACER_RV;
									TRACER_RV = nondet();
									TRACER_RV = (DiskPerfSendToNextDriver_tmp);
									DiskPerfDispatchPnp_tmp = TRACER_RV;
									TRACER_RV = nondet();
									retres8 = DiskPerfDispatchPnp_tmp;
									TRACER_returning = 1;
									TRACER_RV = (retres8);
									main_status = TRACER_RV;
									TRACER_RV = nondet();
L163:;
L164:;
									goto L161;
								}
								else if(IofCallDriver_tmp_ndt_9 < 1) {
L165:;
									IofCallDriver_returnVal2 = 259;
									safety = safety + (s - SKIP1);
									s = SKIP2;
									lowerDriverReturn = IofCallDriver_returnVal2;
									TRACER_RV = (IofCallDriver_returnVal2);
									DiskPerfSendToNextDriver_tmp = TRACER_RV;
									TRACER_RV = nondet();
									TRACER_RV = (DiskPerfSendToNextDriver_tmp);
									DiskPerfDispatchPnp_tmp = TRACER_RV;
									TRACER_RV = nondet();
									retres8 = DiskPerfDispatchPnp_tmp;
									TRACER_returning = 1;
									TRACER_RV = (retres8);
									main_status = TRACER_RV;
									TRACER_RV = nondet();
L166:;
L167:;
									goto L161;
								}
								else {
									goto L165;
								}
							}
							else {
								goto L162;
							}
}
}
						}
						else {
							if(DiskPerfDispatchPnp_irpSp__MinorFunction >= 2 && DiskPerfDispatchPnp_irpSp__MinorFunction <= 2) {
{
 int DiskPerfRemoveDevice_DeviceObject__DeviceExtension ;
int DiskPerfRemoveDevice_deviceExtension__WmilibContext ;
int DiskPerfRemoveDevice_Irp__IoStatus__Status ;
int DiskPerfRemoveDevice_status ;
int DiskPerfRemoveDevice_deviceExtension ;
int DiskPerfRemoveDevice_wmilibContext ;
								int DiskPerfRemoveDevice_DeviceObject ; int DiskPerfRemoveDevice_Irp ;
								DiskPerfRemoveDevice_DeviceObject = DiskPerfDispatchPnp_DeviceObject;
								DiskPerfRemoveDevice_Irp = DiskPerfDispatchPnp_Irp;
{
 int DiskPerfForwardIrpSynchronous_Irp__Tail__Overlay__CurrentStackLocation ;
int DiskPerfForwardIrpSynchronous_DeviceObject__DeviceExtension ;
int DiskPerfForwardIrpSynchronous_deviceExtension__TargetDeviceObject ;
int DiskPerfForwardIrpSynchronous_deviceExtension ;
int DiskPerfForwardIrpSynchronous_event ;
int DiskPerfForwardIrpSynchronous_status ;
int DiskPerfForwardIrpSynchronous_nextIrpSp__Control ;
int DiskPerfForwardIrpSynchronous_irpSp ;
int DiskPerfForwardIrpSynchronous_nextIrpSp ;
int DiskPerfForwardIrpSynchronous_irpSp__Context ;
int DiskPerfForwardIrpSynchronous_irpSp__Control ;
int DiskPerfForwardIrpSynchronous_irpSp___0 ;
int DiskPerfForwardIrpSynchronous_CIL___Tmp15 ;
								int DiskPerfForwardIrpSynchronous_DeviceObject ; int DiskPerfForwardIrpSynchronous_Irp ;
								DiskPerfForwardIrpSynchronous_DeviceObject = DiskPerfRemoveDevice_DeviceObject;
								DiskPerfForwardIrpSynchronous_Irp = DiskPerfRemoveDevice_Irp;
								DiskPerfForwardIrpSynchronous_deviceExtension = DiskPerfForwardIrpSynchronous_DeviceObject__DeviceExtension;
								DiskPerfForwardIrpSynchronous_irpSp = DiskPerfForwardIrpSynchronous_Irp__Tail__Overlay__CurrentStackLocation;
								DiskPerfForwardIrpSynchronous_nextIrpSp = DiskPerfForwardIrpSynchronous_Irp__Tail__Overlay__CurrentStackLocation - 1;
								DiskPerfForwardIrpSynchronous_nextIrpSp__Control = 0;
								safety = safety + (s - NP);
								safety = safety + (compRegistered - 0);
								compRegistered = 1;
								routine = 0;
								DiskPerfForwardIrpSynchronous_irpSp___0 = DiskPerfForwardIrpSynchronous_Irp__Tail__Overlay__CurrentStackLocation - 1;
								DiskPerfForwardIrpSynchronous_irpSp__Context = DiskPerfForwardIrpSynchronous_event;
								DiskPerfForwardIrpSynchronous_irpSp__Control = 224;
{
 int IofCallDriver_returnVal2 ;
int IofCallDriver_compRetStatus ;
int IofCallDriver_lcontext ;
int IofCallDriver_CIL___Tmp7 ;
int IofCallDriver_tmp_ndt_8 ;
int IofCallDriver_tmp_ndt_9 ;
								int IofCallDriver_DeviceObject ; int IofCallDriver_Irp ;
								IofCallDriver_DeviceObject = DiskPerfForwardIrpSynchronous_deviceExtension__TargetDeviceObject;
								IofCallDriver_Irp = DiskPerfForwardIrpSynchronous_Irp;
{
 int DiskPerfIrpCompletion_Event ;
int retres5 ;
								int DiskPerfIrpCompletion_DeviceObject ; int DiskPerfIrpCompletion_Irp ; int DiskPerfIrpCompletion_Context ;
								DiskPerfIrpCompletion_DeviceObject = IofCallDriver_DeviceObject;
								DiskPerfIrpCompletion_Irp = IofCallDriver_Irp;
								DiskPerfIrpCompletion_Context = IofCallDriver_lcontext;
{
 int KeSetEvent_l ;
								int KeSetEvent_Event ; int KeSetEvent_Increment ; int KeSetEvent_Wait ;
								KeSetEvent_Event = DiskPerfIrpCompletion_Event;
								KeSetEvent_Increment = 0;
								KeSetEvent_Wait = 0;
								setEventCalled = 1;
								;
								TRACER_RV = nondet();
								retres5 = -1073741802;
								TRACER_RV = (retres5);
								IofCallDriver_compRetStatus = TRACER_RV;
								TRACER_RV = nondet();
								IofCallDriver_CIL___Tmp7 = IofCallDriver_compRetStatus;
{
								safety = safety + (s - NP);
								s = MPR1;
								;
								TRACER_RV = nondet();
								IofCallDriver_tmp_ndt_8 = __VERIFIER_nondet_int();
								if(IofCallDriver_tmp_ndt_8 >= 0 && IofCallDriver_tmp_ndt_8 <= 0) {
									IofCallDriver_returnVal2 = 0;
									s = NP;
									lowerDriverReturn = IofCallDriver_returnVal2;
									TRACER_RV = (IofCallDriver_returnVal2);
									DiskPerfForwardIrpSynchronous_status = TRACER_RV;
									TRACER_RV = nondet();
									DiskPerfForwardIrpSynchronous_CIL___Tmp15 = DiskPerfForwardIrpSynchronous_status;
									TRACER_RV = (DiskPerfForwardIrpSynchronous_status);
									DiskPerfRemoveDevice_status = TRACER_RV;
									TRACER_RV = nondet();
{
									int IofCompleteRequest_Irp ; int IofCompleteRequest_PriorityBoost ;
									IofCompleteRequest_Irp = DiskPerfRemoveDevice_Irp;
									IofCompleteRequest_PriorityBoost = 0;
									safety = safety + (s - NP);
									s = DC;
									;
									TRACER_RV = nondet();
									TRACER_RV = (DiskPerfRemoveDevice_status);
									DiskPerfDispatchPnp_status = TRACER_RV;
									TRACER_RV = nondet();
									goto L20;
}
								}
								else if(IofCallDriver_tmp_ndt_8 < 0) {
L168:;
									IofCallDriver_tmp_ndt_9 = __VERIFIER_nondet_int();
									if(IofCallDriver_tmp_ndt_9 >= 1 && IofCallDriver_tmp_ndt_9 <= 1) {
										IofCallDriver_returnVal2 = -1073741823;
										s = NP;
										lowerDriverReturn = IofCallDriver_returnVal2;
										TRACER_RV = (IofCallDriver_returnVal2);
										DiskPerfForwardIrpSynchronous_status = TRACER_RV;
										TRACER_RV = nondet();
										TRACER_RV = (DiskPerfForwardIrpSynchronous_status);
										DiskPerfRemoveDevice_status = TRACER_RV;
										TRACER_RV = nondet();
{
										int IofCompleteRequest_Irp ; int IofCompleteRequest_PriorityBoost ;
										IofCompleteRequest_Irp = DiskPerfRemoveDevice_Irp;
										IofCompleteRequest_PriorityBoost = 0;
										safety = safety + (s - NP);
										s = DC;
										;
										TRACER_RV = nondet();
										TRACER_RV = (DiskPerfRemoveDevice_status);
										DiskPerfDispatchPnp_status = TRACER_RV;
										TRACER_RV = nondet();
										goto L67;
}
									}
									else if(IofCallDriver_tmp_ndt_9 < 1) {
L169:;
										IofCallDriver_returnVal2 = 259;
										s = MPR3;
										lowerDriverReturn = IofCallDriver_returnVal2;
										TRACER_RV = (IofCallDriver_returnVal2);
										DiskPerfForwardIrpSynchronous_status = TRACER_RV;
										TRACER_RV = nondet();
										DiskPerfForwardIrpSynchronous_CIL___Tmp15 = DiskPerfForwardIrpSynchronous_status;
{
 int KeWaitForSingleObject_tmp_ndt_10 ;
int retres7 ;
										int KeWaitForSingleObject_Object ; int KeWaitForSingleObject_WaitReason ; int KeWaitForSingleObject_WaitMode ; int KeWaitForSingleObject_Alertable ; int KeWaitForSingleObject_Timeout ;
										KeWaitForSingleObject_Object = DiskPerfForwardIrpSynchronous_event;
										KeWaitForSingleObject_WaitReason = Executive;
										KeWaitForSingleObject_WaitMode = KernelMode;
										KeWaitForSingleObject_Alertable = 0;
										KeWaitForSingleObject_Timeout = 0;
										s = NP;
										setEventCalled = 0;
L170:;
										;
										TRACER_RV = nondet();
										DiskPerfForwardIrpSynchronous_status = myStatus;
										TRACER_RV = (DiskPerfForwardIrpSynchronous_status);
										DiskPerfRemoveDevice_status = TRACER_RV;
										TRACER_RV = nondet();
{
										int IofCompleteRequest_Irp ; int IofCompleteRequest_PriorityBoost ;
										IofCompleteRequest_Irp = DiskPerfRemoveDevice_Irp;
										IofCompleteRequest_PriorityBoost = 0;
										safety = safety + (s - NP);
										s = DC;
										;
										TRACER_RV = nondet();
										TRACER_RV = (DiskPerfRemoveDevice_status);
										DiskPerfDispatchPnp_status = TRACER_RV;
										TRACER_RV = nondet();
										goto L115;
}
}
									}
									else {
										goto L169;
									}
								}
								else {
									goto L168;
								}
}
}
}
}
}
}
							}
							else if(DiskPerfDispatchPnp_irpSp__MinorFunction < 2) {
								goto L158;
							}
							else {
								goto L158;
							}
						}
}
					}
					else if(main_tmp_ndt_3 < 3) {
L171:;
						main_tmp_ndt_4 = __VERIFIER_nondet_int();
						if(main_tmp_ndt_4 >= 4 && main_tmp_ndt_4 <= 4) {
{
 int DiskPerfDispatchPower_Irp__CurrentLocation ;
int DiskPerfDispatchPower_Irp__Tail__Overlay__CurrentStackLocation ;
int DiskPerfDispatchPower_DeviceObject__DeviceExtension ;
int DiskPerfDispatchPower_deviceExtension__TargetDeviceObject ;
int DiskPerfDispatchPower_deviceExtension ;
int DiskPerfDispatchPower_tmp ;
							int DiskPerfDispatchPower_DeviceObject ; int DiskPerfDispatchPower_Irp ;
							DiskPerfDispatchPower_DeviceObject = main_devobj;
							DiskPerfDispatchPower_Irp = pirp;
							safety = safety + (s - NP);
							s = SKIP1;
							DiskPerfDispatchPower_Irp__CurrentLocation = DiskPerfDispatchPower_Irp__CurrentLocation + 1;
							DiskPerfDispatchPower_Irp__Tail__Overlay__CurrentStackLocation = DiskPerfDispatchPower_Irp__Tail__Overlay__CurrentStackLocation + 1;
							DiskPerfDispatchPower_deviceExtension = DiskPerfDispatchPower_DeviceObject__DeviceExtension;
{
 int PoCallDriver_compRetStatus ;
int PoCallDriver_returnVal ;
int PoCallDriver_lcontext ;
int PoCallDriver_CIL___Tmp7 ;
int PoCallDriver_CIL___Tmp8 ;
int PoCallDriver_tmp_ndt_11 ;
int PoCallDriver_tmp_ndt_12 ;
							int PoCallDriver_DeviceObject ; int PoCallDriver_Irp ;
							PoCallDriver_DeviceObject = DiskPerfDispatchPower_deviceExtension__TargetDeviceObject;
							PoCallDriver_Irp = DiskPerfDispatchPower_Irp;
							PoCallDriver_tmp_ndt_11 = __VERIFIER_nondet_int();
							if(PoCallDriver_tmp_ndt_11 >= 0 && PoCallDriver_tmp_ndt_11 <= 0) {
								PoCallDriver_returnVal = 0;
								safety = safety + (s - SKIP1);
								s = SKIP2;
								lowerDriverReturn = PoCallDriver_returnVal;
								TRACER_RV = (PoCallDriver_returnVal);
								DiskPerfDispatchPower_tmp = TRACER_RV;
								TRACER_RV = nondet();
								TRACER_RV = (DiskPerfDispatchPower_tmp);
								main_status = TRACER_RV;
								TRACER_RV = nondet();
								goto L160;
							}
							else if(PoCallDriver_tmp_ndt_11 < 0) {
L172:;
								PoCallDriver_tmp_ndt_12 = __VERIFIER_nondet_int();
								if(PoCallDriver_tmp_ndt_12 >= 1 && PoCallDriver_tmp_ndt_12 <= 1) {
									PoCallDriver_returnVal = -1073741823;
									safety = safety + (s - SKIP1);
									s = SKIP2;
									lowerDriverReturn = PoCallDriver_returnVal;
									TRACER_RV = (PoCallDriver_returnVal);
									DiskPerfDispatchPower_tmp = TRACER_RV;
									TRACER_RV = nondet();
									TRACER_RV = (DiskPerfDispatchPower_tmp);
									main_status = TRACER_RV;
									TRACER_RV = nondet();
									goto L164;
								}
								else if(PoCallDriver_tmp_ndt_12 < 1) {
L173:;
									PoCallDriver_returnVal = 259;
									safety = safety + (s - SKIP1);
									s = SKIP2;
									lowerDriverReturn = PoCallDriver_returnVal;
									TRACER_RV = (PoCallDriver_returnVal);
									DiskPerfDispatchPower_tmp = TRACER_RV;
									TRACER_RV = nondet();
									TRACER_RV = (DiskPerfDispatchPower_tmp);
									main_status = TRACER_RV;
									TRACER_RV = nondet();
									goto L167;
								}
								else {
									goto L173;
								}
							}
							else {
								goto L172;
							}
}
}
						}
						else if(main_tmp_ndt_4 < 4) {
L174:;
							main_tmp_ndt_5 = __VERIFIER_nondet_int();
							if(main_tmp_ndt_5 >= 12 && main_tmp_ndt_5 <= 12) {
{
 int DiskPerfShutdownFlush_DeviceObject__DeviceExtension ;
int DiskPerfShutdownFlush_Irp__CurrentLocation ;
int DiskPerfShutdownFlush_Irp__Tail__Overlay__CurrentStackLocation ;
int DiskPerfShutdownFlush_deviceExtension__TargetDeviceObject ;
int DiskPerfShutdownFlush_deviceExtension ;
int DiskPerfShutdownFlush_tmp ;
								int DiskPerfShutdownFlush_DeviceObject ; int DiskPerfShutdownFlush_Irp ;
								DiskPerfShutdownFlush_DeviceObject = main_devobj;
								DiskPerfShutdownFlush_Irp = pirp;
{
 int IofCallDriver_returnVal2 ;
int IofCallDriver_compRetStatus ;
int IofCallDriver_lcontext ;
int IofCallDriver_CIL___Tmp7 ;
int IofCallDriver_tmp_ndt_8 ;
int IofCallDriver_tmp_ndt_9 ;
								int IofCallDriver_DeviceObject ; int IofCallDriver_Irp ;
								IofCallDriver_DeviceObject = DiskPerfShutdownFlush_deviceExtension__TargetDeviceObject;
								IofCallDriver_Irp = DiskPerfShutdownFlush_Irp;
								IofCallDriver_tmp_ndt_8 = __VERIFIER_nondet_int();
								if(IofCallDriver_tmp_ndt_8 >= 0 && IofCallDriver_tmp_ndt_8 <= 0) {
									IofCallDriver_returnVal2 = 0;
									s = IPC;
									lowerDriverReturn = IofCallDriver_returnVal2;
									TRACER_RV = (IofCallDriver_returnVal2);
									DiskPerfShutdownFlush_tmp = TRACER_RV;
									TRACER_RV = nondet();
									TRACER_RV = (DiskPerfShutdownFlush_tmp);
									main_status = TRACER_RV;
									TRACER_RV = nondet();
									goto L11;
								}
								else if(IofCallDriver_tmp_ndt_8 < 0) {
L175:;
									IofCallDriver_tmp_ndt_9 = __VERIFIER_nondet_int();
									if(IofCallDriver_tmp_ndt_9 >= 1 && IofCallDriver_tmp_ndt_9 <= 1) {
										IofCallDriver_returnVal2 = -1073741823;
										s = IPC;
										lowerDriverReturn = IofCallDriver_returnVal2;
										TRACER_RV = (IofCallDriver_returnVal2);
										DiskPerfShutdownFlush_tmp = TRACER_RV;
										TRACER_RV = nondet();
										TRACER_RV = (DiskPerfShutdownFlush_tmp);
										main_status = TRACER_RV;
										TRACER_RV = nondet();
										goto L14;
									}
									else if(IofCallDriver_tmp_ndt_9 < 1) {
L176:;
										IofCallDriver_returnVal2 = 259;
										s = IPC;
										lowerDriverReturn = IofCallDriver_returnVal2;
										TRACER_RV = (IofCallDriver_returnVal2);
										DiskPerfShutdownFlush_tmp = TRACER_RV;
										TRACER_RV = nondet();
										TRACER_RV = (DiskPerfShutdownFlush_tmp);
										main_status = TRACER_RV;
										TRACER_RV = nondet();
										goto L16;
									}
									else {
										goto L176;
									}
								}
								else {
									goto L175;
								}
}
}
							}
							else if(main_tmp_ndt_5 < 12) {
L177:;
								TRACER_returning = 1;
								goto L5;
							}
							else {
								goto L177;
							}
						}
						else {
							goto L174;
						}
					}
					else {
						goto L171;
					}
				}
				else {
					goto L17;
				}
			}
			else {
				goto L6;
			}
}
		}
		else if(main_irp_choice < 0) {
L178:;
{
			s = NP;
			customIrp = 0;
			setEventCalled = customIrp;
			lowerDriverReturn = setEventCalled;
			compRegistered = lowerDriverReturn;
			compFptr = compRegistered;
			pended = compFptr;
			;
			TRACER_RV = nondet();
			main_tmp_ndt_1 = __VERIFIER_nondet_int();
			if(main_tmp_ndt_1 >= 0 && main_tmp_ndt_1 <= 0) {
				goto L1;
			}
			else if(main_tmp_ndt_1 < 0) {
L179:;
				main_tmp_ndt_2 = __VERIFIER_nondet_int();
				if(main_tmp_ndt_2 >= 2 && main_tmp_ndt_2 <= 2) {
					goto L7;
				}
				else if(main_tmp_ndt_2 < 2) {
L180:;
					main_tmp_ndt_3 = __VERIFIER_nondet_int();
					if(main_tmp_ndt_3 >= 3 && main_tmp_ndt_3 <= 3) {
{
 int DiskPerfDispatchPnp_Irp__Tail__Overlay__CurrentStackLocation ;
int DiskPerfDispatchPnp_irpSp__MinorFunction ;
int DiskPerfDispatchPnp_irpSp ;
int DiskPerfDispatchPnp_status ;
int DiskPerfDispatchPnp_tmp ;
int retres8 ;
int TRACER_returning ;
						int DiskPerfDispatchPnp_DeviceObject ; int DiskPerfDispatchPnp_Irp ;
						DiskPerfDispatchPnp_DeviceObject = main_devobj;
						DiskPerfDispatchPnp_Irp = pirp;
						TRACER_returning = 0;
						DiskPerfDispatchPnp_irpSp = DiskPerfDispatchPnp_Irp__Tail__Overlay__CurrentStackLocation;
						if(DiskPerfDispatchPnp_irpSp__MinorFunction >= 0 && DiskPerfDispatchPnp_irpSp__MinorFunction <= 0) {
{
 int DiskPerfStartDevice_DeviceObject__DeviceExtension ;
int DiskPerfStartDevice_deviceExtension__TargetDeviceObject ;
int DiskPerfStartDevice_Irp__IoStatus__Status ;
int DiskPerfStartDevice_deviceExtension ;
int DiskPerfStartDevice_status ;
							int DiskPerfStartDevice_DeviceObject ; int DiskPerfStartDevice_Irp ;
							DiskPerfStartDevice_DeviceObject = DiskPerfDispatchPnp_DeviceObject;
							DiskPerfStartDevice_Irp = DiskPerfDispatchPnp_Irp;
{
 int DiskPerfForwardIrpSynchronous_Irp__Tail__Overlay__CurrentStackLocation ;
int DiskPerfForwardIrpSynchronous_DeviceObject__DeviceExtension ;
int DiskPerfForwardIrpSynchronous_deviceExtension__TargetDeviceObject ;
int DiskPerfForwardIrpSynchronous_deviceExtension ;
int DiskPerfForwardIrpSynchronous_event ;
int DiskPerfForwardIrpSynchronous_status ;
int DiskPerfForwardIrpSynchronous_nextIrpSp__Control ;
int DiskPerfForwardIrpSynchronous_irpSp ;
int DiskPerfForwardIrpSynchronous_nextIrpSp ;
int DiskPerfForwardIrpSynchronous_irpSp__Context ;
int DiskPerfForwardIrpSynchronous_irpSp__Control ;
int DiskPerfForwardIrpSynchronous_irpSp___0 ;
int DiskPerfForwardIrpSynchronous_CIL___Tmp15 ;
							int DiskPerfForwardIrpSynchronous_DeviceObject ; int DiskPerfForwardIrpSynchronous_Irp ;
							DiskPerfForwardIrpSynchronous_DeviceObject = DiskPerfStartDevice_DeviceObject;
							DiskPerfForwardIrpSynchronous_Irp = DiskPerfStartDevice_Irp;
							DiskPerfForwardIrpSynchronous_deviceExtension = DiskPerfForwardIrpSynchronous_DeviceObject__DeviceExtension;
							DiskPerfForwardIrpSynchronous_irpSp = DiskPerfForwardIrpSynchronous_Irp__Tail__Overlay__CurrentStackLocation;
							DiskPerfForwardIrpSynchronous_nextIrpSp = DiskPerfForwardIrpSynchronous_Irp__Tail__Overlay__CurrentStackLocation - 1;
							DiskPerfForwardIrpSynchronous_nextIrpSp__Control = 0;
							safety = safety + (s - NP);
							safety = safety + (compRegistered - 0);
							compRegistered = 1;
							routine = 0;
							DiskPerfForwardIrpSynchronous_irpSp___0 = DiskPerfForwardIrpSynchronous_Irp__Tail__Overlay__CurrentStackLocation - 1;
							DiskPerfForwardIrpSynchronous_irpSp__Context = DiskPerfForwardIrpSynchronous_event;
							DiskPerfForwardIrpSynchronous_irpSp__Control = 224;
{
 int IofCallDriver_returnVal2 ;
int IofCallDriver_compRetStatus ;
int IofCallDriver_lcontext ;
int IofCallDriver_CIL___Tmp7 ;
int IofCallDriver_tmp_ndt_8 ;
int IofCallDriver_tmp_ndt_9 ;
							int IofCallDriver_DeviceObject ; int IofCallDriver_Irp ;
							IofCallDriver_DeviceObject = DiskPerfForwardIrpSynchronous_deviceExtension__TargetDeviceObject;
							IofCallDriver_Irp = DiskPerfForwardIrpSynchronous_Irp;
{
 int DiskPerfIrpCompletion_Event ;
int retres5 ;
							int DiskPerfIrpCompletion_DeviceObject ; int DiskPerfIrpCompletion_Irp ; int DiskPerfIrpCompletion_Context ;
							DiskPerfIrpCompletion_DeviceObject = IofCallDriver_DeviceObject;
							DiskPerfIrpCompletion_Irp = IofCallDriver_Irp;
							DiskPerfIrpCompletion_Context = IofCallDriver_lcontext;
{
 int KeSetEvent_l ;
							int KeSetEvent_Event ; int KeSetEvent_Increment ; int KeSetEvent_Wait ;
							KeSetEvent_Event = DiskPerfIrpCompletion_Event;
							KeSetEvent_Increment = 0;
							KeSetEvent_Wait = 0;
							setEventCalled = 1;
							;
							TRACER_RV = nondet();
							retres5 = -1073741802;
							TRACER_RV = (retres5);
							IofCallDriver_compRetStatus = TRACER_RV;
							TRACER_RV = nondet();
							IofCallDriver_CIL___Tmp7 = IofCallDriver_compRetStatus;
{
							safety = safety + (s - NP);
							s = MPR1;
							;
							TRACER_RV = nondet();
							IofCallDriver_tmp_ndt_8 = __VERIFIER_nondet_int();
							if(IofCallDriver_tmp_ndt_8 >= 0 && IofCallDriver_tmp_ndt_8 <= 0) {
								IofCallDriver_returnVal2 = 0;
								s = NP;
								lowerDriverReturn = IofCallDriver_returnVal2;
								TRACER_RV = (IofCallDriver_returnVal2);
								DiskPerfForwardIrpSynchronous_status = TRACER_RV;
								TRACER_RV = nondet();
								DiskPerfForwardIrpSynchronous_CIL___Tmp15 = DiskPerfForwardIrpSynchronous_status;
L181:;
								TRACER_RV = (DiskPerfForwardIrpSynchronous_status);
								DiskPerfStartDevice_status = TRACER_RV;
								TRACER_RV = nondet();
{
								int DiskPerfSyncFilterWithTarget_FilterDevice ; int DiskPerfSyncFilterWithTarget_TargetDevice ;
								DiskPerfSyncFilterWithTarget_FilterDevice = DiskPerfStartDevice_DeviceObject;
								DiskPerfSyncFilterWithTarget_TargetDevice = DiskPerfStartDevice_deviceExtension__TargetDeviceObject;
								;
								TRACER_RV = nondet();
{
 int DiskPerfRegisterDevice_DeviceObject__DeviceExtension ;
int DiskPerfRegisterDevice_deviceExtension__TargetDeviceObject ;
int DiskPerfRegisterDevice_sizeof__number ;
int DiskPerfRegisterDevice_ioStatus__Status ;
int DiskPerfRegisterDevice_sizeof__VOLUME_NUMBER ;
int DiskPerfRegisterDevice_status ;
int DiskPerfRegisterDevice_ioStatus ;
int DiskPerfRegisterDevice_event ;
int DiskPerfRegisterDevice_deviceExtension ;
int DiskPerfRegisterDevice_irp ;
int DiskPerfRegisterDevice_number ;
int DiskPerfRegisterDevice_registrationFlag ;
int DiskPerfRegisterDevice_sizeof__MOUNTDEV_NAME ;
int DiskPerfRegisterDevice_output__NameLength ;
int DiskPerfRegisterDevice_outputSize ;
int DiskPerfRegisterDevice_output ;
int DiskPerfRegisterDevice_volumeNumber ;
int DiskPerfRegisterDevice_CIL___Tmp20 ;
int DiskPerfRegisterDevice_CIL___Tmp21 ;
int DiskPerfRegisterDevice_CIL___Tmp22 ;
int DiskPerfRegisterDevice_CIL___Tmp23 ;
int DiskPerfRegisterDevice_CIL___Tmp24 ;
int DiskPerfRegisterDevice_CIL___Tmp25 ;
int DiskPerfRegisterDevice_CIL___Tmp26 ;
int DiskPerfRegisterDevice_CIL___Tmp27 ;
int DiskPerfRegisterDevice_CIL___Tmp28 ;
int DiskPerfRegisterDevice_CIL___Tmp29 ;
int DiskPerfRegisterDevice_CIL___Tmp30 ;
int DiskPerfRegisterDevice_CIL___Tmp31 ;
int DiskPerfRegisterDevice_CIL___Tmp32 ;
int DiskPerfRegisterDevice_CIL___Tmp34 ;
int DiskPerfRegisterDevice_CIL___Tmp35 ;
int DiskPerfRegisterDevice_CIL___Tmp36 ;
int DiskPerfRegisterDevice_CIL___Tmp37 ;
int retres37 ;
int TRACER_returning ;
								int DiskPerfRegisterDevice_DeviceObject ;
								DiskPerfRegisterDevice_DeviceObject = DiskPerfStartDevice_DeviceObject;
								TRACER_returning = 0;
								DiskPerfRegisterDevice_registrationFlag = 0;
								DiskPerfRegisterDevice_deviceExtension = DiskPerfRegisterDevice_DeviceObject__DeviceExtension;
								DiskPerfRegisterDevice_CIL___Tmp20 = 4224;
								DiskPerfRegisterDevice_CIL___Tmp21 = 2949120;
								DiskPerfRegisterDevice_CIL___Tmp22 = 2953344;
{
 int IoBuildDeviceIoControlRequest_malloc_ret ;
int IoBuildDeviceIoControlRequest_tmp_ndt_7 ;
int retres12 ;
								int IoBuildDeviceIoControlRequest_IoControlCode ; int IoBuildDeviceIoControlRequest_DeviceObject ; int IoBuildDeviceIoControlRequest_InputBuffer ; int IoBuildDeviceIoControlRequest_InputBufferLength ; int IoBuildDeviceIoControlRequest_OutputBuffer ; int IoBuildDeviceIoControlRequest_OutputBufferLength ; int IoBuildDeviceIoControlRequest_InternalDeviceIoControl ; int IoBuildDeviceIoControlRequest_Event ; int IoBuildDeviceIoControlRequest_IoStatusBlock ;
								IoBuildDeviceIoControlRequest_IoControlCode = DiskPerfRegisterDevice_CIL___Tmp22;
								IoBuildDeviceIoControlRequest_DeviceObject = DiskPerfRegisterDevice_deviceExtension__TargetDeviceObject;
								IoBuildDeviceIoControlRequest_InputBuffer = 0;
								IoBuildDeviceIoControlRequest_InputBufferLength = 0;
								IoBuildDeviceIoControlRequest_OutputBuffer = DiskPerfRegisterDevice_number;
								IoBuildDeviceIoControlRequest_OutputBufferLength = DiskPerfRegisterDevice_sizeof__number;
								IoBuildDeviceIoControlRequest_InternalDeviceIoControl = 0;
								IoBuildDeviceIoControlRequest_Event = DiskPerfRegisterDevice_event;
								IoBuildDeviceIoControlRequest_IoStatusBlock = DiskPerfRegisterDevice_ioStatus;
								customIrp = 1;
								IoBuildDeviceIoControlRequest_tmp_ndt_7 = __VERIFIER_nondet_int();
								if(IoBuildDeviceIoControlRequest_tmp_ndt_7 >= 0 && IoBuildDeviceIoControlRequest_tmp_ndt_7 <= 0) {
									retres12 = IoBuildDeviceIoControlRequest_malloc_ret;
L182:;
									TRACER_RV = (retres12);
									DiskPerfRegisterDevice_irp = TRACER_RV;
									TRACER_RV = nondet();
									if(DiskPerfRegisterDevice_irp >= 0 && DiskPerfRegisterDevice_irp <= 0) {
L183:;
										;
										TRACER_RV = nondet();
{
										int IofCompleteRequest_Irp ; int IofCompleteRequest_PriorityBoost ;
										IofCompleteRequest_Irp = DiskPerfStartDevice_Irp;
										IofCompleteRequest_PriorityBoost = 0;
										safety = safety + (s - NP);
										s = DC;
										;
										TRACER_RV = nondet();
										TRACER_RV = (DiskPerfStartDevice_status);
										DiskPerfDispatchPnp_status = TRACER_RV;
										TRACER_RV = nondet();
L184:;
										retres8 = DiskPerfDispatchPnp_status;
										TRACER_RV = (retres8);
										main_status = TRACER_RV;
										TRACER_RV = nondet();
										goto L21;
}
									}
									else if(DiskPerfRegisterDevice_irp < 0) {
L185:;
{
 int IofCallDriver_returnVal2 ;
int IofCallDriver_compRetStatus ;
int IofCallDriver_lcontext ;
int IofCallDriver_CIL___Tmp7 ;
int IofCallDriver_tmp_ndt_8 ;
int IofCallDriver_tmp_ndt_9 ;
										int IofCallDriver_DeviceObject ; int IofCallDriver_Irp ;
										IofCallDriver_DeviceObject = DiskPerfRegisterDevice_deviceExtension__TargetDeviceObject;
										IofCallDriver_Irp = DiskPerfRegisterDevice_irp;
{
 int DiskPerfIrpCompletion_Event ;
int retres5 ;
										int DiskPerfIrpCompletion_DeviceObject ; int DiskPerfIrpCompletion_Irp ; int DiskPerfIrpCompletion_Context ;
										DiskPerfIrpCompletion_DeviceObject = IofCallDriver_DeviceObject;
										DiskPerfIrpCompletion_Irp = IofCallDriver_Irp;
										DiskPerfIrpCompletion_Context = IofCallDriver_lcontext;
{
 int KeSetEvent_l ;
										int KeSetEvent_Event ; int KeSetEvent_Increment ; int KeSetEvent_Wait ;
										KeSetEvent_Event = DiskPerfIrpCompletion_Event;
										KeSetEvent_Increment = 0;
										KeSetEvent_Wait = 0;
										setEventCalled = 1;
										;
										TRACER_RV = nondet();
										retres5 = -1073741802;
										TRACER_RV = (retres5);
										IofCallDriver_compRetStatus = TRACER_RV;
										TRACER_RV = nondet();
										IofCallDriver_CIL___Tmp7 = IofCallDriver_compRetStatus;
{
										safety = safety + (s - NP);
										s = MPR1;
										;
										TRACER_RV = nondet();
										IofCallDriver_tmp_ndt_8 = __VERIFIER_nondet_int();
										if(IofCallDriver_tmp_ndt_8 >= 0 && IofCallDriver_tmp_ndt_8 <= 0) {
											IofCallDriver_returnVal2 = 0;
											s = NP;
											lowerDriverReturn = IofCallDriver_returnVal2;
											TRACER_RV = (IofCallDriver_returnVal2);
											DiskPerfRegisterDevice_status = TRACER_RV;
											TRACER_RV = nondet();
											DiskPerfRegisterDevice_CIL___Tmp23 = DiskPerfRegisterDevice_status;
L186:;
											goto L183;
										}
										else if(IofCallDriver_tmp_ndt_8 < 0) {
L187:;
											IofCallDriver_tmp_ndt_9 = __VERIFIER_nondet_int();
											if(IofCallDriver_tmp_ndt_9 >= 1 && IofCallDriver_tmp_ndt_9 <= 1) {
												IofCallDriver_returnVal2 = -1073741823;
												s = NP;
												lowerDriverReturn = IofCallDriver_returnVal2;
												TRACER_RV = (IofCallDriver_returnVal2);
												DiskPerfRegisterDevice_status = TRACER_RV;
												TRACER_RV = nondet();
L188:;
												if(DiskPerfRegisterDevice_output >= 0 && DiskPerfRegisterDevice_output <= 0) {
													retres37 = -1073741670;
													TRACER_returning = 1;
L189:;
													goto L183;
												}
												else if(DiskPerfRegisterDevice_output < 0) {
{
 int IoBuildDeviceIoControlRequest_malloc_ret ;
int IoBuildDeviceIoControlRequest_tmp_ndt_7 ;
int retres12 ;
													int IoBuildDeviceIoControlRequest_IoControlCode ; int IoBuildDeviceIoControlRequest_DeviceObject ; int IoBuildDeviceIoControlRequest_InputBuffer ; int IoBuildDeviceIoControlRequest_InputBufferLength ; int IoBuildDeviceIoControlRequest_OutputBuffer ; int IoBuildDeviceIoControlRequest_OutputBufferLength ; int IoBuildDeviceIoControlRequest_InternalDeviceIoControl ; int IoBuildDeviceIoControlRequest_Event ; int IoBuildDeviceIoControlRequest_IoStatusBlock ;
													IoBuildDeviceIoControlRequest_IoControlCode = DiskPerfRegisterDevice_CIL___Tmp26;
													IoBuildDeviceIoControlRequest_DeviceObject = DiskPerfRegisterDevice_deviceExtension__TargetDeviceObject;
													IoBuildDeviceIoControlRequest_InputBuffer = 0;
													IoBuildDeviceIoControlRequest_InputBufferLength = 0;
													IoBuildDeviceIoControlRequest_OutputBuffer = DiskPerfRegisterDevice_output;
													IoBuildDeviceIoControlRequest_OutputBufferLength = DiskPerfRegisterDevice_outputSize;
													IoBuildDeviceIoControlRequest_InternalDeviceIoControl = 0;
													IoBuildDeviceIoControlRequest_Event = DiskPerfRegisterDevice_event;
													IoBuildDeviceIoControlRequest_IoStatusBlock = DiskPerfRegisterDevice_ioStatus;
													customIrp = 1;
													IoBuildDeviceIoControlRequest_tmp_ndt_7 = __VERIFIER_nondet_int();
													if(IoBuildDeviceIoControlRequest_tmp_ndt_7 >= 0 && IoBuildDeviceIoControlRequest_tmp_ndt_7 <= 0) {
														retres12 = IoBuildDeviceIoControlRequest_malloc_ret;
L190:;
														TRACER_RV = (retres12);
														DiskPerfRegisterDevice_irp = TRACER_RV;
														TRACER_RV = nondet();
														if(DiskPerfRegisterDevice_irp >= 0 && DiskPerfRegisterDevice_irp <= 0) {
L191:;
															retres37 = -1073741670;
															TRACER_returning = 1;
															goto L189;
														}
														else if(DiskPerfRegisterDevice_irp < 0) {
L192:;
{
 int IofCallDriver_returnVal2 ;
int IofCallDriver_compRetStatus ;
int IofCallDriver_lcontext ;
int IofCallDriver_CIL___Tmp7 ;
int IofCallDriver_tmp_ndt_8 ;
int IofCallDriver_tmp_ndt_9 ;
															int IofCallDriver_DeviceObject ; int IofCallDriver_Irp ;
															IofCallDriver_DeviceObject = DiskPerfRegisterDevice_deviceExtension__TargetDeviceObject;
															IofCallDriver_Irp = DiskPerfRegisterDevice_irp;
{
 int DiskPerfIrpCompletion_Event ;
int retres5 ;
															int DiskPerfIrpCompletion_DeviceObject ; int DiskPerfIrpCompletion_Irp ; int DiskPerfIrpCompletion_Context ;
															DiskPerfIrpCompletion_DeviceObject = IofCallDriver_DeviceObject;
															DiskPerfIrpCompletion_Irp = IofCallDriver_Irp;
															DiskPerfIrpCompletion_Context = IofCallDriver_lcontext;
{
 int KeSetEvent_l ;
															int KeSetEvent_Event ; int KeSetEvent_Increment ; int KeSetEvent_Wait ;
															KeSetEvent_Event = DiskPerfIrpCompletion_Event;
															KeSetEvent_Increment = 0;
															KeSetEvent_Wait = 0;
															setEventCalled = 1;
															;
															TRACER_RV = nondet();
															retres5 = -1073741802;
															TRACER_RV = (retres5);
															IofCallDriver_compRetStatus = TRACER_RV;
															TRACER_RV = nondet();
															IofCallDriver_CIL___Tmp7 = IofCallDriver_compRetStatus;
{
															safety = safety + (s - NP);
															s = MPR1;
															;
															TRACER_RV = nondet();
															IofCallDriver_tmp_ndt_8 = __VERIFIER_nondet_int();
															if(IofCallDriver_tmp_ndt_8 >= 0 && IofCallDriver_tmp_ndt_8 <= 0) {
																IofCallDriver_returnVal2 = 0;
																s = NP;
																lowerDriverReturn = IofCallDriver_returnVal2;
																TRACER_RV = (IofCallDriver_returnVal2);
																DiskPerfRegisterDevice_status = TRACER_RV;
																TRACER_RV = nondet();
L193:;
																DiskPerfRegisterDevice_CIL___Tmp27 = DiskPerfRegisterDevice_status;
																DiskPerfRegisterDevice_CIL___Tmp28 = DiskPerfRegisterDevice_status;
L194:;
L195:;
{
 int IoBuildDeviceIoControlRequest_malloc_ret ;
int IoBuildDeviceIoControlRequest_tmp_ndt_7 ;
int retres12 ;
																int IoBuildDeviceIoControlRequest_IoControlCode ; int IoBuildDeviceIoControlRequest_DeviceObject ; int IoBuildDeviceIoControlRequest_InputBuffer ; int IoBuildDeviceIoControlRequest_InputBufferLength ; int IoBuildDeviceIoControlRequest_OutputBuffer ; int IoBuildDeviceIoControlRequest_OutputBufferLength ; int IoBuildDeviceIoControlRequest_InternalDeviceIoControl ; int IoBuildDeviceIoControlRequest_Event ; int IoBuildDeviceIoControlRequest_IoStatusBlock ;
																IoBuildDeviceIoControlRequest_IoControlCode = DiskPerfRegisterDevice_CIL___Tmp36;
																IoBuildDeviceIoControlRequest_DeviceObject = DiskPerfRegisterDevice_deviceExtension__TargetDeviceObject;
																IoBuildDeviceIoControlRequest_InputBuffer = 0;
																IoBuildDeviceIoControlRequest_InputBufferLength = 0;
																IoBuildDeviceIoControlRequest_OutputBuffer = DiskPerfRegisterDevice_volumeNumber;
																IoBuildDeviceIoControlRequest_OutputBufferLength = DiskPerfRegisterDevice_sizeof__VOLUME_NUMBER;
																IoBuildDeviceIoControlRequest_InternalDeviceIoControl = 0;
																IoBuildDeviceIoControlRequest_Event = DiskPerfRegisterDevice_event;
																IoBuildDeviceIoControlRequest_IoStatusBlock = DiskPerfRegisterDevice_ioStatus;
																customIrp = 1;
																IoBuildDeviceIoControlRequest_tmp_ndt_7 = __VERIFIER_nondet_int();
																if(IoBuildDeviceIoControlRequest_tmp_ndt_7 >= 0 && IoBuildDeviceIoControlRequest_tmp_ndt_7 <= 0) {
																	retres12 = IoBuildDeviceIoControlRequest_malloc_ret;
L196:;
																	TRACER_RV = (retres12);
																	DiskPerfRegisterDevice_irp = TRACER_RV;
																	TRACER_RV = nondet();
																	if(DiskPerfRegisterDevice_irp >= 0 && DiskPerfRegisterDevice_irp <= 0) {
																		retres37 = -1073741670;
																		TRACER_returning = 1;
																		goto L189;
																	}
																	else if(DiskPerfRegisterDevice_irp < 0) {
L197:;
{
 int IofCallDriver_returnVal2 ;
int IofCallDriver_compRetStatus ;
int IofCallDriver_lcontext ;
int IofCallDriver_CIL___Tmp7 ;
int IofCallDriver_tmp_ndt_8 ;
int IofCallDriver_tmp_ndt_9 ;
																		int IofCallDriver_DeviceObject ; int IofCallDriver_Irp ;
																		IofCallDriver_DeviceObject = DiskPerfRegisterDevice_deviceExtension__TargetDeviceObject;
																		IofCallDriver_Irp = DiskPerfRegisterDevice_irp;
{
 int DiskPerfIrpCompletion_Event ;
int retres5 ;
																		int DiskPerfIrpCompletion_DeviceObject ; int DiskPerfIrpCompletion_Irp ; int DiskPerfIrpCompletion_Context ;
																		DiskPerfIrpCompletion_DeviceObject = IofCallDriver_DeviceObject;
																		DiskPerfIrpCompletion_Irp = IofCallDriver_Irp;
																		DiskPerfIrpCompletion_Context = IofCallDriver_lcontext;
{
 int KeSetEvent_l ;
																		int KeSetEvent_Event ; int KeSetEvent_Increment ; int KeSetEvent_Wait ;
																		KeSetEvent_Event = DiskPerfIrpCompletion_Event;
																		KeSetEvent_Increment = 0;
																		KeSetEvent_Wait = 0;
																		setEventCalled = 1;
																		;
																		TRACER_RV = nondet();
																		retres5 = -1073741802;
																		TRACER_RV = (retres5);
																		IofCallDriver_compRetStatus = TRACER_RV;
																		TRACER_RV = nondet();
																		IofCallDriver_CIL___Tmp7 = IofCallDriver_compRetStatus;
{
																		safety = safety + (s - NP);
																		s = MPR1;
																		;
																		TRACER_RV = nondet();
																		IofCallDriver_tmp_ndt_8 = __VERIFIER_nondet_int();
																		if(IofCallDriver_tmp_ndt_8 >= 0 && IofCallDriver_tmp_ndt_8 <= 0) {
																			IofCallDriver_returnVal2 = 0;
																			s = NP;
																			lowerDriverReturn = IofCallDriver_returnVal2;
																			TRACER_RV = (IofCallDriver_returnVal2);
																			DiskPerfRegisterDevice_status = TRACER_RV;
																			TRACER_RV = nondet();
																			DiskPerfRegisterDevice_CIL___Tmp37 = DiskPerfRegisterDevice_status;
																			goto L186;
																		}
																		else if(IofCallDriver_tmp_ndt_8 < 0) {
L198:;
																			IofCallDriver_tmp_ndt_9 = __VERIFIER_nondet_int();
																			if(IofCallDriver_tmp_ndt_9 >= 1 && IofCallDriver_tmp_ndt_9 <= 1) {
																				IofCallDriver_returnVal2 = -1073741823;
																				s = NP;
																				lowerDriverReturn = IofCallDriver_returnVal2;
																				DiskPerfRegisterDevice_status = TRACER_RV;
																				TRACER_RV = nondet();
																				goto L186;
																			}
																			else if(IofCallDriver_tmp_ndt_9 < 1) {
L199:;
																				IofCallDriver_returnVal2 = 259;
																				s = MPR3;
																				lowerDriverReturn = IofCallDriver_returnVal2;
																				TRACER_RV = (IofCallDriver_returnVal2);
																				DiskPerfRegisterDevice_status = TRACER_RV;
																				TRACER_RV = nondet();
																				DiskPerfRegisterDevice_CIL___Tmp37 = DiskPerfRegisterDevice_status;
{
 int KeWaitForSingleObject_tmp_ndt_10 ;
int retres7 ;
																				int KeWaitForSingleObject_Object ; int KeWaitForSingleObject_WaitReason ; int KeWaitForSingleObject_WaitMode ; int KeWaitForSingleObject_Alertable ; int KeWaitForSingleObject_Timeout ;
																				KeWaitForSingleObject_Object = DiskPerfRegisterDevice_event;
																				KeWaitForSingleObject_WaitReason = Executive;
																				KeWaitForSingleObject_WaitMode = KernelMode;
																				KeWaitForSingleObject_Alertable = 0;
																				KeWaitForSingleObject_Timeout = 0;
																				s = NP;
																				setEventCalled = 0;
L200:;
																				;
																				TRACER_RV = nondet();
																				goto L186;
}
																			}
																			else {
																				goto L199;
																			}
																		}
																		else {
																			goto L198;
																		}
}
}
}
}
																	}
																	else {
																		goto L197;
																	}
																}
																else if(IoBuildDeviceIoControlRequest_tmp_ndt_7 < 0) {
L201:;
																	retres12 = 0;
																	goto L196;
																}
																else {
																	goto L201;
																}
}
															}
															else if(IofCallDriver_tmp_ndt_8 < 0) {
L202:;
																IofCallDriver_tmp_ndt_9 = __VERIFIER_nondet_int();
																if(IofCallDriver_tmp_ndt_9 >= 1 && IofCallDriver_tmp_ndt_9 <= 1) {
																	IofCallDriver_returnVal2 = -1073741823;
																	s = NP;
																	lowerDriverReturn = IofCallDriver_returnVal2;
																	TRACER_RV = (IofCallDriver_returnVal2);
																	DiskPerfRegisterDevice_status = TRACER_RV;
																	TRACER_RV = nondet();
L203:;
																	DiskPerfRegisterDevice_CIL___Tmp28 = DiskPerfRegisterDevice_status;
L204:;
L205:;
																	retres37 = DiskPerfRegisterDevice_status;
																	TRACER_returning = 1;
																	goto L189;
																}
																else if(IofCallDriver_tmp_ndt_9 < 1) {
L206:;
																	IofCallDriver_returnVal2 = 259;
																	s = MPR3;
																	lowerDriverReturn = IofCallDriver_returnVal2;
																	TRACER_RV = (IofCallDriver_returnVal2);
																	DiskPerfRegisterDevice_status = TRACER_RV;
																	TRACER_RV = nondet();
																	DiskPerfRegisterDevice_CIL___Tmp27 = DiskPerfRegisterDevice_status;
{
 int KeWaitForSingleObject_tmp_ndt_10 ;
int retres7 ;
																	int KeWaitForSingleObject_Object ; int KeWaitForSingleObject_WaitReason ; int KeWaitForSingleObject_WaitMode ; int KeWaitForSingleObject_Alertable ; int KeWaitForSingleObject_Timeout ;
																	KeWaitForSingleObject_Object = DiskPerfRegisterDevice_event;
																	KeWaitForSingleObject_WaitReason = Executive;
																	KeWaitForSingleObject_WaitMode = KernelMode;
																	KeWaitForSingleObject_Alertable = 0;
																	KeWaitForSingleObject_Timeout = 0;
																	s = NP;
																	setEventCalled = 0;
L207:;
																	;
																	TRACER_RV = nondet();
																	DiskPerfRegisterDevice_status = DiskPerfRegisterDevice_ioStatus__Status;
																	DiskPerfRegisterDevice_CIL___Tmp28 = DiskPerfRegisterDevice_status;
																	if(DiskPerfRegisterDevice_CIL___Tmp28 >= -2147483643 && DiskPerfRegisterDevice_CIL___Tmp28 <= -2147483643) {
L208:;
{
 int IoBuildDeviceIoControlRequest_malloc_ret ;
int IoBuildDeviceIoControlRequest_tmp_ndt_7 ;
int retres12 ;
																		int IoBuildDeviceIoControlRequest_IoControlCode ; int IoBuildDeviceIoControlRequest_DeviceObject ; int IoBuildDeviceIoControlRequest_InputBuffer ; int IoBuildDeviceIoControlRequest_InputBufferLength ; int IoBuildDeviceIoControlRequest_OutputBuffer ; int IoBuildDeviceIoControlRequest_OutputBufferLength ; int IoBuildDeviceIoControlRequest_InternalDeviceIoControl ; int IoBuildDeviceIoControlRequest_Event ; int IoBuildDeviceIoControlRequest_IoStatusBlock ;
																		IoBuildDeviceIoControlRequest_IoControlCode = DiskPerfRegisterDevice_CIL___Tmp31;
																		IoBuildDeviceIoControlRequest_DeviceObject = DiskPerfRegisterDevice_deviceExtension__TargetDeviceObject;
																		IoBuildDeviceIoControlRequest_InputBuffer = 0;
																		IoBuildDeviceIoControlRequest_InputBufferLength = 0;
																		IoBuildDeviceIoControlRequest_OutputBuffer = DiskPerfRegisterDevice_output;
																		IoBuildDeviceIoControlRequest_OutputBufferLength = DiskPerfRegisterDevice_outputSize;
																		IoBuildDeviceIoControlRequest_InternalDeviceIoControl = 0;
																		IoBuildDeviceIoControlRequest_Event = DiskPerfRegisterDevice_event;
																		IoBuildDeviceIoControlRequest_IoStatusBlock = DiskPerfRegisterDevice_ioStatus;
																		customIrp = 1;
																		IoBuildDeviceIoControlRequest_tmp_ndt_7 = __VERIFIER_nondet_int();
																		if(IoBuildDeviceIoControlRequest_tmp_ndt_7 >= 0 && IoBuildDeviceIoControlRequest_tmp_ndt_7 <= 0) {
																			retres12 = IoBuildDeviceIoControlRequest_malloc_ret;
L209:;
																			TRACER_RV = (retres12);
																			DiskPerfRegisterDevice_irp = TRACER_RV;
																			TRACER_RV = nondet();
																			if(DiskPerfRegisterDevice_irp >= 0 && DiskPerfRegisterDevice_irp <= 0) {
																				retres37 = -1073741670;
																				TRACER_returning = 1;
																				goto L189;
																			}
																			else if(DiskPerfRegisterDevice_irp < 0) {
L210:;
{
 int IofCallDriver_returnVal2 ;
int IofCallDriver_compRetStatus ;
int IofCallDriver_lcontext ;
int IofCallDriver_CIL___Tmp7 ;
int IofCallDriver_tmp_ndt_8 ;
int IofCallDriver_tmp_ndt_9 ;
																				int IofCallDriver_DeviceObject ; int IofCallDriver_Irp ;
																				IofCallDriver_DeviceObject = DiskPerfRegisterDevice_deviceExtension__TargetDeviceObject;
																				IofCallDriver_Irp = DiskPerfRegisterDevice_irp;
{
 int DiskPerfIrpCompletion_Event ;
int retres5 ;
																				int DiskPerfIrpCompletion_DeviceObject ; int DiskPerfIrpCompletion_Irp ; int DiskPerfIrpCompletion_Context ;
																				DiskPerfIrpCompletion_DeviceObject = IofCallDriver_DeviceObject;
																				DiskPerfIrpCompletion_Irp = IofCallDriver_Irp;
																				DiskPerfIrpCompletion_Context = IofCallDriver_lcontext;
{
 int KeSetEvent_l ;
																				int KeSetEvent_Event ; int KeSetEvent_Increment ; int KeSetEvent_Wait ;
																				KeSetEvent_Event = DiskPerfIrpCompletion_Event;
																				KeSetEvent_Increment = 0;
																				KeSetEvent_Wait = 0;
																				setEventCalled = 1;
																				;
																				TRACER_RV = nondet();
																				retres5 = -1073741802;
																				TRACER_RV = (retres5);
																				IofCallDriver_compRetStatus = TRACER_RV;
																				TRACER_RV = nondet();
																				IofCallDriver_CIL___Tmp7 = IofCallDriver_compRetStatus;
{
																				safety = safety + (s - NP);
																				s = MPR1;
																				;
																				TRACER_RV = nondet();
																				IofCallDriver_tmp_ndt_8 = __VERIFIER_nondet_int();
																				if(IofCallDriver_tmp_ndt_8 >= 0 && IofCallDriver_tmp_ndt_8 <= 0) {
																					IofCallDriver_returnVal2 = 0;
																					s = NP;
																					lowerDriverReturn = IofCallDriver_returnVal2;
																					TRACER_RV = (IofCallDriver_returnVal2);
																					DiskPerfRegisterDevice_status = TRACER_RV;
																					TRACER_RV = nondet();
																					DiskPerfRegisterDevice_CIL___Tmp32 = DiskPerfRegisterDevice_status;
																					goto L194;
																				}
																				else if(IofCallDriver_tmp_ndt_8 < 0) {
L211:;
																					IofCallDriver_tmp_ndt_9 = __VERIFIER_nondet_int();
																					if(IofCallDriver_tmp_ndt_9 >= 1 && IofCallDriver_tmp_ndt_9 <= 1) {
																						IofCallDriver_returnVal2 = -1073741823;
																						s = NP;
																						lowerDriverReturn = IofCallDriver_returnVal2;
																						TRACER_RV = (IofCallDriver_returnVal2);
																						DiskPerfRegisterDevice_status = TRACER_RV;
																						TRACER_RV = nondet();
																						goto L204;
																					}
																					else if(IofCallDriver_tmp_ndt_9 < 1) {
L212:;
																						IofCallDriver_returnVal2 = 259;
																						s = MPR3;
																						lowerDriverReturn = IofCallDriver_returnVal2;
																						TRACER_RV = (IofCallDriver_returnVal2);
																						DiskPerfRegisterDevice_status = TRACER_RV;
																						TRACER_RV = nondet();
																						DiskPerfRegisterDevice_CIL___Tmp32 = DiskPerfRegisterDevice_status;
{
 int KeWaitForSingleObject_tmp_ndt_10 ;
int retres7 ;
																						int KeWaitForSingleObject_Object ; int KeWaitForSingleObject_WaitReason ; int KeWaitForSingleObject_WaitMode ; int KeWaitForSingleObject_Alertable ; int KeWaitForSingleObject_Timeout ;
																						KeWaitForSingleObject_Object = DiskPerfRegisterDevice_event;
																						KeWaitForSingleObject_WaitReason = Executive;
																						KeWaitForSingleObject_WaitMode = KernelMode;
																						KeWaitForSingleObject_Alertable = 0;
																						KeWaitForSingleObject_Timeout = 0;
																						s = NP;
																						setEventCalled = 0;
L213:;
																						;
																						TRACER_RV = nondet();
																						DiskPerfRegisterDevice_status = DiskPerfRegisterDevice_ioStatus__Status;
L214:;
																						goto L205;
}
																					}
																					else {
																						goto L212;
																					}
																				}
																				else {
																					goto L211;
																				}
}
}
}
}
																			}
																			else {
																				goto L210;
																			}
																		}
																		else if(IoBuildDeviceIoControlRequest_tmp_ndt_7 < 0) {
L215:;
																			retres12 = 0;
																			goto L209;
																		}
																		else {
																			goto L215;
																		}
}
																	}
																	else if(DiskPerfRegisterDevice_CIL___Tmp28 < -2147483643) {
																		goto L214;
																	}
																	else {
L216:;
																		if(DiskPerfRegisterDevice_status < 0) {
																			goto L205;
																		}
																		else {
																			goto L195;
																		}
																	}
}
																}
																else {
																	goto L206;
																}
															}
															else {
																goto L202;
															}
}
}
}
}
														}
														else {
															goto L192;
														}
													}
													else if(IoBuildDeviceIoControlRequest_tmp_ndt_7 < 0) {
L217:;
														retres12 = 0;
														goto L190;
													}
													else {
														goto L217;
													}
}
												}
												else {
{
 int IoBuildDeviceIoControlRequest_malloc_ret ;
int IoBuildDeviceIoControlRequest_tmp_ndt_7 ;
int retres12 ;
													int IoBuildDeviceIoControlRequest_IoControlCode ; int IoBuildDeviceIoControlRequest_DeviceObject ; int IoBuildDeviceIoControlRequest_InputBuffer ; int IoBuildDeviceIoControlRequest_InputBufferLength ; int IoBuildDeviceIoControlRequest_OutputBuffer ; int IoBuildDeviceIoControlRequest_OutputBufferLength ; int IoBuildDeviceIoControlRequest_InternalDeviceIoControl ; int IoBuildDeviceIoControlRequest_Event ; int IoBuildDeviceIoControlRequest_IoStatusBlock ;
													IoBuildDeviceIoControlRequest_IoControlCode = DiskPerfRegisterDevice_CIL___Tmp26;
													IoBuildDeviceIoControlRequest_DeviceObject = DiskPerfRegisterDevice_deviceExtension__TargetDeviceObject;
													IoBuildDeviceIoControlRequest_InputBuffer = 0;
													IoBuildDeviceIoControlRequest_InputBufferLength = 0;
													IoBuildDeviceIoControlRequest_OutputBuffer = DiskPerfRegisterDevice_output;
													IoBuildDeviceIoControlRequest_OutputBufferLength = DiskPerfRegisterDevice_outputSize;
													IoBuildDeviceIoControlRequest_InternalDeviceIoControl = 0;
													IoBuildDeviceIoControlRequest_Event = DiskPerfRegisterDevice_event;
													IoBuildDeviceIoControlRequest_IoStatusBlock = DiskPerfRegisterDevice_ioStatus;
													customIrp = 1;
													IoBuildDeviceIoControlRequest_tmp_ndt_7 = __VERIFIER_nondet_int();
													if(IoBuildDeviceIoControlRequest_tmp_ndt_7 >= 0 && IoBuildDeviceIoControlRequest_tmp_ndt_7 <= 0) {
														retres12 = IoBuildDeviceIoControlRequest_malloc_ret;
L218:;
														TRACER_RV = (retres12);
														DiskPerfRegisterDevice_irp = TRACER_RV;
														TRACER_RV = nondet();
														if(DiskPerfRegisterDevice_irp >= 0 && DiskPerfRegisterDevice_irp <= 0) {
															goto L191;
														}
														else if(DiskPerfRegisterDevice_irp < 0) {
L219:;
{
 int IofCallDriver_returnVal2 ;
int IofCallDriver_compRetStatus ;
int IofCallDriver_lcontext ;
int IofCallDriver_CIL___Tmp7 ;
int IofCallDriver_tmp_ndt_8 ;
int IofCallDriver_tmp_ndt_9 ;
															int IofCallDriver_DeviceObject ; int IofCallDriver_Irp ;
															IofCallDriver_DeviceObject = DiskPerfRegisterDevice_deviceExtension__TargetDeviceObject;
															IofCallDriver_Irp = DiskPerfRegisterDevice_irp;
{
 int DiskPerfIrpCompletion_Event ;
int retres5 ;
															int DiskPerfIrpCompletion_DeviceObject ; int DiskPerfIrpCompletion_Irp ; int DiskPerfIrpCompletion_Context ;
															DiskPerfIrpCompletion_DeviceObject = IofCallDriver_DeviceObject;
															DiskPerfIrpCompletion_Irp = IofCallDriver_Irp;
															DiskPerfIrpCompletion_Context = IofCallDriver_lcontext;
{
 int KeSetEvent_l ;
															int KeSetEvent_Event ; int KeSetEvent_Increment ; int KeSetEvent_Wait ;
															KeSetEvent_Event = DiskPerfIrpCompletion_Event;
															KeSetEvent_Increment = 0;
															KeSetEvent_Wait = 0;
															setEventCalled = 1;
															;
															TRACER_RV = nondet();
															retres5 = -1073741802;
															TRACER_RV = (retres5);
															IofCallDriver_compRetStatus = TRACER_RV;
															TRACER_RV = nondet();
															IofCallDriver_CIL___Tmp7 = IofCallDriver_compRetStatus;
{
															safety = safety + (s - NP);
															s = MPR1;
															;
															TRACER_RV = nondet();
															IofCallDriver_tmp_ndt_8 = __VERIFIER_nondet_int();
															if(IofCallDriver_tmp_ndt_8 >= 0 && IofCallDriver_tmp_ndt_8 <= 0) {
																IofCallDriver_returnVal2 = 0;
																s = NP;
																lowerDriverReturn = IofCallDriver_returnVal2;
																TRACER_RV = (IofCallDriver_returnVal2);
																DiskPerfRegisterDevice_status = TRACER_RV;
																TRACER_RV = nondet();
																goto L193;
															}
															else if(IofCallDriver_tmp_ndt_8 < 0) {
L220:;
																IofCallDriver_tmp_ndt_9 = __VERIFIER_nondet_int();
																if(IofCallDriver_tmp_ndt_9 >= 1 && IofCallDriver_tmp_ndt_9 <= 1) {
																	IofCallDriver_returnVal2 = -1073741823;
																	s = NP;
																	lowerDriverReturn = IofCallDriver_returnVal2;
																	TRACER_RV = (IofCallDriver_returnVal2);
																	DiskPerfRegisterDevice_status = TRACER_RV;
																	TRACER_RV = nondet();
																	goto L203;
																}
																else if(IofCallDriver_tmp_ndt_9 < 1) {
L221:;
																	IofCallDriver_returnVal2 = 259;
																	s = MPR3;
																	lowerDriverReturn = IofCallDriver_returnVal2;
																	TRACER_RV = (IofCallDriver_returnVal2);
																	DiskPerfRegisterDevice_status = TRACER_RV;
																	TRACER_RV = nondet();
																	DiskPerfRegisterDevice_CIL___Tmp27 = DiskPerfRegisterDevice_status;
{
 int KeWaitForSingleObject_tmp_ndt_10 ;
int retres7 ;
																	int KeWaitForSingleObject_Object ; int KeWaitForSingleObject_WaitReason ; int KeWaitForSingleObject_WaitMode ; int KeWaitForSingleObject_Alertable ; int KeWaitForSingleObject_Timeout ;
																	KeWaitForSingleObject_Object = DiskPerfRegisterDevice_event;
																	KeWaitForSingleObject_WaitReason = Executive;
																	KeWaitForSingleObject_WaitMode = KernelMode;
																	KeWaitForSingleObject_Alertable = 0;
																	KeWaitForSingleObject_Timeout = 0;
																	s = NP;
																	setEventCalled = 0;
L222:;
																	;
																	TRACER_RV = nondet();
																	DiskPerfRegisterDevice_status = DiskPerfRegisterDevice_ioStatus__Status;
																	DiskPerfRegisterDevice_CIL___Tmp28 = DiskPerfRegisterDevice_status;
																	if(DiskPerfRegisterDevice_CIL___Tmp28 >= -2147483643 && DiskPerfRegisterDevice_CIL___Tmp28 <= -2147483643) {
																		goto L208;
																	}
																	else if(DiskPerfRegisterDevice_CIL___Tmp28 < -2147483643) {
																		goto L214;
																	}
																	else {
																		goto L216;
																	}
}
																}
																else {
																	goto L221;
																}
															}
															else {
																goto L220;
															}
}
}
}
}
														}
														else {
															goto L219;
														}
													}
													else if(IoBuildDeviceIoControlRequest_tmp_ndt_7 < 0) {
L223:;
														retres12 = 0;
														goto L218;
													}
													else {
														goto L223;
													}
}
												}
											}
											else if(IofCallDriver_tmp_ndt_9 < 1) {
L224:;
												IofCallDriver_returnVal2 = 259;
												s = MPR3;
												lowerDriverReturn = IofCallDriver_returnVal2;
												TRACER_RV = (IofCallDriver_returnVal2);
												DiskPerfRegisterDevice_status = TRACER_RV;
												TRACER_RV = nondet();
												DiskPerfRegisterDevice_CIL___Tmp23 = DiskPerfRegisterDevice_status;
{
 int KeWaitForSingleObject_tmp_ndt_10 ;
int retres7 ;
												int KeWaitForSingleObject_Object ; int KeWaitForSingleObject_WaitReason ; int KeWaitForSingleObject_WaitMode ; int KeWaitForSingleObject_Alertable ; int KeWaitForSingleObject_Timeout ;
												KeWaitForSingleObject_Object = DiskPerfRegisterDevice_event;
												KeWaitForSingleObject_WaitReason = Executive;
												KeWaitForSingleObject_WaitMode = KernelMode;
												KeWaitForSingleObject_Alertable = 0;
												KeWaitForSingleObject_Timeout = 0;
												s = NP;
												setEventCalled = 0;
L225:;
												;
												TRACER_RV = nondet();
												DiskPerfRegisterDevice_status = DiskPerfRegisterDevice_ioStatus__Status;
												if(DiskPerfRegisterDevice_status < 0) {
													goto L188;
												}
												else {
													goto L186;
												}
}
											}
											else {
												goto L224;
											}
										}
										else {
											goto L187;
										}
}
}
}
}
									}
									else {
										goto L185;
									}
								}
								else if(IoBuildDeviceIoControlRequest_tmp_ndt_7 < 0) {
L226:;
									retres12 = 0;
									goto L182;
								}
								else {
									goto L226;
								}
}
}
}
							}
							else if(IofCallDriver_tmp_ndt_8 < 0) {
L227:;
								IofCallDriver_tmp_ndt_9 = __VERIFIER_nondet_int();
								if(IofCallDriver_tmp_ndt_9 >= 1 && IofCallDriver_tmp_ndt_9 <= 1) {
									IofCallDriver_returnVal2 = -1073741823;
									s = NP;
									lowerDriverReturn = IofCallDriver_returnVal2;
									TRACER_RV = (IofCallDriver_returnVal2);
									DiskPerfForwardIrpSynchronous_status = TRACER_RV;
									TRACER_RV = nondet();
									TRACER_RV = (DiskPerfForwardIrpSynchronous_status);
									DiskPerfStartDevice_status = TRACER_RV;
									TRACER_RV = nondet();
{
									int DiskPerfSyncFilterWithTarget_FilterDevice ; int DiskPerfSyncFilterWithTarget_TargetDevice ;
									DiskPerfSyncFilterWithTarget_FilterDevice = DiskPerfStartDevice_DeviceObject;
									DiskPerfSyncFilterWithTarget_TargetDevice = DiskPerfStartDevice_deviceExtension__TargetDeviceObject;
									;
									TRACER_RV = nondet();
{
 int DiskPerfRegisterDevice_DeviceObject__DeviceExtension ;
int DiskPerfRegisterDevice_deviceExtension__TargetDeviceObject ;
int DiskPerfRegisterDevice_sizeof__number ;
int DiskPerfRegisterDevice_ioStatus__Status ;
int DiskPerfRegisterDevice_sizeof__VOLUME_NUMBER ;
int DiskPerfRegisterDevice_status ;
int DiskPerfRegisterDevice_ioStatus ;
int DiskPerfRegisterDevice_event ;
int DiskPerfRegisterDevice_deviceExtension ;
int DiskPerfRegisterDevice_irp ;
int DiskPerfRegisterDevice_number ;
int DiskPerfRegisterDevice_registrationFlag ;
int DiskPerfRegisterDevice_sizeof__MOUNTDEV_NAME ;
int DiskPerfRegisterDevice_output__NameLength ;
int DiskPerfRegisterDevice_outputSize ;
int DiskPerfRegisterDevice_output ;
int DiskPerfRegisterDevice_volumeNumber ;
int DiskPerfRegisterDevice_CIL___Tmp20 ;
int DiskPerfRegisterDevice_CIL___Tmp21 ;
int DiskPerfRegisterDevice_CIL___Tmp22 ;
int DiskPerfRegisterDevice_CIL___Tmp23 ;
int DiskPerfRegisterDevice_CIL___Tmp24 ;
int DiskPerfRegisterDevice_CIL___Tmp25 ;
int DiskPerfRegisterDevice_CIL___Tmp26 ;
int DiskPerfRegisterDevice_CIL___Tmp27 ;
int DiskPerfRegisterDevice_CIL___Tmp28 ;
int DiskPerfRegisterDevice_CIL___Tmp29 ;
int DiskPerfRegisterDevice_CIL___Tmp30 ;
int DiskPerfRegisterDevice_CIL___Tmp31 ;
int DiskPerfRegisterDevice_CIL___Tmp32 ;
int DiskPerfRegisterDevice_CIL___Tmp34 ;
int DiskPerfRegisterDevice_CIL___Tmp35 ;
int DiskPerfRegisterDevice_CIL___Tmp36 ;
int DiskPerfRegisterDevice_CIL___Tmp37 ;
int retres37 ;
int TRACER_returning ;
									int DiskPerfRegisterDevice_DeviceObject ;
									DiskPerfRegisterDevice_DeviceObject = DiskPerfStartDevice_DeviceObject;
									TRACER_returning = 0;
									DiskPerfRegisterDevice_registrationFlag = 0;
									DiskPerfRegisterDevice_deviceExtension = DiskPerfRegisterDevice_DeviceObject__DeviceExtension;
									DiskPerfRegisterDevice_CIL___Tmp20 = 4224;
									DiskPerfRegisterDevice_CIL___Tmp21 = 2949120;
									DiskPerfRegisterDevice_CIL___Tmp22 = 2953344;
{
 int IoBuildDeviceIoControlRequest_malloc_ret ;
int IoBuildDeviceIoControlRequest_tmp_ndt_7 ;
int retres12 ;
									int IoBuildDeviceIoControlRequest_IoControlCode ; int IoBuildDeviceIoControlRequest_DeviceObject ; int IoBuildDeviceIoControlRequest_InputBuffer ; int IoBuildDeviceIoControlRequest_InputBufferLength ; int IoBuildDeviceIoControlRequest_OutputBuffer ; int IoBuildDeviceIoControlRequest_OutputBufferLength ; int IoBuildDeviceIoControlRequest_InternalDeviceIoControl ; int IoBuildDeviceIoControlRequest_Event ; int IoBuildDeviceIoControlRequest_IoStatusBlock ;
									IoBuildDeviceIoControlRequest_IoControlCode = DiskPerfRegisterDevice_CIL___Tmp22;
									IoBuildDeviceIoControlRequest_DeviceObject = DiskPerfRegisterDevice_deviceExtension__TargetDeviceObject;
									IoBuildDeviceIoControlRequest_InputBuffer = 0;
									IoBuildDeviceIoControlRequest_InputBufferLength = 0;
									IoBuildDeviceIoControlRequest_OutputBuffer = DiskPerfRegisterDevice_number;
									IoBuildDeviceIoControlRequest_OutputBufferLength = DiskPerfRegisterDevice_sizeof__number;
									IoBuildDeviceIoControlRequest_InternalDeviceIoControl = 0;
									IoBuildDeviceIoControlRequest_Event = DiskPerfRegisterDevice_event;
									IoBuildDeviceIoControlRequest_IoStatusBlock = DiskPerfRegisterDevice_ioStatus;
									customIrp = 1;
									IoBuildDeviceIoControlRequest_tmp_ndt_7 = __VERIFIER_nondet_int();
									if(IoBuildDeviceIoControlRequest_tmp_ndt_7 >= 0 && IoBuildDeviceIoControlRequest_tmp_ndt_7 <= 0) {
										retres12 = IoBuildDeviceIoControlRequest_malloc_ret;
L228:;
										TRACER_RV = (retres12);
										DiskPerfRegisterDevice_irp = TRACER_RV;
										TRACER_RV = nondet();
										if(DiskPerfRegisterDevice_irp >= 0 && DiskPerfRegisterDevice_irp <= 0) {
L229:;
											;
											TRACER_RV = nondet();
{
											int IofCompleteRequest_Irp ; int IofCompleteRequest_PriorityBoost ;
											IofCompleteRequest_Irp = DiskPerfStartDevice_Irp;
											IofCompleteRequest_PriorityBoost = 0;
											safety = safety + (s - NP);
											s = DC;
											;
											TRACER_RV = nondet();
											TRACER_RV = (DiskPerfStartDevice_status);
											DiskPerfDispatchPnp_status = TRACER_RV;
											TRACER_RV = nondet();
L230:;
											retres8 = DiskPerfDispatchPnp_status;
											TRACER_RV = (retres8);
											main_status = TRACER_RV;
											TRACER_RV = nondet();
											goto L68;
}
										}
										else if(DiskPerfRegisterDevice_irp < 0) {
L231:;
{
 int IofCallDriver_returnVal2 ;
int IofCallDriver_compRetStatus ;
int IofCallDriver_lcontext ;
int IofCallDriver_CIL___Tmp7 ;
int IofCallDriver_tmp_ndt_8 ;
int IofCallDriver_tmp_ndt_9 ;
											int IofCallDriver_DeviceObject ; int IofCallDriver_Irp ;
											IofCallDriver_DeviceObject = DiskPerfRegisterDevice_deviceExtension__TargetDeviceObject;
											IofCallDriver_Irp = DiskPerfRegisterDevice_irp;
{
 int DiskPerfIrpCompletion_Event ;
int retres5 ;
											int DiskPerfIrpCompletion_DeviceObject ; int DiskPerfIrpCompletion_Irp ; int DiskPerfIrpCompletion_Context ;
											DiskPerfIrpCompletion_DeviceObject = IofCallDriver_DeviceObject;
											DiskPerfIrpCompletion_Irp = IofCallDriver_Irp;
											DiskPerfIrpCompletion_Context = IofCallDriver_lcontext;
{
 int KeSetEvent_l ;
											int KeSetEvent_Event ; int KeSetEvent_Increment ; int KeSetEvent_Wait ;
											KeSetEvent_Event = DiskPerfIrpCompletion_Event;
											KeSetEvent_Increment = 0;
											KeSetEvent_Wait = 0;
											setEventCalled = 1;
											;
											TRACER_RV = nondet();
											retres5 = -1073741802;
											TRACER_RV = (retres5);
											IofCallDriver_compRetStatus = TRACER_RV;
											TRACER_RV = nondet();
											IofCallDriver_CIL___Tmp7 = IofCallDriver_compRetStatus;
{
											safety = safety + (s - NP);
											s = MPR1;
											;
											TRACER_RV = nondet();
											IofCallDriver_tmp_ndt_8 = __VERIFIER_nondet_int();
											if(IofCallDriver_tmp_ndt_8 >= 0 && IofCallDriver_tmp_ndt_8 <= 0) {
												IofCallDriver_returnVal2 = 0;
												s = NP;
												lowerDriverReturn = IofCallDriver_returnVal2;
												TRACER_RV = (IofCallDriver_returnVal2);
												DiskPerfRegisterDevice_status = TRACER_RV;
												TRACER_RV = nondet();
												DiskPerfRegisterDevice_CIL___Tmp23 = DiskPerfRegisterDevice_status;
L232:;
												goto L229;
											}
											else if(IofCallDriver_tmp_ndt_8 < 0) {
L233:;
												IofCallDriver_tmp_ndt_9 = __VERIFIER_nondet_int();
												if(IofCallDriver_tmp_ndt_9 >= 1 && IofCallDriver_tmp_ndt_9 <= 1) {
													IofCallDriver_returnVal2 = -1073741823;
													s = NP;
													lowerDriverReturn = IofCallDriver_returnVal2;
													TRACER_RV = (IofCallDriver_returnVal2);
													DiskPerfRegisterDevice_status = TRACER_RV;
													TRACER_RV = nondet();
L234:;
													if(DiskPerfRegisterDevice_output >= 0 && DiskPerfRegisterDevice_output <= 0) {
														retres37 = -1073741670;
														TRACER_returning = 1;
L235:;
														goto L229;
													}
													else if(DiskPerfRegisterDevice_output < 0) {
{
 int IoBuildDeviceIoControlRequest_malloc_ret ;
int IoBuildDeviceIoControlRequest_tmp_ndt_7 ;
int retres12 ;
														int IoBuildDeviceIoControlRequest_IoControlCode ; int IoBuildDeviceIoControlRequest_DeviceObject ; int IoBuildDeviceIoControlRequest_InputBuffer ; int IoBuildDeviceIoControlRequest_InputBufferLength ; int IoBuildDeviceIoControlRequest_OutputBuffer ; int IoBuildDeviceIoControlRequest_OutputBufferLength ; int IoBuildDeviceIoControlRequest_InternalDeviceIoControl ; int IoBuildDeviceIoControlRequest_Event ; int IoBuildDeviceIoControlRequest_IoStatusBlock ;
														IoBuildDeviceIoControlRequest_IoControlCode = DiskPerfRegisterDevice_CIL___Tmp26;
														IoBuildDeviceIoControlRequest_DeviceObject = DiskPerfRegisterDevice_deviceExtension__TargetDeviceObject;
														IoBuildDeviceIoControlRequest_InputBuffer = 0;
														IoBuildDeviceIoControlRequest_InputBufferLength = 0;
														IoBuildDeviceIoControlRequest_OutputBuffer = DiskPerfRegisterDevice_output;
														IoBuildDeviceIoControlRequest_OutputBufferLength = DiskPerfRegisterDevice_outputSize;
														IoBuildDeviceIoControlRequest_InternalDeviceIoControl = 0;
														IoBuildDeviceIoControlRequest_Event = DiskPerfRegisterDevice_event;
														IoBuildDeviceIoControlRequest_IoStatusBlock = DiskPerfRegisterDevice_ioStatus;
														customIrp = 1;
														IoBuildDeviceIoControlRequest_tmp_ndt_7 = __VERIFIER_nondet_int();
														if(IoBuildDeviceIoControlRequest_tmp_ndt_7 >= 0 && IoBuildDeviceIoControlRequest_tmp_ndt_7 <= 0) {
															retres12 = IoBuildDeviceIoControlRequest_malloc_ret;
L236:;
															TRACER_RV = (retres12);
															DiskPerfRegisterDevice_irp = TRACER_RV;
															TRACER_RV = nondet();
															if(DiskPerfRegisterDevice_irp >= 0 && DiskPerfRegisterDevice_irp <= 0) {
L237:;
																retres37 = -1073741670;
																TRACER_returning = 1;
																goto L235;
															}
															else if(DiskPerfRegisterDevice_irp < 0) {
L238:;
{
 int IofCallDriver_returnVal2 ;
int IofCallDriver_compRetStatus ;
int IofCallDriver_lcontext ;
int IofCallDriver_CIL___Tmp7 ;
int IofCallDriver_tmp_ndt_8 ;
int IofCallDriver_tmp_ndt_9 ;
																int IofCallDriver_DeviceObject ; int IofCallDriver_Irp ;
																IofCallDriver_DeviceObject = DiskPerfRegisterDevice_deviceExtension__TargetDeviceObject;
																IofCallDriver_Irp = DiskPerfRegisterDevice_irp;
{
 int DiskPerfIrpCompletion_Event ;
int retres5 ;
																int DiskPerfIrpCompletion_DeviceObject ; int DiskPerfIrpCompletion_Irp ; int DiskPerfIrpCompletion_Context ;
																DiskPerfIrpCompletion_DeviceObject = IofCallDriver_DeviceObject;
																DiskPerfIrpCompletion_Irp = IofCallDriver_Irp;
																DiskPerfIrpCompletion_Context = IofCallDriver_lcontext;
{
 int KeSetEvent_l ;
																int KeSetEvent_Event ; int KeSetEvent_Increment ; int KeSetEvent_Wait ;
																KeSetEvent_Event = DiskPerfIrpCompletion_Event;
																KeSetEvent_Increment = 0;
																KeSetEvent_Wait = 0;
																setEventCalled = 1;
																;
																TRACER_RV = nondet();
																retres5 = -1073741802;
																TRACER_RV = (retres5);
																IofCallDriver_compRetStatus = TRACER_RV;
																TRACER_RV = nondet();
																IofCallDriver_CIL___Tmp7 = IofCallDriver_compRetStatus;
{
																safety = safety + (s - NP);
																s = MPR1;
																;
																TRACER_RV = nondet();
																IofCallDriver_tmp_ndt_8 = __VERIFIER_nondet_int();
																if(IofCallDriver_tmp_ndt_8 >= 0 && IofCallDriver_tmp_ndt_8 <= 0) {
																	IofCallDriver_returnVal2 = 0;
																	s = NP;
																	lowerDriverReturn = IofCallDriver_returnVal2;
																	TRACER_RV = (IofCallDriver_returnVal2);
																	DiskPerfRegisterDevice_status = TRACER_RV;
																	TRACER_RV = nondet();
L239:;
																	DiskPerfRegisterDevice_CIL___Tmp27 = DiskPerfRegisterDevice_status;
																	DiskPerfRegisterDevice_CIL___Tmp28 = DiskPerfRegisterDevice_status;
L240:;
L241:;
{
 int IoBuildDeviceIoControlRequest_malloc_ret ;
int IoBuildDeviceIoControlRequest_tmp_ndt_7 ;
int retres12 ;
																	int IoBuildDeviceIoControlRequest_IoControlCode ; int IoBuildDeviceIoControlRequest_DeviceObject ; int IoBuildDeviceIoControlRequest_InputBuffer ; int IoBuildDeviceIoControlRequest_InputBufferLength ; int IoBuildDeviceIoControlRequest_OutputBuffer ; int IoBuildDeviceIoControlRequest_OutputBufferLength ; int IoBuildDeviceIoControlRequest_InternalDeviceIoControl ; int IoBuildDeviceIoControlRequest_Event ; int IoBuildDeviceIoControlRequest_IoStatusBlock ;
																	IoBuildDeviceIoControlRequest_IoControlCode = DiskPerfRegisterDevice_CIL___Tmp36;
																	IoBuildDeviceIoControlRequest_DeviceObject = DiskPerfRegisterDevice_deviceExtension__TargetDeviceObject;
																	IoBuildDeviceIoControlRequest_InputBuffer = 0;
																	IoBuildDeviceIoControlRequest_InputBufferLength = 0;
																	IoBuildDeviceIoControlRequest_OutputBuffer = DiskPerfRegisterDevice_volumeNumber;
																	IoBuildDeviceIoControlRequest_OutputBufferLength = DiskPerfRegisterDevice_sizeof__VOLUME_NUMBER;
																	IoBuildDeviceIoControlRequest_InternalDeviceIoControl = 0;
																	IoBuildDeviceIoControlRequest_Event = DiskPerfRegisterDevice_event;
																	IoBuildDeviceIoControlRequest_IoStatusBlock = DiskPerfRegisterDevice_ioStatus;
																	customIrp = 1;
																	IoBuildDeviceIoControlRequest_tmp_ndt_7 = __VERIFIER_nondet_int();
																	if(IoBuildDeviceIoControlRequest_tmp_ndt_7 >= 0 && IoBuildDeviceIoControlRequest_tmp_ndt_7 <= 0) {
																		retres12 = IoBuildDeviceIoControlRequest_malloc_ret;
L242:;
																		TRACER_RV = (retres12);
																		DiskPerfRegisterDevice_irp = TRACER_RV;
																		TRACER_RV = nondet();
																		if(DiskPerfRegisterDevice_irp >= 0 && DiskPerfRegisterDevice_irp <= 0) {
																			retres37 = -1073741670;
																			TRACER_returning = 1;
																			goto L235;
																		}
																		else if(DiskPerfRegisterDevice_irp < 0) {
L243:;
{
 int IofCallDriver_returnVal2 ;
int IofCallDriver_compRetStatus ;
int IofCallDriver_lcontext ;
int IofCallDriver_CIL___Tmp7 ;
int IofCallDriver_tmp_ndt_8 ;
int IofCallDriver_tmp_ndt_9 ;
																			int IofCallDriver_DeviceObject ; int IofCallDriver_Irp ;
																			IofCallDriver_DeviceObject = DiskPerfRegisterDevice_deviceExtension__TargetDeviceObject;
																			IofCallDriver_Irp = DiskPerfRegisterDevice_irp;
{
 int DiskPerfIrpCompletion_Event ;
int retres5 ;
																			int DiskPerfIrpCompletion_DeviceObject ; int DiskPerfIrpCompletion_Irp ; int DiskPerfIrpCompletion_Context ;
																			DiskPerfIrpCompletion_DeviceObject = IofCallDriver_DeviceObject;
																			DiskPerfIrpCompletion_Irp = IofCallDriver_Irp;
																			DiskPerfIrpCompletion_Context = IofCallDriver_lcontext;
{
 int KeSetEvent_l ;
																			int KeSetEvent_Event ; int KeSetEvent_Increment ; int KeSetEvent_Wait ;
																			KeSetEvent_Event = DiskPerfIrpCompletion_Event;
																			KeSetEvent_Increment = 0;
																			KeSetEvent_Wait = 0;
																			setEventCalled = 1;
																			;
																			TRACER_RV = nondet();
																			retres5 = -1073741802;
																			TRACER_RV = (retres5);
																			IofCallDriver_compRetStatus = TRACER_RV;
																			TRACER_RV = nondet();
																			IofCallDriver_CIL___Tmp7 = IofCallDriver_compRetStatus;
{
																			safety = safety + (s - NP);
																			s = MPR1;
																			;
																			TRACER_RV = nondet();
																			IofCallDriver_tmp_ndt_8 = __VERIFIER_nondet_int();
																			if(IofCallDriver_tmp_ndt_8 >= 0 && IofCallDriver_tmp_ndt_8 <= 0) {
																				IofCallDriver_returnVal2 = 0;
																				s = NP;
																				lowerDriverReturn = IofCallDriver_returnVal2;
																				TRACER_RV = (IofCallDriver_returnVal2);
																				DiskPerfRegisterDevice_status = TRACER_RV;
																				TRACER_RV = nondet();
																				DiskPerfRegisterDevice_CIL___Tmp37 = DiskPerfRegisterDevice_status;
																				goto L232;
																			}
																			else if(IofCallDriver_tmp_ndt_8 < 0) {
L244:;
																				IofCallDriver_tmp_ndt_9 = __VERIFIER_nondet_int();
																				if(IofCallDriver_tmp_ndt_9 >= 1 && IofCallDriver_tmp_ndt_9 <= 1) {
																					IofCallDriver_returnVal2 = -1073741823;
																					s = NP;
																					lowerDriverReturn = IofCallDriver_returnVal2;
																					DiskPerfRegisterDevice_status = TRACER_RV;
																					TRACER_RV = nondet();
																					goto L232;
																				}
																				else if(IofCallDriver_tmp_ndt_9 < 1) {
L245:;
																					IofCallDriver_returnVal2 = 259;
																					s = MPR3;
																					lowerDriverReturn = IofCallDriver_returnVal2;
																					TRACER_RV = (IofCallDriver_returnVal2);
																					DiskPerfRegisterDevice_status = TRACER_RV;
																					TRACER_RV = nondet();
																					DiskPerfRegisterDevice_CIL___Tmp37 = DiskPerfRegisterDevice_status;
{
 int KeWaitForSingleObject_tmp_ndt_10 ;
int retres7 ;
																					int KeWaitForSingleObject_Object ; int KeWaitForSingleObject_WaitReason ; int KeWaitForSingleObject_WaitMode ; int KeWaitForSingleObject_Alertable ; int KeWaitForSingleObject_Timeout ;
																					KeWaitForSingleObject_Object = DiskPerfRegisterDevice_event;
																					KeWaitForSingleObject_WaitReason = Executive;
																					KeWaitForSingleObject_WaitMode = KernelMode;
																					KeWaitForSingleObject_Alertable = 0;
																					KeWaitForSingleObject_Timeout = 0;
																					s = NP;
																					setEventCalled = 0;
L246:;
																					;
																					TRACER_RV = nondet();
																					goto L232;
}
																				}
																				else {
																					goto L245;
																				}
																			}
																			else {
																				goto L244;
																			}
}
}
}
}
																		}
																		else {
																			goto L243;
																		}
																	}
																	else if(IoBuildDeviceIoControlRequest_tmp_ndt_7 < 0) {
L247:;
																		retres12 = 0;
																		goto L242;
																	}
																	else {
																		goto L247;
																	}
}
																}
																else if(IofCallDriver_tmp_ndt_8 < 0) {
L248:;
																	IofCallDriver_tmp_ndt_9 = __VERIFIER_nondet_int();
																	if(IofCallDriver_tmp_ndt_9 >= 1 && IofCallDriver_tmp_ndt_9 <= 1) {
																		IofCallDriver_returnVal2 = -1073741823;
																		s = NP;
																		lowerDriverReturn = IofCallDriver_returnVal2;
																		TRACER_RV = (IofCallDriver_returnVal2);
																		DiskPerfRegisterDevice_status = TRACER_RV;
																		TRACER_RV = nondet();
L249:;
																		DiskPerfRegisterDevice_CIL___Tmp28 = DiskPerfRegisterDevice_status;
L250:;
L251:;
																		retres37 = DiskPerfRegisterDevice_status;
																		TRACER_returning = 1;
																		goto L235;
																	}
																	else if(IofCallDriver_tmp_ndt_9 < 1) {
L252:;
																		IofCallDriver_returnVal2 = 259;
																		s = MPR3;
																		lowerDriverReturn = IofCallDriver_returnVal2;
																		TRACER_RV = (IofCallDriver_returnVal2);
																		DiskPerfRegisterDevice_status = TRACER_RV;
																		TRACER_RV = nondet();
																		DiskPerfRegisterDevice_CIL___Tmp27 = DiskPerfRegisterDevice_status;
{
 int KeWaitForSingleObject_tmp_ndt_10 ;
int retres7 ;
																		int KeWaitForSingleObject_Object ; int KeWaitForSingleObject_WaitReason ; int KeWaitForSingleObject_WaitMode ; int KeWaitForSingleObject_Alertable ; int KeWaitForSingleObject_Timeout ;
																		KeWaitForSingleObject_Object = DiskPerfRegisterDevice_event;
																		KeWaitForSingleObject_WaitReason = Executive;
																		KeWaitForSingleObject_WaitMode = KernelMode;
																		KeWaitForSingleObject_Alertable = 0;
																		KeWaitForSingleObject_Timeout = 0;
																		s = NP;
																		setEventCalled = 0;
L253:;
																		;
																		TRACER_RV = nondet();
																		DiskPerfRegisterDevice_status = DiskPerfRegisterDevice_ioStatus__Status;
																		DiskPerfRegisterDevice_CIL___Tmp28 = DiskPerfRegisterDevice_status;
																		if(DiskPerfRegisterDevice_CIL___Tmp28 >= -2147483643 && DiskPerfRegisterDevice_CIL___Tmp28 <= -2147483643) {
L254:;
{
 int IoBuildDeviceIoControlRequest_malloc_ret ;
int IoBuildDeviceIoControlRequest_tmp_ndt_7 ;
int retres12 ;
																			int IoBuildDeviceIoControlRequest_IoControlCode ; int IoBuildDeviceIoControlRequest_DeviceObject ; int IoBuildDeviceIoControlRequest_InputBuffer ; int IoBuildDeviceIoControlRequest_InputBufferLength ; int IoBuildDeviceIoControlRequest_OutputBuffer ; int IoBuildDeviceIoControlRequest_OutputBufferLength ; int IoBuildDeviceIoControlRequest_InternalDeviceIoControl ; int IoBuildDeviceIoControlRequest_Event ; int IoBuildDeviceIoControlRequest_IoStatusBlock ;
																			IoBuildDeviceIoControlRequest_IoControlCode = DiskPerfRegisterDevice_CIL___Tmp31;
																			IoBuildDeviceIoControlRequest_DeviceObject = DiskPerfRegisterDevice_deviceExtension__TargetDeviceObject;
																			IoBuildDeviceIoControlRequest_InputBuffer = 0;
																			IoBuildDeviceIoControlRequest_InputBufferLength = 0;
																			IoBuildDeviceIoControlRequest_OutputBuffer = DiskPerfRegisterDevice_output;
																			IoBuildDeviceIoControlRequest_OutputBufferLength = DiskPerfRegisterDevice_outputSize;
																			IoBuildDeviceIoControlRequest_InternalDeviceIoControl = 0;
																			IoBuildDeviceIoControlRequest_Event = DiskPerfRegisterDevice_event;
																			IoBuildDeviceIoControlRequest_IoStatusBlock = DiskPerfRegisterDevice_ioStatus;
																			customIrp = 1;
																			IoBuildDeviceIoControlRequest_tmp_ndt_7 = __VERIFIER_nondet_int();
																			if(IoBuildDeviceIoControlRequest_tmp_ndt_7 >= 0 && IoBuildDeviceIoControlRequest_tmp_ndt_7 <= 0) {
																				retres12 = IoBuildDeviceIoControlRequest_malloc_ret;
L255:;
																				TRACER_RV = (retres12);
																				DiskPerfRegisterDevice_irp = TRACER_RV;
																				TRACER_RV = nondet();
																				if(DiskPerfRegisterDevice_irp >= 0 && DiskPerfRegisterDevice_irp <= 0) {
																					retres37 = -1073741670;
																					TRACER_returning = 1;
																					goto L235;
																				}
																				else if(DiskPerfRegisterDevice_irp < 0) {
L256:;
{
 int IofCallDriver_returnVal2 ;
int IofCallDriver_compRetStatus ;
int IofCallDriver_lcontext ;
int IofCallDriver_CIL___Tmp7 ;
int IofCallDriver_tmp_ndt_8 ;
int IofCallDriver_tmp_ndt_9 ;
																					int IofCallDriver_DeviceObject ; int IofCallDriver_Irp ;
																					IofCallDriver_DeviceObject = DiskPerfRegisterDevice_deviceExtension__TargetDeviceObject;
																					IofCallDriver_Irp = DiskPerfRegisterDevice_irp;
{
 int DiskPerfIrpCompletion_Event ;
int retres5 ;
																					int DiskPerfIrpCompletion_DeviceObject ; int DiskPerfIrpCompletion_Irp ; int DiskPerfIrpCompletion_Context ;
																					DiskPerfIrpCompletion_DeviceObject = IofCallDriver_DeviceObject;
																					DiskPerfIrpCompletion_Irp = IofCallDriver_Irp;
																					DiskPerfIrpCompletion_Context = IofCallDriver_lcontext;
{
 int KeSetEvent_l ;
																					int KeSetEvent_Event ; int KeSetEvent_Increment ; int KeSetEvent_Wait ;
																					KeSetEvent_Event = DiskPerfIrpCompletion_Event;
																					KeSetEvent_Increment = 0;
																					KeSetEvent_Wait = 0;
																					setEventCalled = 1;
																					;
																					TRACER_RV = nondet();
																					retres5 = -1073741802;
																					TRACER_RV = (retres5);
																					IofCallDriver_compRetStatus = TRACER_RV;
																					TRACER_RV = nondet();
																					IofCallDriver_CIL___Tmp7 = IofCallDriver_compRetStatus;
{
																					safety = safety + (s - NP);
																					s = MPR1;
																					;
																					TRACER_RV = nondet();
																					IofCallDriver_tmp_ndt_8 = __VERIFIER_nondet_int();
																					if(IofCallDriver_tmp_ndt_8 >= 0 && IofCallDriver_tmp_ndt_8 <= 0) {
																						IofCallDriver_returnVal2 = 0;
																						s = NP;
																						lowerDriverReturn = IofCallDriver_returnVal2;
																						TRACER_RV = (IofCallDriver_returnVal2);
																						DiskPerfRegisterDevice_status = TRACER_RV;
																						TRACER_RV = nondet();
																						DiskPerfRegisterDevice_CIL___Tmp32 = DiskPerfRegisterDevice_status;
																						goto L240;
																					}
																					else if(IofCallDriver_tmp_ndt_8 < 0) {
L257:;
																						IofCallDriver_tmp_ndt_9 = __VERIFIER_nondet_int();
																						if(IofCallDriver_tmp_ndt_9 >= 1 && IofCallDriver_tmp_ndt_9 <= 1) {
																							IofCallDriver_returnVal2 = -1073741823;
																							s = NP;
																							lowerDriverReturn = IofCallDriver_returnVal2;
																							TRACER_RV = (IofCallDriver_returnVal2);
																							DiskPerfRegisterDevice_status = TRACER_RV;
																							TRACER_RV = nondet();
																							goto L250;
																						}
																						else if(IofCallDriver_tmp_ndt_9 < 1) {
L258:;
																							IofCallDriver_returnVal2 = 259;
																							s = MPR3;
																							lowerDriverReturn = IofCallDriver_returnVal2;
																							TRACER_RV = (IofCallDriver_returnVal2);
																							DiskPerfRegisterDevice_status = TRACER_RV;
																							TRACER_RV = nondet();
																							DiskPerfRegisterDevice_CIL___Tmp32 = DiskPerfRegisterDevice_status;
{
 int KeWaitForSingleObject_tmp_ndt_10 ;
int retres7 ;
																							int KeWaitForSingleObject_Object ; int KeWaitForSingleObject_WaitReason ; int KeWaitForSingleObject_WaitMode ; int KeWaitForSingleObject_Alertable ; int KeWaitForSingleObject_Timeout ;
																							KeWaitForSingleObject_Object = DiskPerfRegisterDevice_event;
																							KeWaitForSingleObject_WaitReason = Executive;
																							KeWaitForSingleObject_WaitMode = KernelMode;
																							KeWaitForSingleObject_Alertable = 0;
																							KeWaitForSingleObject_Timeout = 0;
																							s = NP;
																							setEventCalled = 0;
L259:;
																							;
																							TRACER_RV = nondet();
																							DiskPerfRegisterDevice_status = DiskPerfRegisterDevice_ioStatus__Status;
L260:;
																							goto L251;
}
																						}
																						else {
																							goto L258;
																						}
																					}
																					else {
																						goto L257;
																					}
}
}
}
}
																				}
																				else {
																					goto L256;
																				}
																			}
																			else if(IoBuildDeviceIoControlRequest_tmp_ndt_7 < 0) {
L261:;
																				retres12 = 0;
																				goto L255;
																			}
																			else {
																				goto L261;
																			}
}
																		}
																		else if(DiskPerfRegisterDevice_CIL___Tmp28 < -2147483643) {
																			goto L260;
																		}
																		else {
L262:;
																			if(DiskPerfRegisterDevice_status < 0) {
																				goto L251;
																			}
																			else {
																				goto L241;
																			}
																		}
}
																	}
																	else {
																		goto L252;
																	}
																}
																else {
																	goto L248;
																}
}
}
}
}
															}
															else {
																goto L238;
															}
														}
														else if(IoBuildDeviceIoControlRequest_tmp_ndt_7 < 0) {
L263:;
															retres12 = 0;
															goto L236;
														}
														else {
															goto L263;
														}
}
													}
													else {
{
 int IoBuildDeviceIoControlRequest_malloc_ret ;
int IoBuildDeviceIoControlRequest_tmp_ndt_7 ;
int retres12 ;
														int IoBuildDeviceIoControlRequest_IoControlCode ; int IoBuildDeviceIoControlRequest_DeviceObject ; int IoBuildDeviceIoControlRequest_InputBuffer ; int IoBuildDeviceIoControlRequest_InputBufferLength ; int IoBuildDeviceIoControlRequest_OutputBuffer ; int IoBuildDeviceIoControlRequest_OutputBufferLength ; int IoBuildDeviceIoControlRequest_InternalDeviceIoControl ; int IoBuildDeviceIoControlRequest_Event ; int IoBuildDeviceIoControlRequest_IoStatusBlock ;
														IoBuildDeviceIoControlRequest_IoControlCode = DiskPerfRegisterDevice_CIL___Tmp26;
														IoBuildDeviceIoControlRequest_DeviceObject = DiskPerfRegisterDevice_deviceExtension__TargetDeviceObject;
														IoBuildDeviceIoControlRequest_InputBuffer = 0;
														IoBuildDeviceIoControlRequest_InputBufferLength = 0;
														IoBuildDeviceIoControlRequest_OutputBuffer = DiskPerfRegisterDevice_output;
														IoBuildDeviceIoControlRequest_OutputBufferLength = DiskPerfRegisterDevice_outputSize;
														IoBuildDeviceIoControlRequest_InternalDeviceIoControl = 0;
														IoBuildDeviceIoControlRequest_Event = DiskPerfRegisterDevice_event;
														IoBuildDeviceIoControlRequest_IoStatusBlock = DiskPerfRegisterDevice_ioStatus;
														customIrp = 1;
														IoBuildDeviceIoControlRequest_tmp_ndt_7 = __VERIFIER_nondet_int();
														if(IoBuildDeviceIoControlRequest_tmp_ndt_7 >= 0 && IoBuildDeviceIoControlRequest_tmp_ndt_7 <= 0) {
															retres12 = IoBuildDeviceIoControlRequest_malloc_ret;
L264:;
															TRACER_RV = (retres12);
															DiskPerfRegisterDevice_irp = TRACER_RV;
															TRACER_RV = nondet();
															if(DiskPerfRegisterDevice_irp >= 0 && DiskPerfRegisterDevice_irp <= 0) {
																goto L237;
															}
															else if(DiskPerfRegisterDevice_irp < 0) {
L265:;
{
 int IofCallDriver_returnVal2 ;
int IofCallDriver_compRetStatus ;
int IofCallDriver_lcontext ;
int IofCallDriver_CIL___Tmp7 ;
int IofCallDriver_tmp_ndt_8 ;
int IofCallDriver_tmp_ndt_9 ;
																int IofCallDriver_DeviceObject ; int IofCallDriver_Irp ;
																IofCallDriver_DeviceObject = DiskPerfRegisterDevice_deviceExtension__TargetDeviceObject;
																IofCallDriver_Irp = DiskPerfRegisterDevice_irp;
{
 int DiskPerfIrpCompletion_Event ;
int retres5 ;
																int DiskPerfIrpCompletion_DeviceObject ; int DiskPerfIrpCompletion_Irp ; int DiskPerfIrpCompletion_Context ;
																DiskPerfIrpCompletion_DeviceObject = IofCallDriver_DeviceObject;
																DiskPerfIrpCompletion_Irp = IofCallDriver_Irp;
																DiskPerfIrpCompletion_Context = IofCallDriver_lcontext;
{
 int KeSetEvent_l ;
																int KeSetEvent_Event ; int KeSetEvent_Increment ; int KeSetEvent_Wait ;
																KeSetEvent_Event = DiskPerfIrpCompletion_Event;
																KeSetEvent_Increment = 0;
																KeSetEvent_Wait = 0;
																setEventCalled = 1;
																;
																TRACER_RV = nondet();
																retres5 = -1073741802;
																TRACER_RV = (retres5);
																IofCallDriver_compRetStatus = TRACER_RV;
																TRACER_RV = nondet();
																IofCallDriver_CIL___Tmp7 = IofCallDriver_compRetStatus;
{
																safety = safety + (s - NP);
																s = MPR1;
																;
																TRACER_RV = nondet();
																IofCallDriver_tmp_ndt_8 = __VERIFIER_nondet_int();
																if(IofCallDriver_tmp_ndt_8 >= 0 && IofCallDriver_tmp_ndt_8 <= 0) {
																	IofCallDriver_returnVal2 = 0;
																	s = NP;
																	lowerDriverReturn = IofCallDriver_returnVal2;
																	TRACER_RV = (IofCallDriver_returnVal2);
																	DiskPerfRegisterDevice_status = TRACER_RV;
																	TRACER_RV = nondet();
																	goto L239;
																}
																else if(IofCallDriver_tmp_ndt_8 < 0) {
L266:;
																	IofCallDriver_tmp_ndt_9 = __VERIFIER_nondet_int();
																	if(IofCallDriver_tmp_ndt_9 >= 1 && IofCallDriver_tmp_ndt_9 <= 1) {
																		IofCallDriver_returnVal2 = -1073741823;
																		s = NP;
																		lowerDriverReturn = IofCallDriver_returnVal2;
																		TRACER_RV = (IofCallDriver_returnVal2);
																		DiskPerfRegisterDevice_status = TRACER_RV;
																		TRACER_RV = nondet();
																		goto L249;
																	}
																	else if(IofCallDriver_tmp_ndt_9 < 1) {
L267:;
																		IofCallDriver_returnVal2 = 259;
																		s = MPR3;
																		lowerDriverReturn = IofCallDriver_returnVal2;
																		TRACER_RV = (IofCallDriver_returnVal2);
																		DiskPerfRegisterDevice_status = TRACER_RV;
																		TRACER_RV = nondet();
																		DiskPerfRegisterDevice_CIL___Tmp27 = DiskPerfRegisterDevice_status;
{
 int KeWaitForSingleObject_tmp_ndt_10 ;
int retres7 ;
																		int KeWaitForSingleObject_Object ; int KeWaitForSingleObject_WaitReason ; int KeWaitForSingleObject_WaitMode ; int KeWaitForSingleObject_Alertable ; int KeWaitForSingleObject_Timeout ;
																		KeWaitForSingleObject_Object = DiskPerfRegisterDevice_event;
																		KeWaitForSingleObject_WaitReason = Executive;
																		KeWaitForSingleObject_WaitMode = KernelMode;
																		KeWaitForSingleObject_Alertable = 0;
																		KeWaitForSingleObject_Timeout = 0;
																		s = NP;
																		setEventCalled = 0;
L268:;
																		;
																		TRACER_RV = nondet();
																		DiskPerfRegisterDevice_status = DiskPerfRegisterDevice_ioStatus__Status;
																		DiskPerfRegisterDevice_CIL___Tmp28 = DiskPerfRegisterDevice_status;
																		if(DiskPerfRegisterDevice_CIL___Tmp28 >= -2147483643 && DiskPerfRegisterDevice_CIL___Tmp28 <= -2147483643) {
																			goto L254;
																		}
																		else if(DiskPerfRegisterDevice_CIL___Tmp28 < -2147483643) {
																			goto L260;
																		}
																		else {
																			goto L262;
																		}
}
																	}
																	else {
																		goto L267;
																	}
																}
																else {
																	goto L266;
																}
}
}
}
}
															}
															else {
																goto L265;
															}
														}
														else if(IoBuildDeviceIoControlRequest_tmp_ndt_7 < 0) {
L269:;
															retres12 = 0;
															goto L264;
														}
														else {
															goto L269;
														}
}
													}
												}
												else if(IofCallDriver_tmp_ndt_9 < 1) {
L270:;
													IofCallDriver_returnVal2 = 259;
													s = MPR3;
													lowerDriverReturn = IofCallDriver_returnVal2;
													TRACER_RV = (IofCallDriver_returnVal2);
													DiskPerfRegisterDevice_status = TRACER_RV;
													TRACER_RV = nondet();
													DiskPerfRegisterDevice_CIL___Tmp23 = DiskPerfRegisterDevice_status;
{
 int KeWaitForSingleObject_tmp_ndt_10 ;
int retres7 ;
													int KeWaitForSingleObject_Object ; int KeWaitForSingleObject_WaitReason ; int KeWaitForSingleObject_WaitMode ; int KeWaitForSingleObject_Alertable ; int KeWaitForSingleObject_Timeout ;
													KeWaitForSingleObject_Object = DiskPerfRegisterDevice_event;
													KeWaitForSingleObject_WaitReason = Executive;
													KeWaitForSingleObject_WaitMode = KernelMode;
													KeWaitForSingleObject_Alertable = 0;
													KeWaitForSingleObject_Timeout = 0;
													s = NP;
													setEventCalled = 0;
L271:;
													;
													TRACER_RV = nondet();
													DiskPerfRegisterDevice_status = DiskPerfRegisterDevice_ioStatus__Status;
													if(DiskPerfRegisterDevice_status < 0) {
														goto L234;
													}
													else {
														goto L232;
													}
}
												}
												else {
													goto L270;
												}
											}
											else {
												goto L233;
											}
}
}
}
}
										}
										else {
											goto L231;
										}
									}
									else if(IoBuildDeviceIoControlRequest_tmp_ndt_7 < 0) {
L272:;
										retres12 = 0;
										goto L228;
									}
									else {
										goto L272;
									}
}
}
}
								}
								else if(IofCallDriver_tmp_ndt_9 < 1) {
L273:;
									IofCallDriver_returnVal2 = 259;
									s = MPR3;
									lowerDriverReturn = IofCallDriver_returnVal2;
									TRACER_RV = (IofCallDriver_returnVal2);
									DiskPerfForwardIrpSynchronous_status = TRACER_RV;
									TRACER_RV = nondet();
									DiskPerfForwardIrpSynchronous_CIL___Tmp15 = DiskPerfForwardIrpSynchronous_status;
{
 int KeWaitForSingleObject_tmp_ndt_10 ;
int retres7 ;
									int KeWaitForSingleObject_Object ; int KeWaitForSingleObject_WaitReason ; int KeWaitForSingleObject_WaitMode ; int KeWaitForSingleObject_Alertable ; int KeWaitForSingleObject_Timeout ;
									KeWaitForSingleObject_Object = DiskPerfForwardIrpSynchronous_event;
									KeWaitForSingleObject_WaitReason = Executive;
									KeWaitForSingleObject_WaitMode = KernelMode;
									KeWaitForSingleObject_Alertable = 0;
									KeWaitForSingleObject_Timeout = 0;
									s = NP;
									setEventCalled = 0;
L274:;
									;
									TRACER_RV = nondet();
									DiskPerfForwardIrpSynchronous_status = myStatus;
									goto L181;
}
								}
								else {
									goto L273;
								}
							}
							else {
								goto L227;
							}
}
}
}
}
}
}
						}
						else if(DiskPerfDispatchPnp_irpSp__MinorFunction < 0) {
L275:;
{
 int DiskPerfSendToNextDriver_Irp__CurrentLocation ;
int DiskPerfSendToNextDriver_Irp__Tail__Overlay__CurrentStackLocation ;
int DiskPerfSendToNextDriver_DeviceObject__DeviceExtension ;
int DiskPerfSendToNextDriver_deviceExtension__TargetDeviceObject ;
int DiskPerfSendToNextDriver_deviceExtension ;
int DiskPerfSendToNextDriver_tmp ;
							int DiskPerfSendToNextDriver_DeviceObject ; int DiskPerfSendToNextDriver_Irp ;
							DiskPerfSendToNextDriver_DeviceObject = DiskPerfDispatchPnp_DeviceObject;
							DiskPerfSendToNextDriver_Irp = DiskPerfDispatchPnp_Irp;
							safety = safety + (s - NP);
							s = SKIP1;
							DiskPerfSendToNextDriver_Irp__CurrentLocation = DiskPerfSendToNextDriver_Irp__CurrentLocation + 1;
							DiskPerfSendToNextDriver_Irp__Tail__Overlay__CurrentStackLocation = DiskPerfSendToNextDriver_Irp__Tail__Overlay__CurrentStackLocation + 1;
							DiskPerfSendToNextDriver_deviceExtension = DiskPerfSendToNextDriver_DeviceObject__DeviceExtension;
{
 int IofCallDriver_returnVal2 ;
int IofCallDriver_compRetStatus ;
int IofCallDriver_lcontext ;
int IofCallDriver_CIL___Tmp7 ;
int IofCallDriver_tmp_ndt_8 ;
int IofCallDriver_tmp_ndt_9 ;
							int IofCallDriver_DeviceObject ; int IofCallDriver_Irp ;
							IofCallDriver_DeviceObject = DiskPerfSendToNextDriver_deviceExtension__TargetDeviceObject;
							IofCallDriver_Irp = DiskPerfSendToNextDriver_Irp;
							IofCallDriver_tmp_ndt_8 = __VERIFIER_nondet_int();
							if(IofCallDriver_tmp_ndt_8 >= 0 && IofCallDriver_tmp_ndt_8 <= 0) {
								IofCallDriver_returnVal2 = 0;
								safety = safety + (s - SKIP1);
								s = SKIP2;
								lowerDriverReturn = IofCallDriver_returnVal2;
								TRACER_RV = (IofCallDriver_returnVal2);
								DiskPerfSendToNextDriver_tmp = TRACER_RV;
								TRACER_RV = nondet();
								TRACER_RV = (DiskPerfSendToNextDriver_tmp);
								DiskPerfDispatchPnp_tmp = TRACER_RV;
								TRACER_RV = nondet();
								retres8 = DiskPerfDispatchPnp_tmp;
								TRACER_returning = 1;
								TRACER_RV = (retres8);
								main_status = TRACER_RV;
								TRACER_RV = nondet();
								goto L159;
							}
							else if(IofCallDriver_tmp_ndt_8 < 0) {
L276:;
								IofCallDriver_tmp_ndt_9 = __VERIFIER_nondet_int();
								if(IofCallDriver_tmp_ndt_9 >= 1 && IofCallDriver_tmp_ndt_9 <= 1) {
									IofCallDriver_returnVal2 = -1073741823;
									safety = safety + (s - SKIP1);
									s = SKIP2;
									lowerDriverReturn = IofCallDriver_returnVal2;
									TRACER_RV = (IofCallDriver_returnVal2);
									DiskPerfSendToNextDriver_tmp = TRACER_RV;
									TRACER_RV = nondet();
									TRACER_RV = (DiskPerfSendToNextDriver_tmp);
									DiskPerfDispatchPnp_tmp = TRACER_RV;
									TRACER_RV = nondet();
									retres8 = DiskPerfDispatchPnp_tmp;
									TRACER_returning = 1;
									TRACER_RV = (retres8);
									main_status = TRACER_RV;
									TRACER_RV = nondet();
									goto L163;
								}
								else if(IofCallDriver_tmp_ndt_9 < 1) {
L277:;
									IofCallDriver_returnVal2 = 259;
									safety = safety + (s - SKIP1);
									s = SKIP2;
									lowerDriverReturn = IofCallDriver_returnVal2;
									TRACER_RV = (IofCallDriver_returnVal2);
									DiskPerfSendToNextDriver_tmp = TRACER_RV;
									TRACER_RV = nondet();
									TRACER_RV = (DiskPerfSendToNextDriver_tmp);
									DiskPerfDispatchPnp_tmp = TRACER_RV;
									TRACER_RV = nondet();
									retres8 = DiskPerfDispatchPnp_tmp;
									TRACER_returning = 1;
									TRACER_RV = (retres8);
									main_status = TRACER_RV;
									TRACER_RV = nondet();
									goto L166;
								}
								else {
									goto L277;
								}
							}
							else {
								goto L276;
							}
}
}
						}
						else {
							if(DiskPerfDispatchPnp_irpSp__MinorFunction >= 2 && DiskPerfDispatchPnp_irpSp__MinorFunction <= 2) {
{
 int DiskPerfRemoveDevice_DeviceObject__DeviceExtension ;
int DiskPerfRemoveDevice_deviceExtension__WmilibContext ;
int DiskPerfRemoveDevice_Irp__IoStatus__Status ;
int DiskPerfRemoveDevice_status ;
int DiskPerfRemoveDevice_deviceExtension ;
int DiskPerfRemoveDevice_wmilibContext ;
								int DiskPerfRemoveDevice_DeviceObject ; int DiskPerfRemoveDevice_Irp ;
								DiskPerfRemoveDevice_DeviceObject = DiskPerfDispatchPnp_DeviceObject;
								DiskPerfRemoveDevice_Irp = DiskPerfDispatchPnp_Irp;
{
 int DiskPerfForwardIrpSynchronous_Irp__Tail__Overlay__CurrentStackLocation ;
int DiskPerfForwardIrpSynchronous_DeviceObject__DeviceExtension ;
int DiskPerfForwardIrpSynchronous_deviceExtension__TargetDeviceObject ;
int DiskPerfForwardIrpSynchronous_deviceExtension ;
int DiskPerfForwardIrpSynchronous_event ;
int DiskPerfForwardIrpSynchronous_status ;
int DiskPerfForwardIrpSynchronous_nextIrpSp__Control ;
int DiskPerfForwardIrpSynchronous_irpSp ;
int DiskPerfForwardIrpSynchronous_nextIrpSp ;
int DiskPerfForwardIrpSynchronous_irpSp__Context ;
int DiskPerfForwardIrpSynchronous_irpSp__Control ;
int DiskPerfForwardIrpSynchronous_irpSp___0 ;
int DiskPerfForwardIrpSynchronous_CIL___Tmp15 ;
								int DiskPerfForwardIrpSynchronous_DeviceObject ; int DiskPerfForwardIrpSynchronous_Irp ;
								DiskPerfForwardIrpSynchronous_DeviceObject = DiskPerfRemoveDevice_DeviceObject;
								DiskPerfForwardIrpSynchronous_Irp = DiskPerfRemoveDevice_Irp;
								DiskPerfForwardIrpSynchronous_deviceExtension = DiskPerfForwardIrpSynchronous_DeviceObject__DeviceExtension;
								DiskPerfForwardIrpSynchronous_irpSp = DiskPerfForwardIrpSynchronous_Irp__Tail__Overlay__CurrentStackLocation;
								DiskPerfForwardIrpSynchronous_nextIrpSp = DiskPerfForwardIrpSynchronous_Irp__Tail__Overlay__CurrentStackLocation - 1;
								DiskPerfForwardIrpSynchronous_nextIrpSp__Control = 0;
								safety = safety + (s - NP);
								safety = safety + (compRegistered - 0);
								compRegistered = 1;
								routine = 0;
								DiskPerfForwardIrpSynchronous_irpSp___0 = DiskPerfForwardIrpSynchronous_Irp__Tail__Overlay__CurrentStackLocation - 1;
								DiskPerfForwardIrpSynchronous_irpSp__Context = DiskPerfForwardIrpSynchronous_event;
								DiskPerfForwardIrpSynchronous_irpSp__Control = 224;
{
 int IofCallDriver_returnVal2 ;
int IofCallDriver_compRetStatus ;
int IofCallDriver_lcontext ;
int IofCallDriver_CIL___Tmp7 ;
int IofCallDriver_tmp_ndt_8 ;
int IofCallDriver_tmp_ndt_9 ;
								int IofCallDriver_DeviceObject ; int IofCallDriver_Irp ;
								IofCallDriver_DeviceObject = DiskPerfForwardIrpSynchronous_deviceExtension__TargetDeviceObject;
								IofCallDriver_Irp = DiskPerfForwardIrpSynchronous_Irp;
{
 int DiskPerfIrpCompletion_Event ;
int retres5 ;
								int DiskPerfIrpCompletion_DeviceObject ; int DiskPerfIrpCompletion_Irp ; int DiskPerfIrpCompletion_Context ;
								DiskPerfIrpCompletion_DeviceObject = IofCallDriver_DeviceObject;
								DiskPerfIrpCompletion_Irp = IofCallDriver_Irp;
								DiskPerfIrpCompletion_Context = IofCallDriver_lcontext;
{
 int KeSetEvent_l ;
								int KeSetEvent_Event ; int KeSetEvent_Increment ; int KeSetEvent_Wait ;
								KeSetEvent_Event = DiskPerfIrpCompletion_Event;
								KeSetEvent_Increment = 0;
								KeSetEvent_Wait = 0;
								setEventCalled = 1;
								;
								TRACER_RV = nondet();
								retres5 = -1073741802;
								TRACER_RV = (retres5);
								IofCallDriver_compRetStatus = TRACER_RV;
								TRACER_RV = nondet();
								IofCallDriver_CIL___Tmp7 = IofCallDriver_compRetStatus;
{
								safety = safety + (s - NP);
								s = MPR1;
								;
								TRACER_RV = nondet();
								IofCallDriver_tmp_ndt_8 = __VERIFIER_nondet_int();
								if(IofCallDriver_tmp_ndt_8 >= 0 && IofCallDriver_tmp_ndt_8 <= 0) {
									IofCallDriver_returnVal2 = 0;
									s = NP;
									lowerDriverReturn = IofCallDriver_returnVal2;
									TRACER_RV = (IofCallDriver_returnVal2);
									DiskPerfForwardIrpSynchronous_status = TRACER_RV;
									TRACER_RV = nondet();
									DiskPerfForwardIrpSynchronous_CIL___Tmp15 = DiskPerfForwardIrpSynchronous_status;
L278:;
									TRACER_RV = (DiskPerfForwardIrpSynchronous_status);
									DiskPerfRemoveDevice_status = TRACER_RV;
									TRACER_RV = nondet();
{
									int IofCompleteRequest_Irp ; int IofCompleteRequest_PriorityBoost ;
									IofCompleteRequest_Irp = DiskPerfRemoveDevice_Irp;
									IofCompleteRequest_PriorityBoost = 0;
									safety = safety + (s - NP);
									s = DC;
									;
									TRACER_RV = nondet();
									TRACER_RV = (DiskPerfRemoveDevice_status);
									DiskPerfDispatchPnp_status = TRACER_RV;
									TRACER_RV = nondet();
									goto L184;
}
								}
								else if(IofCallDriver_tmp_ndt_8 < 0) {
L279:;
									IofCallDriver_tmp_ndt_9 = __VERIFIER_nondet_int();
									if(IofCallDriver_tmp_ndt_9 >= 1 && IofCallDriver_tmp_ndt_9 <= 1) {
										IofCallDriver_returnVal2 = -1073741823;
										s = NP;
										lowerDriverReturn = IofCallDriver_returnVal2;
										TRACER_RV = (IofCallDriver_returnVal2);
										DiskPerfForwardIrpSynchronous_status = TRACER_RV;
										TRACER_RV = nondet();
										TRACER_RV = (DiskPerfForwardIrpSynchronous_status);
										DiskPerfRemoveDevice_status = TRACER_RV;
										TRACER_RV = nondet();
{
										int IofCompleteRequest_Irp ; int IofCompleteRequest_PriorityBoost ;
										IofCompleteRequest_Irp = DiskPerfRemoveDevice_Irp;
										IofCompleteRequest_PriorityBoost = 0;
										safety = safety + (s - NP);
										s = DC;
										;
										TRACER_RV = nondet();
										TRACER_RV = (DiskPerfRemoveDevice_status);
										DiskPerfDispatchPnp_status = TRACER_RV;
										TRACER_RV = nondet();
										goto L230;
}
									}
									else if(IofCallDriver_tmp_ndt_9 < 1) {
L280:;
										IofCallDriver_returnVal2 = 259;
										s = MPR3;
										lowerDriverReturn = IofCallDriver_returnVal2;
										TRACER_RV = (IofCallDriver_returnVal2);
										DiskPerfForwardIrpSynchronous_status = TRACER_RV;
										TRACER_RV = nondet();
										DiskPerfForwardIrpSynchronous_CIL___Tmp15 = DiskPerfForwardIrpSynchronous_status;
{
 int KeWaitForSingleObject_tmp_ndt_10 ;
int retres7 ;
										int KeWaitForSingleObject_Object ; int KeWaitForSingleObject_WaitReason ; int KeWaitForSingleObject_WaitMode ; int KeWaitForSingleObject_Alertable ; int KeWaitForSingleObject_Timeout ;
										KeWaitForSingleObject_Object = DiskPerfForwardIrpSynchronous_event;
										KeWaitForSingleObject_WaitReason = Executive;
										KeWaitForSingleObject_WaitMode = KernelMode;
										KeWaitForSingleObject_Alertable = 0;
										KeWaitForSingleObject_Timeout = 0;
										s = NP;
										setEventCalled = 0;
L281:;
										;
										TRACER_RV = nondet();
										DiskPerfForwardIrpSynchronous_status = myStatus;
										goto L278;
}
									}
									else {
										goto L280;
									}
								}
								else {
									goto L279;
								}
}
}
}
}
}
}
							}
							else if(DiskPerfDispatchPnp_irpSp__MinorFunction < 2) {
								goto L275;
							}
							else {
								goto L275;
							}
						}
}
					}
					else if(main_tmp_ndt_3 < 3) {
						goto L171;
					}
					else {
						goto L171;
					}
				}
				else {
					goto L180;
				}
			}
			else {
				goto L179;
			}
}
		}
		else {
			goto L178;
		}
	}
	else {
		goto L5;
	}
}
}
}

