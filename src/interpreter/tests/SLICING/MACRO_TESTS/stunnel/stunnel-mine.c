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
   char _unused2[(int )(15 * sizeof(int ) - 2 * sizeof(void *))] ;
};
typedef struct _IO_FILE FILE;
struct _IO_marker;
void __error__(void) 
{ 

  {
  ERROR: 
  goto ERROR;
}
}
void __initialize__(void) ;
typedef unsigned int size_t;
typedef unsigned short __u_short;
typedef unsigned long long __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long __ino_t;
typedef unsigned int __mode_t;
typedef unsigned int __nlink_t;
typedef long __off_t;
typedef long long __off64_t;
typedef int __pid_t;
typedef long __time_t;
typedef long __suseconds_t;
typedef long __blksize_t;
typedef long __blkcnt_t;
typedef int __ssize_t;
typedef unsigned int __socklen_t;
typedef __u_short u_short;
typedef __gid_t gid_t;
typedef __ssize_t ssize_t;
typedef __time_t time_t;
struct __anonstruct___sigset_t_2 {
   unsigned long __val[(int )(1024 / (8 * sizeof(unsigned long )))] ;
};
typedef struct __anonstruct___sigset_t_2 __sigset_t;
typedef __sigset_t sigset_t;
struct timespec {
   __time_t tv_sec ;
   long tv_nsec ;
};
struct timeval {
   __time_t tv_sec ;
   __suseconds_t tv_usec ;
};
typedef long __fd_mask;
struct __anonstruct_fd_set_3 {
   __fd_mask __fds_bits[(int )(1024 / (8 * sizeof(__fd_mask )))] ;
};
typedef struct __anonstruct_fd_set_3 fd_set;
struct __sched_param {
   int __sched_priority ;
};
struct _pthread_fastlock {
   long __status ;
   int __spinlock ;
};
typedef struct _pthread_descr_struct *_pthread_descr;
struct __pthread_attr_s {
   int __detachstate ;
   int __schedpolicy ;
   struct __sched_param __schedparam ;
   int __inheritsched ;
   int __scope ;
   size_t __guardsize ;
   int __stackaddr_set ;
   void *__stackaddr ;
   size_t __stacksize ;
};
typedef struct __pthread_attr_s pthread_attr_t;
struct __anonstruct_pthread_mutex_t_6 {
   int __m_reserved ;
   int __m_count ;
   _pthread_descr __m_owner ;
   int __m_kind ;
   struct _pthread_fastlock __m_lock ;
};
typedef struct __anonstruct_pthread_mutex_t_6 pthread_mutex_t;
struct __anonstruct_pthread_mutexattr_t_7 {
   int __mutexkind ;
};
typedef struct __anonstruct_pthread_mutexattr_t_7 pthread_mutexattr_t;
typedef unsigned long pthread_t;
typedef struct _IO_FILE FILE;
typedef struct __ccured_va_list *__gnuc_va_list;
typedef void _IO_lock_t;
struct _IO_marker {
   struct _IO_marker *_next ;
   struct _IO_FILE *_sbuf ;
   int _pos ;
};
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
   char _unused2[(int )(15 * sizeof(int ) - 2 * sizeof(void *))] ;
};
struct __ccured_va_list {
   int next ;
};
typedef struct __ccured_va_list *__ccured_va_list;
struct tm {
   int tm_sec ;
   int tm_min ;
   int tm_hour ;
   int tm_mday ;
   int tm_mon ;
   int tm_year ;
   int tm_wday ;
   int tm_yday ;
   int tm_isdst ;
   long tm_gmtoff ;
   char const   *tm_zone ;
};
struct stat {
   __dev_t st_dev ;
   unsigned short __pad1 ;
   __ino_t st_ino ;
   __mode_t st_mode ;
   __nlink_t st_nlink ;
   __uid_t st_uid ;
   __gid_t st_gid ;
   __dev_t st_rdev ;
   unsigned short __pad2 ;
   __off_t st_size ;
   __blksize_t st_blksize ;
   __blkcnt_t st_blocks ;
   struct timespec st_atim ;
   struct timespec st_mtim ;
   struct timespec st_ctim ;
   unsigned long __unused4 ;
   unsigned long __unused5 ;
};
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef void (*__sighandler_t)(int  );
struct sigaction {
   void (*sa_handler)(int  ) ;
   __sigset_t sa_mask ;
   int sa_flags ;
   void (*sa_restorer)(void) ;
};
typedef __socklen_t socklen_t;
struct passwd {
   char *pw_name ;
   char *pw_passwd ;
   __uid_t pw_uid ;
   __gid_t pw_gid ;
   char *pw_gecos ;
   char *pw_dir ;
   char *pw_shell ;
};
struct group {
   char *gr_name ;
   char *gr_passwd ;
   __gid_t gr_gid ;
   char **gr_mem ;
};
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef uint16_t in_port_t;
typedef uint32_t in_addr_t;
struct in_addr {
   in_addr_t s_addr ;
};
typedef unsigned short sa_family_t;
struct sockaddr {
   sa_family_t sa_family ;
   char sa_data[14] ;
};
struct linger {
   int l_onoff ;
   int l_linger ;
};
struct sockaddr_in {
   sa_family_t sin_family ;
   in_port_t sin_port ;
   struct in_addr sin_addr ;
   unsigned char sin_zero[(int )(((sizeof(struct sockaddr ) -
                                   sizeof(unsigned short )) - sizeof(in_port_t )) -
                                 sizeof(struct in_addr ))] ;
};
struct winsize {
   unsigned short ws_row ;
   unsigned short ws_col ;
   unsigned short ws_xpixel ;
   unsigned short ws_ypixel ;
};
struct hostent {
   char *h_name ;
   char **h_aliases ;
   int h_addrtype ;
   int h_length ;
   char **h_addr_list ;
};
struct servent {
   char *s_name ;
   char **s_aliases ;
   int s_port ;
   char *s_proto ;
};
struct addrinfo {
   int ai_flags ;
   int ai_family ;
   int ai_socktype ;
   int ai_protocol ;
   socklen_t ai_addrlen ;
   struct sockaddr *ai_addr ;
   char *ai_canonname ;
   struct addrinfo *ai_next ;
};
struct libc_addrinfo {
   int ai_flags ;
   int ai_family ;
   int ai_socktype ;
   int ai_protocol ;
   socklen_t ai_addrlen ;
   struct sockaddr *ai_addr ;
   char *ai_canonname ;
   struct libc_addrinfo *ai_next ;
};
struct stack_st {
   int num ;
   char **data ;
   int sorted ;
   int num_alloc ;
   int (*comp)(char const   * const  * , char const   * const  * ) ;
};
typedef struct stack_st STACK;
struct crypto_ex_data_st {
   STACK *sk ;
   int dummy ;
};
typedef struct crypto_ex_data_st CRYPTO_EX_DATA;
typedef struct bio_st BIO;
typedef void bio_info_cb(struct bio_st * , int  , char const   * , int  ,
                         long  , long  );
struct bio_method_st {
   int type ;
   char const   *name ;
   int (*bwrite)(BIO * , char const   * , int  ) ;
   int (*bread)(BIO * , char * , int  ) ;
   int (*bputs)(BIO * , char const   * ) ;
   int (*bgets)(BIO * , char * , int  ) ;
   long (*ctrl)(BIO * , int  , long  , void * ) ;
   int (*create)(BIO * ) ;
   int (*destroy)(BIO * ) ;
   long (*callback_ctrl)(BIO * , int  , bio_info_cb * ) ;
};
typedef struct bio_method_st BIO_METHOD;
struct bio_st {
   BIO_METHOD *method ;
   long (*callback)(struct bio_st * , int  , char const   * , int  , long  ,
                    long  ) ;
   char *cb_arg ;
   int init ;
   int shutdown ;
   int flags ;
   int retry_reason ;
   int num ;
   void *ptr ;
   struct bio_st *next_bio ;
   struct bio_st *prev_bio ;
   int references ;
   unsigned long num_read ;
   unsigned long num_write ;
   CRYPTO_EX_DATA ex_data ;
};
struct lhash_node_st {
   void const   *data ;
   struct lhash_node_st *next ;
   unsigned long hash ;
};
typedef struct lhash_node_st LHASH_NODE;
struct lhash_st {
   LHASH_NODE **b ;
   int (*comp)(void const   * , void const   * ) ;
   unsigned long (*hash)(void const   * ) ;
   unsigned int num_nodes ;
   unsigned int num_alloc_nodes ;
   unsigned int p ;
   unsigned int pmax ;
   unsigned long up_load ;
   unsigned long down_load ;
   unsigned long num_items ;
   unsigned long num_expands ;
   unsigned long num_expand_reallocs ;
   unsigned long num_contracts ;
   unsigned long num_contract_reallocs ;
   unsigned long num_hash_calls ;
   unsigned long num_comp_calls ;
   unsigned long num_insert ;
   unsigned long num_replace ;
   unsigned long num_delete ;
   unsigned long num_no_delete ;
   unsigned long num_retrieve ;
   unsigned long num_retrieve_miss ;
   unsigned long num_hash_comps ;
   int error ;
};
struct comp_method_st {
   int type ;
   char const   *name ;
   int (*init)() ;
   void (*finish)() ;
   int (*compress)() ;
   int (*expand)() ;
   long (*ctrl)() ;
   long (*callback_ctrl)() ;
};
typedef struct comp_method_st COMP_METHOD;
struct comp_ctx_st {
   COMP_METHOD *meth ;
   unsigned long compress_in ;
   unsigned long compress_out ;
   unsigned long expand_in ;
   unsigned long expand_out ;
   CRYPTO_EX_DATA ex_data ;
};
typedef struct comp_ctx_st COMP_CTX;
struct buf_mem_st {
   int length ;
   char *data ;
   int max ;
};
typedef struct buf_mem_st BUF_MEM;
typedef struct asn1_string_st ASN1_INTEGER;
typedef struct asn1_string_st ASN1_ENUMERATED;
typedef struct asn1_string_st ASN1_BIT_STRING;
typedef struct asn1_string_st ASN1_OCTET_STRING;
typedef struct asn1_string_st ASN1_PRINTABLESTRING;
typedef struct asn1_string_st ASN1_T61STRING;
typedef struct asn1_string_st ASN1_IA5STRING;
typedef struct asn1_string_st ASN1_GENERALSTRING;
typedef struct asn1_string_st ASN1_UNIVERSALSTRING;
typedef struct asn1_string_st ASN1_BMPSTRING;
typedef struct asn1_string_st ASN1_UTCTIME;
typedef struct asn1_string_st ASN1_TIME;
typedef struct asn1_string_st ASN1_GENERALIZEDTIME;
typedef struct asn1_string_st ASN1_VISIBLESTRING;
typedef struct asn1_string_st ASN1_UTF8STRING;
typedef int ASN1_BOOLEAN;
typedef struct evp_cipher_st EVP_CIPHER;
typedef struct evp_cipher_ctx_st EVP_CIPHER_CTX;
typedef struct env_md_st EVP_MD;
typedef struct env_md_ctx_st EVP_MD_CTX;
typedef struct evp_pkey_st EVP_PKEY;
typedef struct x509_st X509;
typedef struct X509_algor_st X509_ALGOR;
typedef struct X509_crl_st X509_CRL;
typedef struct X509_name_st X509_NAME;
typedef struct x509_store_st X509_STORE;
typedef struct x509_store_ctx_st X509_STORE_CTX;
typedef struct engine_st ENGINE;
struct bignum_st {
   unsigned long *d ;
   int top ;
   int dmax ;
   int neg ;
   int flags ;
};
typedef struct bignum_st BIGNUM;
typedef struct bignum_ctx BN_CTX;
struct bn_blinding_st {
   int init ;
   BIGNUM *A ;
   BIGNUM *Ai ;
   BIGNUM *mod ;
   unsigned long thread_id ;
};
typedef struct bn_blinding_st BN_BLINDING;
struct bn_mont_ctx_st {
   int ri ;
   BIGNUM RR ;
   BIGNUM N ;
   BIGNUM Ni ;
   unsigned long n0 ;
   int flags ;
};
typedef struct bn_mont_ctx_st BN_MONT_CTX;
struct asn1_object_st {
   char const   *sn ;
   char const   *ln ;
   int nid ;
   int length ;
   unsigned char *data ;
   int flags ;
};
typedef struct asn1_object_st ASN1_OBJECT;
struct asn1_string_st {
   int length ;
   int type ;
   unsigned char *data ;
   long flags ;
};
typedef struct asn1_string_st ASN1_STRING;
union __anonunion_value_55 {
   char *ptr ;
   ASN1_BOOLEAN boolean ;
   ASN1_STRING *asn1_string ;
   ASN1_OBJECT *object ;
   ASN1_INTEGER *integer ;
   ASN1_ENUMERATED *enumerated ;
   ASN1_BIT_STRING *bit_string ;
   ASN1_OCTET_STRING *octet_string ;
   ASN1_PRINTABLESTRING *printablestring ;
   ASN1_T61STRING *t61string ;
   ASN1_IA5STRING *ia5string ;
   ASN1_GENERALSTRING *generalstring ;
   ASN1_BMPSTRING *bmpstring ;
   ASN1_UNIVERSALSTRING *universalstring ;
   ASN1_UTCTIME *utctime ;
   ASN1_GENERALIZEDTIME *generalizedtime ;
   ASN1_VISIBLESTRING *visiblestring ;
   ASN1_UTF8STRING *utf8string ;
   ASN1_STRING *set ;
   ASN1_STRING *sequence ;
};
struct asn1_type_st {
   int type ;
   union __anonunion_value_55 value ;
};
typedef struct asn1_type_st ASN1_TYPE;
typedef struct rsa_st RSA;
struct rsa_meth_st {
   char const   *name ;
   int (*rsa_pub_enc)(int flen , unsigned char const   *from ,
                      unsigned char *to , RSA *rsa , int padding ) ;
   int (*rsa_pub_dec)(int flen , unsigned char const   *from ,
                      unsigned char *to , RSA *rsa , int padding ) ;
   int (*rsa_priv_enc)(int flen , unsigned char const   *from ,
                       unsigned char *to , RSA *rsa , int padding ) ;
   int (*rsa_priv_dec)(int flen , unsigned char const   *from ,
                       unsigned char *to , RSA *rsa , int padding ) ;
   int (*rsa_mod_exp)(BIGNUM *r0 , BIGNUM const   *I , RSA *rsa ) ;
   int (*bn_mod_exp)(BIGNUM *r , BIGNUM const   *a , BIGNUM const   *p ,
                     BIGNUM const   *m , BN_CTX *ctx , BN_MONT_CTX *m_ctx ) ;
   int (*init)(RSA *rsa ) ;
   int (*finish)(RSA *rsa ) ;
   int flags ;
   char *app_data ;
   int (*rsa_sign)(int type , unsigned char const   *m , unsigned int m_length ,
                   unsigned char *sigret , unsigned int *siglen ,
                   RSA const   *rsa ) ;
   int (*rsa_verify)(int dtype , unsigned char const   *m ,
                     unsigned int m_length , unsigned char *sigbuf ,
                     unsigned int siglen , RSA const   *rsa ) ;
};
typedef struct rsa_meth_st RSA_METHOD;
struct rsa_st {
   int pad ;
   long version ;
   RSA_METHOD const   *meth ;
   ENGINE *engine ;
   BIGNUM *n ;
   BIGNUM *e ;
   BIGNUM *d ;
   BIGNUM *p ;
   BIGNUM *q ;
   BIGNUM *dmp1 ;
   BIGNUM *dmq1 ;
   BIGNUM *iqmp ;
   CRYPTO_EX_DATA ex_data ;
   int references ;
   int flags ;
   BN_MONT_CTX *_method_mod_n ;
   BN_MONT_CTX *_method_mod_p ;
   BN_MONT_CTX *_method_mod_q ;
   char *bignum_data ;
   BN_BLINDING *blinding ;
};
typedef struct dh_st DH;
struct dh_method {
   char const   *name ;
   int (*generate_key)(DH *dh ) ;
   int (*compute_key)(unsigned char *key , BIGNUM const   *pub_key , DH *dh ) ;
   int (*bn_mod_exp)(DH const   *dh , BIGNUM *r , BIGNUM const   *a ,
                     BIGNUM const   *p , BIGNUM const   *m , BN_CTX *ctx ,
                     BN_MONT_CTX *m_ctx ) ;
   int (*init)(DH *dh ) ;
   int (*finish)(DH *dh ) ;
   int flags ;
   char *app_data ;
};
typedef struct dh_method DH_METHOD;
struct dh_st {
   int pad ;
   int version ;
   BIGNUM *p ;
   BIGNUM *g ;
   long length ;
   BIGNUM *pub_key ;
   BIGNUM *priv_key ;
   int flags ;
   char *method_mont_p ;
   BIGNUM *q ;
   BIGNUM *j ;
   unsigned char *seed ;
   int seedlen ;
   BIGNUM *counter ;
   int references ;
   CRYPTO_EX_DATA ex_data ;
   DH_METHOD const   *meth ;
   ENGINE *engine ;
};
typedef struct dsa_st DSA;
struct DSA_SIG_st {
   BIGNUM *r ;
   BIGNUM *s ;
};
typedef struct DSA_SIG_st DSA_SIG;
struct dsa_method {
   char const   *name ;
   DSA_SIG *(*dsa_do_sign)(unsigned char const   *dgst , int dlen , DSA *dsa ) ;
   int (*dsa_sign_setup)(DSA *dsa , BN_CTX *ctx_in , BIGNUM **kinvp ,
                         BIGNUM **rp ) ;
   int (*dsa_do_verify)(unsigned char const   *dgst , int dgst_len ,
                        DSA_SIG *sig , DSA *dsa ) ;
   int (*dsa_mod_exp)(DSA *dsa , BIGNUM *rr , BIGNUM *a1 , BIGNUM *p1 ,
                      BIGNUM *a2 , BIGNUM *p2 , BIGNUM *m , BN_CTX *ctx ,
                      BN_MONT_CTX *in_mont ) ;
   int (*bn_mod_exp)(DSA *dsa , BIGNUM *r , BIGNUM *a , BIGNUM const   *p ,
                     BIGNUM const   *m , BN_CTX *ctx , BN_MONT_CTX *m_ctx ) ;
   int (*init)(DSA *dsa ) ;
   int (*finish)(DSA *dsa ) ;
   int flags ;
   char *app_data ;
};
typedef struct dsa_method DSA_METHOD;
struct dsa_st {
   int pad ;
   long version ;
   int write_params ;
   BIGNUM *p ;
   BIGNUM *q ;
   BIGNUM *g ;
   BIGNUM *pub_key ;
   BIGNUM *priv_key ;
   BIGNUM *kinv ;
   BIGNUM *r ;
   int flags ;
   char *method_mont_p ;
   int references ;
   CRYPTO_EX_DATA ex_data ;
   DSA_METHOD const   *meth ;
   ENGINE *engine ;
};
union __anonunion_pkey_56 {
   char *ptr ;
   struct rsa_st *rsa ;
   struct dsa_st *dsa ;
   struct dh_st *dh ;
};
struct evp_pkey_st {
   int type ;
   int save_type ;
   int references ;
   union __anonunion_pkey_56 pkey ;
   int save_parameters ;
   STACK *attributes ;
};
struct env_md_st {
   int type ;
   int pkey_type ;
   int md_size ;
   unsigned long flags ;
   int (*init)(EVP_MD_CTX *ctx ) ;
   int (*update)(EVP_MD_CTX *ctx , void const   *data , unsigned long count ) ;
   int (*final)(EVP_MD_CTX *ctx , unsigned char *md ) ;
   int (*copy)(EVP_MD_CTX *to , EVP_MD_CTX const   *from ) ;
   int (*cleanup)(EVP_MD_CTX *ctx ) ;
   int (*sign)() ;
   int (*verify)() ;
   int required_pkey_type[5] ;
   int block_size ;
   int ctx_size ;
};
struct env_md_ctx_st {
   EVP_MD const   *digest ;
   ENGINE *engine ;
   unsigned long flags ;
   void *md_data ;
};
struct evp_cipher_st {
   int nid ;
   int block_size ;
   int key_len ;
   int iv_len ;
   unsigned long flags ;
   int (*init)(EVP_CIPHER_CTX *ctx , unsigned char const   *key ,
               unsigned char const   *iv , int enc ) ;
   int (*do_cipher)(EVP_CIPHER_CTX *ctx , unsigned char *out ,
                    unsigned char const   *in , unsigned int inl ) ;
   int (*cleanup)(EVP_CIPHER_CTX * ) ;
   int ctx_size ;
   int (*set_asn1_parameters)(EVP_CIPHER_CTX * , ASN1_TYPE * ) ;
   int (*get_asn1_parameters)(EVP_CIPHER_CTX * , ASN1_TYPE * ) ;
   int (*ctrl)(EVP_CIPHER_CTX * , int type , int arg , void *ptr ) ;
   void *app_data ;
};
struct evp_cipher_ctx_st {
   EVP_CIPHER const   *cipher ;
   ENGINE *engine ;
   int encrypt ;
   int buf_len ;
   unsigned char oiv[16] ;
   unsigned char iv[16] ;
   unsigned char buf[32] ;
   int num ;
   void *app_data ;
   int key_len ;
   unsigned long flags ;
   void *cipher_data ;
   int final_used ;
   int block_mask ;
   unsigned char final[32] ;
};
struct X509_algor_st {
   ASN1_OBJECT *algorithm ;
   ASN1_TYPE *parameter ;
};
struct X509_val_st {
   ASN1_TIME *notBefore ;
   ASN1_TIME *notAfter ;
};
typedef struct X509_val_st X509_VAL;
struct X509_pubkey_st {
   X509_ALGOR *algor ;
   ASN1_BIT_STRING *public_key ;
   EVP_PKEY *pkey ;
};
typedef struct X509_pubkey_st X509_PUBKEY;
struct X509_name_st {
   STACK *entries ;
   int modified ;
   BUF_MEM *bytes ;
   unsigned long hash ;
};
struct x509_cinf_st {
   ASN1_INTEGER *version ;
   ASN1_INTEGER *serialNumber ;
   X509_ALGOR *signature ;
   X509_NAME *issuer ;
   X509_VAL *validity ;
   X509_NAME *subject ;
   X509_PUBKEY *key ;
   ASN1_BIT_STRING *issuerUID ;
   ASN1_BIT_STRING *subjectUID ;
   STACK *extensions ;
};
typedef struct x509_cinf_st X509_CINF;
struct x509_cert_aux_st {
   STACK *trust ;
   STACK *reject ;
   ASN1_UTF8STRING *alias ;
   ASN1_OCTET_STRING *keyid ;
   STACK *other ;
};
typedef struct x509_cert_aux_st X509_CERT_AUX;
struct x509_st {
   X509_CINF *cert_info ;
   X509_ALGOR *sig_alg ;
   ASN1_BIT_STRING *signature ;
   int valid ;
   int references ;
   char *name ;
   CRYPTO_EX_DATA ex_data ;
   long ex_pathlen ;
   unsigned long ex_flags ;
   unsigned long ex_kusage ;
   unsigned long ex_xkusage ;
   unsigned long ex_nscert ;
   ASN1_OCTET_STRING *skid ;
   struct AUTHORITY_KEYID_st *akid ;
   unsigned char sha1_hash[20] ;
   X509_CERT_AUX *aux ;
};
struct X509_revoked_st {
   ASN1_INTEGER *serialNumber ;
   ASN1_TIME *revocationDate ;
   STACK *extensions ;
   int sequence ;
};
typedef struct X509_revoked_st X509_REVOKED;
struct X509_crl_info_st {
   ASN1_INTEGER *version ;
   X509_ALGOR *sig_alg ;
   X509_NAME *issuer ;
   ASN1_TIME *lastUpdate ;
   ASN1_TIME *nextUpdate ;
   STACK *revoked ;
   STACK *extensions ;
};
typedef struct X509_crl_info_st X509_CRL_INFO;
struct X509_crl_st {
   X509_CRL_INFO *crl ;
   X509_ALGOR *sig_alg ;
   ASN1_BIT_STRING *signature ;
   int references ;
};
union __anonunion_data_58 {
   char *ptr ;
   X509 *x509 ;
   X509_CRL *crl ;
   EVP_PKEY *pkey ;
};
struct x509_object_st {
   int type ;
   union __anonunion_data_58 data ;
};
typedef struct x509_object_st X509_OBJECT;
typedef struct x509_lookup_st X509_LOOKUP;
struct x509_lookup_method_st {
   char const   *name ;
   int (*new_item)(X509_LOOKUP *ctx ) ;
   void (*free)(X509_LOOKUP *ctx ) ;
   int (*init)(X509_LOOKUP *ctx ) ;
   int (*shutdown)(X509_LOOKUP *ctx ) ;
   int (*ctrl)(X509_LOOKUP *ctx , int cmd , char const   *argc , long argl ,
               char **ret ) ;
   int (*get_by_subject)(X509_LOOKUP *ctx , int type , X509_NAME *name ,
                         X509_OBJECT *ret ) ;
   int (*get_by_issuer_serial)(X509_LOOKUP *ctx , int type , X509_NAME *name ,
                               ASN1_INTEGER *serial , X509_OBJECT *ret ) ;
   int (*get_by_fingerprint)(X509_LOOKUP *ctx , int type ,
                             unsigned char *bytes , int len , X509_OBJECT *ret ) ;
   int (*get_by_alias)(X509_LOOKUP *ctx , int type , char *str , int len ,
                       X509_OBJECT *ret ) ;
};
typedef struct x509_lookup_method_st X509_LOOKUP_METHOD;
struct x509_store_st {
   int cache ;
   STACK *objs ;
   STACK *get_cert_methods ;
   unsigned long flags ;
   int purpose ;
   int trust ;
   int (*verify)(X509_STORE_CTX *ctx ) ;
   int (*verify_cb)(int ok , X509_STORE_CTX *ctx ) ;
   int (*get_issuer)(X509 **issuer , X509_STORE_CTX *ctx , X509 *x ) ;
   int (*check_issued)(X509_STORE_CTX *ctx , X509 *x , X509 *issuer ) ;
   int (*check_revocation)(X509_STORE_CTX *ctx ) ;
   int (*get_crl)(X509_STORE_CTX *ctx , X509_CRL **crl , X509 *x ) ;
   int (*check_crl)(X509_STORE_CTX *ctx , X509_CRL *crl ) ;
   int (*cert_crl)(X509_STORE_CTX *ctx , X509_CRL *crl , X509 *x ) ;
   int (*cleanup)(X509_STORE_CTX *ctx ) ;
   CRYPTO_EX_DATA ex_data ;
   int references ;
   int depth ;
};
struct x509_lookup_st {
   int init ;
   int skip ;
   X509_LOOKUP_METHOD *method ;
   char *method_data ;
   X509_STORE *store_ctx ;
};
struct x509_store_ctx_st {
   X509_STORE *ctx ;
   int current_method ;
   X509 *cert ;
   STACK *untrusted ;
   int purpose ;
   int trust ;
   time_t check_time ;
   unsigned long flags ;
   void *other_ctx ;
   int (*verify)(X509_STORE_CTX *ctx ) ;
   int (*verify_cb)(int ok , X509_STORE_CTX *ctx ) ;
   int (*get_issuer)(X509 **issuer , X509_STORE_CTX *ctx , X509 *x ) ;
   int (*check_issued)(X509_STORE_CTX *ctx , X509 *x , X509 *issuer ) ;
   int (*check_revocation)(X509_STORE_CTX *ctx ) ;
   int (*get_crl)(X509_STORE_CTX *ctx , X509_CRL **crl , X509 *x ) ;
   int (*check_crl)(X509_STORE_CTX *ctx , X509_CRL *crl ) ;
   int (*cert_crl)(X509_STORE_CTX *ctx , X509_CRL *crl , X509 *x ) ;
   int (*cleanup)(X509_STORE_CTX *ctx ) ;
   int depth ;
   int valid ;
   int last_untrusted ;
   STACK *chain ;
   int error_depth ;
   int error ;
   X509 *current_cert ;
   X509 *current_issuer ;
   X509_CRL *current_crl ;
   CRYPTO_EX_DATA ex_data ;
};
typedef int pem_password_cb(char *buf , int size , int rwflag , void *userdata );
struct ssl_cipher_st {
   int valid ;
   char const   *name ;
   unsigned long id ;
   unsigned long algorithms ;
   unsigned long algo_strength ;
   unsigned long algorithm2 ;
   int strength_bits ;
   int alg_bits ;
   unsigned long mask ;
   unsigned long mask_strength ;
};
typedef struct ssl_cipher_st SSL_CIPHER;
typedef struct ssl_st SSL;
typedef struct ssl_ctx_st SSL_CTX;
struct ssl_method_st {
   int version ;
   int (*ssl_new)(SSL *s ) ;
   void (*ssl_clear)(SSL *s ) ;
   void (*ssl_free)(SSL *s ) ;
   int (*ssl_accept)(SSL *s ) ;
   int (*ssl_connect)(SSL *s ) ;
   int (*ssl_read)(SSL *s , void *buf , int len ) ;
   int (*ssl_peek)(SSL *s , void *buf , int len ) ;
   int (*ssl_write)(SSL *s , void const   *buf , int len ) ;
   int (*ssl_shutdown)(SSL *s ) ;
   int (*ssl_renegotiate)(SSL *s ) ;
   int (*ssl_renegotiate_check)(SSL *s ) ;
   long (*ssl_ctrl)(SSL *s , int cmd , long larg , void *parg ) ;
   long (*ssl_ctx_ctrl)(SSL_CTX *ctx , int cmd , long larg , void *parg ) ;
   SSL_CIPHER *(*get_cipher_by_char)(unsigned char const   *ptr ) ;
   int (*put_cipher_by_char)(SSL_CIPHER const   *cipher , unsigned char *ptr ) ;
   int (*ssl_pending)(SSL *s ) ;
   int (*num_ciphers)(void) ;
   SSL_CIPHER *(*get_cipher)(unsigned int ncipher ) ;
   struct ssl_method_st *(*get_ssl_method)(int version ) ;
   long (*get_timeout)(void) ;
   struct ssl3_enc_method *ssl3_enc ;
   int (*ssl_version)() ;
   long (*ssl_callback_ctrl)(SSL *s , int cb_id , void (*fp)() ) ;
   long (*ssl_ctx_callback_ctrl)(SSL_CTX *s , int cb_id , void (*fp)() ) ;
};
typedef struct ssl_method_st SSL_METHOD;
struct ssl_session_st {
   int ssl_version ;
   unsigned int key_arg_length ;
   unsigned char key_arg[8] ;
   int master_key_length ;
   unsigned char master_key[48] ;
   unsigned int session_id_length ;
   unsigned char session_id[32] ;
   unsigned int sid_ctx_length ;
   unsigned char sid_ctx[32] ;
   int not_resumable ;
   struct sess_cert_st *sess_cert ;
   X509 *peer ;
   long verify_result ;
   int references ;
   long timeout ;
   long time ;
   int compress_meth ;
   SSL_CIPHER *cipher ;
   unsigned long cipher_id ;
   STACK *ciphers ;
   CRYPTO_EX_DATA ex_data ;
   struct ssl_session_st *prev ;
   struct ssl_session_st *next ;
};
typedef struct ssl_session_st SSL_SESSION;
struct ssl_comp_st {
   int id ;
   char *name ;
   COMP_METHOD *method ;
};
typedef struct ssl_comp_st SSL_COMP;
struct __anonstruct_stats_62 {
   int sess_connect ;
   int sess_connect_renegotiate ;
   int sess_connect_good ;
   int sess_accept ;
   int sess_accept_renegotiate ;
   int sess_accept_good ;
   int sess_miss ;
   int sess_timeout ;
   int sess_cache_full ;
   int sess_hit ;
   int sess_cb_hit ;
};
struct ssl_ctx_st {
   SSL_METHOD *method ;
   STACK *cipher_list ;
   STACK *cipher_list_by_id ;
   struct x509_store_st *cert_store ;
   struct lhash_st *sessions ;
   unsigned long session_cache_size ;
   struct ssl_session_st *session_cache_head ;
   struct ssl_session_st *session_cache_tail ;
   int session_cache_mode ;
   long session_timeout ;
   int (*new_session_cb)(struct ssl_st *ssl , SSL_SESSION *sess ) ;
   void (*remove_session_cb)(struct ssl_ctx_st *ctx , SSL_SESSION *sess ) ;
   SSL_SESSION *(*get_session_cb)(struct ssl_st *ssl , unsigned char *data ,
                                  int len , int *copy ) ;
   struct __anonstruct_stats_62 stats ;
   int references ;
   int (*app_verify_callback)(X509_STORE_CTX * , void * ) ;
   void *app_verify_arg ;
   pem_password_cb *default_passwd_callback ;
   void *default_passwd_callback_userdata ;
   int (*client_cert_cb)(SSL *ssl , X509 **x509 , EVP_PKEY **pkey ) ;
   CRYPTO_EX_DATA ex_data ;
   EVP_MD const   *rsa_md5 ;
   EVP_MD const   *md5 ;
   EVP_MD const   *sha1 ;
   STACK *extra_certs ;
   STACK *comp_methods ;
   void (*info_callback)(SSL const   *ssl , int type , int val ) ;
   STACK *client_CA ;
   unsigned long options ;
   unsigned long mode ;
   long max_cert_list ;
   struct cert_st *cert ;
   int read_ahead ;
   void (*msg_callback)(int write_p , int version , int content_type ,
                        void const   *buf , size_t len , SSL *ssl , void *arg ) ;
   void *msg_callback_arg ;
   int verify_mode ;
   int verify_depth ;
   unsigned int sid_ctx_length ;
   unsigned char sid_ctx[32] ;
   int (*default_verify_callback)(int ok , X509_STORE_CTX *ctx ) ;
   int (*generate_session_id)(SSL const   *ssl , unsigned char *id ,
                              unsigned int *id_len ) ;
   int purpose ;
   int trust ;
   int quiet_shutdown ;
};
struct ssl_st {
   int version ;
   int type ;
   SSL_METHOD *method ;
   BIO *rbio ;
   BIO *wbio ;
   BIO *bbio ;
   int rwstate ;
   int in_handshake ;
   int (*handshake_func)() ;
   int server ;
   int new_session ;
   int quiet_shutdown ;
   int shutdown ;
   int state ;
   int rstate ;
   BUF_MEM *init_buf ;
   void *init_msg ;
   int init_num ;
   int init_off ;
   unsigned char *packet ;
   unsigned int packet_length ;
   struct ssl2_state_st *s2 ;
   struct ssl3_state_st *s3 ;
   int read_ahead ;
   void (*msg_callback)(int write_p , int version , int content_type ,
                        void const   *buf , size_t len , SSL *ssl , void *arg ) ;
   void *msg_callback_arg ;
   int hit ;
   int purpose ;
   int trust ;
   STACK *cipher_list ;
   STACK *cipher_list_by_id ;
   EVP_CIPHER_CTX *enc_read_ctx ;
   EVP_MD const   *read_hash ;
   COMP_CTX *expand ;
   EVP_CIPHER_CTX *enc_write_ctx ;
   EVP_MD const   *write_hash ;
   COMP_CTX *compress ;
   struct cert_st *cert ;
   unsigned int sid_ctx_length ;
   unsigned char sid_ctx[32] ;
   SSL_SESSION *session ;
   int (*generate_session_id)(SSL const   *ssl , unsigned char *id ,
                              unsigned int *id_len ) ;
   int verify_mode ;
   int verify_depth ;
   int (*verify_callback)(int ok , X509_STORE_CTX *ctx ) ;
   void (*info_callback)(SSL const   *ssl , int type , int val ) ;
   int error ;
   int error_code ;
   SSL_CTX *ctx ;
   int debug ;
   long verify_result ;
   CRYPTO_EX_DATA ex_data ;
   STACK *client_CA ;
   int references ;
   unsigned long options ;
   unsigned long mode ;
   long max_cert_list ;
   int first_packet ;
   int client_version ;
};
struct __anonstruct_tmp_63 {
   unsigned int conn_id_length ;
   unsigned int cert_type ;
   unsigned int cert_length ;
   unsigned int csl ;
   unsigned int clear ;
   unsigned int enc ;
   unsigned char ccl[32] ;
   unsigned int cipher_spec_length ;
   unsigned int session_id_length ;
   unsigned int clen ;
   unsigned int rlen ;
};
struct ssl2_state_st {
   int three_byte_header ;
   int clear_text ;
   int escape ;
   int ssl2_rollback ;
   unsigned int wnum ;
   int wpend_tot ;
   unsigned char const   *wpend_buf ;
   int wpend_off ;
   int wpend_len ;
   int wpend_ret ;
   int rbuf_left ;
   int rbuf_offs ;
   unsigned char *rbuf ;
   unsigned char *wbuf ;
   unsigned char *write_ptr ;
   unsigned int padding ;
   unsigned int rlength ;
   int ract_data_length ;
   unsigned int wlength ;
   int wact_data_length ;
   unsigned char *ract_data ;
   unsigned char *wact_data ;
   unsigned char *mac_data ;
   unsigned char *read_key ;
   unsigned char *write_key ;
   unsigned int challenge_length ;
   unsigned char challenge[32] ;
   unsigned int conn_id_length ;
   unsigned char conn_id[16] ;
   unsigned int key_material_length ;
   unsigned char key_material[48] ;
   unsigned long read_sequence ;
   unsigned long write_sequence ;
   struct __anonstruct_tmp_63 tmp ;
};
struct ssl3_record_st {
   int type ;
   unsigned int length ;
   unsigned int off ;
   unsigned char *data ;
   unsigned char *input ;
   unsigned char *comp ;
};
typedef struct ssl3_record_st SSL3_RECORD;
struct ssl3_buffer_st {
   unsigned char *buf ;
   size_t len ;
   int offset ;
   int left ;
};
typedef struct ssl3_buffer_st SSL3_BUFFER;
struct __anonstruct_tmp_64 {
   unsigned char cert_verify_md[72] ;
   unsigned char finish_md[72] ;
   int finish_md_len ;
   unsigned char peer_finish_md[72] ;
   int peer_finish_md_len ;
   unsigned long message_size ;
   int message_type ;
   SSL_CIPHER *new_cipher ;
   DH *dh ;
   int next_state ;
   int reuse_message ;
   int cert_req ;
   int ctype_num ;
   char ctype[7] ;
   STACK *ca_names ;
   int use_rsa_tmp ;
   int key_block_length ;
   unsigned char *key_block ;
   EVP_CIPHER const   *new_sym_enc ;
   EVP_MD const   *new_hash ;
   SSL_COMP const   *new_compression ;
   int cert_request ;
};
struct ssl3_state_st {
   long flags ;
   int delay_buf_pop_ret ;
   unsigned char read_sequence[8] ;
   unsigned char read_mac_secret[36] ;
   unsigned char write_sequence[8] ;
   unsigned char write_mac_secret[36] ;
   unsigned char server_random[32] ;
   unsigned char client_random[32] ;
   int need_empty_fragments ;
   int empty_fragment_done ;
   SSL3_BUFFER rbuf ;
   SSL3_BUFFER wbuf ;
   SSL3_RECORD rrec ;
   SSL3_RECORD wrec ;
   unsigned char alert_fragment[2] ;
   unsigned int alert_fragment_len ;
   unsigned char handshake_fragment[4] ;
   unsigned int handshake_fragment_len ;
   unsigned int wnum ;
   int wpend_tot ;
   int wpend_type ;
   int wpend_ret ;
   unsigned char const   *wpend_buf ;
   EVP_MD_CTX finish_dgst1 ;
   EVP_MD_CTX finish_dgst2 ;
   int change_cipher_spec ;
   int warn_alert ;
   int fatal_alert ;
   int alert_dispatch ;
   unsigned char send_alert[2] ;
   int renegotiate ;
   int total_renegotiations ;
   int num_renegotiations ;
   int in_read_app_data ;
   struct __anonstruct_tmp_64 tmp ;
};
enum __anonenum_section_code_65 {
    CRIT_KEYGEN = 0, 
    CRIT_NTOA = 1, 
    CRIT_CLIENTS = 2, 
    CRIT_WIN_LOG = 3, 
    CRIT_SECTIONS = 4,  };
