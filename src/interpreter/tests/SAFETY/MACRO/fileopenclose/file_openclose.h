struct _IO_marker;
typedef long __off_t;
typedef long long __off64_t;

typedef void _IO_lock_t;


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

typedef struct _IO_FILE FILE;
extern FILE *stderr; 
extern FILE *stdout; 

/*
extern FILE *fdopen(int __fd , char const   *__modes ) ;
extern FILE *get_stderr();
extern FILE *get_stdout();
extern int fclose(FILE *__stream ) ;
extern int fflush(FILE *__stream ) ;
extern FILE *fopen(char const   * __restrict  __filename , char const   * __restrict  __modes ) ;
extern FILE *freopen(char const   * __restrict  __filename , char const   * __restrict  __modes ,
                     FILE * __restrict  __stream ) ;
extern int fprintf(FILE * __restrict  __stream , char const   * __restrict  __format
                   , ...) ;
*/
