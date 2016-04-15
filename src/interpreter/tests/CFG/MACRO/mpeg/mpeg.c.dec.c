extern int clock ;
extern int inbit ;
extern int isinbit ;
extern int isfull ;
extern int outbit ;
extern int isoutbit ;
extern int curr_block[64] ;
extern int pred_block[64] ;
extern int temp_block[64] ;
extern int picture_type ;
extern int mb_type ;
extern int b_num ;
extern int scan[64] ;
extern int intra_quant[64] ;
extern int non_intra_quant[64] ;
extern int quantizer_scale ;
extern int past_intra_address ;
extern int macroblock_address ;
extern int dct_zz[64] ;
extern int dct_dc_y_past ;
extern int dct_dc_cb_past ;
extern int dct_dc_cr_past ;
extern int idct_coeff[64] ;
extern int set_prev_values ;
extern int is_for_info ;
extern int full_pel_forward_vector ;
extern int forward_f ;
extern int complement_horizontal_forward_r ;
extern int complement_vertical_forward_r ;
extern int motion_horizontal_forward_code ;
extern int motion_vertical_forward_code ;
extern int recon_right_for_prev ;
extern int recon_down_for_prev ;
extern int is_back_info ;
extern int full_pel_backward_vector ;
extern int backward_f ;
extern int complement_horizontal_backward_r ;
extern int complement_vertical_backward_r ;
extern int motion_horizontal_backward_code ;
extern int motion_vertical_backward_code ;
extern int recon_right_back_prev ;
extern int recon_down_back_prev ;
extern int storage[64] ;
extern int previous_picture ;
extern int future_picture ;
extern int getinbuffer ;
extern int getbits ;
extern int to_receive ;
extern int look_only ;
extern int setoutbuffer ;
extern int putbits ;
extern int to_transmit ;
extern int vld_length[50] ;
extern int vld_bits[50] ;
extern int mb_inc[50] ;
extern int table2b2aq[50] ;
extern int table2b2bq[50] ;
extern int table2b2cq[50] ;
extern int table2b2af[50] ;
extern int table2b2bf[50] ;
extern int table2b2cf[50] ;
extern int table2b2ab[50] ;
extern int table2b2bb[50] ;
extern int table2b2cb[50] ;
extern int table2b2ai[50] ;
extern int table2b2bi[50] ;
extern int table2b2ci[50] ;
extern int table2b4[50] ;
extern int table2b5a[50] ;
extern int table2b5b[50] ;
extern int right_little ;
extern int right_big ;
extern int down_little ;
extern int down_big ;
extern int right_for ;
extern int down_for ;
extern int right_half_for ;
extern int down_half_for ;
extern int right_back ;
extern int down_back ;
extern int right_half_back ;
extern int down_half_back ;
extern int min ;
extern int max ;
extern int new_vector ;
extern int recon_right_for ;
extern int recon_down_for ;
extern int recon_right_back ;
extern int recon_down_back ;
extern int pred_temp_bit_vector ;
extern int b_00 ;
extern int b_01 ;
extern int b_10 ;
extern int p_i0 ;
extern int p_i1 ;
extern int p_j0 ;
extern int p_j1 ;
extern int read_done ;
extern int read_int ;
extern int vld_found ;
extern int vld_size ;
void init(void)
{
	/* END OF PATH at func_init@p1#1 */
}

void inbuffer(void)
{ register int status ;
register int iobuffer_in ;
register int iobuf_hd_in ;
register int iobuf_tl_in ;
register int iobuf_look ;
register int i ;
	status = 0;
	iobuf_hd_in = 0;
	iobuf_tl_in = 0;
	iobuf_look = 0;
	i = 0;
L1:;
L2:;
	if(i >= 5) {
L3:;
		/* END OF PATH at func_inbuffer@p51#1 */
	}
	else {
		if(isinbit == 1) {
			if((iobuf_hd_in + 1) % 256 < iobuf_tl_in) {
L4:;
				iobuffer_in = inbit;
				iobuf_hd_in = (iobuf_hd_in + 1) % 256;
L5:;
				if((iobuf_hd_in + 1) % 256 == iobuf_tl_in) {
					isfull = 1;
L6:;
					if(status == 0) {
						if(getbits > 0) {
							to_receive = getbits;
							iobuf_look = iobuf_tl_in;
							status = 1;
L7:;
L8:;
							i = i + 1;
							goto L2;
						}
						else {
							goto L7;
						}
					}
					else if(status < 0) {
						if(status < 1) {
							if(status < 2) {
								goto L8;
							}
							else if(status == 2) {
								/* FALSE PATH */ 
							}
							else {
								/* FALSE PATH */ 
							}
						}
						else if(status == 1) {
							/* FALSE PATH */ 
						}
						else {
							/* FALSE PATH */ 
						}
					}
					else {
						if(status == 1) {
L9:;
L10:;
							if(to_receive < 0) {
L11:;
								if(iobuf_look == iobuf_hd_in) {
L12:;
L13:;
									if(to_receive == 0) {
										status = 2;
L14:;
										goto L8;
									}
									else if(to_receive < 0) {
										goto L14;
									}
									else {
										goto L14;
									}
								}
								else if(iobuf_look < iobuf_hd_in) {
L15:;
									getinbuffer = iobuffer_in;
									iobuf_look = (iobuf_look + 1) % 256;
									to_receive = to_receive - 1;
									goto L10;
								}
								else {
									goto L15;
								}
							}
							else if(to_receive > 0) {
								goto L11;
							}
							else {
								/* END OF PATH at func_inbuffer@p29#3 */
							}
						}
						else if(status < 1) {
							if(status < 2) {
								goto L8;
							}
							else if(status == 2) {
								/* FALSE PATH */ 
							}
							else {
								/* FALSE PATH */ 
							}
						}
						else {
							if(status == 2) {
								if(look_only == 0) {
									iobuf_tl_in = iobuf_look;
L16:;
									if(getbits == 0) {
										to_receive = -1;
										status = 0;
										goto L8;
									}
									else if(getbits < 0) {
										goto L8;
									}
									else {
										goto L8;
									}
								}
								else if(look_only < 0) {
									goto L16;
								}
								else {
									goto L16;
								}
							}
							else if(status < 2) {
								goto L8;
							}
							else {
								goto L8;
							}
						}
					}
				}
				else if((iobuf_hd_in + 1) % 256 < iobuf_tl_in) {
L17:;
					isfull = 0;
					goto L6;
				}
				else {
					goto L17;
				}
			}
			else if((iobuf_hd_in + 1) % 256 > iobuf_tl_in) {
				goto L4;
			}
			else {
				goto L5;
			}
		}
		else if(isinbit < 1) {
			goto L5;
		}
		else {
			goto L5;
		}
	}
}

void read_bits(int amount )
{
	if(read_done == 1) {
		read_done = 0;
		look_only = 0;
		getbits = amount;
L1:;
		/* END OF PATH at func_read_bits@p11#1 */
	}
	else if(read_done < 1) {
L2:;
		if(read_done == 0) {
			if(to_receive == 0) {
				read_int = getinbuffer;
				getbits = 0;
				read_done = 1;
				goto L1;
			}
			else if(to_receive < 0) {
				goto L1;
			}
			else {
				goto L1;
			}
		}
		else if(read_done < 0) {
			goto L1;
		}
		else {
			goto L1;
		}
	}
	else {
		goto L2;
	}
}

void look_bits(int amount )
{
	if(read_done == 1) {
		read_done = 0;
		look_only = 1;
		getbits = amount;
L1:;
		/* END OF PATH at func_look_bits@p11#1 */
	}
	else if(read_done < 1) {
L2:;
		if(read_done == 0) {
			if(to_receive == 0) {
				read_int = getinbuffer;
				getbits = 0;
				read_done = 1;
				goto L1;
			}
			else if(to_receive < 0) {
				goto L1;
			}
			else {
				goto L1;
			}
		}
		else if(read_done < 0) {
			goto L1;
		}
		else {
			goto L1;
		}
	}
	else {
		goto L2;
	}
}

void next_vld(int start , int max_next_vld )
{ register int i ;
register int vld_read ;
	if(vld_found >= 0) {
		vld_found = -1;
		vld_size = start - 1;
L1:;
		if(vld_size == max_next_vld) {
			/* END OF PATH at func_next_vld@p7#1 */
		}
		else if(vld_size < max_next_vld) {
			look_bits(vld_size + 1);
L2:;
			if(read_done == 1) {
				vld_size = vld_size + 1;
				i = 0;
L3:;
L4:;
				if(i > vld_size - 1) {
L5:;
					i = 0;
L6:;
L7:;
					if(i >= 50) {
L8:;
L9:;
						/* END OF PATH at func_next_vld@p30#1 */
					}
					else {
						if(vld_length[i] == vld_size) {
							if(vld_read == vld_bits[i]) {
								vld_found = i;
								i = 49;
L10:;
L11:;
								i = i + 1;
								goto L7;
							}
							else if(vld_read < vld_bits[i]) {
								goto L10;
							}
							else {
								goto L10;
							}
						}
						else if(vld_length[i] < vld_size) {
L12:;
							if(vld_length[i] > vld_size) {
								i = 49;
								goto L11;
							}
							else {
								goto L11;
							}
						}
						else {
							goto L12;
						}
					}
				}
				else {
					vld_read = getinbuffer;
					i = i + 1;
					goto L4;
				}
			}
			else if(read_done < 1) {
				goto L9;
			}
			else {
				goto L9;
			}
		}
		else {
			look_bits(vld_size + 1);
			goto L2;
		}
	}
	else {
		goto L1;
	}
}

