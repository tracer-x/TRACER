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
extern int RAND_bytes(unsigned char *buf , int num ) ;
extern int RAND_pseudo_bytes(unsigned char *buf , int num ) ;
extern void RAND_add(void const *buf , int num , double entropy ) ;
extern int sk_num(STACK const * ) ;
extern char *sk_value(STACK const * , int ) ;
extern STACK *sk_new(int (*cmp)(char const * const * , char const * const * ) ) ;
extern STACK *sk_new_null(void) ;
extern void sk_pop_free(STACK *st , void (*func)(void * ) ) ;
extern int sk_find(STACK *st , char *data ) ;
extern int sk_push(STACK *st , char *data ) ;
extern int CRYPTO_add_lock(int *pointer , int amount , int type , char const *file ,
                           int line ) ;
extern long BIO_ctrl(BIO *bp , int cmd , long larg , void *parg ) ;
extern BIO *BIO_push(BIO *b , BIO *append ) ;
extern time_t time(time_t *__timer ) ;
extern int BN_num_bits(BIGNUM const *a ) ;
extern BIGNUM *BN_bin2bn(unsigned char const *s , int len , BIGNUM *ret ) ;
extern int BN_bn2bin(BIGNUM const *a , unsigned char *to ) ;
extern char *ASN1_dup(int (*i2d)() , char *(*d2i)() , char *x ) ;
extern RSA *RSA_new(void) ;
extern int RSA_size(RSA * ) ;
extern int RSA_public_encrypt(int flen , unsigned char *from , unsigned char *to ,
                              RSA *rsa , int padding ) ;
extern void RSA_free(RSA *r ) ;
extern int RSA_sign(int type , unsigned char *m , unsigned int m_len , unsigned char *sigret ,
                    unsigned int *siglen , RSA *rsa ) ;
extern int RSA_verify(int type , unsigned char *m , unsigned int m_len , unsigned char *sigbuf ,
                      unsigned int siglen , RSA *rsa ) ;
extern DH *DH_new(void) ;
extern void DH_free(DH *dh ) ;
extern int DH_size(DH *dh ) ;
extern int DH_generate_key(DH *dh ) ;
extern int DH_compute_key(unsigned char *key , BIGNUM *pub_key , DH *dh ) ;
DH *d2i_DHparams(DH **a , unsigned char **pp , long length ) {}
int i2d_DHparams(DH *a , unsigned char **pp ) {}
extern int DSA_sign(int type , unsigned char const *dgst , int dlen , unsigned char *sig ,
                    unsigned int *siglen , DSA *dsa ) ;
extern void EVP_DigestInit(EVP_MD_CTX *ctx , EVP_MD const *type ) ;
extern void EVP_DigestUpdate(EVP_MD_CTX *ctx , void const *d , unsigned int cnt ) ;
extern void EVP_DigestFinal(EVP_MD_CTX *ctx , unsigned char *md , unsigned int *s ) ;
extern int EVP_VerifyFinal(EVP_MD_CTX *ctx , unsigned char *sigbuf , unsigned int siglen ,
                           EVP_PKEY *pkey ) ;
extern EVP_MD *EVP_dss1(void) ;
extern int EVP_PKEY_size(EVP_PKEY *pkey ) ;
extern void EVP_PKEY_free(EVP_PKEY *pkey ) ;
extern int EVP_PKEY_missing_parameters(EVP_PKEY *pkey ) ;
extern void *memcpy(void * /* __restrict */ __dest , void const * /* __restrict */ __src ,
                    size_t __n ) ;
extern void *memset(void *__s , int __c , size_t __n ) ;
extern int memcmp(void const *__s1 , void const *__s2 , size_t __n ) /* __attribute__((__pure__)) */ ;
extern int *__errno_location(void) /* __attribute__((__const__)) */;
void X509_NAME_free(X509_NAME *a ) {}
extern X509_NAME *d2i_X509_NAME(X509_NAME **a , unsigned char **pp , long length ) ;
void X509_free(X509 *a ) {}
extern X509 *d2i_X509(X509 **a , unsigned char **pp , long length ) ;
extern EVP_PKEY *X509_get_pubkey(X509 *x ) ;
extern int X509_certificate_type(X509 *x , EVP_PKEY *pubkey ) ;
extern int X509_NAME_cmp(X509_NAME const *a , X509_NAME const *b ) ;
extern void ERR_put_error(int lib , int func , int reason , char const *file , int line ) ;
extern void ERR_clear_error(void) ;
extern int SSL_clear(SSL *s ) ;
extern int SSL_use_PrivateKey(SSL *ssl , EVP_PKEY *pkey ) ;
extern int SSL_use_certificate(SSL *ssl , X509 *x ) ;
SSL_METHOD *SSLv3_client_method(void) ;
extern STACK *SSL_get_ciphers(SSL *s ) ;
extern int SSL_state(SSL *ssl ) ;
extern SSL_METHOD *sslv3_base_method(void) ;
extern SESS_CERT *ssl_sess_cert_new(void) ;
extern void ssl_sess_cert_free(SESS_CERT *sc ) ;
extern int ssl_get_new_session(SSL *s , int session ) ;
extern int ssl_cipher_list_to_bytes(SSL *s , STACK *sk , unsigned char *p ) ;
extern void ssl_update_cache(SSL *s , int mode ) ;
extern int ssl_verify_cert_chain(SSL *s , STACK *sk ) ;
extern int ssl_cert_type(X509 *x , EVP_PKEY *pkey ) ;
extern STACK *ssl_get_ciphers_by_id(SSL *s ) ;
extern int ssl_verify_alarm_type(long type ) ;
extern void ssl3_init_finished_mac(SSL *s ) ;
extern int ssl3_get_finished(SSL *s , int state_a , int state_b ) ;
extern int ssl3_send_change_cipher_spec(SSL *s , int state_a , int state_b ) ;
extern void ssl3_cleanup_key_block(SSL *s ) ;
extern int ssl3_do_write(SSL *s , int type ) ;
extern void ssl3_send_alert(SSL *s , int level , int desc ) ;
extern long ssl3_get_message(SSL *s , int st1 , int stn , int mt , long max , int *ok ) ;
extern int ssl3_send_finished(SSL *s , int a , int b , char const *sender , int slen ) ;
extern unsigned long ssl3_output_cert_chain(SSL *s , X509 *x ) ;
extern int ssl3_setup_buffers(SSL *s ) ;
int ssl3_connect(SSL *s ) ;
extern int ssl_init_wbio_buffer(SSL *s , int push ) ;
extern void ssl_free_wbio_buffer(SSL *s ) ;
extern SSL_COMP *ssl3_comp_find(STACK *sk , int n ) ;
static SSL_METHOD *ssl3_get_client_method(int ver ) ;
static int ssl3_client_hello(SSL *s ) ;
static int ssl3_get_server_hello(SSL *s ) ;
static int ssl3_get_certificate_request(SSL *s ) ;
static int ca_dn_cmp(X509_NAME const * const *a , X509_NAME const * const *b ) ;
static int ssl3_get_server_done(SSL *s ) ;
static int ssl3_send_client_verify(SSL *s ) ;
static int ssl3_send_client_certificate(SSL *s ) ;
static int ssl3_send_client_key_exchange(SSL *s ) ;
static int ssl3_get_key_exchange(SSL *s ) ;
static int ssl3_get_server_certificate(SSL *s ) ;
static int ssl3_check_cert_and_algorithm(SSL *s ) ;
static SSL_METHOD *ssl3_get_client_method(int ver )
{ SSL_METHOD *tmp ;
  {
  if (ver == 768) { tmp = SSLv3_client_method(); return (tmp);
  } else {
    return ((SSL_METHOD *)((void *)0));
  }
}
}
SSL_METHOD *SSLv3_client_method(void) ;static int init = 1;
SSL_METHOD SSLv3_client_data ;
SSL_METHOD *SSLv3_client_method(void)
{ char *tmp ;
  {
  if (init) {
    init = 0;
    tmp = (char *)sslv3_base_method(); memcpy((void * )((char *)(& SSLv3_client_data)), (void const * )tmp,
           sizeof(SSL_METHOD ));
    SSLv3_client_data.ssl_connect = & ssl3_connect;
    SSLv3_client_data.get_ssl_method = & ssl3_get_client_method;
  }
  return (& SSLv3_client_data);
}
}

