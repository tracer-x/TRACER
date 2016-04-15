typedef int size_t;
struct __anonstruct_spinlock_t_1 {
unsigned int lock ;
};
typedef struct __anonstruct_spinlock_t_1 spinlock_t;
struct __anonstruct_atomic_t_2 {
int counter ;
};
typedef struct __anonstruct_atomic_t_2 atomic_t;
typedef unsigned short umode_t;
typedef char __s8;
typedef unsigned char __u8;
typedef short __s16;
typedef unsigned short __u16;
typedef int __s32;
typedef unsigned int __u32;
typedef long long __s64;
typedef unsigned long long __u64;
typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;
typedef long long s64;
typedef unsigned long long u64;
typedef u32 dma_addr_t;
typedef unsigned char u_char;
typedef unsigned short u_short;
typedef unsigned int u_int;
typedef unsigned long u_long;
typedef unsigned char unchar;
typedef unsigned short ushort;
typedef unsigned int uint;
typedef unsigned long ulong;
typedef __u8 u_int8_t;
typedef __s8 int8_t;
typedef __u16 u_int16_t;
typedef __s16 int16_t;
typedef __u32 u_int32_t;
typedef __s32 int32_t;
typedef __u8 uint8_t;
typedef __u16 uint16_t;
typedef __u32 uint32_t;
typedef __u64 uint64_t;
typedef __u64 u_int64_t;
typedef __s64 int64_t;
struct tlan_adapter_entry {
u16 vendorId ;
u16 deviceId ;
char *deviceLabel ;
u32 flags ;
u16 addrOfs ;
};
typedef struct tlan_adapter_entry TLanAdapterEntry;
struct tlan_buffer_ref_tag {
u32 count ;
u32 address ;
};
typedef struct tlan_buffer_ref_tag TLanBufferRef;
struct tlan_list_tag {
u32 forward ;
u16 cStat ;
u16 frameSize ;
TLanBufferRef buffer[10] ;
};
typedef struct tlan_list_tag TLanList;
struct list_head {
struct list_head *next ;
struct list_head *prev ;
};
struct timer_list {
struct list_head list ;
unsigned long expires ;
unsigned long data ;
void (*function)(unsigned long  ) ;
};
typedef long time_t;
typedef long suseconds_t;
struct timeval {
time_t tv_sec ;
suseconds_t tv_usec ;
};
struct sk_buff_head {
struct sk_buff *next ;
struct sk_buff *prev ;
__u32 qlen ;
spinlock_t lock ;
};
union __anonunion_h_3 {
struct tcphdr *th ;
struct udphdr *uh ;
struct icmphdr *icmph ;
struct igmphdr *igmph ;
struct iphdr *ipiph ;
struct spxhdr *spxh ;
unsigned char *raw ;
};
union __anonunion_nh_4 {
struct iphdr *iph ;
struct ipv6hdr *ipv6h ;
struct arphdr *arph ;
struct ipxhdr *ipxh ;
unsigned char *raw ;
};
union __anonunion_mac_5 {
struct ethhdr *ethernet ;
unsigned char *raw ;
};
struct sk_buff {
struct sk_buff *next ;
struct sk_buff *prev ;
struct sk_buff_head *list ;
struct sock *sk ;
struct timeval stamp ;
struct net_device *dev ;
union __anonunion_h_3 h ;
union __anonunion_nh_4 nh ;
union __anonunion_mac_5 mac ;
struct dst_entry *dst ;
char cb[48] ;
unsigned int len ;
unsigned int data_len ;
unsigned int csum ;
unsigned char __unused ;
unsigned char cloned ;
unsigned char pkt_type ;
unsigned char ip_summed ;
__u32 priority ;
atomic_t users ;
unsigned short protocol ;
unsigned short security ;
unsigned int truesize ;
unsigned char *head ;
unsigned char *data ;
unsigned char *tail ;
unsigned char *end ;
void (*destructor)(struct sk_buff * ) ;
};
struct net_device_stats {
unsigned long rx_packets ;
unsigned long tx_packets ;
unsigned long rx_bytes ;
unsigned long tx_bytes ;
unsigned long rx_errors ;
unsigned long tx_errors ;
unsigned long rx_dropped ;
unsigned long tx_dropped ;
unsigned long multicast ;
unsigned long collisions ;
unsigned long rx_length_errors ;
unsigned long rx_over_errors ;
unsigned long rx_crc_errors ;
unsigned long rx_frame_errors ;
unsigned long rx_fifo_errors ;
unsigned long rx_missed_errors ;
unsigned long tx_aborted_errors ;
unsigned long tx_carrier_errors ;
unsigned long tx_fifo_errors ;
unsigned long tx_heartbeat_errors ;
unsigned long tx_window_errors ;
unsigned long rx_compressed ;
unsigned long tx_compressed ;
};
struct board {
char *deviceLabel ;
u32 flags ;
u16 addrOfs ;
};
typedef u8 TLanBuffer[1600];
struct tq_struct {
struct list_head list ;
unsigned long sync ;
void (*routine)(void * ) ;
void *data ;
};
struct dev_mc_list {
struct dev_mc_list *next ;
__u8 dmi_addr[8] ;
unsigned char dmi_addrlen ;
int dmi_users ;
int dmi_gusers ;
};
struct net_device {
char name[16] ;
unsigned long rmem_end ;
unsigned long rmem_start ;
unsigned long mem_end ;
unsigned long mem_start ;
unsigned long base_addr ;
unsigned int irq ;
unsigned char if_port ;
unsigned char dma ;
unsigned long state ;
struct net_device *next ;
struct net_device *next_sched ;
int ifindex ;
int iflink ;
unsigned long trans_start ;
unsigned long last_rx ;
unsigned short flags ;
unsigned short gflags ;
unsigned int mtu ;
unsigned short type ;
unsigned short hard_header_len ;
void *priv ;
struct net_device *master ;
unsigned char broadcast[8] ;
unsigned char dev_addr[8] ;
unsigned char addr_len ;
struct dev_mc_list *mc_list ;
int mc_count ;
int promiscuity ;
int allmulti ;
int watchdog_timeo ;
struct timer_list watchdog_timer ;
void *atalk_ptr ;
void *ip_ptr ;
void *dn_ptr ;
void *ip6_ptr ;
void *ec_ptr ;
struct Qdisc *qdisc ;
struct Qdisc *qdisc_sleeping ;
struct Qdisc *qdisc_list ;
struct Qdisc *qdisc_ingress ;
unsigned long tx_queue_len ;
spinlock_t xmit_lock ;
int xmit_lock_owner ;
spinlock_t queue_lock ;
atomic_t refcnt ;
int deadbeaf ;
int features ;
struct module *owner ;
struct net_bridge_port *br_port ;
};
typedef unsigned short sa_family_t;
struct sockaddr {
sa_family_t sa_family ;
char sa_data[14] ;
};
struct pt_regs {
long ebx ;
long ecx ;
long edx ;
long esi ;
long edi ;
long ebp ;
long eax ;
int xds ;
int xes ;
long orig_eax ;
long eip ;
int xcs ;
long eflags ;
long esp ;
int xss ;
};
struct ifmap {
unsigned long mem_start ;
unsigned long mem_end ;
unsigned short base_addr ;
unsigned char irq ;
unsigned char dma ;
unsigned char port ;
};
union __anonunion_ifr_ifrn_6 {
char ifrn_name[16] ;
};
union __anonunion_ifr_ifru_7 {
struct sockaddr ifru_addr ;
struct sockaddr ifru_dstaddr ;
struct sockaddr ifru_broadaddr ;
struct sockaddr ifru_netmask ;
struct sockaddr ifru_hwaddr ;
short ifru_flags ;
int ifru_ivalue ;
int ifru_mtu ;
struct ifmap ifru_map ;
char ifru_slave[16] ;
char ifru_newname[16] ;
char *ifru_data ;
};
struct ifreq {
union __anonunion_ifr_ifrn_6 ifr_ifrn ;
union __anonunion_ifr_ifru_7 ifr_ifru ;
};
typedef struct list_head task_queue;
struct tlan_private_tag {
struct net_device *nextDevice ;
void *dmaStorage ;
u8 *padBuffer ;
TLanList *rxList ;
u8 *rxBuffer ;
u32 rxHead ;
u32 rxTail ;
u32 rxEocCount ;
TLanList *txList ;
u8 *txBuffer ;
u32 txHead ;
u32 txInProgress ;
u32 txTail ;
u32 txBusyCount ;
u32 phyOnline ;
u32 timerSetAt ;
u32 timerType ;
struct timer_list timer ;
struct net_device_stats stats ;
struct board *adapter ;
u32 adapterRev ;
u32 aui ;
u32 debug ;
u32 duplex ;
u32 phy[2] ;
u32 phyNum ;
u32 speed ;
u8 tlanRev ;
u8 tlanFullDuplex ;
char devName[8] ;
spinlock_t lock ;
u8 link ;
u8 is_eisa ;
struct tq_struct tlan_tqueue ;
u8 neg_be_verbose ;
};
typedef struct tlan_private_tag TLanPrivateInfo;
typedef int (*__init_module_func_t)(void);
typedef void (*__cleanup_module_func_t)(void);
struct resource {
char *name ;
unsigned long start ;
unsigned long end ;
unsigned long flags ;
struct resource *parent ;
struct resource *sibling ;
struct resource *child ;
};
struct resource_list {
struct resource_list *next ;
struct resource *res ;
struct pci_dev *dev ;
};
struct pci_dev {
struct list_head global_list ;
struct list_head bus_list ;
struct pci_bus *bus ;
struct pci_bus *subordinate ;
void *sysdata ;
struct proc_dir_entry *procent ;
unsigned int devfn ;
unsigned short vendor ;
unsigned short device ;
unsigned short subsystem_vendor ;
unsigned short subsystem_device ;
unsigned int class ;
u8 hdr_type ;
u8 rom_base_reg ;
struct pci_driver *driver ;
void *driver_data ;
dma_addr_t dma_mask ;
u32 current_state ;
unsigned short vendor_compatible[4] ;
unsigned short device_compatible[4] ;
unsigned int irq ;
struct resource resource[12] ;
struct resource dma_resource[2] ;
struct resource irq_resource[2] ;
char name[80] ;
char slot_name[8] ;
int active ;
int ro ;
unsigned short regs ;
};
struct pci_bus {
struct list_head node ;
struct pci_bus *parent ;
struct list_head children ;
struct list_head devices ;
struct pci_dev *self ;
struct resource *resource[4] ;
struct pci_ops *ops ;
void *sysdata ;
struct proc_dir_entry *procdir ;
unsigned char number ;
unsigned char primary ;
unsigned char secondary ;
unsigned char subordinate ;
char name[48] ;
unsigned short vendor ;
unsigned short device ;
unsigned int serial ;
unsigned char pnpver ;
unsigned char productver ;
unsigned char checksum ;
unsigned char pad1 ;
};
struct pci_ops {
int read_byte ;
int read_word ;
int read_dword ;
int write_byte ;
int write_word ;
int write_dword ;
};
struct pbus_set_ranges_data {
int found_vga ;
unsigned long io_start ;
unsigned long io_end ;
unsigned long mem_start ;
unsigned long mem_end ;
};
struct pci_device_id {
unsigned int vendor ;
unsigned int device ;
unsigned int subvendor ;
unsigned int subdevice ;
unsigned int class ;
unsigned int class_mask ;
unsigned long driver_data ;
};
struct pci_driver {
struct list_head node ;
char *name ;
struct pci_device_id *id_table ;
};
struct scatterlist {
char *address ;
char *alt_address ;
unsigned int length ;
};
struct mii_ioctl_data {
u16 phy_id ;
u16 reg_num ;
u16 val_in ;
u16 val_out ;
};
typedef u32 TLanIntVectorFunc(struct net_device * , u16  );
extern unsigned char inb(unsigned short port ) ;
extern unsigned char inb_p(unsigned short port ) ;
extern unsigned short inw(unsigned short port ) ;
extern unsigned short inw_p(unsigned short port ) ;
extern unsigned int inl(unsigned short port ) ;
extern unsigned int inl_p(unsigned short port ) ;
extern void *memcpy(void *to , void const   *from , size_t n ) ;
extern void outb(unsigned char value , unsigned short port ) ;
extern void outb_p(unsigned char value , unsigned short port ) ;
extern void outw(unsigned short value , unsigned short port ) ;
extern void outw_p(unsigned short value , unsigned short port ) ;
extern void outl(unsigned int value , unsigned short port ) ;
extern void outl_p(unsigned int value , unsigned short port ) ;
extern void insb(unsigned short port , void *addr , unsigned long count ) ;
extern void insw(unsigned short port , void *addr , unsigned long count ) ;
extern void insl(unsigned short port , void *addr , unsigned long count ) ;
extern void outsb(unsigned short port , void *addr , unsigned long count ) ;
extern void outsw(unsigned short port , void *addr , unsigned long count ) ;
extern void outsl(unsigned short port , void *addr , unsigned long count ) ;
unsigned long jiffies_Rsmp_0da02d67  ;
struct board board_info[]  ;
task_queue tq_immediate_Rsmp_0da0dcd1  ;
struct resource ioport_resource_Rsmp_865ebccd  ;
struct resource iomem_resource_Rsmp_9efed5af  ;
struct list_head pci_root_buses_Rsmp_082c3213  ;
struct list_head pci_devices_Rsmp_7a84b102  ;
unsigned long pci_mem_start_Rsmp_3da171f9  ;
int pci_pci_problems_Rsmp_dc14eda7  ;
unsigned long loops_per_jiffy_Rsmp_ba497f13  ;
char tlan_banner[]  ;
int in_irq  ;
int BLAST_NONDET  ;
int lockStatus  ;
static struct net_device *TLan_Eisa_Devices  ;
static int TLanDevicesInstalled  ;
static int aui[8]  ;
static int duplex[8]  ;
static int speed[8]  ;
static int boards_found  ;
static int debug  ;
static int bbuf  ;
static u8 *TLanPadBuffer  ;
char TLanSignature[]  ;
static int tlan_have_pci  ;
static int tlan_have_eisa  ;
char *media[]  ;
int media_map[]  ;
static struct pci_device_id tlan_pci_tbl[]  ;
static int TLan_Init(struct net_device *dev ) ;
static int TLan_Open(struct net_device *dev ) ;
static void TLan_EisaProbe(void) ;
static void TLan_Eisa_Cleanup(void) ;
static int TLan_StartTx(struct sk_buff *skb , struct net_device *dev ) ;
static int TLan_ioctl(struct net_device *dev , struct ifreq *rq , int cmd ) ;
static struct net_device_stats *TLan_GetStats(struct net_device *dev ) ;
static int TLan_Close(struct net_device *dev ) ;
static void TLan_HandleInterrupt(int irq , void *dev_id , struct pt_regs *regs ) ;
static int TLan_probe1(struct pci_dev *pdev , long ioaddr , int irq , int rev , struct pci_device_id *ent ) ;
static void TLan_tx_timeout(struct net_device *dev ) ;
static int tlan_init_one(struct pci_dev *pdev , struct pci_device_id *ent ) ;
static void TLan_ResetLists(struct net_device *dev ) ;
static void TLan_ResetAdapter(struct net_device *dev ) ;
static void TLan_ReadAndClearStats(struct net_device *dev , int record ) ;
static int TLan_MiiReadReg(struct net_device *dev , u16 phy , u16 reg , u16 *val ) ;
static void TLan_MiiWriteReg(struct net_device *dev , u16 phy , u16 reg , u16 val ) ;
static void TLan_FreeLists(struct net_device *dev ) ;
static void TLan_PrintList(TLanList *list , char *type , int num ) ;
static void TLan_PrintDio(u16 io_base ) ;
static void TLan_PhyPrint(struct net_device *dev ) ;
static void TLan_SetMulticastList(struct net_device *dev ) ;
static u32 TLan_HandleInvalid(struct net_device *dev , u16 host_int ) ;
static u32 TLan_HandleTxEOF(struct net_device *dev , u16 host_int ) ;
static u32 TLan_HandleStatOverflow(struct net_device *dev , u16 host_int ) ;
static u32 TLan_HandleRxEOF(struct net_device *dev , u16 host_int ) ;
static u32 TLan_HandleDummy(struct net_device *dev , u16 host_int ) ;
static u32 TLan_HandleTxEOC(struct net_device *dev , u16 host_int ) ;
static u32 TLan_HandleStatusCheck(struct net_device *dev , u16 host_int ) ;
static u32 TLan_HandleRxEOC(struct net_device *dev , u16 host_int ) ;
static void TLan_Timer(unsigned long data ) ;
static void TLan_FinishReset(struct net_device *dev ) ;
static void TLan_SetMac(struct net_device *dev , int areg , char *mac ) ;
static void TLan_PhyDetect(struct net_device *dev ) ;
static void TLan_PhyPowerDown(struct net_device *dev ) ;
static void TLan_PhyPowerUp(struct net_device *dev ) ;
static void TLan_PhyReset(struct net_device *dev ) ;
static void TLan_PhyStartLink(struct net_device *dev ) ;
static void TLan_PhyFinishAutoNeg(struct net_device *dev ) ;
static void TLan_MiiSendData(u16 base_port , u32 data , unsigned int num_bits ) ;
static void TLan_MiiSync(u16 base_port ) ;
static void TLan_EeSendStart(u16 io_base ) ;
static int TLan_EeSendByte(u16 io_base , u8 data , int stop ) ;
static void TLan_EeReceiveByte(u16 io_base , u8 *data , int stop ) ;
static int TLan_EeReadByte(struct net_device *dev , u8 ee_addr , u8 *data ) ;
static TLanIntVectorFunc *TLanIntVector[8]  ;
static struct pci_driver tlan_driver  ;
extern int init_module(void) ;
extern void cleanup_module(void) ;
void netif_start_queue(struct net_device *dev )
{
	/* END OF PATH at func_netif_start_queue@p1#1 */
}

int netif_rx_Rsmp_4eecbd7e(struct sk_buff *skb )
{ int x ;
	return (x);
	/* END OF PATH at func_netif_rx_Rsmp_4eecbd7e@p2#1 */
}

void netif_stop_queue(struct net_device *dev )
{
	/* END OF PATH at func_netif_stop_queue@p1#1 */
}

void netif_wake_queue(struct net_device *dev )
{
	/* END OF PATH at func_netif_wake_queue@p1#1 */
}

int netif_queue_stopped(struct net_device *dev )
{ int res_ ;
	return (res_);
	/* END OF PATH at func_netif_queue_stopped@p2#1 */
}

unsigned long virt_to_phys(void *address )
{
	return ((unsigned long )address - 3221225472UL);
	/* END OF PATH at func_virt_to_phys@p1#1 */
}

int queue_task(struct tq_struct *bh_pointer , task_queue *bh_list )
{ int x ;
	return (x);
	/* END OF PATH at func_queue_task@p2#1 */
}

void mark_bh(int nr )
{
	/* END OF PATH at func_mark_bh@p1#1 */
}

u8 TLan_DioRead8(u16 base_addr , u16 internal_addr )
{ u16 temp_1 ;
u16 temp_2 ;
unsigned char temp_3 ;
	temp_1 = (unsigned short )((int )base_addr + 8);
	outw(internal_addr, temp_1);
	temp_2 = (unsigned short )(((int )base_addr + 12) + ((int )internal_addr & 3));
	temp_3 = inb(temp_2);
	return (temp_3);
	/* END OF PATH at func_TLan_DioRead8@p8#1 */
}

u16 TLan_DioRead16(u16 base_addr , u16 internal_addr )
{ u16 temp_1 ;
u16 temp_2 ;
unsigned short temp_3 ;
	temp_1 = (unsigned short )((int )base_addr + 8);
	outw(internal_addr, temp_1);
	temp_2 = (unsigned short )(((int )base_addr + 12) + ((int )internal_addr & 2));
	temp_3 = inw(temp_2);
	return (temp_3);
	/* END OF PATH at func_TLan_DioRead16@p8#1 */
}

u32 TLan_DioRead32(u16 base_addr , u16 internal_addr )
{ u16 temp_1 ;
u16 temp_2 ;
unsigned int temp_3 ;
	temp_1 = (unsigned short )((int )base_addr + 8);
	outw(internal_addr, temp_1);
	temp_2 = (unsigned short )((int )base_addr + 12);
	temp_3 = inl(temp_2);
	return (temp_3);
	/* END OF PATH at func_TLan_DioRead32@p8#1 */
}

void TLan_DioWrite8(u16 base_addr , u16 internal_addr , u8 data )
{ u16 temp_1 ;
u16 temp_2 ;
	temp_1 = (unsigned short )((int )base_addr + 8);
	outw(internal_addr, temp_1);
	temp_2 = (unsigned short )(((int )base_addr + 12) + ((int )internal_addr & 3));
	/* END OF PATH at func_TLan_DioWrite8@p6#1 */
}

void TLan_DioWrite16(u16 base_addr , u16 internal_addr , u16 data )
{ u16 temp_1 ;
u16 temp_2 ;
	temp_1 = (unsigned short )((int )base_addr + 8);
	outw(internal_addr, temp_1);
	temp_2 = (unsigned short )(((int )base_addr + 12) + ((int )internal_addr & 2));
	outw(data, temp_2);
	/* END OF PATH at func_TLan_DioWrite16@p7#1 */
}

