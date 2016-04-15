int FloppyThread  ;
int KernelMode  ;
int Suspended  ;
int Executive  ;
int DiskController  ;
int FloppyDiskPeripheral  ;
int MOUNTDEV_MOUNTED_DEVICE_GUID  ;
int myStatus  ;
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
int compRegistered  ;
int lowerDriverReturn  ;
int setEventCalled  ;
int customIrp  ;
int safety  ;
int PagingReferenceCount  =    0;
int PsCreateSystemThread(int PsCreateSystemThread_ThreadHandle , int PsCreateSystemThread_DesiredAccess , int PsCreateSystemThread_ObjectAttributes , int PsCreateSystemThread_ProcessHandle , int PsCreateSystemThread_ClientId , int PsCreateSystemThread_StartRoutine , int PsCreateSystemThread_StartContext ) ;
int ObReferenceObjectByHandle(int ObReferenceObjectByHandle_Handle , int ObReferenceObjectByHandle_DesiredAccess , int ObReferenceObjectByHandle_ObjectType , int ObReferenceObjectByHandle_AccessMode , int ObReferenceObjectByHandle_Object , int ObReferenceObjectByHandle_HandleInformation ) ;
int ZwClose(int ZwClose_Handle ) ;
void IofCompleteRequest(int IofCompleteRequest_Irp , int IofCompleteRequest_PriorityBoost ) ;
int FloppyStartDevice(int FloppyStartDevice_DeviceObject , int FloppyStartDevice_Irp ) ;
int IofCallDriver(int IofCallDriver_DeviceObject , int IofCallDriver_Irp ) ;
int KeWaitForSingleObject(int KeWaitForSingleObject_Object , int KeWaitForSingleObject_WaitReason , int KeWaitForSingleObject_WaitMode , int KeWaitForSingleObject_Alertable , int KeWaitForSingleObject_Timeout ) ;
int IoSetDeviceInterfaceState(int IoSetDeviceInterfaceState_SymbolicLinkName , int IoSetDeviceInterfaceState_Enable ) ;
int IoDeleteSymbolicLink(int IoDeleteSymbolicLink_SymbolicLinkName ) ;
int FlFdcDeviceIo(int FlFdcDeviceIo_DeviceObject , int FlFdcDeviceIo_Ioctl , int FlFdcDeviceIo_Data ) ;
extern int uninf1() ;
int IoRegisterDeviceInterface(int IoRegisterDeviceInterface_PhysicalDeviceObject , int IoRegisterDeviceInterface_InterfaceClassGuid , int IoRegisterDeviceInterface_ReferenceString , int IoRegisterDeviceInterface_SymbolicLinkName ) ;
int KeSetEvent(int KeSetEvent_Event , int KeSetEvent_Increment , int KeSetEvent_Wait ) ;
int IoBuildDeviceIoControlRequest(int IoBuildDeviceIoControlRequest_IoControlCode , int IoBuildDeviceIoControlRequest_DeviceObject , int IoBuildDeviceIoControlRequest_InputBuffer , int IoBuildDeviceIoControlRequest_InputBufferLength , int IoBuildDeviceIoControlRequest_OutputBuffer , int IoBuildDeviceIoControlRequest_OutputBufferLength , int IoBuildDeviceIoControlRequest_InternalDeviceIoControl , int IoBuildDeviceIoControlRequest_Event , int IoBuildDeviceIoControlRequest_IoStatusBlock ) ;
extern int __VERIFIER_nondet_int() ;
extern int _SLICE() ;
void main(void)
{
int TRACER_RV;
 int main_status ;
int main_irp ;
int main_pirp ;
int main_irp_choice ;
int main_devobj ;
int main_tmp_ndt_1 ;
int TRACER_returning ;
{
	;
	TRACER_RV = nondet();
	TRACER_returning = 0;
	safety = 0;
	main_status = 0;
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
	compRegistered = 0;
	lowerDriverReturn = 0;
	setEventCalled = 0;
	customIrp = 0;
	;
	TRACER_RV = nondet();
	myStatus = 0;
	if(main_irp_choice >= 0 && main_irp_choice <= 0) {
		myStatus = -1073741637;
{
		s = NP;
		pended = 0;
		compRegistered = 0;
		lowerDriverReturn = 0;
		setEventCalled = 0;
		customIrp = 0;
		;
		TRACER_RV = nondet();
		main_tmp_ndt_1 = __VERIFIER_nondet_int();
		if(main_tmp_ndt_1 >= 3 && main_tmp_ndt_1 <= 3) {
{
 int FloppyPnp_DeviceObject__DeviceExtension ;
int FloppyPnp_Irp__Tail__Overlay__CurrentStackLocation ;
int FloppyPnp_Irp__IoStatus__Information ;
int FloppyPnp_Irp__IoStatus__Status ;
int FloppyPnp_Irp__CurrentLocation ;
int FloppyPnp_disketteExtension__IsRemoved ;
int FloppyPnp_disketteExtension__IsStarted ;
int FloppyPnp_disketteExtension__TargetObject ;
int FloppyPnp_disketteExtension__HoldNewRequests ;
int FloppyPnp_disketteExtension__FloppyThread ;
int FloppyPnp_disketteExtension__InterfaceString__Buffer ;
int FloppyPnp_disketteExtension__InterfaceString ;
int FloppyPnp_disketteExtension__ArcName__Length ;
int FloppyPnp_disketteExtension__ArcName ;
int FloppyPnp_irpSp__MinorFunction ;
int FloppyPnp_IoGetConfigurationInformation__FloppyCount ;
int FloppyPnp_irpSp ;
int FloppyPnp_disketteExtension ;
int FloppyPnp_ntStatus ;
int FloppyPnp_doneEvent ;
int FloppyPnp_irpSp___0 ;
int FloppyPnp_nextIrpSp ;
int FloppyPnp_nextIrpSp__Control ;
int FloppyPnp_irpSp___1 ;
int FloppyPnp_irpSp__Context ;
int FloppyPnp_irpSp__Control ;
int FloppyPnp_CIL___Tmp29 ;
int FloppyPnp_CIL___Tmp30 ;
int retres31 ;
int TRACER_returning ;
			int FloppyPnp_DeviceObject ; int FloppyPnp_Irp ;
			FloppyPnp_DeviceObject = main_devobj;
			FloppyPnp_Irp = main_pirp;
			TRACER_returning = 0;
			FloppyPnp_ntStatus = 0;
			PagingReferenceCount = PagingReferenceCount + 1;
			FloppyPnp_disketteExtension = FloppyPnp_DeviceObject__DeviceExtension;
			FloppyPnp_irpSp = FloppyPnp_Irp__Tail__Overlay__CurrentStackLocation;
			if(FloppyPnp_disketteExtension__IsRemoved > 0) {
L1:;
{
				int IofCompleteRequest_Irp ; int IofCompleteRequest_PriorityBoost ;
				IofCompleteRequest_Irp = FloppyPnp_Irp;
				IofCompleteRequest_PriorityBoost = 0;
				safety = safety + (s - NP);
				s = DC;
				;
				TRACER_RV = nondet();
				retres31 = -1073741738;
				TRACER_RV = (retres31);
				main_status = TRACER_RV;
				TRACER_RV = nondet();
L2:;
L3:;
				safety = safety + (s - DC);
L4:;
                _SLICE(safety);
				/* END OF PATH at func_main@p36#1 */
}
			}
			else if(FloppyPnp_disketteExtension__IsRemoved < 0) {
				goto L1;
			}
			else {
				if(FloppyPnp_irpSp__MinorFunction >= 0 && FloppyPnp_irpSp__MinorFunction <= 0) {
{
 int FloppyStartDevice_DeviceObject__DeviceExtension ;
int FloppyStartDevice_Irp__Tail__Overlay__CurrentStackLocation ;
int FloppyStartDevice_Irp__IoStatus__Status ;
int FloppyStartDevice_disketteExtension__TargetObject ;
int FloppyStartDevice_disketteExtension__MaxTransferSize ;
int FloppyStartDevice_disketteExtension__DriveType ;
int FloppyStartDevice_disketteExtension__DeviceUnit ;
int FloppyStartDevice_disketteExtension__UnderlyingPDO ;
int FloppyStartDevice_disketteExtension__InterfaceString ;
int FloppyStartDevice_disketteExtension__IsStarted ;
int FloppyStartDevice_disketteExtension__HoldNewRequests ;
int FloppyStartDevice_ntStatus ;
int FloppyStartDevice_pnpStatus ;
int FloppyStartDevice_doneEvent ;
int FloppyStartDevice_fdcInfo ;
int FloppyStartDevice_fdcInfo__BufferCount ;
int FloppyStartDevice_fdcInfo__BufferSize ;
int FloppyStartDevice_fdcInfo__MaxTransferSize ;
int FloppyStartDevice_fdcInfo__AcpiBios ;
int FloppyStartDevice_fdcInfo__AcpiFdiSupported ;
int FloppyStartDevice_fdcInfo__PeripheralNumber ;
int FloppyStartDevice_fdcInfo__UnitNumber ;
int FloppyStartDevice_Dc ;
int FloppyStartDevice_Fp ;
int FloppyStartDevice_disketteExtension ;
int FloppyStartDevice_irpSp ;
int FloppyStartDevice_irpSp___0 ;
int FloppyStartDevice_nextIrpSp ;
int FloppyStartDevice_nextIrpSp__Control ;
int FloppyStartDevice_irpSp___1 ;
int FloppyStartDevice_irpSp__Control ;
int FloppyStartDevice_irpSp__Context ;
int FloppyStartDevice_InterfaceType ;
int FloppyStartDevice_KUSER_SHARED_DATA__AlternativeArchitecture_NEC98x86 ;
int FloppyStartDevice_CIL___Tmp42 ;
int FloppyStartDevice_CIL___Tmp43 ;
int FloppyStartDevice_CIL___Tmp44 ;
int FloppyStartDevice_CIL___Tmp45 ;
int FloppyStartDevice_CIL___Tmp46 ;
int FloppyStartDevice_CIL___Tmp47 ;
int FloppyStartDevice_CIL___Tmp48 ;
					int FloppyStartDevice_DeviceObject ; int FloppyStartDevice_Irp ;
					FloppyStartDevice_DeviceObject = FloppyPnp_DeviceObject;
					FloppyStartDevice_Irp = FloppyPnp_Irp;
					FloppyStartDevice_Dc = DiskController;
					FloppyStartDevice_Fp = FloppyDiskPeripheral;
					FloppyStartDevice_disketteExtension = FloppyStartDevice_DeviceObject__DeviceExtension;
					FloppyStartDevice_irpSp = FloppyStartDevice_Irp__Tail__Overlay__CurrentStackLocation;
					FloppyStartDevice_irpSp___0 = FloppyStartDevice_Irp__Tail__Overlay__CurrentStackLocation;
					FloppyStartDevice_nextIrpSp = FloppyStartDevice_Irp__Tail__Overlay__CurrentStackLocation - 1;
					FloppyStartDevice_nextIrpSp__Control = 0;
					safety = safety + (s - NP);
					safety = safety + (compRegistered - 0);
					compRegistered = 1;
					FloppyStartDevice_irpSp___1 = FloppyStartDevice_Irp__Tail__Overlay__CurrentStackLocation - 1;
					FloppyStartDevice_irpSp__Context = FloppyStartDevice_doneEvent;
					FloppyStartDevice_irpSp__Control = 224;
{
 int IofCallDriver_returnVal2 ;
int IofCallDriver_compRetStatus1 ;
int IofCallDriver_lcontext ;
int IofCallDriver_CIL___Tmp7 ;
int IofCallDriver_tmp_ndt_7 ;
int IofCallDriver_tmp_ndt_8 ;
					int IofCallDriver_DeviceObject ; int IofCallDriver_Irp ;
					IofCallDriver_DeviceObject = FloppyStartDevice_disketteExtension__TargetObject;
					IofCallDriver_Irp = FloppyStartDevice_Irp;
{
 int retres4 ;
					int FloppyPnpComplete_DeviceObject ; int FloppyPnpComplete_Irp ; int FloppyPnpComplete_Context ;
					FloppyPnpComplete_DeviceObject = IofCallDriver_DeviceObject;
					FloppyPnpComplete_Irp = IofCallDriver_Irp;
					FloppyPnpComplete_Context = IofCallDriver_lcontext;
{
 int KeSetEvent_l ;
					int KeSetEvent_Event ; int KeSetEvent_Increment ; int KeSetEvent_Wait ;
					KeSetEvent_Event = FloppyPnpComplete_Context;
					KeSetEvent_Increment = 1;
					KeSetEvent_Wait = 0;
					setEventCalled = 1;
					;
					TRACER_RV = nondet();
					retres4 = -1073741802;
					TRACER_RV = (retres4);
					IofCallDriver_compRetStatus1 = TRACER_RV;
					TRACER_RV = nondet();
					IofCallDriver_CIL___Tmp7 = IofCallDriver_compRetStatus1;
{
					safety = safety + (s - NP);
					s = MPR1;
					;
					TRACER_RV = nondet();
					IofCallDriver_tmp_ndt_7 = __VERIFIER_nondet_int();
					if(IofCallDriver_tmp_ndt_7 >= 0 && IofCallDriver_tmp_ndt_7 <= 0) {
						IofCallDriver_returnVal2 = 0;
						s = NP;
						lowerDriverReturn = IofCallDriver_returnVal2;
						FloppyStartDevice_ntStatus = TRACER_RV;
						TRACER_RV = nondet();
L5:;
{
 int FlFdcDeviceIo_ntStatus ;
int FlFdcDeviceIo_irp ;
int FlFdcDeviceIo_irpStack ;
int FlFdcDeviceIo_doneEvent ;
int FlFdcDeviceIo_ioStatus ;
int FlFdcDeviceIo_irp__Tail__Overlay__CurrentStackLocation ;
int FlFdcDeviceIo_irpStack__Parameters__DeviceIoControl__Type3InputBuffer ;
int FlFdcDeviceIo_CIL___Tmp11 ;
int retres12 ;
						int FlFdcDeviceIo_DeviceObject ; int FlFdcDeviceIo_Ioctl ; int FlFdcDeviceIo_Data ;
						FlFdcDeviceIo_DeviceObject = FloppyStartDevice_disketteExtension__TargetObject;
						FlFdcDeviceIo_Ioctl = FloppyStartDevice_CIL___Tmp46;
						FlFdcDeviceIo_Data = FloppyStartDevice_fdcInfo;
{
 int IoBuildDeviceIoControlRequest_malloc ;
int IoBuildDeviceIoControlRequest_tmp_ndt_2 ;
int retres12 ;
						int IoBuildDeviceIoControlRequest_IoControlCode ; int IoBuildDeviceIoControlRequest_DeviceObject ; int IoBuildDeviceIoControlRequest_InputBuffer ; int IoBuildDeviceIoControlRequest_InputBufferLength ; int IoBuildDeviceIoControlRequest_OutputBuffer ; int IoBuildDeviceIoControlRequest_OutputBufferLength ; int IoBuildDeviceIoControlRequest_InternalDeviceIoControl ; int IoBuildDeviceIoControlRequest_Event ; int IoBuildDeviceIoControlRequest_IoStatusBlock ;
						IoBuildDeviceIoControlRequest_IoControlCode = FlFdcDeviceIo_Ioctl;
						IoBuildDeviceIoControlRequest_DeviceObject = FlFdcDeviceIo_DeviceObject;
						IoBuildDeviceIoControlRequest_InputBuffer = 0;
						IoBuildDeviceIoControlRequest_InputBufferLength = 0;
						IoBuildDeviceIoControlRequest_OutputBuffer = 0;
						IoBuildDeviceIoControlRequest_OutputBufferLength = 0;
						IoBuildDeviceIoControlRequest_InternalDeviceIoControl = 1;
						IoBuildDeviceIoControlRequest_Event = FlFdcDeviceIo_doneEvent;
						IoBuildDeviceIoControlRequest_IoStatusBlock = FlFdcDeviceIo_ioStatus;
						customIrp = 1;
						IoBuildDeviceIoControlRequest_tmp_ndt_2 = __VERIFIER_nondet_int();
						if(IoBuildDeviceIoControlRequest_tmp_ndt_2 >= 0 && IoBuildDeviceIoControlRequest_tmp_ndt_2 <= 0) {
							retres12 = IoBuildDeviceIoControlRequest_malloc;
L6:;
							TRACER_RV = (retres12);
							FlFdcDeviceIo_irp = TRACER_RV;
							TRACER_RV = nondet();
							if(FlFdcDeviceIo_irp >= 0 && FlFdcDeviceIo_irp <= 0) {
								retres12 = -1073741670;
								TRACER_RV = (retres12);
								FloppyStartDevice_ntStatus = TRACER_RV;
								TRACER_RV = nondet();
{
								int IofCompleteRequest_Irp ; int IofCompleteRequest_PriorityBoost ;
								IofCompleteRequest_Irp = FloppyStartDevice_Irp;
								IofCompleteRequest_PriorityBoost = 0;
								safety = safety + (s - NP);
								s = DC;
								;
								TRACER_RV = nondet();
								TRACER_RV = (FloppyStartDevice_ntStatus);
								FloppyPnp_ntStatus = TRACER_RV;
								TRACER_RV = nondet();
								PagingReferenceCount = PagingReferenceCount - 1;
								retres31 = FloppyPnp_ntStatus;
								TRACER_RV = (retres31);
								main_status = TRACER_RV;
								TRACER_RV = nondet();
L7:;
								goto L3;
}
							}
							else if(FlFdcDeviceIo_irp < 0) {
L8:;
{
 int IofCallDriver_returnVal2 ;
int IofCallDriver_compRetStatus1 ;
int IofCallDriver_lcontext ;
int IofCallDriver_CIL___Tmp7 ;
int IofCallDriver_tmp_ndt_7 ;
int IofCallDriver_tmp_ndt_8 ;
								int IofCallDriver_DeviceObject ; int IofCallDriver_Irp ;
								IofCallDriver_DeviceObject = FlFdcDeviceIo_DeviceObject;
								IofCallDriver_Irp = FlFdcDeviceIo_irp;
{
 int retres4 ;
								int FloppyPnpComplete_DeviceObject ; int FloppyPnpComplete_Irp ; int FloppyPnpComplete_Context ;
								FloppyPnpComplete_DeviceObject = IofCallDriver_DeviceObject;
								FloppyPnpComplete_Irp = IofCallDriver_Irp;
								FloppyPnpComplete_Context = IofCallDriver_lcontext;
{
 int KeSetEvent_l ;
								int KeSetEvent_Event ; int KeSetEvent_Increment ; int KeSetEvent_Wait ;
								KeSetEvent_Event = FloppyPnpComplete_Context;
								KeSetEvent_Increment = 1;
								KeSetEvent_Wait = 0;
								setEventCalled = 1;
								;
								TRACER_RV = nondet();
								retres4 = -1073741802;
								TRACER_RV = (retres4);
								IofCallDriver_compRetStatus1 = TRACER_RV;
								TRACER_RV = nondet();
								IofCallDriver_CIL___Tmp7 = IofCallDriver_compRetStatus1;
{
								safety = safety + (s - NP);
								s = MPR1;
								;
								TRACER_RV = nondet();
								IofCallDriver_tmp_ndt_7 = __VERIFIER_nondet_int();
								if(IofCallDriver_tmp_ndt_7 >= 0 && IofCallDriver_tmp_ndt_7 <= 0) {
									IofCallDriver_returnVal2 = 0;
									s = NP;
									lowerDriverReturn = IofCallDriver_returnVal2;
									TRACER_RV = (IofCallDriver_returnVal2);
									FlFdcDeviceIo_ntStatus = TRACER_RV;
									TRACER_RV = nondet();
									retres12 = FlFdcDeviceIo_ntStatus;
									TRACER_RV = (retres12);
									FloppyStartDevice_ntStatus = TRACER_RV;
									TRACER_RV = nondet();
									if(FloppyStartDevice_fdcInfo__AcpiBios > 0) {
L9:;
										if(FloppyStartDevice_fdcInfo__AcpiFdiSupported > 0) {
L10:;
{
 int retres3 ;
											int FlAcpiConfigureFloppy_DisketteExtension ; int FlAcpiConfigureFloppy_FdcInfo ;
											FlAcpiConfigureFloppy_DisketteExtension = FloppyStartDevice_disketteExtension;
											FlAcpiConfigureFloppy_FdcInfo = FloppyStartDevice_fdcInfo;
											retres3 = 0;
											TRACER_RV = (retres3);
											FloppyStartDevice_ntStatus = TRACER_RV;
											TRACER_RV = nondet();
L11:;
L12:;
L13:;
L14:;
L15:;
{
 int IoRegisterDeviceInterface_tmp_ndt_5 ;
int retres6 ;
											int IoRegisterDeviceInterface_PhysicalDeviceObject ; int IoRegisterDeviceInterface_InterfaceClassGuid ; int IoRegisterDeviceInterface_ReferenceString ; int IoRegisterDeviceInterface_SymbolicLinkName ;
											IoRegisterDeviceInterface_PhysicalDeviceObject = FloppyStartDevice_disketteExtension__UnderlyingPDO;
											IoRegisterDeviceInterface_InterfaceClassGuid = MOUNTDEV_MOUNTED_DEVICE_GUID;
											IoRegisterDeviceInterface_ReferenceString = 0;
											IoRegisterDeviceInterface_SymbolicLinkName = FloppyStartDevice_disketteExtension__InterfaceString;
											IoRegisterDeviceInterface_tmp_ndt_5 = __VERIFIER_nondet_int();
											if(IoRegisterDeviceInterface_tmp_ndt_5 >= 0 && IoRegisterDeviceInterface_tmp_ndt_5 <= 0) {
												FloppyStartDevice_pnpStatus = TRACER_RV;
												TRACER_RV = nondet();
{
 int IoSetDeviceInterfaceState_tmp_ndt_6 ;
int retres4 ;
												int IoSetDeviceInterfaceState_SymbolicLinkName ; int IoSetDeviceInterfaceState_Enable ;
												IoSetDeviceInterfaceState_SymbolicLinkName = FloppyStartDevice_disketteExtension__InterfaceString;
												IoSetDeviceInterfaceState_Enable = 1;
L16:;
												FloppyStartDevice_pnpStatus = TRACER_RV;
												TRACER_RV = nondet();
L17:;
{
												int IofCompleteRequest_Irp ; int IofCompleteRequest_PriorityBoost ;
												IofCompleteRequest_Irp = FloppyStartDevice_Irp;
												IofCompleteRequest_PriorityBoost = 0;
												safety = safety + (s - NP);
												s = DC;
												;
												TRACER_RV = nondet();
												TRACER_RV = (FloppyStartDevice_ntStatus);
												FloppyPnp_ntStatus = TRACER_RV;
												TRACER_RV = nondet();
L18:;
												PagingReferenceCount = PagingReferenceCount - 1;
												retres31 = FloppyPnp_ntStatus;
												TRACER_RV = (retres31);
												main_status = TRACER_RV;
												TRACER_RV = nondet();
L19:;
												goto L3;
}
}
											}
											else if(IoRegisterDeviceInterface_tmp_ndt_5 < 0) {
L20:;
												retres6 = -1073741808;
												TRACER_RV = (retres6);
												FloppyStartDevice_pnpStatus = TRACER_RV;
												TRACER_RV = nondet();
												goto L17;
											}
											else {
												goto L20;
											}
}
}
										}
										else if(FloppyStartDevice_fdcInfo__AcpiFdiSupported < 0) {
											goto L10;
										}
										else {
L21:;
											goto L12;
										}
									}
									else if(FloppyStartDevice_fdcInfo__AcpiBios < 0) {
										goto L9;
									}
									else {
L22:;
										goto L13;
									}
								}
								else if(IofCallDriver_tmp_ndt_7 < 0) {
L23:;
									IofCallDriver_tmp_ndt_8 = __VERIFIER_nondet_int();
									if(IofCallDriver_tmp_ndt_8 >= 1 && IofCallDriver_tmp_ndt_8 <= 1) {
										IofCallDriver_returnVal2 = -1073741823;
										s = NP;
										lowerDriverReturn = IofCallDriver_returnVal2;
										TRACER_RV = (IofCallDriver_returnVal2);
										FlFdcDeviceIo_ntStatus = TRACER_RV;
										TRACER_RV = nondet();
										retres12 = FlFdcDeviceIo_ntStatus;
										TRACER_RV = (retres12);
										FloppyStartDevice_ntStatus = TRACER_RV;
										TRACER_RV = nondet();
{
										int IofCompleteRequest_Irp ; int IofCompleteRequest_PriorityBoost ;
										IofCompleteRequest_Irp = FloppyStartDevice_Irp;
										IofCompleteRequest_PriorityBoost = 0;
										safety = safety + (s - NP);
										s = DC;
										;
										TRACER_RV = nondet();
										TRACER_RV = (FloppyStartDevice_ntStatus);
										FloppyPnp_ntStatus = TRACER_RV;
										TRACER_RV = nondet();
L24:;
										PagingReferenceCount = PagingReferenceCount - 1;
										retres31 = FloppyPnp_ntStatus;
										TRACER_RV = (retres31);
										main_status = TRACER_RV;
										TRACER_RV = nondet();
L25:;
										goto L3;
}
									}
									else if(IofCallDriver_tmp_ndt_8 < 1) {
L26:;
										IofCallDriver_returnVal2 = 259;
										s = MPR3;
										lowerDriverReturn = IofCallDriver_returnVal2;
										TRACER_RV = (IofCallDriver_returnVal2);
										FlFdcDeviceIo_ntStatus = TRACER_RV;
										TRACER_RV = nondet();
										FlFdcDeviceIo_CIL___Tmp11 = FlFdcDeviceIo_ntStatus;
{
 int KeWaitForSingleObject_tmp_ndt_9 ;
int retres7 ;
										int KeWaitForSingleObject_Object ; int KeWaitForSingleObject_WaitReason ; int KeWaitForSingleObject_WaitMode ; int KeWaitForSingleObject_Alertable ; int KeWaitForSingleObject_Timeout ;
										KeWaitForSingleObject_Object = FlFdcDeviceIo_doneEvent;
										KeWaitForSingleObject_WaitReason = Suspended;
										KeWaitForSingleObject_WaitMode = KernelMode;
										KeWaitForSingleObject_Alertable = 0;
										KeWaitForSingleObject_Timeout = 0;
										s = NP;
										setEventCalled = 0;
L27:;
										;
										TRACER_RV = nondet();
										FlFdcDeviceIo_ntStatus = myStatus;
										retres12 = FlFdcDeviceIo_ntStatus;
										TRACER_RV = (retres12);
										FloppyStartDevice_ntStatus = TRACER_RV;
										TRACER_RV = nondet();
{
										int IofCompleteRequest_Irp ; int IofCompleteRequest_PriorityBoost ;
										IofCompleteRequest_Irp = FloppyStartDevice_Irp;
										IofCompleteRequest_PriorityBoost = 0;
										safety = safety + (s - NP);
										s = DC;
										;
										TRACER_RV = nondet();
										TRACER_RV = (FloppyStartDevice_ntStatus);
										FloppyPnp_ntStatus = TRACER_RV;
										TRACER_RV = nondet();
										PagingReferenceCount = PagingReferenceCount - 1;
										retres31 = FloppyPnp_ntStatus;
										TRACER_RV = (retres31);
										main_status = TRACER_RV;
										TRACER_RV = nondet();
										goto L3;
}
}
									}
									else {
										goto L26;
									}
								}
								else {
									goto L23;
								}
}
}
}
}
							}
							else {
								goto L8;
							}
						}
						else if(IoBuildDeviceIoControlRequest_tmp_ndt_2 < 0) {
L28:;
							retres12 = 0;
							goto L6;
						}
						else {
							goto L28;
						}
}
}
					}
					else if(IofCallDriver_tmp_ndt_7 < 0) {
L29:;
						IofCallDriver_tmp_ndt_8 = __VERIFIER_nondet_int();
						if(IofCallDriver_tmp_ndt_8 >= 1 && IofCallDriver_tmp_ndt_8 <= 1) {
							IofCallDriver_returnVal2 = -1073741823;
							s = NP;
							lowerDriverReturn = IofCallDriver_returnVal2;
							FloppyStartDevice_ntStatus = TRACER_RV;
							TRACER_RV = nondet();
							goto L5;
						}
						else if(IofCallDriver_tmp_ndt_8 < 1) {
L30:;
							IofCallDriver_returnVal2 = 259;
							s = MPR3;
							lowerDriverReturn = IofCallDriver_returnVal2;
							TRACER_RV = (IofCallDriver_returnVal2);
							FloppyStartDevice_ntStatus = TRACER_RV;
							TRACER_RV = nondet();
							FloppyStartDevice_CIL___Tmp42 = FloppyStartDevice_ntStatus;
{
 int KeWaitForSingleObject_tmp_ndt_9 ;
int retres7 ;
							int KeWaitForSingleObject_Object ; int KeWaitForSingleObject_WaitReason ; int KeWaitForSingleObject_WaitMode ; int KeWaitForSingleObject_Alertable ; int KeWaitForSingleObject_Timeout ;
							KeWaitForSingleObject_Object = FloppyStartDevice_doneEvent;
							KeWaitForSingleObject_WaitReason = Executive;
							KeWaitForSingleObject_WaitMode = KernelMode;
							KeWaitForSingleObject_Alertable = 0;
							KeWaitForSingleObject_Timeout = 0;
							s = NP;
							setEventCalled = 0;
L31:;
							FloppyStartDevice_ntStatus = TRACER_RV;
							TRACER_RV = nondet();
							goto L5;
}
						}
						else {
							goto L30;
						}
					}
					else {
						goto L29;
					}
}
}
}
}
}
				}
				else if(FloppyPnp_irpSp__MinorFunction < 0) {
L32:;
					safety = safety + (s - NP);
					s = SKIP1;
					FloppyPnp_Irp__CurrentLocation = FloppyPnp_Irp__CurrentLocation + 1;
					FloppyPnp_Irp__Tail__Overlay__CurrentStackLocation = FloppyPnp_Irp__Tail__Overlay__CurrentStackLocation + 1;
{
 int IofCallDriver_returnVal2 ;
int IofCallDriver_compRetStatus1 ;
int IofCallDriver_lcontext ;
int IofCallDriver_CIL___Tmp7 ;
int IofCallDriver_tmp_ndt_7 ;
int IofCallDriver_tmp_ndt_8 ;
					int IofCallDriver_DeviceObject ; int IofCallDriver_Irp ;
					IofCallDriver_DeviceObject = FloppyPnp_disketteExtension__TargetObject;
					IofCallDriver_Irp = FloppyPnp_Irp;
					IofCallDriver_tmp_ndt_7 = __VERIFIER_nondet_int();
					if(IofCallDriver_tmp_ndt_7 >= 0 && IofCallDriver_tmp_ndt_7 <= 0) {
						IofCallDriver_returnVal2 = 0;
						safety = safety + (s - SKIP1);
						s = SKIP2;
						lowerDriverReturn = IofCallDriver_returnVal2;
						TRACER_RV = (IofCallDriver_returnVal2);
						FloppyPnp_ntStatus = TRACER_RV;
						TRACER_RV = nondet();
L33:;
						PagingReferenceCount = PagingReferenceCount - 1;
						retres31 = FloppyPnp_ntStatus;
L34:;
						TRACER_RV = (retres31);
						main_status = TRACER_RV;
						TRACER_RV = nondet();
L35:;
L36:;
						safety = safety + (main_status - lowerDriverReturn);
						goto L4;
					}
					else if(IofCallDriver_tmp_ndt_7 < 0) {
L37:;
						IofCallDriver_tmp_ndt_8 = __VERIFIER_nondet_int();
						if(IofCallDriver_tmp_ndt_8 >= 1 && IofCallDriver_tmp_ndt_8 <= 1) {
							IofCallDriver_returnVal2 = -1073741823;
							safety = safety + (s - SKIP1);
							s = SKIP2;
							lowerDriverReturn = IofCallDriver_returnVal2;
							TRACER_RV = (IofCallDriver_returnVal2);
							FloppyPnp_ntStatus = TRACER_RV;
							TRACER_RV = nondet();
L38:;
							PagingReferenceCount = PagingReferenceCount - 1;
							retres31 = FloppyPnp_ntStatus;
L39:;
							TRACER_RV = (retres31);
							main_status = TRACER_RV;
							TRACER_RV = nondet();
L40:;
							goto L36;
						}
						else if(IofCallDriver_tmp_ndt_8 < 1) {
L41:;
							IofCallDriver_returnVal2 = 259;
							safety = safety + (s - SKIP1);
							s = SKIP2;
							lowerDriverReturn = IofCallDriver_returnVal2;
							TRACER_RV = (IofCallDriver_returnVal2);
							FloppyPnp_ntStatus = TRACER_RV;
							TRACER_RV = nondet();
L42:;
							PagingReferenceCount = PagingReferenceCount - 1;
							retres31 = FloppyPnp_ntStatus;
L43:;
							TRACER_RV = (retres31);
							main_status = TRACER_RV;
							TRACER_RV = nondet();
L44:;
							goto L36;
						}
						else {
							goto L41;
						}
					}
					else {
						goto L37;
					}
}
				}
				else {
					if(FloppyPnp_irpSp__MinorFunction >= 5 && FloppyPnp_irpSp__MinorFunction <= 5) {
						if(FloppyPnp_disketteExtension__IsStarted >= 0 && FloppyPnp_disketteExtension__IsStarted <= 0) {
							safety = safety + (s - NP);
							s = SKIP1;
							FloppyPnp_Irp__CurrentLocation = FloppyPnp_Irp__CurrentLocation + 1;
							FloppyPnp_Irp__Tail__Overlay__CurrentStackLocation = FloppyPnp_Irp__Tail__Overlay__CurrentStackLocation + 1;
{
 int IofCallDriver_returnVal2 ;
int IofCallDriver_compRetStatus1 ;
int IofCallDriver_lcontext ;
int IofCallDriver_CIL___Tmp7 ;
int IofCallDriver_tmp_ndt_7 ;
int IofCallDriver_tmp_ndt_8 ;
							int IofCallDriver_DeviceObject ; int IofCallDriver_Irp ;
							IofCallDriver_DeviceObject = FloppyPnp_disketteExtension__TargetObject;
							IofCallDriver_Irp = FloppyPnp_Irp;
							IofCallDriver_tmp_ndt_7 = __VERIFIER_nondet_int();
							if(IofCallDriver_tmp_ndt_7 >= 0 && IofCallDriver_tmp_ndt_7 <= 0) {
								IofCallDriver_returnVal2 = 0;
								safety = safety + (s - SKIP1);
								s = SKIP2;
								lowerDriverReturn = IofCallDriver_returnVal2;
								TRACER_RV = (IofCallDriver_returnVal2);
								FloppyPnp_ntStatus = TRACER_RV;
								TRACER_RV = nondet();
								retres31 = FloppyPnp_ntStatus;
								TRACER_returning = 1;
L45:;
								goto L34;
							}
							else if(IofCallDriver_tmp_ndt_7 < 0) {
L46:;
								IofCallDriver_tmp_ndt_8 = __VERIFIER_nondet_int();
								if(IofCallDriver_tmp_ndt_8 >= 1 && IofCallDriver_tmp_ndt_8 <= 1) {
									IofCallDriver_returnVal2 = -1073741823;
									safety = safety + (s - SKIP1);
									s = SKIP2;
									lowerDriverReturn = IofCallDriver_returnVal2;
									TRACER_RV = (IofCallDriver_returnVal2);
									FloppyPnp_ntStatus = TRACER_RV;
									TRACER_RV = nondet();
									retres31 = FloppyPnp_ntStatus;
									TRACER_returning = 1;
L47:;
									goto L39;
								}
								else if(IofCallDriver_tmp_ndt_8 < 1) {
L48:;
									IofCallDriver_returnVal2 = 259;
									safety = safety + (s - SKIP1);
									s = SKIP2;
									lowerDriverReturn = IofCallDriver_returnVal2;
									TRACER_RV = (IofCallDriver_returnVal2);
									FloppyPnp_ntStatus = TRACER_RV;
									TRACER_RV = nondet();
									retres31 = FloppyPnp_ntStatus;
									TRACER_returning = 1;
L49:;
									goto L43;
								}
								else {
									goto L48;
								}
							}
							else {
								goto L46;
							}
}
						}
						else if(FloppyPnp_disketteExtension__IsStarted < 0) {
L50:;
{
 int FlQueueIrpToThread_status ;
int FlQueueIrpToThread_threadHandle ;
int FlQueueIrpToThread_DisketteExtension__PoweringDown ;
int FlQueueIrpToThread_DisketteExtension__ThreadReferenceCount ;
int FlQueueIrpToThread_DisketteExtension__FloppyThread ;
int FlQueueIrpToThread_Irp__IoStatus__Status ;
int FlQueueIrpToThread_Irp__IoStatus__Information ;
int FlQueueIrpToThread_ObjAttributes ;
int retres11 ;
int TRACER_returning ;
							int FlQueueIrpToThread_Irp ; int FlQueueIrpToThread_DisketteExtension ;
							FlQueueIrpToThread_Irp = FloppyPnp_Irp;
							FlQueueIrpToThread_DisketteExtension = FloppyPnp_disketteExtension;
							TRACER_returning = 0;
							if(FlQueueIrpToThread_DisketteExtension__PoweringDown >= 1 && FlQueueIrpToThread_DisketteExtension__PoweringDown <= 1) {
								myStatus = -1073741101;
								FlQueueIrpToThread_Irp__IoStatus__Status = -1073741101;
								FlQueueIrpToThread_Irp__IoStatus__Information = 0;
								retres11 = -1073741101;
								TRACER_RV = (retres11);
								FloppyPnp_ntStatus = TRACER_RV;
								TRACER_RV = nondet();
								FloppyPnp_CIL___Tmp29 = FloppyPnp_ntStatus;
L51:;
								FloppyPnp_ntStatus = -1073741823;
								FloppyPnp_Irp__IoStatus__Status = FloppyPnp_ntStatus;
								myStatus = FloppyPnp_ntStatus;
								FloppyPnp_Irp__IoStatus__Information = 0;
{
								int IofCompleteRequest_Irp ; int IofCompleteRequest_PriorityBoost ;
								IofCompleteRequest_Irp = FloppyPnp_Irp;
								IofCompleteRequest_PriorityBoost = 0;
								safety = safety + (s - NP);
								s = DC;
								;
								TRACER_RV = nondet();
								goto L24;
}
							}
							else if(FlQueueIrpToThread_DisketteExtension__PoweringDown < 1) {
L52:;
								FlQueueIrpToThread_DisketteExtension__ThreadReferenceCount = FlQueueIrpToThread_DisketteExtension__ThreadReferenceCount + 1;
								if(FlQueueIrpToThread_DisketteExtension__ThreadReferenceCount >= 0 && FlQueueIrpToThread_DisketteExtension__ThreadReferenceCount <= 0) {
{
 int PsCreateSystemThread_tmp_ndt_11 ;
int retres9 ;
									int PsCreateSystemThread_ThreadHandle ; int PsCreateSystemThread_DesiredAccess ; int PsCreateSystemThread_ObjectAttributes ; int PsCreateSystemThread_ProcessHandle ; int PsCreateSystemThread_ClientId ; int PsCreateSystemThread_StartRoutine ; int PsCreateSystemThread_StartContext ;
									PsCreateSystemThread_ThreadHandle = FlQueueIrpToThread_threadHandle;
									PsCreateSystemThread_DesiredAccess = 0;
									PsCreateSystemThread_ObjectAttributes = FlQueueIrpToThread_ObjAttributes;
									PsCreateSystemThread_ProcessHandle = 0;
									PsCreateSystemThread_ClientId = 0;
									PsCreateSystemThread_StartRoutine = FloppyThread;
									PsCreateSystemThread_StartContext = FlQueueIrpToThread_DisketteExtension;
									PsCreateSystemThread_tmp_ndt_11 = __VERIFIER_nondet_int();
									if(PsCreateSystemThread_tmp_ndt_11 >= 0 && PsCreateSystemThread_tmp_ndt_11 <= 0) {
										retres9 = 0;
										TRACER_RV = (retres9);
										FlQueueIrpToThread_status = TRACER_RV;
										TRACER_RV = nondet();
{
 int ObReferenceObjectByHandle_tmp_ndt_10 ;
int retres8 ;
										int ObReferenceObjectByHandle_Handle ; int ObReferenceObjectByHandle_DesiredAccess ; int ObReferenceObjectByHandle_ObjectType ; int ObReferenceObjectByHandle_AccessMode ; int ObReferenceObjectByHandle_Object ; int ObReferenceObjectByHandle_HandleInformation ;
										ObReferenceObjectByHandle_Handle = FlQueueIrpToThread_threadHandle;
										ObReferenceObjectByHandle_DesiredAccess = 1048576;
										ObReferenceObjectByHandle_ObjectType = 0;
										ObReferenceObjectByHandle_AccessMode = KernelMode;
										ObReferenceObjectByHandle_Object = FlQueueIrpToThread_DisketteExtension__FloppyThread;
										ObReferenceObjectByHandle_HandleInformation = 0;
										ObReferenceObjectByHandle_tmp_ndt_10 = __VERIFIER_nondet_int();
										if(ObReferenceObjectByHandle_tmp_ndt_10 >= 0 && ObReferenceObjectByHandle_tmp_ndt_10 <= 0) {
											FlQueueIrpToThread_status = TRACER_RV;
											TRACER_RV = nondet();
{
 int ZwClose_tmp_ndt_12 ;
int retres3 ;
											int ZwClose_Handle ;
											ZwClose_Handle = FlQueueIrpToThread_threadHandle;
L53:;
											;
											TRACER_RV = nondet();
L54:;
											safety = safety + (pended - 0);
											pended = 1;
											retres11 = 259;
											TRACER_RV = (retres11);
											FloppyPnp_ntStatus = TRACER_RV;
											TRACER_RV = nondet();
											FloppyPnp_CIL___Tmp29 = FloppyPnp_ntStatus;
{
 int KeWaitForSingleObject_tmp_ndt_9 ;
int retres7 ;
											int KeWaitForSingleObject_Object ; int KeWaitForSingleObject_WaitReason ; int KeWaitForSingleObject_WaitMode ; int KeWaitForSingleObject_Alertable ; int KeWaitForSingleObject_Timeout ;
											KeWaitForSingleObject_Object = FloppyPnp_disketteExtension__FloppyThread;
											KeWaitForSingleObject_WaitReason = Executive;
											KeWaitForSingleObject_WaitMode = KernelMode;
											KeWaitForSingleObject_Alertable = 0;
											KeWaitForSingleObject_Timeout = 0;
L55:;
											;
											TRACER_RV = nondet();
											FloppyPnp_disketteExtension__FloppyThread = 0;
											FloppyPnp_Irp__IoStatus__Status = 0;
											myStatus = 0;
											safety = safety + (s - NP);
											s = SKIP1;
											FloppyPnp_Irp__CurrentLocation = FloppyPnp_Irp__CurrentLocation + 1;
											FloppyPnp_Irp__Tail__Overlay__CurrentStackLocation = FloppyPnp_Irp__Tail__Overlay__CurrentStackLocation + 1;
{
 int IofCallDriver_returnVal2 ;
int IofCallDriver_compRetStatus1 ;
int IofCallDriver_lcontext ;
int IofCallDriver_CIL___Tmp7 ;
int IofCallDriver_tmp_ndt_7 ;
int IofCallDriver_tmp_ndt_8 ;
											int IofCallDriver_DeviceObject ; int IofCallDriver_Irp ;
											IofCallDriver_DeviceObject = FloppyPnp_disketteExtension__TargetObject;
											IofCallDriver_Irp = FloppyPnp_Irp;
											IofCallDriver_tmp_ndt_7 = __VERIFIER_nondet_int();
											if(IofCallDriver_tmp_ndt_7 >= 0 && IofCallDriver_tmp_ndt_7 <= 0) {
												safety = safety + (s - SKIP1);
												s = SKIP2;
												lowerDriverReturn = IofCallDriver_returnVal2;
												FloppyPnp_ntStatus = TRACER_RV;
												TRACER_RV = nondet();
L56:;
												main_status = TRACER_RV;
												TRACER_RV = nondet();
L57:;
L58:;
												goto L4;
											}
											else if(IofCallDriver_tmp_ndt_7 < 0) {
L59:;
												IofCallDriver_tmp_ndt_8 = __VERIFIER_nondet_int();
												if(IofCallDriver_tmp_ndt_8 >= 1 && IofCallDriver_tmp_ndt_8 <= 1) {
													IofCallDriver_returnVal2 = -1073741823;
													safety = safety + (s - SKIP1);
													s = SKIP2;
													lowerDriverReturn = IofCallDriver_returnVal2;
													TRACER_RV = (IofCallDriver_returnVal2);
													FloppyPnp_ntStatus = TRACER_RV;
													TRACER_RV = nondet();
L60:;
													PagingReferenceCount = PagingReferenceCount - 1;
													retres31 = FloppyPnp_ntStatus;
													TRACER_RV = (retres31);
													main_status = TRACER_RV;
													TRACER_RV = nondet();
L61:;
													goto L58;
												}
												else if(IofCallDriver_tmp_ndt_8 < 1) {
L62:;
													IofCallDriver_returnVal2 = 259;
													safety = safety + (s - SKIP1);
													s = SKIP2;
													lowerDriverReturn = IofCallDriver_returnVal2;
													TRACER_RV = (IofCallDriver_returnVal2);
													FloppyPnp_ntStatus = TRACER_RV;
													TRACER_RV = nondet();
L63:;
													PagingReferenceCount = PagingReferenceCount - 1;
													retres31 = FloppyPnp_ntStatus;
													TRACER_RV = (retres31);
													main_status = TRACER_RV;
													TRACER_RV = nondet();
L64:;
													goto L58;
												}
												else {
													goto L62;
												}
											}
											else {
												goto L59;
											}
}
}
}
										}
										else if(ObReferenceObjectByHandle_tmp_ndt_10 < 0) {
L65:;
											retres8 = -1073741823;
											TRACER_RV = (retres8);
											FlQueueIrpToThread_status = TRACER_RV;
											TRACER_RV = nondet();
{
 int ZwClose_tmp_ndt_12 ;
int retres3 ;
											int ZwClose_Handle ;
											ZwClose_Handle = FlQueueIrpToThread_threadHandle;
L66:;
											;
											TRACER_RV = nondet();
											retres11 = FlQueueIrpToThread_status;
											TRACER_returning = 1;
L67:;
											TRACER_RV = (retres11);
											FloppyPnp_ntStatus = TRACER_RV;
											TRACER_RV = nondet();
											FloppyPnp_CIL___Tmp29 = FloppyPnp_ntStatus;
											goto L51;
}
										}
										else {
											goto L65;
										}
}
									}
									else if(PsCreateSystemThread_tmp_ndt_11 < 0) {
L68:;
										retres9 = -1073741823;
										TRACER_RV = (retres9);
										FlQueueIrpToThread_status = TRACER_RV;
										TRACER_RV = nondet();
										FlQueueIrpToThread_DisketteExtension__ThreadReferenceCount = -1;
										PagingReferenceCount = PagingReferenceCount - 1;
										retres11 = FlQueueIrpToThread_status;
										TRACER_returning = 1;
										goto L67;
									}
									else {
										goto L68;
									}
}
								}
								else if(FlQueueIrpToThread_DisketteExtension__ThreadReferenceCount < 0) {
									goto L54;
								}
								else {
									goto L54;
								}
							}
							else {
								goto L52;
							}
}
						}
						else {
							goto L50;
						}
					}
					else if(FloppyPnp_irpSp__MinorFunction < 5) {
						if(FloppyPnp_irpSp__MinorFunction >= 1 && FloppyPnp_irpSp__MinorFunction <= 1) {
							if(FloppyPnp_disketteExtension__IsStarted >= 0 && FloppyPnp_disketteExtension__IsStarted <= 0) {
								safety = safety + (s - NP);
								s = SKIP1;
								FloppyPnp_Irp__CurrentLocation = FloppyPnp_Irp__CurrentLocation + 1;
								FloppyPnp_Irp__Tail__Overlay__CurrentStackLocation = FloppyPnp_Irp__Tail__Overlay__CurrentStackLocation + 1;
{
 int IofCallDriver_returnVal2 ;
int IofCallDriver_compRetStatus1 ;
int IofCallDriver_lcontext ;
int IofCallDriver_CIL___Tmp7 ;
int IofCallDriver_tmp_ndt_7 ;
int IofCallDriver_tmp_ndt_8 ;
								int IofCallDriver_DeviceObject ; int IofCallDriver_Irp ;
								IofCallDriver_DeviceObject = FloppyPnp_disketteExtension__TargetObject;
								IofCallDriver_Irp = FloppyPnp_Irp;
								IofCallDriver_tmp_ndt_7 = __VERIFIER_nondet_int();
								if(IofCallDriver_tmp_ndt_7 >= 0 && IofCallDriver_tmp_ndt_7 <= 0) {
									IofCallDriver_returnVal2 = 0;
									safety = safety + (s - SKIP1);
									s = SKIP2;
									lowerDriverReturn = IofCallDriver_returnVal2;
									TRACER_RV = (IofCallDriver_returnVal2);
									FloppyPnp_ntStatus = TRACER_RV;
									TRACER_RV = nondet();
									retres31 = FloppyPnp_ntStatus;
									TRACER_returning = 1;
									goto L45;
								}
								else if(IofCallDriver_tmp_ndt_7 < 0) {
L69:;
									IofCallDriver_tmp_ndt_8 = __VERIFIER_nondet_int();
									if(IofCallDriver_tmp_ndt_8 >= 1 && IofCallDriver_tmp_ndt_8 <= 1) {
										IofCallDriver_returnVal2 = -1073741823;
										safety = safety + (s - SKIP1);
										s = SKIP2;
										lowerDriverReturn = IofCallDriver_returnVal2;
										TRACER_RV = (IofCallDriver_returnVal2);
										FloppyPnp_ntStatus = TRACER_RV;
										TRACER_RV = nondet();
										retres31 = FloppyPnp_ntStatus;
										TRACER_returning = 1;
										goto L47;
									}
									else if(IofCallDriver_tmp_ndt_8 < 1) {
L70:;
										IofCallDriver_returnVal2 = 259;
										safety = safety + (s - SKIP1);
										s = SKIP2;
										lowerDriverReturn = IofCallDriver_returnVal2;
										TRACER_RV = (IofCallDriver_returnVal2);
										FloppyPnp_ntStatus = TRACER_RV;
										TRACER_RV = nondet();
										retres31 = FloppyPnp_ntStatus;
										TRACER_returning = 1;
										goto L49;
									}
									else {
										goto L70;
									}
								}
								else {
									goto L69;
								}
}
							}
							else if(FloppyPnp_disketteExtension__IsStarted < 0) {
L71:;
{
 int FlQueueIrpToThread_status ;
int FlQueueIrpToThread_threadHandle ;
int FlQueueIrpToThread_DisketteExtension__PoweringDown ;
int FlQueueIrpToThread_DisketteExtension__ThreadReferenceCount ;
int FlQueueIrpToThread_DisketteExtension__FloppyThread ;
int FlQueueIrpToThread_Irp__IoStatus__Status ;
int FlQueueIrpToThread_Irp__IoStatus__Information ;
int FlQueueIrpToThread_ObjAttributes ;
int retres11 ;
int TRACER_returning ;
								int FlQueueIrpToThread_Irp ; int FlQueueIrpToThread_DisketteExtension ;
								FlQueueIrpToThread_Irp = FloppyPnp_Irp;
								FlQueueIrpToThread_DisketteExtension = FloppyPnp_disketteExtension;
								TRACER_returning = 0;
								if(FlQueueIrpToThread_DisketteExtension__PoweringDown >= 1 && FlQueueIrpToThread_DisketteExtension__PoweringDown <= 1) {
									myStatus = -1073741101;
									FlQueueIrpToThread_Irp__IoStatus__Status = -1073741101;
									FlQueueIrpToThread_Irp__IoStatus__Information = 0;
									retres11 = -1073741101;
									TRACER_RV = (retres11);
									FloppyPnp_ntStatus = TRACER_RV;
									TRACER_RV = nondet();
									FloppyPnp_CIL___Tmp29 = FloppyPnp_ntStatus;
L72:;
									FloppyPnp_ntStatus = -1073741823;
									FloppyPnp_Irp__IoStatus__Status = FloppyPnp_ntStatus;
									myStatus = FloppyPnp_ntStatus;
									FloppyPnp_Irp__IoStatus__Information = 0;
{
									int IofCompleteRequest_Irp ; int IofCompleteRequest_PriorityBoost ;
									IofCompleteRequest_Irp = FloppyPnp_Irp;
									IofCompleteRequest_PriorityBoost = 0;
									safety = safety + (s - NP);
									s = DC;
									;
									TRACER_RV = nondet();
									goto L24;
}
								}
								else if(FlQueueIrpToThread_DisketteExtension__PoweringDown < 1) {
L73:;
									FlQueueIrpToThread_DisketteExtension__ThreadReferenceCount = FlQueueIrpToThread_DisketteExtension__ThreadReferenceCount + 1;
									if(FlQueueIrpToThread_DisketteExtension__ThreadReferenceCount >= 0 && FlQueueIrpToThread_DisketteExtension__ThreadReferenceCount <= 0) {
{
 int PsCreateSystemThread_tmp_ndt_11 ;
int retres9 ;
										int PsCreateSystemThread_ThreadHandle ; int PsCreateSystemThread_DesiredAccess ; int PsCreateSystemThread_ObjectAttributes ; int PsCreateSystemThread_ProcessHandle ; int PsCreateSystemThread_ClientId ; int PsCreateSystemThread_StartRoutine ; int PsCreateSystemThread_StartContext ;
										PsCreateSystemThread_ThreadHandle = FlQueueIrpToThread_threadHandle;
										PsCreateSystemThread_DesiredAccess = 0;
										PsCreateSystemThread_ObjectAttributes = FlQueueIrpToThread_ObjAttributes;
										PsCreateSystemThread_ProcessHandle = 0;
										PsCreateSystemThread_ClientId = 0;
										PsCreateSystemThread_StartRoutine = FloppyThread;
										PsCreateSystemThread_StartContext = FlQueueIrpToThread_DisketteExtension;
										PsCreateSystemThread_tmp_ndt_11 = __VERIFIER_nondet_int();
										if(PsCreateSystemThread_tmp_ndt_11 >= 0 && PsCreateSystemThread_tmp_ndt_11 <= 0) {
											retres9 = 0;
											TRACER_RV = (retres9);
											FlQueueIrpToThread_status = TRACER_RV;
											TRACER_RV = nondet();
{
 int ObReferenceObjectByHandle_tmp_ndt_10 ;
int retres8 ;
											int ObReferenceObjectByHandle_Handle ; int ObReferenceObjectByHandle_DesiredAccess ; int ObReferenceObjectByHandle_ObjectType ; int ObReferenceObjectByHandle_AccessMode ; int ObReferenceObjectByHandle_Object ; int ObReferenceObjectByHandle_HandleInformation ;
											ObReferenceObjectByHandle_Handle = FlQueueIrpToThread_threadHandle;
											ObReferenceObjectByHandle_DesiredAccess = 1048576;
											ObReferenceObjectByHandle_ObjectType = 0;
											ObReferenceObjectByHandle_AccessMode = KernelMode;
											ObReferenceObjectByHandle_Object = FlQueueIrpToThread_DisketteExtension__FloppyThread;
											ObReferenceObjectByHandle_HandleInformation = 0;
											ObReferenceObjectByHandle_tmp_ndt_10 = __VERIFIER_nondet_int();
											if(ObReferenceObjectByHandle_tmp_ndt_10 >= 0 && ObReferenceObjectByHandle_tmp_ndt_10 <= 0) {
												retres8 = 0;
												TRACER_RV = (retres8);
												FlQueueIrpToThread_status = TRACER_RV;
												TRACER_RV = nondet();
{
 int ZwClose_tmp_ndt_12 ;
int retres3 ;
												int ZwClose_Handle ;
												ZwClose_Handle = FlQueueIrpToThread_threadHandle;
L74:;
												;
												TRACER_RV = nondet();
L75:;
												safety = safety + (pended - 0);
												pended = 1;
												retres11 = 259;
												TRACER_RV = (retres11);
												FloppyPnp_ntStatus = TRACER_RV;
												TRACER_RV = nondet();
												FloppyPnp_CIL___Tmp29 = FloppyPnp_ntStatus;
{
 int KeWaitForSingleObject_tmp_ndt_9 ;
int retres7 ;
												int KeWaitForSingleObject_Object ; int KeWaitForSingleObject_WaitReason ; int KeWaitForSingleObject_WaitMode ; int KeWaitForSingleObject_Alertable ; int KeWaitForSingleObject_Timeout ;
												KeWaitForSingleObject_Object = FloppyPnp_disketteExtension__FloppyThread;
												KeWaitForSingleObject_WaitReason = Executive;
												KeWaitForSingleObject_WaitMode = KernelMode;
												KeWaitForSingleObject_Alertable = 0;
												KeWaitForSingleObject_Timeout = 0;
L76:;
												;
												TRACER_RV = nondet();
												FloppyPnp_disketteExtension__FloppyThread = 0;
												FloppyPnp_Irp__IoStatus__Status = 0;
												myStatus = 0;
												safety = safety + (s - NP);
												s = SKIP1;
												FloppyPnp_Irp__CurrentLocation = FloppyPnp_Irp__CurrentLocation + 1;
												FloppyPnp_Irp__Tail__Overlay__CurrentStackLocation = FloppyPnp_Irp__Tail__Overlay__CurrentStackLocation + 1;
{
 int IofCallDriver_returnVal2 ;
int IofCallDriver_compRetStatus1 ;
int IofCallDriver_lcontext ;
int IofCallDriver_CIL___Tmp7 ;
int IofCallDriver_tmp_ndt_7 ;
int IofCallDriver_tmp_ndt_8 ;
												int IofCallDriver_DeviceObject ; int IofCallDriver_Irp ;
												IofCallDriver_DeviceObject = FloppyPnp_disketteExtension__TargetObject;
												IofCallDriver_Irp = FloppyPnp_Irp;
												IofCallDriver_tmp_ndt_7 = __VERIFIER_nondet_int();
												if(IofCallDriver_tmp_ndt_7 >= 0 && IofCallDriver_tmp_ndt_7 <= 0) {
													safety = safety + (s - SKIP1);
													s = SKIP2;
													lowerDriverReturn = IofCallDriver_returnVal2;
													FloppyPnp_ntStatus = TRACER_RV;
													TRACER_RV = nondet();
													goto L56;
												}
												else if(IofCallDriver_tmp_ndt_7 < 0) {
L77:;
													IofCallDriver_tmp_ndt_8 = __VERIFIER_nondet_int();
													if(IofCallDriver_tmp_ndt_8 >= 1 && IofCallDriver_tmp_ndt_8 <= 1) {
														IofCallDriver_returnVal2 = -1073741823;
														safety = safety + (s - SKIP1);
														s = SKIP2;
														lowerDriverReturn = IofCallDriver_returnVal2;
														TRACER_RV = (IofCallDriver_returnVal2);
														FloppyPnp_ntStatus = TRACER_RV;
														TRACER_RV = nondet();
														goto L60;
													}
													else if(IofCallDriver_tmp_ndt_8 < 1) {
L78:;
														IofCallDriver_returnVal2 = 259;
														safety = safety + (s - SKIP1);
														s = SKIP2;
														lowerDriverReturn = IofCallDriver_returnVal2;
														TRACER_RV = (IofCallDriver_returnVal2);
														FloppyPnp_ntStatus = TRACER_RV;
														TRACER_RV = nondet();
														goto L63;
													}
													else {
														goto L78;
													}
												}
												else {
													goto L77;
												}
}
}
}
											}
											else if(ObReferenceObjectByHandle_tmp_ndt_10 < 0) {
L79:;
												retres8 = -1073741823;
												TRACER_RV = (retres8);
												FlQueueIrpToThread_status = TRACER_RV;
												TRACER_RV = nondet();
{
 int ZwClose_tmp_ndt_12 ;
int retres3 ;
												int ZwClose_Handle ;
												ZwClose_Handle = FlQueueIrpToThread_threadHandle;
L80:;
												;
												TRACER_RV = nondet();
												retres11 = FlQueueIrpToThread_status;
												TRACER_returning = 1;
L81:;
												TRACER_RV = (retres11);
												FloppyPnp_ntStatus = TRACER_RV;
												TRACER_RV = nondet();
												FloppyPnp_CIL___Tmp29 = FloppyPnp_ntStatus;
												goto L72;
}
											}
											else {
												goto L79;
											}
}
										}
										else if(PsCreateSystemThread_tmp_ndt_11 < 0) {
L82:;
											retres9 = -1073741823;
											TRACER_RV = (retres9);
											FlQueueIrpToThread_status = TRACER_RV;
											TRACER_RV = nondet();
											FlQueueIrpToThread_DisketteExtension__ThreadReferenceCount = -1;
											PagingReferenceCount = PagingReferenceCount - 1;
											retres11 = FlQueueIrpToThread_status;
											TRACER_returning = 1;
											goto L81;
										}
										else {
											goto L82;
										}
}
									}
									else if(FlQueueIrpToThread_DisketteExtension__ThreadReferenceCount < 0) {
										goto L75;
									}
									else {
										goto L75;
									}
								}
								else {
									goto L73;
								}
}
							}
							else {
								goto L71;
							}
						}
						else if(FloppyPnp_irpSp__MinorFunction < 1) {
							goto L32;
						}
						else {
L83:;
							if(FloppyPnp_irpSp__MinorFunction >= 3 && FloppyPnp_irpSp__MinorFunction <= 3) {
								if(FloppyPnp_disketteExtension__IsStarted >= 0 && FloppyPnp_disketteExtension__IsStarted <= 0) {
									FloppyPnp_Irp__IoStatus__Status = 0;
									myStatus = 0;
									safety = safety + (s - NP);
									s = SKIP1;
									FloppyPnp_Irp__CurrentLocation = FloppyPnp_Irp__CurrentLocation + 1;
									FloppyPnp_Irp__Tail__Overlay__CurrentStackLocation = FloppyPnp_Irp__Tail__Overlay__CurrentStackLocation + 1;
{
 int IofCallDriver_returnVal2 ;
int IofCallDriver_compRetStatus1 ;
int IofCallDriver_lcontext ;
int IofCallDriver_CIL___Tmp7 ;
int IofCallDriver_tmp_ndt_7 ;
int IofCallDriver_tmp_ndt_8 ;
									int IofCallDriver_DeviceObject ; int IofCallDriver_Irp ;
									IofCallDriver_DeviceObject = FloppyPnp_disketteExtension__TargetObject;
									IofCallDriver_Irp = FloppyPnp_Irp;
									IofCallDriver_tmp_ndt_7 = __VERIFIER_nondet_int();
									if(IofCallDriver_tmp_ndt_7 >= 0 && IofCallDriver_tmp_ndt_7 <= 0) {
										IofCallDriver_returnVal2 = 0;
										safety = safety + (s - SKIP1);
										s = SKIP2;
										lowerDriverReturn = IofCallDriver_returnVal2;
										TRACER_RV = (IofCallDriver_returnVal2);
										FloppyPnp_ntStatus = TRACER_RV;
										TRACER_RV = nondet();
										goto L33;
									}
									else if(IofCallDriver_tmp_ndt_7 < 0) {
L84:;
										IofCallDriver_tmp_ndt_8 = __VERIFIER_nondet_int();
										if(IofCallDriver_tmp_ndt_8 >= 1 && IofCallDriver_tmp_ndt_8 <= 1) {
											IofCallDriver_returnVal2 = -1073741823;
											safety = safety + (s - SKIP1);
											s = SKIP2;
											lowerDriverReturn = IofCallDriver_returnVal2;
											TRACER_RV = (IofCallDriver_returnVal2);
											FloppyPnp_ntStatus = TRACER_RV;
											TRACER_RV = nondet();
											goto L38;
										}
										else if(IofCallDriver_tmp_ndt_8 < 1) {
L85:;
											IofCallDriver_returnVal2 = 259;
											safety = safety + (s - SKIP1);
											s = SKIP2;
											lowerDriverReturn = IofCallDriver_returnVal2;
											TRACER_RV = (IofCallDriver_returnVal2);
											FloppyPnp_ntStatus = TRACER_RV;
											TRACER_RV = nondet();
											goto L42;
										}
										else {
											goto L85;
										}
									}
									else {
										goto L84;
									}
}
								}
								else if(FloppyPnp_disketteExtension__IsStarted < 0) {
L86:;
									FloppyPnp_Irp__IoStatus__Status = 0;
									myStatus = 0;
									FloppyPnp_irpSp___0 = FloppyPnp_Irp__Tail__Overlay__CurrentStackLocation;
									FloppyPnp_nextIrpSp = FloppyPnp_Irp__Tail__Overlay__CurrentStackLocation - 1;
									FloppyPnp_nextIrpSp__Control = 0;
									safety = safety + (s - NP);
									safety = safety + (compRegistered - 0);
									compRegistered = 1;
									FloppyPnp_irpSp___1 = FloppyPnp_Irp__Tail__Overlay__CurrentStackLocation - 1;
									FloppyPnp_irpSp__Context = FloppyPnp_doneEvent;
									FloppyPnp_irpSp__Control = 224;
{
 int IofCallDriver_returnVal2 ;
int IofCallDriver_compRetStatus1 ;
int IofCallDriver_lcontext ;
int IofCallDriver_CIL___Tmp7 ;
int IofCallDriver_tmp_ndt_7 ;
int IofCallDriver_tmp_ndt_8 ;
									int IofCallDriver_DeviceObject ; int IofCallDriver_Irp ;
									IofCallDriver_DeviceObject = FloppyPnp_disketteExtension__TargetObject;
									IofCallDriver_Irp = FloppyPnp_Irp;
{
 int retres4 ;
									int FloppyPnpComplete_DeviceObject ; int FloppyPnpComplete_Irp ; int FloppyPnpComplete_Context ;
									FloppyPnpComplete_DeviceObject = IofCallDriver_DeviceObject;
									FloppyPnpComplete_Irp = IofCallDriver_Irp;
									FloppyPnpComplete_Context = IofCallDriver_lcontext;
{
 int KeSetEvent_l ;
									int KeSetEvent_Event ; int KeSetEvent_Increment ; int KeSetEvent_Wait ;
									KeSetEvent_Event = FloppyPnpComplete_Context;
									KeSetEvent_Increment = 1;
									KeSetEvent_Wait = 0;
									setEventCalled = 1;
									;
									TRACER_RV = nondet();
									retres4 = -1073741802;
									TRACER_RV = (retres4);
									IofCallDriver_compRetStatus1 = TRACER_RV;
									TRACER_RV = nondet();
									IofCallDriver_CIL___Tmp7 = IofCallDriver_compRetStatus1;
{
									safety = safety + (s - NP);
									s = MPR1;
									;
									TRACER_RV = nondet();
									IofCallDriver_tmp_ndt_7 = __VERIFIER_nondet_int();
									if(IofCallDriver_tmp_ndt_7 >= 0 && IofCallDriver_tmp_ndt_7 <= 0) {
										IofCallDriver_returnVal2 = 0;
										s = NP;
										lowerDriverReturn = IofCallDriver_returnVal2;
										TRACER_RV = (IofCallDriver_returnVal2);
										FloppyPnp_ntStatus = TRACER_RV;
										TRACER_RV = nondet();
L87:;
{
										int IofCompleteRequest_Irp ; int IofCompleteRequest_PriorityBoost ;
										IofCompleteRequest_Irp = FloppyPnp_Irp;
										IofCompleteRequest_PriorityBoost = 0;
										safety = safety + (s - NP);
										s = DC;
										;
										TRACER_RV = nondet();
										goto L18;
}
									}
									else if(IofCallDriver_tmp_ndt_7 < 0) {
L88:;
										IofCallDriver_tmp_ndt_8 = __VERIFIER_nondet_int();
										if(IofCallDriver_tmp_ndt_8 >= 1 && IofCallDriver_tmp_ndt_8 <= 1) {
											IofCallDriver_returnVal2 = -1073741823;
											s = NP;
											lowerDriverReturn = IofCallDriver_returnVal2;
											TRACER_RV = (IofCallDriver_returnVal2);
											FloppyPnp_ntStatus = TRACER_RV;
											TRACER_RV = nondet();
{
											int IofCompleteRequest_Irp ; int IofCompleteRequest_PriorityBoost ;
											IofCompleteRequest_Irp = FloppyPnp_Irp;
											IofCompleteRequest_PriorityBoost = 0;
											safety = safety + (s - NP);
											s = DC;
											;
											TRACER_RV = nondet();
											goto L24;
}
										}
										else if(IofCallDriver_tmp_ndt_8 < 1) {
L89:;
											IofCallDriver_returnVal2 = 259;
											s = MPR3;
											lowerDriverReturn = IofCallDriver_returnVal2;
											TRACER_RV = (IofCallDriver_returnVal2);
											FloppyPnp_ntStatus = TRACER_RV;
											TRACER_RV = nondet();
											FloppyPnp_CIL___Tmp30 = FloppyPnp_ntStatus;
{
 int KeWaitForSingleObject_tmp_ndt_9 ;
int retres7 ;
											int KeWaitForSingleObject_Object ; int KeWaitForSingleObject_WaitReason ; int KeWaitForSingleObject_WaitMode ; int KeWaitForSingleObject_Alertable ; int KeWaitForSingleObject_Timeout ;
											KeWaitForSingleObject_Object = FloppyPnp_doneEvent;
											KeWaitForSingleObject_WaitReason = Executive;
											KeWaitForSingleObject_WaitMode = KernelMode;
											KeWaitForSingleObject_Alertable = 0;
											KeWaitForSingleObject_Timeout = 0;
											s = NP;
											setEventCalled = 0;
L90:;
											;
											TRACER_RV = nondet();
											FloppyPnp_ntStatus = myStatus;
											goto L87;
}
										}
										else {
											goto L89;
										}
									}
									else {
										goto L88;
									}
}
}
}
}
								}
								else {
									goto L86;
								}
							}
							else if(FloppyPnp_irpSp__MinorFunction < 3) {
L91:;
								if(FloppyPnp_irpSp__MinorFunction >= 2 && FloppyPnp_irpSp__MinorFunction <= 2) {
									FloppyPnp_disketteExtension__HoldNewRequests = 0;
									FloppyPnp_disketteExtension__IsStarted = 0;
									FloppyPnp_disketteExtension__IsRemoved = 1;
									safety = safety + (s - NP);
									s = SKIP1;
									FloppyPnp_Irp__CurrentLocation = FloppyPnp_Irp__CurrentLocation + 1;
									FloppyPnp_Irp__Tail__Overlay__CurrentStackLocation = FloppyPnp_Irp__Tail__Overlay__CurrentStackLocation + 1;
									FloppyPnp_Irp__IoStatus__Status = 0;
									myStatus = 0;
{
 int IofCallDriver_returnVal2 ;
int IofCallDriver_compRetStatus1 ;
int IofCallDriver_lcontext ;
int IofCallDriver_CIL___Tmp7 ;
int IofCallDriver_tmp_ndt_7 ;
int IofCallDriver_tmp_ndt_8 ;
									int IofCallDriver_DeviceObject ; int IofCallDriver_Irp ;
									IofCallDriver_DeviceObject = FloppyPnp_disketteExtension__TargetObject;
									IofCallDriver_Irp = FloppyPnp_Irp;
									IofCallDriver_tmp_ndt_7 = __VERIFIER_nondet_int();
									if(IofCallDriver_tmp_ndt_7 >= 0 && IofCallDriver_tmp_ndt_7 <= 0) {
										IofCallDriver_returnVal2 = 0;
										safety = safety + (s - SKIP1);
										s = SKIP2;
										lowerDriverReturn = IofCallDriver_returnVal2;
										TRACER_RV = (IofCallDriver_returnVal2);
										FloppyPnp_ntStatus = TRACER_RV;
										TRACER_RV = nondet();
L92:;
{
 int IoSetDeviceInterfaceState_tmp_ndt_6 ;
int retres4 ;
										int IoSetDeviceInterfaceState_SymbolicLinkName ; int IoSetDeviceInterfaceState_Enable ;
										IoSetDeviceInterfaceState_SymbolicLinkName = FloppyPnp_disketteExtension__InterfaceString;
										IoSetDeviceInterfaceState_Enable = 0;
L93:;
										;
										TRACER_RV = nondet();
L94:;
L95:;
{
 int IoDeleteSymbolicLink_tmp_ndt_3 ;
int retres3 ;
										int IoDeleteSymbolicLink_SymbolicLinkName ;
										IoDeleteSymbolicLink_SymbolicLinkName = FloppyPnp_disketteExtension__ArcName;
L96:;
										;
										TRACER_RV = nondet();
L97:;
										goto L33;
}
}
									}
									else if(IofCallDriver_tmp_ndt_7 < 0) {
L98:;
										IofCallDriver_tmp_ndt_8 = __VERIFIER_nondet_int();
										if(IofCallDriver_tmp_ndt_8 >= 1 && IofCallDriver_tmp_ndt_8 <= 1) {
											IofCallDriver_returnVal2 = -1073741823;
											safety = safety + (s - SKIP1);
											s = SKIP2;
											lowerDriverReturn = IofCallDriver_returnVal2;
											TRACER_RV = (IofCallDriver_returnVal2);
											FloppyPnp_ntStatus = TRACER_RV;
											TRACER_RV = nondet();
L99:;
{
 int IoSetDeviceInterfaceState_tmp_ndt_6 ;
int retres4 ;
											int IoSetDeviceInterfaceState_SymbolicLinkName ; int IoSetDeviceInterfaceState_Enable ;
											IoSetDeviceInterfaceState_SymbolicLinkName = FloppyPnp_disketteExtension__InterfaceString;
											IoSetDeviceInterfaceState_Enable = 0;
L100:;
											;
											TRACER_RV = nondet();
L101:;
L102:;
{
 int IoDeleteSymbolicLink_tmp_ndt_3 ;
int retres3 ;
											int IoDeleteSymbolicLink_SymbolicLinkName ;
											IoDeleteSymbolicLink_SymbolicLinkName = FloppyPnp_disketteExtension__ArcName;
L103:;
											;
											TRACER_RV = nondet();
L104:;
											goto L38;
}
}
										}
										else if(IofCallDriver_tmp_ndt_8 < 1) {
L105:;
											IofCallDriver_returnVal2 = 259;
											safety = safety + (s - SKIP1);
											s = SKIP2;
											lowerDriverReturn = IofCallDriver_returnVal2;
											TRACER_RV = (IofCallDriver_returnVal2);
											FloppyPnp_ntStatus = TRACER_RV;
											TRACER_RV = nondet();
L106:;
{
 int IoSetDeviceInterfaceState_tmp_ndt_6 ;
int retres4 ;
											int IoSetDeviceInterfaceState_SymbolicLinkName ; int IoSetDeviceInterfaceState_Enable ;
											IoSetDeviceInterfaceState_SymbolicLinkName = FloppyPnp_disketteExtension__InterfaceString;
											IoSetDeviceInterfaceState_Enable = 0;
L107:;
											;
											TRACER_RV = nondet();
L108:;
L109:;
{
 int IoDeleteSymbolicLink_tmp_ndt_3 ;
int retres3 ;
											int IoDeleteSymbolicLink_SymbolicLinkName ;
											IoDeleteSymbolicLink_SymbolicLinkName = FloppyPnp_disketteExtension__ArcName;
L110:;
											;
											TRACER_RV = nondet();
L111:;
											goto L42;
}
}
										}
										else {
											goto L105;
										}
									}
									else {
										goto L98;
									}
}
								}
								else if(FloppyPnp_irpSp__MinorFunction < 2) {
									goto L32;
								}
								else {
									goto L32;
								}
							}
							else {
								if(FloppyPnp_irpSp__MinorFunction >= 4 && FloppyPnp_irpSp__MinorFunction <= 4) {
									FloppyPnp_disketteExtension__IsStarted = 0;
									FloppyPnp_Irp__IoStatus__Status = 0;
									myStatus = 0;
									safety = safety + (s - NP);
									s = SKIP1;
									FloppyPnp_Irp__CurrentLocation = FloppyPnp_Irp__CurrentLocation + 1;
									FloppyPnp_Irp__Tail__Overlay__CurrentStackLocation = FloppyPnp_Irp__Tail__Overlay__CurrentStackLocation + 1;
{
 int IofCallDriver_returnVal2 ;
int IofCallDriver_compRetStatus1 ;
int IofCallDriver_lcontext ;
int IofCallDriver_CIL___Tmp7 ;
int IofCallDriver_tmp_ndt_7 ;
int IofCallDriver_tmp_ndt_8 ;
									int IofCallDriver_DeviceObject ; int IofCallDriver_Irp ;
									IofCallDriver_DeviceObject = FloppyPnp_disketteExtension__TargetObject;
									IofCallDriver_Irp = FloppyPnp_Irp;
									IofCallDriver_tmp_ndt_7 = __VERIFIER_nondet_int();
									if(IofCallDriver_tmp_ndt_7 >= 0 && IofCallDriver_tmp_ndt_7 <= 0) {
										IofCallDriver_returnVal2 = 0;
										safety = safety + (s - SKIP1);
										s = SKIP2;
										lowerDriverReturn = IofCallDriver_returnVal2;
										TRACER_RV = (IofCallDriver_returnVal2);
										FloppyPnp_ntStatus = TRACER_RV;
										TRACER_RV = nondet();
										goto L33;
									}
									else if(IofCallDriver_tmp_ndt_7 < 0) {
L112:;
										IofCallDriver_tmp_ndt_8 = __VERIFIER_nondet_int();
										if(IofCallDriver_tmp_ndt_8 >= 1 && IofCallDriver_tmp_ndt_8 <= 1) {
											IofCallDriver_returnVal2 = -1073741823;
											safety = safety + (s - SKIP1);
											s = SKIP2;
											lowerDriverReturn = IofCallDriver_returnVal2;
											TRACER_RV = (IofCallDriver_returnVal2);
											FloppyPnp_ntStatus = TRACER_RV;
											TRACER_RV = nondet();
											goto L38;
										}
										else if(IofCallDriver_tmp_ndt_8 < 1) {
L113:;
											IofCallDriver_returnVal2 = 259;
											safety = safety + (s - SKIP1);
											s = SKIP2;
											lowerDriverReturn = IofCallDriver_returnVal2;
											TRACER_RV = (IofCallDriver_returnVal2);
											FloppyPnp_ntStatus = TRACER_RV;
											TRACER_RV = nondet();
											goto L42;
										}
										else {
											goto L113;
										}
									}
									else {
										goto L112;
									}
}
								}
								else if(FloppyPnp_irpSp__MinorFunction < 4) {
									goto L91;
								}
								else {
									goto L91;
								}
							}
						}
					}
					else {
						if(FloppyPnp_irpSp__MinorFunction >= 6 && FloppyPnp_irpSp__MinorFunction <= 6) {
							if(FloppyPnp_disketteExtension__IsStarted >= 0 && FloppyPnp_disketteExtension__IsStarted <= 0) {
								FloppyPnp_Irp__IoStatus__Status = 0;
								myStatus = 0;
								safety = safety + (s - NP);
								s = SKIP1;
								FloppyPnp_Irp__CurrentLocation = FloppyPnp_Irp__CurrentLocation + 1;
								FloppyPnp_Irp__Tail__Overlay__CurrentStackLocation = FloppyPnp_Irp__Tail__Overlay__CurrentStackLocation + 1;
{
 int IofCallDriver_returnVal2 ;
int IofCallDriver_compRetStatus1 ;
int IofCallDriver_lcontext ;
int IofCallDriver_CIL___Tmp7 ;
int IofCallDriver_tmp_ndt_7 ;
int IofCallDriver_tmp_ndt_8 ;
								int IofCallDriver_DeviceObject ; int IofCallDriver_Irp ;
								IofCallDriver_DeviceObject = FloppyPnp_disketteExtension__TargetObject;
								IofCallDriver_Irp = FloppyPnp_Irp;
								IofCallDriver_tmp_ndt_7 = __VERIFIER_nondet_int();
								if(IofCallDriver_tmp_ndt_7 >= 0 && IofCallDriver_tmp_ndt_7 <= 0) {
									IofCallDriver_returnVal2 = 0;
									safety = safety + (s - SKIP1);
									s = SKIP2;
									lowerDriverReturn = IofCallDriver_returnVal2;
									TRACER_RV = (IofCallDriver_returnVal2);
									FloppyPnp_ntStatus = TRACER_RV;
									TRACER_RV = nondet();
									goto L33;
								}
								else if(IofCallDriver_tmp_ndt_7 < 0) {
L114:;
									IofCallDriver_tmp_ndt_8 = __VERIFIER_nondet_int();
									if(IofCallDriver_tmp_ndt_8 >= 1 && IofCallDriver_tmp_ndt_8 <= 1) {
										IofCallDriver_returnVal2 = -1073741823;
										safety = safety + (s - SKIP1);
										s = SKIP2;
										lowerDriverReturn = IofCallDriver_returnVal2;
										TRACER_RV = (IofCallDriver_returnVal2);
										FloppyPnp_ntStatus = TRACER_RV;
										TRACER_RV = nondet();
										goto L38;
									}
									else if(IofCallDriver_tmp_ndt_8 < 1) {
L115:;
										IofCallDriver_returnVal2 = 259;
										safety = safety + (s - SKIP1);
										s = SKIP2;
										lowerDriverReturn = IofCallDriver_returnVal2;
										TRACER_RV = (IofCallDriver_returnVal2);
										FloppyPnp_ntStatus = TRACER_RV;
										TRACER_RV = nondet();
										goto L42;
									}
									else {
										goto L115;
									}
								}
								else {
									goto L114;
								}
}
							}
							else if(FloppyPnp_disketteExtension__IsStarted < 0) {
L116:;
								FloppyPnp_Irp__IoStatus__Status = 0;
								myStatus = 0;
								FloppyPnp_irpSp___0 = FloppyPnp_Irp__Tail__Overlay__CurrentStackLocation;
								FloppyPnp_nextIrpSp = FloppyPnp_Irp__Tail__Overlay__CurrentStackLocation - 1;
								FloppyPnp_nextIrpSp__Control = 0;
								safety = safety + (s - NP);
								safety = safety + (compRegistered - 0);
								compRegistered = 1;
								FloppyPnp_irpSp___1 = FloppyPnp_Irp__Tail__Overlay__CurrentStackLocation - 1;
								FloppyPnp_irpSp__Context = FloppyPnp_doneEvent;
								FloppyPnp_irpSp__Control = 224;
{
 int IofCallDriver_returnVal2 ;
int IofCallDriver_compRetStatus1 ;
int IofCallDriver_lcontext ;
int IofCallDriver_CIL___Tmp7 ;
int IofCallDriver_tmp_ndt_7 ;
int IofCallDriver_tmp_ndt_8 ;
								int IofCallDriver_DeviceObject ; int IofCallDriver_Irp ;
								IofCallDriver_DeviceObject = FloppyPnp_disketteExtension__TargetObject;
								IofCallDriver_Irp = FloppyPnp_Irp;
{
 int retres4 ;
								int FloppyPnpComplete_DeviceObject ; int FloppyPnpComplete_Irp ; int FloppyPnpComplete_Context ;
								FloppyPnpComplete_DeviceObject = IofCallDriver_DeviceObject;
								FloppyPnpComplete_Irp = IofCallDriver_Irp;
								FloppyPnpComplete_Context = IofCallDriver_lcontext;
{
 int KeSetEvent_l ;
								int KeSetEvent_Event ; int KeSetEvent_Increment ; int KeSetEvent_Wait ;
								KeSetEvent_Event = FloppyPnpComplete_Context;
								KeSetEvent_Increment = 1;
								KeSetEvent_Wait = 0;
								setEventCalled = 1;
								;
								TRACER_RV = nondet();
								retres4 = -1073741802;
								TRACER_RV = (retres4);
								IofCallDriver_compRetStatus1 = TRACER_RV;
								TRACER_RV = nondet();
								IofCallDriver_CIL___Tmp7 = IofCallDriver_compRetStatus1;
{
								safety = safety + (s - NP);
								s = MPR1;
								;
								TRACER_RV = nondet();
								IofCallDriver_tmp_ndt_7 = __VERIFIER_nondet_int();
								if(IofCallDriver_tmp_ndt_7 >= 0 && IofCallDriver_tmp_ndt_7 <= 0) {
									IofCallDriver_returnVal2 = 0;
									s = NP;
									lowerDriverReturn = IofCallDriver_returnVal2;
									TRACER_RV = (IofCallDriver_returnVal2);
									FloppyPnp_ntStatus = TRACER_RV;
									TRACER_RV = nondet();
L117:;
{
									int IofCompleteRequest_Irp ; int IofCompleteRequest_PriorityBoost ;
									IofCompleteRequest_Irp = FloppyPnp_Irp;
									IofCompleteRequest_PriorityBoost = 0;
									safety = safety + (s - NP);
									s = DC;
									;
									TRACER_RV = nondet();
									goto L18;
}
								}
								else if(IofCallDriver_tmp_ndt_7 < 0) {
L118:;
									IofCallDriver_tmp_ndt_8 = __VERIFIER_nondet_int();
									if(IofCallDriver_tmp_ndt_8 >= 1 && IofCallDriver_tmp_ndt_8 <= 1) {
										IofCallDriver_returnVal2 = -1073741823;
										s = NP;
										lowerDriverReturn = IofCallDriver_returnVal2;
										TRACER_RV = (IofCallDriver_returnVal2);
										FloppyPnp_ntStatus = TRACER_RV;
										TRACER_RV = nondet();
{
										int IofCompleteRequest_Irp ; int IofCompleteRequest_PriorityBoost ;
										IofCompleteRequest_Irp = FloppyPnp_Irp;
										IofCompleteRequest_PriorityBoost = 0;
										safety = safety + (s - NP);
										s = DC;
										;
										TRACER_RV = nondet();
										goto L24;
}
									}
									else if(IofCallDriver_tmp_ndt_8 < 1) {
L119:;
										IofCallDriver_returnVal2 = 259;
										s = MPR3;
										lowerDriverReturn = IofCallDriver_returnVal2;
										TRACER_RV = (IofCallDriver_returnVal2);
										FloppyPnp_ntStatus = TRACER_RV;
										TRACER_RV = nondet();
										FloppyPnp_CIL___Tmp30 = FloppyPnp_ntStatus;
{
 int KeWaitForSingleObject_tmp_ndt_9 ;
int retres7 ;
										int KeWaitForSingleObject_Object ; int KeWaitForSingleObject_WaitReason ; int KeWaitForSingleObject_WaitMode ; int KeWaitForSingleObject_Alertable ; int KeWaitForSingleObject_Timeout ;
										KeWaitForSingleObject_Object = FloppyPnp_doneEvent;
										KeWaitForSingleObject_WaitReason = Executive;
										KeWaitForSingleObject_WaitMode = KernelMode;
										KeWaitForSingleObject_Alertable = 0;
										KeWaitForSingleObject_Timeout = 0;
										s = NP;
										setEventCalled = 0;
L120:;
										;
										TRACER_RV = nondet();
										FloppyPnp_ntStatus = myStatus;
										goto L117;
}
									}
									else {
										goto L119;
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
						else if(FloppyPnp_irpSp__MinorFunction < 6) {
							goto L83;
						}
						else {
							goto L83;
						}
					}
				}
			}
}
		}
		else if(main_tmp_ndt_1 < 3) {
L121:;
			TRACER_returning = 1;
			goto L4;
		}
		else {
			goto L121;
		}
}
	}
	else if(main_irp_choice < 0) {
L122:;
{
		s = NP;
		pended = 0;
		compRegistered = 0;
		lowerDriverReturn = 0;
		setEventCalled = 0;
		customIrp = 0;
		;
		TRACER_RV = nondet();
		main_tmp_ndt_1 = __VERIFIER_nondet_int();
		if(main_tmp_ndt_1 >= 3 && main_tmp_ndt_1 <= 3) {
{
 int FloppyPnp_DeviceObject__DeviceExtension ;
int FloppyPnp_Irp__Tail__Overlay__CurrentStackLocation ;
int FloppyPnp_Irp__IoStatus__Information ;
int FloppyPnp_Irp__IoStatus__Status ;
int FloppyPnp_Irp__CurrentLocation ;
int FloppyPnp_disketteExtension__IsRemoved ;
int FloppyPnp_disketteExtension__IsStarted ;
int FloppyPnp_disketteExtension__TargetObject ;
int FloppyPnp_disketteExtension__HoldNewRequests ;
int FloppyPnp_disketteExtension__FloppyThread ;
int FloppyPnp_disketteExtension__InterfaceString__Buffer ;
int FloppyPnp_disketteExtension__InterfaceString ;
int FloppyPnp_disketteExtension__ArcName__Length ;
int FloppyPnp_disketteExtension__ArcName ;
int FloppyPnp_irpSp__MinorFunction ;
int FloppyPnp_IoGetConfigurationInformation__FloppyCount ;
int FloppyPnp_irpSp ;
int FloppyPnp_disketteExtension ;
int FloppyPnp_ntStatus ;
int FloppyPnp_doneEvent ;
int FloppyPnp_irpSp___0 ;
int FloppyPnp_nextIrpSp ;
int FloppyPnp_nextIrpSp__Control ;
int FloppyPnp_irpSp___1 ;
int FloppyPnp_irpSp__Context ;
int FloppyPnp_irpSp__Control ;
int FloppyPnp_CIL___Tmp29 ;
int FloppyPnp_CIL___Tmp30 ;
int retres31 ;
int TRACER_returning ;
			int FloppyPnp_DeviceObject ; int FloppyPnp_Irp ;
			FloppyPnp_DeviceObject = main_devobj;
			FloppyPnp_Irp = main_pirp;
			TRACER_returning = 0;
			FloppyPnp_ntStatus = 0;
			PagingReferenceCount = PagingReferenceCount + 1;
			FloppyPnp_disketteExtension = FloppyPnp_DeviceObject__DeviceExtension;
			FloppyPnp_irpSp = FloppyPnp_Irp__Tail__Overlay__CurrentStackLocation;
			if(FloppyPnp_disketteExtension__IsRemoved > 0) {
L123:;
{
				int IofCompleteRequest_Irp ; int IofCompleteRequest_PriorityBoost ;
				IofCompleteRequest_Irp = FloppyPnp_Irp;
				IofCompleteRequest_PriorityBoost = 0;
				safety = safety + (s - NP);
				s = DC;
				;
				TRACER_RV = nondet();
				retres31 = -1073741738;
				TRACER_RV = (retres31);
				main_status = TRACER_RV;
				TRACER_RV = nondet();
				goto L2;
}
			}
			else if(FloppyPnp_disketteExtension__IsRemoved < 0) {
				goto L123;
			}
			else {
				if(FloppyPnp_irpSp__MinorFunction >= 0 && FloppyPnp_irpSp__MinorFunction <= 0) {
{
 int FloppyStartDevice_DeviceObject__DeviceExtension ;
int FloppyStartDevice_Irp__Tail__Overlay__CurrentStackLocation ;
int FloppyStartDevice_Irp__IoStatus__Status ;
int FloppyStartDevice_disketteExtension__TargetObject ;
int FloppyStartDevice_disketteExtension__MaxTransferSize ;
int FloppyStartDevice_disketteExtension__DriveType ;
int FloppyStartDevice_disketteExtension__DeviceUnit ;
int FloppyStartDevice_disketteExtension__UnderlyingPDO ;
int FloppyStartDevice_disketteExtension__InterfaceString ;
int FloppyStartDevice_disketteExtension__IsStarted ;
int FloppyStartDevice_disketteExtension__HoldNewRequests ;
int FloppyStartDevice_ntStatus ;
int FloppyStartDevice_pnpStatus ;
int FloppyStartDevice_doneEvent ;
int FloppyStartDevice_fdcInfo ;
int FloppyStartDevice_fdcInfo__BufferCount ;
int FloppyStartDevice_fdcInfo__BufferSize ;
int FloppyStartDevice_fdcInfo__MaxTransferSize ;
int FloppyStartDevice_fdcInfo__AcpiBios ;
int FloppyStartDevice_fdcInfo__AcpiFdiSupported ;
int FloppyStartDevice_fdcInfo__PeripheralNumber ;
int FloppyStartDevice_fdcInfo__UnitNumber ;
int FloppyStartDevice_Dc ;
int FloppyStartDevice_Fp ;
int FloppyStartDevice_disketteExtension ;
int FloppyStartDevice_irpSp ;
int FloppyStartDevice_irpSp___0 ;
int FloppyStartDevice_nextIrpSp ;
int FloppyStartDevice_nextIrpSp__Control ;
int FloppyStartDevice_irpSp___1 ;
int FloppyStartDevice_irpSp__Control ;
int FloppyStartDevice_irpSp__Context ;
int FloppyStartDevice_InterfaceType ;
int FloppyStartDevice_KUSER_SHARED_DATA__AlternativeArchitecture_NEC98x86 ;
int FloppyStartDevice_CIL___Tmp42 ;
int FloppyStartDevice_CIL___Tmp43 ;
int FloppyStartDevice_CIL___Tmp44 ;
int FloppyStartDevice_CIL___Tmp45 ;
int FloppyStartDevice_CIL___Tmp46 ;
int FloppyStartDevice_CIL___Tmp47 ;
int FloppyStartDevice_CIL___Tmp48 ;
					int FloppyStartDevice_DeviceObject ; int FloppyStartDevice_Irp ;
					FloppyStartDevice_DeviceObject = FloppyPnp_DeviceObject;
					FloppyStartDevice_Irp = FloppyPnp_Irp;
					FloppyStartDevice_Dc = DiskController;
					FloppyStartDevice_Fp = FloppyDiskPeripheral;
					FloppyStartDevice_disketteExtension = FloppyStartDevice_DeviceObject__DeviceExtension;
					FloppyStartDevice_irpSp = FloppyStartDevice_Irp__Tail__Overlay__CurrentStackLocation;
					FloppyStartDevice_irpSp___0 = FloppyStartDevice_Irp__Tail__Overlay__CurrentStackLocation;
					FloppyStartDevice_nextIrpSp = FloppyStartDevice_Irp__Tail__Overlay__CurrentStackLocation - 1;
					FloppyStartDevice_nextIrpSp__Control = 0;
					safety = safety + (s - NP);
					safety = safety + (compRegistered - 0);
					compRegistered = 1;
					FloppyStartDevice_irpSp___1 = FloppyStartDevice_Irp__Tail__Overlay__CurrentStackLocation - 1;
					FloppyStartDevice_irpSp__Context = FloppyStartDevice_doneEvent;
					FloppyStartDevice_irpSp__Control = 224;
{
 int IofCallDriver_returnVal2 ;
int IofCallDriver_compRetStatus1 ;
int IofCallDriver_lcontext ;
int IofCallDriver_CIL___Tmp7 ;
int IofCallDriver_tmp_ndt_7 ;
int IofCallDriver_tmp_ndt_8 ;
					int IofCallDriver_DeviceObject ; int IofCallDriver_Irp ;
					IofCallDriver_DeviceObject = FloppyStartDevice_disketteExtension__TargetObject;
					IofCallDriver_Irp = FloppyStartDevice_Irp;
{
 int retres4 ;
					int FloppyPnpComplete_DeviceObject ; int FloppyPnpComplete_Irp ; int FloppyPnpComplete_Context ;
					FloppyPnpComplete_DeviceObject = IofCallDriver_DeviceObject;
					FloppyPnpComplete_Irp = IofCallDriver_Irp;
					FloppyPnpComplete_Context = IofCallDriver_lcontext;
{
 int KeSetEvent_l ;
					int KeSetEvent_Event ; int KeSetEvent_Increment ; int KeSetEvent_Wait ;
					KeSetEvent_Event = FloppyPnpComplete_Context;
					KeSetEvent_Increment = 1;
					KeSetEvent_Wait = 0;
					setEventCalled = 1;
					;
					TRACER_RV = nondet();
					retres4 = -1073741802;
					TRACER_RV = (retres4);
					IofCallDriver_compRetStatus1 = TRACER_RV;
					TRACER_RV = nondet();
					IofCallDriver_CIL___Tmp7 = IofCallDriver_compRetStatus1;
{
					safety = safety + (s - NP);
					s = MPR1;
					;
					TRACER_RV = nondet();
					IofCallDriver_tmp_ndt_7 = __VERIFIER_nondet_int();
					if(IofCallDriver_tmp_ndt_7 >= 0 && IofCallDriver_tmp_ndt_7 <= 0) {
						IofCallDriver_returnVal2 = 0;
						s = NP;
						lowerDriverReturn = IofCallDriver_returnVal2;
						TRACER_RV = (IofCallDriver_returnVal2);
						FloppyStartDevice_ntStatus = TRACER_RV;
						TRACER_RV = nondet();
						FloppyStartDevice_CIL___Tmp42 = FloppyStartDevice_ntStatus;
L124:;
{
 int FlFdcDeviceIo_ntStatus ;
int FlFdcDeviceIo_irp ;
int FlFdcDeviceIo_irpStack ;
int FlFdcDeviceIo_doneEvent ;
int FlFdcDeviceIo_ioStatus ;
int FlFdcDeviceIo_irp__Tail__Overlay__CurrentStackLocation ;
int FlFdcDeviceIo_irpStack__Parameters__DeviceIoControl__Type3InputBuffer ;
int FlFdcDeviceIo_CIL___Tmp11 ;
int retres12 ;
						int FlFdcDeviceIo_DeviceObject ; int FlFdcDeviceIo_Ioctl ; int FlFdcDeviceIo_Data ;
						FlFdcDeviceIo_DeviceObject = FloppyStartDevice_disketteExtension__TargetObject;
						FlFdcDeviceIo_Ioctl = FloppyStartDevice_CIL___Tmp46;
						FlFdcDeviceIo_Data = FloppyStartDevice_fdcInfo;
{
 int IoBuildDeviceIoControlRequest_malloc ;
int IoBuildDeviceIoControlRequest_tmp_ndt_2 ;
int retres12 ;
						int IoBuildDeviceIoControlRequest_IoControlCode ; int IoBuildDeviceIoControlRequest_DeviceObject ; int IoBuildDeviceIoControlRequest_InputBuffer ; int IoBuildDeviceIoControlRequest_InputBufferLength ; int IoBuildDeviceIoControlRequest_OutputBuffer ; int IoBuildDeviceIoControlRequest_OutputBufferLength ; int IoBuildDeviceIoControlRequest_InternalDeviceIoControl ; int IoBuildDeviceIoControlRequest_Event ; int IoBuildDeviceIoControlRequest_IoStatusBlock ;
						IoBuildDeviceIoControlRequest_IoControlCode = FlFdcDeviceIo_Ioctl;
						IoBuildDeviceIoControlRequest_DeviceObject = FlFdcDeviceIo_DeviceObject;
						IoBuildDeviceIoControlRequest_InputBuffer = 0;
						IoBuildDeviceIoControlRequest_InputBufferLength = 0;
						IoBuildDeviceIoControlRequest_OutputBuffer = 0;
						IoBuildDeviceIoControlRequest_OutputBufferLength = 0;
						IoBuildDeviceIoControlRequest_InternalDeviceIoControl = 1;
						IoBuildDeviceIoControlRequest_Event = FlFdcDeviceIo_doneEvent;
						IoBuildDeviceIoControlRequest_IoStatusBlock = FlFdcDeviceIo_ioStatus;
						customIrp = 1;
						IoBuildDeviceIoControlRequest_tmp_ndt_2 = __VERIFIER_nondet_int();
						if(IoBuildDeviceIoControlRequest_tmp_ndt_2 >= 0 && IoBuildDeviceIoControlRequest_tmp_ndt_2 <= 0) {
							retres12 = IoBuildDeviceIoControlRequest_malloc;
L125:;
							TRACER_RV = (retres12);
							FlFdcDeviceIo_irp = TRACER_RV;
							TRACER_RV = nondet();
							if(FlFdcDeviceIo_irp >= 0 && FlFdcDeviceIo_irp <= 0) {
								retres12 = -1073741670;
								TRACER_RV = (retres12);
								FloppyStartDevice_ntStatus = TRACER_RV;
								TRACER_RV = nondet();
{
								int IofCompleteRequest_Irp ; int IofCompleteRequest_PriorityBoost ;
								IofCompleteRequest_Irp = FloppyStartDevice_Irp;
								IofCompleteRequest_PriorityBoost = 0;
								safety = safety + (s - NP);
								s = DC;
								;
								TRACER_RV = nondet();
								TRACER_RV = (FloppyStartDevice_ntStatus);
								FloppyPnp_ntStatus = TRACER_RV;
								TRACER_RV = nondet();
								PagingReferenceCount = PagingReferenceCount - 1;
								retres31 = FloppyPnp_ntStatus;
								TRACER_RV = (retres31);
								main_status = TRACER_RV;
								TRACER_RV = nondet();
								goto L7;
}
							}
							else if(FlFdcDeviceIo_irp < 0) {
L126:;
{
 int IofCallDriver_returnVal2 ;
int IofCallDriver_compRetStatus1 ;
int IofCallDriver_lcontext ;
int IofCallDriver_CIL___Tmp7 ;
int IofCallDriver_tmp_ndt_7 ;
int IofCallDriver_tmp_ndt_8 ;
								int IofCallDriver_DeviceObject ; int IofCallDriver_Irp ;
								IofCallDriver_DeviceObject = FlFdcDeviceIo_DeviceObject;
								IofCallDriver_Irp = FlFdcDeviceIo_irp;
{
 int retres4 ;
								int FloppyPnpComplete_DeviceObject ; int FloppyPnpComplete_Irp ; int FloppyPnpComplete_Context ;
								FloppyPnpComplete_DeviceObject = IofCallDriver_DeviceObject;
								FloppyPnpComplete_Irp = IofCallDriver_Irp;
								FloppyPnpComplete_Context = IofCallDriver_lcontext;
{
 int KeSetEvent_l ;
								int KeSetEvent_Event ; int KeSetEvent_Increment ; int KeSetEvent_Wait ;
								KeSetEvent_Event = FloppyPnpComplete_Context;
								KeSetEvent_Increment = 1;
								KeSetEvent_Wait = 0;
								setEventCalled = 1;
								;
								TRACER_RV = nondet();
								retres4 = -1073741802;
								TRACER_RV = (retres4);
								IofCallDriver_compRetStatus1 = TRACER_RV;
								TRACER_RV = nondet();
								IofCallDriver_CIL___Tmp7 = IofCallDriver_compRetStatus1;
{
								safety = safety + (s - NP);
								s = MPR1;
								;
								TRACER_RV = nondet();
								IofCallDriver_tmp_ndt_7 = __VERIFIER_nondet_int();
								if(IofCallDriver_tmp_ndt_7 >= 0 && IofCallDriver_tmp_ndt_7 <= 0) {
									IofCallDriver_returnVal2 = 0;
									s = NP;
									lowerDriverReturn = IofCallDriver_returnVal2;
									TRACER_RV = (IofCallDriver_returnVal2);
									FlFdcDeviceIo_ntStatus = TRACER_RV;
									TRACER_RV = nondet();
									FlFdcDeviceIo_CIL___Tmp11 = FlFdcDeviceIo_ntStatus;
L127:;
									retres12 = FlFdcDeviceIo_ntStatus;
									TRACER_RV = (retres12);
									FloppyStartDevice_ntStatus = TRACER_RV;
									TRACER_RV = nondet();
									if(FloppyStartDevice_fdcInfo__AcpiBios > 0) {
L128:;
										if(FloppyStartDevice_fdcInfo__AcpiFdiSupported > 0) {
L129:;
{
 int retres3 ;
											int FlAcpiConfigureFloppy_DisketteExtension ; int FlAcpiConfigureFloppy_FdcInfo ;
											FlAcpiConfigureFloppy_DisketteExtension = FloppyStartDevice_disketteExtension;
											FlAcpiConfigureFloppy_FdcInfo = FloppyStartDevice_fdcInfo;
											retres3 = 0;
											TRACER_RV = (retres3);
											FloppyStartDevice_ntStatus = TRACER_RV;
											TRACER_RV = nondet();
L130:;
L131:;
L132:;
L133:;
L134:;
{
 int IoRegisterDeviceInterface_tmp_ndt_5 ;
int retres6 ;
											int IoRegisterDeviceInterface_PhysicalDeviceObject ; int IoRegisterDeviceInterface_InterfaceClassGuid ; int IoRegisterDeviceInterface_ReferenceString ; int IoRegisterDeviceInterface_SymbolicLinkName ;
											IoRegisterDeviceInterface_PhysicalDeviceObject = FloppyStartDevice_disketteExtension__UnderlyingPDO;
											IoRegisterDeviceInterface_InterfaceClassGuid = MOUNTDEV_MOUNTED_DEVICE_GUID;
											IoRegisterDeviceInterface_ReferenceString = 0;
											IoRegisterDeviceInterface_SymbolicLinkName = FloppyStartDevice_disketteExtension__InterfaceString;
											IoRegisterDeviceInterface_tmp_ndt_5 = __VERIFIER_nondet_int();
											if(IoRegisterDeviceInterface_tmp_ndt_5 >= 0 && IoRegisterDeviceInterface_tmp_ndt_5 <= 0) {
												retres6 = 0;
												TRACER_RV = (retres6);
												FloppyStartDevice_pnpStatus = TRACER_RV;
												TRACER_RV = nondet();
{
 int IoSetDeviceInterfaceState_tmp_ndt_6 ;
int retres4 ;
												int IoSetDeviceInterfaceState_SymbolicLinkName ; int IoSetDeviceInterfaceState_Enable ;
												IoSetDeviceInterfaceState_SymbolicLinkName = FloppyStartDevice_disketteExtension__InterfaceString;
												IoSetDeviceInterfaceState_Enable = 1;
L135:;
												FloppyStartDevice_pnpStatus = TRACER_RV;
												TRACER_RV = nondet();
L136:;
{
												int IofCompleteRequest_Irp ; int IofCompleteRequest_PriorityBoost ;
												IofCompleteRequest_Irp = FloppyStartDevice_Irp;
												IofCompleteRequest_PriorityBoost = 0;
												safety = safety + (s - NP);
												s = DC;
												;
												TRACER_RV = nondet();
												TRACER_RV = (FloppyStartDevice_ntStatus);
												FloppyPnp_ntStatus = TRACER_RV;
												TRACER_RV = nondet();
L137:;
												PagingReferenceCount = PagingReferenceCount - 1;
												retres31 = FloppyPnp_ntStatus;
												TRACER_RV = (retres31);
												main_status = TRACER_RV;
												TRACER_RV = nondet();
												goto L19;
}
}
											}
											else if(IoRegisterDeviceInterface_tmp_ndt_5 < 0) {
L138:;
												retres6 = -1073741808;
												TRACER_RV = (retres6);
												FloppyStartDevice_pnpStatus = TRACER_RV;
												TRACER_RV = nondet();
												goto L136;
											}
											else {
												goto L138;
											}
}
}
										}
										else if(FloppyStartDevice_fdcInfo__AcpiFdiSupported < 0) {
											goto L129;
										}
										else {
L139:;
											goto L131;
										}
									}
									else if(FloppyStartDevice_fdcInfo__AcpiBios < 0) {
										goto L128;
									}
									else {
L140:;
										goto L132;
									}
								}
								else if(IofCallDriver_tmp_ndt_7 < 0) {
L141:;
									IofCallDriver_tmp_ndt_8 = __VERIFIER_nondet_int();
									if(IofCallDriver_tmp_ndt_8 >= 1 && IofCallDriver_tmp_ndt_8 <= 1) {
										IofCallDriver_returnVal2 = -1073741823;
										s = NP;
										lowerDriverReturn = IofCallDriver_returnVal2;
										TRACER_RV = (IofCallDriver_returnVal2);
										FlFdcDeviceIo_ntStatus = TRACER_RV;
										TRACER_RV = nondet();
										retres12 = FlFdcDeviceIo_ntStatus;
										TRACER_RV = (retres12);
										FloppyStartDevice_ntStatus = TRACER_RV;
										TRACER_RV = nondet();
{
										int IofCompleteRequest_Irp ; int IofCompleteRequest_PriorityBoost ;
										IofCompleteRequest_Irp = FloppyStartDevice_Irp;
										IofCompleteRequest_PriorityBoost = 0;
										safety = safety + (s - NP);
										s = DC;
										;
										TRACER_RV = nondet();
										TRACER_RV = (FloppyStartDevice_ntStatus);
										FloppyPnp_ntStatus = TRACER_RV;
										TRACER_RV = nondet();
L142:;
										PagingReferenceCount = PagingReferenceCount - 1;
										retres31 = FloppyPnp_ntStatus;
										TRACER_RV = (retres31);
										main_status = TRACER_RV;
										TRACER_RV = nondet();
										goto L25;
}
									}
									else if(IofCallDriver_tmp_ndt_8 < 1) {
L143:;
										IofCallDriver_returnVal2 = 259;
										s = MPR3;
										lowerDriverReturn = IofCallDriver_returnVal2;
										TRACER_RV = (IofCallDriver_returnVal2);
										FlFdcDeviceIo_ntStatus = TRACER_RV;
										TRACER_RV = nondet();
										FlFdcDeviceIo_CIL___Tmp11 = FlFdcDeviceIo_ntStatus;
{
 int KeWaitForSingleObject_tmp_ndt_9 ;
int retres7 ;
										int KeWaitForSingleObject_Object ; int KeWaitForSingleObject_WaitReason ; int KeWaitForSingleObject_WaitMode ; int KeWaitForSingleObject_Alertable ; int KeWaitForSingleObject_Timeout ;
										KeWaitForSingleObject_Object = FlFdcDeviceIo_doneEvent;
										KeWaitForSingleObject_WaitReason = Suspended;
										KeWaitForSingleObject_WaitMode = KernelMode;
										KeWaitForSingleObject_Alertable = 0;
										KeWaitForSingleObject_Timeout = 0;
										s = NP;
										setEventCalled = 0;
L144:;
										;
										TRACER_RV = nondet();
										FlFdcDeviceIo_ntStatus = myStatus;
										goto L127;
}
									}
									else {
										goto L143;
									}
								}
								else {
									goto L141;
								}
}
}
}
}
							}
							else {
								goto L126;
							}
						}
						else if(IoBuildDeviceIoControlRequest_tmp_ndt_2 < 0) {
L145:;
							retres12 = 0;
							goto L125;
						}
						else {
							goto L145;
						}
}
}
					}
					else if(IofCallDriver_tmp_ndt_7 < 0) {
L146:;
						IofCallDriver_tmp_ndt_8 = __VERIFIER_nondet_int();
						if(IofCallDriver_tmp_ndt_8 >= 1 && IofCallDriver_tmp_ndt_8 <= 1) {
							IofCallDriver_returnVal2 = -1073741823;
							s = NP;
							lowerDriverReturn = IofCallDriver_returnVal2;
							FloppyStartDevice_ntStatus = TRACER_RV;
							TRACER_RV = nondet();
							goto L124;
						}
						else if(IofCallDriver_tmp_ndt_8 < 1) {
L147:;
							IofCallDriver_returnVal2 = 259;
							s = MPR3;
							lowerDriverReturn = IofCallDriver_returnVal2;
							TRACER_RV = (IofCallDriver_returnVal2);
							FloppyStartDevice_ntStatus = TRACER_RV;
							TRACER_RV = nondet();
							FloppyStartDevice_CIL___Tmp42 = FloppyStartDevice_ntStatus;
{
 int KeWaitForSingleObject_tmp_ndt_9 ;
int retres7 ;
							int KeWaitForSingleObject_Object ; int KeWaitForSingleObject_WaitReason ; int KeWaitForSingleObject_WaitMode ; int KeWaitForSingleObject_Alertable ; int KeWaitForSingleObject_Timeout ;
							KeWaitForSingleObject_Object = FloppyStartDevice_doneEvent;
							KeWaitForSingleObject_WaitReason = Executive;
							KeWaitForSingleObject_WaitMode = KernelMode;
							KeWaitForSingleObject_Alertable = 0;
							KeWaitForSingleObject_Timeout = 0;
							s = NP;
							setEventCalled = 0;
L148:;
							FloppyStartDevice_ntStatus = TRACER_RV;
							TRACER_RV = nondet();
							goto L124;
}
						}
						else {
							goto L147;
						}
					}
					else {
						goto L146;
					}
}
}
}
}
}
				}
				else if(FloppyPnp_irpSp__MinorFunction < 0) {
L149:;
					safety = safety + (s - NP);
					s = SKIP1;
					FloppyPnp_Irp__CurrentLocation = FloppyPnp_Irp__CurrentLocation + 1;
					FloppyPnp_Irp__Tail__Overlay__CurrentStackLocation = FloppyPnp_Irp__Tail__Overlay__CurrentStackLocation + 1;
{
 int IofCallDriver_returnVal2 ;
int IofCallDriver_compRetStatus1 ;
int IofCallDriver_lcontext ;
int IofCallDriver_CIL___Tmp7 ;
int IofCallDriver_tmp_ndt_7 ;
int IofCallDriver_tmp_ndt_8 ;
					int IofCallDriver_DeviceObject ; int IofCallDriver_Irp ;
					IofCallDriver_DeviceObject = FloppyPnp_disketteExtension__TargetObject;
					IofCallDriver_Irp = FloppyPnp_Irp;
					IofCallDriver_tmp_ndt_7 = __VERIFIER_nondet_int();
					if(IofCallDriver_tmp_ndt_7 >= 0 && IofCallDriver_tmp_ndt_7 <= 0) {
						IofCallDriver_returnVal2 = 0;
						safety = safety + (s - SKIP1);
						s = SKIP2;
						lowerDriverReturn = IofCallDriver_returnVal2;
						TRACER_RV = (IofCallDriver_returnVal2);
						FloppyPnp_ntStatus = TRACER_RV;
						TRACER_RV = nondet();
L150:;
						PagingReferenceCount = PagingReferenceCount - 1;
						retres31 = FloppyPnp_ntStatus;
L151:;
						TRACER_RV = (retres31);
						main_status = TRACER_RV;
						TRACER_RV = nondet();
						goto L35;
					}
					else if(IofCallDriver_tmp_ndt_7 < 0) {
L152:;
						IofCallDriver_tmp_ndt_8 = __VERIFIER_nondet_int();
						if(IofCallDriver_tmp_ndt_8 >= 1 && IofCallDriver_tmp_ndt_8 <= 1) {
							IofCallDriver_returnVal2 = -1073741823;
							safety = safety + (s - SKIP1);
							s = SKIP2;
							lowerDriverReturn = IofCallDriver_returnVal2;
							TRACER_RV = (IofCallDriver_returnVal2);
							FloppyPnp_ntStatus = TRACER_RV;
							TRACER_RV = nondet();
L153:;
							PagingReferenceCount = PagingReferenceCount - 1;
							retres31 = FloppyPnp_ntStatus;
L154:;
							TRACER_RV = (retres31);
							main_status = TRACER_RV;
							TRACER_RV = nondet();
							goto L40;
						}
						else if(IofCallDriver_tmp_ndt_8 < 1) {
L155:;
							IofCallDriver_returnVal2 = 259;
							safety = safety + (s - SKIP1);
							s = SKIP2;
							lowerDriverReturn = IofCallDriver_returnVal2;
							TRACER_RV = (IofCallDriver_returnVal2);
							FloppyPnp_ntStatus = TRACER_RV;
							TRACER_RV = nondet();
L156:;
							PagingReferenceCount = PagingReferenceCount - 1;
							retres31 = FloppyPnp_ntStatus;
L157:;
							TRACER_RV = (retres31);
							main_status = TRACER_RV;
							TRACER_RV = nondet();
							goto L44;
						}
						else {
							goto L155;
						}
					}
					else {
						goto L152;
					}
}
				}
				else {
					if(FloppyPnp_irpSp__MinorFunction >= 5 && FloppyPnp_irpSp__MinorFunction <= 5) {
						if(FloppyPnp_disketteExtension__IsStarted >= 0 && FloppyPnp_disketteExtension__IsStarted <= 0) {
							safety = safety + (s - NP);
							s = SKIP1;
							FloppyPnp_Irp__CurrentLocation = FloppyPnp_Irp__CurrentLocation + 1;
							FloppyPnp_Irp__Tail__Overlay__CurrentStackLocation = FloppyPnp_Irp__Tail__Overlay__CurrentStackLocation + 1;
{
 int IofCallDriver_returnVal2 ;
int IofCallDriver_compRetStatus1 ;
int IofCallDriver_lcontext ;
int IofCallDriver_CIL___Tmp7 ;
int IofCallDriver_tmp_ndt_7 ;
int IofCallDriver_tmp_ndt_8 ;
							int IofCallDriver_DeviceObject ; int IofCallDriver_Irp ;
							IofCallDriver_DeviceObject = FloppyPnp_disketteExtension__TargetObject;
							IofCallDriver_Irp = FloppyPnp_Irp;
							IofCallDriver_tmp_ndt_7 = __VERIFIER_nondet_int();
							if(IofCallDriver_tmp_ndt_7 >= 0 && IofCallDriver_tmp_ndt_7 <= 0) {
								IofCallDriver_returnVal2 = 0;
								safety = safety + (s - SKIP1);
								s = SKIP2;
								lowerDriverReturn = IofCallDriver_returnVal2;
								TRACER_RV = (IofCallDriver_returnVal2);
								FloppyPnp_ntStatus = TRACER_RV;
								TRACER_RV = nondet();
								retres31 = FloppyPnp_ntStatus;
								TRACER_returning = 1;
L158:;
								goto L151;
							}
							else if(IofCallDriver_tmp_ndt_7 < 0) {
L159:;
								IofCallDriver_tmp_ndt_8 = __VERIFIER_nondet_int();
								if(IofCallDriver_tmp_ndt_8 >= 1 && IofCallDriver_tmp_ndt_8 <= 1) {
									IofCallDriver_returnVal2 = -1073741823;
									safety = safety + (s - SKIP1);
									s = SKIP2;
									lowerDriverReturn = IofCallDriver_returnVal2;
									TRACER_RV = (IofCallDriver_returnVal2);
									FloppyPnp_ntStatus = TRACER_RV;
									TRACER_RV = nondet();
									retres31 = FloppyPnp_ntStatus;
									TRACER_returning = 1;
L160:;
									goto L154;
								}
								else if(IofCallDriver_tmp_ndt_8 < 1) {
L161:;
									IofCallDriver_returnVal2 = 259;
									safety = safety + (s - SKIP1);
									s = SKIP2;
									lowerDriverReturn = IofCallDriver_returnVal2;
									TRACER_RV = (IofCallDriver_returnVal2);
									FloppyPnp_ntStatus = TRACER_RV;
									TRACER_RV = nondet();
									retres31 = FloppyPnp_ntStatus;
									TRACER_returning = 1;
L162:;
									goto L157;
								}
								else {
									goto L161;
								}
							}
							else {
								goto L159;
							}
}
						}
						else if(FloppyPnp_disketteExtension__IsStarted < 0) {
L163:;
{
 int FlQueueIrpToThread_status ;
int FlQueueIrpToThread_threadHandle ;
int FlQueueIrpToThread_DisketteExtension__PoweringDown ;
int FlQueueIrpToThread_DisketteExtension__ThreadReferenceCount ;
int FlQueueIrpToThread_DisketteExtension__FloppyThread ;
int FlQueueIrpToThread_Irp__IoStatus__Status ;
int FlQueueIrpToThread_Irp__IoStatus__Information ;
int FlQueueIrpToThread_ObjAttributes ;
int retres11 ;
int TRACER_returning ;
							int FlQueueIrpToThread_Irp ; int FlQueueIrpToThread_DisketteExtension ;
							FlQueueIrpToThread_Irp = FloppyPnp_Irp;
							FlQueueIrpToThread_DisketteExtension = FloppyPnp_disketteExtension;
							TRACER_returning = 0;
							if(FlQueueIrpToThread_DisketteExtension__PoweringDown >= 1 && FlQueueIrpToThread_DisketteExtension__PoweringDown <= 1) {
								myStatus = -1073741101;
								FlQueueIrpToThread_Irp__IoStatus__Status = -1073741101;
								FlQueueIrpToThread_Irp__IoStatus__Information = 0;
								retres11 = -1073741101;
								TRACER_RV = (retres11);
								FloppyPnp_ntStatus = TRACER_RV;
								TRACER_RV = nondet();
								FloppyPnp_CIL___Tmp29 = FloppyPnp_ntStatus;
L164:;
								FloppyPnp_ntStatus = -1073741823;
								FloppyPnp_Irp__IoStatus__Status = FloppyPnp_ntStatus;
								myStatus = FloppyPnp_ntStatus;
								FloppyPnp_Irp__IoStatus__Information = 0;
{
								int IofCompleteRequest_Irp ; int IofCompleteRequest_PriorityBoost ;
								IofCompleteRequest_Irp = FloppyPnp_Irp;
								IofCompleteRequest_PriorityBoost = 0;
								safety = safety + (s - NP);
								s = DC;
								;
								TRACER_RV = nondet();
								goto L142;
}
							}
							else if(FlQueueIrpToThread_DisketteExtension__PoweringDown < 1) {
L165:;
								FlQueueIrpToThread_DisketteExtension__ThreadReferenceCount = FlQueueIrpToThread_DisketteExtension__ThreadReferenceCount + 1;
								if(FlQueueIrpToThread_DisketteExtension__ThreadReferenceCount >= 0 && FlQueueIrpToThread_DisketteExtension__ThreadReferenceCount <= 0) {
{
 int PsCreateSystemThread_tmp_ndt_11 ;
int retres9 ;
									int PsCreateSystemThread_ThreadHandle ; int PsCreateSystemThread_DesiredAccess ; int PsCreateSystemThread_ObjectAttributes ; int PsCreateSystemThread_ProcessHandle ; int PsCreateSystemThread_ClientId ; int PsCreateSystemThread_StartRoutine ; int PsCreateSystemThread_StartContext ;
									PsCreateSystemThread_ThreadHandle = FlQueueIrpToThread_threadHandle;
									PsCreateSystemThread_DesiredAccess = 0;
									PsCreateSystemThread_ObjectAttributes = FlQueueIrpToThread_ObjAttributes;
									PsCreateSystemThread_ProcessHandle = 0;
									PsCreateSystemThread_ClientId = 0;
									PsCreateSystemThread_StartRoutine = FloppyThread;
									PsCreateSystemThread_StartContext = FlQueueIrpToThread_DisketteExtension;
									PsCreateSystemThread_tmp_ndt_11 = __VERIFIER_nondet_int();
									if(PsCreateSystemThread_tmp_ndt_11 >= 0 && PsCreateSystemThread_tmp_ndt_11 <= 0) {
										retres9 = 0;
										TRACER_RV = (retres9);
										FlQueueIrpToThread_status = TRACER_RV;
										TRACER_RV = nondet();
{
 int ObReferenceObjectByHandle_tmp_ndt_10 ;
int retres8 ;
										int ObReferenceObjectByHandle_Handle ; int ObReferenceObjectByHandle_DesiredAccess ; int ObReferenceObjectByHandle_ObjectType ; int ObReferenceObjectByHandle_AccessMode ; int ObReferenceObjectByHandle_Object ; int ObReferenceObjectByHandle_HandleInformation ;
										ObReferenceObjectByHandle_Handle = FlQueueIrpToThread_threadHandle;
										ObReferenceObjectByHandle_DesiredAccess = 1048576;
										ObReferenceObjectByHandle_ObjectType = 0;
										ObReferenceObjectByHandle_AccessMode = KernelMode;
										ObReferenceObjectByHandle_Object = FlQueueIrpToThread_DisketteExtension__FloppyThread;
										ObReferenceObjectByHandle_HandleInformation = 0;
										ObReferenceObjectByHandle_tmp_ndt_10 = __VERIFIER_nondet_int();
										if(ObReferenceObjectByHandle_tmp_ndt_10 >= 0 && ObReferenceObjectByHandle_tmp_ndt_10 <= 0) {
											retres8 = 0;
											TRACER_RV = (retres8);
											FlQueueIrpToThread_status = TRACER_RV;
											TRACER_RV = nondet();
{
 int ZwClose_tmp_ndt_12 ;
int retres3 ;
											int ZwClose_Handle ;
											ZwClose_Handle = FlQueueIrpToThread_threadHandle;
L166:;
											;
											TRACER_RV = nondet();
L167:;
											safety = safety + (pended - 0);
											pended = 1;
											retres11 = 259;
											TRACER_RV = (retres11);
											FloppyPnp_ntStatus = TRACER_RV;
											TRACER_RV = nondet();
											FloppyPnp_CIL___Tmp29 = FloppyPnp_ntStatus;
{
 int KeWaitForSingleObject_tmp_ndt_9 ;
int retres7 ;
											int KeWaitForSingleObject_Object ; int KeWaitForSingleObject_WaitReason ; int KeWaitForSingleObject_WaitMode ; int KeWaitForSingleObject_Alertable ; int KeWaitForSingleObject_Timeout ;
											KeWaitForSingleObject_Object = FloppyPnp_disketteExtension__FloppyThread;
											KeWaitForSingleObject_WaitReason = Executive;
											KeWaitForSingleObject_WaitMode = KernelMode;
											KeWaitForSingleObject_Alertable = 0;
											KeWaitForSingleObject_Timeout = 0;
L168:;
											;
											TRACER_RV = nondet();
											FloppyPnp_disketteExtension__FloppyThread = 0;
											FloppyPnp_Irp__IoStatus__Status = 0;
											myStatus = 0;
											safety = safety + (s - NP);
											s = SKIP1;
											FloppyPnp_Irp__CurrentLocation = FloppyPnp_Irp__CurrentLocation + 1;
											FloppyPnp_Irp__Tail__Overlay__CurrentStackLocation = FloppyPnp_Irp__Tail__Overlay__CurrentStackLocation + 1;
{
 int IofCallDriver_returnVal2 ;
int IofCallDriver_compRetStatus1 ;
int IofCallDriver_lcontext ;
int IofCallDriver_CIL___Tmp7 ;
int IofCallDriver_tmp_ndt_7 ;
int IofCallDriver_tmp_ndt_8 ;
											int IofCallDriver_DeviceObject ; int IofCallDriver_Irp ;
											IofCallDriver_DeviceObject = FloppyPnp_disketteExtension__TargetObject;
											IofCallDriver_Irp = FloppyPnp_Irp;
											IofCallDriver_tmp_ndt_7 = __VERIFIER_nondet_int();
											if(IofCallDriver_tmp_ndt_7 >= 0 && IofCallDriver_tmp_ndt_7 <= 0) {
												safety = safety + (s - SKIP1);
												s = SKIP2;
												lowerDriverReturn = IofCallDriver_returnVal2;
												FloppyPnp_ntStatus = TRACER_RV;
												TRACER_RV = nondet();
L169:;
												main_status = TRACER_RV;
												TRACER_RV = nondet();
												goto L57;
											}
											else if(IofCallDriver_tmp_ndt_7 < 0) {
L170:;
												IofCallDriver_tmp_ndt_8 = __VERIFIER_nondet_int();
												if(IofCallDriver_tmp_ndt_8 >= 1 && IofCallDriver_tmp_ndt_8 <= 1) {
													IofCallDriver_returnVal2 = -1073741823;
													safety = safety + (s - SKIP1);
													s = SKIP2;
													lowerDriverReturn = IofCallDriver_returnVal2;
													TRACER_RV = (IofCallDriver_returnVal2);
													FloppyPnp_ntStatus = TRACER_RV;
													TRACER_RV = nondet();
L171:;
													PagingReferenceCount = PagingReferenceCount - 1;
													retres31 = FloppyPnp_ntStatus;
													TRACER_RV = (retres31);
													main_status = TRACER_RV;
													TRACER_RV = nondet();
													goto L61;
												}
												else if(IofCallDriver_tmp_ndt_8 < 1) {
L172:;
													IofCallDriver_returnVal2 = 259;
													safety = safety + (s - SKIP1);
													s = SKIP2;
													lowerDriverReturn = IofCallDriver_returnVal2;
													TRACER_RV = (IofCallDriver_returnVal2);
													FloppyPnp_ntStatus = TRACER_RV;
													TRACER_RV = nondet();
L173:;
													PagingReferenceCount = PagingReferenceCount - 1;
													retres31 = FloppyPnp_ntStatus;
													TRACER_RV = (retres31);
													main_status = TRACER_RV;
													TRACER_RV = nondet();
													goto L64;
												}
												else {
													goto L172;
												}
											}
											else {
												goto L170;
											}
}
}
}
										}
										else if(ObReferenceObjectByHandle_tmp_ndt_10 < 0) {
L174:;
											retres8 = -1073741823;
											TRACER_RV = (retres8);
											FlQueueIrpToThread_status = TRACER_RV;
											TRACER_RV = nondet();
{
 int ZwClose_tmp_ndt_12 ;
int retres3 ;
											int ZwClose_Handle ;
											ZwClose_Handle = FlQueueIrpToThread_threadHandle;
L175:;
											;
											TRACER_RV = nondet();
											retres11 = FlQueueIrpToThread_status;
											TRACER_returning = 1;
L176:;
											TRACER_RV = (retres11);
											FloppyPnp_ntStatus = TRACER_RV;
											TRACER_RV = nondet();
											FloppyPnp_CIL___Tmp29 = FloppyPnp_ntStatus;
											goto L164;
}
										}
										else {
											goto L174;
										}
}
									}
									else if(PsCreateSystemThread_tmp_ndt_11 < 0) {
L177:;
										retres9 = -1073741823;
										TRACER_RV = (retres9);
										FlQueueIrpToThread_status = TRACER_RV;
										TRACER_RV = nondet();
										FlQueueIrpToThread_DisketteExtension__ThreadReferenceCount = -1;
										PagingReferenceCount = PagingReferenceCount - 1;
										retres11 = FlQueueIrpToThread_status;
										TRACER_returning = 1;
										goto L176;
									}
									else {
										goto L177;
									}
}
								}
								else if(FlQueueIrpToThread_DisketteExtension__ThreadReferenceCount < 0) {
									goto L167;
								}
								else {
									goto L167;
								}
							}
							else {
								goto L165;
							}
}
						}
						else {
							goto L163;
						}
					}
					else if(FloppyPnp_irpSp__MinorFunction < 5) {
						if(FloppyPnp_irpSp__MinorFunction >= 1 && FloppyPnp_irpSp__MinorFunction <= 1) {
							if(FloppyPnp_disketteExtension__IsStarted >= 0 && FloppyPnp_disketteExtension__IsStarted <= 0) {
								safety = safety + (s - NP);
								s = SKIP1;
								FloppyPnp_Irp__CurrentLocation = FloppyPnp_Irp__CurrentLocation + 1;
								FloppyPnp_Irp__Tail__Overlay__CurrentStackLocation = FloppyPnp_Irp__Tail__Overlay__CurrentStackLocation + 1;
{
 int IofCallDriver_returnVal2 ;
int IofCallDriver_compRetStatus1 ;
int IofCallDriver_lcontext ;
int IofCallDriver_CIL___Tmp7 ;
int IofCallDriver_tmp_ndt_7 ;
int IofCallDriver_tmp_ndt_8 ;
								int IofCallDriver_DeviceObject ; int IofCallDriver_Irp ;
								IofCallDriver_DeviceObject = FloppyPnp_disketteExtension__TargetObject;
								IofCallDriver_Irp = FloppyPnp_Irp;
								IofCallDriver_tmp_ndt_7 = __VERIFIER_nondet_int();
								if(IofCallDriver_tmp_ndt_7 >= 0 && IofCallDriver_tmp_ndt_7 <= 0) {
									IofCallDriver_returnVal2 = 0;
									safety = safety + (s - SKIP1);
									s = SKIP2;
									lowerDriverReturn = IofCallDriver_returnVal2;
									TRACER_RV = (IofCallDriver_returnVal2);
									FloppyPnp_ntStatus = TRACER_RV;
									TRACER_RV = nondet();
									retres31 = FloppyPnp_ntStatus;
									TRACER_returning = 1;
									goto L158;
								}
								else if(IofCallDriver_tmp_ndt_7 < 0) {
L178:;
									IofCallDriver_tmp_ndt_8 = __VERIFIER_nondet_int();
									if(IofCallDriver_tmp_ndt_8 >= 1 && IofCallDriver_tmp_ndt_8 <= 1) {
										IofCallDriver_returnVal2 = -1073741823;
										safety = safety + (s - SKIP1);
										s = SKIP2;
										lowerDriverReturn = IofCallDriver_returnVal2;
										TRACER_RV = (IofCallDriver_returnVal2);
										FloppyPnp_ntStatus = TRACER_RV;
										TRACER_RV = nondet();
										retres31 = FloppyPnp_ntStatus;
										TRACER_returning = 1;
										goto L160;
									}
									else if(IofCallDriver_tmp_ndt_8 < 1) {
L179:;
										IofCallDriver_returnVal2 = 259;
										safety = safety + (s - SKIP1);
										s = SKIP2;
										lowerDriverReturn = IofCallDriver_returnVal2;
										TRACER_RV = (IofCallDriver_returnVal2);
										FloppyPnp_ntStatus = TRACER_RV;
										TRACER_RV = nondet();
										retres31 = FloppyPnp_ntStatus;
										TRACER_returning = 1;
										goto L162;
									}
									else {
										goto L179;
									}
								}
								else {
									goto L178;
								}
}
							}
							else if(FloppyPnp_disketteExtension__IsStarted < 0) {
L180:;
{
 int FlQueueIrpToThread_status ;
int FlQueueIrpToThread_threadHandle ;
int FlQueueIrpToThread_DisketteExtension__PoweringDown ;
int FlQueueIrpToThread_DisketteExtension__ThreadReferenceCount ;
int FlQueueIrpToThread_DisketteExtension__FloppyThread ;
int FlQueueIrpToThread_Irp__IoStatus__Status ;
int FlQueueIrpToThread_Irp__IoStatus__Information ;
int FlQueueIrpToThread_ObjAttributes ;
int retres11 ;
int TRACER_returning ;
								int FlQueueIrpToThread_Irp ; int FlQueueIrpToThread_DisketteExtension ;
								FlQueueIrpToThread_Irp = FloppyPnp_Irp;
								FlQueueIrpToThread_DisketteExtension = FloppyPnp_disketteExtension;
								TRACER_returning = 0;
								if(FlQueueIrpToThread_DisketteExtension__PoweringDown >= 1 && FlQueueIrpToThread_DisketteExtension__PoweringDown <= 1) {
									myStatus = -1073741101;
									FlQueueIrpToThread_Irp__IoStatus__Status = -1073741101;
									FlQueueIrpToThread_Irp__IoStatus__Information = 0;
									retres11 = -1073741101;
									TRACER_RV = (retres11);
									FloppyPnp_ntStatus = TRACER_RV;
									TRACER_RV = nondet();
									FloppyPnp_CIL___Tmp29 = FloppyPnp_ntStatus;
L181:;
									FloppyPnp_ntStatus = -1073741823;
									FloppyPnp_Irp__IoStatus__Status = FloppyPnp_ntStatus;
									myStatus = FloppyPnp_ntStatus;
									FloppyPnp_Irp__IoStatus__Information = 0;
{
									int IofCompleteRequest_Irp ; int IofCompleteRequest_PriorityBoost ;
									IofCompleteRequest_Irp = FloppyPnp_Irp;
									IofCompleteRequest_PriorityBoost = 0;
									safety = safety + (s - NP);
									s = DC;
									;
									TRACER_RV = nondet();
									goto L142;
}
								}
								else if(FlQueueIrpToThread_DisketteExtension__PoweringDown < 1) {
L182:;
									FlQueueIrpToThread_DisketteExtension__ThreadReferenceCount = FlQueueIrpToThread_DisketteExtension__ThreadReferenceCount + 1;
									if(FlQueueIrpToThread_DisketteExtension__ThreadReferenceCount >= 0 && FlQueueIrpToThread_DisketteExtension__ThreadReferenceCount <= 0) {
{
 int PsCreateSystemThread_tmp_ndt_11 ;
int retres9 ;
										int PsCreateSystemThread_ThreadHandle ; int PsCreateSystemThread_DesiredAccess ; int PsCreateSystemThread_ObjectAttributes ; int PsCreateSystemThread_ProcessHandle ; int PsCreateSystemThread_ClientId ; int PsCreateSystemThread_StartRoutine ; int PsCreateSystemThread_StartContext ;
										PsCreateSystemThread_ThreadHandle = FlQueueIrpToThread_threadHandle;
										PsCreateSystemThread_DesiredAccess = 0;
										PsCreateSystemThread_ObjectAttributes = FlQueueIrpToThread_ObjAttributes;
										PsCreateSystemThread_ProcessHandle = 0;
										PsCreateSystemThread_ClientId = 0;
										PsCreateSystemThread_StartRoutine = FloppyThread;
										PsCreateSystemThread_StartContext = FlQueueIrpToThread_DisketteExtension;
										PsCreateSystemThread_tmp_ndt_11 = __VERIFIER_nondet_int();
										if(PsCreateSystemThread_tmp_ndt_11 >= 0 && PsCreateSystemThread_tmp_ndt_11 <= 0) {
											retres9 = 0;
											TRACER_RV = (retres9);
											FlQueueIrpToThread_status = TRACER_RV;
											TRACER_RV = nondet();
{
 int ObReferenceObjectByHandle_tmp_ndt_10 ;
int retres8 ;
											int ObReferenceObjectByHandle_Handle ; int ObReferenceObjectByHandle_DesiredAccess ; int ObReferenceObjectByHandle_ObjectType ; int ObReferenceObjectByHandle_AccessMode ; int ObReferenceObjectByHandle_Object ; int ObReferenceObjectByHandle_HandleInformation ;
											ObReferenceObjectByHandle_Handle = FlQueueIrpToThread_threadHandle;
											ObReferenceObjectByHandle_DesiredAccess = 1048576;
											ObReferenceObjectByHandle_ObjectType = 0;
											ObReferenceObjectByHandle_AccessMode = KernelMode;
											ObReferenceObjectByHandle_Object = FlQueueIrpToThread_DisketteExtension__FloppyThread;
											ObReferenceObjectByHandle_HandleInformation = 0;
											ObReferenceObjectByHandle_tmp_ndt_10 = __VERIFIER_nondet_int();
											if(ObReferenceObjectByHandle_tmp_ndt_10 >= 0 && ObReferenceObjectByHandle_tmp_ndt_10 <= 0) {
												retres8 = 0;
												TRACER_RV = (retres8);
												FlQueueIrpToThread_status = TRACER_RV;
												TRACER_RV = nondet();
{
 int ZwClose_tmp_ndt_12 ;
int retres3 ;
												int ZwClose_Handle ;
												ZwClose_Handle = FlQueueIrpToThread_threadHandle;
L183:;
												;
												TRACER_RV = nondet();
L184:;
												safety = safety + (pended - 0);
												pended = 1;
												retres11 = 259;
												TRACER_RV = (retres11);
												FloppyPnp_ntStatus = TRACER_RV;
												TRACER_RV = nondet();
												FloppyPnp_CIL___Tmp29 = FloppyPnp_ntStatus;
{
 int KeWaitForSingleObject_tmp_ndt_9 ;
int retres7 ;
												int KeWaitForSingleObject_Object ; int KeWaitForSingleObject_WaitReason ; int KeWaitForSingleObject_WaitMode ; int KeWaitForSingleObject_Alertable ; int KeWaitForSingleObject_Timeout ;
												KeWaitForSingleObject_Object = FloppyPnp_disketteExtension__FloppyThread;
												KeWaitForSingleObject_WaitReason = Executive;
												KeWaitForSingleObject_WaitMode = KernelMode;
												KeWaitForSingleObject_Alertable = 0;
												KeWaitForSingleObject_Timeout = 0;
L185:;
												;
												TRACER_RV = nondet();
												FloppyPnp_disketteExtension__FloppyThread = 0;
												FloppyPnp_Irp__IoStatus__Status = 0;
												myStatus = 0;
												safety = safety + (s - NP);
												s = SKIP1;
												FloppyPnp_Irp__CurrentLocation = FloppyPnp_Irp__CurrentLocation + 1;
												FloppyPnp_Irp__Tail__Overlay__CurrentStackLocation = FloppyPnp_Irp__Tail__Overlay__CurrentStackLocation + 1;
{
 int IofCallDriver_returnVal2 ;
int IofCallDriver_compRetStatus1 ;
int IofCallDriver_lcontext ;
int IofCallDriver_CIL___Tmp7 ;
int IofCallDriver_tmp_ndt_7 ;
int IofCallDriver_tmp_ndt_8 ;
												int IofCallDriver_DeviceObject ; int IofCallDriver_Irp ;
												IofCallDriver_DeviceObject = FloppyPnp_disketteExtension__TargetObject;
												IofCallDriver_Irp = FloppyPnp_Irp;
												IofCallDriver_tmp_ndt_7 = __VERIFIER_nondet_int();
												if(IofCallDriver_tmp_ndt_7 >= 0 && IofCallDriver_tmp_ndt_7 <= 0) {
													safety = safety + (s - SKIP1);
													s = SKIP2;
													lowerDriverReturn = IofCallDriver_returnVal2;
													FloppyPnp_ntStatus = TRACER_RV;
													TRACER_RV = nondet();
													goto L169;
												}
												else if(IofCallDriver_tmp_ndt_7 < 0) {
L186:;
													IofCallDriver_tmp_ndt_8 = __VERIFIER_nondet_int();
													if(IofCallDriver_tmp_ndt_8 >= 1 && IofCallDriver_tmp_ndt_8 <= 1) {
														IofCallDriver_returnVal2 = -1073741823;
														safety = safety + (s - SKIP1);
														s = SKIP2;
														lowerDriverReturn = IofCallDriver_returnVal2;
														TRACER_RV = (IofCallDriver_returnVal2);
														FloppyPnp_ntStatus = TRACER_RV;
														TRACER_RV = nondet();
														goto L171;
													}
													else if(IofCallDriver_tmp_ndt_8 < 1) {
L187:;
														IofCallDriver_returnVal2 = 259;
														safety = safety + (s - SKIP1);
														s = SKIP2;
														lowerDriverReturn = IofCallDriver_returnVal2;
														TRACER_RV = (IofCallDriver_returnVal2);
														FloppyPnp_ntStatus = TRACER_RV;
														TRACER_RV = nondet();
														goto L173;
													}
													else {
														goto L187;
													}
												}
												else {
													goto L186;
												}
}
}
}
											}
											else if(ObReferenceObjectByHandle_tmp_ndt_10 < 0) {
L188:;
												retres8 = -1073741823;
												TRACER_RV = (retres8);
												FlQueueIrpToThread_status = TRACER_RV;
												TRACER_RV = nondet();
{
 int ZwClose_tmp_ndt_12 ;
int retres3 ;
												int ZwClose_Handle ;
												ZwClose_Handle = FlQueueIrpToThread_threadHandle;
L189:;
												;
												TRACER_RV = nondet();
												retres11 = FlQueueIrpToThread_status;
												TRACER_returning = 1;
L190:;
												TRACER_RV = (retres11);
												FloppyPnp_ntStatus = TRACER_RV;
												TRACER_RV = nondet();
												FloppyPnp_CIL___Tmp29 = FloppyPnp_ntStatus;
												goto L181;
}
											}
											else {
												goto L188;
											}
}
										}
										else if(PsCreateSystemThread_tmp_ndt_11 < 0) {
L191:;
											retres9 = -1073741823;
											TRACER_RV = (retres9);
											FlQueueIrpToThread_status = TRACER_RV;
											TRACER_RV = nondet();
											FlQueueIrpToThread_DisketteExtension__ThreadReferenceCount = -1;
											PagingReferenceCount = PagingReferenceCount - 1;
											retres11 = FlQueueIrpToThread_status;
											TRACER_returning = 1;
											goto L190;
										}
										else {
											goto L191;
										}
}
									}
									else if(FlQueueIrpToThread_DisketteExtension__ThreadReferenceCount < 0) {
										goto L184;
									}
									else {
										goto L184;
									}
								}
								else {
									goto L182;
								}
}
							}
							else {
								goto L180;
							}
						}
						else if(FloppyPnp_irpSp__MinorFunction < 1) {
							goto L149;
						}
						else {
L192:;
							if(FloppyPnp_irpSp__MinorFunction >= 3 && FloppyPnp_irpSp__MinorFunction <= 3) {
								if(FloppyPnp_disketteExtension__IsStarted >= 0 && FloppyPnp_disketteExtension__IsStarted <= 0) {
									FloppyPnp_Irp__IoStatus__Status = 0;
									myStatus = 0;
									safety = safety + (s - NP);
									s = SKIP1;
									FloppyPnp_Irp__CurrentLocation = FloppyPnp_Irp__CurrentLocation + 1;
									FloppyPnp_Irp__Tail__Overlay__CurrentStackLocation = FloppyPnp_Irp__Tail__Overlay__CurrentStackLocation + 1;
{
 int IofCallDriver_returnVal2 ;
int IofCallDriver_compRetStatus1 ;
int IofCallDriver_lcontext ;
int IofCallDriver_CIL___Tmp7 ;
int IofCallDriver_tmp_ndt_7 ;
int IofCallDriver_tmp_ndt_8 ;
									int IofCallDriver_DeviceObject ; int IofCallDriver_Irp ;
									IofCallDriver_DeviceObject = FloppyPnp_disketteExtension__TargetObject;
									IofCallDriver_Irp = FloppyPnp_Irp;
									IofCallDriver_tmp_ndt_7 = __VERIFIER_nondet_int();
									if(IofCallDriver_tmp_ndt_7 >= 0 && IofCallDriver_tmp_ndt_7 <= 0) {
										IofCallDriver_returnVal2 = 0;
										safety = safety + (s - SKIP1);
										s = SKIP2;
										lowerDriverReturn = IofCallDriver_returnVal2;
										TRACER_RV = (IofCallDriver_returnVal2);
										FloppyPnp_ntStatus = TRACER_RV;
										TRACER_RV = nondet();
										goto L150;
									}
									else if(IofCallDriver_tmp_ndt_7 < 0) {
L193:;
										IofCallDriver_tmp_ndt_8 = __VERIFIER_nondet_int();
										if(IofCallDriver_tmp_ndt_8 >= 1 && IofCallDriver_tmp_ndt_8 <= 1) {
											IofCallDriver_returnVal2 = -1073741823;
											safety = safety + (s - SKIP1);
											s = SKIP2;
											lowerDriverReturn = IofCallDriver_returnVal2;
											TRACER_RV = (IofCallDriver_returnVal2);
											FloppyPnp_ntStatus = TRACER_RV;
											TRACER_RV = nondet();
											goto L153;
										}
										else if(IofCallDriver_tmp_ndt_8 < 1) {
L194:;
											IofCallDriver_returnVal2 = 259;
											safety = safety + (s - SKIP1);
											s = SKIP2;
											lowerDriverReturn = IofCallDriver_returnVal2;
											TRACER_RV = (IofCallDriver_returnVal2);
											FloppyPnp_ntStatus = TRACER_RV;
											TRACER_RV = nondet();
											goto L156;
										}
										else {
											goto L194;
										}
									}
									else {
										goto L193;
									}
}
								}
								else if(FloppyPnp_disketteExtension__IsStarted < 0) {
L195:;
									FloppyPnp_Irp__IoStatus__Status = 0;
									myStatus = 0;
									FloppyPnp_irpSp___0 = FloppyPnp_Irp__Tail__Overlay__CurrentStackLocation;
									FloppyPnp_nextIrpSp = FloppyPnp_Irp__Tail__Overlay__CurrentStackLocation - 1;
									FloppyPnp_nextIrpSp__Control = 0;
									safety = safety + (s - NP);
									safety = safety + (compRegistered - 0);
									compRegistered = 1;
									FloppyPnp_irpSp___1 = FloppyPnp_Irp__Tail__Overlay__CurrentStackLocation - 1;
									FloppyPnp_irpSp__Context = FloppyPnp_doneEvent;
									FloppyPnp_irpSp__Control = 224;
{
 int IofCallDriver_returnVal2 ;
int IofCallDriver_compRetStatus1 ;
int IofCallDriver_lcontext ;
int IofCallDriver_CIL___Tmp7 ;
int IofCallDriver_tmp_ndt_7 ;
int IofCallDriver_tmp_ndt_8 ;
									int IofCallDriver_DeviceObject ; int IofCallDriver_Irp ;
									IofCallDriver_DeviceObject = FloppyPnp_disketteExtension__TargetObject;
									IofCallDriver_Irp = FloppyPnp_Irp;
{
 int retres4 ;
									int FloppyPnpComplete_DeviceObject ; int FloppyPnpComplete_Irp ; int FloppyPnpComplete_Context ;
									FloppyPnpComplete_DeviceObject = IofCallDriver_DeviceObject;
									FloppyPnpComplete_Irp = IofCallDriver_Irp;
									FloppyPnpComplete_Context = IofCallDriver_lcontext;
{
 int KeSetEvent_l ;
									int KeSetEvent_Event ; int KeSetEvent_Increment ; int KeSetEvent_Wait ;
									KeSetEvent_Event = FloppyPnpComplete_Context;
									KeSetEvent_Increment = 1;
									KeSetEvent_Wait = 0;
									setEventCalled = 1;
									;
									TRACER_RV = nondet();
									retres4 = -1073741802;
									TRACER_RV = (retres4);
									IofCallDriver_compRetStatus1 = TRACER_RV;
									TRACER_RV = nondet();
									IofCallDriver_CIL___Tmp7 = IofCallDriver_compRetStatus1;
{
									safety = safety + (s - NP);
									s = MPR1;
									;
									TRACER_RV = nondet();
									IofCallDriver_tmp_ndt_7 = __VERIFIER_nondet_int();
									if(IofCallDriver_tmp_ndt_7 >= 0 && IofCallDriver_tmp_ndt_7 <= 0) {
										IofCallDriver_returnVal2 = 0;
										s = NP;
										lowerDriverReturn = IofCallDriver_returnVal2;
										TRACER_RV = (IofCallDriver_returnVal2);
										FloppyPnp_ntStatus = TRACER_RV;
										TRACER_RV = nondet();
										FloppyPnp_CIL___Tmp30 = FloppyPnp_ntStatus;
L196:;
{
										int IofCompleteRequest_Irp ; int IofCompleteRequest_PriorityBoost ;
										IofCompleteRequest_Irp = FloppyPnp_Irp;
										IofCompleteRequest_PriorityBoost = 0;
										safety = safety + (s - NP);
										s = DC;
										;
										TRACER_RV = nondet();
										goto L137;
}
									}
									else if(IofCallDriver_tmp_ndt_7 < 0) {
L197:;
										IofCallDriver_tmp_ndt_8 = __VERIFIER_nondet_int();
										if(IofCallDriver_tmp_ndt_8 >= 1 && IofCallDriver_tmp_ndt_8 <= 1) {
											IofCallDriver_returnVal2 = -1073741823;
											s = NP;
											lowerDriverReturn = IofCallDriver_returnVal2;
											TRACER_RV = (IofCallDriver_returnVal2);
											FloppyPnp_ntStatus = TRACER_RV;
											TRACER_RV = nondet();
{
											int IofCompleteRequest_Irp ; int IofCompleteRequest_PriorityBoost ;
											IofCompleteRequest_Irp = FloppyPnp_Irp;
											IofCompleteRequest_PriorityBoost = 0;
											safety = safety + (s - NP);
											s = DC;
											;
											TRACER_RV = nondet();
											goto L142;
}
										}
										else if(IofCallDriver_tmp_ndt_8 < 1) {
L198:;
											IofCallDriver_returnVal2 = 259;
											s = MPR3;
											lowerDriverReturn = IofCallDriver_returnVal2;
											TRACER_RV = (IofCallDriver_returnVal2);
											FloppyPnp_ntStatus = TRACER_RV;
											TRACER_RV = nondet();
											FloppyPnp_CIL___Tmp30 = FloppyPnp_ntStatus;
{
 int KeWaitForSingleObject_tmp_ndt_9 ;
int retres7 ;
											int KeWaitForSingleObject_Object ; int KeWaitForSingleObject_WaitReason ; int KeWaitForSingleObject_WaitMode ; int KeWaitForSingleObject_Alertable ; int KeWaitForSingleObject_Timeout ;
											KeWaitForSingleObject_Object = FloppyPnp_doneEvent;
											KeWaitForSingleObject_WaitReason = Executive;
											KeWaitForSingleObject_WaitMode = KernelMode;
											KeWaitForSingleObject_Alertable = 0;
											KeWaitForSingleObject_Timeout = 0;
											s = NP;
											setEventCalled = 0;
L199:;
											;
											TRACER_RV = nondet();
											FloppyPnp_ntStatus = myStatus;
											goto L196;
}
										}
										else {
											goto L198;
										}
									}
									else {
										goto L197;
									}
}
}
}
}
								}
								else {
									goto L195;
								}
							}
							else if(FloppyPnp_irpSp__MinorFunction < 3) {
L200:;
								if(FloppyPnp_irpSp__MinorFunction >= 2 && FloppyPnp_irpSp__MinorFunction <= 2) {
									FloppyPnp_disketteExtension__HoldNewRequests = 0;
									FloppyPnp_disketteExtension__IsStarted = 0;
									FloppyPnp_disketteExtension__IsRemoved = 1;
									safety = safety + (s - NP);
									s = SKIP1;
									FloppyPnp_Irp__CurrentLocation = FloppyPnp_Irp__CurrentLocation + 1;
									FloppyPnp_Irp__Tail__Overlay__CurrentStackLocation = FloppyPnp_Irp__Tail__Overlay__CurrentStackLocation + 1;
									FloppyPnp_Irp__IoStatus__Status = 0;
									myStatus = 0;
{
 int IofCallDriver_returnVal2 ;
int IofCallDriver_compRetStatus1 ;
int IofCallDriver_lcontext ;
int IofCallDriver_CIL___Tmp7 ;
int IofCallDriver_tmp_ndt_7 ;
int IofCallDriver_tmp_ndt_8 ;
									int IofCallDriver_DeviceObject ; int IofCallDriver_Irp ;
									IofCallDriver_DeviceObject = FloppyPnp_disketteExtension__TargetObject;
									IofCallDriver_Irp = FloppyPnp_Irp;
									IofCallDriver_tmp_ndt_7 = __VERIFIER_nondet_int();
									if(IofCallDriver_tmp_ndt_7 >= 0 && IofCallDriver_tmp_ndt_7 <= 0) {
										IofCallDriver_returnVal2 = 0;
										safety = safety + (s - SKIP1);
										s = SKIP2;
										lowerDriverReturn = IofCallDriver_returnVal2;
										TRACER_RV = (IofCallDriver_returnVal2);
										FloppyPnp_ntStatus = TRACER_RV;
										TRACER_RV = nondet();
L201:;
{
 int IoSetDeviceInterfaceState_tmp_ndt_6 ;
int retres4 ;
										int IoSetDeviceInterfaceState_SymbolicLinkName ; int IoSetDeviceInterfaceState_Enable ;
										IoSetDeviceInterfaceState_SymbolicLinkName = FloppyPnp_disketteExtension__InterfaceString;
										IoSetDeviceInterfaceState_Enable = 0;
L202:;
										;
										TRACER_RV = nondet();
L203:;
L204:;
{
 int IoDeleteSymbolicLink_tmp_ndt_3 ;
int retres3 ;
										int IoDeleteSymbolicLink_SymbolicLinkName ;
										IoDeleteSymbolicLink_SymbolicLinkName = FloppyPnp_disketteExtension__ArcName;
L205:;
										;
										TRACER_RV = nondet();
L206:;
										goto L150;
}
}
									}
									else if(IofCallDriver_tmp_ndt_7 < 0) {
L207:;
										IofCallDriver_tmp_ndt_8 = __VERIFIER_nondet_int();
										if(IofCallDriver_tmp_ndt_8 >= 1 && IofCallDriver_tmp_ndt_8 <= 1) {
											IofCallDriver_returnVal2 = -1073741823;
											safety = safety + (s - SKIP1);
											s = SKIP2;
											lowerDriverReturn = IofCallDriver_returnVal2;
											TRACER_RV = (IofCallDriver_returnVal2);
											FloppyPnp_ntStatus = TRACER_RV;
											TRACER_RV = nondet();
L208:;
{
 int IoSetDeviceInterfaceState_tmp_ndt_6 ;
int retres4 ;
											int IoSetDeviceInterfaceState_SymbolicLinkName ; int IoSetDeviceInterfaceState_Enable ;
											IoSetDeviceInterfaceState_SymbolicLinkName = FloppyPnp_disketteExtension__InterfaceString;
											IoSetDeviceInterfaceState_Enable = 0;
L209:;
											;
											TRACER_RV = nondet();
L210:;
L211:;
{
 int IoDeleteSymbolicLink_tmp_ndt_3 ;
int retres3 ;
											int IoDeleteSymbolicLink_SymbolicLinkName ;
											IoDeleteSymbolicLink_SymbolicLinkName = FloppyPnp_disketteExtension__ArcName;
L212:;
											;
											TRACER_RV = nondet();
L213:;
											goto L153;
}
}
										}
										else if(IofCallDriver_tmp_ndt_8 < 1) {
L214:;
											IofCallDriver_returnVal2 = 259;
											safety = safety + (s - SKIP1);
											s = SKIP2;
											lowerDriverReturn = IofCallDriver_returnVal2;
											TRACER_RV = (IofCallDriver_returnVal2);
											FloppyPnp_ntStatus = TRACER_RV;
											TRACER_RV = nondet();
L215:;
{
 int IoSetDeviceInterfaceState_tmp_ndt_6 ;
int retres4 ;
											int IoSetDeviceInterfaceState_SymbolicLinkName ; int IoSetDeviceInterfaceState_Enable ;
											IoSetDeviceInterfaceState_SymbolicLinkName = FloppyPnp_disketteExtension__InterfaceString;
											IoSetDeviceInterfaceState_Enable = 0;
L216:;
											;
											TRACER_RV = nondet();
L217:;
L218:;
{
 int IoDeleteSymbolicLink_tmp_ndt_3 ;
int retres3 ;
											int IoDeleteSymbolicLink_SymbolicLinkName ;
											IoDeleteSymbolicLink_SymbolicLinkName = FloppyPnp_disketteExtension__ArcName;
L219:;
											;
											TRACER_RV = nondet();
L220:;
											goto L156;
}
}
										}
										else {
											goto L214;
										}
									}
									else {
										goto L207;
									}
}
								}
								else if(FloppyPnp_irpSp__MinorFunction < 2) {
									goto L149;
								}
								else {
									goto L149;
								}
							}
							else {
								if(FloppyPnp_irpSp__MinorFunction >= 4 && FloppyPnp_irpSp__MinorFunction <= 4) {
									FloppyPnp_disketteExtension__IsStarted = 0;
									FloppyPnp_Irp__IoStatus__Status = 0;
									myStatus = 0;
									safety = safety + (s - NP);
									s = SKIP1;
									FloppyPnp_Irp__CurrentLocation = FloppyPnp_Irp__CurrentLocation + 1;
									FloppyPnp_Irp__Tail__Overlay__CurrentStackLocation = FloppyPnp_Irp__Tail__Overlay__CurrentStackLocation + 1;
{
 int IofCallDriver_returnVal2 ;
int IofCallDriver_compRetStatus1 ;
int IofCallDriver_lcontext ;
int IofCallDriver_CIL___Tmp7 ;
int IofCallDriver_tmp_ndt_7 ;
int IofCallDriver_tmp_ndt_8 ;
									int IofCallDriver_DeviceObject ; int IofCallDriver_Irp ;
									IofCallDriver_DeviceObject = FloppyPnp_disketteExtension__TargetObject;
									IofCallDriver_Irp = FloppyPnp_Irp;
									IofCallDriver_tmp_ndt_7 = __VERIFIER_nondet_int();
									if(IofCallDriver_tmp_ndt_7 >= 0 && IofCallDriver_tmp_ndt_7 <= 0) {
										IofCallDriver_returnVal2 = 0;
										safety = safety + (s - SKIP1);
										s = SKIP2;
										lowerDriverReturn = IofCallDriver_returnVal2;
										TRACER_RV = (IofCallDriver_returnVal2);
										FloppyPnp_ntStatus = TRACER_RV;
										TRACER_RV = nondet();
										goto L150;
									}
									else if(IofCallDriver_tmp_ndt_7 < 0) {
L221:;
										IofCallDriver_tmp_ndt_8 = __VERIFIER_nondet_int();
										if(IofCallDriver_tmp_ndt_8 >= 1 && IofCallDriver_tmp_ndt_8 <= 1) {
											IofCallDriver_returnVal2 = -1073741823;
											safety = safety + (s - SKIP1);
											s = SKIP2;
											lowerDriverReturn = IofCallDriver_returnVal2;
											TRACER_RV = (IofCallDriver_returnVal2);
											FloppyPnp_ntStatus = TRACER_RV;
											TRACER_RV = nondet();
											goto L153;
										}
										else if(IofCallDriver_tmp_ndt_8 < 1) {
L222:;
											IofCallDriver_returnVal2 = 259;
											safety = safety + (s - SKIP1);
											s = SKIP2;
											lowerDriverReturn = IofCallDriver_returnVal2;
											TRACER_RV = (IofCallDriver_returnVal2);
											FloppyPnp_ntStatus = TRACER_RV;
											TRACER_RV = nondet();
											goto L156;
										}
										else {
											goto L222;
										}
									}
									else {
										goto L221;
									}
}
								}
								else if(FloppyPnp_irpSp__MinorFunction < 4) {
									goto L200;
								}
								else {
									goto L200;
								}
							}
						}
					}
					else {
						if(FloppyPnp_irpSp__MinorFunction >= 6 && FloppyPnp_irpSp__MinorFunction <= 6) {
							if(FloppyPnp_disketteExtension__IsStarted >= 0 && FloppyPnp_disketteExtension__IsStarted <= 0) {
								FloppyPnp_Irp__IoStatus__Status = 0;
								myStatus = 0;
								safety = safety + (s - NP);
								s = SKIP1;
								FloppyPnp_Irp__CurrentLocation = FloppyPnp_Irp__CurrentLocation + 1;
								FloppyPnp_Irp__Tail__Overlay__CurrentStackLocation = FloppyPnp_Irp__Tail__Overlay__CurrentStackLocation + 1;
{
 int IofCallDriver_returnVal2 ;
int IofCallDriver_compRetStatus1 ;
int IofCallDriver_lcontext ;
int IofCallDriver_CIL___Tmp7 ;
int IofCallDriver_tmp_ndt_7 ;
int IofCallDriver_tmp_ndt_8 ;
								int IofCallDriver_DeviceObject ; int IofCallDriver_Irp ;
								IofCallDriver_DeviceObject = FloppyPnp_disketteExtension__TargetObject;
								IofCallDriver_Irp = FloppyPnp_Irp;
								IofCallDriver_tmp_ndt_7 = __VERIFIER_nondet_int();
								if(IofCallDriver_tmp_ndt_7 >= 0 && IofCallDriver_tmp_ndt_7 <= 0) {
									IofCallDriver_returnVal2 = 0;
									safety = safety + (s - SKIP1);
									s = SKIP2;
									lowerDriverReturn = IofCallDriver_returnVal2;
									TRACER_RV = (IofCallDriver_returnVal2);
									FloppyPnp_ntStatus = TRACER_RV;
									TRACER_RV = nondet();
									goto L150;
								}
								else if(IofCallDriver_tmp_ndt_7 < 0) {
L223:;
									IofCallDriver_tmp_ndt_8 = __VERIFIER_nondet_int();
									if(IofCallDriver_tmp_ndt_8 >= 1 && IofCallDriver_tmp_ndt_8 <= 1) {
										IofCallDriver_returnVal2 = -1073741823;
										safety = safety + (s - SKIP1);
										s = SKIP2;
										lowerDriverReturn = IofCallDriver_returnVal2;
										TRACER_RV = (IofCallDriver_returnVal2);
										FloppyPnp_ntStatus = TRACER_RV;
										TRACER_RV = nondet();
										goto L153;
									}
									else if(IofCallDriver_tmp_ndt_8 < 1) {
L224:;
										IofCallDriver_returnVal2 = 259;
										safety = safety + (s - SKIP1);
										s = SKIP2;
										lowerDriverReturn = IofCallDriver_returnVal2;
										TRACER_RV = (IofCallDriver_returnVal2);
										FloppyPnp_ntStatus = TRACER_RV;
										TRACER_RV = nondet();
										goto L156;
									}
									else {
										goto L224;
									}
								}
								else {
									goto L223;
								}
}
							}
							else if(FloppyPnp_disketteExtension__IsStarted < 0) {
L225:;
								FloppyPnp_Irp__IoStatus__Status = 0;
								myStatus = 0;
								FloppyPnp_irpSp___0 = FloppyPnp_Irp__Tail__Overlay__CurrentStackLocation;
								FloppyPnp_nextIrpSp = FloppyPnp_Irp__Tail__Overlay__CurrentStackLocation - 1;
								FloppyPnp_nextIrpSp__Control = 0;
								safety = safety + (s - NP);
								safety = safety + (compRegistered - 0);
								compRegistered = 1;
								FloppyPnp_irpSp___1 = FloppyPnp_Irp__Tail__Overlay__CurrentStackLocation - 1;
								FloppyPnp_irpSp__Context = FloppyPnp_doneEvent;
								FloppyPnp_irpSp__Control = 224;
{
 int IofCallDriver_returnVal2 ;
int IofCallDriver_compRetStatus1 ;
int IofCallDriver_lcontext ;
int IofCallDriver_CIL___Tmp7 ;
int IofCallDriver_tmp_ndt_7 ;
int IofCallDriver_tmp_ndt_8 ;
								int IofCallDriver_DeviceObject ; int IofCallDriver_Irp ;
								IofCallDriver_DeviceObject = FloppyPnp_disketteExtension__TargetObject;
								IofCallDriver_Irp = FloppyPnp_Irp;
{
 int retres4 ;
								int FloppyPnpComplete_DeviceObject ; int FloppyPnpComplete_Irp ; int FloppyPnpComplete_Context ;
								FloppyPnpComplete_DeviceObject = IofCallDriver_DeviceObject;
								FloppyPnpComplete_Irp = IofCallDriver_Irp;
								FloppyPnpComplete_Context = IofCallDriver_lcontext;
{
 int KeSetEvent_l ;
								int KeSetEvent_Event ; int KeSetEvent_Increment ; int KeSetEvent_Wait ;
								KeSetEvent_Event = FloppyPnpComplete_Context;
								KeSetEvent_Increment = 1;
								KeSetEvent_Wait = 0;
								setEventCalled = 1;
								;
								TRACER_RV = nondet();
								retres4 = -1073741802;
								TRACER_RV = (retres4);
								IofCallDriver_compRetStatus1 = TRACER_RV;
								TRACER_RV = nondet();
								IofCallDriver_CIL___Tmp7 = IofCallDriver_compRetStatus1;
{
								safety = safety + (s - NP);
								s = MPR1;
								;
								TRACER_RV = nondet();
								IofCallDriver_tmp_ndt_7 = __VERIFIER_nondet_int();
								if(IofCallDriver_tmp_ndt_7 >= 0 && IofCallDriver_tmp_ndt_7 <= 0) {
									IofCallDriver_returnVal2 = 0;
									s = NP;
									lowerDriverReturn = IofCallDriver_returnVal2;
									TRACER_RV = (IofCallDriver_returnVal2);
									FloppyPnp_ntStatus = TRACER_RV;
									TRACER_RV = nondet();
									FloppyPnp_CIL___Tmp30 = FloppyPnp_ntStatus;
L226:;
{
									int IofCompleteRequest_Irp ; int IofCompleteRequest_PriorityBoost ;
									IofCompleteRequest_Irp = FloppyPnp_Irp;
									IofCompleteRequest_PriorityBoost = 0;
									safety = safety + (s - NP);
									s = DC;
									;
									TRACER_RV = nondet();
									goto L137;
}
								}
								else if(IofCallDriver_tmp_ndt_7 < 0) {
L227:;
									IofCallDriver_tmp_ndt_8 = __VERIFIER_nondet_int();
									if(IofCallDriver_tmp_ndt_8 >= 1 && IofCallDriver_tmp_ndt_8 <= 1) {
										IofCallDriver_returnVal2 = -1073741823;
										s = NP;
										lowerDriverReturn = IofCallDriver_returnVal2;
										TRACER_RV = (IofCallDriver_returnVal2);
										FloppyPnp_ntStatus = TRACER_RV;
										TRACER_RV = nondet();
{
										int IofCompleteRequest_Irp ; int IofCompleteRequest_PriorityBoost ;
										IofCompleteRequest_Irp = FloppyPnp_Irp;
										IofCompleteRequest_PriorityBoost = 0;
										safety = safety + (s - NP);
										s = DC;
										;
										TRACER_RV = nondet();
										goto L142;
}
									}
									else if(IofCallDriver_tmp_ndt_8 < 1) {
L228:;
										IofCallDriver_returnVal2 = 259;
										s = MPR3;
										lowerDriverReturn = IofCallDriver_returnVal2;
										TRACER_RV = (IofCallDriver_returnVal2);
										FloppyPnp_ntStatus = TRACER_RV;
										TRACER_RV = nondet();
										FloppyPnp_CIL___Tmp30 = FloppyPnp_ntStatus;
{
 int KeWaitForSingleObject_tmp_ndt_9 ;
int retres7 ;
										int KeWaitForSingleObject_Object ; int KeWaitForSingleObject_WaitReason ; int KeWaitForSingleObject_WaitMode ; int KeWaitForSingleObject_Alertable ; int KeWaitForSingleObject_Timeout ;
										KeWaitForSingleObject_Object = FloppyPnp_doneEvent;
										KeWaitForSingleObject_WaitReason = Executive;
										KeWaitForSingleObject_WaitMode = KernelMode;
										KeWaitForSingleObject_Alertable = 0;
										KeWaitForSingleObject_Timeout = 0;
										s = NP;
										setEventCalled = 0;
L229:;
										;
										TRACER_RV = nondet();
										FloppyPnp_ntStatus = myStatus;
										goto L226;
}
									}
									else {
										goto L228;
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
							else {
								goto L225;
							}
						}
						else if(FloppyPnp_irpSp__MinorFunction < 6) {
							goto L192;
						}
						else {
							goto L192;
						}
					}
				}
			}
}
		}
		else if(main_tmp_ndt_1 < 3) {
			goto L121;
		}
		else {
			goto L121;
		}
}
	}
	else {
		goto L122;
	}
}
}
}