void vldcontrol(void)
{ register int i ;
register int dct_dc_differential ;
register int forward_f_code ;
register int forward_r_size ;
register int motion_horizontal_forward_r ;
register int motion_vertical_forward_r ;
register int backward_f_code ;
register int backward_r_size ;
register int motion_horizontal_backward_r ;
register int motion_vertical_backward_r ;
register int data_type ;
register int data_stat ;
register int reading_zz ;
register int run ;
register int level ;
register int is_mb_quant ;
register int is_mb_intra ;
register int count ;
register int vld_temp ;
register int temp ;
	data_type = 0;
	data_stat = 0;
	read_done = 1;
	vld_found = 0;
	if(data_type < 7) {
L1:;
L2:;
		if(data_type >= 7) {
L3:;
			/* END OF PATH at func_vldcontrol@p563#1 */
		}
		else {
			if(clock == 1) {
				if(data_type == 0) {
					read_bits(32);
					if(read_done == 1) {
						data_stat = 0;
						if(read_int == 435) {
							data_type = 1;
L4:;
L5:;
							goto L2;
						}
						else if(read_int == 440) {
							data_type = 2;
							goto L4;
						}
						else if(read_int < 435) {
L6:;
							if(read_int == 256) {
								data_type = 3;
L7:;
								goto L4;
							}
							else if(read_int < 256) {
L8:;
								data_type = 4;
								goto L7;
							}
							else {
								goto L8;
							}
						}
						else if(read_int > 435 && read_int < 440) {
							goto L6;
						}
						else {
							goto L6;
						}
					}
					else if(read_done < 1) {
						goto L5;
					}
					else {
						goto L5;
					}
				}
				else if(data_type < 0) {
					if(data_type < 1) {
						if(data_type < 2) {
							if(data_type < 3) {
								if(data_stat == 2) {
									read_bits(4);
L9:;
									if(read_done == 1) {
										full_pel_forward_vector = getinbuffer;
										forward_f_code = getinbuffer;
										forward_r_size = forward_f_code - 1;
										vld_temp = 1;
										vld_temp = vld_temp * forward_r_size;
										forward_f = vld_temp;
										if(picture_type == 2) {
											data_stat = 3;
L10:;
											/* END OF PATH at func_vldcontrol@p561#2 */
										}
										else if(picture_type < 2) {
L11:;
											data_type = 0;
											goto L10;
										}
										else {
											goto L11;
										}
									}
									else if(read_done < 1) {
										goto L10;
									}
									else {
										goto L10;
									}
								}
								else if(data_stat < 2) {
									if(data_stat < 3) {
L12:;
										if(data_type < 4) {
											if(data_type < 5) {
												if(data_type < 6) {
													/* END OF PATH at func_vldcontrol@p561#3 */
												}
												else if(data_type == 6) {
													/* FALSE PATH */ 
												}
												else {
													/* FALSE PATH */ 
												}
											}
											else if(data_type == 5) {
												/* FALSE PATH */ 
											}
											else {
												/* FALSE PATH */ 
											}
										}
										else if(data_type == 4) {
											/* FALSE PATH */ 
										}
										else {
											/* FALSE PATH */ 
										}
									}
									else if(data_stat == 3) {
										/* FALSE PATH */ 
									}
									else {
										/* FALSE PATH */ 
									}
								}
								else {
									if(data_stat == 3) {
										read_bits(4);
L13:;
										if(read_done == 1) {
											full_pel_backward_vector = getinbuffer;
											backward_f_code = getinbuffer;
											backward_r_size = backward_f_code - 1;
											vld_temp = 1;
											vld_temp = vld_temp * backward_r_size;
											backward_f = vld_temp;
											data_type = 0;
L14:;
											/* END OF PATH at func_vldcontrol@p561#5 */
										}
										else if(read_done < 1) {
											goto L14;
										}
										else {
											goto L14;
										}
									}
									else if(data_stat < 3) {
										goto L12;
									}
									else {
										goto L12;
									}
								}
							}
							else if(data_type == 3) {
								/* FALSE PATH */ 
							}
							else {
								/* FALSE PATH */ 
							}
						}
						else if(data_type == 2) {
							/* FALSE PATH */ 
						}
						else {
							/* FALSE PATH */ 
						}
					}
					else if(data_type == 1) {
						/* FALSE PATH */ 
					}
					else {
						/* FALSE PATH */ 
					}
				}
				else {
					if(data_type == 1) {
						if(data_stat == 0) {
							read_bits(1);
							if(read_done == 1) {
								if(getinbuffer == 1) {
									data_stat = 1;
									count = 64;
L15:;
L16:;
									/* END OF PATH at func_vldcontrol@p561#6 */
								}
								else if(getinbuffer < 1) {
L17:;
									data_stat = 2;
									goto L15;
								}
								else {
									goto L17;
								}
							}
							else if(read_done < 1) {
								goto L15;
							}
							else {
								goto L15;
							}
						}
						else if(data_stat < 0) {
							if(data_stat < 1) {
								if(data_stat < 2) {
									if(data_stat < 3) {
										goto L16;
									}
									else if(data_stat == 3) {
										/* FALSE PATH */ 
									}
									else {
										/* FALSE PATH */ 
									}
								}
								else if(data_stat == 2) {
									/* FALSE PATH */ 
								}
								else {
									/* FALSE PATH */ 
								}
							}
							else if(data_stat == 1) {
								/* FALSE PATH */ 
							}
							else {
								/* FALSE PATH */ 
							}
						}
						else {
							if(data_stat == 1) {
								read_bits(8);
								if(read_done == 1) {
									temp = scan[64 - count];
									intra_quant[temp] = read_int;
									count = count - 1;
									if(count == 0) {
										data_stat = 2;
L18:;
										goto L16;
									}
									else if(count < 0) {
										goto L18;
									}
									else {
										goto L18;
									}
								}
								else if(read_done < 1) {
									goto L18;
								}
								else {
									goto L18;
								}
							}
							else if(data_stat < 1) {
								if(data_stat < 2) {
									if(data_stat < 3) {
										goto L16;
									}
									else if(data_stat == 3) {
										/* FALSE PATH */ 
									}
									else {
										/* FALSE PATH */ 
									}
								}
								else if(data_stat == 2) {
									/* FALSE PATH */ 
								}
								else {
									/* FALSE PATH */ 
								}
							}
							else {
								if(data_stat == 2) {
									read_bits(1);
									if(read_done == 1) {
										if(getinbuffer == 1) {
											data_stat = 3;
											count = 64;
L19:;
											goto L16;
										}
										else if(getinbuffer < 1) {
L20:;
											data_type = 0;
											goto L19;
										}
										else {
											goto L20;
										}
									}
									else if(read_done < 1) {
										goto L19;
									}
									else {
										goto L19;
									}
								}
								else if(data_stat < 2) {
									if(data_stat < 3) {
										goto L16;
									}
									else if(data_stat == 3) {
										/* FALSE PATH */ 
									}
									else {
										/* FALSE PATH */ 
									}
								}
								else {
									if(data_stat == 3) {
										read_bits(8);
										if(read_done == 1) {
											temp = scan[64 - count];
											non_intra_quant[temp] = read_int;
											count = count - 1;
											if(count == 0) {
												data_type = 0;
												goto L16;
											}
											else if(count < 0) {
												goto L16;
											}
											else {
												goto L16;
											}
										}
										else if(read_done < 1) {
											goto L16;
										}
										else {
											goto L16;
										}
									}
									else if(data_stat < 3) {
										goto L16;
									}
									else {
										goto L16;
									}
								}
							}
						}
					}
					else if(data_type < 1) {
						if(data_type < 2) {
							if(data_type < 3) {
								if(data_stat == 2) {
									read_bits(4);
									goto L9;
								}
								else if(data_stat < 2) {
									if(data_stat < 3) {
L21:;
										if(data_type < 4) {
											if(data_type < 5) {
												if(data_type < 6) {
													/* END OF PATH at func_vldcontrol@p561#7 */
												}
												else if(data_type == 6) {
													/* FALSE PATH */ 
												}
												else {
													/* FALSE PATH */ 
												}
											}
											else if(data_type == 5) {
												/* FALSE PATH */ 
											}
											else {
												/* FALSE PATH */ 
											}
										}
										else if(data_type == 4) {
											/* FALSE PATH */ 
										}
										else {
											/* FALSE PATH */ 
										}
									}
									else if(data_stat == 3) {
										/* FALSE PATH */ 
									}
									else {
										/* FALSE PATH */ 
									}
								}
								else {
									if(data_stat == 3) {
										read_bits(4);
										goto L13;
									}
									else if(data_stat < 3) {
										goto L21;
									}
									else {
										goto L21;
									}
								}
							}
							else if(data_type == 3) {
								/* FALSE PATH */ 
							}
							else {
								/* FALSE PATH */ 
							}
						}
						else if(data_type == 2) {
							/* FALSE PATH */ 
						}
						else {
							/* FALSE PATH */ 
						}
					}
					else {
						if(data_type == 2) {
							data_type = 0;
							/* END OF PATH at func_vldcontrol@p561#9 */
						}
						else if(data_type < 2) {
							if(data_type < 3) {
								if(data_stat == 2) {
									read_bits(4);
									goto L9;
								}
								else if(data_stat < 2) {
									if(data_stat < 3) {
L22:;
										if(data_type < 4) {
											if(data_type < 5) {
												if(data_type < 6) {
													/* END OF PATH at func_vldcontrol@p561#10 */
												}
												else if(data_type == 6) {
													/* FALSE PATH */ 
												}
												else {
													/* FALSE PATH */ 
												}
											}
											else if(data_type == 5) {
												/* FALSE PATH */ 
											}
											else {
												/* FALSE PATH */ 
											}
										}
										else if(data_type == 4) {
											/* FALSE PATH */ 
										}
										else {
											/* FALSE PATH */ 
										}
									}
									else if(data_stat == 3) {
										/* FALSE PATH */ 
									}
									else {
										/* FALSE PATH */ 
									}
								}
								else {
									if(data_stat == 3) {
										read_bits(4);
										goto L13;
									}
									else if(data_stat < 3) {
										goto L22;
									}
									else {
										goto L22;
									}
								}
							}
							else if(data_type == 3) {
								/* FALSE PATH */ 
							}
							else {
								/* FALSE PATH */ 
							}
						}
						else {
							if(data_type == 3) {
								if(data_stat == 0) {
									if(picture_type < 2) {
										temp = previous_picture;
										previous_picture = future_picture;
										future_picture = temp;
L23:;
										macroblock_address = 0;
										data_stat = 1;
L24:;
										/* END OF PATH at func_vldcontrol@p561#12 */
									}
									else {
										goto L23;
									}
								}
								else if(data_stat < 0) {
									if(data_stat < 1) {
										goto L24;
									}
									else if(data_stat == 1) {
										/* FALSE PATH */ 
									}
									else {
										/* FALSE PATH */ 
									}
								}
								else {
									if(data_stat == 1) {
										read_bits(3);
										if(read_done == 1) {
											temp = getinbuffer;
L25:;
											if(temp == 1) {
												picture_type = temp - 1;
												if(picture_type <= 0) {
L26:;
													data_type = 0;
													goto L24;
												}
												else {
													/* FALSE PATH */ 
												}
											}
											else if(temp == 2) {
												picture_type = temp - 1;
												if(picture_type > 0) {
L27:;
													data_stat = 2;
													goto L24;
												}
												else {
													/* FALSE PATH */ 
												}
											}
											else if(temp == 3) {
												picture_type = temp - 1;
												if(picture_type > 0) {
													goto L27;
												}
												else {
													/* FALSE PATH */ 
												}
											}
											else if(temp < 1) {
L28:;
												if(picture_type > 0) {
													goto L27;
												}
												else {
													goto L26;
												}
											}
											else if(temp > 1 && temp < 2) {
												goto L28;
											}
											else if(temp > 2 && temp < 3) {
												goto L28;
											}
											else {
												goto L28;
											}
										}
										else if(read_done < 1) {
											goto L25;
										}
										else {
											goto L25;
										}
									}
									else if(data_stat < 1) {
										goto L24;
									}
									else {
										goto L24;
									}
								}
							}
							else if(data_type < 3) {
								if(data_stat == 2) {
									read_bits(4);
									goto L9;
								}
								else if(data_stat < 2) {
									if(data_stat < 3) {
L29:;
										if(data_type < 4) {
											if(data_type < 5) {
												if(data_type < 6) {
													/* END OF PATH at func_vldcontrol@p561#13 */
												}
												else if(data_type == 6) {
													/* FALSE PATH */ 
												}
												else {
													/* FALSE PATH */ 
												}
											}
											else if(data_type == 5) {
												/* FALSE PATH */ 
											}
											else {
												/* FALSE PATH */ 
											}
										}
										else if(data_type == 4) {
											/* FALSE PATH */ 
										}
										else {
											/* FALSE PATH */ 
										}
									}
									else if(data_stat == 3) {
										/* FALSE PATH */ 
									}
									else {
										/* FALSE PATH */ 
									}
								}
								else {
									if(data_stat == 3) {
										read_bits(4);
										goto L13;
									}
									else if(data_stat < 3) {
										goto L29;
									}
									else {
										goto L29;
									}
								}
							}
							else {
								if(data_stat == 2) {
									read_bits(4);
									goto L9;
								}
								else if(data_stat < 2) {
									if(data_stat < 3) {
										if(data_type == 4) {
											read_bits(5);
L30:;
											if(read_done == 1) {
												quantizer_scale = read_int;
												count = 0;
												data_type = 5;
												data_stat = 0;
L31:;
												/* END OF PATH at func_vldcontrol@p561#15 */
											}
											else if(read_done < 1) {
												goto L31;
											}
											else {
												goto L31;
											}
										}
										else if(data_type < 4) {
L32:;
											if(data_type < 5) {
												if(data_type < 6) {
													/* END OF PATH at func_vldcontrol@p561#16 */
												}
												else if(data_type == 6) {
													/* FALSE PATH */ 
												}
												else {
													/* FALSE PATH */ 
												}
											}
											else if(data_type == 5) {
												/* FALSE PATH */ 
											}
											else {
												/* FALSE PATH */ 
											}
										}
										else {
											if(data_type == 5) {
												if(data_stat == 0) {
													look_bits(11);
													if(read_done == 1) {
														if(read_int == 8) {
															data_stat = 1;
L33:;
L34:;
															/* END OF PATH at func_vldcontrol@p561#18 */
														}
														else if(read_int < 8) {
L35:;
															data_stat = 2;
															goto L33;
														}
														else {
															goto L35;
														}
													}
													else if(read_done < 1) {
														goto L33;
													}
													else {
														goto L33;
													}
												}
												else if(data_stat < 0) {
													if(data_stat < 1) {
L36:;
														if(data_stat < 2) {
															if(data_stat < 3) {
																if(data_stat < 4) {
																	if(data_stat < 5) {
																		if(data_stat < 6) {
																			if(data_stat < 7) {
																				if(data_stat < 8) {
																					if(data_stat < 9) {
																						if(data_stat < 10) {
																							if(data_stat < 11) {
																								if(data_stat < 12) {
																									if(data_stat < 13) {
																										if(data_stat < 14) {
																											if(data_stat < 15) {
																												if(data_stat < 16) {
																													if(data_stat < 17) {
																														if(data_stat < 18) {
																															if(data_stat < 19) {
																																if(data_stat < 20) {
																																	goto L34;
																																}
																																else if(data_stat == 20) {
																																	/* FALSE PATH */ 
																																}
																																else {
																																	/* FALSE PATH */ 
																																}
																															}
																															else if(data_stat == 19) {
																																/* FALSE PATH */ 
																															}
																															else {
																																/* FALSE PATH */ 
																															}
																														}
																														else if(data_stat == 18) {
																															/* FALSE PATH */ 
																														}
																														else {
																															/* FALSE PATH */ 
																														}
																													}
																													else if(data_stat == 17) {
																														/* FALSE PATH */ 
																													}
																													else {
																														/* FALSE PATH */ 
																													}
																												}
																												else if(data_stat == 16) {
																													/* FALSE PATH */ 
																												}
																												else {
																													/* FALSE PATH */ 
																												}
																											}
																											else if(data_stat == 15) {
																												/* FALSE PATH */ 
																											}
																											else {
																												/* FALSE PATH */ 
																											}
																										}
																										else if(data_stat == 14) {
																											/* FALSE PATH */ 
																										}
																										else {
																											/* FALSE PATH */ 
																										}
																									}
																									else if(data_stat == 13) {
																										/* FALSE PATH */ 
																									}
																									else {
																										/* FALSE PATH */ 
																									}
																								}
																								else if(data_stat == 12) {
																									/* FALSE PATH */ 
																								}
																								else {
																									/* FALSE PATH */ 
																								}
																							}
																							else if(data_stat == 11) {
																								/* FALSE PATH */ 
																							}
																							else {
																								/* FALSE PATH */ 
																							}
																						}
																						else if(data_stat == 10) {
																							/* FALSE PATH */ 
																						}
																						else {
																							/* FALSE PATH */ 
																						}
																					}
																					else if(data_stat == 9) {
																						/* FALSE PATH */ 
																					}
																					else {
																						/* FALSE PATH */ 
																					}
																				}
																				else if(data_stat == 8) {
																					/* FALSE PATH */ 
																				}
																				else {
																					/* FALSE PATH */ 
																				}
																			}
																			else if(data_stat == 7) {
																				/* FALSE PATH */ 
																			}
																			else {
																				/* FALSE PATH */ 
																			}
																		}
																		else if(data_stat == 6) {
																			/* FALSE PATH */ 
																		}
																		else {
																			/* FALSE PATH */ 
																		}
																	}
																	else if(data_stat == 5) {
																		/* FALSE PATH */ 
																	}
																	else {
																		/* FALSE PATH */ 
																	}
																}
																else if(data_stat == 4) {
																	/* FALSE PATH */ 
																}
																else {
																	/* FALSE PATH */ 
																}
															}
															else if(data_stat == 3) {
																/* FALSE PATH */ 
															}
															else {
																/* FALSE PATH */ 
															}
														}
														else if(data_stat == 2) {
															/* FALSE PATH */ 
														}
														else {
															/* FALSE PATH */ 
														}
													}
													else if(data_stat == 1) {
														/* FALSE PATH */ 
													}
													else {
														/* FALSE PATH */ 
													}
												}
												else {
													if(data_stat == 1) {
														read_bits(11);
														if(read_done == 1) {
															count = count + 1;
															data_stat = 0;
L37:;
															goto L34;
														}
														else if(read_done < 1) {
															goto L37;
														}
														else {
															goto L37;
														}
													}
													else if(data_stat < 1) {
														goto L36;
													}
													else {
														goto L36;
													}
												}
											}
											else if(data_type < 5) {
L38:;
												if(data_type < 6) {
													/* END OF PATH at func_vldcontrol@p561#19 */
												}
												else if(data_type == 6) {
													/* FALSE PATH */ 
												}
												else {
													/* FALSE PATH */ 
												}
											}
											else {
												if(data_type == 6) {
													if(data_stat == 0) {
														reading_zz = 1;
														if(mb_type == 0) {
															data_stat = 1;
L39:;
															/* END OF PATH at func_vldcontrol@p561#21 */
														}
														else if(mb_type < 0) {
L40:;
															data_stat = 7;
															goto L39;
														}
														else {
															goto L40;
														}
													}
													else if(data_stat < 0) {
														if(data_stat < 1) {
L41:;
															if(data_stat < 2) {
																if(data_stat < 3) {
																	if(data_stat < 4) {
																		if(data_stat < 5) {
																			if(data_stat < 6) {
																				if(data_stat < 7) {
																					if(data_stat < 8) {
																						if(data_stat < 9) {
																							if(data_stat < 10) {
																								if(data_stat < 11) {
																									if(data_stat < 12) {
																										if(data_stat < 13) {
																											/* END OF PATH at func_vldcontrol@p561#22 */
																										}
																										else if(data_stat == 13) {
																											/* FALSE PATH */ 
																										}
																										else {
																											/* FALSE PATH */ 
																										}
																									}
																									else if(data_stat == 12) {
																										/* FALSE PATH */ 
																									}
																									else {
																										/* FALSE PATH */ 
																									}
																								}
																								else if(data_stat == 11) {
																									/* FALSE PATH */ 
																								}
																								else {
																									/* FALSE PATH */ 
																								}
																							}
																							else if(data_stat == 10) {
																								/* FALSE PATH */ 
																							}
																							else {
																								/* FALSE PATH */ 
																							}
																						}
																						else if(data_stat == 9) {
																							/* FALSE PATH */ 
																						}
																						else {
																							/* FALSE PATH */ 
																						}
																					}
																					else if(data_stat == 8) {
																						/* FALSE PATH */ 
																					}
																					else {
																						/* FALSE PATH */ 
																					}
																				}
																				else if(data_stat == 7) {
																					/* FALSE PATH */ 
																				}
																				else {
																					/* FALSE PATH */ 
																				}
																			}
																			else if(data_stat == 6) {
																				/* FALSE PATH */ 
																			}
																			else {
																				/* FALSE PATH */ 
																			}
																		}
																		else if(data_stat == 5) {
																			/* FALSE PATH */ 
																		}
																		else {
																			/* FALSE PATH */ 
																		}
																	}
																	else if(data_stat == 4) {
																		/* FALSE PATH */ 
																	}
																	else {
																		/* FALSE PATH */ 
																	}
																}
																else if(data_stat == 3) {
																	/* FALSE PATH */ 
																}
																else {
																	/* FALSE PATH */ 
																}
															}
															else if(data_stat == 2) {
																/* FALSE PATH */ 
															}
															else {
																/* FALSE PATH */ 
															}
														}
														else if(data_stat == 1) {
															/* FALSE PATH */ 
														}
														else {
															/* FALSE PATH */ 
														}
													}
													else {
														if(data_stat == 1) {
															if(b_num < 4) {
																data_stat = 4;
L42:;
																/* END OF PATH at func_vldcontrol@p561#24 */
															}
															else {
																data_stat = 2;
																goto L42;
															}
														}
														else if(data_stat < 1) {
															goto L41;
														}
														else {
															goto L41;
														}
													}
												}
												else if(data_type < 6) {
													/* END OF PATH at func_vldcontrol@p561#25 */
												}
												else {
													/* END OF PATH at func_vldcontrol@p561#26 */
												}
											}
										}
									}
									else if(data_stat == 3) {
										/* FALSE PATH */ 
									}
									else {
										/* FALSE PATH */ 
									}
								}
								else {
									if(data_stat == 3) {
										read_bits(4);
										goto L13;
									}
									else if(data_stat < 3) {
										if(data_type == 4) {
											read_bits(5);
											goto L30;
										}
										else if(data_type < 4) {
											goto L32;
										}
										else {
											if(data_type == 5) {
												if(data_stat > 0) {
													if(data_stat > 1) {
														if(data_stat > 2) {
															if(data_stat < 3) {
																if(data_stat < 4) {
																	if(data_stat < 5) {
																		if(data_stat < 6) {
																			if(data_stat < 7) {
																				if(data_stat < 8) {
																					if(data_stat < 9) {
																						if(data_stat < 10) {
																							if(data_stat < 11) {
																								if(data_stat < 12) {
																									if(data_stat < 13) {
																										if(data_stat < 14) {
																											if(data_stat < 15) {
																												if(data_stat < 16) {
																													if(data_stat < 17) {
																														if(data_stat < 18) {
																															if(data_stat < 19) {
																																if(data_stat < 20) {
																																	goto L34;
																																}
																																else if(data_stat == 20) {
																																	/* FALSE PATH */ 
																																}
																																else {
																																	/* FALSE PATH */ 
																																}
																															}
																															else if(data_stat == 19) {
																																/* FALSE PATH */ 
																															}
																															else {
																																/* FALSE PATH */ 
																															}
																														}
																														else if(data_stat == 18) {
																															/* FALSE PATH */ 
																														}
																														else {
																															/* FALSE PATH */ 
																														}
																													}
																													else if(data_stat == 17) {
																														/* FALSE PATH */ 
																													}
																													else {
																														/* FALSE PATH */ 
																													}
																												}
																												else if(data_stat == 16) {
																													/* FALSE PATH */ 
																												}
																												else {
																													/* FALSE PATH */ 
																												}
																											}
																											else if(data_stat == 15) {
																												/* FALSE PATH */ 
																											}
																											else {
																												/* FALSE PATH */ 
																											}
																										}
																										else if(data_stat == 14) {
																											/* FALSE PATH */ 
																										}
																										else {
																											/* FALSE PATH */ 
																										}
																									}
																									else if(data_stat == 13) {
																										/* FALSE PATH */ 
																									}
																									else {
																										/* FALSE PATH */ 
																									}
																								}
																								else if(data_stat == 12) {
																									/* FALSE PATH */ 
																								}
																								else {
																									/* FALSE PATH */ 
																								}
																							}
																							else if(data_stat == 11) {
																								/* FALSE PATH */ 
																							}
																							else {
																								/* FALSE PATH */ 
																							}
																						}
																						else if(data_stat == 10) {
																							/* FALSE PATH */ 
																						}
																						else {
																							/* FALSE PATH */ 
																						}
																					}
																					else if(data_stat == 9) {
																						/* FALSE PATH */ 
																					}
																					else {
																						/* FALSE PATH */ 
																					}
																				}
																				else if(data_stat == 8) {
																					/* FALSE PATH */ 
																				}
																				else {
																					/* FALSE PATH */ 
																				}
																			}
																			else if(data_stat == 7) {
																				/* FALSE PATH */ 
																			}
																			else {
																				/* FALSE PATH */ 
																			}
																		}
																		else if(data_stat == 6) {
																			/* FALSE PATH */ 
																		}
																		else {
																			/* FALSE PATH */ 
																		}
																	}
																	else if(data_stat == 5) {
																		/* FALSE PATH */ 
																	}
																	else {
																		/* FALSE PATH */ 
																	}
																}
																else if(data_stat == 4) {
																	/* FALSE PATH */ 
																}
																else {
																	/* FALSE PATH */ 
																}
															}
															else if(data_stat == 3) {
																/* FALSE PATH */ 
															}
															else {
																/* FALSE PATH */ 
															}
														}
														else if(data_stat == 2) {
															/* FALSE PATH */ 
														}
														else {
															/* FALSE PATH */ 
														}
													}
													else if(data_stat == 1) {
														/* FALSE PATH */ 
													}
													else {
														/* FALSE PATH */ 
													}
												}
												else if(data_stat == 0) {
													/* FALSE PATH */ 
												}
												else {
													/* FALSE PATH */ 
												}
											}
											else if(data_type < 5) {
												goto L38;
											}
											else {
												if(data_type == 6) {
													if(data_stat > 0) {
														if(data_stat > 1) {
															if(data_stat > 2) {
																if(data_stat < 3) {
																	if(data_stat < 4) {
																		if(data_stat < 5) {
																			if(data_stat < 6) {
																				if(data_stat < 7) {
																					if(data_stat < 8) {
																						if(data_stat < 9) {
																							if(data_stat < 10) {
																								if(data_stat < 11) {
																									if(data_stat < 12) {
																										if(data_stat < 13) {
																											/* END OF PATH at func_vldcontrol@p561#27 */
																										}
																										else if(data_stat == 13) {
																											/* FALSE PATH */ 
																										}
																										else {
																											/* FALSE PATH */ 
																										}
																									}
																									else if(data_stat == 12) {
																										/* FALSE PATH */ 
																									}
																									else {
																										/* FALSE PATH */ 
																									}
																								}
																								else if(data_stat == 11) {
																									/* FALSE PATH */ 
																								}
																								else {
																									/* FALSE PATH */ 
																								}
																							}
																							else if(data_stat == 10) {
																								/* FALSE PATH */ 
																							}
																							else {
																								/* FALSE PATH */ 
																							}
																						}
																						else if(data_stat == 9) {
																							/* FALSE PATH */ 
																						}
																						else {
																							/* FALSE PATH */ 
																						}
																					}
																					else if(data_stat == 8) {
																						/* FALSE PATH */ 
																					}
																					else {
																						/* FALSE PATH */ 
																					}
																				}
																				else if(data_stat == 7) {
																					/* FALSE PATH */ 
																				}
																				else {
																					/* FALSE PATH */ 
																				}
																			}
																			else if(data_stat == 6) {
																				/* FALSE PATH */ 
																			}
																			else {
																				/* FALSE PATH */ 
																			}
																		}
																		else if(data_stat == 5) {
																			/* FALSE PATH */ 
																		}
																		else {
																			/* FALSE PATH */ 
																		}
																	}
																	else if(data_stat == 4) {
																		/* FALSE PATH */ 
																	}
																	else {
																		/* FALSE PATH */ 
																	}
																}
																else if(data_stat == 3) {
																	/* FALSE PATH */ 
																}
																else {
																	/* FALSE PATH */ 
																}
															}
															else if(data_stat == 2) {
																/* FALSE PATH */ 
															}
															else {
																/* FALSE PATH */ 
															}
														}
														else if(data_stat == 1) {
															/* FALSE PATH */ 
														}
														else {
															/* FALSE PATH */ 
														}
													}
													else if(data_stat == 0) {
														/* FALSE PATH */ 
													}
													else {
														/* FALSE PATH */ 
													}
												}
												else if(data_type < 6) {
													/* END OF PATH at func_vldcontrol@p561#29 */
												}
												else {
													/* END OF PATH at func_vldcontrol@p561#30 */
												}
											}
										}
									}
									else {
										if(data_type == 4) {
											read_bits(5);
											goto L30;
										}
										else if(data_type < 4) {
											goto L32;
										}
										else {
											if(data_type == 5) {
												if(data_stat > 0) {
													if(data_stat > 1) {
														if(data_stat > 2) {
															if(data_stat > 3) {
																if(data_stat == 4) {
																	next_vld(1, 6);
																	if(vld_found >= 0) {
																		data_stat = 5;
L43:;
																		goto L34;
																	}
																	else {
																		goto L43;
																	}
																}
																else if(data_stat < 4) {
																	if(data_stat < 5) {
																		if(data_stat < 6) {
																			if(data_stat < 7) {
																				if(data_stat < 8) {
																					if(data_stat < 9) {
																						if(data_stat < 10) {
																							if(data_stat < 11) {
																								if(data_stat < 12) {
																									if(data_stat < 13) {
																										if(data_stat < 14) {
																											if(data_stat < 15) {
																												if(data_stat < 16) {
																													if(data_stat < 17) {
																														if(data_stat < 18) {
																															if(data_stat < 19) {
																																if(data_stat < 20) {
																																	goto L34;
																																}
																																else if(data_stat == 20) {
																																	/* FALSE PATH */ 
																																}
																																else {
																																	/* FALSE PATH */ 
																																}
																															}
																															else if(data_stat == 19) {
																																/* FALSE PATH */ 
																															}
																															else {
																																/* FALSE PATH */ 
																															}
																														}
																														else if(data_stat == 18) {
																															/* FALSE PATH */ 
																														}
																														else {
																															/* FALSE PATH */ 
																														}
																													}
																													else if(data_stat == 17) {
																														/* FALSE PATH */ 
																													}
																													else {
																														/* FALSE PATH */ 
																													}
																												}
																												else if(data_stat == 16) {
																													/* FALSE PATH */ 
																												}
																												else {
																													/* FALSE PATH */ 
																												}
																											}
																											else if(data_stat == 15) {
																												/* FALSE PATH */ 
																											}
																											else {
																												/* FALSE PATH */ 
																											}
																										}
																										else if(data_stat == 14) {
																											/* FALSE PATH */ 
																										}
																										else {
																											/* FALSE PATH */ 
																										}
																									}
																									else if(data_stat == 13) {
																										/* FALSE PATH */ 
																									}
																									else {
																										/* FALSE PATH */ 
																									}
																								}
																								else if(data_stat == 12) {
																									/* FALSE PATH */ 
																								}
																								else {
																									/* FALSE PATH */ 
																								}
																							}
																							else if(data_stat == 11) {
																								/* FALSE PATH */ 
																							}
																							else {
																								/* FALSE PATH */ 
																							}
																						}
																						else if(data_stat == 10) {
																							/* FALSE PATH */ 
																						}
																						else {
																							/* FALSE PATH */ 
																						}
																					}
																					else if(data_stat == 9) {
																						/* FALSE PATH */ 
																					}
																					else {
																						/* FALSE PATH */ 
																					}
																				}
																				else if(data_stat == 8) {
																					/* FALSE PATH */ 
																				}
																				else {
																					/* FALSE PATH */ 
																				}
																			}
																			else if(data_stat == 7) {
																				/* FALSE PATH */ 
																			}
																			else {
																				/* FALSE PATH */ 
																			}
																		}
																		else if(data_stat == 6) {
																			/* FALSE PATH */ 
																		}
																		else {
																			/* FALSE PATH */ 
																		}
																	}
																	else if(data_stat == 5) {
																		/* FALSE PATH */ 
																	}
																	else {
																		/* FALSE PATH */ 
																	}
																}
																else {
																	if(data_stat == 5) {
																		if(picture_type == 0) {
																			is_mb_quant = table2b2aq[vld_found];
																			is_for_info = table2b2af[vld_found];
																			is_back_info = table2b2ab[vld_found];
																			is_mb_intra = table2b2ai[vld_found];
L44:;
																			if(is_mb_quant == -1) {
																				vld_found = -1;
																				data_stat = 4;
L45:;
																				goto L34;
																			}
																			else if(is_mb_quant < -1) {
																				if(is_for_info == -1) {
L46:;
																					vld_found = -1;
																					data_stat = 4;
																					goto L45;
																				}
																				else if(is_for_info < -1) {
L47:;
																					if(is_back_info == -1) {
L48:;
																						vld_found = -1;
																						data_stat = 4;
																						goto L45;
																					}
																					else if(is_back_info < -1) {
L49:;
																						if(is_mb_intra == -1) {
L50:;
																							vld_found = -1;
																							data_stat = 4;
																							goto L45;
																						}
																						else if(is_mb_intra < -1) {
																							if(is_mb_intra < 1) {
L51:;
																								mb_type = picture_type;
																								read_bits(vld_size);
L52:;
																								if(is_mb_quant < 1) {
L53:;
																									data_stat = 7;
																									goto L45;
																								}
																								else if(is_mb_quant == 1) {
																									/* FALSE PATH */ 
																								}
																								else {
																									/* FALSE PATH */ 
																								}
																							}
																							else if(is_mb_intra == 1) {
																								/* FALSE PATH */ 
																							}
																							else {
																								/* FALSE PATH */ 
																							}
																						}
																						else {
																							if(is_mb_intra == 1) {
																								mb_type = 0;
																								read_bits(vld_size);
																								goto L52;
																							}
																							else if(is_mb_intra < 1) {
																								goto L51;
																							}
																							else {
																								goto L51;
																							}
																						}
																					}
																					else {
																						goto L49;
																					}
																				}
																				else {
																					goto L47;
																				}
																			}
																			else {
																				if(is_for_info == -1) {
																					goto L46;
																				}
																				else if(is_for_info < -1) {
L54:;
																					if(is_back_info == -1) {
																						goto L48;
																					}
																					else if(is_back_info < -1) {
L55:;
																						if(is_mb_intra == -1) {
																							goto L50;
																						}
																						else if(is_mb_intra < -1) {
																							if(is_mb_intra < 1) {
L56:;
																								mb_type = picture_type;
																								read_bits(vld_size);
L57:;
																								if(is_mb_quant == 1) {
																									data_stat = 6;
																									goto L45;
																								}
																								else if(is_mb_quant < 1) {
																									goto L53;
																								}
																								else {
																									goto L53;
																								}
																							}
																							else if(is_mb_intra == 1) {
																								/* FALSE PATH */ 
																							}
																							else {
																								/* FALSE PATH */ 
																							}
																						}
																						else {
																							if(is_mb_intra == 1) {
																								mb_type = 0;
																								read_bits(vld_size);
																								goto L57;
																							}
																							else if(is_mb_intra < 1) {
																								goto L56;
																							}
																							else {
																								goto L56;
																							}
																						}
																					}
																					else {
																						goto L55;
																					}
																				}
																				else {
																					goto L54;
																				}
																			}
																		}
																		else if(picture_type == 1) {
																			is_mb_quant = table2b2bq[vld_found];
																			is_for_info = table2b2bf[vld_found];
																			is_back_info = table2b2bb[vld_found];
																			is_mb_intra = table2b2bi[vld_found];
																			goto L44;
																		}
																		else if(picture_type == 2) {
																			is_mb_quant = table2b2cq[vld_found];
																			is_for_info = table2b2cf[vld_found];
																			is_back_info = table2b2cb[vld_found];
																			is_mb_intra = table2b2bi[vld_found];
																			goto L44;
																		}
																		else if(picture_type < 0) {
																			goto L44;
																		}
																		else if(picture_type > 0 && picture_type < 1) {
																			goto L44;
																		}
																		else if(picture_type > 1 && picture_type < 2) {
																			goto L44;
																		}
																		else {
																			goto L44;
																		}
																	}
																	else if(data_stat < 5) {
																		if(data_stat < 6) {
																			if(data_stat < 7) {
																				if(data_stat < 8) {
																					if(data_stat < 9) {
																						if(data_stat < 10) {
																							if(data_stat < 11) {
																								if(data_stat < 12) {
																									if(data_stat < 13) {
																										if(data_stat < 14) {
																											if(data_stat < 15) {
																												if(data_stat < 16) {
																													if(data_stat < 17) {
																														if(data_stat < 18) {
																															if(data_stat < 19) {
																																if(data_stat < 20) {
																																	goto L34;
																																}
																																else if(data_stat == 20) {
																																	/* FALSE PATH */ 
																																}
																																else {
																																	/* FALSE PATH */ 
																																}
																															}
																															else if(data_stat == 19) {
																																/* FALSE PATH */ 
																															}
																															else {
																																/* FALSE PATH */ 
																															}
																														}
																														else if(data_stat == 18) {
																															/* FALSE PATH */ 
																														}
																														else {
																															/* FALSE PATH */ 
																														}
																													}
																													else if(data_stat == 17) {
																														/* FALSE PATH */ 
																													}
																													else {
																														/* FALSE PATH */ 
																													}
																												}
																												else if(data_stat == 16) {
																													/* FALSE PATH */ 
																												}
																												else {
																													/* FALSE PATH */ 
																												}
																											}
																											else if(data_stat == 15) {
																												/* FALSE PATH */ 
																											}
																											else {
																												/* FALSE PATH */ 
																											}
																										}
																										else if(data_stat == 14) {
																											/* FALSE PATH */ 
																										}
																										else {
																											/* FALSE PATH */ 
																										}
																									}
																									else if(data_stat == 13) {
																										/* FALSE PATH */ 
																									}
																									else {
																										/* FALSE PATH */ 
																									}
																								}
																								else if(data_stat == 12) {
																									/* FALSE PATH */ 
																								}
																								else {
																									/* FALSE PATH */ 
																								}
																							}
																							else if(data_stat == 11) {
																								/* FALSE PATH */ 
																							}
																							else {
																								/* FALSE PATH */ 
																							}
																						}
																						else if(data_stat == 10) {
																							/* FALSE PATH */ 
																						}
																						else {
																							/* FALSE PATH */ 
																						}
																					}
																					else if(data_stat == 9) {
																						/* FALSE PATH */ 
																					}
																					else {
																						/* FALSE PATH */ 
																					}
																				}
																				else if(data_stat == 8) {
																					/* FALSE PATH */ 
																				}
																				else {
																					/* FALSE PATH */ 
																				}
																			}
																			else if(data_stat == 7) {
																				/* FALSE PATH */ 
																			}
																			else {
																				/* FALSE PATH */ 
																			}
																		}
																		else if(data_stat == 6) {
																			/* FALSE PATH */ 
																		}
																		else {
																			/* FALSE PATH */ 
																		}
																	}
																	else {
																		if(data_stat == 6) {
																			read_bits(5);
																			if(read_done == 1) {
																				quantizer_scale = read_int;
																				data_stat = 7;
L58:;
																				goto L34;
																			}
																			else if(read_done < 1) {
																				goto L58;
																			}
																			else {
																				goto L58;
																			}
																		}
																		else if(data_stat < 6) {
																			if(data_stat < 7) {
																				if(data_stat < 8) {
																					if(data_stat < 9) {
																						if(data_stat < 10) {
																							if(data_stat < 11) {
																								if(data_stat < 12) {
																									if(data_stat < 13) {
																										if(data_stat < 14) {
																											if(data_stat < 15) {
																												if(data_stat < 16) {
																													if(data_stat < 17) {
																														if(data_stat < 18) {
																															if(data_stat < 19) {
																																if(data_stat < 20) {
																																	goto L34;
																																}
																																else if(data_stat == 20) {
																																	/* FALSE PATH */ 
																																}
																																else {
																																	/* FALSE PATH */ 
																																}
																															}
																															else if(data_stat == 19) {
																																/* FALSE PATH */ 
																															}
																															else {
																																/* FALSE PATH */ 
																															}
																														}
																														else if(data_stat == 18) {
																															/* FALSE PATH */ 
																														}
																														else {
																															/* FALSE PATH */ 
																														}
																													}
																													else if(data_stat == 17) {
																														/* FALSE PATH */ 
																													}
																													else {
																														/* FALSE PATH */ 
																													}
																												}
																												else if(data_stat == 16) {
																													/* FALSE PATH */ 
																												}
																												else {
																													/* FALSE PATH */ 
																												}
																											}
																											else if(data_stat == 15) {
																												/* FALSE PATH */ 
																											}
																											else {
																												/* FALSE PATH */ 
																											}
																										}
																										else if(data_stat == 14) {
																											/* FALSE PATH */ 
																										}
																										else {
																											/* FALSE PATH */ 
																										}
																									}
																									else if(data_stat == 13) {
																										/* FALSE PATH */ 
																									}
																									else {
																										/* FALSE PATH */ 
																									}
																								}
																								else if(data_stat == 12) {
																									/* FALSE PATH */ 
																								}
																								else {
																									/* FALSE PATH */ 
																								}
																							}
																							else if(data_stat == 11) {
																								/* FALSE PATH */ 
																							}
																							else {
																								/* FALSE PATH */ 
																							}
																						}
																						else if(data_stat == 10) {
																							/* FALSE PATH */ 
																						}
																						else {
																							/* FALSE PATH */ 
																						}
																					}
																					else if(data_stat == 9) {
																						/* FALSE PATH */ 
																					}
																					else {
																						/* FALSE PATH */ 
																					}
																				}
																				else if(data_stat == 8) {
																					/* FALSE PATH */ 
																				}
																				else {
																					/* FALSE PATH */ 
																				}
																			}
																			else if(data_stat == 7) {
																				/* FALSE PATH */ 
																			}
																			else {
																				/* FALSE PATH */ 
																			}
																		}
																		else {
																			if(data_stat == 7) {
																				if(is_for_info == 1) {
																					data_stat = 8;
L59:;
																					goto L34;
																				}
																				else if(is_for_info < 1) {
L60:;
																					data_stat = 14;
																					goto L59;
																				}
																				else {
																					goto L60;
																				}
																			}
																			else if(data_stat < 7) {
																				if(data_stat < 8) {
																					if(data_stat < 9) {
																						if(data_stat < 10) {
																							if(data_stat < 11) {
																								if(data_stat < 12) {
																									if(data_stat < 13) {
																										if(data_stat < 14) {
																											if(data_stat < 15) {
																												if(data_stat < 16) {
																													if(data_stat < 17) {
																														if(data_stat < 18) {
																															if(data_stat < 19) {
																																if(data_stat < 20) {
																																	goto L34;
																																}
																																else if(data_stat == 20) {
																																	/* FALSE PATH */ 
																																}
																																else {
																																	/* FALSE PATH */ 
																																}
																															}
																															else if(data_stat == 19) {
																																/* FALSE PATH */ 
																															}
																															else {
																																/* FALSE PATH */ 
																															}
																														}
																														else if(data_stat == 18) {
																															/* FALSE PATH */ 
																														}
																														else {
																															/* FALSE PATH */ 
																														}
																													}
																													else if(data_stat == 17) {
																														/* FALSE PATH */ 
																													}
																													else {
																														/* FALSE PATH */ 
																													}
																												}
																												else if(data_stat == 16) {
																													/* FALSE PATH */ 
																												}
																												else {
																													/* FALSE PATH */ 
																												}
																											}
																											else if(data_stat == 15) {
																												/* FALSE PATH */ 
																											}
																											else {
																												/* FALSE PATH */ 
																											}
																										}
																										else if(data_stat == 14) {
																											/* FALSE PATH */ 
																										}
																										else {
																											/* FALSE PATH */ 
																										}
																									}
																									else if(data_stat == 13) {
																										/* FALSE PATH */ 
																									}
																									else {
																										/* FALSE PATH */ 
																									}
																								}
																								else if(data_stat == 12) {
																									/* FALSE PATH */ 
																								}
																								else {
																									/* FALSE PATH */ 
																								}
																							}
																							else if(data_stat == 11) {
																								/* FALSE PATH */ 
																							}
																							else {
																								/* FALSE PATH */ 
																							}
																						}
																						else if(data_stat == 10) {
																							/* FALSE PATH */ 
																						}
																						else {
																							/* FALSE PATH */ 
																						}
																					}
																					else if(data_stat == 9) {
																						/* FALSE PATH */ 
																					}
																					else {
																						/* FALSE PATH */ 
																					}
																				}
																				else if(data_stat == 8) {
																					/* FALSE PATH */ 
																				}
																				else {
																					/* FALSE PATH */ 
																				}
																			}
																			else {
																				if(data_stat == 8) {
																					next_vld(1, 11);
																					if(vld_found >= 0) {
																						data_stat = 9;
L61:;
																						goto L34;
																					}
																					else {
																						goto L61;
																					}
																				}
																				else if(data_stat < 8) {
																					if(data_stat < 9) {
																						if(data_stat < 10) {
																							if(data_stat < 11) {
																								if(data_stat < 12) {
																									if(data_stat < 13) {
																										if(data_stat < 14) {
																											if(data_stat < 15) {
																												if(data_stat < 16) {
																													if(data_stat < 17) {
																														if(data_stat < 18) {
																															if(data_stat < 19) {
																																if(data_stat < 20) {
																																	goto L34;
																																}
																																else if(data_stat == 20) {
																																	/* FALSE PATH */ 
																																}
																																else {
																																	/* FALSE PATH */ 
																																}
																															}
																															else if(data_stat == 19) {
																																/* FALSE PATH */ 
																															}
																															else {
																																/* FALSE PATH */ 
																															}
																														}
																														else if(data_stat == 18) {
																															/* FALSE PATH */ 
																														}
																														else {
																															/* FALSE PATH */ 
																														}
																													}
																													else if(data_stat == 17) {
																														/* FALSE PATH */ 
																													}
																													else {
																														/* FALSE PATH */ 
																													}
																												}
																												else if(data_stat == 16) {
																													/* FALSE PATH */ 
																												}
																												else {
																													/* FALSE PATH */ 
																												}
																											}
																											else if(data_stat == 15) {
																												/* FALSE PATH */ 
																											}
																											else {
																												/* FALSE PATH */ 
																											}
																										}
																										else if(data_stat == 14) {
																											/* FALSE PATH */ 
																										}
																										else {
																											/* FALSE PATH */ 
																										}
																									}
																									else if(data_stat == 13) {
																										/* FALSE PATH */ 
																									}
																									else {
																										/* FALSE PATH */ 
																									}
																								}
																								else if(data_stat == 12) {
																									/* FALSE PATH */ 
																								}
																								else {
																									/* FALSE PATH */ 
																								}
																							}
																							else if(data_stat == 11) {
																								/* FALSE PATH */ 
																							}
																							else {
																								/* FALSE PATH */ 
																							}
																						}
																						else if(data_stat == 10) {
																							/* FALSE PATH */ 
																						}
																						else {
																							/* FALSE PATH */ 
																						}
																					}
																					else if(data_stat == 9) {
																						/* FALSE PATH */ 
																					}
																					else {
																						/* FALSE PATH */ 
																					}
																				}
																				else {
																					if(data_stat == 9) {
																						motion_horizontal_forward_code = table2b4[vld_found];
																						if(motion_horizontal_forward_code == 99) {
																							vld_found = -1;
																							data_stat = 8;
L62:;
																							goto L34;
																						}
																						else if(motion_horizontal_forward_code < 99) {
																							read_bits(vld_size);
L63:;
																							if(forward_f == 1) {
																								complement_horizontal_forward_r = 0;
																								data_stat = 11;
																								goto L62;
																							}
																							else if(forward_f < 1) {
L64:;
																								if(motion_horizontal_forward_code == 0) {
																									complement_horizontal_forward_r = 0;
																									data_stat = 11;
																									goto L62;
																								}
																								else if(motion_horizontal_forward_code < 0) {
L65:;
																									data_stat = 10;
																									goto L62;
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
																							read_bits(vld_size);
																							goto L63;
																						}
																					}
																					else if(data_stat < 9) {
																						if(data_stat < 10) {
																							if(data_stat < 11) {
																								if(data_stat < 12) {
																									if(data_stat < 13) {
																										if(data_stat < 14) {
																											if(data_stat < 15) {
																												if(data_stat < 16) {
																													if(data_stat < 17) {
																														if(data_stat < 18) {
																															if(data_stat < 19) {
																																if(data_stat < 20) {
																																	goto L34;
																																}
																																else if(data_stat == 20) {
																																	/* FALSE PATH */ 
																																}
																																else {
																																	/* FALSE PATH */ 
																																}
																															}
																															else if(data_stat == 19) {
																																/* FALSE PATH */ 
																															}
																															else {
																																/* FALSE PATH */ 
																															}
																														}
																														else if(data_stat == 18) {
																															/* FALSE PATH */ 
																														}
																														else {
																															/* FALSE PATH */ 
																														}
																													}
																													else if(data_stat == 17) {
																														/* FALSE PATH */ 
																													}
																													else {
																														/* FALSE PATH */ 
																													}
																												}
																												else if(data_stat == 16) {
																													/* FALSE PATH */ 
																												}
																												else {
																													/* FALSE PATH */ 
																												}
																											}
																											else if(data_stat == 15) {
																												/* FALSE PATH */ 
																											}
																											else {
																												/* FALSE PATH */ 
																											}
																										}
																										else if(data_stat == 14) {
																											/* FALSE PATH */ 
																										}
																										else {
																											/* FALSE PATH */ 
																										}
																									}
																									else if(data_stat == 13) {
																										/* FALSE PATH */ 
																									}
																									else {
																										/* FALSE PATH */ 
																									}
																								}
																								else if(data_stat == 12) {
																									/* FALSE PATH */ 
																								}
																								else {
																									/* FALSE PATH */ 
																								}
																							}
																							else if(data_stat == 11) {
																								/* FALSE PATH */ 
																							}
																							else {
																								/* FALSE PATH */ 
																							}
																						}
																						else if(data_stat == 10) {
																							/* FALSE PATH */ 
																						}
																						else {
																							/* FALSE PATH */ 
																						}
																					}
																					else {
																						if(data_stat == 10) {
																							read_bits(forward_r_size);
																							if(read_done == 1) {
																								motion_horizontal_forward_r = read_int;
																								complement_horizontal_forward_r = (forward_f - 1) - motion_horizontal_forward_r;
																								data_stat = 11;
L66:;
																								goto L34;
																							}
																							else if(read_done < 1) {
																								goto L66;
																							}
																							else {
																								goto L66;
																							}
																						}
																						else if(data_stat < 10) {
																							if(data_stat < 11) {
																								if(data_stat < 12) {
																									if(data_stat < 13) {
																										if(data_stat < 14) {
																											if(data_stat < 15) {
																												if(data_stat < 16) {
																													if(data_stat < 17) {
																														if(data_stat < 18) {
																															if(data_stat < 19) {
																																if(data_stat < 20) {
																																	goto L34;
																																}
																																else if(data_stat == 20) {
																																	/* FALSE PATH */ 
																																}
																																else {
																																	/* FALSE PATH */ 
																																}
																															}
																															else if(data_stat == 19) {
																																/* FALSE PATH */ 
																															}
																															else {
																																/* FALSE PATH */ 
																															}
																														}
																														else if(data_stat == 18) {
																															/* FALSE PATH */ 
																														}
																														else {
																															/* FALSE PATH */ 
																														}
																													}
																													else if(data_stat == 17) {
																														/* FALSE PATH */ 
																													}
																													else {
																														/* FALSE PATH */ 
																													}
																												}
																												else if(data_stat == 16) {
																													/* FALSE PATH */ 
																												}
																												else {
																													/* FALSE PATH */ 
																												}
																											}
																											else if(data_stat == 15) {
																												/* FALSE PATH */ 
																											}
																											else {
																												/* FALSE PATH */ 
																											}
																										}
																										else if(data_stat == 14) {
																											/* FALSE PATH */ 
																										}
																										else {
																											/* FALSE PATH */ 
																										}
																									}
																									else if(data_stat == 13) {
																										/* FALSE PATH */ 
																									}
																									else {
																										/* FALSE PATH */ 
																									}
																								}
																								else if(data_stat == 12) {
																									/* FALSE PATH */ 
																								}
																								else {
																									/* FALSE PATH */ 
																								}
																							}
																							else if(data_stat == 11) {
																								/* FALSE PATH */ 
																							}
																							else {
																								/* FALSE PATH */ 
																							}
																						}
																						else {
																							if(data_stat == 11) {
																								next_vld(1, 11);
																								if(vld_found >= 0) {
																									data_stat = 12;
L67:;
																									goto L34;
																								}
																								else {
																									goto L67;
																								}
																							}
																							else if(data_stat < 11) {
																								if(data_stat < 12) {
																									if(data_stat < 13) {
																										if(data_stat < 14) {
																											if(data_stat < 15) {
																												if(data_stat < 16) {
																													if(data_stat < 17) {
																														if(data_stat < 18) {
																															if(data_stat < 19) {
																																if(data_stat < 20) {
																																	goto L34;
																																}
																																else if(data_stat == 20) {
																																	/* FALSE PATH */ 
																																}
																																else {
																																	/* FALSE PATH */ 
																																}
																															}
																															else if(data_stat == 19) {
																																/* FALSE PATH */ 
																															}
																															else {
																																/* FALSE PATH */ 
																															}
																														}
																														else if(data_stat == 18) {
																															/* FALSE PATH */ 
																														}
																														else {
																															/* FALSE PATH */ 
																														}
																													}
																													else if(data_stat == 17) {
																														/* FALSE PATH */ 
																													}
																													else {
																														/* FALSE PATH */ 
																													}
																												}
																												else if(data_stat == 16) {
																													/* FALSE PATH */ 
																												}
																												else {
																													/* FALSE PATH */ 
																												}
																											}
																											else if(data_stat == 15) {
																												/* FALSE PATH */ 
																											}
																											else {
																												/* FALSE PATH */ 
																											}
																										}
																										else if(data_stat == 14) {
																											/* FALSE PATH */ 
																										}
																										else {
																											/* FALSE PATH */ 
																										}
																									}
																									else if(data_stat == 13) {
																										/* FALSE PATH */ 
																									}
																									else {
																										/* FALSE PATH */ 
																									}
																								}
																								else if(data_stat == 12) {
																									/* FALSE PATH */ 
																								}
																								else {
																									/* FALSE PATH */ 
																								}
																							}
																							else {
																								if(data_stat == 12) {
																									motion_vertical_forward_code = table2b4[vld_found];
																									if(motion_vertical_forward_code == 99) {
																										vld_found = -1;
																										data_stat = 11;
L68:;
																										goto L34;
																									}
																									else if(motion_vertical_forward_code < 99) {
																										read_bits(vld_size);
L69:;
																										if(forward_f == 1) {
																											complement_vertical_forward_r = 0;
																											data_stat = 14;
																											goto L68;
																										}
																										else if(forward_f < 1) {
L70:;
																											if(motion_vertical_forward_code == 0) {
																												complement_vertical_forward_r = 0;
																												data_stat = 14;
																												goto L68;
																											}
																											else if(motion_vertical_forward_code < 0) {
L71:;
																												data_stat = 13;
																												goto L68;
																											}
																											else {
																												goto L71;
																											}
																										}
																										else {
																											goto L70;
																										}
																									}
																									else {
																										read_bits(vld_size);
																										goto L69;
																									}
																								}
																								else if(data_stat < 12) {
																									if(data_stat < 13) {
																										if(data_stat < 14) {
																											if(data_stat < 15) {
																												if(data_stat < 16) {
																													if(data_stat < 17) {
																														if(data_stat < 18) {
																															if(data_stat < 19) {
																																if(data_stat < 20) {
																																	goto L34;
																																}
																																else if(data_stat == 20) {
																																	/* FALSE PATH */ 
																																}
																																else {
																																	/* FALSE PATH */ 
																																}
																															}
																															else if(data_stat == 19) {
																																/* FALSE PATH */ 
																															}
																															else {
																																/* FALSE PATH */ 
																															}
																														}
																														else if(data_stat == 18) {
																															/* FALSE PATH */ 
																														}
																														else {
																															/* FALSE PATH */ 
																														}
																													}
																													else if(data_stat == 17) {
																														/* FALSE PATH */ 
																													}
																													else {
																														/* FALSE PATH */ 
																													}
																												}
																												else if(data_stat == 16) {
																													/* FALSE PATH */ 
																												}
																												else {
																													/* FALSE PATH */ 
																												}
																											}
																											else if(data_stat == 15) {
																												/* FALSE PATH */ 
																											}
																											else {
																												/* FALSE PATH */ 
																											}
																										}
																										else if(data_stat == 14) {
																											/* FALSE PATH */ 
																										}
																										else {
																											/* FALSE PATH */ 
																										}
																									}
																									else if(data_stat == 13) {
																										/* FALSE PATH */ 
																									}
																									else {
																										/* FALSE PATH */ 
																									}
																								}
																								else {
																									if(data_stat == 13) {
																										read_bits(forward_r_size);
																										if(read_done == 1) {
																											motion_vertical_forward_r = read_int;
																											complement_vertical_forward_r = (forward_f - 1) - motion_vertical_forward_r;
																											data_stat = 14;
L72:;
																											goto L34;
																										}
																										else if(read_done < 1) {
																											goto L72;
																										}
																										else {
																											goto L72;
																										}
																									}
																									else if(data_stat < 13) {
																										if(data_stat < 14) {
																											if(data_stat < 15) {
																												if(data_stat < 16) {
																													if(data_stat < 17) {
																														if(data_stat < 18) {
																															if(data_stat < 19) {
																																if(data_stat < 20) {
																																	goto L34;
																																}
																																else if(data_stat == 20) {
																																	/* FALSE PATH */ 
																																}
																																else {
																																	/* FALSE PATH */ 
																																}
																															}
																															else if(data_stat == 19) {
																																/* FALSE PATH */ 
																															}
																															else {
																																/* FALSE PATH */ 
																															}
																														}
																														else if(data_stat == 18) {
																															/* FALSE PATH */ 
																														}
																														else {
																															/* FALSE PATH */ 
																														}
																													}
																													else if(data_stat == 17) {
																														/* FALSE PATH */ 
																													}
																													else {
																														/* FALSE PATH */ 
																													}
																												}
																												else if(data_stat == 16) {
																													/* FALSE PATH */ 
																												}
																												else {
																													/* FALSE PATH */ 
																												}
																											}
																											else if(data_stat == 15) {
																												/* FALSE PATH */ 
																											}
																											else {
																												/* FALSE PATH */ 
																											}
																										}
																										else if(data_stat == 14) {
																											/* FALSE PATH */ 
																										}
																										else {
																											/* FALSE PATH */ 
																										}
																									}
																									else {
																										if(data_stat == 14) {
																											if(is_back_info == 1) {
																												data_stat = 15;
L73:;
																												goto L34;
																											}
																											else if(is_back_info < 1) {
L74:;
																												b_num = 0;
																												data_type = 6;
																												data_stat = 0;
																												goto L73;
																											}
																											else {
																												goto L74;
																											}
																										}
																										else if(data_stat < 14) {
																											if(data_stat < 15) {
																												if(data_stat < 16) {
																													if(data_stat < 17) {
																														if(data_stat < 18) {
																															if(data_stat < 19) {
																																if(data_stat < 20) {
																																	goto L34;
																																}
																																else if(data_stat == 20) {
																																	/* FALSE PATH */ 
																																}
																																else {
																																	/* FALSE PATH */ 
																																}
																															}
																															else if(data_stat == 19) {
																																/* FALSE PATH */ 
																															}
																															else {
																																/* FALSE PATH */ 
																															}
																														}
																														else if(data_stat == 18) {
																															/* FALSE PATH */ 
																														}
																														else {
																															/* FALSE PATH */ 
																														}
																													}
																													else if(data_stat == 17) {
																														/* FALSE PATH */ 
																													}
																													else {
																														/* FALSE PATH */ 
																													}
																												}
																												else if(data_stat == 16) {
																													/* FALSE PATH */ 
																												}
																												else {
																													/* FALSE PATH */ 
																												}
																											}
																											else if(data_stat == 15) {
																												/* FALSE PATH */ 
																											}
																											else {
																												/* FALSE PATH */ 
																											}
																										}
																										else {
																											if(data_stat == 15) {
																												next_vld(1, 11);
																												if(vld_found >= 0) {
																													data_stat = 16;
L75:;
																													goto L34;
																												}
																												else {
																													goto L75;
																												}
																											}
																											else if(data_stat < 15) {
																												if(data_stat < 16) {
																													if(data_stat < 17) {
																														if(data_stat < 18) {
																															if(data_stat < 19) {
																																if(data_stat < 20) {
																																	goto L34;
																																}
																																else if(data_stat == 20) {
																																	/* FALSE PATH */ 
																																}
																																else {
																																	/* FALSE PATH */ 
																																}
																															}
																															else if(data_stat == 19) {
																																/* FALSE PATH */ 
																															}
																															else {
																																/* FALSE PATH */ 
																															}
																														}
																														else if(data_stat == 18) {
																															/* FALSE PATH */ 
																														}
																														else {
																															/* FALSE PATH */ 
																														}
																													}
																													else if(data_stat == 17) {
																														/* FALSE PATH */ 
																													}
																													else {
																														/* FALSE PATH */ 
																													}
																												}
																												else if(data_stat == 16) {
																													/* FALSE PATH */ 
																												}
																												else {
																													/* FALSE PATH */ 
																												}
																											}
																											else {
																												if(data_stat == 16) {
																													motion_horizontal_backward_code = table2b4[vld_found];
																													if(motion_horizontal_backward_code == 99) {
																														vld_found = -1;
																														data_stat = 15;
L76:;
																														goto L34;
																													}
																													else if(motion_horizontal_backward_code < 99) {
																														read_bits(vld_size);
L77:;
																														if(forward_f == 1) {
																															complement_horizontal_backward_r = 0;
																															data_stat = 18;
																															goto L76;
																														}
																														else if(forward_f < 1) {
L78:;
																															if(motion_horizontal_backward_code == 0) {
																																complement_horizontal_backward_r = 0;
																																data_stat = 18;
																																goto L76;
																															}
																															else if(motion_horizontal_backward_code < 0) {
L79:;
																																data_stat = 17;
																																goto L76;
																															}
																															else {
																																goto L79;
																															}
																														}
																														else {
																															goto L78;
																														}
																													}
																													else {
																														read_bits(vld_size);
																														goto L77;
																													}
																												}
																												else if(data_stat < 16) {
																													if(data_stat < 17) {
																														if(data_stat < 18) {
																															if(data_stat < 19) {
																																if(data_stat < 20) {
																																	goto L34;
																																}
																																else if(data_stat == 20) {
																																	/* FALSE PATH */ 
																																}
																																else {
																																	/* FALSE PATH */ 
																																}
																															}
																															else if(data_stat == 19) {
																																/* FALSE PATH */ 
																															}
																															else {
																																/* FALSE PATH */ 
																															}
																														}
																														else if(data_stat == 18) {
																															/* FALSE PATH */ 
																														}
																														else {
																															/* FALSE PATH */ 
																														}
																													}
																													else if(data_stat == 17) {
																														/* FALSE PATH */ 
																													}
																													else {
																														/* FALSE PATH */ 
																													}
																												}
																												else {
																													if(data_stat == 17) {
																														read_bits(backward_r_size);
																														if(read_done == 1) {
																															motion_horizontal_backward_r = read_int;
																															complement_horizontal_backward_r = (backward_f - 1) - motion_horizontal_backward_r;
																															data_stat = 18;
L80:;
																															goto L34;
																														}
																														else if(read_done < 1) {
																															goto L80;
																														}
																														else {
																															goto L80;
																														}
																													}
																													else if(data_stat < 17) {
																														if(data_stat < 18) {
																															if(data_stat < 19) {
																																if(data_stat < 20) {
																																	goto L34;
																																}
																																else if(data_stat == 20) {
																																	/* FALSE PATH */ 
																																}
																																else {
																																	/* FALSE PATH */ 
																																}
																															}
																															else if(data_stat == 19) {
																																/* FALSE PATH */ 
																															}
																															else {
																																/* FALSE PATH */ 
																															}
																														}
																														else if(data_stat == 18) {
																															/* FALSE PATH */ 
																														}
																														else {
																															/* FALSE PATH */ 
																														}
																													}
																													else {
																														if(data_stat == 18) {
																															next_vld(1, 11);
																															if(vld_found >= 0) {
																																data_stat = 19;
L81:;
																																goto L34;
																															}
																															else {
																																goto L81;
																															}
																														}
																														else if(data_stat < 18) {
																															if(data_stat < 19) {
																																if(data_stat < 20) {
																																	goto L34;
																																}
																																else if(data_stat == 20) {
																																	/* FALSE PATH */ 
																																}
																																else {
																																	/* FALSE PATH */ 
																																}
																															}
																															else if(data_stat == 19) {
																																/* FALSE PATH */ 
																															}
																															else {
																																/* FALSE PATH */ 
																															}
																														}
																														else {
																															if(data_stat == 19) {
																																motion_vertical_backward_code = table2b4[vld_found];
																																if(motion_vertical_backward_code == 99) {
																																	vld_found = -1;
																																	data_stat = 18;
L82:;
																																	goto L34;
																																}
																																else if(motion_vertical_backward_code < 99) {
																																	read_bits(vld_size);
L83:;
																																	if(forward_f == 1) {
																																		complement_vertical_backward_r = 0;
																																		b_num = 0;
																																		data_type = 6;
																																		data_stat = 0;
																																		goto L82;
																																	}
																																	else if(forward_f < 1) {
L84:;
																																		if(motion_vertical_backward_code == 0) {
																																			complement_vertical_backward_r = 0;
																																			b_num = 0;
																																			data_type = 6;
																																			data_stat = 0;
																																			goto L82;
																																		}
																																		else if(motion_vertical_backward_code < 0) {
L85:;
																																			data_stat = 20;
																																			goto L82;
																																		}
																																		else {
																																			goto L85;
																																		}
																																	}
																																	else {
																																		goto L84;
																																	}
																																}
																																else {
																																	read_bits(vld_size);
																																	goto L83;
																																}
																															}
																															else if(data_stat < 19) {
																																if(data_stat < 20) {
																																	goto L34;
																																}
																																else if(data_stat == 20) {
																																	/* FALSE PATH */ 
																																}
																																else {
																																	/* FALSE PATH */ 
																																}
																															}
																															else {
																																if(data_stat == 20) {
																																	read_bits(backward_r_size);
																																	if(read_done == 1) {
																																		motion_vertical_backward_r = read_int;
																																		complement_vertical_backward_r = (backward_f - 1) - motion_vertical_backward_r;
																																		b_num = 0;
																																		data_type = 6;
																																		data_stat = 0;
																																		goto L34;
																																	}
																																	else if(read_done < 1) {
																																		goto L34;
																																	}
																																	else {
																																		goto L34;
																																	}
																																}
																																else if(data_stat < 20) {
																																	goto L34;
																																}
																																else {
																																	goto L34;
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
															else if(data_stat == 3) {
																/* FALSE PATH */ 
															}
															else {
																/* FALSE PATH */ 
															}
														}
														else if(data_stat == 2) {
															/* FALSE PATH */ 
														}
														else {
															/* FALSE PATH */ 
														}
													}
													else if(data_stat == 1) {
														/* FALSE PATH */ 
													}
													else {
														/* FALSE PATH */ 
													}
												}
												else if(data_stat == 0) {
													/* FALSE PATH */ 
												}
												else {
													/* FALSE PATH */ 
												}
											}
											else if(data_type < 5) {
												goto L38;
											}
											else {
												if(data_type == 6) {
													if(data_stat > 0) {
														if(data_stat > 1) {
															if(data_stat > 2) {
																if(data_stat > 3) {
																	if(data_stat == 4) {
																		next_vld(2, 7);
																		if(vld_found >= 0) {
																			data_stat = 5;
L86:;
																			/* END OF PATH at func_vldcontrol@p561#31 */
																		}
																		else {
																			goto L86;
																		}
																	}
																	else if(data_stat < 4) {
																		if(data_stat < 5) {
																			if(data_stat < 6) {
																				if(data_stat < 7) {
																					if(data_stat < 8) {
																						if(data_stat < 9) {
																							if(data_stat < 10) {
																								if(data_stat < 11) {
																									if(data_stat < 12) {
																										if(data_stat < 13) {
																											/* END OF PATH at func_vldcontrol@p561#32 */
																										}
																										else if(data_stat == 13) {
																											/* FALSE PATH */ 
																										}
																										else {
																											/* FALSE PATH */ 
																										}
																									}
																									else if(data_stat == 12) {
																										/* FALSE PATH */ 
																									}
																									else {
																										/* FALSE PATH */ 
																									}
																								}
																								else if(data_stat == 11) {
																									/* FALSE PATH */ 
																								}
																								else {
																									/* FALSE PATH */ 
																								}
																							}
																							else if(data_stat == 10) {
																								/* FALSE PATH */ 
																							}
																							else {
																								/* FALSE PATH */ 
																							}
																						}
																						else if(data_stat == 9) {
																							/* FALSE PATH */ 
																						}
																						else {
																							/* FALSE PATH */ 
																						}
																					}
																					else if(data_stat == 8) {
																						/* FALSE PATH */ 
																					}
																					else {
																						/* FALSE PATH */ 
																					}
																				}
																				else if(data_stat == 7) {
																					/* FALSE PATH */ 
																				}
																				else {
																					/* FALSE PATH */ 
																				}
																			}
																			else if(data_stat == 6) {
																				/* FALSE PATH */ 
																			}
																			else {
																				/* FALSE PATH */ 
																			}
																		}
																		else if(data_stat == 5) {
																			/* FALSE PATH */ 
																		}
																		else {
																			/* FALSE PATH */ 
																		}
																	}
																	else {
																		if(data_stat == 5) {
																			count = table2b5a[vld_found];
																			if(count == -1) {
																				vld_found = -1;
																				data_stat = 4;
L87:;
																				/* END OF PATH at func_vldcontrol@p561#34 */
																			}
																			else if(count < -1) {
																				read_bits(vld_size);
L88:;
																				data_stat = 6;
																				goto L87;
																			}
																			else {
																				read_bits(vld_size);
																				goto L88;
																			}
																		}
																		else if(data_stat < 5) {
																			if(data_stat < 6) {
																				if(data_stat < 7) {
																					if(data_stat < 8) {
																						if(data_stat < 9) {
																							if(data_stat < 10) {
																								if(data_stat < 11) {
																									if(data_stat < 12) {
																										if(data_stat < 13) {
																											/* END OF PATH at func_vldcontrol@p561#35 */
																										}
																										else if(data_stat == 13) {
																											/* FALSE PATH */ 
																										}
																										else {
																											/* FALSE PATH */ 
																										}
																									}
																									else if(data_stat == 12) {
																										/* FALSE PATH */ 
																									}
																									else {
																										/* FALSE PATH */ 
																									}
																								}
																								else if(data_stat == 11) {
																									/* FALSE PATH */ 
																								}
																								else {
																									/* FALSE PATH */ 
																								}
																							}
																							else if(data_stat == 10) {
																								/* FALSE PATH */ 
																							}
																							else {
																								/* FALSE PATH */ 
																							}
																						}
																						else if(data_stat == 9) {
																							/* FALSE PATH */ 
																						}
																						else {
																							/* FALSE PATH */ 
																						}
																					}
																					else if(data_stat == 8) {
																						/* FALSE PATH */ 
																					}
																					else {
																						/* FALSE PATH */ 
																					}
																				}
																				else if(data_stat == 7) {
																					/* FALSE PATH */ 
																				}
																				else {
																					/* FALSE PATH */ 
																				}
																			}
																			else if(data_stat == 6) {
																				/* FALSE PATH */ 
																			}
																			else {
																				/* FALSE PATH */ 
																			}
																		}
																		else {
																			if(data_stat == 6) {
																				if(count == 0) {
																					dct_dc_differential = 0;
																					dct_zz[0] = 0;
																					data_stat = 9;
L89:;
																					/* END OF PATH at func_vldcontrol@p561#37 */
																				}
																				else if(count < 0) {
																					read_bits(count);
L90:;
																					if(read_done == 1) {
																						if(getinbuffer == 1) {
																							dct_zz[0] = read_int;
L91:;
																							data_stat = 9;
																							goto L89;
																						}
																						else if(getinbuffer < 1) {
L92:;
																							vld_temp = -1;
																							vld_temp = vld_temp * count;
																							vld_temp = vld_temp | (dct_dc_differential + 1);
																							dct_zz[0] = vld_temp;
																							goto L91;
																						}
																						else {
																							goto L92;
																						}
																					}
																					else if(read_done < 1) {
																						goto L89;
																					}
																					else {
																						goto L89;
																					}
																				}
																				else {
																					read_bits(count);
																					goto L90;
																				}
																			}
																			else if(data_stat < 6) {
																				if(data_stat < 7) {
																					if(data_stat < 8) {
																						if(data_stat < 9) {
																							if(data_stat < 10) {
																								if(data_stat < 11) {
																									if(data_stat < 12) {
																										if(data_stat < 13) {
																											/* END OF PATH at func_vldcontrol@p561#38 */
																										}
																										else if(data_stat == 13) {
																											/* FALSE PATH */ 
																										}
																										else {
																											/* FALSE PATH */ 
																										}
																									}
																									else if(data_stat == 12) {
																										/* FALSE PATH */ 
																									}
																									else {
																										/* FALSE PATH */ 
																									}
																								}
																								else if(data_stat == 11) {
																									/* FALSE PATH */ 
																								}
																								else {
																									/* FALSE PATH */ 
																								}
																							}
																							else if(data_stat == 10) {
																								/* FALSE PATH */ 
																							}
																							else {
																								/* FALSE PATH */ 
																							}
																						}
																						else if(data_stat == 9) {
																							/* FALSE PATH */ 
																						}
																						else {
																							/* FALSE PATH */ 
																						}
																					}
																					else if(data_stat == 8) {
																						/* FALSE PATH */ 
																					}
																					else {
																						/* FALSE PATH */ 
																					}
																				}
																				else if(data_stat == 7) {
																					/* FALSE PATH */ 
																				}
																				else {
																					/* FALSE PATH */ 
																				}
																			}
																			else {
																				if(data_stat == 7) {
																					look_bits(6);
																					if(read_done == 1) {
																						if(read_int == 1) {
																							read_bits(6);
																							count = 0;
																							data_stat = 8;
L93:;
																							/* END OF PATH at func_vldcontrol@p561#40 */
																						}
																						else if(read_int < 1) {
L94:;
																							data_stat = 11;
																							goto L93;
																						}
																						else {
																							goto L94;
																						}
																					}
																					else if(read_done < 1) {
																						goto L93;
																					}
																					else {
																						goto L93;
																					}
																				}
																				else if(data_stat < 7) {
																					if(data_stat < 8) {
																						if(data_stat < 9) {
																							if(data_stat < 10) {
																								if(data_stat < 11) {
																									if(data_stat < 12) {
																										if(data_stat < 13) {
																											/* END OF PATH at func_vldcontrol@p561#41 */
																										}
																										else if(data_stat == 13) {
																											/* FALSE PATH */ 
																										}
																										else {
																											/* FALSE PATH */ 
																										}
																									}
																									else if(data_stat == 12) {
																										/* FALSE PATH */ 
																									}
																									else {
																										/* FALSE PATH */ 
																									}
																								}
																								else if(data_stat == 11) {
																									/* FALSE PATH */ 
																								}
																								else {
																									/* FALSE PATH */ 
																								}
																							}
																							else if(data_stat == 10) {
																								/* FALSE PATH */ 
																							}
																							else {
																								/* FALSE PATH */ 
																							}
																						}
																						else if(data_stat == 9) {
																							/* FALSE PATH */ 
																						}
																						else {
																							/* FALSE PATH */ 
																						}
																					}
																					else if(data_stat == 8) {
																						/* FALSE PATH */ 
																					}
																					else {
																						/* FALSE PATH */ 
																					}
																				}
																				else {
																					if(data_stat == 8) {
																						if(count == 0) {
																							read_bits(6);
																							if(read_done == 1) {
																								run = read_int;
																								count = 1;
																								if(count == 1) {
																									read_bits(8);
L95:;
																									if(read_done == 1) {
																										if(read_int == 0) {
																											count = 2;
																											if(count == 2) {
																												read_bits(8);
L96:;
																												if(read_done == 1) {
																													level = read_int;
																													count = 4;
L97:;
																													if(count > 3) {
L98:;
																														if(count == 4) {
L99:;
																															i = 0;
L100:;
L101:;
																															if(i > run) {
L102:;
																																data_stat = 9;
L103:;
																																/* END OF PATH at func_vldcontrol@p561#43 */
																															}
																															else {
																																temp = scan[reading_zz];
																																dct_zz[temp] = level;
																																reading_zz = reading_zz + 1;
																																i = i + 1;
																																goto L101;
																															}
																														}
																														else if(count < 4) {
																															/* FALSE PATH */ 
																														}
																														else {
																															/* FALSE PATH */ 
																														}
																													}
																													else if(count == 3) {
																														/* FALSE PATH */ 
																													}
																													else {
																														/* FALSE PATH */ 
																													}
																												}
																												else if(read_done < 1) {
L104:;
																													if(count < 3) {
																														if(count < 4) {
																															goto L103;
																														}
																														else if(count == 4) {
																															/* FALSE PATH */ 
																														}
																														else {
																															/* FALSE PATH */ 
																														}
																													}
																													else if(count == 3) {
																														/* FALSE PATH */ 
																													}
																													else {
																														/* FALSE PATH */ 
																													}
																												}
																												else {
																													goto L104;
																												}
																											}
																											else if(count < 2) {
																												/* FALSE PATH */ 
																											}
																											else {
																												/* FALSE PATH */ 
																											}
																										}
																										else if(read_int < 0) {
																											if(read_int < 128) {
																												if(read_int < 128) {
L105:;
																													level = read_int;
L106:;
																													count = 4;
																													if(count > 2) {
																														goto L97;
																													}
																													else if(count == 2) {
																														/* FALSE PATH */ 
																													}
																													else {
																														/* FALSE PATH */ 
																													}
																												}
																												else {
																													/* FALSE PATH */ 
																												}
																											}
																											else if(read_int == 128) {
																												/* FALSE PATH */ 
																											}
																											else {
																												/* FALSE PATH */ 
																											}
																										}
																										else {
																											if(read_int == 128) {
																												count = 3;
																												if(count > 2) {
																													if(count == 3) {
																														read_bits(8);
L107:;
																														if(read_done == 1) {
																															level = read_int - 256;
																															count = 4;
																															goto L98;
																														}
																														else if(read_done < 1) {
L108:;
																															if(count < 4) {
																																goto L103;
																															}
																															else if(count == 4) {
																																/* FALSE PATH */ 
																															}
																															else {
																																/* FALSE PATH */ 
																															}
																														}
																														else {
																															goto L108;
																														}
																													}
																													else if(count < 3) {
																														/* FALSE PATH */ 
																													}
																													else {
																														/* FALSE PATH */ 
																													}
																												}
																												else if(count == 2) {
																													/* FALSE PATH */ 
																												}
																												else {
																													/* FALSE PATH */ 
																												}
																											}
																											else if(read_int < 128) {
																												if(read_int < 128) {
																													goto L105;
																												}
																												else {
																													/* FALSE PATH */ 
																												}
																											}
																											else {
																												if(read_int >= 128) {
																													level = read_int - 256;
																													goto L106;
																												}
																												else {
																													/* FALSE PATH */ 
																												}
																											}
																										}
																									}
																									else if(read_done < 1) {
L109:;
																										if(count < 2) {
																											if(count < 3) {
																												if(count < 4) {
																													goto L103;
																												}
																												else if(count == 4) {
																													/* FALSE PATH */ 
																												}
																												else {
																													/* FALSE PATH */ 
																												}
																											}
																											else if(count == 3) {
																												/* FALSE PATH */ 
																											}
																											else {
																												/* FALSE PATH */ 
																											}
																										}
																										else if(count == 2) {
																											/* FALSE PATH */ 
																										}
																										else {
																											/* FALSE PATH */ 
																										}
																									}
																									else {
																										goto L109;
																									}
																								}
																								else if(count < 1) {
																									/* FALSE PATH */ 
																								}
																								else {
																									/* FALSE PATH */ 
																								}
																							}
																							else if(read_done < 1) {
L110:;
																								if(count < 1) {
																									if(count < 2) {
																										if(count < 3) {
																											if(count < 4) {
																												goto L103;
																											}
																											else if(count == 4) {
																												/* FALSE PATH */ 
																											}
																											else {
																												/* FALSE PATH */ 
																											}
																										}
																										else if(count == 3) {
																											/* FALSE PATH */ 
																										}
																										else {
																											/* FALSE PATH */ 
																										}
																									}
																									else if(count == 2) {
																										/* FALSE PATH */ 
																									}
																									else {
																										/* FALSE PATH */ 
																									}
																								}
																								else if(count == 1) {
																									/* FALSE PATH */ 
																								}
																								else {
																									/* FALSE PATH */ 
																								}
																							}
																							else {
																								goto L110;
																							}
																						}
																						else if(count < 0) {
																							if(count < 1) {
																								if(count < 2) {
																									if(count < 3) {
																										if(count < 4) {
																											goto L103;
																										}
																										else if(count == 4) {
																											/* FALSE PATH */ 
																										}
																										else {
																											/* FALSE PATH */ 
																										}
																									}
																									else if(count == 3) {
																										/* FALSE PATH */ 
																									}
																									else {
																										/* FALSE PATH */ 
																									}
																								}
																								else if(count == 2) {
																									/* FALSE PATH */ 
																								}
																								else {
																									/* FALSE PATH */ 
																								}
																							}
																							else if(count == 1) {
																								/* FALSE PATH */ 
																							}
																							else {
																								/* FALSE PATH */ 
																							}
																						}
																						else {
																							if(count == 1) {
																								read_bits(8);
																								goto L95;
																							}
																							else if(count < 1) {
																								if(count < 2) {
																									if(count < 3) {
																										if(count < 4) {
																											goto L103;
																										}
																										else if(count == 4) {
																											/* FALSE PATH */ 
																										}
																										else {
																											/* FALSE PATH */ 
																										}
																									}
																									else if(count == 3) {
																										/* FALSE PATH */ 
																									}
																									else {
																										/* FALSE PATH */ 
																									}
																								}
																								else if(count == 2) {
																									/* FALSE PATH */ 
																								}
																								else {
																									/* FALSE PATH */ 
																								}
																							}
																							else {
																								if(count == 2) {
																									read_bits(8);
																									goto L96;
																								}
																								else if(count < 2) {
																									if(count < 3) {
																										if(count < 4) {
																											goto L103;
																										}
																										else if(count == 4) {
																											/* FALSE PATH */ 
																										}
																										else {
																											/* FALSE PATH */ 
																										}
																									}
																									else if(count == 3) {
																										/* FALSE PATH */ 
																									}
																									else {
																										/* FALSE PATH */ 
																									}
																								}
																								else {
																									if(count == 3) {
																										read_bits(8);
																										goto L107;
																									}
																									else if(count < 3) {
																										if(count < 4) {
																											goto L103;
																										}
																										else if(count == 4) {
																											/* FALSE PATH */ 
																										}
																										else {
																											/* FALSE PATH */ 
																										}
																									}
																									else {
																										if(count == 4) {
																											goto L99;
																										}
																										else if(count < 4) {
																											goto L103;
																										}
																										else {
																											goto L103;
																										}
																									}
																								}
																							}
																						}
																					}
																					else if(data_stat < 8) {
																						if(data_stat < 9) {
																							if(data_stat < 10) {
																								if(data_stat < 11) {
																									if(data_stat < 12) {
																										if(data_stat < 13) {
																											/* END OF PATH at func_vldcontrol@p561#44 */
																										}
																										else if(data_stat == 13) {
																											/* FALSE PATH */ 
																										}
																										else {
																											/* FALSE PATH */ 
																										}
																									}
																									else if(data_stat == 12) {
																										/* FALSE PATH */ 
																									}
																									else {
																										/* FALSE PATH */ 
																									}
																								}
																								else if(data_stat == 11) {
																									/* FALSE PATH */ 
																								}
																								else {
																									/* FALSE PATH */ 
																								}
																							}
																							else if(data_stat == 10) {
																								/* FALSE PATH */ 
																							}
																							else {
																								/* FALSE PATH */ 
																							}
																						}
																						else if(data_stat == 9) {
																							/* FALSE PATH */ 
																						}
																						else {
																							/* FALSE PATH */ 
																						}
																					}
																					else {
																						if(data_stat == 9) {
																							look_bits(6);
																							if(read_done == 1) {
																								if(read_int == 1) {
																									read_bits(6);
																									count = 0;
																									data_stat = 10;
L111:;
																									/* END OF PATH at func_vldcontrol@p561#46 */
																								}
																								else if(read_int < 1) {
L112:;
																									data_stat = 11;
																									goto L111;
																								}
																								else {
																									goto L112;
																								}
																							}
																							else if(read_done < 1) {
																								goto L111;
																							}
																							else {
																								goto L111;
																							}
																						}
																						else if(data_stat < 9) {
																							if(data_stat < 10) {
																								if(data_stat < 11) {
																									if(data_stat < 12) {
																										if(data_stat < 13) {
																											/* END OF PATH at func_vldcontrol@p561#47 */
																										}
																										else if(data_stat == 13) {
																											/* FALSE PATH */ 
																										}
																										else {
																											/* FALSE PATH */ 
																										}
																									}
																									else if(data_stat == 12) {
																										/* FALSE PATH */ 
																									}
																									else {
																										/* FALSE PATH */ 
																									}
																								}
																								else if(data_stat == 11) {
																									/* FALSE PATH */ 
																								}
																								else {
																									/* FALSE PATH */ 
																								}
																							}
																							else if(data_stat == 10) {
																								/* FALSE PATH */ 
																							}
																							else {
																								/* FALSE PATH */ 
																							}
																						}
																						else {
																							if(data_stat == 10) {
																								if(count == 0) {
																									read_bits(6);
																									if(read_done == 1) {
																										run = read_int;
																										count = 1;
																										if(count == 1) {
																											read_bits(8);
L113:;
																											if(read_done == 1) {
																												if(read_int == 0) {
																													count = 2;
																													if(count == 2) {
																														read_bits(8);
L114:;
																														if(read_done == 1) {
																															level = read_int;
																															count = 4;
L115:;
																															if(count > 3) {
L116:;
																																if(count == 4) {
L117:;
																																	i = 0;
L118:;
L119:;
																																	if(i > run) {
L120:;
																																		data_stat = 9;
L121:;
																																		/* END OF PATH at func_vldcontrol@p561#49 */
																																	}
																																	else {
																																		temp = scan[reading_zz];
																																		dct_zz[temp] = level;
																																		reading_zz = reading_zz + 1;
																																		i = i + 1;
																																		goto L119;
																																	}
																																}
																																else if(count < 4) {
																																	/* FALSE PATH */ 
																																}
																																else {
																																	/* FALSE PATH */ 
																																}
																															}
																															else if(count == 3) {
																																/* FALSE PATH */ 
																															}
																															else {
																																/* FALSE PATH */ 
																															}
																														}
																														else if(read_done < 1) {
L122:;
																															if(count < 3) {
																																if(count < 4) {
																																	goto L121;
																																}
																																else if(count == 4) {
																																	/* FALSE PATH */ 
																																}
																																else {
																																	/* FALSE PATH */ 
																																}
																															}
																															else if(count == 3) {
																																/* FALSE PATH */ 
																															}
																															else {
																																/* FALSE PATH */ 
																															}
																														}
																														else {
																															goto L122;
																														}
																													}
																													else if(count < 2) {
																														/* FALSE PATH */ 
																													}
																													else {
																														/* FALSE PATH */ 
																													}
																												}
																												else if(read_int < 0) {
																													if(read_int < 128) {
																														if(read_int < 128) {
L123:;
																															level = read_int;
L124:;
																															count = 4;
																															if(count > 2) {
																																goto L115;
																															}
																															else if(count == 2) {
																																/* FALSE PATH */ 
																															}
																															else {
																																/* FALSE PATH */ 
																															}
																														}
																														else {
																															/* FALSE PATH */ 
																														}
																													}
																													else if(read_int == 128) {
																														/* FALSE PATH */ 
																													}
																													else {
																														/* FALSE PATH */ 
																													}
																												}
																												else {
																													if(read_int == 128) {
																														count = 3;
																														if(count > 2) {
																															if(count == 3) {
																																read_bits(8);
L125:;
																																if(read_done == 1) {
																																	level = read_int - 256;
																																	count = 4;
																																	goto L116;
																																}
																																else if(read_done < 1) {
L126:;
																																	if(count < 4) {
																																		goto L121;
																																	}
																																	else if(count == 4) {
																																		/* FALSE PATH */ 
																																	}
																																	else {
																																		/* FALSE PATH */ 
																																	}
																																}
																																else {
																																	goto L126;
																																}
																															}
																															else if(count < 3) {
																																/* FALSE PATH */ 
																															}
																															else {
																																/* FALSE PATH */ 
																															}
																														}
																														else if(count == 2) {
																															/* FALSE PATH */ 
																														}
																														else {
																															/* FALSE PATH */ 
																														}
																													}
																													else if(read_int < 128) {
																														if(read_int < 128) {
																															goto L123;
																														}
																														else {
																															/* FALSE PATH */ 
																														}
																													}
																													else {
																														if(read_int >= 128) {
																															level = read_int - 256;
																															goto L124;
																														}
																														else {
																															/* FALSE PATH */ 
																														}
																													}
																												}
																											}
																											else if(read_done < 1) {
L127:;
																												if(count < 2) {
																													if(count < 3) {
																														if(count < 4) {
																															goto L121;
																														}
																														else if(count == 4) {
																															/* FALSE PATH */ 
																														}
																														else {
																															/* FALSE PATH */ 
																														}
																													}
																													else if(count == 3) {
																														/* FALSE PATH */ 
																													}
																													else {
																														/* FALSE PATH */ 
																													}
																												}
																												else if(count == 2) {
																													/* FALSE PATH */ 
																												}
																												else {
																													/* FALSE PATH */ 
																												}
																											}
																											else {
																												goto L127;
																											}
																										}
																										else if(count < 1) {
																											/* FALSE PATH */ 
																										}
																										else {
																											/* FALSE PATH */ 
																										}
																									}
																									else if(read_done < 1) {
L128:;
																										if(count < 1) {
																											if(count < 2) {
																												if(count < 3) {
																													if(count < 4) {
																														goto L121;
																													}
																													else if(count == 4) {
																														/* FALSE PATH */ 
																													}
																													else {
																														/* FALSE PATH */ 
																													}
																												}
																												else if(count == 3) {
																													/* FALSE PATH */ 
																												}
																												else {
																													/* FALSE PATH */ 
																												}
																											}
																											else if(count == 2) {
																												/* FALSE PATH */ 
																											}
																											else {
																												/* FALSE PATH */ 
																											}
																										}
																										else if(count == 1) {
																											/* FALSE PATH */ 
																										}
																										else {
																											/* FALSE PATH */ 
																										}
																									}
																									else {
																										goto L128;
																									}
																								}
																								else if(count < 0) {
																									if(count < 1) {
																										if(count < 2) {
																											if(count < 3) {
																												if(count < 4) {
																													goto L121;
																												}
																												else if(count == 4) {
																													/* FALSE PATH */ 
																												}
																												else {
																													/* FALSE PATH */ 
																												}
																											}
																											else if(count == 3) {
																												/* FALSE PATH */ 
																											}
																											else {
																												/* FALSE PATH */ 
																											}
																										}
																										else if(count == 2) {
																											/* FALSE PATH */ 
																										}
																										else {
																											/* FALSE PATH */ 
																										}
																									}
																									else if(count == 1) {
																										/* FALSE PATH */ 
																									}
																									else {
																										/* FALSE PATH */ 
																									}
																								}
																								else {
																									if(count == 1) {
																										read_bits(8);
																										goto L113;
																									}
																									else if(count < 1) {
																										if(count < 2) {
																											if(count < 3) {
																												if(count < 4) {
																													goto L121;
																												}
																												else if(count == 4) {
																													/* FALSE PATH */ 
																												}
																												else {
																													/* FALSE PATH */ 
																												}
																											}
																											else if(count == 3) {
																												/* FALSE PATH */ 
																											}
																											else {
																												/* FALSE PATH */ 
																											}
																										}
																										else if(count == 2) {
																											/* FALSE PATH */ 
																										}
																										else {
																											/* FALSE PATH */ 
																										}
																									}
																									else {
																										if(count == 2) {
																											read_bits(8);
																											goto L114;
																										}
																										else if(count < 2) {
																											if(count < 3) {
																												if(count < 4) {
																													goto L121;
																												}
																												else if(count == 4) {
																													/* FALSE PATH */ 
																												}
																												else {
																													/* FALSE PATH */ 
																												}
																											}
																											else if(count == 3) {
																												/* FALSE PATH */ 
																											}
																											else {
																												/* FALSE PATH */ 
																											}
																										}
																										else {
																											if(count == 3) {
																												read_bits(8);
																												goto L125;
																											}
																											else if(count < 3) {
																												if(count < 4) {
																													goto L121;
																												}
																												else if(count == 4) {
																													/* FALSE PATH */ 
																												}
																												else {
																													/* FALSE PATH */ 
																												}
																											}
																											else {
																												if(count == 4) {
																													goto L117;
																												}
																												else if(count < 4) {
																													goto L121;
																												}
																												else {
																													goto L121;
																												}
																											}
																										}
																									}
																								}
																							}
																							else if(data_stat < 10) {
																								if(data_stat < 11) {
																									if(data_stat < 12) {
																										if(data_stat < 13) {
																											/* END OF PATH at func_vldcontrol@p561#50 */
																										}
																										else if(data_stat == 13) {
																											/* FALSE PATH */ 
																										}
																										else {
																											/* FALSE PATH */ 
																										}
																									}
																									else if(data_stat == 12) {
																										/* FALSE PATH */ 
																									}
																									else {
																										/* FALSE PATH */ 
																									}
																								}
																								else if(data_stat == 11) {
																									/* FALSE PATH */ 
																								}
																								else {
																									/* FALSE PATH */ 
																								}
																							}
																							else {
																								if(data_stat == 11) {
																									look_bits(2);
																									if(read_done == 1) {
																										if(read_int == 2) {
																											data_stat = 10;
L129:;
																											/* END OF PATH at func_vldcontrol@p561#52 */
																										}
																										else if(read_int < 2) {
L130:;
																											data_stat = 12;
																											goto L129;
																										}
																										else {
																											goto L130;
																										}
																									}
																									else if(read_done < 1) {
																										goto L129;
																									}
																									else {
																										goto L129;
																									}
																								}
																								else if(data_stat < 11) {
																									if(data_stat < 12) {
																										if(data_stat < 13) {
																											/* END OF PATH at func_vldcontrol@p561#53 */
																										}
																										else if(data_stat == 13) {
																											/* FALSE PATH */ 
																										}
																										else {
																											/* FALSE PATH */ 
																										}
																									}
																									else if(data_stat == 12) {
																										/* FALSE PATH */ 
																									}
																									else {
																										/* FALSE PATH */ 
																									}
																								}
																								else {
																									if(data_stat == 12) {
																										read_bits(2);
																										if(read_done == 1) {
																											if(b_num == 5) {
																												data_stat = 13;
L131:;
																												/* END OF PATH at func_vldcontrol@p561#55 */
																											}
																											else if(b_num < 5) {
L132:;
																												b_num = b_num + 1;
																												data_stat = 0;
																												goto L131;
																											}
																											else {
																												goto L132;
																											}
																										}
																										else if(read_done < 1) {
																											goto L131;
																										}
																										else {
																											goto L131;
																										}
																									}
																									else if(data_stat < 12) {
																										if(data_stat < 13) {
																											/* END OF PATH at func_vldcontrol@p561#56 */
																										}
																										else if(data_stat == 13) {
																											/* FALSE PATH */ 
																										}
																										else {
																											/* FALSE PATH */ 
																										}
																									}
																									else {
																										if(data_stat == 13) {
																											look_bits(23);
																											if(read_done == 1) {
																												if(read_int == 0) {
																													data_type = 0;
																													/* END OF PATH at func_vldcontrol@p561#58 */
																												}
																												else if(read_int < 0) {
L133:;
																													count = 0;
																													data_type = 5;
																													data_stat = 0;
																													/* END OF PATH at func_vldcontrol@p561#59 */
																												}
																												else {
																													goto L133;
																												}
																											}
																											else if(read_done < 1) {
																												/* END OF PATH at func_vldcontrol@p561#60 */
																											}
																											else {
																												/* END OF PATH at func_vldcontrol@p561#61 */
																											}
																										}
																										else if(data_stat < 13) {
																											/* END OF PATH at func_vldcontrol@p561#62 */
																										}
																										else {
																											/* END OF PATH at func_vldcontrol@p561#63 */
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
																else if(data_stat == 3) {
																	/* FALSE PATH */ 
																}
																else {
																	/* FALSE PATH */ 
																}
															}
															else if(data_stat == 2) {
																/* FALSE PATH */ 
															}
															else {
																/* FALSE PATH */ 
															}
														}
														else if(data_stat == 1) {
															/* FALSE PATH */ 
														}
														else {
															/* FALSE PATH */ 
														}
													}
													else if(data_stat == 0) {
														/* FALSE PATH */ 
													}
													else {
														/* FALSE PATH */ 
													}
												}
												else if(data_type < 6) {
													/* END OF PATH at func_vldcontrol@p561#64 */
												}
												else {
													/* END OF PATH at func_vldcontrol@p561#65 */
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
			else if(clock < 1) {
				/* END OF PATH at func_vldcontrol@p561#66 */
			}
			else {
				/* END OF PATH at func_vldcontrol@p561#67 */
			}
		}
	}
	else if(data_type == 7) {
		/* FALSE PATH */ 
	}
	else {
		/* FALSE PATH */ 
	}
}

int sign(int dec )
{
	if(dec < 0) {
		return (-1);
		/* END OF PATH at func_sign@p2#1 */
	}
	else {
		if(dec > 0) {
			return (1);
			/* END OF PATH at func_sign@p5#1 */
		}
		else {
			return (0);
			/* END OF PATH at func_sign@p7#1 */
		}
	}
}

void dequant(void)
{ register int i ;
register int n ;
register int deq_temp_bit_vector ;
int tmp ;
int tmp___0 ;
int tmp___1 ;
	if(mb_type == 0) {
		n = 0;
L1:;
L2:;
		if(n > 63) {
L3:;
			if(b_num == 0) {
				curr_block[0] = dct_zz[0] * 8;
				if(macroblock_address - past_intra_address > 1) {
					curr_block[0] = curr_block[0] + 1024;
L4:;
					dct_dc_y_past = curr_block[0];
L5:;
L6:;
					/* END OF PATH at func_dequant@p71#1 */
				}
				else {
					curr_block[0] = curr_block[0] + dct_dc_y_past;
					goto L4;
				}
			}
			else if(b_num < 0) {
				if(b_num < 4) {
L7:;
					curr_block[0] = dct_zz[0] * 8 + dct_dc_y_past;
					dct_dc_y_past = curr_block[0];
					goto L5;
				}
				else {
					/* FALSE PATH */ 
				}
			}
			else {
				if(b_num < 4) {
					goto L7;
				}
				else {
					if(b_num == 4) {
						curr_block[0] = dct_zz[0] * 8;
						if(macroblock_address - past_intra_address > 1) {
							curr_block[0] = curr_block[0] + 1024;
L8:;
							dct_dc_cb_past = curr_block[0];
							goto L5;
						}
						else {
							curr_block[0] = curr_block[0] + dct_dc_cb_past;
							goto L8;
						}
					}
					else if(b_num > 4) {
						if(b_num == 5) {
							curr_block[0] = dct_zz[0] * 8;
							if(macroblock_address - past_intra_address > 1) {
								curr_block[0] = curr_block[0] + 1024;
L9:;
								dct_dc_cr_past = curr_block[0];
								past_intra_address = macroblock_address;
								goto L5;
							}
							else {
								curr_block[0] = curr_block[0] + dct_dc_cr_past;
								goto L9;
							}
						}
						else if(b_num < 5) {
							goto L5;
						}
						else {
							goto L5;
						}
					}
					else {
						/* FALSE PATH */ 
					}
				}
			}
		}
		else {
			i = scan[n];
			curr_block[n] = (((dct_zz[i] * quantizer_scale) * intra_quant[n]) * 2) / 16;
			deq_temp_bit_vector = curr_block[n];
			if(deq_temp_bit_vector == 0) {
				tmp = sign(curr_block[n]);
				curr_block[n] = curr_block[n] - tmp;
L10:;
				if(curr_block[n] > 2047) {
					curr_block[n] = 2047;
L11:;
					if(curr_block[n] < -2047) {
						curr_block[n] = -2047;
L12:;
						n = n + 1;
						goto L2;
					}
					else {
						goto L12;
					}
				}
				else {
					goto L11;
				}
			}
			else if(deq_temp_bit_vector < 0) {
				goto L10;
			}
			else {
				goto L10;
			}
		}
	}
	else if(mb_type < 0) {
L13:;
		n = 0;
L14:;
L15:;
		if(n > 63) {
L16:;
			goto L6;
		}
		else {
			i = scan[n];
			tmp___0 = sign(dct_zz[i]);
			curr_block[n] = (((dct_zz[i] * 2 + tmp___0) * quantizer_scale) * non_intra_quant[n]) / 16;
			deq_temp_bit_vector = curr_block[n];
			if(deq_temp_bit_vector == 0) {
				tmp___1 = sign(curr_block[n]);
				curr_block[n] = curr_block[n] - tmp___1;
L17:;
				if(curr_block[n] > 2047) {
					curr_block[n] = 2047;
L18:;
					if(curr_block[n] < -2047) {
						curr_block[n] = -2047;
L19:;
						dct_zz[i] = 0;
						if(dct_zz[i] > 0) {
L20:;
							curr_block[n] = 0;
L21:;
							n = n + 1;
							goto L15;
						}
						else if(dct_zz[i] < 0) {
							goto L20;
						}
						else {
							goto L21;
						}
					}
					else {
						goto L19;
					}
				}
				else {
					goto L18;
				}
			}
			else if(deq_temp_bit_vector < 0) {
				goto L17;
			}
			else {
				goto L17;
			}
		}
	}
	else {
		goto L13;
	}
}

void idct(void)
{ register int i ;
register int j ;
register int k ;
	i = 0;
L1:;
L2:;
	if(i > 63) {
L3:;
		i = 0;
L4:;
L5:;
		if(i > 7) {
L6:;
			i = 0;
L7:;
L8:;
			if(i > 63) {
L9:;
				i = 0;
L10:;
L11:;
				if(i > 7) {
L12:;
					/* END OF PATH at func_idct@p50#1 */
				}
				else {
					j = 0;
L13:;
L14:;
					if(j > 7) {
L15:;
						i = i + 1;
						goto L11;
					}
					else {
						k = 0;
L16:;
L17:;
						if(k > 7) {
L18:;
							curr_block[i * 8 + j] = curr_block[i * 8 + j] / 8192;
							j = j + 1;
							goto L14;
						}
						else {
							curr_block[i * 8 + j] = curr_block[i * 8 + j] + temp_block[i * 8 + k] * idct_coeff[j * 8 + k];
							k = k + 1;
							goto L17;
						}
					}
				}
			}
			else {
				curr_block[i] = 0;
				i = i + 1;
				goto L8;
			}
		}
		else {
			j = 0;
L19:;
L20:;
			if(j > 7) {
L21:;
				i = i + 1;
				goto L5;
			}
			else {
				k = 0;
L22:;
L23:;
				if(k > 7) {
L24:;
					temp_block[i * 8 + j] = temp_block[i * 8 + j] / 8192;
					j = j + 1;
					goto L20;
				}
				else {
					temp_block[i * 8 + j] = temp_block[i * 8 + j] + idct_coeff[i * 8 + k] * curr_block[k * 8 + j];
					k = k + 1;
					goto L23;
				}
			}
		}
	}
	else {
		temp_block[i] = 0;
		i = i + 1;
		goto L2;
	}
}

void calculate_forward_motion(int new_prev_values )
{
	right_little = motion_horizontal_forward_code * forward_f;
	if(right_little == 0) {
		right_big = 0;
L1:;
		down_little = motion_vertical_forward_code * forward_f;
		if(down_little == 0) {
			down_big = 0;
L2:;
			max = forward_f * 16 - 1;
			min = - (forward_f * 16);
			new_vector = recon_right_for_prev + right_little;
			if(new_vector <= max) {
				if(new_vector >= min) {
					recon_right_for = recon_right_for_prev + right_little;
L3:;
L4:;
					if(new_prev_values == 1) {
						recon_right_for_prev = recon_right_for;
						if(full_pel_forward_vector == 1) {
							pred_temp_bit_vector = recon_right_for;
							pred_temp_bit_vector = pred_temp_bit_vector * 2;
							recon_right_for = pred_temp_bit_vector;
							new_vector = recon_down_for_prev + down_little;
							if(new_vector <= max) {
								if(new_vector >= min) {
									recon_down_for = recon_down_for_prev + down_little;
L5:;
L6:;
									if(new_prev_values == 1) {
										recon_down_for_prev = recon_down_for;
L7:;
										if(full_pel_forward_vector == 1) {
											pred_temp_bit_vector = recon_down_for;
											if(pred_temp_bit_vector < 1) {
												pred_temp_bit_vector = 1;
L8:;
												recon_down_for = pred_temp_bit_vector;
L9:;
												if(b_num > 3) {
													recon_right_for = recon_right_for / 2;
													recon_down_for = recon_down_for / 2;
L10:;
													pred_temp_bit_vector = recon_right_for;
													pred_temp_bit_vector = pred_temp_bit_vector * 21;
													right_for = pred_temp_bit_vector;
													pred_temp_bit_vector = recon_down_for;
													pred_temp_bit_vector = pred_temp_bit_vector / 2;
													down_for = pred_temp_bit_vector;
													right_half_for = recon_right_for - right_for * 2;
													down_half_for = recon_down_for - down_for * 2;
													/* END OF PATH at func_calculate_forward_motion@p65#1 */
												}
												else {
													goto L10;
												}
											}
											else {
												pred_temp_bit_vector = 0;
												goto L8;
											}
										}
										else if(full_pel_forward_vector < 1) {
											/* FALSE PATH */ 
										}
										else {
											/* FALSE PATH */ 
										}
									}
									else if(new_prev_values < 1) {
										/* FALSE PATH */ 
									}
									else {
										/* FALSE PATH */ 
									}
								}
								else {
									recon_down_for = recon_down_for_prev + down_big;
									goto L5;
								}
							}
							else {
								recon_down_for = recon_down_for_prev + down_big;
								goto L6;
							}
						}
						else if(full_pel_forward_vector < 1) {
							new_vector = recon_down_for_prev + down_little;
							if(new_vector <= max) {
								if(new_vector >= min) {
									recon_down_for = recon_down_for_prev + down_little;
L11:;
L12:;
									if(new_prev_values == 1) {
										recon_down_for_prev = recon_down_for;
L13:;
										if(full_pel_forward_vector < 1) {
											goto L9;
										}
										else if(full_pel_forward_vector == 1) {
											/* FALSE PATH */ 
										}
										else {
											/* FALSE PATH */ 
										}
									}
									else if(new_prev_values < 1) {
										/* FALSE PATH */ 
									}
									else {
										/* FALSE PATH */ 
									}
								}
								else {
									recon_down_for = recon_down_for_prev + down_big;
									goto L11;
								}
							}
							else {
								recon_down_for = recon_down_for_prev + down_big;
								goto L12;
							}
						}
						else {
							new_vector = recon_down_for_prev + down_little;
							if(new_vector <= max) {
								if(new_vector >= min) {
									recon_down_for = recon_down_for_prev + down_little;
L14:;
L15:;
									if(new_prev_values == 1) {
										recon_down_for_prev = recon_down_for;
L16:;
										if(full_pel_forward_vector > 1) {
											goto L9;
										}
										else if(full_pel_forward_vector == 1) {
											/* FALSE PATH */ 
										}
										else {
											/* FALSE PATH */ 
										}
									}
									else if(new_prev_values < 1) {
										/* FALSE PATH */ 
									}
									else {
										/* FALSE PATH */ 
									}
								}
								else {
									recon_down_for = recon_down_for_prev + down_big;
									goto L14;
								}
							}
							else {
								recon_down_for = recon_down_for_prev + down_big;
								goto L15;
							}
						}
					}
					else if(new_prev_values < 1) {
						if(full_pel_forward_vector == 1) {
							pred_temp_bit_vector = recon_right_for;
							pred_temp_bit_vector = pred_temp_bit_vector * 2;
							recon_right_for = pred_temp_bit_vector;
							new_vector = recon_down_for_prev + down_little;
							if(new_vector <= max) {
								if(new_vector >= min) {
									recon_down_for = recon_down_for_prev + down_little;
L17:;
L18:;
									if(new_prev_values < 1) {
										goto L7;
									}
									else if(new_prev_values == 1) {
										/* FALSE PATH */ 
									}
									else {
										/* FALSE PATH */ 
									}
								}
								else {
									recon_down_for = recon_down_for_prev + down_big;
									goto L17;
								}
							}
							else {
								recon_down_for = recon_down_for_prev + down_big;
								goto L18;
							}
						}
						else if(full_pel_forward_vector < 1) {
							new_vector = recon_down_for_prev + down_little;
							if(new_vector <= max) {
								if(new_vector >= min) {
									recon_down_for = recon_down_for_prev + down_little;
L19:;
L20:;
									if(new_prev_values < 1) {
										goto L13;
									}
									else if(new_prev_values == 1) {
										/* FALSE PATH */ 
									}
									else {
										/* FALSE PATH */ 
									}
								}
								else {
									recon_down_for = recon_down_for_prev + down_big;
									goto L19;
								}
							}
							else {
								recon_down_for = recon_down_for_prev + down_big;
								goto L20;
							}
						}
						else {
							new_vector = recon_down_for_prev + down_little;
							if(new_vector <= max) {
								if(new_vector >= min) {
									recon_down_for = recon_down_for_prev + down_little;
L21:;
L22:;
									if(new_prev_values < 1) {
										goto L16;
									}
									else if(new_prev_values == 1) {
										/* FALSE PATH */ 
									}
									else {
										/* FALSE PATH */ 
									}
								}
								else {
									recon_down_for = recon_down_for_prev + down_big;
									goto L21;
								}
							}
							else {
								recon_down_for = recon_down_for_prev + down_big;
								goto L22;
							}
						}
					}
					else {
						if(full_pel_forward_vector == 1) {
							pred_temp_bit_vector = recon_right_for;
							pred_temp_bit_vector = pred_temp_bit_vector * 2;
							recon_right_for = pred_temp_bit_vector;
							new_vector = recon_down_for_prev + down_little;
							if(new_vector <= max) {
								if(new_vector >= min) {
									recon_down_for = recon_down_for_prev + down_little;
L23:;
L24:;
									if(new_prev_values > 1) {
										goto L7;
									}
									else if(new_prev_values == 1) {
										/* FALSE PATH */ 
									}
									else {
										/* FALSE PATH */ 
									}
								}
								else {
									recon_down_for = recon_down_for_prev + down_big;
									goto L23;
								}
							}
							else {
								recon_down_for = recon_down_for_prev + down_big;
								goto L24;
							}
						}
						else if(full_pel_forward_vector < 1) {
							new_vector = recon_down_for_prev + down_little;
							if(new_vector <= max) {
								if(new_vector >= min) {
									recon_down_for = recon_down_for_prev + down_little;
L25:;
L26:;
									if(new_prev_values > 1) {
										goto L13;
									}
									else if(new_prev_values == 1) {
										/* FALSE PATH */ 
									}
									else {
										/* FALSE PATH */ 
									}
								}
								else {
									recon_down_for = recon_down_for_prev + down_big;
									goto L25;
								}
							}
							else {
								recon_down_for = recon_down_for_prev + down_big;
								goto L26;
							}
						}
						else {
							new_vector = recon_down_for_prev + down_little;
							if(new_vector <= max) {
								if(new_vector >= min) {
									recon_down_for = recon_down_for_prev + down_little;
L27:;
L28:;
									if(new_prev_values > 1) {
										goto L16;
									}
									else if(new_prev_values == 1) {
										/* FALSE PATH */ 
									}
									else {
										/* FALSE PATH */ 
									}
								}
								else {
									recon_down_for = recon_down_for_prev + down_big;
									goto L27;
								}
							}
							else {
								recon_down_for = recon_down_for_prev + down_big;
								goto L28;
							}
						}
					}
				}
				else {
					recon_right_for = recon_right_for_prev + right_big;
					goto L3;
				}
			}
			else {
				recon_right_for = recon_right_for_prev + right_big;
				goto L4;
			}
		}
		else if(down_little < 0) {
			if(down_little <= 0) {
				down_little = down_little + complement_vertical_forward_r;
				down_big = down_little + forward_f * 32;
				goto L2;
			}
			else {
				/* FALSE PATH */ 
			}
		}
		else {
			if(down_little > 0) {
				down_little = down_little - complement_vertical_forward_r;
				down_big = down_little - forward_f * 32;
				goto L2;
			}
			else {
				/* FALSE PATH */ 
			}
		}
	}
	else if(right_little < 0) {
		if(right_little <= 0) {
			right_little = right_little + complement_horizontal_forward_r;
			right_big = right_little + forward_f * 32;
			goto L1;
		}
		else {
			/* FALSE PATH */ 
		}
	}
	else {
		if(right_little > 0) {
			right_little = right_little - complement_horizontal_forward_r;
			right_big = right_little - forward_f * 32;
			goto L1;
		}
		else {
			/* FALSE PATH */ 
		}
	}
}

void calculate_backward_motion(int new_prev_values )
{
	right_little = motion_horizontal_backward_code * backward_f;
	if(right_little == 0) {
		right_big = 0;
L1:;
		down_little = motion_vertical_backward_code * backward_f;
		if(down_little == 0) {
			down_big = 0;
L2:;
			max = backward_f * 16 - 1;
			min = - (backward_f * 16);
			new_vector = recon_right_back_prev + right_little;
			if(new_vector <= max) {
				if(new_vector >= min) {
					recon_right_back = recon_right_back_prev + right_little;
L3:;
L4:;
					if(new_prev_values == 1) {
						recon_right_back_prev = recon_right_back;
						if(full_pel_backward_vector == 1) {
							pred_temp_bit_vector = recon_right_back;
							pred_temp_bit_vector = pred_temp_bit_vector * 2;
							recon_right_back = pred_temp_bit_vector;
							new_vector = recon_down_back_prev + down_little;
							if(new_vector <= max) {
								if(new_vector >= min) {
									recon_down_back = recon_down_back_prev + down_little;
L5:;
L6:;
									if(new_prev_values == 1) {
										recon_down_back_prev = recon_down_back;
L7:;
										if(full_pel_backward_vector == 1) {
											pred_temp_bit_vector = recon_down_back;
											pred_temp_bit_vector = pred_temp_bit_vector * 2;
											recon_down_back = pred_temp_bit_vector;
L8:;
											if(b_num > 3) {
												recon_right_back = recon_right_back / 2;
												recon_down_back = recon_down_back / 2;
L9:;
												pred_temp_bit_vector = recon_right_back;
												pred_temp_bit_vector = pred_temp_bit_vector / 2;
												right_back = pred_temp_bit_vector;
												pred_temp_bit_vector = recon_down_back;
												pred_temp_bit_vector = pred_temp_bit_vector / 2;
												down_back = pred_temp_bit_vector;
												if(right_back < 1) {
													right_half_back = recon_right_back - 1;
L10:;
													if(down_back < 1) {
														down_half_back = recon_down_back - 1;
L11:;
														/* END OF PATH at func_calculate_backward_motion@p68#1 */
													}
													else {
														down_half_back = recon_down_back;
														goto L11;
													}
												}
												else {
													right_half_back = recon_right_back;
													goto L10;
												}
											}
											else {
												goto L9;
											}
										}
										else if(full_pel_backward_vector < 1) {
											/* FALSE PATH */ 
										}
										else {
											/* FALSE PATH */ 
										}
									}
									else if(new_prev_values < 1) {
										/* FALSE PATH */ 
									}
									else {
										/* FALSE PATH */ 
									}
								}
								else {
									recon_down_back = recon_down_back_prev + down_big;
									goto L5;
								}
							}
							else {
								recon_down_back = recon_down_back_prev + down_big;
								goto L6;
							}
						}
						else if(full_pel_backward_vector < 1) {
							new_vector = recon_down_back_prev + down_little;
							if(new_vector <= max) {
								if(new_vector >= min) {
									recon_down_back = recon_down_back_prev + down_little;
L12:;
L13:;
									if(new_prev_values == 1) {
										recon_down_back_prev = recon_down_back;
L14:;
										if(full_pel_backward_vector < 1) {
											goto L8;
										}
										else if(full_pel_backward_vector == 1) {
											/* FALSE PATH */ 
										}
										else {
											/* FALSE PATH */ 
										}
									}
									else if(new_prev_values < 1) {
										/* FALSE PATH */ 
									}
									else {
										/* FALSE PATH */ 
									}
								}
								else {
									recon_down_back = recon_down_back_prev + down_big;
									goto L12;
								}
							}
							else {
								recon_down_back = recon_down_back_prev + down_big;
								goto L13;
							}
						}
						else {
							new_vector = recon_down_back_prev + down_little;
							if(new_vector <= max) {
								if(new_vector >= min) {
									recon_down_back = recon_down_back_prev + down_little;
L15:;
L16:;
									if(new_prev_values == 1) {
										recon_down_back_prev = recon_down_back;
L17:;
										if(full_pel_backward_vector > 1) {
											goto L8;
										}
										else if(full_pel_backward_vector == 1) {
											/* FALSE PATH */ 
										}
										else {
											/* FALSE PATH */ 
										}
									}
									else if(new_prev_values < 1) {
										/* FALSE PATH */ 
									}
									else {
										/* FALSE PATH */ 
									}
								}
								else {
									recon_down_back = recon_down_back_prev + down_big;
									goto L15;
								}
							}
							else {
								recon_down_back = recon_down_back_prev + down_big;
								goto L16;
							}
						}
					}
					else if(new_prev_values < 1) {
						if(full_pel_backward_vector == 1) {
							pred_temp_bit_vector = recon_right_back;
							pred_temp_bit_vector = pred_temp_bit_vector * 2;
							recon_right_back = pred_temp_bit_vector;
							new_vector = recon_down_back_prev + down_little;
							if(new_vector <= max) {
								if(new_vector >= min) {
									recon_down_back = recon_down_back_prev + down_little;
L18:;
L19:;
									if(new_prev_values < 1) {
										goto L7;
									}
									else if(new_prev_values == 1) {
										/* FALSE PATH */ 
									}
									else {
										/* FALSE PATH */ 
									}
								}
								else {
									recon_down_back = recon_down_back_prev + down_big;
									goto L18;
								}
							}
							else {
								recon_down_back = recon_down_back_prev + down_big;
								goto L19;
							}
						}
						else if(full_pel_backward_vector < 1) {
							new_vector = recon_down_back_prev + down_little;
							if(new_vector <= max) {
								if(new_vector >= min) {
									recon_down_back = recon_down_back_prev + down_little;
L20:;
L21:;
									if(new_prev_values < 1) {
										goto L14;
									}
									else if(new_prev_values == 1) {
										/* FALSE PATH */ 
									}
									else {
										/* FALSE PATH */ 
									}
								}
								else {
									recon_down_back = recon_down_back_prev + down_big;
									goto L20;
								}
							}
							else {
								recon_down_back = recon_down_back_prev + down_big;
								goto L21;
							}
						}
						else {
							new_vector = recon_down_back_prev + down_little;
							if(new_vector <= max) {
								if(new_vector >= min) {
									recon_down_back = recon_down_back_prev + down_little;
L22:;
L23:;
									if(new_prev_values < 1) {
										goto L17;
									}
									else if(new_prev_values == 1) {
										/* FALSE PATH */ 
									}
									else {
										/* FALSE PATH */ 
									}
								}
								else {
									recon_down_back = recon_down_back_prev + down_big;
									goto L22;
								}
							}
							else {
								recon_down_back = recon_down_back_prev + down_big;
								goto L23;
							}
						}
					}
					else {
						if(full_pel_backward_vector == 1) {
							pred_temp_bit_vector = recon_right_back;
							pred_temp_bit_vector = pred_temp_bit_vector * 2;
							recon_right_back = pred_temp_bit_vector;
							new_vector = recon_down_back_prev + down_little;
							if(new_vector <= max) {
								if(new_vector >= min) {
									recon_down_back = recon_down_back_prev + down_little;
L24:;
L25:;
									if(new_prev_values > 1) {
										goto L7;
									}
									else if(new_prev_values == 1) {
										/* FALSE PATH */ 
									}
									else {
										/* FALSE PATH */ 
									}
								}
								else {
									recon_down_back = recon_down_back_prev + down_big;
									goto L24;
								}
							}
							else {
								recon_down_back = recon_down_back_prev + down_big;
								goto L25;
							}
						}
						else if(full_pel_backward_vector < 1) {
							new_vector = recon_down_back_prev + down_little;
							if(new_vector <= max) {
								if(new_vector >= min) {
									recon_down_back = recon_down_back_prev + down_little;
L26:;
L27:;
									if(new_prev_values > 1) {
										goto L14;
									}
									else if(new_prev_values == 1) {
										/* FALSE PATH */ 
									}
									else {
										/* FALSE PATH */ 
									}
								}
								else {
									recon_down_back = recon_down_back_prev + down_big;
									goto L26;
								}
							}
							else {
								recon_down_back = recon_down_back_prev + down_big;
								goto L27;
							}
						}
						else {
							new_vector = recon_down_back_prev + down_little;
							if(new_vector <= max) {
								if(new_vector >= min) {
									recon_down_back = recon_down_back_prev + down_little;
L28:;
L29:;
									if(new_prev_values > 1) {
										goto L17;
									}
									else if(new_prev_values == 1) {
										/* FALSE PATH */ 
									}
									else {
										/* FALSE PATH */ 
									}
								}
								else {
									recon_down_back = recon_down_back_prev + down_big;
									goto L28;
								}
							}
							else {
								recon_down_back = recon_down_back_prev + down_big;
								goto L29;
							}
						}
					}
				}
				else {
					recon_right_back = recon_right_back_prev + right_big;
					goto L3;
				}
			}
			else {
				recon_right_back = recon_right_back_prev + right_big;
				goto L4;
			}
		}
		else if(down_little < 0) {
			if(down_little <= 0) {
				down_little = down_little + complement_vertical_backward_r;
				down_big = down_little + backward_f * 32;
				goto L2;
			}
			else {
				/* FALSE PATH */ 
			}
		}
		else {
			if(down_little > 0) {
				down_little = down_little - complement_vertical_backward_r;
				down_big = down_little - backward_f * 32;
				goto L2;
			}
			else {
				/* FALSE PATH */ 
			}
		}
	}
	else if(right_little < 0) {
		if(right_little <= 0) {
			right_little = right_little + complement_horizontal_backward_r;
			right_big = right_little + backward_f * 32;
			goto L1;
		}
		else {
			/* FALSE PATH */ 
		}
	}
	else {
		if(right_little > 0) {
			right_little = right_little - complement_horizontal_backward_r;
			right_big = right_little - backward_f * 32;
			goto L1;
		}
		else {
			/* FALSE PATH */ 
		}
	}
}

void calcid(int picture , int mb_addr , int i , int down_for_calcid , int j , int right_for_calcid )
{
	b_00 = ((picture + mb_addr) + ((i + down_for_calcid) / 8) * 2) + (j + right_for_calcid) / 8;
	b_10 = ((picture + mb_addr) + (((i + down_for_calcid) + 1) / 8) * 2) + (j + right_for_calcid) / 8;
	b_01 = ((picture + mb_addr) + ((i + down_for_calcid) / 8) * 2) + ((j + right_for_calcid) + 1) / 8;
	p_i0 = (i + down_for_calcid) % 8;
	p_i1 = ((i + down_for_calcid) + 1) % 8;
	p_j0 = (j + right_for_calcid) % 8;
	p_j1 = ((j + right_for_calcid) + 1) % 8;
	/* END OF PATH at func_calcid@p8#1 */
}

void pred(void)
{ int i ;
int j ;
	i = 0;
L1:;
L2:;
	if(i > 63) {
L3:;
		if(mb_type == 0) {
			set_prev_values = 1;
L4:;
			/* END OF PATH at func_pred@p112#1 */
		}
		else if(mb_type == 1) {
			i = 0;
L5:;
L6:;
			if(i > 7) {
L7:;
				goto L4;
			}
			else {
				j = 0;
L8:;
L9:;
				if(j > 7) {
L10:;
					i = i + 1;
					goto L6;
				}
				else {
					calcid(previous_picture, macroblock_address, i, down_for, j, right_for);
					if(right_half_for == 0) {
						if(down_half_for == 0) {
							pred_block[i * 8 + j] = storage[(b_00 * 64 + p_i0 * 8) + p_j0];
							if(right_half_for == 0) {
								if(down_half_for < 1) {
L11:;
									if(right_half_for < 1) {
										if(right_half_for < 1) {
L12:;
											j = j + 1;
											goto L9;
										}
										else if(right_half_for == 1) {
											/* FALSE PATH */ 
										}
										else {
											/* FALSE PATH */ 
										}
									}
									else if(right_half_for == 1) {
										/* FALSE PATH */ 
									}
									else {
										/* FALSE PATH */ 
									}
								}
								else if(down_half_for == 1) {
									/* FALSE PATH */ 
								}
								else {
									/* FALSE PATH */ 
								}
							}
							else if(right_half_for < 0) {
								/* FALSE PATH */ 
							}
							else {
								/* FALSE PATH */ 
							}
						}
						else if(down_half_for < 0) {
							if(right_half_for == 0) {
								if(down_half_for < 1) {
									goto L11;
								}
								else if(down_half_for == 1) {
									/* FALSE PATH */ 
								}
								else {
									/* FALSE PATH */ 
								}
							}
							else if(right_half_for < 0) {
								/* FALSE PATH */ 
							}
							else {
								/* FALSE PATH */ 
							}
						}
						else {
							if(right_half_for == 0) {
								if(down_half_for == 1) {
									pred_block[i * 8 + j] = (storage[(b_00 * 64 + p_i0 * 8) + p_j0] + storage[(b_10 * 64 + p_i1 * 8) + p_j0]) / 2;
									goto L11;
								}
								else if(down_half_for < 1) {
									goto L11;
								}
								else {
									goto L11;
								}
							}
							else if(right_half_for < 0) {
								/* FALSE PATH */ 
							}
							else {
								/* FALSE PATH */ 
							}
						}
					}
					else if(right_half_for < 0) {
						if(right_half_for < 0) {
							if(right_half_for < 1) {
								if(right_half_for < 1) {
									goto L12;
								}
								else if(right_half_for == 1) {
									/* FALSE PATH */ 
								}
								else {
									/* FALSE PATH */ 
								}
							}
							else if(right_half_for == 1) {
								/* FALSE PATH */ 
							}
							else {
								/* FALSE PATH */ 
							}
						}
						else if(right_half_for == 0) {
							/* FALSE PATH */ 
						}
						else {
							/* FALSE PATH */ 
						}
					}
					else {
						if(right_half_for > 0) {
							if(right_half_for == 1) {
								if(down_half_for == 0) {
									pred_block[i * 8 + j] = (storage[(b_00 * 64 + p_i0 * 8) + p_j0] + storage[(b_01 * 64 + p_i0 * 8) + p_j1]) / 2;
									if(right_half_for == 1) {
										if(down_half_for < 1) {
											goto L12;
										}
										else if(down_half_for == 1) {
											/* FALSE PATH */ 
										}
										else {
											/* FALSE PATH */ 
										}
									}
									else if(right_half_for < 1) {
										/* FALSE PATH */ 
									}
									else {
										/* FALSE PATH */ 
									}
								}
								else if(down_half_for < 0) {
									if(right_half_for == 1) {
										if(down_half_for < 1) {
											goto L12;
										}
										else if(down_half_for == 1) {
											/* FALSE PATH */ 
										}
										else {
											/* FALSE PATH */ 
										}
									}
									else if(right_half_for < 1) {
										/* FALSE PATH */ 
									}
									else {
										/* FALSE PATH */ 
									}
								}
								else {
									if(right_half_for == 1) {
										if(down_half_for == 1) {
											pred_block[i * 8 + j] = (((storage[(b_00 * 64 + p_i0 * 8) + p_j0] + storage[(b_10 * 64 + p_i1 * 8) + p_j0]) + storage[(b_00 * 64 + p_i0 * 8) + p_j0]) + storage[(b_01 * 64 + p_i0 * 8) + p_j1]) / 4;
											goto L12;
										}
										else if(down_half_for < 1) {
											goto L12;
										}
										else {
											goto L12;
										}
									}
									else if(right_half_for < 1) {
										/* FALSE PATH */ 
									}
									else {
										/* FALSE PATH */ 
									}
								}
							}
							else if(right_half_for < 1) {
								if(right_half_for < 1) {
									goto L12;
								}
								else if(right_half_for == 1) {
									/* FALSE PATH */ 
								}
								else {
									/* FALSE PATH */ 
								}
							}
							else {
								if(right_half_for > 1) {
									goto L12;
								}
								else if(right_half_for == 1) {
									/* FALSE PATH */ 
								}
								else {
									/* FALSE PATH */ 
								}
							}
						}
						else if(right_half_for == 0) {
							/* FALSE PATH */ 
						}
						else {
							/* FALSE PATH */ 
						}
					}
				}
			}
		}
		else if(mb_type == 2) {
			if(is_for_info == 1) {
				i = 0;
L13:;
L14:;
				if(i > 7) {
L15:;
					if(is_back_info == 1) {
						i = 0;
L16:;
L17:;
						if(i > 7) {
L18:;
							if(is_for_info == 1) {
								if(is_back_info == 1) {
									i = 0;
L19:;
L20:;
									if(i > 7) {
L21:;
L22:;
										goto L4;
									}
									else {
										j = 0;
L23:;
L24:;
										if(j > 7) {
L25:;
											i = i + 1;
											goto L20;
										}
										else {
											pred_block[i * 8 + j] = pred_block[i * 8 + j] / 2;
											j = j + 1;
											goto L24;
										}
									}
								}
								else if(is_back_info < 1) {
									/* FALSE PATH */ 
								}
								else {
									/* FALSE PATH */ 
								}
							}
							else if(is_for_info < 1) {
								/* FALSE PATH */ 
							}
							else {
								/* FALSE PATH */ 
							}
						}
						else {
							j = 0;
L26:;
L27:;
							if(j > 7) {
L28:;
								i = i + 1;
								goto L17;
							}
							else {
								calcid(future_picture, macroblock_address, i, down_for, j, right_for);
								if(right_half_for == 0) {
									if(down_half_for == 0) {
										pred_block[i * 8 + j] = pred_block[i * 8 + j] + storage[(b_00 * 64 + p_i0 * 8) + p_j0];
										if(right_half_for == 0) {
											if(down_half_for < 1) {
L29:;
												if(right_half_for < 1) {
													if(right_half_for < 1) {
L30:;
														j = j + 1;
														goto L27;
													}
													else if(right_half_for == 1) {
														/* FALSE PATH */ 
													}
													else {
														/* FALSE PATH */ 
													}
												}
												else if(right_half_for == 1) {
													/* FALSE PATH */ 
												}
												else {
													/* FALSE PATH */ 
												}
											}
											else if(down_half_for == 1) {
												/* FALSE PATH */ 
											}
											else {
												/* FALSE PATH */ 
											}
										}
										else if(right_half_for < 0) {
											/* FALSE PATH */ 
										}
										else {
											/* FALSE PATH */ 
										}
									}
									else if(down_half_for < 0) {
										if(right_half_for == 0) {
											if(down_half_for < 1) {
												goto L29;
											}
											else if(down_half_for == 1) {
												/* FALSE PATH */ 
											}
											else {
												/* FALSE PATH */ 
											}
										}
										else if(right_half_for < 0) {
											/* FALSE PATH */ 
										}
										else {
											/* FALSE PATH */ 
										}
									}
									else {
										if(right_half_for == 0) {
											if(down_half_for == 1) {
												pred_block[i * 8 + j] = pred_block[i * 8 + j] + (storage[(b_00 * 64 + p_i0 * 8) + p_j0] + storage[(b_10 * 64 + p_i1 * 8) + p_j0]) / 2;
												goto L29;
											}
											else if(down_half_for < 1) {
												goto L29;
											}
											else {
												goto L29;
											}
										}
										else if(right_half_for < 0) {
											/* FALSE PATH */ 
										}
										else {
											/* FALSE PATH */ 
										}
									}
								}
								else if(right_half_for < 0) {
									if(right_half_for < 0) {
										if(right_half_for < 1) {
											if(right_half_for < 1) {
												goto L30;
											}
											else if(right_half_for == 1) {
												/* FALSE PATH */ 
											}
											else {
												/* FALSE PATH */ 
											}
										}
										else if(right_half_for == 1) {
											/* FALSE PATH */ 
										}
										else {
											/* FALSE PATH */ 
										}
									}
									else if(right_half_for == 0) {
										/* FALSE PATH */ 
									}
									else {
										/* FALSE PATH */ 
									}
								}
								else {
									if(right_half_for > 0) {
										if(right_half_for == 1) {
											if(down_half_for == 0) {
												pred_block[i * 8 + j] = pred_block[i * 8 + j] + (storage[(b_00 * 64 + p_i0 * 8) + p_j0] + storage[(b_01 * 64 + p_i0 * 8) + p_j1]) / 2;
												if(right_half_for == 1) {
													if(down_half_for < 1) {
														goto L30;
													}
													else if(down_half_for == 1) {
														/* FALSE PATH */ 
													}
													else {
														/* FALSE PATH */ 
													}
												}
												else if(right_half_for < 1) {
													/* FALSE PATH */ 
												}
												else {
													/* FALSE PATH */ 
												}
											}
											else if(down_half_for < 0) {
												if(right_half_for == 1) {
													if(down_half_for < 1) {
														goto L30;
													}
													else if(down_half_for == 1) {
														/* FALSE PATH */ 
													}
													else {
														/* FALSE PATH */ 
													}
												}
												else if(right_half_for < 1) {
													/* FALSE PATH */ 
												}
												else {
													/* FALSE PATH */ 
												}
											}
											else {
												if(right_half_for == 1) {
													if(down_half_for == 1) {
														pred_block[i * 8 + j] = pred_block[i * 8 + j] + (((storage[(b_00 * 64 + p_i0 * 8) + p_j0] + storage[(b_10 * 64 + p_i1 * 8) + p_j0]) + storage[(b_00 * 64 + p_i0 * 8) + p_j0]) + storage[(b_01 * 64 + p_i0 * 8) + p_j1]) / 4;
														goto L30;
													}
													else if(down_half_for < 1) {
														goto L30;
													}
													else {
														goto L30;
													}
												}
												else if(right_half_for < 1) {
													/* FALSE PATH */ 
												}
												else {
													/* FALSE PATH */ 
												}
											}
										}
										else if(right_half_for < 1) {
											if(right_half_for < 1) {
												goto L30;
											}
											else if(right_half_for == 1) {
												/* FALSE PATH */ 
											}
											else {
												/* FALSE PATH */ 
											}
										}
										else {
											if(right_half_for > 1) {
												goto L30;
											}
											else if(right_half_for == 1) {
												/* FALSE PATH */ 
											}
											else {
												/* FALSE PATH */ 
											}
										}
									}
									else if(right_half_for == 0) {
										/* FALSE PATH */ 
									}
									else {
										/* FALSE PATH */ 
									}
								}
							}
						}
					}
					else if(is_back_info < 1) {
						recon_right_back = recon_right_back_prev;
						recon_down_back = recon_down_back_prev;
						if(is_for_info == 1) {
							if(is_back_info < 1) {
								goto L22;
							}
							else if(is_back_info == 1) {
								/* FALSE PATH */ 
							}
							else {
								/* FALSE PATH */ 
							}
						}
						else if(is_for_info < 1) {
							/* FALSE PATH */ 
						}
						else {
							/* FALSE PATH */ 
						}
					}
					else {
						recon_right_back = recon_right_back_prev;
						recon_down_back = recon_down_back_prev;
						if(is_for_info == 1) {
							if(is_back_info > 1) {
								goto L22;
							}
							else if(is_back_info == 1) {
								/* FALSE PATH */ 
							}
							else {
								/* FALSE PATH */ 
							}
						}
						else if(is_for_info < 1) {
							/* FALSE PATH */ 
						}
						else {
							/* FALSE PATH */ 
						}
					}
				}
				else {
					j = 0;
L31:;
L32:;
					if(j > 7) {
L33:;
						i = i + 1;
						goto L14;
					}
					else {
						calcid(previous_picture, macroblock_address, i, down_for, j, right_for);
						if(right_half_for == 0) {
							if(down_half_for == 0) {
								pred_block[i * 8 + j] = storage[(b_00 * 64 + p_i0 * 8) + p_j0];
								if(right_half_for == 0) {
									if(down_half_for < 1) {
L34:;
										if(right_half_for < 1) {
											if(right_half_for < 1) {
L35:;
												j = j + 1;
												goto L32;
											}
											else if(right_half_for == 1) {
												/* FALSE PATH */ 
											}
											else {
												/* FALSE PATH */ 
											}
										}
										else if(right_half_for == 1) {
											/* FALSE PATH */ 
										}
										else {
											/* FALSE PATH */ 
										}
									}
									else if(down_half_for == 1) {
										/* FALSE PATH */ 
									}
									else {
										/* FALSE PATH */ 
									}
								}
								else if(right_half_for < 0) {
									/* FALSE PATH */ 
								}
								else {
									/* FALSE PATH */ 
								}
							}
							else if(down_half_for < 0) {
								if(right_half_for == 0) {
									if(down_half_for < 1) {
										goto L34;
									}
									else if(down_half_for == 1) {
										/* FALSE PATH */ 
									}
									else {
										/* FALSE PATH */ 
									}
								}
								else if(right_half_for < 0) {
									/* FALSE PATH */ 
								}
								else {
									/* FALSE PATH */ 
								}
							}
							else {
								if(right_half_for == 0) {
									if(down_half_for == 1) {
										pred_block[i * 8 + j] = (storage[(b_00 * 64 + p_i0 * 8) + p_j0] + storage[(b_10 * 64 + p_i1 * 8) + p_j0]) / 2;
										goto L34;
									}
									else if(down_half_for < 1) {
										goto L34;
									}
									else {
										goto L34;
									}
								}
								else if(right_half_for < 0) {
									/* FALSE PATH */ 
								}
								else {
									/* FALSE PATH */ 
								}
							}
						}
						else if(right_half_for < 0) {
							if(right_half_for < 0) {
								if(right_half_for < 1) {
									if(right_half_for < 1) {
										goto L35;
									}
									else if(right_half_for == 1) {
										/* FALSE PATH */ 
									}
									else {
										/* FALSE PATH */ 
									}
								}
								else if(right_half_for == 1) {
									/* FALSE PATH */ 
								}
								else {
									/* FALSE PATH */ 
								}
							}
							else if(right_half_for == 0) {
								/* FALSE PATH */ 
							}
							else {
								/* FALSE PATH */ 
							}
						}
						else {
							if(right_half_for > 0) {
								if(right_half_for == 1) {
									if(down_half_for == 0) {
										if(storage[(b_00 * 64 + p_i0 * 8) + p_j0] + storage[(b_01 * 64 + p_i0 * 8) + p_j1] > 1) {
											pred_block[i * 8 + j] = 1;
L36:;
											if(right_half_for == 1) {
												if(down_half_for < 1) {
													goto L35;
												}
												else if(down_half_for == 1) {
													/* FALSE PATH */ 
												}
												else {
													/* FALSE PATH */ 
												}
											}
											else if(right_half_for < 1) {
												/* FALSE PATH */ 
											}
											else {
												/* FALSE PATH */ 
											}
										}
										else {
											pred_block[i * 8 + j] = 0;
											goto L36;
										}
									}
									else if(down_half_for < 0) {
										if(right_half_for == 1) {
											if(down_half_for < 1) {
												goto L35;
											}
											else if(down_half_for == 1) {
												/* FALSE PATH */ 
											}
											else {
												/* FALSE PATH */ 
											}
										}
										else if(right_half_for < 1) {
											/* FALSE PATH */ 
										}
										else {
											/* FALSE PATH */ 
										}
									}
									else {
										if(right_half_for == 1) {
											if(down_half_for == 1) {
												pred_block[i * 8 + j] = (((storage[(b_00 * 64 + p_i0 * 8) + p_j0] + storage[(b_10 * 64 + p_i1 * 8) + p_j0]) + storage[(b_00 * 64 + p_i0 * 8) + p_j0]) + storage[(b_01 * 64 + p_i0 * 8) + p_j1]) / 4;
												goto L35;
											}
											else if(down_half_for < 1) {
												goto L35;
											}
											else {
												goto L35;
											}
										}
										else if(right_half_for < 1) {
											/* FALSE PATH */ 
										}
										else {
											/* FALSE PATH */ 
										}
									}
								}
								else if(right_half_for < 1) {
									if(right_half_for < 1) {
										goto L35;
									}
									else if(right_half_for == 1) {
										/* FALSE PATH */ 
									}
									else {
										/* FALSE PATH */ 
									}
								}
								else {
									if(right_half_for > 1) {
										goto L35;
									}
									else if(right_half_for == 1) {
										/* FALSE PATH */ 
									}
									else {
										/* FALSE PATH */ 
									}
								}
							}
							else if(right_half_for == 0) {
								/* FALSE PATH */ 
							}
							else {
								/* FALSE PATH */ 
							}
						}
					}
				}
			}
			else if(is_for_info < 1) {
				recon_right_for = recon_right_for_prev;
				recon_down_for = recon_down_for_prev;
				if(is_back_info == 1) {
					i = 0;
L37:;
L38:;
					if(i > 7) {
L39:;
L40:;
						if(is_for_info < 1) {
							goto L22;
						}
						else if(is_for_info == 1) {
							/* FALSE PATH */ 
						}
						else {
							/* FALSE PATH */ 
						}
					}
					else {
						j = 0;
L41:;
L42:;
						if(j > 7) {
L43:;
							i = i + 1;
							goto L38;
						}
						else {
							calcid(future_picture, macroblock_address, i, down_for, j, right_for);
							if(right_half_for == 0) {
								if(down_half_for == 0) {
									pred_block[i * 8 + j] = pred_block[i * 8 + j] + storage[(b_00 * 64 + p_i0 * 8) + p_j0];
									if(right_half_for == 0) {
										if(down_half_for < 1) {
L44:;
											if(right_half_for < 1) {
												if(right_half_for < 1) {
L45:;
													j = j + 1;
													goto L42;
												}
												else if(right_half_for == 1) {
													/* FALSE PATH */ 
												}
												else {
													/* FALSE PATH */ 
												}
											}
											else if(right_half_for == 1) {
												/* FALSE PATH */ 
											}
											else {
												/* FALSE PATH */ 
											}
										}
										else if(down_half_for == 1) {
											/* FALSE PATH */ 
										}
										else {
											/* FALSE PATH */ 
										}
									}
									else if(right_half_for < 0) {
										/* FALSE PATH */ 
									}
									else {
										/* FALSE PATH */ 
									}
								}
								else if(down_half_for < 0) {
									if(right_half_for == 0) {
										if(down_half_for < 1) {
											goto L44;
										}
										else if(down_half_for == 1) {
											/* FALSE PATH */ 
										}
										else {
											/* FALSE PATH */ 
										}
									}
									else if(right_half_for < 0) {
										/* FALSE PATH */ 
									}
									else {
										/* FALSE PATH */ 
									}
								}
								else {
									if(right_half_for == 0) {
										if(down_half_for == 1) {
											pred_block[i * 8 + j] = pred_block[i * 8 + j] + (storage[(b_00 * 64 + p_i0 * 8) + p_j0] + storage[(b_10 * 64 + p_i1 * 8) + p_j0]) / 2;
											goto L44;
										}
										else if(down_half_for < 1) {
											goto L44;
										}
										else {
											goto L44;
										}
									}
									else if(right_half_for < 0) {
										/* FALSE PATH */ 
									}
									else {
										/* FALSE PATH */ 
									}
								}
							}
							else if(right_half_for < 0) {
								if(right_half_for < 0) {
									if(right_half_for < 1) {
										if(right_half_for < 1) {
											goto L45;
										}
										else if(right_half_for == 1) {
											/* FALSE PATH */ 
										}
										else {
											/* FALSE PATH */ 
										}
									}
									else if(right_half_for == 1) {
										/* FALSE PATH */ 
									}
									else {
										/* FALSE PATH */ 
									}
								}
								else if(right_half_for == 0) {
									/* FALSE PATH */ 
								}
								else {
									/* FALSE PATH */ 
								}
							}
							else {
								if(right_half_for > 0) {
									if(right_half_for == 1) {
										if(down_half_for == 0) {
											pred_block[i * 8 + j] = pred_block[i * 8 + j] + (storage[(b_00 * 64 + p_i0 * 8) + p_j0] + storage[(b_01 * 64 + p_i0 * 8) + p_j1]) / 2;
											if(right_half_for == 1) {
												if(down_half_for < 1) {
													goto L45;
												}
												else if(down_half_for == 1) {
													/* FALSE PATH */ 
												}
												else {
													/* FALSE PATH */ 
												}
											}
											else if(right_half_for < 1) {
												/* FALSE PATH */ 
											}
											else {
												/* FALSE PATH */ 
											}
										}
										else if(down_half_for < 0) {
											if(right_half_for == 1) {
												if(down_half_for < 1) {
													goto L45;
												}
												else if(down_half_for == 1) {
													/* FALSE PATH */ 
												}
												else {
													/* FALSE PATH */ 
												}
											}
											else if(right_half_for < 1) {
												/* FALSE PATH */ 
											}
											else {
												/* FALSE PATH */ 
											}
										}
										else {
											if(right_half_for == 1) {
												if(down_half_for == 1) {
													pred_block[i * 8 + j] = pred_block[i * 8 + j] + (((storage[(b_00 * 64 + p_i0 * 8) + p_j0] + storage[(b_10 * 64 + p_i1 * 8) + p_j0]) + storage[(b_00 * 64 + p_i0 * 8) + p_j0]) + storage[(b_01 * 64 + p_i0 * 8) + p_j1]) / 4;
													goto L45;
												}
												else if(down_half_for < 1) {
													goto L45;
												}
												else {
													goto L45;
												}
											}
											else if(right_half_for < 1) {
												/* FALSE PATH */ 
											}
											else {
												/* FALSE PATH */ 
											}
										}
									}
									else if(right_half_for < 1) {
										if(right_half_for < 1) {
											goto L45;
										}
										else if(right_half_for == 1) {
											/* FALSE PATH */ 
										}
										else {
											/* FALSE PATH */ 
										}
									}
									else {
										if(right_half_for > 1) {
											goto L45;
										}
										else if(right_half_for == 1) {
											/* FALSE PATH */ 
										}
										else {
											/* FALSE PATH */ 
										}
									}
								}
								else if(right_half_for == 0) {
									/* FALSE PATH */ 
								}
								else {
									/* FALSE PATH */ 
								}
							}
						}
					}
				}
				else if(is_back_info < 1) {
L46:;
					recon_right_back = recon_right_back_prev;
					recon_down_back = recon_down_back_prev;
					goto L40;
				}
				else {
					goto L46;
				}
			}
			else {
				recon_right_for = recon_right_for_prev;
				recon_down_for = recon_down_for_prev;
				if(is_back_info == 1) {
					i = 0;
L47:;
L48:;
					if(i > 7) {
L49:;
L50:;
						if(is_for_info > 1) {
							goto L22;
						}
						else if(is_for_info == 1) {
							/* FALSE PATH */ 
						}
						else {
							/* FALSE PATH */ 
						}
					}
					else {
						j = 0;
L51:;
L52:;
						if(j > 7) {
L53:;
							i = i + 1;
							goto L48;
						}
						else {
							calcid(future_picture, macroblock_address, i, down_for, j, right_for);
							if(right_half_for == 0) {
								if(down_half_for == 0) {
									pred_block[i * 8 + j] = pred_block[i * 8 + j] + storage[(b_00 * 64 + p_i0 * 8) + p_j0];
									if(right_half_for == 0) {
										if(down_half_for < 1) {
L54:;
											if(right_half_for < 1) {
												if(right_half_for < 1) {
L55:;
													j = j + 1;
													goto L52;
												}
												else if(right_half_for == 1) {
													/* FALSE PATH */ 
												}
												else {
													/* FALSE PATH */ 
												}
											}
											else if(right_half_for == 1) {
												/* FALSE PATH */ 
											}
											else {
												/* FALSE PATH */ 
											}
										}
										else if(down_half_for == 1) {
											/* FALSE PATH */ 
										}
										else {
											/* FALSE PATH */ 
										}
									}
									else if(right_half_for < 0) {
										/* FALSE PATH */ 
									}
									else {
										/* FALSE PATH */ 
									}
								}
								else if(down_half_for < 0) {
									if(right_half_for == 0) {
										if(down_half_for < 1) {
											goto L54;
										}
										else if(down_half_for == 1) {
											/* FALSE PATH */ 
										}
										else {
											/* FALSE PATH */ 
										}
									}
									else if(right_half_for < 0) {
										/* FALSE PATH */ 
									}
									else {
										/* FALSE PATH */ 
									}
								}
								else {
									if(right_half_for == 0) {
										if(down_half_for == 1) {
											pred_block[i * 8 + j] = pred_block[i * 8 + j] + (storage[(b_00 * 64 + p_i0 * 8) + p_j0] + storage[(b_10 * 64 + p_i1 * 8) + p_j0]) / 2;
											goto L54;
										}
										else if(down_half_for < 1) {
											goto L54;
										}
										else {
											goto L54;
										}
									}
									else if(right_half_for < 0) {
										/* FALSE PATH */ 
									}
									else {
										/* FALSE PATH */ 
									}
								}
							}
							else if(right_half_for < 0) {
								if(right_half_for < 0) {
									if(right_half_for < 1) {
										if(right_half_for < 1) {
											goto L55;
										}
										else if(right_half_for == 1) {
											/* FALSE PATH */ 
										}
										else {
											/* FALSE PATH */ 
										}
									}
									else if(right_half_for == 1) {
										/* FALSE PATH */ 
									}
									else {
										/* FALSE PATH */ 
									}
								}
								else if(right_half_for == 0) {
									/* FALSE PATH */ 
								}
								else {
									/* FALSE PATH */ 
								}
							}
							else {
								if(right_half_for > 0) {
									if(right_half_for == 1) {
										if(down_half_for == 0) {
											pred_block[i * 8 + j] = pred_block[i * 8 + j] + (storage[(b_00 * 64 + p_i0 * 8) + p_j0] + storage[(b_01 * 64 + p_i0 * 8) + p_j1]) / 2;
											if(right_half_for == 1) {
												if(down_half_for < 1) {
													goto L55;
												}
												else if(down_half_for == 1) {
													/* FALSE PATH */ 
												}
												else {
													/* FALSE PATH */ 
												}
											}
											else if(right_half_for < 1) {
												/* FALSE PATH */ 
											}
											else {
												/* FALSE PATH */ 
											}
										}
										else if(down_half_for < 0) {
											if(right_half_for == 1) {
												if(down_half_for < 1) {
													goto L55;
												}
												else if(down_half_for == 1) {
													/* FALSE PATH */ 
												}
												else {
													/* FALSE PATH */ 
												}
											}
											else if(right_half_for < 1) {
												/* FALSE PATH */ 
											}
											else {
												/* FALSE PATH */ 
											}
										}
										else {
											if(right_half_for == 1) {
												if(down_half_for == 1) {
													pred_block[i * 8 + j] = pred_block[i * 8 + j] + (((storage[(b_00 * 64 + p_i0 * 8) + p_j0] + storage[(b_10 * 64 + p_i1 * 8) + p_j0]) + storage[(b_00 * 64 + p_i0 * 8) + p_j0]) + storage[(b_01 * 64 + p_i0 * 8) + p_j1]) / 4;
													goto L55;
												}
												else if(down_half_for < 1) {
													goto L55;
												}
												else {
													goto L55;
												}
											}
											else if(right_half_for < 1) {
												/* FALSE PATH */ 
											}
											else {
												/* FALSE PATH */ 
											}
										}
									}
									else if(right_half_for < 1) {
										if(right_half_for < 1) {
											goto L55;
										}
										else if(right_half_for == 1) {
											/* FALSE PATH */ 
										}
										else {
											/* FALSE PATH */ 
										}
									}
									else {
										if(right_half_for > 1) {
											goto L55;
										}
										else if(right_half_for == 1) {
											/* FALSE PATH */ 
										}
										else {
											/* FALSE PATH */ 
										}
									}
								}
								else if(right_half_for == 0) {
									/* FALSE PATH */ 
								}
								else {
									/* FALSE PATH */ 
								}
							}
						}
					}
				}
				else if(is_back_info < 1) {
L56:;
					recon_right_back = recon_right_back_prev;
					recon_down_back = recon_down_back_prev;
					goto L50;
				}
				else {
					goto L56;
				}
			}
		}
		else if(mb_type < 0) {
			goto L4;
		}
		else if(mb_type > 0 && mb_type < 1) {
			goto L4;
		}
		else if(mb_type > 1 && mb_type < 2) {
			goto L4;
		}
		else {
			goto L4;
		}
	}
	else {
		pred_block[i] = 0;
		i = i + 1;
		goto L2;
	}
}

void plus(void)
{ register int i ;
	i = 0;
L1:;
L2:;
	if(i > 63) {
L3:;
		/* END OF PATH at func_plus@p12#1 */
	}
	else {
		curr_block[i] = curr_block[i] + pred_block[i];
		if(curr_block[i] > 255) {
			curr_block[i] = 255;
L4:;
			if(curr_block[i] < 0) {
				curr_block[i] = 0;
L5:;
				i = i + 1;
				goto L2;
			}
			else {
				goto L5;
			}
		}
		else {
			goto L4;
		}
	}
}

void store(void)
{ register int i ;
register int addr ;
	if(picture_type < 2) {
		i = 0;
L1:;
L2:;
		if(i > 63) {
L3:;
L4:;
			/* END OF PATH at func_store@p12#1 */
		}
		else {
			addr = (previous_picture + macroblock_address * 6) + b_num;
			addr = addr * 64 + i;
			storage[addr] = curr_block[i];
			i = i + 1;
			goto L2;
		}
	}
	else {
		goto L4;
	}
}

void display(void)
{ register int status ;
register int addr ;
register int i ;
	i = 0;
	status = 0;
L1:;
L2:;
	if(status == 3) {
L3:;
		/* END OF PATH at func_display@p32#1 */
	}
	else if(status < 3) {
L4:;
		if(clock == 1) {
			if(status == 0) {
				if(picture_type < 2) {
					addr = ((future_picture + macroblock_address * 6) + b_num) * 64;
					addr = addr + i;
					setoutbuffer = storage[addr];
					putbits = 8;
L5:;
					status = 1;
					goto L2;
				}
				else {
					setoutbuffer = curr_block[i];
					putbits = 8;
					goto L5;
				}
			}
			else if(status < 0) {
				if(status < 1) {
					if(status < 2) {
						/* END OF PATH at func_display@p30#2 */
					}
					else if(status == 2) {
						/* FALSE PATH */ 
					}
					else {
						/* FALSE PATH */ 
					}
				}
				else if(status == 1) {
					/* FALSE PATH */ 
				}
				else {
					/* FALSE PATH */ 
				}
			}
			else {
				if(status == 1) {
					if(to_transmit == 0) {
						putbits = 0;
						status = 2;
L6:;
						/* END OF PATH at func_display@p30#4 */
					}
					else if(to_transmit < 0) {
						goto L6;
					}
					else {
						goto L6;
					}
				}
				else if(status < 1) {
					if(status < 2) {
						/* END OF PATH at func_display@p30#5 */
					}
					else if(status == 2) {
						/* FALSE PATH */ 
					}
					else {
						/* FALSE PATH */ 
					}
				}
				else {
					if(status == 2) {
						i = i + 1;
						if(i > 63) {
							status = 3;
							/* END OF PATH at func_display@p30#7 */
						}
						else {
							status = 0;
							/* END OF PATH at func_display@p30#8 */
						}
					}
					else if(status < 2) {
						/* END OF PATH at func_display@p30#9 */
					}
					else {
						/* END OF PATH at func_display@p30#10 */
					}
				}
			}
		}
		else if(clock < 1) {
			/* END OF PATH at func_display@p30#11 */
		}
		else {
			/* END OF PATH at func_display@p30#12 */
		}
	}
	else {
		goto L4;
	}
}

void outbuffer(void)
{ register int status ;
register int i ;
	status = 0;
	i = 0;
L1:;
L2:;
	if(i >= 5) {
L3:;
		/* END OF PATH at func_outbuffer@p27#1 */
	}
	else {
		if(clock == 0) {
			if(status == 0) {
				if(putbits > 0) {
					to_transmit = putbits;
					status = 1;
L4:;
L5:;
					i = i + 1;
					goto L2;
				}
				else {
					goto L4;
				}
			}
			else if(status < 0) {
				if(status < 1) {
					if(status < 2) {
						goto L5;
					}
					else if(status == 2) {
						/* FALSE PATH */ 
					}
					else {
						/* FALSE PATH */ 
					}
				}
				else if(status == 1) {
					/* FALSE PATH */ 
				}
				else {
					/* FALSE PATH */ 
				}
			}
			else {
				if(status == 1) {
					isoutbit = 1;
					outbit = setoutbuffer;
					to_transmit = to_transmit - 1;
					if(to_transmit == 0) {
						status = 2;
L6:;
						goto L5;
					}
					else if(to_transmit < 0) {
						goto L6;
					}
					else {
						goto L6;
					}
				}
				else if(status < 1) {
					if(status < 2) {
						goto L5;
					}
					else if(status == 2) {
						/* FALSE PATH */ 
					}
					else {
						/* FALSE PATH */ 
					}
				}
				else {
					if(status == 2) {
						isoutbit = 0;
						if(putbits == 0) {
							to_transmit = -1;
							status = 0;
							goto L5;
						}
						else if(putbits < 0) {
							goto L5;
						}
						else {
							goto L5;
						}
					}
					else if(status < 2) {
						goto L5;
					}
					else {
						goto L5;
					}
				}
			}
		}
		else if(clock < 0) {
			goto L5;
		}
		else {
			goto L5;
		}
	}
}

void execute(void)
{
	inbuffer();
	vldcontrol();
	dequant();
	idct();
	pred();
	plus();
	store();
	display();
	outbuffer();
	/* END OF PATH at func_execute@p10#1 */
}

int main(void)
{ register int i ;
	;
	init();
	i = 0;
L1:;
L2:;
	if(i >= 5) {
L3:;
		return (0);
		/* END OF PATH at func_main@p9#1 */
	}
	else {
		execute();
		i = i + 1;
		goto L2;
	}
}