void TLan_DioWrite32(u16 base_addr , u16 internal_addr , u32 data )
{ u16 temp_1 ;
u16 temp_2 ;
	temp_1 = (unsigned short )((int )base_addr + 8);
	outw(internal_addr, temp_1);
	temp_2 = (unsigned short )(((int )base_addr + 12) + ((int )internal_addr & 2));
	/* END OF PATH at func_TLan_DioWrite32@p6#1 */
}

int capable(int cap )
{ int NONDET ;
int res_ ;
	if(NONDET == 0) {
		res_ = 0;
L1:;
		return (res_);
		/* END OF PATH at func_capable@p12#1 */
	}
	else if(NONDET < 0) {
L2:;
		res_ = 1;
		goto L1;
	}
	else {
		goto L2;
	}
}

u32 xor(u32 a , u32 b )
{ int tmp ;
	if(a > 0) {
		if(b == 0) {
L1:;
			tmp = 1;
L2:;
			return ((unsigned int )tmp);
			/* END OF PATH at func_xor@p16#1 */
		}
		else if(b > 0) {
L3:;
			if(a > 0) {
L4:;
				tmp = 0;
				goto L2;
			}
			else if(a == 0) {
				/* FALSE PATH */ 
			}
			else {
				/* FALSE PATH */ 
			}
		}
		else {
			goto L3;
		}
	}
	else if(a < 0) {
		if(b == 0) {
			goto L1;
		}
		else if(b > 0) {
L5:;
			if(a < 0) {
				goto L4;
			}
			else if(a == 0) {
				/* FALSE PATH */ 
			}
			else {
				/* FALSE PATH */ 
			}
		}
		else {
			goto L5;
		}
	}
	else {
		if(a == 0) {
			if(b > 0) {
L6:;
				tmp = 1;
L7:;
				goto L2;
			}
			else if(b < 0) {
				goto L6;
			}
			else {
				tmp = 0;
				goto L7;
			}
		}
		else if(a > 0) {
			/* FALSE PATH */ 
		}
		else {
			/* FALSE PATH */ 
		}
	}
}

u32 TLan_HashFunc(u8 *a )
{ u32 hash ;
	return (hash);
	/* END OF PATH at func_TLan_HashFunc@p2#1 */
}

struct resource *__request_region_Rsmp_1a1a4f09(struct resource *reso , unsigned long start , unsigned long n , char *name )
{ struct resource *res ;
	return (res);
	/* END OF PATH at func___request_region_Rsmp_1a1a4f09@p2#1 */
}

void __release_region_Rsmp_d49501d4(struct resource *reso , unsigned long p1 , unsigned long p2 )
{
	/* END OF PATH at func___release_region_Rsmp_d49501d4@p1#1 */
}

int pci_read_config_byte_Rsmp_e426c0e8(struct pci_dev *dev , int where , u8 *val )
{ int res__ ;
	return (res__);
	/* END OF PATH at func_pci_read_config_byte_Rsmp_e426c0e8@p2#1 */
}

int pci_enable_device_Rsmp_d04fea08(struct pci_dev *dev )
{ int res__ ;
	return (res__);
	/* END OF PATH at func_pci_enable_device_Rsmp_d04fea08@p2#1 */
}

void pci_set_master_Rsmp_2d0760ae(struct pci_dev *dev )
{
	/* END OF PATH at func_pci_set_master_Rsmp_2d0760ae@p1#1 */
}

int pci_register_driver_Rsmp_de7b2751(struct pci_driver *dev )
{ int res__ ;
	return (res__);
	/* END OF PATH at func_pci_register_driver_Rsmp_de7b2751@p2#1 */
}

void pci_unregister_driver_Rsmp_836ea211(struct pci_driver *dev )
{
	/* END OF PATH at func_pci_unregister_driver_Rsmp_836ea211@p1#1 */
}

static int pci_module_init(struct pci_driver *drv )
{ int rc ;
	rc = pci_register_driver_Rsmp_de7b2751(drv);
	if(rc > 0) {
		return (0);
		/* END OF PATH at func_pci_module_init@p4#1 */
	}
	else {
		if(rc == 0) {
			rc = -19;
L1:;
			pci_unregister_driver_Rsmp_836ea211(drv);
			return (rc);
			/* END OF PATH at func_pci_module_init@p9#1 */
		}
		else if(rc < 0) {
			goto L1;
		}
		else {
			/* FALSE PATH */ 
		}
	}
}

static void *pci_get_drvdata(struct pci_dev *pdev )
{
	return (pdev->driver_data);
	/* END OF PATH at func_pci_get_drvdata@p1#1 */
}

static void pci_set_drvdata(struct pci_dev *pdev , void *data )
{
	pdev->driver_data = data;
	/* END OF PATH at func_pci_set_drvdata@p2#1 */
}

unsigned short eth_type_trans_Rsmp_ef9f8c35(struct sk_buff *skb , struct net_device *dev )
{ unsigned short res__ ;
	return (res__);
	/* END OF PATH at func_eth_type_trans_Rsmp_ef9f8c35@p2#1 */
}

int printk_Rsmp_1b7d4074(char const   *fmt  , ...)
{ int res__ ;
	return (res__);
	/* END OF PATH at func_printk_Rsmp_1b7d4074@p2#1 */
}

struct net_device *init_etherdev_Rsmp_5ef105a6(struct net_device *dev , int sizeof_priv )
{ struct net_device *res__ ;
	return (res__);
	/* END OF PATH at func_init_etherdev_Rsmp_5ef105a6@p2#1 */
}

int mod_timer_Rsmp_1f13d309(struct timer_list *timer , unsigned long expires )
{ int res__ ;
	return (res__);
	/* END OF PATH at func_mod_timer_Rsmp_1f13d309@p2#1 */
}

void udelay(unsigned long usecs )
{
	/* END OF PATH at func_udelay@p1#1 */
}

void add_timer_Rsmp_a19eacf8(struct timer_list *timer )
{
	/* END OF PATH at func_add_timer_Rsmp_a19eacf8@p1#1 */
}

int del_timer_sync_Rsmp_daff266a(struct timer_list *timer )
{ int x ;
	return (x);
	/* END OF PATH at func_del_timer_sync_Rsmp_daff266a@p2#1 */
}

void unregister_netdev_Rsmp_99639e9a(struct net_device *dev )
{
	/* END OF PATH at func_unregister_netdev_Rsmp_99639e9a@p1#1 */
}

void kfree_Rsmp_037a0cba(void const   *p )
{
	/* END OF PATH at func_kfree_Rsmp_037a0cba@p1#1 */
}

void dev_kfree_skb_irq(struct sk_buff *skb )
{
	/* END OF PATH at func_dev_kfree_skb_irq@p1#1 */
}

void dev_kfree_skb_any(struct sk_buff *skb )
{
	/* END OF PATH at func_dev_kfree_skb_any@p1#1 */
}

void *kmalloc_Rsmp_93d4cfe6(size_t ss , int pp )
{ int x ;
	return ((void *)x);
	/* END OF PATH at func_kmalloc_Rsmp_93d4cfe6@p2#1 */
}

int request_irq_Rsmp_0c60f2e0(unsigned int aa , void (*handler)(int  , void * , struct pt_regs * ) , unsigned long cc , char const   *dd , void *ee )
{ int res_ ;
	return (res_);
	/* END OF PATH at func_request_irq_Rsmp_0c60f2e0@p2#1 */
}

void free_irq_Rsmp_f20dabd8(unsigned int aa , void *bb )
{
	/* END OF PATH at func_free_irq_Rsmp_f20dabd8@p1#1 */
}

void spin_lock(spinlock_t *lock )
{
	/* END OF PATH at func_spin_lock@p1#1 */
}

void spin_unlock(spinlock_t *lock )
{
	/* END OF PATH at func_spin_unlock@p1#1 */
}

struct sk_buff *dev_alloc_skb(unsigned int length )
{ struct sk_buff *res__ ;
	return (res__);
	/* END OF PATH at func_dev_alloc_skb@p2#1 */
}

void skb_reserve(struct sk_buff *skb , unsigned int len )
{
	skb->data = skb->data + len;
	skb->tail = skb->tail + len;
	/* END OF PATH at func_skb_reserve@p3#1 */
}

unsigned char *skb_put(struct sk_buff *skb , unsigned int len )
{ unsigned char *res__ ;
	return (res__);
	/* END OF PATH at func_skb_put@p2#1 */
}

void skb_trim(struct sk_buff *skb , unsigned int len )
{
	/* END OF PATH at func_skb_trim@p1#1 */
}

void _BLAST_init(void)
{
	lockStatus = 0;
	if(BLAST_NONDET > 0) {
L1:;
		in_irq = 1;
L2:;
		/* END OF PATH at func__BLAST_init@p6#1 */
	}
	else if(BLAST_NONDET < 0) {
		goto L1;
	}
	else {
		in_irq = 0;
		goto L2;
	}
}

void spin_lock_irqsave(void *a , void *b )
{
	lockStatus = 1;
	/* END OF PATH at func_spin_lock_irqsave@p2#1 */
}

void spin_unlock_irqrestore(void *a , void *b )
{
	lockStatus = 0;
	/* END OF PATH at func_spin_unlock_irqrestore@p2#1 */
}

static int TLan_Init(struct net_device *dev )
{ register int dma_size ;
register int err ;
register int i ;
register TLanPrivateInfo *priv ;
register int temp_1 ;
register int temp_2 ;
register int temp_3 ;
register struct resource *temp_4 ;
void *tmp ;
	priv = (TLanPrivateInfo *)dev->priv;
	if(priv->is_eisa == 0) {
		temp_4 = __request_region_Rsmp_1a1a4f09(& ioport_resource_Rsmp_865ebccd, dev->base_addr, 16UL, TLanSignature);
L1:;
		if(temp_4 == 0) {
			printk_Rsmp_1b7d4074("<3>TLAN: %s: IO port region 0x%lx size 0x%x in use.\n", dev->name, dev->base_addr, 16);
			return (-5);
			/* END OF PATH at func_TLan_Init@p15#1 */
		}
		else if(temp_4 > 0) {
L2:;
			if(bbuf > 0) {
				dma_size = (int )(96U * (sizeof(TLanList ) + 1600U));
				tmp = kmalloc_Rsmp_93d4cfe6(dma_size, 241);
				priv->dmaStorage = tmp;
				if(priv->dmaStorage == (0)) {
L3:;
					printk_Rsmp_1b7d4074("<3>TLAN:  Could not allocate lists and buffers for %s.\n", dev->name);
					__release_region_Rsmp_d49501d4(& ioport_resource_Rsmp_865ebccd, dev->base_addr, 16UL);
					return (-12);
					/* END OF PATH at func_TLan_Init@p26#1 */
				}
				else if(priv->dmaStorage < (0)) {
L4:;
					temp_1 = 1;
					if(temp_1 > 0) {
						temp_2 = 0;
						if(temp_2 == 0) {
							__constant_c_memset(priv->dmaStorage, 0UL, dma_size);
							priv->rxList = (TLanList *)(((unsigned int )priv->dmaStorage + 7U) & 4294967288U);
							priv->txList = priv->rxList + 32;
							if(bbuf > 0) {
L5:;
								priv->rxBuffer = (u8 *)(priv->txList + 64);
								priv->txBuffer = priv->rxBuffer + 51200;
L6:;
								err = 0;
								if(err == 0) {
									dev->addr_len = (unsigned char)6;
									dev->watchdog_timeo = 1000;
									return (0);
									/* END OF PATH at func_TLan_Init@p51#1 */
								}
								else if(err > 0) {
									/* FALSE PATH */ 
								}
								else {
									/* FALSE PATH */ 
								}
							}
							else if(bbuf < 0) {
								/* FALSE PATH */ 
							}
							else {
								/* FALSE PATH */ 
							}
						}
						else if(temp_2 > 0) {
							/* FALSE PATH */ 
						}
						else {
							/* FALSE PATH */ 
						}
					}
					else if(temp_1 < 0) {
						/* FALSE PATH */ 
					}
					else {
						/* FALSE PATH */ 
					}
				}
				else {
					goto L4;
				}
			}
			else if(bbuf < 0) {
				dma_size = (int )(96U * (sizeof(TLanList ) + 1600U));
				tmp = kmalloc_Rsmp_93d4cfe6(dma_size, 241);
				priv->dmaStorage = tmp;
				if(priv->dmaStorage == (0)) {
					goto L3;
				}
				else if(priv->dmaStorage < (0)) {
L7:;
					temp_1 = 1;
					if(temp_1 > 0) {
						temp_2 = 0;
						if(temp_2 == 0) {
							__constant_c_memset(priv->dmaStorage, 0UL, dma_size);
							priv->rxList = (TLanList *)(((unsigned int )priv->dmaStorage + 7U) & 4294967288U);
							priv->txList = priv->rxList + 32;
							if(bbuf < 0) {
								goto L5;
							}
							else if(bbuf > 0) {
								/* FALSE PATH */ 
							}
							else {
								/* FALSE PATH */ 
							}
						}
						else if(temp_2 > 0) {
							/* FALSE PATH */ 
						}
						else {
							/* FALSE PATH */ 
						}
					}
					else if(temp_1 < 0) {
						/* FALSE PATH */ 
					}
					else {
						/* FALSE PATH */ 
					}
				}
				else {
					goto L7;
				}
			}
			else {
				dma_size = (int )(96U * sizeof(TLanList ));
				tmp = kmalloc_Rsmp_93d4cfe6(dma_size, 241);
				priv->dmaStorage = tmp;
				if(priv->dmaStorage == (0)) {
					goto L3;
				}
				else if(priv->dmaStorage < (0)) {
L8:;
					temp_1 = 1;
					if(temp_1 > 0) {
						temp_2 = 0;
						if(temp_2 == 0) {
							__constant_c_memset(priv->dmaStorage, 0UL, dma_size);
							priv->rxList = (TLanList *)(((unsigned int )priv->dmaStorage + 7U) & 4294967288U);
							priv->txList = priv->rxList + 32;
							if(bbuf == 0) {
								goto L6;
							}
							else if(bbuf > 0) {
								/* FALSE PATH */ 
							}
							else {
								/* FALSE PATH */ 
							}
						}
						else if(temp_2 > 0) {
							/* FALSE PATH */ 
						}
						else {
							/* FALSE PATH */ 
						}
					}
					else if(temp_1 < 0) {
						/* FALSE PATH */ 
					}
					else {
						/* FALSE PATH */ 
					}
				}
				else {
					goto L8;
				}
			}
		}
		else {
			goto L2;
		}
	}
	else if(priv->is_eisa > 0) {
		goto L1;
	}
	else {
		goto L1;
	}
}

static int TLan_Open(struct net_device *dev )
{ register TLanPrivateInfo *priv ;
register int err ;
	priv = (TLanPrivateInfo *)dev->priv;
	priv->tlanRev = TLan_DioRead8((unsigned short )dev->base_addr, (unsigned short)12);
	err = request_irq_Rsmp_0c60f2e0(dev->irq, & TLan_HandleInterrupt, 67108864UL, (char const   *)(TLanSignature), (void *)dev);
	if(err > 0) {
L1:;
		printk_Rsmp_1b7d4074("<3>TLAN:  Cannot open %s because IRQ %d is already in use.\n", dev->name, dev->irq);
		return (err);
		/* END OF PATH at func_TLan_Open@p8#1 */
	}
	else if(err < 0) {
		goto L1;
	}
	else {
		init_timer(& priv->timer);
		netif_start_queue(dev);
		TLan_ResetLists(dev);
		TLan_ReadAndClearStats(dev, 0);
		if(debug & 1 > 0) {
L2:;
			printk_Rsmp_1b7d4074("<7>TLAN: %s: Opened.  TLAN Chip Rev: %x\n", dev->name, priv->tlanRev);
L3:;
			return (0);
			/* END OF PATH at func_TLan_Open@p16#1 */
		}
		else if(debug & 1 < 0) {
			goto L2;
		}
		else {
			goto L3;
		}
	}
}

static void TLan_EisaProbe(void)
{ register long ioaddr ;
register int rc ;
register int irq ;
register u16 device_id ;
register struct resource *temp_1 ;
register unsigned char temp_2 ;
register unsigned char temp_3 ;
register unsigned char temp_4 ;
unsigned short tmp ;
unsigned short tmp___0 ;
unsigned short tmp___1 ;
	rc = -19;
	if(debug & 16 > 0) {
L1:;
		printk_Rsmp_1b7d4074("<7>TLAN: No EISA bus present\n");
L2:;
		/* END OF PATH at func_TLan_EisaProbe@p15#1 */
	}
	else if(debug & 16 < 0) {
		goto L1;
	}
	else {
		goto L2;
	}
}

static void TLan_Eisa_Cleanup(void)
{ register struct net_device *dev ;
register TLanPrivateInfo *priv ;
L1:;
L2:;
	if(tlan_have_eisa == 0) {
L3:;
		/* END OF PATH at func_TLan_Eisa_Cleanup@p15#1 */
	}
	else if(tlan_have_eisa > 0) {
L4:;
		dev = TLan_Eisa_Devices;
		priv = (TLanPrivateInfo *)dev->priv;
		if(priv->dmaStorage > 0) {
L5:;
			kfree_Rsmp_037a0cba((void const   *)priv->dmaStorage);
L6:;
			__release_region_Rsmp_d49501d4(& ioport_resource_Rsmp_865ebccd, dev->base_addr, 16UL);
			unregister_netdev_Rsmp_99639e9a(dev);
			TLan_Eisa_Devices = priv->nextDevice;
			kfree_Rsmp_037a0cba((void const   *)dev);
			tlan_have_eisa = tlan_have_eisa - 1;
			goto L2;
		}
		else if(priv->dmaStorage < 0) {
			goto L5;
		}
		else {
			goto L6;
		}
	}
	else {
		goto L4;
	}
}