typedef enum __anonenum_section_code_65 section_code;
struct __anonstruct_option_67 {
   unsigned int cert : 1 ;
   unsigned int client : 1 ;
   unsigned int foreground : 1 ;
   unsigned int syslog : 1 ;
   unsigned int rand_write : 1 ;
};
struct __anonstruct_GLOBAL_OPTIONS_66 {
   char *ca_dir ;
   char *ca_file ;
   char *crl_dir ;
   char *crl_file ;
   char *cipher_list ;
   char *cert ;
   char *egd_sock ;
   char *key ;
   char *rand_file ;
   int random_bytes ;
   long session_timeout ;
   int verify_level ;
   int verify_use_only_my ;
   long ssl_options ;
   char *chroot_dir ;
   unsigned long dpid ;
   char *pidfile ;
   char *setuid_user ;
   char *setgid_group ;
   int debug_level ;
   int facility ;
   char *output_file ;
   struct __anonstruct_option_67 option ;
};
typedef struct __anonstruct_GLOBAL_OPTIONS_66 GLOBAL_OPTIONS;
struct __anonstruct_option_68 {
   unsigned int delayed_lookup : 1 ;
   unsigned int accept : 1 ;
   unsigned int remote : 1 ;
   unsigned int program : 1 ;
   unsigned int pty : 1 ;
   unsigned int transparent : 1 ;
};
struct local_options {
   struct local_options *next ;
   char local_address[16] ;
   char *servname ;
   int fd ;
   unsigned short localport ;
   unsigned short remoteport ;
   char *execname ;
   char **execargs ;
   u32 *localnames ;
   u32 *remotenames ;
   u32 *local_ip ;
   char *username ;
   char *remote_address ;
   int timeout_busy ;
   int timeout_idle ;
   int timeout_close ;
   char *protocol ;
   struct __anonstruct_option_68 option ;
};
typedef struct local_options LOCAL_OPTIONS;
enum __anonenum_VAL_TYPE_69 {
    TYPE_NONE = 0, 
    TYPE_FLAG = 1, 
    TYPE_INT = 2, 
    TYPE_LINGER = 3, 
    TYPE_TIMEVAL = 4, 
    TYPE_STRING = 5,  };
typedef enum __anonenum_VAL_TYPE_69 VAL_TYPE;
union __anonunion_OPT_UNION_70 {
   int i_val ;
   long l_val ;
   char c_val[16] ;
   struct linger linger_val ;
   struct timeval timeval_val ;
};
typedef union __anonunion_OPT_UNION_70 OPT_UNION;
struct __anonstruct_SOCK_OPT_71 {
   char *opt_str ;
   int opt_level ;
   int opt_name ;
   VAL_TYPE opt_type ;
   OPT_UNION *opt_val[3] ;
};
typedef struct __anonstruct_SOCK_OPT_71 SOCK_OPT;
struct __anonstruct_FD_72 {
   int fd ;
   int rd ;
   int wr ;
   int is_socket ;
};
typedef struct __anonstruct_FD_72 FD;
struct __anonstruct_CLI_73 {
   LOCAL_OPTIONS *opt ;
   char accepting_address[16] ;
   char connecting_address[16] ;
   struct sockaddr_in addr ;
   FD local_rfd ;
   FD local_wfd ;
   FD remote_fd ;
   SSL *ssl ;
   int bind_ip ;
   unsigned long pid ;
   u32 *resolved_addresses ;
   char sock_buff[16384] ;
   char ssl_buff[16384] ;
   int sock_ptr ;
   int ssl_ptr ;
   FD *sock_rfd ;
   FD *sock_wfd ;
   FD *ssl_rfd ;
   FD *ssl_wfd ;
   int sock_bytes ;
   int ssl_bytes ;
};
typedef struct __anonstruct_CLI_73 CLI;
struct host_info {
   char name[128] ;
   char addr[128] ;
   struct sockaddr_in *sin ;
   struct t_unitdata *unit ;
   struct request_info *request ;
};
struct request_info {
   int fd ;
   char user[128] ;
   char daemon[128] ;
   char pid[10] ;
   struct host_info client[1] ;
   struct host_info server[1] ;
   void (*sink)() ;
   void (*hostname)() ;
   void (*hostaddr)() ;
   void (*cleanup)() ;
   struct netconfig *config ;
};
enum __anonenum_CMD_74 {
    CMD_INIT = 0, 
    CMD_EXEC = 1, 
    CMD_DEFAULT = 2, 
    CMD_HELP = 3,  };
typedef enum __anonenum_CMD_74 CMD;
struct __anonstruct_facilitylevel_75 {
   char *name ;
   int value ;
};
typedef struct __anonstruct_facilitylevel_75 facilitylevel;
struct __anonstruct_ssl_opts_76 {
   char *name ;
   long value ;
};
union __anonunion___u_74 {
   int __in ;
   int __i ;
};
union __anonunion___u_75 {
   int __in ;
   int __i ;
};
union __anonunion___u_76 {
   int __in ;
   int __i ;
};
struct keytabstruct {
   RSA *key ;
   time_t timeout ;
};
typedef unsigned char cc_t;
typedef unsigned int speed_t;
typedef unsigned int tcflag_t;
struct termios {
   tcflag_t c_iflag ;
   tcflag_t c_oflag ;
   tcflag_t c_cflag ;
   tcflag_t c_lflag ;
   cc_t c_line ;
   cc_t c_cc[32] ;
   speed_t c_ispeed ;
   speed_t c_ospeed ;
};
struct ssl3_enc_method;
struct cert_st;
struct _pthread_descr_struct;
struct sess_cert_st;
struct bignum_ctx;
struct netconfig;
struct t_unitdata;
struct engine_st;
struct AUTHORITY_KEYID_st;
extern void *wrapperAlloc(unsigned int  ) ;
extern void *__ptrof_nocheck(void *ptr ) ;
extern void *__endof(void *ptr ) ;
extern void *__ptrof(void *ptr ) ;
extern void __verify_nul(char const   *ptr ) ;
extern char *__stringof(char const   *ptr ) ;
extern void *__mkptr(void *p , void *phome ) ;
extern void *__mkptr_size(void *p , unsigned int len ) ;
extern char *__mkptr_string(char *p ) ;
extern void *__trusted_cast(void *p ) ;
extern void *__trusted_deepcast(void *p ) ;
extern int __ccured_has_empty_mangling(unsigned int  ) ;
extern time_t time(time_t *__timer ) ;
extern int select(int __nfds , fd_set * __readfds ,
                  fd_set * __writefds ,
                  fd_set * __exceptfds ,
                  struct timeval * __timeout ) ;
FILE *get_stderr(void) ;
extern void *malloc(size_t __size ) ;
FILE *get_stderr(void) 
{ FILE *f ;

  {
  {
  f = (FILE *)malloc(sizeof(FILE ));
  f->__BLAST_FLAG = 1;
  }
  return (f);
}
}
int fclose(FILE *__stream ) ;
int fclose(FILE *__stream ) 
{ 

  {
  }
  return (0);
}

extern int fflush(FILE *__stream ) ;
FILE *fopen(char const   * __filename ,
            char const   * __modes ) ;
FILE *fopen(char const   * __filename ,
            char const   * __modes ) 
{ FILE *f ;
  FILE *tmp ;

  {
  {
  tmp = (FILE *)malloc(sizeof(FILE ));
  f = tmp;
  f->__BLAST_FLAG = 1;
  }
  return (f);
}
}
FILE *fdopen(int __fd , char const   *__modes ) ;
FILE *fdopen(int __fd , char const   *__modes ) 
{ FILE *f ;
  FILE *tmp ;

  {
  {
  tmp = (FILE *)malloc(sizeof(FILE ));
  f = tmp;
  f->__BLAST_FLAG = 1;
  }
  return (f);
}
}
int fprintf(FILE * __stream , char const   * __format 
            , ...) ;
int fprintf(FILE * __stream , char const   * __format 
            , ...) 
{ 

  {
}
}
extern int sprintf(char * __s , char const   * __format 
                   , ...) ;
extern int snprintf(char * __s , size_t __maxlen ,
                    char const   * __format  , ...) ;
extern int vsnprintf(char * __s , size_t __maxlen ,
                     char const   * __format , __gnuc_va_list __arg ) ;
extern int sscanf(char const   * __s ,
                  char const   * __format  , ...) ;
extern char *fgets(char * __s , int __n ,
                   FILE * __stream ) ;
extern void perror(char const   *__s ) ;
extern void __ccured_va_start(__ccured_va_list  , unsigned long  ) ;
extern void __ccured_va_end(__ccured_va_list  ) ;
extern int (   GCC_STDARG_START)() ;
void perror_wrapper(char const   *s ) 
{ char const   *tmp ;

  {
  {
  tmp = (char const   *)__stringof(s);
  perror(tmp);
  }
  return;
}
}
extern int *__errno_location(void) ;
extern int atoi(char const   *__nptr ) ;
extern void *calloc(size_t __nmemb , size_t __size ) ;
extern void *realloc(void *__ptr , size_t __size ) ;
extern void free(void *__ptr ) ;
extern int atexit(void (*__func)(void) ) ;
void exit(int __status ) ;
void exit(int __status ) ;
void exit(int __status ) 
{ 

  {
  EXIT: 
  goto EXIT;
}
}
extern int putenv(char *__string ) ;
void *realloc_wrapper(void *b , int sz ) 
{ void *res ;
  void *tmp ;
  void *tmp___0 ;
  void *result ;

  {
  {
  tmp = (void *)__ptrof(b);
  tmp___0 = realloc(tmp, (unsigned int )sz);
  res = tmp___0;
  result = b;
  result = __mkptr_size((void *)res,
                        (unsigned int )sz);
  }
  return (result);
}
}
extern void free_wrapper(void *x ) 
{ void *tmp ;

  {
  {
  tmp = (void *)__ptrof(x);
  free(tmp);
  }
  return;
}
}
static void *__qsort_base  ;
static int (*__qsort_compare)(void * , void * )  ;
static void *__bsearch_base  ;
static void *__bsearch_key  ;
static int (*__bsearch_compare)(void * , void * )  ;
extern void *memcpy(void * __dest ,
                    void const   * __src , size_t __n ) ;
extern void *memmove(void *__dest , void const   *__src , size_t __n ) ;
extern void *memset(void *__s , int __c , size_t __n ) ;
extern char *strcpy(char * __dest ,
                    char const   * __src ) ;
extern char *strncpy(char * __dest ,
                     char const   * __src , size_t __n ) ;
extern char *strncat(char * __dest ,
                     char const   * __src , size_t __n ) ;
extern int strcmp(char const   *__s1 , char const   *__s2 ) ;
extern char *strchr(char const   *__s , int __c ) ;
extern char *strrchr(char const   *__s , int __c ) ;
extern char *strtok(char * __s , char const   * __delim ) ;
extern size_t strlen(char const   *__s ) ;
extern char *strerror(int __errnum ) ;
extern int strcasecmp(char const   *__s1 , char const   *__s2 ) ;
extern int strncasecmp(char const   *__s1 , char const   *__s2 , size_t __n ) ;
char *strrchr_wrapper(char const   *s , int chr ) 
{ char *result ;
  char *tmp ;
  char *tmp___0 ;

  {
  {
  tmp = __stringof(s);
  result = strrchr((char const   *)tmp, chr);
  tmp___0 = (char *)__mkptr((void *)((void *)result),
                            (void *)s);
  }
  return (tmp___0);
}
}
int strcasecmp_wrapper(char const   *s1 , char const   *s2 ) 
{ char *tmp ;
  char *tmp___0 ;
  int tmp___1 ;

  {
  {
  tmp = __stringof(s2);
  tmp___0 = __stringof(s1);
  tmp___1 = strcasecmp((char const   *)tmp___0, (char const   *)tmp);
  }
  return (tmp___1);
}
}
int strncasecmp_wrapper(char const   *s1 , char const   *s2 , unsigned int n ) 
{ void *tmp ;
  void *tmp___0 ;
  void *tmp___1 ;
  void *tmp___2 ;
  char *tmp___3 ;
  char *tmp___4 ;
  int tmp___5 ;

  {
  {
  tmp = __endof((void *)s1);
  tmp___0 = __ptrof_nocheck((void *)s1);
  }
  if ((unsigned int )tmp - (unsigned int )tmp___0 < n) {
    {
    __verify_nul(s1);
    }
  }
  {
  tmp___1 = __endof((void *)s2);
  tmp___2 = __ptrof_nocheck((void *)s2);
  }
  if ((unsigned int )tmp___1 - (unsigned int )tmp___2 < n) {
    {
    __verify_nul(s2);
    }
  }
  {
  tmp___3 = (char *)__ptrof((void *)s2);
  tmp___4 = (char *)__ptrof((void *)s1);
  tmp___5 = strncasecmp((char const   *)tmp___4, (char const   *)tmp___3, n);
  }
  return (tmp___5);
}
}
static char const   *saved_str;
extern int _get__ctype_b(int  ) ;
extern int tolower(int __c ) ;
extern struct tm *localtime_r(time_t const   * __timer ,
                              struct tm * __tp ) ;
extern int __xstat(int __ver , char const   *__filename ,
                   struct stat *__stat_buf ) ;
__inline static int stat__extinline(char const   *__path ,
                                    struct stat *__statbuf ) 
{ int tmp ;

  {
  {
  tmp = __xstat(3, __path, __statbuf);
  }
  return (tmp);
}
}
extern void closelog(void) ;
extern void openlog(char const   *__ident , int __option , int __facility ) ;
extern void syslog(int __pri , char const   *__fmt  , ...) ;
extern __sighandler_t signal(int __sig , void (*__handler)(int  ) ) ;
extern int sigemptyset(sigset_t *__set ) ;
extern int sigaddset(sigset_t *__set , int __signo ) ;
extern int sigprocmask(int __how , sigset_t const   * __set ,
                       sigset_t * __oset ) ;
extern int pthread_sigmask(int __how ,
                           __sigset_t const   * __newmask ,
                           __sigset_t * __oldmask ) ;
__inline static void *__mkfat_sighandler(void *in ) 
{ void *tmp ;
  void *tmp___0 ;

  {
  if ((int )in == 1) {
    {
    tmp = __mkptr((void *)in, (void *)0);
    }
    return (tmp);
  } else {
    {
    tmp___0 = __mkptr_size((void *)in, 1);
    }
    return (tmp___0);
  }
}
}
extern void __deepcopy_sigaction_from_compat(struct sigaction *fat ,
                                             struct sigaction *compat ) 
{ 

  {
  {
  fat->sa_handler = (void (*)(int  ))__mkfat_sighandler((void *)compat->sa_handler);
  fat->sa_restorer = (void (*)(void))__mkfat_sighandler((void *)compat->sa_restorer);
  }
  return;
}
}
extern __pid_t waitpid(__pid_t __pid , int *__stat_loc , int __options ) ;
extern int close(int __fd ) ;
extern ssize_t read(int __fd , void *__buf , size_t __nbytes ) ;
extern ssize_t write(int __fd , void const   *__buf , size_t __n ) ;
extern int pipe(int *__pipedes ) ;
extern unsigned int sleep(unsigned int __seconds ) ;
extern int chdir(char const   *__path ) ;
extern int dup2(int __fd , int __fd2 ) ;
extern int execvp(char const   *__file , char * const  *__argv ) ;
extern void _exit(int __status ) ;
extern long sysconf(int __name ) ;
extern __pid_t getpid(void) ;
extern __pid_t setsid(void) ;
extern int setuid(__uid_t __uid ) ;
extern int setgid(__gid_t __gid ) ;
extern __pid_t fork(void) ;
extern int unlink(char const   *__name ) ;
extern int daemon(int __nochdir , int __noclose ) ;
extern int chroot(char const   *__path ) ;
__inline static char **__deepcopy_stringarray_from_compat(char **array_in ) 
{ int num_strings ;
  int i ;
  char **new_array ;
  char **p ;
  void *tmp ;
  char **tmp___0 ;
  int tmp___2 ;
  void *tmp___3 ;
  void *tmp___5 ;

  {
  {
  num_strings = 0;
  }
  if ((unsigned int )array_in ==
      (unsigned int )((char **)0)) {
    return ((char **)0);
  }
  {
  p = array_in;
  }
  while ((unsigned int )(*p) != (unsigned int )((char *)0)) {
    {
    tmp___3 = __trusted_cast((void *)((unsigned long )p +
                                      (unsigned long )(1 * sizeof((*p)))));
    p = (char **)((char **)tmp___3);
    num_strings ++;
    }
  }
  {
  num_strings ++;
  tmp___2 = __ccured_has_empty_mangling(sizeof((*new_array)));
  }
  if (tmp___2) {
    {
    tmp = __trusted_deepcast((void *)((void *)array_in));
    tmp___0 = (char **)__mkptr_size(tmp, (unsigned int )num_strings *
                                         sizeof((*(new_array + 0))));
    }
    return (tmp___0);
  } else {
    {
    new_array = (char **)wrapperAlloc((unsigned int )num_strings *
                                      sizeof((*(new_array + 0))));
    i = 0;
    }
    while (i < num_strings) {
      {
      tmp___5 = __trusted_cast((void *)((unsigned long )array_in +
                                        (unsigned long )((unsigned int )i *
                                                         sizeof((*array_in)))));
      p = (char **)((char **)tmp___5);
      (*(new_array + i)) = __mkptr_string((*p));
      i ++;
      }
    }
  }
  return (new_array);
}
}
extern struct passwd *getpwnam(char const   *__name ) ;
extern void __deepcopy_passwd_from_compat(struct passwd *fat ,
                                          struct passwd *compat ) 
{ 

  {
  {
  fat->pw_name = __mkptr_string((char *)compat->pw_name);
  fat->pw_passwd = __mkptr_string((char *)compat->pw_passwd);
  fat->pw_gecos = __mkptr_string((char *)compat->pw_gecos);
  fat->pw_dir = __mkptr_string((char *)compat->pw_dir);
  fat->pw_shell = __mkptr_string((char *)compat->pw_shell);
  }
  return;
}
}
static struct passwd my_passwd_result  ;
extern struct group *getgrnam(char const   *__name ) ;
extern int setgroups(size_t __n , __gid_t const   *__groups ) ;
extern void __deepcopy_group_from_compat(struct group *fat ,
                                         struct group *compat ) 
{ 

  {
  {
  fat->gr_name = __mkptr_string((char *)compat->gr_name);
  fat->gr_passwd = __mkptr_string((char *)compat->gr_passwd);
  fat->gr_mem = __deepcopy_stringarray_from_compat((char **)((char **)compat->gr_mem));
  }
  return;
}
}
static struct group my_group_result  ;
extern int fcntl(int __fd , int __cmd  , ...) ;
extern int open(char const   *file , int flag  , ...) ;
extern int socket(int __domain , int __type , int __protocol ) ;
extern int bind(int __fd , void const   *__addr , socklen_t __len ) ;
extern int getsockname(int __fd , void * __addr ,
                       socklen_t * __len ) ;
extern int connect(int __fd , void const   *__addr , socklen_t __len ) ;
extern int getpeername(int __fd , void * __addr ,
                       socklen_t * __len ) ;
extern int getsockopt(int __fd , int __level , int __optname ,
                      void * __optval ,
                      socklen_t * __optlen ) ;
extern int setsockopt(int __fd , int __level , int __optname ,
                      void const   *__optval , socklen_t __optlen ) ;
extern int listen(int __fd , int __n ) ;
extern int accept(int __fd , void * __addr ,
                  socklen_t * __addr_len ) ;
extern int shutdown(int __fd , int __how ) ;
extern in_addr_t inet_addr(char const   *__cp ) ;
extern char *inet_ntoa(struct in_addr __in ) ;
char *inet_ntoa_wrapper(struct in_addr __in ) 
{ char *tmp ;
  char *tmp___0 ;

  {
  {
  tmp = (char *)inet_ntoa(__in);
  tmp___0 = __mkptr_string(tmp);
  }
  return (tmp___0);
}
}
extern void endhostent(void) ;
extern struct hostent *gethostbyname(char const   *__name ) ;
extern struct servent *getservbyname(char const   *__name ,
                                     char const   *__proto ) ;
extern char const   *gai_strerror(int __ecode ) ;
extern int true_getaddrinfo(char const   *node , char const   *service ,
                            struct libc_addrinfo  const  *hints ,
                            struct libc_addrinfo **res ) ;
extern void true_freeaddrinfo(struct libc_addrinfo *res ) ;
int getaddrinfo_wrapper(char const   *node , char const   *service ,
                        struct addrinfo  const  *hints , struct addrinfo **res ) 
{ struct libc_addrinfo libc_hints ;
  struct libc_addrinfo *libc_res ;
  struct libc_addrinfo *source ;
  struct addrinfo *dest ;
  int len ;
  int ret ;
  char const   *tmp ;
  char const   *tmp___0 ;
  struct addrinfo *newNode ;
  struct addrinfo *tmp___1 ;
  void * tmp___3 ;
  size_t tmp___4 ;
  void * tmp___6 ;

  {
  {
  dest = (struct addrinfo *)((void *)0);
  libc_hints.ai_flags = hints->ai_flags;
  libc_hints.ai_family = hints->ai_family;
  libc_hints.ai_socktype = hints->ai_socktype;
  libc_hints.ai_protocol = hints->ai_protocol;
  libc_hints.ai_addrlen = hints->ai_addrlen;
  libc_hints.ai_addr = (struct sockaddr *)__ptrof((void *)hints->ai_addr);
  libc_hints.ai_canonname = (char *)__ptrof((void *)hints->ai_canonname);
  libc_hints.ai_next = (struct libc_addrinfo *)((void *)0);
  tmp = (char const   *)__ptrof((void *)service);
  tmp___0 = (char const   *)__ptrof((void *)node);
  ret = true_getaddrinfo(tmp___0, tmp,
                         (struct libc_addrinfo  const  *)(& libc_hints),
                         & libc_res);
  }
  if (ret != 0) {
    return (ret);
  }
  {
  (*res) = (struct addrinfo *)((void *)0);
  source = libc_res;
  }
  while ((unsigned int )source != (unsigned int )((void *)0)) {
    {
    tmp___1 = (struct addrinfo *)wrapperAlloc(sizeof((*dest)));
    newNode = tmp___1;
    }
    if (dest) {
      {
      dest->ai_next = newNode;
      }
    } else {
      {
      (*res) = newNode;
      }
    }
    {
    dest = newNode;
    dest->ai_flags = source->ai_flags;
    dest->ai_family = source->ai_family;
    dest->ai_socktype = source->ai_socktype;
    dest->ai_protocol = source->ai_protocol;
    dest->ai_addrlen = source->ai_addrlen;
    len = (int )source->ai_addrlen;
    dest->ai_addr = (struct sockaddr *)wrapperAlloc((unsigned int )len);
    tmp___3 = (void *)__ptrof((void *)dest->ai_addr);
    memcpy(tmp___3,
           (void const   *)((void const   *)source->ai_addr),
           (unsigned int )len);
    }
    if (source->ai_canonname) {
      {
      tmp___4 = strlen((char const   *)source->ai_canonname);
      len = (int )(tmp___4 + 1);
      dest->ai_canonname = (char *)wrapperAlloc((unsigned int )len);
      tmp___6 = (void *)__ptrof((void *)dest->ai_canonname);
      memcpy(tmp___6,
             (void const   *)((void const   *)source->ai_canonname),
             (unsigned int )len);
      }
    } else {
      {
      dest->ai_canonname = (char *)((void *)0);
      }
    }
    {
    dest->ai_next = (struct addrinfo *)((void *)0);
    source = source->ai_next;
    }
  }
  {
  true_freeaddrinfo(libc_res);
  }
  return (ret);
}
}
void freeaddrinfo_wrapper(struct addrinfo *res ) 
{ struct addrinfo *next ;

  {
  while (res) {
    {
    next = res->ai_next;
    free_wrapper((void *)res->ai_addr);
    }
    if (res->ai_canonname) {
      {
      free_wrapper((void *)res->ai_canonname);
      }
    }
    {
    free_wrapper((void *)res);
    res = next;
    }
  }
  return;
}
}
char const   *gai_strerror_wrapper(int code ) 
{ char *tmp ;
  char const   *tmp___0 ;

  {
  {
  tmp = (char *)gai_strerror(code);
  tmp___0 = (char const   *)__mkptr_string(tmp);
  }
  return (tmp___0);
}
}
extern int sk_num(STACK const   * ) ;
extern char *sk_value(STACK const   * , int  ) ;
extern char const   *SSLeay_version(int type ) ;
extern void CRYPTO_set_locking_callback(void (*func)(int mode , int type ,
                                                     char const   *file ,
                                                     int line ) ) ;
