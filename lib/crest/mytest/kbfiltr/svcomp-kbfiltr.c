#include <crest.h>
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
extern int ( /* missing proto */  CREST_int)() ;
void _TRACER_assume(int x) { }
void errorFn() {
    exit(1);
    _TRACER_assume(0);
}
void stub_driver_init(void) 
{ 

  {
  s = NP;
  pended = 0;
  compFptr = 0;
  compRegistered = 0;
  lowerDriverReturn = 0;
  setEventCalled = 0;
  customIrp = 0;
  return;
}
}
void _BLAST_init(void) 
{ 

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
  return;
}
}
void IofCompleteRequest(int Irp , int PriorityBoost ) ;
//void _TRACER_abort(int i ) ;
int IofCallDriver(int DeviceObject , int Irp ) ;
int KeWaitForSingleObject(int Object , int WaitReason , int WaitMode , int Alertable , int Timeout ) ;
int KbFilter_PnP(int DeviceObject , int Irp ) 
{ int devExt ;
  int irpStack ;
  int status ;
  int event ;
  int DeviceObject__DeviceExtension ;
  int Irp__Tail__Overlay__CurrentStackLocation ;
  int irpStack__MinorFunction ;
  int devExt__TopOfStack ;
  int devExt__Started ;
  int devExt__Removed ;
  int devExt__SurpriseRemoved ;
  int Irp__IoStatus__Status ;
  int Irp__IoStatus__Information ;
  int Irp__CurrentLocation ;
  int irpSp ;
  int nextIrpSp ;
  int nextIrpSp__Control ;
  int irpSp___0 ;
  int irpSp__Context ;
  int irpSp__Control ;
  int CIL___Tmp23 ;

  {
      CREST_int(CIL___Tmp23);
      CREST_int(irpSp__Control);
      CREST_int(irpSp__Context);
      CREST_int(irpSp___0);
      CREST_int(nextIrpSp__Control);
      CREST_int(nextIrpSp);
      CREST_int(irpSp);
      CREST_int(Irp__CurrentLocation);
      CREST_int(Irp__IoStatus__Information);
      CREST_int(Irp__IoStatus__Status);
      CREST_int(devExt__SurpriseRemoved);
      CREST_int(devExt__Removed);
      CREST_int(devExt__Started);
      CREST_int(devExt__TopOfStack);
      CREST_int(irpStack__MinorFunction);
      CREST_int(Irp__Tail__Overlay__CurrentStackLocation);
      CREST_int(DeviceObject__DeviceExtension);
      CREST_int(event);
      CREST_int(status);
      CREST_int(irpStack);
      CREST_int(devExt);
  status = 0;
  devExt = DeviceObject__DeviceExtension;
  irpStack = Irp__Tail__Overlay__CurrentStackLocation;
  if (irpStack__MinorFunction >= 0) {
    if (irpStack__MinorFunction <= 0) {
      goto myswitch_0_0;
    } else {
      goto my_L___19;
    }
  } else {
    my_L___19: /* CIL Label */ 
    if (irpStack__MinorFunction >= 23) {
      if (irpStack__MinorFunction <= 23) {
        goto myswitch_0_23;
      } else {
        goto my_L___18;
      }
    } else {
      my_L___18: /* CIL Label */ 
      if (irpStack__MinorFunction >= 2) {
        if (irpStack__MinorFunction <= 2) {
          goto myswitch_0_2;
        } else {
          goto my_L___17;
        }
      } else {
        my_L___17: /* CIL Label */ 
        if (irpStack__MinorFunction >= 1) {
          if (irpStack__MinorFunction <= 1) {
            goto myswitch_0_1;
          } else {
            goto my_L___16;
          }
        } else {
          my_L___16: /* CIL Label */ 
          if (irpStack__MinorFunction >= 5) {
            if (irpStack__MinorFunction <= 5) {
              goto myswitch_0_1;
            } else {
              goto my_L___15;
            }
          } else {
            my_L___15: /* CIL Label */ 
            if (irpStack__MinorFunction >= 3) {
              if (irpStack__MinorFunction <= 3) {
                goto myswitch_0_1;
              } else {
                goto my_L___14;
              }
            } else {
              my_L___14: /* CIL Label */ 
              if (irpStack__MinorFunction >= 6) {
                if (irpStack__MinorFunction <= 6) {
                  goto myswitch_0_1;
                } else {
                  goto my_L___13;
                }
              } else {
                my_L___13: /* CIL Label */ 
                if (irpStack__MinorFunction >= 13) {
                  if (irpStack__MinorFunction <= 13) {
                    goto myswitch_0_1;
                  } else {
                    goto my_L___12;
                  }
                } else {
                  my_L___12: /* CIL Label */ 
                  if (irpStack__MinorFunction >= 4) {
                    if (irpStack__MinorFunction <= 4) {
                      goto myswitch_0_1;
                    } else {
                      goto my_L___11;
                    }
                  } else {
                    my_L___11: /* CIL Label */ 
                    if (irpStack__MinorFunction >= 7) {
                      if (irpStack__MinorFunction <= 7) {
                        goto myswitch_0_1;
                      } else {
                        goto my_L___10;
                      }
                    } else {
                      my_L___10: /* CIL Label */ 
                      if (irpStack__MinorFunction >= 8) {
                        if (irpStack__MinorFunction <= 8) {
                          goto myswitch_0_1;
                        } else {
                          goto my_L___9;
                        }
                      } else {
                        my_L___9: /* CIL Label */ 
                        if (irpStack__MinorFunction >= 9) {
                          if (irpStack__MinorFunction <= 9) {
                            goto myswitch_0_1;
                          } else {
                            goto my_L___8;
                          }
                        } else {
                          my_L___8: /* CIL Label */ 
                          if (irpStack__MinorFunction >= 12) {
                            if (irpStack__MinorFunction <= 12) {
                              goto myswitch_0_1;
                            } else {
                              goto my_L___7;
                            }
                          } else {
                            my_L___7: /* CIL Label */ 
                            if (irpStack__MinorFunction >= 10) {
                              if (irpStack__MinorFunction <= 10) {
                                goto myswitch_0_1;
                              } else {
                                goto my_L___6;
                              }
                            } else {
                              my_L___6: /* CIL Label */ 
                              if (irpStack__MinorFunction >= 11) {
                                if (irpStack__MinorFunction <= 11) {
                                  goto myswitch_0_1;
                                } else {
                                  goto my_L___5;
                                }
                              } else {
                                my_L___5: /* CIL Label */ 
                                if (irpStack__MinorFunction >= 15) {
                                  if (irpStack__MinorFunction <= 15) {
                                    goto myswitch_0_1;
                                  } else {
                                    goto my_L___4;
                                  }
                                } else {
                                  my_L___4: /* CIL Label */ 
                                  if (irpStack__MinorFunction >= 16) {
                                    if (irpStack__MinorFunction <= 16) {
                                      goto myswitch_0_1;
                                    } else {
                                      goto my_L___3;
                                    }
                                  } else {
                                    my_L___3: /* CIL Label */ 
                                    if (irpStack__MinorFunction >= 17) {
                                      if (irpStack__MinorFunction <= 17) {
                                        goto myswitch_0_1;
                                      } else {
                                        goto my_L___2;
                                      }
                                    } else {
                                      my_L___2: /* CIL Label */ 
                                      if (irpStack__MinorFunction >= 18) {
                                        if (irpStack__MinorFunction <= 18) {
                                          goto myswitch_0_1;
                                        } else {
                                          goto my_L___1;
                                        }
                                      } else {
                                        my_L___1: /* CIL Label */ 
                                        if (irpStack__MinorFunction >= 19) {
                                          if (irpStack__MinorFunction <= 19) {
                                            goto myswitch_0_1;
                                          } else {
                                            goto my_L___0;
                                          }
                                        } else {
                                          my_L___0: /* CIL Label */ 
                                          if (irpStack__MinorFunction >= 20) {
                                            if (irpStack__MinorFunction <= 20) {
                                              goto myswitch_0_1;
                                            } else {
                                              goto my_L;
                                            }
                                          } else {
                                            my_L: /* CIL Label */ 
                                            goto myswitch_0_1;
                                            if (0) {
                                              myswitch_0_0: 
                                              irpSp = Irp__Tail__Overlay__CurrentStackLocation;
                                              nextIrpSp = Irp__Tail__Overlay__CurrentStackLocation - 1;
                                              nextIrpSp__Control = 0;
                                              if (s < NP) {
                                                errorFn();
                                              } else {
                                                if (s > NP) {
                                                  errorFn();
                                                } else {
                                                  if (compRegistered < 0) {
                                                    errorFn();
                                                  } else {
                                                    if (compRegistered > 0) {
                                                      errorFn();
                                                    } else {
                                                      compRegistered = 1;
                                                    }
                                                  }
                                                }
                                              }
                                              irpSp___0 = Irp__Tail__Overlay__CurrentStackLocation - 1;
                                              irpSp__Control = 224;
                                              status = IofCallDriver(devExt__TopOfStack, Irp);
                                              CIL___Tmp23 = (int )status;
                                              if (CIL___Tmp23 >= 259) {
                                                if (CIL___Tmp23 <= 259) {
                                                  KeWaitForSingleObject(event, Executive, KernelMode, 0, 0);
                                                }
                                              }
                                              if (status >= 0) {
                                                if (myStatus >= 0) {
                                                  devExt__Started = 1;
                                                  devExt__Removed = 0;
                                                  devExt__SurpriseRemoved = 0;
                                                }
                                              }
                                              Irp__IoStatus__Status = status;
                                              myStatus = status;
                                              Irp__IoStatus__Information = 0;
                                              IofCompleteRequest(Irp, 0);
                                              goto myswitch_0_break;
                                              myswitch_0_23: 
                                              devExt__SurpriseRemoved = 1;
                                              if (s >= NP) {
                                                if (s <= NP) {
                                                  s = SKIP1;
                                                } else {
                                                  errorFn();
                                                }
                                              } else {
                                                errorFn();
                                              }
                                              Irp__CurrentLocation = Irp__CurrentLocation + 1;
                                              Irp__Tail__Overlay__CurrentStackLocation = Irp__Tail__Overlay__CurrentStackLocation + 1;
                                              status = IofCallDriver(devExt__TopOfStack, Irp);
                                              goto myswitch_0_break;
                                              myswitch_0_2: 
                                              devExt__Removed = 1;
                                              if (s >= NP) {
                                                if (s <= NP) {
                                                  s = SKIP1;
                                                } else {
                                                  errorFn();
                                                }
                                              } else {
                                                errorFn();
                                              }
                                              Irp__CurrentLocation = Irp__CurrentLocation + 1;
                                              Irp__Tail__Overlay__CurrentStackLocation = Irp__Tail__Overlay__CurrentStackLocation + 1;
                                              IofCallDriver(devExt__TopOfStack, Irp);
                                              status = 0;
                                              goto myswitch_0_break;
                                              myswitch_0_1: ;
                                              if (s >= NP) {
                                                if (s <= NP) {
                                                  s = SKIP1;
                                                } else {
                                                  errorFn();
                                                }
                                              } else {
                                                errorFn();
                                              }
                                              Irp__CurrentLocation = Irp__CurrentLocation + 1;
                                              Irp__Tail__Overlay__CurrentStackLocation = Irp__Tail__Overlay__CurrentStackLocation + 1;
                                              status = IofCallDriver(devExt__TopOfStack, Irp);
                                              goto myswitch_0_break;
                                            } else {
                                              myswitch_0_break: ;
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
  return (status);
}
}
int main(void) 
{ int status ;
  int irp ;
  int pirp ;
  int pirp__IoStatus__Status ;
  int irp_choice ;
  int devobj ;
  int CIL___Tmp8 ;
  int tmp_ndt_1 ;

  {
      CREST_int(tmp_ndt_1);
      CREST_int(CIL___Tmp8);
      CREST_int(devobj);
      CREST_int(irp_choice);
      CREST_int(pirp__IoStatus__Status);
      CREST_int(pirp);
      CREST_int(irp);
      CREST_int(status);
  KernelMode = 0;
  Executive = 0;
  s = 0;
  UNLOADED = 0;
  NP = 0;
  DC = 0;
  SKIP1 = 0;
  SKIP2 = 0;
  MPR1 = 0;
  MPR3 = 0;
  IPC = 0;
  pended = 0;
  compFptr = 0;
  compRegistered = 0;
  lowerDriverReturn = 0;
  setEventCalled = 0;
  customIrp = 0;
  myStatus = 0;
  status = 0;
  pirp = irp;
  _BLAST_init();
  if (status >= 0) {
    s = NP;
    customIrp = 0;
    setEventCalled = customIrp;
    lowerDriverReturn = setEventCalled;
    compRegistered = lowerDriverReturn;
    pended = compRegistered;
    pirp__IoStatus__Status = 0;
    myStatus = 0;
    if (irp_choice >= 0) {
      if (irp_choice <= 0) {
        pirp__IoStatus__Status = -1073741637;
        myStatus = -1073741637;
      }
    }
    stub_driver_init();
    if (status >= 0) {
      CIL___Tmp8 = 1;
    } else {
      CIL___Tmp8 = 0;
    }
    if (CIL___Tmp8 >= 0 && CIL___Tmp8 <= 0) {
      return (-1);
    }
    if (tmp_ndt_1 >= 3) {
      if (tmp_ndt_1 <= 3) {
        goto myswitch_1_3;
      } else {
        goto my_L;
      }
    } else {
      my_L: /* CIL Label */ 
      goto myswitch_1_default;
      if (0) {
        myswitch_1_3: 
        status = KbFilter_PnP(devobj, pirp);
        goto myswitch_1_break;
        myswitch_1_default: ;
        return (-1);
      } else {
        myswitch_1_break: ;
      }
    }
  }
  if (pended >= 1) {
    if (pended <= 1) {
      if (s >= NP) {
        if (s <= NP) {
          s = NP;
        } else {
          goto my_L___7;
        }
      } else {
        goto my_L___7;
      }
    } else {
      goto my_L___7;
    }
  } else {
    my_L___7: /* CIL Label */ 
    myLabel3: 
    if (pended >= 1) {
      if (pended <= 1) {
        if (s >= MPR3) {
          if (s <= MPR3) {
            s = MPR3;
          } else {
            goto my_L___6;
          }
        } else {
          goto my_L___6;
        }
      } else {
        goto my_L___6;
      }
    } else {
      my_L___6: /* CIL Label */ 
      myLabel: 
      if (s < UNLOADED) {
        goto my_L___5;
      } else {
        if (s > UNLOADED) {
          my_L___5: /* CIL Label */ 
          if (status < -1) {
            goto my_L___4;
          } else {
            if (status > -1) {
              my_L___4: /* CIL Label */ 
              if (s < SKIP2) {
                goto my_L___3;
              } else {
                if (s > SKIP2) {
                  my_L___3: /* CIL Label */ 
                  if (s < IPC) {
                    goto my_L___0;
                  } else {
                    if (s > IPC) {
                      my_L___0: /* CIL Label */ 
                      if (s >= DC) {
                        if (s <= DC) {
                          goto myLabel2;
                        }
                      }
                    } else {
                      goto myLabel2;
                    }
                  }
                } else {
                  myLabel2: 
                  if (pended >= 1) {
                    if (pended <= 1) {
                      if (status < 259) {
                        errorFn();
                      } else {
                        if (status > 259) {
                          errorFn();
                        }
                      }
                    } else {
                      goto my_L___2;
                    }
                  } else {
                    my_L___2: /* CIL Label */ 
                    if (s >= DC) {
                      if (s <= DC) {
                        if (status >= 259) {
                          if (status <= 259) {

                          }
                        }
                      } else {
                        goto my_L___1;
                      }
                    } else {
                      my_L___1: /* CIL Label */ 
                      if (status >= lowerDriverReturn) {
                        if (status > lowerDriverReturn) {

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
  return (status);
}
}
void stubMoreProcessingRequired(void) 
{ 

  {
  if (s >= NP) {
    if (s <= NP) {
      s = MPR1;
    } else {
      errorFn();
    }
  } else {
    errorFn();
  }
  return;
}
}
int KbFilter_Complete(int DeviceObject , int Irp , int Context ) ;
int IofCallDriver(int DeviceObject , int Irp ) 
{ int returnVal2 ;
  int compRetStatus ;
  int lcontext ;
  int tmp_ndt_2 ;
  int tmp_ndt_3 ;

  {
      CREST_int(tmp_ndt_3);
      CREST_int(tmp_ndt_2);
      CREST_int(lcontext);
      CREST_int(compRetStatus);
      CREST_int(returnVal2);
  if (compRegistered > 0 || compRegistered < 0) {
    compRetStatus = KbFilter_Complete(DeviceObject, Irp, lcontext);
    stubMoreProcessingRequired();
  }
  if (tmp_ndt_2 >= 0) {
    if (tmp_ndt_2 <= 0) {
      goto myswitch_2_0;
    } else {
      goto my_L___0;
    }
  } else {
    my_L___0: /* CIL Label */ 
    if (tmp_ndt_3 >= 1) {
      if (tmp_ndt_3 <= 1) {
        goto myswitch_2_1;
      } else {
        goto my_L;
      }
    } else {
      my_L: /* CIL Label */ 
      goto myswitch_2_default;
      if (0) {
        myswitch_2_0: 
        returnVal2 = 0;
        goto myswitch_2_break;
        myswitch_2_1: 
        returnVal2 = -1073741823;
        goto myswitch_2_break;
        myswitch_2_default: 
        returnVal2 = 259;
        goto myswitch_2_break;
      } else {
        myswitch_2_break: ;
      }
    }
  }
  if (s >= NP) {
    if (s <= NP) {
      s = IPC;
      lowerDriverReturn = returnVal2;
    } else {
      goto my_L___2;
    }
  } else {
    my_L___2: /* CIL Label */ 
    if (s >= MPR1) {
      if (s <= MPR1) {
        if (returnVal2 >= 259) {
          if (returnVal2 <= 259) {
            s = MPR3;
            lowerDriverReturn = returnVal2;
          } else {
            s = NP;
            lowerDriverReturn = returnVal2;
          }
        } else {
          s = NP;
          lowerDriverReturn = returnVal2;
        }
      } else {
        goto my_L___1;
      }
    } else {
      my_L___1: /* CIL Label */ 
      if (s >= SKIP1) {
        if (s <= SKIP1) {
          s = SKIP2;
          lowerDriverReturn = returnVal2;
        } else {
          errorFn();
        }
      } else {
        errorFn();
      }
    }
  }
  return (returnVal2);
}
}
void IofCompleteRequest(int Irp , int PriorityBoost ) 
{ 

  {
  if (s >= NP) {
    if (s <= NP) {
      s = DC;
    } else {
      errorFn();
    }
  } else {
    errorFn();
  }
  return;
}
}
int KeSetEvent(int Event , int Increment , int Wait ) 
{ int l ;

  {
      CREST_int(l);
  setEventCalled = 1;
  return (l);
}
}
int KeWaitForSingleObject(int Object , int WaitReason , int WaitMode , int Alertable , int Timeout ) 
{ int tmp_ndt_4 ;

  {
      CREST_int(tmp_ndt_4);
  if (s >= MPR3) {
    if (s <= MPR3) {
      if (setEventCalled >= 1) {
        if (setEventCalled <= 1) {
          s = NP;
          setEventCalled = 0;
        } else {
          goto my_L___0;
        }
      } else {
        goto my_L___0;
      }
    } else {
      goto my_L___0;
    }
  } else {
    my_L___0: /* CIL Label */ 
    myLabel4: 
    if (customIrp >= 1) {
      if (customIrp <= 1) {
        s = NP;
        customIrp = 0;
      } else {
        goto my_L;
      }
    } else {
      my_L: /* CIL Label */ 
      if (s >= MPR3) {
        if (s <= MPR3) {
          errorFn();
        }
      }
    }
  }
  if (tmp_ndt_4 >= 0) {
    if (tmp_ndt_4 <= 0) {
      goto myswitch_3_0;
    } else {
      goto my_L___1;
    }
  } else {
    my_L___1: /* CIL Label */ 
    goto myswitch_3_default;
    if (0) {
      myswitch_3_0: 
      return (0);
      myswitch_3_default: ;
      return (-1073741823);
    }
  }
}
}
int KbFilter_Complete(int DeviceObject , int Irp , int Context ) 
{ int event ;

  {
      CREST_int(event);
  event = Context;
  KeSetEvent(event, 0, 0);
  return (-1073741802);
}
}