static int TLan_StartTx(struct sk_buff *skb , struct net_device *dev )
{ register TLanPrivateInfo *priv ;
register TLanList *tail_list ;
register u8 *tail_buffer ;
register int pad ;
register unsigned long flags ;
unsigned long tmp ;
unsigned long tmp___0 ;
unsigned long tmp___1 ;
unsigned long tmp___2 ;
	priv = (TLanPrivateInfo *)dev->priv;
	if(priv->phyOnline == 0) {
		if(debug & 2 > 0) {
L1:;
			printk_Rsmp_1b7d4074("<7>TLAN: TRANSMIT:  %s PHY is not ready\n", dev->name);
L2:;
			dev_kfree_skb_any(skb);
			return (0);
			/* END OF PATH at func_TLan_StartTx@p15#1 */
		}
		else if(debug & 2 < 0) {
			goto L1;
		}
		else {
			goto L2;
		}
	}
	else if(priv->phyOnline > 0) {
L3:;
		tail_list = priv->txList + priv->txTail;
		if(tail_list->cStat < 32768) {
L4:;
			if(debug & 2 > 0) {
L5:;
				printk_Rsmp_1b7d4074("<7>TLAN: TRANSMIT:  %s is busy (Head=%d Tail=%d)\n", dev->name, priv->txHead, priv->txTail);
L6:;
				netif_stop_queue(dev);
				priv->txBusyCount = priv->txBusyCount + 1U;
				return (1);
				/* END OF PATH at func_TLan_StartTx@p23#1 */
			}
			else if(debug & 2 < 0) {
				goto L5;
			}
			else {
				goto L6;
			}
		}
		else if(tail_list->cStat > 32768) {
			goto L4;
		}
		else {
			tail_list->forward = 0U;
			if(bbuf > 0) {
				tail_buffer = priv->txBuffer + priv->txTail * 1600U;
				memcpy((void *)tail_buffer, (void const   *)skb->data, (int )skb->len);
				pad = (int )(64U - skb->len);
				if(pad > 0) {
					tail_list->frameSize = (unsigned short )((int )((unsigned short )skb->len) + pad);
					tail_list->buffer[0].count = skb->len;
					tail_list->buffer[1].count = 2147483648U | (unsigned int )pad;
					tmp___0 = virt_to_phys((void *)TLanPadBuffer);
					tail_list->buffer[1].address = (unsigned int )tmp___0;
					spin_lock_irqsave((void *)(& priv->lock), (void *)flags);
L7:;
					tail_list->cStat = (unsigned short)12288;
					if(priv->txInProgress == 0) {
						priv->txInProgress = 1U;
						if(debug & 2 > 0) {
L8:;
							printk_Rsmp_1b7d4074("<7>TLAN: TRANSMIT:  Starting TX on buffer %d\n", priv->txTail);
L9:;
							spin_unlock_irqrestore((void *)(& priv->lock), (void *)flags);
L10:;
							priv->txTail = priv->txTail + 1U;
							if(priv->txTail >= 64U) {
								priv->txTail = 0U;
L11:;
								if(bbuf > 0) {
L12:;
									dev_kfree_skb_any(skb);
L13:;
									dev->trans_start = jiffies_Rsmp_0da02d67;
									return (0);
									/* END OF PATH at func_TLan_StartTx@p67#1 */
								}
								else if(bbuf < 0) {
									/* FALSE PATH */ 
								}
								else {
									/* FALSE PATH */ 
								}
							}
							else {
								goto L11;
							}
						}
						else if(debug & 2 < 0) {
							goto L8;
						}
						else {
							goto L9;
						}
					}
					else if(priv->txInProgress > 0) {
L14:;
						if(debug & 2 > 0) {
L15:;
							printk_Rsmp_1b7d4074("<7>TLAN: TRANSMIT:  Adding buffer %d to TX channel\n", priv->txTail);
L16:;
							if(priv->txTail == 0U) {
								tmp___1 = virt_to_phys((void *)tail_list);
								(priv->txList + 63)->forward = (unsigned int )tmp___1;
								spin_unlock_irqrestore((void *)(& priv->lock), (void *)flags);
								goto L10;
							}
							else if(priv->txTail < 0U) {
L17:;
								tmp___2 = virt_to_phys((void *)tail_list);
								(priv->txList + (priv->txTail - 1U))->forward = (unsigned int )tmp___2;
								spin_unlock_irqrestore((void *)(& priv->lock), (void *)flags);
								goto L10;
							}
							else {
								goto L17;
							}
						}
						else if(debug & 2 < 0) {
							goto L15;
						}
						else {
							goto L16;
						}
					}
					else {
						goto L14;
					}
				}
				else {
					tail_list->frameSize = (unsigned short )skb->len;
					tail_list->buffer[0].count = 2147483648U | skb->len;
					tail_list->buffer[1].count = 0U;
					tail_list->buffer[1].address = 0U;
					spin_lock_irqsave((void *)(& priv->lock), (void *)flags);
					goto L7;
				}
			}
			else if(bbuf < 0) {
				tail_buffer = priv->txBuffer + priv->txTail * 1600U;
				memcpy((void *)tail_buffer, (void const   *)skb->data, (int )skb->len);
				pad = (int )(64U - skb->len);
				if(pad > 0) {
					tail_list->frameSize = (unsigned short )((int )((unsigned short )skb->len) + pad);
					tail_list->buffer[0].count = skb->len;
					tail_list->buffer[1].count = 2147483648U | (unsigned int )pad;
					tmp___0 = virt_to_phys((void *)TLanPadBuffer);
					tail_list->buffer[1].address = (unsigned int )tmp___0;
					spin_lock_irqsave((void *)(& priv->lock), (void *)flags);
L18:;
					tail_list->cStat = (unsigned short)12288;
					if(priv->txInProgress == 0) {
						priv->txInProgress = 1U;
						if(debug & 2 > 0) {
L19:;
							printk_Rsmp_1b7d4074("<7>TLAN: TRANSMIT:  Starting TX on buffer %d\n", priv->txTail);
L20:;
							spin_unlock_irqrestore((void *)(& priv->lock), (void *)flags);
L21:;
							priv->txTail = priv->txTail + 1U;
							if(priv->txTail >= 64U) {
								priv->txTail = 0U;
L22:;
								if(bbuf < 0) {
									goto L12;
								}
								else if(bbuf > 0) {
									/* FALSE PATH */ 
								}
								else {
									/* FALSE PATH */ 
								}
							}
							else {
								goto L22;
							}
						}
						else if(debug & 2 < 0) {
							goto L19;
						}
						else {
							goto L20;
						}
					}
					else if(priv->txInProgress > 0) {
L23:;
						if(debug & 2 > 0) {
L24:;
							printk_Rsmp_1b7d4074("<7>TLAN: TRANSMIT:  Adding buffer %d to TX channel\n", priv->txTail);
L25:;
							if(priv->txTail == 0U) {
								tmp___1 = virt_to_phys((void *)tail_list);
								(priv->txList + 63)->forward = (unsigned int )tmp___1;
								spin_unlock_irqrestore((void *)(& priv->lock), (void *)flags);
								goto L21;
							}
							else if(priv->txTail < 0U) {
L26:;
								tmp___2 = virt_to_phys((void *)tail_list);
								(priv->txList + (priv->txTail - 1U))->forward = (unsigned int )tmp___2;
								spin_unlock_irqrestore((void *)(& priv->lock), (void *)flags);
								goto L21;
							}
							else {
								goto L26;
							}
						}
						else if(debug & 2 < 0) {
							goto L24;
						}
						else {
							goto L25;
						}
					}
					else {
						goto L23;
					}
				}
				else {
					tail_list->frameSize = (unsigned short )skb->len;
					tail_list->buffer[0].count = 2147483648U | skb->len;
					tail_list->buffer[1].count = 0U;
					tail_list->buffer[1].address = 0U;
					spin_lock_irqsave((void *)(& priv->lock), (void *)flags);
					goto L18;
				}
			}
			else {
				tmp = virt_to_phys((void *)skb->data);
				tail_list->buffer[0].address = (unsigned int )tmp;
				tail_list->buffer[9].address = (unsigned int )skb;
				pad = (int )(64U - skb->len);
				if(pad > 0) {
					tail_list->frameSize = (unsigned short )((int )((unsigned short )skb->len) + pad);
					tail_list->buffer[0].count = skb->len;
					tail_list->buffer[1].count = 2147483648U | (unsigned int )pad;
					tmp___0 = virt_to_phys((void *)TLanPadBuffer);
					tail_list->buffer[1].address = (unsigned int )tmp___0;
					spin_lock_irqsave((void *)(& priv->lock), (void *)flags);
L27:;
					tail_list->cStat = (unsigned short)12288;
					if(priv->txInProgress == 0) {
						priv->txInProgress = 1U;
						if(debug & 2 > 0) {
L28:;
							printk_Rsmp_1b7d4074("<7>TLAN: TRANSMIT:  Starting TX on buffer %d\n", priv->txTail);
L29:;
							spin_unlock_irqrestore((void *)(& priv->lock), (void *)flags);
L30:;
							priv->txTail = priv->txTail + 1U;
							if(priv->txTail >= 64U) {
								priv->txTail = 0U;
L31:;
								if(bbuf == 0) {
									goto L13;
								}
								else if(bbuf > 0) {
									/* FALSE PATH */ 
								}
								else {
									/* FALSE PATH */ 
								}
							}
							else {
								goto L31;
							}
						}
						else if(debug & 2 < 0) {
							goto L28;
						}
						else {
							goto L29;
						}
					}
					else if(priv->txInProgress > 0) {
L32:;
						if(debug & 2 > 0) {
L33:;
							printk_Rsmp_1b7d4074("<7>TLAN: TRANSMIT:  Adding buffer %d to TX channel\n", priv->txTail);
L34:;
							if(priv->txTail == 0U) {
								tmp___1 = virt_to_phys((void *)tail_list);
								(priv->txList + 63)->forward = (unsigned int )tmp___1;
								spin_unlock_irqrestore((void *)(& priv->lock), (void *)flags);
								goto L30;
							}
							else if(priv->txTail < 0U) {
L35:;
								tmp___2 = virt_to_phys((void *)tail_list);
								(priv->txList + (priv->txTail - 1U))->forward = (unsigned int )tmp___2;
								spin_unlock_irqrestore((void *)(& priv->lock), (void *)flags);
								goto L30;
							}
							else {
								goto L35;
							}
						}
						else if(debug & 2 < 0) {
							goto L33;
						}
						else {
							goto L34;
						}
					}
					else {
						goto L32;
					}
				}
				else {
					tail_list->frameSize = (unsigned short )skb->len;
					tail_list->buffer[0].count = 2147483648U | skb->len;
					tail_list->buffer[1].count = 0U;
					tail_list->buffer[1].address = 0U;
					spin_lock_irqsave((void *)(& priv->lock), (void *)flags);
					goto L27;
				}
			}
		}
	}
	else {
		goto L3;
	}
}

static int TLan_ioctl(struct net_device *dev , struct ifreq *rq , int cmd )
{ register TLanPrivateInfo *priv ;
register struct mii_ioctl_data *data ;
register u32 phy ;
register int temp_1 ;
	priv = (TLanPrivateInfo *)dev->priv;
	data = (struct mii_ioctl_data *)(& rq->ifr_ifru.ifru_data);
	phy = priv->phy[priv->phyNum];
	if(priv->phyOnline == 0) {
		return (-11);
		/* END OF PATH at func_TLan_ioctl@p9#1 */
	}
	else if(priv->phyOnline > 0) {
L1:;
		if(cmd == 35143) {
L2:;
			data->phy_id = (unsigned short )phy;
L3:;
			TLan_MiiReadReg(dev, (unsigned short )((int )data->phy_id & 31), (unsigned short )((int )data->reg_num & 31), & data->val_out);
L4:;
			return (0);
			/* END OF PATH at func_TLan_ioctl@p19#1 */
		}
		else if(cmd == 35312) {
			goto L2;
		}
		else if(cmd == 35144) {
			goto L3;
		}
		else if(cmd == 35313) {
			TLan_MiiReadReg(dev, (unsigned short )((int )data->phy_id & 31), (unsigned short )((int )data->reg_num & 31), & data->val_out);
			goto L4;
		}
		else if(cmd == 35145) {
L5:;
			temp_1 = capable(12);
			if(temp_1 == 0) {
				return (-1);
				/* END OF PATH at func_TLan_ioctl@p25#1 */
			}
			else if(temp_1 > 0) {
				TLan_MiiWriteReg(dev, (unsigned short )((int )data->phy_id & 31), (unsigned short )((int )data->reg_num & 31), data->val_in);
L6:;
				return (0);
				/* END OF PATH at func_TLan_ioctl@p28#1 */
			}
			else {
				TLan_MiiWriteReg(dev, (unsigned short )((int )data->phy_id & 31), (unsigned short )((int )data->reg_num & 31), data->val_in);
				goto L6;
			}
		}
		else if(cmd == 35314) {
			goto L5;
		}
		else if(cmd < 35143) {
L7:;
			return (-95);
			/* END OF PATH at func_TLan_ioctl@p31#1 */
		}
		else if(cmd > 35143 && cmd < 35144) {
			goto L7;
		}
		else if(cmd > 35144 && cmd < 35145) {
			goto L7;
		}
		else if(cmd > 35145 && cmd < 35312) {
			goto L7;
		}
		else if(cmd > 35312 && cmd < 35313) {
			goto L7;
		}
		else if(cmd > 35313 && cmd < 35314) {
			goto L7;
		}
		else {
			goto L7;
		}
	}
	else {
		goto L1;
	}
}

static struct net_device_stats *TLan_GetStats(struct net_device *dev )
{ TLanPrivateInfo *priv ;
int i ;
	priv = (TLanPrivateInfo *)dev->priv;
	TLan_ReadAndClearStats(dev, 1);
	if(debug & 4 > 0) {
L1:;
		printk_Rsmp_1b7d4074("<7>TLAN: RECEIVE:  %s EOC count = %d\n", dev->name, priv->rxEocCount);
L2:;
		if(debug & 2 > 0) {
L3:;
			printk_Rsmp_1b7d4074("<7>TLAN: TRANSMIT:  %s Busy count = %d\n", dev->name, priv->txBusyCount);
L4:;
			if(debug & 1 > 0) {
L5:;
				TLan_PrintDio((unsigned short )dev->base_addr);
				TLan_PhyPrint(dev);
L6:;
				if(debug & 8 > 0) {
L7:;
					TLan_PrintList(priv->rxList + i, (char *)"RX", i);
					TLan_PrintList(priv->txList + i, (char *)"TX", i);
L8:;
					return (& ((TLanPrivateInfo *)dev->priv)->stats);
					/* END OF PATH at func_TLan_GetStats@p15#1 */
				}
				else if(debug & 8 < 0) {
					goto L7;
				}
				else {
					goto L8;
				}
			}
			else if(debug & 1 < 0) {
				goto L5;
			}
			else {
				goto L6;
			}
		}
		else if(debug & 2 < 0) {
			goto L3;
		}
		else {
			goto L4;
		}
	}
	else if(debug & 4 < 0) {
		goto L1;
	}
	else {
		goto L2;
	}
}

static int TLan_Close(struct net_device *dev )
{ TLanPrivateInfo *priv ;
	priv = (TLanPrivateInfo *)dev->priv;
	netif_stop_queue(dev);
	priv->neg_be_verbose = (unsigned char)0;
	TLan_ReadAndClearStats(dev, 1);
	if(priv->timer.function < (0)) {
L1:;
		del_timer_sync_Rsmp_daff266a(& priv->timer);
		priv->timer.function = (void (*)(unsigned long  ))((void *)0);
L2:;
		free_irq_Rsmp_f20dabd8(dev->irq, (void *)dev);
		TLan_FreeLists(dev);
		if(debug & 1 > 0) {
L3:;
			printk_Rsmp_1b7d4074("<7>TLAN: Device %s closed.\n", dev->name);
L4:;
			return (0);
			/* END OF PATH at func_TLan_Close@p14#1 */
		}
		else if(debug & 1 < 0) {
			goto L3;
		}
		else {
			goto L4;
		}
	}
	else if(priv->timer.function > (0)) {
		goto L1;
	}
	else {
		goto L2;
	}
}

static void TLan_HandleInterrupt(int irq , void *dev_id , struct pt_regs *regs )
{ register u32 ack ;
register struct net_device *dev ;
register u32 host_cmd ;
register u16 host_int ;
register int type ;
register TLanPrivateInfo *priv ;
	dev = (struct net_device *)dev_id;
	priv = (TLanPrivateInfo *)dev->priv;
	spin_lock(& priv->lock);
	host_int = inw((unsigned short )(dev->base_addr + 10UL));
	outw(host_int, (unsigned short )(dev->base_addr + 10UL));
	type = ((int )host_int & 28) >> 2;
	ack = (*(TLanIntVector[type]))(dev, host_int);
	if(ack > 0) {
L1:;
		host_cmd = (536870912U | ack) | (unsigned int )(type << 18);
L2:;
		spin_unlock(& priv->lock);
		/* END OF PATH at func_TLan_HandleInterrupt@p18#1 */
	}
	else if(ack < 0) {
		goto L1;
	}
	else {
		goto L2;
	}
}

static int TLan_probe1(struct pci_dev *pdev , long ioaddr , int irq , int rev , struct pci_device_id *ent )
{ register struct net_device *dev ;
register TLanPrivateInfo *priv ;
u8 pci_rev ;
register u16 device_id ;
register int reg ;
register u32 pci_io_base ;
register int temp_1 ;
register int temp_2 ;
	temp_1 = pci_enable_device_Rsmp_d04fea08(pdev);
	if(pdev > 0) {
		if(temp_1 > 0) {
L1:;
			return (-5);
			/* END OF PATH at func_TLan_probe1@p12#1 */
		}
		else if(temp_1 < 0) {
			goto L1;
		}
		else {
			dev = init_etherdev_Rsmp_5ef105a6((struct net_device *)((void *)0), (int )sizeof(TLanPrivateInfo ));
			if(dev == (0)) {
L2:;
				printk_Rsmp_1b7d4074("<3>TLAN: Could not allocate memory for device.\n");
				return (-12);
				/* END OF PATH at func_TLan_probe1@p17#1 */
			}
			else if(dev < (0)) {
L3:;
				priv = (TLanPrivateInfo *)dev->priv;
				if(pdev > 0) {
					pci_io_base = 0U;
					priv->adapter = & board_info[ent->driver_data];
					pci_read_config_byte_Rsmp_e426c0e8(pdev, 8, & pci_rev);
					if(pdev->resource[reg].flags & 256UL > 0) {
L4:;
						pci_io_base = (unsigned int )pdev->resource[reg].start;
						if(debug & 1 > 0) {
L5:;
							printk_Rsmp_1b7d4074("<7>TLAN: IO mapping is available at %x.\n", pci_io_base);
L6:;
							if(pci_io_base == 0) {
L7:;
								printk_Rsmp_1b7d4074("<3>TLAN: No IO mappings available\n");
								unregister_netdev_Rsmp_99639e9a(dev);
								kfree_Rsmp_037a0cba((void const   *)dev);
								return (-19);
								/* END OF PATH at func_TLan_probe1@p32#1 */
							}
							else if(pci_io_base > 0) {
L8:;
								dev->base_addr = (unsigned long )pci_io_base;
								dev->irq = pdev->irq;
								priv->adapterRev = (unsigned int )pci_rev;
								pci_set_master_Rsmp_2d0760ae(pdev);
								pci_set_drvdata(pdev, (void *)dev);
								if(dev->mem_start > 0) {
L9:;
									priv->aui = (unsigned int )(dev->mem_start & 1UL);
									if(priv->speed == 1U) {
										priv->speed = 10U;
L10:;
										debug = (int )dev->mem_end;
										priv->debug = (unsigned int )dev->mem_end;
L11:;
										priv->tlan_tqueue.sync = 0UL;
										priv->tlan_tqueue.data = (void *)dev;
										temp_2 = TLan_Init(dev);
										if(temp_2 > 0) {
L12:;
											printk_Rsmp_1b7d4074("<3>TLAN: Could not register device.\n");
											unregister_netdev_Rsmp_99639e9a(dev);
											kfree_Rsmp_037a0cba((void const   *)dev);
											return (-11);
											/* END OF PATH at func_TLan_probe1@p72#1 */
										}
										else if(temp_2 < 0) {
											goto L12;
										}
										else {
											TLanDevicesInstalled = TLanDevicesInstalled + 1;
											boards_found = boards_found + 1;
											if(pdev > 0) {
L13:;
												tlan_have_pci = tlan_have_pci + 1;
L14:;
												printk_Rsmp_1b7d4074("<6>TLAN: %s irq=%2d, io=%04x, %s, Rev. %d\n", dev->name, (int )dev->irq, (int )dev->base_addr, (priv->adapter)->deviceLabel, priv->adapterRev);
												return (0);
												/* END OF PATH at func_TLan_probe1@p84#1 */
											}
											else if(pdev < 0) {
												/* FALSE PATH */ 
											}
											else {
												/* FALSE PATH */ 
											}
										}
									}
									else if(priv->speed < 1U) {
L15:;
										if(priv->speed == 2U) {
											priv->speed = 100U;
											goto L10;
										}
										else if(priv->speed < 2U) {
											goto L10;
										}
										else {
											goto L10;
										}
									}
									else {
										goto L15;
									}
								}
								else if(dev->mem_start < 0) {
									goto L9;
								}
								else {
									priv->aui = (unsigned int )aui[boards_found];
									priv->speed = (unsigned int )speed[boards_found];
									priv->duplex = (unsigned int )duplex[boards_found];
									priv->debug = (unsigned int )debug;
									goto L11;
								}
							}
							else {
								goto L8;
							}
						}
						else if(debug & 1 < 0) {
							goto L5;
						}
						else {
							goto L6;
						}
					}
					else if(pdev->resource[reg].flags & 256UL < 0) {
						goto L4;
					}
					else {
						goto L6;
					}
				}
				else if(pdev < 0) {
					/* FALSE PATH */ 
				}
				else {
					/* FALSE PATH */ 
				}
			}
			else {
				goto L3;
			}
		}
	}
	else if(pdev < 0) {
		if(temp_1 > 0) {
			goto L1;
		}
		else if(temp_1 < 0) {
			goto L1;
		}
		else {
			dev = init_etherdev_Rsmp_5ef105a6((struct net_device *)((void *)0), (int )sizeof(TLanPrivateInfo ));
			if(dev == (0)) {
				goto L2;
			}
			else if(dev < (0)) {
L16:;
				priv = (TLanPrivateInfo *)dev->priv;
				if(pdev < 0) {
					pci_io_base = 0U;
					priv->adapter = & board_info[ent->driver_data];
					pci_read_config_byte_Rsmp_e426c0e8(pdev, 8, & pci_rev);
					if(pdev->resource[reg].flags & 256UL > 0) {
L17:;
						pci_io_base = (unsigned int )pdev->resource[reg].start;
						if(debug & 1 > 0) {
L18:;
							printk_Rsmp_1b7d4074("<7>TLAN: IO mapping is available at %x.\n", pci_io_base);
L19:;
							if(pci_io_base == 0) {
								goto L7;
							}
							else if(pci_io_base > 0) {
L20:;
								dev->base_addr = (unsigned long )pci_io_base;
								dev->irq = pdev->irq;
								priv->adapterRev = (unsigned int )pci_rev;
								pci_set_master_Rsmp_2d0760ae(pdev);
								pci_set_drvdata(pdev, (void *)dev);
								if(dev->mem_start > 0) {
L21:;
									priv->aui = (unsigned int )(dev->mem_start & 1UL);
									if(priv->speed == 1U) {
										priv->speed = 10U;
L22:;
										debug = (int )dev->mem_end;
										priv->debug = (unsigned int )dev->mem_end;
L23:;
										priv->tlan_tqueue.sync = 0UL;
										priv->tlan_tqueue.data = (void *)dev;
										temp_2 = TLan_Init(dev);
										if(temp_2 > 0) {
											goto L12;
										}
										else if(temp_2 < 0) {
											goto L12;
										}
										else {
											TLanDevicesInstalled = TLanDevicesInstalled + 1;
											boards_found = boards_found + 1;
											if(pdev < 0) {
												goto L13;
											}
											else if(pdev > 0) {
												/* FALSE PATH */ 
											}
											else {
												/* FALSE PATH */ 
											}
										}
									}
									else if(priv->speed < 1U) {
L24:;
										if(priv->speed == 2U) {
											priv->speed = 100U;
											goto L22;
										}
										else if(priv->speed < 2U) {
											goto L22;
										}
										else {
											goto L22;
										}
									}
									else {
										goto L24;
									}
								}
								else if(dev->mem_start < 0) {
									goto L21;
								}
								else {
									priv->aui = (unsigned int )aui[boards_found];
									priv->speed = (unsigned int )speed[boards_found];
									priv->duplex = (unsigned int )duplex[boards_found];
									priv->debug = (unsigned int )debug;
									goto L23;
								}
							}
							else {
								goto L20;
							}
						}
						else if(debug & 1 < 0) {
							goto L18;
						}
						else {
							goto L19;
						}
					}
					else if(pdev->resource[reg].flags & 256UL < 0) {
						goto L17;
					}
					else {
						goto L19;
					}
				}
				else if(pdev > 0) {
					/* FALSE PATH */ 
				}
				else {
					/* FALSE PATH */ 
				}
			}
			else {
				goto L16;
			}
		}
	}
	else {
		dev = init_etherdev_Rsmp_5ef105a6((struct net_device *)((void *)0), (int )sizeof(TLanPrivateInfo ));
		if(dev == (0)) {
			goto L2;
		}
		else if(dev < (0)) {
L25:;
			priv = (TLanPrivateInfo *)dev->priv;
			if(pdev == 0) {
				device_id = inw((unsigned short )(ioaddr + 3202L));
				priv->is_eisa = (unsigned char)1;
				if(device_id == 8433) {
					priv->adapter = & board_info[13];
					priv->adapterRev = 23U;
L26:;
					dev->base_addr = (unsigned long )ioaddr;
					dev->irq = (unsigned int )irq;
					if(dev->mem_start > 0) {
L27:;
						priv->aui = (unsigned int )(dev->mem_start & 1UL);
						if(priv->speed == 1U) {
							priv->speed = 10U;
L28:;
							debug = (int )dev->mem_end;
							priv->debug = (unsigned int )dev->mem_end;
L29:;
							priv->tlan_tqueue.sync = 0UL;
							priv->tlan_tqueue.data = (void *)dev;
							temp_2 = TLan_Init(dev);
							if(temp_2 > 0) {
								goto L12;
							}
							else if(temp_2 < 0) {
								goto L12;
							}
							else {
								TLanDevicesInstalled = TLanDevicesInstalled + 1;
								boards_found = boards_found + 1;
								if(pdev == 0) {
									priv->nextDevice = TLan_Eisa_Devices;
									TLan_Eisa_Devices = dev;
									tlan_have_eisa = tlan_have_eisa + 1;
									goto L14;
								}
								else if(pdev > 0) {
									/* FALSE PATH */ 
								}
								else {
									/* FALSE PATH */ 
								}
							}
						}
						else if(priv->speed < 1U) {
L30:;
							if(priv->speed == 2U) {
								priv->speed = 100U;
								goto L28;
							}
							else if(priv->speed < 2U) {
								goto L28;
							}
							else {
								goto L28;
							}
						}
						else {
							goto L30;
						}
					}
					else if(dev->mem_start < 0) {
						goto L27;
					}
					else {
						priv->aui = (unsigned int )aui[boards_found];
						priv->speed = (unsigned int )speed[boards_found];
						priv->duplex = (unsigned int )duplex[boards_found];
						priv->debug = (unsigned int )debug;
						goto L29;
					}
				}
				else if(device_id < 8433) {
L31:;
					priv->adapter = & board_info[14];
					priv->adapterRev = 10U;
					goto L26;
				}
				else {
					goto L31;
				}
			}
			else if(pdev > 0) {
				/* FALSE PATH */ 
			}
			else {
				/* FALSE PATH */ 
			}
		}
		else {
			goto L25;
		}
	}
}

