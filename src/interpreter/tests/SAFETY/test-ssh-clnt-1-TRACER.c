// SAFE

typedef unsigned int size_t;
typedef long __time_t;
struct buf_mem_st {
   int length ;
   char *data ;
   int max ;
};
typedef struct buf_mem_st BUF_MEM;
typedef __time_t time_t;
struct stack_st {
   int num ;
   char **data ;
   int sorted ;
   int num_alloc ;
   int (*comp)(char /*const*/ * /*const*/ * , char /*const*/ * /*const*/ * ) ;
};
typedef struct stack_st STACK;
struct bio_st;
struct crypto_ex_data_st {
   STACK *sk ;
   int dummy ;
};
typedef struct crypto_ex_data_st CRYPTO_EX_DATA;
typedef struct bio_st BIO;
typedef void bio_info_cb(struct bio_st * , int , char /*const*/ * , int , long ,
                         long );struct bio_method_st {
   int type ;
   char /*const*/ *name ;
   int (*bwrite)(BIO * , char /*const*/ * , int ) ;
   int (*bread)(BIO * , char * , int ) ;
   int (*bputs)(BIO * , char /*const*/ * ) ;
   int (*bgets)(BIO * , char * , int ) ;
   long (*ctrl)(BIO * , int , long , void * ) ;
   int (*create)(BIO * ) ;
   int (*destroy)(BIO * ) ;
   long (*callback_ctrl)(BIO * , int , bio_info_cb * ) ;
};
typedef struct bio_method_st BIO_METHOD;
struct bio_st {
   BIO_METHOD *method ;
   long (*callback)(struct bio_st * , int , char /*const*/ * , int , long , long ) ;
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
struct bignum_st {
   unsigned long *d ;
   int top ;
   int dmax ;
   int neg ;
   int flags ;
};
typedef struct bignum_st BIGNUM;
struct bignum_ctx {
   int tos ;
   BIGNUM bn[16] ;
   int flags ;
   int depth ;
   int pos[12] ;
   int too_many ;
};
typedef struct bignum_ctx BN_CTX;
struct bn_blinding_st {
   int init ;
   BIGNUM *A ;
   BIGNUM *Ai ;
   BIGNUM *mod ;
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
struct X509_algor_st;struct X509_algor_st;
struct asn1_object_st {
   char /*const*/ *sn ;
   char /*const*/ *ln ;
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
union __anonunion_value_19 {
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
   union __anonunion_value_19 value ;
};
typedef struct asn1_type_st ASN1_TYPE;
struct MD5state_st {
   unsigned int A ;
   unsigned int B ;
   unsigned int C ;
   unsigned int D ;
   unsigned int Nl ;
   unsigned int Nh ;
   unsigned int data[16] ;
   int num ;
};
typedef struct MD5state_st MD5_CTX;
struct SHAstate_st {
   unsigned int h0 ;
   unsigned int h1 ;
   unsigned int h2 ;
   unsigned int h3 ;
   unsigned int h4 ;
   unsigned int Nl ;
   unsigned int Nh ;
   unsigned int data[16] ;
   int num ;
};
typedef struct SHAstate_st SHA_CTX;
struct MD2state_st {
   int num ;
   unsigned char data[16] ;
   unsigned int cksm[16] ;
   unsigned int state[16] ;
};
typedef struct MD2state_st MD2_CTX;
struct MD4state_st {
   unsigned int A ;
   unsigned int B ;
   unsigned int C ;
   unsigned int D ;
   unsigned int Nl ;
   unsigned int Nh ;
   unsigned int data[16] ;
   int num ;
};
typedef struct MD4state_st MD4_CTX;
struct RIPEMD160state_st {
   unsigned int A ;
   unsigned int B ;
   unsigned int C ;
   unsigned int D ;
   unsigned int E ;
   unsigned int Nl ;
   unsigned int Nh ;
   unsigned int data[16] ;
   int num ;
};
typedef struct RIPEMD160state_st RIPEMD160_CTX;
typedef unsigned char des_cblock[8];
union __anonunion_ks_20 {
   des_cblock cblock ;
   unsigned long deslong[2] ;
};
struct des_ks_struct {
   union __anonunion_ks_20 ks ;
   int weak_key ;
};
typedef struct des_ks_struct des_key_schedule[16];
struct rc4_key_st {
   unsigned int x ;
   unsigned int y ;
   unsigned int data[256] ;
};
typedef struct rc4_key_st RC4_KEY;
struct rc2_key_st {
   unsigned int data[64] ;
};
typedef struct rc2_key_st RC2_KEY;
struct rc5_key_st {
   int rounds ;
   unsigned long data[34] ;
};
typedef struct rc5_key_st RC5_32_KEY;
struct bf_key_st {
   unsigned int P[18] ;
   unsigned int S[1024] ;
};
typedef struct bf_key_st BF_KEY;
struct cast_key_st {
   unsigned long data[32] ;
   int short_key ;
};
typedef struct cast_key_st CAST_KEY;
struct idea_key_st {
   unsigned int data[9][6] ;
};
typedef struct idea_key_st IDEA_KEY_SCHEDULE;
struct mdc2_ctx_st {
   int num ;
   unsigned char data[8] ;
   des_cblock h ;
   des_cblock hh ;
   int pad_type ;
};
typedef struct mdc2_ctx_st MDC2_CTX;
struct rsa_st;typedef struct rsa_st RSA;
struct rsa_meth_st {
   char /*const*/ *name ;
   int (*rsa_pub_enc)(int flen0 , unsigned char *from0 , unsigned char *to0 , RSA *rsa0 ,
                      int padding0 ) ;
   int (*rsa_pub_dec)(int flen1 , unsigned char *from1 , unsigned char *to1 , RSA *rsa1 ,
                      int padding1 ) ;
   int (*rsa_priv_enc)(int flen2 , unsigned char *from2 , unsigned char *to2 , RSA *rsa2 ,
                       int padding2 ) ;
   int (*rsa_priv_dec)(int flen3 , unsigned char *from3 , unsigned char *to3 , RSA *rsa3 ,
                       int padding3 ) ;
   int (*rsa_mod_exp)(BIGNUM *r0 , BIGNUM *I , RSA *rsa4 ) ;
   int (*bn_mod_exp)(BIGNUM *r , BIGNUM *a , BIGNUM /*const*/ *p , BIGNUM /*const*/ *m ,
                     BN_CTX *ctx , BN_MONT_CTX *m_ctx ) ;
   int (*init)(RSA *rsa5 ) ;
   int (*finish)(RSA *rsa6 ) ;
   int flags ;
   char *app_data ;
   int (*rsa_sign)(int type , unsigned char *m7 , unsigned int m_len7 , unsigned char *sigret ,
                   unsigned int *siglen7 , RSA *rsa7 ) ;
   int (*rsa_verify)(int dtype , unsigned char *m8 , unsigned int m_len8 , unsigned char *sigbuf ,
                     unsigned int siglen8 , RSA *rsa8 ) ;
};
typedef struct rsa_meth_st RSA_METHOD;
struct rsa_st {
   int pad ;
   int version ;
   RSA_METHOD *meth ;
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
struct dh_st;typedef struct dh_st DH;
struct dh_method {
   char /*const*/ *name ;
   int (*generate_key)(DH *dh0 ) ;
   int (*compute_key)(unsigned char *key , BIGNUM *pub_key , DH *dh ) ;
   int (*bn_mod_exp)(DH *dh1 , BIGNUM *r , BIGNUM *a , BIGNUM /*const*/ *p , BIGNUM /*const*/ *m ,
                     BN_CTX *ctx , BN_MONT_CTX *m_ctx ) ;
   int (*init)(DH *dh2 ) ;
   int (*finish)(DH *dh3 ) ;
   int flags ;
   char *app_data ;
};
typedef struct dh_method DH_METHOD;
struct dh_st {
   int pad ;
   int version ;
   BIGNUM *p ;
   BIGNUM *g ;
   int length ;
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
   DH_METHOD *meth ;
};
struct dsa_st;typedef struct dsa_st DSA;
struct DSA_SIG_st {
   BIGNUM *r ;
   BIGNUM *s ;
};
typedef struct DSA_SIG_st DSA_SIG;
struct dsa_method {
   char /*const*/ *name ;
   DSA_SIG *(*dsa_do_sign)(unsigned char /*const*/ *dgst0 , int dlen0 , DSA *dsa0 ) ;
   int (*dsa_sign_setup)(DSA *dsa1 , BN_CTX *ctx_in1 , BIGNUM **kinvp1 , BIGNUM **rp1 ) ;
   int (*dsa_do_verify)(unsigned char /*const*/ *dgst2 , int dgst_len2 , DSA_SIG *sig2 ,
                        DSA *dsa2 ) ;
   int (*dsa_mod_exp)(DSA *dsa3 , BIGNUM *rr3 , BIGNUM *a13 , BIGNUM *p13 , BIGNUM *a23 ,
                      BIGNUM *p23 , BIGNUM *m3 , BN_CTX *ctx3 , BN_MONT_CTX *in_mont3 ) ;
   int (*bn_mod_exp)(DSA *dsa4 , BIGNUM *r4 , BIGNUM *a4 , BIGNUM /*const*/ *p4 , BIGNUM /*const*/ *m4 ,
                     BN_CTX *ctx4 , BN_MONT_CTX *m_ctx4 ) ;
   int (*init)(DSA *dsa5 ) ;
   int (*finish)(DSA *dsa6 ) ;
   int flags ;
   char *app_data ;
};
typedef struct dsa_method DSA_METHOD;
struct dsa_st {
   int pad ;
   int version ;
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
   DSA_METHOD *meth ;
};
union __anonunion_pkey_21 {
   char *ptr ;
   struct rsa_st *rsa ;
   struct dsa_st *dsa ;
   struct dh_st *dh ;
};
struct evp_pkey_st {
   int type ;
   int save_type ;
   int references ;
   union __anonunion_pkey_21 pkey ;
   int save_parameters ;
   STACK *attributes ;
};
typedef struct evp_pkey_st EVP_PKEY;
struct env_md_st {
   int type ;
   int pkey_type ;
   int md_size ;
   void (*init)() ;
   void (*update)() ;
   void (*final)() ;
   int (*sign)() ;
   int (*verify)() ;
   int required_pkey_type[5] ;
   int block_size ;
   int ctx_size ;
};
typedef struct env_md_st EVP_MD;
union __anonunion_md_22 {
   unsigned char base[4] ;
   MD2_CTX md2 ;
   MD5_CTX md5 ;
   MD4_CTX md4 ;
   RIPEMD160_CTX ripemd160 ;
   SHA_CTX sha ;
   MDC2_CTX mdc2 ;
};
struct env_md_ctx_st {
   EVP_MD /*const*/ *digest ;
   union __anonunion_md_22 md ;
};
typedef struct env_md_ctx_st EVP_MD_CTX;
struct evp_cipher_st;typedef struct evp_cipher_st EVP_CIPHER;
struct evp_cipher_ctx_st;typedef struct evp_cipher_ctx_st EVP_CIPHER_CTX;
struct evp_cipher_st {
   int nid ;
   int block_size ;
   int key_len ;
   int iv_len ;
   unsigned long flags ;
   int (*init)(EVP_CIPHER_CTX *ctx_0 , unsigned char /*const*/ *key_0 , unsigned char /*const*/ *iv_0 ,
               int enc_0 ) ;
   int (*do_cipher)(EVP_CIPHER_CTX *ctx_1 , unsigned char *out_1 , unsigned char /*const*/ *in_1 ,
                    unsigned int inl_1 ) ;
   int (*cleanup)(EVP_CIPHER_CTX * ) ;
   int ctx_size ;
   int (*set_asn1_parameters)(EVP_CIPHER_CTX * , ASN1_TYPE * ) ;
   int (*get_asn1_parameters)(EVP_CIPHER_CTX * , ASN1_TYPE * ) ;
   int (*ctrl)(EVP_CIPHER_CTX * , int type , int arg , void *ptr ) ;
   void *app_data ;
};
struct __anonstruct_rc4_24 {
   unsigned char key[16] ;
   RC4_KEY ks ;
};
struct __anonstruct_desx_cbc_25 {
   des_key_schedule ks ;
   des_cblock inw ;
   des_cblock outw ;
};
struct __anonstruct_des_ede_26 {
   des_key_schedule ks1 ;
   des_key_schedule ks2 ;
   des_key_schedule ks3 ;
};
struct __anonstruct_rc2_27 {
   int key_bits ;
   RC2_KEY ks ;
};
struct __anonstruct_rc5_28 {
   int rounds ;
   RC5_32_KEY ks ;
};
union __anonunion_c_23 {
   struct __anonstruct_rc4_24 rc4 ;
   des_key_schedule des_ks ;
   struct __anonstruct_desx_cbc_25 desx_cbc ;
   struct __anonstruct_des_ede_26 des_ede ;
   IDEA_KEY_SCHEDULE idea_ks ;
   struct __anonstruct_rc2_27 rc2 ;
   struct __anonstruct_rc5_28 rc5 ;
   BF_KEY bf_ks ;
   CAST_KEY cast_ks ;
};
struct evp_cipher_ctx_st {
   EVP_CIPHER /*const*/ *cipher ;
   int encrypt ;
   int buf_len ;
   unsigned char oiv[8] ;
   unsigned char iv[8] ;
   unsigned char buf[8] ;
   int num ;
   void *app_data ;
   int key_len ;
   union __anonunion_c_23 c ;
};
struct comp_method_st {
   int type ;
   char /*const*/ *name ;
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
struct X509_algor_st {
   ASN1_OBJECT *algorithm ;
   ASN1_TYPE *parameter ;
};
typedef struct X509_algor_st X509_ALGOR;
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
typedef struct X509_name_st X509_NAME;
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
struct AUTHORITY_KEYID_st;struct x509_st {
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
typedef struct x509_st X509;
struct lhash_node_st {
   void *data ;
   struct lhash_node_st *next ;
   unsigned long hash ;
};
typedef struct lhash_node_st LHASH_NODE;
struct lhash_st {
   LHASH_NODE **b ;
   int (*comp)() ;
   unsigned long (*hash)() ;
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
struct x509_store_ctx_st;typedef struct x509_store_ctx_st X509_STORE_CTX;
struct x509_store_st {
   int cache ;
   STACK *objs ;
   STACK *get_cert_methods ;
   int (*verify)(X509_STORE_CTX *ctx0 ) ;
   int (*verify_cb)(int ok , X509_STORE_CTX *ctx1 ) ;
   CRYPTO_EX_DATA ex_data ;
   int references ;
   int depth ;
};
typedef struct x509_store_st X509_STORE;
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
   int (*verify)(X509_STORE_CTX *ctx_0 ) ;
   int (*verify_cb)(int ok , X509_STORE_CTX *ctx_1 ) ;
   int (*get_issuer)(X509 **issuer_2 , X509_STORE_CTX *ctx_2 , X509 *x_2 ) ;
   int (*check_issued)(X509_STORE_CTX *ctx_3 , X509 *x_3 , X509 *issuer_3 ) ;
   int (*cleanup)(X509_STORE_CTX *ctx_4 ) ;
   int depth ;
   int valid ;
   int last_untrusted ;
   STACK *chain ;
   int error_depth ;
   int error ;
   X509 *current_cert ;
   X509 *current_issuer ;
   CRYPTO_EX_DATA ex_data ;
};
typedef int pem_password_cb(char *buf , int size , int rwflag , void *userdata );
struct ssl_st;
struct ssl_cipher_st {
   int valid ;
   char /*const*/ *name ;
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
struct ssl_ctx_st;typedef struct ssl_ctx_st SSL_CTX;
struct ssl3_enc_method;struct ssl_method_st {
   int version ;
   int (*ssl_new)(SSL *s_1 ) ;
   void (*ssl_clear)(SSL *s_2 ) ;
   void (*ssl_free)(SSL *s_3 ) ;
   int (*ssl_accept)(SSL *s_4 ) ;
   int (*ssl_connect)(SSL *s_5 ) ;
   int (*ssl_read)(SSL *s_6 , void *buf_6 , int len_6 ) ;
   int (*ssl_peek)(SSL *s_7 , void *buf_7 , int len_7 ) ;
   int (*ssl_write)(SSL *s_8 , void /*const*/ *buf_8 , int len_8 ) ;
   int (*ssl_shutdown)(SSL *s_9 ) ;
   int (*ssl_renegotiate)(SSL *s_10 ) ;
   int (*ssl_renegotiate_check)(SSL *s_11 ) ;
   long (*ssl_ctrl)(SSL *s_12 , int cmd_12 , long larg_12 , char *parg_12 ) ;
   long (*ssl_ctx_ctrl)(SSL_CTX *ctx_13 , int cmd_13 , long larg_13 , char *parg_13 ) ;
   SSL_CIPHER *(*get_cipher_by_char)(unsigned char /*const*/ *ptr_14 ) ;
   int (*put_cipher_by_char)(SSL_CIPHER /*const*/ *cipher_15 , unsigned char *ptr_15 ) ;
   int (*ssl_pending)(SSL *s_16 ) ;
   int (*num_ciphers)(void) ;
   SSL_CIPHER *(*get_cipher)(unsigned int ncipher_17 ) ;
   struct ssl_method_st *(*get_ssl_method)(int version_18 ) ;
   long (*get_timeout)(void) ;
   struct ssl3_enc_method *ssl3_enc ;
   int (*ssl_version)() ;
   long (*ssl_callback_ctrl)(SSL *s_19 , int cb_id_19 , void (*fp_19)() ) ;
   long (*ssl_ctx_callback_ctrl)(SSL_CTX *s_20 , int cb_id_20 , void (*fp_20)() ) ;
};
typedef struct ssl_method_st SSL_METHOD;
struct sess_cert_st;struct ssl_session_st {
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
struct __anonstruct_stats_37 {
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
struct cert_st;struct ssl_ctx_st {
   SSL_METHOD *method ;
   unsigned long options ;
   unsigned long mode ;
   STACK *cipher_list ;
   STACK *cipher_list_by_id ;
   struct x509_store_st *cert_store ;
   struct lhash_st *sessions ;
   unsigned long session_cache_size ;
   struct ssl_session_st *session_cache_head ;
   struct ssl_session_st *session_cache_tail ;
   int session_cache_mode ;
   long session_timeout ;
   int (*new_session_cb)(struct ssl_st *ssl_0 , SSL_SESSION *sess_0 ) ;
   void (*remove_session_cb)(struct ssl_ctx_st *ctx_1 , SSL_SESSION *sess_1 ) ;
   SSL_SESSION *(*get_session_cb)(struct ssl_st *ssl_2 , unsigned char *data_2 , int len_2 ,
                                  int *copy_2 ) ;
   struct __anonstruct_stats_37 stats ;
   int references ;
   void (*info_callback)() ;
   int (*app_verify_callback)() ;
   char *app_verify_arg ;
   struct cert_st *cert ;
   int read_ahead ;
   int verify_mode ;
   int verify_depth ;
   unsigned int sid_ctx_length ;
   unsigned char sid_ctx[32] ;
   int (*default_verify_callback)(int ok , X509_STORE_CTX *ctx ) ;
   int purpose ;
   int trust ;
   pem_password_cb *default_passwd_callback ;
   void *default_passwd_callback_userdata ;
   int (*client_cert_cb)() ;
   STACK *client_CA ;
   int quiet_shutdown ;
   CRYPTO_EX_DATA ex_data ;
   EVP_MD /*const*/ *rsa_md5 ;
   EVP_MD /*const*/ *md5 ;
   EVP_MD /*const*/ *sha1 ;
   STACK *extra_certs ;
   STACK *comp_methods ;
};
struct ssl2_state_st;struct ssl3_state_st;struct ssl_st {
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
   int init_num ;
   int init_off ;
   unsigned char *packet ;
   unsigned int packet_length ;
   struct ssl2_state_st *s2 ;
   struct ssl3_state_st *s3 ;
   int read_ahead ;
   int hit ;
   int purpose ;
   int trust ;
   STACK *cipher_list ;
   STACK *cipher_list_by_id ;
   EVP_CIPHER_CTX *enc_read_ctx ;
   EVP_MD /*const*/ *read_hash ;
   COMP_CTX *expand ;
   EVP_CIPHER_CTX *enc_write_ctx ;
   EVP_MD /*const*/ *write_hash ;
   COMP_CTX *compress ;
   struct cert_st *cert ;
   unsigned int sid_ctx_length ;
   unsigned char sid_ctx[32] ;
   SSL_SESSION *session ;
   int verify_mode ;
   int verify_depth ;
   int (*verify_callback)(int ok , X509_STORE_CTX *ctx ) ;
   void (*info_callback)() ;
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
   int first_packet ;
   int client_version ;
};
struct __anonstruct_tmp_38 {
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
   unsigned char /*const*/ *wpend_buf ;
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
   unsigned char *pad_data_UNUSED ;
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
   struct __anonstruct_tmp_38 tmp ;
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
   int offset ;
   int left ;
};
typedef struct ssl3_buffer_st SSL3_BUFFER;
struct __anonstruct_tmp_39 {
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
   EVP_CIPHER /*const*/ *new_sym_enc ;
   EVP_MD /*const*/ *new_hash ;
   SSL_COMP /*const*/ *new_compression ;
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
   unsigned char /*const*/ *wpend_buf ;
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
   struct __anonstruct_tmp_39 tmp ;
};
struct cert_pkey_st {
   X509 *x509 ;
   EVP_PKEY *privatekey ;
};
typedef struct cert_pkey_st CERT_PKEY;
struct cert_st {
   CERT_PKEY *key ;
   int valid ;
   unsigned long mask ;
   unsigned long export_mask ;
   RSA *rsa_tmp ;
   RSA *(*rsa_tmp_cb)(SSL *ssl_0 , int is_export_0 , int keysize_0 ) ;
   DH *dh_tmp ;
   DH *(*dh_tmp_cb)(SSL *ssl_1 , int is_export_1 , int keysize_1 ) ;
   CERT_PKEY pkeys[5] ;
   int references ;
};
struct sess_cert_st {
   STACK *cert_chain ;
   int peer_cert_type ;
   CERT_PKEY *peer_key ;
   CERT_PKEY peer_pkeys[5] ;
   RSA *peer_rsa_tmp ;
   DH *peer_dh_tmp ;
   int references ;
};
typedef struct sess_cert_st SESS_CERT;
struct ssl3_enc_method {
   int (*enc)(SSL * , int ) ;
   int (*mac)(SSL * , unsigned char * , int ) ;
   int (*setup_key_block)(SSL * ) ;
   int (*generate_master_secret)(SSL * , unsigned char * , unsigned char * , int ) ;
   int (*change_cipher_state)(SSL * , int ) ;
   int (*final_finish_mac)(SSL * , EVP_MD_CTX * , EVP_MD_CTX * , char /*const*/ * ,
                           int , unsigned char * ) ;
   int finish_mac_length ;
   int (*cert_verify_mac)(SSL * , EVP_MD_CTX * , unsigned char * ) ;
   char /*const*/ *client_finished_label ;
   int client_finished_label_len ;
   char /*const*/ *server_finished_label ;
   int server_finished_label_len ;
   int (*alert_value)(int ) ;
};

int mystate;     // TRACER shadows s->state
int mystateNext; // TRACER shadows s->s3->tmp.next_state

extern int unknown();

int main()
{
  SSL *s;
  int init = 1;
  // TRACER: inlining of the call ssl3_connect(s);
  BUF_MEM *buf ;
  unsigned long Time ;
  unsigned long tmp ;
  unsigned long l ;
  long num1 ;
  void (*cb)() ;
  int ret ;
  int new_state ;
  int state ;
  int skip ;
  int *tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;
  int tmp___5 ;
  int tmp___6 ;
  int tmp___7 ;
  int tmp___8 ;
  long tmp___9 ;

  int blastFlag;
  int NONDET;

  // TRACER shadows s->state
  // (0x04|(0x1000|0x2000)); 12292 in decimal 
  mystate /*s->state*/ = 0x3004; 
 
  blastFlag = 0;
  
  //BLAST tmp = (unsigned long )time((time_t *)((void *)0)); Time = tmp;
  tmp = unknown();
  //cb = (void (*)())((void *)0);
  ret = -1;
  skip = 0;
  //BLAST RAND_add((void const *)(& Time), (int )sizeof(Time), (double )0);
  //BLAST ERR_clear_error();
  //BLAST tmp___0 = __errno_location(); 
  /* (*tmp___0) = 0; */
  /* if ((unsigned long )s->info_callback != (unsigned long )((void *)0)) { */
  /*   cb = s->info_callback; */
  /* } else { */
  /*   if ((unsigned long )(s->ctx)->info_callback != (unsigned long )((void *)0)) { */
  /*     cb = (s->ctx)->info_callback; */
  /*   } */
  /* } */
  /* s->in_handshake ++; */
  //BLAST tmp___1 = SSL_state(s); 
  if (tmp___1 /* ARMC: & 12288*/) { 
    //BLAST tmp___2 = SSL_state(s); 
    if (tmp___2 /* ARMC: & 16384*/) { 
      //BLAST SSL_clear(s);
    }
  } else {
    //BLAST SSL_clear(s);
  } 
    
  while (1) {
    state = mystate;                // TRACER shadows s->state      
    switch (mystate /*s->state*/) { // TRACER shadows s->state
    case 12292:
      // s->new_session = 1;
      // TRACER shadows s->state
      mystate /*s->state*/ = 4096;
      //(s->ctx)->stats.sess_connect_renegotiate ++;
    case 16384: 
    case  4096: 
    case 20480: 
    case  4099:
      /* s->server = 0; */
      /* if ((unsigned long )cb != (unsigned long )((void *)0)) {  */
      /* 	//BLAST ((*cb))(s, 16, 1); */
      /* }  */
      NONDET=unknown();
      if (NONDET) /*((s->version  & 65280) != 768)*/ {
	//BLAST ERR_put_error(20, 132, 157, (char const *)"s3_clnt.c", 146);
	ret = -1;
	goto end;
      }
      //  s->type = 4096;
      NONDET=unknown();
      if (NONDET) /*((unsigned long )s->init_buf == (unsigned long )((void *)0))*/ {
	//BLAST buf = BUF_MEM_new(); 
	/*BLAST if ((unsigned long )buf == (unsigned long )((void *)0)) {
	  ret = -1;
	  goto end;
	  }*/
	//BLAST tmp___3 = BUF_MEM_grow(buf, 16384); 
	tmp___3 = unknown();
	if (! tmp___3) {
	  ret = -1;
	  goto end;
	}
	//s->init_buf = buf;
      }
      //BLAST tmp___4 = ssl3_setup_buffers(s); 
      tmp___4 = unknown();
      if (! tmp___4) { 
	ret = -1;
	goto end;
      }
      //BLAST tmp___5 = ssl_init_wbio_buffer(s, 0); 
      tmp___5 = unknown();
      if (! tmp___5) { 
	ret = -1;
	goto end;
      }
      //BLAST ssl3_init_finished_mac(s);
      // TRACER shadows s->state
      mystate /*s->state*/ = 4368; 
      //(s->ctx)->stats.sess_connect ++;
      //s->init_num = 0;
      break;
    case 4368: 
    case 4369:
      //s->shutdown = 0;
      //BLAST ret = ssl3_client_hello(s);
      ret = unknown();
      if(blastFlag == 0) blastFlag = 1;
      if (ret <= 0) {
	goto end;
      }
      // TRACER shadows s->state
      mystate /*s->state*/  = 4384; 
      //s->init_num = 0;
      NONDET=unknown();
      if (NONDET) /*((unsigned long )s->bbio != (unsigned long )s->wbio)*/ { 
	//BLAST s->wbio = BIO_push(s->bbio, s->wbio);
      }
      break;
    case 4384: 
    case 4385:
      //BLAST ret = ssl3_get_server_hello(s);
      ret = unknown();
      if(blastFlag == 1) blastFlag = 2;
      if (ret <= 0) {
	goto end;
      }
      NONDET=unknown();
      if (NONDET) /*(s->hit)*/ { 
	// TRACER shadows s->state
	mystate /*s->state*/ = 4560; 
      } else {
	// TRACER shadows s->state
	mystate /*s->state*/ = 4400; 
      }
      //s->init_num = 0;
      break;
    case 4400: 
    case 4401: 
      NONDET=unknown();
      if (NONDET) /*(((s->s3)->tmp.new_cipher)->algorithms & 256UL)*/ {
	skip = 1;
      } else {
	//BLAST ret = ssl3_get_server_certificate(s);
	ret = unknown();
	if(blastFlag == 2) blastFlag = 3;
	if (ret <= 0) {
	  goto end;
	}
      }
      // TRACER shadows s->state
      mystate /*s->state*/ = 4416; 
      //s->init_num = 0;
      break;
    case 4416: 
    case 4417:
      //BLAST ret = ssl3_get_key_exchange(s);
      ret = unknown();
      if(blastFlag == 3) blastFlag = 4;
      if (ret <= 0) {
	goto end;
      }
      // TRACER shadows s->state
      mystate /*s->state*/  = 4432; 
      //s->init_num = 0;
      //BLAST tmp___6 = ssl3_check_cert_and_algorithm(s); 
      tmp___6 = unknown();
      if (! tmp___6) {
	ret = -1;
	goto end;
      }
      break;
    case 4432: 
    case 4433:
      //BLAST ret = ssl3_get_certificate_request(s);
      ret = unknown();
      // BLAST
      //if(blastFlag == 5) ERROR: goto ERROR;
      // TRACER
      _TRACER_abort(blastFlag == 5);	
      if (ret <= 0) {
	goto end;
      }
      // TRACER shadows s->state
      mystate /*s->state*/ = 4448; 
      //s->init_num = 0;
      break;
    case 4448: 
    case 4449:
      //BLAST ret = ssl3_get_server_done(s);
      ret = unknown();
      if(blastFlag == 4) blastFlag = 5;
      if (ret <= 0) {
	goto end;
      }
      NONDET=unknown();
      if (NONDET) /*((s->s3)->tmp.cert_req)*/ { 
	// TRACER shadows s->state
	mystate /*s->state*/  = 4464; 
      } else {
	// TRACER shadows s->state
	mystate /*s->state*/ = 4480; 
      }
      //s->init_num = 0;
      break;
    case 4464: 
    case 4465: 
    case 4466: 
    case 4467:
      //BLAST ret = ssl3_send_client_certificate(s);
      ret = unknown();
      if (ret <= 0) {
	goto end;
      }
      // TRACER shadows s->state
      mystate /*s->state*/ = 4480; 
      //s->init_num = 0;
      break;
    case 4480: 
    case 4481:
      //BLAST ret = ssl3_send_client_key_exchange(s);
      ret = unknown();
      if (ret <= 0) {
	goto end;
      }
      //l = ((s->s3)->tmp.new_cipher)->algorithms;
      NONDET=unknown();
      if (NONDET) /*((s->s3)->tmp.cert_req == 1)*/ {
	// TRACER shadows s->state
	mystate /*s->state*/  = 4496; 
      } else {
	// TRACER shadows s->state
	mystate /*s->state*/ = 4512; 
	//(s->s3)->change_cipher_spec = 0;
      }
      //s->init_num = 0;
      break;
    case 4496: 
    case 4497:
      //BLAST ret = ssl3_send_client_verify(s);
      ret = unknown();
      if (ret <= 0) {
	goto end;
      }
      // TRACER shadows s->state
      mystate /*s->state*/ = 4512; 
      //s->init_num = 0;
      //(s->s3)->change_cipher_spec = 0;
      break;
    case 4512:   
    case 4513:
      //BLAST ret = ssl3_send_change_cipher_spec(s, 4512, 4513);
      ret = unknown();
      if (ret <= 0) {
	goto end;
      }
      // TRACER shadows s->state
      mystate /*s->state*/ = 4528; 
      //s->init_num = 0;
      //(s->session)->cipher = (s->s3)->tmp.new_cipher;
      NONDET=unknown();
      if(NONDET)/*((unsigned long )(s->s3)->tmp.new_compression == (unsigned long )((void *)0))*/ { 
	//(s->session)->compress_meth = 0;
      } else {
	//(s->session)->compress_meth = ((s->s3)->tmp.new_compression)->id;
      }
      //BLAST tmp___7 = ((*(((s->method)->ssl3_enc)->setup_key_block)))(s); 
      tmp___7 = unknown();
      if (! tmp___7) {
	ret = -1;
	goto end;
      }
      //BLAST tmp___8 = ((*(((s->method)->ssl3_enc)->change_cipher_state)))(s, 18); 
      tmp___8 = unknown();
      if (! tmp___8) {
	ret = -1;
	goto end;
      }
      break;
    case 4528: 
    case 4529:
     //BLAST ret = ssl3_send_finished(s, 4528, 4529, ((s->method)->ssl3_enc)->client_finished_label,
      ret = unknown();	
      //BLAST ((s->method)->ssl3_enc)->client_finished_label_len);
      if (ret <= 0) {
	goto end;
      }
      // TRACER shadows s->state
      mystate /*s->state*/ = 4352; 
      //(s->s3)->flags &= -5L;
      NONDET=unknown();
      if (NONDET) /*(s->hit)*/ {
	// TRACER shadows (s->s3)->tmp.next_state
	mystateNext /* (s->s3)->tmp.next_state*/ =3;
	NONDET=unknown();
	if (NONDET) /*((s->s3)->flags & 2L )*/ {
	  // TRACER shadows s->state
	  mystate /*s->state*/ = 3;
	  //(s->s3)->flags |= 4L;
	  //(s->s3)->delay_buf_pop_ret = 0;
	}
      } else {
	// TRACER shadows 
	mystateNext /*(s->s3)->tmp.next_state*/ = 4560;
      }
      // s->init_num = 0;
      break;
    case 4560: 
    case 4561:
      //BLAST ret = ssl3_get_finished(s, 4560, 4561);
      ret = unknown();
      if (ret <= 0) {
	goto end;
      }
      NONDET=unknown();
      if (NONDET) /*(s->hit)*/ { 
	// TRACER shadows s->state
	mystate /*s->state*/ = 4512; 
      } else {
	// TRACER shadows s->state
	mystate /*s->state*/ = 3; 
      }
      //s->init_num = 0;
      break;
    case 4352:
      //BLAST num1 = BIO_ctrl(s->wbio, 3, 0L, (void *)0);
      num1 = unknown();
      if (num1 > 0L) {
	//s->rwstate = 2;
	//BLAST tmp___9 = BIO_ctrl(s->wbio, 11, 0L, (void *)0); 
	tmp___9 = unknown();
	num1 = (long )((int )tmp___9);
	if (num1 <= 0L) { 
	  ret = -1;
	  goto end;
	}
	//s->rwstate = 1;
      }
      // TRACER shadows s->state
      mystate /*s->state*/  = mystateNext /*(s->s3)->tmp.next_state*/; 
      break;
    case 3:
      //BLAST ssl3_cleanup_key_block(s);
      NONDET=unknown();
      if (NONDET) /*((unsigned long )s->init_buf != (unsigned long )((void *)0))*/ {
	//BLAST BUF_MEM_free(s->init_buf);
	//s->init_buf = (BUF_MEM *)((void *)0);
      }
      NONDET=unknown();
      if (NONDET) /*(! ((s->s3)->flags & 4L))*/ { 
	//BLAST ssl_free_wbio_buffer(s);
      }
      //s->init_num = 0;
      //s->new_session = 0;
      //BLAST ssl_update_cache(s, 1);
      NONDET=unknown();
      if (NONDET) /*(s->hit)*/ { 
	//(s->ctx)->stats.sess_hit ++;
      } 
      ret = 1;
      // TRACER : s->handshake_func = (int (*)())(& ssl3_connect);
      //(s->ctx)->stats.sess_connect_good ++;
      NONDET=unknown();
      if (NONDET) /*((unsigned long )cb != (unsigned long )((void *)0))*/ { 
	//BLAST  ((*cb))(s, 32, 1);
      }
      goto end;
    default: 
      //BLAST ERR_put_error(20, 132, 255, (char const *)"s3_clnt.c", 418);
      ret = -1;
      goto end;
    } // end switch
    NONDET=unknown();
    if (NONDET) /*(! (s->s3)->tmp.reuse_message)*/ { 
      if (! skip) {
	NONDET=unknown();
	if (NONDET) /*(s->debug)*/ {
	  //BLAST ret = (int )BIO_ctrl(s->wbio, 11, 0L, (void *)0); 
	  ret = unknown();	    
	  if (ret <= 0) {
	    goto end;
	  }
	} 
	NONDET=unknown();
	if (NONDET) /*((unsigned long )cb != (unsigned long )((void *)0))*/ { 
	  if (mystate /*s->state*/ != state) {  
	    // TRACER shadows s->state
	    new_state = mystate /*s->state*/;
	    mystate /*s->state*/ = state;
	    //BLAST ((*cb))(s, 4097, 1);
	    mystate /*s->state*/ = new_state;
	  }
	}
      }
    }
    skip = 0;
  } // end while
 end:
  //s->in_handshake --;
  NONDET=unknown();
  if (NONDET) /*((unsigned long )cb != (unsigned long )((void *)0))*/ { 
    // BLAST ((*cb))(s, 4098, ret);
  }
  return (ret);
  //ERROR:goto ERROR;
  return 0;
}