// TRACER: to shadow s->state 
int myState;
// TRACER: to shadow (s->s3)->tmp.next_state
int myStateNext; 

//extern int unknown();

int main()
{
  SSL *s;
  myState /*s->state*/ = (0x04|(0x1000|0x2000));
  ssl3_connect(s);
  return 0;
}

int ssl3_connect(SSL *s )
{ 
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

  {
    blastFlag = 0;

    //tmp = (unsigned long )time((time_t *)((void *)0)); Time = tmp;
    //    tmp = unknown();
    cb = (void (*)())((void *)0);
    ret = -1;
    skip = 0;
    //RAND_add((void const *)(& Time), (int )sizeof(Time), (double )0);
    //ERR_clear_error();
    //tmp___0 = __errno_location(); 
    (*tmp___0) = 0;
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
    
    while (1) {
      state = myState /*s->state*/;
      switch (myState /*s->state*/) {
      case 12292:
	s->new_session = 1;
	myState /*s->state*/ = 4096;
	(s->ctx)->stats.sess_connect_renegotiate ++;
      case 16384: ;
      case 4096: ;
      case 20480: ;
      case 4099:
	s->server = 0;
	if ((unsigned long )cb != (unsigned long )((void *)0)) { 
	  //((*cb))(s, 16, 1);
	} 
	if ((s->version & 65280) != 768) {
	  //ERR_put_error(20, 132, 157, (char const *)"s3_clnt.c", 146);
	  ret = -1;
	  goto end;
	}
	s->type = 4096;
	if ((unsigned long )s->init_buf == (unsigned long )((void *)0)) {
	  //buf = BUF_MEM_new(); 
	  if ((unsigned long )buf == (unsigned long )((void *)0)) {
	    ret = -1;
	    goto end;
	  }
	  //tmp___3 = BUF_MEM_grow(buf, 16384); 
	  //tmp___3 = unknown();
	  if (! tmp___3) {
	    ret = -1;
	    goto end;
	  }
	  s->init_buf = buf;
	}
	//tmp___4 = ssl3_setup_buffers(s); 
	//tmp___4 = unknown();
	if (! tmp___4) { 
	  ret = -1;
	  goto end;
	}
	//tmp___5 = ssl_init_wbio_buffer(s, 0); 
	//tmp___5 = unknown();
	if (! tmp___5) { 
	  ret = -1;
	  goto end;
	}
	//ssl3_init_finished_mac(s);
	myState /*s->state*/ = 4368;
	(s->ctx)->stats.sess_connect ++;
	s->init_num = 0;
	break;
      case 4368: ;
      case 4369:
	s->shutdown = 0;
	//ret = ssl3_client_hello(s);
        //ret = unknown();
	if(blastFlag == 0) blastFlag = 1;
	if (ret <= 0) {
	  goto end;
	}
	myState /*s->state*/ = 4384;
	s->init_num = 0;
	if ((unsigned long )s->bbio != (unsigned long )s->wbio) { 
	  //s->wbio = BIO_push(s->bbio, s->wbio);
	}
	break;
      case 4384: ;
      case 4385:
	//ret = ssl3_get_server_hello(s);
	//ret = unknown();
	if(blastFlag == 1) blastFlag = 2;
	if (ret <= 0) {
	  goto end;
	}
	if (s->hit) { 
	  myState /*s->state*/ = 4560;
	} else {
	  myState /*s->state*/ = 4400;
	}
	s->init_num = 0;
	break;
      case 4400: ;
      case 4401: ;
	if (((s->s3)->tmp.new_cipher)->algorithms & 256UL) {
	  skip = 1;
	} else {
	  //ret = ssl3_get_server_certificate(s);
	  //ret = unknown();
	  if(blastFlag == 2) blastFlag = 3;
	  if (ret <= 0) {
	    goto end;
	  }
	}
	myState /*s->state*/ = 4416;
	s->init_num = 0;
	break;
      case 4416: ;
      case 4417:
	//ret = ssl3_get_key_exchange(s);
	//ret = unknown();
	if(blastFlag == 3) blastFlag = 4;
	if (ret <= 0) {
	  goto end;
	}
	myState /*s->state*/ = 4432;
	s->init_num = 0;
	//tmp___6 = ssl3_check_cert_and_algorithm(s); 
	//tmp___6 = unknown();
	if (! tmp___6) {
	  ret = -1;
	  goto end;
	}
	break;
      case 4432: ;
      case 4433:
	//ret = ssl3_get_certificate_request(s);
	//ret = unknown();
	if(blastFlag == 5) goto ERROR;
	if (ret <= 0) {
	  goto end;
	}
	myState /*s->state*/ = 4448;
	s->init_num = 0;
	break;
      case 4448: ;
      case 4449:
	//ret = ssl3_get_server_done(s);
	//ret = unknown();
	if(blastFlag == 4) blastFlag = 5;
	if (ret <= 0) {
	  goto end;
	}
	if ((s->s3)->tmp.cert_req) { 
	  myState /*s->state*/ = 4464;
	} else {
	  myState /*s->state*/ = 4480;
	}
	s->init_num = 0;
	break;
      case 4464: ;
      case 4465: ;
      case 4466: ;
      case 4467:
	//ret = ssl3_send_client_certificate(s);
	//ret = unknown();
	if (ret <= 0) {
	  goto end;
	}
	myState /*s->state*/ = 4480;
	s->init_num = 0;
	break;
      case 4480: ;
      case 4481:
	//ret = ssl3_send_client_key_exchange(s);
	//ret = unknown();
	if (ret <= 0) {
	  goto end;
	}
	l = ((s->s3)->tmp.new_cipher)->algorithms;
	if ((s->s3)->tmp.cert_req == 1) {
	  myState /*s->state*/ = 4496;
	} else {
	  myState /*s->state*/ = 4512;
	  (s->s3)->change_cipher_spec = 0;
	}
	s->init_num = 0;
	break;
      case 4496: ;
      case 4497:
	//ret = ssl3_send_client_verify(s);
	//ret = unknown();
	if (ret <= 0) {
	  goto end;
	}
	myState /*s->state*/ = 4512;
	s->init_num = 0;
	(s->s3)->change_cipher_spec = 0;
	break;
      case 4512: ;
      case 4513:
	//ret = ssl3_send_change_cipher_spec(s, 4512, 4513);
	//ret = unknown();
	if (ret <= 0) {
	  goto end;
	}
	myState /*s->state*/ = 4528;
	s->init_num = 0;
	(s->session)->cipher = (s->s3)->tmp.new_cipher;
	if ((unsigned long )(s->s3)->tmp.new_compression == (unsigned long )((void *)0)) { 
	  (s->session)->compress_meth = 0;
	} else {
	  (s->session)->compress_meth = ((s->s3)->tmp.new_compression)->id;
	}
	//tmp___7 = ((*(((s->method)->ssl3_enc)->setup_key_block)))(s); 
	//tmp___7 = unknown();
	if (! tmp___7) {
	  ret = -1;
	  goto end;
	}
	//tmp___8 = ((*(((s->method)->ssl3_enc)->change_cipher_state)))(s, 18); 
	//tmp___8 = unknown();
	if (! tmp___8) {
	  ret = -1;
	  goto end;
	}
	break;
      case 4528: ;
      case 4529:
	//ret = ssl3_send_finished(s, 4528, 4529, ((s->method)->ssl3_enc)->client_finished_label,
	//ret = unknown();	
	//((s->method)->ssl3_enc)->client_finished_label_len);
	if (ret <= 0) {
	  goto end;
	}
	myState /*s->state*/ = 4352;
	(s->s3)->flags &= -5L;
	if (s->hit) {
	  myStateNext /*(s->s3)->tmp.next_state*/ = 3;
	  if ((s->s3)->flags & 2L) {
	    myState /*s->state*/ = 3;
	    (s->s3)->flags |= 4L;
	    (s->s3)->delay_buf_pop_ret = 0;
	  }
	} else {
	  myStateNext /*(s->s3)->tmp.next_state*/ = 4560;
	}
	s->init_num = 0;
	break;
      case 4560: ;
      case 4561:
	//ret = ssl3_get_finished(s, 4560, 4561);
	//ret = unknown();
	if (ret <= 0) {
	  goto end;
	}
	if (s->hit) { 
	  myState /*s->state*/ = 4512;
	} else {
	  myState /*s->state*/ = 3;
	}
	s->init_num = 0;
	break;
      case 4352:
	//num1 = BIO_ctrl(s->wbio, 3, 0L, (void *)0);
	//num1 = unknown();
	if (num1 > 0L) {
	  s->rwstate = 2;
	  //tmp___9 = BIO_ctrl(s->wbio, 11, 0L, (void *)0); 
	  //tmp___9 = unknown();
	  num1 = (long )((int )tmp___9);
	  if (num1 <= 0L) { 
	    ret = -1;
	    goto end;
	  }
	  s->rwstate = 1;
	}
	myState /*s->state*/ = myStateNext /*(s->s3)->tmp.next_state*/;
	break;
      case 3:
	//ssl3_cleanup_key_block(s);
	if ((unsigned long )s->init_buf != (unsigned long )((void *)0)) {
	  //BUF_MEM_free(s->init_buf);
	  s->init_buf = (BUF_MEM *)((void *)0);
	}
	if (! ((s->s3)->flags & 4L)) { 
	  //ssl_free_wbio_buffer(s);
	}
	s->init_num = 0;
	s->new_session = 0;
	//ssl_update_cache(s, 1);
	if (s->hit) { 
	  (s->ctx)->stats.sess_hit ++;
	} 
	ret = 1;
	s->handshake_func = (int (*)())(& ssl3_connect);
	(s->ctx)->stats.sess_connect_good ++;
	if ((unsigned long )cb != (unsigned long )((void *)0)) { 
	  //((*cb))(s, 32, 1);
	}
	goto end;
      default: 
	//ERR_put_error(20, 132, 255, (char const *)"s3_clnt.c", 418);
	ret = -1;
	goto end;
      }
      if (! (s->s3)->tmp.reuse_message) { 
	if (! skip) {
	  if (s->debug) {
	    //ret = (int )BIO_ctrl(s->wbio, 11, 0L, (void *)0); 
	    //    ret = unknown();	    
	    if (ret <= 0) {
	      goto end;
	    }
	  } 
	  if ((unsigned long )cb != (unsigned long )((void *)0)) { 
	    if (myState /*s->state*/ != state) {
	      new_state = myState /*s->state*/;
	      myState /*s->state*/ = state;
	      //((*cb))(s, 4097, 1);
	      myState /*s->state*/ = new_state;
	    }
	  }
	}
      }
      skip = 0;
    }
  end:
    s->in_handshake --;
    if ((unsigned long )cb != (unsigned long )((void *)0)) { 
      //((*cb))(s, 4098, ret);
    }
    return (ret);
     ERROR: goto ERROR;
  }
}