static void TLan_tx_timeout(struct net_device *dev )
{
	if(debug & 1 > 0) {
L1:;
		printk_Rsmp_1b7d4074("<7>TLAN: %s: Transmit timed out.\n", dev->name);
		TLan_FreeLists(dev);
		TLan_ResetLists(dev);
		TLan_ReadAndClearStats(dev, 0);
		TLan_ResetAdapter(dev);
L2:;
		dev->trans_start = jiffies_Rsmp_0da02d67;
		netif_wake_queue(dev);
		/* END OF PATH at func_TLan_tx_timeout@p9#1 */
	}
	else if(debug & 1 < 0) {
		goto L1;
	}
	else {
		TLan_FreeLists(dev);
		TLan_ResetLists(dev);
		TLan_ReadAndClearStats(dev, 0);
		TLan_ResetAdapter(dev);
		goto L2;
	}
}

static int tlan_init_one(struct pci_dev *pdev , struct pci_device_id *ent )
{ int tmp ;
	tmp = TLan_probe1(pdev, -1L, -1, 0, ent);
	return (tmp);
	/* END OF PATH at func_tlan_init_one@p3#1 */
}

static void TLan_ResetLists(struct net_device *dev )
{ register TLanPrivateInfo *priv ;
register int i ;
register TLanList *list ;
register struct sk_buff *skb ;
register void *t ;
unsigned long tmp ;
unsigned long tmp___0 ;
unsigned char *tmp___1 ;
unsigned long tmp___2 ;
unsigned long tmp___3 ;
	priv = (TLanPrivateInfo *)dev->priv;
	t = (void *)0;
	priv->txHead = 0U;
	priv->txTail = 0U;
	list = priv->txList + i;
	list->cStat = (unsigned short)32768;
	if(bbuf > 0) {
		tmp = virt_to_phys((void *)(priv->txBuffer + i * 1600));
		list->buffer[0].address = (unsigned int )tmp;
		list->buffer[2].count = 0U;
		list->buffer[2].address = 0U;
		list->buffer[9].address = 0U;
		priv->rxHead = 0U;
		priv->rxTail = 31U;
		list = priv->rxList + i;
		list->cStat = (unsigned short)12288;
		list->frameSize = (unsigned short)1600;
		list->buffer[0].count = 2147485248U;
		if(bbuf > 0) {
L1:;
			tmp___0 = virt_to_phys((void *)(priv->rxBuffer + i * 1600));
			list->buffer[0].address = (unsigned int )tmp___0;
L2:;
			list->buffer[1].count = 0U;
			list->buffer[1].address = 0U;
			if(i < 31) {
				tmp___3 = virt_to_phys((void *)(list + 1));
				list->forward = (unsigned int )tmp___3;
L3:;
				/* END OF PATH at func_TLan_ResetLists@p54#1 */
			}
			else {
				list->forward = 0U;
				goto L3;
			}
		}
		else if(bbuf < 0) {
			/* FALSE PATH */ 
		}
		else {
			/* FALSE PATH */ 
		}
	}
	else if(bbuf < 0) {
		tmp = virt_to_phys((void *)(priv->txBuffer + i * 1600));
		list->buffer[0].address = (unsigned int )tmp;
		list->buffer[2].count = 0U;
		list->buffer[2].address = 0U;
		list->buffer[9].address = 0U;
		priv->rxHead = 0U;
		priv->rxTail = 31U;
		list = priv->rxList + i;
		list->cStat = (unsigned short)12288;
		list->frameSize = (unsigned short)1600;
		list->buffer[0].count = 2147485248U;
		if(bbuf < 0) {
			goto L1;
		}
		else if(bbuf > 0) {
			/* FALSE PATH */ 
		}
		else {
			/* FALSE PATH */ 
		}
	}
	else {
		list->buffer[0].address = 0U;
		list->buffer[2].count = 0U;
		list->buffer[2].address = 0U;
		list->buffer[9].address = 0U;
		priv->rxHead = 0U;
		priv->rxTail = 31U;
		list = priv->rxList + i;
		list->cStat = (unsigned short)12288;
		list->frameSize = (unsigned short)1600;
		list->buffer[0].count = 2147485248U;
		if(bbuf == 0) {
			skb = dev_alloc_skb(1607U);
			if(skb == (0)) {
				printk_Rsmp_1b7d4074("TLAN:  Couldn\'t allocate memory for received data.\n");
L4:;
				tmp___2 = virt_to_phys(t);
				list->buffer[0].address = (unsigned int )tmp___2;
				list->buffer[8].address = (unsigned int )t;
				list->buffer[9].address = (unsigned int )skb;
				goto L2;
			}
			else if(skb < (0)) {
L5:;
				skb->dev = dev;
				skb_reserve(skb, 2U);
				tmp___1 = skb_put(skb, 1600U);
				t = (void *)tmp___1;
				goto L4;
			}
			else {
				goto L5;
			}
		}
		else if(bbuf > 0) {
			/* FALSE PATH */ 
		}
		else {
			/* FALSE PATH */ 
		}
	}
}

static void TLan_ResetAdapter(struct net_device *dev )
{ register TLanPrivateInfo *priv ;
register int i ;
register u32 addr ;
register u32 data ;
register u8 data8 ;
	priv = (TLanPrivateInfo *)dev->priv;
	priv->tlanFullDuplex = (unsigned char)0;
	priv->phyOnline = 0U;
	data = inl((unsigned short )dev->base_addr);
	data = data | 32768U;
	udelay(1000UL);
	data = inl((unsigned short )dev->base_addr);
	data = data | 2048U;
	TLan_DioWrite32((unsigned short )dev->base_addr, (unsigned short )i, 0U);
	data = 1664U;
	TLan_DioWrite16((unsigned short )dev->base_addr, (unsigned short)4, (unsigned short )data);
	outw((unsigned short)1, (unsigned short )(dev->base_addr + 8UL));
	addr = (unsigned int )((dev->base_addr + 12UL) + 1UL);
	if(priv->tlanRev >= 48) {
		data8 = (unsigned char)5;
		TLan_DioWrite8((unsigned short )dev->base_addr, (unsigned short)72, data8);
		TLan_PhyDetect(dev);
L1:;
		data = 1536U;
		if((priv->adapter)->flags & 2U > 0) {
L2:;
			data = data | 8192U;
			if(priv->aui == 1U) {
				TLan_DioWrite8((unsigned short )dev->base_addr, (unsigned short)67, (unsigned char)10);
L3:;
				if(priv->phyNum == 0U) {
					data = data | 128U;
L4:;
					TLan_DioWrite16((unsigned short )dev->base_addr, (unsigned short)4, (unsigned short )data);
					if((priv->adapter)->flags & 1U > 0) {
						TLan_FinishReset(dev);
L5:;
L6:;
						/* END OF PATH at func_TLan_ResetAdapter@p44#1 */
					}
					else if((priv->adapter)->flags & 1U < 0) {
						TLan_FinishReset(dev);
						goto L5;
					}
					else {
						TLan_PhyPowerDown(dev);
						goto L6;
					}
				}
				else if(priv->phyNum < 0U) {
					goto L4;
				}
				else {
					goto L4;
				}
			}
			else if(priv->aui < 1U) {
L7:;
				if(priv->duplex == 2U) {
					TLan_DioWrite8((unsigned short )dev->base_addr, (unsigned short)67, (unsigned char)0);
					priv->tlanFullDuplex = (unsigned char)1;
					goto L3;
				}
				else if(priv->duplex < 2U) {
L8:;
					TLan_DioWrite8((unsigned short )dev->base_addr, (unsigned short)67, (unsigned char)8);
					goto L3;
				}
				else {
					goto L8;
				}
			}
			else {
				goto L7;
			}
		}
		else if((priv->adapter)->flags & 2U < 0) {
			goto L2;
		}
		else {
			goto L3;
		}
	}
	else {
		TLan_PhyDetect(dev);
		goto L1;
	}
}

static void TLan_ReadAndClearStats(struct net_device *dev , int record )
{ register TLanPrivateInfo *priv ;
register u32 tx_good ;
register u32 tx_under ;
register u32 rx_good ;
register u32 rx_over ;
register u32 def_tx ;
register u32 crc ;
register u32 code ;
register u32 multi_col ;
register u32 single_col ;
register u32 excess_col ;
register u32 late_col ;
register u32 loss ;
unsigned char tmp ;
unsigned char tmp___0 ;
unsigned char tmp___1 ;
unsigned char tmp___2 ;
unsigned char tmp___3 ;
unsigned char tmp___4 ;
unsigned char tmp___5 ;
unsigned char tmp___6 ;
unsigned char tmp___7 ;
unsigned char tmp___8 ;
unsigned char tmp___9 ;
unsigned char tmp___10 ;
unsigned char tmp___11 ;
unsigned char tmp___12 ;
unsigned char tmp___13 ;
unsigned char tmp___14 ;
unsigned char tmp___15 ;
unsigned char tmp___16 ;
unsigned char tmp___17 ;
	priv = (TLanPrivateInfo *)dev->priv;
	outw((unsigned short)48, (unsigned short )(dev->base_addr + 8UL));
	tmp = inb((unsigned short )(dev->base_addr + 12UL));
	tx_good = (unsigned int )tmp;
	tmp___0 = inb((unsigned short )((dev->base_addr + 12UL) + 1UL));
	tx_good = tx_good + (u32 )((int )tmp___0 << 8);
	tmp___1 = inb((unsigned short )((dev->base_addr + 12UL) + 2UL));
	tx_good = tx_good + (u32 )((int )tmp___1 << 16);
	tmp___2 = inb((unsigned short )((dev->base_addr + 12UL) + 3UL));
	tx_under = (unsigned int )tmp___2;
	outw((unsigned short)52, (unsigned short )(dev->base_addr + 8UL));
	tmp___3 = inb((unsigned short )(dev->base_addr + 12UL));
	rx_good = (unsigned int )tmp___3;
	tmp___4 = inb((unsigned short )((dev->base_addr + 12UL) + 1UL));
	rx_good = rx_good + (u32 )((int )tmp___4 << 8);
	tmp___5 = inb((unsigned short )((dev->base_addr + 12UL) + 2UL));
	rx_good = rx_good + (u32 )((int )tmp___5 << 16);
	tmp___6 = inb((unsigned short )((dev->base_addr + 12UL) + 3UL));
	rx_over = (unsigned int )tmp___6;
	outw((unsigned short)56, (unsigned short )(dev->base_addr + 8UL));
	tmp___7 = inb((unsigned short )(dev->base_addr + 12UL));
	def_tx = (unsigned int )tmp___7;
	tmp___8 = inb((unsigned short )((dev->base_addr + 12UL) + 1UL));
	def_tx = def_tx + (u32 )((int )tmp___8 << 8);
	tmp___9 = inb((unsigned short )((dev->base_addr + 12UL) + 2UL));
	crc = (unsigned int )tmp___9;
	tmp___10 = inb((unsigned short )((dev->base_addr + 12UL) + 3UL));
	code = (unsigned int )tmp___10;
	outw((unsigned short)60, (unsigned short )(dev->base_addr + 8UL));
	tmp___11 = inb((unsigned short )(dev->base_addr + 12UL));
	multi_col = (unsigned int )tmp___11;
	tmp___12 = inb((unsigned short )((dev->base_addr + 12UL) + 1UL));
	multi_col = multi_col + (u32 )((int )tmp___12 << 8);
	tmp___13 = inb((unsigned short )((dev->base_addr + 12UL) + 2UL));
	single_col = (unsigned int )tmp___13;
	tmp___14 = inb((unsigned short )((dev->base_addr + 12UL) + 3UL));
	single_col = single_col + (u32 )((int )tmp___14 << 8);
	outw((unsigned short)64, (unsigned short )(dev->base_addr + 8UL));
	tmp___15 = inb((unsigned short )(dev->base_addr + 12UL));
	excess_col = (unsigned int )tmp___15;
	tmp___16 = inb((unsigned short )((dev->base_addr + 12UL) + 1UL));
	late_col = (unsigned int )tmp___16;
	tmp___17 = inb((unsigned short )((dev->base_addr + 12UL) + 2UL));
	loss = (unsigned int )tmp___17;
	if(record > 0) {
L1:;
		priv->stats.rx_packets = priv->stats.rx_packets + (unsigned long )rx_good;
		priv->stats.rx_errors = priv->stats.rx_errors + (unsigned long )((rx_over + crc) + code);
		priv->stats.tx_packets = priv->stats.tx_packets + (unsigned long )tx_good;
		priv->stats.tx_errors = priv->stats.tx_errors + (unsigned long )(tx_under + loss);
		priv->stats.collisions = priv->stats.collisions + (unsigned long )(((multi_col + single_col) + excess_col) + late_col);
		priv->stats.rx_over_errors = priv->stats.rx_over_errors + (unsigned long )rx_over;
		priv->stats.rx_crc_errors = priv->stats.rx_crc_errors + (unsigned long )crc;
		priv->stats.rx_frame_errors = priv->stats.rx_frame_errors + (unsigned long )code;
		priv->stats.tx_aborted_errors = priv->stats.tx_aborted_errors + (unsigned long )tx_under;
		priv->stats.tx_carrier_errors = priv->stats.tx_carrier_errors + (unsigned long )loss;
L2:;
		/* END OF PATH at func_TLan_ReadAndClearStats@p88#1 */
	}
	else if(record < 0) {
		goto L1;
	}
	else {
		goto L2;
	}
}

