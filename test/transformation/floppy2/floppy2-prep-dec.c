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
int IoRegisterDeviceInterface(int IoRegisterDeviceInterface_PhysicalDeviceObject , int IoRegisterDeviceInterface_InterfaceClassGuid , int IoRegisterDeviceInterface_ReferenceString , int IoRegisterDeviceInterface_SymbolicLinkName ) ;
int KeSetEvent(int KeSetEvent_Event , int KeSetEvent_Increment , int KeSetEvent_Wait ) ;
int IoBuildDeviceIoControlRequest(int IoBuildDeviceIoControlRequest_IoControlCode , int IoBuildDeviceIoControlRequest_DeviceObject , int IoBuildDeviceIoControlRequest_InputBuffer , int IoBuildDeviceIoControlRequest_InputBufferLength , int IoBuildDeviceIoControlRequest_OutputBuffer , int IoBuildDeviceIoControlRequest_OutputBufferLength , int IoBuildDeviceIoControlRequest_InternalDeviceIoControl , int IoBuildDeviceIoControlRequest_Event , int IoBuildDeviceIoControlRequest_IoStatusBlock ) ;
extern int __VERIFIER_nondet_int() ;
int FloppyCreateClose(int FloppyCreateClose_DeviceObject , int FloppyCreateClose_Irp ) ;
int FloppyDeviceControl(int FloppyDeviceControl_DeviceObject , int FloppyDeviceControl_Irp ) ;
extern int _SLICE() ;
int FloppyQueueRequest(int FloppyQueueRequest_DisketteExtension , int FloppyQueueRequest_Irp ) ;
int FlCheckFormatParameters(int FlCheckFormatParameters_DisketteExtension , int FlCheckFormatParameters_FormatParameters ) ;
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
		if(main_tmp_ndt_1 >= 0 && main_tmp_ndt_1 <= 0) {
L1:;
{
 int FloppyCreateClose_Irp__IoStatus__Status ;
int FloppyCreateClose_Irp__IoStatus__Information ;
int retres5 ;
			int FloppyCreateClose_DeviceObject ; int FloppyCreateClose_Irp ;
			FloppyCreateClose_DeviceObject = main_devobj;
			FloppyCreateClose_Irp = main_pirp;
{
			int IofCompleteRequest_Irp ; int IofCompleteRequest_PriorityBoost ;
			IofCompleteRequest_Irp = FloppyCreateClose_Irp;
			IofCompleteRequest_PriorityBoost = 0;
			safety = safety + (s - NP);
			s = DC;
			;
			TRACER_RV = nondet();
			retres5 = 0;
			TRACER_RV = (retres5);
			main_status = TRACER_RV;
			TRACER_RV = nondet();
L2:;
L3:;
			safety = safety + (s - DC);
L4:;
            _SLICE(safety);
			/* END OF PATH at func_main@p51#1 */
}
}
		}
		else if(main_tmp_ndt_1 < 0) {
L5:;
			main_tmp_ndt_2 = __VERIFIER_nondet_int();
			if(main_tmp_ndt_2 >= 1 && main_tmp_ndt_2 <= 1) {
L6:;
{
 int FloppyCreateClose_Irp__IoStatus__Status ;
int FloppyCreateClose_Irp__IoStatus__Information ;
int retres5 ;
				int FloppyCreateClose_DeviceObject ; int FloppyCreateClose_Irp ;
				FloppyCreateClose_DeviceObject = main_devobj;
				FloppyCreateClose_Irp = main_pirp;
{
				int IofCompleteRequest_Irp ; int IofCompleteRequest_PriorityBoost ;
				IofCompleteRequest_Irp = FloppyCreateClose_Irp;
				IofCompleteRequest_PriorityBoost = 0;
				safety = safety + (s - NP);
				s = DC;
				;
				TRACER_RV = nondet();
				retres5 = 0;
				TRACER_RV = (retres5);
				main_status = TRACER_RV;
				TRACER_RV = nondet();
				goto L2;
}
}
			}
			else if(main_tmp_ndt_2 < 1) {
L7:;
				main_tmp_ndt_3 = __VERIFIER_nondet_int();
				if(main_tmp_ndt_3 >= 2 && main_tmp_ndt_3 <= 2) {
L8:;
{
 int FloppyDeviceControl_disketteExtension__HoldNewRequests ;
int FloppyDeviceControl_disketteExtension__IsRemoved ;
int FloppyDeviceControl_Irp__IoStatus__Information ;
int FloppyDeviceControl_disketteExtension__IsStarted ;
int FloppyDeviceControl_Irp__CurrentLocation ;
int FloppyDeviceControl_Irp__Tail__Overlay__CurrentStackLocation ;
int FloppyDeviceControl_disketteExtension__TargetObject ;
int FloppyDeviceControl_irpSp__Parameters__DeviceIoControl__OutputBufferLength ;
int FloppyDeviceControl_sizeof__MOUNTDEV_NAME ;
int FloppyDeviceControl_Irp__AssociatedIrp__SystemBuffer ;
int FloppyDeviceControl_mountName__NameLength ;
int FloppyDeviceControl_disketteExtension__DeviceName__Length ;
int FloppyDeviceControl_sizeof__USHORT ;
int FloppyDeviceControl_disketteExtension__InterfaceString__Buffer ;
int FloppyDeviceControl_uniqueId__UniqueIdLength ;
int FloppyDeviceControl_disketteExtension__InterfaceString__Length ;
int FloppyDeviceControl_sizeof__MOUNTDEV_UNIQUE_ID ;
int FloppyDeviceControl_irpSp__Parameters__DeviceIoControl__InputBufferLength ;
int FloppyDeviceControl_sizeof__FORMAT_PARAMETERS ;
int FloppyDeviceControl_irpSp__Parameters__DeviceIoControl__IoControlCode___1 ;
int FloppyDeviceControl_sizeof__FORMAT_EX_PARAMETERS ;
int FloppyDeviceControl_formatExParameters__FormatGapLength ;
int FloppyDeviceControl_formatExParameters__SectorsPerTrack ;
int FloppyDeviceControl_sizeof__DISK_GEOMETRY ;
int FloppyDeviceControl_Irp__IoStatus__Status___0 ;
int FloppyDeviceControl_disketteExtension ;
int FloppyDeviceControl_ntStatus ;
int FloppyDeviceControl_outputBufferLength ;
int FloppyDeviceControl_lowestDriveMediaType ;
int FloppyDeviceControl_highestDriveMediaType ;
int FloppyDeviceControl_formatExParametersSize ;
int FloppyDeviceControl_formatExParameters ;
int FloppyDeviceControl_tmp ;
int FloppyDeviceControl_mountName ;
int FloppyDeviceControl_uniqueId ;
int FloppyDeviceControl_tmp___0 ;
int FloppyDeviceControl_CIL___Tmp41 ;
int FloppyDeviceControl_CIL___Tmp44 ;
int FloppyDeviceControl_CIL___Tmp45 ;
int FloppyDeviceControl_CIL___Tmp50 ;
int FloppyDeviceControl_CIL___Tmp55 ;
int FloppyDeviceControl_CIL___Tmp60 ;
int FloppyDeviceControl_CIL___Tmp65 ;
int FloppyDeviceControl_CIL___Tmp66 ;
int FloppyDeviceControl_CIL___Tmp69 ;
int FloppyDeviceControl_CIL___Tmp72 ;
int FloppyDeviceControl_CIL___Tmp75 ;
int FloppyDeviceControl_CIL___Tmp78 ;
int FloppyDeviceControl_CIL___Tmp81 ;
int FloppyDeviceControl_CIL___Tmp82 ;
int FloppyDeviceControl_CIL___Tmp83 ;
int FloppyDeviceControl_CIL___Tmp88 ;
int FloppyDeviceControl_CIL___Tmp89 ;
int FloppyDeviceControl_CIL___Tmp90 ;
int FloppyDeviceControl_CIL___Tmp91 ;
int retres58 ;
int TRACER_returning ;
int TRACER_breaking ;
					int FloppyDeviceControl_DeviceObject ; int FloppyDeviceControl_Irp ;
					FloppyDeviceControl_DeviceObject = main_devobj;
					FloppyDeviceControl_Irp = main_pirp;
					TRACER_returning = 0;
					TRACER_breaking = 0;
					if(FloppyDeviceControl_disketteExtension__HoldNewRequests > 0) {
L9:;
						if(FloppyDeviceControl_irpSp__Parameters__DeviceIoControl__IoControlCode___1 > FloppyDeviceControl_CIL___Tmp41) {
L10:;
{
 int FloppyQueueRequest_Irp__IoStatus__Status ;
int FloppyQueueRequest_Irp__IoStatus__Information ;
int FloppyQueueRequest_ntStatus ;
int FloppyQueueRequest_FAKE_CONDITION ;
							int FloppyQueueRequest_DisketteExtension ; int FloppyQueueRequest_Irp ;
							FloppyQueueRequest_DisketteExtension = FloppyDeviceControl_disketteExtension;
							FloppyQueueRequest_Irp = FloppyDeviceControl_Irp;
							if(FloppyQueueRequest_FAKE_CONDITION > 0) {
L11:;
{
								int IofCompleteRequest_Irp ; int IofCompleteRequest_PriorityBoost ;
								IofCompleteRequest_Irp = FloppyQueueRequest_Irp;
								IofCompleteRequest_PriorityBoost = 0;
								safety = safety + (s - NP);
								s = DC;
								;
								TRACER_RV = nondet();
								PagingReferenceCount = PagingReferenceCount - 1;
								FloppyQueueRequest_ntStatus = -1073741536;
								TRACER_RV = (FloppyQueueRequest_ntStatus);
								FloppyDeviceControl_ntStatus = TRACER_RV;
								TRACER_RV = nondet();
								retres58 = FloppyDeviceControl_ntStatus;
								TRACER_returning = 1;
								TRACER_RV = (retres58);
								main_status = TRACER_RV;
								TRACER_RV = nondet();
								goto L3;
}
							}
							else if(FloppyQueueRequest_FAKE_CONDITION < 0) {
								goto L11;
							}
							else {
								FloppyQueueRequest_Irp__IoStatus__Status = 259;
								myStatus = 259;
								safety = safety + (pended - 0);
								pended = 1;
								FloppyQueueRequest_ntStatus = 259;
								FloppyDeviceControl_ntStatus = TRACER_RV;
								TRACER_RV = nondet();
L12:;
								main_status = TRACER_RV;
								TRACER_RV = nondet();
L13:;
								goto L4;
							}
}
						}
						else if(FloppyDeviceControl_irpSp__Parameters__DeviceIoControl__IoControlCode___1 < FloppyDeviceControl_CIL___Tmp41) {
							goto L10;
						}
						else {
L14:;
							if(FloppyDeviceControl_disketteExtension__IsRemoved > 0) {
L15:;
{
								int IofCompleteRequest_Irp ; int IofCompleteRequest_PriorityBoost ;
								IofCompleteRequest_Irp = FloppyDeviceControl_Irp;
								IofCompleteRequest_PriorityBoost = 0;
								safety = safety + (s - NP);
								s = DC;
								;
								TRACER_RV = nondet();
								retres58 = -1073741738;
								TRACER_returning = 1;
								TRACER_RV = (retres58);
								main_status = TRACER_RV;
								TRACER_RV = nondet();
L16:;
								goto L3;
}
							}
							else if(FloppyDeviceControl_disketteExtension__IsRemoved < 0) {
								goto L15;
							}
							else {
								if(FloppyDeviceControl_disketteExtension__IsStarted >= 0 && FloppyDeviceControl_disketteExtension__IsStarted <= 0) {
									safety = safety + (s - NP);
									s = SKIP1;
									FloppyDeviceControl_Irp__CurrentLocation = FloppyDeviceControl_Irp__CurrentLocation + 1;
									FloppyDeviceControl_Irp__Tail__Overlay__CurrentStackLocation = FloppyDeviceControl_Irp__Tail__Overlay__CurrentStackLocation + 1;
{
 int IofCallDriver_returnVal2 ;
int IofCallDriver_compRetStatus1 ;
int IofCallDriver_lcontext ;
int IofCallDriver_CIL___Tmp7 ;
int IofCallDriver_tmp_ndt_10 ;
int IofCallDriver_tmp_ndt_11 ;
									int IofCallDriver_DeviceObject ; int IofCallDriver_Irp ;
									IofCallDriver_DeviceObject = FloppyDeviceControl_disketteExtension__TargetObject;
									IofCallDriver_Irp = FloppyDeviceControl_Irp;
									IofCallDriver_tmp_ndt_10 = __VERIFIER_nondet_int();
									if(IofCallDriver_tmp_ndt_10 >= 0 && IofCallDriver_tmp_ndt_10 <= 0) {
										IofCallDriver_returnVal2 = 0;
										safety = safety + (s - SKIP1);
										s = SKIP2;
										lowerDriverReturn = IofCallDriver_returnVal2;
										TRACER_RV = (IofCallDriver_returnVal2);
										FloppyDeviceControl_tmp = TRACER_RV;
										TRACER_RV = nondet();
										retres58 = FloppyDeviceControl_tmp;
										TRACER_returning = 1;
										TRACER_RV = (retres58);
										main_status = TRACER_RV;
										TRACER_RV = nondet();
L17:;
L18:;
L19:;
										safety = safety + (main_status - lowerDriverReturn);
										goto L4;
									}
									else if(IofCallDriver_tmp_ndt_10 < 0) {
L20:;
										IofCallDriver_tmp_ndt_11 = __VERIFIER_nondet_int();
										if(IofCallDriver_tmp_ndt_11 >= 1 && IofCallDriver_tmp_ndt_11 <= 1) {
											IofCallDriver_returnVal2 = -1073741823;
											safety = safety + (s - SKIP1);
											s = SKIP2;
											lowerDriverReturn = IofCallDriver_returnVal2;
											TRACER_RV = (IofCallDriver_returnVal2);
											FloppyDeviceControl_tmp = TRACER_RV;
											TRACER_RV = nondet();
											retres58 = FloppyDeviceControl_tmp;
											TRACER_returning = 1;
											TRACER_RV = (retres58);
											main_status = TRACER_RV;
											TRACER_RV = nondet();
L21:;
L22:;
											goto L19;
										}
										else if(IofCallDriver_tmp_ndt_11 < 1) {
L23:;
											IofCallDriver_returnVal2 = 259;
											safety = safety + (s - SKIP1);
											s = SKIP2;
											lowerDriverReturn = IofCallDriver_returnVal2;
											TRACER_RV = (IofCallDriver_returnVal2);
											FloppyDeviceControl_tmp = TRACER_RV;
											TRACER_RV = nondet();
											retres58 = FloppyDeviceControl_tmp;
											TRACER_returning = 1;
											TRACER_RV = (retres58);
											main_status = TRACER_RV;
											TRACER_RV = nondet();
L24:;
L25:;
											goto L19;
										}
										else {
											goto L23;
										}
									}
									else {
										goto L20;
									}
}
								}
								else if(FloppyDeviceControl_disketteExtension__IsStarted < 0) {
L26:;
									if(FloppyDeviceControl_irpSp__Parameters__DeviceIoControl__IoControlCode___1 >= FloppyDeviceControl_CIL___Tmp44 && FloppyDeviceControl_irpSp__Parameters__DeviceIoControl__IoControlCode___1 <= FloppyDeviceControl_CIL___Tmp44) {
										if(FloppyDeviceControl_irpSp__Parameters__DeviceIoControl__OutputBufferLength < FloppyDeviceControl_sizeof__MOUNTDEV_NAME) {
											FloppyDeviceControl_ntStatus = -1073741811;
L27:;
											FloppyDeviceControl_CIL___Tmp91 = FloppyDeviceControl_ntStatus;
{
											int IofCompleteRequest_Irp ; int IofCompleteRequest_PriorityBoost ;
											IofCompleteRequest_Irp = FloppyDeviceControl_Irp;
											IofCompleteRequest_PriorityBoost = 0;
											safety = safety + (s - NP);
											s = DC;
											;
											TRACER_RV = nondet();
											retres58 = FloppyDeviceControl_ntStatus;
											TRACER_RV = (retres58);
											main_status = TRACER_RV;
											TRACER_RV = nondet();
											goto L3;
}
										}
										else {
											FloppyDeviceControl_mountName = FloppyDeviceControl_Irp__AssociatedIrp__SystemBuffer;
											FloppyDeviceControl_mountName__NameLength = FloppyDeviceControl_disketteExtension__DeviceName__Length;
											FloppyDeviceControl_CIL___Tmp82 = FloppyDeviceControl_sizeof__USHORT + FloppyDeviceControl_mountName__NameLength;
											if(FloppyDeviceControl_irpSp__Parameters__DeviceIoControl__OutputBufferLength < FloppyDeviceControl_CIL___Tmp82) {
												FloppyDeviceControl_ntStatus = -2147483643;
												FloppyDeviceControl_Irp__IoStatus__Information = FloppyDeviceControl_sizeof__MOUNTDEV_NAME;
L28:;
												FloppyDeviceControl_CIL___Tmp91 = FloppyDeviceControl_ntStatus;
{
												int IofCompleteRequest_Irp ; int IofCompleteRequest_PriorityBoost ;
												IofCompleteRequest_Irp = FloppyDeviceControl_Irp;
												IofCompleteRequest_PriorityBoost = 0;
												safety = safety + (s - NP);
												s = DC;
												;
												TRACER_RV = nondet();
												retres58 = FloppyDeviceControl_ntStatus;
												TRACER_RV = (retres58);
												main_status = TRACER_RV;
												TRACER_RV = nondet();
												goto L3;
}
											}
											else {
												FloppyDeviceControl_ntStatus = 0;
												FloppyDeviceControl_Irp__IoStatus__Information = FloppyDeviceControl_sizeof__USHORT + FloppyDeviceControl_mountName__NameLength;
L29:;
												FloppyDeviceControl_CIL___Tmp91 = FloppyDeviceControl_ntStatus;
{
												int IofCompleteRequest_Irp ; int IofCompleteRequest_PriorityBoost ;
												IofCompleteRequest_Irp = FloppyDeviceControl_Irp;
												IofCompleteRequest_PriorityBoost = 0;
												safety = safety + (s - NP);
												s = DC;
												;
												TRACER_RV = nondet();
												retres58 = FloppyDeviceControl_ntStatus;
												TRACER_RV = (retres58);
												main_status = TRACER_RV;
												TRACER_RV = nondet();
												goto L2;
}
											}
										}
									}
									else if(FloppyDeviceControl_irpSp__Parameters__DeviceIoControl__IoControlCode___1 < FloppyDeviceControl_CIL___Tmp44) {
L30:;
										if(FloppyDeviceControl_irpSp__Parameters__DeviceIoControl__IoControlCode___1 >= FloppyDeviceControl_CIL___Tmp45 && FloppyDeviceControl_irpSp__Parameters__DeviceIoControl__IoControlCode___1 <= FloppyDeviceControl_CIL___Tmp45) {
											if(FloppyDeviceControl_disketteExtension__InterfaceString__Buffer >= 0 && FloppyDeviceControl_disketteExtension__InterfaceString__Buffer <= 0) {
												FloppyDeviceControl_ntStatus = -1073741811;
												TRACER_breaking = 1;
L31:;
												goto L27;
											}
											else if(FloppyDeviceControl_disketteExtension__InterfaceString__Buffer < 0) {
L32:;
												if(FloppyDeviceControl_irpSp__Parameters__DeviceIoControl__OutputBufferLength < FloppyDeviceControl_sizeof__MOUNTDEV_UNIQUE_ID) {
													FloppyDeviceControl_ntStatus = -1073741811;
													TRACER_breaking = 1;
													goto L31;
												}
												else {
													FloppyDeviceControl_uniqueId = FloppyDeviceControl_Irp__AssociatedIrp__SystemBuffer;
													FloppyDeviceControl_uniqueId__UniqueIdLength = FloppyDeviceControl_disketteExtension__InterfaceString__Length;
													FloppyDeviceControl_CIL___Tmp83 = FloppyDeviceControl_sizeof__USHORT + FloppyDeviceControl_uniqueId__UniqueIdLength;
													if(FloppyDeviceControl_irpSp__Parameters__DeviceIoControl__OutputBufferLength < FloppyDeviceControl_CIL___Tmp83) {
														FloppyDeviceControl_ntStatus = -2147483643;
														FloppyDeviceControl_Irp__IoStatus__Information = FloppyDeviceControl_sizeof__MOUNTDEV_UNIQUE_ID;
														goto L28;
													}
													else {
														FloppyDeviceControl_ntStatus = 0;
														FloppyDeviceControl_Irp__IoStatus__Information = FloppyDeviceControl_sizeof__USHORT + FloppyDeviceControl_uniqueId__UniqueIdLength;
														goto L29;
													}
												}
											}
											else {
												goto L32;
											}
										}
										else if(FloppyDeviceControl_irpSp__Parameters__DeviceIoControl__IoControlCode___1 < FloppyDeviceControl_CIL___Tmp45) {
L33:;
											if(FloppyDeviceControl_irpSp__Parameters__DeviceIoControl__IoControlCode___1 >= FloppyDeviceControl_CIL___Tmp50 && FloppyDeviceControl_irpSp__Parameters__DeviceIoControl__IoControlCode___1 <= FloppyDeviceControl_CIL___Tmp50) {
												if(FloppyDeviceControl_irpSp__Parameters__DeviceIoControl__InputBufferLength < FloppyDeviceControl_sizeof__FORMAT_PARAMETERS) {
													FloppyDeviceControl_ntStatus = -1073741811;
L34:;
													goto L27;
												}
												else {
{
 int FlCheckFormatParameters_DriveMediaConstants__driveMediaType__MediaType ;
int FlCheckFormatParameters_FormatParameters__MediaType ;
int FlCheckFormatParameters_FAKE_CONDITION ;
int retres6 ;
													int FlCheckFormatParameters_DisketteExtension ; int FlCheckFormatParameters_FormatParameters ;
													FlCheckFormatParameters_DisketteExtension = FloppyDeviceControl_disketteExtension;
													FlCheckFormatParameters_FormatParameters = FloppyDeviceControl_Irp__AssociatedIrp__SystemBuffer;
													if(FlCheckFormatParameters_DriveMediaConstants__driveMediaType__MediaType > FlCheckFormatParameters_FormatParameters__MediaType) {
L35:;
														retres6 = 0;
L36:;
														TRACER_RV = (retres6);
														FloppyDeviceControl_tmp___0 = TRACER_RV;
														TRACER_RV = nondet();
														FloppyDeviceControl_ntStatus = -1073741811;
														goto L34;
													}
													else if(FlCheckFormatParameters_DriveMediaConstants__driveMediaType__MediaType < FlCheckFormatParameters_FormatParameters__MediaType) {
														goto L35;
													}
													else {
														if(FlCheckFormatParameters_FAKE_CONDITION > 0) {
L37:;
															retres6 = 0;
															goto L36;
														}
														else if(FlCheckFormatParameters_FAKE_CONDITION < 0) {
															goto L37;
														}
														else {
															retres6 = 1;
															TRACER_RV = (retres6);
															FloppyDeviceControl_tmp___0 = TRACER_RV;
															TRACER_RV = nondet();
															if(FloppyDeviceControl_irpSp__Parameters__DeviceIoControl__IoControlCode___1 >= FloppyDeviceControl_CIL___Tmp88 && FloppyDeviceControl_irpSp__Parameters__DeviceIoControl__IoControlCode___1 <= FloppyDeviceControl_CIL___Tmp88) {
																if(FloppyDeviceControl_irpSp__Parameters__DeviceIoControl__InputBufferLength < FloppyDeviceControl_sizeof__FORMAT_EX_PARAMETERS) {
																	FloppyDeviceControl_ntStatus = -1073741811;
																	TRACER_breaking = 1;
L38:;
																	goto L34;
																}
																else {
																	if(FloppyDeviceControl_irpSp__Parameters__DeviceIoControl__InputBufferLength < FloppyDeviceControl_formatExParametersSize) {
																		FloppyDeviceControl_ntStatus = -1073741811;
																		TRACER_breaking = 1;
																		goto L38;
																	}
																	else {
																		if(FloppyDeviceControl_formatExParameters__FormatGapLength >= 256) {
																			FloppyDeviceControl_ntStatus = -1073741811;
																			TRACER_breaking = 1;
																			goto L38;
																		}
																		else {
																			if(FloppyDeviceControl_formatExParameters__SectorsPerTrack >= 256) {
																				FloppyDeviceControl_ntStatus = -1073741811;
																				TRACER_breaking = 1;
																				goto L38;
																			}
																			else {
L39:;
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
																				FlQueueIrpToThread_Irp = FloppyDeviceControl_Irp;
																				FlQueueIrpToThread_DisketteExtension = FloppyDeviceControl_disketteExtension;
																				TRACER_returning = 0;
																				if(FlQueueIrpToThread_DisketteExtension__PoweringDown >= 1 && FlQueueIrpToThread_DisketteExtension__PoweringDown <= 1) {
																					myStatus = -1073741101;
																					FlQueueIrpToThread_Irp__IoStatus__Status = -1073741101;
																					FlQueueIrpToThread_Irp__IoStatus__Information = 0;
																					retres11 = -1073741101;
																					TRACER_returning = 1;
																					TRACER_RV = (retres11);
																					FloppyDeviceControl_ntStatus = TRACER_RV;
																					TRACER_RV = nondet();
L40:;
																					FloppyDeviceControl_CIL___Tmp91 = FloppyDeviceControl_ntStatus;
{
																					int IofCompleteRequest_Irp ; int IofCompleteRequest_PriorityBoost ;
																					IofCompleteRequest_Irp = FloppyDeviceControl_Irp;
																					IofCompleteRequest_PriorityBoost = 0;
																					safety = safety + (s - NP);
																					s = DC;
																					;
																					TRACER_RV = nondet();
																					retres58 = FloppyDeviceControl_ntStatus;
																					TRACER_RV = (retres58);
																					main_status = TRACER_RV;
																					TRACER_RV = nondet();
																					goto L3;
}
																				}
																				else if(FlQueueIrpToThread_DisketteExtension__PoweringDown < 1) {
L41:;
																					FlQueueIrpToThread_DisketteExtension__ThreadReferenceCount = FlQueueIrpToThread_DisketteExtension__ThreadReferenceCount + 1;
																					if(FlQueueIrpToThread_DisketteExtension__ThreadReferenceCount >= 0 && FlQueueIrpToThread_DisketteExtension__ThreadReferenceCount <= 0) {
{
 int PsCreateSystemThread_tmp_ndt_14 ;
int retres9 ;
																						int PsCreateSystemThread_ThreadHandle ; int PsCreateSystemThread_DesiredAccess ; int PsCreateSystemThread_ObjectAttributes ; int PsCreateSystemThread_ProcessHandle ; int PsCreateSystemThread_ClientId ; int PsCreateSystemThread_StartRoutine ; int PsCreateSystemThread_StartContext ;
																						PsCreateSystemThread_ThreadHandle = FlQueueIrpToThread_threadHandle;
																						PsCreateSystemThread_DesiredAccess = 0;
																						PsCreateSystemThread_ObjectAttributes = FlQueueIrpToThread_ObjAttributes;
																						PsCreateSystemThread_ProcessHandle = 0;
																						PsCreateSystemThread_ClientId = 0;
																						PsCreateSystemThread_StartRoutine = FloppyThread;
																						PsCreateSystemThread_StartContext = FlQueueIrpToThread_DisketteExtension;
																						PsCreateSystemThread_tmp_ndt_14 = __VERIFIER_nondet_int();
																						if(PsCreateSystemThread_tmp_ndt_14 >= 0 && PsCreateSystemThread_tmp_ndt_14 <= 0) {
																							retres9 = 0;
																							TRACER_RV = (retres9);
																							FlQueueIrpToThread_status = TRACER_RV;
																							TRACER_RV = nondet();
{
 int ObReferenceObjectByHandle_tmp_ndt_13 ;
int retres8 ;
																							int ObReferenceObjectByHandle_Handle ; int ObReferenceObjectByHandle_DesiredAccess ; int ObReferenceObjectByHandle_ObjectType ; int ObReferenceObjectByHandle_AccessMode ; int ObReferenceObjectByHandle_Object ; int ObReferenceObjectByHandle_HandleInformation ;
																							ObReferenceObjectByHandle_Handle = FlQueueIrpToThread_threadHandle;
																							ObReferenceObjectByHandle_DesiredAccess = 1048576;
																							ObReferenceObjectByHandle_ObjectType = 0;
																							ObReferenceObjectByHandle_AccessMode = KernelMode;
																							ObReferenceObjectByHandle_Object = FlQueueIrpToThread_DisketteExtension__FloppyThread;
																							ObReferenceObjectByHandle_HandleInformation = 0;
																							ObReferenceObjectByHandle_tmp_ndt_13 = __VERIFIER_nondet_int();
																							if(ObReferenceObjectByHandle_tmp_ndt_13 >= 0 && ObReferenceObjectByHandle_tmp_ndt_13 <= 0) {
																								FlQueueIrpToThread_status = TRACER_RV;
																								TRACER_RV = nondet();
{
 int ZwClose_tmp_ndt_15 ;
int retres3 ;
																								int ZwClose_Handle ;
																								ZwClose_Handle = FlQueueIrpToThread_threadHandle;
L42:;
																								;
																								TRACER_RV = nondet();
L43:;
																								safety = safety + (pended - 0);
																								pended = 1;
																								retres11 = 259;
																								TRACER_RV = (retres11);
																								FloppyDeviceControl_ntStatus = TRACER_RV;
																								TRACER_RV = nondet();
L44:;
																								FloppyDeviceControl_CIL___Tmp91 = FloppyDeviceControl_ntStatus;
																								goto L12;
}
																							}
																							else if(ObReferenceObjectByHandle_tmp_ndt_13 < 0) {
L45:;
																								retres8 = -1073741823;
																								TRACER_RV = (retres8);
																								FlQueueIrpToThread_status = TRACER_RV;
																								TRACER_RV = nondet();
{
 int ZwClose_tmp_ndt_15 ;
int retres3 ;
																								int ZwClose_Handle ;
																								ZwClose_Handle = FlQueueIrpToThread_threadHandle;
L46:;
																								;
																								TRACER_RV = nondet();
																								retres11 = FlQueueIrpToThread_status;
																								TRACER_returning = 1;
L47:;
																								TRACER_RV = (retres11);
																								FloppyDeviceControl_ntStatus = TRACER_RV;
																								TRACER_RV = nondet();
L48:;
																								FloppyDeviceControl_CIL___Tmp91 = FloppyDeviceControl_ntStatus;
{
																								int IofCompleteRequest_Irp ; int IofCompleteRequest_PriorityBoost ;
																								IofCompleteRequest_Irp = FloppyDeviceControl_Irp;
																								IofCompleteRequest_PriorityBoost = 0;
																								safety = safety + (s - NP);
																								s = DC;
																								;
																								TRACER_RV = nondet();
																								retres58 = FloppyDeviceControl_ntStatus;
																								TRACER_RV = (retres58);
																								main_status = TRACER_RV;
																								TRACER_RV = nondet();
L49:;
																								goto L3;
}
}
																							}
																							else {
																								goto L45;
																							}
}
																						}
																						else if(PsCreateSystemThread_tmp_ndt_14 < 0) {
L50:;
																							retres9 = -1073741823;
																							TRACER_RV = (retres9);
																							FlQueueIrpToThread_status = TRACER_RV;
																							TRACER_RV = nondet();
																							FlQueueIrpToThread_DisketteExtension__ThreadReferenceCount = -1;
																							PagingReferenceCount = PagingReferenceCount - 1;
																							retres11 = FlQueueIrpToThread_status;
																							TRACER_returning = 1;
																							goto L47;
																						}
																						else {
																							goto L50;
																						}
}
																					}
																					else if(FlQueueIrpToThread_DisketteExtension__ThreadReferenceCount < 0) {
																						goto L43;
																					}
																					else {
																						goto L43;
																					}
																				}
																				else {
																					goto L41;
																				}
}
																			}
																		}
																	}
																}
															}
															else if(FloppyDeviceControl_irpSp__Parameters__DeviceIoControl__IoControlCode___1 < FloppyDeviceControl_CIL___Tmp88) {
																goto L39;
															}
															else {
																goto L39;
															}
														}
													}
}
												}
											}
											else if(FloppyDeviceControl_irpSp__Parameters__DeviceIoControl__IoControlCode___1 < FloppyDeviceControl_CIL___Tmp50) {
L51:;
												if(FloppyDeviceControl_irpSp__Parameters__DeviceIoControl__IoControlCode___1 >= FloppyDeviceControl_CIL___Tmp55 && FloppyDeviceControl_irpSp__Parameters__DeviceIoControl__IoControlCode___1 <= FloppyDeviceControl_CIL___Tmp55) {
													if(FloppyDeviceControl_irpSp__Parameters__DeviceIoControl__InputBufferLength < FloppyDeviceControl_sizeof__FORMAT_PARAMETERS) {
														FloppyDeviceControl_ntStatus = -1073741811;
L52:;
														goto L27;
													}
													else {
{
 int FlCheckFormatParameters_DriveMediaConstants__driveMediaType__MediaType ;
int FlCheckFormatParameters_FormatParameters__MediaType ;
int FlCheckFormatParameters_FAKE_CONDITION ;
int retres6 ;
														int FlCheckFormatParameters_DisketteExtension ; int FlCheckFormatParameters_FormatParameters ;
														FlCheckFormatParameters_DisketteExtension = FloppyDeviceControl_disketteExtension;
														FlCheckFormatParameters_FormatParameters = FloppyDeviceControl_Irp__AssociatedIrp__SystemBuffer;
														if(FlCheckFormatParameters_DriveMediaConstants__driveMediaType__MediaType > FlCheckFormatParameters_FormatParameters__MediaType) {
L53:;
															retres6 = 0;
L54:;
															TRACER_RV = (retres6);
															FloppyDeviceControl_tmp___0 = TRACER_RV;
															TRACER_RV = nondet();
															FloppyDeviceControl_ntStatus = -1073741811;
															goto L52;
														}
														else if(FlCheckFormatParameters_DriveMediaConstants__driveMediaType__MediaType < FlCheckFormatParameters_FormatParameters__MediaType) {
															goto L53;
														}
														else {
															if(FlCheckFormatParameters_FAKE_CONDITION > 0) {
L55:;
																retres6 = 0;
																goto L54;
															}
															else if(FlCheckFormatParameters_FAKE_CONDITION < 0) {
																goto L55;
															}
															else {
																retres6 = 1;
																TRACER_RV = (retres6);
																FloppyDeviceControl_tmp___0 = TRACER_RV;
																TRACER_RV = nondet();
																if(FloppyDeviceControl_irpSp__Parameters__DeviceIoControl__IoControlCode___1 >= FloppyDeviceControl_CIL___Tmp88 && FloppyDeviceControl_irpSp__Parameters__DeviceIoControl__IoControlCode___1 <= FloppyDeviceControl_CIL___Tmp88) {
																	if(FloppyDeviceControl_irpSp__Parameters__DeviceIoControl__InputBufferLength < FloppyDeviceControl_sizeof__FORMAT_EX_PARAMETERS) {
																		FloppyDeviceControl_ntStatus = -1073741811;
																		TRACER_breaking = 1;
L56:;
																		goto L52;
																	}
																	else {
																		if(FloppyDeviceControl_irpSp__Parameters__DeviceIoControl__InputBufferLength < FloppyDeviceControl_formatExParametersSize) {
																			FloppyDeviceControl_ntStatus = -1073741811;
																			TRACER_breaking = 1;
																			goto L56;
																		}
																		else {
																			if(FloppyDeviceControl_formatExParameters__FormatGapLength >= 256) {
																				FloppyDeviceControl_ntStatus = -1073741811;
																				TRACER_breaking = 1;
																				goto L56;
																			}
																			else {
																				if(FloppyDeviceControl_formatExParameters__SectorsPerTrack >= 256) {
																					FloppyDeviceControl_ntStatus = -1073741811;
																					TRACER_breaking = 1;
																					goto L56;
																				}
																				else {
L57:;
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
																					FlQueueIrpToThread_Irp = FloppyDeviceControl_Irp;
																					FlQueueIrpToThread_DisketteExtension = FloppyDeviceControl_disketteExtension;
																					TRACER_returning = 0;
																					if(FlQueueIrpToThread_DisketteExtension__PoweringDown >= 1 && FlQueueIrpToThread_DisketteExtension__PoweringDown <= 1) {
																						myStatus = -1073741101;
																						FlQueueIrpToThread_Irp__IoStatus__Status = -1073741101;
																						FlQueueIrpToThread_Irp__IoStatus__Information = 0;
																						retres11 = -1073741101;
																						TRACER_returning = 1;
																						TRACER_RV = (retres11);
																						FloppyDeviceControl_ntStatus = TRACER_RV;
																						TRACER_RV = nondet();
																						goto L40;
																					}
																					else if(FlQueueIrpToThread_DisketteExtension__PoweringDown < 1) {
L58:;
																						FlQueueIrpToThread_DisketteExtension__ThreadReferenceCount = FlQueueIrpToThread_DisketteExtension__ThreadReferenceCount + 1;
																						if(FlQueueIrpToThread_DisketteExtension__ThreadReferenceCount >= 0 && FlQueueIrpToThread_DisketteExtension__ThreadReferenceCount <= 0) {
{
 int PsCreateSystemThread_tmp_ndt_14 ;
int retres9 ;
																							int PsCreateSystemThread_ThreadHandle ; int PsCreateSystemThread_DesiredAccess ; int PsCreateSystemThread_ObjectAttributes ; int PsCreateSystemThread_ProcessHandle ; int PsCreateSystemThread_ClientId ; int PsCreateSystemThread_StartRoutine ; int PsCreateSystemThread_StartContext ;
																							PsCreateSystemThread_ThreadHandle = FlQueueIrpToThread_threadHandle;
																							PsCreateSystemThread_DesiredAccess = 0;
																							PsCreateSystemThread_ObjectAttributes = FlQueueIrpToThread_ObjAttributes;
																							PsCreateSystemThread_ProcessHandle = 0;
																							PsCreateSystemThread_ClientId = 0;
																							PsCreateSystemThread_StartRoutine = FloppyThread;
																							PsCreateSystemThread_StartContext = FlQueueIrpToThread_DisketteExtension;
																							PsCreateSystemThread_tmp_ndt_14 = __VERIFIER_nondet_int();
																							if(PsCreateSystemThread_tmp_ndt_14 >= 0 && PsCreateSystemThread_tmp_ndt_14 <= 0) {
																								retres9 = 0;
																								TRACER_RV = (retres9);
																								FlQueueIrpToThread_status = TRACER_RV;
																								TRACER_RV = nondet();
{
 int ObReferenceObjectByHandle_tmp_ndt_13 ;
int retres8 ;
																								int ObReferenceObjectByHandle_Handle ; int ObReferenceObjectByHandle_DesiredAccess ; int ObReferenceObjectByHandle_ObjectType ; int ObReferenceObjectByHandle_AccessMode ; int ObReferenceObjectByHandle_Object ; int ObReferenceObjectByHandle_HandleInformation ;
																								ObReferenceObjectByHandle_Handle = FlQueueIrpToThread_threadHandle;
																								ObReferenceObjectByHandle_DesiredAccess = 1048576;
																								ObReferenceObjectByHandle_ObjectType = 0;
																								ObReferenceObjectByHandle_AccessMode = KernelMode;
																								ObReferenceObjectByHandle_Object = FlQueueIrpToThread_DisketteExtension__FloppyThread;
																								ObReferenceObjectByHandle_HandleInformation = 0;
																								ObReferenceObjectByHandle_tmp_ndt_13 = __VERIFIER_nondet_int();
																								if(ObReferenceObjectByHandle_tmp_ndt_13 >= 0 && ObReferenceObjectByHandle_tmp_ndt_13 <= 0) {
																									retres8 = 0;
																									TRACER_RV = (retres8);
																									FlQueueIrpToThread_status = TRACER_RV;
																									TRACER_RV = nondet();
{
 int ZwClose_tmp_ndt_15 ;
int retres3 ;
																									int ZwClose_Handle ;
																									ZwClose_Handle = FlQueueIrpToThread_threadHandle;
L59:;
																									;
																									TRACER_RV = nondet();
L60:;
																									safety = safety + (pended - 0);
																									pended = 1;
																									retres11 = 259;
																									TRACER_RV = (retres11);
																									FloppyDeviceControl_ntStatus = TRACER_RV;
																									TRACER_RV = nondet();
																									goto L44;
}
																								}
																								else if(ObReferenceObjectByHandle_tmp_ndt_13 < 0) {
L61:;
																									retres8 = -1073741823;
																									TRACER_RV = (retres8);
																									FlQueueIrpToThread_status = TRACER_RV;
																									TRACER_RV = nondet();
{
 int ZwClose_tmp_ndt_15 ;
int retres3 ;
																									int ZwClose_Handle ;
																									ZwClose_Handle = FlQueueIrpToThread_threadHandle;
L62:;
																									;
																									TRACER_RV = nondet();
																									retres11 = FlQueueIrpToThread_status;
																									TRACER_returning = 1;
L63:;
																									TRACER_RV = (retres11);
																									FloppyDeviceControl_ntStatus = TRACER_RV;
																									TRACER_RV = nondet();
																									goto L48;
}
																								}
																								else {
																									goto L61;
																								}
}
																							}
																							else if(PsCreateSystemThread_tmp_ndt_14 < 0) {
L64:;
																								retres9 = -1073741823;
																								TRACER_RV = (retres9);
																								FlQueueIrpToThread_status = TRACER_RV;
																								TRACER_RV = nondet();
																								FlQueueIrpToThread_DisketteExtension__ThreadReferenceCount = -1;
																								PagingReferenceCount = PagingReferenceCount - 1;
																								retres11 = FlQueueIrpToThread_status;
																								TRACER_returning = 1;
																								goto L63;
																							}
																							else {
																								goto L64;
																							}
}
																						}
																						else if(FlQueueIrpToThread_DisketteExtension__ThreadReferenceCount < 0) {
																							goto L60;
																						}
																						else {
																							goto L60;
																						}
																					}
																					else {
																						goto L58;
																					}
}
																				}
																			}
																		}
																	}
																}
																else if(FloppyDeviceControl_irpSp__Parameters__DeviceIoControl__IoControlCode___1 < FloppyDeviceControl_CIL___Tmp88) {
																	goto L57;
																}
																else {
																	goto L57;
																}
															}
														}
}
													}
												}
												else if(FloppyDeviceControl_irpSp__Parameters__DeviceIoControl__IoControlCode___1 < FloppyDeviceControl_CIL___Tmp55) {
L65:;
													if(FloppyDeviceControl_irpSp__Parameters__DeviceIoControl__IoControlCode___1 >= FloppyDeviceControl_CIL___Tmp60 && FloppyDeviceControl_irpSp__Parameters__DeviceIoControl__IoControlCode___1 <= FloppyDeviceControl_CIL___Tmp60) {
														if(FloppyDeviceControl_irpSp__Parameters__DeviceIoControl__InputBufferLength < FloppyDeviceControl_sizeof__FORMAT_PARAMETERS) {
															FloppyDeviceControl_ntStatus = -1073741811;
L66:;
															goto L27;
														}
														else {
{
 int FlCheckFormatParameters_DriveMediaConstants__driveMediaType__MediaType ;
int FlCheckFormatParameters_FormatParameters__MediaType ;
int FlCheckFormatParameters_FAKE_CONDITION ;
int retres6 ;
															int FlCheckFormatParameters_DisketteExtension ; int FlCheckFormatParameters_FormatParameters ;
															FlCheckFormatParameters_DisketteExtension = FloppyDeviceControl_disketteExtension;
															FlCheckFormatParameters_FormatParameters = FloppyDeviceControl_Irp__AssociatedIrp__SystemBuffer;
															if(FlCheckFormatParameters_DriveMediaConstants__driveMediaType__MediaType > FlCheckFormatParameters_FormatParameters__MediaType) {
L67:;
																retres6 = 0;
L68:;
																TRACER_RV = (retres6);
																FloppyDeviceControl_tmp___0 = TRACER_RV;
																TRACER_RV = nondet();
																FloppyDeviceControl_ntStatus = -1073741811;
																goto L66;
															}
															else if(FlCheckFormatParameters_DriveMediaConstants__driveMediaType__MediaType < FlCheckFormatParameters_FormatParameters__MediaType) {
																goto L67;
															}
															else {
																if(FlCheckFormatParameters_FAKE_CONDITION > 0) {
L69:;
																	retres6 = 0;
																	goto L68;
																}
																else if(FlCheckFormatParameters_FAKE_CONDITION < 0) {
																	goto L69;
																}
																else {
																	retres6 = 1;
																	TRACER_RV = (retres6);
																	FloppyDeviceControl_tmp___0 = TRACER_RV;
																	TRACER_RV = nondet();
																	if(FloppyDeviceControl_irpSp__Parameters__DeviceIoControl__IoControlCode___1 >= FloppyDeviceControl_CIL___Tmp88 && FloppyDeviceControl_irpSp__Parameters__DeviceIoControl__IoControlCode___1 <= FloppyDeviceControl_CIL___Tmp88) {
																		if(FloppyDeviceControl_irpSp__Parameters__DeviceIoControl__InputBufferLength < FloppyDeviceControl_sizeof__FORMAT_EX_PARAMETERS) {
																			FloppyDeviceControl_ntStatus = -1073741811;
																			TRACER_breaking = 1;
L70:;
																			goto L66;
																		}
																		else {
																			if(FloppyDeviceControl_irpSp__Parameters__DeviceIoControl__InputBufferLength < FloppyDeviceControl_formatExParametersSize) {
																				FloppyDeviceControl_ntStatus = -1073741811;
																				TRACER_breaking = 1;
																				goto L70;
																			}
																			else {
																				if(FloppyDeviceControl_formatExParameters__FormatGapLength >= 256) {
																					FloppyDeviceControl_ntStatus = -1073741811;
																					TRACER_breaking = 1;
																					goto L70;
																				}
																				else {
																					if(FloppyDeviceControl_formatExParameters__SectorsPerTrack >= 256) {
																						FloppyDeviceControl_ntStatus = -1073741811;
																						TRACER_breaking = 1;
																						goto L70;
																					}
																					else {
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
																						FlQueueIrpToThread_Irp = FloppyDeviceControl_Irp;
																						FlQueueIrpToThread_DisketteExtension = FloppyDeviceControl_disketteExtension;
																						TRACER_returning = 0;
																						if(FlQueueIrpToThread_DisketteExtension__PoweringDown >= 1 && FlQueueIrpToThread_DisketteExtension__PoweringDown <= 1) {
																							myStatus = -1073741101;
																							FlQueueIrpToThread_Irp__IoStatus__Status = -1073741101;
																							FlQueueIrpToThread_Irp__IoStatus__Information = 0;
																							retres11 = -1073741101;
																							TRACER_returning = 1;
																							TRACER_RV = (retres11);
																							FloppyDeviceControl_ntStatus = TRACER_RV;
																							TRACER_RV = nondet();
																							goto L40;
																						}
																						else if(FlQueueIrpToThread_DisketteExtension__PoweringDown < 1) {
L72:;
																							FlQueueIrpToThread_DisketteExtension__ThreadReferenceCount = FlQueueIrpToThread_DisketteExtension__ThreadReferenceCount + 1;
																							if(FlQueueIrpToThread_DisketteExtension__ThreadReferenceCount >= 0 && FlQueueIrpToThread_DisketteExtension__ThreadReferenceCount <= 0) {
{
 int PsCreateSystemThread_tmp_ndt_14 ;
int retres9 ;
																								int PsCreateSystemThread_ThreadHandle ; int PsCreateSystemThread_DesiredAccess ; int PsCreateSystemThread_ObjectAttributes ; int PsCreateSystemThread_ProcessHandle ; int PsCreateSystemThread_ClientId ; int PsCreateSystemThread_StartRoutine ; int PsCreateSystemThread_StartContext ;
																								PsCreateSystemThread_ThreadHandle = FlQueueIrpToThread_threadHandle;
																								PsCreateSystemThread_DesiredAccess = 0;
																								PsCreateSystemThread_ObjectAttributes = FlQueueIrpToThread_ObjAttributes;
																								PsCreateSystemThread_ProcessHandle = 0;
																								PsCreateSystemThread_ClientId = 0;
																								PsCreateSystemThread_StartRoutine = FloppyThread;
																								PsCreateSystemThread_StartContext = FlQueueIrpToThread_DisketteExtension;
																								PsCreateSystemThread_tmp_ndt_14 = __VERIFIER_nondet_int();
																								if(PsCreateSystemThread_tmp_ndt_14 >= 0 && PsCreateSystemThread_tmp_ndt_14 <= 0) {
																									retres9 = 0;
																									TRACER_RV = (retres9);
																									FlQueueIrpToThread_status = TRACER_RV;
																									TRACER_RV = nondet();
{
 int ObReferenceObjectByHandle_tmp_ndt_13 ;
int retres8 ;
																									int ObReferenceObjectByHandle_Handle ; int ObReferenceObjectByHandle_DesiredAccess ; int ObReferenceObjectByHandle_ObjectType ; int ObReferenceObjectByHandle_AccessMode ; int ObReferenceObjectByHandle_Object ; int ObReferenceObjectByHandle_HandleInformation ;
																									ObReferenceObjectByHandle_Handle = FlQueueIrpToThread_threadHandle;
																									ObReferenceObjectByHandle_DesiredAccess = 1048576;
																									ObReferenceObjectByHandle_ObjectType = 0;
																									ObReferenceObjectByHandle_AccessMode = KernelMode;
																									ObReferenceObjectByHandle_Object = FlQueueIrpToThread_DisketteExtension__FloppyThread;
																									ObReferenceObjectByHandle_HandleInformation = 0;
																									ObReferenceObjectByHandle_tmp_ndt_13 = __VERIFIER_nondet_int();
																									if(ObReferenceObjectByHandle_tmp_ndt_13 >= 0 && ObReferenceObjectByHandle_tmp_ndt_13 <= 0) {
																										retres8 = 0;
																										TRACER_RV = (retres8);
																										FlQueueIrpToThread_status = TRACER_RV;
																										TRACER_RV = nondet();
{
 int ZwClose_tmp_ndt_15 ;
int retres3 ;
																										int ZwClose_Handle ;
																										ZwClose_Handle = FlQueueIrpToThread_threadHandle;
L73:;
																										;
																										TRACER_RV = nondet();
L74:;
																										safety = safety + (pended - 0);
																										pended = 1;
																										retres11 = 259;
																										TRACER_RV = (retres11);
																										FloppyDeviceControl_ntStatus = TRACER_RV;
																										TRACER_RV = nondet();
																										goto L44;
}
																									}
																									else if(ObReferenceObjectByHandle_tmp_ndt_13 < 0) {
L75:;
																										retres8 = -1073741823;
																										TRACER_RV = (retres8);
																										FlQueueIrpToThread_status = TRACER_RV;
																										TRACER_RV = nondet();
{
 int ZwClose_tmp_ndt_15 ;
int retres3 ;
																										int ZwClose_Handle ;
																										ZwClose_Handle = FlQueueIrpToThread_threadHandle;
L76:;
																										;
																										TRACER_RV = nondet();
																										retres11 = FlQueueIrpToThread_status;
																										TRACER_returning = 1;
L77:;
																										TRACER_RV = (retres11);
																										FloppyDeviceControl_ntStatus = TRACER_RV;
																										TRACER_RV = nondet();
																										goto L48;
}
																									}
																									else {
																										goto L75;
																									}
}
																								}
																								else if(PsCreateSystemThread_tmp_ndt_14 < 0) {
L78:;
																									retres9 = -1073741823;
																									TRACER_RV = (retres9);
																									FlQueueIrpToThread_status = TRACER_RV;
																									TRACER_RV = nondet();
																									FlQueueIrpToThread_DisketteExtension__ThreadReferenceCount = -1;
																									PagingReferenceCount = PagingReferenceCount - 1;
																									retres11 = FlQueueIrpToThread_status;
																									TRACER_returning = 1;
																									goto L77;
																								}
																								else {
																									goto L78;
																								}
}
																							}
																							else if(FlQueueIrpToThread_DisketteExtension__ThreadReferenceCount < 0) {
																								goto L74;
																							}
																							else {
																								goto L74;
																							}
																						}
																						else {
																							goto L72;
																						}
}
																					}
																				}
																			}
																		}
																	}
																	else if(FloppyDeviceControl_irpSp__Parameters__DeviceIoControl__IoControlCode___1 < FloppyDeviceControl_CIL___Tmp88) {
																		goto L71;
																	}
																	else {
																		goto L71;
																	}
																}
															}
}
														}
													}
													else if(FloppyDeviceControl_irpSp__Parameters__DeviceIoControl__IoControlCode___1 < FloppyDeviceControl_CIL___Tmp60) {
L79:;
														if(FloppyDeviceControl_irpSp__Parameters__DeviceIoControl__IoControlCode___1 >= FloppyDeviceControl_CIL___Tmp65 && FloppyDeviceControl_irpSp__Parameters__DeviceIoControl__IoControlCode___1 <= FloppyDeviceControl_CIL___Tmp65) {
															if(FloppyDeviceControl_irpSp__Parameters__DeviceIoControl__InputBufferLength < FloppyDeviceControl_sizeof__FORMAT_PARAMETERS) {
																FloppyDeviceControl_ntStatus = -1073741811;
L80:;
																goto L27;
															}
															else {
{
 int FlCheckFormatParameters_DriveMediaConstants__driveMediaType__MediaType ;
int FlCheckFormatParameters_FormatParameters__MediaType ;
int FlCheckFormatParameters_FAKE_CONDITION ;
int retres6 ;
																int FlCheckFormatParameters_DisketteExtension ; int FlCheckFormatParameters_FormatParameters ;
																FlCheckFormatParameters_DisketteExtension = FloppyDeviceControl_disketteExtension;
																FlCheckFormatParameters_FormatParameters = FloppyDeviceControl_Irp__AssociatedIrp__SystemBuffer;
																if(FlCheckFormatParameters_DriveMediaConstants__driveMediaType__MediaType > FlCheckFormatParameters_FormatParameters__MediaType) {
L81:;
																	retres6 = 0;
L82:;
																	TRACER_RV = (retres6);
																	FloppyDeviceControl_tmp___0 = TRACER_RV;
																	TRACER_RV = nondet();
																	FloppyDeviceControl_ntStatus = -1073741811;
																	goto L80;
																}
																else if(FlCheckFormatParameters_DriveMediaConstants__driveMediaType__MediaType < FlCheckFormatParameters_FormatParameters__MediaType) {
																	goto L81;
																}
																else {
																	if(FlCheckFormatParameters_FAKE_CONDITION > 0) {
L83:;
																		retres6 = 0;
																		goto L82;
																	}
																	else if(FlCheckFormatParameters_FAKE_CONDITION < 0) {
																		goto L83;
																	}
																	else {
																		retres6 = 1;
																		TRACER_RV = (retres6);
																		FloppyDeviceControl_tmp___0 = TRACER_RV;
																		TRACER_RV = nondet();
																		if(FloppyDeviceControl_irpSp__Parameters__DeviceIoControl__IoControlCode___1 >= FloppyDeviceControl_CIL___Tmp88 && FloppyDeviceControl_irpSp__Parameters__DeviceIoControl__IoControlCode___1 <= FloppyDeviceControl_CIL___Tmp88) {
																			if(FloppyDeviceControl_irpSp__Parameters__DeviceIoControl__InputBufferLength < FloppyDeviceControl_sizeof__FORMAT_EX_PARAMETERS) {
																				FloppyDeviceControl_ntStatus = -1073741811;
																				TRACER_breaking = 1;
L84:;
																				goto L80;
																			}
																			else {
																				if(FloppyDeviceControl_irpSp__Parameters__DeviceIoControl__InputBufferLength < FloppyDeviceControl_formatExParametersSize) {
																					FloppyDeviceControl_ntStatus = -1073741811;
																					TRACER_breaking = 1;
																					goto L84;
																				}
																				else {
																					if(FloppyDeviceControl_formatExParameters__FormatGapLength >= 256) {
																						FloppyDeviceControl_ntStatus = -1073741811;
																						TRACER_breaking = 1;
																						goto L84;
																					}
																					else {
																						if(FloppyDeviceControl_formatExParameters__SectorsPerTrack >= 256) {
																							FloppyDeviceControl_ntStatus = -1073741811;
																							TRACER_breaking = 1;
																							goto L84;
																						}
																						else {
L85:;
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
																							FlQueueIrpToThread_Irp = FloppyDeviceControl_Irp;
																							FlQueueIrpToThread_DisketteExtension = FloppyDeviceControl_disketteExtension;
																							TRACER_returning = 0;
																							if(FlQueueIrpToThread_DisketteExtension__PoweringDown >= 1 && FlQueueIrpToThread_DisketteExtension__PoweringDown <= 1) {
																								myStatus = -1073741101;
																								FlQueueIrpToThread_Irp__IoStatus__Status = -1073741101;
																								FlQueueIrpToThread_Irp__IoStatus__Information = 0;
																								retres11 = -1073741101;
																								TRACER_returning = 1;
																								TRACER_RV = (retres11);
																								FloppyDeviceControl_ntStatus = TRACER_RV;
																								TRACER_RV = nondet();
																								goto L40;
																							}
																							else if(FlQueueIrpToThread_DisketteExtension__PoweringDown < 1) {
L86:;
																								FlQueueIrpToThread_DisketteExtension__ThreadReferenceCount = FlQueueIrpToThread_DisketteExtension__ThreadReferenceCount + 1;
																								if(FlQueueIrpToThread_DisketteExtension__ThreadReferenceCount >= 0 && FlQueueIrpToThread_DisketteExtension__ThreadReferenceCount <= 0) {
{
 int PsCreateSystemThread_tmp_ndt_14 ;
int retres9 ;
																									int PsCreateSystemThread_ThreadHandle ; int PsCreateSystemThread_DesiredAccess ; int PsCreateSystemThread_ObjectAttributes ; int PsCreateSystemThread_ProcessHandle ; int PsCreateSystemThread_ClientId ; int PsCreateSystemThread_StartRoutine ; int PsCreateSystemThread_StartContext ;
																									PsCreateSystemThread_ThreadHandle = FlQueueIrpToThread_threadHandle;
																									PsCreateSystemThread_DesiredAccess = 0;
																									PsCreateSystemThread_ObjectAttributes = FlQueueIrpToThread_ObjAttributes;
																									PsCreateSystemThread_ProcessHandle = 0;
																									PsCreateSystemThread_ClientId = 0;
																									PsCreateSystemThread_StartRoutine = FloppyThread;
																									PsCreateSystemThread_StartContext = FlQueueIrpToThread_DisketteExtension;
																									PsCreateSystemThread_tmp_ndt_14 = __VERIFIER_nondet_int();
																									if(PsCreateSystemThread_tmp_ndt_14 >= 0 && PsCreateSystemThread_tmp_ndt_14 <= 0) {
																										retres9 = 0;
																										TRACER_RV = (retres9);
																										FlQueueIrpToThread_status = TRACER_RV;
																										TRACER_RV = nondet();
{
 int ObReferenceObjectByHandle_tmp_ndt_13 ;
int retres8 ;
																										int ObReferenceObjectByHandle_Handle ; int ObReferenceObjectByHandle_DesiredAccess ; int ObReferenceObjectByHandle_ObjectType ; int ObReferenceObjectByHandle_AccessMode ; int ObReferenceObjectByHandle_Object ; int ObReferenceObjectByHandle_HandleInformation ;
																										ObReferenceObjectByHandle_Handle = FlQueueIrpToThread_threadHandle;
																										ObReferenceObjectByHandle_DesiredAccess = 1048576;
																										ObReferenceObjectByHandle_ObjectType = 0;
																										ObReferenceObjectByHandle_AccessMode = KernelMode;
																										ObReferenceObjectByHandle_Object = FlQueueIrpToThread_DisketteExtension__FloppyThread;
																										ObReferenceObjectByHandle_HandleInformation = 0;
																										ObReferenceObjectByHandle_tmp_ndt_13 = __VERIFIER_nondet_int();
																										if(ObReferenceObjectByHandle_tmp_ndt_13 >= 0 && ObReferenceObjectByHandle_tmp_ndt_13 <= 0) {
																											retres8 = 0;
																											TRACER_RV = (retres8);
																											FlQueueIrpToThread_status = TRACER_RV;
																											TRACER_RV = nondet();
{
 int ZwClose_tmp_ndt_15 ;
int retres3 ;
																											int ZwClose_Handle ;
																											ZwClose_Handle = FlQueueIrpToThread_threadHandle;
L87:;
																											;
																											TRACER_RV = nondet();
L88:;
																											safety = safety + (pended - 0);
																											pended = 1;
																											retres11 = 259;
																											TRACER_RV = (retres11);
																											FloppyDeviceControl_ntStatus = TRACER_RV;
																											TRACER_RV = nondet();
																											goto L44;
}
																										}
																										else if(ObReferenceObjectByHandle_tmp_ndt_13 < 0) {
L89:;
																											retres8 = -1073741823;
																											TRACER_RV = (retres8);
																											FlQueueIrpToThread_status = TRACER_RV;
																											TRACER_RV = nondet();
{
 int ZwClose_tmp_ndt_15 ;
int retres3 ;
																											int ZwClose_Handle ;
																											ZwClose_Handle = FlQueueIrpToThread_threadHandle;
L90:;
																											;
																											TRACER_RV = nondet();
																											retres11 = FlQueueIrpToThread_status;
																											TRACER_returning = 1;
L91:;
																											TRACER_RV = (retres11);
																											FloppyDeviceControl_ntStatus = TRACER_RV;
																											TRACER_RV = nondet();
																											goto L48;
}
																										}
																										else {
																											goto L89;
																										}
}
																									}
																									else if(PsCreateSystemThread_tmp_ndt_14 < 0) {
L92:;
																										retres9 = -1073741823;
																										TRACER_RV = (retres9);
																										FlQueueIrpToThread_status = TRACER_RV;
																										TRACER_RV = nondet();
																										FlQueueIrpToThread_DisketteExtension__ThreadReferenceCount = -1;
																										PagingReferenceCount = PagingReferenceCount - 1;
																										retres11 = FlQueueIrpToThread_status;
																										TRACER_returning = 1;
																										goto L91;
																									}
																									else {
																										goto L92;
																									}
}
																								}
																								else if(FlQueueIrpToThread_DisketteExtension__ThreadReferenceCount < 0) {
																									goto L88;
																								}
																								else {
																									goto L88;
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
																		}
																		else if(FloppyDeviceControl_irpSp__Parameters__DeviceIoControl__IoControlCode___1 < FloppyDeviceControl_CIL___Tmp88) {
																			goto L85;
																		}
																		else {
																			goto L85;
																		}
																	}
																}
}
															}
														}
														else if(FloppyDeviceControl_irpSp__Parameters__DeviceIoControl__IoControlCode___1 < FloppyDeviceControl_CIL___Tmp65) {
L93:;
															if(FloppyDeviceControl_irpSp__Parameters__DeviceIoControl__IoControlCode___1 >= FloppyDeviceControl_CIL___Tmp66 && FloppyDeviceControl_irpSp__Parameters__DeviceIoControl__IoControlCode___1 <= FloppyDeviceControl_CIL___Tmp66) {
																if(FloppyDeviceControl_irpSp__Parameters__DeviceIoControl__InputBufferLength < FloppyDeviceControl_sizeof__FORMAT_PARAMETERS) {
																	FloppyDeviceControl_ntStatus = -1073741811;
L94:;
																	goto L27;
																}
																else {
{
 int FlCheckFormatParameters_DriveMediaConstants__driveMediaType__MediaType ;
int FlCheckFormatParameters_FormatParameters__MediaType ;
int FlCheckFormatParameters_FAKE_CONDITION ;
int retres6 ;
																	int FlCheckFormatParameters_DisketteExtension ; int FlCheckFormatParameters_FormatParameters ;
																	FlCheckFormatParameters_DisketteExtension = FloppyDeviceControl_disketteExtension;
																	FlCheckFormatParameters_FormatParameters = FloppyDeviceControl_Irp__AssociatedIrp__SystemBuffer;
																	if(FlCheckFormatParameters_DriveMediaConstants__driveMediaType__MediaType > FlCheckFormatParameters_FormatParameters__MediaType) {
L95:;
																		retres6 = 0;
L96:;
																		TRACER_RV = (retres6);
																		FloppyDeviceControl_tmp___0 = TRACER_RV;
																		TRACER_RV = nondet();
																		FloppyDeviceControl_ntStatus = -1073741811;
																		goto L94;
																	}
																	else if(FlCheckFormatParameters_DriveMediaConstants__driveMediaType__MediaType < FlCheckFormatParameters_FormatParameters__MediaType) {
																		goto L95;
																	}
																	else {
																		if(FlCheckFormatParameters_FAKE_CONDITION > 0) {
L97:;
																			retres6 = 0;
																			goto L96;
																		}
																		else if(FlCheckFormatParameters_FAKE_CONDITION < 0) {
																			goto L97;
																		}
																		else {
																			retres6 = 1;
																			TRACER_RV = (retres6);
																			FloppyDeviceControl_tmp___0 = TRACER_RV;
																			TRACER_RV = nondet();
																			if(FloppyDeviceControl_irpSp__Parameters__DeviceIoControl__IoControlCode___1 >= FloppyDeviceControl_CIL___Tmp88 && FloppyDeviceControl_irpSp__Parameters__DeviceIoControl__IoControlCode___1 <= FloppyDeviceControl_CIL___Tmp88) {
																				if(FloppyDeviceControl_irpSp__Parameters__DeviceIoControl__InputBufferLength < FloppyDeviceControl_sizeof__FORMAT_EX_PARAMETERS) {
																					FloppyDeviceControl_ntStatus = -1073741811;
																					TRACER_breaking = 1;
L98:;
																					goto L94;
																				}
																				else {
																					if(FloppyDeviceControl_irpSp__Parameters__DeviceIoControl__InputBufferLength < FloppyDeviceControl_formatExParametersSize) {
																						FloppyDeviceControl_ntStatus = -1073741811;
																						TRACER_breaking = 1;
																						goto L98;
																					}
																					else {
																						if(FloppyDeviceControl_formatExParameters__FormatGapLength >= 256) {
																							FloppyDeviceControl_ntStatus = -1073741811;
																							TRACER_breaking = 1;
																							goto L98;
																						}
																						else {
																							if(FloppyDeviceControl_formatExParameters__SectorsPerTrack >= 256) {
																								FloppyDeviceControl_ntStatus = -1073741811;
																								TRACER_breaking = 1;
																								goto L98;
																							}
																							else {
L99:;
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
																								FlQueueIrpToThread_Irp = FloppyDeviceControl_Irp;
																								FlQueueIrpToThread_DisketteExtension = FloppyDeviceControl_disketteExtension;
																								TRACER_returning = 0;
																								if(FlQueueIrpToThread_DisketteExtension__PoweringDown >= 1 && FlQueueIrpToThread_DisketteExtension__PoweringDown <= 1) {
																									myStatus = -1073741101;
																									FlQueueIrpToThread_Irp__IoStatus__Status = -1073741101;
																									FlQueueIrpToThread_Irp__IoStatus__Information = 0;
																									retres11 = -1073741101;
																									TRACER_returning = 1;
																									TRACER_RV = (retres11);
																									FloppyDeviceControl_ntStatus = TRACER_RV;
																									TRACER_RV = nondet();
																									goto L40;
																								}
																								else if(FlQueueIrpToThread_DisketteExtension__PoweringDown < 1) {
L100:;
																									FlQueueIrpToThread_DisketteExtension__ThreadReferenceCount = FlQueueIrpToThread_DisketteExtension__ThreadReferenceCount + 1;
																									if(FlQueueIrpToThread_DisketteExtension__ThreadReferenceCount >= 0 && FlQueueIrpToThread_DisketteExtension__ThreadReferenceCount <= 0) {
{
 int PsCreateSystemThread_tmp_ndt_14 ;
int retres9 ;
																										int PsCreateSystemThread_ThreadHandle ; int PsCreateSystemThread_DesiredAccess ; int PsCreateSystemThread_ObjectAttributes ; int PsCreateSystemThread_ProcessHandle ; int PsCreateSystemThread_ClientId ; int PsCreateSystemThread_StartRoutine ; int PsCreateSystemThread_StartContext ;
																										PsCreateSystemThread_ThreadHandle = FlQueueIrpToThread_threadHandle;
																										PsCreateSystemThread_DesiredAccess = 0;
																										PsCreateSystemThread_ObjectAttributes = FlQueueIrpToThread_ObjAttributes;
																										PsCreateSystemThread_ProcessHandle = 0;
																										PsCreateSystemThread_ClientId = 0;
																										PsCreateSystemThread_StartRoutine = FloppyThread;
																										PsCreateSystemThread_StartContext = FlQueueIrpToThread_DisketteExtension;
																										PsCreateSystemThread_tmp_ndt_14 = __VERIFIER_nondet_int();
																										if(PsCreateSystemThread_tmp_ndt_14 >= 0 && PsCreateSystemThread_tmp_ndt_14 <= 0) {
																											retres9 = 0;
																											TRACER_RV = (retres9);
																											FlQueueIrpToThread_status = TRACER_RV;
																											TRACER_RV = nondet();
{
 int ObReferenceObjectByHandle_tmp_ndt_13 ;
int retres8 ;
																											int ObReferenceObjectByHandle_Handle ; int ObReferenceObjectByHandle_DesiredAccess ; int ObReferenceObjectByHandle_ObjectType ; int ObReferenceObjectByHandle_AccessMode ; int ObReferenceObjectByHandle_Object ; int ObReferenceObjectByHandle_HandleInformation ;
																											ObReferenceObjectByHandle_Handle = FlQueueIrpToThread_threadHandle;
																											ObReferenceObjectByHandle_DesiredAccess = 1048576;
																											ObReferenceObjectByHandle_ObjectType = 0;
																											ObReferenceObjectByHandle_AccessMode = KernelMode;
																											ObReferenceObjectByHandle_Object = FlQueueIrpToThread_DisketteExtension__FloppyThread;
																											ObReferenceObjectByHandle_HandleInformation = 0;
																											ObReferenceObjectByHandle_tmp_ndt_13 = __VERIFIER_nondet_int();
																											if(ObReferenceObjectByHandle_tmp_ndt_13 >= 0 && ObReferenceObjectByHandle_tmp_ndt_13 <= 0) {
																												retres8 = 0;
																												TRACER_RV = (retres8);
																												FlQueueIrpToThread_status = TRACER_RV;
																												TRACER_RV = nondet();
{
 int ZwClose_tmp_ndt_15 ;
int retres3 ;
																												int ZwClose_Handle ;
																												ZwClose_Handle = FlQueueIrpToThread_threadHandle;
L101:;
																												;
																												TRACER_RV = nondet();
L102:;
																												safety = safety + (pended - 0);
																												pended = 1;
																												retres11 = 259;
																												TRACER_RV = (retres11);
																												FloppyDeviceControl_ntStatus = TRACER_RV;
																												TRACER_RV = nondet();
																												goto L44;
}
																											}
																											else if(ObReferenceObjectByHandle_tmp_ndt_13 < 0) {
L103:;
																												retres8 = -1073741823;
																												TRACER_RV = (retres8);
																												FlQueueIrpToThread_status = TRACER_RV;
																												TRACER_RV = nondet();
{
 int ZwClose_tmp_ndt_15 ;
int retres3 ;
																												int ZwClose_Handle ;
																												ZwClose_Handle = FlQueueIrpToThread_threadHandle;
L104:;
																												;
																												TRACER_RV = nondet();
																												retres11 = FlQueueIrpToThread_status;
																												TRACER_returning = 1;
L105:;
																												TRACER_RV = (retres11);
																												FloppyDeviceControl_ntStatus = TRACER_RV;
																												TRACER_RV = nondet();
																												goto L48;
}
																											}
																											else {
																												goto L103;
																											}
}
																										}
																										else if(PsCreateSystemThread_tmp_ndt_14 < 0) {
L106:;
																											retres9 = -1073741823;
																											TRACER_RV = (retres9);
																											FlQueueIrpToThread_status = TRACER_RV;
																											TRACER_RV = nondet();
																											FlQueueIrpToThread_DisketteExtension__ThreadReferenceCount = -1;
																											PagingReferenceCount = PagingReferenceCount - 1;
																											retres11 = FlQueueIrpToThread_status;
																											TRACER_returning = 1;
																											goto L105;
																										}
																										else {
																											goto L106;
																										}
}
																									}
																									else if(FlQueueIrpToThread_DisketteExtension__ThreadReferenceCount < 0) {
																										goto L102;
																									}
																									else {
																										goto L102;
																									}
																								}
																								else {
																									goto L100;
																								}
}
																							}
																						}
																					}
																				}
																			}
																			else if(FloppyDeviceControl_irpSp__Parameters__DeviceIoControl__IoControlCode___1 < FloppyDeviceControl_CIL___Tmp88) {
																				goto L99;
																			}
																			else {
																				goto L99;
																			}
																		}
																	}
}
																}
															}
															else if(FloppyDeviceControl_irpSp__Parameters__DeviceIoControl__IoControlCode___1 < FloppyDeviceControl_CIL___Tmp66) {
L107:;
																if(FloppyDeviceControl_irpSp__Parameters__DeviceIoControl__IoControlCode___1 >= FloppyDeviceControl_CIL___Tmp69 && FloppyDeviceControl_irpSp__Parameters__DeviceIoControl__IoControlCode___1 <= FloppyDeviceControl_CIL___Tmp69) {
																	if(FloppyDeviceControl_irpSp__Parameters__DeviceIoControl__InputBufferLength < FloppyDeviceControl_sizeof__FORMAT_PARAMETERS) {
																		FloppyDeviceControl_ntStatus = -1073741811;
L108:;
																		goto L27;
																	}
																	else {
{
 int FlCheckFormatParameters_DriveMediaConstants__driveMediaType__MediaType ;
int FlCheckFormatParameters_FormatParameters__MediaType ;
int FlCheckFormatParameters_FAKE_CONDITION ;
int retres6 ;
																		int FlCheckFormatParameters_DisketteExtension ; int FlCheckFormatParameters_FormatParameters ;
																		FlCheckFormatParameters_DisketteExtension = FloppyDeviceControl_disketteExtension;
																		FlCheckFormatParameters_FormatParameters = FloppyDeviceControl_Irp__AssociatedIrp__SystemBuffer;
																		if(FlCheckFormatParameters_DriveMediaConstants__driveMediaType__MediaType > FlCheckFormatParameters_FormatParameters__MediaType) {
L109:;
																			retres6 = 0;
L110:;
																			TRACER_RV = (retres6);
																			FloppyDeviceControl_tmp___0 = TRACER_RV;
																			TRACER_RV = nondet();
																			FloppyDeviceControl_ntStatus = -1073741811;
																			goto L108;
																		}
																		else if(FlCheckFormatParameters_DriveMediaConstants__driveMediaType__MediaType < FlCheckFormatParameters_FormatParameters__MediaType) {
																			goto L109;
																		}
																		else {
																			if(FlCheckFormatParameters_FAKE_CONDITION > 0) {
L111:;
																				retres6 = 0;
																				goto L110;
																			}
																			else if(FlCheckFormatParameters_FAKE_CONDITION < 0) {
																				goto L111;
																			}
																			else {
																				retres6 = 1;
																				TRACER_RV = (retres6);
																				FloppyDeviceControl_tmp___0 = TRACER_RV;
																				TRACER_RV = nondet();
																				if(FloppyDeviceControl_irpSp__Parameters__DeviceIoControl__IoControlCode___1 >= FloppyDeviceControl_CIL___Tmp88 && FloppyDeviceControl_irpSp__Parameters__DeviceIoControl__IoControlCode___1 <= FloppyDeviceControl_CIL___Tmp88) {
																					if(FloppyDeviceControl_irpSp__Parameters__DeviceIoControl__InputBufferLength < FloppyDeviceControl_sizeof__FORMAT_EX_PARAMETERS) {
																						FloppyDeviceControl_ntStatus = -1073741811;
																						TRACER_breaking = 1;
L112:;
																						goto L108;
																					}
																					else {
																						if(FloppyDeviceControl_irpSp__Parameters__DeviceIoControl__InputBufferLength < FloppyDeviceControl_formatExParametersSize) {
																							FloppyDeviceControl_ntStatus = -1073741811;
																							TRACER_breaking = 1;
																							goto L112;
																						}
																						else {
																							if(FloppyDeviceControl_formatExParameters__FormatGapLength >= 256) {
																								FloppyDeviceControl_ntStatus = -1073741811;
																								TRACER_breaking = 1;
																								goto L112;
																							}
																							else {
																								if(FloppyDeviceControl_formatExParameters__SectorsPerTrack >= 256) {
																									FloppyDeviceControl_ntStatus = -1073741811;
																									TRACER_breaking = 1;
																									goto L112;
																								}
																								else {
L113:;
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
																									FlQueueIrpToThread_Irp = FloppyDeviceControl_Irp;
																									FlQueueIrpToThread_DisketteExtension = FloppyDeviceControl_disketteExtension;
																									TRACER_returning = 0;
																									if(FlQueueIrpToThread_DisketteExtension__PoweringDown >= 1 && FlQueueIrpToThread_DisketteExtension__PoweringDown <= 1) {
																										myStatus = -1073741101;
																										FlQueueIrpToThread_Irp__IoStatus__Status = -1073741101;
																										FlQueueIrpToThread_Irp__IoStatus__Information = 0;
																										retres11 = -1073741101;
																										TRACER_returning = 1;
																										TRACER_RV = (retres11);
																										FloppyDeviceControl_ntStatus = TRACER_RV;
																										TRACER_RV = nondet();
																										goto L40;
																									}
																									else if(FlQueueIrpToThread_DisketteExtension__PoweringDown < 1) {
L114:;
																										FlQueueIrpToThread_DisketteExtension__ThreadReferenceCount = FlQueueIrpToThread_DisketteExtension__ThreadReferenceCount + 1;
																										if(FlQueueIrpToThread_DisketteExtension__ThreadReferenceCount >= 0 && FlQueueIrpToThread_DisketteExtension__ThreadReferenceCount <= 0) {
{
 int PsCreateSystemThread_tmp_ndt_14 ;
int retres9 ;
																											int PsCreateSystemThread_ThreadHandle ; int PsCreateSystemThread_DesiredAccess ; int PsCreateSystemThread_ObjectAttributes ; int PsCreateSystemThread_ProcessHandle ; int PsCreateSystemThread_ClientId ; int PsCreateSystemThread_StartRoutine ; int PsCreateSystemThread_StartContext ;
																											PsCreateSystemThread_ThreadHandle = FlQueueIrpToThread_threadHandle;
																											PsCreateSystemThread_DesiredAccess = 0;
																											PsCreateSystemThread_ObjectAttributes = FlQueueIrpToThread_ObjAttributes;
																											PsCreateSystemThread_ProcessHandle = 0;
																											PsCreateSystemThread_ClientId = 0;
																											PsCreateSystemThread_StartRoutine = FloppyThread;
																											PsCreateSystemThread_StartContext = FlQueueIrpToThread_DisketteExtension;
																											PsCreateSystemThread_tmp_ndt_14 = __VERIFIER_nondet_int();
																											if(PsCreateSystemThread_tmp_ndt_14 >= 0 && PsCreateSystemThread_tmp_ndt_14 <= 0) {
																												retres9 = 0;
																												TRACER_RV = (retres9);
																												FlQueueIrpToThread_status = TRACER_RV;
																												TRACER_RV = nondet();
{
 int ObReferenceObjectByHandle_tmp_ndt_13 ;
int retres8 ;
																												int ObReferenceObjectByHandle_Handle ; int ObReferenceObjectByHandle_DesiredAccess ; int ObReferenceObjectByHandle_ObjectType ; int ObReferenceObjectByHandle_AccessMode ; int ObReferenceObjectByHandle_Object ; int ObReferenceObjectByHandle_HandleInformation ;
																												ObReferenceObjectByHandle_Handle = FlQueueIrpToThread_threadHandle;
																												ObReferenceObjectByHandle_DesiredAccess = 1048576;
																												ObReferenceObjectByHandle_ObjectType = 0;
																												ObReferenceObjectByHandle_AccessMode = KernelMode;
																												ObReferenceObjectByHandle_Object = FlQueueIrpToThread_DisketteExtension__FloppyThread;
																												ObReferenceObjectByHandle_HandleInformation = 0;
																												ObReferenceObjectByHandle_tmp_ndt_13 = __VERIFIER_nondet_int();
																												if(ObReferenceObjectByHandle_tmp_ndt_13 >= 0 && ObReferenceObjectByHandle_tmp_ndt_13 <= 0) {
																													retres8 = 0;
																													TRACER_RV = (retres8);
																													FlQueueIrpToThread_status = TRACER_RV;
																													TRACER_RV = nondet();
{
 int ZwClose_tmp_ndt_15 ;
int retres3 ;
																													int ZwClose_Handle ;
																													ZwClose_Handle = FlQueueIrpToThread_threadHandle;
L115:;
																													;
																													TRACER_RV = nondet();
L116:;
																													safety = safety + (pended - 0);
																													pended = 1;
																													retres11 = 259;
																													TRACER_RV = (retres11);
																													FloppyDeviceControl_ntStatus = TRACER_RV;
																													TRACER_RV = nondet();
																													goto L44;
}
																												}
																												else if(ObReferenceObjectByHandle_tmp_ndt_13 < 0) {
L117:;
																													retres8 = -1073741823;
																													TRACER_RV = (retres8);
																													FlQueueIrpToThread_status = TRACER_RV;
																													TRACER_RV = nondet();
{
 int ZwClose_tmp_ndt_15 ;
int retres3 ;
																													int ZwClose_Handle ;
																													ZwClose_Handle = FlQueueIrpToThread_threadHandle;
L118:;
																													;
																													TRACER_RV = nondet();
																													retres11 = FlQueueIrpToThread_status;
																													TRACER_returning = 1;
L119:;
																													TRACER_RV = (retres11);
																													FloppyDeviceControl_ntStatus = TRACER_RV;
																													TRACER_RV = nondet();
																													goto L48;
}
																												}
																												else {
																													goto L117;
																												}
}
																											}
																											else if(PsCreateSystemThread_tmp_ndt_14 < 0) {
L120:;
																												retres9 = -1073741823;
																												TRACER_RV = (retres9);
																												FlQueueIrpToThread_status = TRACER_RV;
																												TRACER_RV = nondet();
																												FlQueueIrpToThread_DisketteExtension__ThreadReferenceCount = -1;
																												PagingReferenceCount = PagingReferenceCount - 1;
																												retres11 = FlQueueIrpToThread_status;
																												TRACER_returning = 1;
																												goto L119;
																											}
																											else {
																												goto L120;
																											}
}
																										}
																										else if(FlQueueIrpToThread_DisketteExtension__ThreadReferenceCount < 0) {
																											goto L116;
																										}
																										else {
																											goto L116;
																										}
																									}
																									else {
																										goto L114;
																									}
}
																								}
																							}
																						}
																					}
																				}
																				else if(FloppyDeviceControl_irpSp__Parameters__DeviceIoControl__IoControlCode___1 < FloppyDeviceControl_CIL___Tmp88) {
																					goto L113;
																				}
																				else {
																					goto L113;
																				}
																			}
																		}
}
																	}
																}
																else if(FloppyDeviceControl_irpSp__Parameters__DeviceIoControl__IoControlCode___1 < FloppyDeviceControl_CIL___Tmp69) {
L121:;
																	if(FloppyDeviceControl_irpSp__Parameters__DeviceIoControl__IoControlCode___1 >= FloppyDeviceControl_CIL___Tmp72 && FloppyDeviceControl_irpSp__Parameters__DeviceIoControl__IoControlCode___1 <= FloppyDeviceControl_CIL___Tmp72) {
																		FloppyDeviceControl_outputBufferLength = FloppyDeviceControl_irpSp__Parameters__DeviceIoControl__OutputBufferLength;
																		if(FloppyDeviceControl_outputBufferLength < FloppyDeviceControl_sizeof__DISK_GEOMETRY) {
																			FloppyDeviceControl_ntStatus = -1073741789;
L122:;
																			FloppyDeviceControl_CIL___Tmp91 = FloppyDeviceControl_ntStatus;
{
																			int IofCompleteRequest_Irp ; int IofCompleteRequest_PriorityBoost ;
																			IofCompleteRequest_Irp = FloppyDeviceControl_Irp;
																			IofCompleteRequest_PriorityBoost = 0;
																			safety = safety + (s - NP);
																			s = DC;
																			;
																			TRACER_RV = nondet();
																			retres58 = FloppyDeviceControl_ntStatus;
																			TRACER_RV = (retres58);
																			main_status = TRACER_RV;
																			TRACER_RV = nondet();
																			goto L3;
}
																		}
																		else {
																			FloppyDeviceControl_ntStatus = 0;
																			FloppyDeviceControl_CIL___Tmp89 = FloppyDeviceControl_highestDriveMediaType - FloppyDeviceControl_lowestDriveMediaType;
																			FloppyDeviceControl_CIL___Tmp90 = FloppyDeviceControl_CIL___Tmp89 + 1;
																			if(FloppyDeviceControl_outputBufferLength < FloppyDeviceControl_CIL___Tmp90) {
																				FloppyDeviceControl_ntStatus = -2147483643;
																				goto L28;
																			}
																			else {
																				goto L29;
																			}
																		}
																	}
																	else if(FloppyDeviceControl_irpSp__Parameters__DeviceIoControl__IoControlCode___1 < FloppyDeviceControl_CIL___Tmp72) {
L123:;
																		if(FloppyDeviceControl_irpSp__Parameters__DeviceIoControl__IoControlCode___1 >= FloppyDeviceControl_CIL___Tmp75 && FloppyDeviceControl_irpSp__Parameters__DeviceIoControl__IoControlCode___1 <= FloppyDeviceControl_CIL___Tmp75) {
																			FloppyDeviceControl_outputBufferLength = FloppyDeviceControl_irpSp__Parameters__DeviceIoControl__OutputBufferLength;
																			if(FloppyDeviceControl_outputBufferLength < FloppyDeviceControl_sizeof__DISK_GEOMETRY) {
																				FloppyDeviceControl_ntStatus = -1073741789;
																				goto L122;
																			}
																			else {
																				FloppyDeviceControl_ntStatus = 0;
																				FloppyDeviceControl_CIL___Tmp89 = FloppyDeviceControl_highestDriveMediaType - FloppyDeviceControl_lowestDriveMediaType;
																				FloppyDeviceControl_CIL___Tmp90 = FloppyDeviceControl_CIL___Tmp89 + 1;
																				if(FloppyDeviceControl_outputBufferLength < FloppyDeviceControl_CIL___Tmp90) {
																					FloppyDeviceControl_ntStatus = -2147483643;
																					goto L28;
																				}
																				else {
																					goto L29;
																				}
																			}
																		}
																		else if(FloppyDeviceControl_irpSp__Parameters__DeviceIoControl__IoControlCode___1 < FloppyDeviceControl_CIL___Tmp75) {
L124:;
																			if(FloppyDeviceControl_irpSp__Parameters__DeviceIoControl__IoControlCode___1 >= FloppyDeviceControl_CIL___Tmp78 && FloppyDeviceControl_irpSp__Parameters__DeviceIoControl__IoControlCode___1 <= FloppyDeviceControl_CIL___Tmp78) {
																				safety = safety + (s - NP);
																				s = SKIP1;
																				FloppyDeviceControl_Irp__CurrentLocation = FloppyDeviceControl_Irp__CurrentLocation + 1;
																				FloppyDeviceControl_Irp__Tail__Overlay__CurrentStackLocation = FloppyDeviceControl_Irp__Tail__Overlay__CurrentStackLocation + 1;
{
 int IofCallDriver_returnVal2 ;
int IofCallDriver_compRetStatus1 ;
int IofCallDriver_lcontext ;
int IofCallDriver_CIL___Tmp7 ;
int IofCallDriver_tmp_ndt_10 ;
int IofCallDriver_tmp_ndt_11 ;
																				int IofCallDriver_DeviceObject ; int IofCallDriver_Irp ;
																				IofCallDriver_DeviceObject = FloppyDeviceControl_disketteExtension__TargetObject;
																				IofCallDriver_Irp = FloppyDeviceControl_Irp;
																				IofCallDriver_tmp_ndt_10 = __VERIFIER_nondet_int();
																				if(IofCallDriver_tmp_ndt_10 >= 0 && IofCallDriver_tmp_ndt_10 <= 0) {
																					IofCallDriver_returnVal2 = 0;
																					safety = safety + (s - SKIP1);
																					s = SKIP2;
																					lowerDriverReturn = IofCallDriver_returnVal2;
																					TRACER_RV = (IofCallDriver_returnVal2);
																					FloppyDeviceControl_ntStatus = TRACER_RV;
																					TRACER_RV = nondet();
																					retres58 = FloppyDeviceControl_ntStatus;
																					TRACER_returning = 1;
L125:;
																					TRACER_RV = (retres58);
																					main_status = TRACER_RV;
																					TRACER_RV = nondet();
																					goto L17;
																				}
																				else if(IofCallDriver_tmp_ndt_10 < 0) {
L126:;
																					IofCallDriver_tmp_ndt_11 = __VERIFIER_nondet_int();
																					if(IofCallDriver_tmp_ndt_11 >= 1 && IofCallDriver_tmp_ndt_11 <= 1) {
																						IofCallDriver_returnVal2 = -1073741823;
																						safety = safety + (s - SKIP1);
																						s = SKIP2;
																						lowerDriverReturn = IofCallDriver_returnVal2;
																						TRACER_RV = (IofCallDriver_returnVal2);
																						FloppyDeviceControl_ntStatus = TRACER_RV;
																						TRACER_RV = nondet();
																						retres58 = FloppyDeviceControl_ntStatus;
																						TRACER_returning = 1;
L127:;
																						TRACER_RV = (retres58);
																						main_status = TRACER_RV;
																						TRACER_RV = nondet();
																						goto L21;
																					}
																					else if(IofCallDriver_tmp_ndt_11 < 1) {
L128:;
																						IofCallDriver_returnVal2 = 259;
																						safety = safety + (s - SKIP1);
																						s = SKIP2;
																						lowerDriverReturn = IofCallDriver_returnVal2;
																						TRACER_RV = (IofCallDriver_returnVal2);
																						FloppyDeviceControl_ntStatus = TRACER_RV;
																						TRACER_RV = nondet();
																						retres58 = FloppyDeviceControl_ntStatus;
																						TRACER_returning = 1;
L129:;
																						TRACER_RV = (retres58);
																						main_status = TRACER_RV;
																						TRACER_RV = nondet();
																						goto L24;
																					}
																					else {
																						goto L128;
																					}
																				}
																				else {
																					goto L126;
																				}
}
																			}
																			else if(FloppyDeviceControl_irpSp__Parameters__DeviceIoControl__IoControlCode___1 < FloppyDeviceControl_CIL___Tmp78) {
L130:;
																				if(FloppyDeviceControl_irpSp__Parameters__DeviceIoControl__IoControlCode___1 >= FloppyDeviceControl_CIL___Tmp81 && FloppyDeviceControl_irpSp__Parameters__DeviceIoControl__IoControlCode___1 <= FloppyDeviceControl_CIL___Tmp81) {
																					safety = safety + (s - NP);
																					s = SKIP1;
																					FloppyDeviceControl_Irp__CurrentLocation = FloppyDeviceControl_Irp__CurrentLocation + 1;
																					FloppyDeviceControl_Irp__Tail__Overlay__CurrentStackLocation = FloppyDeviceControl_Irp__Tail__Overlay__CurrentStackLocation + 1;
{
 int IofCallDriver_returnVal2 ;
int IofCallDriver_compRetStatus1 ;
int IofCallDriver_lcontext ;
int IofCallDriver_CIL___Tmp7 ;
int IofCallDriver_tmp_ndt_10 ;
int IofCallDriver_tmp_ndt_11 ;
																					int IofCallDriver_DeviceObject ; int IofCallDriver_Irp ;
																					IofCallDriver_DeviceObject = FloppyDeviceControl_disketteExtension__TargetObject;
																					IofCallDriver_Irp = FloppyDeviceControl_Irp;
																					IofCallDriver_tmp_ndt_10 = __VERIFIER_nondet_int();
																					if(IofCallDriver_tmp_ndt_10 >= 0 && IofCallDriver_tmp_ndt_10 <= 0) {
																						IofCallDriver_returnVal2 = 0;
																						safety = safety + (s - SKIP1);
																						s = SKIP2;
																						lowerDriverReturn = IofCallDriver_returnVal2;
																						TRACER_RV = (IofCallDriver_returnVal2);
																						FloppyDeviceControl_ntStatus = TRACER_RV;
																						TRACER_RV = nondet();
																						retres58 = FloppyDeviceControl_ntStatus;
																						TRACER_returning = 1;
																						goto L125;
																					}
																					else if(IofCallDriver_tmp_ndt_10 < 0) {
L131:;
																						IofCallDriver_tmp_ndt_11 = __VERIFIER_nondet_int();
																						if(IofCallDriver_tmp_ndt_11 >= 1 && IofCallDriver_tmp_ndt_11 <= 1) {
																							IofCallDriver_returnVal2 = -1073741823;
																							safety = safety + (s - SKIP1);
																							s = SKIP2;
																							lowerDriverReturn = IofCallDriver_returnVal2;
																							TRACER_RV = (IofCallDriver_returnVal2);
																							FloppyDeviceControl_ntStatus = TRACER_RV;
																							TRACER_RV = nondet();
																							retres58 = FloppyDeviceControl_ntStatus;
																							TRACER_returning = 1;
																							goto L127;
																						}
																						else if(IofCallDriver_tmp_ndt_11 < 1) {
L132:;
																							IofCallDriver_returnVal2 = 259;
																							safety = safety + (s - SKIP1);
																							s = SKIP2;
																							lowerDriverReturn = IofCallDriver_returnVal2;
																							TRACER_RV = (IofCallDriver_returnVal2);
																							FloppyDeviceControl_ntStatus = TRACER_RV;
																							TRACER_RV = nondet();
																							retres58 = FloppyDeviceControl_ntStatus;
																							TRACER_returning = 1;
																							goto L129;
																						}
																						else {
																							goto L132;
																						}
																					}
																					else {
																						goto L131;
																					}
}
																				}
																				else if(FloppyDeviceControl_irpSp__Parameters__DeviceIoControl__IoControlCode___1 < FloppyDeviceControl_CIL___Tmp81) {
L133:;
																					safety = safety + (s - NP);
																					s = SKIP1;
																					FloppyDeviceControl_Irp__CurrentLocation = FloppyDeviceControl_Irp__CurrentLocation + 1;
																					FloppyDeviceControl_Irp__Tail__Overlay__CurrentStackLocation = FloppyDeviceControl_Irp__Tail__Overlay__CurrentStackLocation + 1;
{
 int IofCallDriver_returnVal2 ;
int IofCallDriver_compRetStatus1 ;
int IofCallDriver_lcontext ;
int IofCallDriver_CIL___Tmp7 ;
int IofCallDriver_tmp_ndt_10 ;
int IofCallDriver_tmp_ndt_11 ;
																					int IofCallDriver_DeviceObject ; int IofCallDriver_Irp ;
																					IofCallDriver_DeviceObject = FloppyDeviceControl_disketteExtension__TargetObject;
																					IofCallDriver_Irp = FloppyDeviceControl_Irp;
																					IofCallDriver_tmp_ndt_10 = __VERIFIER_nondet_int();
																					if(IofCallDriver_tmp_ndt_10 >= 0 && IofCallDriver_tmp_ndt_10 <= 0) {
																						IofCallDriver_returnVal2 = 0;
																						safety = safety + (s - SKIP1);
																						s = SKIP2;
																						lowerDriverReturn = IofCallDriver_returnVal2;
																						TRACER_RV = (IofCallDriver_returnVal2);
																						FloppyDeviceControl_ntStatus = TRACER_RV;
																						TRACER_RV = nondet();
																						retres58 = FloppyDeviceControl_ntStatus;
																						TRACER_returning = 1;
																						goto L125;
																					}
																					else if(IofCallDriver_tmp_ndt_10 < 0) {
L134:;
																						IofCallDriver_tmp_ndt_11 = __VERIFIER_nondet_int();
																						if(IofCallDriver_tmp_ndt_11 >= 1 && IofCallDriver_tmp_ndt_11 <= 1) {
																							IofCallDriver_returnVal2 = -1073741823;
																							safety = safety + (s - SKIP1);
																							s = SKIP2;
																							lowerDriverReturn = IofCallDriver_returnVal2;
																							TRACER_RV = (IofCallDriver_returnVal2);
																							FloppyDeviceControl_ntStatus = TRACER_RV;
																							TRACER_RV = nondet();
																							retres58 = FloppyDeviceControl_ntStatus;
																							TRACER_returning = 1;
																							goto L127;
																						}
																						else if(IofCallDriver_tmp_ndt_11 < 1) {
L135:;
																							IofCallDriver_returnVal2 = 259;
																							safety = safety + (s - SKIP1);
																							s = SKIP2;
																							lowerDriverReturn = IofCallDriver_returnVal2;
																							TRACER_RV = (IofCallDriver_returnVal2);
																							FloppyDeviceControl_ntStatus = TRACER_RV;
																							TRACER_RV = nondet();
																							retres58 = FloppyDeviceControl_ntStatus;
																							TRACER_returning = 1;
																							goto L129;
																						}
																						else {
																							goto L135;
																						}
																					}
																					else {
																						goto L134;
																					}
}
																				}
																				else {
																					goto L133;
																				}
																			}
																			else {
																				goto L130;
																			}
																		}
																		else {
																			goto L124;
																		}
																	}
																	else {
																		goto L123;
																	}
																}
																else {
																	goto L121;
																}
															}
															else {
																goto L107;
															}
														}
														else {
															goto L93;
														}
													}
													else {
														goto L79;
													}
												}
												else {
													goto L65;
												}
											}
											else {
												goto L51;
											}
										}
										else {
											goto L33;
										}
									}
									else {
										goto L30;
									}
								}
								else {
									goto L26;
								}
							}
						}
					}
					else if(FloppyDeviceControl_disketteExtension__HoldNewRequests < 0) {
						goto L9;
					}
					else {
						goto L14;
					}
}
				}
				else if(main_tmp_ndt_3 < 2) {
L136:;
					main_tmp_ndt_4 = __VERIFIER_nondet_int();
					if(main_tmp_ndt_4 >= 3 && main_tmp_ndt_4 <= 3) {
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
L137:;
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
L138:;
							goto L16;
}
						}
						else if(FloppyPnp_disketteExtension__IsRemoved < 0) {
							goto L137;
						}
						else {
							if(FloppyPnp_irpSp__MinorFunction >= 0 && FloppyPnp_irpSp__MinorFunction <= 0) {
{
 int FloppyStartDevice_DeviceObject__DeviceExtension ;
int FloppyStartDevice_Irp__Tail__Overlay__CurrentStackLocation ;
int FloppyStartDevice_Irp__IoStatus__Status ;
int FloppyStartDevice_disketteExtension__TargetObject ;
int FloppyStartDevice_disketteExtension__MaxTransferSize ;
int FloppyStartDevice_disketteExtension__DeviceUnit ;
int FloppyStartDevice_disketteExtension__DriveOnValue ;
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
int FloppyStartDevice_CIL___Tmp46 ;
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
int IofCallDriver_tmp_ndt_10 ;
int IofCallDriver_tmp_ndt_11 ;
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
								IofCallDriver_tmp_ndt_10 = __VERIFIER_nondet_int();
								if(IofCallDriver_tmp_ndt_10 >= 0 && IofCallDriver_tmp_ndt_10 <= 0) {
									IofCallDriver_returnVal2 = 0;
									s = NP;
									lowerDriverReturn = IofCallDriver_returnVal2;
									FloppyStartDevice_ntStatus = TRACER_RV;
									TRACER_RV = nondet();
L139:;
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
int IoBuildDeviceIoControlRequest_tmp_ndt_5 ;
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
									IoBuildDeviceIoControlRequest_tmp_ndt_5 = __VERIFIER_nondet_int();
									if(IoBuildDeviceIoControlRequest_tmp_ndt_5 >= 0 && IoBuildDeviceIoControlRequest_tmp_ndt_5 <= 0) {
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
L141:;
											goto L3;
}
										}
										else if(FlFdcDeviceIo_irp < 0) {
L142:;
{
 int IofCallDriver_returnVal2 ;
int IofCallDriver_compRetStatus1 ;
int IofCallDriver_lcontext ;
int IofCallDriver_CIL___Tmp7 ;
int IofCallDriver_tmp_ndt_10 ;
int IofCallDriver_tmp_ndt_11 ;
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
											IofCallDriver_tmp_ndt_10 = __VERIFIER_nondet_int();
											if(IofCallDriver_tmp_ndt_10 >= 0 && IofCallDriver_tmp_ndt_10 <= 0) {
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
L145:;
L146:;
L147:;
L148:;
{
 int IoRegisterDeviceInterface_tmp_ndt_8 ;
int retres6 ;
														int IoRegisterDeviceInterface_PhysicalDeviceObject ; int IoRegisterDeviceInterface_InterfaceClassGuid ; int IoRegisterDeviceInterface_ReferenceString ; int IoRegisterDeviceInterface_SymbolicLinkName ;
														IoRegisterDeviceInterface_PhysicalDeviceObject = FloppyStartDevice_disketteExtension__UnderlyingPDO;
														IoRegisterDeviceInterface_InterfaceClassGuid = MOUNTDEV_MOUNTED_DEVICE_GUID;
														IoRegisterDeviceInterface_ReferenceString = 0;
														IoRegisterDeviceInterface_SymbolicLinkName = FloppyStartDevice_disketteExtension__InterfaceString;
														IoRegisterDeviceInterface_tmp_ndt_8 = __VERIFIER_nondet_int();
														if(IoRegisterDeviceInterface_tmp_ndt_8 >= 0 && IoRegisterDeviceInterface_tmp_ndt_8 <= 0) {
															FloppyStartDevice_pnpStatus = TRACER_RV;
															TRACER_RV = nondet();
{
 int IoSetDeviceInterfaceState_tmp_ndt_9 ;
int retres4 ;
															int IoSetDeviceInterfaceState_SymbolicLinkName ; int IoSetDeviceInterfaceState_Enable ;
															IoSetDeviceInterfaceState_SymbolicLinkName = FloppyStartDevice_disketteExtension__InterfaceString;
															IoSetDeviceInterfaceState_Enable = 1;
L149:;
															FloppyStartDevice_pnpStatus = TRACER_RV;
															TRACER_RV = nondet();
L150:;
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
L151:;
															PagingReferenceCount = PagingReferenceCount - 1;
															retres31 = FloppyPnp_ntStatus;
															TRACER_RV = (retres31);
															main_status = TRACER_RV;
															TRACER_RV = nondet();
L152:;
															goto L2;
}
}
														}
														else if(IoRegisterDeviceInterface_tmp_ndt_8 < 0) {
L153:;
															retres6 = -1073741808;
															TRACER_RV = (retres6);
															FloppyStartDevice_pnpStatus = TRACER_RV;
															TRACER_RV = nondet();
															goto L150;
														}
														else {
															goto L153;
														}
}
}
													}
													else if(FloppyStartDevice_fdcInfo__AcpiFdiSupported < 0) {
														goto L144;
													}
													else {
														goto L145;
													}
												}
												else if(FloppyStartDevice_fdcInfo__AcpiBios < 0) {
													goto L143;
												}
												else {
													goto L146;
												}
											}
											else if(IofCallDriver_tmp_ndt_10 < 0) {
L154:;
												IofCallDriver_tmp_ndt_11 = __VERIFIER_nondet_int();
												if(IofCallDriver_tmp_ndt_11 >= 1 && IofCallDriver_tmp_ndt_11 <= 1) {
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
L155:;
													PagingReferenceCount = PagingReferenceCount - 1;
													retres31 = FloppyPnp_ntStatus;
													TRACER_RV = (retres31);
													main_status = TRACER_RV;
													TRACER_RV = nondet();
L156:;
													goto L49;
}
												}
												else if(IofCallDriver_tmp_ndt_11 < 1) {
L157:;
													IofCallDriver_returnVal2 = 259;
													s = MPR3;
													lowerDriverReturn = IofCallDriver_returnVal2;
													TRACER_RV = (IofCallDriver_returnVal2);
													FlFdcDeviceIo_ntStatus = TRACER_RV;
													TRACER_RV = nondet();
													FlFdcDeviceIo_CIL___Tmp11 = FlFdcDeviceIo_ntStatus;
{
 int KeWaitForSingleObject_tmp_ndt_12 ;
int retres7 ;
													int KeWaitForSingleObject_Object ; int KeWaitForSingleObject_WaitReason ; int KeWaitForSingleObject_WaitMode ; int KeWaitForSingleObject_Alertable ; int KeWaitForSingleObject_Timeout ;
													KeWaitForSingleObject_Object = FlFdcDeviceIo_doneEvent;
													KeWaitForSingleObject_WaitReason = Suspended;
													KeWaitForSingleObject_WaitMode = KernelMode;
													KeWaitForSingleObject_Alertable = 0;
													KeWaitForSingleObject_Timeout = 0;
													s = NP;
													setEventCalled = 0;
L158:;
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
													goto L157;
												}
											}
											else {
												goto L154;
											}
}
}
}
}
										}
										else {
											goto L142;
										}
									}
									else if(IoBuildDeviceIoControlRequest_tmp_ndt_5 < 0) {
L159:;
										retres12 = 0;
										goto L140;
									}
									else {
										goto L159;
									}
}
}
								}
								else if(IofCallDriver_tmp_ndt_10 < 0) {
L160:;
									IofCallDriver_tmp_ndt_11 = __VERIFIER_nondet_int();
									if(IofCallDriver_tmp_ndt_11 >= 1 && IofCallDriver_tmp_ndt_11 <= 1) {
										IofCallDriver_returnVal2 = -1073741823;
										s = NP;
										lowerDriverReturn = IofCallDriver_returnVal2;
										FloppyStartDevice_ntStatus = TRACER_RV;
										TRACER_RV = nondet();
										goto L139;
									}
									else if(IofCallDriver_tmp_ndt_11 < 1) {
L161:;
										IofCallDriver_returnVal2 = 259;
										s = MPR3;
										lowerDriverReturn = IofCallDriver_returnVal2;
										TRACER_RV = (IofCallDriver_returnVal2);
										FloppyStartDevice_ntStatus = TRACER_RV;
										TRACER_RV = nondet();
										FloppyStartDevice_CIL___Tmp42 = FloppyStartDevice_ntStatus;
{
 int KeWaitForSingleObject_tmp_ndt_12 ;
int retres7 ;
										int KeWaitForSingleObject_Object ; int KeWaitForSingleObject_WaitReason ; int KeWaitForSingleObject_WaitMode ; int KeWaitForSingleObject_Alertable ; int KeWaitForSingleObject_Timeout ;
										KeWaitForSingleObject_Object = FloppyStartDevice_doneEvent;
										KeWaitForSingleObject_WaitReason = Executive;
										KeWaitForSingleObject_WaitMode = KernelMode;
										KeWaitForSingleObject_Alertable = 0;
										KeWaitForSingleObject_Timeout = 0;
										s = NP;
										setEventCalled = 0;
L162:;
										FloppyStartDevice_ntStatus = TRACER_RV;
										TRACER_RV = nondet();
										goto L139;
}
									}
									else {
										goto L161;
									}
								}
								else {
									goto L160;
								}
}
}
}
}
}
							}
							else if(FloppyPnp_irpSp__MinorFunction < 0) {
L163:;
								safety = safety + (s - NP);
								s = SKIP1;
								FloppyPnp_Irp__CurrentLocation = FloppyPnp_Irp__CurrentLocation + 1;
								FloppyPnp_Irp__Tail__Overlay__CurrentStackLocation = FloppyPnp_Irp__Tail__Overlay__CurrentStackLocation + 1;
{
 int IofCallDriver_returnVal2 ;
int IofCallDriver_compRetStatus1 ;
int IofCallDriver_lcontext ;
int IofCallDriver_CIL___Tmp7 ;
int IofCallDriver_tmp_ndt_10 ;
int IofCallDriver_tmp_ndt_11 ;
								int IofCallDriver_DeviceObject ; int IofCallDriver_Irp ;
								IofCallDriver_DeviceObject = FloppyPnp_disketteExtension__TargetObject;
								IofCallDriver_Irp = FloppyPnp_Irp;
								IofCallDriver_tmp_ndt_10 = __VERIFIER_nondet_int();
								if(IofCallDriver_tmp_ndt_10 >= 0 && IofCallDriver_tmp_ndt_10 <= 0) {
									IofCallDriver_returnVal2 = 0;
									safety = safety + (s - SKIP1);
									s = SKIP2;
									lowerDriverReturn = IofCallDriver_returnVal2;
									TRACER_RV = (IofCallDriver_returnVal2);
									FloppyPnp_ntStatus = TRACER_RV;
									TRACER_RV = nondet();
L164:;
									PagingReferenceCount = PagingReferenceCount - 1;
									retres31 = FloppyPnp_ntStatus;
L165:;
									TRACER_RV = (retres31);
									main_status = TRACER_RV;
									TRACER_RV = nondet();
L166:;
									goto L18;
								}
								else if(IofCallDriver_tmp_ndt_10 < 0) {
L167:;
									IofCallDriver_tmp_ndt_11 = __VERIFIER_nondet_int();
									if(IofCallDriver_tmp_ndt_11 >= 1 && IofCallDriver_tmp_ndt_11 <= 1) {
										IofCallDriver_returnVal2 = -1073741823;
										safety = safety + (s - SKIP1);
										s = SKIP2;
										lowerDriverReturn = IofCallDriver_returnVal2;
										TRACER_RV = (IofCallDriver_returnVal2);
										FloppyPnp_ntStatus = TRACER_RV;
										TRACER_RV = nondet();
L168:;
										PagingReferenceCount = PagingReferenceCount - 1;
										retres31 = FloppyPnp_ntStatus;
L169:;
										TRACER_RV = (retres31);
										main_status = TRACER_RV;
										TRACER_RV = nondet();
L170:;
										goto L22;
									}
									else if(IofCallDriver_tmp_ndt_11 < 1) {
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
L174:;
										goto L25;
									}
									else {
										goto L171;
									}
								}
								else {
									goto L167;
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
int IofCallDriver_tmp_ndt_10 ;
int IofCallDriver_tmp_ndt_11 ;
										int IofCallDriver_DeviceObject ; int IofCallDriver_Irp ;
										IofCallDriver_DeviceObject = FloppyPnp_disketteExtension__TargetObject;
										IofCallDriver_Irp = FloppyPnp_Irp;
										IofCallDriver_tmp_ndt_10 = __VERIFIER_nondet_int();
										if(IofCallDriver_tmp_ndt_10 >= 0 && IofCallDriver_tmp_ndt_10 <= 0) {
											IofCallDriver_returnVal2 = 0;
											safety = safety + (s - SKIP1);
											s = SKIP2;
											lowerDriverReturn = IofCallDriver_returnVal2;
											TRACER_RV = (IofCallDriver_returnVal2);
											FloppyPnp_ntStatus = TRACER_RV;
											TRACER_RV = nondet();
											retres31 = FloppyPnp_ntStatus;
											TRACER_returning = 1;
L175:;
											goto L165;
										}
										else if(IofCallDriver_tmp_ndt_10 < 0) {
L176:;
											IofCallDriver_tmp_ndt_11 = __VERIFIER_nondet_int();
											if(IofCallDriver_tmp_ndt_11 >= 1 && IofCallDriver_tmp_ndt_11 <= 1) {
												IofCallDriver_returnVal2 = -1073741823;
												safety = safety + (s - SKIP1);
												s = SKIP2;
												lowerDriverReturn = IofCallDriver_returnVal2;
												TRACER_RV = (IofCallDriver_returnVal2);
												FloppyPnp_ntStatus = TRACER_RV;
												TRACER_RV = nondet();
												retres31 = FloppyPnp_ntStatus;
												TRACER_returning = 1;
L177:;
												goto L169;
											}
											else if(IofCallDriver_tmp_ndt_11 < 1) {
L178:;
												IofCallDriver_returnVal2 = 259;
												safety = safety + (s - SKIP1);
												s = SKIP2;
												lowerDriverReturn = IofCallDriver_returnVal2;
												TRACER_RV = (IofCallDriver_returnVal2);
												FloppyPnp_ntStatus = TRACER_RV;
												TRACER_RV = nondet();
												retres31 = FloppyPnp_ntStatus;
												TRACER_returning = 1;
L179:;
												goto L173;
											}
											else {
												goto L178;
											}
										}
										else {
											goto L176;
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
											TRACER_returning = 1;
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
											goto L155;
}
										}
										else if(FlQueueIrpToThread_DisketteExtension__PoweringDown < 1) {
L182:;
											FlQueueIrpToThread_DisketteExtension__ThreadReferenceCount = FlQueueIrpToThread_DisketteExtension__ThreadReferenceCount + 1;
											if(FlQueueIrpToThread_DisketteExtension__ThreadReferenceCount >= 0 && FlQueueIrpToThread_DisketteExtension__ThreadReferenceCount <= 0) {
{
 int PsCreateSystemThread_tmp_ndt_14 ;
int retres9 ;
												int PsCreateSystemThread_ThreadHandle ; int PsCreateSystemThread_DesiredAccess ; int PsCreateSystemThread_ObjectAttributes ; int PsCreateSystemThread_ProcessHandle ; int PsCreateSystemThread_ClientId ; int PsCreateSystemThread_StartRoutine ; int PsCreateSystemThread_StartContext ;
												PsCreateSystemThread_ThreadHandle = FlQueueIrpToThread_threadHandle;
												PsCreateSystemThread_DesiredAccess = 0;
												PsCreateSystemThread_ObjectAttributes = FlQueueIrpToThread_ObjAttributes;
												PsCreateSystemThread_ProcessHandle = 0;
												PsCreateSystemThread_ClientId = 0;
												PsCreateSystemThread_StartRoutine = FloppyThread;
												PsCreateSystemThread_StartContext = FlQueueIrpToThread_DisketteExtension;
												PsCreateSystemThread_tmp_ndt_14 = __VERIFIER_nondet_int();
												if(PsCreateSystemThread_tmp_ndt_14 >= 0 && PsCreateSystemThread_tmp_ndt_14 <= 0) {
													retres9 = 0;
													TRACER_RV = (retres9);
													FlQueueIrpToThread_status = TRACER_RV;
													TRACER_RV = nondet();
{
 int ObReferenceObjectByHandle_tmp_ndt_13 ;
int retres8 ;
													int ObReferenceObjectByHandle_Handle ; int ObReferenceObjectByHandle_DesiredAccess ; int ObReferenceObjectByHandle_ObjectType ; int ObReferenceObjectByHandle_AccessMode ; int ObReferenceObjectByHandle_Object ; int ObReferenceObjectByHandle_HandleInformation ;
													ObReferenceObjectByHandle_Handle = FlQueueIrpToThread_threadHandle;
													ObReferenceObjectByHandle_DesiredAccess = 1048576;
													ObReferenceObjectByHandle_ObjectType = 0;
													ObReferenceObjectByHandle_AccessMode = KernelMode;
													ObReferenceObjectByHandle_Object = FlQueueIrpToThread_DisketteExtension__FloppyThread;
													ObReferenceObjectByHandle_HandleInformation = 0;
													ObReferenceObjectByHandle_tmp_ndt_13 = __VERIFIER_nondet_int();
													if(ObReferenceObjectByHandle_tmp_ndt_13 >= 0 && ObReferenceObjectByHandle_tmp_ndt_13 <= 0) {
														retres8 = 0;
														TRACER_RV = (retres8);
														FlQueueIrpToThread_status = TRACER_RV;
														TRACER_RV = nondet();
{
 int ZwClose_tmp_ndt_15 ;
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
 int KeWaitForSingleObject_tmp_ndt_12 ;
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
int IofCallDriver_tmp_ndt_10 ;
int IofCallDriver_tmp_ndt_11 ;
														int IofCallDriver_DeviceObject ; int IofCallDriver_Irp ;
														IofCallDriver_DeviceObject = FloppyPnp_disketteExtension__TargetObject;
														IofCallDriver_Irp = FloppyPnp_Irp;
														IofCallDriver_tmp_ndt_10 = __VERIFIER_nondet_int();
														if(IofCallDriver_tmp_ndt_10 >= 0 && IofCallDriver_tmp_ndt_10 <= 0) {
															safety = safety + (s - SKIP1);
															s = SKIP2;
															lowerDriverReturn = IofCallDriver_returnVal2;
															FloppyPnp_ntStatus = TRACER_RV;
															TRACER_RV = nondet();
L186:;
															main_status = TRACER_RV;
															TRACER_RV = nondet();
L187:;
L188:;
															goto L13;
														}
														else if(IofCallDriver_tmp_ndt_10 < 0) {
L189:;
															IofCallDriver_tmp_ndt_11 = __VERIFIER_nondet_int();
															if(IofCallDriver_tmp_ndt_11 >= 1 && IofCallDriver_tmp_ndt_11 <= 1) {
																IofCallDriver_returnVal2 = -1073741823;
																safety = safety + (s - SKIP1);
																s = SKIP2;
																lowerDriverReturn = IofCallDriver_returnVal2;
																TRACER_RV = (IofCallDriver_returnVal2);
																FloppyPnp_ntStatus = TRACER_RV;
																TRACER_RV = nondet();
L190:;
																PagingReferenceCount = PagingReferenceCount - 1;
																retres31 = FloppyPnp_ntStatus;
																TRACER_RV = (retres31);
																main_status = TRACER_RV;
																TRACER_RV = nondet();
L191:;
																goto L188;
															}
															else if(IofCallDriver_tmp_ndt_11 < 1) {
L192:;
																IofCallDriver_returnVal2 = 259;
																safety = safety + (s - SKIP1);
																s = SKIP2;
																lowerDriverReturn = IofCallDriver_returnVal2;
																TRACER_RV = (IofCallDriver_returnVal2);
																FloppyPnp_ntStatus = TRACER_RV;
																TRACER_RV = nondet();
L193:;
																PagingReferenceCount = PagingReferenceCount - 1;
																retres31 = FloppyPnp_ntStatus;
																TRACER_RV = (retres31);
																main_status = TRACER_RV;
																TRACER_RV = nondet();
L194:;
																goto L188;
															}
															else {
																goto L192;
															}
														}
														else {
															goto L189;
														}
}
}
}
													}
													else if(ObReferenceObjectByHandle_tmp_ndt_13 < 0) {
L195:;
														retres8 = -1073741823;
														TRACER_RV = (retres8);
														FlQueueIrpToThread_status = TRACER_RV;
														TRACER_RV = nondet();
{
 int ZwClose_tmp_ndt_15 ;
int retres3 ;
														int ZwClose_Handle ;
														ZwClose_Handle = FlQueueIrpToThread_threadHandle;
L196:;
														;
														TRACER_RV = nondet();
														retres11 = FlQueueIrpToThread_status;
														TRACER_returning = 1;
L197:;
														TRACER_RV = (retres11);
														FloppyPnp_ntStatus = TRACER_RV;
														TRACER_RV = nondet();
														FloppyPnp_CIL___Tmp29 = FloppyPnp_ntStatus;
														goto L181;
}
													}
													else {
														goto L195;
													}
}
												}
												else if(PsCreateSystemThread_tmp_ndt_14 < 0) {
L198:;
													retres9 = -1073741823;
													TRACER_RV = (retres9);
													FlQueueIrpToThread_status = TRACER_RV;
													TRACER_RV = nondet();
													FlQueueIrpToThread_DisketteExtension__ThreadReferenceCount = -1;
													PagingReferenceCount = PagingReferenceCount - 1;
													retres11 = FlQueueIrpToThread_status;
													TRACER_returning = 1;
													goto L197;
												}
												else {
													goto L198;
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
int IofCallDriver_tmp_ndt_10 ;
int IofCallDriver_tmp_ndt_11 ;
											int IofCallDriver_DeviceObject ; int IofCallDriver_Irp ;
											IofCallDriver_DeviceObject = FloppyPnp_disketteExtension__TargetObject;
											IofCallDriver_Irp = FloppyPnp_Irp;
											IofCallDriver_tmp_ndt_10 = __VERIFIER_nondet_int();
											if(IofCallDriver_tmp_ndt_10 >= 0 && IofCallDriver_tmp_ndt_10 <= 0) {
												IofCallDriver_returnVal2 = 0;
												safety = safety + (s - SKIP1);
												s = SKIP2;
												lowerDriverReturn = IofCallDriver_returnVal2;
												TRACER_RV = (IofCallDriver_returnVal2);
												FloppyPnp_ntStatus = TRACER_RV;
												TRACER_RV = nondet();
												retres31 = FloppyPnp_ntStatus;
												TRACER_returning = 1;
												goto L175;
											}
											else if(IofCallDriver_tmp_ndt_10 < 0) {
L199:;
												IofCallDriver_tmp_ndt_11 = __VERIFIER_nondet_int();
												if(IofCallDriver_tmp_ndt_11 >= 1 && IofCallDriver_tmp_ndt_11 <= 1) {
													IofCallDriver_returnVal2 = -1073741823;
													safety = safety + (s - SKIP1);
													s = SKIP2;
													lowerDriverReturn = IofCallDriver_returnVal2;
													TRACER_RV = (IofCallDriver_returnVal2);
													FloppyPnp_ntStatus = TRACER_RV;
													TRACER_RV = nondet();
													retres31 = FloppyPnp_ntStatus;
													TRACER_returning = 1;
													goto L177;
												}
												else if(IofCallDriver_tmp_ndt_11 < 1) {
L200:;
													IofCallDriver_returnVal2 = 259;
													safety = safety + (s - SKIP1);
													s = SKIP2;
													lowerDriverReturn = IofCallDriver_returnVal2;
													TRACER_RV = (IofCallDriver_returnVal2);
													FloppyPnp_ntStatus = TRACER_RV;
													TRACER_RV = nondet();
													retres31 = FloppyPnp_ntStatus;
													TRACER_returning = 1;
													goto L179;
												}
												else {
													goto L200;
												}
											}
											else {
												goto L199;
											}
}
										}
										else if(FloppyPnp_disketteExtension__IsStarted < 0) {
L201:;
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
												TRACER_returning = 1;
												TRACER_RV = (retres11);
												FloppyPnp_ntStatus = TRACER_RV;
												TRACER_RV = nondet();
												FloppyPnp_CIL___Tmp29 = FloppyPnp_ntStatus;
L202:;
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
												goto L155;
}
											}
											else if(FlQueueIrpToThread_DisketteExtension__PoweringDown < 1) {
L203:;
												FlQueueIrpToThread_DisketteExtension__ThreadReferenceCount = FlQueueIrpToThread_DisketteExtension__ThreadReferenceCount + 1;
												if(FlQueueIrpToThread_DisketteExtension__ThreadReferenceCount >= 0 && FlQueueIrpToThread_DisketteExtension__ThreadReferenceCount <= 0) {
{
 int PsCreateSystemThread_tmp_ndt_14 ;
int retres9 ;
													int PsCreateSystemThread_ThreadHandle ; int PsCreateSystemThread_DesiredAccess ; int PsCreateSystemThread_ObjectAttributes ; int PsCreateSystemThread_ProcessHandle ; int PsCreateSystemThread_ClientId ; int PsCreateSystemThread_StartRoutine ; int PsCreateSystemThread_StartContext ;
													PsCreateSystemThread_ThreadHandle = FlQueueIrpToThread_threadHandle;
													PsCreateSystemThread_DesiredAccess = 0;
													PsCreateSystemThread_ObjectAttributes = FlQueueIrpToThread_ObjAttributes;
													PsCreateSystemThread_ProcessHandle = 0;
													PsCreateSystemThread_ClientId = 0;
													PsCreateSystemThread_StartRoutine = FloppyThread;
													PsCreateSystemThread_StartContext = FlQueueIrpToThread_DisketteExtension;
													PsCreateSystemThread_tmp_ndt_14 = __VERIFIER_nondet_int();
													if(PsCreateSystemThread_tmp_ndt_14 >= 0 && PsCreateSystemThread_tmp_ndt_14 <= 0) {
														retres9 = 0;
														TRACER_RV = (retres9);
														FlQueueIrpToThread_status = TRACER_RV;
														TRACER_RV = nondet();
{
 int ObReferenceObjectByHandle_tmp_ndt_13 ;
int retres8 ;
														int ObReferenceObjectByHandle_Handle ; int ObReferenceObjectByHandle_DesiredAccess ; int ObReferenceObjectByHandle_ObjectType ; int ObReferenceObjectByHandle_AccessMode ; int ObReferenceObjectByHandle_Object ; int ObReferenceObjectByHandle_HandleInformation ;
														ObReferenceObjectByHandle_Handle = FlQueueIrpToThread_threadHandle;
														ObReferenceObjectByHandle_DesiredAccess = 1048576;
														ObReferenceObjectByHandle_ObjectType = 0;
														ObReferenceObjectByHandle_AccessMode = KernelMode;
														ObReferenceObjectByHandle_Object = FlQueueIrpToThread_DisketteExtension__FloppyThread;
														ObReferenceObjectByHandle_HandleInformation = 0;
														ObReferenceObjectByHandle_tmp_ndt_13 = __VERIFIER_nondet_int();
														if(ObReferenceObjectByHandle_tmp_ndt_13 >= 0 && ObReferenceObjectByHandle_tmp_ndt_13 <= 0) {
															retres8 = 0;
															TRACER_RV = (retres8);
															FlQueueIrpToThread_status = TRACER_RV;
															TRACER_RV = nondet();
{
 int ZwClose_tmp_ndt_15 ;
int retres3 ;
															int ZwClose_Handle ;
															ZwClose_Handle = FlQueueIrpToThread_threadHandle;
L204:;
															;
															TRACER_RV = nondet();
L205:;
															safety = safety + (pended - 0);
															pended = 1;
															retres11 = 259;
															TRACER_RV = (retres11);
															FloppyPnp_ntStatus = TRACER_RV;
															TRACER_RV = nondet();
															FloppyPnp_CIL___Tmp29 = FloppyPnp_ntStatus;
{
 int KeWaitForSingleObject_tmp_ndt_12 ;
int retres7 ;
															int KeWaitForSingleObject_Object ; int KeWaitForSingleObject_WaitReason ; int KeWaitForSingleObject_WaitMode ; int KeWaitForSingleObject_Alertable ; int KeWaitForSingleObject_Timeout ;
															KeWaitForSingleObject_Object = FloppyPnp_disketteExtension__FloppyThread;
															KeWaitForSingleObject_WaitReason = Executive;
															KeWaitForSingleObject_WaitMode = KernelMode;
															KeWaitForSingleObject_Alertable = 0;
															KeWaitForSingleObject_Timeout = 0;
L206:;
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
int IofCallDriver_tmp_ndt_10 ;
int IofCallDriver_tmp_ndt_11 ;
															int IofCallDriver_DeviceObject ; int IofCallDriver_Irp ;
															IofCallDriver_DeviceObject = FloppyPnp_disketteExtension__TargetObject;
															IofCallDriver_Irp = FloppyPnp_Irp;
															IofCallDriver_tmp_ndt_10 = __VERIFIER_nondet_int();
															if(IofCallDriver_tmp_ndt_10 >= 0 && IofCallDriver_tmp_ndt_10 <= 0) {
																safety = safety + (s - SKIP1);
																s = SKIP2;
																lowerDriverReturn = IofCallDriver_returnVal2;
																FloppyPnp_ntStatus = TRACER_RV;
																TRACER_RV = nondet();
																goto L186;
															}
															else if(IofCallDriver_tmp_ndt_10 < 0) {
L207:;
																IofCallDriver_tmp_ndt_11 = __VERIFIER_nondet_int();
																if(IofCallDriver_tmp_ndt_11 >= 1 && IofCallDriver_tmp_ndt_11 <= 1) {
																	IofCallDriver_returnVal2 = -1073741823;
																	safety = safety + (s - SKIP1);
																	s = SKIP2;
																	lowerDriverReturn = IofCallDriver_returnVal2;
																	TRACER_RV = (IofCallDriver_returnVal2);
																	FloppyPnp_ntStatus = TRACER_RV;
																	TRACER_RV = nondet();
																	goto L190;
																}
																else if(IofCallDriver_tmp_ndt_11 < 1) {
L208:;
																	IofCallDriver_returnVal2 = 259;
																	safety = safety + (s - SKIP1);
																	s = SKIP2;
																	lowerDriverReturn = IofCallDriver_returnVal2;
																	TRACER_RV = (IofCallDriver_returnVal2);
																	FloppyPnp_ntStatus = TRACER_RV;
																	TRACER_RV = nondet();
																	goto L193;
																}
																else {
																	goto L208;
																}
															}
															else {
																goto L207;
															}
}
}
}
														}
														else if(ObReferenceObjectByHandle_tmp_ndt_13 < 0) {
L209:;
															retres8 = -1073741823;
															TRACER_RV = (retres8);
															FlQueueIrpToThread_status = TRACER_RV;
															TRACER_RV = nondet();
{
 int ZwClose_tmp_ndt_15 ;
int retres3 ;
															int ZwClose_Handle ;
															ZwClose_Handle = FlQueueIrpToThread_threadHandle;
L210:;
															;
															TRACER_RV = nondet();
															retres11 = FlQueueIrpToThread_status;
															TRACER_returning = 1;
L211:;
															TRACER_RV = (retres11);
															FloppyPnp_ntStatus = TRACER_RV;
															TRACER_RV = nondet();
															FloppyPnp_CIL___Tmp29 = FloppyPnp_ntStatus;
															goto L202;
}
														}
														else {
															goto L209;
														}
}
													}
													else if(PsCreateSystemThread_tmp_ndt_14 < 0) {
L212:;
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
														goto L212;
													}
}
												}
												else if(FlQueueIrpToThread_DisketteExtension__ThreadReferenceCount < 0) {
													goto L205;
												}
												else {
													goto L205;
												}
											}
											else {
												goto L203;
											}
}
										}
										else {
											goto L201;
										}
									}
									else if(FloppyPnp_irpSp__MinorFunction < 1) {
										goto L163;
									}
									else {
L213:;
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
int IofCallDriver_tmp_ndt_10 ;
int IofCallDriver_tmp_ndt_11 ;
												int IofCallDriver_DeviceObject ; int IofCallDriver_Irp ;
												IofCallDriver_DeviceObject = FloppyPnp_disketteExtension__TargetObject;
												IofCallDriver_Irp = FloppyPnp_Irp;
												IofCallDriver_tmp_ndt_10 = __VERIFIER_nondet_int();
												if(IofCallDriver_tmp_ndt_10 >= 0 && IofCallDriver_tmp_ndt_10 <= 0) {
													IofCallDriver_returnVal2 = 0;
													safety = safety + (s - SKIP1);
													s = SKIP2;
													lowerDriverReturn = IofCallDriver_returnVal2;
													TRACER_RV = (IofCallDriver_returnVal2);
													FloppyPnp_ntStatus = TRACER_RV;
													TRACER_RV = nondet();
													goto L164;
												}
												else if(IofCallDriver_tmp_ndt_10 < 0) {
L214:;
													IofCallDriver_tmp_ndt_11 = __VERIFIER_nondet_int();
													if(IofCallDriver_tmp_ndt_11 >= 1 && IofCallDriver_tmp_ndt_11 <= 1) {
														IofCallDriver_returnVal2 = -1073741823;
														safety = safety + (s - SKIP1);
														s = SKIP2;
														lowerDriverReturn = IofCallDriver_returnVal2;
														TRACER_RV = (IofCallDriver_returnVal2);
														FloppyPnp_ntStatus = TRACER_RV;
														TRACER_RV = nondet();
														goto L168;
													}
													else if(IofCallDriver_tmp_ndt_11 < 1) {
L215:;
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
														goto L215;
													}
												}
												else {
													goto L214;
												}
}
											}
											else if(FloppyPnp_disketteExtension__IsStarted < 0) {
L216:;
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
int IofCallDriver_tmp_ndt_10 ;
int IofCallDriver_tmp_ndt_11 ;
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
												IofCallDriver_tmp_ndt_10 = __VERIFIER_nondet_int();
												if(IofCallDriver_tmp_ndt_10 >= 0 && IofCallDriver_tmp_ndt_10 <= 0) {
													IofCallDriver_returnVal2 = 0;
													s = NP;
													lowerDriverReturn = IofCallDriver_returnVal2;
													TRACER_RV = (IofCallDriver_returnVal2);
													FloppyPnp_ntStatus = TRACER_RV;
													TRACER_RV = nondet();
L217:;
{
													int IofCompleteRequest_Irp ; int IofCompleteRequest_PriorityBoost ;
													IofCompleteRequest_Irp = FloppyPnp_Irp;
													IofCompleteRequest_PriorityBoost = 0;
													safety = safety + (s - NP);
													s = DC;
													;
													TRACER_RV = nondet();
													goto L151;
}
												}
												else if(IofCallDriver_tmp_ndt_10 < 0) {
L218:;
													IofCallDriver_tmp_ndt_11 = __VERIFIER_nondet_int();
													if(IofCallDriver_tmp_ndt_11 >= 1 && IofCallDriver_tmp_ndt_11 <= 1) {
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
														goto L155;
}
													}
													else if(IofCallDriver_tmp_ndt_11 < 1) {
L219:;
														IofCallDriver_returnVal2 = 259;
														s = MPR3;
														lowerDriverReturn = IofCallDriver_returnVal2;
														TRACER_RV = (IofCallDriver_returnVal2);
														FloppyPnp_ntStatus = TRACER_RV;
														TRACER_RV = nondet();
														FloppyPnp_CIL___Tmp30 = FloppyPnp_ntStatus;
{
 int KeWaitForSingleObject_tmp_ndt_12 ;
int retres7 ;
														int KeWaitForSingleObject_Object ; int KeWaitForSingleObject_WaitReason ; int KeWaitForSingleObject_WaitMode ; int KeWaitForSingleObject_Alertable ; int KeWaitForSingleObject_Timeout ;
														KeWaitForSingleObject_Object = FloppyPnp_doneEvent;
														KeWaitForSingleObject_WaitReason = Executive;
														KeWaitForSingleObject_WaitMode = KernelMode;
														KeWaitForSingleObject_Alertable = 0;
														KeWaitForSingleObject_Timeout = 0;
														s = NP;
														setEventCalled = 0;
L220:;
														;
														TRACER_RV = nondet();
														FloppyPnp_ntStatus = myStatus;
														goto L217;
}
													}
													else {
														goto L219;
													}
												}
												else {
													goto L218;
												}
}
}
}
}
											}
											else {
												goto L216;
											}
										}
										else if(FloppyPnp_irpSp__MinorFunction < 3) {
L221:;
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
int IofCallDriver_tmp_ndt_10 ;
int IofCallDriver_tmp_ndt_11 ;
												int IofCallDriver_DeviceObject ; int IofCallDriver_Irp ;
												IofCallDriver_DeviceObject = FloppyPnp_disketteExtension__TargetObject;
												IofCallDriver_Irp = FloppyPnp_Irp;
												IofCallDriver_tmp_ndt_10 = __VERIFIER_nondet_int();
												if(IofCallDriver_tmp_ndt_10 >= 0 && IofCallDriver_tmp_ndt_10 <= 0) {
													IofCallDriver_returnVal2 = 0;
													safety = safety + (s - SKIP1);
													s = SKIP2;
													lowerDriverReturn = IofCallDriver_returnVal2;
													TRACER_RV = (IofCallDriver_returnVal2);
													FloppyPnp_ntStatus = TRACER_RV;
													TRACER_RV = nondet();
L222:;
{
 int IoSetDeviceInterfaceState_tmp_ndt_9 ;
int retres4 ;
													int IoSetDeviceInterfaceState_SymbolicLinkName ; int IoSetDeviceInterfaceState_Enable ;
													IoSetDeviceInterfaceState_SymbolicLinkName = FloppyPnp_disketteExtension__InterfaceString;
													IoSetDeviceInterfaceState_Enable = 0;
L223:;
													;
													TRACER_RV = nondet();
L224:;
L225:;
{
 int IoDeleteSymbolicLink_tmp_ndt_6 ;
int retres3 ;
													int IoDeleteSymbolicLink_SymbolicLinkName ;
													IoDeleteSymbolicLink_SymbolicLinkName = FloppyPnp_disketteExtension__ArcName;
L226:;
													;
													TRACER_RV = nondet();
L227:;
													goto L164;
}
}
												}
												else if(IofCallDriver_tmp_ndt_10 < 0) {
L228:;
													IofCallDriver_tmp_ndt_11 = __VERIFIER_nondet_int();
													if(IofCallDriver_tmp_ndt_11 >= 1 && IofCallDriver_tmp_ndt_11 <= 1) {
														IofCallDriver_returnVal2 = -1073741823;
														safety = safety + (s - SKIP1);
														s = SKIP2;
														lowerDriverReturn = IofCallDriver_returnVal2;
														TRACER_RV = (IofCallDriver_returnVal2);
														FloppyPnp_ntStatus = TRACER_RV;
														TRACER_RV = nondet();
L229:;
{
 int IoSetDeviceInterfaceState_tmp_ndt_9 ;
int retres4 ;
														int IoSetDeviceInterfaceState_SymbolicLinkName ; int IoSetDeviceInterfaceState_Enable ;
														IoSetDeviceInterfaceState_SymbolicLinkName = FloppyPnp_disketteExtension__InterfaceString;
														IoSetDeviceInterfaceState_Enable = 0;
L230:;
														;
														TRACER_RV = nondet();
L231:;
L232:;
{
 int IoDeleteSymbolicLink_tmp_ndt_6 ;
int retres3 ;
														int IoDeleteSymbolicLink_SymbolicLinkName ;
														IoDeleteSymbolicLink_SymbolicLinkName = FloppyPnp_disketteExtension__ArcName;
L233:;
														;
														TRACER_RV = nondet();
L234:;
														goto L168;
}
}
													}
													else if(IofCallDriver_tmp_ndt_11 < 1) {
L235:;
														IofCallDriver_returnVal2 = 259;
														safety = safety + (s - SKIP1);
														s = SKIP2;
														lowerDriverReturn = IofCallDriver_returnVal2;
														TRACER_RV = (IofCallDriver_returnVal2);
														FloppyPnp_ntStatus = TRACER_RV;
														TRACER_RV = nondet();
L236:;
{
 int IoSetDeviceInterfaceState_tmp_ndt_9 ;
int retres4 ;
														int IoSetDeviceInterfaceState_SymbolicLinkName ; int IoSetDeviceInterfaceState_Enable ;
														IoSetDeviceInterfaceState_SymbolicLinkName = FloppyPnp_disketteExtension__InterfaceString;
														IoSetDeviceInterfaceState_Enable = 0;
L237:;
														;
														TRACER_RV = nondet();
L238:;
L239:;
{
 int IoDeleteSymbolicLink_tmp_ndt_6 ;
int retres3 ;
														int IoDeleteSymbolicLink_SymbolicLinkName ;
														IoDeleteSymbolicLink_SymbolicLinkName = FloppyPnp_disketteExtension__ArcName;
L240:;
														;
														TRACER_RV = nondet();
L241:;
														goto L172;
}
}
													}
													else {
														goto L235;
													}
												}
												else {
													goto L228;
												}
}
											}
											else if(FloppyPnp_irpSp__MinorFunction < 2) {
												goto L163;
											}
											else {
												goto L163;
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
int IofCallDriver_tmp_ndt_10 ;
int IofCallDriver_tmp_ndt_11 ;
												int IofCallDriver_DeviceObject ; int IofCallDriver_Irp ;
												IofCallDriver_DeviceObject = FloppyPnp_disketteExtension__TargetObject;
												IofCallDriver_Irp = FloppyPnp_Irp;
												IofCallDriver_tmp_ndt_10 = __VERIFIER_nondet_int();
												if(IofCallDriver_tmp_ndt_10 >= 0 && IofCallDriver_tmp_ndt_10 <= 0) {
													IofCallDriver_returnVal2 = 0;
													safety = safety + (s - SKIP1);
													s = SKIP2;
													lowerDriverReturn = IofCallDriver_returnVal2;
													TRACER_RV = (IofCallDriver_returnVal2);
													FloppyPnp_ntStatus = TRACER_RV;
													TRACER_RV = nondet();
													goto L164;
												}
												else if(IofCallDriver_tmp_ndt_10 < 0) {
L242:;
													IofCallDriver_tmp_ndt_11 = __VERIFIER_nondet_int();
													if(IofCallDriver_tmp_ndt_11 >= 1 && IofCallDriver_tmp_ndt_11 <= 1) {
														IofCallDriver_returnVal2 = -1073741823;
														safety = safety + (s - SKIP1);
														s = SKIP2;
														lowerDriverReturn = IofCallDriver_returnVal2;
														TRACER_RV = (IofCallDriver_returnVal2);
														FloppyPnp_ntStatus = TRACER_RV;
														TRACER_RV = nondet();
														goto L168;
													}
													else if(IofCallDriver_tmp_ndt_11 < 1) {
L243:;
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
														goto L243;
													}
												}
												else {
													goto L242;
												}
}
											}
											else if(FloppyPnp_irpSp__MinorFunction < 4) {
												goto L221;
											}
											else {
												goto L221;
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
int IofCallDriver_tmp_ndt_10 ;
int IofCallDriver_tmp_ndt_11 ;
											int IofCallDriver_DeviceObject ; int IofCallDriver_Irp ;
											IofCallDriver_DeviceObject = FloppyPnp_disketteExtension__TargetObject;
											IofCallDriver_Irp = FloppyPnp_Irp;
											IofCallDriver_tmp_ndt_10 = __VERIFIER_nondet_int();
											if(IofCallDriver_tmp_ndt_10 >= 0 && IofCallDriver_tmp_ndt_10 <= 0) {
												IofCallDriver_returnVal2 = 0;
												safety = safety + (s - SKIP1);
												s = SKIP2;
												lowerDriverReturn = IofCallDriver_returnVal2;
												TRACER_RV = (IofCallDriver_returnVal2);
												FloppyPnp_ntStatus = TRACER_RV;
												TRACER_RV = nondet();
												goto L164;
											}
											else if(IofCallDriver_tmp_ndt_10 < 0) {
L244:;
												IofCallDriver_tmp_ndt_11 = __VERIFIER_nondet_int();
												if(IofCallDriver_tmp_ndt_11 >= 1 && IofCallDriver_tmp_ndt_11 <= 1) {
													IofCallDriver_returnVal2 = -1073741823;
													safety = safety + (s - SKIP1);
													s = SKIP2;
													lowerDriverReturn = IofCallDriver_returnVal2;
													TRACER_RV = (IofCallDriver_returnVal2);
													FloppyPnp_ntStatus = TRACER_RV;
													TRACER_RV = nondet();
													goto L168;
												}
												else if(IofCallDriver_tmp_ndt_11 < 1) {
L245:;
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
													goto L245;
												}
											}
											else {
												goto L244;
											}
}
										}
										else if(FloppyPnp_disketteExtension__IsStarted < 0) {
L246:;
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
int IofCallDriver_tmp_ndt_10 ;
int IofCallDriver_tmp_ndt_11 ;
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
											IofCallDriver_tmp_ndt_10 = __VERIFIER_nondet_int();
											if(IofCallDriver_tmp_ndt_10 >= 0 && IofCallDriver_tmp_ndt_10 <= 0) {
												IofCallDriver_returnVal2 = 0;
												s = NP;
												lowerDriverReturn = IofCallDriver_returnVal2;
												TRACER_RV = (IofCallDriver_returnVal2);
												FloppyPnp_ntStatus = TRACER_RV;
												TRACER_RV = nondet();
L247:;
{
												int IofCompleteRequest_Irp ; int IofCompleteRequest_PriorityBoost ;
												IofCompleteRequest_Irp = FloppyPnp_Irp;
												IofCompleteRequest_PriorityBoost = 0;
												safety = safety + (s - NP);
												s = DC;
												;
												TRACER_RV = nondet();
												goto L151;
}
											}
											else if(IofCallDriver_tmp_ndt_10 < 0) {
L248:;
												IofCallDriver_tmp_ndt_11 = __VERIFIER_nondet_int();
												if(IofCallDriver_tmp_ndt_11 >= 1 && IofCallDriver_tmp_ndt_11 <= 1) {
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
													goto L155;
}
												}
												else if(IofCallDriver_tmp_ndt_11 < 1) {
L249:;
													IofCallDriver_returnVal2 = 259;
													s = MPR3;
													lowerDriverReturn = IofCallDriver_returnVal2;
													TRACER_RV = (IofCallDriver_returnVal2);
													FloppyPnp_ntStatus = TRACER_RV;
													TRACER_RV = nondet();
													FloppyPnp_CIL___Tmp30 = FloppyPnp_ntStatus;
{
 int KeWaitForSingleObject_tmp_ndt_12 ;
int retres7 ;
													int KeWaitForSingleObject_Object ; int KeWaitForSingleObject_WaitReason ; int KeWaitForSingleObject_WaitMode ; int KeWaitForSingleObject_Alertable ; int KeWaitForSingleObject_Timeout ;
													KeWaitForSingleObject_Object = FloppyPnp_doneEvent;
													KeWaitForSingleObject_WaitReason = Executive;
													KeWaitForSingleObject_WaitMode = KernelMode;
													KeWaitForSingleObject_Alertable = 0;
													KeWaitForSingleObject_Timeout = 0;
													s = NP;
													setEventCalled = 0;
L250:;
													;
													TRACER_RV = nondet();
													FloppyPnp_ntStatus = myStatus;
													goto L247;
}
												}
												else {
													goto L249;
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
											goto L246;
										}
									}
									else if(FloppyPnp_irpSp__MinorFunction < 6) {
										goto L213;
									}
									else {
										goto L213;
									}
								}
							}
						}
}
					}
					else if(main_tmp_ndt_4 < 3) {
L251:;
						TRACER_returning = 1;
						goto L4;
					}
					else {
						goto L251;
					}
				}
				else {
					goto L136;
				}
			}
			else {
				goto L7;
			}
		}
		else {
			goto L5;
		}
}
	}
	else if(main_irp_choice < 0) {
L252:;
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
		if(main_tmp_ndt_1 >= 0 && main_tmp_ndt_1 <= 0) {
			goto L1;
		}
		else if(main_tmp_ndt_1 < 0) {
L253:;
			main_tmp_ndt_2 = __VERIFIER_nondet_int();
			if(main_tmp_ndt_2 >= 1 && main_tmp_ndt_2 <= 1) {
				goto L6;
			}
			else if(main_tmp_ndt_2 < 1) {
L254:;
				main_tmp_ndt_3 = __VERIFIER_nondet_int();
				if(main_tmp_ndt_3 >= 2 && main_tmp_ndt_3 <= 2) {
					goto L8;
				}
				else if(main_tmp_ndt_3 < 2) {
L255:;
					main_tmp_ndt_4 = __VERIFIER_nondet_int();
					if(main_tmp_ndt_4 >= 3 && main_tmp_ndt_4 <= 3) {
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
L256:;
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
							goto L138;
}
						}
						else if(FloppyPnp_disketteExtension__IsRemoved < 0) {
							goto L256;
						}
						else {
							if(FloppyPnp_irpSp__MinorFunction >= 0 && FloppyPnp_irpSp__MinorFunction <= 0) {
{
 int FloppyStartDevice_DeviceObject__DeviceExtension ;
int FloppyStartDevice_Irp__Tail__Overlay__CurrentStackLocation ;
int FloppyStartDevice_Irp__IoStatus__Status ;
int FloppyStartDevice_disketteExtension__TargetObject ;
int FloppyStartDevice_disketteExtension__MaxTransferSize ;
int FloppyStartDevice_disketteExtension__DeviceUnit ;
int FloppyStartDevice_disketteExtension__DriveOnValue ;
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
int FloppyStartDevice_CIL___Tmp46 ;
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
int IofCallDriver_tmp_ndt_10 ;
int IofCallDriver_tmp_ndt_11 ;
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
								IofCallDriver_tmp_ndt_10 = __VERIFIER_nondet_int();
								if(IofCallDriver_tmp_ndt_10 >= 0 && IofCallDriver_tmp_ndt_10 <= 0) {
									IofCallDriver_returnVal2 = 0;
									s = NP;
									lowerDriverReturn = IofCallDriver_returnVal2;
									TRACER_RV = (IofCallDriver_returnVal2);
									FloppyStartDevice_ntStatus = TRACER_RV;
									TRACER_RV = nondet();
									FloppyStartDevice_CIL___Tmp42 = FloppyStartDevice_ntStatus;
L257:;
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
int IoBuildDeviceIoControlRequest_tmp_ndt_5 ;
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
									IoBuildDeviceIoControlRequest_tmp_ndt_5 = __VERIFIER_nondet_int();
									if(IoBuildDeviceIoControlRequest_tmp_ndt_5 >= 0 && IoBuildDeviceIoControlRequest_tmp_ndt_5 <= 0) {
										retres12 = IoBuildDeviceIoControlRequest_malloc;
L258:;
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
											goto L141;
}
										}
										else if(FlFdcDeviceIo_irp < 0) {
L259:;
{
 int IofCallDriver_returnVal2 ;
int IofCallDriver_compRetStatus1 ;
int IofCallDriver_lcontext ;
int IofCallDriver_CIL___Tmp7 ;
int IofCallDriver_tmp_ndt_10 ;
int IofCallDriver_tmp_ndt_11 ;
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
											IofCallDriver_tmp_ndt_10 = __VERIFIER_nondet_int();
											if(IofCallDriver_tmp_ndt_10 >= 0 && IofCallDriver_tmp_ndt_10 <= 0) {
												IofCallDriver_returnVal2 = 0;
												s = NP;
												lowerDriverReturn = IofCallDriver_returnVal2;
												TRACER_RV = (IofCallDriver_returnVal2);
												FlFdcDeviceIo_ntStatus = TRACER_RV;
												TRACER_RV = nondet();
												FlFdcDeviceIo_CIL___Tmp11 = FlFdcDeviceIo_ntStatus;
L260:;
												retres12 = FlFdcDeviceIo_ntStatus;
												TRACER_RV = (retres12);
												FloppyStartDevice_ntStatus = TRACER_RV;
												TRACER_RV = nondet();
												if(FloppyStartDevice_fdcInfo__AcpiBios > 0) {
L261:;
													if(FloppyStartDevice_fdcInfo__AcpiFdiSupported > 0) {
L262:;
{
 int retres3 ;
														int FlAcpiConfigureFloppy_DisketteExtension ; int FlAcpiConfigureFloppy_FdcInfo ;
														FlAcpiConfigureFloppy_DisketteExtension = FloppyStartDevice_disketteExtension;
														FlAcpiConfigureFloppy_FdcInfo = FloppyStartDevice_fdcInfo;
														retres3 = 0;
														TRACER_RV = (retres3);
														FloppyStartDevice_ntStatus = TRACER_RV;
														TRACER_RV = nondet();
L263:;
L264:;
L265:;
L266:;
{
 int IoRegisterDeviceInterface_tmp_ndt_8 ;
int retres6 ;
														int IoRegisterDeviceInterface_PhysicalDeviceObject ; int IoRegisterDeviceInterface_InterfaceClassGuid ; int IoRegisterDeviceInterface_ReferenceString ; int IoRegisterDeviceInterface_SymbolicLinkName ;
														IoRegisterDeviceInterface_PhysicalDeviceObject = FloppyStartDevice_disketteExtension__UnderlyingPDO;
														IoRegisterDeviceInterface_InterfaceClassGuid = MOUNTDEV_MOUNTED_DEVICE_GUID;
														IoRegisterDeviceInterface_ReferenceString = 0;
														IoRegisterDeviceInterface_SymbolicLinkName = FloppyStartDevice_disketteExtension__InterfaceString;
														IoRegisterDeviceInterface_tmp_ndt_8 = __VERIFIER_nondet_int();
														if(IoRegisterDeviceInterface_tmp_ndt_8 >= 0 && IoRegisterDeviceInterface_tmp_ndt_8 <= 0) {
															retres6 = 0;
															TRACER_RV = (retres6);
															FloppyStartDevice_pnpStatus = TRACER_RV;
															TRACER_RV = nondet();
{
 int IoSetDeviceInterfaceState_tmp_ndt_9 ;
int retres4 ;
															int IoSetDeviceInterfaceState_SymbolicLinkName ; int IoSetDeviceInterfaceState_Enable ;
															IoSetDeviceInterfaceState_SymbolicLinkName = FloppyStartDevice_disketteExtension__InterfaceString;
															IoSetDeviceInterfaceState_Enable = 1;
L267:;
															FloppyStartDevice_pnpStatus = TRACER_RV;
															TRACER_RV = nondet();
L268:;
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
L269:;
															PagingReferenceCount = PagingReferenceCount - 1;
															retres31 = FloppyPnp_ntStatus;
															TRACER_RV = (retres31);
															main_status = TRACER_RV;
															TRACER_RV = nondet();
															goto L152;
}
}
														}
														else if(IoRegisterDeviceInterface_tmp_ndt_8 < 0) {
L270:;
															retres6 = -1073741808;
															TRACER_RV = (retres6);
															FloppyStartDevice_pnpStatus = TRACER_RV;
															TRACER_RV = nondet();
															goto L268;
														}
														else {
															goto L270;
														}
}
}
													}
													else if(FloppyStartDevice_fdcInfo__AcpiFdiSupported < 0) {
														goto L262;
													}
													else {
														goto L263;
													}
												}
												else if(FloppyStartDevice_fdcInfo__AcpiBios < 0) {
													goto L261;
												}
												else {
													goto L264;
												}
											}
											else if(IofCallDriver_tmp_ndt_10 < 0) {
L271:;
												IofCallDriver_tmp_ndt_11 = __VERIFIER_nondet_int();
												if(IofCallDriver_tmp_ndt_11 >= 1 && IofCallDriver_tmp_ndt_11 <= 1) {
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
L272:;
													PagingReferenceCount = PagingReferenceCount - 1;
													retres31 = FloppyPnp_ntStatus;
													TRACER_RV = (retres31);
													main_status = TRACER_RV;
													TRACER_RV = nondet();
													goto L156;
}
												}
												else if(IofCallDriver_tmp_ndt_11 < 1) {
L273:;
													IofCallDriver_returnVal2 = 259;
													s = MPR3;
													lowerDriverReturn = IofCallDriver_returnVal2;
													TRACER_RV = (IofCallDriver_returnVal2);
													FlFdcDeviceIo_ntStatus = TRACER_RV;
													TRACER_RV = nondet();
													FlFdcDeviceIo_CIL___Tmp11 = FlFdcDeviceIo_ntStatus;
{
 int KeWaitForSingleObject_tmp_ndt_12 ;
int retres7 ;
													int KeWaitForSingleObject_Object ; int KeWaitForSingleObject_WaitReason ; int KeWaitForSingleObject_WaitMode ; int KeWaitForSingleObject_Alertable ; int KeWaitForSingleObject_Timeout ;
													KeWaitForSingleObject_Object = FlFdcDeviceIo_doneEvent;
													KeWaitForSingleObject_WaitReason = Suspended;
													KeWaitForSingleObject_WaitMode = KernelMode;
													KeWaitForSingleObject_Alertable = 0;
													KeWaitForSingleObject_Timeout = 0;
													s = NP;
													setEventCalled = 0;
L274:;
													;
													TRACER_RV = nondet();
													FlFdcDeviceIo_ntStatus = myStatus;
													goto L260;
}
												}
												else {
													goto L273;
												}
											}
											else {
												goto L271;
											}
}
}
}
}
										}
										else {
											goto L259;
										}
									}
									else if(IoBuildDeviceIoControlRequest_tmp_ndt_5 < 0) {
L275:;
										retres12 = 0;
										goto L258;
									}
									else {
										goto L275;
									}
}
}
								}
								else if(IofCallDriver_tmp_ndt_10 < 0) {
L276:;
									IofCallDriver_tmp_ndt_11 = __VERIFIER_nondet_int();
									if(IofCallDriver_tmp_ndt_11 >= 1 && IofCallDriver_tmp_ndt_11 <= 1) {
										IofCallDriver_returnVal2 = -1073741823;
										s = NP;
										lowerDriverReturn = IofCallDriver_returnVal2;
										FloppyStartDevice_ntStatus = TRACER_RV;
										TRACER_RV = nondet();
										goto L257;
									}
									else if(IofCallDriver_tmp_ndt_11 < 1) {
L277:;
										IofCallDriver_returnVal2 = 259;
										s = MPR3;
										lowerDriverReturn = IofCallDriver_returnVal2;
										TRACER_RV = (IofCallDriver_returnVal2);
										FloppyStartDevice_ntStatus = TRACER_RV;
										TRACER_RV = nondet();
										FloppyStartDevice_CIL___Tmp42 = FloppyStartDevice_ntStatus;
{
 int KeWaitForSingleObject_tmp_ndt_12 ;
int retres7 ;
										int KeWaitForSingleObject_Object ; int KeWaitForSingleObject_WaitReason ; int KeWaitForSingleObject_WaitMode ; int KeWaitForSingleObject_Alertable ; int KeWaitForSingleObject_Timeout ;
										KeWaitForSingleObject_Object = FloppyStartDevice_doneEvent;
										KeWaitForSingleObject_WaitReason = Executive;
										KeWaitForSingleObject_WaitMode = KernelMode;
										KeWaitForSingleObject_Alertable = 0;
										KeWaitForSingleObject_Timeout = 0;
										s = NP;
										setEventCalled = 0;
L278:;
										FloppyStartDevice_ntStatus = TRACER_RV;
										TRACER_RV = nondet();
										goto L257;
}
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
}
}
							}
							else if(FloppyPnp_irpSp__MinorFunction < 0) {
L279:;
								safety = safety + (s - NP);
								s = SKIP1;
								FloppyPnp_Irp__CurrentLocation = FloppyPnp_Irp__CurrentLocation + 1;
								FloppyPnp_Irp__Tail__Overlay__CurrentStackLocation = FloppyPnp_Irp__Tail__Overlay__CurrentStackLocation + 1;
{
 int IofCallDriver_returnVal2 ;
int IofCallDriver_compRetStatus1 ;
int IofCallDriver_lcontext ;
int IofCallDriver_CIL___Tmp7 ;
int IofCallDriver_tmp_ndt_10 ;
int IofCallDriver_tmp_ndt_11 ;
								int IofCallDriver_DeviceObject ; int IofCallDriver_Irp ;
								IofCallDriver_DeviceObject = FloppyPnp_disketteExtension__TargetObject;
								IofCallDriver_Irp = FloppyPnp_Irp;
								IofCallDriver_tmp_ndt_10 = __VERIFIER_nondet_int();
								if(IofCallDriver_tmp_ndt_10 >= 0 && IofCallDriver_tmp_ndt_10 <= 0) {
									IofCallDriver_returnVal2 = 0;
									safety = safety + (s - SKIP1);
									s = SKIP2;
									lowerDriverReturn = IofCallDriver_returnVal2;
									TRACER_RV = (IofCallDriver_returnVal2);
									FloppyPnp_ntStatus = TRACER_RV;
									TRACER_RV = nondet();
L280:;
									PagingReferenceCount = PagingReferenceCount - 1;
									retres31 = FloppyPnp_ntStatus;
L281:;
									TRACER_RV = (retres31);
									main_status = TRACER_RV;
									TRACER_RV = nondet();
									goto L166;
								}
								else if(IofCallDriver_tmp_ndt_10 < 0) {
L282:;
									IofCallDriver_tmp_ndt_11 = __VERIFIER_nondet_int();
									if(IofCallDriver_tmp_ndt_11 >= 1 && IofCallDriver_tmp_ndt_11 <= 1) {
										IofCallDriver_returnVal2 = -1073741823;
										safety = safety + (s - SKIP1);
										s = SKIP2;
										lowerDriverReturn = IofCallDriver_returnVal2;
										TRACER_RV = (IofCallDriver_returnVal2);
										FloppyPnp_ntStatus = TRACER_RV;
										TRACER_RV = nondet();
L283:;
										PagingReferenceCount = PagingReferenceCount - 1;
										retres31 = FloppyPnp_ntStatus;
L284:;
										TRACER_RV = (retres31);
										main_status = TRACER_RV;
										TRACER_RV = nondet();
										goto L170;
									}
									else if(IofCallDriver_tmp_ndt_11 < 1) {
L285:;
										IofCallDriver_returnVal2 = 259;
										safety = safety + (s - SKIP1);
										s = SKIP2;
										lowerDriverReturn = IofCallDriver_returnVal2;
										TRACER_RV = (IofCallDriver_returnVal2);
										FloppyPnp_ntStatus = TRACER_RV;
										TRACER_RV = nondet();
L286:;
										PagingReferenceCount = PagingReferenceCount - 1;
										retres31 = FloppyPnp_ntStatus;
L287:;
										TRACER_RV = (retres31);
										main_status = TRACER_RV;
										TRACER_RV = nondet();
										goto L174;
									}
									else {
										goto L285;
									}
								}
								else {
									goto L282;
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
int IofCallDriver_tmp_ndt_10 ;
int IofCallDriver_tmp_ndt_11 ;
										int IofCallDriver_DeviceObject ; int IofCallDriver_Irp ;
										IofCallDriver_DeviceObject = FloppyPnp_disketteExtension__TargetObject;
										IofCallDriver_Irp = FloppyPnp_Irp;
										IofCallDriver_tmp_ndt_10 = __VERIFIER_nondet_int();
										if(IofCallDriver_tmp_ndt_10 >= 0 && IofCallDriver_tmp_ndt_10 <= 0) {
											IofCallDriver_returnVal2 = 0;
											safety = safety + (s - SKIP1);
											s = SKIP2;
											lowerDriverReturn = IofCallDriver_returnVal2;
											TRACER_RV = (IofCallDriver_returnVal2);
											FloppyPnp_ntStatus = TRACER_RV;
											TRACER_RV = nondet();
											retres31 = FloppyPnp_ntStatus;
											TRACER_returning = 1;
L288:;
											goto L281;
										}
										else if(IofCallDriver_tmp_ndt_10 < 0) {
L289:;
											IofCallDriver_tmp_ndt_11 = __VERIFIER_nondet_int();
											if(IofCallDriver_tmp_ndt_11 >= 1 && IofCallDriver_tmp_ndt_11 <= 1) {
												IofCallDriver_returnVal2 = -1073741823;
												safety = safety + (s - SKIP1);
												s = SKIP2;
												lowerDriverReturn = IofCallDriver_returnVal2;
												TRACER_RV = (IofCallDriver_returnVal2);
												FloppyPnp_ntStatus = TRACER_RV;
												TRACER_RV = nondet();
												retres31 = FloppyPnp_ntStatus;
												TRACER_returning = 1;
L290:;
												goto L284;
											}
											else if(IofCallDriver_tmp_ndt_11 < 1) {
L291:;
												IofCallDriver_returnVal2 = 259;
												safety = safety + (s - SKIP1);
												s = SKIP2;
												lowerDriverReturn = IofCallDriver_returnVal2;
												TRACER_RV = (IofCallDriver_returnVal2);
												FloppyPnp_ntStatus = TRACER_RV;
												TRACER_RV = nondet();
												retres31 = FloppyPnp_ntStatus;
												TRACER_returning = 1;
L292:;
												goto L287;
											}
											else {
												goto L291;
											}
										}
										else {
											goto L289;
										}
}
									}
									else if(FloppyPnp_disketteExtension__IsStarted < 0) {
L293:;
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
											TRACER_returning = 1;
											TRACER_RV = (retres11);
											FloppyPnp_ntStatus = TRACER_RV;
											TRACER_RV = nondet();
											FloppyPnp_CIL___Tmp29 = FloppyPnp_ntStatus;
L294:;
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
											goto L272;
}
										}
										else if(FlQueueIrpToThread_DisketteExtension__PoweringDown < 1) {
L295:;
											FlQueueIrpToThread_DisketteExtension__ThreadReferenceCount = FlQueueIrpToThread_DisketteExtension__ThreadReferenceCount + 1;
											if(FlQueueIrpToThread_DisketteExtension__ThreadReferenceCount >= 0 && FlQueueIrpToThread_DisketteExtension__ThreadReferenceCount <= 0) {
{
 int PsCreateSystemThread_tmp_ndt_14 ;
int retres9 ;
												int PsCreateSystemThread_ThreadHandle ; int PsCreateSystemThread_DesiredAccess ; int PsCreateSystemThread_ObjectAttributes ; int PsCreateSystemThread_ProcessHandle ; int PsCreateSystemThread_ClientId ; int PsCreateSystemThread_StartRoutine ; int PsCreateSystemThread_StartContext ;
												PsCreateSystemThread_ThreadHandle = FlQueueIrpToThread_threadHandle;
												PsCreateSystemThread_DesiredAccess = 0;
												PsCreateSystemThread_ObjectAttributes = FlQueueIrpToThread_ObjAttributes;
												PsCreateSystemThread_ProcessHandle = 0;
												PsCreateSystemThread_ClientId = 0;
												PsCreateSystemThread_StartRoutine = FloppyThread;
												PsCreateSystemThread_StartContext = FlQueueIrpToThread_DisketteExtension;
												PsCreateSystemThread_tmp_ndt_14 = __VERIFIER_nondet_int();
												if(PsCreateSystemThread_tmp_ndt_14 >= 0 && PsCreateSystemThread_tmp_ndt_14 <= 0) {
													retres9 = 0;
													TRACER_RV = (retres9);
													FlQueueIrpToThread_status = TRACER_RV;
													TRACER_RV = nondet();
{
 int ObReferenceObjectByHandle_tmp_ndt_13 ;
int retres8 ;
													int ObReferenceObjectByHandle_Handle ; int ObReferenceObjectByHandle_DesiredAccess ; int ObReferenceObjectByHandle_ObjectType ; int ObReferenceObjectByHandle_AccessMode ; int ObReferenceObjectByHandle_Object ; int ObReferenceObjectByHandle_HandleInformation ;
													ObReferenceObjectByHandle_Handle = FlQueueIrpToThread_threadHandle;
													ObReferenceObjectByHandle_DesiredAccess = 1048576;
													ObReferenceObjectByHandle_ObjectType = 0;
													ObReferenceObjectByHandle_AccessMode = KernelMode;
													ObReferenceObjectByHandle_Object = FlQueueIrpToThread_DisketteExtension__FloppyThread;
													ObReferenceObjectByHandle_HandleInformation = 0;
													ObReferenceObjectByHandle_tmp_ndt_13 = __VERIFIER_nondet_int();
													if(ObReferenceObjectByHandle_tmp_ndt_13 >= 0 && ObReferenceObjectByHandle_tmp_ndt_13 <= 0) {
														retres8 = 0;
														TRACER_RV = (retres8);
														FlQueueIrpToThread_status = TRACER_RV;
														TRACER_RV = nondet();
{
 int ZwClose_tmp_ndt_15 ;
int retres3 ;
														int ZwClose_Handle ;
														ZwClose_Handle = FlQueueIrpToThread_threadHandle;
L296:;
														;
														TRACER_RV = nondet();
L297:;
														safety = safety + (pended - 0);
														pended = 1;
														retres11 = 259;
														TRACER_RV = (retres11);
														FloppyPnp_ntStatus = TRACER_RV;
														TRACER_RV = nondet();
														FloppyPnp_CIL___Tmp29 = FloppyPnp_ntStatus;
{
 int KeWaitForSingleObject_tmp_ndt_12 ;
int retres7 ;
														int KeWaitForSingleObject_Object ; int KeWaitForSingleObject_WaitReason ; int KeWaitForSingleObject_WaitMode ; int KeWaitForSingleObject_Alertable ; int KeWaitForSingleObject_Timeout ;
														KeWaitForSingleObject_Object = FloppyPnp_disketteExtension__FloppyThread;
														KeWaitForSingleObject_WaitReason = Executive;
														KeWaitForSingleObject_WaitMode = KernelMode;
														KeWaitForSingleObject_Alertable = 0;
														KeWaitForSingleObject_Timeout = 0;
L298:;
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
int IofCallDriver_tmp_ndt_10 ;
int IofCallDriver_tmp_ndt_11 ;
														int IofCallDriver_DeviceObject ; int IofCallDriver_Irp ;
														IofCallDriver_DeviceObject = FloppyPnp_disketteExtension__TargetObject;
														IofCallDriver_Irp = FloppyPnp_Irp;
														IofCallDriver_tmp_ndt_10 = __VERIFIER_nondet_int();
														if(IofCallDriver_tmp_ndt_10 >= 0 && IofCallDriver_tmp_ndt_10 <= 0) {
															safety = safety + (s - SKIP1);
															s = SKIP2;
															lowerDriverReturn = IofCallDriver_returnVal2;
															FloppyPnp_ntStatus = TRACER_RV;
															TRACER_RV = nondet();
L299:;
															main_status = TRACER_RV;
															TRACER_RV = nondet();
															goto L187;
														}
														else if(IofCallDriver_tmp_ndt_10 < 0) {
L300:;
															IofCallDriver_tmp_ndt_11 = __VERIFIER_nondet_int();
															if(IofCallDriver_tmp_ndt_11 >= 1 && IofCallDriver_tmp_ndt_11 <= 1) {
																IofCallDriver_returnVal2 = -1073741823;
																safety = safety + (s - SKIP1);
																s = SKIP2;
																lowerDriverReturn = IofCallDriver_returnVal2;
																TRACER_RV = (IofCallDriver_returnVal2);
																FloppyPnp_ntStatus = TRACER_RV;
																TRACER_RV = nondet();
L301:;
																PagingReferenceCount = PagingReferenceCount - 1;
																retres31 = FloppyPnp_ntStatus;
																TRACER_RV = (retres31);
																main_status = TRACER_RV;
																TRACER_RV = nondet();
																goto L191;
															}
															else if(IofCallDriver_tmp_ndt_11 < 1) {
L302:;
																IofCallDriver_returnVal2 = 259;
																safety = safety + (s - SKIP1);
																s = SKIP2;
																lowerDriverReturn = IofCallDriver_returnVal2;
																TRACER_RV = (IofCallDriver_returnVal2);
																FloppyPnp_ntStatus = TRACER_RV;
																TRACER_RV = nondet();
L303:;
																PagingReferenceCount = PagingReferenceCount - 1;
																retres31 = FloppyPnp_ntStatus;
																TRACER_RV = (retres31);
																main_status = TRACER_RV;
																TRACER_RV = nondet();
																goto L194;
															}
															else {
																goto L302;
															}
														}
														else {
															goto L300;
														}
}
}
}
													}
													else if(ObReferenceObjectByHandle_tmp_ndt_13 < 0) {
L304:;
														retres8 = -1073741823;
														TRACER_RV = (retres8);
														FlQueueIrpToThread_status = TRACER_RV;
														TRACER_RV = nondet();
{
 int ZwClose_tmp_ndt_15 ;
int retres3 ;
														int ZwClose_Handle ;
														ZwClose_Handle = FlQueueIrpToThread_threadHandle;
L305:;
														;
														TRACER_RV = nondet();
														retres11 = FlQueueIrpToThread_status;
														TRACER_returning = 1;
L306:;
														TRACER_RV = (retres11);
														FloppyPnp_ntStatus = TRACER_RV;
														TRACER_RV = nondet();
														FloppyPnp_CIL___Tmp29 = FloppyPnp_ntStatus;
														goto L294;
}
													}
													else {
														goto L304;
													}
}
												}
												else if(PsCreateSystemThread_tmp_ndt_14 < 0) {
L307:;
													retres9 = -1073741823;
													TRACER_RV = (retres9);
													FlQueueIrpToThread_status = TRACER_RV;
													TRACER_RV = nondet();
													FlQueueIrpToThread_DisketteExtension__ThreadReferenceCount = -1;
													PagingReferenceCount = PagingReferenceCount - 1;
													retres11 = FlQueueIrpToThread_status;
													TRACER_returning = 1;
													goto L306;
												}
												else {
													goto L307;
												}
}
											}
											else if(FlQueueIrpToThread_DisketteExtension__ThreadReferenceCount < 0) {
												goto L297;
											}
											else {
												goto L297;
											}
										}
										else {
											goto L295;
										}
}
									}
									else {
										goto L293;
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
int IofCallDriver_tmp_ndt_10 ;
int IofCallDriver_tmp_ndt_11 ;
											int IofCallDriver_DeviceObject ; int IofCallDriver_Irp ;
											IofCallDriver_DeviceObject = FloppyPnp_disketteExtension__TargetObject;
											IofCallDriver_Irp = FloppyPnp_Irp;
											IofCallDriver_tmp_ndt_10 = __VERIFIER_nondet_int();
											if(IofCallDriver_tmp_ndt_10 >= 0 && IofCallDriver_tmp_ndt_10 <= 0) {
												IofCallDriver_returnVal2 = 0;
												safety = safety + (s - SKIP1);
												s = SKIP2;
												lowerDriverReturn = IofCallDriver_returnVal2;
												TRACER_RV = (IofCallDriver_returnVal2);
												FloppyPnp_ntStatus = TRACER_RV;
												TRACER_RV = nondet();
												retres31 = FloppyPnp_ntStatus;
												TRACER_returning = 1;
												goto L288;
											}
											else if(IofCallDriver_tmp_ndt_10 < 0) {
L308:;
												IofCallDriver_tmp_ndt_11 = __VERIFIER_nondet_int();
												if(IofCallDriver_tmp_ndt_11 >= 1 && IofCallDriver_tmp_ndt_11 <= 1) {
													IofCallDriver_returnVal2 = -1073741823;
													safety = safety + (s - SKIP1);
													s = SKIP2;
													lowerDriverReturn = IofCallDriver_returnVal2;
													TRACER_RV = (IofCallDriver_returnVal2);
													FloppyPnp_ntStatus = TRACER_RV;
													TRACER_RV = nondet();
													retres31 = FloppyPnp_ntStatus;
													TRACER_returning = 1;
													goto L290;
												}
												else if(IofCallDriver_tmp_ndt_11 < 1) {
L309:;
													IofCallDriver_returnVal2 = 259;
													safety = safety + (s - SKIP1);
													s = SKIP2;
													lowerDriverReturn = IofCallDriver_returnVal2;
													TRACER_RV = (IofCallDriver_returnVal2);
													FloppyPnp_ntStatus = TRACER_RV;
													TRACER_RV = nondet();
													retres31 = FloppyPnp_ntStatus;
													TRACER_returning = 1;
													goto L292;
												}
												else {
													goto L309;
												}
											}
											else {
												goto L308;
											}
}
										}
										else if(FloppyPnp_disketteExtension__IsStarted < 0) {
L310:;
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
												TRACER_returning = 1;
												TRACER_RV = (retres11);
												FloppyPnp_ntStatus = TRACER_RV;
												TRACER_RV = nondet();
												FloppyPnp_CIL___Tmp29 = FloppyPnp_ntStatus;
L311:;
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
												goto L272;
}
											}
											else if(FlQueueIrpToThread_DisketteExtension__PoweringDown < 1) {
L312:;
												FlQueueIrpToThread_DisketteExtension__ThreadReferenceCount = FlQueueIrpToThread_DisketteExtension__ThreadReferenceCount + 1;
												if(FlQueueIrpToThread_DisketteExtension__ThreadReferenceCount >= 0 && FlQueueIrpToThread_DisketteExtension__ThreadReferenceCount <= 0) {
{
 int PsCreateSystemThread_tmp_ndt_14 ;
int retres9 ;
													int PsCreateSystemThread_ThreadHandle ; int PsCreateSystemThread_DesiredAccess ; int PsCreateSystemThread_ObjectAttributes ; int PsCreateSystemThread_ProcessHandle ; int PsCreateSystemThread_ClientId ; int PsCreateSystemThread_StartRoutine ; int PsCreateSystemThread_StartContext ;
													PsCreateSystemThread_ThreadHandle = FlQueueIrpToThread_threadHandle;
													PsCreateSystemThread_DesiredAccess = 0;
													PsCreateSystemThread_ObjectAttributes = FlQueueIrpToThread_ObjAttributes;
													PsCreateSystemThread_ProcessHandle = 0;
													PsCreateSystemThread_ClientId = 0;
													PsCreateSystemThread_StartRoutine = FloppyThread;
													PsCreateSystemThread_StartContext = FlQueueIrpToThread_DisketteExtension;
													PsCreateSystemThread_tmp_ndt_14 = __VERIFIER_nondet_int();
													if(PsCreateSystemThread_tmp_ndt_14 >= 0 && PsCreateSystemThread_tmp_ndt_14 <= 0) {
														retres9 = 0;
														TRACER_RV = (retres9);
														FlQueueIrpToThread_status = TRACER_RV;
														TRACER_RV = nondet();
{
 int ObReferenceObjectByHandle_tmp_ndt_13 ;
int retres8 ;
														int ObReferenceObjectByHandle_Handle ; int ObReferenceObjectByHandle_DesiredAccess ; int ObReferenceObjectByHandle_ObjectType ; int ObReferenceObjectByHandle_AccessMode ; int ObReferenceObjectByHandle_Object ; int ObReferenceObjectByHandle_HandleInformation ;
														ObReferenceObjectByHandle_Handle = FlQueueIrpToThread_threadHandle;
														ObReferenceObjectByHandle_DesiredAccess = 1048576;
														ObReferenceObjectByHandle_ObjectType = 0;
														ObReferenceObjectByHandle_AccessMode = KernelMode;
														ObReferenceObjectByHandle_Object = FlQueueIrpToThread_DisketteExtension__FloppyThread;
														ObReferenceObjectByHandle_HandleInformation = 0;
														ObReferenceObjectByHandle_tmp_ndt_13 = __VERIFIER_nondet_int();
														if(ObReferenceObjectByHandle_tmp_ndt_13 >= 0 && ObReferenceObjectByHandle_tmp_ndt_13 <= 0) {
															retres8 = 0;
															TRACER_RV = (retres8);
															FlQueueIrpToThread_status = TRACER_RV;
															TRACER_RV = nondet();
{
 int ZwClose_tmp_ndt_15 ;
int retres3 ;
															int ZwClose_Handle ;
															ZwClose_Handle = FlQueueIrpToThread_threadHandle;
L313:;
															;
															TRACER_RV = nondet();
L314:;
															safety = safety + (pended - 0);
															pended = 1;
															retres11 = 259;
															TRACER_RV = (retres11);
															FloppyPnp_ntStatus = TRACER_RV;
															TRACER_RV = nondet();
															FloppyPnp_CIL___Tmp29 = FloppyPnp_ntStatus;
{
 int KeWaitForSingleObject_tmp_ndt_12 ;
int retres7 ;
															int KeWaitForSingleObject_Object ; int KeWaitForSingleObject_WaitReason ; int KeWaitForSingleObject_WaitMode ; int KeWaitForSingleObject_Alertable ; int KeWaitForSingleObject_Timeout ;
															KeWaitForSingleObject_Object = FloppyPnp_disketteExtension__FloppyThread;
															KeWaitForSingleObject_WaitReason = Executive;
															KeWaitForSingleObject_WaitMode = KernelMode;
															KeWaitForSingleObject_Alertable = 0;
															KeWaitForSingleObject_Timeout = 0;
L315:;
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
int IofCallDriver_tmp_ndt_10 ;
int IofCallDriver_tmp_ndt_11 ;
															int IofCallDriver_DeviceObject ; int IofCallDriver_Irp ;
															IofCallDriver_DeviceObject = FloppyPnp_disketteExtension__TargetObject;
															IofCallDriver_Irp = FloppyPnp_Irp;
															IofCallDriver_tmp_ndt_10 = __VERIFIER_nondet_int();
															if(IofCallDriver_tmp_ndt_10 >= 0 && IofCallDriver_tmp_ndt_10 <= 0) {
																safety = safety + (s - SKIP1);
																s = SKIP2;
																lowerDriverReturn = IofCallDriver_returnVal2;
																FloppyPnp_ntStatus = TRACER_RV;
																TRACER_RV = nondet();
																goto L299;
															}
															else if(IofCallDriver_tmp_ndt_10 < 0) {
L316:;
																IofCallDriver_tmp_ndt_11 = __VERIFIER_nondet_int();
																if(IofCallDriver_tmp_ndt_11 >= 1 && IofCallDriver_tmp_ndt_11 <= 1) {
																	IofCallDriver_returnVal2 = -1073741823;
																	safety = safety + (s - SKIP1);
																	s = SKIP2;
																	lowerDriverReturn = IofCallDriver_returnVal2;
																	TRACER_RV = (IofCallDriver_returnVal2);
																	FloppyPnp_ntStatus = TRACER_RV;
																	TRACER_RV = nondet();
																	goto L301;
																}
																else if(IofCallDriver_tmp_ndt_11 < 1) {
L317:;
																	IofCallDriver_returnVal2 = 259;
																	safety = safety + (s - SKIP1);
																	s = SKIP2;
																	lowerDriverReturn = IofCallDriver_returnVal2;
																	TRACER_RV = (IofCallDriver_returnVal2);
																	FloppyPnp_ntStatus = TRACER_RV;
																	TRACER_RV = nondet();
																	goto L303;
																}
																else {
																	goto L317;
																}
															}
															else {
																goto L316;
															}
}
}
}
														}
														else if(ObReferenceObjectByHandle_tmp_ndt_13 < 0) {
L318:;
															retres8 = -1073741823;
															TRACER_RV = (retres8);
															FlQueueIrpToThread_status = TRACER_RV;
															TRACER_RV = nondet();
{
 int ZwClose_tmp_ndt_15 ;
int retres3 ;
															int ZwClose_Handle ;
															ZwClose_Handle = FlQueueIrpToThread_threadHandle;
L319:;
															;
															TRACER_RV = nondet();
															retres11 = FlQueueIrpToThread_status;
															TRACER_returning = 1;
L320:;
															TRACER_RV = (retres11);
															FloppyPnp_ntStatus = TRACER_RV;
															TRACER_RV = nondet();
															FloppyPnp_CIL___Tmp29 = FloppyPnp_ntStatus;
															goto L311;
}
														}
														else {
															goto L318;
														}
}
													}
													else if(PsCreateSystemThread_tmp_ndt_14 < 0) {
L321:;
														retres9 = -1073741823;
														TRACER_RV = (retres9);
														FlQueueIrpToThread_status = TRACER_RV;
														TRACER_RV = nondet();
														FlQueueIrpToThread_DisketteExtension__ThreadReferenceCount = -1;
														PagingReferenceCount = PagingReferenceCount - 1;
														retres11 = FlQueueIrpToThread_status;
														TRACER_returning = 1;
														goto L320;
													}
													else {
														goto L321;
													}
}
												}
												else if(FlQueueIrpToThread_DisketteExtension__ThreadReferenceCount < 0) {
													goto L314;
												}
												else {
													goto L314;
												}
											}
											else {
												goto L312;
											}
}
										}
										else {
											goto L310;
										}
									}
									else if(FloppyPnp_irpSp__MinorFunction < 1) {
										goto L279;
									}
									else {
L322:;
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
int IofCallDriver_tmp_ndt_10 ;
int IofCallDriver_tmp_ndt_11 ;
												int IofCallDriver_DeviceObject ; int IofCallDriver_Irp ;
												IofCallDriver_DeviceObject = FloppyPnp_disketteExtension__TargetObject;
												IofCallDriver_Irp = FloppyPnp_Irp;
												IofCallDriver_tmp_ndt_10 = __VERIFIER_nondet_int();
												if(IofCallDriver_tmp_ndt_10 >= 0 && IofCallDriver_tmp_ndt_10 <= 0) {
													IofCallDriver_returnVal2 = 0;
													safety = safety + (s - SKIP1);
													s = SKIP2;
													lowerDriverReturn = IofCallDriver_returnVal2;
													TRACER_RV = (IofCallDriver_returnVal2);
													FloppyPnp_ntStatus = TRACER_RV;
													TRACER_RV = nondet();
													goto L280;
												}
												else if(IofCallDriver_tmp_ndt_10 < 0) {
L323:;
													IofCallDriver_tmp_ndt_11 = __VERIFIER_nondet_int();
													if(IofCallDriver_tmp_ndt_11 >= 1 && IofCallDriver_tmp_ndt_11 <= 1) {
														IofCallDriver_returnVal2 = -1073741823;
														safety = safety + (s - SKIP1);
														s = SKIP2;
														lowerDriverReturn = IofCallDriver_returnVal2;
														TRACER_RV = (IofCallDriver_returnVal2);
														FloppyPnp_ntStatus = TRACER_RV;
														TRACER_RV = nondet();
														goto L283;
													}
													else if(IofCallDriver_tmp_ndt_11 < 1) {
L324:;
														IofCallDriver_returnVal2 = 259;
														safety = safety + (s - SKIP1);
														s = SKIP2;
														lowerDriverReturn = IofCallDriver_returnVal2;
														TRACER_RV = (IofCallDriver_returnVal2);
														FloppyPnp_ntStatus = TRACER_RV;
														TRACER_RV = nondet();
														goto L286;
													}
													else {
														goto L324;
													}
												}
												else {
													goto L323;
												}
}
											}
											else if(FloppyPnp_disketteExtension__IsStarted < 0) {
L325:;
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
int IofCallDriver_tmp_ndt_10 ;
int IofCallDriver_tmp_ndt_11 ;
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
												IofCallDriver_tmp_ndt_10 = __VERIFIER_nondet_int();
												if(IofCallDriver_tmp_ndt_10 >= 0 && IofCallDriver_tmp_ndt_10 <= 0) {
													IofCallDriver_returnVal2 = 0;
													s = NP;
													lowerDriverReturn = IofCallDriver_returnVal2;
													TRACER_RV = (IofCallDriver_returnVal2);
													FloppyPnp_ntStatus = TRACER_RV;
													TRACER_RV = nondet();
													FloppyPnp_CIL___Tmp30 = FloppyPnp_ntStatus;
L326:;
{
													int IofCompleteRequest_Irp ; int IofCompleteRequest_PriorityBoost ;
													IofCompleteRequest_Irp = FloppyPnp_Irp;
													IofCompleteRequest_PriorityBoost = 0;
													safety = safety + (s - NP);
													s = DC;
													;
													TRACER_RV = nondet();
													goto L269;
}
												}
												else if(IofCallDriver_tmp_ndt_10 < 0) {
L327:;
													IofCallDriver_tmp_ndt_11 = __VERIFIER_nondet_int();
													if(IofCallDriver_tmp_ndt_11 >= 1 && IofCallDriver_tmp_ndt_11 <= 1) {
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
														goto L272;
}
													}
													else if(IofCallDriver_tmp_ndt_11 < 1) {
L328:;
														IofCallDriver_returnVal2 = 259;
														s = MPR3;
														lowerDriverReturn = IofCallDriver_returnVal2;
														TRACER_RV = (IofCallDriver_returnVal2);
														FloppyPnp_ntStatus = TRACER_RV;
														TRACER_RV = nondet();
														FloppyPnp_CIL___Tmp30 = FloppyPnp_ntStatus;
{
 int KeWaitForSingleObject_tmp_ndt_12 ;
int retres7 ;
														int KeWaitForSingleObject_Object ; int KeWaitForSingleObject_WaitReason ; int KeWaitForSingleObject_WaitMode ; int KeWaitForSingleObject_Alertable ; int KeWaitForSingleObject_Timeout ;
														KeWaitForSingleObject_Object = FloppyPnp_doneEvent;
														KeWaitForSingleObject_WaitReason = Executive;
														KeWaitForSingleObject_WaitMode = KernelMode;
														KeWaitForSingleObject_Alertable = 0;
														KeWaitForSingleObject_Timeout = 0;
														s = NP;
														setEventCalled = 0;
L329:;
														;
														TRACER_RV = nondet();
														FloppyPnp_ntStatus = myStatus;
														goto L326;
}
													}
													else {
														goto L328;
													}
												}
												else {
													goto L327;
												}
}
}
}
}
											}
											else {
												goto L325;
											}
										}
										else if(FloppyPnp_irpSp__MinorFunction < 3) {
L330:;
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
int IofCallDriver_tmp_ndt_10 ;
int IofCallDriver_tmp_ndt_11 ;
												int IofCallDriver_DeviceObject ; int IofCallDriver_Irp ;
												IofCallDriver_DeviceObject = FloppyPnp_disketteExtension__TargetObject;
												IofCallDriver_Irp = FloppyPnp_Irp;
												IofCallDriver_tmp_ndt_10 = __VERIFIER_nondet_int();
												if(IofCallDriver_tmp_ndt_10 >= 0 && IofCallDriver_tmp_ndt_10 <= 0) {
													IofCallDriver_returnVal2 = 0;
													safety = safety + (s - SKIP1);
													s = SKIP2;
													lowerDriverReturn = IofCallDriver_returnVal2;
													TRACER_RV = (IofCallDriver_returnVal2);
													FloppyPnp_ntStatus = TRACER_RV;
													TRACER_RV = nondet();
L331:;
{
 int IoSetDeviceInterfaceState_tmp_ndt_9 ;
int retres4 ;
													int IoSetDeviceInterfaceState_SymbolicLinkName ; int IoSetDeviceInterfaceState_Enable ;
													IoSetDeviceInterfaceState_SymbolicLinkName = FloppyPnp_disketteExtension__InterfaceString;
													IoSetDeviceInterfaceState_Enable = 0;
L332:;
													;
													TRACER_RV = nondet();
L333:;
L334:;
{
 int IoDeleteSymbolicLink_tmp_ndt_6 ;
int retres3 ;
													int IoDeleteSymbolicLink_SymbolicLinkName ;
													IoDeleteSymbolicLink_SymbolicLinkName = FloppyPnp_disketteExtension__ArcName;
L335:;
													;
													TRACER_RV = nondet();
L336:;
													goto L280;
}
}
												}
												else if(IofCallDriver_tmp_ndt_10 < 0) {
L337:;
													IofCallDriver_tmp_ndt_11 = __VERIFIER_nondet_int();
													if(IofCallDriver_tmp_ndt_11 >= 1 && IofCallDriver_tmp_ndt_11 <= 1) {
														IofCallDriver_returnVal2 = -1073741823;
														safety = safety + (s - SKIP1);
														s = SKIP2;
														lowerDriverReturn = IofCallDriver_returnVal2;
														TRACER_RV = (IofCallDriver_returnVal2);
														FloppyPnp_ntStatus = TRACER_RV;
														TRACER_RV = nondet();
L338:;
{
 int IoSetDeviceInterfaceState_tmp_ndt_9 ;
int retres4 ;
														int IoSetDeviceInterfaceState_SymbolicLinkName ; int IoSetDeviceInterfaceState_Enable ;
														IoSetDeviceInterfaceState_SymbolicLinkName = FloppyPnp_disketteExtension__InterfaceString;
														IoSetDeviceInterfaceState_Enable = 0;
L339:;
														;
														TRACER_RV = nondet();
L340:;
L341:;
{
 int IoDeleteSymbolicLink_tmp_ndt_6 ;
int retres3 ;
														int IoDeleteSymbolicLink_SymbolicLinkName ;
														IoDeleteSymbolicLink_SymbolicLinkName = FloppyPnp_disketteExtension__ArcName;
L342:;
														;
														TRACER_RV = nondet();
L343:;
														goto L283;
}
}
													}
													else if(IofCallDriver_tmp_ndt_11 < 1) {
L344:;
														IofCallDriver_returnVal2 = 259;
														safety = safety + (s - SKIP1);
														s = SKIP2;
														lowerDriverReturn = IofCallDriver_returnVal2;
														TRACER_RV = (IofCallDriver_returnVal2);
														FloppyPnp_ntStatus = TRACER_RV;
														TRACER_RV = nondet();
L345:;
{
 int IoSetDeviceInterfaceState_tmp_ndt_9 ;
int retres4 ;
														int IoSetDeviceInterfaceState_SymbolicLinkName ; int IoSetDeviceInterfaceState_Enable ;
														IoSetDeviceInterfaceState_SymbolicLinkName = FloppyPnp_disketteExtension__InterfaceString;
														IoSetDeviceInterfaceState_Enable = 0;
L346:;
														;
														TRACER_RV = nondet();
L347:;
L348:;
{
 int IoDeleteSymbolicLink_tmp_ndt_6 ;
int retres3 ;
														int IoDeleteSymbolicLink_SymbolicLinkName ;
														IoDeleteSymbolicLink_SymbolicLinkName = FloppyPnp_disketteExtension__ArcName;
L349:;
														;
														TRACER_RV = nondet();
L350:;
														goto L286;
}
}
													}
													else {
														goto L344;
													}
												}
												else {
													goto L337;
												}
}
											}
											else if(FloppyPnp_irpSp__MinorFunction < 2) {
												goto L279;
											}
											else {
												goto L279;
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
int IofCallDriver_tmp_ndt_10 ;
int IofCallDriver_tmp_ndt_11 ;
												int IofCallDriver_DeviceObject ; int IofCallDriver_Irp ;
												IofCallDriver_DeviceObject = FloppyPnp_disketteExtension__TargetObject;
												IofCallDriver_Irp = FloppyPnp_Irp;
												IofCallDriver_tmp_ndt_10 = __VERIFIER_nondet_int();
												if(IofCallDriver_tmp_ndt_10 >= 0 && IofCallDriver_tmp_ndt_10 <= 0) {
													IofCallDriver_returnVal2 = 0;
													safety = safety + (s - SKIP1);
													s = SKIP2;
													lowerDriverReturn = IofCallDriver_returnVal2;
													TRACER_RV = (IofCallDriver_returnVal2);
													FloppyPnp_ntStatus = TRACER_RV;
													TRACER_RV = nondet();
													goto L280;
												}
												else if(IofCallDriver_tmp_ndt_10 < 0) {
L351:;
													IofCallDriver_tmp_ndt_11 = __VERIFIER_nondet_int();
													if(IofCallDriver_tmp_ndt_11 >= 1 && IofCallDriver_tmp_ndt_11 <= 1) {
														IofCallDriver_returnVal2 = -1073741823;
														safety = safety + (s - SKIP1);
														s = SKIP2;
														lowerDriverReturn = IofCallDriver_returnVal2;
														TRACER_RV = (IofCallDriver_returnVal2);
														FloppyPnp_ntStatus = TRACER_RV;
														TRACER_RV = nondet();
														goto L283;
													}
													else if(IofCallDriver_tmp_ndt_11 < 1) {
L352:;
														IofCallDriver_returnVal2 = 259;
														safety = safety + (s - SKIP1);
														s = SKIP2;
														lowerDriverReturn = IofCallDriver_returnVal2;
														TRACER_RV = (IofCallDriver_returnVal2);
														FloppyPnp_ntStatus = TRACER_RV;
														TRACER_RV = nondet();
														goto L286;
													}
													else {
														goto L352;
													}
												}
												else {
													goto L351;
												}
}
											}
											else if(FloppyPnp_irpSp__MinorFunction < 4) {
												goto L330;
											}
											else {
												goto L330;
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
int IofCallDriver_tmp_ndt_10 ;
int IofCallDriver_tmp_ndt_11 ;
											int IofCallDriver_DeviceObject ; int IofCallDriver_Irp ;
											IofCallDriver_DeviceObject = FloppyPnp_disketteExtension__TargetObject;
											IofCallDriver_Irp = FloppyPnp_Irp;
											IofCallDriver_tmp_ndt_10 = __VERIFIER_nondet_int();
											if(IofCallDriver_tmp_ndt_10 >= 0 && IofCallDriver_tmp_ndt_10 <= 0) {
												IofCallDriver_returnVal2 = 0;
												safety = safety + (s - SKIP1);
												s = SKIP2;
												lowerDriverReturn = IofCallDriver_returnVal2;
												TRACER_RV = (IofCallDriver_returnVal2);
												FloppyPnp_ntStatus = TRACER_RV;
												TRACER_RV = nondet();
												goto L280;
											}
											else if(IofCallDriver_tmp_ndt_10 < 0) {
L353:;
												IofCallDriver_tmp_ndt_11 = __VERIFIER_nondet_int();
												if(IofCallDriver_tmp_ndt_11 >= 1 && IofCallDriver_tmp_ndt_11 <= 1) {
													IofCallDriver_returnVal2 = -1073741823;
													safety = safety + (s - SKIP1);
													s = SKIP2;
													lowerDriverReturn = IofCallDriver_returnVal2;
													TRACER_RV = (IofCallDriver_returnVal2);
													FloppyPnp_ntStatus = TRACER_RV;
													TRACER_RV = nondet();
													goto L283;
												}
												else if(IofCallDriver_tmp_ndt_11 < 1) {
L354:;
													IofCallDriver_returnVal2 = 259;
													safety = safety + (s - SKIP1);
													s = SKIP2;
													lowerDriverReturn = IofCallDriver_returnVal2;
													TRACER_RV = (IofCallDriver_returnVal2);
													FloppyPnp_ntStatus = TRACER_RV;
													TRACER_RV = nondet();
													goto L286;
												}
												else {
													goto L354;
												}
											}
											else {
												goto L353;
											}
}
										}
										else if(FloppyPnp_disketteExtension__IsStarted < 0) {
L355:;
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
int IofCallDriver_tmp_ndt_10 ;
int IofCallDriver_tmp_ndt_11 ;
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
											IofCallDriver_tmp_ndt_10 = __VERIFIER_nondet_int();
											if(IofCallDriver_tmp_ndt_10 >= 0 && IofCallDriver_tmp_ndt_10 <= 0) {
												IofCallDriver_returnVal2 = 0;
												s = NP;
												lowerDriverReturn = IofCallDriver_returnVal2;
												TRACER_RV = (IofCallDriver_returnVal2);
												FloppyPnp_ntStatus = TRACER_RV;
												TRACER_RV = nondet();
												FloppyPnp_CIL___Tmp30 = FloppyPnp_ntStatus;
L356:;
{
												int IofCompleteRequest_Irp ; int IofCompleteRequest_PriorityBoost ;
												IofCompleteRequest_Irp = FloppyPnp_Irp;
												IofCompleteRequest_PriorityBoost = 0;
												safety = safety + (s - NP);
												s = DC;
												;
												TRACER_RV = nondet();
												goto L269;
}
											}
											else if(IofCallDriver_tmp_ndt_10 < 0) {
L357:;
												IofCallDriver_tmp_ndt_11 = __VERIFIER_nondet_int();
												if(IofCallDriver_tmp_ndt_11 >= 1 && IofCallDriver_tmp_ndt_11 <= 1) {
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
													goto L272;
}
												}
												else if(IofCallDriver_tmp_ndt_11 < 1) {
L358:;
													IofCallDriver_returnVal2 = 259;
													s = MPR3;
													lowerDriverReturn = IofCallDriver_returnVal2;
													TRACER_RV = (IofCallDriver_returnVal2);
													FloppyPnp_ntStatus = TRACER_RV;
													TRACER_RV = nondet();
													FloppyPnp_CIL___Tmp30 = FloppyPnp_ntStatus;
{
 int KeWaitForSingleObject_tmp_ndt_12 ;
int retres7 ;
													int KeWaitForSingleObject_Object ; int KeWaitForSingleObject_WaitReason ; int KeWaitForSingleObject_WaitMode ; int KeWaitForSingleObject_Alertable ; int KeWaitForSingleObject_Timeout ;
													KeWaitForSingleObject_Object = FloppyPnp_doneEvent;
													KeWaitForSingleObject_WaitReason = Executive;
													KeWaitForSingleObject_WaitMode = KernelMode;
													KeWaitForSingleObject_Alertable = 0;
													KeWaitForSingleObject_Timeout = 0;
													s = NP;
													setEventCalled = 0;
L359:;
													;
													TRACER_RV = nondet();
													FloppyPnp_ntStatus = myStatus;
													goto L356;
}
												}
												else {
													goto L358;
												}
											}
											else {
												goto L357;
											}
}
}
}
}
										}
										else {
											goto L355;
										}
									}
									else if(FloppyPnp_irpSp__MinorFunction < 6) {
										goto L322;
									}
									else {
										goto L322;
									}
								}
							}
						}
}
					}
					else if(main_tmp_ndt_4 < 3) {
						goto L251;
					}
					else {
						goto L251;
					}
				}
				else {
					goto L255;
				}
			}
			else {
				goto L254;
			}
		}
		else {
			goto L253;
		}
}
	}
	else {
		goto L252;
	}
}
}
}

