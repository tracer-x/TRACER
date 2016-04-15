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
int routine  ;
int myStatus  ;
int pirp  ;
int Executive  ;
int Suspended  ;
int KernelMode  ;
int DeviceUsageTypePaging  ;
int safety  ;
int KeWaitForSingleObject(int KeWaitForSingleObject_Object , int KeWaitForSingleObject_WaitReason , int KeWaitForSingleObject_WaitMode , int KeWaitForSingleObject_Alertable , int KeWaitForSingleObject_Timeout ) ;
int KeSetEvent(int KeSetEvent_Event , int KeSetEvent_Increment , int KeSetEvent_Wait ) ;
int CdAudioForwardIrpSynchronous(int CdAudioForwardIrpSynchronous_DeviceObject , int CdAudioForwardIrpSynchronous_Irp ) ;
int ZwClose(int ZwClose_Handle ) ;
void IofCompleteRequest(int IofCompleteRequest_Irp , int IofCompleteRequest_PriorityBoost ) ;
int CdAudioSendToNextDriver(int CdAudioSendToNextDriver_DeviceObject , int CdAudioSendToNextDriver_Irp ) ;
int CdAudio535DeviceControl(int CdAudio535DeviceControl_DeviceObject , int CdAudio535DeviceControl_Irp ) ;
int CdAudio435DeviceControl(int CdAudio435DeviceControl_DeviceObject , int CdAudio435DeviceControl_Irp ) ;
int CdAudioAtapiDeviceControl(int CdAudioAtapiDeviceControl_DeviceObject , int CdAudioAtapiDeviceControl_Irp ) ;
int CdAudioHPCdrDeviceControl(int CdAudioHPCdrDeviceControl_DeviceObject , int CdAudioHPCdrDeviceControl_Irp ) ;
int IofCallDriver(int IofCallDriver_DeviceObject , int IofCallDriver_Irp ) ;
int AG_SetStatusAndReturn(int AG_SetStatusAndReturn_status , int AG_SetStatusAndReturn_Irp , int AG_SetStatusAndReturn_deviceExtension__TargetDeviceObject ) ;
int PoCallDriver(int PoCallDriver_DeviceObject , int PoCallDriver_Irp ) ;
extern int _SLICE() ;
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
int main_TRACER_returning ;
{
	;
	TRACER_RV = nondet();
	main_TRACER_returning = 0;
	safety = 0;
	routine = 0;
	DeviceUsageTypePaging = 1;
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
			if(main_tmp_ndt_1 >= 2 && main_tmp_ndt_1 <= 2) {
{
 int CdAudioDeviceControl_deviceExtension__Active ;
int CdAudioDeviceControl_status ;
				int CdAudioDeviceControl_DeviceObject ; int CdAudioDeviceControl_Irp ;
				CdAudioDeviceControl_DeviceObject = main_devobj;
				CdAudioDeviceControl_Irp = pirp;
				if(CdAudioDeviceControl_deviceExtension__Active >= 2 && CdAudioDeviceControl_deviceExtension__Active <= 2) {
{
 int CdAudio535DeviceControl_Irp__Tail__Overlay__CurrentStackLocation ;
int CdAudio535DeviceControl_DeviceObject__DeviceExtension ;
int CdAudio535DeviceControl_deviceExtension__TargetDeviceObject ;
int CdAudio535DeviceControl_Irp__AssociatedIrp__SystemBuffer ;
int CdAudio535DeviceControl_srb__Cdb ;
int CdAudio535DeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode ;
int CdAudio535DeviceControl_Irp__IoStatus__Information ;
int CdAudio535DeviceControl_currentIrpStack__Parameters__DeviceIoControl__OutputBufferLength ;
int CdAudio535DeviceControl_currentIrpStack__Parameters__DeviceIoControl__InputBufferLength ;
int CdAudio535DeviceControl_srb__CdbLength ;
int CdAudio535DeviceControl_cdb__CDB10__OperationCode ;
int CdAudio535DeviceControl_srb__TimeOutValue ;
int CdAudio535DeviceControl_sizeof__READ_CAPACITY_DATA ;
int CdAudio535DeviceControl_lastSession__LogicalBlockAddress ;
int CdAudio535DeviceControl_cdaudioDataOut__FirstTrack ;
int CdAudio535DeviceControl_cdaudioDataOut__LastTrack ;
int CdAudio535DeviceControl_sizeof__CDROM_TOC ;
int CdAudio535DeviceControl_sizeof__SUB_Q_CURRENT_POSITION ;
int CdAudio535DeviceControl_userPtr__Format ;
int CdAudio535DeviceControl_sizeof__CDROM_PLAY_AUDIO_MSF ;
int CdAudio535DeviceControl_sizeof__CDROM_SEEK_AUDIO_MSF ;
int CdAudio535DeviceControl_currentIrpStack ;
int CdAudio535DeviceControl_deviceExtension ;
int CdAudio535DeviceControl_cdaudioDataOut ;
int CdAudio535DeviceControl_srb ;
int CdAudio535DeviceControl_lastSession ;
int CdAudio535DeviceControl_cdb ;
int CdAudio535DeviceControl_status ;
int CdAudio535DeviceControl_i ;
int CdAudio535DeviceControl_bytesTransfered ;
int CdAudio535DeviceControl_Toc ;
int CdAudio535DeviceControl_tmp ;
int CdAudio535DeviceControl_tmp___0 ;
int CdAudio535DeviceControl_tmp___1 ;
int CdAudio535DeviceControl_tmp___2 ;
int CdAudio535DeviceControl_tmp___3 ;
int CdAudio535DeviceControl_tmp___4 ;
int CdAudio535DeviceControl_tracksToReturn ;
int CdAudio535DeviceControl_tracksOnCd ;
int CdAudio535DeviceControl_tracksInBuffer ;
int CdAudio535DeviceControl_userPtr ;
int CdAudio535DeviceControl_SubQPtr ;
int CdAudio535DeviceControl_tmp___5 ;
int CdAudio535DeviceControl_tmp___6 ;
int CdAudio535DeviceControl_inputBuffer ;
int CdAudio535DeviceControl_inputBuffer___0 ;
int CdAudio535DeviceControl_tmp___7 ;
int CdAudio535DeviceControl_tmp___8 ;
int CdAudio535DeviceControl_CIL___Tmp58 ;
int CdAudio535DeviceControl_CIL___Tmp59 ;
int CdAudio535DeviceControl_CIL___Tmp60 ;
int CdAudio535DeviceControl_CIL___Tmp61 ;
int CdAudio535DeviceControl_CIL___Tmp62 ;
int CdAudio535DeviceControl_CIL___Tmp63 ;
int CdAudio535DeviceControl_CIL___Tmp64 ;
int CdAudio535DeviceControl_CIL___Tmp65 ;
int CdAudio535DeviceControl_CIL___Tmp66 ;
int CdAudio535DeviceControl_CIL___Tmp67 ;
int CdAudio535DeviceControl_CIL___Tmp68 ;
int CdAudio535DeviceControl_CIL___Tmp69 ;
int CdAudio535DeviceControl_CIL___Tmp70 ;
int CdAudio535DeviceControl_CIL___Tmp71 ;
int CdAudio535DeviceControl_CIL___Tmp72 ;
int CdAudio535DeviceControl_CIL___Tmp73 ;
int CdAudio535DeviceControl_CIL___Tmp74 ;
int CdAudio535DeviceControl_CIL___Tmp75 ;
int CdAudio535DeviceControl_CIL___Tmp76 ;
int CdAudio535DeviceControl_CIL___Tmp77 ;
int CdAudio535DeviceControl_CIL___Tmp78 ;
int CdAudio535DeviceControl_CIL___Tmp79 ;
int CdAudio535DeviceControl_CIL___Tmp80 ;
int CdAudio535DeviceControl_CIL___Tmp81 ;
int CdAudio535DeviceControl_CIL___Tmp82 ;
int CdAudio535DeviceControl_CIL___Tmp83 ;
int CdAudio535DeviceControl_CIL___Tmp84 ;
int CdAudio535DeviceControl_CIL___Tmp85 ;
int CdAudio535DeviceControl_CIL___Tmp86 ;
int CdAudio535DeviceControl_CIL___Tmp87 ;
int CdAudio535DeviceControl_CIL___Tmp88 ;
int CdAudio535DeviceControl_CIL___Tmp89 ;
int CdAudio535DeviceControl_CIL___Tmp90 ;
int CdAudio535DeviceControl_CIL___Tmp91 ;
int CdAudio535DeviceControl_CIL___Tmp92 ;
int CdAudio535DeviceControl_CIL___Tmp93 ;
int CdAudio535DeviceControl_CIL___Tmp94 ;
int CdAudio535DeviceControl_CIL___Tmp95 ;
int CdAudio535DeviceControl_CIL___Tmp96 ;
int CdAudio535DeviceControl_CIL___Tmp97 ;
int CdAudio535DeviceControl_CIL___Tmp98 ;
int CdAudio535DeviceControl_CIL___Tmp99 ;
int CdAudio535DeviceControl_CIL___Tmp100 ;
int CdAudio535DeviceControl_CIL___Tmp101 ;
int CdAudio535DeviceControl_CIL___Tmp102 ;
int CdAudio535DeviceControl_CIL___Tmp103 ;
int CdAudio535DeviceControl_CIL___Tmp104 ;
int CdAudio535DeviceControl_CIL___Tmp105 ;
int CdAudio535DeviceControl_CIL___Tmp107 ;
int CdAudio535DeviceControl_CIL___Tmp108 ;
int CdAudio535DeviceControl_CIL___Tmp109 ;
int CdAudio535DeviceControl_retres109 ;
int CdAudio535DeviceControl_TRACER_returning ;
					int CdAudio535DeviceControl_DeviceObject ; int CdAudio535DeviceControl_Irp ;
					CdAudio535DeviceControl_DeviceObject = CdAudioDeviceControl_DeviceObject;
					CdAudio535DeviceControl_Irp = CdAudioDeviceControl_Irp;
					CdAudio535DeviceControl_TRACER_returning = 0;
					CdAudio535DeviceControl_currentIrpStack = CdAudio535DeviceControl_Irp__Tail__Overlay__CurrentStackLocation;
					CdAudio535DeviceControl_deviceExtension = CdAudio535DeviceControl_DeviceObject__DeviceExtension;
					CdAudio535DeviceControl_cdaudioDataOut = CdAudio535DeviceControl_Irp__AssociatedIrp__SystemBuffer;
					CdAudio535DeviceControl_cdb = CdAudio535DeviceControl_srb__Cdb;
					CdAudio535DeviceControl_CIL___Tmp58 = 56;
					CdAudio535DeviceControl_CIL___Tmp59 = 16384;
					CdAudio535DeviceControl_CIL___Tmp60 = 131072;
					CdAudio535DeviceControl_CIL___Tmp61 = 147456;
					CdAudio535DeviceControl_CIL___Tmp62 = 147512;
					if(CdAudio535DeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode >= CdAudio535DeviceControl_CIL___Tmp62 && CdAudio535DeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode <= CdAudio535DeviceControl_CIL___Tmp62) {
{
 int CdAudioIsPlayActive_deviceExtension__PlayActive ;
int CdAudioIsPlayActive_ioStatus__Status ;
int CdAudioIsPlayActive_currentBuffer__Header__AudioStatus ;
int CdAudioIsPlayActive_irp_CdAudioIsPlayActive ;
int CdAudioIsPlayActive_event ;
int CdAudioIsPlayActive_status ;
int CdAudioIsPlayActive_currentBuffer ;
int CdAudioIsPlayActive_returnValue ;
int CdAudioIsPlayActive_CIL___Tmp10 ;
int CdAudioIsPlayActive_retres11 ;
						int CdAudioIsPlayActive_DeviceObject ;
						CdAudioIsPlayActive_DeviceObject = CdAudio535DeviceControl_DeviceObject;
						if(CdAudioIsPlayActive_deviceExtension__PlayActive >= 0 && CdAudioIsPlayActive_deviceExtension__PlayActive <= 0) {
							CdAudioIsPlayActive_retres11 = 0;
L1:;
							TRACER_RV = (CdAudioIsPlayActive_retres11);
							CdAudio535DeviceControl_tmp = TRACER_RV;
							TRACER_RV = nondet();
							if(CdAudio535DeviceControl_currentIrpStack__Parameters__DeviceIoControl__OutputBufferLength > 0) {
L2:;
								CdAudio535DeviceControl_status = -1073741789;
								CdAudio535DeviceControl_Irp__IoStatus__Information = 0;
L3:;
{
 int AG_SetStatusAndReturn_CIL___Tmp4 ;
								int AG_SetStatusAndReturn_status ; int AG_SetStatusAndReturn_Irp ; int AG_SetStatusAndReturn_deviceExtension__TargetDeviceObject ;
								AG_SetStatusAndReturn_status = CdAudio535DeviceControl_status;
								AG_SetStatusAndReturn_Irp = CdAudio535DeviceControl_Irp;
								AG_SetStatusAndReturn_deviceExtension__TargetDeviceObject = CdAudio535DeviceControl_deviceExtension__TargetDeviceObject;
{
								int IofCompleteRequest_Irp ; int IofCompleteRequest_PriorityBoost ;
								IofCompleteRequest_Irp = AG_SetStatusAndReturn_Irp;
								IofCompleteRequest_PriorityBoost = 0;
								safety = safety + (s - NP);
								s = DC;
								;
								TRACER_RV = nondet();
								TRACER_RV = (AG_SetStatusAndReturn_status);
								CdAudio535DeviceControl_tmp___8 = TRACER_RV;
								TRACER_RV = nondet();
								CdAudio535DeviceControl_retres109 = CdAudio535DeviceControl_tmp___8;
								TRACER_RV = (CdAudio535DeviceControl_retres109);
								CdAudioDeviceControl_status = TRACER_RV;
								TRACER_RV = nondet();
L4:;
								TRACER_RV = (CdAudioDeviceControl_status);
								main_status = TRACER_RV;
								TRACER_RV = nondet();
L5:;
L6:;
								safety = safety + (s - DC);
L7:;
L8:;
                                _SLICE(safety);
								/* END OF PATH at func_main@p51#1 */
}
}
							}
							else if(CdAudio535DeviceControl_currentIrpStack__Parameters__DeviceIoControl__OutputBufferLength < 0) {
								goto L2;
							}
							else {
								if(CdAudio535DeviceControl_lastSession >= 0 && CdAudio535DeviceControl_lastSession <= 0) {
									CdAudio535DeviceControl_status = -1073741670;
									CdAudio535DeviceControl_Irp__IoStatus__Information = 0;
{
 int AG_SetStatusAndReturn_CIL___Tmp4 ;
									int AG_SetStatusAndReturn_status ; int AG_SetStatusAndReturn_Irp ; int AG_SetStatusAndReturn_deviceExtension__TargetDeviceObject ;
									AG_SetStatusAndReturn_status = CdAudio535DeviceControl_status;
									AG_SetStatusAndReturn_Irp = CdAudio535DeviceControl_Irp;
									AG_SetStatusAndReturn_deviceExtension__TargetDeviceObject = CdAudio535DeviceControl_deviceExtension__TargetDeviceObject;
{
									int IofCompleteRequest_Irp ; int IofCompleteRequest_PriorityBoost ;
									IofCompleteRequest_Irp = AG_SetStatusAndReturn_Irp;
									IofCompleteRequest_PriorityBoost = 0;
									safety = safety + (s - NP);
									s = DC;
									;
									TRACER_RV = nondet();
									TRACER_RV = (AG_SetStatusAndReturn_status);
									CdAudio535DeviceControl_tmp___0 = TRACER_RV;
									TRACER_RV = nondet();
									CdAudio535DeviceControl_retres109 = CdAudio535DeviceControl_tmp___0;
									CdAudio535DeviceControl_TRACER_returning = 1;
									TRACER_RV = (CdAudio535DeviceControl_retres109);
									CdAudioDeviceControl_status = TRACER_RV;
									TRACER_RV = nondet();
L9:;
L10:;
									TRACER_RV = (CdAudioDeviceControl_status);
									main_status = TRACER_RV;
									TRACER_RV = nondet();
L11:;
									goto L6;
}
}
								}
								else if(CdAudio535DeviceControl_lastSession < 0) {
{
 int SendSrbSynchronous_ioStatus__Status ;
int SendSrbSynchronous_ioctl ;
int SendSrbSynchronous_event ;
int SendSrbSynchronous_irp ;
int SendSrbSynchronous_status ;
int SendSrbSynchronous_CIL___Tmp10 ;
int SendSrbSynchronous_CIL___Tmp11 ;
int SendSrbSynchronous_CIL___Tmp12 ;
int SendSrbSynchronous_CIL___Tmp13 ;
int SendSrbSynchronous_CIL___Tmp14 ;
int SendSrbSynchronous_CIL___Tmp15 ;
int SendSrbSynchronous_CIL___Tmp16 ;
int SendSrbSynchronous_CIL___Tmp17 ;
int SendSrbSynchronous_CIL___Tmp18 ;
int SendSrbSynchronous_retres19 ;
									int SendSrbSynchronous_Extension ; int SendSrbSynchronous_Srb ; int SendSrbSynchronous_Buffer ; int SendSrbSynchronous_BufferLength ;
									SendSrbSynchronous_Extension = CdAudio535DeviceControl_deviceExtension;
									SendSrbSynchronous_Srb = CdAudio535DeviceControl_srb;
									SendSrbSynchronous_Buffer = CdAudio535DeviceControl_lastSession;
									SendSrbSynchronous_BufferLength = CdAudio535DeviceControl_sizeof__READ_CAPACITY_DATA;
									SendSrbSynchronous_irp = 0;
									SendSrbSynchronous_retres19 = -1073741670;
									TRACER_RV = (SendSrbSynchronous_retres19);
									CdAudio535DeviceControl_status = TRACER_RV;
									TRACER_RV = nondet();
L12:;
{
 int AG_SetStatusAndReturn_CIL___Tmp4 ;
									int AG_SetStatusAndReturn_status ; int AG_SetStatusAndReturn_Irp ; int AG_SetStatusAndReturn_deviceExtension__TargetDeviceObject ;
									AG_SetStatusAndReturn_status = CdAudio535DeviceControl_status;
									AG_SetStatusAndReturn_Irp = CdAudio535DeviceControl_Irp;
									AG_SetStatusAndReturn_deviceExtension__TargetDeviceObject = CdAudio535DeviceControl_deviceExtension__TargetDeviceObject;
{
									int IofCompleteRequest_Irp ; int IofCompleteRequest_PriorityBoost ;
									IofCompleteRequest_Irp = AG_SetStatusAndReturn_Irp;
									IofCompleteRequest_PriorityBoost = 0;
									safety = safety + (s - NP);
									s = DC;
									;
									TRACER_RV = nondet();
									TRACER_RV = (AG_SetStatusAndReturn_status);
									CdAudio535DeviceControl_tmp___1 = TRACER_RV;
									TRACER_RV = nondet();
									CdAudio535DeviceControl_retres109 = CdAudio535DeviceControl_tmp___1;
									CdAudio535DeviceControl_TRACER_returning = 1;
									TRACER_RV = (CdAudio535DeviceControl_retres109);
									CdAudioDeviceControl_status = TRACER_RV;
									TRACER_RV = nondet();
									goto L9;
}
}
}
								}
								else {
{
 int SendSrbSynchronous_ioStatus__Status ;
int SendSrbSynchronous_ioctl ;
int SendSrbSynchronous_event ;
int SendSrbSynchronous_irp ;
int SendSrbSynchronous_status ;
int SendSrbSynchronous_CIL___Tmp10 ;
int SendSrbSynchronous_CIL___Tmp11 ;
int SendSrbSynchronous_CIL___Tmp12 ;
int SendSrbSynchronous_CIL___Tmp13 ;
int SendSrbSynchronous_CIL___Tmp14 ;
int SendSrbSynchronous_CIL___Tmp15 ;
int SendSrbSynchronous_CIL___Tmp16 ;
int SendSrbSynchronous_CIL___Tmp17 ;
int SendSrbSynchronous_CIL___Tmp18 ;
int SendSrbSynchronous_retres19 ;
									int SendSrbSynchronous_Extension ; int SendSrbSynchronous_Srb ; int SendSrbSynchronous_Buffer ; int SendSrbSynchronous_BufferLength ;
									SendSrbSynchronous_Extension = CdAudio535DeviceControl_deviceExtension;
									SendSrbSynchronous_Srb = CdAudio535DeviceControl_srb;
									SendSrbSynchronous_Buffer = CdAudio535DeviceControl_lastSession;
									SendSrbSynchronous_BufferLength = CdAudio535DeviceControl_sizeof__READ_CAPACITY_DATA;
									SendSrbSynchronous_irp = 0;
									SendSrbSynchronous_retres19 = -1073741670;
									TRACER_RV = (SendSrbSynchronous_retres19);
									CdAudio535DeviceControl_status = TRACER_RV;
									TRACER_RV = nondet();
									goto L12;
}
								}
							}
						}
						else if(CdAudioIsPlayActive_deviceExtension__PlayActive < 0) {
L13:;
							if(CdAudioIsPlayActive_currentBuffer >= 0 && CdAudioIsPlayActive_currentBuffer <= 0) {
								CdAudioIsPlayActive_retres11 = 0;
								goto L1;
							}
							else if(CdAudioIsPlayActive_currentBuffer < 0) {
L14:;
								if(CdAudioIsPlayActive_irp_CdAudioIsPlayActive >= 0 && CdAudioIsPlayActive_irp_CdAudioIsPlayActive <= 0) {
									CdAudioIsPlayActive_retres11 = 0;
									goto L1;
								}
								else if(CdAudioIsPlayActive_irp_CdAudioIsPlayActive < 0) {
L15:;
									CdAudioIsPlayActive_CIL___Tmp10 = CdAudioIsPlayActive_status;
									if(CdAudioIsPlayActive_CIL___Tmp10 >= 259 && CdAudioIsPlayActive_CIL___Tmp10 <= 259) {
{
 int KeWaitForSingleObject_tmp_ndt_7 ;
int KeWaitForSingleObject_retres7 ;
										int KeWaitForSingleObject_Object ; int KeWaitForSingleObject_WaitReason ; int KeWaitForSingleObject_WaitMode ; int KeWaitForSingleObject_Alertable ; int KeWaitForSingleObject_Timeout ;
										KeWaitForSingleObject_Object = CdAudioIsPlayActive_event;
										KeWaitForSingleObject_WaitReason = Suspended;
										KeWaitForSingleObject_WaitMode = KernelMode;
										KeWaitForSingleObject_Alertable = 0;
										KeWaitForSingleObject_Timeout = 0;
L16:;
										;
										TRACER_RV = nondet();
										CdAudioIsPlayActive_status = CdAudioIsPlayActive_ioStatus__Status;
L17:;
										if(CdAudioIsPlayActive_status < 0) {
											CdAudioIsPlayActive_retres11 = 0;
											goto L1;
										}
										else {
											if(CdAudioIsPlayActive_currentBuffer__Header__AudioStatus >= 17 && CdAudioIsPlayActive_currentBuffer__Header__AudioStatus <= 17) {
												CdAudioIsPlayActive_returnValue = 1;
												CdAudioIsPlayActive_retres11 = CdAudioIsPlayActive_returnValue;
												TRACER_RV = (CdAudioIsPlayActive_retres11);
												CdAudio535DeviceControl_tmp = TRACER_RV;
												TRACER_RV = nondet();
												CdAudio535DeviceControl_status = -2147483631;
												CdAudio535DeviceControl_Irp__IoStatus__Information = 0;
L18:;
{
 int AG_SetStatusAndReturn_CIL___Tmp4 ;
												int AG_SetStatusAndReturn_status ; int AG_SetStatusAndReturn_Irp ; int AG_SetStatusAndReturn_deviceExtension__TargetDeviceObject ;
												AG_SetStatusAndReturn_status = CdAudio535DeviceControl_status;
												AG_SetStatusAndReturn_Irp = CdAudio535DeviceControl_Irp;
												AG_SetStatusAndReturn_deviceExtension__TargetDeviceObject = CdAudio535DeviceControl_deviceExtension__TargetDeviceObject;
{
												int IofCompleteRequest_Irp ; int IofCompleteRequest_PriorityBoost ;
												IofCompleteRequest_Irp = AG_SetStatusAndReturn_Irp;
												IofCompleteRequest_PriorityBoost = 0;
												safety = safety + (s - NP);
												s = DC;
												;
												TRACER_RV = nondet();
												TRACER_RV = (AG_SetStatusAndReturn_status);
												CdAudio535DeviceControl_tmp___8 = TRACER_RV;
												TRACER_RV = nondet();
												CdAudio535DeviceControl_retres109 = CdAudio535DeviceControl_tmp___8;
												TRACER_RV = (CdAudio535DeviceControl_retres109);
												CdAudioDeviceControl_status = TRACER_RV;
												TRACER_RV = nondet();
L19:;
												TRACER_RV = (CdAudioDeviceControl_status);
												main_status = TRACER_RV;
												TRACER_RV = nondet();
L20:;
												goto L6;
}
}
											}
											else if(CdAudioIsPlayActive_currentBuffer__Header__AudioStatus < 17) {
L21:;
												CdAudioIsPlayActive_returnValue = 0;
												CdAudioIsPlayActive_deviceExtension__PlayActive = 0;
												CdAudioIsPlayActive_retres11 = CdAudioIsPlayActive_returnValue;
												goto L1;
											}
											else {
												goto L21;
											}
										}
}
									}
									else if(CdAudioIsPlayActive_CIL___Tmp10 < 259) {
										goto L17;
									}
									else {
										goto L17;
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
						else {
							goto L13;
						}
}
					}
					else if(CdAudio535DeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode < CdAudio535DeviceControl_CIL___Tmp62) {
						CdAudio535DeviceControl_CIL___Tmp63 = 16384;
						CdAudio535DeviceControl_CIL___Tmp64 = 131072;
						CdAudio535DeviceControl_CIL___Tmp65 = 147456;
						if(CdAudio535DeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode >= CdAudio535DeviceControl_CIL___Tmp65 && CdAudio535DeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode <= CdAudio535DeviceControl_CIL___Tmp65) {
							if(CdAudio535DeviceControl_currentIrpStack__Parameters__DeviceIoControl__OutputBufferLength > 0) {
L22:;
								CdAudio535DeviceControl_status = -1073741789;
								CdAudio535DeviceControl_Irp__IoStatus__Information = 0;
								goto L3;
							}
							else if(CdAudio535DeviceControl_currentIrpStack__Parameters__DeviceIoControl__OutputBufferLength < 0) {
								goto L22;
							}
							else {
{
 int CdAudioIsPlayActive_deviceExtension__PlayActive ;
int CdAudioIsPlayActive_ioStatus__Status ;
int CdAudioIsPlayActive_currentBuffer__Header__AudioStatus ;
int CdAudioIsPlayActive_irp_CdAudioIsPlayActive ;
int CdAudioIsPlayActive_event ;
int CdAudioIsPlayActive_status ;
int CdAudioIsPlayActive_currentBuffer ;
int CdAudioIsPlayActive_returnValue ;
int CdAudioIsPlayActive_CIL___Tmp10 ;
int CdAudioIsPlayActive_retres11 ;
								int CdAudioIsPlayActive_DeviceObject ;
								CdAudioIsPlayActive_DeviceObject = CdAudio535DeviceControl_DeviceObject;
								if(CdAudioIsPlayActive_deviceExtension__PlayActive >= 0 && CdAudioIsPlayActive_deviceExtension__PlayActive <= 0) {
									CdAudioIsPlayActive_retres11 = 0;
L23:;
									TRACER_RV = (CdAudioIsPlayActive_retres11);
									CdAudio535DeviceControl_tmp___2 = TRACER_RV;
									TRACER_RV = nondet();
									if(CdAudio535DeviceControl_Toc >= 0 && CdAudio535DeviceControl_Toc <= 0) {
										CdAudio535DeviceControl_status = -1073741670;
										CdAudio535DeviceControl_Irp__IoStatus__Information = 0;
{
 int AG_SetStatusAndReturn_CIL___Tmp4 ;
										int AG_SetStatusAndReturn_status ; int AG_SetStatusAndReturn_Irp ; int AG_SetStatusAndReturn_deviceExtension__TargetDeviceObject ;
										AG_SetStatusAndReturn_status = CdAudio535DeviceControl_status;
										AG_SetStatusAndReturn_Irp = CdAudio535DeviceControl_Irp;
										AG_SetStatusAndReturn_deviceExtension__TargetDeviceObject = CdAudio535DeviceControl_deviceExtension__TargetDeviceObject;
{
										int IofCompleteRequest_Irp ; int IofCompleteRequest_PriorityBoost ;
										IofCompleteRequest_Irp = AG_SetStatusAndReturn_Irp;
										IofCompleteRequest_PriorityBoost = 0;
										safety = safety + (s - NP);
										s = DC;
										;
										TRACER_RV = nondet();
										TRACER_RV = (AG_SetStatusAndReturn_status);
										CdAudio535DeviceControl_tmp___3 = TRACER_RV;
										TRACER_RV = nondet();
										CdAudio535DeviceControl_retres109 = CdAudio535DeviceControl_tmp___3;
										CdAudio535DeviceControl_TRACER_returning = 1;
										TRACER_RV = (CdAudio535DeviceControl_retres109);
										CdAudioDeviceControl_status = TRACER_RV;
										TRACER_RV = nondet();
										goto L9;
}
}
									}
									else if(CdAudio535DeviceControl_Toc < 0) {
{
 int SendSrbSynchronous_ioStatus__Status ;
int SendSrbSynchronous_ioctl ;
int SendSrbSynchronous_event ;
int SendSrbSynchronous_irp ;
int SendSrbSynchronous_status ;
int SendSrbSynchronous_CIL___Tmp10 ;
int SendSrbSynchronous_CIL___Tmp11 ;
int SendSrbSynchronous_CIL___Tmp12 ;
int SendSrbSynchronous_CIL___Tmp13 ;
int SendSrbSynchronous_CIL___Tmp14 ;
int SendSrbSynchronous_CIL___Tmp15 ;
int SendSrbSynchronous_CIL___Tmp16 ;
int SendSrbSynchronous_CIL___Tmp17 ;
int SendSrbSynchronous_CIL___Tmp18 ;
int SendSrbSynchronous_retres19 ;
										int SendSrbSynchronous_Extension ; int SendSrbSynchronous_Srb ; int SendSrbSynchronous_Buffer ; int SendSrbSynchronous_BufferLength ;
										SendSrbSynchronous_Extension = CdAudio535DeviceControl_deviceExtension;
										SendSrbSynchronous_Srb = CdAudio535DeviceControl_srb;
										SendSrbSynchronous_Buffer = CdAudio535DeviceControl_Toc;
										SendSrbSynchronous_BufferLength = CdAudio535DeviceControl_sizeof__CDROM_TOC;
										SendSrbSynchronous_irp = 0;
										SendSrbSynchronous_retres19 = -1073741670;
										TRACER_RV = (SendSrbSynchronous_retres19);
										CdAudio535DeviceControl_status = TRACER_RV;
										TRACER_RV = nondet();
L24:;
										CdAudio535DeviceControl_CIL___Tmp108 = CdAudio535DeviceControl_status;
{
 int AG_SetStatusAndReturn_CIL___Tmp4 ;
										int AG_SetStatusAndReturn_status ; int AG_SetStatusAndReturn_Irp ; int AG_SetStatusAndReturn_deviceExtension__TargetDeviceObject ;
										AG_SetStatusAndReturn_status = CdAudio535DeviceControl_status;
										AG_SetStatusAndReturn_Irp = CdAudio535DeviceControl_Irp;
										AG_SetStatusAndReturn_deviceExtension__TargetDeviceObject = CdAudio535DeviceControl_deviceExtension__TargetDeviceObject;
{
										int IofCompleteRequest_Irp ; int IofCompleteRequest_PriorityBoost ;
										IofCompleteRequest_Irp = AG_SetStatusAndReturn_Irp;
										IofCompleteRequest_PriorityBoost = 0;
										safety = safety + (s - NP);
										s = DC;
										;
										TRACER_RV = nondet();
										TRACER_RV = (AG_SetStatusAndReturn_status);
										CdAudio535DeviceControl_tmp___4 = TRACER_RV;
										TRACER_RV = nondet();
										CdAudio535DeviceControl_retres109 = CdAudio535DeviceControl_tmp___4;
										CdAudio535DeviceControl_TRACER_returning = 1;
										TRACER_RV = (CdAudio535DeviceControl_retres109);
										CdAudioDeviceControl_status = TRACER_RV;
										TRACER_RV = nondet();
										goto L9;
}
}
}
									}
									else {
{
 int SendSrbSynchronous_ioStatus__Status ;
int SendSrbSynchronous_ioctl ;
int SendSrbSynchronous_event ;
int SendSrbSynchronous_irp ;
int SendSrbSynchronous_status ;
int SendSrbSynchronous_CIL___Tmp10 ;
int SendSrbSynchronous_CIL___Tmp11 ;
int SendSrbSynchronous_CIL___Tmp12 ;
int SendSrbSynchronous_CIL___Tmp13 ;
int SendSrbSynchronous_CIL___Tmp14 ;
int SendSrbSynchronous_CIL___Tmp15 ;
int SendSrbSynchronous_CIL___Tmp16 ;
int SendSrbSynchronous_CIL___Tmp17 ;
int SendSrbSynchronous_CIL___Tmp18 ;
int SendSrbSynchronous_retres19 ;
										int SendSrbSynchronous_Extension ; int SendSrbSynchronous_Srb ; int SendSrbSynchronous_Buffer ; int SendSrbSynchronous_BufferLength ;
										SendSrbSynchronous_Extension = CdAudio535DeviceControl_deviceExtension;
										SendSrbSynchronous_Srb = CdAudio535DeviceControl_srb;
										SendSrbSynchronous_Buffer = CdAudio535DeviceControl_Toc;
										SendSrbSynchronous_BufferLength = CdAudio535DeviceControl_sizeof__CDROM_TOC;
										SendSrbSynchronous_irp = 0;
										SendSrbSynchronous_retres19 = -1073741670;
										TRACER_RV = (SendSrbSynchronous_retres19);
										CdAudio535DeviceControl_status = TRACER_RV;
										TRACER_RV = nondet();
										goto L24;
}
									}
								}
								else if(CdAudioIsPlayActive_deviceExtension__PlayActive < 0) {
L25:;
									if(CdAudioIsPlayActive_currentBuffer >= 0 && CdAudioIsPlayActive_currentBuffer <= 0) {
										CdAudioIsPlayActive_retres11 = 0;
										goto L23;
									}
									else if(CdAudioIsPlayActive_currentBuffer < 0) {
L26:;
										if(CdAudioIsPlayActive_irp_CdAudioIsPlayActive >= 0 && CdAudioIsPlayActive_irp_CdAudioIsPlayActive <= 0) {
											CdAudioIsPlayActive_retres11 = 0;
											goto L23;
										}
										else if(CdAudioIsPlayActive_irp_CdAudioIsPlayActive < 0) {
L27:;
											CdAudioIsPlayActive_CIL___Tmp10 = CdAudioIsPlayActive_status;
											if(CdAudioIsPlayActive_CIL___Tmp10 >= 259 && CdAudioIsPlayActive_CIL___Tmp10 <= 259) {
{
 int KeWaitForSingleObject_tmp_ndt_7 ;
int KeWaitForSingleObject_retres7 ;
												int KeWaitForSingleObject_Object ; int KeWaitForSingleObject_WaitReason ; int KeWaitForSingleObject_WaitMode ; int KeWaitForSingleObject_Alertable ; int KeWaitForSingleObject_Timeout ;
												KeWaitForSingleObject_Object = CdAudioIsPlayActive_event;
												KeWaitForSingleObject_WaitReason = Suspended;
												KeWaitForSingleObject_WaitMode = KernelMode;
												KeWaitForSingleObject_Alertable = 0;
												KeWaitForSingleObject_Timeout = 0;
L28:;
												;
												TRACER_RV = nondet();
												CdAudioIsPlayActive_status = CdAudioIsPlayActive_ioStatus__Status;
L29:;
												if(CdAudioIsPlayActive_status < 0) {
													CdAudioIsPlayActive_retres11 = 0;
													goto L23;
												}
												else {
													if(CdAudioIsPlayActive_currentBuffer__Header__AudioStatus >= 17 && CdAudioIsPlayActive_currentBuffer__Header__AudioStatus <= 17) {
														CdAudioIsPlayActive_returnValue = 1;
														CdAudioIsPlayActive_retres11 = CdAudioIsPlayActive_returnValue;
														TRACER_RV = (CdAudioIsPlayActive_retres11);
														CdAudio535DeviceControl_tmp___2 = TRACER_RV;
														TRACER_RV = nondet();
														CdAudio535DeviceControl_status = -2147483631;
														CdAudio535DeviceControl_Irp__IoStatus__Information = 0;
														goto L18;
													}
													else if(CdAudioIsPlayActive_currentBuffer__Header__AudioStatus < 17) {
L30:;
														CdAudioIsPlayActive_returnValue = 0;
														CdAudioIsPlayActive_deviceExtension__PlayActive = 0;
														CdAudioIsPlayActive_retres11 = CdAudioIsPlayActive_returnValue;
														goto L23;
													}
													else {
														goto L30;
													}
												}
}
											}
											else if(CdAudioIsPlayActive_CIL___Tmp10 < 259) {
												goto L29;
											}
											else {
												goto L29;
											}
										}
										else {
											goto L27;
										}
									}
									else {
										goto L26;
									}
								}
								else {
									goto L25;
								}
}
							}
						}
						else if(CdAudio535DeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode < CdAudio535DeviceControl_CIL___Tmp65) {
							CdAudio535DeviceControl_CIL___Tmp66 = 44;
							CdAudio535DeviceControl_CIL___Tmp67 = 16384;
							CdAudio535DeviceControl_CIL___Tmp68 = 131072;
							CdAudio535DeviceControl_CIL___Tmp69 = 147456;
							CdAudio535DeviceControl_CIL___Tmp70 = 147500;
							CdAudio535DeviceControl_CIL___Tmp71 = 24;
							CdAudio535DeviceControl_CIL___Tmp72 = 16384;
							CdAudio535DeviceControl_CIL___Tmp73 = 131072;
							CdAudio535DeviceControl_CIL___Tmp74 = 147456;
							CdAudio535DeviceControl_CIL___Tmp75 = 147480;
							CdAudio535DeviceControl_CIL___Tmp76 = 4;
							CdAudio535DeviceControl_CIL___Tmp77 = 16384;
							CdAudio535DeviceControl_CIL___Tmp78 = 131072;
							CdAudio535DeviceControl_CIL___Tmp79 = 147456;
							CdAudio535DeviceControl_CIL___Tmp80 = 147460;
							CdAudio535DeviceControl_CIL___Tmp81 = 2056;
							CdAudio535DeviceControl_CIL___Tmp82 = 16384;
							CdAudio535DeviceControl_CIL___Tmp83 = 131072;
							CdAudio535DeviceControl_CIL___Tmp84 = 147456;
							CdAudio535DeviceControl_CIL___Tmp85 = 149512;
							CdAudio535DeviceControl_CIL___Tmp86 = 52;
							CdAudio535DeviceControl_CIL___Tmp87 = 16384;
							CdAudio535DeviceControl_CIL___Tmp88 = 131072;
							CdAudio535DeviceControl_CIL___Tmp89 = 147456;
							CdAudio535DeviceControl_CIL___Tmp90 = 147508;
							CdAudio535DeviceControl_CIL___Tmp91 = 20;
							CdAudio535DeviceControl_CIL___Tmp92 = 16384;
							CdAudio535DeviceControl_CIL___Tmp93 = 131072;
							CdAudio535DeviceControl_CIL___Tmp94 = 147456;
							CdAudio535DeviceControl_CIL___Tmp95 = 147476;
							CdAudio535DeviceControl_CIL___Tmp96 = 40;
							CdAudio535DeviceControl_CIL___Tmp97 = 16384;
							CdAudio535DeviceControl_CIL___Tmp98 = 131072;
							CdAudio535DeviceControl_CIL___Tmp99 = 147456;
							CdAudio535DeviceControl_CIL___Tmp100 = 147496;
L31:;
							CdAudio535DeviceControl_CIL___Tmp101 = 2048;
							CdAudio535DeviceControl_CIL___Tmp102 = 16384;
							CdAudio535DeviceControl_CIL___Tmp103 = 131072;
							CdAudio535DeviceControl_CIL___Tmp104 = 147456;
							CdAudio535DeviceControl_CIL___Tmp105 = 149504;
L32:;
{
 int CdAudioSendToNextDriver_Irp__CurrentLocation ;
int CdAudioSendToNextDriver_Irp__Tail__Overlay__CurrentStackLocation ;
int CdAudioSendToNextDriver_deviceExtension__TargetDeviceObject ;
int CdAudioSendToNextDriver_tmp ;
							int CdAudioSendToNextDriver_DeviceObject ; int CdAudioSendToNextDriver_Irp ;
							CdAudioSendToNextDriver_DeviceObject = CdAudio535DeviceControl_DeviceObject;
							CdAudioSendToNextDriver_Irp = CdAudio535DeviceControl_Irp;
							safety = safety + (s - NP);
							s = SKIP1;
							CdAudioSendToNextDriver_Irp__CurrentLocation = CdAudioSendToNextDriver_Irp__CurrentLocation + 1;
							CdAudioSendToNextDriver_Irp__Tail__Overlay__CurrentStackLocation = CdAudioSendToNextDriver_Irp__Tail__Overlay__CurrentStackLocation + 1;
{
 int IofCallDriver_Irp__PendingReturned ;
int IofCallDriver_returnVal2 ;
int IofCallDriver_compRetStatus ;
int IofCallDriver_lcontext ;
int IofCallDriver_CIL___Tmp8 ;
int IofCallDriver_tmp_ndt_5 ;
int IofCallDriver_tmp_ndt_6 ;
							int IofCallDriver_DeviceObject ; int IofCallDriver_Irp ;
							IofCallDriver_DeviceObject = CdAudioSendToNextDriver_deviceExtension__TargetDeviceObject;
							IofCallDriver_Irp = CdAudioSendToNextDriver_Irp;
							if(IofCallDriver_Irp__PendingReturned > 0) {
L33:;
								IofCallDriver_returnVal2 = 259;
L34:;
								safety = safety + (s - SKIP1);
								s = SKIP2;
								lowerDriverReturn = IofCallDriver_returnVal2;
								TRACER_RV = (IofCallDriver_returnVal2);
								CdAudioSendToNextDriver_tmp = TRACER_RV;
								TRACER_RV = nondet();
								TRACER_RV = (CdAudioSendToNextDriver_tmp);
								CdAudio535DeviceControl_tmp___7 = TRACER_RV;
								TRACER_RV = nondet();
								CdAudio535DeviceControl_retres109 = CdAudio535DeviceControl_tmp___7;
								CdAudio535DeviceControl_TRACER_returning = 1;
								TRACER_RV = (CdAudio535DeviceControl_retres109);
								CdAudioDeviceControl_status = TRACER_RV;
								TRACER_RV = nondet();
L35:;
								TRACER_RV = (CdAudioDeviceControl_status);
								main_status = TRACER_RV;
								TRACER_RV = nondet();
L36:;
L37:;
L38:;
								safety = safety + (main_status - lowerDriverReturn);
								goto L8;
							}
							else if(IofCallDriver_Irp__PendingReturned < 0) {
								goto L33;
							}
							else {
								IofCallDriver_tmp_ndt_5 = __VERIFIER_nondet_int();
								if(IofCallDriver_tmp_ndt_5 >= 0 && IofCallDriver_tmp_ndt_5 <= 0) {
									IofCallDriver_returnVal2 = 0;
									safety = safety + (s - SKIP1);
									s = SKIP2;
									lowerDriverReturn = IofCallDriver_returnVal2;
									TRACER_RV = (IofCallDriver_returnVal2);
									CdAudioSendToNextDriver_tmp = TRACER_RV;
									TRACER_RV = nondet();
									TRACER_RV = (CdAudioSendToNextDriver_tmp);
									CdAudio535DeviceControl_tmp___7 = TRACER_RV;
									TRACER_RV = nondet();
									CdAudio535DeviceControl_retres109 = CdAudio535DeviceControl_tmp___7;
									CdAudio535DeviceControl_TRACER_returning = 1;
									TRACER_RV = (CdAudio535DeviceControl_retres109);
									CdAudioDeviceControl_status = TRACER_RV;
									TRACER_RV = nondet();
L39:;
									TRACER_RV = (CdAudioDeviceControl_status);
									main_status = TRACER_RV;
									TRACER_RV = nondet();
L40:;
L41:;
									goto L38;
								}
								else if(IofCallDriver_tmp_ndt_5 < 0) {
L42:;
									IofCallDriver_tmp_ndt_6 = __VERIFIER_nondet_int();
									if(IofCallDriver_tmp_ndt_6 >= 1 && IofCallDriver_tmp_ndt_6 <= 1) {
										IofCallDriver_returnVal2 = -1073741823;
										safety = safety + (s - SKIP1);
										s = SKIP2;
										lowerDriverReturn = IofCallDriver_returnVal2;
										TRACER_RV = (IofCallDriver_returnVal2);
										CdAudioSendToNextDriver_tmp = TRACER_RV;
										TRACER_RV = nondet();
										TRACER_RV = (CdAudioSendToNextDriver_tmp);
										CdAudio535DeviceControl_tmp___7 = TRACER_RV;
										TRACER_RV = nondet();
										CdAudio535DeviceControl_retres109 = CdAudio535DeviceControl_tmp___7;
										CdAudio535DeviceControl_TRACER_returning = 1;
										TRACER_RV = (CdAudio535DeviceControl_retres109);
										CdAudioDeviceControl_status = TRACER_RV;
										TRACER_RV = nondet();
L43:;
										TRACER_RV = (CdAudioDeviceControl_status);
										main_status = TRACER_RV;
										TRACER_RV = nondet();
L44:;
L45:;
										goto L38;
									}
									else if(IofCallDriver_tmp_ndt_6 < 1) {
L46:;
										IofCallDriver_returnVal2 = 259;
										goto L34;
									}
									else {
										goto L46;
									}
								}
								else {
									goto L42;
								}
							}
}
}
						}
						else {
							CdAudio535DeviceControl_CIL___Tmp66 = 44;
							CdAudio535DeviceControl_CIL___Tmp67 = 16384;
							CdAudio535DeviceControl_CIL___Tmp68 = 131072;
							CdAudio535DeviceControl_CIL___Tmp69 = 147456;
							CdAudio535DeviceControl_CIL___Tmp70 = 147500;
							if(CdAudio535DeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode >= CdAudio535DeviceControl_CIL___Tmp70 && CdAudio535DeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode <= CdAudio535DeviceControl_CIL___Tmp70) {
								if(CdAudio535DeviceControl_currentIrpStack__Parameters__DeviceIoControl__OutputBufferLength < CdAudio535DeviceControl_sizeof__SUB_Q_CURRENT_POSITION) {
									CdAudio535DeviceControl_status = -1073741789;
									CdAudio535DeviceControl_Irp__IoStatus__Information = 0;
									goto L3;
								}
								else {
									if(CdAudio535DeviceControl_SubQPtr >= 0 && CdAudio535DeviceControl_SubQPtr <= 0) {
										CdAudio535DeviceControl_status = -1073741670;
										CdAudio535DeviceControl_Irp__IoStatus__Information = 0;
{
 int AG_SetStatusAndReturn_CIL___Tmp4 ;
										int AG_SetStatusAndReturn_status ; int AG_SetStatusAndReturn_Irp ; int AG_SetStatusAndReturn_deviceExtension__TargetDeviceObject ;
										AG_SetStatusAndReturn_status = CdAudio535DeviceControl_status;
										AG_SetStatusAndReturn_Irp = CdAudio535DeviceControl_Irp;
										AG_SetStatusAndReturn_deviceExtension__TargetDeviceObject = CdAudio535DeviceControl_deviceExtension__TargetDeviceObject;
{
										int IofCompleteRequest_Irp ; int IofCompleteRequest_PriorityBoost ;
										IofCompleteRequest_Irp = AG_SetStatusAndReturn_Irp;
										IofCompleteRequest_PriorityBoost = 0;
										safety = safety + (s - NP);
										s = DC;
										;
										TRACER_RV = nondet();
										TRACER_RV = (AG_SetStatusAndReturn_status);
										CdAudio535DeviceControl_tmp___5 = TRACER_RV;
										TRACER_RV = nondet();
										CdAudio535DeviceControl_retres109 = CdAudio535DeviceControl_tmp___5;
										CdAudio535DeviceControl_TRACER_returning = 1;
										TRACER_RV = (CdAudio535DeviceControl_retres109);
										CdAudioDeviceControl_status = TRACER_RV;
										TRACER_RV = nondet();
										goto L9;
}
}
									}
									else if(CdAudio535DeviceControl_SubQPtr < 0) {
										if(CdAudio535DeviceControl_userPtr__Format > 1) {
L47:;
											CdAudio535DeviceControl_status = -1073741823;
											CdAudio535DeviceControl_Irp__IoStatus__Information = 0;
{
 int AG_SetStatusAndReturn_CIL___Tmp4 ;
											int AG_SetStatusAndReturn_status ; int AG_SetStatusAndReturn_Irp ; int AG_SetStatusAndReturn_deviceExtension__TargetDeviceObject ;
											AG_SetStatusAndReturn_status = CdAudio535DeviceControl_status;
											AG_SetStatusAndReturn_Irp = CdAudio535DeviceControl_Irp;
											AG_SetStatusAndReturn_deviceExtension__TargetDeviceObject = CdAudio535DeviceControl_deviceExtension__TargetDeviceObject;
{
											int IofCompleteRequest_Irp ; int IofCompleteRequest_PriorityBoost ;
											IofCompleteRequest_Irp = AG_SetStatusAndReturn_Irp;
											IofCompleteRequest_PriorityBoost = 0;
											safety = safety + (s - NP);
											s = DC;
											;
											TRACER_RV = nondet();
											TRACER_RV = (AG_SetStatusAndReturn_status);
											CdAudio535DeviceControl_tmp___6 = TRACER_RV;
											TRACER_RV = nondet();
											CdAudio535DeviceControl_retres109 = CdAudio535DeviceControl_tmp___6;
											CdAudio535DeviceControl_TRACER_returning = 1;
											TRACER_RV = (CdAudio535DeviceControl_retres109);
											CdAudioDeviceControl_status = TRACER_RV;
											TRACER_RV = nondet();
											TRACER_RV = (CdAudioDeviceControl_status);
											main_status = TRACER_RV;
											TRACER_RV = nondet();
L48:;
											goto L6;
}
}
										}
										else if(CdAudio535DeviceControl_userPtr__Format < 1) {
											goto L47;
										}
										else {
{
 int SendSrbSynchronous_ioStatus__Status ;
int SendSrbSynchronous_ioctl ;
int SendSrbSynchronous_event ;
int SendSrbSynchronous_irp ;
int SendSrbSynchronous_status ;
int SendSrbSynchronous_CIL___Tmp10 ;
int SendSrbSynchronous_CIL___Tmp11 ;
int SendSrbSynchronous_CIL___Tmp12 ;
int SendSrbSynchronous_CIL___Tmp13 ;
int SendSrbSynchronous_CIL___Tmp14 ;
int SendSrbSynchronous_CIL___Tmp15 ;
int SendSrbSynchronous_CIL___Tmp16 ;
int SendSrbSynchronous_CIL___Tmp17 ;
int SendSrbSynchronous_CIL___Tmp18 ;
int SendSrbSynchronous_retres19 ;
											int SendSrbSynchronous_Extension ; int SendSrbSynchronous_Srb ; int SendSrbSynchronous_Buffer ; int SendSrbSynchronous_BufferLength ;
											SendSrbSynchronous_Extension = CdAudio535DeviceControl_deviceExtension;
											SendSrbSynchronous_Srb = CdAudio535DeviceControl_srb;
											SendSrbSynchronous_Buffer = CdAudio535DeviceControl_SubQPtr;
											SendSrbSynchronous_BufferLength = CdAudio535DeviceControl_sizeof__SUB_Q_CURRENT_POSITION;
											SendSrbSynchronous_irp = 0;
											SendSrbSynchronous_retres19 = -1073741670;
											TRACER_RV = (SendSrbSynchronous_retres19);
											CdAudio535DeviceControl_status = TRACER_RV;
											TRACER_RV = nondet();
L49:;
L50:;
{
 int AG_SetStatusAndReturn_CIL___Tmp4 ;
											int AG_SetStatusAndReturn_status ; int AG_SetStatusAndReturn_Irp ; int AG_SetStatusAndReturn_deviceExtension__TargetDeviceObject ;
											AG_SetStatusAndReturn_status = CdAudio535DeviceControl_status;
											AG_SetStatusAndReturn_Irp = CdAudio535DeviceControl_Irp;
											AG_SetStatusAndReturn_deviceExtension__TargetDeviceObject = CdAudio535DeviceControl_deviceExtension__TargetDeviceObject;
{
											int IofCompleteRequest_Irp ; int IofCompleteRequest_PriorityBoost ;
											IofCompleteRequest_Irp = AG_SetStatusAndReturn_Irp;
											IofCompleteRequest_PriorityBoost = 0;
											safety = safety + (s - NP);
											s = DC;
											;
											TRACER_RV = nondet();
											TRACER_RV = (AG_SetStatusAndReturn_status);
											CdAudio535DeviceControl_tmp___8 = TRACER_RV;
											TRACER_RV = nondet();
											CdAudio535DeviceControl_retres109 = CdAudio535DeviceControl_tmp___8;
											TRACER_RV = (CdAudio535DeviceControl_retres109);
											CdAudioDeviceControl_status = TRACER_RV;
											TRACER_RV = nondet();
											goto L9;
}
}
}
										}
									}
									else {
										if(CdAudio535DeviceControl_userPtr__Format > 1) {
											goto L47;
										}
										else if(CdAudio535DeviceControl_userPtr__Format < 1) {
											goto L47;
										}
										else {
{
 int SendSrbSynchronous_ioStatus__Status ;
int SendSrbSynchronous_ioctl ;
int SendSrbSynchronous_event ;
int SendSrbSynchronous_irp ;
int SendSrbSynchronous_status ;
int SendSrbSynchronous_CIL___Tmp10 ;
int SendSrbSynchronous_CIL___Tmp11 ;
int SendSrbSynchronous_CIL___Tmp12 ;
int SendSrbSynchronous_CIL___Tmp13 ;
int SendSrbSynchronous_CIL___Tmp14 ;
int SendSrbSynchronous_CIL___Tmp15 ;
int SendSrbSynchronous_CIL___Tmp16 ;
int SendSrbSynchronous_CIL___Tmp17 ;
int SendSrbSynchronous_CIL___Tmp18 ;
int SendSrbSynchronous_retres19 ;
											int SendSrbSynchronous_Extension ; int SendSrbSynchronous_Srb ; int SendSrbSynchronous_Buffer ; int SendSrbSynchronous_BufferLength ;
											SendSrbSynchronous_Extension = CdAudio535DeviceControl_deviceExtension;
											SendSrbSynchronous_Srb = CdAudio535DeviceControl_srb;
											SendSrbSynchronous_Buffer = CdAudio535DeviceControl_SubQPtr;
											SendSrbSynchronous_BufferLength = CdAudio535DeviceControl_sizeof__SUB_Q_CURRENT_POSITION;
											SendSrbSynchronous_irp = 0;
											SendSrbSynchronous_retres19 = -1073741670;
											TRACER_RV = (SendSrbSynchronous_retres19);
											CdAudio535DeviceControl_status = TRACER_RV;
											TRACER_RV = nondet();
											goto L49;
}
										}
									}
								}
							}
							else if(CdAudio535DeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode < CdAudio535DeviceControl_CIL___Tmp70) {
								CdAudio535DeviceControl_CIL___Tmp71 = 24;
								CdAudio535DeviceControl_CIL___Tmp72 = 16384;
								CdAudio535DeviceControl_CIL___Tmp73 = 131072;
								CdAudio535DeviceControl_CIL___Tmp74 = 147456;
								CdAudio535DeviceControl_CIL___Tmp75 = 147480;
								if(CdAudio535DeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode >= CdAudio535DeviceControl_CIL___Tmp75 && CdAudio535DeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode <= CdAudio535DeviceControl_CIL___Tmp75) {
									if(CdAudio535DeviceControl_currentIrpStack__Parameters__DeviceIoControl__InputBufferLength < CdAudio535DeviceControl_sizeof__CDROM_PLAY_AUDIO_MSF) {
										CdAudio535DeviceControl_status = -1073741820;
L51:;
{
 int AG_SetStatusAndReturn_CIL___Tmp4 ;
										int AG_SetStatusAndReturn_status ; int AG_SetStatusAndReturn_Irp ; int AG_SetStatusAndReturn_deviceExtension__TargetDeviceObject ;
										AG_SetStatusAndReturn_status = CdAudio535DeviceControl_status;
										AG_SetStatusAndReturn_Irp = CdAudio535DeviceControl_Irp;
										AG_SetStatusAndReturn_deviceExtension__TargetDeviceObject = CdAudio535DeviceControl_deviceExtension__TargetDeviceObject;
{
										int IofCompleteRequest_Irp ; int IofCompleteRequest_PriorityBoost ;
										IofCompleteRequest_Irp = AG_SetStatusAndReturn_Irp;
										IofCompleteRequest_PriorityBoost = 0;
										safety = safety + (s - NP);
										s = DC;
										;
										TRACER_RV = nondet();
										TRACER_RV = (AG_SetStatusAndReturn_status);
										CdAudio535DeviceControl_tmp___8 = TRACER_RV;
										TRACER_RV = nondet();
										CdAudio535DeviceControl_retres109 = CdAudio535DeviceControl_tmp___8;
										TRACER_RV = (CdAudio535DeviceControl_retres109);
										CdAudioDeviceControl_status = TRACER_RV;
										TRACER_RV = nondet();
L52:;
										TRACER_RV = (CdAudioDeviceControl_status);
										main_status = TRACER_RV;
										TRACER_RV = nondet();
L53:;
										goto L6;
}
}
									}
									else {
{
 int SendSrbSynchronous_ioStatus__Status ;
int SendSrbSynchronous_ioctl ;
int SendSrbSynchronous_event ;
int SendSrbSynchronous_irp ;
int SendSrbSynchronous_status ;
int SendSrbSynchronous_CIL___Tmp10 ;
int SendSrbSynchronous_CIL___Tmp11 ;
int SendSrbSynchronous_CIL___Tmp12 ;
int SendSrbSynchronous_CIL___Tmp13 ;
int SendSrbSynchronous_CIL___Tmp14 ;
int SendSrbSynchronous_CIL___Tmp15 ;
int SendSrbSynchronous_CIL___Tmp16 ;
int SendSrbSynchronous_CIL___Tmp17 ;
int SendSrbSynchronous_CIL___Tmp18 ;
int SendSrbSynchronous_retres19 ;
										int SendSrbSynchronous_Extension ; int SendSrbSynchronous_Srb ; int SendSrbSynchronous_Buffer ; int SendSrbSynchronous_BufferLength ;
										SendSrbSynchronous_Extension = CdAudio535DeviceControl_deviceExtension;
										SendSrbSynchronous_Srb = CdAudio535DeviceControl_srb;
										SendSrbSynchronous_Buffer = 0;
										SendSrbSynchronous_BufferLength = 0;
										SendSrbSynchronous_irp = 0;
										SendSrbSynchronous_retres19 = -1073741670;
										TRACER_RV = (SendSrbSynchronous_retres19);
										CdAudio535DeviceControl_status = TRACER_RV;
										TRACER_RV = nondet();
										goto L50;
}
									}
								}
								else if(CdAudio535DeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode < CdAudio535DeviceControl_CIL___Tmp75) {
									CdAudio535DeviceControl_CIL___Tmp76 = 4;
									CdAudio535DeviceControl_CIL___Tmp77 = 16384;
									CdAudio535DeviceControl_CIL___Tmp78 = 131072;
									CdAudio535DeviceControl_CIL___Tmp79 = 147456;
									CdAudio535DeviceControl_CIL___Tmp80 = 147460;
									if(CdAudio535DeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode >= CdAudio535DeviceControl_CIL___Tmp80 && CdAudio535DeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode <= CdAudio535DeviceControl_CIL___Tmp80) {
										if(CdAudio535DeviceControl_currentIrpStack__Parameters__DeviceIoControl__InputBufferLength < CdAudio535DeviceControl_sizeof__CDROM_SEEK_AUDIO_MSF) {
											CdAudio535DeviceControl_status = -1073741820;
											goto L51;
										}
										else {
{
 int SendSrbSynchronous_ioStatus__Status ;
int SendSrbSynchronous_ioctl ;
int SendSrbSynchronous_event ;
int SendSrbSynchronous_irp ;
int SendSrbSynchronous_status ;
int SendSrbSynchronous_CIL___Tmp10 ;
int SendSrbSynchronous_CIL___Tmp11 ;
int SendSrbSynchronous_CIL___Tmp12 ;
int SendSrbSynchronous_CIL___Tmp13 ;
int SendSrbSynchronous_CIL___Tmp14 ;
int SendSrbSynchronous_CIL___Tmp15 ;
int SendSrbSynchronous_CIL___Tmp16 ;
int SendSrbSynchronous_CIL___Tmp17 ;
int SendSrbSynchronous_CIL___Tmp18 ;
int SendSrbSynchronous_retres19 ;
											int SendSrbSynchronous_Extension ; int SendSrbSynchronous_Srb ; int SendSrbSynchronous_Buffer ; int SendSrbSynchronous_BufferLength ;
											SendSrbSynchronous_Extension = CdAudio535DeviceControl_deviceExtension;
											SendSrbSynchronous_Srb = CdAudio535DeviceControl_srb;
											SendSrbSynchronous_Buffer = 0;
											SendSrbSynchronous_BufferLength = 0;
											SendSrbSynchronous_irp = 0;
											SendSrbSynchronous_retres19 = -1073741670;
											TRACER_RV = (SendSrbSynchronous_retres19);
											CdAudio535DeviceControl_status = TRACER_RV;
											TRACER_RV = nondet();
											goto L50;
}
										}
									}
									else if(CdAudio535DeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode < CdAudio535DeviceControl_CIL___Tmp80) {
										CdAudio535DeviceControl_CIL___Tmp81 = 2056;
										CdAudio535DeviceControl_CIL___Tmp82 = 16384;
										CdAudio535DeviceControl_CIL___Tmp83 = 131072;
										CdAudio535DeviceControl_CIL___Tmp84 = 147456;
										CdAudio535DeviceControl_CIL___Tmp85 = 149512;
										CdAudio535DeviceControl_CIL___Tmp86 = 52;
										CdAudio535DeviceControl_CIL___Tmp87 = 16384;
										CdAudio535DeviceControl_CIL___Tmp88 = 131072;
										CdAudio535DeviceControl_CIL___Tmp89 = 147456;
										CdAudio535DeviceControl_CIL___Tmp90 = 147508;
										CdAudio535DeviceControl_CIL___Tmp91 = 20;
										CdAudio535DeviceControl_CIL___Tmp92 = 16384;
										CdAudio535DeviceControl_CIL___Tmp93 = 131072;
										CdAudio535DeviceControl_CIL___Tmp94 = 147456;
										CdAudio535DeviceControl_CIL___Tmp95 = 147476;
L54:;
										CdAudio535DeviceControl_CIL___Tmp96 = 40;
										CdAudio535DeviceControl_CIL___Tmp97 = 16384;
										CdAudio535DeviceControl_CIL___Tmp98 = 131072;
										CdAudio535DeviceControl_CIL___Tmp99 = 147456;
										CdAudio535DeviceControl_CIL___Tmp100 = 147496;
										goto L31;
									}
									else {
										CdAudio535DeviceControl_CIL___Tmp81 = 2056;
										CdAudio535DeviceControl_CIL___Tmp82 = 16384;
										CdAudio535DeviceControl_CIL___Tmp83 = 131072;
										CdAudio535DeviceControl_CIL___Tmp84 = 147456;
										CdAudio535DeviceControl_CIL___Tmp85 = 149512;
										CdAudio535DeviceControl_CIL___Tmp86 = 52;
										CdAudio535DeviceControl_CIL___Tmp87 = 16384;
										CdAudio535DeviceControl_CIL___Tmp88 = 131072;
										CdAudio535DeviceControl_CIL___Tmp89 = 147456;
										CdAudio535DeviceControl_CIL___Tmp90 = 147508;
										CdAudio535DeviceControl_CIL___Tmp91 = 20;
										CdAudio535DeviceControl_CIL___Tmp92 = 16384;
										CdAudio535DeviceControl_CIL___Tmp93 = 131072;
										CdAudio535DeviceControl_CIL___Tmp94 = 147456;
										CdAudio535DeviceControl_CIL___Tmp95 = 147476;
										if(CdAudio535DeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode >= CdAudio535DeviceControl_CIL___Tmp95 && CdAudio535DeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode <= CdAudio535DeviceControl_CIL___Tmp95) {
											CdAudio535DeviceControl_Irp__IoStatus__Information = 0;
											CdAudio535DeviceControl_status = -1073741808;
L55:;
{
 int AG_SetStatusAndReturn_CIL___Tmp4 ;
											int AG_SetStatusAndReturn_status ; int AG_SetStatusAndReturn_Irp ; int AG_SetStatusAndReturn_deviceExtension__TargetDeviceObject ;
											AG_SetStatusAndReturn_status = CdAudio535DeviceControl_status;
											AG_SetStatusAndReturn_Irp = CdAudio535DeviceControl_Irp;
											AG_SetStatusAndReturn_deviceExtension__TargetDeviceObject = CdAudio535DeviceControl_deviceExtension__TargetDeviceObject;
{
											int IofCompleteRequest_Irp ; int IofCompleteRequest_PriorityBoost ;
											IofCompleteRequest_Irp = AG_SetStatusAndReturn_Irp;
											IofCompleteRequest_PriorityBoost = 0;
											safety = safety + (s - NP);
											s = DC;
											;
											TRACER_RV = nondet();
											TRACER_RV = (AG_SetStatusAndReturn_status);
											CdAudio535DeviceControl_tmp___8 = TRACER_RV;
											TRACER_RV = nondet();
											CdAudio535DeviceControl_retres109 = CdAudio535DeviceControl_tmp___8;
											TRACER_RV = (CdAudio535DeviceControl_retres109);
											CdAudioDeviceControl_status = TRACER_RV;
											TRACER_RV = nondet();
											TRACER_RV = (CdAudioDeviceControl_status);
											main_status = TRACER_RV;
											TRACER_RV = nondet();
L56:;
											goto L6;
}
}
										}
										else if(CdAudio535DeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode < CdAudio535DeviceControl_CIL___Tmp95) {
											goto L54;
										}
										else {
											goto L54;
										}
									}
								}
								else {
									CdAudio535DeviceControl_CIL___Tmp76 = 4;
									CdAudio535DeviceControl_CIL___Tmp77 = 16384;
									CdAudio535DeviceControl_CIL___Tmp78 = 131072;
									CdAudio535DeviceControl_CIL___Tmp79 = 147456;
									CdAudio535DeviceControl_CIL___Tmp80 = 147460;
									CdAudio535DeviceControl_CIL___Tmp81 = 2056;
									CdAudio535DeviceControl_CIL___Tmp82 = 16384;
									CdAudio535DeviceControl_CIL___Tmp83 = 131072;
									CdAudio535DeviceControl_CIL___Tmp84 = 147456;
									CdAudio535DeviceControl_CIL___Tmp85 = 149512;
									CdAudio535DeviceControl_CIL___Tmp86 = 52;
									CdAudio535DeviceControl_CIL___Tmp87 = 16384;
									CdAudio535DeviceControl_CIL___Tmp88 = 131072;
									CdAudio535DeviceControl_CIL___Tmp89 = 147456;
									CdAudio535DeviceControl_CIL___Tmp90 = 147508;
L57:;
									CdAudio535DeviceControl_CIL___Tmp91 = 20;
									CdAudio535DeviceControl_CIL___Tmp92 = 16384;
									CdAudio535DeviceControl_CIL___Tmp93 = 131072;
									CdAudio535DeviceControl_CIL___Tmp94 = 147456;
									CdAudio535DeviceControl_CIL___Tmp95 = 147476;
									CdAudio535DeviceControl_CIL___Tmp96 = 40;
									CdAudio535DeviceControl_CIL___Tmp97 = 16384;
									CdAudio535DeviceControl_CIL___Tmp98 = 131072;
									CdAudio535DeviceControl_CIL___Tmp99 = 147456;
									CdAudio535DeviceControl_CIL___Tmp100 = 147496;
									if(CdAudio535DeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode >= CdAudio535DeviceControl_CIL___Tmp100 && CdAudio535DeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode <= CdAudio535DeviceControl_CIL___Tmp100) {
										CdAudio535DeviceControl_Irp__IoStatus__Information = 0;
										CdAudio535DeviceControl_status = -1073741808;
										goto L55;
									}
									else if(CdAudio535DeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode < CdAudio535DeviceControl_CIL___Tmp100) {
										goto L31;
									}
									else {
										goto L31;
									}
								}
							}
							else {
								CdAudio535DeviceControl_CIL___Tmp71 = 24;
								CdAudio535DeviceControl_CIL___Tmp72 = 16384;
								CdAudio535DeviceControl_CIL___Tmp73 = 131072;
								CdAudio535DeviceControl_CIL___Tmp74 = 147456;
								CdAudio535DeviceControl_CIL___Tmp75 = 147480;
								CdAudio535DeviceControl_CIL___Tmp76 = 4;
								CdAudio535DeviceControl_CIL___Tmp77 = 16384;
								CdAudio535DeviceControl_CIL___Tmp78 = 131072;
								CdAudio535DeviceControl_CIL___Tmp79 = 147456;
								CdAudio535DeviceControl_CIL___Tmp80 = 147460;
								CdAudio535DeviceControl_CIL___Tmp81 = 2056;
								CdAudio535DeviceControl_CIL___Tmp82 = 16384;
								CdAudio535DeviceControl_CIL___Tmp83 = 131072;
								CdAudio535DeviceControl_CIL___Tmp84 = 147456;
								CdAudio535DeviceControl_CIL___Tmp85 = 149512;
								CdAudio535DeviceControl_CIL___Tmp86 = 52;
								CdAudio535DeviceControl_CIL___Tmp87 = 16384;
								CdAudio535DeviceControl_CIL___Tmp88 = 131072;
								CdAudio535DeviceControl_CIL___Tmp89 = 147456;
								CdAudio535DeviceControl_CIL___Tmp90 = 147508;
								if(CdAudio535DeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode >= CdAudio535DeviceControl_CIL___Tmp90 && CdAudio535DeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode <= CdAudio535DeviceControl_CIL___Tmp90) {
									CdAudio535DeviceControl_Irp__IoStatus__Information = 0;
									CdAudio535DeviceControl_status = -1073741808;
									goto L55;
								}
								else if(CdAudio535DeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode < CdAudio535DeviceControl_CIL___Tmp90) {
									goto L57;
								}
								else {
									goto L57;
								}
							}
						}
					}
					else {
						CdAudio535DeviceControl_CIL___Tmp63 = 16384;
						CdAudio535DeviceControl_CIL___Tmp64 = 131072;
						CdAudio535DeviceControl_CIL___Tmp65 = 147456;
						CdAudio535DeviceControl_CIL___Tmp66 = 44;
						CdAudio535DeviceControl_CIL___Tmp67 = 16384;
						CdAudio535DeviceControl_CIL___Tmp68 = 131072;
						CdAudio535DeviceControl_CIL___Tmp69 = 147456;
						CdAudio535DeviceControl_CIL___Tmp70 = 147500;
						CdAudio535DeviceControl_CIL___Tmp71 = 24;
						CdAudio535DeviceControl_CIL___Tmp72 = 16384;
						CdAudio535DeviceControl_CIL___Tmp73 = 131072;
						CdAudio535DeviceControl_CIL___Tmp74 = 147456;
						CdAudio535DeviceControl_CIL___Tmp75 = 147480;
						CdAudio535DeviceControl_CIL___Tmp76 = 4;
						CdAudio535DeviceControl_CIL___Tmp77 = 16384;
						CdAudio535DeviceControl_CIL___Tmp78 = 131072;
						CdAudio535DeviceControl_CIL___Tmp79 = 147456;
						CdAudio535DeviceControl_CIL___Tmp80 = 147460;
						CdAudio535DeviceControl_CIL___Tmp81 = 2056;
						CdAudio535DeviceControl_CIL___Tmp82 = 16384;
						CdAudio535DeviceControl_CIL___Tmp83 = 131072;
						CdAudio535DeviceControl_CIL___Tmp84 = 147456;
						CdAudio535DeviceControl_CIL___Tmp85 = 149512;
						if(CdAudio535DeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode >= CdAudio535DeviceControl_CIL___Tmp85 && CdAudio535DeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode <= CdAudio535DeviceControl_CIL___Tmp85) {
{
 int SendSrbSynchronous_ioStatus__Status ;
int SendSrbSynchronous_ioctl ;
int SendSrbSynchronous_event ;
int SendSrbSynchronous_irp ;
int SendSrbSynchronous_status ;
int SendSrbSynchronous_CIL___Tmp10 ;
int SendSrbSynchronous_CIL___Tmp11 ;
int SendSrbSynchronous_CIL___Tmp12 ;
int SendSrbSynchronous_CIL___Tmp13 ;
int SendSrbSynchronous_CIL___Tmp14 ;
int SendSrbSynchronous_CIL___Tmp15 ;
int SendSrbSynchronous_CIL___Tmp16 ;
int SendSrbSynchronous_CIL___Tmp17 ;
int SendSrbSynchronous_CIL___Tmp18 ;
int SendSrbSynchronous_retres19 ;
							int SendSrbSynchronous_Extension ; int SendSrbSynchronous_Srb ; int SendSrbSynchronous_Buffer ; int SendSrbSynchronous_BufferLength ;
							SendSrbSynchronous_Extension = CdAudio535DeviceControl_deviceExtension;
							SendSrbSynchronous_Srb = CdAudio535DeviceControl_srb;
							SendSrbSynchronous_Buffer = 0;
							SendSrbSynchronous_BufferLength = 0;
							SendSrbSynchronous_irp = 0;
							SendSrbSynchronous_retres19 = -1073741670;
							TRACER_RV = (SendSrbSynchronous_retres19);
							CdAudio535DeviceControl_status = TRACER_RV;
							TRACER_RV = nondet();
							goto L50;
}
						}
						else if(CdAudio535DeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode < CdAudio535DeviceControl_CIL___Tmp85) {
L58:;
							CdAudio535DeviceControl_CIL___Tmp86 = 52;
							CdAudio535DeviceControl_CIL___Tmp87 = 16384;
							CdAudio535DeviceControl_CIL___Tmp88 = 131072;
							CdAudio535DeviceControl_CIL___Tmp89 = 147456;
							CdAudio535DeviceControl_CIL___Tmp90 = 147508;
							CdAudio535DeviceControl_CIL___Tmp91 = 20;
							CdAudio535DeviceControl_CIL___Tmp92 = 16384;
							CdAudio535DeviceControl_CIL___Tmp93 = 131072;
							CdAudio535DeviceControl_CIL___Tmp94 = 147456;
							CdAudio535DeviceControl_CIL___Tmp95 = 147476;
							CdAudio535DeviceControl_CIL___Tmp96 = 40;
							CdAudio535DeviceControl_CIL___Tmp97 = 16384;
							CdAudio535DeviceControl_CIL___Tmp98 = 131072;
							CdAudio535DeviceControl_CIL___Tmp99 = 147456;
							CdAudio535DeviceControl_CIL___Tmp100 = 147496;
							CdAudio535DeviceControl_CIL___Tmp101 = 2048;
							CdAudio535DeviceControl_CIL___Tmp102 = 16384;
							CdAudio535DeviceControl_CIL___Tmp103 = 131072;
							CdAudio535DeviceControl_CIL___Tmp104 = 147456;
							CdAudio535DeviceControl_CIL___Tmp105 = 149504;
							if(CdAudio535DeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode >= CdAudio535DeviceControl_CIL___Tmp105 && CdAudio535DeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode <= CdAudio535DeviceControl_CIL___Tmp105) {
{
 int CdAudioIsPlayActive_deviceExtension__PlayActive ;
int CdAudioIsPlayActive_ioStatus__Status ;
int CdAudioIsPlayActive_currentBuffer__Header__AudioStatus ;
int CdAudioIsPlayActive_irp_CdAudioIsPlayActive ;
int CdAudioIsPlayActive_event ;
int CdAudioIsPlayActive_status ;
int CdAudioIsPlayActive_currentBuffer ;
int CdAudioIsPlayActive_returnValue ;
int CdAudioIsPlayActive_CIL___Tmp10 ;
int CdAudioIsPlayActive_retres11 ;
								int CdAudioIsPlayActive_DeviceObject ;
								CdAudioIsPlayActive_DeviceObject = CdAudio535DeviceControl_DeviceObject;
								if(CdAudioIsPlayActive_deviceExtension__PlayActive >= 0 && CdAudioIsPlayActive_deviceExtension__PlayActive <= 0) {
L59:;
									;
									TRACER_RV = nondet();
{
 int AG_SetStatusAndReturn_CIL___Tmp4 ;
									int AG_SetStatusAndReturn_status ; int AG_SetStatusAndReturn_Irp ; int AG_SetStatusAndReturn_deviceExtension__TargetDeviceObject ;
									AG_SetStatusAndReturn_status = CdAudio535DeviceControl_status;
									AG_SetStatusAndReturn_Irp = CdAudio535DeviceControl_Irp;
									AG_SetStatusAndReturn_deviceExtension__TargetDeviceObject = CdAudio535DeviceControl_deviceExtension__TargetDeviceObject;
{
									int IofCompleteRequest_Irp ; int IofCompleteRequest_PriorityBoost ;
									IofCompleteRequest_Irp = AG_SetStatusAndReturn_Irp;
									IofCompleteRequest_PriorityBoost = 0;
									safety = safety + (s - NP);
									s = DC;
									;
									TRACER_RV = nondet();
									TRACER_RV = (AG_SetStatusAndReturn_status);
									CdAudio535DeviceControl_tmp___8 = TRACER_RV;
									TRACER_RV = nondet();
									CdAudio535DeviceControl_retres109 = CdAudio535DeviceControl_tmp___8;
									TRACER_RV = (CdAudio535DeviceControl_retres109);
									CdAudioDeviceControl_status = TRACER_RV;
									TRACER_RV = nondet();
L60:;
									TRACER_RV = (CdAudioDeviceControl_status);
									main_status = TRACER_RV;
									TRACER_RV = nondet();
L61:;
L62:;
									if(main_status > -1) {
										goto L6;
									}
									else if(main_status < -1) {
										goto L6;
									}
									else {
										goto L8;
									}
}
}
								}
								else if(CdAudioIsPlayActive_deviceExtension__PlayActive < 0) {
L63:;
									if(CdAudioIsPlayActive_currentBuffer >= 0 && CdAudioIsPlayActive_currentBuffer <= 0) {
										goto L59;
									}
									else if(CdAudioIsPlayActive_currentBuffer < 0) {
L64:;
										if(CdAudioIsPlayActive_irp_CdAudioIsPlayActive >= 0 && CdAudioIsPlayActive_irp_CdAudioIsPlayActive <= 0) {
											goto L59;
										}
										else if(CdAudioIsPlayActive_irp_CdAudioIsPlayActive < 0) {
L65:;
											CdAudioIsPlayActive_CIL___Tmp10 = CdAudioIsPlayActive_status;
											if(CdAudioIsPlayActive_CIL___Tmp10 >= 259 && CdAudioIsPlayActive_CIL___Tmp10 <= 259) {
{
 int KeWaitForSingleObject_tmp_ndt_7 ;
int KeWaitForSingleObject_retres7 ;
												int KeWaitForSingleObject_Object ; int KeWaitForSingleObject_WaitReason ; int KeWaitForSingleObject_WaitMode ; int KeWaitForSingleObject_Alertable ; int KeWaitForSingleObject_Timeout ;
												KeWaitForSingleObject_Object = CdAudioIsPlayActive_event;
												KeWaitForSingleObject_WaitReason = Suspended;
												KeWaitForSingleObject_WaitMode = KernelMode;
												KeWaitForSingleObject_Alertable = 0;
												KeWaitForSingleObject_Timeout = 0;
L66:;
												;
												TRACER_RV = nondet();
												CdAudioIsPlayActive_status = CdAudioIsPlayActive_ioStatus__Status;
L67:;
												if(CdAudioIsPlayActive_status < 0) {
													goto L59;
												}
												else {
													if(CdAudioIsPlayActive_currentBuffer__Header__AudioStatus >= 17 && CdAudioIsPlayActive_currentBuffer__Header__AudioStatus <= 17) {
L68:;
														goto L59;
													}
													else if(CdAudioIsPlayActive_currentBuffer__Header__AudioStatus < 17) {
L69:;
														goto L68;
													}
													else {
														goto L69;
													}
												}
}
											}
											else if(CdAudioIsPlayActive_CIL___Tmp10 < 259) {
												goto L67;
											}
											else {
												goto L67;
											}
										}
										else {
											goto L65;
										}
									}
									else {
										goto L64;
									}
								}
								else {
									goto L63;
								}
}
							}
							else if(CdAudio535DeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode < CdAudio535DeviceControl_CIL___Tmp105) {
								goto L32;
							}
							else {
								goto L32;
							}
						}
						else {
							goto L58;
						}
					}
}
				}
				else if(CdAudioDeviceControl_deviceExtension__Active < 2) {
					if(CdAudioDeviceControl_deviceExtension__Active >= 1 && CdAudioDeviceControl_deviceExtension__Active <= 1) {
{
 int CdAudioAtapiDeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode ;
int CdAudioAtapiDeviceControl_Irp__IoStatus__Information ;
int CdAudioAtapiDeviceControl_deviceExtension__PlayActive ;
int CdAudioAtapiDeviceControl_srb__CdbLength ;
int CdAudioAtapiDeviceControl_srb__TimeOutValue ;
int CdAudioAtapiDeviceControl_Irp__IoStatus__Status ;
int CdAudioAtapiDeviceControl_status ;
int CdAudioAtapiDeviceControl_deviceExtension ;
int CdAudioAtapiDeviceControl_srb ;
int CdAudioAtapiDeviceControl_tmp ;
int CdAudioAtapiDeviceControl_CIL___Tmp13 ;
int CdAudioAtapiDeviceControl_CIL___Tmp14 ;
int CdAudioAtapiDeviceControl_CIL___Tmp15 ;
int CdAudioAtapiDeviceControl_CIL___Tmp16 ;
int CdAudioAtapiDeviceControl_CIL___Tmp17 ;
int CdAudioAtapiDeviceControl_retres18 ;
int CdAudioAtapiDeviceControl_TRACER_returning ;
						int CdAudioAtapiDeviceControl_DeviceObject ; int CdAudioAtapiDeviceControl_Irp ;
						CdAudioAtapiDeviceControl_DeviceObject = CdAudioDeviceControl_DeviceObject;
						CdAudioAtapiDeviceControl_Irp = CdAudioDeviceControl_Irp;
						CdAudioAtapiDeviceControl_TRACER_returning = 0;
						CdAudioAtapiDeviceControl_CIL___Tmp13 = 8;
						CdAudioAtapiDeviceControl_CIL___Tmp14 = 16384;
						CdAudioAtapiDeviceControl_CIL___Tmp15 = 131072;
						CdAudioAtapiDeviceControl_CIL___Tmp16 = 147456;
						CdAudioAtapiDeviceControl_CIL___Tmp17 = 147464;
						if(CdAudioAtapiDeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode >= CdAudioAtapiDeviceControl_CIL___Tmp17 && CdAudioAtapiDeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode <= CdAudioAtapiDeviceControl_CIL___Tmp17) {
{
 int SendSrbSynchronous_ioStatus__Status ;
int SendSrbSynchronous_ioctl ;
int SendSrbSynchronous_event ;
int SendSrbSynchronous_irp ;
int SendSrbSynchronous_status ;
int SendSrbSynchronous_CIL___Tmp10 ;
int SendSrbSynchronous_CIL___Tmp11 ;
int SendSrbSynchronous_CIL___Tmp12 ;
int SendSrbSynchronous_CIL___Tmp13 ;
int SendSrbSynchronous_CIL___Tmp14 ;
int SendSrbSynchronous_CIL___Tmp15 ;
int SendSrbSynchronous_CIL___Tmp16 ;
int SendSrbSynchronous_CIL___Tmp17 ;
int SendSrbSynchronous_CIL___Tmp18 ;
int SendSrbSynchronous_retres19 ;
							int SendSrbSynchronous_Extension ; int SendSrbSynchronous_Srb ; int SendSrbSynchronous_Buffer ; int SendSrbSynchronous_BufferLength ;
							SendSrbSynchronous_Extension = CdAudioAtapiDeviceControl_deviceExtension;
							SendSrbSynchronous_Srb = CdAudioAtapiDeviceControl_srb;
							SendSrbSynchronous_Buffer = 0;
							SendSrbSynchronous_BufferLength = 0;
							SendSrbSynchronous_irp = 0;
							SendSrbSynchronous_retres19 = -1073741670;
							TRACER_RV = (SendSrbSynchronous_retres19);
							CdAudioAtapiDeviceControl_status = TRACER_RV;
							TRACER_RV = nondet();
{
							int IofCompleteRequest_Irp ; int IofCompleteRequest_PriorityBoost ;
							IofCompleteRequest_Irp = CdAudioAtapiDeviceControl_Irp;
							IofCompleteRequest_PriorityBoost = 0;
							safety = safety + (s - NP);
							s = DC;
							;
							TRACER_RV = nondet();
							CdAudioAtapiDeviceControl_retres18 = CdAudioAtapiDeviceControl_status;
							CdAudioAtapiDeviceControl_TRACER_returning = 1;
							TRACER_RV = (CdAudioAtapiDeviceControl_retres18);
							CdAudioDeviceControl_status = TRACER_RV;
							TRACER_RV = nondet();
							goto L10;
}
}
						}
						else if(CdAudioAtapiDeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode < CdAudioAtapiDeviceControl_CIL___Tmp17) {
L70:;
{
 int CdAudioSendToNextDriver_Irp__CurrentLocation ;
int CdAudioSendToNextDriver_Irp__Tail__Overlay__CurrentStackLocation ;
int CdAudioSendToNextDriver_deviceExtension__TargetDeviceObject ;
int CdAudioSendToNextDriver_tmp ;
							int CdAudioSendToNextDriver_DeviceObject ; int CdAudioSendToNextDriver_Irp ;
							CdAudioSendToNextDriver_DeviceObject = CdAudioAtapiDeviceControl_DeviceObject;
							CdAudioSendToNextDriver_Irp = CdAudioAtapiDeviceControl_Irp;
							safety = safety + (s - NP);
							s = SKIP1;
							CdAudioSendToNextDriver_Irp__CurrentLocation = CdAudioSendToNextDriver_Irp__CurrentLocation + 1;
							CdAudioSendToNextDriver_Irp__Tail__Overlay__CurrentStackLocation = CdAudioSendToNextDriver_Irp__Tail__Overlay__CurrentStackLocation + 1;
{
 int IofCallDriver_Irp__PendingReturned ;
int IofCallDriver_returnVal2 ;
int IofCallDriver_compRetStatus ;
int IofCallDriver_lcontext ;
int IofCallDriver_CIL___Tmp8 ;
int IofCallDriver_tmp_ndt_5 ;
int IofCallDriver_tmp_ndt_6 ;
							int IofCallDriver_DeviceObject ; int IofCallDriver_Irp ;
							IofCallDriver_DeviceObject = CdAudioSendToNextDriver_deviceExtension__TargetDeviceObject;
							IofCallDriver_Irp = CdAudioSendToNextDriver_Irp;
							if(IofCallDriver_Irp__PendingReturned > 0) {
L71:;
								IofCallDriver_returnVal2 = 259;
L72:;
								safety = safety + (s - SKIP1);
								s = SKIP2;
								lowerDriverReturn = IofCallDriver_returnVal2;
								TRACER_RV = (IofCallDriver_returnVal2);
								CdAudioSendToNextDriver_tmp = TRACER_RV;
								TRACER_RV = nondet();
								TRACER_RV = (CdAudioSendToNextDriver_tmp);
								CdAudioAtapiDeviceControl_tmp = TRACER_RV;
								TRACER_RV = nondet();
								CdAudioAtapiDeviceControl_retres18 = CdAudioAtapiDeviceControl_tmp;
								CdAudioAtapiDeviceControl_TRACER_returning = 1;
								TRACER_RV = (CdAudioAtapiDeviceControl_retres18);
								CdAudioDeviceControl_status = TRACER_RV;
								TRACER_RV = nondet();
								goto L35;
							}
							else if(IofCallDriver_Irp__PendingReturned < 0) {
								goto L71;
							}
							else {
								IofCallDriver_tmp_ndt_5 = __VERIFIER_nondet_int();
								if(IofCallDriver_tmp_ndt_5 >= 0 && IofCallDriver_tmp_ndt_5 <= 0) {
									IofCallDriver_returnVal2 = 0;
									safety = safety + (s - SKIP1);
									s = SKIP2;
									lowerDriverReturn = IofCallDriver_returnVal2;
									TRACER_RV = (IofCallDriver_returnVal2);
									CdAudioSendToNextDriver_tmp = TRACER_RV;
									TRACER_RV = nondet();
									TRACER_RV = (CdAudioSendToNextDriver_tmp);
									CdAudioAtapiDeviceControl_tmp = TRACER_RV;
									TRACER_RV = nondet();
									CdAudioAtapiDeviceControl_retres18 = CdAudioAtapiDeviceControl_tmp;
									CdAudioAtapiDeviceControl_TRACER_returning = 1;
									TRACER_RV = (CdAudioAtapiDeviceControl_retres18);
									CdAudioDeviceControl_status = TRACER_RV;
									TRACER_RV = nondet();
									goto L39;
								}
								else if(IofCallDriver_tmp_ndt_5 < 0) {
L73:;
									IofCallDriver_tmp_ndt_6 = __VERIFIER_nondet_int();
									if(IofCallDriver_tmp_ndt_6 >= 1 && IofCallDriver_tmp_ndt_6 <= 1) {
										IofCallDriver_returnVal2 = -1073741823;
										safety = safety + (s - SKIP1);
										s = SKIP2;
										lowerDriverReturn = IofCallDriver_returnVal2;
										TRACER_RV = (IofCallDriver_returnVal2);
										CdAudioSendToNextDriver_tmp = TRACER_RV;
										TRACER_RV = nondet();
										TRACER_RV = (CdAudioSendToNextDriver_tmp);
										CdAudioAtapiDeviceControl_tmp = TRACER_RV;
										TRACER_RV = nondet();
										CdAudioAtapiDeviceControl_retres18 = CdAudioAtapiDeviceControl_tmp;
										CdAudioAtapiDeviceControl_TRACER_returning = 1;
										TRACER_RV = (CdAudioAtapiDeviceControl_retres18);
										CdAudioDeviceControl_status = TRACER_RV;
										TRACER_RV = nondet();
										goto L43;
									}
									else if(IofCallDriver_tmp_ndt_6 < 1) {
L74:;
										IofCallDriver_returnVal2 = 259;
										goto L72;
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
}
						}
						else {
							goto L70;
						}
}
					}
					else if(CdAudioDeviceControl_deviceExtension__Active < 1) {
L75:;
L76:;
{
 int CdAudioSendToNextDriver_Irp__CurrentLocation ;
int CdAudioSendToNextDriver_Irp__Tail__Overlay__CurrentStackLocation ;
int CdAudioSendToNextDriver_deviceExtension__TargetDeviceObject ;
int CdAudioSendToNextDriver_tmp ;
						int CdAudioSendToNextDriver_DeviceObject ; int CdAudioSendToNextDriver_Irp ;
						CdAudioSendToNextDriver_DeviceObject = CdAudioDeviceControl_DeviceObject;
						CdAudioSendToNextDriver_Irp = CdAudioDeviceControl_Irp;
						safety = safety + (s - NP);
						s = SKIP1;
						CdAudioSendToNextDriver_Irp__CurrentLocation = CdAudioSendToNextDriver_Irp__CurrentLocation + 1;
						CdAudioSendToNextDriver_Irp__Tail__Overlay__CurrentStackLocation = CdAudioSendToNextDriver_Irp__Tail__Overlay__CurrentStackLocation + 1;
{
 int IofCallDriver_Irp__PendingReturned ;
int IofCallDriver_returnVal2 ;
int IofCallDriver_compRetStatus ;
int IofCallDriver_lcontext ;
int IofCallDriver_CIL___Tmp8 ;
int IofCallDriver_tmp_ndt_5 ;
int IofCallDriver_tmp_ndt_6 ;
						int IofCallDriver_DeviceObject ; int IofCallDriver_Irp ;
						IofCallDriver_DeviceObject = CdAudioSendToNextDriver_deviceExtension__TargetDeviceObject;
						IofCallDriver_Irp = CdAudioSendToNextDriver_Irp;
						if(IofCallDriver_Irp__PendingReturned > 0) {
L77:;
							IofCallDriver_returnVal2 = 259;
L78:;
							safety = safety + (s - SKIP1);
							s = SKIP2;
							lowerDriverReturn = IofCallDriver_returnVal2;
							TRACER_RV = (IofCallDriver_returnVal2);
							CdAudioSendToNextDriver_tmp = TRACER_RV;
							TRACER_RV = nondet();
							TRACER_RV = (CdAudioSendToNextDriver_tmp);
							CdAudioDeviceControl_status = TRACER_RV;
							TRACER_RV = nondet();
							goto L35;
						}
						else if(IofCallDriver_Irp__PendingReturned < 0) {
							goto L77;
						}
						else {
							IofCallDriver_tmp_ndt_5 = __VERIFIER_nondet_int();
							if(IofCallDriver_tmp_ndt_5 >= 0 && IofCallDriver_tmp_ndt_5 <= 0) {
								IofCallDriver_returnVal2 = 0;
								safety = safety + (s - SKIP1);
								s = SKIP2;
								lowerDriverReturn = IofCallDriver_returnVal2;
								TRACER_RV = (IofCallDriver_returnVal2);
								CdAudioSendToNextDriver_tmp = TRACER_RV;
								TRACER_RV = nondet();
								TRACER_RV = (CdAudioSendToNextDriver_tmp);
								CdAudioDeviceControl_status = TRACER_RV;
								TRACER_RV = nondet();
								goto L39;
							}
							else if(IofCallDriver_tmp_ndt_5 < 0) {
L79:;
								IofCallDriver_tmp_ndt_6 = __VERIFIER_nondet_int();
								if(IofCallDriver_tmp_ndt_6 >= 1 && IofCallDriver_tmp_ndt_6 <= 1) {
									IofCallDriver_returnVal2 = -1073741823;
									safety = safety + (s - SKIP1);
									s = SKIP2;
									lowerDriverReturn = IofCallDriver_returnVal2;
									TRACER_RV = (IofCallDriver_returnVal2);
									CdAudioSendToNextDriver_tmp = TRACER_RV;
									TRACER_RV = nondet();
									TRACER_RV = (CdAudioSendToNextDriver_tmp);
									CdAudioDeviceControl_status = TRACER_RV;
									TRACER_RV = nondet();
									goto L43;
								}
								else if(IofCallDriver_tmp_ndt_6 < 1) {
L80:;
									IofCallDriver_returnVal2 = 259;
									goto L78;
								}
								else {
									goto L80;
								}
							}
							else {
								goto L79;
							}
						}
}
}
					}
					else {
						goto L75;
					}
				}
				else {
					if(CdAudioDeviceControl_deviceExtension__Active >= 3 && CdAudioDeviceControl_deviceExtension__Active <= 3) {
{
 int CdAudio435DeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode ;
int CdAudio435DeviceControl_currentIrpStack__Parameters__DeviceIoControl__OutputBufferLength ;
int CdAudio435DeviceControl_currentIrpStack__Parameters__DeviceIoControl__InputBufferLength ;
int CdAudio435DeviceControl_TrackData__0 ;
int CdAudio435DeviceControl_Irp__IoStatus__Information ;
int CdAudio435DeviceControl_srb__TimeOutValue ;
int CdAudio435DeviceControl_srb__CdbLength ;
int CdAudio435DeviceControl_sizeof__CDROM_TOC ;
int CdAudio435DeviceControl_cdaudioDataOut__LastTrack ;
int CdAudio435DeviceControl_cdaudioDataOut__FirstTrack ;
int CdAudio435DeviceControl_sizeof__CDROM_PLAY_AUDIO_MSF ;
int CdAudio435DeviceControl_sizeof__CDROM_SEEK_AUDIO_MSF ;
int CdAudio435DeviceControl_deviceExtension__Paused ;
int CdAudio435DeviceControl_deviceExtension__PlayActive ;
int CdAudio435DeviceControl_sizeof__SUB_Q_CHANNEL_DATA ;
int CdAudio435DeviceControl_sizeof__SUB_Q_CURRENT_POSITION ;
int CdAudio435DeviceControl_deviceExtension ;
int CdAudio435DeviceControl_srb ;
int CdAudio435DeviceControl_status ;
int CdAudio435DeviceControl_i ;
int CdAudio435DeviceControl_bytesTransfered ;
int CdAudio435DeviceControl_Toc ;
int CdAudio435DeviceControl_tmp ;
int CdAudio435DeviceControl_tracksToReturn ;
int CdAudio435DeviceControl_tracksOnCd ;
int CdAudio435DeviceControl_tracksInBuffer ;
int CdAudio435DeviceControl_SubQPtr ;
int CdAudio435DeviceControl_userPtr__Format ;
int CdAudio435DeviceControl_SubQPtr___0 ;
int CdAudio435DeviceControl_tmp___0 ;
int CdAudio435DeviceControl_tmp___1 ;
int CdAudio435DeviceControl_tmp___2 ;
int CdAudio435DeviceControl_CIL___Tmp35 ;
int CdAudio435DeviceControl_CIL___Tmp36 ;
int CdAudio435DeviceControl_CIL___Tmp37 ;
int CdAudio435DeviceControl_CIL___Tmp38 ;
int CdAudio435DeviceControl_CIL___Tmp39 ;
int CdAudio435DeviceControl_CIL___Tmp40 ;
int CdAudio435DeviceControl_CIL___Tmp41 ;
int CdAudio435DeviceControl_CIL___Tmp42 ;
int CdAudio435DeviceControl_CIL___Tmp43 ;
int CdAudio435DeviceControl_CIL___Tmp44 ;
int CdAudio435DeviceControl_CIL___Tmp45 ;
int CdAudio435DeviceControl_CIL___Tmp46 ;
int CdAudio435DeviceControl_CIL___Tmp47 ;
int CdAudio435DeviceControl_CIL___Tmp48 ;
int CdAudio435DeviceControl_CIL___Tmp49 ;
int CdAudio435DeviceControl_CIL___Tmp50 ;
int CdAudio435DeviceControl_CIL___Tmp51 ;
int CdAudio435DeviceControl_CIL___Tmp52 ;
int CdAudio435DeviceControl_CIL___Tmp53 ;
int CdAudio435DeviceControl_CIL___Tmp54 ;
int CdAudio435DeviceControl_CIL___Tmp55 ;
int CdAudio435DeviceControl_CIL___Tmp56 ;
int CdAudio435DeviceControl_CIL___Tmp57 ;
int CdAudio435DeviceControl_CIL___Tmp58 ;
int CdAudio435DeviceControl_CIL___Tmp59 ;
int CdAudio435DeviceControl_CIL___Tmp60 ;
int CdAudio435DeviceControl_CIL___Tmp61 ;
int CdAudio435DeviceControl_CIL___Tmp62 ;
int CdAudio435DeviceControl_CIL___Tmp63 ;
int CdAudio435DeviceControl_CIL___Tmp64 ;
int CdAudio435DeviceControl_CIL___Tmp65 ;
int CdAudio435DeviceControl_CIL___Tmp66 ;
int CdAudio435DeviceControl_CIL___Tmp67 ;
int CdAudio435DeviceControl_CIL___Tmp68 ;
int CdAudio435DeviceControl_CIL___Tmp69 ;
int CdAudio435DeviceControl_CIL___Tmp70 ;
int CdAudio435DeviceControl_CIL___Tmp71 ;
int CdAudio435DeviceControl_CIL___Tmp72 ;
int CdAudio435DeviceControl_CIL___Tmp73 ;
int CdAudio435DeviceControl_CIL___Tmp74 ;
int CdAudio435DeviceControl_CIL___Tmp75 ;
int CdAudio435DeviceControl_CIL___Tmp76 ;
int CdAudio435DeviceControl_CIL___Tmp77 ;
int CdAudio435DeviceControl_CIL___Tmp78 ;
int CdAudio435DeviceControl_CIL___Tmp79 ;
int CdAudio435DeviceControl_CIL___Tmp80 ;
int CdAudio435DeviceControl_CIL___Tmp81 ;
int CdAudio435DeviceControl_CIL___Tmp82 ;
int CdAudio435DeviceControl_CIL___Tmp83 ;
int CdAudio435DeviceControl_CIL___Tmp84 ;
int CdAudio435DeviceControl_CIL___Tmp85 ;
int CdAudio435DeviceControl_CIL___Tmp86 ;
int CdAudio435DeviceControl_CIL___Tmp87 ;
int CdAudio435DeviceControl_CIL___Tmp88 ;
int CdAudio435DeviceControl_CIL___Tmp89 ;
int CdAudio435DeviceControl_CIL___Tmp90 ;
int CdAudio435DeviceControl_CIL___Tmp91 ;
int CdAudio435DeviceControl_CIL___Tmp92 ;
int CdAudio435DeviceControl_CIL___Tmp93 ;
int CdAudio435DeviceControl_CIL___Tmp95 ;
int CdAudio435DeviceControl_CIL___Tmp96 ;
int CdAudio435DeviceControl_CIL___Tmp97 ;
int CdAudio435DeviceControl_CIL___Tmp98 ;
int CdAudio435DeviceControl_CIL___Tmp99 ;
int CdAudio435DeviceControl_CIL___Tmp100 ;
int CdAudio435DeviceControl_CIL___Tmp101 ;
int CdAudio435DeviceControl_CIL___Tmp102 ;
int CdAudio435DeviceControl_CIL___Tmp103 ;
int CdAudio435DeviceControl_CIL___Tmp104 ;
int CdAudio435DeviceControl_CIL___Tmp105 ;
int CdAudio435DeviceControl_CIL___Tmp106 ;
int CdAudio435DeviceControl_CIL___Tmp107 ;
int CdAudio435DeviceControl_CIL___Tmp109 ;
int CdAudio435DeviceControl_CIL___Tmp111 ;
int CdAudio435DeviceControl_CIL___Tmp112 ;
int CdAudio435DeviceControl_CIL___Tmp113 ;
int CdAudio435DeviceControl_CIL___Tmp114 ;
int CdAudio435DeviceControl_CIL___Tmp115 ;
int CdAudio435DeviceControl_CIL___Tmp116 ;
int CdAudio435DeviceControl_retres114 ;
int CdAudio435DeviceControl_TRACER_returning ;
						int CdAudio435DeviceControl_DeviceObject ; int CdAudio435DeviceControl_Irp ;
						CdAudio435DeviceControl_DeviceObject = CdAudioDeviceControl_DeviceObject;
						CdAudio435DeviceControl_Irp = CdAudioDeviceControl_Irp;
						CdAudio435DeviceControl_TRACER_returning = 0;
						CdAudio435DeviceControl_CIL___Tmp35 = 16384;
						CdAudio435DeviceControl_CIL___Tmp36 = 131072;
						CdAudio435DeviceControl_CIL___Tmp37 = 147456;
						if(CdAudio435DeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode >= CdAudio435DeviceControl_CIL___Tmp37 && CdAudio435DeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode <= CdAudio435DeviceControl_CIL___Tmp37) {
							if(CdAudio435DeviceControl_currentIrpStack__Parameters__DeviceIoControl__OutputBufferLength < CdAudio435DeviceControl_TrackData__0) {
								CdAudio435DeviceControl_status = -1073741789;
								CdAudio435DeviceControl_Irp__IoStatus__Information = 0;
L81:;
{
								int IofCompleteRequest_Irp ; int IofCompleteRequest_PriorityBoost ;
								IofCompleteRequest_Irp = CdAudio435DeviceControl_Irp;
								IofCompleteRequest_PriorityBoost = 0;
								safety = safety + (s - NP);
								s = DC;
								;
								TRACER_RV = nondet();
								CdAudio435DeviceControl_retres114 = CdAudio435DeviceControl_status;
								TRACER_RV = (CdAudio435DeviceControl_retres114);
								CdAudioDeviceControl_status = TRACER_RV;
								TRACER_RV = nondet();
								goto L4;
}
							}
							else {
{
 int CdAudioIsPlayActive_deviceExtension__PlayActive ;
int CdAudioIsPlayActive_ioStatus__Status ;
int CdAudioIsPlayActive_currentBuffer__Header__AudioStatus ;
int CdAudioIsPlayActive_irp_CdAudioIsPlayActive ;
int CdAudioIsPlayActive_event ;
int CdAudioIsPlayActive_status ;
int CdAudioIsPlayActive_currentBuffer ;
int CdAudioIsPlayActive_returnValue ;
int CdAudioIsPlayActive_CIL___Tmp10 ;
int CdAudioIsPlayActive_retres11 ;
								int CdAudioIsPlayActive_DeviceObject ;
								CdAudioIsPlayActive_DeviceObject = CdAudio435DeviceControl_DeviceObject;
								if(CdAudioIsPlayActive_deviceExtension__PlayActive >= 0 && CdAudioIsPlayActive_deviceExtension__PlayActive <= 0) {
									CdAudioIsPlayActive_retres11 = 0;
L82:;
									TRACER_RV = (CdAudioIsPlayActive_retres11);
									CdAudio435DeviceControl_tmp = TRACER_RV;
									TRACER_RV = nondet();
									if(CdAudio435DeviceControl_Toc >= 0 && CdAudio435DeviceControl_Toc <= 0) {
										CdAudio435DeviceControl_status = -1073741670;
										CdAudio435DeviceControl_Irp__IoStatus__Information = 0;
										CdAudio435DeviceControl_CIL___Tmp93 = CdAudio435DeviceControl_status;
{
										int IofCompleteRequest_Irp ; int IofCompleteRequest_PriorityBoost ;
										IofCompleteRequest_Irp = CdAudio435DeviceControl_Irp;
										IofCompleteRequest_PriorityBoost = 0;
										safety = safety + (s - NP);
										s = DC;
										;
										TRACER_RV = nondet();
										CdAudio435DeviceControl_retres114 = CdAudio435DeviceControl_status;
										CdAudio435DeviceControl_TRACER_returning = 1;
L83:;
L84:;
L85:;
										TRACER_RV = (CdAudio435DeviceControl_retres114);
										CdAudioDeviceControl_status = TRACER_RV;
										TRACER_RV = nondet();
										goto L10;
}
									}
									else if(CdAudio435DeviceControl_Toc < 0) {
{
 int SendSrbSynchronous_ioStatus__Status ;
int SendSrbSynchronous_ioctl ;
int SendSrbSynchronous_event ;
int SendSrbSynchronous_irp ;
int SendSrbSynchronous_status ;
int SendSrbSynchronous_CIL___Tmp10 ;
int SendSrbSynchronous_CIL___Tmp11 ;
int SendSrbSynchronous_CIL___Tmp12 ;
int SendSrbSynchronous_CIL___Tmp13 ;
int SendSrbSynchronous_CIL___Tmp14 ;
int SendSrbSynchronous_CIL___Tmp15 ;
int SendSrbSynchronous_CIL___Tmp16 ;
int SendSrbSynchronous_CIL___Tmp17 ;
int SendSrbSynchronous_CIL___Tmp18 ;
int SendSrbSynchronous_retres19 ;
										int SendSrbSynchronous_Extension ; int SendSrbSynchronous_Srb ; int SendSrbSynchronous_Buffer ; int SendSrbSynchronous_BufferLength ;
										SendSrbSynchronous_Extension = CdAudio435DeviceControl_deviceExtension;
										SendSrbSynchronous_Srb = CdAudio435DeviceControl_srb;
										SendSrbSynchronous_Buffer = CdAudio435DeviceControl_Toc;
										SendSrbSynchronous_BufferLength = CdAudio435DeviceControl_sizeof__CDROM_TOC;
										SendSrbSynchronous_irp = 0;
										SendSrbSynchronous_retres19 = -1073741670;
										TRACER_RV = (SendSrbSynchronous_retres19);
										CdAudio435DeviceControl_status = TRACER_RV;
										TRACER_RV = nondet();
L86:;
										CdAudio435DeviceControl_CIL___Tmp95 = CdAudio435DeviceControl_status;
										CdAudio435DeviceControl_CIL___Tmp96 = CdAudio435DeviceControl_status;
{
										int IofCompleteRequest_Irp ; int IofCompleteRequest_PriorityBoost ;
										IofCompleteRequest_Irp = CdAudio435DeviceControl_Irp;
										IofCompleteRequest_PriorityBoost = 0;
										safety = safety + (s - NP);
										s = DC;
										;
										TRACER_RV = nondet();
										CdAudio435DeviceControl_retres114 = CdAudio435DeviceControl_status;
										CdAudio435DeviceControl_TRACER_returning = 1;
										goto L83;
}
}
									}
									else {
{
 int SendSrbSynchronous_ioStatus__Status ;
int SendSrbSynchronous_ioctl ;
int SendSrbSynchronous_event ;
int SendSrbSynchronous_irp ;
int SendSrbSynchronous_status ;
int SendSrbSynchronous_CIL___Tmp10 ;
int SendSrbSynchronous_CIL___Tmp11 ;
int SendSrbSynchronous_CIL___Tmp12 ;
int SendSrbSynchronous_CIL___Tmp13 ;
int SendSrbSynchronous_CIL___Tmp14 ;
int SendSrbSynchronous_CIL___Tmp15 ;
int SendSrbSynchronous_CIL___Tmp16 ;
int SendSrbSynchronous_CIL___Tmp17 ;
int SendSrbSynchronous_CIL___Tmp18 ;
int SendSrbSynchronous_retres19 ;
										int SendSrbSynchronous_Extension ; int SendSrbSynchronous_Srb ; int SendSrbSynchronous_Buffer ; int SendSrbSynchronous_BufferLength ;
										SendSrbSynchronous_Extension = CdAudio435DeviceControl_deviceExtension;
										SendSrbSynchronous_Srb = CdAudio435DeviceControl_srb;
										SendSrbSynchronous_Buffer = CdAudio435DeviceControl_Toc;
										SendSrbSynchronous_BufferLength = CdAudio435DeviceControl_sizeof__CDROM_TOC;
										SendSrbSynchronous_irp = 0;
										SendSrbSynchronous_retres19 = -1073741670;
										TRACER_RV = (SendSrbSynchronous_retres19);
										CdAudio435DeviceControl_status = TRACER_RV;
										TRACER_RV = nondet();
										goto L86;
}
									}
								}
								else if(CdAudioIsPlayActive_deviceExtension__PlayActive < 0) {
L87:;
									if(CdAudioIsPlayActive_currentBuffer >= 0 && CdAudioIsPlayActive_currentBuffer <= 0) {
										CdAudioIsPlayActive_retres11 = 0;
										goto L82;
									}
									else if(CdAudioIsPlayActive_currentBuffer < 0) {
L88:;
										if(CdAudioIsPlayActive_irp_CdAudioIsPlayActive >= 0 && CdAudioIsPlayActive_irp_CdAudioIsPlayActive <= 0) {
											CdAudioIsPlayActive_retres11 = 0;
											goto L82;
										}
										else if(CdAudioIsPlayActive_irp_CdAudioIsPlayActive < 0) {
L89:;
											CdAudioIsPlayActive_CIL___Tmp10 = CdAudioIsPlayActive_status;
											if(CdAudioIsPlayActive_CIL___Tmp10 >= 259 && CdAudioIsPlayActive_CIL___Tmp10 <= 259) {
{
 int KeWaitForSingleObject_tmp_ndt_7 ;
int KeWaitForSingleObject_retres7 ;
												int KeWaitForSingleObject_Object ; int KeWaitForSingleObject_WaitReason ; int KeWaitForSingleObject_WaitMode ; int KeWaitForSingleObject_Alertable ; int KeWaitForSingleObject_Timeout ;
												KeWaitForSingleObject_Object = CdAudioIsPlayActive_event;
												KeWaitForSingleObject_WaitReason = Suspended;
												KeWaitForSingleObject_WaitMode = KernelMode;
												KeWaitForSingleObject_Alertable = 0;
												KeWaitForSingleObject_Timeout = 0;
L90:;
												;
												TRACER_RV = nondet();
												CdAudioIsPlayActive_status = CdAudioIsPlayActive_ioStatus__Status;
L91:;
												if(CdAudioIsPlayActive_status < 0) {
													CdAudioIsPlayActive_retres11 = 0;
													goto L82;
												}
												else {
													if(CdAudioIsPlayActive_currentBuffer__Header__AudioStatus >= 17 && CdAudioIsPlayActive_currentBuffer__Header__AudioStatus <= 17) {
														CdAudioIsPlayActive_returnValue = 1;
														CdAudioIsPlayActive_retres11 = CdAudioIsPlayActive_returnValue;
														TRACER_RV = (CdAudioIsPlayActive_retres11);
														CdAudio435DeviceControl_tmp = TRACER_RV;
														TRACER_RV = nondet();
														CdAudio435DeviceControl_status = -2147483631;
														CdAudio435DeviceControl_Irp__IoStatus__Information = 0;
														CdAudio435DeviceControl_CIL___Tmp116 = CdAudio435DeviceControl_status;
{
														int IofCompleteRequest_Irp ; int IofCompleteRequest_PriorityBoost ;
														IofCompleteRequest_Irp = CdAudio435DeviceControl_Irp;
														IofCompleteRequest_PriorityBoost = 0;
														safety = safety + (s - NP);
														s = DC;
														;
														TRACER_RV = nondet();
														CdAudio435DeviceControl_retres114 = CdAudio435DeviceControl_status;
														TRACER_RV = (CdAudio435DeviceControl_retres114);
														CdAudioDeviceControl_status = TRACER_RV;
														TRACER_RV = nondet();
														goto L19;
}
													}
													else if(CdAudioIsPlayActive_currentBuffer__Header__AudioStatus < 17) {
L92:;
														CdAudioIsPlayActive_returnValue = 0;
														CdAudioIsPlayActive_deviceExtension__PlayActive = 0;
														CdAudioIsPlayActive_retres11 = CdAudioIsPlayActive_returnValue;
														goto L82;
													}
													else {
														goto L92;
													}
												}
}
											}
											else if(CdAudioIsPlayActive_CIL___Tmp10 < 259) {
												goto L91;
											}
											else {
												goto L91;
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
								else {
									goto L87;
								}
}
							}
						}
						else if(CdAudio435DeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode < CdAudio435DeviceControl_CIL___Tmp37) {
							CdAudio435DeviceControl_CIL___Tmp38 = 24;
							CdAudio435DeviceControl_CIL___Tmp39 = 16384;
							CdAudio435DeviceControl_CIL___Tmp40 = 131072;
							CdAudio435DeviceControl_CIL___Tmp41 = 147456;
							CdAudio435DeviceControl_CIL___Tmp42 = 147480;
							CdAudio435DeviceControl_CIL___Tmp43 = 8;
							CdAudio435DeviceControl_CIL___Tmp44 = 16384;
							CdAudio435DeviceControl_CIL___Tmp45 = 131072;
							CdAudio435DeviceControl_CIL___Tmp46 = 147456;
							CdAudio435DeviceControl_CIL___Tmp47 = 147464;
							CdAudio435DeviceControl_CIL___Tmp48 = 4;
							CdAudio435DeviceControl_CIL___Tmp49 = 16384;
							CdAudio435DeviceControl_CIL___Tmp50 = 131072;
							CdAudio435DeviceControl_CIL___Tmp51 = 147456;
							CdAudio435DeviceControl_CIL___Tmp52 = 147460;
							CdAudio435DeviceControl_CIL___Tmp53 = 12;
							CdAudio435DeviceControl_CIL___Tmp54 = 16384;
							CdAudio435DeviceControl_CIL___Tmp55 = 131072;
							CdAudio435DeviceControl_CIL___Tmp56 = 147456;
							CdAudio435DeviceControl_CIL___Tmp57 = 147468;
							CdAudio435DeviceControl_CIL___Tmp58 = 16;
							CdAudio435DeviceControl_CIL___Tmp59 = 16384;
							CdAudio435DeviceControl_CIL___Tmp60 = 131072;
							CdAudio435DeviceControl_CIL___Tmp61 = 147456;
							CdAudio435DeviceControl_CIL___Tmp62 = 147472;
							CdAudio435DeviceControl_CIL___Tmp63 = 44;
							CdAudio435DeviceControl_CIL___Tmp64 = 16384;
							CdAudio435DeviceControl_CIL___Tmp65 = 131072;
							CdAudio435DeviceControl_CIL___Tmp66 = 147456;
							CdAudio435DeviceControl_CIL___Tmp67 = 147500;
							CdAudio435DeviceControl_CIL___Tmp68 = 2056;
							CdAudio435DeviceControl_CIL___Tmp69 = 16384;
							CdAudio435DeviceControl_CIL___Tmp70 = 131072;
							CdAudio435DeviceControl_CIL___Tmp71 = 147456;
							CdAudio435DeviceControl_CIL___Tmp72 = 149512;
							CdAudio435DeviceControl_CIL___Tmp73 = 52;
							CdAudio435DeviceControl_CIL___Tmp74 = 16384;
							CdAudio435DeviceControl_CIL___Tmp75 = 131072;
							CdAudio435DeviceControl_CIL___Tmp76 = 147456;
							CdAudio435DeviceControl_CIL___Tmp77 = 147508;
							CdAudio435DeviceControl_CIL___Tmp78 = 20;
							CdAudio435DeviceControl_CIL___Tmp79 = 16384;
							CdAudio435DeviceControl_CIL___Tmp80 = 131072;
							CdAudio435DeviceControl_CIL___Tmp81 = 147456;
							CdAudio435DeviceControl_CIL___Tmp82 = 147476;
							CdAudio435DeviceControl_CIL___Tmp83 = 40;
							CdAudio435DeviceControl_CIL___Tmp84 = 16384;
							CdAudio435DeviceControl_CIL___Tmp85 = 131072;
							CdAudio435DeviceControl_CIL___Tmp86 = 147456;
							CdAudio435DeviceControl_CIL___Tmp87 = 147496;
							CdAudio435DeviceControl_CIL___Tmp88 = 2048;
							CdAudio435DeviceControl_CIL___Tmp89 = 16384;
							CdAudio435DeviceControl_CIL___Tmp90 = 131072;
							CdAudio435DeviceControl_CIL___Tmp91 = 147456;
							CdAudio435DeviceControl_CIL___Tmp92 = 149504;
L93:;
{
 int CdAudioSendToNextDriver_Irp__CurrentLocation ;
int CdAudioSendToNextDriver_Irp__Tail__Overlay__CurrentStackLocation ;
int CdAudioSendToNextDriver_deviceExtension__TargetDeviceObject ;
int CdAudioSendToNextDriver_tmp ;
							int CdAudioSendToNextDriver_DeviceObject ; int CdAudioSendToNextDriver_Irp ;
							CdAudioSendToNextDriver_DeviceObject = CdAudio435DeviceControl_DeviceObject;
							CdAudioSendToNextDriver_Irp = CdAudio435DeviceControl_Irp;
							safety = safety + (s - NP);
							s = SKIP1;
							CdAudioSendToNextDriver_Irp__CurrentLocation = CdAudioSendToNextDriver_Irp__CurrentLocation + 1;
							CdAudioSendToNextDriver_Irp__Tail__Overlay__CurrentStackLocation = CdAudioSendToNextDriver_Irp__Tail__Overlay__CurrentStackLocation + 1;
{
 int IofCallDriver_Irp__PendingReturned ;
int IofCallDriver_returnVal2 ;
int IofCallDriver_compRetStatus ;
int IofCallDriver_lcontext ;
int IofCallDriver_CIL___Tmp8 ;
int IofCallDriver_tmp_ndt_5 ;
int IofCallDriver_tmp_ndt_6 ;
							int IofCallDriver_DeviceObject ; int IofCallDriver_Irp ;
							IofCallDriver_DeviceObject = CdAudioSendToNextDriver_deviceExtension__TargetDeviceObject;
							IofCallDriver_Irp = CdAudioSendToNextDriver_Irp;
							if(IofCallDriver_Irp__PendingReturned > 0) {
L94:;
								IofCallDriver_returnVal2 = 259;
L95:;
								safety = safety + (s - SKIP1);
								s = SKIP2;
								lowerDriverReturn = IofCallDriver_returnVal2;
								TRACER_RV = (IofCallDriver_returnVal2);
								CdAudioSendToNextDriver_tmp = TRACER_RV;
								TRACER_RV = nondet();
								TRACER_RV = (CdAudioSendToNextDriver_tmp);
								CdAudio435DeviceControl_tmp___2 = TRACER_RV;
								TRACER_RV = nondet();
								CdAudio435DeviceControl_retres114 = CdAudio435DeviceControl_tmp___2;
								CdAudio435DeviceControl_TRACER_returning = 1;
								TRACER_RV = (CdAudio435DeviceControl_retres114);
								CdAudioDeviceControl_status = TRACER_RV;
								TRACER_RV = nondet();
L96:;
								goto L35;
							}
							else if(IofCallDriver_Irp__PendingReturned < 0) {
								goto L94;
							}
							else {
								IofCallDriver_tmp_ndt_5 = __VERIFIER_nondet_int();
								if(IofCallDriver_tmp_ndt_5 >= 0 && IofCallDriver_tmp_ndt_5 <= 0) {
									IofCallDriver_returnVal2 = 0;
									safety = safety + (s - SKIP1);
									s = SKIP2;
									lowerDriverReturn = IofCallDriver_returnVal2;
									TRACER_RV = (IofCallDriver_returnVal2);
									CdAudioSendToNextDriver_tmp = TRACER_RV;
									TRACER_RV = nondet();
									TRACER_RV = (CdAudioSendToNextDriver_tmp);
									CdAudio435DeviceControl_tmp___2 = TRACER_RV;
									TRACER_RV = nondet();
									CdAudio435DeviceControl_retres114 = CdAudio435DeviceControl_tmp___2;
									CdAudio435DeviceControl_TRACER_returning = 1;
									TRACER_RV = (CdAudio435DeviceControl_retres114);
									CdAudioDeviceControl_status = TRACER_RV;
									TRACER_RV = nondet();
L97:;
									goto L39;
								}
								else if(IofCallDriver_tmp_ndt_5 < 0) {
L98:;
									IofCallDriver_tmp_ndt_6 = __VERIFIER_nondet_int();
									if(IofCallDriver_tmp_ndt_6 >= 1 && IofCallDriver_tmp_ndt_6 <= 1) {
										IofCallDriver_returnVal2 = -1073741823;
										safety = safety + (s - SKIP1);
										s = SKIP2;
										lowerDriverReturn = IofCallDriver_returnVal2;
										TRACER_RV = (IofCallDriver_returnVal2);
										CdAudioSendToNextDriver_tmp = TRACER_RV;
										TRACER_RV = nondet();
										TRACER_RV = (CdAudioSendToNextDriver_tmp);
										CdAudio435DeviceControl_tmp___2 = TRACER_RV;
										TRACER_RV = nondet();
										CdAudio435DeviceControl_retres114 = CdAudio435DeviceControl_tmp___2;
										CdAudio435DeviceControl_TRACER_returning = 1;
										TRACER_RV = (CdAudio435DeviceControl_retres114);
										CdAudioDeviceControl_status = TRACER_RV;
										TRACER_RV = nondet();
L99:;
										goto L43;
									}
									else if(IofCallDriver_tmp_ndt_6 < 1) {
L100:;
										IofCallDriver_returnVal2 = 259;
										goto L95;
									}
									else {
										goto L100;
									}
								}
								else {
									goto L98;
								}
							}
}
}
						}
						else {
							CdAudio435DeviceControl_CIL___Tmp38 = 24;
							CdAudio435DeviceControl_CIL___Tmp39 = 16384;
							CdAudio435DeviceControl_CIL___Tmp40 = 131072;
							CdAudio435DeviceControl_CIL___Tmp41 = 147456;
							CdAudio435DeviceControl_CIL___Tmp42 = 147480;
							if(CdAudio435DeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode >= CdAudio435DeviceControl_CIL___Tmp42 && CdAudio435DeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode <= CdAudio435DeviceControl_CIL___Tmp42) {
{
 int SendSrbSynchronous_ioStatus__Status ;
int SendSrbSynchronous_ioctl ;
int SendSrbSynchronous_event ;
int SendSrbSynchronous_irp ;
int SendSrbSynchronous_status ;
int SendSrbSynchronous_CIL___Tmp10 ;
int SendSrbSynchronous_CIL___Tmp11 ;
int SendSrbSynchronous_CIL___Tmp12 ;
int SendSrbSynchronous_CIL___Tmp13 ;
int SendSrbSynchronous_CIL___Tmp14 ;
int SendSrbSynchronous_CIL___Tmp15 ;
int SendSrbSynchronous_CIL___Tmp16 ;
int SendSrbSynchronous_CIL___Tmp17 ;
int SendSrbSynchronous_CIL___Tmp18 ;
int SendSrbSynchronous_retres19 ;
								int SendSrbSynchronous_Extension ; int SendSrbSynchronous_Srb ; int SendSrbSynchronous_Buffer ; int SendSrbSynchronous_BufferLength ;
								SendSrbSynchronous_Extension = CdAudio435DeviceControl_deviceExtension;
								SendSrbSynchronous_Srb = CdAudio435DeviceControl_srb;
								SendSrbSynchronous_Buffer = 0;
								SendSrbSynchronous_BufferLength = 0;
								SendSrbSynchronous_irp = 0;
								CdAudio435DeviceControl_status = TRACER_RV;
								TRACER_RV = nondet();
								CdAudio435DeviceControl_CIL___Tmp99 = 8;
								CdAudio435DeviceControl_CIL___Tmp100 = 16384;
								CdAudio435DeviceControl_CIL___Tmp101 = 131072;
								CdAudio435DeviceControl_CIL___Tmp102 = 147456;
								CdAudio435DeviceControl_CIL___Tmp103 = 147464;
								if(CdAudio435DeviceControl_currentIrpStack__Parameters__DeviceIoControl__InputBufferLength < CdAudio435DeviceControl_sizeof__CDROM_PLAY_AUDIO_MSF) {
									CdAudio435DeviceControl_status = -1073741820;
L101:;
									CdAudio435DeviceControl_CIL___Tmp116 = CdAudio435DeviceControl_status;
{
									int IofCompleteRequest_Irp ; int IofCompleteRequest_PriorityBoost ;
									IofCompleteRequest_Irp = CdAudio435DeviceControl_Irp;
									IofCompleteRequest_PriorityBoost = 0;
									safety = safety + (s - NP);
									s = DC;
									;
									TRACER_RV = nondet();
									CdAudio435DeviceControl_retres114 = CdAudio435DeviceControl_status;
									TRACER_RV = (CdAudio435DeviceControl_retres114);
									CdAudioDeviceControl_status = TRACER_RV;
									TRACER_RV = nondet();
									goto L52;
}
								}
								else {
{
 int SendSrbSynchronous_ioStatus__Status ;
int SendSrbSynchronous_ioctl ;
int SendSrbSynchronous_event ;
int SendSrbSynchronous_irp ;
int SendSrbSynchronous_status ;
int SendSrbSynchronous_CIL___Tmp10 ;
int SendSrbSynchronous_CIL___Tmp11 ;
int SendSrbSynchronous_CIL___Tmp12 ;
int SendSrbSynchronous_CIL___Tmp13 ;
int SendSrbSynchronous_CIL___Tmp14 ;
int SendSrbSynchronous_CIL___Tmp15 ;
int SendSrbSynchronous_CIL___Tmp16 ;
int SendSrbSynchronous_CIL___Tmp17 ;
int SendSrbSynchronous_CIL___Tmp18 ;
int SendSrbSynchronous_retres19 ;
									int SendSrbSynchronous_Extension ; int SendSrbSynchronous_Srb ; int SendSrbSynchronous_Buffer ; int SendSrbSynchronous_BufferLength ;
									SendSrbSynchronous_Extension = CdAudio435DeviceControl_deviceExtension;
									SendSrbSynchronous_Srb = CdAudio435DeviceControl_srb;
									SendSrbSynchronous_Buffer = 0;
									SendSrbSynchronous_BufferLength = 0;
									SendSrbSynchronous_irp = 0;
									SendSrbSynchronous_retres19 = -1073741670;
									TRACER_RV = (SendSrbSynchronous_retres19);
									CdAudio435DeviceControl_status = TRACER_RV;
									TRACER_RV = nondet();
L102:;
									CdAudio435DeviceControl_CIL___Tmp116 = CdAudio435DeviceControl_status;
{
									int IofCompleteRequest_Irp ; int IofCompleteRequest_PriorityBoost ;
									IofCompleteRequest_Irp = CdAudio435DeviceControl_Irp;
									IofCompleteRequest_PriorityBoost = 0;
									safety = safety + (s - NP);
									s = DC;
									;
									TRACER_RV = nondet();
									CdAudio435DeviceControl_retres114 = CdAudio435DeviceControl_status;
									goto L85;
}
}
								}
}
							}
							else if(CdAudio435DeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode < CdAudio435DeviceControl_CIL___Tmp42) {
								CdAudio435DeviceControl_CIL___Tmp43 = 8;
								CdAudio435DeviceControl_CIL___Tmp44 = 16384;
								CdAudio435DeviceControl_CIL___Tmp45 = 131072;
								CdAudio435DeviceControl_CIL___Tmp46 = 147456;
								CdAudio435DeviceControl_CIL___Tmp47 = 147464;
								if(CdAudio435DeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode >= CdAudio435DeviceControl_CIL___Tmp47 && CdAudio435DeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode <= CdAudio435DeviceControl_CIL___Tmp47) {
{
 int SendSrbSynchronous_ioStatus__Status ;
int SendSrbSynchronous_ioctl ;
int SendSrbSynchronous_event ;
int SendSrbSynchronous_irp ;
int SendSrbSynchronous_status ;
int SendSrbSynchronous_CIL___Tmp10 ;
int SendSrbSynchronous_CIL___Tmp11 ;
int SendSrbSynchronous_CIL___Tmp12 ;
int SendSrbSynchronous_CIL___Tmp13 ;
int SendSrbSynchronous_CIL___Tmp14 ;
int SendSrbSynchronous_CIL___Tmp15 ;
int SendSrbSynchronous_CIL___Tmp16 ;
int SendSrbSynchronous_CIL___Tmp17 ;
int SendSrbSynchronous_CIL___Tmp18 ;
int SendSrbSynchronous_retres19 ;
									int SendSrbSynchronous_Extension ; int SendSrbSynchronous_Srb ; int SendSrbSynchronous_Buffer ; int SendSrbSynchronous_BufferLength ;
									SendSrbSynchronous_Extension = CdAudio435DeviceControl_deviceExtension;
									SendSrbSynchronous_Srb = CdAudio435DeviceControl_srb;
									SendSrbSynchronous_Buffer = 0;
									SendSrbSynchronous_BufferLength = 0;
									SendSrbSynchronous_irp = 0;
									SendSrbSynchronous_retres19 = -1073741670;
									TRACER_RV = (SendSrbSynchronous_retres19);
									CdAudio435DeviceControl_status = TRACER_RV;
									TRACER_RV = nondet();
									CdAudio435DeviceControl_CIL___Tmp99 = 8;
									CdAudio435DeviceControl_CIL___Tmp100 = 16384;
									CdAudio435DeviceControl_CIL___Tmp101 = 131072;
									CdAudio435DeviceControl_CIL___Tmp102 = 147456;
									CdAudio435DeviceControl_CIL___Tmp103 = 147464;
{
									int IofCompleteRequest_Irp ; int IofCompleteRequest_PriorityBoost ;
									IofCompleteRequest_Irp = CdAudio435DeviceControl_Irp;
									IofCompleteRequest_PriorityBoost = 0;
									safety = safety + (s - NP);
									s = DC;
									;
									TRACER_RV = nondet();
									CdAudio435DeviceControl_retres114 = CdAudio435DeviceControl_status;
									CdAudio435DeviceControl_TRACER_returning = 1;
									goto L84;
}
}
								}
								else if(CdAudio435DeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode < CdAudio435DeviceControl_CIL___Tmp47) {
									CdAudio435DeviceControl_CIL___Tmp48 = 4;
									CdAudio435DeviceControl_CIL___Tmp49 = 16384;
									CdAudio435DeviceControl_CIL___Tmp50 = 131072;
									CdAudio435DeviceControl_CIL___Tmp51 = 147456;
									CdAudio435DeviceControl_CIL___Tmp52 = 147460;
									if(CdAudio435DeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode >= CdAudio435DeviceControl_CIL___Tmp52 && CdAudio435DeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode <= CdAudio435DeviceControl_CIL___Tmp52) {
										if(CdAudio435DeviceControl_currentIrpStack__Parameters__DeviceIoControl__InputBufferLength < CdAudio435DeviceControl_sizeof__CDROM_SEEK_AUDIO_MSF) {
											CdAudio435DeviceControl_status = -1073741820;
											goto L101;
										}
										else {
{
 int SendSrbSynchronous_ioStatus__Status ;
int SendSrbSynchronous_ioctl ;
int SendSrbSynchronous_event ;
int SendSrbSynchronous_irp ;
int SendSrbSynchronous_status ;
int SendSrbSynchronous_CIL___Tmp10 ;
int SendSrbSynchronous_CIL___Tmp11 ;
int SendSrbSynchronous_CIL___Tmp12 ;
int SendSrbSynchronous_CIL___Tmp13 ;
int SendSrbSynchronous_CIL___Tmp14 ;
int SendSrbSynchronous_CIL___Tmp15 ;
int SendSrbSynchronous_CIL___Tmp16 ;
int SendSrbSynchronous_CIL___Tmp17 ;
int SendSrbSynchronous_CIL___Tmp18 ;
int SendSrbSynchronous_retres19 ;
											int SendSrbSynchronous_Extension ; int SendSrbSynchronous_Srb ; int SendSrbSynchronous_Buffer ; int SendSrbSynchronous_BufferLength ;
											SendSrbSynchronous_Extension = CdAudio435DeviceControl_deviceExtension;
											SendSrbSynchronous_Srb = CdAudio435DeviceControl_srb;
											SendSrbSynchronous_Buffer = 0;
											SendSrbSynchronous_BufferLength = 0;
											SendSrbSynchronous_irp = 0;
											SendSrbSynchronous_retres19 = -1073741670;
											TRACER_RV = (SendSrbSynchronous_retres19);
											CdAudio435DeviceControl_status = TRACER_RV;
											TRACER_RV = nondet();
											goto L102;
}
										}
									}
									else if(CdAudio435DeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode < CdAudio435DeviceControl_CIL___Tmp52) {
L103:;
										CdAudio435DeviceControl_CIL___Tmp53 = 12;
										CdAudio435DeviceControl_CIL___Tmp54 = 16384;
										CdAudio435DeviceControl_CIL___Tmp55 = 131072;
										CdAudio435DeviceControl_CIL___Tmp56 = 147456;
										CdAudio435DeviceControl_CIL___Tmp57 = 147468;
										CdAudio435DeviceControl_CIL___Tmp58 = 16;
										CdAudio435DeviceControl_CIL___Tmp59 = 16384;
										CdAudio435DeviceControl_CIL___Tmp60 = 131072;
										CdAudio435DeviceControl_CIL___Tmp61 = 147456;
										CdAudio435DeviceControl_CIL___Tmp62 = 147472;
										CdAudio435DeviceControl_CIL___Tmp63 = 44;
										CdAudio435DeviceControl_CIL___Tmp64 = 16384;
										CdAudio435DeviceControl_CIL___Tmp65 = 131072;
										CdAudio435DeviceControl_CIL___Tmp66 = 147456;
										CdAudio435DeviceControl_CIL___Tmp67 = 147500;
										CdAudio435DeviceControl_CIL___Tmp68 = 2056;
										CdAudio435DeviceControl_CIL___Tmp69 = 16384;
										CdAudio435DeviceControl_CIL___Tmp70 = 131072;
										CdAudio435DeviceControl_CIL___Tmp71 = 147456;
										CdAudio435DeviceControl_CIL___Tmp72 = 149512;
										CdAudio435DeviceControl_CIL___Tmp73 = 52;
										CdAudio435DeviceControl_CIL___Tmp74 = 16384;
										CdAudio435DeviceControl_CIL___Tmp75 = 131072;
										CdAudio435DeviceControl_CIL___Tmp76 = 147456;
										CdAudio435DeviceControl_CIL___Tmp77 = 147508;
										CdAudio435DeviceControl_CIL___Tmp78 = 20;
										CdAudio435DeviceControl_CIL___Tmp79 = 16384;
										CdAudio435DeviceControl_CIL___Tmp80 = 131072;
										CdAudio435DeviceControl_CIL___Tmp81 = 147456;
										CdAudio435DeviceControl_CIL___Tmp82 = 147476;
L104:;
										CdAudio435DeviceControl_CIL___Tmp83 = 40;
										CdAudio435DeviceControl_CIL___Tmp84 = 16384;
										CdAudio435DeviceControl_CIL___Tmp85 = 131072;
										CdAudio435DeviceControl_CIL___Tmp86 = 147456;
										CdAudio435DeviceControl_CIL___Tmp87 = 147496;
										CdAudio435DeviceControl_CIL___Tmp88 = 2048;
										CdAudio435DeviceControl_CIL___Tmp89 = 16384;
										CdAudio435DeviceControl_CIL___Tmp90 = 131072;
										CdAudio435DeviceControl_CIL___Tmp91 = 147456;
										CdAudio435DeviceControl_CIL___Tmp92 = 149504;
										goto L93;
									}
									else {
										goto L103;
									}
								}
								else {
									CdAudio435DeviceControl_CIL___Tmp48 = 4;
									CdAudio435DeviceControl_CIL___Tmp49 = 16384;
									CdAudio435DeviceControl_CIL___Tmp50 = 131072;
									CdAudio435DeviceControl_CIL___Tmp51 = 147456;
									CdAudio435DeviceControl_CIL___Tmp52 = 147460;
									CdAudio435DeviceControl_CIL___Tmp53 = 12;
									CdAudio435DeviceControl_CIL___Tmp54 = 16384;
									CdAudio435DeviceControl_CIL___Tmp55 = 131072;
									CdAudio435DeviceControl_CIL___Tmp56 = 147456;
									CdAudio435DeviceControl_CIL___Tmp57 = 147468;
									if(CdAudio435DeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode >= CdAudio435DeviceControl_CIL___Tmp57 && CdAudio435DeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode <= CdAudio435DeviceControl_CIL___Tmp57) {
										if(CdAudio435DeviceControl_SubQPtr >= 0 && CdAudio435DeviceControl_SubQPtr <= 0) {
											CdAudio435DeviceControl_status = -1073741670;
											CdAudio435DeviceControl_CIL___Tmp106 = CdAudio435DeviceControl_status;
{
											int IofCompleteRequest_Irp ; int IofCompleteRequest_PriorityBoost ;
											IofCompleteRequest_Irp = CdAudio435DeviceControl_Irp;
											IofCompleteRequest_PriorityBoost = 0;
											safety = safety + (s - NP);
											s = DC;
											;
											TRACER_RV = nondet();
											CdAudio435DeviceControl_retres114 = CdAudio435DeviceControl_status;
											CdAudio435DeviceControl_TRACER_returning = 1;
L105:;
											goto L84;
}
										}
										else if(CdAudio435DeviceControl_SubQPtr < 0) {
											if(CdAudio435DeviceControl_deviceExtension__Paused >= 1 && CdAudio435DeviceControl_deviceExtension__Paused <= 1) {
L106:;
												CdAudio435DeviceControl_status = 0;
												CdAudio435DeviceControl_CIL___Tmp107 = CdAudio435DeviceControl_status;
{
												int IofCompleteRequest_Irp ; int IofCompleteRequest_PriorityBoost ;
												IofCompleteRequest_Irp = CdAudio435DeviceControl_Irp;
												IofCompleteRequest_PriorityBoost = 0;
												safety = safety + (s - NP);
												s = DC;
												;
												TRACER_RV = nondet();
												CdAudio435DeviceControl_retres114 = CdAudio435DeviceControl_status;
												CdAudio435DeviceControl_TRACER_returning = 1;
L107:;
L108:;
												TRACER_RV = (CdAudio435DeviceControl_retres114);
												CdAudioDeviceControl_status = TRACER_RV;
												TRACER_RV = nondet();
												goto L60;
}
											}
											else if(CdAudio435DeviceControl_deviceExtension__Paused < 1) {
L109:;
{
 int SendSrbSynchronous_ioStatus__Status ;
int SendSrbSynchronous_ioctl ;
int SendSrbSynchronous_event ;
int SendSrbSynchronous_irp ;
int SendSrbSynchronous_status ;
int SendSrbSynchronous_CIL___Tmp10 ;
int SendSrbSynchronous_CIL___Tmp11 ;
int SendSrbSynchronous_CIL___Tmp12 ;
int SendSrbSynchronous_CIL___Tmp13 ;
int SendSrbSynchronous_CIL___Tmp14 ;
int SendSrbSynchronous_CIL___Tmp15 ;
int SendSrbSynchronous_CIL___Tmp16 ;
int SendSrbSynchronous_CIL___Tmp17 ;
int SendSrbSynchronous_CIL___Tmp18 ;
int SendSrbSynchronous_retres19 ;
												int SendSrbSynchronous_Extension ; int SendSrbSynchronous_Srb ; int SendSrbSynchronous_Buffer ; int SendSrbSynchronous_BufferLength ;
												SendSrbSynchronous_Extension = CdAudio435DeviceControl_deviceExtension;
												SendSrbSynchronous_Srb = CdAudio435DeviceControl_srb;
												SendSrbSynchronous_Buffer = CdAudio435DeviceControl_SubQPtr;
												SendSrbSynchronous_BufferLength = CdAudio435DeviceControl_sizeof__SUB_Q_CHANNEL_DATA;
												SendSrbSynchronous_irp = 0;
												SendSrbSynchronous_retres19 = -1073741670;
												TRACER_RV = (SendSrbSynchronous_retres19);
												CdAudio435DeviceControl_status = TRACER_RV;
												TRACER_RV = nondet();
L110:;
{
												int IofCompleteRequest_Irp ; int IofCompleteRequest_PriorityBoost ;
												IofCompleteRequest_Irp = CdAudio435DeviceControl_Irp;
												IofCompleteRequest_PriorityBoost = 0;
												safety = safety + (s - NP);
												s = DC;
												;
												TRACER_RV = nondet();
												CdAudio435DeviceControl_retres114 = CdAudio435DeviceControl_status;
												CdAudio435DeviceControl_TRACER_returning = 1;
												goto L105;
}
}
											}
											else {
												goto L109;
											}
										}
										else {
											if(CdAudio435DeviceControl_deviceExtension__Paused >= 1 && CdAudio435DeviceControl_deviceExtension__Paused <= 1) {
												goto L106;
											}
											else if(CdAudio435DeviceControl_deviceExtension__Paused < 1) {
L111:;
{
 int SendSrbSynchronous_ioStatus__Status ;
int SendSrbSynchronous_ioctl ;
int SendSrbSynchronous_event ;
int SendSrbSynchronous_irp ;
int SendSrbSynchronous_status ;
int SendSrbSynchronous_CIL___Tmp10 ;
int SendSrbSynchronous_CIL___Tmp11 ;
int SendSrbSynchronous_CIL___Tmp12 ;
int SendSrbSynchronous_CIL___Tmp13 ;
int SendSrbSynchronous_CIL___Tmp14 ;
int SendSrbSynchronous_CIL___Tmp15 ;
int SendSrbSynchronous_CIL___Tmp16 ;
int SendSrbSynchronous_CIL___Tmp17 ;
int SendSrbSynchronous_CIL___Tmp18 ;
int SendSrbSynchronous_retres19 ;
												int SendSrbSynchronous_Extension ; int SendSrbSynchronous_Srb ; int SendSrbSynchronous_Buffer ; int SendSrbSynchronous_BufferLength ;
												SendSrbSynchronous_Extension = CdAudio435DeviceControl_deviceExtension;
												SendSrbSynchronous_Srb = CdAudio435DeviceControl_srb;
												SendSrbSynchronous_Buffer = CdAudio435DeviceControl_SubQPtr;
												SendSrbSynchronous_BufferLength = CdAudio435DeviceControl_sizeof__SUB_Q_CHANNEL_DATA;
												SendSrbSynchronous_irp = 0;
												SendSrbSynchronous_retres19 = -1073741670;
												TRACER_RV = (SendSrbSynchronous_retres19);
												CdAudio435DeviceControl_status = TRACER_RV;
												TRACER_RV = nondet();
												goto L110;
}
											}
											else {
												goto L111;
											}
										}
									}
									else if(CdAudio435DeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode < CdAudio435DeviceControl_CIL___Tmp57) {
										CdAudio435DeviceControl_CIL___Tmp58 = 16;
										CdAudio435DeviceControl_CIL___Tmp59 = 16384;
										CdAudio435DeviceControl_CIL___Tmp60 = 131072;
										CdAudio435DeviceControl_CIL___Tmp61 = 147456;
										CdAudio435DeviceControl_CIL___Tmp62 = 147472;
										CdAudio435DeviceControl_CIL___Tmp63 = 44;
										CdAudio435DeviceControl_CIL___Tmp64 = 16384;
										CdAudio435DeviceControl_CIL___Tmp65 = 131072;
										CdAudio435DeviceControl_CIL___Tmp66 = 147456;
										CdAudio435DeviceControl_CIL___Tmp67 = 147500;
										CdAudio435DeviceControl_CIL___Tmp68 = 2056;
										CdAudio435DeviceControl_CIL___Tmp69 = 16384;
										CdAudio435DeviceControl_CIL___Tmp70 = 131072;
										CdAudio435DeviceControl_CIL___Tmp71 = 147456;
										CdAudio435DeviceControl_CIL___Tmp72 = 149512;
										CdAudio435DeviceControl_CIL___Tmp73 = 52;
										CdAudio435DeviceControl_CIL___Tmp74 = 16384;
										CdAudio435DeviceControl_CIL___Tmp75 = 131072;
										CdAudio435DeviceControl_CIL___Tmp76 = 147456;
										CdAudio435DeviceControl_CIL___Tmp77 = 147508;
										CdAudio435DeviceControl_CIL___Tmp78 = 20;
										CdAudio435DeviceControl_CIL___Tmp79 = 16384;
										CdAudio435DeviceControl_CIL___Tmp80 = 131072;
										CdAudio435DeviceControl_CIL___Tmp81 = 147456;
										CdAudio435DeviceControl_CIL___Tmp82 = 147476;
										goto L104;
									}
									else {
										CdAudio435DeviceControl_CIL___Tmp58 = 16;
										CdAudio435DeviceControl_CIL___Tmp59 = 16384;
										CdAudio435DeviceControl_CIL___Tmp60 = 131072;
										CdAudio435DeviceControl_CIL___Tmp61 = 147456;
										CdAudio435DeviceControl_CIL___Tmp62 = 147472;
										if(CdAudio435DeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode >= CdAudio435DeviceControl_CIL___Tmp62 && CdAudio435DeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode <= CdAudio435DeviceControl_CIL___Tmp62) {
											if(CdAudio435DeviceControl_deviceExtension__Paused >= 0 && CdAudio435DeviceControl_deviceExtension__Paused <= 0) {
												CdAudio435DeviceControl_status = -1073741823;
												CdAudio435DeviceControl_CIL___Tmp112 = CdAudio435DeviceControl_status;
{
												int IofCompleteRequest_Irp ; int IofCompleteRequest_PriorityBoost ;
												IofCompleteRequest_Irp = CdAudio435DeviceControl_Irp;
												IofCompleteRequest_PriorityBoost = 0;
												safety = safety + (s - NP);
												s = DC;
												;
												TRACER_RV = nondet();
												CdAudio435DeviceControl_retres114 = CdAudio435DeviceControl_status;
												CdAudio435DeviceControl_TRACER_returning = 1;
												goto L107;
}
											}
											else if(CdAudio435DeviceControl_deviceExtension__Paused < 0) {
L112:;
{
 int SendSrbSynchronous_ioStatus__Status ;
int SendSrbSynchronous_ioctl ;
int SendSrbSynchronous_event ;
int SendSrbSynchronous_irp ;
int SendSrbSynchronous_status ;
int SendSrbSynchronous_CIL___Tmp10 ;
int SendSrbSynchronous_CIL___Tmp11 ;
int SendSrbSynchronous_CIL___Tmp12 ;
int SendSrbSynchronous_CIL___Tmp13 ;
int SendSrbSynchronous_CIL___Tmp14 ;
int SendSrbSynchronous_CIL___Tmp15 ;
int SendSrbSynchronous_CIL___Tmp16 ;
int SendSrbSynchronous_CIL___Tmp17 ;
int SendSrbSynchronous_CIL___Tmp18 ;
int SendSrbSynchronous_retres19 ;
												int SendSrbSynchronous_Extension ; int SendSrbSynchronous_Srb ; int SendSrbSynchronous_Buffer ; int SendSrbSynchronous_BufferLength ;
												SendSrbSynchronous_Extension = CdAudio435DeviceControl_deviceExtension;
												SendSrbSynchronous_Srb = CdAudio435DeviceControl_srb;
												SendSrbSynchronous_Buffer = 0;
												SendSrbSynchronous_BufferLength = 0;
												SendSrbSynchronous_irp = 0;
												SendSrbSynchronous_retres19 = -1073741670;
												TRACER_RV = (SendSrbSynchronous_retres19);
												CdAudio435DeviceControl_status = TRACER_RV;
												TRACER_RV = nondet();
												goto L102;
}
											}
											else {
												goto L112;
											}
										}
										else if(CdAudio435DeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode < CdAudio435DeviceControl_CIL___Tmp62) {
											CdAudio435DeviceControl_CIL___Tmp63 = 44;
											CdAudio435DeviceControl_CIL___Tmp64 = 16384;
											CdAudio435DeviceControl_CIL___Tmp65 = 131072;
											CdAudio435DeviceControl_CIL___Tmp66 = 147456;
											CdAudio435DeviceControl_CIL___Tmp67 = 147500;
											CdAudio435DeviceControl_CIL___Tmp68 = 2056;
											CdAudio435DeviceControl_CIL___Tmp69 = 16384;
											CdAudio435DeviceControl_CIL___Tmp70 = 131072;
											CdAudio435DeviceControl_CIL___Tmp71 = 147456;
											CdAudio435DeviceControl_CIL___Tmp72 = 149512;
											CdAudio435DeviceControl_CIL___Tmp73 = 52;
											CdAudio435DeviceControl_CIL___Tmp74 = 16384;
											CdAudio435DeviceControl_CIL___Tmp75 = 131072;
											CdAudio435DeviceControl_CIL___Tmp76 = 147456;
											CdAudio435DeviceControl_CIL___Tmp77 = 147508;
											CdAudio435DeviceControl_CIL___Tmp78 = 20;
											CdAudio435DeviceControl_CIL___Tmp79 = 16384;
											CdAudio435DeviceControl_CIL___Tmp80 = 131072;
											CdAudio435DeviceControl_CIL___Tmp81 = 147456;
											CdAudio435DeviceControl_CIL___Tmp82 = 147476;
											goto L104;
										}
										else {
											CdAudio435DeviceControl_CIL___Tmp63 = 44;
											CdAudio435DeviceControl_CIL___Tmp64 = 16384;
											CdAudio435DeviceControl_CIL___Tmp65 = 131072;
											CdAudio435DeviceControl_CIL___Tmp66 = 147456;
											CdAudio435DeviceControl_CIL___Tmp67 = 147500;
											CdAudio435DeviceControl_CIL___Tmp68 = 2056;
											CdAudio435DeviceControl_CIL___Tmp69 = 16384;
											CdAudio435DeviceControl_CIL___Tmp70 = 131072;
											CdAudio435DeviceControl_CIL___Tmp71 = 147456;
											CdAudio435DeviceControl_CIL___Tmp72 = 149512;
											CdAudio435DeviceControl_CIL___Tmp73 = 52;
											CdAudio435DeviceControl_CIL___Tmp74 = 16384;
											CdAudio435DeviceControl_CIL___Tmp75 = 131072;
											CdAudio435DeviceControl_CIL___Tmp76 = 147456;
											CdAudio435DeviceControl_CIL___Tmp77 = 147508;
											CdAudio435DeviceControl_CIL___Tmp78 = 20;
											CdAudio435DeviceControl_CIL___Tmp79 = 16384;
											CdAudio435DeviceControl_CIL___Tmp80 = 131072;
											CdAudio435DeviceControl_CIL___Tmp81 = 147456;
											CdAudio435DeviceControl_CIL___Tmp82 = 147476;
											if(CdAudio435DeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode >= CdAudio435DeviceControl_CIL___Tmp82 && CdAudio435DeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode <= CdAudio435DeviceControl_CIL___Tmp82) {
												CdAudio435DeviceControl_Irp__IoStatus__Information = 0;
												CdAudio435DeviceControl_status = -1073741808;
L113:;
												CdAudio435DeviceControl_CIL___Tmp116 = CdAudio435DeviceControl_status;
{
												int IofCompleteRequest_Irp ; int IofCompleteRequest_PriorityBoost ;
												IofCompleteRequest_Irp = CdAudio435DeviceControl_Irp;
												IofCompleteRequest_PriorityBoost = 0;
												safety = safety + (s - NP);
												s = DC;
												;
												TRACER_RV = nondet();
												CdAudio435DeviceControl_retres114 = CdAudio435DeviceControl_status;
												goto L108;
}
											}
											else if(CdAudio435DeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode < CdAudio435DeviceControl_CIL___Tmp82) {
												goto L104;
											}
											else {
												goto L104;
											}
										}
									}
								}
							}
							else {
								CdAudio435DeviceControl_CIL___Tmp43 = 8;
								CdAudio435DeviceControl_CIL___Tmp44 = 16384;
								CdAudio435DeviceControl_CIL___Tmp45 = 131072;
								CdAudio435DeviceControl_CIL___Tmp46 = 147456;
								CdAudio435DeviceControl_CIL___Tmp47 = 147464;
								CdAudio435DeviceControl_CIL___Tmp48 = 4;
								CdAudio435DeviceControl_CIL___Tmp49 = 16384;
								CdAudio435DeviceControl_CIL___Tmp50 = 131072;
								CdAudio435DeviceControl_CIL___Tmp51 = 147456;
								CdAudio435DeviceControl_CIL___Tmp52 = 147460;
								CdAudio435DeviceControl_CIL___Tmp53 = 12;
								CdAudio435DeviceControl_CIL___Tmp54 = 16384;
								CdAudio435DeviceControl_CIL___Tmp55 = 131072;
								CdAudio435DeviceControl_CIL___Tmp56 = 147456;
								CdAudio435DeviceControl_CIL___Tmp57 = 147468;
								CdAudio435DeviceControl_CIL___Tmp58 = 16;
								CdAudio435DeviceControl_CIL___Tmp59 = 16384;
								CdAudio435DeviceControl_CIL___Tmp60 = 131072;
								CdAudio435DeviceControl_CIL___Tmp61 = 147456;
								CdAudio435DeviceControl_CIL___Tmp62 = 147472;
								CdAudio435DeviceControl_CIL___Tmp63 = 44;
								CdAudio435DeviceControl_CIL___Tmp64 = 16384;
								CdAudio435DeviceControl_CIL___Tmp65 = 131072;
								CdAudio435DeviceControl_CIL___Tmp66 = 147456;
								CdAudio435DeviceControl_CIL___Tmp67 = 147500;
								if(CdAudio435DeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode >= CdAudio435DeviceControl_CIL___Tmp67 && CdAudio435DeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode <= CdAudio435DeviceControl_CIL___Tmp67) {
									if(CdAudio435DeviceControl_currentIrpStack__Parameters__DeviceIoControl__OutputBufferLength < CdAudio435DeviceControl_sizeof__SUB_Q_CURRENT_POSITION) {
										CdAudio435DeviceControl_status = -1073741789;
										CdAudio435DeviceControl_Irp__IoStatus__Information = 0;
										goto L81;
									}
									else {
										if(CdAudio435DeviceControl_SubQPtr___0 >= 0 && CdAudio435DeviceControl_SubQPtr___0 <= 0) {
											CdAudio435DeviceControl_status = -1073741670;
											CdAudio435DeviceControl_Irp__IoStatus__Information = 0;
											CdAudio435DeviceControl_CIL___Tmp113 = CdAudio435DeviceControl_status;
{
											int IofCompleteRequest_Irp ; int IofCompleteRequest_PriorityBoost ;
											IofCompleteRequest_Irp = CdAudio435DeviceControl_Irp;
											IofCompleteRequest_PriorityBoost = 0;
											safety = safety + (s - NP);
											s = DC;
											;
											TRACER_RV = nondet();
											CdAudio435DeviceControl_retres114 = CdAudio435DeviceControl_status;
											CdAudio435DeviceControl_TRACER_returning = 1;
											goto L84;
}
										}
										else if(CdAudio435DeviceControl_SubQPtr___0 < 0) {
											if(CdAudio435DeviceControl_userPtr__Format > 1) {
L114:;
												CdAudio435DeviceControl_status = -1073741823;
												CdAudio435DeviceControl_Irp__IoStatus__Information = 0;
												CdAudio435DeviceControl_CIL___Tmp114 = CdAudio435DeviceControl_status;
{
												int IofCompleteRequest_Irp ; int IofCompleteRequest_PriorityBoost ;
												IofCompleteRequest_Irp = CdAudio435DeviceControl_Irp;
												IofCompleteRequest_PriorityBoost = 0;
												safety = safety + (s - NP);
												s = DC;
												;
												TRACER_RV = nondet();
												CdAudio435DeviceControl_retres114 = CdAudio435DeviceControl_status;
												CdAudio435DeviceControl_TRACER_returning = 1;
												goto L107;
}
											}
											else if(CdAudio435DeviceControl_userPtr__Format < 1) {
												goto L114;
											}
											else {
{
 int SendSrbSynchronous_ioStatus__Status ;
int SendSrbSynchronous_ioctl ;
int SendSrbSynchronous_event ;
int SendSrbSynchronous_irp ;
int SendSrbSynchronous_status ;
int SendSrbSynchronous_CIL___Tmp10 ;
int SendSrbSynchronous_CIL___Tmp11 ;
int SendSrbSynchronous_CIL___Tmp12 ;
int SendSrbSynchronous_CIL___Tmp13 ;
int SendSrbSynchronous_CIL___Tmp14 ;
int SendSrbSynchronous_CIL___Tmp15 ;
int SendSrbSynchronous_CIL___Tmp16 ;
int SendSrbSynchronous_CIL___Tmp17 ;
int SendSrbSynchronous_CIL___Tmp18 ;
int SendSrbSynchronous_retres19 ;
												int SendSrbSynchronous_Extension ; int SendSrbSynchronous_Srb ; int SendSrbSynchronous_Buffer ; int SendSrbSynchronous_BufferLength ;
												SendSrbSynchronous_Extension = CdAudio435DeviceControl_deviceExtension;
												SendSrbSynchronous_Srb = CdAudio435DeviceControl_srb;
												SendSrbSynchronous_Buffer = CdAudio435DeviceControl_SubQPtr___0;
												SendSrbSynchronous_BufferLength = CdAudio435DeviceControl_sizeof__SUB_Q_CHANNEL_DATA;
												SendSrbSynchronous_irp = 0;
												SendSrbSynchronous_retres19 = -1073741670;
												TRACER_RV = (SendSrbSynchronous_retres19);
												CdAudio435DeviceControl_status = TRACER_RV;
												TRACER_RV = nondet();
L115:;
												goto L102;
}
											}
										}
										else {
											if(CdAudio435DeviceControl_userPtr__Format > 1) {
												goto L114;
											}
											else if(CdAudio435DeviceControl_userPtr__Format < 1) {
												goto L114;
											}
											else {
{
 int SendSrbSynchronous_ioStatus__Status ;
int SendSrbSynchronous_ioctl ;
int SendSrbSynchronous_event ;
int SendSrbSynchronous_irp ;
int SendSrbSynchronous_status ;
int SendSrbSynchronous_CIL___Tmp10 ;
int SendSrbSynchronous_CIL___Tmp11 ;
int SendSrbSynchronous_CIL___Tmp12 ;
int SendSrbSynchronous_CIL___Tmp13 ;
int SendSrbSynchronous_CIL___Tmp14 ;
int SendSrbSynchronous_CIL___Tmp15 ;
int SendSrbSynchronous_CIL___Tmp16 ;
int SendSrbSynchronous_CIL___Tmp17 ;
int SendSrbSynchronous_CIL___Tmp18 ;
int SendSrbSynchronous_retres19 ;
												int SendSrbSynchronous_Extension ; int SendSrbSynchronous_Srb ; int SendSrbSynchronous_Buffer ; int SendSrbSynchronous_BufferLength ;
												SendSrbSynchronous_Extension = CdAudio435DeviceControl_deviceExtension;
												SendSrbSynchronous_Srb = CdAudio435DeviceControl_srb;
												SendSrbSynchronous_Buffer = CdAudio435DeviceControl_SubQPtr___0;
												SendSrbSynchronous_BufferLength = CdAudio435DeviceControl_sizeof__SUB_Q_CHANNEL_DATA;
												SendSrbSynchronous_irp = 0;
												SendSrbSynchronous_retres19 = -1073741670;
												TRACER_RV = (SendSrbSynchronous_retres19);
												CdAudio435DeviceControl_status = TRACER_RV;
												TRACER_RV = nondet();
												goto L115;
}
											}
										}
									}
								}
								else if(CdAudio435DeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode < CdAudio435DeviceControl_CIL___Tmp67) {
									CdAudio435DeviceControl_CIL___Tmp68 = 2056;
									CdAudio435DeviceControl_CIL___Tmp69 = 16384;
									CdAudio435DeviceControl_CIL___Tmp70 = 131072;
									CdAudio435DeviceControl_CIL___Tmp71 = 147456;
									CdAudio435DeviceControl_CIL___Tmp72 = 149512;
									CdAudio435DeviceControl_CIL___Tmp73 = 52;
									CdAudio435DeviceControl_CIL___Tmp74 = 16384;
									CdAudio435DeviceControl_CIL___Tmp75 = 131072;
									CdAudio435DeviceControl_CIL___Tmp76 = 147456;
									CdAudio435DeviceControl_CIL___Tmp77 = 147508;
									CdAudio435DeviceControl_CIL___Tmp78 = 20;
									CdAudio435DeviceControl_CIL___Tmp79 = 16384;
									CdAudio435DeviceControl_CIL___Tmp80 = 131072;
									CdAudio435DeviceControl_CIL___Tmp81 = 147456;
									CdAudio435DeviceControl_CIL___Tmp82 = 147476;
									CdAudio435DeviceControl_CIL___Tmp83 = 40;
									CdAudio435DeviceControl_CIL___Tmp84 = 16384;
									CdAudio435DeviceControl_CIL___Tmp85 = 131072;
									CdAudio435DeviceControl_CIL___Tmp86 = 147456;
									CdAudio435DeviceControl_CIL___Tmp87 = 147496;
									if(CdAudio435DeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode >= CdAudio435DeviceControl_CIL___Tmp87 && CdAudio435DeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode <= CdAudio435DeviceControl_CIL___Tmp87) {
										CdAudio435DeviceControl_Irp__IoStatus__Information = 0;
										CdAudio435DeviceControl_status = -1073741808;
										goto L113;
									}
									else if(CdAudio435DeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode < CdAudio435DeviceControl_CIL___Tmp87) {
L116:;
										CdAudio435DeviceControl_CIL___Tmp88 = 2048;
										CdAudio435DeviceControl_CIL___Tmp89 = 16384;
										CdAudio435DeviceControl_CIL___Tmp90 = 131072;
										CdAudio435DeviceControl_CIL___Tmp91 = 147456;
										CdAudio435DeviceControl_CIL___Tmp92 = 149504;
										goto L93;
									}
									else {
										goto L116;
									}
								}
								else {
									CdAudio435DeviceControl_CIL___Tmp68 = 2056;
									CdAudio435DeviceControl_CIL___Tmp69 = 16384;
									CdAudio435DeviceControl_CIL___Tmp70 = 131072;
									CdAudio435DeviceControl_CIL___Tmp71 = 147456;
									CdAudio435DeviceControl_CIL___Tmp72 = 149512;
									if(CdAudio435DeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode >= CdAudio435DeviceControl_CIL___Tmp72 && CdAudio435DeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode <= CdAudio435DeviceControl_CIL___Tmp72) {
{
 int SendSrbSynchronous_ioStatus__Status ;
int SendSrbSynchronous_ioctl ;
int SendSrbSynchronous_event ;
int SendSrbSynchronous_irp ;
int SendSrbSynchronous_status ;
int SendSrbSynchronous_CIL___Tmp10 ;
int SendSrbSynchronous_CIL___Tmp11 ;
int SendSrbSynchronous_CIL___Tmp12 ;
int SendSrbSynchronous_CIL___Tmp13 ;
int SendSrbSynchronous_CIL___Tmp14 ;
int SendSrbSynchronous_CIL___Tmp15 ;
int SendSrbSynchronous_CIL___Tmp16 ;
int SendSrbSynchronous_CIL___Tmp17 ;
int SendSrbSynchronous_CIL___Tmp18 ;
int SendSrbSynchronous_retres19 ;
										int SendSrbSynchronous_Extension ; int SendSrbSynchronous_Srb ; int SendSrbSynchronous_Buffer ; int SendSrbSynchronous_BufferLength ;
										SendSrbSynchronous_Extension = CdAudio435DeviceControl_deviceExtension;
										SendSrbSynchronous_Srb = CdAudio435DeviceControl_srb;
										SendSrbSynchronous_Buffer = 0;
										SendSrbSynchronous_BufferLength = 0;
										SendSrbSynchronous_irp = 0;
										SendSrbSynchronous_retres19 = -1073741670;
										TRACER_RV = (SendSrbSynchronous_retres19);
										CdAudio435DeviceControl_status = TRACER_RV;
										TRACER_RV = nondet();
										goto L102;
}
									}
									else if(CdAudio435DeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode < CdAudio435DeviceControl_CIL___Tmp72) {
L117:;
										CdAudio435DeviceControl_CIL___Tmp73 = 52;
										CdAudio435DeviceControl_CIL___Tmp74 = 16384;
										CdAudio435DeviceControl_CIL___Tmp75 = 131072;
										CdAudio435DeviceControl_CIL___Tmp76 = 147456;
										CdAudio435DeviceControl_CIL___Tmp77 = 147508;
										if(CdAudio435DeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode >= CdAudio435DeviceControl_CIL___Tmp77 && CdAudio435DeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode <= CdAudio435DeviceControl_CIL___Tmp77) {
											CdAudio435DeviceControl_Irp__IoStatus__Information = 0;
											CdAudio435DeviceControl_status = -1073741808;
											goto L113;
										}
										else if(CdAudio435DeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode < CdAudio435DeviceControl_CIL___Tmp77) {
											CdAudio435DeviceControl_CIL___Tmp78 = 20;
											CdAudio435DeviceControl_CIL___Tmp79 = 16384;
											CdAudio435DeviceControl_CIL___Tmp80 = 131072;
											CdAudio435DeviceControl_CIL___Tmp81 = 147456;
											CdAudio435DeviceControl_CIL___Tmp82 = 147476;
											CdAudio435DeviceControl_CIL___Tmp83 = 40;
											CdAudio435DeviceControl_CIL___Tmp84 = 16384;
											CdAudio435DeviceControl_CIL___Tmp85 = 131072;
											CdAudio435DeviceControl_CIL___Tmp86 = 147456;
											CdAudio435DeviceControl_CIL___Tmp87 = 147496;
											CdAudio435DeviceControl_CIL___Tmp88 = 2048;
											CdAudio435DeviceControl_CIL___Tmp89 = 16384;
											CdAudio435DeviceControl_CIL___Tmp90 = 131072;
											CdAudio435DeviceControl_CIL___Tmp91 = 147456;
											CdAudio435DeviceControl_CIL___Tmp92 = 149504;
											goto L93;
										}
										else {
											CdAudio435DeviceControl_CIL___Tmp78 = 20;
											CdAudio435DeviceControl_CIL___Tmp79 = 16384;
											CdAudio435DeviceControl_CIL___Tmp80 = 131072;
											CdAudio435DeviceControl_CIL___Tmp81 = 147456;
											CdAudio435DeviceControl_CIL___Tmp82 = 147476;
											CdAudio435DeviceControl_CIL___Tmp83 = 40;
											CdAudio435DeviceControl_CIL___Tmp84 = 16384;
											CdAudio435DeviceControl_CIL___Tmp85 = 131072;
											CdAudio435DeviceControl_CIL___Tmp86 = 147456;
											CdAudio435DeviceControl_CIL___Tmp87 = 147496;
											CdAudio435DeviceControl_CIL___Tmp88 = 2048;
											CdAudio435DeviceControl_CIL___Tmp89 = 16384;
											CdAudio435DeviceControl_CIL___Tmp90 = 131072;
											CdAudio435DeviceControl_CIL___Tmp91 = 147456;
											CdAudio435DeviceControl_CIL___Tmp92 = 149504;
											if(CdAudio435DeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode >= CdAudio435DeviceControl_CIL___Tmp92 && CdAudio435DeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode <= CdAudio435DeviceControl_CIL___Tmp92) {
{
 int CdAudioIsPlayActive_deviceExtension__PlayActive ;
int CdAudioIsPlayActive_ioStatus__Status ;
int CdAudioIsPlayActive_currentBuffer__Header__AudioStatus ;
int CdAudioIsPlayActive_irp_CdAudioIsPlayActive ;
int CdAudioIsPlayActive_event ;
int CdAudioIsPlayActive_status ;
int CdAudioIsPlayActive_currentBuffer ;
int CdAudioIsPlayActive_returnValue ;
int CdAudioIsPlayActive_CIL___Tmp10 ;
int CdAudioIsPlayActive_retres11 ;
												int CdAudioIsPlayActive_DeviceObject ;
												CdAudioIsPlayActive_DeviceObject = CdAudio435DeviceControl_DeviceObject;
												if(CdAudioIsPlayActive_deviceExtension__PlayActive >= 0 && CdAudioIsPlayActive_deviceExtension__PlayActive <= 0) {
													CdAudioIsPlayActive_retres11 = 0;
L118:;
													TRACER_RV = (CdAudioIsPlayActive_retres11);
													CdAudio435DeviceControl_tmp___1 = TRACER_RV;
													TRACER_RV = nondet();
{
 int CdAudioSendToNextDriver_Irp__CurrentLocation ;
int CdAudioSendToNextDriver_Irp__Tail__Overlay__CurrentStackLocation ;
int CdAudioSendToNextDriver_deviceExtension__TargetDeviceObject ;
int CdAudioSendToNextDriver_tmp ;
													int CdAudioSendToNextDriver_DeviceObject ; int CdAudioSendToNextDriver_Irp ;
													CdAudioSendToNextDriver_DeviceObject = CdAudio435DeviceControl_DeviceObject;
													CdAudioSendToNextDriver_Irp = CdAudio435DeviceControl_Irp;
													safety = safety + (s - NP);
													s = SKIP1;
													CdAudioSendToNextDriver_Irp__CurrentLocation = CdAudioSendToNextDriver_Irp__CurrentLocation + 1;
													CdAudioSendToNextDriver_Irp__Tail__Overlay__CurrentStackLocation = CdAudioSendToNextDriver_Irp__Tail__Overlay__CurrentStackLocation + 1;
{
 int IofCallDriver_Irp__PendingReturned ;
int IofCallDriver_returnVal2 ;
int IofCallDriver_compRetStatus ;
int IofCallDriver_lcontext ;
int IofCallDriver_CIL___Tmp8 ;
int IofCallDriver_tmp_ndt_5 ;
int IofCallDriver_tmp_ndt_6 ;
													int IofCallDriver_DeviceObject ; int IofCallDriver_Irp ;
													IofCallDriver_DeviceObject = CdAudioSendToNextDriver_deviceExtension__TargetDeviceObject;
													IofCallDriver_Irp = CdAudioSendToNextDriver_Irp;
													if(IofCallDriver_Irp__PendingReturned > 0) {
L119:;
														IofCallDriver_returnVal2 = 259;
L120:;
														safety = safety + (s - SKIP1);
														s = SKIP2;
														lowerDriverReturn = IofCallDriver_returnVal2;
														TRACER_RV = (IofCallDriver_returnVal2);
														CdAudioSendToNextDriver_tmp = TRACER_RV;
														TRACER_RV = nondet();
														TRACER_RV = (CdAudioSendToNextDriver_tmp);
														CdAudio435DeviceControl_tmp___0 = TRACER_RV;
														TRACER_RV = nondet();
														CdAudio435DeviceControl_retres114 = CdAudio435DeviceControl_tmp___0;
														CdAudio435DeviceControl_TRACER_returning = 1;
														TRACER_RV = (CdAudio435DeviceControl_retres114);
														CdAudioDeviceControl_status = TRACER_RV;
														TRACER_RV = nondet();
														goto L96;
													}
													else if(IofCallDriver_Irp__PendingReturned < 0) {
														goto L119;
													}
													else {
														IofCallDriver_tmp_ndt_5 = __VERIFIER_nondet_int();
														if(IofCallDriver_tmp_ndt_5 >= 0 && IofCallDriver_tmp_ndt_5 <= 0) {
															IofCallDriver_returnVal2 = 0;
															safety = safety + (s - SKIP1);
															s = SKIP2;
															lowerDriverReturn = IofCallDriver_returnVal2;
															TRACER_RV = (IofCallDriver_returnVal2);
															CdAudioSendToNextDriver_tmp = TRACER_RV;
															TRACER_RV = nondet();
															TRACER_RV = (CdAudioSendToNextDriver_tmp);
															CdAudio435DeviceControl_tmp___0 = TRACER_RV;
															TRACER_RV = nondet();
															CdAudio435DeviceControl_retres114 = CdAudio435DeviceControl_tmp___0;
															CdAudio435DeviceControl_TRACER_returning = 1;
															TRACER_RV = (CdAudio435DeviceControl_retres114);
															CdAudioDeviceControl_status = TRACER_RV;
															TRACER_RV = nondet();
															goto L97;
														}
														else if(IofCallDriver_tmp_ndt_5 < 0) {
L121:;
															IofCallDriver_tmp_ndt_6 = __VERIFIER_nondet_int();
															if(IofCallDriver_tmp_ndt_6 >= 1 && IofCallDriver_tmp_ndt_6 <= 1) {
																IofCallDriver_returnVal2 = -1073741823;
																safety = safety + (s - SKIP1);
																s = SKIP2;
																lowerDriverReturn = IofCallDriver_returnVal2;
																TRACER_RV = (IofCallDriver_returnVal2);
																CdAudioSendToNextDriver_tmp = TRACER_RV;
																TRACER_RV = nondet();
																TRACER_RV = (CdAudioSendToNextDriver_tmp);
																CdAudio435DeviceControl_tmp___0 = TRACER_RV;
																TRACER_RV = nondet();
																CdAudio435DeviceControl_retres114 = CdAudio435DeviceControl_tmp___0;
																CdAudio435DeviceControl_TRACER_returning = 1;
																TRACER_RV = (CdAudio435DeviceControl_retres114);
																CdAudioDeviceControl_status = TRACER_RV;
																TRACER_RV = nondet();
																goto L99;
															}
															else if(IofCallDriver_tmp_ndt_6 < 1) {
L122:;
																IofCallDriver_returnVal2 = 259;
																goto L120;
															}
															else {
																goto L122;
															}
														}
														else {
															goto L121;
														}
													}
}
}
												}
												else if(CdAudioIsPlayActive_deviceExtension__PlayActive < 0) {
L123:;
													if(CdAudioIsPlayActive_currentBuffer >= 0 && CdAudioIsPlayActive_currentBuffer <= 0) {
														CdAudioIsPlayActive_retres11 = 0;
														goto L118;
													}
													else if(CdAudioIsPlayActive_currentBuffer < 0) {
L124:;
														if(CdAudioIsPlayActive_irp_CdAudioIsPlayActive >= 0 && CdAudioIsPlayActive_irp_CdAudioIsPlayActive <= 0) {
															CdAudioIsPlayActive_retres11 = 0;
															goto L118;
														}
														else if(CdAudioIsPlayActive_irp_CdAudioIsPlayActive < 0) {
L125:;
															CdAudioIsPlayActive_CIL___Tmp10 = CdAudioIsPlayActive_status;
															if(CdAudioIsPlayActive_CIL___Tmp10 >= 259 && CdAudioIsPlayActive_CIL___Tmp10 <= 259) {
{
 int KeWaitForSingleObject_tmp_ndt_7 ;
int KeWaitForSingleObject_retres7 ;
																int KeWaitForSingleObject_Object ; int KeWaitForSingleObject_WaitReason ; int KeWaitForSingleObject_WaitMode ; int KeWaitForSingleObject_Alertable ; int KeWaitForSingleObject_Timeout ;
																KeWaitForSingleObject_Object = CdAudioIsPlayActive_event;
																KeWaitForSingleObject_WaitReason = Suspended;
																KeWaitForSingleObject_WaitMode = KernelMode;
																KeWaitForSingleObject_Alertable = 0;
																KeWaitForSingleObject_Timeout = 0;
L126:;
																;
																TRACER_RV = nondet();
																CdAudioIsPlayActive_status = CdAudioIsPlayActive_ioStatus__Status;
L127:;
																if(CdAudioIsPlayActive_status < 0) {
																	CdAudioIsPlayActive_retres11 = 0;
																	goto L118;
																}
																else {
																	if(CdAudioIsPlayActive_currentBuffer__Header__AudioStatus >= 17 && CdAudioIsPlayActive_currentBuffer__Header__AudioStatus <= 17) {
																		CdAudioIsPlayActive_returnValue = 1;
																		CdAudioIsPlayActive_retres11 = CdAudioIsPlayActive_returnValue;
																		TRACER_RV = (CdAudioIsPlayActive_retres11);
																		CdAudio435DeviceControl_tmp___1 = TRACER_RV;
																		TRACER_RV = nondet();
																		CdAudio435DeviceControl_deviceExtension__PlayActive = 1;
																		CdAudio435DeviceControl_status = 0;
																		CdAudio435DeviceControl_Irp__IoStatus__Information = 0;
																		CdAudio435DeviceControl_CIL___Tmp115 = CdAudio435DeviceControl_status;
{
																		int IofCompleteRequest_Irp ; int IofCompleteRequest_PriorityBoost ;
																		IofCompleteRequest_Irp = CdAudio435DeviceControl_Irp;
																		IofCompleteRequest_PriorityBoost = 0;
																		safety = safety + (s - NP);
																		s = DC;
																		;
																		TRACER_RV = nondet();
																		CdAudio435DeviceControl_retres114 = CdAudio435DeviceControl_status;
																		CdAudio435DeviceControl_TRACER_returning = 1;
																		goto L107;
}
																	}
																	else if(CdAudioIsPlayActive_currentBuffer__Header__AudioStatus < 17) {
L128:;
																		CdAudioIsPlayActive_returnValue = 0;
																		CdAudioIsPlayActive_deviceExtension__PlayActive = 0;
																		CdAudioIsPlayActive_retres11 = CdAudioIsPlayActive_returnValue;
																		goto L118;
																	}
																	else {
																		goto L128;
																	}
																}
}
															}
															else if(CdAudioIsPlayActive_CIL___Tmp10 < 259) {
																goto L127;
															}
															else {
																goto L127;
															}
														}
														else {
															goto L125;
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
											}
											else if(CdAudio435DeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode < CdAudio435DeviceControl_CIL___Tmp92) {
												goto L93;
											}
											else {
												goto L93;
											}
										}
									}
									else {
										goto L117;
									}
								}
							}
						}
}
					}
					else if(CdAudioDeviceControl_deviceExtension__Active < 3) {
						goto L76;
					}
					else {
						if(CdAudioDeviceControl_deviceExtension__Active >= 7 && CdAudioDeviceControl_deviceExtension__Active <= 7) {
{
 int CdAudioHPCdrDeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode ;
int CdAudioHPCdrDeviceControl_deviceExtension__TargetDeviceObject ;
int CdAudioHPCdrDeviceControl_irpSp__Control ;
int CdAudioHPCdrDeviceControl_tmp ;
int CdAudioHPCdrDeviceControl_tmp___0 ;
int CdAudioHPCdrDeviceControl_CIL___Tmp8 ;
int CdAudioHPCdrDeviceControl_CIL___Tmp9 ;
int CdAudioHPCdrDeviceControl_CIL___Tmp10 ;
int CdAudioHPCdrDeviceControl_CIL___Tmp11 ;
int CdAudioHPCdrDeviceControl_CIL___Tmp12 ;
int CdAudioHPCdrDeviceControl_retres13 ;
							int CdAudioHPCdrDeviceControl_DeviceObject ; int CdAudioHPCdrDeviceControl_Irp ;
							CdAudioHPCdrDeviceControl_DeviceObject = CdAudioDeviceControl_DeviceObject;
							CdAudioHPCdrDeviceControl_Irp = CdAudioDeviceControl_Irp;
							CdAudioHPCdrDeviceControl_CIL___Tmp8 = 56;
							CdAudioHPCdrDeviceControl_CIL___Tmp9 = 16384;
							CdAudioHPCdrDeviceControl_CIL___Tmp10 = 131072;
							CdAudioHPCdrDeviceControl_CIL___Tmp11 = 147456;
							CdAudioHPCdrDeviceControl_CIL___Tmp12 = 147512;
							CdAudioHPCdrDeviceControl_retres13 = -1073741823;
							if(CdAudioHPCdrDeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode >= CdAudioHPCdrDeviceControl_CIL___Tmp12 && CdAudioHPCdrDeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode <= CdAudioHPCdrDeviceControl_CIL___Tmp12) {
								safety = safety + (s - NP);
								safety = safety + (compRegistered - 0);
								compRegistered = 1;
								routine = 0;
								CdAudioHPCdrDeviceControl_irpSp__Control = 224;
{
 int IofCallDriver_Irp__PendingReturned ;
int IofCallDriver_returnVal2 ;
int IofCallDriver_compRetStatus ;
int IofCallDriver_lcontext ;
int IofCallDriver_CIL___Tmp8 ;
int IofCallDriver_tmp_ndt_5 ;
int IofCallDriver_tmp_ndt_6 ;
								int IofCallDriver_DeviceObject ; int IofCallDriver_Irp ;
								IofCallDriver_DeviceObject = CdAudioHPCdrDeviceControl_deviceExtension__TargetDeviceObject;
								IofCallDriver_Irp = CdAudioHPCdrDeviceControl_Irp;
{
 int HPCdrCompletion_Irp__PendingReturned ;
int HPCdrCompletion_Irp__AssociatedIrp__SystemBuffer ;
								int HPCdrCompletion_DeviceObject ; int HPCdrCompletion_Irp ; int HPCdrCompletion_Context ;
								HPCdrCompletion_DeviceObject = IofCallDriver_DeviceObject;
								HPCdrCompletion_Irp = IofCallDriver_Irp;
								HPCdrCompletion_Context = IofCallDriver_lcontext;
								if(HPCdrCompletion_Irp__PendingReturned > 0) {
L129:;
									safety = safety + (pended - 0);
									pended = 1;
									IofCallDriver_compRetStatus = TRACER_RV;
									TRACER_RV = nondet();
									if(IofCallDriver_Irp__PendingReturned > 0) {
L130:;
L131:;
										CdAudioHPCdrDeviceControl_tmp = TRACER_RV;
										TRACER_RV = nondet();
										CdAudioDeviceControl_status = TRACER_RV;
										TRACER_RV = nondet();
										main_status = TRACER_RV;
										TRACER_RV = nondet();
L132:;
L133:;
										goto L8;
									}
									else if(IofCallDriver_Irp__PendingReturned < 0) {
										goto L130;
									}
									else {
										IofCallDriver_tmp_ndt_5 = __VERIFIER_nondet_int();
										if(IofCallDriver_tmp_ndt_5 >= 0 && IofCallDriver_tmp_ndt_5 <= 0) {
											CdAudioHPCdrDeviceControl_tmp = TRACER_RV;
											TRACER_RV = nondet();
											CdAudioDeviceControl_status = TRACER_RV;
											TRACER_RV = nondet();
											main_status = TRACER_RV;
											TRACER_RV = nondet();
L134:;
											goto L133;
										}
										else if(IofCallDriver_tmp_ndt_5 < 0) {
L135:;
											IofCallDriver_tmp_ndt_6 = __VERIFIER_nondet_int();
											if(IofCallDriver_tmp_ndt_6 >= 1 && IofCallDriver_tmp_ndt_6 <= 1) {
												IofCallDriver_returnVal2 = -1073741823;
												s = IPC;
												lowerDriverReturn = IofCallDriver_returnVal2;
												TRACER_RV = (IofCallDriver_returnVal2);
												CdAudioHPCdrDeviceControl_tmp = TRACER_RV;
												TRACER_RV = nondet();
												CdAudioHPCdrDeviceControl_retres13 = CdAudioHPCdrDeviceControl_tmp;
												TRACER_RV = (CdAudioHPCdrDeviceControl_retres13);
												CdAudioDeviceControl_status = TRACER_RV;
												TRACER_RV = nondet();
												TRACER_RV = (CdAudioDeviceControl_status);
												main_status = TRACER_RV;
												TRACER_RV = nondet();
L136:;
												goto L133;
											}
											else if(IofCallDriver_tmp_ndt_6 < 1) {
L137:;
												goto L131;
											}
											else {
												goto L137;
											}
										}
										else {
											goto L135;
										}
									}
								}
								else if(HPCdrCompletion_Irp__PendingReturned < 0) {
									goto L129;
								}
								else {
									IofCallDriver_compRetStatus = TRACER_RV;
									TRACER_RV = nondet();
									if(IofCallDriver_Irp__PendingReturned > 0) {
L138:;
										IofCallDriver_returnVal2 = 259;
L139:;
										s = IPC;
										lowerDriverReturn = IofCallDriver_returnVal2;
										TRACER_RV = (IofCallDriver_returnVal2);
										CdAudioHPCdrDeviceControl_tmp = TRACER_RV;
										TRACER_RV = nondet();
										CdAudioHPCdrDeviceControl_retres13 = CdAudioHPCdrDeviceControl_tmp;
										TRACER_RV = (CdAudioHPCdrDeviceControl_retres13);
										CdAudioDeviceControl_status = TRACER_RV;
										TRACER_RV = nondet();
										TRACER_RV = (CdAudioDeviceControl_status);
										main_status = TRACER_RV;
										TRACER_RV = nondet();
L140:;
L141:;
										safety = safety + (main_status - lowerDriverReturn);
										goto L7;
									}
									else if(IofCallDriver_Irp__PendingReturned < 0) {
										goto L138;
									}
									else {
										IofCallDriver_tmp_ndt_5 = __VERIFIER_nondet_int();
										if(IofCallDriver_tmp_ndt_5 >= 0 && IofCallDriver_tmp_ndt_5 <= 0) {
											IofCallDriver_returnVal2 = 0;
											s = IPC;
											lowerDriverReturn = IofCallDriver_returnVal2;
											TRACER_RV = (IofCallDriver_returnVal2);
											CdAudioHPCdrDeviceControl_tmp = TRACER_RV;
											TRACER_RV = nondet();
											CdAudioHPCdrDeviceControl_retres13 = CdAudioHPCdrDeviceControl_tmp;
											TRACER_RV = (CdAudioHPCdrDeviceControl_retres13);
											CdAudioDeviceControl_status = TRACER_RV;
											TRACER_RV = nondet();
											TRACER_RV = (CdAudioDeviceControl_status);
											main_status = TRACER_RV;
											TRACER_RV = nondet();
L142:;
											goto L141;
										}
										else if(IofCallDriver_tmp_ndt_5 < 0) {
L143:;
											IofCallDriver_tmp_ndt_6 = __VERIFIER_nondet_int();
											if(IofCallDriver_tmp_ndt_6 >= 1 && IofCallDriver_tmp_ndt_6 <= 1) {
												IofCallDriver_returnVal2 = -1073741823;
												s = IPC;
												lowerDriverReturn = IofCallDriver_returnVal2;
												TRACER_RV = (IofCallDriver_returnVal2);
												CdAudioHPCdrDeviceControl_tmp = TRACER_RV;
												TRACER_RV = nondet();
												CdAudioHPCdrDeviceControl_retres13 = CdAudioHPCdrDeviceControl_tmp;
												TRACER_RV = (CdAudioHPCdrDeviceControl_retres13);
												CdAudioDeviceControl_status = TRACER_RV;
												TRACER_RV = nondet();
												TRACER_RV = (CdAudioDeviceControl_status);
												main_status = TRACER_RV;
												TRACER_RV = nondet();
L144:;
												goto L141;
											}
											else if(IofCallDriver_tmp_ndt_6 < 1) {
L145:;
												IofCallDriver_returnVal2 = 259;
												goto L139;
											}
											else {
												goto L145;
											}
										}
										else {
											goto L143;
										}
									}
								}
}
}
							}
							else if(CdAudioHPCdrDeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode < CdAudioHPCdrDeviceControl_CIL___Tmp12) {
L146:;
{
 int CdAudioSendToNextDriver_Irp__CurrentLocation ;
int CdAudioSendToNextDriver_Irp__Tail__Overlay__CurrentStackLocation ;
int CdAudioSendToNextDriver_deviceExtension__TargetDeviceObject ;
int CdAudioSendToNextDriver_tmp ;
								int CdAudioSendToNextDriver_DeviceObject ; int CdAudioSendToNextDriver_Irp ;
								CdAudioSendToNextDriver_DeviceObject = CdAudioHPCdrDeviceControl_DeviceObject;
								CdAudioSendToNextDriver_Irp = CdAudioHPCdrDeviceControl_Irp;
								safety = safety + (s - NP);
								s = SKIP1;
								CdAudioSendToNextDriver_Irp__CurrentLocation = CdAudioSendToNextDriver_Irp__CurrentLocation + 1;
								CdAudioSendToNextDriver_Irp__Tail__Overlay__CurrentStackLocation = CdAudioSendToNextDriver_Irp__Tail__Overlay__CurrentStackLocation + 1;
{
 int IofCallDriver_Irp__PendingReturned ;
int IofCallDriver_returnVal2 ;
int IofCallDriver_compRetStatus ;
int IofCallDriver_lcontext ;
int IofCallDriver_CIL___Tmp8 ;
int IofCallDriver_tmp_ndt_5 ;
int IofCallDriver_tmp_ndt_6 ;
								int IofCallDriver_DeviceObject ; int IofCallDriver_Irp ;
								IofCallDriver_DeviceObject = CdAudioSendToNextDriver_deviceExtension__TargetDeviceObject;
								IofCallDriver_Irp = CdAudioSendToNextDriver_Irp;
								if(IofCallDriver_Irp__PendingReturned > 0) {
L147:;
									IofCallDriver_returnVal2 = 259;
L148:;
									safety = safety + (s - SKIP1);
									s = SKIP2;
									lowerDriverReturn = IofCallDriver_returnVal2;
									TRACER_RV = (IofCallDriver_returnVal2);
									CdAudioSendToNextDriver_tmp = TRACER_RV;
									TRACER_RV = nondet();
									TRACER_RV = (CdAudioSendToNextDriver_tmp);
									CdAudioHPCdrDeviceControl_tmp___0 = TRACER_RV;
									TRACER_RV = nondet();
									CdAudioHPCdrDeviceControl_retres13 = CdAudioHPCdrDeviceControl_tmp___0;
									TRACER_RV = (CdAudioHPCdrDeviceControl_retres13);
									CdAudioDeviceControl_status = TRACER_RV;
									TRACER_RV = nondet();
									goto L35;
								}
								else if(IofCallDriver_Irp__PendingReturned < 0) {
									goto L147;
								}
								else {
									IofCallDriver_tmp_ndt_5 = __VERIFIER_nondet_int();
									if(IofCallDriver_tmp_ndt_5 >= 0 && IofCallDriver_tmp_ndt_5 <= 0) {
										IofCallDriver_returnVal2 = 0;
										safety = safety + (s - SKIP1);
										s = SKIP2;
										lowerDriverReturn = IofCallDriver_returnVal2;
										TRACER_RV = (IofCallDriver_returnVal2);
										CdAudioSendToNextDriver_tmp = TRACER_RV;
										TRACER_RV = nondet();
										TRACER_RV = (CdAudioSendToNextDriver_tmp);
										CdAudioHPCdrDeviceControl_tmp___0 = TRACER_RV;
										TRACER_RV = nondet();
										CdAudioHPCdrDeviceControl_retres13 = CdAudioHPCdrDeviceControl_tmp___0;
										TRACER_RV = (CdAudioHPCdrDeviceControl_retres13);
										CdAudioDeviceControl_status = TRACER_RV;
										TRACER_RV = nondet();
										goto L39;
									}
									else if(IofCallDriver_tmp_ndt_5 < 0) {
L149:;
										IofCallDriver_tmp_ndt_6 = __VERIFIER_nondet_int();
										if(IofCallDriver_tmp_ndt_6 >= 1 && IofCallDriver_tmp_ndt_6 <= 1) {
											IofCallDriver_returnVal2 = -1073741823;
											safety = safety + (s - SKIP1);
											s = SKIP2;
											lowerDriverReturn = IofCallDriver_returnVal2;
											TRACER_RV = (IofCallDriver_returnVal2);
											CdAudioSendToNextDriver_tmp = TRACER_RV;
											TRACER_RV = nondet();
											TRACER_RV = (CdAudioSendToNextDriver_tmp);
											CdAudioHPCdrDeviceControl_tmp___0 = TRACER_RV;
											TRACER_RV = nondet();
											CdAudioHPCdrDeviceControl_retres13 = CdAudioHPCdrDeviceControl_tmp___0;
											TRACER_RV = (CdAudioHPCdrDeviceControl_retres13);
											CdAudioDeviceControl_status = TRACER_RV;
											TRACER_RV = nondet();
											goto L43;
										}
										else if(IofCallDriver_tmp_ndt_6 < 1) {
L150:;
											IofCallDriver_returnVal2 = 259;
											goto L148;
										}
										else {
											goto L150;
										}
									}
									else {
										goto L149;
									}
								}
}
}
							}
							else {
								goto L146;
							}
}
						}
						else if(CdAudioDeviceControl_deviceExtension__Active < 7) {
							goto L76;
						}
						else {
							goto L76;
						}
					}
				}
}
			}
			else if(main_tmp_ndt_1 < 2) {
L151:;
				main_tmp_ndt_2 = __VERIFIER_nondet_int();
				if(main_tmp_ndt_2 >= 3 && main_tmp_ndt_2 <= 3) {
{
 int CdAudioPnp_Irp__Tail__Overlay__CurrentStackLocation ;
int CdAudioPnp_irpSp__MinorFunction ;
int CdAudioPnp_Irp__IoStatus__Status ;
int CdAudioPnp_irpSp__Parameters__UsageNotification__Type ;
int CdAudioPnp_deviceExtension__PagingPathCountEvent ;
int CdAudioPnp_irpSp__Parameters__UsageNotification__InPath ;
int CdAudioPnp_deviceExtension__PagingPathCount ;
int CdAudioPnp_irpSp ;
int CdAudioPnp_status ;
int CdAudioPnp_setPagable ;
int CdAudioPnp_tmp ;
int CdAudioPnp_tmp___0 ;
int CdAudioPnp_retres15 ;
					int CdAudioPnp_DeviceObject ; int CdAudioPnp_Irp ;
					CdAudioPnp_DeviceObject = main_devobj;
					CdAudioPnp_Irp = pirp;
					if(CdAudioPnp_irpSp__MinorFunction >= 0 && CdAudioPnp_irpSp__MinorFunction <= 0) {
{
 int CdAudioStartDevice_deviceExtension__Active ;
int CdAudioStartDevice_status ;
int CdAudioStartDevice_srb__Cdb ;
int CdAudioStartDevice_cdb ;
int CdAudioStartDevice_inquiryDataPtr ;
int CdAudioStartDevice_attempt ;
int CdAudioStartDevice_deviceParameterHandle ;
int CdAudioStartDevice_keyValue ;
int CdAudioStartDevice_retres14 ;
int CdAudioStartDevice_TRACER_returning ;
						int CdAudioStartDevice_DeviceObject ; int CdAudioStartDevice_Irp ;
						CdAudioStartDevice_DeviceObject = CdAudioPnp_DeviceObject;
						CdAudioStartDevice_Irp = CdAudioPnp_Irp;
{
 int CdAudioForwardIrpSynchronous_deviceExtension__TargetDeviceObject ;
int CdAudioForwardIrpSynchronous_event ;
int CdAudioForwardIrpSynchronous_status ;
int CdAudioForwardIrpSynchronous_irpSp__Control ;
						int CdAudioForwardIrpSynchronous_DeviceObject ; int CdAudioForwardIrpSynchronous_Irp ;
						CdAudioForwardIrpSynchronous_DeviceObject = CdAudioStartDevice_DeviceObject;
						CdAudioForwardIrpSynchronous_Irp = CdAudioStartDevice_Irp;
						safety = safety + (s - NP);
						safety = safety + (compRegistered - 0);
						compRegistered = 1;
						routine = 1;
						CdAudioForwardIrpSynchronous_irpSp__Control = 224;
{
 int IofCallDriver_Irp__PendingReturned ;
int IofCallDriver_returnVal2 ;
int IofCallDriver_compRetStatus ;
int IofCallDriver_lcontext ;
int IofCallDriver_CIL___Tmp8 ;
int IofCallDriver_tmp_ndt_5 ;
int IofCallDriver_tmp_ndt_6 ;
						int IofCallDriver_DeviceObject ; int IofCallDriver_Irp ;
						IofCallDriver_DeviceObject = CdAudioForwardIrpSynchronous_deviceExtension__TargetDeviceObject;
						IofCallDriver_Irp = CdAudioForwardIrpSynchronous_Irp;
{
 int CdAudioSignalCompletion_retres4 ;
						int CdAudioSignalCompletion_DeviceObject ; int CdAudioSignalCompletion_Irp ; int CdAudioSignalCompletion_Event ;
						CdAudioSignalCompletion_DeviceObject = IofCallDriver_DeviceObject;
						CdAudioSignalCompletion_Irp = IofCallDriver_Irp;
						CdAudioSignalCompletion_Event = IofCallDriver_lcontext;
{
 int KeSetEvent_l ;
						int KeSetEvent_Event ; int KeSetEvent_Increment ; int KeSetEvent_Wait ;
						KeSetEvent_Event = CdAudioSignalCompletion_Event;
						KeSetEvent_Increment = 0;
						KeSetEvent_Wait = 0;
						setEventCalled = 1;
						;
						TRACER_RV = nondet();
						CdAudioSignalCompletion_retres4 = -1073741802;
						TRACER_RV = (CdAudioSignalCompletion_retres4);
						IofCallDriver_compRetStatus = TRACER_RV;
						TRACER_RV = nondet();
						IofCallDriver_CIL___Tmp8 = IofCallDriver_compRetStatus;
{
						safety = safety + (s - NP);
						s = MPR1;
						;
						TRACER_RV = nondet();
						if(IofCallDriver_Irp__PendingReturned > 0) {
L152:;
							IofCallDriver_returnVal2 = 259;
L153:;
							s = MPR3;
							lowerDriverReturn = IofCallDriver_returnVal2;
							CdAudioForwardIrpSynchronous_status = TRACER_RV;
							TRACER_RV = nondet();
							CdAudioForwardIrpSynchronous_status = 259;
{
 int KeWaitForSingleObject_tmp_ndt_7 ;
int KeWaitForSingleObject_retres7 ;
							int KeWaitForSingleObject_Object ; int KeWaitForSingleObject_WaitReason ; int KeWaitForSingleObject_WaitMode ; int KeWaitForSingleObject_Alertable ; int KeWaitForSingleObject_Timeout ;
							KeWaitForSingleObject_Object = CdAudioForwardIrpSynchronous_event;
							KeWaitForSingleObject_WaitReason = Executive;
							KeWaitForSingleObject_WaitMode = KernelMode;
							KeWaitForSingleObject_Alertable = 0;
							KeWaitForSingleObject_Timeout = 0;
							s = NP;
							setEventCalled = 0;
L154:;
							;
							TRACER_RV = nondet();
L155:;
							CdAudioForwardIrpSynchronous_status = myStatus;
							TRACER_RV = (CdAudioForwardIrpSynchronous_status);
							CdAudioStartDevice_status = TRACER_RV;
							TRACER_RV = nondet();
							CdAudioStartDevice_retres14 = CdAudioStartDevice_status;
							TRACER_RV = (CdAudioStartDevice_retres14);
							CdAudioPnp_status = TRACER_RV;
							TRACER_RV = nondet();
{
							int IofCompleteRequest_Irp ; int IofCompleteRequest_PriorityBoost ;
							IofCompleteRequest_Irp = CdAudioPnp_Irp;
							IofCompleteRequest_PriorityBoost = 0;
							safety = safety + (s - NP);
							s = DC;
							;
							TRACER_RV = nondet();
							CdAudioPnp_retres15 = CdAudioPnp_status;
L156:;
							TRACER_RV = (CdAudioPnp_retres15);
							main_status = TRACER_RV;
							TRACER_RV = nondet();
L157:;
							goto L62;
}
}
						}
						else if(IofCallDriver_Irp__PendingReturned < 0) {
							goto L152;
						}
						else {
							IofCallDriver_tmp_ndt_5 = __VERIFIER_nondet_int();
							if(IofCallDriver_tmp_ndt_5 >= 0 && IofCallDriver_tmp_ndt_5 <= 0) {
								IofCallDriver_returnVal2 = 0;
L158:;
								s = NP;
								lowerDriverReturn = IofCallDriver_returnVal2;
								CdAudioForwardIrpSynchronous_status = TRACER_RV;
								TRACER_RV = nondet();
								CdAudioForwardIrpSynchronous_status = 259;
{
 int KeWaitForSingleObject_tmp_ndt_7 ;
int KeWaitForSingleObject_retres7 ;
								int KeWaitForSingleObject_Object ; int KeWaitForSingleObject_WaitReason ; int KeWaitForSingleObject_WaitMode ; int KeWaitForSingleObject_Alertable ; int KeWaitForSingleObject_Timeout ;
								KeWaitForSingleObject_Object = CdAudioForwardIrpSynchronous_event;
								KeWaitForSingleObject_WaitReason = Executive;
								KeWaitForSingleObject_WaitMode = KernelMode;
								KeWaitForSingleObject_Alertable = 0;
								KeWaitForSingleObject_Timeout = 0;
L159:;
								;
								TRACER_RV = nondet();
								goto L155;
}
							}
							else if(IofCallDriver_tmp_ndt_5 < 0) {
L160:;
								IofCallDriver_tmp_ndt_6 = __VERIFIER_nondet_int();
								if(IofCallDriver_tmp_ndt_6 >= 1 && IofCallDriver_tmp_ndt_6 <= 1) {
									IofCallDriver_returnVal2 = -1073741823;
									goto L158;
								}
								else if(IofCallDriver_tmp_ndt_6 < 1) {
L161:;
									IofCallDriver_returnVal2 = 259;
									goto L153;
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
}
					}
					else if(CdAudioPnp_irpSp__MinorFunction < 0) {
L162:;
{
 int CdAudioSendToNextDriver_Irp__CurrentLocation ;
int CdAudioSendToNextDriver_Irp__Tail__Overlay__CurrentStackLocation ;
int CdAudioSendToNextDriver_deviceExtension__TargetDeviceObject ;
int CdAudioSendToNextDriver_tmp ;
						int CdAudioSendToNextDriver_DeviceObject ; int CdAudioSendToNextDriver_Irp ;
						CdAudioSendToNextDriver_DeviceObject = CdAudioPnp_DeviceObject;
						CdAudioSendToNextDriver_Irp = CdAudioPnp_Irp;
						safety = safety + (s - NP);
						s = SKIP1;
						CdAudioSendToNextDriver_Irp__CurrentLocation = CdAudioSendToNextDriver_Irp__CurrentLocation + 1;
						CdAudioSendToNextDriver_Irp__Tail__Overlay__CurrentStackLocation = CdAudioSendToNextDriver_Irp__Tail__Overlay__CurrentStackLocation + 1;
{
 int IofCallDriver_Irp__PendingReturned ;
int IofCallDriver_returnVal2 ;
int IofCallDriver_compRetStatus ;
int IofCallDriver_lcontext ;
int IofCallDriver_CIL___Tmp8 ;
int IofCallDriver_tmp_ndt_5 ;
int IofCallDriver_tmp_ndt_6 ;
						int IofCallDriver_DeviceObject ; int IofCallDriver_Irp ;
						IofCallDriver_DeviceObject = CdAudioSendToNextDriver_deviceExtension__TargetDeviceObject;
						IofCallDriver_Irp = CdAudioSendToNextDriver_Irp;
						if(IofCallDriver_Irp__PendingReturned > 0) {
L163:;
							IofCallDriver_returnVal2 = 259;
L164:;
							safety = safety + (s - SKIP1);
							s = SKIP2;
							lowerDriverReturn = IofCallDriver_returnVal2;
							TRACER_RV = (IofCallDriver_returnVal2);
							CdAudioSendToNextDriver_tmp = TRACER_RV;
							TRACER_RV = nondet();
							TRACER_RV = (CdAudioSendToNextDriver_tmp);
							CdAudioPnp_tmp___0 = TRACER_RV;
							TRACER_RV = nondet();
							CdAudioPnp_retres15 = CdAudioPnp_tmp___0;
							TRACER_RV = (CdAudioPnp_retres15);
							main_status = TRACER_RV;
							TRACER_RV = nondet();
L165:;
							goto L37;
						}
						else if(IofCallDriver_Irp__PendingReturned < 0) {
							goto L163;
						}
						else {
							IofCallDriver_tmp_ndt_5 = __VERIFIER_nondet_int();
							if(IofCallDriver_tmp_ndt_5 >= 0 && IofCallDriver_tmp_ndt_5 <= 0) {
								IofCallDriver_returnVal2 = 0;
								safety = safety + (s - SKIP1);
								s = SKIP2;
								lowerDriverReturn = IofCallDriver_returnVal2;
								TRACER_RV = (IofCallDriver_returnVal2);
								CdAudioSendToNextDriver_tmp = TRACER_RV;
								TRACER_RV = nondet();
								TRACER_RV = (CdAudioSendToNextDriver_tmp);
								CdAudioPnp_tmp___0 = TRACER_RV;
								TRACER_RV = nondet();
								CdAudioPnp_retres15 = CdAudioPnp_tmp___0;
								TRACER_RV = (CdAudioPnp_retres15);
								main_status = TRACER_RV;
								TRACER_RV = nondet();
L166:;
								goto L41;
							}
							else if(IofCallDriver_tmp_ndt_5 < 0) {
L167:;
								IofCallDriver_tmp_ndt_6 = __VERIFIER_nondet_int();
								if(IofCallDriver_tmp_ndt_6 >= 1 && IofCallDriver_tmp_ndt_6 <= 1) {
									IofCallDriver_returnVal2 = -1073741823;
									safety = safety + (s - SKIP1);
									s = SKIP2;
									lowerDriverReturn = IofCallDriver_returnVal2;
									TRACER_RV = (IofCallDriver_returnVal2);
									CdAudioSendToNextDriver_tmp = TRACER_RV;
									TRACER_RV = nondet();
									TRACER_RV = (CdAudioSendToNextDriver_tmp);
									CdAudioPnp_tmp___0 = TRACER_RV;
									TRACER_RV = nondet();
									CdAudioPnp_retres15 = CdAudioPnp_tmp___0;
									TRACER_RV = (CdAudioPnp_retres15);
									main_status = TRACER_RV;
									TRACER_RV = nondet();
L168:;
									goto L45;
								}
								else if(IofCallDriver_tmp_ndt_6 < 1) {
L169:;
									IofCallDriver_returnVal2 = 259;
									goto L164;
								}
								else {
									goto L169;
								}
							}
							else {
								goto L167;
							}
						}
}
}
					}
					else {
						if(CdAudioPnp_irpSp__MinorFunction >= 22 && CdAudioPnp_irpSp__MinorFunction <= 22) {
							if(CdAudioPnp_irpSp__Parameters__UsageNotification__Type > DeviceUsageTypePaging) {
L170:;
{
 int CdAudioSendToNextDriver_Irp__CurrentLocation ;
int CdAudioSendToNextDriver_Irp__Tail__Overlay__CurrentStackLocation ;
int CdAudioSendToNextDriver_deviceExtension__TargetDeviceObject ;
int CdAudioSendToNextDriver_tmp ;
								int CdAudioSendToNextDriver_DeviceObject ; int CdAudioSendToNextDriver_Irp ;
								CdAudioSendToNextDriver_DeviceObject = CdAudioPnp_DeviceObject;
								CdAudioSendToNextDriver_Irp = CdAudioPnp_Irp;
								safety = safety + (s - NP);
								s = SKIP1;
								CdAudioSendToNextDriver_Irp__CurrentLocation = CdAudioSendToNextDriver_Irp__CurrentLocation + 1;
								CdAudioSendToNextDriver_Irp__Tail__Overlay__CurrentStackLocation = CdAudioSendToNextDriver_Irp__Tail__Overlay__CurrentStackLocation + 1;
{
 int IofCallDriver_Irp__PendingReturned ;
int IofCallDriver_returnVal2 ;
int IofCallDriver_compRetStatus ;
int IofCallDriver_lcontext ;
int IofCallDriver_CIL___Tmp8 ;
int IofCallDriver_tmp_ndt_5 ;
int IofCallDriver_tmp_ndt_6 ;
								int IofCallDriver_DeviceObject ; int IofCallDriver_Irp ;
								IofCallDriver_DeviceObject = CdAudioSendToNextDriver_deviceExtension__TargetDeviceObject;
								IofCallDriver_Irp = CdAudioSendToNextDriver_Irp;
								if(IofCallDriver_Irp__PendingReturned > 0) {
L171:;
									IofCallDriver_returnVal2 = 259;
L172:;
									safety = safety + (s - SKIP1);
									s = SKIP2;
									lowerDriverReturn = IofCallDriver_returnVal2;
									TRACER_RV = (IofCallDriver_returnVal2);
									CdAudioSendToNextDriver_tmp = TRACER_RV;
									TRACER_RV = nondet();
									TRACER_RV = (CdAudioSendToNextDriver_tmp);
									CdAudioPnp_tmp = TRACER_RV;
									TRACER_RV = nondet();
									CdAudioPnp_retres15 = CdAudioPnp_tmp;
									TRACER_RV = (CdAudioPnp_retres15);
									main_status = TRACER_RV;
									TRACER_RV = nondet();
									goto L165;
								}
								else if(IofCallDriver_Irp__PendingReturned < 0) {
									goto L171;
								}
								else {
									IofCallDriver_tmp_ndt_5 = __VERIFIER_nondet_int();
									if(IofCallDriver_tmp_ndt_5 >= 0 && IofCallDriver_tmp_ndt_5 <= 0) {
										IofCallDriver_returnVal2 = 0;
										safety = safety + (s - SKIP1);
										s = SKIP2;
										lowerDriverReturn = IofCallDriver_returnVal2;
										TRACER_RV = (IofCallDriver_returnVal2);
										CdAudioSendToNextDriver_tmp = TRACER_RV;
										TRACER_RV = nondet();
										TRACER_RV = (CdAudioSendToNextDriver_tmp);
										CdAudioPnp_tmp = TRACER_RV;
										TRACER_RV = nondet();
										CdAudioPnp_retres15 = CdAudioPnp_tmp;
										TRACER_RV = (CdAudioPnp_retres15);
										main_status = TRACER_RV;
										TRACER_RV = nondet();
										goto L166;
									}
									else if(IofCallDriver_tmp_ndt_5 < 0) {
L173:;
										IofCallDriver_tmp_ndt_6 = __VERIFIER_nondet_int();
										if(IofCallDriver_tmp_ndt_6 >= 1 && IofCallDriver_tmp_ndt_6 <= 1) {
											IofCallDriver_returnVal2 = -1073741823;
											safety = safety + (s - SKIP1);
											s = SKIP2;
											lowerDriverReturn = IofCallDriver_returnVal2;
											TRACER_RV = (IofCallDriver_returnVal2);
											CdAudioSendToNextDriver_tmp = TRACER_RV;
											TRACER_RV = nondet();
											TRACER_RV = (CdAudioSendToNextDriver_tmp);
											CdAudioPnp_tmp = TRACER_RV;
											TRACER_RV = nondet();
											CdAudioPnp_retres15 = CdAudioPnp_tmp;
											TRACER_RV = (CdAudioPnp_retres15);
											main_status = TRACER_RV;
											TRACER_RV = nondet();
											goto L168;
										}
										else if(IofCallDriver_tmp_ndt_6 < 1) {
L174:;
											IofCallDriver_returnVal2 = 259;
											goto L172;
										}
										else {
											goto L174;
										}
									}
									else {
										goto L173;
									}
								}
}
}
							}
							else if(CdAudioPnp_irpSp__Parameters__UsageNotification__Type < DeviceUsageTypePaging) {
								goto L170;
							}
							else {
{
 int KeWaitForSingleObject_tmp_ndt_7 ;
int KeWaitForSingleObject_retres7 ;
								int KeWaitForSingleObject_Object ; int KeWaitForSingleObject_WaitReason ; int KeWaitForSingleObject_WaitMode ; int KeWaitForSingleObject_Alertable ; int KeWaitForSingleObject_Timeout ;
								KeWaitForSingleObject_Object = CdAudioPnp_deviceExtension__PagingPathCountEvent;
								KeWaitForSingleObject_WaitReason = Executive;
								KeWaitForSingleObject_WaitMode = KernelMode;
								KeWaitForSingleObject_Alertable = 0;
								KeWaitForSingleObject_Timeout = 0;
L175:;
								CdAudioPnp_status = TRACER_RV;
								TRACER_RV = nondet();
								CdAudioPnp_setPagable = 0;
L176:;
L177:;
L178:;
{
 int CdAudioForwardIrpSynchronous_deviceExtension__TargetDeviceObject ;
int CdAudioForwardIrpSynchronous_event ;
int CdAudioForwardIrpSynchronous_status ;
int CdAudioForwardIrpSynchronous_irpSp__Control ;
								int CdAudioForwardIrpSynchronous_DeviceObject ; int CdAudioForwardIrpSynchronous_Irp ;
								CdAudioForwardIrpSynchronous_DeviceObject = CdAudioPnp_DeviceObject;
								CdAudioForwardIrpSynchronous_Irp = CdAudioPnp_Irp;
								safety = safety + (s - NP);
								safety = safety + (compRegistered - 0);
								compRegistered = 1;
								routine = 1;
								CdAudioForwardIrpSynchronous_irpSp__Control = 224;
{
 int IofCallDriver_Irp__PendingReturned ;
int IofCallDriver_returnVal2 ;
int IofCallDriver_compRetStatus ;
int IofCallDriver_lcontext ;
int IofCallDriver_CIL___Tmp8 ;
int IofCallDriver_tmp_ndt_5 ;
int IofCallDriver_tmp_ndt_6 ;
								int IofCallDriver_DeviceObject ; int IofCallDriver_Irp ;
								IofCallDriver_DeviceObject = CdAudioForwardIrpSynchronous_deviceExtension__TargetDeviceObject;
								IofCallDriver_Irp = CdAudioForwardIrpSynchronous_Irp;
{
 int CdAudioSignalCompletion_retres4 ;
								int CdAudioSignalCompletion_DeviceObject ; int CdAudioSignalCompletion_Irp ; int CdAudioSignalCompletion_Event ;
								CdAudioSignalCompletion_DeviceObject = IofCallDriver_DeviceObject;
								CdAudioSignalCompletion_Irp = IofCallDriver_Irp;
								CdAudioSignalCompletion_Event = IofCallDriver_lcontext;
{
 int KeSetEvent_l ;
								int KeSetEvent_Event ; int KeSetEvent_Increment ; int KeSetEvent_Wait ;
								KeSetEvent_Event = CdAudioSignalCompletion_Event;
								KeSetEvent_Increment = 0;
								KeSetEvent_Wait = 0;
								setEventCalled = 1;
								;
								TRACER_RV = nondet();
								CdAudioSignalCompletion_retres4 = -1073741802;
								TRACER_RV = (CdAudioSignalCompletion_retres4);
								IofCallDriver_compRetStatus = TRACER_RV;
								TRACER_RV = nondet();
								IofCallDriver_CIL___Tmp8 = IofCallDriver_compRetStatus;
{
								safety = safety + (s - NP);
								s = MPR1;
								;
								TRACER_RV = nondet();
								if(IofCallDriver_Irp__PendingReturned > 0) {
L179:;
									IofCallDriver_returnVal2 = 259;
L180:;
									s = MPR3;
									lowerDriverReturn = IofCallDriver_returnVal2;
									CdAudioForwardIrpSynchronous_status = TRACER_RV;
									TRACER_RV = nondet();
									CdAudioForwardIrpSynchronous_status = 259;
{
 int KeWaitForSingleObject_tmp_ndt_7 ;
int KeWaitForSingleObject_retres7 ;
									int KeWaitForSingleObject_Object ; int KeWaitForSingleObject_WaitReason ; int KeWaitForSingleObject_WaitMode ; int KeWaitForSingleObject_Alertable ; int KeWaitForSingleObject_Timeout ;
									KeWaitForSingleObject_Object = CdAudioForwardIrpSynchronous_event;
									KeWaitForSingleObject_WaitReason = Executive;
									KeWaitForSingleObject_WaitMode = KernelMode;
									KeWaitForSingleObject_Alertable = 0;
									KeWaitForSingleObject_Timeout = 0;
									s = NP;
									setEventCalled = 0;
L181:;
									;
									TRACER_RV = nondet();
L182:;
									CdAudioForwardIrpSynchronous_status = myStatus;
									TRACER_RV = (CdAudioForwardIrpSynchronous_status);
									CdAudioPnp_status = TRACER_RV;
									TRACER_RV = nondet();
L183:;
{
 int KeSetEvent_l ;
									int KeSetEvent_Event ; int KeSetEvent_Increment ; int KeSetEvent_Wait ;
									KeSetEvent_Event = CdAudioPnp_deviceExtension__PagingPathCountEvent;
									KeSetEvent_Increment = 0;
									KeSetEvent_Wait = 0;
									;
									TRACER_RV = nondet();
{
									int IofCompleteRequest_Irp ; int IofCompleteRequest_PriorityBoost ;
									IofCompleteRequest_Irp = CdAudioPnp_Irp;
									IofCompleteRequest_PriorityBoost = 0;
									safety = safety + (s - NP);
									s = DC;
									;
									TRACER_RV = nondet();
									CdAudioPnp_retres15 = CdAudioPnp_status;
									goto L156;
}
}
}
								}
								else if(IofCallDriver_Irp__PendingReturned < 0) {
									goto L179;
								}
								else {
									IofCallDriver_tmp_ndt_5 = __VERIFIER_nondet_int();
									if(IofCallDriver_tmp_ndt_5 >= 0 && IofCallDriver_tmp_ndt_5 <= 0) {
										IofCallDriver_returnVal2 = 0;
L184:;
										s = NP;
										lowerDriverReturn = IofCallDriver_returnVal2;
										CdAudioForwardIrpSynchronous_status = TRACER_RV;
										TRACER_RV = nondet();
										CdAudioForwardIrpSynchronous_status = 259;
{
 int KeWaitForSingleObject_tmp_ndt_7 ;
int KeWaitForSingleObject_retres7 ;
										int KeWaitForSingleObject_Object ; int KeWaitForSingleObject_WaitReason ; int KeWaitForSingleObject_WaitMode ; int KeWaitForSingleObject_Alertable ; int KeWaitForSingleObject_Timeout ;
										KeWaitForSingleObject_Object = CdAudioForwardIrpSynchronous_event;
										KeWaitForSingleObject_WaitReason = Executive;
										KeWaitForSingleObject_WaitMode = KernelMode;
										KeWaitForSingleObject_Alertable = 0;
										KeWaitForSingleObject_Timeout = 0;
L185:;
										;
										TRACER_RV = nondet();
										goto L182;
}
									}
									else if(IofCallDriver_tmp_ndt_5 < 0) {
L186:;
										IofCallDriver_tmp_ndt_6 = __VERIFIER_nondet_int();
										if(IofCallDriver_tmp_ndt_6 >= 1 && IofCallDriver_tmp_ndt_6 <= 1) {
											IofCallDriver_returnVal2 = -1073741823;
											goto L184;
										}
										else if(IofCallDriver_tmp_ndt_6 < 1) {
L187:;
											IofCallDriver_returnVal2 = 259;
											goto L180;
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
}
}
}
							}
						}
						else if(CdAudioPnp_irpSp__MinorFunction < 22) {
							goto L162;
						}
						else {
							goto L162;
						}
					}
}
				}
				else if(main_tmp_ndt_2 < 3) {
L188:;
					main_tmp_ndt_3 = __VERIFIER_nondet_int();
					if(main_tmp_ndt_3 >= 4 && main_tmp_ndt_3 <= 4) {
{
 int CdAudioPower_Irp__CurrentLocation ;
int CdAudioPower_Irp__Tail__Overlay__CurrentStackLocation ;
int CdAudioPower_deviceExtension__TargetDeviceObject ;
int CdAudioPower_tmp ;
						int CdAudioPower_DeviceObject ; int CdAudioPower_Irp ;
						CdAudioPower_DeviceObject = main_devobj;
						CdAudioPower_Irp = pirp;
						safety = safety + (s - NP);
						s = SKIP1;
						CdAudioPower_Irp__CurrentLocation = CdAudioPower_Irp__CurrentLocation + 1;
						CdAudioPower_Irp__Tail__Overlay__CurrentStackLocation = CdAudioPower_Irp__Tail__Overlay__CurrentStackLocation + 1;
{
 int PoCallDriver_compRetStatus ;
int PoCallDriver_returnVal ;
int PoCallDriver_lcontext ;
int PoCallDriver_CIL___Tmp7 ;
int PoCallDriver_CIL___Tmp8 ;
int PoCallDriver_tmp_ndt_8 ;
int PoCallDriver_tmp_ndt_9 ;
						int PoCallDriver_DeviceObject ; int PoCallDriver_Irp ;
						PoCallDriver_DeviceObject = CdAudioPower_deviceExtension__TargetDeviceObject;
						PoCallDriver_Irp = CdAudioPower_Irp;
						PoCallDriver_tmp_ndt_8 = __VERIFIER_nondet_int();
						if(PoCallDriver_tmp_ndt_8 >= 0 && PoCallDriver_tmp_ndt_8 <= 0) {
							PoCallDriver_returnVal = 0;
							safety = safety + (s - SKIP1);
							s = SKIP2;
							lowerDriverReturn = PoCallDriver_returnVal;
							TRACER_RV = (PoCallDriver_returnVal);
							CdAudioPower_tmp = TRACER_RV;
							TRACER_RV = nondet();
							TRACER_RV = (CdAudioPower_tmp);
							main_status = TRACER_RV;
							TRACER_RV = nondet();
							goto L41;
						}
						else if(PoCallDriver_tmp_ndt_8 < 0) {
L189:;
							PoCallDriver_tmp_ndt_9 = __VERIFIER_nondet_int();
							if(PoCallDriver_tmp_ndt_9 >= 1 && PoCallDriver_tmp_ndt_9 <= 1) {
								PoCallDriver_returnVal = -1073741823;
								safety = safety + (s - SKIP1);
								s = SKIP2;
								lowerDriverReturn = PoCallDriver_returnVal;
								TRACER_RV = (PoCallDriver_returnVal);
								CdAudioPower_tmp = TRACER_RV;
								TRACER_RV = nondet();
								TRACER_RV = (CdAudioPower_tmp);
								main_status = TRACER_RV;
								TRACER_RV = nondet();
								goto L45;
							}
							else if(PoCallDriver_tmp_ndt_9 < 1) {
L190:;
								PoCallDriver_returnVal = 259;
								safety = safety + (s - SKIP1);
								s = SKIP2;
								lowerDriverReturn = PoCallDriver_returnVal;
								TRACER_RV = (PoCallDriver_returnVal);
								CdAudioPower_tmp = TRACER_RV;
								TRACER_RV = nondet();
								TRACER_RV = (CdAudioPower_tmp);
								main_status = TRACER_RV;
								TRACER_RV = nondet();
								goto L37;
							}
							else {
								goto L190;
							}
						}
						else {
							goto L189;
						}
}
}
					}
					else if(main_tmp_ndt_3 < 4) {
L191:;
						main_TRACER_returning = 1;
						goto L8;
					}
					else {
						goto L191;
					}
				}
				else {
					goto L188;
				}
			}
			else {
				goto L151;
			}
}
		}
		else if(main_irp_choice < 0) {
L192:;
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
			if(main_tmp_ndt_1 >= 2 && main_tmp_ndt_1 <= 2) {
{
 int CdAudioDeviceControl_deviceExtension__Active ;
int CdAudioDeviceControl_status ;
				int CdAudioDeviceControl_DeviceObject ; int CdAudioDeviceControl_Irp ;
				CdAudioDeviceControl_DeviceObject = main_devobj;
				CdAudioDeviceControl_Irp = pirp;
				if(CdAudioDeviceControl_deviceExtension__Active >= 2 && CdAudioDeviceControl_deviceExtension__Active <= 2) {
{
 int CdAudio535DeviceControl_Irp__Tail__Overlay__CurrentStackLocation ;
int CdAudio535DeviceControl_DeviceObject__DeviceExtension ;
int CdAudio535DeviceControl_deviceExtension__TargetDeviceObject ;
int CdAudio535DeviceControl_Irp__AssociatedIrp__SystemBuffer ;
int CdAudio535DeviceControl_srb__Cdb ;
int CdAudio535DeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode ;
int CdAudio535DeviceControl_Irp__IoStatus__Information ;
int CdAudio535DeviceControl_currentIrpStack__Parameters__DeviceIoControl__OutputBufferLength ;
int CdAudio535DeviceControl_currentIrpStack__Parameters__DeviceIoControl__InputBufferLength ;
int CdAudio535DeviceControl_srb__CdbLength ;
int CdAudio535DeviceControl_cdb__CDB10__OperationCode ;
int CdAudio535DeviceControl_srb__TimeOutValue ;
int CdAudio535DeviceControl_sizeof__READ_CAPACITY_DATA ;
int CdAudio535DeviceControl_lastSession__LogicalBlockAddress ;
int CdAudio535DeviceControl_cdaudioDataOut__FirstTrack ;
int CdAudio535DeviceControl_cdaudioDataOut__LastTrack ;
int CdAudio535DeviceControl_sizeof__CDROM_TOC ;
int CdAudio535DeviceControl_sizeof__SUB_Q_CURRENT_POSITION ;
int CdAudio535DeviceControl_userPtr__Format ;
int CdAudio535DeviceControl_sizeof__CDROM_PLAY_AUDIO_MSF ;
int CdAudio535DeviceControl_sizeof__CDROM_SEEK_AUDIO_MSF ;
int CdAudio535DeviceControl_currentIrpStack ;
int CdAudio535DeviceControl_deviceExtension ;
int CdAudio535DeviceControl_cdaudioDataOut ;
int CdAudio535DeviceControl_srb ;
int CdAudio535DeviceControl_lastSession ;
int CdAudio535DeviceControl_cdb ;
int CdAudio535DeviceControl_status ;
int CdAudio535DeviceControl_i ;
int CdAudio535DeviceControl_bytesTransfered ;
int CdAudio535DeviceControl_Toc ;
int CdAudio535DeviceControl_tmp ;
int CdAudio535DeviceControl_tmp___0 ;
int CdAudio535DeviceControl_tmp___1 ;
int CdAudio535DeviceControl_tmp___2 ;
int CdAudio535DeviceControl_tmp___3 ;
int CdAudio535DeviceControl_tmp___4 ;
int CdAudio535DeviceControl_tracksToReturn ;
int CdAudio535DeviceControl_tracksOnCd ;
int CdAudio535DeviceControl_tracksInBuffer ;
int CdAudio535DeviceControl_userPtr ;
int CdAudio535DeviceControl_SubQPtr ;
int CdAudio535DeviceControl_tmp___5 ;
int CdAudio535DeviceControl_tmp___6 ;
int CdAudio535DeviceControl_inputBuffer ;
int CdAudio535DeviceControl_inputBuffer___0 ;
int CdAudio535DeviceControl_tmp___7 ;
int CdAudio535DeviceControl_tmp___8 ;
int CdAudio535DeviceControl_CIL___Tmp58 ;
int CdAudio535DeviceControl_CIL___Tmp59 ;
int CdAudio535DeviceControl_CIL___Tmp60 ;
int CdAudio535DeviceControl_CIL___Tmp61 ;
int CdAudio535DeviceControl_CIL___Tmp62 ;
int CdAudio535DeviceControl_CIL___Tmp63 ;
int CdAudio535DeviceControl_CIL___Tmp64 ;
int CdAudio535DeviceControl_CIL___Tmp65 ;
int CdAudio535DeviceControl_CIL___Tmp66 ;
int CdAudio535DeviceControl_CIL___Tmp67 ;
int CdAudio535DeviceControl_CIL___Tmp68 ;
int CdAudio535DeviceControl_CIL___Tmp69 ;
int CdAudio535DeviceControl_CIL___Tmp70 ;
int CdAudio535DeviceControl_CIL___Tmp71 ;
int CdAudio535DeviceControl_CIL___Tmp72 ;
int CdAudio535DeviceControl_CIL___Tmp73 ;
int CdAudio535DeviceControl_CIL___Tmp74 ;
int CdAudio535DeviceControl_CIL___Tmp75 ;
int CdAudio535DeviceControl_CIL___Tmp76 ;
int CdAudio535DeviceControl_CIL___Tmp77 ;
int CdAudio535DeviceControl_CIL___Tmp78 ;
int CdAudio535DeviceControl_CIL___Tmp79 ;
int CdAudio535DeviceControl_CIL___Tmp80 ;
int CdAudio535DeviceControl_CIL___Tmp81 ;
int CdAudio535DeviceControl_CIL___Tmp82 ;
int CdAudio535DeviceControl_CIL___Tmp83 ;
int CdAudio535DeviceControl_CIL___Tmp84 ;
int CdAudio535DeviceControl_CIL___Tmp85 ;
int CdAudio535DeviceControl_CIL___Tmp86 ;
int CdAudio535DeviceControl_CIL___Tmp87 ;
int CdAudio535DeviceControl_CIL___Tmp88 ;
int CdAudio535DeviceControl_CIL___Tmp89 ;
int CdAudio535DeviceControl_CIL___Tmp90 ;
int CdAudio535DeviceControl_CIL___Tmp91 ;
int CdAudio535DeviceControl_CIL___Tmp92 ;
int CdAudio535DeviceControl_CIL___Tmp93 ;
int CdAudio535DeviceControl_CIL___Tmp94 ;
int CdAudio535DeviceControl_CIL___Tmp95 ;
int CdAudio535DeviceControl_CIL___Tmp96 ;
int CdAudio535DeviceControl_CIL___Tmp97 ;
int CdAudio535DeviceControl_CIL___Tmp98 ;
int CdAudio535DeviceControl_CIL___Tmp99 ;
int CdAudio535DeviceControl_CIL___Tmp100 ;
int CdAudio535DeviceControl_CIL___Tmp101 ;
int CdAudio535DeviceControl_CIL___Tmp102 ;
int CdAudio535DeviceControl_CIL___Tmp103 ;
int CdAudio535DeviceControl_CIL___Tmp104 ;
int CdAudio535DeviceControl_CIL___Tmp105 ;
int CdAudio535DeviceControl_CIL___Tmp107 ;
int CdAudio535DeviceControl_CIL___Tmp108 ;
int CdAudio535DeviceControl_CIL___Tmp109 ;
int CdAudio535DeviceControl_retres109 ;
int CdAudio535DeviceControl_TRACER_returning ;
					int CdAudio535DeviceControl_DeviceObject ; int CdAudio535DeviceControl_Irp ;
					CdAudio535DeviceControl_DeviceObject = CdAudioDeviceControl_DeviceObject;
					CdAudio535DeviceControl_Irp = CdAudioDeviceControl_Irp;
					CdAudio535DeviceControl_TRACER_returning = 0;
					CdAudio535DeviceControl_currentIrpStack = CdAudio535DeviceControl_Irp__Tail__Overlay__CurrentStackLocation;
					CdAudio535DeviceControl_deviceExtension = CdAudio535DeviceControl_DeviceObject__DeviceExtension;
					CdAudio535DeviceControl_cdaudioDataOut = CdAudio535DeviceControl_Irp__AssociatedIrp__SystemBuffer;
					CdAudio535DeviceControl_cdb = CdAudio535DeviceControl_srb__Cdb;
					CdAudio535DeviceControl_CIL___Tmp58 = 56;
					CdAudio535DeviceControl_CIL___Tmp59 = 16384;
					CdAudio535DeviceControl_CIL___Tmp60 = 131072;
					CdAudio535DeviceControl_CIL___Tmp61 = 147456;
					CdAudio535DeviceControl_CIL___Tmp62 = 147512;
					if(CdAudio535DeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode >= CdAudio535DeviceControl_CIL___Tmp62 && CdAudio535DeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode <= CdAudio535DeviceControl_CIL___Tmp62) {
{
 int CdAudioIsPlayActive_deviceExtension__PlayActive ;
int CdAudioIsPlayActive_ioStatus__Status ;
int CdAudioIsPlayActive_currentBuffer__Header__AudioStatus ;
int CdAudioIsPlayActive_irp_CdAudioIsPlayActive ;
int CdAudioIsPlayActive_event ;
int CdAudioIsPlayActive_status ;
int CdAudioIsPlayActive_currentBuffer ;
int CdAudioIsPlayActive_returnValue ;
int CdAudioIsPlayActive_CIL___Tmp10 ;
int CdAudioIsPlayActive_retres11 ;
						int CdAudioIsPlayActive_DeviceObject ;
						CdAudioIsPlayActive_DeviceObject = CdAudio535DeviceControl_DeviceObject;
						if(CdAudioIsPlayActive_deviceExtension__PlayActive >= 0 && CdAudioIsPlayActive_deviceExtension__PlayActive <= 0) {
							CdAudioIsPlayActive_retres11 = 0;
L193:;
							TRACER_RV = (CdAudioIsPlayActive_retres11);
							CdAudio535DeviceControl_tmp = TRACER_RV;
							TRACER_RV = nondet();
							if(CdAudio535DeviceControl_currentIrpStack__Parameters__DeviceIoControl__OutputBufferLength > 0) {
L194:;
								CdAudio535DeviceControl_status = -1073741789;
								CdAudio535DeviceControl_Irp__IoStatus__Information = 0;
L195:;
{
 int AG_SetStatusAndReturn_CIL___Tmp4 ;
								int AG_SetStatusAndReturn_status ; int AG_SetStatusAndReturn_Irp ; int AG_SetStatusAndReturn_deviceExtension__TargetDeviceObject ;
								AG_SetStatusAndReturn_status = CdAudio535DeviceControl_status;
								AG_SetStatusAndReturn_Irp = CdAudio535DeviceControl_Irp;
								AG_SetStatusAndReturn_deviceExtension__TargetDeviceObject = CdAudio535DeviceControl_deviceExtension__TargetDeviceObject;
{
								int IofCompleteRequest_Irp ; int IofCompleteRequest_PriorityBoost ;
								IofCompleteRequest_Irp = AG_SetStatusAndReturn_Irp;
								IofCompleteRequest_PriorityBoost = 0;
								safety = safety + (s - NP);
								s = DC;
								;
								TRACER_RV = nondet();
								TRACER_RV = (AG_SetStatusAndReturn_status);
								CdAudio535DeviceControl_tmp___8 = TRACER_RV;
								TRACER_RV = nondet();
								CdAudio535DeviceControl_retres109 = CdAudio535DeviceControl_tmp___8;
								TRACER_RV = (CdAudio535DeviceControl_retres109);
								CdAudioDeviceControl_status = TRACER_RV;
								TRACER_RV = nondet();
L196:;
								TRACER_RV = (CdAudioDeviceControl_status);
								main_status = TRACER_RV;
								TRACER_RV = nondet();
								goto L5;
}
}
							}
							else if(CdAudio535DeviceControl_currentIrpStack__Parameters__DeviceIoControl__OutputBufferLength < 0) {
								goto L194;
							}
							else {
								if(CdAudio535DeviceControl_lastSession >= 0 && CdAudio535DeviceControl_lastSession <= 0) {
									CdAudio535DeviceControl_status = -1073741670;
									CdAudio535DeviceControl_Irp__IoStatus__Information = 0;
{
 int AG_SetStatusAndReturn_CIL___Tmp4 ;
									int AG_SetStatusAndReturn_status ; int AG_SetStatusAndReturn_Irp ; int AG_SetStatusAndReturn_deviceExtension__TargetDeviceObject ;
									AG_SetStatusAndReturn_status = CdAudio535DeviceControl_status;
									AG_SetStatusAndReturn_Irp = CdAudio535DeviceControl_Irp;
									AG_SetStatusAndReturn_deviceExtension__TargetDeviceObject = CdAudio535DeviceControl_deviceExtension__TargetDeviceObject;
{
									int IofCompleteRequest_Irp ; int IofCompleteRequest_PriorityBoost ;
									IofCompleteRequest_Irp = AG_SetStatusAndReturn_Irp;
									IofCompleteRequest_PriorityBoost = 0;
									safety = safety + (s - NP);
									s = DC;
									;
									TRACER_RV = nondet();
									TRACER_RV = (AG_SetStatusAndReturn_status);
									CdAudio535DeviceControl_tmp___0 = TRACER_RV;
									TRACER_RV = nondet();
									CdAudio535DeviceControl_retres109 = CdAudio535DeviceControl_tmp___0;
									CdAudio535DeviceControl_TRACER_returning = 1;
									TRACER_RV = (CdAudio535DeviceControl_retres109);
									CdAudioDeviceControl_status = TRACER_RV;
									TRACER_RV = nondet();
L197:;
L198:;
									TRACER_RV = (CdAudioDeviceControl_status);
									main_status = TRACER_RV;
									TRACER_RV = nondet();
									goto L11;
}
}
								}
								else if(CdAudio535DeviceControl_lastSession < 0) {
{
 int SendSrbSynchronous_ioStatus__Status ;
int SendSrbSynchronous_ioctl ;
int SendSrbSynchronous_event ;
int SendSrbSynchronous_irp ;
int SendSrbSynchronous_status ;
int SendSrbSynchronous_CIL___Tmp10 ;
int SendSrbSynchronous_CIL___Tmp11 ;
int SendSrbSynchronous_CIL___Tmp12 ;
int SendSrbSynchronous_CIL___Tmp13 ;
int SendSrbSynchronous_CIL___Tmp14 ;
int SendSrbSynchronous_CIL___Tmp15 ;
int SendSrbSynchronous_CIL___Tmp16 ;
int SendSrbSynchronous_CIL___Tmp17 ;
int SendSrbSynchronous_CIL___Tmp18 ;
int SendSrbSynchronous_retres19 ;
									int SendSrbSynchronous_Extension ; int SendSrbSynchronous_Srb ; int SendSrbSynchronous_Buffer ; int SendSrbSynchronous_BufferLength ;
									SendSrbSynchronous_Extension = CdAudio535DeviceControl_deviceExtension;
									SendSrbSynchronous_Srb = CdAudio535DeviceControl_srb;
									SendSrbSynchronous_Buffer = CdAudio535DeviceControl_lastSession;
									SendSrbSynchronous_BufferLength = CdAudio535DeviceControl_sizeof__READ_CAPACITY_DATA;
									SendSrbSynchronous_irp = 0;
									SendSrbSynchronous_retres19 = -1073741670;
									TRACER_RV = (SendSrbSynchronous_retres19);
									CdAudio535DeviceControl_status = TRACER_RV;
									TRACER_RV = nondet();
L199:;
{
 int AG_SetStatusAndReturn_CIL___Tmp4 ;
									int AG_SetStatusAndReturn_status ; int AG_SetStatusAndReturn_Irp ; int AG_SetStatusAndReturn_deviceExtension__TargetDeviceObject ;
									AG_SetStatusAndReturn_status = CdAudio535DeviceControl_status;
									AG_SetStatusAndReturn_Irp = CdAudio535DeviceControl_Irp;
									AG_SetStatusAndReturn_deviceExtension__TargetDeviceObject = CdAudio535DeviceControl_deviceExtension__TargetDeviceObject;
{
									int IofCompleteRequest_Irp ; int IofCompleteRequest_PriorityBoost ;
									IofCompleteRequest_Irp = AG_SetStatusAndReturn_Irp;
									IofCompleteRequest_PriorityBoost = 0;
									safety = safety + (s - NP);
									s = DC;
									;
									TRACER_RV = nondet();
									TRACER_RV = (AG_SetStatusAndReturn_status);
									CdAudio535DeviceControl_tmp___1 = TRACER_RV;
									TRACER_RV = nondet();
									CdAudio535DeviceControl_retres109 = CdAudio535DeviceControl_tmp___1;
									CdAudio535DeviceControl_TRACER_returning = 1;
									TRACER_RV = (CdAudio535DeviceControl_retres109);
									CdAudioDeviceControl_status = TRACER_RV;
									TRACER_RV = nondet();
									goto L197;
}
}
}
								}
								else {
{
 int SendSrbSynchronous_ioStatus__Status ;
int SendSrbSynchronous_ioctl ;
int SendSrbSynchronous_event ;
int SendSrbSynchronous_irp ;
int SendSrbSynchronous_status ;
int SendSrbSynchronous_CIL___Tmp10 ;
int SendSrbSynchronous_CIL___Tmp11 ;
int SendSrbSynchronous_CIL___Tmp12 ;
int SendSrbSynchronous_CIL___Tmp13 ;
int SendSrbSynchronous_CIL___Tmp14 ;
int SendSrbSynchronous_CIL___Tmp15 ;
int SendSrbSynchronous_CIL___Tmp16 ;
int SendSrbSynchronous_CIL___Tmp17 ;
int SendSrbSynchronous_CIL___Tmp18 ;
int SendSrbSynchronous_retres19 ;
									int SendSrbSynchronous_Extension ; int SendSrbSynchronous_Srb ; int SendSrbSynchronous_Buffer ; int SendSrbSynchronous_BufferLength ;
									SendSrbSynchronous_Extension = CdAudio535DeviceControl_deviceExtension;
									SendSrbSynchronous_Srb = CdAudio535DeviceControl_srb;
									SendSrbSynchronous_Buffer = CdAudio535DeviceControl_lastSession;
									SendSrbSynchronous_BufferLength = CdAudio535DeviceControl_sizeof__READ_CAPACITY_DATA;
									SendSrbSynchronous_irp = 0;
									SendSrbSynchronous_retres19 = -1073741670;
									TRACER_RV = (SendSrbSynchronous_retres19);
									CdAudio535DeviceControl_status = TRACER_RV;
									TRACER_RV = nondet();
									goto L199;
}
								}
							}
						}
						else if(CdAudioIsPlayActive_deviceExtension__PlayActive < 0) {
L200:;
							if(CdAudioIsPlayActive_currentBuffer >= 0 && CdAudioIsPlayActive_currentBuffer <= 0) {
								CdAudioIsPlayActive_retres11 = 0;
								goto L193;
							}
							else if(CdAudioIsPlayActive_currentBuffer < 0) {
L201:;
								if(CdAudioIsPlayActive_irp_CdAudioIsPlayActive >= 0 && CdAudioIsPlayActive_irp_CdAudioIsPlayActive <= 0) {
									CdAudioIsPlayActive_retres11 = 0;
									goto L193;
								}
								else if(CdAudioIsPlayActive_irp_CdAudioIsPlayActive < 0) {
L202:;
									CdAudioIsPlayActive_CIL___Tmp10 = CdAudioIsPlayActive_status;
									if(CdAudioIsPlayActive_CIL___Tmp10 >= 259 && CdAudioIsPlayActive_CIL___Tmp10 <= 259) {
{
 int KeWaitForSingleObject_tmp_ndt_7 ;
int KeWaitForSingleObject_retres7 ;
										int KeWaitForSingleObject_Object ; int KeWaitForSingleObject_WaitReason ; int KeWaitForSingleObject_WaitMode ; int KeWaitForSingleObject_Alertable ; int KeWaitForSingleObject_Timeout ;
										KeWaitForSingleObject_Object = CdAudioIsPlayActive_event;
										KeWaitForSingleObject_WaitReason = Suspended;
										KeWaitForSingleObject_WaitMode = KernelMode;
										KeWaitForSingleObject_Alertable = 0;
										KeWaitForSingleObject_Timeout = 0;
L203:;
										;
										TRACER_RV = nondet();
										CdAudioIsPlayActive_status = CdAudioIsPlayActive_ioStatus__Status;
L204:;
										if(CdAudioIsPlayActive_status < 0) {
											CdAudioIsPlayActive_retres11 = 0;
											goto L193;
										}
										else {
											if(CdAudioIsPlayActive_currentBuffer__Header__AudioStatus >= 17 && CdAudioIsPlayActive_currentBuffer__Header__AudioStatus <= 17) {
												CdAudioIsPlayActive_returnValue = 1;
												CdAudioIsPlayActive_retres11 = CdAudioIsPlayActive_returnValue;
												TRACER_RV = (CdAudioIsPlayActive_retres11);
												CdAudio535DeviceControl_tmp = TRACER_RV;
												TRACER_RV = nondet();
												CdAudio535DeviceControl_status = -2147483631;
												CdAudio535DeviceControl_Irp__IoStatus__Information = 0;
L205:;
{
 int AG_SetStatusAndReturn_CIL___Tmp4 ;
												int AG_SetStatusAndReturn_status ; int AG_SetStatusAndReturn_Irp ; int AG_SetStatusAndReturn_deviceExtension__TargetDeviceObject ;
												AG_SetStatusAndReturn_status = CdAudio535DeviceControl_status;
												AG_SetStatusAndReturn_Irp = CdAudio535DeviceControl_Irp;
												AG_SetStatusAndReturn_deviceExtension__TargetDeviceObject = CdAudio535DeviceControl_deviceExtension__TargetDeviceObject;
{
												int IofCompleteRequest_Irp ; int IofCompleteRequest_PriorityBoost ;
												IofCompleteRequest_Irp = AG_SetStatusAndReturn_Irp;
												IofCompleteRequest_PriorityBoost = 0;
												safety = safety + (s - NP);
												s = DC;
												;
												TRACER_RV = nondet();
												TRACER_RV = (AG_SetStatusAndReturn_status);
												CdAudio535DeviceControl_tmp___8 = TRACER_RV;
												TRACER_RV = nondet();
												CdAudio535DeviceControl_retres109 = CdAudio535DeviceControl_tmp___8;
												TRACER_RV = (CdAudio535DeviceControl_retres109);
												CdAudioDeviceControl_status = TRACER_RV;
												TRACER_RV = nondet();
L206:;
												TRACER_RV = (CdAudioDeviceControl_status);
												main_status = TRACER_RV;
												TRACER_RV = nondet();
												goto L20;
}
}
											}
											else if(CdAudioIsPlayActive_currentBuffer__Header__AudioStatus < 17) {
L207:;
												CdAudioIsPlayActive_returnValue = 0;
												CdAudioIsPlayActive_deviceExtension__PlayActive = 0;
												CdAudioIsPlayActive_retres11 = CdAudioIsPlayActive_returnValue;
												goto L193;
											}
											else {
												goto L207;
											}
										}
}
									}
									else if(CdAudioIsPlayActive_CIL___Tmp10 < 259) {
										goto L204;
									}
									else {
										goto L204;
									}
								}
								else {
									goto L202;
								}
							}
							else {
								goto L201;
							}
						}
						else {
							goto L200;
						}
}
					}
					else if(CdAudio535DeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode < CdAudio535DeviceControl_CIL___Tmp62) {
						CdAudio535DeviceControl_CIL___Tmp63 = 16384;
						CdAudio535DeviceControl_CIL___Tmp64 = 131072;
						CdAudio535DeviceControl_CIL___Tmp65 = 147456;
						if(CdAudio535DeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode >= CdAudio535DeviceControl_CIL___Tmp65 && CdAudio535DeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode <= CdAudio535DeviceControl_CIL___Tmp65) {
							if(CdAudio535DeviceControl_currentIrpStack__Parameters__DeviceIoControl__OutputBufferLength > 0) {
L208:;
								CdAudio535DeviceControl_status = -1073741789;
								CdAudio535DeviceControl_Irp__IoStatus__Information = 0;
								goto L195;
							}
							else if(CdAudio535DeviceControl_currentIrpStack__Parameters__DeviceIoControl__OutputBufferLength < 0) {
								goto L208;
							}
							else {
{
 int CdAudioIsPlayActive_deviceExtension__PlayActive ;
int CdAudioIsPlayActive_ioStatus__Status ;
int CdAudioIsPlayActive_currentBuffer__Header__AudioStatus ;
int CdAudioIsPlayActive_irp_CdAudioIsPlayActive ;
int CdAudioIsPlayActive_event ;
int CdAudioIsPlayActive_status ;
int CdAudioIsPlayActive_currentBuffer ;
int CdAudioIsPlayActive_returnValue ;
int CdAudioIsPlayActive_CIL___Tmp10 ;
int CdAudioIsPlayActive_retres11 ;
								int CdAudioIsPlayActive_DeviceObject ;
								CdAudioIsPlayActive_DeviceObject = CdAudio535DeviceControl_DeviceObject;
								if(CdAudioIsPlayActive_deviceExtension__PlayActive >= 0 && CdAudioIsPlayActive_deviceExtension__PlayActive <= 0) {
									CdAudioIsPlayActive_retres11 = 0;
L209:;
									TRACER_RV = (CdAudioIsPlayActive_retres11);
									CdAudio535DeviceControl_tmp___2 = TRACER_RV;
									TRACER_RV = nondet();
									if(CdAudio535DeviceControl_Toc >= 0 && CdAudio535DeviceControl_Toc <= 0) {
										CdAudio535DeviceControl_status = -1073741670;
										CdAudio535DeviceControl_Irp__IoStatus__Information = 0;
{
 int AG_SetStatusAndReturn_CIL___Tmp4 ;
										int AG_SetStatusAndReturn_status ; int AG_SetStatusAndReturn_Irp ; int AG_SetStatusAndReturn_deviceExtension__TargetDeviceObject ;
										AG_SetStatusAndReturn_status = CdAudio535DeviceControl_status;
										AG_SetStatusAndReturn_Irp = CdAudio535DeviceControl_Irp;
										AG_SetStatusAndReturn_deviceExtension__TargetDeviceObject = CdAudio535DeviceControl_deviceExtension__TargetDeviceObject;
{
										int IofCompleteRequest_Irp ; int IofCompleteRequest_PriorityBoost ;
										IofCompleteRequest_Irp = AG_SetStatusAndReturn_Irp;
										IofCompleteRequest_PriorityBoost = 0;
										safety = safety + (s - NP);
										s = DC;
										;
										TRACER_RV = nondet();
										TRACER_RV = (AG_SetStatusAndReturn_status);
										CdAudio535DeviceControl_tmp___3 = TRACER_RV;
										TRACER_RV = nondet();
										CdAudio535DeviceControl_retres109 = CdAudio535DeviceControl_tmp___3;
										CdAudio535DeviceControl_TRACER_returning = 1;
										TRACER_RV = (CdAudio535DeviceControl_retres109);
										CdAudioDeviceControl_status = TRACER_RV;
										TRACER_RV = nondet();
										goto L197;
}
}
									}
									else if(CdAudio535DeviceControl_Toc < 0) {
{
 int SendSrbSynchronous_ioStatus__Status ;
int SendSrbSynchronous_ioctl ;
int SendSrbSynchronous_event ;
int SendSrbSynchronous_irp ;
int SendSrbSynchronous_status ;
int SendSrbSynchronous_CIL___Tmp10 ;
int SendSrbSynchronous_CIL___Tmp11 ;
int SendSrbSynchronous_CIL___Tmp12 ;
int SendSrbSynchronous_CIL___Tmp13 ;
int SendSrbSynchronous_CIL___Tmp14 ;
int SendSrbSynchronous_CIL___Tmp15 ;
int SendSrbSynchronous_CIL___Tmp16 ;
int SendSrbSynchronous_CIL___Tmp17 ;
int SendSrbSynchronous_CIL___Tmp18 ;
int SendSrbSynchronous_retres19 ;
										int SendSrbSynchronous_Extension ; int SendSrbSynchronous_Srb ; int SendSrbSynchronous_Buffer ; int SendSrbSynchronous_BufferLength ;
										SendSrbSynchronous_Extension = CdAudio535DeviceControl_deviceExtension;
										SendSrbSynchronous_Srb = CdAudio535DeviceControl_srb;
										SendSrbSynchronous_Buffer = CdAudio535DeviceControl_Toc;
										SendSrbSynchronous_BufferLength = CdAudio535DeviceControl_sizeof__CDROM_TOC;
										SendSrbSynchronous_irp = 0;
										SendSrbSynchronous_retres19 = -1073741670;
										TRACER_RV = (SendSrbSynchronous_retres19);
										CdAudio535DeviceControl_status = TRACER_RV;
										TRACER_RV = nondet();
L210:;
										CdAudio535DeviceControl_CIL___Tmp108 = CdAudio535DeviceControl_status;
{
 int AG_SetStatusAndReturn_CIL___Tmp4 ;
										int AG_SetStatusAndReturn_status ; int AG_SetStatusAndReturn_Irp ; int AG_SetStatusAndReturn_deviceExtension__TargetDeviceObject ;
										AG_SetStatusAndReturn_status = CdAudio535DeviceControl_status;
										AG_SetStatusAndReturn_Irp = CdAudio535DeviceControl_Irp;
										AG_SetStatusAndReturn_deviceExtension__TargetDeviceObject = CdAudio535DeviceControl_deviceExtension__TargetDeviceObject;
{
										int IofCompleteRequest_Irp ; int IofCompleteRequest_PriorityBoost ;
										IofCompleteRequest_Irp = AG_SetStatusAndReturn_Irp;
										IofCompleteRequest_PriorityBoost = 0;
										safety = safety + (s - NP);
										s = DC;
										;
										TRACER_RV = nondet();
										TRACER_RV = (AG_SetStatusAndReturn_status);
										CdAudio535DeviceControl_tmp___4 = TRACER_RV;
										TRACER_RV = nondet();
										CdAudio535DeviceControl_retres109 = CdAudio535DeviceControl_tmp___4;
										CdAudio535DeviceControl_TRACER_returning = 1;
										TRACER_RV = (CdAudio535DeviceControl_retres109);
										CdAudioDeviceControl_status = TRACER_RV;
										TRACER_RV = nondet();
										goto L197;
}
}
}
									}
									else {
{
 int SendSrbSynchronous_ioStatus__Status ;
int SendSrbSynchronous_ioctl ;
int SendSrbSynchronous_event ;
int SendSrbSynchronous_irp ;
int SendSrbSynchronous_status ;
int SendSrbSynchronous_CIL___Tmp10 ;
int SendSrbSynchronous_CIL___Tmp11 ;
int SendSrbSynchronous_CIL___Tmp12 ;
int SendSrbSynchronous_CIL___Tmp13 ;
int SendSrbSynchronous_CIL___Tmp14 ;
int SendSrbSynchronous_CIL___Tmp15 ;
int SendSrbSynchronous_CIL___Tmp16 ;
int SendSrbSynchronous_CIL___Tmp17 ;
int SendSrbSynchronous_CIL___Tmp18 ;
int SendSrbSynchronous_retres19 ;
										int SendSrbSynchronous_Extension ; int SendSrbSynchronous_Srb ; int SendSrbSynchronous_Buffer ; int SendSrbSynchronous_BufferLength ;
										SendSrbSynchronous_Extension = CdAudio535DeviceControl_deviceExtension;
										SendSrbSynchronous_Srb = CdAudio535DeviceControl_srb;
										SendSrbSynchronous_Buffer = CdAudio535DeviceControl_Toc;
										SendSrbSynchronous_BufferLength = CdAudio535DeviceControl_sizeof__CDROM_TOC;
										SendSrbSynchronous_irp = 0;
										SendSrbSynchronous_retres19 = -1073741670;
										TRACER_RV = (SendSrbSynchronous_retres19);
										CdAudio535DeviceControl_status = TRACER_RV;
										TRACER_RV = nondet();
										goto L210;
}
									}
								}
								else if(CdAudioIsPlayActive_deviceExtension__PlayActive < 0) {
L211:;
									if(CdAudioIsPlayActive_currentBuffer >= 0 && CdAudioIsPlayActive_currentBuffer <= 0) {
										CdAudioIsPlayActive_retres11 = 0;
										goto L209;
									}
									else if(CdAudioIsPlayActive_currentBuffer < 0) {
L212:;
										if(CdAudioIsPlayActive_irp_CdAudioIsPlayActive >= 0 && CdAudioIsPlayActive_irp_CdAudioIsPlayActive <= 0) {
											CdAudioIsPlayActive_retres11 = 0;
											goto L209;
										}
										else if(CdAudioIsPlayActive_irp_CdAudioIsPlayActive < 0) {
L213:;
											CdAudioIsPlayActive_CIL___Tmp10 = CdAudioIsPlayActive_status;
											if(CdAudioIsPlayActive_CIL___Tmp10 >= 259 && CdAudioIsPlayActive_CIL___Tmp10 <= 259) {
{
 int KeWaitForSingleObject_tmp_ndt_7 ;
int KeWaitForSingleObject_retres7 ;
												int KeWaitForSingleObject_Object ; int KeWaitForSingleObject_WaitReason ; int KeWaitForSingleObject_WaitMode ; int KeWaitForSingleObject_Alertable ; int KeWaitForSingleObject_Timeout ;
												KeWaitForSingleObject_Object = CdAudioIsPlayActive_event;
												KeWaitForSingleObject_WaitReason = Suspended;
												KeWaitForSingleObject_WaitMode = KernelMode;
												KeWaitForSingleObject_Alertable = 0;
												KeWaitForSingleObject_Timeout = 0;
L214:;
												;
												TRACER_RV = nondet();
												CdAudioIsPlayActive_status = CdAudioIsPlayActive_ioStatus__Status;
L215:;
												if(CdAudioIsPlayActive_status < 0) {
													CdAudioIsPlayActive_retres11 = 0;
													goto L209;
												}
												else {
													if(CdAudioIsPlayActive_currentBuffer__Header__AudioStatus >= 17 && CdAudioIsPlayActive_currentBuffer__Header__AudioStatus <= 17) {
														CdAudioIsPlayActive_returnValue = 1;
														CdAudioIsPlayActive_retres11 = CdAudioIsPlayActive_returnValue;
														TRACER_RV = (CdAudioIsPlayActive_retres11);
														CdAudio535DeviceControl_tmp___2 = TRACER_RV;
														TRACER_RV = nondet();
														CdAudio535DeviceControl_status = -2147483631;
														CdAudio535DeviceControl_Irp__IoStatus__Information = 0;
														goto L205;
													}
													else if(CdAudioIsPlayActive_currentBuffer__Header__AudioStatus < 17) {
L216:;
														CdAudioIsPlayActive_returnValue = 0;
														CdAudioIsPlayActive_deviceExtension__PlayActive = 0;
														CdAudioIsPlayActive_retres11 = CdAudioIsPlayActive_returnValue;
														goto L209;
													}
													else {
														goto L216;
													}
												}
}
											}
											else if(CdAudioIsPlayActive_CIL___Tmp10 < 259) {
												goto L215;
											}
											else {
												goto L215;
											}
										}
										else {
											goto L213;
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
						else if(CdAudio535DeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode < CdAudio535DeviceControl_CIL___Tmp65) {
							CdAudio535DeviceControl_CIL___Tmp66 = 44;
							CdAudio535DeviceControl_CIL___Tmp67 = 16384;
							CdAudio535DeviceControl_CIL___Tmp68 = 131072;
							CdAudio535DeviceControl_CIL___Tmp69 = 147456;
							CdAudio535DeviceControl_CIL___Tmp70 = 147500;
							CdAudio535DeviceControl_CIL___Tmp71 = 24;
							CdAudio535DeviceControl_CIL___Tmp72 = 16384;
							CdAudio535DeviceControl_CIL___Tmp73 = 131072;
							CdAudio535DeviceControl_CIL___Tmp74 = 147456;
							CdAudio535DeviceControl_CIL___Tmp75 = 147480;
							CdAudio535DeviceControl_CIL___Tmp76 = 4;
							CdAudio535DeviceControl_CIL___Tmp77 = 16384;
							CdAudio535DeviceControl_CIL___Tmp78 = 131072;
							CdAudio535DeviceControl_CIL___Tmp79 = 147456;
							CdAudio535DeviceControl_CIL___Tmp80 = 147460;
							CdAudio535DeviceControl_CIL___Tmp81 = 2056;
							CdAudio535DeviceControl_CIL___Tmp82 = 16384;
							CdAudio535DeviceControl_CIL___Tmp83 = 131072;
							CdAudio535DeviceControl_CIL___Tmp84 = 147456;
							CdAudio535DeviceControl_CIL___Tmp85 = 149512;
							CdAudio535DeviceControl_CIL___Tmp86 = 52;
							CdAudio535DeviceControl_CIL___Tmp87 = 16384;
							CdAudio535DeviceControl_CIL___Tmp88 = 131072;
							CdAudio535DeviceControl_CIL___Tmp89 = 147456;
							CdAudio535DeviceControl_CIL___Tmp90 = 147508;
							CdAudio535DeviceControl_CIL___Tmp91 = 20;
							CdAudio535DeviceControl_CIL___Tmp92 = 16384;
							CdAudio535DeviceControl_CIL___Tmp93 = 131072;
							CdAudio535DeviceControl_CIL___Tmp94 = 147456;
							CdAudio535DeviceControl_CIL___Tmp95 = 147476;
							CdAudio535DeviceControl_CIL___Tmp96 = 40;
							CdAudio535DeviceControl_CIL___Tmp97 = 16384;
							CdAudio535DeviceControl_CIL___Tmp98 = 131072;
							CdAudio535DeviceControl_CIL___Tmp99 = 147456;
							CdAudio535DeviceControl_CIL___Tmp100 = 147496;
L217:;
							CdAudio535DeviceControl_CIL___Tmp101 = 2048;
							CdAudio535DeviceControl_CIL___Tmp102 = 16384;
							CdAudio535DeviceControl_CIL___Tmp103 = 131072;
							CdAudio535DeviceControl_CIL___Tmp104 = 147456;
							CdAudio535DeviceControl_CIL___Tmp105 = 149504;
L218:;
{
 int CdAudioSendToNextDriver_Irp__CurrentLocation ;
int CdAudioSendToNextDriver_Irp__Tail__Overlay__CurrentStackLocation ;
int CdAudioSendToNextDriver_deviceExtension__TargetDeviceObject ;
int CdAudioSendToNextDriver_tmp ;
							int CdAudioSendToNextDriver_DeviceObject ; int CdAudioSendToNextDriver_Irp ;
							CdAudioSendToNextDriver_DeviceObject = CdAudio535DeviceControl_DeviceObject;
							CdAudioSendToNextDriver_Irp = CdAudio535DeviceControl_Irp;
							safety = safety + (s - NP);
							s = SKIP1;
							CdAudioSendToNextDriver_Irp__CurrentLocation = CdAudioSendToNextDriver_Irp__CurrentLocation + 1;
							CdAudioSendToNextDriver_Irp__Tail__Overlay__CurrentStackLocation = CdAudioSendToNextDriver_Irp__Tail__Overlay__CurrentStackLocation + 1;
{
 int IofCallDriver_Irp__PendingReturned ;
int IofCallDriver_returnVal2 ;
int IofCallDriver_compRetStatus ;
int IofCallDriver_lcontext ;
int IofCallDriver_CIL___Tmp8 ;
int IofCallDriver_tmp_ndt_5 ;
int IofCallDriver_tmp_ndt_6 ;
							int IofCallDriver_DeviceObject ; int IofCallDriver_Irp ;
							IofCallDriver_DeviceObject = CdAudioSendToNextDriver_deviceExtension__TargetDeviceObject;
							IofCallDriver_Irp = CdAudioSendToNextDriver_Irp;
							if(IofCallDriver_Irp__PendingReturned > 0) {
L219:;
								IofCallDriver_returnVal2 = 259;
L220:;
								safety = safety + (s - SKIP1);
								s = SKIP2;
								lowerDriverReturn = IofCallDriver_returnVal2;
								TRACER_RV = (IofCallDriver_returnVal2);
								CdAudioSendToNextDriver_tmp = TRACER_RV;
								TRACER_RV = nondet();
								TRACER_RV = (CdAudioSendToNextDriver_tmp);
								CdAudio535DeviceControl_tmp___7 = TRACER_RV;
								TRACER_RV = nondet();
								CdAudio535DeviceControl_retres109 = CdAudio535DeviceControl_tmp___7;
								CdAudio535DeviceControl_TRACER_returning = 1;
								TRACER_RV = (CdAudio535DeviceControl_retres109);
								CdAudioDeviceControl_status = TRACER_RV;
								TRACER_RV = nondet();
L221:;
								TRACER_RV = (CdAudioDeviceControl_status);
								main_status = TRACER_RV;
								TRACER_RV = nondet();
								goto L36;
							}
							else if(IofCallDriver_Irp__PendingReturned < 0) {
								goto L219;
							}
							else {
								IofCallDriver_tmp_ndt_5 = __VERIFIER_nondet_int();
								if(IofCallDriver_tmp_ndt_5 >= 0 && IofCallDriver_tmp_ndt_5 <= 0) {
									IofCallDriver_returnVal2 = 0;
									safety = safety + (s - SKIP1);
									s = SKIP2;
									lowerDriverReturn = IofCallDriver_returnVal2;
									TRACER_RV = (IofCallDriver_returnVal2);
									CdAudioSendToNextDriver_tmp = TRACER_RV;
									TRACER_RV = nondet();
									TRACER_RV = (CdAudioSendToNextDriver_tmp);
									CdAudio535DeviceControl_tmp___7 = TRACER_RV;
									TRACER_RV = nondet();
									CdAudio535DeviceControl_retres109 = CdAudio535DeviceControl_tmp___7;
									CdAudio535DeviceControl_TRACER_returning = 1;
									TRACER_RV = (CdAudio535DeviceControl_retres109);
									CdAudioDeviceControl_status = TRACER_RV;
									TRACER_RV = nondet();
L222:;
									TRACER_RV = (CdAudioDeviceControl_status);
									main_status = TRACER_RV;
									TRACER_RV = nondet();
									goto L40;
								}
								else if(IofCallDriver_tmp_ndt_5 < 0) {
L223:;
									IofCallDriver_tmp_ndt_6 = __VERIFIER_nondet_int();
									if(IofCallDriver_tmp_ndt_6 >= 1 && IofCallDriver_tmp_ndt_6 <= 1) {
										IofCallDriver_returnVal2 = -1073741823;
										safety = safety + (s - SKIP1);
										s = SKIP2;
										lowerDriverReturn = IofCallDriver_returnVal2;
										TRACER_RV = (IofCallDriver_returnVal2);
										CdAudioSendToNextDriver_tmp = TRACER_RV;
										TRACER_RV = nondet();
										TRACER_RV = (CdAudioSendToNextDriver_tmp);
										CdAudio535DeviceControl_tmp___7 = TRACER_RV;
										TRACER_RV = nondet();
										CdAudio535DeviceControl_retres109 = CdAudio535DeviceControl_tmp___7;
										CdAudio535DeviceControl_TRACER_returning = 1;
										TRACER_RV = (CdAudio535DeviceControl_retres109);
										CdAudioDeviceControl_status = TRACER_RV;
										TRACER_RV = nondet();
L224:;
										TRACER_RV = (CdAudioDeviceControl_status);
										main_status = TRACER_RV;
										TRACER_RV = nondet();
										goto L44;
									}
									else if(IofCallDriver_tmp_ndt_6 < 1) {
L225:;
										IofCallDriver_returnVal2 = 259;
										goto L220;
									}
									else {
										goto L225;
									}
								}
								else {
									goto L223;
								}
							}
}
}
						}
						else {
							CdAudio535DeviceControl_CIL___Tmp66 = 44;
							CdAudio535DeviceControl_CIL___Tmp67 = 16384;
							CdAudio535DeviceControl_CIL___Tmp68 = 131072;
							CdAudio535DeviceControl_CIL___Tmp69 = 147456;
							CdAudio535DeviceControl_CIL___Tmp70 = 147500;
							if(CdAudio535DeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode >= CdAudio535DeviceControl_CIL___Tmp70 && CdAudio535DeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode <= CdAudio535DeviceControl_CIL___Tmp70) {
								if(CdAudio535DeviceControl_currentIrpStack__Parameters__DeviceIoControl__OutputBufferLength < CdAudio535DeviceControl_sizeof__SUB_Q_CURRENT_POSITION) {
									CdAudio535DeviceControl_status = -1073741789;
									CdAudio535DeviceControl_Irp__IoStatus__Information = 0;
									goto L195;
								}
								else {
									if(CdAudio535DeviceControl_SubQPtr >= 0 && CdAudio535DeviceControl_SubQPtr <= 0) {
										CdAudio535DeviceControl_status = -1073741670;
										CdAudio535DeviceControl_Irp__IoStatus__Information = 0;
{
 int AG_SetStatusAndReturn_CIL___Tmp4 ;
										int AG_SetStatusAndReturn_status ; int AG_SetStatusAndReturn_Irp ; int AG_SetStatusAndReturn_deviceExtension__TargetDeviceObject ;
										AG_SetStatusAndReturn_status = CdAudio535DeviceControl_status;
										AG_SetStatusAndReturn_Irp = CdAudio535DeviceControl_Irp;
										AG_SetStatusAndReturn_deviceExtension__TargetDeviceObject = CdAudio535DeviceControl_deviceExtension__TargetDeviceObject;
{
										int IofCompleteRequest_Irp ; int IofCompleteRequest_PriorityBoost ;
										IofCompleteRequest_Irp = AG_SetStatusAndReturn_Irp;
										IofCompleteRequest_PriorityBoost = 0;
										safety = safety + (s - NP);
										s = DC;
										;
										TRACER_RV = nondet();
										TRACER_RV = (AG_SetStatusAndReturn_status);
										CdAudio535DeviceControl_tmp___5 = TRACER_RV;
										TRACER_RV = nondet();
										CdAudio535DeviceControl_retres109 = CdAudio535DeviceControl_tmp___5;
										CdAudio535DeviceControl_TRACER_returning = 1;
										TRACER_RV = (CdAudio535DeviceControl_retres109);
										CdAudioDeviceControl_status = TRACER_RV;
										TRACER_RV = nondet();
										goto L197;
}
}
									}
									else if(CdAudio535DeviceControl_SubQPtr < 0) {
										if(CdAudio535DeviceControl_userPtr__Format > 1) {
L226:;
											CdAudio535DeviceControl_status = -1073741823;
											CdAudio535DeviceControl_Irp__IoStatus__Information = 0;
{
 int AG_SetStatusAndReturn_CIL___Tmp4 ;
											int AG_SetStatusAndReturn_status ; int AG_SetStatusAndReturn_Irp ; int AG_SetStatusAndReturn_deviceExtension__TargetDeviceObject ;
											AG_SetStatusAndReturn_status = CdAudio535DeviceControl_status;
											AG_SetStatusAndReturn_Irp = CdAudio535DeviceControl_Irp;
											AG_SetStatusAndReturn_deviceExtension__TargetDeviceObject = CdAudio535DeviceControl_deviceExtension__TargetDeviceObject;
{
											int IofCompleteRequest_Irp ; int IofCompleteRequest_PriorityBoost ;
											IofCompleteRequest_Irp = AG_SetStatusAndReturn_Irp;
											IofCompleteRequest_PriorityBoost = 0;
											safety = safety + (s - NP);
											s = DC;
											;
											TRACER_RV = nondet();
											TRACER_RV = (AG_SetStatusAndReturn_status);
											CdAudio535DeviceControl_tmp___6 = TRACER_RV;
											TRACER_RV = nondet();
											CdAudio535DeviceControl_retres109 = CdAudio535DeviceControl_tmp___6;
											CdAudio535DeviceControl_TRACER_returning = 1;
											TRACER_RV = (CdAudio535DeviceControl_retres109);
											CdAudioDeviceControl_status = TRACER_RV;
											TRACER_RV = nondet();
											TRACER_RV = (CdAudioDeviceControl_status);
											main_status = TRACER_RV;
											TRACER_RV = nondet();
											goto L48;
}
}
										}
										else if(CdAudio535DeviceControl_userPtr__Format < 1) {
											goto L226;
										}
										else {
{
 int SendSrbSynchronous_ioStatus__Status ;
int SendSrbSynchronous_ioctl ;
int SendSrbSynchronous_event ;
int SendSrbSynchronous_irp ;
int SendSrbSynchronous_status ;
int SendSrbSynchronous_CIL___Tmp10 ;
int SendSrbSynchronous_CIL___Tmp11 ;
int SendSrbSynchronous_CIL___Tmp12 ;
int SendSrbSynchronous_CIL___Tmp13 ;
int SendSrbSynchronous_CIL___Tmp14 ;
int SendSrbSynchronous_CIL___Tmp15 ;
int SendSrbSynchronous_CIL___Tmp16 ;
int SendSrbSynchronous_CIL___Tmp17 ;
int SendSrbSynchronous_CIL___Tmp18 ;
int SendSrbSynchronous_retres19 ;
											int SendSrbSynchronous_Extension ; int SendSrbSynchronous_Srb ; int SendSrbSynchronous_Buffer ; int SendSrbSynchronous_BufferLength ;
											SendSrbSynchronous_Extension = CdAudio535DeviceControl_deviceExtension;
											SendSrbSynchronous_Srb = CdAudio535DeviceControl_srb;
											SendSrbSynchronous_Buffer = CdAudio535DeviceControl_SubQPtr;
											SendSrbSynchronous_BufferLength = CdAudio535DeviceControl_sizeof__SUB_Q_CURRENT_POSITION;
											SendSrbSynchronous_irp = 0;
											SendSrbSynchronous_retres19 = -1073741670;
											TRACER_RV = (SendSrbSynchronous_retres19);
											CdAudio535DeviceControl_status = TRACER_RV;
											TRACER_RV = nondet();
L227:;
L228:;
{
 int AG_SetStatusAndReturn_CIL___Tmp4 ;
											int AG_SetStatusAndReturn_status ; int AG_SetStatusAndReturn_Irp ; int AG_SetStatusAndReturn_deviceExtension__TargetDeviceObject ;
											AG_SetStatusAndReturn_status = CdAudio535DeviceControl_status;
											AG_SetStatusAndReturn_Irp = CdAudio535DeviceControl_Irp;
											AG_SetStatusAndReturn_deviceExtension__TargetDeviceObject = CdAudio535DeviceControl_deviceExtension__TargetDeviceObject;
{
											int IofCompleteRequest_Irp ; int IofCompleteRequest_PriorityBoost ;
											IofCompleteRequest_Irp = AG_SetStatusAndReturn_Irp;
											IofCompleteRequest_PriorityBoost = 0;
											safety = safety + (s - NP);
											s = DC;
											;
											TRACER_RV = nondet();
											TRACER_RV = (AG_SetStatusAndReturn_status);
											CdAudio535DeviceControl_tmp___8 = TRACER_RV;
											TRACER_RV = nondet();
											CdAudio535DeviceControl_retres109 = CdAudio535DeviceControl_tmp___8;
											TRACER_RV = (CdAudio535DeviceControl_retres109);
											CdAudioDeviceControl_status = TRACER_RV;
											TRACER_RV = nondet();
											goto L197;
}
}
}
										}
									}
									else {
										if(CdAudio535DeviceControl_userPtr__Format > 1) {
											goto L226;
										}
										else if(CdAudio535DeviceControl_userPtr__Format < 1) {
											goto L226;
										}
										else {
{
 int SendSrbSynchronous_ioStatus__Status ;
int SendSrbSynchronous_ioctl ;
int SendSrbSynchronous_event ;
int SendSrbSynchronous_irp ;
int SendSrbSynchronous_status ;
int SendSrbSynchronous_CIL___Tmp10 ;
int SendSrbSynchronous_CIL___Tmp11 ;
int SendSrbSynchronous_CIL___Tmp12 ;
int SendSrbSynchronous_CIL___Tmp13 ;
int SendSrbSynchronous_CIL___Tmp14 ;
int SendSrbSynchronous_CIL___Tmp15 ;
int SendSrbSynchronous_CIL___Tmp16 ;
int SendSrbSynchronous_CIL___Tmp17 ;
int SendSrbSynchronous_CIL___Tmp18 ;
int SendSrbSynchronous_retres19 ;
											int SendSrbSynchronous_Extension ; int SendSrbSynchronous_Srb ; int SendSrbSynchronous_Buffer ; int SendSrbSynchronous_BufferLength ;
											SendSrbSynchronous_Extension = CdAudio535DeviceControl_deviceExtension;
											SendSrbSynchronous_Srb = CdAudio535DeviceControl_srb;
											SendSrbSynchronous_Buffer = CdAudio535DeviceControl_SubQPtr;
											SendSrbSynchronous_BufferLength = CdAudio535DeviceControl_sizeof__SUB_Q_CURRENT_POSITION;
											SendSrbSynchronous_irp = 0;
											SendSrbSynchronous_retres19 = -1073741670;
											TRACER_RV = (SendSrbSynchronous_retres19);
											CdAudio535DeviceControl_status = TRACER_RV;
											TRACER_RV = nondet();
											goto L227;
}
										}
									}
								}
							}
							else if(CdAudio535DeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode < CdAudio535DeviceControl_CIL___Tmp70) {
								CdAudio535DeviceControl_CIL___Tmp71 = 24;
								CdAudio535DeviceControl_CIL___Tmp72 = 16384;
								CdAudio535DeviceControl_CIL___Tmp73 = 131072;
								CdAudio535DeviceControl_CIL___Tmp74 = 147456;
								CdAudio535DeviceControl_CIL___Tmp75 = 147480;
								if(CdAudio535DeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode >= CdAudio535DeviceControl_CIL___Tmp75 && CdAudio535DeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode <= CdAudio535DeviceControl_CIL___Tmp75) {
									if(CdAudio535DeviceControl_currentIrpStack__Parameters__DeviceIoControl__InputBufferLength < CdAudio535DeviceControl_sizeof__CDROM_PLAY_AUDIO_MSF) {
										CdAudio535DeviceControl_status = -1073741820;
L229:;
{
 int AG_SetStatusAndReturn_CIL___Tmp4 ;
										int AG_SetStatusAndReturn_status ; int AG_SetStatusAndReturn_Irp ; int AG_SetStatusAndReturn_deviceExtension__TargetDeviceObject ;
										AG_SetStatusAndReturn_status = CdAudio535DeviceControl_status;
										AG_SetStatusAndReturn_Irp = CdAudio535DeviceControl_Irp;
										AG_SetStatusAndReturn_deviceExtension__TargetDeviceObject = CdAudio535DeviceControl_deviceExtension__TargetDeviceObject;
{
										int IofCompleteRequest_Irp ; int IofCompleteRequest_PriorityBoost ;
										IofCompleteRequest_Irp = AG_SetStatusAndReturn_Irp;
										IofCompleteRequest_PriorityBoost = 0;
										safety = safety + (s - NP);
										s = DC;
										;
										TRACER_RV = nondet();
										TRACER_RV = (AG_SetStatusAndReturn_status);
										CdAudio535DeviceControl_tmp___8 = TRACER_RV;
										TRACER_RV = nondet();
										CdAudio535DeviceControl_retres109 = CdAudio535DeviceControl_tmp___8;
										TRACER_RV = (CdAudio535DeviceControl_retres109);
										CdAudioDeviceControl_status = TRACER_RV;
										TRACER_RV = nondet();
L230:;
										TRACER_RV = (CdAudioDeviceControl_status);
										main_status = TRACER_RV;
										TRACER_RV = nondet();
										goto L53;
}
}
									}
									else {
{
 int SendSrbSynchronous_ioStatus__Status ;
int SendSrbSynchronous_ioctl ;
int SendSrbSynchronous_event ;
int SendSrbSynchronous_irp ;
int SendSrbSynchronous_status ;
int SendSrbSynchronous_CIL___Tmp10 ;
int SendSrbSynchronous_CIL___Tmp11 ;
int SendSrbSynchronous_CIL___Tmp12 ;
int SendSrbSynchronous_CIL___Tmp13 ;
int SendSrbSynchronous_CIL___Tmp14 ;
int SendSrbSynchronous_CIL___Tmp15 ;
int SendSrbSynchronous_CIL___Tmp16 ;
int SendSrbSynchronous_CIL___Tmp17 ;
int SendSrbSynchronous_CIL___Tmp18 ;
int SendSrbSynchronous_retres19 ;
										int SendSrbSynchronous_Extension ; int SendSrbSynchronous_Srb ; int SendSrbSynchronous_Buffer ; int SendSrbSynchronous_BufferLength ;
										SendSrbSynchronous_Extension = CdAudio535DeviceControl_deviceExtension;
										SendSrbSynchronous_Srb = CdAudio535DeviceControl_srb;
										SendSrbSynchronous_Buffer = 0;
										SendSrbSynchronous_BufferLength = 0;
										SendSrbSynchronous_irp = 0;
										SendSrbSynchronous_retres19 = -1073741670;
										TRACER_RV = (SendSrbSynchronous_retres19);
										CdAudio535DeviceControl_status = TRACER_RV;
										TRACER_RV = nondet();
										goto L228;
}
									}
								}
								else if(CdAudio535DeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode < CdAudio535DeviceControl_CIL___Tmp75) {
									CdAudio535DeviceControl_CIL___Tmp76 = 4;
									CdAudio535DeviceControl_CIL___Tmp77 = 16384;
									CdAudio535DeviceControl_CIL___Tmp78 = 131072;
									CdAudio535DeviceControl_CIL___Tmp79 = 147456;
									CdAudio535DeviceControl_CIL___Tmp80 = 147460;
									if(CdAudio535DeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode >= CdAudio535DeviceControl_CIL___Tmp80 && CdAudio535DeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode <= CdAudio535DeviceControl_CIL___Tmp80) {
										if(CdAudio535DeviceControl_currentIrpStack__Parameters__DeviceIoControl__InputBufferLength < CdAudio535DeviceControl_sizeof__CDROM_SEEK_AUDIO_MSF) {
											CdAudio535DeviceControl_status = -1073741820;
											goto L229;
										}
										else {
{
 int SendSrbSynchronous_ioStatus__Status ;
int SendSrbSynchronous_ioctl ;
int SendSrbSynchronous_event ;
int SendSrbSynchronous_irp ;
int SendSrbSynchronous_status ;
int SendSrbSynchronous_CIL___Tmp10 ;
int SendSrbSynchronous_CIL___Tmp11 ;
int SendSrbSynchronous_CIL___Tmp12 ;
int SendSrbSynchronous_CIL___Tmp13 ;
int SendSrbSynchronous_CIL___Tmp14 ;
int SendSrbSynchronous_CIL___Tmp15 ;
int SendSrbSynchronous_CIL___Tmp16 ;
int SendSrbSynchronous_CIL___Tmp17 ;
int SendSrbSynchronous_CIL___Tmp18 ;
int SendSrbSynchronous_retres19 ;
											int SendSrbSynchronous_Extension ; int SendSrbSynchronous_Srb ; int SendSrbSynchronous_Buffer ; int SendSrbSynchronous_BufferLength ;
											SendSrbSynchronous_Extension = CdAudio535DeviceControl_deviceExtension;
											SendSrbSynchronous_Srb = CdAudio535DeviceControl_srb;
											SendSrbSynchronous_Buffer = 0;
											SendSrbSynchronous_BufferLength = 0;
											SendSrbSynchronous_irp = 0;
											SendSrbSynchronous_retres19 = -1073741670;
											TRACER_RV = (SendSrbSynchronous_retres19);
											CdAudio535DeviceControl_status = TRACER_RV;
											TRACER_RV = nondet();
											goto L228;
}
										}
									}
									else if(CdAudio535DeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode < CdAudio535DeviceControl_CIL___Tmp80) {
										CdAudio535DeviceControl_CIL___Tmp81 = 2056;
										CdAudio535DeviceControl_CIL___Tmp82 = 16384;
										CdAudio535DeviceControl_CIL___Tmp83 = 131072;
										CdAudio535DeviceControl_CIL___Tmp84 = 147456;
										CdAudio535DeviceControl_CIL___Tmp85 = 149512;
										CdAudio535DeviceControl_CIL___Tmp86 = 52;
										CdAudio535DeviceControl_CIL___Tmp87 = 16384;
										CdAudio535DeviceControl_CIL___Tmp88 = 131072;
										CdAudio535DeviceControl_CIL___Tmp89 = 147456;
										CdAudio535DeviceControl_CIL___Tmp90 = 147508;
										CdAudio535DeviceControl_CIL___Tmp91 = 20;
										CdAudio535DeviceControl_CIL___Tmp92 = 16384;
										CdAudio535DeviceControl_CIL___Tmp93 = 131072;
										CdAudio535DeviceControl_CIL___Tmp94 = 147456;
										CdAudio535DeviceControl_CIL___Tmp95 = 147476;
L231:;
										CdAudio535DeviceControl_CIL___Tmp96 = 40;
										CdAudio535DeviceControl_CIL___Tmp97 = 16384;
										CdAudio535DeviceControl_CIL___Tmp98 = 131072;
										CdAudio535DeviceControl_CIL___Tmp99 = 147456;
										CdAudio535DeviceControl_CIL___Tmp100 = 147496;
										goto L217;
									}
									else {
										CdAudio535DeviceControl_CIL___Tmp81 = 2056;
										CdAudio535DeviceControl_CIL___Tmp82 = 16384;
										CdAudio535DeviceControl_CIL___Tmp83 = 131072;
										CdAudio535DeviceControl_CIL___Tmp84 = 147456;
										CdAudio535DeviceControl_CIL___Tmp85 = 149512;
										CdAudio535DeviceControl_CIL___Tmp86 = 52;
										CdAudio535DeviceControl_CIL___Tmp87 = 16384;
										CdAudio535DeviceControl_CIL___Tmp88 = 131072;
										CdAudio535DeviceControl_CIL___Tmp89 = 147456;
										CdAudio535DeviceControl_CIL___Tmp90 = 147508;
										CdAudio535DeviceControl_CIL___Tmp91 = 20;
										CdAudio535DeviceControl_CIL___Tmp92 = 16384;
										CdAudio535DeviceControl_CIL___Tmp93 = 131072;
										CdAudio535DeviceControl_CIL___Tmp94 = 147456;
										CdAudio535DeviceControl_CIL___Tmp95 = 147476;
										if(CdAudio535DeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode >= CdAudio535DeviceControl_CIL___Tmp95 && CdAudio535DeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode <= CdAudio535DeviceControl_CIL___Tmp95) {
											CdAudio535DeviceControl_Irp__IoStatus__Information = 0;
											CdAudio535DeviceControl_status = -1073741808;
L232:;
{
 int AG_SetStatusAndReturn_CIL___Tmp4 ;
											int AG_SetStatusAndReturn_status ; int AG_SetStatusAndReturn_Irp ; int AG_SetStatusAndReturn_deviceExtension__TargetDeviceObject ;
											AG_SetStatusAndReturn_status = CdAudio535DeviceControl_status;
											AG_SetStatusAndReturn_Irp = CdAudio535DeviceControl_Irp;
											AG_SetStatusAndReturn_deviceExtension__TargetDeviceObject = CdAudio535DeviceControl_deviceExtension__TargetDeviceObject;
{
											int IofCompleteRequest_Irp ; int IofCompleteRequest_PriorityBoost ;
											IofCompleteRequest_Irp = AG_SetStatusAndReturn_Irp;
											IofCompleteRequest_PriorityBoost = 0;
											safety = safety + (s - NP);
											s = DC;
											;
											TRACER_RV = nondet();
											TRACER_RV = (AG_SetStatusAndReturn_status);
											CdAudio535DeviceControl_tmp___8 = TRACER_RV;
											TRACER_RV = nondet();
											CdAudio535DeviceControl_retres109 = CdAudio535DeviceControl_tmp___8;
											TRACER_RV = (CdAudio535DeviceControl_retres109);
											CdAudioDeviceControl_status = TRACER_RV;
											TRACER_RV = nondet();
											TRACER_RV = (CdAudioDeviceControl_status);
											main_status = TRACER_RV;
											TRACER_RV = nondet();
											goto L56;
}
}
										}
										else if(CdAudio535DeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode < CdAudio535DeviceControl_CIL___Tmp95) {
											goto L231;
										}
										else {
											goto L231;
										}
									}
								}
								else {
									CdAudio535DeviceControl_CIL___Tmp76 = 4;
									CdAudio535DeviceControl_CIL___Tmp77 = 16384;
									CdAudio535DeviceControl_CIL___Tmp78 = 131072;
									CdAudio535DeviceControl_CIL___Tmp79 = 147456;
									CdAudio535DeviceControl_CIL___Tmp80 = 147460;
									CdAudio535DeviceControl_CIL___Tmp81 = 2056;
									CdAudio535DeviceControl_CIL___Tmp82 = 16384;
									CdAudio535DeviceControl_CIL___Tmp83 = 131072;
									CdAudio535DeviceControl_CIL___Tmp84 = 147456;
									CdAudio535DeviceControl_CIL___Tmp85 = 149512;
									CdAudio535DeviceControl_CIL___Tmp86 = 52;
									CdAudio535DeviceControl_CIL___Tmp87 = 16384;
									CdAudio535DeviceControl_CIL___Tmp88 = 131072;
									CdAudio535DeviceControl_CIL___Tmp89 = 147456;
									CdAudio535DeviceControl_CIL___Tmp90 = 147508;
L233:;
									CdAudio535DeviceControl_CIL___Tmp91 = 20;
									CdAudio535DeviceControl_CIL___Tmp92 = 16384;
									CdAudio535DeviceControl_CIL___Tmp93 = 131072;
									CdAudio535DeviceControl_CIL___Tmp94 = 147456;
									CdAudio535DeviceControl_CIL___Tmp95 = 147476;
									CdAudio535DeviceControl_CIL___Tmp96 = 40;
									CdAudio535DeviceControl_CIL___Tmp97 = 16384;
									CdAudio535DeviceControl_CIL___Tmp98 = 131072;
									CdAudio535DeviceControl_CIL___Tmp99 = 147456;
									CdAudio535DeviceControl_CIL___Tmp100 = 147496;
									if(CdAudio535DeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode >= CdAudio535DeviceControl_CIL___Tmp100 && CdAudio535DeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode <= CdAudio535DeviceControl_CIL___Tmp100) {
										CdAudio535DeviceControl_Irp__IoStatus__Information = 0;
										CdAudio535DeviceControl_status = -1073741808;
										goto L232;
									}
									else if(CdAudio535DeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode < CdAudio535DeviceControl_CIL___Tmp100) {
										goto L217;
									}
									else {
										goto L217;
									}
								}
							}
							else {
								CdAudio535DeviceControl_CIL___Tmp71 = 24;
								CdAudio535DeviceControl_CIL___Tmp72 = 16384;
								CdAudio535DeviceControl_CIL___Tmp73 = 131072;
								CdAudio535DeviceControl_CIL___Tmp74 = 147456;
								CdAudio535DeviceControl_CIL___Tmp75 = 147480;
								CdAudio535DeviceControl_CIL___Tmp76 = 4;
								CdAudio535DeviceControl_CIL___Tmp77 = 16384;
								CdAudio535DeviceControl_CIL___Tmp78 = 131072;
								CdAudio535DeviceControl_CIL___Tmp79 = 147456;
								CdAudio535DeviceControl_CIL___Tmp80 = 147460;
								CdAudio535DeviceControl_CIL___Tmp81 = 2056;
								CdAudio535DeviceControl_CIL___Tmp82 = 16384;
								CdAudio535DeviceControl_CIL___Tmp83 = 131072;
								CdAudio535DeviceControl_CIL___Tmp84 = 147456;
								CdAudio535DeviceControl_CIL___Tmp85 = 149512;
								CdAudio535DeviceControl_CIL___Tmp86 = 52;
								CdAudio535DeviceControl_CIL___Tmp87 = 16384;
								CdAudio535DeviceControl_CIL___Tmp88 = 131072;
								CdAudio535DeviceControl_CIL___Tmp89 = 147456;
								CdAudio535DeviceControl_CIL___Tmp90 = 147508;
								if(CdAudio535DeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode >= CdAudio535DeviceControl_CIL___Tmp90 && CdAudio535DeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode <= CdAudio535DeviceControl_CIL___Tmp90) {
									CdAudio535DeviceControl_Irp__IoStatus__Information = 0;
									CdAudio535DeviceControl_status = -1073741808;
									goto L232;
								}
								else if(CdAudio535DeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode < CdAudio535DeviceControl_CIL___Tmp90) {
									goto L233;
								}
								else {
									goto L233;
								}
							}
						}
					}
					else {
						CdAudio535DeviceControl_CIL___Tmp63 = 16384;
						CdAudio535DeviceControl_CIL___Tmp64 = 131072;
						CdAudio535DeviceControl_CIL___Tmp65 = 147456;
						CdAudio535DeviceControl_CIL___Tmp66 = 44;
						CdAudio535DeviceControl_CIL___Tmp67 = 16384;
						CdAudio535DeviceControl_CIL___Tmp68 = 131072;
						CdAudio535DeviceControl_CIL___Tmp69 = 147456;
						CdAudio535DeviceControl_CIL___Tmp70 = 147500;
						CdAudio535DeviceControl_CIL___Tmp71 = 24;
						CdAudio535DeviceControl_CIL___Tmp72 = 16384;
						CdAudio535DeviceControl_CIL___Tmp73 = 131072;
						CdAudio535DeviceControl_CIL___Tmp74 = 147456;
						CdAudio535DeviceControl_CIL___Tmp75 = 147480;
						CdAudio535DeviceControl_CIL___Tmp76 = 4;
						CdAudio535DeviceControl_CIL___Tmp77 = 16384;
						CdAudio535DeviceControl_CIL___Tmp78 = 131072;
						CdAudio535DeviceControl_CIL___Tmp79 = 147456;
						CdAudio535DeviceControl_CIL___Tmp80 = 147460;
						CdAudio535DeviceControl_CIL___Tmp81 = 2056;
						CdAudio535DeviceControl_CIL___Tmp82 = 16384;
						CdAudio535DeviceControl_CIL___Tmp83 = 131072;
						CdAudio535DeviceControl_CIL___Tmp84 = 147456;
						CdAudio535DeviceControl_CIL___Tmp85 = 149512;
						if(CdAudio535DeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode >= CdAudio535DeviceControl_CIL___Tmp85 && CdAudio535DeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode <= CdAudio535DeviceControl_CIL___Tmp85) {
{
 int SendSrbSynchronous_ioStatus__Status ;
int SendSrbSynchronous_ioctl ;
int SendSrbSynchronous_event ;
int SendSrbSynchronous_irp ;
int SendSrbSynchronous_status ;
int SendSrbSynchronous_CIL___Tmp10 ;
int SendSrbSynchronous_CIL___Tmp11 ;
int SendSrbSynchronous_CIL___Tmp12 ;
int SendSrbSynchronous_CIL___Tmp13 ;
int SendSrbSynchronous_CIL___Tmp14 ;
int SendSrbSynchronous_CIL___Tmp15 ;
int SendSrbSynchronous_CIL___Tmp16 ;
int SendSrbSynchronous_CIL___Tmp17 ;
int SendSrbSynchronous_CIL___Tmp18 ;
int SendSrbSynchronous_retres19 ;
							int SendSrbSynchronous_Extension ; int SendSrbSynchronous_Srb ; int SendSrbSynchronous_Buffer ; int SendSrbSynchronous_BufferLength ;
							SendSrbSynchronous_Extension = CdAudio535DeviceControl_deviceExtension;
							SendSrbSynchronous_Srb = CdAudio535DeviceControl_srb;
							SendSrbSynchronous_Buffer = 0;
							SendSrbSynchronous_BufferLength = 0;
							SendSrbSynchronous_irp = 0;
							SendSrbSynchronous_retres19 = -1073741670;
							TRACER_RV = (SendSrbSynchronous_retres19);
							CdAudio535DeviceControl_status = TRACER_RV;
							TRACER_RV = nondet();
							goto L228;
}
						}
						else if(CdAudio535DeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode < CdAudio535DeviceControl_CIL___Tmp85) {
L234:;
							CdAudio535DeviceControl_CIL___Tmp86 = 52;
							CdAudio535DeviceControl_CIL___Tmp87 = 16384;
							CdAudio535DeviceControl_CIL___Tmp88 = 131072;
							CdAudio535DeviceControl_CIL___Tmp89 = 147456;
							CdAudio535DeviceControl_CIL___Tmp90 = 147508;
							CdAudio535DeviceControl_CIL___Tmp91 = 20;
							CdAudio535DeviceControl_CIL___Tmp92 = 16384;
							CdAudio535DeviceControl_CIL___Tmp93 = 131072;
							CdAudio535DeviceControl_CIL___Tmp94 = 147456;
							CdAudio535DeviceControl_CIL___Tmp95 = 147476;
							CdAudio535DeviceControl_CIL___Tmp96 = 40;
							CdAudio535DeviceControl_CIL___Tmp97 = 16384;
							CdAudio535DeviceControl_CIL___Tmp98 = 131072;
							CdAudio535DeviceControl_CIL___Tmp99 = 147456;
							CdAudio535DeviceControl_CIL___Tmp100 = 147496;
							CdAudio535DeviceControl_CIL___Tmp101 = 2048;
							CdAudio535DeviceControl_CIL___Tmp102 = 16384;
							CdAudio535DeviceControl_CIL___Tmp103 = 131072;
							CdAudio535DeviceControl_CIL___Tmp104 = 147456;
							CdAudio535DeviceControl_CIL___Tmp105 = 149504;
							if(CdAudio535DeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode >= CdAudio535DeviceControl_CIL___Tmp105 && CdAudio535DeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode <= CdAudio535DeviceControl_CIL___Tmp105) {
{
 int CdAudioIsPlayActive_deviceExtension__PlayActive ;
int CdAudioIsPlayActive_ioStatus__Status ;
int CdAudioIsPlayActive_currentBuffer__Header__AudioStatus ;
int CdAudioIsPlayActive_irp_CdAudioIsPlayActive ;
int CdAudioIsPlayActive_event ;
int CdAudioIsPlayActive_status ;
int CdAudioIsPlayActive_currentBuffer ;
int CdAudioIsPlayActive_returnValue ;
int CdAudioIsPlayActive_CIL___Tmp10 ;
int CdAudioIsPlayActive_retres11 ;
								int CdAudioIsPlayActive_DeviceObject ;
								CdAudioIsPlayActive_DeviceObject = CdAudio535DeviceControl_DeviceObject;
								if(CdAudioIsPlayActive_deviceExtension__PlayActive >= 0 && CdAudioIsPlayActive_deviceExtension__PlayActive <= 0) {
L235:;
									;
									TRACER_RV = nondet();
{
 int AG_SetStatusAndReturn_CIL___Tmp4 ;
									int AG_SetStatusAndReturn_status ; int AG_SetStatusAndReturn_Irp ; int AG_SetStatusAndReturn_deviceExtension__TargetDeviceObject ;
									AG_SetStatusAndReturn_status = CdAudio535DeviceControl_status;
									AG_SetStatusAndReturn_Irp = CdAudio535DeviceControl_Irp;
									AG_SetStatusAndReturn_deviceExtension__TargetDeviceObject = CdAudio535DeviceControl_deviceExtension__TargetDeviceObject;
{
									int IofCompleteRequest_Irp ; int IofCompleteRequest_PriorityBoost ;
									IofCompleteRequest_Irp = AG_SetStatusAndReturn_Irp;
									IofCompleteRequest_PriorityBoost = 0;
									safety = safety + (s - NP);
									s = DC;
									;
									TRACER_RV = nondet();
									TRACER_RV = (AG_SetStatusAndReturn_status);
									CdAudio535DeviceControl_tmp___8 = TRACER_RV;
									TRACER_RV = nondet();
									CdAudio535DeviceControl_retres109 = CdAudio535DeviceControl_tmp___8;
									TRACER_RV = (CdAudio535DeviceControl_retres109);
									CdAudioDeviceControl_status = TRACER_RV;
									TRACER_RV = nondet();
L236:;
									TRACER_RV = (CdAudioDeviceControl_status);
									main_status = TRACER_RV;
									TRACER_RV = nondet();
									goto L61;
}
}
								}
								else if(CdAudioIsPlayActive_deviceExtension__PlayActive < 0) {
L237:;
									if(CdAudioIsPlayActive_currentBuffer >= 0 && CdAudioIsPlayActive_currentBuffer <= 0) {
										goto L235;
									}
									else if(CdAudioIsPlayActive_currentBuffer < 0) {
L238:;
										if(CdAudioIsPlayActive_irp_CdAudioIsPlayActive >= 0 && CdAudioIsPlayActive_irp_CdAudioIsPlayActive <= 0) {
											goto L235;
										}
										else if(CdAudioIsPlayActive_irp_CdAudioIsPlayActive < 0) {
L239:;
											CdAudioIsPlayActive_CIL___Tmp10 = CdAudioIsPlayActive_status;
											if(CdAudioIsPlayActive_CIL___Tmp10 >= 259 && CdAudioIsPlayActive_CIL___Tmp10 <= 259) {
{
 int KeWaitForSingleObject_tmp_ndt_7 ;
int KeWaitForSingleObject_retres7 ;
												int KeWaitForSingleObject_Object ; int KeWaitForSingleObject_WaitReason ; int KeWaitForSingleObject_WaitMode ; int KeWaitForSingleObject_Alertable ; int KeWaitForSingleObject_Timeout ;
												KeWaitForSingleObject_Object = CdAudioIsPlayActive_event;
												KeWaitForSingleObject_WaitReason = Suspended;
												KeWaitForSingleObject_WaitMode = KernelMode;
												KeWaitForSingleObject_Alertable = 0;
												KeWaitForSingleObject_Timeout = 0;
L240:;
												;
												TRACER_RV = nondet();
												CdAudioIsPlayActive_status = CdAudioIsPlayActive_ioStatus__Status;
L241:;
												if(CdAudioIsPlayActive_status < 0) {
													goto L235;
												}
												else {
													if(CdAudioIsPlayActive_currentBuffer__Header__AudioStatus >= 17 && CdAudioIsPlayActive_currentBuffer__Header__AudioStatus <= 17) {
L242:;
														goto L235;
													}
													else if(CdAudioIsPlayActive_currentBuffer__Header__AudioStatus < 17) {
L243:;
														goto L242;
													}
													else {
														goto L243;
													}
												}
}
											}
											else if(CdAudioIsPlayActive_CIL___Tmp10 < 259) {
												goto L241;
											}
											else {
												goto L241;
											}
										}
										else {
											goto L239;
										}
									}
									else {
										goto L238;
									}
								}
								else {
									goto L237;
								}
}
							}
							else if(CdAudio535DeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode < CdAudio535DeviceControl_CIL___Tmp105) {
								goto L218;
							}
							else {
								goto L218;
							}
						}
						else {
							goto L234;
						}
					}
}
				}
				else if(CdAudioDeviceControl_deviceExtension__Active < 2) {
					if(CdAudioDeviceControl_deviceExtension__Active >= 1 && CdAudioDeviceControl_deviceExtension__Active <= 1) {
{
 int CdAudioAtapiDeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode ;
int CdAudioAtapiDeviceControl_Irp__IoStatus__Information ;
int CdAudioAtapiDeviceControl_deviceExtension__PlayActive ;
int CdAudioAtapiDeviceControl_srb__CdbLength ;
int CdAudioAtapiDeviceControl_srb__TimeOutValue ;
int CdAudioAtapiDeviceControl_Irp__IoStatus__Status ;
int CdAudioAtapiDeviceControl_status ;
int CdAudioAtapiDeviceControl_deviceExtension ;
int CdAudioAtapiDeviceControl_srb ;
int CdAudioAtapiDeviceControl_tmp ;
int CdAudioAtapiDeviceControl_CIL___Tmp13 ;
int CdAudioAtapiDeviceControl_CIL___Tmp14 ;
int CdAudioAtapiDeviceControl_CIL___Tmp15 ;
int CdAudioAtapiDeviceControl_CIL___Tmp16 ;
int CdAudioAtapiDeviceControl_CIL___Tmp17 ;
int CdAudioAtapiDeviceControl_retres18 ;
int CdAudioAtapiDeviceControl_TRACER_returning ;
						int CdAudioAtapiDeviceControl_DeviceObject ; int CdAudioAtapiDeviceControl_Irp ;
						CdAudioAtapiDeviceControl_DeviceObject = CdAudioDeviceControl_DeviceObject;
						CdAudioAtapiDeviceControl_Irp = CdAudioDeviceControl_Irp;
						CdAudioAtapiDeviceControl_TRACER_returning = 0;
						CdAudioAtapiDeviceControl_CIL___Tmp13 = 8;
						CdAudioAtapiDeviceControl_CIL___Tmp14 = 16384;
						CdAudioAtapiDeviceControl_CIL___Tmp15 = 131072;
						CdAudioAtapiDeviceControl_CIL___Tmp16 = 147456;
						CdAudioAtapiDeviceControl_CIL___Tmp17 = 147464;
						if(CdAudioAtapiDeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode >= CdAudioAtapiDeviceControl_CIL___Tmp17 && CdAudioAtapiDeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode <= CdAudioAtapiDeviceControl_CIL___Tmp17) {
{
 int SendSrbSynchronous_ioStatus__Status ;
int SendSrbSynchronous_ioctl ;
int SendSrbSynchronous_event ;
int SendSrbSynchronous_irp ;
int SendSrbSynchronous_status ;
int SendSrbSynchronous_CIL___Tmp10 ;
int SendSrbSynchronous_CIL___Tmp11 ;
int SendSrbSynchronous_CIL___Tmp12 ;
int SendSrbSynchronous_CIL___Tmp13 ;
int SendSrbSynchronous_CIL___Tmp14 ;
int SendSrbSynchronous_CIL___Tmp15 ;
int SendSrbSynchronous_CIL___Tmp16 ;
int SendSrbSynchronous_CIL___Tmp17 ;
int SendSrbSynchronous_CIL___Tmp18 ;
int SendSrbSynchronous_retres19 ;
							int SendSrbSynchronous_Extension ; int SendSrbSynchronous_Srb ; int SendSrbSynchronous_Buffer ; int SendSrbSynchronous_BufferLength ;
							SendSrbSynchronous_Extension = CdAudioAtapiDeviceControl_deviceExtension;
							SendSrbSynchronous_Srb = CdAudioAtapiDeviceControl_srb;
							SendSrbSynchronous_Buffer = 0;
							SendSrbSynchronous_BufferLength = 0;
							SendSrbSynchronous_irp = 0;
							SendSrbSynchronous_retres19 = -1073741670;
							TRACER_RV = (SendSrbSynchronous_retres19);
							CdAudioAtapiDeviceControl_status = TRACER_RV;
							TRACER_RV = nondet();
{
							int IofCompleteRequest_Irp ; int IofCompleteRequest_PriorityBoost ;
							IofCompleteRequest_Irp = CdAudioAtapiDeviceControl_Irp;
							IofCompleteRequest_PriorityBoost = 0;
							safety = safety + (s - NP);
							s = DC;
							;
							TRACER_RV = nondet();
							CdAudioAtapiDeviceControl_retres18 = CdAudioAtapiDeviceControl_status;
							CdAudioAtapiDeviceControl_TRACER_returning = 1;
							TRACER_RV = (CdAudioAtapiDeviceControl_retres18);
							CdAudioDeviceControl_status = TRACER_RV;
							TRACER_RV = nondet();
							goto L198;
}
}
						}
						else if(CdAudioAtapiDeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode < CdAudioAtapiDeviceControl_CIL___Tmp17) {
L244:;
{
 int CdAudioSendToNextDriver_Irp__CurrentLocation ;
int CdAudioSendToNextDriver_Irp__Tail__Overlay__CurrentStackLocation ;
int CdAudioSendToNextDriver_deviceExtension__TargetDeviceObject ;
int CdAudioSendToNextDriver_tmp ;
							int CdAudioSendToNextDriver_DeviceObject ; int CdAudioSendToNextDriver_Irp ;
							CdAudioSendToNextDriver_DeviceObject = CdAudioAtapiDeviceControl_DeviceObject;
							CdAudioSendToNextDriver_Irp = CdAudioAtapiDeviceControl_Irp;
							safety = safety + (s - NP);
							s = SKIP1;
							CdAudioSendToNextDriver_Irp__CurrentLocation = CdAudioSendToNextDriver_Irp__CurrentLocation + 1;
							CdAudioSendToNextDriver_Irp__Tail__Overlay__CurrentStackLocation = CdAudioSendToNextDriver_Irp__Tail__Overlay__CurrentStackLocation + 1;
{
 int IofCallDriver_Irp__PendingReturned ;
int IofCallDriver_returnVal2 ;
int IofCallDriver_compRetStatus ;
int IofCallDriver_lcontext ;
int IofCallDriver_CIL___Tmp8 ;
int IofCallDriver_tmp_ndt_5 ;
int IofCallDriver_tmp_ndt_6 ;
							int IofCallDriver_DeviceObject ; int IofCallDriver_Irp ;
							IofCallDriver_DeviceObject = CdAudioSendToNextDriver_deviceExtension__TargetDeviceObject;
							IofCallDriver_Irp = CdAudioSendToNextDriver_Irp;
							if(IofCallDriver_Irp__PendingReturned > 0) {
L245:;
								IofCallDriver_returnVal2 = 259;
L246:;
								safety = safety + (s - SKIP1);
								s = SKIP2;
								lowerDriverReturn = IofCallDriver_returnVal2;
								TRACER_RV = (IofCallDriver_returnVal2);
								CdAudioSendToNextDriver_tmp = TRACER_RV;
								TRACER_RV = nondet();
								TRACER_RV = (CdAudioSendToNextDriver_tmp);
								CdAudioAtapiDeviceControl_tmp = TRACER_RV;
								TRACER_RV = nondet();
								CdAudioAtapiDeviceControl_retres18 = CdAudioAtapiDeviceControl_tmp;
								CdAudioAtapiDeviceControl_TRACER_returning = 1;
								TRACER_RV = (CdAudioAtapiDeviceControl_retres18);
								CdAudioDeviceControl_status = TRACER_RV;
								TRACER_RV = nondet();
								goto L221;
							}
							else if(IofCallDriver_Irp__PendingReturned < 0) {
								goto L245;
							}
							else {
								IofCallDriver_tmp_ndt_5 = __VERIFIER_nondet_int();
								if(IofCallDriver_tmp_ndt_5 >= 0 && IofCallDriver_tmp_ndt_5 <= 0) {
									IofCallDriver_returnVal2 = 0;
									safety = safety + (s - SKIP1);
									s = SKIP2;
									lowerDriverReturn = IofCallDriver_returnVal2;
									TRACER_RV = (IofCallDriver_returnVal2);
									CdAudioSendToNextDriver_tmp = TRACER_RV;
									TRACER_RV = nondet();
									TRACER_RV = (CdAudioSendToNextDriver_tmp);
									CdAudioAtapiDeviceControl_tmp = TRACER_RV;
									TRACER_RV = nondet();
									CdAudioAtapiDeviceControl_retres18 = CdAudioAtapiDeviceControl_tmp;
									CdAudioAtapiDeviceControl_TRACER_returning = 1;
									TRACER_RV = (CdAudioAtapiDeviceControl_retres18);
									CdAudioDeviceControl_status = TRACER_RV;
									TRACER_RV = nondet();
									goto L222;
								}
								else if(IofCallDriver_tmp_ndt_5 < 0) {
L247:;
									IofCallDriver_tmp_ndt_6 = __VERIFIER_nondet_int();
									if(IofCallDriver_tmp_ndt_6 >= 1 && IofCallDriver_tmp_ndt_6 <= 1) {
										IofCallDriver_returnVal2 = -1073741823;
										safety = safety + (s - SKIP1);
										s = SKIP2;
										lowerDriverReturn = IofCallDriver_returnVal2;
										TRACER_RV = (IofCallDriver_returnVal2);
										CdAudioSendToNextDriver_tmp = TRACER_RV;
										TRACER_RV = nondet();
										TRACER_RV = (CdAudioSendToNextDriver_tmp);
										CdAudioAtapiDeviceControl_tmp = TRACER_RV;
										TRACER_RV = nondet();
										CdAudioAtapiDeviceControl_retres18 = CdAudioAtapiDeviceControl_tmp;
										CdAudioAtapiDeviceControl_TRACER_returning = 1;
										TRACER_RV = (CdAudioAtapiDeviceControl_retres18);
										CdAudioDeviceControl_status = TRACER_RV;
										TRACER_RV = nondet();
										goto L224;
									}
									else if(IofCallDriver_tmp_ndt_6 < 1) {
L248:;
										IofCallDriver_returnVal2 = 259;
										goto L246;
									}
									else {
										goto L248;
									}
								}
								else {
									goto L247;
								}
							}
}
}
						}
						else {
							goto L244;
						}
}
					}
					else if(CdAudioDeviceControl_deviceExtension__Active < 1) {
L249:;
L250:;
{
 int CdAudioSendToNextDriver_Irp__CurrentLocation ;
int CdAudioSendToNextDriver_Irp__Tail__Overlay__CurrentStackLocation ;
int CdAudioSendToNextDriver_deviceExtension__TargetDeviceObject ;
int CdAudioSendToNextDriver_tmp ;
						int CdAudioSendToNextDriver_DeviceObject ; int CdAudioSendToNextDriver_Irp ;
						CdAudioSendToNextDriver_DeviceObject = CdAudioDeviceControl_DeviceObject;
						CdAudioSendToNextDriver_Irp = CdAudioDeviceControl_Irp;
						safety = safety + (s - NP);
						s = SKIP1;
						CdAudioSendToNextDriver_Irp__CurrentLocation = CdAudioSendToNextDriver_Irp__CurrentLocation + 1;
						CdAudioSendToNextDriver_Irp__Tail__Overlay__CurrentStackLocation = CdAudioSendToNextDriver_Irp__Tail__Overlay__CurrentStackLocation + 1;
{
 int IofCallDriver_Irp__PendingReturned ;
int IofCallDriver_returnVal2 ;
int IofCallDriver_compRetStatus ;
int IofCallDriver_lcontext ;
int IofCallDriver_CIL___Tmp8 ;
int IofCallDriver_tmp_ndt_5 ;
int IofCallDriver_tmp_ndt_6 ;
						int IofCallDriver_DeviceObject ; int IofCallDriver_Irp ;
						IofCallDriver_DeviceObject = CdAudioSendToNextDriver_deviceExtension__TargetDeviceObject;
						IofCallDriver_Irp = CdAudioSendToNextDriver_Irp;
						if(IofCallDriver_Irp__PendingReturned > 0) {
L251:;
							IofCallDriver_returnVal2 = 259;
L252:;
							safety = safety + (s - SKIP1);
							s = SKIP2;
							lowerDriverReturn = IofCallDriver_returnVal2;
							TRACER_RV = (IofCallDriver_returnVal2);
							CdAudioSendToNextDriver_tmp = TRACER_RV;
							TRACER_RV = nondet();
							TRACER_RV = (CdAudioSendToNextDriver_tmp);
							CdAudioDeviceControl_status = TRACER_RV;
							TRACER_RV = nondet();
							goto L221;
						}
						else if(IofCallDriver_Irp__PendingReturned < 0) {
							goto L251;
						}
						else {
							IofCallDriver_tmp_ndt_5 = __VERIFIER_nondet_int();
							if(IofCallDriver_tmp_ndt_5 >= 0 && IofCallDriver_tmp_ndt_5 <= 0) {
								IofCallDriver_returnVal2 = 0;
								safety = safety + (s - SKIP1);
								s = SKIP2;
								lowerDriverReturn = IofCallDriver_returnVal2;
								TRACER_RV = (IofCallDriver_returnVal2);
								CdAudioSendToNextDriver_tmp = TRACER_RV;
								TRACER_RV = nondet();
								TRACER_RV = (CdAudioSendToNextDriver_tmp);
								CdAudioDeviceControl_status = TRACER_RV;
								TRACER_RV = nondet();
								goto L222;
							}
							else if(IofCallDriver_tmp_ndt_5 < 0) {
L253:;
								IofCallDriver_tmp_ndt_6 = __VERIFIER_nondet_int();
								if(IofCallDriver_tmp_ndt_6 >= 1 && IofCallDriver_tmp_ndt_6 <= 1) {
									IofCallDriver_returnVal2 = -1073741823;
									safety = safety + (s - SKIP1);
									s = SKIP2;
									lowerDriverReturn = IofCallDriver_returnVal2;
									TRACER_RV = (IofCallDriver_returnVal2);
									CdAudioSendToNextDriver_tmp = TRACER_RV;
									TRACER_RV = nondet();
									TRACER_RV = (CdAudioSendToNextDriver_tmp);
									CdAudioDeviceControl_status = TRACER_RV;
									TRACER_RV = nondet();
									goto L224;
								}
								else if(IofCallDriver_tmp_ndt_6 < 1) {
L254:;
									IofCallDriver_returnVal2 = 259;
									goto L252;
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
}
					}
					else {
						goto L249;
					}
				}
				else {
					if(CdAudioDeviceControl_deviceExtension__Active >= 3 && CdAudioDeviceControl_deviceExtension__Active <= 3) {
{
 int CdAudio435DeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode ;
int CdAudio435DeviceControl_currentIrpStack__Parameters__DeviceIoControl__OutputBufferLength ;
int CdAudio435DeviceControl_currentIrpStack__Parameters__DeviceIoControl__InputBufferLength ;
int CdAudio435DeviceControl_TrackData__0 ;
int CdAudio435DeviceControl_Irp__IoStatus__Information ;
int CdAudio435DeviceControl_srb__TimeOutValue ;
int CdAudio435DeviceControl_srb__CdbLength ;
int CdAudio435DeviceControl_sizeof__CDROM_TOC ;
int CdAudio435DeviceControl_cdaudioDataOut__LastTrack ;
int CdAudio435DeviceControl_cdaudioDataOut__FirstTrack ;
int CdAudio435DeviceControl_sizeof__CDROM_PLAY_AUDIO_MSF ;
int CdAudio435DeviceControl_sizeof__CDROM_SEEK_AUDIO_MSF ;
int CdAudio435DeviceControl_deviceExtension__Paused ;
int CdAudio435DeviceControl_deviceExtension__PlayActive ;
int CdAudio435DeviceControl_sizeof__SUB_Q_CHANNEL_DATA ;
int CdAudio435DeviceControl_sizeof__SUB_Q_CURRENT_POSITION ;
int CdAudio435DeviceControl_deviceExtension ;
int CdAudio435DeviceControl_srb ;
int CdAudio435DeviceControl_status ;
int CdAudio435DeviceControl_i ;
int CdAudio435DeviceControl_bytesTransfered ;
int CdAudio435DeviceControl_Toc ;
int CdAudio435DeviceControl_tmp ;
int CdAudio435DeviceControl_tracksToReturn ;
int CdAudio435DeviceControl_tracksOnCd ;
int CdAudio435DeviceControl_tracksInBuffer ;
int CdAudio435DeviceControl_SubQPtr ;
int CdAudio435DeviceControl_userPtr__Format ;
int CdAudio435DeviceControl_SubQPtr___0 ;
int CdAudio435DeviceControl_tmp___0 ;
int CdAudio435DeviceControl_tmp___1 ;
int CdAudio435DeviceControl_tmp___2 ;
int CdAudio435DeviceControl_CIL___Tmp35 ;
int CdAudio435DeviceControl_CIL___Tmp36 ;
int CdAudio435DeviceControl_CIL___Tmp37 ;
int CdAudio435DeviceControl_CIL___Tmp38 ;
int CdAudio435DeviceControl_CIL___Tmp39 ;
int CdAudio435DeviceControl_CIL___Tmp40 ;
int CdAudio435DeviceControl_CIL___Tmp41 ;
int CdAudio435DeviceControl_CIL___Tmp42 ;
int CdAudio435DeviceControl_CIL___Tmp43 ;
int CdAudio435DeviceControl_CIL___Tmp44 ;
int CdAudio435DeviceControl_CIL___Tmp45 ;
int CdAudio435DeviceControl_CIL___Tmp46 ;
int CdAudio435DeviceControl_CIL___Tmp47 ;
int CdAudio435DeviceControl_CIL___Tmp48 ;
int CdAudio435DeviceControl_CIL___Tmp49 ;
int CdAudio435DeviceControl_CIL___Tmp50 ;
int CdAudio435DeviceControl_CIL___Tmp51 ;
int CdAudio435DeviceControl_CIL___Tmp52 ;
int CdAudio435DeviceControl_CIL___Tmp53 ;
int CdAudio435DeviceControl_CIL___Tmp54 ;
int CdAudio435DeviceControl_CIL___Tmp55 ;
int CdAudio435DeviceControl_CIL___Tmp56 ;
int CdAudio435DeviceControl_CIL___Tmp57 ;
int CdAudio435DeviceControl_CIL___Tmp58 ;
int CdAudio435DeviceControl_CIL___Tmp59 ;
int CdAudio435DeviceControl_CIL___Tmp60 ;
int CdAudio435DeviceControl_CIL___Tmp61 ;
int CdAudio435DeviceControl_CIL___Tmp62 ;
int CdAudio435DeviceControl_CIL___Tmp63 ;
int CdAudio435DeviceControl_CIL___Tmp64 ;
int CdAudio435DeviceControl_CIL___Tmp65 ;
int CdAudio435DeviceControl_CIL___Tmp66 ;
int CdAudio435DeviceControl_CIL___Tmp67 ;
int CdAudio435DeviceControl_CIL___Tmp68 ;
int CdAudio435DeviceControl_CIL___Tmp69 ;
int CdAudio435DeviceControl_CIL___Tmp70 ;
int CdAudio435DeviceControl_CIL___Tmp71 ;
int CdAudio435DeviceControl_CIL___Tmp72 ;
int CdAudio435DeviceControl_CIL___Tmp73 ;
int CdAudio435DeviceControl_CIL___Tmp74 ;
int CdAudio435DeviceControl_CIL___Tmp75 ;
int CdAudio435DeviceControl_CIL___Tmp76 ;
int CdAudio435DeviceControl_CIL___Tmp77 ;
int CdAudio435DeviceControl_CIL___Tmp78 ;
int CdAudio435DeviceControl_CIL___Tmp79 ;
int CdAudio435DeviceControl_CIL___Tmp80 ;
int CdAudio435DeviceControl_CIL___Tmp81 ;
int CdAudio435DeviceControl_CIL___Tmp82 ;
int CdAudio435DeviceControl_CIL___Tmp83 ;
int CdAudio435DeviceControl_CIL___Tmp84 ;
int CdAudio435DeviceControl_CIL___Tmp85 ;
int CdAudio435DeviceControl_CIL___Tmp86 ;
int CdAudio435DeviceControl_CIL___Tmp87 ;
int CdAudio435DeviceControl_CIL___Tmp88 ;
int CdAudio435DeviceControl_CIL___Tmp89 ;
int CdAudio435DeviceControl_CIL___Tmp90 ;
int CdAudio435DeviceControl_CIL___Tmp91 ;
int CdAudio435DeviceControl_CIL___Tmp92 ;
int CdAudio435DeviceControl_CIL___Tmp93 ;
int CdAudio435DeviceControl_CIL___Tmp95 ;
int CdAudio435DeviceControl_CIL___Tmp96 ;
int CdAudio435DeviceControl_CIL___Tmp97 ;
int CdAudio435DeviceControl_CIL___Tmp98 ;
int CdAudio435DeviceControl_CIL___Tmp99 ;
int CdAudio435DeviceControl_CIL___Tmp100 ;
int CdAudio435DeviceControl_CIL___Tmp101 ;
int CdAudio435DeviceControl_CIL___Tmp102 ;
int CdAudio435DeviceControl_CIL___Tmp103 ;
int CdAudio435DeviceControl_CIL___Tmp104 ;
int CdAudio435DeviceControl_CIL___Tmp105 ;
int CdAudio435DeviceControl_CIL___Tmp106 ;
int CdAudio435DeviceControl_CIL___Tmp107 ;
int CdAudio435DeviceControl_CIL___Tmp109 ;
int CdAudio435DeviceControl_CIL___Tmp111 ;
int CdAudio435DeviceControl_CIL___Tmp112 ;
int CdAudio435DeviceControl_CIL___Tmp113 ;
int CdAudio435DeviceControl_CIL___Tmp114 ;
int CdAudio435DeviceControl_CIL___Tmp115 ;
int CdAudio435DeviceControl_CIL___Tmp116 ;
int CdAudio435DeviceControl_retres114 ;
int CdAudio435DeviceControl_TRACER_returning ;
						int CdAudio435DeviceControl_DeviceObject ; int CdAudio435DeviceControl_Irp ;
						CdAudio435DeviceControl_DeviceObject = CdAudioDeviceControl_DeviceObject;
						CdAudio435DeviceControl_Irp = CdAudioDeviceControl_Irp;
						CdAudio435DeviceControl_TRACER_returning = 0;
						CdAudio435DeviceControl_CIL___Tmp35 = 16384;
						CdAudio435DeviceControl_CIL___Tmp36 = 131072;
						CdAudio435DeviceControl_CIL___Tmp37 = 147456;
						if(CdAudio435DeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode >= CdAudio435DeviceControl_CIL___Tmp37 && CdAudio435DeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode <= CdAudio435DeviceControl_CIL___Tmp37) {
							if(CdAudio435DeviceControl_currentIrpStack__Parameters__DeviceIoControl__OutputBufferLength < CdAudio435DeviceControl_TrackData__0) {
								CdAudio435DeviceControl_status = -1073741789;
								CdAudio435DeviceControl_Irp__IoStatus__Information = 0;
L255:;
								CdAudio435DeviceControl_CIL___Tmp116 = CdAudio435DeviceControl_status;
{
								int IofCompleteRequest_Irp ; int IofCompleteRequest_PriorityBoost ;
								IofCompleteRequest_Irp = CdAudio435DeviceControl_Irp;
								IofCompleteRequest_PriorityBoost = 0;
								safety = safety + (s - NP);
								s = DC;
								;
								TRACER_RV = nondet();
								CdAudio435DeviceControl_retres114 = CdAudio435DeviceControl_status;
								TRACER_RV = (CdAudio435DeviceControl_retres114);
								CdAudioDeviceControl_status = TRACER_RV;
								TRACER_RV = nondet();
								goto L196;
}
							}
							else {
{
 int CdAudioIsPlayActive_deviceExtension__PlayActive ;
int CdAudioIsPlayActive_ioStatus__Status ;
int CdAudioIsPlayActive_currentBuffer__Header__AudioStatus ;
int CdAudioIsPlayActive_irp_CdAudioIsPlayActive ;
int CdAudioIsPlayActive_event ;
int CdAudioIsPlayActive_status ;
int CdAudioIsPlayActive_currentBuffer ;
int CdAudioIsPlayActive_returnValue ;
int CdAudioIsPlayActive_CIL___Tmp10 ;
int CdAudioIsPlayActive_retres11 ;
								int CdAudioIsPlayActive_DeviceObject ;
								CdAudioIsPlayActive_DeviceObject = CdAudio435DeviceControl_DeviceObject;
								if(CdAudioIsPlayActive_deviceExtension__PlayActive >= 0 && CdAudioIsPlayActive_deviceExtension__PlayActive <= 0) {
									CdAudioIsPlayActive_retres11 = 0;
L256:;
									TRACER_RV = (CdAudioIsPlayActive_retres11);
									CdAudio435DeviceControl_tmp = TRACER_RV;
									TRACER_RV = nondet();
									if(CdAudio435DeviceControl_Toc >= 0 && CdAudio435DeviceControl_Toc <= 0) {
										CdAudio435DeviceControl_status = -1073741670;
										CdAudio435DeviceControl_Irp__IoStatus__Information = 0;
										CdAudio435DeviceControl_CIL___Tmp93 = CdAudio435DeviceControl_status;
{
										int IofCompleteRequest_Irp ; int IofCompleteRequest_PriorityBoost ;
										IofCompleteRequest_Irp = CdAudio435DeviceControl_Irp;
										IofCompleteRequest_PriorityBoost = 0;
										safety = safety + (s - NP);
										s = DC;
										;
										TRACER_RV = nondet();
										CdAudio435DeviceControl_retres114 = CdAudio435DeviceControl_status;
										CdAudio435DeviceControl_TRACER_returning = 1;
L257:;
L258:;
L259:;
										TRACER_RV = (CdAudio435DeviceControl_retres114);
										CdAudioDeviceControl_status = TRACER_RV;
										TRACER_RV = nondet();
										goto L198;
}
									}
									else if(CdAudio435DeviceControl_Toc < 0) {
{
 int SendSrbSynchronous_ioStatus__Status ;
int SendSrbSynchronous_ioctl ;
int SendSrbSynchronous_event ;
int SendSrbSynchronous_irp ;
int SendSrbSynchronous_status ;
int SendSrbSynchronous_CIL___Tmp10 ;
int SendSrbSynchronous_CIL___Tmp11 ;
int SendSrbSynchronous_CIL___Tmp12 ;
int SendSrbSynchronous_CIL___Tmp13 ;
int SendSrbSynchronous_CIL___Tmp14 ;
int SendSrbSynchronous_CIL___Tmp15 ;
int SendSrbSynchronous_CIL___Tmp16 ;
int SendSrbSynchronous_CIL___Tmp17 ;
int SendSrbSynchronous_CIL___Tmp18 ;
int SendSrbSynchronous_retres19 ;
										int SendSrbSynchronous_Extension ; int SendSrbSynchronous_Srb ; int SendSrbSynchronous_Buffer ; int SendSrbSynchronous_BufferLength ;
										SendSrbSynchronous_Extension = CdAudio435DeviceControl_deviceExtension;
										SendSrbSynchronous_Srb = CdAudio435DeviceControl_srb;
										SendSrbSynchronous_Buffer = CdAudio435DeviceControl_Toc;
										SendSrbSynchronous_BufferLength = CdAudio435DeviceControl_sizeof__CDROM_TOC;
										SendSrbSynchronous_irp = 0;
										SendSrbSynchronous_retres19 = -1073741670;
										TRACER_RV = (SendSrbSynchronous_retres19);
										CdAudio435DeviceControl_status = TRACER_RV;
										TRACER_RV = nondet();
L260:;
										CdAudio435DeviceControl_CIL___Tmp95 = CdAudio435DeviceControl_status;
										CdAudio435DeviceControl_CIL___Tmp96 = CdAudio435DeviceControl_status;
{
										int IofCompleteRequest_Irp ; int IofCompleteRequest_PriorityBoost ;
										IofCompleteRequest_Irp = CdAudio435DeviceControl_Irp;
										IofCompleteRequest_PriorityBoost = 0;
										safety = safety + (s - NP);
										s = DC;
										;
										TRACER_RV = nondet();
										CdAudio435DeviceControl_retres114 = CdAudio435DeviceControl_status;
										CdAudio435DeviceControl_TRACER_returning = 1;
										goto L257;
}
}
									}
									else {
{
 int SendSrbSynchronous_ioStatus__Status ;
int SendSrbSynchronous_ioctl ;
int SendSrbSynchronous_event ;
int SendSrbSynchronous_irp ;
int SendSrbSynchronous_status ;
int SendSrbSynchronous_CIL___Tmp10 ;
int SendSrbSynchronous_CIL___Tmp11 ;
int SendSrbSynchronous_CIL___Tmp12 ;
int SendSrbSynchronous_CIL___Tmp13 ;
int SendSrbSynchronous_CIL___Tmp14 ;
int SendSrbSynchronous_CIL___Tmp15 ;
int SendSrbSynchronous_CIL___Tmp16 ;
int SendSrbSynchronous_CIL___Tmp17 ;
int SendSrbSynchronous_CIL___Tmp18 ;
int SendSrbSynchronous_retres19 ;
										int SendSrbSynchronous_Extension ; int SendSrbSynchronous_Srb ; int SendSrbSynchronous_Buffer ; int SendSrbSynchronous_BufferLength ;
										SendSrbSynchronous_Extension = CdAudio435DeviceControl_deviceExtension;
										SendSrbSynchronous_Srb = CdAudio435DeviceControl_srb;
										SendSrbSynchronous_Buffer = CdAudio435DeviceControl_Toc;
										SendSrbSynchronous_BufferLength = CdAudio435DeviceControl_sizeof__CDROM_TOC;
										SendSrbSynchronous_irp = 0;
										SendSrbSynchronous_retres19 = -1073741670;
										TRACER_RV = (SendSrbSynchronous_retres19);
										CdAudio435DeviceControl_status = TRACER_RV;
										TRACER_RV = nondet();
										goto L260;
}
									}
								}
								else if(CdAudioIsPlayActive_deviceExtension__PlayActive < 0) {
L261:;
									if(CdAudioIsPlayActive_currentBuffer >= 0 && CdAudioIsPlayActive_currentBuffer <= 0) {
										CdAudioIsPlayActive_retres11 = 0;
										goto L256;
									}
									else if(CdAudioIsPlayActive_currentBuffer < 0) {
L262:;
										if(CdAudioIsPlayActive_irp_CdAudioIsPlayActive >= 0 && CdAudioIsPlayActive_irp_CdAudioIsPlayActive <= 0) {
											CdAudioIsPlayActive_retres11 = 0;
											goto L256;
										}
										else if(CdAudioIsPlayActive_irp_CdAudioIsPlayActive < 0) {
L263:;
											CdAudioIsPlayActive_CIL___Tmp10 = CdAudioIsPlayActive_status;
											if(CdAudioIsPlayActive_CIL___Tmp10 >= 259 && CdAudioIsPlayActive_CIL___Tmp10 <= 259) {
{
 int KeWaitForSingleObject_tmp_ndt_7 ;
int KeWaitForSingleObject_retres7 ;
												int KeWaitForSingleObject_Object ; int KeWaitForSingleObject_WaitReason ; int KeWaitForSingleObject_WaitMode ; int KeWaitForSingleObject_Alertable ; int KeWaitForSingleObject_Timeout ;
												KeWaitForSingleObject_Object = CdAudioIsPlayActive_event;
												KeWaitForSingleObject_WaitReason = Suspended;
												KeWaitForSingleObject_WaitMode = KernelMode;
												KeWaitForSingleObject_Alertable = 0;
												KeWaitForSingleObject_Timeout = 0;
L264:;
												;
												TRACER_RV = nondet();
												CdAudioIsPlayActive_status = CdAudioIsPlayActive_ioStatus__Status;
L265:;
												if(CdAudioIsPlayActive_status < 0) {
													CdAudioIsPlayActive_retres11 = 0;
													goto L256;
												}
												else {
													if(CdAudioIsPlayActive_currentBuffer__Header__AudioStatus >= 17 && CdAudioIsPlayActive_currentBuffer__Header__AudioStatus <= 17) {
														CdAudioIsPlayActive_returnValue = 1;
														CdAudioIsPlayActive_retres11 = CdAudioIsPlayActive_returnValue;
														TRACER_RV = (CdAudioIsPlayActive_retres11);
														CdAudio435DeviceControl_tmp = TRACER_RV;
														TRACER_RV = nondet();
														CdAudio435DeviceControl_status = -2147483631;
														CdAudio435DeviceControl_Irp__IoStatus__Information = 0;
														CdAudio435DeviceControl_CIL___Tmp116 = CdAudio435DeviceControl_status;
{
														int IofCompleteRequest_Irp ; int IofCompleteRequest_PriorityBoost ;
														IofCompleteRequest_Irp = CdAudio435DeviceControl_Irp;
														IofCompleteRequest_PriorityBoost = 0;
														safety = safety + (s - NP);
														s = DC;
														;
														TRACER_RV = nondet();
														CdAudio435DeviceControl_retres114 = CdAudio435DeviceControl_status;
														TRACER_RV = (CdAudio435DeviceControl_retres114);
														CdAudioDeviceControl_status = TRACER_RV;
														TRACER_RV = nondet();
														goto L206;
}
													}
													else if(CdAudioIsPlayActive_currentBuffer__Header__AudioStatus < 17) {
L266:;
														CdAudioIsPlayActive_returnValue = 0;
														CdAudioIsPlayActive_deviceExtension__PlayActive = 0;
														CdAudioIsPlayActive_retres11 = CdAudioIsPlayActive_returnValue;
														goto L256;
													}
													else {
														goto L266;
													}
												}
}
											}
											else if(CdAudioIsPlayActive_CIL___Tmp10 < 259) {
												goto L265;
											}
											else {
												goto L265;
											}
										}
										else {
											goto L263;
										}
									}
									else {
										goto L262;
									}
								}
								else {
									goto L261;
								}
}
							}
						}
						else if(CdAudio435DeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode < CdAudio435DeviceControl_CIL___Tmp37) {
							CdAudio435DeviceControl_CIL___Tmp38 = 24;
							CdAudio435DeviceControl_CIL___Tmp39 = 16384;
							CdAudio435DeviceControl_CIL___Tmp40 = 131072;
							CdAudio435DeviceControl_CIL___Tmp41 = 147456;
							CdAudio435DeviceControl_CIL___Tmp42 = 147480;
							CdAudio435DeviceControl_CIL___Tmp43 = 8;
							CdAudio435DeviceControl_CIL___Tmp44 = 16384;
							CdAudio435DeviceControl_CIL___Tmp45 = 131072;
							CdAudio435DeviceControl_CIL___Tmp46 = 147456;
							CdAudio435DeviceControl_CIL___Tmp47 = 147464;
							CdAudio435DeviceControl_CIL___Tmp48 = 4;
							CdAudio435DeviceControl_CIL___Tmp49 = 16384;
							CdAudio435DeviceControl_CIL___Tmp50 = 131072;
							CdAudio435DeviceControl_CIL___Tmp51 = 147456;
							CdAudio435DeviceControl_CIL___Tmp52 = 147460;
							CdAudio435DeviceControl_CIL___Tmp53 = 12;
							CdAudio435DeviceControl_CIL___Tmp54 = 16384;
							CdAudio435DeviceControl_CIL___Tmp55 = 131072;
							CdAudio435DeviceControl_CIL___Tmp56 = 147456;
							CdAudio435DeviceControl_CIL___Tmp57 = 147468;
							CdAudio435DeviceControl_CIL___Tmp58 = 16;
							CdAudio435DeviceControl_CIL___Tmp59 = 16384;
							CdAudio435DeviceControl_CIL___Tmp60 = 131072;
							CdAudio435DeviceControl_CIL___Tmp61 = 147456;
							CdAudio435DeviceControl_CIL___Tmp62 = 147472;
							CdAudio435DeviceControl_CIL___Tmp63 = 44;
							CdAudio435DeviceControl_CIL___Tmp64 = 16384;
							CdAudio435DeviceControl_CIL___Tmp65 = 131072;
							CdAudio435DeviceControl_CIL___Tmp66 = 147456;
							CdAudio435DeviceControl_CIL___Tmp67 = 147500;
							CdAudio435DeviceControl_CIL___Tmp68 = 2056;
							CdAudio435DeviceControl_CIL___Tmp69 = 16384;
							CdAudio435DeviceControl_CIL___Tmp70 = 131072;
							CdAudio435DeviceControl_CIL___Tmp71 = 147456;
							CdAudio435DeviceControl_CIL___Tmp72 = 149512;
							CdAudio435DeviceControl_CIL___Tmp73 = 52;
							CdAudio435DeviceControl_CIL___Tmp74 = 16384;
							CdAudio435DeviceControl_CIL___Tmp75 = 131072;
							CdAudio435DeviceControl_CIL___Tmp76 = 147456;
							CdAudio435DeviceControl_CIL___Tmp77 = 147508;
							CdAudio435DeviceControl_CIL___Tmp78 = 20;
							CdAudio435DeviceControl_CIL___Tmp79 = 16384;
							CdAudio435DeviceControl_CIL___Tmp80 = 131072;
							CdAudio435DeviceControl_CIL___Tmp81 = 147456;
							CdAudio435DeviceControl_CIL___Tmp82 = 147476;
							CdAudio435DeviceControl_CIL___Tmp83 = 40;
							CdAudio435DeviceControl_CIL___Tmp84 = 16384;
							CdAudio435DeviceControl_CIL___Tmp85 = 131072;
							CdAudio435DeviceControl_CIL___Tmp86 = 147456;
							CdAudio435DeviceControl_CIL___Tmp87 = 147496;
							CdAudio435DeviceControl_CIL___Tmp88 = 2048;
							CdAudio435DeviceControl_CIL___Tmp89 = 16384;
							CdAudio435DeviceControl_CIL___Tmp90 = 131072;
							CdAudio435DeviceControl_CIL___Tmp91 = 147456;
							CdAudio435DeviceControl_CIL___Tmp92 = 149504;
L267:;
{
 int CdAudioSendToNextDriver_Irp__CurrentLocation ;
int CdAudioSendToNextDriver_Irp__Tail__Overlay__CurrentStackLocation ;
int CdAudioSendToNextDriver_deviceExtension__TargetDeviceObject ;
int CdAudioSendToNextDriver_tmp ;
							int CdAudioSendToNextDriver_DeviceObject ; int CdAudioSendToNextDriver_Irp ;
							CdAudioSendToNextDriver_DeviceObject = CdAudio435DeviceControl_DeviceObject;
							CdAudioSendToNextDriver_Irp = CdAudio435DeviceControl_Irp;
							safety = safety + (s - NP);
							s = SKIP1;
							CdAudioSendToNextDriver_Irp__CurrentLocation = CdAudioSendToNextDriver_Irp__CurrentLocation + 1;
							CdAudioSendToNextDriver_Irp__Tail__Overlay__CurrentStackLocation = CdAudioSendToNextDriver_Irp__Tail__Overlay__CurrentStackLocation + 1;
{
 int IofCallDriver_Irp__PendingReturned ;
int IofCallDriver_returnVal2 ;
int IofCallDriver_compRetStatus ;
int IofCallDriver_lcontext ;
int IofCallDriver_CIL___Tmp8 ;
int IofCallDriver_tmp_ndt_5 ;
int IofCallDriver_tmp_ndt_6 ;
							int IofCallDriver_DeviceObject ; int IofCallDriver_Irp ;
							IofCallDriver_DeviceObject = CdAudioSendToNextDriver_deviceExtension__TargetDeviceObject;
							IofCallDriver_Irp = CdAudioSendToNextDriver_Irp;
							if(IofCallDriver_Irp__PendingReturned > 0) {
L268:;
								IofCallDriver_returnVal2 = 259;
L269:;
								safety = safety + (s - SKIP1);
								s = SKIP2;
								lowerDriverReturn = IofCallDriver_returnVal2;
								TRACER_RV = (IofCallDriver_returnVal2);
								CdAudioSendToNextDriver_tmp = TRACER_RV;
								TRACER_RV = nondet();
								TRACER_RV = (CdAudioSendToNextDriver_tmp);
								CdAudio435DeviceControl_tmp___2 = TRACER_RV;
								TRACER_RV = nondet();
								CdAudio435DeviceControl_retres114 = CdAudio435DeviceControl_tmp___2;
								CdAudio435DeviceControl_TRACER_returning = 1;
								TRACER_RV = (CdAudio435DeviceControl_retres114);
								CdAudioDeviceControl_status = TRACER_RV;
								TRACER_RV = nondet();
L270:;
								goto L221;
							}
							else if(IofCallDriver_Irp__PendingReturned < 0) {
								goto L268;
							}
							else {
								IofCallDriver_tmp_ndt_5 = __VERIFIER_nondet_int();
								if(IofCallDriver_tmp_ndt_5 >= 0 && IofCallDriver_tmp_ndt_5 <= 0) {
									IofCallDriver_returnVal2 = 0;
									safety = safety + (s - SKIP1);
									s = SKIP2;
									lowerDriverReturn = IofCallDriver_returnVal2;
									TRACER_RV = (IofCallDriver_returnVal2);
									CdAudioSendToNextDriver_tmp = TRACER_RV;
									TRACER_RV = nondet();
									TRACER_RV = (CdAudioSendToNextDriver_tmp);
									CdAudio435DeviceControl_tmp___2 = TRACER_RV;
									TRACER_RV = nondet();
									CdAudio435DeviceControl_retres114 = CdAudio435DeviceControl_tmp___2;
									CdAudio435DeviceControl_TRACER_returning = 1;
									TRACER_RV = (CdAudio435DeviceControl_retres114);
									CdAudioDeviceControl_status = TRACER_RV;
									TRACER_RV = nondet();
L271:;
									goto L222;
								}
								else if(IofCallDriver_tmp_ndt_5 < 0) {
L272:;
									IofCallDriver_tmp_ndt_6 = __VERIFIER_nondet_int();
									if(IofCallDriver_tmp_ndt_6 >= 1 && IofCallDriver_tmp_ndt_6 <= 1) {
										IofCallDriver_returnVal2 = -1073741823;
										safety = safety + (s - SKIP1);
										s = SKIP2;
										lowerDriverReturn = IofCallDriver_returnVal2;
										TRACER_RV = (IofCallDriver_returnVal2);
										CdAudioSendToNextDriver_tmp = TRACER_RV;
										TRACER_RV = nondet();
										TRACER_RV = (CdAudioSendToNextDriver_tmp);
										CdAudio435DeviceControl_tmp___2 = TRACER_RV;
										TRACER_RV = nondet();
										CdAudio435DeviceControl_retres114 = CdAudio435DeviceControl_tmp___2;
										CdAudio435DeviceControl_TRACER_returning = 1;
										TRACER_RV = (CdAudio435DeviceControl_retres114);
										CdAudioDeviceControl_status = TRACER_RV;
										TRACER_RV = nondet();
L273:;
										goto L224;
									}
									else if(IofCallDriver_tmp_ndt_6 < 1) {
L274:;
										IofCallDriver_returnVal2 = 259;
										goto L269;
									}
									else {
										goto L274;
									}
								}
								else {
									goto L272;
								}
							}
}
}
						}
						else {
							CdAudio435DeviceControl_CIL___Tmp38 = 24;
							CdAudio435DeviceControl_CIL___Tmp39 = 16384;
							CdAudio435DeviceControl_CIL___Tmp40 = 131072;
							CdAudio435DeviceControl_CIL___Tmp41 = 147456;
							CdAudio435DeviceControl_CIL___Tmp42 = 147480;
							if(CdAudio435DeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode >= CdAudio435DeviceControl_CIL___Tmp42 && CdAudio435DeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode <= CdAudio435DeviceControl_CIL___Tmp42) {
{
 int SendSrbSynchronous_ioStatus__Status ;
int SendSrbSynchronous_ioctl ;
int SendSrbSynchronous_event ;
int SendSrbSynchronous_irp ;
int SendSrbSynchronous_status ;
int SendSrbSynchronous_CIL___Tmp10 ;
int SendSrbSynchronous_CIL___Tmp11 ;
int SendSrbSynchronous_CIL___Tmp12 ;
int SendSrbSynchronous_CIL___Tmp13 ;
int SendSrbSynchronous_CIL___Tmp14 ;
int SendSrbSynchronous_CIL___Tmp15 ;
int SendSrbSynchronous_CIL___Tmp16 ;
int SendSrbSynchronous_CIL___Tmp17 ;
int SendSrbSynchronous_CIL___Tmp18 ;
int SendSrbSynchronous_retres19 ;
								int SendSrbSynchronous_Extension ; int SendSrbSynchronous_Srb ; int SendSrbSynchronous_Buffer ; int SendSrbSynchronous_BufferLength ;
								SendSrbSynchronous_Extension = CdAudio435DeviceControl_deviceExtension;
								SendSrbSynchronous_Srb = CdAudio435DeviceControl_srb;
								SendSrbSynchronous_Buffer = 0;
								SendSrbSynchronous_BufferLength = 0;
								SendSrbSynchronous_irp = 0;
								CdAudio435DeviceControl_status = TRACER_RV;
								TRACER_RV = nondet();
								CdAudio435DeviceControl_CIL___Tmp99 = 8;
								CdAudio435DeviceControl_CIL___Tmp100 = 16384;
								CdAudio435DeviceControl_CIL___Tmp101 = 131072;
								CdAudio435DeviceControl_CIL___Tmp102 = 147456;
								CdAudio435DeviceControl_CIL___Tmp103 = 147464;
								if(CdAudio435DeviceControl_currentIrpStack__Parameters__DeviceIoControl__InputBufferLength < CdAudio435DeviceControl_sizeof__CDROM_PLAY_AUDIO_MSF) {
									CdAudio435DeviceControl_status = -1073741820;
L275:;
									CdAudio435DeviceControl_CIL___Tmp116 = CdAudio435DeviceControl_status;
{
									int IofCompleteRequest_Irp ; int IofCompleteRequest_PriorityBoost ;
									IofCompleteRequest_Irp = CdAudio435DeviceControl_Irp;
									IofCompleteRequest_PriorityBoost = 0;
									safety = safety + (s - NP);
									s = DC;
									;
									TRACER_RV = nondet();
									CdAudio435DeviceControl_retres114 = CdAudio435DeviceControl_status;
									TRACER_RV = (CdAudio435DeviceControl_retres114);
									CdAudioDeviceControl_status = TRACER_RV;
									TRACER_RV = nondet();
									goto L230;
}
								}
								else {
{
 int SendSrbSynchronous_ioStatus__Status ;
int SendSrbSynchronous_ioctl ;
int SendSrbSynchronous_event ;
int SendSrbSynchronous_irp ;
int SendSrbSynchronous_status ;
int SendSrbSynchronous_CIL___Tmp10 ;
int SendSrbSynchronous_CIL___Tmp11 ;
int SendSrbSynchronous_CIL___Tmp12 ;
int SendSrbSynchronous_CIL___Tmp13 ;
int SendSrbSynchronous_CIL___Tmp14 ;
int SendSrbSynchronous_CIL___Tmp15 ;
int SendSrbSynchronous_CIL___Tmp16 ;
int SendSrbSynchronous_CIL___Tmp17 ;
int SendSrbSynchronous_CIL___Tmp18 ;
int SendSrbSynchronous_retres19 ;
									int SendSrbSynchronous_Extension ; int SendSrbSynchronous_Srb ; int SendSrbSynchronous_Buffer ; int SendSrbSynchronous_BufferLength ;
									SendSrbSynchronous_Extension = CdAudio435DeviceControl_deviceExtension;
									SendSrbSynchronous_Srb = CdAudio435DeviceControl_srb;
									SendSrbSynchronous_Buffer = 0;
									SendSrbSynchronous_BufferLength = 0;
									SendSrbSynchronous_irp = 0;
									SendSrbSynchronous_retres19 = -1073741670;
									TRACER_RV = (SendSrbSynchronous_retres19);
									CdAudio435DeviceControl_status = TRACER_RV;
									TRACER_RV = nondet();
L276:;
									CdAudio435DeviceControl_CIL___Tmp116 = CdAudio435DeviceControl_status;
{
									int IofCompleteRequest_Irp ; int IofCompleteRequest_PriorityBoost ;
									IofCompleteRequest_Irp = CdAudio435DeviceControl_Irp;
									IofCompleteRequest_PriorityBoost = 0;
									safety = safety + (s - NP);
									s = DC;
									;
									TRACER_RV = nondet();
									CdAudio435DeviceControl_retres114 = CdAudio435DeviceControl_status;
									goto L259;
}
}
								}
}
							}
							else if(CdAudio435DeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode < CdAudio435DeviceControl_CIL___Tmp42) {
								CdAudio435DeviceControl_CIL___Tmp43 = 8;
								CdAudio435DeviceControl_CIL___Tmp44 = 16384;
								CdAudio435DeviceControl_CIL___Tmp45 = 131072;
								CdAudio435DeviceControl_CIL___Tmp46 = 147456;
								CdAudio435DeviceControl_CIL___Tmp47 = 147464;
								if(CdAudio435DeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode >= CdAudio435DeviceControl_CIL___Tmp47 && CdAudio435DeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode <= CdAudio435DeviceControl_CIL___Tmp47) {
{
 int SendSrbSynchronous_ioStatus__Status ;
int SendSrbSynchronous_ioctl ;
int SendSrbSynchronous_event ;
int SendSrbSynchronous_irp ;
int SendSrbSynchronous_status ;
int SendSrbSynchronous_CIL___Tmp10 ;
int SendSrbSynchronous_CIL___Tmp11 ;
int SendSrbSynchronous_CIL___Tmp12 ;
int SendSrbSynchronous_CIL___Tmp13 ;
int SendSrbSynchronous_CIL___Tmp14 ;
int SendSrbSynchronous_CIL___Tmp15 ;
int SendSrbSynchronous_CIL___Tmp16 ;
int SendSrbSynchronous_CIL___Tmp17 ;
int SendSrbSynchronous_CIL___Tmp18 ;
int SendSrbSynchronous_retres19 ;
									int SendSrbSynchronous_Extension ; int SendSrbSynchronous_Srb ; int SendSrbSynchronous_Buffer ; int SendSrbSynchronous_BufferLength ;
									SendSrbSynchronous_Extension = CdAudio435DeviceControl_deviceExtension;
									SendSrbSynchronous_Srb = CdAudio435DeviceControl_srb;
									SendSrbSynchronous_Buffer = 0;
									SendSrbSynchronous_BufferLength = 0;
									SendSrbSynchronous_irp = 0;
									SendSrbSynchronous_retres19 = -1073741670;
									TRACER_RV = (SendSrbSynchronous_retres19);
									CdAudio435DeviceControl_status = TRACER_RV;
									TRACER_RV = nondet();
									CdAudio435DeviceControl_CIL___Tmp99 = 8;
									CdAudio435DeviceControl_CIL___Tmp100 = 16384;
									CdAudio435DeviceControl_CIL___Tmp101 = 131072;
									CdAudio435DeviceControl_CIL___Tmp102 = 147456;
									CdAudio435DeviceControl_CIL___Tmp103 = 147464;
{
									int IofCompleteRequest_Irp ; int IofCompleteRequest_PriorityBoost ;
									IofCompleteRequest_Irp = CdAudio435DeviceControl_Irp;
									IofCompleteRequest_PriorityBoost = 0;
									safety = safety + (s - NP);
									s = DC;
									;
									TRACER_RV = nondet();
									CdAudio435DeviceControl_retres114 = CdAudio435DeviceControl_status;
									CdAudio435DeviceControl_TRACER_returning = 1;
									goto L258;
}
}
								}
								else if(CdAudio435DeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode < CdAudio435DeviceControl_CIL___Tmp47) {
									CdAudio435DeviceControl_CIL___Tmp48 = 4;
									CdAudio435DeviceControl_CIL___Tmp49 = 16384;
									CdAudio435DeviceControl_CIL___Tmp50 = 131072;
									CdAudio435DeviceControl_CIL___Tmp51 = 147456;
									CdAudio435DeviceControl_CIL___Tmp52 = 147460;
									if(CdAudio435DeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode >= CdAudio435DeviceControl_CIL___Tmp52 && CdAudio435DeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode <= CdAudio435DeviceControl_CIL___Tmp52) {
										if(CdAudio435DeviceControl_currentIrpStack__Parameters__DeviceIoControl__InputBufferLength < CdAudio435DeviceControl_sizeof__CDROM_SEEK_AUDIO_MSF) {
											CdAudio435DeviceControl_status = -1073741820;
											goto L275;
										}
										else {
{
 int SendSrbSynchronous_ioStatus__Status ;
int SendSrbSynchronous_ioctl ;
int SendSrbSynchronous_event ;
int SendSrbSynchronous_irp ;
int SendSrbSynchronous_status ;
int SendSrbSynchronous_CIL___Tmp10 ;
int SendSrbSynchronous_CIL___Tmp11 ;
int SendSrbSynchronous_CIL___Tmp12 ;
int SendSrbSynchronous_CIL___Tmp13 ;
int SendSrbSynchronous_CIL___Tmp14 ;
int SendSrbSynchronous_CIL___Tmp15 ;
int SendSrbSynchronous_CIL___Tmp16 ;
int SendSrbSynchronous_CIL___Tmp17 ;
int SendSrbSynchronous_CIL___Tmp18 ;
int SendSrbSynchronous_retres19 ;
											int SendSrbSynchronous_Extension ; int SendSrbSynchronous_Srb ; int SendSrbSynchronous_Buffer ; int SendSrbSynchronous_BufferLength ;
											SendSrbSynchronous_Extension = CdAudio435DeviceControl_deviceExtension;
											SendSrbSynchronous_Srb = CdAudio435DeviceControl_srb;
											SendSrbSynchronous_Buffer = 0;
											SendSrbSynchronous_BufferLength = 0;
											SendSrbSynchronous_irp = 0;
											SendSrbSynchronous_retres19 = -1073741670;
											TRACER_RV = (SendSrbSynchronous_retres19);
											CdAudio435DeviceControl_status = TRACER_RV;
											TRACER_RV = nondet();
											goto L276;
}
										}
									}
									else if(CdAudio435DeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode < CdAudio435DeviceControl_CIL___Tmp52) {
L277:;
										CdAudio435DeviceControl_CIL___Tmp53 = 12;
										CdAudio435DeviceControl_CIL___Tmp54 = 16384;
										CdAudio435DeviceControl_CIL___Tmp55 = 131072;
										CdAudio435DeviceControl_CIL___Tmp56 = 147456;
										CdAudio435DeviceControl_CIL___Tmp57 = 147468;
										CdAudio435DeviceControl_CIL___Tmp58 = 16;
										CdAudio435DeviceControl_CIL___Tmp59 = 16384;
										CdAudio435DeviceControl_CIL___Tmp60 = 131072;
										CdAudio435DeviceControl_CIL___Tmp61 = 147456;
										CdAudio435DeviceControl_CIL___Tmp62 = 147472;
										CdAudio435DeviceControl_CIL___Tmp63 = 44;
										CdAudio435DeviceControl_CIL___Tmp64 = 16384;
										CdAudio435DeviceControl_CIL___Tmp65 = 131072;
										CdAudio435DeviceControl_CIL___Tmp66 = 147456;
										CdAudio435DeviceControl_CIL___Tmp67 = 147500;
										CdAudio435DeviceControl_CIL___Tmp68 = 2056;
										CdAudio435DeviceControl_CIL___Tmp69 = 16384;
										CdAudio435DeviceControl_CIL___Tmp70 = 131072;
										CdAudio435DeviceControl_CIL___Tmp71 = 147456;
										CdAudio435DeviceControl_CIL___Tmp72 = 149512;
										CdAudio435DeviceControl_CIL___Tmp73 = 52;
										CdAudio435DeviceControl_CIL___Tmp74 = 16384;
										CdAudio435DeviceControl_CIL___Tmp75 = 131072;
										CdAudio435DeviceControl_CIL___Tmp76 = 147456;
										CdAudio435DeviceControl_CIL___Tmp77 = 147508;
										CdAudio435DeviceControl_CIL___Tmp78 = 20;
										CdAudio435DeviceControl_CIL___Tmp79 = 16384;
										CdAudio435DeviceControl_CIL___Tmp80 = 131072;
										CdAudio435DeviceControl_CIL___Tmp81 = 147456;
										CdAudio435DeviceControl_CIL___Tmp82 = 147476;
L278:;
										CdAudio435DeviceControl_CIL___Tmp83 = 40;
										CdAudio435DeviceControl_CIL___Tmp84 = 16384;
										CdAudio435DeviceControl_CIL___Tmp85 = 131072;
										CdAudio435DeviceControl_CIL___Tmp86 = 147456;
										CdAudio435DeviceControl_CIL___Tmp87 = 147496;
										CdAudio435DeviceControl_CIL___Tmp88 = 2048;
										CdAudio435DeviceControl_CIL___Tmp89 = 16384;
										CdAudio435DeviceControl_CIL___Tmp90 = 131072;
										CdAudio435DeviceControl_CIL___Tmp91 = 147456;
										CdAudio435DeviceControl_CIL___Tmp92 = 149504;
										goto L267;
									}
									else {
										goto L277;
									}
								}
								else {
									CdAudio435DeviceControl_CIL___Tmp48 = 4;
									CdAudio435DeviceControl_CIL___Tmp49 = 16384;
									CdAudio435DeviceControl_CIL___Tmp50 = 131072;
									CdAudio435DeviceControl_CIL___Tmp51 = 147456;
									CdAudio435DeviceControl_CIL___Tmp52 = 147460;
									CdAudio435DeviceControl_CIL___Tmp53 = 12;
									CdAudio435DeviceControl_CIL___Tmp54 = 16384;
									CdAudio435DeviceControl_CIL___Tmp55 = 131072;
									CdAudio435DeviceControl_CIL___Tmp56 = 147456;
									CdAudio435DeviceControl_CIL___Tmp57 = 147468;
									if(CdAudio435DeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode >= CdAudio435DeviceControl_CIL___Tmp57 && CdAudio435DeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode <= CdAudio435DeviceControl_CIL___Tmp57) {
										if(CdAudio435DeviceControl_SubQPtr >= 0 && CdAudio435DeviceControl_SubQPtr <= 0) {
											CdAudio435DeviceControl_status = -1073741670;
											CdAudio435DeviceControl_CIL___Tmp106 = CdAudio435DeviceControl_status;
{
											int IofCompleteRequest_Irp ; int IofCompleteRequest_PriorityBoost ;
											IofCompleteRequest_Irp = CdAudio435DeviceControl_Irp;
											IofCompleteRequest_PriorityBoost = 0;
											safety = safety + (s - NP);
											s = DC;
											;
											TRACER_RV = nondet();
											CdAudio435DeviceControl_retres114 = CdAudio435DeviceControl_status;
											CdAudio435DeviceControl_TRACER_returning = 1;
L279:;
											goto L258;
}
										}
										else if(CdAudio435DeviceControl_SubQPtr < 0) {
											if(CdAudio435DeviceControl_deviceExtension__Paused >= 1 && CdAudio435DeviceControl_deviceExtension__Paused <= 1) {
L280:;
												CdAudio435DeviceControl_status = 0;
												CdAudio435DeviceControl_CIL___Tmp107 = CdAudio435DeviceControl_status;
{
												int IofCompleteRequest_Irp ; int IofCompleteRequest_PriorityBoost ;
												IofCompleteRequest_Irp = CdAudio435DeviceControl_Irp;
												IofCompleteRequest_PriorityBoost = 0;
												safety = safety + (s - NP);
												s = DC;
												;
												TRACER_RV = nondet();
												CdAudio435DeviceControl_retres114 = CdAudio435DeviceControl_status;
												CdAudio435DeviceControl_TRACER_returning = 1;
L281:;
L282:;
												TRACER_RV = (CdAudio435DeviceControl_retres114);
												CdAudioDeviceControl_status = TRACER_RV;
												TRACER_RV = nondet();
												goto L236;
}
											}
											else if(CdAudio435DeviceControl_deviceExtension__Paused < 1) {
L283:;
{
 int SendSrbSynchronous_ioStatus__Status ;
int SendSrbSynchronous_ioctl ;
int SendSrbSynchronous_event ;
int SendSrbSynchronous_irp ;
int SendSrbSynchronous_status ;
int SendSrbSynchronous_CIL___Tmp10 ;
int SendSrbSynchronous_CIL___Tmp11 ;
int SendSrbSynchronous_CIL___Tmp12 ;
int SendSrbSynchronous_CIL___Tmp13 ;
int SendSrbSynchronous_CIL___Tmp14 ;
int SendSrbSynchronous_CIL___Tmp15 ;
int SendSrbSynchronous_CIL___Tmp16 ;
int SendSrbSynchronous_CIL___Tmp17 ;
int SendSrbSynchronous_CIL___Tmp18 ;
int SendSrbSynchronous_retres19 ;
												int SendSrbSynchronous_Extension ; int SendSrbSynchronous_Srb ; int SendSrbSynchronous_Buffer ; int SendSrbSynchronous_BufferLength ;
												SendSrbSynchronous_Extension = CdAudio435DeviceControl_deviceExtension;
												SendSrbSynchronous_Srb = CdAudio435DeviceControl_srb;
												SendSrbSynchronous_Buffer = CdAudio435DeviceControl_SubQPtr;
												SendSrbSynchronous_BufferLength = CdAudio435DeviceControl_sizeof__SUB_Q_CHANNEL_DATA;
												SendSrbSynchronous_irp = 0;
												SendSrbSynchronous_retres19 = -1073741670;
												TRACER_RV = (SendSrbSynchronous_retres19);
												CdAudio435DeviceControl_status = TRACER_RV;
												TRACER_RV = nondet();
L284:;
{
												int IofCompleteRequest_Irp ; int IofCompleteRequest_PriorityBoost ;
												IofCompleteRequest_Irp = CdAudio435DeviceControl_Irp;
												IofCompleteRequest_PriorityBoost = 0;
												safety = safety + (s - NP);
												s = DC;
												;
												TRACER_RV = nondet();
												CdAudio435DeviceControl_retres114 = CdAudio435DeviceControl_status;
												CdAudio435DeviceControl_TRACER_returning = 1;
												goto L279;
}
}
											}
											else {
												goto L283;
											}
										}
										else {
											if(CdAudio435DeviceControl_deviceExtension__Paused >= 1 && CdAudio435DeviceControl_deviceExtension__Paused <= 1) {
												goto L280;
											}
											else if(CdAudio435DeviceControl_deviceExtension__Paused < 1) {
L285:;
{
 int SendSrbSynchronous_ioStatus__Status ;
int SendSrbSynchronous_ioctl ;
int SendSrbSynchronous_event ;
int SendSrbSynchronous_irp ;
int SendSrbSynchronous_status ;
int SendSrbSynchronous_CIL___Tmp10 ;
int SendSrbSynchronous_CIL___Tmp11 ;
int SendSrbSynchronous_CIL___Tmp12 ;
int SendSrbSynchronous_CIL___Tmp13 ;
int SendSrbSynchronous_CIL___Tmp14 ;
int SendSrbSynchronous_CIL___Tmp15 ;
int SendSrbSynchronous_CIL___Tmp16 ;
int SendSrbSynchronous_CIL___Tmp17 ;
int SendSrbSynchronous_CIL___Tmp18 ;
int SendSrbSynchronous_retres19 ;
												int SendSrbSynchronous_Extension ; int SendSrbSynchronous_Srb ; int SendSrbSynchronous_Buffer ; int SendSrbSynchronous_BufferLength ;
												SendSrbSynchronous_Extension = CdAudio435DeviceControl_deviceExtension;
												SendSrbSynchronous_Srb = CdAudio435DeviceControl_srb;
												SendSrbSynchronous_Buffer = CdAudio435DeviceControl_SubQPtr;
												SendSrbSynchronous_BufferLength = CdAudio435DeviceControl_sizeof__SUB_Q_CHANNEL_DATA;
												SendSrbSynchronous_irp = 0;
												SendSrbSynchronous_retres19 = -1073741670;
												TRACER_RV = (SendSrbSynchronous_retres19);
												CdAudio435DeviceControl_status = TRACER_RV;
												TRACER_RV = nondet();
												goto L284;
}
											}
											else {
												goto L285;
											}
										}
									}
									else if(CdAudio435DeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode < CdAudio435DeviceControl_CIL___Tmp57) {
										CdAudio435DeviceControl_CIL___Tmp58 = 16;
										CdAudio435DeviceControl_CIL___Tmp59 = 16384;
										CdAudio435DeviceControl_CIL___Tmp60 = 131072;
										CdAudio435DeviceControl_CIL___Tmp61 = 147456;
										CdAudio435DeviceControl_CIL___Tmp62 = 147472;
										CdAudio435DeviceControl_CIL___Tmp63 = 44;
										CdAudio435DeviceControl_CIL___Tmp64 = 16384;
										CdAudio435DeviceControl_CIL___Tmp65 = 131072;
										CdAudio435DeviceControl_CIL___Tmp66 = 147456;
										CdAudio435DeviceControl_CIL___Tmp67 = 147500;
										CdAudio435DeviceControl_CIL___Tmp68 = 2056;
										CdAudio435DeviceControl_CIL___Tmp69 = 16384;
										CdAudio435DeviceControl_CIL___Tmp70 = 131072;
										CdAudio435DeviceControl_CIL___Tmp71 = 147456;
										CdAudio435DeviceControl_CIL___Tmp72 = 149512;
										CdAudio435DeviceControl_CIL___Tmp73 = 52;
										CdAudio435DeviceControl_CIL___Tmp74 = 16384;
										CdAudio435DeviceControl_CIL___Tmp75 = 131072;
										CdAudio435DeviceControl_CIL___Tmp76 = 147456;
										CdAudio435DeviceControl_CIL___Tmp77 = 147508;
										CdAudio435DeviceControl_CIL___Tmp78 = 20;
										CdAudio435DeviceControl_CIL___Tmp79 = 16384;
										CdAudio435DeviceControl_CIL___Tmp80 = 131072;
										CdAudio435DeviceControl_CIL___Tmp81 = 147456;
										CdAudio435DeviceControl_CIL___Tmp82 = 147476;
										goto L278;
									}
									else {
										CdAudio435DeviceControl_CIL___Tmp58 = 16;
										CdAudio435DeviceControl_CIL___Tmp59 = 16384;
										CdAudio435DeviceControl_CIL___Tmp60 = 131072;
										CdAudio435DeviceControl_CIL___Tmp61 = 147456;
										CdAudio435DeviceControl_CIL___Tmp62 = 147472;
										if(CdAudio435DeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode >= CdAudio435DeviceControl_CIL___Tmp62 && CdAudio435DeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode <= CdAudio435DeviceControl_CIL___Tmp62) {
											if(CdAudio435DeviceControl_deviceExtension__Paused >= 0 && CdAudio435DeviceControl_deviceExtension__Paused <= 0) {
												CdAudio435DeviceControl_status = -1073741823;
												CdAudio435DeviceControl_CIL___Tmp112 = CdAudio435DeviceControl_status;
{
												int IofCompleteRequest_Irp ; int IofCompleteRequest_PriorityBoost ;
												IofCompleteRequest_Irp = CdAudio435DeviceControl_Irp;
												IofCompleteRequest_PriorityBoost = 0;
												safety = safety + (s - NP);
												s = DC;
												;
												TRACER_RV = nondet();
												CdAudio435DeviceControl_retres114 = CdAudio435DeviceControl_status;
												CdAudio435DeviceControl_TRACER_returning = 1;
												goto L281;
}
											}
											else if(CdAudio435DeviceControl_deviceExtension__Paused < 0) {
L286:;
{
 int SendSrbSynchronous_ioStatus__Status ;
int SendSrbSynchronous_ioctl ;
int SendSrbSynchronous_event ;
int SendSrbSynchronous_irp ;
int SendSrbSynchronous_status ;
int SendSrbSynchronous_CIL___Tmp10 ;
int SendSrbSynchronous_CIL___Tmp11 ;
int SendSrbSynchronous_CIL___Tmp12 ;
int SendSrbSynchronous_CIL___Tmp13 ;
int SendSrbSynchronous_CIL___Tmp14 ;
int SendSrbSynchronous_CIL___Tmp15 ;
int SendSrbSynchronous_CIL___Tmp16 ;
int SendSrbSynchronous_CIL___Tmp17 ;
int SendSrbSynchronous_CIL___Tmp18 ;
int SendSrbSynchronous_retres19 ;
												int SendSrbSynchronous_Extension ; int SendSrbSynchronous_Srb ; int SendSrbSynchronous_Buffer ; int SendSrbSynchronous_BufferLength ;
												SendSrbSynchronous_Extension = CdAudio435DeviceControl_deviceExtension;
												SendSrbSynchronous_Srb = CdAudio435DeviceControl_srb;
												SendSrbSynchronous_Buffer = 0;
												SendSrbSynchronous_BufferLength = 0;
												SendSrbSynchronous_irp = 0;
												SendSrbSynchronous_retres19 = -1073741670;
												TRACER_RV = (SendSrbSynchronous_retres19);
												CdAudio435DeviceControl_status = TRACER_RV;
												TRACER_RV = nondet();
												goto L276;
}
											}
											else {
												goto L286;
											}
										}
										else if(CdAudio435DeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode < CdAudio435DeviceControl_CIL___Tmp62) {
											CdAudio435DeviceControl_CIL___Tmp63 = 44;
											CdAudio435DeviceControl_CIL___Tmp64 = 16384;
											CdAudio435DeviceControl_CIL___Tmp65 = 131072;
											CdAudio435DeviceControl_CIL___Tmp66 = 147456;
											CdAudio435DeviceControl_CIL___Tmp67 = 147500;
											CdAudio435DeviceControl_CIL___Tmp68 = 2056;
											CdAudio435DeviceControl_CIL___Tmp69 = 16384;
											CdAudio435DeviceControl_CIL___Tmp70 = 131072;
											CdAudio435DeviceControl_CIL___Tmp71 = 147456;
											CdAudio435DeviceControl_CIL___Tmp72 = 149512;
											CdAudio435DeviceControl_CIL___Tmp73 = 52;
											CdAudio435DeviceControl_CIL___Tmp74 = 16384;
											CdAudio435DeviceControl_CIL___Tmp75 = 131072;
											CdAudio435DeviceControl_CIL___Tmp76 = 147456;
											CdAudio435DeviceControl_CIL___Tmp77 = 147508;
											CdAudio435DeviceControl_CIL___Tmp78 = 20;
											CdAudio435DeviceControl_CIL___Tmp79 = 16384;
											CdAudio435DeviceControl_CIL___Tmp80 = 131072;
											CdAudio435DeviceControl_CIL___Tmp81 = 147456;
											CdAudio435DeviceControl_CIL___Tmp82 = 147476;
											goto L278;
										}
										else {
											CdAudio435DeviceControl_CIL___Tmp63 = 44;
											CdAudio435DeviceControl_CIL___Tmp64 = 16384;
											CdAudio435DeviceControl_CIL___Tmp65 = 131072;
											CdAudio435DeviceControl_CIL___Tmp66 = 147456;
											CdAudio435DeviceControl_CIL___Tmp67 = 147500;
											CdAudio435DeviceControl_CIL___Tmp68 = 2056;
											CdAudio435DeviceControl_CIL___Tmp69 = 16384;
											CdAudio435DeviceControl_CIL___Tmp70 = 131072;
											CdAudio435DeviceControl_CIL___Tmp71 = 147456;
											CdAudio435DeviceControl_CIL___Tmp72 = 149512;
											CdAudio435DeviceControl_CIL___Tmp73 = 52;
											CdAudio435DeviceControl_CIL___Tmp74 = 16384;
											CdAudio435DeviceControl_CIL___Tmp75 = 131072;
											CdAudio435DeviceControl_CIL___Tmp76 = 147456;
											CdAudio435DeviceControl_CIL___Tmp77 = 147508;
											CdAudio435DeviceControl_CIL___Tmp78 = 20;
											CdAudio435DeviceControl_CIL___Tmp79 = 16384;
											CdAudio435DeviceControl_CIL___Tmp80 = 131072;
											CdAudio435DeviceControl_CIL___Tmp81 = 147456;
											CdAudio435DeviceControl_CIL___Tmp82 = 147476;
											if(CdAudio435DeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode >= CdAudio435DeviceControl_CIL___Tmp82 && CdAudio435DeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode <= CdAudio435DeviceControl_CIL___Tmp82) {
												CdAudio435DeviceControl_Irp__IoStatus__Information = 0;
												CdAudio435DeviceControl_status = -1073741808;
L287:;
												CdAudio435DeviceControl_CIL___Tmp116 = CdAudio435DeviceControl_status;
{
												int IofCompleteRequest_Irp ; int IofCompleteRequest_PriorityBoost ;
												IofCompleteRequest_Irp = CdAudio435DeviceControl_Irp;
												IofCompleteRequest_PriorityBoost = 0;
												safety = safety + (s - NP);
												s = DC;
												;
												TRACER_RV = nondet();
												CdAudio435DeviceControl_retres114 = CdAudio435DeviceControl_status;
												goto L282;
}
											}
											else if(CdAudio435DeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode < CdAudio435DeviceControl_CIL___Tmp82) {
												goto L278;
											}
											else {
												goto L278;
											}
										}
									}
								}
							}
							else {
								CdAudio435DeviceControl_CIL___Tmp43 = 8;
								CdAudio435DeviceControl_CIL___Tmp44 = 16384;
								CdAudio435DeviceControl_CIL___Tmp45 = 131072;
								CdAudio435DeviceControl_CIL___Tmp46 = 147456;
								CdAudio435DeviceControl_CIL___Tmp47 = 147464;
								CdAudio435DeviceControl_CIL___Tmp48 = 4;
								CdAudio435DeviceControl_CIL___Tmp49 = 16384;
								CdAudio435DeviceControl_CIL___Tmp50 = 131072;
								CdAudio435DeviceControl_CIL___Tmp51 = 147456;
								CdAudio435DeviceControl_CIL___Tmp52 = 147460;
								CdAudio435DeviceControl_CIL___Tmp53 = 12;
								CdAudio435DeviceControl_CIL___Tmp54 = 16384;
								CdAudio435DeviceControl_CIL___Tmp55 = 131072;
								CdAudio435DeviceControl_CIL___Tmp56 = 147456;
								CdAudio435DeviceControl_CIL___Tmp57 = 147468;
								CdAudio435DeviceControl_CIL___Tmp58 = 16;
								CdAudio435DeviceControl_CIL___Tmp59 = 16384;
								CdAudio435DeviceControl_CIL___Tmp60 = 131072;
								CdAudio435DeviceControl_CIL___Tmp61 = 147456;
								CdAudio435DeviceControl_CIL___Tmp62 = 147472;
								CdAudio435DeviceControl_CIL___Tmp63 = 44;
								CdAudio435DeviceControl_CIL___Tmp64 = 16384;
								CdAudio435DeviceControl_CIL___Tmp65 = 131072;
								CdAudio435DeviceControl_CIL___Tmp66 = 147456;
								CdAudio435DeviceControl_CIL___Tmp67 = 147500;
								if(CdAudio435DeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode >= CdAudio435DeviceControl_CIL___Tmp67 && CdAudio435DeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode <= CdAudio435DeviceControl_CIL___Tmp67) {
									if(CdAudio435DeviceControl_currentIrpStack__Parameters__DeviceIoControl__OutputBufferLength < CdAudio435DeviceControl_sizeof__SUB_Q_CURRENT_POSITION) {
										CdAudio435DeviceControl_status = -1073741789;
										CdAudio435DeviceControl_Irp__IoStatus__Information = 0;
										goto L255;
									}
									else {
										if(CdAudio435DeviceControl_SubQPtr___0 >= 0 && CdAudio435DeviceControl_SubQPtr___0 <= 0) {
											CdAudio435DeviceControl_status = -1073741670;
											CdAudio435DeviceControl_Irp__IoStatus__Information = 0;
											CdAudio435DeviceControl_CIL___Tmp113 = CdAudio435DeviceControl_status;
{
											int IofCompleteRequest_Irp ; int IofCompleteRequest_PriorityBoost ;
											IofCompleteRequest_Irp = CdAudio435DeviceControl_Irp;
											IofCompleteRequest_PriorityBoost = 0;
											safety = safety + (s - NP);
											s = DC;
											;
											TRACER_RV = nondet();
											CdAudio435DeviceControl_retres114 = CdAudio435DeviceControl_status;
											CdAudio435DeviceControl_TRACER_returning = 1;
											goto L258;
}
										}
										else if(CdAudio435DeviceControl_SubQPtr___0 < 0) {
											if(CdAudio435DeviceControl_userPtr__Format > 1) {
L288:;
												CdAudio435DeviceControl_status = -1073741823;
												CdAudio435DeviceControl_Irp__IoStatus__Information = 0;
												CdAudio435DeviceControl_CIL___Tmp114 = CdAudio435DeviceControl_status;
{
												int IofCompleteRequest_Irp ; int IofCompleteRequest_PriorityBoost ;
												IofCompleteRequest_Irp = CdAudio435DeviceControl_Irp;
												IofCompleteRequest_PriorityBoost = 0;
												safety = safety + (s - NP);
												s = DC;
												;
												TRACER_RV = nondet();
												CdAudio435DeviceControl_retres114 = CdAudio435DeviceControl_status;
												CdAudio435DeviceControl_TRACER_returning = 1;
												goto L281;
}
											}
											else if(CdAudio435DeviceControl_userPtr__Format < 1) {
												goto L288;
											}
											else {
{
 int SendSrbSynchronous_ioStatus__Status ;
int SendSrbSynchronous_ioctl ;
int SendSrbSynchronous_event ;
int SendSrbSynchronous_irp ;
int SendSrbSynchronous_status ;
int SendSrbSynchronous_CIL___Tmp10 ;
int SendSrbSynchronous_CIL___Tmp11 ;
int SendSrbSynchronous_CIL___Tmp12 ;
int SendSrbSynchronous_CIL___Tmp13 ;
int SendSrbSynchronous_CIL___Tmp14 ;
int SendSrbSynchronous_CIL___Tmp15 ;
int SendSrbSynchronous_CIL___Tmp16 ;
int SendSrbSynchronous_CIL___Tmp17 ;
int SendSrbSynchronous_CIL___Tmp18 ;
int SendSrbSynchronous_retres19 ;
												int SendSrbSynchronous_Extension ; int SendSrbSynchronous_Srb ; int SendSrbSynchronous_Buffer ; int SendSrbSynchronous_BufferLength ;
												SendSrbSynchronous_Extension = CdAudio435DeviceControl_deviceExtension;
												SendSrbSynchronous_Srb = CdAudio435DeviceControl_srb;
												SendSrbSynchronous_Buffer = CdAudio435DeviceControl_SubQPtr___0;
												SendSrbSynchronous_BufferLength = CdAudio435DeviceControl_sizeof__SUB_Q_CHANNEL_DATA;
												SendSrbSynchronous_irp = 0;
												SendSrbSynchronous_retres19 = -1073741670;
												TRACER_RV = (SendSrbSynchronous_retres19);
												CdAudio435DeviceControl_status = TRACER_RV;
												TRACER_RV = nondet();
L289:;
												goto L276;
}
											}
										}
										else {
											if(CdAudio435DeviceControl_userPtr__Format > 1) {
												goto L288;
											}
											else if(CdAudio435DeviceControl_userPtr__Format < 1) {
												goto L288;
											}
											else {
{
 int SendSrbSynchronous_ioStatus__Status ;
int SendSrbSynchronous_ioctl ;
int SendSrbSynchronous_event ;
int SendSrbSynchronous_irp ;
int SendSrbSynchronous_status ;
int SendSrbSynchronous_CIL___Tmp10 ;
int SendSrbSynchronous_CIL___Tmp11 ;
int SendSrbSynchronous_CIL___Tmp12 ;
int SendSrbSynchronous_CIL___Tmp13 ;
int SendSrbSynchronous_CIL___Tmp14 ;
int SendSrbSynchronous_CIL___Tmp15 ;
int SendSrbSynchronous_CIL___Tmp16 ;
int SendSrbSynchronous_CIL___Tmp17 ;
int SendSrbSynchronous_CIL___Tmp18 ;
int SendSrbSynchronous_retres19 ;
												int SendSrbSynchronous_Extension ; int SendSrbSynchronous_Srb ; int SendSrbSynchronous_Buffer ; int SendSrbSynchronous_BufferLength ;
												SendSrbSynchronous_Extension = CdAudio435DeviceControl_deviceExtension;
												SendSrbSynchronous_Srb = CdAudio435DeviceControl_srb;
												SendSrbSynchronous_Buffer = CdAudio435DeviceControl_SubQPtr___0;
												SendSrbSynchronous_BufferLength = CdAudio435DeviceControl_sizeof__SUB_Q_CHANNEL_DATA;
												SendSrbSynchronous_irp = 0;
												SendSrbSynchronous_retres19 = -1073741670;
												TRACER_RV = (SendSrbSynchronous_retres19);
												CdAudio435DeviceControl_status = TRACER_RV;
												TRACER_RV = nondet();
												goto L289;
}
											}
										}
									}
								}
								else if(CdAudio435DeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode < CdAudio435DeviceControl_CIL___Tmp67) {
									CdAudio435DeviceControl_CIL___Tmp68 = 2056;
									CdAudio435DeviceControl_CIL___Tmp69 = 16384;
									CdAudio435DeviceControl_CIL___Tmp70 = 131072;
									CdAudio435DeviceControl_CIL___Tmp71 = 147456;
									CdAudio435DeviceControl_CIL___Tmp72 = 149512;
									CdAudio435DeviceControl_CIL___Tmp73 = 52;
									CdAudio435DeviceControl_CIL___Tmp74 = 16384;
									CdAudio435DeviceControl_CIL___Tmp75 = 131072;
									CdAudio435DeviceControl_CIL___Tmp76 = 147456;
									CdAudio435DeviceControl_CIL___Tmp77 = 147508;
									CdAudio435DeviceControl_CIL___Tmp78 = 20;
									CdAudio435DeviceControl_CIL___Tmp79 = 16384;
									CdAudio435DeviceControl_CIL___Tmp80 = 131072;
									CdAudio435DeviceControl_CIL___Tmp81 = 147456;
									CdAudio435DeviceControl_CIL___Tmp82 = 147476;
									CdAudio435DeviceControl_CIL___Tmp83 = 40;
									CdAudio435DeviceControl_CIL___Tmp84 = 16384;
									CdAudio435DeviceControl_CIL___Tmp85 = 131072;
									CdAudio435DeviceControl_CIL___Tmp86 = 147456;
									CdAudio435DeviceControl_CIL___Tmp87 = 147496;
									if(CdAudio435DeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode >= CdAudio435DeviceControl_CIL___Tmp87 && CdAudio435DeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode <= CdAudio435DeviceControl_CIL___Tmp87) {
										CdAudio435DeviceControl_Irp__IoStatus__Information = 0;
										CdAudio435DeviceControl_status = -1073741808;
										goto L287;
									}
									else if(CdAudio435DeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode < CdAudio435DeviceControl_CIL___Tmp87) {
L290:;
										CdAudio435DeviceControl_CIL___Tmp88 = 2048;
										CdAudio435DeviceControl_CIL___Tmp89 = 16384;
										CdAudio435DeviceControl_CIL___Tmp90 = 131072;
										CdAudio435DeviceControl_CIL___Tmp91 = 147456;
										CdAudio435DeviceControl_CIL___Tmp92 = 149504;
										goto L267;
									}
									else {
										goto L290;
									}
								}
								else {
									CdAudio435DeviceControl_CIL___Tmp68 = 2056;
									CdAudio435DeviceControl_CIL___Tmp69 = 16384;
									CdAudio435DeviceControl_CIL___Tmp70 = 131072;
									CdAudio435DeviceControl_CIL___Tmp71 = 147456;
									CdAudio435DeviceControl_CIL___Tmp72 = 149512;
									if(CdAudio435DeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode >= CdAudio435DeviceControl_CIL___Tmp72 && CdAudio435DeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode <= CdAudio435DeviceControl_CIL___Tmp72) {
{
 int SendSrbSynchronous_ioStatus__Status ;
int SendSrbSynchronous_ioctl ;
int SendSrbSynchronous_event ;
int SendSrbSynchronous_irp ;
int SendSrbSynchronous_status ;
int SendSrbSynchronous_CIL___Tmp10 ;
int SendSrbSynchronous_CIL___Tmp11 ;
int SendSrbSynchronous_CIL___Tmp12 ;
int SendSrbSynchronous_CIL___Tmp13 ;
int SendSrbSynchronous_CIL___Tmp14 ;
int SendSrbSynchronous_CIL___Tmp15 ;
int SendSrbSynchronous_CIL___Tmp16 ;
int SendSrbSynchronous_CIL___Tmp17 ;
int SendSrbSynchronous_CIL___Tmp18 ;
int SendSrbSynchronous_retres19 ;
										int SendSrbSynchronous_Extension ; int SendSrbSynchronous_Srb ; int SendSrbSynchronous_Buffer ; int SendSrbSynchronous_BufferLength ;
										SendSrbSynchronous_Extension = CdAudio435DeviceControl_deviceExtension;
										SendSrbSynchronous_Srb = CdAudio435DeviceControl_srb;
										SendSrbSynchronous_Buffer = 0;
										SendSrbSynchronous_BufferLength = 0;
										SendSrbSynchronous_irp = 0;
										SendSrbSynchronous_retres19 = -1073741670;
										TRACER_RV = (SendSrbSynchronous_retres19);
										CdAudio435DeviceControl_status = TRACER_RV;
										TRACER_RV = nondet();
										goto L276;
}
									}
									else if(CdAudio435DeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode < CdAudio435DeviceControl_CIL___Tmp72) {
L291:;
										CdAudio435DeviceControl_CIL___Tmp73 = 52;
										CdAudio435DeviceControl_CIL___Tmp74 = 16384;
										CdAudio435DeviceControl_CIL___Tmp75 = 131072;
										CdAudio435DeviceControl_CIL___Tmp76 = 147456;
										CdAudio435DeviceControl_CIL___Tmp77 = 147508;
										if(CdAudio435DeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode >= CdAudio435DeviceControl_CIL___Tmp77 && CdAudio435DeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode <= CdAudio435DeviceControl_CIL___Tmp77) {
											CdAudio435DeviceControl_Irp__IoStatus__Information = 0;
											CdAudio435DeviceControl_status = -1073741808;
											goto L287;
										}
										else if(CdAudio435DeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode < CdAudio435DeviceControl_CIL___Tmp77) {
											CdAudio435DeviceControl_CIL___Tmp78 = 20;
											CdAudio435DeviceControl_CIL___Tmp79 = 16384;
											CdAudio435DeviceControl_CIL___Tmp80 = 131072;
											CdAudio435DeviceControl_CIL___Tmp81 = 147456;
											CdAudio435DeviceControl_CIL___Tmp82 = 147476;
											CdAudio435DeviceControl_CIL___Tmp83 = 40;
											CdAudio435DeviceControl_CIL___Tmp84 = 16384;
											CdAudio435DeviceControl_CIL___Tmp85 = 131072;
											CdAudio435DeviceControl_CIL___Tmp86 = 147456;
											CdAudio435DeviceControl_CIL___Tmp87 = 147496;
											CdAudio435DeviceControl_CIL___Tmp88 = 2048;
											CdAudio435DeviceControl_CIL___Tmp89 = 16384;
											CdAudio435DeviceControl_CIL___Tmp90 = 131072;
											CdAudio435DeviceControl_CIL___Tmp91 = 147456;
											CdAudio435DeviceControl_CIL___Tmp92 = 149504;
											goto L267;
										}
										else {
											CdAudio435DeviceControl_CIL___Tmp78 = 20;
											CdAudio435DeviceControl_CIL___Tmp79 = 16384;
											CdAudio435DeviceControl_CIL___Tmp80 = 131072;
											CdAudio435DeviceControl_CIL___Tmp81 = 147456;
											CdAudio435DeviceControl_CIL___Tmp82 = 147476;
											CdAudio435DeviceControl_CIL___Tmp83 = 40;
											CdAudio435DeviceControl_CIL___Tmp84 = 16384;
											CdAudio435DeviceControl_CIL___Tmp85 = 131072;
											CdAudio435DeviceControl_CIL___Tmp86 = 147456;
											CdAudio435DeviceControl_CIL___Tmp87 = 147496;
											CdAudio435DeviceControl_CIL___Tmp88 = 2048;
											CdAudio435DeviceControl_CIL___Tmp89 = 16384;
											CdAudio435DeviceControl_CIL___Tmp90 = 131072;
											CdAudio435DeviceControl_CIL___Tmp91 = 147456;
											CdAudio435DeviceControl_CIL___Tmp92 = 149504;
											if(CdAudio435DeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode >= CdAudio435DeviceControl_CIL___Tmp92 && CdAudio435DeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode <= CdAudio435DeviceControl_CIL___Tmp92) {
{
 int CdAudioIsPlayActive_deviceExtension__PlayActive ;
int CdAudioIsPlayActive_ioStatus__Status ;
int CdAudioIsPlayActive_currentBuffer__Header__AudioStatus ;
int CdAudioIsPlayActive_irp_CdAudioIsPlayActive ;
int CdAudioIsPlayActive_event ;
int CdAudioIsPlayActive_status ;
int CdAudioIsPlayActive_currentBuffer ;
int CdAudioIsPlayActive_returnValue ;
int CdAudioIsPlayActive_CIL___Tmp10 ;
int CdAudioIsPlayActive_retres11 ;
												int CdAudioIsPlayActive_DeviceObject ;
												CdAudioIsPlayActive_DeviceObject = CdAudio435DeviceControl_DeviceObject;
												if(CdAudioIsPlayActive_deviceExtension__PlayActive >= 0 && CdAudioIsPlayActive_deviceExtension__PlayActive <= 0) {
													CdAudioIsPlayActive_retres11 = 0;
L292:;
													TRACER_RV = (CdAudioIsPlayActive_retres11);
													CdAudio435DeviceControl_tmp___1 = TRACER_RV;
													TRACER_RV = nondet();
{
 int CdAudioSendToNextDriver_Irp__CurrentLocation ;
int CdAudioSendToNextDriver_Irp__Tail__Overlay__CurrentStackLocation ;
int CdAudioSendToNextDriver_deviceExtension__TargetDeviceObject ;
int CdAudioSendToNextDriver_tmp ;
													int CdAudioSendToNextDriver_DeviceObject ; int CdAudioSendToNextDriver_Irp ;
													CdAudioSendToNextDriver_DeviceObject = CdAudio435DeviceControl_DeviceObject;
													CdAudioSendToNextDriver_Irp = CdAudio435DeviceControl_Irp;
													safety = safety + (s - NP);
													s = SKIP1;
													CdAudioSendToNextDriver_Irp__CurrentLocation = CdAudioSendToNextDriver_Irp__CurrentLocation + 1;
													CdAudioSendToNextDriver_Irp__Tail__Overlay__CurrentStackLocation = CdAudioSendToNextDriver_Irp__Tail__Overlay__CurrentStackLocation + 1;
{
 int IofCallDriver_Irp__PendingReturned ;
int IofCallDriver_returnVal2 ;
int IofCallDriver_compRetStatus ;
int IofCallDriver_lcontext ;
int IofCallDriver_CIL___Tmp8 ;
int IofCallDriver_tmp_ndt_5 ;
int IofCallDriver_tmp_ndt_6 ;
													int IofCallDriver_DeviceObject ; int IofCallDriver_Irp ;
													IofCallDriver_DeviceObject = CdAudioSendToNextDriver_deviceExtension__TargetDeviceObject;
													IofCallDriver_Irp = CdAudioSendToNextDriver_Irp;
													if(IofCallDriver_Irp__PendingReturned > 0) {
L293:;
														IofCallDriver_returnVal2 = 259;
L294:;
														safety = safety + (s - SKIP1);
														s = SKIP2;
														lowerDriverReturn = IofCallDriver_returnVal2;
														TRACER_RV = (IofCallDriver_returnVal2);
														CdAudioSendToNextDriver_tmp = TRACER_RV;
														TRACER_RV = nondet();
														TRACER_RV = (CdAudioSendToNextDriver_tmp);
														CdAudio435DeviceControl_tmp___0 = TRACER_RV;
														TRACER_RV = nondet();
														CdAudio435DeviceControl_retres114 = CdAudio435DeviceControl_tmp___0;
														CdAudio435DeviceControl_TRACER_returning = 1;
														TRACER_RV = (CdAudio435DeviceControl_retres114);
														CdAudioDeviceControl_status = TRACER_RV;
														TRACER_RV = nondet();
														goto L270;
													}
													else if(IofCallDriver_Irp__PendingReturned < 0) {
														goto L293;
													}
													else {
														IofCallDriver_tmp_ndt_5 = __VERIFIER_nondet_int();
														if(IofCallDriver_tmp_ndt_5 >= 0 && IofCallDriver_tmp_ndt_5 <= 0) {
															IofCallDriver_returnVal2 = 0;
															safety = safety + (s - SKIP1);
															s = SKIP2;
															lowerDriverReturn = IofCallDriver_returnVal2;
															TRACER_RV = (IofCallDriver_returnVal2);
															CdAudioSendToNextDriver_tmp = TRACER_RV;
															TRACER_RV = nondet();
															TRACER_RV = (CdAudioSendToNextDriver_tmp);
															CdAudio435DeviceControl_tmp___0 = TRACER_RV;
															TRACER_RV = nondet();
															CdAudio435DeviceControl_retres114 = CdAudio435DeviceControl_tmp___0;
															CdAudio435DeviceControl_TRACER_returning = 1;
															TRACER_RV = (CdAudio435DeviceControl_retres114);
															CdAudioDeviceControl_status = TRACER_RV;
															TRACER_RV = nondet();
															goto L271;
														}
														else if(IofCallDriver_tmp_ndt_5 < 0) {
L295:;
															IofCallDriver_tmp_ndt_6 = __VERIFIER_nondet_int();
															if(IofCallDriver_tmp_ndt_6 >= 1 && IofCallDriver_tmp_ndt_6 <= 1) {
																IofCallDriver_returnVal2 = -1073741823;
																safety = safety + (s - SKIP1);
																s = SKIP2;
																lowerDriverReturn = IofCallDriver_returnVal2;
																TRACER_RV = (IofCallDriver_returnVal2);
																CdAudioSendToNextDriver_tmp = TRACER_RV;
																TRACER_RV = nondet();
																TRACER_RV = (CdAudioSendToNextDriver_tmp);
																CdAudio435DeviceControl_tmp___0 = TRACER_RV;
																TRACER_RV = nondet();
																CdAudio435DeviceControl_retres114 = CdAudio435DeviceControl_tmp___0;
																CdAudio435DeviceControl_TRACER_returning = 1;
																TRACER_RV = (CdAudio435DeviceControl_retres114);
																CdAudioDeviceControl_status = TRACER_RV;
																TRACER_RV = nondet();
																goto L273;
															}
															else if(IofCallDriver_tmp_ndt_6 < 1) {
L296:;
																IofCallDriver_returnVal2 = 259;
																goto L294;
															}
															else {
																goto L296;
															}
														}
														else {
															goto L295;
														}
													}
}
}
												}
												else if(CdAudioIsPlayActive_deviceExtension__PlayActive < 0) {
L297:;
													if(CdAudioIsPlayActive_currentBuffer >= 0 && CdAudioIsPlayActive_currentBuffer <= 0) {
														CdAudioIsPlayActive_retres11 = 0;
														goto L292;
													}
													else if(CdAudioIsPlayActive_currentBuffer < 0) {
L298:;
														if(CdAudioIsPlayActive_irp_CdAudioIsPlayActive >= 0 && CdAudioIsPlayActive_irp_CdAudioIsPlayActive <= 0) {
															CdAudioIsPlayActive_retres11 = 0;
															goto L292;
														}
														else if(CdAudioIsPlayActive_irp_CdAudioIsPlayActive < 0) {
L299:;
															CdAudioIsPlayActive_CIL___Tmp10 = CdAudioIsPlayActive_status;
															if(CdAudioIsPlayActive_CIL___Tmp10 >= 259 && CdAudioIsPlayActive_CIL___Tmp10 <= 259) {
{
 int KeWaitForSingleObject_tmp_ndt_7 ;
int KeWaitForSingleObject_retres7 ;
																int KeWaitForSingleObject_Object ; int KeWaitForSingleObject_WaitReason ; int KeWaitForSingleObject_WaitMode ; int KeWaitForSingleObject_Alertable ; int KeWaitForSingleObject_Timeout ;
																KeWaitForSingleObject_Object = CdAudioIsPlayActive_event;
																KeWaitForSingleObject_WaitReason = Suspended;
																KeWaitForSingleObject_WaitMode = KernelMode;
																KeWaitForSingleObject_Alertable = 0;
																KeWaitForSingleObject_Timeout = 0;
L300:;
																;
																TRACER_RV = nondet();
																CdAudioIsPlayActive_status = CdAudioIsPlayActive_ioStatus__Status;
L301:;
																if(CdAudioIsPlayActive_status < 0) {
																	CdAudioIsPlayActive_retres11 = 0;
																	goto L292;
																}
																else {
																	if(CdAudioIsPlayActive_currentBuffer__Header__AudioStatus >= 17 && CdAudioIsPlayActive_currentBuffer__Header__AudioStatus <= 17) {
																		CdAudioIsPlayActive_returnValue = 1;
																		CdAudioIsPlayActive_retres11 = CdAudioIsPlayActive_returnValue;
																		TRACER_RV = (CdAudioIsPlayActive_retres11);
																		CdAudio435DeviceControl_tmp___1 = TRACER_RV;
																		TRACER_RV = nondet();
																		CdAudio435DeviceControl_deviceExtension__PlayActive = 1;
																		CdAudio435DeviceControl_status = 0;
																		CdAudio435DeviceControl_Irp__IoStatus__Information = 0;
																		CdAudio435DeviceControl_CIL___Tmp115 = CdAudio435DeviceControl_status;
{
																		int IofCompleteRequest_Irp ; int IofCompleteRequest_PriorityBoost ;
																		IofCompleteRequest_Irp = CdAudio435DeviceControl_Irp;
																		IofCompleteRequest_PriorityBoost = 0;
																		safety = safety + (s - NP);
																		s = DC;
																		;
																		TRACER_RV = nondet();
																		CdAudio435DeviceControl_retres114 = CdAudio435DeviceControl_status;
																		CdAudio435DeviceControl_TRACER_returning = 1;
																		goto L281;
}
																	}
																	else if(CdAudioIsPlayActive_currentBuffer__Header__AudioStatus < 17) {
L302:;
																		CdAudioIsPlayActive_returnValue = 0;
																		CdAudioIsPlayActive_deviceExtension__PlayActive = 0;
																		CdAudioIsPlayActive_retres11 = CdAudioIsPlayActive_returnValue;
																		goto L292;
																	}
																	else {
																		goto L302;
																	}
																}
}
															}
															else if(CdAudioIsPlayActive_CIL___Tmp10 < 259) {
																goto L301;
															}
															else {
																goto L301;
															}
														}
														else {
															goto L299;
														}
													}
													else {
														goto L298;
													}
												}
												else {
													goto L297;
												}
}
											}
											else if(CdAudio435DeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode < CdAudio435DeviceControl_CIL___Tmp92) {
												goto L267;
											}
											else {
												goto L267;
											}
										}
									}
									else {
										goto L291;
									}
								}
							}
						}
}
					}
					else if(CdAudioDeviceControl_deviceExtension__Active < 3) {
						goto L250;
					}
					else {
						if(CdAudioDeviceControl_deviceExtension__Active >= 7 && CdAudioDeviceControl_deviceExtension__Active <= 7) {
{
 int CdAudioHPCdrDeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode ;
int CdAudioHPCdrDeviceControl_deviceExtension__TargetDeviceObject ;
int CdAudioHPCdrDeviceControl_irpSp__Control ;
int CdAudioHPCdrDeviceControl_tmp ;
int CdAudioHPCdrDeviceControl_tmp___0 ;
int CdAudioHPCdrDeviceControl_CIL___Tmp8 ;
int CdAudioHPCdrDeviceControl_CIL___Tmp9 ;
int CdAudioHPCdrDeviceControl_CIL___Tmp10 ;
int CdAudioHPCdrDeviceControl_CIL___Tmp11 ;
int CdAudioHPCdrDeviceControl_CIL___Tmp12 ;
int CdAudioHPCdrDeviceControl_retres13 ;
							int CdAudioHPCdrDeviceControl_DeviceObject ; int CdAudioHPCdrDeviceControl_Irp ;
							CdAudioHPCdrDeviceControl_DeviceObject = CdAudioDeviceControl_DeviceObject;
							CdAudioHPCdrDeviceControl_Irp = CdAudioDeviceControl_Irp;
							CdAudioHPCdrDeviceControl_CIL___Tmp8 = 56;
							CdAudioHPCdrDeviceControl_CIL___Tmp9 = 16384;
							CdAudioHPCdrDeviceControl_CIL___Tmp10 = 131072;
							CdAudioHPCdrDeviceControl_CIL___Tmp11 = 147456;
							CdAudioHPCdrDeviceControl_CIL___Tmp12 = 147512;
							CdAudioHPCdrDeviceControl_retres13 = -1073741823;
							if(CdAudioHPCdrDeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode >= CdAudioHPCdrDeviceControl_CIL___Tmp12 && CdAudioHPCdrDeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode <= CdAudioHPCdrDeviceControl_CIL___Tmp12) {
								safety = safety + (s - NP);
								safety = safety + (compRegistered - 0);
								compRegistered = 1;
								routine = 0;
								CdAudioHPCdrDeviceControl_irpSp__Control = 224;
{
 int IofCallDriver_Irp__PendingReturned ;
int IofCallDriver_returnVal2 ;
int IofCallDriver_compRetStatus ;
int IofCallDriver_lcontext ;
int IofCallDriver_CIL___Tmp8 ;
int IofCallDriver_tmp_ndt_5 ;
int IofCallDriver_tmp_ndt_6 ;
								int IofCallDriver_DeviceObject ; int IofCallDriver_Irp ;
								IofCallDriver_DeviceObject = CdAudioHPCdrDeviceControl_deviceExtension__TargetDeviceObject;
								IofCallDriver_Irp = CdAudioHPCdrDeviceControl_Irp;
{
 int HPCdrCompletion_Irp__PendingReturned ;
int HPCdrCompletion_Irp__AssociatedIrp__SystemBuffer ;
								int HPCdrCompletion_DeviceObject ; int HPCdrCompletion_Irp ; int HPCdrCompletion_Context ;
								HPCdrCompletion_DeviceObject = IofCallDriver_DeviceObject;
								HPCdrCompletion_Irp = IofCallDriver_Irp;
								HPCdrCompletion_Context = IofCallDriver_lcontext;
								if(HPCdrCompletion_Irp__PendingReturned > 0) {
L303:;
									safety = safety + (pended - 0);
									pended = 1;
{
 int HpCdrProcessLastSession_index ;
									int HpCdrProcessLastSession_Toc ;
									HpCdrProcessLastSession_Toc = HPCdrCompletion_Irp__AssociatedIrp__SystemBuffer;
L304:;
L305:;
									;
									TRACER_RV = nondet();
									TRACER_RV = (myStatus);
									IofCallDriver_compRetStatus = TRACER_RV;
									TRACER_RV = nondet();
									IofCallDriver_CIL___Tmp8 = IofCallDriver_compRetStatus;
									if(IofCallDriver_Irp__PendingReturned > 0) {
L306:;
L307:;
										CdAudioHPCdrDeviceControl_tmp = TRACER_RV;
										TRACER_RV = nondet();
										CdAudioDeviceControl_status = TRACER_RV;
										TRACER_RV = nondet();
										main_status = TRACER_RV;
										TRACER_RV = nondet();
										goto L132;
									}
									else if(IofCallDriver_Irp__PendingReturned < 0) {
										goto L306;
									}
									else {
										IofCallDriver_tmp_ndt_5 = __VERIFIER_nondet_int();
										if(IofCallDriver_tmp_ndt_5 >= 0 && IofCallDriver_tmp_ndt_5 <= 0) {
											CdAudioHPCdrDeviceControl_tmp = TRACER_RV;
											TRACER_RV = nondet();
											CdAudioDeviceControl_status = TRACER_RV;
											TRACER_RV = nondet();
											main_status = TRACER_RV;
											TRACER_RV = nondet();
											goto L134;
										}
										else if(IofCallDriver_tmp_ndt_5 < 0) {
L308:;
											IofCallDriver_tmp_ndt_6 = __VERIFIER_nondet_int();
											if(IofCallDriver_tmp_ndt_6 >= 1 && IofCallDriver_tmp_ndt_6 <= 1) {
												IofCallDriver_returnVal2 = -1073741823;
												s = IPC;
												lowerDriverReturn = IofCallDriver_returnVal2;
												TRACER_RV = (IofCallDriver_returnVal2);
												CdAudioHPCdrDeviceControl_tmp = TRACER_RV;
												TRACER_RV = nondet();
												CdAudioHPCdrDeviceControl_retres13 = CdAudioHPCdrDeviceControl_tmp;
												TRACER_RV = (CdAudioHPCdrDeviceControl_retres13);
												CdAudioDeviceControl_status = TRACER_RV;
												TRACER_RV = nondet();
												TRACER_RV = (CdAudioDeviceControl_status);
												main_status = TRACER_RV;
												TRACER_RV = nondet();
												goto L136;
											}
											else if(IofCallDriver_tmp_ndt_6 < 1) {
L309:;
												goto L307;
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
								}
								else if(HPCdrCompletion_Irp__PendingReturned < 0) {
									goto L303;
								}
								else {
{
 int HpCdrProcessLastSession_index ;
									int HpCdrProcessLastSession_Toc ;
									HpCdrProcessLastSession_Toc = HPCdrCompletion_Irp__AssociatedIrp__SystemBuffer;
L310:;
L311:;
									;
									TRACER_RV = nondet();
									IofCallDriver_compRetStatus = TRACER_RV;
									TRACER_RV = nondet();
									if(IofCallDriver_Irp__PendingReturned > 0) {
L312:;
										IofCallDriver_returnVal2 = 259;
L313:;
										s = IPC;
										lowerDriverReturn = IofCallDriver_returnVal2;
										TRACER_RV = (IofCallDriver_returnVal2);
										CdAudioHPCdrDeviceControl_tmp = TRACER_RV;
										TRACER_RV = nondet();
										CdAudioHPCdrDeviceControl_retres13 = CdAudioHPCdrDeviceControl_tmp;
										TRACER_RV = (CdAudioHPCdrDeviceControl_retres13);
										CdAudioDeviceControl_status = TRACER_RV;
										TRACER_RV = nondet();
										TRACER_RV = (CdAudioDeviceControl_status);
										main_status = TRACER_RV;
										TRACER_RV = nondet();
										goto L140;
									}
									else if(IofCallDriver_Irp__PendingReturned < 0) {
										goto L312;
									}
									else {
										IofCallDriver_tmp_ndt_5 = __VERIFIER_nondet_int();
										if(IofCallDriver_tmp_ndt_5 >= 0 && IofCallDriver_tmp_ndt_5 <= 0) {
											IofCallDriver_returnVal2 = 0;
											s = IPC;
											lowerDriverReturn = IofCallDriver_returnVal2;
											TRACER_RV = (IofCallDriver_returnVal2);
											CdAudioHPCdrDeviceControl_tmp = TRACER_RV;
											TRACER_RV = nondet();
											CdAudioHPCdrDeviceControl_retres13 = CdAudioHPCdrDeviceControl_tmp;
											TRACER_RV = (CdAudioHPCdrDeviceControl_retres13);
											CdAudioDeviceControl_status = TRACER_RV;
											TRACER_RV = nondet();
											TRACER_RV = (CdAudioDeviceControl_status);
											main_status = TRACER_RV;
											TRACER_RV = nondet();
											goto L142;
										}
										else if(IofCallDriver_tmp_ndt_5 < 0) {
L314:;
											IofCallDriver_tmp_ndt_6 = __VERIFIER_nondet_int();
											if(IofCallDriver_tmp_ndt_6 >= 1 && IofCallDriver_tmp_ndt_6 <= 1) {
												IofCallDriver_returnVal2 = -1073741823;
												s = IPC;
												lowerDriverReturn = IofCallDriver_returnVal2;
												TRACER_RV = (IofCallDriver_returnVal2);
												CdAudioHPCdrDeviceControl_tmp = TRACER_RV;
												TRACER_RV = nondet();
												CdAudioHPCdrDeviceControl_retres13 = CdAudioHPCdrDeviceControl_tmp;
												TRACER_RV = (CdAudioHPCdrDeviceControl_retres13);
												CdAudioDeviceControl_status = TRACER_RV;
												TRACER_RV = nondet();
												TRACER_RV = (CdAudioDeviceControl_status);
												main_status = TRACER_RV;
												TRACER_RV = nondet();
												goto L144;
											}
											else if(IofCallDriver_tmp_ndt_6 < 1) {
L315:;
												IofCallDriver_returnVal2 = 259;
												goto L313;
											}
											else {
												goto L315;
											}
										}
										else {
											goto L314;
										}
									}
}
								}
}
}
							}
							else if(CdAudioHPCdrDeviceControl_currentIrpStack__Parameters__DeviceIoControl__IoControlCode < CdAudioHPCdrDeviceControl_CIL___Tmp12) {
L316:;
{
 int CdAudioSendToNextDriver_Irp__CurrentLocation ;
int CdAudioSendToNextDriver_Irp__Tail__Overlay__CurrentStackLocation ;
int CdAudioSendToNextDriver_deviceExtension__TargetDeviceObject ;
int CdAudioSendToNextDriver_tmp ;
								int CdAudioSendToNextDriver_DeviceObject ; int CdAudioSendToNextDriver_Irp ;
								CdAudioSendToNextDriver_DeviceObject = CdAudioHPCdrDeviceControl_DeviceObject;
								CdAudioSendToNextDriver_Irp = CdAudioHPCdrDeviceControl_Irp;
								safety = safety + (s - NP);
								s = SKIP1;
								CdAudioSendToNextDriver_Irp__CurrentLocation = CdAudioSendToNextDriver_Irp__CurrentLocation + 1;
								CdAudioSendToNextDriver_Irp__Tail__Overlay__CurrentStackLocation = CdAudioSendToNextDriver_Irp__Tail__Overlay__CurrentStackLocation + 1;
{
 int IofCallDriver_Irp__PendingReturned ;
int IofCallDriver_returnVal2 ;
int IofCallDriver_compRetStatus ;
int IofCallDriver_lcontext ;
int IofCallDriver_CIL___Tmp8 ;
int IofCallDriver_tmp_ndt_5 ;
int IofCallDriver_tmp_ndt_6 ;
								int IofCallDriver_DeviceObject ; int IofCallDriver_Irp ;
								IofCallDriver_DeviceObject = CdAudioSendToNextDriver_deviceExtension__TargetDeviceObject;
								IofCallDriver_Irp = CdAudioSendToNextDriver_Irp;
								if(IofCallDriver_Irp__PendingReturned > 0) {
L317:;
									IofCallDriver_returnVal2 = 259;
L318:;
									safety = safety + (s - SKIP1);
									s = SKIP2;
									lowerDriverReturn = IofCallDriver_returnVal2;
									TRACER_RV = (IofCallDriver_returnVal2);
									CdAudioSendToNextDriver_tmp = TRACER_RV;
									TRACER_RV = nondet();
									TRACER_RV = (CdAudioSendToNextDriver_tmp);
									CdAudioHPCdrDeviceControl_tmp___0 = TRACER_RV;
									TRACER_RV = nondet();
									CdAudioHPCdrDeviceControl_retres13 = CdAudioHPCdrDeviceControl_tmp___0;
									TRACER_RV = (CdAudioHPCdrDeviceControl_retres13);
									CdAudioDeviceControl_status = TRACER_RV;
									TRACER_RV = nondet();
									goto L221;
								}
								else if(IofCallDriver_Irp__PendingReturned < 0) {
									goto L317;
								}
								else {
									IofCallDriver_tmp_ndt_5 = __VERIFIER_nondet_int();
									if(IofCallDriver_tmp_ndt_5 >= 0 && IofCallDriver_tmp_ndt_5 <= 0) {
										IofCallDriver_returnVal2 = 0;
										safety = safety + (s - SKIP1);
										s = SKIP2;
										lowerDriverReturn = IofCallDriver_returnVal2;
										TRACER_RV = (IofCallDriver_returnVal2);
										CdAudioSendToNextDriver_tmp = TRACER_RV;
										TRACER_RV = nondet();
										TRACER_RV = (CdAudioSendToNextDriver_tmp);
										CdAudioHPCdrDeviceControl_tmp___0 = TRACER_RV;
										TRACER_RV = nondet();
										CdAudioHPCdrDeviceControl_retres13 = CdAudioHPCdrDeviceControl_tmp___0;
										TRACER_RV = (CdAudioHPCdrDeviceControl_retres13);
										CdAudioDeviceControl_status = TRACER_RV;
										TRACER_RV = nondet();
										goto L222;
									}
									else if(IofCallDriver_tmp_ndt_5 < 0) {
L319:;
										IofCallDriver_tmp_ndt_6 = __VERIFIER_nondet_int();
										if(IofCallDriver_tmp_ndt_6 >= 1 && IofCallDriver_tmp_ndt_6 <= 1) {
											IofCallDriver_returnVal2 = -1073741823;
											safety = safety + (s - SKIP1);
											s = SKIP2;
											lowerDriverReturn = IofCallDriver_returnVal2;
											TRACER_RV = (IofCallDriver_returnVal2);
											CdAudioSendToNextDriver_tmp = TRACER_RV;
											TRACER_RV = nondet();
											TRACER_RV = (CdAudioSendToNextDriver_tmp);
											CdAudioHPCdrDeviceControl_tmp___0 = TRACER_RV;
											TRACER_RV = nondet();
											CdAudioHPCdrDeviceControl_retres13 = CdAudioHPCdrDeviceControl_tmp___0;
											TRACER_RV = (CdAudioHPCdrDeviceControl_retres13);
											CdAudioDeviceControl_status = TRACER_RV;
											TRACER_RV = nondet();
											goto L224;
										}
										else if(IofCallDriver_tmp_ndt_6 < 1) {
L320:;
											IofCallDriver_returnVal2 = 259;
											goto L318;
										}
										else {
											goto L320;
										}
									}
									else {
										goto L319;
									}
								}
}
}
							}
							else {
								goto L316;
							}
}
						}
						else if(CdAudioDeviceControl_deviceExtension__Active < 7) {
							goto L250;
						}
						else {
							goto L250;
						}
					}
				}
}
			}
			else if(main_tmp_ndt_1 < 2) {
L321:;
				main_tmp_ndt_2 = __VERIFIER_nondet_int();
				if(main_tmp_ndt_2 >= 3 && main_tmp_ndt_2 <= 3) {
{
 int CdAudioPnp_Irp__Tail__Overlay__CurrentStackLocation ;
int CdAudioPnp_irpSp__MinorFunction ;
int CdAudioPnp_Irp__IoStatus__Status ;
int CdAudioPnp_irpSp__Parameters__UsageNotification__Type ;
int CdAudioPnp_deviceExtension__PagingPathCountEvent ;
int CdAudioPnp_irpSp__Parameters__UsageNotification__InPath ;
int CdAudioPnp_deviceExtension__PagingPathCount ;
int CdAudioPnp_irpSp ;
int CdAudioPnp_status ;
int CdAudioPnp_setPagable ;
int CdAudioPnp_tmp ;
int CdAudioPnp_tmp___0 ;
int CdAudioPnp_retres15 ;
					int CdAudioPnp_DeviceObject ; int CdAudioPnp_Irp ;
					CdAudioPnp_DeviceObject = main_devobj;
					CdAudioPnp_Irp = pirp;
					if(CdAudioPnp_irpSp__MinorFunction >= 0 && CdAudioPnp_irpSp__MinorFunction <= 0) {
{
 int CdAudioStartDevice_deviceExtension__Active ;
int CdAudioStartDevice_status ;
int CdAudioStartDevice_srb__Cdb ;
int CdAudioStartDevice_cdb ;
int CdAudioStartDevice_inquiryDataPtr ;
int CdAudioStartDevice_attempt ;
int CdAudioStartDevice_deviceParameterHandle ;
int CdAudioStartDevice_keyValue ;
int CdAudioStartDevice_retres14 ;
int CdAudioStartDevice_TRACER_returning ;
						int CdAudioStartDevice_DeviceObject ; int CdAudioStartDevice_Irp ;
						CdAudioStartDevice_DeviceObject = CdAudioPnp_DeviceObject;
						CdAudioStartDevice_Irp = CdAudioPnp_Irp;
						CdAudioStartDevice_TRACER_returning = 0;
{
 int CdAudioForwardIrpSynchronous_deviceExtension__TargetDeviceObject ;
int CdAudioForwardIrpSynchronous_event ;
int CdAudioForwardIrpSynchronous_status ;
int CdAudioForwardIrpSynchronous_irpSp__Control ;
						int CdAudioForwardIrpSynchronous_DeviceObject ; int CdAudioForwardIrpSynchronous_Irp ;
						CdAudioForwardIrpSynchronous_DeviceObject = CdAudioStartDevice_DeviceObject;
						CdAudioForwardIrpSynchronous_Irp = CdAudioStartDevice_Irp;
						safety = safety + (s - NP);
						safety = safety + (compRegistered - 0);
						compRegistered = 1;
						routine = 1;
						CdAudioForwardIrpSynchronous_irpSp__Control = 224;
{
 int IofCallDriver_Irp__PendingReturned ;
int IofCallDriver_returnVal2 ;
int IofCallDriver_compRetStatus ;
int IofCallDriver_lcontext ;
int IofCallDriver_CIL___Tmp8 ;
int IofCallDriver_tmp_ndt_5 ;
int IofCallDriver_tmp_ndt_6 ;
						int IofCallDriver_DeviceObject ; int IofCallDriver_Irp ;
						IofCallDriver_DeviceObject = CdAudioForwardIrpSynchronous_deviceExtension__TargetDeviceObject;
						IofCallDriver_Irp = CdAudioForwardIrpSynchronous_Irp;
{
 int CdAudioSignalCompletion_retres4 ;
						int CdAudioSignalCompletion_DeviceObject ; int CdAudioSignalCompletion_Irp ; int CdAudioSignalCompletion_Event ;
						CdAudioSignalCompletion_DeviceObject = IofCallDriver_DeviceObject;
						CdAudioSignalCompletion_Irp = IofCallDriver_Irp;
						CdAudioSignalCompletion_Event = IofCallDriver_lcontext;
{
 int KeSetEvent_l ;
						int KeSetEvent_Event ; int KeSetEvent_Increment ; int KeSetEvent_Wait ;
						KeSetEvent_Event = CdAudioSignalCompletion_Event;
						KeSetEvent_Increment = 0;
						KeSetEvent_Wait = 0;
						setEventCalled = 1;
						;
						TRACER_RV = nondet();
						CdAudioSignalCompletion_retres4 = -1073741802;
						TRACER_RV = (CdAudioSignalCompletion_retres4);
						IofCallDriver_compRetStatus = TRACER_RV;
						TRACER_RV = nondet();
						IofCallDriver_CIL___Tmp8 = IofCallDriver_compRetStatus;
{
						safety = safety + (s - NP);
						s = MPR1;
						;
						TRACER_RV = nondet();
						if(IofCallDriver_Irp__PendingReturned > 0) {
L322:;
							IofCallDriver_returnVal2 = 259;
L323:;
							s = MPR3;
							lowerDriverReturn = IofCallDriver_returnVal2;
							CdAudioForwardIrpSynchronous_status = TRACER_RV;
							TRACER_RV = nondet();
							CdAudioForwardIrpSynchronous_status = 259;
{
 int KeWaitForSingleObject_tmp_ndt_7 ;
int KeWaitForSingleObject_retres7 ;
							int KeWaitForSingleObject_Object ; int KeWaitForSingleObject_WaitReason ; int KeWaitForSingleObject_WaitMode ; int KeWaitForSingleObject_Alertable ; int KeWaitForSingleObject_Timeout ;
							KeWaitForSingleObject_Object = CdAudioForwardIrpSynchronous_event;
							KeWaitForSingleObject_WaitReason = Executive;
							KeWaitForSingleObject_WaitMode = KernelMode;
							KeWaitForSingleObject_Alertable = 0;
							KeWaitForSingleObject_Timeout = 0;
							s = NP;
							setEventCalled = 0;
L324:;
							;
							TRACER_RV = nondet();
L325:;
							CdAudioForwardIrpSynchronous_status = myStatus;
							TRACER_RV = (CdAudioForwardIrpSynchronous_status);
							CdAudioStartDevice_status = TRACER_RV;
							TRACER_RV = nondet();
							if(CdAudioStartDevice_deviceExtension__Active >= 255 && CdAudioStartDevice_deviceExtension__Active <= 255) {
								CdAudioStartDevice_cdb = CdAudioStartDevice_srb__Cdb;
								CdAudioStartDevice_inquiryDataPtr = 0;
								CdAudioStartDevice_attempt = 0;
								CdAudioStartDevice_deviceExtension__Active = 0;
								CdAudioStartDevice_retres14 = 0;
								CdAudioStartDevice_TRACER_returning = 1;
L326:;
								TRACER_RV = (CdAudioStartDevice_retres14);
								CdAudioPnp_status = TRACER_RV;
								TRACER_RV = nondet();
{
								int IofCompleteRequest_Irp ; int IofCompleteRequest_PriorityBoost ;
								IofCompleteRequest_Irp = CdAudioPnp_Irp;
								IofCompleteRequest_PriorityBoost = 0;
								safety = safety + (s - NP);
								s = DC;
								;
								TRACER_RV = nondet();
								CdAudioPnp_retres15 = CdAudioPnp_status;
L327:;
								TRACER_RV = (CdAudioPnp_retres15);
								main_status = TRACER_RV;
								TRACER_RV = nondet();
								goto L157;
}
							}
							else if(CdAudioStartDevice_deviceExtension__Active < 255) {
L328:;
{
 int ZwClose_tmp_ndt_10 ;
int ZwClose_retres3 ;
								int ZwClose_Handle ;
								ZwClose_Handle = CdAudioStartDevice_deviceParameterHandle;
L329:;
								;
								TRACER_RV = nondet();
								CdAudioStartDevice_retres14 = 0;
								goto L326;
}
							}
							else {
								goto L328;
							}
}
						}
						else if(IofCallDriver_Irp__PendingReturned < 0) {
							goto L322;
						}
						else {
							IofCallDriver_tmp_ndt_5 = __VERIFIER_nondet_int();
							if(IofCallDriver_tmp_ndt_5 >= 0 && IofCallDriver_tmp_ndt_5 <= 0) {
								IofCallDriver_returnVal2 = 0;
L330:;
								s = NP;
								lowerDriverReturn = IofCallDriver_returnVal2;
								CdAudioForwardIrpSynchronous_status = TRACER_RV;
								TRACER_RV = nondet();
								CdAudioForwardIrpSynchronous_status = 259;
{
 int KeWaitForSingleObject_tmp_ndt_7 ;
int KeWaitForSingleObject_retres7 ;
								int KeWaitForSingleObject_Object ; int KeWaitForSingleObject_WaitReason ; int KeWaitForSingleObject_WaitMode ; int KeWaitForSingleObject_Alertable ; int KeWaitForSingleObject_Timeout ;
								KeWaitForSingleObject_Object = CdAudioForwardIrpSynchronous_event;
								KeWaitForSingleObject_WaitReason = Executive;
								KeWaitForSingleObject_WaitMode = KernelMode;
								KeWaitForSingleObject_Alertable = 0;
								KeWaitForSingleObject_Timeout = 0;
L331:;
								;
								TRACER_RV = nondet();
								goto L325;
}
							}
							else if(IofCallDriver_tmp_ndt_5 < 0) {
L332:;
								IofCallDriver_tmp_ndt_6 = __VERIFIER_nondet_int();
								if(IofCallDriver_tmp_ndt_6 >= 1 && IofCallDriver_tmp_ndt_6 <= 1) {
									IofCallDriver_returnVal2 = -1073741823;
									goto L330;
								}
								else if(IofCallDriver_tmp_ndt_6 < 1) {
L333:;
									IofCallDriver_returnVal2 = 259;
									goto L323;
								}
								else {
									goto L333;
								}
							}
							else {
								goto L332;
							}
						}
}
}
}
}
}
}
					}
					else if(CdAudioPnp_irpSp__MinorFunction < 0) {
L334:;
{
 int CdAudioSendToNextDriver_Irp__CurrentLocation ;
int CdAudioSendToNextDriver_Irp__Tail__Overlay__CurrentStackLocation ;
int CdAudioSendToNextDriver_deviceExtension__TargetDeviceObject ;
int CdAudioSendToNextDriver_tmp ;
						int CdAudioSendToNextDriver_DeviceObject ; int CdAudioSendToNextDriver_Irp ;
						CdAudioSendToNextDriver_DeviceObject = CdAudioPnp_DeviceObject;
						CdAudioSendToNextDriver_Irp = CdAudioPnp_Irp;
						safety = safety + (s - NP);
						s = SKIP1;
						CdAudioSendToNextDriver_Irp__CurrentLocation = CdAudioSendToNextDriver_Irp__CurrentLocation + 1;
						CdAudioSendToNextDriver_Irp__Tail__Overlay__CurrentStackLocation = CdAudioSendToNextDriver_Irp__Tail__Overlay__CurrentStackLocation + 1;
{
 int IofCallDriver_Irp__PendingReturned ;
int IofCallDriver_returnVal2 ;
int IofCallDriver_compRetStatus ;
int IofCallDriver_lcontext ;
int IofCallDriver_CIL___Tmp8 ;
int IofCallDriver_tmp_ndt_5 ;
int IofCallDriver_tmp_ndt_6 ;
						int IofCallDriver_DeviceObject ; int IofCallDriver_Irp ;
						IofCallDriver_DeviceObject = CdAudioSendToNextDriver_deviceExtension__TargetDeviceObject;
						IofCallDriver_Irp = CdAudioSendToNextDriver_Irp;
						if(IofCallDriver_Irp__PendingReturned > 0) {
L335:;
							IofCallDriver_returnVal2 = 259;
L336:;
							safety = safety + (s - SKIP1);
							s = SKIP2;
							lowerDriverReturn = IofCallDriver_returnVal2;
							TRACER_RV = (IofCallDriver_returnVal2);
							CdAudioSendToNextDriver_tmp = TRACER_RV;
							TRACER_RV = nondet();
							TRACER_RV = (CdAudioSendToNextDriver_tmp);
							CdAudioPnp_tmp___0 = TRACER_RV;
							TRACER_RV = nondet();
							CdAudioPnp_retres15 = CdAudioPnp_tmp___0;
							TRACER_RV = (CdAudioPnp_retres15);
							main_status = TRACER_RV;
							TRACER_RV = nondet();
							goto L165;
						}
						else if(IofCallDriver_Irp__PendingReturned < 0) {
							goto L335;
						}
						else {
							IofCallDriver_tmp_ndt_5 = __VERIFIER_nondet_int();
							if(IofCallDriver_tmp_ndt_5 >= 0 && IofCallDriver_tmp_ndt_5 <= 0) {
								IofCallDriver_returnVal2 = 0;
								safety = safety + (s - SKIP1);
								s = SKIP2;
								lowerDriverReturn = IofCallDriver_returnVal2;
								TRACER_RV = (IofCallDriver_returnVal2);
								CdAudioSendToNextDriver_tmp = TRACER_RV;
								TRACER_RV = nondet();
								TRACER_RV = (CdAudioSendToNextDriver_tmp);
								CdAudioPnp_tmp___0 = TRACER_RV;
								TRACER_RV = nondet();
								CdAudioPnp_retres15 = CdAudioPnp_tmp___0;
								TRACER_RV = (CdAudioPnp_retres15);
								main_status = TRACER_RV;
								TRACER_RV = nondet();
								goto L166;
							}
							else if(IofCallDriver_tmp_ndt_5 < 0) {
L337:;
								IofCallDriver_tmp_ndt_6 = __VERIFIER_nondet_int();
								if(IofCallDriver_tmp_ndt_6 >= 1 && IofCallDriver_tmp_ndt_6 <= 1) {
									IofCallDriver_returnVal2 = -1073741823;
									safety = safety + (s - SKIP1);
									s = SKIP2;
									lowerDriverReturn = IofCallDriver_returnVal2;
									TRACER_RV = (IofCallDriver_returnVal2);
									CdAudioSendToNextDriver_tmp = TRACER_RV;
									TRACER_RV = nondet();
									TRACER_RV = (CdAudioSendToNextDriver_tmp);
									CdAudioPnp_tmp___0 = TRACER_RV;
									TRACER_RV = nondet();
									CdAudioPnp_retres15 = CdAudioPnp_tmp___0;
									TRACER_RV = (CdAudioPnp_retres15);
									main_status = TRACER_RV;
									TRACER_RV = nondet();
									goto L168;
								}
								else if(IofCallDriver_tmp_ndt_6 < 1) {
L338:;
									IofCallDriver_returnVal2 = 259;
									goto L336;
								}
								else {
									goto L338;
								}
							}
							else {
								goto L337;
							}
						}
}
}
					}
					else {
						if(CdAudioPnp_irpSp__MinorFunction >= 22 && CdAudioPnp_irpSp__MinorFunction <= 22) {
							if(CdAudioPnp_irpSp__Parameters__UsageNotification__Type > DeviceUsageTypePaging) {
L339:;
{
 int CdAudioSendToNextDriver_Irp__CurrentLocation ;
int CdAudioSendToNextDriver_Irp__Tail__Overlay__CurrentStackLocation ;
int CdAudioSendToNextDriver_deviceExtension__TargetDeviceObject ;
int CdAudioSendToNextDriver_tmp ;
								int CdAudioSendToNextDriver_DeviceObject ; int CdAudioSendToNextDriver_Irp ;
								CdAudioSendToNextDriver_DeviceObject = CdAudioPnp_DeviceObject;
								CdAudioSendToNextDriver_Irp = CdAudioPnp_Irp;
								safety = safety + (s - NP);
								s = SKIP1;
								CdAudioSendToNextDriver_Irp__CurrentLocation = CdAudioSendToNextDriver_Irp__CurrentLocation + 1;
								CdAudioSendToNextDriver_Irp__Tail__Overlay__CurrentStackLocation = CdAudioSendToNextDriver_Irp__Tail__Overlay__CurrentStackLocation + 1;
{
 int IofCallDriver_Irp__PendingReturned ;
int IofCallDriver_returnVal2 ;
int IofCallDriver_compRetStatus ;
int IofCallDriver_lcontext ;
int IofCallDriver_CIL___Tmp8 ;
int IofCallDriver_tmp_ndt_5 ;
int IofCallDriver_tmp_ndt_6 ;
								int IofCallDriver_DeviceObject ; int IofCallDriver_Irp ;
								IofCallDriver_DeviceObject = CdAudioSendToNextDriver_deviceExtension__TargetDeviceObject;
								IofCallDriver_Irp = CdAudioSendToNextDriver_Irp;
								if(IofCallDriver_Irp__PendingReturned > 0) {
L340:;
									IofCallDriver_returnVal2 = 259;
L341:;
									safety = safety + (s - SKIP1);
									s = SKIP2;
									lowerDriverReturn = IofCallDriver_returnVal2;
									TRACER_RV = (IofCallDriver_returnVal2);
									CdAudioSendToNextDriver_tmp = TRACER_RV;
									TRACER_RV = nondet();
									TRACER_RV = (CdAudioSendToNextDriver_tmp);
									CdAudioPnp_tmp = TRACER_RV;
									TRACER_RV = nondet();
									CdAudioPnp_retres15 = CdAudioPnp_tmp;
									TRACER_RV = (CdAudioPnp_retres15);
									main_status = TRACER_RV;
									TRACER_RV = nondet();
									goto L165;
								}
								else if(IofCallDriver_Irp__PendingReturned < 0) {
									goto L340;
								}
								else {
									IofCallDriver_tmp_ndt_5 = __VERIFIER_nondet_int();
									if(IofCallDriver_tmp_ndt_5 >= 0 && IofCallDriver_tmp_ndt_5 <= 0) {
										IofCallDriver_returnVal2 = 0;
										safety = safety + (s - SKIP1);
										s = SKIP2;
										lowerDriverReturn = IofCallDriver_returnVal2;
										TRACER_RV = (IofCallDriver_returnVal2);
										CdAudioSendToNextDriver_tmp = TRACER_RV;
										TRACER_RV = nondet();
										TRACER_RV = (CdAudioSendToNextDriver_tmp);
										CdAudioPnp_tmp = TRACER_RV;
										TRACER_RV = nondet();
										CdAudioPnp_retres15 = CdAudioPnp_tmp;
										TRACER_RV = (CdAudioPnp_retres15);
										main_status = TRACER_RV;
										TRACER_RV = nondet();
										goto L166;
									}
									else if(IofCallDriver_tmp_ndt_5 < 0) {
L342:;
										IofCallDriver_tmp_ndt_6 = __VERIFIER_nondet_int();
										if(IofCallDriver_tmp_ndt_6 >= 1 && IofCallDriver_tmp_ndt_6 <= 1) {
											IofCallDriver_returnVal2 = -1073741823;
											safety = safety + (s - SKIP1);
											s = SKIP2;
											lowerDriverReturn = IofCallDriver_returnVal2;
											TRACER_RV = (IofCallDriver_returnVal2);
											CdAudioSendToNextDriver_tmp = TRACER_RV;
											TRACER_RV = nondet();
											TRACER_RV = (CdAudioSendToNextDriver_tmp);
											CdAudioPnp_tmp = TRACER_RV;
											TRACER_RV = nondet();
											CdAudioPnp_retres15 = CdAudioPnp_tmp;
											TRACER_RV = (CdAudioPnp_retres15);
											main_status = TRACER_RV;
											TRACER_RV = nondet();
											goto L168;
										}
										else if(IofCallDriver_tmp_ndt_6 < 1) {
L343:;
											IofCallDriver_returnVal2 = 259;
											goto L341;
										}
										else {
											goto L343;
										}
									}
									else {
										goto L342;
									}
								}
}
}
							}
							else if(CdAudioPnp_irpSp__Parameters__UsageNotification__Type < DeviceUsageTypePaging) {
								goto L339;
							}
							else {
{
 int KeWaitForSingleObject_tmp_ndt_7 ;
int KeWaitForSingleObject_retres7 ;
								int KeWaitForSingleObject_Object ; int KeWaitForSingleObject_WaitReason ; int KeWaitForSingleObject_WaitMode ; int KeWaitForSingleObject_Alertable ; int KeWaitForSingleObject_Timeout ;
								KeWaitForSingleObject_Object = CdAudioPnp_deviceExtension__PagingPathCountEvent;
								KeWaitForSingleObject_WaitReason = Executive;
								KeWaitForSingleObject_WaitMode = KernelMode;
								KeWaitForSingleObject_Alertable = 0;
								KeWaitForSingleObject_Timeout = 0;
L344:;
								CdAudioPnp_status = TRACER_RV;
								TRACER_RV = nondet();
L345:;
L346:;
L347:;
L348:;
{
 int CdAudioForwardIrpSynchronous_deviceExtension__TargetDeviceObject ;
int CdAudioForwardIrpSynchronous_event ;
int CdAudioForwardIrpSynchronous_status ;
int CdAudioForwardIrpSynchronous_irpSp__Control ;
								int CdAudioForwardIrpSynchronous_DeviceObject ; int CdAudioForwardIrpSynchronous_Irp ;
								CdAudioForwardIrpSynchronous_DeviceObject = CdAudioPnp_DeviceObject;
								CdAudioForwardIrpSynchronous_Irp = CdAudioPnp_Irp;
								safety = safety + (s - NP);
								safety = safety + (compRegistered - 0);
								compRegistered = 1;
								routine = 1;
								CdAudioForwardIrpSynchronous_irpSp__Control = 224;
{
 int IofCallDriver_Irp__PendingReturned ;
int IofCallDriver_returnVal2 ;
int IofCallDriver_compRetStatus ;
int IofCallDriver_lcontext ;
int IofCallDriver_CIL___Tmp8 ;
int IofCallDriver_tmp_ndt_5 ;
int IofCallDriver_tmp_ndt_6 ;
								int IofCallDriver_DeviceObject ; int IofCallDriver_Irp ;
								IofCallDriver_DeviceObject = CdAudioForwardIrpSynchronous_deviceExtension__TargetDeviceObject;
								IofCallDriver_Irp = CdAudioForwardIrpSynchronous_Irp;
{
 int CdAudioSignalCompletion_retres4 ;
								int CdAudioSignalCompletion_DeviceObject ; int CdAudioSignalCompletion_Irp ; int CdAudioSignalCompletion_Event ;
								CdAudioSignalCompletion_DeviceObject = IofCallDriver_DeviceObject;
								CdAudioSignalCompletion_Irp = IofCallDriver_Irp;
								CdAudioSignalCompletion_Event = IofCallDriver_lcontext;
{
 int KeSetEvent_l ;
								int KeSetEvent_Event ; int KeSetEvent_Increment ; int KeSetEvent_Wait ;
								KeSetEvent_Event = CdAudioSignalCompletion_Event;
								KeSetEvent_Increment = 0;
								KeSetEvent_Wait = 0;
								setEventCalled = 1;
								;
								TRACER_RV = nondet();
								CdAudioSignalCompletion_retres4 = -1073741802;
								TRACER_RV = (CdAudioSignalCompletion_retres4);
								IofCallDriver_compRetStatus = TRACER_RV;
								TRACER_RV = nondet();
								IofCallDriver_CIL___Tmp8 = IofCallDriver_compRetStatus;
{
								safety = safety + (s - NP);
								s = MPR1;
								;
								TRACER_RV = nondet();
								if(IofCallDriver_Irp__PendingReturned > 0) {
L349:;
									IofCallDriver_returnVal2 = 259;
L350:;
									s = MPR3;
									lowerDriverReturn = IofCallDriver_returnVal2;
									CdAudioForwardIrpSynchronous_status = TRACER_RV;
									TRACER_RV = nondet();
									CdAudioForwardIrpSynchronous_status = 259;
{
 int KeWaitForSingleObject_tmp_ndt_7 ;
int KeWaitForSingleObject_retres7 ;
									int KeWaitForSingleObject_Object ; int KeWaitForSingleObject_WaitReason ; int KeWaitForSingleObject_WaitMode ; int KeWaitForSingleObject_Alertable ; int KeWaitForSingleObject_Timeout ;
									KeWaitForSingleObject_Object = CdAudioForwardIrpSynchronous_event;
									KeWaitForSingleObject_WaitReason = Executive;
									KeWaitForSingleObject_WaitMode = KernelMode;
									KeWaitForSingleObject_Alertable = 0;
									KeWaitForSingleObject_Timeout = 0;
									s = NP;
									setEventCalled = 0;
L351:;
									;
									TRACER_RV = nondet();
L352:;
									CdAudioForwardIrpSynchronous_status = myStatus;
									TRACER_RV = (CdAudioForwardIrpSynchronous_status);
									CdAudioPnp_status = TRACER_RV;
									TRACER_RV = nondet();
{
 int KeSetEvent_l ;
									int KeSetEvent_Event ; int KeSetEvent_Increment ; int KeSetEvent_Wait ;
									KeSetEvent_Event = CdAudioPnp_deviceExtension__PagingPathCountEvent;
									KeSetEvent_Increment = 0;
									KeSetEvent_Wait = 0;
									;
									TRACER_RV = nondet();
{
									int IofCompleteRequest_Irp ; int IofCompleteRequest_PriorityBoost ;
									IofCompleteRequest_Irp = CdAudioPnp_Irp;
									IofCompleteRequest_PriorityBoost = 0;
									safety = safety + (s - NP);
									s = DC;
									;
									TRACER_RV = nondet();
									CdAudioPnp_retres15 = CdAudioPnp_status;
									goto L327;
}
}
}
								}
								else if(IofCallDriver_Irp__PendingReturned < 0) {
									goto L349;
								}
								else {
									IofCallDriver_tmp_ndt_5 = __VERIFIER_nondet_int();
									if(IofCallDriver_tmp_ndt_5 >= 0 && IofCallDriver_tmp_ndt_5 <= 0) {
										IofCallDriver_returnVal2 = 0;
L353:;
										s = NP;
										lowerDriverReturn = IofCallDriver_returnVal2;
										CdAudioForwardIrpSynchronous_status = TRACER_RV;
										TRACER_RV = nondet();
										CdAudioForwardIrpSynchronous_status = 259;
{
 int KeWaitForSingleObject_tmp_ndt_7 ;
int KeWaitForSingleObject_retres7 ;
										int KeWaitForSingleObject_Object ; int KeWaitForSingleObject_WaitReason ; int KeWaitForSingleObject_WaitMode ; int KeWaitForSingleObject_Alertable ; int KeWaitForSingleObject_Timeout ;
										KeWaitForSingleObject_Object = CdAudioForwardIrpSynchronous_event;
										KeWaitForSingleObject_WaitReason = Executive;
										KeWaitForSingleObject_WaitMode = KernelMode;
										KeWaitForSingleObject_Alertable = 0;
										KeWaitForSingleObject_Timeout = 0;
L354:;
										;
										TRACER_RV = nondet();
										goto L352;
}
									}
									else if(IofCallDriver_tmp_ndt_5 < 0) {
L355:;
										IofCallDriver_tmp_ndt_6 = __VERIFIER_nondet_int();
										if(IofCallDriver_tmp_ndt_6 >= 1 && IofCallDriver_tmp_ndt_6 <= 1) {
											IofCallDriver_returnVal2 = -1073741823;
											goto L353;
										}
										else if(IofCallDriver_tmp_ndt_6 < 1) {
L356:;
											IofCallDriver_returnVal2 = 259;
											goto L350;
										}
										else {
											goto L356;
										}
									}
									else {
										goto L355;
									}
								}
}
}
}
}
}
}
							}
						}
						else if(CdAudioPnp_irpSp__MinorFunction < 22) {
							goto L334;
						}
						else {
							goto L334;
						}
					}
}
				}
				else if(main_tmp_ndt_2 < 3) {
					goto L188;
				}
				else {
					goto L188;
				}
			}
			else {
				goto L321;
			}
}
		}
		else {
			goto L192;
		}
	}
	else {
		goto L8;
	}
}
}
}