static int TLan_MiiReadReg(struct net_device *dev , u16 phy , u16 reg , u16 *val )
{ register u8 nack ;
register u16 sio ;
register u16 tmp ;
register u32 i ;
register int err ;
register int minten ;
register TLanPrivateInfo *priv ;
register unsigned long flags ;
register int temp_1 ;
unsigned char tmp___0 ;
unsigned char tmp___1 ;
unsigned char tmp___2 ;
	priv = (TLanPrivateInfo *)dev->priv;
	flags = 0UL;
	err = 0;
	outw((unsigned short)1, (unsigned short )(dev->base_addr + 8UL));
	sio = (unsigned short )((dev->base_addr + 12UL) + 1UL);
	if(in_irq == 0) {
		spin_lock_irqsave((void *)(& priv->lock), (void *)flags);
		TLan_MiiSync((unsigned short )dev->base_addr);
		tmp___0 = inb_p(sio);
		minten = (int )tmp___0 & 128;
		if(minten > 0) {
			TLan_MiiSendData((unsigned short )dev->base_addr, 1U, 2U);
			TLan_MiiSendData((unsigned short )dev->base_addr, 2U, 2U);
			TLan_MiiSendData((unsigned short )dev->base_addr, (unsigned int )phy, 5U);
			TLan_MiiSendData((unsigned short )dev->base_addr, (unsigned int )reg, 5U);
			tmp___1 = inb_p(sio);
			nack = (unsigned char )((int )tmp___1 & 1);
			if(nack > 0) {
L1:;
				tmp = (unsigned short)65535;
				err = 1;
L2:;
				if(minten > 0) {
L3:;
L4:;
					*val = tmp;
					if(in_irq == 0) {
						spin_unlock_irqrestore((void *)(& priv->lock), (void *)flags);
L5:;
						return (err);
						/* END OF PATH at func_TLan_MiiReadReg@p44#1 */
					}
					else if(in_irq > 0) {
						/* FALSE PATH */ 
					}
					else {
						/* FALSE PATH */ 
					}
				}
				else if(minten < 0) {
					/* FALSE PATH */ 
				}
				else {
					/* FALSE PATH */ 
				}
			}
			else if(nack < 0) {
				goto L1;
			}
			else {
				tmp___2 = inb_p(sio);
				temp_1 = (int )tmp___2;
				if(temp_1 & 1 > 0) {
L6:;
					tmp = (unsigned short )((unsigned int )tmp | i);
					goto L2;
				}
				else if(temp_1 & 1 < 0) {
					goto L6;
				}
				else {
					goto L2;
				}
			}
		}
		else if(minten < 0) {
			TLan_MiiSendData((unsigned short )dev->base_addr, 1U, 2U);
			TLan_MiiSendData((unsigned short )dev->base_addr, 2U, 2U);
			TLan_MiiSendData((unsigned short )dev->base_addr, (unsigned int )phy, 5U);
			TLan_MiiSendData((unsigned short )dev->base_addr, (unsigned int )reg, 5U);
			tmp___1 = inb_p(sio);
			nack = (unsigned char )((int )tmp___1 & 1);
			if(nack > 0) {
L7:;
				tmp = (unsigned short)65535;
				err = 1;
L8:;
				if(minten < 0) {
					goto L3;
				}
				else if(minten > 0) {
					/* FALSE PATH */ 
				}
				else {
					/* FALSE PATH */ 
				}
			}
			else if(nack < 0) {
				goto L7;
			}
			else {
				tmp___2 = inb_p(sio);
				temp_1 = (int )tmp___2;
				if(temp_1 & 1 > 0) {
L9:;
					tmp = (unsigned short )((unsigned int )tmp | i);
					goto L8;
				}
				else if(temp_1 & 1 < 0) {
					goto L9;
				}
				else {
					goto L8;
				}
			}
		}
		else {
			TLan_MiiSendData((unsigned short )dev->base_addr, 1U, 2U);
			TLan_MiiSendData((unsigned short )dev->base_addr, 2U, 2U);
			TLan_MiiSendData((unsigned short )dev->base_addr, (unsigned int )phy, 5U);
			TLan_MiiSendData((unsigned short )dev->base_addr, (unsigned int )reg, 5U);
			tmp___1 = inb_p(sio);
			nack = (unsigned char )((int )tmp___1 & 1);
			if(nack > 0) {
L10:;
				tmp = (unsigned short)65535;
				err = 1;
L11:;
				if(minten == 0) {
					goto L4;
				}
				else if(minten > 0) {
					/* FALSE PATH */ 
				}
				else {
					/* FALSE PATH */ 
				}
			}
			else if(nack < 0) {
				goto L10;
			}
			else {
				tmp___2 = inb_p(sio);
				temp_1 = (int )tmp___2;
				if(temp_1 & 1 > 0) {
L12:;
					tmp = (unsigned short )((unsigned int )tmp | i);
					goto L11;
				}
				else if(temp_1 & 1 < 0) {
					goto L12;
				}
				else {
					goto L11;
				}
			}
		}
	}
	else if(in_irq > 0) {
		TLan_MiiSync((unsigned short )dev->base_addr);
		tmp___0 = inb_p(sio);
		minten = (int )tmp___0 & 128;
		if(minten > 0) {
			TLan_MiiSendData((unsigned short )dev->base_addr, 1U, 2U);
			TLan_MiiSendData((unsigned short )dev->base_addr, 2U, 2U);
			TLan_MiiSendData((unsigned short )dev->base_addr, (unsigned int )phy, 5U);
			TLan_MiiSendData((unsigned short )dev->base_addr, (unsigned int )reg, 5U);
			tmp___1 = inb_p(sio);
			nack = (unsigned char )((int )tmp___1 & 1);
			if(nack > 0) {
L13:;
				tmp = (unsigned short)65535;
				err = 1;
L14:;
				if(minten > 0) {
L15:;
L16:;
					*val = tmp;
					if(in_irq > 0) {
						goto L5;
					}
					else if(in_irq == 0) {
						/* FALSE PATH */ 
					}
					else {
						/* FALSE PATH */ 
					}
				}
				else if(minten < 0) {
					/* FALSE PATH */ 
				}
				else {
					/* FALSE PATH */ 
				}
			}
			else if(nack < 0) {
				goto L13;
			}
			else {
				tmp___2 = inb_p(sio);
				temp_1 = (int )tmp___2;
				if(temp_1 & 1 > 0) {
L17:;
					tmp = (unsigned short )((unsigned int )tmp | i);
					goto L14;
				}
				else if(temp_1 & 1 < 0) {
					goto L17;
				}
				else {
					goto L14;
				}
			}
		}
		else if(minten < 0) {
			TLan_MiiSendData((unsigned short )dev->base_addr, 1U, 2U);
			TLan_MiiSendData((unsigned short )dev->base_addr, 2U, 2U);
			TLan_MiiSendData((unsigned short )dev->base_addr, (unsigned int )phy, 5U);
			TLan_MiiSendData((unsigned short )dev->base_addr, (unsigned int )reg, 5U);
			tmp___1 = inb_p(sio);
			nack = (unsigned char )((int )tmp___1 & 1);
			if(nack > 0) {
L18:;
				tmp = (unsigned short)65535;
				err = 1;
L19:;
				if(minten < 0) {
					goto L15;
				}
				else if(minten > 0) {
					/* FALSE PATH */ 
				}
				else {
					/* FALSE PATH */ 
				}
			}
			else if(nack < 0) {
				goto L18;
			}
			else {
				tmp___2 = inb_p(sio);
				temp_1 = (int )tmp___2;
				if(temp_1 & 1 > 0) {
L20:;
					tmp = (unsigned short )((unsigned int )tmp | i);
					goto L19;
				}
				else if(temp_1 & 1 < 0) {
					goto L20;
				}
				else {
					goto L19;
				}
			}
		}
		else {
			TLan_MiiSendData((unsigned short )dev->base_addr, 1U, 2U);
			TLan_MiiSendData((unsigned short )dev->base_addr, 2U, 2U);
			TLan_MiiSendData((unsigned short )dev->base_addr, (unsigned int )phy, 5U);
			TLan_MiiSendData((unsigned short )dev->base_addr, (unsigned int )reg, 5U);
			tmp___1 = inb_p(sio);
			nack = (unsigned char )((int )tmp___1 & 1);
			if(nack > 0) {
L21:;
				tmp = (unsigned short)65535;
				err = 1;
L22:;
				if(minten == 0) {
					goto L16;
				}
				else if(minten > 0) {
					/* FALSE PATH */ 
				}
				else {
					/* FALSE PATH */ 
				}
			}
			else if(nack < 0) {
				goto L21;
			}
			else {
				tmp___2 = inb_p(sio);
				temp_1 = (int )tmp___2;
				if(temp_1 & 1 > 0) {
L23:;
					tmp = (unsigned short )((unsigned int )tmp | i);
					goto L22;
				}
				else if(temp_1 & 1 < 0) {
					goto L23;
				}
				else {
					goto L22;
				}
			}
		}
	}
	else {
		TLan_MiiSync((unsigned short )dev->base_addr);
		tmp___0 = inb_p(sio);
		minten = (int )tmp___0 & 128;
		if(minten > 0) {
			TLan_MiiSendData((unsigned short )dev->base_addr, 1U, 2U);
			TLan_MiiSendData((unsigned short )dev->base_addr, 2U, 2U);
			TLan_MiiSendData((unsigned short )dev->base_addr, (unsigned int )phy, 5U);
			TLan_MiiSendData((unsigned short )dev->base_addr, (unsigned int )reg, 5U);
			tmp___1 = inb_p(sio);
			nack = (unsigned char )((int )tmp___1 & 1);
			if(nack > 0) {
L24:;
				tmp = (unsigned short)65535;
				err = 1;
L25:;
				if(minten > 0) {
L26:;
L27:;
					*val = tmp;
					if(in_irq < 0) {
						goto L5;
					}
					else if(in_irq == 0) {
						/* FALSE PATH */ 
					}
					else {
						/* FALSE PATH */ 
					}
				}
				else if(minten < 0) {
					/* FALSE PATH */ 
				}
				else {
					/* FALSE PATH */ 
				}
			}
			else if(nack < 0) {
				goto L24;
			}
			else {
				tmp___2 = inb_p(sio);
				temp_1 = (int )tmp___2;
				if(temp_1 & 1 > 0) {
L28:;
					tmp = (unsigned short )((unsigned int )tmp | i);
					goto L25;
				}
				else if(temp_1 & 1 < 0) {
					goto L28;
				}
				else {
					goto L25;
				}
			}
		}
		else if(minten < 0) {
			TLan_MiiSendData((unsigned short )dev->base_addr, 1U, 2U);
			TLan_MiiSendData((unsigned short )dev->base_addr, 2U, 2U);
			TLan_MiiSendData((unsigned short )dev->base_addr, (unsigned int )phy, 5U);
			TLan_MiiSendData((unsigned short )dev->base_addr, (unsigned int )reg, 5U);
			tmp___1 = inb_p(sio);
			nack = (unsigned char )((int )tmp___1 & 1);
			if(nack > 0) {
L29:;
				tmp = (unsigned short)65535;
				err = 1;
L30:;
				if(minten < 0) {
					goto L26;
				}
				else if(minten > 0) {
					/* FALSE PATH */ 
				}
				else {
					/* FALSE PATH */ 
				}
			}
			else if(nack < 0) {
				goto L29;
			}
			else {
				tmp___2 = inb_p(sio);
				temp_1 = (int )tmp___2;
				if(temp_1 & 1 > 0) {
L31:;
					tmp = (unsigned short )((unsigned int )tmp | i);
					goto L30;
				}
				else if(temp_1 & 1 < 0) {
					goto L31;
				}
				else {
					goto L30;
				}
			}
		}
		else {
			TLan_MiiSendData((unsigned short )dev->base_addr, 1U, 2U);
			TLan_MiiSendData((unsigned short )dev->base_addr, 2U, 2U);
			TLan_MiiSendData((unsigned short )dev->base_addr, (unsigned int )phy, 5U);
			TLan_MiiSendData((unsigned short )dev->base_addr, (unsigned int )reg, 5U);
			tmp___1 = inb_p(sio);
			nack = (unsigned char )((int )tmp___1 & 1);
			if(nack > 0) {
L32:;
				tmp = (unsigned short)65535;
				err = 1;
L33:;
				if(minten == 0) {
					goto L27;
				}
				else if(minten > 0) {
					/* FALSE PATH */ 
				}
				else {
					/* FALSE PATH */ 
				}
			}
			else if(nack < 0) {
				goto L32;
			}
			else {
				tmp___2 = inb_p(sio);
				temp_1 = (int )tmp___2;
				if(temp_1 & 1 > 0) {
L34:;
					tmp = (unsigned short )((unsigned int )tmp | i);
					goto L33;
				}
				else if(temp_1 & 1 < 0) {
					goto L34;
				}
				else {
					goto L33;
				}
			}
		}
	}
}

static void TLan_MiiWriteReg(struct net_device *dev , u16 phy , u16 reg , u16 val )
{ register u16 sio ;
register int minten ;
register unsigned long flags ;
register TLanPrivateInfo *priv ;
register unsigned char temp1 ;
register unsigned char temp2 ;
unsigned char tmp ;
	flags = 0UL;
	priv = (TLanPrivateInfo *)dev->priv;
	outw((unsigned short)1, (unsigned short )(dev->base_addr + 8UL));
	sio = (unsigned short )((dev->base_addr + 12UL) + 1UL);
	if(in_irq == 0) {
		spin_lock_irqsave((void *)(& priv->lock), (void *)flags);
		TLan_MiiSync((unsigned short )dev->base_addr);
		tmp = inb_p(sio);
		minten = (int )tmp & 128;
		if(minten > 0) {
			TLan_MiiSendData((unsigned short )dev->base_addr, 1U, 2U);
			TLan_MiiSendData((unsigned short )dev->base_addr, 1U, 2U);
			TLan_MiiSendData((unsigned short )dev->base_addr, (unsigned int )phy, 5U);
			TLan_MiiSendData((unsigned short )dev->base_addr, (unsigned int )reg, 5U);
			TLan_MiiSendData((unsigned short )dev->base_addr, 2U, 2U);
			TLan_MiiSendData((unsigned short )dev->base_addr, (unsigned int )val, 16U);
			if(minten > 0) {
L1:;
				temp1 = inb_p(sio);
				temp2 = (unsigned char )((int )temp1 | 128);
				outb_p(temp2, sio);
L2:;
				if(in_irq == 0) {
					spin_unlock_irqrestore((void *)(& priv->lock), (void *)flags);
L3:;
					/* END OF PATH at func_TLan_MiiWriteReg@p31#1 */
				}
				else if(in_irq > 0) {
					/* FALSE PATH */ 
				}
				else {
					/* FALSE PATH */ 
				}
			}
			else if(minten < 0) {
				/* FALSE PATH */ 
			}
			else {
				/* FALSE PATH */ 
			}
		}
		else if(minten < 0) {
			TLan_MiiSendData((unsigned short )dev->base_addr, 1U, 2U);
			TLan_MiiSendData((unsigned short )dev->base_addr, 1U, 2U);
			TLan_MiiSendData((unsigned short )dev->base_addr, (unsigned int )phy, 5U);
			TLan_MiiSendData((unsigned short )dev->base_addr, (unsigned int )reg, 5U);
			TLan_MiiSendData((unsigned short )dev->base_addr, 2U, 2U);
			TLan_MiiSendData((unsigned short )dev->base_addr, (unsigned int )val, 16U);
			if(minten < 0) {
				goto L1;
			}
			else if(minten > 0) {
				/* FALSE PATH */ 
			}
			else {
				/* FALSE PATH */ 
			}
		}
		else {
			TLan_MiiSendData((unsigned short )dev->base_addr, 1U, 2U);
			TLan_MiiSendData((unsigned short )dev->base_addr, 1U, 2U);
			TLan_MiiSendData((unsigned short )dev->base_addr, (unsigned int )phy, 5U);
			TLan_MiiSendData((unsigned short )dev->base_addr, (unsigned int )reg, 5U);
			TLan_MiiSendData((unsigned short )dev->base_addr, 2U, 2U);
			TLan_MiiSendData((unsigned short )dev->base_addr, (unsigned int )val, 16U);
			if(minten == 0) {
				goto L2;
			}
			else if(minten > 0) {
				/* FALSE PATH */ 
			}
			else {
				/* FALSE PATH */ 
			}
		}
	}
	else if(in_irq > 0) {
		TLan_MiiSync((unsigned short )dev->base_addr);
		tmp = inb_p(sio);
		minten = (int )tmp & 128;
		if(minten > 0) {
			TLan_MiiSendData((unsigned short )dev->base_addr, 1U, 2U);
			TLan_MiiSendData((unsigned short )dev->base_addr, 1U, 2U);
			TLan_MiiSendData((unsigned short )dev->base_addr, (unsigned int )phy, 5U);
			TLan_MiiSendData((unsigned short )dev->base_addr, (unsigned int )reg, 5U);
			TLan_MiiSendData((unsigned short )dev->base_addr, 2U, 2U);
			TLan_MiiSendData((unsigned short )dev->base_addr, (unsigned int )val, 16U);
			if(minten > 0) {
L4:;
				temp1 = inb_p(sio);
				temp2 = (unsigned char )((int )temp1 | 128);
				outb_p(temp2, sio);
L5:;
				if(in_irq > 0) {
					goto L3;
				}
				else if(in_irq == 0) {
					/* FALSE PATH */ 
				}
				else {
					/* FALSE PATH */ 
				}
			}
			else if(minten < 0) {
				/* FALSE PATH */ 
			}
			else {
				/* FALSE PATH */ 
			}
		}
		else if(minten < 0) {
			TLan_MiiSendData((unsigned short )dev->base_addr, 1U, 2U);
			TLan_MiiSendData((unsigned short )dev->base_addr, 1U, 2U);
			TLan_MiiSendData((unsigned short )dev->base_addr, (unsigned int )phy, 5U);
			TLan_MiiSendData((unsigned short )dev->base_addr, (unsigned int )reg, 5U);
			TLan_MiiSendData((unsigned short )dev->base_addr, 2U, 2U);
			TLan_MiiSendData((unsigned short )dev->base_addr, (unsigned int )val, 16U);
			if(minten < 0) {
				goto L4;
			}
			else if(minten > 0) {
				/* FALSE PATH */ 
			}
			else {
				/* FALSE PATH */ 
			}
		}
		else {
			TLan_MiiSendData((unsigned short )dev->base_addr, 1U, 2U);
			TLan_MiiSendData((unsigned short )dev->base_addr, 1U, 2U);
			TLan_MiiSendData((unsigned short )dev->base_addr, (unsigned int )phy, 5U);
			TLan_MiiSendData((unsigned short )dev->base_addr, (unsigned int )reg, 5U);
			TLan_MiiSendData((unsigned short )dev->base_addr, 2U, 2U);
			TLan_MiiSendData((unsigned short )dev->base_addr, (unsigned int )val, 16U);
			if(minten == 0) {
				goto L5;
			}
			else if(minten > 0) {
				/* FALSE PATH */ 
			}
			else {
				/* FALSE PATH */ 
			}
		}
	}
	else {
		TLan_MiiSync((unsigned short )dev->base_addr);
		tmp = inb_p(sio);
		minten = (int )tmp & 128;
		if(minten > 0) {
			TLan_MiiSendData((unsigned short )dev->base_addr, 1U, 2U);
			TLan_MiiSendData((unsigned short )dev->base_addr, 1U, 2U);
			TLan_MiiSendData((unsigned short )dev->base_addr, (unsigned int )phy, 5U);
			TLan_MiiSendData((unsigned short )dev->base_addr, (unsigned int )reg, 5U);
			TLan_MiiSendData((unsigned short )dev->base_addr, 2U, 2U);
			TLan_MiiSendData((unsigned short )dev->base_addr, (unsigned int )val, 16U);
			if(minten > 0) {
L6:;
				temp1 = inb_p(sio);
				temp2 = (unsigned char )((int )temp1 | 128);
				outb_p(temp2, sio);
L7:;
				if(in_irq < 0) {
					goto L3;
				}
				else if(in_irq == 0) {
					/* FALSE PATH */ 
				}
				else {
					/* FALSE PATH */ 
				}
			}
			else if(minten < 0) {
				/* FALSE PATH */ 
			}
			else {
				/* FALSE PATH */ 
			}
		}
		else if(minten < 0) {
			TLan_MiiSendData((unsigned short )dev->base_addr, 1U, 2U);
			TLan_MiiSendData((unsigned short )dev->base_addr, 1U, 2U);
			TLan_MiiSendData((unsigned short )dev->base_addr, (unsigned int )phy, 5U);
			TLan_MiiSendData((unsigned short )dev->base_addr, (unsigned int )reg, 5U);
			TLan_MiiSendData((unsigned short )dev->base_addr, 2U, 2U);
			TLan_MiiSendData((unsigned short )dev->base_addr, (unsigned int )val, 16U);
			if(minten < 0) {
				goto L6;
			}
			else if(minten > 0) {
				/* FALSE PATH */ 
			}
			else {
				/* FALSE PATH */ 
			}
		}
		else {
			TLan_MiiSendData((unsigned short )dev->base_addr, 1U, 2U);
			TLan_MiiSendData((unsigned short )dev->base_addr, 1U, 2U);
			TLan_MiiSendData((unsigned short )dev->base_addr, (unsigned int )phy, 5U);
			TLan_MiiSendData((unsigned short )dev->base_addr, (unsigned int )reg, 5U);
			TLan_MiiSendData((unsigned short )dev->base_addr, 2U, 2U);
			TLan_MiiSendData((unsigned short )dev->base_addr, (unsigned int )val, 16U);
			if(minten == 0) {
				goto L7;
			}
			else if(minten > 0) {
				/* FALSE PATH */ 
			}
			else {
				/* FALSE PATH */ 
			}
		}
	}
}

static void TLan_FreeLists(struct net_device *dev )
{ register TLanPrivateInfo *priv ;
register int i ;
register TLanList *list ;
register struct sk_buff *skb ;
	priv = (TLanPrivateInfo *)dev->priv;
	priv = (TLanPrivateInfo *)dev->priv;
	if(bbuf == 0) {
		list = priv->txList + i;
		skb = (struct sk_buff *)list->buffer[9].address;
		if(skb > 0) {
L1:;
			dev_kfree_skb_any(skb);
			list->buffer[9].address = 0U;
L2:;
			list = priv->rxList + i;
			skb = (struct sk_buff *)list->buffer[9].address;
			if(skb > 0) {
L3:;
				dev_kfree_skb_any(skb);
				list->buffer[9].address = 0U;
L4:;
				/* END OF PATH at func_TLan_FreeLists@p18#1 */
			}
			else if(skb < 0) {
				goto L3;
			}
			else {
				goto L4;
			}
		}
		else if(skb < 0) {
			goto L1;
		}
		else {
			goto L2;
		}
	}
	else if(bbuf > 0) {
		goto L4;
	}
	else {
		goto L4;
	}
}

static void TLan_PrintList(TLanList *list , char *type , int num )
{ int i ;
	printk_Rsmp_1b7d4074("TLAN:   %s List %d at 0x%08x\n", type, num, (unsigned int )list);
	printk_Rsmp_1b7d4074("TLAN:      Forward    = 0x%08x\n", list->forward);
	printk_Rsmp_1b7d4074("TLAN:      CSTAT      = 0x%04hx\n", list->cStat);
	printk_Rsmp_1b7d4074("TLAN:      Frame Size = 0x%04hx\n", list->frameSize);
	printk_Rsmp_1b7d4074("TLAN:      Buffer[%d].count, addr = 0x%08x, 0x%08x\n", i, list->buffer[i].count, list->buffer[i].address);
	/* END OF PATH at func_TLan_PrintList@p7#1 */
}

static void TLan_PrintDio(u16 io_base )
{ u32 data0 ;
u32 data1 ;
int i ;
	printk_Rsmp_1b7d4074("TLAN:   Contents of internal registers for io base 0x%04hx.\n", io_base);
	printk_Rsmp_1b7d4074("TLAN:      Off.  +0         +4\n");
	data0 = TLan_DioRead32(io_base, (unsigned short )i);
	data1 = TLan_DioRead32(io_base, (unsigned short )(i + 4));
	printk_Rsmp_1b7d4074("TLAN:      0x%02x  0x%08x 0x%08x\n", i, data0, data1);
	/* END OF PATH at func_TLan_PrintDio@p9#1 */
}

static void TLan_PhyPrint(struct net_device *dev )
{ register TLanPrivateInfo *priv ;
u16 i ;
u16 data0 ;
u16 data1 ;
u16 data2 ;
u16 data3 ;
u16 phy ;
	priv = (TLanPrivateInfo *)dev->priv;
	phy = (unsigned short )priv->phy[priv->phyNum];
	if((priv->adapter)->flags & 1U > 0) {
L1:;
		printk_Rsmp_1b7d4074("TLAN:   Device %s, Unmanaged PHY.\n", dev->name);
L2:;
		/* END OF PATH at func_TLan_PhyPrint@p27#1 */
	}
	else if((priv->adapter)->flags & 1U < 0) {
		goto L1;
	}
	else {
		if(phy <= 31) {
			printk_Rsmp_1b7d4074("TLAN:   Device %s, PHY 0x%02x.\n", dev->name, phy);
			printk_Rsmp_1b7d4074("TLAN:      Off.  +0     +1     +2     +3 \n");
			printk_Rsmp_1b7d4074("TLAN:      0x%02x", i);
			TLan_MiiReadReg(dev, phy, i, & data0);
			printk_Rsmp_1b7d4074(" 0x%04hx", data0);
			TLan_MiiReadReg(dev, phy, (unsigned short )((int )i + 1), & data1);
			printk_Rsmp_1b7d4074(" 0x%04hx", data1);
			TLan_MiiReadReg(dev, phy, (unsigned short )((int )i + 2), & data2);
			printk_Rsmp_1b7d4074(" 0x%04hx", data2);
			TLan_MiiReadReg(dev, phy, (unsigned short )((int )i + 3), & data3);
			printk_Rsmp_1b7d4074(" 0x%04hx\n", data3);
			goto L2;
		}
		else {
			printk_Rsmp_1b7d4074("TLAN:   Device %s, Invalid PHY.\n", dev->name);
			goto L2;
		}
	}
}