extern void CRYPTO_set_id_callback(unsigned long (*func)(void) ) ;
extern void CRYPTO_free(void * ) ;
extern BIO *BIO_new(BIO_METHOD *type ) ;
extern int BIO_free(BIO *a ) ;
extern int BIO_read(BIO *b , void *data , int len ) ;
extern long BIO_ctrl(BIO *bp , int cmd , long larg , void *parg ) ;
extern BIO_METHOD *BIO_s_mem(void) ;
extern int BIO_printf(BIO *bio , char const   *format  , ...) ;
extern int ASN1_INTEGER_cmp(ASN1_INTEGER *x , ASN1_INTEGER *y ) ;
extern long ASN1_INTEGER_get(ASN1_INTEGER *a ) ;
extern int ASN1_UTCTIME_print(BIO *fp , ASN1_UTCTIME *a ) ;
extern RSA *RSA_generate_key(int bits , unsigned long e ,
                             void (*callback)(int  , int  , void * ) ,
                             void *cb_arg ) ;
extern void RSA_free(RSA *r ) ;
extern void EVP_PKEY_free(EVP_PKEY *pkey ) ;
extern void X509_OBJECT_free_contents(X509_OBJECT *a ) ;
extern X509_STORE *X509_STORE_new(void) ;
extern int X509_STORE_CTX_init(X509_STORE_CTX *ctx , X509_STORE *store ,
                               X509 *x509 , STACK *chain ) ;
extern void X509_STORE_CTX_cleanup(X509_STORE_CTX *ctx ) ;
extern X509_LOOKUP *X509_STORE_add_lookup(X509_STORE *v , X509_LOOKUP_METHOD *m ) ;
extern X509_LOOKUP_METHOD *X509_LOOKUP_hash_dir(void) ;
extern X509_LOOKUP_METHOD *X509_LOOKUP_file(void) ;
extern int X509_STORE_get_by_subject(X509_STORE_CTX *vs , int type ,
                                     X509_NAME *name , X509_OBJECT *ret ) ;
extern int X509_LOOKUP_ctrl(X509_LOOKUP *ctx , int cmd , char const   *argc ,
                            long argl , char **ret ) ;
extern void X509_STORE_CTX_set_error(X509_STORE_CTX *ctx , int s ) ;
extern X509 *X509_STORE_CTX_get_current_cert(X509_STORE_CTX *ctx ) ;
extern char const   *X509_verify_cert_error_string(long n ) ;
extern int X509_CRL_verify(X509_CRL *a , EVP_PKEY *r ) ;
extern int X509_cmp_current_time(ASN1_TIME *s ) ;
extern void X509_free(X509 *a ) ;
extern char *X509_NAME_oneline(X509_NAME *a , char *buf , int size ) ;
extern ASN1_INTEGER *X509_get_serialNumber(X509 *x ) ;
extern X509_NAME *X509_get_issuer_name(X509 *a ) ;
extern X509_NAME *X509_get_subject_name(X509 *a ) ;
extern EVP_PKEY *X509_get_pubkey(X509 *x ) ;
extern int SSL_CTX_set_cipher_list(SSL_CTX * , char const   *str ) ;
extern SSL_CTX *SSL_CTX_new(SSL_METHOD *meth ) ;
extern void SSL_CTX_free(SSL_CTX * ) ;
extern long SSL_CTX_set_timeout(SSL_CTX *ctx , long t ) ;
extern int SSL_want(SSL *s ) ;
extern SSL_CIPHER *SSL_get_current_cipher(SSL *s ) ;
extern int SSL_pending(SSL *s ) ;
extern int SSL_set_fd(SSL *s , int fd ) ;
extern int SSL_set_rfd(SSL *s , int fd ) ;
extern int SSL_set_wfd(SSL *s , int fd ) ;
extern int SSL_CTX_use_RSAPrivateKey_file(SSL_CTX *ctx , char const   *file ,
                                          int type ) ;
extern int SSL_CTX_use_certificate_chain_file(SSL_CTX *ctx , char const   *file ) ;
extern void SSL_load_error_strings(void) ;
extern char const   *SSL_state_string_long(SSL const   *s ) ;
extern int SSL_set_session(SSL *to , SSL_SESSION *session ) ;
extern X509 *SSL_get_peer_certificate(SSL *s ) ;
extern void SSL_CTX_set_verify(SSL_CTX *ctx , int mode ,
                               int (*callback)(int  , X509_STORE_CTX * ) ) ;
extern int SSL_CTX_check_private_key(SSL_CTX *ctx ) ;
extern SSL *SSL_new(SSL_CTX *ctx ) ;
extern int SSL_set_session_id_context(SSL *ssl ,
                                      unsigned char const   *sid_ctx ,
                                      unsigned int sid_ctx_len ) ;
extern void SSL_free(SSL *ssl ) ;
extern int SSL_accept(SSL *ssl ) ;
extern int SSL_connect(SSL *ssl ) ;
extern int SSL_read(SSL *ssl , void *buf , int num ) ;
extern int SSL_write(SSL *ssl , void const   *buf , int num ) ;
extern long SSL_CTX_ctrl(SSL_CTX *ctx , int cmd , long larg , void *parg ) ;
extern int SSL_get_error(SSL *s , int ret_code ) ;
extern SSL_METHOD *SSLv3_client_method(void) ;
extern SSL_METHOD *SSLv23_server_method(void) ;
extern int SSL_shutdown(SSL *s ) ;
extern char const   *SSL_alert_type_string_long(int value ) ;
extern char const   *SSL_alert_desc_string_long(int value ) ;
extern void SSL_set_connect_state(SSL *s ) ;
extern void SSL_set_accept_state(SSL *s ) ;
extern int SSL_library_init(void) ;
extern char *SSL_CIPHER_description(SSL_CIPHER * , char *buf , int size ) ;
extern void SSL_set_shutdown(SSL *ssl , int mode ) ;
extern int SSL_CTX_load_verify_locations(SSL_CTX *ctx , char const   *CAfile ,
                                         char const   *CApath ) ;
extern void SSL_CTX_set_tmp_rsa_callback(SSL_CTX *ctx ,
                                         RSA *(*cb)(SSL *ssl , int is_export ,
                                                    int keylength ) ) ;
extern unsigned long ERR_get_error(void) ;
extern unsigned long ERR_peek_error(void) ;
extern char *ERR_error_string(unsigned long e , char *buf ) ;
extern void ERR_remove_state(unsigned long pid ) ;
extern int RAND_load_file(char const   *file , long max_bytes ) ;
extern int RAND_write_file(char const   *file ) ;
extern char const   *RAND_file_name(char *file , size_t num ) ;
extern int RAND_status(void) ;
extern int RAND_egd(char const   *path ) ;
extern void ENGINE_load_builtin_engines(void) ;
extern int ENGINE_register_all_complete(void) ;
int num_clients ;
void main_initialize(char *arg1 , char *arg2 ) ;
void main_execute(void) ;
void ioerror(char *txt ) ;
void sockerror(char *txt ) ;
void log_error(int level , int error , char *txt ) ;
char *my_strerror(int errnum ) ;
int set_socket_options(int s , int type ) ;
char *stunnel_info(void) ;
int alloc_fd(int sock ) ;
char *safe_ntoa(char *text , struct in_addr in ) ;
void context_init(void) ;
void context_free(void) ;
void sslerror(char *txt ) ;
void log_open(void) ;
void log_close(void) ;
void log(int level , char const   *format  , ...) ;
void log_raw(char const   *format  , ...) ;
void enter_critical_section(section_code i ) ;
void leave_critical_section(section_code i ) ;
void sthreads_init(void) ;
unsigned long stunnel_process_id(void) ;
unsigned long stunnel_thread_id(void) ;
int create_client(int ls , int s , void *arg , void *(*cli)(void * ) ) ;
int pty_allocate(int *ptyfd , int *ttyfd , char *namebuf , int namebuflen ) ;
GLOBAL_OPTIONS options  ;
LOCAL_OPTIONS local_options  ;
void parse_config(char *name , char *parameter ) ;
int name2nums(char *name , char *default_host , u32 **names , u_short *port ) ;
int max_clients  ;
int max_fds  ;
void *alloc_client_session(LOCAL_OPTIONS *opt , int rfd , int wfd ) ;
void *client(void *arg ) ;
int negotiate(CLI *c ) ;
int sselect(int n , fd_set *readfds , fd_set *writefds , fd_set *exceptfds ,
            struct timeval *timeout ) ;
