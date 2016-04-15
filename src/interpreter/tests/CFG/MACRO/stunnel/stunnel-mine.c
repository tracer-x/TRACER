struct _IO_marker;
typedef long off_t__;
typedef long long off64_t__;
typedef void _IO_lock_t;
struct _IO_FILE {
   int BLAST_FLAG__ ;
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
   off_t__ _old_offset ;
   unsigned short _cur_column ;
   signed char _vtable_offset ;
   char _shortbuf[1] ;
   _IO_lock_t *_lock ;
   off64_t__ _offset ;
   void *pad1__ ;
   void *pad2__ ;
   int _mode ;
   char _unused2[(int )(15 * sizeof(int ) - 2 * sizeof(void *))] ;
};
typedef struct _IO_FILE FILE;
struct _IO_marker;
void error____(void) 
{ 

  {
  ERROR: 
  goto ERROR;
}
}
void initialize____(void) ;
typedef unsigned int size_t;
typedef unsigned short u_short__;
typedef unsigned long long dev_t__;
typedef unsigned int uid_t__;
typedef unsigned int gid_t__;
typedef unsigned long ino_t__;
typedef unsigned int mode_t__;
typedef unsigned int nlink_t__;
typedef int pid_t__;
typedef long time_t__;
typedef long suseconds_t__;
typedef long blksize_t__;
typedef long blkcnt_t__;
typedef int ssize_t__;
typedef unsigned int socklen_t__;
typedef u_short__ u_short;
typedef gid_t__ gid_t;
typedef ssize_t__ ssize_t;
typedef time_t__ time_t;
struct anonstruct___sigset_t_2__ {
   unsigned long val__[(int )(1024 / (8 * sizeof(unsigned long )))] ;
};
typedef struct anonstruct___sigset_t_2__ sigset_t__;
typedef sigset_t__ sigset_t;
struct timespec {
   time_t__ tv_sec ;
   long tv_nsec ;
};
struct timeval {
   time_t__ tv_sec ;
   suseconds_t__ tv_usec ;
};
typedef long fd_mask__;
struct anonstruct_fd_set_3__ {
   fd_mask__ fds_bits__[(int )(1024 / (8 * sizeof(fd_mask__ )))] ;
};
typedef struct anonstruct_fd_set_3__ fd_set;
struct sched_param__ {
   int sched_priority__ ;
};
struct _pthread_fastlock {
   long status__ ;
   int spinlock__ ;
};
typedef struct _pthread_descr_struct *_pthread_descr;
struct pthread_attr_s__ {
   int detachstate__ ;
   int schedpolicy__ ;
   struct sched_param__ schedparam__ ;
   int inheritsched__ ;
   int scope__ ;
   size_t guardsize__ ;
   int stackaddr_set__ ;
   void *stackaddr__ ;
   size_t stacksize__ ;
};
typedef struct pthread_attr_s__ pthread_attr_t;
struct anonstruct_pthread_mutex_t_6__ {
   int m_reserved__ ;
   int m_count__ ;
   _pthread_descr m_owner__ ;
   int m_kind__ ;
   struct _pthread_fastlock m_lock__ ;
};
typedef struct anonstruct_pthread_mutex_t_6__ pthread_mutex_t;
struct anonstruct_pthread_mutexattr_t_7__ {
   int mutexkind__ ;
};
typedef struct anonstruct_pthread_mutexattr_t_7__ pthread_mutexattr_t;
typedef unsigned long pthread_t;
typedef struct ccured_va_list__ *gnuc_va_list__;
struct _IO_marker {
   struct _IO_marker *_next ;
   struct _IO_FILE *_sbuf ;
   int _pos ;
};
struct ccured_va_list__ {
   int next ;
};
typedef struct ccured_va_list__ *ccured_va_list__;
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
   dev_t__ st_dev ;
   unsigned short pad1__ ;
   ino_t__ st_ino ;
   mode_t__ st_mode ;
   nlink_t__ st_nlink ;
   uid_t__ st_uid ;
   gid_t__ st_gid ;
   dev_t__ st_rdev ;
   unsigned short pad2__ ;
   off_t__ st_size ;
   blksize_t__ st_blksize ;
   blkcnt_t__ st_blocks ;
   struct timespec st_atim ;
   struct timespec st_mtim ;
   struct timespec st_ctim ;
   unsigned long unused4__ ;
   unsigned long unused5__ ;
};
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef void (*sighandler_t__)(int  );
struct sigaction {
   void (*sa_handler)(int  ) ;
   sigset_t__ sa_mask ;
   int sa_flags ;
   void (*sa_restorer)(void) ;
};
typedef socklen_t__ socklen_t;
struct passwd {
   char *pw_name ;
   char *pw_passwd ;
   uid_t__ pw_uid ;
   gid_t__ pw_gid ;
   char *pw_gecos ;
   char *pw_dir ;
   char *pw_shell ;
};
struct group {
   char *gr_name ;
   char *gr_passwd ;
   gid_t__ gr_gid ;
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
union anonunion_value_55__ {
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
   union anonunion_value_55__ value ;
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
union anonunion_pkey_56__ {
   char *ptr ;
   struct rsa_st *rsa ;
   struct dsa_st *dsa ;
   struct dh_st *dh ;
};
struct evp_pkey_st {
   int type ;
   int save_type ;
   int references ;
   union anonunion_pkey_56__ pkey ;
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
union anonunion_data_58__ {
   char *ptr ;
   X509 *x509 ;
   X509_CRL *crl ;
   EVP_PKEY *pkey ;
};
struct x509_object_st {
   int type ;
   union anonunion_data_58__ data ;
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
struct anonstruct_stats_62__ {
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
   struct anonstruct_stats_62__ stats ;
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
struct anonstruct_tmp_63__ {
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
   struct anonstruct_tmp_63__ tmp ;
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
struct anonstruct_tmp_64__ {
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
   struct anonstruct_tmp_64__ tmp ;
};
enum anonenum_section_code_65__ {
    CRIT_KEYGEN = 0, 
    CRIT_NTOA = 1, 
    CRIT_CLIENTS = 2, 
    CRIT_WIN_LOG = 3, 
    CRIT_SECTIONS = 4,  };
typedef enum anonenum_section_code_65__ section_code;
struct anonstruct_option_67__ {
   unsigned int cert : 1 ;
   unsigned int client : 1 ;
   unsigned int foreground : 1 ;
   unsigned int syslog : 1 ;
   unsigned int rand_write : 1 ;
};
struct anonstruct_GLOBAL_OPTIONS_66__ {
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
   struct anonstruct_option_67__ option ;
};
typedef struct anonstruct_GLOBAL_OPTIONS_66__ GLOBAL_OPTIONS;
struct anonstruct_option_68__ {
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
   struct anonstruct_option_68__ option ;
};
typedef struct local_options LOCAL_OPTIONS;
enum anonenum_VAL_TYPE_69__ {
    TYPE_NONE = 0, 
    TYPE_FLAG = 1, 
    TYPE_INT = 2, 
    TYPE_LINGER = 3, 
    TYPE_TIMEVAL = 4, 
    TYPE_STRING = 5,  };
typedef enum anonenum_VAL_TYPE_69__ VAL_TYPE;
union anonunion_OPT_UNION_70__ {
   int i_val ;
   long l_val ;
   char c_val[16] ;
   struct linger linger_val ;
   struct timeval timeval_val ;
};
typedef union anonunion_OPT_UNION_70__ OPT_UNION;
struct anonstruct_SOCK_OPT_71__ {
   char *opt_str ;
   int opt_level ;
   int opt_name ;
   VAL_TYPE opt_type ;
   OPT_UNION *opt_val[3] ;
};
typedef struct anonstruct_SOCK_OPT_71__ SOCK_OPT;
struct anonstruct_FD_72__ {
   int fd ;
   int rd ;
   int wr ;
   int is_socket ;
};
typedef struct anonstruct_FD_72__ FD;
struct anonstruct_CLI_73__ {
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
typedef struct anonstruct_CLI_73__ CLI;
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
enum anonenum_CMD_74__ {
    CMD_INIT = 0, 
    CMD_EXEC = 1, 
    CMD_DEFAULT = 2, 
    CMD_HELP = 3,  };
typedef enum anonenum_CMD_74__ CMD;
struct anonstruct_facilitylevel_75__ {
   char *name ;
   int value ;
};
typedef struct anonstruct_facilitylevel_75__ facilitylevel;
struct anonstruct_ssl_opts_76__ {
   char *name ;
   long value ;
};
union anonunion___u_74__ {
   int in__ ;
   int i__ ;
};
union anonunion___u_75__ {
   int in__ ;
   int i__ ;
};
union anonunion___u_76__ {
   int in__ ;
   int i__ ;
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
extern void *ptrof_nocheck__(void *ptr ) ;
extern void *endof__(void *ptr ) ;
extern void *ptrof__(void *ptr ) ;
extern void verify_nul__(char const   *ptr ) ;
extern char *stringof__(char const   *ptr ) ;
extern void *mkptr__(void *p , void *phome ) ;
extern void *mkptr_size__(void *p , unsigned int len ) ;
extern char *mkptr_string__(char *p ) ;
extern void *trusted_cast__(void *p ) ;
extern void *trusted_deepcast__(void *p ) ;
extern int ccured_has_empty_mangling__(unsigned int  ) ;
extern time_t time(time_t *timer__ ) ;
extern int select(int nfds__ , fd_set * readfds__ ,
                  fd_set * writefds__ ,
                  fd_set * exceptfds__ ,
                  struct timeval * timeout__ ) ;
FILE *get_stderr(void) ;
extern void *malloc(size_t size__ ) ;
FILE *get_stderr(void) 
{ FILE *f ;

  {
  {
  f = (FILE *)malloc(sizeof(FILE ));
  f->BLAST_FLAG__ = 1;
  }
  return (f);
}
}
int fclose(FILE *stream__ ) ;
int fclose(FILE *stream__ ) 
{ 

  {
  }
  return (0);
}

extern int fflush(FILE *stream__ ) ;
FILE *fopen(char const   * filename__ ,
            char const   * modes__ ) ;
FILE *fopen(char const   * filename__ ,
            char const   * modes__ ) 
{ FILE *f ;
  FILE *tmp ;

  {
  {
  tmp = (FILE *)malloc(sizeof(FILE ));
  f = tmp;
  f->BLAST_FLAG__ = 1;
  }
  return (f);
}
}
FILE *fdopen(int fd__ , char const   *modes__ ) ;
FILE *fdopen(int fd__ , char const   *modes__ ) 
{ FILE *f ;
  FILE *tmp ;

  {
  {
  tmp = (FILE *)malloc(sizeof(FILE ));
  f = tmp;
  f->BLAST_FLAG__ = 1;
  }
  return (f);
}
}
int fprintf(FILE * stream__ , char const   * format__ 
            , ...) ;
int fprintf(FILE * stream__ , char const   * format__ 
            , ...) 
{ 

  {
}
}
extern int sprintf(char * s__ , char const   * format__ 
                   , ...) ;
extern int snprintf(char * s__ , size_t maxlen__ ,
                    char const   * format__  , ...) ;
extern int vsnprintf(char * s__ , size_t maxlen__ ,
                     char const   * format__ , gnuc_va_list__ arg__ ) ;
extern int sscanf(char const   * s__ ,
                  char const   * format__  , ...) ;
extern char *fgets(char * s__ , int n__ ,
                   FILE * stream__ ) ;
extern void perror(char const   *s__ ) ;
extern void ccured_va_start__(ccured_va_list__  , unsigned long  ) ;
extern void ccured_va_end__(ccured_va_list__  ) ;
extern int (   GCC_STDARG_START)() ;
void perror_wrapper(char const   *s ) 
{ char const   *tmp ;

  {
  {
  tmp = (char const   *)stringof__(s);
  perror(tmp);
  }
  return;
}
}
extern int *errno_location__(void) ;
extern int atoi(char const   *nptr__ ) ;
extern void *calloc(size_t nmemb__ , size_t size__ ) ;
extern void *realloc(void *ptr__ , size_t size__ ) ;
extern void free(void *ptr__ ) ;
extern int atexit(void (*func__)(void) ) ;
void exit(int status__ ) ;
void exit(int status__ ) ;
void exit(int status__ ) 
{ 

  {
  EXIT: 
  goto EXIT;
}
}
extern int putenv(char *string__ ) ;
void *realloc_wrapper(void *b , int sz ) 
{ void *res ;
  void *tmp ;
  void *tmp_0__ ;
  void *result ;

  {
  {
  tmp = (void *)ptrof__(b);
  tmp_0__ = realloc(tmp, (unsigned int )sz);
  res = tmp_0__;
  result = b;
  result = mkptr_size__((void *)res,
                        (unsigned int )sz);
  }
  return (result);
}
}
extern void free_wrapper(void *x ) 
{ void *tmp ;

  {
  {
  tmp = (void *)ptrof__(x);
  free(tmp);
  }
  return;
}
}
static void *qsort_base__  ;
static int (*qsort_compare__)(void * , void * )  ;
static void *bsearch_base__  ;
static void *bsearch_key__  ;
static int (*bsearch_compare__)(void * , void * )  ;
extern void *memcpy(void * dest__ ,
                    void const   * src__ , size_t n__ ) ;
extern void *memmove(void *dest__ , void const   *src__ , size_t n__ ) ;
extern void *memset(void *s__ , int c__ , size_t n__ ) ;
extern char *strcpy(char * dest__ ,
                    char const   * src__ ) ;
extern char *strncpy(char * dest__ ,
                     char const   * src__ , size_t n__ ) ;
extern char *strncat(char * dest__ ,
                     char const   * src__ , size_t n__ ) ;
extern int strcmp(char const   *s1__ , char const   *s2__ ) ;
extern char *strchr(char const   *s__ , int c__ ) ;
extern char *strrchr(char const   *s__ , int c__ ) ;
extern char *strtok(char * s__ , char const   * delim__ ) ;
extern size_t strlen(char const   *s__ ) ;
extern char *strerror(int errnum__ ) ;
extern int strcasecmp(char const   *s1__ , char const   *s2__ ) ;
extern int strncasecmp(char const   *s1__ , char const   *s2__ , size_t n__ ) ;
char *strrchr_wrapper(char const   *s , int chr ) 
{ char *result ;
  char *tmp ;
  char *tmp_0__ ;

  {
  {
  tmp = stringof__(s);
  result = strrchr((char const   *)tmp, chr);
  tmp_0__ = (char *)mkptr__((void *)((void *)result),
                            (void *)s);
  }
  return (tmp_0__);
}
}
int strcasecmp_wrapper(char const   *s1 , char const   *s2 ) 
{ char *tmp ;
  char *tmp_0__ ;
  int tmp_1__ ;

  {
  {
  tmp = stringof__(s2);
  tmp_0__ = stringof__(s1);
  tmp_1__ = strcasecmp((char const   *)tmp_0__, (char const   *)tmp);
  }
  return (tmp_1__);
}
}
int strncasecmp_wrapper(char const   *s1 , char const   *s2 , unsigned int n ) 
{ void *tmp ;
  void *tmp_0__ ;
  void *tmp_1__ ;
  void *tmp_2__ ;
  char *tmp_3__ ;
  char *tmp_4__ ;
  int tmp_5__ ;

  {
  {
  tmp = endof__((void *)s1);
  tmp_0__ = ptrof_nocheck__((void *)s1);
  }
  if ((unsigned int )tmp - (unsigned int )tmp_0__ < n) {
    {
    verify_nul__(s1);
    }
  }
  {
  tmp_1__ = endof__((void *)s2);
  tmp_2__ = ptrof_nocheck__((void *)s2);
  }
  if ((unsigned int )tmp_1__ - (unsigned int )tmp_2__ < n) {
    {
    verify_nul__(s2);
    }
  }
  {
  tmp_3__ = (char *)ptrof__((void *)s2);
  tmp_4__ = (char *)ptrof__((void *)s1);
  tmp_5__ = strncasecmp((char const   *)tmp_4__, (char const   *)tmp_3__, n);
  }
  return (tmp_5__);
}
}
static char const   *saved_str;
extern int _getctype_b__(int  ) ;
extern int tolower(int c__ ) ;
extern struct tm *localtime_r(time_t const   * timer__ ,
                              struct tm * tp__ ) ;
extern int xstat__(int ver__ , char const   *filename__ ,
                   struct stat *stat_buf__ ) ;
__inline static int statext__inline(char const   *path__ ,
                                    struct stat *statbuf__ ) 
{ int tmp ;