static void TLan_SetMulticastList(struct net_device *dev )
{ register struct dev_mc_list *dmi ;
register u32 hash1 ;
register u32 hash2 ;
register int i ;
register u32 offset ;
register u8 tmp ;
	dmi = dev->mc_list;
	hash1 = 0U;
	hash2 = 0U;
	if(dev->flags & 256 > 0) {
L1:;
		tmp = TLan_DioRead8((unsigned short )dev->base_addr, (unsigned short)0);
		TLan_DioWrite8((unsigned short )dev->base_addr, (unsigned short)0, (unsigned char )((int )tmp | 16));
L2:;
		/* END OF PATH at func_TLan_SetMulticastList@p38#1 */
	}
	else if(dev->flags & 256 < 0) {
		goto L1;
	}
	else {
		tmp = TLan_DioRead8((unsigned short )dev->base_addr, (unsigned short)0);
		TLan_DioWrite8((unsigned short )dev->base_addr, (unsigned short)0, tmp);
		if(dev->flags & 512 > 0) {
L3:;
			TLan_SetMac(dev, i + 1, (char *)((void *)0));
			TLan_DioWrite32((unsigned short )dev->base_addr, (unsigned short)40, 4294967295U);
			TLan_DioWrite32((unsigned short )dev->base_addr, (unsigned short)44, 4294967295U);
			goto L2;
		}
		else if(dev->flags & 512 < 0) {
			goto L3;
		}
		else {
			i = 0;
L4:;
L5:;
			if(i >= dev->mc_count) {
L6:;
				TLan_SetMac(dev, i + 1, (char *)((void *)0));
				TLan_DioWrite32((unsigned short )dev->base_addr, (unsigned short)40, hash1);
				TLan_DioWrite32((unsigned short )dev->base_addr, (unsigned short)44, hash2);
				goto L2;
			}
			else {
				if(i < 3) {
					TLan_SetMac(dev, i + 1, (char *)(& dmi->dmi_addr));
L7:;
					dmi = dmi->next;
					i = i + 1;
					goto L5;
				}
				else {
					offset = TLan_HashFunc((u8 *)(& dmi->dmi_addr));
					if(offset < 32U) {
						hash1 = hash1 | (unsigned int )(1 << offset);
						goto L7;
					}
					else {
						hash2 = hash2 | (unsigned int )(1 << (offset - 32U));
						goto L7;
					}
				}
			}
		}
	}
}

static u32 TLan_HandleInvalid(struct net_device *dev , u16 host_int )
{
	return (0U);
	/* END OF PATH at func_TLan_HandleInvalid@p1#1 */
}

static u32 TLan_HandleTxEOF(struct net_device *dev , u16 host_int )
{ register TLanPrivateInfo *priv ;
register int eoc ;
register TLanList *head_list ;
register u32 ack ;
register u16 tmpCStat ;
register int temp_1 ;
register int temp_2 ;
register int temp_4 ;
register int temp_5 ;
	priv = (TLanPrivateInfo *)dev->priv;
	eoc = 0;
	ack = 0U;
	if(debug & 2 > 0) {
L1:;
		printk_Rsmp_1b7d4074("<7>TLAN: TRANSMIT:  Handling TX EOF (Head=%d Tail=%d)\n", priv->txHead, priv->txTail);
L2:;
		head_list = priv->txList + priv->txHead;
L3:;
L4:;
		if(tmpCStat & 16384 > 0) {
L5:;
			if(ack >= 255U) {
L6:;
L7:;
				if(ack == 0) {
					printk_Rsmp_1b7d4074("<6>TLAN: Received interrupt for uncompleted TX frame.\n");
L8:;
					if(eoc > 0) {
L9:;
						temp_5 = debug & 2;
						if(temp_5 > 0) {
L10:;
							printk_Rsmp_1b7d4074("<7>TLAN: TRANSMIT:  Handling TX EOC (Head=%d Tail=%d)\n", priv->txHead, priv->txTail);
L11:;
							head_list = priv->txList + priv->txHead;
							temp_1 = (int )head_list->cStat & 12288;
							if(temp_1 == 12288) {
								ack = ack | 2147483648U;
L12:;
								temp_2 = (int )((priv->adapter)->flags & 8U);
								if(temp_2 > 0) {
L13:;
									TLan_DioWrite8((unsigned short )dev->base_addr, (unsigned short)68, (unsigned char)17);
									if(priv->timer.function == (0)) {
										priv->timer.data = (unsigned long )dev;
										priv->timer.expires = jiffies_Rsmp_0da02d67 + 10UL;
										priv->timerSetAt = (unsigned int )jiffies_Rsmp_0da02d67;
										priv->timerType = 2U;
										add_timer_Rsmp_a19eacf8(& priv->timer);
L14:;
										return (ack);
										/* END OF PATH at func_TLan_HandleTxEOF@p62#1 */
									}
									else if(priv->timer.function < (0)) {
L15:;
										if(priv->timerType == 2U) {
											priv->timerSetAt = (unsigned int )jiffies_Rsmp_0da02d67;
											goto L14;
										}
										else if(priv->timerType < 2U) {
											goto L14;
										}
										else {
											goto L14;
										}
									}
									else {
										goto L15;
									}
								}
								else if(temp_2 < 0) {
									goto L13;
								}
								else {
									goto L14;
								}
							}
							else if(temp_1 < 12288) {
L16:;
								priv->txInProgress = 0U;
								goto L12;
							}
							else {
								goto L16;
							}
						}
						else if(temp_5 < 0) {
							goto L10;
						}
						else {
							goto L11;
						}
					}
					else if(eoc < 0) {
						goto L9;
					}
					else {
						goto L12;
					}
				}
				else if(ack > 0) {
					goto L8;
				}
				else {
					goto L8;
				}
			}
			else {
				ack = ack + 1U;
				if(bbuf == 0) {
					dev_kfree_skb_any((struct sk_buff *)head_list->buffer[9].address);
					head_list->buffer[9].address = 0U;
L17:;
					temp_4 = (int )tmpCStat & 2048;
					if(temp_4 > 0) {
L18:;
						eoc = 1;
L19:;
						priv->stats.tx_bytes = priv->stats.tx_bytes + (unsigned long )head_list->frameSize;
						head_list->cStat = (unsigned short)32768;
						netif_start_queue(dev);
						priv->txHead = priv->txHead + 1U;
						if(priv->txHead >= 64U) {
							priv->txHead = 0U;
L20:;
							head_list = priv->txList + priv->txHead;
							goto L4;
						}
						else {
							goto L20;
						}
					}
					else if(temp_4 < 0) {
						goto L18;
					}
					else {
						goto L19;
					}
				}
				else if(bbuf > 0) {
					goto L17;
				}
				else {
					goto L17;
				}
			}
		}
		else if(tmpCStat & 16384 < 0) {
			goto L5;
		}
		else {
			/* END OF PATH at func_TLan_HandleTxEOF@p16#3 */
		}
	}
	else if(debug & 2 < 0) {
		goto L1;
	}
	else {
		goto L2;
	}
}

static u32 TLan_HandleStatOverflow(struct net_device *dev , u16 host_int )
{
	TLan_ReadAndClearStats(dev, 1);
	return (1U);
	/* END OF PATH at func_TLan_HandleStatOverflow@p2#1 */
}

static u32 TLan_HandleRxEOF(struct net_device *dev , u16 host_int )
{ register TLanPrivateInfo *priv ;
register u32 ack ;
register int eoc ;
register u8 *head_buffer ;
register TLanList *head_list ;
register struct sk_buff *skb ;
register TLanList *tail_list ;
register void *t ;
register u32 frameSize ;
register u16 tmpCStat ;
register struct sk_buff *new_skb ;
unsigned char *tmp ;
unsigned char *tmp___0 ;
unsigned long tmp___1 ;
unsigned long tmp___2 ;
	priv = (TLanPrivateInfo *)dev->priv;
	ack = 0U;
	eoc = 0;
	if(debug & 4 > 0) {
L1:;
		printk_Rsmp_1b7d4074("<7>TLAN: RECEIVE:  Handling RX EOF (Head=%d Tail=%d)\n", priv->rxHead, priv->rxTail);
L2:;
		head_list = priv->rxList + priv->rxHead;
		tmpCStat = head_list->cStat;
L3:;
L4:;
		if(tmpCStat & 16384 > 0) {
L5:;
			if(ack >= 255U) {
L6:;
L7:;
				if(ack == 0) {
					printk_Rsmp_1b7d4074("<6>TLAN: Received interrupt for uncompleted RX frame.\n");
L8:;
					if(eoc > 0) {
L9:;
						if(debug & 4 > 0) {
L10:;
							printk_Rsmp_1b7d4074("<7>TLAN: RECEIVE:  Handling RX EOC (Head=%d Tail=%d)\n", priv->rxHead, priv->rxTail);
L11:;
							head_list = priv->rxList + priv->rxHead;
							ack = (ack | 2147483648U) | 524288U;
							priv->rxEocCount = priv->rxEocCount + 1U;
L12:;
							if((priv->adapter)->flags & 8U > 0) {
L13:;
								TLan_DioWrite8((unsigned short )dev->base_addr, (unsigned short)68, (unsigned char)17);
								if(priv->timer.function == (0)) {
									priv->timer.data = (unsigned long )dev;
									priv->timer.expires = jiffies_Rsmp_0da02d67 + 10UL;
									priv->timerSetAt = (unsigned int )jiffies_Rsmp_0da02d67;
									priv->timerType = 2U;
									add_timer_Rsmp_a19eacf8(& priv->timer);
L14:;
									dev->last_rx = jiffies_Rsmp_0da02d67;
									return (ack);
									/* END OF PATH at func_TLan_HandleRxEOF@p105#1 */
								}
								else if(priv->timer.function < (0)) {
L15:;
									if(priv->timerType == 2U) {
										priv->timerSetAt = (unsigned int )jiffies_Rsmp_0da02d67;
										goto L14;
									}
									else if(priv->timerType < 2U) {
										goto L14;
									}
									else {
										goto L14;
									}
								}
								else {
									goto L15;
								}
							}
							else if((priv->adapter)->flags & 8U < 0) {
								goto L13;
							}
							else {
								goto L14;
							}
						}
						else if(debug & 4 < 0) {
							goto L10;
						}
						else {
							goto L11;
						}
					}
					else if(eoc < 0) {
						goto L9;
					}
					else {
						goto L12;
					}
				}
				else if(ack > 0) {
					goto L8;
				}
				else {
					goto L8;
				}
			}
			else {
				frameSize = (unsigned int )head_list->frameSize;
				ack = ack + 1U;
				if(tmpCStat & 2048 > 0) {
L16:;
					eoc = 1;
L17:;
					if(bbuf > 0) {
L18:;
						skb = dev_alloc_skb(frameSize + 7U);
						if(skb == (0)) {
							printk_Rsmp_1b7d4074("<6>TLAN: Couldn\'t allocate memory for received data.\n");
L19:;
L20:;
							head_list->forward = 0U;
							head_list->cStat = (unsigned short)0;
							tail_list = priv->rxList + priv->rxTail;
							tmp___2 = virt_to_phys((void *)head_list);
							tail_list->forward = (unsigned int )tmp___2;
							priv->rxHead = priv->rxHead + 1U;
							if(priv->rxHead >= 32U) {
								priv->rxHead = 0U;
L21:;
								priv->rxTail = priv->rxTail + 1U;
								if(priv->rxTail >= 32U) {
									priv->rxTail = 0U;
L22:;
									head_list = priv->rxList + priv->rxHead;
									tmpCStat = head_list->cStat;
									goto L4;
								}
								else {
									goto L22;
								}
							}
							else {
								goto L21;
							}
						}
						else if(skb < (0)) {
L23:;
							head_buffer = priv->rxBuffer + priv->rxHead * 1600U;
							skb->dev = dev;
							skb_reserve(skb, 2U);
							tmp = skb_put(skb, frameSize);
							t = (void *)tmp;
							priv->stats.rx_bytes = priv->stats.rx_bytes + (unsigned long )head_list->frameSize;
							memcpy(t, (void const   *)head_buffer, (int )frameSize);
							skb->protocol = eth_type_trans_Rsmp_ef9f8c35(skb, dev);
							netif_rx_Rsmp_4eecbd7e(skb);
							goto L19;
						}
						else {
							goto L23;
						}
					}
					else if(bbuf < 0) {
						goto L18;
					}
					else {
						new_skb = dev_alloc_skb(1607U);
						if(new_skb < (0)) {
L24:;
							skb = (struct sk_buff *)head_list->buffer[9].address;
							skb_trim(skb, frameSize);
							priv->stats.rx_bytes = priv->stats.rx_bytes + (unsigned long )frameSize;
							skb->protocol = eth_type_trans_Rsmp_ef9f8c35(skb, dev);
							netif_rx_Rsmp_4eecbd7e(skb);
							new_skb->dev = dev;
							skb_reserve(new_skb, 2U);
							tmp___0 = skb_put(new_skb, 1600U);
							t = (void *)tmp___0;
							tmp___1 = virt_to_phys(t);
							head_list->buffer[0].address = (unsigned int )tmp___1;
							head_list->buffer[8].address = (unsigned int )t;
							head_list->buffer[9].address = (unsigned int )new_skb;
							goto L20;
						}
						else if(new_skb > (0)) {
							goto L24;
						}
						else {
							printk_Rsmp_1b7d4074("<4>TLAN:  Couldn\'t allocate memory for received data.\n");
							goto L20;
						}
					}
				}
				else if(tmpCStat & 2048 < 0) {
					goto L16;
				}
				else {
					goto L17;
				}
			}
		}
		else if(tmpCStat & 16384 < 0) {
			goto L5;
		}
		else {
			/* END OF PATH at func_TLan_HandleRxEOF@p23#3 */
		}
	}
	else if(debug & 4 < 0) {
		goto L1;
	}
	else {
		goto L2;
	}
}

static u32 TLan_HandleDummy(struct net_device *dev , u16 host_int )
{
	printk_Rsmp_1b7d4074("TLAN:  Test interrupt on %s.\n", dev->name);
	return (1U);
	/* END OF PATH at func_TLan_HandleDummy@p2#1 */
}

static u32 TLan_HandleTxEOC(struct net_device *dev , u16 host_int )
{ TLanPrivateInfo *priv ;
TLanList *head_list ;
u32 ack ;
	priv = (TLanPrivateInfo *)dev->priv;
	ack = 1U;
	host_int = (unsigned short)0;
	if(priv->tlanRev < 48) {
		if(debug & 2 > 0) {
L1:;
			printk_Rsmp_1b7d4074("<7>TLAN: TRANSMIT:  Handling TX EOC (Head=%d Tail=%d) -- IRQ\n", priv->txHead, priv->txTail);
L2:;
			head_list = priv->txList + priv->txHead;
			if((head_list->cStat & 12288) == 12288) {
				netif_stop_queue(dev);
				ack = ack | 2147483648U;
L3:;
				return (ack);
				/* END OF PATH at func_TLan_HandleTxEOC@p16#1 */
			}
			else if((head_list->cStat & 12288) < 12288) {
L4:;
				priv->txInProgress = 0U;
				goto L3;
			}
			else {
				goto L4;
			}
		}
		else if(debug & 2 < 0) {
			goto L1;
		}
		else {
			goto L2;
		}
	}
	else {
		goto L3;
	}
}

static u32 TLan_HandleStatusCheck(struct net_device *dev , u16 host_int )
{ register TLanPrivateInfo *priv ;
register u32 ack ;
register u32 error ;
register u8 net_sts ;
register u32 phy ;
u16 tlphy_ctl ;
u16 tlphy_sts ;
	priv = (TLanPrivateInfo *)dev->priv;
	ack = 1U;
	if(host_int & 8160 > 0) {
L1:;
		netif_stop_queue(dev);
		error = inl((unsigned short )(dev->base_addr + 4UL));
		printk_Rsmp_1b7d4074("TLAN:  %s: Adaptor Error = 0x%x\n", dev->name, error);
		TLan_ReadAndClearStats(dev, 1);
		queue_task(& priv->tlan_tqueue, & tq_immediate_Rsmp_0da0dcd1);
		mark_bh(9);
		netif_wake_queue(dev);
		ack = 0U;
L2:;
		return (ack);
		/* END OF PATH at func_TLan_HandleStatusCheck@p47#1 */
	}
	else if(host_int & 8160 < 0) {
		goto L1;
	}
	else {
		if(debug & 1 > 0) {
L3:;
			printk_Rsmp_1b7d4074("<7>TLAN: %s: Status Check\n", dev->name);
L4:;
			phy = priv->phy[priv->phyNum];
			net_sts = TLan_DioRead8((unsigned short )dev->base_addr, (unsigned short)2);
			if(net_sts > 0) {
L5:;
				TLan_DioWrite8((unsigned short )dev->base_addr, (unsigned short)2, net_sts);
				if(debug & 1 > 0) {
L6:;
					printk_Rsmp_1b7d4074("<7>TLAN: %s:    Net_Sts = %x\n", dev->name, (unsigned int )net_sts);
L7:;
					if(net_sts & 128 > 0) {
L8:;
						if(priv->phyNum == 0U) {
							TLan_MiiReadReg(dev, (unsigned short )phy, (unsigned short)18, & tlphy_sts);
							TLan_MiiReadReg(dev, (unsigned short )phy, (unsigned short)17, & tlphy_ctl);
							if((tlphy_sts & 8192) == 0) {
								if((tlphy_ctl & 16384) == 0) {
									tlphy_ctl = (unsigned short )((int )tlphy_ctl | 16384);
									TLan_MiiWriteReg(dev, (unsigned short )phy, (unsigned short)17, tlphy_ctl);
L9:;
									if(debug > 0) {
										TLan_PhyPrint(dev);
										goto L2;
									}
									else if(debug < 0) {
										TLan_PhyPrint(dev);
										goto L2;
									}
									else {
										goto L2;
									}
								}
								else if((tlphy_ctl & 16384) > 0) {
L10:;
L11:;
									if(tlphy_sts & 8192 > 0) {
L12:;
										if(tlphy_ctl & 16384 > 0) {
											TLan_MiiWriteReg(dev, (unsigned short )phy, (unsigned short)17, tlphy_ctl);
											goto L9;
										}
										else if(tlphy_ctl & 16384 < 0) {
											TLan_MiiWriteReg(dev, (unsigned short )phy, (unsigned short)17, tlphy_ctl);
											goto L9;
										}
										else {
											goto L9;
										}
									}
									else if(tlphy_sts & 8192 < 0) {
										goto L12;
									}
									else {
										goto L9;
									}
								}
								else {
									goto L10;
								}
							}
							else if((tlphy_sts & 8192) > 0) {
								goto L11;
							}
							else {
								goto L11;
							}
						}
						else if(priv->phyNum < 0U) {
							goto L2;
						}
						else {
							goto L2;
						}
					}
					else if(net_sts & 128 < 0) {
						goto L8;
					}
					else {
						goto L2;
					}
				}
				else if(debug & 1 < 0) {
					goto L6;
				}
				else {
					goto L7;
				}
			}
			else if(net_sts < 0) {
				goto L5;
			}
			else {
				goto L7;
			}
		}
		else if(debug & 1 < 0) {
			goto L3;
		}
		else {
			goto L4;
		}
	}
}

static u32 TLan_HandleRxEOC(struct net_device *dev , u16 host_int )
{ TLanPrivateInfo *priv ;
TLanList *head_list ;
u32 ack ;
	priv = (TLanPrivateInfo *)dev->priv;
	ack = 1U;
	if(priv->tlanRev < 48) {
		if(debug & 4 > 0) {
L1:;
			printk_Rsmp_1b7d4074("<7>TLAN: RECEIVE:  Handling RX EOC (Head=%d Tail=%d) -- IRQ\n", priv->rxHead, priv->rxTail);
L2:;
			head_list = priv->rxList + priv->rxHead;
			ack = (ack | 2147483648U) | 524288U;
			priv->rxEocCount = priv->rxEocCount + 1U;
L3:;
			return (ack);
			/* END OF PATH at func_TLan_HandleRxEOC@p12#1 */
		}
		else if(debug & 4 < 0) {
			goto L1;
		}
		else {
			goto L2;
		}
	}
	else {
		goto L3;
	}
}