int waitforsocket(int fd , int dir , int timeout ) ;
void sselect_init(fd_set *set , int *n ) ;
void exec_status(void) ;
int write_blocking(CLI *c , int fd , u8 *ptr , int len ) ;
int read_blocking(CLI *c , int fd , u8 *ptr , int len ) ;
int fdprintf(CLI *c , int fd , char const   *format  , ...) ;
int fdscanf(CLI *c , int fd , char const   *format , char *buffer ) ;
extern int hosts_access() ;
extern struct request_info *request_init(struct request_info *  , ...) ;
extern void sock_host() ;
int allow_severity   ;
int deny_severity   ;
static unsigned char *sid_ctx   = (unsigned char *)"stunnel SID";
SSL_CTX *ctx  ;
static int do_client(CLI *c ) ;
static int init_local(CLI *c ) ;
static int init_remote(CLI *c ) ;
static int init_ssl(CLI *c ) ;
static int transfer(CLI *c ) ;
static void cleanup(CLI *c , int error ) ;
static void print_cipher(CLI *c ) ;
static int auth_libwrap(CLI *c ) ;
static int auth_user(CLI *c ) ;
static int connect_local(CLI *c ) ;
static int make_sockets(int *fd ) ;
static int connect_remote(CLI *c ) ;
static void reset(int fd , char *txt ) ;
void *alloc_client_session(LOCAL_OPTIONS *opt , int rfd , int wfd ) 
{ CLI *c ;

  {
  {
  c = (CLI *)calloc(1, sizeof(CLI ));
  }
  if (! c) {
    {
    log(3, (char const   *)"Memory allocation failed");
    }
    return ((void *)0);
  }
  {
  c->opt = opt;
  c->local_rfd.fd = rfd;
  c->local_wfd.fd = wfd;
  }
  return ((void *)c);
}
}
void *client(void *arg ) 
{ CLI *c ;
  int tmp ;

  {
  {
  c = (CLI *)arg;
  log(7, (char const   *)"%s started", (c->opt)->servname);
  }
  if ((c->opt)->option.remote) {
    if ((c->opt)->option.program) {
      {
      c->local_wfd.fd = connect_local(c);
      c->local_rfd.fd = c->local_wfd.fd;
      }
    }
  }
  {
  c->remote_fd.fd = -1;
  c->ssl = (SSL *)((void *)0);
  tmp = do_client(c);
  cleanup(c, tmp);
  enter_critical_section(2);
  num_clients --;
  log(7, (char const   *)"%s finished (%d left)", (c->opt)->servname,
      num_clients);
  leave_critical_section(2);
  free((void *)c);
  }
  return ((void *)0);
}
}
static int do_client(CLI *c ) 
{ int result ;
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;
  char const   *tmp___5 ;

  {
  {
  tmp = init_local(c);
  }
  if (tmp) {
    return (-1);
  }
  if (options.option.client) {
    _L: 
    {
    tmp___2 = init_remote(c);
    }
    if (tmp___2) {
      return (-1);
    }
    {
    tmp___3 = negotiate(c);
    }
    if (tmp___3 < 0) {
      {
      log(3, (char const   *)"Protocol negotiations failed");
      }
      return (-1);
    }
    {
    tmp___4 = init_ssl(c);
    }
    if (tmp___4) {
      return (-1);
    }
  } else {
    if ((c->opt)->protocol) {
      goto _L;
    } else {
      {
      tmp___0 = init_ssl(c);
      }
      if (tmp___0) {
        return (-1);
      }
      {
      tmp___1 = init_remote(c);
      }
      if (tmp___1) {
        return (-1);
      }
    }
  }
  {
  result = transfer(c);
  }
  if (result) {
    {
    tmp___5 = (char const   *)"reset";
    }
  } else {
    {
    tmp___5 = (char const   *)"closed";
    }
  }
  {
  log(5,
      (char const   *)"Connection %s: %d bytes sent to SSL, %d bytes sent to socket",
      tmp___5, c->ssl_bytes, c->sock_bytes);
  }
  return (result);
}
}
static int init_local(CLI *c ) 
{ int addrlen ;
  int *tmp ;
  int tmp___0 ;
  int tmp___1 ;
  register unsigned short __v ;
  register unsigned short __x ;
  int tmp___2 ;
  int tmp___3 ;
  register unsigned short __v___0 ;
  register unsigned short __x___0 ;
  int tmp___4 ;
  int tmp___5 ;

  {
  {
  addrlen = (int )sizeof(c->addr);
  tmp___5 = getpeername(c->local_rfd.fd,
                        (void *)((void *)((struct sockaddr *)(& c->addr))),
                        (socklen_t *)((socklen_t *)(& addrlen)));
  }
  if (tmp___5 < 0) {
    {
    strcpy((char *)(c->accepting_address),
           (char const   *)((char const   *)"NOT A SOCKET"));
    c->local_rfd.is_socket = 0;
    c->local_wfd.is_socket = 0;
    }
    if ((c->opt)->option.transparent) {
      {
      sockerror("getpeerbyname");
      }
      return (-1);
    } else {
      {
      tmp = __errno_location();
      }
      if ((*tmp) != 88) {
        {
        sockerror("getpeerbyname");
        }
        return (-1);
      }
    }
  } else {
    {
    safe_ntoa(c->accepting_address, c->addr.sin_addr);
    c->local_rfd.is_socket = 1;
    c->local_wfd.is_socket = 1;
    tmp___0 = set_socket_options(c->local_rfd.fd, 1);
    }
    if (tmp___0 < 0) {
      return (-1);
    }
    {
    tmp___1 = auth_libwrap(c);
    }
    if (tmp___1 < 0) {
      return (-1);
    }
    {
    tmp___3 = auth_user(c);
    }
    if (tmp___3 < 0) {
      {
      __x = c->addr.sin_port;
      tmp___2 = ((int )__x);
      }
      if (tmp___2) {
        {
        __v = (unsigned short )((((int )__x >> 8) & 255) |
                                (((int )__x & 255) << 8));
        }
      } else {
        {
        __asm__  ("rorw $8, %w0": "=r" (__v): "0" (__x): "cc");
        }
      }
      {
      log(4, (char const   *)"Connection from %s:%d REFUSED by IDENT",
          c->accepting_address, __v);
      }
      return (-1);
    }
    {
    __x___0 = c->addr.sin_port;
    tmp___4 = ((int )__x___0);
    }
    if (tmp___4) {
      {
      __v___0 = (unsigned short )((((int )__x___0 >> 8) & 255) |
                                  (((int )__x___0 & 255) << 8));
      }
    } else {
      {
      __asm__  ("rorw $8, %w0": "=r" (__v___0): "0" (__x___0): "cc");
      }
    }
    {
    log(5, (char const   *)"%s connected from %s:%d", (c->opt)->servname,
        c->accepting_address, __v___0);
    }
  }
  return (0);
}
}
static int init_remote(CLI *c ) 
{ int fd ;
  int tmp ;

  {
  if ((c->opt)->local_ip) {
    {
    c->bind_ip = (int )(*((c->opt)->local_ip));
    }
  } else {
    if ((c->opt)->option.transparent) {
      {
      c->bind_ip = (int )c->addr.sin_addr.s_addr;
      }
    } else {
      {
      c->bind_ip = 0;
      }
    }
  }
  if ((c->opt)->option.remote) {
    {
    c->resolved_addresses = (u32 *)((void *)0);
    fd = connect_remote(c);
    }
    if (c->resolved_addresses) {
      {
      free((void *)c->resolved_addresses);
      }
    }
  } else {
    {
    fd = connect_local(c);
    }
  }
  if (fd < 0) {
    {
    log(3, (char const   *)"Failed to initialize remote connection");
    }
    return (-1);
  }
  if (fd >= max_fds) {
    {
    log(3, (char const   *)"Remote file descriptor out of range (%d>=%d)", fd,
        max_fds);
    close(fd);
    }
    return (-1);
  }
  {
  log(7, (char const   *)"Remote FD=%d initialized", fd);
  c->remote_fd.fd = fd;
  c->remote_fd.is_socket = 1;
  tmp = set_socket_options(fd, 2);
  }
  if (tmp < 0) {
    return (-1);
  }
  return (0);
}
}
static int init_ssl(CLI *c ) 
{ int i ;
  int err ;
  unsigned int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int *tmp___3 ;

  {
  {
  c->ssl = SSL_new(ctx);
  }
  if (! c->ssl) {
    {
    sslerror("SSL_new");
    }
    return (-1);
  }
  {
  tmp = strlen((char const   *)sid_ctx);
  SSL_set_session_id_context(c->ssl, (unsigned char const   *)sid_ctx, tmp);
  }
  if (options.option.client) {
    if (ctx->session_cache_head) {
      {
      tmp___0 = SSL_set_session(c->ssl, ctx->session_cache_head);
      }
      if (! tmp___0) {
        {
        log(4, (char const   *)"Cannot set SSL session id to most recent used");
        }
      }
    }
    {
    SSL_set_fd(c->ssl, c->remote_fd.fd);
    SSL_set_connect_state(c->ssl);
    }
  } else {
    if (c->local_rfd.fd == c->local_wfd.fd) {
      {
      SSL_set_fd(c->ssl, c->local_rfd.fd);
      }
    } else {
      {
      SSL_set_rfd(c->ssl, c->local_rfd.fd);
      SSL_set_wfd(c->ssl, c->local_wfd.fd);
      }
    }
    {
    SSL_set_accept_state(c->ssl);
    }
  }
  if (options.option.client) {
    {
    c->sock_rfd = & c->local_rfd;
    c->sock_wfd = & c->local_wfd;
    c->ssl_wfd = & c->remote_fd;
    c->ssl_rfd = c->ssl_wfd;
    }
  } else {
    {
    c->sock_wfd = & c->remote_fd;
    c->sock_rfd = c->sock_wfd;
    c->ssl_rfd = & c->local_rfd;
    c->ssl_wfd = & c->local_wfd;
    }
  }
  while (1) {
    if (options.option.client) {
      {
      i = SSL_connect(c->ssl);
      }
    } else {
      {
      i = SSL_accept(c->ssl);
      }
    }
    {
    err = SSL_get_error(c->ssl, i);
    }
    if (err == 0) {
      break;
    }
    if (err == 2) {
      {
      tmp___1 = waitforsocket((c->ssl_rfd)->fd, 0, (c->opt)->timeout_busy);
      }
      if (tmp___1 == 1) {
        continue;
      }
      return (-1);
    }
    if (err == 3) {
      {
      tmp___2 = waitforsocket((c->ssl_wfd)->fd, 1, (c->opt)->timeout_busy);
      }
      if (tmp___2 == 1) {
        continue;
      }
      return (-1);
    }
    if (err == 5) {
      {
      tmp___3 = __errno_location();
      }
      switch ((*tmp___3)) {
      case 4: 
      {

      }
      case 11: 
      {

      }
      continue;
      }
    }
    if (options.option.client) {
      {
      sslerror("SSL_connect");
      }
    } else {
      {
      sslerror("SSL_accept");
      }
    }
    return (-1);
  }
  {
  print_cipher(c);
  }
  return (0);
}
}
static int transfer(CLI *c ) 
{ fd_set rd_set ;
  fd_set wr_set ;
  int num ;
  int err ;
  int fdno ;
  int check_SSL_pending ;
  int ssl_closing ;
  int ready ;
  struct timeval tv ;
  unsigned int __i ;
  fd_set *__arr ;
  int tmp ;
  unsigned int __i___0 ;
  fd_set *__arr___0 ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  int *tmp___4 ;
  int *tmp___5 ;
  int tmp___6 ;
  int *tmp___7 ;
  int *tmp___8 ;
  int tmp___9 ;
  int tmp___10 ;

  {
  {
  fdno = (c->sock_rfd)->fd;
  }
  if ((c->sock_wfd)->fd > fdno) {
    {
    fdno = (c->sock_wfd)->fd;
    }
  }
  if ((c->ssl_rfd)->fd > fdno) {
    {
    fdno = (c->ssl_rfd)->fd;
    }
  }
  if ((c->ssl_wfd)->fd > fdno) {
    {
    fdno = (c->ssl_wfd)->fd;
    }
  }
  {
  fdno ++;
  c->ssl_ptr = 0;
  c->sock_ptr = c->ssl_ptr;
  (c->ssl_wfd)->wr = 1;
  (c->ssl_rfd)->rd = (c->ssl_wfd)->wr;
  (c->sock_wfd)->wr = (c->ssl_rfd)->rd;
  (c->sock_rfd)->rd = (c->sock_wfd)->wr;
  c->ssl_bytes = 0;
  c->sock_bytes = c->ssl_bytes;
  ssl_closing = 0;
  }
  while (1) {
    if ((c->sock_rfd)->rd) {
      goto _L___12;
    } else {
      if (c->sock_ptr) {
        _L___12: 
        if (! (c->ssl_wfd)->wr) {
          goto _L___11;
        }
      } else {
        _L___11: 
        if ((c->ssl_rfd)->rd) {
          goto _L___10;
        } else {
          if (c->ssl_ptr) {
            _L___10: 
            if (! (c->sock_wfd)->wr) {
              break;
            }
          } else {
            break;
          }
        }
      }
    }
    while (1) {
      {
      __arr = & rd_set;
      __i = 0;
      }
      while (__i < sizeof(fd_set ) / sizeof(__fd_mask )) {
        {
        __arr->__fds_bits[__i] = 0;
        __i ++;
        }
      }
      break;
    }
    if ((c->sock_rfd)->rd) {
      if (c->sock_ptr < 16384) {
        {
        rd_set.__fds_bits[(unsigned int )(c->sock_rfd)->fd /
                          (8 * sizeof(__fd_mask ))] |= 1 <<
                                                        (unsigned int )(c->sock_rfd)->fd %
                                                        (8 * sizeof(__fd_mask ));
        }
      }
    }
    if ((c->ssl_rfd)->rd) {
      if (c->ssl_ptr < 16384) {
        {
        rd_set.__fds_bits[(unsigned int )(c->ssl_rfd)->fd /
                          (8 * sizeof(__fd_mask ))] |= 1 <<
                                                        (unsigned int )(c->ssl_rfd)->fd %
                                                        (8 * sizeof(__fd_mask ));
        }
      } else {
        if (c->sock_ptr) {
          goto _L;
        } else {
          if (ssl_closing) {
            _L: 
            {
            tmp = SSL_want(c->ssl);
            }
            if (tmp == 3) {
              {
              rd_set.__fds_bits[(unsigned int )(c->ssl_rfd)->fd /
                                (8 * sizeof(__fd_mask ))] |= 1 <<
                                                              (unsigned int )(c->ssl_rfd)->fd %
                                                              (8 *
                                                               sizeof(__fd_mask ));
              }
            }
          }
        }
      }
    }
    while (1) {
      {
      __arr___0 = & wr_set;
      __i___0 = 0;
      }
      while (__i___0 < sizeof(fd_set ) / sizeof(__fd_mask )) {
        {
        __arr___0->__fds_bits[__i___0] = 0;
        __i___0 ++;
        }
      }
      break;
    }
    if ((c->sock_wfd)->wr) {
      if (c->ssl_ptr) {
        {
        wr_set.__fds_bits[(unsigned int )(c->sock_wfd)->fd /
                          (8 * sizeof(__fd_mask ))] |= 1 <<
                                                        (unsigned int )(c->sock_wfd)->fd %
                                                        (8 * sizeof(__fd_mask ));
        }
      }
    }
    if ((c->ssl_wfd)->wr) {
      if (c->sock_ptr) {
        {
        wr_set.__fds_bits[(unsigned int )(c->ssl_wfd)->fd /
                          (8 * sizeof(__fd_mask ))] |= 1 <<
                                                        (unsigned int )(c->ssl_wfd)->fd %
                                                        (8 * sizeof(__fd_mask ));
        }
      } else {
        if (ssl_closing == 1) {
          {
          wr_set.__fds_bits[(unsigned int )(c->ssl_wfd)->fd /
                            (8 * sizeof(__fd_mask ))] |= 1 <<
                                                          (unsigned int )(c->ssl_wfd)->fd %
                                                          (8 *
                                                           sizeof(__fd_mask ));
          }
        } else {
          if (c->ssl_ptr < 16384) {
            goto _L___0;
          } else {
            if (ssl_closing == 2) {
              _L___0: 
              {
              tmp___0 = SSL_want(c->ssl);
              }
              if (tmp___0 == 2) {
                {
                wr_set.__fds_bits[(unsigned int )(c->ssl_wfd)->fd /
                                  (8 * sizeof(__fd_mask ))] |= 1 <<
                                                                (unsigned int )(c->ssl_wfd)->fd %
                                                                (8 *
                                                                 sizeof(__fd_mask ));
                }
              }
            }
          }
        }
      }
    }
    if ((c->sock_rfd)->rd) {
      {
      tv.tv_sec = (long )(c->opt)->timeout_idle;
      }
    } else {
      if ((c->ssl_wfd)->wr) {
        if (c->sock_ptr) {
          {
          tv.tv_sec = (long )(c->opt)->timeout_idle;
          }
        } else {
          goto _L___1;
        }
      } else {
        _L___1: 
        if ((c->sock_wfd)->wr) {
          if (c->ssl_ptr) {
            {
            tv.tv_sec = (long )(c->opt)->timeout_idle;
            }
          } else {
            {
            tv.tv_sec = (long )(c->opt)->timeout_close;
            }
          }
        } else {
          {
          tv.tv_sec = (long )(c->opt)->timeout_close;
          }
        }
      }
    }
    {
    tv.tv_usec = 0;
    ready = sselect(fdno, & rd_set, & wr_set, (fd_set *)((void *)0), & tv);
    }
    if (ready < 0) {
      {
      sockerror("select");
      }
      return (-1);
    }
    if (! ready) {
      if ((c->sock_rfd)->rd) {
        {
        log(7, (char const   *)"select timeout: connection reset");
        }
        return (-1);
      } else {
        {
        log(7, (char const   *)"select timeout waiting for SSL close_notify");
        }
        break;
      }
    }
    if (ssl_closing == 1) {
      goto _L___3;
    } else {
      if (ssl_closing == 2) {
        {
        tmp___2 = SSL_want(c->ssl);
        }
        if (tmp___2 == 3) {
          if (rd_set.__fds_bits[(unsigned int )(c->ssl_rfd)->fd /
                                (8 * sizeof(__fd_mask ))] &
              (1 << (unsigned int )(c->ssl_rfd)->fd % (8 * sizeof(__fd_mask )))) {
            goto _L___3;
          } else {
            goto _L___4;
          }
        } else {
          _L___4: 
          {
          tmp___3 = SSL_want(c->ssl);
          }
          if (tmp___3 == 2) {
            if (wr_set.__fds_bits[(unsigned int )(c->ssl_wfd)->fd /
                                  (8 * sizeof(__fd_mask ))] &
                (1 << (unsigned int )(c->ssl_wfd)->fd %
                       (8 * sizeof(__fd_mask )))) {
              _L___3: 
              {
              tmp___1 = SSL_shutdown(c->ssl);
              }
              switch (tmp___1) {
              case 1: 
              {
              log(6,
                  (char const   *)"SSL_shutdown successfully sent close_notify");
              (c->ssl_wfd)->wr = 0;
              ssl_closing = 3;
              }
              break;
              case 0: 
              {
              log(7, (char const   *)"SSL_shutdown retrying");
              ssl_closing = 2;
              }
              break;
              case 1986: 
              {
              sslerror("SSL_shutdown");
              }
              return (-1);
              }
            }
          }
        }
      }
    }
    {
    check_SSL_pending = 0;
    }
    if ((c->sock_wfd)->wr) {
      if (wr_set.__fds_bits[(unsigned int )(c->sock_wfd)->fd /
                            (8 * sizeof(__fd_mask ))] &
          (1 << (unsigned int )(c->sock_wfd)->fd % (8 * sizeof(__fd_mask )))) {
        {
        num = write((c->sock_wfd)->fd, (void const   *)(c->ssl_buff),
                    (unsigned int )c->ssl_ptr);
        }
        switch (num) {
        case 1986: 
        {
        tmp___4 = __errno_location();
        }
        switch ((*tmp___4)) {
        case 4: 
        {
        log(7, (char const   *)"writesocket interrupted by a signal: retrying");
        }
        break;
        case 11: 
        {
        log(5, (char const   *)"writesocket would block: retrying");
        }
        break;
        default: 
        {
        sockerror("writesocket");
        }
        return (-1);
        }
        break;
        case 0: 
        {
        log(7, (char const   *)"No data written to the socket: retrying");
        }
        break;
        default: 
        {
        memmove((void *)(c->ssl_buff), (void const   *)(c->ssl_buff + num),
                (unsigned int )(c->ssl_ptr - num));
        }
        if (c->ssl_ptr == 16384) {
          {
          check_SSL_pending = 1;
          }
        }
        {
        c->ssl_ptr -= num;
        c->sock_bytes += num;
        }
        if (! (c->ssl_rfd)->rd) {
          if (! c->ssl_ptr) {
            {
            shutdown((c->sock_wfd)->fd, 1);
            log(7,
                (char const   *)"Socket write shutdown (no more data to send)");
            (c->sock_wfd)->wr = 0;
            }
          }
        }
        }
      }
    }
    if ((c->ssl_wfd)->wr) {
      if (c->sock_ptr) {
        if (wr_set.__fds_bits[(unsigned int )(c->ssl_wfd)->fd /
                              (8 * sizeof(__fd_mask ))] &
            (1 << (unsigned int )(c->ssl_wfd)->fd % (8 * sizeof(__fd_mask )))) {
          goto _L___5;
        } else {
          goto _L___6;
        }
      } else {
        _L___6: 
        {
        tmp___6 = SSL_want(c->ssl);
        }
        if (tmp___6 == 3) {
          if (rd_set.__fds_bits[(unsigned int )(c->ssl_rfd)->fd /
                                (8 * sizeof(__fd_mask ))] &
              (1 << (unsigned int )(c->ssl_rfd)->fd % (8 * sizeof(__fd_mask )))) {
            _L___5: 
            {
            num = SSL_write(c->ssl, (void const   *)(c->sock_buff), c->sock_ptr);
            err = SSL_get_error(c->ssl, num);
            }
            switch (err) {
            case 0: 
            {
            memmove((void *)(c->sock_buff),
                    (void const   *)(c->sock_buff + num),
                    (unsigned int )(c->sock_ptr - num));
            c->sock_ptr -= num;
            c->ssl_bytes += num;
            }
            if (! ssl_closing) {
              if (! (c->sock_rfd)->rd) {
                if (! c->sock_ptr) {
                  if ((c->ssl_wfd)->wr) {
                    {
                    log(7,
                        (char const   *)"SSL write shutdown (no more data to send)");
                    ssl_closing = 1;
                    }
                  }
                }
              }
            }
            break;
            case 3: 
            {

            }
            case 2: 
            {

            }
            case 4: 
            {
            log(7, (char const   *)"SSL_write returned WANT_: retrying");
            }
            break;
            case 5: 
            {

            }
            if (num < 0) {
              {
              tmp___5 = __errno_location();
              }
              switch ((*tmp___5)) {
              case 4: 
              {
              log(7,
                  (char const   *)"SSL_write interrupted by a signal: retrying");
              }
              break;
              case 11: 
              {
              log(7, (char const   *)"SSL_write returned EAGAIN: retrying");
              }
              break;
              default: 
              {
              sockerror("SSL_write (ERROR_SYSCALL)");
              }
              return (-1);
              }
            }
            break;
            case 6: 
            {
            log(7, (char const   *)"SSL closed on SSL_write");
            (c->ssl_wfd)->wr = 0;
            (c->ssl_rfd)->rd = (c->ssl_wfd)->wr;
            }
            break;
            case 1: 
            {
            sslerror("SSL_write");
            }
            return (-1);
            default: 
            {
            log(3, (char const   *)"SSL_write/SSL_get_error returned %d", err);
            }
            return (-1);
            }
          }
        }
      }
    }
    if ((c->sock_rfd)->rd) {
      if (rd_set.__fds_bits[(unsigned int )(c->sock_rfd)->fd /
                            (8 * sizeof(__fd_mask ))] &
          (1 << (unsigned int )(c->sock_rfd)->fd % (8 * sizeof(__fd_mask )))) {
        {
        num = read((c->sock_rfd)->fd, (void *)(c->sock_buff + c->sock_ptr),
                   (unsigned int )(16384 - c->sock_ptr));
        }
        switch (num) {
        case 1986: 
        {
        tmp___7 = __errno_location();
        }
        switch ((*tmp___7)) {
        case 4: 
        {
        log(7, (char const   *)"readsocket interrupted by a signal: retrying");
        }
        break;
        case 11: 
        {
        log(5, (char const   *)"readsocket would block: retrying");
        }
        break;
        default: 
        {
        sockerror("readsocket");
        }
        return (-1);
        }
        break;
        case 0: 
        {
        log(7, (char const   *)"Socket closed on read");
        (c->sock_rfd)->rd = 0;
        }
        if (! ssl_closing) {
          if (! c->sock_ptr) {
            if ((c->ssl_wfd)->wr) {
              {
              log(7, (char const   *)"SSL write shutdown (output buffer empty)");
              ssl_closing = 1;
              }
            }
          }
        }
        break;
        default: 
        {
        c->sock_ptr += num;
        }
        }
      }
    }
    if ((c->ssl_rfd)->rd) {
      if (c->ssl_ptr < 16384) {
        if (rd_set.__fds_bits[(unsigned int )(c->ssl_rfd)->fd /
                              (8 * sizeof(__fd_mask ))] &
            (1 << (unsigned int )(c->ssl_rfd)->fd % (8 * sizeof(__fd_mask )))) {
          goto _L___7;
        } else {
          goto _L___9;
        }
      } else {
        _L___9: 
        {
        tmp___9 = SSL_want(c->ssl);
        }
        if (tmp___9 == 2) {
          if (wr_set.__fds_bits[(unsigned int )(c->ssl_wfd)->fd /
                                (8 * sizeof(__fd_mask ))] &
              (1 << (unsigned int )(c->ssl_wfd)->fd % (8 * sizeof(__fd_mask )))) {
            goto _L___7;
          } else {
            goto _L___8;
          }
        } else {
          _L___8: 
          if (check_SSL_pending) {
            {
            tmp___10 = SSL_pending(c->ssl);
            }
            if (tmp___10) {
              _L___7: 
              {
              num = SSL_read(c->ssl, (void *)(c->ssl_buff + c->ssl_ptr),
                             16384 - c->ssl_ptr);
              err = SSL_get_error(c->ssl, num);
              }
              switch (err) {
              case 0: 
              {
              c->ssl_ptr += num;
              }
              break;
              case 3: 
              {

              }
              case 2: 
              {

              }
              case 4: 
              {
              log(7, (char const   *)"SSL_read returned WANT_: retrying");
              }
              break;
              case 5: 
              {

              }
              if (num < 0) {
                {
                tmp___8 = __errno_location();
                }
                switch ((*tmp___8)) {
                case 4: 
                {
                log(7,
                    (char const   *)"SSL_read interrupted by a signal: retrying");
                }
                break;
                case 11: 
                {
                log(7, (char const   *)"SSL_read returned EAGAIN: retrying");
                }
                break;
                default: 
                {
                sockerror("SSL_read (ERROR_SYSCALL)");
                }
                return (-1);
                }
              } else {
                {
                log(7, (char const   *)"SSL socket closed on SSL_read");
                (c->ssl_wfd)->wr = 0;
                (c->ssl_rfd)->rd = (c->ssl_wfd)->wr;
                }
              }
              break;
              case 6: 
              {
              log(7, (char const   *)"SSL closed on SSL_read");
              (c->ssl_rfd)->rd = 0;
              }
              if (! ssl_closing) {
                if (! c->sock_ptr) {
                  if ((c->ssl_wfd)->wr) {
                    {
                    log(7,
                        (char const   *)"SSL write shutdown (output buffer empty)");
                    ssl_closing = 1;
                    }
                  }
                }
              }
              if (! c->ssl_ptr) {
                if ((c->sock_wfd)->wr) {
                  {
                  shutdown((c->sock_wfd)->fd, 1);
                  log(7,
                      (char const   *)"Socket write shutdown (output buffer empty)");
                  (c->sock_wfd)->wr = 0;
                  }
                }
              }
              break;
              case 1: 
              {
              sslerror("SSL_read");
              }
              return (-1);
              default: 
              {
              log(3, (char const   *)"SSL_read/SSL_get_error returned %d", err);
              }
              return (-1);
              }
            }
          }
        }
      }
    }
  }
  return (0);
}
}
static void cleanup(CLI *c , int error ) 
{ 

  {
  if (c->ssl) {
    {
    SSL_set_shutdown(c->ssl, 3);
    SSL_free(c->ssl);
    ERR_remove_state(0);
    }
  }
  if (c->remote_fd.fd >= 0) {
    if (error) {
      if (c->remote_fd.is_socket) {
        {
        reset(c->remote_fd.fd, "linger (remote)");
        }
      }
    }
    {
    close(c->remote_fd.fd);
    }
  }
  if (c->local_rfd.fd >= 0) {
    if (c->local_rfd.fd == c->local_wfd.fd) {
      if (error) {
        if (c->local_rfd.is_socket) {
          {
          reset(c->local_rfd.fd, "linger (local)");
          }
        }
      }
      {
      close(c->local_rfd.fd);
      }
    } else {
      if (error) {
        if (c->local_rfd.is_socket) {
          {
          reset(c->local_rfd.fd, "linger (local_rfd)");
          }
        }
      }
      if (error) {
        if (c->local_wfd.is_socket) {
          {
          reset(c->local_wfd.fd, "linger (local_wfd)");
          }
        }
      }
    }
  }
  return;
}
}
static void print_cipher(CLI *c ) 
{ SSL_CIPHER *cipher ;
  char buf[1024] ;
  int len ;

  {
  {
  cipher = SSL_get_current_cipher(c->ssl);
  SSL_CIPHER_description(cipher, buf, 1024);
  len = (int )strlen((char const   *)(buf));
  }
  if (len > 0) {
    {
    buf[len - 1] = '\0';
    }
  }
  {
  log(6, (char const   *)"Negotiated ciphers: %s", buf);
  }
  return;
}
}
static int auth_libwrap(CLI *c ) 
{ struct request_info request ;
  int result ;
  register unsigned short __v ;
  register unsigned short __x ;
  int tmp ;

  {
  {
  enter_critical_section(1);
  request_init(& request, 2, (c->opt)->servname, 1, c->local_rfd.fd, 0);
  sock_host(& request);
  result = hosts_access(& request);
  leave_critical_section(1);
  }
  if (! result) {
    {
    __x = c->addr.sin_port;
    tmp = ((int )__x);
    }
    if (tmp) {
      {
      __v = (unsigned short )((((int )__x >> 8) & 255) |
                              (((int )__x & 255) << 8));
      }
    } else {
      {
      __asm__  ("rorw $8, %w0": "=r" (__v): "0" (__x): "cc");
      }
    }
    {
    log(4, (char const   *)"Connection from %s:%d REFUSED by libwrap",
        c->accepting_address, __v);
    log(7, (char const   *)"See hosts_access(5) for details");
    }
    return (-1);
  }
  return (0);
}
}
static int auth_user(CLI *c ) 
{ struct servent *s_ent ;
  struct sockaddr_in ident ;
  int fd ;
  char name[1024] ;
  int retval___0 ;
  register unsigned short __v ;
  register unsigned short __x ;
  int tmp ;
  int *tmp___0 ;
  int tmp___1 ;
  int *tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;
  register unsigned short __v___0 ;
  register unsigned short __x___0 ;
  int tmp___5 ;
  register unsigned short __v___1 ;
  register unsigned short __x___1 ;
  int tmp___6 ;
  int tmp___7 ;
  int tmp___8 ;
  int tmp___10 ;
  char *p ;
  int tmp___11 ;

  {
  if (! (c->opt)->username) {
    return (0);
  }
  {
  fd = socket(2, 1, 0);
  }
  if (fd < 0) {
    {
    sockerror("socket (auth_user)");
    }
    return (-1);
  }
  {
  alloc_fd(fd);
  memcpy((void *)((void *)(& ident)),
         (void const   *)((void const   *)(& c->addr)),
         sizeof(ident));
  s_ent = getservbyname((char const   *)"auth", (char const   *)"tcp");
  }
  if (s_ent) {
    {
    ident.sin_port = (unsigned short )s_ent->s_port;
    }
  } else {
    {
    log(4, (char const   *)"Unknown service \'auth\': using default 113");
    __x = (unsigned short )113;
    tmp = ((int )__x);
    }
    if (tmp) {
      {
      __v = (unsigned short )((((int )__x >> 8) & 255) |
                              (((int )__x & 255) << 8));
      }
    } else {
      {
      __asm__  ("rorw $8, %w0": "=r" (__v): "0" (__x): "cc");
      }
    }
    {
    ident.sin_port = __v;
    }
  }
  {
  tmp___4 = connect(fd, (void const   *)((struct sockaddr *)(& ident)),
                    sizeof(ident));
  }
  if (tmp___4 < 0) {
    {
    tmp___0 = __errno_location();
    }
    switch ((*tmp___0)) {
    case 115: 
    {
    }
    break;
    case 11: 
    {
    }
    break;
    default: 
    {
    close(fd);
    }
    return (-1);
    }
    {
    tmp___1 = waitforsocket(fd, 1, (c->opt)->timeout_busy);
    }
    if (tmp___1 < 1) {
      {
      close(fd);
      }
      return (-1);
    }
    {
    tmp___3 = connect(fd, (void const   *)((struct sockaddr *)(& ident)),
                      sizeof(ident));
    }
    if (tmp___3 < 0) {
      {
      tmp___2 = __errno_location();
      }
      switch ((*tmp___2)) {
      case 22: 
      {
      }
      case 106: 
      {

      }
      break;
      default: 
      {
      close(fd);
      }
      return (-1);
      }
    }
  }
  {
  log(7, (char const   *)"IDENT server connected");
  __x___0 = (c->opt)->localport;
  tmp___5 = ((int )__x___0);
  }
  if (tmp___5) {
    {
    __v___0 = (unsigned short )((((int )__x___0 >> 8) & 255) |
                                (((int )__x___0 & 255) << 8));
    }
  } else {
    {
    __asm__  ("rorw $8, %w0": "=r" (__v___0): "0" (__x___0): "cc");
    }
  }
  {
  __x___1 = c->addr.sin_port;
  tmp___6 = ((int )__x___1);
  }
  if (tmp___6) {
    {
    __v___1 = (unsigned short )((((int )__x___1 >> 8) & 255) |
                                (((int )__x___1 & 255) << 8));
    }
  } else {
    {
    __asm__  ("rorw $8, %w0": "=r" (__v___1): "0" (__x___1): "cc");
    }
  }
  {
  tmp___7 = fdprintf(c, fd, (char const   *)"%u , %u", __v___1, __v___0);
  }
  if (tmp___7 < 0) {
    {
    sockerror("fdprintf (auth_user)");
    close(fd);
    }
    return (-1);
  }
  {
  tmp___8 = fdscanf(c, fd, (char const   *)"%*[^:]: USERID :%*[^:]:%s", name);
  }
  if (tmp___8 != 1) {
    {
    log(3, (char const   *)"Incorrect data from IDENT server");
    close(fd);
    }
    return (-1);
  }
  {
  close(fd);
  tmp___10 = strcmp((char const   *)(name), (char const   *)(c->opt)->username);
  }
  if (tmp___10) {
    {
    retval___0 = -1;
    }
  } else {
    {
    retval___0 = 0;
    }
  }
  while (1) {
    {
    p = name;
    }
    while ((*p)) {
      {
      tmp___11 = _get__ctype_b((int )(*p));
      }
      if (! (tmp___11 & 16384)) {
        {
        (*p) = '.';
        }
      }
      {
      p ++;
      }
    }
    break;
  }
  {
  log(6, (char const   *)"IDENT resolved remote user to %s", name);
  }
  return (retval___0);
}
}
static int connect_local(CLI *c ) 
{ char env[3][1024] ;
  char name[1024] ;
  int fd[2] ;
  int pid ;
  X509 *peer ;
  sigset_t newmask ;
  char tty[1024] ;
  int tmp ;
  int tmp___0 ;
  size_t tmp___1 ;
  X509_NAME *tmp___2 ;
  char *p ;
  int tmp___3 ;
  size_t tmp___4 ;
  X509_NAME *tmp___5 ;
  char *p___0 ;
  int tmp___6 ;
  size_t tmp___7 ;

  {
  if ((c->opt)->option.pty) {
    {
    tmp = pty_allocate(fd, fd + 1, tty, 1024);
    }
    if (tmp) {
      return (-1);
    }
    {
    log(7, (char const   *)"%s allocated", tty);
    }
  } else {
    {
    tmp___0 = make_sockets(fd);
    }
    if (tmp___0) {
      return (-1);
    }
  }
  {
  pid = fork();
  c->pid = (unsigned long )pid;
  }
  switch (pid) {
  case 1986: 
  {
  close(fd[0]);
  close(fd[1]);
  ioerror("fork");
  }
  return (-1);
  case 0: 
  {
  close(fd[0]);
  dup2(fd[1], 0);
  dup2(fd[1], 1);
  }
  if (! options.option.foreground) {
    {
    dup2(fd[1], 2);
    }
  }
  {
  close(fd[1]);
  env[0][1023] = '\0';
  strncpy((char *)(env[0]),
          (char const   *)((char const   *)"REMOTE_HOST="),
          1023);
  env[0][1023] = '\0';
  tmp___1 = strlen((char const   *)(env[0]));
  strncat((char *)(env[0]),
          (char const   *)((char const   *)(c->accepting_address)),
          (1024 - tmp___1) - 1);
  putenv(env[0]);
  }
  if ((c->opt)->option.transparent) {
    {
    putenv("LD_PRELOAD=/usr/local/lib/libstunnel.so");
    putenv("_RLD_LIST=/usr/local/lib/libstunnel.so:DEFAULT");
    }
  }
  if (c->ssl) {
    {
    peer = SSL_get_peer_certificate(c->ssl);
    }
    if (peer) {
      {
      env[1][1023] = '\0';
      strncpy((char *)(env[1]),
              (char const   *)((char const   *)"SSL_CLIENT_DN="),
              1023);
      tmp___2 = X509_get_subject_name(peer);
      X509_NAME_oneline(tmp___2, name, 1024);
      }
      while (1) {
        {
        p = name;
        }
        while ((*p)) {
          {
          tmp___3 = _get__ctype_b((int )(*p));
          }
          if (! (tmp___3 & 16384)) {
            {
            (*p) = '.';
            }
          }
          {
          p ++;
          }
        }
        break;
      }
      {
      env[1][1023] = '\0';
      tmp___4 = strlen((char const   *)(env[1]));
      strncat((char *)(env[1]),
              (char const   *)((char const   *)(name)),
              (1024 - tmp___4) - 1);
      putenv(env[1]);
      env[2][1023] = '\0';
      strncpy((char *)(env[2]),
              (char const   *)((char const   *)"SSL_CLIENT_I_DN="),
              1023);
      tmp___5 = X509_get_issuer_name(peer);
      X509_NAME_oneline(tmp___5, name, 1024);
      }
      while (1) {
        {
        p___0 = name;
        }
        while ((*p___0)) {
          {
          tmp___6 = _get__ctype_b((int )(*p___0));
          }
          if (! (tmp___6 & 16384)) {
            {
            (*p___0) = '.';
            }
          }
          {
          p___0 ++;
          }
        }
        break;
      }
      {
      env[2][1023] = '\0';
      tmp___7 = strlen((char const   *)(env[2]));
      strncat((char *)(env[2]),
              (char const   *)((char const   *)(name)),
              (1024 - tmp___7) - 1);
      putenv(env[2]);
      X509_free(peer);
      }
    }
  }
  {
  sigemptyset(& newmask);
  sigprocmask(2,
              (sigset_t const   *)((sigset_t const   *)(& newmask)),
              (sigset_t *)((sigset_t *)((void *)0)));
  execvp((char const   *)(c->opt)->execname, (char * const  *)(c->opt)->execargs);
  ioerror((c->opt)->execname);
  _exit(1);
  }
  default: 
  {

  }
  break;
  }
  {
  log(6, (char const   *)"Local mode child started (PID=%lu)", c->pid);
  close(fd[1]);
  fcntl(fd[0], 2, 1);
  }
  return (fd[0]);
}
}
static int make_sockets(int *fd ) 
{ struct sockaddr_in addr ;
  int addrlen ;
  int s ;
  register unsigned int __v ;
  register unsigned int __x ;
  int tmp ;
  int *tmp___0 ;
  int tmp___1 ;
  int *tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;
  int tmp___5 ;
  int tmp___6 ;

  {
  {
  s = socket(2, 1, 0);
  }
  if (s < 0) {
    {
    }
    return (-1);
  }
  {
  (*(fd + 1)) = socket(2, 1, 0);
  }
  if ((*(fd + 1)) < 0) {
    {
    }
    return (-1);
  }
  {
  addrlen = (int )sizeof(addr);
  memset((void *)(& addr), 0, (unsigned int )addrlen);
  addr.sin_family = (unsigned short )2;
  __x = 2130706433;
  tmp = ((int )__x);
  }
  if (tmp) {
    {
    __v = ((((__x & 4278190080) >> 24) | ((__x & 16711680) >> 8)) |
           ((__x & 65280) << 8)) | ((__x & 255) << 24);
    }
  } else {
    {
    __asm__  ("rorw $8, %w0;"
              "rorl $16, %0;"
              "rorw $8, %w0": "=r" (__v): "0" (__x): "cc");
    }
  }
  {
  addr.sin_addr.s_addr = __v;
  addr.sin_port = (unsigned short )0;
  tmp___1 = bind(s, (void const   *)((struct sockaddr *)(& addr)),
                 (unsigned int )addrlen);
  }
  if (tmp___1) {
    {
    tmp___0 = __errno_location();
    }
  }
  {
  tmp___3 = bind((*(fd + 1)), (void const   *)((struct sockaddr *)(& addr)),
                 (unsigned int )addrlen);
  }
  if (tmp___3) {
    {
    tmp___2 = __errno_location();
    }
  }
  {
  tmp___4 = listen(s, 5);
  }
  if (tmp___4) {
    {
    sockerror("listen");
    }
    return (-1);
  }
  {
  tmp___5 = getsockname(s,
                        (void *)((void *)((struct sockaddr *)(& addr))),
                        (socklen_t *)((socklen_t *)(& addrlen)));
  }
  if (tmp___5) {
    {
    sockerror("getsockname");
    }
    return (-1);
  }
  {
  tmp___6 = connect((*(fd + 1)), (void const   *)((struct sockaddr *)(& addr)),
                    (unsigned int )addrlen);
  }
  if (tmp___6) {
    {
    sockerror("connect");
    }
    return (-1);
  }
  {
  (*(fd + 0)) = accept(s,
                       (void *)((void *)((struct sockaddr *)(& addr))),
                       (socklen_t *)((socklen_t *)(& addrlen)));
  }
  if ((*(fd + 0)) < 0) {
    {
    sockerror("accept");
    }
    return (-1);
  }
  {
  close(s);
  }
  return (0);
}
}
static int connect_remote(CLI *c ) 
{ struct sockaddr_in addr ;
  u32 *list ;
  int error ;
  int s ;
  u16 dport ;
  int tmp ;
  int tmp___0 ;
  register unsigned short __v ;
  register unsigned short __x ;
  int tmp___1 ;
  int tmp___2 ;
  register unsigned short __v___0 ;
  register unsigned short __x___0 ;
  int tmp___3 ;
  int tmp___4 ;
  int *tmp___5 ;
  char *tmp___6 ;
  register unsigned short __v___1 ;
  register unsigned short __x___1 ;
  int tmp___7 ;
  int tmp___8 ;
  int tmp___9 ;
  int *tmp___10 ;
  char *tmp___11 ;
  register unsigned short __v___2 ;
  register unsigned short __x___2 ;
  int tmp___12 ;

  {
  {
  memset((void *)(& addr), 0, sizeof(addr));
  addr.sin_family = (unsigned short )2;
  }
  if ((c->opt)->option.delayed_lookup) {
    {
    tmp = name2nums((c->opt)->remote_address, "127.0.0.1",
                    & c->resolved_addresses, & dport);
    }
    if (tmp == 0) {
      return (-1);
    }
    {
    list = c->resolved_addresses;
    }
  } else {
    {
    list = (c->opt)->remotenames;
    dport = (c->opt)->remoteport;
    }
  }
  while ((*list) + 1) {
    {
    s = socket(2, 1, 0);
    }
    if (s < 0) {
      {
      sockerror("remote socket");
      }
      return (-1);
    }
    {
    tmp___0 = alloc_fd(s);
    }
    if (tmp___0) {
      return (-1);
    }
    if (c->bind_ip) {
      {
      addr.sin_addr.s_addr = (unsigned int )c->bind_ip;
      __x = (unsigned short )0;
      tmp___1 = ((int )__x);
      }
      if (tmp___1) {
        {
        __v = (unsigned short )((((int )__x >> 8) & 255) |
                                (((int )__x & 255) << 8));
        }
      } else {
        {
        __asm__  ("rorw $8, %w0": "=r" (__v): "0" (__x): "cc");
        }
      }
      {
      addr.sin_port = __v;
      tmp___2 = bind(s, (void const   *)((struct sockaddr *)(& addr)),
                     sizeof(addr));
      }
      if (tmp___2 < 0) {
        {
        sockerror("bind transparent");
        close(s);
        }
        return (-1);
      }
    }
    {
    addr.sin_port = dport;
    addr.sin_addr.s_addr = (*list);
    safe_ntoa(c->connecting_address, addr.sin_addr);
    __x___0 = addr.sin_port;
    tmp___3 = ((int )__x___0);
    }
    if (tmp___3) {
      {
      __v___0 = (unsigned short )((((int )__x___0 >> 8) & 255) |
                                  (((int )__x___0 & 255) << 8));
      }
    } else {
      {
      __asm__  ("rorw $8, %w0": "=r" (__v___0): "0" (__x___0): "cc");
      }
    }
    {
    log(7, (char const   *)"%s connecting %s:%d", (c->opt)->servname,
        c->connecting_address, __v___0);
    tmp___4 = connect(s, (void const   *)((struct sockaddr *)(& addr)),
                      sizeof(addr));
    }
    if (! tmp___4) {
      return (s);
    }
    {
    tmp___5 = __errno_location();
    error = (*tmp___5);
    }
    switch (error) {
    case 115: 
    {
    }
    break;
    case 11: 
    {
    }
    break;
    default: 
    {
    tmp___6 = my_strerror(error);
    __x___1 = addr.sin_port;
    tmp___7 = ((int )__x___1);
    }
    if (tmp___7) {
      {
      __v___1 = (unsigned short )((((int )__x___1 >> 8) & 255) |
                                  (((int )__x___1 & 255) << 8));
      }
    } else {
      {
      __asm__  ("rorw $8, %w0": "=r" (__v___1): "0" (__x___1): "cc");
      }
    }
    {
//        c->connecting_address, __v___1, tmp___6, error);
    close(s);
    }
    goto __Cont;
    }
    {
    tmp___8 = waitforsocket(s, 1, (c->opt)->timeout_busy);
    }
    if (tmp___8 < 1) {
      {
      close(s);
      }
      goto __Cont;
    }
    {
    tmp___9 = connect(s, (void const   *)((struct sockaddr *)(& addr)),
                      sizeof(addr));
    }
    if (! tmp___9) {
      return (s);
    }
    {
    tmp___10 = __errno_location();
    error = (*tmp___10);
    }
    switch (error) {
    case 22: 
    {
    }
    case 106: 
    {

    }
    return (s);
    default: 
    {
    tmp___11 = my_strerror(error);
    __x___2 = addr.sin_port;
    tmp___12 = ((int )__x___2);
    }
    if (tmp___12) {
      {
      __v___2 = (unsigned short )((((int )__x___2 >> 8) & 255) |
                                  (((int )__x___2 & 255) << 8));
      }
    } else {
      {
      __asm__  ("rorw $8, %w0": "=r" (__v___2): "0" (__x___2): "cc");
      }
    }
    {
//        c->connecting_address, __v___2, tmp___11, error);
    close(s);
    }
    goto __Cont;
    }
    __Cont: 
    {
    list ++;
    }
  }
  return (-1);
}
}
static void reset(int fd , char *txt ) 
{ struct linger l ;
  int *tmp ;
  int tmp___0 ;

  {
  {
  l.l_onoff = 1;
  l.l_linger = 0;
  tmp___0 = setsockopt(fd, 1, 13, (void const   *)((void *)(& l)), sizeof(l));
  }
  if (tmp___0) {
    {
    tmp = __errno_location();
    log_error(7, (*tmp), txt);
    }
  }
  return;
}
}
static FILE *outfile   = (FILE *)((void *)0);
void log_open(void) 
{ int fd ;

  {
  if (options.output_file) {
    {
    fd = open((char const   *)options.output_file, 1089, 416);
    }
    if (fd >= 0) {
      {
      fcntl(fd, 2, 1);
      {
      outfile->__BLAST_FLAG = 1;
      {

      }
      }
      outfile = fdopen(fd, (char const   *)"a");
      }
      if (outfile) {
        return;
      }
    }
  }
  if (options.option.syslog) {
    {
    openlog((char const   *)"stunnel", 11, options.facility);
    }
  }
  if (options.output_file) {
    {
    log(3, (char const   *)"Unable to open output file: %s", options.output_file);
    }
  }
  return;
}
}
void log_close(void) 
{ 

  {
  if (outfile) {
    {

    {
    if (outfile->__BLAST_FLAG == 1) {
      outfile->__BLAST_FLAG = 0;
    } else {
      __error__();
    }
    {

    }
    }
    fclose(outfile);
    }
    return;
  }
  if (options.option.syslog) {
    {
    closelog();
    }
  }
  return;
}
}
void log(int level , char const   *format  , ...) 
{ __ccured_va_list arglist ;
  char text[1024] ;
  char timestamped[1024] ;
  FILE *out ;
  time_t gmt ;
  struct tm *timeptr ;
  struct tm timestruct ;
  unsigned long tmp ;
  unsigned long tmp___1 ;
  unsigned long tmp___2 ;

  {
  if (level > options.debug_level) {
    return;
  }
  {
  tmp = (unsigned long )GCC_STDARG_START();
  __ccured_va_start(arglist, tmp);
  vsnprintf((char *)(text), 1024,
            (char const   *)format, arglist);
  __ccured_va_end(arglist);
  }
  if (! outfile) {
    if (options.option.syslog) {
      {
      syslog(level, (char const   *)"%s", text);
      }
      return;
    }
  }
  if (outfile) {
    {
    out = outfile;
    }
  } else {
    {
    out = get_stderr();
    {
    out->__BLAST_FLAG = 1;
    {

    }
    }

    }
  }
  {
  time(& gmt);
  timeptr = localtime_r((time_t const   *)((time_t const   *)(& gmt)),
                        (struct tm *)(& timestruct));
  tmp___1 = stunnel_thread_id();
  tmp___2 = stunnel_process_id();
  snprintf((char *)(timestamped), 1024,
           (char const   *)((char const   *)"%04d.%02d.%02d %02d:%02d:%02d LOG%d[%lu:%lu]: %s"),
           timeptr->tm_year + 1900, timeptr->tm_mon + 1, timeptr->tm_mday,
           timeptr->tm_hour, timeptr->tm_min, timeptr->tm_sec, level, tmp___2,
           tmp___1, text);
  {
  if (! (out->__BLAST_FLAG == 1)) {
    __error__();
  }
  {

  }
  }
  fprintf((FILE *)out,
          (char const   *)((char const   *)"%s\n"), timestamped);
  fflush(out);
  }
  return;
}
}
void log_raw(char const   *format  , ...) 
{ __ccured_va_list arglist ;
  char text[1024] ;
  FILE *out ;
  unsigned long tmp ;

  {
  {
  tmp = (unsigned long )GCC_STDARG_START();
  __ccured_va_start(arglist, tmp);
  vsnprintf((char *)(text), 1024,
            (char const   *)format, arglist);
  __ccured_va_end(arglist);
  }
  if (outfile) {
    {
    out = outfile;
    }
  } else {
    {
    out = get_stderr();
    {
    out->__BLAST_FLAG = 1;
    {

    }
    }

    }
  }
  {

  {
  if (! (out->__BLAST_FLAG == 1)) {
    __error__();
  }
  {

  }
  }
  fprintf((FILE *)out,
          (char const   *)((char const   *)"%s\n"), text);
  fflush(out);
  }
  return;
}
}
static int host2nums(char *hostname , u32 **hostlist ) ;
static int parse_debug_level(char *arg ) ;
static int parse_ssl_option(char *arg ) ;
static int print_socket_options(void) ;
static void print_option(char *line , int type , OPT_UNION *val ) ;
static int parse_socket_option(char *arg ) ;
static char *section_validate(LOCAL_OPTIONS *section ) ;
static char *stralloc(char *str ) ;
static char **argalloc(char *str ) ;
static char *option_not_found   = "Specified option name is not valid here";
static char *global_options(CMD cmd , char *opt , char *arg ) 
{ int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;
  int tmp___5 ;
  int tmp___6 ;
  int tmp___7 ;
  int tmp___8 ;
  int tmp___9 ;
  int tmp___10 ;
  int tmp___11 ;
  int tmp___12 ;
  int tmp___13 ;
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

  {
  if (cmd == 2) {
    {
    log_raw((char const   *)"Global options");
    }
  } else {
    if (cmd == 3) {
      {
      log_raw((char const   *)"Global options");
      }
    }
  }
  switch (cmd) {
  case 0: 
  {
  options.ca_dir = (char *)((void *)0);
  }
  break;
  case 1: 
  {
  tmp = strcasecmp((char const   *)opt, (char const   *)"CApath");
  }
  if (tmp) {
    break;
  }
  if ((*(arg + 0))) {
    {
    options.ca_dir = stralloc(arg);
    }
  } else {
    {
    options.ca_dir = (char *)((void *)0);
    }
  }
  return ((char *)((void *)0));
  case 2: 
  {

  }
  break;
  case 3: 
  {
  log_raw((char const   *)"%-15s = CA certificate directory for \'verify\' option",
          "CApath");
  }
  break;
  }
  switch (cmd) {
  case 0: 
  {
  options.ca_file = (char *)((void *)0);
  }
  break;
  case 1: 
  {
  tmp___0 = strcasecmp((char const   *)opt, (char const   *)"CAfile");
  }
  if (tmp___0) {
    break;
  }
  if ((*(arg + 0))) {
    {
    options.ca_file = stralloc(arg);
    }
  } else {
    {
    options.ca_file = (char *)((void *)0);
    }
  }
  return ((char *)((void *)0));
  case 2: 
  {

  }
  break;
  case 3: 
  {
  log_raw((char const   *)"%-15s = CA certificate file for \'verify\' option",
          "CAfile");
  }
  break;
  }
  switch (cmd) {
  case 0: 
  {
  options.cert = "/usr/local/etc/stunnel/stunnel.pem";
  }
  break;
  case 1: 
  {
  tmp___1 = strcasecmp((char const   *)opt, (char const   *)"cert");
  }
  if (tmp___1) {
    break;
  }
  {
  options.cert = stralloc(arg);
  options.option.cert = 1;
  }
  return ((char *)((void *)0));
  case 2: 
  {
  log_raw((char const   *)"%-15s = %s", "cert", options.cert);
  }
  break;
  case 3: 
  {
  log_raw((char const   *)"%-15s = certificate chain", "cert");
  }
  break;
  }
  switch (cmd) {
  case 0: 
  {
  options.chroot_dir = (char *)((void *)0);
  }
  break;
  case 1: 
  {
  tmp___2 = strcasecmp((char const   *)opt, (char const   *)"chroot");
  }
  if (tmp___2) {
    break;
  }
  {
  options.chroot_dir = stralloc(arg);
  }
  return ((char *)((void *)0));
  case 2: 
  {

  }
  break;
  case 3: 
  {
  log_raw((char const   *)"%-15s = directory to chroot stunnel process",
          "chroot");
  }
  break;
  }
  switch (cmd) {
  case 0: 
  {
  options.cipher_list = "ALL:!ADH:+RC4:@STRENGTH";
  }
  break;
  case 1: 
  {
  tmp___3 = strcasecmp((char const   *)opt, (char const   *)"ciphers");
  }
  if (tmp___3) {
    break;
  }
  {
  options.cipher_list = stralloc(arg);
  }
  return ((char *)((void *)0));
  case 2: 
  {
  log_raw((char const   *)"%-15s = %s", "ciphers", "ALL:!ADH:+RC4:@STRENGTH");
  }
  break;
  case 3: 
  {
  log_raw((char const   *)"%-15s = list of permitted SSL ciphers", "ciphers");
  }
  break;
  }
  switch (cmd) {
  case 0: 
  {
  options.option.client = 0;
  }
  break;
  case 1: 
  {
  tmp___4 = strcasecmp((char const   *)opt, (char const   *)"client");
  }
  if (tmp___4) {
    break;
  }
  {
  tmp___6 = strcasecmp((char const   *)arg, (char const   *)"yes");
  }
  if (tmp___6) {
    {
    tmp___5 = strcasecmp((char const   *)arg, (char const   *)"no");
    }
    if (tmp___5) {
      return ("argument should be either \'yes\' or \'no\'");
    } else {
      {
      options.option.client = 0;
      }
    }
  } else {
    {
    options.option.client = 1;
    }
  }
  return ((char *)((void *)0));
  case 2: 
  {

  }
  break;
  case 3: 
  {
  log_raw((char const   *)"%-15s = yes|no client mode (remote service uses SSL)",
          "client");
  }
  break;
  }
  switch (cmd) {
  case 0: 
  {
  options.crl_dir = (char *)((void *)0);
  }
  break;
  case 1: 
  {
  tmp___7 = strcasecmp((char const   *)opt, (char const   *)"CRLpath");
  }
  if (tmp___7) {
    break;
  }
  if ((*(arg + 0))) {
    {
    options.crl_dir = stralloc(arg);
    }
  } else {
    {
    options.crl_dir = (char *)((void *)0);
    }
  }
  return ((char *)((void *)0));
  case 2: 
  {

  }
  break;
  case 3: 
  {
  log_raw((char const   *)"%-15s = CRL directory", "CRLpath");
  }
  break;
  }
  switch (cmd) {
  case 0: 
  {
  options.crl_file = (char *)((void *)0);
  }
  break;
  case 1: 
  {
  tmp___8 = strcasecmp((char const   *)opt, (char const   *)"CRLfile");
  }
  if (tmp___8) {
    break;
  }
  if ((*(arg + 0))) {
    {
    options.crl_file = stralloc(arg);
    }
  } else {
    {
    options.crl_file = (char *)((void *)0);
    }
  }
  return ((char *)((void *)0));
  case 2: 
  {

  }
  break;
  case 3: 
  {
  log_raw((char const   *)"%-15s = CRL file", "CRLfile");
  }
  break;
  }
  switch (cmd) {
  case 0: 
  {
  options.debug_level = 5;
  options.facility = 24;
  }
  break;
  case 1: 
  {
  tmp___9 = strcasecmp((char const   *)opt, (char const   *)"debug");
  }
  if (tmp___9) {
    break;
  }
  {
  tmp___10 = parse_debug_level(arg);
  }
  if (! tmp___10) {
    return ("Illegal debug argument");
  }
  return ((char *)((void *)0));
  case 2: 
  {
  log_raw((char const   *)"%-15s = %d", "debug", options.debug_level);
  }
  break;
  case 3: 
  {
  log_raw((char const   *)"%-15s = [facility].level (e.g. daemon.info)", "debug");
  }
  break;
  }
  switch (cmd) {
  case 0: 
  {
  options.egd_sock = (char *)((void *)0);
  }
  break;
  case 1: 
  {
  tmp___11 = strcasecmp((char const   *)opt, (char const   *)"EGD");
  }
  if (tmp___11) {
    break;
  }
  {
  options.egd_sock = stralloc(arg);
  }
  return ((char *)((void *)0));
  case 2: 
  {

  }
  break;
  case 3: 
  {
  log_raw((char const   *)"%-15s = path to Entropy Gathering Daemon socket",
          "EGD");
  }
  break;
  }
  switch (cmd) {
  case 0: 
  {
  options.option.syslog = 0;
  options.option.foreground = 0;
  }
  break;
  case 1: 
  {
  tmp___12 = strcasecmp((char const   *)opt, (char const   *)"foreground");
  }
  if (tmp___12) {
    break;
  }
  {
  tmp___14 = strcasecmp((char const   *)arg, (char const   *)"yes");
  }
  if (tmp___14) {
    {
    tmp___13 = strcasecmp((char const   *)arg, (char const   *)"no");
    }
    if (tmp___13) {
      return ("argument should be either \'yes\' or \'no\'");
    } else {
      {
      options.option.foreground = 0;
      }
    }
  } else {
    {
    options.option.foreground = 1;
    }
  }
  return ((char *)((void *)0));
  case 2: 
  {

  }
  break;
  case 3: 
  {
  log_raw((char const   *)"%-15s = yes|no foreground mode (don\'t fork, log to stderr)",
          "foreground");
  }
  break;
  }
  switch (cmd) {
  case 0: 
  {
  options.key = (char *)((void *)0);
  }
  break;
  case 1: 
  {
  tmp___15 = strcasecmp((char const   *)opt, (char const   *)"key");
  }
  if (tmp___15) {
    break;
  }
  {
  options.key = stralloc(arg);
  }
  return ((char *)((void *)0));
  case 2: 
  {
  log_raw((char const   *)"%-15s = %s", "key", options.cert);
  }
  break;
  case 3: 
  {
  log_raw((char const   *)"%-15s = certificate private key", "key");
  }
  break;
  }
  switch (cmd) {
  case 0: 
  {
  options.ssl_options = 0;
  }
  break;
  case 1: 
  {
  tmp___16 = strcasecmp((char const   *)opt, (char const   *)"options");
  }
  if (tmp___16) {
    break;
  }
  {
  tmp___17 = parse_ssl_option(arg);
  }
  if (! tmp___17) {
    return ("Illegal SSL option");
  }
  return ((char *)((void *)0));
  case 2: 
  {

  }
  break;
  case 3: 
  {
  log_raw((char const   *)"%-15s = SSL option", "options");
  log_raw((char const   *)"%18sset an SSL option", "");
  }
  break;
  }
  switch (cmd) {
  case 0: 
  {
  options.output_file = (char *)((void *)0);
  }
  break;
  case 1: 
  {
  tmp___18 = strcasecmp((char const   *)opt, (char const   *)"output");
  }
  if (tmp___18) {
    break;
  }
  {
  options.output_file = stralloc(arg);
  }
  return ((char *)((void *)0));
  case 2: 
  {

  }
  break;
  case 3: 
  {
  log_raw((char const   *)"%-15s = file to append log messages", "output");
  }
  break;
  }
  switch (cmd) {
  case 0: 
  {
  options.pidfile = "/usr/local/var/run/stunnel.pid";
  }
  break;
  case 1: 
  {
  tmp___19 = strcasecmp((char const   *)opt, (char const   *)"pid");
  }
  if (tmp___19) {
    break;
  }
  if ((*(arg + 0))) {
    {
    options.pidfile = stralloc(arg);
    }
  } else {
    {
    options.pidfile = (char *)((void *)0);
    }
  }
  return ((char *)((void *)0));
  case 2: 
  {
  log_raw((char const   *)"%-15s = %s", "pid", "/usr/local/var/run/stunnel.pid");
  }
  break;
  case 3: 
  {
  log_raw((char const   *)"%-15s = pid file (empty to disable creating)", "pid");
  }
  break;
  }
  switch (cmd) {
  case 0: 
  {
  options.random_bytes = 64;
  }
  break;
  case 1: 
  {
  tmp___20 = strcasecmp((char const   *)opt, (char const   *)"RNDbytes");
  }
  if (tmp___20) {
    break;
  }
  {
  options.random_bytes = atoi((char const   *)arg);
  }
  return ((char *)((void *)0));
  case 2: 
  {
  log_raw((char const   *)"%-15s = %d", "RNDbytes", 64);
  }
  break;
  case 3: 
  {
  log_raw((char const   *)"%-15s = bytes to read from random seed files",
          "RNDbytes");
  }
  break;
  }
  switch (cmd) {
  case 0: 
  {
  options.rand_file = (char *)((void *)0);
  }
  break;
  case 1: 
  {
  tmp___21 = strcasecmp((char const   *)opt, (char const   *)"RNDfile");
  }
  if (tmp___21) {
    break;
  }
  {
  options.rand_file = stralloc(arg);
  }
  return ((char *)((void *)0));
  case 2: 
  {
  log_raw((char const   *)"%-15s = %s", "RNDfile", "/dev/urandom");
  }
  break;
  case 3: 
  {
  log_raw((char const   *)"%-15s = path to file with random seed data",
          "RNDfile");
  }
  break;
  }
  switch (cmd) {
  case 0: 
  {
  options.option.rand_write = 1;
  }
  break;
  case 1: 
  {
  tmp___22 = strcasecmp((char const   *)opt, (char const   *)"RNDoverwrite");
  }
  if (tmp___22) {
    break;
  }
  {
  tmp___24 = strcasecmp((char const   *)arg, (char const   *)"yes");
  }
  if (tmp___24) {
    {
    tmp___23 = strcasecmp((char const   *)arg, (char const   *)"no");
    }
    if (tmp___23) {
      return ("argument should be either \'yes\' or \'no\'");
    } else {
      {
      options.option.rand_write = 0;
      }
    }
  } else {
    {
    options.option.rand_write = 1;
    }
  }
  return ((char *)((void *)0));
  case 2: 
  {
  log_raw((char const   *)"%-15s = yes", "RNDoverwrite");
  }
  break;
  case 3: 
  {
  log_raw((char const   *)"%-15s = yes|no overwrite seed datafiles with new random data",
          "RNDoverwrite");
  }
  break;
  }
  switch (cmd) {
  case 0: 
  {
  local_options.servname = stralloc("stunnel");
  }
  break;
  case 1: 
  {
  tmp___25 = strcasecmp((char const   *)opt, (char const   *)"service");
  }
  if (tmp___25) {
    break;
  }
  {
  local_options.servname = stralloc(arg);
  }
  return ((char *)((void *)0));
  case 2: 
  {

  }
  break;
  case 3: 
  {
  log_raw((char const   *)"%-15s = service name", "service");
  }
  break;
  }
  switch (cmd) {
  case 0: 
  {
  options.session_timeout = 300;
  }
  break;
  case 1: 
  {
  tmp___26 = strcasecmp((char const   *)opt, (char const   *)"session");
  }
  if (tmp___26) {
    break;
  }
  {
  tmp___27 = atoi((char const   *)arg);
  }
  if (tmp___27 > 0) {
    {
    options.session_timeout = (long )atoi((char const   *)arg);
    }
  } else {
    return ("Illegal session timeout");
  }
  return ((char *)((void *)0));
  case 2: 
  {
  log_raw((char const   *)"%-15s = %ld seconds", "session",
          options.session_timeout);
  }
  break;
  case 3: 
  {
  log_raw((char const   *)"%-15s = session cache timeout (in seconds)",
          "session");
  }
  break;
  }
  switch (cmd) {
  case 0: 
  {
  options.setgid_group = (char *)((void *)0);
  }
  break;
  case 1: 
  {
  tmp___28 = strcasecmp((char const   *)opt, (char const   *)"setgid");
  }
  if (tmp___28) {
    break;
  }
  {
  options.setgid_group = stralloc(arg);
  }
  return ((char *)((void *)0));
  case 2: 
  {

  }
  break;
  case 3: 
  {
  log_raw((char const   *)"%-15s = groupname for setgid()", "setgid");
  }
  break;
  }
  switch (cmd) {
  case 0: 
  {
  options.setuid_user = (char *)((void *)0);
  }
  break;
  case 1: 
  {
  tmp___29 = strcasecmp((char const   *)opt, (char const   *)"setuid");
  }
  if (tmp___29) {
    break;
  }
  {
  options.setuid_user = stralloc(arg);
  }
  return ((char *)((void *)0));
  case 2: 
  {

  }
  break;
  case 3: 
  {
  log_raw((char const   *)"%-15s = username for setuid()", "setuid");
  }
  break;
  }
  switch (cmd) {
  case 0: 
  {

  }
  break;
  case 1: 
  {
  tmp___30 = strcasecmp((char const   *)opt, (char const   *)"socket");
  }
  if (tmp___30) {
    break;
  }
  {
  tmp___31 = parse_socket_option(arg);
  }
  if (! tmp___31) {
    return ("Illegal socket option");
  }
  return ((char *)((void *)0));
  case 2: 
  {

  }
  break;
  case 3: 
  {
  log_raw((char const   *)"%-15s = a|l|r:option=value[:value]", "socket");
  log_raw((char const   *)"%18sset an option on accept/local/remote socket", "");
  }
  break;
  }
  switch (cmd) {
  case 0: 
  {
  options.verify_level = -1;
  options.verify_use_only_my = 0;
  }
  break;
  case 1: 
  {
  tmp___32 = strcasecmp((char const   *)opt, (char const   *)"verify");
  }
  if (tmp___32) {
    break;
  }
  {
  options.verify_level = 0;
  tmp___33 = atoi((char const   *)arg);
  }
  switch (tmp___33) {
  case 3: 
  {
  options.verify_use_only_my = 1;
  }
  case 2: 
  {
  options.verify_level = options.verify_level | 2;
  }
  case 1: 
  {
  options.verify_level = options.verify_level | 1;
  }
  case 0: 
  {

  }
  return ((char *)((void *)0));
  default: 
  {

  }
  return ("Bad verify level");
  }
  case 2: 
  {
  log_raw((char const   *)"%-15s = none", "verify");
  }
  break;
  case 3: 
  {
  log_raw((char const   *)"%-15s = level of peer certificate verification",
          "verify");
  log_raw((char const   *)"%18slevel 1 - verify peer certificate if present", "");
  log_raw((char const   *)"%18slevel 2 - require valid peer certificate always",
          "");
  log_raw((char const   *)"%18slevel 3 - verify peer with locally installed certificate",
          "");
  }
  break;
  }
  if (cmd == 1) {
    return (option_not_found);
  }
  return ((char *)((void *)0));
}
}
static char *service_options(CMD cmd , LOCAL_OPTIONS *section , char *opt ,
                             char *arg ) 
{ int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;
  int tmp___5 ;
  int tmp___6 ;
  int tmp___7 ;
  int tmp___8 ;
  int tmp___9 ;
  int tmp___10 ;
  int tmp___11 ;
  int tmp___12 ;
  int tmp___13 ;
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

  {
  if (cmd == 2) {
    {
    log_raw((char const   *)" ");
    log_raw((char const   *)"Service-level options");
    }
  } else {
    if (cmd == 3) {
      {
      log_raw((char const   *)" ");
      log_raw((char const   *)"Service-level options");
      }
    }
  }
  switch (cmd) {
  case 0: 
  {
  section->option.accept = 0;
  }
  break;
  case 1: 
  {
  tmp = strcasecmp((char const   *)opt, (char const   *)"accept");
  }
  if (tmp) {
    break;
  }
  {
  section->option.accept = 1;
  tmp___0 = name2nums(arg, "0.0.0.0", & section->localnames,
                      & section->localport);
  }
  if (! tmp___0) {
    {
    exit(2);
    }
  }
  return ((char *)((void *)0));
  case 2: 
  {

  }
  break;
  case 3: 
  {
  log_raw((char const   *)"%-15s = [host:]port accept connections on specified host:port",
          "accept");
  }
  break;
  }
  switch (cmd) {
  case 0: 
  {
  section->option.remote = 0;
  section->remote_address = (char *)((void *)0);
  section->remotenames = (u32 *)((void *)0);
  section->remoteport = (unsigned short )0;
  }
  break;
  case 1: 
  {
  tmp___1 = strcasecmp((char const   *)opt, (char const   *)"connect");
  }
  if (tmp___1) {
    break;
  }
  {
  section->option.remote = 1;
  section->remote_address = stralloc(arg);
  }
  if (! section->option.delayed_lookup) {
    {
    tmp___2 = name2nums(arg, "127.0.0.1", & section->remotenames,
                        & section->remoteport);
    }
    if (! tmp___2) {
      {
      log_raw((char const   *)"Cannot resolve \'%s\' - delaying DNS lookup", arg);
      section->option.delayed_lookup = 1;
      }
    }
  }
  return ((char *)((void *)0));
  case 2: 
  {

  }
  break;
  case 3: 
  {
  log_raw((char const   *)"%-15s = [host:]port connect remote host:port",
          "connect");
  }
  break;
  }
  switch (cmd) {
  case 0: 
  {
  section->option.delayed_lookup = 0;
  }
  break;
  case 1: 
  {
  tmp___3 = strcasecmp((char const   *)opt, (char const   *)"delay");
  }
  if (tmp___3) {
    break;
  }
  {
  tmp___5 = strcasecmp((char const   *)arg, (char const   *)"yes");
  }
  if (tmp___5) {
    {
    tmp___4 = strcasecmp((char const   *)arg, (char const   *)"no");
    }
    if (tmp___4) {
      return ("argument should be either \'yes\' or \'no\'");
    } else {
      {
      section->option.delayed_lookup = 0;
      }
    }
  } else {
    {
    section->option.delayed_lookup = 1;
    }
  }
  return ((char *)((void *)0));
  case 2: 
  {

  }
  break;
  case 3: 
  {
  log_raw((char const   *)"%-15s = yes|no delay DNS lookup for \'connect\' option",
          "delay");
  }
  break;
  }
  switch (cmd) {
  case 0: 
  {
  section->option.program = 0;
  section->execname = (char *)((void *)0);
  }
  break;
  case 1: 
  {
  tmp___6 = strcasecmp((char const   *)opt, (char const   *)"exec");
  }
  if (tmp___6) {
    break;
  }
  {
  section->option.program = 1;
  section->execname = stralloc(arg);
  }
  return ((char *)((void *)0));
  case 2: 
  {

  }
  break;
  case 3: 
  {
  log_raw((char const   *)"%-15s = file execute local inetd-type program",
          "exec");
  }
  break;
  }
  switch (cmd) {
  case 0: 
  {
  section->execargs = (char **)((void *)0);
  }
  break;
  case 1: 
  {
  tmp___7 = strcasecmp((char const   *)opt, (char const   *)"execargs");
  }
  if (tmp___7) {
    break;
  }
  {
  section->execargs = argalloc(arg);
  }
  return ((char *)((void *)0));
  case 2: 
  {

  }
  break;
  case 3: 
  {
  log_raw((char const   *)"%-15s = arguments for \'exec\' (including $0)",
          "execargs");
  }
  break;
  }
  switch (cmd) {
  case 0: 
  {
  section->username = (char *)((void *)0);
  }
  break;
  case 1: 
  {
  tmp___8 = strcasecmp((char const   *)opt, (char const   *)"ident");
  }
  if (tmp___8) {
    break;
  }
  {
  section->username = stralloc(arg);
  }
  return ((char *)((void *)0));
  case 2: 
  {

  }
  break;
  case 3: 
  {
  log_raw((char const   *)"%-15s = username for IDENT (RFC 1413) checking",
          "ident");
  }
  break;
  }
  switch (cmd) {
  case 0: 
  {
  section->local_ip = (u32 *)((void *)0);
  }
  break;
  case 1: 
  {
  tmp___9 = strcasecmp((char const   *)opt, (char const   *)"local");
  }
  if (tmp___9) {
    break;
  }
  {
  tmp___10 = host2nums(arg, & section->local_ip);
  }
  if (! tmp___10) {
    {
    exit(2);
    }
  }
  return ((char *)((void *)0));
  case 2: 
  {

  }
  break;
  case 3: 
  {
  log_raw((char const   *)"%-15s = IP address to be used as source for remote connections",
          "local");
  }
  break;
  }
  switch (cmd) {
  case 0: 
  {
  section->protocol = (char *)((void *)0);
  }
  break;
  case 1: 
  {
  tmp___11 = strcasecmp((char const   *)opt, (char const   *)"protocol");
  }
  if (tmp___11) {
    break;
  }
  {
  section->protocol = stralloc(arg);
  }
  return ((char *)((void *)0));
  case 2: 
  {

  }
  break;
  case 3: 
  {
  log_raw((char const   *)"%-15s = protocol to negotiate before SSL initialization",
          "protocol");
  log_raw((char const   *)"%18scurrently supported: cifs, nntp, pop3, smtp", "");
  }
  break;
  }
  switch (cmd) {
  case 0: 
  {
  section->option.pty = 0;
  }
  break;
  case 1: 
  {
  tmp___12 = strcasecmp((char const   *)opt, (char const   *)"pty");
  }
  if (tmp___12) {
    break;
  }
  {
  tmp___14 = strcasecmp((char const   *)arg, (char const   *)"yes");
  }
  if (tmp___14) {
    {
    tmp___13 = strcasecmp((char const   *)arg, (char const   *)"no");
    }
    if (tmp___13) {
      return ("argument should be either \'yes\' or \'no\'");
    } else {
      {
      section->option.pty = 0;
      }
    }
  } else {
    {
    section->option.pty = 1;
    }
  }
  return ((char *)((void *)0));
  case 2: 
  {

  }
  break;
  case 3: 
  {
  log_raw((char const   *)"%-15s = yes|no allocate pseudo terminal for \'exec\' option",
          "pty");
  }
  break;
  }
  switch (cmd) {
  case 0: 
  {
  section->timeout_busy = 300;
  }
  break;
  case 1: 
  {
  tmp___15 = strcasecmp((char const   *)opt, (char const   *)"TIMEOUTbusy");
  }
  if (tmp___15) {
    break;
  }
  {
  tmp___16 = atoi((char const   *)arg);
  }
  if (tmp___16 > 0) {
    {
    section->timeout_busy = atoi((char const   *)arg);
    }
  } else {
    return ("Illegal busy timeout");
  }
  return ((char *)((void *)0));
  case 2: 
  {
  log_raw((char const   *)"%-15s = %d seconds", "TIMEOUTbusy",
          section->timeout_busy);
  }
  break;
  case 3: 
  {
  log_raw((char const   *)"%-15s = seconds to wait for expected data",
          "TIMEOUTbusy");
  }
  break;
  }
  switch (cmd) {
  case 0: 
  {
  section->timeout_close = 60;
  }
  break;
  case 1: 
  {
  tmp___17 = strcasecmp((char const   *)opt, (char const   *)"TIMEOUTclose");
  }
  if (tmp___17) {
    break;
  }
  {
  tmp___18 = atoi((char const   *)arg);
  }
  if (tmp___18 > 0) {
    {
    section->timeout_close = atoi((char const   *)arg);
    }
  } else {
    {
    tmp___19 = strcmp((char const   *)arg, (char const   *)"0");
    }
    if (tmp___19) {
      return ("Illegal close timeout");
    } else {
      {
      section->timeout_close = atoi((char const   *)arg);
      }
    }
  }
  return ((char *)((void *)0));
  case 2: 
  {
  log_raw((char const   *)"%-15s = %d seconds", "TIMEOUTclose",
          section->timeout_close);
  }
  break;
  case 3: 
  {
  log_raw((char const   *)"%-15s = seconds to wait for close_notify (set to 0 for buggy MSIE)",
          "TIMEOUTclose");
  }
  break;
  }
  switch (cmd) {
  case 0: 
  {
  section->timeout_idle = 43200;
  }
  break;
  case 1: 
  {
  tmp___20 = strcasecmp((char const   *)opt, (char const   *)"TIMEOUTidle");
  }
  if (tmp___20) {
    break;
  }
  {
  tmp___21 = atoi((char const   *)arg);
  }
  if (tmp___21 > 0) {
    {
    section->timeout_idle = atoi((char const   *)arg);
    }
  } else {
    return ("Illegal idle timeout");
  }
  return ((char *)((void *)0));
  case 2: 
  {
  log_raw((char const   *)"%-15s = %d seconds", "TIMEOUTidle",
          section->timeout_idle);
  }
  break;
  case 3: 
  {
  log_raw((char const   *)"%-15s = seconds to keep idle connection",
          "TIMEOUTidle");
  }
  break;
  }
  switch (cmd) {
  case 0: 
  {
  section->option.transparent = 0;
  }
  break;
  case 1: 
  {
  tmp___22 = strcasecmp((char const   *)opt, (char const   *)"transparent");
  }
  if (tmp___22) {
    break;
  }
  {
  tmp___24 = strcasecmp((char const   *)arg, (char const   *)"yes");
  }
  if (tmp___24) {
    {
    tmp___23 = strcasecmp((char const   *)arg, (char const   *)"no");
    }
    if (tmp___23) {
      return ("argument should be either \'yes\' or \'no\'");
    } else {
      {
      section->option.transparent = 0;
      }
    }
  } else {
    {
    section->option.transparent = 1;
    }
  }
  return ((char *)((void *)0));
  case 2: 
  {

  }
  break;
  case 3: 
  {
  log_raw((char const   *)"%-15s = yes|no transparent proxy mode", "transparent");
  }
  break;
  }
  if (cmd == 1) {
    return (option_not_found);
  }
  return ((char *)((void *)0));
}
}
static void syntax(char *confname ) 
{ 

  {
  {
  log_raw((char const   *)" ");
  log_raw((char const   *)"Syntax:");
  log_raw((char const   *)"stunnel [filename] | -fd [n] | -help | -version | -sockets");
  log_raw((char const   *)"    filename    - use specified config file instead of %s",
          confname);
  log_raw((char const   *)"    -fd n       - read the config file from specified file descriptor");
  log_raw((char const   *)"    -help       - get config file help");
  log_raw((char const   *)"    -version    - display version and defaults");
  log_raw((char const   *)"    -sockets    - display default socket options");
  exit(1);
  }
  return;
}
}
void parse_config(char *name , char *parameter ) 
{ char *default_config_file ;
  FILE *fp ;
  char line[1024] ;
  char *arg ;
  char *opt ;
  char *errstr ;
  char *filename ;
  int line_number ;
  int i ;
  LOCAL_OPTIONS *section ;
  LOCAL_OPTIONS *new_section ;
  int tmp ;
  char *tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;
  size_t tmp___5 ;
  int tmp___6 ;
  size_t tmp___7 ;
  size_t tmp___8 ;
  char *tmp___9 ;
  size_t tmp___10 ;
  int tmp___11 ;
  int tmp___12 ;
  char *tmp___13 ;

  {
  {
  default_config_file = "/usr/local/etc/stunnel/stunnel.conf";
  memset((void *)(& options), 0, sizeof(GLOBAL_OPTIONS ));
  memset((void *)(& local_options), 0, sizeof(LOCAL_OPTIONS ));
  local_options.next = (struct local_options *)((void *)0);
  section = & local_options;
  global_options(0, (char *)((void *)0), (char *)((void *)0));
  service_options(0, section, (char *)((void *)0), (char *)((void *)0));
  }
  if (! name) {
    {
    name = default_config_file;
    }
  }
  {
  tmp = strcasecmp((char const   *)name, (char const   *)"-help");
  }
  if (! tmp) {
    {
    global_options(3, (char *)((void *)0), (char *)((void *)0));
    service_options(3, section, (char *)((void *)0), (char *)((void *)0));
    exit(1);
    }
  }
  {
  tmp___1 = strcasecmp((char const   *)name, (char const   *)"-version");
  }
  if (! tmp___1) {
    {
    tmp___0 = stunnel_info();
    log_raw((char const   *)"%s", tmp___0);
    log_raw((char const   *)" ");
    global_options(2, (char *)((void *)0), (char *)((void *)0));
    service_options(2, section, (char *)((void *)0), (char *)((void *)0));
    exit(1);
    }
  }
  {
  tmp___2 = strcasecmp((char const   *)name, (char const   *)"-sockets");
  }
  if (! tmp___2) {
    {
    print_socket_options();
    exit(1);
    }
  }
  {
  tmp___3 = strcasecmp((char const   *)name, (char const   *)"-fd");
  }
  if (tmp___3) {
    {

    {
    fp->__BLAST_FLAG = 1;
    {

    }
    }
    fp = fopen((char const   *)((char const   *)name),
               (char const   *)((char const   *)"r"));
    }
    if (! fp) {
      {
      ioerror(name);
      syntax(default_config_file);
      }
    }
    {
    filename = name;
    }
  } else {
    if (! parameter) {
      {
      log_raw((char const   *)"No file descriptor specified");
      syntax(default_config_file);
      }
    }
    {
    arg = parameter;
    i = 0;
    }
    while ((*arg)) {
      if ((int )(*arg) < 48) {
        {
        log_raw((char const   *)"Invalid file descriptor %s", parameter);
        syntax(default_config_file);
        }
      } else {
        if ((int )(*arg) > 57) {
          {
          log_raw((char const   *)"Invalid file descriptor %s", parameter);
          syntax(default_config_file);
          }
        }
      }
      {
      i = (10 * i + (int )(*arg)) - 48;
      arg ++;
      }
    }
    {

    {
    fp->__BLAST_FLAG = 1;
    {

    }
    }
    fp = fdopen(i, (char const   *)"r");
    }
    if (! fp) {
      {
      log_raw((char const   *)"Invalid file descriptor %s", parameter);
      syntax(default_config_file);
      }
    }
    {
    filename = "descriptor";
    }
  }
  {
  line_number = 0;
  }
  while (1) {
    {

    {
    if (! (fp->__BLAST_FLAG == 1)) {
      __error__();
    }
    {

    }
    }
    tmp___13 = fgets((char *)(line), 1024,
                     (FILE *)fp);
    }
    if (! tmp___13) {
      break;
    }
    {
    line_number ++;
    opt = line;
    }
    while (1) {
      {
      tmp___4 = _get__ctype_b((int )(*opt));
      }
      if (! (tmp___4 & 8192)) {
        break;
      }
      {
      opt ++;
      }
    }
    {
    tmp___5 = strlen((char const   *)opt);
    i = (int )(tmp___5 - 1);
    }
    while (1) {
      if (i >= 0) {
        {
        tmp___6 = _get__ctype_b((int )(*(opt + i)));
        }
        if (! (tmp___6 & 8192)) {
          break;
        }
      } else {
        break;
      }
      {
      (*(opt + i)) = '\0';
      i --;
      }
    }
    if ((int )(*(opt + 0)) == 0) {
      continue;
    } else {
      if ((int )(*(opt + 0)) == 35) {
        continue;
      }
    }
    if ((int )(*(opt + 0)) == 91) {
      {
      tmp___8 = strlen((char const   *)opt);
      }
      if ((int )(*(opt + (tmp___8 - 1))) == 93) {
        {
        errstr = section_validate(section);
        }
        if (errstr) {
          {
          log_raw((char const   *)"file %s line %d: %s", filename, line_number,
                  errstr);
          exit(1);
          }
        }
        {
        opt ++;
        tmp___7 = strlen((char const   *)opt);
        (*(opt + (tmp___7 - 1))) = '\0';
        new_section = (LOCAL_OPTIONS *)calloc(1, sizeof(LOCAL_OPTIONS ));
        }
        if (! new_section) {
          {
          log_raw((char const   *)"Fatal memory allocation error");
          exit(2);
          }
        }
        {
        memcpy((void *)((void *)new_section),
               (void const   *)((void const   *)(& local_options)),
               sizeof(LOCAL_OPTIONS ));
        new_section->servname = stralloc(opt);
        new_section->next = (struct local_options *)((void *)0);
        section->next = new_section;
        section = new_section;
        }
        continue;
      }
    }
    {
    arg = strchr((char const   *)(line), (int )'=');
    }
    if (! arg) {
      {
      log_raw((char const   *)"file %s line %d: No \'=\' found", filename,
              line_number);
      exit(1);
      }
    }
    {
    tmp___9 = arg;
    arg ++;
    (*tmp___9) = '\0';
    tmp___10 = strlen((char const   *)opt);
    i = (int )(tmp___10 - 1);
    }
    while (1) {
      if (i >= 0) {
        {
        tmp___11 = _get__ctype_b((int )(*(opt + i)));
        }
        if (! (tmp___11 & 8192)) {
          break;
        }
      } else {
        break;
      }
      {
      (*(opt + i)) = '\0';
      i --;
      }
    }
    while (1) {
      {
      tmp___12 = _get__ctype_b((int )(*arg));
      }
      if (! (tmp___12 & 8192)) {
        break;
      }
      {
      arg ++;
      }
    }
    {
    errstr = service_options(1, section, opt, arg);
    }
    if ((unsigned int )section == (unsigned int )(& local_options)) {
      if ((unsigned int )errstr == (unsigned int )option_not_found) {
        {
        errstr = global_options(1, opt, arg);
        }
      }
    }
    if (errstr) {
      {
      log_raw((char const   *)"file %s line %d: %s", filename, line_number,
              errstr);
      exit(1);
      }
    }
  }
  {
  errstr = section_validate(section);
  }
  if (errstr) {
    {
    log_raw((char const   *)"file %s line %d: %s", filename, line_number, errstr);
    exit(1);
    }
  }
  {

  {
  if (fp->__BLAST_FLAG == 1) {
    fp->__BLAST_FLAG = 0;
  } else {
    __error__();
  }
  {

  }
  }
  fclose(fp);
  }
  if (! local_options.next) {
    if (section->option.accept) {
      {
      log_raw((char const   *)"accept option is not allowed in inetd mode");
      log_raw((char const   *)"remove accept option or define a [section]");
      exit(1);
      }
    }
  }
  if (! options.option.client) {
    {
    options.option.cert = 1;
    }
  }
  if (! options.option.foreground) {
    {
    options.option.syslog = 1;
    }
  }
  return;
}
}
static char *section_validate(LOCAL_OPTIONS *section ) 
{ 

  {
  if ((unsigned int )section == (unsigned int )(& local_options)) {
    return ((char *)((void *)0));
  }
  if ((section->option.accept + section->option.program) +
      section->option.remote != 2) {
    return ("Each service section must define exactly two endpoints");
  }
  return ((char *)((void *)0));
}
}
static char *stralloc(char *str ) 
{ char *retval___0 ;
  size_t tmp ;

  {
  {
  tmp = strlen((char const   *)str);
  retval___0 = (char *)calloc(tmp + 1, 1);
  }
  if (! retval___0) {
    {
    log_raw((char const   *)"Fatal memory allocation error");
    exit(2);
    }
  }
  {
  strcpy((char *)retval___0,
         (char const   *)((char const   *)str));
  }
  return (retval___0);
}
}
static char **argalloc(char *str ) 
{ int max_arg ;
  int i ;
  char *ptr ;
  char **retval___0 ;
  size_t tmp ;
  int tmp___0 ;
  int tmp___1 ;
  char *tmp___2 ;
  int tmp___3 ;

  {
  {
  tmp = strlen((char const   *)str);
  max_arg = (int )(tmp / 2 + 1);
  ptr = stralloc(str);
  retval___0 = (char **)calloc((unsigned int )(max_arg + 1), sizeof(char *));
  }
  if (! retval___0) {
    {
    log_raw((char const   *)"Fatal memory allocation error");
    exit(2);
    }
  }
  {
  i = 0;
  }
  while (1) {
    if ((*ptr)) {
      if (! (i < max_arg)) {
        break;
      }
    } else {
      break;
    }
    {
    tmp___0 = i;
    i ++;
    (*(retval___0 + tmp___0)) = ptr;
    }
    while (1) {
      if ((*ptr)) {
        {
        tmp___1 = _get__ctype_b((int )(*ptr));
        }
        if (tmp___1 & 8192) {
          break;
        }
      } else {
        break;
      }
      {
      ptr ++;
      }
    }
    while (1) {
      if ((*ptr)) {
        {
        tmp___3 = _get__ctype_b((int )(*ptr));
        }
        if (! (tmp___3 & 8192)) {
          break;
        }
      } else {
        break;
      }
      {
      tmp___2 = ptr;
      ptr ++;
      (*tmp___2) = '\0';
      }
    }
  }
  {
  (*(retval___0 + i)) = (char *)((void *)0);
  }
  return (retval___0);
}
}
int name2nums(char *name , char *default_host , u32 **names , u_short *port ) 
{ char tmp[1024] ;
  char *host_str ;
  char *port_str ;
  struct servent *p ;
  char *tmp___0 ;
  register unsigned short __v ;
  register unsigned short __x ;
  u_short tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;

  {
  {
  tmp[1023] = '\0';
  strncpy((char *)(tmp),
          (char const   *)((char const   *)name), 1023);
  port_str = strrchr((char const   *)(tmp), (int )':');
  }
  if (port_str) {
    {
    host_str = tmp;
    tmp___0 = port_str;
    port_str ++;
    (*tmp___0) = '\0';
    }
  } else {
    {
    host_str = default_host;
    port_str = tmp;
    }
  }
  {
  tmp___1 = (u_short )atoi((char const   *)port_str);
  __x = tmp___1;
  tmp___2 = ((int )__x);
  }
  if (tmp___2) {
    {
    __v = (unsigned short )((((int )__x >> 8) & 255) | (((int )__x & 255) << 8));
    }
  } else {
    {
    __asm__  ("rorw $8, %w0": "=r" (__v): "0" (__x): "cc");
    }
  }
  {
  (*port) = __v;
  }
  if (! (*port)) {
    {
    p = getservbyname((char const   *)port_str, (char const   *)"tcp");
    }
    if (! p) {
      {
      log(3, (char const   *)"Invalid port: %s", port_str);
      }
      return (0);
    }
    {
    (*port) = (unsigned short )p->s_port;
    }
  }
  {
  tmp___3 = host2nums(host_str, names);
  }
  return (tmp___3);
}
}
static int host2nums(char *hostname , u32 **hostlist ) 
{ struct hostent *h ;
  u32 ip ;
  int results ;
  int i ;
  char **tab ;

  {
  {
  ip = inet_addr((char const   *)hostname);
  }
  if (ip + 1) {
    {
    (*hostlist) = (u32 *)calloc(2, sizeof(u32 ));
    }
    if (! (*hostlist)) {
      {
      log(3, (char const   *)"Memory allocation error");
      }
      return (0);
    }
    {
    (*((*hostlist) + 0)) = ip;
    (*((*hostlist) + 1)) = 4294967295;
    }
    return (1);
  }
  {
  h = gethostbyname((char const   *)hostname);
  }
  if (! h) {
    {
    log(3, (char const   *)"Failed to resolve hostname \'%s\'", hostname);
    }
    return (0);
  }
  {
  results = 0;
  tab = h->h_addr_list;
  }
  while ((*tab)) {
    {
    results ++;
    tab ++;
    }
  }
  {
  (*hostlist) = (u32 *)calloc((unsigned int )(results + 1), sizeof(u32 ));
  }
  if (! (*hostlist)) {
    {
    log(3, (char const   *)"Memory allocation error");
    }
    return (0);
  }
  {
  i = 0;
  }
  while (i < results) {
    {
    (*((*hostlist) + i)) = (*((u32 *)(*(h->h_addr_list + i))));
    i ++;
    }
  }
  {
  (*((*hostlist) + results)) = 4294967295;
  endhostent();
  }
  return (results);
}
}
static int parse_debug_level(char *arg ) 
{ char arg_copy[1024] ;
  char *string ;
  facilitylevel *fl ;
  facilitylevel facilities[21] ;
  facilitylevel levels[9] ;
  int tmp ;
  char *tmp___0 ;
  size_t tmp___1 ;
  int tmp___2 ;

  {
  {
  facilities[0].name = "auth";
  facilities[0].value = 32;
  facilities[1].name = "cron";
  facilities[1].value = 72;
  facilities[2].name = "daemon";
  facilities[2].value = 24;
  facilities[3].name = "kern";
  facilities[3].value = 0;
  facilities[4].name = "lpr";
  facilities[4].value = 48;
  facilities[5].name = "mail";
  facilities[5].value = 16;
  facilities[6].name = "news";
  facilities[6].value = 56;
  facilities[7].name = "syslog";
  facilities[7].value = 40;
  facilities[8].name = "user";
  facilities[8].value = 8;
  facilities[9].name = "uucp";
  facilities[9].value = 64;
  facilities[10].name = "local0";
  facilities[10].value = 128;
  facilities[11].name = "local1";
  facilities[11].value = 136;
  facilities[12].name = "local2";
  facilities[12].value = 144;
  facilities[13].name = "local3";
  facilities[13].value = 152;
  facilities[14].name = "local4";
  facilities[14].value = 160;
  facilities[15].name = "local5";
  facilities[15].value = 168;
  facilities[16].name = "local6";
  facilities[16].value = 176;
  facilities[17].name = "local7";
  facilities[17].value = 184;
  facilities[18].name = "authpriv";
  facilities[18].value = 80;
  facilities[19].name = "ftp";
  facilities[19].value = 88;
  facilities[20].name = (char *)((void *)0);
  facilities[20].value = 0;
  levels[0].name = "emerg";
  levels[0].value = 0;
  levels[1].name = "alert";
  levels[1].value = 1;
  levels[2].name = "crit";
  levels[2].value = 2;
  levels[3].name = "err";
  levels[3].value = 3;
  levels[4].name = "warning";
  levels[4].value = 4;
  levels[5].name = "notice";
  levels[5].value = 5;
  levels[6].name = "info";
  levels[6].value = 6;
  levels[7].name = "debug";
  levels[7].value = 7;
  levels[8].name = (char *)((void *)0);
  levels[8].value = -1;
  arg_copy[1023] = '\0';
  strncpy((char *)(arg_copy),
          (char const   *)((char const   *)arg), 1023);
  string = arg_copy;
  tmp___0 = strchr((char const   *)string, (int )'.');
  }
  if (tmp___0) {
    {
    options.facility = -1;
    string = strtok((char *)(arg_copy),
                    (char const   *)((char const   *)"."));
    fl = facilities;
    }
    while (fl->name) {
      {
      tmp = strcasecmp((char const   *)fl->name, (char const   *)string);
      }
      if (! tmp) {
        {
        options.facility = fl->value;
        }
        break;
      }
      {
      fl ++;
      }
    }
    if (options.facility == -1) {
      return (0);
    }
    {
    string = strtok((char *)((char *)((void *)0)),
                    (char const   *)((char const   *)"."));
    }
  }
  if (string) {
    {
    tmp___1 = strlen((char const   *)string);
    }
    if (tmp___1 == 1) {
      if ((int )(*string) >= 48) {
        if ((int )(*string) <= 55) {
          {
          options.debug_level = (int )(*string) - 48;
          }
          return (1);
        }
      }
    }
  }
  {
  options.debug_level = 8;
  fl = levels;
  }
  while (fl->name) {
    {
    tmp___2 = strcasecmp((char const   *)fl->name, (char const   *)string);
    }
    if (! tmp___2) {
      {
      options.debug_level = fl->value;
      }
      break;
    }
    {
    fl ++;
    }
  }
  if (options.debug_level == 8) {
    return (0);
  }
  return (1);
}
}
static int parse_ssl_option(char *arg ) 
{ struct __anonstruct_ssl_opts_76 ssl_opts[22] ;
  struct __anonstruct_ssl_opts_76 *option ;
  int tmp ;

  {
  {
  ssl_opts[0].name = "MICROSOFT_SESS_ID_BUG";
  ssl_opts[0].value = 1;
  ssl_opts[1].name = "NETSCAPE_CHALLENGE_BUG";
  ssl_opts[1].value = 2;
  ssl_opts[2].name = "NETSCAPE_REUSE_CIPHER_CHANGE_BUG";
  ssl_opts[2].value = 8;
  ssl_opts[3].name = "SSLREF2_REUSE_CERT_TYPE_BUG";
  ssl_opts[3].value = 16;
  ssl_opts[4].name = "MICROSOFT_BIG_SSLV3_BUFFER";
  ssl_opts[4].value = 32;
  ssl_opts[5].name = "MSIE_SSLV2_RSA_PADDING";
  ssl_opts[5].value = 64;
  ssl_opts[6].name = "SSLEAY_080_CLIENT_DH_BUG";
  ssl_opts[6].value = 128;
  ssl_opts[7].name = "TLS_D5_BUG";
  ssl_opts[7].value = 256;
  ssl_opts[8].name = "TLS_BLOCK_PADDING_BUG";
  ssl_opts[8].value = 512;
  ssl_opts[9].name = "TLS_ROLLBACK_BUG";
  ssl_opts[9].value = 8388608;
  ssl_opts[10].name = "DONT_INSERT_EMPTY_FRAGMENTS";
  ssl_opts[10].value = 2048;
  ssl_opts[11].name = "ALL";
  ssl_opts[11].value = 4095;
  ssl_opts[12].name = "SINGLE_DH_USE";
  ssl_opts[12].value = 1048576;
  ssl_opts[13].name = "EPHEMERAL_RSA";
  ssl_opts[13].value = 2097152;
  ssl_opts[14].name = "NO_SSLv2";
  ssl_opts[14].value = 16777216;
  ssl_opts[15].name = "NO_SSLv3";
  ssl_opts[15].value = 33554432;
  ssl_opts[16].name = "NO_TLSv1";
  ssl_opts[16].value = 67108864;
  ssl_opts[17].name = "PKCS1_CHECK_1";
  ssl_opts[17].value = 134217728;
  ssl_opts[18].name = "PKCS1_CHECK_2";
  ssl_opts[18].value = 268435456;
  ssl_opts[19].name = "NETSCAPE_CA_DN_BUG";
  ssl_opts[19].value = 536870912;
  ssl_opts[20].name = "NETSCAPE_DEMO_CIPHER_CHANGE_BUG";
  ssl_opts[20].value = 1073741824;
  ssl_opts[21].name = (char *)((void *)0);
  ssl_opts[21].value = 0;
  option = ssl_opts;
  }
  while (option->name) {
    {
    tmp = strcasecmp((char const   *)option->name, (char const   *)arg);
    }
    if (! tmp) {
      {
      options.ssl_options = options.ssl_options | option->value;
      }
      return (1);
    }
    {
    option ++;
    }
  }
  return (0);
}
}
static int on   ;
SOCK_OPT sock_opts[17];
static int print_socket_options(void) 
{ int fd ;
  int len ;
  SOCK_OPT *ptr ;
  OPT_UNION val ;
  char line[1024] ;
  int *tmp ;
  size_t tmp___0 ;
  int tmp___1 ;

  {
  {
  fd = socket(2, 1, 0);
  log_raw((char const   *)"Socket option defaults:");
  log_raw((char const   *)"    %-16s%-10s%-10s%-10s%-10s", "Option", "Accept",
          "Local", "Remote", "OS default");
  ptr = sock_opts;
  }
  while (ptr->opt_str) {
    {
    sprintf((char *)(line),
            (char const   *)((char const   *)"    %-16s"),
            ptr->opt_str);
    print_option(line, ptr->opt_type, ptr->opt_val[0]);
    print_option(line, ptr->opt_type, ptr->opt_val[1]);
    print_option(line, ptr->opt_type, ptr->opt_val[2]);
    len = (int )sizeof(val);
    tmp___1 = getsockopt(fd, ptr->opt_level, ptr->opt_name,
                         (void *)((void *)(& val)),
                         (socklen_t *)((socklen_t *)(& len)));
    }
    if (tmp___1) {
      {
      tmp = __errno_location();
      }
      if ((*tmp) != 92) {
        {
        log_raw((char const   *)"%s", line);
        sockerror("getsockopt");
        }
        return (0);
      }
      {
      line[1023] = '\0';
      tmp___0 = strlen((char const   *)(line));
      strncat((char *)(line),
              (char const   *)((char const   *)"    --    "),
              (1024 - tmp___0) - 1);
      }
    } else {
      {
      print_option(line, ptr->opt_type, & val);
      }
    }
    {
    log_raw((char const   *)"%s", line);
    ptr ++;
    }
  }
  return (1);
}
}
static void print_option(char *line , int type , OPT_UNION *val ) 
{ char text[1024] ;
  size_t tmp ;

  {
  if (val) {
    switch (type) {
    case 1: 
    {

    }
    case 2: 
    {
    sprintf((char *)(text),
            (char const   *)((char const   *)"%10d"),
            val->i_val);
    }
    break;
    case 3: 
    {
    sprintf((char *)(text),
            (char const   *)((char const   *)"%d:%-8d"),
            val->linger_val.l_onoff, val->linger_val.l_linger);
    }
    break;
    case 4: 
    {
    sprintf((char *)(text),
            (char const   *)((char const   *)"%6d:%-3d"),
            (int )val->timeval_val.tv_sec, (int )val->timeval_val.tv_usec);
    }
    break;
    case 5: 
    {
    sprintf((char *)(text),
            (char const   *)((char const   *)"%10s"),
            val->c_val);
    }
    break;
    default: 
    {
    text[1023] = '\0';
    strncpy((char *)(text),
            (char const   *)((char const   *)"  Ooops?  "),
            1023);
    }
    }
  } else {
    {
    text[1023] = '\0';
    strncpy((char *)(text),
            (char const   *)((char const   *)"    --    "),
            1023);
    }
  }
  {
  (*(line + 1023)) = '\0';
  tmp = strlen((char const   *)line);
  strncat((char *)line,
          (char const   *)((char const   *)(text)),
          (1024 - tmp) - 1);
  }
  return;
}
}
static int parse_socket_option(char *arg ) 
{ int socket_type ;
  char *opt_val_str ;
  char *opt_val2_str ;
  SOCK_OPT *ptr ;
  char *tmp ;
  int tmp___0 ;
  char *tmp___1 ;
  char *tmp___2 ;
  size_t tmp___3 ;

  {
  if ((int )(*(arg + 1)) != 58) {
    return (0);
  }
  switch ((int )(*(arg + 0))) {
  case 97: 
  {
  socket_type = 0;
  }
  break;
  case 108: 
  {
  socket_type = 1;
  }
  break;
  case 114: 
  {
  socket_type = 2;
  }
  break;
  default: 
  {

  }
  return (0);
  }
  {
  arg += 2;
  opt_val_str = strchr((char const   *)arg, (int )'=');
  }
  if (! opt_val_str) {
    return (0);
  }
  {
  tmp = opt_val_str;
  opt_val_str ++;
  (*tmp) = '\0';
  ptr = sock_opts;
  }
  while (1) {
    if (! ptr->opt_str) {
      return (0);
    }
    {
    tmp___0 = strcmp((char const   *)arg, (char const   *)ptr->opt_str);
    }
    if (! tmp___0) {
      break;
    }
    {
    ptr ++;
    }
  }
  {
  ptr->opt_val[socket_type] = (OPT_UNION *)calloc(1, sizeof(OPT_UNION ));
  }
  switch (ptr->opt_type) {
  case 1: 
  {

  }
  case 2: 
  {
  (ptr->opt_val[socket_type])->i_val = atoi((char const   *)opt_val_str);
  }
  return (1);
  case 3: 
  {
  opt_val2_str = strchr((char const   *)opt_val_str, (int )':');
  }
  if (opt_val2_str) {
    {
    tmp___1 = opt_val2_str;
    opt_val2_str ++;
    (*tmp___1) = '\0';
    (ptr->opt_val[socket_type])->linger_val.l_linger = atoi((char const   *)opt_val2_str);
    }
  } else {
    {
    (ptr->opt_val[socket_type])->linger_val.l_linger = 0;
    }
  }
  {
  (ptr->opt_val[socket_type])->linger_val.l_onoff = atoi((char const   *)opt_val_str);
  }
  return (1);
  case 4: 
  {
  opt_val2_str = strchr((char const   *)opt_val_str, (int )':');
  }
  if (opt_val2_str) {
    {
    tmp___2 = opt_val2_str;
    opt_val2_str ++;
    (*tmp___2) = '\0';
    (ptr->opt_val[socket_type])->timeval_val.tv_usec = (__suseconds_t )atoi((char const   *)opt_val2_str);
    }
  } else {
    {
    (ptr->opt_val[socket_type])->timeval_val.tv_usec = 0;
    }
  }
  {
  (ptr->opt_val[socket_type])->timeval_val.tv_sec = (__time_t )atoi((char const   *)opt_val_str);
  }
  return (1);
  case 5: 
  {
  tmp___3 = strlen((char const   *)opt_val_str);
  }
  if (tmp___3 + 1 > sizeof(OPT_UNION )) {
    return (0);
  }
  {
  strcpy((char *)((ptr->opt_val[socket_type])->c_val),
         (char const   *)((char const   *)opt_val_str));
  }
  return (1);
  default: 
  {

  }
  }
  return (0);
}
}
static int cifs_client(CLI *c ) ;
static int cifs_server(CLI *c ) ;
static int smtp_client(CLI *c ) ;
static int smtp_server(CLI *c ) ;
static int pop3_client(CLI *c ) ;
static int pop3_server(CLI *c ) ;
static int nntp_client(CLI *c ) ;
static int nntp_server(CLI *c ) ;
static int RFC2487(int fd ) ;
int negotiate(CLI *c ) 
{ int retval___0 ;
  char const   *tmp ;
  char const   *tmp___8 ;
  int tmp___9 ;
  int tmp___10 ;
  int tmp___11 ;
  int tmp___12 ;

  {
  {
  retval___0 = -1;
  }
  if (! (c->opt)->protocol) {
    return (0);
  }
  if (options.option.client) {
    {
    tmp = (char const   *)"client";
    }
  } else {
    {
    tmp = (char const   *)"server";
    }
  }
  {
  log(5, (char const   *)"Negotiations for %s (%s side) started",
      (c->opt)->protocol, tmp);
  tmp___12 = strcmp((char const   *)(c->opt)->protocol, (char const   *)"cifs");
  }
  if (tmp___12) {
    {
    tmp___11 = strcmp((char const   *)(c->opt)->protocol, (char const   *)"smtp");
    }
    if (tmp___11) {
      {
      tmp___10 = strcmp((char const   *)(c->opt)->protocol,
                        (char const   *)"pop3");
      }
      if (tmp___10) {
        {
        tmp___9 = strcmp((char const   *)(c->opt)->protocol,
                         (char const   *)"nntp");
        }
        if (tmp___9) {
          if (options.option.client) {
            {
            tmp___8 = (char const   *)"client";
            }
          } else {
            {
            tmp___8 = (char const   *)"server";
            }
          }
          {
          log(3, (char const   *)"Protocol %s not supported in %s mode",
              (c->opt)->protocol, tmp___8);
          }
          return (-1);
        } else {
          if (options.option.client) {
            {
            retval___0 = nntp_client(c);
            }
          } else {
            {
            retval___0 = nntp_server(c);
            }
          }
        }
      } else {
        if (options.option.client) {
          {
          retval___0 = pop3_client(c);
          }
        } else {
          {
          retval___0 = pop3_server(c);
          }
        }
      }
    } else {
      if (options.option.client) {
        {
        retval___0 = smtp_client(c);
        }
      } else {
        {
        retval___0 = smtp_server(c);
        }
      }
    }
  } else {
    if (options.option.client) {
      {
      retval___0 = cifs_client(c);
      }
    } else {
      {
      retval___0 = cifs_server(c);
      }
    }
  }
  if (retval___0) {
    {
    log(5, (char const   *)"Protocol negotiation failed");
    }
  } else {
    {
    log(5, (char const   *)"Protocol negotiation succeded");
    }
  }
  return (retval___0);
}
}
static int cifs_client(CLI *c ) 
{ u8 buffer[5] ;
  u8 request_dummy[4] ;
  int tmp ;
  int tmp___0 ;

  {
  {
  request_dummy[0] = (unsigned char )129;
  request_dummy[1] = (unsigned char )0;
  request_dummy[2] = (unsigned char )0;
  request_dummy[3] = (unsigned char )0;
  tmp = write_blocking(c, c->remote_fd.fd, request_dummy, 4);
  }
  if (tmp < 0) {
    return (-1);
  }
  {
  tmp___0 = read_blocking(c, c->remote_fd.fd, buffer, 5);
  }
  if (tmp___0 < 0) {
    {
    log(3, (char const   *)"Failed to read NetBIOS response");
    }
    return (-1);
  }
  if ((int )buffer[0] != 131) {
    {
    log(3, (char const   *)"Negative response expected");
    }
    return (-1);
  }
  if ((int )buffer[2] != 0) {
    {
    log(3, (char const   *)"Unexpected NetBIOS response size");
    }
    return (-1);
  } else {
    if ((int )buffer[3] != 1) {
      {
      log(3, (char const   *)"Unexpected NetBIOS response size");
      }
      return (-1);
    }
  }
  if ((int )buffer[4] != 142) {
    {
    log(3, (char const   *)"Remote server does not require SSL");
    }
    return (-1);
  }
  return (0);
}
}
static int cifs_server(CLI *c ) 
{ u8 buffer[128] ;
  u8 response_access_denied[5] ;
  u8 response_use_ssl[5] ;
  u16 len ;
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;

  {
  {
  response_access_denied[0] = (unsigned char )131;
  response_access_denied[1] = (unsigned char )0;
  response_access_denied[2] = (unsigned char )0;
  response_access_denied[3] = (unsigned char )1;
  response_access_denied[4] = (unsigned char )129;
  response_use_ssl[0] = (unsigned char )131;
  response_use_ssl[1] = (unsigned char )0;
  response_use_ssl[2] = (unsigned char )0;
  response_use_ssl[3] = (unsigned char )1;
  response_use_ssl[4] = (unsigned char )142;
  tmp = read_blocking(c, c->local_rfd.fd, buffer, 4);
  }
  if (tmp < 0) {
    return (-1);
  }
  {
  len = (unsigned short )buffer[3];
  len = (unsigned short )((int )len | ((int )((unsigned short )buffer[2]) << 8));
  }
  if ((unsigned int )len > sizeof(buffer) - 4) {
    {
    log(3, (char const   *)"Received block too long");
    }
    return (-1);
  }
  {
  tmp___0 = read_blocking(c, c->local_rfd.fd, buffer + 4, (int )len);
  }
  if (tmp___0 < 0) {
    return (-1);
  }
  if ((int )buffer[0] != 129) {
    {
    log(3, (char const   *)"Client did not send session setup");
    write_blocking(c, c->local_wfd.fd, response_access_denied, 5);
    }
    return (-1);
  }
  {
  tmp___1 = write_blocking(c, c->local_wfd.fd, response_use_ssl, 5);
  }
  if (tmp___1 < 0) {
    return (-1);
  }
  return (0);
}
}
static int smtp_client(CLI *c ) 
{ char line[1024] ;
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;
  int tmp___5 ;
  int tmp___6 ;
  int tmp___7 ;
  int tmp___8 ;
  int tmp___9 ;

  {
  while (1) {
    {
    tmp = fdscanf(c, c->remote_fd.fd, (char const   *)"%[^\n]", line);
    }
    if (tmp < 0) {
      return (-1);
    }
    {
    tmp___0 = fdprintf(c, c->local_wfd.fd, (char const   *)"%s", line);
    }
    if (tmp___0 < 0) {
      return (-1);
    }
    {
    tmp___1 = strncasecmp((char const   *)(line), (char const   *)"220-", 4);
    }
    if (! (tmp___1 == 0)) {
      break;
    }
  }
  {
  tmp___2 = fdprintf(c, c->remote_fd.fd, (char const   *)"EHLO localhost");
  }
  if (tmp___2 < 0) {
    return (-1);
  }
  while (1) {
    {
    tmp___3 = fdscanf(c, c->remote_fd.fd, (char const   *)"%[^\n]", line);
    }
    if (tmp___3 < 0) {
      return (-1);
    }
    {
    tmp___4 = strncasecmp((char const   *)(line), (char const   *)"250-", 4);
    }
    if (! (tmp___4 == 0)) {
      break;
    }
  }
  {
  tmp___5 = strncasecmp((char const   *)(line), (char const   *)"250 ", 4);
  }
  if (tmp___5 != 0) {
    {
    log(3, (char const   *)"Remote server is not RFC 1425 compliant");
    }
    return (-1);
  }
  {
  tmp___6 = fdprintf(c, c->remote_fd.fd, (char const   *)"STARTTLS");
  }
  if (tmp___6 < 0) {
    return (-1);
  }
  while (1) {
    {
    tmp___7 = fdscanf(c, c->remote_fd.fd, (char const   *)"%[^\n]", line);
    }
    if (tmp___7 < 0) {
      return (-1);
    }
    {
    tmp___8 = strncasecmp((char const   *)(line), (char const   *)"220-", 4);
    }
    if (! (tmp___8 == 0)) {
      break;
    }
  }
  {
  tmp___9 = strncasecmp((char const   *)(line), (char const   *)"220 ", 4);
  }
  if (tmp___9 != 0) {
    {
    log(3, (char const   *)"Remote server is not RFC 2487 compliant");
    }
    return (-1);
  }
  return (0);
}
}
static int smtp_server(CLI *c ) 
{ char line[1024] ;
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;
  int tmp___5 ;
  int tmp___6 ;

  {
  {
  tmp = RFC2487(c->local_rfd.fd);
  }
  if (tmp == 0) {
    return (0);
  }
  {
  tmp___0 = fdscanf(c, c->remote_fd.fd, (char const   *)"220%[^\n]", line);
  }
  if (tmp___0 != 1) {
    {
    log(3, (char const   *)"Unknown server welcome");
    }
    return (-1);
  }
  {
  tmp___1 = fdprintf(c, c->local_wfd.fd, (char const   *)"220%s + stunnel", line);
  }
  if (tmp___1 < 0) {
    return (-1);
  }
  {
  tmp___2 = fdscanf(c, c->local_rfd.fd, (char const   *)"EHLO %[^\n]", line);
  }
  if (tmp___2 != 1) {
    {
    log(3, (char const   *)"Unknown client EHLO");
    }
    return (-1);
  }
  {
  tmp___3 = fdprintf(c, c->local_wfd.fd, (char const   *)"250-%s Welcome", line);
  }
  if (tmp___3 < 0) {
    return (-1);
  }
  {
  tmp___4 = fdprintf(c, c->local_wfd.fd, (char const   *)"250 STARTTLS");
  }
  if (tmp___4 < 0) {
    return (-1);
  }
  {
  tmp___5 = fdscanf(c, c->local_rfd.fd, (char const   *)"STARTTLS", line);
  }
  if (tmp___5 < 0) {
    {
    log(3, (char const   *)"STARTTLS expected");
    }
    return (-1);
  }
  {
  tmp___6 = fdprintf(c, c->local_wfd.fd, (char const   *)"220 Go ahead");
  }
  if (tmp___6 < 0) {
    return (-1);
  }
  return (0);
}
}
static int pop3_client(CLI *c ) 
{ char line[1024] ;
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;

  {
  {
  tmp = fdscanf(c, c->remote_fd.fd, (char const   *)"%[^\n]", line);
  }
  if (tmp < 0) {
    return (-1);
  }
  {
  tmp___0 = strncasecmp((char const   *)(line), (char const   *)"+OK ", 4);
  }
  if (tmp___0) {
    {
    log(3, (char const   *)"Unknown server welcome");
    }
    return (-1);
  }
  {
  tmp___1 = fdprintf(c, c->local_wfd.fd, (char const   *)"%s", line);
  }
  if (tmp___1 < 0) {
    return (-1);
  }
  {
  tmp___2 = fdprintf(c, c->remote_fd.fd, (char const   *)"STLS");
  }
  if (tmp___2 < 0) {
    return (-1);
  }
  {
  tmp___3 = fdscanf(c, c->remote_fd.fd, (char const   *)"%[^\n]", line);
  }
  if (tmp___3 < 0) {
    return (-1);
  }
  {
  tmp___4 = strncasecmp((char const   *)(line), (char const   *)"+OK ", 4);
  }
  if (tmp___4) {
    {
    log(3, (char const   *)"Server does not support TLS");
    }
    return (-1);
  }
  return (0);
}
}
static int pop3_server(CLI *c ) 
{ char line[1024] ;
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;
  int tmp___5 ;
  int tmp___6 ;

  {
  {
  tmp = fdscanf(c, c->remote_fd.fd, (char const   *)"%[^\n]", line);
  }
  if (tmp < 0) {
    return (-1);
  }
  {
  tmp___0 = fdprintf(c, c->local_wfd.fd, (char const   *)"%s + stunnel", line);
  }
  if (tmp___0 < 0) {
    return (-1);
  }
  {
  tmp___1 = fdscanf(c, c->local_rfd.fd, (char const   *)"%[^\n]", line);
  }
  if (tmp___1 < 0) {
    return (-1);
  }
  {
  tmp___4 = strncasecmp((char const   *)(line), (char const   *)"CAPA", 4);
  }
  if (! tmp___4) {
    {
    tmp___2 = fdprintf(c, c->local_wfd.fd,
                       (char const   *)"-ERR Stunnel does not support capabilities");
    }
    if (tmp___2 < 0) {
      return (-1);
    }
    {
    tmp___3 = fdscanf(c, c->local_rfd.fd, (char const   *)"%[^\n]", line);
    }
    if (tmp___3 < 0) {
      return (-1);
    }
  }
  {
  tmp___5 = strncasecmp((char const   *)(line), (char const   *)"STLS", 4);
  }
  if (tmp___5) {
    {
    log(3, (char const   *)"Client does not want TLS");
    }
    return (-1);
  }
  {
  tmp___6 = fdprintf(c, c->local_wfd.fd,
                     (char const   *)"+OK Stunnel starts TLS negotiation");
  }
  if (tmp___6 < 0) {
    return (-1);
  }
  return (0);
}
}
static int nntp_client(CLI *c ) 
{ char line[1024] ;
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;
  int tmp___5 ;

  {
  {
  tmp = fdscanf(c, c->remote_fd.fd, (char const   *)"%[^\n]", line);
  }
  if (tmp < 0) {
    return (-1);
  }
  {
  tmp___0 = strncasecmp((char const   *)(line), (char const   *)"200 ", 4);
  }
  if (tmp___0) {
    {
    tmp___1 = strncasecmp((char const   *)(line), (char const   *)"201 ", 4);
    }
    if (tmp___1) {
      {
      log(3, (char const   *)"Unknown server welcome");
      }
      return (-1);
    }
  }
  {
  tmp___2 = fdprintf(c, c->local_wfd.fd, (char const   *)"%s", line);
  }
  if (tmp___2 < 0) {
    return (-1);
  }
  {
  tmp___3 = fdprintf(c, c->remote_fd.fd, (char const   *)"STARTTLS");
  }
  if (tmp___3 < 0) {
    return (-1);
  }
  {
  tmp___4 = fdscanf(c, c->remote_fd.fd, (char const   *)"%[^\n]", line);
  }
  if (tmp___4 < 0) {
    return (-1);
  }
  {
  tmp___5 = strncasecmp((char const   *)(line), (char const   *)"382 ", 4);
  }
  if (tmp___5) {
    {
    log(3, (char const   *)"Server does not support TLS");
    }
    return (-1);
  }
  return (0);
}
}
static int nntp_server(CLI *c ) 
{ 

  {
  {
  log(3, (char const   *)"Protocol not supported in server mode");
  }
  return (-1);
}
}
static int RFC2487(int fd ) 
{ fd_set fdsRead ;
  struct timeval timeout ;
  unsigned int __i ;
  fd_set *__arr ;
  int tmp ;

  {
  while (1) {
    {
    __arr = & fdsRead;
    __i = 0;
    }
    while (__i < sizeof(fd_set ) / sizeof(__fd_mask )) {
      {
      __arr->__fds_bits[__i] = 0;
      __i ++;
      }
    }
    break;
  }
  {
  fdsRead.__fds_bits[(unsigned int )fd / (8 * sizeof(__fd_mask ))] = fdsRead.__fds_bits[(unsigned int )fd /
                                                                                         (8 *
                                                                                          sizeof(__fd_mask ))] |
                                                                      (1 <<
                                                                       (unsigned int )fd %
                                                                       (8 *
                                                                        sizeof(__fd_mask )));
  timeout.tv_usec = 0;
  timeout.tv_sec = timeout.tv_usec;
  tmp = sselect(fd + 1, & fdsRead, (fd_set *)((void *)0), (fd_set *)((void *)0),
                & timeout);
  }
  switch (tmp) {
  case 0: 
  {
  log(7, (char const   *)"RFC 2487 detected");
  }
  return (1);
  case 1: 
  {
  log(7, (char const   *)"RFC 2487 not detected");
  }
  return (0);
  default: 
  {
  sockerror("RFC2487 (select)");
  }
  return (-1);
  }
  return (0);
}
}
static int signal_pipe[2]  ;
static char signal_buffer[16]  ;
static void sigchld_handler(int sig ) 
{ int save_errno ;
  int *tmp ;
  int *tmp___0 ;

  {
  {
  tmp = __errno_location();
  save_errno = (*tmp);
  write(signal_pipe[1], (void const   *)(signal_buffer), 1);
  signal(17, & sigchld_handler);
  tmp___0 = __errno_location();
  (*tmp___0) = save_errno;
  }
  return;
}
}
void sselect_init(fd_set *set , int *n ) 
{ int tmp ;

  {
  {
  tmp = pipe(signal_pipe);
  }
  if (tmp) {
    {
    ioerror("pipe");
    exit(1);
    }
  }
  {
  alloc_fd(signal_pipe[0]);
  alloc_fd(signal_pipe[1]);
  fcntl(signal_pipe[0], 2, 1);
  fcntl(signal_pipe[1], 2, 1);
  set->__fds_bits[(unsigned int )signal_pipe[0] / (8 * sizeof(__fd_mask ))] = set->__fds_bits[(unsigned int )signal_pipe[0] /
                                                                                               (8 *
                                                                                                sizeof(__fd_mask ))] |
                                                                               (1 <<
                                                                                (unsigned int )signal_pipe[0] %
                                                                                (8 *
                                                                                 sizeof(__fd_mask )));
  }
  if (signal_pipe[0] > (*n)) {
    {
    (*n) = signal_pipe[0];
    }
  }
  {
  signal(17, & sigchld_handler);
  }
  return;
}
}
int sselect(int n , fd_set *readfds , fd_set *writefds , fd_set *exceptfds ,
            struct timeval *timeout ) 
{ int retval___0 ;
  struct timeval tv ;
  int *tmp ;

