struct _IO_marker;
# 2 "file_openclose.h"
typedef long __off_t;
# 3
typedef long long __off64_t;
# 5
typedef void _IO_lock_t;
# 8
struct _IO_FILE {
   int __BLAST_FLAG ;
   int _flags ;
   char *_IO_read_ptr ;
   char *_IO_read_end ;
   char *_IO_read_base ;
   char *_IO_write_base ;
   char *_IO_write_ptr ;
   char *_IO_write_end ;
   char *_IO_buf_base ;
   char *_IO_buf_end ;
   char *_IO_save_base ;
   char *_IO_backup_base ;
   char *_IO_save_end ;
   struct _IO_marker *_markers ;
   struct _IO_FILE *_chain ;
   int _fileno ;
   int _flags2 ;
   __off_t _old_offset ;
   unsigned short _cur_column ;
   signed char _vtable_offset ;
   char _shortbuf[1] ;
   _IO_lock_t *_lock ;
   __off64_t _offset ;
   void *__pad1 ;
   void *__pad2 ;
   int _mode ;
   char _unused2[(int )(15U * sizeof(int ) - 2U * sizeof(void *))] ;
};
# 38
typedef struct _IO_FILE FILE;
# 1
struct _IO_marker;
# 39
extern FILE *stderr ;
# 40
extern FILE *stdout ;
# 43
extern FILE *get_stderr() ;
# 44
extern FILE *get_stdout() ;
# 57
int _EXIT  ;
# 59
void exit(int status ) 
{ 

  {
# 60
  _EXIT = 1;
  _L: 
  goto _L;
}
}
# 2 "spec.work"
int __BLAST_error  ;
# 3
void __error__(void) 
{ 

  {
# 5
  __BLAST_error = 0;
  ERROR: 
  goto ERROR;
}
}
# 8
void __BLAST___error__(void) 
{ 

  {
# 10
  __BLAST_error = 0;
  BERROR: 
  goto BERROR;
}
}
void __initialize__(void) ;
# 170 "/usr/lib/gcc-lib/i386-slackware-linux/2.95.3/include/stddef.h"
typedef unsigned int size_t;
# 38 "/usr/include/bits/types.h"
typedef long long __quad_t;
# 67
typedef long __off_t;
# 68
typedef __quad_t __loff_t;
# 128
typedef __loff_t __off64_t;
# 28 "/usr/include/bits/sigset.h"
struct __anonstruct___sigset_t_8 {
   unsigned long __val[(int )(1024U / (8U * sizeof(unsigned long )))] ;
};
# 28
typedef struct __anonstruct___sigset_t_8 __sigset_t;
# 44 "/home/rupak/cil/include/gcc_2.95.3/stdio.h"
typedef struct _IO_FILE FILE;
# 243 "/home/rupak/cil/include/ccured_GNUCC.patch"
typedef struct __ccured_va_list *__gnuc_va_list;
# 168 "/usr/include/libio.h"
typedef void _IO_lock_t;
# 174
# 319
typedef struct _IO_FILE _IO_FILE;
# 263 "/home/rupak/cil/include/ccured_GNUCC.patch"
struct __ccured_va_list {
   int next ;
};
# 263
typedef struct __ccured_va_list *__ccured_va_list;
# 9 "pbm.h"
typedef unsigned char bit;
# 13 "pgm.h"
typedef unsigned char gray;
# 9 "ppm.h"
typedef gray pixval;
# 24
struct __anonstruct_pixel_19 {
   pixval r ;
   pixval g ;
   pixval b ;
};
# 24
typedef struct __anonstruct_pixel_19 pixel;
# 6 "ppmcmap.h"
typedef struct colorhist_item *colorhist_vector;
# 7
struct colorhist_item {
   pixel color ;
   int value ;
};
# 13
typedef struct colorhist_list_item *colorhist_list;
# 14
struct colorhist_list_item {
   struct colorhist_item ch ;
   colorhist_list next ;
};
# 30
typedef colorhist_list *colorhash_table;
# 409 "libppm5.c"
struct __anonstruct_coord_20 {
   short x ;
   short y ;
   short edge ;
};
# 409
typedef struct __anonstruct_coord_20 coord;
# 415
struct __anonstruct_fillobj_21 {
   int n ;
   int size ;
   int curedge ;
   int segstart ;
   int ydir ;
   int startydir ;
   coord *coords ;
};
# 415
typedef struct __anonstruct_fillobj_21 fillobj;
# 25 "/home/rupak/cil/include/gcc_2.95.3/bits/sigaction.h"
struct sigaction {
   void (*sa_handler)(int  ) ;
   __sigset_t sa_mask ;
   int sa_flags ;
   void (*sa_restorer)(void) ;
};
# 59 "jmorecfg.h"
typedef unsigned char JSAMPLE;
# 99
typedef short JCOEF;
# 110
typedef unsigned char JOCTET;
# 135
typedef unsigned char UINT8;
# 147
typedef unsigned short UINT16;
# 155
typedef short INT16;
# 161
typedef long INT32;
# 171
typedef unsigned int JDIMENSION;
# 209
typedef int boolean;
# 68 "jpeglib.h"
typedef JSAMPLE *JSAMPROW;
# 69
typedef JSAMPROW *JSAMPARRAY;
# 70
typedef JSAMPARRAY *JSAMPIMAGE;
# 72
typedef JCOEF JBLOCK[64];
# 73
typedef JBLOCK *JBLOCKROW;
# 74
typedef JBLOCKROW *JBLOCKARRAY;
# 77
typedef JCOEF *JCOEFPTR;
# 85
struct __anonstruct_JQUANT_TBL_37 {
   UINT16 quantval[64] ;
   boolean sent_table ;
};
# 85
typedef struct __anonstruct_JQUANT_TBL_37 JQUANT_TBL;
# 101
struct __anonstruct_JHUFF_TBL_38 {
   UINT8 bits[17] ;
   UINT8 huffval[256] ;
   boolean sent_table ;
};
# 101
typedef struct __anonstruct_JHUFF_TBL_38 JHUFF_TBL;
# 117
struct __anonstruct_jpeg_component_info_39 {
   int component_id ;
   int component_index ;
   int h_samp_factor ;
   int v_samp_factor ;
   int quant_tbl_no ;
   int dc_tbl_no ;
   int ac_tbl_no ;
   JDIMENSION width_in_blocks ;
   JDIMENSION height_in_blocks ;
   int DCT_scaled_size ;
   JDIMENSION downsampled_width ;
   JDIMENSION downsampled_height ;
   boolean component_needed ;
   int MCU_width ;
   int MCU_height ;
   int MCU_blocks ;
   int MCU_sample_width ;
   int last_col_width ;
   int last_row_height ;
   void *dct_table ;
};
# 117
typedef struct __anonstruct_jpeg_component_info_39 jpeg_component_info;
# 177
enum __anonenum_J_COLOR_SPACE_40 {
    JCS_UNKNOWN = 0, 
    JCS_GRAYSCALE = 1, 
    JCS_RGB = 2, 
    JCS_YCbCr = 3, 
    JCS_CMYK = 4, 
    JCS_YCCK = 5,  };
# 177
typedef enum __anonenum_J_COLOR_SPACE_40 J_COLOR_SPACE;
# 188
enum __anonenum_J_DCT_METHOD_41 {
    JDCT_ISLOW = 0, 
    JDCT_IFAST = 1, 
    JDCT_FLOAT = 2,  };
# 188
typedef enum __anonenum_J_DCT_METHOD_41 J_DCT_METHOD;
# 203
enum __anonenum_J_DITHER_MODE_42 {
    JDITHER_NONE = 0, 
    JDITHER_ORDERED = 1, 
    JDITHER_FS = 2,  };
# 203
typedef enum __anonenum_J_DITHER_MODE_42 J_DITHER_MODE;
# 223
struct jpeg_common_struct {
   struct jpeg_error_mgr *err ;
   struct jpeg_memory_mgr * __attribute__((__rtti__)) mem ;
   struct jpeg_progress_mgr *progress ;
   boolean is_decompressor ;
   int global_state ;
};
# 231
typedef struct jpeg_common_struct *j_common_ptr;
# 232
typedef struct jpeg_compress_struct *j_compress_ptr;
# 233
typedef struct jpeg_decompress_struct *j_decompress_ptr;
# 238
struct jpeg_compress_struct {
   struct jpeg_error_mgr *err ;
   struct jpeg_memory_mgr * __attribute__((__rtti__)) mem ;
   struct jpeg_progress_mgr *progress ;
   boolean is_decompressor ;
   int global_state ;
   struct jpeg_destination_mgr * __attribute__((__rtti__)) dest ;
   JDIMENSION image_width ;
   JDIMENSION image_height ;
   int input_components ;
   J_COLOR_SPACE in_color_space ;
   double input_gamma ;
   int data_precision ;
   int num_components ;
   J_COLOR_SPACE jpeg_color_space ;
   jpeg_component_info *comp_info ;
   JQUANT_TBL *quant_tbl_ptrs[4] ;
   JHUFF_TBL *dc_huff_tbl_ptrs[4] ;
   JHUFF_TBL *ac_huff_tbl_ptrs[4] ;
   UINT8 arith_dc_L[16] ;
   UINT8 arith_dc_U[16] ;
   UINT8 arith_ac_K[16] ;
   boolean raw_data_in ;
   boolean arith_code ;
   boolean interleave ;
   boolean optimize_coding ;
   boolean CCIR601_sampling ;
   int smoothing_factor ;
   J_DCT_METHOD dct_method ;
   unsigned int restart_interval ;
   int restart_in_rows ;
   boolean write_JFIF_header ;
   UINT8 density_unit ;
   UINT16 X_density ;
   UINT16 Y_density ;
   boolean write_Adobe_marker ;
   JDIMENSION next_scanline ;
   int max_h_samp_factor ;
   int max_v_samp_factor ;
   JDIMENSION total_iMCU_rows ;
   int comps_in_scan ;
   jpeg_component_info *cur_comp_info[4] ;
   JDIMENSION MCUs_per_row ;
   JDIMENSION MCU_rows_in_scan ;
   int blocks_in_MCU ;
   int MCU_membership[10] ;
   struct jpeg_comp_master * __attribute__((__rtti__)) master ;
   struct jpeg_c_main_controller * __attribute__((__rtti__)) main ;
   struct jpeg_c_prep_controller * __attribute__((__rtti__)) prep ;
   struct jpeg_c_coef_controller * __attribute__((__rtti__)) coef ;
   struct jpeg_marker_writer *marker ;
   struct jpeg_color_converter * __attribute__((__rtti__)) cconvert ;
   struct jpeg_downsampler * __attribute__((__rtti__)) downsample ;
   struct jpeg_forward_dct * __attribute__((__rtti__)) fdct ;
   struct jpeg_entropy_encoder * __attribute__((__rtti__)) entropy ;
};
# 368
struct jpeg_decompress_struct {
   struct jpeg_error_mgr *err ;
   struct jpeg_memory_mgr * __attribute__((__rtti__)) mem ;
   struct jpeg_progress_mgr *progress ;
   boolean is_decompressor ;
   int global_state ;
   struct jpeg_source_mgr * __attribute__((__rtti__)) src ;
   JDIMENSION image_width ;
   JDIMENSION image_height ;
   int num_components ;
   J_COLOR_SPACE jpeg_color_space ;
   J_COLOR_SPACE out_color_space ;
   unsigned int scale_num ;
   unsigned int scale_denom ;
   double output_gamma ;
   boolean raw_data_out ;
   boolean quantize_colors ;
   boolean two_pass_quantize ;
   J_DITHER_MODE dither_mode ;
   int desired_number_of_colors ;
   J_DCT_METHOD dct_method ;
   boolean do_fancy_upsampling ;
   JDIMENSION output_width ;
   JDIMENSION output_height ;
   int out_color_components ;
   int output_components ;
   int rec_outbuf_height ;
   int actual_number_of_colors ;
   JSAMPARRAY colormap ;
   JDIMENSION output_scanline ;
   JQUANT_TBL *quant_tbl_ptrs[4] ;
   JHUFF_TBL *dc_huff_tbl_ptrs[4] ;
   JHUFF_TBL *ac_huff_tbl_ptrs[4] ;
   int data_precision ;
   jpeg_component_info *comp_info ;
   UINT8 arith_dc_L[16] ;
   UINT8 arith_dc_U[16] ;
   UINT8 arith_ac_K[16] ;
   boolean arith_code ;
   unsigned int restart_interval ;
   boolean saw_JFIF_marker ;
   UINT8 density_unit ;
   UINT16 X_density ;
   UINT16 Y_density ;
   boolean saw_Adobe_marker ;
   UINT8 Adobe_transform ;
   boolean CCIR601_sampling ;
   int max_h_samp_factor ;
   int max_v_samp_factor ;
   int min_DCT_scaled_size ;
   JDIMENSION total_iMCU_rows ;
   JSAMPLE *sample_range_limit ;
   int comps_in_scan ;
   jpeg_component_info *cur_comp_info[4] ;
   JDIMENSION MCUs_per_row ;
   JDIMENSION MCU_rows_in_scan ;
   int blocks_in_MCU ;
   int MCU_membership[10] ;
   int unread_marker ;
   struct jpeg_decomp_master * __attribute__((__rtti__)) master ;
   struct jpeg_d_main_controller * __attribute__((__rtti__)) main ;
   struct jpeg_d_coef_controller * __attribute__((__rtti__)) coef ;
   struct jpeg_d_post_controller * __attribute__((__rtti__)) post ;
   struct jpeg_marker_reader *marker ;
   struct jpeg_entropy_decoder * __attribute__((__rtti__)) entropy ;
   struct jpeg_inverse_dct * __attribute__((__rtti__)) idct ;
   struct jpeg_upsampler * __attribute__((__rtti__)) upsample ;
   struct jpeg_color_deconverter * __attribute__((__rtti__)) cconvert ;
   struct jpeg_color_quantizer * __attribute__((__rtti__)) cquantize ;
};
# 553
union __anonunion_msg_parm_43 {
   int i[8] ;
   char s[80] ;
};
# 553
struct jpeg_error_mgr {
   void (*error_exit)(j_common_ptr cinfo ) ;
   void (*emit_message)(j_common_ptr cinfo , int msg_level ) ;
   void (*output_message)(j_common_ptr cinfo ) ;
   void (*format_message)(j_common_ptr cinfo , char *buffer ) ;
   void (*reset_error_mgr)(j_common_ptr cinfo ) ;
   int msg_code ;
   union __anonunion_msg_parm_43 msg_parm ;
   int trace_level ;
   long num_warnings ;
   char const   * const  *jpeg_message_table ;
   int last_jpeg_message ;
   char const   * const  *addon_message_table ;
   int first_addon_message ;
   int last_addon_message ;
};
# 611
struct jpeg_progress_mgr {
   void (*progress_monitor)(j_common_ptr cinfo ) ;
   long pass_counter ;
   long pass_limit ;
   int completed_passes ;
   int total_passes ;
};
# 623
struct jpeg_destination_mgr {
   JOCTET *next_output_byte ;
   size_t free_in_buffer ;
   void (*init_destination)(j_compress_ptr cinfo ) ;
   boolean (*empty_output_buffer)(j_compress_ptr cinfo ) ;
   void (*term_destination)(j_compress_ptr cinfo ) ;
};
# 635
struct jpeg_source_mgr {
   JOCTET const   *next_input_byte ;
   size_t bytes_in_buffer ;
   void (*init_source)(j_decompress_ptr cinfo ) ;
   boolean (*fill_input_buffer)(j_decompress_ptr cinfo ) ;
   void (*skip_input_data)(j_decompress_ptr cinfo , long num_bytes ) ;
   boolean (*resync_to_restart)(j_decompress_ptr cinfo ) ;
   void (*term_source)(j_decompress_ptr cinfo ) ;
};
# 662
typedef struct jvirt_sarray_control *jvirt_sarray_ptr;
# 663
typedef struct jvirt_barray_control *jvirt_barray_ptr;
# 666
struct jpeg_memory_mgr {
   void *(*alloc_small)(j_common_ptr cinfo , int pool_id , size_t sizeofobject ) ;
   void *(*alloc_large)(j_common_ptr cinfo , int pool_id , size_t sizeofobject ) ;
   JSAMPARRAY (*alloc_sarray)(j_common_ptr cinfo , int pool_id ,
                              JDIMENSION samplesperrow , JDIMENSION numrows ) ;
   JBLOCKARRAY (*alloc_barray)(j_common_ptr cinfo , int pool_id ,
                               JDIMENSION blocksperrow , JDIMENSION numrows ) ;
   jvirt_sarray_ptr (*request_virt_sarray)(j_common_ptr cinfo , int pool_id ,
                                           JDIMENSION samplesperrow ,
                                           JDIMENSION numrows ,
                                           JDIMENSION unitheight ) ;
   jvirt_barray_ptr (*request_virt_barray)(j_common_ptr cinfo , int pool_id ,
                                           JDIMENSION blocksperrow ,
                                           JDIMENSION numrows ,
                                           JDIMENSION unitheight ) ;
   void (*realize_virt_arrays)(j_common_ptr cinfo ) ;
   JSAMPARRAY (*access_virt_sarray)(j_common_ptr cinfo , jvirt_sarray_ptr ptr ,
                                    JDIMENSION start_row , boolean writable ) ;
   JBLOCKARRAY (*access_virt_barray)(j_common_ptr cinfo , jvirt_barray_ptr ptr ,
                                     JDIMENSION start_row , boolean writable ) ;
   void (*free_pool)(j_common_ptr cinfo , int pool_id ) ;
   void (*self_destruct)(j_common_ptr cinfo ) ;
   long max_memory_to_use ;
};
# 723
typedef boolean (*jpeg_marker_parser_method)(j_decompress_ptr cinfo );
# 16 "jpegint.h"
enum __anonenum_J_BUF_MODE_44 {
    JBUF_PASS_THRU = 0, 
    JBUF_CRANK_SOURCE = 1, 
    JBUF_SAVE_SOURCE = 2, 
    JBUF_CRANK_DEST = 3, 
    JBUF_SAVE_AND_PASS = 4,  };
# 16
typedef enum __anonenum_J_BUF_MODE_44 J_BUF_MODE;
# 40
struct jpeg_comp_master {
   void (*prepare_for_pass)(j_compress_ptr cinfo ) ;
   void (*pass_startup)(j_compress_ptr cinfo ) ;
   void (*finish_pass)(j_compress_ptr cinfo ) ;
   boolean call_pass_startup ;
   boolean is_last_pass ;
};
# 51
struct jpeg_c_main_controller {
   void (*start_pass)(j_compress_ptr cinfo , J_BUF_MODE pass_mode ) ;
   void (*process_data)(j_compress_ptr cinfo , JSAMPARRAY input_buf ,
                        JDIMENSION *in_row_ctr , JDIMENSION in_rows_avail ) ;
};
# 59
struct jpeg_c_prep_controller {
   void (*start_pass)(j_compress_ptr cinfo , J_BUF_MODE pass_mode ) ;
   void (*pre_process_data)(j_compress_ptr cinfo , JSAMPARRAY input_buf ,
                            JDIMENSION *in_row_ctr , JDIMENSION in_rows_avail ,
                            JSAMPIMAGE output_buf ,
                            JDIMENSION *out_row_group_ctr ,
                            JDIMENSION out_row_groups_avail ) ;
};
# 71
struct jpeg_c_coef_controller {
   void (*start_pass)(j_compress_ptr cinfo , J_BUF_MODE pass_mode ) ;
   void (*compress_data)(j_compress_ptr cinfo , JSAMPIMAGE input_buf ,
                         JDIMENSION *in_mcu_ctr ) ;
};
# 79
struct jpeg_color_converter {
   void (*start_pass)(j_compress_ptr cinfo ) ;
   void (*color_convert)(j_compress_ptr cinfo , JSAMPARRAY input_buf ,
                         JSAMPIMAGE output_buf , JDIMENSION output_row ,
                         int num_rows ) ;
};
# 87
struct jpeg_downsampler {
   void (*start_pass)(j_compress_ptr cinfo ) ;
   void (*downsample)(j_compress_ptr cinfo , JSAMPIMAGE input_buf ,
                      JDIMENSION in_row_index , JSAMPIMAGE output_buf ,
                      JDIMENSION out_row_group_index ) ;
   boolean need_context_rows ;
};
# 98
struct jpeg_forward_dct {
   void (*start_pass)(j_compress_ptr cinfo ) ;
   void (*forward_DCT)(j_compress_ptr cinfo , jpeg_component_info *compptr ,
                       JSAMPARRAY sample_data , JBLOCKROW coef_blocks ,
                       JDIMENSION start_row , JDIMENSION start_col ,
                       JDIMENSION num_blocks ) ;
};
# 109
struct jpeg_entropy_encoder {
   void (*start_pass)(j_compress_ptr cinfo , boolean gather_statistics ) ;
   boolean (*encode_mcu)(j_compress_ptr cinfo , JBLOCKROW *MCU_data ) ;
   void (*finish_pass)(j_compress_ptr cinfo ) ;
};
# 116
struct jpeg_marker_writer {
   void (*write_any_marker)(j_compress_ptr cinfo , int marker ,
                            JOCTET const   *dataptr , unsigned int datalen ) ;
   void (*write_file_header)(j_compress_ptr cinfo ) ;
   void (*write_frame_header)(j_compress_ptr cinfo ) ;
   void (*write_scan_header)(j_compress_ptr cinfo ) ;
   void (*write_file_trailer)(j_compress_ptr cinfo ) ;
   void (*write_tables_only)(j_compress_ptr cinfo ) ;
};
# 132
struct jpeg_decomp_master {
   void (*prepare_for_pass)(j_decompress_ptr cinfo ) ;
   void (*finish_pass)(j_decompress_ptr cinfo ) ;
   boolean is_last_pass ;
   boolean eoi_processed ;
};
# 142
struct jpeg_d_main_controller {
   void (*start_pass)(j_decompress_ptr cinfo , J_BUF_MODE pass_mode ) ;
   void (*process_data)(j_decompress_ptr cinfo , JSAMPARRAY output_buf ,
                        JDIMENSION *out_row_ctr , JDIMENSION out_rows_avail ) ;
   JDIMENSION num_chunks ;
};
# 154
struct jpeg_d_coef_controller {
   void (*start_pass)(j_decompress_ptr cinfo , J_BUF_MODE pass_mode ) ;
   boolean (*decompress_data)(j_decompress_ptr cinfo , JSAMPIMAGE output_buf ) ;
};
# 161
struct jpeg_d_post_controller {
   void (*start_pass)(j_decompress_ptr cinfo , J_BUF_MODE pass_mode ) ;
   void (*post_process_data)(j_decompress_ptr cinfo , JSAMPIMAGE input_buf ,
                             JDIMENSION *in_row_group_ctr ,
                             JDIMENSION in_row_groups_avail ,
                             JSAMPARRAY output_buf , JDIMENSION *out_row_ctr ,
                             JDIMENSION out_rows_avail ) ;
};
# 173
struct jpeg_marker_reader {
   void (*reset_marker_reader)(j_decompress_ptr cinfo ) ;
   int (*read_markers)(j_decompress_ptr cinfo ) ;
   boolean (*read_restart_marker)(j_decompress_ptr cinfo ) ;
   boolean (*process_COM)(j_decompress_ptr cinfo ) ;
   jpeg_marker_parser_method process_APPn[16] ;
   boolean saw_SOI ;
   boolean saw_SOF ;
   int next_restart_num ;
   unsigned int discarded_bytes ;
};
# 197
struct jpeg_entropy_decoder {
   void (*start_pass)(j_decompress_ptr cinfo ) ;
   boolean (*decode_mcu)(j_decompress_ptr cinfo , JBLOCKROW *MCU_data ) ;
};
# 204
typedef void (*inverse_DCT_method_ptr)(j_decompress_ptr cinfo ,
                                       jpeg_component_info *compptr ,
                                       JCOEFPTR coef_block ,
                                       JSAMPARRAY output_buf ,
                                       JDIMENSION output_col );
# 209
struct jpeg_inverse_dct {
   void (*start_input_pass)(j_decompress_ptr cinfo ) ;
   void (*start_output_pass)(j_decompress_ptr cinfo ) ;
   inverse_DCT_method_ptr inverse_DCT[10] ;
};
# 217
struct jpeg_upsampler {
   void (*start_pass)(j_decompress_ptr cinfo ) ;
   void (*upsample)(j_decompress_ptr cinfo , JSAMPIMAGE input_buf ,
                    JDIMENSION *in_row_group_ctr ,
                    JDIMENSION in_row_groups_avail , JSAMPARRAY output_buf ,
                    JDIMENSION *out_row_ctr , JDIMENSION out_rows_avail ) ;
   boolean need_context_rows ;
};
# 231
struct jpeg_color_deconverter {
   void (*start_pass)(j_decompress_ptr cinfo ) ;
   void (*color_convert)(j_decompress_ptr cinfo , JSAMPIMAGE input_buf ,
                         JDIMENSION input_row , JSAMPARRAY output_buf ,
                         int num_rows ) ;
};
# 239
struct jpeg_color_quantizer {
   void (*start_pass)(j_decompress_ptr cinfo , boolean is_pre_scan ) ;
   void (*color_quantize)(j_decompress_ptr cinfo , JSAMPARRAY input_buf ,
                          JSAMPARRAY output_buf , int num_rows ) ;
   void (*finish_pass)(j_decompress_ptr cinfo ) ;
};
# 17 "spec_jpeg.h"
struct spec_image_s {
   JDIMENSION image_width ;
   JDIMENSION image_height ;
   int num_color_components ;
   int max_color_component ;
   J_COLOR_SPACE color_space ;
   double gamma ;
   JSAMPARRAY buffer ;
};
# 51
typedef struct spec_image_s spec_image;
# 20 "spec_jmemdst.c"
struct jmd_my_destination_mgr {
   struct jpeg_destination_mgr pub ;
   JOCTET *jmd_buffer ;
   int jmd_max_bufsz ;
   int *jmd_actual_bufszptr ;
};
# 20
typedef struct jmd_my_destination_mgr jmd_my_destination_mgr;
# 27
typedef jmd_my_destination_mgr *jmd_my_dest_ptr;
# 20 "spec_jmemsrc.c"
struct jms_my_source_mgr {
   struct jpeg_source_mgr pub ;
};
# 20
typedef struct jms_my_source_mgr jms_my_source_mgr;
# 25
typedef jms_my_source_mgr *jms_my_src_ptr;
# 69 "spec_main.c"
struct coord_s {
   float x ;
   float y ;
};
# 72
struct subimage_s {
   struct coord_s upper_left ;
   struct coord_s lower_right ;
};
# 78
struct compression_parameter_s {
   int quality ;
   int optimize_coding ;
   int smoothing_factor ;
   struct subimage_s subimage ;
};
# 90
struct decompression_parameter_s {
   int quantize_colors ;
   int do_fancy_upsampling ;
   int desired_number_of_colors ;
   int two_pass_quantize ;
   int dither_mode ;
};
# 26 "jdatadst.c"
struct my_destination_mgr2 {
   struct jpeg_destination_mgr pub ;
   FILE *outfile ;
   JOCTET *buffer ;
};
# 26
typedef struct my_destination_mgr2 my_destination_mgr;
# 33
typedef my_destination_mgr *my_dest_ptr;
# 23 "jcmaster.c"
struct my_comp_master {
   struct jpeg_comp_master pub ;
   int pass_number ;
};
# 23
typedef struct my_comp_master my_comp_master;
# 29
typedef my_comp_master *jcmaster_my_master_ptr;
# 16 "jcmarker.c"
enum __anonenum_JPEG_MARKER_27 {
    M_SOF0 = 192, 
    M_SOF1 = 193, 
    M_SOF2 = 194, 
    M_SOF3 = 195, 
    M_SOF5 = 197, 
    M_SOF6 = 198, 
    M_SOF7 = 199, 
    M_JPG = 200, 
    M_SOF9 = 201, 
    M_SOF10 = 202, 
    M_SOF11 = 203, 
    M_SOF13 = 205, 
    M_SOF14 = 206, 
    M_SOF15 = 207, 
    M_DHT = 196, 
    M_DAC = 204, 
    M_RST0 = 208, 
    M_RST1 = 209, 
    M_RST2 = 210, 
    M_RST3 = 211, 
    M_RST4 = 212, 
    M_RST5 = 213, 
    M_RST6 = 214, 
    M_RST7 = 215, 
    M_SOI = 216, 
    M_EOI = 217, 
    M_SOS = 218, 
    M_DQT = 219, 
    M_DNL = 220, 
    M_DRI = 221, 
    M_DHP = 222, 
    M_EXP = 223, 
    M_APP0 = 224, 
    M_APP1 = 225, 
    M_APP2 = 226, 
    M_APP3 = 227, 
    M_APP4 = 228, 
    M_APP5 = 229, 
    M_APP6 = 230, 
    M_APP7 = 231, 
    M_APP8 = 232, 
    M_APP9 = 233, 
    M_APP10 = 234, 
    M_APP11 = 235, 
    M_APP12 = 236, 
    M_APP13 = 237, 
    M_APP14 = 238, 
    M_APP15 = 239, 
    M_JPG0 = 240, 
    M_JPG13 = 253, 
    M_COM = 254, 
    M_TEM = 1, 
    M_ERROR = 256,  };
# 16
typedef enum __anonenum_JPEG_MARKER_27 JPEG_MARKER;
# 31 "jcmainct.c"
struct my_main_controller {
   struct jpeg_c_main_controller pub ;
   JDIMENSION cur_mcu_row ;
   JDIMENSION rowgroup_ctr ;
   JDIMENSION mcu_ctr ;
   boolean suspended ;
   J_BUF_MODE pass_mode ;
   JSAMPARRAY buffer[10] ;
};
# 31
typedef struct my_main_controller my_main_controller;
# 54
typedef my_main_controller *jcmainct_my_main_ptr;
# 53 "jcprepct.c"
struct my_prep_controller {
   struct jpeg_c_prep_controller pub ;
   JSAMPARRAY color_buf[10] ;
   JDIMENSION rows_to_go ;
   int next_buf_row ;
   int this_row_group ;
   int next_buf_stop ;
};
# 53
typedef struct my_prep_controller my_prep_controller;
# 71
typedef my_prep_controller *my_prep_ptr;
# 37 "jccoefct.c"
struct my_coef_controller {
   struct jpeg_c_coef_controller pub ;
   JDIMENSION MCU_row_num ;
   JBLOCKROW MCU_buffer[10] ;
   jvirt_barray_ptr whole_image[10] ;
};
# 37
typedef struct my_coef_controller my_coef_controller;
# 57
typedef my_coef_controller *jccoefct_my_coef_ptr;
# 21 "jccolor.c"
struct my_color_converter {
   struct jpeg_color_converter pub ;
   INT32 *rgb_ycc_tab ;
};
# 21
typedef struct my_color_converter my_color_converter;
# 28
typedef my_color_converter *jccolor_my_convert_ptr;
# 54 "jcsample.c"
typedef void (*downsample1_ptr)(j_compress_ptr cinfo ,
                                jpeg_component_info *compptr ,
                                JSAMPARRAY input_data , JSAMPARRAY output_data );
# 60
struct my_downsampler {
   struct jpeg_downsampler pub ;
   downsample1_ptr methods[10] ;
};
# 60
typedef struct my_downsampler my_downsampler;
# 67
typedef my_downsampler *my_downsample_ptr;
# 28 "jchuff.c"
struct __anonstruct_C_DERIVED_TBL_27 {
   unsigned int ehufco[256] ;
   char ehufsi[256] ;
};
# 28
typedef struct __anonstruct_C_DERIVED_TBL_27 C_DERIVED_TBL;
# 40
struct jchuff_savable_state {
   INT32 put_buffer ;
   int put_bits ;
   int last_dc_val[4] ;
};
# 40
typedef struct jchuff_savable_state jchuff_savable_state;
# 66
struct huff_entropy_encoder {
   struct jpeg_entropy_encoder pub ;
   jchuff_savable_state saved ;
   unsigned int restarts_to_go ;
   int next_restart_num ;
   C_DERIVED_TBL *dc_derived_tbls[4] ;
   C_DERIVED_TBL *ac_derived_tbls[4] ;
   long *dc_count_ptrs[4] ;
   long *ac_count_ptrs[4] ;
};
# 66
typedef struct huff_entropy_encoder huff_entropy_encoder;
# 85
typedef huff_entropy_encoder *jchuff_huff_entropy_ptr;
# 92
struct __anonstruct_jchuff_working_state_28 {
   JOCTET *next_output_byte ;
   size_t free_in_buffer ;
   jchuff_savable_state cur ;
   j_compress_ptr cinfo ;
};
# 92
typedef struct __anonstruct_jchuff_working_state_28 jchuff_working_state;
# 30 "jdct.h"
typedef int DCTELEM;
# 56
typedef int ISLOW_MULT_TYPE;
# 58
typedef int IFAST_MULT_TYPE;
# 64
typedef float FLOAT_MULT_TYPE;
# 22 "jcdctmgr.c"
struct my_fdct_controller {
   struct jpeg_forward_dct pub ;
   void (*do_dct)(DCTELEM *data ) ;
   DCTELEM *divisors[4] ;
   void (*do_float_dct)(float *data ) ;
   float *float_divisors[4] ;
};
# 22
typedef struct my_fdct_controller my_fdct_controller;
# 41
typedef my_fdct_controller *my_fdct_ptr;
# 25 "jdatasrc.c"
struct my_source_mgr {
   struct jpeg_source_mgr pub ;
   FILE *infile ;
   JOCTET *buffer ;
   boolean start_of_file ;
};
# 25
typedef struct my_source_mgr my_source_mgr;
# 33
typedef my_source_mgr *my_src_ptr;
# 28 "jdmaster.c"
enum __anonenum_D_PASS_TYPE_27 {
    main_pass = 0, 
    preread_pass = 1, 
    output_pass = 2, 
    post_pass = 3,  };
# 28
typedef enum __anonenum_D_PASS_TYPE_27 D_PASS_TYPE;
# 35
struct my_decomp_master {
   struct jpeg_decomp_master pub ;
   boolean using_merged_upsample ;
   D_PASS_TYPE pass_type ;
   int pass_number ;
   int total_passes ;
   boolean need_post_pass ;
};
# 35
typedef struct my_decomp_master my_decomp_master;
# 49
typedef my_decomp_master *jdmaster_my_master_ptr;
# 114 "jdmainct.c"
struct my_main_controller_d {
   struct jpeg_d_main_controller pub ;
   JSAMPARRAY buffer[10] ;
   boolean buffer_full ;
   JDIMENSION rowgroup_ctr ;
   JSAMPIMAGE xbuffer[2] ;
   int whichptr ;
   int context_state ;
   JDIMENSION rowgroups_avail ;
   JDIMENSION iMCU_row_ctr ;
};
# 114
typedef struct my_main_controller_d my_main_controller_d;
# 136
typedef my_main_controller_d *jdmainct_my_main_ptr;
# 22 "jdcoefct.c"
struct my_coef_controller_d {
   struct jpeg_d_coef_controller pub ;
   JDIMENSION MCU_col_num ;
   JDIMENSION MCU_row_num ;
   JBLOCKROW MCU_buffer[10] ;
   jvirt_barray_ptr whole_image[10] ;
};
# 22
typedef struct my_coef_controller_d my_coef_controller_d;
# 44
typedef my_coef_controller_d *jdcoefct_my_coef_ptr;
# 26 "jdpostct.c"
struct my_post_controller {
   struct jpeg_d_post_controller pub ;
   jvirt_sarray_ptr whole_image ;
   JSAMPARRAY buffer ;
   JDIMENSION strip_height ;
   JDIMENSION starting_row ;
   JDIMENSION next_row ;
};
# 26
typedef struct my_post_controller my_post_controller;
# 42
typedef my_post_controller *my_post_ptr;
# 26 "jddctmgr.c"
struct my_idct_controller {
   struct jpeg_inverse_dct pub ;
   J_DCT_METHOD real_method[10] ;
};
# 26
typedef struct my_idct_controller my_idct_controller;
# 33
typedef my_idct_controller *my_idct_ptr;
# 31 "jdhuff.c"
struct __anonstruct_D_DERIVED_TBL_27 {
   INT32 mincode[17] ;
   INT32 maxcode[18] ;
   int valptr[17] ;
   JHUFF_TBL *pub ;
   int look_nbits[256] ;
   UINT8 look_sym[256] ;
};
# 31
typedef struct __anonstruct_D_DERIVED_TBL_27 D_DERIVED_TBL;
# 56
struct jdhuff_savable_state {
   INT32 get_buffer ;
   int bits_left ;
   int last_dc_val[4] ;
};
# 56
typedef struct jdhuff_savable_state jdhuff_savable_state;
# 82
struct huff_entropy_decoder {
   struct jpeg_entropy_decoder pub ;
   jdhuff_savable_state saved ;
   unsigned int restarts_to_go ;
   boolean printed_eod ;
   D_DERIVED_TBL *dc_derived_tbls[4] ;
   D_DERIVED_TBL *ac_derived_tbls[4] ;
};
# 82
typedef struct huff_entropy_decoder huff_entropy_decoder;
# 96
typedef huff_entropy_decoder *jdhuff_huff_entropy_ptr;
# 104
struct __anonstruct_jdhuff_working_state_28 {
   int unread_marker ;
   JOCTET const   *next_input_byte ;
   size_t bytes_in_buffer ;
   jdhuff_savable_state cur ;
   j_decompress_ptr cinfo ;
};
# 104
typedef struct __anonstruct_jdhuff_working_state_28 jdhuff_working_state;
# 30 "jdsample.c"
typedef void (*upsample1_ptr)(j_decompress_ptr cinfo ,
                              jpeg_component_info *compptr ,
                              JSAMPARRAY input_data ,
                              JSAMPARRAY *output_data_ptr );
# 36
struct my_upsampler {
   struct jpeg_upsampler pub ;
   JSAMPARRAY color_buf[10] ;
   upsample1_ptr methods[10] ;
   int next_row_out ;
   JDIMENSION rows_to_go ;
   int rowgroup_height[10] ;
   UINT8 h_expand[10] ;
   UINT8 v_expand[10] ;
};
# 36
typedef struct my_upsampler my_upsampler;
# 64
typedef my_upsampler *jdsample_my_upsample_ptr;
# 21 "jdcolor.c"
struct my_color_deconverter {
   struct jpeg_color_deconverter pub ;
   int *Cr_r_tab ;
   int *Cb_b_tab ;
   INT32 *Cr_g_tab ;
   INT32 *Cb_g_tab ;
};
# 21
typedef struct my_color_deconverter my_color_deconverter;
# 32
typedef my_color_deconverter *jdcolor_my_convert_ptr;
# 78 "jquant1.c"
typedef int ODITHER_MATRIX[4][4];
# 106
typedef INT16 FSERROR;
# 107
typedef int LOCFSERROR;
# 113
typedef FSERROR *FSERRPTR;
# 120
struct my_cquantizer1 {
   struct jpeg_color_quantizer pub ;
   JSAMPARRAY colorindex ;
   int row_index ;
   ODITHER_MATRIX *odither ;
   FSERRPTR fserrors[4] ;
   boolean on_odd_row ;
};
# 120
typedef struct my_cquantizer1 my_cquantizer;
# 138
typedef my_cquantizer *jquant1_my_cquantize_ptr;
# 149 "jquant2.c"
typedef UINT16 histcell;
# 151
typedef histcell *histptr;
# 153
typedef histcell hist1d[32];
# 154
typedef hist1d *hist2d;
# 155
typedef hist2d *hist3d;
# 195
struct my_cquantizer_2 {
   struct jpeg_color_quantizer pub ;
   hist3d histogram ;
   FSERRPTR fserrors ;
   boolean on_odd_row ;
   int *error_limiter ;
};
# 195
typedef struct my_cquantizer_2 my_cquantizer_2;
# 207
typedef my_cquantizer_2 *jquant2_my_cquantize_ptr;
# 255
struct __anonstruct_box_27 {
   int c0min ;
   int c0max ;
   int c1min ;
   int c1max ;
   int c2min ;
   int c2max ;
   INT32 volume ;
   long colorcount ;
};
# 255
typedef struct __anonstruct_box_27 box;
# 266
typedef box *boxptr;
# 47 "jdmerge.c"
struct my_upsampler_merge {
   struct jpeg_upsampler pub ;
   void (*upmethod)(j_decompress_ptr cinfo , JSAMPIMAGE input_buf ,
                    JDIMENSION in_row_group_ctr , JSAMPARRAY output_buf ) ;
   int *Cr_r_tab ;
   int *Cb_b_tab ;
   INT32 *Cr_g_tab ;
   INT32 *Cb_g_tab ;
   JSAMPROW spare_row ;
   boolean spare_full ;
   JDIMENSION out_row_width ;
   JDIMENSION rows_to_go ;
};
# 47
typedef struct my_upsampler_merge my_upsampler_merge;
# 73
typedef my_upsampler_merge *jdmerge_my_upsample_ptr;
# 129 "jmemsys.h"
typedef struct backing_store_struct *backing_store_ptr;
# 131
struct backing_store_struct {
   void (*read_backing_store)(j_common_ptr cinfo , backing_store_ptr info ,
                              void *buffer_address , long file_offset ,
                              long byte_count ) ;
   void (*write_backing_store)(j_common_ptr cinfo , backing_store_ptr info ,
                               void *buffer_address , long file_offset ,
                               long byte_count ) ;
   void (*close_backing_store)(j_common_ptr cinfo , backing_store_ptr info ) ;
   FILE *temp_file ;
   char temp_name[64] ;
};
# 131
typedef struct backing_store_struct backing_store_info;
# 89 "jmemmgr.c"
typedef union small_pool_struct *small_pool_ptr;
# 91
struct __anonstruct_hdr_27 {
   small_pool_ptr next ;
   size_t bytes_used ;
   size_t bytes_left ;
   int padding ;
};
# 91
union small_pool_struct {
   struct __anonstruct_hdr_27 hdr ;
};
# 91
typedef union small_pool_struct small_pool_hdr;
# 101
typedef union large_pool_struct *large_pool_ptr;
# 103
struct __anonstruct_hdr_28 {
   large_pool_ptr next ;
   size_t bytes_used ;
   size_t bytes_left ;
   int padding ;
};
# 103
union large_pool_struct {
   struct __anonstruct_hdr_28 hdr ;
};
# 103
typedef union large_pool_struct large_pool_hdr;
# 118
struct my_memory_mgr {
   struct jpeg_memory_mgr pub ;
   small_pool_ptr small_list[2] ;
   large_pool_ptr large_list[2] ;
   jvirt_sarray_ptr virt_sarray_list ;
   jvirt_barray_ptr virt_barray_list ;
   long total_space_allocated ;
   JDIMENSION last_rowsperchunk ;
};
# 118
typedef struct my_memory_mgr my_memory_mgr;
# 142
typedef my_memory_mgr *my_mem_ptr;
# 153
struct jvirt_sarray_control {
   JSAMPARRAY mem_buffer ;
   JDIMENSION rows_in_array ;
   JDIMENSION samplesperrow ;
   JDIMENSION unitheight ;
   JDIMENSION rows_in_mem ;
   JDIMENSION rowsperchunk ;
   JDIMENSION cur_start_row ;
   boolean dirty ;
   boolean b_s_open ;
   jvirt_sarray_ptr next ;
   backing_store_info b_s_info ;
};
# 167
struct jvirt_barray_control {
   JBLOCKARRAY mem_buffer ;
   JDIMENSION rows_in_array ;
   JDIMENSION blocksperrow ;
   JDIMENSION unitheight ;
   JDIMENSION rows_in_mem ;
   JDIMENSION rowsperchunk ;
   JDIMENSION cur_start_row ;
   boolean dirty ;
   boolean b_s_open ;
   jvirt_barray_ptr next ;
   backing_store_info b_s_info ;
};
# 52 "/home/rupak/cil/include/ccured.h"
extern void * __attribute__((__safe__)) __ptrof_nocheck(void *ptr ) ;
# 64
extern void * __attribute__((__safe__)) __endof(void *ptr ) ;
# 79
extern void * __attribute__((__safe__)) __ptrof(void *ptr ) ;
# 93
extern void __verify_nul(char const   *ptr ) ;
# 126
extern char *__stringof(char const   *ptr ) ;
# 182
extern void *__mkptr(void * __attribute__((__safe__)) p , void *phome ) ;
# 198
extern void *__mkptr_size(void * __attribute__((__safe__)) p , unsigned int len ) ;
# 229
extern void *__trusted_cast(void *p ) ;
# 137 "/home/rupak/cil/include/gcc_2.95.3/stdlib.h"
extern double atof(char const   *__nptr ) ;
# 139
extern int atoi(char const   *__nptr ) ;
# 528 "/usr/include/stdlib.h"
extern void *malloc(size_t __size ) ;
# 539 "/home/rupak/cil/include/ccured_GNUCC.patch"
extern void *realloc(void *__ptr , size_t __size ) ;
# 539 "/usr/include/stdlib.h"
extern void free(void *__ptr ) ;
# 578
extern void exit(int __status )  __attribute__((__noreturn__)) ;
# 588
extern char *getenv(char const   *__name ) ;
# 695
extern void qsort(void *__base , size_t __nmemb , size_t __size ,
                  int (*__compar)(void const   * __attribute__((__safe__)) left ,
                                  void const   * __attribute__((__safe__)) right ) ) ;
# 10 "/home/rupak/cil/include/malloc_wrappers.h"
void *realloc_wrapper(void *b , int sz ) 
{ void *res ;
  void *tmp ;
  void *tmp___0 ;
  void *result ;

  {
  {
# 12
  tmp = (void *)__ptrof(b);
# 12
  tmp___0 = realloc(tmp, (unsigned int )sz);
# 12
  res = tmp___0;
# 15
  result = b;
# 17
  result = __mkptr_size((void */* __attribute__((__safe__)) */)res,
                        (unsigned int )sz);
  }
# 18
  return (result);
}
}
# 23
void free_wrapper(void *x ) 
{ void *tmp ;

  {
  {
# 24
  tmp = (void *)__ptrof(x);
# 24
  free(tmp);
  }
# 25
  return;
}
}
# 152 "/home/rupak/cil/include/stdlib_wrappers.h"
static void *__qsort_base  ;
# 156
static int (*__qsort_compare)(void * , void * )  ;
# 195
static void *__bsearch_base  ;
# 196
static void *__bsearch_key  ;
# 200
static int (*__bsearch_compare)(void * , void * )  ;
# 37 "/home/rupak/cil/include/gcc_2.95.3/string.h"
extern void *memcpy(void * __restrict  __dest ,
                    void const   * __restrict  __src , size_t __n ) ;
# 55
extern void *memset(void *__s , int __c , size_t __n ) ;
# 91
extern int strcmp(char const   *__s1 , char const   *__s2 ) ;
# 94
extern int strncmp(char const   *__s1 , char const   *__s2 , size_t __n ) ;
# 157
extern char *strrchr(char const   *__s , int __c ) ;
# 218 "/usr/include/string.h"
extern size_t strlen(char const   *__s ) ;
# 229
extern char *strerror(int __errnum ) ;
# 272
extern int strcasecmp(char const   *__s1 , char const   *__s2 ) ;
# 276
extern int strncasecmp(char const   *__s1 , char const   *__s2 , size_t __n ) ;
# 138 "/home/rupak/cil/include/string_wrappers.h"
char *strrchr_wrapper(char const   *s , int chr ) 
{ char *result ;
  char *tmp ;
  char *tmp___0 ;

  {
  {
# 141
  tmp = __stringof(s);
# 141
  result = strrchr((char const   *)tmp, chr);
# 142
  tmp___0 = (char *)__mkptr((void */* __attribute__((__safe__)) */)((void *)result),
                            (void *)s);
  }
# 142
  return (tmp___0);
}
}
# 168
int strcasecmp_wrapper(char const   *s1 , char const   *s2 ) 
{ char *tmp ;
  char *tmp___0 ;
  int tmp___1 ;

  {
  {
# 170
  tmp = __stringof(s2);
# 170
  tmp___0 = __stringof(s1);
# 170
  tmp___1 = strcasecmp((char const   *)tmp___0, (char const   *)tmp);
  }
# 170
  return (tmp___1);
}
}
# 181
int strncasecmp_wrapper(char const   *s1 , char const   *s2 , unsigned int n ) 
{ void * __attribute__((__safe__)) tmp ;
  void * __attribute__((__safe__)) tmp___0 ;
  void * __attribute__((__safe__)) tmp___1 ;
  void * __attribute__((__safe__)) tmp___2 ;
  char *tmp___3 ;
  char *tmp___4 ;
  int tmp___5 ;

  {
  {
# 183
  tmp = __endof((void *)s1);
# 183
  tmp___0 = __ptrof_nocheck((void *)s1);
  }
# 183
  if ((unsigned int )tmp - (unsigned int )tmp___0 < n) {
    {
# 185
    __verify_nul(s1);
    }
  }
  {
# 187
  tmp___1 = __endof((void *)s2);
# 187
  tmp___2 = __ptrof_nocheck((void *)s2);
  }
# 187
  if ((unsigned int )tmp___1 - (unsigned int )tmp___2 < n) {
    {
# 188
    __verify_nul(s2);
    }
  }
  {
# 190
  tmp___3 = (char *)__ptrof((void *)s2);
# 190
  tmp___4 = (char *)__ptrof((void *)s1);
# 190
  tmp___5 = strncasecmp((char const   *)tmp___4, (char const   *)tmp___3, n);
  }
# 190
  return (tmp___5);
}
}
# 254
static char const   *saved_str   = (char const   *)((void *)0);
# 72 "/home/rupak/cil/include/ccured_GNUCC.patch"
extern int _get__ctype_b(int  ) ;
# 109 "/usr/include/ctype.h"
extern int tolower(int __c ) ;
# 424 "/usr/include/libio.h"
extern int _IO_getc(_IO_FILE *__fp ) ;
# 425
extern int _IO_putc(int __c , _IO_FILE *__fp ) ;
# 167 "/home/rupak/cil/include/ccured_GNUCC.patch"
extern FILE *get_stdin(void) ;
# 169
extern FILE *get_stdout(void) ;
# 171
extern FILE *get_stderr(void) ;
# 183 "/usr/include/stdio.h"
extern int fclose(FILE *__stream ) ;
# 185
extern int fflush(FILE *__stream ) ;
# 200
extern FILE *fopen(char const   * __restrict  __filename ,
                   char const   * __restrict  __modes ) ;
# 272
extern int fprintf(FILE * __restrict  __stream ,
                   char const   * __restrict  __format  , ...) ;
# 275
extern int printf(char const   * __restrict  __format  , ...) ;
# 277
extern int sprintf(char * __restrict  __s , char const   * __restrict  __format 
                   , ...) ;
# 281
extern int vfprintf(FILE * __restrict  __s ,
                    char const   * __restrict  __format , __gnuc_va_list __arg ) ;
# 324
extern int fscanf(FILE * __restrict  __stream ,
                  char const   * __restrict  __format  , ...) ;
# 373
extern int fputc(int __c , FILE *__stream ) ;
# 458
extern size_t fread(void * __restrict  __ptr , size_t __size , size_t __n ,
                    FILE * __restrict  __stream ) ;
# 461
extern size_t fwrite(void const   * __restrict  __ptr , size_t __size ,
                     size_t __n , FILE * __restrict  __s ) ;
# 534
extern int ferror(FILE *__stream ) ;
# 545
extern void perror(char const   *__s ) ;
# 64 "/home/rupak/cil/include/stdio_wrappers.h"
extern FILE * __attribute__((__safe__)) __ptrof_file(FILE *f ) ;
# 82
extern void resetSScanfCount(char const   * ) ;
# 83
extern int getScanfCount(void) ;
# 84
extern FILE *ccured_sscanf_file ;
# 264 "/home/rupak/cil/include/ccured_GNUCC.patch"
extern void __ccured_va_start(__ccured_va_list  , unsigned long  ) ;
# 267
extern void __ccured_va_end(__ccured_va_list  ) ;
# 337 "/home/rupak/cil/include/stdio_wrappers.h"
extern int ( /* missing proto */  GCC_STDARG_START)() ;
# 364
extern int ccured_scanf_count ;
# 468
void perror_wrapper(char const   *s ) 
{ char const   *tmp ;

  {
  {
# 469
  tmp = (char const   *)__stringof(s);
# 469
  perror(tmp);
  }
# 470
  return;
}
}
# 157 "pbmplus.h"
void pm_init(int *argcP , char **argv ) ;
# 162
void **pm_allocarray(int cols , int rows , int size ) ;
# 164
void *pm_allocrow(int cols , int size ) ;
# 166
void pm_freearray(void **its , int rows ) ;
# 168
void pm_freerow(void *itrow ) ;
# 174
int pm_keymatch(char *str , char *keyword , int minchars ) ;
# 186
void pm_message(char *format  , ...) ;
# 188
void pm_error(char *format  , ...) ;
# 189
void pm_perror(char *reason ) ;
# 31 "pbm.h"
void pbm_init(int *argcP , char **argv ) ;
# 39
void pbm_readpbminit(FILE *file , int *colsP , int *rowsP , int *formatP ) ;
# 40
void pbm_readpbmrow(FILE *file , bit *bitrow , int cols , int format ) ;
# 43
void pbm_writepbminit(FILE *file , int cols , int rows , int forceplain ) ;
# 44
void pbm_writepbmrow(FILE *file , bit *bitrow , int cols , int forceplain ) ;
# 9 "libpbm.h"
char pbm_getc(FILE *file ) ;
# 10
unsigned char pbm_getrawbyte(FILE *file ) ;
# 11
int pbm_getint(FILE *file ) ;
# 13
int pbm_readmagicnumber(FILE *file ) ;
# 15
void pbm_readpbminitrest(FILE *file , int *colsP , int *rowsP ) ;
# 39 "/usr/include/bits/errno.h"
extern int *__errno_location(void)  __attribute__((__const__)) ;
# 42 "libpbm1.c"
void *pm_allocrow(int cols , int size ) 
{ register void *itrow ;
  void *tmp ;

  {
  {
# 49
  tmp = malloc((unsigned int )(cols * size));
# 49
  itrow = tmp;
  }
# 50
  if ((unsigned int )itrow == (unsigned int )((void *)0)) {
    {
# 51
    pm_error("out of memory allocating a row");
    }
  }
# 52
  return (itrow);
}
}
# 55
void pm_freerow(void *itrow ) 
{ 

  {
  {
# 59
  free(itrow);
  }
# 60
  return;
}
}
# 63
void **pm_allocarray(int cols , int rows , int size ) 
{ void **its ;
  int i ;
  void *tmp___0 ;

  {
  {
# 74
  its = (void **)malloc((unsigned int )rows * sizeof((*its)));
  }
# 75
  if ((unsigned int )its == (unsigned int )((char **)0)) {
    {
# 76
    pm_error("out of memory allocating an array");
    }
  }
  {
# 77
  tmp___0 = malloc((unsigned int )((rows * cols) * size));
# 77
  (*(its + 0)) = tmp___0;
  }
# 78
  if ((unsigned int )(*(its + 0)) == (unsigned int )((void *)0)) {
    {
# 79
    pm_error("out of memory allocating an array");
    }
  }
  {
# 80
  i = 1;
  }
# 80
  while (i < rows) {
    {
# 81
    (*(its + i)) = (*(its + 0)) + (i * cols) * size;
# 80
    i ++;
    }
  }
# 82
  return (its);
}
}
# 85
void pm_freearray(void **its , int rows ) 
{ 

  {
  {
# 90
  free((*(its + 0)));
# 91
  free((void *)its);
  }
# 92
  return;
}
}
# 97
int pm_keymatch(char *str , char *keyword , int minchars ) 
{ register int len ;
  register char c1 ;
  register char c2 ;
  char *tmp ;
  char *tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;

  {
  {
# 105
  len = (int )strlen((char const   *)str);
  }
# 106
  if (len < minchars) {
# 107
    return (0);
  }
# 108
  while (1) {
    {
# 108
    len --;
    }
# 108
    if (! (len >= 0)) {
# 108
      break;
    }
    {
# 112
    tmp = str;
# 112
    str ++;
# 112
    c1 = (*tmp);
# 113
    tmp___0 = keyword;
# 113
    keyword ++;
# 113
    c2 = (*tmp___0);
    }
# 114
    if ((int )c2 == 0) {
# 115
      return (0);
    }
    {
# 116
    tmp___1 = _get__ctype_b((int )c1);
    }
# 116
    if (tmp___1 & 256) {
      {
# 117
      c1 = (char )tolower((int )c1);
      }
    }
    {
# 118
    tmp___2 = _get__ctype_b((int )c2);
    }
# 118
    if (tmp___2 & 256) {
      {
# 119
      c1 = (char )tolower((int )c2);
      }
    }
# 120
    if ((int )c1 != (int )c2) {
# 121
      return (0);
    }
  }
# 123
  return (1);
}
}
# 129
int pm_maxvaltobits(int maxval ) 
{ 

  {
# 133
  if (maxval <= 1) {
# 134
    return (1);
  } else {
# 135
    if (maxval <= 3) {
# 136
      return (2);
    } else {
# 137
      if (maxval <= 7) {
# 138
        return (3);
      } else {
# 139
        if (maxval <= 15) {
# 140
          return (4);
        } else {
# 141
          if (maxval <= 31) {
# 142
            return (5);
          } else {
# 143
            if (maxval <= 63) {
# 144
              return (6);
            } else {
# 145
              if (maxval <= 127) {
# 146
                return (7);
              } else {
# 147
                if (maxval <= 255) {
# 148
                  return (8);
                } else {
# 149
                  if (maxval <= 511) {
# 150
                    return (9);
                  } else {
# 151
                    if (maxval <= 1023) {
# 152
                      return (10);
                    } else {
# 153
                      if (maxval <= 2047) {
# 154
                        return (11);
                      } else {
# 155
                        if (maxval <= 4095) {
# 156
                          return (12);
                        } else {
# 157
                          if (maxval <= 8191) {
# 158
                            return (13);
                          } else {
# 159
                            if (maxval <= 16383) {
# 160
                              return (14);
                            } else {
# 161
                              if (maxval <= 32767) {
# 162
                                return (15);
                              } else {
# 163
                                if ((long )maxval <= 65535L) {
# 164
                                  return (16);
                                } else {
                                  {
# 166
                                  pm_error("maxval of %d is too large!", maxval);
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
# 167
  return (0);
}
}
# 169
int pm_bitstomaxval(int bits ) 
{ 

  {
# 173
  return ((1 << bits) - 1);
}
}
# 179
static char *progname  ;
# 180
static int showmessages  ;
# 182
void pm_init(int *argcP , char **argv ) 
{ int argn ;
  int i ;
  int tmp ;
  int tmp___0 ;

  {
  {
# 190
  progname = strrchr((char const   *)(*(argv + 0)), (int )'/');
  }
# 191
  if ((unsigned int )progname == (unsigned int )((void *)0)) {
    {
# 192
    progname = (*(argv + 0));
    }
  } else {
    {
# 194
    progname ++;
    }
  }
  {
# 197
  showmessages = 1;
# 198
  argn = 1;
  }
# 198
  while (argn < (*argcP)) {
    {
# 200
    tmp___0 = pm_keymatch((*(argv + argn)), "-quiet", 6);
    }
# 200
    if (tmp___0) {
      {
# 202
      showmessages = 0;
      }
    } else {
      {
# 204
      tmp = pm_keymatch((*(argv + argn)), "-version", 7);
      }
# 204
      if (tmp) {
        {
# 206
        pm_message("Version of %s", "10dec91");
# 211
        pm_message("SYSV defined");
# 217
        pm_message("PBMPLUS_RAWBITS defined");
# 246
        exit(0);
        {
# 129 "spec.work"
        while (1) {

        }
        {

        }
        }

        }
      } else {
        goto __Cont;
      }
    }
    {
# 250 "libpbm1.c"
    i = argn + 1;
    }
# 250
    while (i <= (*argcP)) {
      {
# 251
      (*(argv + (i - 1))) = (*(argv + i));
# 250
      i ++;
      }
    }
    {
# 252
    (*argcP) --;
    }
    __Cont: 
    {
# 198
    argn ++;
    }
  }
# 254
  return;
}
}
# 256
void pbm_init(int *argcP , char **argv ) 
{ 

  {
  {
# 261
  pm_init(argcP, argv);
  }
# 262
  return;
}
}
# 267
void pm_usage(char *usage ) 
{ FILE * __restrict  tmp ;

  {
  {
# 271
  tmp = (FILE */* __restrict  */)get_stderr();
  {
# 105 "spec.work"
  tmp->__BLAST_FLAG = 1;
  {

  }
  }

  {
# 72
  if (! (tmp->__BLAST_FLAG == 1)) {
# 74
    __error__();
  }
  {

  }
  }
# 271 "libpbm1.c"
  fprintf(tmp,
          (char const   */* __restrict  */)((char const   *)"usage:  %s %s\n"),
          progname, usage);
# 272
  exit(1);
  {
# 129 "spec.work"
  while (1) {

  }
  {

  }
  }

  }
# 272 "libpbm1.c"
  return;
}
}
# 275
void pm_perror(char *reason ) 
{ char *e ;
  int *tmp ;

  {
  {
# 289
  tmp = __errno_location();
# 289
  e = strerror((*tmp));
  }
# 291
  if ((unsigned int )reason != (unsigned int )((char *)0)) {
# 291
    if ((int )(*(reason + 0)) != 0) {
      {
# 292
      pm_error("%s - %s", reason, e);
      }
    } else {
      {
# 294
      pm_error("%s", e);
      }
    }
  } else {
    {
# 294
    pm_error("%s", e);
    }
  }
# 295
  return;
}
}
# 298
void pm_message(char *format  , ...) 
{ __ccured_va_list args ;
  unsigned long tmp ;
  FILE * __restrict  tmp___0 ;
  FILE * __restrict  tmp___1 ;
  FILE *tmp___2 ;

  {
  {
# 303
  tmp = (unsigned long )GCC_STDARG_START();
# 303
  __ccured_va_start(args, tmp);
  }
# 317
  if (showmessages) {
    {
# 319
    tmp___0 = (FILE */* __restrict  */)get_stderr();
    {
# 105 "spec.work"
    tmp___0->__BLAST_FLAG = 1;
    {

    }
    }

    {
# 64
    if (! (tmp___0->__BLAST_FLAG == 1)) {
# 66
      __error__();
    }
    {

    }
    }
# 319 "libpbm1.c"
    fprintf(tmp___0, (char const   */* __restrict  */)((char const   *)"%s: "),
            progname);
# 320
    tmp___1 = (FILE */* __restrict  */)get_stderr();
    {
# 105 "spec.work"
    tmp___1->__BLAST_FLAG = 1;
    {

    }
    }
# 320 "libpbm1.c"
    vfprintf(tmp___1, (char const   */* __restrict  */)((char const   *)format),
             args);
# 321
    tmp___2 = get_stderr();
    {
# 105 "spec.work"
    tmp___2->__BLAST_FLAG = 1;
    {

    }
    }
# 321 "libpbm1.c"
    fputc((int )'\n', tmp___2);
    }
  }
  {
# 323
  __ccured_va_end(args);
  }
# 324
  return;
}
}
# 327
void pm_error(char *format  , ...) 
{ __ccured_va_list args ;
  unsigned long tmp ;
  FILE * __restrict  tmp___0 ;
  FILE * __restrict  tmp___1 ;
  FILE *tmp___2 ;

  {
  {
# 332
  tmp = (unsigned long )GCC_STDARG_START();
# 332
  __ccured_va_start(args, tmp);
# 346
  tmp___0 = (FILE */* __restrict  */)get_stderr();
  {
# 105 "spec.work"
  tmp___0->__BLAST_FLAG = 1;
  {

  }
  }

  {
# 64
  if (! (tmp___0->__BLAST_FLAG == 1)) {
# 66
    __error__();
  }
  {

  }
  }
# 346 "libpbm1.c"
  fprintf(tmp___0, (char const   */* __restrict  */)((char const   *)"%s: "),
          progname);
# 347
  tmp___1 = (FILE */* __restrict  */)get_stderr();
  {
# 105 "spec.work"
  tmp___1->__BLAST_FLAG = 1;
  {

  }
  }
# 347 "libpbm1.c"
  vfprintf(tmp___1, (char const   */* __restrict  */)((char const   *)format),
           args);
# 348
  tmp___2 = get_stderr();
  {
# 105 "spec.work"
  tmp___2->__BLAST_FLAG = 1;
  {

  }
  }
# 348 "libpbm1.c"
  fputc((int )'\n', tmp___2);
# 349
  __ccured_va_end(args);
# 350
  exit(1);
  {
# 129 "spec.work"
  while (1) {

  }
  {

  }
  }

  }
# 350 "libpbm1.c"
  return;
}
}
# 508
FILE *pm_openr(char *name ) 
{ FILE *f ;
  int tmp ;

  {
  {
# 514
  tmp = strcmp((char const   *)name, (char const   *)"-");
  }
# 514
  if (tmp == 0) {
    {
# 515
    f = get_stdin();
    {
# 121 "spec.work"
    f->__BLAST_FLAG = 1;
    {

    }
    }

    }
  } else {
    {
# 521 "libpbm1.c"
    f = fopen((char const   */* __restrict  */)((char const   *)name),
              (char const   */* __restrict  */)((char const   *)"r"));
    {
# 17 "spec.work"
    if (f != (FILE *)0) {
# 17
      f->__BLAST_FLAG = 1;
    }
    {

    }
    }

    }
# 523 "libpbm1.c"
    if ((unsigned int )f == (unsigned int )((void *)0)) {
      {
# 525
      pm_perror(name);
# 526
      exit(1);
      {
# 129 "spec.work"
      while (1) {

      }
      {

      }
      }

      }
    }
  }
# 529 "libpbm1.c"
  return (f);
}
}
# 532
FILE *pm_openw(char *name ) 
{ FILE *f ;

  {
  {
# 541
  f = fopen((char const   */* __restrict  */)((char const   *)name),
            (char const   */* __restrict  */)((char const   *)"w"));
  {
# 17 "spec.work"
  if (f != (FILE *)0) {
# 17
    f->__BLAST_FLAG = 1;
  }
  {

  }
  }

  }
# 543 "libpbm1.c"
  if ((unsigned int )f == (unsigned int )((void *)0)) {
    {
# 545
    pm_perror(name);
# 546
    exit(1);
    {
# 129 "spec.work"
    while (1) {

    }
    {

    }
    }

    }
  }
# 548 "libpbm1.c"
  return (f);
}
}
# 551
void pm_close(FILE *f ) 
{ int tmp ;
  int tmp___0 ;
  FILE *tmp___1 ;

  {
  {

  {
# 40 "spec.work"
  if (! (f->__BLAST_FLAG == 1)) {
# 42
    __error__();
  }
  {

  }
  }
# 555 "libpbm1.c"
  fflush(f);
# 556
  tmp = ferror(f);
  }
# 556
  if (tmp) {
    {
# 557
    pm_message("a file read or write error occurred at some point");
    }
  }
  {
# 558
  tmp___1 = get_stdin();
  {
# 121 "spec.work"
  tmp___1->__BLAST_FLAG = 1;
  {

  }
  }

  }
# 558 "libpbm1.c"
  if ((unsigned int )f != (unsigned int )tmp___1) {
    {
# 559
    tmp___0 = fclose(f);
    }
# 559
    if (tmp___0 != 0) {
      {
# 560
      pm_perror("fclose");
      }
    }
  }
# 561
  return;
}
}
# 566
int pm_readbigshort(FILE *in , short *sP ) 
{ int c ;

  {
  {
# 573
  c = _IO_getc(in);
  }
# 573
  if (c == -1) {
# 574
    return (-1);
  }
  {
# 575
  (*sP) = (short )((c & 255) << 8);
# 576
  c = _IO_getc(in);
  }
# 576
  if (c == -1) {
# 577
    return (-1);
  }
  {
# 578
  (*sP) = (short )((int )(*sP) | (c & 255));
  }
# 579
  return (0);
}
}
# 583
int pm_writebigshort(FILE *out , short s ) 
{ 

  {
  {
# 592
  _IO_putc(((int )s >> 8) & 255, out);
# 593
  _IO_putc((int )s & 255, out);
  }
# 594
  return (0);
}
}
# 597
int pm_readbiglong(FILE *in , long *lP ) 
{ int c ;

  {
  {
# 604
  c = _IO_getc(in);
  }
# 604
  if (c == -1) {
# 605
    return (-1);
  }
  {
# 606
  (*lP) = (long )((c & 255) << 24);
# 607
  c = _IO_getc(in);
  }
# 607
  if (c == -1) {
# 608
    return (-1);
  }
  {
# 609
  (*lP) |= (long )((c & 255) << 16);
# 610
  c = _IO_getc(in);
  }
# 610
  if (c == -1) {
# 611
    return (-1);
  }
  {
# 612
  (*lP) |= (long )((c & 255) << 8);
# 613
  c = _IO_getc(in);
  }
# 613
  if (c == -1) {
# 614
    return (-1);
  }
  {
# 615
  (*lP) |= (long )(c & 255);
  }
# 616
  return (0);
}
}
# 619
int pm_writebiglong(FILE *out , long l ) 
{ 

  {
  {
# 624
  _IO_putc((int )((l >> 24) & 255L), out);
# 625
  _IO_putc((int )((l >> 16) & 255L), out);
# 626
  _IO_putc((int )((l >> 8) & 255L), out);
# 627
  _IO_putc((int )(l & 255L), out);
  }
# 628
  return (0);
}
}
# 631
int pm_readlittleshort(FILE *in , short *sP ) 
{ int c ;

  {
  {
# 638
  c = _IO_getc(in);
  }
# 638
  if (c == -1) {
# 639
    return (-1);
  }
  {
# 640
  (*sP) = (short )(c & 255);
# 641
  c = _IO_getc(in);
  }
# 641
  if (c == -1) {
# 642
    return (-1);
  }
  {
# 643
  (*sP) = (short )((int )(*sP) | ((c & 255) << 8));
  }
# 644
  return (0);
}
}
# 648
int pm_writelittleshort(FILE *out , short s ) 
{ 

  {
  {
# 657
  _IO_putc((int )s & 255, out);
# 658
  _IO_putc(((int )s >> 8) & 255, out);
  }
# 659
  return (0);
}
}
# 662
int pm_readlittlelong(FILE *in , long *lP ) 
{ int c ;

  {
  {
# 669
  c = _IO_getc(in);
  }
# 669
  if (c == -1) {
# 670
    return (-1);
  }
  {
# 671
  (*lP) = (long )(c & 255);
# 672
  c = _IO_getc(in);
  }
# 672
  if (c == -1) {
# 673
    return (-1);
  }
  {
# 674
  (*lP) |= (long )((c & 255) << 8);
# 675
  c = _IO_getc(in);
  }
# 675
  if (c == -1) {
# 676
    return (-1);
  }
  {
# 677
  (*lP) |= (long )((c & 255) << 16);
# 678
  c = _IO_getc(in);
  }
# 678
  if (c == -1) {
# 679
    return (-1);
  }
  {
# 680
  (*lP) |= (long )((c & 255) << 24);
  }
# 681
  return (0);
}
}
# 684
int pm_writelittlelong(FILE *out , long l ) 
{ 

  {
  {
# 689
  _IO_putc((int )(l & 255L), out);
# 690
  _IO_putc((int )((l >> 8) & 255L), out);
# 691
  _IO_putc((int )((l >> 16) & 255L), out);
# 692
  _IO_putc((int )((l >> 24) & 255L), out);
  }
# 693
  return (0);
}
}
# 367 "/home/rupak/cil/include/stdio_wrappers.h"
__inline static double ccured_fscanf_double___0(FILE *stream , char *format ) 
{ double d ;
  int res ;
  char *tmp ;
  FILE *tmp___0 ;
  int tmp___1 ;

  {
  {
# 369
  d = 0.0;
  }
# 370
  if (ccured_scanf_count != -1) {
    {
# 371
    tmp = __stringof((char const   *)format);
# 371
    tmp___0 = (FILE *)__ptrof_file(stream);
# 371
    tmp___1 = fscanf((FILE */* __restrict  */)tmp___0,
                     (char const   */* __restrict  */)((char const   *)tmp), & d);
# 371
    res = tmp___1;
    }
# 373
    if (res == -1) {
      {
# 374
      ccured_scanf_count = -1;
      }
    } else {
      {
# 376
      ccured_scanf_count = ccured_scanf_count + res;
      }
    }
  }
# 379
  return (d);
}
}
# 383
__inline static int ccured_fscanf_int___0(FILE *stream , char *format ) 
{ int i ;
  int res ;
  char *tmp ;
  FILE *tmp___0 ;
  int tmp___1 ;

  {
  {
# 385
  i = 0;
  }
# 386
  if (ccured_scanf_count != -1) {
    {
# 387
    tmp = __stringof((char const   *)format);
# 387
    tmp___0 = (FILE *)__ptrof_file(stream);
# 387
    tmp___1 = fscanf((FILE */* __restrict  */)tmp___0,
                     (char const   */* __restrict  */)((char const   *)tmp), & i);
# 387
    res = tmp___1;
    }
# 389
    if (res == -1) {
      {
# 390
      ccured_scanf_count = -1;
      }
    } else {
      {
# 392
      ccured_scanf_count = ccured_scanf_count + res;
      }
    }
  }
# 395
  return (i);
}
}
# 16 "libpbm2.c"
static bit pbm_getbit(FILE *file ) 
{ register char ch ;
  int tmp ;

  {
# 22
  while (1) {
    {
# 24
    ch = pbm_getc(file);
    }
# 22
    if (! ((int )ch == 32)) {
# 22
      if (! ((int )ch == 9)) {
# 22
        if (! ((int )ch == 10)) {
# 22
          if (! ((int )ch == 13)) {
# 22
            break;
          }
        }
      }
    }
  }
# 28
  if ((int )ch != 48) {
# 28
    if ((int )ch != 49) {
      {
# 29
      pm_error("junk in file where bits should be");
      }
    }
  }
# 31
  if ((int )ch == 49) {
    {
# 31
    tmp = 1;
    }
  } else {
    {
# 31
    tmp = 0;
    }
  }
# 31
  return ((unsigned char )tmp);
}
}
# 34
int pbm_readmagicnumber(FILE *file ) 
{ int ich1 ;
  int ich2 ;

  {
  {
# 40
  ich1 = _IO_getc(file);
  }
# 41
  if (ich1 == -1) {
    {
# 42
    pm_error("EOF / read error reading magic number");
    }
  }
  {
# 43
  ich2 = _IO_getc(file);
  }
# 44
  if (ich2 == -1) {
    {
# 45
    pm_error("EOF / read error reading magic number");
    }
  }
# 46
  return (ich1 * 256 + ich2);
}
}
# 49
void pbm_readpbminitrest(FILE *file , int *colsP , int *rowsP ) 
{ 

  {
  {
# 56
  (*colsP) = pbm_getint(file);
# 57
  (*rowsP) = pbm_getint(file);
  }
# 58
  return;
}
}
# 60
void pbm_readpbminit(FILE *file , int *colsP , int *rowsP , int *formatP ) 
{ int tmp ;

  {
  {
# 68
  (*formatP) = pbm_readmagicnumber(file);
  }
# 69
  if ((*formatP) == 20529) {
    {
# 69
    tmp = 20529;
    }
  } else {
# 69
    if ((*formatP) == 20532) {
      {
# 69
      tmp = 20529;
      }
    } else {
      {
# 69
      tmp = -1;
      }
    }
  }
# 69
  switch (tmp) {
  case 20529: 
  {
# 72
  pbm_readpbminitrest(file, colsP, rowsP);
  }
# 73
  break;
  default: 
  {
# 76
  pm_error("bad magic number - not a pbm file");
  }
  }
# 78
  return;
}
}
# 80
void pbm_readpbmrow(FILE *file , bit *bitrow , int cols , int format ) 
{ register int col ;
  register int bitshift ;
  register unsigned char item ;
  register bit *bP ;

  {
# 90
  switch (format) {
  case 20529: 
  {
# 93
  col = 0;
# 93
  bP = bitrow;
  }
# 93
  while (col < cols) {
    {
# 94
    (*bP) = pbm_getbit(file);
# 93
    col ++;
# 93
    bP ++;
    }
  }
# 95
  break;
  case 20532: 
  {
# 98
  bitshift = -1;
# 99
  col = 0;
# 99
  bP = bitrow;
  }
# 99
  while (col < cols) {
# 101
    if (bitshift == -1) {
      {
# 103
      item = pbm_getrawbyte(file);
# 104
      bitshift = 7;
      }
    }
    {
# 106
    (*bP) = (unsigned char )(((int )item >> bitshift) & 1);
# 107
    bitshift --;
# 99
    col ++;
# 99
    bP ++;
    }
  }
# 109
  break;
  default: 
  {
# 112
  pm_error("can\'t happen");
  }
  }
# 114
  return;
}
}
# 116
bit **pbm_readpbm(FILE *file , int *colsP , int *rowsP ) 
{ register bit **bits ;
  int format ;
  int row ;

  {
  {
# 125
  pbm_readpbminit(file, colsP, rowsP, & format);
# 127
  bits = (bit **)pm_allocarray((*colsP), (*rowsP), (int )sizeof(bit ));
# 129
  row = 0;
  }
# 129
  while (row < (*rowsP)) {
    {
# 130
    pbm_readpbmrow(file, (*(bits + row)), (*colsP), format);
# 129
    row ++;
    }
  }
# 132
  return (bits);
}
}
# 16 "libpbm3.c"
void pbm_writepbminit(FILE *file , int cols , int rows , int forceplain ) 
{ 

  {
# 23
  if (forceplain) {
    {

    {
# 88 "spec.work"
    if (! (file->__BLAST_FLAG == 1)) {
# 90
      __error__();
    }
    {

    }
    }
# 26 "libpbm3.c"
    fprintf((FILE */* __restrict  */)file,
            (char const   */* __restrict  */)((char const   *)"%c%c\n%d %d\n"),
            'P', '1', cols, rows);
    }
  } else {
    {

    {
# 88 "spec.work"
    if (! (file->__BLAST_FLAG == 1)) {
# 90
      __error__();
    }
    {

    }
    }
# 24 "libpbm3.c"
    fprintf((FILE */* __restrict  */)file,
            (char const   */* __restrict  */)((char const   *)"%c%c\n%d %d\n"),
            'P', '4', cols, rows);
    }
  }
# 30
  return;
}
}
# 33
static void pbm_writepbmrowraw(FILE *file , bit *bitrow , int cols ) 
{ register int col ;
  register int bitshift ;
  register unsigned char item ;
  register bit *bP ;

  {
  {
# 43
  bitshift = 7;
# 44
  item = (unsigned char )0;
# 45
  col = 0;
# 45
  bP = bitrow;
  }
# 45
  while (col < cols) {
# 47
    if ((*bP)) {
      {
# 48
      item = (unsigned char )((int )item + (1 << bitshift));
      }
    }
    {
# 49
    bitshift --;
    }
# 50
    if (bitshift == -1) {
      {
# 52
      _IO_putc((int )item, file);
# 53
      bitshift = 7;
# 54
      item = (unsigned char )0;
      }
    }
    {
# 45
    col ++;
# 45
    bP ++;
    }
  }
# 57
  if (bitshift != 7) {
    {
# 58
    _IO_putc((int )item, file);
    }
  }
# 59
  return;
}
}
# 62
static void pbm_writepbmrowplain(FILE *file , bit *bitrow , int cols ) 
{ register int col ;
  register int charcount ;
  register bit *bP ;
  int tmp ;

  {
  {
# 71
  charcount = 0;
# 72
  col = 0;
# 72
  bP = bitrow;
  }
# 72
  while (col < cols) {
# 74
    if (charcount >= 70) {
      {
# 76
      _IO_putc((int )'\n', file);
# 77
      charcount = 0;
      }
    }
# 79
    if ((*bP)) {
      {
# 79
      tmp = (int )'1';
      }
    } else {
      {
# 79
      tmp = (int )'0';
      }
    }
    {
# 79
    _IO_putc(tmp, file);
# 80
    charcount ++;
# 72
    col ++;
# 72
    bP ++;
    }
  }
  {
# 82
  _IO_putc((int )'\n', file);
  }
# 83
  return;
}
}
# 85
void pbm_writepbmrow(FILE *file , bit *bitrow , int cols , int forceplain ) 
{ 

  {
# 93
  if (forceplain) {
    {
# 96
    pbm_writepbmrowplain(file, bitrow, cols);
    }
  } else {
    {
# 94
    pbm_writepbmrowraw(file, bitrow, cols);
    }
  }
# 100
  return;
}
}
# 102
void pbm_writepbm(FILE *file , bit **bits , int cols , int rows ,
                  int forceplain ) 
{ int row ;

  {
  {
# 111
  pbm_writepbminit(file, cols, rows, forceplain);
# 113
  row = 0;
  }
# 113
  while (row < rows) {
    {
# 114
    pbm_writepbmrow(file, (*(bits + row)), cols, forceplain);
# 113
    row ++;
    }
  }
# 115
  return;
}
}
# 16 "libpbm4.c"
char pbm_getc(FILE *file ) 
{ register int ich ;
  register char ch ;

  {
  {
# 23
  ich = _IO_getc(file);
  }
# 24
  if (ich == -1) {
    {
# 25
    pm_error("EOF / read error");
    }
  }
  {
# 26
  ch = (char )ich;
  }
# 28
  if ((int )ch == 35) {
# 30
    while (1) {
      {
# 32
      ich = _IO_getc(file);
      }
# 33
      if (ich == -1) {
        {
# 34
        pm_error("EOF / read error");
        }
      }
      {
# 35
      ch = (char )ich;
      }
# 30
      if ((int )ch != 10) {
# 30
        if (! ((int )ch != 13)) {
# 30
          break;
        }
      } else {
# 30
        break;
      }
    }
  }
# 40
  return (ch);
}
}
# 43
unsigned char pbm_getrawbyte(FILE *file ) 
{ register int iby ;

  {
  {
# 49
  iby = _IO_getc(file);
  }
# 50
  if (iby == -1) {
    {
# 51
    pm_error("EOF / read error");
    }
  }
# 52
  return ((unsigned char )iby);
}
}
# 55
int pbm_getint(FILE *file ) 
{ register char ch ;
  register int i ;

  {
# 62
  while (1) {
    {
# 64
    ch = pbm_getc(file);
    }
# 62
    if (! ((int )ch == 32)) {
# 62
      if (! ((int )ch == 9)) {
# 62
        if (! ((int )ch == 10)) {
# 62
          if (! ((int )ch == 13)) {
# 62
            break;
          }
        }
      }
    }
  }
# 68
  if ((int )ch < 48) {
    {
# 69
    pm_error("junk in file where an integer should be");
    }
  } else {
# 68
    if ((int )ch > 57) {
      {
# 69
      pm_error("junk in file where an integer should be");
      }
    }
  }
  {
# 71
  i = 0;
  }
# 72
  while (1) {
    {
# 74
    i = (i * 10 + (int )ch) - 48;
# 75
    ch = pbm_getc(file);
    }
# 72
    if ((int )ch >= 48) {
# 72
      if (! ((int )ch <= 57)) {
# 72
        break;
      }
    } else {
# 72
      break;
    }
  }
# 79
  return (i);
}
}
# 23 "libpbm5.c"
static unsigned long defaultfont_bits[155][4]   = 
# 23
  {{0UL, 536873984UL, 268435456UL, 0UL},
   {3321929728UL, 1107298320UL, 2UL, 99UL},
   {1811980288UL, 1157629968UL, 2UL, 54UL},
   {1811980288UL, 2290092040UL, 4074888930UL, 54UL},
   {1409286144UL, 2147485696UL, 286401602UL, 42UL},
   {1409286145UL, 2048UL, 286401602UL, 42UL},
   {1409286145UL, 2048UL, 286401154UL, 42UL},
   {1140850946UL, 2048UL, 286401410UL, 34UL},
   {3992977666UL, 2048UL, 300015874UL, 119UL},
   {516UL, 2048UL, 285221122UL, 0UL}, {0UL, 3072UL, 285221122UL, 0UL},
   {0UL, 4161536UL, 3816846848UL, 0UL}, {0UL, 0UL, 0UL, 0UL},
   {0UL, 0UL, 0UL, 0UL}, {0UL, 0UL, 0UL, 0UL}, {0UL, 0UL, 0UL, 0UL},
   {0UL, 0UL, 0UL, 0UL}, {0UL, 0UL, 0UL, 0UL}, {0UL, 0UL, 0UL, 0UL},
   {0UL, 0UL, 0UL, 0UL}, {0UL, 0UL, 0UL, 0UL}, {0UL, 0UL, 0UL, 0UL},
   {0UL, 0UL, 0UL, 0UL}, {0UL, 0UL, 0UL, 0UL}, {0UL, 0UL, 0UL, 0UL},
   {0UL, 0UL, 0UL, 0UL}, {33554560UL, 262144UL, 1179648UL, 1UL},
   {67108994UL, 2190350392UL, 539033856UL, 2UL},
   {67108994UL, 2190550088UL, 539033856UL, 2UL},
   {134217858UL, 2412779840UL, 1077970882UL, 4UL},
   {134217856UL, 84674082UL, 4227330UL, 4UL},
   {268435584UL, 84285556UL, 4227727UL, 32776UL},
   {268435584UL, 529606280UL, 4227074UL, 8UL},
   {536870912UL, 168888716UL, 4227074UL, 16UL},
   {536871040UL, 168691314UL, 2162688UL, 16UL},
   {1073741824UL, 262144UL, 2162688UL, 32UL}, {0UL, 0UL, 1179648UL, 0UL},
   {0UL, 0UL, 0UL, 0UL}, {0UL, 0UL, 0UL, 0UL},
   {0UL, 5113912UL, 1881399759UL, 32768UL},
   {0UL, 9517124UL, 2288124424UL, 32768UL},
   {134217728UL, 9504836UL, 144835585UL, 4UL},
   {268435456UL, 17893444UL, 144835585UL, 8UL},
   {536870912UL, 17893384UL, 824428417UL, 16UL},
   {1073742816UL, 34670608UL, 169878593UL, 32UL},
   {536870912UL, 34670624UL, 200287298UL, 16UL},
   {268468224UL, 68225092UL, 2284069954UL, 8UL},
   {134250498UL, 68042364UL, 1886634882UL, 4UL},
   {65536UL, 134217728UL, 0UL, 0UL}, {0UL, 0UL, 0UL, 0UL}, {0UL, 0UL, 0UL, 0UL},
   {0UL, 0UL, 0UL, 0UL}, {57792UL, 0UL, 0UL, 0UL},
   {70176UL, 0UL, 1893961607UL, 0UL}, {536941088UL, 131104UL, 2299561032UL,
                                       32784UL},
   {268505632UL, 262160UL, 154223688UL, 32776UL},
   {134275617UL, 34094600UL, 290539400UL, 4UL},
   {67178976UL, 1048580UL, 559146056UL, 2UL},
   {134287392UL, 540168UL, 557458504UL, 32772UL},
   {268505152UL, 33816592UL, 16917576UL, 32776UL},
   {536929153UL, 33685536UL, 552042375UL, 16UL}, {0UL, 67108864UL, 0UL, 0UL},
   {0UL, 0UL, 0UL, 0UL}, {0UL, 0UL, 0UL, 0UL}, {0UL, 0UL, 0UL, 0UL},
   {0UL, 0UL, 0UL, 0UL}, {939780079UL, 3342581309UL, 3683007719UL, 28UL},
   {1140920868UL, 1217464328UL, 2432919112UL, 32802UL},
   {1275138693UL, 1217464328UL, 2701354568UL, 32806UL},
   {1409356679UL, 136251400UL, 3238176072UL, 32810UL},
   {1409356421UL, 160499720UL, 3775046984UL, 32810UL},
   {1308692996UL, 143722568UL, 2433918152UL, 32807UL},
   {1073812004UL, 143722568UL, 2299667656UL, 32800UL},
   {939780079UL, 121355825UL, 3489103431UL, 28UL}, {0UL, 0UL, 0UL, 0UL},
   {0UL, 0UL, 0UL, 0UL}, {0UL, 0UL, 0UL, 0UL}, {0UL, 0UL, 0UL, 0UL},
   {0UL, 0UL, 3UL, 0UL}, {254415UL, 2277505007UL, 3753867202UL, 0UL},
   {78372UL, 1218748996UL, 2299667522UL, 0UL},
   {70180UL, 1210360388UL, 2829141122UL, 0UL},
   {78375UL, 2382635628UL, 2822848770UL, 0UL},
   {123428UL, 2206474792UL, 2829091074UL, 0UL},
   {66084UL, 1082401320UL, 3634397762UL, 0UL},
   {66084UL, 1216624184UL, 1360036930UL, 0UL},
   {246222UL, 1864309776UL, 1404684226UL, 0UL}, {96UL, 0UL, 2UL, 0UL},
   {0UL, 0UL, 3UL, 0UL}, {4261412864UL, 0UL, 0UL, 127UL}, {0UL, 0UL, 0UL, 0UL},
   {65920UL, 192UL, 3146176UL, 0UL}, {134250625UL, 262208UL, 1049088UL, 4UL},
   {268468354UL, 2147745856UL, 1049088UL, 8UL},
   {268451972UL, 1073888376UL, 1894893511UL, 16392UL},
   {268451968UL, 580UL, 2299666952UL, 32776UL},
   {536879232UL, 7748UL, 2165563912UL, 32784UL},
   {268443776UL, 8772UL, 2165441032UL, 32776UL},
   {268439680UL, 8772UL, 2299666952UL, 32776UL},
   {268439680UL, 7608UL, 1894369159UL, 32776UL},
   {268437632UL, 0UL, 0UL, 32776UL}, {134218112UL, 0UL, 0UL, 32772UL},
   {0UL, 532676608UL, 7UL, 0UL}, {0UL, 0UL, 0UL, 0UL},
   {196736UL, 2551971840UL, 0UL, 0UL}, {536936448UL, 134479872UL, 0UL, 16UL},
   {268500992UL, 134479872UL, 0UL, 8UL},
   {268526471UL, 2307159224UL, 1927402951UL, 8UL},
   {268537984UL, 2315528804UL, 2299666952UL, 32776UL},
   {134287488UL, 2349083204UL, 2299666951UL, 4UL},
   {268505216UL, 2315528772UL, 2299666944UL, 32776UL},
   {268505216UL, 2298751556UL, 2299666952UL, 32776UL},
   {268680160UL, 2564811750UL, 1910630279UL, 8UL},
   {268435456UL, 2147483648UL, 16785408UL, 8UL},
   {536870912UL, 2147483648UL, 16785408UL, 16UL}, {7UL, 0UL, 58748928UL, 0UL},
   {0UL, 0UL, 0UL, 0UL}, {0UL, 0UL, 0UL, 0UL}, {32768UL, 0UL, 272695296UL, 0UL},
   {32768UL, 0UL, 541097984UL, 0UL}, {128622UL, 4261148540UL, 541097984UL, 0UL},
   {604013092UL, 1217012296UL, 541098560UL, 18UL},
   {1409319460UL, 1250173456UL, 1077953856UL, 42UL},
   {1207992866UL, 2324304928UL, 541099136UL, 36UL},
   {35363UL, 2232491076UL, 541097984UL, 0UL},
   {29137UL, 87132284UL, 541097984UL, 0UL}, {0UL, 2048UL, 541097984UL, 0UL},
   {0UL, 2048UL, 272695296UL, 0UL}, {0UL, 12288UL, 0UL, 0UL},
   {0UL, 0UL, 0UL, 0UL}, {0UL, 0UL, 0UL, 0UL}, {0UL, 0UL, 0UL, 0UL},
   {0UL, 0UL, 0UL, 0UL}, {0UL, 0UL, 0UL, 0UL}, {0UL, 0UL, 0UL, 0UL},
   {0UL, 0UL, 0UL, 0UL}, {0UL, 0UL, 0UL, 0UL}, {0UL, 0UL, 0UL, 0UL},
   {0UL, 0UL, 0UL, 0UL}, {0UL, 0UL, 0UL, 0UL}, {0UL, 0UL, 0UL, 0UL},
   {0UL, 0UL, 0UL, 0UL}, {0UL, 0UL, 0UL, 0UL},
   {0UL, 536873984UL, 268435456UL, 0UL},
   {3321929728UL, 1107298320UL, 2UL, 99UL},
   {1811980288UL, 1157629968UL, 2UL, 54UL},
   {1811980288UL, 2290092040UL, 4074888930UL, 54UL},
   {1409286144UL, 2147485696UL, 286401602UL, 42UL},
   {1409286145UL, 2048UL, 286401602UL, 42UL},
   {1409286145UL, 2048UL, 286401154UL, 42UL},
   {1140850946UL, 2048UL, 286401410UL, 34UL},
   {3992977666UL, 2048UL, 300015874UL, 119UL},
   {516UL, 2048UL, 285221122UL, 0UL}, {0UL, 3072UL, 285221122UL, 0UL},
   {0UL, 4161536UL, 3816846848UL, 0UL}};
# 181
bit **pbm_defaultfont(int *fcolsP , int *frowsP ) 
{ bit **defaultfont ;
  int row ;
  int col ;
  int scol ;
  unsigned long l ;
  int tmp___0 ;

  {
  {
# 190
  defaultfont = (bit **)pm_allocarray(112, 155, (int )sizeof(bit ));
# 191
  row = 0;
  }
# 191
  while (row < 155) {
    {
# 193
    col = 0;
    }
# 193
    while (col < 112) {
      {
# 195
      l = defaultfont_bits[row][col / 32];
      }
# 196
      if (col + 32 < 112) {
        {
# 196
        tmp___0 = col + 32;
        }
      } else {
        {
# 196
        tmp___0 = 112;
        }
      }
      {
# 196
      scol = tmp___0 - 1;
      }
# 196
      while (scol >= col) {
# 199
        if (l & 1UL) {
          {
# 200
          (*((*(defaultfont + row)) + scol)) = (unsigned char )1;
          }
        } else {
          {
# 202
          (*((*(defaultfont + row)) + scol)) = (unsigned char )0;
          }
        }
        {
# 203
        l >>= 1;
# 196
        scol --;
        }
      }
      {
# 193
      col += 32;
      }
    }
    {
# 191
    row ++;
    }
  }
  {
# 208
  (*fcolsP) = 112;
# 209
  (*frowsP) = 155;
  }
# 210
  return (defaultfont);
}
}
# 213
void pbm_dissectfont(bit **font , int frows , int fcols , int *char_heightP ,
                     int *char_widthP , int *char_aheightP , int *char_awidthP ,
                     int *char_row0 , int *char_col0 ) 
{ int brow ;
  int bcol ;
  int row ;
  int col ;
  int d ;
  int ch ;
  bit b ;

  {
  {
# 258
  brow = 0;
  }
# 258
  while (brow < frows / 6) {
    {
# 260
    b = (*((*(font + brow)) + 0));
# 261
    col = 1;
    }
# 261
    while (col < fcols) {
# 262
      if ((int )(*((*(font + brow)) + col)) != (int )b) {
        goto nextrow;
      }
      {
# 261
      col ++;
      }
    }
    goto gotblankrow;
    nextrow: 
    {
# 258
    brow ++;
    }
  }
  {
# 267
  pm_error("couldn\'t find blank row in font");
  }
  gotblankrow: 
  {
# 271
  bcol = 0;
  }
# 271
  while (bcol < fcols / 8) {
    {
# 273
    b = (*((*(font + 0)) + bcol));
# 274
    row = 1;
    }
# 274
    while (row < frows) {
# 275
      if ((int )(*((*(font + row)) + bcol)) != (int )b) {
        goto nextcol;
      }
      {
# 274
      row ++;
      }
    }
    goto gotblankcol;
    nextcol: 
    {
# 271
    bcol ++;
    }
  }
  {
# 280
  pm_error("couldn\'t find blank col in font");
  }
  gotblankcol: 
  {
# 284
  d = frows - brow;
# 285
  (*char_heightP) = d / 11;
  }
# 286
  if ((*char_heightP) * 11 != d) {
    {
# 287
    pm_error("problem computing character cell height");
    }
  }
  {
# 288
  d = fcols - bcol;
# 289
  (*char_widthP) = d / 15;
  }
# 290
  if ((*char_widthP) * 15 != d) {
    {
# 291
    pm_error("problem computing character cell width");
    }
  }
  {
# 292
  (*char_aheightP) = brow;
# 293
  (*char_awidthP) = bcol;
# 296
  row = (*char_heightP) * 2;
# 297
  col = (*char_widthP) * 2;
# 298
  ch = 0;
  }
# 298
  while (ch < 95) {
    {
# 300
    (*(char_row0 + ch)) = row;
# 301
    (*(char_col0 + ch)) = col;
# 302
    col += (*char_widthP);
    }
# 303
    if (col >= (*char_widthP) * 14) {
      {
# 305
      col = (*char_widthP) * 2;
# 306
      row += (*char_heightP);
      }
    }
    {
# 298
    ch ++;
    }
  }
# 309
  return;
}
}
# 311
void pbm_dumpfont(bit **font , int fcols , int frows ) 
{ int row ;
  int col ;
  int scol ;
  int lperrow ;
  unsigned long l ;
  int tmp ;
  char const   *tmp___0 ;

  {
  {
# 321
  printf((char const   */* __restrict  */)((char const   *)"#define DEFAULTFONT_ROWS %d\n"),
         frows);
# 322
  printf((char const   */* __restrict  */)((char const   *)"#define DEFAULTFONT_COLS %d\n"),
         fcols);
# 323
  printf((char const   */* __restrict  */)((char const   *)"static unsigned long defaultfont_bits[DEFAULTFONT_ROWS][(DEFAULTFONT_COLS+31)/32] = {\n"));
# 324
  row = 0;
  }
# 324
  while (row < frows) {
    {
# 326
    lperrow = 0;
# 327
    col = 0;
    }
# 327
    while (col < fcols) {
# 329
      if (lperrow == 0) {
        {
# 330
        printf((char const   */* __restrict  */)((char const   *)"    {"));
        }
      } else {
# 331
        if (lperrow % 6 == 0) {
          {
# 333
          printf((char const   */* __restrict  */)((char const   *)",\n     "));
# 334
          lperrow = 0;
          }
        } else {
          {
# 337
          printf((char const   */* __restrict  */)((char const   *)","));
          }
        }
      }
      {
# 338
      l = 0UL;
# 339
      scol = col;
      }
# 339
      while (1) {
# 339
        if (col + 32 < fcols) {
          {
# 339
          tmp = col + 32;
          }
        } else {
          {
# 339
          tmp = fcols;
          }
        }
# 339
        if (! (scol < tmp)) {
# 339
          break;
        }
        {
# 341
        l <<= 1;
        }
# 342
        if ((*((*(font + row)) + scol))) {
          {
# 343
          l |= 1UL;
          }
        }
        {
# 339
        scol ++;
        }
      }
      {
# 345
      printf((char const   */* __restrict  */)((char const   *)"0x%08lxL"), l);
# 346
      lperrow ++;
# 327
      col += 32;
      }
    }
# 348
    if (row == frows - 1) {
      {
# 348
      tmp___0 = (char const   *)"";
      }
    } else {
      {
# 348
      tmp___0 = (char const   *)",";
      }
    }
    {
# 348
    printf((char const   */* __restrict  */)((char const   *)"}%s\n"), tmp___0);
# 324
    row ++;
    }
  }
  {
# 350
  printf((char const   */* __restrict  */)((char const   *)"    };\n"));
  }
# 351
  return;
}
}
# 35 "pgm.h"
void pgm_init(int *argcP , char **argv ) ;
# 43
void pgm_readpgminit(FILE *file , int *colsP , int *rowsP , gray *maxvalP ,
                     int *formatP ) ;
# 44
void pgm_readpgmrow(FILE *file , gray *grayrow , int cols , gray maxval ,
                    int format ) ;
# 47
void pgm_writepgminit(FILE *file , int cols , int rows , gray maxval ,
                      int forceplain ) ;
# 48
void pgm_writepgmrow(FILE *file , gray *grayrow , int cols , gray maxval ,
                     int forceplain ) ;
# 50
unsigned char pgm_pbmmaxval ;
# 9 "libpgm.h"
void pgm_readpgminitrest(FILE *file , int *colsP , int *rowsP , gray *maxvalP ) ;
# 18 "libpgm1.c"
void pgm_init(int *argcP , char **argv ) 
{ 

  {
  {
# 23
  pbm_init(argcP, argv);
  }
# 24
  return;
}
}
# 26
void pgm_readpgminitrest(FILE *file , int *colsP , int *rowsP , gray *maxvalP ) 
{ int maxval ;

  {
  {
# 36
  (*colsP) = pbm_getint(file);
# 37
  (*rowsP) = pbm_getint(file);
# 40
  maxval = pbm_getint(file);
  }
# 41
  if (maxval > 255) {
    {
# 42
    pm_error("maxval is too large - try reconfiguring with PGM_BIGGRAYS");
    }
  }
  {
# 43
  (*maxvalP) = (unsigned char )maxval;
  }
# 44
  return;
}
}
# 46
unsigned char pgm_pbmmaxval   = (unsigned char )1;
# 48
void pgm_readpgminit(FILE *file , int *colsP , int *rowsP , gray *maxvalP ,
                     int *formatP ) 
{ int tmp___0 ;

  {
  {
# 57
  (*formatP) = pbm_readmagicnumber(file);
  }
# 58
  if ((*formatP) == 20530) {
    {
# 58
    tmp___0 = 20530;
    }
  } else {
# 58
    if ((*formatP) == 20533) {
      {
# 58
      tmp___0 = 20530;
      }
    } else {
# 58
      if ((*formatP) == 20529) {
        {
# 58
        tmp___0 = 20529;
        }
      } else {
# 58
        if ((*formatP) == 20532) {
          {
# 58
          tmp___0 = 20529;
          }
        } else {
          {
# 58
          tmp___0 = -1;
          }
        }
      }
    }
  }
# 58
  switch (tmp___0) {
  case 20530: 
  {
# 61
  pgm_readpgminitrest(file, colsP, rowsP, maxvalP);
  }
# 62
  break;
  case 20529: 
  {
# 65
  pbm_readpbminitrest(file, colsP, rowsP);
# 66
  (*maxvalP) = pgm_pbmmaxval;
  }
# 67
  break;
  default: 
  {
# 70
  pm_error("bad magic number - not a pgm or pbm file");
  }
  }
# 72
  return;
}
}
# 75
void pgm_readpgmrow(FILE *file , gray *grayrow , int cols , gray maxval ,
                    int format ) 
{ register int col ;
  register gray *gP ;
  bit *bitrow ;
  register bit *bP ;

  {
# 92
  switch (format) {
  case 20530: 
  {
# 95
  col = 0;
# 95
  gP = grayrow;
  }
# 95
  while (col < cols) {
    {
# 97
    (*gP) = (gray )pbm_getint(file);
# 95
    col ++;
# 95
    gP ++;
    }
  }
# 103
  break;
  case 20533: 
  {
# 106
  col = 0;
# 106
  gP = grayrow;
  }
# 106
  while (col < cols) {
    {
# 108
    (*gP) = pbm_getrawbyte(file);
# 106
    col ++;
# 106
    gP ++;
    }
  }
# 114
  break;
  case 20529: 
  {

  }
  case 20532: 
  {
# 118
  bitrow = (bit *)pm_allocrow(cols, (int )sizeof(bit ));
# 119
  pbm_readpbmrow(file, bitrow, cols, format);
# 120
  col = 0;
# 120
  gP = grayrow;
# 120
  bP = bitrow;
  }
# 120
  while (col < cols) {
# 121
    if ((int )(*bP) == 0) {
      {
# 121
      (*gP) = maxval;
      }
    } else {
      {
# 121
      (*gP) = (unsigned char )0;
      }
    }
    {
# 120
    col ++;
# 120
    gP ++;
# 120
    bP ++;
    }
  }
  {
# 122
  pm_freerow((void *)((char *)bitrow));
  }
# 123
  break;
  default: 
  {
# 126
  pm_error("can\'t happen");
  }
  }
# 128
  return;
}
}
# 130
gray **pgm_readpgm(FILE *file , int *colsP , int *rowsP , gray *maxvalP ) 
{ gray **grays ;
  int row ;
  int format ;

  {
  {
# 141
  pgm_readpgminit(file, colsP, rowsP, maxvalP, & format);
# 143
  grays = (gray **)pm_allocarray((*colsP), (*rowsP), (int )sizeof(gray ));
# 145
  row = 0;
  }
# 145
  while (row < (*rowsP)) {
    {
# 146
    pgm_readpgmrow(file, (*(grays + row)), (*colsP), (*maxvalP), format);
# 145
    row ++;
    }
  }
# 148
  return (grays);
}
}
# 17 "libpgm2.c"
void pgm_writepgminit(FILE *file , int cols , int rows , gray maxval ,
                      int forceplain ) 
{ 

  {
# 29
  if ((int )maxval <= 255) {
# 29
    if (forceplain) {
      {
# 34
      fprintf((FILE */* __restrict  */)file,
              (char const   */* __restrict  */)((char const   *)"%c%c\n%d %d\n%d\n"),
              'P', '2', cols, rows, maxval);
      }
    } else {
      {
# 30
      fprintf((FILE */* __restrict  */)file,
              (char const   */* __restrict  */)((char const   *)"%c%c\n%d %d\n%d\n"),
              'P', '5', cols, rows, maxval);
      }
    }
  } else {
    {
# 34
    fprintf((FILE */* __restrict  */)file,
            (char const   */* __restrict  */)((char const   *)"%c%c\n%d %d\n%d\n"),
            'P', '2', cols, rows, maxval);
    }
  }
# 42
  return;
}
}
# 44
static void putus(unsigned short n , FILE *file ) 
{ 

  {
# 49
  if ((int )n >= 10) {
    {
# 50
    putus((unsigned short )((int )n / 10), file);
    }
  }
  {
# 51
  _IO_putc((int )n % 10 + 48, file);
  }
# 52
  return;
}
}
# 55
static void pgm_writepgmrowraw(FILE *file , gray *grayrow , int cols ,
                               gray maxval ) 
{ register int col ;
  register gray *gP ;

  {
  {
# 65
  col = 0;
# 65
  gP = grayrow;
  }
# 65
  while (col < cols) {
    {
# 71
    _IO_putc((int )(*gP), file);
# 65
    col ++;
# 65
    gP ++;
    }
  }
# 73
  return;
}
}
# 76
static void pgm_writepgmrowplain(FILE *file , gray *grayrow , int cols ,
                                 gray maxval ) 
{ register int col ;
  register int charcount ;
  register gray *gP ;

  {
  {
# 86
  charcount = 0;
# 87
  col = 0;
# 87
  gP = grayrow;
  }
# 87
  while (col < cols) {
# 89
    if (charcount >= 65) {
      {
# 91
      _IO_putc((int )'\n', file);
# 92
      charcount = 0;
      }
    } else {
# 94
      if (charcount > 0) {
        {
# 96
        _IO_putc((int )' ', file);
# 97
        charcount ++;
        }
      }
    }
    {
# 103
    putus((unsigned short )((unsigned long )(*gP)), file);
# 104
    charcount += 3;
# 87
    col ++;
# 87
    gP ++;
    }
  }
# 106
  if (charcount > 0) {
    {
# 107
    _IO_putc((int )'\n', file);
    }
  }
# 108
  return;
}
}
# 111
void pgm_writepgmrow(FILE *file , gray *grayrow , int cols , gray maxval ,
                     int forceplain ) 
{ 

  {
# 124
  if ((int )maxval <= 255) {
# 124
    if (forceplain) {
      {
# 127
      pgm_writepgmrowplain(file, grayrow, cols, maxval);
      }
    } else {
      {
# 125
      pgm_writepgmrowraw(file, grayrow, cols, maxval);
      }
    }
  } else {
    {
# 127
    pgm_writepgmrowplain(file, grayrow, cols, maxval);
    }
  }
# 131
  return;
}
}
# 134
void pgm_writepgm(FILE *file , gray **grays , int cols , int rows ,
                  gray maxval , int forceplain ) 
{ int row ;

  {
  {
# 148
  pgm_writepgminit(file, cols, rows, maxval, forceplain);
# 150
  row = 0;
  }
# 150
  while (row < rows) {
    {
# 151
    pgm_writepgmrow(file, (*(grays + row)), cols, maxval, forceplain);
# 150
    row ++;
    }
  }
# 152
  return;
}
}
# 61 "ppm.h"
pixel **ppm_readppm(FILE *file , int *colsP , int *rowsP , pixval *maxvalP ) ;
# 62
void ppm_readppminit(FILE *file , int *colsP , int *rowsP , pixval *maxvalP ,
                     int *formatP ) ;
# 63
void ppm_readppmrow(FILE *file , pixel *pixelrow , int cols , pixval maxval ,
                    int format ) ;
# 65
void ppm_writeppm(FILE *file , pixel **pixels , int cols , int rows ,
                  pixval maxval , int forceplain ) ;
# 66
void ppm_writeppminit(FILE *file , int cols , int rows , pixval maxval ,
                      int forceplain ) ;
# 67
void ppm_writeppmrow(FILE *file , pixel *pixelrow , int cols , pixval maxval ,
                     int forceplain ) ;
# 72
unsigned char ppm_pbmmaxval ;
# 9 "libppm.h"
void ppm_readppminitrest(FILE *file , int *colsP , int *rowsP , pixval *maxvalP ) ;
# 20 "libppm1.c"
void ppm_init(int *argcP , char **argv ) 
{ 

  {
  {
# 25
  pgm_init(argcP, argv);
  }
# 26
  return;
}
}
# 28
void ppm_readppminitrest(FILE *file , int *colsP , int *rowsP , pixval *maxvalP ) 
{ int maxval ;

  {
  {
# 38
  (*colsP) = pbm_getint(file);
# 39
  (*rowsP) = pbm_getint(file);
# 42
  maxval = pbm_getint(file);
  }
# 43
  if (maxval > 255) {
    {
# 44
    pm_error("maxval is too large - try reconfiguring with PGM_BIGGRAYS\n    or without PPM_PACKCOLORS");
    }
  }
  {
# 46
  (*maxvalP) = (unsigned char )maxval;
  }
# 47
  return;
}
}
# 49
unsigned char ppm_pbmmaxval   = (unsigned char )1;
# 51
void ppm_readppminit(FILE *file , int *colsP , int *rowsP , pixval *maxvalP ,
                     int *formatP ) 
{ int tmp___1 ;

  {
  {
# 60
  (*formatP) = pbm_readmagicnumber(file);
  }
# 61
  if ((*formatP) == 20531) {
    {
# 61
    tmp___1 = 20531;
    }
  } else {
# 61
    if ((*formatP) == 20534) {
      {
# 61
      tmp___1 = 20531;
      }
    } else {
# 61
      if ((*formatP) == 20530) {
        {
# 61
        tmp___1 = 20530;
        }
      } else {
# 61
        if ((*formatP) == 20533) {
          {
# 61
          tmp___1 = 20530;
          }
        } else {
# 61
          if ((*formatP) == 20529) {
            {
# 61
            tmp___1 = 20529;
            }
          } else {
# 61
            if ((*formatP) == 20532) {
              {
# 61
              tmp___1 = 20529;
              }
            } else {
              {
# 61
              tmp___1 = -1;
              }
            }
          }
        }
      }
    }
  }
# 61
  switch (tmp___1) {
  case 20531: 
  {
# 64
  ppm_readppminitrest(file, colsP, rowsP, maxvalP);
  }
# 65
  break;
  case 20530: 
  {
# 68
  pgm_readpgminitrest(file, colsP, rowsP, maxvalP);
  }
# 69
  break;
  case 20529: 
  {
# 72
  pbm_readpbminitrest(file, colsP, rowsP);
# 73
  (*maxvalP) = ppm_pbmmaxval;
  }
# 74
  break;
  default: 
  {
# 77
  pm_error("bad magic number - not a ppm, pgm, or pbm file");
  }
  }
# 79
  return;
}
}
# 82
void ppm_readppmrow(FILE *file , pixel *pixelrow , int cols , pixval maxval ,
                    int format ) 
{ register int col ;
  register pixel *pP ;
  register pixval r ;
  register pixval g ;
  register pixval b ;
  gray *grayrow ;
  register gray *gP ;
  bit *bitrow ;
  register bit *bP ;

  {
# 101
  switch (format) {
  case 20531: 
  {
# 104
  col = 0;
# 104
  pP = pixelrow;
  }
# 104
  while (col < cols) {
    {
# 106
    r = (pixval )pbm_getint(file);
# 111
    g = (pixval )pbm_getint(file);
# 116
    b = (pixval )pbm_getint(file);
    }
# 121
    while (1) {
      {
# 121
      pP->r = r;
# 121
      pP->g = g;
# 121
      pP->b = b;
      }
# 121
      break;
    }
    {
# 104
    col ++;
# 104
    pP ++;
    }
  }
# 123
  break;
  case 20534: 
  {
# 126
  col = 0;
# 126
  pP = pixelrow;
  }
# 126
  while (col < cols) {
    {
# 128
    r = pbm_getrawbyte(file);
# 133
    g = pbm_getrawbyte(file);
# 138
    b = pbm_getrawbyte(file);
    }
# 143
    while (1) {
      {
# 143
      pP->r = r;
# 143
      pP->g = g;
# 143
      pP->b = b;
      }
# 143
      break;
    }
    {
# 126
    col ++;
# 126
    pP ++;
    }
  }
# 145
  break;
  case 20530: 
  {

  }
  case 20533: 
  {
# 149
  grayrow = (gray *)pm_allocrow(cols, (int )sizeof(gray ));
# 150
  pgm_readpgmrow(file, grayrow, cols, maxval, format);
# 151
  col = 0;
# 151
  gP = grayrow;
# 151
  pP = pixelrow;
  }
# 151
  while (col < cols) {
    {
# 153
    r = (*gP);
    }
# 154
    while (1) {
      {
# 154
      pP->r = r;
# 154
      pP->g = r;
# 154
      pP->b = r;
      }
# 154
      break;
    }
    {
# 151
    col ++;
# 151
    gP ++;
# 151
    pP ++;
    }
  }
  {
# 156
  pm_freerow((void *)((char *)grayrow));
  }
# 157
  break;
  case 20529: 
  {

  }
  case 20532: 
  {
# 161
  bitrow = (bit *)pm_allocrow(cols, (int )sizeof(bit ));
# 162
  pbm_readpbmrow(file, bitrow, cols, format);
# 163
  col = 0;
# 163
  bP = bitrow;
# 163
  pP = pixelrow;
  }
# 163
  while (col < cols) {
# 165
    if ((int )(*bP) == 0) {
      {
# 165
      r = maxval;
      }
    } else {
      {
# 165
      r = (unsigned char )0;
      }
    }
# 166
    while (1) {
      {
# 166
      pP->r = r;
# 166
      pP->g = r;
# 166
      pP->b = r;
      }
# 166
      break;
    }
    {
# 163
    col ++;
# 163
    bP ++;
# 163
    pP ++;
    }
  }
  {
# 168
  pm_freerow((void *)((char *)bitrow));
  }
# 169
  break;
  default: 
  {
# 172
  pm_error("can\'t happen");
  }
  }
# 174
  return;
}
}
# 176
pixel **ppm_readppm(FILE *file , int *colsP , int *rowsP , pixval *maxvalP ) 
{ pixel **pixels ;
  int row ;
  int format ;

  {
  {
# 187
  ppm_readppminit(file, colsP, rowsP, maxvalP, & format);
# 189
  pixels = (pixel **)pm_allocarray((*colsP), (*rowsP), (int )sizeof(pixel ));
# 191
  row = 0;
  }
# 191
  while (row < (*rowsP)) {
    {
# 192
    ppm_readppmrow(file, (*(pixels + row)), (*colsP), (*maxvalP), format);
# 191
    row ++;
    }
  }
# 194
  return (pixels);
}
}
# 17 "libppm2.c"
void ppm_writeppminit(FILE *file , int cols , int rows , pixval maxval ,
                      int forceplain ) 
{ 

  {
# 29
  if ((int )maxval <= 255) {
# 29
    if (forceplain) {
      {
# 34
      fprintf((FILE */* __restrict  */)file,
              (char const   */* __restrict  */)((char const   *)"%c%c\n%d %d\n%d\n"),
              'P', '3', cols, rows, maxval);
      }
    } else {
      {
# 30
      fprintf((FILE */* __restrict  */)file,
              (char const   */* __restrict  */)((char const   *)"%c%c\n%d %d\n%d\n"),
              'P', '6', cols, rows, maxval);
      }
    }
  } else {
    {
# 34
    fprintf((FILE */* __restrict  */)file,
            (char const   */* __restrict  */)((char const   *)"%c%c\n%d %d\n%d\n"),
            'P', '3', cols, rows, maxval);
    }
  }
# 42
  return;
}
}
# 44
static void putus___0(unsigned short n , FILE *file ) 
{ 

  {
# 49
  if ((int )n >= 10) {
    {
# 50
    putus___0((unsigned short )((int )n / 10), file);
    }
  }
  {
# 51
  _IO_putc((int )n % 10 + 48, file);
  }
# 52
  return;
}
}
# 55
static void ppm_writeppmrowraw(FILE *file , pixel *pixelrow , int cols ,
                               pixval maxval ) 
{ register int col ;
  register pixel *pP ;
  register pixval val ;

  {
  {
# 66
  col = 0;
# 66
  pP = pixelrow;
  }
# 66
  while (col < cols) {
    {
# 68
    val = pP->r;
# 73
    _IO_putc((int )val, file);
# 74
    val = pP->g;
# 79
    _IO_putc((int )val, file);
# 80
    val = pP->b;
# 85
    _IO_putc((int )val, file);
# 66
    col ++;
# 66
    pP ++;
    }
  }
# 87
  return;
}
}
# 90
static void ppm_writeppmrowplain(FILE *file , pixel *pixelrow , int cols ,
                                 pixval maxval ) 
{ register int col ;
  register int charcount ;
  register pixel *pP ;
  register pixval val ;

  {
  {
# 101
  charcount = 0;
# 102
  col = 0;
# 102
  pP = pixelrow;
  }
# 102
  while (col < cols) {
# 104
    if (charcount >= 65) {
      {
# 106
      _IO_putc((int )'\n', file);
# 107
      charcount = 0;
      }
    } else {
# 109
      if (charcount > 0) {
        {
# 111
        _IO_putc((int )' ', file);
# 112
        _IO_putc((int )' ', file);
# 113
        charcount += 2;
        }
      }
    }
    {
# 115
    val = pP->r;
# 120
    putus___0((unsigned short )val, file);
# 121
    _IO_putc((int )' ', file);
# 122
    val = pP->g;
# 127
    putus___0((unsigned short )val, file);
# 128
    _IO_putc((int )' ', file);
# 129
    val = pP->b;
# 134
    putus___0((unsigned short )val, file);
# 135
    charcount += 11;
# 102
    col ++;
# 102
    pP ++;
    }
  }
# 137
  if (charcount > 0) {
    {
# 138
    _IO_putc((int )'\n', file);
    }
  }
# 139
  return;
}
}
# 142
void ppm_writeppmrow(FILE *file , pixel *pixelrow , int cols , pixval maxval ,
                     int forceplain ) 
{ 

  {
# 155
  if ((int )maxval <= 255) {
# 155
    if (forceplain) {
      {
# 158
      ppm_writeppmrowplain(file, pixelrow, cols, maxval);
      }
    } else {
      {
# 156
      ppm_writeppmrowraw(file, pixelrow, cols, maxval);
      }
    }
  } else {
    {
# 158
    ppm_writeppmrowplain(file, pixelrow, cols, maxval);
    }
  }
# 162
  return;
}
}
# 165
void ppm_writeppm(FILE *file , pixel **pixels , int cols , int rows ,
                  pixval maxval , int forceplain ) 
{ int row ;

  {
  {
# 179
  ppm_writeppminit(file, cols, rows, maxval, forceplain);
# 181
  row = 0;
  }
# 181
  while (row < rows) {
    {
# 182
    ppm_writeppmrow(file, (*(pixels + row)), cols, maxval, forceplain);
# 181
    row ++;
    }
  }
# 183
  return;
}
}
# 32 "ppmcmap.h"
colorhash_table ppm_computecolorhash(pixel **pixels , int cols , int rows ,
                                     int maxcolors , int *colorsP ) ;
# 37
colorhist_vector ppm_colorhashtocolorhist(colorhash_table cht , int maxcolors ) ;
# 43
colorhash_table ppm_alloccolorhash(void) ;
# 45
void ppm_freecolorhash(colorhash_table cht ) ;
# 27 "libppm3.c"
colorhist_vector ppm_computecolorhist(pixel **pixels , int cols , int rows ,
                                      int maxcolors , int *colorsP ) 
{ colorhash_table cht ;
  colorhist_vector chv ;

  {
  {
# 36
  cht = ppm_computecolorhash(pixels, cols, rows, maxcolors, colorsP);
  }
# 37
  if ((unsigned int )cht == (unsigned int )((colorhist_list *)0)) {
# 38
    return ((struct colorhist_item *)0);
  }
  {
# 39
  chv = ppm_colorhashtocolorhist(cht, maxcolors);
# 40
  ppm_freecolorhash(cht);
  }
# 41
  return (chv);
}
}
# 44
void ppm_addtocolorhist(colorhist_vector chv , int *colorsP , int maxcolors ,
                        pixel *colorP , int value , int position ) 
{ int i ;
  int j ;

  {
  {
# 54
  i = 0;
  }
# 54
  while (i < (*colorsP)) {
# 55
    if ((int )(chv + i)->color.r == (int )colorP->r) {
# 55
      if ((int )(chv + i)->color.g == (int )colorP->g) {
# 55
        if ((int )(chv + i)->color.b == (int )colorP->b) {
# 58
          if (position > i) {
            {
# 60
            j = i;
            }
# 60
            while (j < position) {
              {
# 61
              (*(chv + j)) = (*(chv + (j + 1)));
# 60
              j ++;
              }
            }
          } else {
# 63
            if (position < i) {
              {
# 65
              j = i;
              }
# 65
              while (j > position) {
                {
# 66
                (*(chv + j)) = (*(chv + (j - 1)));
# 65
                j --;
                }
              }
            }
          }
          {
# 68
          (chv + position)->color = (*colorP);
# 69
          (chv + position)->value = value;
          }
# 70
          return;
        }
      }
    }
    {
# 54
    i ++;
    }
  }
# 72
  if ((*colorsP) < maxcolors) {
    {
# 75
    i = (*colorsP);
    }
# 75
    while (i > position) {
      {
# 76
      (*(chv + i)) = (*(chv + (i - 1)));
# 75
      i --;
      }
    }
    {
# 77
    (chv + position)->color = (*colorP);
# 78
    (chv + position)->value = value;
# 79
    (*colorsP) ++;
    }
  }
# 81
  return;
}
}
# 83
colorhash_table ppm_computecolorhash(pixel **pixels , int cols , int rows ,
                                     int maxcolors , int *colorsP ) 
{ colorhash_table cht ;
  register pixel *pP ;
  colorhist_list chl ;
  int col ;
  int row ;
  int hash ;

  {
  {
# 94
  cht = ppm_alloccolorhash();
# 95
  (*colorsP) = 0;
# 98
  row = 0;
  }
# 98
  while (row < rows) {
    {
# 99
    col = 0;
# 99
    pP = (*(pixels + row));
    }
# 99
    while (col < cols) {
      {
# 101
      hash = (int )(((((long )pP->r * 33023L + (long )pP->g * 30013L) +
                      (long )pP->b * 27011L) & 2147483647L) % 20023L);
# 102
      chl = (*(cht + hash));
      }
# 102
      while ((unsigned int )chl !=
             (unsigned int )((struct colorhist_list_item *)0)) {
# 103
        if ((int )chl->ch.color.r == (int )pP->r) {
# 103
          if ((int )chl->ch.color.g == (int )pP->g) {
# 103
            if ((int )chl->ch.color.b == (int )pP->b) {
# 104
              break;
            }
          }
        }
        {
# 102
        chl = chl->next;
        }
      }
# 105
      if ((unsigned int )chl != (unsigned int )((struct colorhist_list_item *)0)) {
        {
# 106
        chl->ch.value ++;
        }
      } else {
        {
# 109
        (*colorsP) ++;
        }
# 109
        if ((*colorsP) > maxcolors) {
          {
# 111
          ppm_freecolorhash(cht);
          }
# 112
          return ((colorhist_list *)0);
        }
        {
# 115
        chl = (colorhist_list )malloc(sizeof((*chl)));
        }
# 116
        if ((unsigned int )chl ==
            (unsigned int )((struct colorhist_list_item *)0)) {
          {
# 117
          pm_error("out of memory computing hash table");
          }
        }
        {
# 118
        chl->ch.color = (*pP);
# 119
        chl->ch.value = 1;
# 120
        chl->next = (*(cht + hash));
# 121
        (*(cht + hash)) = chl;
        }
      }
      {
# 99
      col ++;
# 99
      pP ++;
      }
    }
    {
# 98
    row ++;
    }
  }
# 125
  return (cht);
}
}
# 128
colorhash_table ppm_alloccolorhash(void) 
{ colorhash_table cht ;
  int i ;

  {
  {
# 135
  cht = (colorhash_table )malloc(20023U * sizeof((*cht)));
  }
# 136
  if ((unsigned int )cht == (unsigned int )((colorhist_list *)0)) {
    {
# 137
    pm_error("out of memory allocating hash table");
    }
  }
  {
# 139
  i = 0;
  }
# 139
  while (i < 20023) {
    {
# 140
    (*(cht + i)) = (struct colorhist_list_item *)0;
# 139
    i ++;
    }
  }
# 142
  return (cht);
}
}
# 145
int ppm_addtocolorhash(colorhash_table cht , pixel *colorP , int value ) 
{ register int hash ;
  register colorhist_list chl ;

  {
  {
# 155
  chl = (colorhist_list )malloc(sizeof((*chl)));
  }
# 156
  if ((unsigned int )chl == (unsigned int )((struct colorhist_list_item *)0)) {
# 157
    return (-1);
  }
  {
# 158
  hash = (int )(((((long )colorP->r * 33023L + (long )colorP->g * 30013L) +
                  (long )colorP->b * 27011L) & 2147483647L) % 20023L);
# 159
  chl->ch.color = (*colorP);
# 160
  chl->ch.value = value;
# 161
  chl->next = (*(cht + hash));
# 162
  (*(cht + hash)) = chl;
  }
# 163
  return (0);
}
}
# 166
colorhist_vector ppm_colorhashtocolorhist(colorhash_table cht , int maxcolors ) 
{ colorhist_vector chv ;
  colorhist_list chl ;
  int i ;
  int j ;

  {
  {
# 177
  chv = (colorhist_vector )malloc((unsigned int )maxcolors * sizeof((*chv)));
  }
# 179
  if ((unsigned int )chv == (unsigned int )((struct colorhist_item *)0)) {
    {
# 180
    pm_error("out of memory generating histogram");
    }
  }
  {
# 183
  j = 0;
# 184
  i = 0;
  }
# 184
  while (i < 20023) {
    {
# 185
    chl = (*(cht + i));
    }
# 185
    while ((unsigned int )chl !=
           (unsigned int )((struct colorhist_list_item *)0)) {
      {
# 188
      (*(chv + j)) = chl->ch;
# 189
      j ++;
# 185
      chl = chl->next;
      }
    }
    {
# 184
    i ++;
    }
  }
# 193
  return (chv);
}
}
# 196
colorhash_table ppm_colorhisttocolorhash(colorhist_vector chv , int colors ) 
{ colorhash_table cht ;
  int i ;
  int hash ;
  pixel color ;
  colorhist_list chl ;

  {
  {
# 206
  cht = ppm_alloccolorhash();
# 208
  i = 0;
  }
# 208
  while (i < colors) {
    {
# 210
    color = (chv + i)->color;
# 211
    hash = (int )(((((long )color.r * 33023L + (long )color.g * 30013L) +
                    (long )color.b * 27011L) & 2147483647L) % 20023L);
# 212
    chl = (*(cht + hash));
    }
# 212
    while ((unsigned int )chl !=
           (unsigned int )((struct colorhist_list_item *)0)) {
# 213
      if ((int )chl->ch.color.r == (int )color.r) {
# 213
        if ((int )chl->ch.color.g == (int )color.g) {
# 213
          if ((int )chl->ch.color.b == (int )color.b) {
            {
# 214
            pm_error("same color found twice - %d %d %d", color.r, color.g,
                     color.b);
            }
          }
        }
      }
      {
# 212
      chl = chl->next;
      }
    }
    {
# 218
    chl = (colorhist_list )malloc(sizeof((*chl)));
    }
# 219
    if ((unsigned int )chl == (unsigned int )((struct colorhist_list_item *)0)) {
      {
# 220
      pm_error("out of memory");
      }
    }
    {
# 221
    chl->ch.color = color;
# 222
    chl->ch.value = i;
# 223
    chl->next = (*(cht + hash));
# 224
    (*(cht + hash)) = chl;
# 208
    i ++;
    }
  }
# 227
  return (cht);
}
}
# 230
int ppm_lookupcolor(colorhash_table cht , pixel *colorP ) 
{ int hash ;
  colorhist_list chl ;

  {
  {
# 238
  hash = (int )(((((long )colorP->r * 33023L + (long )colorP->g * 30013L) +
                  (long )colorP->b * 27011L) & 2147483647L) % 20023L);
# 239
  chl = (*(cht + hash));
  }
# 239
  while ((unsigned int )chl != (unsigned int )((struct colorhist_list_item *)0)) {
# 240
    if ((int )chl->ch.color.r == (int )colorP->r) {
# 240
      if ((int )chl->ch.color.g == (int )colorP->g) {
# 240
        if ((int )chl->ch.color.b == (int )colorP->b) {
# 241
          return (chl->ch.value);
        }
      }
    }
    {
# 239
    chl = chl->next;
    }
  }
# 243
  return (-1);
}
}
# 246
void ppm_freecolorhist(colorhist_vector chv ) 
{ 

  {
  {
# 250
  free((void *)((char *)chv));
  }
# 251
  return;
}
}
# 253
void ppm_freecolorhash(colorhash_table cht ) 
{ int i ;
  colorhist_list chl ;
  colorhist_list chlnext ;

  {
  {
# 260
  i = 0;
  }
# 260
  while (i < 20023) {
    {
# 261
    chl = (*(cht + i));
    }
# 261
    while ((unsigned int )chl !=
           (unsigned int )((struct colorhist_list_item *)0)) {
      {
# 263
      chlnext = chl->next;
# 264
      free((void *)chl);
# 261
      chl = chlnext;
      }
    }
    {
# 260
    i ++;
    }
  }
  {
# 266
  free((void *)cht);
  }
# 267
  return;
}
}
# 32 "libppm4.c"
static long rgbnorm(long rgb , long lmaxval , int n , char *colorname___0 ) 
{ 

  {
# 38
  switch (n) {
  case 1: 
  {

  }
# 41
  if (lmaxval != 15L) {
    {
# 42
    rgb = (rgb * lmaxval) / 15L;
    }
  }
# 43
  break;
  case 2: 
  {

  }
# 45
  if (lmaxval != 255L) {
    {
# 46
    rgb = (rgb * lmaxval) / 255L;
    }
  }
# 47
  break;
  case 3: 
  {

  }
# 49
  if (lmaxval != 4095L) {
    {
# 50
    rgb = (rgb * lmaxval) / 4095L;
    }
  }
# 51
  break;
  case 4: 
  {

  }
# 53
  if (lmaxval != 65535L) {
    {
# 54
    rgb = (rgb * lmaxval) / 65535L;
    }
  }
# 55
  break;
  default: 
  {
# 57
  pm_error("invalid color specifier - \"%s\"", colorname___0);
  }
  }
# 59
  return (rgb);
}
}
# 63
pixel ppm_parsecolor(char *colorname___0 , pixval maxval ) 
{ int hexit[256] ;
  int i ;
  pixel p ;
  long lmaxval ;
  long r ;
  long g ;
  long b ;
  char *inval ;
  char *cp ;
  float fr ;
  float fg ;
  float fb ;
  int tmp ;
  int tmp___0 ;
  float fr___0 ;
  float fg___0 ;
  float fb___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;

  {
  {
# 75
  inval = "invalid color specifier - \"%s\"";
# 77
  i = 0;
  }
# 77
  while (i < 256) {
    {
# 78
    hexit[i] = 1234567890;
# 77
    i ++;
    }
  }
  {
# 79
  hexit['0'] = 0;
# 80
  hexit['1'] = 1;
# 81
  hexit['2'] = 2;
# 82
  hexit['3'] = 3;
# 83
  hexit['4'] = 4;
# 84
  hexit['5'] = 5;
# 85
  hexit['6'] = 6;
# 86
  hexit['7'] = 7;
# 87
  hexit['8'] = 8;
# 88
  hexit['9'] = 9;
# 89
  hexit['A'] = 10;
# 89
  hexit['a'] = hexit['A'];
# 90
  hexit['B'] = 11;
# 90
  hexit['b'] = hexit['B'];
# 91
  hexit['C'] = 12;
# 91
  hexit['c'] = hexit['C'];
# 92
  hexit['D'] = 13;
# 92
  hexit['d'] = hexit['D'];
# 93
  hexit['E'] = 14;
# 93
  hexit['e'] = hexit['E'];
# 94
  hexit['F'] = 15;
# 94
  hexit['f'] = hexit['F'];
# 96
  lmaxval = (long )maxval;
# 97
  tmp___3 = strncmp((char const   *)colorname___0, (char const   *)"rgb:", 4U);
  }
# 97
  if (tmp___3 == 0) {
    {
# 102
    cp = colorname___0 + 4;
# 103
    b = 0L;
# 103
    g = b;
# 103
    r = g;
# 104
    i = 0;
    }
# 104
    while ((int )(*cp) != 47) {
      {
# 105
      r = r * 16L + (long )hexit[(*cp)];
# 104
      i ++;
# 104
      cp ++;
      }
    }
    {
# 106
    r = rgbnorm(r, lmaxval, i, colorname___0);
# 107
    i = 0;
# 107
    cp ++;
    }
# 107
    while ((int )(*cp) != 47) {
      {
# 108
      g = g * 16L + (long )hexit[(*cp)];
# 107
      i ++;
# 107
      cp ++;
      }
    }
    {
# 109
    g = rgbnorm(g, lmaxval, i, colorname___0);
# 110
    i = 0;
# 110
    cp ++;
    }
# 110
    while ((int )(*cp) != 0) {
      {
# 111
      b = b * 16L + (long )hexit[(*cp)];
# 110
      i ++;
# 110
      cp ++;
      }
    }
    {
# 112
    b = rgbnorm(b, lmaxval, i, colorname___0);
    }
# 113
    if (r < 0L) {
      {
# 114
      pm_error(inval, colorname___0);
      }
    } else {
# 113
      if (r > lmaxval) {
        {
# 114
        pm_error(inval, colorname___0);
        }
      } else {
# 113
        if (g < 0L) {
          {
# 114
          pm_error(inval, colorname___0);
          }
        } else {
# 113
          if (g > lmaxval) {
            {
# 114
            pm_error(inval, colorname___0);
            }
          } else {
# 113
            if (b < 0L) {
              {
# 114
              pm_error(inval, colorname___0);
              }
            } else {
# 113
              if (b > lmaxval) {
                {
# 114
                pm_error(inval, colorname___0);
                }
              }
            }
          }
        }
      }
    }
  } else {
    {
# 116
    tmp___2 = strncmp((char const   *)colorname___0, (char const   *)"rgbi:", 5U);
    }
# 116
    if (tmp___2 == 0) {
      {
# 120
      resetSScanfCount((char const   *)colorname___0);
# 120
      fr = (float )ccured_fscanf_double___0(ccured_sscanf_file, "rgbi:%f");
# 120
      fg = (float )ccured_fscanf_double___0(ccured_sscanf_file, "/%f");
# 120
      fb = (float )ccured_fscanf_double___0(ccured_sscanf_file, "/%f");
# 120
      tmp = getScanfCount();
      }
# 120
      if (tmp != 3) {
        {
# 131
        pm_error(inval, colorname___0);
        }
      }
# 133
      if ((double )fr < 0.0) {
        {
# 134
        pm_error("invalid color specifier - \"%s\" - values must be between 0.0 and 1.0",
                 colorname___0);
        }
      } else {
# 133
        if ((double )fr > 1.0) {
          {
# 134
          pm_error("invalid color specifier - \"%s\" - values must be between 0.0 and 1.0",
                   colorname___0);
          }
        } else {
# 133
          if ((double )fg < 0.0) {
            {
# 134
            pm_error("invalid color specifier - \"%s\" - values must be between 0.0 and 1.0",
                     colorname___0);
            }
          } else {
# 133
            if ((double )fg > 1.0) {
              {
# 134
              pm_error("invalid color specifier - \"%s\" - values must be between 0.0 and 1.0",
                       colorname___0);
              }
            } else {
# 133
              if ((double )fb < 0.0) {
                {
# 134
                pm_error("invalid color specifier - \"%s\" - values must be between 0.0 and 1.0",
                         colorname___0);
                }
              } else {
# 133
                if ((double )fb > 1.0) {
                  {
# 134
                  pm_error("invalid color specifier - \"%s\" - values must be between 0.0 and 1.0",
                           colorname___0);
                  }
                }
              }
            }
          }
        }
      }
      {
# 135
      r = (long )(fr * (float )lmaxval);
# 136
      g = (long )(fg * (float )lmaxval);
# 137
      b = (long )(fb * (float )lmaxval);
      }
    } else {
# 139
      if ((int )(*(colorname___0 + 0)) == 35) {
        {
# 142
        tmp___0 = (int )strlen((char const   *)colorname___0);
        }
# 142
        switch (tmp___0) {
        case 4: 
        {
# 145
        r = (long )hexit[(*(colorname___0 + 1))];
# 146
        g = (long )hexit[(*(colorname___0 + 2))];
# 147
        b = (long )hexit[(*(colorname___0 + 3))];
# 148
        r = rgbnorm(r, lmaxval, 1, colorname___0);
# 149
        g = rgbnorm(g, lmaxval, 1, colorname___0);
# 150
        b = rgbnorm(b, lmaxval, 1, colorname___0);
        }
# 151
        break;
        case 7: 
        {
# 154
        r = (long )((hexit[(*(colorname___0 + 1))] << 4) +
                    hexit[(*(colorname___0 + 2))]);
# 155
        g = (long )((hexit[(*(colorname___0 + 3))] << 4) +
                    hexit[(*(colorname___0 + 4))]);
# 156
        b = (long )((hexit[(*(colorname___0 + 5))] << 4) +
                    hexit[(*(colorname___0 + 6))]);
# 157
        r = rgbnorm(r, lmaxval, 2, colorname___0);
# 158
        g = rgbnorm(g, lmaxval, 2, colorname___0);
# 159
        b = rgbnorm(b, lmaxval, 2, colorname___0);
        }
# 160
        break;
        case 10: 
        {
# 163
        r = (long )(((hexit[(*(colorname___0 + 1))] << 8) +
                     (hexit[(*(colorname___0 + 2))] << 4)) +
                    hexit[(*(colorname___0 + 3))]);
# 165
        g = (long )(((hexit[(*(colorname___0 + 4))] << 8) +
                     (hexit[(*(colorname___0 + 5))] << 4)) +
                    hexit[(*(colorname___0 + 6))]);
# 167
        b = (long )(((hexit[(*(colorname___0 + 7))] << 8) +
                     (hexit[(*(colorname___0 + 8))] << 4)) +
                    hexit[(*(colorname___0 + 9))]);
# 169
        r = rgbnorm(r, lmaxval, 3, colorname___0);
# 170
        g = rgbnorm(g, lmaxval, 3, colorname___0);
# 171
        b = rgbnorm(b, lmaxval, 3, colorname___0);
        }
# 172
        break;
        case 13: 
        {
# 175
        r = (long )((((hexit[(*(colorname___0 + 1))] << 12) +
                      (hexit[(*(colorname___0 + 2))] << 8)) +
                     (hexit[(*(colorname___0 + 3))] << 4)) +
                    hexit[(*(colorname___0 + 4))]);
# 177
        g = (long )((((hexit[(*(colorname___0 + 5))] << 12) +
                      (hexit[(*(colorname___0 + 6))] << 8)) +
                     (hexit[(*(colorname___0 + 7))] << 4)) +
                    hexit[(*(colorname___0 + 8))]);
# 179
        b = (long )((((hexit[(*(colorname___0 + 9))] << 12) +
                      (hexit[(*(colorname___0 + 10))] << 8)) +
                     (hexit[(*(colorname___0 + 11))] << 4)) +
                    hexit[(*(colorname___0 + 12))]);
# 181
        r = rgbnorm(r, lmaxval, 4, colorname___0);
# 182
        g = rgbnorm(g, lmaxval, 4, colorname___0);
# 183
        b = rgbnorm(b, lmaxval, 4, colorname___0);
        }
# 184
        break;
        default: 
        {
# 187
        pm_error(inval, colorname___0);
        }
        }
# 189
        if (r < 0L) {
          {
# 190
          pm_error(inval, colorname___0);
          }
        } else {
# 189
          if (r > lmaxval) {
            {
# 190
            pm_error(inval, colorname___0);
            }
          } else {
# 189
            if (g < 0L) {
              {
# 190
              pm_error(inval, colorname___0);
              }
            } else {
# 189
              if (g > lmaxval) {
                {
# 190
                pm_error(inval, colorname___0);
                }
              } else {
# 189
                if (b < 0L) {
                  {
# 190
                  pm_error(inval, colorname___0);
                  }
                } else {
# 189
                  if (b > lmaxval) {
                    {
# 190
                    pm_error(inval, colorname___0);
                    }
                  }
                }
              }
            }
          }
        }
      } else {
# 192
        if ((int )(*(colorname___0 + 0)) >= 48) {
# 192
          if ((int )(*(colorname___0 + 0)) <= 57) {
            goto _L;
          } else {
            goto _L___0;
          }
        } else {
          _L___0: 
# 192
          if ((int )(*(colorname___0 + 0)) == 46) {
            _L: 
            {
# 198
            resetSScanfCount((char const   *)colorname___0);
# 198
            fr___0 = (float )ccured_fscanf_double___0(ccured_sscanf_file, "%f");
# 198
            fg___0 = (float )ccured_fscanf_double___0(ccured_sscanf_file, ",%f");
# 198
            fb___0 = (float )ccured_fscanf_double___0(ccured_sscanf_file, ",%f");
# 198
            tmp___1 = getScanfCount();
            }
# 198
            if (tmp___1 != 3) {
              {
# 209
              pm_error(inval, colorname___0);
              }
            }
# 210
            if ((double )fr___0 < 0.0) {
              {
# 211
              pm_error("invalid color specifier - \"%s\" - values must be between 0.0 and 1.0",
                       colorname___0);
              }
            } else {
# 210
              if ((double )fr___0 > 1.0) {
                {
# 211
                pm_error("invalid color specifier - \"%s\" - values must be between 0.0 and 1.0",
                         colorname___0);
                }
              } else {
# 210
                if ((double )fg___0 < 0.0) {
                  {
# 211
                  pm_error("invalid color specifier - \"%s\" - values must be between 0.0 and 1.0",
                           colorname___0);
                  }
                } else {
# 210
                  if ((double )fg___0 > 1.0) {
                    {
# 211
                    pm_error("invalid color specifier - \"%s\" - values must be between 0.0 and 1.0",
                             colorname___0);
                    }
                  } else {
# 210
                    if ((double )fb___0 < 0.0) {
                      {
# 211
                      pm_error("invalid color specifier - \"%s\" - values must be between 0.0 and 1.0",
                               colorname___0);
                      }
                    } else {
# 210
                      if ((double )fb___0 > 1.0) {
                        {
# 211
                        pm_error("invalid color specifier - \"%s\" - values must be between 0.0 and 1.0",
                                 colorname___0);
                        }
                      }
                    }
                  }
                }
              }
            }
            {
# 212
            r = (long )(fr___0 * (float )lmaxval);
# 213
            g = (long )(fg___0 * (float )lmaxval);
# 214
            b = (long )(fb___0 * (float )lmaxval);
            }
          } else {
            {
# 220
            pm_error("color names database required - please reconfigure with RGBDEF");
            }
          }
        }
      }
    }
  }
# 267
  while (1) {
    {
# 267
    p.r = (unsigned char )r;
# 267
    p.g = (unsigned char )g;
# 267
    p.b = (unsigned char )b;
    }
# 267
    break;
  }
# 268
  return (p);
}
}
# 271
static char colorname[200]  ;
# 274
char *ppm_colorname(pixel *colorP , pixval maxval , int hexok ) 
{ int r ;
  int g ;
  int b ;

  {
# 293
  if ((int )maxval == 255) {
    {
# 295
    r = (int )colorP->r;
# 296
    g = (int )colorP->g;
# 297
    b = (int )colorP->b;
    }
  } else {
    {
# 301
    r = ((int )colorP->r * 255) / (int )maxval;
# 302
    g = ((int )colorP->g * 255) / (int )maxval;
# 303
    b = ((int )colorP->b * 255) / (int )maxval;
    }
  }
# 334
  if (! hexok) {
    {
# 335
    pm_error("color names database required - please reconfigure with RGBDEF");
    }
  }
  {
# 337
  sprintf((char */* __restrict  */)(colorname),
          (char const   */* __restrict  */)((char const   *)"#%02x%02x%02x"), r,
          g, b);
  }
# 338
  return (colorname);
}
}
# 10 "ppmdraw.h"
void ppmd_point_drawproc(pixel **pixels , int cols , int rows , pixval maxval ,
                         int x , int y , void *clientdata ) ;
# 57
void ppmd_line(pixel **pixels , int cols , int rows , pixval maxval , int x0 ,
               int y0___0 , int x1 , int y1___0 ,
               void (*drawprocP)(pixel ** , int  , int  , pixval  , int  ,
                                 int  , void * ) , void *clientdata ) ;
# 61
void ppmd_spline3(pixel **pixels , int cols , int rows , pixval maxval ,
                  int x0 , int y0___0 , int x1 , int y1___0 , int x2 , int y2 ,
                  void (*drawprocP)(pixel ** , int  , int  , pixval  , int  ,
                                    int  , void * ) , void *clientdata ) ;
# 80
void ppmd_filledrectangle(pixel **pixels , int cols , int rows , pixval maxval ,
                          int x , int y , int width , int height ,
                          void (*drawprocP)(pixel ** , int  , int  , pixval  ,
                                            int  , int  , void * ) ,
                          void *clientdata ) ;
# 21 "libppm5.c"
void ppmd_point_drawproc(pixel **pixels , int cols , int rows , pixval maxval ,
                         int x , int y , void *clientdata ) 
{ 

  {
# 32
  if (x >= 0) {
# 32
    if (x < cols) {
# 32
      if (y >= 0) {
# 32
        if (y < rows) {
          {
# 33
          (*((*(pixels + y)) + x)) = (*((pixel *)clientdata));
          }
        }
      }
    }
  }
# 34
  return;
}
}
# 40
void ppmd_filledrectangle(pixel **pixels , int cols , int rows , pixval maxval ,
                          int x , int y , int width , int height ,
                          void (*drawprocP)(pixel ** , int  , int  , pixval  ,
                                            int  , int  , void * ) ,
                          void *clientdata ) 
{ register int cx ;
  register int cy ;
  register int cwidth ;
  register int cheight ;
  register int col ;
  register int row ;

  {
  {
# 55
  cx = x;
# 56
  cy = y;
# 57
  cwidth = width;
# 58
  cheight = height;
  }
# 59
  if (cx < 0) {
    {
# 61
    cx = 0;
# 62
    cwidth += x;
    }
  }
# 64
  if (cy < 0) {
    {
# 66
    cy = 0;
# 67
    cheight += y;
    }
  }
# 69
  if (cx + cwidth > cols) {
    {
# 70
    cwidth = cols - cx;
    }
  }
# 71
  if (cy + cheight > rows) {
    {
# 72
    cheight = rows - cy;
    }
  }
  {
# 75
  row = cy;
  }
# 75
  while (row < cy + cheight) {
    {
# 76
    col = cx;
    }
# 76
    while (col < cx + cwidth) {
# 77
      if ((unsigned int )drawprocP ==
          (unsigned int )((void (*)(pixel ** , int  , int  , pixval  , int  ,
                                    int  , void * ))0)) {
        {
# 78
        (*((*(pixels + row)) + col)) = (*((pixel *)clientdata));
        }
      } else {
        {
# 80
        ((*drawprocP))(pixels, cols, rows, maxval, col, row, clientdata);
        }
      }
      {
# 76
      col ++;
      }
    }
    {
# 75
    row ++;
    }
  }
# 82
  return;
}
}
# 87
static int ppmd_linetype   = 0;
# 89
int ppmd_setlinetype(int type ) 
{ int old ;

  {
  {
# 95
  old = ppmd_linetype;
# 96
  ppmd_linetype = type;
  }
# 97
  return (old);
}
}
# 100
static int ppmd_lineclip   = 1;
# 102
int ppmd_setlineclip(int clip ) 
{ int old ;

  {
  {
# 108
  old = ppmd_lineclip;
# 109
  ppmd_lineclip = clip;
  }
# 110
  return (old);
}
}
# 114
void ppmd_line(pixel **pixels , int cols , int rows , pixval maxval , int x0 ,
               int y0___0 , int x1 , int y1___0 ,
               void (*drawprocP)(pixel ** , int  , int  , pixval  , int  ,
                                 int  , void * ) , void *clientdata ) 
{ register int cx0 ;
  register int cy0 ;
  register int cx1 ;
  register int cy1 ;
  register long dy ;
  register long srow ;
  register int dx ;
  register int col ;
  register int row ;
  register int prevrow ;
  int tmp ;
  register long dx___0 ;
  register long scol ;
  register int dy___0 ;
  register int col___0 ;
  register int row___0 ;
  register int prevcol ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;

  {
# 129
  if (x0 == x1) {
# 129
    if (y0___0 == y1___0) {
# 131
      if (ppmd_lineclip) {
# 131
        if (x0 >= 0) {
# 131
          if (x0 < cols) {
# 131
            if (y0___0 >= 0) {
# 131
              if (y0___0 < rows) {
                _L: 
# 133
                if ((unsigned int )drawprocP ==
                    (unsigned int )((void (*)(pixel ** , int  , int  , pixval  ,
                                              int  , int  , void * ))0)) {
                  {
# 134
                  ppmd_point_drawproc(pixels, cols, rows, maxval, x0, y0___0,
                                      clientdata);
                  }
                } else {
                  {
# 137
                  ((*drawprocP))(pixels, cols, rows, maxval, x0, y0___0,
                                 clientdata);
                  }
                }
              }
            }
          }
        }
      } else {
        goto _L;
      }
# 138
      return;
    }
  }
  {
# 142
  cx0 = x0;
# 143
  cy0 = y0___0;
# 144
  cx1 = x1;
# 145
  cy1 = y1___0;
  }
# 146
  if (ppmd_lineclip) {
# 148
    if (cx0 < 0) {
# 150
      if (cx1 < 0) {
# 150
        return;
      }
      {
# 151
      cy0 = cy0 + ((cy1 - cy0) * - cx0) / (cx1 - cx0);
# 152
      cx0 = 0;
      }
    } else {
# 154
      if (cx0 >= cols) {
# 156
        if (cx1 >= cols) {
# 156
          return;
        }
        {
# 157
        cy0 = cy0 + ((cy1 - cy0) * ((cols - 1) - cx0)) / (cx1 - cx0);
# 158
        cx0 = cols - 1;
        }
      }
    }
# 160
    if (cy0 < 0) {
# 162
      if (cy1 < 0) {
# 162
        return;
      }
      {
# 163
      cx0 = cx0 + ((cx1 - cx0) * - cy0) / (cy1 - cy0);
# 164
      cy0 = 0;
      }
    } else {
# 166
      if (cy0 >= rows) {
# 168
        if (cy1 >= rows) {
# 168
          return;
        }
        {
# 169
        cx0 = cx0 + ((cx1 - cx0) * ((rows - 1) - cy0)) / (cy1 - cy0);
# 170
        cy0 = rows - 1;
        }
      }
    }
# 172
    if (cx1 < 0) {
      {
# 174
      cy1 = cy1 + ((cy0 - cy1) * - cx1) / (cx0 - cx1);
# 175
      cx1 = 0;
      }
    } else {
# 177
      if (cx1 >= cols) {
        {
# 179
        cy1 = cy1 + ((cy0 - cy1) * ((cols - 1) - cx1)) / (cx0 - cx1);
# 180
        cx1 = cols - 1;
        }
      }
    }
# 182
    if (cy1 < 0) {
      {
# 184
      cx1 = cx1 + ((cx0 - cx1) * - cy1) / (cy0 - cy1);
# 185
      cy1 = 0;
      }
    } else {
# 187
      if (cy1 >= rows) {
        {
# 189
        cx1 = cx1 + ((cx0 - cx1) * ((rows - 1) - cy1)) / (cy0 - cy1);
# 190
        cy1 = rows - 1;
        }
      }
    }
# 194
    if (cx0 == cx1) {
# 194
      if (cy0 == cy1) {
# 196
        if ((unsigned int )drawprocP ==
            (unsigned int )((void (*)(pixel ** , int  , int  , pixval  , int  ,
                                      int  , void * ))0)) {
          {
# 197
          ppmd_point_drawproc(pixels, cols, rows, maxval, cx0, cy0, clientdata);
          }
        } else {
          {
# 200
          ((*drawprocP))(pixels, cols, rows, maxval, cx0, cy0, clientdata);
          }
        }
# 202
        return;
      }
    }
  }
# 207
  if (cx1 - cx0 >= 0) {
    {
# 207
    tmp___1 = cx1 - cx0;
    }
  } else {
    {
# 207
    tmp___1 = - (cx1 - cx0);
    }
  }
# 207
  if (cy1 - cy0 >= 0) {
    {
# 207
    tmp___2 = cy1 - cy0;
    }
  } else {
    {
# 207
    tmp___2 = - (cy1 - cy0);
    }
  }
# 207
  if (tmp___1 > tmp___2) {
# 212
    if (cx1 > cx0) {
      {
# 213
      dx = 1;
      }
    } else {
      {
# 215
      dx = -1;
      }
    }
# 216
    if (cx1 - cx0 >= 0) {
      {
# 216
      tmp = cx1 - cx0;
      }
    } else {
      {
# 216
      tmp = - (cx1 - cx0);
      }
    }
    {
# 216
    dy = (long )(((cy1 - cy0) * 8192) / tmp);
# 217
    row = cy0;
# 217
    prevrow = row;
# 218
    srow = (long )(row * 8192 + 4096);
# 219
    col = cx0;
    }
# 220
    while (1) {
# 222
      if (ppmd_linetype == 1) {
# 222
        if (row != prevrow) {
# 224
          if ((unsigned int )drawprocP ==
              (unsigned int )((void (*)(pixel ** , int  , int  , pixval  ,
                                        int  , int  , void * ))0)) {
            {
# 225
            (*((*(pixels + prevrow)) + col)) = (*((pixel *)clientdata));
            }
          } else {
            {
# 227
            ((*drawprocP))(pixels, cols, rows, maxval, col, prevrow, clientdata);
            }
          }
          {
# 229
          prevrow = row;
          }
        }
      }
# 231
      if ((unsigned int )drawprocP ==
          (unsigned int )((void (*)(pixel ** , int  , int  , pixval  , int  ,
                                    int  , void * ))0)) {
        {
# 232
        (*((*(pixels + row)) + col)) = (*((pixel *)clientdata));
        }
      } else {
        {
# 234
        ((*drawprocP))(pixels, cols, rows, maxval, col, row, clientdata);
        }
      }
# 236
      if (col == cx1) {
# 237
        break;
      }
      {
# 238
      srow += dy;
# 239
      row = (int )(srow / 8192L);
# 240
      col += dx;
      }
    }
  } else {
# 248
    if (cy1 > cy0) {
      {
# 249
      dy___0 = 1;
      }
    } else {
      {
# 251
      dy___0 = -1;
      }
    }
# 252
    if (cy1 - cy0 >= 0) {
      {
# 252
      tmp___0 = cy1 - cy0;
      }
    } else {
      {
# 252
      tmp___0 = - (cy1 - cy0);
      }
    }
    {
# 252
    dx___0 = (long )(((cx1 - cx0) * 8192) / tmp___0);
# 253
    row___0 = cy0;
# 254
    col___0 = cx0;
# 254
    prevcol = col___0;
# 255
    scol = (long )(col___0 * 8192 + 4096);
    }
# 256
    while (1) {
# 258
      if (ppmd_linetype == 1) {
# 258
        if (col___0 != prevcol) {
# 260
          if ((unsigned int )drawprocP ==
              (unsigned int )((void (*)(pixel ** , int  , int  , pixval  ,
                                        int  , int  , void * ))0)) {
            {
# 261
            (*((*(pixels + row___0)) + prevcol)) = (*((pixel *)clientdata));
            }
          } else {
            {
# 263
            ((*drawprocP))(pixels, cols, rows, maxval, prevcol, row___0,
                           clientdata);
            }
          }
          {
# 265
          prevcol = col___0;
          }
        }
      }
# 267
      if ((unsigned int )drawprocP ==
          (unsigned int )((void (*)(pixel ** , int  , int  , pixval  , int  ,
                                    int  , void * ))0)) {
        {
# 268
        (*((*(pixels + row___0)) + col___0)) = (*((pixel *)clientdata));
        }
      } else {
        {
# 270
        ((*drawprocP))(pixels, cols, rows, maxval, col___0, row___0, clientdata);
        }
      }
# 272
      if (row___0 == cy1) {
# 273
        break;
      }
      {
# 274
      row___0 += dy___0;
# 275
      scol += dx___0;
# 276
      col___0 = (int )(scol / 8192L);
      }
    }
  }
# 279
  return;
}
}
# 283
void ppmd_spline3(pixel **pixels , int cols , int rows , pixval maxval ,
                  int x0 , int y0___0 , int x1 , int y1___0 , int x2 , int y2 ,
                  void (*drawprocP)(pixel ** , int  , int  , pixval  , int  ,
                                    int  , void * ) , void *clientdata ) 
{ register int xa ;
  register int ya ;
  register int xb ;
  register int yb ;
  register int xc ;
  register int yc ;
  register int xp ;
  register int yp ;
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;

  {
  {
# 297
  xa = (x0 + x1) / 2;
# 298
  ya = (y0___0 + y1___0) / 2;
# 299
  xc = (x1 + x2) / 2;
# 300
  yc = (y1___0 + y2) / 2;
# 301
  xb = (xa + xc) / 2;
# 302
  yb = (ya + yc) / 2;
# 304
  xp = (x0 + xb) / 2;
# 305
  yp = (y0___0 + yb) / 2;
  }
# 306
  if (xa - xp >= 0) {
    {
# 306
    tmp = xa - xp;
    }
  } else {
    {
# 306
    tmp = - (xa - xp);
    }
  }
# 306
  if (ya - yp >= 0) {
    {
# 306
    tmp___0 = ya - yp;
    }
  } else {
    {
# 306
    tmp___0 = - (ya - yp);
    }
  }
# 306
  if (tmp + tmp___0 > 3) {
    {
# 307
    ppmd_spline3(pixels, cols, rows, maxval, x0, y0___0, xa, ya, xb, yb,
                 drawprocP, clientdata);
    }
  } else {
    {
# 311
    ppmd_line(pixels, cols, rows, maxval, x0, y0___0, xb, yb, drawprocP,
              clientdata);
    }
  }
  {
# 314
  xp = (x2 + xb) / 2;
# 315
  yp = (y2 + yb) / 2;
  }
# 316
  if (xc - xp >= 0) {
    {
# 316
    tmp___1 = xc - xp;
    }
  } else {
    {
# 316
    tmp___1 = - (xc - xp);
    }
  }
# 316
  if (yc - yp >= 0) {
    {
# 316
    tmp___2 = yc - yp;
    }
  } else {
    {
# 316
    tmp___2 = - (yc - yp);
    }
  }
# 316
  if (tmp___1 + tmp___2 > 3) {
    {
# 317
    ppmd_spline3(pixels, cols, rows, maxval, xb, yb, xc, yc, x2, y2, drawprocP,
                 clientdata);
    }
  } else {
    {
# 321
    ppmd_line(pixels, cols, rows, maxval, xb, yb, x2, y2, drawprocP, clientdata);
    }
  }
# 323
  return;
}
}
# 326
void ppmd_polyspline(pixel **pixels , int cols , int rows , pixval maxval ,
                     int x0 , int y0___0 , int nc , int *xc , int *yc , int x1 ,
                     int y1___0 , void (*drawprocP)(pixel ** , int  , int  ,
                                                    pixval  , int  , int  ,
                                                    void * ) , void *clientdata ) 
{ register int i ;
  register int x ;
  register int y ;
  register int xn ;
  register int yn___0 ;

  {
  {
# 342
  x = x0;
# 343
  y = y0___0;
# 344
  i = 0;
  }
# 344
  while (i < nc - 1) {
    {
# 346
    xn = ((*(xc + i)) + (*(xc + (i + 1)))) / 2;
# 347
    yn___0 = ((*(yc + i)) + (*(yc + (i + 1)))) / 2;
# 348
    ppmd_spline3(pixels, cols, rows, maxval, x, y, (*(xc + i)), (*(yc + i)), xn,
                 yn___0, drawprocP, clientdata);
# 351
    x = xn;
# 352
    y = yn___0;
# 344
    i ++;
    }
  }
  {
# 354
  ppmd_spline3(pixels, cols, rows, maxval, x, y, (*(xc + (nc - 1))),
               (*(yc + (nc - 1))), x1, y1___0, drawprocP, clientdata);
  }
# 357
  return;
}
}
# 360
void ppmd_circle(pixel **pixels , int cols , int rows , pixval maxval , int cx ,
                 int cy , int radius ,
                 void (*drawprocP)(pixel ** , int  , int  , pixval  , int  ,
                                   int  , void * ) , void *clientdata ) 
{ register int x0 ;
  register int y0___0 ;
  register int x ;
  register int y ;
  register int prevx ;
  register int prevy ;
  register int nopointsyet ;
  register long sx ;
  register long sy ;
  register long e ;

  {
  {
# 375
  x = radius;
# 375
  x0 = x;
# 376
  y = 0;
# 376
  y0___0 = y;
# 377
  sx = (long )(x * 8192 + 4096);
# 378
  sy = (long )(y * 8192 + 4096);
# 379
  e = (long )(8192 / radius);
  }
# 380
  if ((unsigned int )drawprocP ==
      (unsigned int )((void (*)(pixel ** , int  , int  , pixval  , int  , int  ,
                                void * ))0)) {
    {
# 381
    (*((*(pixels + (y + cy))) + (x + cx))) = (*((pixel *)clientdata));
    }
  } else {
    {
# 383
    ((*drawprocP))(pixels, cols, rows, maxval, x + cx, y + cy, clientdata);
    }
  }
  {
# 384
  nopointsyet = 1;
  }
# 385
  while (1) {
    {
# 387
    prevx = x;
# 388
    prevy = y;
# 389
    sx += (e * sy) / 8192L;
# 390
    sy -= (e * sx) / 8192L;
# 391
    x = (int )(sx / 8192L);
# 392
    y = (int )(sy / 8192L);
    }
# 393
    if (x != prevx) {
      goto _L;
    } else {
# 393
      if (y != prevy) {
        _L: 
        {
# 395
        nopointsyet = 0;
        }
# 396
        if ((unsigned int )drawprocP ==
            (unsigned int )((void (*)(pixel ** , int  , int  , pixval  , int  ,
                                      int  , void * ))0)) {
          {
# 397
          (*((*(pixels + (y + cy))) + (x + cx))) = (*((pixel *)clientdata));
          }
        } else {
          {
# 399
          ((*drawprocP))(pixels, cols, rows, maxval, x + cx, y + cy, clientdata);
          }
        }
      }
    }
# 385
    if (! nopointsyet) {
# 385
      if (! (x != x0)) {
# 385
        if (! (y != y0___0)) {
# 385
          break;
        }
      }
    }
  }
# 404
  return;
}
}
# 428
static int oldclip  ;
# 430
void *ppmd_fill_init(void) 
{ fillobj *fh ;

  {
  {
# 436
  fh = (fillobj *)malloc(sizeof((*fh)));
  }
# 437
  if ((unsigned int )fh == (unsigned int )((fillobj *)0)) {
    {
# 438
    pm_error("out of memory allocating a fillhandle");
    }
  }
  {
# 439
  fh->n = 0;
# 441
  fh->coords = (coord *)malloc(1000U * sizeof((*(fh->coords))));
  }
# 442
  if ((unsigned int )fh->coords == (unsigned int )((coord *)0)) {
    {
# 443
    pm_error("out of memory allocating a fillhandle");
    }
  }
  {
# 444
  fh->size = 1000;
# 445
  fh->curedge = 0;
# 448
  oldclip = ppmd_setlineclip(0);
  }
# 450
  return ((void *)fh);
}
}
# 454
void ppmd_fill_drawproc(pixel **pixels , int cols , int rows , pixval maxval ,
                        int x , int y , void *clientdata ) 
{ register fillobj *fh ;
  register coord *cp ;
  register coord *ocp ;
  register int dx ;
  register int dy ;
  register coord *fcp ;
  int oldedge ;

  {
  {
# 469
  fh = (fillobj *)clientdata;
  }
# 471
  if (fh->n > 0) {
    {
# 474
    ocp = fh->coords + (fh->n - 1);
    }
# 475
    if (x == (int )ocp->x) {
# 475
      if (y == (int )ocp->y) {
# 476
        return;
      }
    }
  }
# 480
  if (fh->n + 1 >= fh->size) {
    {
# 482
    fh->size += 1000;
# 483
    fh->coords = (coord *)realloc((void *)((char *)fh->coords),
                                  (unsigned int )fh->size *
                                  sizeof((*(fh->coords))));
    }
# 486
    if ((unsigned int )fh->coords == (unsigned int )((coord *)0)) {
      {
# 487
      pm_error("out of memory enlarging a fillhandle");
      }
    }
  }
# 491
  if (fh->n == 0) {
    {
# 493
    fh->segstart = fh->n;
# 494
    fh->ydir = 0;
# 495
    fh->startydir = 0;
    }
  } else {
    {
# 501
    dx = x - (int )ocp->x;
# 502
    dy = y - (int )ocp->y;
    }
# 503
    if (dx < -1) {
      goto _L;
    } else {
# 503
      if (dx > 1) {
        goto _L;
      } else {
# 503
        if (dy < -1) {
          goto _L;
        } else {
# 503
          if (dy > 1) {
            _L: 
# 505
            if (fh->startydir != 0) {
# 505
              if (fh->ydir != 0) {
# 506
                if (fh->startydir == fh->ydir) {
                  {
# 512
                  fcp = fh->coords + fh->segstart;
# 513
                  oldedge = (int )fcp->edge;
                  }
# 514
                  while ((int )fcp->edge == oldedge) {
                    {
# 515
                    fcp->edge = ocp->edge;
# 514
                    fcp ++;
                    }
                  }
                }
              }
            }
            {
# 518
            fh->curedge ++;
# 519
            fh->segstart = fh->n;
# 520
            fh->ydir = 0;
# 521
            fh->startydir = 0;
            }
          } else {
# 525
            if (dy != 0) {
# 527
              if (fh->ydir != 0) {
# 527
                if (fh->ydir != dy) {
                  {
# 530
                  fh->curedge ++;
# 531
                  cp = fh->coords + fh->n;
# 532
                  cp->x = ocp->x;
# 533
                  cp->y = ocp->y;
# 534
                  cp->edge = (short )fh->curedge;
# 535
                  fh->n ++;
                  }
                }
              }
              {
# 537
              fh->ydir = dy;
              }
# 538
              if (fh->startydir == 0) {
                {
# 539
                fh->startydir = dy;
                }
              }
            }
          }
        }
      }
    }
  }
  {
# 545
  cp = fh->coords + fh->n;
# 546
  cp->x = (short )x;
# 547
  cp->y = (short )y;
# 548
  cp->edge = (short )fh->curedge;
# 549
  fh->n ++;
  }
# 550
  return;
}
}
# 552
static int yx_compare(coord *c1 , coord *c2 ) 
{ 

  {
# 557
  if ((int )c1->y > (int )c2->y) {
# 558
    return (1);
  }
# 559
  if ((int )c1->y < (int )c2->y) {
# 560
    return (-1);
  }
# 561
  if ((int )c1->x > (int )c2->x) {
# 562
    return (1);
  }
# 563
  if ((int )c1->x < (int )c2->x) {
# 564
    return (-1);
  }
# 565
  return (0);
}
}
# 569
void ppmd_fill(pixel **pixels , int cols , int rows , pixval maxval ,
               void *fillhandle , void (*drawprocP)(pixel ** , int  , int  ,
                                                    pixval  , int  , int  ,
                                                    void * ) , void *clientdata ) 
{ register fillobj *fh ;
  int pedge ;
  int eq ;
  register int i ;
  register int leftside ;
  register int edge ;
  register int lx ;
  register int rx ;
  register int py ;
  register coord *cp ;
  register coord *fcp ;
  int lastedge ;
  int oldedge ;
  coord t ;
  coord t___0 ;

  {
  {
# 590
  fh = (fillobj *)fillhandle;
  }
# 593
  if (fh->n > 0) {
# 593
    if (fh->startydir != 0) {
# 593
      if (fh->ydir != 0) {
# 594
        if (fh->startydir == fh->ydir) {
          {
# 599
          lastedge = (int )(fh->coords + (fh->n - 1))->edge;
# 600
          fcp = fh->coords + fh->segstart;
# 601
          oldedge = (int )fcp->edge;
          }
# 602
          while ((int )fcp->edge == oldedge) {
            {
# 603
            fcp->edge = (short )lastedge;
# 602
            fcp ++;
            }
          }
        }
      }
    }
  }
  {
# 607
  ppmd_setlineclip(oldclip);
# 611
  qsort((void *)fh->coords, (unsigned int )fh->n, sizeof((*(fh->coords))),
        (int (*)(void const   * __attribute__((__safe__)) left ,
                 void const   * __attribute__((__safe__)) right ))(& yx_compare));
# 614
  edge = -1;
# 615
  i = 0;
  }
# 615
  while (i < fh->n) {
    {
# 617
    cp = fh->coords + i;
    }
# 618
    if (i > 1) {
# 618
      if (eq) {
# 618
        if ((int )cp->edge != edge) {
# 618
          if ((int )cp->edge == pedge) {
            {
# 622
            t = (*(fh->coords + (i - 1)));
# 623
            (*(fh->coords + (i - 1))) = (*(fh->coords + (i - 2)));
# 624
            (*(fh->coords + (i - 2))) = t;
            }
          }
        }
      }
    }
# 626
    if (i > 0) {
# 628
      if ((int )cp->x == lx) {
# 628
        if ((int )cp->y == py) {
          {
# 630
          eq = 1;
          }
# 631
          if ((int )cp->edge != edge) {
# 631
            if ((int )cp->edge == pedge) {
              {
# 635
              t___0 = (*cp);
# 636
              (*cp) = (*(fh->coords + (i - 1)));
# 637
              (*(fh->coords + (i - 1))) = t___0;
              }
            }
          }
        } else {
          {
# 641
          eq = 0;
          }
        }
      } else {
        {
# 641
        eq = 0;
        }
      }
    }
    {
# 643
    lx = (int )cp->x;
# 644
    py = (int )cp->y;
# 645
    pedge = edge;
# 646
    edge = (int )cp->edge;
# 615
    i ++;
    }
  }
  {
# 650
  i = 0;
  }
# 650
  while (i < fh->n) {
    {
# 652
    cp = fh->coords + i;
    }
# 653
    if (i == 0) {
      {
# 655
      rx = (int )cp->x;
# 655
      lx = rx;
# 656
      py = (int )cp->y;
# 657
      edge = (int )cp->edge;
# 658
      leftside = 1;
      }
    } else {
# 662
      if ((int )cp->y != py) {
        {
# 664
        ppmd_filledrectangle(pixels, cols, rows, maxval, lx, py, (rx - lx) + 1,
                             1, drawprocP, clientdata);
# 667
        rx = (int )cp->x;
# 667
        lx = rx;
# 668
        py = (int )cp->y;
# 669
        edge = (int )cp->edge;
# 670
        leftside = 1;
        }
      } else {
# 674
        if ((int )cp->edge == edge) {
          {
# 676
          rx = (int )cp->x;
          }
        } else {
# 680
          if (leftside) {
            {
# 682
            rx = (int )cp->x;
# 683
            leftside = 0;
            }
          } else {
            {
# 687
            ppmd_filledrectangle(pixels, cols, rows, maxval, lx, py,
                                 (rx - lx) + 1, 1, drawprocP, clientdata);
# 690
            rx = (int )cp->x;
# 690
            lx = rx;
# 691
            leftside = 1;
            }
          }
          {
# 693
          edge = (int )cp->edge;
          }
        }
      }
    }
    {
# 650
    i ++;
    }
  }
  {
# 700
  free((void *)fh->coords);
# 701
  free((void *)fh);
  }
# 702
  return;
}
}
# 57 "/home/rupak/cil/include/signal_wrappers.h"
__inline static void *__mkfat_sighandler(void *in ) 
{ void *tmp ;
  void *tmp___0 ;

  {
# 58
  if ((int )in == 1) {
    {
# 59
    tmp = __mkptr((void */* __attribute__((__safe__)) */)in, (void *)0);
    }
# 59
    return (tmp);
  } else {
    {
# 61
    tmp___0 = __mkptr_size((void */* __attribute__((__safe__)) */)in, 1U);
    }
# 61
    return (tmp___0);
  }
}
}
# 80
extern void __deepcopy_sigaction_from_compat(struct sigaction *fat ,
                                             struct sigaction  __attribute__((__compat__)) *compat ) 
{ 

  {
  {
# 81
  fat->sa_handler = (void (*)(int  ))__mkfat_sighandler((void *)compat->sa_handler);
# 82
  fat->sa_restorer = (void (*)(void))__mkfat_sighandler((void *)compat->sa_restorer);
  }
# 84
  return;
}
}
# 711 "jpeglib.h"
void *alloc_small_wrapper(j_common_ptr cinfo , int pool_id ,
                          size_t sizeofobject ) ;
# 716
void *alloc_large_wrapper(j_common_ptr cinfo , int pool_id ,
                          size_t sizeofobject ) ;
# 785
struct jpeg_error_mgr *jpeg_std_error(struct jpeg_error_mgr *err ) ;
# 789
void jpeg_create_compress(j_compress_ptr cinfo ) ;
# 790
void jpeg_create_decompress(j_decompress_ptr cinfo ) ;
# 791
void jpeg_destroy_compress(j_compress_ptr cinfo ) ;
# 792
void jpeg_destroy_decompress(j_decompress_ptr cinfo ) ;
# 800
void jpeg_set_defaults(j_compress_ptr cinfo ) ;
# 802
void jpeg_set_colorspace(j_compress_ptr cinfo , J_COLOR_SPACE colorspace ) ;
# 804
void jpeg_default_colorspace(j_compress_ptr cinfo ) ;
# 805
void jpeg_set_quality(j_compress_ptr cinfo , int quality ,
                      boolean force_baseline ) ;
# 807
void jpeg_set_linear_quality(j_compress_ptr cinfo , int scale_factor ,
                             boolean force_baseline ) ;
# 810
void jpeg_add_quant_table(j_compress_ptr cinfo , int which_tbl ,
                          unsigned int const   *basic_table , int scale_factor ,
                          boolean force_baseline ) ;
# 814
int jpeg_quality_scaling(int quality ) ;
# 815
void jpeg_suppress_tables(j_compress_ptr cinfo , boolean suppress ) ;
# 817
JQUANT_TBL *jpeg_alloc_quant_table(j_common_ptr cinfo ) ;
# 818
JHUFF_TBL *jpeg_alloc_huff_table(j_common_ptr cinfo ) ;
# 821
void jpeg_start_compress(j_compress_ptr cinfo , boolean write_all_tables ) ;
# 823
JDIMENSION jpeg_write_scanlines(j_compress_ptr cinfo , JSAMPARRAY scanlines ,
                                JDIMENSION num_lines ) ;
# 826
void jpeg_finish_compress(j_compress_ptr cinfo ) ;
# 841
int jpeg_read_header(j_decompress_ptr cinfo , boolean require_image ) ;
# 854
void jpeg_start_decompress(j_decompress_ptr cinfo ) ;
# 855
JDIMENSION jpeg_read_scanlines(j_decompress_ptr cinfo , JSAMPARRAY scanlines ,
                               JDIMENSION max_lines ) ;
# 858
boolean jpeg_finish_decompress(j_decompress_ptr cinfo ) ;
# 866
void jpeg_calc_output_dimensions(j_decompress_ptr cinfo ) ;
# 885
void jpeg_abort(j_common_ptr cinfo ) ;
# 886
void jpeg_destroy(j_common_ptr cinfo ) ;
# 889
boolean jpeg_resync_to_restart(j_decompress_ptr cinfo ) ;
# 312 "jpegint.h"
void jinit_master_compress(j_compress_ptr cinfo ) ;
# 313
void jinit_c_main_controller(j_compress_ptr cinfo , boolean need_full_buffer ) ;
# 315
void jinit_c_prep_controller(j_compress_ptr cinfo , boolean need_full_buffer ) ;
# 317
void jinit_c_coef_controller(j_compress_ptr cinfo , boolean need_full_buffer ) ;
# 319
void jinit_color_converter(j_compress_ptr cinfo ) ;
# 320
void jinit_downsampler(j_compress_ptr cinfo ) ;
# 321
void jinit_forward_dct(j_compress_ptr cinfo ) ;
# 322
void jinit_huff_encoder(j_compress_ptr cinfo ) ;
# 323
void jinit_marker_writer(j_compress_ptr cinfo ) ;
# 325
void jinit_master_decompress(j_decompress_ptr cinfo ) ;
# 326
void jinit_d_main_controller(j_decompress_ptr cinfo , boolean need_full_buffer ) ;
# 328
void jinit_d_coef_controller(j_decompress_ptr cinfo , boolean need_full_buffer ) ;
# 330
void jinit_d_post_controller(j_decompress_ptr cinfo , boolean need_full_buffer ) ;
# 332
void jinit_marker_reader(j_decompress_ptr cinfo ) ;
# 333
void jinit_huff_decoder(j_decompress_ptr cinfo ) ;
# 334
void jinit_inverse_dct(j_decompress_ptr cinfo ) ;
# 335
void jinit_upsampler(j_decompress_ptr cinfo ) ;
# 336
void jinit_color_deconverter(j_decompress_ptr cinfo ) ;
# 337
void jinit_1pass_quantizer(j_decompress_ptr cinfo ) ;
# 338
void jinit_2pass_quantizer(j_decompress_ptr cinfo ) ;
# 339
void jinit_merged_upsampler(j_decompress_ptr cinfo ) ;
# 341
void jinit_memory_mgr(j_common_ptr cinfo ) ;
# 344
long jdiv_round_up(long a , long b ) ;
# 345
long jround_up(long a , long b ) ;
# 346
void jcopy_sample_rows(JSAMPARRAY input_array , int source_row ,
                       JSAMPARRAY output_array , int dest_row , int num_rows ,
                       JDIMENSION num_cols ) ;
# 351
void jzero_far(void *target , size_t bytestozero ) ;
# 59 "spec_jpeg.h"
void spec_read_original_image(char *filename ) ;
# 63
void spec_allocate_similar_image(spec_image *pattern , spec_image *new ) ;
# 67
void spec_define_subimage_fp(spec_image *image , spec_image *subimage ,
                             float ulx , float uly , float lrx , float lry ) ;
# 76
void spec_define_subimage_int(spec_image *image , spec_image *subimage ,
                              int ulx , int uly , int lrx , int lry ) ;
# 85
void spec_free_subimage(spec_image *subimage ) ;
# 93
void spec_difference_images(spec_image *a , spec_image *b , spec_image *d ,
                            int row_stride , int col_stride ) ;
# 102
void spec_checksum_image(spec_image *a , int row_stride , int col_stride ) ;
# 109
void Usage(void) ;
# 120
spec_image original_image  ;
# 121
spec_image decompressed_image  ;
# 122
spec_image difference_image  ;
# 123
spec_image sliced_original_image  ;
# 129
int debug_flag  ;
# 130
int verbose_flag  ;
# 131
int histogram_flag  ;
# 132
char *image_filename  ;
# 133
int L1_norm_flag  ;
# 134
int L2_norm_flag  ;
# 135
int difference_flag  ;
# 136
int checksum_flag  ;
# 137
int x_stride  ;
# 138
int y_stride  ;
# 145
struct jpeg_compress_struct TBD_image_cinfo  ;
# 146
struct jpeg_error_mgr TBD_image_jerr  ;
# 25 "spec_image.c"
pixel * __attribute__((__seq__)) *jpeg_to_ppm_image(JSAMPLE * __attribute__((__seq__)) *buffer ) 
{ pixel **tmp ;

  {
  {
# 29
  tmp = (pixel **)__trusted_cast((void *)buffer);
  }
# 29
  return ((pixel * __attribute__((__seq__)) *)tmp);
}
}
# 32
JSAMPLE * __attribute__((__seq__)) *ppm_to_jpeg_image(pixel * __attribute__((__seq__)) *buffer ) 
{ JSAMPLE **tmp ;

  {
  {
# 33
  tmp = (JSAMPLE **)__trusted_cast((void *)buffer);
  }
# 33
  return ((JSAMPLE * __attribute__((__seq__)) *)tmp);
}
}
# 43
void spec_view_image(char *filename , char *comment , spec_image *image ) 
{ 

  {
# 72
  return;
}
}
# 82
void spec_read_original_image(char *filename ) 
{ FILE *infile ;
  pixval max_color_component ;
  FILE * __restrict  tmp ;
  int tmp___0 ;
  pixel * __attribute__((__seq__)) *tmp___1 ;
  FILE * __restrict  tmp___2 ;

  {
  {
# 89
  tmp___0 = strcmp((char const   *)filename, (char const   *)"stdin");
  }
# 89
  if (tmp___0) {
    {
# 93
    infile = fopen((char const   */* __restrict  */)((char const   *)filename),
                   (char const   */* __restrict  */)((char const   *)"r"));
    {
# 17 "spec.work"
    if (infile != (FILE *)0) {
# 17
      infile->__BLAST_FLAG = 1;
    }
    {

    }
    }

    }
# 94 "spec_image.c"
    if ((unsigned int )infile == (unsigned int )((FILE *)0)) {
      {
# 95
      tmp = (FILE */* __restrict  */)get_stderr();
      {
# 105 "spec.work"
      tmp->__BLAST_FLAG = 1;
      {

      }
      }

      {
# 64
      if (! (tmp->__BLAST_FLAG == 1)) {
# 66
        __error__();
      }
      {

      }
      }
# 95 "spec_image.c"
      fprintf(tmp,
              (char const   */* __restrict  */)((char const   *)"error opening input file <%s>\n"),
              filename);
# 96
      exit(1);
      {
# 129 "spec.work"
      while (1) {

      }
      {

      }
      }

      }
    }
  } else {
    {
# 91 "spec_image.c"
    infile = get_stdin();
    {
# 121 "spec.work"
    infile->__BLAST_FLAG = 1;
    {

    }
    }

    }
  }
  {
# 102 "spec_image.c"
  tmp___1 = (pixel * __attribute__((__seq__)) *)ppm_readppm(infile,
                                                            (int *)(& original_image.image_width),
                                                            (int *)(& original_image.image_height),
                                                            & max_color_component);
# 102
  original_image.buffer = (JSAMPARRAY )ppm_to_jpeg_image(tmp___1);
  }
# 109
  if ((unsigned int )original_image.buffer == (unsigned int )((JSAMPROW *)0)) {
    {
# 110
    tmp___2 = (FILE */* __restrict  */)get_stderr();
    {
# 105 "spec.work"
    tmp___2->__BLAST_FLAG = 1;
    {

    }
    }

    {
# 56
    if (! (tmp___2->__BLAST_FLAG == 1)) {
# 58
      __error__();
    }
    {

    }
    }
# 110 "spec_image.c"
    fprintf(tmp___2,
            (char const   */* __restrict  */)((char const   *)"error allocating decompressed_image.buffer\n"));
# 111
    exit(1);
    {
# 129 "spec.work"
    while (1) {

    }
    {

    }
    }

    }
  }
  {
# 113 "spec_image.c"
  original_image.max_color_component = (int )max_color_component;
# 115
  original_image.num_color_components = 3;
# 124
  original_image.color_space = 2;
  }
# 126
  return;
}
}
# 129
void spec_allocate_similar_image(spec_image *pattern , spec_image *new ) 
{ pixel **tmp ;
  FILE * __restrict  tmp___0 ;

  {
  {
# 134
  new->image_height = pattern->image_height;
# 135
  new->image_width = pattern->image_width;
# 136
  new->max_color_component = pattern->max_color_component;
# 137
  new->num_color_components = pattern->num_color_components;
# 138
  new->color_space = pattern->color_space;
# 140
  tmp = (pixel **)pm_allocarray((int )pattern->image_width,
                                (int )pattern->image_height,
                                (int )sizeof(pixel ));
# 140
  new->buffer = (JSAMPARRAY )ppm_to_jpeg_image((pixel * __attribute__((__seq__)) *)tmp);
  }
# 145
  if ((unsigned int )new->buffer == (unsigned int )((JSAMPROW *)0)) {
    {
# 146
    tmp___0 = (FILE */* __restrict  */)get_stderr();
    {
# 105 "spec.work"
    tmp___0->__BLAST_FLAG = 1;
    {

    }
    }

    {
# 56
    if (! (tmp___0->__BLAST_FLAG == 1)) {
# 58
      __error__();
    }
    {

    }
    }
# 146 "spec_image.c"
    fprintf(tmp___0,
            (char const   */* __restrict  */)((char const   *)"error allocating new->buffer\n"));
# 147
    exit(1);
    {
# 129 "spec.work"
    while (1) {

    }
    {

    }
    }

    }
  }
# 154 "spec_image.c"
  return;
}
}
# 163
void spec_free_image(spec_image *image ) 
{ void **tmp ;

  {
# 166
  if (image->buffer) {
    {
# 167
    tmp = (void **)jpeg_to_ppm_image((JSAMPLE * __attribute__((__seq__)) *)image->buffer);
# 167
    pm_freearray(tmp, (int )image->image_height);
    }
  }
  {
# 169
  image->buffer = (JSAMPROW *)0;
# 170
  image->image_height = 4294967295U;
# 171
  image->image_width = 4294967295U;
# 172
  image->max_color_component = -1;
# 173
  image->num_color_components = -1;
# 174
  image->color_space = -1;
  }
# 175
  return;
}
}
# 182
void spec_define_subimage_fp(spec_image *image , spec_image *subimage ,
                             float ulx , float uly , float lrx , float lry ) 
{ int in_range ;
  int tmp ;
  FILE * __restrict  tmp___0 ;
  FILE * __restrict  tmp___1 ;

  {
# 190
  if (0.0 <= (double )ulx) {
# 190
    if ((double )ulx <= 1.0) {
# 190
      if (0.0 <= (double )lrx) {
# 190
        if ((double )lrx <= 1.0) {
# 190
          if (ulx < lrx) {
# 190
            if (0.0 <= (double )uly) {
# 190
              if ((double )uly <= 1.0) {
# 190
                if (0.0 <= (double )lry) {
# 190
                  if ((double )lry <= 1.0) {
# 190
                    if (uly < lry) {
                      {
# 190
                      tmp = 1;
                      }
                    } else {
                      {
# 190
                      tmp = 0;
                      }
                    }
                  } else {
                    {
# 190
                    tmp = 0;
                    }
                  }
                } else {
                  {
# 190
                  tmp = 0;
                  }
                }
              } else {
                {
# 190
                tmp = 0;
                }
              }
            } else {
              {
# 190
              tmp = 0;
              }
            }
          } else {
            {
# 190
            tmp = 0;
            }
          }
        } else {
          {
# 190
          tmp = 0;
          }
        }
      } else {
        {
# 190
        tmp = 0;
        }
      }
    } else {
      {
# 190
      tmp = 0;
      }
    }
  } else {
    {
# 190
    tmp = 0;
    }
  }
  {
# 190
  in_range = tmp;
  }
# 198
  if (! in_range) {
    {
# 199
    tmp___0 = (FILE */* __restrict  */)get_stderr();
    {
# 105 "spec.work"
    tmp___0->__BLAST_FLAG = 1;
    {

    }
    }

    {
# 72
    if (! (tmp___0->__BLAST_FLAG == 1)) {
# 74
      __error__();
    }
    {

    }
    }
# 199 "spec_image.c"
    fprintf(tmp___0,
            (char const   */* __restrict  */)((char const   *)"%s:%d: badly defined fp subimage\n"),
            "spec_image.c", 199);
# 200
    tmp___1 = (FILE */* __restrict  */)get_stderr();
    {
# 105 "spec.work"
    tmp___1->__BLAST_FLAG = 1;
    {

    }
    }

    {
# 88
    if (! (tmp___1->__BLAST_FLAG == 1)) {
# 90
      __error__();
    }
    {

    }
    }
# 200 "spec_image.c"
    fprintf(tmp___1,
            (char const   */* __restrict  */)((char const   *)"    ul:(%g,%g) lr:(%g,%g)\n"),
            ulx, uly, lrx, lry);
# 201
    exit(1);
    {
# 129 "spec.work"
    while (1) {

    }
    {

    }
    }

    }
  }
  {
# 204 "spec_image.c"
  spec_define_subimage_int(image, subimage,
                           (int )(ulx * (float )(image->image_width - 1U)),
                           (int )(uly * (float )(image->image_height - 1U)),
                           (int )(lrx * (float )(image->image_width - 1U)),
                           (int )(lry * (float )(image->image_height - 1U)));
  }
# 210
  return;
}
}
# 213
void spec_define_subimage_int(spec_image *image , spec_image *subimage ,
                              int ulx , int uly , int lrx , int lry ) 
{ int j ;
  int jj ;
  int in_range ;
  int tmp ;
  FILE * __restrict  tmp___0 ;
  FILE * __restrict  tmp___1 ;
  FILE * __restrict  tmp___3 ;

  {
# 222
  if (0 <= ulx) {
# 222
    if ((unsigned int )ulx < image->image_width) {
# 222
      if (0 <= lrx) {
# 222
        if ((unsigned int )lrx < image->image_width) {
# 222
          if (ulx < lrx) {
# 222
            if (0 <= uly) {
# 222
              if ((unsigned int )uly < image->image_height) {
# 222
                if (0 <= lry) {
# 222
                  if ((unsigned int )lry < image->image_height) {
# 222
                    if (uly < lry) {
                      {
# 222
                      tmp = 1;
                      }
                    } else {
                      {
# 222
                      tmp = 0;
                      }
                    }
                  } else {
                    {
# 222
                    tmp = 0;
                    }
                  }
                } else {
                  {
# 222
                  tmp = 0;
                  }
                }
              } else {
                {
# 222
                tmp = 0;
                }
              }
            } else {
              {
# 222
              tmp = 0;
              }
            }
          } else {
            {
# 222
            tmp = 0;
            }
          }
        } else {
          {
# 222
          tmp = 0;
          }
        }
      } else {
        {
# 222
        tmp = 0;
        }
      }
    } else {
      {
# 222
      tmp = 0;
      }
    }
  } else {
    {
# 222
    tmp = 0;
    }
  }
  {
# 222
  in_range = tmp;
  }
# 231
  if (! in_range) {
    {
# 232
    tmp___0 = (FILE */* __restrict  */)get_stderr();
    {
# 105 "spec.work"
    tmp___0->__BLAST_FLAG = 1;
    {

    }
    }

    {
# 72
    if (! (tmp___0->__BLAST_FLAG == 1)) {
# 74
      __error__();
    }
    {

    }
    }
# 232 "spec_image.c"
    fprintf(tmp___0,
            (char const   */* __restrict  */)((char const   *)"%s:%d: badly defined int subimage\n"),
            "spec_image.c", 232);
# 233
    tmp___1 = (FILE */* __restrict  */)get_stderr();
    {
# 105 "spec.work"
    tmp___1->__BLAST_FLAG = 1;
    {

    }
    }
# 233 "spec_image.c"
    fprintf(tmp___1,
            (char const   */* __restrict  */)((char const   *)"    ul:(%d,%d) lr:(%d,%d) image:(%d,%d)\n"),
            ulx, uly, lrx, lry, image->image_width, image->image_height);
# 237
    exit(1);
    {
# 129 "spec.work"
    while (1) {

    }
    {

    }
    }

    }
  }
  {
# 240 "spec_image.c"
  subimage->image_height = (unsigned int )((lry - uly) + 1);
# 241
  subimage->image_width = (unsigned int )((lrx - ulx) + 1);
# 242
  subimage->max_color_component = image->max_color_component;
# 243
  subimage->num_color_components = image->num_color_components;
# 244
  subimage->color_space = image->color_space;
# 246
  subimage->buffer = (JSAMPARRAY )malloc(subimage->image_height *
                                         sizeof((*(subimage->buffer))));
  }
# 250
  if ((unsigned int )subimage->buffer == (unsigned int )((JSAMPROW *)0)) {
    {
# 251
    tmp___3 = (FILE */* __restrict  */)get_stderr();
    {
# 105 "spec.work"
    tmp___3->__BLAST_FLAG = 1;
    {

    }
    }

    {
# 56
    if (! (tmp___3->__BLAST_FLAG == 1)) {
# 58
      __error__();
    }
    {

    }
    }
# 251 "spec_image.c"
    fprintf(tmp___3,
            (char const   */* __restrict  */)((char const   *)"error allocating subimage->buffer\n"));
# 252
    exit(1);
    {
# 129 "spec.work"
    while (1) {

    }
    {

    }
    }

    }
  }
  {
# 255 "spec_image.c"
  j = uly;
# 255
  jj = 0;
  }
# 255
  while (j <= lry) {
    {
# 260
    (*(subimage->buffer + jj)) = (*(image->buffer + j)) +
                                 image->num_color_components * ulx;
# 255
    j ++;
# 255
    jj ++;
    }
  }
# 262
  return;
}
}
# 265
void spec_free_subimage(spec_image *subimage ) 
{ 

  {
  {
# 268
  subimage->image_height = 0U;
# 269
  subimage->image_width = 0U;
# 270
  subimage->max_color_component = 0;
# 271
  subimage->num_color_components = 0;
# 272
  subimage->color_space = 0;
  }
# 280
  if (subimage->buffer) {
    {
# 281
    free((void *)subimage->buffer);
    }
  }
  {
# 283
  subimage->buffer = (JSAMPROW *)0;
  }
# 284
  return;
}
}
# 288
void spec_write_image(char *filename , spec_image *image ) 
{ FILE *outfile ;
  FILE * __restrict  tmp ;
  int tmp___0 ;
  pixel **tmp___1 ;
  FILE * __restrict  tmp___2 ;
  int tmp___3 ;

  {
  {
# 293
  tmp___0 = strcmp((char const   *)filename, (char const   *)"stdout");
  }
# 293
  if (tmp___0) {
    {
# 297
    outfile = fopen((char const   */* __restrict  */)((char const   *)filename),
                    (char const   */* __restrict  */)((char const   *)"w+"));
    {
# 17 "spec.work"
    if (outfile != (FILE *)0) {
# 17
      outfile->__BLAST_FLAG = 1;
    }
    {

    }
    }

    }
# 298 "spec_image.c"
    if ((unsigned int )outfile == (unsigned int )((FILE *)0)) {
      {
# 299
      tmp = (FILE */* __restrict  */)get_stderr();
      {
# 105 "spec.work"
      tmp->__BLAST_FLAG = 1;
      {

      }
      }

      {
# 64
      if (! (tmp->__BLAST_FLAG == 1)) {
# 66
        __error__();
      }
      {

      }
      }
# 299 "spec_image.c"
      fprintf(tmp,
              (char const   */* __restrict  */)((char const   *)"error opening output file <%s>\n"),
              filename);
# 300
      exit(1);
      {
# 129 "spec.work"
      while (1) {

      }
      {

      }
      }

      }
    }
  } else {
    {
# 295 "spec_image.c"
    outfile = get_stdout();
    {
# 113 "spec.work"
    outfile->__BLAST_FLAG = 1;
    {

    }
    }

    }
  }
  {
# 304 "spec_image.c"
  tmp___1 = (pixel **)jpeg_to_ppm_image((JSAMPLE * __attribute__((__seq__)) *)image->buffer);
# 304
  ppm_writeppm(outfile, tmp___1, (int )image->image_width,
               (int )image->image_height,
               (unsigned char )image->max_color_component, 1);
# 312
  tmp___3 = fclose(outfile);
  }
# 312
  if (tmp___3) {
    {
# 313
    tmp___2 = (FILE */* __restrict  */)get_stderr();
    {
# 105 "spec.work"
    tmp___2->__BLAST_FLAG = 1;
    {

    }
    }

    {
# 64
    if (! (tmp___2->__BLAST_FLAG == 1)) {
# 66
      __error__();
    }
    {

    }
    }
# 313 "spec_image.c"
    fprintf(tmp___2,
            (char const   */* __restrict  */)((char const   *)"error closing output file <%s>\n"),
            filename);
# 314
    exit(0);
    {
# 129 "spec.work"
    while (1) {

    }
    {

    }
    }

    }
  }
# 317 "spec_image.c"
  return;
}
}
# 325
int histogram[257]  ;
# 326
int histo_underflow   = 0;
# 327
int histo_overflow   = 0;
# 331
static int zero_histogram(void) 
{ int i ;

  {
  {
# 336
  histo_underflow = 0;
# 337
  histo_overflow = 0;
# 338
  i = -128;
  }
# 338
  while (i <= 128) {
    {
# 339
    histogram[i - -128] = 0;
# 338
    i ++;
    }
  }
# 341
  return (0);
}
}
# 343
static int print_histogram(void) 
{ int i ;

  {
  {
# 348
  printf((char const   */* __restrict  */)((char const   *)"underflow\t%d\n"),
         histo_underflow);
# 349
  printf((char const   */* __restrict  */)((char const   *)"overflow\t%d\n"),
         histo_overflow);
# 350
  i = -128;
  }
# 350
  while (i <= 128) {
    {
# 351
    printf((char const   */* __restrict  */)((char const   *)"%d  - %d\n"), i,
           histogram[i - -128]);
# 350
    i ++;
    }
  }
  {
# 353
  printf((char const   */* __restrict  */)((char const   *)"\n"));
  }
# 354
  return (0);
}
}
# 380
void spec_difference_images(spec_image *a , spec_image *b , spec_image *d ,
                            int row_stride , int col_stride ) 
{ int row ;
  int col ;
  int channel ;
  int dif ;
  int bias ;
  unsigned int L1_norm ;
  unsigned int L2_norm ;
  FILE * __restrict  tmp ;

  {
  {
# 390
  bias = a->max_color_component >> 1;
# 391
  L1_norm = 0U;
# 392
  L2_norm = 0U;
  }
# 397
  if (a->image_width != b->image_width) {
    {
# 404
    tmp = (FILE */* __restrict  */)get_stderr();
    {
# 105 "spec.work"
    tmp->__BLAST_FLAG = 1;
    {

    }
    }

    {
# 56
    if (! (tmp->__BLAST_FLAG == 1)) {
# 58
      __error__();
    }
    {

    }
    }
# 404 "spec_image.c"
    fprintf(tmp,
            (char const   */* __restrict  */)((char const   *)"error: mismatched images differencing\n"));
# 405
    exit(1);
    {
# 129 "spec.work"
    while (1) {

    }
    {

    }
    }

    }
  } else {
# 397 "spec_image.c"
    if (a->image_height != b->image_height) {
      {
# 404
      tmp = (FILE */* __restrict  */)get_stderr();
      {
# 105 "spec.work"
      tmp->__BLAST_FLAG = 1;
      {

      }
      }

      {
# 56
      if (! (tmp->__BLAST_FLAG == 1)) {
# 58
        __error__();
      }
      {

      }
      }
# 404 "spec_image.c"
      fprintf(tmp,
              (char const   */* __restrict  */)((char const   *)"error: mismatched images differencing\n"));
# 405
      exit(1);
      {
# 129 "spec.work"
      while (1) {

      }
      {

      }
      }

      }
    } else {
# 397 "spec_image.c"
      if (a->num_color_components != b->num_color_components) {
        {
# 404
        tmp = (FILE */* __restrict  */)get_stderr();
        {
# 105 "spec.work"
        tmp->__BLAST_FLAG = 1;
        {

        }
        }

        {
# 56
        if (! (tmp->__BLAST_FLAG == 1)) {
# 58
          __error__();
        }
        {

        }
        }
# 404 "spec_image.c"
        fprintf(tmp,
                (char const   */* __restrict  */)((char const   *)"error: mismatched images differencing\n"));
# 405
        exit(1);
        {
# 129 "spec.work"
        while (1) {

        }
        {

        }
        }

        }
      } else {
# 397 "spec_image.c"
        if (a->max_color_component != b->max_color_component) {
          {
# 404
          tmp = (FILE */* __restrict  */)get_stderr();
          {
# 105 "spec.work"
          tmp->__BLAST_FLAG = 1;
          {

          }
          }

          {
# 56
          if (! (tmp->__BLAST_FLAG == 1)) {
# 58
            __error__();
          }
          {

          }
          }
# 404 "spec_image.c"
          fprintf(tmp,
                  (char const   */* __restrict  */)((char const   *)"error: mismatched images differencing\n"));
# 405
          exit(1);
          {
# 129 "spec.work"
          while (1) {

          }
          {

          }
          }

          }
        } else {
# 397 "spec_image.c"
          if (a->color_space != b->color_space) {
            {
# 404
            tmp = (FILE */* __restrict  */)get_stderr();
            {
# 105 "spec.work"
            tmp->__BLAST_FLAG = 1;
            {

            }
            }

            {
# 56
            if (! (tmp->__BLAST_FLAG == 1)) {
# 58
              __error__();
            }
            {

            }
            }
# 404 "spec_image.c"
            fprintf(tmp,
                    (char const   */* __restrict  */)((char const   *)"error: mismatched images differencing\n"));
# 405
            exit(1);
            {
# 129 "spec.work"
            while (1) {

            }
            {

            }
            }

            }
          } else {
# 397 "spec_image.c"
            if (a->gamma != b->gamma) {
              {
# 404
              tmp = (FILE */* __restrict  */)get_stderr();
              {
# 105 "spec.work"
              tmp->__BLAST_FLAG = 1;
              {

              }
              }

              {
# 56
              if (! (tmp->__BLAST_FLAG == 1)) {
# 58
                __error__();
              }
              {

              }
              }
# 404 "spec_image.c"
              fprintf(tmp,
                      (char const   */* __restrict  */)((char const   *)"error: mismatched images differencing\n"));
# 405
              exit(1);
              {
# 129 "spec.work"
              while (1) {

              }
              {

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
# 413 "spec_image.c"
  d->image_width = a->image_width;
# 414
  d->image_height = a->image_height;
# 415
  d->num_color_components = a->num_color_components;
# 416
  d->max_color_component = a->max_color_component;
# 417
  d->color_space = a->color_space;
# 418
  d->gamma = a->gamma;
# 420
  zero_histogram();
# 422
  row = 0;
  }
# 422
  while ((unsigned int )row < d->image_height) {
    {
# 423
    col = 0;
    }
# 423
    while ((unsigned int )col < d->image_width) {
      {
# 424
      channel = 0;
      }
# 424
      while (channel < d->num_color_components) {
        {
# 429
        dif = (int )(*((*(a->buffer + row)) + (col * d->num_color_components +
                                               channel))) -
              (int )(*((*(b->buffer + row)) + (col * d->num_color_components +
                                               channel)));
        }
# 431
        if (histogram_flag) {
# 435
          if (dif < -128) {
            {
# 436
            histo_underflow ++;
            }
          } else {
# 437
            if (dif > 128) {
              {
# 438
              histo_overflow ++;
              }
            } else {
              {
# 440
              histogram[dif - -128] ++;
              }
            }
          }
        }
# 444
        if (difference_flag) {
# 454
          if (dif + bias < 0) {
            {
# 455
            (*((*(d->buffer + row)) + (col * d->num_color_components + channel))) = (unsigned char )0;
            }
          } else {
# 456
            if (dif + bias > d->max_color_component) {
              {
# 457
              (*((*(d->buffer + row)) +
                 (col * d->num_color_components + channel))) = (unsigned char )(d->max_color_component -
                                                                                1);
              }
            } else {
              {
# 459
              (*((*(d->buffer + row)) +
                 (col * d->num_color_components + channel))) = (unsigned char )(dif +
                                                                                bias);
              }
            }
          }
        }
# 463
        if (L1_norm_flag) {
# 469
          if (dif >= 0) {
            {
# 469
            dif = dif;
            }
          } else {
            {
# 469
            dif = - dif;
            }
          }
# 470
          if (dif > 64) {
            {
# 470
            dif = 64;
            }
          }
# 472
          if (L1_norm + (unsigned int )dif > 1073741824U) {
            {
# 473
            L1_norm = 1073741824U;
            }
          } else {
            {
# 475
            L1_norm += (unsigned int )dif;
            }
          }
        }
# 479
        if (L2_norm_flag) {
          {
# 485
          dif = dif * dif;
          }
# 487
          if (L2_norm + (unsigned int )dif > 1073741824U) {
            {
# 488
            L2_norm = 1073741824U;
            }
          } else {
            {
# 490
            L2_norm += (unsigned int )dif;
            }
          }
        }
        {
# 424
        channel ++;
        }
      }
      {
# 423
      col += col_stride;
      }
    }
    {
# 422
    row += row_stride;
    }
  }
# 497
  if (L1_norm_flag) {
    {
# 498
    printf((char const   */* __restrict  */)((char const   *)"L1 norm = %d\n"),
           L1_norm);
    }
  }
# 500
  if (L2_norm_flag) {
    {
# 501
    printf((char const   */* __restrict  */)((char const   *)"L2 norm = %d\n"),
           L2_norm);
    }
  }
# 503
  if (histogram_flag) {
    {
# 504
    print_histogram();
    }
  }
# 507
  return;
}
}
# 533
void spec_checksum_image(spec_image *a , int row_stride , int col_stride ) 
{ int row ;
  int col ;
  int channel ;
  int checksum ;

  {
  {
# 540
  checksum = 0;
# 542
  row = 0;
  }
# 542
  while ((unsigned int )row < a->image_height) {
    {
# 543
    col = 0;
    }
# 543
    while ((unsigned int )col < a->image_width) {
      {
# 544
      channel = 0;
      }
# 544
      while (channel < a->num_color_components) {
        {
# 545
        checksum ^= (int )(*((*(a->buffer + row)) +
                             (col * a->num_color_components + channel)));
# 544
        channel ++;
        }
      }
      {
# 543
      col += col_stride;
      }
    }
    {
# 542
    row += row_stride;
    }
  }
  {
# 550
  printf((char const   */* __restrict  */)((char const   *)"checksum: %d\n"),
         checksum);
  }
# 551
  return;
}
}
# 34 "spec_jmemdst.c"
static void jmd_init_destination(j_compress_ptr cinfo ) 
{ jmd_my_dest_ptr dest ;

  {
  {
# 37
  dest = (jmd_my_destination_mgr *)cinfo->dest;
# 39
  dest->pub.next_output_byte = dest->jmd_buffer;
# 40
  dest->pub.free_in_buffer = (unsigned int )dest->jmd_max_bufsz;
# 41
  (*(dest->jmd_actual_bufszptr)) = 0;
  }
# 42
  return;
}
}
# 51
static boolean jmd_empty_output_buffer(j_compress_ptr cinfo ) 
{ FILE * __restrict  tmp ;

  {
  {
# 54
  tmp = (FILE */* __restrict  */)get_stderr();
  {
# 105 "spec.work"
  tmp->__BLAST_FLAG = 1;
  {

  }
  }

  {
# 56
  if (! (tmp->__BLAST_FLAG == 1)) {
# 58
    __error__();
  }
  {

  }
  }
# 54 "spec_jmemdst.c"
  fprintf(tmp,
          (char const   */* __restrict  */)((char const   *)"jmd_empty_output_buffer called\n"));
# 55
  exit(1);
  {
# 129 "spec.work"
  while (1) {

  }
  {

  }
  }

  }
# 56 "spec_jmemdst.c"
  return (1);
}
}
# 68
static void jmd_term_destination(j_compress_ptr cinfo ) 
{ jmd_my_dest_ptr dest ;

  {
  {
# 71
  dest = (jmd_my_destination_mgr *)cinfo->dest;
# 73
  (*(dest->jmd_actual_bufszptr)) = (int )((unsigned int )dest->jmd_max_bufsz -
                                          dest->pub.free_in_buffer);
  }
# 74
  return;
}
}
# 83
void spec_jpeg_mem_dest(j_compress_ptr cinfo , JOCTET *jmd_buffer ,
                        int jmd_max_bufsz , int *jmd_actual_bufszptr ) 
{ jmd_my_dest_ptr dest ;
  void *tmp ;
  FILE * __restrict  tmp___0 ;

  {
# 97
  if ((unsigned int )cinfo->dest == (unsigned int )((void *)0)) {
    {
# 98
    tmp = alloc_small_wrapper((struct jpeg_common_struct *)cinfo, 0,
                              sizeof(jmd_my_destination_mgr ));
# 98
    cinfo->dest = (struct jpeg_destination_mgr */* __attribute__((__rtti__)) */)((struct jpeg_destination_mgr *)((struct jmd_my_destination_mgr *)tmp));
    }
# 102
    if ((unsigned int )cinfo->dest == (unsigned int )((void *)0)) {
      {
# 103
      tmp___0 = (FILE */* __restrict  */)get_stderr();
      {
# 105 "spec.work"
      tmp___0->__BLAST_FLAG = 1;
      {

      }
      }

      {
# 56
      if (! (tmp___0->__BLAST_FLAG == 1)) {
# 58
        __error__();
      }
      {

      }
      }
# 103 "spec_jmemdst.c"
      fprintf(tmp___0,
              (char const   */* __restrict  */)((char const   *)"error allocating jpeg memory destination buffer\n"));
# 104
      exit(1);
      {
# 129 "spec.work"
      while (1) {

      }
      {

      }
      }

      }
    }
  }
  {
# 109 "spec_jmemdst.c"
  dest = (jmd_my_destination_mgr *)cinfo->dest;
# 112
  dest->pub.init_destination = & jmd_init_destination;
# 113
  dest->pub.empty_output_buffer = & jmd_empty_output_buffer;
# 114
  dest->pub.term_destination = & jmd_term_destination;
# 117
  dest->jmd_buffer = jmd_buffer;
# 118
  dest->jmd_max_bufsz = jmd_max_bufsz;
# 119
  dest->jmd_actual_bufszptr = jmd_actual_bufszptr;
  }
# 120
  return;
}
}
# 38 "spec_jmemsrc.c"
static void jms_init_source(j_decompress_ptr dinfo ) 
{ 

  {
# 42
  return;
}
}
# 53
static boolean jms_fill_input_buffer(j_decompress_ptr dinfo ) 
{ FILE * __restrict  tmp ;

  {
  {
# 56
  tmp = (FILE */* __restrict  */)get_stderr();
  {
# 105 "spec.work"
  tmp->__BLAST_FLAG = 1;
  {

  }
  }

  {
# 56
  if (! (tmp->__BLAST_FLAG == 1)) {
# 58
    __error__();
  }
  {

  }
  }
# 56 "spec_jmemsrc.c"
  fprintf(tmp,
          (char const   */* __restrict  */)((char const   *)"Error: jms_fill_input_buffer_called\n"));
# 57
  exit(1);
  {
# 129 "spec.work"
  while (1) {

  }
  {

  }
  }

  }
# 58 "spec_jmemsrc.c"
  return (1);
}
}
# 69
static void jms_skip_input_data(j_decompress_ptr dinfo , long num_bytes ) 
{ jms_my_src_ptr src ;
  FILE * __restrict  tmp ;

  {
  {
# 72
  src = (jms_my_source_mgr *)dinfo->src;
# 74
  src->pub.next_input_byte = src->pub.next_input_byte + (unsigned int )num_bytes;
# 75
  src->pub.bytes_in_buffer = src->pub.bytes_in_buffer - (unsigned int )num_bytes;
  }
# 77
  if (src->pub.bytes_in_buffer < 0U) {
    {
# 78
    tmp = (FILE */* __restrict  */)get_stderr();
    {
# 105 "spec.work"
    tmp->__BLAST_FLAG = 1;
    {

    }
    }

    {
# 56
    if (! (tmp->__BLAST_FLAG == 1)) {
# 58
      __error__();
    }
    {

    }
    }
# 78 "spec_jmemsrc.c"
    fprintf(tmp,
            (char const   */* __restrict  */)((char const   *)"jms_skip_input_data skips past end\n"));
# 79
    exit(1);
    {
# 129 "spec.work"
    while (1) {

    }
    {

    }
    }

    }
  }
# 81 "spec_jmemsrc.c"
  return;
}
}
# 104
static void jms_term_source(j_decompress_ptr dinfo ) 
{ 

  {
# 108
  return;
}
}
# 115
void spec_jpeg_mem_src(j_decompress_ptr dinfo , JOCTET *jms_buffer ,
                       int jms_bufsz ) 
{ jms_my_src_ptr src ;
  void *tmp ;

  {
# 127
  if ((unsigned int )dinfo->src == (unsigned int )((void *)0)) {
    {
# 128
    tmp = alloc_small_wrapper((struct jpeg_common_struct *)dinfo, 0,
                              sizeof(jms_my_source_mgr ));
# 128
    dinfo->src = (struct jpeg_source_mgr */* __attribute__((__rtti__)) */)((struct jpeg_source_mgr *)((struct jms_my_source_mgr *)tmp));
    }
  }
  {
# 134
  src = (jms_my_source_mgr *)dinfo->src;
# 139
  src->pub.init_source = & jms_init_source;
# 140
  src->pub.fill_input_buffer = & jms_fill_input_buffer;
# 141
  src->pub.skip_input_data = & jms_skip_input_data;
# 142
  src->pub.resync_to_restart = & jpeg_resync_to_restart;
# 143
  src->pub.term_source = & jms_term_source;
# 148
  src->pub.bytes_in_buffer = (unsigned int )jms_bufsz;
# 149
  src->pub.next_input_byte = (JOCTET const   *)jms_buffer;
  }
# 150
  return;
}
}
# 1 "spec_main.c"
char rcsid[112]   = 
# 1
  {'$', 'H', 'e', 'a', 'd', 'e', 'r', ':', ' ', '/', 'h', 'o', 'm', 'e', '/',
   'c', 'v', 's', '-', 'r', 'e', 'p', 'o', 's', 'i', 't', 'o', 'r', 'y', '/',
   '/', 'c', 'i', 'l', '/', 't', 'e', 's', 't', '/', 's', 'p', 'e', 'c', '9',
   '5', '/', '1', '3', '2', '.', 'i', 'j', 'p', 'e', 'g', '/', 's', 'r', 'c',
   '/', 's', 'p', 'e', 'c', '_', 'm', 'a', 'i', 'n', '.', 'c', ',', 'v', ' ',
   '1', '.', '9', ' ', '2', '0', '0', '3', '/', '0', '1', '/', '0', '8', ' ',
   '2', '2', ':', '2', '0', ':', '1', '9', ' ', 'n', 'e', 'c', 'u', 'l', 'a',
   ' ', 'E', 'x', 'p', ' ', '$', '\0'};
# 56
int jpeg_compressed_data_max_size   = 16777216;
# 57
int jpgcmpdatactsiz   = 0;
# 58
JOCTET jpeg_compressed_data[16777216]  ;
# 59
int loop_comp_quality  ;
# 60
int loop_comp_smooth  ;
# 61
int loop_comp_opt  ;
# 85
struct compression_parameter_s compression_parameter   = {100, 1, 0,
                                                          {{(float )0.0,
                                                            (float )0.0},
                                                           {(float )1.0,
                                                            (float )1.0}}};
# 98
struct decompression_parameter_s decompression_parameter   = {0, 0, 0, 0, 0};
# 104
static void compress(struct compression_parameter_s *cp ) 
{ int nlines ;
  struct jpeg_compress_struct cinfo  __attribute__((__heapify__)) ;
  struct jpeg_error_mgr jerr  __attribute__((__heapify__)) ;
  FILE * __restrict  tmp ;

  {
  {
# 120
  cinfo.err = jpeg_std_error(& jerr);
# 121
  jpeg_create_compress(& cinfo);
# 127
  cinfo.image_width = sliced_original_image.image_width;
# 128
  cinfo.image_height = sliced_original_image.image_height;
# 129
  cinfo.input_components = sliced_original_image.num_color_components;
# 130
  cinfo.in_color_space = sliced_original_image.color_space;
# 135
  jpeg_set_defaults(& cinfo);
# 137
  jpeg_set_quality(& cinfo, cp->quality, 1);
# 138
  cinfo.optimize_coding = cp->optimize_coding;
# 139
  cinfo.smoothing_factor = cp->smoothing_factor;
# 146
  spec_jpeg_mem_dest(& cinfo, jpeg_compressed_data,
                     jpeg_compressed_data_max_size, & jpgcmpdatactsiz);
# 155
  jpeg_start_compress(& cinfo, 1);
# 157
  nlines = (int )jpeg_write_scanlines(& cinfo, sliced_original_image.buffer,
                                      sliced_original_image.image_height);
  }
# 160
  if ((unsigned int )nlines != sliced_original_image.image_height) {
    {
# 161
    tmp = (FILE */* __restrict  */)get_stderr();
    {
# 105 "spec.work"
    tmp->__BLAST_FLAG = 1;
    {

    }
    }

    {
# 72
    if (! (tmp->__BLAST_FLAG == 1)) {
# 74
      __error__();
    }
    {

    }
    }
# 161 "spec_main.c"
    fprintf(tmp,
            (char const   */* __restrict  */)((char const   *)"Error: jpeg_write_scanlines returned %d not %d\n"),
            nlines, sliced_original_image.image_height);
# 165
    exit(1);
    {
# 129 "spec.work"
    while (1) {

    }
    {

    }
    }

    }
  }
  {
# 168 "spec_main.c"
  jpeg_finish_compress(& cinfo);
# 175
  jpeg_destroy_compress(& cinfo);
  }
# 176
  return;
}
}
# 178
static void decompress(struct decompression_parameter_s *dp ) 
{ int nlines ;
  struct jpeg_decompress_struct dinfo  __attribute__((__heapify__)) ;
  struct jpeg_error_mgr jerr  __attribute__((__heapify__)) ;

  {
  {
# 198
  dinfo.err = jpeg_std_error(& jerr);
# 199
  jpeg_create_decompress(& dinfo);
# 205
  spec_jpeg_mem_src(& dinfo, jpeg_compressed_data, jpgcmpdatactsiz);
# 210
  jpeg_read_header(& dinfo, 1);
# 213
  dinfo.quantize_colors = dp->quantize_colors;
# 214
  dinfo.desired_number_of_colors = dp->desired_number_of_colors;
# 215
  dinfo.two_pass_quantize = dp->two_pass_quantize;
# 216
  dinfo.dither_mode = dp->dither_mode;
# 217
  dinfo.do_fancy_upsampling = dp->do_fancy_upsampling;
# 220
  jpeg_start_decompress(& dinfo);
  }
# 223
  while (dinfo.output_scanline < dinfo.output_height) {
    {
# 224
    nlines = (int )jpeg_read_scanlines(& dinfo, decompressed_image.buffer +
                                                dinfo.output_scanline,
                                       dinfo.image_height -
                                       dinfo.output_scanline);
    }
  }
  {
# 231
  jpeg_finish_decompress(& dinfo);
# 237
  decompressed_image.image_height = dinfo.image_height;
# 238
  decompressed_image.image_width = dinfo.image_width;
# 245
  jpeg_destroy_decompress(& dinfo);
  }
# 246
  return;
}
}
# 249
static void print_parameters(char *image_filename___0 ,
                             struct compression_parameter_s *cp ,
                             struct decompression_parameter_s *dp ) 
{ int uncompressed_data_size ;

  {
  {
# 257
  uncompressed_data_size = (int )((sliced_original_image.image_width *
                                   sliced_original_image.image_height) *
                                  (unsigned int )sliced_original_image.num_color_components);
# 262
  printf((char const   */* __restrict  */)((char const   *)"\n"));
# 264
  printf((char const   */* __restrict  */)((char const   *)"image filename: \"%s\"\n"),
         image_filename___0);
# 265
  printf((char const   */* __restrict  */)((char const   *)"compression statistics:\n"));
# 266
  printf((char const   */* __restrict  */)((char const   *)"\tuncompressed data size:   %d\n"),
         uncompressed_data_size);
# 267
  printf((char const   */* __restrict  */)((char const   *)"\tcompressed data size:   %d\n"),
         jpgcmpdatactsiz);
# 270
  printf((char const   */* __restrict  */)((char const   *)"compression parameters:\n"));
# 271
  printf((char const   */* __restrict  */)((char const   *)"\tquality\t        : %d\n"),
         cp->quality);
# 272
  printf((char const   */* __restrict  */)((char const   *)"\toptimize_coding : %d\n"),
         cp->optimize_coding);
# 273
  printf((char const   */* __restrict  */)((char const   *)"\tsmoothing_factor: %d\n"),
         cp->smoothing_factor);
# 274
  printf((char const   */* __restrict  */)((char const   *)"\tsubimage    \t: ul(%g,%g) lr(%g,%g)\n"),
         cp->subimage.upper_left.x, cp->subimage.upper_left.y,
         cp->subimage.lower_right.x, cp->subimage.lower_right.y);
# 280
  printf((char const   */* __restrict  */)((char const   *)"decompression parameters:\n"));
# 281
  printf((char const   */* __restrict  */)((char const   *)"\tquantize_colors         : %d\n"),
         dp->quantize_colors);
# 282
  printf((char const   */* __restrict  */)((char const   *)"\tdo_fancy_upsampling     : %d\n"),
         dp->do_fancy_upsampling);
# 283
  printf((char const   */* __restrict  */)((char const   *)"\tdesired_number_of_colors: %d\n"),
         dp->desired_number_of_colors);
# 284
  printf((char const   */* __restrict  */)((char const   *)"\ttwo_pass_quantize       : %d\n"),
         dp->two_pass_quantize);
# 285
  printf((char const   */* __restrict  */)((char const   *)"\tdither_mode             : %d\n"),
         dp->dither_mode);
  }
# 286
  return;
}
}
# 288
static void go_execute_compression(void) 
{ FILE * __restrict  tmp ;

  {
# 292
  if ((unsigned int )image_filename == (unsigned int )((char *)0)) {
    {
# 293
    tmp = (FILE */* __restrict  */)get_stderr();
    {
# 105 "spec.work"
    tmp->__BLAST_FLAG = 1;
    {

    }
    }

    {
# 56
    if (! (tmp->__BLAST_FLAG == 1)) {
# 58
      __error__();
    }
    {

    }
    }
# 293 "spec_main.c"
    fprintf(tmp,
            (char const   */* __restrict  */)((char const   *)"Error: have not defined -image_file\n"));
# 294
    Usage();
# 295
    exit(1);
    {
# 129 "spec.work"
    while (1) {

    }
    {

    }
    }

    }
  }
  {
# 298 "spec_main.c"
  spec_free_subimage(& sliced_original_image);
# 299
  spec_define_subimage_fp(& original_image, & sliced_original_image,
                          compression_parameter.subimage.upper_left.x,
                          compression_parameter.subimage.upper_left.y,
                          compression_parameter.subimage.lower_right.x,
                          compression_parameter.subimage.lower_right.y);
# 308
  compress(& compression_parameter);
  }
# 309
  if (verbose_flag) {
    {
# 310
    print_parameters(image_filename, & compression_parameter,
                     & decompression_parameter);
    }
  }
# 315
  return;
}
}
# 318
static void go_execute_decompression(void) 
{ 

  {
  {
# 323
  decompress(& decompression_parameter);
# 324
  spec_difference_images(& sliced_original_image, & decompressed_image,
                         & difference_image, y_stride, x_stride);
  }
# 330
  if (checksum_flag) {
    {
# 331
    spec_checksum_image(& decompressed_image, y_stride, x_stride);
    }
  }
# 336
  return;
}
}
# 338
static void go_execute_compression_and_decompression(void) 
{ 

  {
  {
# 342
  go_execute_compression();
# 343
  go_execute_decompression();
  }
# 346
  if (debug_flag) {
    {
# 347
    spec_view_image("new_original_image.ppm", "", & original_image);
# 348
    spec_view_image("new_sliced_original_image.ppm", "", & sliced_original_image);
# 349
    spec_view_image("new_decompressed_image.ppm", "", & decompressed_image);
# 350
    spec_view_image("new_difference_image.ppm", "", & difference_image);
    }
  }
# 353
  return;
}
}
# 359
void Usage(void) 
{ FILE * __restrict  tmp ;

  {
  {
# 362
  tmp = (FILE */* __restrict  */)get_stderr();
  {
# 105 "spec.work"
  tmp->__BLAST_FLAG = 1;
  {

  }
  }

  {
# 56
  if (! (tmp->__BLAST_FLAG == 1)) {
# 58
    __error__();
  }
  {

  }
  }
# 362 "spec_main.c"
  fprintf(tmp,
          (char const   */* __restrict  */)((char const   *)"spec_jpeg - prototype JPEG benchmark for SPEC95\narguments:\n    -GO\n    \tactually perform a JPEG compression and decompression cycle,\n    \tevaluating results, using parameters specified to the left\n    -GO.compress\n    -GO.decompress\n    \texecute compression and decompression independently,\n    \te.g. when benchmarking, to balance weightings\n\n    -image_file\t<filename>\n    -subimage ulx uly rlx rly\n    \t4 FP values specifying coordinates of upper left (UL)\n    \tand lower right (LR) corners of subimage,\n    \twhere (0,0) is UL and (1,1) are UL and LR corners\n    \tof original image.\n\n    -compression.quality <0-100>\n    \tlowest..highest quality\n    -compression.optimize_coding <0/1>\n    \tdo not/do compute optimum Huffman coding tables\n    -compression.smoothing_factor <0-100>\n    \tminimal..maximal smoothing\n\n    -decompression.quantize_colors <0/1>\n    -decompression.do_fancy_upsampling <0/1>\n    -decompression.desired_number_of_colors <n>\n    \tnumber of colours to quantize to\n    -decompression.two_pass_quantize <0/1>\n    -decompression.dither_mode <mode>\n    \tNONE, ORDERED, or FS\n\n    -difference.image <0/1>\n    \tcalculate the difference of the original and decompressed images\n    -difference.histogram <0/1>\n    \tprint a histogram of RGB differences\n    -difference.L1_norm <0/1>\n    \tcalculate an L1 norm (sum of absolute values of differences)\n    -difference.L2_norm <0/1>\n    \tcalculate an L2 norm (sum of squares of differences)\n    -difference.row_stride <n>\n    -difference.row_stride <n>\n    \tonly look at ever Nth row or column\n    \tas a quick and dirty check\n\n    -checksum <0/1>\n    \tcalculate simple XOR  checksum of the image\n    \tusing row and column strides defined above\n\n    Miscellaneous options:\n\t-help\n\t-usage\n\t    print this message\n\t-verbose <0/1>\n    \t-comment <comment-token>\n    \t-comment.begin ... -comment.end\n    \t-end\n    \t    stop command line parsing\n    \t-debug <0/1>\n    \t    enables debugging (if program was compiled with it)\n\n"));
  }
# 424
  return;
}
}
# 434
static int parse_args(char **argv , int argstart ) 
{ int i ;
  int go ;
  float ulx ;
  float uly ;
  float lrx ;
  float lry ;
  FILE * __restrict  tmp ;
  int *tmp___0 ;
  FILE * __restrict  tmp___1 ;
  int *tmp___2 ;
  FILE * __restrict  tmp___3 ;
  FILE * __restrict  tmp___4 ;
  FILE * __restrict  tmp___5 ;
  FILE * __restrict  tmp___6 ;
  FILE * __restrict  tmp___7 ;
  int tmp___8 ;
  int tmp___9 ;
  int tmp___10 ;
  FILE * __restrict  tmp___11 ;
  int tmp___12 ;
  FILE * __restrict  tmp___13 ;
  int tmp___14 ;
  int tmp___15 ;
  int tmp___16 ;
  int tmp___17 ;
  int tmp___18 ;
  int tmp___19 ;
  int tmp___20 ;
  int tmp___21 ;
  int tmp___22 ;
  int tmp___23 ;
  int tmp___24 ;
  int tmp___25 ;
  int tmp___26 ;
  int tmp___27 ;
  int tmp___28 ;
  int tmp___29 ;
  int tmp___30 ;
  int tmp___31 ;
  int tmp___32 ;
  int tmp___33 ;
  int tmp___34 ;
  int tmp___35 ;
  int tmp___36 ;
  int tmp___37 ;
  int tmp___38 ;
  int tmp___39 ;
  int tmp___40 ;
  int tmp___41 ;
  int tmp___42 ;
  FILE * __restrict  tmp___43 ;

  {
  {
# 438
  i = argstart;
  }
# 448
  while ((*(argv + i))) {
    {
# 451
    go = 0;
# 456
    tmp___42 = strcmp((char const   *)(*(argv + i)),
                      (char const   *)"-image_file");
    }
# 456
    if (tmp___42) {
      {
# 473
      tmp___41 = strcmp((char const   *)(*(argv + i)),
                        (char const   *)"-subimage");
      }
# 473
      if (tmp___41) {
        {
# 506
        tmp___40 = strcmp((char const   *)(*(argv + i)),
                          (char const   *)"-compression.quality");
        }
# 506
        if (tmp___40) {
          {
# 509
          tmp___39 = strcmp((char const   *)(*(argv + i)),
                            (char const   *)"-compression.optimize_coding");
          }
# 509
          if (tmp___39) {
            {
# 512
            tmp___38 = strcmp((char const   *)(*(argv + i)),
                              (char const   *)"-compression.smoothing_factor");
            }
# 512
            if (tmp___38) {
              {
# 515
              tmp___37 = strcmp((char const   *)(*(argv + i)),
                                (char const   *)"-compression.smoothing_factor");
              }
# 515
              if (tmp___37) {
                {
# 521
                tmp___36 = strcmp((char const   *)(*(argv + i)),
                                  (char const   *)"-decompression.quantize_colors");
                }
# 521
                if (tmp___36) {
                  {
# 524
                  tmp___35 = strcmp((char const   *)(*(argv + i)),
                                    (char const   *)"-decompression.do_fancy_upsampling");
                  }
# 524
                  if (tmp___35) {
                    {
# 527
                    tmp___34 = strcmp((char const   *)(*(argv + i)),
                                      (char const   *)"-decompression.desired_number_of_colors");
                    }
# 527
                    if (tmp___34) {
                      {
# 530
                      tmp___33 = strcmp((char const   *)(*(argv + i)),
                                        (char const   *)"-decompression.two_pass_quantize");
                      }
# 530
                      if (tmp___33) {
                        {
# 533
                        tmp___32 = strcmp((char const   *)(*(argv + i)),
                                          (char const   *)"-decompression.dither_mode");
                        }
# 533
                        if (tmp___32) {
                          {
# 557
                          tmp___31 = strcmp((char const   *)(*(argv + i)),
                                            (char const   *)"-difference.image");
                          }
# 557
                          if (tmp___31) {
                            {
# 560
                            tmp___30 = strcmp((char const   *)(*(argv + i)),
                                              (char const   *)"-difference.x_stride");
                            }
# 560
                            if (tmp___30) {
                              {
# 563
                              tmp___29 = strcmp((char const   *)(*(argv + i)),
                                                (char const   *)"-difference.y_stride");
                              }
# 563
                              if (tmp___29) {
                                {
# 566
                                tmp___28 = strcmp((char const   *)(*(argv + i)),
                                                  (char const   *)"-difference.histogram");
                                }
# 566
                                if (tmp___28) {
                                  {
# 569
                                  tmp___27 = strcmp((char const   *)(*(argv + i)),
                                                    (char const   *)"-difference.L1_norm");
                                  }
# 569
                                  if (tmp___27) {
                                    {
# 572
                                    tmp___26 = strcmp((char const   *)(*(argv +
                                                                         i)),
                                                      (char const   *)"-difference.L2_norm");
                                    }
# 572
                                    if (tmp___26) {
                                      {
# 578
                                      tmp___25 = strcmp((char const   *)(*(argv +
                                                                           i)),
                                                        (char const   *)"-checksum");
                                      }
# 578
                                      if (tmp___25) {
                                        {
# 584
                                        tmp___24 = strcmp((char const   *)(*(argv +
                                                                             i)),
                                                          (char const   *)"-GO");
                                        }
# 584
                                        if (tmp___24) {
                                          {
# 588
                                          tmp___23 = strcmp((char const   *)(*(argv +
                                                                               i)),
                                                            (char const   *)"-GO.compress");
                                          }
# 588
                                          if (tmp___23) {
                                            {
# 592
                                            tmp___22 = strcmp((char const   *)(*(argv +
                                                                                 i)),
                                                              (char const   *)"-GO.decompress");
                                            }
# 592
                                            if (tmp___22) {
                                              {
# 596
                                              tmp___21 = strcmp((char const   *)(*(argv +
                                                                                   i)),
                                                                (char const   *)"-GO.findoptcomp");
                                              }
# 596
                                              if (tmp___21) {
                                                {
# 614
                                                tmp___20 = strcmp((char const   *)(*(argv +
                                                                                     i)),
                                                                  (char const   *)"-usage");
                                                }
# 614
                                                if (tmp___20) {
                                                  {
# 617
                                                  tmp___19 = strcmp((char const   *)(*(argv +
                                                                                       i)),
                                                                    (char const   *)"-help");
                                                  }
# 617
                                                  if (tmp___19) {
                                                    {
# 620
                                                    tmp___18 = strcmp((char const   *)(*(argv +
                                                                                         i)),
                                                                      (char const   *)"-debug");
                                                    }
# 620
                                                    if (tmp___18) {
                                                      {
# 623
                                                      tmp___17 = strcmp((char const   *)(*(argv +
                                                                                           i)),
                                                                        (char const   *)"-verbose");
                                                      }
# 623
                                                      if (tmp___17) {
                                                        {
# 626
                                                        tmp___16 = strcmp((char const   *)(*(argv +
                                                                                             i)),
                                                                          (char const   *)"-comment");
                                                        }
# 626
                                                        if (tmp___16) {
                                                          {
# 630
                                                          tmp___15 = strcmp((char const   *)(*(argv +
                                                                                               i)),
                                                                            (char const   *)"-comment.begin");
                                                          }
# 630
                                                          if (tmp___15) {
                                                            {
# 644
                                                            tmp___14 = strcmp((char const   *)(*(argv +
                                                                                                 i)),
                                                                              (char const   *)"-end");
                                                            }
# 644
                                                            if (tmp___14) {
                                                              {
# 651
                                                              tmp___13 = (FILE */* __restrict  */)get_stderr();
                                                              {
# 105 "spec.work"
                                                              tmp___13->__BLAST_FLAG = 1;
                                                              {

                                                              }
                                                              }

                                                              {
# 64
                                                              if (! (tmp___13->__BLAST_FLAG ==
                                                                     1)) {
# 66
                                                                __error__();
                                                              }
                                                              {

                                                              }
                                                              }
# 651 "spec_main.c"
                                                              fprintf(tmp___13,
                                                                      (char const   */* __restrict  */)((char const   *)"Unrecognized argument <%s>\n"),
                                                                      (*(argv +
                                                                         i)));
# 652
                                                              Usage();
# 653
                                                              exit(1);
                                                              {
# 129 "spec.work"
                                                              while (1) {

                                                              }
                                                              {

                                                              }
                                                              }

                                                              }
                                                            } else {
                                                              {
# 645 "spec_main.c"
                                                              exit(0);
                                                              {
# 129 "spec.work"
                                                              while (1) {

                                                              }
                                                              {

                                                              }
                                                              }

                                                              }
                                                            }
                                                          } else {
# 632 "spec_main.c"
                                                            while (1) {
                                                              {
# 633
                                                              i ++;
                                                              }
# 634
                                                              if ((unsigned int )(*(argv +
                                                                                    i)) ==
                                                                  (unsigned int )((char *)0)) {
                                                                {
# 635
                                                                tmp___11 = (FILE */* __restrict  */)get_stderr();
                                                                {
# 105 "spec.work"
                                                                tmp___11->__BLAST_FLAG = 1;
                                                                {

                                                                }
                                                                }

                                                                {
# 56
                                                                if (! (tmp___11->__BLAST_FLAG ==
                                                                       1)) {
# 58
                                                                  __error__();
                                                                }
                                                                {

                                                                }
                                                                }
# 635 "spec_main.c"
                                                                fprintf(tmp___11,
                                                                        (char const   */* __restrict  */)((char const   *)"Error: -comment.begin without a -comment.end\n"));
# 636
                                                                Usage();
# 637
                                                                exit(1);
                                                                {
# 129 "spec.work"
                                                                while (1) {

                                                                }
                                                                {

                                                                }
                                                                }

                                                                }
                                                              }
                                                              {
# 639 "spec_main.c"
                                                              tmp___12 = strcmp((char const   *)(*(argv +
                                                                                                   i)),
                                                                                (char const   *)"-comment.end");
                                                              }
# 639
                                                              if (! tmp___12) {
# 640
                                                                break;
                                                              }
                                                            }
                                                          }
                                                        } else {
                                                          {
# 628
                                                          i ++;
                                                          }
                                                        }
                                                      } else {
                                                        {
# 624
                                                        i ++;
# 624
                                                        verbose_flag = atoi((char const   *)(*(argv +
                                                                                               i)));
                                                        }
                                                      }
                                                    } else {
                                                      {
# 621
                                                      i ++;
# 621
                                                      debug_flag = atoi((char const   *)(*(argv +
                                                                                           i)));
                                                      }
                                                    }
                                                  } else {
                                                    {
# 618
                                                    Usage();
                                                    }
                                                  }
                                                } else {
                                                  {
# 615
                                                  Usage();
                                                  }
                                                }
                                              } else {
                                                {
# 597
                                                loop_comp_quality = compression_parameter.quality;
# 598
                                                loop_comp_smooth = compression_parameter.smoothing_factor;
# 599
                                                compression_parameter.quality = loop_comp_quality;
                                                }
# 599
                                                while (compression_parameter.quality >
                                                       10) {
                                                  {
# 600
                                                  compression_parameter.smoothing_factor = loop_comp_smooth;
                                                  }
# 600
                                                  while (compression_parameter.smoothing_factor >
                                                         10) {
                                                    {
# 602
                                                    compression_parameter.optimize_coding = 0;
# 603
                                                    go = 1;
# 604
                                                    go_execute_compression_and_decompression();
# 605
                                                    compression_parameter.optimize_coding = 1;
# 606
                                                    go = 1;
# 607
                                                    go_execute_compression_and_decompression();
# 600
                                                    compression_parameter.smoothing_factor = compression_parameter.smoothing_factor -
                                                                                             10;
                                                    }
                                                  }
                                                  {
# 599
                                                  compression_parameter.quality = compression_parameter.quality -
                                                                                  10;
                                                  }
                                                }
                                              }
                                            } else {
                                              {
# 593
                                              go = 1;
# 594
                                              go_execute_decompression();
                                              }
                                            }
                                          } else {
                                            {
# 589
                                            go = 1;
# 590
                                            go_execute_compression();
                                            }
                                          }
                                        } else {
                                          {
# 585
                                          go = 1;
# 586
                                          go_execute_compression_and_decompression();
                                          }
                                        }
                                      } else {
                                        {
# 579
                                        i ++;
# 579
                                        checksum_flag = atoi((char const   *)(*(argv +
                                                                                i)));
                                        }
                                      }
                                    } else {
                                      {
# 573
                                      i ++;
# 573
                                      L2_norm_flag = atoi((char const   *)(*(argv +
                                                                             i)));
                                      }
                                    }
                                  } else {
                                    {
# 570
                                    i ++;
# 570
                                    L1_norm_flag = atoi((char const   *)(*(argv +
                                                                           i)));
                                    }
                                  }
                                } else {
                                  {
# 567
                                  i ++;
# 567
                                  histogram_flag = atoi((char const   *)(*(argv +
                                                                           i)));
                                  }
                                }
                              } else {
                                {
# 564
                                i ++;
# 564
                                y_stride = atoi((char const   *)(*(argv + i)));
                                }
                              }
                            } else {
                              {
# 561
                              i ++;
# 561
                              x_stride = atoi((char const   *)(*(argv + i)));
                              }
                            }
                          } else {
                            {
# 558
                            i ++;
# 558
                            difference_flag = atoi((char const   *)(*(argv + i)));
                            }
                          }
                        } else {
                          {
# 534
                          i ++;
# 535
                          tmp___10 = strcmp((char const   *)(*(argv + i)),
                                            (char const   *)"NONE");
                          }
# 535
                          if (tmp___10) {
                            {
# 538
                            tmp___9 = strcmp((char const   *)(*(argv + i)),
                                             (char const   *)"ORDERED");
                            }
# 538
                            if (tmp___9) {
                              {
# 541
                              tmp___8 = strcmp((char const   *)(*(argv + i)),
                                               (char const   *)"FS");
                              }
# 541
                              if (tmp___8) {
                                {
# 545
                                tmp___3 = (FILE */* __restrict  */)get_stderr();
                                {
# 105 "spec.work"
                                tmp___3->__BLAST_FLAG = 1;
                                {

                                }
                                }

                                {
# 64
                                if (! (tmp___3->__BLAST_FLAG == 1)) {
# 66
                                  __error__();
                                }
                                {

                                }
                                }
# 545 "spec_main.c"
                                fprintf(tmp___3,
                                        (char const   */* __restrict  */)((char const   *)"Unrecognized -decompression.dither_mode <%s>\n"),
                                        (*(argv + i)));
# 546
                                tmp___4 = (FILE */* __restrict  */)get_stderr();
                                {
# 105 "spec.work"
                                tmp___4->__BLAST_FLAG = 1;
                                {

                                }
                                }

                                {
# 56
                                if (! (tmp___4->__BLAST_FLAG == 1)) {
# 58
                                  __error__();
                                }
                                {

                                }
                                }
# 546 "spec_main.c"
                                fprintf(tmp___4,
                                        (char const   */* __restrict  */)((char const   *)"Values supported are:\n"));
# 547
                                tmp___5 = (FILE */* __restrict  */)get_stderr();
                                {
# 105 "spec.work"
                                tmp___5->__BLAST_FLAG = 1;
                                {

                                }
                                }

                                {
# 56
                                if (! (tmp___5->__BLAST_FLAG == 1)) {
# 58
                                  __error__();
                                }
                                {

                                }
                                }
# 547 "spec_main.c"
                                fprintf(tmp___5,
                                        (char const   */* __restrict  */)((char const   *)"    -decompression.dither_mode NONE\n"));
# 548
                                tmp___6 = (FILE */* __restrict  */)get_stderr();
                                {
# 105 "spec.work"
                                tmp___6->__BLAST_FLAG = 1;
                                {

                                }
                                }

                                {
# 56
                                if (! (tmp___6->__BLAST_FLAG == 1)) {
# 58
                                  __error__();
                                }
                                {

                                }
                                }
# 548 "spec_main.c"
                                fprintf(tmp___6,
                                        (char const   */* __restrict  */)((char const   *)"    -decompression.dither_mode ORDERED\n"));
# 549
                                tmp___7 = (FILE */* __restrict  */)get_stderr();
                                {
# 105 "spec.work"
                                tmp___7->__BLAST_FLAG = 1;
                                {

                                }
                                }

                                {
# 56
                                if (! (tmp___7->__BLAST_FLAG == 1)) {
# 58
                                  __error__();
                                }
                                {

                                }
                                }
# 549 "spec_main.c"
                                fprintf(tmp___7,
                                        (char const   */* __restrict  */)((char const   *)"    -decompression.dither_mode FS\n"));
# 550
                                exit(1);
                                {
# 129 "spec.work"
                                while (1) {

                                }
                                {

                                }
                                }

                                }
                              } else {
                                {
# 542 "spec_main.c"
                                decompression_parameter.dither_mode = 2;
                                }
                              }
                            } else {
                              {
# 539
                              decompression_parameter.dither_mode = 1;
                              }
                            }
                          } else {
                            {
# 536
                            decompression_parameter.dither_mode = 0;
                            }
                          }
                        }
                      } else {
                        {
# 531
                        i ++;
# 531
                        decompression_parameter.two_pass_quantize = atoi((char const   *)(*(argv +
                                                                                            i)));
                        }
                      }
                    } else {
                      {
# 528
                      i ++;
# 528
                      decompression_parameter.desired_number_of_colors = atoi((char const   *)(*(argv +
                                                                                                 i)));
                      }
                    }
                  } else {
                    {
# 525
                    i ++;
# 525
                    decompression_parameter.do_fancy_upsampling = atoi((char const   *)(*(argv +
                                                                                          i)));
                    }
                  }
                } else {
                  {
# 522
                  i ++;
# 522
                  decompression_parameter.quantize_colors = atoi((char const   *)(*(argv +
                                                                                    i)));
                  }
                }
              } else {
                {
# 516
                i ++;
# 516
                compression_parameter.smoothing_factor = atoi((char const   *)(*(argv +
                                                                                 i)));
                }
              }
            } else {
              {
# 513
              i ++;
# 513
              compression_parameter.smoothing_factor = atoi((char const   *)(*(argv +
                                                                               i)));
              }
            }
          } else {
            {
# 510
            i ++;
# 510
            compression_parameter.optimize_coding = atoi((char const   *)(*(argv +
                                                                            i)));
            }
          }
        } else {
          {
# 507
          i ++;
# 507
          compression_parameter.quality = atoi((char const   *)(*(argv + i)));
          }
        }
      } else {
# 479
        if ((unsigned int )(*(argv + (i + 1))) == (unsigned int )((char *)0)) {
          {
# 480
          tmp = (FILE */* __restrict  */)get_stderr();
          {
# 105 "spec.work"
          tmp->__BLAST_FLAG = 1;
          {

          }
          }

          {
# 56
          if (! (tmp->__BLAST_FLAG == 1)) {
# 58
            __error__();
          }
          {

          }
          }
# 480 "spec_main.c"
          fprintf(tmp,
                  (char const   */* __restrict  */)((char const   *)"Expected 4 floating point parameters after -subimage\n"));
# 481
          Usage();
# 482
          exit(1);
          {
# 129 "spec.work"
          while (1) {

          }
          {

          }
          }

          }
        } else {
# 479 "spec_main.c"
          if ((unsigned int )(*(argv + (i + 2))) == (unsigned int )((char *)0)) {
            {
# 480
            tmp = (FILE */* __restrict  */)get_stderr();
            {
# 105 "spec.work"
            tmp->__BLAST_FLAG = 1;
            {

            }
            }

            {
# 56
            if (! (tmp->__BLAST_FLAG == 1)) {
# 58
              __error__();
            }
            {

            }
            }
# 480 "spec_main.c"
            fprintf(tmp,
                    (char const   */* __restrict  */)((char const   *)"Expected 4 floating point parameters after -subimage\n"));
# 481
            Usage();
# 482
            exit(1);
            {
# 129 "spec.work"
            while (1) {

            }
            {

            }
            }

            }
          } else {
# 479 "spec_main.c"
            if ((unsigned int )(*(argv + (i + 3))) == (unsigned int )((char *)0)) {
              {
# 480
              tmp = (FILE */* __restrict  */)get_stderr();
              {
# 105 "spec.work"
              tmp->__BLAST_FLAG = 1;
              {

              }
              }

              {
# 56
              if (! (tmp->__BLAST_FLAG == 1)) {
# 58
                __error__();
              }
              {

              }
              }
# 480 "spec_main.c"
              fprintf(tmp,
                      (char const   */* __restrict  */)((char const   *)"Expected 4 floating point parameters after -subimage\n"));
# 481
              Usage();
# 482
              exit(1);
              {
# 129 "spec.work"
              while (1) {

              }
              {

              }
              }

              }
            } else {
# 479 "spec_main.c"
              if ((unsigned int )(*(argv + (i + 4))) ==
                  (unsigned int )((char *)0)) {
                {
# 480
                tmp = (FILE */* __restrict  */)get_stderr();
                {
# 105 "spec.work"
                tmp->__BLAST_FLAG = 1;
                {

                }
                }

                {
# 56
                if (! (tmp->__BLAST_FLAG == 1)) {
# 58
                  __error__();
                }
                {

                }
                }
# 480 "spec_main.c"
                fprintf(tmp,
                        (char const   */* __restrict  */)((char const   *)"Expected 4 floating point parameters after -subimage\n"));
# 481
                Usage();
# 482
                exit(1);
                {
# 129 "spec.work"
                while (1) {

                }
                {

                }
                }

                }
              }
            }
          }
        }
        {
# 484 "spec_main.c"
        tmp___0 = __errno_location();
# 484
        (*tmp___0) = 0;
# 485
        ulx = (float )atof((char const   *)(*(argv + (i + 1))));
# 486
        uly = (float )atof((char const   *)(*(argv + (i + 2))));
# 487
        lrx = (float )atof((char const   *)(*(argv + (i + 3))));
# 488
        lry = (float )atof((char const   *)(*(argv + (i + 4))));
# 489
        i += 4;
# 491
        tmp___2 = __errno_location();
        }
# 491
        if ((*tmp___2) != 0) {
          {
# 492
          tmp___1 = (FILE */* __restrict  */)get_stderr();
          {
# 105 "spec.work"
          tmp___1->__BLAST_FLAG = 1;
          {

          }
          }

          {
# 56
          if (! (tmp___1->__BLAST_FLAG == 1)) {
# 58
            __error__();
          }
          {

          }
          }
# 492 "spec_main.c"
          fprintf(tmp___1,
                  (char const   */* __restrict  */)((char const   *)"Expected 4 floating point parameters after -subimage\n"));
# 493
          Usage();
# 494
          exit(1);
          {
# 129 "spec.work"
          while (1) {

          }
          {

          }
          }

          }
        }
        {
# 497 "spec_main.c"
        compression_parameter.subimage.upper_left.x = ulx;
# 498
        compression_parameter.subimage.upper_left.y = uly;
# 499
        compression_parameter.subimage.lower_right.x = lrx;
# 500
        compression_parameter.subimage.lower_right.y = lry;
        }
      }
    } else {
      {
# 458
      i ++;
# 458
      image_filename = (*(argv + i));
# 460
      spec_free_image(& original_image);
# 461
      spec_free_image(& decompressed_image);
# 462
      spec_free_image(& difference_image);
# 464
      spec_read_original_image(image_filename);
# 466
      spec_allocate_similar_image(& original_image, & decompressed_image);
# 467
      spec_allocate_similar_image(& original_image, & difference_image);
      }
    }
    {
# 448
    i ++;
    }
  }
# 657
  if (go == 0) {
    {
# 658
    tmp___43 = (FILE */* __restrict  */)get_stderr();
    {
# 105 "spec.work"
    tmp___43->__BLAST_FLAG = 1;
    {

    }
    }

    {
# 56
    if (! (tmp___43->__BLAST_FLAG == 1)) {
# 58
      __error__();
    }
    {

    }
    }
# 658 "spec_main.c"
    fprintf(tmp___43,
            (char const   */* __restrict  */)((char const   *)"Warning: no -GO argument\n"));
# 659
    go_execute_compression_and_decompression();
    }
  }
# 662
  return (i);
}
}
# 667
int main(int argc , char **argv ) 
{ 

  {
  __initialize__();
  {
# 670
  verbose_flag = 0;
# 671
  histogram_flag = 0;
# 672
  image_filename = (char *)0;
# 673
  L1_norm_flag = 1;
# 674
  L2_norm_flag = 1;
# 675
  difference_flag = 1;
# 676
  checksum_flag = 1;
# 677
  x_stride = 1;
# 678
  y_stride = 1;
# 680
  parse_args(argv, 1);
# 682
  exit(0);
  {
# 129 "spec.work"
  while (1) {

  }
  {

  }
  }

  }
# 682 "spec_main.c"
  return (0);
}
}
# 29 "jcapi.c"
void jpeg_create_compress(j_compress_ptr cinfo ) 
{ int i ;
  struct jpeg_error_mgr *err ;

  {
  {
# 38
  err = cinfo->err;
# 40
  memset((void *)cinfo, 0, sizeof((*cinfo)));
# 41
  cinfo->err = err;
# 43
  cinfo->is_decompressor = 0;
# 46
  jinit_memory_mgr((struct jpeg_common_struct *)cinfo);
# 49
  cinfo->progress = (struct jpeg_progress_mgr *)((void *)0);
# 50
  cinfo->dest = (struct jpeg_destination_mgr */* __attribute__((__rtti__)) */)((struct jpeg_destination_mgr *)((void *)0));
# 52
  cinfo->comp_info = (jpeg_component_info *)((void *)0);
# 54
  i = 0;
  }
# 54
  while (i < 4) {
    {
# 55
    cinfo->quant_tbl_ptrs[i] = (JQUANT_TBL *)((void *)0);
# 54
    i ++;
    }
  }
  {
# 57
  i = 0;
  }
# 57
  while (i < 4) {
    {
# 58
    cinfo->dc_huff_tbl_ptrs[i] = (JHUFF_TBL *)((void *)0);
# 59
    cinfo->ac_huff_tbl_ptrs[i] = (JHUFF_TBL *)((void *)0);
# 57
    i ++;
    }
  }
  {
# 62
  cinfo->input_gamma = 1.0;
# 65
  cinfo->global_state = 100;
  }
# 66
  return;
}
}
# 73
void jpeg_destroy_compress(j_compress_ptr cinfo ) 
{ 

  {
  {
# 76
  jpeg_destroy((struct jpeg_common_struct *)cinfo);
  }
# 77
  return;
}
}
# 92
void jpeg_suppress_tables(j_compress_ptr cinfo , boolean suppress ) 
{ int i ;
  JQUANT_TBL *qtbl ;
  JHUFF_TBL *htbl ;

  {
  {
# 99
  i = 0;
  }
# 99
  while (i < 4) {
    {
# 100
    qtbl = cinfo->quant_tbl_ptrs[i];
    }
# 100
    if ((unsigned int )qtbl != (unsigned int )((void *)0)) {
      {
# 101
      qtbl->sent_table = suppress;
      }
    }
    {
# 99
    i ++;
    }
  }
  {
# 104
  i = 0;
  }
# 104
  while (i < 4) {
    {
# 105
    htbl = cinfo->dc_huff_tbl_ptrs[i];
    }
# 105
    if ((unsigned int )htbl != (unsigned int )((void *)0)) {
      {
# 106
      htbl->sent_table = suppress;
      }
    }
    {
# 107
    htbl = cinfo->ac_huff_tbl_ptrs[i];
    }
# 107
    if ((unsigned int )htbl != (unsigned int )((void *)0)) {
      {
# 108
      htbl->sent_table = suppress;
      }
    }
    {
# 104
    i ++;
    }
  }
# 110
  return;
}
}
# 128
void jpeg_start_compress(j_compress_ptr cinfo , boolean write_all_tables ) 
{ 

  {
# 131
  if (cinfo->global_state != 100) {
    {
# 132
    (cinfo->err)->msg_code = 14;
# 132
    (cinfo->err)->msg_parm.i[0] = cinfo->global_state;
# 132
    ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
    }
  }
# 134
  if (write_all_tables) {
    {
# 135
    jpeg_suppress_tables(cinfo, 0);
    }
  }
  {
# 138
  ((*((cinfo->err)->reset_error_mgr)))((struct jpeg_common_struct *)cinfo);
# 139
  ((*((cinfo->dest)->init_destination)))(cinfo);
# 141
  jinit_master_compress(cinfo);
# 143
  ((*((cinfo->master)->prepare_for_pass)))(cinfo);
# 147
  cinfo->next_scanline = 0U;
  }
# 148
  if (cinfo->raw_data_in) {
    {
# 148
    cinfo->global_state = 102;
    }
  } else {
    {
# 148
    cinfo->global_state = 101;
    }
  }
# 149
  return;
}
}
# 167
JDIMENSION jpeg_write_scanlines(j_compress_ptr cinfo , JSAMPARRAY scanlines ,
                                JDIMENSION num_lines ) 
{ JDIMENSION row_ctr  __attribute__((__heapify__)) ;
  JDIMENSION rows_left ;

  {
# 174
  if (cinfo->global_state != 101) {
    {
# 175
    (cinfo->err)->msg_code = 14;
# 175
    (cinfo->err)->msg_parm.i[0] = cinfo->global_state;
# 175
    ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
    }
  }
# 176
  if (cinfo->next_scanline >= cinfo->image_height) {
    {
# 177
    (cinfo->err)->msg_code = 109;
# 177
    ((*((cinfo->err)->emit_message)))((struct jpeg_common_struct *)cinfo, -1);
    }
  }
# 180
  if ((unsigned int )cinfo->progress != (unsigned int )((void *)0)) {
    {
# 181
    (cinfo->progress)->pass_counter = (long )cinfo->next_scanline;
# 182
    (cinfo->progress)->pass_limit = (long )cinfo->image_height;
# 183
    ((*((cinfo->progress)->progress_monitor)))((struct jpeg_common_struct *)cinfo);
    }
  }
# 191
  if ((cinfo->master)->call_pass_startup) {
    {
# 192
    ((*((cinfo->master)->pass_startup)))(cinfo);
    }
  }
  {
# 195
  rows_left = cinfo->image_height - cinfo->next_scanline;
  }
# 196
  if (num_lines > rows_left) {
    {
# 197
    num_lines = rows_left;
    }
  }
  {
# 203
  row_ctr = 0U;
# 204
  ((*((cinfo->main)->process_data)))(cinfo, scanlines, & row_ctr, num_lines);
# 207
  cinfo->next_scanline = cinfo->next_scanline + row_ctr;
  }
# 208
  return (row_ctr);
}
}
# 217
JDIMENSION jpeg_write_raw_data(j_compress_ptr cinfo , JSAMPIMAGE data ,
                               JDIMENSION num_lines ) 
{ JDIMENSION mcu_ctr  __attribute__((__heapify__)) ;
  JDIMENSION lines_per_MCU_row ;

  {
# 224
  if (cinfo->global_state != 102) {
    {
# 225
    (cinfo->err)->msg_code = 14;
# 225
    (cinfo->err)->msg_parm.i[0] = cinfo->global_state;
# 225
    ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
    }
  }
# 226
  if (cinfo->next_scanline >= cinfo->image_height) {
    {
# 227
    (cinfo->err)->msg_code = 109;
# 227
    ((*((cinfo->err)->emit_message)))((struct jpeg_common_struct *)cinfo, -1);
    }
# 228
    return (0U);
  }
# 232
  if ((unsigned int )cinfo->progress != (unsigned int )((void *)0)) {
    {
# 233
    (cinfo->progress)->pass_counter = (long )cinfo->next_scanline;
# 234
    (cinfo->progress)->pass_limit = (long )cinfo->image_height;
# 235
    ((*((cinfo->progress)->progress_monitor)))((struct jpeg_common_struct *)cinfo);
    }
  }
# 243
  if ((cinfo->master)->call_pass_startup) {
    {
# 244
    ((*((cinfo->master)->pass_startup)))(cinfo);
    }
  }
  {
# 247
  lines_per_MCU_row = (unsigned int )(cinfo->max_v_samp_factor * 8);
  }
# 248
  if (num_lines < lines_per_MCU_row) {
    {
# 249
    (cinfo->err)->msg_code = 16;
# 249
    ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
    }
  }
  {
# 252
  mcu_ctr = 0U;
# 253
  ((*((cinfo->coef)->compress_data)))(cinfo, data, & mcu_ctr);
  }
# 257
  if (mcu_ctr != cinfo->MCUs_per_row) {
    {
# 258
    (cinfo->err)->msg_code = 17;
# 258
    ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
    }
  }
  {
# 261
  cinfo->next_scanline = cinfo->next_scanline + lines_per_MCU_row;
  }
# 262
  return (lines_per_MCU_row);
}
}
# 273
void jpeg_finish_compress(j_compress_ptr cinfo ) 
{ JDIMENSION iMCU_row ;
  JDIMENSION mcu_ctr  __attribute__((__heapify__)) ;

  {
# 278
  if (cinfo->global_state != 101) {
# 278
    if (cinfo->global_state != 102) {
      {
# 280
      (cinfo->err)->msg_code = 14;
# 280
      (cinfo->err)->msg_parm.i[0] = cinfo->global_state;
# 280
      ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
      }
    }
  }
# 281
  if (cinfo->next_scanline < cinfo->image_height) {
    {
# 282
    (cinfo->err)->msg_code = 59;
# 282
    ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
    }
  }
  {
# 285
  ((*((cinfo->master)->finish_pass)))(cinfo);
  }
# 288
  while (! (cinfo->master)->is_last_pass) {
    {
# 289
    ((*((cinfo->master)->prepare_for_pass)))(cinfo);
# 290
    iMCU_row = 0U;
    }
# 290
    while (iMCU_row < cinfo->total_iMCU_rows) {
# 291
      if ((unsigned int )cinfo->progress != (unsigned int )((void *)0)) {
        {
# 292
        (cinfo->progress)->pass_counter = (long )iMCU_row;
# 293
        (cinfo->progress)->pass_limit = (long )cinfo->total_iMCU_rows;
# 294
        ((*((cinfo->progress)->progress_monitor)))((struct jpeg_common_struct *)cinfo);
        }
      }
      {
# 299
      mcu_ctr = 0U;
# 300
      ((*((cinfo->coef)->compress_data)))(cinfo, (JSAMPARRAY *)((void *)0),
                                          & mcu_ctr);
      }
# 301
      if (mcu_ctr != cinfo->MCUs_per_row) {
        {
# 302
        (cinfo->err)->msg_code = 17;
# 302
        ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
        }
      }
      {
# 290
      iMCU_row ++;
      }
    }
    {
# 304
    ((*((cinfo->master)->finish_pass)))(cinfo);
    }
  }
  {
# 307
  ((*((cinfo->marker)->write_file_trailer)))(cinfo);
# 308
  ((*((cinfo->dest)->term_destination)))(cinfo);
# 310
  jpeg_abort((struct jpeg_common_struct *)cinfo);
  }
# 311
  return;
}
}
# 321
void jpeg_write_marker(j_compress_ptr cinfo , int marker ,
                       JOCTET const   *dataptr , unsigned int datalen ) 
{ 

  {
# 325
  if (cinfo->next_scanline != 0U) {
    {
# 328
    (cinfo->err)->msg_code = 14;
# 328
    (cinfo->err)->msg_parm.i[0] = cinfo->global_state;
# 328
    ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
    }
  } else {
# 325
    if (cinfo->global_state != 101) {
# 325
      if (cinfo->global_state != 102) {
        {
# 328
        (cinfo->err)->msg_code = 14;
# 328
        (cinfo->err)->msg_parm.i[0] = cinfo->global_state;
# 328
        ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
        }
      }
    }
  }
  {
# 330
  ((*((cinfo->marker)->write_any_marker)))(cinfo, marker, dataptr, datalen);
  }
# 331
  return;
}
}
# 355
void jpeg_write_tables(j_compress_ptr cinfo ) 
{ 

  {
# 358
  if (cinfo->global_state != 100) {
    {
# 359
    (cinfo->err)->msg_code = 14;
# 359
    (cinfo->err)->msg_parm.i[0] = cinfo->global_state;
# 359
    ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
    }
  }
  {
# 362
  ((*((cinfo->err)->reset_error_mgr)))((struct jpeg_common_struct *)cinfo);
# 363
  ((*((cinfo->dest)->init_destination)))(cinfo);
# 365
  jinit_marker_writer(cinfo);
# 367
  ((*((cinfo->marker)->write_tables_only)))(cinfo);
# 369
  ((*((cinfo->dest)->term_destination)))(cinfo);
# 371
  jpeg_abort((struct jpeg_common_struct *)cinfo);
  }
# 372
  return;
}
}
# 380
void jpeg_abort_compress(j_compress_ptr cinfo ) 
{ 

  {
  {
# 383
  jpeg_abort((struct jpeg_common_struct *)cinfo);
  }
# 384
  return;
}
}
# 22 "jcparam.c"
void jpeg_add_quant_table(j_compress_ptr cinfo , int which_tbl ,
                          unsigned int const   *basic_table , int scale_factor ,
                          boolean force_baseline ) 
{ JQUANT_TBL **qtblptr ;
  int i ;
  long temp ;

  {
  {
# 32
  qtblptr = & cinfo->quant_tbl_ptrs[which_tbl];
  }
# 37
  if (cinfo->global_state != 100) {
    {
# 38
    (cinfo->err)->msg_code = 14;
# 38
    (cinfo->err)->msg_parm.i[0] = cinfo->global_state;
# 38
    ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
    }
  }
# 40
  if ((unsigned int )(*qtblptr) == (unsigned int )((void *)0)) {
    {
# 41
    (*qtblptr) = jpeg_alloc_quant_table((struct jpeg_common_struct *)cinfo);
    }
  }
  {
# 43
  i = 0;
  }
# 43
  while (i < 64) {
    {
# 44
    temp = ((long )(*(basic_table + i)) * (long )scale_factor + 50L) / 100L;
    }
# 46
    if (temp <= 0L) {
      {
# 46
      temp = 1L;
      }
    }
# 47
    if (temp > 32767L) {
      {
# 47
      temp = 32767L;
      }
    }
# 48
    if (force_baseline) {
# 48
      if (temp > 255L) {
        {
# 49
        temp = 255L;
        }
      }
    }
    {
# 50
    ((*qtblptr))->quantval[i] = (unsigned short )temp;
# 43
    i ++;
    }
  }
  {
# 54
  ((*qtblptr))->sent_table = 0;
  }
# 55
  return;
}
}
# 72
static unsigned int const   std_luminance_quant_tbl[64]   = 
# 72
  {(unsigned int const   )16, (unsigned int const   )11,
   (unsigned int const   )12, (unsigned int const   )14,
   (unsigned int const   )12, (unsigned int const   )10,
   (unsigned int const   )16, (unsigned int const   )14,
   (unsigned int const   )13, (unsigned int const   )14,
   (unsigned int const   )18, (unsigned int const   )17,
   (unsigned int const   )16, (unsigned int const   )19,
   (unsigned int const   )24, (unsigned int const   )40,
   (unsigned int const   )26, (unsigned int const   )24,
   (unsigned int const   )22, (unsigned int const   )22,
   (unsigned int const   )24, (unsigned int const   )49,
   (unsigned int const   )35, (unsigned int const   )37,
   (unsigned int const   )29, (unsigned int const   )40,
   (unsigned int const   )58, (unsigned int const   )51,
   (unsigned int const   )61, (unsigned int const   )60,
   (unsigned int const   )57, (unsigned int const   )51,
   (unsigned int const   )56, (unsigned int const   )55,
   (unsigned int const   )64, (unsigned int const   )72,
   (unsigned int const   )92, (unsigned int const   )78,
   (unsigned int const   )64, (unsigned int const   )68,
   (unsigned int const   )87, (unsigned int const   )69,
   (unsigned int const   )55, (unsigned int const   )56,
   (unsigned int const   )80, (unsigned int const   )109,
   (unsigned int const   )81, (unsigned int const   )87,
   (unsigned int const   )95, (unsigned int const   )98,
   (unsigned int const   )103, (unsigned int const   )104,
   (unsigned int const   )103, (unsigned int const   )62,
   (unsigned int const   )77, (unsigned int const   )113,
   (unsigned int const   )121, (unsigned int const   )112,
   (unsigned int const   )100, (unsigned int const   )120,
   (unsigned int const   )92, (unsigned int const   )101,
   (unsigned int const   )103, (unsigned int const   )99};
# 82
static unsigned int const   std_chrominance_quant_tbl[64]   = 
# 82
  {(unsigned int const   )17, (unsigned int const   )18,
   (unsigned int const   )18, (unsigned int const   )24,
   (unsigned int const   )21, (unsigned int const   )24,
   (unsigned int const   )47, (unsigned int const   )26,
   (unsigned int const   )26, (unsigned int const   )47,
   (unsigned int const   )99, (unsigned int const   )66,
   (unsigned int const   )56, (unsigned int const   )66,
   (unsigned int const   )99, (unsigned int const   )99,
   (unsigned int const   )99, (unsigned int const   )99,
   (unsigned int const   )99, (unsigned int const   )99,
   (unsigned int const   )99, (unsigned int const   )99,
   (unsigned int const   )99, (unsigned int const   )99,
   (unsigned int const   )99, (unsigned int const   )99,
   (unsigned int const   )99, (unsigned int const   )99,
   (unsigned int const   )99, (unsigned int const   )99,
   (unsigned int const   )99, (unsigned int const   )99,
   (unsigned int const   )99, (unsigned int const   )99,
   (unsigned int const   )99, (unsigned int const   )99,
   (unsigned int const   )99, (unsigned int const   )99,
   (unsigned int const   )99, (unsigned int const   )99,
   (unsigned int const   )99, (unsigned int const   )99,
   (unsigned int const   )99, (unsigned int const   )99,
   (unsigned int const   )99, (unsigned int const   )99,
   (unsigned int const   )99, (unsigned int const   )99,
   (unsigned int const   )99, (unsigned int const   )99,
   (unsigned int const   )99, (unsigned int const   )99,
   (unsigned int const   )99, (unsigned int const   )99,
   (unsigned int const   )99, (unsigned int const   )99,
   (unsigned int const   )99, (unsigned int const   )99,
   (unsigned int const   )99, (unsigned int const   )99,
   (unsigned int const   )99, (unsigned int const   )99,
   (unsigned int const   )99, (unsigned int const   )99};
# 58
void jpeg_set_linear_quality(j_compress_ptr cinfo , int scale_factor ,
                             boolean force_baseline ) 
{ 

  {
  {
# 94
  jpeg_add_quant_table(cinfo, 0, std_luminance_quant_tbl, scale_factor,
                       force_baseline);
# 96
  jpeg_add_quant_table(cinfo, 1, std_chrominance_quant_tbl, scale_factor,
                       force_baseline);
  }
# 98
  return;
}
}
# 101
int jpeg_quality_scaling(int quality ) 
{ 

  {
# 109
  if (quality <= 0) {
    {
# 109
    quality = 1;
    }
  }
# 110
  if (quality > 100) {
    {
# 110
    quality = 100;
    }
  }
# 118
  if (quality < 50) {
    {
# 119
    quality = 5000 / quality;
    }
  } else {
    {
# 121
    quality = 200 - quality * 2;
    }
  }
# 123
  return (quality);
}
}
# 127
void jpeg_set_quality(j_compress_ptr cinfo , int quality ,
                      boolean force_baseline ) 
{ 

  {
  {
# 136
  quality = jpeg_quality_scaling(quality);
# 139
  jpeg_set_linear_quality(cinfo, quality, force_baseline);
  }
# 140
  return;
}
}
# 150
static void add_huff_table(j_compress_ptr cinfo , JHUFF_TBL **htblptr ,
                           UINT8 const   *bits , UINT8 const   *val ,
                           int valLen ) 
{ int bytesToCopy ;

  {
# 155
  if ((unsigned int )(*htblptr) == (unsigned int )((void *)0)) {
    {
# 156
    (*htblptr) = jpeg_alloc_huff_table((struct jpeg_common_struct *)cinfo);
    }
  }
  {
# 158
  memcpy((void */* __restrict  */)((void *)(((*htblptr))->bits)),
         (void const   */* __restrict  */)((void const   *)bits),
         sizeof(((*htblptr))->bits));
# 162
  bytesToCopy = (int )sizeof(((*htblptr))->huffval);
  }
# 163
  if (valLen < bytesToCopy) {
    {
# 164
    printf((char const   */* __restrict  */)((char const   *)"caught buffer underrun (reading %d bytes from %d byte array)\n"),
           bytesToCopy, valLen);
# 166
    memset((void *)(((*htblptr))->huffval), 0, (unsigned int )bytesToCopy);
# 167
    bytesToCopy = valLen;
    }
  }
  {
# 169
  memcpy((void */* __restrict  */)((void *)(((*htblptr))->huffval)),
         (void const   */* __restrict  */)((void const   *)val),
         (unsigned int )bytesToCopy);
# 173
  ((*htblptr))->sent_table = 0;
  }
# 174
  return;
}
}
# 182
static void std_huff_tables(j_compress_ptr cinfo ) ;
# 182
static UINT8 const   bits_dc_luminance[17]   = 
# 182
  {(UINT8 const   )((unsigned char )0), (UINT8 const   )((unsigned char )0),
   (UINT8 const   )((unsigned char )1), (UINT8 const   )((unsigned char )5),
   (UINT8 const   )((unsigned char )1), (UINT8 const   )((unsigned char )1),
   (UINT8 const   )((unsigned char )1), (UINT8 const   )((unsigned char )1),
   (UINT8 const   )((unsigned char )1), (UINT8 const   )((unsigned char )1),
   (UINT8 const   )((unsigned char )0), (UINT8 const   )((unsigned char )0),
   (UINT8 const   )((unsigned char )0), (UINT8 const   )((unsigned char )0),
   (UINT8 const   )((unsigned char )0), (UINT8 const   )((unsigned char )0),
   (UINT8 const   )((unsigned char )0)};
# 184
static UINT8 const   val_dc_luminance[12]   = 
# 184
  {(UINT8 const   )((unsigned char )0), (UINT8 const   )((unsigned char )1),
   (UINT8 const   )((unsigned char )2), (UINT8 const   )((unsigned char )3),
   (UINT8 const   )((unsigned char )4), (UINT8 const   )((unsigned char )5),
   (UINT8 const   )((unsigned char )6), (UINT8 const   )((unsigned char )7),
   (UINT8 const   )((unsigned char )8), (UINT8 const   )((unsigned char )9),
   (UINT8 const   )((unsigned char )10), (UINT8 const   )((unsigned char )11)};
# 187
static UINT8 const   bits_dc_chrominance[17]   = 
# 187
  {(UINT8 const   )((unsigned char )0), (UINT8 const   )((unsigned char )0),
   (UINT8 const   )((unsigned char )3), (UINT8 const   )((unsigned char )1),
   (UINT8 const   )((unsigned char )1), (UINT8 const   )((unsigned char )1),
   (UINT8 const   )((unsigned char )1), (UINT8 const   )((unsigned char )1),
   (UINT8 const   )((unsigned char )1), (UINT8 const   )((unsigned char )1),
   (UINT8 const   )((unsigned char )1), (UINT8 const   )((unsigned char )1),
   (UINT8 const   )((unsigned char )0), (UINT8 const   )((unsigned char )0),
   (UINT8 const   )((unsigned char )0), (UINT8 const   )((unsigned char )0),
   (UINT8 const   )((unsigned char )0)};
# 189
static UINT8 const   val_dc_chrominance[12]   = 
# 189
  {(UINT8 const   )((unsigned char )0), (UINT8 const   )((unsigned char )1),
   (UINT8 const   )((unsigned char )2), (UINT8 const   )((unsigned char )3),
   (UINT8 const   )((unsigned char )4), (UINT8 const   )((unsigned char )5),
   (UINT8 const   )((unsigned char )6), (UINT8 const   )((unsigned char )7),
   (UINT8 const   )((unsigned char )8), (UINT8 const   )((unsigned char )9),
   (UINT8 const   )((unsigned char )10), (UINT8 const   )((unsigned char )11)};
# 192
static UINT8 const   bits_ac_luminance[17]   = 
# 192
  {(UINT8 const   )((unsigned char )0), (UINT8 const   )((unsigned char )0),
   (UINT8 const   )((unsigned char )2), (UINT8 const   )((unsigned char )1),
   (UINT8 const   )((unsigned char )3), (UINT8 const   )((unsigned char )3),
   (UINT8 const   )((unsigned char )2), (UINT8 const   )((unsigned char )4),
   (UINT8 const   )((unsigned char )3), (UINT8 const   )((unsigned char )5),
   (UINT8 const   )((unsigned char )5), (UINT8 const   )((unsigned char )4),
   (UINT8 const   )((unsigned char )4), (UINT8 const   )((unsigned char )0),
   (UINT8 const   )((unsigned char )0), (UINT8 const   )((unsigned char )1),
   (UINT8 const   )((unsigned char )125)};
# 194
static UINT8 const   val_ac_luminance[162]   = 
# 194
  {(UINT8 const   )((unsigned char )1), (UINT8 const   )((unsigned char )2),
   (UINT8 const   )((unsigned char )3), (UINT8 const   )((unsigned char )0),
   (UINT8 const   )((unsigned char )4), (UINT8 const   )((unsigned char )17),
   (UINT8 const   )((unsigned char )5), (UINT8 const   )((unsigned char )18),
   (UINT8 const   )((unsigned char )33), (UINT8 const   )((unsigned char )49),
   (UINT8 const   )((unsigned char )65), (UINT8 const   )((unsigned char )6),
   (UINT8 const   )((unsigned char )19), (UINT8 const   )((unsigned char )81),
   (UINT8 const   )((unsigned char )97), (UINT8 const   )((unsigned char )7),
   (UINT8 const   )((unsigned char )34), (UINT8 const   )((unsigned char )113),
   (UINT8 const   )((unsigned char )20), (UINT8 const   )((unsigned char )50),
   (UINT8 const   )((unsigned char )129), (UINT8 const   )((unsigned char )145),
   (UINT8 const   )((unsigned char )161), (UINT8 const   )((unsigned char )8),
   (UINT8 const   )((unsigned char )35), (UINT8 const   )((unsigned char )66),
   (UINT8 const   )((unsigned char )177), (UINT8 const   )((unsigned char )193),
   (UINT8 const   )((unsigned char )21), (UINT8 const   )((unsigned char )82),
   (UINT8 const   )((unsigned char )209), (UINT8 const   )((unsigned char )240),
   (UINT8 const   )((unsigned char )36), (UINT8 const   )((unsigned char )51),
   (UINT8 const   )((unsigned char )98), (UINT8 const   )((unsigned char )114),
   (UINT8 const   )((unsigned char )130), (UINT8 const   )((unsigned char )9),
   (UINT8 const   )((unsigned char )10), (UINT8 const   )((unsigned char )22),
   (UINT8 const   )((unsigned char )23), (UINT8 const   )((unsigned char )24),
   (UINT8 const   )((unsigned char )25), (UINT8 const   )((unsigned char )26),
   (UINT8 const   )((unsigned char )37), (UINT8 const   )((unsigned char )38),
   (UINT8 const   )((unsigned char )39), (UINT8 const   )((unsigned char )40),
   (UINT8 const   )((unsigned char )41), (UINT8 const   )((unsigned char )42),
   (UINT8 const   )((unsigned char )52), (UINT8 const   )((unsigned char )53),
   (UINT8 const   )((unsigned char )54), (UINT8 const   )((unsigned char )55),
   (UINT8 const   )((unsigned char )56), (UINT8 const   )((unsigned char )57),
   (UINT8 const   )((unsigned char )58), (UINT8 const   )((unsigned char )67),
   (UINT8 const   )((unsigned char )68), (UINT8 const   )((unsigned char )69),
   (UINT8 const   )((unsigned char )70), (UINT8 const   )((unsigned char )71),
   (UINT8 const   )((unsigned char )72), (UINT8 const   )((unsigned char )73),
   (UINT8 const   )((unsigned char )74), (UINT8 const   )((unsigned char )83),
   (UINT8 const   )((unsigned char )84), (UINT8 const   )((unsigned char )85),
   (UINT8 const   )((unsigned char )86), (UINT8 const   )((unsigned char )87),
   (UINT8 const   )((unsigned char )88), (UINT8 const   )((unsigned char )89),
   (UINT8 const   )((unsigned char )90), (UINT8 const   )((unsigned char )99),
   (UINT8 const   )((unsigned char )100), (UINT8 const   )((unsigned char )101),
   (UINT8 const   )((unsigned char )102), (UINT8 const   )((unsigned char )103),
   (UINT8 const   )((unsigned char )104), (UINT8 const   )((unsigned char )105),
   (UINT8 const   )((unsigned char )106), (UINT8 const   )((unsigned char )115),
   (UINT8 const   )((unsigned char )116), (UINT8 const   )((unsigned char )117),
   (UINT8 const   )((unsigned char )118), (UINT8 const   )((unsigned char )119),
   (UINT8 const   )((unsigned char )120), (UINT8 const   )((unsigned char )121),
   (UINT8 const   )((unsigned char )122), (UINT8 const   )((unsigned char )131),
   (UINT8 const   )((unsigned char )132), (UINT8 const   )((unsigned char )133),
   (UINT8 const   )((unsigned char )134), (UINT8 const   )((unsigned char )135),
   (UINT8 const   )((unsigned char )136), (UINT8 const   )((unsigned char )137),
   (UINT8 const   )((unsigned char )138), (UINT8 const   )((unsigned char )146),
   (UINT8 const   )((unsigned char )147), (UINT8 const   )((unsigned char )148),
   (UINT8 const   )((unsigned char )149), (UINT8 const   )((unsigned char )150),
   (UINT8 const   )((unsigned char )151), (UINT8 const   )((unsigned char )152),
   (UINT8 const   )((unsigned char )153), (UINT8 const   )((unsigned char )154),
   (UINT8 const   )((unsigned char )162), (UINT8 const   )((unsigned char )163),
   (UINT8 const   )((unsigned char )164), (UINT8 const   )((unsigned char )165),
   (UINT8 const   )((unsigned char )166), (UINT8 const   )((unsigned char )167),
   (UINT8 const   )((unsigned char )168), (UINT8 const   )((unsigned char )169),
   (UINT8 const   )((unsigned char )170), (UINT8 const   )((unsigned char )178),
   (UINT8 const   )((unsigned char )179), (UINT8 const   )((unsigned char )180),
   (UINT8 const   )((unsigned char )181), (UINT8 const   )((unsigned char )182),
   (UINT8 const   )((unsigned char )183), (UINT8 const   )((unsigned char )184),
   (UINT8 const   )((unsigned char )185), (UINT8 const   )((unsigned char )186),
   (UINT8 const   )((unsigned char )194), (UINT8 const   )((unsigned char )195),
   (UINT8 const   )((unsigned char )196), (UINT8 const   )((unsigned char )197),
   (UINT8 const   )((unsigned char )198), (UINT8 const   )((unsigned char )199),
   (UINT8 const   )((unsigned char )200), (UINT8 const   )((unsigned char )201),
   (UINT8 const   )((unsigned char )202), (UINT8 const   )((unsigned char )210),
   (UINT8 const   )((unsigned char )211), (UINT8 const   )((unsigned char )212),
   (UINT8 const   )((unsigned char )213), (UINT8 const   )((unsigned char )214),
   (UINT8 const   )((unsigned char )215), (UINT8 const   )((unsigned char )216),
   (UINT8 const   )((unsigned char )217), (UINT8 const   )((unsigned char )218),
   (UINT8 const   )((unsigned char )225), (UINT8 const   )((unsigned char )226),
   (UINT8 const   )((unsigned char )227), (UINT8 const   )((unsigned char )228),
   (UINT8 const   )((unsigned char )229), (UINT8 const   )((unsigned char )230),
   (UINT8 const   )((unsigned char )231), (UINT8 const   )((unsigned char )232),
   (UINT8 const   )((unsigned char )233), (UINT8 const   )((unsigned char )234),
   (UINT8 const   )((unsigned char )241), (UINT8 const   )((unsigned char )242),
   (UINT8 const   )((unsigned char )243), (UINT8 const   )((unsigned char )244),
   (UINT8 const   )((unsigned char )245), (UINT8 const   )((unsigned char )246),
   (UINT8 const   )((unsigned char )247), (UINT8 const   )((unsigned char )248),
   (UINT8 const   )((unsigned char )249), (UINT8 const   )((unsigned char )250)};
# 217
static UINT8 const   bits_ac_chrominance[17]   = 
# 217
  {(UINT8 const   )((unsigned char )0), (UINT8 const   )((unsigned char )0),
   (UINT8 const   )((unsigned char )2), (UINT8 const   )((unsigned char )1),
   (UINT8 const   )((unsigned char )2), (UINT8 const   )((unsigned char )4),
   (UINT8 const   )((unsigned char )4), (UINT8 const   )((unsigned char )3),
   (UINT8 const   )((unsigned char )4), (UINT8 const   )((unsigned char )7),
   (UINT8 const   )((unsigned char )5), (UINT8 const   )((unsigned char )4),
   (UINT8 const   )((unsigned char )4), (UINT8 const   )((unsigned char )0),
   (UINT8 const   )((unsigned char )1), (UINT8 const   )((unsigned char )2),
   (UINT8 const   )((unsigned char )119)};
# 219
static UINT8 const   val_ac_chrominance[162]   = 
# 219
  {(UINT8 const   )((unsigned char )0), (UINT8 const   )((unsigned char )1),
   (UINT8 const   )((unsigned char )2), (UINT8 const   )((unsigned char )3),
   (UINT8 const   )((unsigned char )17), (UINT8 const   )((unsigned char )4),
   (UINT8 const   )((unsigned char )5), (UINT8 const   )((unsigned char )33),
   (UINT8 const   )((unsigned char )49), (UINT8 const   )((unsigned char )6),
   (UINT8 const   )((unsigned char )18), (UINT8 const   )((unsigned char )65),
   (UINT8 const   )((unsigned char )81), (UINT8 const   )((unsigned char )7),
   (UINT8 const   )((unsigned char )97), (UINT8 const   )((unsigned char )113),
   (UINT8 const   )((unsigned char )19), (UINT8 const   )((unsigned char )34),
   (UINT8 const   )((unsigned char )50), (UINT8 const   )((unsigned char )129),
   (UINT8 const   )((unsigned char )8), (UINT8 const   )((unsigned char )20),
   (UINT8 const   )((unsigned char )66), (UINT8 const   )((unsigned char )145),
   (UINT8 const   )((unsigned char )161), (UINT8 const   )((unsigned char )177),
   (UINT8 const   )((unsigned char )193), (UINT8 const   )((unsigned char )9),
   (UINT8 const   )((unsigned char )35), (UINT8 const   )((unsigned char )51),
   (UINT8 const   )((unsigned char )82), (UINT8 const   )((unsigned char )240),
   (UINT8 const   )((unsigned char )21), (UINT8 const   )((unsigned char )98),
   (UINT8 const   )((unsigned char )114), (UINT8 const   )((unsigned char )209),
   (UINT8 const   )((unsigned char )10), (UINT8 const   )((unsigned char )22),
   (UINT8 const   )((unsigned char )36), (UINT8 const   )((unsigned char )52),
   (UINT8 const   )((unsigned char )225), (UINT8 const   )((unsigned char )37),
   (UINT8 const   )((unsigned char )241), (UINT8 const   )((unsigned char )23),
   (UINT8 const   )((unsigned char )24), (UINT8 const   )((unsigned char )25),
   (UINT8 const   )((unsigned char )26), (UINT8 const   )((unsigned char )38),
   (UINT8 const   )((unsigned char )39), (UINT8 const   )((unsigned char )40),
   (UINT8 const   )((unsigned char )41), (UINT8 const   )((unsigned char )42),
   (UINT8 const   )((unsigned char )53), (UINT8 const   )((unsigned char )54),
   (UINT8 const   )((unsigned char )55), (UINT8 const   )((unsigned char )56),
   (UINT8 const   )((unsigned char )57), (UINT8 const   )((unsigned char )58),
   (UINT8 const   )((unsigned char )67), (UINT8 const   )((unsigned char )68),
   (UINT8 const   )((unsigned char )69), (UINT8 const   )((unsigned char )70),
   (UINT8 const   )((unsigned char )71), (UINT8 const   )((unsigned char )72),
   (UINT8 const   )((unsigned char )73), (UINT8 const   )((unsigned char )74),
   (UINT8 const   )((unsigned char )83), (UINT8 const   )((unsigned char )84),
   (UINT8 const   )((unsigned char )85), (UINT8 const   )((unsigned char )86),
   (UINT8 const   )((unsigned char )87), (UINT8 const   )((unsigned char )88),
   (UINT8 const   )((unsigned char )89), (UINT8 const   )((unsigned char )90),
   (UINT8 const   )((unsigned char )99), (UINT8 const   )((unsigned char )100),
   (UINT8 const   )((unsigned char )101), (UINT8 const   )((unsigned char )102),
   (UINT8 const   )((unsigned char )103), (UINT8 const   )((unsigned char )104),
   (UINT8 const   )((unsigned char )105), (UINT8 const   )((unsigned char )106),
   (UINT8 const   )((unsigned char )115), (UINT8 const   )((unsigned char )116),
   (UINT8 const   )((unsigned char )117), (UINT8 const   )((unsigned char )118),
   (UINT8 const   )((unsigned char )119), (UINT8 const   )((unsigned char )120),
   (UINT8 const   )((unsigned char )121), (UINT8 const   )((unsigned char )122),
   (UINT8 const   )((unsigned char )130), (UINT8 const   )((unsigned char )131),
   (UINT8 const   )((unsigned char )132), (UINT8 const   )((unsigned char )133),
   (UINT8 const   )((unsigned char )134), (UINT8 const   )((unsigned char )135),
   (UINT8 const   )((unsigned char )136), (UINT8 const   )((unsigned char )137),
   (UINT8 const   )((unsigned char )138), (UINT8 const   )((unsigned char )146),
   (UINT8 const   )((unsigned char )147), (UINT8 const   )((unsigned char )148),
   (UINT8 const   )((unsigned char )149), (UINT8 const   )((unsigned char )150),
   (UINT8 const   )((unsigned char )151), (UINT8 const   )((unsigned char )152),
   (UINT8 const   )((unsigned char )153), (UINT8 const   )((unsigned char )154),
   (UINT8 const   )((unsigned char )162), (UINT8 const   )((unsigned char )163),
   (UINT8 const   )((unsigned char )164), (UINT8 const   )((unsigned char )165),
   (UINT8 const   )((unsigned char )166), (UINT8 const   )((unsigned char )167),
   (UINT8 const   )((unsigned char )168), (UINT8 const   )((unsigned char )169),
   (UINT8 const   )((unsigned char )170), (UINT8 const   )((unsigned char )178),
   (UINT8 const   )((unsigned char )179), (UINT8 const   )((unsigned char )180),
   (UINT8 const   )((unsigned char )181), (UINT8 const   )((unsigned char )182),
   (UINT8 const   )((unsigned char )183), (UINT8 const   )((unsigned char )184),
   (UINT8 const   )((unsigned char )185), (UINT8 const   )((unsigned char )186),
   (UINT8 const   )((unsigned char )194), (UINT8 const   )((unsigned char )195),
   (UINT8 const   )((unsigned char )196), (UINT8 const   )((unsigned char )197),
   (UINT8 const   )((unsigned char )198), (UINT8 const   )((unsigned char )199),
   (UINT8 const   )((unsigned char )200), (UINT8 const   )((unsigned char )201),
   (UINT8 const   )((unsigned char )202), (UINT8 const   )((unsigned char )210),
   (UINT8 const   )((unsigned char )211), (UINT8 const   )((unsigned char )212),
   (UINT8 const   )((unsigned char )213), (UINT8 const   )((unsigned char )214),
   (UINT8 const   )((unsigned char )215), (UINT8 const   )((unsigned char )216),
   (UINT8 const   )((unsigned char )217), (UINT8 const   )((unsigned char )218),
   (UINT8 const   )((unsigned char )226), (UINT8 const   )((unsigned char )227),
   (UINT8 const   )((unsigned char )228), (UINT8 const   )((unsigned char )229),
   (UINT8 const   )((unsigned char )230), (UINT8 const   )((unsigned char )231),
   (UINT8 const   )((unsigned char )232), (UINT8 const   )((unsigned char )233),
   (UINT8 const   )((unsigned char )234), (UINT8 const   )((unsigned char )242),
   (UINT8 const   )((unsigned char )243), (UINT8 const   )((unsigned char )244),
   (UINT8 const   )((unsigned char )245), (UINT8 const   )((unsigned char )246),
   (UINT8 const   )((unsigned char )247), (UINT8 const   )((unsigned char )248),
   (UINT8 const   )((unsigned char )249), (UINT8 const   )((unsigned char )250)};
# 177
static void std_huff_tables(j_compress_ptr cinfo ) 
{ 

  {
  {
# 242
  add_huff_table(cinfo, & cinfo->dc_huff_tbl_ptrs[0], bits_dc_luminance,
                 val_dc_luminance, (int )sizeof(val_dc_luminance));
# 244
  add_huff_table(cinfo, & cinfo->ac_huff_tbl_ptrs[0], bits_ac_luminance,
                 val_ac_luminance, (int )sizeof(val_ac_luminance));
# 246
  add_huff_table(cinfo, & cinfo->dc_huff_tbl_ptrs[1], bits_dc_chrominance,
                 val_dc_chrominance, (int )sizeof(val_dc_chrominance));
# 248
  add_huff_table(cinfo, & cinfo->ac_huff_tbl_ptrs[1], bits_ac_chrominance,
                 val_ac_chrominance, (int )sizeof(val_ac_chrominance));
  }
# 250
  return;
}
}
# 263
void jpeg_set_defaults(j_compress_ptr cinfo ) 
{ int i ;

  {
# 269
  if (cinfo->global_state != 100) {
    {
# 270
    (cinfo->err)->msg_code = 14;
# 270
    (cinfo->err)->msg_parm.i[0] = cinfo->global_state;
# 270
    ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
    }
  }
# 276
  if ((unsigned int )cinfo->comp_info == (unsigned int )((void *)0)) {
    {
# 277
    cinfo->comp_info = (jpeg_component_info *)alloc_small_wrapper((struct jpeg_common_struct *)cinfo,
                                                                  0,
                                                                  10U *
                                                                  sizeof(jpeg_component_info ));
    }
  }
  {
# 285
  cinfo->data_precision = 8;
# 287
  jpeg_set_quality(cinfo, 75, 1);
# 289
  std_huff_tables(cinfo);
# 292
  i = 0;
  }
# 292
  while (i < 16) {
    {
# 293
    cinfo->arith_dc_L[i] = (unsigned char )0;
# 294
    cinfo->arith_dc_U[i] = (unsigned char )1;
# 295
    cinfo->arith_ac_K[i] = (unsigned char )5;
# 292
    i ++;
    }
  }
  {
# 299
  cinfo->raw_data_in = 0;
# 302
  cinfo->arith_code = 0;
# 305
  cinfo->interleave = 1;
# 308
  cinfo->optimize_coding = 0;
  }
# 314
  if (cinfo->data_precision > 8) {
    {
# 315
    cinfo->optimize_coding = 1;
    }
  }
  {
# 318
  cinfo->CCIR601_sampling = 0;
# 321
  cinfo->smoothing_factor = 0;
# 324
  cinfo->dct_method = 0;
# 327
  cinfo->restart_interval = 0U;
# 328
  cinfo->restart_in_rows = 0;
# 333
  cinfo->density_unit = (unsigned char )0;
# 334
  cinfo->X_density = (unsigned short )1;
# 335
  cinfo->Y_density = (unsigned short )1;
# 339
  jpeg_default_colorspace(cinfo);
  }
# 340
  return;
}
}
# 347
void jpeg_default_colorspace(j_compress_ptr cinfo ) 
{ 

  {
# 350
  switch (cinfo->in_color_space) {
  case 1: 
  {
# 352
  jpeg_set_colorspace(cinfo, 1);
  }
# 353
  break;
  case 2: 
  {
# 355
  jpeg_set_colorspace(cinfo, 3);
  }
# 356
  break;
  case 3: 
  {
# 358
  jpeg_set_colorspace(cinfo, 3);
  }
# 359
  break;
  case 4: 
  {
# 361
  jpeg_set_colorspace(cinfo, 4);
  }
# 362
  break;
  case 5: 
  {
# 364
  jpeg_set_colorspace(cinfo, 5);
  }
# 365
  break;
  case 0: 
  {
# 367
  jpeg_set_colorspace(cinfo, 0);
  }
# 368
  break;
  default: 
  {
# 370
  (cinfo->err)->msg_code = 7;
# 370
  ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
  }
  }
# 372
  return;
}
}
# 379
void jpeg_set_colorspace(j_compress_ptr cinfo , J_COLOR_SPACE colorspace ) 
{ jpeg_component_info *compptr ;
  int ci ;

  {
# 396
  if (cinfo->global_state != 100) {
    {
# 397
    (cinfo->err)->msg_code = 14;
# 397
    (cinfo->err)->msg_parm.i[0] = cinfo->global_state;
# 397
    ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
    }
  }
  {
# 403
  cinfo->jpeg_color_space = colorspace;
# 405
  cinfo->write_JFIF_header = 0;
# 406
  cinfo->write_Adobe_marker = 0;
  }
# 408
  switch (colorspace) {
  case 1: 
  {
# 410
  cinfo->write_JFIF_header = 1;
# 411
  cinfo->num_components = 1;
# 413
  compptr = cinfo->comp_info + 0;
# 413
  compptr->component_index = 0;
# 413
  compptr->component_id = 1;
# 413
  compptr->h_samp_factor = 1;
# 413
  compptr->v_samp_factor = 1;
# 413
  compptr->quant_tbl_no = 0;
# 413
  compptr->dc_tbl_no = 0;
# 413
  compptr->ac_tbl_no = 0;
  }
# 414
  break;
  case 2: 
  {
# 416
  cinfo->write_Adobe_marker = 1;
# 417
  cinfo->num_components = 3;
# 418
  compptr = cinfo->comp_info + 0;
# 418
  compptr->component_index = 0;
# 418
  compptr->component_id = (int )'R';
# 418
  compptr->h_samp_factor = 1;
# 418
  compptr->v_samp_factor = 1;
# 418
  compptr->quant_tbl_no = 0;
# 418
  compptr->dc_tbl_no = 0;
# 418
  compptr->ac_tbl_no = 0;
# 419
  compptr = cinfo->comp_info + 1;
# 419
  compptr->component_index = 1;
# 419
  compptr->component_id = (int )'G';
# 419
  compptr->h_samp_factor = 1;
# 419
  compptr->v_samp_factor = 1;
# 419
  compptr->quant_tbl_no = 0;
# 419
  compptr->dc_tbl_no = 0;
# 419
  compptr->ac_tbl_no = 0;
# 420
  compptr = cinfo->comp_info + 2;
# 420
  compptr->component_index = 2;
# 420
  compptr->component_id = (int )'B';
# 420
  compptr->h_samp_factor = 1;
# 420
  compptr->v_samp_factor = 1;
# 420
  compptr->quant_tbl_no = 0;
# 420
  compptr->dc_tbl_no = 0;
# 420
  compptr->ac_tbl_no = 0;
  }
# 421
  break;
  case 3: 
  {
# 423
  cinfo->write_JFIF_header = 1;
# 424
  cinfo->num_components = 3;
# 427
  compptr = cinfo->comp_info + 0;
# 427
  compptr->component_index = 0;
# 427
  compptr->component_id = 1;
# 427
  compptr->h_samp_factor = 2;
# 427
  compptr->v_samp_factor = 2;
# 427
  compptr->quant_tbl_no = 0;
# 427
  compptr->dc_tbl_no = 0;
# 427
  compptr->ac_tbl_no = 0;
# 428
  compptr = cinfo->comp_info + 1;
# 428
  compptr->component_index = 1;
# 428
  compptr->component_id = 2;
# 428
  compptr->h_samp_factor = 1;
# 428
  compptr->v_samp_factor = 1;
# 428
  compptr->quant_tbl_no = 1;
# 428
  compptr->dc_tbl_no = 1;
# 428
  compptr->ac_tbl_no = 1;
# 429
  compptr = cinfo->comp_info + 2;
# 429
  compptr->component_index = 2;
# 429
  compptr->component_id = 3;
# 429
  compptr->h_samp_factor = 1;
# 429
  compptr->v_samp_factor = 1;
# 429
  compptr->quant_tbl_no = 1;
# 429
  compptr->dc_tbl_no = 1;
# 429
  compptr->ac_tbl_no = 1;
  }
# 430
  break;
  case 4: 
  {
# 432
  cinfo->write_Adobe_marker = 1;
# 433
  cinfo->num_components = 4;
# 434
  compptr = cinfo->comp_info + 0;
# 434
  compptr->component_index = 0;
# 434
  compptr->component_id = (int )'C';
# 434
  compptr->h_samp_factor = 1;
# 434
  compptr->v_samp_factor = 1;
# 434
  compptr->quant_tbl_no = 0;
# 434
  compptr->dc_tbl_no = 0;
# 434
  compptr->ac_tbl_no = 0;
# 435
  compptr = cinfo->comp_info + 1;
# 435
  compptr->component_index = 1;
# 435
  compptr->component_id = (int )'M';
# 435
  compptr->h_samp_factor = 1;
# 435
  compptr->v_samp_factor = 1;
# 435
  compptr->quant_tbl_no = 0;
# 435
  compptr->dc_tbl_no = 0;
# 435
  compptr->ac_tbl_no = 0;
# 436
  compptr = cinfo->comp_info + 2;
# 436
  compptr->component_index = 2;
# 436
  compptr->component_id = (int )'Y';
# 436
  compptr->h_samp_factor = 1;
# 436
  compptr->v_samp_factor = 1;
# 436
  compptr->quant_tbl_no = 0;
# 436
  compptr->dc_tbl_no = 0;
# 436
  compptr->ac_tbl_no = 0;
# 437
  compptr = cinfo->comp_info + 3;
# 437
  compptr->component_index = 3;
# 437
  compptr->component_id = (int )'K';
# 437
  compptr->h_samp_factor = 1;
# 437
  compptr->v_samp_factor = 1;
# 437
  compptr->quant_tbl_no = 0;
# 437
  compptr->dc_tbl_no = 0;
# 437
  compptr->ac_tbl_no = 0;
  }
# 438
  break;
  case 5: 
  {
# 440
  cinfo->write_Adobe_marker = 1;
# 441
  cinfo->num_components = 4;
# 442
  compptr = cinfo->comp_info + 0;
# 442
  compptr->component_index = 0;
# 442
  compptr->component_id = 1;
# 442
  compptr->h_samp_factor = 2;
# 442
  compptr->v_samp_factor = 2;
# 442
  compptr->quant_tbl_no = 0;
# 442
  compptr->dc_tbl_no = 0;
# 442
  compptr->ac_tbl_no = 0;
# 443
  compptr = cinfo->comp_info + 1;
# 443
  compptr->component_index = 1;
# 443
  compptr->component_id = 2;
# 443
  compptr->h_samp_factor = 1;
# 443
  compptr->v_samp_factor = 1;
# 443
  compptr->quant_tbl_no = 1;
# 443
  compptr->dc_tbl_no = 1;
# 443
  compptr->ac_tbl_no = 1;
# 444
  compptr = cinfo->comp_info + 2;
# 444
  compptr->component_index = 2;
# 444
  compptr->component_id = 3;
# 444
  compptr->h_samp_factor = 1;
# 444
  compptr->v_samp_factor = 1;
# 444
  compptr->quant_tbl_no = 1;
# 444
  compptr->dc_tbl_no = 1;
# 444
  compptr->ac_tbl_no = 1;
# 445
  compptr = cinfo->comp_info + 3;
# 445
  compptr->component_index = 3;
# 445
  compptr->component_id = 4;
# 445
  compptr->h_samp_factor = 2;
# 445
  compptr->v_samp_factor = 2;
# 445
  compptr->quant_tbl_no = 0;
# 445
  compptr->dc_tbl_no = 0;
# 445
  compptr->ac_tbl_no = 0;
  }
# 446
  break;
  case 0: 
  {
# 448
  cinfo->num_components = cinfo->input_components;
  }
# 449
  if (cinfo->num_components < 1) {
    {
# 450
    (cinfo->err)->msg_code = 19;
# 450
    (cinfo->err)->msg_parm.i[0] = cinfo->num_components;
# 450
    (cinfo->err)->msg_parm.i[1] = 10;
# 450
    ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
    }
  } else {
# 449
    if (cinfo->num_components > 10) {
      {
# 450
      (cinfo->err)->msg_code = 19;
# 450
      (cinfo->err)->msg_parm.i[0] = cinfo->num_components;
# 450
      (cinfo->err)->msg_parm.i[1] = 10;
# 450
      ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
      }
    }
  }
  {
# 452
  ci = 0;
  }
# 452
  while (ci < cinfo->num_components) {
    {
# 453
    compptr = cinfo->comp_info + ci;
# 453
    compptr->component_index = ci;
# 453
    compptr->component_id = ci;
# 453
    compptr->h_samp_factor = 1;
# 453
    compptr->v_samp_factor = 1;
# 453
    compptr->quant_tbl_no = 0;
# 453
    compptr->dc_tbl_no = 0;
# 453
    compptr->ac_tbl_no = 0;
# 452
    ci ++;
    }
  }
# 455
  break;
  default: 
  {
# 457
  (cinfo->err)->msg_code = 8;
# 457
  ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
  }
  }
# 459
  return;
}
}
# 44 "jdatadst.c"
static void init_destination(j_compress_ptr cinfo ) 
{ my_dest_ptr dest ;

  {
  {
# 47
  dest = (my_destination_mgr *)cinfo->dest;
# 50
  dest->buffer = (JOCTET *)alloc_small_wrapper((struct jpeg_common_struct *)cinfo,
                                               1, 4096U * sizeof(JOCTET ));
# 54
  dest->pub.next_output_byte = dest->buffer;
# 55
  dest->pub.free_in_buffer = 4096U;
  }
# 56
  return;
}
}
# 82
static boolean empty_output_buffer(j_compress_ptr cinfo ) 
{ my_dest_ptr dest ;
  size_t tmp ;

  {
  {
# 85
  dest = (my_destination_mgr *)cinfo->dest;
# 87
  tmp = fwrite((void const   */* __restrict  */)((void const   *)dest->buffer),
               1U, 4096U, (FILE */* __restrict  */)dest->outfile);
  }
# 87
  if (tmp != 4096U) {
    {
# 89
    (cinfo->err)->msg_code = 31;
# 89
    ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
    }
  }
  {
# 91
  dest->pub.next_output_byte = dest->buffer;
# 92
  dest->pub.free_in_buffer = 4096U;
  }
# 94
  return (1);
}
}
# 107
static void term_destination(j_compress_ptr cinfo ) 
{ my_dest_ptr dest ;
  size_t datacount ;
  size_t tmp ;
  int tmp___0 ;

  {
  {
# 110
  dest = (my_destination_mgr *)cinfo->dest;
# 111
  datacount = 4096U - dest->pub.free_in_buffer;
  }
# 114
  if (datacount > 0U) {
    {
# 115
    tmp = fwrite((void const   */* __restrict  */)((void const   *)dest->buffer),
                 1U, datacount, (FILE */* __restrict  */)dest->outfile);
    }
# 115
    if (tmp != datacount) {
      {
# 116
      (cinfo->err)->msg_code = 31;
# 116
      ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
      }
    }
  }
  {

  {
# 40 "spec.work"
  if (! ((dest->outfile)->__BLAST_FLAG == 1)) {
# 42
    __error__();
  }
  {

  }
  }
# 118 "jdatadst.c"
  fflush(dest->outfile);
# 120
  tmp___0 = ferror(dest->outfile);
  }
# 120
  if (tmp___0) {
    {
# 121
    (cinfo->err)->msg_code = 31;
# 121
    ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
    }
  }
# 122
  return;
}
}
# 131
void jpeg_stdio_dest(j_compress_ptr cinfo , FILE *outfile ) 
{ my_dest_ptr dest ;
  my_dest_ptr dest___0 ;

  {
# 142
  if ((unsigned int )cinfo->dest == (unsigned int )((void *)0)) {
    {
# 143
    dest___0 = (my_dest_ptr )alloc_small_wrapper((struct jpeg_common_struct *)cinfo,
                                                 0, sizeof(my_destination_mgr ));
# 147
    cinfo->dest = (struct jpeg_destination_mgr */* __attribute__((__rtti__)) */)((struct jpeg_destination_mgr *)dest___0);
    }
  }
  {
# 150
  dest = (my_destination_mgr *)cinfo->dest;
# 151
  dest->pub.init_destination = & init_destination;
# 152
  dest->pub.empty_output_buffer = & empty_output_buffer;
# 153
  dest->pub.term_destination = & term_destination;
# 154
  dest->outfile = outfile;
  }
# 155
  return;
}
}
# 37 "jcmaster.c"
static void initial_setup(j_compress_ptr cinfo ) 
{ int ci ;
  jpeg_component_info *compptr ;
  long samplesperrow ;
  JDIMENSION jd_samplesperrow ;

  {
# 47
  if (cinfo->image_height <= 0U) {
    {
# 49
    (cinfo->err)->msg_code = 26;
# 49
    ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
    }
  } else {
# 47
    if (cinfo->image_width <= 0U) {
      {
# 49
      (cinfo->err)->msg_code = 26;
# 49
      ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
      }
    } else {
# 47
      if (cinfo->num_components <= 0) {
        {
# 49
        (cinfo->err)->msg_code = 26;
# 49
        ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
        }
      } else {
# 47
        if (cinfo->input_components <= 0) {
          {
# 49
          (cinfo->err)->msg_code = 26;
# 49
          ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
          }
        }
      }
    }
  }
# 52
  if ((long )cinfo->image_height > 65500L) {
    {
# 54
    (cinfo->err)->msg_code = 35;
# 54
    (cinfo->err)->msg_parm.i[0] = 65500;
# 54
    ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
    }
  } else {
# 52
    if ((long )cinfo->image_width > 65500L) {
      {
# 54
      (cinfo->err)->msg_code = 35;
# 54
      (cinfo->err)->msg_parm.i[0] = 65500;
# 54
      ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
      }
    }
  }
  {
# 57
  samplesperrow = (long )cinfo->image_width * (long )cinfo->input_components;
# 58
  jd_samplesperrow = (unsigned int )samplesperrow;
  }
# 59
  if ((long )jd_samplesperrow != samplesperrow) {
    {
# 60
    (cinfo->err)->msg_code = 62;
# 60
    ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
    }
  }
# 63
  if (cinfo->data_precision != 8) {
    {
# 64
    (cinfo->err)->msg_code = 12;
# 64
    (cinfo->err)->msg_parm.i[0] = cinfo->data_precision;
# 64
    ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
    }
  }
# 67
  if (cinfo->num_components > 10) {
    {
# 68
    (cinfo->err)->msg_code = 19;
# 68
    (cinfo->err)->msg_parm.i[0] = cinfo->num_components;
# 68
    (cinfo->err)->msg_parm.i[1] = 10;
# 68
    ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
    }
  }
  {
# 72
  cinfo->max_h_samp_factor = 1;
# 73
  cinfo->max_v_samp_factor = 1;
# 74
  ci = 0;
# 74
  compptr = cinfo->comp_info;
  }
# 74
  while (ci < cinfo->num_components) {
# 76
    if (compptr->h_samp_factor <= 0) {
      {
# 78
      (cinfo->err)->msg_code = 13;
# 78
      ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
      }
    } else {
# 76
      if (compptr->h_samp_factor > 4) {
        {
# 78
        (cinfo->err)->msg_code = 13;
# 78
        ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
        }
      } else {
# 76
        if (compptr->v_samp_factor <= 0) {
          {
# 78
          (cinfo->err)->msg_code = 13;
# 78
          ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
          }
        } else {
# 76
          if (compptr->v_samp_factor > 4) {
            {
# 78
            (cinfo->err)->msg_code = 13;
# 78
            ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
            }
          }
        }
      }
    }
# 79
    if (cinfo->max_h_samp_factor > compptr->h_samp_factor) {
      {
# 79
      cinfo->max_h_samp_factor = cinfo->max_h_samp_factor;
      }
    } else {
      {
# 79
      cinfo->max_h_samp_factor = compptr->h_samp_factor;
      }
    }
# 81
    if (cinfo->max_v_samp_factor > compptr->v_samp_factor) {
      {
# 81
      cinfo->max_v_samp_factor = cinfo->max_v_samp_factor;
      }
    } else {
      {
# 81
      cinfo->max_v_samp_factor = compptr->v_samp_factor;
      }
    }
    {
# 74
    ci ++;
# 74
    compptr ++;
    }
  }
  {
# 86
  ci = 0;
# 86
  compptr = cinfo->comp_info;
  }
# 86
  while (ci < cinfo->num_components) {
    {
# 89
    compptr->DCT_scaled_size = 8;
# 91
    compptr->width_in_blocks = (JDIMENSION )jdiv_round_up((long )cinfo->image_width *
                                                          (long )compptr->h_samp_factor,
                                                          (long )(cinfo->max_h_samp_factor *
                                                                  8));
# 94
    compptr->height_in_blocks = (JDIMENSION )jdiv_round_up((long )cinfo->image_height *
                                                           (long )compptr->v_samp_factor,
                                                           (long )(cinfo->max_v_samp_factor *
                                                                   8));
# 98
    compptr->downsampled_width = (JDIMENSION )jdiv_round_up((long )cinfo->image_width *
                                                            (long )compptr->h_samp_factor,
                                                            (long )cinfo->max_h_samp_factor);
# 101
    compptr->downsampled_height = (JDIMENSION )jdiv_round_up((long )cinfo->image_height *
                                                             (long )compptr->v_samp_factor,
                                                             (long )cinfo->max_v_samp_factor);
# 105
    compptr->component_needed = 1;
# 86
    ci ++;
# 86
    compptr ++;
    }
  }
  {
# 111
  cinfo->total_iMCU_rows = (JDIMENSION )jdiv_round_up((long )cinfo->image_height,
                                                      (long )(cinfo->max_v_samp_factor *
                                                              8));
  }
# 114
  return;
}
}
# 117
static void per_scan_setup(j_compress_ptr cinfo ) 
{ int ci ;
  int mcublks ;
  int tmp ;
  jpeg_component_info *compptr ;
  int tmp___2 ;
  int tmp___3 ;
  long nominal ;
  long tmp___4 ;

  {
# 125
  if (cinfo->comps_in_scan == 1) {
    {
# 128
    compptr = cinfo->cur_comp_info[0];
# 131
    cinfo->MCUs_per_row = compptr->width_in_blocks;
# 132
    cinfo->MCU_rows_in_scan = compptr->height_in_blocks;
# 135
    compptr->MCU_width = 1;
# 136
    compptr->MCU_height = 1;
# 137
    compptr->MCU_blocks = 1;
# 138
    compptr->MCU_sample_width = 8;
# 139
    compptr->last_col_width = 1;
# 140
    compptr->last_row_height = 1;
# 143
    cinfo->blocks_in_MCU = 1;
# 144
    cinfo->MCU_membership[0] = 0;
    }
  } else {
# 149
    if (cinfo->comps_in_scan <= 0) {
      {
# 150
      (cinfo->err)->msg_code = 19;
# 150
      (cinfo->err)->msg_parm.i[0] = cinfo->comps_in_scan;
# 150
      (cinfo->err)->msg_parm.i[1] = 4;
# 150
      ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
      }
    } else {
# 149
      if (cinfo->comps_in_scan > 4) {
        {
# 150
        (cinfo->err)->msg_code = 19;
# 150
        (cinfo->err)->msg_parm.i[0] = cinfo->comps_in_scan;
# 150
        (cinfo->err)->msg_parm.i[1] = 4;
# 150
        ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
        }
      }
    }
    {
# 154
    cinfo->MCUs_per_row = (JDIMENSION )jdiv_round_up((long )cinfo->image_width,
                                                     (long )(cinfo->max_h_samp_factor *
                                                             8));
# 157
    cinfo->MCU_rows_in_scan = (JDIMENSION )jdiv_round_up((long )cinfo->image_height,
                                                         (long )(cinfo->max_v_samp_factor *
                                                                 8));
# 161
    cinfo->blocks_in_MCU = 0;
# 163
    ci = 0;
    }
# 163
    while (ci < cinfo->comps_in_scan) {
      {
# 164
      compptr = cinfo->cur_comp_info[ci];
# 166
      compptr->MCU_width = compptr->h_samp_factor;
# 167
      compptr->MCU_height = compptr->v_samp_factor;
# 168
      compptr->MCU_blocks = compptr->MCU_width * compptr->MCU_height;
# 169
      compptr->MCU_sample_width = compptr->MCU_width * 8;
# 171
      tmp = (int )(compptr->width_in_blocks % (unsigned int )compptr->MCU_width);
      }
# 172
      if (tmp == 0) {
        {
# 172
        tmp = compptr->MCU_width;
        }
      }
      {
# 173
      compptr->last_col_width = tmp;
# 174
      tmp = (int )(compptr->height_in_blocks %
                   (unsigned int )compptr->MCU_height);
      }
# 175
      if (tmp == 0) {
        {
# 175
        tmp = compptr->MCU_height;
        }
      }
      {
# 176
      compptr->last_row_height = tmp;
# 178
      mcublks = compptr->MCU_blocks;
      }
# 179
      if (cinfo->blocks_in_MCU + mcublks > 10) {
        {
# 180
        (cinfo->err)->msg_code = 10;
# 180
        ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
        }
      }
# 181
      while (1) {
        {
# 181
        tmp___3 = mcublks;
# 181
        mcublks --;
        }
# 181
        if (! (tmp___3 > 0)) {
# 181
          break;
        }
        {
# 182
        tmp___2 = cinfo->blocks_in_MCU;
# 182
        cinfo->blocks_in_MCU = cinfo->blocks_in_MCU + 1;
# 182
        cinfo->MCU_membership[tmp___2] = ci;
        }
      }
      {
# 163
      ci ++;
      }
    }
  }
# 190
  if (cinfo->restart_in_rows > 0) {
    {
# 191
    nominal = (long )cinfo->restart_in_rows * (long )cinfo->MCUs_per_row;
    }
# 192
    if (nominal < 65535L) {
      {
# 192
      tmp___4 = nominal;
      }
    } else {
      {
# 192
      tmp___4 = 65535L;
      }
    }
    {
# 192
    cinfo->restart_interval = (unsigned int )tmp___4;
    }
  }
# 194
  return;
}
}
# 203
static void master_selection(j_compress_ptr cinfo ) 
{ jcmaster_my_master_ptr master ;

  {
  {
# 206
  master = (my_comp_master *)cinfo->master;
# 208
  initial_setup(cinfo);
# 209
  master->pass_number = 0;
  }
# 216
  if (! cinfo->raw_data_in) {
    {
# 217
    jinit_color_converter(cinfo);
# 218
    jinit_downsampler(cinfo);
# 219
    jinit_c_prep_controller(cinfo, 0);
    }
  }
  {
# 222
  jinit_forward_dct(cinfo);
  }
# 224
  if (cinfo->arith_code) {
    {
# 228
    (cinfo->err)->msg_code = 1;
# 228
    ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
    }
  } else {
    {
# 231
    jinit_huff_encoder(cinfo);
    }
  }
  {
# 234
  jinit_c_coef_controller(cinfo, cinfo->optimize_coding);
# 235
  jinit_c_main_controller(cinfo, 0);
# 237
  jinit_marker_writer(cinfo);
# 240
  ((*((cinfo->mem)->realize_virt_arrays)))((struct jpeg_common_struct *)cinfo);
# 246
  ((*((cinfo->marker)->write_file_header)))(cinfo);
  }
# 247
  return;
}
}
# 258
static void prepare_for_pass(j_compress_ptr cinfo ) 
{ jcmaster_my_master_ptr master ;
  int ci ;
  int npasses ;

  {
  {
# 261
  master = (my_comp_master *)cinfo->master;
  }
# 271
  if (cinfo->num_components > 4) {
    {
# 272
    (cinfo->err)->msg_code = 19;
# 272
    (cinfo->err)->msg_parm.i[0] = cinfo->num_components;
# 272
    (cinfo->err)->msg_parm.i[1] = 4;
# 272
    ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
    }
  }
  {
# 274
  cinfo->comps_in_scan = cinfo->num_components;
# 275
  ci = 0;
  }
# 275
  while (ci < cinfo->num_components) {
    {
# 276
    cinfo->cur_comp_info[ci] = cinfo->comp_info + ci;
# 275
    ci ++;
    }
  }
  {
# 279
  per_scan_setup(cinfo);
  }
# 281
  if (cinfo->optimize_coding) {
    {
# 296
    npasses = 2;
    }
# 297
    switch (master->pass_number) {
    case 0: 
    {
# 300
    master->pub.call_pass_startup = 0;
# 301
    master->pub.is_last_pass = 0;
    }
# 302
    if (! cinfo->raw_data_in) {
      {
# 303
      ((*((cinfo->cconvert)->start_pass)))(cinfo);
# 304
      ((*((cinfo->downsample)->start_pass)))(cinfo);
# 305
      ((*((cinfo->prep)->start_pass)))(cinfo, 0);
      }
    }
    {
# 307
    ((*((cinfo->fdct)->start_pass)))(cinfo);
# 308
    ((*((cinfo->entropy)->start_pass)))(cinfo, 1);
# 309
    ((*((cinfo->coef)->start_pass)))(cinfo, 4);
# 310
    ((*((cinfo->main)->start_pass)))(cinfo, 0);
    }
# 311
    break;
    case 1: 
    {
# 314
    master->pub.is_last_pass = 1;
# 315
    ((*((cinfo->entropy)->start_pass)))(cinfo, 0);
# 316
    ((*((cinfo->coef)->start_pass)))(cinfo, 3);
# 318
    ((*((cinfo->marker)->write_frame_header)))(cinfo);
# 319
    ((*((cinfo->marker)->write_scan_header)))(cinfo);
    }
# 320
    break;
    }
  } else {
    {
# 283
    npasses = 1;
# 284
    master->pub.call_pass_startup = 1;
# 285
    master->pub.is_last_pass = 1;
    }
# 286
    if (! cinfo->raw_data_in) {
      {
# 287
      ((*((cinfo->cconvert)->start_pass)))(cinfo);
# 288
      ((*((cinfo->downsample)->start_pass)))(cinfo);
# 289
      ((*((cinfo->prep)->start_pass)))(cinfo, 0);
      }
    }
    {
# 291
    ((*((cinfo->fdct)->start_pass)))(cinfo);
# 292
    ((*((cinfo->entropy)->start_pass)))(cinfo, 0);
# 293
    ((*((cinfo->coef)->start_pass)))(cinfo, 0);
# 294
    ((*((cinfo->main)->start_pass)))(cinfo, 0);
    }
  }
# 325
  if ((unsigned int )cinfo->progress != (unsigned int )((void *)0)) {
    {
# 326
    (cinfo->progress)->completed_passes = master->pass_number;
# 327
    (cinfo->progress)->total_passes = npasses;
    }
  }
  {
# 330
  master->pass_number ++;
  }
# 331
  return;
}
}
# 344
static void pass_startup(j_compress_ptr cinfo ) 
{ 

  {
  {
# 347
  (cinfo->master)->call_pass_startup = 0;
# 349
  ((*((cinfo->marker)->write_frame_header)))(cinfo);
# 350
  ((*((cinfo->marker)->write_scan_header)))(cinfo);
  }
# 351
  return;
}
}
# 358
static void finish_pass_master(j_compress_ptr cinfo ) 
{ 

  {
  {
# 366
  ((*((cinfo->entropy)->finish_pass)))(cinfo);
  }
# 367
  return;
}
}
# 376
void jinit_master_compress(j_compress_ptr cinfo ) 
{ jcmaster_my_master_ptr master ;

  {
  {
# 381
  master = (jcmaster_my_master_ptr )alloc_small_wrapper((struct jpeg_common_struct *)cinfo,
                                                        1,
                                                        sizeof(my_comp_master ));
# 384
  cinfo->master = (struct jpeg_comp_master */* __attribute__((__rtti__)) */)((struct jpeg_comp_master *)master);
# 385
  master->pub.prepare_for_pass = & prepare_for_pass;
# 386
  master->pub.pass_startup = & pass_startup;
# 387
  master->pub.finish_pass = & finish_pass_master;
# 389
  master_selection(cinfo);
  }
# 390
  return;
}
}
# 96 "jcmarker.c"
static void emit_byte(j_compress_ptr cinfo , int val ) 
{ struct jpeg_destination_mgr *dest ;
  JOCTET *tmp ;
  boolean tmp___0 ;

  {
  {
# 100
  dest = (struct jpeg_destination_mgr *)cinfo->dest;
# 102
  tmp = dest->next_output_byte;
# 102
  dest->next_output_byte = dest->next_output_byte + 1;
# 102
  (*tmp) = (unsigned char )val;
# 103
  dest->free_in_buffer = dest->free_in_buffer - 1U;
  }
# 103
  if (dest->free_in_buffer == 0U) {
    {
# 104
    tmp___0 = ((*(dest->empty_output_buffer)))(cinfo);
    }
# 104
    if (! tmp___0) {
      {
# 105
      (cinfo->err)->msg_code = 17;
# 105
      ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
      }
    }
  }
# 107
  return;
}
}
# 110
static void emit_marker(j_compress_ptr cinfo , JPEG_MARKER mark ) 
{ 

  {
  {
# 114
  emit_byte(cinfo, 255);
# 115
  emit_byte(cinfo, mark);
  }
# 116
  return;
}
}
# 119
static void emit_2bytes(j_compress_ptr cinfo , int value ) 
{ 

  {
  {
# 123
  emit_byte(cinfo, (value >> 8) & 255);
# 124
  emit_byte(cinfo, value & 255);
  }
# 125
  return;
}
}
# 132
static int emit_dqt(j_compress_ptr cinfo , int index___0 ) 
{ JQUANT_TBL *qtbl ;
  int prec ;
  int i ;
  int tmp ;

  {
  {
# 137
  qtbl = cinfo->quant_tbl_ptrs[index___0];
  }
# 141
  if ((unsigned int )qtbl == (unsigned int )((void *)0)) {
    {
# 142
    (cinfo->err)->msg_code = 44;
# 142
    (cinfo->err)->msg_parm.i[0] = index___0;
# 142
    ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
    }
  }
  {
# 144
  prec = 0;
# 145
  i = 0;
  }
# 145
  while (i < 64) {
# 146
    if ((int )qtbl->quantval[i] > 255) {
      {
# 147
      prec = 1;
      }
    }
    {
# 145
    i ++;
    }
  }
# 150
  if (! qtbl->sent_table) {
    {
# 151
    emit_marker(cinfo, 219);
    }
# 153
    if (prec) {
      {
# 153
      tmp = 131;
      }
    } else {
      {
# 153
      tmp = 67;
      }
    }
    {
# 153
    emit_2bytes(cinfo, tmp);
# 155
    emit_byte(cinfo, index___0 + (prec << 4));
# 157
    i = 0;
    }
# 157
    while (i < 64) {
# 158
      if (prec) {
        {
# 159
        emit_byte(cinfo, (int )qtbl->quantval[i] >> 8);
        }
      }
      {
# 160
      emit_byte(cinfo, (int )qtbl->quantval[i] & 255);
# 157
      i ++;
      }
    }
    {
# 163
    qtbl->sent_table = 1;
    }
  }
# 166
  return (prec);
}
}
# 170
static void emit_dht(j_compress_ptr cinfo , int index___0 , boolean is_ac ) 
{ JHUFF_TBL *htbl ;
  int length ;
  int i ;

  {
# 177
  if (is_ac) {
    {
# 178
    htbl = cinfo->ac_huff_tbl_ptrs[index___0];
# 179
    index___0 += 16;
    }
  } else {
    {
# 181
    htbl = cinfo->dc_huff_tbl_ptrs[index___0];
    }
  }
# 184
  if ((unsigned int )htbl == (unsigned int )((void *)0)) {
    {
# 185
    (cinfo->err)->msg_code = 42;
# 185
    (cinfo->err)->msg_parm.i[0] = index___0;
# 185
    ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
    }
  }
# 187
  if (! htbl->sent_table) {
    {
# 188
    emit_marker(cinfo, 196);
# 190
    length = 0;
# 191
    i = 1;
    }
# 191
    while (i <= 16) {
      {
# 192
      length += (int )htbl->bits[i];
# 191
      i ++;
      }
    }
    {
# 194
    emit_2bytes(cinfo, ((length + 2) + 1) + 16);
# 195
    emit_byte(cinfo, index___0);
# 197
    i = 1;
    }
# 197
    while (i <= 16) {
      {
# 198
      emit_byte(cinfo, (int )htbl->bits[i]);
# 197
      i ++;
      }
    }
    {
# 200
    i = 0;
    }
# 200
    while (i < length) {
      {
# 201
      emit_byte(cinfo, (int )htbl->huffval[i]);
# 200
      i ++;
      }
    }
    {
# 203
    htbl->sent_table = 1;
    }
  }
# 205
  return;
}
}
# 208
static void emit_dac(j_compress_ptr cinfo ) 
{ 

  {
# 248
  return;
}
}
# 251
static void emit_dri(j_compress_ptr cinfo ) 
{ 

  {
  {
# 255
  emit_marker(cinfo, 221);
# 257
  emit_2bytes(cinfo, 4);
# 259
  emit_2bytes(cinfo, (int )cinfo->restart_interval);
  }
# 260
  return;
}
}
# 263
static void emit_sof(j_compress_ptr cinfo , JPEG_MARKER code ) 
{ int ci ;
  jpeg_component_info *compptr ;

  {
  {
# 270
  emit_marker(cinfo, code);
# 272
  emit_2bytes(cinfo, ((3 * cinfo->num_components + 2) + 5) + 1);
  }
# 275
  if ((long )cinfo->image_height > 65535L) {
    {
# 277
    (cinfo->err)->msg_code = 35;
# 277
    (cinfo->err)->msg_parm.i[0] = 65535;
# 277
    ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
    }
  } else {
# 275
    if ((long )cinfo->image_width > 65535L) {
      {
# 277
      (cinfo->err)->msg_code = 35;
# 277
      (cinfo->err)->msg_parm.i[0] = 65535;
# 277
      ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
      }
    }
  }
  {
# 279
  emit_byte(cinfo, cinfo->data_precision);
# 280
  emit_2bytes(cinfo, (int )cinfo->image_height);
# 281
  emit_2bytes(cinfo, (int )cinfo->image_width);
# 283
  emit_byte(cinfo, cinfo->num_components);
# 285
  ci = 0;
# 285
  compptr = cinfo->comp_info;
  }
# 285
  while (ci < cinfo->num_components) {
    {
# 287
    emit_byte(cinfo, compptr->component_id);
# 288
    emit_byte(cinfo, (compptr->h_samp_factor << 4) + compptr->v_samp_factor);
# 289
    emit_byte(cinfo, compptr->quant_tbl_no);
# 285
    ci ++;
# 285
    compptr ++;
    }
  }
# 291
  return;
}
}
# 294
static void emit_sos(j_compress_ptr cinfo ) 
{ int i ;
  jpeg_component_info *compptr ;

  {
  {
# 301
  emit_marker(cinfo, 218);
# 303
  emit_2bytes(cinfo, ((2 * cinfo->comps_in_scan + 2) + 1) + 3);
# 305
  emit_byte(cinfo, cinfo->comps_in_scan);
# 307
  i = 0;
  }
# 307
  while (i < cinfo->comps_in_scan) {
    {
# 308
    compptr = cinfo->cur_comp_info[i];
# 309
    emit_byte(cinfo, compptr->component_id);
# 310
    emit_byte(cinfo, (compptr->dc_tbl_no << 4) + compptr->ac_tbl_no);
# 307
    i ++;
    }
  }
  {
# 313
  emit_byte(cinfo, 0);
# 314
  emit_byte(cinfo, 63);
# 315
  emit_byte(cinfo, 0);
  }
# 316
  return;
}
}
# 319
static void emit_jfif_app0(j_compress_ptr cinfo ) 
{ 

  {
  {
# 335
  emit_marker(cinfo, 224);
# 337
  emit_2bytes(cinfo, 16);
# 339
  emit_byte(cinfo, 74);
# 340
  emit_byte(cinfo, 70);
# 341
  emit_byte(cinfo, 73);
# 342
  emit_byte(cinfo, 70);
# 343
  emit_byte(cinfo, 0);
# 347
  emit_byte(cinfo, 1);
# 348
  emit_byte(cinfo, 1);
# 349
  emit_byte(cinfo, (int )cinfo->density_unit);
# 350
  emit_2bytes(cinfo, (int )cinfo->X_density);
# 351
  emit_2bytes(cinfo, (int )cinfo->Y_density);
# 352
  emit_byte(cinfo, 0);
# 353
  emit_byte(cinfo, 0);
  }
# 354
  return;
}
}
# 357
static void emit_adobe_app14(j_compress_ptr cinfo ) 
{ 

  {
  {
# 377
  emit_marker(cinfo, 238);
# 379
  emit_2bytes(cinfo, 14);
# 381
  emit_byte(cinfo, 65);
# 382
  emit_byte(cinfo, 100);
# 383
  emit_byte(cinfo, 111);
# 384
  emit_byte(cinfo, 98);
# 385
  emit_byte(cinfo, 101);
# 386
  emit_2bytes(cinfo, 100);
# 387
  emit_2bytes(cinfo, 0);
# 388
  emit_2bytes(cinfo, 0);
  }
# 389
  switch (cinfo->jpeg_color_space) {
  case 3: 
  {
# 391
  emit_byte(cinfo, 1);
  }
# 392
  break;
  case 5: 
  {
# 394
  emit_byte(cinfo, 2);
  }
# 395
  break;
  default: 
  {
# 397
  emit_byte(cinfo, 0);
  }
# 398
  break;
  }
# 398
  return;
}
}
# 411
static void write_any_marker(j_compress_ptr cinfo , int marker ,
                             JOCTET const   *dataptr , unsigned int datalen ) 
{ unsigned int tmp ;

  {
# 416
  if (datalen <= 65533U) {
    {
# 417
    emit_marker(cinfo, marker);
# 419
    emit_2bytes(cinfo, (int )(datalen + 2U));
    }
# 421
    while (1) {
      {
# 421
      tmp = datalen;
# 421
      datalen --;
      }
# 421
      if (! tmp) {
# 421
        break;
      }
      {
# 422
      emit_byte(cinfo, (int )(*dataptr));
# 423
      dataptr ++;
      }
    }
  }
# 426
  return;
}
}
# 440
static void write_file_header(j_compress_ptr cinfo ) 
{ 

  {
  {
# 443
  emit_marker(cinfo, 216);
  }
# 445
  if (cinfo->write_JFIF_header) {
    {
# 446
    emit_jfif_app0(cinfo);
    }
  }
# 447
  if (cinfo->write_Adobe_marker) {
    {
# 448
    emit_adobe_app14(cinfo);
    }
  }
# 449
  return;
}
}
# 460
static void write_frame_header(j_compress_ptr cinfo ) 
{ int ci ;
  int prec ;
  boolean is_baseline ;
  jpeg_component_info *compptr ;
  int tmp ;

  {
  {
# 470
  prec = 0;
# 471
  ci = 0;
# 471
  compptr = cinfo->comp_info;
  }
# 471
  while (ci < cinfo->num_components) {
    {
# 473
    tmp = emit_dqt(cinfo, compptr->quant_tbl_no);
# 473
    prec += tmp;
# 471
    ci ++;
# 471
    compptr ++;
    }
  }
  {
# 480
  is_baseline = 1;
  }
# 481
  if (cinfo->arith_code) {
    {
# 482
    is_baseline = 0;
    }
  } else {
# 481
    if (cinfo->data_precision != 8) {
      {
# 482
      is_baseline = 0;
      }
    }
  }
  {
# 483
  ci = 0;
# 483
  compptr = cinfo->comp_info;
  }
# 483
  while (ci < cinfo->num_components) {
# 485
    if (compptr->dc_tbl_no > 1) {
      {
# 486
      is_baseline = 0;
      }
    } else {
# 485
      if (compptr->ac_tbl_no > 1) {
        {
# 486
        is_baseline = 0;
        }
      }
    }
    {
# 483
    ci ++;
# 483
    compptr ++;
    }
  }
# 488
  if (prec) {
# 488
    if (is_baseline) {
      {
# 489
      is_baseline = 0;
# 491
      (cinfo->err)->msg_code = 67;
# 491
      ((*((cinfo->err)->emit_message)))((struct jpeg_common_struct *)cinfo, 0);
      }
    }
  }
# 495
  if (cinfo->arith_code) {
    {
# 496
    emit_sof(cinfo, 201);
    }
  } else {
# 497
    if (is_baseline) {
      {
# 498
      emit_sof(cinfo, 192);
      }
    } else {
      {
# 500
      emit_sof(cinfo, 193);
      }
    }
  }
# 501
  return;
}
}
# 510
static void write_scan_header(j_compress_ptr cinfo ) 
{ int i ;
  jpeg_component_info *compptr ;

  {
# 516
  if (cinfo->arith_code) {
    {
# 521
    emit_dac(cinfo);
    }
  } else {
    {
# 526
    i = 0;
    }
# 526
    while (i < cinfo->comps_in_scan) {
      {
# 527
      compptr = cinfo->cur_comp_info[i];
# 528
      emit_dht(cinfo, compptr->dc_tbl_no, 0);
# 529
      emit_dht(cinfo, compptr->ac_tbl_no, 1);
# 526
      i ++;
      }
    }
  }
# 537
  if (cinfo->restart_interval) {
    {
# 538
    emit_dri(cinfo);
    }
  }
  {
# 540
  emit_sos(cinfo);
  }
# 541
  return;
}
}
# 548
static void write_file_trailer(j_compress_ptr cinfo ) 
{ 

  {
  {
# 551
  emit_marker(cinfo, 217);
  }
# 552
  return;
}
}
# 562
static void write_tables_only(j_compress_ptr cinfo ) 
{ int i ;

  {
  {
# 567
  emit_marker(cinfo, 216);
# 569
  i = 0;
  }
# 569
  while (i < 4) {
# 570
    if ((unsigned int )cinfo->quant_tbl_ptrs[i] != (unsigned int )((void *)0)) {
      {
# 571
      emit_dqt(cinfo, i);
      }
    }
    {
# 569
    i ++;
    }
  }
# 574
  if (! cinfo->arith_code) {
    {
# 575
    i = 0;
    }
# 575
    while (i < 4) {
# 576
      if ((unsigned int )cinfo->dc_huff_tbl_ptrs[i] !=
          (unsigned int )((void *)0)) {
        {
# 577
        emit_dht(cinfo, i, 0);
        }
      }
# 578
      if ((unsigned int )cinfo->ac_huff_tbl_ptrs[i] !=
          (unsigned int )((void *)0)) {
        {
# 579
        emit_dht(cinfo, i, 1);
        }
      }
      {
# 575
      i ++;
      }
    }
  }
  {
# 583
  emit_marker(cinfo, 217);
  }
# 584
  return;
}
}
# 591
void jinit_marker_writer(j_compress_ptr cinfo ) 
{ 

  {
  {
# 595
  cinfo->marker = (struct jpeg_marker_writer *)alloc_small_wrapper((struct jpeg_common_struct *)cinfo,
                                                                   1,
                                                                   sizeof(struct jpeg_marker_writer ));
# 601
  (cinfo->marker)->write_any_marker = & write_any_marker;
# 602
  (cinfo->marker)->write_file_header = & write_file_header;
# 603
  (cinfo->marker)->write_frame_header = & write_frame_header;
# 604
  (cinfo->marker)->write_scan_header = & write_scan_header;
# 605
  (cinfo->marker)->write_file_trailer = & write_file_trailer;
# 606
  (cinfo->marker)->write_tables_only = & write_tables_only;
  }
# 607
  return;
}
}
# 58 "jcmainct.c"
static void process_data_simple_main(j_compress_ptr cinfo ,
                                     JSAMPARRAY input_buf ,
                                     JDIMENSION *in_row_ctr ,
                                     JDIMENSION in_rows_avail ) ;
# 72
static void start_pass_main(j_compress_ptr cinfo , J_BUF_MODE pass_mode ) 
{ jcmainct_my_main_ptr main___0 ;

  {
  {
# 75
  main___0 = (my_main_controller *)cinfo->main;
  }
# 78
  if (cinfo->raw_data_in) {
# 79
    return;
  }
  {
# 81
  main___0->cur_mcu_row = 0U;
# 82
  main___0->rowgroup_ctr = 0U;
# 83
  main___0->mcu_ctr = 0U;
# 84
  main___0->suspended = 0;
# 85
  main___0->pass_mode = pass_mode;
  }
# 87
  switch (pass_mode) {
  case 0: 
  {
# 93
  main___0->pub.process_data = & process_data_simple_main;
  }
# 94
  break;
  default: 
  {
# 105
  (cinfo->err)->msg_code = 4;
# 105
  ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
  }
# 106
  break;
  }
# 106
  return;
}
}
# 117
static void process_data_simple_main(j_compress_ptr cinfo ,
                                     JSAMPARRAY input_buf ,
                                     JDIMENSION *in_row_ctr ,
                                     JDIMENSION in_rows_avail ) 
{ jcmainct_my_main_ptr main___0 ;

  {
  {
# 122
  main___0 = (my_main_controller *)cinfo->main;
  }
# 124
  while (main___0->cur_mcu_row < cinfo->total_iMCU_rows) {
# 126
    if (main___0->rowgroup_ctr < 8U) {
      {
# 127
      ((*((cinfo->prep)->pre_process_data)))(cinfo, input_buf, in_row_ctr,
                                             in_rows_avail, main___0->buffer,
                                             & main___0->rowgroup_ctr, 8U);
      }
    }
# 136
    if (main___0->rowgroup_ctr != 8U) {
# 137
      return;
    }
    {
# 140
    ((*((cinfo->coef)->compress_data)))(cinfo, main___0->buffer,
                                        & main___0->mcu_ctr);
    }
# 148
    if (main___0->mcu_ctr < cinfo->MCUs_per_row) {
# 149
      if (! main___0->suspended) {
        {
# 150
        (*in_row_ctr) --;
# 151
        main___0->suspended = 1;
        }
      }
# 153
      return;
    }
# 158
    if (main___0->suspended) {
      {
# 159
      (*in_row_ctr) ++;
# 160
      main___0->suspended = 0;
      }
    }
    {
# 162
    main___0->mcu_ctr = 0U;
# 163
    main___0->rowgroup_ctr = 0U;
# 164
    main___0->cur_mcu_row ++;
    }
  }
# 166
  return;
}
}
# 253
void jinit_c_main_controller(j_compress_ptr cinfo , boolean need_full_buffer ) 
{ jcmainct_my_main_ptr main___0 ;
  int ci ;
  jpeg_component_info *compptr ;

  {
  {
# 260
  main___0 = (jcmainct_my_main_ptr )alloc_small_wrapper((struct jpeg_common_struct *)cinfo,
                                                        1,
                                                        sizeof(my_main_controller ));
# 262
  cinfo->main = (struct jpeg_c_main_controller */* __attribute__((__rtti__)) */)((struct jpeg_c_main_controller *)main___0);
# 263
  main___0->pub.start_pass = & start_pass_main;
  }
# 266
  if (cinfo->raw_data_in) {
# 267
    return;
  }
# 272
  if (need_full_buffer) {
    {
# 285
    (cinfo->err)->msg_code = 4;
# 285
    ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
    }
  } else {
    {
# 292
    ci = 0;
# 292
    compptr = cinfo->comp_info;
    }
# 292
    while (ci < cinfo->num_components) {
      {
# 294
      main___0->buffer[ci] = ((*((cinfo->mem)->alloc_sarray)))((struct jpeg_common_struct *)cinfo,
                                                               1,
                                                               compptr->width_in_blocks *
                                                               8U,
                                                               (unsigned int )(compptr->v_samp_factor *
                                                                               8));
# 292
      ci ++;
# 292
      compptr ++;
      }
    }
  }
# 300
  return;
}
}
# 78 "jcprepct.c"
static void start_pass_prep(j_compress_ptr cinfo , J_BUF_MODE pass_mode ) 
{ my_prep_ptr prep ;

  {
  {
# 81
  prep = (my_prep_controller *)cinfo->prep;
  }
# 83
  if (pass_mode != 0) {
    {
# 84
    (cinfo->err)->msg_code = 4;
# 84
    ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
    }
  }
  {
# 87
  prep->rows_to_go = cinfo->image_height;
# 89
  prep->next_buf_row = 0;
# 94
  prep->this_row_group = 0;
# 96
  prep->next_buf_stop = 2 * cinfo->max_v_samp_factor;
  }
# 98
  return;
}
}
# 106
static void expand_bottom_edge(JSAMPARRAY image_data , JDIMENSION num_cols ,
                               int input_rows , int output_rows ) 
{ register int row ;

  {
  {
# 112
  row = input_rows;
  }
# 112
  while (row < output_rows) {
    {
# 113
    jcopy_sample_rows(image_data, input_rows - 1, image_data, row, 1, num_cols);
# 112
    row ++;
    }
  }
# 116
  return;
}
}
# 128
static void pre_process_data(j_compress_ptr cinfo , JSAMPARRAY input_buf ,
                             JDIMENSION *in_row_ctr , JDIMENSION in_rows_avail ,
                             JSAMPIMAGE output_buf ,
                             JDIMENSION *out_row_group_ctr ,
                             JDIMENSION out_row_groups_avail ) 
{ my_prep_ptr prep ;
  int numrows ;
  int ci ;
  JDIMENSION inrows ;
  jpeg_component_info *compptr ;
  unsigned int tmp ;

  {
  {
# 135
  prep = (my_prep_controller *)cinfo->prep;
  }
# 140
  while (1) {
# 140
    if ((*in_row_ctr) < in_rows_avail) {
# 140
      if (! ((*out_row_group_ctr) < out_row_groups_avail)) {
# 140
        break;
      }
    } else {
# 140
      break;
    }
    {
# 143
    inrows = in_rows_avail - (*in_row_ctr);
# 144
    numrows = cinfo->max_v_samp_factor - prep->next_buf_row;
    }
# 145
    if ((unsigned int )numrows < inrows) {
      {
# 145
      tmp = (unsigned int )numrows;
      }
    } else {
      {
# 145
      tmp = inrows;
      }
    }
    {
# 145
    numrows = (int )tmp;
# 146
    ((*((cinfo->cconvert)->color_convert)))(cinfo, input_buf + (*in_row_ctr),
                                            prep->color_buf,
                                            (unsigned int )prep->next_buf_row,
                                            numrows);
# 150
    (*in_row_ctr) += (unsigned int )numrows;
# 151
    prep->next_buf_row += numrows;
# 152
    prep->rows_to_go -= (unsigned int )numrows;
    }
# 154
    if (prep->rows_to_go == 0U) {
# 154
      if (prep->next_buf_row < cinfo->max_v_samp_factor) {
        {
# 156
        ci = 0;
        }
# 156
        while (ci < cinfo->num_components) {
          {
# 157
          expand_bottom_edge(prep->color_buf[ci], cinfo->image_width,
                             prep->next_buf_row, cinfo->max_v_samp_factor);
# 156
          ci ++;
          }
        }
        {
# 160
        prep->next_buf_row = cinfo->max_v_samp_factor;
        }
      }
    }
# 163
    if (prep->next_buf_row == cinfo->max_v_samp_factor) {
      {
# 164
      ((*((cinfo->downsample)->downsample)))(cinfo, prep->color_buf, 0U,
                                             output_buf, (*out_row_group_ctr));
# 167
      prep->next_buf_row = 0;
# 168
      (*out_row_group_ctr) ++;
      }
    }
# 173
    if (prep->rows_to_go == 0U) {
# 173
      if ((*out_row_group_ctr) < out_row_groups_avail) {
        {
# 175
        ci = 0;
# 175
        compptr = cinfo->comp_info;
        }
# 175
        while (ci < cinfo->num_components) {
          {
# 177
          expand_bottom_edge((*(output_buf + ci)),
                             compptr->width_in_blocks * 8U,
                             (int )((*out_row_group_ctr) *
                                    (unsigned int )compptr->v_samp_factor),
                             (int )(out_row_groups_avail *
                                    (unsigned int )compptr->v_samp_factor));
# 175
          ci ++;
# 175
          compptr ++;
          }
        }
        {
# 182
        (*out_row_group_ctr) = out_row_groups_avail;
        }
# 183
        break;
      }
    }
  }
# 186
  return;
}
}
# 195
static void pre_process_context(j_compress_ptr cinfo , JSAMPARRAY input_buf ,
                                JDIMENSION *in_row_ctr ,
                                JDIMENSION in_rows_avail ,
                                JSAMPIMAGE output_buf ,
                                JDIMENSION *out_row_group_ctr ,
                                JDIMENSION out_row_groups_avail ) 
{ my_prep_ptr prep ;
  int numrows ;
  int ci ;
  int buf_height ;
  JDIMENSION inrows ;
  jpeg_component_info *compptr ;
  unsigned int tmp ;
  int row ;

  {
  {
# 202
  prep = (my_prep_controller *)cinfo->prep;
# 204
  buf_height = cinfo->max_v_samp_factor * 3;
  }
# 208
  while ((*out_row_group_ctr) < out_row_groups_avail) {
# 209
    if ((*in_row_ctr) < in_rows_avail) {
      {
# 211
      inrows = in_rows_avail - (*in_row_ctr);
# 212
      numrows = prep->next_buf_stop - prep->next_buf_row;
      }
# 213
      if ((unsigned int )numrows < inrows) {
        {
# 213
        tmp = (unsigned int )numrows;
        }
      } else {
        {
# 213
        tmp = inrows;
        }
      }
      {
# 213
      numrows = (int )tmp;
# 214
      ((*((cinfo->cconvert)->color_convert)))(cinfo, input_buf + (*in_row_ctr),
                                              prep->color_buf,
                                              (unsigned int )prep->next_buf_row,
                                              numrows);
      }
# 219
      if (prep->rows_to_go == cinfo->image_height) {
        {
# 220
        ci = 0;
        }
# 220
        while (ci < cinfo->num_components) {
          {
# 222
          row = 1;
          }
# 222
          while (row <= cinfo->max_v_samp_factor) {
            {
# 223
            jcopy_sample_rows(prep->color_buf[ci], 0, prep->color_buf[ci],
                              - row, 1, cinfo->image_width);
# 222
            row ++;
            }
          }
          {
# 220
          ci ++;
          }
        }
      }
      {
# 229
      (*in_row_ctr) += (unsigned int )numrows;
# 230
      prep->next_buf_row += numrows;
# 231
      prep->rows_to_go -= (unsigned int )numrows;
      }
    } else {
# 234
      if (prep->rows_to_go != 0U) {
# 235
        break;
      }
    }
# 238
    if (prep->rows_to_go == 0U) {
# 238
      if (prep->next_buf_row < prep->next_buf_stop) {
        {
# 240
        ci = 0;
        }
# 240
        while (ci < cinfo->num_components) {
          {
# 241
          expand_bottom_edge(prep->color_buf[ci], cinfo->image_width,
                             prep->next_buf_row, prep->next_buf_stop);
# 240
          ci ++;
          }
        }
        {
# 244
        prep->next_buf_row = prep->next_buf_stop;
        }
      }
    }
# 247
    if (prep->next_buf_row == prep->next_buf_stop) {
      {
# 248
      ((*((cinfo->downsample)->downsample)))(cinfo, prep->color_buf,
                                             (unsigned int )prep->this_row_group,
                                             output_buf, (*out_row_group_ctr));
# 252
      (*out_row_group_ctr) ++;
# 254
      prep->this_row_group += cinfo->max_v_samp_factor;
      }
# 255
      if (prep->this_row_group >= buf_height) {
        {
# 256
        prep->this_row_group = 0;
        }
      }
# 257
      if (prep->next_buf_row >= buf_height) {
        {
# 258
        prep->next_buf_row = 0;
        }
      }
      {
# 259
      prep->next_buf_stop = prep->next_buf_row + cinfo->max_v_samp_factor;
      }
    }
# 264
    if (prep->rows_to_go == 0U) {
# 264
      if ((*out_row_group_ctr) < out_row_groups_avail) {
        {
# 266
        ci = 0;
# 266
        compptr = cinfo->comp_info;
        }
# 266
        while (ci < cinfo->num_components) {
          {
# 268
          expand_bottom_edge((*(output_buf + ci)),
                             compptr->width_in_blocks * 8U,
                             (int )((*out_row_group_ctr) *
                                    (unsigned int )compptr->v_samp_factor),
                             (int )(out_row_groups_avail *
                                    (unsigned int )compptr->v_samp_factor));
# 266
          ci ++;
# 266
          compptr ++;
          }
        }
        {
# 273
        (*out_row_group_ctr) = out_row_groups_avail;
        }
# 274
        break;
      }
    }
  }
# 277
  return;
}
}
# 284
static void create_context_buffer(j_compress_ptr cinfo ) 
{ my_prep_ptr prep ;
  int rgroup_height ;
  int ci ;
  int i ;
  jpeg_component_info *compptr ;
  JSAMPARRAY true_buffer ;
  JSAMPARRAY fake_buffer ;

  {
  {
# 287
  prep = (my_prep_controller *)cinfo->prep;
# 288
  rgroup_height = cinfo->max_v_samp_factor;
# 296
  fake_buffer = (JSAMPARRAY )alloc_small_wrapper((struct jpeg_common_struct *)cinfo,
                                                 1,
                                                 (unsigned int )((cinfo->num_components *
                                                                  5) *
                                                                 rgroup_height) *
                                                 sizeof((*fake_buffer)));
# 303
  ci = 0;
# 303
  compptr = cinfo->comp_info;
  }
# 303
  while (ci < cinfo->num_components) {
    {
# 309
    true_buffer = ((*((cinfo->mem)->alloc_sarray)))((struct jpeg_common_struct *)cinfo,
                                                    1,
                                                    (unsigned int )((((long )compptr->width_in_blocks *
                                                                      8L) *
                                                                     (long )cinfo->max_h_samp_factor) /
                                                                    (long )compptr->h_samp_factor),
                                                    (unsigned int )(3 *
                                                                    rgroup_height));
# 315
    memcpy((void */* __restrict  */)((void *)(fake_buffer + rgroup_height)),
           (void const   */* __restrict  */)((void const   *)true_buffer),
           (unsigned int )(3 * rgroup_height) * sizeof((*fake_buffer)));
# 319
    i = 0;
    }
# 319
    while (i < rgroup_height) {
      {
# 320
      (*(fake_buffer + i)) = (*(true_buffer + (2 * rgroup_height + i)));
# 321
      (*(fake_buffer + (4 * rgroup_height + i))) = (*(true_buffer + i));
# 319
      i ++;
      }
    }
    {
# 323
    prep->color_buf[ci] = fake_buffer + rgroup_height;
# 324
    fake_buffer += 5 * rgroup_height;
# 303
    ci ++;
# 303
    compptr ++;
    }
  }
# 326
  return;
}
}
# 335
void jinit_c_prep_controller(j_compress_ptr cinfo , boolean need_full_buffer ) 
{ my_prep_ptr prep ;
  int ci ;
  jpeg_component_info *compptr ;

  {
# 342
  if (need_full_buffer) {
    {
# 343
    (cinfo->err)->msg_code = 4;
# 343
    ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
    }
  }
  {
# 345
  prep = (my_prep_ptr )alloc_small_wrapper((struct jpeg_common_struct *)cinfo,
                                           1, sizeof(my_prep_controller ));
# 348
  cinfo->prep = (struct jpeg_c_prep_controller */* __attribute__((__rtti__)) */)((struct jpeg_c_prep_controller *)prep);
# 349
  prep->pub.start_pass = & start_pass_prep;
  }
# 355
  if ((cinfo->downsample)->need_context_rows) {
    {
# 358
    prep->pub.pre_process_data = & pre_process_context;
# 359
    create_context_buffer(cinfo);
    }
  } else {
    {
# 365
    prep->pub.pre_process_data = & pre_process_data;
# 366
    ci = 0;
# 366
    compptr = cinfo->comp_info;
    }
# 366
    while (ci < cinfo->num_components) {
      {
# 368
      prep->color_buf[ci] = ((*((cinfo->mem)->alloc_sarray)))((struct jpeg_common_struct *)cinfo,
                                                              1,
                                                              (unsigned int )((((long )compptr->width_in_blocks *
                                                                                8L) *
                                                                               (long )cinfo->max_h_samp_factor) /
                                                                              (long )compptr->h_samp_factor),
                                                              (unsigned int )cinfo->max_v_samp_factor);
# 366
      ci ++;
# 366
      compptr ++;
      }
    }
  }
# 375
  return;
}
}
# 62 "jccoefct.c"
static void compress_data(j_compress_ptr cinfo , JSAMPIMAGE input_buf ,
                          JDIMENSION *in_mcu_ctr ) ;
# 65
static void compress_first_pass(j_compress_ptr cinfo , JSAMPIMAGE input_buf ,
                                JDIMENSION *in_mcu_ctr ) ;
# 67
static void compress_output(j_compress_ptr cinfo , JSAMPIMAGE input_buf ,
                            JDIMENSION *in_mcu_ctr ) ;
# 76
static void start_pass_coef(j_compress_ptr cinfo , J_BUF_MODE pass_mode ) 
{ jccoefct_my_coef_ptr coef ;

  {
  {
# 79
  coef = (my_coef_controller *)cinfo->coef;
# 81
  coef->MCU_row_num = 0U;
  }
# 83
  switch (pass_mode) {
  case 0: 
  {

  }
# 85
  if ((unsigned int )coef->whole_image[0] != (unsigned int )((void *)0)) {
    {
# 86
    (cinfo->err)->msg_code = 4;
# 86
    ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
    }
  }
  {
# 87
  coef->pub.compress_data = & compress_data;
  }
# 88
  break;
  case 4: 
  {

  }
# 91
  if ((unsigned int )coef->whole_image[0] == (unsigned int )((void *)0)) {
    {
# 92
    (cinfo->err)->msg_code = 4;
# 92
    ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
    }
  }
  {
# 93
  coef->pub.compress_data = & compress_first_pass;
  }
# 94
  break;
  case 3: 
  {

  }
# 96
  if ((unsigned int )coef->whole_image[0] == (unsigned int )((void *)0)) {
    {
# 97
    (cinfo->err)->msg_code = 4;
# 97
    ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
    }
  }
  {
# 98
  coef->pub.compress_data = & compress_output;
  }
# 99
  break;
  default: 
  {
# 102
  (cinfo->err)->msg_code = 4;
# 102
  ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
  }
# 103
  break;
  }
# 103
  return;
}
}
# 116
static void compress_data(j_compress_ptr cinfo , JSAMPIMAGE input_buf ,
                          JDIMENSION *in_mcu_ctr ) 
{ jccoefct_my_coef_ptr coef ;
  JDIMENSION MCU_col_num ;
  JDIMENSION last_MCU_col ;
  JDIMENSION last_MCU_row ;
  int blkn ;
  int bi ;
  int ci ;
  int yindex ;
  int blockcnt ;
  JDIMENSION ypos ;
  JDIMENSION xpos ;
  jpeg_component_info *compptr ;
  boolean tmp ;

  {
  {
# 120
  coef = (my_coef_controller *)cinfo->coef;
# 122
  last_MCU_col = cinfo->MCUs_per_row - 1U;
# 123
  last_MCU_row = cinfo->MCU_rows_in_scan - 1U;
# 130
  MCU_col_num = (*in_mcu_ctr);
  }
# 130
  while (MCU_col_num <= last_MCU_col) {
    {
# 140
    blkn = 0;
# 141
    ci = 0;
    }
# 141
    while (ci < cinfo->comps_in_scan) {
      {
# 142
      compptr = cinfo->cur_comp_info[ci];
      }
# 143
      if (MCU_col_num < last_MCU_col) {
        {
# 143
        blockcnt = compptr->MCU_width;
        }
      } else {
        {
# 143
        blockcnt = compptr->last_col_width;
        }
      }
      {
# 145
      xpos = MCU_col_num * (unsigned int )compptr->MCU_sample_width;
# 146
      ypos = 0U;
# 147
      yindex = 0;
      }
# 147
      while (yindex < compptr->MCU_height) {
# 148
        if (coef->MCU_row_num < last_MCU_row) {
          goto _L;
        } else {
# 148
          if (yindex < compptr->last_row_height) {
            _L: 
            {
# 150
            ((*((cinfo->fdct)->forward_DCT)))(cinfo, compptr,
                                              (*(input_buf + ci)),
                                              coef->MCU_buffer[blkn], ypos,
                                              xpos, (unsigned int )blockcnt);
            }
# 153
            if (blockcnt < compptr->MCU_width) {
              {
# 155
              jzero_far((void *)coef->MCU_buffer[blkn + blockcnt],
                        (unsigned int )(compptr->MCU_width - blockcnt) *
                        sizeof(JBLOCK ));
# 157
              bi = blockcnt;
              }
# 157
              while (bi < compptr->MCU_width) {
                {
# 158
                (*(coef->MCU_buffer[blkn + bi] + 0))[0] = (*(coef->MCU_buffer[(blkn +
                                                                               bi) -
                                                                              1] +
                                                             0))[0];
# 157
                bi ++;
                }
              }
            }
          } else {
            {
# 163
            jzero_far((void *)coef->MCU_buffer[blkn],
                      (unsigned int )compptr->MCU_width * sizeof(JBLOCK ));
# 165
            bi = 0;
            }
# 165
            while (bi < compptr->MCU_width) {
              {
# 166
              (*(coef->MCU_buffer[blkn + bi] + 0))[0] = (*(coef->MCU_buffer[blkn -
                                                                            1] +
                                                           0))[0];
# 165
              bi ++;
              }
            }
          }
        }
        {
# 169
        blkn += compptr->MCU_width;
# 170
        ypos += 8U;
# 147
        yindex ++;
        }
      }
      {
# 141
      ci ++;
      }
    }
    {
# 176
    tmp = ((*((cinfo->entropy)->encode_mcu)))(cinfo, coef->MCU_buffer);
    }
# 176
    if (! tmp) {
# 177
      break;
    }
    {
# 130
    MCU_col_num ++;
    }
  }
# 179
  if (MCU_col_num > last_MCU_col) {
    {
# 180
    coef->MCU_row_num ++;
    }
  }
  {
# 181
  (*in_mcu_ctr) = MCU_col_num;
  }
# 182
  return;
}
}
# 208
static void compress_first_pass(j_compress_ptr cinfo , JSAMPIMAGE input_buf ,
                                JDIMENSION *in_mcu_ctr ) 
{ jccoefct_my_coef_ptr coef ;
  JDIMENSION last_MCU_row ;
  JDIMENSION blocks_across ;
  JDIMENSION MCUs_across ;
  JDIMENSION MCUindex ;
  int bi ;
  int ci ;
  int h_samp_factor ;
  int block_row ;
  int block_rows ;
  int ndummy ;
  JCOEF lastDC ;
  jpeg_component_info *compptr ;
  JBLOCKARRAY buffer ;
  JBLOCKROW thisblockrow ;
  JBLOCKROW lastblockrow ;

  {
  {
# 212
  coef = (my_coef_controller *)cinfo->coef;
# 213
  last_MCU_row = cinfo->total_iMCU_rows - 1U;
# 221
  ci = 0;
# 221
  compptr = cinfo->comp_info;
  }
# 221
  while (ci < cinfo->num_components) {
    {
# 224
    buffer = ((*((cinfo->mem)->access_virt_barray)))((struct jpeg_common_struct *)cinfo,
                                                     coef->whole_image[ci],
                                                     coef->MCU_row_num *
                                                     (unsigned int )compptr->v_samp_factor,
                                                     1);
    }
# 228
    if (coef->MCU_row_num < last_MCU_row) {
      {
# 229
      block_rows = compptr->v_samp_factor;
      }
    } else {
      {
# 231
      block_rows = (int )(compptr->height_in_blocks %
                          (unsigned int )compptr->v_samp_factor);
      }
# 232
      if (block_rows == 0) {
        {
# 232
        block_rows = compptr->v_samp_factor;
        }
      }
    }
    {
# 234
    blocks_across = compptr->width_in_blocks;
# 235
    h_samp_factor = compptr->h_samp_factor;
# 237
    ndummy = (int )(blocks_across % (unsigned int )h_samp_factor);
    }
# 238
    if (ndummy > 0) {
      {
# 239
      ndummy = h_samp_factor - ndummy;
      }
    }
    {
# 243
    block_row = 0;
    }
# 243
    while (block_row < block_rows) {
      {
# 244
      thisblockrow = (*(buffer + block_row));
# 245
      ((*((cinfo->fdct)->forward_DCT)))(cinfo, compptr, (*(input_buf + ci)),
                                        thisblockrow,
                                        (unsigned int )(block_row * 8), 0U,
                                        blocks_across);
      }
# 249
      if (ndummy > 0) {
        {
# 251
        thisblockrow += blocks_across;
# 252
        jzero_far((void *)thisblockrow, (unsigned int )ndummy * sizeof(JBLOCK ));
# 253
        lastDC = (*(thisblockrow + -1))[0];
# 254
        bi = 0;
        }
# 254
        while (bi < ndummy) {
          {
# 255
          (*(thisblockrow + bi))[0] = lastDC;
# 254
          bi ++;
          }
        }
      }
      {
# 243
      block_row ++;
      }
    }
# 264
    if (coef->MCU_row_num == last_MCU_row) {
      {
# 265
      blocks_across += (unsigned int )ndummy;
# 266
      MCUs_across = blocks_across / (unsigned int )h_samp_factor;
# 267
      block_row = block_rows;
      }
# 267
      while (block_row < compptr->v_samp_factor) {
        {
# 269
        thisblockrow = (*(buffer + block_row));
# 270
        lastblockrow = (*(buffer + (block_row - 1)));
# 271
        jzero_far((void *)thisblockrow, blocks_across * sizeof(JBLOCK ));
# 273
        MCUindex = 0U;
        }
# 273
        while (MCUindex < MCUs_across) {
          {
# 274
          lastDC = (*(lastblockrow + (h_samp_factor - 1)))[0];
# 275
          bi = 0;
          }
# 275
          while (bi < h_samp_factor) {
            {
# 276
            (*(thisblockrow + bi))[0] = lastDC;
# 275
            bi ++;
            }
          }
          {
# 278
          thisblockrow += h_samp_factor;
# 279
          lastblockrow += h_samp_factor;
# 273
          MCUindex ++;
          }
        }
        {
# 267
        block_row ++;
        }
      }
    }
    {
# 221
    ci ++;
# 221
    compptr ++;
    }
  }
  {
# 287
  compress_output(cinfo, input_buf, in_mcu_ctr);
  }
# 288
  return;
}
}
# 304
static void compress_output(j_compress_ptr cinfo , JSAMPIMAGE input_buf ,
                            JDIMENSION *in_mcu_ctr ) 
{ jccoefct_my_coef_ptr coef ;
  JDIMENSION MCU_col_num ;
  int blkn ;
  int ci ;
  int xindex ;
  int yindex ;
  int yoffset ;
  int num_MCU_rows ;
  JDIMENSION remaining_rows ;
  JDIMENSION start_col ;
  JBLOCKARRAY buffer[4] ;
  JBLOCKROW buffer_ptr ;
  jpeg_component_info *compptr ;
  int tmp ;
  JBLOCKROW tmp___0 ;
  boolean tmp___1 ;

  {
  {
# 308
  coef = (my_coef_controller *)cinfo->coef;
# 320
  ci = 0;
  }
# 320
  while (ci < cinfo->comps_in_scan) {
    {
# 321
    compptr = cinfo->cur_comp_info[ci];
# 322
    buffer[ci] = ((*((cinfo->mem)->access_virt_barray)))((struct jpeg_common_struct *)cinfo,
                                                         coef->whole_image[compptr->component_index],
                                                         coef->MCU_row_num *
                                                         (unsigned int )compptr->v_samp_factor,
                                                         0);
# 320
    ci ++;
    }
  }
# 331
  if (cinfo->comps_in_scan == 1) {
    {
# 332
    compptr = cinfo->cur_comp_info[0];
# 333
    num_MCU_rows = compptr->v_samp_factor;
# 335
    remaining_rows = cinfo->MCU_rows_in_scan -
                     coef->MCU_row_num * (unsigned int )compptr->v_samp_factor;
    }
# 337
    if (remaining_rows < (unsigned int )num_MCU_rows) {
      {
# 338
      num_MCU_rows = (int )remaining_rows;
      }
    }
  } else {
    {
# 340
    num_MCU_rows = 1;
    }
  }
  {
# 344
  yoffset = 0;
  }
# 344
  while (yoffset < num_MCU_rows) {
    {
# 345
    MCU_col_num = 0U;
    }
# 345
    while (MCU_col_num < cinfo->MCUs_per_row) {
      {
# 347
      blkn = 0;
# 348
      ci = 0;
      }
# 348
      while (ci < cinfo->comps_in_scan) {
        {
# 349
        compptr = cinfo->cur_comp_info[ci];
# 350
        start_col = MCU_col_num * (unsigned int )compptr->MCU_width;
# 351
        yindex = 0;
        }
# 351
        while (yindex < compptr->MCU_height) {
          {
# 352
          buffer_ptr = (*(buffer[ci] + (yindex + yoffset))) + start_col;
# 353
          xindex = 0;
          }
# 353
          while (xindex < compptr->MCU_width) {
            {
# 354
            tmp = blkn;
# 354
            blkn ++;
# 354
            tmp___0 = buffer_ptr;
# 354
            buffer_ptr ++;
# 354
            coef->MCU_buffer[tmp] = tmp___0;
# 353
            xindex ++;
            }
          }
          {
# 351
          yindex ++;
          }
        }
        {
# 348
        ci ++;
        }
      }
      {
# 359
      tmp___1 = ((*((cinfo->entropy)->encode_mcu)))(cinfo, coef->MCU_buffer);
      }
# 359
      if (! tmp___1) {
        {
# 360
        (cinfo->err)->msg_code = 17;
# 360
        ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
        }
      }
      {
# 345
      MCU_col_num ++;
      }
    }
    {
# 344
    yoffset ++;
    }
  }
  {
# 365
  coef->MCU_row_num ++;
# 366
  (*in_mcu_ctr) = cinfo->MCUs_per_row;
  }
# 367
  return;
}
}
# 376
void jinit_c_coef_controller(j_compress_ptr cinfo , boolean need_full_buffer ) 
{ jccoefct_my_coef_ptr coef ;
  int ci ;
  int i ;
  jpeg_component_info *compptr ;
  JBLOCKROW buffer ;
  JDIMENSION tmp___0 ;

  {
  {
# 384
  coef = (jccoefct_my_coef_ptr )alloc_small_wrapper((struct jpeg_common_struct *)cinfo,
                                                    1,
                                                    sizeof(my_coef_controller ));
# 387
  cinfo->coef = (struct jpeg_c_coef_controller */* __attribute__((__rtti__)) */)((struct jpeg_c_coef_controller *)coef);
# 388
  coef->pub.start_pass = & start_pass_coef;
  }
# 391
  if (need_full_buffer) {
    {
# 396
    ci = 0;
# 396
    compptr = cinfo->comp_info;
    }
# 396
    while (ci < cinfo->num_components) {
      {
# 398
      tmp___0 = (JDIMENSION )jround_up((long )compptr->width_in_blocks,
                                       (long )compptr->h_samp_factor);
# 398
      coef->whole_image[ci] = ((*((cinfo->mem)->request_virt_barray)))((struct jpeg_common_struct *)cinfo,
                                                                       1,
                                                                       tmp___0,
                                                                       compptr->height_in_blocks,
                                                                       (unsigned int )compptr->v_samp_factor);
# 396
      ci ++;
# 396
      compptr ++;
      }
    }
  } else {
    {
# 410
    buffer = (JBLOCKROW )alloc_large_wrapper((struct jpeg_common_struct *)cinfo,
                                             1, 10U * sizeof(JBLOCK ));
# 413
    i = 0;
    }
# 413
    while (i < 10) {
      {
# 414
      coef->MCU_buffer[i] = buffer + i;
# 413
      i ++;
      }
    }
    {
# 416
    coef->whole_image[0] = (struct jvirt_barray_control *)((void *)0);
    }
  }
# 418
  return;
}
}
# 83 "jccolor.c"
static void rgb_ycc_start(j_compress_ptr cinfo ) 
{ jccolor_my_convert_ptr cconvert ;
  INT32 *rgb_ycc_tab ;
  INT32 i ;

  {
  {
# 86
  cconvert = (my_color_converter *)cinfo->cconvert;
# 91
  rgb_ycc_tab = (INT32 *)alloc_small_wrapper((struct jpeg_common_struct *)cinfo,
                                             1, 2048U * sizeof(INT32 ));
# 91
  cconvert->rgb_ycc_tab = rgb_ycc_tab;
# 95
  i = 0L;
  }
# 95
  while (i <= 255L) {
    {
# 96
    (*(rgb_ycc_tab + i)) = (long )(0.29900 * (double )65536L + 0.5) * i;
# 97
    (*(rgb_ycc_tab + (i + 256L))) = (long )(0.58700 * (double )65536L + 0.5) * i;
# 98
    (*(rgb_ycc_tab + (i + 512L))) = (long )(0.11400 * (double )65536L + 0.5) * i +
                                    32768L;
# 99
    (*(rgb_ycc_tab + (i + 768L))) = - ((long )(0.16874 * (double )65536L + 0.5) *
                                       i);
# 100
    (*(rgb_ycc_tab + (i + 1024L))) = - ((long )(0.33126 * (double )65536L + 0.5) *
                                        i);
# 101
    (*(rgb_ycc_tab + (i + 1280L))) = (long )(0.50000 * (double )65536L + 0.5) *
                                     i + 8388608L;
# 105
    (*(rgb_ycc_tab + (i + 1536L))) = - ((long )(0.41869 * (double )65536L + 0.5) *
                                        i);
# 106
    (*(rgb_ycc_tab + (i + 1792L))) = - ((long )(0.08131 * (double )65536L + 0.5) *
                                        i);
# 95
    i ++;
    }
  }
# 108
  return;
}
}
# 123
static void rgb_ycc_convert(j_compress_ptr cinfo , JSAMPARRAY input_buf ,
                            JSAMPIMAGE output_buf , JDIMENSION output_row ,
                            int num_rows ) 
{ jccolor_my_convert_ptr cconvert ;
  register int r ;
  register int g ;
  register int b ;
  register INT32 *ctab ;
  register JSAMPROW inptr ;
  register JSAMPROW outptr0 ;
  register JSAMPROW outptr1 ;
  register JSAMPROW outptr2 ;
  register JDIMENSION col ;
  JDIMENSION num_cols ;
  JSAMPARRAY tmp ;

  {
  {
# 128
  cconvert = (my_color_converter *)cinfo->cconvert;
# 130
  ctab = cconvert->rgb_ycc_tab;
# 134
  num_cols = cinfo->image_width;
  }
# 136
  while (1) {
    {
# 136
    num_rows --;
    }
# 136
    if (! (num_rows >= 0)) {
# 136
      break;
    }
    {
# 137
    tmp = input_buf;
# 137
    input_buf ++;
# 137
    inptr = (*tmp);
# 138
    outptr0 = (*((*(output_buf + 0)) + output_row));
# 139
    outptr1 = (*((*(output_buf + 1)) + output_row));
# 140
    outptr2 = (*((*(output_buf + 2)) + output_row));
# 141
    output_row ++;
# 142
    col = 0U;
    }
# 142
    while (col < num_cols) {
      {
# 143
      r = (int )(*(inptr + 0));
# 144
      g = (int )(*(inptr + 1));
# 145
      b = (int )(*(inptr + 2));
# 146
      inptr += 3;
# 153
      (*(outptr0 + col)) = (unsigned char )((((*(ctab + r)) +
                                              (*(ctab + (g + 256)))) +
                                             (*(ctab + (b + 512)))) >> 16);
# 157
      (*(outptr1 + col)) = (unsigned char )((((*(ctab + (r + 768))) +
                                              (*(ctab + (g + 1024)))) +
                                             (*(ctab + (b + 1280)))) >> 16);
# 161
      (*(outptr2 + col)) = (unsigned char )((((*(ctab + (r + 1280))) +
                                              (*(ctab + (g + 1536)))) +
                                             (*(ctab + (b + 1792)))) >> 16);
# 142
      col ++;
      }
    }
  }
# 166
  return;
}
}
# 179
static void rgb_gray_convert(j_compress_ptr cinfo , JSAMPARRAY input_buf ,
                             JSAMPIMAGE output_buf , JDIMENSION output_row ,
                             int num_rows ) 
{ jccolor_my_convert_ptr cconvert ;
  register int r ;
  register int g ;
  register int b ;
  register INT32 *ctab ;
  register JSAMPROW inptr ;
  register JSAMPROW outptr ;
  register JDIMENSION col ;
  JDIMENSION num_cols ;
  JSAMPARRAY tmp ;

  {
  {
# 184
  cconvert = (my_color_converter *)cinfo->cconvert;
# 186
  ctab = cconvert->rgb_ycc_tab;
# 190
  num_cols = cinfo->image_width;
  }
# 192
  while (1) {
    {
# 192
    num_rows --;
    }
# 192
    if (! (num_rows >= 0)) {
# 192
      break;
    }
    {
# 193
    tmp = input_buf;
# 193
    input_buf ++;
# 193
    inptr = (*tmp);
# 194
    outptr = (*((*(output_buf + 0)) + output_row));
# 195
    output_row ++;
# 196
    col = 0U;
    }
# 196
    while (col < num_cols) {
      {
# 197
      r = (int )(*(inptr + 0));
# 198
      g = (int )(*(inptr + 1));
# 199
      b = (int )(*(inptr + 2));
# 200
      inptr += 3;
# 202
      (*(outptr + col)) = (unsigned char )((((*(ctab + r)) +
                                             (*(ctab + (g + 256)))) +
                                            (*(ctab + (b + 512)))) >> 16);
# 196
      col ++;
      }
    }
  }
# 207
  return;
}
}
# 218
static void cmyk_ycck_convert(j_compress_ptr cinfo , JSAMPARRAY input_buf ,
                              JSAMPIMAGE output_buf , JDIMENSION output_row ,
                              int num_rows ) 
{ jccolor_my_convert_ptr cconvert ;
  register int r ;
  register int g ;
  register int b ;
  register INT32 *ctab ;
  register JSAMPROW inptr ;
  register JSAMPROW outptr0 ;
  register JSAMPROW outptr1 ;
  register JSAMPROW outptr2 ;
  register JSAMPROW outptr3 ;
  register JDIMENSION col ;
  JDIMENSION num_cols ;
  JSAMPARRAY tmp ;

  {
  {
# 223
  cconvert = (my_color_converter *)cinfo->cconvert;
# 225
  ctab = cconvert->rgb_ycc_tab;
# 229
  num_cols = cinfo->image_width;
  }
# 231
  while (1) {
    {
# 231
    num_rows --;
    }
# 231
    if (! (num_rows >= 0)) {
# 231
      break;
    }
    {
# 232
    tmp = input_buf;
# 232
    input_buf ++;
# 232
    inptr = (*tmp);
# 233
    outptr0 = (*((*(output_buf + 0)) + output_row));
# 234
    outptr1 = (*((*(output_buf + 1)) + output_row));
# 235
    outptr2 = (*((*(output_buf + 2)) + output_row));
# 236
    outptr3 = (*((*(output_buf + 3)) + output_row));
# 237
    output_row ++;
# 238
    col = 0U;
    }
# 238
    while (col < num_cols) {
      {
# 239
      r = 255 - (int )(*(inptr + 0));
# 240
      g = 255 - (int )(*(inptr + 1));
# 241
      b = 255 - (int )(*(inptr + 2));
# 243
      (*(outptr3 + col)) = (*(inptr + 3));
# 244
      inptr += 4;
# 251
      (*(outptr0 + col)) = (unsigned char )((((*(ctab + r)) +
                                              (*(ctab + (g + 256)))) +
                                             (*(ctab + (b + 512)))) >> 16);
# 255
      (*(outptr1 + col)) = (unsigned char )((((*(ctab + (r + 768))) +
                                              (*(ctab + (g + 1024)))) +
                                             (*(ctab + (b + 1280)))) >> 16);
# 259
      (*(outptr2 + col)) = (unsigned char )((((*(ctab + (r + 1280))) +
                                              (*(ctab + (g + 1536)))) +
                                             (*(ctab + (b + 1792)))) >> 16);
# 238
      col ++;
      }
    }
  }
# 264
  return;
}
}
# 273
static void grayscale_convert(j_compress_ptr cinfo , JSAMPARRAY input_buf ,
                              JSAMPIMAGE output_buf , JDIMENSION output_row ,
                              int num_rows ) 
{ register JSAMPROW inptr ;
  register JSAMPROW outptr ;
  register JDIMENSION col ;
  JDIMENSION num_cols ;
  int instride ;
  JSAMPARRAY tmp ;

  {
  {
# 281
  num_cols = cinfo->image_width;
# 282
  instride = cinfo->input_components;
  }
# 284
  while (1) {
    {
# 284
    num_rows --;
    }
# 284
    if (! (num_rows >= 0)) {
# 284
      break;
    }
    {
# 285
    tmp = input_buf;
# 285
    input_buf ++;
# 285
    inptr = (*tmp);
# 286
    outptr = (*((*(output_buf + 0)) + output_row));
# 287
    output_row ++;
# 288
    col = 0U;
    }
# 288
    while (col < num_cols) {
      {
# 289
      (*(outptr + col)) = (*(inptr + 0));
# 290
      inptr += instride;
# 288
      col ++;
      }
    }
  }
# 293
  return;
}
}
# 302
static void null_convert(j_compress_ptr cinfo , JSAMPARRAY input_buf ,
                         JSAMPIMAGE output_buf , JDIMENSION output_row ,
                         int num_rows ) 
{ register JSAMPROW inptr ;
  register JSAMPROW outptr ;
  register JDIMENSION col ;
  register int ci ;
  int nc ;
  JDIMENSION num_cols ;

  {
  {
# 311
  nc = cinfo->num_components;
# 312
  num_cols = cinfo->image_width;
  }
# 314
  while (1) {
    {
# 314
    num_rows --;
    }
# 314
    if (! (num_rows >= 0)) {
# 314
      break;
    }
    {
# 316
    ci = 0;
    }
# 316
    while (ci < nc) {
      {
# 317
      inptr = (*input_buf);
# 318
      outptr = (*((*(output_buf + ci)) + output_row));
# 319
      col = 0U;
      }
# 319
      while (col < num_cols) {
        {
# 320
        (*(outptr + col)) = (*(inptr + ci));
# 321
        inptr += nc;
# 319
        col ++;
        }
      }
      {
# 316
      ci ++;
      }
    }
    {
# 324
    input_buf ++;
# 325
    output_row ++;
    }
  }
# 327
  return;
}
}
# 334
static void null_method(j_compress_ptr cinfo ) 
{ 

  {
# 338
  return;
}
}
# 345
void jinit_color_converter(j_compress_ptr cinfo ) 
{ jccolor_my_convert_ptr cconvert ;

  {
  {
# 350
  cconvert = (jccolor_my_convert_ptr )alloc_small_wrapper((struct jpeg_common_struct *)cinfo,
                                                          1,
                                                          sizeof(my_color_converter ));
# 353
  cinfo->cconvert = (struct jpeg_color_converter */* __attribute__((__rtti__)) */)((struct jpeg_color_converter *)cconvert);
# 355
  cconvert->pub.start_pass = & null_method;
  }
# 358
  switch (cinfo->in_color_space) {
  case 1: 
  {

  }
# 360
  if (cinfo->input_components != 1) {
    {
# 361
    (cinfo->err)->msg_code = 7;
# 361
    ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
    }
  }
# 362
  break;
  case 2: 
  {

  }
  case 3: 
  {

  }
# 372
  if (cinfo->input_components != 3) {
    {
# 373
    (cinfo->err)->msg_code = 7;
# 373
    ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
    }
  }
# 374
  break;
  case 4: 
  {

  }
  case 5: 
  {

  }
# 378
  if (cinfo->input_components != 4) {
    {
# 379
    (cinfo->err)->msg_code = 7;
# 379
    ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
    }
  }
# 380
  break;
  default: 
  {

  }
# 383
  if (cinfo->input_components < 1) {
    {
# 384
    (cinfo->err)->msg_code = 7;
# 384
    ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
    }
  }
# 385
  break;
  }
# 389
  switch (cinfo->jpeg_color_space) {
  case 1: 
  {

  }
# 391
  if (cinfo->num_components != 1) {
    {
# 392
    (cinfo->err)->msg_code = 8;
# 392
    ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
    }
  }
# 393
  if (cinfo->in_color_space == 1) {
    {
# 394
    cconvert->pub.color_convert = & grayscale_convert;
    }
  } else {
# 395
    if (cinfo->in_color_space == 2) {
      {
# 396
      cconvert->pub.start_pass = & rgb_ycc_start;
# 397
      cconvert->pub.color_convert = & rgb_gray_convert;
      }
    } else {
# 398
      if (cinfo->in_color_space == 3) {
        {
# 399
        cconvert->pub.color_convert = & grayscale_convert;
        }
      } else {
        {
# 401
        (cinfo->err)->msg_code = 20;
# 401
        ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
        }
      }
    }
  }
# 402
  break;
  case 2: 
  {

  }
# 405
  if (cinfo->num_components != 3) {
    {
# 406
    (cinfo->err)->msg_code = 8;
# 406
    ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
    }
  }
# 407
  if (cinfo->in_color_space == 2) {
    {
# 408
    cconvert->pub.color_convert = & null_convert;
    }
  } else {
    {
# 410
    (cinfo->err)->msg_code = 20;
# 410
    ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
    }
  }
# 411
  break;
  case 3: 
  {

  }
# 414
  if (cinfo->num_components != 3) {
    {
# 415
    (cinfo->err)->msg_code = 8;
# 415
    ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
    }
  }
# 416
  if (cinfo->in_color_space == 2) {
    {
# 417
    cconvert->pub.start_pass = & rgb_ycc_start;
# 418
    cconvert->pub.color_convert = & rgb_ycc_convert;
    }
  } else {
# 419
    if (cinfo->in_color_space == 3) {
      {
# 420
      cconvert->pub.color_convert = & null_convert;
      }
    } else {
      {
# 422
      (cinfo->err)->msg_code = 20;
# 422
      ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
      }
    }
  }
# 423
  break;
  case 4: 
  {

  }
# 426
  if (cinfo->num_components != 4) {
    {
# 427
    (cinfo->err)->msg_code = 8;
# 427
    ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
    }
  }
# 428
  if (cinfo->in_color_space == 4) {
    {
# 429
    cconvert->pub.color_convert = & null_convert;
    }
  } else {
    {
# 431
    (cinfo->err)->msg_code = 20;
# 431
    ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
    }
  }
# 432
  break;
  case 5: 
  {

  }
# 435
  if (cinfo->num_components != 4) {
    {
# 436
    (cinfo->err)->msg_code = 8;
# 436
    ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
    }
  }
# 437
  if (cinfo->in_color_space == 4) {
    {
# 438
    cconvert->pub.start_pass = & rgb_ycc_start;
# 439
    cconvert->pub.color_convert = & cmyk_ycck_convert;
    }
  } else {
# 440
    if (cinfo->in_color_space == 5) {
      {
# 441
      cconvert->pub.color_convert = & null_convert;
      }
    } else {
      {
# 443
      (cinfo->err)->msg_code = 20;
# 443
      ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
      }
    }
  }
# 444
  break;
  default: 
  {

  }
# 447
  if (cinfo->jpeg_color_space != cinfo->in_color_space) {
    {
# 449
    (cinfo->err)->msg_code = 20;
# 449
    ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
    }
  } else {
# 447
    if (cinfo->num_components != cinfo->input_components) {
      {
# 449
      (cinfo->err)->msg_code = 20;
# 449
      ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
      }
    }
  }
  {
# 450
  cconvert->pub.color_convert = & null_convert;
  }
# 451
  break;
  }
# 451
  return;
}
}
# 74 "jcsample.c"
static void start_pass_downsample(j_compress_ptr cinfo ) 
{ 

  {
# 78
  return;
}
}
# 86
static void expand_right_edge(JSAMPARRAY image_data , int num_rows ,
                              JDIMENSION input_cols , JDIMENSION output_cols ) 
{ register JSAMPROW ptr ;
  register JSAMPLE pixval___0 ;
  register int count ;
  int row ;
  int numcols ;
  JSAMPROW tmp ;

  {
  {
# 94
  numcols = (int )(output_cols - input_cols);
  }
# 96
  if (numcols > 0) {
    {
# 97
    row = 0;
    }
# 97
    while (row < num_rows) {
      {
# 98
      ptr = (*(image_data + row)) + input_cols;
# 99
      pixval___0 = (*(ptr + -1));
# 100
      count = numcols;
      }
# 100
      while (count > 0) {
        {
# 101
        tmp = ptr;
# 101
        ptr ++;
# 101
        (*tmp) = pixval___0;
# 100
        count --;
        }
      }
      {
# 97
      row ++;
      }
    }
  }
# 104
  return;
}
}
# 113
static void sep_downsample(j_compress_ptr cinfo , JSAMPIMAGE input_buf ,
                           JDIMENSION in_row_index , JSAMPIMAGE output_buf ,
                           JDIMENSION out_row_group_index ) 
{ my_downsample_ptr downsample ;
  int ci ;
  jpeg_component_info *compptr ;
  JSAMPARRAY in_ptr ;
  JSAMPARRAY out_ptr ;

  {
  {
# 118
  downsample = (my_downsampler *)cinfo->downsample;
# 123
  ci = 0;
# 123
  compptr = cinfo->comp_info;
  }
# 123
  while (ci < cinfo->num_components) {
    {
# 125
    in_ptr = (*(input_buf + ci)) + in_row_index;
# 126
    out_ptr = (*(output_buf + ci)) +
              out_row_group_index * (unsigned int )compptr->v_samp_factor;
# 127
    ((*(downsample->methods[ci])))(cinfo, compptr, in_ptr, out_ptr);
# 123
    ci ++;
# 123
    compptr ++;
    }
  }
# 129
  return;
}
}
# 139
static void int_downsample(j_compress_ptr cinfo , jpeg_component_info *compptr ,
                           JSAMPARRAY input_data , JSAMPARRAY output_data ) 
{ int inrow ;
  int outrow ;
  int h_expand ;
  int v_expand ;
  int numpix ;
  int numpix2 ;
  int h ;
  int v ;
  JDIMENSION outcol ;
  JDIMENSION outcol_h ;
  JDIMENSION output_cols ;
  JSAMPROW inptr ;
  JSAMPROW outptr ;
  INT32 outvalue ;
  JSAMPROW tmp ;
  JSAMPROW tmp___0 ;

  {
  {
# 145
  output_cols = compptr->width_in_blocks * 8U;
# 149
  h_expand = cinfo->max_h_samp_factor / compptr->h_samp_factor;
# 150
  v_expand = cinfo->max_v_samp_factor / compptr->v_samp_factor;
# 151
  numpix = h_expand * v_expand;
# 152
  numpix2 = numpix / 2;
# 158
  expand_right_edge(input_data, cinfo->max_v_samp_factor, cinfo->image_width,
                    output_cols * (unsigned int )h_expand);
# 161
  inrow = 0;
# 162
  outrow = 0;
  }
# 162
  while (outrow < compptr->v_samp_factor) {
    {
# 163
    outptr = (*(output_data + outrow));
# 164
    outcol = 0U;
# 164
    outcol_h = 0U;
    }
# 164
    while (outcol < output_cols) {
      {
# 166
      outvalue = 0L;
# 167
      v = 0;
      }
# 167
      while (v < v_expand) {
        {
# 168
        inptr = (*(input_data + (inrow + v))) + outcol_h;
# 169
        h = 0;
        }
# 169
        while (h < h_expand) {
          {
# 170
          tmp = inptr;
# 170
          inptr ++;
# 170
          outvalue += (long )((int )(*tmp));
# 169
          h ++;
          }
        }
        {
# 167
        v ++;
        }
      }
      {
# 173
      tmp___0 = outptr;
# 173
      outptr ++;
# 173
      (*tmp___0) = (unsigned char )((outvalue + (long )numpix2) / (long )numpix);
# 164
      outcol ++;
# 164
      outcol_h += (unsigned int )h_expand;
      }
    }
    {
# 175
    inrow += v_expand;
# 162
    outrow ++;
    }
  }
# 177
  return;
}
}
# 186
static void fullsize_downsample(j_compress_ptr cinfo ,
                                jpeg_component_info *compptr ,
                                JSAMPARRAY input_data , JSAMPARRAY output_data ) 
{ 

  {
  {
# 191
  jcopy_sample_rows(input_data, 0, output_data, 0, cinfo->max_v_samp_factor,
                    cinfo->image_width);
# 194
  expand_right_edge(output_data, cinfo->max_v_samp_factor, cinfo->image_width,
                    compptr->width_in_blocks * 8U);
  }
# 196
  return;
}
}
# 211
static void h2v1_downsample(j_compress_ptr cinfo ,
                            jpeg_component_info *compptr ,
                            JSAMPARRAY input_data , JSAMPARRAY output_data ) 
{ int outrow ;
  JDIMENSION outcol ;
  JDIMENSION output_cols ;
  register JSAMPROW inptr ;
  register JSAMPROW outptr ;
  register int bias ;
  JSAMPROW tmp ;

  {
  {
# 217
  output_cols = compptr->width_in_blocks * 8U;
# 225
  expand_right_edge(input_data, cinfo->max_v_samp_factor, cinfo->image_width,
                    output_cols * 2U);
# 228
  outrow = 0;
  }
# 228
  while (outrow < compptr->v_samp_factor) {
    {
# 229
    outptr = (*(output_data + outrow));
# 230
    inptr = (*(input_data + outrow));
# 231
    bias = 0;
# 232
    outcol = 0U;
    }
# 232
    while (outcol < output_cols) {
      {
# 233
      tmp = outptr;
# 233
      outptr ++;
# 233
      (*tmp) = (unsigned char )((((int )(*inptr) + (int )(*(inptr + 1))) + bias) >>
                                1);
# 235
      bias ^= 1;
# 236
      inptr += 2;
# 232
      outcol ++;
      }
    }
    {
# 228
    outrow ++;
    }
  }
# 239
  return;
}
}
# 248
static void h2v2_downsample(j_compress_ptr cinfo ,
                            jpeg_component_info *compptr ,
                            JSAMPARRAY input_data , JSAMPARRAY output_data ) 
{ int inrow ;
  int outrow ;
  JDIMENSION outcol ;
  JDIMENSION output_cols ;
  register JSAMPROW inptr0 ;
  register JSAMPROW inptr1 ;
  register JSAMPROW outptr ;
  register int bias ;
  JSAMPROW tmp ;

  {
  {
# 254
  output_cols = compptr->width_in_blocks * 8U;
# 262
  expand_right_edge(input_data, cinfo->max_v_samp_factor, cinfo->image_width,
                    output_cols * 2U);
# 265
  inrow = 0;
# 266
  outrow = 0;
  }
# 266
  while (outrow < compptr->v_samp_factor) {
    {
# 267
    outptr = (*(output_data + outrow));
# 268
    inptr0 = (*(input_data + inrow));
# 269
    inptr1 = (*(input_data + (inrow + 1)));
# 270
    bias = 1;
# 271
    outcol = 0U;
    }
# 271
    while (outcol < output_cols) {
      {
# 272
      tmp = outptr;
# 272
      outptr ++;
# 272
      (*tmp) = (unsigned char )((((((int )(*inptr0) + (int )(*(inptr0 + 1))) +
                                   (int )(*inptr1)) + (int )(*(inptr1 + 1))) +
                                 bias) >> 2);
# 275
      bias ^= 3;
# 276
      inptr0 += 2;
# 276
      inptr1 += 2;
# 271
      outcol ++;
      }
    }
    {
# 278
    inrow += 2;
# 266
    outrow ++;
    }
  }
# 280
  return;
}
}
# 291
static void h2v2_smooth_downsample(j_compress_ptr cinfo ,
                                   jpeg_component_info *compptr ,
                                   JSAMPARRAY input_data ,
                                   JSAMPARRAY output_data ) 
{ int inrow ;
  int outrow ;
  JDIMENSION colctr ;
  JDIMENSION output_cols ;
  register JSAMPROW inptr0 ;
  register JSAMPROW inptr1 ;
  register JSAMPROW above_ptr ;
  register JSAMPROW below_ptr ;
  register JSAMPROW outptr ;
  INT32 membersum ;
  INT32 neighsum ;
  INT32 memberscale ;
  INT32 neighscale ;
  JSAMPROW tmp ;
  JSAMPROW tmp___0 ;

  {
  {
# 297
  output_cols = compptr->width_in_blocks * 8U;
# 305
  expand_right_edge(input_data - 1, cinfo->max_v_samp_factor + 2,
                    cinfo->image_width, output_cols * 2U);
# 321
  memberscale = (long )(16384 - cinfo->smoothing_factor * 80);
# 322
  neighscale = (long )(cinfo->smoothing_factor * 16);
# 324
  inrow = 0;
# 325
  outrow = 0;
  }
# 325
  while (outrow < compptr->v_samp_factor) {
    {
# 326
    outptr = (*(output_data + outrow));
# 327
    inptr0 = (*(input_data + inrow));
# 328
    inptr1 = (*(input_data + (inrow + 1)));
# 329
    above_ptr = (*(input_data + (inrow - 1)));
# 330
    below_ptr = (*(input_data + (inrow + 2)));
# 333
    membersum = (long )((((int )(*inptr0) + (int )(*(inptr0 + 1))) +
                         (int )(*inptr1)) + (int )(*(inptr1 + 1)));
# 335
    neighsum = (long )((((((((int )(*above_ptr) + (int )(*(above_ptr + 1))) +
                            (int )(*below_ptr)) + (int )(*(below_ptr + 1))) +
                          (int )(*inptr0)) + (int )(*(inptr0 + 2))) +
                        (int )(*inptr1)) + (int )(*(inptr1 + 2)));
# 339
    neighsum += neighsum;
# 340
    neighsum += (long )((((int )(*above_ptr) + (int )(*(above_ptr + 2))) +
                         (int )(*below_ptr)) + (int )(*(below_ptr + 2)));
# 342
    membersum = membersum * memberscale + neighsum * neighscale;
# 343
    tmp = outptr;
# 343
    outptr ++;
# 343
    (*tmp) = (unsigned char )((membersum + 32768L) >> 16);
# 344
    inptr0 += 2;
# 344
    inptr1 += 2;
# 344
    above_ptr += 2;
# 344
    below_ptr += 2;
# 346
    colctr = output_cols - 2U;
    }
# 346
    while (colctr > 0U) {
      {
# 348
      membersum = (long )((((int )(*inptr0) + (int )(*(inptr0 + 1))) +
                           (int )(*inptr1)) + (int )(*(inptr1 + 1)));
# 351
      neighsum = (long )((((((((int )(*above_ptr) + (int )(*(above_ptr + 1))) +
                              (int )(*below_ptr)) + (int )(*(below_ptr + 1))) +
                            (int )(*(inptr0 + -1))) + (int )(*(inptr0 + 2))) +
                          (int )(*(inptr1 + -1))) + (int )(*(inptr1 + 2)));
# 356
      neighsum += neighsum;
# 358
      neighsum += (long )((((int )(*(above_ptr + -1)) + (int )(*(above_ptr + 2))) +
                           (int )(*(below_ptr + -1))) + (int )(*(below_ptr + 2)));
# 361
      membersum = membersum * memberscale + neighsum * neighscale;
# 363
      tmp___0 = outptr;
# 363
      outptr ++;
# 363
      (*tmp___0) = (unsigned char )((membersum + 32768L) >> 16);
# 364
      inptr0 += 2;
# 364
      inptr1 += 2;
# 364
      above_ptr += 2;
# 364
      below_ptr += 2;
# 346
      colctr --;
      }
    }
    {
# 368
    membersum = (long )((((int )(*inptr0) + (int )(*(inptr0 + 1))) +
                         (int )(*inptr1)) + (int )(*(inptr1 + 1)));
# 370
    neighsum = (long )((((((((int )(*above_ptr) + (int )(*(above_ptr + 1))) +
                            (int )(*below_ptr)) + (int )(*(below_ptr + 1))) +
                          (int )(*(inptr0 + -1))) + (int )(*(inptr0 + 1))) +
                        (int )(*(inptr1 + -1))) + (int )(*(inptr1 + 1)));
# 374
    neighsum += neighsum;
# 375
    neighsum += (long )((((int )(*(above_ptr + -1)) + (int )(*(above_ptr + 1))) +
                         (int )(*(below_ptr + -1))) + (int )(*(below_ptr + 1)));
# 377
    membersum = membersum * memberscale + neighsum * neighscale;
# 378
    (*outptr) = (unsigned char )((membersum + 32768L) >> 16);
# 380
    inrow += 2;
# 325
    outrow ++;
    }
  }
# 382
  return;
}
}
# 391
static void fullsize_smooth_downsample(j_compress_ptr cinfo ,
                                       jpeg_component_info *compptr ,
                                       JSAMPARRAY input_data ,
                                       JSAMPARRAY output_data ) 
{ int outrow ;
  JDIMENSION colctr ;
  JDIMENSION output_cols ;
  register JSAMPROW inptr ;
  register JSAMPROW above_ptr ;
  register JSAMPROW below_ptr ;
  register JSAMPROW outptr ;
  INT32 membersum ;
  INT32 neighsum ;
  INT32 memberscale ;
  INT32 neighscale ;
  int colsum ;
  int lastcolsum ;
  int nextcolsum ;
  JSAMPROW tmp ;
  JSAMPROW tmp___0 ;
  JSAMPROW tmp___1 ;
  JSAMPROW tmp___2 ;
  JSAMPROW tmp___3 ;
  JSAMPROW tmp___4 ;

  {
  {
# 397
  output_cols = compptr->width_in_blocks * 8U;
# 406
  expand_right_edge(input_data - 1, cinfo->max_v_samp_factor + 2,
                    cinfo->image_width, output_cols);
# 415
  memberscale = 65536L - (long )cinfo->smoothing_factor * 512L;
# 416
  neighscale = (long )(cinfo->smoothing_factor * 64);
# 418
  outrow = 0;
  }
# 418
  while (outrow < compptr->v_samp_factor) {
    {
# 419
    outptr = (*(output_data + outrow));
# 420
    inptr = (*(input_data + outrow));
# 421
    above_ptr = (*(input_data + (outrow - 1)));
# 422
    below_ptr = (*(input_data + (outrow + 1)));
# 425
    tmp = above_ptr;
# 425
    above_ptr ++;
# 425
    tmp___0 = below_ptr;
# 425
    below_ptr ++;
# 425
    colsum = ((int )(*tmp) + (int )(*tmp___0)) + (int )(*inptr);
# 427
    tmp___1 = inptr;
# 427
    inptr ++;
# 427
    membersum = (long )((int )(*tmp___1));
# 428
    nextcolsum = ((int )(*above_ptr) + (int )(*below_ptr)) + (int )(*inptr);
# 430
    neighsum = ((long )colsum + ((long )colsum - membersum)) + (long )nextcolsum;
# 431
    membersum = membersum * memberscale + neighsum * neighscale;
# 432
    tmp___2 = outptr;
# 432
    outptr ++;
# 432
    (*tmp___2) = (unsigned char )((membersum + 32768L) >> 16);
# 433
    lastcolsum = colsum;
# 433
    colsum = nextcolsum;
# 435
    colctr = output_cols - 2U;
    }
# 435
    while (colctr > 0U) {
      {
# 436
      tmp___3 = inptr;
# 436
      inptr ++;
# 436
      membersum = (long )((int )(*tmp___3));
# 437
      above_ptr ++;
# 437
      below_ptr ++;
# 438
      nextcolsum = ((int )(*above_ptr) + (int )(*below_ptr)) + (int )(*inptr);
# 440
      neighsum = ((long )lastcolsum + ((long )colsum - membersum)) +
                 (long )nextcolsum;
# 441
      membersum = membersum * memberscale + neighsum * neighscale;
# 442
      tmp___4 = outptr;
# 442
      outptr ++;
# 442
      (*tmp___4) = (unsigned char )((membersum + 32768L) >> 16);
# 443
      lastcolsum = colsum;
# 443
      colsum = nextcolsum;
# 435
      colctr --;
      }
    }
    {
# 447
    membersum = (long )((int )(*inptr));
# 448
    neighsum = ((long )lastcolsum + ((long )colsum - membersum)) + (long )colsum;
# 449
    membersum = membersum * memberscale + neighsum * neighscale;
# 450
    (*outptr) = (unsigned char )((membersum + 32768L) >> 16);
# 418
    outrow ++;
    }
  }
# 453
  return;
}
}
# 463
void jinit_downsampler(j_compress_ptr cinfo ) 
{ my_downsample_ptr downsample ;
  int ci ;
  jpeg_component_info *compptr ;
  boolean smoothok ;

  {
  {
# 469
  smoothok = 1;
# 471
  downsample = (my_downsample_ptr )alloc_small_wrapper((struct jpeg_common_struct *)cinfo,
                                                       1,
                                                       sizeof(my_downsampler ));
# 474
  cinfo->downsample = (struct jpeg_downsampler */* __attribute__((__rtti__)) */)((struct jpeg_downsampler *)downsample);
# 475
  downsample->pub.start_pass = & start_pass_downsample;
# 476
  downsample->pub.downsample = & sep_downsample;
# 477
  downsample->pub.need_context_rows = 0;
  }
# 479
  if (cinfo->CCIR601_sampling) {
    {
# 480
    (cinfo->err)->msg_code = 18;
# 480
    ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
    }
  }
  {
# 483
  ci = 0;
# 483
  compptr = cinfo->comp_info;
  }
# 483
  while (ci < cinfo->num_components) {
# 485
    if (compptr->h_samp_factor == cinfo->max_h_samp_factor) {
# 485
      if (compptr->v_samp_factor == cinfo->max_v_samp_factor) {
# 488
        if (cinfo->smoothing_factor) {
          {
# 489
          downsample->methods[ci] = & fullsize_smooth_downsample;
# 490
          downsample->pub.need_context_rows = 1;
          }
        } else {
          {
# 493
          downsample->methods[ci] = & fullsize_downsample;
          }
        }
      } else {
        goto _L___1;
      }
    } else {
      _L___1: 
# 494
      if (compptr->h_samp_factor * 2 == cinfo->max_h_samp_factor) {
# 494
        if (compptr->v_samp_factor == cinfo->max_v_samp_factor) {
          {
# 496
          smoothok = 0;
# 497
          downsample->methods[ci] = & h2v1_downsample;
          }
        } else {
          goto _L___0;
        }
      } else {
        _L___0: 
# 498
        if (compptr->h_samp_factor * 2 == cinfo->max_h_samp_factor) {
# 498
          if (compptr->v_samp_factor * 2 == cinfo->max_v_samp_factor) {
# 501
            if (cinfo->smoothing_factor) {
              {
# 502
              downsample->methods[ci] = & h2v2_smooth_downsample;
# 503
              downsample->pub.need_context_rows = 1;
              }
            } else {
              {
# 506
              downsample->methods[ci] = & h2v2_downsample;
              }
            }
          } else {
            goto _L;
          }
        } else {
          _L: 
# 507
          if (cinfo->max_h_samp_factor % compptr->h_samp_factor == 0) {
# 507
            if (cinfo->max_v_samp_factor % compptr->v_samp_factor == 0) {
              {
# 509
              smoothok = 0;
# 510
              downsample->methods[ci] = & int_downsample;
              }
            } else {
              {
# 512
              (cinfo->err)->msg_code = 32;
# 512
              ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
              }
            }
          } else {
            {
# 512
            (cinfo->err)->msg_code = 32;
# 512
            ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
            }
          }
        }
      }
    }
    {
# 483
    ci ++;
# 483
    compptr ++;
    }
  }
# 516
  if (cinfo->smoothing_factor) {
# 516
    if (! smoothok) {
      {
# 517
      (cinfo->err)->msg_code = 91;
# 517
      ((*((cinfo->err)->emit_message)))((struct jpeg_common_struct *)cinfo, 0);
      }
    }
  }
# 519
  return;
}
}
# 101 "jchuff.c"
static boolean encode_mcu_huff(j_compress_ptr cinfo , JBLOCKROW *MCU_data ) ;
# 103
static void finish_pass_huff(j_compress_ptr cinfo ) ;
# 105
static boolean encode_mcu_gather(j_compress_ptr cinfo , JBLOCKROW *MCU_data ) ;
# 107
static void finish_pass_gather(j_compress_ptr cinfo ) ;
# 109
static void fix_huff_tbl(j_compress_ptr cinfo , JHUFF_TBL *htbl ,
                         C_DERIVED_TBL **pdtbl ) ;
# 119
static void start_pass_huff(j_compress_ptr cinfo , boolean gather_statistics ) 
{ jchuff_huff_entropy_ptr entropy ;
  int ci ;
  int dctbl ;
  int actbl ;
  jpeg_component_info *compptr ;

  {
  {
# 122
  entropy = (huff_entropy_encoder *)cinfo->entropy;
  }
# 126
  if (gather_statistics) {
    {
# 128
    entropy->pub.encode_mcu = & encode_mcu_gather;
# 129
    entropy->pub.finish_pass = & finish_pass_gather;
    }
  } else {
    {
# 134
    entropy->pub.encode_mcu = & encode_mcu_huff;
# 135
    entropy->pub.finish_pass = & finish_pass_huff;
    }
  }
  {
# 138
  ci = 0;
  }
# 138
  while (ci < cinfo->comps_in_scan) {
    {
# 139
    compptr = cinfo->cur_comp_info[ci];
# 140
    dctbl = compptr->dc_tbl_no;
# 141
    actbl = compptr->ac_tbl_no;
    }
# 144
    if (dctbl < 0) {
      {
# 146
      (cinfo->err)->msg_code = 42;
# 146
      (cinfo->err)->msg_parm.i[0] = dctbl;
# 146
      ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
      }
    } else {
# 144
      if (dctbl >= 4) {
        {
# 146
        (cinfo->err)->msg_code = 42;
# 146
        (cinfo->err)->msg_parm.i[0] = dctbl;
# 146
        ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
        }
      } else {
# 144
        if ((unsigned int )cinfo->dc_huff_tbl_ptrs[dctbl] ==
            (unsigned int )((void *)0)) {
# 144
          if (! gather_statistics) {
            {
# 146
            (cinfo->err)->msg_code = 42;
# 146
            (cinfo->err)->msg_parm.i[0] = dctbl;
# 146
            ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
            }
          }
        }
      }
    }
# 147
    if (actbl < 0) {
      {
# 149
      (cinfo->err)->msg_code = 42;
# 149
      (cinfo->err)->msg_parm.i[0] = actbl;
# 149
      ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
      }
    } else {
# 147
      if (actbl >= 4) {
        {
# 149
        (cinfo->err)->msg_code = 42;
# 149
        (cinfo->err)->msg_parm.i[0] = actbl;
# 149
        ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
        }
      } else {
# 147
        if ((unsigned int )cinfo->ac_huff_tbl_ptrs[actbl] ==
            (unsigned int )((void *)0)) {
# 147
          if (! gather_statistics) {
            {
# 149
            (cinfo->err)->msg_code = 42;
# 149
            (cinfo->err)->msg_parm.i[0] = actbl;
# 149
            ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
            }
          }
        }
      }
    }
# 150
    if (gather_statistics) {
# 154
      if ((unsigned int )entropy->dc_count_ptrs[dctbl] ==
          (unsigned int )((void *)0)) {
        {
# 155
        entropy->dc_count_ptrs[dctbl] = (long *)alloc_small_wrapper((struct jpeg_common_struct *)cinfo,
                                                                    1,
                                                                    257U *
                                                                    sizeof(long ));
        }
      }
      {
# 158
      memset((void *)entropy->dc_count_ptrs[dctbl], 0, 257U * sizeof(long ));
      }
# 159
      if ((unsigned int )entropy->ac_count_ptrs[actbl] ==
          (unsigned int )((void *)0)) {
        {
# 160
        entropy->ac_count_ptrs[actbl] = (long *)alloc_small_wrapper((struct jpeg_common_struct *)cinfo,
                                                                    1,
                                                                    257U *
                                                                    sizeof(long ));
        }
      }
      {
# 163
      memset((void *)entropy->ac_count_ptrs[actbl], 0, 257U * sizeof(long ));
      }
    } else {
      {
# 168
      fix_huff_tbl(cinfo, cinfo->dc_huff_tbl_ptrs[dctbl],
                   & entropy->dc_derived_tbls[dctbl]);
# 170
      fix_huff_tbl(cinfo, cinfo->ac_huff_tbl_ptrs[actbl],
                   & entropy->ac_derived_tbls[actbl]);
      }
    }
    {
# 174
    entropy->saved.last_dc_val[ci] = 0;
# 138
    ci ++;
    }
  }
  {
# 178
  entropy->saved.put_buffer = 0L;
# 179
  entropy->saved.put_bits = 0;
# 182
  entropy->restarts_to_go = cinfo->restart_interval;
# 183
  entropy->next_restart_num = 0;
  }
# 184
  return;
}
}
# 187
static void fix_huff_tbl(j_compress_ptr cinfo , JHUFF_TBL *htbl ,
                         C_DERIVED_TBL **pdtbl ) 
{ C_DERIVED_TBL *dtbl ;
  int p ;
  int i ;
  int l ;
  int lastp ;
  int si ;
  char huffsize[257] ;
  unsigned int huffcode[257] ;
  unsigned int code ;
  int tmp___0 ;
  int tmp___1 ;

  {
# 198
  if ((unsigned int )(*pdtbl) == (unsigned int )((void *)0)) {
    {
# 199
    (*pdtbl) = (C_DERIVED_TBL *)alloc_small_wrapper((struct jpeg_common_struct *)cinfo,
                                                    1, sizeof(C_DERIVED_TBL ));
    }
  }
  {
# 202
  dtbl = (*pdtbl);
# 207
  p = 0;
# 208
  l = 1;
  }
# 208
  while (l <= 16) {
    {
# 209
    i = 1;
    }
# 209
    while (i <= (int )htbl->bits[l]) {
      {
# 210
      tmp___0 = p;
# 210
      p ++;
# 210
      huffsize[tmp___0] = (char )l;
# 209
      i ++;
      }
    }
    {
# 208
    l ++;
    }
  }
  {
# 212
  huffsize[p] = (char )0;
# 213
  lastp = p;
# 218
  code = 0U;
# 219
  si = (int )huffsize[0];
# 220
  p = 0;
  }
# 221
  while (huffsize[p]) {
# 222
    while ((int )huffsize[p] == si) {
      {
# 223
      tmp___1 = p;
# 223
      p ++;
# 223
      huffcode[tmp___1] = code;
# 224
      code ++;
      }
    }
    {
# 226
    code <<= 1;
# 227
    si ++;
    }
  }
  {
# 236
  memset((void *)(dtbl->ehufsi), 0, sizeof(dtbl->ehufsi));
# 238
  p = 0;
  }
# 238
  while (p < lastp) {
    {
# 239
    dtbl->ehufco[htbl->huffval[p]] = huffcode[p];
# 240
    dtbl->ehufsi[htbl->huffval[p]] = huffsize[p];
# 238
    p ++;
    }
  }
# 242
  return;
}
}
# 255
static boolean dump_buffer(jchuff_working_state *state ) 
{ struct jpeg_destination_mgr *dest ;
  boolean tmp ;

  {
  {
# 259
  dest = (struct jpeg_destination_mgr *)(state->cinfo)->dest;
# 261
  tmp = ((*(dest->empty_output_buffer)))(state->cinfo);
  }
# 261
  if (! tmp) {
# 262
    return (0);
  }
  {
# 264
  state->next_output_byte = dest->next_output_byte;
# 265
  state->free_in_buffer = dest->free_in_buffer;
  }
# 266
  return (1);
}
}
# 279
static boolean emit_bits(jchuff_working_state *state , unsigned int code ,
                         int size ) 
{ register INT32 put_buffer ;
  register int put_bits ;
  int c ;
  JOCTET *tmp ;
  boolean tmp___0 ;
  JOCTET *tmp___1 ;
  boolean tmp___2 ;

  {
  {
# 284
  put_buffer = (long )code;
# 285
  put_bits = state->cur.put_bits;
  }
# 288
  if (size == 0) {
    {
# 289
    ((state->cinfo)->err)->msg_code = 34;
# 289
    ((*(((state->cinfo)->err)->error_exit)))((struct jpeg_common_struct *)state->cinfo);
    }
  }
  {
# 291
  put_buffer &= (1L << size) - 1L;
# 293
  put_bits += size;
# 295
  put_buffer <<= 24 - put_bits;
# 297
  put_buffer |= state->cur.put_buffer;
  }
# 299
  while (put_bits >= 8) {
    {
# 300
    c = (int )((put_buffer >> 16) & 255L);
# 302
    tmp = state->next_output_byte;
# 302
    state->next_output_byte ++;
# 302
    (*tmp) = (unsigned char )c;
# 302
    state->free_in_buffer --;
    }
# 302
    if (state->free_in_buffer == 0U) {
      {
# 302
      tmp___0 = dump_buffer(state);
      }
# 302
      if (! tmp___0) {
# 302
        return (0);
      }
    }
# 303
    if (c == 255) {
      {
# 304
      tmp___1 = state->next_output_byte;
# 304
      state->next_output_byte ++;
# 304
      (*tmp___1) = (unsigned char )0;
# 304
      state->free_in_buffer --;
      }
# 304
      if (state->free_in_buffer == 0U) {
        {
# 304
        tmp___2 = dump_buffer(state);
        }
# 304
        if (! tmp___2) {
# 304
          return (0);
        }
      }
    }
    {
# 306
    put_buffer <<= 8;
# 307
    put_bits -= 8;
    }
  }
  {
# 310
  state->cur.put_buffer = put_buffer;
# 311
  state->cur.put_bits = put_bits;
  }
# 313
  return (1);
}
}
# 317
static boolean flush_bits(jchuff_working_state *state ) 
{ boolean tmp ;

  {
  {
# 320
  tmp = emit_bits(state, 127U, 7);
  }
# 320
  if (! tmp) {
# 321
    return (0);
  }
  {
# 322
  state->cur.put_buffer = 0L;
# 323
  state->cur.put_bits = 0;
  }
# 324
  return (1);
}
}
# 330
static boolean encode_one_block(jchuff_working_state *state , JCOEFPTR block ,
                                int last_dc_val , C_DERIVED_TBL *dctbl ,
                                C_DERIVED_TBL *actbl ) 
{ register int temp ;
  register int temp2 ;
  register int nbits ;
  register int k ;
  register int r ;
  register int i ;
  boolean tmp ;
  boolean tmp___0 ;
  boolean tmp___1 ;
  boolean tmp___2 ;
  boolean tmp___3 ;
  boolean tmp___4 ;

  {
  {
# 340
  temp2 = (int )(*(block + 0)) - last_dc_val;
# 340
  temp = temp2;
  }
# 342
  if (temp < 0) {
    {
# 343
    temp = - temp;
# 346
    temp2 --;
    }
  }
  {
# 350
  nbits = 0;
  }
# 351
  while (temp) {
    {
# 352
    nbits ++;
# 353
    temp >>= 1;
    }
  }
  {
# 357
  tmp = emit_bits(state, dctbl->ehufco[nbits], (int )dctbl->ehufsi[nbits]);
  }
# 357
  if (! tmp) {
# 358
    return (0);
  }
# 362
  if (nbits) {
    {
# 363
    tmp___0 = emit_bits(state, (unsigned int )temp2, nbits);
    }
# 363
    if (! tmp___0) {
# 364
      return (0);
    }
  }
  {
# 368
  r = 0;
# 370
  k = 1;
  }
# 370
  while (k < 64) {
    {
# 371
    temp = (int )(*(block + k));
    }
# 371
    if (temp == 0) {
      {
# 372
      r ++;
      }
    } else {
# 375
      while (r > 15) {
        {
# 376
        tmp___1 = emit_bits(state, actbl->ehufco[240], (int )actbl->ehufsi[240]);
        }
# 376
        if (! tmp___1) {
# 377
          return (0);
        }
        {
# 378
        r -= 16;
        }
      }
      {
# 381
      temp2 = temp;
      }
# 382
      if (temp < 0) {
        {
# 383
        temp = - temp;
# 385
        temp2 --;
        }
      }
      {
# 389
      nbits = 1;
      }
# 390
      while (1) {
        {
# 390
        temp >>= 1;
        }
# 390
        if (! temp) {
# 390
          break;
        }
        {
# 391
        nbits ++;
        }
      }
      {
# 394
      i = (r << 4) + nbits;
# 395
      tmp___2 = emit_bits(state, actbl->ehufco[i], (int )actbl->ehufsi[i]);
      }
# 395
      if (! tmp___2) {
# 396
        return (0);
      }
      {
# 400
      tmp___3 = emit_bits(state, (unsigned int )temp2, nbits);
      }
# 400
      if (! tmp___3) {
# 401
        return (0);
      }
      {
# 403
      r = 0;
      }
    }
    {
# 370
    k ++;
    }
  }
# 408
  if (r > 0) {
    {
# 409
    tmp___4 = emit_bits(state, actbl->ehufco[0], (int )actbl->ehufsi[0]);
    }
# 409
    if (! tmp___4) {
# 410
      return (0);
    }
  }
# 412
  return (1);
}
}
# 420
static boolean emit_restart(jchuff_working_state *state , int restart_num ) 
{ int ci ;
  boolean tmp ;
  JOCTET *tmp___0 ;
  boolean tmp___1 ;
  JOCTET *tmp___2 ;
  boolean tmp___3 ;

  {
  {
# 425
  tmp = flush_bits(state);
  }
# 425
  if (! tmp) {
# 426
    return (0);
  }
  {
# 428
  tmp___0 = state->next_output_byte;
# 428
  state->next_output_byte ++;
# 428
  (*tmp___0) = (unsigned char )255;
# 428
  state->free_in_buffer --;
  }
# 428
  if (state->free_in_buffer == 0U) {
    {
# 428
    tmp___1 = dump_buffer(state);
    }
# 428
    if (! tmp___1) {
# 428
      return (0);
    }
  }
  {
# 429
  tmp___2 = state->next_output_byte;
# 429
  state->next_output_byte ++;
# 429
  (*tmp___2) = (unsigned char )(208 + restart_num);
# 429
  state->free_in_buffer --;
  }
# 429
  if (state->free_in_buffer == 0U) {
    {
# 429
    tmp___3 = dump_buffer(state);
    }
# 429
    if (! tmp___3) {
# 429
      return (0);
    }
  }
  {
# 432
  ci = 0;
  }
# 432
  while (ci < (state->cinfo)->comps_in_scan) {
    {
# 433
    state->cur.last_dc_val[ci] = 0;
# 432
    ci ++;
    }
  }
# 437
  return (1);
}
}
# 445
static boolean encode_mcu_huff(j_compress_ptr cinfo , JBLOCKROW *MCU_data ) 
{ jchuff_huff_entropy_ptr entropy ;
  jchuff_working_state state ;
  int blkn ;
  int ci ;
  jpeg_component_info *compptr ;
  boolean tmp ;
  boolean tmp___0 ;

  {
  {
# 448
  entropy = (huff_entropy_encoder *)cinfo->entropy;
# 454
  state.next_output_byte = (cinfo->dest)->next_output_byte;
# 455
  state.free_in_buffer = (cinfo->dest)->free_in_buffer;
# 456
  state.cur = entropy->saved;
# 457
  state.cinfo = cinfo;
  }
# 460
  if (cinfo->restart_interval) {
# 461
    if (entropy->restarts_to_go == 0U) {
      {
# 462
      tmp = emit_restart(& state, entropy->next_restart_num);
      }
# 462
      if (! tmp) {
# 463
        return (0);
      }
    }
  }
  {
# 467
  blkn = 0;
  }
# 467
  while (blkn < cinfo->blocks_in_MCU) {
    {
# 468
    ci = cinfo->MCU_membership[blkn];
# 469
    compptr = cinfo->cur_comp_info[ci];
# 470
    tmp___0 = encode_one_block(& state, (*((*(MCU_data + blkn)) + 0)),
                               state.cur.last_dc_val[ci],
                               entropy->dc_derived_tbls[compptr->dc_tbl_no],
                               entropy->ac_derived_tbls[compptr->ac_tbl_no]);
    }
# 470
    if (! tmp___0) {
# 474
      return (0);
    }
    {
# 476
    state.cur.last_dc_val[ci] = (int )(*((*(MCU_data + blkn)) + 0))[0];
# 467
    blkn ++;
    }
  }
  {
# 480
  (cinfo->dest)->next_output_byte = state.next_output_byte;
# 481
  (cinfo->dest)->free_in_buffer = state.free_in_buffer;
# 482
  entropy->saved = state.cur;
  }
# 485
  if (cinfo->restart_interval) {
# 486
    if (entropy->restarts_to_go == 0U) {
      {
# 487
      entropy->restarts_to_go = cinfo->restart_interval;
# 488
      entropy->next_restart_num ++;
# 489
      entropy->next_restart_num &= 7;
      }
    }
    {
# 491
    entropy->restarts_to_go --;
    }
  }
# 494
  return (1);
}
}
# 502
static void finish_pass_huff(j_compress_ptr cinfo ) 
{ jchuff_huff_entropy_ptr entropy ;
  jchuff_working_state state ;
  boolean tmp ;

  {
  {
# 505
  entropy = (huff_entropy_encoder *)cinfo->entropy;
# 509
  state.next_output_byte = (cinfo->dest)->next_output_byte;
# 510
  state.free_in_buffer = (cinfo->dest)->free_in_buffer;
# 511
  state.cur = entropy->saved;
# 512
  state.cinfo = cinfo;
# 515
  tmp = flush_bits(& state);
  }
# 515
  if (! tmp) {
    {
# 516
    (cinfo->err)->msg_code = 17;
# 516
    ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
    }
  }
  {
# 519
  (cinfo->dest)->next_output_byte = state.next_output_byte;
# 520
  (cinfo->dest)->free_in_buffer = state.free_in_buffer;
# 521
  entropy->saved = state.cur;
  }
# 522
  return;
}
}
# 548
static void htest_one_block(JCOEFPTR block , int last_dc_val , long *dc_counts ,
                            long *ac_counts ) 
{ register int temp ;
  register int nbits ;
  register int k ;
  register int r ;

  {
  {
# 558
  temp = (int )(*(block + 0)) - last_dc_val;
  }
# 559
  if (temp < 0) {
    {
# 560
    temp = - temp;
    }
  }
  {
# 563
  nbits = 0;
  }
# 564
  while (temp) {
    {
# 565
    nbits ++;
# 566
    temp >>= 1;
    }
  }
  {
# 570
  (*(dc_counts + nbits)) = (*(dc_counts + nbits)) + 1L;
# 574
  r = 0;
# 576
  k = 1;
  }
# 576
  while (k < 64) {
    {
# 577
    temp = (int )(*(block + k));
    }
# 577
    if (temp == 0) {
      {
# 578
      r ++;
      }
    } else {
# 581
      while (r > 15) {
        {
# 582
        (*(ac_counts + 240)) = (*(ac_counts + 240)) + 1L;
# 583
        r -= 16;
        }
      }
# 587
      if (temp < 0) {
        {
# 588
        temp = - temp;
        }
      }
      {
# 591
      nbits = 1;
      }
# 592
      while (1) {
        {
# 592
        temp >>= 1;
        }
# 592
        if (! temp) {
# 592
          break;
        }
        {
# 593
        nbits ++;
        }
      }
      {
# 596
      (*(ac_counts + ((r << 4) + nbits))) = (*(ac_counts + ((r << 4) + nbits))) +
                                            1L;
# 598
      r = 0;
      }
    }
    {
# 576
    k ++;
    }
  }
# 603
  if (r > 0) {
    {
# 604
    (*(ac_counts + 0)) = (*(ac_counts + 0)) + 1L;
    }
  }
# 605
  return;
}
}
# 613
static boolean encode_mcu_gather(j_compress_ptr cinfo , JBLOCKROW *MCU_data ) 
{ jchuff_huff_entropy_ptr entropy ;
  int blkn ;
  int ci ;
  jpeg_component_info *compptr ;

  {
  {
# 616
  entropy = (huff_entropy_encoder *)cinfo->entropy;
  }
# 621
  if (cinfo->restart_interval) {
# 622
    if (entropy->restarts_to_go == 0U) {
      {
# 624
      ci = 0;
      }
# 624
      while (ci < cinfo->comps_in_scan) {
        {
# 625
        entropy->saved.last_dc_val[ci] = 0;
# 624
        ci ++;
        }
      }
      {
# 627
      entropy->restarts_to_go = cinfo->restart_interval;
      }
    }
    {
# 629
    entropy->restarts_to_go --;
    }
  }
  {
# 632
  blkn = 0;
  }
# 632
  while (blkn < cinfo->blocks_in_MCU) {
    {
# 633
    ci = cinfo->MCU_membership[blkn];
# 634
    compptr = cinfo->cur_comp_info[ci];
# 635
    htest_one_block((*((*(MCU_data + blkn)) + 0)),
                    entropy->saved.last_dc_val[ci],
                    entropy->dc_count_ptrs[compptr->dc_tbl_no],
                    entropy->ac_count_ptrs[compptr->ac_tbl_no]);
# 638
    entropy->saved.last_dc_val[ci] = (int )(*((*(MCU_data + blkn)) + 0))[0];
# 632
    blkn ++;
    }
  }
# 641
  return (1);
}
}
# 647
static void gen_huff_coding(j_compress_ptr cinfo , JHUFF_TBL *htbl , long *freq ) 
{ UINT8 bits[33] ;
  int codesize[257] ;
  int others[257] ;
  int c1 ;
  int c2 ;
  int p ;
  int i ;
  int j ;
  long v ;

  {
  {
# 660
  memset((void *)(bits), 0, sizeof(bits));
# 661
  memset((void *)(codesize), 0, sizeof(codesize));
# 662
  i = 0;
  }
# 662
  while (i < 257) {
    {
# 663
    others[i] = -1;
# 662
    i ++;
    }
  }
  {
# 665
  (*(freq + 256)) = 1L;
  }
# 673
  while (1) {
    {
# 676
    c1 = -1;
# 677
    v = 1000000000L;
# 678
    i = 0;
    }
# 678
    while (i <= 256) {
# 679
      if ((*(freq + i))) {
# 679
        if ((*(freq + i)) <= v) {
          {
# 680
          v = (*(freq + i));
# 681
          c1 = i;
          }
        }
      }
      {
# 678
      i ++;
      }
    }
    {
# 687
    c2 = -1;
# 688
    v = 1000000000L;
# 689
    i = 0;
    }
# 689
    while (i <= 256) {
# 690
      if ((*(freq + i))) {
# 690
        if ((*(freq + i)) <= v) {
# 690
          if (i != c1) {
            {
# 691
            v = (*(freq + i));
# 692
            c2 = i;
            }
          }
        }
      }
      {
# 689
      i ++;
      }
    }
# 697
    if (c2 < 0) {
# 698
      break;
    }
    {
# 701
    (*(freq + c1)) = (*(freq + c1)) + (*(freq + c2));
# 702
    (*(freq + c2)) = 0L;
# 705
    codesize[c1] ++;
    }
# 706
    while (others[c1] >= 0) {
      {
# 707
      c1 = others[c1];
# 708
      codesize[c1] ++;
      }
    }
    {
# 711
    others[c1] = c2;
# 714
    codesize[c2] ++;
    }
# 715
    while (others[c2] >= 0) {
      {
# 716
      c2 = others[c2];
# 717
      codesize[c2] ++;
      }
    }
  }
  {
# 722
  i = 0;
  }
# 722
  while (i <= 256) {
# 723
    if (codesize[i]) {
# 726
      if (codesize[i] > 32) {
        {
# 727
        (cinfo->err)->msg_code = 33;
# 727
        ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
        }
      }
      {
# 729
      bits[codesize[i]] = (unsigned char )((int )bits[codesize[i]] + 1);
      }
    }
    {
# 722
    i ++;
    }
  }
  {
# 744
  i = 32;
  }
# 744
  while (i > 16) {
# 745
    while ((int )bits[i] > 0) {
      {
# 746
      j = i - 2;
      }
# 747
      while ((int )bits[j] == 0) {
        {
# 748
        j --;
        }
      }
      {
# 750
      bits[i] = (unsigned char )((int )bits[i] - 2);
# 751
      bits[i - 1] = (unsigned char )((int )bits[i - 1] + 1);
# 752
      bits[j + 1] = (unsigned char )((int )bits[j + 1] + 2);
# 753
      bits[j] = (unsigned char )((int )bits[j] - 1);
      }
    }
    {
# 744
    i --;
    }
  }
# 758
  while ((int )bits[i] == 0) {
    {
# 759
    i --;
    }
  }
  {
# 760
  bits[i] = (unsigned char )((int )bits[i] - 1);
# 763
  memcpy((void */* __restrict  */)((void *)(htbl->bits)),
         (void const   */* __restrict  */)((void const   *)(bits)),
         sizeof(htbl->bits));
# 769
  p = 0;
# 770
  i = 1;
  }
# 770
  while (i <= 32) {
    {
# 771
    j = 0;
    }
# 771
    while (j <= 255) {
# 772
      if (codesize[j] == i) {
        {
# 773
        htbl->huffval[p] = (unsigned char )j;
# 774
        p ++;
        }
      }
      {
# 771
      j ++;
      }
    }
    {
# 770
    i ++;
    }
  }
  {
# 780
  htbl->sent_table = 0;
  }
# 781
  return;
}
}
# 788
static void finish_pass_gather(j_compress_ptr cinfo ) 
{ jchuff_huff_entropy_ptr entropy ;
  int ci ;
  int dctbl ;
  int actbl ;
  jpeg_component_info *compptr ;
  JHUFF_TBL **htblptr ;
  boolean did_dc[4] ;
  boolean did_ac[4] ;

  {
  {
# 791
  entropy = (huff_entropy_encoder *)cinfo->entropy;
# 801
  memset((void *)(did_dc), 0, sizeof(did_dc));
# 802
  memset((void *)(did_ac), 0, sizeof(did_ac));
# 804
  ci = 0;
  }
# 804
  while (ci < cinfo->comps_in_scan) {
    {
# 805
    compptr = cinfo->cur_comp_info[ci];
# 806
    dctbl = compptr->dc_tbl_no;
# 807
    actbl = compptr->ac_tbl_no;
    }
# 808
    if (! did_dc[dctbl]) {
      {
# 809
      htblptr = & cinfo->dc_huff_tbl_ptrs[dctbl];
      }
# 810
      if ((unsigned int )(*htblptr) == (unsigned int )((void *)0)) {
        {
# 811
        (*htblptr) = jpeg_alloc_huff_table((struct jpeg_common_struct *)cinfo);
        }
      }
      {
# 812
      gen_huff_coding(cinfo, (*htblptr), entropy->dc_count_ptrs[dctbl]);
# 813
      did_dc[dctbl] = 1;
      }
    }
# 815
    if (! did_ac[actbl]) {
      {
# 816
      htblptr = & cinfo->ac_huff_tbl_ptrs[actbl];
      }
# 817
      if ((unsigned int )(*htblptr) == (unsigned int )((void *)0)) {
        {
# 818
        (*htblptr) = jpeg_alloc_huff_table((struct jpeg_common_struct *)cinfo);
        }
      }
      {
# 819
      gen_huff_coding(cinfo, (*htblptr), entropy->ac_count_ptrs[actbl]);
# 820
      did_ac[actbl] = 1;
      }
    }
    {
# 804
    ci ++;
    }
  }
# 823
  return;
}
}
# 833
void jinit_huff_encoder(j_compress_ptr cinfo ) 
{ jchuff_huff_entropy_ptr entropy ;
  int i ;

  {
  {
# 839
  entropy = (jchuff_huff_entropy_ptr )alloc_small_wrapper((struct jpeg_common_struct *)cinfo,
                                                          1,
                                                          sizeof(huff_entropy_encoder ));
# 842
  cinfo->entropy = (struct jpeg_entropy_encoder */* __attribute__((__rtti__)) */)((struct jpeg_entropy_encoder *)entropy);
# 843
  entropy->pub.start_pass = & start_pass_huff;
# 846
  i = 0;
  }
# 846
  while (i < 4) {
    {
# 847
    entropy->ac_derived_tbls[i] = (C_DERIVED_TBL *)((void *)0);
# 847
    entropy->dc_derived_tbls[i] = entropy->ac_derived_tbls[i];
# 849
    entropy->ac_count_ptrs[i] = (long *)((void *)0);
# 849
    entropy->dc_count_ptrs[i] = entropy->ac_count_ptrs[i];
# 846
    i ++;
    }
  }
# 852
  return;
}
}
# 97 "jdct.h"
void jpeg_fdct_islow(DCTELEM *data ) ;
# 98
void jpeg_fdct_ifast(DCTELEM *data ) ;
# 99
void jpeg_fdct_float(float *data ) ;
# 101
void jpeg_idct_islow(j_decompress_ptr cinfo , jpeg_component_info *compptr ,
                     JCOEFPTR coef_block , JSAMPARRAY output_buf ,
                     JDIMENSION output_col ) ;
# 104
void jpeg_idct_ifast(j_decompress_ptr cinfo , jpeg_component_info *compptr ,
                     JCOEFPTR coef_block , JSAMPARRAY output_buf ,
                     JDIMENSION output_col ) ;
# 107
void jpeg_idct_float(j_decompress_ptr cinfo , jpeg_component_info *compptr ,
                     JCOEFPTR coef_block , JSAMPARRAY output_buf ,
                     JDIMENSION output_col ) ;
# 110
void jpeg_idct_4x4(j_decompress_ptr cinfo , jpeg_component_info *compptr ,
                   JCOEFPTR coef_block , JSAMPARRAY output_buf ,
                   JDIMENSION output_col ) ;
# 113
void jpeg_idct_2x2(j_decompress_ptr cinfo , jpeg_component_info *compptr ,
                   JCOEFPTR coef_block , JSAMPARRAY output_buf ,
                   JDIMENSION output_col ) ;
# 116
void jpeg_idct_1x1(j_decompress_ptr cinfo , jpeg_component_info *compptr ,
                   JCOEFPTR coef_block , JSAMPARRAY output_buf ,
                   JDIMENSION output_col ) ;
# 46 "jcdctmgr.c"
static int const   ZAG[64]   = 
# 46
  {0, 1, 8, 16, 9, 2, 3, 10, 17, 24, 32, 25, 18, 11, 4, 5, 12, 19, 26, 33, 40,
   48, 41, 34, 27, 20, 13, 6, 7, 14, 21, 28, 35, 42, 49, 56, 57, 50, 43, 36, 29,
   22, 15, 23, 30, 37, 44, 51, 58, 59, 52, 45, 38, 31, 39, 46, 53, 60, 61, 54,
   47, 55, 62, 63};
# 113
static void start_pass_fdctmgr(j_compress_ptr cinfo ) ;
# 113
static INT16 const   aanscales[64]   = 
# 113
  {(INT16 const   )((short )16384), (INT16 const   )((short )22725),
   (INT16 const   )((short )21407), (INT16 const   )((short )19266),
   (INT16 const   )((short )16384), (INT16 const   )((short )12873),
   (INT16 const   )((short )8867), (INT16 const   )((short )4520),
   (INT16 const   )((short )22725), (INT16 const   )((short )31521),
   (INT16 const   )((short )29692), (INT16 const   )((short )26722),
   (INT16 const   )((short )22725), (INT16 const   )((short )17855),
   (INT16 const   )((short )12299), (INT16 const   )((short )6270),
   (INT16 const   )((short )21407), (INT16 const   )((short )29692),
   (INT16 const   )((short )27969), (INT16 const   )((short )25172),
   (INT16 const   )((short )21407), (INT16 const   )((short )16819),
   (INT16 const   )((short )11585), (INT16 const   )((short )5906),
   (INT16 const   )((short )19266), (INT16 const   )((short )26722),
   (INT16 const   )((short )25172), (INT16 const   )((short )22654),
   (INT16 const   )((short )19266), (INT16 const   )((short )15137),
   (INT16 const   )((short )10426), (INT16 const   )((short )5315),
   (INT16 const   )((short )16384), (INT16 const   )((short )22725),
   (INT16 const   )((short )21407), (INT16 const   )((short )19266),
   (INT16 const   )((short )16384), (INT16 const   )((short )12873),
   (INT16 const   )((short )8867), (INT16 const   )((short )4520),
   (INT16 const   )((short )12873), (INT16 const   )((short )17855),
   (INT16 const   )((short )16819), (INT16 const   )((short )15137),
   (INT16 const   )((short )12873), (INT16 const   )((short )10114),
   (INT16 const   )((short )6967), (INT16 const   )((short )3552),
   (INT16 const   )((short )8867), (INT16 const   )((short )12299),
   (INT16 const   )((short )11585), (INT16 const   )((short )10426),
   (INT16 const   )((short )8867), (INT16 const   )((short )6967),
   (INT16 const   )((short )4799), (INT16 const   )((short )2446),
   (INT16 const   )((short )4520), (INT16 const   )((short )6270),
   (INT16 const   )((short )5906), (INT16 const   )((short )5315),
   (INT16 const   )((short )4520), (INT16 const   )((short )3552),
   (INT16 const   )((short )2446), (INT16 const   )((short )1247)};
# 154
static double const   aanscalefactor[8]   = 
# 154
  {(double const   )1.0, (double const   )1.387039845,
   (double const   )1.306562965, (double const   )1.175875602,
   (double const   )1.0, (double const   )0.785694958,
   (double const   )0.541196100, (double const   )0.275899379};
# 67
static void start_pass_fdctmgr(j_compress_ptr cinfo ) 
{ my_fdct_ptr fdct ;
  int ci ;
  int qtblno ;
  int i ;
  jpeg_component_info *compptr ;
  JQUANT_TBL *qtbl ;
  DCTELEM *dtbl ;
  float *fdtbl ;
  int row ;
  int col ;

  {
  {
# 70
  fdct = (my_fdct_controller *)cinfo->fdct;
# 76
  ci = 0;
# 76
  compptr = cinfo->comp_info;
  }
# 76
  while (ci < cinfo->num_components) {
    {
# 78
    qtblno = compptr->quant_tbl_no;
    }
# 80
    if (qtblno < 0) {
      {
# 82
      (cinfo->err)->msg_code = 44;
# 82
      (cinfo->err)->msg_parm.i[0] = qtblno;
# 82
      ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
      }
    } else {
# 80
      if (qtblno >= 4) {
        {
# 82
        (cinfo->err)->msg_code = 44;
# 82
        (cinfo->err)->msg_parm.i[0] = qtblno;
# 82
        ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
        }
      } else {
# 80
        if ((unsigned int )cinfo->quant_tbl_ptrs[qtblno] ==
            (unsigned int )((void *)0)) {
          {
# 82
          (cinfo->err)->msg_code = 44;
# 82
          (cinfo->err)->msg_parm.i[0] = qtblno;
# 82
          ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
          }
        }
      }
    }
    {
# 83
    qtbl = cinfo->quant_tbl_ptrs[qtblno];
    }
# 86
    switch (cinfo->dct_method) {
    case 0: 
    {

    }
# 92
    if ((unsigned int )fdct->divisors[qtblno] == (unsigned int )((void *)0)) {
      {
# 93
      fdct->divisors[qtblno] = (DCTELEM *)alloc_small_wrapper((struct jpeg_common_struct *)cinfo,
                                                              1,
                                                              64U *
                                                              sizeof(DCTELEM ));
      }
    }
    {
# 97
    dtbl = fdct->divisors[qtblno];
# 98
    i = 0;
    }
# 98
    while (i < 64) {
      {
# 99
      (*(dtbl + i)) = (int )qtbl->quantval[i] << 3;
# 98
      i ++;
      }
    }
# 101
    break;
    case 1: 
    {

    }
# 126
    if ((unsigned int )fdct->divisors[qtblno] == (unsigned int )((void *)0)) {
      {
# 127
      fdct->divisors[qtblno] = (DCTELEM *)alloc_small_wrapper((struct jpeg_common_struct *)cinfo,
                                                              1,
                                                              64U *
                                                              sizeof(DCTELEM ));
      }
    }
    {
# 131
    dtbl = fdct->divisors[qtblno];
# 132
    i = 0;
    }
# 132
    while (i < 64) {
      {
# 133
      (*(dtbl + i)) = (int )(((long )qtbl->quantval[i] *
                              (long )aanscales[ZAG[i]] + 1024L) >> 11);
# 132
      i ++;
      }
    }
# 139
    break;
    case 2: 
    {

    }
# 159
    if ((unsigned int )fdct->float_divisors[qtblno] ==
        (unsigned int )((void *)0)) {
      {
# 160
      fdct->float_divisors[qtblno] = (float *)alloc_small_wrapper((struct jpeg_common_struct *)cinfo,
                                                                  1,
                                                                  64U *
                                                                  sizeof(float ));
      }
    }
    {
# 165
    fdtbl = fdct->float_divisors[qtblno];
# 166
    i = 0;
    }
# 166
    while (i < 64) {
      {
# 167
      row = ZAG[i] >> 3;
# 168
      col = ZAG[i] & 7;
# 169
      (*(fdtbl + i)) = (float )(1.0 / ((((double )qtbl->quantval[i] *
                                         (double )aanscalefactor[row]) *
                                        (double )aanscalefactor[col]) * 8.0));
# 166
      i ++;
      }
    }
# 174
    break;
    default: 
    {
# 177
    (cinfo->err)->msg_code = 40;
# 177
    ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
    }
# 178
    break;
    }
    {
# 76
    ci ++;
# 76
    compptr ++;
    }
  }
# 181
  return;
}
}
# 192
static void forward_DCT(j_compress_ptr cinfo , jpeg_component_info *compptr ,
                        JSAMPARRAY sample_data , JBLOCKROW coef_blocks ,
                        JDIMENSION start_row , JDIMENSION start_col ,
                        JDIMENSION num_blocks ) 
{ my_fdct_ptr fdct ;
  void (*do_dct)(DCTELEM *data ) ;
  DCTELEM *divisors ;
  DCTELEM workspace[64] ;
  JDIMENSION bi ;
  register DCTELEM *workspaceptr ;
  register JSAMPROW elemptr ;
  register int elemr ;
  DCTELEM *tmp ;
  JSAMPROW tmp___0 ;
  DCTELEM *tmp___1 ;
  JSAMPROW tmp___2 ;
  DCTELEM *tmp___3 ;
  JSAMPROW tmp___4 ;
  DCTELEM *tmp___5 ;
  JSAMPROW tmp___6 ;
  DCTELEM *tmp___7 ;
  JSAMPROW tmp___8 ;
  DCTELEM *tmp___9 ;
  JSAMPROW tmp___10 ;
  DCTELEM *tmp___11 ;
  JSAMPROW tmp___12 ;
  DCTELEM *tmp___13 ;
  JSAMPROW tmp___14 ;
  register DCTELEM temp ;
  register DCTELEM qval ;
  register int i ;
  register JCOEFPTR output_ptr ;

  {
  {
# 200
  fdct = (my_fdct_controller *)cinfo->fdct;
# 201
  do_dct = fdct->do_dct;
# 202
  divisors = fdct->divisors[compptr->quant_tbl_no];
# 206
  sample_data += start_row;
# 208
  bi = 0U;
  }
# 208
  while (bi < num_blocks) {
    {
# 214
    workspaceptr = workspace;
# 215
    elemr = 0;
    }
# 215
    while (elemr < 8) {
      {
# 216
      elemptr = (*(sample_data + elemr)) + start_col;
# 218
      tmp = workspaceptr;
# 218
      workspaceptr ++;
# 218
      tmp___0 = elemptr;
# 218
      elemptr ++;
# 218
      (*tmp) = (int )(*tmp___0) - 128;
# 219
      tmp___1 = workspaceptr;
# 219
      workspaceptr ++;
# 219
      tmp___2 = elemptr;
# 219
      elemptr ++;
# 219
      (*tmp___1) = (int )(*tmp___2) - 128;
# 220
      tmp___3 = workspaceptr;
# 220
      workspaceptr ++;
# 220
      tmp___4 = elemptr;
# 220
      elemptr ++;
# 220
      (*tmp___3) = (int )(*tmp___4) - 128;
# 221
      tmp___5 = workspaceptr;
# 221
      workspaceptr ++;
# 221
      tmp___6 = elemptr;
# 221
      elemptr ++;
# 221
      (*tmp___5) = (int )(*tmp___6) - 128;
# 222
      tmp___7 = workspaceptr;
# 222
      workspaceptr ++;
# 222
      tmp___8 = elemptr;
# 222
      elemptr ++;
# 222
      (*tmp___7) = (int )(*tmp___8) - 128;
# 223
      tmp___9 = workspaceptr;
# 223
      workspaceptr ++;
# 223
      tmp___10 = elemptr;
# 223
      elemptr ++;
# 223
      (*tmp___9) = (int )(*tmp___10) - 128;
# 224
      tmp___11 = workspaceptr;
# 224
      workspaceptr ++;
# 224
      tmp___12 = elemptr;
# 224
      elemptr ++;
# 224
      (*tmp___11) = (int )(*tmp___12) - 128;
# 225
      tmp___13 = workspaceptr;
# 225
      workspaceptr ++;
# 225
      tmp___14 = elemptr;
# 225
      elemptr ++;
# 225
      (*tmp___13) = (int )(*tmp___14) - 128;
# 215
      elemr ++;
      }
    }
    {
# 237
    ((*do_dct))(workspace);
# 242
    output_ptr = (*(coef_blocks + bi));
# 244
    i = 0;
    }
# 244
    while (i < 64) {
      {
# 245
      qval = (*(divisors + i));
# 246
      temp = workspace[ZAG[i]];
      }
# 264
      if (temp < 0) {
        {
# 265
        temp = - temp;
# 266
        temp += qval >> 1;
        }
# 267
        if (temp >= qval) {
          {
# 267
          temp /= qval;
          }
        } else {
          {
# 267
          temp = 0;
          }
        }
        {
# 268
        temp = - temp;
        }
      } else {
        {
# 270
        temp += qval >> 1;
        }
# 271
        if (temp >= qval) {
          {
# 271
          temp /= qval;
          }
        } else {
          {
# 271
          temp = 0;
          }
        }
      }
      {
# 273
      (*(output_ptr + i)) = (short )temp;
# 244
      i ++;
      }
    }
    {
# 208
    bi ++;
# 208
    start_col += 8U;
    }
  }
# 277
  return;
}
}
# 282
static void forward_DCT_float(j_compress_ptr cinfo ,
                              jpeg_component_info *compptr ,
                              JSAMPARRAY sample_data , JBLOCKROW coef_blocks ,
                              JDIMENSION start_row , JDIMENSION start_col ,
                              JDIMENSION num_blocks ) 
{ my_fdct_ptr fdct ;
  void (*do_dct)(float *data ) ;
  float *divisors ;
  float workspace[64] ;
  JDIMENSION bi ;
  register float *workspaceptr ;
  register JSAMPROW elemptr ;
  register int elemr ;
  float *tmp ;
  JSAMPROW tmp___0 ;
  float *tmp___1 ;
  JSAMPROW tmp___2 ;
  float *tmp___3 ;
  JSAMPROW tmp___4 ;
  float *tmp___5 ;
  JSAMPROW tmp___6 ;
  float *tmp___7 ;
  JSAMPROW tmp___8 ;
  float *tmp___9 ;
  JSAMPROW tmp___10 ;
  float *tmp___11 ;
  JSAMPROW tmp___12 ;
  float *tmp___13 ;
  JSAMPROW tmp___14 ;
  register float temp ;
  register int i ;
  register JCOEFPTR output_ptr ;

  {
  {
# 290
  fdct = (my_fdct_controller *)cinfo->fdct;
# 291
  do_dct = fdct->do_float_dct;
# 292
  divisors = fdct->float_divisors[compptr->quant_tbl_no];
# 296
  sample_data += start_row;
# 298
  bi = 0U;
  }
# 298
  while (bi < num_blocks) {
    {
# 304
    workspaceptr = workspace;
# 305
    elemr = 0;
    }
# 305
    while (elemr < 8) {
      {
# 306
      elemptr = (*(sample_data + elemr)) + start_col;
# 308
      tmp = workspaceptr;
# 308
      workspaceptr ++;
# 308
      tmp___0 = elemptr;
# 308
      elemptr ++;
# 308
      (*tmp) = (float )((int )(*tmp___0) - 128);
# 309
      tmp___1 = workspaceptr;
# 309
      workspaceptr ++;
# 309
      tmp___2 = elemptr;
# 309
      elemptr ++;
# 309
      (*tmp___1) = (float )((int )(*tmp___2) - 128);
# 310
      tmp___3 = workspaceptr;
# 310
      workspaceptr ++;
# 310
      tmp___4 = elemptr;
# 310
      elemptr ++;
# 310
      (*tmp___3) = (float )((int )(*tmp___4) - 128);
# 311
      tmp___5 = workspaceptr;
# 311
      workspaceptr ++;
# 311
      tmp___6 = elemptr;
# 311
      elemptr ++;
# 311
      (*tmp___5) = (float )((int )(*tmp___6) - 128);
# 312
      tmp___7 = workspaceptr;
# 312
      workspaceptr ++;
# 312
      tmp___8 = elemptr;
# 312
      elemptr ++;
# 312
      (*tmp___7) = (float )((int )(*tmp___8) - 128);
# 313
      tmp___9 = workspaceptr;
# 313
      workspaceptr ++;
# 313
      tmp___10 = elemptr;
# 313
      elemptr ++;
# 313
      (*tmp___9) = (float )((int )(*tmp___10) - 128);
# 314
      tmp___11 = workspaceptr;
# 314
      workspaceptr ++;
# 314
      tmp___12 = elemptr;
# 314
      elemptr ++;
# 314
      (*tmp___11) = (float )((int )(*tmp___12) - 128);
# 315
      tmp___13 = workspaceptr;
# 315
      workspaceptr ++;
# 315
      tmp___14 = elemptr;
# 315
      elemptr ++;
# 315
      (*tmp___13) = (float )((int )(*tmp___14) - 128);
# 305
      elemr ++;
      }
    }
    {
# 327
    ((*do_dct))(workspace);
# 332
    output_ptr = (*(coef_blocks + bi));
# 334
    i = 0;
    }
# 334
    while (i < 64) {
      {
# 336
      temp = workspace[ZAG[i]] * (*(divisors + i));
# 343
      (*(output_ptr + i)) = (short )((int )(temp + (float )16384.5) - 16384);
# 334
      i ++;
      }
    }
    {
# 298
    bi ++;
# 298
    start_col += 8U;
    }
  }
# 347
  return;
}
}
# 356
void jinit_forward_dct(j_compress_ptr cinfo ) 
{ my_fdct_ptr fdct ;
  int i ;

  {
  {
# 362
  fdct = (my_fdct_ptr )alloc_small_wrapper((struct jpeg_common_struct *)cinfo,
                                           1, sizeof(my_fdct_controller ));
# 365
  cinfo->fdct = (struct jpeg_forward_dct */* __attribute__((__rtti__)) */)((struct jpeg_forward_dct *)fdct);
# 366
  fdct->pub.start_pass = & start_pass_fdctmgr;
  }
# 368
  switch (cinfo->dct_method) {
  case 0: 
  {
# 371
  fdct->pub.forward_DCT = & forward_DCT;
# 372
  fdct->do_dct = & jpeg_fdct_islow;
  }
# 373
  break;
  case 1: 
  {
# 377
  fdct->pub.forward_DCT = & forward_DCT;
# 378
  fdct->do_dct = & jpeg_fdct_ifast;
  }
# 379
  break;
  case 2: 
  {
# 383
  fdct->pub.forward_DCT = & forward_DCT_float;
# 384
  fdct->do_float_dct = & jpeg_fdct_float;
  }
# 385
  break;
  default: 
  {
# 388
  (cinfo->err)->msg_code = 40;
# 388
  ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
  }
# 389
  break;
  }
  {
# 393
  i = 0;
  }
# 393
  while (i < 4) {
    {
# 394
    fdct->divisors[i] = (DCTELEM *)((void *)0);
# 396
    fdct->float_divisors[i] = (float *)((void *)0);
# 393
    i ++;
    }
  }
# 393
  return;
}
}
# 113 "jfdctfst.c"
void jpeg_fdct_ifast(DCTELEM *data ) 
{ DCTELEM tmp0 ;
  DCTELEM tmp1 ;
  DCTELEM tmp2 ;
  DCTELEM tmp3 ;
  DCTELEM tmp4 ;
  DCTELEM tmp5 ;
  DCTELEM tmp6 ;
  DCTELEM tmp7 ;
  DCTELEM tmp10 ;
  DCTELEM tmp11 ;
  DCTELEM tmp12 ;
  DCTELEM tmp13 ;
  DCTELEM z1 ;
  DCTELEM z2 ;
  DCTELEM z3 ;
  DCTELEM z4 ;
  DCTELEM z5 ;
  DCTELEM z11 ;
  DCTELEM z13 ;
  DCTELEM *dataptr ;
  int ctr ;

  {
  {
# 125
  dataptr = data;
# 126
  ctr = 7;
  }
# 126
  while (ctr >= 0) {
    {
# 127
    tmp0 = (*(dataptr + 0)) + (*(dataptr + 7));
# 128
    tmp7 = (*(dataptr + 0)) - (*(dataptr + 7));
# 129
    tmp1 = (*(dataptr + 1)) + (*(dataptr + 6));
# 130
    tmp6 = (*(dataptr + 1)) - (*(dataptr + 6));
# 131
    tmp2 = (*(dataptr + 2)) + (*(dataptr + 5));
# 132
    tmp5 = (*(dataptr + 2)) - (*(dataptr + 5));
# 133
    tmp3 = (*(dataptr + 3)) + (*(dataptr + 4));
# 134
    tmp4 = (*(dataptr + 3)) - (*(dataptr + 4));
# 138
    tmp10 = tmp0 + tmp3;
# 139
    tmp13 = tmp0 - tmp3;
# 140
    tmp11 = tmp1 + tmp2;
# 141
    tmp12 = tmp1 - tmp2;
# 143
    (*(dataptr + 0)) = tmp10 + tmp11;
# 144
    (*(dataptr + 4)) = tmp10 - tmp11;
# 146
    z1 = (int )((long )(tmp12 + tmp13) * 181L >> 8);
# 147
    (*(dataptr + 2)) = tmp13 + z1;
# 148
    (*(dataptr + 6)) = tmp13 - z1;
# 152
    tmp10 = tmp4 + tmp5;
# 153
    tmp11 = tmp5 + tmp6;
# 154
    tmp12 = tmp6 + tmp7;
# 157
    z5 = (int )((long )(tmp10 - tmp12) * 98L >> 8);
# 158
    z2 = (int )((long )tmp10 * 139L >> 8) + z5;
# 159
    z4 = (int )((long )tmp12 * 334L >> 8) + z5;
# 160
    z3 = (int )((long )tmp11 * 181L >> 8);
# 162
    z11 = tmp7 + z3;
# 163
    z13 = tmp7 - z3;
# 165
    (*(dataptr + 5)) = z13 + z2;
# 166
    (*(dataptr + 3)) = z13 - z2;
# 167
    (*(dataptr + 1)) = z11 + z4;
# 168
    (*(dataptr + 7)) = z11 - z4;
# 170
    dataptr += 8;
# 126
    ctr --;
    }
  }
  {
# 175
  dataptr = data;
# 176
  ctr = 7;
  }
# 176
  while (ctr >= 0) {
    {
# 177
    tmp0 = (*(dataptr + 0)) + (*(dataptr + 56));
# 178
    tmp7 = (*(dataptr + 0)) - (*(dataptr + 56));
# 179
    tmp1 = (*(dataptr + 8)) + (*(dataptr + 48));
# 180
    tmp6 = (*(dataptr + 8)) - (*(dataptr + 48));
# 181
    tmp2 = (*(dataptr + 16)) + (*(dataptr + 40));
# 182
    tmp5 = (*(dataptr + 16)) - (*(dataptr + 40));
# 183
    tmp3 = (*(dataptr + 24)) + (*(dataptr + 32));
# 184
    tmp4 = (*(dataptr + 24)) - (*(dataptr + 32));
# 188
    tmp10 = tmp0 + tmp3;
# 189
    tmp13 = tmp0 - tmp3;
# 190
    tmp11 = tmp1 + tmp2;
# 191
    tmp12 = tmp1 - tmp2;
# 193
    (*(dataptr + 0)) = tmp10 + tmp11;
# 194
    (*(dataptr + 32)) = tmp10 - tmp11;
# 196
    z1 = (int )((long )(tmp12 + tmp13) * 181L >> 8);
# 197
    (*(dataptr + 16)) = tmp13 + z1;
# 198
    (*(dataptr + 48)) = tmp13 - z1;
# 202
    tmp10 = tmp4 + tmp5;
# 203
    tmp11 = tmp5 + tmp6;
# 204
    tmp12 = tmp6 + tmp7;
# 207
    z5 = (int )((long )(tmp10 - tmp12) * 98L >> 8);
# 208
    z2 = (int )((long )tmp10 * 139L >> 8) + z5;
# 209
    z4 = (int )((long )tmp12 * 334L >> 8) + z5;
# 210
    z3 = (int )((long )tmp11 * 181L >> 8);
# 212
    z11 = tmp7 + z3;
# 213
    z13 = tmp7 - z3;
# 215
    (*(dataptr + 40)) = z13 + z2;
# 216
    (*(dataptr + 24)) = z13 - z2;
# 217
    (*(dataptr + 8)) = z11 + z4;
# 218
    (*(dataptr + 56)) = z11 - z4;
# 220
    dataptr ++;
# 176
    ctr --;
    }
  }
# 222
  return;
}
}
# 58 "jfdctflt.c"
void jpeg_fdct_float(float *data ) 
{ float tmp0 ;
  float tmp1 ;
  float tmp2 ;
  float tmp3 ;
  float tmp4 ;
  float tmp5 ;
  float tmp6 ;
  float tmp7 ;
  float tmp10 ;
  float tmp11 ;
  float tmp12 ;
  float tmp13 ;
  float z1 ;
  float z2 ;
  float z3 ;
  float z4 ;
  float z5 ;
  float z11 ;
  float z13 ;
  float *dataptr ;
  int ctr ;

  {
  {
# 69
  dataptr = data;
# 70
  ctr = 7;
  }
# 70
  while (ctr >= 0) {
    {
# 71
    tmp0 = (*(dataptr + 0)) + (*(dataptr + 7));
# 72
    tmp7 = (*(dataptr + 0)) - (*(dataptr + 7));
# 73
    tmp1 = (*(dataptr + 1)) + (*(dataptr + 6));
# 74
    tmp6 = (*(dataptr + 1)) - (*(dataptr + 6));
# 75
    tmp2 = (*(dataptr + 2)) + (*(dataptr + 5));
# 76
    tmp5 = (*(dataptr + 2)) - (*(dataptr + 5));
# 77
    tmp3 = (*(dataptr + 3)) + (*(dataptr + 4));
# 78
    tmp4 = (*(dataptr + 3)) - (*(dataptr + 4));
# 82
    tmp10 = tmp0 + tmp3;
# 83
    tmp13 = tmp0 - tmp3;
# 84
    tmp11 = tmp1 + tmp2;
# 85
    tmp12 = tmp1 - tmp2;
# 87
    (*(dataptr + 0)) = tmp10 + tmp11;
# 88
    (*(dataptr + 4)) = tmp10 - tmp11;
# 90
    z1 = (tmp12 + tmp13) * (float )0.707106781;
# 91
    (*(dataptr + 2)) = tmp13 + z1;
# 92
    (*(dataptr + 6)) = tmp13 - z1;
# 96
    tmp10 = tmp4 + tmp5;
# 97
    tmp11 = tmp5 + tmp6;
# 98
    tmp12 = tmp6 + tmp7;
# 101
    z5 = (tmp10 - tmp12) * (float )0.382683433;
# 102
    z2 = (float )0.541196100 * tmp10 + z5;
# 103
    z4 = (float )1.306562965 * tmp12 + z5;
# 104
    z3 = tmp11 * (float )0.707106781;
# 106
    z11 = tmp7 + z3;
# 107
    z13 = tmp7 - z3;
# 109
    (*(dataptr + 5)) = z13 + z2;
# 110
    (*(dataptr + 3)) = z13 - z2;
# 111
    (*(dataptr + 1)) = z11 + z4;
# 112
    (*(dataptr + 7)) = z11 - z4;
# 114
    dataptr += 8;
# 70
    ctr --;
    }
  }
  {
# 119
  dataptr = data;
# 120
  ctr = 7;
  }
# 120
  while (ctr >= 0) {
    {
# 121
    tmp0 = (*(dataptr + 0)) + (*(dataptr + 56));
# 122
    tmp7 = (*(dataptr + 0)) - (*(dataptr + 56));
# 123
    tmp1 = (*(dataptr + 8)) + (*(dataptr + 48));
# 124
    tmp6 = (*(dataptr + 8)) - (*(dataptr + 48));
# 125
    tmp2 = (*(dataptr + 16)) + (*(dataptr + 40));
# 126
    tmp5 = (*(dataptr + 16)) - (*(dataptr + 40));
# 127
    tmp3 = (*(dataptr + 24)) + (*(dataptr + 32));
# 128
    tmp4 = (*(dataptr + 24)) - (*(dataptr + 32));
# 132
    tmp10 = tmp0 + tmp3;
# 133
    tmp13 = tmp0 - tmp3;
# 134
    tmp11 = tmp1 + tmp2;
# 135
    tmp12 = tmp1 - tmp2;
# 137
    (*(dataptr + 0)) = tmp10 + tmp11;
# 138
    (*(dataptr + 32)) = tmp10 - tmp11;
# 140
    z1 = (tmp12 + tmp13) * (float )0.707106781;
# 141
    (*(dataptr + 16)) = tmp13 + z1;
# 142
    (*(dataptr + 48)) = tmp13 - z1;
# 146
    tmp10 = tmp4 + tmp5;
# 147
    tmp11 = tmp5 + tmp6;
# 148
    tmp12 = tmp6 + tmp7;
# 151
    z5 = (tmp10 - tmp12) * (float )0.382683433;
# 152
    z2 = (float )0.541196100 * tmp10 + z5;
# 153
    z4 = (float )1.306562965 * tmp12 + z5;
# 154
    z3 = tmp11 * (float )0.707106781;
# 156
    z11 = tmp7 + z3;
# 157
    z13 = tmp7 - z3;
# 159
    (*(dataptr + 40)) = z13 + z2;
# 160
    (*(dataptr + 24)) = z13 - z2;
# 161
    (*(dataptr + 8)) = z11 + z4;
# 162
    (*(dataptr + 56)) = z11 - z4;
# 164
    dataptr ++;
# 120
    ctr --;
    }
  }
# 166
  return;
}
}
# 139 "jfdctint.c"
void jpeg_fdct_islow(DCTELEM *data ) 
{ INT32 tmp0 ;
  INT32 tmp1 ;
  INT32 tmp2 ;
  INT32 tmp3 ;
  INT32 tmp4 ;
  INT32 tmp5 ;
  INT32 tmp6 ;
  INT32 tmp7 ;
  INT32 tmp10 ;
  INT32 tmp11 ;
  INT32 tmp12 ;
  INT32 tmp13 ;
  INT32 z1 ;
  INT32 z2 ;
  INT32 z3 ;
  INT32 z4 ;
  INT32 z5 ;
  DCTELEM *dataptr ;
  int ctr ;

  {
  {
# 153
  dataptr = data;
# 154
  ctr = 7;
  }
# 154
  while (ctr >= 0) {
    {
# 155
    tmp0 = (long )((*(dataptr + 0)) + (*(dataptr + 7)));
# 156
    tmp7 = (long )((*(dataptr + 0)) - (*(dataptr + 7)));
# 157
    tmp1 = (long )((*(dataptr + 1)) + (*(dataptr + 6)));
# 158
    tmp6 = (long )((*(dataptr + 1)) - (*(dataptr + 6)));
# 159
    tmp2 = (long )((*(dataptr + 2)) + (*(dataptr + 5)));
# 160
    tmp5 = (long )((*(dataptr + 2)) - (*(dataptr + 5)));
# 161
    tmp3 = (long )((*(dataptr + 3)) + (*(dataptr + 4)));
# 162
    tmp4 = (long )((*(dataptr + 3)) - (*(dataptr + 4)));
# 168
    tmp10 = tmp0 + tmp3;
# 169
    tmp13 = tmp0 - tmp3;
# 170
    tmp11 = tmp1 + tmp2;
# 171
    tmp12 = tmp1 - tmp2;
# 173
    (*(dataptr + 0)) = (int )((tmp10 + tmp11) << 2);
# 174
    (*(dataptr + 4)) = (int )((tmp10 - tmp11) << 2);
# 176
    z1 = (tmp12 + tmp13) * 4433L;
# 177
    (*(dataptr + 2)) = (int )(((z1 + tmp13 * 6270L) + 1024L) >> 11);
# 179
    (*(dataptr + 6)) = (int )(((z1 + tmp12 * -15137L) + 1024L) >> 11);
# 187
    z1 = tmp4 + tmp7;
# 188
    z2 = tmp5 + tmp6;
# 189
    z3 = tmp4 + tmp6;
# 190
    z4 = tmp5 + tmp7;
# 191
    z5 = (z3 + z4) * 9633L;
# 193
    tmp4 = tmp4 * 2446L;
# 194
    tmp5 = tmp5 * 16819L;
# 195
    tmp6 = tmp6 * 25172L;
# 196
    tmp7 = tmp7 * 12299L;
# 197
    z1 = z1 * -7373L;
# 198
    z2 = z2 * -20995L;
# 199
    z3 = z3 * -16069L;
# 200
    z4 = z4 * -3196L;
# 202
    z3 += z5;
# 203
    z4 += z5;
# 205
    (*(dataptr + 7)) = (int )((((tmp4 + z1) + z3) + 1024L) >> 11);
# 206
    (*(dataptr + 5)) = (int )((((tmp5 + z2) + z4) + 1024L) >> 11);
# 207
    (*(dataptr + 3)) = (int )((((tmp6 + z2) + z3) + 1024L) >> 11);
# 208
    (*(dataptr + 1)) = (int )((((tmp7 + z1) + z4) + 1024L) >> 11);
# 210
    dataptr += 8;
# 154
    ctr --;
    }
  }
  {
# 218
  dataptr = data;
# 219
  ctr = 7;
  }
# 219
  while (ctr >= 0) {
    {
# 220
    tmp0 = (long )((*(dataptr + 0)) + (*(dataptr + 56)));
# 221
    tmp7 = (long )((*(dataptr + 0)) - (*(dataptr + 56)));
# 222
    tmp1 = (long )((*(dataptr + 8)) + (*(dataptr + 48)));
# 223
    tmp6 = (long )((*(dataptr + 8)) - (*(dataptr + 48)));
# 224
    tmp2 = (long )((*(dataptr + 16)) + (*(dataptr + 40)));
# 225
    tmp5 = (long )((*(dataptr + 16)) - (*(dataptr + 40)));
# 226
    tmp3 = (long )((*(dataptr + 24)) + (*(dataptr + 32)));
# 227
    tmp4 = (long )((*(dataptr + 24)) - (*(dataptr + 32)));
# 233
    tmp10 = tmp0 + tmp3;
# 234
    tmp13 = tmp0 - tmp3;
# 235
    tmp11 = tmp1 + tmp2;
# 236
    tmp12 = tmp1 - tmp2;
# 238
    (*(dataptr + 0)) = (int )(((tmp10 + tmp11) + 2L) >> 2);
# 239
    (*(dataptr + 32)) = (int )(((tmp10 - tmp11) + 2L) >> 2);
# 241
    z1 = (tmp12 + tmp13) * 4433L;
# 242
    (*(dataptr + 16)) = (int )(((z1 + tmp13 * 6270L) + 16384L) >> 15);
# 244
    (*(dataptr + 48)) = (int )(((z1 + tmp12 * -15137L) + 16384L) >> 15);
# 252
    z1 = tmp4 + tmp7;
# 253
    z2 = tmp5 + tmp6;
# 254
    z3 = tmp4 + tmp6;
# 255
    z4 = tmp5 + tmp7;
# 256
    z5 = (z3 + z4) * 9633L;
# 258
    tmp4 = tmp4 * 2446L;
# 259
    tmp5 = tmp5 * 16819L;
# 260
    tmp6 = tmp6 * 25172L;
# 261
    tmp7 = tmp7 * 12299L;
# 262
    z1 = z1 * -7373L;
# 263
    z2 = z2 * -20995L;
# 264
    z3 = z3 * -16069L;
# 265
    z4 = z4 * -3196L;
# 267
    z3 += z5;
# 268
    z4 += z5;
# 270
    (*(dataptr + 56)) = (int )((((tmp4 + z1) + z3) + 16384L) >> 15);
# 272
    (*(dataptr + 40)) = (int )((((tmp5 + z2) + z4) + 16384L) >> 15);
# 274
    (*(dataptr + 24)) = (int )((((tmp6 + z2) + z3) + 16384L) >> 15);
# 276
    (*(dataptr + 8)) = (int )((((tmp7 + z1) + z4) + 16384L) >> 15);
# 279
    dataptr ++;
# 219
    ctr --;
    }
  }
# 281
  return;
}
}
# 24 "jdapi.c"
void jpeg_create_decompress(j_decompress_ptr cinfo ) 
{ int i ;
  struct jpeg_error_mgr *err ;

  {
  {
# 33
  err = cinfo->err;
# 34
  memset((void *)cinfo, 0, sizeof(struct jpeg_decompress_struct ));
# 35
  cinfo->err = err;
# 37
  cinfo->is_decompressor = 1;
# 40
  jinit_memory_mgr((struct jpeg_common_struct *)cinfo);
# 43
  cinfo->progress = (struct jpeg_progress_mgr *)((void *)0);
# 44
  cinfo->src = (struct jpeg_source_mgr */* __attribute__((__rtti__)) */)((struct jpeg_source_mgr *)((void *)0));
# 46
  i = 0;
  }
# 46
  while (i < 4) {
    {
# 47
    cinfo->quant_tbl_ptrs[i] = (JQUANT_TBL *)((void *)0);
# 46
    i ++;
    }
  }
  {
# 49
  i = 0;
  }
# 49
  while (i < 4) {
    {
# 50
    cinfo->dc_huff_tbl_ptrs[i] = (JHUFF_TBL *)((void *)0);
# 51
    cinfo->ac_huff_tbl_ptrs[i] = (JHUFF_TBL *)((void *)0);
# 49
    i ++;
    }
  }
  {
# 54
  cinfo->sample_range_limit = (JSAMPLE *)((void *)0);
# 59
  cinfo->marker = (struct jpeg_marker_reader *)((void *)0);
# 60
  jinit_marker_reader(cinfo);
# 63
  cinfo->global_state = 200;
  }
# 64
  return;
}
}
# 71
void jpeg_destroy_decompress(j_decompress_ptr cinfo ) 
{ 

  {
  {
# 74
  jpeg_destroy((struct jpeg_common_struct *)cinfo);
  }
# 75
  return;
}
}
# 82
void jpeg_set_marker_processor(j_decompress_ptr cinfo , int marker_code ,
                               boolean (*routine)(j_decompress_ptr cinfo ) ) 
{ 

  {
# 86
  if (marker_code == 254) {
    {
# 87
    (cinfo->marker)->process_COM = routine;
    }
  } else {
# 88
    if (marker_code >= 224) {
# 88
      if (marker_code <= 239) {
        {
# 89
        (cinfo->marker)->process_APPn[marker_code - 224] = routine;
        }
      } else {
        {
# 91
        (cinfo->err)->msg_code = 60;
# 91
        (cinfo->err)->msg_parm.i[0] = marker_code;
# 91
        ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
        }
      }
    } else {
      {
# 91
      (cinfo->err)->msg_code = 60;
# 91
      (cinfo->err)->msg_parm.i[0] = marker_code;
# 91
      ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
      }
    }
  }
# 92
  return;
}
}
# 99
static void default_decompress_parms(j_decompress_ptr cinfo ) 
{ int cid0 ;
  int cid1 ;
  int cid2 ;
  int *_mp ;

  {
# 105
  switch (cinfo->num_components) {
  case 1: 
  {
# 107
  cinfo->jpeg_color_space = 1;
# 108
  cinfo->out_color_space = 1;
  }
# 109
  break;
  case 3: 
  {

  }
# 112
  if (cinfo->saw_JFIF_marker) {
    {
# 113
    cinfo->jpeg_color_space = 3;
    }
  } else {
# 114
    if (cinfo->saw_Adobe_marker) {
# 115
      switch ((int )cinfo->Adobe_transform) {
      case 0: 
      {
# 117
      cinfo->jpeg_color_space = 2;
      }
# 118
      break;
      case 1: 
      {
# 120
      cinfo->jpeg_color_space = 3;
      }
# 121
      break;
      default: 
      {
# 123
      (cinfo->err)->msg_code = 102;
# 123
      (cinfo->err)->msg_parm.i[0] = (int )cinfo->Adobe_transform;
# 123
      ((*((cinfo->err)->emit_message)))((struct jpeg_common_struct *)cinfo, -1);
# 124
      cinfo->jpeg_color_space = 3;
      }
# 125
      break;
      }
    } else {
      {
# 129
      cid0 = (cinfo->comp_info + 0)->component_id;
# 130
      cid1 = (cinfo->comp_info + 1)->component_id;
# 131
      cid2 = (cinfo->comp_info + 2)->component_id;
      }
# 133
      if (cid0 == 1) {
# 133
        if (cid1 == 2) {
# 133
          if (cid2 == 3) {
            {
# 134
            cinfo->jpeg_color_space = 3;
            }
          } else {
            goto _L___2;
          }
        } else {
          goto _L___2;
        }
      } else {
        _L___2: 
# 135
        if (cid0 == 82) {
# 135
          if (cid1 == 71) {
# 135
            if (cid2 == 66) {
              {
# 136
              cinfo->jpeg_color_space = 2;
              }
            } else {
              goto _L___0;
            }
          } else {
            goto _L___0;
          }
        } else {
          _L___0: 
# 138
          while (1) {
            {
# 138
            _mp = (cinfo->err)->msg_parm.i;
# 138
            (*(_mp + 0)) = cid0;
# 138
            (*(_mp + 1)) = cid1;
# 138
            (*(_mp + 2)) = cid2;
# 138
            (cinfo->err)->msg_code = 99;
# 138
            ((*((cinfo->err)->emit_message)))((struct jpeg_common_struct *)cinfo,
                                              1);
            }
# 138
            break;
          }
          {
# 139
          cinfo->jpeg_color_space = 3;
          }
        }
      }
    }
  }
  {
# 143
  cinfo->out_color_space = 2;
  }
# 144
  break;
  case 4: 
  {

  }
# 147
  if (cinfo->saw_Adobe_marker) {
# 148
    switch ((int )cinfo->Adobe_transform) {
    case 0: 
    {
# 150
    cinfo->jpeg_color_space = 4;
    }
# 151
    break;
    case 2: 
    {
# 153
    cinfo->jpeg_color_space = 5;
    }
# 154
    break;
    default: 
    {
# 156
    (cinfo->err)->msg_code = 102;
# 156
    (cinfo->err)->msg_parm.i[0] = (int )cinfo->Adobe_transform;
# 156
    ((*((cinfo->err)->emit_message)))((struct jpeg_common_struct *)cinfo, -1);
# 157
    cinfo->jpeg_color_space = 5;
    }
# 158
    break;
    }
  } else {
    {
# 162
    cinfo->jpeg_color_space = 4;
    }
  }
  {
# 164
  cinfo->out_color_space = 4;
  }
# 165
  break;
  default: 
  {
# 168
  cinfo->jpeg_color_space = 0;
# 169
  cinfo->out_color_space = 0;
  }
# 170
  break;
  }
  {
# 174
  cinfo->scale_num = 1U;
# 175
  cinfo->scale_denom = 1U;
# 176
  cinfo->output_gamma = 1.0;
# 177
  cinfo->raw_data_out = 0;
# 178
  cinfo->quantize_colors = 0;
# 180
  cinfo->two_pass_quantize = 1;
# 181
  cinfo->dither_mode = 2;
# 182
  cinfo->desired_number_of_colors = 256;
# 183
  cinfo->colormap = (JSAMPROW *)((void *)0);
# 185
  cinfo->dct_method = 0;
# 186
  cinfo->do_fancy_upsampling = 1;
  }
# 186
  return;
}
}
# 214
int jpeg_read_header(j_decompress_ptr cinfo , boolean require_image ) 
{ int retcode ;

  {
# 219
  if (cinfo->global_state == 200) {
    {
# 221
    ((*((cinfo->err)->reset_error_mgr)))((struct jpeg_common_struct *)cinfo);
# 222
    ((*((cinfo->marker)->reset_marker_reader)))(cinfo);
# 223
    ((*((cinfo->src)->init_source)))(cinfo);
# 224
    cinfo->global_state = 201;
    }
  } else {
# 225
    if (cinfo->global_state != 201) {
      {
# 226
      (cinfo->err)->msg_code = 14;
# 226
      (cinfo->err)->msg_parm.i[0] = cinfo->global_state;
# 226
      ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
      }
    }
  }
  {
# 229
  retcode = ((*((cinfo->marker)->read_markers)))(cinfo);
  }
# 231
  switch (retcode) {
  case 0: 
  {
# 234
  default_decompress_parms(cinfo);
# 236
  cinfo->global_state = 202;
  }
# 237
  break;
  case 1: 
  {

  }
# 240
  if ((cinfo->marker)->saw_SOF) {
    {
# 241
    (cinfo->err)->msg_code = 51;
# 241
    ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
    }
  }
# 242
  if (require_image) {
    {
# 243
    (cinfo->err)->msg_code = 43;
# 243
    ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
    }
  }
  {
# 248
  cinfo->global_state = 200;
  }
# 249
  break;
  case 2: 
  {

  }
# 253
  break;
  }
# 256
  return (retcode);
}
}
# 268
void jpeg_start_decompress(j_decompress_ptr cinfo ) 
{ JDIMENSION chunk_ctr ;
  JDIMENSION last_chunk_ctr ;

  {
# 273
  if (cinfo->global_state != 202) {
    {
# 274
    (cinfo->err)->msg_code = 14;
# 274
    (cinfo->err)->msg_parm.i[0] = cinfo->global_state;
# 274
    ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
    }
  }
  {
# 276
  jinit_master_decompress(cinfo);
  }
# 278
  while (1) {
    {
# 279
    ((*((cinfo->master)->prepare_for_pass)))(cinfo);
    }
# 280
    if ((cinfo->master)->is_last_pass) {
# 281
      break;
    }
    {
# 282
    chunk_ctr = 0U;
    }
# 283
    while (chunk_ctr < (cinfo->main)->num_chunks) {
# 285
      if ((unsigned int )cinfo->progress != (unsigned int )((void *)0)) {
        {
# 286
        (cinfo->progress)->pass_counter = (long )chunk_ctr;
# 287
        (cinfo->progress)->pass_limit = (long )(cinfo->main)->num_chunks;
# 288
        ((*((cinfo->progress)->progress_monitor)))((struct jpeg_common_struct *)cinfo);
        }
      }
      {
# 291
      last_chunk_ctr = chunk_ctr;
# 292
      ((*((cinfo->main)->process_data)))(cinfo, (JSAMPROW *)((void *)0),
                                         & chunk_ctr, 0U);
      }
# 294
      if (chunk_ctr == last_chunk_ctr) {
        {
# 295
        (cinfo->err)->msg_code = 17;
# 295
        ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
        }
      }
    }
    {
# 297
    ((*((cinfo->master)->finish_pass)))(cinfo);
    }
  }
  {
# 302
  cinfo->output_scanline = 0U;
  }
# 303
  if (cinfo->raw_data_out) {
    {
# 303
    cinfo->global_state = 204;
    }
  } else {
    {
# 303
    cinfo->global_state = 203;
    }
  }
# 304
  return;
}
}
# 320
JDIMENSION jpeg_read_scanlines(j_decompress_ptr cinfo , JSAMPARRAY scanlines ,
                               JDIMENSION max_lines ) 
{ JDIMENSION row_ctr ;

  {
# 326
  if (cinfo->global_state != 203) {
    {
# 327
    (cinfo->err)->msg_code = 14;
# 327
    (cinfo->err)->msg_parm.i[0] = cinfo->global_state;
# 327
    ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
    }
  }
# 328
  if (cinfo->output_scanline >= cinfo->output_height) {
    {
# 329
    (cinfo->err)->msg_code = 109;
# 329
    ((*((cinfo->err)->emit_message)))((struct jpeg_common_struct *)cinfo, -1);
    }
  }
# 332
  if ((unsigned int )cinfo->progress != (unsigned int )((void *)0)) {
    {
# 333
    (cinfo->progress)->pass_counter = (long )cinfo->output_scanline;
# 334
    (cinfo->progress)->pass_limit = (long )cinfo->output_height;
# 335
    ((*((cinfo->progress)->progress_monitor)))((struct jpeg_common_struct *)cinfo);
    }
  }
  {
# 339
  row_ctr = 0U;
# 340
  ((*((cinfo->main)->process_data)))(cinfo, scanlines, & row_ctr, max_lines);
# 341
  cinfo->output_scanline = cinfo->output_scanline + row_ctr;
  }
# 342
  return (row_ctr);
}
}
# 351
JDIMENSION jpeg_read_raw_data(j_decompress_ptr cinfo , JSAMPIMAGE data ,
                              JDIMENSION max_lines ) 
{ JDIMENSION lines_per_MCU_row ;
  boolean tmp ;

  {
# 357
  if (cinfo->global_state != 204) {
    {
# 358
    (cinfo->err)->msg_code = 14;
# 358
    (cinfo->err)->msg_parm.i[0] = cinfo->global_state;
# 358
    ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
    }
  }
# 359
  if (cinfo->output_scanline >= cinfo->output_height) {
    {
# 360
    (cinfo->err)->msg_code = 109;
# 360
    ((*((cinfo->err)->emit_message)))((struct jpeg_common_struct *)cinfo, -1);
    }
# 361
    return (0U);
  }
# 365
  if ((unsigned int )cinfo->progress != (unsigned int )((void *)0)) {
    {
# 366
    (cinfo->progress)->pass_counter = (long )cinfo->output_scanline;
# 367
    (cinfo->progress)->pass_limit = (long )cinfo->output_height;
# 368
    ((*((cinfo->progress)->progress_monitor)))((struct jpeg_common_struct *)cinfo);
    }
  }
  {
# 372
  lines_per_MCU_row = (unsigned int )(cinfo->max_v_samp_factor *
                                      cinfo->min_DCT_scaled_size);
  }
# 373
  if (max_lines < lines_per_MCU_row) {
    {
# 374
    (cinfo->err)->msg_code = 16;
# 374
    ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
    }
  }
  {
# 377
  tmp = ((*((cinfo->coef)->decompress_data)))(cinfo, data);
  }
# 377
  if (! tmp) {
# 378
    return (0U);
  }
  {
# 381
  cinfo->output_scanline = cinfo->output_scanline + lines_per_MCU_row;
  }
# 382
  return (lines_per_MCU_row);
}
}
# 395
boolean jpeg_finish_decompress(j_decompress_ptr cinfo ) 
{ int tmp ;

  {
# 398
  if (cinfo->global_state == 203) {
    goto _L;
  } else {
# 398
    if (cinfo->global_state == 204) {
      _L: 
# 401
      if (cinfo->output_scanline < cinfo->output_height) {
        {
# 402
        (cinfo->err)->msg_code = 59;
# 402
        ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
        }
      }
      {
# 403
      ((*((cinfo->master)->finish_pass)))(cinfo);
# 404
      cinfo->global_state = 205;
      }
    } else {
# 405
      if (cinfo->global_state != 205) {
        {
# 407
        (cinfo->err)->msg_code = 14;
# 407
        (cinfo->err)->msg_parm.i[0] = cinfo->global_state;
# 407
        ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
        }
      }
    }
  }
# 410
  if (! (cinfo->master)->eoi_processed) {
    {
# 411
    tmp = ((*((cinfo->marker)->read_markers)))(cinfo);
    }
# 411
    switch (tmp) {
    case 0: 
    {
# 413
    (cinfo->err)->msg_code = 29;
# 413
    ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
    }
# 414
    break;
    case 1: 
    {

    }
# 416
    break;
    case 2: 
    {

    }
# 418
    return (0);
    }
  }
  {
# 422
  ((*((cinfo->src)->term_source)))(cinfo);
# 424
  jpeg_abort((struct jpeg_common_struct *)cinfo);
  }
# 425
  return (1);
}
}
# 434
void jpeg_abort_decompress(j_decompress_ptr cinfo ) 
{ 

  {
  {
# 437
  jpeg_abort((struct jpeg_common_struct *)cinfo);
  }
# 438
  return;
}
}
# 44 "jdatasrc.c"
static void init_source(j_decompress_ptr cinfo ) 
{ my_src_ptr src ;

  {
  {
# 47
  src = (my_source_mgr *)cinfo->src;
# 53
  src->start_of_file = 1;
  }
# 54
  return;
}
}
# 90
static boolean fill_input_buffer(j_decompress_ptr cinfo ) 
{ my_src_ptr src ;
  size_t nbytes ;
  size_t tmp ;

  {
  {
# 93
  src = (my_source_mgr *)cinfo->src;
# 96
  tmp = fread((void */* __restrict  */)((void *)src->buffer), 1U, 4096U,
              (FILE */* __restrict  */)src->infile);
# 96
  nbytes = tmp;
  }
# 98
  if (nbytes <= 0U) {
# 99
    if (src->start_of_file) {
      {
# 100
      (cinfo->err)->msg_code = 36;
# 100
      ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
      }
    }
    {
# 101
    (cinfo->err)->msg_code = 106;
# 101
    ((*((cinfo->err)->emit_message)))((struct jpeg_common_struct *)cinfo, -1);
# 103
    (*(src->buffer + 0)) = (unsigned char )255;
# 104
    (*(src->buffer + 1)) = (unsigned char )217;
# 105
    nbytes = 2U;
    }
  }
  {
# 108
  src->pub.next_input_byte = (JOCTET const   *)src->buffer;
# 109
  src->pub.bytes_in_buffer = nbytes;
# 110
  src->start_of_file = 0;
  }
# 112
  return (1);
}
}
# 128
static void skip_input_data(j_decompress_ptr cinfo , long num_bytes ) 
{ my_src_ptr src ;

  {
  {
# 131
  src = (my_source_mgr *)cinfo->src;
  }
# 137
  if (num_bytes > 0L) {
# 138
    while (num_bytes > (long )src->pub.bytes_in_buffer) {
      {
# 139
      num_bytes -= (long )src->pub.bytes_in_buffer;
# 140
      fill_input_buffer(cinfo);
      }
    }
    {
# 142
    src->pub.next_input_byte = src->pub.next_input_byte +
                               (unsigned int )num_bytes;
# 143
    src->pub.bytes_in_buffer = src->pub.bytes_in_buffer -
                               (unsigned int )num_bytes;
    }
  }
# 145
  return;
}
}
# 166
static void term_source(j_decompress_ptr cinfo ) 
{ 

  {
# 170
  return;
}
}
# 179
void jpeg_stdio_src(j_decompress_ptr cinfo , FILE *infile ) 
{ my_src_ptr src ;
  void *tmp ;

  {
# 191
  if ((unsigned int )cinfo->src == (unsigned int )((void *)0)) {
    {
# 192
    tmp = alloc_small_wrapper((struct jpeg_common_struct *)cinfo, 0,
                              sizeof(my_source_mgr ));
# 192
    cinfo->src = (struct jpeg_source_mgr */* __attribute__((__rtti__)) */)((struct jpeg_source_mgr *)((struct my_source_mgr *)tmp));
# 195
    src = (my_source_mgr *)cinfo->src;
# 196
    src->buffer = (JOCTET *)alloc_small_wrapper((struct jpeg_common_struct *)cinfo,
                                                0, 4096U * sizeof(JOCTET ));
    }
  }
  {
# 202
  src = (my_source_mgr *)cinfo->src;
# 203
  src->pub.init_source = & init_source;
# 204
  src->pub.fill_input_buffer = & fill_input_buffer;
# 205
  src->pub.skip_input_data = & skip_input_data;
# 206
  src->pub.resync_to_restart = & jpeg_resync_to_restart;
# 207
  src->pub.term_source = & term_source;
# 208
  src->infile = infile;
# 209
  src->pub.bytes_in_buffer = 0U;
# 210
  src->pub.next_input_byte = (JOCTET const   *)((void *)0);
  }
# 211
  return;
}
}
# 57 "jdmaster.c"
static boolean use_merged_upsample(j_decompress_ptr cinfo ) 
{ 

  {
# 62
  if (cinfo->do_fancy_upsampling) {
# 63
    return (0);
  } else {
# 62
    if (cinfo->CCIR601_sampling) {
# 63
      return (0);
    }
  }
# 65
  if (cinfo->jpeg_color_space != 3) {
# 68
    return (0);
  } else {
# 65
    if (cinfo->num_components != 3) {
# 68
      return (0);
    } else {
# 65
      if (cinfo->out_color_space != 2) {
# 68
        return (0);
      } else {
# 65
        if (cinfo->out_color_components != 3) {
# 68
          return (0);
        }
      }
    }
  }
# 70
  if ((cinfo->comp_info + 0)->h_samp_factor != 2) {
# 76
    return (0);
  } else {
# 70
    if ((cinfo->comp_info + 1)->h_samp_factor != 1) {
# 76
      return (0);
    } else {
# 70
      if ((cinfo->comp_info + 2)->h_samp_factor != 1) {
# 76
        return (0);
      } else {
# 70
        if ((cinfo->comp_info + 0)->v_samp_factor > 2) {
# 76
          return (0);
        } else {
# 70
          if ((cinfo->comp_info + 1)->v_samp_factor != 1) {
# 76
            return (0);
          } else {
# 70
            if ((cinfo->comp_info + 2)->v_samp_factor != 1) {
# 76
              return (0);
            }
          }
        }
      }
    }
  }
# 78
  if ((cinfo->comp_info + 0)->DCT_scaled_size != cinfo->min_DCT_scaled_size) {
# 81
    return (0);
  } else {
# 78
    if ((cinfo->comp_info + 1)->DCT_scaled_size != cinfo->min_DCT_scaled_size) {
# 81
      return (0);
    } else {
# 78
      if ((cinfo->comp_info + 2)->DCT_scaled_size != cinfo->min_DCT_scaled_size) {
# 81
        return (0);
      }
    }
  }
# 84
  return (1);
}
}
# 98
void jpeg_calc_output_dimensions(j_decompress_ptr cinfo ) 
{ int ci ;
  jpeg_component_info *compptr ;
  int ssize ;
  boolean tmp___5 ;

  {
  {
# 106
  cinfo->max_h_samp_factor = 1;
# 107
  cinfo->max_v_samp_factor = 1;
# 108
  ci = 0;
# 108
  compptr = cinfo->comp_info;
  }
# 108
  while (ci < cinfo->num_components) {
# 110
    if (compptr->h_samp_factor <= 0) {
      {
# 112
      (cinfo->err)->msg_code = 13;
# 112
      ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
      }
    } else {
# 110
      if (compptr->h_samp_factor > 4) {
        {
# 112
        (cinfo->err)->msg_code = 13;
# 112
        ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
        }
      } else {
# 110
        if (compptr->v_samp_factor <= 0) {
          {
# 112
          (cinfo->err)->msg_code = 13;
# 112
          ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
          }
        } else {
# 110
          if (compptr->v_samp_factor > 4) {
            {
# 112
            (cinfo->err)->msg_code = 13;
# 112
            ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
            }
          }
        }
      }
    }
# 113
    if (cinfo->max_h_samp_factor > compptr->h_samp_factor) {
      {
# 113
      cinfo->max_h_samp_factor = cinfo->max_h_samp_factor;
      }
    } else {
      {
# 113
      cinfo->max_h_samp_factor = compptr->h_samp_factor;
      }
    }
# 115
    if (cinfo->max_v_samp_factor > compptr->v_samp_factor) {
      {
# 115
      cinfo->max_v_samp_factor = cinfo->max_v_samp_factor;
      }
    } else {
      {
# 115
      cinfo->max_v_samp_factor = compptr->v_samp_factor;
      }
    }
    {
# 108
    ci ++;
# 108
    compptr ++;
    }
  }
# 121
  if (cinfo->scale_num * 8U <= cinfo->scale_denom) {
    {
# 123
    cinfo->output_width = (JDIMENSION )jdiv_round_up((long )cinfo->image_width,
                                                     8L);
# 125
    cinfo->output_height = (JDIMENSION )jdiv_round_up((long )cinfo->image_height,
                                                      8L);
# 127
    cinfo->min_DCT_scaled_size = 1;
    }
  } else {
# 128
    if (cinfo->scale_num * 4U <= cinfo->scale_denom) {
      {
# 130
      cinfo->output_width = (JDIMENSION )jdiv_round_up((long )cinfo->image_width,
                                                       4L);
# 132
      cinfo->output_height = (JDIMENSION )jdiv_round_up((long )cinfo->image_height,
                                                        4L);
# 134
      cinfo->min_DCT_scaled_size = 2;
      }
    } else {
# 135
      if (cinfo->scale_num * 2U <= cinfo->scale_denom) {
        {
# 137
        cinfo->output_width = (JDIMENSION )jdiv_round_up((long )cinfo->image_width,
                                                         2L);
# 139
        cinfo->output_height = (JDIMENSION )jdiv_round_up((long )cinfo->image_height,
                                                          2L);
# 141
        cinfo->min_DCT_scaled_size = 4;
        }
      } else {
        {
# 144
        cinfo->output_width = cinfo->image_width;
# 145
        cinfo->output_height = cinfo->image_height;
# 146
        cinfo->min_DCT_scaled_size = 8;
        }
      }
    }
  }
  {
# 153
  ci = 0;
# 153
  compptr = cinfo->comp_info;
  }
# 153
  while (ci < cinfo->num_components) {
    {
# 155
    ssize = cinfo->min_DCT_scaled_size;
    }
# 156
    while (1) {
# 156
      if (ssize < 8) {
# 156
        if ((compptr->h_samp_factor * ssize) * 2 <=
            cinfo->max_h_samp_factor * cinfo->min_DCT_scaled_size) {
# 156
          if (! ((compptr->v_samp_factor * ssize) * 2 <=
                 cinfo->max_v_samp_factor * cinfo->min_DCT_scaled_size)) {
# 156
            break;
          }
        } else {
# 156
          break;
        }
      } else {
# 156
        break;
      }
      {
# 161
      ssize = ssize * 2;
      }
    }
    {
# 163
    compptr->DCT_scaled_size = ssize;
# 153
    ci ++;
# 153
    compptr ++;
    }
  }
# 178
  switch (cinfo->out_color_space) {
  case 1: 
  {
# 180
  cinfo->out_color_components = 1;
  }
# 181
  break;
  case 2: 
  {

  }
  case 3: 
  {
# 188
  cinfo->out_color_components = 3;
  }
# 189
  break;
  case 4: 
  {

  }
  case 5: 
  {
# 192
  cinfo->out_color_components = 4;
  }
# 193
  break;
  default: 
  {
# 195
  cinfo->out_color_components = cinfo->num_components;
  }
# 196
  break;
  }
# 198
  if (cinfo->quantize_colors) {
    {
# 198
    cinfo->output_components = 1;
    }
  } else {
    {
# 198
    cinfo->output_components = cinfo->out_color_components;
    }
  }
  {
# 202
  tmp___5 = use_merged_upsample(cinfo);
  }
# 202
  if (tmp___5) {
    {
# 203
    cinfo->rec_outbuf_height = cinfo->max_v_samp_factor;
    }
  } else {
    {
# 205
    cinfo->rec_outbuf_height = 1;
    }
  }
  {
# 213
  ci = 0;
# 213
  compptr = cinfo->comp_info;
  }
# 213
  while (ci < cinfo->num_components) {
    {
# 216
    compptr->width_in_blocks = (JDIMENSION )jdiv_round_up((long )cinfo->image_width *
                                                          (long )compptr->h_samp_factor,
                                                          (long )(cinfo->max_h_samp_factor *
                                                                  8));
# 219
    compptr->height_in_blocks = (JDIMENSION )jdiv_round_up((long )cinfo->image_height *
                                                           (long )compptr->v_samp_factor,
                                                           (long )(cinfo->max_v_samp_factor *
                                                                   8));
# 223
    compptr->downsampled_width = (JDIMENSION )jdiv_round_up((long )cinfo->image_width *
                                                            (long )(compptr->h_samp_factor *
                                                                    compptr->DCT_scaled_size),
                                                            (long )(cinfo->max_h_samp_factor *
                                                                    8));
# 227
    compptr->downsampled_height = (JDIMENSION )jdiv_round_up((long )cinfo->image_height *
                                                             (long )(compptr->v_samp_factor *
                                                                     compptr->DCT_scaled_size),
                                                             (long )(cinfo->max_v_samp_factor *
                                                                     8));
# 232
    compptr->component_needed = 1;
# 213
    ci ++;
# 213
    compptr ++;
    }
  }
  {
# 238
  cinfo->total_iMCU_rows = (JDIMENSION )jdiv_round_up((long )cinfo->image_height,
                                                      (long )(cinfo->max_v_samp_factor *
                                                              8));
  }
# 238
  return;
}
}
# 244
static void per_scan_setup___0(j_decompress_ptr cinfo ) 
{ int ci ;
  int mcublks ;
  int tmp ;
  jpeg_component_info *compptr ;
  int tmp___2 ;
  int tmp___3 ;

  {
# 252
  if (cinfo->comps_in_scan == 1) {
    {
# 255
    compptr = cinfo->cur_comp_info[0];
# 258
    cinfo->MCUs_per_row = compptr->width_in_blocks;
# 259
    cinfo->MCU_rows_in_scan = compptr->height_in_blocks;
# 262
    compptr->MCU_width = 1;
# 263
    compptr->MCU_height = 1;
# 264
    compptr->MCU_blocks = 1;
# 265
    compptr->MCU_sample_width = compptr->DCT_scaled_size;
# 266
    compptr->last_col_width = 1;
# 267
    compptr->last_row_height = 1;
# 270
    cinfo->blocks_in_MCU = 1;
# 271
    cinfo->MCU_membership[0] = 0;
    }
  } else {
# 276
    if (cinfo->comps_in_scan <= 0) {
      {
# 277
      (cinfo->err)->msg_code = 19;
# 277
      (cinfo->err)->msg_parm.i[0] = cinfo->comps_in_scan;
# 277
      (cinfo->err)->msg_parm.i[1] = 4;
# 277
      ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
      }
    } else {
# 276
      if (cinfo->comps_in_scan > 4) {
        {
# 277
        (cinfo->err)->msg_code = 19;
# 277
        (cinfo->err)->msg_parm.i[0] = cinfo->comps_in_scan;
# 277
        (cinfo->err)->msg_parm.i[1] = 4;
# 277
        ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
        }
      }
    }
    {
# 281
    cinfo->MCUs_per_row = (JDIMENSION )jdiv_round_up((long )cinfo->image_width,
                                                     (long )(cinfo->max_h_samp_factor *
                                                             8));
# 284
    cinfo->MCU_rows_in_scan = (JDIMENSION )jdiv_round_up((long )cinfo->image_height,
                                                         (long )(cinfo->max_v_samp_factor *
                                                                 8));
# 288
    cinfo->blocks_in_MCU = 0;
# 290
    ci = 0;
    }
# 290
    while (ci < cinfo->comps_in_scan) {
      {
# 291
      compptr = cinfo->cur_comp_info[ci];
# 293
      compptr->MCU_width = compptr->h_samp_factor;
# 294
      compptr->MCU_height = compptr->v_samp_factor;
# 295
      compptr->MCU_blocks = compptr->MCU_width * compptr->MCU_height;
# 296
      compptr->MCU_sample_width = compptr->MCU_width * compptr->DCT_scaled_size;
# 298
      tmp = (int )(compptr->width_in_blocks % (unsigned int )compptr->MCU_width);
      }
# 299
      if (tmp == 0) {
        {
# 299
        tmp = compptr->MCU_width;
        }
      }
      {
# 300
      compptr->last_col_width = tmp;
# 301
      tmp = (int )(compptr->height_in_blocks %
                   (unsigned int )compptr->MCU_height);
      }
# 302
      if (tmp == 0) {
        {
# 302
        tmp = compptr->MCU_height;
        }
      }
      {
# 303
      compptr->last_row_height = tmp;
# 305
      mcublks = compptr->MCU_blocks;
      }
# 306
      if (cinfo->blocks_in_MCU + mcublks > 10) {
        {
# 307
        (cinfo->err)->msg_code = 10;
# 307
        ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
        }
      }
# 308
      while (1) {
        {
# 308
        tmp___3 = mcublks;
# 308
        mcublks --;
        }
# 308
        if (! (tmp___3 > 0)) {
# 308
          break;
        }
        {
# 309
        tmp___2 = cinfo->blocks_in_MCU;
# 309
        cinfo->blocks_in_MCU = cinfo->blocks_in_MCU + 1;
# 309
        cinfo->MCU_membership[tmp___2] = ci;
        }
      }
      {
# 290
      ci ++;
      }
    }
  }
# 314
  return;
}
}
# 360
static void prepare_range_limit_table(j_decompress_ptr cinfo ) 
{ JSAMPLE *table ;
  int i ;

  {
  {
# 367
  table = (JSAMPLE *)alloc_small_wrapper((struct jpeg_common_struct *)cinfo, 1,
                                         1408U * sizeof(JSAMPLE ));
# 371
  table += 256;
# 372
  cinfo->sample_range_limit = table;
# 374
  memset((void *)(table - 256), 0, 256U * sizeof(JSAMPLE ));
# 376
  i = 0;
  }
# 376
  while (i <= 255) {
    {
# 377
    (*(table + i)) = (unsigned char )i;
# 376
    i ++;
    }
  }
  {
# 378
  table += 128;
# 380
  i = 128;
  }
# 380
  while (i < 512) {
    {
# 381
    (*(table + i)) = (unsigned char )255;
# 380
    i ++;
    }
  }
  {
# 384
  memset((void *)(table + 512), 0, 384U * sizeof(JSAMPLE ));
# 386
  memcpy((void */* __restrict  */)((void *)(table + 896)),
         (void const   */* __restrict  */)((void const   *)cinfo->sample_range_limit),
         128U * sizeof(JSAMPLE ));
  }
# 389
  return;
}
}
# 401
static void master_selection___0(j_decompress_ptr cinfo ) 
{ jdmaster_my_master_ptr master ;
  long samplesperrow ;
  JDIMENSION jd_samplesperrow ;

  {
  {
# 404
  master = (my_decomp_master *)cinfo->master;
# 409
  jpeg_calc_output_dimensions(cinfo);
# 410
  prepare_range_limit_table(cinfo);
# 413
  samplesperrow = (long )cinfo->output_width *
                  (long )cinfo->out_color_components;
# 414
  jd_samplesperrow = (unsigned int )samplesperrow;
  }
# 415
  if ((long )jd_samplesperrow != samplesperrow) {
    {
# 416
    (cinfo->err)->msg_code = 62;
# 416
    ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
    }
  }
  {
# 419
  master->pub.eoi_processed = 0;
# 420
  master->pass_number = 0;
# 421
  master->need_post_pass = 0;
  }
# 422
  if (cinfo->comps_in_scan == cinfo->num_components) {
    {
# 423
    master->pass_type = 0;
# 424
    master->total_passes = 1;
    }
  } else {
    {
# 427
    master->pass_type = 1;
# 430
    master->total_passes = cinfo->num_components + 1;
    }
  }
  {
# 435
  master->using_merged_upsample = use_merged_upsample(cinfo);
  }
# 442
  if (cinfo->quantize_colors) {
# 443
    if (cinfo->raw_data_out) {
      {
# 444
      (cinfo->err)->msg_code = 39;
# 444
      ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
      }
    }
# 449
    if (cinfo->out_color_components != 3) {
      {
# 450
      cinfo->two_pass_quantize = 0;
      }
    } else {
# 451
      if ((unsigned int )cinfo->colormap != (unsigned int )((void *)0)) {
        {
# 452
        cinfo->two_pass_quantize = 1;
        }
      }
    }
# 458
    if (cinfo->two_pass_quantize) {
# 460
      if ((unsigned int )cinfo->colormap == (unsigned int )((void *)0)) {
        {
# 461
        master->need_post_pass = 1;
# 462
        master->total_passes ++;
        }
      }
      {
# 464
      jinit_2pass_quantizer(cinfo);
      }
    } else {
      {
# 470
      jinit_1pass_quantizer(cinfo);
      }
    }
  }
# 478
  if (! cinfo->raw_data_out) {
# 479
    if (master->using_merged_upsample) {
      {
# 481
      jinit_merged_upsampler(cinfo);
      }
    } else {
      {
# 486
      jinit_color_deconverter(cinfo);
# 487
      jinit_upsampler(cinfo);
      }
    }
    {
# 489
    jinit_d_post_controller(cinfo, master->need_post_pass);
    }
  }
  {
# 492
  jinit_inverse_dct(cinfo);
  }
# 494
  if (cinfo->arith_code) {
    {
# 498
    (cinfo->err)->msg_code = 1;
# 498
    ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
    }
  } else {
    {
# 501
    jinit_huff_decoder(cinfo);
    }
  }
  {
# 503
  jinit_d_coef_controller(cinfo, master->pass_type == 1);
# 504
  jinit_d_main_controller(cinfo, 0);
# 508
  ((*((cinfo->mem)->realize_virt_arrays)))((struct jpeg_common_struct *)cinfo);
  }
# 509
  return;
}
}
# 520
static void prepare_for_pass___0(j_decompress_ptr cinfo ) 
{ jdmaster_my_master_ptr master ;
  int tmp ;
  int tmp___0 ;

  {
  {
# 523
  master = (my_decomp_master *)cinfo->master;
  }
# 525
  switch (master->pass_type) {
  case 0: 
  {
# 528
  per_scan_setup___0(cinfo);
# 529
  master->pub.is_last_pass = ! master->need_post_pass != 0;
  }
# 530
  if (! cinfo->raw_data_out) {
# 531
    if (! master->using_merged_upsample) {
      {
# 532
      ((*((cinfo->cconvert)->start_pass)))(cinfo);
      }
    }
    {
# 533
    ((*((cinfo->upsample)->start_pass)))(cinfo);
    }
# 534
    if (cinfo->quantize_colors) {
      {
# 535
      ((*((cinfo->cquantize)->start_pass)))(cinfo, master->need_post_pass);
      }
    }
# 536
    if (master->need_post_pass) {
      {
# 536
      tmp = 4;
      }
    } else {
      {
# 536
      tmp = 0;
      }
    }
    {
# 536
    ((*((cinfo->post)->start_pass)))(cinfo, tmp);
    }
  }
  {
# 539
  ((*((cinfo->idct)->start_input_pass)))(cinfo);
# 540
  ((*((cinfo->idct)->start_output_pass)))(cinfo);
# 541
  ((*((cinfo->entropy)->start_pass)))(cinfo);
# 542
  ((*((cinfo->coef)->start_pass)))(cinfo, 0);
# 543
  ((*((cinfo->main)->start_pass)))(cinfo, 0);
  }
# 544
  break;
  case 1: 
  {
# 548
  per_scan_setup___0(cinfo);
# 549
  master->pub.is_last_pass = 0;
# 550
  ((*((cinfo->idct)->start_input_pass)))(cinfo);
# 551
  ((*((cinfo->entropy)->start_pass)))(cinfo);
# 552
  ((*((cinfo->coef)->start_pass)))(cinfo, 2);
# 553
  ((*((cinfo->main)->start_pass)))(cinfo, 1);
  }
# 554
  break;
  case 2: 
  {
# 557
  master->pub.is_last_pass = ! master->need_post_pass != 0;
  }
# 558
  if (! cinfo->raw_data_out) {
# 559
    if (! master->using_merged_upsample) {
      {
# 560
      ((*((cinfo->cconvert)->start_pass)))(cinfo);
      }
    }
    {
# 561
    ((*((cinfo->upsample)->start_pass)))(cinfo);
    }
# 562
    if (cinfo->quantize_colors) {
      {
# 563
      ((*((cinfo->cquantize)->start_pass)))(cinfo, master->need_post_pass);
      }
    }
# 564
    if (master->need_post_pass) {
      {
# 564
      tmp___0 = 4;
      }
    } else {
      {
# 564
      tmp___0 = 0;
      }
    }
    {
# 564
    ((*((cinfo->post)->start_pass)))(cinfo, tmp___0);
    }
  }
  {
# 567
  ((*((cinfo->idct)->start_output_pass)))(cinfo);
# 568
  ((*((cinfo->coef)->start_pass)))(cinfo, 3);
# 569
  ((*((cinfo->main)->start_pass)))(cinfo, 0);
  }
# 570
  break;
  case 3: 
  {
# 575
  master->pub.is_last_pass = 1;
# 576
  ((*((cinfo->cquantize)->start_pass)))(cinfo, 0);
# 577
  ((*((cinfo->post)->start_pass)))(cinfo, 3);
# 578
  ((*((cinfo->main)->start_pass)))(cinfo, 3);
  }
# 579
  break;
  default: 
  {
# 582
  (cinfo->err)->msg_code = 40;
# 582
  ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
  }
  }
# 586
  if ((unsigned int )cinfo->progress != (unsigned int )((void *)0)) {
    {
# 587
    (cinfo->progress)->completed_passes = master->pass_number;
# 588
    (cinfo->progress)->total_passes = master->total_passes;
    }
  }
# 590
  return;
}
}
# 599
static void finish_pass_master___0(j_decompress_ptr cinfo ) 
{ jdmaster_my_master_ptr master ;
  int tmp ;

  {
  {
# 602
  master = (my_decomp_master *)cinfo->master;
  }
# 604
  switch (master->pass_type) {
  case 0: 
  {

  }
  case 2: 
  {

  }
# 607
  if (cinfo->quantize_colors) {
    {
# 608
    ((*((cinfo->cquantize)->finish_pass)))(cinfo);
    }
  }
  {
# 609
  master->pass_number ++;
# 610
  master->pass_type = 3;
  }
# 611
  break;
  case 1: 
  {
# 615
  master->pass_number += cinfo->comps_in_scan;
# 616
  tmp = ((*((cinfo->marker)->read_markers)))(cinfo);
  }
# 616
  switch (tmp) {
  case 0: 
  {

  }
# 618
  break;
  case 1: 
  {
# 620
  master->pub.eoi_processed = 1;
# 621
  master->pass_type = 2;
  }
# 622
  break;
  case 2: 
  {
# 624
  (cinfo->err)->msg_code = 17;
# 624
  ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
  }
  }
# 626
  break;
  case 3: 
  {
# 630
  ((*((cinfo->cquantize)->finish_pass)))(cinfo);
  }
# 632
  break;
  default: 
  {
# 635
  (cinfo->err)->msg_code = 40;
# 635
  ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
  }
  }
# 637
  return;
}
}
# 646
void jinit_master_decompress(j_decompress_ptr cinfo ) 
{ jdmaster_my_master_ptr master ;

  {
  {
# 651
  master = (jdmaster_my_master_ptr )alloc_small_wrapper((struct jpeg_common_struct *)cinfo,
                                                        1,
                                                        sizeof(my_decomp_master ));
# 654
  cinfo->master = (struct jpeg_decomp_master */* __attribute__((__rtti__)) */)((struct jpeg_decomp_master *)master);
# 655
  master->pub.prepare_for_pass = & prepare_for_pass___0;
# 656
  master->pub.finish_pass = & finish_pass_master___0;
# 658
  master_selection___0(cinfo);
  }
# 659
  return;
}
}
# 165 "jdmarker.c"
static boolean get_soi(j_decompress_ptr cinfo ) 
{ int i ;

  {
  {
# 171
  (cinfo->err)->msg_code = 94;
# 171
  ((*((cinfo->err)->emit_message)))((struct jpeg_common_struct *)cinfo, 1);
  }
# 173
  if ((cinfo->marker)->saw_SOI) {
    {
# 174
    (cinfo->err)->msg_code = 53;
# 174
    ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
    }
  }
  {
# 178
  i = 0;
  }
# 178
  while (i < 16) {
    {
# 179
    cinfo->arith_dc_L[i] = (unsigned char )0;
# 180
    cinfo->arith_dc_U[i] = (unsigned char )1;
# 181
    cinfo->arith_ac_K[i] = (unsigned char )5;
# 178
    i ++;
    }
  }
  {
# 183
  cinfo->restart_interval = 0U;
# 187
  cinfo->jpeg_color_space = 0;
# 188
  cinfo->CCIR601_sampling = 0;
# 190
  cinfo->saw_JFIF_marker = 0;
# 191
  cinfo->density_unit = (unsigned char )0;
# 192
  cinfo->X_density = (unsigned short )1;
# 193
  cinfo->Y_density = (unsigned short )1;
# 194
  cinfo->saw_Adobe_marker = 0;
# 195
  cinfo->Adobe_transform = (unsigned char )0;
# 197
  (cinfo->marker)->saw_SOI = 1;
  }
# 199
  return (1);
}
}
# 203
static boolean get_sof(j_decompress_ptr cinfo ) 
{ INT32 length ;
  int c ;
  int ci ;
  jpeg_component_info *compptr ;
  struct jpeg_source_mgr *datasrc ;
  JOCTET const   *next_input_byte ;
  size_t bytes_in_buffer ;
  boolean tmp ;
  JOCTET const   *tmp___0 ;
  boolean tmp___1 ;
  JOCTET const   *tmp___2 ;
  boolean tmp___3 ;
  JOCTET const   *tmp___4 ;
  boolean tmp___5 ;
  JOCTET const   *tmp___6 ;
  boolean tmp___7 ;
  JOCTET const   *tmp___8 ;
  boolean tmp___9 ;
  JOCTET const   *tmp___10 ;
  boolean tmp___11 ;
  JOCTET const   *tmp___12 ;
  boolean tmp___13 ;
  JOCTET const   *tmp___14 ;
  int *_mp ;
  boolean tmp___16 ;
  JOCTET const   *tmp___17 ;
  boolean tmp___18 ;
  JOCTET const   *tmp___19 ;
  boolean tmp___20 ;
  JOCTET const   *tmp___21 ;
  int *_mp___0 ;

  {
  {
# 210
  datasrc = (struct jpeg_source_mgr *)cinfo->src;
# 210
  next_input_byte = datasrc->next_input_byte;
# 210
  bytes_in_buffer = datasrc->bytes_in_buffer;
  }
# 212
  while (1) {
# 212
    if (bytes_in_buffer == 0U) {
      {
# 212
      tmp = ((*(datasrc->fill_input_buffer)))(cinfo);
      }
# 212
      if (! tmp) {
# 212
        return (0);
      }
      {
# 212
      next_input_byte = datasrc->next_input_byte;
# 212
      bytes_in_buffer = datasrc->bytes_in_buffer;
      }
    }
    {
# 212
    bytes_in_buffer --;
# 212
    tmp___0 = next_input_byte;
# 212
    next_input_byte ++;
# 212
    length = (long )((unsigned int )(*tmp___0) << 8);
    }
# 212
    if (bytes_in_buffer == 0U) {
      {
# 212
      tmp___1 = ((*(datasrc->fill_input_buffer)))(cinfo);
      }
# 212
      if (! tmp___1) {
# 212
        return (0);
      }
      {
# 212
      next_input_byte = datasrc->next_input_byte;
# 212
      bytes_in_buffer = datasrc->bytes_in_buffer;
      }
    }
    {
# 212
    bytes_in_buffer --;
# 212
    tmp___2 = next_input_byte;
# 212
    next_input_byte ++;
# 212
    length += (long )(*tmp___2);
    }
# 212
    break;
  }
# 214
  while (1) {
# 214
    if (bytes_in_buffer == 0U) {
      {
# 214
      tmp___3 = ((*(datasrc->fill_input_buffer)))(cinfo);
      }
# 214
      if (! tmp___3) {
# 214
        return (0);
      }
      {
# 214
      next_input_byte = datasrc->next_input_byte;
# 214
      bytes_in_buffer = datasrc->bytes_in_buffer;
      }
    }
    {
# 214
    bytes_in_buffer --;
# 214
    tmp___4 = next_input_byte;
# 214
    next_input_byte ++;
# 214
    cinfo->data_precision = (int )(*tmp___4);
    }
# 214
    break;
  }
# 215
  while (1) {
# 215
    if (bytes_in_buffer == 0U) {
      {
# 215
      tmp___5 = ((*(datasrc->fill_input_buffer)))(cinfo);
      }
# 215
      if (! tmp___5) {
# 215
        return (0);
      }
      {
# 215
      next_input_byte = datasrc->next_input_byte;
# 215
      bytes_in_buffer = datasrc->bytes_in_buffer;
      }
    }
    {
# 215
    bytes_in_buffer --;
# 215
    tmp___6 = next_input_byte;
# 215
    next_input_byte ++;
# 215
    cinfo->image_height = (unsigned int )(*tmp___6) << 8;
    }
# 215
    if (bytes_in_buffer == 0U) {
      {
# 215
      tmp___7 = ((*(datasrc->fill_input_buffer)))(cinfo);
      }
# 215
      if (! tmp___7) {
# 215
        return (0);
      }
      {
# 215
      next_input_byte = datasrc->next_input_byte;
# 215
      bytes_in_buffer = datasrc->bytes_in_buffer;
      }
    }
    {
# 215
    bytes_in_buffer --;
# 215
    tmp___8 = next_input_byte;
# 215
    next_input_byte ++;
# 215
    cinfo->image_height = cinfo->image_height + (unsigned int )(*tmp___8);
    }
# 215
    break;
  }
# 216
  while (1) {
# 216
    if (bytes_in_buffer == 0U) {
      {
# 216
      tmp___9 = ((*(datasrc->fill_input_buffer)))(cinfo);
      }
# 216
      if (! tmp___9) {
# 216
        return (0);
      }
      {
# 216
      next_input_byte = datasrc->next_input_byte;
# 216
      bytes_in_buffer = datasrc->bytes_in_buffer;
      }
    }
    {
# 216
    bytes_in_buffer --;
# 216
    tmp___10 = next_input_byte;
# 216
    next_input_byte ++;
# 216
    cinfo->image_width = (unsigned int )(*tmp___10) << 8;
    }
# 216
    if (bytes_in_buffer == 0U) {
      {
# 216
      tmp___11 = ((*(datasrc->fill_input_buffer)))(cinfo);
      }
# 216
      if (! tmp___11) {
# 216
        return (0);
      }
      {
# 216
      next_input_byte = datasrc->next_input_byte;
# 216
      bytes_in_buffer = datasrc->bytes_in_buffer;
      }
    }
    {
# 216
    bytes_in_buffer --;
# 216
    tmp___12 = next_input_byte;
# 216
    next_input_byte ++;
# 216
    cinfo->image_width = cinfo->image_width + (unsigned int )(*tmp___12);
    }
# 216
    break;
  }
# 217
  while (1) {
# 217
    if (bytes_in_buffer == 0U) {
      {
# 217
      tmp___13 = ((*(datasrc->fill_input_buffer)))(cinfo);
      }
# 217
      if (! tmp___13) {
# 217
        return (0);
      }
      {
# 217
      next_input_byte = datasrc->next_input_byte;
# 217
      bytes_in_buffer = datasrc->bytes_in_buffer;
      }
    }
    {
# 217
    bytes_in_buffer --;
# 217
    tmp___14 = next_input_byte;
# 217
    next_input_byte ++;
# 217
    cinfo->num_components = (int )(*tmp___14);
    }
# 217
    break;
  }
  {
# 219
  length -= 8L;
  }
# 221
  while (1) {
    {
# 221
    _mp = (cinfo->err)->msg_parm.i;
# 221
    (*(_mp + 0)) = cinfo->unread_marker;
# 221
    (*(_mp + 1)) = (int )cinfo->image_width;
# 222
    (*(_mp + 2)) = (int )cinfo->image_height;
# 222
    (*(_mp + 3)) = cinfo->num_components;
# 223
    (cinfo->err)->msg_code = 92;
# 223
    ((*((cinfo->err)->emit_message)))((struct jpeg_common_struct *)cinfo, 1);
    }
# 221
    break;
  }
# 225
  if ((cinfo->marker)->saw_SOF) {
    {
# 226
    (cinfo->err)->msg_code = 50;
# 226
    ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
    }
  }
# 231
  if (cinfo->image_height <= 0U) {
    {
# 233
    (cinfo->err)->msg_code = 26;
# 233
    ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
    }
  } else {
# 231
    if (cinfo->image_width <= 0U) {
      {
# 233
      (cinfo->err)->msg_code = 26;
# 233
      ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
      }
    } else {
# 231
      if (cinfo->num_components <= 0) {
        {
# 233
        (cinfo->err)->msg_code = 26;
# 233
        ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
        }
      }
    }
  }
# 236
  if ((long )cinfo->image_height > 65500L) {
    {
# 238
    (cinfo->err)->msg_code = 35;
# 238
    (cinfo->err)->msg_parm.i[0] = 65500;
# 238
    ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
    }
  } else {
# 236
    if ((long )cinfo->image_width > 65500L) {
      {
# 238
      (cinfo->err)->msg_code = 35;
# 238
      (cinfo->err)->msg_parm.i[0] = 65500;
# 238
      ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
      }
    }
  }
# 241
  if (cinfo->data_precision != 8) {
    {
# 242
    (cinfo->err)->msg_code = 12;
# 242
    (cinfo->err)->msg_parm.i[0] = cinfo->data_precision;
# 242
    ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
    }
  }
# 245
  if (cinfo->num_components > 10) {
    {
# 246
    (cinfo->err)->msg_code = 19;
# 246
    (cinfo->err)->msg_parm.i[0] = cinfo->num_components;
# 246
    (cinfo->err)->msg_parm.i[1] = 10;
# 246
    ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
    }
  }
# 249
  if (length != (long )(cinfo->num_components * 3)) {
    {
# 250
    (cinfo->err)->msg_code = 9;
# 250
    ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
    }
  }
# 252
  if ((unsigned int )cinfo->comp_info == (unsigned int )((void *)0)) {
    {
# 253
    cinfo->comp_info = (jpeg_component_info *)alloc_small_wrapper((struct jpeg_common_struct *)cinfo,
                                                                  1,
                                                                  (unsigned int )cinfo->num_components *
                                                                  sizeof(jpeg_component_info ));
    }
  }
  {
# 258
  ci = 0;
# 258
  compptr = cinfo->comp_info;
  }
# 258
  while (ci < cinfo->num_components) {
    {
# 260
    compptr->component_index = ci;
    }
# 261
    while (1) {
# 261
      if (bytes_in_buffer == 0U) {
        {
# 261
        tmp___16 = ((*(datasrc->fill_input_buffer)))(cinfo);
        }
# 261
        if (! tmp___16) {
# 261
          return (0);
        }
        {
# 261
        next_input_byte = datasrc->next_input_byte;
# 261
        bytes_in_buffer = datasrc->bytes_in_buffer;
        }
      }
      {
# 261
      bytes_in_buffer --;
# 261
      tmp___17 = next_input_byte;
# 261
      next_input_byte ++;
# 261
      compptr->component_id = (int )(*tmp___17);
      }
# 261
      break;
    }
# 262
    while (1) {
# 262
      if (bytes_in_buffer == 0U) {
        {
# 262
        tmp___18 = ((*(datasrc->fill_input_buffer)))(cinfo);
        }
# 262
        if (! tmp___18) {
# 262
          return (0);
        }
        {
# 262
        next_input_byte = datasrc->next_input_byte;
# 262
        bytes_in_buffer = datasrc->bytes_in_buffer;
        }
      }
      {
# 262
      bytes_in_buffer --;
# 262
      tmp___19 = next_input_byte;
# 262
      next_input_byte ++;
# 262
      c = (int )(*tmp___19);
      }
# 262
      break;
    }
    {
# 263
    compptr->h_samp_factor = (c >> 4) & 15;
# 264
    compptr->v_samp_factor = c & 15;
    }
# 265
    while (1) {
# 265
      if (bytes_in_buffer == 0U) {
        {
# 265
        tmp___20 = ((*(datasrc->fill_input_buffer)))(cinfo);
        }
# 265
        if (! tmp___20) {
# 265
          return (0);
        }
        {
# 265
        next_input_byte = datasrc->next_input_byte;
# 265
        bytes_in_buffer = datasrc->bytes_in_buffer;
        }
      }
      {
# 265
      bytes_in_buffer --;
# 265
      tmp___21 = next_input_byte;
# 265
      next_input_byte ++;
# 265
      compptr->quant_tbl_no = (int )(*tmp___21);
      }
# 265
      break;
    }
# 267
    while (1) {
      {
# 267
      _mp___0 = (cinfo->err)->msg_parm.i;
# 267
      (*(_mp___0 + 0)) = compptr->component_id;
# 268
      (*(_mp___0 + 1)) = compptr->h_samp_factor;
# 268
      (*(_mp___0 + 2)) = compptr->v_samp_factor;
# 269
      (*(_mp___0 + 3)) = compptr->quant_tbl_no;
# 269
      (cinfo->err)->msg_code = 93;
# 269
      ((*((cinfo->err)->emit_message)))((struct jpeg_common_struct *)cinfo, 1);
      }
# 267
      break;
    }
    {
# 258
    ci ++;
# 258
    compptr ++;
    }
  }
  {
# 272
  (cinfo->marker)->saw_SOF = 1;
# 274
  datasrc->next_input_byte = next_input_byte;
# 274
  datasrc->bytes_in_buffer = bytes_in_buffer;
  }
# 275
  return (1);
}
}
# 279
static boolean get_sos(j_decompress_ptr cinfo ) 
{ INT32 length ;
  int i ;
  int ci ;
  int n ;
  int c ;
  int cc ;
  int ccc ;
  jpeg_component_info *compptr ;
  struct jpeg_source_mgr *datasrc ;
  JOCTET const   *next_input_byte ;
  size_t bytes_in_buffer ;
  boolean tmp ;
  JOCTET const   *tmp___0 ;
  boolean tmp___1 ;
  JOCTET const   *tmp___2 ;
  boolean tmp___3 ;
  JOCTET const   *tmp___4 ;
  boolean tmp___5 ;
  JOCTET const   *tmp___6 ;
  boolean tmp___7 ;
  JOCTET const   *tmp___8 ;
  int *_mp ;
  boolean tmp___9 ;
  JOCTET const   *tmp___10 ;
  boolean tmp___11 ;
  JOCTET const   *tmp___12 ;
  boolean tmp___13 ;
  JOCTET const   *tmp___14 ;

  {
  {
# 286
  datasrc = (struct jpeg_source_mgr *)cinfo->src;
# 286
  next_input_byte = datasrc->next_input_byte;
# 286
  bytes_in_buffer = datasrc->bytes_in_buffer;
  }
# 288
  if (! (cinfo->marker)->saw_SOF) {
    {
# 289
    (cinfo->err)->msg_code = 54;
# 289
    ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
    }
  }
# 291
  while (1) {
# 291
    if (bytes_in_buffer == 0U) {
      {
# 291
      tmp = ((*(datasrc->fill_input_buffer)))(cinfo);
      }
# 291
      if (! tmp) {
# 291
        return (0);
      }
      {
# 291
      next_input_byte = datasrc->next_input_byte;
# 291
      bytes_in_buffer = datasrc->bytes_in_buffer;
      }
    }
    {
# 291
    bytes_in_buffer --;
# 291
    tmp___0 = next_input_byte;
# 291
    next_input_byte ++;
# 291
    length = (long )((unsigned int )(*tmp___0) << 8);
    }
# 291
    if (bytes_in_buffer == 0U) {
      {
# 291
      tmp___1 = ((*(datasrc->fill_input_buffer)))(cinfo);
      }
# 291
      if (! tmp___1) {
# 291
        return (0);
      }
      {
# 291
      next_input_byte = datasrc->next_input_byte;
# 291
      bytes_in_buffer = datasrc->bytes_in_buffer;
      }
    }
    {
# 291
    bytes_in_buffer --;
# 291
    tmp___2 = next_input_byte;
# 291
    next_input_byte ++;
# 291
    length += (long )(*tmp___2);
    }
# 291
    break;
  }
# 293
  while (1) {
# 293
    if (bytes_in_buffer == 0U) {
      {
# 293
      tmp___3 = ((*(datasrc->fill_input_buffer)))(cinfo);
      }
# 293
      if (! tmp___3) {
# 293
        return (0);
      }
      {
# 293
      next_input_byte = datasrc->next_input_byte;
# 293
      bytes_in_buffer = datasrc->bytes_in_buffer;
      }
    }
    {
# 293
    bytes_in_buffer --;
# 293
    tmp___4 = next_input_byte;
# 293
    next_input_byte ++;
# 293
    n = (int )(*tmp___4);
    }
# 293
    break;
  }
# 295
  if (length != (long )(n * 2 + 6)) {
    {
# 296
    (cinfo->err)->msg_code = 9;
# 296
    ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
    }
  } else {
# 295
    if (n < 1) {
      {
# 296
      (cinfo->err)->msg_code = 9;
# 296
      ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
      }
    } else {
# 295
      if (n > 4) {
        {
# 296
        (cinfo->err)->msg_code = 9;
# 296
        ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
        }
      }
    }
  }
  {
# 298
  (cinfo->err)->msg_code = 95;
# 298
  (cinfo->err)->msg_parm.i[0] = n;
# 298
  ((*((cinfo->err)->emit_message)))((struct jpeg_common_struct *)cinfo, 1);
# 300
  cinfo->comps_in_scan = n;
# 304
  i = 0;
  }
# 304
  while (i < n) {
# 305
    while (1) {
# 305
      if (bytes_in_buffer == 0U) {
        {
# 305
        tmp___5 = ((*(datasrc->fill_input_buffer)))(cinfo);
        }
# 305
        if (! tmp___5) {
# 305
          return (0);
        }
        {
# 305
        next_input_byte = datasrc->next_input_byte;
# 305
        bytes_in_buffer = datasrc->bytes_in_buffer;
        }
      }
      {
# 305
      bytes_in_buffer --;
# 305
      tmp___6 = next_input_byte;
# 305
      next_input_byte ++;
# 305
      cc = (int )(*tmp___6);
      }
# 305
      break;
    }
# 306
    while (1) {
# 306
      if (bytes_in_buffer == 0U) {
        {
# 306
        tmp___7 = ((*(datasrc->fill_input_buffer)))(cinfo);
        }
# 306
        if (! tmp___7) {
# 306
          return (0);
        }
        {
# 306
        next_input_byte = datasrc->next_input_byte;
# 306
        bytes_in_buffer = datasrc->bytes_in_buffer;
        }
      }
      {
# 306
      bytes_in_buffer --;
# 306
      tmp___8 = next_input_byte;
# 306
      next_input_byte ++;
# 306
      c = (int )(*tmp___8);
      }
# 306
      break;
    }
    {
# 308
    ci = 0;
# 308
    compptr = cinfo->comp_info;
    }
# 308
    while (ci < cinfo->num_components) {
# 310
      if (cc == compptr->component_id) {
        goto id_found;
      }
      {
# 308
      ci ++;
# 308
      compptr ++;
      }
    }
    {
# 314
    (cinfo->err)->msg_code = 5;
# 314
    (cinfo->err)->msg_parm.i[0] = cc;
# 314
    ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
    }
    id_found: 
    {
# 318
    cinfo->cur_comp_info[i] = compptr;
# 319
    compptr->dc_tbl_no = (c >> 4) & 15;
# 320
    compptr->ac_tbl_no = c & 15;
    }
# 322
    while (1) {
      {
# 322
      _mp = (cinfo->err)->msg_parm.i;
# 322
      (*(_mp + 0)) = cc;
# 322
      (*(_mp + 1)) = compptr->dc_tbl_no;
# 323
      (*(_mp + 2)) = compptr->ac_tbl_no;
# 323
      (cinfo->err)->msg_code = 96;
# 323
      ((*((cinfo->err)->emit_message)))((struct jpeg_common_struct *)cinfo, 1);
      }
# 322
      break;
    }
    {
# 304
    i ++;
    }
  }
# 332
  while (1) {
# 332
    if (bytes_in_buffer == 0U) {
      {
# 332
      tmp___9 = ((*(datasrc->fill_input_buffer)))(cinfo);
      }
# 332
      if (! tmp___9) {
# 332
        return (0);
      }
      {
# 332
      next_input_byte = datasrc->next_input_byte;
# 332
      bytes_in_buffer = datasrc->bytes_in_buffer;
      }
    }
    {
# 332
    bytes_in_buffer --;
# 332
    tmp___10 = next_input_byte;
# 332
    next_input_byte ++;
# 332
    c = (int )(*tmp___10);
    }
# 332
    break;
  }
# 333
  while (1) {
# 333
    if (bytes_in_buffer == 0U) {
      {
# 333
      tmp___11 = ((*(datasrc->fill_input_buffer)))(cinfo);
      }
# 333
      if (! tmp___11) {
# 333
        return (0);
      }
      {
# 333
      next_input_byte = datasrc->next_input_byte;
# 333
      bytes_in_buffer = datasrc->bytes_in_buffer;
      }
    }
    {
# 333
    bytes_in_buffer --;
# 333
    tmp___12 = next_input_byte;
# 333
    next_input_byte ++;
# 333
    cc = (int )(*tmp___12);
    }
# 333
    break;
  }
# 334
  while (1) {
# 334
    if (bytes_in_buffer == 0U) {
      {
# 334
      tmp___13 = ((*(datasrc->fill_input_buffer)))(cinfo);
      }
# 334
      if (! tmp___13) {
# 334
        return (0);
      }
      {
# 334
      next_input_byte = datasrc->next_input_byte;
# 334
      bytes_in_buffer = datasrc->bytes_in_buffer;
      }
    }
    {
# 334
    bytes_in_buffer --;
# 334
    tmp___14 = next_input_byte;
# 334
    next_input_byte ++;
# 334
    ccc = (int )(*tmp___14);
    }
# 334
    break;
  }
# 335
  if (c != 0) {
    {
# 336
    (cinfo->err)->msg_code = 108;
# 336
    ((*((cinfo->err)->emit_message)))((struct jpeg_common_struct *)cinfo, -1);
    }
  } else {
# 335
    if (cc != 63) {
      {
# 336
      (cinfo->err)->msg_code = 108;
# 336
      ((*((cinfo->err)->emit_message)))((struct jpeg_common_struct *)cinfo, -1);
      }
    } else {
# 335
      if (ccc != 0) {
        {
# 336
        (cinfo->err)->msg_code = 108;
# 336
        ((*((cinfo->err)->emit_message)))((struct jpeg_common_struct *)cinfo, -1);
        }
      }
    }
  }
  {
# 339
  (cinfo->marker)->next_restart_num = 0;
# 341
  datasrc->next_input_byte = next_input_byte;
# 341
  datasrc->bytes_in_buffer = bytes_in_buffer;
  }
# 342
  return (1);
}
}
# 346
static boolean get_app0(j_decompress_ptr cinfo ) 
{ INT32 length ;
  UINT8 b[14] ;
  int buffp ;
  struct jpeg_source_mgr *datasrc ;
  JOCTET const   *next_input_byte ;
  size_t bytes_in_buffer ;
  boolean tmp ;
  JOCTET const   *tmp___0 ;
  boolean tmp___1 ;
  JOCTET const   *tmp___2 ;
  boolean tmp___3 ;
  JOCTET const   *tmp___4 ;
  int *_mp ;

  {
  {
# 354
  datasrc = (struct jpeg_source_mgr *)cinfo->src;
# 354
  next_input_byte = datasrc->next_input_byte;
# 354
  bytes_in_buffer = datasrc->bytes_in_buffer;
  }
# 356
  while (1) {
# 356
    if (bytes_in_buffer == 0U) {
      {
# 356
      tmp = ((*(datasrc->fill_input_buffer)))(cinfo);
      }
# 356
      if (! tmp) {
# 356
        return (0);
      }
      {
# 356
      next_input_byte = datasrc->next_input_byte;
# 356
      bytes_in_buffer = datasrc->bytes_in_buffer;
      }
    }
    {
# 356
    bytes_in_buffer --;
# 356
    tmp___0 = next_input_byte;
# 356
    next_input_byte ++;
# 356
    length = (long )((unsigned int )(*tmp___0) << 8);
    }
# 356
    if (bytes_in_buffer == 0U) {
      {
# 356
      tmp___1 = ((*(datasrc->fill_input_buffer)))(cinfo);
      }
# 356
      if (! tmp___1) {
# 356
        return (0);
      }
      {
# 356
      next_input_byte = datasrc->next_input_byte;
# 356
      bytes_in_buffer = datasrc->bytes_in_buffer;
      }
    }
    {
# 356
    bytes_in_buffer --;
# 356
    tmp___2 = next_input_byte;
# 356
    next_input_byte ++;
# 356
    length += (long )(*tmp___2);
    }
# 356
    break;
  }
  {
# 357
  length -= 2L;
  }
# 361
  if (length >= 14L) {
    {
# 362
    buffp = 0;
    }
# 362
    while (buffp < 14) {
# 363
      while (1) {
# 363
        if (bytes_in_buffer == 0U) {
          {
# 363
          tmp___3 = ((*(datasrc->fill_input_buffer)))(cinfo);
          }
# 363
          if (! tmp___3) {
# 363
            return (0);
          }
          {
# 363
          next_input_byte = datasrc->next_input_byte;
# 363
          bytes_in_buffer = datasrc->bytes_in_buffer;
          }
        }
        {
# 363
        bytes_in_buffer --;
# 363
        tmp___4 = next_input_byte;
# 363
        next_input_byte ++;
# 363
        b[buffp] = (*tmp___4);
        }
# 363
        break;
      }
      {
# 362
      buffp ++;
      }
    }
    {
# 364
    length -= 14L;
    }
# 366
    if ((int )b[0] == 74) {
# 366
      if ((int )b[1] == 70) {
# 366
        if ((int )b[2] == 73) {
# 366
          if ((int )b[3] == 70) {
# 366
            if ((int )b[4] == 0) {
# 369
              if ((int )b[5] != 1) {
                {
# 370
                (cinfo->err)->msg_code = 38;
# 370
                (cinfo->err)->msg_parm.i[0] = (int )b[5];
# 370
                (cinfo->err)->msg_parm.i[1] = (int )b[6];
# 370
                ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
                }
              }
# 372
              if ((int )b[6] > 2) {
                {
# 373
                (cinfo->err)->msg_code = 81;
# 373
                (cinfo->err)->msg_parm.i[0] = (int )b[5];
# 373
                (cinfo->err)->msg_parm.i[1] = (int )b[6];
# 373
                ((*((cinfo->err)->emit_message)))((struct jpeg_common_struct *)cinfo,
                                                  1);
                }
              }
              {
# 375
              cinfo->saw_JFIF_marker = 1;
# 376
              cinfo->density_unit = b[7];
# 377
              cinfo->X_density = (unsigned short )(((int )b[8] << 8) +
                                                   (int )b[9]);
# 378
              cinfo->Y_density = (unsigned short )(((int )b[10] << 8) +
                                                   (int )b[11]);
              }
# 379
              while (1) {
                {
# 379
                _mp = (cinfo->err)->msg_parm.i;
# 379
                (*(_mp + 0)) = (int )cinfo->X_density;
# 380
                (*(_mp + 1)) = (int )cinfo->Y_density;
# 380
                (*(_mp + 2)) = (int )cinfo->density_unit;
# 380
                (cinfo->err)->msg_code = 79;
# 380
                ((*((cinfo->err)->emit_message)))((struct jpeg_common_struct *)cinfo,
                                                  1);
                }
# 379
                break;
              }
# 381
              if ((int )b[12] | (int )b[13]) {
                {
# 382
                (cinfo->err)->msg_code = 82;
# 382
                (cinfo->err)->msg_parm.i[0] = (int )b[12];
# 382
                (cinfo->err)->msg_parm.i[1] = (int )b[13];
# 382
                ((*((cinfo->err)->emit_message)))((struct jpeg_common_struct *)cinfo,
                                                  1);
                }
              }
# 383
              if (length != ((long )b[12] * (long )b[13]) * 3L) {
                {
# 384
                (cinfo->err)->msg_code = 80;
# 384
                (cinfo->err)->msg_parm.i[0] = (int )length;
# 384
                ((*((cinfo->err)->emit_message)))((struct jpeg_common_struct *)cinfo,
                                                  1);
                }
              }
            } else {
              {
# 387
              (cinfo->err)->msg_code = 69;
# 387
              (cinfo->err)->msg_parm.i[0] = (int )length + 14;
# 387
              ((*((cinfo->err)->emit_message)))((struct jpeg_common_struct *)cinfo,
                                                1);
              }
            }
          } else {
            {
# 387
            (cinfo->err)->msg_code = 69;
# 387
            (cinfo->err)->msg_parm.i[0] = (int )length + 14;
# 387
            ((*((cinfo->err)->emit_message)))((struct jpeg_common_struct *)cinfo,
                                              1);
            }
          }
        } else {
          {
# 387
          (cinfo->err)->msg_code = 69;
# 387
          (cinfo->err)->msg_parm.i[0] = (int )length + 14;
# 387
          ((*((cinfo->err)->emit_message)))((struct jpeg_common_struct *)cinfo,
                                            1);
          }
        }
      } else {
        {
# 387
        (cinfo->err)->msg_code = 69;
# 387
        (cinfo->err)->msg_parm.i[0] = (int )length + 14;
# 387
        ((*((cinfo->err)->emit_message)))((struct jpeg_common_struct *)cinfo, 1);
        }
      }
    } else {
      {
# 387
      (cinfo->err)->msg_code = 69;
# 387
      (cinfo->err)->msg_parm.i[0] = (int )length + 14;
# 387
      ((*((cinfo->err)->emit_message)))((struct jpeg_common_struct *)cinfo, 1);
      }
    }
  } else {
    {
# 391
    (cinfo->err)->msg_code = 69;
# 391
    (cinfo->err)->msg_parm.i[0] = (int )length;
# 391
    ((*((cinfo->err)->emit_message)))((struct jpeg_common_struct *)cinfo, 1);
    }
  }
  {
# 394
  datasrc->next_input_byte = next_input_byte;
# 394
  datasrc->bytes_in_buffer = bytes_in_buffer;
  }
# 395
  if (length > 0L) {
    {
# 396
    ((*((cinfo->src)->skip_input_data)))(cinfo, length);
    }
  }
# 398
  return (1);
}
}
# 402
static boolean get_app14(j_decompress_ptr cinfo ) 
{ INT32 length ;
  UINT8 b[12] ;
  int buffp ;
  unsigned int version ;
  unsigned int flags0 ;
  unsigned int flags1 ;
  unsigned int transform ;
  struct jpeg_source_mgr *datasrc ;
  JOCTET const   *next_input_byte ;
  size_t bytes_in_buffer ;
  boolean tmp ;
  JOCTET const   *tmp___0 ;
  boolean tmp___1 ;
  JOCTET const   *tmp___2 ;
  boolean tmp___3 ;
  JOCTET const   *tmp___4 ;
  int *_mp ;

  {
  {
# 411
  datasrc = (struct jpeg_source_mgr *)cinfo->src;
# 411
  next_input_byte = datasrc->next_input_byte;
# 411
  bytes_in_buffer = datasrc->bytes_in_buffer;
  }
# 413
  while (1) {
# 413
    if (bytes_in_buffer == 0U) {
      {
# 413
      tmp = ((*(datasrc->fill_input_buffer)))(cinfo);
      }
# 413
      if (! tmp) {
# 413
        return (0);
      }
      {
# 413
      next_input_byte = datasrc->next_input_byte;
# 413
      bytes_in_buffer = datasrc->bytes_in_buffer;
      }
    }
    {
# 413
    bytes_in_buffer --;
# 413
    tmp___0 = next_input_byte;
# 413
    next_input_byte ++;
# 413
    length = (long )((unsigned int )(*tmp___0) << 8);
    }
# 413
    if (bytes_in_buffer == 0U) {
      {
# 413
      tmp___1 = ((*(datasrc->fill_input_buffer)))(cinfo);
      }
# 413
      if (! tmp___1) {
# 413
        return (0);
      }
      {
# 413
      next_input_byte = datasrc->next_input_byte;
# 413
      bytes_in_buffer = datasrc->bytes_in_buffer;
      }
    }
    {
# 413
    bytes_in_buffer --;
# 413
    tmp___2 = next_input_byte;
# 413
    next_input_byte ++;
# 413
    length += (long )(*tmp___2);
    }
# 413
    break;
  }
  {
# 414
  length -= 2L;
  }
# 418
  if (length >= 12L) {
    {
# 419
    buffp = 0;
    }
# 419
    while (buffp < 12) {
# 420
      while (1) {
# 420
        if (bytes_in_buffer == 0U) {
          {
# 420
          tmp___3 = ((*(datasrc->fill_input_buffer)))(cinfo);
          }
# 420
          if (! tmp___3) {
# 420
            return (0);
          }
          {
# 420
          next_input_byte = datasrc->next_input_byte;
# 420
          bytes_in_buffer = datasrc->bytes_in_buffer;
          }
        }
        {
# 420
        bytes_in_buffer --;
# 420
        tmp___4 = next_input_byte;
# 420
        next_input_byte ++;
# 420
        b[buffp] = (*tmp___4);
        }
# 420
        break;
      }
      {
# 419
      buffp ++;
      }
    }
    {
# 421
    length -= 12L;
    }
# 423
    if ((int )b[0] == 65) {
# 423
      if ((int )b[1] == 100) {
# 423
        if ((int )b[2] == 111) {
# 423
          if ((int )b[3] == 98) {
# 423
            if ((int )b[4] == 101) {
              {
# 425
              version = (unsigned int )(((int )b[5] << 8) + (int )b[6]);
# 426
              flags0 = (unsigned int )(((int )b[7] << 8) + (int )b[8]);
# 427
              flags1 = (unsigned int )(((int )b[9] << 8) + (int )b[10]);
# 428
              transform = (unsigned int )b[11];
              }
# 429
              while (1) {
                {
# 429
                _mp = (cinfo->err)->msg_parm.i;
# 429
                (*(_mp + 0)) = (int )version;
# 429
                (*(_mp + 1)) = (int )flags0;
# 429
                (*(_mp + 2)) = (int )flags1;
# 429
                (*(_mp + 3)) = (int )transform;
# 429
                (cinfo->err)->msg_code = 68;
# 429
                ((*((cinfo->err)->emit_message)))((struct jpeg_common_struct *)cinfo,
                                                  1);
                }
# 429
                break;
              }
              {
# 430
              cinfo->saw_Adobe_marker = 1;
# 431
              cinfo->Adobe_transform = (unsigned char )transform;
              }
            } else {
              {
# 434
              (cinfo->err)->msg_code = 70;
# 434
              (cinfo->err)->msg_parm.i[0] = (int )length + 12;
# 434
              ((*((cinfo->err)->emit_message)))((struct jpeg_common_struct *)cinfo,
                                                1);
              }
            }
          } else {
            {
# 434
            (cinfo->err)->msg_code = 70;
# 434
            (cinfo->err)->msg_parm.i[0] = (int )length + 12;
# 434
            ((*((cinfo->err)->emit_message)))((struct jpeg_common_struct *)cinfo,
                                              1);
            }
          }
        } else {
          {
# 434
          (cinfo->err)->msg_code = 70;
# 434
          (cinfo->err)->msg_parm.i[0] = (int )length + 12;
# 434
          ((*((cinfo->err)->emit_message)))((struct jpeg_common_struct *)cinfo,
                                            1);
          }
        }
      } else {
        {
# 434
        (cinfo->err)->msg_code = 70;
# 434
        (cinfo->err)->msg_parm.i[0] = (int )length + 12;
# 434
        ((*((cinfo->err)->emit_message)))((struct jpeg_common_struct *)cinfo, 1);
        }
      }
    } else {
      {
# 434
      (cinfo->err)->msg_code = 70;
# 434
      (cinfo->err)->msg_parm.i[0] = (int )length + 12;
# 434
      ((*((cinfo->err)->emit_message)))((struct jpeg_common_struct *)cinfo, 1);
      }
    }
  } else {
    {
# 438
    (cinfo->err)->msg_code = 70;
# 438
    (cinfo->err)->msg_parm.i[0] = (int )length;
# 438
    ((*((cinfo->err)->emit_message)))((struct jpeg_common_struct *)cinfo, 1);
    }
  }
  {
# 441
  datasrc->next_input_byte = next_input_byte;
# 441
  datasrc->bytes_in_buffer = bytes_in_buffer;
  }
# 442
  if (length > 0L) {
    {
# 443
    ((*((cinfo->src)->skip_input_data)))(cinfo, length);
    }
  }
# 445
  return (1);
}
}
# 449
static boolean get_dac(j_decompress_ptr cinfo ) 
{ INT32 length ;
  int index___0 ;
  int val ;
  struct jpeg_source_mgr *datasrc ;
  JOCTET const   *next_input_byte ;
  size_t bytes_in_buffer ;
  boolean tmp ;
  JOCTET const   *tmp___0 ;
  boolean tmp___1 ;
  JOCTET const   *tmp___2 ;
  boolean tmp___3 ;
  JOCTET const   *tmp___4 ;
  boolean tmp___5 ;
  JOCTET const   *tmp___6 ;

  {
  {
# 455
  datasrc = (struct jpeg_source_mgr *)cinfo->src;
# 455
  next_input_byte = datasrc->next_input_byte;
# 455
  bytes_in_buffer = datasrc->bytes_in_buffer;
  }
# 457
  while (1) {
# 457
    if (bytes_in_buffer == 0U) {
      {
# 457
      tmp = ((*(datasrc->fill_input_buffer)))(cinfo);
      }
# 457
      if (! tmp) {
# 457
        return (0);
      }
      {
# 457
      next_input_byte = datasrc->next_input_byte;
# 457
      bytes_in_buffer = datasrc->bytes_in_buffer;
      }
    }
    {
# 457
    bytes_in_buffer --;
# 457
    tmp___0 = next_input_byte;
# 457
    next_input_byte ++;
# 457
    length = (long )((unsigned int )(*tmp___0) << 8);
    }
# 457
    if (bytes_in_buffer == 0U) {
      {
# 457
      tmp___1 = ((*(datasrc->fill_input_buffer)))(cinfo);
      }
# 457
      if (! tmp___1) {
# 457
        return (0);
      }
      {
# 457
      next_input_byte = datasrc->next_input_byte;
# 457
      bytes_in_buffer = datasrc->bytes_in_buffer;
      }
    }
    {
# 457
    bytes_in_buffer --;
# 457
    tmp___2 = next_input_byte;
# 457
    next_input_byte ++;
# 457
    length += (long )(*tmp___2);
    }
# 457
    break;
  }
  {
# 458
  length -= 2L;
  }
# 460
  while (length > 0L) {
# 461
    while (1) {
# 461
      if (bytes_in_buffer == 0U) {
        {
# 461
        tmp___3 = ((*(datasrc->fill_input_buffer)))(cinfo);
        }
# 461
        if (! tmp___3) {
# 461
          return (0);
        }
        {
# 461
        next_input_byte = datasrc->next_input_byte;
# 461
        bytes_in_buffer = datasrc->bytes_in_buffer;
        }
      }
      {
# 461
      bytes_in_buffer --;
# 461
      tmp___4 = next_input_byte;
# 461
      next_input_byte ++;
# 461
      index___0 = (int )(*tmp___4);
      }
# 461
      break;
    }
# 462
    while (1) {
# 462
      if (bytes_in_buffer == 0U) {
        {
# 462
        tmp___5 = ((*(datasrc->fill_input_buffer)))(cinfo);
        }
# 462
        if (! tmp___5) {
# 462
          return (0);
        }
        {
# 462
        next_input_byte = datasrc->next_input_byte;
# 462
        bytes_in_buffer = datasrc->bytes_in_buffer;
        }
      }
      {
# 462
      bytes_in_buffer --;
# 462
      tmp___6 = next_input_byte;
# 462
      next_input_byte ++;
# 462
      val = (int )(*tmp___6);
      }
# 462
      break;
    }
    {
# 464
    length -= 2L;
# 466
    (cinfo->err)->msg_code = 71;
# 466
    (cinfo->err)->msg_parm.i[0] = index___0;
# 466
    (cinfo->err)->msg_parm.i[1] = val;
# 466
    ((*((cinfo->err)->emit_message)))((struct jpeg_common_struct *)cinfo, 1);
    }
# 468
    if (index___0 < 0) {
      {
# 469
      (cinfo->err)->msg_code = 21;
# 469
      (cinfo->err)->msg_parm.i[0] = index___0;
# 469
      ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
      }
    } else {
# 468
      if (index___0 >= 32) {
        {
# 469
        (cinfo->err)->msg_code = 21;
# 469
        (cinfo->err)->msg_parm.i[0] = index___0;
# 469
        ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
        }
      }
    }
# 471
    if (index___0 >= 16) {
      {
# 472
      cinfo->arith_ac_K[index___0 - 16] = (unsigned char )val;
      }
    } else {
      {
# 474
      cinfo->arith_dc_L[index___0] = (unsigned char )(val & 15);
# 475
      cinfo->arith_dc_U[index___0] = (unsigned char )(val >> 4);
      }
# 476
      if ((int )cinfo->arith_dc_L[index___0] >
          (int )cinfo->arith_dc_U[index___0]) {
        {
# 477
        (cinfo->err)->msg_code = 22;
# 477
        (cinfo->err)->msg_parm.i[0] = val;
# 477
        ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
        }
      }
    }
  }
  {
# 481
  datasrc->next_input_byte = next_input_byte;
# 481
  datasrc->bytes_in_buffer = bytes_in_buffer;
  }
# 482
  return (1);
}
}
# 486
static boolean get_dht(j_decompress_ptr cinfo ) 
{ INT32 length ;
  UINT8 bits[17] ;
  UINT8 huffval[256] ;
  int i ;
  int index___0 ;
  int count ;
  JHUFF_TBL **htblptr ;
  struct jpeg_source_mgr *datasrc ;
  JOCTET const   *next_input_byte ;
  size_t bytes_in_buffer ;
  boolean tmp ;
  JOCTET const   *tmp___0 ;
  boolean tmp___1 ;
  JOCTET const   *tmp___2 ;
  boolean tmp___3 ;
  JOCTET const   *tmp___4 ;
  boolean tmp___5 ;
  JOCTET const   *tmp___6 ;
  int *_mp ;
  int *_mp___0 ;
  boolean tmp___7 ;
  JOCTET const   *tmp___8 ;

  {
  {
# 495
  datasrc = (struct jpeg_source_mgr *)cinfo->src;
# 495
  next_input_byte = datasrc->next_input_byte;
# 495
  bytes_in_buffer = datasrc->bytes_in_buffer;
  }
# 497
  while (1) {
# 497
    if (bytes_in_buffer == 0U) {
      {
# 497
      tmp = ((*(datasrc->fill_input_buffer)))(cinfo);
      }
# 497
      if (! tmp) {
# 497
        return (0);
      }
      {
# 497
      next_input_byte = datasrc->next_input_byte;
# 497
      bytes_in_buffer = datasrc->bytes_in_buffer;
      }
    }
    {
# 497
    bytes_in_buffer --;
# 497
    tmp___0 = next_input_byte;
# 497
    next_input_byte ++;
# 497
    length = (long )((unsigned int )(*tmp___0) << 8);
    }
# 497
    if (bytes_in_buffer == 0U) {
      {
# 497
      tmp___1 = ((*(datasrc->fill_input_buffer)))(cinfo);
      }
# 497
      if (! tmp___1) {
# 497
        return (0);
      }
      {
# 497
      next_input_byte = datasrc->next_input_byte;
# 497
      bytes_in_buffer = datasrc->bytes_in_buffer;
      }
    }
    {
# 497
    bytes_in_buffer --;
# 497
    tmp___2 = next_input_byte;
# 497
    next_input_byte ++;
# 497
    length += (long )(*tmp___2);
    }
# 497
    break;
  }
  {
# 498
  length -= 2L;
  }
# 500
  while (length > 0L) {
# 501
    while (1) {
# 501
      if (bytes_in_buffer == 0U) {
        {
# 501
        tmp___3 = ((*(datasrc->fill_input_buffer)))(cinfo);
        }
# 501
        if (! tmp___3) {
# 501
          return (0);
        }
        {
# 501
        next_input_byte = datasrc->next_input_byte;
# 501
        bytes_in_buffer = datasrc->bytes_in_buffer;
        }
      }
      {
# 501
      bytes_in_buffer --;
# 501
      tmp___4 = next_input_byte;
# 501
      next_input_byte ++;
# 501
      index___0 = (int )(*tmp___4);
      }
# 501
      break;
    }
    {
# 503
    (cinfo->err)->msg_code = 72;
# 503
    (cinfo->err)->msg_parm.i[0] = index___0;
# 503
    ((*((cinfo->err)->emit_message)))((struct jpeg_common_struct *)cinfo, 1);
# 505
    bits[0] = (unsigned char )0;
# 506
    count = 0;
# 507
    i = 1;
    }
# 507
    while (i <= 16) {
# 508
      while (1) {
# 508
        if (bytes_in_buffer == 0U) {
          {
# 508
          tmp___5 = ((*(datasrc->fill_input_buffer)))(cinfo);
          }
# 508
          if (! tmp___5) {
# 508
            return (0);
          }
          {
# 508
          next_input_byte = datasrc->next_input_byte;
# 508
          bytes_in_buffer = datasrc->bytes_in_buffer;
          }
        }
        {
# 508
        bytes_in_buffer --;
# 508
        tmp___6 = next_input_byte;
# 508
        next_input_byte ++;
# 508
        bits[i] = (*tmp___6);
        }
# 508
        break;
      }
      {
# 509
      count += (int )bits[i];
# 507
      i ++;
      }
    }
    {
# 512
    length -= 17L;
    }
# 514
    while (1) {
      {
# 514
      _mp = (cinfo->err)->msg_parm.i;
# 514
      (*(_mp + 0)) = (int )bits[1];
# 515
      (*(_mp + 1)) = (int )bits[2];
# 515
      (*(_mp + 2)) = (int )bits[3];
# 515
      (*(_mp + 3)) = (int )bits[4];
# 515
      (*(_mp + 4)) = (int )bits[5];
# 516
      (*(_mp + 5)) = (int )bits[6];
# 516
      (*(_mp + 6)) = (int )bits[7];
# 516
      (*(_mp + 7)) = (int )bits[8];
# 516
      (cinfo->err)->msg_code = 78;
# 516
      ((*((cinfo->err)->emit_message)))((struct jpeg_common_struct *)cinfo, 2);
      }
# 514
      break;
    }
# 517
    while (1) {
      {
# 517
      _mp___0 = (cinfo->err)->msg_parm.i;
# 517
      (*(_mp___0 + 0)) = (int )bits[9];
# 518
      (*(_mp___0 + 1)) = (int )bits[10];
# 518
      (*(_mp___0 + 2)) = (int )bits[11];
# 518
      (*(_mp___0 + 3)) = (int )bits[12];
# 518
      (*(_mp___0 + 4)) = (int )bits[13];
# 519
      (*(_mp___0 + 5)) = (int )bits[14];
# 519
      (*(_mp___0 + 6)) = (int )bits[15];
# 519
      (*(_mp___0 + 7)) = (int )bits[16];
# 519
      (cinfo->err)->msg_code = 78;
# 519
      ((*((cinfo->err)->emit_message)))((struct jpeg_common_struct *)cinfo, 2);
      }
# 517
      break;
    }
# 521
    if (count > 256) {
      {
# 522
      (cinfo->err)->msg_code = 23;
# 522
      ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
      }
    } else {
# 521
      if ((long )count > length) {
        {
# 522
        (cinfo->err)->msg_code = 23;
# 522
        ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
        }
      }
    }
    {
# 524
    i = 0;
    }
# 524
    while (i < count) {
# 525
      while (1) {
# 525
        if (bytes_in_buffer == 0U) {
          {
# 525
          tmp___7 = ((*(datasrc->fill_input_buffer)))(cinfo);
          }
# 525
          if (! tmp___7) {
# 525
            return (0);
          }
          {
# 525
          next_input_byte = datasrc->next_input_byte;
# 525
          bytes_in_buffer = datasrc->bytes_in_buffer;
          }
        }
        {
# 525
        bytes_in_buffer --;
# 525
        tmp___8 = next_input_byte;
# 525
        next_input_byte ++;
# 525
        huffval[i] = (*tmp___8);
        }
# 525
        break;
      }
      {
# 524
      i ++;
      }
    }
    {
# 527
    length -= (long )count;
    }
# 529
    if (index___0 & 16) {
      {
# 530
      index___0 -= 16;
# 531
      htblptr = & cinfo->ac_huff_tbl_ptrs[index___0];
      }
    } else {
      {
# 533
      htblptr = & cinfo->dc_huff_tbl_ptrs[index___0];
      }
    }
# 536
    if (index___0 < 0) {
      {
# 537
      (cinfo->err)->msg_code = 24;
# 537
      (cinfo->err)->msg_parm.i[0] = index___0;
# 537
      ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
      }
    } else {
# 536
      if (index___0 >= 4) {
        {
# 537
        (cinfo->err)->msg_code = 24;
# 537
        (cinfo->err)->msg_parm.i[0] = index___0;
# 537
        ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
        }
      }
    }
# 539
    if ((unsigned int )(*htblptr) == (unsigned int )((void *)0)) {
      {
# 540
      (*htblptr) = jpeg_alloc_huff_table((struct jpeg_common_struct *)cinfo);
      }
    }
    {
# 542
    memcpy((void */* __restrict  */)((void *)(((*htblptr))->bits)),
           (void const   */* __restrict  */)((void const   *)(bits)),
           sizeof(((*htblptr))->bits));
# 543
    memcpy((void */* __restrict  */)((void *)(((*htblptr))->huffval)),
           (void const   */* __restrict  */)((void const   *)(huffval)),
           sizeof(((*htblptr))->huffval));
    }
  }
  {
# 546
  datasrc->next_input_byte = next_input_byte;
# 546
  datasrc->bytes_in_buffer = bytes_in_buffer;
  }
# 547
  return (1);
}
}
# 551
static boolean get_dqt(j_decompress_ptr cinfo ) 
{ INT32 length ;
  int n ;
  int i ;
  int prec ;
  unsigned int tmp ;
  JQUANT_TBL *quant_ptr ;
  struct jpeg_source_mgr *datasrc ;
  JOCTET const   *next_input_byte ;
  size_t bytes_in_buffer ;
  boolean tmp___0 ;
  JOCTET const   *tmp___1 ;
  boolean tmp___2 ;
  JOCTET const   *tmp___3 ;
  boolean tmp___4 ;
  JOCTET const   *tmp___5 ;
  boolean tmp___6 ;
  JOCTET const   *tmp___7 ;
  boolean tmp___8 ;
  JOCTET const   *tmp___9 ;
  boolean tmp___10 ;
  JOCTET const   *tmp___11 ;
  int *_mp ;

  {
  {
# 559
  datasrc = (struct jpeg_source_mgr *)cinfo->src;
# 559
  next_input_byte = datasrc->next_input_byte;
# 559
  bytes_in_buffer = datasrc->bytes_in_buffer;
  }
# 561
  while (1) {
# 561
    if (bytes_in_buffer == 0U) {
      {
# 561
      tmp___0 = ((*(datasrc->fill_input_buffer)))(cinfo);
      }
# 561
      if (! tmp___0) {
# 561
        return (0);
      }
      {
# 561
      next_input_byte = datasrc->next_input_byte;
# 561
      bytes_in_buffer = datasrc->bytes_in_buffer;
      }
    }
    {
# 561
    bytes_in_buffer --;
# 561
    tmp___1 = next_input_byte;
# 561
    next_input_byte ++;
# 561
    length = (long )((unsigned int )(*tmp___1) << 8);
    }
# 561
    if (bytes_in_buffer == 0U) {
      {
# 561
      tmp___2 = ((*(datasrc->fill_input_buffer)))(cinfo);
      }
# 561
      if (! tmp___2) {
# 561
        return (0);
      }
      {
# 561
      next_input_byte = datasrc->next_input_byte;
# 561
      bytes_in_buffer = datasrc->bytes_in_buffer;
      }
    }
    {
# 561
    bytes_in_buffer --;
# 561
    tmp___3 = next_input_byte;
# 561
    next_input_byte ++;
# 561
    length += (long )(*tmp___3);
    }
# 561
    break;
  }
  {
# 562
  length -= 2L;
  }
# 564
  while (length > 0L) {
# 565
    while (1) {
# 565
      if (bytes_in_buffer == 0U) {
        {
# 565
        tmp___4 = ((*(datasrc->fill_input_buffer)))(cinfo);
        }
# 565
        if (! tmp___4) {
# 565
          return (0);
        }
        {
# 565
        next_input_byte = datasrc->next_input_byte;
# 565
        bytes_in_buffer = datasrc->bytes_in_buffer;
        }
      }
      {
# 565
      bytes_in_buffer --;
# 565
      tmp___5 = next_input_byte;
# 565
      next_input_byte ++;
# 565
      n = (int )(*tmp___5);
      }
# 565
      break;
    }
    {
# 566
    prec = n >> 4;
# 567
    n &= 15;
# 569
    (cinfo->err)->msg_code = 73;
# 569
    (cinfo->err)->msg_parm.i[0] = n;
# 569
    (cinfo->err)->msg_parm.i[1] = prec;
# 569
    ((*((cinfo->err)->emit_message)))((struct jpeg_common_struct *)cinfo, 1);
    }
# 571
    if (n >= 4) {
      {
# 572
      (cinfo->err)->msg_code = 25;
# 572
      (cinfo->err)->msg_parm.i[0] = n;
# 572
      ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
      }
    }
# 574
    if ((unsigned int )cinfo->quant_tbl_ptrs[n] == (unsigned int )((void *)0)) {
      {
# 575
      cinfo->quant_tbl_ptrs[n] = jpeg_alloc_quant_table((struct jpeg_common_struct *)cinfo);
      }
    }
    {
# 576
    quant_ptr = cinfo->quant_tbl_ptrs[n];
# 578
    i = 0;
    }
# 578
    while (i < 64) {
# 579
      if (prec) {
# 580
        while (1) {
# 580
          if (bytes_in_buffer == 0U) {
            {
# 580
            tmp___6 = ((*(datasrc->fill_input_buffer)))(cinfo);
            }
# 580
            if (! tmp___6) {
# 580
              return (0);
            }
            {
# 580
            next_input_byte = datasrc->next_input_byte;
# 580
            bytes_in_buffer = datasrc->bytes_in_buffer;
            }
          }
          {
# 580
          bytes_in_buffer --;
# 580
          tmp___7 = next_input_byte;
# 580
          next_input_byte ++;
# 580
          tmp = (unsigned int )(*tmp___7) << 8;
          }
# 580
          if (bytes_in_buffer == 0U) {
            {
# 580
            tmp___8 = ((*(datasrc->fill_input_buffer)))(cinfo);
            }
# 580
            if (! tmp___8) {
# 580
              return (0);
            }
            {
# 580
            next_input_byte = datasrc->next_input_byte;
# 580
            bytes_in_buffer = datasrc->bytes_in_buffer;
            }
          }
          {
# 580
          bytes_in_buffer --;
# 580
          tmp___9 = next_input_byte;
# 580
          next_input_byte ++;
# 580
          tmp += (unsigned int )(*tmp___9);
          }
# 580
          break;
        }
      } else {
# 582
        while (1) {
# 582
          if (bytes_in_buffer == 0U) {
            {
# 582
            tmp___10 = ((*(datasrc->fill_input_buffer)))(cinfo);
            }
# 582
            if (! tmp___10) {
# 582
              return (0);
            }
            {
# 582
            next_input_byte = datasrc->next_input_byte;
# 582
            bytes_in_buffer = datasrc->bytes_in_buffer;
            }
          }
          {
# 582
          bytes_in_buffer --;
# 582
          tmp___11 = next_input_byte;
# 582
          next_input_byte ++;
# 582
          tmp = (unsigned int )(*tmp___11);
          }
# 582
          break;
        }
      }
      {
# 583
      quant_ptr->quantval[i] = (unsigned short )tmp;
# 578
      i ++;
      }
    }
    {
# 586
    i = 0;
    }
# 586
    while (i < 64) {
# 587
      while (1) {
        {
# 587
        _mp = (cinfo->err)->msg_parm.i;
# 587
        (*(_mp + 0)) = (int )quant_ptr->quantval[i];
# 588
        (*(_mp + 1)) = (int )quant_ptr->quantval[i + 1];
# 588
        (*(_mp + 2)) = (int )quant_ptr->quantval[i + 2];
# 589
        (*(_mp + 3)) = (int )quant_ptr->quantval[i + 3];
# 589
        (*(_mp + 4)) = (int )quant_ptr->quantval[i + 4];
# 590
        (*(_mp + 5)) = (int )quant_ptr->quantval[i + 5];
# 590
        (*(_mp + 6)) = (int )quant_ptr->quantval[i + 6];
# 591
        (*(_mp + 7)) = (int )quant_ptr->quantval[i + 7];
# 591
        (cinfo->err)->msg_code = 85;
# 591
        ((*((cinfo->err)->emit_message)))((struct jpeg_common_struct *)cinfo, 2);
        }
# 587
        break;
      }
      {
# 586
      i += 8;
      }
    }
    {
# 594
    length -= 65L;
    }
# 595
    if (prec) {
      {
# 595
      length -= 64L;
      }
    }
  }
  {
# 598
  datasrc->next_input_byte = next_input_byte;
# 598
  datasrc->bytes_in_buffer = bytes_in_buffer;
  }
# 599
  return (1);
}
}
# 603
static boolean get_dri(j_decompress_ptr cinfo ) 
{ INT32 length ;
  unsigned int tmp ;
  struct jpeg_source_mgr *datasrc ;
  JOCTET const   *next_input_byte ;
  size_t bytes_in_buffer ;
  boolean tmp___0 ;
  JOCTET const   *tmp___1 ;
  boolean tmp___2 ;
  JOCTET const   *tmp___3 ;
  boolean tmp___4 ;
  JOCTET const   *tmp___5 ;
  boolean tmp___6 ;
  JOCTET const   *tmp___7 ;

  {
  {
# 609
  datasrc = (struct jpeg_source_mgr *)cinfo->src;
# 609
  next_input_byte = datasrc->next_input_byte;
# 609
  bytes_in_buffer = datasrc->bytes_in_buffer;
  }
# 611
  while (1) {
# 611
    if (bytes_in_buffer == 0U) {
      {
# 611
      tmp___0 = ((*(datasrc->fill_input_buffer)))(cinfo);
      }
# 611
      if (! tmp___0) {
# 611
        return (0);
      }
      {
# 611
      next_input_byte = datasrc->next_input_byte;
# 611
      bytes_in_buffer = datasrc->bytes_in_buffer;
      }
    }
    {
# 611
    bytes_in_buffer --;
# 611
    tmp___1 = next_input_byte;
# 611
    next_input_byte ++;
# 611
    length = (long )((unsigned int )(*tmp___1) << 8);
    }
# 611
    if (bytes_in_buffer == 0U) {
      {
# 611
      tmp___2 = ((*(datasrc->fill_input_buffer)))(cinfo);
      }
# 611
      if (! tmp___2) {
# 611
        return (0);
      }
      {
# 611
      next_input_byte = datasrc->next_input_byte;
# 611
      bytes_in_buffer = datasrc->bytes_in_buffer;
      }
    }
    {
# 611
    bytes_in_buffer --;
# 611
    tmp___3 = next_input_byte;
# 611
    next_input_byte ++;
# 611
    length += (long )(*tmp___3);
    }
# 611
    break;
  }
# 613
  if (length != 4L) {
    {
# 614
    (cinfo->err)->msg_code = 9;
# 614
    ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
    }
  }
# 616
  while (1) {
# 616
    if (bytes_in_buffer == 0U) {
      {
# 616
      tmp___4 = ((*(datasrc->fill_input_buffer)))(cinfo);
      }
# 616
      if (! tmp___4) {
# 616
        return (0);
      }
      {
# 616
      next_input_byte = datasrc->next_input_byte;
# 616
      bytes_in_buffer = datasrc->bytes_in_buffer;
      }
    }
    {
# 616
    bytes_in_buffer --;
# 616
    tmp___5 = next_input_byte;
# 616
    next_input_byte ++;
# 616
    tmp = (unsigned int )(*tmp___5) << 8;
    }
# 616
    if (bytes_in_buffer == 0U) {
      {
# 616
      tmp___6 = ((*(datasrc->fill_input_buffer)))(cinfo);
      }
# 616
      if (! tmp___6) {
# 616
        return (0);
      }
      {
# 616
      next_input_byte = datasrc->next_input_byte;
# 616
      bytes_in_buffer = datasrc->bytes_in_buffer;
      }
    }
    {
# 616
    bytes_in_buffer --;
# 616
    tmp___7 = next_input_byte;
# 616
    next_input_byte ++;
# 616
    tmp += (unsigned int )(*tmp___7);
    }
# 616
    break;
  }
  {
# 618
  (cinfo->err)->msg_code = 74;
# 618
  (cinfo->err)->msg_parm.i[0] = (int )tmp;
# 618
  ((*((cinfo->err)->emit_message)))((struct jpeg_common_struct *)cinfo, 1);
# 620
  cinfo->restart_interval = tmp;
# 622
  datasrc->next_input_byte = next_input_byte;
# 622
  datasrc->bytes_in_buffer = bytes_in_buffer;
  }
# 623
  return (1);
}
}
# 627
static boolean skip_variable(j_decompress_ptr cinfo ) 
{ INT32 length ;
  struct jpeg_source_mgr *datasrc ;
  JOCTET const   *next_input_byte ;
  size_t bytes_in_buffer ;
  boolean tmp ;
  JOCTET const   *tmp___0 ;
  boolean tmp___1 ;
  JOCTET const   *tmp___2 ;

  {
  {
# 632
  datasrc = (struct jpeg_source_mgr *)cinfo->src;
# 632
  next_input_byte = datasrc->next_input_byte;
# 632
  bytes_in_buffer = datasrc->bytes_in_buffer;
  }
# 634
  while (1) {
# 634
    if (bytes_in_buffer == 0U) {
      {
# 634
      tmp = ((*(datasrc->fill_input_buffer)))(cinfo);
      }
# 634
      if (! tmp) {
# 634
        return (0);
      }
      {
# 634
      next_input_byte = datasrc->next_input_byte;
# 634
      bytes_in_buffer = datasrc->bytes_in_buffer;
      }
    }
    {
# 634
    bytes_in_buffer --;
# 634
    tmp___0 = next_input_byte;
# 634
    next_input_byte ++;
# 634
    length = (long )((unsigned int )(*tmp___0) << 8);
    }
# 634
    if (bytes_in_buffer == 0U) {
      {
# 634
      tmp___1 = ((*(datasrc->fill_input_buffer)))(cinfo);
      }
# 634
      if (! tmp___1) {
# 634
        return (0);
      }
      {
# 634
      next_input_byte = datasrc->next_input_byte;
# 634
      bytes_in_buffer = datasrc->bytes_in_buffer;
      }
    }
    {
# 634
    bytes_in_buffer --;
# 634
    tmp___2 = next_input_byte;
# 634
    next_input_byte ++;
# 634
    length += (long )(*tmp___2);
    }
# 634
    break;
  }
  {
# 636
  (cinfo->err)->msg_code = 83;
# 636
  (cinfo->err)->msg_parm.i[0] = cinfo->unread_marker;
# 636
  (cinfo->err)->msg_parm.i[1] = (int )length;
# 636
  ((*((cinfo->err)->emit_message)))((struct jpeg_common_struct *)cinfo, 1);
# 638
  datasrc->next_input_byte = next_input_byte;
# 638
  datasrc->bytes_in_buffer = bytes_in_buffer;
# 639
  ((*((cinfo->src)->skip_input_data)))(cinfo, length - 2L);
  }
# 641
  return (1);
}
}
# 654
static boolean next_marker(j_decompress_ptr cinfo ) 
{ int c ;
  struct jpeg_source_mgr *datasrc ;
  JOCTET const   *next_input_byte ;
  size_t bytes_in_buffer ;
  boolean tmp ;
  JOCTET const   *tmp___0 ;
  boolean tmp___1 ;
  JOCTET const   *tmp___2 ;
  boolean tmp___3 ;
  JOCTET const   *tmp___4 ;

  {
  {
# 658
  datasrc = (struct jpeg_source_mgr *)cinfo->src;
# 658
  next_input_byte = datasrc->next_input_byte;
# 658
  bytes_in_buffer = datasrc->bytes_in_buffer;
  }
# 660
  while (1) {
# 661
    while (1) {
# 661
      if (bytes_in_buffer == 0U) {
        {
# 661
        tmp = ((*(datasrc->fill_input_buffer)))(cinfo);
        }
# 661
        if (! tmp) {
# 661
          return (0);
        }
        {
# 661
        next_input_byte = datasrc->next_input_byte;
# 661
        bytes_in_buffer = datasrc->bytes_in_buffer;
        }
      }
      {
# 661
      bytes_in_buffer --;
# 661
      tmp___0 = next_input_byte;
# 661
      next_input_byte ++;
# 661
      c = (int )(*tmp___0);
      }
# 661
      break;
    }
# 667
    while (c != 255) {
      {
# 668
      (cinfo->marker)->discarded_bytes = (cinfo->marker)->discarded_bytes + 1U;
# 669
      datasrc->next_input_byte = next_input_byte;
# 669
      datasrc->bytes_in_buffer = bytes_in_buffer;
      }
# 670
      while (1) {
# 670
        if (bytes_in_buffer == 0U) {
          {
# 670
          tmp___1 = ((*(datasrc->fill_input_buffer)))(cinfo);
          }
# 670
          if (! tmp___1) {
# 670
            return (0);
          }
          {
# 670
          next_input_byte = datasrc->next_input_byte;
# 670
          bytes_in_buffer = datasrc->bytes_in_buffer;
          }
        }
        {
# 670
        bytes_in_buffer --;
# 670
        tmp___2 = next_input_byte;
# 670
        next_input_byte ++;
# 670
        c = (int )(*tmp___2);
        }
# 670
        break;
      }
    }
# 677
    while (1) {
# 678
      while (1) {
# 678
        if (bytes_in_buffer == 0U) {
          {
# 678
          tmp___3 = ((*(datasrc->fill_input_buffer)))(cinfo);
          }
# 678
          if (! tmp___3) {
# 678
            return (0);
          }
          {
# 678
          next_input_byte = datasrc->next_input_byte;
# 678
          bytes_in_buffer = datasrc->bytes_in_buffer;
          }
        }
        {
# 678
        bytes_in_buffer --;
# 678
        tmp___4 = next_input_byte;
# 678
        next_input_byte ++;
# 678
        c = (int )(*tmp___4);
        }
# 678
        break;
      }
# 677
      if (! (c == 255)) {
# 677
        break;
      }
    }
# 680
    if (c != 0) {
# 681
      break;
    }
    {
# 685
    (cinfo->marker)->discarded_bytes = (cinfo->marker)->discarded_bytes + 2U;
# 686
    datasrc->next_input_byte = next_input_byte;
# 686
    datasrc->bytes_in_buffer = bytes_in_buffer;
    }
  }
# 689
  if ((cinfo->marker)->discarded_bytes != 0U) {
    {
# 690
    (cinfo->err)->msg_code = 103;
# 690
    (cinfo->err)->msg_parm.i[0] = (int )(cinfo->marker)->discarded_bytes;
# 690
    (cinfo->err)->msg_parm.i[1] = c;
# 690
    ((*((cinfo->err)->emit_message)))((struct jpeg_common_struct *)cinfo, -1);
# 691
    (cinfo->marker)->discarded_bytes = 0U;
    }
  }
  {
# 694
  cinfo->unread_marker = c;
# 696
  datasrc->next_input_byte = next_input_byte;
# 696
  datasrc->bytes_in_buffer = bytes_in_buffer;
  }
# 697
  return (1);
}
}
# 701
static boolean first_marker(j_decompress_ptr cinfo ) 
{ int c ;
  int c2 ;
  struct jpeg_source_mgr *datasrc ;
  JOCTET const   *next_input_byte ;
  size_t bytes_in_buffer ;
  boolean tmp ;
  JOCTET const   *tmp___0 ;
  boolean tmp___1 ;
  JOCTET const   *tmp___2 ;

  {
  {
# 711
  datasrc = (struct jpeg_source_mgr *)cinfo->src;
# 711
  next_input_byte = datasrc->next_input_byte;
# 711
  bytes_in_buffer = datasrc->bytes_in_buffer;
  }
# 713
  while (1) {
# 713
    if (bytes_in_buffer == 0U) {
      {
# 713
      tmp = ((*(datasrc->fill_input_buffer)))(cinfo);
      }
# 713
      if (! tmp) {
# 713
        return (0);
      }
      {
# 713
      next_input_byte = datasrc->next_input_byte;
# 713
      bytes_in_buffer = datasrc->bytes_in_buffer;
      }
    }
    {
# 713
    bytes_in_buffer --;
# 713
    tmp___0 = next_input_byte;
# 713
    next_input_byte ++;
# 713
    c = (int )(*tmp___0);
    }
# 713
    break;
  }
# 714
  while (1) {
# 714
    if (bytes_in_buffer == 0U) {
      {
# 714
      tmp___1 = ((*(datasrc->fill_input_buffer)))(cinfo);
      }
# 714
      if (! tmp___1) {
# 714
        return (0);
      }
      {
# 714
      next_input_byte = datasrc->next_input_byte;
# 714
      bytes_in_buffer = datasrc->bytes_in_buffer;
      }
    }
    {
# 714
    bytes_in_buffer --;
# 714
    tmp___2 = next_input_byte;
# 714
    next_input_byte ++;
# 714
    c2 = (int )(*tmp___2);
    }
# 714
    break;
  }
# 715
  if (c != 255) {
    {
# 716
    (cinfo->err)->msg_code = 45;
# 716
    (cinfo->err)->msg_parm.i[0] = c;
# 716
    (cinfo->err)->msg_parm.i[1] = c2;
# 716
    ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
    }
  } else {
# 715
    if (c2 != 216) {
      {
# 716
      (cinfo->err)->msg_code = 45;
# 716
      (cinfo->err)->msg_parm.i[0] = c;
# 716
      (cinfo->err)->msg_parm.i[1] = c2;
# 716
      ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
      }
    }
  }
  {
# 718
  cinfo->unread_marker = c2;
# 720
  datasrc->next_input_byte = next_input_byte;
# 720
  datasrc->bytes_in_buffer = bytes_in_buffer;
  }
# 721
  return (1);
}
}
# 733
static int read_markers(j_decompress_ptr cinfo ) 
{ boolean tmp ;
  boolean tmp___0 ;
  boolean tmp___1 ;
  boolean tmp___2 ;
  boolean tmp___3 ;
  boolean tmp___4 ;
  boolean tmp___5 ;
  boolean tmp___6 ;
  boolean tmp___7 ;
  boolean tmp___8 ;
  boolean tmp___9 ;
  boolean tmp___10 ;
  boolean tmp___11 ;

  {
# 737
  while (1) {
# 740
    if (cinfo->unread_marker == 0) {
# 741
      if ((cinfo->marker)->saw_SOI) {
        {
# 745
        tmp___0 = next_marker(cinfo);
        }
# 745
        if (! tmp___0) {
# 746
          return (2);
        }
      } else {
        {
# 742
        tmp = first_marker(cinfo);
        }
# 742
        if (! tmp) {
# 743
          return (2);
        }
      }
    }
# 753
    switch (cinfo->unread_marker) {
    case 216: 
    {
# 755
    tmp___1 = get_soi(cinfo);
    }
# 755
    if (! tmp___1) {
# 756
      return (2);
    }
# 757
    break;
    case 192: 
    {

    }
    case 193: 
    {
# 761
    cinfo->arith_code = 0;
# 762
    tmp___2 = get_sof(cinfo);
    }
# 762
    if (! tmp___2) {
# 763
      return (2);
    }
# 764
    break;
    case 201: 
    {
# 767
    cinfo->arith_code = 1;
# 768
    tmp___3 = get_sof(cinfo);
    }
# 768
    if (! tmp___3) {
# 769
      return (2);
    }
# 770
    break;
    case 194: 
    {

    }
    case 195: 
    {

    }
    case 197: 
    {

    }
    case 198: 
    {

    }
    case 199: 
    {

    }
    case 200: 
    {

    }
    case 202: 
    {

    }
    case 203: 
    {

    }
    case 205: 
    {

    }
    case 206: 
    {

    }
    case 207: 
    {
# 784
    (cinfo->err)->msg_code = 52;
# 784
    (cinfo->err)->msg_parm.i[0] = cinfo->unread_marker;
# 784
    ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
    }
# 785
    break;
    case 218: 
    {
# 788
    tmp___4 = get_sos(cinfo);
    }
# 788
    if (! tmp___4) {
# 789
      return (2);
    }
    {
# 790
    cinfo->unread_marker = 0;
    }
# 791
    return (0);
    case 217: 
    {
# 794
    (cinfo->err)->msg_code = 77;
# 794
    ((*((cinfo->err)->emit_message)))((struct jpeg_common_struct *)cinfo, 1);
# 795
    cinfo->unread_marker = 0;
    }
# 796
    return (1);
    case 204: 
    {
# 799
    tmp___5 = get_dac(cinfo);
    }
# 799
    if (! tmp___5) {
# 800
      return (2);
    }
# 801
    break;
    case 196: 
    {
# 804
    tmp___6 = get_dht(cinfo);
    }
# 804
    if (! tmp___6) {
# 805
      return (2);
    }
# 806
    break;
    case 219: 
    {
# 809
    tmp___7 = get_dqt(cinfo);
    }
# 809
    if (! tmp___7) {
# 810
      return (2);
    }
# 811
    break;
    case 221: 
    {
# 814
    tmp___8 = get_dri(cinfo);
    }
# 814
    if (! tmp___8) {
# 815
      return (2);
    }
# 816
    break;
    case 224: 
    {

    }
    case 225: 
    {

    }
    case 226: 
    {

    }
    case 227: 
    {

    }
    case 228: 
    {

    }
    case 229: 
    {

    }
    case 230: 
    {

    }
    case 231: 
    {

    }
    case 232: 
    {

    }
    case 233: 
    {

    }
    case 234: 
    {

    }
    case 235: 
    {

    }
    case 236: 
    {

    }
    case 237: 
    {

    }
    case 238: 
    {

    }
    case 239: 
    {
# 834
    tmp___9 = ((*((cinfo->marker)->process_APPn[cinfo->unread_marker - 224])))(cinfo);
    }
# 834
    if (! tmp___9) {
# 835
      return (2);
    }
# 836
    break;
    case 254: 
    {
# 839
    tmp___10 = ((*((cinfo->marker)->process_COM)))(cinfo);
    }
# 839
    if (! tmp___10) {
# 840
      return (2);
    }
# 841
    break;
    case 208: 
    {

    }
    case 209: 
    {

    }
    case 210: 
    {

    }
    case 211: 
    {

    }
    case 212: 
    {

    }
    case 213: 
    {

    }
    case 214: 
    {

    }
    case 215: 
    {

    }
    case 1: 
    {
# 852
    (cinfo->err)->msg_code = 84;
# 852
    (cinfo->err)->msg_parm.i[0] = cinfo->unread_marker;
# 852
    ((*((cinfo->err)->emit_message)))((struct jpeg_common_struct *)cinfo, 1);
    }
# 853
    break;
    case 220: 
    {
# 856
    tmp___11 = skip_variable(cinfo);
    }
# 856
    if (! tmp___11) {
# 857
      return (2);
    }
# 858
    break;
    default: 
    {
# 866
    (cinfo->err)->msg_code = 60;
# 866
    (cinfo->err)->msg_parm.i[0] = cinfo->unread_marker;
# 866
    ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
    }
# 867
    break;
    }
    {
# 870
    cinfo->unread_marker = 0;
    }
  }
# 872
  return (0);
}
}
# 887
static boolean read_restart_marker(j_decompress_ptr cinfo ) 
{ boolean tmp ;
  boolean tmp___0 ;

  {
# 892
  if (cinfo->unread_marker == 0) {
    {
# 893
    tmp = next_marker(cinfo);
    }
# 893
    if (! tmp) {
# 894
      return (0);
    }
  }
# 897
  if (cinfo->unread_marker == 208 + (cinfo->marker)->next_restart_num) {
    {
# 900
    (cinfo->err)->msg_code = 90;
# 900
    (cinfo->err)->msg_parm.i[0] = (cinfo->marker)->next_restart_num;
# 900
    ((*((cinfo->err)->emit_message)))((struct jpeg_common_struct *)cinfo, 2);
# 901
    cinfo->unread_marker = 0;
    }
  } else {
    {
# 905
    tmp___0 = ((*((cinfo->src)->resync_to_restart)))(cinfo);
    }
# 905
    if (! tmp___0) {
# 906
      return (0);
    }
  }
  {
# 910
  (cinfo->marker)->next_restart_num = ((cinfo->marker)->next_restart_num + 1) &
                                      7;
  }
# 912
  return (1);
}
}
# 965
boolean jpeg_resync_to_restart(j_decompress_ptr cinfo ) 
{ int marker ;
  int desired ;
  int action ;
  boolean tmp ;

  {
  {
# 968
  marker = cinfo->unread_marker;
# 969
  desired = (cinfo->marker)->next_restart_num;
# 970
  action = 1;
# 973
  (cinfo->err)->msg_code = 107;
# 973
  (cinfo->err)->msg_parm.i[0] = marker;
# 973
  (cinfo->err)->msg_parm.i[1] = desired;
# 973
  ((*((cinfo->err)->emit_message)))((struct jpeg_common_struct *)cinfo, -1);
  }
# 976
  while (1) {
# 977
    if (marker < 192) {
      {
# 978
      action = 2;
      }
    } else {
# 979
      if (marker < 208) {
        {
# 980
        action = 3;
        }
      } else {
# 979
        if (marker > 215) {
          {
# 980
          action = 3;
          }
        } else {
# 982
          if (marker == 208 + ((desired + 1) & 7)) {
            {
# 984
            action = 3;
            }
          } else {
# 982
            if (marker == 208 + ((desired + 2) & 7)) {
              {
# 984
              action = 3;
              }
            } else {
# 985
              if (marker == 208 + ((desired - 1) & 7)) {
                {
# 987
                action = 2;
                }
              } else {
# 985
                if (marker == 208 + ((desired - 2) & 7)) {
                  {
# 987
                  action = 2;
                  }
                } else {
                  {
# 989
                  action = 1;
                  }
                }
              }
            }
          }
        }
      }
    }
    {
# 991
    (cinfo->err)->msg_code = 89;
# 991
    (cinfo->err)->msg_parm.i[0] = marker;
# 991
    (cinfo->err)->msg_parm.i[1] = action;
# 991
    ((*((cinfo->err)->emit_message)))((struct jpeg_common_struct *)cinfo, 4);
    }
# 992
    switch (action) {
    case 1: 
    {
# 995
    cinfo->unread_marker = 0;
    }
# 996
    return (1);
    case 2: 
    {
# 999
    tmp = next_marker(cinfo);
    }
# 999
    if (! tmp) {
# 1000
      return (0);
    }
    {
# 1001
    marker = cinfo->unread_marker;
    }
# 1002
    break;
    case 3: 
    {

    }
# 1006
    return (1);
    }
  }
# 1009
  return (0);
}
}
# 1016
static void reset_marker_reader(j_decompress_ptr cinfo ) 
{ 

  {
  {
# 1019
  cinfo->unread_marker = 0;
# 1020
  (cinfo->marker)->saw_SOI = 0;
# 1021
  (cinfo->marker)->saw_SOF = 0;
# 1022
  (cinfo->marker)->discarded_bytes = 0U;
# 1023
  cinfo->comp_info = (jpeg_component_info *)((void *)0);
  }
# 1024
  return;
}
}
# 1031
void jinit_marker_reader(j_decompress_ptr cinfo ) 
{ int i ;

  {
# 1037
  if ((unsigned int )cinfo->marker == (unsigned int )((void *)0)) {
    {
# 1038
    cinfo->marker = (struct jpeg_marker_reader *)alloc_small_wrapper((struct jpeg_common_struct *)cinfo,
                                                                     0,
                                                                     sizeof(struct jpeg_marker_reader ));
    }
  }
  {
# 1044
  (cinfo->marker)->reset_marker_reader = & reset_marker_reader;
# 1045
  (cinfo->marker)->read_markers = & read_markers;
# 1046
  (cinfo->marker)->read_restart_marker = & read_restart_marker;
# 1047
  (cinfo->marker)->process_COM = & skip_variable;
# 1048
  i = 0;
  }
# 1048
  while (i < 16) {
    {
# 1049
    (cinfo->marker)->process_APPn[i] = & skip_variable;
# 1048
    i ++;
    }
  }
  {
# 1050
  (cinfo->marker)->process_APPn[0] = & get_app0;
# 1051
  (cinfo->marker)->process_APPn[14] = & get_app14;
# 1053
  reset_marker_reader(cinfo);
  }
# 1054
  return;
}
}
# 145 "jdmainct.c"
static void process_data_simple_main___0(j_decompress_ptr cinfo ,
                                         JSAMPARRAY output_buf ,
                                         JDIMENSION *out_row_ctr ,
                                         JDIMENSION out_rows_avail ) ;
# 148
static void process_data_context_main(j_decompress_ptr cinfo ,
                                      JSAMPARRAY output_buf ,
                                      JDIMENSION *out_row_ctr ,
                                      JDIMENSION out_rows_avail ) ;
# 152
static void process_data_input_only(j_decompress_ptr cinfo ,
                                    JSAMPARRAY output_buf ,
                                    JDIMENSION *out_row_ctr ,
                                    JDIMENSION out_rows_avail ) ;
# 157
static void process_data_crank_post(j_decompress_ptr cinfo ,
                                    JSAMPARRAY output_buf ,
                                    JDIMENSION *out_row_ctr ,
                                    JDIMENSION out_rows_avail ) ;
# 163
static void make_funny_pointers(j_decompress_ptr cinfo ) 
{ jdmainct_my_main_ptr main___0 ;
  int ci ;
  int i ;
  int rgroup ;
  int M ;
  jpeg_component_info *compptr ;
  JSAMPARRAY buf ;
  JSAMPARRAY xbuf0 ;
  JSAMPARRAY xbuf1 ;

  {
  {
# 170
  main___0 = (my_main_controller_d *)cinfo->main;
# 172
  M = cinfo->min_DCT_scaled_size;
# 179
  main___0->xbuffer[0] = (JSAMPIMAGE )alloc_small_wrapper((struct jpeg_common_struct *)cinfo,
                                                          1,
                                                          (unsigned int )(cinfo->num_components *
                                                                          2) *
                                                          sizeof((*(main___0->xbuffer[0]))));
# 184
  main___0->xbuffer[1] = main___0->xbuffer[0] + cinfo->num_components;
# 186
  ci = 0;
# 186
  compptr = cinfo->comp_info;
  }
# 186
  while (ci < cinfo->num_components) {
    {
# 188
    rgroup = (compptr->v_samp_factor * compptr->DCT_scaled_size) /
             cinfo->min_DCT_scaled_size;
# 193
    xbuf0 = (JSAMPARRAY )alloc_small_wrapper((struct jpeg_common_struct *)cinfo,
                                             1, (unsigned int )(2 * (rgroup *
                                                                     (M + 4))) *
                                                sizeof((*xbuf0)));
# 197
    xbuf0 += rgroup;
# 198
    (*(main___0->xbuffer[0] + ci)) = xbuf0;
# 199
    xbuf1 = xbuf0 + rgroup * (M + 4);
# 200
    (*(main___0->xbuffer[1] + ci)) = xbuf1;
# 202
    buf = main___0->buffer[ci];
# 203
    i = 0;
    }
# 203
    while (i < rgroup * (M + 2)) {
      {
# 204
      (*(xbuf1 + i)) = (*(buf + i));
# 204
      (*(xbuf0 + i)) = (*(xbuf1 + i));
# 203
      i ++;
      }
    }
    {
# 207
    i = 0;
    }
# 207
    while (i < rgroup * 2) {
      {
# 208
      (*(xbuf1 + (rgroup * (M - 2) + i))) = (*(buf + (rgroup * M + i)));
# 209
      (*(xbuf1 + (rgroup * M + i))) = (*(buf + (rgroup * (M - 2) + i)));
# 207
      i ++;
      }
    }
    {
# 216
    i = 0;
    }
# 216
    while (i < rgroup) {
      {
# 217
      (*(xbuf0 + (i - rgroup))) = (*(xbuf0 + 0));
# 216
      i ++;
      }
    }
    {
# 186
    ci ++;
# 186
    compptr ++;
    }
  }
# 220
  return;
}
}
# 223
static void set_wraparound_pointers(j_decompress_ptr cinfo ) 
{ jdmainct_my_main_ptr main___0 ;
  int ci ;
  int i ;
  int rgroup ;
  int M ;
  jpeg_component_info *compptr ;
  JSAMPARRAY xbuf0 ;
  JSAMPARRAY xbuf1 ;

  {
  {
# 229
  main___0 = (my_main_controller_d *)cinfo->main;
# 231
  M = cinfo->min_DCT_scaled_size;
# 235
  ci = 0;
# 235
  compptr = cinfo->comp_info;
  }
# 235
  while (ci < cinfo->num_components) {
    {
# 237
    rgroup = (compptr->v_samp_factor * compptr->DCT_scaled_size) /
             cinfo->min_DCT_scaled_size;
# 239
    xbuf0 = (*(main___0->xbuffer[0] + ci));
# 240
    xbuf1 = (*(main___0->xbuffer[1] + ci));
# 241
    i = 0;
    }
# 241
    while (i < rgroup) {
      {
# 242
      (*(xbuf0 + (i - rgroup))) = (*(xbuf0 + (rgroup * (M + 1) + i)));
# 243
      (*(xbuf1 + (i - rgroup))) = (*(xbuf1 + (rgroup * (M + 1) + i)));
# 244
      (*(xbuf0 + (rgroup * (M + 2) + i))) = (*(xbuf0 + i));
# 245
      (*(xbuf1 + (rgroup * (M + 2) + i))) = (*(xbuf1 + i));
# 241
      i ++;
      }
    }
    {
# 235
    ci ++;
# 235
    compptr ++;
    }
  }
# 248
  return;
}
}
# 251
static void set_bottom_pointers(j_decompress_ptr cinfo ) 
{ jdmainct_my_main_ptr main___0 ;
  int ci ;
  int i ;
  int rgroup ;
  int iMCUheight ;
  int rows_left ;
  jpeg_component_info *compptr ;
  JSAMPARRAY xbuf ;

  {
  {
# 258
  main___0 = (my_main_controller_d *)cinfo->main;
# 263
  ci = 0;
# 263
  compptr = cinfo->comp_info;
  }
# 263
  while (ci < cinfo->num_components) {
    {
# 266
    iMCUheight = compptr->v_samp_factor * compptr->DCT_scaled_size;
# 267
    rgroup = iMCUheight / cinfo->min_DCT_scaled_size;
# 269
    rows_left = (int )(compptr->downsampled_height % (unsigned int )iMCUheight);
    }
# 270
    if (rows_left == 0) {
      {
# 270
      rows_left = iMCUheight;
      }
    }
# 274
    if (ci == 0) {
      {
# 275
      main___0->rowgroups_avail = (unsigned int )((rows_left - 1) / rgroup + 1);
      }
    }
    {
# 280
    xbuf = (*(main___0->xbuffer[main___0->whichptr] + ci));
# 281
    i = 0;
    }
# 281
    while (i < rgroup * 2) {
      {
# 282
      (*(xbuf + (rows_left + i))) = (*(xbuf + (rows_left - 1)));
# 281
      i ++;
      }
    }
    {
# 263
    ci ++;
# 263
    compptr ++;
    }
  }
# 285
  return;
}
}
# 292
static void start_pass_main___0(j_decompress_ptr cinfo , J_BUF_MODE pass_mode ) 
{ jdmainct_my_main_ptr main___0 ;

  {
  {
# 295
  main___0 = (my_main_controller_d *)cinfo->main;
# 298
  main___0->pub.num_chunks = cinfo->output_height;
  }
# 300
  switch (pass_mode) {
  case 0: 
  {

  }
# 303
  if (cinfo->raw_data_out) {
# 304
    return;
  }
# 305
  if ((cinfo->upsample)->need_context_rows) {
    {
# 306
    main___0->pub.process_data = & process_data_context_main;
# 307
    make_funny_pointers(cinfo);
# 308
    main___0->whichptr = 0;
# 309
    main___0->context_state = 0;
# 310
    main___0->iMCU_row_ctr = 0U;
    }
  } else {
    {
# 313
    main___0->pub.process_data = & process_data_simple_main___0;
    }
  }
  {
# 315
  main___0->buffer_full = 0;
# 316
  main___0->rowgroup_ctr = 0U;
  }
# 317
  break;
  case 1: 
  {
# 321
  main___0->pub.process_data = & process_data_input_only;
# 323
  main___0->pub.num_chunks = cinfo->total_iMCU_rows;
  }
# 324
  break;
  case 3: 
  {
# 329
  main___0->pub.process_data = & process_data_crank_post;
  }
# 330
  break;
  default: 
  {
# 333
  (cinfo->err)->msg_code = 4;
# 333
  ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
  }
# 334
  break;
  }
# 334
  return;
}
}
# 344
static void process_data_simple_main___0(j_decompress_ptr cinfo ,
                                         JSAMPARRAY output_buf ,
                                         JDIMENSION *out_row_ctr ,
                                         JDIMENSION out_rows_avail ) 
{ jdmainct_my_main_ptr main___0 ;
  JDIMENSION rowgroups_avail ;
  boolean tmp ;

  {
  {
# 349
  main___0 = (my_main_controller_d *)cinfo->main;
  }
# 353
  if (! main___0->buffer_full) {
    {
# 354
    tmp = ((*((cinfo->coef)->decompress_data)))(cinfo, main___0->buffer);
    }
# 354
    if (! tmp) {
# 355
      return;
    }
    {
# 356
    main___0->buffer_full = 1;
    }
  }
  {
# 360
  rowgroups_avail = (unsigned int )cinfo->min_DCT_scaled_size;
# 367
  ((*((cinfo->post)->post_process_data)))(cinfo, main___0->buffer,
                                          & main___0->rowgroup_ctr,
                                          rowgroups_avail, output_buf,
                                          out_row_ctr, out_rows_avail);
  }
# 372
  if (main___0->rowgroup_ctr >= rowgroups_avail) {
    {
# 373
    main___0->buffer_full = 0;
# 374
    main___0->rowgroup_ctr = 0U;
    }
  }
# 376
  return;
}
}
# 384
static void process_data_context_main(j_decompress_ptr cinfo ,
                                      JSAMPARRAY output_buf ,
                                      JDIMENSION *out_row_ctr ,
                                      JDIMENSION out_rows_avail ) 
{ jdmainct_my_main_ptr main___0 ;
  boolean tmp ;

  {
  {
# 389
  main___0 = (my_main_controller_d *)cinfo->main;
  }
# 392
  if (! main___0->buffer_full) {
    {
# 393
    tmp = ((*((cinfo->coef)->decompress_data)))(cinfo,
                                                main___0->xbuffer[main___0->whichptr]);
    }
# 393
    if (! tmp) {
# 395
      return;
    }
    {
# 396
    main___0->buffer_full = 1;
# 397
    main___0->iMCU_row_ctr ++;
    }
  }
# 405
  switch (main___0->context_state) {
  case 2: 
  {
# 408
  ((*((cinfo->post)->post_process_data)))(cinfo,
                                          main___0->xbuffer[main___0->whichptr],
                                          & main___0->rowgroup_ctr,
                                          main___0->rowgroups_avail, output_buf,
                                          out_row_ctr, out_rows_avail);
  }
# 411
  if (main___0->rowgroup_ctr < main___0->rowgroups_avail) {
# 412
    return;
  }
  {
# 413
  main___0->context_state = 0;
  }
# 414
  if ((*out_row_ctr) >= out_rows_avail) {
# 415
    return;
  }
  case 0: 
  {
# 419
  main___0->rowgroup_ctr = 0U;
# 420
  main___0->rowgroups_avail = (unsigned int )(cinfo->min_DCT_scaled_size - 1);
  }
# 424
  if (main___0->iMCU_row_ctr == cinfo->total_iMCU_rows) {
    {
# 425
    set_bottom_pointers(cinfo);
    }
  }
  {
# 426
  main___0->context_state = 1;
  }
  case 1: 
  {
# 430
  ((*((cinfo->post)->post_process_data)))(cinfo,
                                          main___0->xbuffer[main___0->whichptr],
                                          & main___0->rowgroup_ctr,
                                          main___0->rowgroups_avail, output_buf,
                                          out_row_ctr, out_rows_avail);
  }
# 433
  if (main___0->rowgroup_ctr < main___0->rowgroups_avail) {
# 434
    return;
  }
# 436
  if (main___0->iMCU_row_ctr == 1U) {
    {
# 437
    set_wraparound_pointers(cinfo);
    }
  }
  {
# 439
  main___0->whichptr ^= 1;
# 440
  main___0->buffer_full = 0;
# 443
  main___0->rowgroup_ctr = (unsigned int )(cinfo->min_DCT_scaled_size + 1);
# 444
  main___0->rowgroups_avail = (unsigned int )(cinfo->min_DCT_scaled_size + 2);
# 445
  main___0->context_state = 2;
  }
  }
# 447
  return;
}
}
# 458
static void process_data_input_only(j_decompress_ptr cinfo ,
                                    JSAMPARRAY output_buf ,
                                    JDIMENSION *out_row_ctr ,
                                    JDIMENSION out_rows_avail ) 
{ boolean tmp ;

  {
  {
# 463
  tmp = ((*((cinfo->coef)->decompress_data)))(cinfo, (JSAMPARRAY *)((void *)0));
  }
# 463
  if (! tmp) {
# 464
    return;
  }
  {
# 465
  (*out_row_ctr) ++;
  }
# 466
  return;
}
}
# 479
static void process_data_crank_post(j_decompress_ptr cinfo ,
                                    JSAMPARRAY output_buf ,
                                    JDIMENSION *out_row_ctr ,
                                    JDIMENSION out_rows_avail ) 
{ 

  {
  {
# 484
  ((*((cinfo->post)->post_process_data)))(cinfo, (JSAMPARRAY *)((void *)0),
                                          (JDIMENSION *)((void *)0), 0U,
                                          output_buf, out_row_ctr,
                                          out_rows_avail);
  }
# 487
  return;
}
}
# 496
void jinit_d_main_controller(j_decompress_ptr cinfo , boolean need_full_buffer ) 
{ jdmainct_my_main_ptr main___0 ;
  int ci ;
  int rgroup ;
  int ngroups ;
  jpeg_component_info *compptr ;

  {
  {
# 503
  main___0 = (jdmainct_my_main_ptr )alloc_small_wrapper((struct jpeg_common_struct *)cinfo,
                                                        1,
                                                        sizeof(my_main_controller_d ));
# 506
  cinfo->main = (struct jpeg_d_main_controller */* __attribute__((__rtti__)) */)((struct jpeg_d_main_controller *)main___0);
# 507
  main___0->pub.start_pass = & start_pass_main___0;
  }
# 509
  if (need_full_buffer) {
    {
# 510
    (cinfo->err)->msg_code = 4;
# 510
    ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
    }
  }
# 516
  if (cinfo->raw_data_out) {
# 517
    return;
  }
# 522
  if ((cinfo->upsample)->need_context_rows) {
# 523
    if (cinfo->min_DCT_scaled_size < 2) {
      {
# 524
      (cinfo->err)->msg_code = 39;
# 524
      ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
      }
    }
    {
# 525
    ngroups = cinfo->min_DCT_scaled_size + 2;
    }
  } else {
    {
# 527
    ngroups = cinfo->min_DCT_scaled_size;
    }
  }
  {
# 530
  ci = 0;
# 530
  compptr = cinfo->comp_info;
  }
# 530
  while (ci < cinfo->num_components) {
    {
# 532
    rgroup = (compptr->v_samp_factor * compptr->DCT_scaled_size) /
             cinfo->min_DCT_scaled_size;
# 534
    main___0->buffer[ci] = ((*((cinfo->mem)->alloc_sarray)))((struct jpeg_common_struct *)cinfo,
                                                             1,
                                                             compptr->width_in_blocks *
                                                             (unsigned int )compptr->DCT_scaled_size,
                                                             (unsigned int )(rgroup *
                                                                             ngroups));
# 530
    ci ++;
# 530
    compptr ++;
    }
  }
# 539
  return;
}
}
# 49 "jdcoefct.c"
static boolean decompress_data(j_decompress_ptr cinfo , JSAMPIMAGE output_buf ) ;
# 52
static boolean decompress_read(j_decompress_ptr cinfo , JSAMPIMAGE output_buf ) ;
# 54
static boolean decompress_output(j_decompress_ptr cinfo , JSAMPIMAGE output_buf ) ;
# 63
static void start_pass_coef___0(j_decompress_ptr cinfo , J_BUF_MODE pass_mode ) 
{ jdcoefct_my_coef_ptr coef ;

  {
  {
# 66
  coef = (my_coef_controller_d *)cinfo->coef;
# 68
  coef->MCU_col_num = 0U;
# 69
  coef->MCU_row_num = 0U;
  }
# 71
  switch (pass_mode) {
  case 0: 
  {

  }
# 73
  if ((unsigned int )coef->whole_image[0] != (unsigned int )((void *)0)) {
    {
# 74
    (cinfo->err)->msg_code = 4;
# 74
    ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
    }
  }
  {
# 75
  coef->pub.decompress_data = & decompress_data;
  }
# 76
  break;
  case 2: 
  {

  }
# 79
  if ((unsigned int )coef->whole_image[0] == (unsigned int )((void *)0)) {
    {
# 80
    (cinfo->err)->msg_code = 4;
# 80
    ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
    }
  }
  {
# 81
  coef->pub.decompress_data = & decompress_read;
  }
# 82
  break;
  case 3: 
  {

  }
# 84
  if ((unsigned int )coef->whole_image[0] == (unsigned int )((void *)0)) {
    {
# 85
    (cinfo->err)->msg_code = 4;
# 85
    ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
    }
  }
  {
# 86
  coef->pub.decompress_data = & decompress_output;
  }
# 87
  break;
  default: 
  {
# 90
  (cinfo->err)->msg_code = 4;
# 90
  ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
  }
# 91
  break;
  }
# 91
  return;
}
}
# 105
static boolean decompress_data(j_decompress_ptr cinfo , JSAMPIMAGE output_buf ) 
{ jdcoefct_my_coef_ptr coef ;
  JDIMENSION MCU_col_num ;
  JDIMENSION last_MCU_col ;
  JDIMENSION last_MCU_row ;
  int blkn ;
  int ci ;
  int xindex ;
  int yindex ;
  int useful_width ;
  JSAMPARRAY output_ptr ;
  JDIMENSION start_col ;
  JDIMENSION output_col ;
  jpeg_component_info *compptr ;
  void (*inverse_DCT)(j_decompress_ptr cinfo , jpeg_component_info *compptr ,
                      JCOEFPTR coef_block , JSAMPARRAY output_buf ,
                      JDIMENSION output_col ) ;
  boolean tmp ;

  {
  {
# 108
  coef = (my_coef_controller_d *)cinfo->coef;
# 110
  last_MCU_col = cinfo->MCUs_per_row - 1U;
# 111
  last_MCU_row = cinfo->MCU_rows_in_scan - 1U;
# 120
  MCU_col_num = coef->MCU_col_num;
  }
# 120
  while (MCU_col_num <= last_MCU_col) {
    {
# 124
    jzero_far((void *)coef->MCU_buffer[0], (unsigned int )cinfo->blocks_in_MCU *
                                           sizeof(JBLOCK ));
# 126
    tmp = ((*((cinfo->entropy)->decode_mcu)))(cinfo, coef->MCU_buffer);
    }
# 126
    if (! tmp) {
      {
# 128
      coef->MCU_col_num = MCU_col_num;
      }
# 129
      return (0);
    }
    {
# 137
    blkn = 0;
# 138
    ci = 0;
    }
# 138
    while (ci < cinfo->comps_in_scan) {
      {
# 139
      compptr = cinfo->cur_comp_info[ci];
      }
# 141
      if (! compptr->component_needed) {
        {
# 142
        blkn += compptr->MCU_blocks;
        }
        goto __Cont;
      }
      {
# 145
      inverse_DCT = (cinfo->idct)->inverse_DCT[compptr->component_index];
      }
# 146
      if (MCU_col_num < last_MCU_col) {
        {
# 146
        useful_width = compptr->MCU_width;
        }
      } else {
        {
# 146
        useful_width = compptr->last_col_width;
        }
      }
      {
# 148
      output_ptr = (*(output_buf + ci));
# 149
      start_col = MCU_col_num * (unsigned int )compptr->MCU_sample_width;
# 150
      yindex = 0;
      }
# 150
      while (yindex < compptr->MCU_height) {
# 151
        if (coef->MCU_row_num < last_MCU_row) {
          goto _L;
        } else {
# 151
          if (yindex < compptr->last_row_height) {
            _L: 
            {
# 153
            output_col = start_col;
# 154
            xindex = 0;
            }
# 154
            while (xindex < useful_width) {
              {
# 155
              ((*inverse_DCT))(cinfo, compptr,
                               (JCOEF *)coef->MCU_buffer[blkn + xindex],
                               output_ptr, output_col);
# 158
              output_col += (unsigned int )compptr->DCT_scaled_size;
# 154
              xindex ++;
              }
            }
          }
        }
        {
# 161
        blkn += compptr->MCU_width;
# 162
        output_ptr += compptr->DCT_scaled_size;
# 150
        yindex ++;
        }
      }
      __Cont: 
      {
# 138
      ci ++;
      }
    }
    {
# 120
    MCU_col_num ++;
    }
  }
  {
# 168
  coef->MCU_col_num = 0U;
# 169
  coef->MCU_row_num ++;
  }
# 170
  return (1);
}
}
# 186
static boolean decompress_read(j_decompress_ptr cinfo , JSAMPIMAGE output_buf ) 
{ jdcoefct_my_coef_ptr coef ;
  JDIMENSION MCU_col_num ;
  int blkn ;
  int ci ;
  int xindex ;
  int yindex ;
  int yoffset ;
  int num_MCU_rows ;
  JDIMENSION total_width ;
  JDIMENSION remaining_rows ;
  JDIMENSION start_col ;
  JBLOCKARRAY buffer[4] ;
  JBLOCKROW buffer_ptr ;
  jpeg_component_info *compptr ;
  int tmp___0 ;
  JBLOCKROW tmp___1 ;
  boolean tmp___2 ;

  {
  {
# 192
  coef = (my_coef_controller_d *)cinfo->coef;
# 202
  ci = 0;
  }
# 202
  while (ci < cinfo->comps_in_scan) {
    {
# 203
    compptr = cinfo->cur_comp_info[ci];
# 204
    buffer[ci] = ((*((cinfo->mem)->access_virt_barray)))((struct jpeg_common_struct *)cinfo,
                                                         coef->whole_image[compptr->component_index],
                                                         coef->MCU_row_num *
                                                         (unsigned int )compptr->v_samp_factor,
                                                         1);
# 208
    total_width = (JDIMENSION )jround_up((long )compptr->width_in_blocks,
                                         (long )compptr->h_samp_factor);
# 210
    yindex = 0;
    }
# 210
    while (yindex < compptr->v_samp_factor) {
      {
# 211
      jzero_far((void *)(*(buffer[ci] + yindex)), total_width * sizeof(JBLOCK ));
# 210
      yindex ++;
      }
    }
    {
# 202
    ci ++;
    }
  }
# 220
  if (cinfo->comps_in_scan == 1) {
    {
# 221
    compptr = cinfo->cur_comp_info[0];
# 222
    num_MCU_rows = compptr->v_samp_factor;
# 224
    remaining_rows = cinfo->MCU_rows_in_scan -
                     coef->MCU_row_num * (unsigned int )compptr->v_samp_factor;
    }
# 226
    if (remaining_rows < (unsigned int )num_MCU_rows) {
      {
# 227
      num_MCU_rows = (int )remaining_rows;
      }
    }
  } else {
    {
# 229
    num_MCU_rows = 1;
    }
  }
  {
# 233
  yoffset = 0;
  }
# 233
  while (yoffset < num_MCU_rows) {
    {
# 234
    MCU_col_num = 0U;
    }
# 234
    while (MCU_col_num < cinfo->MCUs_per_row) {
      {
# 236
      blkn = 0;
# 237
      ci = 0;
      }
# 237
      while (ci < cinfo->comps_in_scan) {
        {
# 238
        compptr = cinfo->cur_comp_info[ci];
# 239
        start_col = MCU_col_num * (unsigned int )compptr->MCU_width;
# 240
        yindex = 0;
        }
# 240
        while (yindex < compptr->MCU_height) {
          {
# 241
          buffer_ptr = (*(buffer[ci] + (yindex + yoffset))) + start_col;
# 242
          xindex = 0;
          }
# 242
          while (xindex < compptr->MCU_width) {
            {
# 243
            tmp___0 = blkn;
# 243
            blkn ++;
# 243
            tmp___1 = buffer_ptr;
# 243
            buffer_ptr ++;
# 243
            coef->MCU_buffer[tmp___0] = tmp___1;
# 242
            xindex ++;
            }
          }
          {
# 240
          yindex ++;
          }
        }
        {
# 237
        ci ++;
        }
      }
      {
# 248
      tmp___2 = ((*((cinfo->entropy)->decode_mcu)))(cinfo, coef->MCU_buffer);
      }
# 248
      if (! tmp___2) {
        {
# 249
        (cinfo->err)->msg_code = 17;
# 249
        ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
        }
      }
      {
# 234
      MCU_col_num ++;
      }
    }
    {
# 233
    yoffset ++;
    }
  }
  {
# 254
  coef->MCU_row_num ++;
  }
# 255
  return (1);
}
}
# 267
static boolean decompress_output(j_decompress_ptr cinfo , JSAMPIMAGE output_buf ) 
{ jdcoefct_my_coef_ptr coef ;
  JDIMENSION last_MCU_row ;
  JDIMENSION block_num ;
  int ci ;
  int block_row ;
  int block_rows ;
  JBLOCKARRAY buffer ;
  JBLOCKROW buffer_ptr ;
  JSAMPARRAY output_ptr ;
  JDIMENSION output_col ;
  jpeg_component_info *compptr ;
  void (*inverse_DCT)(j_decompress_ptr cinfo , jpeg_component_info *compptr ,
                      JCOEFPTR coef_block , JSAMPARRAY output_buf ,
                      JDIMENSION output_col ) ;

  {
  {
# 270
  coef = (my_coef_controller_d *)cinfo->coef;
# 271
  last_MCU_row = cinfo->total_iMCU_rows - 1U;
# 281
  ci = 0;
# 281
  compptr = cinfo->comp_info;
  }
# 281
  while (ci < cinfo->num_components) {
# 284
    if (! compptr->component_needed) {
      goto __Cont;
    }
    {
# 287
    buffer = ((*((cinfo->mem)->access_virt_barray)))((struct jpeg_common_struct *)cinfo,
                                                     coef->whole_image[ci],
                                                     coef->MCU_row_num *
                                                     (unsigned int )compptr->v_samp_factor,
                                                     0);
    }
# 291
    if (coef->MCU_row_num < last_MCU_row) {
      {
# 292
      block_rows = compptr->v_samp_factor;
      }
    } else {
      {
# 294
      block_rows = (int )(compptr->height_in_blocks %
                          (unsigned int )compptr->v_samp_factor);
      }
# 295
      if (block_rows == 0) {
        {
# 295
        block_rows = compptr->v_samp_factor;
        }
      }
    }
    {
# 297
    inverse_DCT = (cinfo->idct)->inverse_DCT[ci];
# 298
    output_ptr = (*(output_buf + ci));
# 300
    block_row = 0;
    }
# 300
    while (block_row < block_rows) {
      {
# 301
      buffer_ptr = (*(buffer + block_row));
# 302
      output_col = 0U;
# 303
      block_num = 0U;
      }
# 303
      while (block_num < compptr->width_in_blocks) {
        {
# 304
        ((*inverse_DCT))(cinfo, compptr, (JCOEF *)buffer_ptr, output_ptr,
                         output_col);
# 306
        buffer_ptr ++;
# 307
        output_col += (unsigned int )compptr->DCT_scaled_size;
# 303
        block_num ++;
        }
      }
      {
# 309
      output_ptr += compptr->DCT_scaled_size;
# 300
      block_row ++;
      }
    }
    __Cont: 
    {
# 281
    ci ++;
# 281
    compptr ++;
    }
  }
  {
# 313
  coef->MCU_row_num ++;
  }
# 314
  return (1);
}
}
# 324
void jinit_d_coef_controller(j_decompress_ptr cinfo , boolean need_full_buffer ) 
{ jdcoefct_my_coef_ptr coef ;
  int ci ;
  int i ;
  jpeg_component_info *compptr ;
  JBLOCKROW buffer ;
  JDIMENSION tmp___0 ;

  {
  {
# 332
  coef = (jdcoefct_my_coef_ptr )alloc_small_wrapper((struct jpeg_common_struct *)cinfo,
                                                    1,
                                                    sizeof(my_coef_controller_d ));
# 335
  cinfo->coef = (struct jpeg_d_coef_controller */* __attribute__((__rtti__)) */)((struct jpeg_d_coef_controller *)coef);
# 336
  coef->pub.start_pass = & start_pass_coef___0;
  }
# 339
  if (need_full_buffer) {
    {
# 344
    ci = 0;
# 344
    compptr = cinfo->comp_info;
    }
# 344
    while (ci < cinfo->num_components) {
      {
# 346
      tmp___0 = (JDIMENSION )jround_up((long )compptr->width_in_blocks,
                                       (long )compptr->h_samp_factor);
# 346
      coef->whole_image[ci] = ((*((cinfo->mem)->request_virt_barray)))((struct jpeg_common_struct *)cinfo,
                                                                       1,
                                                                       tmp___0,
                                                                       compptr->height_in_blocks,
                                                                       (unsigned int )compptr->v_samp_factor);
# 344
      ci ++;
# 344
      compptr ++;
      }
    }
  } else {
    {
# 358
    buffer = (JBLOCKROW )alloc_large_wrapper((struct jpeg_common_struct *)cinfo,
                                             1, 10U * sizeof(JBLOCK ));
# 361
    i = 0;
    }
# 361
    while (i < 10) {
      {
# 362
      coef->MCU_buffer[i] = buffer + i;
# 361
      i ++;
      }
    }
    {
# 364
    coef->whole_image[0] = (struct jvirt_barray_control *)((void *)0);
    }
  }
# 366
  return;
}
}
# 47 "jdpostct.c"
static void post_process_1pass(j_decompress_ptr cinfo , JSAMPIMAGE input_buf ,
                               JDIMENSION *in_row_group_ctr ,
                               JDIMENSION in_row_groups_avail ,
                               JSAMPARRAY output_buf , JDIMENSION *out_row_ctr ,
                               JDIMENSION out_rows_avail ) ;
# 54
static void post_process_prepass(j_decompress_ptr cinfo , JSAMPIMAGE input_buf ,
                                 JDIMENSION *in_row_group_ctr ,
                                 JDIMENSION in_row_groups_avail ,
                                 JSAMPARRAY output_buf ,
                                 JDIMENSION *out_row_ctr ,
                                 JDIMENSION out_rows_avail ) ;
# 60
static void post_process_2pass(j_decompress_ptr cinfo , JSAMPIMAGE input_buf ,
                               JDIMENSION *in_row_group_ctr ,
                               JDIMENSION in_row_groups_avail ,
                               JSAMPARRAY output_buf , JDIMENSION *out_row_ctr ,
                               JDIMENSION out_rows_avail ) ;
# 73
static void start_pass_dpost(j_decompress_ptr cinfo , J_BUF_MODE pass_mode ) 
{ my_post_ptr post ;

  {
  {
# 76
  post = (my_post_controller *)cinfo->post;
  }
# 78
  switch (pass_mode) {
  case 0: 
  {

  }
# 80
  if (cinfo->quantize_colors) {
    {
# 82
    post->pub.post_process_data = & post_process_1pass;
    }
  } else {
    {
# 87
    post->pub.post_process_data = (cinfo->upsample)->upsample;
    }
  }
# 89
  break;
  case 4: 
  {

  }
# 93
  if ((unsigned int )post->whole_image == (unsigned int )((void *)0)) {
    {
# 94
    (cinfo->err)->msg_code = 4;
# 94
    ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
    }
  }
  {
# 95
  post->pub.post_process_data = & post_process_prepass;
  }
# 96
  break;
  case 3: 
  {

  }
# 99
  if ((unsigned int )post->whole_image == (unsigned int )((void *)0)) {
    {
# 100
    (cinfo->err)->msg_code = 4;
# 100
    ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
    }
  }
  {
# 101
  post->pub.post_process_data = & post_process_2pass;
  }
# 102
  break;
  default: 
  {
# 105
  (cinfo->err)->msg_code = 4;
# 105
  ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
  }
# 106
  break;
  }
  {
# 108
  post->next_row = 0U;
# 108
  post->starting_row = post->next_row;
  }
# 108
  return;
}
}
# 117
static void post_process_1pass(j_decompress_ptr cinfo , JSAMPIMAGE input_buf ,
                               JDIMENSION *in_row_group_ctr ,
                               JDIMENSION in_row_groups_avail ,
                               JSAMPARRAY output_buf , JDIMENSION *out_row_ctr ,
                               JDIMENSION out_rows_avail ) 
{ my_post_ptr post ;
  JDIMENSION num_rows ;
  JDIMENSION max_rows ;

  {
  {
# 124
  post = (my_post_controller *)cinfo->post;
# 129
  max_rows = out_rows_avail - (*out_row_ctr);
  }
# 130
  if (max_rows > post->strip_height) {
    {
# 131
    max_rows = post->strip_height;
    }
  }
  {
# 132
  num_rows = 0U;
# 133
  ((*((cinfo->upsample)->upsample)))(cinfo, input_buf, in_row_group_ctr,
                                     in_row_groups_avail, post->buffer,
                                     & num_rows, max_rows);
# 137
  ((*((cinfo->cquantize)->color_quantize)))(cinfo, post->buffer,
                                            output_buf + (*out_row_ctr),
                                            (int )num_rows);
# 139
  (*out_row_ctr) += num_rows;
  }
# 140
  return;
}
}
# 149
static void post_process_prepass(j_decompress_ptr cinfo , JSAMPIMAGE input_buf ,
                                 JDIMENSION *in_row_group_ctr ,
                                 JDIMENSION in_row_groups_avail ,
                                 JSAMPARRAY output_buf ,
                                 JDIMENSION *out_row_ctr ,
                                 JDIMENSION out_rows_avail ) 
{ my_post_ptr post ;
  JDIMENSION old_next_row ;
  JDIMENSION num_rows ;

  {
  {
# 156
  post = (my_post_controller *)cinfo->post;
  }
# 160
  if (post->next_row == 0U) {
    {
# 161
    post->buffer = ((*((cinfo->mem)->access_virt_sarray)))((struct jpeg_common_struct *)cinfo,
                                                           post->whole_image,
                                                           post->starting_row, 1);
    }
  }
  {
# 166
  old_next_row = post->next_row;
# 167
  ((*((cinfo->upsample)->upsample)))(cinfo, input_buf, in_row_group_ctr,
                                     in_row_groups_avail, post->buffer,
                                     & post->next_row, post->strip_height);
  }
# 173
  if (post->next_row > old_next_row) {
    {
# 174
    num_rows = post->next_row - old_next_row;
# 175
    ((*((cinfo->cquantize)->color_quantize)))(cinfo,
                                              post->buffer + old_next_row,
                                              (JSAMPROW *)((void *)0),
                                              (int )num_rows);
# 177
    (*out_row_ctr) += num_rows;
    }
  }
# 181
  if (post->next_row >= post->strip_height) {
    {
# 182
    post->starting_row += post->strip_height;
# 183
    post->next_row = 0U;
    }
  }
# 185
  return;
}
}
# 192
static void post_process_2pass(j_decompress_ptr cinfo , JSAMPIMAGE input_buf ,
                               JDIMENSION *in_row_group_ctr ,
                               JDIMENSION in_row_groups_avail ,
                               JSAMPARRAY output_buf , JDIMENSION *out_row_ctr ,
                               JDIMENSION out_rows_avail ) 
{ my_post_ptr post ;
  JDIMENSION num_rows ;
  JDIMENSION max_rows ;

  {
  {
# 199
  post = (my_post_controller *)cinfo->post;
  }
# 203
  if (post->next_row == 0U) {
    {
# 204
    post->buffer = ((*((cinfo->mem)->access_virt_sarray)))((struct jpeg_common_struct *)cinfo,
                                                           post->whole_image,
                                                           post->starting_row, 0);
    }
  }
  {
# 209
  num_rows = post->strip_height - post->next_row;
# 210
  max_rows = out_rows_avail - (*out_row_ctr);
  }
# 211
  if (num_rows > max_rows) {
    {
# 212
    num_rows = max_rows;
    }
  }
  {
# 214
  max_rows = cinfo->output_height - post->starting_row;
  }
# 215
  if (num_rows > max_rows) {
    {
# 216
    num_rows = max_rows;
    }
  }
  {
# 219
  ((*((cinfo->cquantize)->color_quantize)))(cinfo,
                                            post->buffer + post->next_row,
                                            output_buf + (*out_row_ctr),
                                            (int )num_rows);
# 222
  (*out_row_ctr) += num_rows;
# 225
  post->next_row += num_rows;
  }
# 226
  if (post->next_row >= post->strip_height) {
    {
# 227
    post->starting_row += post->strip_height;
# 228
    post->next_row = 0U;
    }
  }
# 230
  return;
}
}
# 239
void jinit_d_post_controller(j_decompress_ptr cinfo , boolean need_full_buffer ) 
{ my_post_ptr post ;

  {
  {
# 244
  post = (my_post_ptr )alloc_small_wrapper((struct jpeg_common_struct *)cinfo,
                                           1, sizeof(my_post_controller ));
# 247
  cinfo->post = (struct jpeg_d_post_controller */* __attribute__((__rtti__)) */)((struct jpeg_d_post_controller *)post);
# 248
  post->pub.start_pass = & start_pass_dpost;
# 249
  post->whole_image = (struct jvirt_sarray_control *)((void *)0);
  }
# 252
  if (cinfo->quantize_colors) {
    {
# 257
    post->strip_height = (unsigned int )cinfo->max_v_samp_factor;
    }
# 258
    if (need_full_buffer) {
      {
# 261
      post->whole_image = ((*((cinfo->mem)->request_virt_sarray)))((struct jpeg_common_struct *)cinfo,
                                                                   1,
                                                                   cinfo->output_width *
                                                                   (unsigned int )cinfo->out_color_components,
                                                                   cinfo->output_height,
                                                                   post->strip_height);
      }
    } else {
      {
# 270
      post->buffer = ((*((cinfo->mem)->alloc_sarray)))((struct jpeg_common_struct *)cinfo,
                                                       1,
                                                       cinfo->output_width *
                                                       (unsigned int )cinfo->out_color_components,
                                                       post->strip_height);
      }
    }
  }
# 276
  return;
}
}
# 39 "jddctmgr.c"
static int const   ZIG[64]   = 
# 39
  {0, 1, 5, 6, 14, 15, 27, 28, 2, 4, 7, 13, 16, 26, 29, 42, 3, 8, 12, 17, 25,
   30, 41, 43, 9, 11, 18, 24, 31, 40, 44, 53, 10, 19, 23, 32, 39, 45, 52, 54,
   20, 22, 33, 38, 46, 51, 55, 60, 21, 34, 37, 47, 50, 56, 59, 61, 35, 36, 48,
   49, 57, 58, 62, 63};
# 125
static void start_input_pass(j_decompress_ptr cinfo ) ;
# 125
static INT16 const   aanscales___0[64]   = 
# 125
  {(INT16 const   )((short )16384), (INT16 const   )((short )22725),
   (INT16 const   )((short )21407), (INT16 const   )((short )19266),
   (INT16 const   )((short )16384), (INT16 const   )((short )12873),
   (INT16 const   )((short )8867), (INT16 const   )((short )4520),
   (INT16 const   )((short )22725), (INT16 const   )((short )31521),
   (INT16 const   )((short )29692), (INT16 const   )((short )26722),
   (INT16 const   )((short )22725), (INT16 const   )((short )17855),
   (INT16 const   )((short )12299), (INT16 const   )((short )6270),
   (INT16 const   )((short )21407), (INT16 const   )((short )29692),
   (INT16 const   )((short )27969), (INT16 const   )((short )25172),
   (INT16 const   )((short )21407), (INT16 const   )((short )16819),
   (INT16 const   )((short )11585), (INT16 const   )((short )5906),
   (INT16 const   )((short )19266), (INT16 const   )((short )26722),
   (INT16 const   )((short )25172), (INT16 const   )((short )22654),
   (INT16 const   )((short )19266), (INT16 const   )((short )15137),
   (INT16 const   )((short )10426), (INT16 const   )((short )5315),
   (INT16 const   )((short )16384), (INT16 const   )((short )22725),
   (INT16 const   )((short )21407), (INT16 const   )((short )19266),
   (INT16 const   )((short )16384), (INT16 const   )((short )12873),
   (INT16 const   )((short )8867), (INT16 const   )((short )4520),
   (INT16 const   )((short )12873), (INT16 const   )((short )17855),
   (INT16 const   )((short )16819), (INT16 const   )((short )15137),
   (INT16 const   )((short )12873), (INT16 const   )((short )10114),
   (INT16 const   )((short )6967), (INT16 const   )((short )3552),
   (INT16 const   )((short )8867), (INT16 const   )((short )12299),
   (INT16 const   )((short )11585), (INT16 const   )((short )10426),
   (INT16 const   )((short )8867), (INT16 const   )((short )6967),
   (INT16 const   )((short )4799), (INT16 const   )((short )2446),
   (INT16 const   )((short )4520), (INT16 const   )((short )6270),
   (INT16 const   )((short )5906), (INT16 const   )((short )5315),
   (INT16 const   )((short )4520), (INT16 const   )((short )3552),
   (INT16 const   )((short )2446), (INT16 const   )((short )1247)};
# 162
static double const   aanscalefactor___0[8]   = 
# 162
  {(double const   )1.0, (double const   )1.387039845,
   (double const   )1.306562965, (double const   )1.175875602,
   (double const   )1.0, (double const   )0.785694958,
   (double const   )0.541196100, (double const   )0.275899379};
# 76
static void start_input_pass(j_decompress_ptr cinfo ) 
{ my_idct_ptr idct ;
  int ci ;
  int qtblno ;
  int i ;
  jpeg_component_info *compptr ;
  JQUANT_TBL *qtbl ;
  ISLOW_MULT_TYPE *ismtbl ;
  IFAST_MULT_TYPE *ifmtbl ;
  FLOAT_MULT_TYPE *fmtbl ;
  int row ;
  int col ;

  {
  {
# 79
  idct = (my_idct_controller *)cinfo->idct;
# 84
  ci = 0;
  }
# 84
  while (ci < cinfo->comps_in_scan) {
    {
# 85
    compptr = cinfo->cur_comp_info[ci];
# 86
    qtblno = compptr->quant_tbl_no;
    }
# 88
    if (qtblno < 0) {
      {
# 90
      (cinfo->err)->msg_code = 44;
# 90
      (cinfo->err)->msg_parm.i[0] = qtblno;
# 90
      ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
      }
    } else {
# 88
      if (qtblno >= 4) {
        {
# 90
        (cinfo->err)->msg_code = 44;
# 90
        (cinfo->err)->msg_parm.i[0] = qtblno;
# 90
        ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
        }
      } else {
# 88
        if ((unsigned int )cinfo->quant_tbl_ptrs[qtblno] ==
            (unsigned int )((void *)0)) {
          {
# 90
          (cinfo->err)->msg_code = 44;
# 90
          (cinfo->err)->msg_parm.i[0] = qtblno;
# 90
          ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
          }
        }
      }
    }
    {
# 91
    qtbl = cinfo->quant_tbl_ptrs[qtblno];
    }
# 93
    if ((unsigned int )compptr->dct_table != (unsigned int )((void *)0)) {
      goto __Cont;
    }
# 95
    switch (idct->real_method[compptr->component_index]) {
    case 0: 
    {
# 103
    compptr->dct_table = alloc_small_wrapper((struct jpeg_common_struct *)cinfo,
                                             1, 64U * sizeof(ISLOW_MULT_TYPE ));
# 106
    ismtbl = (ISLOW_MULT_TYPE *)compptr->dct_table;
# 107
    i = 0;
    }
# 107
    while (i < 64) {
      {
# 108
      (*(ismtbl + i)) = (int )qtbl->quantval[ZIG[i]];
# 107
      i ++;
      }
    }
# 111
    break;
    case 1: 
    {
# 138
    compptr->dct_table = alloc_small_wrapper((struct jpeg_common_struct *)cinfo,
                                             1, 64U * sizeof(IFAST_MULT_TYPE ));
# 141
    ifmtbl = (IFAST_MULT_TYPE *)compptr->dct_table;
# 142
    i = 0;
    }
# 142
    while (i < 64) {
      {
# 143
      (*(ifmtbl + i)) = (int )(((long )qtbl->quantval[ZIG[i]] *
                                (long )aanscales___0[i] + 2048L) >> 12);
# 142
      i ++;
      }
    }
# 149
    break;
    case 2: 
    {
# 167
    compptr->dct_table = alloc_small_wrapper((struct jpeg_common_struct *)cinfo,
                                             1, 64U * sizeof(FLOAT_MULT_TYPE ));
# 170
    fmtbl = (FLOAT_MULT_TYPE *)compptr->dct_table;
# 171
    i = 0;
# 172
    row = 0;
    }
# 172
    while (row < 8) {
      {
# 173
      col = 0;
      }
# 173
      while (col < 8) {
        {
# 174
        (*(fmtbl + i)) = (float )(((double )qtbl->quantval[ZIG[i]] *
                                   (double )aanscalefactor___0[row]) *
                                  (double )aanscalefactor___0[col]);
# 177
        i ++;
# 173
        col ++;
        }
      }
      {
# 172
      row ++;
      }
    }
# 181
    break;
    default: 
    {
# 184
    (cinfo->err)->msg_code = 40;
# 184
    ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
    }
# 185
    break;
    }
    __Cont: 
    {
# 84
    ci ++;
    }
  }
# 188
  return;
}
}
# 201
static void start_output_pass(j_decompress_ptr cinfo ) 
{ jpeg_component_info *compptr ;
  int ci ;

  {
  {
# 207
  ci = 0;
# 207
  compptr = cinfo->comp_info;
  }
# 207
  while (ci < cinfo->num_components) {
# 209
    if (! compptr->component_needed) {
      goto __Cont;
    }
# 211
    if ((unsigned int )compptr->dct_table == (unsigned int )((void *)0)) {
      {
# 212
      (cinfo->err)->msg_code = 44;
# 212
      (cinfo->err)->msg_parm.i[0] = compptr->quant_tbl_no;
# 212
      ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
      }
    }
    __Cont: 
    {
# 207
    ci ++;
# 207
    compptr ++;
    }
  }
# 214
  return;
}
}
# 221
void jinit_inverse_dct(j_decompress_ptr cinfo ) 
{ my_idct_ptr idct ;
  int ci ;
  jpeg_component_info *compptr ;

  {
  {
# 228
  idct = (my_idct_ptr )alloc_small_wrapper((struct jpeg_common_struct *)cinfo,
                                           1, sizeof(my_idct_controller ));
# 231
  cinfo->idct = (struct jpeg_inverse_dct */* __attribute__((__rtti__)) */)((struct jpeg_inverse_dct *)idct);
# 232
  idct->pub.start_input_pass = & start_input_pass;
# 233
  idct->pub.start_output_pass = & start_output_pass;
# 235
  ci = 0;
# 235
  compptr = cinfo->comp_info;
  }
# 235
  while (ci < cinfo->num_components) {
    {
# 237
    compptr->dct_table = (void *)0;
    }
# 238
    switch (compptr->DCT_scaled_size) {
    case 1: 
    {
# 241
    idct->pub.inverse_DCT[ci] = & jpeg_idct_1x1;
# 242
    idct->real_method[ci] = 0;
    }
# 243
    break;
    case 2: 
    {
# 245
    idct->pub.inverse_DCT[ci] = & jpeg_idct_2x2;
# 246
    idct->real_method[ci] = 0;
    }
# 247
    break;
    case 4: 
    {
# 249
    idct->pub.inverse_DCT[ci] = & jpeg_idct_4x4;
# 250
    idct->real_method[ci] = 0;
    }
# 251
    break;
    case 8: 
    {

    }
# 254
    switch (cinfo->dct_method) {
    case 0: 
    {
# 257
    idct->pub.inverse_DCT[ci] = & jpeg_idct_islow;
# 258
    idct->real_method[ci] = 0;
    }
# 259
    break;
    case 1: 
    {
# 263
    idct->pub.inverse_DCT[ci] = & jpeg_idct_ifast;
# 264
    idct->real_method[ci] = 1;
    }
# 265
    break;
    case 2: 
    {
# 269
    idct->pub.inverse_DCT[ci] = & jpeg_idct_float;
# 270
    idct->real_method[ci] = 2;
    }
# 271
    break;
    default: 
    {
# 274
    (cinfo->err)->msg_code = 40;
# 274
    ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
    }
# 275
    break;
    }
# 277
    break;
    default: 
    {
# 279
    (cinfo->err)->msg_code = 6;
# 279
    (cinfo->err)->msg_parm.i[0] = compptr->DCT_scaled_size;
# 279
    ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
    }
# 280
    break;
    }
    {
# 235
    ci ++;
# 235
    compptr ++;
    }
  }
# 283
  return;
}
}
# 162 "jidctfst.c"
void jpeg_idct_ifast(j_decompress_ptr cinfo , jpeg_component_info *compptr ,
                     JCOEFPTR coef_block , JSAMPARRAY output_buf ,
                     JDIMENSION output_col ) 
{ DCTELEM tmp0 ;
  DCTELEM tmp1 ;
  DCTELEM tmp2 ;
  DCTELEM tmp3 ;
  DCTELEM tmp4 ;
  DCTELEM tmp5 ;
  DCTELEM tmp6 ;
  DCTELEM tmp7 ;
  DCTELEM tmp10 ;
  DCTELEM tmp11 ;
  DCTELEM tmp12 ;
  DCTELEM tmp13 ;
  DCTELEM z5 ;
  DCTELEM z10 ;
  DCTELEM z11 ;
  DCTELEM z12 ;
  DCTELEM z13 ;
  JCOEFPTR inptr ;
  IFAST_MULT_TYPE *quantptr ;
  int *wsptr ;
  JSAMPROW outptr ;
  JSAMPLE *range_limit ;
  int ctr ;
  int workspace[64] ;
  int dcval ;
  JSAMPLE dcval___0 ;

  {
  {
# 174
  range_limit = cinfo->sample_range_limit + 128;
# 182
  inptr = coef_block;
# 183
  quantptr = (IFAST_MULT_TYPE *)compptr->dct_table;
# 184
  wsptr = workspace;
# 185
  ctr = 8;
  }
# 185
  while (ctr > 0) {
# 195
    if ((((((((int )(*(inptr + 8)) | (int )(*(inptr + 16))) |
             (int )(*(inptr + 24))) | (int )(*(inptr + 32))) |
           (int )(*(inptr + 40))) | (int )(*(inptr + 48))) |
         (int )(*(inptr + 56))) == 0) {
      {
# 199
      dcval = (int )(*(inptr + 0)) * (*(quantptr + 0));
# 201
      (*(wsptr + 0)) = dcval;
# 202
      (*(wsptr + 8)) = dcval;
# 203
      (*(wsptr + 16)) = dcval;
# 204
      (*(wsptr + 24)) = dcval;
# 205
      (*(wsptr + 32)) = dcval;
# 206
      (*(wsptr + 40)) = dcval;
# 207
      (*(wsptr + 48)) = dcval;
# 208
      (*(wsptr + 56)) = dcval;
# 210
      inptr ++;
# 211
      quantptr ++;
# 212
      wsptr ++;
      }
      goto __Cont;
    }
    {
# 218
    tmp0 = (int )(*(inptr + 0)) * (*(quantptr + 0));
# 219
    tmp1 = (int )(*(inptr + 16)) * (*(quantptr + 16));
# 220
    tmp2 = (int )(*(inptr + 32)) * (*(quantptr + 32));
# 221
    tmp3 = (int )(*(inptr + 48)) * (*(quantptr + 48));
# 223
    tmp10 = tmp0 + tmp2;
# 224
    tmp11 = tmp0 - tmp2;
# 226
    tmp13 = tmp1 + tmp3;
# 227
    tmp12 = (int )((long )(tmp1 - tmp3) * 362L >> 8) - tmp13;
# 229
    tmp0 = tmp10 + tmp13;
# 230
    tmp3 = tmp10 - tmp13;
# 231
    tmp1 = tmp11 + tmp12;
# 232
    tmp2 = tmp11 - tmp12;
# 236
    tmp4 = (int )(*(inptr + 8)) * (*(quantptr + 8));
# 237
    tmp5 = (int )(*(inptr + 24)) * (*(quantptr + 24));
# 238
    tmp6 = (int )(*(inptr + 40)) * (*(quantptr + 40));
# 239
    tmp7 = (int )(*(inptr + 56)) * (*(quantptr + 56));
# 241
    z13 = tmp6 + tmp5;
# 242
    z10 = tmp6 - tmp5;
# 243
    z11 = tmp4 + tmp7;
# 244
    z12 = tmp4 - tmp7;
# 246
    tmp7 = z11 + z13;
# 247
    tmp11 = (int )((long )(z11 - z13) * 362L >> 8);
# 249
    z5 = (int )((long )(z10 + z12) * 473L >> 8);
# 250
    tmp10 = (int )((long )z12 * 277L >> 8) - z5;
# 251
    tmp12 = (int )((long )z10 * -669L >> 8) + z5;
# 253
    tmp6 = tmp12 - tmp7;
# 254
    tmp5 = tmp11 - tmp6;
# 255
    tmp4 = tmp10 + tmp5;
# 257
    (*(wsptr + 0)) = tmp0 + tmp7;
# 258
    (*(wsptr + 56)) = tmp0 - tmp7;
# 259
    (*(wsptr + 8)) = tmp1 + tmp6;
# 260
    (*(wsptr + 48)) = tmp1 - tmp6;
# 261
    (*(wsptr + 16)) = tmp2 + tmp5;
# 262
    (*(wsptr + 40)) = tmp2 - tmp5;
# 263
    (*(wsptr + 32)) = tmp3 + tmp4;
# 264
    (*(wsptr + 24)) = tmp3 - tmp4;
# 266
    inptr ++;
# 267
    quantptr ++;
# 268
    wsptr ++;
    }
    __Cont: 
    {
# 185
    ctr --;
    }
  }
  {
# 275
  wsptr = workspace;
# 276
  ctr = 0;
  }
# 276
  while (ctr < 8) {
    {
# 277
    outptr = (*(output_buf + ctr)) + output_col;
    }
# 287
    if ((((((((*(wsptr + 1)) | (*(wsptr + 2))) | (*(wsptr + 3))) |
            (*(wsptr + 4))) | (*(wsptr + 5))) | (*(wsptr + 6))) | (*(wsptr + 7))) ==
        0) {
      {
# 290
      dcval___0 = (*(range_limit + (((*(wsptr + 0)) >> 5) & 1023)));
# 293
      (*(outptr + 0)) = dcval___0;
# 294
      (*(outptr + 1)) = dcval___0;
# 295
      (*(outptr + 2)) = dcval___0;
# 296
      (*(outptr + 3)) = dcval___0;
# 297
      (*(outptr + 4)) = dcval___0;
# 298
      (*(outptr + 5)) = dcval___0;
# 299
      (*(outptr + 6)) = dcval___0;
# 300
      (*(outptr + 7)) = dcval___0;
# 302
      wsptr += 8;
      }
      goto __Cont___0;
    }
    {
# 309
    tmp10 = (*(wsptr + 0)) + (*(wsptr + 4));
# 310
    tmp11 = (*(wsptr + 0)) - (*(wsptr + 4));
# 312
    tmp13 = (*(wsptr + 2)) + (*(wsptr + 6));
# 313
    tmp12 = (int )((long )((*(wsptr + 2)) - (*(wsptr + 6))) * 362L >> 8) - tmp13;
# 316
    tmp0 = tmp10 + tmp13;
# 317
    tmp3 = tmp10 - tmp13;
# 318
    tmp1 = tmp11 + tmp12;
# 319
    tmp2 = tmp11 - tmp12;
# 323
    z13 = (*(wsptr + 5)) + (*(wsptr + 3));
# 324
    z10 = (*(wsptr + 5)) - (*(wsptr + 3));
# 325
    z11 = (*(wsptr + 1)) + (*(wsptr + 7));
# 326
    z12 = (*(wsptr + 1)) - (*(wsptr + 7));
# 328
    tmp7 = z11 + z13;
# 329
    tmp11 = (int )((long )(z11 - z13) * 362L >> 8);
# 331
    z5 = (int )((long )(z10 + z12) * 473L >> 8);
# 332
    tmp10 = (int )((long )z12 * 277L >> 8) - z5;
# 333
    tmp12 = (int )((long )z10 * -669L >> 8) + z5;
# 335
    tmp6 = tmp12 - tmp7;
# 336
    tmp5 = tmp11 - tmp6;
# 337
    tmp4 = tmp10 + tmp5;
# 341
    (*(outptr + 0)) = (*(range_limit + (((tmp0 + tmp7) >> 5) & 1023)));
# 343
    (*(outptr + 7)) = (*(range_limit + (((tmp0 - tmp7) >> 5) & 1023)));
# 345
    (*(outptr + 1)) = (*(range_limit + (((tmp1 + tmp6) >> 5) & 1023)));
# 347
    (*(outptr + 6)) = (*(range_limit + (((tmp1 - tmp6) >> 5) & 1023)));
# 349
    (*(outptr + 2)) = (*(range_limit + (((tmp2 + tmp5) >> 5) & 1023)));
# 351
    (*(outptr + 5)) = (*(range_limit + (((tmp2 - tmp5) >> 5) & 1023)));
# 353
    (*(outptr + 4)) = (*(range_limit + (((tmp3 + tmp4) >> 5) & 1023)));
# 355
    (*(outptr + 3)) = (*(range_limit + (((tmp3 - tmp4) >> 5) & 1023)));
# 358
    wsptr += 8;
    }
    __Cont___0: 
    {
# 276
    ctr ++;
    }
  }
# 360
  return;
}
}
# 67 "jidctflt.c"
void jpeg_idct_float(j_decompress_ptr cinfo , jpeg_component_info *compptr ,
                     JCOEFPTR coef_block , JSAMPARRAY output_buf ,
                     JDIMENSION output_col ) 
{ float tmp0 ;
  float tmp1 ;
  float tmp2 ;
  float tmp3 ;
  float tmp4 ;
  float tmp5 ;
  float tmp6 ;
  float tmp7 ;
  float tmp10 ;
  float tmp11 ;
  float tmp12 ;
  float tmp13 ;
  float z5 ;
  float z10 ;
  float z11 ;
  float z12 ;
  float z13 ;
  JCOEFPTR inptr ;
  FLOAT_MULT_TYPE *quantptr ;
  float *wsptr ;
  JSAMPROW outptr ;
  JSAMPLE *range_limit ;
  int ctr ;
  float workspace[64] ;
  float dcval ;

  {
  {
# 79
  range_limit = cinfo->sample_range_limit + 128;
# 86
  inptr = coef_block;
# 87
  quantptr = (FLOAT_MULT_TYPE *)compptr->dct_table;
# 88
  wsptr = workspace;
# 89
  ctr = 8;
  }
# 89
  while (ctr > 0) {
# 99
    if ((((((((int )(*(inptr + 8)) | (int )(*(inptr + 16))) |
             (int )(*(inptr + 24))) | (int )(*(inptr + 32))) |
           (int )(*(inptr + 40))) | (int )(*(inptr + 48))) |
         (int )(*(inptr + 56))) == 0) {
      {
# 103
      dcval = (float )(*(inptr + 0)) * (*(quantptr + 0));
# 105
      (*(wsptr + 0)) = dcval;
# 106
      (*(wsptr + 8)) = dcval;
# 107
      (*(wsptr + 16)) = dcval;
# 108
      (*(wsptr + 24)) = dcval;
# 109
      (*(wsptr + 32)) = dcval;
# 110
      (*(wsptr + 40)) = dcval;
# 111
      (*(wsptr + 48)) = dcval;
# 112
      (*(wsptr + 56)) = dcval;
# 114
      inptr ++;
# 115
      quantptr ++;
# 116
      wsptr ++;
      }
      goto __Cont;
    }
    {
# 122
    tmp0 = (float )(*(inptr + 0)) * (*(quantptr + 0));
# 123
    tmp1 = (float )(*(inptr + 16)) * (*(quantptr + 16));
# 124
    tmp2 = (float )(*(inptr + 32)) * (*(quantptr + 32));
# 125
    tmp3 = (float )(*(inptr + 48)) * (*(quantptr + 48));
# 127
    tmp10 = tmp0 + tmp2;
# 128
    tmp11 = tmp0 - tmp2;
# 130
    tmp13 = tmp1 + tmp3;
# 131
    tmp12 = (tmp1 - tmp3) * (float )1.414213562 - tmp13;
# 133
    tmp0 = tmp10 + tmp13;
# 134
    tmp3 = tmp10 - tmp13;
# 135
    tmp1 = tmp11 + tmp12;
# 136
    tmp2 = tmp11 - tmp12;
# 140
    tmp4 = (float )(*(inptr + 8)) * (*(quantptr + 8));
# 141
    tmp5 = (float )(*(inptr + 24)) * (*(quantptr + 24));
# 142
    tmp6 = (float )(*(inptr + 40)) * (*(quantptr + 40));
# 143
    tmp7 = (float )(*(inptr + 56)) * (*(quantptr + 56));
# 145
    z13 = tmp6 + tmp5;
# 146
    z10 = tmp6 - tmp5;
# 147
    z11 = tmp4 + tmp7;
# 148
    z12 = tmp4 - tmp7;
# 150
    tmp7 = z11 + z13;
# 151
    tmp11 = (z11 - z13) * (float )1.414213562;
# 153
    z5 = (z10 + z12) * (float )1.847759065;
# 154
    tmp10 = (float )1.082392200 * z12 - z5;
# 155
    tmp12 = (float )(- 2.613125930) * z10 + z5;
# 157
    tmp6 = tmp12 - tmp7;
# 158
    tmp5 = tmp11 - tmp6;
# 159
    tmp4 = tmp10 + tmp5;
# 161
    (*(wsptr + 0)) = tmp0 + tmp7;
# 162
    (*(wsptr + 56)) = tmp0 - tmp7;
# 163
    (*(wsptr + 8)) = tmp1 + tmp6;
# 164
    (*(wsptr + 48)) = tmp1 - tmp6;
# 165
    (*(wsptr + 16)) = tmp2 + tmp5;
# 166
    (*(wsptr + 40)) = tmp2 - tmp5;
# 167
    (*(wsptr + 32)) = tmp3 + tmp4;
# 168
    (*(wsptr + 24)) = tmp3 - tmp4;
# 170
    inptr ++;
# 171
    quantptr ++;
# 172
    wsptr ++;
    }
    __Cont: 
    {
# 89
    ctr --;
    }
  }
  {
# 178
  wsptr = workspace;
# 179
  ctr = 0;
  }
# 179
  while (ctr < 8) {
    {
# 180
    outptr = (*(output_buf + ctr)) + output_col;
# 189
    tmp10 = (*(wsptr + 0)) + (*(wsptr + 4));
# 190
    tmp11 = (*(wsptr + 0)) - (*(wsptr + 4));
# 192
    tmp13 = (*(wsptr + 2)) + (*(wsptr + 6));
# 193
    tmp12 = ((*(wsptr + 2)) - (*(wsptr + 6))) * (float )1.414213562 - tmp13;
# 195
    tmp0 = tmp10 + tmp13;
# 196
    tmp3 = tmp10 - tmp13;
# 197
    tmp1 = tmp11 + tmp12;
# 198
    tmp2 = tmp11 - tmp12;
# 202
    z13 = (*(wsptr + 5)) + (*(wsptr + 3));
# 203
    z10 = (*(wsptr + 5)) - (*(wsptr + 3));
# 204
    z11 = (*(wsptr + 1)) + (*(wsptr + 7));
# 205
    z12 = (*(wsptr + 1)) - (*(wsptr + 7));
# 207
    tmp7 = z11 + z13;
# 208
    tmp11 = (z11 - z13) * (float )1.414213562;
# 210
    z5 = (z10 + z12) * (float )1.847759065;
# 211
    tmp10 = (float )1.082392200 * z12 - z5;
# 212
    tmp12 = (float )(- 2.613125930) * z10 + z5;
# 214
    tmp6 = tmp12 - tmp7;
# 215
    tmp5 = tmp11 - tmp6;
# 216
    tmp4 = tmp10 + tmp5;
# 220
    (*(outptr + 0)) = (*(range_limit +
                         ((int )(((long )(tmp0 + tmp7) + 4L) >> 3) & 1023)));
# 222
    (*(outptr + 7)) = (*(range_limit +
                         ((int )(((long )(tmp0 - tmp7) + 4L) >> 3) & 1023)));
# 224
    (*(outptr + 1)) = (*(range_limit +
                         ((int )(((long )(tmp1 + tmp6) + 4L) >> 3) & 1023)));
# 226
    (*(outptr + 6)) = (*(range_limit +
                         ((int )(((long )(tmp1 - tmp6) + 4L) >> 3) & 1023)));
# 228
    (*(outptr + 2)) = (*(range_limit +
                         ((int )(((long )(tmp2 + tmp5) + 4L) >> 3) & 1023)));
# 230
    (*(outptr + 5)) = (*(range_limit +
                         ((int )(((long )(tmp2 - tmp5) + 4L) >> 3) & 1023)));
# 232
    (*(outptr + 4)) = (*(range_limit +
                         ((int )(((long )(tmp3 + tmp4) + 4L) >> 3) & 1023)));
# 234
    (*(outptr + 3)) = (*(range_limit +
                         ((int )(((long )(tmp3 - tmp4) + 4L) >> 3) & 1023)));
# 237
    wsptr += 8;
# 179
    ctr ++;
    }
  }
# 239
  return;
}
}
# 147 "jidctint.c"
void jpeg_idct_islow(j_decompress_ptr cinfo , jpeg_component_info *compptr ,
                     JCOEFPTR coef_block , JSAMPARRAY output_buf ,
                     JDIMENSION output_col ) 
{ INT32 tmp0 ;
  INT32 tmp1 ;
  INT32 tmp2 ;
  INT32 tmp3 ;
  INT32 tmp10 ;
  INT32 tmp11 ;
  INT32 tmp12 ;
  INT32 tmp13 ;
  INT32 z1 ;
  INT32 z2 ;
  INT32 z3 ;
  INT32 z4 ;
  INT32 z5 ;
  JCOEFPTR inptr ;
  ISLOW_MULT_TYPE *quantptr ;
  int *wsptr ;
  JSAMPROW outptr ;
  JSAMPLE *range_limit ;
  int ctr ;
  int workspace[64] ;
  int dcval ;
  JSAMPLE dcval___0 ;

  {
  {
# 159
  range_limit = cinfo->sample_range_limit + 128;
# 168
  inptr = coef_block;
# 169
  quantptr = (ISLOW_MULT_TYPE *)compptr->dct_table;
# 170
  wsptr = workspace;
# 171
  ctr = 8;
  }
# 171
  while (ctr > 0) {
# 181
    if ((((((((int )(*(inptr + 8)) | (int )(*(inptr + 16))) |
             (int )(*(inptr + 24))) | (int )(*(inptr + 32))) |
           (int )(*(inptr + 40))) | (int )(*(inptr + 48))) |
         (int )(*(inptr + 56))) == 0) {
      {
# 185
      dcval = (int )(*(inptr + 0)) * (*(quantptr + 0)) << 2;
# 187
      (*(wsptr + 0)) = dcval;
# 188
      (*(wsptr + 8)) = dcval;
# 189
      (*(wsptr + 16)) = dcval;
# 190
      (*(wsptr + 24)) = dcval;
# 191
      (*(wsptr + 32)) = dcval;
# 192
      (*(wsptr + 40)) = dcval;
# 193
      (*(wsptr + 48)) = dcval;
# 194
      (*(wsptr + 56)) = dcval;
# 196
      inptr ++;
# 197
      quantptr ++;
# 198
      wsptr ++;
      }
      goto __Cont;
    }
    {
# 205
    z2 = (long )((int )(*(inptr + 16)) * (*(quantptr + 16)));
# 206
    z3 = (long )((int )(*(inptr + 48)) * (*(quantptr + 48)));
# 208
    z1 = (z2 + z3) * 4433L;
# 209
    tmp2 = z1 + z3 * -15137L;
# 210
    tmp3 = z1 + z2 * 6270L;
# 212
    z2 = (long )((int )(*(inptr + 0)) * (*(quantptr + 0)));
# 213
    z3 = (long )((int )(*(inptr + 32)) * (*(quantptr + 32)));
# 215
    tmp0 = (z2 + z3) << 13;
# 216
    tmp1 = (z2 - z3) << 13;
# 218
    tmp10 = tmp0 + tmp3;
# 219
    tmp13 = tmp0 - tmp3;
# 220
    tmp11 = tmp1 + tmp2;
# 221
    tmp12 = tmp1 - tmp2;
# 227
    tmp0 = (long )((int )(*(inptr + 56)) * (*(quantptr + 56)));
# 228
    tmp1 = (long )((int )(*(inptr + 40)) * (*(quantptr + 40)));
# 229
    tmp2 = (long )((int )(*(inptr + 24)) * (*(quantptr + 24)));
# 230
    tmp3 = (long )((int )(*(inptr + 8)) * (*(quantptr + 8)));
# 232
    z1 = tmp0 + tmp3;
# 233
    z2 = tmp1 + tmp2;
# 234
    z3 = tmp0 + tmp2;
# 235
    z4 = tmp1 + tmp3;
# 236
    z5 = (z3 + z4) * 9633L;
# 238
    tmp0 = tmp0 * 2446L;
# 239
    tmp1 = tmp1 * 16819L;
# 240
    tmp2 = tmp2 * 25172L;
# 241
    tmp3 = tmp3 * 12299L;
# 242
    z1 = z1 * -7373L;
# 243
    z2 = z2 * -20995L;
# 244
    z3 = z3 * -16069L;
# 245
    z4 = z4 * -3196L;
# 247
    z3 += z5;
# 248
    z4 += z5;
# 250
    tmp0 += z1 + z3;
# 251
    tmp1 += z2 + z4;
# 252
    tmp2 += z2 + z3;
# 253
    tmp3 += z1 + z4;
# 257
    (*(wsptr + 0)) = (int )(((tmp10 + tmp3) + 1024L) >> 11);
# 258
    (*(wsptr + 56)) = (int )(((tmp10 - tmp3) + 1024L) >> 11);
# 259
    (*(wsptr + 8)) = (int )(((tmp11 + tmp2) + 1024L) >> 11);
# 260
    (*(wsptr + 48)) = (int )(((tmp11 - tmp2) + 1024L) >> 11);
# 261
    (*(wsptr + 16)) = (int )(((tmp12 + tmp1) + 1024L) >> 11);
# 262
    (*(wsptr + 40)) = (int )(((tmp12 - tmp1) + 1024L) >> 11);
# 263
    (*(wsptr + 24)) = (int )(((tmp13 + tmp0) + 1024L) >> 11);
# 264
    (*(wsptr + 32)) = (int )(((tmp13 - tmp0) + 1024L) >> 11);
# 266
    inptr ++;
# 267
    quantptr ++;
# 268
    wsptr ++;
    }
    __Cont: 
    {
# 171
    ctr --;
    }
  }
  {
# 275
  wsptr = workspace;
# 276
  ctr = 0;
  }
# 276
  while (ctr < 8) {
    {
# 277
    outptr = (*(output_buf + ctr)) + output_col;
    }
# 287
    if ((((((((*(wsptr + 1)) | (*(wsptr + 2))) | (*(wsptr + 3))) |
            (*(wsptr + 4))) | (*(wsptr + 5))) | (*(wsptr + 6))) | (*(wsptr + 7))) ==
        0) {
      {
# 290
      dcval___0 = (*(range_limit + ((int )(((long )(*(wsptr + 0)) + 16L) >> 5) &
                                    1023)));
# 293
      (*(outptr + 0)) = dcval___0;
# 294
      (*(outptr + 1)) = dcval___0;
# 295
      (*(outptr + 2)) = dcval___0;
# 296
      (*(outptr + 3)) = dcval___0;
# 297
      (*(outptr + 4)) = dcval___0;
# 298
      (*(outptr + 5)) = dcval___0;
# 299
      (*(outptr + 6)) = dcval___0;
# 300
      (*(outptr + 7)) = dcval___0;
# 302
      wsptr += 8;
      }
      goto __Cont___0;
    }
    {
# 310
    z2 = (long )(*(wsptr + 2));
# 311
    z3 = (long )(*(wsptr + 6));
# 313
    z1 = (z2 + z3) * 4433L;
# 314
    tmp2 = z1 + z3 * -15137L;
# 315
    tmp3 = z1 + z2 * 6270L;
# 317
    tmp0 = ((long )(*(wsptr + 0)) + (long )(*(wsptr + 4))) << 13;
# 318
    tmp1 = ((long )(*(wsptr + 0)) - (long )(*(wsptr + 4))) << 13;
# 320
    tmp10 = tmp0 + tmp3;
# 321
    tmp13 = tmp0 - tmp3;
# 322
    tmp11 = tmp1 + tmp2;
# 323
    tmp12 = tmp1 - tmp2;
# 329
    tmp0 = (long )(*(wsptr + 7));
# 330
    tmp1 = (long )(*(wsptr + 5));
# 331
    tmp2 = (long )(*(wsptr + 3));
# 332
    tmp3 = (long )(*(wsptr + 1));
# 334
    z1 = tmp0 + tmp3;
# 335
    z2 = tmp1 + tmp2;
# 336
    z3 = tmp0 + tmp2;
# 337
    z4 = tmp1 + tmp3;
# 338
    z5 = (z3 + z4) * 9633L;
# 340
    tmp0 = tmp0 * 2446L;
# 341
    tmp1 = tmp1 * 16819L;
# 342
    tmp2 = tmp2 * 25172L;
# 343
    tmp3 = tmp3 * 12299L;
# 344
    z1 = z1 * -7373L;
# 345
    z2 = z2 * -20995L;
# 346
    z3 = z3 * -16069L;
# 347
    z4 = z4 * -3196L;
# 349
    z3 += z5;
# 350
    z4 += z5;
# 352
    tmp0 += z1 + z3;
# 353
    tmp1 += z2 + z4;
# 354
    tmp2 += z2 + z3;
# 355
    tmp3 += z1 + z4;
# 359
    (*(outptr + 0)) = (*(range_limit +
                         ((int )(((tmp10 + tmp3) + 131072L) >> 18) & 1023)));
# 362
    (*(outptr + 7)) = (*(range_limit +
                         ((int )(((tmp10 - tmp3) + 131072L) >> 18) & 1023)));
# 365
    (*(outptr + 1)) = (*(range_limit +
                         ((int )(((tmp11 + tmp2) + 131072L) >> 18) & 1023)));
# 368
    (*(outptr + 6)) = (*(range_limit +
                         ((int )(((tmp11 - tmp2) + 131072L) >> 18) & 1023)));
# 371
    (*(outptr + 2)) = (*(range_limit +
                         ((int )(((tmp12 + tmp1) + 131072L) >> 18) & 1023)));
# 374
    (*(outptr + 5)) = (*(range_limit +
                         ((int )(((tmp12 - tmp1) + 131072L) >> 18) & 1023)));
# 377
    (*(outptr + 3)) = (*(range_limit +
                         ((int )(((tmp13 + tmp0) + 131072L) >> 18) & 1023)));
# 380
    (*(outptr + 4)) = (*(range_limit +
                         ((int )(((tmp13 - tmp0) + 131072L) >> 18) & 1023)));
# 384
    wsptr += 8;
    }
    __Cont___0: 
    {
# 276
    ctr ++;
    }
  }
# 386
  return;
}
}
# 117 "jidctred.c"
void jpeg_idct_4x4(j_decompress_ptr cinfo , jpeg_component_info *compptr ,
                   JCOEFPTR coef_block , JSAMPARRAY output_buf ,
                   JDIMENSION output_col ) 
{ INT32 tmp0 ;
  INT32 tmp2 ;
  INT32 tmp10 ;
  INT32 tmp12 ;
  INT32 z1 ;
  INT32 z2 ;
  INT32 z3 ;
  INT32 z4 ;
  JCOEFPTR inptr ;
  ISLOW_MULT_TYPE *quantptr ;
  int *wsptr ;
  JSAMPROW outptr ;
  JSAMPLE *range_limit ;
  int ctr ;
  int workspace[32] ;
  int dcval ;
  JSAMPLE dcval___0 ;

  {
  {
# 128
  range_limit = cinfo->sample_range_limit + 128;
# 135
  inptr = coef_block;
# 136
  quantptr = (ISLOW_MULT_TYPE *)compptr->dct_table;
# 137
  wsptr = workspace;
# 138
  ctr = 8;
  }
# 138
  while (ctr > 0) {
# 140
    if (ctr == 4) {
      goto __Cont;
    }
# 142
    if (((((((int )(*(inptr + 8)) | (int )(*(inptr + 16))) |
            (int )(*(inptr + 24))) | (int )(*(inptr + 40))) |
          (int )(*(inptr + 48))) | (int )(*(inptr + 56))) == 0) {
      {
# 145
      dcval = (int )(*(inptr + 0)) * (*(quantptr + 0)) << 2;
# 147
      (*(wsptr + 0)) = dcval;
# 148
      (*(wsptr + 8)) = dcval;
# 149
      (*(wsptr + 16)) = dcval;
# 150
      (*(wsptr + 24)) = dcval;
      }
      goto __Cont;
    }
    {
# 157
    tmp0 = (long )((int )(*(inptr + 0)) * (*(quantptr + 0)));
# 158
    tmp0 <<= 14;
# 160
    z2 = (long )((int )(*(inptr + 16)) * (*(quantptr + 16)));
# 161
    z3 = (long )((int )(*(inptr + 48)) * (*(quantptr + 48)));
# 163
    tmp2 = z2 * 15137L + z3 * -6270L;
# 165
    tmp10 = tmp0 + tmp2;
# 166
    tmp12 = tmp0 - tmp2;
# 170
    z1 = (long )((int )(*(inptr + 56)) * (*(quantptr + 56)));
# 171
    z2 = (long )((int )(*(inptr + 40)) * (*(quantptr + 40)));
# 172
    z3 = (long )((int )(*(inptr + 24)) * (*(quantptr + 24)));
# 173
    z4 = (long )((int )(*(inptr + 8)) * (*(quantptr + 8)));
# 175
    tmp0 = ((z1 * -1730L + z2 * 11893L) + z3 * -17799L) + z4 * 8697L;
# 180
    tmp2 = ((z1 * -4176L + z2 * -4926L) + z3 * 7373L) + z4 * 20995L;
# 187
    (*(wsptr + 0)) = (int )(((tmp10 + tmp2) + 2048L) >> 12);
# 188
    (*(wsptr + 24)) = (int )(((tmp10 - tmp2) + 2048L) >> 12);
# 189
    (*(wsptr + 8)) = (int )(((tmp12 + tmp0) + 2048L) >> 12);
# 190
    (*(wsptr + 16)) = (int )(((tmp12 - tmp0) + 2048L) >> 12);
    }
    __Cont: 
    {
# 138
    inptr ++;
# 138
    quantptr ++;
# 138
    wsptr ++;
# 138
    ctr --;
    }
  }
  {
# 195
  wsptr = workspace;
# 196
  ctr = 0;
  }
# 196
  while (ctr < 4) {
    {
# 197
    outptr = (*(output_buf + ctr)) + output_col;
    }
# 201
    if (((((((*(wsptr + 1)) | (*(wsptr + 2))) | (*(wsptr + 3))) | (*(wsptr + 5))) |
          (*(wsptr + 6))) | (*(wsptr + 7))) == 0) {
      {
# 204
      dcval___0 = (*(range_limit + ((int )(((long )(*(wsptr + 0)) + 16L) >> 5) &
                                    1023)));
# 207
      (*(outptr + 0)) = dcval___0;
# 208
      (*(outptr + 1)) = dcval___0;
# 209
      (*(outptr + 2)) = dcval___0;
# 210
      (*(outptr + 3)) = dcval___0;
# 212
      wsptr += 8;
      }
      goto __Cont___0;
    }
    {
# 219
    tmp0 = (long )(*(wsptr + 0)) << 14;
# 221
    tmp2 = (long )(*(wsptr + 2)) * 15137L + (long )(*(wsptr + 6)) * -6270L;
# 224
    tmp10 = tmp0 + tmp2;
# 225
    tmp12 = tmp0 - tmp2;
# 229
    z1 = (long )(*(wsptr + 7));
# 230
    z2 = (long )(*(wsptr + 5));
# 231
    z3 = (long )(*(wsptr + 3));
# 232
    z4 = (long )(*(wsptr + 1));
# 234
    tmp0 = ((z1 * -1730L + z2 * 11893L) + z3 * -17799L) + z4 * 8697L;
# 239
    tmp2 = ((z1 * -4176L + z2 * -4926L) + z3 * 7373L) + z4 * 20995L;
# 246
    (*(outptr + 0)) = (*(range_limit +
                         ((int )(((tmp10 + tmp2) + 262144L) >> 19) & 1023)));
# 249
    (*(outptr + 3)) = (*(range_limit +
                         ((int )(((tmp10 - tmp2) + 262144L) >> 19) & 1023)));
# 252
    (*(outptr + 1)) = (*(range_limit +
                         ((int )(((tmp12 + tmp0) + 262144L) >> 19) & 1023)));
# 255
    (*(outptr + 2)) = (*(range_limit +
                         ((int )(((tmp12 - tmp0) + 262144L) >> 19) & 1023)));
# 259
    wsptr += 8;
    }
    __Cont___0: 
    {
# 196
    ctr ++;
    }
  }
# 261
  return;
}
}
# 269
void jpeg_idct_2x2(j_decompress_ptr cinfo , jpeg_component_info *compptr ,
                   JCOEFPTR coef_block , JSAMPARRAY output_buf ,
                   JDIMENSION output_col ) 
{ INT32 tmp0 ;
  INT32 tmp10 ;
  INT32 z1 ;
  JCOEFPTR inptr ;
  ISLOW_MULT_TYPE *quantptr ;
  int *wsptr ;
  JSAMPROW outptr ;
  JSAMPLE *range_limit ;
  int ctr ;
  int workspace[16] ;
  int dcval ;
  JSAMPLE dcval___0 ;

  {
  {
# 279
  range_limit = cinfo->sample_range_limit + 128;
# 286
  inptr = coef_block;
# 287
  quantptr = (ISLOW_MULT_TYPE *)compptr->dct_table;
# 288
  wsptr = workspace;
# 289
  ctr = 8;
  }
# 289
  while (ctr > 0) {
# 291
    if (ctr == 6) {
      goto __Cont;
    } else {
# 291
      if (ctr == 4) {
        goto __Cont;
      } else {
# 291
        if (ctr == 2) {
          goto __Cont;
        }
      }
    }
# 293
    if (((((int )(*(inptr + 8)) | (int )(*(inptr + 24))) | (int )(*(inptr + 40))) |
         (int )(*(inptr + 56))) == 0) {
      {
# 296
      dcval = (int )(*(inptr + 0)) * (*(quantptr + 0)) << 2;
# 298
      (*(wsptr + 0)) = dcval;
# 299
      (*(wsptr + 8)) = dcval;
      }
      goto __Cont;
    }
    {
# 306
    z1 = (long )((int )(*(inptr + 0)) * (*(quantptr + 0)));
# 307
    tmp10 = z1 << 15;
# 311
    z1 = (long )((int )(*(inptr + 56)) * (*(quantptr + 56)));
# 312
    tmp0 = z1 * -5906L;
# 313
    z1 = (long )((int )(*(inptr + 40)) * (*(quantptr + 40)));
# 314
    tmp0 += z1 * 6967L;
# 315
    z1 = (long )((int )(*(inptr + 24)) * (*(quantptr + 24)));
# 316
    tmp0 += z1 * -10426L;
# 317
    z1 = (long )((int )(*(inptr + 8)) * (*(quantptr + 8)));
# 318
    tmp0 += z1 * 29692L;
# 322
    (*(wsptr + 0)) = (int )(((tmp10 + tmp0) + 4096L) >> 13);
# 323
    (*(wsptr + 8)) = (int )(((tmp10 - tmp0) + 4096L) >> 13);
    }
    __Cont: 
    {
# 289
    inptr ++;
# 289
    quantptr ++;
# 289
    wsptr ++;
# 289
    ctr --;
    }
  }
  {
# 328
  wsptr = workspace;
# 329
  ctr = 0;
  }
# 329
  while (ctr < 2) {
    {
# 330
    outptr = (*(output_buf + ctr)) + output_col;
    }
# 334
    if (((((*(wsptr + 1)) | (*(wsptr + 3))) | (*(wsptr + 5))) | (*(wsptr + 7))) ==
        0) {
      {
# 336
      dcval___0 = (*(range_limit + ((int )(((long )(*(wsptr + 0)) + 16L) >> 5) &
                                    1023)));
# 339
      (*(outptr + 0)) = dcval___0;
# 340
      (*(outptr + 1)) = dcval___0;
# 342
      wsptr += 8;
      }
      goto __Cont___0;
    }
    {
# 349
    tmp10 = (long )(*(wsptr + 0)) << 15;
# 353
    tmp0 = (((long )(*(wsptr + 7)) * -5906L + (long )(*(wsptr + 5)) * 6967L) +
            (long )(*(wsptr + 3)) * -10426L) + (long )(*(wsptr + 1)) * 29692L;
# 360
    (*(outptr + 0)) = (*(range_limit +
                         ((int )(((tmp10 + tmp0) + 524288L) >> 20) & 1023)));
# 363
    (*(outptr + 1)) = (*(range_limit +
                         ((int )(((tmp10 - tmp0) + 524288L) >> 20) & 1023)));
# 367
    wsptr += 8;
    }
    __Cont___0: 
    {
# 329
    ctr ++;
    }
  }
# 369
  return;
}
}
# 377
void jpeg_idct_1x1(j_decompress_ptr cinfo , jpeg_component_info *compptr ,
                   JCOEFPTR coef_block , JSAMPARRAY output_buf ,
                   JDIMENSION output_col ) 
{ int dcval ;
  ISLOW_MULT_TYPE *quantptr ;
  JSAMPLE *range_limit ;

  {
  {
# 384
  range_limit = cinfo->sample_range_limit + 128;
# 390
  quantptr = (ISLOW_MULT_TYPE *)compptr->dct_table;
# 391
  dcval = (int )(*(coef_block + 0)) * (*(quantptr + 0));
# 392
  dcval = (int )(((long )dcval + 4L) >> 3);
# 394
  (*((*(output_buf + 0)) + output_col)) = (*(range_limit + (dcval & 1023)));
  }
# 395
  return;
}
}
# 114 "jdhuff.c"
static void fix_huff_tbl___0(j_decompress_ptr cinfo , JHUFF_TBL *htbl ,
                             D_DERIVED_TBL **pdtbl ) ;
# 122
static void start_pass_huff_decoder(j_decompress_ptr cinfo ) 
{ jdhuff_huff_entropy_ptr entropy ;
  int ci ;
  int dctbl ;
  int actbl ;
  jpeg_component_info *compptr ;

  {
  {
# 125
  entropy = (huff_entropy_decoder *)cinfo->entropy;
# 129
  ci = 0;
  }
# 129
  while (ci < cinfo->comps_in_scan) {
    {
# 130
    compptr = cinfo->cur_comp_info[ci];
# 131
    dctbl = compptr->dc_tbl_no;
# 132
    actbl = compptr->ac_tbl_no;
    }
# 134
    if (dctbl < 0) {
      {
# 136
      (cinfo->err)->msg_code = 42;
# 136
      (cinfo->err)->msg_parm.i[0] = dctbl;
# 136
      ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
      }
    } else {
# 134
      if (dctbl >= 4) {
        {
# 136
        (cinfo->err)->msg_code = 42;
# 136
        (cinfo->err)->msg_parm.i[0] = dctbl;
# 136
        ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
        }
      } else {
# 134
        if ((unsigned int )cinfo->dc_huff_tbl_ptrs[dctbl] ==
            (unsigned int )((void *)0)) {
          {
# 136
          (cinfo->err)->msg_code = 42;
# 136
          (cinfo->err)->msg_parm.i[0] = dctbl;
# 136
          ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
          }
        }
      }
    }
# 137
    if (actbl < 0) {
      {
# 139
      (cinfo->err)->msg_code = 42;
# 139
      (cinfo->err)->msg_parm.i[0] = actbl;
# 139
      ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
      }
    } else {
# 137
      if (actbl >= 4) {
        {
# 139
        (cinfo->err)->msg_code = 42;
# 139
        (cinfo->err)->msg_parm.i[0] = actbl;
# 139
        ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
        }
      } else {
# 137
        if ((unsigned int )cinfo->ac_huff_tbl_ptrs[actbl] ==
            (unsigned int )((void *)0)) {
          {
# 139
          (cinfo->err)->msg_code = 42;
# 139
          (cinfo->err)->msg_parm.i[0] = actbl;
# 139
          ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
          }
        }
      }
    }
    {
# 142
    fix_huff_tbl___0(cinfo, cinfo->dc_huff_tbl_ptrs[dctbl],
                     & entropy->dc_derived_tbls[dctbl]);
# 144
    fix_huff_tbl___0(cinfo, cinfo->ac_huff_tbl_ptrs[actbl],
                     & entropy->ac_derived_tbls[actbl]);
# 147
    entropy->saved.last_dc_val[ci] = 0;
# 129
    ci ++;
    }
  }
  {
# 151
  entropy->saved.bits_left = 0;
# 152
  entropy->printed_eod = 0;
# 155
  entropy->restarts_to_go = cinfo->restart_interval;
  }
# 156
  return;
}
}
# 159
static void fix_huff_tbl___0(j_decompress_ptr cinfo , JHUFF_TBL *htbl ,
                             D_DERIVED_TBL **pdtbl ) 
{ D_DERIVED_TBL *dtbl ;
  int p ;
  int i ;
  int l ;
  int si ;
  int lookbits ;
  int ctr ;
  char huffsize[257] ;
  unsigned int huffcode[257] ;
  unsigned int code ;
  int tmp___0 ;
  int tmp___1 ;

  {
# 171
  if ((unsigned int )(*pdtbl) == (unsigned int )((void *)0)) {
    {
# 172
    (*pdtbl) = (D_DERIVED_TBL *)alloc_small_wrapper((struct jpeg_common_struct *)cinfo,
                                                    1, sizeof(D_DERIVED_TBL ));
    }
  }
  {
# 175
  dtbl = (*pdtbl);
# 176
  dtbl->pub = htbl;
# 181
  p = 0;
# 182
  l = 1;
  }
# 182
  while (l <= 16) {
    {
# 183
    i = 1;
    }
# 183
    while (i <= (int )htbl->bits[l]) {
      {
# 184
      tmp___0 = p;
# 184
      p ++;
# 184
      huffsize[tmp___0] = (char )l;
# 183
      i ++;
      }
    }
    {
# 182
    l ++;
    }
  }
  {
# 186
  huffsize[p] = (char )0;
# 191
  code = 0U;
# 192
  si = (int )huffsize[0];
# 193
  p = 0;
  }
# 194
  while (huffsize[p]) {
# 195
    while ((int )huffsize[p] == si) {
      {
# 196
      tmp___1 = p;
# 196
      p ++;
# 196
      huffcode[tmp___1] = code;
# 197
      code ++;
      }
    }
    {
# 199
    code <<= 1;
# 200
    si ++;
    }
  }
  {
# 205
  p = 0;
# 206
  l = 1;
  }
# 206
  while (l <= 16) {
# 207
    if (htbl->bits[l]) {
      {
# 208
      dtbl->valptr[l] = p;
# 209
      dtbl->mincode[l] = (long )huffcode[p];
# 210
      p += (int )htbl->bits[l];
# 211
      dtbl->maxcode[l] = (long )huffcode[p - 1];
      }
    } else {
      {
# 213
      dtbl->maxcode[l] = -1L;
      }
    }
    {
# 206
    l ++;
    }
  }
  {
# 216
  dtbl->maxcode[17] = 1048575L;
# 225
  memset((void *)(dtbl->look_nbits), 0, sizeof(dtbl->look_nbits));
# 227
  p = 0;
# 228
  l = 1;
  }
# 228
  while (l <= 8) {
    {
# 229
    i = 1;
    }
# 229
    while (i <= (int )htbl->bits[l]) {
      {
# 232
      lookbits = (int )(huffcode[p] << (8 - l));
# 233
      ctr = 1 << (8 - l);
      }
# 233
      while (ctr > 0) {
        {
# 234
        dtbl->look_nbits[lookbits] = l;
# 235
        dtbl->look_sym[lookbits] = htbl->huffval[p];
# 236
        lookbits ++;
# 233
        ctr --;
        }
      }
      {
# 229
      i ++;
# 229
      p ++;
      }
    }
    {
# 228
    l ++;
    }
  }
# 240
  return;
}
}
# 275
static boolean fill_bit_buffer(jdhuff_working_state *state , int nbits ) 
{ register JOCTET const   *next_input_byte ;
  register size_t bytes_in_buffer ;
  register INT32 get_buffer ;
  register int bits_left ;
  register int c ;
  boolean tmp ;
  JOCTET const   *tmp___0 ;
  boolean tmp___1 ;
  JOCTET const   *tmp___2 ;

  {
  {
# 280
  next_input_byte = state->next_input_byte;
# 281
  bytes_in_buffer = state->bytes_in_buffer;
# 282
  get_buffer = state->cur.get_buffer;
# 283
  bits_left = state->cur.bits_left;
  }
# 289
  while (bits_left < 25) {
# 291
    if (state->unread_marker != 0) {
      goto no_more_data;
    }
# 294
    if (bytes_in_buffer == 0U) {
      {
# 295
      tmp = ((*(((state->cinfo)->src)->fill_input_buffer)))(state->cinfo);
      }
# 295
      if (! tmp) {
# 296
        return (0);
      }
      {
# 297
      next_input_byte = ((state->cinfo)->src)->next_input_byte;
# 298
      bytes_in_buffer = ((state->cinfo)->src)->bytes_in_buffer;
      }
    }
    {
# 300
    bytes_in_buffer --;
# 301
    tmp___0 = next_input_byte;
# 301
    next_input_byte ++;
# 301
    c = (int )(*tmp___0);
    }
# 304
    if (c == 255) {
# 305
      while (1) {
# 306
        if (bytes_in_buffer == 0U) {
          {
# 307
          tmp___1 = ((*(((state->cinfo)->src)->fill_input_buffer)))(state->cinfo);
          }
# 307
          if (! tmp___1) {
# 308
            return (0);
          }
          {
# 309
          next_input_byte = ((state->cinfo)->src)->next_input_byte;
# 310
          bytes_in_buffer = ((state->cinfo)->src)->bytes_in_buffer;
          }
        }
        {
# 312
        bytes_in_buffer --;
# 313
        tmp___2 = next_input_byte;
# 313
        next_input_byte ++;
# 313
        c = (int )(*tmp___2);
        }
# 305
        if (! (c == 255)) {
# 305
          break;
        }
      }
# 316
      if (c == 0) {
        {
# 318
        c = 255;
        }
      } else {
        {
# 322
        state->unread_marker = c;
        }
        no_more_data: 
# 327
        if (bits_left >= nbits) {
# 328
          break;
        }
# 336
        if (! ((huff_entropy_decoder *)(state->cinfo)->entropy)->printed_eod) {
          {
# 337
          ((state->cinfo)->err)->msg_code = 104;
# 337
          ((*(((state->cinfo)->err)->emit_message)))((struct jpeg_common_struct *)state->cinfo,
                                                     -1);
# 338
          ((huff_entropy_decoder *)(state->cinfo)->entropy)->printed_eod = 1;
          }
        }
        {
# 340
        c = 0;
        }
      }
    }
    {
# 345
    get_buffer = (get_buffer << 8) | (long )c;
# 346
    bits_left += 8;
    }
  }
  {
# 350
  state->next_input_byte = next_input_byte;
# 351
  state->bytes_in_buffer = bytes_in_buffer;
# 352
  state->cur.get_buffer = get_buffer;
# 353
  state->cur.bits_left = bits_left;
  }
# 355
  return (1);
}
}
# 428
static int slow_DECODE(jdhuff_working_state *state , D_DERIVED_TBL *htbl ,
                       int min_bits ) 
{ register int l ;
  register INT32 code ;
  boolean tmp ;
  boolean tmp___0 ;

  {
  {
# 431
  l = min_bits;
  }
# 437
  if (state->cur.bits_left < l) {
    {
# 437
    tmp = fill_bit_buffer(state, l);
    }
# 437
    if (! tmp) {
# 437
      return (-1);
    }
  }
  {
# 438
  state->cur.bits_left -= l;
# 438
  code = (long )((int )(state->cur.get_buffer >> state->cur.bits_left) &
                 ((1 << l) - 1));
  }
# 443
  while (code > htbl->maxcode[l]) {
    {
# 444
    code <<= 1;
    }
# 445
    if (state->cur.bits_left < 1) {
      {
# 445
      tmp___0 = fill_bit_buffer(state, 1);
      }
# 445
      if (! tmp___0) {
# 445
        return (-1);
      }
    }
    {
# 446
    state->cur.bits_left --;
# 446
    code |= (long )((int )(state->cur.get_buffer >> state->cur.bits_left) & 1);
# 447
    l ++;
    }
  }
# 452
  if (l > 16) {
    {
# 453
    ((state->cinfo)->err)->msg_code = 105;
# 453
    ((*(((state->cinfo)->err)->emit_message)))((struct jpeg_common_struct *)state->cinfo,
                                               -1);
    }
# 454
    return (0);
  }
# 457
  return ((int )(htbl->pub)->huffval[htbl->valptr[l] +
                                     (int )(code - htbl->mincode[l])]);
}
}
# 474
static int const   extend_test[16]   = 
# 474
  {0, 1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096, 8192, 16384};
# 478
static int const   extend_offset[16]   = 
# 478
  {0, -1, -3, -7, -15, -31, -63, -127, -255, -511, -1023, -2047, -4095, -8191,
   -16383, -32767};
# 492
static boolean process_restart(j_decompress_ptr cinfo ) 
{ jdhuff_huff_entropy_ptr entropy ;
  int ci ;
  boolean tmp ;

  {
  {
# 495
  entropy = (huff_entropy_decoder *)cinfo->entropy;
# 500
  (cinfo->marker)->discarded_bytes = (cinfo->marker)->discarded_bytes +
                                     (unsigned int )(entropy->saved.bits_left /
                                                     8);
# 501
  entropy->saved.bits_left = 0;
# 504
  tmp = ((*((cinfo->marker)->read_restart_marker)))(cinfo);
  }
# 504
  if (! tmp) {
# 505
    return (0);
  }
  {
# 508
  ci = 0;
  }
# 508
  while (ci < cinfo->comps_in_scan) {
    {
# 509
    entropy->saved.last_dc_val[ci] = 0;
# 508
    ci ++;
    }
  }
  {
# 512
  entropy->restarts_to_go = cinfo->restart_interval;
# 514
  entropy->printed_eod = 0;
  }
# 516
  return (1);
}
}
# 526
static int const   ZAG___0[80]   = 
# 526
  {0, 1, 8, 16, 9, 2, 3, 10, 17, 24, 32, 25, 18, 11, 4, 5, 12, 19, 26, 33, 40,
   48, 41, 34, 27, 20, 13, 6, 7, 14, 21, 28, 35, 42, 49, 56, 57, 50, 43, 36, 29,
   22, 15, 23, 30, 37, 44, 51, 58, 59, 52, 45, 38, 31, 39, 46, 53, 60, 61, 54,
   47, 55, 62, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
# 555
static boolean decode_mcu(j_decompress_ptr cinfo , JBLOCKROW *MCU_data ) 
{ jdhuff_huff_entropy_ptr entropy ;
  register int s ;
  register int k ;
  register int r ;
  int blkn ;
  int ci ;
  JBLOCKROW block ;
  jdhuff_working_state state ;
  D_DERIVED_TBL *dctbl ;
  D_DERIVED_TBL *actbl ;
  jpeg_component_info *compptr ;
  boolean tmp ;
  boolean tmp___0 ;
  register int nb ;
  register int look ;
  boolean tmp___1 ;
  boolean tmp___2 ;
  register int nb___0 ;
  register int look___0 ;
  boolean tmp___3 ;
  boolean tmp___4 ;
  register int nb___1 ;
  register int look___1 ;
  boolean tmp___5 ;

  {
  {
# 558
  entropy = (huff_entropy_decoder *)cinfo->entropy;
  }
# 568
  if (cinfo->restart_interval) {
# 569
    if (entropy->restarts_to_go == 0U) {
      {
# 570
      tmp = process_restart(cinfo);
      }
# 570
      if (! tmp) {
# 571
        return (0);
      }
    }
  }
  {
# 575
  state.unread_marker = cinfo->unread_marker;
# 576
  state.next_input_byte = (cinfo->src)->next_input_byte;
# 577
  state.bytes_in_buffer = (cinfo->src)->bytes_in_buffer;
# 578
  state.cur = entropy->saved;
# 579
  state.cinfo = cinfo;
# 583
  blkn = 0;
  }
# 583
  while (blkn < cinfo->blocks_in_MCU) {
    {
# 584
    block = (*(MCU_data + blkn));
# 585
    ci = cinfo->MCU_membership[blkn];
# 586
    compptr = cinfo->cur_comp_info[ci];
# 587
    dctbl = entropy->dc_derived_tbls[compptr->dc_tbl_no];
# 588
    actbl = entropy->ac_derived_tbls[compptr->ac_tbl_no];
    }
# 593
    if (state.cur.bits_left < 8) {
      {
# 593
      tmp___0 = fill_bit_buffer(& state, 0);
      }
# 593
      if (! tmp___0) {
# 593
        return (0);
      }
# 593
      if (state.cur.bits_left < 8) {
        {
# 593
        s = slow_DECODE(& state, dctbl, 1);
        }
# 593
        if (s < 0) {
# 593
          return (0);
        }
        goto label1;
      }
    }
    {
# 593
    look = (int )(state.cur.get_buffer >> (state.cur.bits_left - 8)) & 255;
# 593
    nb = dctbl->look_nbits[look];
    }
# 593
    if (nb != 0) {
      {
# 593
      state.cur.bits_left -= nb;
# 593
      s = (int )dctbl->look_sym[look];
      }
    } else {
      {
# 593
      s = slow_DECODE(& state, dctbl, 9);
      }
# 593
      if (s < 0) {
# 593
        return (0);
      }
    }
    label1: 
    {

    }
# 594
    if (s) {
# 595
      if (state.cur.bits_left < s) {
        {
# 595
        tmp___1 = fill_bit_buffer(& state, s);
        }
# 595
        if (! tmp___1) {
# 595
          return (0);
        }
      }
      {
# 596
      state.cur.bits_left -= s;
# 596
      r = (int )(state.cur.get_buffer >> state.cur.bits_left) & ((1 << s) - 1);
      }
# 597
      if (r < extend_test[s]) {
        {
# 597
        s = r + extend_offset[s];
        }
      } else {
        {
# 597
        s = r;
        }
      }
    }
# 601
    if (! compptr->component_needed) {
      goto skip_ACs;
    }
    {
# 605
    s += state.cur.last_dc_val[ci];
# 606
    state.cur.last_dc_val[ci] = s;
# 608
    (*block)[0] = (short )s;
    }
# 611
    if (compptr->DCT_scaled_size > 1) {
      {
# 615
      k = 1;
      }
# 615
      while (k < 64) {
# 616
        if (state.cur.bits_left < 8) {
          {
# 616
          tmp___2 = fill_bit_buffer(& state, 0);
          }
# 616
          if (! tmp___2) {
# 616
            return (0);
          }
# 616
          if (state.cur.bits_left < 8) {
            {
# 616
            s = slow_DECODE(& state, actbl, 1);
            }
# 616
            if (s < 0) {
# 616
              return (0);
            }
            goto label2;
          }
        }
        {
# 616
        look___0 = (int )(state.cur.get_buffer >> (state.cur.bits_left - 8)) &
                   255;
# 616
        nb___0 = actbl->look_nbits[look___0];
        }
# 616
        if (nb___0 != 0) {
          {
# 616
          state.cur.bits_left -= nb___0;
# 616
          s = (int )actbl->look_sym[look___0];
          }
        } else {
          {
# 616
          s = slow_DECODE(& state, actbl, 9);
          }
# 616
          if (s < 0) {
# 616
            return (0);
          }
        }
        label2: 
        {
# 618
        r = s >> 4;
# 619
        s &= 15;
        }
# 621
        if (s) {
          {
# 622
          k += r;
          }
# 623
          if (state.cur.bits_left < s) {
            {
# 623
            tmp___3 = fill_bit_buffer(& state, s);
            }
# 623
            if (! tmp___3) {
# 623
              return (0);
            }
          }
          {
# 624
          state.cur.bits_left -= s;
# 624
          r = (int )(state.cur.get_buffer >> state.cur.bits_left) &
              ((1 << s) - 1);
          }
# 625
          if (r < extend_test[s]) {
            {
# 625
            s = r + extend_offset[s];
            }
          } else {
            {
# 625
            s = r;
            }
          }
          {
# 627
          (*block)[ZAG___0[k]] = (short )s;
          }
        } else {
# 629
          if (r != 15) {
# 630
            break;
          }
          {
# 631
          k += 15;
          }
        }
        {
# 615
        k ++;
        }
      }
    } else {
      skip_ACs: 
      {
# 640
      k = 1;
      }
# 640
      while (k < 64) {
# 641
        if (state.cur.bits_left < 8) {
          {
# 641
          tmp___4 = fill_bit_buffer(& state, 0);
          }
# 641
          if (! tmp___4) {
# 641
            return (0);
          }
# 641
          if (state.cur.bits_left < 8) {
            {
# 641
            s = slow_DECODE(& state, actbl, 1);
            }
# 641
            if (s < 0) {
# 641
              return (0);
            }
            goto label3;
          }
        }
        {
# 641
        look___1 = (int )(state.cur.get_buffer >> (state.cur.bits_left - 8)) &
                   255;
# 641
        nb___1 = actbl->look_nbits[look___1];
        }
# 641
        if (nb___1 != 0) {
          {
# 641
          state.cur.bits_left -= nb___1;
# 641
          s = (int )actbl->look_sym[look___1];
          }
        } else {
          {
# 641
          s = slow_DECODE(& state, actbl, 9);
          }
# 641
          if (s < 0) {
# 641
            return (0);
          }
        }
        label3: 
        {
# 643
        r = s >> 4;
# 644
        s &= 15;
        }
# 646
        if (s) {
          {
# 647
          k += r;
          }
# 648
          if (state.cur.bits_left < s) {
            {
# 648
            tmp___5 = fill_bit_buffer(& state, s);
            }
# 648
            if (! tmp___5) {
# 648
              return (0);
            }
          }
          {
# 649
          state.cur.bits_left -= s;
          }
        } else {
# 651
          if (r != 15) {
# 652
            break;
          }
          {
# 653
          k += 15;
          }
        }
        {
# 640
        k ++;
        }
      }
    }
    {
# 583
    blkn ++;
    }
  }
  {
# 661
  cinfo->unread_marker = state.unread_marker;
# 662
  (cinfo->src)->next_input_byte = state.next_input_byte;
# 663
  (cinfo->src)->bytes_in_buffer = state.bytes_in_buffer;
# 664
  entropy->saved = state.cur;
# 667
  entropy->restarts_to_go --;
  }
# 669
  return (1);
}
}
# 677
void jinit_huff_decoder(j_decompress_ptr cinfo ) 
{ jdhuff_huff_entropy_ptr entropy ;
  int i ;

  {
  {
# 683
  entropy = (jdhuff_huff_entropy_ptr )alloc_small_wrapper((struct jpeg_common_struct *)cinfo,
                                                          1,
                                                          sizeof(huff_entropy_decoder ));
# 686
  cinfo->entropy = (struct jpeg_entropy_decoder */* __attribute__((__rtti__)) */)((struct jpeg_entropy_decoder *)entropy);
# 687
  entropy->pub.start_pass = & start_pass_huff_decoder;
# 688
  entropy->pub.decode_mcu = & decode_mcu;
# 691
  i = 0;
  }
# 691
  while (i < 4) {
    {
# 692
    entropy->ac_derived_tbls[i] = (D_DERIVED_TBL *)((void *)0);
# 692
    entropy->dc_derived_tbls[i] = entropy->ac_derived_tbls[i];
# 691
    i ++;
    }
  }
# 694
  return;
}
}
# 71 "jdsample.c"
static void start_pass_upsample(j_decompress_ptr cinfo ) 
{ jdsample_my_upsample_ptr upsample ;

  {
  {
# 74
  upsample = (my_upsampler *)cinfo->upsample;
# 77
  upsample->next_row_out = cinfo->max_v_samp_factor;
# 79
  upsample->rows_to_go = cinfo->output_height;
  }
# 80
  return;
}
}
# 91
static void sep_upsample(j_decompress_ptr cinfo , JSAMPIMAGE input_buf ,
                         JDIMENSION *in_row_group_ctr ,
                         JDIMENSION in_row_groups_avail ,
                         JSAMPARRAY output_buf , JDIMENSION *out_row_ctr ,
                         JDIMENSION out_rows_avail ) 
{ jdsample_my_upsample_ptr upsample ;
  int ci ;
  jpeg_component_info *compptr ;
  JDIMENSION num_rows ;

  {
  {
# 98
  upsample = (my_upsampler *)cinfo->upsample;
  }
# 104
  if (upsample->next_row_out >= cinfo->max_v_samp_factor) {
    {
# 105
    ci = 0;
# 105
    compptr = cinfo->comp_info;
    }
# 105
    while (ci < cinfo->num_components) {
      {
# 110
      ((*(upsample->methods[ci])))(cinfo, compptr,
                                   (*(input_buf + ci)) +
                                   (*in_row_group_ctr) *
                                   (unsigned int )upsample->rowgroup_height[ci],
                                   upsample->color_buf + ci);
# 105
      ci ++;
# 105
      compptr ++;
      }
    }
    {
# 114
    upsample->next_row_out = 0;
    }
  }
  {
# 120
  num_rows = (unsigned int )(cinfo->max_v_samp_factor - upsample->next_row_out);
  }
# 124
  if (num_rows > upsample->rows_to_go) {
    {
# 125
    num_rows = upsample->rows_to_go;
    }
  }
  {
# 127
  out_rows_avail -= (*out_row_ctr);
  }
# 128
  if (num_rows > out_rows_avail) {
    {
# 129
    num_rows = out_rows_avail;
    }
  }
  {
# 131
  ((*((cinfo->cconvert)->color_convert)))(cinfo, upsample->color_buf,
                                          (unsigned int )upsample->next_row_out,
                                          output_buf + (*out_row_ctr),
                                          (int )num_rows);
# 137
  (*out_row_ctr) += num_rows;
# 138
  upsample->rows_to_go -= num_rows;
# 139
  upsample->next_row_out = (int )((unsigned int )upsample->next_row_out +
                                  num_rows);
  }
# 141
  if (upsample->next_row_out >= cinfo->max_v_samp_factor) {
    {
# 142
    (*in_row_group_ctr) ++;
    }
  }
# 143
  return;
}
}
# 159
static void fullsize_upsample(j_decompress_ptr cinfo ,
                              jpeg_component_info *compptr ,
                              JSAMPARRAY input_data ,
                              JSAMPARRAY *output_data_ptr ) 
{ 

  {
  {
# 163
  (*output_data_ptr) = input_data;
  }
# 164
  return;
}
}
# 172
static void noop_upsample(j_decompress_ptr cinfo ,
                          jpeg_component_info *compptr , JSAMPARRAY input_data ,
                          JSAMPARRAY *output_data_ptr ) 
{ 

  {
  {
# 176
  (*output_data_ptr) = (JSAMPROW *)((void *)0);
  }
# 177
  return;
}
}
# 191
static void int_upsample(j_decompress_ptr cinfo , jpeg_component_info *compptr ,
                         JSAMPARRAY input_data , JSAMPARRAY *output_data_ptr ) 
{ jdsample_my_upsample_ptr upsample ;
  JSAMPARRAY output_data ;
  register JSAMPROW inptr ;
  register JSAMPROW outptr ;
  register JSAMPLE invalue ;
  register int h ;
  JSAMPROW outend ;
  int h_expand ;
  int v_expand ;
  int inrow ;
  int outrow ;
  JSAMPROW tmp ;
  JSAMPROW tmp___0 ;

  {
  {
# 195
  upsample = (my_upsampler *)cinfo->upsample;
# 196
  output_data = (*output_data_ptr);
# 204
  h_expand = (int )upsample->h_expand[compptr->component_index];
# 205
  v_expand = (int )upsample->v_expand[compptr->component_index];
# 207
  outrow = 0;
# 207
  inrow = outrow;
  }
# 208
  while (outrow < cinfo->max_v_samp_factor) {
    {
# 210
    inptr = (*(input_data + inrow));
# 211
    outptr = (*(output_data + outrow));
# 212
    outend = outptr + cinfo->output_width;
    }
# 213
    while ((unsigned int )outptr < (unsigned int )outend) {
      {
# 214
      tmp = inptr;
# 214
      inptr ++;
# 214
      invalue = (*tmp);
# 215
      h = h_expand;
      }
# 215
      while (h > 0) {
        {
# 216
        tmp___0 = outptr;
# 216
        outptr ++;
# 216
        (*tmp___0) = invalue;
# 215
        h --;
        }
      }
    }
# 220
    if (v_expand > 1) {
      {
# 221
      jcopy_sample_rows(output_data, outrow, output_data, outrow + 1,
                        v_expand - 1, cinfo->output_width);
      }
    }
    {
# 224
    inrow ++;
# 225
    outrow += v_expand;
    }
  }
# 227
  return;
}
}
# 235
static void h2v1_upsample(j_decompress_ptr cinfo ,
                          jpeg_component_info *compptr , JSAMPARRAY input_data ,
                          JSAMPARRAY *output_data_ptr ) 
{ JSAMPARRAY output_data ;
  register JSAMPROW inptr ;
  register JSAMPROW outptr ;
  register JSAMPLE invalue ;
  JSAMPROW outend ;
  int inrow ;
  JSAMPROW tmp ;
  JSAMPROW tmp___0 ;
  JSAMPROW tmp___1 ;

  {
  {
# 239
  output_data = (*output_data_ptr);
# 245
  inrow = 0;
  }
# 245
  while (inrow < cinfo->max_v_samp_factor) {
    {
# 246
    inptr = (*(input_data + inrow));
# 247
    outptr = (*(output_data + inrow));
# 248
    outend = outptr + cinfo->output_width;
    }
# 249
    while ((unsigned int )outptr < (unsigned int )outend) {
      {
# 250
      tmp = inptr;
# 250
      inptr ++;
# 250
      invalue = (*tmp);
# 251
      tmp___0 = outptr;
# 251
      outptr ++;
# 251
      (*tmp___0) = invalue;
# 252
      tmp___1 = outptr;
# 252
      outptr ++;
# 252
      (*tmp___1) = invalue;
      }
    }
    {
# 245
    inrow ++;
    }
  }
# 255
  return;
}
}
# 263
static void h2v2_upsample(j_decompress_ptr cinfo ,
                          jpeg_component_info *compptr , JSAMPARRAY input_data ,
                          JSAMPARRAY *output_data_ptr ) 
{ JSAMPARRAY output_data ;
  register JSAMPROW inptr ;
  register JSAMPROW outptr ;
  register JSAMPLE invalue ;
  JSAMPROW outend ;
  int inrow ;
  int outrow ;
  JSAMPROW tmp ;
  JSAMPROW tmp___0 ;
  JSAMPROW tmp___1 ;

  {
  {
# 267
  output_data = (*output_data_ptr);
# 273
  outrow = 0;
# 273
  inrow = outrow;
  }
# 274
  while (outrow < cinfo->max_v_samp_factor) {
    {
# 275
    inptr = (*(input_data + inrow));
# 276
    outptr = (*(output_data + outrow));
# 277
    outend = outptr + cinfo->output_width;
    }
# 278
    while ((unsigned int )outptr < (unsigned int )outend) {
      {
# 279
      tmp = inptr;
# 279
      inptr ++;
# 279
      invalue = (*tmp);
# 280
      tmp___0 = outptr;
# 280
      outptr ++;
# 280
      (*tmp___0) = invalue;
# 281
      tmp___1 = outptr;
# 281
      outptr ++;
# 281
      (*tmp___1) = invalue;
      }
    }
    {
# 283
    jcopy_sample_rows(output_data, outrow, output_data, outrow + 1, 1,
                      cinfo->output_width);
# 285
    inrow ++;
# 286
    outrow += 2;
    }
  }
# 288
  return;
}
}
# 306
static void h2v1_fancy_upsample(j_decompress_ptr cinfo ,
                                jpeg_component_info *compptr ,
                                JSAMPARRAY input_data ,
                                JSAMPARRAY *output_data_ptr ) 
{ JSAMPARRAY output_data ;
  register JSAMPROW inptr ;
  register JSAMPROW outptr ;
  register int invalue ;
  register JDIMENSION colctr ;
  int inrow ;
  JSAMPROW tmp ;
  JSAMPROW tmp___0 ;
  JSAMPROW tmp___1 ;
  JSAMPROW tmp___2 ;
  JSAMPROW tmp___3 ;
  JSAMPROW tmp___4 ;
  JSAMPROW tmp___5 ;
  JSAMPROW tmp___6 ;

  {
  {
# 310
  output_data = (*output_data_ptr);
# 316
  inrow = 0;
  }
# 316
  while (inrow < cinfo->max_v_samp_factor) {
    {
# 317
    inptr = (*(input_data + inrow));
# 318
    outptr = (*(output_data + inrow));
# 320
    tmp = inptr;
# 320
    inptr ++;
# 320
    invalue = (int )(*tmp);
# 321
    tmp___0 = outptr;
# 321
    outptr ++;
# 321
    (*tmp___0) = (unsigned char )invalue;
# 322
    tmp___1 = outptr;
# 322
    outptr ++;
# 322
    (*tmp___1) = (unsigned char )(((invalue * 3 + (int )(*inptr)) + 2) >> 2);
# 324
    colctr = compptr->downsampled_width - 2U;
    }
# 324
    while (colctr > 0U) {
      {
# 326
      tmp___2 = inptr;
# 326
      inptr ++;
# 326
      invalue = (int )(*tmp___2) * 3;
# 327
      tmp___3 = outptr;
# 327
      outptr ++;
# 327
      (*tmp___3) = (unsigned char )(((invalue + (int )(*(inptr + -2))) + 1) >> 2);
# 328
      tmp___4 = outptr;
# 328
      outptr ++;
# 328
      (*tmp___4) = (unsigned char )(((invalue + (int )(*inptr)) + 2) >> 2);
# 324
      colctr --;
      }
    }
    {
# 332
    invalue = (int )(*inptr);
# 333
    tmp___5 = outptr;
# 333
    outptr ++;
# 333
    (*tmp___5) = (unsigned char )(((invalue * 3 + (int )(*(inptr + -1))) + 1) >>
                                  2);
# 334
    tmp___6 = outptr;
# 334
    outptr ++;
# 334
    (*tmp___6) = (unsigned char )invalue;
# 316
    inrow ++;
    }
  }
# 336
  return;
}
}
# 347
static void h2v2_fancy_upsample(j_decompress_ptr cinfo ,
                                jpeg_component_info *compptr ,
                                JSAMPARRAY input_data ,
                                JSAMPARRAY *output_data_ptr ) 
{ JSAMPARRAY output_data ;
  register JSAMPROW inptr0 ;
  register JSAMPROW inptr1 ;
  register JSAMPROW outptr ;
  register int thiscolsum ;
  register int lastcolsum ;
  register int nextcolsum ;
  register JDIMENSION colctr ;
  int inrow ;
  int outrow ;
  int v ;
  int tmp ;
  JSAMPROW tmp___0 ;
  JSAMPROW tmp___1 ;
  JSAMPROW tmp___2 ;
  JSAMPROW tmp___3 ;
  JSAMPROW tmp___4 ;
  JSAMPROW tmp___5 ;
  JSAMPROW tmp___6 ;
  JSAMPROW tmp___7 ;
  JSAMPROW tmp___8 ;
  JSAMPROW tmp___9 ;
  JSAMPROW tmp___10 ;
  JSAMPROW tmp___11 ;

  {
  {
# 351
  output_data = (*output_data_ptr);
# 361
  outrow = 0;
# 361
  inrow = outrow;
  }
# 362
  while (outrow < cinfo->max_v_samp_factor) {
    {
# 363
    v = 0;
    }
# 363
    while (v < 2) {
      {
# 365
      inptr0 = (*(input_data + inrow));
      }
# 366
      if (v == 0) {
        {
# 367
        inptr1 = (*(input_data + (inrow - 1)));
        }
      } else {
        {
# 369
        inptr1 = (*(input_data + (inrow + 1)));
        }
      }
      {
# 370
      tmp = outrow;
# 370
      outrow ++;
# 370
      outptr = (*(output_data + tmp));
# 373
      tmp___0 = inptr0;
# 373
      inptr0 ++;
# 373
      tmp___1 = inptr1;
# 373
      inptr1 ++;
# 373
      thiscolsum = (int )(*tmp___0) * 3 + (int )(*tmp___1);
# 374
      tmp___2 = inptr0;
# 374
      inptr0 ++;
# 374
      tmp___3 = inptr1;
# 374
      inptr1 ++;
# 374
      nextcolsum = (int )(*tmp___2) * 3 + (int )(*tmp___3);
# 375
      tmp___4 = outptr;
# 375
      outptr ++;
# 375
      (*tmp___4) = (unsigned char )((thiscolsum * 4 + 8) >> 4);
# 376
      tmp___5 = outptr;
# 376
      outptr ++;
# 376
      (*tmp___5) = (unsigned char )(((thiscolsum * 3 + nextcolsum) + 7) >> 4);
# 377
      lastcolsum = thiscolsum;
# 377
      thiscolsum = nextcolsum;
# 379
      colctr = compptr->downsampled_width - 2U;
      }
# 379
      while (colctr > 0U) {
        {
# 382
        tmp___6 = inptr0;
# 382
        inptr0 ++;
# 382
        tmp___7 = inptr1;
# 382
        inptr1 ++;
# 382
        nextcolsum = (int )(*tmp___6) * 3 + (int )(*tmp___7);
# 383
        tmp___8 = outptr;
# 383
        outptr ++;
# 383
        (*tmp___8) = (unsigned char )(((thiscolsum * 3 + lastcolsum) + 8) >> 4);
# 384
        tmp___9 = outptr;
# 384
        outptr ++;
# 384
        (*tmp___9) = (unsigned char )(((thiscolsum * 3 + nextcolsum) + 7) >> 4);
# 385
        lastcolsum = thiscolsum;
# 385
        thiscolsum = nextcolsum;
# 379
        colctr --;
        }
      }
      {
# 389
      tmp___10 = outptr;
# 389
      outptr ++;
# 389
      (*tmp___10) = (unsigned char )(((thiscolsum * 3 + lastcolsum) + 8) >> 4);
# 390
      tmp___11 = outptr;
# 390
      outptr ++;
# 390
      (*tmp___11) = (unsigned char )((thiscolsum * 4 + 7) >> 4);
# 363
      v ++;
      }
    }
    {
# 392
    inrow ++;
    }
  }
# 394
  return;
}
}
# 401
void jinit_upsampler(j_decompress_ptr cinfo ) 
{ jdsample_my_upsample_ptr upsample ;
  int ci ;
  jpeg_component_info *compptr ;
  boolean need_buffer ;
  boolean do_fancy ;
  int h_in_group ;
  int v_in_group ;
  int h_out_group ;
  int v_out_group ;
  int tmp___0 ;
  JDIMENSION tmp___1 ;

  {
  {
# 410
  upsample = (jdsample_my_upsample_ptr )alloc_small_wrapper((struct jpeg_common_struct *)cinfo,
                                                            1,
                                                            sizeof(my_upsampler ));
# 413
  cinfo->upsample = (struct jpeg_upsampler */* __attribute__((__rtti__)) */)((struct jpeg_upsampler *)upsample);
# 414
  upsample->pub.start_pass = & start_pass_upsample;
# 415
  upsample->pub.upsample = & sep_upsample;
# 416
  upsample->pub.need_context_rows = 0;
  }
# 418
  if (cinfo->CCIR601_sampling) {
    {
# 419
    (cinfo->err)->msg_code = 18;
# 419
    ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
    }
  }
# 424
  if (cinfo->do_fancy_upsampling) {
# 424
    if (cinfo->min_DCT_scaled_size > 1) {
      {
# 424
      tmp___0 = 1;
      }
    } else {
      {
# 424
      tmp___0 = 0;
      }
    }
  } else {
    {
# 424
    tmp___0 = 0;
    }
  }
  {
# 424
  do_fancy = tmp___0;
# 429
  ci = 0;
# 429
  compptr = cinfo->comp_info;
  }
# 429
  while (ci < cinfo->num_components) {
    {
# 434
    h_in_group = (compptr->h_samp_factor * compptr->DCT_scaled_size) /
                 cinfo->min_DCT_scaled_size;
# 436
    v_in_group = (compptr->v_samp_factor * compptr->DCT_scaled_size) /
                 cinfo->min_DCT_scaled_size;
# 438
    h_out_group = cinfo->max_h_samp_factor;
# 439
    v_out_group = cinfo->max_v_samp_factor;
# 440
    upsample->rowgroup_height[ci] = v_in_group;
# 441
    need_buffer = 1;
    }
# 442
    if (compptr->component_needed) {
# 446
      if (h_in_group == h_out_group) {
# 446
        if (v_in_group == v_out_group) {
          {
# 448
          upsample->methods[ci] = & fullsize_upsample;
# 449
          need_buffer = 0;
          }
        } else {
          goto _L___1;
        }
      } else {
        _L___1: 
# 450
        if (h_in_group * 2 == h_out_group) {
# 450
          if (v_in_group == v_out_group) {
# 453
            if (do_fancy) {
# 453
              if (compptr->downsampled_width > 2U) {
                {
# 454
                upsample->methods[ci] = & h2v1_fancy_upsample;
                }
              } else {
                {
# 456
                upsample->methods[ci] = & h2v1_upsample;
                }
              }
            } else {
              {
# 456
              upsample->methods[ci] = & h2v1_upsample;
              }
            }
          } else {
            goto _L___0;
          }
        } else {
          _L___0: 
# 457
          if (h_in_group * 2 == h_out_group) {
# 457
            if (v_in_group * 2 == v_out_group) {
# 460
              if (do_fancy) {
# 460
                if (compptr->downsampled_width > 2U) {
                  {
# 461
                  upsample->methods[ci] = & h2v2_fancy_upsample;
# 462
                  upsample->pub.need_context_rows = 1;
                  }
                } else {
                  {
# 464
                  upsample->methods[ci] = & h2v2_upsample;
                  }
                }
              } else {
                {
# 464
                upsample->methods[ci] = & h2v2_upsample;
                }
              }
            } else {
              goto _L;
            }
          } else {
            _L: 
# 465
            if (h_out_group % h_in_group == 0) {
# 465
              if (v_out_group % v_in_group == 0) {
                {
# 468
                upsample->methods[ci] = & int_upsample;
# 469
                upsample->h_expand[ci] = (unsigned char )(h_out_group /
                                                          h_in_group);
# 470
                upsample->v_expand[ci] = (unsigned char )(v_out_group /
                                                          v_in_group);
                }
              } else {
                {
# 472
                (cinfo->err)->msg_code = 32;
# 472
                ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
                }
              }
            } else {
              {
# 472
              (cinfo->err)->msg_code = 32;
# 472
              ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
              }
            }
          }
        }
      }
    } else {
      {
# 444
      upsample->methods[ci] = & noop_upsample;
# 445
      need_buffer = 0;
      }
    }
# 473
    if (need_buffer) {
      {
# 474
      tmp___1 = (JDIMENSION )jround_up((long )cinfo->output_width,
                                       (long )cinfo->max_h_samp_factor);
# 474
      upsample->color_buf[ci] = ((*((cinfo->mem)->alloc_sarray)))((struct jpeg_common_struct *)cinfo,
                                                                  1, tmp___1,
                                                                  (unsigned int )cinfo->max_v_samp_factor);
      }
    }
    {
# 429
    ci ++;
# 429
    compptr ++;
    }
  }
# 481
  return;
}
}
# 73 "jdcolor.c"
static void ycc_rgb_start(j_decompress_ptr cinfo ) 
{ jdcolor_my_convert_ptr cconvert ;
  INT32 i ;
  INT32 x2 ;

  {
  {
# 76
  cconvert = (my_color_deconverter *)cinfo->cconvert;
# 80
  cconvert->Cr_r_tab = (int *)alloc_small_wrapper((struct jpeg_common_struct *)cinfo,
                                                  1, 256U * sizeof(int ));
# 83
  cconvert->Cb_b_tab = (int *)alloc_small_wrapper((struct jpeg_common_struct *)cinfo,
                                                  1, 256U * sizeof(int ));
# 86
  cconvert->Cr_g_tab = (INT32 *)alloc_small_wrapper((struct jpeg_common_struct *)cinfo,
                                                    1, 256U * sizeof(INT32 ));
# 89
  cconvert->Cb_g_tab = (INT32 *)alloc_small_wrapper((struct jpeg_common_struct *)cinfo,
                                                    1, 256U * sizeof(INT32 ));
# 93
  i = 0L;
  }
# 93
  while (i <= 255L) {
    {
# 96
    x2 = 2L * i - 255L;
# 98
    (*(cconvert->Cr_r_tab + i)) = (int )(((long )((1.40200 / (double )2) *
                                                  (double )65536L + 0.5) * x2 +
                                          32768L) >> 16);
# 101
    (*(cconvert->Cb_b_tab + i)) = (int )(((long )((1.77200 / (double )2) *
                                                  (double )65536L + 0.5) * x2 +
                                          32768L) >> 16);
# 104
    (*(cconvert->Cr_g_tab + i)) = - ((long )((0.71414 / (double )2) *
                                             (double )65536L + 0.5) * x2);
# 107
    (*(cconvert->Cb_g_tab + i)) = - ((long )((0.34414 / (double )2) *
                                             (double )65536L + 0.5) * x2) +
                                  32768L;
# 93
    i ++;
    }
  }
# 109
  return;
}
}
# 123
static void ycc_rgb_convert(j_decompress_ptr cinfo , JSAMPIMAGE input_buf ,
                            JDIMENSION input_row , JSAMPARRAY output_buf ,
                            int num_rows ) 
{ jdcolor_my_convert_ptr cconvert ;
  register int y ;
  register int cb ;
  register int cr ;
  register JSAMPROW outptr ;
  register JSAMPROW inptr0 ;
  register JSAMPROW inptr1 ;
  register JSAMPROW inptr2 ;
  register JDIMENSION col ;
  JDIMENSION num_cols ;
  register JSAMPLE *range_limit ;
  register int *Crrtab ;
  register int *Cbbtab ;
  register INT32 *Crgtab ;
  register INT32 *Cbgtab ;
  JSAMPARRAY tmp ;

  {
  {
# 128
  cconvert = (my_color_deconverter *)cinfo->cconvert;
# 133
  num_cols = cinfo->output_width;
# 135
  range_limit = cinfo->sample_range_limit;
# 136
  Crrtab = cconvert->Cr_r_tab;
# 137
  Cbbtab = cconvert->Cb_b_tab;
# 138
  Crgtab = cconvert->Cr_g_tab;
# 139
  Cbgtab = cconvert->Cb_g_tab;
  }
# 142
  while (1) {
    {
# 142
    num_rows --;
    }
# 142
    if (! (num_rows >= 0)) {
# 142
      break;
    }
    {
# 143
    inptr0 = (*((*(input_buf + 0)) + input_row));
# 144
    inptr1 = (*((*(input_buf + 1)) + input_row));
# 145
    inptr2 = (*((*(input_buf + 2)) + input_row));
# 146
    input_row ++;
# 147
    tmp = output_buf;
# 147
    output_buf ++;
# 147
    outptr = (*tmp);
# 148
    col = 0U;
    }
# 148
    while (col < num_cols) {
      {
# 149
      y = (int )(*(inptr0 + col));
# 150
      cb = (int )(*(inptr1 + col));
# 151
      cr = (int )(*(inptr2 + col));
# 156
      (*(outptr + 0)) = (*(range_limit + (y + (*(Crrtab + cr)))));
# 157
      (*(outptr + 1)) = (*(range_limit + (y + (int )(((*(Cbgtab + cb)) +
                                                      (*(Crgtab + cr))) >> 16))));
# 160
      (*(outptr + 2)) = (*(range_limit + (y + (*(Cbbtab + cb)))));
# 161
      outptr += 3;
# 148
      col ++;
      }
    }
  }
# 164
  return;
}
}
# 175
static void null_convert___0(j_decompress_ptr cinfo , JSAMPIMAGE input_buf ,
                             JDIMENSION input_row , JSAMPARRAY output_buf ,
                             int num_rows ) 
{ register JSAMPROW inptr ;
  register JSAMPROW outptr ;
  register JDIMENSION count ;
  register int num_components ;
  JDIMENSION num_cols ;
  int ci ;
  JSAMPROW tmp ;

  {
  {
# 182
  num_components = cinfo->output_components;
# 183
  num_cols = cinfo->output_width;
  }
# 186
  while (1) {
    {
# 186
    num_rows --;
    }
# 186
    if (! (num_rows >= 0)) {
# 186
      break;
    }
    {
# 187
    ci = 0;
    }
# 187
    while (ci < num_components) {
      {
# 188
      inptr = (*((*(input_buf + ci)) + input_row));
# 189
      outptr = (*(output_buf + 0)) + ci;
# 190
      count = num_cols;
      }
# 190
      while (count > 0U) {
        {
# 191
        tmp = inptr;
# 191
        inptr ++;
# 191
        (*outptr) = (*tmp);
# 192
        outptr += num_components;
# 190
        count --;
        }
      }
      {
# 187
      ci ++;
      }
    }
    {
# 195
    input_row ++;
# 196
    output_buf ++;
    }
  }
# 198
  return;
}
}
# 207
static void grayscale_convert___0(j_decompress_ptr cinfo ,
                                  JSAMPIMAGE input_buf , JDIMENSION input_row ,
                                  JSAMPARRAY output_buf , int num_rows ) 
{ 

  {
  {
# 212
  jcopy_sample_rows((*(input_buf + 0)), (int )input_row, output_buf, 0,
                    num_rows, cinfo->output_width);
  }
# 214
  return;
}
}
# 224
static void ycck_cmyk_convert(j_decompress_ptr cinfo , JSAMPIMAGE input_buf ,
                              JDIMENSION input_row , JSAMPARRAY output_buf ,
                              int num_rows ) 
{ jdcolor_my_convert_ptr cconvert ;
  register int y ;
  register int cb ;
  register int cr ;
  register JSAMPROW outptr ;
  register JSAMPROW inptr0 ;
  register JSAMPROW inptr1 ;
  register JSAMPROW inptr2 ;
  register JSAMPROW inptr3 ;
  register JDIMENSION col ;
  JDIMENSION num_cols ;
  register JSAMPLE *range_limit ;
  register int *Crrtab ;
  register int *Cbbtab ;
  register INT32 *Crgtab ;
  register INT32 *Cbgtab ;
  JSAMPARRAY tmp ;

  {
  {
# 229
  cconvert = (my_color_deconverter *)cinfo->cconvert;
# 234
  num_cols = cinfo->output_width;
# 236
  range_limit = cinfo->sample_range_limit;
# 237
  Crrtab = cconvert->Cr_r_tab;
# 238
  Cbbtab = cconvert->Cb_b_tab;
# 239
  Crgtab = cconvert->Cr_g_tab;
# 240
  Cbgtab = cconvert->Cb_g_tab;
  }
# 243
  while (1) {
    {
# 243
    num_rows --;
    }
# 243
    if (! (num_rows >= 0)) {
# 243
      break;
    }
    {
# 244
    inptr0 = (*((*(input_buf + 0)) + input_row));
# 245
    inptr1 = (*((*(input_buf + 1)) + input_row));
# 246
    inptr2 = (*((*(input_buf + 2)) + input_row));
# 247
    inptr3 = (*((*(input_buf + 3)) + input_row));
# 248
    input_row ++;
# 249
    tmp = output_buf;
# 249
    output_buf ++;
# 249
    outptr = (*tmp);
# 250
    col = 0U;
    }
# 250
    while (col < num_cols) {
      {
# 251
      y = (int )(*(inptr0 + col));
# 252
      cb = (int )(*(inptr1 + col));
# 253
      cr = (int )(*(inptr2 + col));
# 258
      (*(outptr + 0)) = (*(range_limit + (255 - (y + (*(Crrtab + cr))))));
# 259
      (*(outptr + 1)) = (*(range_limit +
                           (255 - (y + (int )(((*(Cbgtab + cb)) +
                                               (*(Crgtab + cr))) >> 16)))));
# 262
      (*(outptr + 2)) = (*(range_limit + (255 - (y + (*(Cbbtab + cb))))));
# 264
      (*(outptr + 3)) = (*(inptr3 + col));
# 265
      outptr += 4;
# 250
      col ++;
      }
    }
  }
# 268
  return;
}
}
# 275
static void null_method___0(j_decompress_ptr cinfo ) 
{ 

  {
# 279
  return;
}
}
# 286
void jinit_color_deconverter(j_decompress_ptr cinfo ) 
{ jdcolor_my_convert_ptr cconvert ;
  int ci ;

  {
  {
# 292
  cconvert = (jdcolor_my_convert_ptr )alloc_small_wrapper((struct jpeg_common_struct *)cinfo,
                                                          1,
                                                          sizeof(my_color_deconverter ));
# 295
  cinfo->cconvert = (struct jpeg_color_deconverter */* __attribute__((__rtti__)) */)((struct jpeg_color_deconverter *)cconvert);
# 297
  cconvert->pub.start_pass = & null_method___0;
  }
# 300
  switch (cinfo->jpeg_color_space) {
  case 1: 
  {

  }
# 302
  if (cinfo->num_components != 1) {
    {
# 303
    (cinfo->err)->msg_code = 8;
# 303
    ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
    }
  }
# 304
  break;
  case 2: 
  {

  }
  case 3: 
  {

  }
# 308
  if (cinfo->num_components != 3) {
    {
# 309
    (cinfo->err)->msg_code = 8;
# 309
    ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
    }
  }
# 310
  break;
  case 4: 
  {

  }
  case 5: 
  {

  }
# 314
  if (cinfo->num_components != 4) {
    {
# 315
    (cinfo->err)->msg_code = 8;
# 315
    ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
    }
  }
# 316
  break;
  default: 
  {

  }
# 319
  if (cinfo->num_components < 1) {
    {
# 320
    (cinfo->err)->msg_code = 8;
# 320
    ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
    }
  }
# 321
  break;
  }
# 329
  switch (cinfo->out_color_space) {
  case 1: 
  {
# 331
  cinfo->out_color_components = 1;
  }
# 332
  if (cinfo->jpeg_color_space == 1) {
    goto _L;
  } else {
# 332
    if (cinfo->jpeg_color_space == 3) {
      _L: 
      {
# 334
      cconvert->pub.color_convert = & grayscale_convert___0;
# 336
      ci = 1;
      }
# 336
      while (ci < cinfo->num_components) {
        {
# 337
        (cinfo->comp_info + ci)->component_needed = 0;
# 336
        ci ++;
        }
      }
    } else {
      {
# 339
      (cinfo->err)->msg_code = 20;
# 339
      ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
      }
    }
  }
# 340
  break;
  case 2: 
  {
# 343
  cinfo->out_color_components = 3;
  }
# 344
  if (cinfo->jpeg_color_space == 3) {
    {
# 345
    cconvert->pub.start_pass = & ycc_rgb_start;
# 346
    cconvert->pub.color_convert = & ycc_rgb_convert;
    }
  } else {
# 347
    if (cinfo->jpeg_color_space == 2) {
      {
# 348
      cconvert->pub.color_convert = & null_convert___0;
      }
    } else {
      {
# 350
      (cinfo->err)->msg_code = 20;
# 350
      ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
      }
    }
  }
# 351
  break;
  case 4: 
  {
# 354
  cinfo->out_color_components = 4;
  }
# 355
  if (cinfo->jpeg_color_space == 5) {
    {
# 356
    cconvert->pub.start_pass = & ycc_rgb_start;
# 357
    cconvert->pub.color_convert = & ycck_cmyk_convert;
    }
  } else {
# 358
    if (cinfo->jpeg_color_space == 4) {
      {
# 359
      cconvert->pub.color_convert = & null_convert___0;
      }
    } else {
      {
# 361
      (cinfo->err)->msg_code = 20;
# 361
      ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
      }
    }
  }
# 362
  break;
  default: 
  {

  }
# 366
  if (cinfo->out_color_space == cinfo->jpeg_color_space) {
    {
# 367
    cinfo->out_color_components = cinfo->num_components;
# 368
    cconvert->pub.color_convert = & null_convert___0;
    }
  } else {
    {
# 370
    (cinfo->err)->msg_code = 20;
# 370
    ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
    }
  }
# 371
  break;
  }
# 374
  if (cinfo->quantize_colors) {
    {
# 375
    cinfo->output_components = 1;
    }
  } else {
    {
# 377
    cinfo->output_components = cinfo->out_color_components;
    }
  }
# 374
  return;
}
}
# 167 "jquant1.c"
static int select_ncolors(j_decompress_ptr cinfo , int *Ncolors ) ;
# 167
static int const   RGB_order[3]   = {1, 0, 2};
# 157
static int select_ncolors(j_decompress_ptr cinfo , int *Ncolors ) 
{ int nc ;
  int max_colors ;
  int total_colors ;
  int iroot ;
  int i ;
  int j ;
  long temp ;

  {
  {
# 163
  nc = cinfo->out_color_components;
# 164
  max_colors = cinfo->desired_number_of_colors;
# 171
  iroot = 1;
  }
# 172
  while (1) {
    {
# 173
    iroot ++;
# 174
    temp = (long )iroot;
# 175
    i = 1;
    }
# 175
    while (i < nc) {
      {
# 176
      temp *= (long )iroot;
# 175
      i ++;
      }
    }
# 172
    if (! (temp <= (long )max_colors)) {
# 172
      break;
    }
  }
  {
# 178
  iroot --;
  }
# 181
  if (iroot < 2) {
    {
# 182
    (cinfo->err)->msg_code = 48;
# 182
    (cinfo->err)->msg_parm.i[0] = (int )temp;
# 182
    ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
    }
  }
  {
# 185
  total_colors = 1;
# 186
  i = 0;
  }
# 186
  while (i < nc) {
    {
# 187
    (*(Ncolors + i)) = iroot;
# 188
    total_colors *= iroot;
# 186
    i ++;
    }
  }
  {
# 194
  i = 0;
  }
# 194
  while (i < nc) {
# 195
    if (cinfo->out_color_space == 2) {
      {
# 195
      j = RGB_order[i];
      }
    } else {
      {
# 195
      j = i;
      }
    }
    {
# 197
    temp = (long )(total_colors / (*(Ncolors + j)));
# 198
    temp *= (long )((*(Ncolors + j)) + 1);
    }
# 199
    if (temp > (long )max_colors) {
# 200
      break;
    }
    {
# 201
    (*(Ncolors + j)) = (*(Ncolors + j)) + 1;
# 202
    total_colors = (int )temp;
# 194
    i ++;
    }
  }
# 205
  return (total_colors);
}
}
# 209
static int output_value(j_decompress_ptr cinfo , int ci , int j , int maxj ) 
{ 

  {
# 219
  return ((int )(((long )j * 255L + (long )(maxj / 2)) / (long )maxj));
}
}
# 223
static int largest_input_value(j_decompress_ptr cinfo , int ci , int j ,
                               int maxj ) 
{ 

  {
# 229
  return ((int )(((long )(2 * j + 1) * 255L + (long )maxj) / (long )(2 * maxj)));
}
}
# 238
static void create_colormap(j_decompress_ptr cinfo ) 
{ jquant1_my_cquantize_ptr cquantize ;
  JSAMPARRAY colormap ;
  JSAMPROW indexptr ;
  int total_colors ;
  int Ncolors[4] ;
  ODITHER_MATRIX *odither ;
  int i ;
  int j ;
  int k ;
  int nci ;
  int blksize ;
  int blkdist ;
  int ptr ;
  int val ;
  int pad ;
  int *_mp ;

  {
  {
# 241
  cquantize = (my_cquantizer *)cinfo->cquantize;
# 250
  total_colors = select_ncolors(cinfo, Ncolors);
  }
# 253
  if (cinfo->out_color_components == 3) {
# 254
    while (1) {
      {
# 254
      _mp = (cinfo->err)->msg_parm.i;
# 254
      (*(_mp + 0)) = total_colors;
# 255
      (*(_mp + 1)) = Ncolors[0];
# 255
      (*(_mp + 2)) = Ncolors[1];
# 255
      (*(_mp + 3)) = Ncolors[2];
# 255
      (cinfo->err)->msg_code = 86;
# 255
      ((*((cinfo->err)->emit_message)))((struct jpeg_common_struct *)cinfo, 1);
      }
# 254
      break;
    }
  } else {
    {
# 257
    (cinfo->err)->msg_code = 87;
# 257
    (cinfo->err)->msg_parm.i[0] = total_colors;
# 257
    ((*((cinfo->err)->emit_message)))((struct jpeg_common_struct *)cinfo, 1);
    }
  }
# 263
  if (cinfo->dither_mode == 1) {
    {
# 263
    pad = 510;
    }
  } else {
    {
# 263
    pad = 0;
    }
  }
  {
# 269
  colormap = ((*((cinfo->mem)->alloc_sarray)))((struct jpeg_common_struct *)cinfo,
                                               1, (unsigned int )total_colors,
                                               (unsigned int )cinfo->out_color_components);
# 272
  cquantize->colorindex = ((*((cinfo->mem)->alloc_sarray)))((struct jpeg_common_struct *)cinfo,
                                                            1,
                                                            (unsigned int )(256 +
                                                                            pad),
                                                            (unsigned int )cinfo->out_color_components);
# 279
  blkdist = total_colors;
# 281
  i = 0;
  }
# 281
  while (i < cinfo->out_color_components) {
    {
# 283
    nci = Ncolors[i];
# 284
    blksize = blkdist / nci;
# 285
    j = 0;
    }
# 285
    while (j < nci) {
      {
# 287
      val = output_value(cinfo, i, j, nci - 1);
# 289
      ptr = j * blksize;
      }
# 289
      while (ptr < total_colors) {
        {
# 291
        k = 0;
        }
# 291
        while (k < blksize) {
          {
# 292
          (*((*(colormap + i)) + (ptr + k))) = (unsigned char )val;
# 291
          k ++;
          }
        }
        {
# 289
        ptr += blkdist;
        }
      }
      {
# 285
      j ++;
      }
    }
    {
# 295
    blkdist = blksize;
    }
# 298
    if (pad) {
      {
# 299
      (*(cquantize->colorindex + i)) = (*(cquantize->colorindex + i)) + 255;
      }
    }
    {
# 304
    indexptr = (*(cquantize->colorindex + i));
# 305
    val = 0;
# 306
    k = largest_input_value(cinfo, i, 0, nci - 1);
# 307
    j = 0;
    }
# 307
    while (j <= 255) {
# 308
      while (j > k) {
        {
# 309
        val ++;
# 309
        k = largest_input_value(cinfo, i, val, nci - 1);
        }
      }
      {
# 311
      (*(indexptr + j)) = (unsigned char )(val * blksize);
# 307
      j ++;
      }
    }
# 314
    if (pad) {
      {
# 315
      j = 1;
      }
# 315
      while (j <= 255) {
        {
# 316
        (*(indexptr + - j)) = (*(indexptr + 0));
# 317
        (*(indexptr + (255 + j))) = (*(indexptr + 255));
# 315
        j ++;
        }
      }
    }
    {
# 281
    i ++;
    }
  }
  {
# 322
  cinfo->colormap = colormap;
# 323
  cinfo->actual_number_of_colors = total_colors;
  }
# 325
  if (cinfo->dither_mode == 1) {
    {
# 327
    odither = (ODITHER_MATRIX *)alloc_small_wrapper((struct jpeg_common_struct *)cinfo,
                                                    1,
                                                    (unsigned int )cinfo->out_color_components *
                                                    sizeof(ODITHER_MATRIX ));
# 331
    cquantize->odither = odither;
# 332
    i = 0;
    }
# 332
    while (i < cinfo->out_color_components) {
      {
# 333
      nci = Ncolors[i];
# 338
      val = 34 * (nci - 1);
# 345
      (*(odither + 0))[0][0] = 3825 / val;
# 346
      (*(odither + 0))[0][1] = - (255 / val);
# 347
      (*(odither + 0))[0][2] = 2805 / val;
# 348
      (*(odither + 0))[0][3] = - (1275 / val);
# 349
      (*(odither + 0))[1][0] = - (2295 / val);
# 350
      (*(odither + 0))[1][1] = 1785 / val;
# 351
      (*(odither + 0))[1][2] = - (3315 / val);
# 352
      (*(odither + 0))[1][3] = 765 / val;
# 353
      (*(odither + 0))[2][0] = 2295 / val;
# 354
      (*(odither + 0))[2][1] = - (1785 / val);
# 355
      (*(odither + 0))[2][2] = 3315 / val;
# 356
      (*(odither + 0))[2][3] = - (765 / val);
# 357
      (*(odither + 0))[3][0] = - (3825 / val);
# 358
      (*(odither + 0))[3][1] = 255 / val;
# 359
      (*(odither + 0))[3][2] = - (2805 / val);
# 360
      (*(odither + 0))[3][3] = 1275 / val;
# 361
      odither ++;
# 332
      i ++;
      }
    }
  }
# 364
  return;
}
}
# 371
static void color_quantize(j_decompress_ptr cinfo , JSAMPARRAY input_buf ,
                           JSAMPARRAY output_buf , int num_rows ) 
{ jquant1_my_cquantize_ptr cquantize ;
  JSAMPARRAY colorindex ;
  register int pixcode ;
  register int ci ;
  register JSAMPROW ptrin ;
  register JSAMPROW ptrout ;
  int row ;
  JDIMENSION col ;
  JDIMENSION width ;
  register int nc ;
  JSAMPROW tmp ;
  JSAMPROW tmp___0 ;

  {
  {
# 376
  cquantize = (my_cquantizer *)cinfo->cquantize;
# 377
  colorindex = cquantize->colorindex;
# 382
  width = cinfo->output_width;
# 383
  nc = cinfo->out_color_components;
# 385
  row = 0;
  }
# 385
  while (row < num_rows) {
    {
# 386
    ptrin = (*(input_buf + row));
# 387
    ptrout = (*(output_buf + row));
# 388
    col = width;
    }
# 388
    while (col > 0U) {
      {
# 389
      pixcode = 0;
# 390
      ci = 0;
      }
# 390
      while (ci < nc) {
        {
# 391
        tmp = ptrin;
# 391
        ptrin ++;
# 391
        pixcode += (int )(*((*(colorindex + ci)) + (int )(*tmp)));
# 390
        ci ++;
        }
      }
      {
# 393
      tmp___0 = ptrout;
# 393
      ptrout ++;
# 393
      (*tmp___0) = (unsigned char )pixcode;
# 388
      col --;
      }
    }
    {
# 385
    row ++;
    }
  }
# 396
  return;
}
}
# 399
static void color_quantize3(j_decompress_ptr cinfo , JSAMPARRAY input_buf ,
                            JSAMPARRAY output_buf , int num_rows ) 
{ jquant1_my_cquantize_ptr cquantize ;
  register int pixcode ;
  register JSAMPROW ptrin ;
  register JSAMPROW ptrout ;
  JSAMPROW colorindex0 ;
  JSAMPROW colorindex1 ;
  JSAMPROW colorindex2 ;
  int row ;
  JDIMENSION col ;
  JDIMENSION width ;
  JSAMPROW tmp ;
  JSAMPROW tmp___0 ;
  JSAMPROW tmp___1 ;
  JSAMPROW tmp___2 ;

  {
  {
# 404
  cquantize = (my_cquantizer *)cinfo->cquantize;
# 407
  colorindex0 = (*(cquantize->colorindex + 0));
# 408
  colorindex1 = (*(cquantize->colorindex + 1));
# 409
  colorindex2 = (*(cquantize->colorindex + 2));
# 412
  width = cinfo->output_width;
# 414
  row = 0;
  }
# 414
  while (row < num_rows) {
    {
# 415
    ptrin = (*(input_buf + row));
# 416
    ptrout = (*(output_buf + row));
# 417
    col = width;
    }
# 417
    while (col > 0U) {
      {
# 418
      tmp = ptrin;
# 418
      ptrin ++;
# 418
      pixcode = (int )(*(colorindex0 + (int )(*tmp)));
# 419
      tmp___0 = ptrin;
# 419
      ptrin ++;
# 419
      pixcode += (int )(*(colorindex1 + (int )(*tmp___0)));
# 420
      tmp___1 = ptrin;
# 420
      ptrin ++;
# 420
      pixcode += (int )(*(colorindex2 + (int )(*tmp___1)));
# 421
      tmp___2 = ptrout;
# 421
      ptrout ++;
# 421
      (*tmp___2) = (unsigned char )pixcode;
# 417
      col --;
      }
    }
    {
# 414
    row ++;
    }
  }
# 424
  return;
}
}
# 427
static void quantize_ord_dither(j_decompress_ptr cinfo , JSAMPARRAY input_buf ,
                                JSAMPARRAY output_buf , int num_rows ) 
{ jquant1_my_cquantize_ptr cquantize ;
  register JSAMPROW input_ptr ;
  register JSAMPROW output_ptr ;
  JSAMPROW colorindex_ci ;
  int *dither ;
  int row_index ;
  int col_index ;
  int nc ;
  int ci ;
  int row ;
  JDIMENSION col ;
  JDIMENSION width ;

  {
  {
# 432
  cquantize = (my_cquantizer *)cinfo->cquantize;
# 438
  nc = cinfo->out_color_components;
# 442
  width = cinfo->output_width;
# 444
  row = 0;
  }
# 444
  while (row < num_rows) {
    {
# 446
    jzero_far((void *)(*(output_buf + row)), width * sizeof(JSAMPLE ));
# 448
    row_index = cquantize->row_index;
# 449
    ci = 0;
    }
# 449
    while (ci < nc) {
      {
# 450
      input_ptr = (*(input_buf + row)) + ci;
# 451
      output_ptr = (*(output_buf + row));
# 452
      colorindex_ci = (*(cquantize->colorindex + ci));
# 453
      dither = (*(cquantize->odither + ci))[row_index];
# 454
      col_index = 0;
# 456
      col = width;
      }
# 456
      while (col > 0U) {
        {
# 464
        (*output_ptr) = (unsigned char )((int )(*output_ptr) +
                                         (int )(*(colorindex_ci +
                                                  ((int )(*input_ptr) +
                                                   (*(dither + col_index))))));
# 465
        input_ptr += nc;
# 466
        output_ptr ++;
# 467
        col_index = (col_index + 1) & 3;
# 456
        col --;
        }
      }
      {
# 449
      ci ++;
      }
    }
    {
# 471
    row_index = (row_index + 1) & 3;
# 472
    cquantize->row_index = row_index;
# 444
    row ++;
    }
  }
# 474
  return;
}
}
# 477
static void quantize3_ord_dither(j_decompress_ptr cinfo , JSAMPARRAY input_buf ,
                                 JSAMPARRAY output_buf , int num_rows ) 
{ jquant1_my_cquantize_ptr cquantize ;
  register int pixcode ;
  register JSAMPROW input_ptr ;
  register JSAMPROW output_ptr ;
  JSAMPROW colorindex0 ;
  JSAMPROW colorindex1 ;
  JSAMPROW colorindex2 ;
  int *dither0 ;
  int *dither1 ;
  int *dither2 ;
  int row_index ;
  int col_index ;
  int row ;
  JDIMENSION col ;
  JDIMENSION width ;
  JSAMPROW tmp ;
  JSAMPROW tmp___0 ;
  JSAMPROW tmp___1 ;
  JSAMPROW tmp___2 ;

  {
  {
# 482
  cquantize = (my_cquantizer *)cinfo->cquantize;
# 486
  colorindex0 = (*(cquantize->colorindex + 0));
# 487
  colorindex1 = (*(cquantize->colorindex + 1));
# 488
  colorindex2 = (*(cquantize->colorindex + 2));
# 495
  width = cinfo->output_width;
# 497
  row = 0;
  }
# 497
  while (row < num_rows) {
    {
# 498
    row_index = cquantize->row_index;
# 499
    input_ptr = (*(input_buf + row));
# 500
    output_ptr = (*(output_buf + row));
# 501
    dither0 = (*(cquantize->odither + 0))[row_index];
# 502
    dither1 = (*(cquantize->odither + 1))[row_index];
# 503
    dither2 = (*(cquantize->odither + 2))[row_index];
# 504
    col_index = 0;
# 506
    col = width;
    }
# 506
    while (col > 0U) {
      {
# 507
      tmp = input_ptr;
# 507
      input_ptr ++;
# 507
      pixcode = (int )(*(colorindex0 + ((int )(*tmp) + (*(dither0 + col_index)))));
# 509
      tmp___0 = input_ptr;
# 509
      input_ptr ++;
# 509
      pixcode += (int )(*(colorindex1 + ((int )(*tmp___0) +
                                         (*(dither1 + col_index)))));
# 511
      tmp___1 = input_ptr;
# 511
      input_ptr ++;
# 511
      pixcode += (int )(*(colorindex2 + ((int )(*tmp___1) +
                                         (*(dither2 + col_index)))));
# 513
      tmp___2 = output_ptr;
# 513
      output_ptr ++;
# 513
      (*tmp___2) = (unsigned char )pixcode;
# 514
      col_index = (col_index + 1) & 3;
# 506
      col --;
      }
    }
    {
# 516
    row_index = (row_index + 1) & 3;
# 517
    cquantize->row_index = row_index;
# 497
    row ++;
    }
  }
# 519
  return;
}
}
# 522
static void quantize_fs_dither(j_decompress_ptr cinfo , JSAMPARRAY input_buf ,
                               JSAMPARRAY output_buf , int num_rows ) 
{ jquant1_my_cquantize_ptr cquantize ;
  register LOCFSERROR cur ;
  LOCFSERROR belowerr ;
  LOCFSERROR bpreverr ;
  LOCFSERROR bnexterr ;
  LOCFSERROR delta ;
  register FSERRPTR errorptr ;
  register JSAMPROW input_ptr ;
  register JSAMPROW output_ptr ;
  JSAMPROW colorindex_ci ;
  JSAMPROW colormap_ci ;
  int pixcode ;
  int nc ;
  int dir ;
  int dirnc ;
  int ci ;
  int row ;
  JDIMENSION col ;
  JDIMENSION width ;
  JSAMPLE *range_limit ;

  {
  {
# 527
  cquantize = (my_cquantizer *)cinfo->cquantize;
# 539
  nc = cinfo->out_color_components;
# 545
  width = cinfo->output_width;
# 546
  range_limit = cinfo->sample_range_limit;
# 549
  row = 0;
  }
# 549
  while (row < num_rows) {
    {
# 551
    jzero_far((void *)(*(output_buf + row)), width * sizeof(JSAMPLE ));
# 553
    ci = 0;
    }
# 553
    while (ci < nc) {
      {
# 554
      input_ptr = (*(input_buf + row)) + ci;
# 555
      output_ptr = (*(output_buf + row));
      }
# 556
      if (cquantize->on_odd_row) {
        {
# 558
        input_ptr += (width - 1U) * (unsigned int )nc;
# 559
        output_ptr += width - 1U;
# 560
        dir = -1;
# 561
        dirnc = - nc;
# 562
        errorptr = cquantize->fserrors[ci] + (width + 1U);
        }
      } else {
        {
# 565
        dir = 1;
# 566
        dirnc = nc;
# 567
        errorptr = cquantize->fserrors[ci];
        }
      }
      {
# 569
      colorindex_ci = (*(cquantize->colorindex + ci));
# 570
      colormap_ci = (*(cinfo->colormap + ci));
# 572
      cur = 0;
# 574
      bpreverr = 0;
# 574
      belowerr = bpreverr;
# 576
      col = width;
      }
# 576
      while (col > 0U) {
        {
# 585
        cur = ((cur + (int )(*(errorptr + dir))) + 8) >> 4;
# 590
        cur += (int )(*input_ptr);
# 591
        cur = (int )(*(range_limit + cur));
# 593
        pixcode = (int )(*(colorindex_ci + cur));
# 594
        (*output_ptr) = (unsigned char )((int )(*output_ptr) +
                                         (int )((unsigned char )pixcode));
# 598
        cur -= (int )(*(colormap_ci + pixcode));
# 603
        bnexterr = cur;
# 604
        delta = cur * 2;
# 605
        cur += delta;
# 606
        (*(errorptr + 0)) = (short )(bpreverr + cur);
# 607
        cur += delta;
# 608
        bpreverr = belowerr + cur;
# 609
        belowerr = bnexterr;
# 610
        cur += delta;
# 615
        input_ptr += dirnc;
# 616
        output_ptr += dir;
# 617
        errorptr += dir;
# 576
        col --;
        }
      }
      {
# 623
      (*(errorptr + 0)) = (short )bpreverr;
# 553
      ci ++;
      }
    }
# 625
    if (cquantize->on_odd_row) {
      {
# 625
      cquantize->on_odd_row = 0;
      }
    } else {
      {
# 625
      cquantize->on_odd_row = 1;
      }
    }
    {
# 549
    row ++;
    }
  }
# 627
  return;
}
}
# 634
static void start_pass_1_quant(j_decompress_ptr cinfo , boolean is_pre_scan ) 
{ 

  {
# 638
  return;
}
}
# 645
static void finish_pass_1_quant(j_decompress_ptr cinfo ) 
{ 

  {
# 649
  return;
}
}
# 656
void jinit_1pass_quantizer(j_decompress_ptr cinfo ) 
{ jquant1_my_cquantize_ptr cquantize ;
  size_t arraysize ;
  int i ;

  {
  {
# 663
  cquantize = (jquant1_my_cquantize_ptr )alloc_small_wrapper((struct jpeg_common_struct *)cinfo,
                                                             1,
                                                             sizeof(my_cquantizer ));
# 666
  cinfo->cquantize = (struct jpeg_color_quantizer */* __attribute__((__rtti__)) */)((struct jpeg_color_quantizer *)cquantize);
# 667
  cquantize->pub.start_pass = & start_pass_1_quant;
# 668
  cquantize->pub.finish_pass = & finish_pass_1_quant;
  }
# 671
  if (cinfo->out_color_components > 4) {
    {
# 672
    (cinfo->err)->msg_code = 47;
# 672
    (cinfo->err)->msg_parm.i[0] = 4;
# 672
    ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
    }
  }
# 674
  if (cinfo->desired_number_of_colors > 256) {
    {
# 675
    (cinfo->err)->msg_code = 49;
# 675
    (cinfo->err)->msg_parm.i[0] = 256;
# 675
    ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
    }
  }
# 678
  switch (cinfo->dither_mode) {
  case 0: 
  {

  }
# 680
  if (cinfo->out_color_components == 3) {
    {
# 681
    cquantize->pub.color_quantize = & color_quantize3;
    }
  } else {
    {
# 683
    cquantize->pub.color_quantize = & color_quantize;
    }
  }
# 684
  break;
  case 1: 
  {

  }
# 686
  if (cinfo->out_color_components == 3) {
    {
# 687
    cquantize->pub.color_quantize = & quantize3_ord_dither;
    }
  } else {
    {
# 689
    cquantize->pub.color_quantize = & quantize_ord_dither;
    }
  }
  {
# 690
  cquantize->row_index = 0;
  }
# 691
  break;
  case 2: 
  {
# 693
  cquantize->pub.color_quantize = & quantize_fs_dither;
# 694
  cquantize->on_odd_row = 0;
# 698
  arraysize = (cinfo->output_width + 2U) * sizeof(FSERROR );
# 699
  i = 0;
  }
# 699
  while (i < cinfo->out_color_components) {
    {
# 700
    cquantize->fserrors[i] = (FSERRPTR )alloc_large_wrapper((struct jpeg_common_struct *)cinfo,
                                                            1, arraysize);
# 704
    jzero_far((void *)cquantize->fserrors[i], arraysize);
# 699
    i ++;
    }
  }
# 706
  break;
  default: 
  {
# 708
  (cinfo->err)->msg_code = 40;
# 708
  ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
  }
# 709
  break;
  }
  {
# 713
  create_colormap(cinfo);
  }
# 713
  return;
}
}
# 220 "jquant2.c"
static void prescan_quantize(j_decompress_ptr cinfo , JSAMPARRAY input_buf ,
                             JSAMPARRAY output_buf , int num_rows ) 
{ jquant2_my_cquantize_ptr cquantize ;
  register JSAMPROW ptr ;
  register histptr histp ;
  register hist3d histogram___0 ;
  int row ;
  JDIMENSION col ;
  JDIMENSION width ;

  {
  {
# 224
  cquantize = (my_cquantizer_2 *)cinfo->cquantize;
# 227
  histogram___0 = cquantize->histogram;
# 230
  width = cinfo->output_width;
# 232
  row = 0;
  }
# 232
  while (row < num_rows) {
    {
# 233
    ptr = (*(input_buf + row));
# 234
    col = width;
    }
# 234
    while (col > 0U) {
      {
# 236
      histp = & (*((*(histogram___0 + ((int )(*(ptr + 0)) >> 3))) +
                   ((int )(*(ptr + 1)) >> 2)))[(int )(*(ptr + 2)) >> 3];
# 240
      (*histp) = (unsigned short )((int )(*histp) + 1);
      }
# 240
      if ((int )(*histp) <= 0) {
        {
# 241
        (*histp) = (unsigned short )((int )(*histp) - 1);
        }
      }
      {
# 242
      ptr += 3;
# 234
      col --;
      }
    }
    {
# 232
    row ++;
    }
  }
# 245
  return;
}
}
# 269
static boxptr find_biggest_color_pop(boxptr boxlist , int numboxes ) 
{ register boxptr boxp ;
  register int i ;
  register long maxc ;
  boxptr which ;

  {
  {
# 276
  maxc = 0L;
# 277
  which = (box *)((void *)0);
# 279
  i = 0;
# 279
  boxp = boxlist;
  }
# 279
  while (i < numboxes) {
# 280
    if (boxp->colorcount > maxc) {
# 280
      if (boxp->volume > 0L) {
        {
# 281
        which = boxp;
# 282
        maxc = boxp->colorcount;
        }
      }
    }
    {
# 279
    i ++;
# 279
    boxp ++;
    }
  }
# 285
  return (which);
}
}
# 289
static boxptr find_biggest_volume(boxptr boxlist , int numboxes ) 
{ register boxptr boxp ;
  register int i ;
  register INT32 maxv ;
  boxptr which ;

  {
  {
# 296
  maxv = (long )0;
# 297
  which = (box *)((void *)0);
# 299
  i = 0;
# 299
  boxp = boxlist;
  }
# 299
  while (i < numboxes) {
# 300
    if (boxp->volume > maxv) {
      {
# 301
      which = boxp;
# 302
      maxv = boxp->volume;
      }
    }
    {
# 299
    i ++;
# 299
    boxp ++;
    }
  }
# 305
  return (which);
}
}
# 309
static void update_box(j_decompress_ptr cinfo , boxptr boxp ) 
{ jquant2_my_cquantize_ptr cquantize ;
  hist3d histogram___0 ;
  histptr histp ;
  int c0 ;
  int c1 ;
  int c2 ;
  int c0min ;
  int c0max ;
  int c1min ;
  int c1max ;
  int c2min ;
  int c2max ;
  INT32 dist0 ;
  INT32 dist1 ;
  INT32 dist2 ;
  long ccount ;
  histptr tmp ;
  histptr tmp___0 ;
  histptr tmp___1 ;
  histptr tmp___2 ;

  {
  {
# 314
  cquantize = (my_cquantizer_2 *)cinfo->cquantize;
# 315
  histogram___0 = cquantize->histogram;
# 322
  c0min = boxp->c0min;
# 322
  c0max = boxp->c0max;
# 323
  c1min = boxp->c1min;
# 323
  c1max = boxp->c1max;
# 324
  c2min = boxp->c2min;
# 324
  c2max = boxp->c2max;
  }
# 326
  if (c0max > c0min) {
    {
# 327
    c0 = c0min;
    }
# 327
    while (c0 <= c0max) {
      {
# 328
      c1 = c1min;
      }
# 328
      while (c1 <= c1max) {
        {
# 329
        histp = & (*((*(histogram___0 + c0)) + c1))[c2min];
# 330
        c2 = c2min;
        }
# 330
        while (c2 <= c2max) {
          {
# 331
          tmp = histp;
# 331
          histp ++;
          }
# 331
          if ((int )(*tmp) != 0) {
            {
# 332
            c0min = c0;
# 332
            boxp->c0min = c0min;
            }
            goto have_c0min;
          }
          {
# 330
          c2 ++;
          }
        }
        {
# 328
        c1 ++;
        }
      }
      {
# 327
      c0 ++;
      }
    }
  }
  have_c0min: 
# 337
  if (c0max > c0min) {
    {
# 338
    c0 = c0max;
    }
# 338
    while (c0 >= c0min) {
      {
# 339
      c1 = c1min;
      }
# 339
      while (c1 <= c1max) {
        {
# 340
        histp = & (*((*(histogram___0 + c0)) + c1))[c2min];
# 341
        c2 = c2min;
        }
# 341
        while (c2 <= c2max) {
          {
# 342
          tmp___0 = histp;
# 342
          histp ++;
          }
# 342
          if ((int )(*tmp___0) != 0) {
            {
# 343
            c0max = c0;
# 343
            boxp->c0max = c0max;
            }
            goto have_c0max;
          }
          {
# 341
          c2 ++;
          }
        }
        {
# 339
        c1 ++;
        }
      }
      {
# 338
      c0 --;
      }
    }
  }
  have_c0max: 
# 348
  if (c1max > c1min) {
    {
# 349
    c1 = c1min;
    }
# 349
    while (c1 <= c1max) {
      {
# 350
      c0 = c0min;
      }
# 350
      while (c0 <= c0max) {
        {
# 351
        histp = & (*((*(histogram___0 + c0)) + c1))[c2min];
# 352
        c2 = c2min;
        }
# 352
        while (c2 <= c2max) {
          {
# 353
          tmp___1 = histp;
# 353
          histp ++;
          }
# 353
          if ((int )(*tmp___1) != 0) {
            {
# 354
            c1min = c1;
# 354
            boxp->c1min = c1min;
            }
            goto have_c1min;
          }
          {
# 352
          c2 ++;
          }
        }
        {
# 350
        c0 ++;
        }
      }
      {
# 349
      c1 ++;
      }
    }
  }
  have_c1min: 
# 359
  if (c1max > c1min) {
    {
# 360
    c1 = c1max;
    }
# 360
    while (c1 >= c1min) {
      {
# 361
      c0 = c0min;
      }
# 361
      while (c0 <= c0max) {
        {
# 362
        histp = & (*((*(histogram___0 + c0)) + c1))[c2min];
# 363
        c2 = c2min;
        }
# 363
        while (c2 <= c2max) {
          {
# 364
          tmp___2 = histp;
# 364
          histp ++;
          }
# 364
          if ((int )(*tmp___2) != 0) {
            {
# 365
            c1max = c1;
# 365
            boxp->c1max = c1max;
            }
            goto have_c1max;
          }
          {
# 363
          c2 ++;
          }
        }
        {
# 361
        c0 ++;
        }
      }
      {
# 360
      c1 --;
      }
    }
  }
  have_c1max: 
# 370
  if (c2max > c2min) {
    {
# 371
    c2 = c2min;
    }
# 371
    while (c2 <= c2max) {
      {
# 372
      c0 = c0min;
      }
# 372
      while (c0 <= c0max) {
        {
# 373
        histp = & (*((*(histogram___0 + c0)) + c1min))[c2];
# 374
        c1 = c1min;
        }
# 374
        while (c1 <= c1max) {
# 375
          if ((int )(*histp) != 0) {
            {
# 376
            c2min = c2;
# 376
            boxp->c2min = c2min;
            }
            goto have_c2min;
          }
          {
# 374
          c1 ++;
# 374
          histp += 32;
          }
        }
        {
# 372
        c0 ++;
        }
      }
      {
# 371
      c2 ++;
      }
    }
  }
  have_c2min: 
# 381
  if (c2max > c2min) {
    {
# 382
    c2 = c2max;
    }
# 382
    while (c2 >= c2min) {
      {
# 383
      c0 = c0min;
      }
# 383
      while (c0 <= c0max) {
        {
# 384
        histp = & (*((*(histogram___0 + c0)) + c1min))[c2];
# 385
        c1 = c1min;
        }
# 385
        while (c1 <= c1max) {
# 386
          if ((int )(*histp) != 0) {
            {
# 387
            c2max = c2;
# 387
            boxp->c2max = c2max;
            }
            goto have_c2max;
          }
          {
# 385
          c1 ++;
# 385
          histp += 32;
          }
        }
        {
# 383
        c0 ++;
        }
      }
      {
# 382
      c2 --;
      }
    }
  }
  have_c2max: 
  {
# 401
  dist0 = (long )(((c0max - c0min) << 3) * 2);
# 402
  dist1 = (long )(((c1max - c1min) << 2) * 3);
# 403
  dist2 = (long )(((c2max - c2min) << 3) * 1);
# 404
  boxp->volume = (dist0 * dist0 + dist1 * dist1) + dist2 * dist2;
# 407
  ccount = 0L;
# 408
  c0 = c0min;
  }
# 408
  while (c0 <= c0max) {
    {
# 409
    c1 = c1min;
    }
# 409
    while (c1 <= c1max) {
      {
# 410
      histp = & (*((*(histogram___0 + c0)) + c1))[c2min];
# 411
      c2 = c2min;
      }
# 411
      while (c2 <= c2max) {
# 412
        if ((int )(*histp) != 0) {
          {
# 413
          ccount ++;
          }
        }
        {
# 411
        c2 ++;
# 411
        histp ++;
        }
      }
      {
# 409
      c1 ++;
      }
    }
    {
# 408
    c0 ++;
    }
  }
  {
# 416
  boxp->colorcount = ccount;
  }
# 417
  return;
}
}
# 420
static int median_cut(j_decompress_ptr cinfo , boxptr boxlist , int numboxes ,
                      int desired_colors ) 
{ int n ;
  int lb ;
  int c0 ;
  int c1 ;
  int c2 ;
  int cmax ;
  register boxptr b1 ;
  register boxptr b2 ;

  {
# 429
  while (numboxes < desired_colors) {
# 433
    if (numboxes * 2 <= desired_colors) {
      {
# 434
      b1 = find_biggest_color_pop(boxlist, numboxes);
      }
    } else {
      {
# 436
      b1 = find_biggest_volume(boxlist, numboxes);
      }
    }
# 438
    if ((unsigned int )b1 == (unsigned int )((void *)0)) {
# 439
      break;
    }
    {
# 440
    b2 = boxlist + numboxes;
# 442
    b2->c0max = b1->c0max;
# 442
    b2->c1max = b1->c1max;
# 442
    b2->c2max = b1->c2max;
# 443
    b2->c0min = b1->c0min;
# 443
    b2->c1min = b1->c1min;
# 443
    b2->c2min = b1->c2min;
# 448
    c0 = ((b1->c0max - b1->c0min) << 3) * 2;
# 449
    c1 = ((b1->c1max - b1->c1min) << 2) * 3;
# 450
    c2 = ((b1->c2max - b1->c2min) << 3) * 1;
# 455
    cmax = c1;
# 455
    n = 1;
    }
# 456
    if (c0 > cmax) {
      {
# 456
      cmax = c0;
# 456
      n = 0;
      }
    }
# 457
    if (c2 > cmax) {
      {
# 457
      n = 2;
      }
    }
# 469
    switch (n) {
    case 0: 
    {
# 471
    lb = (b1->c0max + b1->c0min) / 2;
# 472
    b1->c0max = lb;
# 473
    b2->c0min = lb + 1;
    }
# 474
    break;
    case 1: 
    {
# 476
    lb = (b1->c1max + b1->c1min) / 2;
# 477
    b1->c1max = lb;
# 478
    b2->c1min = lb + 1;
    }
# 479
    break;
    case 2: 
    {
# 481
    lb = (b1->c2max + b1->c2min) / 2;
# 482
    b1->c2max = lb;
# 483
    b2->c2min = lb + 1;
    }
# 484
    break;
    }
    {
# 487
    update_box(cinfo, b1);
# 488
    update_box(cinfo, b2);
# 489
    numboxes ++;
    }
  }
# 491
  return (numboxes);
}
}
# 495
static void compute_color(j_decompress_ptr cinfo , boxptr boxp , int icolor ) 
{ jquant2_my_cquantize_ptr cquantize ;
  hist3d histogram___0 ;
  histptr histp ;
  int c0 ;
  int c1 ;
  int c2 ;
  int c0min ;
  int c0max ;
  int c1min ;
  int c1max ;
  int c2min ;
  int c2max ;
  long count ;
  long total ;
  long c0total ;
  long c1total ;
  long c2total ;
  histptr tmp ;

  {
  {
# 501
  cquantize = (my_cquantizer_2 *)cinfo->cquantize;
# 502
  histogram___0 = cquantize->histogram;
# 507
  total = 0L;
# 508
  c0total = 0L;
# 509
  c1total = 0L;
# 510
  c2total = 0L;
# 512
  c0min = boxp->c0min;
# 512
  c0max = boxp->c0max;
# 513
  c1min = boxp->c1min;
# 513
  c1max = boxp->c1max;
# 514
  c2min = boxp->c2min;
# 514
  c2max = boxp->c2max;
# 516
  c0 = c0min;
  }
# 516
  while (c0 <= c0max) {
    {
# 517
    c1 = c1min;
    }
# 517
    while (c1 <= c1max) {
      {
# 518
      histp = & (*((*(histogram___0 + c0)) + c1))[c2min];
# 519
      c2 = c2min;
      }
# 519
      while (c2 <= c2max) {
        {
# 520
        tmp = histp;
# 520
        histp ++;
# 520
        count = (long )(*tmp);
        }
# 520
        if (count != 0L) {
          {
# 521
          total += count;
# 522
          c0total += (long )((c0 << 3) + 4) * count;
# 523
          c1total += (long )((c1 << 2) + 2) * count;
# 524
          c2total += (long )((c2 << 3) + 4) * count;
          }
        }
        {
# 519
        c2 ++;
        }
      }
      {
# 517
      c1 ++;
      }
    }
    {
# 516
    c0 ++;
    }
  }
  {
# 529
  (*((*(cinfo->colormap + 0)) + icolor)) = (unsigned char )((c0total +
                                                             (total >> 1)) /
                                                            total);
# 530
  (*((*(cinfo->colormap + 1)) + icolor)) = (unsigned char )((c1total +
                                                             (total >> 1)) /
                                                            total);
# 531
  (*((*(cinfo->colormap + 2)) + icolor)) = (unsigned char )((c2total +
                                                             (total >> 1)) /
                                                            total);
  }
# 532
  return;
}
}
# 535
static void select_colors(j_decompress_ptr cinfo ) 
{ boxptr boxlist ;
  int numboxes ;
  int desired ;
  int i ;

  {
  {
# 541
  desired = cinfo->desired_number_of_colors;
# 545
  boxlist = (boxptr )alloc_small_wrapper((struct jpeg_common_struct *)cinfo, 1,
                                         (unsigned int )desired * sizeof(box ));
# 549
  numboxes = 1;
# 550
  (boxlist + 0)->c0min = 0;
# 551
  (boxlist + 0)->c0max = 31;
# 552
  (boxlist + 0)->c1min = 0;
# 553
  (boxlist + 0)->c1max = 63;
# 554
  (boxlist + 0)->c2min = 0;
# 555
  (boxlist + 0)->c2max = 31;
# 557
  update_box(cinfo, boxlist + 0);
# 559
  numboxes = median_cut(cinfo, boxlist, numboxes, desired);
# 561
  i = 0;
  }
# 561
  while (i < numboxes) {
    {
# 562
    compute_color(cinfo, boxlist + i, i);
# 561
    i ++;
    }
  }
  {
# 563
  cinfo->actual_number_of_colors = numboxes;
# 564
  (cinfo->err)->msg_code = 88;
# 564
  (cinfo->err)->msg_parm.i[0] = numboxes;
# 564
  ((*((cinfo->err)->emit_message)))((struct jpeg_common_struct *)cinfo, 1);
  }
# 565
  return;
}
}
# 644
static int find_nearby_colors(j_decompress_ptr cinfo , int minc0 , int minc1 ,
                              int minc2 , JSAMPLE *colorlist ) 
{ int numcolors ;
  int maxc0 ;
  int maxc1 ;
  int maxc2 ;
  int centerc0 ;
  int centerc1 ;
  int centerc2 ;
  int i ;
  int x ;
  int ncolors ;
  INT32 minmaxdist ;
  INT32 min_dist ;
  INT32 max_dist ;
  INT32 tdist ;
  INT32 mindist[256] ;
  int tmp ;

  {
  {
# 656
  numcolors = cinfo->actual_number_of_colors;
# 669
  maxc0 = minc0 + 24;
# 670
  centerc0 = (minc0 + maxc0) >> 1;
# 671
  maxc1 = minc1 + 28;
# 672
  centerc1 = (minc1 + maxc1) >> 1;
# 673
  maxc2 = minc2 + 24;
# 674
  centerc2 = (minc2 + maxc2) >> 1;
# 684
  minmaxdist = 2147483647L;
# 686
  i = 0;
  }
# 686
  while (i < numcolors) {
    {
# 688
    x = (int )(*((*(cinfo->colormap + 0)) + i));
    }
# 689
    if (x < minc0) {
      {
# 690
      tdist = (long )((x - minc0) * 2);
# 691
      min_dist = tdist * tdist;
# 692
      tdist = (long )((x - maxc0) * 2);
# 693
      max_dist = tdist * tdist;
      }
    } else {
# 694
      if (x > maxc0) {
        {
# 695
        tdist = (long )((x - maxc0) * 2);
# 696
        min_dist = tdist * tdist;
# 697
        tdist = (long )((x - minc0) * 2);
# 698
        max_dist = tdist * tdist;
        }
      } else {
        {
# 701
        min_dist = 0L;
        }
# 702
        if (x <= centerc0) {
          {
# 703
          tdist = (long )((x - maxc0) * 2);
# 704
          max_dist = tdist * tdist;
          }
        } else {
          {
# 706
          tdist = (long )((x - minc0) * 2);
# 707
          max_dist = tdist * tdist;
          }
        }
      }
    }
    {
# 711
    x = (int )(*((*(cinfo->colormap + 1)) + i));
    }
# 712
    if (x < minc1) {
      {
# 713
      tdist = (long )((x - minc1) * 3);
# 714
      min_dist += tdist * tdist;
# 715
      tdist = (long )((x - maxc1) * 3);
# 716
      max_dist += tdist * tdist;
      }
    } else {
# 717
      if (x > maxc1) {
        {
# 718
        tdist = (long )((x - maxc1) * 3);
# 719
        min_dist += tdist * tdist;
# 720
        tdist = (long )((x - minc1) * 3);
# 721
        max_dist += tdist * tdist;
        }
      } else {
# 724
        if (x <= centerc1) {
          {
# 725
          tdist = (long )((x - maxc1) * 3);
# 726
          max_dist += tdist * tdist;
          }
        } else {
          {
# 728
          tdist = (long )((x - minc1) * 3);
# 729
          max_dist += tdist * tdist;
          }
        }
      }
    }
    {
# 733
    x = (int )(*((*(cinfo->colormap + 2)) + i));
    }
# 734
    if (x < minc2) {
      {
# 735
      tdist = (long )((x - minc2) * 1);
# 736
      min_dist += tdist * tdist;
# 737
      tdist = (long )((x - maxc2) * 1);
# 738
      max_dist += tdist * tdist;
      }
    } else {
# 739
      if (x > maxc2) {
        {
# 740
        tdist = (long )((x - maxc2) * 1);
# 741
        min_dist += tdist * tdist;
# 742
        tdist = (long )((x - minc2) * 1);
# 743
        max_dist += tdist * tdist;
        }
      } else {
# 746
        if (x <= centerc2) {
          {
# 747
          tdist = (long )((x - maxc2) * 1);
# 748
          max_dist += tdist * tdist;
          }
        } else {
          {
# 750
          tdist = (long )((x - minc2) * 1);
# 751
          max_dist += tdist * tdist;
          }
        }
      }
    }
    {
# 755
    mindist[i] = min_dist;
    }
# 756
    if (max_dist < minmaxdist) {
      {
# 757
      minmaxdist = max_dist;
      }
    }
    {
# 686
    i ++;
    }
  }
  {
# 764
  ncolors = 0;
# 765
  i = 0;
  }
# 765
  while (i < numcolors) {
# 766
    if (mindist[i] <= minmaxdist) {
      {
# 767
      tmp = ncolors;
# 767
      ncolors ++;
# 767
      (*(colorlist + tmp)) = (unsigned char )i;
      }
    }
    {
# 765
    i ++;
    }
  }
# 769
  return (ncolors);
}
}
# 773
static void find_best_colors(j_decompress_ptr cinfo , int minc0 , int minc1 ,
                             int minc2 , int numcolors , JSAMPLE *colorlist ,
                             JSAMPLE *bestcolor ) 
{ int ic0 ;
  int ic1 ;
  int ic2 ;
  int i ;
  int icolor ;
  register INT32 *bptr ;
  JSAMPLE *cptr ;
  INT32 dist0 ;
  INT32 dist1 ;
  register INT32 dist2 ;
  INT32 xx0 ;
  INT32 xx1 ;
  register INT32 xx2 ;
  INT32 inc0 ;
  INT32 inc1 ;
  INT32 inc2 ;
  INT32 bestdist[128] ;
  INT32 *tmp ;

  {
  {
# 796
  bptr = bestdist;
# 797
  i = 127;
  }
# 797
  while (i >= 0) {
    {
# 798
    tmp = bptr;
# 798
    bptr ++;
# 798
    (*tmp) = 2147483647L;
# 797
    i --;
    }
  }
  {
# 810
  i = 0;
  }
# 810
  while (i < numcolors) {
    {
# 811
    icolor = (int )(*(colorlist + i));
# 813
    inc0 = (long )((minc0 - (int )(*((*(cinfo->colormap + 0)) + icolor))) * 2);
# 814
    dist0 = inc0 * inc0;
# 815
    inc1 = (long )((minc1 - (int )(*((*(cinfo->colormap + 1)) + icolor))) * 3);
# 816
    dist0 += inc1 * inc1;
# 817
    inc2 = (long )((minc2 - (int )(*((*(cinfo->colormap + 2)) + icolor))) * 1);
# 818
    dist0 += inc2 * inc2;
# 820
    inc0 = inc0 * 32L + 256L;
# 821
    inc1 = inc1 * 24L + 144L;
# 822
    inc2 = inc2 * 16L + 64L;
# 824
    bptr = bestdist;
# 825
    cptr = bestcolor;
# 826
    xx0 = inc0;
# 827
    ic0 = 3;
    }
# 827
    while (ic0 >= 0) {
      {
# 828
      dist1 = dist0;
# 829
      xx1 = inc1;
# 830
      ic1 = 7;
      }
# 830
      while (ic1 >= 0) {
        {
# 831
        dist2 = dist1;
# 832
        xx2 = inc2;
# 833
        ic2 = 3;
        }
# 833
        while (ic2 >= 0) {
# 834
          if (dist2 < (*bptr)) {
            {
# 835
            (*bptr) = dist2;
# 836
            (*cptr) = (unsigned char )icolor;
            }
          }
          {
# 838
          dist2 += xx2;
# 839
          xx2 += 128L;
# 840
          bptr ++;
# 841
          cptr ++;
# 833
          ic2 --;
          }
        }
        {
# 843
        dist1 += xx1;
# 844
        xx1 += 288L;
# 830
        ic1 --;
        }
      }
      {
# 846
      dist0 += xx0;
# 847
      xx0 += 512L;
# 827
      ic0 --;
      }
    }
    {
# 810
    i ++;
    }
  }
# 850
  return;
}
}
# 853
static void fill_inverse_cmap(j_decompress_ptr cinfo , int c0 , int c1 , int c2 ) 
{ jquant2_my_cquantize_ptr cquantize ;
  hist3d histogram___0 ;
  int minc0 ;
  int minc1 ;
  int minc2 ;
  int ic0 ;
  int ic1 ;
  int ic2 ;
  register JSAMPLE *cptr ;
  register histptr cachep ;
  JSAMPLE colorlist[256] ;
  int numcolors ;
  JSAMPLE bestcolor[128] ;
  histptr tmp ;
  JSAMPLE *tmp___0 ;

  {
  {
# 859
  cquantize = (my_cquantizer_2 *)cinfo->cquantize;
# 860
  histogram___0 = cquantize->histogram;
# 872
  c0 >>= 2;
# 873
  c1 >>= 3;
# 874
  c2 >>= 2;
# 880
  minc0 = (c0 << 5) + 4;
# 881
  minc1 = (c1 << 5) + 2;
# 882
  minc2 = (c2 << 5) + 4;
# 887
  numcolors = find_nearby_colors(cinfo, minc0, minc1, minc2, colorlist);
# 890
  find_best_colors(cinfo, minc0, minc1, minc2, numcolors, colorlist, bestcolor);
# 894
  c0 <<= 2;
# 895
  c1 <<= 3;
# 896
  c2 <<= 2;
# 897
  cptr = bestcolor;
# 898
  ic0 = 0;
  }
# 898
  while (ic0 < 4) {
    {
# 899
    ic1 = 0;
    }
# 899
    while (ic1 < 8) {
      {
# 900
      cachep = & (*((*(histogram___0 + (c0 + ic0))) + (c1 + ic1)))[c2];
# 901
      ic2 = 0;
      }
# 901
      while (ic2 < 4) {
        {
# 902
        tmp = cachep;
# 902
        cachep ++;
# 902
        tmp___0 = cptr;
# 902
        cptr ++;
# 902
        (*tmp) = (unsigned short )((int )(*tmp___0) + 1);
# 901
        ic2 ++;
        }
      }
      {
# 899
      ic1 ++;
      }
    }
    {
# 898
    ic0 ++;
    }
  }
# 906
  return;
}
}
# 913
static void pass2_no_dither(j_decompress_ptr cinfo , JSAMPARRAY input_buf ,
                            JSAMPARRAY output_buf , int num_rows ) 
{ jquant2_my_cquantize_ptr cquantize ;
  hist3d histogram___0 ;
  register JSAMPROW inptr ;
  register JSAMPROW outptr ;
  register histptr cachep ;
  register int c0 ;
  register int c1 ;
  register int c2 ;
  int row ;
  JDIMENSION col ;
  JDIMENSION width ;
  JSAMPROW tmp ;
  JSAMPROW tmp___0 ;
  JSAMPROW tmp___1 ;
  JSAMPROW tmp___2 ;

  {
  {
# 918
  cquantize = (my_cquantizer_2 *)cinfo->cquantize;
# 919
  histogram___0 = cquantize->histogram;
# 925
  width = cinfo->output_width;
# 927
  row = 0;
  }
# 927
  while (row < num_rows) {
    {
# 928
    inptr = (*(input_buf + row));
# 929
    outptr = (*(output_buf + row));
# 930
    col = width;
    }
# 930
    while (col > 0U) {
      {
# 932
      tmp = inptr;
# 932
      inptr ++;
# 932
      c0 = (int )(*tmp) >> 3;
# 933
      tmp___0 = inptr;
# 933
      inptr ++;
# 933
      c1 = (int )(*tmp___0) >> 2;
# 934
      tmp___1 = inptr;
# 934
      inptr ++;
# 934
      c2 = (int )(*tmp___1) >> 3;
# 935
      cachep = & (*((*(histogram___0 + c0)) + c1))[c2];
      }
# 938
      if ((int )(*cachep) == 0) {
        {
# 939
        fill_inverse_cmap(cinfo, c0, c1, c2);
        }
      }
      {
# 941
      tmp___2 = outptr;
# 941
      outptr ++;
# 941
      (*tmp___2) = (unsigned char )((int )(*cachep) - 1);
# 930
      col --;
      }
    }
    {
# 927
    row ++;
    }
  }
# 944
  return;
}
}
# 947
static void pass2_fs_dither(j_decompress_ptr cinfo , JSAMPARRAY input_buf ,
                            JSAMPARRAY output_buf , int num_rows ) 
{ jquant2_my_cquantize_ptr cquantize ;
  hist3d histogram___0 ;
  register LOCFSERROR cur0 ;
  register LOCFSERROR cur1 ;
  register LOCFSERROR cur2 ;
  LOCFSERROR belowerr0 ;
  LOCFSERROR belowerr1 ;
  LOCFSERROR belowerr2 ;
  LOCFSERROR bpreverr0 ;
  LOCFSERROR bpreverr1 ;
  LOCFSERROR bpreverr2 ;
  register FSERRPTR errorptr ;
  JSAMPROW inptr ;
  JSAMPROW outptr ;
  histptr cachep ;
  int dir ;
  int dir3 ;
  int row ;
  JDIMENSION col ;
  JDIMENSION width ;
  JSAMPLE *range_limit ;
  int *error_limit ;
  JSAMPROW colormap0 ;
  JSAMPROW colormap1 ;
  JSAMPROW colormap2 ;
  register int pixcode ;
  register LOCFSERROR bnexterr ;
  register LOCFSERROR delta ;

  {
  {
# 952
  cquantize = (my_cquantizer_2 *)cinfo->cquantize;
# 953
  histogram___0 = cquantize->histogram;
# 965
  width = cinfo->output_width;
# 966
  range_limit = cinfo->sample_range_limit;
# 967
  error_limit = cquantize->error_limiter;
# 968
  colormap0 = (*(cinfo->colormap + 0));
# 969
  colormap1 = (*(cinfo->colormap + 1));
# 970
  colormap2 = (*(cinfo->colormap + 2));
# 973
  row = 0;
  }
# 973
  while (row < num_rows) {
    {
# 974
    inptr = (*(input_buf + row));
# 975
    outptr = (*(output_buf + row));
    }
# 976
    if (cquantize->on_odd_row) {
      {
# 978
      inptr += (width - 1U) * 3U;
# 979
      outptr += width - 1U;
# 980
      dir = -1;
# 981
      dir3 = -3;
# 982
      errorptr = cquantize->fserrors + (width + 1U) * 3U;
# 983
      cquantize->on_odd_row = 0;
      }
    } else {
      {
# 986
      dir = 1;
# 987
      dir3 = 3;
# 988
      errorptr = cquantize->fserrors;
# 989
      cquantize->on_odd_row = 1;
      }
    }
    {
# 992
    cur2 = 0;
# 992
    cur1 = cur2;
# 992
    cur0 = cur1;
# 994
    belowerr2 = 0;
# 994
    belowerr1 = belowerr2;
# 994
    belowerr0 = belowerr1;
# 995
    bpreverr2 = 0;
# 995
    bpreverr1 = bpreverr2;
# 995
    bpreverr0 = bpreverr1;
# 997
    col = width;
    }
# 997
    while (col > 0U) {
      {
# 1006
      cur0 = ((cur0 + (int )(*(errorptr + dir3))) + 8) >> 4;
# 1007
      cur1 = ((cur1 + (int )(*(errorptr + (dir3 + 1)))) + 8) >> 4;
# 1008
      cur2 = ((cur2 + (int )(*(errorptr + (dir3 + 2)))) + 8) >> 4;
# 1012
      cur0 = (*(error_limit + cur0));
# 1013
      cur1 = (*(error_limit + cur1));
# 1014
      cur2 = (*(error_limit + cur2));
# 1019
      cur0 += (int )(*(inptr + 0));
# 1020
      cur1 += (int )(*(inptr + 1));
# 1021
      cur2 += (int )(*(inptr + 2));
# 1022
      cur0 = (int )(*(range_limit + cur0));
# 1023
      cur1 = (int )(*(range_limit + cur1));
# 1024
      cur2 = (int )(*(range_limit + cur2));
# 1026
      cachep = & (*((*(histogram___0 + (cur0 >> 3))) + (cur1 >> 2)))[cur2 >> 3];
      }
# 1029
      if ((int )(*cachep) == 0) {
        {
# 1030
        fill_inverse_cmap(cinfo, cur0 >> 3, cur1 >> 2, cur2 >> 3);
        }
      }
      {
# 1032
      pixcode = (int )(*cachep) - 1;
# 1033
      (*outptr) = (unsigned char )pixcode;
# 1035
      cur0 -= (int )(*(colormap0 + pixcode));
# 1036
      cur1 -= (int )(*(colormap1 + pixcode));
# 1037
      cur2 -= (int )(*(colormap2 + pixcode));
# 1045
      bnexterr = cur0;
# 1046
      delta = cur0 * 2;
# 1047
      cur0 += delta;
# 1048
      (*(errorptr + 0)) = (short )(bpreverr0 + cur0);
# 1049
      cur0 += delta;
# 1050
      bpreverr0 = belowerr0 + cur0;
# 1051
      belowerr0 = bnexterr;
# 1052
      cur0 += delta;
# 1053
      bnexterr = cur1;
# 1054
      delta = cur1 * 2;
# 1055
      cur1 += delta;
# 1056
      (*(errorptr + 1)) = (short )(bpreverr1 + cur1);
# 1057
      cur1 += delta;
# 1058
      bpreverr1 = belowerr1 + cur1;
# 1059
      belowerr1 = bnexterr;
# 1060
      cur1 += delta;
# 1061
      bnexterr = cur2;
# 1062
      delta = cur2 * 2;
# 1063
      cur2 += delta;
# 1064
      (*(errorptr + 2)) = (short )(bpreverr2 + cur2);
# 1065
      cur2 += delta;
# 1066
      bpreverr2 = belowerr2 + cur2;
# 1067
      belowerr2 = bnexterr;
# 1068
      cur2 += delta;
# 1074
      inptr += dir3;
# 1075
      outptr += dir;
# 1076
      errorptr += dir3;
# 997
      col --;
      }
    }
    {
# 1082
    (*(errorptr + 0)) = (short )bpreverr0;
# 1083
    (*(errorptr + 1)) = (short )bpreverr1;
# 1084
    (*(errorptr + 2)) = (short )bpreverr2;
# 973
    row ++;
    }
  }
# 1086
  return;
}
}
# 1106
static void init_error_limit(j_decompress_ptr cinfo ) 
{ jquant2_my_cquantize_ptr cquantize ;
  int *table ;
  int in ;
  int out ;
  int tmp___0 ;

  {
  {
# 1110
  cquantize = (my_cquantizer_2 *)cinfo->cquantize;
# 1114
  table = (int *)alloc_small_wrapper((struct jpeg_common_struct *)cinfo, 1,
                                     511U * sizeof(int ));
# 1117
  table += 255;
# 1118
  cquantize->error_limiter = table;
# 1122
  out = 0;
# 1123
  in = 0;
  }
# 1123
  while (in < 16) {
    {
# 1124
    (*(table + in)) = out;
# 1124
    (*(table + - in)) = - out;
# 1123
    in ++;
# 1123
    out ++;
    }
  }
# 1127
  while (in < 48) {
    {
# 1128
    (*(table + in)) = out;
# 1128
    (*(table + - in)) = - out;
# 1127
    in ++;
    }
# 1127
    if (in & 1) {
      {
# 1127
      tmp___0 = 0;
      }
    } else {
      {
# 1127
      tmp___0 = 1;
      }
    }
    {
# 1127
    out += tmp___0;
    }
  }
# 1131
  while (in <= 255) {
    {
# 1132
    (*(table + in)) = out;
# 1132
    (*(table + - in)) = - out;
# 1131
    in ++;
    }
  }
# 1135
  return;
}
}
# 1142
static void finish_pass1(j_decompress_ptr cinfo ) 
{ 

  {
  {
# 1146
  select_colors(cinfo);
  }
# 1147
  return;
}
}
# 1150
static void finish_pass2(j_decompress_ptr cinfo ) 
{ 

  {
# 1154
  return;
}
}
# 1161
static void start_pass_2_quant(j_decompress_ptr cinfo , boolean is_pre_scan ) 
{ jquant2_my_cquantize_ptr cquantize ;
  hist3d histogram___0 ;
  int i ;

  {
  {
# 1164
  cquantize = (my_cquantizer_2 *)cinfo->cquantize;
# 1165
  histogram___0 = cquantize->histogram;
  }
# 1168
  if (is_pre_scan) {
    {
# 1170
    cquantize->pub.color_quantize = & prescan_quantize;
# 1171
    cquantize->pub.finish_pass = & finish_pass1;
    }
  } else {
# 1174
    if (cinfo->dither_mode == 2) {
      {
# 1175
      cquantize->pub.color_quantize = & pass2_fs_dither;
      }
    } else {
      {
# 1177
      cquantize->pub.color_quantize = & pass2_no_dither;
      }
    }
    {
# 1178
    cquantize->pub.finish_pass = & finish_pass2;
    }
  }
  {
# 1181
  i = 0;
  }
# 1181
  while (i < 32) {
    {
# 1182
    jzero_far((void *)(*(histogram___0 + i)), 2048U * sizeof(histcell ));
# 1181
    i ++;
    }
  }
# 1185
  return;
}
}
# 1192
void jinit_2pass_quantizer(j_decompress_ptr cinfo ) 
{ jquant2_my_cquantize_ptr cquantize ;
  int i ;
  size_t arraysize ;

  {
  {
# 1198
  cquantize = (jquant2_my_cquantize_ptr )alloc_small_wrapper((struct jpeg_common_struct *)cinfo,
                                                             1,
                                                             sizeof(my_cquantizer_2 ));
# 1201
  cinfo->cquantize = (struct jpeg_color_quantizer */* __attribute__((__rtti__)) */)((struct jpeg_color_quantizer *)cquantize);
# 1202
  cquantize->pub.start_pass = & start_pass_2_quant;
  }
# 1205
  if (cinfo->out_color_components != 3) {
    {
# 1206
    (cinfo->err)->msg_code = 39;
# 1206
    ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
    }
  }
# 1210
  if (cinfo->dither_mode != 0) {
    {
# 1211
    cinfo->dither_mode = 2;
    }
  }
# 1214
  if ((unsigned int )cinfo->colormap != (unsigned int )((void *)0)) {
    {
# 1214
    i = cinfo->actual_number_of_colors;
    }
  } else {
    {
# 1214
    i = cinfo->desired_number_of_colors;
    }
  }
# 1217
  if (i < 8) {
    {
# 1218
    (cinfo->err)->msg_code = 48;
# 1218
    (cinfo->err)->msg_parm.i[0] = 8;
# 1218
    ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
    }
  }
# 1220
  if (i > 256) {
    {
# 1221
    (cinfo->err)->msg_code = 49;
# 1221
    (cinfo->err)->msg_parm.i[0] = 256;
# 1221
    ((*((cinfo->err)->error_exit)))((struct jpeg_common_struct *)cinfo);
    }
  }
  {
# 1224
  cquantize->histogram = (hist3d )alloc_small_wrapper((struct jpeg_common_struct *)cinfo,
                                                      1,
                                                      32U *
                                                      sizeof((*(cquantize->histogram))));
# 1228
  i = 0;
  }
# 1228
  while (i < 32) {
    {
# 1229
    (*(cquantize->histogram + i)) = (hist2d )alloc_large_wrapper((struct jpeg_common_struct *)cinfo,
                                                                 1,
                                                                 2048U *
                                                                 sizeof(histcell ));
# 1228
    i ++;
    }
  }
# 1240
  if ((unsigned int )cinfo->colormap == (unsigned int )((void *)0)) {
    {
# 1241
    cinfo->colormap = ((*((cinfo->mem)->alloc_sarray)))((struct jpeg_common_struct *)cinfo,
                                                        1,
                                                        (unsigned int )cinfo->desired_number_of_colors,
                                                        3U);
    }
  }
# 1248
  if (cinfo->dither_mode == 2) {
    {
# 1249
    arraysize = (cinfo->output_width + 2U) * (3U * sizeof(FSERROR ));
# 1252
    cquantize->fserrors = (FSERRPTR )alloc_large_wrapper((struct jpeg_common_struct *)cinfo,
                                                         1, arraysize);
# 1256
    jzero_far((void *)cquantize->fserrors, arraysize);
# 1257
    cquantize->on_odd_row = 0;
# 1258
    init_error_limit(cinfo);
    }
  }
# 1260
  return;
}
}
# 85 "jdmerge.c"
static void start_pass_merged_upsample(j_decompress_ptr cinfo ) 
{ jdmerge_my_upsample_ptr upsample ;
  INT32 i ;
  INT32 x2 ;

  {
  {
# 88
  upsample = (my_upsampler_merge *)cinfo->upsample;
# 93
  upsample->spare_full = 0;
# 95
  upsample->rows_to_go = cinfo->output_height;
# 100
  upsample->Cr_r_tab = (int *)alloc_small_wrapper((struct jpeg_common_struct *)cinfo,
                                                  1, 256U * sizeof(int ));
# 103
  upsample->Cb_b_tab = (int *)alloc_small_wrapper((struct jpeg_common_struct *)cinfo,
                                                  1, 256U * sizeof(int ));
# 106
  upsample->Cr_g_tab = (INT32 *)alloc_small_wrapper((struct jpeg_common_struct *)cinfo,
                                                    1, 256U * sizeof(INT32 ));
# 109
  upsample->Cb_g_tab = (INT32 *)alloc_small_wrapper((struct jpeg_common_struct *)cinfo,
                                                    1, 256U * sizeof(INT32 ));
# 113
  i = 0L;
  }
# 113
  while (i <= 255L) {
    {
# 116
    x2 = 2L * i - 255L;
# 118
    (*(upsample->Cr_r_tab + i)) = (int )(((long )((1.40200 / (double )2) *
                                                  (double )65536L + 0.5) * x2 +
                                          32768L) >> 16);
# 121
    (*(upsample->Cb_b_tab + i)) = (int )(((long )((1.77200 / (double )2) *
                                                  (double )65536L + 0.5) * x2 +
                                          32768L) >> 16);
# 124
    (*(upsample->Cr_g_tab + i)) = - ((long )((0.71414 / (double )2) *
                                             (double )65536L + 0.5) * x2);
# 127
    (*(upsample->Cb_g_tab + i)) = - ((long )((0.34414 / (double )2) *
                                             (double )65536L + 0.5) * x2) +
                                  32768L;
# 113
    i ++;
    }
  }
# 129
  return;
}
}
# 138
static void merged_2v_upsample(j_decompress_ptr cinfo , JSAMPIMAGE input_buf ,
                               JDIMENSION *in_row_group_ctr ,
                               JDIMENSION in_row_groups_avail ,
                               JSAMPARRAY output_buf , JDIMENSION *out_row_ctr ,
                               JDIMENSION out_rows_avail ) 
{ jdmerge_my_upsample_ptr upsample ;
  JSAMPROW work_ptrs[2] ;
  JDIMENSION num_rows ;

  {
  {
# 146
  upsample = (my_upsampler_merge *)cinfo->upsample;
  }
# 150
  if (upsample->spare_full) {
    {
# 152
    jcopy_sample_rows(& upsample->spare_row, 0, output_buf + (*out_row_ctr), 0,
                      1, upsample->out_row_width);
# 154
    num_rows = 1U;
# 155
    upsample->spare_full = 0;
    }
  } else {
    {
# 158
    num_rows = 2U;
    }
# 160
    if (num_rows > upsample->rows_to_go) {
      {
# 161
      num_rows = upsample->rows_to_go;
      }
    }
    {
# 163
    out_rows_avail -= (*out_row_ctr);
    }
# 164
    if (num_rows > out_rows_avail) {
      {
# 165
      num_rows = out_rows_avail;
      }
    }
    {
# 167
    work_ptrs[0] = (*(output_buf + (*out_row_ctr)));
    }
# 168
    if (num_rows > 1U) {
      {
# 169
      work_ptrs[1] = (*(output_buf + ((*out_row_ctr) + 1U)));
      }
    } else {
      {
# 171
      work_ptrs[1] = upsample->spare_row;
# 172
      upsample->spare_full = 1;
      }
    }
    {
# 175
    ((*(upsample->upmethod)))(cinfo, input_buf, (*in_row_group_ctr), work_ptrs);
    }
  }
  {
# 179
  (*out_row_ctr) += num_rows;
# 180
  upsample->rows_to_go -= num_rows;
  }
# 182
  if (! upsample->spare_full) {
    {
# 183
    (*in_row_group_ctr) ++;
    }
  }
# 184
  return;
}
}
# 187
static void merged_1v_upsample(j_decompress_ptr cinfo , JSAMPIMAGE input_buf ,
                               JDIMENSION *in_row_group_ctr ,
                               JDIMENSION in_row_groups_avail ,
                               JSAMPARRAY output_buf , JDIMENSION *out_row_ctr ,
                               JDIMENSION out_rows_avail ) 
{ jdmerge_my_upsample_ptr upsample ;

  {
  {
# 195
  upsample = (my_upsampler_merge *)cinfo->upsample;
# 198
  ((*(upsample->upmethod)))(cinfo, input_buf, (*in_row_group_ctr),
                            output_buf + (*out_row_ctr));
# 201
  (*out_row_ctr) ++;
# 202
  (*in_row_group_ctr) ++;
  }
# 203
  return;
}
}
# 220
static void h2v1_merged_upsample(j_decompress_ptr cinfo , JSAMPIMAGE input_buf ,
                                 JDIMENSION in_row_group_ctr ,
                                 JSAMPARRAY output_buf ) 
{ jdmerge_my_upsample_ptr upsample ;
  register int y ;
  register int cred ;
  register int cgreen ;
  register int cblue ;
  int cb ;
  int cr ;
  register JSAMPROW outptr ;
  JSAMPROW inptr0 ;
  JSAMPROW inptr1 ;
  JSAMPROW inptr2 ;
  JDIMENSION col ;
  register JSAMPLE *range_limit ;
  int *Crrtab ;
  int *Cbbtab ;
  INT32 *Crgtab ;
  INT32 *Cbgtab ;
  JSAMPROW tmp ;
  JSAMPROW tmp___0 ;
  JSAMPROW tmp___1 ;
  JSAMPROW tmp___2 ;

  {
  {
# 225
  upsample = (my_upsampler_merge *)cinfo->upsample;
# 232
  range_limit = cinfo->sample_range_limit;
# 233
  Crrtab = upsample->Cr_r_tab;
# 234
  Cbbtab = upsample->Cb_b_tab;
# 235
  Crgtab = upsample->Cr_g_tab;
# 236
  Cbgtab = upsample->Cb_g_tab;
# 239
  inptr0 = (*((*(input_buf + 0)) + in_row_group_ctr));
# 240
  inptr1 = (*((*(input_buf + 1)) + in_row_group_ctr));
# 241
  inptr2 = (*((*(input_buf + 2)) + in_row_group_ctr));
# 242
  outptr = (*(output_buf + 0));
# 244
  col = cinfo->output_width >> 1;
  }
# 244
  while (col > 0U) {
    {
# 246
    tmp = inptr1;
# 246
    inptr1 ++;
# 246
    cb = (int )(*tmp);
# 247
    tmp___0 = inptr2;
# 247
    inptr2 ++;
# 247
    cr = (int )(*tmp___0);
# 248
    cred = (*(Crrtab + cr));
# 249
    cgreen = (int )(((*(Cbgtab + cb)) + (*(Crgtab + cr))) >> 16);
# 250
    cblue = (*(Cbbtab + cb));
# 252
    tmp___1 = inptr0;
# 252
    inptr0 ++;
# 252
    y = (int )(*tmp___1);
# 253
    (*(outptr + 0)) = (*(range_limit + (y + cred)));
# 254
    (*(outptr + 1)) = (*(range_limit + (y + cgreen)));
# 255
    (*(outptr + 2)) = (*(range_limit + (y + cblue)));
# 256
    outptr += 3;
# 257
    tmp___2 = inptr0;
# 257
    inptr0 ++;
# 257
    y = (int )(*tmp___2);
# 258
    (*(outptr + 0)) = (*(range_limit + (y + cred)));
# 259
    (*(outptr + 1)) = (*(range_limit + (y + cgreen)));
# 260
    (*(outptr + 2)) = (*(range_limit + (y + cblue)));
# 261
    outptr += 3;
# 244
    col --;
    }
  }
# 264
  if (cinfo->output_width & 1U) {
    {
# 265
    cb = (int )(*inptr1);
# 266
    cr = (int )(*inptr2);
# 267
    cred = (*(Crrtab + cr));
# 268
    cgreen = (int )(((*(Cbgtab + cb)) + (*(Crgtab + cr))) >> 16);
# 269
    cblue = (*(Cbbtab + cb));
# 270
    y = (int )(*inptr0);
# 271
    (*(outptr + 0)) = (*(range_limit + (y + cred)));
# 272
    (*(outptr + 1)) = (*(range_limit + (y + cgreen)));
# 273
    (*(outptr + 2)) = (*(range_limit + (y + cblue)));
    }
  }
# 275
  return;
}
}
# 282
static void h2v2_merged_upsample(j_decompress_ptr cinfo , JSAMPIMAGE input_buf ,
                                 JDIMENSION in_row_group_ctr ,
                                 JSAMPARRAY output_buf ) 
{ jdmerge_my_upsample_ptr upsample ;
  register int y ;
  register int cred ;
  register int cgreen ;
  register int cblue ;
  int cb ;
  int cr ;
  register JSAMPROW outptr0 ;
  register JSAMPROW outptr1 ;
  JSAMPROW inptr00 ;
  JSAMPROW inptr01 ;
  JSAMPROW inptr1 ;
  JSAMPROW inptr2 ;
  JDIMENSION col ;
  register JSAMPLE *range_limit ;
  int *Crrtab ;
  int *Cbbtab ;
  INT32 *Crgtab ;
  INT32 *Cbgtab ;
  JSAMPROW tmp ;
  JSAMPROW tmp___0 ;
  JSAMPROW tmp___1 ;
  JSAMPROW tmp___2 ;
  JSAMPROW tmp___3 ;
  JSAMPROW tmp___4 ;

  {
  {
# 287
  upsample = (my_upsampler_merge *)cinfo->upsample;
# 294
  range_limit = cinfo->sample_range_limit;
# 295
  Crrtab = upsample->Cr_r_tab;
# 296
  Cbbtab = upsample->Cb_b_tab;
# 297
  Crgtab = upsample->Cr_g_tab;
# 298
  Cbgtab = upsample->Cb_g_tab;
# 301
  inptr00 = (*((*(input_buf + 0)) + in_row_group_ctr * 2U));
# 302
  inptr01 = (*((*(input_buf + 0)) + (in_row_group_ctr * 2U + 1U)));
# 303
  inptr1 = (*((*(input_buf + 1)) + in_row_group_ctr));
# 304
  inptr2 = (*((*(input_buf + 2)) + in_row_group_ctr));
# 305
  outptr0 = (*(output_buf + 0));
# 306
  outptr1 = (*(output_buf + 1));
# 308
  col = cinfo->output_width >> 1;
  }
# 308
  while (col > 0U) {
    {
# 310
    tmp = inptr1;
# 310
    inptr1 ++;
# 310
    cb = (int )(*tmp);
# 311
    tmp___0 = inptr2;
# 311
    inptr2 ++;
# 311
    cr = (int )(*tmp___0);
# 312
    cred = (*(Crrtab + cr));
# 313
    cgreen = (int )(((*(Cbgtab + cb)) + (*(Crgtab + cr))) >> 16);
# 314
    cblue = (*(Cbbtab + cb));
# 316
    tmp___1 = inptr00;
# 316
    inptr00 ++;
# 316
    y = (int )(*tmp___1);
# 317
    (*(outptr0 + 0)) = (*(range_limit + (y + cred)));
# 318
    (*(outptr0 + 1)) = (*(range_limit + (y + cgreen)));
# 319
    (*(outptr0 + 2)) = (*(range_limit + (y + cblue)));
# 320
    outptr0 += 3;
# 321
    tmp___2 = inptr00;
# 321
    inptr00 ++;
# 321
    y = (int )(*tmp___2);
# 322
    (*(outptr0 + 0)) = (*(range_limit + (y + cred)));
# 323
    (*(outptr0 + 1)) = (*(range_limit + (y + cgreen)));
# 324
    (*(outptr0 + 2)) = (*(range_limit + (y + cblue)));
# 325
    outptr0 += 3;
# 326
    tmp___3 = inptr01;
# 326
    inptr01 ++;
# 326
    y = (int )(*tmp___3);
# 327
    (*(outptr1 + 0)) = (*(range_limit + (y + cred)));
# 328
    (*(outptr1 + 1)) = (*((range_limit + y) + cgreen));
# 329
    (*(outptr1 + 2)) = (*(range_limit + (y + cblue)));
# 330
    outptr1 += 3;
# 331
    tmp___4 = inptr01;
# 331
    inptr01 ++;
# 331
    y = (int )(*tmp___4);
# 332
    (*(outptr1 + 0)) = (*(range_limit + (y + cred)));
# 333
    (*(outptr1 + 1)) = (*(range_limit + (y + cgreen)));
# 334
    (*(outptr1 + 2)) = (*(range_limit + (y + cblue)));
# 335
    outptr1 += 3;
# 308
    col --;
    }
  }
# 338
  if (cinfo->output_width & 1U) {
    {
# 339
    cb = (int )(*inptr1);
# 340
    cr = (int )(*inptr2);
# 341
    cred = (*(Crrtab + cr));
# 342
    cgreen = (int )(((*(Cbgtab + cb)) + (*(Crgtab + cr))) >> 16);
# 343
    cblue = (*(Cbbtab + cb));
# 344
    y = (int )(*inptr00);
# 345
    (*(outptr0 + 0)) = (*(range_limit + (y + cred)));
# 346
    (*(outptr0 + 1)) = (*(range_limit + (y + cgreen)));
# 347
    (*(outptr0 + 2)) = (*(range_limit + (y + cblue)));
# 348
    y = (int )(*inptr01);
# 349
    (*(outptr1 + 0)) = (*(range_limit + (y + cred)));
# 350
    (*(outptr1 + 1)) = (*(range_limit + (y + cgreen)));
# 351
    (*(outptr1 + 2)) = (*(range_limit + (y + cblue)));
    }
  }
# 353
  return;
}
}
# 364
void jinit_merged_upsampler(j_decompress_ptr cinfo ) 
{ jdmerge_my_upsample_ptr upsample ;

  {
  {
# 369
  upsample = (jdmerge_my_upsample_ptr )alloc_small_wrapper((struct jpeg_common_struct *)cinfo,
                                                           1,
                                                           sizeof(my_upsampler_merge ));
# 372
  cinfo->upsample = (struct jpeg_upsampler */* __attribute__((__rtti__)) */)((struct jpeg_upsampler *)upsample);
# 373
  upsample->pub.start_pass = & start_pass_merged_upsample;
# 374
  upsample->pub.need_context_rows = 0;
# 376
  upsample->out_row_width = cinfo->output_width *
                            (unsigned int )cinfo->out_color_components;
  }
# 378
  if (cinfo->max_v_samp_factor == 2) {
    {
# 379
    upsample->pub.upsample = & merged_2v_upsample;
# 380
    upsample->upmethod = & h2v2_merged_upsample;
# 382
    upsample->spare_row = (JSAMPROW )alloc_large_wrapper((struct jpeg_common_struct *)cinfo,
                                                         1,
                                                         upsample->out_row_width *
                                                         sizeof(JSAMPLE ));
    }
  } else {
    {
# 387
    upsample->pub.upsample = & merged_1v_upsample;
# 388
    upsample->upmethod = & h2v1_merged_upsample;
# 390
    upsample->spare_row = (JSAMPLE *)((void *)0);
    }
  }
# 392
  return;
}
}
# 28 "jcomapi.c"
void jpeg_abort(j_common_ptr cinfo ) 
{ int pool ;

  {
  {
# 36
  pool = 1;
  }
# 36
  while (pool > 0) {
    {
# 37
    ((*((cinfo->mem)->free_pool)))(cinfo, pool);
# 36
    pool --;
    }
  }
# 41
  if (cinfo->is_decompressor) {
    {
# 41
    cinfo->global_state = 200;
    }
  } else {
    {
# 41
    cinfo->global_state = 100;
    }
  }
# 42
  return;
}
}
# 56
void jpeg_destroy(j_common_ptr cinfo ) 
{ 

  {
# 61
  if ((unsigned int )cinfo->mem != (unsigned int )((void *)0)) {
    {
# 62
    ((*((cinfo->mem)->self_destruct)))(cinfo);
    }
  }
  {
# 63
  cinfo->mem = (struct jpeg_memory_mgr */* __attribute__((__rtti__)) */)((struct jpeg_memory_mgr *)((void *)0));
# 64
  cinfo->global_state = 0;
  }
# 65
  return;
}
}
# 73
JQUANT_TBL *jpeg_alloc_quant_table(j_common_ptr cinfo ) 
{ JQUANT_TBL *tbl ;

  {
  {
# 78
  tbl = (JQUANT_TBL *)alloc_small_wrapper(cinfo, 0, sizeof(JQUANT_TBL ));
# 81
  tbl->sent_table = 0;
  }
# 82
  return (tbl);
}
}
# 86
JHUFF_TBL *jpeg_alloc_huff_table(j_common_ptr cinfo ) 
{ JHUFF_TBL *tbl ;

  {
  {
# 91
  tbl = (JHUFF_TBL *)alloc_small_wrapper(cinfo, 0, sizeof(JHUFF_TBL ));
# 94
  tbl->sent_table = 0;
  }
# 95
  return (tbl);
}
}
# 23 "jutils.c"
long jdiv_round_up(long a , long b ) 
{ 

  {
# 28
  return (((a + b) - 1L) / b);
}
}
# 32
long jround_up(long a , long b ) 
{ 

  {
  {
# 37
  a += b - 1L;
  }
# 38
  return (a - a % b);
}
}
# 62
void jcopy_sample_rows(JSAMPARRAY input_array , int source_row ,
                       JSAMPARRAY output_array , int dest_row , int num_rows ,
                       JDIMENSION num_cols ) 
{ register JSAMPROW inptr ;
  register JSAMPROW outptr ;
  register size_t count ;
  register int row ;
  JSAMPARRAY tmp ;
  JSAMPARRAY tmp___0 ;

  {
  {
# 74
  count = num_cols * sizeof(JSAMPLE );
# 80
  input_array += source_row;
# 81
  output_array += dest_row;
# 83
  row = num_rows;
  }
# 83
  while (row > 0) {
    {
# 84
    tmp = input_array;
# 84
    input_array ++;
# 84
    inptr = (*tmp);
# 85
    tmp___0 = output_array;
# 85
    output_array ++;
# 85
    outptr = (*tmp___0);
# 87
    memcpy((void */* __restrict  */)((void *)outptr),
           (void const   */* __restrict  */)((void const   *)inptr), count);
# 83
    row --;
    }
  }
# 93
  return;
}
}
# 96
void jcopy_block_row(JBLOCKROW input_row , JBLOCKROW output_row ,
                     JDIMENSION num_blocks ) 
{ 

  {
  {
# 102
  memcpy((void */* __restrict  */)((void *)output_row),
         (void const   */* __restrict  */)((void const   *)input_row),
         num_blocks * (64U * sizeof(JCOEF )));
  }
# 113
  return;
}
}
# 116
void jzero_far(void *target , size_t bytestozero ) 
{ 

  {
  {
# 122
  memset(target, 0, bytestozero);
  }
# 131
  return;
}
}
# 28 "jerror.h"
char const   * const  jpeg_message_table[111]   = 
# 28
  {(char const   */* const  */)((char const   *)"Bogus message code %d"),
   (char const   */* const  */)((char const   *)"Sorry, there are legal restrictions on arithmetic coding"),
   (char const   */* const  */)((char const   *)"ALIGN_TYPE is wrong, please fix"),
   (char const   */* const  */)((char const   *)"MAX_ALLOC_CHUNK is wrong, please fix"),
   (char const   */* const  */)((char const   *)"Bogus buffer control mode"),
   (char const   */* const  */)((char const   *)"Invalid component ID %d in SOS"),
   (char const   */* const  */)((char const   *)"IDCT output block size %d not supported"),
   (char const   */* const  */)((char const   *)"Bogus input colorspace"),
   (char const   */* const  */)((char const   *)"Bogus JPEG colorspace"),
   (char const   */* const  */)((char const   *)"Bogus marker length"),
   (char const   */* const  */)((char const   *)"Sampling factors too large for interleaved scan"),
   (char const   */* const  */)((char const   *)"Invalid memory pool code %d"),
   (char const   */* const  */)((char const   *)"Unsupported JPEG data precision %d"),
   (char const   */* const  */)((char const   *)"Bogus sampling factors"),
   (char const   */* const  */)((char const   *)"Improper call to JPEG library in state %d"),
   (char const   */* const  */)((char const   *)"Bogus virtual array access"),
   (char const   */* const  */)((char const   *)"Buffer passed to JPEG library is too small"),
   (char const   */* const  */)((char const   *)"Suspension not allowed here"),
   (char const   */* const  */)((char const   *)"CCIR601 sampling not implemented yet"),
   (char const   */* const  */)((char const   *)"Too many color components: %d, max %d"),
   (char const   */* const  */)((char const   *)"Unsupported color conversion request"),
   (char const   */* const  */)((char const   *)"Bogus DAC index %d"),
   (char const   */* const  */)((char const   *)"Bogus DAC value 0x%x"),
   (char const   */* const  */)((char const   *)"Bogus DHT counts"),
   (char const   */* const  */)((char const   *)"Bogus DHT index %d"),
   (char const   */* const  */)((char const   *)"Bogus DQT index %d"),
   (char const   */* const  */)((char const   *)"Empty JPEG image (DNL not supported)"),
   (char const   */* const  */)((char const   *)"Read from EMS failed"),
   (char const   */* const  */)((char const   *)"Write to EMS failed"),
   (char const   */* const  */)((char const   *)"Didn\'t expect more than one scan"),
   (char const   */* const  */)((char const   *)"Input file read error"),
   (char const   */* const  */)((char const   *)"Output file write error --- out of disk space?"),
   (char const   */* const  */)((char const   *)"Fractional sampling not implemented yet"),
   (char const   */* const  */)((char const   *)"Huffman code size table overflow"),
   (char const   */* const  */)((char const   *)"Missing Huffman code table entry"),
   (char const   */* const  */)((char const   *)"Maximum supported image dimension is %u pixels"),
   (char const   */* const  */)((char const   *)"Empty input file"),
   (char const   */* const  */)((char const   *)"Premature end of input file"),
   (char const   */* const  */)((char const   *)"Unsupported JFIF revision number %d.%02d"),
   (char const   */* const  */)((char const   *)"Not implemented yet"),
   (char const   */* const  */)((char const   *)"Requested feature was omitted at compile time"),
   (char const   */* const  */)((char const   *)"Backing store not supported"),
   (char const   */* const  */)((char const   *)"Huffman table 0x%02x was not defined"),
   (char const   */* const  */)((char const   *)"JPEG datastream contains no image"),
   (char const   */* const  */)((char const   *)"Quantization table 0x%02x was not defined"),
   (char const   */* const  */)((char const   *)"Not a JPEG file: starts with 0x%02x 0x%02x"),
   (char const   */* const  */)((char const   *)"Insufficient memory (case %d)"),
   (char const   */* const  */)((char const   *)"Cannot quantize more than %d color components"),
   (char const   */* const  */)((char const   *)"Cannot quantize to fewer than %d colors"),
   (char const   */* const  */)((char const   *)"Cannot quantize to more than %d colors"),
   (char const   */* const  */)((char const   *)"Invalid JPEG file structure: two SOF markers"),
   (char const   */* const  */)((char const   *)"Invalid JPEG file structure: missing SOS marker"),
   (char const   */* const  */)((char const   *)"Unsupported JPEG process: SOF type 0x%02x"),
   (char const   */* const  */)((char const   *)"Invalid JPEG file structure: two SOI markers"),
   (char const   */* const  */)((char const   *)"Invalid JPEG file structure: SOS before SOF"),
   (char const   */* const  */)((char const   *)"Failed to create temporary file %s"),
   (char const   */* const  */)((char const   *)"Read failed on temporary file"),
   (char const   */* const  */)((char const   *)"Seek failed on temporary file"),
   (char const   */* const  */)((char const   *)"Write failed on temporary file --- out of disk space?"),
   (char const   */* const  */)((char const   *)"Application transferred too few scanlines"),
   (char const   */* const  */)((char const   *)"Unsupported marker type 0x%02x"),
   (char const   */* const  */)((char const   *)"Virtual array controller messed up"),
   (char const   */* const  */)((char const   *)"Image too wide for this implementation"),
   (char const   */* const  */)((char const   *)"Read from XMS failed"),
   (char const   */* const  */)((char const   *)"Write to XMS failed"),
   (char const   */* const  */)((char const   *)"Copyright (C) 1994, Thomas G. Lane"),
   (char const   */* const  */)((char const   *)"5  24-Sep-94"),
   (char const   */* const  */)((char const   *)"Caution: quantization tables are too coarse for baseline JPEG"),
   (char const   */* const  */)((char const   *)"Adobe APP14 marker: version %d, flags 0x%04x 0x%04x, transform %d"),
   (char const   */* const  */)((char const   *)"Unknown APP0 marker (not JFIF), length %u"),
   (char const   */* const  */)((char const   *)"Unknown APP14 marker (not Adobe), length %u"),
   (char const   */* const  */)((char const   *)"Define Arithmetic Table 0x%02x: 0x%02x"),
   (char const   */* const  */)((char const   *)"Define Huffman Table 0x%02x"),
   (char const   */* const  */)((char const   *)"Define Quantization Table %d  precision %d"),
   (char const   */* const  */)((char const   *)"Define Restart Interval %u"),
   (char const   */* const  */)((char const   *)"Freed EMS handle %u"),
   (char const   */* const  */)((char const   *)"Obtained EMS handle %u"),
   (char const   */* const  */)((char const   *)"End Of Image"),
   (char const   */* const  */)((char const   *)"        %3d %3d %3d %3d %3d %3d %3d %3d"),
   (char const   */* const  */)((char const   *)"JFIF APP0 marker, density %dx%d  %d"),
   (char const   */* const  */)((char const   *)"Warning: thumbnail image size does not match data length %u"),
   (char const   */* const  */)((char const   *)"Warning: unknown JFIF revision number %d.%02d"),
   (char const   */* const  */)((char const   *)"    with %d x %d thumbnail image"),
   (char const   */* const  */)((char const   *)"Skipping marker 0x%02x, length %u"),
   (char const   */* const  */)((char const   *)"Unexpected marker 0x%02x"),
   (char const   */* const  */)((char const   *)"        %4u %4u %4u %4u %4u %4u %4u %4u"),
   (char const   */* const  */)((char const   *)"Quantizing to %d = %d*%d*%d colors"),
   (char const   */* const  */)((char const   *)"Quantizing to %d colors"),
   (char const   */* const  */)((char const   *)"Selected %d colors for quantization"),
   (char const   */* const  */)((char const   *)"At marker 0x%02x, recovery action %d"),
   (char const   */* const  */)((char const   *)"RST%d"),
   (char const   */* const  */)((char const   *)"Smoothing not supported with nonstandard sampling ratios"),
   (char const   */* const  */)((char const   *)"Start Of Frame 0x%02x: width=%u, height=%u, components=%d"),
   (char const   */* const  */)((char const   *)"    Component %d: %dhx%dv q=%d"),
   (char const   */* const  */)((char const   *)"Start of Image"),
   (char const   */* const  */)((char const   *)"Start Of Scan: %d components"),
   (char const   */* const  */)((char const   *)"    Component %d: dc=%d ac=%d"),
   (char const   */* const  */)((char const   *)"Closed temporary file %s"),
   (char const   */* const  */)((char const   *)"Opened temporary file %s"),
   (char const   */* const  */)((char const   *)"Unrecognized component IDs %d %d %d, assuming YCbCr"),
   (char const   */* const  */)((char const   *)"Freed XMS handle %u"),
   (char const   */* const  */)((char const   *)"Obtained XMS handle %u"),
   (char const   */* const  */)((char const   *)"Unknown Adobe color transform code %d"),
   (char const   */* const  */)((char const   *)"Corrupt JPEG data: %u extraneous bytes before marker 0x%02x"),
   (char const   */* const  */)((char const   *)"Corrupt JPEG data: premature end of data segment"),
   (char const   */* const  */)((char const   *)"Corrupt JPEG data: bad Huffman code"),
   (char const   */* const  */)((char const   *)"Premature end of JPEG file"),
   (char const   */* const  */)((char const   *)"Corrupt JPEG data: found marker 0x%02x instead of RST%d"),
   (char const   */* const  */)((char const   *)"Invalid SOS parameters for sequential JPEG"),
   (char const   */* const  */)((char const   *)"Application transferred too many scanlines"),
   (char const   */* const  */)((char const   *)((void *)0))};
# 43 "jerror.c"
static void error_exit(j_common_ptr cinfo ) 
{ 

  {
  {
# 47
  ((*((cinfo->err)->output_message)))(cinfo);
# 50
  jpeg_destroy(cinfo);
# 52
  exit(1);
  {
# 129 "spec.work"
  while (1) {

  }
  {

  }
  }

  }
# 52 "jerror.c"
  return;
}
}
# 62
static void output_message(j_common_ptr cinfo ) 
{ char buffer[200] ;
  FILE * __restrict  tmp ;

  {
  {
# 68
  ((*((cinfo->err)->format_message)))(cinfo, buffer);
# 71
  tmp = (FILE */* __restrict  */)get_stderr();
  {
# 105 "spec.work"
  tmp->__BLAST_FLAG = 1;
  {

  }
  }

  {
# 64
  if (! (tmp->__BLAST_FLAG == 1)) {
# 66
    __error__();
  }
  {

  }
  }
# 71 "jerror.c"
  fprintf(tmp, (char const   */* __restrict  */)((char const   *)"%s\n"), buffer);
  }
# 72
  return;
}
}
# 86
static void emit_message(j_common_ptr cinfo , int msg_level ) 
{ struct jpeg_error_mgr *err ;

  {
  {
# 89
  err = cinfo->err;
  }
# 91
  if (msg_level < 0) {
# 96
    if (err->num_warnings == 0L) {
      {
# 97
      ((*(err->output_message)))(cinfo);
      }
    } else {
# 96
      if (err->trace_level >= 3) {
        {
# 97
        ((*(err->output_message)))(cinfo);
        }
      }
    }
    {
# 99
    err->num_warnings = err->num_warnings + 1L;
    }
  } else {
# 102
    if (err->trace_level >= msg_level) {
      {
# 103
      ((*(err->output_message)))(cinfo);
      }
    }
  }
# 105
  return;
}
}
# 115
static void format_message(j_common_ptr cinfo , char *buffer ) 
{ struct jpeg_error_mgr *err ;
  int msg_code ;
  char const   *msgtext ;
  char const   *msgptr ;
  char ch ;
  boolean isstring ;
  char const   *tmp ;

  {
  {
# 118
  err = cinfo->err;
# 119
  msg_code = err->msg_code;
# 120
  msgtext = (char const   *)((void *)0);
  }
# 126
  if (msg_code > 0) {
# 126
    if (msg_code <= err->last_jpeg_message) {
      {
# 127
      msgtext = (char const   *)(*(err->jpeg_message_table + msg_code));
      }
    } else {
      goto _L;
    }
  } else {
    _L: 
# 128
    if ((unsigned int )err->addon_message_table != (unsigned int )((void *)0)) {
# 128
      if (msg_code >= err->first_addon_message) {
# 128
        if (msg_code <= err->last_addon_message) {
          {
# 131
          msgtext = (char const   *)(*(err->addon_message_table +
                                       (msg_code - err->first_addon_message)));
          }
        }
      }
    }
  }
# 135
  if ((unsigned int )msgtext == (unsigned int )((void *)0)) {
    {
# 136
    err->msg_parm.i[0] = msg_code;
# 137
    msgtext = (char const   *)(*(err->jpeg_message_table + 0));
    }
  }
  {
# 141
  isstring = 0;
# 142
  msgptr = msgtext;
  }
# 143
  while (1) {
    {
# 143
    tmp = msgptr;
# 143
    msgptr ++;
# 143
    ch = (*tmp);
    }
# 143
    if (! ((int )ch != 0)) {
# 143
      break;
    }
# 144
    if ((int )ch == 37) {
# 145
      if ((int const   )(*msgptr) == 115) {
        {
# 145
        isstring = 1;
        }
      }
# 146
      break;
    }
  }
# 151
  if (isstring) {
    {
# 152
    sprintf((char */* __restrict  */)buffer,
            (char const   */* __restrict  */)msgtext, err->msg_parm.s);
    }
  } else {
    {
# 154
    sprintf((char */* __restrict  */)buffer,
            (char const   */* __restrict  */)msgtext, err->msg_parm.i[0],
            err->msg_parm.i[1], err->msg_parm.i[2], err->msg_parm.i[3],
            err->msg_parm.i[4], err->msg_parm.i[5], err->msg_parm.i[6],
            err->msg_parm.i[7]);
    }
  }
# 159
  return;
}
}
# 170
static void reset_error_mgr(j_common_ptr cinfo ) 
{ 

  {
  {
# 173
  (cinfo->err)->num_warnings = 0L;
# 175
  (cinfo->err)->msg_code = 0;
  }
# 176
  return;
}
}
# 189
struct jpeg_error_mgr *jpeg_std_error(struct jpeg_error_mgr *err ) 
{ 

  {
  {
# 192
  err->error_exit = & error_exit;
# 193
  err->emit_message = & emit_message;
# 194
  err->output_message = & output_message;
# 195
  err->format_message = & format_message;
# 196
  err->reset_error_mgr = & reset_error_mgr;
# 198
  err->trace_level = 0;
# 199
  err->num_warnings = 0L;
# 200
  err->msg_code = 0;
# 203
  err->jpeg_message_table = jpeg_message_table;
# 204
  err->last_jpeg_message = 109;
# 206
  err->addon_message_table = (char const   * const  *)((void *)0);
# 207
  err->first_addon_message = 0;
# 208
  err->last_addon_message = 0;
  }
# 210
  return (err);
}
}
# 46 "jmemsys.h"
void *jpeg_get_small(j_common_ptr cinfo , size_t sizeofobject ) ;
# 47
void jpeg_free_small(j_common_ptr cinfo , void *object , size_t sizeofobject ) ;
# 59
void *jpeg_get_large(j_common_ptr cinfo , size_t sizeofobject ) ;
# 60
void jpeg_free_large(j_common_ptr cinfo , void *object , size_t sizeofobject ) ;
# 101
long jpeg_mem_available(j_common_ptr cinfo , long min_bytes_needed ,
                        long max_bytes_needed , long already_allocated ) ;
# 164
void jpeg_open_backing_store(j_common_ptr cinfo , backing_store_ptr info ,
                             long total_bytes_needed ) ;
# 181
long jpeg_mem_init(j_common_ptr cinfo ) ;
# 182
void jpeg_mem_term(j_common_ptr cinfo ) ;
# 215 "jmemmgr.c"
static void out_of_memory(j_common_ptr cinfo , int which ) 
{ 

  {
  {
# 223
  (cinfo->err)->msg_code = 46;
# 223
  (cinfo->err)->msg_parm.i[0] = which;
# 223
  ((*((cinfo->err)->error_exit)))(cinfo);
  }
# 224
  return;
}
}
# 240
static size_t const   first_pool_slop[2]   = {(size_t const   )((unsigned int )1600),
                                              (size_t const   )((unsigned int )16000)};
# 246
static size_t const   extra_pool_slop[2]   = {(size_t const   )((unsigned int )0),
                                              (size_t const   )((unsigned int )5000)};
# 255
static void *alloc_small(j_common_ptr cinfo , int pool_id , size_t sizeofobject ) 
{ my_mem_ptr mem ;
  small_pool_ptr hdr_ptr ;
  small_pool_ptr prev_hdr_ptr ;
  unsigned long data_ptr ;
  size_t odd_bytes ;
  size_t min_request ;
  size_t slop ;
  void *tmp ;

  {
  {
# 260
  mem = (my_memory_mgr *)cinfo->mem;
  }
# 268
  if (sizeofobject > (unsigned int )(1000000000UL -
                                     (unsigned long )sizeof(small_pool_hdr ))) {
    {
# 269
    out_of_memory(cinfo, 1);
    }
  }
  {
# 272
  odd_bytes = sizeofobject % sizeof(double );
  }
# 273
  if (odd_bytes > 0U) {
    {
# 274
    sizeofobject += sizeof(double ) - odd_bytes;
    }
  }
# 277
  if (pool_id < 0) {
    {
# 278
    (cinfo->err)->msg_code = 11;
# 278
    (cinfo->err)->msg_parm.i[0] = pool_id;
# 278
    ((*((cinfo->err)->error_exit)))(cinfo);
    }
  } else {
# 277
    if (pool_id >= 2) {
      {
# 278
      (cinfo->err)->msg_code = 11;
# 278
      (cinfo->err)->msg_parm.i[0] = pool_id;
# 278
      ((*((cinfo->err)->error_exit)))(cinfo);
      }
    }
  }
  {
# 279
  prev_hdr_ptr = (union small_pool_struct *)((void *)0);
# 280
  hdr_ptr = mem->small_list[pool_id];
  }
# 281
  while ((unsigned int )hdr_ptr != (unsigned int )((void *)0)) {
# 282
    if (hdr_ptr->hdr.bytes_left >= sizeofobject) {
# 283
      break;
    }
    {
# 284
    prev_hdr_ptr = hdr_ptr;
# 285
    hdr_ptr = hdr_ptr->hdr.next;
    }
  }
# 289
  if ((unsigned int )hdr_ptr == (unsigned int )((void *)0)) {
    {
# 291
    min_request = sizeofobject + sizeof(small_pool_hdr );
    }
# 292
    if ((unsigned int )prev_hdr_ptr == (unsigned int )((void *)0)) {
      {
# 293
      slop = first_pool_slop[pool_id];
      }
    } else {
      {
# 295
      slop = extra_pool_slop[pool_id];
      }
    }
# 297
    if (slop > (unsigned int )(1000000000UL - (unsigned long )min_request)) {
      {
# 298
      slop = (unsigned int )(1000000000UL - (unsigned long )min_request);
      }
    }
# 300
    while (1) {
      {
# 301
      tmp = jpeg_get_small(cinfo, min_request + slop);
# 301
      hdr_ptr = (small_pool_ptr )__trusted_cast(tmp);
      }
# 303
      if ((unsigned int )hdr_ptr != (unsigned int )((void *)0)) {
# 304
        break;
      }
      {
# 305
      slop /= 2U;
      }
# 306
      if (slop < 50U) {
        {
# 307
        out_of_memory(cinfo, 2);
        }
      }
    }
    {
# 309
    mem->total_space_allocated = (long )((unsigned long )mem->total_space_allocated +
                                         (unsigned long )(min_request + slop));
# 311
    hdr_ptr->hdr.next = (union small_pool_struct *)((void *)0);
# 312
    hdr_ptr->hdr.bytes_used = 0U;
# 313
    hdr_ptr->hdr.bytes_left = sizeofobject + slop;
    }
# 314
    if ((unsigned int )prev_hdr_ptr == (unsigned int )((void *)0)) {
      {
# 315
      mem->small_list[pool_id] = hdr_ptr;
      }
    } else {
      {
# 317
      prev_hdr_ptr->hdr.next = hdr_ptr;
      }
    }
  }
  {
# 322
  data_ptr = (unsigned long )hdr_ptr + (unsigned long )sizeof((*hdr_ptr));
# 324
  data_ptr += (unsigned long )hdr_ptr->hdr.bytes_used;
# 325
  hdr_ptr->hdr.bytes_used += sizeofobject;
# 326
  hdr_ptr->hdr.bytes_left -= sizeofobject;
  }
# 331
  return ((void *)data_ptr);
}
}
# 335
void *alloc_small_wrapper(j_common_ptr cinfo , int pool_id ,
                          size_t sizeofobject ) 
{ void *(*f)(j_common_ptr  , int  , size_t  ) ;
  void *tmp ;

  {
  {
# 338
  f = (cinfo->mem)->alloc_small;
# 339
  tmp = ((*f))(cinfo, pool_id, sizeofobject);
  }
# 339
  return (tmp);
}
}
# 356
static void *alloc_large(j_common_ptr cinfo , int pool_id , size_t sizeofobject ) 
{ my_mem_ptr mem ;
  large_pool_ptr hdr_ptr ;
  size_t odd_bytes ;

  {
  {
# 360
  mem = (my_memory_mgr *)cinfo->mem;
  }
# 365
  if (sizeofobject > (unsigned int )(1000000000UL -
                                     (unsigned long )sizeof(large_pool_hdr ))) {
    {
# 366
    out_of_memory(cinfo, 3);
    }
  }
  {
# 369
  odd_bytes = sizeofobject % sizeof(double );
  }
# 370
  if (odd_bytes > 0U) {
    {
# 371
    sizeofobject += sizeof(double ) - odd_bytes;
    }
  }
# 374
  if (pool_id < 0) {
    {
# 375
    (cinfo->err)->msg_code = 11;
# 375
    (cinfo->err)->msg_parm.i[0] = pool_id;
# 375
    ((*((cinfo->err)->error_exit)))(cinfo);
    }
  } else {
# 374
    if (pool_id >= 2) {
      {
# 375
      (cinfo->err)->msg_code = 11;
# 375
      (cinfo->err)->msg_parm.i[0] = pool_id;
# 375
      ((*((cinfo->err)->error_exit)))(cinfo);
      }
    }
  }
  {
# 377
  hdr_ptr = (large_pool_ptr )jpeg_get_large(cinfo, sizeofobject +
                                                   sizeof(large_pool_hdr ));
  }
# 379
  if ((unsigned int )hdr_ptr == (unsigned int )((void *)0)) {
    {
# 380
    out_of_memory(cinfo, 4);
    }
  }
  {
# 381
  mem->total_space_allocated = (long )((unsigned long )mem->total_space_allocated +
                                       (unsigned long )(sizeofobject +
                                                        sizeof(large_pool_hdr )));
# 384
  hdr_ptr->hdr.next = mem->large_list[pool_id];
# 388
  hdr_ptr->hdr.bytes_used = sizeofobject;
# 389
  hdr_ptr->hdr.bytes_left = 0U;
# 390
  mem->large_list[pool_id] = hdr_ptr;
  }
# 392
  return ((void *)(hdr_ptr + 1));
}
}
# 395
void *alloc_large_wrapper(j_common_ptr cinfo , int pool_id ,
                          size_t sizeofobject ) 
{ void *(*f)(j_common_ptr  , int  , size_t  ) ;
  void *tmp ;

  {
  {
# 398
  f = (cinfo->mem)->alloc_large;
# 399
  tmp = ((*f))(cinfo, pool_id, sizeofobject);
  }
# 399
  return (tmp);
}
}
# 415
static JSAMPARRAY alloc_sarray(j_common_ptr cinfo , int pool_id ,
                               JDIMENSION samplesperrow , JDIMENSION numrows ) 
{ my_mem_ptr mem ;
  JSAMPARRAY result ;
  JSAMPROW workspace ;
  JDIMENSION rowsperchunk ;
  JDIMENSION currow ;
  JDIMENSION i ;
  long ltemp ;
  JDIMENSION tmp___1 ;

  {
  {
# 420
  mem = (my_memory_mgr *)cinfo->mem;
# 427
  ltemp = (long )((1000000000UL - (unsigned long )sizeof(large_pool_hdr )) /
                  ((unsigned long )((long )samplesperrow) *
                   (unsigned long )sizeof(JSAMPLE )));
  }
# 429
  if (ltemp <= 0L) {
    {
# 430
    (cinfo->err)->msg_code = 62;
# 430
    ((*((cinfo->err)->error_exit)))(cinfo);
    }
  }
# 431
  if (ltemp < (long )numrows) {
    {
# 432
    rowsperchunk = (unsigned int )ltemp;
    }
  } else {
    {
# 434
    rowsperchunk = numrows;
    }
  }
  {
# 435
  mem->last_rowsperchunk = rowsperchunk;
# 438
  result = (JSAMPARRAY )alloc_small_wrapper(cinfo, pool_id,
                                            numrows * sizeof((*result)));
# 444
  currow = 0U;
  }
# 445
  while (currow < numrows) {
# 446
    if (rowsperchunk < numrows - currow) {
      {
# 446
      rowsperchunk = rowsperchunk;
      }
    } else {
      {
# 446
      rowsperchunk = numrows - currow;
      }
    }
    {
# 447
    workspace = (JSAMPROW )alloc_large_wrapper(cinfo, pool_id,
                                               (rowsperchunk * samplesperrow) *
                                               sizeof(JSAMPLE ));
# 452
    i = rowsperchunk;
    }
# 452
    while (i > 0U) {
      {
# 453
      tmp___1 = currow;
# 453
      currow ++;
# 453
      (*(result + tmp___1)) = workspace;
# 454
      workspace += samplesperrow;
# 452
      i --;
      }
    }
  }
# 458
  return (result);
}
}
# 467
static JBLOCKARRAY alloc_barray(j_common_ptr cinfo , int pool_id ,
                                JDIMENSION blocksperrow , JDIMENSION numrows ) 
{ my_mem_ptr mem ;
  JBLOCKARRAY result ;
  JBLOCKROW workspace ;
  JDIMENSION rowsperchunk ;
  JDIMENSION currow ;
  JDIMENSION i ;
  long ltemp ;
  JDIMENSION tmp___1 ;

  {
  {
# 472
  mem = (my_memory_mgr *)cinfo->mem;
# 479
  ltemp = (long )((1000000000UL - (unsigned long )sizeof(large_pool_hdr )) /
                  ((unsigned long )((long )blocksperrow) *
                   (unsigned long )sizeof(JBLOCK )));
  }
# 481
  if (ltemp <= 0L) {
    {
# 482
    (cinfo->err)->msg_code = 62;
# 482
    ((*((cinfo->err)->error_exit)))(cinfo);
    }
  }
# 483
  if (ltemp < (long )numrows) {
    {
# 484
    rowsperchunk = (unsigned int )ltemp;
    }
  } else {
    {
# 486
    rowsperchunk = numrows;
    }
  }
  {
# 487
  mem->last_rowsperchunk = rowsperchunk;
# 490
  result = (JBLOCKARRAY )alloc_small_wrapper(cinfo, pool_id,
                                             numrows * sizeof((*result)));
# 495
  currow = 0U;
  }
# 496
  while (currow < numrows) {
# 497
    if (rowsperchunk < numrows - currow) {
      {
# 497
      rowsperchunk = rowsperchunk;
      }
    } else {
      {
# 497
      rowsperchunk = numrows - currow;
      }
    }
    {
# 498
    workspace = (JBLOCKROW )alloc_large_wrapper(cinfo, pool_id,
                                                (rowsperchunk * blocksperrow) *
                                                sizeof(JBLOCK ));
# 501
    i = rowsperchunk;
    }
# 501
    while (i > 0U) {
      {
# 502
      tmp___1 = currow;
# 502
      currow ++;
# 502
      (*(result + tmp___1)) = workspace;
# 503
      workspace += blocksperrow;
# 501
      i --;
      }
    }
  }
# 507
  return (result);
}
}
# 559
static jvirt_sarray_ptr request_virt_sarray(j_common_ptr cinfo , int pool_id ,
                                            JDIMENSION samplesperrow ,
                                            JDIMENSION numrows ,
                                            JDIMENSION unitheight ) 
{ my_mem_ptr mem ;
  jvirt_sarray_ptr result ;

  {
  {
# 565
  mem = (my_memory_mgr *)cinfo->mem;
  }
# 569
  if (pool_id != 1) {
    {
# 570
    (cinfo->err)->msg_code = 11;
# 570
    (cinfo->err)->msg_parm.i[0] = pool_id;
# 570
    ((*((cinfo->err)->error_exit)))(cinfo);
    }
  }
  {
# 573
  numrows = (JDIMENSION )jround_up((long )numrows, (long )unitheight);
# 576
  result = (jvirt_sarray_ptr )alloc_small_wrapper(cinfo, pool_id,
                                                  sizeof(struct jvirt_sarray_control ));
# 579
  result->mem_buffer = (JSAMPROW *)((void *)0);
# 580
  result->rows_in_array = numrows;
# 581
  result->samplesperrow = samplesperrow;
# 582
  result->unitheight = unitheight;
# 583
  result->b_s_open = 0;
# 584
  result->next = mem->virt_sarray_list;
# 585
  mem->virt_sarray_list = result;
  }
# 587
  return (result);
}
}
# 591
static jvirt_barray_ptr request_virt_barray(j_common_ptr cinfo , int pool_id ,
                                            JDIMENSION blocksperrow ,
                                            JDIMENSION numrows ,
                                            JDIMENSION unitheight ) 
{ my_mem_ptr mem ;
  jvirt_barray_ptr result ;

  {
  {
# 597
  mem = (my_memory_mgr *)cinfo->mem;
  }
# 601
  if (pool_id != 1) {
    {
# 602
    (cinfo->err)->msg_code = 11;
# 602
    (cinfo->err)->msg_parm.i[0] = pool_id;
# 602
    ((*((cinfo->err)->error_exit)))(cinfo);
    }
  }
  {
# 605
  numrows = (JDIMENSION )jround_up((long )numrows, (long )unitheight);
# 608
  result = (jvirt_barray_ptr )alloc_small_wrapper(cinfo, pool_id,
                                                  sizeof(struct jvirt_barray_control ));
# 611
  result->mem_buffer = (JBLOCKROW *)((void *)0);
# 612
  result->rows_in_array = numrows;
# 613
  result->blocksperrow = blocksperrow;
# 614
  result->unitheight = unitheight;
# 615
  result->b_s_open = 0;
# 616
  result->next = mem->virt_barray_list;
# 617
  mem->virt_barray_list = result;
  }
# 619
  return (result);
}
}
# 623
static void realize_virt_arrays(j_common_ptr cinfo ) 
{ my_mem_ptr mem ;
  long space_per_unitheight ;
  long maximum_space ;
  long avail_mem ;
  long unitheights ;
  long max_unitheights ;
  jvirt_sarray_ptr sptr ;
  jvirt_barray_ptr bptr ;

  {
  {
# 627
  mem = (my_memory_mgr *)cinfo->mem;
# 637
  space_per_unitheight = 0L;
# 638
  maximum_space = 0L;
# 639
  sptr = mem->virt_sarray_list;
  }
# 639
  while ((unsigned int )sptr != (unsigned int )((void *)0)) {
# 640
    if ((unsigned int )sptr->mem_buffer == (unsigned int )((void *)0)) {
      {
# 641
      space_per_unitheight = (long )((unsigned long )space_per_unitheight +
                                     (unsigned long )((long )sptr->unitheight *
                                                      (long )sptr->samplesperrow) *
                                     (unsigned long )sizeof(JSAMPLE ));
# 643
      maximum_space = (long )((unsigned long )maximum_space +
                              (unsigned long )((long )sptr->rows_in_array *
                                               (long )sptr->samplesperrow) *
                              (unsigned long )sizeof(JSAMPLE ));
      }
    }
    {
# 639
    sptr = sptr->next;
    }
  }
  {
# 647
  bptr = mem->virt_barray_list;
  }
# 647
  while ((unsigned int )bptr != (unsigned int )((void *)0)) {
# 648
    if ((unsigned int )bptr->mem_buffer == (unsigned int )((void *)0)) {
      {
# 649
      space_per_unitheight = (long )((unsigned long )space_per_unitheight +
                                     (unsigned long )((long )bptr->unitheight *
                                                      (long )bptr->blocksperrow) *
                                     (unsigned long )sizeof(JBLOCK ));
# 651
      maximum_space = (long )((unsigned long )maximum_space +
                              (unsigned long )((long )bptr->rows_in_array *
                                               (long )bptr->blocksperrow) *
                              (unsigned long )sizeof(JBLOCK ));
      }
    }
    {
# 647
    bptr = bptr->next;
    }
  }
# 656
  if (space_per_unitheight <= 0L) {
# 657
    return;
  }
  {
# 660
  avail_mem = jpeg_mem_available(cinfo, space_per_unitheight, maximum_space,
                                 mem->total_space_allocated);
  }
# 667
  if (avail_mem >= maximum_space) {
    {
# 668
    max_unitheights = 1000000000L;
    }
  } else {
    {
# 670
    max_unitheights = avail_mem / space_per_unitheight;
    }
# 674
    if (max_unitheights <= 0L) {
      {
# 675
      max_unitheights = 1L;
      }
    }
  }
  {
# 680
  sptr = mem->virt_sarray_list;
  }
# 680
  while ((unsigned int )sptr != (unsigned int )((void *)0)) {
# 681
    if ((unsigned int )sptr->mem_buffer == (unsigned int )((void *)0)) {
      {
# 682
      unitheights = (long )((unsigned long )((long )sptr->rows_in_array - 1L) /
                            (unsigned long )sptr->unitheight + 1UL);
      }
# 683
      if (unitheights <= max_unitheights) {
        {
# 685
        sptr->rows_in_mem = sptr->rows_in_array;
        }
      } else {
        {
# 688
        sptr->rows_in_mem = (unsigned int )((unsigned long )max_unitheights *
                                            (unsigned long )sptr->unitheight);
# 689
        jpeg_open_backing_store(cinfo, & sptr->b_s_info,
                                ((long )sptr->rows_in_array *
                                 (long )sptr->samplesperrow) *
                                (long )sizeof(JSAMPLE ));
# 693
        sptr->b_s_open = 1;
        }
      }
      {
# 695
      sptr->mem_buffer = alloc_sarray(cinfo, 1, sptr->samplesperrow,
                                      sptr->rows_in_mem);
# 697
      sptr->rowsperchunk = mem->last_rowsperchunk;
# 698
      sptr->cur_start_row = 0U;
# 699
      sptr->dirty = 0;
      }
    }
    {
# 680
    sptr = sptr->next;
    }
  }
  {
# 703
  bptr = mem->virt_barray_list;
  }
# 703
  while ((unsigned int )bptr != (unsigned int )((void *)0)) {
# 704
    if ((unsigned int )bptr->mem_buffer == (unsigned int )((void *)0)) {
      {
# 705
      unitheights = (long )((unsigned long )((long )bptr->rows_in_array - 1L) /
                            (unsigned long )bptr->unitheight + 1UL);
      }
# 706
      if (unitheights <= max_unitheights) {
        {
# 708
        bptr->rows_in_mem = bptr->rows_in_array;
        }
      } else {
        {
# 711
        bptr->rows_in_mem = (unsigned int )((unsigned long )max_unitheights *
                                            (unsigned long )bptr->unitheight);
# 712
        jpeg_open_backing_store(cinfo, & bptr->b_s_info,
                                ((long )bptr->rows_in_array *
                                 (long )bptr->blocksperrow) *
                                (long )sizeof(JBLOCK ));
# 716
        bptr->b_s_open = 1;
        }
      }
      {
# 718
      bptr->mem_buffer = alloc_barray(cinfo, 1, bptr->blocksperrow,
                                      bptr->rows_in_mem);
# 720
      bptr->rowsperchunk = mem->last_rowsperchunk;
# 721
      bptr->cur_start_row = 0U;
# 722
      bptr->dirty = 0;
      }
    }
    {
# 703
    bptr = bptr->next;
    }
  }
# 725
  return;
}
}
# 728
static void do_sarray_io(j_common_ptr cinfo , jvirt_sarray_ptr ptr ,
                         boolean writing ) 
{ long bytesperrow ;
  long file_offset ;
  long byte_count ;
  long rows ;
  long i ;

  {
  {
# 734
  bytesperrow = (long )((unsigned long )((long )ptr->samplesperrow) *
                        (unsigned long )sizeof(JSAMPLE ));
# 735
  file_offset = (long )((unsigned long )ptr->cur_start_row *
                        (unsigned long )bytesperrow);
# 737
  i = 0L;
  }
# 737
  while (i < (long )ptr->rows_in_mem) {
# 739
    if ((long )ptr->rowsperchunk < (long )ptr->rows_in_mem - i) {
      {
# 739
      rows = (long )ptr->rowsperchunk;
      }
    } else {
      {
# 739
      rows = (long )ptr->rows_in_mem - i;
      }
    }
# 741
    if (rows < (long )ptr->rows_in_array - ((long )ptr->cur_start_row + i)) {
      {
# 741
      rows = rows;
      }
    } else {
      {
# 741
      rows = (long )ptr->rows_in_array - ((long )ptr->cur_start_row + i);
      }
    }
# 743
    if (rows <= 0L) {
# 744
      break;
    }
    {
# 745
    byte_count = rows * bytesperrow;
    }
# 746
    if (writing) {
      {
# 747
      ((*(ptr->b_s_info.write_backing_store)))(cinfo, & ptr->b_s_info,
                                               (void *)(*(ptr->mem_buffer + i)),
                                               file_offset, byte_count);
      }
    } else {
      {
# 751
      ((*(ptr->b_s_info.read_backing_store)))(cinfo, & ptr->b_s_info,
                                              (void *)(*(ptr->mem_buffer + i)),
                                              file_offset, byte_count);
      }
    }
    {
# 754
    file_offset += byte_count;
# 737
    i = (long )((unsigned long )i + (unsigned long )ptr->rowsperchunk);
    }
  }
# 756
  return;
}
}
# 759
static void do_barray_io(j_common_ptr cinfo , jvirt_barray_ptr ptr ,
                         boolean writing ) 
{ long bytesperrow ;
  long file_offset ;
  long byte_count ;
  long rows ;
  long i ;

  {
  {
# 765
  bytesperrow = (long )((unsigned long )((long )ptr->blocksperrow) *
                        (unsigned long )sizeof(JBLOCK ));
# 766
  file_offset = (long )((unsigned long )ptr->cur_start_row *
                        (unsigned long )bytesperrow);
# 768
  i = 0L;
  }
# 768
  while (i < (long )ptr->rows_in_mem) {
# 770
    if ((long )ptr->rowsperchunk < (long )ptr->rows_in_mem - i) {
      {
# 770
      rows = (long )ptr->rowsperchunk;
      }
    } else {
      {
# 770
      rows = (long )ptr->rows_in_mem - i;
      }
    }
# 772
    if (rows < (long )ptr->rows_in_array - ((long )ptr->cur_start_row + i)) {
      {
# 772
      rows = rows;
      }
    } else {
      {
# 772
      rows = (long )ptr->rows_in_array - ((long )ptr->cur_start_row + i);
      }
    }
# 774
    if (rows <= 0L) {
# 775
      break;
    }
    {
# 776
    byte_count = rows * bytesperrow;
    }
# 777
    if (writing) {
      {
# 778
      ((*(ptr->b_s_info.write_backing_store)))(cinfo, & ptr->b_s_info,
                                               (void *)(*(ptr->mem_buffer + i)),
                                               file_offset, byte_count);
      }
    } else {
      {
# 782
      ((*(ptr->b_s_info.read_backing_store)))(cinfo, & ptr->b_s_info,
                                              (void *)(*(ptr->mem_buffer + i)),
                                              file_offset, byte_count);
      }
    }
    {
# 785
    file_offset += byte_count;
# 768
    i = (long )((unsigned long )i + (unsigned long )ptr->rowsperchunk);
    }
  }
# 787
  return;
}
}
# 790
static JSAMPARRAY access_virt_sarray(j_common_ptr cinfo , jvirt_sarray_ptr ptr ,
                                     JDIMENSION start_row , boolean writable ) 
{ long ltemp ;

  {
# 798
  if (start_row >= ptr->rows_in_array) {
    {
# 799
    (cinfo->err)->msg_code = 15;
# 799
    ((*((cinfo->err)->error_exit)))(cinfo);
    }
  } else {
# 798
    if ((unsigned int )ptr->mem_buffer == (unsigned int )((void *)0)) {
      {
# 799
      (cinfo->err)->msg_code = 15;
# 799
      ((*((cinfo->err)->error_exit)))(cinfo);
      }
    }
  }
# 802
  if (start_row < ptr->cur_start_row) {
    goto _L;
  } else {
# 802
    if (start_row + ptr->unitheight > ptr->cur_start_row + ptr->rows_in_mem) {
      _L: 
# 804
      if (! ptr->b_s_open) {
        {
# 805
        (cinfo->err)->msg_code = 61;
# 805
        ((*((cinfo->err)->error_exit)))(cinfo);
        }
      }
# 807
      if (ptr->dirty) {
        {
# 808
        do_sarray_io(cinfo, ptr, 1);
# 809
        ptr->dirty = 0;
        }
      }
# 818
      if (start_row > ptr->cur_start_row) {
        {
# 819
        ptr->cur_start_row = start_row;
        }
      } else {
        {
# 824
        ltemp = ((long )start_row + (long )ptr->unitheight) -
                (long )ptr->rows_in_mem;
        }
# 826
        if (ltemp < 0L) {
          {
# 827
          ltemp = 0L;
          }
        }
        {
# 828
        ptr->cur_start_row = (unsigned int )ltemp;
        }
      }
# 834
      if (! writable) {
        {
# 835
        do_sarray_io(cinfo, ptr, 0);
        }
      }
    }
  }
# 839
  if (writable) {
    {
# 840
    ptr->dirty = 1;
    }
  }
# 842
  return (ptr->mem_buffer + (start_row - ptr->cur_start_row));
}
}
# 846
static JBLOCKARRAY access_virt_barray(j_common_ptr cinfo ,
                                      jvirt_barray_ptr ptr ,
                                      JDIMENSION start_row , boolean writable ) 
{ long ltemp ;

  {
# 854
  if (start_row >= ptr->rows_in_array) {
    {
# 855
    (cinfo->err)->msg_code = 15;
# 855
    ((*((cinfo->err)->error_exit)))(cinfo);
    }
  } else {
# 854
    if ((unsigned int )ptr->mem_buffer == (unsigned int )((void *)0)) {
      {
# 855
      (cinfo->err)->msg_code = 15;
# 855
      ((*((cinfo->err)->error_exit)))(cinfo);
      }
    }
  }
# 858
  if (start_row < ptr->cur_start_row) {
    goto _L;
  } else {
# 858
    if (start_row + ptr->unitheight > ptr->cur_start_row + ptr->rows_in_mem) {
      _L: 
# 860
      if (! ptr->b_s_open) {
        {
# 861
        (cinfo->err)->msg_code = 61;
# 861
        ((*((cinfo->err)->error_exit)))(cinfo);
        }
      }
# 863
      if (ptr->dirty) {
        {
# 864
        do_barray_io(cinfo, ptr, 1);
# 865
        ptr->dirty = 0;
        }
      }
# 874
      if (start_row > ptr->cur_start_row) {
        {
# 875
        ptr->cur_start_row = start_row;
        }
      } else {
        {
# 880
        ltemp = ((long )start_row + (long )ptr->unitheight) -
                (long )ptr->rows_in_mem;
        }
# 882
        if (ltemp < 0L) {
          {
# 883
          ltemp = 0L;
          }
        }
        {
# 884
        ptr->cur_start_row = (unsigned int )ltemp;
        }
      }
# 890
      if (! writable) {
        {
# 891
        do_barray_io(cinfo, ptr, 0);
        }
      }
    }
  }
# 895
  if (writable) {
    {
# 896
    ptr->dirty = 1;
    }
  }
# 898
  return (ptr->mem_buffer + (start_row - ptr->cur_start_row));
}
}
# 906
static void free_pool(j_common_ptr cinfo , int pool_id ) 
{ my_mem_ptr mem ;
  small_pool_ptr shdr_ptr ;
  large_pool_ptr lhdr_ptr ;
  size_t space_freed ;
  jvirt_sarray_ptr sptr ;
  jvirt_barray_ptr bptr ;
  large_pool_ptr next_lhdr_ptr ;
  small_pool_ptr next_shdr_ptr ;

  {
  {
# 909
  mem = (my_memory_mgr *)cinfo->mem;
  }
# 914
  if (pool_id < 0) {
    {
# 915
    (cinfo->err)->msg_code = 11;
# 915
    (cinfo->err)->msg_parm.i[0] = pool_id;
# 915
    ((*((cinfo->err)->error_exit)))(cinfo);
    }
  } else {
# 914
    if (pool_id >= 2) {
      {
# 915
      (cinfo->err)->msg_code = 11;
# 915
      (cinfo->err)->msg_parm.i[0] = pool_id;
# 915
      ((*((cinfo->err)->error_exit)))(cinfo);
      }
    }
  }
# 923
  if (pool_id == 1) {
    {
# 927
    sptr = mem->virt_sarray_list;
    }
# 927
    while ((unsigned int )sptr != (unsigned int )((void *)0)) {
# 928
      if (sptr->b_s_open) {
        {
# 929
        sptr->b_s_open = 0;
# 930
        ((*(sptr->b_s_info.close_backing_store)))(cinfo, & sptr->b_s_info);
        }
      }
      {
# 927
      sptr = sptr->next;
      }
    }
    {
# 933
    mem->virt_sarray_list = (struct jvirt_sarray_control *)((void *)0);
# 934
    bptr = mem->virt_barray_list;
    }
# 934
    while ((unsigned int )bptr != (unsigned int )((void *)0)) {
# 935
      if (bptr->b_s_open) {
        {
# 936
        bptr->b_s_open = 0;
# 937
        ((*(bptr->b_s_info.close_backing_store)))(cinfo, & bptr->b_s_info);
        }
      }
      {
# 934
      bptr = bptr->next;
      }
    }
    {
# 940
    mem->virt_barray_list = (struct jvirt_barray_control *)((void *)0);
    }
  }
  {
# 944
  lhdr_ptr = mem->large_list[pool_id];
# 945
  mem->large_list[pool_id] = (union large_pool_struct *)((void *)0);
  }
# 947
  while ((unsigned int )lhdr_ptr != (unsigned int )((void *)0)) {
    {
# 948
    next_lhdr_ptr = lhdr_ptr->hdr.next;
# 949
    space_freed = (lhdr_ptr->hdr.bytes_used + lhdr_ptr->hdr.bytes_left) +
                  sizeof(large_pool_hdr );
# 952
    jpeg_free_large(cinfo, (void *)lhdr_ptr, space_freed);
# 953
    mem->total_space_allocated = (long )((unsigned long )mem->total_space_allocated -
                                         (unsigned long )space_freed);
# 954
    lhdr_ptr = next_lhdr_ptr;
    }
  }
  {
# 958
  shdr_ptr = mem->small_list[pool_id];
# 959
  mem->small_list[pool_id] = (union small_pool_struct *)((void *)0);
  }
# 961
  while ((unsigned int )shdr_ptr != (unsigned int )((void *)0)) {
    {
# 962
    next_shdr_ptr = shdr_ptr->hdr.next;
# 963
    space_freed = (shdr_ptr->hdr.bytes_used + shdr_ptr->hdr.bytes_left) +
                  sizeof(small_pool_hdr );
# 966
    jpeg_free_small(cinfo, (void *)shdr_ptr, space_freed);
# 967
    mem->total_space_allocated = (long )((unsigned long )mem->total_space_allocated -
                                         (unsigned long )space_freed);
# 968
    shdr_ptr = next_shdr_ptr;
    }
  }
# 970
  return;
}
}
# 978
static void self_destruct(j_common_ptr cinfo ) 
{ int pool ;

  {
  {
# 987
  pool = 1;
  }
# 987
  while (pool >= 0) {
    {
# 988
    free_pool(cinfo, pool);
# 987
    pool --;
    }
  }
  {
# 992
  jpeg_free_small(cinfo, (void *)cinfo->mem, sizeof(my_memory_mgr ));
# 993
  cinfo->mem = (struct jpeg_memory_mgr */* __attribute__((__rtti__)) */)((struct jpeg_memory_mgr *)((void *)0));
# 995
  jpeg_mem_term(cinfo);
  }
# 996
  return;
}
}
# 1004
void jinit_memory_mgr(j_common_ptr cinfo ) 
{ my_mem_ptr mem ;
  long max_to_use ;
  int pool ;
  size_t test_mac ;
  char *memenv ;
  char ch ;
  int tmp___0 ;

  {
  {
# 1012
  cinfo->mem = (struct jpeg_memory_mgr */* __attribute__((__rtti__)) */)((struct jpeg_memory_mgr *)((void *)0));
  }
# 1021
  if ((sizeof(double ) & (sizeof(double ) - 1U)) != 0U) {
    {
# 1022
    (cinfo->err)->msg_code = 2;
# 1022
    ((*((cinfo->err)->error_exit)))(cinfo);
    }
  }
  {
# 1028
  test_mac = 1000000000U;
  }
# 1029
  if ((long )test_mac != 1000000000L) {
    {
# 1031
    (cinfo->err)->msg_code = 3;
# 1031
    ((*((cinfo->err)->error_exit)))(cinfo);
    }
  } else {
# 1029
    if (1000000000UL % (unsigned long )sizeof(double ) != 0UL) {
      {
# 1031
      (cinfo->err)->msg_code = 3;
# 1031
      ((*((cinfo->err)->error_exit)))(cinfo);
      }
    }
  }
  {
# 1033
  max_to_use = jpeg_mem_init(cinfo);
# 1036
  mem = (my_mem_ptr )jpeg_get_small(cinfo, sizeof(my_memory_mgr ));
  }
# 1038
  if ((unsigned int )mem == (unsigned int )((void *)0)) {
    {
# 1039
    jpeg_mem_term(cinfo);
# 1040
    (cinfo->err)->msg_code = 46;
# 1040
    (cinfo->err)->msg_parm.i[0] = 0;
# 1040
    ((*((cinfo->err)->error_exit)))(cinfo);
    }
  }
  {
# 1044
  mem->pub.alloc_small = & alloc_small;
# 1045
  mem->pub.alloc_large = & alloc_large;
# 1046
  mem->pub.alloc_sarray = & alloc_sarray;
# 1047
  mem->pub.alloc_barray = & alloc_barray;
# 1048
  mem->pub.request_virt_sarray = & request_virt_sarray;
# 1049
  mem->pub.request_virt_barray = & request_virt_barray;
# 1050
  mem->pub.realize_virt_arrays = & realize_virt_arrays;
# 1051
  mem->pub.access_virt_sarray = & access_virt_sarray;
# 1052
  mem->pub.access_virt_barray = & access_virt_barray;
# 1053
  mem->pub.free_pool = & free_pool;
# 1054
  mem->pub.self_destruct = & self_destruct;
# 1057
  mem->pub.max_memory_to_use = max_to_use;
# 1059
  pool = 1;
  }
# 1059
  while (pool >= 0) {
    {
# 1060
    mem->small_list[pool] = (union small_pool_struct *)((void *)0);
# 1061
    mem->large_list[pool] = (union large_pool_struct *)((void *)0);
# 1059
    pool --;
    }
  }
  {
# 1063
  mem->virt_sarray_list = (struct jvirt_sarray_control *)((void *)0);
# 1064
  mem->virt_barray_list = (struct jvirt_barray_control *)((void *)0);
# 1066
  mem->total_space_allocated = (long )sizeof(my_memory_mgr );
# 1071
  cinfo->mem = (struct jpeg_memory_mgr */* __attribute__((__rtti__)) */)((struct jpeg_memory_mgr *)mem);
# 1082
  memenv = getenv((char const   *)"JPEGMEM");
  }
# 1082
  if ((unsigned int )memenv != (unsigned int )((void *)0)) {
    {
# 1083
    ch = 'x';
# 1085
    resetSScanfCount((char const   *)memenv);
# 1085
    max_to_use = (long )ccured_fscanf_int___0(ccured_sscanf_file, "%ld");
# 1085
    ch = (char )ccured_fscanf_int___0(ccured_sscanf_file, "%c");
# 1085
    tmp___0 = getScanfCount();
    }
# 1085
    if (tmp___0 > 0) {
# 1095
      if ((int )ch == 109) {
        {
# 1096
        max_to_use *= 1000L;
        }
      } else {
# 1095
        if ((int )ch == 77) {
          {
# 1096
          max_to_use *= 1000L;
          }
        }
      }
      {
# 1097
      mem->pub.max_memory_to_use = max_to_use * 1000L;
      }
    }
  }
# 1103
  return;
}
}
# 34 "jmemnobs.c"
void *jpeg_get_small(j_common_ptr cinfo , size_t sizeofobject ) 
{ void *tmp ;

  {
  {
# 37
  tmp = malloc(sizeofobject);
  }
# 37
  return (tmp);
}
}
# 40
void jpeg_free_small(j_common_ptr cinfo , void *object , size_t sizeofobject ) 
{ 

  {
  {
# 43
  free(object);
  }
# 44
  return;
}
}
# 54
void *jpeg_get_large(j_common_ptr cinfo , size_t sizeofobject ) 
{ void *tmp ;

  {
  {
# 57
  tmp = malloc(sizeofobject);
  }
# 57
  return (tmp);
}
}
# 60
void jpeg_free_large(j_common_ptr cinfo , void *object , size_t sizeofobject ) 
{ 

  {
  {
# 63
  free(object);
  }
# 64
  return;
}
}
# 72
long jpeg_mem_available(j_common_ptr cinfo , long min_bytes_needed ,
                        long max_bytes_needed , long already_allocated ) 
{ 

  {
# 76
  return (max_bytes_needed);
}
}
# 86
void jpeg_open_backing_store(j_common_ptr cinfo , backing_store_ptr info ,
                             long total_bytes_needed ) 
{ 

  {
  {
# 90
  (cinfo->err)->msg_code = 41;
# 90
  ((*((cinfo->err)->error_exit)))(cinfo);
  }
# 91
  return;
}
}
# 99
long jpeg_mem_init(j_common_ptr cinfo ) 
{ 

  {
# 102
  return (0L);
}
}
# 105
void jpeg_mem_term(j_common_ptr cinfo ) 
{ 

  {
# 109
  return;
}
}
void __initialize__(void) 
{ 

  {
# 254 "/home/rupak/cil/include/string_wrappers.h"
  saved_str = (char const   *)((void *)0);
# 46 "libpgm1.c"
  pgm_pbmmaxval = (unsigned char )1;
# 49 "libppm1.c"
  ppm_pbmmaxval = (unsigned char )1;
# 87 "libppm5.c"
  ppmd_linetype = 0;
# 100
  ppmd_lineclip = 1;
# 326 "spec_image.c"
  histo_underflow = 0;
# 327
  histo_overflow = 0;
# 56 "spec_main.c"
  jpeg_compressed_data_max_size = 16777216;
# 57
  jpgcmpdatactsiz = 0;
}
}