  {
  {
  tmp = xstat__(3, path__, statbuf__);
  }
  return (tmp);
}
}
extern void closelog(void) ;
extern void openlog(char const   *ident__ , int option__ , int facility__ ) ;
extern void syslog(int pri__ , char const   *fmt__  , ...) ;
extern sighandler_t__ signal(int sig__ , void (*handler__)(int  ) ) ;
extern int sigemptyset(sigset_t *set__ ) ;
extern int sigaddset(sigset_t *set__ , int signo__ ) ;
extern int sigprocmask(int how__ , sigset_t const   * set__ ,
                       sigset_t * oset__ ) ;
extern int pthread_sigmask(int how__ ,
                           sigset_t__ const   * newmask__ ,
                           sigset_t__ * oldmask__ ) ;
__inline static void *mkfat_sighandler__(void *in ) 
{ void *tmp ;
  void *tmp_0__ ;

  {
  if ((int )in == 1) {
    {
    tmp = mkptr__((void *)in, (void *)0);
    }
    return (tmp);
  } else {
    {
    tmp_0__ = mkptr_size__((void *)in, 1);
    }
    return (tmp_0__);
  }
}
}
extern void deepcopy_sigaction_from_compat__(struct sigaction *fat ,
                                             struct sigaction *compat ) 
{ 

  {
  {
  fat->sa_handler = (void (*)(int  ))mkfat_sighandler__((void *)compat->sa_handler);
  fat->sa_restorer = (void (*)(void))mkfat_sighandler__((void *)compat->sa_restorer);
  }
  return;
}
}
extern pid_t__ waitpid(pid_t__ pid__ , int *stat_loc__ , int options__ ) ;
extern int close(int fd__ ) ;
extern ssize_t read(int fd__ , void *buf__ , size_t nbytes__ ) ;
extern ssize_t write(int fd__ , void const   *buf__ , size_t n__ ) ;
extern int pipe(int *pipedes__ ) ;
extern unsigned int sleep(unsigned int seconds__ ) ;
extern int chdir(char const   *path__ ) ;
extern int dup2(int fd__ , int fd2__ ) ;
extern int execvp(char const   *file__ , char * const  *argv__ ) ;
extern void _exit(int status__ ) ;
extern long sysconf(int name__ ) ;
extern pid_t__ getpid(void) ;
extern pid_t__ setsid(void) ;
extern int setuid(uid_t__ uid__ ) ;
extern int setgid(gid_t__ gid__ ) ;
extern pid_t__ fork(void) ;
extern int unlink(char const   *name__ ) ;
extern int daemon(int nochdir__ , int noclose__ ) ;
extern int chroot(char const   *path__ ) ;
__inline static char **deepcopy_stringarray_from_compat__(char **array_in ) 
{ int num_strings ;
  int i ;
  char **new_array ;
  char **p ;
  void *tmp ;
  char **tmp_0__ ;
  int tmp_2__ ;
  void *tmp_3__ ;
  void *tmp_5__ ;

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
    tmp_3__ = trusted_cast__((void *)((unsigned long )p +
                                      (unsigned long )(1 * sizeof((*p)))));
    p = (char **)((char **)tmp_3__);
    num_strings ++;
    }
  }
  {
  num_strings ++;
  tmp_2__ = ccured_has_empty_mangling__(sizeof((*new_array)));
  }
  if (tmp_2__) {
    {
    tmp = trusted_deepcast__((void *)((void *)array_in));
    tmp_0__ = (char **)mkptr_size__(tmp, (unsigned int )num_strings *
                                         sizeof((*(new_array + 0))));
    }
    return (tmp_0__);
  } else {
    {
    new_array = (char **)wrapperAlloc((unsigned int )num_strings *
                                      sizeof((*(new_array + 0))));
    i = 0;
    }
    while (i < num_strings) {
      {
      tmp_5__ = trusted_cast__((void *)((unsigned long )array_in +
                                        (unsigned long )((unsigned int )i *
                                                         sizeof((*array_in)))));
      p = (char **)((char **)tmp_5__);
      (*(new_array + i)) = mkptr_string__((*p));
      i ++;
      }
    }
  }
  return (new_array);
}
}
extern struct passwd *getpwnam(char const   *name__ ) ;
extern void deepcopy_passwd_from_compat__(struct passwd *fat ,
                                          struct passwd *compat ) 
{ 

  {
  {
  fat->pw_name = mkptr_string__((char *)compat->pw_name);
  fat->pw_passwd = mkptr_string__((char *)compat->pw_passwd);
  fat->pw_gecos = mkptr_string__((char *)compat->pw_gecos);
  fat->pw_dir = mkptr_string__((char *)compat->pw_dir);
  fat->pw_shell = mkptr_string__((char *)compat->pw_shell);
  }
  return;
}
}
static struct passwd my_passwd_result  ;
extern struct group *getgrnam(char const   *name__ ) ;
extern int setgroups(size_t n__ , gid_t__ const   *groups__ ) ;
extern void deepcopy_group_from_compat__(struct group *fat ,
                                         struct group *compat ) 
{ 

  {
  {
  fat->gr_name = mkptr_string__((char *)compat->gr_name);
  fat->gr_passwd = mkptr_string__((char *)compat->gr_passwd);
  fat->gr_mem = deepcopy_stringarray_from_compat__((char **)((char **)compat->gr_mem));
  }
  return;
}
}
static struct group my_group_result  ;
extern int fcntl(int fd__ , int cmd__  , ...) ;
extern int open(char const   *file , int flag  , ...) ;
extern int socket(int domain__ , int type__ , int protocol__ ) ;
extern int bind(int fd__ , void const   *addr__ , socklen_t len__ ) ;
extern int getsockname(int fd__ , void * addr__ ,
                       socklen_t * len__ ) ;
extern int connect(int fd__ , void const   *addr__ , socklen_t len__ ) ;
extern int getpeername(int fd__ , void * addr__ ,
                       socklen_t * len__ ) ;
extern int getsockopt(int fd__ , int level__ , int optname__ ,
                      void * optval__ ,
                      socklen_t * optlen__ ) ;
extern int setsockopt(int fd__ , int level__ , int optname__ ,
                      void const   *optval__ , socklen_t optlen__ ) ;
extern int listen(int fd__ , int n__ ) ;
extern int accept(int fd__ , void * addr__ ,
                  socklen_t * addr_len__ ) ;
extern int shutdown(int fd__ , int how__ ) ;
extern in_addr_t inet_addr(char const   *cp__ ) ;
extern char *inet_ntoa(struct in_addr in__ ) ;
char *inet_ntoa_wrapper(struct in_addr in__ ) 
{ char *tmp ;
  char *tmp_0__ ;

  {
  {
  tmp = (char *)inet_ntoa(in__);
  tmp_0__ = mkptr_string__(tmp);
  }
  return (tmp_0__);
}
}
extern void endhostent(void) ;
extern struct hostent *gethostbyname(char const   *name__ ) ;
extern struct servent *getservbyname(char const   *name__ ,
                                     char const   *proto__ ) ;
extern char const   *gai_strerror(int ecode__ ) ;
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
  char const   *tmp_0__ ;
  struct addrinfo *newNode ;
  struct addrinfo *tmp_1__ ;
  void * tmp_3__ ;
  size_t tmp_4__ ;
  void * tmp_6__ ;

