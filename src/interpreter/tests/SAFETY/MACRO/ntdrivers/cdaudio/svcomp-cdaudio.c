int __VERIFIER_nondet_int()  ;
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
int Executive ;
int Suspended ;
int KernelMode ;
int DeviceUsageTypePaging ;

int _TRACER_abort(int i) 
{ 

  {
  goto ERROR;
  ERROR: 
#line 60
  return;
}
}
#line 63 "cdaudio_simpl1.cil.c"
void _BLAST_init(void) 
{ 

  {
#line 67
  UNLOADED = 0;
#line 68
  NP = 1;
#line 69
  DC = 2;
#line 70
  SKIP1 = 3;
#line 71
  SKIP2 = 4;
#line 72
  MPR1 = 5;
#line 73
  MPR3 = 6;
#line 74
  IPC = 7;
#line 75
  s = UNLOADED;
#line 76
  pended = 0;
#line 77
  compFptr = 0;
#line 78
  compRegistered = 0;
#line 79
  lowerDriverReturn = 0;
#line 80
  setEventCalled = 0;
#line 81
  customIrp = 0;
#line 82
  return;
}
}
#line 85 "cdaudio_simpl1.cil.c"
int SendSrbSynchronous(int Extension , int Srb , int Buffer , int BufferLength ) 
{ int ioStatus__Status ;
  int ioctl ;
  int event ;
  int irp ;
  int status ;
  int CIL___Tmp10 ;
  int CIL___Tmp11 ;
  int CIL___Tmp12 ;
  int CIL___Tmp13 ;
  int CIL___Tmp14 ;
  int CIL___Tmp15 ;
  int CIL___Tmp16 ;
  int CIL___Tmp17 ;
  long CIL___Tmp18 ;

  {
#line 93
  irp = 0;
#line 94
  if (Buffer) {
#line 95
    CIL___Tmp10 = 4116;
#line 95
    CIL___Tmp11 =  49152;
#line 95
    CIL___Tmp12 = 262144;
#line 95
    CIL___Tmp13 = 311296;
#line 95
    ioctl = 315412;
  } else {
#line 97
    CIL___Tmp14 = 4100;
#line 97
    CIL___Tmp15 = 49152;
#line 97
    CIL___Tmp16 = 262144;
#line 97
    CIL___Tmp17 = 311296;
#line 97
    ioctl = 315396;
  }
#line 99
  if (! irp) {
#line 100
    return (-1073741670);
  }
  {
#line 104
  CIL___Tmp18 = (long )status;
#line 104
  if (CIL___Tmp18 == 259L) {
    {
#line 106
    KeWaitForSingleObject(event, Executive, KernelMode, 0, 0);
#line 107
    status = ioStatus__Status;
    }
  }
  }
#line 112
  return (status);
}
}
#line 115 "cdaudio_simpl1.cil.c"
int CdAudioSignalCompletion(int DeviceObject , int Irp , int Event ) 
{ 

  {
  {
#line 120
  KeSetEvent(Event, 0, 0);
  }
#line 122
  return (-1073741802);
}
}
#line 125 "cdaudio_simpl1.cil.c"
int CdAudioStartDevice(int DeviceObject , int Irp ) 
{ int deviceExtension__Active ;
  int deviceExtension ;
  int status ;
  int srb ;
  int srb__Cdb ;
  int cdb ;
  int inquiryDataPtr ;
  int attempt ;
  int tmp ;
  int deviceParameterHandle ;
  int keyValue ;
  {
  {
#line 140
  status = CdAudioForwardIrpSynchronous(DeviceObject, Irp);
  }
  {
#line 142
#line 142
  if (status < 0) {
#line 143
    return (status);
  }
  }
#line 147
  if (deviceExtension__Active == 255) {
#line 148
    cdb = srb__Cdb;
#line 149
    inquiryDataPtr = 0;
#line 150
    attempt = 0;
#line 151
    if (! inquiryDataPtr) {
#line 152
      deviceExtension__Active = 0;
#line 153
      return (0);
    }
#line 157
    status = -1073741823;
    {
#line 159
    while (1) {
      while_0_continue: /* CIL Label */ ;

      {
#line 161
#line 161
      if (status < 0) {
#line 162
        tmp = attempt;
#line 163
        attempt ++;
#line 164
        if (tmp >= 4) {
          goto while_0_break_1;
        }
      } else {
        goto while_0_break_1;
      }
      }
      {
#line 173
      status = SendSrbSynchronous(deviceExtension, srb, inquiryDataPtr, 36);
      }
    }
    while_0_break: /* CIL Label */ ;
    }
    while_0_break_1: ;
    {
#line 178
#line 178
    if (status < 0) {
#line 179
      deviceExtension__Active = 0;
#line 180
      return (0);
    }
    }
#line 184
    deviceExtension__Active = 0;
  }
#line 188
  keyValue = deviceExtension__Active;
  {
#line 189
#line 189
  if (status < 0) {
#line 190
    return (0);
  }
  }
  {
#line 194
#line 194
  if (status < 0) {

  }
  }
  {
#line 200
  ZwClose(deviceParameterHandle);
  }
#line 202
  return (0);
}
}
#line 205 "cdaudio_simpl1.cil.c"
int CdAudioPnp(int DeviceObject , int Irp ) 
{ int Irp__Tail__Overlay__CurrentStackLocation ;
  int irpSp__MinorFunction ;
  int Irp__IoStatus__Status ;
  int irpSp__Parameters__UsageNotification__Type ;
  int deviceExtension__PagingPathCountEvent ;
  int irpSp__Parameters__UsageNotification__InPath ;
  int deviceExtension__PagingPathCount ;
  int DeviceObject__Flags ;
  int irpSp ;
  int status ;
  int setPagable ;
  int tmp ;
  int tmp___0 ;

  {
#line 221
  irpSp = Irp__Tail__Overlay__CurrentStackLocation;
#line 222
  status = -1073741637;
#line 223
  if (irpSp__MinorFunction == 0) {
    goto switch_1_0;
  } else {
#line 226
    if (irpSp__MinorFunction == 22) {
      goto switch_1_22;
    } else {
      goto switch_1_default;
#line 231
      if (0) {
        switch_1_0: 
        {
#line 234
        status = CdAudioStartDevice(DeviceObject, Irp);
#line 235
        Irp__IoStatus__Status = status;
#line 236
        myStatus = status;
#line 237
        IofCompleteRequest(Irp, 0);
        }
#line 239
        return (status);
        switch_1_22: ;
#line 241
        if (irpSp__Parameters__UsageNotification__Type != DeviceUsageTypePaging) {
          {
#line 243
          tmp = CdAudioSendToNextDriver(DeviceObject, Irp);
          }
#line 245
          return (tmp);
        }
        {
#line 250
        status = KeWaitForSingleObject(deviceExtension__PagingPathCountEvent, Executive,
                                       KernelMode, 0, 0);
#line 252
        setPagable = 0;
        }
#line 254
        if (irpSp__Parameters__UsageNotification__InPath) {
#line 255
          if (deviceExtension__PagingPathCount != 1) {
            goto _L;
          }
        } else {
          _L: 
#line 262
          if (status == status) {
#line 265
            //DeviceObject__Flags |= 8192;
#line 266
            setPagable = 1;
          }
        }
        {
#line 270
        status = CdAudioForwardIrpSynchronous(DeviceObject, Irp);
        }
#line 272
        if (status >= 0) {
#line 273
          if (irpSp__Parameters__UsageNotification__InPath) {

          }
#line 278
          if (irpSp__Parameters__UsageNotification__InPath) {
#line 279
            if (deviceExtension__PagingPathCount == 1) {
#line 280
              //DeviceObject__Flags &= -8193;
            }
          }
        } else {
#line 288
          if (setPagable == 1) {
#line 289
            //DeviceObject__Flags &= -8193;
#line 290
            setPagable = 0;
          }
        }
        {
#line 296
        KeSetEvent(deviceExtension__PagingPathCountEvent, 0, 0);
#line 297
        IofCompleteRequest(Irp, 0);
        }
#line 299
        return (status);
        goto switch_1_break;
        switch_1_default: 
        {
#line 303
        tmp___0 = CdAudioSendToNextDriver(DeviceObject, Irp);
        }
#line 305
        return (tmp___0);
      } else {
        switch_1_break: ;
      }
    }
  }
#line 312
  return (0);
}
}
#line 315 "cdaudio_simpl1.cil.c"
int CdAudioDeviceControl(int DeviceObject , int Irp ) 
{ int deviceExtension__Active ;
  int status ;

  {
#line 320
  if (deviceExtension__Active == 2) {
    goto switch_2_2;
  } else {
#line 323
    if (deviceExtension__Active == 3) {
      goto switch_2_3;
    } else {
#line 326
      if (deviceExtension__Active == 1) {
        goto switch_2_1;
      } else {
#line 329
        if (deviceExtension__Active == 7) {
          goto switch_2_7;
        } else {
          goto switch_2_default;
#line 334
          if (0) {
            switch_2_2: 
            {
#line 337
            status = CdAudio535DeviceControl(DeviceObject, Irp);
            }
            goto switch_2_break;
            switch_2_3: 
            {
#line 342
            status = CdAudio435DeviceControl(DeviceObject, Irp);
            }
            goto switch_2_break;
            switch_2_1: 
            {
#line 347
            status = CdAudioAtapiDeviceControl(DeviceObject, Irp);
            }
            goto switch_2_break;
            switch_2_7: 
            {
#line 352
            status = CdAudioHPCdrDeviceControl(DeviceObject, Irp);
            }
            goto switch_2_break;
            switch_2_default: 
            {
#line 357
            deviceExtension__Active = 0;
#line 358
            status = CdAudioSendToNextDriver(DeviceObject, Irp);
            }
          } else {
            switch_2_break: ;
          }
        }
      }
    }
  }
#line 368
  return (status);
}
}
#line 371 "cdaudio_simpl1.cil.c"
int CdAudioSendToNextDriver(int DeviceObject , int Irp ) 
{ int Irp__CurrentLocation ;
  int Irp__Tail__Overlay__CurrentStackLocation ;
  int deviceExtension__TargetDeviceObject ;
  int tmp ;

  {
#line 378
  if (s == NP) {
#line 379
    s = SKIP1;
  } else {
    {
#line 382
    _TRACER_abort(1);
    }
  }
  {
#line 386
  Irp__CurrentLocation ++;
#line 387
  Irp__Tail__Overlay__CurrentStackLocation ++;
#line 388
  tmp = IofCallDriver(deviceExtension__TargetDeviceObject, Irp);
  }
#line 390
  return (tmp);
}
}
#line 393 "cdaudio_simpl1.cil.c"
int CdAudioIsPlayActive(int DeviceObject ) 
{ int deviceExtension__PlayActive ;
  int ioStatus__Status ;
  int currentBuffer__Header__AudioStatus ;
  int irp_CdAudioIsPlayActive ;
  int event ;
  int status ;
  int currentBuffer ;
  int returnValue ;
  long CIL___Tmp10 ;
  int CIL___Tmp11 ;

  {
#line 404
  if (! deviceExtension__PlayActive) {
#line 405
    return (0);
  }
#line 409
  if (currentBuffer == 0) {
#line 410
    return (0);
  }
#line 414
  if (irp_CdAudioIsPlayActive == 0) {
#line 415
    return (0);
  }
  {
#line 419
  CIL___Tmp10 = (long )status;
#line 419
  if (CIL___Tmp10 == 259L) {
    {
#line 421
    KeWaitForSingleObject(event, Suspended, KernelMode, 0, 0);
#line 422
    status = ioStatus__Status;
    }
  }
  }
  {
#line 427
#line 427
  if (status < 0) {
#line 428
    return (0);
  }
  }
#line 432
  if (currentBuffer__Header__AudioStatus == 17) {
#line 433
    returnValue = 1;
  } else {
#line 435
    returnValue = 0;
#line 436
    deviceExtension__PlayActive = 0;
  }
#line 438
  return (returnValue);
}
}
#line 441 "cdaudio_simpl1.cil.c"
int CdAudio535DeviceControl(int DeviceObject , int Irp ) 
{ int Irp__Tail__Overlay__CurrentStackLocation ;
  int DeviceObject__DeviceExtension ;
  int deviceExtension__TargetDeviceObject ;
  int Irp__AssociatedIrp__SystemBuffer ;
  int srb__Cdb ;
  int currentIrpStack__Parameters__DeviceIoControl__IoControlCode ;
  int Irp__IoStatus__Information ;
  int currentIrpStack__Parameters__DeviceIoControl__OutputBufferLength ;
  int currentIrpStack__Parameters__DeviceIoControl__InputBufferLength ;
  int srb__CdbLength ;
  int cdb__CDB10__OperationCode ;
  int srb__TimeOutValue ;
  int sizeof__READ_CAPACITY_DATA ;
  int lastSession__LogicalBlockAddress ;
  int cdaudioDataOut__FirstTrack ;
  int cdaudioDataOut__LastTrack ;
  int sizeof__CDROM_TOC ;
  int sizeof__SUB_Q_CURRENT_POSITION ;
  int userPtr__Format ;
  int sizeof__CDROM_PLAY_AUDIO_MSF ;
  int inputBuffer__StartingM ;
  int inputBuffer__EndingM ;
  int inputBuffer__StartingS ;
  int inputBuffer__EndingS ;
  int inputBuffer__StartingF ;
  int inputBuffer__EndingF ;
  int cdb__PLAY_AUDIO_MSF__OperationCode ;
  int sizeof__CDROM_SEEK_AUDIO_MSF ;
  int currentIrpStack ;
  int deviceExtension ;
  int cdaudioDataOut ;
  int srb ;
  int lastSession ;
  int cdb ;
  int status ;
  int i ;
  int bytesTransfered ;
  int Toc ;
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;
  int tracksToReturn ;
  int tracksOnCd ;
  int tracksInBuffer ;
  int userPtr ;
  int SubQPtr ;
  int tmp___5 ;
  int tmp___6 ;
  int inputBuffer ;
  int inputBuffer___0 ;
  int tmp___7 ;
  int tmp___8 ;
  int CIL___Tmp58 ;
  int CIL___Tmp59 ;
  int CIL___Tmp60 ;
  int CIL___Tmp61 ;
  int CIL___Tmp62 ;
  int CIL___Tmp63 ;
  int CIL___Tmp64 ;
  int CIL___Tmp65 ;
  int CIL___Tmp66 ;
  int CIL___Tmp67 ;
  int CIL___Tmp68 ;
  int CIL___Tmp69 ;
  int CIL___Tmp70 ;
  int CIL___Tmp71 ;
  int CIL___Tmp72 ;
  int CIL___Tmp73 ;
  int CIL___Tmp74 ;
  int CIL___Tmp75 ;
  int CIL___Tmp76 ;
  int CIL___Tmp77 ;
  int CIL___Tmp78 ;
  int CIL___Tmp79 ;
  int CIL___Tmp80 ;
  int CIL___Tmp81 ;
  int CIL___Tmp82 ;
  int CIL___Tmp83 ;
  int CIL___Tmp84 ;
  int CIL___Tmp85 ;
  int CIL___Tmp86 ;
  int CIL___Tmp87 ;
  int CIL___Tmp88 ;
  int CIL___Tmp89 ;
  int CIL___Tmp90 ;
  int CIL___Tmp91 ;
  int CIL___Tmp92 ;
  int CIL___Tmp93 ;
  int CIL___Tmp94 ;
  int CIL___Tmp95 ;
  int CIL___Tmp96 ;
  int CIL___Tmp97 ;
  int CIL___Tmp98 ;
  int CIL___Tmp99 ;
  int CIL___Tmp100 ;
  int CIL___Tmp101 ;
  int CIL___Tmp102 ;
  int CIL___Tmp103 ;
  int CIL___Tmp104 ;
  int CIL___Tmp105 ;
  int CIL___Tmp106 ;
  unsigned long CIL___Tmp107 ;
  unsigned long CIL___Tmp108 ;
  int CIL___Tmp109 ;
  int CIL___Tmp110 ;

  {
#line 499
  currentIrpStack = Irp__Tail__Overlay__CurrentStackLocation;
#line 500
  deviceExtension = DeviceObject__DeviceExtension;
#line 501
  cdaudioDataOut = Irp__AssociatedIrp__SystemBuffer;
#line 502
  cdb = srb__Cdb;
  {
#line 503
  CIL___Tmp58 = 56;
#line 503
  CIL___Tmp59 = 16384;
#line 503
  CIL___Tmp60 = 131072;
#line 503
  CIL___Tmp61 = 147456;
#line 503
  CIL___Tmp62 = 147512;
#line 503
  if (currentIrpStack__Parameters__DeviceIoControl__IoControlCode == CIL___Tmp62) {
    goto switch_3_exp_0;
  } else {
    {
#line 506
    CIL___Tmp63 = 16384;
#line 506
    CIL___Tmp64 = 131072;
#line 506
    CIL___Tmp65 = 147456;
#line 506
    if (currentIrpStack__Parameters__DeviceIoControl__IoControlCode == CIL___Tmp65) {
      goto switch_3_exp_1;
    } else {
      {
#line 509
      CIL___Tmp66 = 44;
#line 509
      CIL___Tmp67 = 16384;
#line 509
      CIL___Tmp68 = 131072;
#line 509
      CIL___Tmp69 = 147456;
#line 509
      CIL___Tmp70 = 147500;
#line 509
      if (currentIrpStack__Parameters__DeviceIoControl__IoControlCode == CIL___Tmp70) {
        goto switch_3_exp_2;
      } else {
        {
#line 512
        CIL___Tmp71 = 24;
#line 512
        CIL___Tmp72 = 16384;
#line 512
        CIL___Tmp73 = 131072;
#line 512
        CIL___Tmp74 = 147456;
#line 512
        CIL___Tmp75 = 147480;
#line 512
        if (currentIrpStack__Parameters__DeviceIoControl__IoControlCode == CIL___Tmp75) {
          goto switch_3_exp_3;
        } else {
          {
#line 515
          CIL___Tmp76 = 4;
#line 515
          CIL___Tmp77 = 16384;
#line 515
          CIL___Tmp78 = 131072;
#line 515
          CIL___Tmp79 = 147456;
#line 515
          CIL___Tmp80 = 147460;
#line 515
          if (currentIrpStack__Parameters__DeviceIoControl__IoControlCode == CIL___Tmp80) {
            goto switch_3_exp_4;
          } else {
            {
#line 518
            CIL___Tmp81 = 2056;
#line 518
            CIL___Tmp82 = 16384;
#line 518
            CIL___Tmp83 = 131072;
#line 518
            CIL___Tmp84 = 147456;
#line 518
            CIL___Tmp85 = 149512;
#line 518
            if (currentIrpStack__Parameters__DeviceIoControl__IoControlCode == CIL___Tmp85) {
              goto switch_3_exp_5;
            } else {
              {
#line 521
              CIL___Tmp86 = 52;
#line 521
              CIL___Tmp87 = 16384;
#line 521
              CIL___Tmp88 = 131072;
#line 521
              CIL___Tmp89 = 147456;
#line 521
              CIL___Tmp90 = 147508;
#line 521
              if (currentIrpStack__Parameters__DeviceIoControl__IoControlCode == CIL___Tmp90) {
                goto switch_3_exp_6;
              } else {
                {
#line 524
                CIL___Tmp91 = 20;
#line 524
                CIL___Tmp92 = 16384;
#line 524
                CIL___Tmp93 = 131072;
#line 524
                CIL___Tmp94 = 147456;
#line 524
                CIL___Tmp95 = 147476;
#line 524
                if (currentIrpStack__Parameters__DeviceIoControl__IoControlCode == CIL___Tmp95) {
                  goto switch_3_exp_7;
                } else {
                  {
#line 527
                  CIL___Tmp96 = 40;
#line 527
                  CIL___Tmp97 = 16384;
#line 527
                  CIL___Tmp98 = 131072;
#line 527
                  CIL___Tmp99 = 147456;
#line 527
                  CIL___Tmp100 = 147496;
#line 527
                  if (currentIrpStack__Parameters__DeviceIoControl__IoControlCode == CIL___Tmp100) {
                    goto switch_3_exp_8;
                  } else {
                    {
#line 530
                    CIL___Tmp101 = 2048;
#line 530
                    CIL___Tmp102 = 16384;
#line 530
                    CIL___Tmp103 = 131072;
#line 530
                    CIL___Tmp104 = 147456;
#line 530
                    CIL___Tmp105 = 149504;
#line 530
                    if (currentIrpStack__Parameters__DeviceIoControl__IoControlCode == CIL___Tmp105) {
                      goto switch_3_exp_9;
                    } else {
                      goto switch_3_default;
#line 535
                      if (0) {
                        switch_3_exp_0: 
                        {
#line 538
                        tmp = CdAudioIsPlayActive(DeviceObject);
                        }
#line 540
                        if (tmp) {
#line 541
                          status = -2147483631;
#line 542
                          Irp__IoStatus__Information = 0;
                          goto switch_3_break;
                        }
#line 547
                        if (currentIrpStack__Parameters__DeviceIoControl__OutputBufferLength) {
#line 548
                          status = -1073741789;
#line 549
                          Irp__IoStatus__Information = 0;
                          goto switch_3_break;
                        }
#line 554
                        if (lastSession == 0) {
                          {
#line 556
                          status = -1073741670;
#line 557
                          Irp__IoStatus__Information = 0;
#line 558
                          tmp___0 = AG_SetStatusAndReturn(status, Irp, deviceExtension__TargetDeviceObject);
                          }
#line 560
                          return (tmp___0);
                        }
                        {
#line 565
                        srb__CdbLength = 10;
#line 566
                        cdb__CDB10__OperationCode = 38;
#line 567
                        srb__TimeOutValue = 10;
#line 568
                        status = SendSrbSynchronous(deviceExtension, srb, lastSession,
                                                    sizeof__READ_CAPACITY_DATA);
                        }
                        {
#line 571
#line 571
                        if (status < 0) {
                          {
#line 573
                          Irp__IoStatus__Information = 0;
#line 574
                          tmp___1 = AG_SetStatusAndReturn(status, Irp, deviceExtension__TargetDeviceObject);
                          }
#line 576
                          return (tmp___1);
                        } else {
#line 578
                          status = 0;
                        }
                        }
#line 580
                        Irp__IoStatus__Information = bytesTransfered;
#line 581
                        if (lastSession__LogicalBlockAddress == 0) {
                          goto switch_3_break;
                        }
#line 586
                        cdaudioDataOut__FirstTrack = 1;
#line 587
                        cdaudioDataOut__LastTrack = 2;
                        goto switch_3_break;
                        switch_3_exp_1: ;
#line 590
                        if (currentIrpStack__Parameters__DeviceIoControl__OutputBufferLength) {
#line 591
                          status = -1073741789;
#line 592
                          Irp__IoStatus__Information = 0;
                          goto switch_3_break;
                        }
                        {
#line 598
                        tmp___2 = CdAudioIsPlayActive(DeviceObject);
                        }
#line 600
                        if (tmp___2) {
#line 601
                          status = -2147483631;
#line 602
                          Irp__IoStatus__Information = 0;
                          goto switch_3_break;
                        }
#line 607
                        if (Toc == 0) {
                          {
#line 609
                          status = -1073741670;
#line 610
                          Irp__IoStatus__Information = 0;
#line 611
                          tmp___3 = AG_SetStatusAndReturn(status, Irp, deviceExtension__TargetDeviceObject);
                          }
#line 613
                          return (tmp___3);
                        }
                        {
#line 618
                        srb__TimeOutValue = 10;
#line 619
                        srb__CdbLength = 10;
#line 620
                        status = SendSrbSynchronous(deviceExtension, srb, Toc, sizeof__CDROM_TOC);
                        }
#line 622
                        if (status >= 0) {
                          {
#line 623
                          CIL___Tmp107 = (unsigned long )status;
#line 623
                          if (CIL___Tmp107 != -1073741764) {
#line 624
                            status = 0;
                          } else {
                            goto _L;
                          }
                          }
                        } else {
                          _L: 
                          {
#line 630
                          CIL___Tmp108 = (unsigned long )status;
#line 630
                          if (CIL___Tmp108 != -1073741764) {
                            {
#line 632
                            Irp__IoStatus__Information = 0;
#line 633
                            tmp___4 = AG_SetStatusAndReturn(status, Irp, deviceExtension__TargetDeviceObject);
                            }
#line 635
                            return (tmp___4);
                          }
                          }
                        }
#line 640
                        CIL___Tmp109 = cdaudioDataOut__LastTrack - cdaudioDataOut__FirstTrack;
#line 640
                        tracksOnCd = CIL___Tmp109 + 1;
#line 641
                        tracksInBuffer = currentIrpStack__Parameters__DeviceIoControl__OutputBufferLength;
#line 642
                        if (tracksInBuffer < tracksOnCd) {
#line 643
                          tracksToReturn = tracksInBuffer;
                        } else {
#line 645
                          tracksToReturn = tracksOnCd;
                        }
#line 647
                        if (tracksInBuffer > tracksOnCd) {
#line 648
                          i ++;
                        }
                        goto switch_3_break;
                        switch_3_exp_2: 
#line 654
                        userPtr = Irp__AssociatedIrp__SystemBuffer;
#line 655
                        if (currentIrpStack__Parameters__DeviceIoControl__OutputBufferLength < sizeof__SUB_Q_CURRENT_POSITION) {
#line 656
                          status = -1073741789;
#line 657
                          Irp__IoStatus__Information = 0;
                          goto switch_3_break;
                        }
#line 662
                        if (SubQPtr == 0) {
                          {
#line 664
                          status = -1073741670;
#line 665
                          Irp__IoStatus__Information = 0;
#line 666
                          tmp___5 = AG_SetStatusAndReturn(status, Irp, deviceExtension__TargetDeviceObject);
                          }
#line 668
                          return (tmp___5);
                        }
#line 672
                        if (userPtr__Format != 1) {
                          {
#line 674
                          status = -1073741823;
#line 675
                          Irp__IoStatus__Information = 0;
#line 676
                          tmp___6 = AG_SetStatusAndReturn(status, Irp, deviceExtension__TargetDeviceObject);
                          }
#line 678
                          return (tmp___6);
                        }
                        {
#line 683
                        srb__CdbLength = 10;
#line 684
                        srb__TimeOutValue = 10;
#line 685
                        status = SendSrbSynchronous(deviceExtension, srb, SubQPtr,
                                                    sizeof__SUB_Q_CURRENT_POSITION);
                        }
#line 688
                        if (status >= 0) {
#line 689
                          Irp__IoStatus__Information = sizeof__SUB_Q_CURRENT_POSITION;
                        } else {
#line 691
                          Irp__IoStatus__Information = 0;
                        }
                        goto switch_3_break;
                        switch_3_exp_3: 
#line 695
                        inputBuffer = Irp__AssociatedIrp__SystemBuffer;
#line 696
                        Irp__IoStatus__Information = 0;
#line 697
                        if (currentIrpStack__Parameters__DeviceIoControl__InputBufferLength < sizeof__CDROM_PLAY_AUDIO_MSF) {
#line 698
                          status = -1073741820;
                          goto switch_3_break;
                        }
#line 703
                        if (inputBuffer__StartingM == inputBuffer__EndingM) {
#line 704
                          if (inputBuffer__StartingS == inputBuffer__EndingS) {
#line 705
                            if (inputBuffer__StartingF == inputBuffer__EndingF) {

                            }
                          }
                        }
                        {
#line 717
                        srb__CdbLength = 10;
#line 718
                        srb__TimeOutValue = 10;
#line 719
                        status = SendSrbSynchronous(deviceExtension, srb, 0, 0);
                        }
#line 721
                        if (status >= 0) {
#line 722
                          if (cdb__PLAY_AUDIO_MSF__OperationCode == 71) {

                          }
                        }
                        goto switch_3_break;
                        switch_3_exp_4: 
#line 732
                        inputBuffer___0 = Irp__AssociatedIrp__SystemBuffer;
#line 733
                        Irp__IoStatus__Information = 0;
#line 734
                        if (currentIrpStack__Parameters__DeviceIoControl__InputBufferLength < sizeof__CDROM_SEEK_AUDIO_MSF) {
#line 735
                          status = -1073741820;
                          goto switch_3_break;
                        }
                        {
#line 741
                        srb__CdbLength = 10;
#line 742
                        srb__TimeOutValue = 10;
#line 743
                        status = SendSrbSynchronous(deviceExtension, srb, 0, 0);
                        }
                        {
#line 745
#line 745
                        if (status < 0) {

                        }
                        }
                        goto switch_3_break;
                        switch_3_exp_5: 
                        {
#line 753
                        Irp__IoStatus__Information = 0;
#line 754
                        srb__CdbLength = 10;
#line 755
                        srb__TimeOutValue = 10;
#line 756
                        status = SendSrbSynchronous(deviceExtension, srb, 0, 0);
                        }
                        goto switch_3_break;
                        switch_3_exp_6: ;
                        switch_3_exp_7: ;
                        switch_3_exp_8: 
#line 762
                        Irp__IoStatus__Information = 0;
#line 763
                        status = -1073741808;
                        goto switch_3_break;
                        switch_3_exp_9: 
                        {
#line 767
                        CdAudioIsPlayActive(DeviceObject);
                        }
                        switch_3_default: 
                        {
#line 771
                        tmp___7 = CdAudioSendToNextDriver(DeviceObject, Irp);
                        }
#line 773
                        return (tmp___7);
                        goto switch_3_break;
                      } else {
                        switch_3_break: ;
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
  }
  {
#line 790
  tmp___8 = AG_SetStatusAndReturn(status, Irp, deviceExtension__TargetDeviceObject);
  }
#line 792
  return (tmp___8);
}
}
#line 795 "cdaudio_simpl1.cil.c"
int AG_SetStatusAndReturn(int status , int Irp , int deviceExtension__TargetDeviceObject ) 
{ unsigned long CIL___Tmp4 ;

  {
  {
#line 799
  CIL___Tmp4 = (unsigned long )status;
#line 799
  if (CIL___Tmp4 == -2147483626) {

  }
  }
  {
#line 805
  myStatus = status;
#line 806
  IofCompleteRequest(Irp, 0);
  }
#line 808
  return (status);
}
}
#line 811 "cdaudio_simpl1.cil.c"
int CdAudio435DeviceControl(int DeviceObject , int Irp ) 
{ int currentIrpStack__Parameters__DeviceIoControl__IoControlCode ;
  int currentIrpStack__Parameters__DeviceIoControl__OutputBufferLength ;
  int currentIrpStack__Parameters__DeviceIoControl__InputBufferLength ;
  int TrackData__0 ;
  int Irp__IoStatus__Information ;
  int srb__TimeOutValue ;
  int srb__CdbLength ;
  int sizeof__CDROM_TOC ;
  int cdaudioDataOut__LastTrack ;
  int cdaudioDataOut__FirstTrack ;
  int sizeof__CDROM_PLAY_AUDIO_MSF ;
  int sizeof__CDROM_SEEK_AUDIO_MSF ;
  int deviceExtension__Paused ;
  int deviceExtension__PlayActive ;
  int sizeof__SUB_Q_CHANNEL_DATA ;
  int sizeof__SUB_Q_CURRENT_POSITION ;
  int deviceExtension ;
  int srb ;
  int status ;
  int i ;
  int bytesTransfered ;
  int Toc ;
  int tmp ;
  int tracksToReturn ;
  int tracksOnCd ;
  int tracksInBuffer ;
  int SubQPtr ;
  int userPtr__Format ;
  int SubQPtr___0 ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int CIL___Tmp35 ;
  int CIL___Tmp36 ;
  int CIL___Tmp37 ;
  int CIL___Tmp38 ;
  int CIL___Tmp39 ;
  int CIL___Tmp40 ;
  int CIL___Tmp41 ;
  int CIL___Tmp42 ;
  int CIL___Tmp43 ;
  int CIL___Tmp44 ;
  int CIL___Tmp45 ;
  int CIL___Tmp46 ;
  int CIL___Tmp47 ;
  int CIL___Tmp48 ;
  int CIL___Tmp49 ;
  int CIL___Tmp50 ;
  int CIL___Tmp51 ;
  int CIL___Tmp52 ;
  int CIL___Tmp53 ;
  int CIL___Tmp54 ;
  int CIL___Tmp55 ;
  int CIL___Tmp56 ;
  int CIL___Tmp57 ;
  int CIL___Tmp58 ;
  int CIL___Tmp59 ;
  int CIL___Tmp60 ;
  int CIL___Tmp61 ;
  int CIL___Tmp62 ;
  int CIL___Tmp63 ;
  int CIL___Tmp64 ;
  int CIL___Tmp65 ;
  int CIL___Tmp66 ;
  int CIL___Tmp67 ;
  int CIL___Tmp68 ;
  int CIL___Tmp69 ;
  int CIL___Tmp70 ;
  int CIL___Tmp71 ;
  int CIL___Tmp72 ;
  int CIL___Tmp73 ;
  int CIL___Tmp74 ;
  int CIL___Tmp75 ;
  int CIL___Tmp76 ;
  int CIL___Tmp77 ;
  int CIL___Tmp78 ;
  int CIL___Tmp79 ;
  int CIL___Tmp80 ;
  int CIL___Tmp81 ;
  int CIL___Tmp82 ;
  int CIL___Tmp83 ;
  int CIL___Tmp84 ;
  int CIL___Tmp85 ;
  int CIL___Tmp86 ;
  int CIL___Tmp87 ;
  int CIL___Tmp88 ;
  int CIL___Tmp89 ;
  int CIL___Tmp90 ;
  int CIL___Tmp91 ;
  int CIL___Tmp92 ;
  unsigned long CIL___Tmp93 ;
  int CIL___Tmp94 ;
  unsigned long CIL___Tmp95 ;
  unsigned long CIL___Tmp96 ;
  unsigned long CIL___Tmp97 ;
  int CIL___Tmp98 ;
  int CIL___Tmp99 ;
  int CIL___Tmp100 ;
  int CIL___Tmp101 ;
  int CIL___Tmp102 ;
  int CIL___Tmp103 ;
  unsigned long CIL___Tmp104 ;
  unsigned long CIL___Tmp105 ;
  unsigned long CIL___Tmp106 ;
  unsigned long CIL___Tmp107 ;
  int CIL___Tmp108 ;
  unsigned long CIL___Tmp109 ;
  int CIL___Tmp110 ;
  unsigned long CIL___Tmp111 ;
  unsigned long CIL___Tmp112 ;
  unsigned long CIL___Tmp113 ;
  unsigned long CIL___Tmp114 ;
  unsigned long CIL___Tmp115 ;
  unsigned long CIL___Tmp116 ;

  {
  {
#line 846
  CIL___Tmp35 = 16384;
#line 846
  CIL___Tmp36 = 131072;
#line 846
  CIL___Tmp37 = 147456;
#line 846
  if (currentIrpStack__Parameters__DeviceIoControl__IoControlCode == CIL___Tmp37) {
    goto switch_4_exp_10;
  } else {
    {
#line 849
    CIL___Tmp38 = 24;
#line 849
    CIL___Tmp39 = 16384;
#line 849
    CIL___Tmp40 = 131072;
#line 849
    CIL___Tmp41 = 147456;
#line 849
    CIL___Tmp42 = 147480;
#line 849
    if (currentIrpStack__Parameters__DeviceIoControl__IoControlCode == CIL___Tmp42) {
      goto switch_4_exp_11;
    } else {
      {
#line 852
      CIL___Tmp43 = 8;
#line 852
      CIL___Tmp44 = 16384;
#line 852
      CIL___Tmp45 = 131072;
#line 852
      CIL___Tmp46 = 147456;
#line 852
      CIL___Tmp47 = 147464;
#line 852
      if (currentIrpStack__Parameters__DeviceIoControl__IoControlCode == CIL___Tmp47) {
        goto switch_4_exp_12;
      } else {
        {
#line 855
        CIL___Tmp48 = 4;
#line 855
        CIL___Tmp49 = 16384;
#line 855
        CIL___Tmp50 = 131072;
#line 855
        CIL___Tmp51 = 147456;
#line 855
        CIL___Tmp52 = 147460;
#line 855
        if (currentIrpStack__Parameters__DeviceIoControl__IoControlCode == CIL___Tmp52) {
          goto switch_4_exp_13;
        } else {
          {
#line 858
          CIL___Tmp53 = 12;
#line 858
          CIL___Tmp54 = 16384;
#line 858
          CIL___Tmp55 = 131072;
#line 858
          CIL___Tmp56 = 147456;
#line 858
          CIL___Tmp57 = 147468;
#line 858
          if (currentIrpStack__Parameters__DeviceIoControl__IoControlCode == CIL___Tmp57) {
            goto switch_4_exp_14;
          } else {
            {
#line 861
            CIL___Tmp58 = 16;
#line 861
            CIL___Tmp59 = 16384;
#line 861
            CIL___Tmp60 = 131072;
#line 861
            CIL___Tmp61 = 147456;
#line 861
            CIL___Tmp62 = 147472;
#line 861
            if (currentIrpStack__Parameters__DeviceIoControl__IoControlCode == CIL___Tmp62) {
              goto switch_4_exp_15;
            } else {
              {
#line 864
              CIL___Tmp63 =  44;
#line 864
              CIL___Tmp64 = 16384;
#line 864
              CIL___Tmp65 = 131072;
#line 864
              CIL___Tmp66 = 147456;
#line 864
              CIL___Tmp67 = 147500;
#line 864
              if (currentIrpStack__Parameters__DeviceIoControl__IoControlCode == CIL___Tmp67) {
                goto switch_4_exp_16;
              } else {
                {
#line 867
                CIL___Tmp68 = 2056;
#line 867
                CIL___Tmp69 = 16384;
#line 867
                CIL___Tmp70 = 131072;
#line 867
                CIL___Tmp71 = 147456;
#line 867
                CIL___Tmp72 = 149512;
#line 867
                if (currentIrpStack__Parameters__DeviceIoControl__IoControlCode == CIL___Tmp72) {
                  goto switch_4_exp_17;
                } else {
                  {
#line 870
                  CIL___Tmp73 = 52;
#line 870
                  CIL___Tmp74 = 16384;
#line 870
                  CIL___Tmp75 = 131072;
#line 870
                  CIL___Tmp76 = 147456;
#line 870
                  CIL___Tmp77 = 147508;
#line 870
                  if (currentIrpStack__Parameters__DeviceIoControl__IoControlCode == CIL___Tmp77) {
                    goto switch_4_exp_18;
                  } else {
                    {
#line 873
                    CIL___Tmp78 = 20;
#line 873
                    CIL___Tmp79 = 16384;
#line 873
                    CIL___Tmp80 = 131072;
#line 873
                    CIL___Tmp81 = 147456;
#line 873
                    CIL___Tmp82 = 147476;
#line 873
                    if (currentIrpStack__Parameters__DeviceIoControl__IoControlCode == CIL___Tmp82) {
                      goto switch_4_exp_19;
                    } else {
                      {
#line 876
                      CIL___Tmp83 = 40;
#line 876
                      CIL___Tmp84 = 16384;
#line 876
                      CIL___Tmp85 = 131072;
#line 876
                      CIL___Tmp86 = 147456;
#line 876
                      CIL___Tmp87 = 147496;
#line 876
                      if (currentIrpStack__Parameters__DeviceIoControl__IoControlCode == CIL___Tmp87) {
                        goto switch_4_exp_20;
                      } else {
                        {
#line 879
                        CIL___Tmp88 = 2048;
#line 879
                        CIL___Tmp89 = 16384;
#line 879
                        CIL___Tmp90 = 131072;
#line 879
                        CIL___Tmp91 = 147456;
#line 879
                        CIL___Tmp92 = 149504;
#line 879
                        if (currentIrpStack__Parameters__DeviceIoControl__IoControlCode == CIL___Tmp92) {
                          goto switch_4_exp_21;
                        } else {
                          goto switch_4_default;
#line 884
                          if (0) {
                            switch_4_exp_10: ;
#line 886
                            if (currentIrpStack__Parameters__DeviceIoControl__OutputBufferLength < TrackData__0) {
#line 887
                              status = -1073741789;
#line 888
                              Irp__IoStatus__Information = 0;
                              goto switch_4_break;
                            }
                            {
#line 894
                            tmp = CdAudioIsPlayActive(DeviceObject);
                            }
#line 896
                            if (tmp) {
#line 897
                              status = -2147483631;
#line 898
                              Irp__IoStatus__Information = 0;
                              goto switch_4_break;
                            }
#line 903
                            if (Toc == 0) {
#line 904
                              status = -1073741670;
#line 905
                              Irp__IoStatus__Information = 0;
                              {
#line 906
                              CIL___Tmp93 = (unsigned long )status;
#line 906
                              if (CIL___Tmp93 == -2147483626) {
#line 907
                                Irp__IoStatus__Information = 0;
                              }
                              }
                              {
#line 912
                              myStatus = status;
#line 913
                              IofCompleteRequest(Irp, 0);
                              }
#line 915
                              return (status);
                            }
                            {
#line 920
                            srb__TimeOutValue = 10;
#line 921
                            srb__CdbLength = 10;
#line 922
                            status = SendSrbSynchronous(deviceExtension, srb, Toc,
                                                        sizeof__CDROM_TOC);
                            }
                            {
#line 925
#line 925
                            if (status < 0) {
                              {
#line 926
                              CIL___Tmp95 = (unsigned long )status;
#line 926
                              if (CIL___Tmp95 != -1073741764) {
                                {
#line 927
                                CIL___Tmp96 = (unsigned long )status;
#line 927
                                if (CIL___Tmp96 != -1073741764) {
                                  {
#line 928
                                  CIL___Tmp97 = (unsigned long )status;
#line 928
                                  if (CIL___Tmp97 == -2147483626) {
#line 929
                                    Irp__IoStatus__Information = 0;
                                  }
                                  }
                                  {
#line 934
                                  myStatus = status;
#line 935
                                  IofCompleteRequest(Irp, 0);
                                  }
#line 937
                                  return (status);
                                }
                                }
                              } else {
#line 942
                                status = 0;
                              }
                              }
                            } else {
#line 945
                              status = 0;
                            }
                            }
#line 947
                            if (currentIrpStack__Parameters__DeviceIoControl__OutputBufferLength > sizeof__CDROM_TOC) {
#line 948
                              bytesTransfered = sizeof__CDROM_TOC;
                            } else {
#line 950
                              bytesTransfered = currentIrpStack__Parameters__DeviceIoControl__OutputBufferLength;
                            }
#line 952
                            CIL___Tmp98 = cdaudioDataOut__LastTrack - cdaudioDataOut__FirstTrack;
#line 952
                            tracksOnCd = CIL___Tmp98 + 1;
#line 953
                            tracksInBuffer = currentIrpStack__Parameters__DeviceIoControl__OutputBufferLength - TrackData__0;
#line 954
                            if (tracksInBuffer < tracksOnCd) {
#line 955
                              tracksToReturn = tracksInBuffer;
                            } else {
#line 957
                              tracksToReturn = tracksOnCd;
                            }
#line 959
                            if (tracksInBuffer > tracksOnCd) {
#line 960
                              i ++;
                            }
                            goto switch_4_break;
                            switch_4_exp_11: ;
                            switch_4_exp_12: 
                            {
#line 968
                            Irp__IoStatus__Information = 0;
#line 969
                            srb__CdbLength = 10;
#line 970
                            srb__TimeOutValue = 10;
#line 971
                            status = SendSrbSynchronous(deviceExtension, srb, 0, 0);
                            }
#line 973
                            if (status >= 0) {

                            }
                            {
#line 978
                            CIL___Tmp99 = 8;
#line 978
                            CIL___Tmp100 = 16384;
#line 978
                            CIL___Tmp101 = 131072;
#line 978
                            CIL___Tmp102 = 147456;
#line 978
                            CIL___Tmp103 = 147464;
#line 978
                            if (currentIrpStack__Parameters__DeviceIoControl__IoControlCode == CIL___Tmp103) {
                              {
#line 979
                              CIL___Tmp104 = (unsigned long )status;
#line 979
                              if (CIL___Tmp104 == -2147483626) {
#line 980
                                Irp__IoStatus__Information = 0;
                              }
                              }
                              {
#line 985
                              myStatus = status;
#line 986
                              IofCompleteRequest(Irp, 0);
                              }
#line 988
                              return (status);
                            }
                            }
#line 992
                            if (currentIrpStack__Parameters__DeviceIoControl__InputBufferLength < sizeof__CDROM_PLAY_AUDIO_MSF) {
#line 993
                              status = -1073741820;
                              goto switch_4_break;
                            }
                            {
#line 999
                            srb__CdbLength = 10;
#line 1000
                            srb__TimeOutValue = 10;
#line 1001
                            status = SendSrbSynchronous(deviceExtension, srb, 0, 0);
                            }
#line 1003
                            if (status >= 0) {

                            }
                            goto switch_4_break;
                            switch_4_exp_13: 
#line 1010
                            Irp__IoStatus__Information = 0;
#line 1011
                            if (currentIrpStack__Parameters__DeviceIoControl__InputBufferLength < sizeof__CDROM_SEEK_AUDIO_MSF) {
#line 1012
                              status = -1073741820;
                              goto switch_4_break;
                            }
                            {
#line 1018
                            srb__CdbLength = 10;
#line 1019
                            srb__TimeOutValue = 10;
#line 1020
                            status = SendSrbSynchronous(deviceExtension, srb, 0, 0);
                            }
#line 1022
                            if (status < 0) {
                              {
#line 1025
                              CIL___Tmp105 = (unsigned long )status;
#line 1025
                              if (CIL___Tmp105 == -1073741808) {
#line 1026
                                status = -1073741803;
                              }
                              }
                            }
                            goto switch_4_break;
                            switch_4_exp_14: 
#line 1033
                            Irp__IoStatus__Information = 0;
#line 1034
                            if (SubQPtr == 0) {
#line 1035
                              status = -1073741670;
                              {
#line 1036
                              CIL___Tmp106 = (unsigned long )status;
#line 1036
                              if (CIL___Tmp106 == -2147483626) {
#line 1037
                                Irp__IoStatus__Information = 0;
                              }
                              }
                              {
#line 1042
                              myStatus = status;
#line 1043
                              IofCompleteRequest(Irp, 0);
                              }
#line 1045
                              return (status);
                            }
#line 1049
                            if (deviceExtension__Paused == 1) {
#line 1050
                              status = 0;
                              {
#line 1051
                              CIL___Tmp107 = (unsigned long )status;
#line 1051
                              if (CIL___Tmp107 == -2147483626) {
#line 1052
                                Irp__IoStatus__Information = 0;
                              }
                              }
                              {
#line 1057
                              myStatus = status;
#line 1058
                              IofCompleteRequest(Irp, 0);
                              }
#line 1060
                              return (status);
                            }
                            {
#line 1065
                            srb__CdbLength = 10;
#line 1066
                            srb__TimeOutValue = 10;
#line 1067
                            status = SendSrbSynchronous(deviceExtension, srb, SubQPtr,
                                                        sizeof__SUB_Q_CHANNEL_DATA);
                            }
                            {
#line 1070
#line 1070
                            if (status < 0) {
                              {
#line 1071
                              CIL___Tmp109 = (unsigned long )status;
#line 1071
                              if (CIL___Tmp109 == -2147483626) {
#line 1072
                                Irp__IoStatus__Information = 0;
                              }
                              }
                              {
#line 1077
                              myStatus = status;
#line 1078
                              IofCompleteRequest(Irp, 0);
                              }
#line 1080
                              return (status);
                            }
                            }
                            {
#line 1085
                            srb__CdbLength = 10;
#line 1086
                            srb__TimeOutValue = 10;
#line 1087
                            status = SendSrbSynchronous(deviceExtension, srb, 0, 0);
                            }
                            {
#line 1089
#line 1089
                            if (status < 0) {
                              {
#line 1090
                              CIL___Tmp111 = (unsigned long )status;
#line 1090
                              if (CIL___Tmp111 == -2147483626) {
#line 1091
                                Irp__IoStatus__Information = 0;
                              }
                              }
                              {
#line 1096
                              myStatus = status;
#line 1097
                              IofCompleteRequest(Irp, 0);
                              }
#line 1099
                              return (status);
                            }
                            }
                            goto switch_4_break;
                            switch_4_exp_15: 
#line 1105
                            Irp__IoStatus__Information = 0;
#line 1106
                            if (deviceExtension__Paused == 0) {
#line 1107
                              status = -1073741823;
                              {
#line 1108
                              CIL___Tmp112 = (unsigned long )status;
#line 1108
                              if (CIL___Tmp112 == -2147483626) {
#line 1109
                                Irp__IoStatus__Information = 0;
                              }
                              }
                              {
#line 1114
                              myStatus = status;
#line 1115
                              IofCompleteRequest(Irp, 0);
                              }
#line 1117
                              return (status);
                            }
                            {
#line 1122
                            srb__CdbLength = 10;
#line 1123
                            srb__TimeOutValue = 10;
#line 1124
                            status = SendSrbSynchronous(deviceExtension, srb, 0, 0);
                            }
#line 1126
                            if (status >= 0) {
#line 1127
                              deviceExtension__PlayActive = 1;
#line 1128
                              deviceExtension__Paused = 0;
                            }
                            goto switch_4_break;
                            switch_4_exp_16: ;
#line 1134
                            if (currentIrpStack__Parameters__DeviceIoControl__OutputBufferLength < sizeof__SUB_Q_CURRENT_POSITION) {
#line 1135
                              status = -1073741789;
#line 1136
                              Irp__IoStatus__Information = 0;
                              goto switch_4_break;
                            }
#line 1141
                            if (SubQPtr___0 == 0) {
#line 1142
                              status = -1073741670;
#line 1143
                              Irp__IoStatus__Information = 0;
                              {
#line 1144
                              CIL___Tmp113 = (unsigned long )status;
#line 1144
                              if (CIL___Tmp113 == -2147483626) {
#line 1145
                                Irp__IoStatus__Information = 0;
                              }
                              }
                              {
#line 1150
                              myStatus = status;
#line 1151
                              IofCompleteRequest(Irp, 0);
                              }
#line 1153
                              return (status);
                            }
#line 1157
                            if (userPtr__Format != 1) {
#line 1158
                              status = -1073741823;
#line 1159
                              Irp__IoStatus__Information = 0;
                              {
#line 1160
                              CIL___Tmp114 = (unsigned long )status;
#line 1160
                              if (CIL___Tmp114 == -2147483626) {
#line 1161
                                Irp__IoStatus__Information = 0;
                              }
                              }
                              {
#line 1166
                              myStatus = status;
#line 1167
                              IofCompleteRequest(Irp, 0);
                              }
#line 1169
                              return (status);
                            }
                            {
#line 1174
                            srb__CdbLength = 10;
#line 1175
                            srb__TimeOutValue = 10;
#line 1176
                            status = SendSrbSynchronous(deviceExtension, srb, SubQPtr___0,
                                                        sizeof__SUB_Q_CHANNEL_DATA);
                            }
#line 1179
                            if (status >= 0) {
#line 1180
                              if (deviceExtension__Paused == 1) {
#line 1181
                                deviceExtension__PlayActive = 0;
                              }
#line 1185
                              Irp__IoStatus__Information = sizeof__SUB_Q_CURRENT_POSITION;
                            } else {
#line 1187
                              Irp__IoStatus__Information = 0;
                            }
                            goto switch_4_break;
                            switch_4_exp_17: 
                            {
#line 1192
                            Irp__IoStatus__Information = 0;
#line 1193
                            srb__CdbLength = 10;
#line 1194
                            srb__TimeOutValue = 10;
#line 1195
                            status = SendSrbSynchronous(deviceExtension, srb, 0, 0);
                            }
                            goto switch_4_break;
                            switch_4_exp_18: ;
                            switch_4_exp_19: ;
                            switch_4_exp_20: 
#line 1201
                            Irp__IoStatus__Information = 0;
#line 1202
                            status = -1073741808;
                            goto switch_4_break;
                            switch_4_exp_21: 
                            {
#line 1206
                            tmp___1 = CdAudioIsPlayActive(DeviceObject);
                            }
#line 1208
                            if (tmp___1 == 1) {
#line 1209
                              deviceExtension__PlayActive = 1;
#line 1210
                              status = 0;
#line 1211
                              Irp__IoStatus__Information = 0;
                              {
#line 1212
                              CIL___Tmp115 = (unsigned long )status;
#line 1212
                              if (CIL___Tmp115 == -2147483626) {
#line 1213
                                Irp__IoStatus__Information = 0;
                              }
                              }
                              {
#line 1218
                              myStatus = status;
#line 1219
                              IofCompleteRequest(Irp, 0);
                              }
#line 1221
                              return (status);
                            } else {
                              {
#line 1224
                              deviceExtension__PlayActive = 0;
#line 1225
                              tmp___0 = CdAudioSendToNextDriver(DeviceObject, Irp);
                              }
#line 1227
                              return (tmp___0);
                            }
                            goto switch_4_break;
                            switch_4_default: 
                            {
#line 1232
                            tmp___2 = CdAudioSendToNextDriver(DeviceObject, Irp);
                            }
#line 1234
                            return (tmp___2);
                            goto switch_4_break;
                          } else {
                            switch_4_break: ;
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
      }
    }
    }
  }
  }
  {
#line 1252
  CIL___Tmp116 = (unsigned long )status;
#line 1252
  if (CIL___Tmp116 == -2147483626) {
#line 1253
    Irp__IoStatus__Information = 0;
  }
  }
  {
#line 1258
  myStatus = status;
#line 1259
  IofCompleteRequest(Irp, 0);
  }
#line 1261
  return (status);
}
}
#line 1264 "cdaudio_simpl1.cil.c"
int CdAudioAtapiDeviceControl(int DeviceObject , int Irp ) 
{ int currentIrpStack__Parameters__DeviceIoControl__IoControlCode ;
  int Irp__IoStatus__Information ;
  int deviceExtension__PlayActive ;
  int srb__CdbLength ;
  int srb__TimeOutValue ;
  int Irp__IoStatus__Status ;
  int status ;
  int deviceExtension ;
  int srb ;
  int tmp ;
  int CIL___Tmp13 ;
  int CIL___Tmp14 ;
  int CIL___Tmp15 ;
  int CIL___Tmp16 ;
  int CIL___Tmp17 ;
  int CIL___Tmp18 ;

  {
  {
#line 1277
  CIL___Tmp13 = 8;
#line 1277
  CIL___Tmp14 = 16384;
#line 1277
  CIL___Tmp15 = 131072;
#line 1277
  CIL___Tmp16 = 147456;
#line 1277
  CIL___Tmp17 = 147464;
#line 1277
  if (currentIrpStack__Parameters__DeviceIoControl__IoControlCode == CIL___Tmp17) {
    {
#line 1279
    Irp__IoStatus__Information = 0;
#line 1280
    deviceExtension__PlayActive = 0;
#line 1281
    srb__CdbLength = 12;
#line 1282
    srb__TimeOutValue = 10;
#line 1283
    status = SendSrbSynchronous(deviceExtension, srb, 0, 0);
    }
    {
#line 1285
#line 1285
    if (status < 0) {
      {
#line 1287
      Irp__IoStatus__Status = status;
#line 1288
      myStatus = status;
#line 1289
      IofCompleteRequest(Irp, 0);
      }
#line 1291
      return (status);
    }
    }
  } else {
    {
#line 1297
    tmp = CdAudioSendToNextDriver(DeviceObject, Irp);
    }
#line 1299
    return (tmp);
  }
  }
  {
#line 1302
  Irp__IoStatus__Status = status;
#line 1303
  myStatus = status;
#line 1304
  IofCompleteRequest(Irp, 0);
  }
#line 1306
  return (status);
}
}
#line 1309 "cdaudio_simpl1.cil.c"
void HpCdrProcessLastSession(int Toc ) 
{ int index ;

  {
#line 1313
  if (index) {
#line 1314
    index --;
  }
#line 1318
  return;
}
}
#line 1321 "cdaudio_simpl1.cil.c"
int HPCdrCompletion(int DeviceObject , int Irp , int Context ) 
{ int Irp__PendingReturned ;
  int Irp__AssociatedIrp__SystemBuffer ;

  {
#line 1326
  if (Irp__PendingReturned) {
#line 1327
    if (pended == 0) {
#line 1328
      pended = 1;
    } else {
      {
#line 1331
      _TRACER_abort(1);
      }
    }
  }
#line 1337
  if (myStatus >= 0) {
    {
#line 1339
    HpCdrProcessLastSession(Irp__AssociatedIrp__SystemBuffer);
    }
  }
#line 1344
  return (myStatus);
}
}
#line 1347 "cdaudio_simpl1.cil.c"
int CdAudioHPCdrDeviceControl(int DeviceObject , int Irp ) 
{ int currentIrpStack__Parameters__DeviceIoControl__IoControlCode ;
  int deviceExtension__TargetDeviceObject ;
  int irpSp__Control ;
  int tmp ;
  int tmp___0 ;
  int CIL___Tmp8 ;
  int CIL___Tmp9 ;
  int CIL___Tmp10 ;
  int CIL___Tmp11 ;
  int CIL___Tmp12 ;

  {
  {
#line 1355
  CIL___Tmp8 = 56;
#line 1355
  CIL___Tmp9 = 16384;
#line 1355
  CIL___Tmp10 = 131072;
#line 1355
  CIL___Tmp11 = 147456;
#line 1355
  CIL___Tmp12 = 147512;
#line 1355
  if (currentIrpStack__Parameters__DeviceIoControl__IoControlCode == CIL___Tmp12) {
#line 1356
    if (s != NP) {
      {
#line 1358
      _TRACER_abort(1);
      }
    } else {
#line 1361
      if (compRegistered != 0) {
        {
#line 1363
        _TRACER_abort(1);
        }
      } else {
#line 1366
        compRegistered = 1;
#line 1367
        routine = 0;
      }
    }
    {
#line 1371
    irpSp__Control = 224;
#line 1375
    tmp = IofCallDriver(deviceExtension__TargetDeviceObject, Irp);
    }
#line 1377
    return (tmp);
  } else {
    {
#line 1380
    tmp___0 = CdAudioSendToNextDriver(DeviceObject, Irp);
    }
#line 1382
    return (tmp___0);
  }
  }
#line 1384
  return (-1073741823);
}
}
#line 1387 "cdaudio_simpl1.cil.c"
int CdAudioForwardIrpSynchronous(int DeviceObject , int Irp ) 
{ int deviceExtension__TargetDeviceObject ;
  int event ;
  int status ;
  int irpSp__Control ;

  {
#line 1394
  if (s != NP) {
    {
#line 1396
    _TRACER_abort(1);
    }
  } else {
#line 1399
    if (compRegistered != 0) {
      {
#line 1401
      _TRACER_abort(1);
      }
    } else {
#line 1404
      compRegistered = 1;
#line 1405
      routine = 1;
    }
  }
  {
#line 1409
  irpSp__Control = 224;
#line 1413
  status = IofCallDriver(deviceExtension__TargetDeviceObject, Irp);
#line 1414
  status = 259;
  }
#line 1416
  if (status) {
    {
#line 1418
    KeWaitForSingleObject(event, Executive, KernelMode, 0, 0);
#line 1419
    status = myStatus;
    }
  }
#line 1424
  return (status);
}
}
#line 1427 "cdaudio_simpl1.cil.c"
void CdAudioUnload(int DriverObject ) 
{ 

  {
#line 1431
  return;
}
}
#line 1434 "cdaudio_simpl1.cil.c"
int CdAudioPower(int DeviceObject , int Irp ) 
{ int Irp__CurrentLocation ;
  int Irp__Tail__Overlay__CurrentStackLocation ;
  int deviceExtension__TargetDeviceObject ;
  int tmp ;

  {
#line 1441
  if (s == NP) {
#line 1442
    s = SKIP1;
  } else {
    {
#line 1445
    _TRACER_abort(1);
    }
  }
  {
#line 1449
  Irp__CurrentLocation ++;
#line 1450
  Irp__Tail__Overlay__CurrentStackLocation ++;
#line 1451
  tmp = PoCallDriver(deviceExtension__TargetDeviceObject, Irp);
  }
#line 1453
  return (tmp);
}
}
#line 1456 "cdaudio_simpl1.cil.c"
void stub_driver_init(void) 
{ 

  {
#line 1460
  s = NP;
#line 1461
  customIrp = 0;
#line 1462
  setEventCalled = customIrp;
#line 1463
  lowerDriverReturn = setEventCalled;
#line 1464
  compRegistered = lowerDriverReturn;
#line 1465
  compFptr = compRegistered;
#line 1466
  pended = compFptr;
#line 1467
  return;
}
}
#line 1470 "cdaudio_simpl1.cil.c"
int main(void) 
{ int pirp__IoStatus__Status ;
  int d ;
  int status ;
  int irp ;
  int we_should_unload ;
 // int __VERIFIER_nondet_int() ;
  int irp_choice ;
  int devobj ;
  int CIL___Tmp9 ;

  {
  {

 s  = 0;
 UNLOADED  = 0;
 NP  = 0;
 DC  = 0;
 SKIP1  = 0;
 SKIP2  = 0;
 MPR1  = 0;
 MPR3  = 0;
 IPC  = 0;
 pended  = 0;
 compFptr  = 0;
 compRegistered  = 0;
 lowerDriverReturn  = 0;
 setEventCalled  = 0;
 customIrp  = 0;
 routine  = 0;
 myStatus  = 0;
 pirp  = 0;
 Executive  = 0;
 Suspended  =    5;
 KernelMode  =    0;
 DeviceUsageTypePaging  =    1;


#line 1482
  pirp = irp;
#line 1483
  _BLAST_init();
  }
#line 1485
  if (status >= 0) {
#line 1486
    s = NP;
#line 1487
    customIrp = 0;
#line 1488
    setEventCalled = customIrp;
#line 1489
    lowerDriverReturn = setEventCalled;
#line 1490
    compRegistered = lowerDriverReturn;
#line 1491
    compFptr = compRegistered;
#line 1492
    pended = compFptr;
#line 1493
    pirp__IoStatus__Status = 0;
#line 1494
    myStatus = 0;
#line 1495
    if (irp_choice == 0) {
#line 1496
      pirp__IoStatus__Status = -1073741637;
#line 1497
      myStatus = -1073741637;
    }
    {
#line 1502
    stub_driver_init();
    }
    {
#line 1504
#line 1504
    if (status < 0) {
#line 1505
      return (-1);
    }
    }
#line 1509
    int tmp_ndt_1;
    tmp_ndt_1 = __VERIFIER_nondet_int();
    if (tmp_ndt_1 == 2) {
      goto switch_5_2;
    } else {
#line 1512
      int tmp_ndt_2;
      tmp_ndt_2 = __VERIFIER_nondet_int();
      if (tmp_ndt_2 == 3) {
        goto switch_5_3;
      } else {
#line 1515
        int tmp_ndt_3;
	tmp_ndt_3 = __VERIFIER_nondet_int();
        if (tmp_ndt_3 == 4) {
          goto switch_5_4;
        } else {
          goto switch_5_default;
#line 1520
          if (0) {
            switch_5_2: 
            {
#line 1523
            status = CdAudioDeviceControl(devobj, pirp);
            }
            goto switch_5_break;
            switch_5_3: 
            {
#line 1528
            status = CdAudioPnp(devobj, pirp);
            }
            goto switch_5_break;
            switch_5_4: 
            {
#line 1533
            status = CdAudioPower(devobj, pirp);
            }
            goto switch_5_break;
            switch_5_default: ;
#line 1537
            return (-1);
          } else {
            switch_5_break: ;
          }
        }
      }
    }
#line 1545
    if (we_should_unload) {
      {
#line 1547
      CdAudioUnload(d);
      }
    }
  }
#line 1555
  if (pended == 1) {
#line 1556
    if (s == NP) {
#line 1557
      s = NP;
    } else {
      goto _L___2;
    }
  } else {
    _L___2: 
#line 1563
    if (pended == 1) {
#line 1564
      if (s == MPR3) {
#line 1565
        s = MPR3;
      } else {
        goto _L___1;
      }
    } else {
      _L___1: 
#line 1571
      if (s != UNLOADED) {
#line 1574
        if (status != -1) {
#line 1577
          if (s != SKIP2) {
#line 1578
            if (s != IPC) {
#line 1579
              if (s != DC) {
                {
#line 1581
                _TRACER_abort(1);
                }
              } else {
                goto _L___0;
              }
            } else {
              goto _L___0;
            }
          } else {
            _L___0: 
#line 1591
            if (pended != 1) {
#line 1594
              if (s == DC) {
#line 1595
                if (status == 259) {
                  {
#line 1597
                  _TRACER_abort(1);
                  }
                }
              } else {
#line 1603
                if (status != lowerDriverReturn) {
                  {
#line 1605
                  _TRACER_abort(1);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
#line 1617
  return (status);
}
}
#line 1620 "cdaudio_simpl1.cil.c"
void stubMoreProcessingRequired(void) 
{ 

  {
#line 1624
  if (s == NP) {
#line 1625
    s = MPR1;
  } else {
    {
#line 1628
    _TRACER_abort(1);
    }
  }
#line 1631
  return;
}
}
#line 1634 "cdaudio_simpl1.cil.c"
int IofCallDriver(int DeviceObject , int Irp ) 
{ int Irp__PendingReturned ;
  // int __VERIFIER_nondet_int() ;
  int returnVal2 ;
  int compRetStatus ;
  int lcontext ;
  unsigned long CIL___Tmp8 ;

  {
#line 1642
  if (compRegistered) {
#line 1643
    if (routine == 0) {
      {
#line 1645
      compRetStatus = HPCdrCompletion(DeviceObject, Irp, lcontext);
      }
    } else {
#line 1648
      if (routine == 1) {
        {
#line 1650
        compRetStatus = CdAudioSignalCompletion(DeviceObject, Irp, lcontext);
        }
      }
    }
    {
#line 1656
    CIL___Tmp8 = (unsigned long )compRetStatus;
#line 1656
    if (CIL___Tmp8 == -1073741802) {
      {
#line 1658
      stubMoreProcessingRequired();
      }
    }
    }
  }
#line 1666
  if (Irp__PendingReturned) {
#line 1667
    returnVal2 = 259;
  } else {
#line 1669
    int tmp_ndt_5;
    tmp_ndt_5 = __VERIFIER_nondet_int();
    if (tmp_ndt_5 == 0) {
      goto switch_6_0;
    } else {
#line 1672
      int tmp_ndt_6;
      tmp_ndt_6 = __VERIFIER_nondet_int();
      if (tmp_ndt_6 == 1) {
        goto switch_6_1;
      } else {
        goto switch_6_default;
#line 1677
        if (0) {
          switch_6_0: 
#line 1679
          returnVal2 = 0;
          goto switch_6_break;
          switch_6_1: 
#line 1682
          returnVal2 = -1073741823;
          goto switch_6_break;
          switch_6_default: 
#line 1685
          returnVal2 = 259;
          goto switch_6_break;
        } else {
          switch_6_break: ;
        }
      }
    }
  }
#line 1694
  if (s == NP) {
#line 1695
    s = IPC;
#line 1696
    lowerDriverReturn = returnVal2;
  } else {
#line 1698
    if (s == MPR1) {
#line 1699
      if (returnVal2 == 259) {
#line 1700
        s = MPR3;
#line 1701
        lowerDriverReturn = returnVal2;
      } else {
#line 1703
        s = NP;
#line 1704
        lowerDriverReturn = returnVal2;
      }
    } else {
#line 1707
      if (s == SKIP1) {
#line 1708
        s = SKIP2;
#line 1709
        lowerDriverReturn = returnVal2;
      } else {
        {
#line 1712
        _TRACER_abort(1);
        }
      }
    }
  }
#line 1717
  return (returnVal2);
}
}
#line 1720 "cdaudio_simpl1.cil.c"
void IofCompleteRequest(int Irp , int PriorityBoost ) 
{ 

  {
#line 1724
  if (s == NP) {
#line 1725
    s = DC;
  } else {
    {
#line 1728
    _TRACER_abort(1);
    }
  }
#line 1731
  return;
}
}
#line 1734 "cdaudio_simpl1.cil.c"
int KeSetEvent(int Event , int Increment , int Wait ) 
{ int l ;

  {
#line 1738
  setEventCalled = 1;
#line 1739
  return (l);
}
}
#line 1742 "cdaudio_simpl1.cil.c"
int KeWaitForSingleObject(int Object , int WaitReason , int WaitMode , int Alertable ,
                          int Timeout ) 
{ // int __VERIFIER_nondet_int() ;

  {
#line 1747
  if (s == MPR3) {
#line 1748
    if (setEventCalled == 1) {
#line 1749
      s = NP;
#line 1750
      setEventCalled = 0;
    } else {
      goto _L;
    }
  } else {
    _L: 
#line 1756
    if (customIrp == 1) {
#line 1757
      s = NP;
#line 1758
      customIrp = 0;
    } else {
#line 1760
      if (s == MPR3) {
        {
#line 1762
        _TRACER_abort(1);
        }
      }
    }
  }
#line 1769
  int tmp_ndt_7; 
  tmp_ndt_7 = __VERIFIER_nondet_int();
  if (tmp_ndt_7 == 0) {
    goto switch_7_0;
  } else {
    goto switch_7_default;
#line 1774
    if (0) {
      switch_7_0: ;
#line 1776
      return (0);
      switch_7_default: ;
#line 1778
      return (-1073741823);
    } else {

    }
  }
}
}
#line 1786 "cdaudio_simpl1.cil.c"
int PoCallDriver(int DeviceObject , int Irp ) 
{ // int __VERIFIER_nondet_int() ;
  int compRetStatus ;
  int returnVal ;
  int lcontext ;
  unsigned long CIL___Tmp7 ;
  long CIL___Tmp8 ;

  {
#line 1793
  if (compRegistered) {
#line 1794
    if (routine == 0) {
      {
#line 1796
      compRetStatus = HPCdrCompletion(DeviceObject, Irp, lcontext);
      }
    } else {
#line 1799
      if (routine == 1) {
        {
#line 1801
        compRetStatus = CdAudioSignalCompletion(DeviceObject, Irp, lcontext);
        }
      }
    }
    {
#line 1807
    CIL___Tmp7 = (unsigned long )compRetStatus;
#line 1807
    if (CIL___Tmp7 == -1073741802) {
      {
#line 1809
      stubMoreProcessingRequired();
      }
    }
    }
  }
#line 1817
  int tmp_ndt_8; 
  tmp_ndt_8 = __VERIFIER_nondet_int();
  if (tmp_ndt_8 == 0) {
    goto switch_8_0;
  } else {
#line 1820
    int tmp_ndt_9; 
    tmp_ndt_9 = __VERIFIER_nondet_int();
    if (tmp_ndt_9 == 1) {
      goto switch_8_1;
    } else {
      goto switch_8_default;
#line 1825
      if (0) {
        switch_8_0: 
#line 1827
        returnVal = 0;
        goto switch_8_break;
        switch_8_1: 
#line 1830
        returnVal = -1073741823;
        goto switch_8_break;
        switch_8_default: 
#line 1833
        returnVal = 259;
        goto switch_8_break;
      } else {
        switch_8_break: ;
      }
    }
  }
#line 1841
  if (s == NP) {
#line 1842
    s = IPC;
#line 1843
    lowerDriverReturn = returnVal;
  } else {
#line 1845
    if (s == MPR1) {
      {
#line 1846
      CIL___Tmp8 = (long )returnVal;
#line 1846
      if (CIL___Tmp8 == 259L) {
#line 1847
        s = MPR3;
#line 1848
        lowerDriverReturn = returnVal;
      } else {
#line 1850
        s = NP;
#line 1851
        lowerDriverReturn = returnVal;
      }
      }
    } else {
#line 1854
      if (s == SKIP1) {
#line 1855
        s = SKIP2;
#line 1856
        lowerDriverReturn = returnVal;
      } else {
        {
#line 1859
        _TRACER_abort(1);
        }
      }
    }
  }
#line 1864
  return (returnVal);
}
}
#line 1867 "cdaudio_simpl1.cil.c"
int ZwClose(int Handle ) 
{ // int __VERIFIER_nondet_int() ;

  {
#line 1871
  int tmp_ndt_10; 
  tmp_ndt_10 = __VERIFIER_nondet_int();
  if (tmp_ndt_10 == 0) {
    goto switch_9_0;
  } else {
    goto switch_9_default;
#line 1876
    if (0) {
      switch_9_0: ;
#line 1878
      return (0);
      switch_9_default: ;
#line 1880
      return (-1073741823);
    } else {

    }
  }
}
}

