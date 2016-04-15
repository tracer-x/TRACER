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
				FloppyPnp_Irp__IoStatus__Information = 0;
				FloppyPnp_Irp__IoStatus__Status = -1073741738;
				myStatus = -1073741738;
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
                if (safety != 0) goto ERROR;
                return;
                ERROR:;
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
					TRACER_RV = (KeSetEvent_l);
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
L5:;
						FloppyStartDevice_fdcInfo__BufferCount = 0;
						FloppyStartDevice_fdcInfo__BufferSize = 0;
						FloppyStartDevice_CIL___Tmp43 = 3080;
						FloppyStartDevice_CIL___Tmp44 = 458752;
						FloppyStartDevice_CIL___Tmp45 = 461832;
						FloppyStartDevice_CIL___Tmp46 = 461835;
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
								FloppyStartDevice_Irp__IoStatus__Status = FloppyStartDevice_ntStatus;
								myStatus = FloppyStartDevice_ntStatus;
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
								FlFdcDeviceIo_irpStack = FlFdcDeviceIo_irp__Tail__Overlay__CurrentStackLocation - 1;
								FlFdcDeviceIo_irpStack__Parameters__DeviceIoControl__Type3InputBuffer = FlFdcDeviceIo_Data;
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
								TRACER_RV = (KeSetEvent_l);
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
									retres12 = FlFdcDeviceIo_ntStatus;
									TRACER_RV = (retres12);
									FloppyStartDevice_ntStatus = TRACER_RV;
									TRACER_RV = nondet();
									FloppyStartDevice_disketteExtension__MaxTransferSize = FloppyStartDevice_fdcInfo__MaxTransferSize;
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
											if(FloppyStartDevice_disketteExtension__DriveType >= 4 && FloppyStartDevice_disketteExtension__DriveType <= 4) {
												FloppyStartDevice_CIL___Tmp47 = uninf1();
L11:;
												if(FloppyStartDevice_KUSER_SHARED_DATA__AlternativeArchitecture_NEC98x86 > 0) {
L12:;
													FloppyStartDevice_disketteExtension__DeviceUnit = FloppyStartDevice_fdcInfo__UnitNumber;
L13:;
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
														IoSetDeviceInterfaceState_tmp_ndt_6 = __VERIFIER_nondet_int();
														if(IoSetDeviceInterfaceState_tmp_ndt_6 >= 0 && IoSetDeviceInterfaceState_tmp_ndt_6 <= 0) {
															retres4 = 0;
L14:;
															TRACER_RV = (retres4);
															FloppyStartDevice_pnpStatus = TRACER_RV;
															TRACER_RV = nondet();
L15:;
															FloppyStartDevice_disketteExtension__IsStarted = 1;
															FloppyStartDevice_disketteExtension__HoldNewRequests = 0;
															FloppyStartDevice_Irp__IoStatus__Status = FloppyStartDevice_ntStatus;
															myStatus = FloppyStartDevice_ntStatus;
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
L16:;
															PagingReferenceCount = PagingReferenceCount - 1;
															retres31 = FloppyPnp_ntStatus;
															TRACER_RV = (retres31);
															main_status = TRACER_RV;
															TRACER_RV = nondet();
L17:;
															goto L3;
}
														}
														else if(IoSetDeviceInterfaceState_tmp_ndt_6 < 0) {
L18:;
															retres4 = -1073741823;
															goto L14;
														}
														else {
															goto L18;
														}
}
													}
													else if(IoRegisterDeviceInterface_tmp_ndt_5 < 0) {
L19:;
														retres6 = -1073741808;
														TRACER_RV = (retres6);
														FloppyStartDevice_pnpStatus = TRACER_RV;
														TRACER_RV = nondet();
														goto L15;
													}
													else {
														goto L19;
													}
}
												}
												else if(FloppyStartDevice_KUSER_SHARED_DATA__AlternativeArchitecture_NEC98x86 < 0) {
													goto L12;
												}
												else {
													FloppyStartDevice_disketteExtension__DeviceUnit = FloppyStartDevice_fdcInfo__PeripheralNumber;
													goto L13;
												}
											}
											else if(FloppyStartDevice_disketteExtension__DriveType < 4) {
												goto L11;
											}
											else {
												goto L11;
											}
}
										}
										else if(FloppyStartDevice_fdcInfo__AcpiFdiSupported < 0) {
											goto L10;
										}
										else {
											if(FloppyStartDevice_disketteExtension__DriveType >= 4 && FloppyStartDevice_disketteExtension__DriveType <= 4) {
												FloppyStartDevice_CIL___Tmp48 = uninf1();
L20:;
												FloppyStartDevice_InterfaceType = 0;
												goto L11;
											}
											else if(FloppyStartDevice_disketteExtension__DriveType < 4) {
												goto L20;
											}
											else {
												goto L20;
											}
										}
									}
									else if(FloppyStartDevice_fdcInfo__AcpiBios < 0) {
										goto L9;
									}
									else {
										if(FloppyStartDevice_disketteExtension__DriveType >= 4 && FloppyStartDevice_disketteExtension__DriveType <= 4) {
											FloppyStartDevice_CIL___Tmp48 = uninf1();
L21:;
											FloppyStartDevice_InterfaceType = 0;
											goto L11;
										}
										else if(FloppyStartDevice_disketteExtension__DriveType < 4) {
											goto L21;
										}
										else {
											goto L21;
										}
									}
								}
								else if(IofCallDriver_tmp_ndt_7 < 0) {
L22:;
									IofCallDriver_tmp_ndt_8 = __VERIFIER_nondet_int();
									if(IofCallDriver_tmp_ndt_8 >= 1 && IofCallDriver_tmp_ndt_8 <= 1) {
										IofCallDriver_returnVal2 = -1073741823;
										s = NP;
										lowerDriverReturn = IofCallDriver_returnVal2;
										TRACER_RV = (IofCallDriver_returnVal2);
										FlFdcDeviceIo_ntStatus = TRACER_RV;
										TRACER_RV = nondet();
										FlFdcDeviceIo_CIL___Tmp11 = FlFdcDeviceIo_ntStatus;
										retres12 = FlFdcDeviceIo_ntStatus;
										TRACER_RV = (retres12);
										FloppyStartDevice_ntStatus = TRACER_RV;
										TRACER_RV = nondet();
										FloppyStartDevice_Irp__IoStatus__Status = FloppyStartDevice_ntStatus;
										myStatus = FloppyStartDevice_ntStatus;
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
L23:;
										PagingReferenceCount = PagingReferenceCount - 1;
										retres31 = FloppyPnp_ntStatus;
										TRACER_RV = (retres31);
										main_status = TRACER_RV;
										TRACER_RV = nondet();
L24:;
										goto L3;
}
									}
									else if(IofCallDriver_tmp_ndt_8 < 1) {
L25:;
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
										KeWaitForSingleObject_tmp_ndt_9 = __VERIFIER_nondet_int();
										if(KeWaitForSingleObject_tmp_ndt_9 >= 0 && KeWaitForSingleObject_tmp_ndt_9 <= 0) {
											retres7 = 0;
L26:;
											TRACER_RV = (retres7);
											;
											TRACER_RV = nondet();
											FlFdcDeviceIo_ntStatus = myStatus;
											retres12 = FlFdcDeviceIo_ntStatus;
											TRACER_RV = (retres12);
											FloppyStartDevice_ntStatus = TRACER_RV;
											TRACER_RV = nondet();
											FloppyStartDevice_Irp__IoStatus__Status = FloppyStartDevice_ntStatus;
											myStatus = FloppyStartDevice_ntStatus;
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
										else if(KeWaitForSingleObject_tmp_ndt_9 < 0) {
L27:;
											retres7 = -1073741823;
											goto L26;
										}
										else {
											goto L27;
										}
}
									}
									else {
										goto L25;
									}
								}
								else {
									goto L22;
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
							TRACER_RV = (IofCallDriver_returnVal2);
							FloppyStartDevice_ntStatus = TRACER_RV;
							TRACER_RV = nondet();
							FloppyStartDevice_CIL___Tmp42 = FloppyStartDevice_ntStatus;
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
							KeWaitForSingleObject_tmp_ndt_9 = __VERIFIER_nondet_int();
							if(KeWaitForSingleObject_tmp_ndt_9 >= 0 && KeWaitForSingleObject_tmp_ndt_9 <= 0) {
								retres7 = 0;
L31:;
								TRACER_RV = (retres7);
								FloppyStartDevice_ntStatus = TRACER_RV;
								TRACER_RV = nondet();
								FloppyStartDevice_ntStatus = myStatus;
								goto L5;
							}
							else if(KeWaitForSingleObject_tmp_ndt_9 < 0) {
L32:;
								retres7 = -1073741823;
								goto L31;
							}
							else {
								goto L32;
							}
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
L33:;
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
L34:;
						PagingReferenceCount = PagingReferenceCount - 1;
						retres31 = FloppyPnp_ntStatus;
L35:;
						TRACER_RV = (retres31);
						main_status = TRACER_RV;
						TRACER_RV = nondet();
L36:;
L37:;
						safety = safety + (main_status - lowerDriverReturn);
						goto L4;
					}
					else if(IofCallDriver_tmp_ndt_7 < 0) {
L38:;
						IofCallDriver_tmp_ndt_8 = __VERIFIER_nondet_int();
						if(IofCallDriver_tmp_ndt_8 >= 1 && IofCallDriver_tmp_ndt_8 <= 1) {
							IofCallDriver_returnVal2 = -1073741823;
							safety = safety + (s - SKIP1);
							s = SKIP2;
							lowerDriverReturn = IofCallDriver_returnVal2;
							TRACER_RV = (IofCallDriver_returnVal2);
							FloppyPnp_ntStatus = TRACER_RV;
							TRACER_RV = nondet();
L39:;
							PagingReferenceCount = PagingReferenceCount - 1;
							retres31 = FloppyPnp_ntStatus;
L40:;
							TRACER_RV = (retres31);
							main_status = TRACER_RV;
							TRACER_RV = nondet();
L41:;
							goto L37;
						}
						else if(IofCallDriver_tmp_ndt_8 < 1) {
L42:;
							IofCallDriver_returnVal2 = 259;
							safety = safety + (s - SKIP1);
							s = SKIP2;
							lowerDriverReturn = IofCallDriver_returnVal2;
							TRACER_RV = (IofCallDriver_returnVal2);
							FloppyPnp_ntStatus = TRACER_RV;
							TRACER_RV = nondet();
L43:;
							PagingReferenceCount = PagingReferenceCount - 1;
							retres31 = FloppyPnp_ntStatus;
L44:;
							TRACER_RV = (retres31);
							main_status = TRACER_RV;
							TRACER_RV = nondet();
L45:;
							goto L37;
						}
						else {
							goto L42;
						}
					}
					else {
						goto L38;
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
L46:;
								goto L35;
							}
							else if(IofCallDriver_tmp_ndt_7 < 0) {
L47:;
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
L48:;
									goto L40;
								}
								else if(IofCallDriver_tmp_ndt_8 < 1) {
L49:;
									IofCallDriver_returnVal2 = 259;
									safety = safety + (s - SKIP1);
									s = SKIP2;
									lowerDriverReturn = IofCallDriver_returnVal2;
									TRACER_RV = (IofCallDriver_returnVal2);
									FloppyPnp_ntStatus = TRACER_RV;
									TRACER_RV = nondet();
									retres31 = FloppyPnp_ntStatus;
									TRACER_returning = 1;
L50:;
									goto L44;
								}
								else {
									goto L49;
								}
							}
							else {
								goto L47;
							}
}
						}
						else if(FloppyPnp_disketteExtension__IsStarted < 0) {
L51:;
							FloppyPnp_disketteExtension__HoldNewRequests = 1;
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
L52:;
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
								goto L23;
}
							}
							else if(FlQueueIrpToThread_DisketteExtension__PoweringDown < 1) {
L53:;
								FlQueueIrpToThread_DisketteExtension__ThreadReferenceCount = FlQueueIrpToThread_DisketteExtension__ThreadReferenceCount + 1;
								if(FlQueueIrpToThread_DisketteExtension__ThreadReferenceCount >= 0 && FlQueueIrpToThread_DisketteExtension__ThreadReferenceCount <= 0) {
									FlQueueIrpToThread_DisketteExtension__ThreadReferenceCount = FlQueueIrpToThread_DisketteExtension__ThreadReferenceCount + 1;
									PagingReferenceCount = PagingReferenceCount + 1;
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
											ZwClose_tmp_ndt_12 = __VERIFIER_nondet_int();
											if(ZwClose_tmp_ndt_12 >= 0 && ZwClose_tmp_ndt_12 <= 0) {
												retres3 = 0;
L54:;
												TRACER_RV = (retres3);
												;
												TRACER_RV = nondet();
L55:;
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
												KeWaitForSingleObject_tmp_ndt_9 = __VERIFIER_nondet_int();
												if(KeWaitForSingleObject_tmp_ndt_9 >= 0 && KeWaitForSingleObject_tmp_ndt_9 <= 0) {
													retres7 = 0;
L56:;
													TRACER_RV = (retres7);
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
														IofCallDriver_returnVal2 = 0;
														safety = safety + (s - SKIP1);
														s = SKIP2;
														lowerDriverReturn = IofCallDriver_returnVal2;
														TRACER_RV = (IofCallDriver_returnVal2);
														FloppyPnp_ntStatus = TRACER_RV;
														TRACER_RV = nondet();
L57:;
														PagingReferenceCount = PagingReferenceCount - 1;
														retres31 = FloppyPnp_ntStatus;
														TRACER_RV = (retres31);
														main_status = TRACER_RV;
														TRACER_RV = nondet();
L58:;
L59:;
														goto L4;
													}
													else if(IofCallDriver_tmp_ndt_7 < 0) {
L60:;
														IofCallDriver_tmp_ndt_8 = __VERIFIER_nondet_int();
														if(IofCallDriver_tmp_ndt_8 >= 1 && IofCallDriver_tmp_ndt_8 <= 1) {
															IofCallDriver_returnVal2 = -1073741823;
															safety = safety + (s - SKIP1);
															s = SKIP2;
															lowerDriverReturn = IofCallDriver_returnVal2;
															TRACER_RV = (IofCallDriver_returnVal2);
															FloppyPnp_ntStatus = TRACER_RV;
															TRACER_RV = nondet();
L61:;
															PagingReferenceCount = PagingReferenceCount - 1;
															retres31 = FloppyPnp_ntStatus;
															TRACER_RV = (retres31);
															main_status = TRACER_RV;
															TRACER_RV = nondet();
L62:;
															goto L59;
														}
														else if(IofCallDriver_tmp_ndt_8 < 1) {
L63:;
															IofCallDriver_returnVal2 = 259;
															safety = safety + (s - SKIP1);
															s = SKIP2;
															lowerDriverReturn = IofCallDriver_returnVal2;
															TRACER_RV = (IofCallDriver_returnVal2);
															FloppyPnp_ntStatus = TRACER_RV;
															TRACER_RV = nondet();
L64:;
															PagingReferenceCount = PagingReferenceCount - 1;
															retres31 = FloppyPnp_ntStatus;
															TRACER_RV = (retres31);
															main_status = TRACER_RV;
															TRACER_RV = nondet();
L65:;
															goto L59;
														}
														else {
															goto L63;
														}
													}
													else {
														goto L60;
													}
}
												}
												else if(KeWaitForSingleObject_tmp_ndt_9 < 0) {
L66:;
													retres7 = -1073741823;
													goto L56;
												}
												else {
													goto L66;
												}
}
											}
											else if(ZwClose_tmp_ndt_12 < 0) {
L67:;
												retres3 = -1073741823;
												goto L54;
											}
											else {
												goto L67;
											}
}
										}
										else if(ObReferenceObjectByHandle_tmp_ndt_10 < 0) {
L68:;
											retres8 = -1073741823;
											TRACER_RV = (retres8);
											FlQueueIrpToThread_status = TRACER_RV;
											TRACER_RV = nondet();
{
 int ZwClose_tmp_ndt_12 ;
int retres3 ;
											int ZwClose_Handle ;
											ZwClose_Handle = FlQueueIrpToThread_threadHandle;
											ZwClose_tmp_ndt_12 = __VERIFIER_nondet_int();
											if(ZwClose_tmp_ndt_12 >= 0 && ZwClose_tmp_ndt_12 <= 0) {
												retres3 = 0;
L69:;
												TRACER_RV = (retres3);
												;
												TRACER_RV = nondet();
												retres11 = FlQueueIrpToThread_status;
												TRACER_returning = 1;
L70:;
												TRACER_RV = (retres11);
												FloppyPnp_ntStatus = TRACER_RV;
												TRACER_RV = nondet();
												FloppyPnp_CIL___Tmp29 = FloppyPnp_ntStatus;
												goto L52;
											}
											else if(ZwClose_tmp_ndt_12 < 0) {
L71:;
												retres3 = -1073741823;
												goto L69;
											}
											else {
												goto L71;
											}
}
										}
										else {
											goto L68;
										}
}
									}
									else if(PsCreateSystemThread_tmp_ndt_11 < 0) {
L72:;
										retres9 = -1073741823;
										TRACER_RV = (retres9);
										FlQueueIrpToThread_status = TRACER_RV;
										TRACER_RV = nondet();
										FlQueueIrpToThread_DisketteExtension__ThreadReferenceCount = -1;
										PagingReferenceCount = PagingReferenceCount - 1;
										retres11 = FlQueueIrpToThread_status;
										TRACER_returning = 1;
										goto L70;
									}
									else {
										goto L72;
									}
}
								}
								else if(FlQueueIrpToThread_DisketteExtension__ThreadReferenceCount < 0) {
									goto L55;
								}
								else {
									goto L55;
								}
							}
							else {
								goto L53;
							}
}
						}
						else {
							goto L51;
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
									goto L46;
								}
								else if(IofCallDriver_tmp_ndt_7 < 0) {
L73:;
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
										goto L48;
									}
									else if(IofCallDriver_tmp_ndt_8 < 1) {
L74:;
										IofCallDriver_returnVal2 = 259;
										safety = safety + (s - SKIP1);
										s = SKIP2;
										lowerDriverReturn = IofCallDriver_returnVal2;
										TRACER_RV = (IofCallDriver_returnVal2);
										FloppyPnp_ntStatus = TRACER_RV;
										TRACER_RV = nondet();
										retres31 = FloppyPnp_ntStatus;
										TRACER_returning = 1;
										goto L50;
									}
									else {
										goto L74;
									}
								}
								else {
									goto L73;
								}
}
							}
							else if(FloppyPnp_disketteExtension__IsStarted < 0) {
L75:;
								FloppyPnp_disketteExtension__HoldNewRequests = 1;
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
L76:;
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
									goto L23;
}
								}
								else if(FlQueueIrpToThread_DisketteExtension__PoweringDown < 1) {
L77:;
									FlQueueIrpToThread_DisketteExtension__ThreadReferenceCount = FlQueueIrpToThread_DisketteExtension__ThreadReferenceCount + 1;
									if(FlQueueIrpToThread_DisketteExtension__ThreadReferenceCount >= 0 && FlQueueIrpToThread_DisketteExtension__ThreadReferenceCount <= 0) {
										FlQueueIrpToThread_DisketteExtension__ThreadReferenceCount = FlQueueIrpToThread_DisketteExtension__ThreadReferenceCount + 1;
										PagingReferenceCount = PagingReferenceCount + 1;
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
												ZwClose_tmp_ndt_12 = __VERIFIER_nondet_int();
												if(ZwClose_tmp_ndt_12 >= 0 && ZwClose_tmp_ndt_12 <= 0) {
													retres3 = 0;
L78:;
													TRACER_RV = (retres3);
													;
													TRACER_RV = nondet();
L79:;
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
													KeWaitForSingleObject_tmp_ndt_9 = __VERIFIER_nondet_int();
													if(KeWaitForSingleObject_tmp_ndt_9 >= 0 && KeWaitForSingleObject_tmp_ndt_9 <= 0) {
														retres7 = 0;
L80:;
														TRACER_RV = (retres7);
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
															IofCallDriver_returnVal2 = 0;
															safety = safety + (s - SKIP1);
															s = SKIP2;
															lowerDriverReturn = IofCallDriver_returnVal2;
															TRACER_RV = (IofCallDriver_returnVal2);
															FloppyPnp_ntStatus = TRACER_RV;
															TRACER_RV = nondet();
															goto L57;
														}
														else if(IofCallDriver_tmp_ndt_7 < 0) {
L81:;
															IofCallDriver_tmp_ndt_8 = __VERIFIER_nondet_int();
															if(IofCallDriver_tmp_ndt_8 >= 1 && IofCallDriver_tmp_ndt_8 <= 1) {
																IofCallDriver_returnVal2 = -1073741823;
																safety = safety + (s - SKIP1);
																s = SKIP2;
																lowerDriverReturn = IofCallDriver_returnVal2;
																TRACER_RV = (IofCallDriver_returnVal2);
																FloppyPnp_ntStatus = TRACER_RV;
																TRACER_RV = nondet();
																goto L61;
															}
															else if(IofCallDriver_tmp_ndt_8 < 1) {
L82:;
																IofCallDriver_returnVal2 = 259;
																safety = safety + (s - SKIP1);
																s = SKIP2;
																lowerDriverReturn = IofCallDriver_returnVal2;
																TRACER_RV = (IofCallDriver_returnVal2);
																FloppyPnp_ntStatus = TRACER_RV;
																TRACER_RV = nondet();
																goto L64;
															}
															else {
																goto L82;
															}
														}
														else {
															goto L81;
														}
}
													}
													else if(KeWaitForSingleObject_tmp_ndt_9 < 0) {
L83:;
														retres7 = -1073741823;
														goto L80;
													}
													else {
														goto L83;
													}
}
												}
												else if(ZwClose_tmp_ndt_12 < 0) {
L84:;
													retres3 = -1073741823;
													goto L78;
												}
												else {
													goto L84;
												}
}
											}
											else if(ObReferenceObjectByHandle_tmp_ndt_10 < 0) {
L85:;
												retres8 = -1073741823;
												TRACER_RV = (retres8);
												FlQueueIrpToThread_status = TRACER_RV;
												TRACER_RV = nondet();
{
 int ZwClose_tmp_ndt_12 ;
int retres3 ;
												int ZwClose_Handle ;
												ZwClose_Handle = FlQueueIrpToThread_threadHandle;
												ZwClose_tmp_ndt_12 = __VERIFIER_nondet_int();
												if(ZwClose_tmp_ndt_12 >= 0 && ZwClose_tmp_ndt_12 <= 0) {
													retres3 = 0;
L86:;
													TRACER_RV = (retres3);
													;
													TRACER_RV = nondet();
													retres11 = FlQueueIrpToThread_status;
													TRACER_returning = 1;
L87:;
													TRACER_RV = (retres11);
													FloppyPnp_ntStatus = TRACER_RV;
													TRACER_RV = nondet();
													FloppyPnp_CIL___Tmp29 = FloppyPnp_ntStatus;
													goto L76;
												}
												else if(ZwClose_tmp_ndt_12 < 0) {
L88:;
													retres3 = -1073741823;
													goto L86;
												}
												else {
													goto L88;
												}
}
											}
											else {
												goto L85;
											}
}
										}
										else if(PsCreateSystemThread_tmp_ndt_11 < 0) {
L89:;
											retres9 = -1073741823;
											TRACER_RV = (retres9);
											FlQueueIrpToThread_status = TRACER_RV;
											TRACER_RV = nondet();
											FlQueueIrpToThread_DisketteExtension__ThreadReferenceCount = -1;
											PagingReferenceCount = PagingReferenceCount - 1;
											retres11 = FlQueueIrpToThread_status;
											TRACER_returning = 1;
											goto L87;
										}
										else {
											goto L89;
										}
}
									}
									else if(FlQueueIrpToThread_DisketteExtension__ThreadReferenceCount < 0) {
										goto L79;
									}
									else {
										goto L79;
									}
								}
								else {
									goto L77;
								}
}
							}
							else {
								goto L75;
							}
						}
						else if(FloppyPnp_irpSp__MinorFunction < 1) {
							goto L33;
						}
						else {
L90:;
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
										goto L34;
									}
									else if(IofCallDriver_tmp_ndt_7 < 0) {
L91:;
										IofCallDriver_tmp_ndt_8 = __VERIFIER_nondet_int();
										if(IofCallDriver_tmp_ndt_8 >= 1 && IofCallDriver_tmp_ndt_8 <= 1) {
											IofCallDriver_returnVal2 = -1073741823;
											safety = safety + (s - SKIP1);
											s = SKIP2;
											lowerDriverReturn = IofCallDriver_returnVal2;
											TRACER_RV = (IofCallDriver_returnVal2);
											FloppyPnp_ntStatus = TRACER_RV;
											TRACER_RV = nondet();
											goto L39;
										}
										else if(IofCallDriver_tmp_ndt_8 < 1) {
L92:;
											IofCallDriver_returnVal2 = 259;
											safety = safety + (s - SKIP1);
											s = SKIP2;
											lowerDriverReturn = IofCallDriver_returnVal2;
											TRACER_RV = (IofCallDriver_returnVal2);
											FloppyPnp_ntStatus = TRACER_RV;
											TRACER_RV = nondet();
											goto L43;
										}
										else {
											goto L92;
										}
									}
									else {
										goto L91;
									}
}
								}
								else if(FloppyPnp_disketteExtension__IsStarted < 0) {
L93:;
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
									TRACER_RV = (KeSetEvent_l);
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
L94:;
										FloppyPnp_disketteExtension__HoldNewRequests = 0;
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
										goto L16;
}
									}
									else if(IofCallDriver_tmp_ndt_7 < 0) {
L95:;
										IofCallDriver_tmp_ndt_8 = __VERIFIER_nondet_int();
										if(IofCallDriver_tmp_ndt_8 >= 1 && IofCallDriver_tmp_ndt_8 <= 1) {
											IofCallDriver_returnVal2 = -1073741823;
											s = NP;
											lowerDriverReturn = IofCallDriver_returnVal2;
											TRACER_RV = (IofCallDriver_returnVal2);
											FloppyPnp_ntStatus = TRACER_RV;
											TRACER_RV = nondet();
											FloppyPnp_CIL___Tmp30 = FloppyPnp_ntStatus;
											FloppyPnp_disketteExtension__HoldNewRequests = 0;
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
											goto L23;
}
										}
										else if(IofCallDriver_tmp_ndt_8 < 1) {
L96:;
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
											KeWaitForSingleObject_tmp_ndt_9 = __VERIFIER_nondet_int();
											if(KeWaitForSingleObject_tmp_ndt_9 >= 0 && KeWaitForSingleObject_tmp_ndt_9 <= 0) {
												retres7 = 0;
L97:;
												TRACER_RV = (retres7);
												;
												TRACER_RV = nondet();
												FloppyPnp_ntStatus = myStatus;
												goto L94;
											}
											else if(KeWaitForSingleObject_tmp_ndt_9 < 0) {
L98:;
												retres7 = -1073741823;
												goto L97;
											}
											else {
												goto L98;
											}
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
									goto L93;
								}
							}
							else if(FloppyPnp_irpSp__MinorFunction < 3) {
L99:;
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
										if(FloppyPnp_disketteExtension__InterfaceString__Buffer > 0) {
L100:;
{
 int IoSetDeviceInterfaceState_tmp_ndt_6 ;
int retres4 ;
											int IoSetDeviceInterfaceState_SymbolicLinkName ; int IoSetDeviceInterfaceState_Enable ;
											IoSetDeviceInterfaceState_SymbolicLinkName = FloppyPnp_disketteExtension__InterfaceString;
											IoSetDeviceInterfaceState_Enable = 0;
											IoSetDeviceInterfaceState_tmp_ndt_6 = __VERIFIER_nondet_int();
											if(IoSetDeviceInterfaceState_tmp_ndt_6 >= 0 && IoSetDeviceInterfaceState_tmp_ndt_6 <= 0) {
												retres4 = 0;
L101:;
												TRACER_RV = (retres4);
												;
												TRACER_RV = nondet();
L102:;
												if(FloppyPnp_disketteExtension__ArcName__Length > 0) {
L103:;
{
 int IoDeleteSymbolicLink_tmp_ndt_3 ;
int retres3 ;
													int IoDeleteSymbolicLink_SymbolicLinkName ;
													IoDeleteSymbolicLink_SymbolicLinkName = FloppyPnp_disketteExtension__ArcName;
													IoDeleteSymbolicLink_tmp_ndt_3 = __VERIFIER_nondet_int();
													if(IoDeleteSymbolicLink_tmp_ndt_3 >= 0 && IoDeleteSymbolicLink_tmp_ndt_3 <= 0) {
														retres3 = 0;
L104:;
														TRACER_RV = (retres3);
														;
														TRACER_RV = nondet();
L105:;
														FloppyPnp_IoGetConfigurationInformation__FloppyCount = FloppyPnp_IoGetConfigurationInformation__FloppyCount - 1;
														goto L34;
													}
													else if(IoDeleteSymbolicLink_tmp_ndt_3 < 0) {
L106:;
														retres3 = -1073741823;
														goto L104;
													}
													else {
														goto L106;
													}
}
												}
												else if(FloppyPnp_disketteExtension__ArcName__Length < 0) {
													goto L103;
												}
												else {
													goto L105;
												}
											}
											else if(IoSetDeviceInterfaceState_tmp_ndt_6 < 0) {
L107:;
												retres4 = -1073741823;
												goto L101;
											}
											else {
												goto L107;
											}
}
										}
										else if(FloppyPnp_disketteExtension__InterfaceString__Buffer < 0) {
											goto L100;
										}
										else {
											goto L102;
										}
									}
									else if(IofCallDriver_tmp_ndt_7 < 0) {
L108:;
										IofCallDriver_tmp_ndt_8 = __VERIFIER_nondet_int();
										if(IofCallDriver_tmp_ndt_8 >= 1 && IofCallDriver_tmp_ndt_8 <= 1) {
											IofCallDriver_returnVal2 = -1073741823;
											safety = safety + (s - SKIP1);
											s = SKIP2;
											lowerDriverReturn = IofCallDriver_returnVal2;
											TRACER_RV = (IofCallDriver_returnVal2);
											FloppyPnp_ntStatus = TRACER_RV;
											TRACER_RV = nondet();
											if(FloppyPnp_disketteExtension__InterfaceString__Buffer > 0) {
L109:;
{
 int IoSetDeviceInterfaceState_tmp_ndt_6 ;
int retres4 ;
												int IoSetDeviceInterfaceState_SymbolicLinkName ; int IoSetDeviceInterfaceState_Enable ;
												IoSetDeviceInterfaceState_SymbolicLinkName = FloppyPnp_disketteExtension__InterfaceString;
												IoSetDeviceInterfaceState_Enable = 0;
												IoSetDeviceInterfaceState_tmp_ndt_6 = __VERIFIER_nondet_int();
												if(IoSetDeviceInterfaceState_tmp_ndt_6 >= 0 && IoSetDeviceInterfaceState_tmp_ndt_6 <= 0) {
													retres4 = 0;
L110:;
													TRACER_RV = (retres4);
													;
													TRACER_RV = nondet();
L111:;
													if(FloppyPnp_disketteExtension__ArcName__Length > 0) {
L112:;
{
 int IoDeleteSymbolicLink_tmp_ndt_3 ;
int retres3 ;
														int IoDeleteSymbolicLink_SymbolicLinkName ;
														IoDeleteSymbolicLink_SymbolicLinkName = FloppyPnp_disketteExtension__ArcName;
														IoDeleteSymbolicLink_tmp_ndt_3 = __VERIFIER_nondet_int();
														if(IoDeleteSymbolicLink_tmp_ndt_3 >= 0 && IoDeleteSymbolicLink_tmp_ndt_3 <= 0) {
															retres3 = 0;
L113:;
															TRACER_RV = (retres3);
															;
															TRACER_RV = nondet();
L114:;
															FloppyPnp_IoGetConfigurationInformation__FloppyCount = FloppyPnp_IoGetConfigurationInformation__FloppyCount - 1;
															goto L39;
														}
														else if(IoDeleteSymbolicLink_tmp_ndt_3 < 0) {
L115:;
															retres3 = -1073741823;
															goto L113;
														}
														else {
															goto L115;
														}
}
													}
													else if(FloppyPnp_disketteExtension__ArcName__Length < 0) {
														goto L112;
													}
													else {
														goto L114;
													}
												}
												else if(IoSetDeviceInterfaceState_tmp_ndt_6 < 0) {
L116:;
													retres4 = -1073741823;
													goto L110;
												}
												else {
													goto L116;
												}
}
											}
											else if(FloppyPnp_disketteExtension__InterfaceString__Buffer < 0) {
												goto L109;
											}
											else {
												goto L111;
											}
										}
										else if(IofCallDriver_tmp_ndt_8 < 1) {
L117:;
											IofCallDriver_returnVal2 = 259;
											safety = safety + (s - SKIP1);
											s = SKIP2;
											lowerDriverReturn = IofCallDriver_returnVal2;
											TRACER_RV = (IofCallDriver_returnVal2);
											FloppyPnp_ntStatus = TRACER_RV;
											TRACER_RV = nondet();
											if(FloppyPnp_disketteExtension__InterfaceString__Buffer > 0) {
L118:;
{
 int IoSetDeviceInterfaceState_tmp_ndt_6 ;
int retres4 ;
												int IoSetDeviceInterfaceState_SymbolicLinkName ; int IoSetDeviceInterfaceState_Enable ;
												IoSetDeviceInterfaceState_SymbolicLinkName = FloppyPnp_disketteExtension__InterfaceString;
												IoSetDeviceInterfaceState_Enable = 0;
												IoSetDeviceInterfaceState_tmp_ndt_6 = __VERIFIER_nondet_int();
												if(IoSetDeviceInterfaceState_tmp_ndt_6 >= 0 && IoSetDeviceInterfaceState_tmp_ndt_6 <= 0) {
													retres4 = 0;
L119:;
													TRACER_RV = (retres4);
													;
													TRACER_RV = nondet();
L120:;
													if(FloppyPnp_disketteExtension__ArcName__Length > 0) {
L121:;
{
 int IoDeleteSymbolicLink_tmp_ndt_3 ;
int retres3 ;
														int IoDeleteSymbolicLink_SymbolicLinkName ;
														IoDeleteSymbolicLink_SymbolicLinkName = FloppyPnp_disketteExtension__ArcName;
														IoDeleteSymbolicLink_tmp_ndt_3 = __VERIFIER_nondet_int();
														if(IoDeleteSymbolicLink_tmp_ndt_3 >= 0 && IoDeleteSymbolicLink_tmp_ndt_3 <= 0) {
															retres3 = 0;
L122:;
															TRACER_RV = (retres3);
															;
															TRACER_RV = nondet();
L123:;
															FloppyPnp_IoGetConfigurationInformation__FloppyCount = FloppyPnp_IoGetConfigurationInformation__FloppyCount - 1;
															goto L43;
														}
														else if(IoDeleteSymbolicLink_tmp_ndt_3 < 0) {
L124:;
															retres3 = -1073741823;
															goto L122;
														}
														else {
															goto L124;
														}
}
													}
													else if(FloppyPnp_disketteExtension__ArcName__Length < 0) {
														goto L121;
													}
													else {
														goto L123;
													}
												}
												else if(IoSetDeviceInterfaceState_tmp_ndt_6 < 0) {
L125:;
													retres4 = -1073741823;
													goto L119;
												}
												else {
													goto L125;
												}
}
											}
											else if(FloppyPnp_disketteExtension__InterfaceString__Buffer < 0) {
												goto L118;
											}
											else {
												goto L120;
											}
										}
										else {
											goto L117;
										}
									}
									else {
										goto L108;
									}
}
								}
								else if(FloppyPnp_irpSp__MinorFunction < 2) {
									goto L33;
								}
								else {
									goto L33;
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
										goto L34;
									}
									else if(IofCallDriver_tmp_ndt_7 < 0) {
L126:;
										IofCallDriver_tmp_ndt_8 = __VERIFIER_nondet_int();
										if(IofCallDriver_tmp_ndt_8 >= 1 && IofCallDriver_tmp_ndt_8 <= 1) {
											IofCallDriver_returnVal2 = -1073741823;
											safety = safety + (s - SKIP1);
											s = SKIP2;
											lowerDriverReturn = IofCallDriver_returnVal2;
											TRACER_RV = (IofCallDriver_returnVal2);
											FloppyPnp_ntStatus = TRACER_RV;
											TRACER_RV = nondet();
											goto L39;
										}
										else if(IofCallDriver_tmp_ndt_8 < 1) {
L127:;
											IofCallDriver_returnVal2 = 259;
											safety = safety + (s - SKIP1);
											s = SKIP2;
											lowerDriverReturn = IofCallDriver_returnVal2;
											TRACER_RV = (IofCallDriver_returnVal2);
											FloppyPnp_ntStatus = TRACER_RV;
											TRACER_RV = nondet();
											goto L43;
										}
										else {
											goto L127;
										}
									}
									else {
										goto L126;
									}
}
								}
								else if(FloppyPnp_irpSp__MinorFunction < 4) {
									goto L99;
								}
								else {
									goto L99;
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
									goto L34;
								}
								else if(IofCallDriver_tmp_ndt_7 < 0) {
L128:;
									IofCallDriver_tmp_ndt_8 = __VERIFIER_nondet_int();
									if(IofCallDriver_tmp_ndt_8 >= 1 && IofCallDriver_tmp_ndt_8 <= 1) {
										IofCallDriver_returnVal2 = -1073741823;
										safety = safety + (s - SKIP1);
										s = SKIP2;
										lowerDriverReturn = IofCallDriver_returnVal2;
										TRACER_RV = (IofCallDriver_returnVal2);
										FloppyPnp_ntStatus = TRACER_RV;
										TRACER_RV = nondet();
										goto L39;
									}
									else if(IofCallDriver_tmp_ndt_8 < 1) {
L129:;
										IofCallDriver_returnVal2 = 259;
										safety = safety + (s - SKIP1);
										s = SKIP2;
										lowerDriverReturn = IofCallDriver_returnVal2;
										TRACER_RV = (IofCallDriver_returnVal2);
										FloppyPnp_ntStatus = TRACER_RV;
										TRACER_RV = nondet();
										goto L43;
									}
									else {
										goto L129;
									}
								}
								else {
									goto L128;
								}
}
							}
							else if(FloppyPnp_disketteExtension__IsStarted < 0) {
L130:;
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
								TRACER_RV = (KeSetEvent_l);
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
L131:;
									FloppyPnp_disketteExtension__HoldNewRequests = 0;
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
									goto L16;
}
								}
								else if(IofCallDriver_tmp_ndt_7 < 0) {
L132:;
									IofCallDriver_tmp_ndt_8 = __VERIFIER_nondet_int();
									if(IofCallDriver_tmp_ndt_8 >= 1 && IofCallDriver_tmp_ndt_8 <= 1) {
										IofCallDriver_returnVal2 = -1073741823;
										s = NP;
										lowerDriverReturn = IofCallDriver_returnVal2;
										TRACER_RV = (IofCallDriver_returnVal2);
										FloppyPnp_ntStatus = TRACER_RV;
										TRACER_RV = nondet();
										FloppyPnp_CIL___Tmp30 = FloppyPnp_ntStatus;
										FloppyPnp_disketteExtension__HoldNewRequests = 0;
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
										goto L23;
}
									}
									else if(IofCallDriver_tmp_ndt_8 < 1) {
L133:;
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
										KeWaitForSingleObject_tmp_ndt_9 = __VERIFIER_nondet_int();
										if(KeWaitForSingleObject_tmp_ndt_9 >= 0 && KeWaitForSingleObject_tmp_ndt_9 <= 0) {
											retres7 = 0;
L134:;
											TRACER_RV = (retres7);
											;
											TRACER_RV = nondet();
											FloppyPnp_ntStatus = myStatus;
											goto L131;
										}
										else if(KeWaitForSingleObject_tmp_ndt_9 < 0) {
L135:;
											retres7 = -1073741823;
											goto L134;
										}
										else {
											goto L135;
										}
}
									}
									else {
										goto L133;
									}
								}
								else {
									goto L132;
								}
}
}
}
}
							}
							else {
								goto L130;
							}
						}
						else if(FloppyPnp_irpSp__MinorFunction < 6) {
							goto L90;
						}
						else {
							goto L90;
						}
					}
				}
			}
}
		}
		else if(main_tmp_ndt_1 < 3) {
L136:;
			TRACER_returning = 1;
			goto L4;
		}
		else {
			goto L136;
		}
}
	}
	else if(main_irp_choice < 0) {
L137:;
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
L138:;
				FloppyPnp_Irp__IoStatus__Information = 0;
				FloppyPnp_Irp__IoStatus__Status = -1073741738;
				myStatus = -1073741738;
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
				goto L138;
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
					TRACER_RV = (KeSetEvent_l);
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
L139:;
						FloppyStartDevice_fdcInfo__BufferCount = 0;
						FloppyStartDevice_fdcInfo__BufferSize = 0;
						FloppyStartDevice_CIL___Tmp43 = 3080;
						FloppyStartDevice_CIL___Tmp44 = 458752;
						FloppyStartDevice_CIL___Tmp45 = 461832;
						FloppyStartDevice_CIL___Tmp46 = 461835;
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
L140:;
							TRACER_RV = (retres12);
							FlFdcDeviceIo_irp = TRACER_RV;
							TRACER_RV = nondet();
							if(FlFdcDeviceIo_irp >= 0 && FlFdcDeviceIo_irp <= 0) {
								retres12 = -1073741670;
								TRACER_RV = (retres12);
								FloppyStartDevice_ntStatus = TRACER_RV;
								TRACER_RV = nondet();
								FloppyStartDevice_Irp__IoStatus__Status = FloppyStartDevice_ntStatus;
								myStatus = FloppyStartDevice_ntStatus;
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
L141:;
								FlFdcDeviceIo_irpStack = FlFdcDeviceIo_irp__Tail__Overlay__CurrentStackLocation - 1;
								FlFdcDeviceIo_irpStack__Parameters__DeviceIoControl__Type3InputBuffer = FlFdcDeviceIo_Data;
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
								TRACER_RV = (KeSetEvent_l);
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
L142:;
									retres12 = FlFdcDeviceIo_ntStatus;
									TRACER_RV = (retres12);
									FloppyStartDevice_ntStatus = TRACER_RV;
									TRACER_RV = nondet();
									FloppyStartDevice_disketteExtension__MaxTransferSize = FloppyStartDevice_fdcInfo__MaxTransferSize;
									if(FloppyStartDevice_fdcInfo__AcpiBios > 0) {
L143:;
										if(FloppyStartDevice_fdcInfo__AcpiFdiSupported > 0) {
L144:;
{
 int retres3 ;
											int FlAcpiConfigureFloppy_DisketteExtension ; int FlAcpiConfigureFloppy_FdcInfo ;
											FlAcpiConfigureFloppy_DisketteExtension = FloppyStartDevice_disketteExtension;
											FlAcpiConfigureFloppy_FdcInfo = FloppyStartDevice_fdcInfo;
											retres3 = 0;
											TRACER_RV = (retres3);
											FloppyStartDevice_ntStatus = TRACER_RV;
											TRACER_RV = nondet();
											if(FloppyStartDevice_disketteExtension__DriveType >= 4 && FloppyStartDevice_disketteExtension__DriveType <= 4) {
												FloppyStartDevice_CIL___Tmp47 = uninf1();
L145:;
												if(FloppyStartDevice_KUSER_SHARED_DATA__AlternativeArchitecture_NEC98x86 > 0) {
L146:;
													FloppyStartDevice_disketteExtension__DeviceUnit = FloppyStartDevice_fdcInfo__UnitNumber;
L147:;
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
														IoSetDeviceInterfaceState_tmp_ndt_6 = __VERIFIER_nondet_int();
														if(IoSetDeviceInterfaceState_tmp_ndt_6 >= 0 && IoSetDeviceInterfaceState_tmp_ndt_6 <= 0) {
															retres4 = 0;
L148:;
															TRACER_RV = (retres4);
															FloppyStartDevice_pnpStatus = TRACER_RV;
															TRACER_RV = nondet();
L149:;
															FloppyStartDevice_disketteExtension__IsStarted = 1;
															FloppyStartDevice_disketteExtension__HoldNewRequests = 0;
															FloppyStartDevice_Irp__IoStatus__Status = FloppyStartDevice_ntStatus;
															myStatus = FloppyStartDevice_ntStatus;
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
L150:;
															PagingReferenceCount = PagingReferenceCount - 1;
															retres31 = FloppyPnp_ntStatus;
															TRACER_RV = (retres31);
															main_status = TRACER_RV;
															TRACER_RV = nondet();
															goto L17;
}
														}
														else if(IoSetDeviceInterfaceState_tmp_ndt_6 < 0) {
L151:;
															retres4 = -1073741823;
															goto L148;
														}
														else {
															goto L151;
														}
}
													}
													else if(IoRegisterDeviceInterface_tmp_ndt_5 < 0) {
L152:;
														retres6 = -1073741808;
														TRACER_RV = (retres6);
														FloppyStartDevice_pnpStatus = TRACER_RV;
														TRACER_RV = nondet();
														goto L149;
													}
													else {
														goto L152;
													}
}
												}
												else if(FloppyStartDevice_KUSER_SHARED_DATA__AlternativeArchitecture_NEC98x86 < 0) {
													goto L146;
												}
												else {
													FloppyStartDevice_disketteExtension__DeviceUnit = FloppyStartDevice_fdcInfo__PeripheralNumber;
													goto L147;
												}
											}
											else if(FloppyStartDevice_disketteExtension__DriveType < 4) {
												goto L145;
											}
											else {
												goto L145;
											}
}
										}
										else if(FloppyStartDevice_fdcInfo__AcpiFdiSupported < 0) {
											goto L144;
										}
										else {
											if(FloppyStartDevice_disketteExtension__DriveType >= 4 && FloppyStartDevice_disketteExtension__DriveType <= 4) {
												FloppyStartDevice_CIL___Tmp48 = uninf1();
L153:;
												FloppyStartDevice_InterfaceType = 0;
												goto L145;
											}
											else if(FloppyStartDevice_disketteExtension__DriveType < 4) {
												goto L153;
											}
											else {
												goto L153;
											}
										}
									}
									else if(FloppyStartDevice_fdcInfo__AcpiBios < 0) {
										goto L143;
									}
									else {
										if(FloppyStartDevice_disketteExtension__DriveType >= 4 && FloppyStartDevice_disketteExtension__DriveType <= 4) {
											FloppyStartDevice_CIL___Tmp48 = uninf1();
L154:;
											FloppyStartDevice_InterfaceType = 0;
											goto L145;
										}
										else if(FloppyStartDevice_disketteExtension__DriveType < 4) {
											goto L154;
										}
										else {
											goto L154;
										}
									}
								}
								else if(IofCallDriver_tmp_ndt_7 < 0) {
L155:;
									IofCallDriver_tmp_ndt_8 = __VERIFIER_nondet_int();
									if(IofCallDriver_tmp_ndt_8 >= 1 && IofCallDriver_tmp_ndt_8 <= 1) {
										IofCallDriver_returnVal2 = -1073741823;
										s = NP;
										lowerDriverReturn = IofCallDriver_returnVal2;
										TRACER_RV = (IofCallDriver_returnVal2);
										FlFdcDeviceIo_ntStatus = TRACER_RV;
										TRACER_RV = nondet();
										FlFdcDeviceIo_CIL___Tmp11 = FlFdcDeviceIo_ntStatus;
										retres12 = FlFdcDeviceIo_ntStatus;
										TRACER_RV = (retres12);
										FloppyStartDevice_ntStatus = TRACER_RV;
										TRACER_RV = nondet();
										FloppyStartDevice_Irp__IoStatus__Status = FloppyStartDevice_ntStatus;
										myStatus = FloppyStartDevice_ntStatus;
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
L156:;
										PagingReferenceCount = PagingReferenceCount - 1;
										retres31 = FloppyPnp_ntStatus;
										TRACER_RV = (retres31);
										main_status = TRACER_RV;
										TRACER_RV = nondet();
										goto L24;
}
									}
									else if(IofCallDriver_tmp_ndt_8 < 1) {
L157:;
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
										KeWaitForSingleObject_tmp_ndt_9 = __VERIFIER_nondet_int();
										if(KeWaitForSingleObject_tmp_ndt_9 >= 0 && KeWaitForSingleObject_tmp_ndt_9 <= 0) {
											retres7 = 0;
L158:;
											TRACER_RV = (retres7);
											;
											TRACER_RV = nondet();
											FlFdcDeviceIo_ntStatus = myStatus;
											goto L142;
										}
										else if(KeWaitForSingleObject_tmp_ndt_9 < 0) {
L159:;
											retres7 = -1073741823;
											goto L158;
										}
										else {
											goto L159;
										}
}
									}
									else {
										goto L157;
									}
								}
								else {
									goto L155;
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
						else if(IoBuildDeviceIoControlRequest_tmp_ndt_2 < 0) {
L160:;
							retres12 = 0;
							goto L140;
						}
						else {
							goto L160;
						}
}
}
					}
					else if(IofCallDriver_tmp_ndt_7 < 0) {
L161:;
						IofCallDriver_tmp_ndt_8 = __VERIFIER_nondet_int();
						if(IofCallDriver_tmp_ndt_8 >= 1 && IofCallDriver_tmp_ndt_8 <= 1) {
							IofCallDriver_returnVal2 = -1073741823;
							s = NP;
							lowerDriverReturn = IofCallDriver_returnVal2;
							TRACER_RV = (IofCallDriver_returnVal2);
							FloppyStartDevice_ntStatus = TRACER_RV;
							TRACER_RV = nondet();
							FloppyStartDevice_CIL___Tmp42 = FloppyStartDevice_ntStatus;
							goto L139;
						}
						else if(IofCallDriver_tmp_ndt_8 < 1) {
L162:;
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
							KeWaitForSingleObject_tmp_ndt_9 = __VERIFIER_nondet_int();
							if(KeWaitForSingleObject_tmp_ndt_9 >= 0 && KeWaitForSingleObject_tmp_ndt_9 <= 0) {
								retres7 = 0;
L163:;
								TRACER_RV = (retres7);
								FloppyStartDevice_ntStatus = TRACER_RV;
								TRACER_RV = nondet();
								FloppyStartDevice_ntStatus = myStatus;
								goto L139;
							}
							else if(KeWaitForSingleObject_tmp_ndt_9 < 0) {
L164:;
								retres7 = -1073741823;
								goto L163;
							}
							else {
								goto L164;
							}
}
						}
						else {
							goto L162;
						}
					}
					else {
						goto L161;
					}
}
}
}
}
}
				}
				else if(FloppyPnp_irpSp__MinorFunction < 0) {
L165:;
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
L166:;
						PagingReferenceCount = PagingReferenceCount - 1;
						retres31 = FloppyPnp_ntStatus;
L167:;
						TRACER_RV = (retres31);
						main_status = TRACER_RV;
						TRACER_RV = nondet();
						goto L36;
					}
					else if(IofCallDriver_tmp_ndt_7 < 0) {
L168:;
						IofCallDriver_tmp_ndt_8 = __VERIFIER_nondet_int();
						if(IofCallDriver_tmp_ndt_8 >= 1 && IofCallDriver_tmp_ndt_8 <= 1) {
							IofCallDriver_returnVal2 = -1073741823;
							safety = safety + (s - SKIP1);
							s = SKIP2;
							lowerDriverReturn = IofCallDriver_returnVal2;
							TRACER_RV = (IofCallDriver_returnVal2);
							FloppyPnp_ntStatus = TRACER_RV;
							TRACER_RV = nondet();
L169:;
							PagingReferenceCount = PagingReferenceCount - 1;
							retres31 = FloppyPnp_ntStatus;
L170:;
							TRACER_RV = (retres31);
							main_status = TRACER_RV;
							TRACER_RV = nondet();
							goto L41;
						}
						else if(IofCallDriver_tmp_ndt_8 < 1) {
L171:;
							IofCallDriver_returnVal2 = 259;
							safety = safety + (s - SKIP1);
							s = SKIP2;
							lowerDriverReturn = IofCallDriver_returnVal2;
							TRACER_RV = (IofCallDriver_returnVal2);
							FloppyPnp_ntStatus = TRACER_RV;
							TRACER_RV = nondet();
L172:;
							PagingReferenceCount = PagingReferenceCount - 1;
							retres31 = FloppyPnp_ntStatus;
L173:;
							TRACER_RV = (retres31);
							main_status = TRACER_RV;
							TRACER_RV = nondet();
							goto L45;
						}
						else {
							goto L171;
						}
					}
					else {
						goto L168;
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
L174:;
								goto L167;
							}
							else if(IofCallDriver_tmp_ndt_7 < 0) {
L175:;
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
L176:;
									goto L170;
								}
								else if(IofCallDriver_tmp_ndt_8 < 1) {
L177:;
									IofCallDriver_returnVal2 = 259;
									safety = safety + (s - SKIP1);
									s = SKIP2;
									lowerDriverReturn = IofCallDriver_returnVal2;
									TRACER_RV = (IofCallDriver_returnVal2);
									FloppyPnp_ntStatus = TRACER_RV;
									TRACER_RV = nondet();
									retres31 = FloppyPnp_ntStatus;
									TRACER_returning = 1;
L178:;
									goto L173;
								}
								else {
									goto L177;
								}
							}
							else {
								goto L175;
							}
}
						}
						else if(FloppyPnp_disketteExtension__IsStarted < 0) {
L179:;
							FloppyPnp_disketteExtension__HoldNewRequests = 1;
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
L180:;
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
								goto L156;
}
							}
							else if(FlQueueIrpToThread_DisketteExtension__PoweringDown < 1) {
L181:;
								FlQueueIrpToThread_DisketteExtension__ThreadReferenceCount = FlQueueIrpToThread_DisketteExtension__ThreadReferenceCount + 1;
								if(FlQueueIrpToThread_DisketteExtension__ThreadReferenceCount >= 0 && FlQueueIrpToThread_DisketteExtension__ThreadReferenceCount <= 0) {
									FlQueueIrpToThread_DisketteExtension__ThreadReferenceCount = FlQueueIrpToThread_DisketteExtension__ThreadReferenceCount + 1;
									PagingReferenceCount = PagingReferenceCount + 1;
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
											ZwClose_tmp_ndt_12 = __VERIFIER_nondet_int();
											if(ZwClose_tmp_ndt_12 >= 0 && ZwClose_tmp_ndt_12 <= 0) {
												retres3 = 0;
L182:;
												TRACER_RV = (retres3);
												;
												TRACER_RV = nondet();
L183:;
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
												KeWaitForSingleObject_tmp_ndt_9 = __VERIFIER_nondet_int();
												if(KeWaitForSingleObject_tmp_ndt_9 >= 0 && KeWaitForSingleObject_tmp_ndt_9 <= 0) {
													retres7 = 0;
L184:;
													TRACER_RV = (retres7);
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
														IofCallDriver_returnVal2 = 0;
														safety = safety + (s - SKIP1);
														s = SKIP2;
														lowerDriverReturn = IofCallDriver_returnVal2;
														TRACER_RV = (IofCallDriver_returnVal2);
														FloppyPnp_ntStatus = TRACER_RV;
														TRACER_RV = nondet();
L185:;
														PagingReferenceCount = PagingReferenceCount - 1;
														retres31 = FloppyPnp_ntStatus;
														TRACER_RV = (retres31);
														main_status = TRACER_RV;
														TRACER_RV = nondet();
														goto L58;
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
L187:;
															PagingReferenceCount = PagingReferenceCount - 1;
															retres31 = FloppyPnp_ntStatus;
															TRACER_RV = (retres31);
															main_status = TRACER_RV;
															TRACER_RV = nondet();
															goto L62;
														}
														else if(IofCallDriver_tmp_ndt_8 < 1) {
L188:;
															IofCallDriver_returnVal2 = 259;
															safety = safety + (s - SKIP1);
															s = SKIP2;
															lowerDriverReturn = IofCallDriver_returnVal2;
															TRACER_RV = (IofCallDriver_returnVal2);
															FloppyPnp_ntStatus = TRACER_RV;
															TRACER_RV = nondet();
L189:;
															PagingReferenceCount = PagingReferenceCount - 1;
															retres31 = FloppyPnp_ntStatus;
															TRACER_RV = (retres31);
															main_status = TRACER_RV;
															TRACER_RV = nondet();
															goto L65;
														}
														else {
															goto L188;
														}
													}
													else {
														goto L186;
													}
}
												}
												else if(KeWaitForSingleObject_tmp_ndt_9 < 0) {
L190:;
													retres7 = -1073741823;
													goto L184;
												}
												else {
													goto L190;
												}
}
											}
											else if(ZwClose_tmp_ndt_12 < 0) {
L191:;
												retres3 = -1073741823;
												goto L182;
											}
											else {
												goto L191;
											}
}
										}
										else if(ObReferenceObjectByHandle_tmp_ndt_10 < 0) {
L192:;
											retres8 = -1073741823;
											TRACER_RV = (retres8);
											FlQueueIrpToThread_status = TRACER_RV;
											TRACER_RV = nondet();
{
 int ZwClose_tmp_ndt_12 ;
int retres3 ;
											int ZwClose_Handle ;
											ZwClose_Handle = FlQueueIrpToThread_threadHandle;
											ZwClose_tmp_ndt_12 = __VERIFIER_nondet_int();
											if(ZwClose_tmp_ndt_12 >= 0 && ZwClose_tmp_ndt_12 <= 0) {
												retres3 = 0;
L193:;
												TRACER_RV = (retres3);
												;
												TRACER_RV = nondet();
												retres11 = FlQueueIrpToThread_status;
												TRACER_returning = 1;
L194:;
												TRACER_RV = (retres11);
												FloppyPnp_ntStatus = TRACER_RV;
												TRACER_RV = nondet();
												FloppyPnp_CIL___Tmp29 = FloppyPnp_ntStatus;
												goto L180;
											}
											else if(ZwClose_tmp_ndt_12 < 0) {
L195:;
												retres3 = -1073741823;
												goto L193;
											}
											else {
												goto L195;
											}
}
										}
										else {
											goto L192;
										}
}
									}
									else if(PsCreateSystemThread_tmp_ndt_11 < 0) {
L196:;
										retres9 = -1073741823;
										TRACER_RV = (retres9);
										FlQueueIrpToThread_status = TRACER_RV;
										TRACER_RV = nondet();
										FlQueueIrpToThread_DisketteExtension__ThreadReferenceCount = -1;
										PagingReferenceCount = PagingReferenceCount - 1;
										retres11 = FlQueueIrpToThread_status;
										TRACER_returning = 1;
										goto L194;
									}
									else {
										goto L196;
									}
}
								}
								else if(FlQueueIrpToThread_DisketteExtension__ThreadReferenceCount < 0) {
									goto L183;
								}
								else {
									goto L183;
								}
							}
							else {
								goto L181;
							}
}
						}
						else {
							goto L179;
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
									goto L174;
								}
								else if(IofCallDriver_tmp_ndt_7 < 0) {
L197:;
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
										goto L176;
									}
									else if(IofCallDriver_tmp_ndt_8 < 1) {
L198:;
										IofCallDriver_returnVal2 = 259;
										safety = safety + (s - SKIP1);
										s = SKIP2;
										lowerDriverReturn = IofCallDriver_returnVal2;
										TRACER_RV = (IofCallDriver_returnVal2);
										FloppyPnp_ntStatus = TRACER_RV;
										TRACER_RV = nondet();
										retres31 = FloppyPnp_ntStatus;
										TRACER_returning = 1;
										goto L178;
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
							else if(FloppyPnp_disketteExtension__IsStarted < 0) {
L199:;
								FloppyPnp_disketteExtension__HoldNewRequests = 1;
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
L200:;
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
									goto L156;
}
								}
								else if(FlQueueIrpToThread_DisketteExtension__PoweringDown < 1) {
L201:;
									FlQueueIrpToThread_DisketteExtension__ThreadReferenceCount = FlQueueIrpToThread_DisketteExtension__ThreadReferenceCount + 1;
									if(FlQueueIrpToThread_DisketteExtension__ThreadReferenceCount >= 0 && FlQueueIrpToThread_DisketteExtension__ThreadReferenceCount <= 0) {
										FlQueueIrpToThread_DisketteExtension__ThreadReferenceCount = FlQueueIrpToThread_DisketteExtension__ThreadReferenceCount + 1;
										PagingReferenceCount = PagingReferenceCount + 1;
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
												ZwClose_tmp_ndt_12 = __VERIFIER_nondet_int();
												if(ZwClose_tmp_ndt_12 >= 0 && ZwClose_tmp_ndt_12 <= 0) {
													retres3 = 0;
L202:;
													TRACER_RV = (retres3);
													;
													TRACER_RV = nondet();
L203:;
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
													KeWaitForSingleObject_tmp_ndt_9 = __VERIFIER_nondet_int();
													if(KeWaitForSingleObject_tmp_ndt_9 >= 0 && KeWaitForSingleObject_tmp_ndt_9 <= 0) {
														retres7 = 0;
L204:;
														TRACER_RV = (retres7);
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
															IofCallDriver_returnVal2 = 0;
															safety = safety + (s - SKIP1);
															s = SKIP2;
															lowerDriverReturn = IofCallDriver_returnVal2;
															TRACER_RV = (IofCallDriver_returnVal2);
															FloppyPnp_ntStatus = TRACER_RV;
															TRACER_RV = nondet();
															goto L185;
														}
														else if(IofCallDriver_tmp_ndt_7 < 0) {
L205:;
															IofCallDriver_tmp_ndt_8 = __VERIFIER_nondet_int();
															if(IofCallDriver_tmp_ndt_8 >= 1 && IofCallDriver_tmp_ndt_8 <= 1) {
																IofCallDriver_returnVal2 = -1073741823;
																safety = safety + (s - SKIP1);
																s = SKIP2;
																lowerDriverReturn = IofCallDriver_returnVal2;
																TRACER_RV = (IofCallDriver_returnVal2);
																FloppyPnp_ntStatus = TRACER_RV;
																TRACER_RV = nondet();
																goto L187;
															}
															else if(IofCallDriver_tmp_ndt_8 < 1) {
L206:;
																IofCallDriver_returnVal2 = 259;
																safety = safety + (s - SKIP1);
																s = SKIP2;
																lowerDriverReturn = IofCallDriver_returnVal2;
																TRACER_RV = (IofCallDriver_returnVal2);
																FloppyPnp_ntStatus = TRACER_RV;
																TRACER_RV = nondet();
																goto L189;
															}
															else {
																goto L206;
															}
														}
														else {
															goto L205;
														}
}
													}
													else if(KeWaitForSingleObject_tmp_ndt_9 < 0) {
L207:;
														retres7 = -1073741823;
														goto L204;
													}
													else {
														goto L207;
													}
}
												}
												else if(ZwClose_tmp_ndt_12 < 0) {
L208:;
													retres3 = -1073741823;
													goto L202;
												}
												else {
													goto L208;
												}
}
											}
											else if(ObReferenceObjectByHandle_tmp_ndt_10 < 0) {
L209:;
												retres8 = -1073741823;
												TRACER_RV = (retres8);
												FlQueueIrpToThread_status = TRACER_RV;
												TRACER_RV = nondet();
{
 int ZwClose_tmp_ndt_12 ;
int retres3 ;
												int ZwClose_Handle ;
												ZwClose_Handle = FlQueueIrpToThread_threadHandle;
												ZwClose_tmp_ndt_12 = __VERIFIER_nondet_int();
												if(ZwClose_tmp_ndt_12 >= 0 && ZwClose_tmp_ndt_12 <= 0) {
													retres3 = 0;
L210:;
													TRACER_RV = (retres3);
													;
													TRACER_RV = nondet();
													retres11 = FlQueueIrpToThread_status;
													TRACER_returning = 1;
L211:;
													TRACER_RV = (retres11);
													FloppyPnp_ntStatus = TRACER_RV;
													TRACER_RV = nondet();
													FloppyPnp_CIL___Tmp29 = FloppyPnp_ntStatus;
													goto L200;
												}
												else if(ZwClose_tmp_ndt_12 < 0) {
L212:;
													retres3 = -1073741823;
													goto L210;
												}
												else {
													goto L212;
												}
}
											}
											else {
												goto L209;
											}
}
										}
										else if(PsCreateSystemThread_tmp_ndt_11 < 0) {
L213:;
											retres9 = -1073741823;
											TRACER_RV = (retres9);
											FlQueueIrpToThread_status = TRACER_RV;
											TRACER_RV = nondet();
											FlQueueIrpToThread_DisketteExtension__ThreadReferenceCount = -1;
											PagingReferenceCount = PagingReferenceCount - 1;
											retres11 = FlQueueIrpToThread_status;
											TRACER_returning = 1;
											goto L211;
										}
										else {
											goto L213;
										}
}
									}
									else if(FlQueueIrpToThread_DisketteExtension__ThreadReferenceCount < 0) {
										goto L203;
									}
									else {
										goto L203;
									}
								}
								else {
									goto L201;
								}
}
							}
							else {
								goto L199;
							}
						}
						else if(FloppyPnp_irpSp__MinorFunction < 1) {
							goto L165;
						}
						else {
L214:;
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
										goto L166;
									}
									else if(IofCallDriver_tmp_ndt_7 < 0) {
L215:;
										IofCallDriver_tmp_ndt_8 = __VERIFIER_nondet_int();
										if(IofCallDriver_tmp_ndt_8 >= 1 && IofCallDriver_tmp_ndt_8 <= 1) {
											IofCallDriver_returnVal2 = -1073741823;
											safety = safety + (s - SKIP1);
											s = SKIP2;
											lowerDriverReturn = IofCallDriver_returnVal2;
											TRACER_RV = (IofCallDriver_returnVal2);
											FloppyPnp_ntStatus = TRACER_RV;
											TRACER_RV = nondet();
											goto L169;
										}
										else if(IofCallDriver_tmp_ndt_8 < 1) {
L216:;
											IofCallDriver_returnVal2 = 259;
											safety = safety + (s - SKIP1);
											s = SKIP2;
											lowerDriverReturn = IofCallDriver_returnVal2;
											TRACER_RV = (IofCallDriver_returnVal2);
											FloppyPnp_ntStatus = TRACER_RV;
											TRACER_RV = nondet();
											goto L172;
										}
										else {
											goto L216;
										}
									}
									else {
										goto L215;
									}
}
								}
								else if(FloppyPnp_disketteExtension__IsStarted < 0) {
L217:;
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
									TRACER_RV = (KeSetEvent_l);
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
L218:;
										FloppyPnp_disketteExtension__HoldNewRequests = 0;
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
										goto L150;
}
									}
									else if(IofCallDriver_tmp_ndt_7 < 0) {
L219:;
										IofCallDriver_tmp_ndt_8 = __VERIFIER_nondet_int();
										if(IofCallDriver_tmp_ndt_8 >= 1 && IofCallDriver_tmp_ndt_8 <= 1) {
											IofCallDriver_returnVal2 = -1073741823;
											s = NP;
											lowerDriverReturn = IofCallDriver_returnVal2;
											TRACER_RV = (IofCallDriver_returnVal2);
											FloppyPnp_ntStatus = TRACER_RV;
											TRACER_RV = nondet();
											FloppyPnp_CIL___Tmp30 = FloppyPnp_ntStatus;
											FloppyPnp_disketteExtension__HoldNewRequests = 0;
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
											goto L156;
}
										}
										else if(IofCallDriver_tmp_ndt_8 < 1) {
L220:;
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
											KeWaitForSingleObject_tmp_ndt_9 = __VERIFIER_nondet_int();
											if(KeWaitForSingleObject_tmp_ndt_9 >= 0 && KeWaitForSingleObject_tmp_ndt_9 <= 0) {
												retres7 = 0;
L221:;
												TRACER_RV = (retres7);
												;
												TRACER_RV = nondet();
												FloppyPnp_ntStatus = myStatus;
												goto L218;
											}
											else if(KeWaitForSingleObject_tmp_ndt_9 < 0) {
L222:;
												retres7 = -1073741823;
												goto L221;
											}
											else {
												goto L222;
											}
}
										}
										else {
											goto L220;
										}
									}
									else {
										goto L219;
									}
}
}
}
}
								}
								else {
									goto L217;
								}
							}
							else if(FloppyPnp_irpSp__MinorFunction < 3) {
L223:;
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
										if(FloppyPnp_disketteExtension__InterfaceString__Buffer > 0) {
L224:;
{
 int IoSetDeviceInterfaceState_tmp_ndt_6 ;
int retres4 ;
											int IoSetDeviceInterfaceState_SymbolicLinkName ; int IoSetDeviceInterfaceState_Enable ;
											IoSetDeviceInterfaceState_SymbolicLinkName = FloppyPnp_disketteExtension__InterfaceString;
											IoSetDeviceInterfaceState_Enable = 0;
											IoSetDeviceInterfaceState_tmp_ndt_6 = __VERIFIER_nondet_int();
											if(IoSetDeviceInterfaceState_tmp_ndt_6 >= 0 && IoSetDeviceInterfaceState_tmp_ndt_6 <= 0) {
												retres4 = 0;
L225:;
												TRACER_RV = (retres4);
												;
												TRACER_RV = nondet();
L226:;
												if(FloppyPnp_disketteExtension__ArcName__Length > 0) {
L227:;
{
 int IoDeleteSymbolicLink_tmp_ndt_3 ;
int retres3 ;
													int IoDeleteSymbolicLink_SymbolicLinkName ;
													IoDeleteSymbolicLink_SymbolicLinkName = FloppyPnp_disketteExtension__ArcName;
													IoDeleteSymbolicLink_tmp_ndt_3 = __VERIFIER_nondet_int();
													if(IoDeleteSymbolicLink_tmp_ndt_3 >= 0 && IoDeleteSymbolicLink_tmp_ndt_3 <= 0) {
														retres3 = 0;
L228:;
														TRACER_RV = (retres3);
														;
														TRACER_RV = nondet();
L229:;
														FloppyPnp_IoGetConfigurationInformation__FloppyCount = FloppyPnp_IoGetConfigurationInformation__FloppyCount - 1;
														goto L166;
													}
													else if(IoDeleteSymbolicLink_tmp_ndt_3 < 0) {
L230:;
														retres3 = -1073741823;
														goto L228;
													}
													else {
														goto L230;
													}
}
												}
												else if(FloppyPnp_disketteExtension__ArcName__Length < 0) {
													goto L227;
												}
												else {
													goto L229;
												}
											}
											else if(IoSetDeviceInterfaceState_tmp_ndt_6 < 0) {
L231:;
												retres4 = -1073741823;
												goto L225;
											}
											else {
												goto L231;
											}
}
										}
										else if(FloppyPnp_disketteExtension__InterfaceString__Buffer < 0) {
											goto L224;
										}
										else {
											goto L226;
										}
									}
									else if(IofCallDriver_tmp_ndt_7 < 0) {
L232:;
										IofCallDriver_tmp_ndt_8 = __VERIFIER_nondet_int();
										if(IofCallDriver_tmp_ndt_8 >= 1 && IofCallDriver_tmp_ndt_8 <= 1) {
											IofCallDriver_returnVal2 = -1073741823;
											safety = safety + (s - SKIP1);
											s = SKIP2;
											lowerDriverReturn = IofCallDriver_returnVal2;
											TRACER_RV = (IofCallDriver_returnVal2);
											FloppyPnp_ntStatus = TRACER_RV;
											TRACER_RV = nondet();
											if(FloppyPnp_disketteExtension__InterfaceString__Buffer > 0) {
L233:;
{
 int IoSetDeviceInterfaceState_tmp_ndt_6 ;
int retres4 ;
												int IoSetDeviceInterfaceState_SymbolicLinkName ; int IoSetDeviceInterfaceState_Enable ;
												IoSetDeviceInterfaceState_SymbolicLinkName = FloppyPnp_disketteExtension__InterfaceString;
												IoSetDeviceInterfaceState_Enable = 0;
												IoSetDeviceInterfaceState_tmp_ndt_6 = __VERIFIER_nondet_int();
												if(IoSetDeviceInterfaceState_tmp_ndt_6 >= 0 && IoSetDeviceInterfaceState_tmp_ndt_6 <= 0) {
													retres4 = 0;
L234:;
													TRACER_RV = (retres4);
													;
													TRACER_RV = nondet();
L235:;
													if(FloppyPnp_disketteExtension__ArcName__Length > 0) {
L236:;
{
 int IoDeleteSymbolicLink_tmp_ndt_3 ;
int retres3 ;
														int IoDeleteSymbolicLink_SymbolicLinkName ;
														IoDeleteSymbolicLink_SymbolicLinkName = FloppyPnp_disketteExtension__ArcName;
														IoDeleteSymbolicLink_tmp_ndt_3 = __VERIFIER_nondet_int();
														if(IoDeleteSymbolicLink_tmp_ndt_3 >= 0 && IoDeleteSymbolicLink_tmp_ndt_3 <= 0) {
															retres3 = 0;
L237:;
															TRACER_RV = (retres3);
															;
															TRACER_RV = nondet();
L238:;
															FloppyPnp_IoGetConfigurationInformation__FloppyCount = FloppyPnp_IoGetConfigurationInformation__FloppyCount - 1;
															goto L169;
														}
														else if(IoDeleteSymbolicLink_tmp_ndt_3 < 0) {
L239:;
															retres3 = -1073741823;
															goto L237;
														}
														else {
															goto L239;
														}
}
													}
													else if(FloppyPnp_disketteExtension__ArcName__Length < 0) {
														goto L236;
													}
													else {
														goto L238;
													}
												}
												else if(IoSetDeviceInterfaceState_tmp_ndt_6 < 0) {
L240:;
													retres4 = -1073741823;
													goto L234;
												}
												else {
													goto L240;
												}
}
											}
											else if(FloppyPnp_disketteExtension__InterfaceString__Buffer < 0) {
												goto L233;
											}
											else {
												goto L235;
											}
										}
										else if(IofCallDriver_tmp_ndt_8 < 1) {
L241:;
											IofCallDriver_returnVal2 = 259;
											safety = safety + (s - SKIP1);
											s = SKIP2;
											lowerDriverReturn = IofCallDriver_returnVal2;
											TRACER_RV = (IofCallDriver_returnVal2);
											FloppyPnp_ntStatus = TRACER_RV;
											TRACER_RV = nondet();
											if(FloppyPnp_disketteExtension__InterfaceString__Buffer > 0) {
L242:;
{
 int IoSetDeviceInterfaceState_tmp_ndt_6 ;
int retres4 ;
												int IoSetDeviceInterfaceState_SymbolicLinkName ; int IoSetDeviceInterfaceState_Enable ;
												IoSetDeviceInterfaceState_SymbolicLinkName = FloppyPnp_disketteExtension__InterfaceString;
												IoSetDeviceInterfaceState_Enable = 0;
												IoSetDeviceInterfaceState_tmp_ndt_6 = __VERIFIER_nondet_int();
												if(IoSetDeviceInterfaceState_tmp_ndt_6 >= 0 && IoSetDeviceInterfaceState_tmp_ndt_6 <= 0) {
													retres4 = 0;
L243:;
													TRACER_RV = (retres4);
													;
													TRACER_RV = nondet();
L244:;
													if(FloppyPnp_disketteExtension__ArcName__Length > 0) {
L245:;
{
 int IoDeleteSymbolicLink_tmp_ndt_3 ;
int retres3 ;
														int IoDeleteSymbolicLink_SymbolicLinkName ;
														IoDeleteSymbolicLink_SymbolicLinkName = FloppyPnp_disketteExtension__ArcName;
														IoDeleteSymbolicLink_tmp_ndt_3 = __VERIFIER_nondet_int();
														if(IoDeleteSymbolicLink_tmp_ndt_3 >= 0 && IoDeleteSymbolicLink_tmp_ndt_3 <= 0) {
															retres3 = 0;
L246:;
															TRACER_RV = (retres3);
															;
															TRACER_RV = nondet();
L247:;
															FloppyPnp_IoGetConfigurationInformation__FloppyCount = FloppyPnp_IoGetConfigurationInformation__FloppyCount - 1;
															goto L172;
														}
														else if(IoDeleteSymbolicLink_tmp_ndt_3 < 0) {
L248:;
															retres3 = -1073741823;
															goto L246;
														}
														else {
															goto L248;
														}
}
													}
													else if(FloppyPnp_disketteExtension__ArcName__Length < 0) {
														goto L245;
													}
													else {
														goto L247;
													}
												}
												else if(IoSetDeviceInterfaceState_tmp_ndt_6 < 0) {
L249:;
													retres4 = -1073741823;
													goto L243;
												}
												else {
													goto L249;
												}
}
											}
											else if(FloppyPnp_disketteExtension__InterfaceString__Buffer < 0) {
												goto L242;
											}
											else {
												goto L244;
											}
										}
										else {
											goto L241;
										}
									}
									else {
										goto L232;
									}
}
								}
								else if(FloppyPnp_irpSp__MinorFunction < 2) {
									goto L165;
								}
								else {
									goto L165;
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
										goto L166;
									}
									else if(IofCallDriver_tmp_ndt_7 < 0) {
L250:;
										IofCallDriver_tmp_ndt_8 = __VERIFIER_nondet_int();
										if(IofCallDriver_tmp_ndt_8 >= 1 && IofCallDriver_tmp_ndt_8 <= 1) {
											IofCallDriver_returnVal2 = -1073741823;
											safety = safety + (s - SKIP1);
											s = SKIP2;
											lowerDriverReturn = IofCallDriver_returnVal2;
											TRACER_RV = (IofCallDriver_returnVal2);
											FloppyPnp_ntStatus = TRACER_RV;
											TRACER_RV = nondet();
											goto L169;
										}
										else if(IofCallDriver_tmp_ndt_8 < 1) {
L251:;
											IofCallDriver_returnVal2 = 259;
											safety = safety + (s - SKIP1);
											s = SKIP2;
											lowerDriverReturn = IofCallDriver_returnVal2;
											TRACER_RV = (IofCallDriver_returnVal2);
											FloppyPnp_ntStatus = TRACER_RV;
											TRACER_RV = nondet();
											goto L172;
										}
										else {
											goto L251;
										}
									}
									else {
										goto L250;
									}
}
								}
								else if(FloppyPnp_irpSp__MinorFunction < 4) {
									goto L223;
								}
								else {
									goto L223;
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
									goto L166;
								}
								else if(IofCallDriver_tmp_ndt_7 < 0) {
L252:;
									IofCallDriver_tmp_ndt_8 = __VERIFIER_nondet_int();
									if(IofCallDriver_tmp_ndt_8 >= 1 && IofCallDriver_tmp_ndt_8 <= 1) {
										IofCallDriver_returnVal2 = -1073741823;
										safety = safety + (s - SKIP1);
										s = SKIP2;
										lowerDriverReturn = IofCallDriver_returnVal2;
										TRACER_RV = (IofCallDriver_returnVal2);
										FloppyPnp_ntStatus = TRACER_RV;
										TRACER_RV = nondet();
										goto L169;
									}
									else if(IofCallDriver_tmp_ndt_8 < 1) {
L253:;
										IofCallDriver_returnVal2 = 259;
										safety = safety + (s - SKIP1);
										s = SKIP2;
										lowerDriverReturn = IofCallDriver_returnVal2;
										TRACER_RV = (IofCallDriver_returnVal2);
										FloppyPnp_ntStatus = TRACER_RV;
										TRACER_RV = nondet();
										goto L172;
									}
									else {
										goto L253;
									}
								}
								else {
									goto L252;
								}
}
							}
							else if(FloppyPnp_disketteExtension__IsStarted < 0) {
L254:;
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
								TRACER_RV = (KeSetEvent_l);
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
L255:;
									FloppyPnp_disketteExtension__HoldNewRequests = 0;
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
									goto L150;
}
								}
								else if(IofCallDriver_tmp_ndt_7 < 0) {
L256:;
									IofCallDriver_tmp_ndt_8 = __VERIFIER_nondet_int();
									if(IofCallDriver_tmp_ndt_8 >= 1 && IofCallDriver_tmp_ndt_8 <= 1) {
										IofCallDriver_returnVal2 = -1073741823;
										s = NP;
										lowerDriverReturn = IofCallDriver_returnVal2;
										TRACER_RV = (IofCallDriver_returnVal2);
										FloppyPnp_ntStatus = TRACER_RV;
										TRACER_RV = nondet();
										FloppyPnp_CIL___Tmp30 = FloppyPnp_ntStatus;
										FloppyPnp_disketteExtension__HoldNewRequests = 0;
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
										goto L156;
}
									}
									else if(IofCallDriver_tmp_ndt_8 < 1) {
L257:;
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
										KeWaitForSingleObject_tmp_ndt_9 = __VERIFIER_nondet_int();
										if(KeWaitForSingleObject_tmp_ndt_9 >= 0 && KeWaitForSingleObject_tmp_ndt_9 <= 0) {
											retres7 = 0;
L258:;
											TRACER_RV = (retres7);
											;
											TRACER_RV = nondet();
											FloppyPnp_ntStatus = myStatus;
											goto L255;
										}
										else if(KeWaitForSingleObject_tmp_ndt_9 < 0) {
L259:;
											retres7 = -1073741823;
											goto L258;
										}
										else {
											goto L259;
										}
}
									}
									else {
										goto L257;
									}
								}
								else {
									goto L256;
								}
}
}
}
}
							}
							else {
								goto L254;
							}
						}
						else if(FloppyPnp_irpSp__MinorFunction < 6) {
							goto L214;
						}
						else {
							goto L214;
						}
					}
				}
			}
}
		}
		else if(main_tmp_ndt_1 < 3) {
			goto L136;
		}
		else {
			goto L136;
		}
}
	}
	else {
		goto L137;
	}
}
}
}

