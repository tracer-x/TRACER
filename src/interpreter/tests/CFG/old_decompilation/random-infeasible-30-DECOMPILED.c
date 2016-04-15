main() {
		int RetVal;
		int func_main_Sum;
		int func_main_X0;
		int func_main_X1;
		int func_main_X2;
		int func_main_X3;
		int func_main_X4;
		int func_main_X5;
		int func_main_X6;
		int func_main_X7;
		int func_main_X8;
		int func_main_X9;
		int func_main_X10;
		int func_main_X11;
		int func_main_X12;
		int func_main_X13;
		int func_main_X14;
		int func_main_X15;
		int func_main_X16;
		int func_main_X17;
		int func_main_X18;
		int func_main_X19;
		int func_main_X20;
		int func_main_X21;
		int func_main_X22;
		int func_main_X23;
		int func_main_X24;
		int func_main_X25;
		int func_main_X26;
		int func_main_X27;
		int func_main_X28;
		int func_main_X29;
		{
			RetVal = 0;
		}
		func_main_Sum = 0;
		if((func_main_X1 > func_main_X2)) {
			func_main_Sum = (func_main_Sum + 2);
			if((func_main_X2 > func_main_X3)) {
				func_main_Sum = (func_main_Sum + 0);
				if((func_main_X4 > func_main_X3)) {
					func_main_Sum = (func_main_Sum + 1);
L1:					if((func_main_X1 > func_main_X0)) {
						func_main_Sum = (func_main_Sum + 4);
						if((func_main_X0 > func_main_X2)) {
							func_main_Sum = (func_main_Sum + 4);
							func_main_Sum = (func_main_Sum + 0);
							if((func_main_X1 > func_main_X4)) {
								func_main_Sum = (func_main_Sum + 2);
								func_main_Sum = (func_main_Sum + 3);
L2:								func_main_Sum = (func_main_Sum + 3);
								func_main_Sum = (func_main_Sum + 0);
								func_main_Sum = (func_main_Sum + 0);
								func_main_Sum = (func_main_Sum + 4);
L3:								if((func_main_X4 > func_main_X0)) {
									func_main_Sum = (func_main_Sum + 4);
L4:									func_main_Sum = (func_main_Sum + 2);
L5:									func_main_Sum = (func_main_Sum + 3);
L6:									func_main_Sum = (func_main_Sum + 1);
									// BLAST     
								L7:	if (func_main_Sum > 150) ERROR:goto ERROR;
									// TRACER
									//_ABORT((func_main_Sum > 150));
									RetVal = 0;
									return RetVal;
								}
								else {
									goto L4;
								}
							}
							else {
								func_main_Sum = (func_main_Sum + 3);
L8:								func_main_Sum = (func_main_Sum + 0);
								if((func_main_X4 > func_main_X1)) {
									func_main_Sum = (func_main_Sum + 1);
									goto L3;
								}
								else {
									goto L3;
								}
							}
						}
						else {
							func_main_Sum = (func_main_Sum + 0);
							if((func_main_X3 > func_main_X0)) {
								func_main_Sum = (func_main_Sum + 4);
								if((func_main_X1 > func_main_X4)) {
									func_main_Sum = (func_main_Sum + 2);
									func_main_Sum = (func_main_Sum + 2);
									func_main_Sum = (func_main_Sum + 2);
									goto L2;
								}
								else {
									func_main_Sum = (func_main_Sum + 2);
									func_main_Sum = (func_main_Sum + 2);
									goto L8;
								}
							}
							else {
								if((func_main_X1 > func_main_X4)) {
									func_main_Sum = (func_main_Sum + 2);
									goto L2;
								}
								else {
									goto L8;
								}
							}
						}
					}
					else {
						func_main_Sum = (func_main_Sum + 4);
						if((func_main_X1 > func_main_X4)) {
							func_main_Sum = (func_main_Sum + 2);
							func_main_Sum = (func_main_Sum + 3);
							func_main_Sum = (func_main_Sum + 3);
							func_main_Sum = (func_main_Sum + 0);
							func_main_Sum = (func_main_Sum + 0);
							func_main_Sum = (func_main_Sum + 4);
L9:							func_main_Sum = (func_main_Sum + 2);
L10:							func_main_Sum = (func_main_Sum + 3);
L11:							goto L7;
						}
						else {
							func_main_Sum = (func_main_Sum + 3);
							func_main_Sum = (func_main_Sum + 0);
							if((func_main_X4 > func_main_X1)) {
								func_main_Sum = (func_main_Sum + 1);
L12:								if((func_main_X4 > func_main_X0)) {
									func_main_Sum = (func_main_Sum + 4);
									goto L9;
								}
								else {
									goto L9;
								}
							}
							else {
								goto L12;
							}
						}
					}
				}
				else {
					goto L1;
				}
			}
			else {
				if((func_main_X4 > func_main_X3)) {
					func_main_Sum = (func_main_Sum + 1);
					if((func_main_X3 > func_main_X1)) {
						func_main_Sum = (func_main_Sum + 0);
						if((func_main_X1 > func_main_X0)) {
							func_main_Sum = (func_main_Sum + 4);
							if((func_main_X0 > func_main_X2)) {
								func_main_Sum = (func_main_Sum + 4);
								func_main_Sum = (func_main_Sum + 0);
								func_main_Sum = (func_main_Sum + 4);
								func_main_Sum = (func_main_Sum + 2);
								func_main_Sum = (func_main_Sum + 3);
L13:								func_main_Sum = (func_main_Sum + 2);
								func_main_Sum = (func_main_Sum + 0);
								func_main_Sum = (func_main_Sum + 1);
								func_main_Sum = (func_main_Sum + 2);
L14:								func_main_Sum = (func_main_Sum + 4);
L15:								goto L5;
							}
							else {
								func_main_Sum = (func_main_Sum + 0);
								func_main_Sum = (func_main_Sum + 4);
								func_main_Sum = (func_main_Sum + 2);
								goto L13;
							}
						}
						else {
							func_main_Sum = (func_main_Sum + 4);
							if((func_main_X3 > func_main_X0)) {
								func_main_Sum = (func_main_Sum + 4);
								func_main_Sum = (func_main_Sum + 2);
								func_main_Sum = (func_main_Sum + 3);
								func_main_Sum = (func_main_Sum + 2);
								func_main_Sum = (func_main_Sum + 0);
								func_main_Sum = (func_main_Sum + 1);
								func_main_Sum = (func_main_Sum + 2);
L16:								func_main_Sum = (func_main_Sum + 4);
L17:								goto L10;
							}
							else {
								func_main_Sum = (func_main_Sum + 3);
								func_main_Sum = (func_main_Sum + 0);
L18:								func_main_Sum = (func_main_Sum + 1);
L19:								func_main_Sum = (func_main_Sum + 2);
L20:								if((func_main_X4 > func_main_X0)) {
									goto L16;
								}
								else {
									goto L17;
								}
							}
						}
					}
					else {
						if((func_main_X1 > func_main_X0)) {
							func_main_Sum = (func_main_Sum + 4);
							if((func_main_X0 > func_main_X2)) {
								func_main_Sum = (func_main_Sum + 4);
								func_main_Sum = (func_main_Sum + 0);
								if((func_main_X3 > func_main_X0)) {
									func_main_Sum = (func_main_Sum + 4);
									if((func_main_X1 > func_main_X4)) {
										func_main_Sum = (func_main_Sum + 2);
										func_main_Sum = (func_main_Sum + 2);
										func_main_Sum = (func_main_Sum + 3);
L21:										func_main_Sum = (func_main_Sum + 2);
										func_main_Sum = (func_main_Sum + 3);
										func_main_Sum = (func_main_Sum + 0);
										func_main_Sum = (func_main_Sum + 0);
										func_main_Sum = (func_main_Sum + 4);
L22:										goto L14;
									}
									else {
										func_main_Sum = (func_main_Sum + 2);
										func_main_Sum = (func_main_Sum + 3);
L23:										func_main_Sum = (func_main_Sum + 2);
										func_main_Sum = (func_main_Sum + 0);
										if((func_main_X4 > func_main_X1)) {
											func_main_Sum = (func_main_Sum + 1);
											goto L22;
										}
										else {
											goto L22;
										}
									}
								}
								else {
L24:									if((func_main_X1 > func_main_X4)) {
										func_main_Sum = (func_main_Sum + 2);
										func_main_Sum = (func_main_Sum + 3);
L25:L26:										func_main_Sum = (func_main_Sum + 3);
										func_main_Sum = (func_main_Sum + 0);
										func_main_Sum = (func_main_Sum + 0);
										func_main_Sum = (func_main_Sum + 4);
L27:L28:										if((func_main_X4 > func_main_X0)) {
											goto L14;
										}
										else {
											goto L15;
										}
									}
									else {
										func_main_Sum = (func_main_Sum + 3);
L29:L30:										func_main_Sum = (func_main_Sum + 0);
										if((func_main_X4 > func_main_X1)) {
											func_main_Sum = (func_main_Sum + 1);
											goto L27;
										}
										else {
											goto L27;
										}
									}
								}
							}
							else {
								func_main_Sum = (func_main_Sum + 0);
								if((func_main_X3 > func_main_X0)) {
									func_main_Sum = (func_main_Sum + 4);
									if((func_main_X1 > func_main_X4)) {
										func_main_Sum = (func_main_Sum + 2);
										func_main_Sum = (func_main_Sum + 2);
										goto L21;
									}
									else {
										func_main_Sum = (func_main_Sum + 2);
										goto L23;
									}
								}
								else {
L31:									if((func_main_X1 > func_main_X4)) {
										func_main_Sum = (func_main_Sum + 2);
										goto L25;
									}
									else {
										goto L29;
									}
								}
							}
						}
						else {
L32:							func_main_Sum = (func_main_Sum + 4);
							if((func_main_X1 > func_main_X4)) {
								func_main_Sum = (func_main_Sum + 2);
								func_main_Sum = (func_main_Sum + 3);
								func_main_Sum = (func_main_Sum + 3);
								func_main_Sum = (func_main_Sum + 0);
								func_main_Sum = (func_main_Sum + 0);
								func_main_Sum = (func_main_Sum + 4);
L33:								goto L20;
							}
							else {
								func_main_Sum = (func_main_Sum + 3);
								func_main_Sum = (func_main_Sum + 0);
								if((func_main_X4 > func_main_X1)) {
									func_main_Sum = (func_main_Sum + 1);
									goto L33;
								}
								else {
									goto L33;
								}
							}
						}
					}
				}
				else {
					if((func_main_X3 > func_main_X1)) {
						func_main_Sum = (func_main_Sum + 0);
						if((func_main_X1 > func_main_X0)) {
							func_main_Sum = (func_main_Sum + 4);
							if((func_main_X0 > func_main_X2)) {
								func_main_Sum = (func_main_Sum + 4);
								func_main_Sum = (func_main_Sum + 0);
								func_main_Sum = (func_main_Sum + 4);
								if((func_main_X1 > func_main_X4)) {
									func_main_Sum = (func_main_Sum + 2);
									func_main_Sum = (func_main_Sum + 2);
									func_main_Sum = (func_main_Sum + 3);
L34:									func_main_Sum = (func_main_Sum + 2);
									func_main_Sum = (func_main_Sum + 3);
									func_main_Sum = (func_main_Sum + 0);
									func_main_Sum = (func_main_Sum + 0);
									func_main_Sum = (func_main_Sum + 4);
L35:									func_main_Sum = (func_main_Sum + 2);
									goto L28;
								}
								else {
									func_main_Sum = (func_main_Sum + 2);
									func_main_Sum = (func_main_Sum + 3);
L36:									func_main_Sum = (func_main_Sum + 2);
									func_main_Sum = (func_main_Sum + 0);
									if((func_main_X4 > func_main_X1)) {
										func_main_Sum = (func_main_Sum + 1);
										goto L35;
									}
									else {
										goto L35;
									}
								}
							}
							else {
								func_main_Sum = (func_main_Sum + 0);
								func_main_Sum = (func_main_Sum + 4);
								if((func_main_X1 > func_main_X4)) {
									func_main_Sum = (func_main_Sum + 2);
									func_main_Sum = (func_main_Sum + 2);
									goto L34;
								}
								else {
									func_main_Sum = (func_main_Sum + 2);
									goto L36;
								}
							}
						}
						else {
							func_main_Sum = (func_main_Sum + 4);
							if((func_main_X3 > func_main_X0)) {
								func_main_Sum = (func_main_Sum + 4);
								if((func_main_X1 > func_main_X4)) {
									func_main_Sum = (func_main_Sum + 2);
									func_main_Sum = (func_main_Sum + 2);
									func_main_Sum = (func_main_Sum + 3);
									func_main_Sum = (func_main_Sum + 2);
L37:									func_main_Sum = (func_main_Sum + 3);
									func_main_Sum = (func_main_Sum + 0);
									func_main_Sum = (func_main_Sum + 0);
									func_main_Sum = (func_main_Sum + 4);
									goto L19;
								}
								else {
									func_main_Sum = (func_main_Sum + 2);
									func_main_Sum = (func_main_Sum + 3);
									func_main_Sum = (func_main_Sum + 2);
L38:									func_main_Sum = (func_main_Sum + 0);
									if((func_main_X4 > func_main_X1)) {
										goto L18;
									}
									else {
										goto L19;
									}
								}
							}
							else {
								if((func_main_X1 > func_main_X4)) {
									func_main_Sum = (func_main_Sum + 2);
									func_main_Sum = (func_main_Sum + 3);
									goto L37;
								}
								else {
									func_main_Sum = (func_main_Sum + 3);
									goto L38;
								}
							}
						}
					}
					else {
						if((func_main_X1 > func_main_X0)) {
							func_main_Sum = (func_main_Sum + 4);
							if((func_main_X0 > func_main_X2)) {
								func_main_Sum = (func_main_Sum + 4);
								func_main_Sum = (func_main_Sum + 0);
								if((func_main_X3 > func_main_X0)) {
									func_main_Sum = (func_main_Sum + 4);
									if((func_main_X1 > func_main_X4)) {
										func_main_Sum = (func_main_Sum + 2);
										func_main_Sum = (func_main_Sum + 2);
										func_main_Sum = (func_main_Sum + 3);
L39:										func_main_Sum = (func_main_Sum + 2);
										goto L26;
									}
									else {
										func_main_Sum = (func_main_Sum + 2);
										func_main_Sum = (func_main_Sum + 3);
L40:										func_main_Sum = (func_main_Sum + 2);
										goto L30;
									}
								}
								else {
									goto L24;
								}
							}
							else {
								func_main_Sum = (func_main_Sum + 0);
								if((func_main_X3 > func_main_X0)) {
									func_main_Sum = (func_main_Sum + 4);
									if((func_main_X1 > func_main_X4)) {
										func_main_Sum = (func_main_Sum + 2);
										func_main_Sum = (func_main_Sum + 2);
										goto L39;
									}
									else {
										func_main_Sum = (func_main_Sum + 2);
										goto L40;
									}
								}
								else {
									goto L31;
								}
							}
						}
						else {
							goto L32;
						}
					}
				}
			}
		}
		else {
			if((func_main_X2 > func_main_X1)) {
				func_main_Sum = (func_main_Sum + 3);
				if((func_main_X2 > func_main_X3)) {
					func_main_Sum = (func_main_Sum + 0);
					if((func_main_X4 > func_main_X3)) {
						func_main_Sum = (func_main_Sum + 1);
						if((func_main_X3 > func_main_X1)) {
							func_main_Sum = (func_main_Sum + 0);
							if((func_main_X1 > func_main_X0)) {
								func_main_Sum = (func_main_Sum + 4);
								func_main_Sum = (func_main_Sum + 2);
								func_main_Sum = (func_main_Sum + 0);
								func_main_Sum = (func_main_Sum + 4);
								func_main_Sum = (func_main_Sum + 3);
								func_main_Sum = (func_main_Sum + 2);
								func_main_Sum = (func_main_Sum + 2);
								func_main_Sum = (func_main_Sum + 1);
								func_main_Sum = (func_main_Sum + 2);
L41:								func_main_Sum = (func_main_Sum + 4);
L42:								func_main_Sum = (func_main_Sum + 2);
L43:								goto L6;
							}
							else {
								if((func_main_X0 > func_main_X2)) {
									func_main_Sum = (func_main_Sum + 4);
									func_main_Sum = (func_main_Sum + 2);
									func_main_Sum = (func_main_Sum + 3);
									func_main_Sum = (func_main_Sum + 3);
L44:L45:									func_main_Sum = (func_main_Sum + 1);
L46:									func_main_Sum = (func_main_Sum + 2);
L47:									if((func_main_X4 > func_main_X0)) {
										func_main_Sum = (func_main_Sum + 4);
L48:										func_main_Sum = (func_main_Sum + 2);
L49:										goto L11;
									}
									else {
										goto L48;
									}
								}
								else {
									func_main_Sum = (func_main_Sum + 2);
									if((func_main_X3 > func_main_X0)) {
										func_main_Sum = (func_main_Sum + 4);
										func_main_Sum = (func_main_Sum + 3);
										func_main_Sum = (func_main_Sum + 2);
										func_main_Sum = (func_main_Sum + 2);
										goto L44;
									}
									else {
										func_main_Sum = (func_main_Sum + 3);
										goto L44;
									}
								}
							}
						}
						else {
							if((func_main_X1 > func_main_X0)) {
								func_main_Sum = (func_main_Sum + 4);
								func_main_Sum = (func_main_Sum + 2);
								func_main_Sum = (func_main_Sum + 0);
								if((func_main_X3 > func_main_X0)) {
									func_main_Sum = (func_main_Sum + 4);
									func_main_Sum = (func_main_Sum + 3);
									if((func_main_X1 > func_main_X4)) {
L50:										func_main_Sum = (func_main_Sum + 2);
										func_main_Sum = (func_main_Sum + 2);
										func_main_Sum = (func_main_Sum + 2);
										func_main_Sum = (func_main_Sum + 3);
										func_main_Sum = (func_main_Sum + 0);
										func_main_Sum = (func_main_Sum + 4);
L51:										goto L41;
									}
									else {
										func_main_Sum = (func_main_Sum + 2);
										func_main_Sum = (func_main_Sum + 2);
										if((func_main_X4 > func_main_X1)) {
											func_main_Sum = (func_main_Sum + 1);
											goto L51;
										}
										else {
											goto L51;
										}
									}
								}
								else {
L52:									func_main_Sum = (func_main_Sum + 3);
									if((func_main_X1 > func_main_X4)) {
L53:										func_main_Sum = (func_main_Sum + 2);
L54:										func_main_Sum = (func_main_Sum + 3);
										func_main_Sum = (func_main_Sum + 0);
										func_main_Sum = (func_main_Sum + 4);
L55:L56:										if((func_main_X4 > func_main_X0)) {
											goto L41;
										}
										else {
											goto L42;
										}
									}
									else {
L57:										if((func_main_X4 > func_main_X1)) {
											func_main_Sum = (func_main_Sum + 1);
											goto L55;
										}
										else {
											goto L55;
										}
									}
								}
							}
							else {
								if((func_main_X0 > func_main_X2)) {
L58:									func_main_Sum = (func_main_Sum + 4);
									func_main_Sum = (func_main_Sum + 2);
									func_main_Sum = (func_main_Sum + 3);
									if((func_main_X1 > func_main_X4)) {
L59:										func_main_Sum = (func_main_Sum + 2);
										func_main_Sum = (func_main_Sum + 3);
L60:										func_main_Sum = (func_main_Sum + 3);
										func_main_Sum = (func_main_Sum + 0);
										func_main_Sum = (func_main_Sum + 4);
L61:										goto L47;
									}
									else {
										func_main_Sum = (func_main_Sum + 3);
L62:										if((func_main_X4 > func_main_X1)) {
											func_main_Sum = (func_main_Sum + 1);
											goto L61;
										}
										else {
											goto L61;
										}
									}
								}
								else {
									func_main_Sum = (func_main_Sum + 2);
									func_main_Sum = (func_main_Sum + 3);
									if((func_main_X1 > func_main_X4)) {
L63:										func_main_Sum = (func_main_Sum + 2);
										goto L60;
									}
									else {
L64:										goto L62;
									}
								}
							}
						}
					}
					else {
						if((func_main_X3 > func_main_X1)) {
							func_main_Sum = (func_main_Sum + 0);
							if((func_main_X1 > func_main_X0)) {
								func_main_Sum = (func_main_Sum + 4);
								func_main_Sum = (func_main_Sum + 2);
								func_main_Sum = (func_main_Sum + 0);
								func_main_Sum = (func_main_Sum + 4);
								func_main_Sum = (func_main_Sum + 3);
								if((func_main_X1 > func_main_X4)) {
									func_main_Sum = (func_main_Sum + 2);
									func_main_Sum = (func_main_Sum + 2);
									func_main_Sum = (func_main_Sum + 2);
									func_main_Sum = (func_main_Sum + 3);
									func_main_Sum = (func_main_Sum + 0);
									func_main_Sum = (func_main_Sum + 4);
L65:									func_main_Sum = (func_main_Sum + 2);
									goto L56;
								}
								else {
									func_main_Sum = (func_main_Sum + 2);
									func_main_Sum = (func_main_Sum + 2);
									if((func_main_X4 > func_main_X1)) {
										func_main_Sum = (func_main_Sum + 1);
										goto L65;
									}
									else {
										goto L65;
									}
								}
							}
							else {
								if((func_main_X0 > func_main_X2)) {
									func_main_Sum = (func_main_Sum + 4);
									func_main_Sum = (func_main_Sum + 2);
									func_main_Sum = (func_main_Sum + 3);
									if((func_main_X1 > func_main_X4)) {
										func_main_Sum = (func_main_Sum + 2);
										func_main_Sum = (func_main_Sum + 3);
L66:										func_main_Sum = (func_main_Sum + 3);
										func_main_Sum = (func_main_Sum + 0);
										func_main_Sum = (func_main_Sum + 4);
										goto L46;
									}
									else {
										func_main_Sum = (func_main_Sum + 3);
L67:										if((func_main_X4 > func_main_X1)) {
											goto L45;
										}
										else {
											goto L46;
										}
									}
								}
								else {
									func_main_Sum = (func_main_Sum + 2);
									if((func_main_X3 > func_main_X0)) {
										func_main_Sum = (func_main_Sum + 4);
										func_main_Sum = (func_main_Sum + 3);
										if((func_main_X1 > func_main_X4)) {
											func_main_Sum = (func_main_Sum + 2);
											func_main_Sum = (func_main_Sum + 2);
											func_main_Sum = (func_main_Sum + 2);
											goto L66;
										}
										else {
											func_main_Sum = (func_main_Sum + 2);
											func_main_Sum = (func_main_Sum + 2);
											goto L67;
										}
									}
									else {
										func_main_Sum = (func_main_Sum + 3);
										if((func_main_X1 > func_main_X4)) {
											func_main_Sum = (func_main_Sum + 2);
											goto L66;
										}
										else {
											goto L67;
										}
									}
								}
							}
						}
						else {
							if((func_main_X1 > func_main_X0)) {
								func_main_Sum = (func_main_Sum + 4);
								func_main_Sum = (func_main_Sum + 2);
								func_main_Sum = (func_main_Sum + 0);
								if((func_main_X3 > func_main_X0)) {
									func_main_Sum = (func_main_Sum + 4);
									func_main_Sum = (func_main_Sum + 3);
									if((func_main_X1 > func_main_X4)) {
										func_main_Sum = (func_main_Sum + 2);
										func_main_Sum = (func_main_Sum + 2);
										func_main_Sum = (func_main_Sum + 2);
										goto L54;
									}
									else {
										func_main_Sum = (func_main_Sum + 2);
										func_main_Sum = (func_main_Sum + 2);
										goto L57;
									}
								}
								else {
									goto L52;
								}
							}
							else {
								if((func_main_X0 > func_main_X2)) {
									goto L58;
								}
								else {
									func_main_Sum = (func_main_Sum + 2);
									func_main_Sum = (func_main_Sum + 3);
									if((func_main_X1 > func_main_X4)) {
										func_main_Sum = (func_main_Sum + 2);
										goto L60;
									}
									else {
										goto L64;
									}
								}
							}
						}
					}
				}
				else {
					if((func_main_X4 > func_main_X3)) {
						func_main_Sum = (func_main_Sum + 1);
						func_main_Sum = (func_main_Sum + 0);
						if((func_main_X1 > func_main_X0)) {
							func_main_Sum = (func_main_Sum + 4);
							func_main_Sum = (func_main_Sum + 2);
							func_main_Sum = (func_main_Sum + 0);
							func_main_Sum = (func_main_Sum + 4);
							func_main_Sum = (func_main_Sum + 3);
							func_main_Sum = (func_main_Sum + 2);
							func_main_Sum = (func_main_Sum + 2);
							func_main_Sum = (func_main_Sum + 1);
L68:							func_main_Sum = (func_main_Sum + 2);
L69:L70:							func_main_Sum = (func_main_Sum + 4);
L71:							goto L43;
						}
						else {
							if((func_main_X0 > func_main_X2)) {
								func_main_Sum = (func_main_Sum + 4);
								func_main_Sum = (func_main_Sum + 2);
								if((func_main_X3 > func_main_X0)) {
									func_main_Sum = (func_main_Sum + 4);
									func_main_Sum = (func_main_Sum + 3);
									func_main_Sum = (func_main_Sum + 2);
									func_main_Sum = (func_main_Sum + 3);
L72:									func_main_Sum = (func_main_Sum + 2);
									func_main_Sum = (func_main_Sum + 1);
L73:									func_main_Sum = (func_main_Sum + 2);
L74:									func_main_Sum = (func_main_Sum + 4);
L75:									goto L49;
								}
								else {
									func_main_Sum = (func_main_Sum + 3);
									func_main_Sum = (func_main_Sum + 3);
L76:L77:									func_main_Sum = (func_main_Sum + 1);
L78:L79:									func_main_Sum = (func_main_Sum + 2);
L80:									if((func_main_X4 > func_main_X0)) {
										goto L74;
									}
									else {
										goto L75;
									}
								}
							}
							else {
								func_main_Sum = (func_main_Sum + 2);
								if((func_main_X3 > func_main_X0)) {
									func_main_Sum = (func_main_Sum + 4);
									func_main_Sum = (func_main_Sum + 3);
									func_main_Sum = (func_main_Sum + 2);
									goto L72;
								}
								else {
									func_main_Sum = (func_main_Sum + 3);
									goto L76;
								}
							}
						}
					}
					else {
						func_main_Sum = (func_main_Sum + 0);
						if((func_main_X1 > func_main_X0)) {
							func_main_Sum = (func_main_Sum + 4);
							func_main_Sum = (func_main_Sum + 2);
							func_main_Sum = (func_main_Sum + 0);
							func_main_Sum = (func_main_Sum + 4);
							func_main_Sum = (func_main_Sum + 3);
							if((func_main_X1 > func_main_X4)) {
								func_main_Sum = (func_main_Sum + 2);
								func_main_Sum = (func_main_Sum + 2);
								func_main_Sum = (func_main_Sum + 2);
								func_main_Sum = (func_main_Sum + 3);
								func_main_Sum = (func_main_Sum + 0);
								func_main_Sum = (func_main_Sum + 4);
L81:L82:								func_main_Sum = (func_main_Sum + 2);
L83:								if((func_main_X4 > func_main_X0)) {
									goto L70;
								}
								else {
									goto L71;
								}
							}
							else {
								func_main_Sum = (func_main_Sum + 2);
								func_main_Sum = (func_main_Sum + 2);
								if((func_main_X4 > func_main_X1)) {
									func_main_Sum = (func_main_Sum + 1);
									goto L81;
								}
								else {
									goto L81;
								}
							}
						}
						else {
							if((func_main_X0 > func_main_X2)) {
								func_main_Sum = (func_main_Sum + 4);
								func_main_Sum = (func_main_Sum + 2);
								if((func_main_X3 > func_main_X0)) {
									func_main_Sum = (func_main_Sum + 4);
									func_main_Sum = (func_main_Sum + 3);
									if((func_main_X1 > func_main_X4)) {
										func_main_Sum = (func_main_Sum + 2);
										func_main_Sum = (func_main_Sum + 2);
										func_main_Sum = (func_main_Sum + 3);
L84:										func_main_Sum = (func_main_Sum + 2);
L85:										func_main_Sum = (func_main_Sum + 3);
										func_main_Sum = (func_main_Sum + 0);
										func_main_Sum = (func_main_Sum + 4);
										goto L78;
									}
									else {
										func_main_Sum = (func_main_Sum + 2);
										func_main_Sum = (func_main_Sum + 3);
L86:										func_main_Sum = (func_main_Sum + 2);
L87:										if((func_main_X4 > func_main_X1)) {
											goto L77;
										}
										else {
											goto L78;
										}
									}
								}
								else {
									func_main_Sum = (func_main_Sum + 3);
									if((func_main_X1 > func_main_X4)) {
										func_main_Sum = (func_main_Sum + 2);
										func_main_Sum = (func_main_Sum + 3);
L88:										goto L85;
									}
									else {
										func_main_Sum = (func_main_Sum + 3);
L89:										goto L87;
									}
								}
							}
							else {
								func_main_Sum = (func_main_Sum + 2);
								if((func_main_X3 > func_main_X0)) {
									func_main_Sum = (func_main_Sum + 4);
									func_main_Sum = (func_main_Sum + 3);
									if((func_main_X1 > func_main_X4)) {
										func_main_Sum = (func_main_Sum + 2);
										func_main_Sum = (func_main_Sum + 2);
										goto L84;
									}
									else {
										func_main_Sum = (func_main_Sum + 2);
										goto L86;
									}
								}
								else {
									func_main_Sum = (func_main_Sum + 3);
									if((func_main_X1 > func_main_X4)) {
										func_main_Sum = (func_main_Sum + 2);
										goto L88;
									}
									else {
										goto L89;
									}
								}
							}
						}
					}
				}
			}
			else {
				if((func_main_X2 > func_main_X3)) {
					func_main_Sum = (func_main_Sum + 0);
					if((func_main_X4 > func_main_X3)) {
						func_main_Sum = (func_main_Sum + 1);
						if((func_main_X1 > func_main_X0)) {
							func_main_Sum = (func_main_Sum + 4);
							func_main_Sum = (func_main_Sum + 0);
							if((func_main_X3 > func_main_X0)) {
								func_main_Sum = (func_main_Sum + 4);
								if((func_main_X1 > func_main_X4)) {
									goto L50;
								}
								else {
									func_main_Sum = (func_main_Sum + 2);
									func_main_Sum = (func_main_Sum + 2);
									if((func_main_X4 > func_main_X1)) {
										func_main_Sum = (func_main_Sum + 1);
										goto L51;
									}
									else {
										goto L51;
									}
								}
							}
							else {
L90:								if((func_main_X1 > func_main_X4)) {
									goto L53;
								}
								else {
									if((func_main_X4 > func_main_X1)) {
										func_main_Sum = (func_main_Sum + 1);
										goto L55;
									}
									else {
										goto L55;
									}
								}
							}
						}
						else {
							if((func_main_X0 > func_main_X2)) {
L91:								func_main_Sum = (func_main_Sum + 4);
								if((func_main_X1 > func_main_X4)) {
									goto L59;
								}
								else {
									func_main_Sum = (func_main_Sum + 3);
L92:									if((func_main_X4 > func_main_X1)) {
										func_main_Sum = (func_main_Sum + 1);
										goto L61;
									}
									else {
										goto L61;
									}
								}
							}
							else {
								if((func_main_X1 > func_main_X4)) {
									goto L63;
								}
								else {
									goto L92;
								}
							}
						}
					}
					else {
						if((func_main_X1 > func_main_X0)) {
							func_main_Sum = (func_main_Sum + 4);
							func_main_Sum = (func_main_Sum + 0);
							if((func_main_X3 > func_main_X0)) {
								func_main_Sum = (func_main_Sum + 4);
								func_main_Sum = (func_main_Sum + 2);
								func_main_Sum = (func_main_Sum + 2);
								func_main_Sum = (func_main_Sum + 2);
								goto L54;
							}
							else {
								goto L90;
							}
						}
						else {
							if((func_main_X0 > func_main_X2)) {
								goto L91;
							}
							else {
								func_main_Sum = (func_main_Sum + 2);
								goto L60;
							}
						}
					}
				}
				else {
					if((func_main_X4 > func_main_X3)) {
						func_main_Sum = (func_main_Sum + 1);
						if((func_main_X3 > func_main_X1)) {
							func_main_Sum = (func_main_Sum + 0);
							if((func_main_X1 > func_main_X0)) {
								func_main_Sum = (func_main_Sum + 4);
								func_main_Sum = (func_main_Sum + 0);
								func_main_Sum = (func_main_Sum + 4);
								func_main_Sum = (func_main_Sum + 2);
								func_main_Sum = (func_main_Sum + 2);
								func_main_Sum = (func_main_Sum + 1);
								goto L68;
							}
							else {
								if((func_main_X0 > func_main_X2)) {
									func_main_Sum = (func_main_Sum + 4);
									if((func_main_X3 > func_main_X0)) {
										func_main_Sum = (func_main_Sum + 4);
										func_main_Sum = (func_main_Sum + 2);
										func_main_Sum = (func_main_Sum + 3);
L93:										func_main_Sum = (func_main_Sum + 2);
										func_main_Sum = (func_main_Sum + 1);
										goto L73;
									}
									else {
										func_main_Sum = (func_main_Sum + 3);
L94:										func_main_Sum = (func_main_Sum + 1);
L95:										goto L79;
									}
								}
								else {
									func_main_Sum = (func_main_Sum + 4);
									func_main_Sum = (func_main_Sum + 2);
									goto L93;
								}
							}
						}
						else {
							if((func_main_X1 > func_main_X0)) {
								func_main_Sum = (func_main_Sum + 4);
								func_main_Sum = (func_main_Sum + 0);
								func_main_Sum = (func_main_Sum + 4);
								func_main_Sum = (func_main_Sum + 2);
								func_main_Sum = (func_main_Sum + 2);
								func_main_Sum = (func_main_Sum + 1);
								goto L69;
							}
							else {
								if((func_main_X0 > func_main_X2)) {
									func_main_Sum = (func_main_Sum + 4);
									func_main_Sum = (func_main_Sum + 3);
L96:									func_main_Sum = (func_main_Sum + 1);
L97:									goto L80;
								}
								else {
									goto L96;
								}
							}
						}
					}
					else {
						if((func_main_X3 > func_main_X1)) {
							func_main_Sum = (func_main_Sum + 0);
							if((func_main_X1 > func_main_X0)) {
								func_main_Sum = (func_main_Sum + 4);
								func_main_Sum = (func_main_Sum + 0);
								func_main_Sum = (func_main_Sum + 4);
								if((func_main_X1 > func_main_X4)) {
									func_main_Sum = (func_main_Sum + 2);
									func_main_Sum = (func_main_Sum + 2);
									func_main_Sum = (func_main_Sum + 2);
									func_main_Sum = (func_main_Sum + 3);
									func_main_Sum = (func_main_Sum + 0);
									func_main_Sum = (func_main_Sum + 4);
L98:									goto L82;
								}
								else {
									func_main_Sum = (func_main_Sum + 2);
									func_main_Sum = (func_main_Sum + 2);
									if((func_main_X4 > func_main_X1)) {
										func_main_Sum = (func_main_Sum + 1);
										goto L98;
									}
									else {
										goto L98;
									}
								}
							}
							else {
								if((func_main_X0 > func_main_X2)) {
									func_main_Sum = (func_main_Sum + 4);
									if((func_main_X3 > func_main_X0)) {
										func_main_Sum = (func_main_Sum + 4);
										if((func_main_X1 > func_main_X4)) {
											func_main_Sum = (func_main_Sum + 2);
											func_main_Sum = (func_main_Sum + 2);
											func_main_Sum = (func_main_Sum + 3);
L99:											func_main_Sum = (func_main_Sum + 2);
L100:											func_main_Sum = (func_main_Sum + 3);
											func_main_Sum = (func_main_Sum + 0);
											func_main_Sum = (func_main_Sum + 4);
											goto L95;
										}
										else {
											func_main_Sum = (func_main_Sum + 2);
											func_main_Sum = (func_main_Sum + 3);
L101:											func_main_Sum = (func_main_Sum + 2);
L102:											if((func_main_X4 > func_main_X1)) {
												goto L94;
											}
											else {
												goto L95;
											}
										}
									}
									else {
										if((func_main_X1 > func_main_X4)) {
											func_main_Sum = (func_main_Sum + 2);
											func_main_Sum = (func_main_Sum + 3);
											goto L100;
										}
										else {
											func_main_Sum = (func_main_Sum + 3);
											goto L102;
										}
									}
								}
								else {
									func_main_Sum = (func_main_Sum + 4);
									if((func_main_X1 > func_main_X4)) {
										func_main_Sum = (func_main_Sum + 2);
										func_main_Sum = (func_main_Sum + 2);
										goto L99;
									}
									else {
										func_main_Sum = (func_main_Sum + 2);
										goto L101;
									}
								}
							}
						}
						else {
							if((func_main_X1 > func_main_X0)) {
								func_main_Sum = (func_main_Sum + 4);
								func_main_Sum = (func_main_Sum + 0);
								func_main_Sum = (func_main_Sum + 4);
								if((func_main_X1 > func_main_X4)) {
									func_main_Sum = (func_main_Sum + 2);
									func_main_Sum = (func_main_Sum + 2);
									func_main_Sum = (func_main_Sum + 2);
									func_main_Sum = (func_main_Sum + 3);
									func_main_Sum = (func_main_Sum + 0);
									func_main_Sum = (func_main_Sum + 4);
L103:									goto L83;
								}
								else {
									func_main_Sum = (func_main_Sum + 2);
									func_main_Sum = (func_main_Sum + 2);
									goto L103;
								}
							}
							else {
								if((func_main_X0 > func_main_X2)) {
									func_main_Sum = (func_main_Sum + 4);
									if((func_main_X1 > func_main_X4)) {
										func_main_Sum = (func_main_Sum + 2);
										func_main_Sum = (func_main_Sum + 3);
L104:										func_main_Sum = (func_main_Sum + 3);
										func_main_Sum = (func_main_Sum + 0);
										func_main_Sum = (func_main_Sum + 4);
L105:										goto L97;
									}
									else {
										func_main_Sum = (func_main_Sum + 3);
L106:										goto L105;
									}
								}
								else {
									if((func_main_X1 > func_main_X4)) {
										func_main_Sum = (func_main_Sum + 2);
										goto L104;
									}
									else {
										goto L106;
									}
								}
							}
						}
					}
				}
			}
		}
}