static void TLan_Timer(unsigned long data )
{ register struct net_device *dev ;
register TLanPrivateInfo *priv ;
register u32 elapsed ;
register unsigned long flags ;
	dev = (struct net_device *)data;
	priv = (TLanPrivateInfo *)dev->priv;
	flags = 0UL;
	priv->timer.function = (void (*)(unsigned long  ))((void *)0);
	if(priv->timerType == 3) {
		TLan_PhyPowerDown(dev);
L1:;
		/* END OF PATH at func_TLan_Timer@p46#1 */
	}
	else if(priv->timerType == 4) {
		TLan_PhyPowerUp(dev);
		goto L1;
	}
	else if(priv->timerType == 5) {
		TLan_PhyReset(dev);
		goto L1;
	}
	else if(priv->timerType == 6) {
		TLan_PhyStartLink(dev);
		goto L1;
	}
	else if(priv->timerType == 7) {
		TLan_PhyFinishAutoNeg(dev);
		goto L1;
	}
	else if(priv->timerType == 8) {
		TLan_FinishReset(dev);
		goto L1;
	}
	else if(priv->timerType == 2) {
		spin_lock_irqsave((void *)(& priv->lock), (void *)flags);
		if(priv->timer.function == (0)) {
			elapsed = (unsigned int )(jiffies_Rsmp_0da02d67 - (unsigned long )priv->timerSetAt);
			if(elapsed >= 10U) {
				TLan_DioWrite8((unsigned short )dev->base_addr, (unsigned short)68, (unsigned char)1);
				spin_unlock_irqrestore((void *)(& priv->lock), (void *)flags);
L2:;
				goto L1;
			}
			else {
				priv->timer.function = & TLan_Timer;
				priv->timer.expires = (unsigned long )(priv->timerSetAt + 10U);
				spin_unlock_irqrestore((void *)(& priv->lock), (void *)flags);
				add_timer_Rsmp_a19eacf8(& priv->timer);
				goto L1;
			}
		}
		else if(priv->timer.function < (0)) {
			spin_unlock_irqrestore((void *)(& priv->lock), (void *)flags);
			goto L2;
		}
		else {
			spin_unlock_irqrestore((void *)(& priv->lock), (void *)flags);
			goto L2;
		}
	}
	else if(priv->timerType < 2) {
L3:;
		goto L1;
	}
	else if(priv->timerType > 2 && priv->timerType < 3) {
		goto L3;
	}
	else if(priv->timerType > 3 && priv->timerType < 4) {
		goto L3;
	}
	else if(priv->timerType > 4 && priv->timerType < 5) {
		goto L3;
	}
	else if(priv->timerType > 5 && priv->timerType < 6) {
		goto L3;
	}
	else if(priv->timerType > 6 && priv->timerType < 7) {
		goto L3;
	}
	else if(priv->timerType > 7 && priv->timerType < 8) {
		goto L3;
	}
	else {
		goto L3;
	}
}

static void TLan_FinishReset(struct net_device *dev )
{ register TLanPrivateInfo *priv ;
register u8 data ;
register u32 phy ;
register u8 sio ;
u16 status ;
u16 partner ;
u16 tlphy_ctl ;
u16 tlphy_par ;
u16 tlphy_id1 ;
u16 tlphy_id2 ;
register int i ;
char const   *tmp ;
char const   *tmp___0 ;
char const   *tmp___1 ;
char const   *tmp___2 ;
	priv = (TLanPrivateInfo *)dev->priv;
	priv = (TLanPrivateInfo *)dev->priv;
	phy = priv->phy[priv->phyNum];
	data = (unsigned char)192;
	if(priv->tlanFullDuplex > 0) {
L1:;
		data = (unsigned char )((int )data | 4);
L2:;
		TLan_DioWrite8((unsigned short )dev->base_addr, (unsigned short)0, data);
		data = (unsigned char)48;
		if(priv->phyNum == 0U) {
			data = (unsigned char )((int )data | 128);
L3:;
			TLan_DioWrite8((unsigned short )dev->base_addr, (unsigned short)3, data);
			TLan_DioWrite16((unsigned short )dev->base_addr, (unsigned short)70, (unsigned short)1543);
			TLan_MiiReadReg(dev, (unsigned short )phy, (unsigned short)2, & tlphy_id1);
			TLan_MiiReadReg(dev, (unsigned short )phy, (unsigned short)3, & tlphy_id2);
			if((priv->adapter)->flags & 1U > 0) {
L4:;
				status = (unsigned short)4;
				printk_Rsmp_1b7d4074("TLAN:  %s: Link forced.\n", dev->name);
L5:;
				if(priv->phyNum == 0U) {
					TLan_MiiReadReg(dev, (unsigned short )phy, (unsigned short)17, & tlphy_ctl);
					tlphy_ctl = (unsigned short )((int )tlphy_ctl | 2);
					TLan_MiiWriteReg(dev, (unsigned short )phy, (unsigned short)17, tlphy_ctl);
					sio = TLan_DioRead8((unsigned short )dev->base_addr, (unsigned short)1);
					sio = (unsigned char )((int )sio | 128);
					TLan_DioWrite8((unsigned short )dev->base_addr, (unsigned short)1, sio);
L6:;
					if(status & 4 > 0) {
L7:;
						TLan_SetMac(dev, 0, (char *)(dev->dev_addr));
						priv->phyOnline = 1U;
						if(debug >= 1) {
							if(debug < 16) {
L8:;
L9:;
								/* END OF PATH at func_TLan_FinishReset@p103#1 */
							}
							else if(debug > 16) {
								goto L8;
							}
							else {
								goto L9;
							}
						}
						else {
							goto L9;
						}
					}
					else if(status & 4 < 0) {
						goto L7;
					}
					else {
						printk_Rsmp_1b7d4074("TLAN: %s: Link inactive, will retry in 10 secs...\n", dev->name);
						TLan_SetTimer(dev, 1000U, 8U);
						/* END OF PATH at func_TLan_FinishReset@p101#1 */
					}
				}
				else if(priv->phyNum < 0U) {
					goto L6;
				}
				else {
					goto L6;
				}
			}
			else if((priv->adapter)->flags & 1U < 0) {
				goto L4;
			}
			else {
				if(priv->aui > 0) {
L10:;
					status = (unsigned short)4;
					printk_Rsmp_1b7d4074("TLAN:  %s: Link forced.\n", dev->name);
					goto L5;
				}
				else if(priv->aui < 0) {
					goto L10;
				}
				else {
					TLan_MiiReadReg(dev, (unsigned short )phy, (unsigned short)1, & status);
					udelay(1000UL);
					TLan_MiiReadReg(dev, (unsigned short )phy, (unsigned short)1, & status);
					if(status & 4 > 0) {
L11:;
						if(tlphy_id1 == 8192) {
							if(tlphy_id2 == 23553) {
								TLan_MiiReadReg(dev, (unsigned short )phy, (unsigned short)5, & partner);
								TLan_MiiReadReg(dev, (unsigned short )phy, (unsigned short)25, & tlphy_par);
								printk_Rsmp_1b7d4074("TLAN: %s: Link active with ", dev->name);
								if((tlphy_par & 1024) == 0) {
									if(tlphy_par & 128 > 0) {
L12:;
										tmp = "Full";
L13:;
										if(tlphy_par & 64 > 0) {
L14:;
											tmp___0 = "";
L15:;
											printk_Rsmp_1b7d4074("forced 10%sMbps %s-Duplex\n", tmp___0, tmp);
L16:;
											TLan_DioWrite8((unsigned short )dev->base_addr, (unsigned short)68, (unsigned char)1);
											goto L5;
										}
										else if(tlphy_par & 64 < 0) {
											goto L14;
										}
										else {
											tmp___0 = "0";
											goto L15;
										}
									}
									else if(tlphy_par & 128 < 0) {
										goto L12;
									}
									else {
										tmp = "Half";
										goto L13;
									}
								}
								else if((tlphy_par & 1024) > 0) {
L17:;
									if(tlphy_par & 128 > 0) {
L18:;
										tmp___1 = "Full";
L19:;
										if(tlphy_par & 64 > 0) {
L20:;
											tmp___2 = "";
L21:;
											printk_Rsmp_1b7d4074("AutoNegotiation enabled, at 10%sMbps %s-Duplex\n", tmp___2, tmp___1);
											printk_Rsmp_1b7d4074("TLAN: Partner capability: ");
											if(partner & (1 << i) > 0) {
L22:;
												printk_Rsmp_1b7d4074("%s", media[i - 5]);
L23:;
												printk_Rsmp_1b7d4074("\n");
												goto L16;
											}
											else if(partner & (1 << i) < 0) {
												goto L22;
											}
											else {
												goto L23;
											}
										}
										else if(tlphy_par & 64 < 0) {
											goto L20;
										}
										else {
											tmp___2 = "0";
											goto L21;
										}
									}
									else if(tlphy_par & 128 < 0) {
										goto L18;
									}
									else {
										tmp___1 = "Half";
										goto L19;
									}
								}
								else {
									goto L17;
								}
							}
							else if(tlphy_id2 < 23553) {
L24:;
L25:;
								if(status & 4 > 0) {
L26:;
									printk_Rsmp_1b7d4074("TLAN: %s: Link active\n", dev->name);
									TLan_DioWrite8((unsigned short )dev->base_addr, (unsigned short)68, (unsigned char)1);
									goto L5;
								}
								else if(status & 4 < 0) {
									goto L26;
								}
								else {
									goto L5;
								}
							}
							else {
								goto L24;
							}
						}
						else if(tlphy_id1 < 8192) {
L27:;
							goto L25;
						}
						else {
							goto L27;
						}
					}
					else if(status & 4 < 0) {
						goto L11;
					}
					else {
						goto L25;
					}
				}
			}
		}
		else if(priv->phyNum < 0U) {
			goto L3;
		}
		else {
			goto L3;
		}
	}
	else if(priv->tlanFullDuplex < 0) {
		goto L1;
	}
	else {
		goto L2;
	}
}

static void TLan_SetMac(struct net_device *dev , int areg , char *mac )
{ register int i ;
	areg = areg * 6;
	if(mac < (0)) {
L1:;
		TLan_DioWrite8((unsigned short )dev->base_addr, (unsigned short )((16 + areg) + i), (unsigned char )*(mac + i));
L2:;
		/* END OF PATH at func_TLan_SetMac@p7#1 */
	}
	else if(mac > (0)) {
		goto L1;
	}
	else {
		TLan_DioWrite8((unsigned short )dev->base_addr, (unsigned short )((16 + areg) + i), (unsigned char)0);
		goto L2;
	}
}

static void TLan_PhyDetect(struct net_device *dev )
{ register TLanPrivateInfo *priv ;
u16 control ;
u16 hi ;
u16 lo ;
register u32 phy ;
	priv = (TLanPrivateInfo *)dev->priv;
	priv = (TLanPrivateInfo *)dev->priv;
	if((priv->adapter)->flags & 1U > 0) {
L1:;
		priv->phyNum = 65535U;
		/* END OF PATH at func_TLan_PhyDetect@p10#1 */
	}
	else if((priv->adapter)->flags & 1U < 0) {
		goto L1;
	}
	else {
		TLan_MiiReadReg(dev, (unsigned short)31, (unsigned short)2, & hi);
		if(hi < 65535) {
L2:;
			priv->phy[0] = 31U;
L3:;
			priv->phy[1] = 32U;
			TLan_MiiReadReg(dev, (unsigned short )phy, (unsigned short)0, & control);
			TLan_MiiReadReg(dev, (unsigned short )phy, (unsigned short)2, & hi);
			TLan_MiiReadReg(dev, (unsigned short )phy, (unsigned short)3, & lo);
			if(control < 65535) {
L4:;
L5:;
				if(debug & 1 > 0) {
L6:;
					printk_Rsmp_1b7d4074("<7>TLAN: PHY found at %02x %04x %04x %04x\n", phy, control, hi, lo);
L7:;
					if(priv->phy[1] == 32U) {
						if(phy < 31U) {
L8:;
							priv->phy[1] = phy;
L9:;
							if(priv->phy[1] < 32U) {
L10:;
								priv->phyNum = 1U;
L11:;
								/* END OF PATH at func_TLan_PhyDetect@p41#1 */
							}
							else if(priv->phy[1] > 32U) {
								goto L10;
							}
							else {
								if(priv->phy[0] < 32U) {
L12:;
									priv->phyNum = 0U;
									goto L11;
								}
								else if(priv->phy[0] > 32U) {
									goto L12;
								}
								else {
									printk_Rsmp_1b7d4074("TLAN:  Cannot initialize device, no PHY was found!\n");
									goto L11;
								}
							}
						}
						else if(phy > 31U) {
							goto L8;
						}
						else {
							goto L9;
						}
					}
					else if(priv->phy[1] < 32U) {
						goto L9;
					}
					else {
						goto L9;
					}
				}
				else if(debug & 1 < 0) {
					goto L6;
				}
				else {
					goto L7;
				}
			}
			else if(control > 65535) {
				goto L4;
			}
			else {
				if(hi < 65535) {
L13:;
					goto L5;
				}
				else if(hi > 65535) {
					goto L13;
				}
				else {
					if(lo < 65535) {
						goto L5;
					}
					else if(lo > 65535) {
						goto L5;
					}
					else {
						goto L9;
					}
				}
			}
		}
		else if(hi > 65535) {
			goto L2;
		}
		else {
			priv->phy[0] = 32U;
			goto L3;
		}
	}
}

static void TLan_PhyPowerDown(struct net_device *dev )
{ TLanPrivateInfo *priv ;
u16 value ;
	priv = (TLanPrivateInfo *)dev->priv;
	if(debug & 1 > 0) {
L1:;
		printk_Rsmp_1b7d4074("<7>TLAN: %s: Powering down PHY(s).\n", dev->name);
L2:;
		value = (unsigned short)19456;
		TLan_MiiSync((unsigned short )dev->base_addr);
		TLan_MiiWriteReg(dev, (unsigned short )priv->phy[priv->phyNum], (unsigned short)0, value);
		if(priv->phyNum == 0U) {
			if(priv->phy[1] < 32U) {
L3:;
				if(((priv->adapter)->flags & 4U) == 0) {
					TLan_MiiSync((unsigned short )dev->base_addr);
					TLan_MiiWriteReg(dev, (unsigned short )priv->phy[1], (unsigned short)0, value);
					TLan_SetTimer(dev, 5U, 4U);
L4:;
					/* END OF PATH at func_TLan_PhyPowerDown@p15#1 */
				}
				else if(((priv->adapter)->flags & 4U) > 0) {
					TLan_SetTimer(dev, 5U, 4U);
					goto L4;
				}
				else {
					TLan_SetTimer(dev, 5U, 4U);
					goto L4;
				}
			}
			else if(priv->phy[1] > 32U) {
				goto L3;
			}
			else {
				TLan_SetTimer(dev, 5U, 4U);
				goto L4;
			}
		}
		else if(priv->phyNum < 0U) {
			TLan_SetTimer(dev, 5U, 4U);
			goto L4;
		}
		else {
			TLan_SetTimer(dev, 5U, 4U);
			goto L4;
		}
	}
	else if(debug & 1 < 0) {
		goto L1;
	}
	else {
		goto L2;
	}
}

static void TLan_PhyPowerUp(struct net_device *dev )
{ TLanPrivateInfo *priv ;
u16 value ;
	priv = (TLanPrivateInfo *)dev->priv;
	if(debug & 1 > 0) {
L1:;
		printk_Rsmp_1b7d4074("<7>TLAN: %s: Powering up PHY.\n", dev->name);
L2:;
		TLan_MiiSync((unsigned short )dev->base_addr);
		value = (unsigned short)16384;
		TLan_MiiWriteReg(dev, (unsigned short )priv->phy[priv->phyNum], (unsigned short)0, value);
		TLan_MiiSync((unsigned short )dev->base_addr);
		TLan_SetTimer(dev, 5U, 5U);
		/* END OF PATH at func_TLan_PhyPowerUp@p11#1 */
	}
	else if(debug & 1 < 0) {
		goto L1;
	}
	else {
		goto L2;
	}
}

static void TLan_PhyReset(struct net_device *dev )
{ register TLanPrivateInfo *priv ;
register u16 phy ;
u16 value ;
	priv = (TLanPrivateInfo *)dev->priv;
	phy = (unsigned short )priv->phy[priv->phyNum];
	if(debug & 1 > 0) {
L1:;
		printk_Rsmp_1b7d4074("<7>TLAN: %s: Reseting PHY.\n", dev->name);
L2:;
		TLan_MiiSync((unsigned short )dev->base_addr);
		value = (unsigned short)49152;
		TLan_MiiWriteReg(dev, phy, (unsigned short)0, value);
		TLan_MiiReadReg(dev, phy, (unsigned short)0, & value);
L3:;
L4:;
		if(value & 32768 == 0) {
L5:;
			TLan_SetTimer(dev, 5U, 6U);
			/* END OF PATH at func_TLan_PhyReset@p17#1 */
		}
		else if(value & 32768 > 0) {
			TLan_MiiReadReg(dev, phy, (unsigned short)0, & value);
			goto L4;
		}
		else {
			TLan_MiiReadReg(dev, phy, (unsigned short)0, & value);
			/* END OF PATH at func_TLan_PhyReset@p14#2 */
		}
	}
	else if(debug & 1 < 0) {
		goto L1;
	}
	else {
		goto L2;
	}
}

static void TLan_PhyStartLink(struct net_device *dev )
{ register TLanPrivateInfo *priv ;
u16 ability ;
register u16 control ;
register u16 data ;
register u16 phy ;
u16 status ;
u16 tctl ;
	priv = (TLanPrivateInfo *)dev->priv;
	phy = (unsigned short )priv->phy[priv->phyNum];
	if(debug & 1 > 0) {
L1:;
		printk_Rsmp_1b7d4074("<7>TLAN: %s: Trying to activate link.\n", dev->name);
		TLan_MiiReadReg(dev, phy, (unsigned short)1, & status);
		TLan_MiiReadReg(dev, phy, (unsigned short)1, & ability);
L2:;
		if(status & 8 > 0) {
L3:;
			if(priv->aui == 0) {
				ability = (unsigned short )((int )status >> 11);
				if(priv->speed == 10U) {
					if(priv->duplex == 1U) {
						TLan_MiiWriteReg(dev, phy, (unsigned short)0, (unsigned short)0);
L4:;
						if(priv->aui > 0) {
L5:;
							if(priv->phyNum < 0U) {
L6:;
								priv->phyNum = 0U;
								data = (unsigned short)1664;
								TLan_DioWrite16((unsigned short )dev->base_addr, (unsigned short)4, data);
								TLan_SetTimer(dev, 4U, 3U);
								/* END OF PATH at func_TLan_PhyStartLink@p60#1 */
							}
							else if(priv->phyNum > 0U) {
								goto L6;
							}
							else {
L7:;
								if(priv->phyNum == 0U) {
									TLan_MiiReadReg(dev, phy, (unsigned short)17, & tctl);
									if(priv->aui > 0) {
L8:;
										tctl = (unsigned short )((int )tctl | 8192);
										TLan_MiiWriteReg(dev, phy, (unsigned short)17, tctl);
										TLan_SetTimer(dev, 400U, 8U);
L9:;
										/* END OF PATH at func_TLan_PhyStartLink@p81#1 */
									}
									else if(priv->aui < 0) {
										goto L8;
									}
									else {
										tctl = (unsigned short )((int )tctl & 8192);
										control = (unsigned short)0;
										if(priv->duplex == 2U) {
											control = (unsigned short )((int )control | 256);
											priv->tlanFullDuplex = (unsigned char)1;
L10:;
											if(priv->speed == 100U) {
												control = (unsigned short )((int )control | 8192);
												TLan_MiiWriteReg(dev, phy, (unsigned short)0, control);
												TLan_MiiWriteReg(dev, phy, (unsigned short)17, tctl);
												TLan_SetTimer(dev, 400U, 8U);
												goto L9;
											}
											else if(priv->speed < 100U) {
												TLan_MiiWriteReg(dev, phy, (unsigned short)0, control);
												TLan_MiiWriteReg(dev, phy, (unsigned short)17, tctl);
												TLan_SetTimer(dev, 400U, 8U);
												goto L9;
											}
											else {
												TLan_MiiWriteReg(dev, phy, (unsigned short)0, control);
												TLan_MiiWriteReg(dev, phy, (unsigned short)17, tctl);
												TLan_SetTimer(dev, 400U, 8U);
												goto L9;
											}
										}
										else if(priv->duplex < 2U) {
											goto L10;
										}
										else {
											goto L10;
										}
									}
								}
								else if(priv->phyNum < 0U) {
									TLan_SetTimer(dev, 400U, 8U);
									goto L9;
								}
								else {
									TLan_SetTimer(dev, 400U, 8U);
									goto L9;
								}
							}
						}
						else if(priv->aui < 0) {
							goto L5;
						}
						else {
							goto L7;
						}
					}
					else if(priv->duplex < 1U) {
L11:;
L12:;
						if(priv->speed == 10U) {
							if(priv->duplex == 2U) {
								priv->tlanFullDuplex = (unsigned char)1;
								TLan_MiiWriteReg(dev, phy, (unsigned short)0, (unsigned short)256);
								goto L4;
							}
							else if(priv->duplex < 2U) {
L13:;
L14:;
								if(priv->speed == 100U) {
									if(priv->duplex == 1U) {
										TLan_MiiWriteReg(dev, phy, (unsigned short)0, (unsigned short)8192);
										goto L4;
									}
									else if(priv->duplex < 1U) {
L15:;
L16:;
										if(priv->speed == 100U) {
											if(priv->duplex == 2U) {
												priv->tlanFullDuplex = (unsigned char)1;
												TLan_MiiWriteReg(dev, phy, (unsigned short)0, (unsigned short)8448);
												goto L4;
											}
											else if(priv->duplex < 2U) {
L17:;
L18:;
												TLan_MiiWriteReg(dev, phy, (unsigned short)4, (unsigned short )(((int )ability << 5) | 1));
												TLan_MiiWriteReg(dev, phy, (unsigned short)0, (unsigned short)4096);
												TLan_MiiWriteReg(dev, phy, (unsigned short)0, (unsigned short)4608);
												printk_Rsmp_1b7d4074("TLAN: %s: Starting autonegotiation.\n", dev->name);
												TLan_SetTimer(dev, 200U, 7U);
												/* END OF PATH at func_TLan_PhyStartLink@p52#1 */
											}
											else {
												goto L17;
											}
										}
										else if(priv->speed < 100U) {
											goto L18;
										}
										else {
											goto L18;
										}
									}
									else {
										goto L15;
									}
								}
								else if(priv->speed < 100U) {
									goto L16;
								}
								else {
									goto L16;
								}
							}
							else {
								goto L13;
							}
						}
						else if(priv->speed < 10U) {
							goto L14;
						}
						else {
							goto L14;
						}
					}
					else {
						goto L11;
					}
				}
				else if(priv->speed < 10U) {
					goto L12;
				}
				else {
					goto L12;
				}
			}
			else if(priv->aui > 0) {
				goto L4;
			}
			else {
				goto L4;
			}
		}
		else if(status & 8 < 0) {
			goto L3;
		}
		else {
			goto L4;
		}
	}
	else if(debug & 1 < 0) {
		goto L1;
	}
	else {
		TLan_MiiReadReg(dev, phy, (unsigned short)1, & status);
		TLan_MiiReadReg(dev, phy, (unsigned short)1, & ability);
		goto L2;
	}
}