static int ssl3_client_hello(SSL *s )
{ unsigned char *buf ;
  unsigned char *p ;
  unsigned char *d ;
  int i ;
  int j ;
  unsigned long Time ;
  unsigned long l ;
  SSL_COMP *comp ;
  int tmp ;
  unsigned char *tmp___0 ;
  unsigned char *tmp___1 ;
  unsigned char *tmp___2 ;
  unsigned char *tmp___3 ;
  unsigned char *tmp___4 ;
  unsigned char *tmp___5 ;
  unsigned char *tmp___6 ;
  STACK *tmp___7 ;
  unsigned char *tmp___8 ;
  unsigned char *tmp___10 ;
  unsigned char *tmp___11 ;
  unsigned char *tmp___12 ;
  int tmp___13 ;
  {
  buf = (unsigned char *)(s->init_buf)->data;
  if (s->state == 4368) {
    if ((unsigned long )s->session == (unsigned long )((void *)0)) {
      goto _L;
    } else {
      if ((s->session)->ssl_version != s->version) {
        goto _L;
      } else {
        if ((s->session)->not_resumable) {
          _L:
          tmp = ssl_get_new_session(s, 0); if (! tmp) {
            goto err;
          }
        }
      }
    }
    p = (s->s3)->client_random;
    Time = (unsigned long )time((time_t *)((void *)0));
    tmp___0 = p; p ++; (*tmp___0) = (unsigned char )((Time >> 24) & 255UL); tmp___1 = p; p ++; (*tmp___1) = (unsigned char )((Time >> 16) & 255UL); tmp___2 = p; p ++; (*tmp___2) = (unsigned char )((Time >> 8) & 255UL); tmp___3 = p; p ++; (*tmp___3) = (unsigned char )(Time & 255UL);
    RAND_pseudo_bytes(p, (int )(32U - sizeof(Time)));
    p = buf + 4; d = p;
    tmp___4 = p; p ++; (*tmp___4) = (unsigned char )(s->version >> 8);
    tmp___5 = p; p ++; (*tmp___5) = (unsigned char )(s->version & 255);
    s->client_version = s->version;
    memcpy((void * )p, (void const * )((s->s3)->client_random),
           32U); p += 32;
    if (s->new_session) { i = 0;
    } else {
      i = (int )(s->session)->session_id_length;
    }
    tmp___6 = p; p ++; (*tmp___6) = (unsigned char )i;
    if (i != 0) {
      memcpy((void * )p, (void const * )((s->session)->session_id),
             (unsigned int )i); p += i;
    }
    tmp___7 = SSL_get_ciphers(s); i = ssl_cipher_list_to_bytes(s, tmp___7, p + 2);
    if (i == 0) {
      ERR_put_error(20, 131, 181, (char const *)"s3_clnt.c", 503);
      goto err;
    }
    (*(p + 0)) = (unsigned char )((i >> 8) & 255); (*(p + 1)) = (unsigned char )(i & 255); p += 2;
    p += i;
    if ((unsigned long )(s->ctx)->comp_methods == (unsigned long )((void *)0)) { j = 0;
    } else {
      j = sk_num((STACK const *)(s->ctx)->comp_methods);
    }
    tmp___8 = p; p ++; (*tmp___8) = (unsigned char )(1 + j);
    i = 0; while (i < j) {
      comp = (SSL_COMP *)sk_value((STACK const *)(s->ctx)->comp_methods, i);
      tmp___10 = p; p ++; (*tmp___10) = (unsigned char )comp->id;
      i ++;
    }
    tmp___11 = p; p ++; (*tmp___11) = 0;
    l = (unsigned long )(p - d);
    d = buf;
    tmp___12 = d; d ++; (*tmp___12) = 1;
    (*(d + 0)) = (unsigned char )((l >> 16) & 255UL); (*(d + 1)) = (unsigned char )((l >> 8) & 255UL); (*(d + 2)) = (unsigned char )(l & 255UL); d += 3;
    s->state = 4369;
    s->init_num = p - buf;
    s->init_off = 0;
  }
  tmp___13 = ssl3_do_write(s, 22); return (tmp___13);
  err:
  return (-1);
}
}static int ssl3_get_server_hello(SSL *s )
{ STACK *sk ;
  SSL_CIPHER *c ;
  unsigned char *p ;
  unsigned char *d ;
  int i ;
  int al ;
  int ok ;
  unsigned int j ;
  long n ;
  SSL_COMP *comp ;
  unsigned char *tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  unsigned char *tmp___4 ;
  {
  n = ssl3_get_message(s, 4384, 4385, 2, 300L, & ok);
  if (! ok) { return ((int )n);
  } p = (unsigned char *)(s->init_buf)->data; d = p;
  if ((int )(*(p + 0)) != s->version >> 8) {
    ERR_put_error(20, 146, 266, (char const *)"s3_clnt.c", 561);
    s->version = (s->version & 65280) | (int )(*(p + 1));
    al = 70;
    goto f_err;
  } else {
    if ((int )(*(p + 1)) != (s->version & 255)) {
      ERR_put_error(20, 146, 266, (char const *)"s3_clnt.c", 561);
      s->version = (s->version & 65280) | (int )(*(p + 1));
      al = 70;
      goto f_err;
    }
  } p += 2;
  memcpy((void * )((s->s3)->server_random), (void const * )p,
         32U); p += 32;
  tmp = p; p ++; j = (unsigned int )(*tmp);
  if (j != 0U) { if (j != 32U) {
      if (j < 16U) {
        al = 47;
        ERR_put_error(20, 146, 222, (char const *)"s3_clnt.c", 582);
        goto f_err;
      }
    }
  } if (j != 0U) { if (j == (s->session)->session_id_length) { tmp___2 = memcmp((void const *)p, (void const *)((s->session)->session_id),
                       j);
      if (tmp___2 == 0) {
        if (s->sid_ctx_length != (s->session)->sid_ctx_length) {
          al = 47;
          ERR_put_error(20, 146, 272, (char const *)"s3_clnt.c", 593);
          goto f_err;
        } else {
          tmp___0 = memcmp((void const *)((s->session)->sid_ctx), (void const *)(s->sid_ctx),
                           s->sid_ctx_length);
          if (tmp___0) {
            al = 47;
            ERR_put_error(20, 146, 272, (char const *)"s3_clnt.c", 593);
            goto f_err;
          }
        } s->hit = 1;
      } else {
        goto _L___0;
      }
    } else {
      goto _L___0;
    }
  } else {
    _L___0:
    _L:
    s->hit = 0;
    if ((s->session)->session_id_length > 0U) {
      tmp___1 = ssl_get_new_session(s, 0); if (! tmp___1) {
        al = 80;
        goto f_err;
      }
    }
    (s->session)->session_id_length = j;
    memcpy((void * )((s->session)->session_id), (void const * )p,
           j);
  } p += j;
  c = ((*((s->method)->get_cipher_by_char)))((unsigned char const *)p);
  if ((unsigned long )c == (unsigned long )((void *)0)) {
    al = 47;
    ERR_put_error(20, 146, 248, (char const *)"s3_clnt.c", 620);
    goto f_err;
  }
  tmp___3 = ((*((s->method)->put_cipher_by_char)))((SSL_CIPHER const *)((void *)0),
                                                   (unsigned char *)((void *)0));
  p += tmp___3;
  sk = ssl_get_ciphers_by_id(s);
  i = sk_find(sk, (char *)c);
  if (i < 0) {
    al = 47;
    ERR_put_error(20, 146, 261, (char const *)"s3_clnt.c", 631);
    goto f_err;
  }
  if (s->hit) { if ((unsigned long )(s->session)->cipher != (unsigned long )c) {
      if (! (s->options & 8UL)) {
        al = 47;
        ERR_put_error(20, 146, 197, (char const *)"s3_clnt.c", 641);
        goto f_err;
      }
    }
  } (s->s3)->tmp.new_cipher = c;
  tmp___4 = p; p ++; j = (unsigned int )(*tmp___4);
  if (j == 0U) { comp = (SSL_COMP *)((void *)0);
  } else {
    comp = ssl3_comp_find((s->ctx)->comp_methods, (int )j);
  }
  if (j != 0U) { if ((unsigned long )comp == (unsigned long )((void *)0)) {
      al = 47;
      ERR_put_error(20, 146, 257, (char const *)"s3_clnt.c", 658);
      goto f_err;
    } else {
      (s->s3)->tmp.new_compression = (SSL_COMP const *)comp;
    }
  } else {
    (s->s3)->tmp.new_compression = (SSL_COMP const *)comp;
  }
  if ((unsigned long )p != (unsigned long )(d + n)) {
    al = 50;
    ERR_put_error(20, 146, 115, (char const *)"s3_clnt.c", 670);
    goto err;
  }
  return (1);
  f_err:
  ssl3_send_alert(s, 2, al);
  err:
  return (-1);
}
}static int ssl3_get_server_certificate(SSL *s )
{ int al ;
  int i ;
  int ok ;
  int ret ;
  unsigned long n ;
  unsigned long nc ;
  unsigned long llen ;
  unsigned long l ;
  X509 *x ;
  unsigned char *p ;
  unsigned char *d ;
  unsigned char *q ;
  STACK *sk ;
  SESS_CERT *sc ;
  EVP_PKEY *pkey ;
  int tmp ;
  int tmp___1 ;
  {
  ret = -1;
  x = (X509 *)((void *)0);
  sk = (STACK *)((void *)0);
  pkey = (EVP_PKEY *)((void *)0);
  n = (unsigned long )ssl3_get_message(s, 4400, 4401, -1, 102400L, & ok);
  if (! ok) { return ((int )n);
  } if ((s->s3)->tmp.message_type == 12) {
    (s->s3)->tmp.reuse_message = 1;
    return (1);
  }
  if ((s->s3)->tmp.message_type != 11) {
    al = 10;
    ERR_put_error(20, 144, 114, (char const *)"s3_clnt.c", 713);
    goto f_err;
  }
  p = (unsigned char *)(s->init_buf)->data; d = p;
  sk = sk_new_null(); if ((unsigned long )sk == (unsigned long )((void *)0)) {
    ERR_put_error(20, 144, 33, (char const *)"s3_clnt.c", 720);
    goto err;
  }
  llen = (((unsigned long )(*(p + 0)) << 16) | ((unsigned long )(*(p + 1)) << 8)) |
         (unsigned long )(*(p + 2));
  p += 3;
  if (llen + 3UL != n) {
    al = 50;
    ERR_put_error(20, 144, 159, (char const *)"s3_clnt.c", 728);
    goto f_err;
  }
  nc = 0UL; while (nc < llen) {
    l = (((unsigned long )(*(p + 0)) << 16) | ((unsigned long )(*(p + 1)) << 8)) |
        (unsigned long )(*(p + 2));
    p += 3;
    if ((l + nc) + 3UL > llen) {
      al = 50;
      ERR_put_error(20, 144, 135, (char const *)"s3_clnt.c", 737);
      goto f_err;
    }
    q = p;
    x = d2i_X509((X509 **)((void *)0), & q, (long )l);
    if ((unsigned long )x == (unsigned long )((void *)0)) {
      al = 42;
      ERR_put_error(20, 144, 13, (char const *)"s3_clnt.c", 746);
      goto f_err;
    }
    if ((unsigned long )q != (unsigned long )(p + l)) {
      al = 50;
      ERR_put_error(20, 144, 135, (char const *)"s3_clnt.c", 752);
      goto f_err;
    }
    tmp = sk_push(sk, (char *)x); if (! tmp) {
      ERR_put_error(20, 144, 33, (char const *)"s3_clnt.c", 757);
      goto err;
    }
    x = (X509 *)((void *)0);
    nc += l + 3UL;
    p = q;
  }
  i = ssl_verify_cert_chain(s, sk);
  if (s->verify_mode != 0) { if (! i) {
      al = ssl_verify_alarm_type(s->verify_result);
      ERR_put_error(20, 144, 134, (char const *)"s3_clnt.c", 769);
      goto f_err;
    }
  } ERR_clear_error();
  sc = ssl_sess_cert_new();
  if ((unsigned long )sc == (unsigned long )((void *)0)) {
    goto err;
  }
  if ((s->session)->sess_cert) { ssl_sess_cert_free((s->session)->sess_cert);
  } (s->session)->sess_cert = sc;
  sc->cert_chain = sk;
  x = (X509 *)sk_value((STACK const *)sk, 0);
  sk = (STACK *)((void *)0);
  pkey = X509_get_pubkey(x);
  if ((unsigned long )pkey == (unsigned long )((void *)0)) {
    x = (X509 *)((void *)0);
    al = 2;
    ERR_put_error(20, 144, 239, (char const *)"s3_clnt.c", 792);
    goto f_err;
  } else {
    tmp___1 = EVP_PKEY_missing_parameters(pkey); if (tmp___1) {
      x = (X509 *)((void *)0);
      al = 2;
      ERR_put_error(20, 144, 239, (char const *)"s3_clnt.c", 792);
      goto f_err;
    }
  } i = ssl_cert_type(x, pkey);
  if (i < 0) {
    x = (X509 *)((void *)0);
    al = 2;
    ERR_put_error(20, 144, 247, (char const *)"s3_clnt.c", 801);
    goto f_err;
  }
  sc->peer_cert_type = i;
  CRYPTO_add_lock(& x->references, 1, 3, (char const *)"s3_clnt.c", 806);
  if ((unsigned long )sc->peer_pkeys[i].x509 != (unsigned long )((void *)0)) { X509_free(sc->peer_pkeys[i].x509);
  }
  sc->peer_pkeys[i].x509 = x;
  sc->peer_key = & sc->peer_pkeys[i];
  if ((unsigned long )(s->session)->peer != (unsigned long )((void *)0)) { X509_free((s->session)->peer);
  }
  CRYPTO_add_lock(& x->references, 1, 3, (char const *)"s3_clnt.c", 816);
  (s->session)->peer = x;
  (s->session)->verify_result = s->verify_result;
  x = (X509 *)((void *)0);
  ret = 1;
  if (0) {
    f_err:
    ssl3_send_alert(s, 2, al);
  }
  err:
  EVP_PKEY_free(pkey);
  X509_free(x);
  sk_pop_free(sk, (void (*)(void * ))(& X509_free));
  return (ret);
}
}static int ssl3_get_key_exchange(SSL *s )
{ unsigned char *q ;
  unsigned char md_buf[72] ;
  EVP_MD_CTX md_ctx ;
  unsigned char *param ;
  unsigned char *p ;
  int al ;
  int i ;
  int j ;
  int param_len ;
  int ok ;
  long n ;
  long alg ;
  EVP_PKEY *pkey ;
  RSA *rsa ;
  DH *dh ;
  int num ;
  EVP_MD const *tmp ;
  EVP_MD const *tmp___0 ;
  int tmp___1 ;
  {
  pkey = (EVP_PKEY *)((void *)0);
  rsa = (RSA *)((void *)0);
  dh = (DH *)((void *)0);
  n = ssl3_get_message(s, 4416, 4417, -1, 102400L, & ok);
  if (! ok) { return ((int )n);
  } if ((s->s3)->tmp.message_type != 12) {
    (s->s3)->tmp.reuse_message = 1;
    return (1);
  }
  p = (unsigned char *)(s->init_buf)->data; param = p;
  if ((unsigned long )(s->session)->sess_cert != (unsigned long )((void *)0)) {
    if ((unsigned long )((s->session)->sess_cert)->peer_rsa_tmp != (unsigned long )((void *)0)) {
      RSA_free(((s->session)->sess_cert)->peer_rsa_tmp);
      ((s->session)->sess_cert)->peer_rsa_tmp = (RSA *)((void *)0);
    }
    if (((s->session)->sess_cert)->peer_dh_tmp) {
      DH_free(((s->session)->sess_cert)->peer_dh_tmp);
      ((s->session)->sess_cert)->peer_dh_tmp = (DH *)((void *)0);
    }
  } else {
    (s->session)->sess_cert = ssl_sess_cert_new();
  }
  param_len = 0;
  alg = (long )((s->s3)->tmp.new_cipher)->algorithms;
  if (alg & 1L) {
    rsa = RSA_new(); if ((unsigned long )rsa == (unsigned long )((void *)0)) {
      ERR_put_error(20, 141, 33, (char const *)"s3_clnt.c", 905);
      goto err;
    }
    i = (int )(((unsigned int )(*(p + 0)) << 8) | (unsigned int )(*(p + 1))); p += 2;
    param_len = i + 2;
    if ((long )param_len > n) {
      al = 50;
      ERR_put_error(20, 141, 121, (char const *)"s3_clnt.c", 913);
      goto f_err;
    }
    rsa->n = BN_bin2bn((unsigned char const *)p, i, rsa->n); if (! rsa->n) {
      ERR_put_error(20, 141, 3, (char const *)"s3_clnt.c", 918);
      goto err;
    }
    p += i;
    i = (int )(((unsigned int )(*(p + 0)) << 8) | (unsigned int )(*(p + 1))); p += 2;
    param_len += i + 2;
    if ((long )param_len > n) {
      al = 50;
      ERR_put_error(20, 141, 120, (char const *)"s3_clnt.c", 928);
      goto f_err;
    }
    rsa->e = BN_bin2bn((unsigned char const *)p, i, rsa->e); if (! rsa->e) {
      ERR_put_error(20, 141, 3, (char const *)"s3_clnt.c", 933);
      goto err;
    }
    p += i;
    n -= (long )param_len;
    if (alg & 32L) { pkey = X509_get_pubkey(((s->session)->sess_cert)->peer_pkeys[0].x509);
    } else {
      ERR_put_error(20, 141, 157, (char const *)"s3_clnt.c", 944);
      goto err;
    }
    ((s->session)->sess_cert)->peer_rsa_tmp = rsa;
    rsa = (RSA *)((void *)0);
  } else {
    if (alg & 16L) {
      dh = DH_new(); if ((unsigned long )dh == (unsigned long )((void *)0)) {
        ERR_put_error(20, 141, 5, (char const *)"s3_clnt.c", 959);
        goto err;
      }
      i = (int )(((unsigned int )(*(p + 0)) << 8) | (unsigned int )(*(p + 1))); p += 2;
      param_len = i + 2;
      if ((long )param_len > n) {
        al = 50;
        ERR_put_error(20, 141, 110, (char const *)"s3_clnt.c", 967);
        goto f_err;
      }
      dh->p = BN_bin2bn((unsigned char const *)p, i, (BIGNUM *)((void *)0)); if (! dh->p) {
        ERR_put_error(20, 141, 3, (char const *)"s3_clnt.c", 972);
        goto err;
      }
      p += i;
      i = (int )(((unsigned int )(*(p + 0)) << 8) | (unsigned int )(*(p + 1))); p += 2;
      param_len += i + 2;
      if ((long )param_len > n) {
        al = 50;
        ERR_put_error(20, 141, 108, (char const *)"s3_clnt.c", 982);
        goto f_err;
      }
      dh->g = BN_bin2bn((unsigned char const *)p, i, (BIGNUM *)((void *)0)); if (! dh->g) {
        ERR_put_error(20, 141, 3, (char const *)"s3_clnt.c", 987);
        goto err;
      }
      p += i;
      i = (int )(((unsigned int )(*(p + 0)) << 8) | (unsigned int )(*(p + 1))); p += 2;
      param_len += i + 2;
      if ((long )param_len > n) {
        al = 50;
        ERR_put_error(20, 141, 109, (char const *)"s3_clnt.c", 997);
        goto f_err;
      }
      dh->pub_key = BN_bin2bn((unsigned char const *)p, i, (BIGNUM *)((void *)0)); if (! dh->pub_key) {
        ERR_put_error(20, 141, 3, (char const *)"s3_clnt.c", 1002);
        goto err;
      }
      p += i;
      n -= (long )param_len;
      if (alg & 32L) { pkey = X509_get_pubkey(((s->session)->sess_cert)->peer_pkeys[0].x509);
      } else {
        if (alg & 64L) { pkey = X509_get_pubkey(((s->session)->sess_cert)->peer_pkeys[2].x509);
        }
      } ((s->session)->sess_cert)->peer_dh_tmp = dh;
      dh = (DH *)((void *)0);
    } else {
      if (alg & 2L) {
        al = 47;
        ERR_put_error(20, 141, 235, (char const *)"s3_clnt.c", 1027);
        goto f_err;
      } else {
        if (alg & 4L) {
          al = 47;
          ERR_put_error(20, 141, 235, (char const *)"s3_clnt.c", 1027);
          goto f_err;
        }
      }
    }
  }
  if (alg & 128L) {
    al = 40;
    ERR_put_error(20, 141, 235, (char const *)"s3_clnt.c", 1034);
    goto f_err;
  }
  if ((unsigned long )pkey != (unsigned long )((void *)0)) {
    i = (int )(((unsigned int )(*(p + 0)) << 8) | (unsigned int )(*(p + 1))); p += 2;
    n -= 2L;
    j = EVP_PKEY_size(pkey);
    if ((long )i != n) {
      al = 50;
      ERR_put_error(20, 141, 264, (char const *)"s3_clnt.c", 1053);
      goto f_err;
    } else {
      if (n > (long )j) {
        al = 50;
        ERR_put_error(20, 141, 264, (char const *)"s3_clnt.c", 1053);
        goto f_err;
      } else {
        if (n <= 0L) {
          al = 50;
          ERR_put_error(20, 141, 264, (char const *)"s3_clnt.c", 1053);
          goto f_err;
        }
      }
    }
    if (pkey->type == 6) {
      j = 0;
      q = md_buf;
      num = 2; while (num > 0) {
        if (num == 2) { tmp = (s->ctx)->md5;
        } else {
          tmp = (s->ctx)->sha1;
        }
        EVP_DigestInit(& md_ctx, tmp);
        EVP_DigestUpdate(& md_ctx, (void const *)(& (s->s3)->client_random[0]),
                         32U); EVP_DigestUpdate(& md_ctx, (void const *)(& (s->s3)->server_random[0]),
                         32U); EVP_DigestUpdate(& md_ctx, (void const *)param, (unsigned int )param_len);
        EVP_DigestFinal(& md_ctx, q, (unsigned int *)(& i));
        q += i;
        j += i;
        num --;
      }
      i = RSA_verify(114, md_buf, (unsigned int )j, p, (unsigned int )n, pkey->pkey.rsa);
      if (i < 0) {
        al = 51;
        ERR_put_error(20, 141, 118, (char const *)"s3_clnt.c", 1080);
        goto f_err;
      }
      if (i == 0) {
        al = 51;
        ERR_put_error(20, 141, 123, (char const *)"s3_clnt.c", 1087);
        goto f_err;
      }
    } else {
      if (pkey->type == 116) {
        tmp___0 = (EVP_MD const *)EVP_dss1(); EVP_DigestInit(& md_ctx, tmp___0);
        EVP_DigestUpdate(& md_ctx, (void const *)(& (s->s3)->client_random[0]),
                         32U); EVP_DigestUpdate(& md_ctx, (void const *)(& (s->s3)->server_random[0]),
                         32U); EVP_DigestUpdate(& md_ctx, (void const *)param, (unsigned int )param_len);
        tmp___1 = EVP_VerifyFinal(& md_ctx, p, (unsigned int )((int )n), pkey); if (! tmp___1) {
          al = 51;
          ERR_put_error(20, 141, 123, (char const *)"s3_clnt.c", 1105);
          goto f_err;
        }
      } else {
        ERR_put_error(20, 141, 157, (char const *)"s3_clnt.c", 1112);
        goto err;
      }
    }
  } else {
    if (! (alg & 256L)) {
      ERR_put_error(20, 141, 157, (char const *)"s3_clnt.c", 1121);
      goto err;
    }
    if (n != 0L) {
      al = 50;
      ERR_put_error(20, 141, 153, (char const *)"s3_clnt.c", 1127);
      goto f_err;
    }
  }
  EVP_PKEY_free(pkey);
  return (1);
  f_err:
  ssl3_send_alert(s, 2, al);
  err:
  EVP_PKEY_free(pkey);
  if ((unsigned long )rsa != (unsigned long )((void *)0)) { RSA_free(rsa);
  }
  if ((unsigned long )dh != (unsigned long )((void *)0)) { DH_free(dh);
  }
  return (-1);
}
}static int ssl3_get_certificate_request(SSL *s )
{ int ok ;
  int ret ;
  unsigned long n ;
  unsigned long nc ;
  unsigned long l ;
  unsigned int llen ;
  unsigned int ctype_num ;
  unsigned int i ;
  X509_NAME *xn ;
  unsigned char *p ;
  unsigned char *d ;
  unsigned char *q ;
  STACK *ca_sk ;
  unsigned char *tmp ;
  int tmp___0 ;
  {
  ret = 0;
  xn = (X509_NAME *)((void *)0);
  ca_sk = (STACK *)((void *)0);
  n = (unsigned long )ssl3_get_message(s, 4432, 4433, -1, 102400L, & ok);
  if (! ok) { return ((int )n);
  } (s->s3)->tmp.cert_req = 0;
  if ((s->s3)->tmp.message_type == 14) {
    (s->s3)->tmp.reuse_message = 1;
    return (1);
  }
  if ((s->s3)->tmp.message_type != 13) {
    ssl3_send_alert(s, 2, 10);
    ERR_put_error(20, 135, 262, (char const *)"s3_clnt.c", 1181);
    goto err;
  }
  if (s->version > 768) {
    l = ((s->s3)->tmp.new_cipher)->algorithms;
    if (l & 256UL) {
      ssl3_send_alert(s, 2, 10);
      ERR_put_error(20, 135, 232, (char const *)"s3_clnt.c", 1192);
      goto err;
    }
  }
  p = (unsigned char *)(s->init_buf)->data; d = p;
  ca_sk = sk_new((int (*)(char const * const * , char const * const * ))(& ca_dn_cmp)); if ((unsigned long )ca_sk == (unsigned long )((void *)0)) {
    ERR_put_error(20, 135, 33, (char const *)"s3_clnt.c", 1201);
    goto err;
  }
  tmp = p; p ++; ctype_num = (unsigned int )(*tmp);
  if (ctype_num > 7U) { ctype_num = 7U;
  }
  i = 0U; while (i < ctype_num) { (s->s3)->tmp.ctype[i] = (char )(*(p + i)); i ++;
  }
  p += ctype_num;
  llen = ((unsigned int )(*(p + 0)) << 8) | (unsigned int )(*(p + 1)); p += 2;
  if ((unsigned long )(((llen + ctype_num) + 2U) + 1U) != n) {
    ssl3_send_alert(s, 2, 50);
    ERR_put_error(20, 135, 159, (char const *)"s3_clnt.c", 1227);
    goto err;
  }
  nc = 0UL; while (nc < (unsigned long )llen) {
    l = (unsigned long )(((unsigned int )(*(p + 0)) << 8) | (unsigned int )(*(p +
                                                                              1)));
    p += 2;
    if ((l + nc) + 2UL > (unsigned long )llen) {
      if (s->options & 536870912UL) {
        goto cont;
      } ssl3_send_alert(s, 2, 50);
      ERR_put_error(20, 135, 132, (char const *)"s3_clnt.c", 1239);
      goto err;
    }
    q = p;
    xn = d2i_X509_NAME((X509_NAME **)((void *)0), & q, (long )l); if ((unsigned long )xn == (unsigned long )((void *)0)) {
      if (s->options & 536870912UL) {
        goto cont;
      } else {
        ssl3_send_alert(s, 2, 50);
        ERR_put_error(20, 135, 13, (char const *)"s3_clnt.c", 1253);
        goto err;
      }
    }
    if ((unsigned long )q != (unsigned long )(p + l)) {
      ssl3_send_alert(s, 2, 50);
      ERR_put_error(20, 135, 131, (char const *)"s3_clnt.c", 1261);
      goto err;
    }
    tmp___0 = sk_push(ca_sk, (char *)xn); if (! tmp___0) {
      ERR_put_error(20, 135, 33, (char const *)"s3_clnt.c", 1266);
      goto err;
    }
    p += l;
    nc += l + 2UL;
  }
  if (0) {
    cont:
    ERR_clear_error();
  }
  (s->s3)->tmp.cert_req = 1;
  (s->s3)->tmp.ctype_num = (int )ctype_num;
  if ((unsigned long )(s->s3)->tmp.ca_names != (unsigned long )((void *)0)) { sk_pop_free((s->s3)->tmp.ca_names, (void (*)(void * ))(& X509_NAME_free));
  }
  (s->s3)->tmp.ca_names = ca_sk;
  ca_sk = (STACK *)((void *)0);
  ret = 1;
  err:
  if ((unsigned long )ca_sk != (unsigned long )((void *)0)) { sk_pop_free(ca_sk, (void (*)(void * ))(& X509_NAME_free));
  } return (ret);
}
}static int ca_dn_cmp(X509_NAME const * const *a , X509_NAME const * const *b )
{ int tmp ;
  {
  tmp = X509_NAME_cmp((X509_NAME const *)(*a), (X509_NAME const *)(*b)); return (tmp);
}
}static int ssl3_get_server_done(SSL *s )
{ int ok ;
  int ret ;
  long n ;
  {
  ret = 0;
  n = ssl3_get_message(s, 4448, 4449, 14, 30L, & ok);
  if (! ok) { return ((int )n);
  } if (n > 0L) {
    ssl3_send_alert(s, 2, 50);
    ERR_put_error(20, 145, 159, (char const *)"s3_clnt.c", 1316);
  }
  ret = 1;
  return (ret);
}
}static int ssl3_send_client_key_exchange(SSL *s )
{ unsigned char *p ;
  unsigned char *d ;
  int n ;
  unsigned long l ;
  unsigned char *q ;
  EVP_PKEY *pkey ;
  RSA *rsa ;
  unsigned char tmp_buf[48] ;
  int tmp ;
  DH *dh_srvr ;
  DH *dh_clnt ;
  int tmp___1 ;
  int tmp___2 ;
  unsigned char *tmp___3 ;
  int tmp___4 ;
  {
  pkey = (EVP_PKEY *)((void *)0);
  if (s->state == 4480) {
    d = (unsigned char *)(s->init_buf)->data;
    p = d + 4;
    l = ((s->s3)->tmp.new_cipher)->algorithms;
    if (l & 1UL) {
      if ((unsigned long )((s->session)->sess_cert)->peer_rsa_tmp != (unsigned long )((void *)0)) { rsa = ((s->session)->sess_cert)->peer_rsa_tmp;
      } else {
        pkey = X509_get_pubkey(((s->session)->sess_cert)->peer_pkeys[0].x509);
        if ((unsigned long )pkey == (unsigned long )((void *)0)) {
          ERR_put_error(20, 152, 157, (char const *)"s3_clnt.c", 1354);
          goto err;
        } else {
          if (pkey->type != 6) {
            ERR_put_error(20, 152, 157, (char const *)"s3_clnt.c", 1354);
            goto err;
          } else {
            if ((unsigned long )pkey->pkey.rsa == (unsigned long )((void *)0)) {
              ERR_put_error(20, 152, 157, (char const *)"s3_clnt.c", 1354);
              goto err;
            }
          }
        }
        rsa = pkey->pkey.rsa;
        EVP_PKEY_free(pkey);
      }
      tmp_buf[0] = (unsigned char )(s->client_version >> 8);
      tmp_buf[1] = (unsigned char )(s->client_version & 255);
      tmp = RAND_bytes(& tmp_buf[2], 46); if (tmp <= 0) {
        goto err;
      } (s->session)->master_key_length = 48;
      q = p;
      if (s->version > 768) { p += 2;
      }
      n = RSA_public_encrypt(48, tmp_buf, p, rsa, 1);
      if (s->options & 134217728UL) { (*(p + 1)) = (unsigned char )((int )(*(p + 1)) + 1);
      } if (s->options & 268435456UL) { tmp_buf[0] = 112;
      } if (n <= 0) {
        ERR_put_error(20, 152, 119, (char const *)"s3_clnt.c", 1380);
        goto err;
      }
      if (s->version > 768) {
        (*(q + 0)) = (unsigned char )((n >> 8) & 255); (*(q + 1)) = (unsigned char )(n & 255); q += 2;
        n += 2;
      }
      (s->session)->master_key_length = ((*(((s->method)->ssl3_enc)->generate_master_secret)))(s,
                                                                                               (s->session)->master_key,
                                                                                               tmp_buf,
                                                                                               48);
      memset((void *)(tmp_buf), 0, 48U);
    } else {
      if (l & 22UL) {
        if ((unsigned long )((s->session)->sess_cert)->peer_dh_tmp != (unsigned long )((void *)0)) { dh_srvr = ((s->session)->sess_cert)->peer_dh_tmp;
        } else {
          ssl3_send_alert(s, 2, 40);
          ERR_put_error(20, 152, 238, (char const *)"s3_clnt.c", 1410);
          goto err;
        }
        dh_clnt = (DH *)ASN1_dup((int (*)())(& i2d_DHparams), (char *(*)())(& d2i_DHparams),
                                 (char *)dh_srvr);
        if ((unsigned long )dh_clnt == (unsigned long )((void *)0)) {
          ERR_put_error(20, 152, 5, (char const *)"s3_clnt.c", 1417);
          goto err;
        }
        tmp___1 = DH_generate_key(dh_clnt); if (! tmp___1) {
          ERR_put_error(20, 152, 5, (char const *)"s3_clnt.c", 1422);
          goto err;
        }
        n = DH_compute_key(p, dh_srvr->pub_key, dh_clnt);
        if (n <= 0) {
          ERR_put_error(20, 152, 5, (char const *)"s3_clnt.c", 1433);
          goto err;
        }
        (s->session)->master_key_length = ((*(((s->method)->ssl3_enc)->generate_master_secret)))(s,
                                                                                                 (s->session)->master_key,
                                                                                                 p,
                                                                                                 n); memset((void *)p, 0, (unsigned int )n);
        tmp___2 = BN_num_bits((BIGNUM const *)dh_clnt->pub_key); n = (tmp___2 + 7) / 8;
        (*(p + 0)) = (unsigned char )((n >> 8) & 255); (*(p + 1)) = (unsigned char )(n & 255); p += 2;
        BN_bn2bin((BIGNUM const *)dh_clnt->pub_key, p);
        n += 2;
        DH_free(dh_clnt);
      } else {
        ssl3_send_alert(s, 2, 40);
        ERR_put_error(20, 152, 157, (char const *)"s3_clnt.c", 1458);
        goto err;
      }
    } tmp___3 = d; d ++; (*tmp___3) = 16;
    (*(d + 0)) = (unsigned char )((n >> 16) & 255); (*(d + 1)) = (unsigned char )((n >> 8) & 255); (*(d + 2)) = (unsigned char )(n & 255); d += 3;
    s->state = 4481;
    s->init_num = n + 4;
    s->init_off = 0;
  }
  tmp___4 = ssl3_do_write(s, 22); return (tmp___4);
  err:
  return (-1);
}
}static int ssl3_send_client_verify(SSL *s )
{ unsigned char *p ;
  unsigned char *d ;
  unsigned char data[36] ;
  EVP_PKEY *pkey ;
  unsigned int u ;
  unsigned long n ;
  int j ;
  int tmp ;
  int tmp___0 ;
  unsigned char *tmp___1 ;
  int tmp___2 ;
  {
  u = 0U;
  if (s->state == 4496) {
    d = (unsigned char *)(s->init_buf)->data;
    p = d + 4;
    pkey = ((s->cert)->key)->privatekey;
    ((*(((s->method)->ssl3_enc)->cert_verify_mac)))(s, & (s->s3)->finish_dgst2, & data[16]);
    if (pkey->type == 6) {
      ((*(((s->method)->ssl3_enc)->cert_verify_mac)))(s, & (s->s3)->finish_dgst1,
                                                      data);
      tmp = RSA_sign(114, data, 36U, p + 2, & u, pkey->pkey.rsa); if (tmp <= 0) {
        ERR_put_error(20, 153, 4, (char const *)"s3_clnt.c", 1508);
        goto err;
      }
      (*(p + 0)) = (unsigned char )((u >> 8) & 255U); (*(p + 1)) = (unsigned char )(u & 255U); p += 2;
      n = (unsigned long )(u + 2U);
    } else {
      if (pkey->type == 116) {
        tmp___0 = DSA_sign(pkey->save_type, (unsigned char const *)(& data[16]),
                           20, p + 2, (unsigned int *)(& j), pkey->pkey.dsa);
        if (! tmp___0) {
          ERR_put_error(20, 153, 10, (char const *)"s3_clnt.c", 1524);
          goto err;
        }
        (*(p + 0)) = (unsigned char )((j >> 8) & 255); (*(p + 1)) = (unsigned char )(j & 255); p += 2;
        n = (unsigned long )(j + 2);
      } else {
        ERR_put_error(20, 153, 157, (char const *)"s3_clnt.c", 1533);
        goto err;
      }
    } tmp___1 = d; d ++; (*tmp___1) = 15;
    (*(d + 0)) = (unsigned char )((n >> 16) & 255UL); (*(d + 1)) = (unsigned char )((n >> 8) & 255UL); (*(d + 2)) = (unsigned char )(n & 255UL); d += 3;
    s->init_num = (int )n + 4;
    s->init_off = 0;
  }
  tmp___2 = ssl3_do_write(s, 22); return (tmp___2);
  err:
  return (-1);
}
}static int ssl3_send_client_certificate(SSL *s )
{ X509 *x509 ;
  EVP_PKEY *pkey ;
  int i ;
  unsigned long l ;
  int tmp ;
  int tmp___0 ;
  X509 *tmp___1 ;
  int tmp___2 ;
  {
  x509 = (X509 *)((void *)0);
  pkey = (EVP_PKEY *)((void *)0);
  if (s->state == 4464) {
    if ((unsigned long )s->cert == (unsigned long )((void *)0)) {
      s->state = 4465;
    } else {
      if ((unsigned long )((s->cert)->key)->x509 == (unsigned long )((void *)0)) {
        s->state = 4465;
      } else {
        if ((unsigned long )((s->cert)->key)->privatekey == (unsigned long )((void *)0)) {
          s->state = 4465;
        } else {
          s->state = 4466;
        }
      }
    }
  }
  if (s->state == 4465) {
    i = 0;
    if ((unsigned long )(s->ctx)->client_cert_cb != (unsigned long )((void *)0)) { i = ((*((s->ctx)->client_cert_cb)))(s, & x509, & pkey);
    }
    if (i < 0) {
      s->rwstate = 4;
      return (-1);
    }
    s->rwstate = 1;
    if (i == 1) { if ((unsigned long )pkey != (unsigned long )((void *)0)) { if ((unsigned long )x509 != (unsigned long )((void *)0)) {
          s->state = 4465;
          tmp = SSL_use_certificate(s, x509); if (tmp) { tmp___0 = SSL_use_PrivateKey(s, pkey); if (! tmp___0) {
              i = 0;
            }
          } else {
            i = 0;
          }
        } else {
          goto _L___0;
        }
      } else {
        goto _L___0;
      }
    } else {
      _L___0:
      _L:
      if (i == 1) {
        i = 0;
        ERR_put_error(20, 151, 106, (char const *)"s3_clnt.c", 1589);
      }
    } if ((unsigned long )x509 != (unsigned long )((void *)0)) { X509_free(x509);
    } if ((unsigned long )pkey != (unsigned long )((void *)0)) { EVP_PKEY_free(pkey);
    } if (i == 0) {
      if (s->version == 768) {
        (s->s3)->tmp.cert_req = 0;
        ssl3_send_alert(s, 1, 41);
        return (1);
      } else {
        (s->s3)->tmp.cert_req = 2;
      }
    }
    s->state = 4466;
  }
  if (s->state == 4466) {
    s->state = 4467;
    if ((s->s3)->tmp.cert_req == 2) { tmp___1 = (X509 *)((void *)0);
    } else {
      tmp___1 = ((s->cert)->key)->x509;
    }
    l = ssl3_output_cert_chain(s, tmp___1);
    s->init_num = (int )l;
    s->init_off = 0;
  }
  tmp___2 = ssl3_do_write(s, 22); return (tmp___2);
}
}static int ssl3_check_cert_and_algorithm(SSL *s )
{ int i ;
  int idx ;
  long algs ;
  EVP_PKEY *pkey ;
  SESS_CERT *sc ;
  RSA *rsa ;
  DH *dh ;
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  {
  pkey = (EVP_PKEY *)((void *)0);
  sc = (s->session)->sess_cert;
  if ((unsigned long )sc == (unsigned long )((void *)0)) {
    ERR_put_error(20, 130, 157, (char const *)"s3_clnt.c", 1643);
    goto err;
  }
  algs = (long )((s->s3)->tmp.new_cipher)->algorithms;
  if (algs & 768L) { return (1);
  }
  rsa = ((s->session)->sess_cert)->peer_rsa_tmp;
  dh = ((s->session)->sess_cert)->peer_dh_tmp;
  idx = sc->peer_cert_type;
  pkey = X509_get_pubkey(sc->peer_pkeys[idx].x509);
  i = X509_certificate_type(sc->peer_pkeys[idx].x509, pkey);
  EVP_PKEY_free(pkey);
  if (algs & 32L) { if ((i & 17) == 17) {
      goto _L;
    } else { ERR_put_error(20, 130, 170, (char const *)"s3_clnt.c", 1671);
      goto f_err;
    }
  } else {
    _L:
    if (algs & 64L) { if (! ((i & 18) == 18)) {
        ERR_put_error(20, 130, 165, (char const *)"s3_clnt.c", 1677);
        goto f_err;
      }
    }
  }
  if (algs & 1L) { if (! ((i & 33) == 33)) { if (! ((unsigned long )rsa != (unsigned long )((void *)0))) {
        ERR_put_error(20, 130, 169, (char const *)"s3_clnt.c", 1685);
        goto f_err;
      }
    }
  }
  if (algs & 16L) { if ((i & 68) == 68) {
      goto _L___1;
    } else {
      if ((unsigned long )dh != (unsigned long )((void *)0)) {
        goto _L___1;
      } else {
        ERR_put_error(20, 130, 163, (char const *)"s3_clnt.c", 1693);
        goto f_err;
      }
    }
  } else {
    _L___1:
    if (algs & 2L) { if ((i & 260) == 260) {
        goto _L___0;
      } else { ERR_put_error(20, 130, 164, (char const *)"s3_clnt.c", 1698);
        goto f_err;
      }
    } else {
      _L___0:
      if (algs & 4L) { if (! ((i & 516) == 516)) {
          ERR_put_error(20, 130, 162, (char const *)"s3_clnt.c", 1704);
          goto f_err;
        }
      }
    }
  }
  if (((s->s3)->tmp.new_cipher)->algo_strength & 2UL) { if (! ((i & 4096) == 4096)) {
      if (algs & 1L) {
        if ((unsigned long )rsa == (unsigned long )((void *)0)) {
          ERR_put_error(20, 130, 167, (char const *)"s3_clnt.c", 1718);
          goto f_err;
        } else {
          tmp = RSA_size(rsa); if (((s->s3)->tmp.new_cipher)->algo_strength & 4UL) { tmp___0 = 512;
          } else {
            tmp___0 = 1024;
          }
          if (tmp > tmp___0) {
            ERR_put_error(20, 130, 167, (char const *)"s3_clnt.c", 1718);
            goto f_err;
          }
        }
      } else { if (algs & 22L) {
          if ((unsigned long )dh == (unsigned long )((void *)0)) {
            ERR_put_error(20, 130, 166, (char const *)"s3_clnt.c", 1730);
            goto f_err;
          } else {
            tmp___1 = DH_size(dh); if (((s->s3)->tmp.new_cipher)->algo_strength & 4UL) { tmp___2 = 512;
            } else {
              tmp___2 = 1024;
            }
            if (tmp___1 > tmp___2) {
              ERR_put_error(20, 130, 166, (char const *)"s3_clnt.c", 1730);
              goto f_err;
            }
          }
        } else {
          ERR_put_error(20, 130, 250, (char const *)"s3_clnt.c", 1737);
          goto f_err;
        }
      }
    }
  }
  return (1);
  f_err:
  ssl3_send_alert(s, 2, 40);
  err:
  return (0);
}
}