  {
  while (1) {
    if (timeout) {
      {
      memcpy((void *)((void *)(& tv)),
             (void const   *)((void const   *)timeout),
             sizeof(struct timeval ));
      retval___0 = select(n, (fd_set *)readfds,
                          (fd_set *)writefds,
                          (fd_set *)exceptfds,
                          (struct timeval *)(& tv));
      }
    } else {
      {
      retval___0 = select(n, (fd_set *)readfds,
                          (fd_set *)writefds,
                          (fd_set *)exceptfds,
                          (struct timeval *)((struct timeval *)((void *)0)));
      }
      if (retval___0 > 0) {
        if (readfds->__fds_bits[(unsigned int )signal_pipe[0] /
                                (8 * sizeof(__fd_mask ))] &
            (1 << (unsigned int )signal_pipe[0] % (8 * sizeof(__fd_mask )))) {
          {
          read(signal_pipe[0], (void *)(signal_buffer), sizeof(signal_buffer));
          exec_status();
          }
        }
      }
    }
    if (retval___0 < 0) {
      {
      tmp = __errno_location();
      }
      if (! ((*tmp) == 4)) {
        break;
      }
    } else {
      break;
    }
  }
  return (retval___0);
}
}
int waitforsocket(int fd , int dir , int timeout ) 
{ struct timeval tv ;
  fd_set set ;
  int ready ;
  char const   *tmp ;
  unsigned int __i ;
  fd_set *__arr ;
  fd_set *tmp___0 ;
  fd_set *tmp___1 ;

  {
  if (dir) {
    {
    tmp = (char const   *)"write";
    }
  } else {
    {
    tmp = (char const   *)"read";
    }
  }
  {
  log(7, (char const   *)"waitforsocket: FD=%d, DIR=%s", fd, tmp);
  }
  while (1) {
    {
    __arr = & set;
    __i = 0;
    }
    while (__i < sizeof(fd_set ) / sizeof(__fd_mask )) {
      {
      __arr->__fds_bits[__i] = 0;
      __i ++;
      }
    }
    break;
  }
  {
  set.__fds_bits[(unsigned int )fd / (8 * sizeof(__fd_mask ))] = set.__fds_bits[(unsigned int )fd /
                                                                                 (8 *
                                                                                  sizeof(__fd_mask ))] |
                                                                  (1 <<
                                                                   (unsigned int )fd %
                                                                   (8 *
                                                                    sizeof(__fd_mask )));
  tv.tv_sec = (long )timeout;
  tv.tv_usec = 0;
  }
  if (dir) {
    {
    tmp___0 = & set;
    }
  } else {
    {
    tmp___0 = (fd_set *)((void *)0);
    }
  }
  if (dir) {
    {
    tmp___1 = (fd_set *)((void *)0);
    }
  } else {
    {
    tmp___1 = & set;
    }
  }
  {
  ready = sselect(fd + 1, tmp___1, tmp___0, (fd_set *)((void *)0), & tv);
  }
  switch (ready) {
  case 1986: 
  {
  sockerror("waitforsocket");
  }
  break;
  case 0: 
  {
  log(7, (char const   *)"waitforsocket: timeout");
  }
  break;
  case 1: 
  {
  log(7, (char const   *)"waitforsocket: ok");
  }
  break;
  default: 
  {
  log(6, (char const   *)"waitforsocket: unexpected result");
  }
  }
  return (ready);
}
}
void exec_status(void) 
{ int pid ;
  int status ;
  union __anonunion___u_74 __u ;
  union __anonunion___u_75 __u___0 ;
  int __status ;
  union __anonunion___u_76 __u___1 ;
  int tmp ;

  {
  while (1) {
    {
    pid = waitpid(-1, & status, 1);
    }
    if (! (pid > 0)) {
      break;
    }
    {
    __u___1.__in = status;
    __status = __u___1.__i;
    }
    if ((__status & 255) == 127) {
      {
      tmp = 0;
      }
    } else {
      if ((__status & 127) == 0) {
        {
        tmp = 0;
        }
      } else {
        {
        tmp = 1;
        }
      }
    }
    if (tmp) {
      {
      __u.__in = status;
      log(6, (char const   *)"Local process %d terminated on signal %d", pid,
          __u.__i & 127);
      }
    } else {
      {
      __u___0.__in = status;
      log(6, (char const   *)"Local process %d finished with code %d", pid,
          (__u___0.__i & 65280) >> 8);
      }
    }
  }
  return;
}
}
int write_blocking(CLI *c , int fd , u8 *ptr , int len ) 
{ int num ;
  int tmp ;

  {
  while (len > 0) {
    {
    tmp = waitforsocket(fd, 1, (c->opt)->timeout_busy);
    }
    if (tmp < 1) {
      return (-1);
    }
    {
    num = write(fd, (void const   *)ptr, (unsigned int )len);
    }
    switch (num) {
    case 1986: 
    {
    sockerror("writesocket (write_blocking)");
    }
    return (-1);
    }
    {
    ptr += num;
    len -= num;
    }
  }
  return (0);
}
}
int read_blocking(CLI *c , int fd , u8 *ptr , int len ) 
{ int num ;
  int tmp ;

  {
  while (len > 0) {
    {
    tmp = waitforsocket(fd, 0, (c->opt)->timeout_busy);
    }
    if (tmp < 1) {
      return (-1);
    }
    {
    num = read(fd, (void *)ptr, (unsigned int )len);
    }
    switch (num) {
    case 1986: 
    {
    sockerror("readsocket (read_blocking)");
    }
    return (-1);
    case 0: 
    {
    log(3, (char const   *)"Unexpected socket close (read_blocking)");
    }
    return (-1);
    }
    {
    ptr += num;
    len -= num;
    }
  }
  return (0);
}
}
int fdprintf(CLI *c , int fd , char const   *format  , ...) 
{ __ccured_va_list arglist ;
  char line[1024] ;
  char logline[1024] ;
  char crlf[3] ;
  int len ;
  unsigned long tmp ;
  size_t tmp___0 ;
  int tmp___1 ;
  char *p ;
  int tmp___2 ;

  {
  {
  crlf[0] = '\r';
  crlf[1] = '\n';
  crlf[2] = '\0';
  tmp = (unsigned long )GCC_STDARG_START();
  __ccured_va_start(arglist, tmp);
  len = vsnprintf((char *)(line), 1024,
                  (char const   *)format, arglist);
  __ccured_va_end(arglist);
  len += 2;
  }
  if (len >= 1024) {
    {
    log(3, (char const   *)"Line too long in fdprintf");
    }
    return (-1);
  }
  {
  logline[1023] = '\0';
  strncpy((char *)(logline),
          (char const   *)((char const   *)(line)), 1023);
  line[1023] = '\0';
  tmp___0 = strlen((char const   *)(line));
  strncat((char *)(line),
          (char const   *)((char const   *)(crlf)),
          (1024 - tmp___0) - 1);
  tmp___1 = write_blocking(c, fd, (u8 *)(line), len);
  }
  if (tmp___1 < 0) {
    return (-1);
  }
  while (1) {
    {
    p = logline;
    }
    while ((*p)) {
      {
      tmp___2 = _get__ctype_b((int )(*p));
      }
      if (! (tmp___2 & 16384)) {
        {
        (*p) = '.';
        }
      }
      {
      p ++;
      }
    }
    break;
  }
  {
  log(7, (char const   *)" -> %s", logline);
  }
  return (len);
}
}
int fdscanf(CLI *c , int fd , char const   *format , char *buffer ) 
{ char line[1024] ;
  char logline[1024] ;
  char lformat[1024] ;
  int ptr ;
  int retval___0 ;
  int tmp ;
  int tmp___0 ;
  char *p ;
  int tmp___1 ;
  int tmp___2 ;

  {
  {
  ptr = 0;
  }
  while (ptr < 1023) {
    {
    tmp = waitforsocket(fd, 0, (c->opt)->timeout_busy);
    }
    if (tmp < 1) {
      return (-1);
    }
    {
    tmp___0 = read(fd, (void *)(line + ptr), 1);
    }
    switch (tmp___0) {
    case 1986: 
    {
    sockerror("readsocket (fdscanf)");
    }
    return (-1);
    case 0: 
    {
    log(3, (char const   *)"Unexpected socket close (fdscanf)");
    }
    return (-1);
    }
    if ((int )line[ptr] == 13) {
      goto __Cont;
    }
    if ((int )line[ptr] == 10) {
      break;
    }
    __Cont: 
    {
    ptr ++;
    }
  }
  {
  line[ptr] = '\0';
  logline[1023] = '\0';
  strncpy((char *)(logline),
          (char const   *)((char const   *)(line)), 1023);
  }
  while (1) {
    {
    p = logline;
    }
    while ((*p)) {
      {
      tmp___1 = _get__ctype_b((int )(*p));
      }
      if (! (tmp___1 & 16384)) {
        {
        (*p) = '.';
        }
      }
      {
      p ++;
      }
    }
    break;
  }
  {
  log(7, (char const   *)" <- %s", logline);
  retval___0 = sscanf((char const   *)((char const   *)(line)),
                      (char const   *)format, buffer);
  }
  if (retval___0 >= 0) {
    return (retval___0);
  }
  {
  log(7, (char const   *)"fdscanf falling back to lowercase");
  lformat[1023] = '\0';
  strncpy((char *)(lformat),
          (char const   *)format, 1023);
  ptr = 0;
  }
  while (lformat[ptr]) {
    {
    lformat[ptr] = (char )tolower((int )lformat[ptr]);
    ptr ++;
    }
  }
  {
  ptr = 0;
  }
  while (line[ptr]) {
    {
    line[ptr] = (char )tolower((int )line[ptr]);
    ptr ++;
    }
  }
  {
  tmp___2 = sscanf((char const   *)((char const   *)(line)),
                   (char const   *)((char const   *)(lformat)),
                   buffer);
  }
  return (tmp___2);
}
}
static int init_dh(void) ;
static int init_prng(void) ;
static int prng_seeded(int bytes ) ;
static int add_rand_file(char *filename ) ;
static RSA *tmp_rsa_cb(SSL *s , int export , int keylen ) ;
static RSA *make_temp_key(int keylen ) ;
static void verify_init(void) ;
static int verify_callback(int preverify_ok , X509_STORE_CTX *callback_ctx ) ;
static int crl_callback(X509_STORE_CTX *callback_ctx ) ;
static void info_callback(SSL const   *s , int where , int ret ) ;
static void print_stats(void) ;
static void sslerror_stack(void) ;
static X509_STORE *revocation_store   ;
void context_init(void) 
{ int i ;
  int tmp ;
  SSL_METHOD *tmp___0 ;
  SSL_METHOD *tmp___1 ;
  int tmp___2 ;
  long tmp___3 ;
  int tmp___4 ;
  int tmp___5 ;
  unsigned long tmp___6 ;
  int tmp___7 ;
  int tmp___8 ;

  {
  {
  ENGINE_load_builtin_engines();
  ENGINE_register_all_complete();
  tmp = init_prng();
  }
  if (! tmp) {
    {
    log(6, (char const   *)"PRNG seeded successfully");
    }
  }
  {
  SSL_library_init();
  SSL_load_error_strings();
  }
  if (options.option.client) {
    {
    tmp___0 = SSLv3_client_method();
    ctx = SSL_CTX_new(tmp___0);
    }
  } else {
    {
    tmp___1 = SSLv23_server_method();
    ctx = SSL_CTX_new(tmp___1);
    SSL_CTX_set_tmp_rsa_callback(ctx, & tmp_rsa_cb);
    tmp___2 = init_dh();
    }
    if (tmp___2) {
      {
      log(4, (char const   *)"Diffie-Hellman initialization failed");
      }
    }
  }
  if (options.ssl_options) {
    {
    log(7, (char const   *)"Configuration SSL options: 0x%08lX",
        options.ssl_options);
    tmp___3 = SSL_CTX_ctrl(ctx, 32, options.ssl_options, (void *)0);
    log(7, (char const   *)"SSL options set: 0x%08lX", tmp___3);
    }
  }
  {
  SSL_CTX_ctrl(ctx, 33, 3, (void *)0);
  SSL_CTX_ctrl(ctx, 44, 3, (void *)0);
  SSL_CTX_set_timeout(ctx, options.session_timeout);
  }
  if (options.option.cert) {
    {
    tmp___4 = SSL_CTX_use_certificate_chain_file(ctx,
                                                 (char const   *)options.cert);
    }
    if (! tmp___4) {
      {
      log(3, (char const   *)"Error reading certificate file: %s", options.cert);
      sslerror("SSL_CTX_use_certificate_chain_file");
      exit(1);
      }
    }
    {
    log(7, (char const   *)"Certificate: %s", options.cert);
    log(7, (char const   *)"Key file: %s", options.key);
    i = 0;
    }
    while (i < 3) {
      {
      tmp___5 = SSL_CTX_use_RSAPrivateKey_file(ctx, (char const   *)options.key,
                                               1);
      }
      if (tmp___5) {
        break;
      }
      if (i < 2) {
        {
        tmp___6 = ERR_peek_error();
        }
        if ((int )(tmp___6 & 4095) == 100) {
          {
          sslerror_stack();
          log(3, (char const   *)"Wrong pass phrase: retrying");
          }
          goto __Cont;
        }
      }
      {
      sslerror("SSL_CTX_use_RSAPrivateKey_file");
      exit(1);
      }
      __Cont: 
      {
      i ++;
      }
    }
    {
    tmp___7 = SSL_CTX_check_private_key(ctx);
    }
    if (! tmp___7) {
      {
      sslerror("Private key does not match the certificate");
      exit(1);
      }
    }
  }
  {
  verify_init();
  ctx->info_callback = & info_callback;
  }
  if (options.cipher_list) {
    {
    tmp___8 = SSL_CTX_set_cipher_list(ctx, (char const   *)options.cipher_list);
    }
    if (! tmp___8) {
      {
      sslerror("SSL_CTX_set_cipher_list");
      exit(1);
      }
    }
  }
  return;
}
}
void context_free(void) 
{ 

  {
  {
  SSL_CTX_free(ctx);
  }
  return;
}
}
static int init_prng(void) 
{ int totbytes ;
  char filename[1024] ;
  int bytes ;
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;
  int tmp___5 ;
  int tmp___6 ;

  {
  {
  totbytes = 0;
  bytes = 0;
  filename[0] = '\0';
  }
  if (options.rand_file) {
    {
    tmp = add_rand_file(options.rand_file);
    totbytes += tmp;
    tmp___0 = prng_seeded(totbytes);
    }
    if (tmp___0) {
      return (0);
    }
  }
  {
  RAND_file_name(filename, 1024);
  }
  if (filename[0]) {
    {
    filename[1023] = '\0';
    tmp___1 = add_rand_file(filename);
    totbytes += tmp___1;
    tmp___2 = prng_seeded(totbytes);
    }
    if (tmp___2) {
      return (0);
    }
  }
  {
  tmp___3 = add_rand_file("/dev/urandom");
  totbytes += tmp___3;
  tmp___4 = prng_seeded(totbytes);
  }
  if (tmp___4) {
    return (0);
  }
  if (options.egd_sock) {
    {
    bytes = RAND_egd((char const   *)options.egd_sock);
    }
    if (bytes == -1) {
      {
      log(4, (char const   *)"EGD Socket %s failed", options.egd_sock);
      bytes = 0;
      }
    } else {
      {
      totbytes += bytes;
      log(7, (char const   *)"Snagged %d random bytes from EGD Socket %s",
          bytes, options.egd_sock);
      }
      return (0);
    }
  }
  {
  tmp___5 = add_rand_file("/dev/urandom");
  totbytes += tmp___5;
  tmp___6 = prng_seeded(totbytes);
  }
  if (tmp___6) {
    return (0);
  }
  {
  log(6, (char const   *)"PRNG seeded with %d bytes total", totbytes);
  log(4,
      (char const   *)"PRNG may not have been seeded with enough random bytes");
  }
  return (-1);
}
}
static int init_dh(void) 
{ 

  {
  return (0);
}
}
static int prng_seeded(int bytes ) 
{ int tmp ;

  {
  {
  tmp = RAND_status();
  }
  if (tmp) {
    {
    log(7, (char const   *)"RAND_status claims sufficient entropy for the PRNG");
    }
    return (1);
  }
  return (0);
}
}
static int add_rand_file(char *filename ) 
{ int readbytes ;
  int writebytes ;
  struct stat sb ;
  int tmp ;

  {
  {
  tmp = stat__extinline((char const   *)filename, & sb);
  }
  if (tmp) {
    return (0);
  }
  {
  readbytes = RAND_load_file((char const   *)filename,
                             (long )options.random_bytes);
  }
  if (readbytes) {
    {
    log(7, (char const   *)"Snagged %d random bytes from %s", readbytes,
        filename);
    }
  } else {
    {
    log(6, (char const   *)"Unable to retrieve any random data from %s",
        filename);
    }
  }
  if (options.option.rand_write) {
    if (sb.st_mode & 32768) {
      {
      writebytes = RAND_write_file((char const   *)filename);
      }
      if (writebytes == -1) {
        {
        log(4,
            (char const   *)"Failed to write strong random data to %s - may be a permissions or seeding problem",
            filename);
        }
      } else {
        {
        log(7, (char const   *)"Wrote %d new random bytes to %s", writebytes,
            filename);
        }
      }
    }
  }
  return (readbytes);
}
}
static int initialized   ;
static struct keytabstruct keytable[2049]  ;
static RSA *longkey   ;
static int longlen   ;
static long longtime   ;
static RSA *tmp_rsa_cb(SSL *s , int export , int keylen ) 
{ RSA *oldkey ;
  RSA *retval___0 ;
  time_t now ;
  int i ;

  {
  {
  enter_critical_section(0);
  }
  if (! initialized) {
    {
    i = 0;
    }
    while (i < 2049) {
      {
      keytable[i].key = (RSA *)((void *)0);
      keytable[i].timeout = 0;
      i ++;
      }
    }
    {
    initialized = 1;
    }
  }
  {
  time(& now);
  }
  if (keylen < 2049) {
    if (keytable[keylen].timeout < now) {
      {
      oldkey = keytable[keylen].key;
      keytable[keylen].key = make_temp_key(keylen);
      keytable[keylen].timeout = now + 3600;
      }
      if (oldkey) {
        {
        RSA_free(oldkey);
        }
      }
    }
    {
    retval___0 = keytable[keylen].key;
    }
  } else {
    if (longtime < now) {
      goto _L;
    } else {
      if (longlen != keylen) {
        _L: 
        {
        oldkey = longkey;
        longkey = make_temp_key(keylen);
        longtime = now + 3600;
        longlen = keylen;
        }
        if (oldkey) {
          {
          RSA_free(oldkey);
          }
        }
      }
    }
    {
    retval___0 = longkey;
    }
  }
  {
  leave_critical_section(0);
  }
  return (retval___0);
}
}
static RSA *make_temp_key(int keylen ) 
{ RSA *result ;

  {
  {
  log(7, (char const   *)"Generating %d bit temporary RSA key...", keylen);
  result = RSA_generate_key(keylen, 65537,
                            (void (*)(int  , int  , void * ))((void *)0),
                            (void *)0);
  log(7, (char const   *)"Temporary RSA key created");
  }
  return (result);
}
}
static void verify_init(void) 
{ X509_LOOKUP *lookup ;
  int tmp ;
  int tmp___0 ;
  X509_LOOKUP_METHOD *tmp___1 ;
  int tmp___2 ;
  X509_LOOKUP_METHOD *tmp___3 ;
  int tmp___4 ;
  int tmp___5 ;

  {
  if (options.verify_level < 0) {
    return;
  }
  if (options.verify_level > 1) {
    if (! options.ca_file) {
      if (! options.ca_dir) {
        {
        log(3,
            (char const   *)"Either CApath or CAfile has to be used for authentication");
        exit(1);
        }
      }
    }
  }
  if (options.ca_file) {
    {
    tmp = SSL_CTX_load_verify_locations(ctx, (char const   *)options.ca_file,
                                        (char const   *)((void *)0));
    }
    if (! tmp) {
      {
      log(3, (char const   *)"Error loading verify certificates from %s",
          options.ca_file);
      sslerror("SSL_CTX_load_verify_locations");
      exit(1);
      }
    }
    {
    log(7, (char const   *)"Loaded verify certificates from %s", options.ca_file);
    }
  }
  if (options.ca_dir) {
    {
    tmp___0 = SSL_CTX_load_verify_locations(ctx, (char const   *)((void *)0),
                                            (char const   *)options.ca_dir);
    }
    if (! tmp___0) {
      {
      log(3, (char const   *)"Error setting verify directory to %s",
          options.ca_dir);
      sslerror("SSL_CTX_load_verify_locations");
      exit(1);
      }
    }
    {
    log(7, (char const   *)"Verify directory set to %s", options.ca_dir);
    }
  }
  if (options.crl_file) {
    goto _L;
  } else {
    if (options.crl_dir) {
      _L: 
      {
      revocation_store = X509_STORE_new();
      }
      if (! revocation_store) {
        {
        sslerror("X509_STORE_new");
        exit(1);
        }
      }
      if (options.crl_file) {
        {
        tmp___1 = X509_LOOKUP_file();
        lookup = X509_STORE_add_lookup(revocation_store, tmp___1);
        }
        if (! lookup) {
          {
          sslerror("X509_STORE_add_lookup");
          exit(1);
          }
        }
        {
        tmp___2 = X509_LOOKUP_ctrl(lookup, 1, (char const   *)options.crl_file,
                                   1, (char **)((void *)0));
        }
        if (! tmp___2) {
          {
          log(3, (char const   *)"Error loading CRLs from %s", options.crl_file);
          sslerror("X509_LOOKUP_load_file");
          exit(1);
          }
        }
        {
        log(7, (char const   *)"Loaded CRLs from %s", options.crl_file);
        }
      }
      if (options.crl_dir) {
        {
        tmp___3 = X509_LOOKUP_hash_dir();
        lookup = X509_STORE_add_lookup(revocation_store, tmp___3);
        }
        if (! lookup) {
          {
          sslerror("X509_STORE_add_lookup");
          exit(1);
          }
        }
        {
        tmp___4 = X509_LOOKUP_ctrl(lookup, 2, (char const   *)options.crl_dir,
                                   1, (char **)((void *)0));
        }
        if (! tmp___4) {
          {
          log(3, (char const   *)"Error setting CRL directory to %s",
              options.crl_dir);
          sslerror("X509_LOOKUP_add_dir");
          exit(1);
          }
        }
        {
        log(7, (char const   *)"CRL directory set to %s", options.crl_dir);
        }
      }
    }
  }
  if (options.verify_level == 0) {
    {
    tmp___5 = 1;
    }
  } else {
    {
    tmp___5 = options.verify_level;
    }
  }
  {
  SSL_CTX_set_verify(ctx, tmp___5, & verify_callback);
  }
  if (options.ca_dir) {
    if (options.verify_use_only_my) {
      {
      log(5, (char const   *)"Peer certificate location %s", options.ca_dir);
      }
    }
  }
  return;
}
}
static int verify_callback(int preverify_ok , X509_STORE_CTX *callback_ctx ) 
{ char txt[1024] ;
  X509_OBJECT ret ;
  X509_NAME *tmp ;
  char *p ;
  int tmp___0 ;
  char const   *tmp___1 ;
  X509_NAME *tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;

  {
  {
  tmp = X509_get_subject_name(callback_ctx->current_cert);
  X509_NAME_oneline(tmp, txt, 1024);
  }
  while (1) {
    {
    p = txt;
    }
    while ((*p)) {
      {
      tmp___0 = _get__ctype_b((int )(*p));
      }
      if (! (tmp___0 & 16384)) {
        {
        (*p) = '.';
        }
      }
      {
      p ++;
      }
    }
    break;
  }
  if (options.verify_level == 0) {
    {
    log(5, (char const   *)"VERIFY IGNORE: depth=%d, %s",
        callback_ctx->error_depth, txt);
    }
    return (1);
  }
  if (! preverify_ok) {
    {
    tmp___1 = X509_verify_cert_error_string((long )callback_ctx->error);
    log(4, (char const   *)"VERIFY ERROR: depth=%d, error=%s: %s",
        callback_ctx->error_depth, tmp___1, txt);
    }
    return (0);
  }
  if (options.verify_use_only_my) {
    if (callback_ctx->error_depth == 0) {
      {
      tmp___2 = X509_get_subject_name(callback_ctx->current_cert);
      tmp___3 = X509_STORE_get_by_subject(callback_ctx, 1, tmp___2, & ret);
      }
      if (tmp___3 != 1) {
        {
        log(4, (char const   *)"VERIFY ERROR ONLY MY: no cert for %s", txt);
        }
        return (0);
      }
    }
  }
  if (revocation_store) {
    {
    tmp___4 = crl_callback(callback_ctx);
    }
    if (! tmp___4) {
      return (0);
    }
  }
  {
  log(5, (char const   *)"VERIFY OK: depth=%d, %s", callback_ctx->error_depth,
      txt);
  }
  return (1);
}
}
static int crl_callback(X509_STORE_CTX *callback_ctx ) 
{ X509_STORE_CTX store_ctx ;
  X509_OBJECT obj ;
  X509_NAME *subject ;
  X509_NAME *issuer ;
  X509 *xs ;
  X509_CRL *crl ;
  X509_REVOKED *revoked ;
  EVP_PKEY *pubkey ;
  long serial ;
  BIO *bio ;
  int i ;
  int n ;
  int rc ;
  char *cp ;
  char *cp2 ;
  ASN1_TIME *t ;
  BIO_METHOD *tmp ;
  int tmp___1 ;
  int tmp___2 ;
  ASN1_INTEGER *tmp___4 ;
  int tmp___5 ;

  {
  {
  xs = X509_STORE_CTX_get_current_cert(callback_ctx);
  subject = X509_get_subject_name(xs);
  issuer = X509_get_issuer_name(xs);
  memset((void *)((char *)(& obj)), 0, sizeof(obj));
  X509_STORE_CTX_init(& store_ctx, revocation_store, (X509 *)((void *)0),
                      (STACK *)((void *)0));
  rc = X509_STORE_get_by_subject(& store_ctx, 2, subject, & obj);
  X509_STORE_CTX_cleanup(& store_ctx);
  crl = obj.data.crl;
  }
  if (rc > 0) {
    if (crl) {
      {
      tmp = BIO_s_mem();
      bio = BIO_new(tmp);
      BIO_printf(bio, (char const   *)"lastUpdate: ");
      ASN1_UTCTIME_print(bio, (crl->crl)->lastUpdate);
      BIO_printf(bio, (char const   *)", nextUpdate: ");
      ASN1_UTCTIME_print(bio, (crl->crl)->nextUpdate);
      n = (int )BIO_ctrl(bio, 10, 0, (void *)0);
      cp = (char *)malloc((unsigned int )(n + 1));
      n = BIO_read(bio, (void *)cp, n);
      (*(cp + n)) = '\0';
      BIO_free(bio);
      cp2 = X509_NAME_oneline(subject, (char *)((void *)0), 0);
      log(5, (char const   *)"CA CRL: Issuer: %s, %s", cp2, cp);
      CRYPTO_free((void *)cp2);
      free((void *)cp);
      pubkey = X509_get_pubkey(xs);
      tmp___1 = X509_CRL_verify(crl, pubkey);
      }
      if (tmp___1 <= 0) {
        {
        log(4, (char const   *)"Invalid signature on CRL");
        X509_STORE_CTX_set_error(callback_ctx, 8);
        X509_OBJECT_free_contents(& obj);
        }
        if (pubkey) {
          {
          EVP_PKEY_free(pubkey);
          }
        }
        return (0);
      }
      if (pubkey) {
        {
        EVP_PKEY_free(pubkey);
        }
      }
      {
      t = (crl->crl)->nextUpdate;
      }
      if (! t) {
        {
        log(4, (char const   *)"Found CRL has invalid nextUpdate field");
        X509_STORE_CTX_set_error(callback_ctx, 16);
        X509_OBJECT_free_contents(& obj);
        }
        return (0);
      }
      {
      tmp___2 = X509_cmp_current_time(t);
      }
      if (tmp___2 < 0) {
        {
        log(4,
            (char const   *)"Found CRL is expired - revoking all certificates until you get updated CRL");
        X509_STORE_CTX_set_error(callback_ctx, 12);
        X509_OBJECT_free_contents(& obj);
        }
        return (0);
      }
      {
      X509_OBJECT_free_contents(& obj);
      }
    }
  }
  {
  memset((void *)((char *)(& obj)), 0, sizeof(obj));
  X509_STORE_CTX_init(& store_ctx, revocation_store, (X509 *)((void *)0),
                      (STACK *)((void *)0));
  rc = X509_STORE_get_by_subject(& store_ctx, 2, issuer, & obj);
  X509_STORE_CTX_cleanup(& store_ctx);
  crl = obj.data.crl;
  }
  if (rc > 0) {
    if (crl) {
      {
      n = sk_num((STACK const   *)(crl->crl)->revoked);
      i = 0;
      }
      while (i < n) {
        {
        revoked = (X509_REVOKED *)sk_value((STACK const   *)(crl->crl)->revoked,
                                           i);
        tmp___4 = X509_get_serialNumber(xs);
        tmp___5 = ASN1_INTEGER_cmp(revoked->serialNumber, tmp___4);
        }
        if (tmp___5 == 0) {
          {
          serial = ASN1_INTEGER_get(revoked->serialNumber);
          cp = X509_NAME_oneline(issuer, (char *)((void *)0), 0);
          log(5,
              (char const   *)"Certificate with serial %ld (0x%lX) revoked per CRL from issuer %s",
              serial, serial, cp);
          CRYPTO_free((void *)cp);
          X509_STORE_CTX_set_error(callback_ctx, 23);
          X509_OBJECT_free_contents(& obj);
          }
          return (0);
        }
        {
        i ++;
        }
      }
      {
      X509_OBJECT_free_contents(& obj);
      }
    }
  }
  return (1);
}
}
static void info_callback(SSL const   *s , int where , int ret ) 
{ char const   *tmp ;
  char const   *tmp___1 ;
  char const   *tmp___2 ;
  char const   *tmp___3 ;
  char const   *tmp___4 ;

  {
  if (where & 1) {
    {
    tmp = SSL_state_string_long(s);
    }
    if (where & 4096) {
      {
      tmp___1 = (char const   *)"connect";
      }
    } else {
      if (where & 8192) {
        {
        tmp___1 = (char const   *)"accept";
        }
      } else {
        {
        tmp___1 = (char const   *)"undefined";
        }
      }
    }
    {
    log(7, (char const   *)"SSL state (%s): %s", tmp___1, tmp);
    }
  } else {
    if (where & 16384) {
      {
      tmp___2 = SSL_alert_desc_string_long(ret);
      tmp___3 = SSL_alert_type_string_long(ret);
      }
      if (where & 4) {
        {
        tmp___4 = (char const   *)"read";
        }
      } else {
        {
        tmp___4 = (char const   *)"write";
        }
      }
      {
      log(7, (char const   *)"SSL alert (%s): %s: %s", tmp___4, tmp___3, tmp___2);
      }
    } else {
      if (where == 32) {
        {
        print_stats();
        }
      }
    }
  }
  return;
}
}
static void print_stats(void) 
{ long tmp ;
  long tmp___0 ;
  long tmp___1 ;
  long tmp___2 ;
  long tmp___3 ;
  long tmp___4 ;
  long tmp___5 ;
  long tmp___6 ;
  long tmp___7 ;
  long tmp___8 ;

  {
  {
  tmp = SSL_CTX_ctrl(ctx, 20, 0, (void *)0);
  log(7, (char const   *)"%4ld items in the session cache", tmp);
  tmp___0 = SSL_CTX_ctrl(ctx, 21, 0, (void *)0);
  log(7, (char const   *)"%4ld client connects (SSL_connect())", tmp___0);
  tmp___1 = SSL_CTX_ctrl(ctx, 22, 0, (void *)0);
  log(7, (char const   *)"%4ld client connects that finished", tmp___1);
  tmp___2 = SSL_CTX_ctrl(ctx, 23, 0, (void *)0);
  log(7, (char const   *)"%4ld client renegotiatations requested", tmp___2);
  tmp___3 = SSL_CTX_ctrl(ctx, 24, 0, (void *)0);
  log(7, (char const   *)"%4ld server connects (SSL_accept())", tmp___3);
  tmp___4 = SSL_CTX_ctrl(ctx, 25, 0, (void *)0);
  log(7, (char const   *)"%4ld server connects that finished", tmp___4);
  tmp___5 = SSL_CTX_ctrl(ctx, 26, 0, (void *)0);
  log(7, (char const   *)"%4ld server renegotiatiations requested", tmp___5);
  tmp___6 = SSL_CTX_ctrl(ctx, 27, 0, (void *)0);
  log(7, (char const   *)"%4ld session cache hits", tmp___6);
  tmp___7 = SSL_CTX_ctrl(ctx, 29, 0, (void *)0);
  log(7, (char const   *)"%4ld session cache misses", tmp___7);
  tmp___8 = SSL_CTX_ctrl(ctx, 30, 0, (void *)0);
  log(7, (char const   *)"%4ld session cache timeouts", tmp___8);
  }
  return;
}
}
void sslerror(char *txt ) 
{ unsigned long err ;
  char string[120] ;

  {
  {
  err = ERR_get_error();
  }
  if (! err) {
    {
    log(3, (char const   *)"%s: Peer suddenly disconnected", txt);
    }
    return;
  }
  {
  sslerror_stack();
  ERR_error_string(err, string);
  log(3, (char const   *)"%s: %lX: %s", txt, err, string);
  }
  return;
}
}
static void sslerror_stack(void) 
{ unsigned long err ;
  char string[120] ;

  {
  {
  err = ERR_get_error();
  }
  if (! err) {
    return;
  }
  {
  sslerror_stack();
  ERR_error_string(err, string);
  log(3, (char const   *)"error stack: %lX : %s", err, string);
  }
  return;
}
}
extern int pthread_create(pthread_t * __threadp ,
                          pthread_attr_t const   * __attr ,
                          void *(*__start_routine)(void * ) ,
                          void * __arg ) ;