  {
  {
  dest = (struct addrinfo *)((void *)0);
  libc_hints.ai_flags = hints->ai_flags;
  libc_hints.ai_family = hints->ai_family;
  libc_hints.ai_socktype = hints->ai_socktype;
  libc_hints.ai_protocol = hints->ai_protocol;
  libc_hints.ai_addrlen = hints->ai_addrlen;
  libc_hints.ai_addr = (struct sockaddr *)ptrof__((void *)hints->ai_addr);
  libc_hints.ai_canonname = (char *)ptrof__((void *)hints->ai_canonname);
  libc_hints.ai_next = (struct libc_addrinfo *)((void *)0);
  tmp = (char const   *)ptrof__((void *)service);
  tmp_0__ = (char const   *)ptrof__((void *)node);
  ret = true_getaddrinfo(tmp_0__, tmp,
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
    tmp_1__ = (struct addrinfo *)wrapperAlloc(sizeof((*dest)));
    newNode = tmp_1__;
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
    tmp_3__ = (void *)ptrof__((void *)dest->ai_addr);
    memcpy(tmp_3__,
           (void const   *)((void const   *)source->ai_addr),
           (unsigned int )len);
    }
    if (source->ai_canonname) {
      {
      tmp_4__ = strlen((char const   *)source->ai_canonname);
      len = (int )(tmp_4__ + 1);
      dest->ai_canonname = (char *)wrapperAlloc((unsigned int )len);
      tmp_6__ = (void *)ptrof__((void *)dest->ai_canonname);
      memcpy(tmp_6__,
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
  char const   *tmp_0__ ;

  {
  {
  tmp = (char *)gai_strerror(code);
  tmp_0__ = (char const   *)mkptr_string__(tmp);
  }
  return (tmp_0__);
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
  int tmp_0__ ;
  int tmp_1__ ;
  int tmp_2__ ;
  int tmp_3__ ;
  int tmp_4__ ;
  char const   *tmp_5__ ;

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
    tmp_2__ = init_remote(c);
    }
    if (tmp_2__) {
      return (-1);
    }
    {
    tmp_3__ = negotiate(c);
    }
    if (tmp_3__ < 0) {
      {
      log(3, (char const   *)"Protocol negotiations failed");
      }
      return (-1);
    }
    {
    tmp_4__ = init_ssl(c);
    }
    if (tmp_4__) {
      return (-1);
    }
  } else {
    if ((c->opt)->protocol) {
      goto _L;
    } else {
      {
      tmp_0__ = init_ssl(c);
      }
      if (tmp_0__) {
        return (-1);
      }
      {
      tmp_1__ = init_remote(c);
      }
      if (tmp_1__) {
        return (-1);
      }
    }
  }
  {
  result = transfer(c);
  }
  if (result) {
    {
    tmp_5__ = (char const   *)"reset";
    }
  } else {
    {
    tmp_5__ = (char const   *)"closed";
    }
  }
  {
  log(5,
      (char const   *)"Connection %s: %d bytes sent to SSL, %d bytes sent to socket",
      tmp_5__, c->ssl_bytes, c->sock_bytes);
  }
  return (result);
}
}
static int init_local(CLI *c ) 
{ int addrlen ;
  int *tmp ;
  int tmp_0__ ;
  int tmp_1__ ;
  register unsigned short v__ ;
  register unsigned short x__ ;
  int tmp_2__ ;
  int tmp_3__ ;
  register unsigned short v___0__ ;
  register unsigned short x___0__ ;
  int tmp_4__ ;
  int tmp_5__ ;

  {
  {
  addrlen = (int )sizeof(c->addr);
  tmp_5__ = getpeername(c->local_rfd.fd,
                        (void *)((void *)((struct sockaddr *)(& c->addr))),
                        (socklen_t *)((socklen_t *)(& addrlen)));
  }
  if (tmp_5__ < 0) {
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
      tmp = errno_location__();
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
    tmp_0__ = set_socket_options(c->local_rfd.fd, 1);
    }
    if (tmp_0__ < 0) {
      return (-1);
    }
    {
    tmp_1__ = auth_libwrap(c);
    }
    if (tmp_1__ < 0) {
      return (-1);
    }
    {
    tmp_3__ = auth_user(c);
    }
    if (tmp_3__ < 0) {
      {
      x__ = c->addr.sin_port;
      tmp_2__ = ((int )x__);
      }
      if (tmp_2__) {
        {
        v__ = (unsigned short )((((int )x__ >> 8) & 255) |
                                (((int )x__ & 255) << 8));
        }
      } else {
        {
        __asm__  ("rorw $8, %w0": "=r" (v__): "0" (x__): "cc");
        }
      }
      {
      log(4, (char const   *)"Connection from %s:%d REFUSED by IDENT",
          c->accepting_address, v__);
      }
      return (-1);
    }
    {
    x___0__ = c->addr.sin_port;
    tmp_4__ = ((int )x___0__);
    }
    if (tmp_4__) {
      {
      v___0__ = (unsigned short )((((int )x___0__ >> 8) & 255) |
                                  (((int )x___0__ & 255) << 8));
      }
    } else {
      {
      __asm__  ("rorw $8, %w0": "=r" (v___0__): "0" (x___0__): "cc");
      }
    }
    {
    log(5, (char const   *)"%s connected from %s:%d", (c->opt)->servname,
        c->accepting_address, v___0__);
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
  int tmp_0__ ;
  int tmp_1__ ;
  int tmp_2__ ;
  int *tmp_3__ ;

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
      tmp_0__ = SSL_set_session(c->ssl, ctx->session_cache_head);
      }
      if (! tmp_0__) {
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
      tmp_1__ = waitforsocket((c->ssl_rfd)->fd, 0, (c->opt)->timeout_busy);
      }
      if (tmp_1__ == 1) {
        continue;
      }
      return (-1);
    }
    if (err == 3) {
      {
      tmp_2__ = waitforsocket((c->ssl_wfd)->fd, 1, (c->opt)->timeout_busy);
      }
      if (tmp_2__ == 1) {
        continue;
      }
      return (-1);
    }
    if (err == 5) {
      {
      tmp_3__ = errno_location__();
      }
      switch ((*tmp_3__)) {
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
  unsigned int i__ ;
  fd_set *arr__ ;
  int tmp ;
  unsigned int i___0__ ;
  fd_set *arr___0__ ;
  int tmp_0__ ;
  int tmp_1__ ;
  int tmp_2__ ;
  int tmp_3__ ;
  int *tmp_4__ ;
  int *tmp_5__ ;
  int tmp_6__ ;
  int *tmp_7__ ;
  int *tmp_8__ ;
  int tmp_9__ ;
  int tmp_10__ ;

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
      goto _L_12__;
    } else {
      if (c->sock_ptr) {
        _L_12__: 
        if (! (c->ssl_wfd)->wr) {
          goto _L_11__;
        }
      } else {
        _L_11__: 
        if ((c->ssl_rfd)->rd) {
          goto _L_10__;
        } else {
          if (c->ssl_ptr) {
            _L_10__: 
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
      arr__ = & rd_set;
      i__ = 0;
      }
      while (i__ < sizeof(fd_set ) / sizeof(fd_mask__ )) {
        {
        arr__->fds_bits__[i__] = 0;
        i__ ++;
        }
      }
      break;
    }
    if ((c->sock_rfd)->rd) {
      if (c->sock_ptr < 16384) {
        {
        rd_set.fds_bits__[(unsigned int )(c->sock_rfd)->fd /
                          (8 * sizeof(fd_mask__ ))] |= 1 <<
                                                        (unsigned int )(c->sock_rfd)->fd %
                                                        (8 * sizeof(fd_mask__ ));
        }
      }
    }
    if ((c->ssl_rfd)->rd) {
      if (c->ssl_ptr < 16384) {
        {
        rd_set.fds_bits__[(unsigned int )(c->ssl_rfd)->fd /
                          (8 * sizeof(fd_mask__ ))] |= 1 <<
                                                        (unsigned int )(c->ssl_rfd)->fd %
                                                        (8 * sizeof(fd_mask__ ));
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
              rd_set.fds_bits__[(unsigned int )(c->ssl_rfd)->fd /
                                (8 * sizeof(fd_mask__ ))] |= 1 <<
                                                              (unsigned int )(c->ssl_rfd)->fd %
                                                              (8 *
                                                               sizeof(fd_mask__ ));
              }
            }
          }
        }
      }
    }
    while (1) {
      {
      arr___0__ = & wr_set;
      i___0__ = 0;
      }
      while (i___0__ < sizeof(fd_set ) / sizeof(fd_mask__ )) {
        {
        arr___0__->fds_bits__[i___0__] = 0;
        i___0__ ++;
        }
      }
      break;
    }
    if ((c->sock_wfd)->wr) {
      if (c->ssl_ptr) {
        {
        wr_set.fds_bits__[(unsigned int )(c->sock_wfd)->fd /
                          (8 * sizeof(fd_mask__ ))] |= 1 <<
                                                        (unsigned int )(c->sock_wfd)->fd %
                                                        (8 * sizeof(fd_mask__ ));
        }
      }
    }
    if ((c->ssl_wfd)->wr) {
      if (c->sock_ptr) {
        {
        wr_set.fds_bits__[(unsigned int )(c->ssl_wfd)->fd /
                          (8 * sizeof(fd_mask__ ))] |= 1 <<
                                                        (unsigned int )(c->ssl_wfd)->fd %
                                                        (8 * sizeof(fd_mask__ ));
        }
      } else {
        if (ssl_closing == 1) {
          {
          wr_set.fds_bits__[(unsigned int )(c->ssl_wfd)->fd /
                            (8 * sizeof(fd_mask__ ))] |= 1 <<
                                                          (unsigned int )(c->ssl_wfd)->fd %
                                                          (8 *
                                                           sizeof(fd_mask__ ));
          }
        } else {
          if (c->ssl_ptr < 16384) {
            goto _L_0__;
          } else {
            if (ssl_closing == 2) {
              _L_0__: 
              {
              tmp_0__ = SSL_want(c->ssl);
              }
              if (tmp_0__ == 2) {
                {
                wr_set.fds_bits__[(unsigned int )(c->ssl_wfd)->fd /
                                  (8 * sizeof(fd_mask__ ))] |= 1 <<
                                                                (unsigned int )(c->ssl_wfd)->fd %
                                                                (8 *
                                                                 sizeof(fd_mask__ ));
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
          goto _L_1__;
        }
      } else {
        _L_1__: 
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
      goto _L_3__;
    } else {
      if (ssl_closing == 2) {
        {
        tmp_2__ = SSL_want(c->ssl);
        }
        if (tmp_2__ == 3) {
          if (rd_set.fds_bits__[(unsigned int )(c->ssl_rfd)->fd /
                                (8 * sizeof(fd_mask__ ))] &
              (1 << (unsigned int )(c->ssl_rfd)->fd % (8 * sizeof(fd_mask__ )))) {
            goto _L_3__;
          } else {
            goto _L_4__;
          }
        } else {
          _L_4__: 
          {
          tmp_3__ = SSL_want(c->ssl);
          }
          if (tmp_3__ == 2) {
            if (wr_set.fds_bits__[(unsigned int )(c->ssl_wfd)->fd /
                                  (8 * sizeof(fd_mask__ ))] &
                (1 << (unsigned int )(c->ssl_wfd)->fd %
                       (8 * sizeof(fd_mask__ )))) {
              _L_3__: 
              {
              tmp_1__ = SSL_shutdown(c->ssl);
              }
              switch (tmp_1__) {
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
      if (wr_set.fds_bits__[(unsigned int )(c->sock_wfd)->fd /
                            (8 * sizeof(fd_mask__ ))] &
          (1 << (unsigned int )(c->sock_wfd)->fd % (8 * sizeof(fd_mask__ )))) {
        {
        num = write((c->sock_wfd)->fd, (void const   *)(c->ssl_buff),
                    (unsigned int )c->ssl_ptr);
        }
        switch (num) {
        case 1986: 
        {
        tmp_4__ = errno_location__();
        }
        switch ((*tmp_4__)) {
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
        if (wr_set.fds_bits__[(unsigned int )(c->ssl_wfd)->fd /
                              (8 * sizeof(fd_mask__ ))] &
            (1 << (unsigned int )(c->ssl_wfd)->fd % (8 * sizeof(fd_mask__ )))) {
          goto _L_5__;
        } else {
          goto _L_6__;
        }
      } else {
        _L_6__: 
        {
        tmp_6__ = SSL_want(c->ssl);
        }
        if (tmp_6__ == 3) {
          if (rd_set.fds_bits__[(unsigned int )(c->ssl_rfd)->fd /
                                (8 * sizeof(fd_mask__ ))] &
              (1 << (unsigned int )(c->ssl_rfd)->fd % (8 * sizeof(fd_mask__ )))) {
            _L_5__: 
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
              tmp_5__ = errno_location__();
              }
              switch ((*tmp_5__)) {
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
      if (rd_set.fds_bits__[(unsigned int )(c->sock_rfd)->fd /
                            (8 * sizeof(fd_mask__ ))] &
          (1 << (unsigned int )(c->sock_rfd)->fd % (8 * sizeof(fd_mask__ )))) {
        {
        num = read((c->sock_rfd)->fd, (void *)(c->sock_buff + c->sock_ptr),
                   (unsigned int )(16384 - c->sock_ptr));
        }
        switch (num) {
        case 1986: 
        {
        tmp_7__ = errno_location__();
        }
        switch ((*tmp_7__)) {
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
        if (rd_set.fds_bits__[(unsigned int )(c->ssl_rfd)->fd /
                              (8 * sizeof(fd_mask__ ))] &
            (1 << (unsigned int )(c->ssl_rfd)->fd % (8 * sizeof(fd_mask__ )))) {
          goto _L_7__;
        } else {
          goto _L_9__;
        }
      } else {
        _L_9__: 
        {
        tmp_9__ = SSL_want(c->ssl);
        }
        if (tmp_9__ == 2) {
          if (wr_set.fds_bits__[(unsigned int )(c->ssl_wfd)->fd /
                                (8 * sizeof(fd_mask__ ))] &
              (1 << (unsigned int )(c->ssl_wfd)->fd % (8 * sizeof(fd_mask__ )))) {
            goto _L_7__;
          } else {
            goto _L_8__;
          }
        } else {
          _L_8__: 
          if (check_SSL_pending) {
            {
            tmp_10__ = SSL_pending(c->ssl);
            }
            if (tmp_10__) {
              _L_7__: 
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
                tmp_8__ = errno_location__();
                }
                switch ((*tmp_8__)) {
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
  register unsigned short v__ ;
  register unsigned short x__ ;
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
    x__ = c->addr.sin_port;
    tmp = ((int )x__);
    }
    if (tmp) {
      {
      v__ = (unsigned short )((((int )x__ >> 8) & 255) |
                              (((int )x__ & 255) << 8));
      }
    } else {
      {
      __asm__  ("rorw $8, %w0": "=r" (v__): "0" (x__): "cc");
      }
    }
    {
    log(4, (char const   *)"Connection from %s:%d REFUSED by libwrap",
        c->accepting_address, v__);
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
  int retval_0__ ;
  register unsigned short v__ ;
  register unsigned short x__ ;
  int tmp ;
  int *tmp_0__ ;
  int tmp_1__ ;
  int *tmp_2__ ;
  int tmp_3__ ;
  int tmp_4__ ;
  register unsigned short v___0__ ;
  register unsigned short x___0__ ;
  int tmp_5__ ;
  register unsigned short v___1__ ;
  register unsigned short x___1__ ;
  int tmp_6__ ;
  int tmp_7__ ;
  int tmp_8__ ;
  int tmp_10__ ;
  char *p ;
  int tmp_11__ ;

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
    x__ = (unsigned short )113;
    tmp = ((int )x__);
    }
    if (tmp) {
      {
      v__ = (unsigned short )((((int )x__ >> 8) & 255) |
                              (((int )x__ & 255) << 8));
      }
    } else {
      {
      __asm__  ("rorw $8, %w0": "=r" (v__): "0" (x__): "cc");
      }
    }
    {
    ident.sin_port = v__;
    }
  }
  {
  tmp_4__ = connect(fd, (void const   *)((struct sockaddr *)(& ident)),
                    sizeof(ident));
  }
  if (tmp_4__ < 0) {
    {
    tmp_0__ = errno_location__();
    }
    switch ((*tmp_0__)) {
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
    tmp_1__ = waitforsocket(fd, 1, (c->opt)->timeout_busy);
    }
    if (tmp_1__ < 1) {
      {
      close(fd);
      }
      return (-1);
    }
    {
    tmp_3__ = connect(fd, (void const   *)((struct sockaddr *)(& ident)),
                      sizeof(ident));
    }
    if (tmp_3__ < 0) {
      {
      tmp_2__ = errno_location__();
      }
      switch ((*tmp_2__)) {
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
  x___0__ = (c->opt)->localport;
  tmp_5__ = ((int )x___0__);
  }
  if (tmp_5__) {
    {
    v___0__ = (unsigned short )((((int )x___0__ >> 8) & 255) |
                                (((int )x___0__ & 255) << 8));
    }
  } else {
    {
    __asm__  ("rorw $8, %w0": "=r" (v___0__): "0" (x___0__): "cc");
    }
  }
  {
  x___1__ = c->addr.sin_port;
  tmp_6__ = ((int )x___1__);
  }
  if (tmp_6__) {
    {
    v___1__ = (unsigned short )((((int )x___1__ >> 8) & 255) |
                                (((int )x___1__ & 255) << 8));
    }
  } else {
    {
    __asm__  ("rorw $8, %w0": "=r" (v___1__): "0" (x___1__): "cc");
    }
  }
  {
  tmp_7__ = fdprintf(c, fd, (char const   *)"%u , %u", v___1__, v___0__);
  }
  if (tmp_7__ < 0) {
    {
    sockerror("fdprintf (auth_user)");
    close(fd);
    }
    return (-1);
  }
  {
  tmp_8__ = fdscanf(c, fd, (char const   *)"%*[^:]: USERID :%*[^:]:%s", name);
  }
  if (tmp_8__ != 1) {
    {
    log(3, (char const   *)"Incorrect data from IDENT server");
    close(fd);
    }
    return (-1);
  }
  {
  close(fd);
  tmp_10__ = strcmp((char const   *)(name), (char const   *)(c->opt)->username);
  }
  if (tmp_10__) {
    {
    retval_0__ = -1;
    }
  } else {
    {
    retval_0__ = 0;
    }
  }
  while (1) {
    {
    p = name;
    }
    while ((*p)) {
      {
      tmp_11__ = _getctype_b__((int )(*p));
      }
      if (! (tmp_11__ & 16384)) {
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
  return (retval_0__);
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
  int tmp_0__ ;
  size_t tmp_1__ ;
  X509_NAME *tmp_2__ ;
  char *p ;
  int tmp_3__ ;
  size_t tmp_4__ ;
  X509_NAME *tmp_5__ ;
  char *p_0__ ;
  int tmp_6__ ;
  size_t tmp_7__ ;

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
    tmp_0__ = make_sockets(fd);
    }
    if (tmp_0__) {
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
  tmp_1__ = strlen((char const   *)(env[0]));
  strncat((char *)(env[0]),
          (char const   *)((char const   *)(c->accepting_address)),
          (1024 - tmp_1__) - 1);
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
      tmp_2__ = X509_get_subject_name(peer);
      X509_NAME_oneline(tmp_2__, name, 1024);
      }
      while (1) {
        {
        p = name;
        }
        while ((*p)) {
          {
          tmp_3__ = _getctype_b__((int )(*p));
          }
          if (! (tmp_3__ & 16384)) {
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
      tmp_4__ = strlen((char const   *)(env[1]));
      strncat((char *)(env[1]),
              (char const   *)((char const   *)(name)),
              (1024 - tmp_4__) - 1);
      putenv(env[1]);
      env[2][1023] = '\0';
      strncpy((char *)(env[2]),
              (char const   *)((char const   *)"SSL_CLIENT_I_DN="),
              1023);
      tmp_5__ = X509_get_issuer_name(peer);
      X509_NAME_oneline(tmp_5__, name, 1024);
      }
      while (1) {
        {
        p_0__ = name;
        }
        while ((*p_0__)) {
          {
          tmp_6__ = _getctype_b__((int )(*p_0__));
          }
          if (! (tmp_6__ & 16384)) {
            {
            (*p_0__) = '.';
            }
          }
          {
          p_0__ ++;
          }
        }
        break;
      }
      {
      env[2][1023] = '\0';
      tmp_7__ = strlen((char const   *)(env[2]));
      strncat((char *)(env[2]),
              (char const   *)((char const   *)(name)),
              (1024 - tmp_7__) - 1);
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
  register unsigned int v__ ;
  register unsigned int x__ ;
  int tmp ;
  int *tmp_0__ ;
  int tmp_1__ ;
  int *tmp_2__ ;
  int tmp_3__ ;
  int tmp_4__ ;
  int tmp_5__ ;
  int tmp_6__ ;

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
  x__ = 2130706433;
  tmp = ((int )x__);
  }
  if (tmp) {
    {
    v__ = ((((x__ & 4278190080) >> 24) | ((x__ & 16711680) >> 8)) |
           ((x__ & 65280) << 8)) | ((x__ & 255) << 24);
    }
  } else {
    {
    __asm__  ("rorw $8, %w0;"
              "rorl $16, %0;"
              "rorw $8, %w0": "=r" (v__): "0" (x__): "cc");
    }
  }
  {
  addr.sin_addr.s_addr = v__;
  addr.sin_port = (unsigned short )0;
  tmp_1__ = bind(s, (void const   *)((struct sockaddr *)(& addr)),
                 (unsigned int )addrlen);
  }
  if (tmp_1__) {
    {
    tmp_0__ = errno_location__();
    }
  }
  {
  tmp_3__ = bind((*(fd + 1)), (void const   *)((struct sockaddr *)(& addr)),
                 (unsigned int )addrlen);
  }
  if (tmp_3__) {
    {
    tmp_2__ = errno_location__();
    }
  }
  {
  tmp_4__ = listen(s, 5);
  }
  if (tmp_4__) {
    {
    sockerror("listen");
    }
    return (-1);
  }
  {
  tmp_5__ = getsockname(s,
                        (void *)((void *)((struct sockaddr *)(& addr))),
                        (socklen_t *)((socklen_t *)(& addrlen)));
  }
  if (tmp_5__) {
    {
    sockerror("getsockname");
    }
    return (-1);
  }
  {
  tmp_6__ = connect((*(fd + 1)), (void const   *)((struct sockaddr *)(& addr)),
                    (unsigned int )addrlen);
  }
  if (tmp_6__) {
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
  int tmp_0__ ;
  register unsigned short v__ ;
  register unsigned short x__ ;
  int tmp_1__ ;
  int tmp_2__ ;
  register unsigned short v___0__ ;
  register unsigned short x___0__ ;
  int tmp_3__ ;
  int tmp_4__ ;
  int *tmp_5__ ;
  char *tmp_6__ ;
  register unsigned short v___1__ ;
  register unsigned short x___1__ ;
  int tmp_7__ ;
  int tmp_8__ ;
  int tmp_9__ ;
  int *tmp_10__ ;
  char *tmp_11__ ;
  register unsigned short v___2__ ;
  register unsigned short x___2__ ;
  int tmp_12__ ;

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
    tmp_0__ = alloc_fd(s);
    }
    if (tmp_0__) {
      return (-1);
    }
    if (c->bind_ip) {
      {
      addr.sin_addr.s_addr = (unsigned int )c->bind_ip;
      x__ = (unsigned short )0;
      tmp_1__ = ((int )x__);
      }
      if (tmp_1__) {
        {
        v__ = (unsigned short )((((int )x__ >> 8) & 255) |
                                (((int )x__ & 255) << 8));
        }
      } else {
        {
        __asm__  ("rorw $8, %w0": "=r" (v__): "0" (x__): "cc");
        }
      }
      {
      addr.sin_port = v__;
      tmp_2__ = bind(s, (void const   *)((struct sockaddr *)(& addr)),
                     sizeof(addr));
      }
      if (tmp_2__ < 0) {
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
    x___0__ = addr.sin_port;
    tmp_3__ = ((int )x___0__);
    }
    if (tmp_3__) {
      {
      v___0__ = (unsigned short )((((int )x___0__ >> 8) & 255) |
                                  (((int )x___0__ & 255) << 8));
      }
    } else {
      {
      __asm__  ("rorw $8, %w0": "=r" (v___0__): "0" (x___0__): "cc");
      }
    }
    {
    log(7, (char const   *)"%s connecting %s:%d", (c->opt)->servname,
        c->connecting_address, v___0__);
    tmp_4__ = connect(s, (void const   *)((struct sockaddr *)(& addr)),
                      sizeof(addr));
    }
    if (! tmp_4__) {
      return (s);
    }
    {
    tmp_5__ = errno_location__();
    error = (*tmp_5__);
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
    tmp_6__ = my_strerror(error);
    x___1__ = addr.sin_port;
    tmp_7__ = ((int )x___1__);
    }
    if (tmp_7__) {
      {
      v___1__ = (unsigned short )((((int )x___1__ >> 8) & 255) |
                                  (((int )x___1__ & 255) << 8));
      }
    } else {
      {
      __asm__  ("rorw $8, %w0": "=r" (v___1__): "0" (x___1__): "cc");
      }
    }
    {
//        c->connecting_address, v___1__, tmp_6__, error);
    close(s);
    }
    goto Cont__;
    }
    {
    tmp_8__ = waitforsocket(s, 1, (c->opt)->timeout_busy);
    }
    if (tmp_8__ < 1) {
      {
      close(s);
      }
      goto Cont__;
    }
    {
    tmp_9__ = connect(s, (void const   *)((struct sockaddr *)(& addr)),
                      sizeof(addr));
    }
    if (! tmp_9__) {
      return (s);
    }
    {
    tmp_10__ = errno_location__();
    error = (*tmp_10__);
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
    tmp_11__ = my_strerror(error);
    x___2__ = addr.sin_port;
    tmp_12__ = ((int )x___2__);
    }
    if (tmp_12__) {
      {
      v___2__ = (unsigned short )((((int )x___2__ >> 8) & 255) |
                                  (((int )x___2__ & 255) << 8));
      }
    } else {
      {
      __asm__  ("rorw $8, %w0": "=r" (v___2__): "0" (x___2__): "cc");
      }
    }
    {
//        c->connecting_address, v___2__, tmp_11__, error);
    close(s);
    }
    goto Cont__;
    }
    Cont__: 
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
  int tmp_0__ ;

  {
  {
  l.l_onoff = 1;
  l.l_linger = 0;
  tmp_0__ = setsockopt(fd, 1, 13, (void const   *)((void *)(& l)), sizeof(l));
  }
  if (tmp_0__) {
    {
    tmp = errno_location__();
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
      outfile->BLAST_FLAG__ = 1;
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
    if (outfile->BLAST_FLAG__ == 1) {
      outfile->BLAST_FLAG__ = 0;
    } else {
      error____();
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
{ ccured_va_list__ arglist ;
  char text[1024] ;
  char timestamped[1024] ;
  FILE *out ;
  time_t gmt ;
  struct tm *timeptr ;
  struct tm timestruct ;
  unsigned long tmp ;
  unsigned long tmp_1__ ;
  unsigned long tmp_2__ ;

  {
  if (level > options.debug_level) {
    return;
  }
  {
  tmp = (unsigned long )GCC_STDARG_START();
  ccured_va_start__(arglist, tmp);
  vsnprintf((char *)(text), 1024,
            (char const   *)format, arglist);
  ccured_va_end__(arglist);
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
    out->BLAST_FLAG__ = 1;
    {

    }
    }

    }
  }
  {
  time(& gmt);
  timeptr = localtime_r((time_t const   *)((time_t const   *)(& gmt)),
                        (struct tm *)(& timestruct));
  tmp_1__ = stunnel_thread_id();
  tmp_2__ = stunnel_process_id();
  snprintf((char *)(timestamped), 1024,
           (char const   *)((char const   *)"%04d.%02d.%02d %02d:%02d:%02d LOG%d[%lu:%lu]: %s"),
           timeptr->tm_year + 1900, timeptr->tm_mon + 1, timeptr->tm_mday,
           timeptr->tm_hour, timeptr->tm_min, timeptr->tm_sec, level, tmp_2__,
           tmp_1__, text);
  {
  if (! (out->BLAST_FLAG__ == 1)) {
    error____();
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
{ ccured_va_list__ arglist ;
  char text[1024] ;
  FILE *out ;
  unsigned long tmp ;

  {
  {
  tmp = (unsigned long )GCC_STDARG_START();
  ccured_va_start__(arglist, tmp);
  vsnprintf((char *)(text), 1024,
            (char const   *)format, arglist);
  ccured_va_end__(arglist);
  }
  if (outfile) {
    {
    out = outfile;
    }
  } else {
    {
    out = get_stderr();
    {
    out->BLAST_FLAG__ = 1;
    {

    }
    }

    }
  }
  {

  {
  if (! (out->BLAST_FLAG__ == 1)) {
    error____();
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
  int tmp_0__ ;
  int tmp_1__ ;
  int tmp_2__ ;
  int tmp_3__ ;
  int tmp_4__ ;
  int tmp_5__ ;
  int tmp_6__ ;
  int tmp_7__ ;
  int tmp_8__ ;
  int tmp_9__ ;
  int tmp_10__ ;
  int tmp_11__ ;
  int tmp_12__ ;
  int tmp_13__ ;
  int tmp_14__ ;
  int tmp_15__ ;
  int tmp_16__ ;
  int tmp_17__ ;
  int tmp_18__ ;
  int tmp_19__ ;
  int tmp_20__ ;
  int tmp_21__ ;
  int tmp_22__ ;
  int tmp_23__ ;
  int tmp_24__ ;
  int tmp_25__ ;
  int tmp_26__ ;
  int tmp_27__ ;
  int tmp_28__ ;
  int tmp_29__ ;
  int tmp_30__ ;
  int tmp_31__ ;
  int tmp_32__ ;
  int tmp_33__ ;

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
  tmp_0__ = strcasecmp((char const   *)opt, (char const   *)"CAfile");
  }
  if (tmp_0__) {
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
  tmp_1__ = strcasecmp((char const   *)opt, (char const   *)"cert");
  }
  if (tmp_1__) {
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
  tmp_2__ = strcasecmp((char const   *)opt, (char const   *)"chroot");
  }
  if (tmp_2__) {
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
  tmp_3__ = strcasecmp((char const   *)opt, (char const   *)"ciphers");
  }
  if (tmp_3__) {
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
  tmp_4__ = strcasecmp((char const   *)opt, (char const   *)"client");
  }
  if (tmp_4__) {
    break;
  }
  {
  tmp_6__ = strcasecmp((char const   *)arg, (char const   *)"yes");
  }
  if (tmp_6__) {
    {
    tmp_5__ = strcasecmp((char const   *)arg, (char const   *)"no");
    }
    if (tmp_5__) {
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
  tmp_7__ = strcasecmp((char const   *)opt, (char const   *)"CRLpath");
  }
  if (tmp_7__) {
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
  tmp_8__ = strcasecmp((char const   *)opt, (char const   *)"CRLfile");
  }
  if (tmp_8__) {
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
  tmp_9__ = strcasecmp((char const   *)opt, (char const   *)"debug");
  }
  if (tmp_9__) {
    break;
  }
  {
  tmp_10__ = parse_debug_level(arg);
  }
  if (! tmp_10__) {
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
  tmp_11__ = strcasecmp((char const   *)opt, (char const   *)"EGD");
  }
  if (tmp_11__) {
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
  tmp_12__ = strcasecmp((char const   *)opt, (char const   *)"foreground");
  }
  if (tmp_12__) {
    break;
  }
  {
  tmp_14__ = strcasecmp((char const   *)arg, (char const   *)"yes");
  }
  if (tmp_14__) {
    {
    tmp_13__ = strcasecmp((char const   *)arg, (char const   *)"no");
    }
    if (tmp_13__) {
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
  tmp_15__ = strcasecmp((char const   *)opt, (char const   *)"key");
  }
  if (tmp_15__) {
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
  tmp_16__ = strcasecmp((char const   *)opt, (char const   *)"options");
  }
  if (tmp_16__) {
    break;
  }
  {
  tmp_17__ = parse_ssl_option(arg);
  }
  if (! tmp_17__) {
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
  tmp_18__ = strcasecmp((char const   *)opt, (char const   *)"output");
  }
  if (tmp_18__) {
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
  tmp_19__ = strcasecmp((char const   *)opt, (char const   *)"pid");
  }
  if (tmp_19__) {
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
  tmp_20__ = strcasecmp((char const   *)opt, (char const   *)"RNDbytes");
  }
  if (tmp_20__) {
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
  tmp_21__ = strcasecmp((char const   *)opt, (char const   *)"RNDfile");
  }
  if (tmp_21__) {
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
  tmp_22__ = strcasecmp((char const   *)opt, (char const   *)"RNDoverwrite");
  }
  if (tmp_22__) {
    break;
  }
  {
  tmp_24__ = strcasecmp((char const   *)arg, (char const   *)"yes");
  }
  if (tmp_24__) {
    {
    tmp_23__ = strcasecmp((char const   *)arg, (char const   *)"no");
    }
    if (tmp_23__) {
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
  tmp_25__ = strcasecmp((char const   *)opt, (char const   *)"service");
  }
  if (tmp_25__) {
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
  tmp_26__ = strcasecmp((char const   *)opt, (char const   *)"session");
  }
  if (tmp_26__) {
    break;
  }
  {
  tmp_27__ = atoi((char const   *)arg);
  }
  if (tmp_27__ > 0) {
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
  tmp_28__ = strcasecmp((char const   *)opt, (char const   *)"setgid");
  }
  if (tmp_28__) {
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
  tmp_29__ = strcasecmp((char const   *)opt, (char const   *)"setuid");
  }
  if (tmp_29__) {
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
  tmp_30__ = strcasecmp((char const   *)opt, (char const   *)"socket");
  }
  if (tmp_30__) {
    break;
  }
  {
  tmp_31__ = parse_socket_option(arg);
  }
  if (! tmp_31__) {
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
  tmp_32__ = strcasecmp((char const   *)opt, (char const   *)"verify");
  }
  if (tmp_32__) {
    break;
  }
  {
  options.verify_level = 0;
  tmp_33__ = atoi((char const   *)arg);
  }
  switch (tmp_33__) {
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
  int tmp_0__ ;
  int tmp_1__ ;
  int tmp_2__ ;
  int tmp_3__ ;
  int tmp_4__ ;
  int tmp_5__ ;
  int tmp_6__ ;
  int tmp_7__ ;
  int tmp_8__ ;
  int tmp_9__ ;
  int tmp_10__ ;
  int tmp_11__ ;
  int tmp_12__ ;
  int tmp_13__ ;
  int tmp_14__ ;
  int tmp_15__ ;
  int tmp_16__ ;
  int tmp_17__ ;
  int tmp_18__ ;
  int tmp_19__ ;
  int tmp_20__ ;
  int tmp_21__ ;
  int tmp_22__ ;
  int tmp_23__ ;
  int tmp_24__ ;

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
  tmp_0__ = name2nums(arg, "0.0.0.0", & section->localnames,
                      & section->localport);
  }
  if (! tmp_0__) {
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
  tmp_1__ = strcasecmp((char const   *)opt, (char const   *)"connect");
  }
  if (tmp_1__) {
    break;
  }
  {
  section->option.remote = 1;
  section->remote_address = stralloc(arg);
  }
  if (! section->option.delayed_lookup) {
    {
    tmp_2__ = name2nums(arg, "127.0.0.1", & section->remotenames,
                        & section->remoteport);
    }
    if (! tmp_2__) {
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
  tmp_3__ = strcasecmp((char const   *)opt, (char const   *)"delay");
  }
  if (tmp_3__) {
    break;
  }
  {
  tmp_5__ = strcasecmp((char const   *)arg, (char const   *)"yes");
  }
  if (tmp_5__) {
    {
    tmp_4__ = strcasecmp((char const   *)arg, (char const   *)"no");
    }
    if (tmp_4__) {
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
  tmp_6__ = strcasecmp((char const   *)opt, (char const   *)"exec");
  }
  if (tmp_6__) {
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
  tmp_7__ = strcasecmp((char const   *)opt, (char const   *)"execargs");
  }
  if (tmp_7__) {
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
  tmp_8__ = strcasecmp((char const   *)opt, (char const   *)"ident");
  }
  if (tmp_8__) {
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
  tmp_9__ = strcasecmp((char const   *)opt, (char const   *)"local");
  }
  if (tmp_9__) {
    break;
  }
  {
  tmp_10__ = host2nums(arg, & section->local_ip);
  }
  if (! tmp_10__) {
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
  tmp_11__ = strcasecmp((char const   *)opt, (char const   *)"protocol");
  }
  if (tmp_11__) {
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
  tmp_12__ = strcasecmp((char const   *)opt, (char const   *)"pty");
  }
  if (tmp_12__) {
    break;
  }
  {
  tmp_14__ = strcasecmp((char const   *)arg, (char const   *)"yes");
  }
  if (tmp_14__) {
    {
    tmp_13__ = strcasecmp((char const   *)arg, (char const   *)"no");
    }
    if (tmp_13__) {
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
  tmp_15__ = strcasecmp((char const   *)opt, (char const   *)"TIMEOUTbusy");
  }
  if (tmp_15__) {
    break;
  }
  {
  tmp_16__ = atoi((char const   *)arg);
  }
  if (tmp_16__ > 0) {
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
  tmp_17__ = strcasecmp((char const   *)opt, (char const   *)"TIMEOUTclose");
  }
  if (tmp_17__) {
    break;
  }
  {
  tmp_18__ = atoi((char const   *)arg);
  }
  if (tmp_18__ > 0) {
    {
    section->timeout_close = atoi((char const   *)arg);
    }
  } else {
    {
    tmp_19__ = strcmp((char const   *)arg, (char const   *)"0");
    }
    if (tmp_19__) {
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
  tmp_20__ = strcasecmp((char const   *)opt, (char const   *)"TIMEOUTidle");
  }
  if (tmp_20__) {
    break;
  }
  {
  tmp_21__ = atoi((char const   *)arg);
  }
  if (tmp_21__ > 0) {
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
  tmp_22__ = strcasecmp((char const   *)opt, (char const   *)"transparent");
  }
  if (tmp_22__) {
    break;
  }
  {
  tmp_24__ = strcasecmp((char const   *)arg, (char const   *)"yes");
  }
  if (tmp_24__) {
    {
    tmp_23__ = strcasecmp((char const   *)arg, (char const   *)"no");
    }
    if (tmp_23__) {
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
  char *tmp_0__ ;
  int tmp_1__ ;
  int tmp_2__ ;
  int tmp_3__ ;
  int tmp_4__ ;
  size_t tmp_5__ ;
  int tmp_6__ ;
  size_t tmp_7__ ;
  size_t tmp_8__ ;
  char *tmp_9__ ;
  size_t tmp_10__ ;
  int tmp_11__ ;
  int tmp_12__ ;
  char *tmp_13__ ;

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
  tmp_1__ = strcasecmp((char const   *)name, (char const   *)"-version");
  }
  if (! tmp_1__) {
    {
    tmp_0__ = stunnel_info();
    log_raw((char const   *)"%s", tmp_0__);
    log_raw((char const   *)" ");
    global_options(2, (char *)((void *)0), (char *)((void *)0));
    service_options(2, section, (char *)((void *)0), (char *)((void *)0));
    exit(1);
    }
  }
  {
  tmp_2__ = strcasecmp((char const   *)name, (char const   *)"-sockets");
  }
  if (! tmp_2__) {
    {
    print_socket_options();
    exit(1);
    }
  }
  {
  tmp_3__ = strcasecmp((char const   *)name, (char const   *)"-fd");
  }
  if (tmp_3__) {
    {

    {
    fp->BLAST_FLAG__ = 1;
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
    fp->BLAST_FLAG__ = 1;
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
    if (! (fp->BLAST_FLAG__ == 1)) {
      error____();
    }
    {

    }
    }
    tmp_13__ = fgets((char *)(line), 1024,
                     (FILE *)fp);
    }
    if (! tmp_13__) {
      break;
    }
    {
    line_number ++;
    opt = line;
    }
    while (1) {
      {
      tmp_4__ = _getctype_b__((int )(*opt));
      }
      if (! (tmp_4__ & 8192)) {
        break;
      }
      {
      opt ++;
      }
    }
    {
    tmp_5__ = strlen((char const   *)opt);
    i = (int )(tmp_5__ - 1);
    }
    while (1) {
      if (i >= 0) {
        {
        tmp_6__ = _getctype_b__((int )(*(opt + i)));
        }
        if (! (tmp_6__ & 8192)) {
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
      tmp_8__ = strlen((char const   *)opt);
      }
      if ((int )(*(opt + (tmp_8__ - 1))) == 93) {
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
        tmp_7__ = strlen((char const   *)opt);
        (*(opt + (tmp_7__ - 1))) = '\0';
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
    tmp_9__ = arg;
    arg ++;
    (*tmp_9__) = '\0';
    tmp_10__ = strlen((char const   *)opt);
    i = (int )(tmp_10__ - 1);
    }
    while (1) {
      if (i >= 0) {
        {
        tmp_11__ = _getctype_b__((int )(*(opt + i)));
        }
        if (! (tmp_11__ & 8192)) {
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
      tmp_12__ = _getctype_b__((int )(*arg));
      }
      if (! (tmp_12__ & 8192)) {
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
  if (fp->BLAST_FLAG__ == 1) {
    fp->BLAST_FLAG__ = 0;
  } else {
    error____();
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
{ char *retval_0__ ;
  size_t tmp ;

  {
  {
  tmp = strlen((char const   *)str);
  retval_0__ = (char *)calloc(tmp + 1, 1);
  }
  if (! retval_0__) {
    {
    log_raw((char const   *)"Fatal memory allocation error");
    exit(2);
    }
  }
  {
  strcpy((char *)retval_0__,
         (char const   *)((char const   *)str));
  }
  return (retval_0__);
}
}
static char **argalloc(char *str ) 
{ int max_arg ;
  int i ;
  char *ptr ;
  char **retval_0__ ;
  size_t tmp ;
  int tmp_0__ ;
  int tmp_1__ ;
  char *tmp_2__ ;
  int tmp_3__ ;

  {
  {
  tmp = strlen((char const   *)str);
  max_arg = (int )(tmp / 2 + 1);
  ptr = stralloc(str);
  retval_0__ = (char **)calloc((unsigned int )(max_arg + 1), sizeof(char *));
  }
  if (! retval_0__) {
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
    tmp_0__ = i;
    i ++;
    (*(retval_0__ + tmp_0__)) = ptr;
    }
    while (1) {
      if ((*ptr)) {
        {
        tmp_1__ = _getctype_b__((int )(*ptr));
        }
        if (tmp_1__ & 8192) {
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
        tmp_3__ = _getctype_b__((int )(*ptr));
        }
        if (! (tmp_3__ & 8192)) {
          break;
        }
      } else {
        break;
      }
      {
      tmp_2__ = ptr;
      ptr ++;
      (*tmp_2__) = '\0';
      }
    }
  }
  {
  (*(retval_0__ + i)) = (char *)((void *)0);
  }
  return (retval_0__);
}
}
int name2nums(char *name , char *default_host , u32 **names , u_short *port ) 
{ char tmp[1024] ;
  char *host_str ;
  char *port_str ;
  struct servent *p ;
  char *tmp_0__ ;
  register unsigned short v__ ;
  register unsigned short x__ ;
  u_short tmp_1__ ;
  int tmp_2__ ;
  int tmp_3__ ;

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
    tmp_0__ = port_str;
    port_str ++;
    (*tmp_0__) = '\0';
    }
  } else {
    {
    host_str = default_host;
    port_str = tmp;
    }
  }
  {
  tmp_1__ = (u_short )atoi((char const   *)port_str);
  x__ = tmp_1__;
  tmp_2__ = ((int )x__);
  }
  if (tmp_2__) {
    {
    v__ = (unsigned short )((((int )x__ >> 8) & 255) | (((int )x__ & 255) << 8));
    }
  } else {
    {
    __asm__  ("rorw $8, %w0": "=r" (v__): "0" (x__): "cc");
    }
  }
  {
  (*port) = v__;
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
  tmp_3__ = host2nums(host_str, names);
  }
  return (tmp_3__);
}
}
static int host2nums(char *hostname , u32 **hostlist ) 
{ struct hostent *h__v ;
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
  h__v = gethostbyname((char const   *)hostname);
  }
  if (! h__v) {
    {
    log(3, (char const   *)"Failed to resolve hostname \'%s\'", hostname);
    }
    return (0);
  }
  {
  results = 0;
  tab = h__v->h_addr_list;
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
    (*((*hostlist) + i)) = (*((u32 *)(*(h__v->h_addr_list + i))));
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
  char *tmp_0__ ;
  size_t tmp_1__ ;
  int tmp_2__ ;

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
  tmp_0__ = strchr((char const   *)string, (int )'.');
  }
  if (tmp_0__) {
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
    tmp_1__ = strlen((char const   *)string);
    }
    if (tmp_1__ == 1) {
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
    tmp_2__ = strcasecmp((char const   *)fl->name, (char const   *)string);
    }
    if (! tmp_2__) {
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
{ struct anonstruct_ssl_opts_76__ ssl_opts[22] ;
  struct anonstruct_ssl_opts_76__ *option ;
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
  size_t tmp_0__ ;
  int tmp_1__ ;

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
    tmp_1__ = getsockopt(fd, ptr->opt_level, ptr->opt_name,
                         (void *)((void *)(& val)),
                         (socklen_t *)((socklen_t *)(& len)));
    }
    if (tmp_1__) {
      {
      tmp = errno_location__();
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
      tmp_0__ = strlen((char const   *)(line));
      strncat((char *)(line),
              (char const   *)((char const   *)"    --    "),
              (1024 - tmp_0__) - 1);
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
  int tmp_0__ ;
  char *tmp_1__ ;
  char *tmp_2__ ;
  size_t tmp_3__ ;

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
    tmp_0__ = strcmp((char const   *)arg, (char const   *)ptr->opt_str);
    }
    if (! tmp_0__) {
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
    tmp_1__ = opt_val2_str;
    opt_val2_str ++;
    (*tmp_1__) = '\0';
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
    tmp_2__ = opt_val2_str;
    opt_val2_str ++;
    (*tmp_2__) = '\0';
    (ptr->opt_val[socket_type])->timeval_val.tv_usec = (suseconds_t__ )atoi((char const   *)opt_val2_str);
    }
  } else {
    {
    (ptr->opt_val[socket_type])->timeval_val.tv_usec = 0;
    }
  }
  {
  (ptr->opt_val[socket_type])->timeval_val.tv_sec = (time_t__ )atoi((char const   *)opt_val_str);
  }
  return (1);
  case 5: 
  {
  tmp_3__ = strlen((char const   *)opt_val_str);
  }
  if (tmp_3__ + 1 > sizeof(OPT_UNION )) {
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
{ int retval_0__ ;
  char const   *tmp ;
  char const   *tmp_8__ ;
  int tmp_9__ ;
  int tmp_10__ ;
  int tmp_11__ ;
  int tmp_12__ ;

  {
  {
  retval_0__ = -1;
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
  tmp_12__ = strcmp((char const   *)(c->opt)->protocol, (char const   *)"cifs");
  }
  if (tmp_12__) {
    {
    tmp_11__ = strcmp((char const   *)(c->opt)->protocol, (char const   *)"smtp");
    }
    if (tmp_11__) {
      {
      tmp_10__ = strcmp((char const   *)(c->opt)->protocol,
                        (char const   *)"pop3");
      }
      if (tmp_10__) {
        {
        tmp_9__ = strcmp((char const   *)(c->opt)->protocol,
                         (char const   *)"nntp");
        }
        if (tmp_9__) {
          if (options.option.client) {
            {
            tmp_8__ = (char const   *)"client";
            }
          } else {
            {
            tmp_8__ = (char const   *)"server";
            }
          }
          {
          log(3, (char const   *)"Protocol %s not supported in %s mode",
              (c->opt)->protocol, tmp_8__);
          }
          return (-1);
        } else {
          if (options.option.client) {
            {
            retval_0__ = nntp_client(c);
            }
          } else {
            {
            retval_0__ = nntp_server(c);
            }
          }
        }
      } else {
        if (options.option.client) {
          {
          retval_0__ = pop3_client(c);
          }
        } else {
          {
          retval_0__ = pop3_server(c);
          }
        }
      }
    } else {
      if (options.option.client) {
        {
        retval_0__ = smtp_client(c);
        }
      } else {
        {
        retval_0__ = smtp_server(c);
        }
      }
    }
  } else {
    if (options.option.client) {
      {
      retval_0__ = cifs_client(c);
      }
    } else {
      {
      retval_0__ = cifs_server(c);
      }
    }
  }
  if (retval_0__) {
    {
    log(5, (char const   *)"Protocol negotiation failed");
    }
  } else {
    {
    log(5, (char const   *)"Protocol negotiation succeded");
    }
  }
  return (retval_0__);
}
}
static int cifs_client(CLI *c ) 
{ u8 buffer[5] ;
  u8 request_dummy[4] ;
  int tmp ;
  int tmp_0__ ;

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
  tmp_0__ = read_blocking(c, c->remote_fd.fd, buffer, 5);
  }
  if (tmp_0__ < 0) {
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
  int tmp_0__ ;
  int tmp_1__ ;

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
  tmp_0__ = read_blocking(c, c->local_rfd.fd, buffer + 4, (int )len);
  }
  if (tmp_0__ < 0) {
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
  tmp_1__ = write_blocking(c, c->local_wfd.fd, response_use_ssl, 5);
  }
  if (tmp_1__ < 0) {
    return (-1);
  }
  return (0);
}
}
static int smtp_client(CLI *c ) 
{ char line[1024] ;
  int tmp ;
  int tmp_0__ ;
  int tmp_1__ ;
  int tmp_2__ ;
  int tmp_3__ ;
  int tmp_4__ ;
  int tmp_5__ ;
  int tmp_6__ ;
  int tmp_7__ ;
  int tmp_8__ ;
  int tmp_9__ ;

  {
  while (1) {
    {
    tmp = fdscanf(c, c->remote_fd.fd, (char const   *)"%[^\n]", line);
    }
    if (tmp < 0) {
      return (-1);
    }
    {
    tmp_0__ = fdprintf(c, c->local_wfd.fd, (char const   *)"%s", line);
    }
    if (tmp_0__ < 0) {
      return (-1);
    }
    {
    tmp_1__ = strncasecmp((char const   *)(line), (char const   *)"220-", 4);
    }
    if (! (tmp_1__ == 0)) {
      break;
    }
  }
  {
  tmp_2__ = fdprintf(c, c->remote_fd.fd, (char const   *)"EHLO localhost");
  }
  if (tmp_2__ < 0) {
    return (-1);
  }
  while (1) {
    {
    tmp_3__ = fdscanf(c, c->remote_fd.fd, (char const   *)"%[^\n]", line);
    }
    if (tmp_3__ < 0) {
      return (-1);
    }
    {
    tmp_4__ = strncasecmp((char const   *)(line), (char const   *)"250-", 4);
    }
    if (! (tmp_4__ == 0)) {
      break;
    }
  }
  {
  tmp_5__ = strncasecmp((char const   *)(line), (char const   *)"250 ", 4);
  }
  if (tmp_5__ != 0) {
    {
    log(3, (char const   *)"Remote server is not RFC 1425 compliant");
    }
    return (-1);
  }
  {
  tmp_6__ = fdprintf(c, c->remote_fd.fd, (char const   *)"STARTTLS");
  }
  if (tmp_6__ < 0) {
    return (-1);
  }
  while (1) {
    {
    tmp_7__ = fdscanf(c, c->remote_fd.fd, (char const   *)"%[^\n]", line);
    }
    if (tmp_7__ < 0) {
      return (-1);
    }
    {
    tmp_8__ = strncasecmp((char const   *)(line), (char const   *)"220-", 4);
    }
    if (! (tmp_8__ == 0)) {
      break;
    }
  }
  {
  tmp_9__ = strncasecmp((char const   *)(line), (char const   *)"220 ", 4);
  }
  if (tmp_9__ != 0) {
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
  int tmp_0__ ;
  int tmp_1__ ;
  int tmp_2__ ;
  int tmp_3__ ;
  int tmp_4__ ;
  int tmp_5__ ;
  int tmp_6__ ;

  {
  {
  tmp = RFC2487(c->local_rfd.fd);
  }
  if (tmp == 0) {
    return (0);
  }
  {
  tmp_0__ = fdscanf(c, c->remote_fd.fd, (char const   *)"220%[^\n]", line);
  }
  if (tmp_0__ != 1) {
    {
    log(3, (char const   *)"Unknown server welcome");
    }
    return (-1);
  }
  {
  tmp_1__ = fdprintf(c, c->local_wfd.fd, (char const   *)"220%s + stunnel", line);
  }
  if (tmp_1__ < 0) {
    return (-1);
  }
  {
  tmp_2__ = fdscanf(c, c->local_rfd.fd, (char const   *)"EHLO %[^\n]", line);
  }
  if (tmp_2__ != 1) {
    {
    log(3, (char const   *)"Unknown client EHLO");
    }
    return (-1);
  }
  {
  tmp_3__ = fdprintf(c, c->local_wfd.fd, (char const   *)"250-%s Welcome", line);
  }
  if (tmp_3__ < 0) {
    return (-1);
  }
  {
  tmp_4__ = fdprintf(c, c->local_wfd.fd, (char const   *)"250 STARTTLS");
  }
  if (tmp_4__ < 0) {
    return (-1);
  }
  {
  tmp_5__ = fdscanf(c, c->local_rfd.fd, (char const   *)"STARTTLS", line);
  }
  if (tmp_5__ < 0) {
    {
    log(3, (char const   *)"STARTTLS expected");
    }
    return (-1);
  }
  {
  tmp_6__ = fdprintf(c, c->local_wfd.fd, (char const   *)"220 Go ahead");
  }
  if (tmp_6__ < 0) {
    return (-1);
  }
  return (0);
}
}
static int pop3_client(CLI *c ) 
{ char line[1024] ;
  int tmp ;
  int tmp_0__ ;
  int tmp_1__ ;
  int tmp_2__ ;
  int tmp_3__ ;
  int tmp_4__ ;

  {
  {
  tmp = fdscanf(c, c->remote_fd.fd, (char const   *)"%[^\n]", line);
  }
  if (tmp < 0) {
    return (-1);
  }
  {
  tmp_0__ = strncasecmp((char const   *)(line), (char const   *)"+OK ", 4);
  }
  if (tmp_0__) {
    {
    log(3, (char const   *)"Unknown server welcome");
    }
    return (-1);
  }
  {
  tmp_1__ = fdprintf(c, c->local_wfd.fd, (char const   *)"%s", line);
  }
  if (tmp_1__ < 0) {
    return (-1);
  }
  {
  tmp_2__ = fdprintf(c, c->remote_fd.fd, (char const   *)"STLS");
  }
  if (tmp_2__ < 0) {
    return (-1);
  }
  {
  tmp_3__ = fdscanf(c, c->remote_fd.fd, (char const   *)"%[^\n]", line);
  }
  if (tmp_3__ < 0) {
    return (-1);
  }
  {
  tmp_4__ = strncasecmp((char const   *)(line), (char const   *)"+OK ", 4);
  }
  if (tmp_4__) {
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
  int tmp_0__ ;
  int tmp_1__ ;
  int tmp_2__ ;
  int tmp_3__ ;
  int tmp_4__ ;
  int tmp_5__ ;
  int tmp_6__ ;

  {
  {
  tmp = fdscanf(c, c->remote_fd.fd, (char const   *)"%[^\n]", line);
  }
  if (tmp < 0) {
    return (-1);
  }
  {
  tmp_0__ = fdprintf(c, c->local_wfd.fd, (char const   *)"%s + stunnel", line);
  }
  if (tmp_0__ < 0) {
    return (-1);
  }
  {
  tmp_1__ = fdscanf(c, c->local_rfd.fd, (char const   *)"%[^\n]", line);
  }
  if (tmp_1__ < 0) {
    return (-1);
  }
  {
  tmp_4__ = strncasecmp((char const   *)(line), (char const   *)"CAPA", 4);
  }
  if (! tmp_4__) {
    {
    tmp_2__ = fdprintf(c, c->local_wfd.fd,
                       (char const   *)"-ERR Stunnel does not support capabilities");
    }
    if (tmp_2__ < 0) {
      return (-1);
    }
    {
    tmp_3__ = fdscanf(c, c->local_rfd.fd, (char const   *)"%[^\n]", line);
    }
    if (tmp_3__ < 0) {
      return (-1);
    }
  }
  {
  tmp_5__ = strncasecmp((char const   *)(line), (char const   *)"STLS", 4);
  }
  if (tmp_5__) {
    {
    log(3, (char const   *)"Client does not want TLS");
    }
    return (-1);
  }
  {
  tmp_6__ = fdprintf(c, c->local_wfd.fd,
                     (char const   *)"+OK Stunnel starts TLS negotiation");
  }
  if (tmp_6__ < 0) {
    return (-1);
  }
  return (0);
}
}
static int nntp_client(CLI *c ) 
{ char line[1024] ;
  int tmp ;
  int tmp_0__ ;
  int tmp_1__ ;
  int tmp_2__ ;
  int tmp_3__ ;
  int tmp_4__ ;
  int tmp_5__ ;

  {
  {
  tmp = fdscanf(c, c->remote_fd.fd, (char const   *)"%[^\n]", line);
  }
  if (tmp < 0) {
    return (-1);
  }
  {
  tmp_0__ = strncasecmp((char const   *)(line), (char const   *)"200 ", 4);
  }
  if (tmp_0__) {
    {
    tmp_1__ = strncasecmp((char const   *)(line), (char const   *)"201 ", 4);
    }
    if (tmp_1__) {
      {
      log(3, (char const   *)"Unknown server welcome");
      }
      return (-1);
    }
  }
  {
  tmp_2__ = fdprintf(c, c->local_wfd.fd, (char const   *)"%s", line);
  }
  if (tmp_2__ < 0) {
    return (-1);
  }
  {
  tmp_3__ = fdprintf(c, c->remote_fd.fd, (char const   *)"STARTTLS");
  }
  if (tmp_3__ < 0) {
    return (-1);
  }
  {
  tmp_4__ = fdscanf(c, c->remote_fd.fd, (char const   *)"%[^\n]", line);
  }
  if (tmp_4__ < 0) {
    return (-1);
  }
  {
  tmp_5__ = strncasecmp((char const   *)(line), (char const   *)"382 ", 4);
  }
  if (tmp_5__) {
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
  unsigned int i__ ;
  fd_set *arr__ ;
  int tmp ;

  {
  while (1) {
    {
    arr__ = & fdsRead;
    i__ = 0;
    }
    while (i__ < sizeof(fd_set ) / sizeof(fd_mask__ )) {
      {
      arr__->fds_bits__[i__] = 0;
      i__ ++;
      }
    }
    break;
  }
  {
  fdsRead.fds_bits__[(unsigned int )fd / (8 * sizeof(fd_mask__ ))] = fdsRead.fds_bits__[(unsigned int )fd /
                                                                                         (8 *
                                                                                          sizeof(fd_mask__ ))] |
                                                                      (1 <<
                                                                       (unsigned int )fd %
                                                                       (8 *
                                                                        sizeof(fd_mask__ )));
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
  int *tmp_0__ ;

  {
  {
  tmp = errno_location__();
  save_errno = (*tmp);
  write(signal_pipe[1], (void const   *)(signal_buffer), 1);
  signal(17, & sigchld_handler);
  tmp_0__ = errno_location__();
  (*tmp_0__) = save_errno;
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
  set->fds_bits__[(unsigned int )signal_pipe[0] / (8 * sizeof(fd_mask__ ))] = set->fds_bits__[(unsigned int )signal_pipe[0] /
                                                                                               (8 *
                                                                                                sizeof(fd_mask__ ))] |
                                                                               (1 <<
                                                                                (unsigned int )signal_pipe[0] %
                                                                                (8 *
                                                                                 sizeof(fd_mask__ )));
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
{ int retval_0__ ;
  struct timeval tv ;
  int *tmp ;

  {
  while (1) {
    if (timeout) {
      {
      memcpy((void *)((void *)(& tv)),
             (void const   *)((void const   *)timeout),
             sizeof(struct timeval ));
      retval_0__ = select(n, (fd_set *)readfds,
                          (fd_set *)writefds,
                          (fd_set *)exceptfds,
                          (struct timeval *)(& tv));
      }
    } else {
      {
      retval_0__ = select(n, (fd_set *)readfds,
                          (fd_set *)writefds,
                          (fd_set *)exceptfds,
                          (struct timeval *)((struct timeval *)((void *)0)));
      }
      if (retval_0__ > 0) {
        if (readfds->fds_bits__[(unsigned int )signal_pipe[0] /
                                (8 * sizeof(fd_mask__ ))] &
            (1 << (unsigned int )signal_pipe[0] % (8 * sizeof(fd_mask__ )))) {
          {
          read(signal_pipe[0], (void *)(signal_buffer), sizeof(signal_buffer));
          exec_status();
          }
        }
      }
    }
    if (retval_0__ < 0) {
      {
      tmp = errno_location__();
      }
      if (! ((*tmp) == 4)) {
        break;
      }
    } else {
      break;
    }
  }
  return (retval_0__);
}
}
int waitforsocket(int fd , int dir , int timeout ) 
{ struct timeval tv ;
  fd_set set ;
  int ready ;
  char const   *tmp ;
  unsigned int i__ ;
  fd_set *arr__ ;
  fd_set *tmp_0__ ;
  fd_set *tmp_1__ ;

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
    arr__ = & set;
    i__ = 0;
    }
    while (i__ < sizeof(fd_set ) / sizeof(fd_mask__ )) {
      {
      arr__->fds_bits__[i__] = 0;
      i__ ++;
      }
    }
    break;
  }
  {
  set.fds_bits__[(unsigned int )fd / (8 * sizeof(fd_mask__ ))] = set.fds_bits__[(unsigned int )fd /
                                                                                 (8 *
                                                                                  sizeof(fd_mask__ ))] |
                                                                  (1 <<
                                                                   (unsigned int )fd %
                                                                   (8 *
                                                                    sizeof(fd_mask__ )));
  tv.tv_sec = (long )timeout;
  tv.tv_usec = 0;
  }
  if (dir) {
    {
    tmp_0__ = & set;
    }
  } else {
    {
    tmp_0__ = (fd_set *)((void *)0);
    }
  }
  if (dir) {
    {
    tmp_1__ = (fd_set *)((void *)0);
    }
  } else {
    {
    tmp_1__ = & set;
    }
  }
  {
  ready = sselect(fd + 1, tmp_1__, tmp_0__, (fd_set *)((void *)0), & tv);
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
  union anonunion___u_74__ u__ ;
  union anonunion___u_75__ u___0__ ;
  int status__ ;
  union anonunion___u_76__ u___1__ ;
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
    u___1__.in__ = status;
    status__ = u___1__.i__;
    }
    if ((status__ & 255) == 127) {
      {
      tmp = 0;
      }
    } else {
      if ((status__ & 127) == 0) {
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
      u__.in__ = status;
      log(6, (char const   *)"Local process %d terminated on signal %d", pid,
          u__.i__ & 127);
      }
    } else {
      {
      u___0__.in__ = status;
      log(6, (char const   *)"Local process %d finished with code %d", pid,
          (u___0__.i__ & 65280) >> 8);
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
{ ccured_va_list__ arglist ;
  char line[1024] ;
  char logline[1024] ;
  char crlf[3] ;
  int len ;
  unsigned long tmp ;
  size_t tmp_0__ ;
  int tmp_1__ ;
  char *p ;
  int tmp_2__ ;

  {
  {
  crlf[0] = '\r';
  crlf[1] = '\n';
  crlf[2] = '\0';
  tmp = (unsigned long )GCC_STDARG_START();
  ccured_va_start__(arglist, tmp);
  len = vsnprintf((char *)(line), 1024,
                  (char const   *)format, arglist);
  ccured_va_end__(arglist);
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
  tmp_0__ = strlen((char const   *)(line));
  strncat((char *)(line),
          (char const   *)((char const   *)(crlf)),
          (1024 - tmp_0__) - 1);
  tmp_1__ = write_blocking(c, fd, (u8 *)(line), len);
  }
  if (tmp_1__ < 0) {
    return (-1);
  }
  while (1) {
    {
    p = logline;
    }
    while ((*p)) {
      {
      tmp_2__ = _getctype_b__((int )(*p));
      }
      if (! (tmp_2__ & 16384)) {
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
  int retval_0__ ;
  int tmp ;
  int tmp_0__ ;
  char *p ;
  int tmp_1__ ;
  int tmp_2__ ;

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
    tmp_0__ = read(fd, (void *)(line + ptr), 1);
    }
    switch (tmp_0__) {
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
      goto Cont__;
    }
    if ((int )line[ptr] == 10) {
      break;
    }
    Cont__: 
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
      tmp_1__ = _getctype_b__((int )(*p));
      }
      if (! (tmp_1__ & 16384)) {
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
  retval_0__ = sscanf((char const   *)((char const   *)(line)),
                      (char const   *)format, buffer);
  }
  if (retval_0__ >= 0) {
    return (retval_0__);
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
  tmp_2__ = sscanf((char const   *)((char const   *)(line)),
                   (char const   *)((char const   *)(lformat)),
                   buffer);
  }
  return (tmp_2__);
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
  SSL_METHOD *tmp_0__ ;
  SSL_METHOD *tmp_1__ ;
  int tmp_2__ ;
  long tmp_3__ ;
  int tmp_4__ ;
  int tmp_5__ ;
  unsigned long tmp_6__ ;
  int tmp_7__ ;
  int tmp_8__ ;

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
    tmp_0__ = SSLv3_client_method();
    ctx = SSL_CTX_new(tmp_0__);
    }
  } else {
    {
    tmp_1__ = SSLv23_server_method();
    ctx = SSL_CTX_new(tmp_1__);
    SSL_CTX_set_tmp_rsa_callback(ctx, & tmp_rsa_cb);
    tmp_2__ = init_dh();
    }
    if (tmp_2__) {
      {
      log(4, (char const   *)"Diffie-Hellman initialization failed");
      }
    }
  }
  if (options.ssl_options) {
    {
    log(7, (char const   *)"Configuration SSL options: 0x%08lX",
        options.ssl_options);
    tmp_3__ = SSL_CTX_ctrl(ctx, 32, options.ssl_options, (void *)0);
    log(7, (char const   *)"SSL options set: 0x%08lX", tmp_3__);
    }
  }
  {
  SSL_CTX_ctrl(ctx, 33, 3, (void *)0);
  SSL_CTX_ctrl(ctx, 44, 3, (void *)0);
  SSL_CTX_set_timeout(ctx, options.session_timeout);
  }
  if (options.option.cert) {
    {
    tmp_4__ = SSL_CTX_use_certificate_chain_file(ctx,
                                                 (char const   *)options.cert);
    }
    if (! tmp_4__) {
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
      tmp_5__ = SSL_CTX_use_RSAPrivateKey_file(ctx, (char const   *)options.key,
                                               1);
      }
      if (tmp_5__) {
        break;
      }
      if (i < 2) {
        {
        tmp_6__ = ERR_peek_error();
        }
        if ((int )(tmp_6__ & 4095) == 100) {
          {
          sslerror_stack();
          log(3, (char const   *)"Wrong pass phrase: retrying");
          }
          goto Cont__;
        }
      }
      {
      sslerror("SSL_CTX_use_RSAPrivateKey_file");
      exit(1);
      }
      Cont__: 
      {
      i ++;
      }
    }
    {
    tmp_7__ = SSL_CTX_check_private_key(ctx);
    }
    if (! tmp_7__) {
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
    tmp_8__ = SSL_CTX_set_cipher_list(ctx, (char const   *)options.cipher_list);
    }
    if (! tmp_8__) {
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
  int tmp_0__ ;
  int tmp_1__ ;
  int tmp_2__ ;
  int tmp_3__ ;
  int tmp_4__ ;
  int tmp_5__ ;
  int tmp_6__ ;

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
    tmp_0__ = prng_seeded(totbytes);
    }
    if (tmp_0__) {
      return (0);
    }
  }
  {
  RAND_file_name(filename, 1024);
  }
  if (filename[0]) {
    {
    filename[1023] = '\0';
    tmp_1__ = add_rand_file(filename);
    totbytes += tmp_1__;
    tmp_2__ = prng_seeded(totbytes);
    }
    if (tmp_2__) {
      return (0);
    }
  }
  {
  tmp_3__ = add_rand_file("/dev/urandom");
  totbytes += tmp_3__;
  tmp_4__ = prng_seeded(totbytes);
  }
  if (tmp_4__) {
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
  tmp_5__ = add_rand_file("/dev/urandom");
  totbytes += tmp_5__;
  tmp_6__ = prng_seeded(totbytes);
  }
  if (tmp_6__) {
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
  tmp = statext__inline((char const   *)filename, & sb);
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
  RSA *retval_0__ ;
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
    retval_0__ = keytable[keylen].key;
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
    retval_0__ = longkey;
    }
  }
  {
  leave_critical_section(0);
  }
  return (retval_0__);
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
  int tmp_0__ ;
  X509_LOOKUP_METHOD *tmp_1__ ;
  int tmp_2__ ;
  X509_LOOKUP_METHOD *tmp_3__ ;
  int tmp_4__ ;
  int tmp_5__ ;

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
    tmp_0__ = SSL_CTX_load_verify_locations(ctx, (char const   *)((void *)0),
                                            (char const   *)options.ca_dir);
    }
    if (! tmp_0__) {
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
        tmp_1__ = X509_LOOKUP_file();
        lookup = X509_STORE_add_lookup(revocation_store, tmp_1__);
        }
        if (! lookup) {
          {
          sslerror("X509_STORE_add_lookup");
          exit(1);
          }
        }
        {
        tmp_2__ = X509_LOOKUP_ctrl(lookup, 1, (char const   *)options.crl_file,
                                   1, (char **)((void *)0));
        }
        if (! tmp_2__) {
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
        tmp_3__ = X509_LOOKUP_hash_dir();
        lookup = X509_STORE_add_lookup(revocation_store, tmp_3__);
        }
        if (! lookup) {
          {
          sslerror("X509_STORE_add_lookup");
          exit(1);
          }
        }
        {
        tmp_4__ = X509_LOOKUP_ctrl(lookup, 2, (char const   *)options.crl_dir,
                                   1, (char **)((void *)0));
        }
        if (! tmp_4__) {
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
    tmp_5__ = 1;
    }
  } else {
    {
    tmp_5__ = options.verify_level;
    }
  }
  {
  SSL_CTX_set_verify(ctx, tmp_5__, & verify_callback);
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
  int tmp_0__ ;
  char const   *tmp_1__ ;
  X509_NAME *tmp_2__ ;
  int tmp_3__ ;
  int tmp_4__ ;

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
      tmp_0__ = _getctype_b__((int )(*p));
      }
      if (! (tmp_0__ & 16384)) {
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
    tmp_1__ = X509_verify_cert_error_string((long )callback_ctx->error);
    log(4, (char const   *)"VERIFY ERROR: depth=%d, error=%s: %s",
        callback_ctx->error_depth, tmp_1__, txt);
    }
    return (0);
  }
  if (options.verify_use_only_my) {
    if (callback_ctx->error_depth == 0) {
      {
      tmp_2__ = X509_get_subject_name(callback_ctx->current_cert);
      tmp_3__ = X509_STORE_get_by_subject(callback_ctx, 1, tmp_2__, & ret);
      }
      if (tmp_3__ != 1) {
        {
        log(4, (char const   *)"VERIFY ERROR ONLY MY: no cert for %s", txt);
        }
        return (0);
      }
    }
  }
  if (revocation_store) {
    {
    tmp_4__ = crl_callback(callback_ctx);
    }
    if (! tmp_4__) {
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
  int tmp_1__ ;
  int tmp_2__ ;
  ASN1_INTEGER *tmp_4__ ;
  int tmp_5__ ;

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
      tmp_1__ = X509_CRL_verify(crl, pubkey);
      }
      if (tmp_1__ <= 0) {
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
      tmp_2__ = X509_cmp_current_time(t);
      }
      if (tmp_2__ < 0) {
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
        tmp_4__ = X509_get_serialNumber(xs);
        tmp_5__ = ASN1_INTEGER_cmp(revoked->serialNumber, tmp_4__);
        }
        if (tmp_5__ == 0) {
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
  char const   *tmp_1__ ;
  char const   *tmp_2__ ;
  char const   *tmp_3__ ;
  char const   *tmp_4__ ;

  {
  if (where & 1) {
    {
    tmp = SSL_state_string_long(s);
    }
    if (where & 4096) {
      {
      tmp_1__ = (char const   *)"connect";
      }
    } else {
      if (where & 8192) {
        {
        tmp_1__ = (char const   *)"accept";
        }
      } else {
        {
        tmp_1__ = (char const   *)"undefined";
        }
      }
    }
    {
    log(7, (char const   *)"SSL state (%s): %s", tmp_1__, tmp);
    }
  } else {
    if (where & 16384) {
      {
      tmp_2__ = SSL_alert_desc_string_long(ret);
      tmp_3__ = SSL_alert_type_string_long(ret);
      }
      if (where & 4) {
        {
        tmp_4__ = (char const   *)"read";
        }
      } else {
        {
        tmp_4__ = (char const   *)"write";
        }
      }
      {
      log(7, (char const   *)"SSL alert (%s): %s: %s", tmp_4__, tmp_3__, tmp_2__);
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
  long tmp_0__ ;
  long tmp_1__ ;
  long tmp_2__ ;
  long tmp_3__ ;
  long tmp_4__ ;
  long tmp_5__ ;
  long tmp_6__ ;
  long tmp_7__ ;
  long tmp_8__ ;

  {
  {
  tmp = SSL_CTX_ctrl(ctx, 20, 0, (void *)0);
  log(7, (char const   *)"%4ld items in the session cache", tmp);
  tmp_0__ = SSL_CTX_ctrl(ctx, 21, 0, (void *)0);
  log(7, (char const   *)"%4ld client connects (SSL_connect())", tmp_0__);
  tmp_1__ = SSL_CTX_ctrl(ctx, 22, 0, (void *)0);
  log(7, (char const   *)"%4ld client connects that finished", tmp_1__);
  tmp_2__ = SSL_CTX_ctrl(ctx, 23, 0, (void *)0);
  log(7, (char const   *)"%4ld client renegotiatations requested", tmp_2__);
  tmp_3__ = SSL_CTX_ctrl(ctx, 24, 0, (void *)0);
  log(7, (char const   *)"%4ld server connects (SSL_accept())", tmp_3__);
  tmp_4__ = SSL_CTX_ctrl(ctx, 25, 0, (void *)0);
  log(7, (char const   *)"%4ld server connects that finished", tmp_4__);
  tmp_5__ = SSL_CTX_ctrl(ctx, 26, 0, (void *)0);
  log(7, (char const   *)"%4ld server renegotiatiations requested", tmp_5__);
  tmp_6__ = SSL_CTX_ctrl(ctx, 27, 0, (void *)0);
  log(7, (char const   *)"%4ld session cache hits", tmp_6__);
  tmp_7__ = SSL_CTX_ctrl(ctx, 29, 0, (void *)0);
  log(7, (char const   *)"%4ld session cache misses", tmp_7__);
  tmp_8__ = SSL_CTX_ctrl(ctx, 30, 0, (void *)0);
  log(7, (char const   *)"%4ld session cache timeouts", tmp_8__);
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
extern int pthread_create(pthread_t * threadp__ ,
                          pthread_attr_t const   * attr__ ,
                          void *(*start_routine__)(void * ) ,
                          void * arg__ ) ;
extern pthread_t pthread_self(void) ;
extern int pthread_attr_init(pthread_attr_t *attr__ ) ;
extern int pthread_attr_setdetachstate(pthread_attr_t *attr__ ,
                                       int detachstate__ ) ;
extern int pthread_attr_setstacksize(pthread_attr_t *attr__ ,
                                     size_t stacksize__ ) ;
extern int pthread_mutex_init(pthread_mutex_t * mutex__ ,
                              pthread_mutexattr_t const   * mutex_attr__ ) ;
extern int pthread_mutex_lock(pthread_mutex_t *mutex__ ) ;
extern int pthread_mutex_unlock(pthread_mutex_t *mutex__ ) ;
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
                  (sigset_t__ const   *)((sigset_t__ const   *)(& newmask)),
                  (sigset_t__ *)(& oldmask));
  tmp = pthread_create((pthread_t *)(& thread),
                       (pthread_attr_t const   *)((pthread_attr_t const   *)(& pth_attr)),
                       cli, (void *)arg);
  }
  if (tmp) {
    {
    pthread_sigmask(2,
                    (sigset_t__ const   *)((sigset_t__ const   *)(& oldmask)),
                    (sigset_t__ *)((sigset_t__ *)((void *)0)));
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
                  (sigset_t__ const   *)((sigset_t__ const   *)(& oldmask)),
                  (sigset_t__ *)((sigset_t__ *)((void *)0)));
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
  char *tmp_0__ ;

  {
  initialize____();
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
    tmp_0__ = (*(argv + 1));
    }
  } else {
    {
    tmp_0__ = (char *)((void *)0);
    }
  }
  {
  main_initialize(tmp_0__, tmp);
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
  int tmp_0__ ;

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
    tmp_0__ = statext__inline((char const   *)options.key, & st);
    }
    if (tmp_0__) {
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
  unsigned int i__ ;
  fd_set *arr__ ;
  int tmp ;
  int tmp_0__ ;
  register unsigned short v__ ;
  register unsigned short x__ ;
  int tmp_1__ ;
  int tmp_2__ ;
  register unsigned short v___0__ ;
  register unsigned short x___0__ ;
  int tmp_3__ ;
  int tmp_4__ ;
  void *tmp_5__ ;
  int *tmp_6__ ;
  int tmp_7__ ;

  {
  {
  get_limits();
  }
  while (1) {
    {
    arr__ = & base_set;
    i__ = 0;
    }
    while (i__ < sizeof(fd_set ) / sizeof(fd_mask__ )) {
      {
      arr__->fds_bits__[i__] = 0;
      i__ ++;
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
      goto Cont__;
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
    tmp_0__ = set_socket_options(opt->fd, 0);
    }
    if (tmp_0__ < 0) {
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
    tmp_2__ = bind(opt->fd, (void const   *)((struct sockaddr *)(& addr)),
                   sizeof(addr));
    }
    if (tmp_2__) {
      {
      x__ = addr.sin_port;
      tmp_1__ = ((int )x__);
      }
      if (tmp_1__) {
        {
        v__ = (unsigned short )((((int )x__ >> 8) & 255) |
                                (((int )x__ & 255) << 8));
        }
      } else {
        {
        __asm__  ("rorw $8, %w0": "=r" (v__): "0" (x__): "cc");
        }
      }
      {
      log(3, (char const   *)"Error binding %s to %s:%d", opt->servname,
          opt->local_address, v__);
      sockerror("bind");
      exit(1);
      }
    }
    {
    x___0__ = addr.sin_port;
    tmp_3__ = ((int )x___0__);
    }
    if (tmp_3__) {
      {
      v___0__ = (unsigned short )((((int )x___0__ >> 8) & 255) |
                                  (((int )x___0__ & 255) << 8));
      }
    } else {
      {
      __asm__  ("rorw $8, %w0": "=r" (v___0__): "0" (x___0__): "cc");
      }
    }
    {
    log(7, (char const   *)"%s bound to %s:%d", opt->servname,
        opt->local_address, v___0__);
    tmp_4__ = listen(opt->fd, 5);
    }
    if (tmp_4__) {
      {
      sockerror("listen");
      exit(1);
      }
    }
    {
    fcntl(opt->fd, 2, 1);
    base_set.fds_bits__[(unsigned int )opt->fd / (8 * sizeof(fd_mask__ ))] = base_set.fds_bits__[(unsigned int )opt->fd /
                                                                                                  (8 *
                                                                                                   sizeof(fd_mask__ ))] |
                                                                              (1 <<
                                                                               (unsigned int )opt->fd %
                                                                               (8 *
                                                                                sizeof(fd_mask__ )));
    }
    if (opt->fd > n) {
      {
      n = opt->fd;
      }
    }
    Cont__: 
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
      goto Cont___0__;
    }
    {
    enter_critical_section(2);
    num_clients = num_clients + 1;
    leave_critical_section(2);
    tmp_5__ = alloc_client_session(opt, -1, -1);
    create_client(-1, -1, tmp_5__, & client);
    }
    Cont___0__: 
    {
    opt = opt->next;
    }
  }
  while (1) {
    {
    memcpy((void *)((void *)(& current_set)),
           (void const   *)((void const   *)(& base_set)),
           sizeof(fd_set ));
    tmp_7__ = sselect(n + 1, & current_set, (fd_set *)((void *)0),
                      (fd_set *)((void *)0), (struct timeval *)((void *)0));
    }
    if (tmp_7__ < 0) {
      {
      tmp_6__ = errno_location__();
      log_error(6, (*tmp_6__), "main loop select");
      }
    } else {
      {
      opt = local_options.next;
      }
      while (opt) {
        if (current_set.fds_bits__[(unsigned int )opt->fd /
                                   (8 * sizeof(fd_mask__ ))] &
            (1 << (unsigned int )opt->fd % (8 * sizeof(fd_mask__ )))) {
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
  register unsigned short v__ ;
  register unsigned short x__ ;
  int tmp_0__ ;
  char *tmp_1__ ;
  int tmp_2__ ;
  void *tmp_3__ ;
  int tmp_4__ ;

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
      tmp = errno_location__();
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
  x__ = addr.sin_port;
  tmp_0__ = ((int )x__);
  }
  if (tmp_0__) {
    {
    v__ = (unsigned short )((((int )x__ >> 8) & 255) | (((int )x__ & 255) << 8));
    }
  } else {
    {
    __asm__  ("rorw $8, %w0": "=r" (v__): "0" (x__): "cc");
    }
  }
  {
  tmp_1__ = inet_ntoa(addr.sin_addr);
  log(7, (char const   *)"%s accepted FD=%d from %s:%d", opt->servname, s,
      tmp_1__, v__);
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
  tmp_2__ = alloc_fd(s);
  }
  if (tmp_2__) {
    return;
  }
  {
  fcntl(s, 2, 1);
  tmp_3__ = alloc_client_session(opt, s, s);
  tmp_4__ = create_client(opt->fd, s, tmp_3__, & client);
  }
  if (tmp_4__) {
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
  int tmp_0__ ;
  int tmp_1__ ;
  int tmp_2__ ;
  int tmp_3__ ;
  int tmp_4__ ;
  int tmp_5__ ;

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
      tmp_0__ = atoi((char const   *)options.setuid_user);
      }
      if (tmp_0__) {
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
    tmp_1__ = chroot((char const   *)options.chroot_dir);
    }
    if (tmp_1__) {
      {
      sockerror("chroot");
      exit(1);
      }
    }
    {
    tmp_2__ = chdir((char const   *)"/");
    }
    if (tmp_2__) {
      {
      sockerror("chdir");
      exit(1);
      }
    }
  }
  if (gid) {
    {
    tmp_3__ = setgid((unsigned int )gid);
    }
    if (tmp_3__) {
      {
      sockerror("setgid");
      exit(1);
      }
    }
    {
    gr_list[0] = (unsigned int )gid;
    tmp_4__ = setgroups(1, (gid_t__ const   *)(gr_list));
    }
    if (tmp_4__) {
      {
      sockerror("setgroups");
      exit(1);
      }
    }
  }
  if (uid) {
    {
    tmp_5__ = setuid((unsigned int )uid);
    }
    if (tmp_5__) {
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
  size_t tmp_0__ ;

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
  tmp_0__ = strlen((char const   *)(pid));
  write(pf, (void const   *)(pid), tmp_0__);
  close(pf);
  log(7, (char const   *)"Created pid file %s", options.pidfile);
  atexit(& delete_pid);
  }
  return;
}
}
static void delete_pid(void) 
{ pid_t__ tmp ;
  int tmp_0__ ;

  {
  {
  log(7, (char const   *)"removing pid file %s", options.pidfile);
  tmp = getpid();
  }
  if ((unsigned long )tmp != options.dpid) {
    return;
  }
  {
  tmp_0__ = unlink((char const   *)options.pidfile);
  }
  if (tmp_0__ < 0) {
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
  int tmp_0__ ;

  {
  {
  ptr = sock_opts;
  }
  while (ptr->opt_str) {
    if (! ptr->opt_val[type]) {
      goto Cont__;
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
    tmp_0__ = setsockopt(s, ptr->opt_level, ptr->opt_name,
                         (void const   *)((void *)ptr->opt_val[type]),
                         (unsigned int )opt_size);
    }
    if (tmp_0__) {
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
    Cont__: 
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
  tmp = errno_location__();
  log_error(3, (*tmp), txt);
  }
  return;
}
}
void sockerror(char *txt ) 
{ int *tmp ;

  {
  {
  tmp = errno_location__();
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
  size_t tmp_0__ ;
  size_t tmp_1__ ;
  size_t tmp_2__ ;
  char const   * tmp_3__ ;

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
  tmp_0__ = strlen((char const   *)(retval));
  strncat((char *)(retval),
          (char const   *)((char const   *)"+LIBWRAP"),
          (1024 - tmp_0__) - 1);
  retval[1023] = '\0';
  tmp_1__ = strlen((char const   *)(retval));
  strncat((char *)(retval),
          (char const   *)((char const   *)" with "),
          (1024 - tmp_1__) - 1);
  retval[1023] = '\0';
  tmp_2__ = strlen((char const   *)(retval));
  tmp_3__ = (char const   *)SSLeay_version(0);
  strncat((char *)(retval), tmp_3__, (1024 - tmp_2__) - 1);
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
{ int retval_0__ ;
  int flags ;
  int *tmp ;
  int *tmp_0__ ;
  char const   *tmp_1__ ;

  {
  while (1) {
    {
    flags = fcntl(sock, 3, 0);
    }
    if (flags < 0) {
      {
      tmp = errno_location__();
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
    retval_0__ = fcntl(sock, 4, flags);
    }
    if (retval_0__ < 0) {
      {
      tmp_0__ = errno_location__();
      }
      if (! ((*tmp_0__) == 4)) {
        break;
      }
    } else {
      break;
    }
  }
  if (retval_0__ < 0) {
    {
    sockerror("nonblocking");
    }
  } else {
    if (l) {
      {
      tmp_1__ = (char const   *)"non-";
      }
    } else {
      {
      tmp_1__ = (char const   *)"";
      }
    }
    {
    log(7, (char const   *)"FD %d in %sblocking mode", sock, tmp_1__);
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
extern int openpty(int *amaster__ , int *aslave__ , char *name__ ,
                   struct termios *termp__ , struct winsize *winp__ ) ;
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
void initialize____(void) 
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
