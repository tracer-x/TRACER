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
   int (*comp)(char const * const * , char const * const * ) ;
};
typedef struct stack_st STACK;
struct bio_st;
struct crypto_ex_data_st {
   STACK *sk ;
   int dummy ;
};
typedef struct crypto_ex_data_st CRYPTO_EX_DATA;
typedef struct bio_st BIO;
typedef void bio_info_cb(struct bio_st * , int , char const * , int , long ,
                         long );struct bio_method_st {
   int type ;
   char const *name ;
   int (*bwrite)(BIO * , char const * , int ) ;
   int (*bread)(BIO * , char * , int ) ;
   int (*bputs)(BIO * , char const * ) ;
   int (*bgets)(BIO * , char * , int ) ;
   long (*ctrl)(BIO * , int , long , void * ) ;
   int (*create)(BIO * ) ;
   int (*destroy)(BIO * ) ;
   long (*callback_ctrl)(BIO * , int , bio_info_cb * ) ;
};
typedef struct bio_method_st BIO_METHOD;
struct bio_st {
   BIO_METHOD *method ;
   long (*callback)(struct bio_st * , int , char const * , int , long , long ) ;
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
   char const *sn ;
   char const *ln ;
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
   char const *name ;
   int (*rsa_pub_enc)(int flen , unsigned char *from , unsigned char *to , RSA *rsa ,
                      int padding ) ;
   int (*rsa_pub_dec)(int flen , unsigned char *from , unsigned char *to , RSA *rsa ,
                      int padding ) ;
   int (*rsa_priv_enc)(int flen , unsigned char *from , unsigned char *to , RSA *rsa ,
                       int padding ) ;
   int (*rsa_priv_dec)(int flen , unsigned char *from , unsigned char *to , RSA *rsa ,
                       int padding ) ;
   int (*rsa_mod_exp)(BIGNUM *r0 , BIGNUM *I , RSA *rsa ) ;
   int (*bn_mod_exp)(BIGNUM *r , BIGNUM *a , BIGNUM const *p , BIGNUM const *m ,
                     BN_CTX *ctx , BN_MONT_CTX *m_ctx ) ;
   int (*init)(RSA *rsa ) ;
   int (*finish)(RSA *rsa ) ;
   int flags ;
   char *app_data ;
   int (*rsa_sign)(int type , unsigned char *m , unsigned int m_len , unsigned char *sigret ,
                   unsigned int *siglen , RSA *rsa ) ;
   int (*rsa_verify)(int dtype , unsigned char *m , unsigned int m_len , unsigned char *sigbuf ,
                     unsigned int siglen , RSA *rsa ) ;
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
   char const *name ;
   int (*generate_key)(DH *dh ) ;
   int (*compute_key)(unsigned char *key , BIGNUM *pub_key , DH *dh ) ;
   int (*bn_mod_exp)(DH *dh , BIGNUM *r , BIGNUM *a , BIGNUM const *p , BIGNUM const *m ,
                     BN_CTX *ctx , BN_MONT_CTX *m_ctx ) ;
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
   char const *name ;
   DSA_SIG *(*dsa_do_sign)(unsigned char const *dgst , int dlen , DSA *dsa ) ;
   int (*dsa_sign_setup)(DSA *dsa , BN_CTX *ctx_in , BIGNUM **kinvp , BIGNUM **rp ) ;
   int (*dsa_do_verify)(unsigned char const *dgst , int dgst_len , DSA_SIG *sig ,
                        DSA *dsa ) ;
   int (*dsa_mod_exp)(DSA *dsa , BIGNUM *rr , BIGNUM *a1 , BIGNUM *p1 , BIGNUM *a2 ,
                      BIGNUM *p2 , BIGNUM *m , BN_CTX *ctx , BN_MONT_CTX *in_mont ) ;
   int (*bn_mod_exp)(DSA *dsa , BIGNUM *r , BIGNUM *a , BIGNUM const *p , BIGNUM const *m ,
                     BN_CTX *ctx , BN_MONT_CTX *m_ctx ) ;
   int (*init)(DSA *dsa ) ;
   int (*finish)(DSA *dsa ) ;
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
   EVP_MD const *digest ;
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
   int (*init)(EVP_CIPHER_CTX *ctx , unsigned char const *key , unsigned char const *iv ,
               int enc ) ;
   int (*do_cipher)(EVP_CIPHER_CTX *ctx , unsigned char *out , unsigned char const *in ,
                    unsigned int inl ) ;
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
   EVP_CIPHER const *cipher ;
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
   int (*verify)(X509_STORE_CTX *ctx ) ;
   int (*verify_cb)(int ok , X509_STORE_CTX *ctx ) ;
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
   int (*verify)(X509_STORE_CTX *ctx ) ;
   int (*verify_cb)(int ok , X509_STORE_CTX *ctx ) ;
   int (*get_issuer)(X509 **issuer , X509_STORE_CTX *ctx , X509 *x ) ;
   int (*check_issued)(X509_STORE_CTX *ctx , X509 *x , X509 *issuer ) ;
   int (*cleanup)(X509_STORE_CTX *ctx ) ;
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
struct comp_method_st {
   int type ;
   char const *name ;
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
typedef int pem_password_cb(char *buf , int size , int rwflag , void *userdata );
struct ssl_st;
struct ssl_cipher_st {
   int valid ;
   char const *name ;
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
   int (*ssl_new)(SSL *s ) ;
   void (*ssl_clear)(SSL *s ) ;
   void (*ssl_free)(SSL *s ) ;
   int (*ssl_accept)(SSL *s ) ;
   int (*ssl_connect)(SSL *s ) ;
   int (*ssl_read)(SSL *s , void *buf , int len ) ;
   int (*ssl_peek)(SSL *s , void *buf , int len ) ;
   int (*ssl_write)(SSL *s , void const *buf , int len ) ;
   int (*ssl_shutdown)(SSL *s ) ;
   int (*ssl_renegotiate)(SSL *s ) ;
   int (*ssl_renegotiate_check)(SSL *s ) ;
   long (*ssl_ctrl)(SSL *s , int cmd , long larg , char *parg ) ;
   long (*ssl_ctx_ctrl)(SSL_CTX *ctx , int cmd , long larg , char *parg ) ;
   SSL_CIPHER *(*get_cipher_by_char)(unsigned char const *ptr ) ;
   int (*put_cipher_by_char)(SSL_CIPHER const *cipher , unsigned char *ptr ) ;
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
   int (*new_session_cb)(struct ssl_st *ssl , SSL_SESSION *sess ) ;
   void (*remove_session_cb)(struct ssl_ctx_st *ctx , SSL_SESSION *sess ) ;
   SSL_SESSION *(*get_session_cb)(struct ssl_st *ssl , unsigned char *data , int len ,
                                  int *copy ) ;
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
   EVP_MD const *rsa_md5 ;
   EVP_MD const *md5 ;
   EVP_MD const *sha1 ;
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
   EVP_MD const *read_hash ;
   COMP_CTX *expand ;
   EVP_CIPHER_CTX *enc_write_ctx ;
   EVP_MD const *write_hash ;
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
   unsigned char const *wpend_buf ;
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
   EVP_CIPHER const *new_sym_enc ;
   EVP_MD const *new_hash ;
   SSL_COMP const *new_compression ;
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
   unsigned char const *wpend_buf ;
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
   RSA *(*rsa_tmp_cb)(SSL *ssl , int is_export , int keysize ) ;
   DH *dh_tmp ;
   DH *(*dh_tmp_cb)(SSL *ssl , int is_export , int keysize ) ;
   CERT_PKEY pkeys[5] ;
   int references ;
};
typedef struct cert_st CERT;
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
   int (*final_finish_mac)(SSL * , EVP_MD_CTX * , EVP_MD_CTX * , char const * ,
                           int , unsigned char * ) ;
   int finish_mac_length ;
   int (*cert_verify_mac)(SSL * , EVP_MD_CTX * , unsigned char * ) ;
   char const *client_finished_label ;
   int client_finished_label_len ;
   char const *server_finished_label ;
   int server_finished_label_len ;
   int (*alert_value)(int ) ;
};
extern BUF_MEM *BUF_MEM_new(void) ;
extern void BUF_MEM_free(BUF_MEM *a ) ;
extern int BUF_MEM_grow(BUF_MEM *str , int len ) ;
extern int RAND_pseudo_bytes(unsigned char *buf , int num ) ;
extern void RAND_add(void const *buf , int num , double entropy ) ;
extern int sk_num(STACK const * ) ;
extern char *sk_value(STACK const * , int ) ;
extern STACK *sk_new_null(void) ;
extern void sk_free(STACK * ) ;
extern void sk_pop_free(STACK *st , void (*func)(void * ) ) ;
extern int sk_push(STACK *st , char *data ) ;
extern char *sk_shift(STACK *st ) ;
extern int CRYPTO_add_lock(int *pointer , int amount , int type , char const *file ,
                           int line ) ;
extern long BIO_ctrl(BIO *bp , int cmd , long larg , void *parg ) ;
extern time_t time(time_t *__timer ) ;
extern int BN_num_bits(BIGNUM const *a ) ;
extern void BN_clear_free(BIGNUM *a ) ;
extern BIGNUM *BN_bin2bn(unsigned char const *s , int len , BIGNUM *ret ) ;
extern int BN_bn2bin(BIGNUM const *a , unsigned char *to ) ;
extern BIGNUM *BN_dup(BIGNUM const *a ) ;
extern char *ASN1_dup(int (*i2d)() , char *(*d2i)() , char *x ) ;
extern int RSA_private_decrypt(int flen , unsigned char *from , unsigned char *to ,
                               RSA *rsa , int padding ) ;
extern int RSA_sign(int type , unsigned char *m , unsigned int m_len , unsigned char *sigret ,
                    unsigned int *siglen , RSA *rsa ) ;
extern int RSA_verify(int type , unsigned char *m , unsigned int m_len , unsigned char *sigbuf ,
                      unsigned int siglen , RSA *rsa ) ;
extern void DH_free(DH *dh ) ;
extern int DH_generate_key(DH *dh ) ;
extern int DH_compute_key(unsigned char *key , BIGNUM *pub_key , DH *dh ) ;
extern DH *d2i_DHparams(DH **a , unsigned char **pp , long length ) ;
extern int i2d_DHparams(DH *a , unsigned char **pp ) ;
extern int DSA_verify(int type , unsigned char const *dgst , int dgst_len , unsigned char *sigbuf ,
                      int siglen , DSA *dsa ) ;
extern void EVP_DigestInit(EVP_MD_CTX *ctx , EVP_MD const *type ) ;
extern void EVP_DigestUpdate(EVP_MD_CTX *ctx , void const *d , unsigned int cnt ) ;
extern void EVP_DigestFinal(EVP_MD_CTX *ctx , unsigned char *md , unsigned int *s ) ;
extern int EVP_SignFinal(EVP_MD_CTX *ctx , unsigned char *md , unsigned int *s , EVP_PKEY *pkey ) ;
extern EVP_MD *EVP_dss1(void) ;
extern int EVP_PKEY_size(EVP_PKEY *pkey ) ;
extern void EVP_PKEY_free(EVP_PKEY *pkey ) ;
extern int i2d_X509_NAME(X509_NAME *a , unsigned char **pp ) ;
extern void X509_free(X509 *a ) ;
extern X509 *d2i_X509(X509 **a , unsigned char **pp , long length ) ;
extern EVP_PKEY *X509_get_pubkey(X509 *x ) ;
extern int X509_certificate_type(X509 *x , EVP_PKEY *pubkey ) ;
extern void *memcpy(void * __restrict __dest , void const * __restrict __src ,
                    size_t __n ) ;
extern void *memset(void *__s , int __c , size_t __n ) ;
extern int *__errno_location(void) __attribute__((__const__)) ;
extern void ERR_put_error(int lib , int func , int reason , char const *file , int line ) ;
extern void ERR_clear_error(void) ;
extern int SSL_clear(SSL *s ) ;
SSL_METHOD *SSLv3_server_method(void) ;
extern STACK *SSL_get_client_CA_list(SSL *s ) ;
extern int SSL_state(SSL *ssl ) ;
extern SSL_METHOD *sslv3_base_method(void) ;
extern SESS_CERT *ssl_sess_cert_new(void) ;
extern int ssl_get_new_session(SSL *s , int session ) ;
extern int ssl_get_prev_session(SSL *s , unsigned char *session , int len ) ;
extern STACK *ssl_bytes_to_cipher_list(SSL *s , unsigned char *p , int num , STACK **skp ) ;
extern void ssl_update_cache(SSL *s , int mode ) ;
extern int ssl_verify_cert_chain(SSL *s , STACK *sk ) ;
extern X509 *ssl_get_server_send_cert(SSL * ) ;
extern EVP_PKEY *ssl_get_sign_pkey(SSL * , SSL_CIPHER * ) ;
extern STACK *ssl_get_ciphers_by_id(SSL *s ) ;
extern int ssl_verify_alarm_type(long type ) ;
extern int ssl3_put_cipher_by_char(SSL_CIPHER const *c , unsigned char *p ) ;
extern void ssl3_init_finished_mac(SSL *s ) ;
int ssl3_send_server_certificate(SSL *s ) ;
extern int ssl3_get_finished(SSL *s , int state_a , int state_b ) ;
extern int ssl3_send_change_cipher_spec(SSL *s , int state_a , int state_b ) ;
extern void ssl3_cleanup_key_block(SSL *s ) ;
extern int ssl3_do_write(SSL *s , int type ) ;
extern void ssl3_send_alert(SSL *s , int level , int desc ) ;
extern int ssl3_get_req_cert_type(SSL *s , unsigned char *p ) ;
extern long ssl3_get_message(SSL *s , int st1 , int stn , int mt , long max , int *ok ) ;
extern int ssl3_send_finished(SSL *s , int a , int b , char const *sender , int slen ) ;
extern unsigned long ssl3_output_cert_chain(SSL *s , X509 *x ) ;
extern SSL_CIPHER *ssl3_choose_cipher(SSL *ssl , STACK *have , STACK *pref ) ;
extern int ssl3_setup_buffers(SSL *s ) ;
int ssl3_accept(SSL *s ) ;
extern int ssl_init_wbio_buffer(SSL *s , int push ) ;
extern void ssl_free_wbio_buffer(SSL *s ) ;
static SSL_METHOD *ssl3_get_server_method(int ver ) ;
static int ssl3_get_client_hello(SSL *s ) ;
static int ssl3_check_client_hello(SSL *s ) ;
static int ssl3_send_server_hello(SSL *s ) ;
static int ssl3_send_server_key_exchange(SSL *s ) ;
static int ssl3_send_certificate_request(SSL *s ) ;
static int ssl3_send_server_done(SSL *s ) ;
static int ssl3_get_client_key_exchange(SSL *s ) ;
static int ssl3_get_client_certificate(SSL *s ) ;
static int ssl3_get_cert_verify(SSL *s ) ;
static int ssl3_send_hello_request(SSL *s ) ;
static SSL_METHOD *ssl3_get_server_method(int ver )
{ SSL_METHOD *tmp ;
  {
  if (ver == 768) { tmp = SSLv3_server_method(); return (tmp);
  } else {
    return ((SSL_METHOD *)((void *)0));
  }
}
}
SSL_METHOD *SSLv3_server_method(void) ;static int init = 1;
static SSL_METHOD SSLv3_server_data ;
SSL_METHOD *SSLv3_server_method(void)
{ char *tmp ;
  {
  if (init) {
    tmp = (char *)sslv3_base_method(); memcpy((void * )((char *)(& SSLv3_server_data)), (void const * )tmp,
           sizeof(SSL_METHOD ));
    SSLv3_server_data.ssl_accept = & ssl3_accept;
    SSLv3_server_data.get_ssl_method = & ssl3_get_server_method;
    init = 0;
  }
  return (& SSLv3_server_data);
}
}

int main()
{
  SSL *s = 0;
  return ssl3_accept(s);
}

int ssl3_accept(SSL *s )
{ 
  BUF_MEM *buf ;
  unsigned long l ;
  unsigned long Time ;
  unsigned long tmp ;
  void (*cb)() ;
  long num1 ;
  int ret ;
  int new_state ;
  int state ;
  int skip ;
  int got_new_session ;
  int *tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;
  int tmp___5 ;
  int tmp___6 ;
  int tmp___7 ;
  long tmp___8 ;
  int tmp___9 ;
  int tmp___10 ;
  
  int blastFlag;

  {
    s->state = 8464;
    blastFlag = 0;

    //tmp = (unsigned long )time((time_t *)((void *)0)); 
    Time = tmp;
    cb = (void (*)())((void *)0);
    ret = -1;
    skip = 0;
    got_new_session = 0;
    //RAND_add((void const *)(& Time), (int )sizeof(Time), (double )0);
    //ERR_clear_error();
    //tmp___0 = __errno_location(); (*tmp___0) = 0;
    if ((unsigned long )s->info_callback != (unsigned long )((void *)0)) { 
      cb = s->info_callback;
    } else {
      if ((unsigned long )(s->ctx)->info_callback != (unsigned long )((void *)0)) { 
	cb = (s->ctx)->info_callback;
      }
    } 
    s->in_handshake ++;
    //tmp___1 = SSL_state(s); 
    if (tmp___1 & 12288) { 
      //tmp___2 = SSL_state(s); 
      if (tmp___2 & 16384) { 
	//SSL_clear(s);
      }
    } else {
      //SSL_clear(s);
    } 
    if ((unsigned long )s->cert == (unsigned long )((void *)0)) {
      //ERR_put_error(20, 128, 179, (char const *)"s3_srvr.c", 187);
      return (-1);
    }
    while (1) {
      state = s->state;
      switch (s->state) {
      case 12292:
	s->new_session = 1;
      case 16384: ;
      case 8192: ;
      case 24576: ;
      case 8195:
	s->server = 1;
	if ((unsigned long )cb != (unsigned long )((void *)0)) { 
	  //((*cb))(s, 16, 1);
	} 
	if (s->version >> 8 != 3) {
	  //ERR_put_error(20, 128, 157, (char const *)"s3_srvr.c", 211);
	  return (-1);
	}
	s->type = 8192;
	if ((unsigned long )s->init_buf == (unsigned long )((void *)0)) {
	  //buf = BUF_MEM_new(); 
	  if ((unsigned long )buf == (unsigned long )((void *)0)) {
	    ret = -1;
	    goto end;
	  }
	  //tmp___3 = BUF_MEM_grow(buf, 16384); 
	  if (! tmp___3) {
	    ret = -1;
	    goto end;
	  }
	  s->init_buf = buf;
	}
	//tmp___4 = ssl3_setup_buffers(s); 
	if (! tmp___4) {
	  ret = -1;
	  goto end;
	}
	s->init_num = 0;
	if (s->state != 12292) {
	  //tmp___5 = ssl_init_wbio_buffer(s, 1); 
	  if (! tmp___5) { 
	    ret = -1;
	    goto end;
	  }
	  //ssl3_init_finished_mac(s);
	  s->state = 8464;
	  (s->ctx)->stats.sess_accept ++;
	} else {
	  (s->ctx)->stats.sess_accept_renegotiate ++;
	  s->state = 8480;
	}
	break;
      case 8480: ;
      case 8481:
	s->shutdown = 0;
	//ret = ssl3_send_hello_request(s);
	if (ret <= 0) {
	  goto end;
	}
	(s->s3)->tmp.next_state = 8482;
	s->state = 8448;
	s->init_num = 0;
	//ssl3_init_finished_mac(s);
	break;
      case 8482:
	s->state = 3;
	break;
      case 8464: ;
      case 8465: ;
      case 8466:
	s->shutdown = 0;
	//ret = ssl3_get_client_hello(s);
	if(blastFlag == 0) blastFlag = 1;
	if (ret <= 0) {
	  goto end;
	}
	got_new_session = 1;
	s->state = 8496;
	s->init_num = 0;
	break;
      case 8496: ;
      case 8497:
	//ret = ssl3_send_server_hello(s);
	if(blastFlag == 1) blastFlag = 2;
	if (ret <= 0) {
	  goto end;
	}
	if (s->hit) { 
	  s->state = 8656;
	} else {
	  s->state = 8512;
	}
	s->init_num = 0;
	break;
      case 8512: ;
      case 8513: ;
	if (((s->s3)->tmp.new_cipher)->algorithms & 256UL) {
	  skip = 1;
	} else {
	  //ret = ssl3_send_server_certificate(s);
	  if(blastFlag == 2) blastFlag = 6;
	  if (ret <= 0) {
	    goto end;
	  }
	}
	s->state = 8528;
	s->init_num = 0;
	break;
      case 8528: ;
      case 8529:
	l = ((s->s3)->tmp.new_cipher)->algorithms;
	if (s->options & 2097152UL) { 
	  (s->s3)->tmp.use_rsa_tmp = 1;
	} else {
	  (s->s3)->tmp.use_rsa_tmp = 0;
	}
	if ((s->s3)->tmp.use_rsa_tmp) {
	  goto _L___0;
	} else {
	  if (l & 30UL) {
	    goto _L___0;
	  } else {
	    if (l & 1UL) { 
	      if ((unsigned long )(s->cert)->pkeys[0].privatekey == (unsigned long )((void *)0)) {
		goto _L___0;
	      } else {
		if (((s->s3)->tmp.new_cipher)->algo_strength & 2UL) { 
		  //tmp___6 = EVP_PKEY_size((s->cert)->pkeys[0].privatekey); 
		  if (((s->s3)->tmp.new_cipher)->algo_strength & 4UL) { 
		    tmp___7 = 512;
		  } else {
		    tmp___7 = 1024;
		  }
              if (tmp___6 * 8 > tmp___7) {
	      _L___0:
	      _L:
                //ret = ssl3_send_server_key_exchange(s);
		if(blastFlag == 6) blastFlag = 7;
                if (ret <= 0) {
                  goto end;
                }
              } else {
                skip = 1;
              }
		} else {
		  skip = 1;
		}
	      }
	    } else {
	      skip = 1;
	    }
	  }
	}
	s->state = 8544;
	s->init_num = 0;
	break;
      case 8544: ;
      case 8545: ;
	if (s->verify_mode & 1) { 
	  if ((unsigned long )(s->session)->peer != (unsigned long )((void *)0)) { 
	    if (s->verify_mode & 4) {
	      skip = 1;
	      (s->s3)->tmp.cert_request = 0;
	      s->state = 8560;
	    } else {
	      goto _L___2;
	    }
	  } else {
	  _L___2:
	    if (((s->s3)->tmp.new_cipher)->algorithms & 256UL) { 
	      if (s->verify_mode & 2) {
		goto _L___1;
	      } else {
		skip = 1;
		(s->s3)->tmp.cert_request = 0;
		s->state = 8560;
	      }
	    } else {
	    _L___1:
	      (s->s3)->tmp.cert_request = 1;
	      //ret = ssl3_send_certificate_request(s);
	      if(blastFlag == 8) goto ERROR;
	      if (ret <= 0) {
		goto end;
	      }
	      s->state = 8448;
	      (s->s3)->tmp.next_state = 8576;
	      s->init_num = 0;
	    }
	  }
	} else {
	  skip = 1;
	  (s->s3)->tmp.cert_request = 0;
	  s->state = 8560;
	}
	break;
      case 8560: ;
      case 8561:
	//ret = ssl3_send_server_done(s);
	if (ret <= 0) {
	  goto end;
	}
	(s->s3)->tmp.next_state = 8576;
	s->state = 8448;
	s->init_num = 0;
	break;
      case 8448:
	//num1 = BIO_ctrl(s->wbio, 3, 0L, (void *)0);
	if (num1 > 0L) {
	  s->rwstate = 2;
	  //tmp___8 = BIO_ctrl(s->wbio, 11, 0L, (void *)0); 
	  num1 = (long )((int )tmp___8);
	  if (num1 <= 0L) { 
	    ret = -1;
	    goto end;
	  }
	  s->rwstate = 1;
	}
	s->state = (s->s3)->tmp.next_state;
	break;
      case 8576: ;
      case 8577:
	//ret = ssl3_check_client_hello(s);
	if (ret <= 0) {
	  goto end;
	} if (ret == 2) { 
	  s->state = 8466;
	} else {
	  //ret = ssl3_get_client_certificate(s);
	  if (ret <= 0) {
	    goto end;
	  }
	  s->init_num = 0;
	  s->state = 8592;
	}
	break;
      case 8592: ;
      case 8593:
	//ret = ssl3_get_client_key_exchange(s);
	if (ret <= 0) {
	  goto end;
	}
	s->state = 8608;
	s->init_num = 0;
	//((*(((s->method)->ssl3_enc)->cert_verify_mac)))(s, & (s->s3)->finish_dgst1, & (s->s3)->tmp.cert_verify_md[0]);
	//((*(((s->method)->ssl3_enc)->cert_verify_mac)))(s, & (s->s3)->finish_dgst2, & (s->s3)->tmp.cert_verify_md[16]);
	break;
      case 8608: ;
      case 8609:
	//ret = ssl3_get_cert_verify(s);
	if (ret <= 0) {
	  goto end;
	}
	s->state = 8640;
	s->init_num = 0;
	break;
      case 8640: ;
      case 8641:
	//ret = ssl3_get_finished(s, 8640, 8641);
	if(blastFlag == 5) goto ERROR;
	if (ret <= 0) {
	  goto end;
	}
	if (s->hit) { s->state = 3;
	} else {
	  s->state = 8656;
	}
	s->init_num = 0;
	break;
      case 8656: ;
      case 8657:
	(s->session)->cipher = (s->s3)->tmp.new_cipher;
	//tmp___9 = ((*(((s->method)->ssl3_enc)->setup_key_block)))(s); 
	if (! tmp___9) {
	  ret = -1;
	  goto end;
	}
	//ret = ssl3_send_change_cipher_spec(s, 8656, 8657);
	if(blastFlag == 2) blastFlag = 3;
	else if(blastFlag == 4) blastFlag = 5;
	else if(blastFlag == 7) blastFlag = 8;
	if (ret <= 0) {
	  goto end;
	}
	s->state = 8672;
	s->init_num = 0;
	//tmp___10 = ((*(((s->method)->ssl3_enc)->change_cipher_state)))(s, 34); 
	if (! tmp___10) {
	  ret = -1;
	  goto end;
	}
	break;
      case 8672: ;
      case 8673:
	//ret = ssl3_send_finished(s, 8672, 8673, ((s->method)->ssl3_enc)->server_finished_label,((s->method)->ssl3_enc)->server_finished_label_len);
	if(blastFlag == 3) blastFlag = 4;
	if (ret <= 0) {
	  goto end;
	}
	s->state = 8448;
	if (s->hit) { 
	  (s->s3)->tmp.next_state = 8640;
	} else {
	  (s->s3)->tmp.next_state = 3;
	}
	s->init_num = 0;
	break;
      case 3:
	//ssl3_cleanup_key_block(s);
	//BUF_MEM_free(s->init_buf);
	s->init_buf = (BUF_MEM *)((void *)0);
	//ssl_free_wbio_buffer(s);
	s->init_num = 0;
	if (got_new_session) {
	  s->new_session = 0;
	  //ssl_update_cache(s, 2);
	  (s->ctx)->stats.sess_accept_good ++;
	  s->handshake_func = (int (*)())(& ssl3_accept);
	  if ((unsigned long )cb != (unsigned long )((void *)0)) { 
	    //((*cb))(s, 32, 1);
	  }
	} ret = 1;
	goto end;
      default:
	//ERR_put_error(20, 128, 255, (char const *)"s3_srvr.c", 536);
	ret = -1;
	goto end;
      }
      if (! (s->s3)->tmp.reuse_message) { 
	if (! skip) {
	  if (s->debug) {
	    //ret = (int )BIO_ctrl(s->wbio, 11, 0L, (void *)0); 
	    if (ret <= 0) {
	      goto end;
	    }
	  } if ((unsigned long )cb != (unsigned long )((void *)0)) { 
	    if (s->state != state) {
	      new_state = s->state;
	      s->state = state;
	      //((*cb))(s, 8193, 1);
	      s->state = new_state;
	    }
	  }
	}
      }
      skip = 0; 
    }
  end:
    s->in_handshake --;
    if ((unsigned long )cb != (unsigned long )((void *)0)) { 
      //((*cb))(s, 8194, ret);
    }
    return (ret);
  ERROR: goto ERROR;
  }
}

static int ssl3_send_hello_request(SSL *s )
{ unsigned char *p ;
  unsigned char *tmp ;
  unsigned char *tmp___0 ;
  unsigned char *tmp___1 ;
  unsigned char *tmp___2 ;
  int tmp___3 ;
  {
  if (s->state == 8480) {
    p = (unsigned char *)(s->init_buf)->data;
    tmp = p; p ++; (*tmp) = 0;
    tmp___0 = p; p ++; (*tmp___0) = 0;
    tmp___1 = p; p ++; (*tmp___1) = 0;
    tmp___2 = p; p ++; (*tmp___2) = 0;
    s->state = 8481;
    s->init_num = 4;
    s->init_off = 0;
  }
  tmp___3 = ssl3_do_write(s, 22); return (tmp___3);
}
}static int ssl3_check_client_hello(SSL *s )
{ int ok ;
  long n ;
  { n = ssl3_get_message(s, 8576, 8577, -1, 102400L, & ok);
  if (! ok) { return ((int )n);
  } (s->s3)->tmp.reuse_message = 1;
  if ((s->s3)->tmp.message_type == 1) {
    if ((unsigned long )(s->s3)->tmp.dh != (unsigned long )((void *)0)) {
      DH_free((s->s3)->tmp.dh);
      (s->s3)->tmp.dh = (DH *)((void *)0);
    }
    return (2);
  }
  return (1);
}
}static int ssl3_get_client_hello(SSL *s )
{ int i ;
  int j ;
  int ok ;
  int al ;
  int ret ;
  long n ;
  unsigned long id ;
  unsigned char *p ;
  unsigned char *d ;
  unsigned char *q ;
  SSL_CIPHER *c ;
  SSL_COMP *comp ;
  STACK *ciphers ;
  unsigned char *tmp ;
  int tmp___0 ;
  int tmp___1 ;
  STACK *tmp___2 ;
  int tmp___4 ;
  int tmp___6 ;
  unsigned char *tmp___7 ;
  int m ;
  int nn ;
  int o ;
  int v ;
  int done ;
  STACK *tmp___9 ;
  STACK *sk ;
  SSL_CIPHER *nc ;
  SSL_CIPHER *ec ;
  int tmp___11 ;
  {
  ret = -1;
  comp = (SSL_COMP *)((void *)0);
  ciphers = (STACK *)((void *)0);
  if (s->state == 8464) {
    s->first_packet = 1;
    s->state = 8465;
  }
  n = ssl3_get_message(s, 8465, 8466, 1, 16384L, & ok);
  if (! ok) { return ((int )n);
  } p = (unsigned char *)(s->init_buf)->data; d = p;
  s->client_version = ((int )(*(p + 0)) << 8) | (int )(*(p + 1));
  p += 2;
  if (s->client_version < s->version) {
    ERR_put_error(20, 138, 267, (char const *)"s3_srvr.c", 667);
    if (s->client_version >> 8 == 3) {
      s->version = s->client_version;
    }
    al = 70;
    goto f_err;
  }
  memcpy((void * )((s->s3)->client_random), (void const * )p,
         32U); p += 32;
  tmp = p; p ++; j = (int )(*tmp);
  s->hit = 0;
  if (j == 0) {
    tmp___0 = ssl_get_new_session(s, 1); if (! tmp___0) {
      goto err;
    }
  } else {
    i = ssl_get_prev_session(s, p, j);
    if (i == 1) {
      s->hit = 1;
    } else {
      if (i == -1) {
        goto err;
      } else {
        tmp___1 = ssl_get_new_session(s, 1); if (! tmp___1) {
          goto err;
        }
      }
    }
  }
  p += j;
  i = (int )(((unsigned int )(*(p + 0)) << 8) | (unsigned int )(*(p + 1))); p += 2;
  if (i == 0) { if (j != 0) {
      al = 47;
      ERR_put_error(20, 138, 183, (char const *)"s3_srvr.c", 712);
      goto f_err;
    }
  } if ((unsigned long )(p + i) > (unsigned long )(d + n)) {
    al = 50;
    ERR_put_error(20, 138, 159, (char const *)"s3_srvr.c", 719);
    goto f_err;
  }
  if (i > 0) { tmp___2 = ssl_bytes_to_cipher_list(s, p, i, & ciphers); if ((unsigned long )tmp___2 == (unsigned long )((void *)0)) {
      goto err;
    }
  }
  p += i;
  if (s->hit) { if (i > 0) {
      j = 0;
      id = ((s->session)->cipher)->id;
      i = 0; while (1) { tmp___4 = sk_num((STACK const *)ciphers); if (! (i < tmp___4)) { break;
        }
        c = (SSL_CIPHER *)sk_value((STACK const *)ciphers, i);
        if (c->id == id) {
          j = 1;
          break;
        }
        i ++;
      }
      if (j == 0) {
        if (s->options & 8UL) { tmp___6 = sk_num((STACK const *)ciphers); if (tmp___6 == 1) {
            (s->session)->cipher = (SSL_CIPHER *)sk_value((STACK const *)ciphers,
                                                          0);
          } else {
            al = 47;
            ERR_put_error(20, 138, 215, (char const *)"s3_srvr.c", 764);
            goto f_err;
          }
        } else {
          al = 47;
          ERR_put_error(20, 138, 215, (char const *)"s3_srvr.c", 764);
          goto f_err;
        }
      }
    }
  } tmp___7 = p; p ++; i = (int )(*tmp___7);
  q = p;
  j = 0; while (j < i) {
    if ((int )(*(p + j)) == 0) { break;
    }
    j ++;
  }
  p += i;
  if (j >= i) {
    al = 50;
    ERR_put_error(20, 138, 187, (char const *)"s3_srvr.c", 783);
    goto f_err;
  }
  (s->s3)->tmp.new_compression = (SSL_COMP const *)((void *)0);
  if ((unsigned long )(s->ctx)->comp_methods != (unsigned long )((void *)0)) {
    done = 0;
    nn = sk_num((STACK const *)(s->ctx)->comp_methods);
    m = 0; while (m < nn) {
      comp = (SSL_COMP *)sk_value((STACK const *)(s->ctx)->comp_methods, m);
      v = comp->id;
      o = 0; while (o < i) {
        if (v == (int )(*(q + o))) {
          done = 1;
          break;
        }
        o ++;
      }
      if (done) { break;
      }
      m ++;
    }
    if (done) { (s->s3)->tmp.new_compression = (SSL_COMP const *)comp;
    } else {
      comp = (SSL_COMP *)((void *)0);
    }
  }
  if (s->version == 768) {
    if ((unsigned long )p > (unsigned long )(d + n)) {
      al = 50;
      ERR_put_error(20, 138, 159, (char const *)"s3_srvr.c", 824);
      goto f_err;
    }
  }
  if (s->hit) {
    nc = (SSL_CIPHER *)((void *)0);
    ec = (SSL_CIPHER *)((void *)0);
    if (s->options & 2147483648UL) {
      sk = (s->session)->ciphers;
      i = 0; while (1) { tmp___11 = sk_num((STACK const *)sk); if (! (i < tmp___11)) { break;
        }
        c = (SSL_CIPHER *)sk_value((STACK const *)sk, i);
        if (c->algorithms & 65536UL) { nc = c;
        }
        if (c->algo_strength & 2UL) { ec = c;
        }
        i ++;
      }
      if ((unsigned long )nc != (unsigned long )((void *)0)) { (s->s3)->tmp.new_cipher = nc;
      } else {
        if ((unsigned long )ec != (unsigned long )((void *)0)) { (s->s3)->tmp.new_cipher = ec;
        } else {
          (s->s3)->tmp.new_cipher = (s->session)->cipher;
        }
      }
    } else { (s->s3)->tmp.new_cipher = (s->session)->cipher;
    }
  } else {
    if ((unsigned long )comp == (unsigned long )((void *)0)) { (s->session)->compress_meth = 0;
    } else {
      (s->session)->compress_meth = comp->id;
    } if ((unsigned long )(s->session)->ciphers != (unsigned long )((void *)0)) { sk_free((s->session)->ciphers);
    }
    (s->session)->ciphers = ciphers;
    if ((unsigned long )ciphers == (unsigned long )((void *)0)) {
      al = 47;
      ERR_put_error(20, 138, 182, (char const *)"s3_srvr.c", 841);
      goto f_err;
    }
    ciphers = (STACK *)((void *)0);
    tmp___9 = ssl_get_ciphers_by_id(s); c = ssl3_choose_cipher(s, (s->session)->ciphers, tmp___9);
    if ((unsigned long )c == (unsigned long )((void *)0)) {
      al = 40;
      ERR_put_error(20, 138, 193, (char const *)"s3_srvr.c", 851);
      goto f_err;
    }
    (s->s3)->tmp.new_cipher = c;
  }
  ret = 1;
  if (0) {
    f_err:
    ssl3_send_alert(s, 2, al);
  }
  err:
  if ((unsigned long )ciphers != (unsigned long )((void *)0)) { sk_free(ciphers);
  } return (ret);
}
}static int ssl3_send_server_hello(SSL *s )
{ unsigned char *buf ;
  unsigned char *p ;
  unsigned char *d ;
  int i ;
  int sl ;
  unsigned long l ;
  unsigned long Time ;
  unsigned char *tmp ;
  unsigned char *tmp___0 ;
  unsigned char *tmp___1 ;
  unsigned char *tmp___2 ;
  unsigned char *tmp___3 ;
  unsigned char *tmp___4 ;
  unsigned char *tmp___5 ;
  unsigned char *tmp___6 ;
  unsigned char *tmp___7 ;
  unsigned char *tmp___8 ;
  int tmp___9 ;
  {
  if (s->state == 8496) {
    buf = (unsigned char *)(s->init_buf)->data;
    p = (s->s3)->server_random;
    Time = (unsigned long )time((time_t *)((void *)0));
    tmp = p; p ++; (*tmp) = (unsigned char )((Time >> 24) & 255UL); tmp___0 = p; p ++; (*tmp___0) = (unsigned char )((Time >> 16) & 255UL); tmp___1 = p; p ++; (*tmp___1) = (unsigned char )((Time >> 8) & 255UL); tmp___2 = p; p ++; (*tmp___2) = (unsigned char )(Time & 255UL);
    RAND_pseudo_bytes(p, (int )(32U - sizeof(Time)));
    p = buf + 4; d = p;
    tmp___3 = p; p ++; (*tmp___3) = (unsigned char )(s->version >> 8);
    tmp___4 = p; p ++; (*tmp___4) = (unsigned char )(s->version & 255);
    memcpy((void * )p, (void const * )((s->s3)->server_random),
           32U); p += 32;
    if (! ((s->ctx)->session_cache_mode & 2)) { (s->session)->session_id_length = 0U;
    }
    sl = (int )(s->session)->session_id_length;
    tmp___5 = p; p ++; (*tmp___5) = (unsigned char )sl;
    memcpy((void * )p, (void const * )((s->session)->session_id),
           (unsigned int )sl); p += sl;
    i = ssl3_put_cipher_by_char((SSL_CIPHER const *)(s->s3)->tmp.new_cipher, p);
    p += i;
    if ((unsigned long )(s->s3)->tmp.new_compression == (unsigned long )((void *)0)) { tmp___6 = p; p ++; (*tmp___6) = 0;
    } else {
      tmp___7 = p; p ++; (*tmp___7) = (unsigned char )((s->s3)->tmp.new_compression)->id;
    }
    l = (unsigned long )(p - d);
    d = buf;
    tmp___8 = d; d ++; (*tmp___8) = 2;
    (*(d + 0)) = (unsigned char )((l >> 16) & 255UL); (*(d + 1)) = (unsigned char )((l >> 8) & 255UL); (*(d + 2)) = (unsigned char )(l & 255UL); d += 3;
    s->state = 4369;
    s->init_num = p - buf;
    s->init_off = 0;
  }
  tmp___9 = ssl3_do_write(s, 22); return (tmp___9);
}
}static int ssl3_send_server_done(SSL *s )
{ unsigned char *p ;
  unsigned char *tmp ;
  unsigned char *tmp___0 ;
  unsigned char *tmp___1 ;
  unsigned char *tmp___2 ;
  int tmp___3 ;
  {
  if (s->state == 8560) {
    p = (unsigned char *)(s->init_buf)->data;
    tmp = p; p ++; (*tmp) = 14;
    tmp___0 = p; p ++; (*tmp___0) = 0;
    tmp___1 = p; p ++; (*tmp___1) = 0;
    tmp___2 = p; p ++; (*tmp___2) = 0;
    s->state = 8561;
    s->init_num = 4;
    s->init_off = 0;
  }
  tmp___3 = ssl3_do_write(s, 22); return (tmp___3);
}
}static int ssl3_send_server_key_exchange(SSL *s )
{ unsigned char *q ;
  int j ;
  int num ;
  RSA *rsa ;
  unsigned char md_buf[36] ;
  unsigned int u ;
  DH *dh ;
  DH *dhp ;
  EVP_PKEY *pkey ;
  unsigned char *p ;
  unsigned char *d ;
  int al ;
  int i ;
  unsigned long type ;
  int n ;
  CERT *cert ;
  BIGNUM *r[4] ;
  int nr[4] ;
  int kn ;
  BUF_MEM *buf ;
  EVP_MD_CTX md_ctx ;
  int tmp ;
  int tmp___0 ;
  int tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;
  EVP_MD const *tmp___5 ;
  int tmp___6 ;
  EVP_MD const *tmp___7 ;
  int tmp___8 ;
  unsigned char *tmp___9 ;
  int tmp___10 ;
  {
  dh = (DH *)((void *)0);
  if (s->state == 8528) {
    type = ((s->s3)->tmp.new_cipher)->algorithms & 31UL;
    cert = s->cert;
    buf = s->init_buf;
    r[3] = (BIGNUM *)((void *)0); r[2] = r[3]; r[1] = r[2]; r[0] = r[1];
    n = 0;
    if (type & 1UL) {
      rsa = cert->rsa_tmp;
      if ((unsigned long )rsa == (unsigned long )((void *)0)) { if ((unsigned long )(s->cert)->rsa_tmp_cb != (unsigned long )((void *)0)) {
          if (((s->s3)->tmp.new_cipher)->algo_strength & 4UL) { tmp = 512;
          } else {
            tmp = 1024;
          }
          rsa = ((*((s->cert)->rsa_tmp_cb)))(s, (int )(((s->s3)->tmp.new_cipher)->algo_strength &
                                                       2UL), tmp);
          if ((unsigned long )rsa == (unsigned long )((void *)0)) {
            al = 40;
            ERR_put_error(20, 155, 1092, (char const *)"s3_srvr.c", 1043);
            goto f_err;
          }
          CRYPTO_add_lock(& rsa->references, 1, 9, (char const *)"s3_srvr.c", 1046);
          cert->rsa_tmp = rsa;
        }
      } if ((unsigned long )rsa == (unsigned long )((void *)0)) {
        al = 40;
        ERR_put_error(20, 155, 172, (char const *)"s3_srvr.c", 1052);
        goto f_err;
      }
      r[0] = rsa->n;
      r[1] = rsa->e;
      (s->s3)->tmp.use_rsa_tmp = 1;
    } else {
      if (type & 16UL) {
        dhp = cert->dh_tmp;
        if ((unsigned long )dhp == (unsigned long )((void *)0)) { if ((unsigned long )(s->cert)->dh_tmp_cb != (unsigned long )((void *)0)) { if (((s->s3)->tmp.new_cipher)->algo_strength & 4UL) { tmp___0 = 512;
            } else {
              tmp___0 = 1024;
            }
            dhp = ((*((s->cert)->dh_tmp_cb)))(s, (int )(((s->s3)->tmp.new_cipher)->algo_strength &
                                                        2UL), tmp___0);
          }
        }
        if ((unsigned long )dhp == (unsigned long )((void *)0)) {
          al = 40;
          ERR_put_error(20, 155, 171, (char const *)"s3_srvr.c", 1072);
          goto f_err;
        }
        if ((unsigned long )(s->s3)->tmp.dh != (unsigned long )((void *)0)) {
          DH_free(dh);
          ERR_put_error(20, 155, 157, (char const *)"s3_srvr.c", 1079);
          goto err;
        }
        dh = (DH *)ASN1_dup((int (*)())(& i2d_DHparams), (char *(*)())(& d2i_DHparams),
                            (char *)dhp);
        if ((unsigned long )dh == (unsigned long )((void *)0)) {
          ERR_put_error(20, 155, 5, (char const *)"s3_srvr.c", 1085);
          goto err;
        }
        (s->s3)->tmp.dh = dh;
        if ((unsigned long )dhp->pub_key == (unsigned long )((void *)0)) {
          goto _L;
        } else {
          if ((unsigned long )dhp->priv_key == (unsigned long )((void *)0)) {
            goto _L;
          } else {
            if (s->options & 1048576UL) {
              _L:
              tmp___2 = DH_generate_key(dh); if (! tmp___2) {
                ERR_put_error(20, 155, 5, (char const *)"s3_srvr.c", 1096);
                goto err;
              }
            } else {
              dh->pub_key = BN_dup((BIGNUM const *)dhp->pub_key);
              dh->priv_key = BN_dup((BIGNUM const *)dhp->priv_key);
              if ((unsigned long )dh->pub_key == (unsigned long )((void *)0)) {
                ERR_put_error(20, 155, 5, (char const *)"s3_srvr.c", 1108);
                goto err;
              } else {
                if ((unsigned long )dh->priv_key == (unsigned long )((void *)0)) {
                  ERR_put_error(20, 155, 5, (char const *)"s3_srvr.c", 1108);
                  goto err;
                }
              }
            }
          }
        }
        r[0] = dh->p;
        r[1] = dh->g;
        r[2] = dh->pub_key;
      } else {
        al = 40;
        ERR_put_error(20, 155, 250, (char const *)"s3_srvr.c", 1120);
        goto f_err;
      }
    } i = 0; while ((unsigned long )r[i] != (unsigned long )((void *)0)) {
      tmp___3 = BN_num_bits((BIGNUM const *)r[i]); nr[i] = (tmp___3 + 7) / 8;
      n += 2 + nr[i];
      i ++;
    }
    if (((s->s3)->tmp.new_cipher)->algorithms & 256UL) {
      pkey = (EVP_PKEY *)((void *)0);
      kn = 0;
    } else {
      pkey = ssl_get_sign_pkey(s, (s->s3)->tmp.new_cipher); if ((unsigned long )pkey == (unsigned long )((void *)0)) {
        al = 50;
        goto f_err;
      }
      kn = EVP_PKEY_size(pkey);
    }
    tmp___4 = BUF_MEM_grow(buf, (n + 4) + kn); if (! tmp___4) {
      ERR_put_error(20, 155, 7, (char const *)"s3_srvr.c", 1147);
      goto err;
    }
    d = (unsigned char *)(s->init_buf)->data;
    p = d + 4;
    i = 0; while ((unsigned long )r[i] != (unsigned long )((void *)0)) {
      (*(p + 0)) = (unsigned char )((nr[i] >> 8) & 255); (*(p + 1)) = (unsigned char )(nr[i] & 255); p += 2;
      BN_bn2bin((BIGNUM const *)r[i], p);
      p += nr[i];
      i ++;
    }
    if ((unsigned long )pkey != (unsigned long )((void *)0)) {
      if (pkey->type == 6) {
        q = md_buf;
        j = 0;
        num = 2; while (num > 0) {
          if (num == 2) { tmp___5 = (s->ctx)->md5;
          } else {
            tmp___5 = (s->ctx)->sha1;
          }
          EVP_DigestInit(& md_ctx, tmp___5);
          EVP_DigestUpdate(& md_ctx, (void const *)(& (s->s3)->client_random[0]),
                           32U); EVP_DigestUpdate(& md_ctx, (void const *)(& (s->s3)->server_random[0]),
                           32U); EVP_DigestUpdate(& md_ctx, (void const *)(d + 4), (unsigned int )n);
          EVP_DigestFinal(& md_ctx, q, (unsigned int *)(& i));
          q += i;
          j += i;
          num --;
        }
        tmp___6 = RSA_sign(114, md_buf, (unsigned int )j, p + 2, & u, pkey->pkey.rsa); if (tmp___6 <= 0) {
          ERR_put_error(20, 155, 4, (char const *)"s3_srvr.c", 1185);
          goto err;
        }
        (*(p + 0)) = (unsigned char )((u >> 8) & 255U); (*(p + 1)) = (unsigned char )(u & 255U); p += 2;
        n = (int )((unsigned int )n + (u + 2U));
      } else {
        if (pkey->type == 116) {
          tmp___7 = (EVP_MD const *)EVP_dss1(); EVP_DigestInit(& md_ctx, tmp___7);
          EVP_DigestUpdate(& md_ctx, (void const *)(& (s->s3)->client_random[0]),
                           32U); EVP_DigestUpdate(& md_ctx, (void const *)(& (s->s3)->server_random[0]),
                           32U); EVP_DigestUpdate(& md_ctx, (void const *)(d + 4), (unsigned int )n);
          tmp___8 = EVP_SignFinal(& md_ctx, p + 2, (unsigned int *)(& i), pkey); if (! tmp___8) {
            ERR_put_error(20, 155, 10, (char const *)"s3_srvr.c", 1204);
            goto err;
          }
          (*(p + 0)) = (unsigned char )((i >> 8) & 255); (*(p + 1)) = (unsigned char )(i & 255); p += 2;
          n += i + 2;
        } else {
          al = 40;
          ERR_put_error(20, 155, 251, (char const *)"s3_srvr.c", 1215);
          goto f_err;
        }
      }
    } tmp___9 = d; d ++; (*tmp___9) = 12;
    (*(d + 0)) = (unsigned char )((n >> 16) & 255); (*(d + 1)) = (unsigned char )((n >> 8) & 255); (*(d + 2)) = (unsigned char )(n & 255); d += 3;
    s->init_num = n + 4;
    s->init_off = 0;
  }
  s->state = 8529;
  tmp___10 = ssl3_do_write(s, 22); return (tmp___10);
  f_err:
  ssl3_send_alert(s, 2, al);
  err:
  return (-1);
}
}static int ssl3_send_certificate_request(SSL *s )
{ unsigned char *p ;
  unsigned char *d ;
  int i ;
  int j ;
  int nl ;
  int off ;
  int n ;
  STACK *sk ;
  X509_NAME *name ;
  BUF_MEM *buf ;
  int tmp___0 ;
  int tmp___1 ;
  unsigned char *tmp___2 ;
  unsigned char *tmp___3 ;
  unsigned char *tmp___4 ;
  unsigned char *tmp___5 ;
  unsigned char *tmp___6 ;
  int tmp___7 ;
  {
  sk = (STACK *)((void *)0);
  if (s->state == 8544) {
    buf = s->init_buf;
    p = (unsigned char *)(buf->data + 4); d = p;
    p ++;
    n = ssl3_get_req_cert_type(s, p);
    (*(d + 0)) = (unsigned char )n;
    p += n;
    n ++;
    off = n;
    p += 2;
    n += 2;
    sk = SSL_get_client_CA_list(s);
    nl = 0;
    if ((unsigned long )sk != (unsigned long )((void *)0)) {
      i = 0; while (1) { tmp___1 = sk_num((STACK const *)sk); if (! (i < tmp___1)) { break;
        }
        name = (X509_NAME *)sk_value((STACK const *)sk, i);
        j = i2d_X509_NAME(name, (unsigned char **)((void *)0));
        tmp___0 = BUF_MEM_grow(buf, ((4 + n) + j) + 2); if (! tmp___0) {
          ERR_put_error(20, 150, 7, (char const *)"s3_srvr.c", 1272);
          goto err;
        }
        p = (unsigned char *)(buf->data + (4 + n));
        if (s->options & 536870912UL) {
          d = p;
          i2d_X509_NAME(name, & p);
          j -= 2; (*(d + 0)) = (unsigned char )((j >> 8) & 255); (*(d + 1)) = (unsigned char )(j & 255); d += 2; j += 2;
          n += j;
          nl += j;
        } else {
          (*(p + 0)) = (unsigned char )((j >> 8) & 255); (*(p + 1)) = (unsigned char )(j & 255); p += 2;
          i2d_X509_NAME(name, & p);
          n += 2 + j;
          nl += 2 + j;
        }
        i ++;
      }
    }
    p = (unsigned char *)(buf->data + (4 + off));
    (*(p + 0)) = (unsigned char )((nl >> 8) & 255); (*(p + 1)) = (unsigned char )(nl & 255); p += 2;
    d = (unsigned char *)buf->data;
    tmp___2 = d; d ++; (*tmp___2) = 13;
    (*(d + 0)) = (unsigned char )((n >> 16) & 255); (*(d + 1)) = (unsigned char )((n >> 8) & 255); (*(d + 2)) = (unsigned char )(n & 255); d += 3;
    s->init_num = n + 4;
    s->init_off = 0;
    p = (unsigned char *)(s->init_buf)->data + s->init_num;
    tmp___3 = p; p ++; (*tmp___3) = 14;
    tmp___4 = p; p ++; (*tmp___4) = 0;
    tmp___5 = p; p ++; (*tmp___5) = 0;
    tmp___6 = p; p ++; (*tmp___6) = 0;
    s->init_num += 4;
  }
  tmp___7 = ssl3_do_write(s, 22); return (tmp___7);
  err:
  return (-1);
}
}static int ssl3_get_client_key_exchange(SSL *s )
{ int i ;
  int al ;
  int ok ;
  long n ;
  unsigned long l ;
  unsigned char *p ;
  RSA *rsa ;
  EVP_PKEY *pkey ;
  BIGNUM *pub ;
  DH *dh_srvr ;
  {
  rsa = (RSA *)((void *)0);
  pkey = (EVP_PKEY *)((void *)0);
  pub = (BIGNUM *)((void *)0);
  n = ssl3_get_message(s, 8592, 8593, 16, 2048L, & ok);
  if (! ok) { return ((int )n);
  } p = (unsigned char *)(s->init_buf)->data;
  l = ((s->s3)->tmp.new_cipher)->algorithms;
  if (l & 1UL) {
    if ((s->s3)->tmp.use_rsa_tmp) {
      if ((unsigned long )s->cert != (unsigned long )((void *)0)) { if ((unsigned long )(s->cert)->rsa_tmp != (unsigned long )((void *)0)) { rsa = (s->cert)->rsa_tmp;
        }
      } if ((unsigned long )rsa == (unsigned long )((void *)0)) {
        al = 40;
        ERR_put_error(20, 139, 173, (char const *)"s3_srvr.c", 1365);
        goto f_err;
      }
    } else {
      pkey = (s->cert)->pkeys[0].privatekey;
      if ((unsigned long )pkey == (unsigned long )((void *)0)) {
        al = 40;
        ERR_put_error(20, 139, 168, (char const *)"s3_srvr.c", 1378);
        goto f_err;
      } else {
        if (pkey->type != 6) {
          al = 40;
          ERR_put_error(20, 139, 168, (char const *)"s3_srvr.c", 1378);
          goto f_err;
        } else {
          if ((unsigned long )pkey->pkey.rsa == (unsigned long )((void *)0)) {
            al = 40;
            ERR_put_error(20, 139, 168, (char const *)"s3_srvr.c", 1378);
            goto f_err;
          }
        }
      }
      rsa = pkey->pkey.rsa;
    }
    if (s->version > 768) {
      i = (int )(((unsigned int )(*(p + 0)) << 8) | (unsigned int )(*(p + 1))); p += 2;
      if (n != (long )(i + 2)) {
        if (s->options & 256UL) {
          p -= 2;
        } else {
          ERR_put_error(20, 139, 234, (char const *)"s3_srvr.c", 1392);
          goto err;
        }
      } else {
        n = (long )i;
      }
    }
    i = RSA_private_decrypt((int )n, p, p, rsa, 1);
    al = -1;
    if (i != 48) {
      al = 50;
      ERR_put_error(20, 139, 118, (char const *)"s3_srvr.c", 1409);
    }
    if (al == -1) { if ((int )(*(p + 0)) == s->client_version >> 8) { if (! ((int )(*(p + 1)) == (s->client_version & 255))) {
          goto _L;
        }
      } else {
        _L:
        if (s->options & 1024UL) { if ((int )(*(p + 0)) == s->version >> 8) { if (! ((int )(*(p + 1)) == (s->version & 255))) {
              al = 50;
              ERR_put_error(20, 139, 116, (char const *)"s3_srvr.c", 1425);
              goto f_err;
            }
          } else {
            al = 50;
            ERR_put_error(20, 139, 116, (char const *)"s3_srvr.c", 1425);
            goto f_err;
          }
        } else {
          al = 50;
          ERR_put_error(20, 139, 116, (char const *)"s3_srvr.c", 1425);
          goto f_err;
        }
      }
    } if (al != -1) {
      ERR_clear_error();
      i = 48;
      (*(p + 0)) = (unsigned char )(s->client_version >> 8);
      (*(p + 1)) = (unsigned char )(s->client_version & 255);
      RAND_pseudo_bytes(p + 2, i - 2);
    }
    (s->session)->master_key_length = ((*(((s->method)->ssl3_enc)->generate_master_secret)))(s,
                                                                                             (s->session)->master_key,
                                                                                             p,
                                                                                             i);
    memset((void *)p, 0, (unsigned int )i);
  } else {
    if (l & 22UL) {
      i = (int )(((unsigned int )(*(p + 0)) << 8) | (unsigned int )(*(p + 1))); p += 2;
      if (n != (long )(i + 2)) {
        if (s->options & 128UL) {
          p -= 2;
          i = (int )n;
        } else {
          ERR_put_error(20, 139, 148, (char const *)"s3_srvr.c", 1467);
          goto err;
        }
      }
      if (n == 0L) {
        al = 40;
        ERR_put_error(20, 139, 236, (char const *)"s3_srvr.c", 1480);
        goto f_err;
      } else {
        if ((unsigned long )(s->s3)->tmp.dh == (unsigned long )((void *)0)) {
          al = 40;
          ERR_put_error(20, 139, 171, (char const *)"s3_srvr.c", 1488);
          goto f_err;
        } else {
          dh_srvr = (s->s3)->tmp.dh;
        }
      }
      pub = BN_bin2bn((unsigned char const *)p, i, (BIGNUM *)((void *)0));
      if ((unsigned long )pub == (unsigned long )((void *)0)) {
        ERR_put_error(20, 139, 130, (char const *)"s3_srvr.c", 1498);
        goto err;
      }
      i = DH_compute_key(p, pub, dh_srvr);
      if (i <= 0) {
        ERR_put_error(20, 139, 5, (char const *)"s3_srvr.c", 1506);
        goto err;
      }
      DH_free((s->s3)->tmp.dh);
      (s->s3)->tmp.dh = (DH *)((void *)0);
      BN_clear_free(pub);
      pub = (BIGNUM *)((void *)0);
      (s->session)->master_key_length = ((*(((s->method)->ssl3_enc)->generate_master_secret)))(s,
                                                                                               (s->session)->master_key,
                                                                                               p,
                                                                                               i); memset((void *)p, 0, (unsigned int )i);
    } else {
      al = 40;
      ERR_put_error(20, 139, 249, (char const *)"s3_srvr.c", 1524);
      goto f_err;
    }
  } return (1);
  f_err:
  ssl3_send_alert(s, 2, al);
  err:
  return (-1);
}
}static int ssl3_get_cert_verify(SSL *s )
{ EVP_PKEY *pkey ;
  unsigned char *p ;
  int al ;
  int ok ;
  int ret ;
  long n ;
  int type ;
  int i ;
  int j ;
  X509 *peer ;
  {
  pkey = (EVP_PKEY *)((void *)0);
  ret = 0;
  type = 0;
  n = ssl3_get_message(s, 8608, 8609, -1, 512L, & ok);
  if (! ok) { return ((int )n);
  } if ((unsigned long )(s->session)->peer != (unsigned long )((void *)0)) {
    peer = (s->session)->peer;
    pkey = X509_get_pubkey(peer);
    type = X509_certificate_type(peer, pkey);
  } else {
    peer = (X509 *)((void *)0);
    pkey = (EVP_PKEY *)((void *)0);
  }
  if ((s->s3)->tmp.message_type != 15) {
    (s->s3)->tmp.reuse_message = 1;
    if ((unsigned long )peer != (unsigned long )((void *)0)) { if (type | 16) {
        al = 10;
        ERR_put_error(20, 136, 174, (char const *)"s3_srvr.c", 1573);
        goto f_err;
      }
    } ret = 1;
    goto end;
  }
  if ((unsigned long )peer == (unsigned long )((void *)0)) {
    ERR_put_error(20, 136, 186, (char const *)"s3_srvr.c", 1582);
    al = 10;
    goto f_err;
  }
  if (! (type & 16)) {
    ERR_put_error(20, 136, 220, (char const *)"s3_srvr.c", 1589);
    al = 47;
    goto f_err;
  }
  if ((s->s3)->change_cipher_spec) {
    ERR_put_error(20, 136, 133, (char const *)"s3_srvr.c", 1596);
    al = 10;
    goto f_err;
  }
  p = (unsigned char *)(s->init_buf)->data;
  i = (int )(((unsigned int )(*(p + 0)) << 8) | (unsigned int )(*(p + 1))); p += 2;
  n -= 2L;
  if ((long )i > n) {
    ERR_put_error(20, 136, 159, (char const *)"s3_srvr.c", 1607);
    al = 50;
    goto f_err;
  }
  j = EVP_PKEY_size(pkey);
  if (i > j) {
    ERR_put_error(20, 136, 265, (char const *)"s3_srvr.c", 1615);
    al = 50;
    goto f_err;
  } else {
    if (n > (long )j) {
      ERR_put_error(20, 136, 265, (char const *)"s3_srvr.c", 1615);
      al = 50;
      goto f_err;
    } else {
      if (n <= 0L) {
        ERR_put_error(20, 136, 265, (char const *)"s3_srvr.c", 1615);
        al = 50;
        goto f_err;
      }
    }
  }
  if (pkey->type == 6) {
    i = RSA_verify(114, (s->s3)->tmp.cert_verify_md, 36U, p, (unsigned int )i, pkey->pkey.rsa);
    if (i < 0) {
      al = 51;
      ERR_put_error(20, 136, 118, (char const *)"s3_srvr.c", 1629);
      goto f_err;
    }
    if (i == 0) {
      al = 51;
      ERR_put_error(20, 136, 122, (char const *)"s3_srvr.c", 1635);
      goto f_err;
    }
  } else {
    if (pkey->type == 116) {
      j = DSA_verify(pkey->save_type, (unsigned char const *)(& (s->s3)->tmp.cert_verify_md[16]),
                     20, p, i, pkey->pkey.dsa);
      if (j <= 0) {
        al = 51;
        ERR_put_error(20, 136, 112, (char const *)"s3_srvr.c", 1651);
        goto f_err;
      }
    } else {
      ERR_put_error(20, 136, 157, (char const *)"s3_srvr.c", 1658);
      al = 43;
      goto f_err;
    }
  } ret = 1;
  if (0) {
    f_err:
    ssl3_send_alert(s, 2, al);
  }
  end:
  EVP_PKEY_free(pkey);
  return (ret);
}
}static int ssl3_get_client_certificate(SSL *s )
{ int i ;
  int ok ;
  int al ;
  int ret ;
  X509 *x ;
  unsigned long l ;
  unsigned long nc ;
  unsigned long llen ;
  unsigned long n ;
  unsigned char *p ;
  unsigned char *d ;
  unsigned char *q ;
  STACK *sk ;
  int tmp ;
  int tmp___0 ;
  {
  ret = -1;
  x = (X509 *)((void *)0);
  sk = (STACK *)((void *)0);
  n = (unsigned long )ssl3_get_message(s, 8576, 8577, -1, 102400L, & ok);
  if (! ok) { return ((int )n);
  } if ((s->s3)->tmp.message_type == 16) {
    if (s->verify_mode & 1) { if (s->verify_mode & 2) {
        ERR_put_error(20, 137, 199, (char const *)"s3_srvr.c", 1701);
        al = 40;
        goto f_err;
      }
    } if (s->version > 768) { if ((s->s3)->tmp.cert_request) {
        ERR_put_error(20, 137, 233, (char const *)"s3_srvr.c", 1708);
        al = 10;
        goto f_err;
      }
    } (s->s3)->tmp.reuse_message = 1;
    return (1);
  }
  if ((s->s3)->tmp.message_type != 11) {
    al = 10;
    ERR_put_error(20, 137, 262, (char const *)"s3_srvr.c", 1719);
    goto f_err;
  }
  p = (unsigned char *)(s->init_buf)->data; d = p;
  sk = sk_new_null(); if ((unsigned long )sk == (unsigned long )((void *)0)) {
    ERR_put_error(20, 137, 33, (char const *)"s3_srvr.c", 1726);
    goto err;
  }
  llen = (((unsigned long )(*(p + 0)) << 16) | ((unsigned long )(*(p + 1)) << 8)) |
         (unsigned long )(*(p + 2));
  p += 3;
  if (llen + 3UL != n) {
    al = 50;
    ERR_put_error(20, 137, 159, (char const *)"s3_srvr.c", 1734);
    goto f_err;
  }
  nc = 0UL; while (nc < llen) {
    l = (((unsigned long )(*(p + 0)) << 16) | ((unsigned long )(*(p + 1)) << 8)) |
        (unsigned long )(*(p + 2));
    p += 3;
    if ((l + nc) + 3UL > llen) {
      al = 50;
      ERR_put_error(20, 137, 135, (char const *)"s3_srvr.c", 1743);
      goto f_err;
    }
    q = p;
    x = d2i_X509((X509 **)((void *)0), & p, (long )l);
    if ((unsigned long )x == (unsigned long )((void *)0)) {
      ERR_put_error(20, 137, 13, (char const *)"s3_srvr.c", 1751);
      goto err;
    }
    if ((unsigned long )p != (unsigned long )(q + l)) {
      al = 50;
      ERR_put_error(20, 137, 135, (char const *)"s3_srvr.c", 1757);
      goto f_err;
    }
    tmp = sk_push(sk, (char *)x); if (! tmp) {
      ERR_put_error(20, 137, 33, (char const *)"s3_srvr.c", 1762);
      goto err;
    }
    x = (X509 *)((void *)0);
    nc += l + 3UL;
  }
  tmp___0 = sk_num((STACK const *)sk); if (tmp___0 <= 0) {
    if (s->version == 768) {
      al = 40;
      ERR_put_error(20, 137, 176, (char const *)"s3_srvr.c", 1775);
      goto f_err;
    } else {
      if (s->verify_mode & 1) { if (s->verify_mode & 2) {
          ERR_put_error(20, 137, 199, (char const *)"s3_srvr.c", 1782);
          al = 40;
          goto f_err;
        }
      }
    }
  } else {
    i = ssl_verify_cert_chain(s, sk);
    if (! i) {
      al = ssl_verify_alarm_type(s->verify_result);
      ERR_put_error(20, 137, 178, (char const *)"s3_srvr.c", 1793);
      goto f_err;
    }
  }
  if ((unsigned long )(s->session)->peer != (unsigned long )((void *)0)) { X509_free((s->session)->peer);
  }
  (s->session)->peer = (X509 *)sk_shift(sk);
  (s->session)->verify_result = s->verify_result;
  if ((unsigned long )(s->session)->sess_cert == (unsigned long )((void *)0)) {
    (s->session)->sess_cert = ssl_sess_cert_new();
    if ((unsigned long )(s->session)->sess_cert == (unsigned long )((void *)0)) {
      ERR_put_error(20, 137, 33, (char const *)"s3_srvr.c", 1810);
      goto err;
    }
  }
  if ((unsigned long )((s->session)->sess_cert)->cert_chain != (unsigned long )((void *)0)) { sk_pop_free(((s->session)->sess_cert)->cert_chain, (void (*)(void * ))(& X509_free));
  }
  ((s->session)->sess_cert)->cert_chain = sk;
  sk = (STACK *)((void *)0);
  ret = 1;
  if (0) {
    f_err:
    ssl3_send_alert(s, 2, al);
  }
  err:
  if ((unsigned long )x != (unsigned long )((void *)0)) { X509_free(x);
  } if ((unsigned long )sk != (unsigned long )((void *)0)) { sk_pop_free(sk, (void (*)(void * ))(& X509_free));
  } return (ret);
}
}int ssl3_send_server_certificate(SSL *s )
{ unsigned long l ;
  X509 *x ;
  int tmp ;
  {
  if (s->state == 8512) {
    x = ssl_get_server_send_cert(s);
    if ((unsigned long )x == (unsigned long )((void *)0)) {
      ERR_put_error(20, 154, 157, (char const *)"s3_srvr.c", 1844);
      return (0);
    }
    l = ssl3_output_cert_chain(s, x);
    s->state = 8513;
    s->init_num = (int )l;
    s->init_off = 0;
  }
  tmp = ssl3_do_write(s, 22); return (tmp);
}
}