extern pthread_t pthread_self(void) ;
extern int pthread_attr_init(pthread_attr_t *__attr ) ;
extern int pthread_attr_setdetachstate(pthread_attr_t *__attr ,
                                       int __detachstate ) ;
extern int pthread_attr_setstacksize(pthread_attr_t *__attr ,
                                     size_t __stacksize ) ;
extern int pthread_mutex_init(pthread_mutex_t * __mutex ,
                              pthread_mutexattr_t const   * __mutex_attr ) ;
extern int pthread_mutex_lock(pthread_mutex_t *__mutex ) ;
extern int pthread_mutex_unlock(pthread_mutex_t *__mutex ) ;
static pthread_mutex_t stunnel_cs[4]  ;
static pthread_mutex_t lock_cs[33]  ;
static pthread_attr_t pth_attr  ;
void enter_critical_section(section_code i ) 
{ 

  {
  {
  pthread_mutex_lock(stunnel_cs + i);
  }
  return;
}
}
void leave_critical_section(section_code i ) 
{ 

  {
  {
  pthread_mutex_unlock(stunnel_cs + i);
  }
  return;
}
}
static void locking_callback(int mode , int type , char const   *file ,
                             int line ) 
{ 

  {
  if (mode & 1) {
    {
    pthread_mutex_lock(lock_cs + type);
    }
  } else {
    {
    pthread_mutex_unlock(lock_cs + type);
    }
  }
  return;
}
}
void sthreads_init(void) 
{ int i ;

  {
  {
  i = 0;
  }
  while (i < 4) {
    {
    pthread_mutex_init((pthread_mutex_t *)(stunnel_cs + i),
                       (pthread_mutexattr_t const   *)((pthread_mutexattr_t const   *)((void *)0)));
    i ++;
    }
  }
  {
  i = 0;
  }
  while (i < 33) {
    {
    pthread_mutex_init((pthread_mutex_t *)(lock_cs + i),
                       (pthread_mutexattr_t const   *)((pthread_mutexattr_t const   *)((void *)0)));
    i ++;
    }
  }
  {
  CRYPTO_set_id_callback(& stunnel_thread_id);
  CRYPTO_set_locking_callback(& locking_callback);
  pthread_attr_init(& pth_attr);
  pthread_attr_setdetachstate(& pth_attr, 1);
  pthread_attr_setstacksize(& pth_attr, 65536);
  }
  return;
}
}
unsigned long stunnel_process_id(void) 
{ unsigned long tmp ;

  {
  {
  tmp = (unsigned long )getpid();
  }
  return (tmp);
}
}
unsigned long stunnel_thread_id(void) 
{ unsigned long tmp ;

  {
  {
  tmp = pthread_self();
  }
  return (tmp);
}
}
int create_client(int ls , int s , void *arg , void *(*cli)(void * ) ) 
{ pthread_t thread ;
  sigset_t newmask ;
  sigset_t oldmask ;
  int tmp ;

  {
  {
  sigemptyset(& newmask);
  sigaddset(& newmask, 17);
  sigaddset(& newmask, 15);
  sigaddset(& newmask, 3);
  sigaddset(& newmask, 2);
  sigaddset(& newmask, 1);
  pthread_sigmask(0,
                  (__sigset_t const   *)((__sigset_t const   *)(& newmask)),
                  (__sigset_t *)(& oldmask));
  tmp = pthread_create((pthread_t *)(& thread),
                       (pthread_attr_t const   *)((pthread_attr_t const   *)(& pth_attr)),
                       cli, (void *)arg);
  }
  if (tmp) {
    {
    pthread_sigmask(2,
                    (__sigset_t const   *)((__sigset_t const   *)(& oldmask)),
                    (__sigset_t *)((__sigset_t *)((void *)0)));
    }
    if (s >= 0) {
      {
      close(s);
      }
    }
    return (-1);
  }
  {
  pthread_sigmask(2,
                  (__sigset_t const   *)((__sigset_t const   *)(& oldmask)),
                  (__sigset_t *)((__sigset_t *)((void *)0)));
  }
  return (0);
}
}
static void daemon_loop(void) ;
static void accept_connection(LOCAL_OPTIONS *opt ) ;
static void get_limits(void) ;
static void drop_privileges(void) ;
static void daemonize(void) ;
static void create_pid(void) ;
static void delete_pid(void) ;
static void setnonblock(int sock , unsigned long l ) ;
static void signal_handler(int sig ) ;
int num_clients   ;
int main(int argc , char **argv ) 
{ char *tmp ;
  char *tmp___0 ;

  {
  __initialize__();
  if (argc > 2) {
    {
    tmp = (*(argv + 2));
    }
  } else {
    {
    tmp = (char *)((void *)0);
    }
  }
  if (argc > 1) {
    {
    tmp___0 = (*(argv + 1));
    }
  } else {
    {
    tmp___0 = (char *)((void *)0);
    }
  }
  {
  main_initialize(tmp___0, tmp);
  signal(13, (void (*)(int  ))1);
  signal(15, & signal_handler);
  signal(3, & signal_handler);
  signal(2, & signal_handler);
  signal(1, & signal_handler);
  main_execute();
  }
  return (0);
}
}
void main_initialize(char *arg1 , char *arg2 ) 
{ struct stat st ;
  char *tmp ;
  int tmp___0 ;

  {
  {
  sthreads_init();
  parse_config(arg1, arg2);
  log_open();
  tmp = stunnel_info();
  log(5, (char const   *)"%s", tmp);
  }
  if (! options.key) {
    {
    options.key = options.cert;
    }
  }
  if (options.option.cert) {
    {
    tmp___0 = stat__extinline((char const   *)options.key, & st);
    }
    if (tmp___0) {
      {
      ioerror(options.key);
      exit(1);
      }
    }
    if (st.st_mode & 7) {
      {
      log(4, (char const   *)"Wrong permissions on %s", options.key);
      }
    }
  }
  return;
}
}
void main_execute(void) 
{ void *tmp ;

  {
  {
  context_init();
  }
  if (local_options.next) {
    {
    daemon_loop();
    }
  } else {
    {
    max_fds = 1024;
    drop_privileges();
    num_clients = 1;
    tmp = alloc_client_session(& local_options, 0, 1);
    client(tmp);
    }
  }
  {
  context_free();
  log_close();
  }
  return;
}
}
static void daemon_loop(void) 
{ struct sockaddr_in addr ;
  fd_set base_set ;
  fd_set current_set ;
  int n ;
  LOCAL_OPTIONS *opt ;
  unsigned int __i ;
  fd_set *__arr ;
  int tmp ;
  int tmp___0 ;
  register unsigned short __v ;
  register unsigned short __x ;
  int tmp___1 ;
  int tmp___2 ;
  register unsigned short __v___0 ;
  register unsigned short __x___0 ;
  int tmp___3 ;
  int tmp___4 ;
  void *tmp___5 ;
  int *tmp___6 ;
  int tmp___7 ;

  {
  {
  get_limits();
  }
  while (1) {
    {
    __arr = & base_set;
    __i = 0;
    }
    while (__i < sizeof(fd_set ) / sizeof(__fd_mask )) {
      {
      __arr->__fds_bits[__i] = 0;
      __i ++;
      }
    }
    break;
  }
  if (! local_options.next) {
    {
    log(3, (char const   *)"No connections defined in config file");
    exit(1);
    }
  }
  {
  num_clients = 0;
  n = 0;
  opt = local_options.next;
  }
  while (opt) {
    if (! opt->option.accept) {
      goto __Cont;
    }
    {
    opt->fd = socket(2, 1, 0);
    }
    if (opt->fd < 0) {
      {
      sockerror("local socket");
      exit(1);
      }
    }
    {
    tmp = alloc_fd(opt->fd);
    }
    if (tmp) {
      {
      exit(1);
      }
    }
    {
    tmp___0 = set_socket_options(opt->fd, 0);
    }
    if (tmp___0 < 0) {
      {
      exit(1);
      }
    }
    {
    memset((void *)(& addr), 0, sizeof(addr));
    addr.sin_family = (unsigned short )2;
    addr.sin_addr.s_addr = (*(opt->localnames));
    addr.sin_port = opt->localport;
    safe_ntoa(opt->local_address, addr.sin_addr);
    tmp___2 = bind(opt->fd, (void const   *)((struct sockaddr *)(& addr)),
                   sizeof(addr));
    }
    if (tmp___2) {
      {
      __x = addr.sin_port;
      tmp___1 = ((int )__x);
      }
      if (tmp___1) {
        {
        __v = (unsigned short )((((int )__x >> 8) & 255) |
                                (((int )__x & 255) << 8));
        }
      } else {
        {
        __asm__  ("rorw $8, %w0": "=r" (__v): "0" (__x): "cc");
        }
      }
      {
      log(3, (char const   *)"Error binding %s to %s:%d", opt->servname,
          opt->local_address, __v);
      sockerror("bind");
      exit(1);
      }
    }
    {
    __x___0 = addr.sin_port;
    tmp___3 = ((int )__x___0);
    }
    if (tmp___3) {
      {
      __v___0 = (unsigned short )((((int )__x___0 >> 8) & 255) |
                                  (((int )__x___0 & 255) << 8));
      }
    } else {
      {
      __asm__  ("rorw $8, %w0": "=r" (__v___0): "0" (__x___0): "cc");
      }
    }
    {
    log(7, (char const   *)"%s bound to %s:%d", opt->servname,
        opt->local_address, __v___0);
    tmp___4 = listen(opt->fd, 5);
    }
    if (tmp___4) {
      {
      sockerror("listen");
      exit(1);
      }
    }
    {
    fcntl(opt->fd, 2, 1);
    base_set.__fds_bits[(unsigned int )opt->fd / (8 * sizeof(__fd_mask ))] = base_set.__fds_bits[(unsigned int )opt->fd /
                                                                                                  (8 *
                                                                                                   sizeof(__fd_mask ))] |
                                                                              (1 <<
                                                                               (unsigned int )opt->fd %
                                                                               (8 *
                                                                                sizeof(__fd_mask )));
    }
    if (opt->fd > n) {
      {
      n = opt->fd;
      }
    }
    __Cont: 
    {
    opt = opt->next;
    }
  }
  {
  sselect_init(& base_set, & n);
  }
  if (! options.option.foreground) {
    {
    daemonize();
    }
  }
  {
  drop_privileges();
  create_pid();
  opt = local_options.next;
  }
  while (opt) {
    if (opt->option.accept) {
      goto __Cont___0;
    }
    {
    enter_critical_section(2);
    num_clients = num_clients + 1;
    leave_critical_section(2);
    tmp___5 = alloc_client_session(opt, -1, -1);
    create_client(-1, -1, tmp___5, & client);
    }
    __Cont___0: 
    {
    opt = opt->next;
    }
  }
  while (1) {
    {
    memcpy((void *)((void *)(& current_set)),
           (void const   *)((void const   *)(& base_set)),
           sizeof(fd_set ));
    tmp___7 = sselect(n + 1, & current_set, (fd_set *)((void *)0),
                      (fd_set *)((void *)0), (struct timeval *)((void *)0));
    }
    if (tmp___7 < 0) {
      {
      tmp___6 = __errno_location();
      log_error(6, (*tmp___6), "main loop select");
      }
    } else {
      {
      opt = local_options.next;
      }
      while (opt) {
        if (current_set.__fds_bits[(unsigned int )opt->fd /
                                   (8 * sizeof(__fd_mask ))] &
            (1 << (unsigned int )opt->fd % (8 * sizeof(__fd_mask )))) {
          {
          accept_connection(opt);
          }
        }
        {
        opt = opt->next;
        }
      }
    }
  }
  {
  log(3, (char const   *)"INTERNAL ERROR: End of infinite loop 8-)");
  }
  return;
}
}
static void accept_connection(LOCAL_OPTIONS *opt ) 
{ struct sockaddr_in addr ;
  int err ;
  int s ;
  int addrlen ;
  int *tmp ;
  register unsigned short __v ;
  register unsigned short __x ;
  int tmp___0 ;
  char *tmp___1 ;
  int tmp___2 ;
  void *tmp___3 ;
  int tmp___4 ;

  {
  {
  addrlen = (int )sizeof(addr);
  }
  while (1) {
    {
    s = accept(opt->fd,
               (void *)((void *)((struct sockaddr *)(& addr))),
               (socklen_t *)((socklen_t *)(& addrlen)));
    }
    if (s < 0) {
      {
      tmp = __errno_location();
      err = (*tmp);
      }
    }
    if (s < 0) {
      if (! (err == 4)) {
        break;
      }
    } else {
      break;
    }
  }
  if (s < 0) {
    {
    sockerror("accept");
    }
    switch (err) {
    case 24: 
    {

    }
    case 23: 
    {

    }
    case 105: 
    {

    }
    case 12: 
    {
    sleep(1);
    }
    default: 
    {

    }
    }
    return;
  }
  {
  enter_critical_section(1);
  __x = addr.sin_port;
  tmp___0 = ((int )__x);
  }
  if (tmp___0) {
    {
    __v = (unsigned short )((((int )__x >> 8) & 255) | (((int )__x & 255) << 8));
    }
  } else {
    {
    __asm__  ("rorw $8, %w0": "=r" (__v): "0" (__x): "cc");
    }
  }
  {
  tmp___1 = inet_ntoa(addr.sin_addr);
  log(7, (char const   *)"%s accepted FD=%d from %s:%d", opt->servname, s,
      tmp___1, __v);
  leave_critical_section(1);
  }
  if (num_clients >= max_clients) {
    {
    log(4, (char const   *)"Connection rejected: too many clients (>=%d)",
        max_clients);
    close(s);
    }
    return;
  }
  {
  tmp___2 = alloc_fd(s);
  }
  if (tmp___2) {
    return;
  }
  {
  fcntl(s, 2, 1);
  tmp___3 = alloc_client_session(opt, s, s);
  tmp___4 = create_client(opt->fd, s, tmp___3, & client);
  }
  if (tmp___4) {
    {
    log(3, (char const   *)"Connection rejected: create_client failed");
    close(s);
    }
    return;
  }
  {
  enter_critical_section(2);
  num_clients = num_clients + 1;
  leave_critical_section(2);
  }
  return;
}
}
static void get_limits(void) 
{ int fds_ulimit ;
  char const   *tmp ;

  {
  {
  fds_ulimit = -1;
  fds_ulimit = (int )sysconf(4);
  }
  if (fds_ulimit < 0) {
    {
    ioerror("sysconf");
    }
  }
  if (fds_ulimit < 1024) {
    {
    max_fds = fds_ulimit;
    }
  } else {
    {
    max_fds = 1024;
    }
  }
  if (max_fds < 16) {
    {
    max_fds = 16;
    }
  }
  if (max_fds >= 256) {
    {
    max_clients = (max_fds * 125) / 256;
    }
  } else {
    {
    max_clients = (max_fds - 6) / 2;
    }
  }
  if (fds_ulimit < 0) {
    {
    tmp = (char const   *)" (unlimited)";
    }
  } else {
    {
    tmp = (char const   *)"";
    }
  }
  {
  log(5,
      (char const   *)"FD_SETSIZE=%d, file ulimit=%d%s -> %d clients allowed",
      1024, fds_ulimit, tmp, max_clients);
  }
  return;
}
}
static void drop_privileges(void) 
{ int uid ;
  int gid ;
  struct group *gr ;
  gid_t gr_list[1] ;
  struct passwd *pw ;
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;
  int tmp___5 ;

  {
  {
  uid = 0;
  gid = 0;
  }
  if (options.setgid_group) {
    {
    gr = getgrnam((char const   *)options.setgid_group);
    }
    if (gr) {
      {
      gid = (int )gr->gr_gid;
      }
    } else {
      {
      tmp = atoi((char const   *)options.setgid_group);
      }
      if (tmp) {
        {
        gid = atoi((char const   *)options.setgid_group);
        }
      } else {
        {
        log(3, (char const   *)"Failed to get GID for group %s",
            options.setgid_group);
        exit(1);
        }
      }
    }
  }
  if (options.setuid_user) {
    {
    pw = getpwnam((char const   *)options.setuid_user);
    }
    if (pw) {
      {
      uid = (int )pw->pw_uid;
      }
    } else {
      {
      tmp___0 = atoi((char const   *)options.setuid_user);
      }
      if (tmp___0) {
        {
        uid = atoi((char const   *)options.setuid_user);
        }
      } else {
        {
        log(3, (char const   *)"Failed to get UID for user %s",
            options.setuid_user);
        exit(1);
        }
      }
    }
  }
  if (options.chroot_dir) {
    {
    tmp___1 = chroot((char const   *)options.chroot_dir);
    }
    if (tmp___1) {
      {
      sockerror("chroot");
      exit(1);
      }
    }
    {
    tmp___2 = chdir((char const   *)"/");
    }
    if (tmp___2) {
      {
      sockerror("chdir");
      exit(1);
      }
    }
  }
  if (gid) {
    {
    tmp___3 = setgid((unsigned int )gid);
    }
    if (tmp___3) {
      {
      sockerror("setgid");
      exit(1);
      }
    }
    {
    gr_list[0] = (unsigned int )gid;
    tmp___4 = setgroups(1, (__gid_t const   *)(gr_list));
    }
    if (tmp___4) {
      {
      sockerror("setgroups");
      exit(1);
      }
    }
  }
  if (uid) {
    {
    tmp___5 = setuid((unsigned int )uid);
    }
    if (tmp___5) {
      {
      sockerror("setuid");
      exit(1);
      }
    }
  }
  return;
}
}
static void daemonize(void) 
{ int tmp ;

  {
  {
  tmp = daemon(0, 0);
  }
  if (tmp == -1) {
    {
    ioerror("daemon");
    exit(1);
    }
  }
  {
  setsid();
  }
  return;
}
}
static void create_pid(void) 
{ int pf ;
  char pid[1024] ;
  size_t tmp___0 ;

  {
  if (! options.pidfile) {
    {
    log(7, (char const   *)"No pid file being created");
    }
    return;
  }
  if ((int )(*(options.pidfile + 0)) != 47) {
    {
    log(3, (char const   *)"Pid file (%s) must be full path name",
        options.pidfile);
    exit(1);
    }
  }
  {
  options.dpid = (unsigned long )getpid();
  unlink((char const   *)options.pidfile);
  pf = open((char const   *)options.pidfile, 705, 420);
  }
  if (pf == -1) {
    {
    log(3, (char const   *)"Cannot create pid file %s", options.pidfile);
    ioerror("create");
    exit(1);
    }
  }
  {
  sprintf((char *)(pid),
          (char const   *)((char const   *)"%lu\n"),
          options.dpid);
  tmp___0 = strlen((char const   *)(pid));
  write(pf, (void const   *)(pid), tmp___0);
  close(pf);
  log(7, (char const   *)"Created pid file %s", options.pidfile);
  atexit(& delete_pid);
  }
  return;
}
}
static void delete_pid(void) 
{ __pid_t tmp ;
  int tmp___0 ;

  {
  {
  log(7, (char const   *)"removing pid file %s", options.pidfile);
  tmp = getpid();
  }
  if ((unsigned long )tmp != options.dpid) {
    return;
  }
  {
  tmp___0 = unlink((char const   *)options.pidfile);
  }
  if (tmp___0 < 0) {
    {
    ioerror(options.pidfile);
    }
  }
  return;
}
}
static char *type_str[3]   ;
int set_socket_options(int s , int type ) 
{ SOCK_OPT *ptr ;
  int opt_size ;
  size_t tmp ;
  int tmp___0 ;

  {
  {
  ptr = sock_opts;
  }
  while (ptr->opt_str) {
    if (! ptr->opt_val[type]) {
      goto __Cont;
    }
    switch (ptr->opt_type) {
    case 3: 
    {
    opt_size = (int )sizeof(struct linger );
    }
    break;
    case 4: 
    {
    opt_size = (int )sizeof(struct timeval );
    }
    break;
    case 5: 
    {
    tmp = strlen((char const   *)((ptr->opt_val[type])->c_val));
    opt_size = (int )(tmp + 1);
    }
    break;
    default: 
    {
    opt_size = (int )sizeof(int );
    }
    break;
    }
    {
    tmp___0 = setsockopt(s, ptr->opt_level, ptr->opt_name,
                         (void const   *)((void *)ptr->opt_val[type]),
                         (unsigned int )opt_size);
    }
    if (tmp___0) {
      {
      sockerror(ptr->opt_str);
      }
      return (-1);
    } else {
      {
      log(7, (char const   *)"%s option set on %s socket", ptr->opt_str,
          type_str[type]);
      }
    }
    __Cont: 
    {
    ptr ++;
    }
  }
  return (0);
}
}
void ioerror(char *txt ) 
{ int *tmp ;

  {
  {
  tmp = __errno_location();
  log_error(3, (*tmp), txt);
  }
  return;
}
}
void sockerror(char *txt ) 
{ int *tmp ;

  {
  {
  tmp = __errno_location();
  log_error(3, (*tmp), txt);
  }
  return;
}
}
void log_error(int level , int error , char *txt ) 
{ char *tmp ;

  {
  {
  tmp = my_strerror(error);
  log(level, (char const   *)"%s: %s (%d)", txt, tmp, error);
  }
  return;
}
}
char *my_strerror(int errnum ) 
{ char *tmp ;

  {
  switch (errnum) {
  default: 
  {
  tmp = strerror(errnum);
  }
  return (tmp);
  }
  return ((char *)0);
}
}
static void signal_handler(int sig ) 
{ int tmp ;

  {
  if (sig == 15) {
    {
    tmp = 5;
    }
  } else {
    {
    tmp = 3;
    }
  }
  {
  log(tmp, (char const   *)"Received signal %d; terminating", sig);
  exit(3);
  }
  return;
}
}
static char retval[1024]  ;
char *stunnel_info(void) 
{ size_t tmp ;
  size_t tmp___0 ;
  size_t tmp___1 ;
  size_t tmp___2 ;
  char const   * tmp___3 ;

  {
  {
  retval[1023] = '\0';
  strncpy((char *)(retval),
          (char const   *)((char const   *)"stunnel 4.05 on i686-pc-linux-gnu"),
          1023);
  retval[1023] = '\0';
  tmp = strlen((char const   *)(retval));
  strncat((char *)(retval),
          (char const   *)((char const   *)" PTHREAD"),
          (1024 - tmp) - 1);
  retval[1023] = '\0';
  tmp___0 = strlen((char const   *)(retval));
  strncat((char *)(retval),
          (char const   *)((char const   *)"+LIBWRAP"),
          (1024 - tmp___0) - 1);
  retval[1023] = '\0';
  tmp___1 = strlen((char const   *)(retval));
  strncat((char *)(retval),
          (char const   *)((char const   *)" with "),
          (1024 - tmp___1) - 1);
  retval[1023] = '\0';
  tmp___2 = strlen((char const   *)(retval));
  tmp___3 = (char const   *)SSLeay_version(0);
  strncat((char *)(retval), tmp___3, (1024 - tmp___2) - 1);
  }
  return (retval);
}
}
int alloc_fd(int sock ) 
{ 

  {
  if (sock >= max_fds) {
    {
    log(3, (char const   *)"File descriptor out of range (%d>=%d)", sock,
        max_fds);
    close(sock);
    }
    return (-1);
  }
  {
  setnonblock(sock, 1);
  }
  return (0);
}
}
static void setnonblock(int sock , unsigned long l ) 
{ int retval___0 ;
  int flags ;
  int *tmp ;
  int *tmp___0 ;
  char const   *tmp___1 ;

  {
  while (1) {
    {
    flags = fcntl(sock, 3, 0);
    }
    if (flags < 0) {
      {
      tmp = __errno_location();
      }
      if (! ((*tmp) == 4)) {
        break;
      }
    } else {
      break;
    }
  }
  if (l) {
    {
    flags = flags | 2048;
    }
  } else {
    {
    flags = flags & -2049;
    }
  }
  while (1) {
    {
    retval___0 = fcntl(sock, 4, flags);
    }
    if (retval___0 < 0) {
      {
      tmp___0 = __errno_location();
      }
      if (! ((*tmp___0) == 4)) {
        break;
      }
    } else {
      break;
    }
  }
  if (retval___0 < 0) {
    {
    sockerror("nonblocking");
    }
  } else {
    if (l) {
      {
      tmp___1 = (char const   *)"non-";
      }
    } else {
      {
      tmp___1 = (char const   *)"";
      }
    }
    {
    log(7, (char const   *)"FD %d in %sblocking mode", sock, tmp___1);
    }
  }
  return;
}
}
char *safe_ntoa(char *text , struct in_addr in ) 
{ char const   * tmp ;

  {
  {
  enter_critical_section(1);
  tmp = (char const   *)inet_ntoa(in);
  strncpy((char *)text, tmp, 15);
  leave_critical_section(1);
  (*(text + 15)) = '\0';
  }
  return (text);
}
}
extern int openpty(int *__amaster , int *__aslave , char *__name ,
                   struct termios *__termp , struct winsize *__winp ) ;
int pty_allocate(int *ptyfd , int *ttyfd , char *namebuf , int namebuflen ) 
{ char buf[64] ;
  int i ;

  {
  {
  i = openpty(ptyfd, ttyfd, buf, (struct termios *)((void *)0),
              (struct winsize *)((void *)0));
  }
  if (i < 0) {
    {
    ioerror("openpty");
    }
    return (-1);
  }
  {
  (*(namebuf + 1023)) = '\0';
  strncpy((char *)namebuf,
          (char const   *)((char const   *)(buf)), 1023);
  }
  return (0);
}
}
void __initialize__(void) 
{ 

  {
  saved_str = (char const   *)((void *)0);
  allow_severity = 5;
  deny_severity = 4;
  sid_ctx = (unsigned char *)"stunnel SID";
  outfile = (FILE *)((void *)0);
  option_not_found = "Specified option name is not valid here";
  on = 1;
  revocation_store = (X509_STORE *)((void *)0);
  initialized = 0;
  longkey = (RSA *)((void *)0);
  longlen = 0;
  longtime = (long )0;
  num_clients = 0;
}
}