static void TLan_PhyFinishAutoNeg(struct net_device *dev )
{ register TLanPrivateInfo *priv ;
u16 an_adv ;
u16 an_lpa ;
register u16 data ;
register u16 mode ;
register u16 phy ;
u16 status ;
	priv = (TLanPrivateInfo *)dev->priv;
	phy = (unsigned short )priv->phy[priv->phyNum];
	TLan_MiiReadReg(dev, phy, (unsigned short)1, & status);
	udelay(1000UL);
	TLan_MiiReadReg(dev, phy, (unsigned short)1, & status);
	if((status & 32) == 0) {
		if(priv->neg_be_verbose == 0) {
			priv->neg_be_verbose = (u8 )((int )priv->neg_be_verbose + 1);
			printk_Rsmp_1b7d4074("<6>TLAN:  Giving autonegotiation more time.\n");
			printk_Rsmp_1b7d4074("<6>TLAN:  Please check that your adapter has\n");
			printk_Rsmp_1b7d4074("<6>TLAN:  been properly connected to a HUB or Switch.\n");
			printk_Rsmp_1b7d4074("<6>TLAN:  Trying to establish link in the background...\n");
			TLan_SetTimer(dev, 800U, 7U);
L1:;
			/* END OF PATH at func_TLan_PhyFinishAutoNeg@p24#1 */
		}
		else if(priv->neg_be_verbose > 0) {
L2:;
			priv->neg_be_verbose = (u8 )((int )priv->neg_be_verbose + 1);
			TLan_SetTimer(dev, 800U, 7U);
			goto L1;
		}
		else {
			goto L2;
		}
	}
	else if((status & 32) > 0) {
L3:;
		printk_Rsmp_1b7d4074("TLAN: %s: Autonegotiation complete.\n", dev->name);
		TLan_MiiReadReg(dev, phy, (unsigned short)4, & an_adv);
		TLan_MiiReadReg(dev, phy, (unsigned short)5, & an_lpa);
		mode = (unsigned short )(((int )an_adv & (int )an_lpa) & 992);
		if(mode & 256 > 0) {
L4:;
			priv->tlanFullDuplex = (unsigned char)1;
L5:;
			if((mode & 384) == 0) {
				if((priv->adapter)->flags & 4U > 0) {
L6:;
					if(priv->phyNum < 0U) {
L7:;
						priv->phyNum = 0U;
						data = (unsigned short)1664;
						TLan_DioWrite16((unsigned short )dev->base_addr, (unsigned short)4, data);
						TLan_SetTimer(dev, 40U, 3U);
						/* END OF PATH at func_TLan_PhyFinishAutoNeg@p43#1 */
					}
					else if(priv->phyNum > 0U) {
						goto L7;
					}
					else {
L8:;
						if(priv->phyNum == 0U) {
							if(priv->duplex == 2U) {
								TLan_MiiWriteReg(dev, phy, (unsigned short)0, (unsigned short)4352);
								printk_Rsmp_1b7d4074("TLAN:  Starting internal PHY with FULL-DUPLEX\n");
								TLan_SetTimer(dev, 10U, 8U);
L9:;
								/* END OF PATH at func_TLan_PhyFinishAutoNeg@p57#1 */
							}
							else if(priv->duplex < 2U) {
L10:;
								if((an_adv & an_lpa) & 64 > 0) {
									TLan_MiiWriteReg(dev, phy, (unsigned short)0, (unsigned short)4352);
L11:;
									printk_Rsmp_1b7d4074("TLAN:  Starting internal PHY with FULL-DUPLEX\n");
									TLan_SetTimer(dev, 10U, 8U);
									goto L9;
								}
								else if((an_adv & an_lpa) & 64 < 0) {
									TLan_MiiWriteReg(dev, phy, (unsigned short)0, (unsigned short)4352);
									goto L11;
								}
								else {
									TLan_MiiWriteReg(dev, phy, (unsigned short)0, (unsigned short)4096);
									printk_Rsmp_1b7d4074("TLAN:  Starting internal PHY with HALF-DUPLEX\n");
									TLan_SetTimer(dev, 10U, 8U);
									goto L9;
								}
							}
							else {
								goto L10;
							}
						}
						else if(priv->phyNum < 0U) {
							TLan_SetTimer(dev, 10U, 8U);
							goto L9;
						}
						else {
							TLan_SetTimer(dev, 10U, 8U);
							goto L9;
						}
					}
				}
				else if((priv->adapter)->flags & 4U < 0) {
					goto L6;
				}
				else {
					goto L8;
				}
			}
			else if((mode & 384) > 0) {
				goto L8;
			}
			else {
				goto L8;
			}
		}
		else if(mode & 256 < 0) {
			goto L4;
		}
		else {
			if((mode & 128) == 0) {
				if(mode & 64 > 0) {
L12:;
					priv->tlanFullDuplex = (unsigned char)1;
					goto L5;
				}
				else if(mode & 64 < 0) {
					goto L12;
				}
				else {
					goto L5;
				}
			}
			else if((mode & 128) > 0) {
				goto L5;
			}
			else {
				goto L5;
			}
		}
	}
	else {
		goto L3;
	}
}

static void TLan_MiiSendData(u16 base_port , u32 data , unsigned int num_bits )
{ register u16 sio ;
register u32 i ;
register int TRACER_NONDET ;
unsigned char tmp ;
unsigned char tmp___0 ;
	if(num_bits == 0U) {
		/* END OF PATH at func_TLan_MiiSendData@p7#1 */
	}
	else if(num_bits < 0U) {
L1:;
		outw((unsigned short)1, (unsigned short )((int )base_port + 8));
		sio = (unsigned short )(((int )base_port + 12) + 1);
L2:;
L3:;
		if(TRACER_NONDET == 0) {
L4:;
			/* END OF PATH at func_TLan_MiiSendData@p18#1 */
		}
		else if(TRACER_NONDET > 0) {
L5:;
			tmp = inb_p(sio);
			if(data & i > 0) {
L6:;
L7:;
				tmp___0 = inb_p(sio);
				goto L3;
			}
			else if(data & i < 0) {
				goto L6;
			}
			else {
				goto L7;
			}
		}
		else {
			goto L5;
		}
	}
	else {
		goto L1;
	}
}

static void TLan_MiiSync(u16 base_port )
{ int i ;
u16 sio ;
	outw((unsigned short)1, (unsigned short )((int )base_port + 8));
	sio = (unsigned short )(((int )base_port + 12) + 1);
	/* END OF PATH at func_TLan_MiiSync@p5#1 */
}

static void TLan_EeSendStart(u16 io_base )
{ u16 sio ;
	outw((unsigned short)1, (unsigned short )((int )io_base + 8));
	sio = (unsigned short )(((int )io_base + 12) + 1);
	/* END OF PATH at func_TLan_EeSendStart@p4#1 */
}

static int TLan_EeSendByte(u16 io_base , u8 data , int stop )
{ register int err ;
register u8 place ;
register u16 sio ;
unsigned char tmp ;
	outw((unsigned short)1, (unsigned short )((int )io_base + 8));
	sio = (unsigned short )(((int )io_base + 12) + 1);
	if(place & data > 0) {
L1:;
L2:;
		tmp = inb_p(sio);
		err = (int )tmp & 16;
		if(err == 0) {
			if(stop > 0) {
L3:;
L4:;
				return (err);
				/* END OF PATH at func_TLan_EeSendByte@p14#1 */
			}
			else if(stop < 0) {
				goto L3;
			}
			else {
				goto L4;
			}
		}
		else if(err > 0) {
			goto L4;
		}
		else {
			goto L4;
		}
	}
	else if(place & data < 0) {
		goto L1;
	}
	else {
		goto L2;
	}
}

static void TLan_EeReceiveByte(u16 io_base , u8 *data , int stop )
{ register u8 place ;
register u16 sio ;
register int temp_1 ;
unsigned char tmp ;
	outw((unsigned short)1, (unsigned short )((int )io_base + 8));
	sio = (unsigned short )(((int )io_base + 12) + 1);
	*data = (unsigned char)0;
	tmp = inb_p(sio);
	temp_1 = (int )tmp;
	if(temp_1 & 16 > 0) {
L1:;
		*data = (unsigned char )((int )*data | (int )place);
L2:;
		if(stop == 0) {
L3:;
			/* END OF PATH at func_TLan_EeReceiveByte@p14#1 */
		}
		else if(stop > 0) {
			goto L3;
		}
		else {
			goto L3;
		}
	}
	else if(temp_1 & 16 < 0) {
		goto L1;
	}
	else {
		goto L2;
	}
}

static int TLan_EeReadByte(struct net_device *dev , u8 ee_addr , u8 *data )
{ register int err ;
register TLanPrivateInfo *priv ;
register unsigned long flags ;
register int ret ;
	priv = (TLanPrivateInfo *)dev->priv;
	flags = 0UL;
	ret = 0;
	spin_lock_irqsave((void *)(& priv->lock), (void *)flags);
	TLan_EeSendStart((unsigned short )dev->base_addr);
	err = TLan_EeSendByte((unsigned short )dev->base_addr, (unsigned char)160, 0);
	if(err > 0) {
L1:;
		ret = 1;
		spin_unlock_irqrestore((void *)(& priv->lock), (void *)flags);
		return (ret);
		/* END OF PATH at func_TLan_EeReadByte@p15#1 */
	}
	else if(err < 0) {
		goto L1;
	}
	else {
		err = TLan_EeSendByte((unsigned short )dev->base_addr, ee_addr, 0);
		if(err > 0) {
L2:;
			ret = 2;
			spin_unlock_irqrestore((void *)(& priv->lock), (void *)flags);
			return (ret);
			/* END OF PATH at func_TLan_EeReadByte@p22#1 */
		}
		else if(err < 0) {
			goto L2;
		}
		else {
			TLan_EeSendStart((unsigned short )dev->base_addr);
			err = TLan_EeSendByte((unsigned short )dev->base_addr, (unsigned char)161, 0);
			if(err > 0) {
L3:;
				ret = 3;
				spin_unlock_irqrestore((void *)(& priv->lock), (void *)flags);
				return (ret);
				/* END OF PATH at func_TLan_EeReadByte@p30#1 */
			}
			else if(err < 0) {
				goto L3;
			}
			else {
				TLan_EeReceiveByte((unsigned short )dev->base_addr, data, 1);
				spin_unlock_irqrestore((void *)(& priv->lock), (void *)flags);
				return (ret);
				/* END OF PATH at func_TLan_EeReadByte@p34#1 */
			}
		}
	}
}

static void TLan_SetTimer(struct net_device *dev , u32 ticks , u32 type )
{ register TLanPrivateInfo *priv ;
register unsigned long flags ;
	priv = (TLanPrivateInfo *)dev->priv;
	flags = 0UL;
	if(in_irq == 0) {
		spin_lock_irqsave((void *)(& priv->lock), (void *)flags);
		if(priv->timer.function < (0)) {
L1:;
			if(priv->timerType < 2U) {
L2:;
				if(in_irq == 0) {
					spin_unlock_irqrestore((void *)(& priv->lock), (void *)flags);
L3:;
					/* END OF PATH at func_TLan_SetTimer@p11#1 */
				}
				else if(in_irq > 0) {
					/* FALSE PATH */ 
				}
				else {
					/* FALSE PATH */ 
				}
			}
			else if(priv->timerType > 2U) {
				goto L2;
			}
			else {
L4:;
				if(in_irq == 0) {
					spin_unlock_irqrestore((void *)(& priv->lock), (void *)flags);
L5:;
					priv->timer.data = (unsigned long )dev;
					priv->timerSetAt = (unsigned int )jiffies_Rsmp_0da02d67;
					priv->timerType = type;
					mod_timer_Rsmp_1f13d309(& priv->timer, jiffies_Rsmp_0da02d67 + (unsigned long )ticks);
					/* END OF PATH at func_TLan_SetTimer@p19#1 */
				}
				else if(in_irq > 0) {
					/* FALSE PATH */ 
				}
				else {
					/* FALSE PATH */ 
				}
			}
		}
		else if(priv->timer.function > (0)) {
			goto L1;
		}
		else {
			goto L4;
		}
	}
	else if(in_irq > 0) {
		if(priv->timer.function < (0)) {
L6:;
			if(priv->timerType < 2U) {
L7:;
				if(in_irq > 0) {
					goto L3;
				}
				else if(in_irq == 0) {
					/* FALSE PATH */ 
				}
				else {
					/* FALSE PATH */ 
				}
			}
			else if(priv->timerType > 2U) {
				goto L7;
			}
			else {
L8:;
				if(in_irq > 0) {
					goto L5;
				}
				else if(in_irq == 0) {
					/* FALSE PATH */ 
				}
				else {
					/* FALSE PATH */ 
				}
			}
		}
		else if(priv->timer.function > (0)) {
			goto L6;
		}
		else {
			goto L8;
		}
	}
	else {
		if(priv->timer.function < (0)) {
L9:;
			if(priv->timerType < 2U) {
L10:;
				if(in_irq < 0) {
					goto L3;
				}
				else if(in_irq == 0) {
					/* FALSE PATH */ 
				}
				else {
					/* FALSE PATH */ 
				}
			}
			else if(priv->timerType > 2U) {
				goto L10;
			}
			else {
L11:;
				if(in_irq < 0) {
					goto L5;
				}
				else if(in_irq == 0) {
					/* FALSE PATH */ 
				}
				else {
					/* FALSE PATH */ 
				}
			}
		}
		else if(priv->timer.function > (0)) {
			goto L9;
		}
		else {
			goto L11;
		}
	}
}

static void tlan_remove_one(struct pci_dev *pdev )
{ register struct net_device *dev ;
register TLanPrivateInfo *priv ;
void *tmp ;
	tmp = pci_get_drvdata(pdev);
	dev = (struct net_device *)tmp;
	priv = (TLanPrivateInfo *)dev->priv;
	unregister_netdev_Rsmp_99639e9a(dev);
	if(priv->dmaStorage > 0) {
L1:;
		kfree_Rsmp_037a0cba((void const   *)priv->dmaStorage);
L2:;
		__release_region_Rsmp_d49501d4(& ioport_resource_Rsmp_865ebccd, dev->base_addr, 16UL);
		kfree_Rsmp_037a0cba((void const   *)dev);
		pci_set_drvdata(pdev, (void *)0);
		/* END OF PATH at func_tlan_remove_one@p13#1 */
	}
	else if(priv->dmaStorage < 0) {
		goto L1;
	}
	else {
		goto L2;
	}
}

void *__constant_c_and_count_memset(void *s , unsigned long pattern , size_t count )
{
	return ((void *)0);
	/* END OF PATH at func___constant_c_and_count_memset@p1#1 */
}

void *__constant_c_memset(void *s , unsigned long c , size_t count )
{
	return ((void *)0);
	/* END OF PATH at func___constant_c_memset@p1#1 */
}

void *__memset_generic(void *s , char c , size_t count )
{
	return ((void *)0);
	/* END OF PATH at func___memset_generic@p1#1 */
}

int __builtin_constant_p(int c )
{ int res__ ;
	return (res__);
	/* END OF PATH at func___builtin_constant_p@p2#1 */
}

void init_timer(struct timer_list *timer )
{
	/* END OF PATH at func_init_timer@p1#1 */
}

static int tlan_probe(void)
{ register int pad_allocated ;
register int temp_1 ;
register int temp_2 ;
register int temp_3 ;
register int temp_4 ;
void *tmp ;
char const   *tmp___0 ;
	printk_Rsmp_1b7d4074("<6>%s", tlan_banner);
	tmp = kmalloc_Rsmp_93d4cfe6(64, 240);
	TLanPadBuffer = (u8 *)tmp;
	if(TLanPadBuffer == (0)) {
		printk_Rsmp_1b7d4074("<3>TLAN: Could not allocate memory for pad buffer.\n");
		return (-12);
		/* END OF PATH at func_tlan_probe@p13#1 */
	}
	else if(TLanPadBuffer < (0)) {
L1:;
		temp_1 = 1;
		if(temp_1 > 0) {
			temp_2 = 1;
			if(temp_2 > 0) {
				__constant_c_and_count_memset((void *)TLanPadBuffer, 0UL, 64);
				pad_allocated = 1;
				if(debug & 16 > 0) {
L2:;
					printk_Rsmp_1b7d4074("<7>TLAN: Starting PCI Probe....\n");
L3:;
					pci_module_init(& tlan_driver);
					if(debug & 16 > 0) {
L4:;
						printk_Rsmp_1b7d4074("<7>TLAN: Starting EISA Probe....\n");
						TLan_EisaProbe();
L5:;
						if(TLanDevicesInstalled == 1) {
							tmp___0 = "";
							printk_Rsmp_1b7d4074("<6>TLAN: %d device%s installed, PCI: %d  EISA: %d\n", TLanDevicesInstalled, tmp___0, tlan_have_pci, tlan_have_eisa);
							if(TLanDevicesInstalled > 0) {
L6:;
								return (0);
								/* END OF PATH at func_tlan_probe@p44#1 */
							}
							else if(TLanDevicesInstalled == 0) {
								/* FALSE PATH */ 
							}
							else {
								/* FALSE PATH */ 
							}
						}
						else if(TLanDevicesInstalled < 1) {
L7:;
							tmp___0 = "s";
							printk_Rsmp_1b7d4074("<6>TLAN: %d device%s installed, PCI: %d  EISA: %d\n", TLanDevicesInstalled, tmp___0, tlan_have_pci, tlan_have_eisa);
							if(TLanDevicesInstalled == 0) {
								kfree_Rsmp_037a0cba((void const   *)TLanPadBuffer);
								return (-19);
								/* END OF PATH at func_tlan_probe@p42#1 */
							}
							else if(TLanDevicesInstalled < 0) {
								goto L6;
							}
							else {
								goto L6;
							}
						}
						else {
							goto L7;
						}
					}
					else if(debug & 16 < 0) {
						goto L4;
					}
					else {
						TLan_EisaProbe();
						goto L5;
					}
				}
				else if(debug & 16 < 0) {
					goto L2;
				}
				else {
					goto L3;
				}
			}
			else if(temp_2 < 0) {
				/* FALSE PATH */ 
			}
			else {
				/* FALSE PATH */ 
			}
		}
		else if(temp_1 < 0) {
			/* FALSE PATH */ 
		}
		else {
			/* FALSE PATH */ 
		}
	}
	else {
		goto L1;
	}
}

static void tlan_exit(void)
{
	if(tlan_have_pci > 0) {
L1:;
		pci_unregister_driver_Rsmp_836ea211(& tlan_driver);
L2:;
		if(tlan_have_eisa > 0) {
			TLan_Eisa_Cleanup();
L3:;
			kfree_Rsmp_037a0cba((void const   *)TLanPadBuffer);
			/* END OF PATH at func_tlan_exit@p6#1 */
		}
		else if(tlan_have_eisa < 0) {
			TLan_Eisa_Cleanup();
			goto L3;
		}
		else {
			goto L3;
		}
	}
	else if(tlan_have_pci < 0) {
		goto L1;
	}
	else {
		goto L2;
	}
}

int main(void)
{ register struct net_device *dev ;
register struct sk_buff *skb ;
register int cmd ;
register struct ifreq *rq ;
	;
	_BLAST_init();
	TLan_Init(dev);
	TLan_Open(dev);
	TLan_EisaProbe();
	TLan_Eisa_Cleanup();
	TLan_StartTx(skb, dev);
	TLan_ioctl(dev, rq, cmd);
	TLan_GetStats(dev);
	TLan_SetTimer(dev, 1024U, 1024U);
	TLan_Close(dev);
	return (0);
	/* END OF PATH at func_main@p15#1 */
}

