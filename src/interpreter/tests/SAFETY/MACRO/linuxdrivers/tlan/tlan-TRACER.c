typedef int size_t;

typedef struct {
  unsigned int lock;
} spinlock_t;

extern unsigned char inb(unsigned short port);
/* unsigned char inb(unsigned short port) { */
/*   unsigned char v; */
/*   return v; */
/* } */
extern unsigned char inb_p(unsigned short port);
/* unsigned char inb_p(unsigned short port) { */
/*   unsigned char v; */
/*   return v; */
/* } */
extern unsigned short inw(unsigned short port);
/* unsigned short inw(unsigned short port) { */
/*   unsigned short v; */
/*   return v; */
/* } */
extern unsigned short inw_p(unsigned short port) ;
/* unsigned short inw_p(unsigned short port) */
/* { unsigned short v; */
/*   return v; */
/* } */
extern unsigned int inl(unsigned short port);
/* unsigned int inl(unsigned short port) { */
/*   unsigned int v; */
/*   return v; */
/* } */
extern unsigned int inl_p(unsigned short port);
/* unsigned int inl_p(unsigned short port) { */
/*   unsigned int v; */
/*   return v; */
/* } */
extern void * memcpy(void * to, const void * from, size_t n);
/* void * memcpy(void * to, const void * from, size_t n){ */
/*   int x; */
/*   return (void *) x; */
/* } */

extern void outb(unsigned char value, unsigned short port); 
//void outb(unsigned char value, unsigned short port){}
extern void outb_p(unsigned char value, unsigned short port); 
//void outb_p(unsigned char value, unsigned short port){}
extern void outw(unsigned short value, unsigned short port); 
//void outw(unsigned short value, unsigned short port){}
extern void outw_p(unsigned short value, unsigned short port);
// void outw_p(unsigned short value, unsigned short port){}
extern void outl(unsigned int value, unsigned short port);
// void outl(unsigned int value, unsigned short port){}
extern void outl_p(unsigned int value, unsigned short port);
// void outl_p(unsigned int value, unsigned short port){}

extern void insb(unsigned short port, void * addr, unsigned long count); 
// void insb(unsigned short port, void * addr, unsigned long count){}
extern void insw(unsigned short port, void * addr, unsigned long count);
// void insw(unsigned short port, void * addr, unsigned long count){}
extern void insl(unsigned short port, void * addr, unsigned long count);
// void insl(unsigned short port, void * addr, unsigned long count){}

extern void outsb(unsigned short port, void * addr, unsigned long count); 
// void outsb(unsigned short port, void * addr, unsigned long count){}
extern void outsw(unsigned short port, void * addr, unsigned long count); 
// void outsw(unsigned short port, void * addr, unsigned long count){}
extern void outsl(unsigned short port, void * addr, unsigned long count); 
// void outsl(unsigned short port, void * addr, unsigned long count){}

typedef struct {int counter; } atomic_t;
/*extern*/ unsigned long jiffies_Rsmp_0da02d67;

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

typedef signed short s16;
typedef unsigned short u16;

typedef signed int s32;
typedef unsigned int u32;

typedef signed long long s64;
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
// # 28 "tlan.h" 2
// # 76 "tlan.h"
typedef struct tlan_adapter_entry {
        u16 vendorId;
        u16 deviceId;
        char *deviceLabel;
        u32 flags;
        u16 addrOfs;
} TLanAdapterEntry;
// # 135 "tlan.h"
typedef struct tlan_buffer_ref_tag {
        u32 count;
        u32 address;
} TLanBufferRef;


typedef struct tlan_list_tag {
        u32 forward;
        u16 cStat;
        u16 frameSize;
        TLanBufferRef buffer[10];
} TLanList;

struct list_head {
        struct list_head *next, *prev;
};
struct timer_list {
        struct list_head list;
        unsigned long expires;
        unsigned long data;
        void (*function)(unsigned long);
};
typedef long time_t;
typedef long suseconds_t;
struct timeval {
        time_t tv_sec;
        suseconds_t tv_usec;
};

struct sk_buff_head {

  struct sk_buff * next;
  struct sk_buff * prev;
  
  __u32 qlen;
  spinlock_t lock;
};
// struct sk_buff;

struct sk_buff {
  
  struct sk_buff * next;
  struct sk_buff * prev;
  
  struct sk_buff_head * list;
  struct sock *sk;
  struct timeval stamp;
  struct net_device *dev;
  union
  {
    struct tcphdr *th;
    struct udphdr *uh;
    struct icmphdr *icmph;
    struct igmphdr *igmph;
    struct iphdr *ipiph;
    struct spxhdr *spxh;
    unsigned char *raw;
        } h;
  
  
  union
  {
    struct iphdr *iph;
    struct ipv6hdr *ipv6h;
    struct arphdr *arph;
    struct ipxhdr *ipxh;
    unsigned char *raw;
  } nh;
  
  
  union
  {
    struct ethhdr *ethernet;
    unsigned char *raw;
  } mac;
  
  struct dst_entry *dst;
  char cb[48];
  
  unsigned int len;
  unsigned int data_len;
  unsigned int csum;
  unsigned char __unused,cloned, pkt_type,ip_summed;
  __u32 priority;
  atomic_t users;
  unsigned short protocol;
  unsigned short security;
  unsigned int truesize;  
  unsigned char *head;
  unsigned char *data;
  unsigned char *tail;
  unsigned char *end;
  
  void (*destructor)(struct sk_buff *);

};

struct net_device_stats
{
        unsigned long rx_packets;
        unsigned long tx_packets;
        unsigned long rx_bytes;
        unsigned long tx_bytes;
        unsigned long rx_errors;
        unsigned long tx_errors;
        unsigned long rx_dropped;
        unsigned long tx_dropped;
        unsigned long multicast;
        unsigned long collisions;


        unsigned long rx_length_errors;
        unsigned long rx_over_errors;
        unsigned long rx_crc_errors;
        unsigned long rx_frame_errors;
        unsigned long rx_fifo_errors;
        unsigned long rx_missed_errors;


        unsigned long tx_aborted_errors;
        unsigned long tx_carrier_errors;
        unsigned long tx_fifo_errors;
        unsigned long tx_heartbeat_errors;
        unsigned long tx_window_errors;


        unsigned long rx_compressed;
        unsigned long tx_compressed;
};

struct board {
  char *deviceLabel;
  u32 flags;
  u16 addrOfs;
} board_info[] ; 

typedef u8 TLanBuffer[1600];

struct tq_struct {
        struct list_head list;
        unsigned long sync;
        void (*routine)(void *);
        void *data;
};


struct dev_mc_list
{
  struct dev_mc_list *next;
  __u8 dmi_addr[8];
  unsigned char dmi_addrlen;
  int dmi_users;
  int dmi_gusers;
};

struct net_device
{
  char name[16];
  unsigned long rmem_end;
  unsigned long rmem_start;
  unsigned long mem_end;
  unsigned long mem_start;
  unsigned long base_addr;
  unsigned int irq;
  unsigned char if_port;
  unsigned char dma;
  unsigned long state;
  struct net_device *next;
/*   int (*init)(struct net_device *dev1); */
  struct net_device *next_sched;
  int ifindex;
  int iflink;
/*   struct net_device_stats* (*get_stats)(struct net_device *dev2); */
/*   struct iw_statistics* (*get_wireless_stats)(struct net_device *dev3); */
  unsigned long trans_start;
  unsigned long last_rx;
  unsigned short flags;
  unsigned short gflags;
  unsigned mtu;
  unsigned short type;
  unsigned short hard_header_len;
  void *priv;
  struct net_device *master;
  unsigned char broadcast[8];
  unsigned char dev_addr[8];
  unsigned char addr_len;
  struct dev_mc_list *mc_list;
  int mc_count;
  int promiscuity;
  int allmulti;
  int watchdog_timeo;
  struct timer_list watchdog_timer;
  void *atalk_ptr;
  void *ip_ptr;
  void *dn_ptr;
  void *ip6_ptr;
  void *ec_ptr;
  struct Qdisc *qdisc;
  struct Qdisc *qdisc_sleeping;
  struct Qdisc *qdisc_list;
  struct Qdisc *qdisc_ingress;
  unsigned long tx_queue_len;
  spinlock_t xmit_lock;
  int xmit_lock_owner;
  spinlock_t queue_lock;
  atomic_t refcnt;
  int deadbeaf;
  int features;
/*   void (*uninit)(struct net_device *dev4); */
/*   void (*destructor)(struct net_device *dev5); */
/*   int (*open)(struct net_device *dev6);  */
/*   int (*stop)(struct net_device *dev7); */
/*   int (*hard_start_xmit) (struct sk_buff *skb1, */
/* 			  struct net_device *dev8); */
/*   int (*hard_header) (struct sk_buff *skb2, */
/* 		      struct net_device *dev9, */
/* 		      unsigned short type, */
/* 		      void *daddr, */
/* 		      void *saddr, */
/* 		      unsigned len); */
/*   int (*rebuild_header)(struct sk_buff *skb3); */
/*   void (*set_multicast_list)(struct net_device *dev10); */
/*   int (*set_mac_address)(struct net_device *dev11,void *addr); */
/*   int (*do_ioctl)(struct net_device *dev12,struct ifreq *ifr, int cmd);*/
/*   int (*set_config)(struct net_device *dev13,struct ifmap *map); */
/*   int (*hard_header_cache)(struct neighbour *neigh, struct hh_cache *hh1); */
/*   void (*header_cache_update)(struct hh_cache *hh2, */
/* 			      struct net_device *dev14, */
/* 			      unsigned char * haddr4); */
  
/*   int (*change_mtu)(struct net_device *dev15, int new_mtu); */
/*   void (*tx_timeout) (struct net_device *dev16); */
  
/*   int (*hard_header_parse)(struct sk_buff *skb6, */
/* 			   unsigned char *haddr9); */
/*   int (*neigh_setup)(struct net_device *dev17, struct neigh_parms *); */
/*   int (*accept_fastpath)(struct net_device *, struct dst_entry*); */
  struct module *owner;
  struct net_bridge_port *br_port;
};

typedef unsigned short sa_family_t;
struct sockaddr {
  sa_family_t sa_family;
  char sa_data[14];
};

struct pt_regs {
  long ebx;
  long ecx;
  long edx;
  long esi;
  long edi;
  long ebp;
  long eax;
  int xds;
  int xes;
  long orig_eax;
  long eip;
  int xcs;
  long eflags;
  long esp;
  int xss;
};

struct ifmap
{
  unsigned long mem_start;
  unsigned long mem_end;
  unsigned short base_addr;
  unsigned char irq;
  unsigned char dma;
  unsigned char port;  
};

struct ifreq
{
  
  union
  {
    char ifrn_name[16];
  } ifr_ifrn;
  
  union {
    struct sockaddr ifru_addr;
    struct sockaddr ifru_dstaddr;
    struct sockaddr ifru_broadaddr;
    struct sockaddr ifru_netmask;
    struct sockaddr ifru_hwaddr;
    short ifru_flags;
    int ifru_ivalue;
    int ifru_mtu;
    struct ifmap ifru_map;
    char ifru_slave[16];
    char ifru_newname[16];
    char * ifru_data;
  } ifr_ifru;
};
typedef struct list_head task_queue;
/*extern*/ task_queue /* tq_timer_Rsmp_fa3e9acc, */ tq_immediate_Rsmp_0da0dcd1/* , tq_disk_Rsmp_5373dbb6 */;
/*extern*/ void netif_start_queue(struct net_device *dev){ return; }
/*extern*/ int netif_rx_Rsmp_4eecbd7e(struct sk_buff *skb){ int x; return x;}
/*extern*/ void netif_stop_queue(struct net_device *dev) { return;}
/*extern*/ void netif_wake_queue(struct net_device *dev) { return; }
/*extern*/ int netif_queue_stopped(struct net_device *dev){ int res_; return res_; }

unsigned long virt_to_phys(void * address)
{
  return ((unsigned long)(address)-((unsigned long)(0xC0000000)));
}

/*extern*/ int queue_task(struct tq_struct *bh_pointer, task_queue *bh_list) { int x;  return x; }
/*extern*/ void mark_bh(int nr){ return; }

enum {
  TIMER_BH /* = 0 */,
  TQUEUE_BH,
  DIGI_BH,
  SERIAL_BH,
  RISCOM8_BH,
  SPECIALIX_BH,
  AURORA_BH,
  ESP_BH,
  SCSI_BH,
  IMMEDIATE_BH,
  CYCLADES_BH,
  CM206_BH,
  JS_BH,
  MACSERIAL_BH,
  ISICOM_BH
};

// # 170 "tlan.h"
typedef struct tlan_private_tag {
        struct net_device *nextDevice;
        void *dmaStorage;
        u8 *padBuffer;
        TLanList *rxList;
        u8 *rxBuffer;
        u32 rxHead;
        u32 rxTail;
        u32 rxEocCount;
        TLanList *txList;
        u8 *txBuffer;
        u32 txHead;
        u32 txInProgress;
        u32 txTail;
        u32 txBusyCount;
        u32 phyOnline;
        u32 timerSetAt;
        u32 timerType;
        struct timer_list timer;
        struct net_device_stats stats;
        struct board *adapter;
        u32 adapterRev;
        u32 aui;
        u32 debug;
        u32 duplex;
        u32 phy[2];
        u32 phyNum;
        u32 speed;
        u8 tlanRev;
        u8 tlanFullDuplex;
        char devName[8];
        spinlock_t lock;
        u8 link;
        u8 is_eisa;
        struct tq_struct tlan_tqueue;
        u8 neg_be_verbose;
} TLanPrivateInfo;

///////////////////////////////////////////////////////////////////
// # 439 "tlan.h"
///////////////////////////////////////////////////////////////////

u8 TLan_DioRead8(u16 base_addr, u16 internal_addr)
{
  u16 temp_1;
  u16 temp_2;  
  unsigned char temp_3;

  temp_1 = base_addr + 0x08;
  outw(internal_addr, temp_1);
  temp_2 = (base_addr + 0x0C) + (internal_addr & 0x3);
  temp_3 = inb(temp_2);

  return (u8) temp_3;
  
}
u16 TLan_DioRead16(u16 base_addr, u16 internal_addr)
{
  u16 temp_1;
  u16 temp_2;  
  unsigned short temp_3;


  temp_1 = base_addr + 0x08;
  outw(internal_addr, temp_1);
  temp_2 = (base_addr + 0x0C) + (internal_addr & 0x2);
  temp_3 = inw(temp_2);

  return (u16) temp_3;

  // TRACER doesn't compile:
  /// outw(internal_addr, base_addr + 0x08);
  // return (inw((base_addr + 0x0C) + (internal_addr & 0x2)));
  
}

u32 TLan_DioRead32(u16 base_addr, u16 internal_addr)
{
  u16 temp_1;
  u16 temp_2;  
  unsigned int temp_3;
  
  temp_1 = base_addr + 0x08;
  outw(internal_addr, temp_1);
  temp_2 = base_addr + 0x0C;
  temp_3 = inl(temp_2);
  return (u32) temp_3;

  // TRACER doesn't compile:
  // outw(internal_addr, base_addr + 0x08);
  // return (inl(base_addr + 0x0C));
  
}

void TLan_DioWrite8(u16 base_addr, u16 internal_addr, u8 data)
{
  u16 temp_1;
  u16 temp_2;  

  temp_1 = base_addr + 0x08;
  outw(internal_addr, temp_1);
  temp_2 = base_addr + 0x0C + (internal_addr & 0x3);
  // TRACER outb(data, temp_2);

  return;

  // TRACER doesn't compile:
  // outw(internal_addr, base_addr + 0x08);
  // outb(data, base_addr + 0x0C + (internal_addr & 0x3));
  
}
void TLan_DioWrite16(u16 base_addr, u16 internal_addr, u16 data)
{
  u16 temp_1;
  u16 temp_2;  

  temp_1 = base_addr + 0x08;
  outw(internal_addr, temp_1);
  temp_2 = base_addr + 0x0C + (internal_addr & 0x2);
  outw(data, temp_2);
  return;
}

void TLan_DioWrite32(u16 base_addr, u16 internal_addr, u32 data)
{
  u16 temp_1;
  u16 temp_2;  

  temp_1 = base_addr + 0x08;
  outw(internal_addr, temp_1);
  temp_2 = base_addr + 0x0C + (internal_addr & 0x2);
  // TRACER outl(data, temp_2);
  
}

int capable(int cap)
{

  int NONDET;
  int res_;

  switch(NONDET){    
  case 0 : 
    res_= 0;
    break;
  default:
    res_=1;
    break;
  }
  return res_;
}

u32 xor( u32 a, u32 b )
{
  return ( ( a && ! b ) || ( ! a && b ) );
}

u32 TLan_HashFunc( u8 *a )
{
  u32 hash;
  
  /*         hash = xor( ( ( (u8) a[0/8] ) & ( (u8) ( 1 << 0%8 ) ) ), xor( ( ( (u8) a[6/8] ) & ( (u8) ( 1 << 6%8 ) ) ), xor( ( ( (u8) a[12/8] ) & ( (u8) ( 1 << 12%8 ) ) ), xor( ( ( (u8) a[18/8] ) & ( (u8) ( 1 << 18%8 ) ) ), xor( ( ( (u8) a[24/8] ) & ( (u8) ( 1 << 24%8 ) ) ), xor( ( ( (u8) a[30/8] ) & ( (u8) ( 1 << 30%8 ) ) ), xor( ( ( (u8) a[36/8] ) & ( (u8) ( 1 << 36%8 ) ) ), ( ( (u8) a[42/8] ) & ( (u8) ( 1 << 42%8 ) ) ) ) ) ) ) ) ) ); */
  /*         hash |= xor( ( ( (u8) a[1/8] ) & ( (u8) ( 1 << 1%8 ) ) ), xor( ( ( (u8) a[7/8] ) & ( (u8) ( 1 << 7%8 ) ) ), xor( ( ( (u8) a[13/8] ) & ( (u8) ( 1 << 13%8 ) ) ), xor( ( ( (u8) a[19/8] ) & ( (u8) ( 1 << 19%8 ) ) ), xor( ( ( (u8) a[25/8] ) & ( (u8) ( 1 << 25%8 ) ) ), xor( ( ( (u8) a[31/8] ) & ( (u8) ( 1 << 31%8 ) ) ), xor( ( ( (u8) a[37/8] ) & ( (u8) ( 1 << 37%8 ) ) ), ( ( (u8) a[43/8] ) & ( (u8) ( 1 << 43%8 ) ) ) ) ) ) ) ) ) ) << 1; */
  /*         hash |= xor( ( ( (u8) a[2/8] ) & ( (u8) ( 1 << 2%8 ) ) ), xor( ( ( (u8) a[8/8] ) & ( (u8) ( 1 << 8%8 ) ) ), xor( ( ( (u8) a[14/8] ) & ( (u8) ( 1 << 14%8 ) ) ), xor( ( ( (u8) a[20/8] ) & ( (u8) ( 1 << 20%8 ) ) ), xor( ( ( (u8) a[26/8] ) & ( (u8) ( 1 << 26%8 ) ) ), xor( ( ( (u8) a[32/8] ) & ( (u8) ( 1 << 32%8 ) ) ), xor( ( ( (u8) a[38/8] ) & ( (u8) ( 1 << 38%8 ) ) ), ( ( (u8) a[44/8] ) & ( (u8) ( 1 << 44%8 ) ) ) ) ) ) ) ) ) ) << 2; */
/*         hash |= xor( ( ( (u8) a[3/8] ) & ( (u8) ( 1 << 3%8 ) ) ), xor( ( ( (u8) a[9/8] ) & ( (u8) ( 1 << 9%8 ) ) ), xor( ( ( (u8) a[15/8] ) & ( (u8) ( 1 << 15%8 ) ) ), xor( ( ( (u8) a[21/8] ) & ( (u8) ( 1 << 21%8 ) ) ), xor( ( ( (u8) a[27/8] ) & ( (u8) ( 1 << 27%8 ) ) ), xor( ( ( (u8) a[33/8] ) & ( (u8) ( 1 << 33%8 ) ) ), xor( ( ( (u8) a[39/8] ) & ( (u8) ( 1 << 39%8 ) ) ), ( ( (u8) a[45/8] ) & ( (u8) ( 1 << 45%8 ) ) ) ) ) ) ) ) ) ) << 3; */
/*         hash |= xor( ( ( (u8) a[4/8] ) & ( (u8) ( 1 << 4%8 ) ) ), xor( ( ( (u8) a[10/8] ) & ( (u8) ( 1 << 10%8 ) ) ), xor( ( ( (u8) a[16/8] ) & ( (u8) ( 1 << 16%8 ) ) ), xor( ( ( (u8) a[22/8] ) & ( (u8) ( 1 << 22%8 ) ) ), xor( ( ( (u8) a[28/8] ) & ( (u8) ( 1 << 28%8 ) ) ), xor( ( ( (u8) a[34/8] ) & ( (u8) ( 1 << 34%8 ) ) ), xor( ( ( (u8) a[40/8] ) & ( (u8) ( 1 << 40%8 ) ) ), ( ( (u8) a[46/8] ) & ( (u8) ( 1 << 46%8 ) ) ) ) ) ) ) ) ) ) << 4; */
/*         hash |= xor( ( ( (u8) a[5/8] ) & ( (u8) ( 1 << 5%8 ) ) ), xor( ( ( (u8) a[11/8] ) & ( (u8) ( 1 << 11%8 ) ) ), xor( ( ( (u8) a[17/8] ) & ( (u8) ( 1 << 17%8 ) ) ), xor( ( ( (u8) a[23/8] ) & ( (u8) ( 1 << 23%8 ) ) ), xor( ( ( (u8) a[29/8] ) & ( (u8) ( 1 << 29%8 ) ) ), xor( ( ( (u8) a[35/8] ) & ( (u8) ( 1 << 35%8 ) ) ), xor( ( ( (u8) a[41/8] ) & ( (u8) ( 1 << 41%8 ) ) ), ( ( (u8) a[47/8] ) & ( (u8) ( 1 << 47%8 ) ) ) ) ) ) ) ) ) ) << 5; */

  return hash;
}
// # 167 "mytlan.c" 2

typedef int (*__init_module_func_t)(void);
typedef void (*__cleanup_module_func_t)(void);
struct resource {
  /*const*/ char *name;
  unsigned long start, end;
  unsigned long flags;
  struct resource *parent, *sibling, *child;
};

struct resource_list {
  struct resource_list *next;
  struct resource *res;
  struct pci_dev *dev;
};
/*extern*/ struct resource ioport_resource_Rsmp_865ebccd;
/*extern*/ struct resource iomem_resource_Rsmp_9efed5af;

/*extern*/ struct resource * __request_region_Rsmp_1a1a4f09(struct resource * reso,unsigned long start, unsigned long n, char *name){
  struct resource * res;
  return res;
}
/*extern*/ void __release_region_Rsmp_d49501d4(struct resource * reso, unsigned long p1, unsigned long p2){}

enum pci_mmap_state {
        pci_mmap_io,
        pci_mmap_mem
};
struct pci_dev {
        struct list_head global_list;
        struct list_head bus_list;
        struct pci_bus *bus;
        struct pci_bus *subordinate;

        void *sysdata;
        struct proc_dir_entry *procent;

        unsigned int devfn;
        unsigned short vendor;
        unsigned short device;
        unsigned short subsystem_vendor;
        unsigned short subsystem_device;
        unsigned int class;
        u8 hdr_type;
        u8 rom_base_reg;

        struct pci_driver *driver;
        void *driver_data;
        dma_addr_t dma_mask;
        u32 current_state;
        unsigned short vendor_compatible[4];
        unsigned short device_compatible[4];
        unsigned int irq;
        struct resource resource[12];
        struct resource dma_resource[2];
        struct resource irq_resource[2];
        char name[80];
        char slot_name[8];
        int active;
        int ro;
        unsigned short regs;
/*         int (*prepare)(struct pci_dev *dev1); */
/*         int (*activate)(struct pci_dev *dev2); */
/*         int (*deactivate)(struct pci_dev *dev3); */
};

struct pci_bus {
        struct list_head node;
        struct pci_bus *parent;
        struct list_head children;
        struct list_head devices;
        struct pci_dev *self;
        struct resource *resource[4];
        struct pci_ops *ops;
        void *sysdata;
        struct proc_dir_entry *procdir;
        unsigned char number;
        unsigned char primary;
        unsigned char secondary;
        unsigned char subordinate;

        char name[48];
        unsigned short vendor;
        unsigned short device;
        unsigned int serial;
        unsigned char pnpver;
        unsigned char productver;
        unsigned char checksum;
        unsigned char pad1;
};
/* extern */ struct list_head pci_root_buses_Rsmp_082c3213;
/* extern */ struct list_head pci_devices_Rsmp_7a84b102;

struct pci_ops {
  int read_byte;
  int read_word;
  int read_dword;
  int write_byte;
  int write_word;
  int write_dword;

/*   int (*read_byte)(struct pci_dev *, int , u8 *); */
/*   int (*read_word)(struct pci_dev *, int , u16 *); */
/*         int (*read_dword)(struct pci_dev *, int, u32 *); */
/*   int (*write_byte)(struct pci_dev *, int , u8 ); */
/*   int (*write_word)(struct pci_dev *, int , u16 ); */
/*   int (*write_dword)(struct pci_dev *, int , u32 ); */
};

struct pbus_set_ranges_data
{
  int found_vga;
  unsigned long io_start, io_end;
  unsigned long mem_start, mem_end;
};

struct pci_device_id {
  unsigned int vendor, device;
  unsigned int subvendor, subdevice;
  unsigned int class, class_mask;
  unsigned long driver_data;
};

struct pci_driver {
  struct list_head node;
  char *name;
  struct pci_device_id *id_table;
/*   int (*probe) (struct pci_dev *, struct pci_device_id *); */
/*   void (*remove) (struct pci_dev *); */
/*   int (*save_state) (struct pci_dev *, u32 ); */
/*   int (*suspend)(struct pci_dev *, u32 ); */
/*   int (*resume) (struct pci_dev *); */
/*   int (*enable_wake) (struct pci_dev *, u32 , int ); */
};

/*extern*/ int pci_read_config_byte_Rsmp_e426c0e8(struct pci_dev *dev, int where, u8 *val){
  int res__;
  return res__;
}
/*extern*/ int pci_enable_device_Rsmp_d04fea08(struct pci_dev *dev){
  int res__;
  return res__;
}
/*extern*/ void pci_set_master_Rsmp_2d0760ae(struct pci_dev *dev){}
/*extern*/ int pci_register_driver_Rsmp_de7b2751(struct pci_driver * dev) {
  int res__;
  return res__;
}
/*extern*/ void pci_unregister_driver_Rsmp_836ea211(struct pci_driver * dev){}

/*extern*/ unsigned long pci_mem_start_Rsmp_3da171f9;
struct scatterlist {
    char * address;
    char * alt_address;

    unsigned int length;
};
struct pci_dev;

static int pci_module_init(struct pci_driver *drv)
{
  int rc;
  rc = pci_register_driver_Rsmp_de7b2751 (drv);
  
  if (rc > 0)
    return 0;

  if (rc == 0)
    rc = -19;      

  pci_unregister_driver_Rsmp_836ea211 (drv);
  
  return rc;
}


static void *pci_get_drvdata (struct pci_dev *pdev)
{
  return pdev->driver_data;
}

static void pci_set_drvdata (struct pci_dev *pdev, void *data)
{
  pdev->driver_data = data;
}
/* extern */ int pci_pci_problems_Rsmp_dc14eda7;
/* extern */ unsigned short eth_type_trans_Rsmp_ef9f8c35(struct sk_buff *skb, 
							 struct net_device *dev){
  unsigned short res__;
  return res__;
}
/*extern*/ unsigned long loops_per_jiffy_Rsmp_ba497f13;
struct mii_ioctl_data {
        u16 phy_id;
        u16 reg_num;
        u16 val_in;
        u16 val_out;
};


char tlan_banner[];

/*extern*/ int printk_Rsmp_1b7d4074(const char * fmt, ...){
  int res__;
  return res__;
}

/*extern*/ struct net_device *init_etherdev_Rsmp_5ef105a6(struct net_device *dev, int sizeof_priv){
  struct net_device * res__;
  return res__;
}

/*extern*/ int mod_timer_Rsmp_1f13d309(struct timer_list *timer, unsigned long expires){
  int res__;
  return res__;
}
/*extern*/ void udelay(unsigned long usecs) 
{ 
  return; 
}
/*extern*/ void add_timer_Rsmp_a19eacf8(struct timer_list * timer)
{ 
  return; 
}
/*extern*/ int del_timer_sync_Rsmp_daff266a(struct timer_list * timer)
{ int x; 
  return x;
}
/*extern*/ void unregister_netdev_Rsmp_99639e9a(struct net_device *dev)
{ 
  return; 
}
/*extern*/ void kfree_Rsmp_037a0cba(const void * p)
{ 
  return; 
}
/*extern*/ void dev_kfree_skb_irq(struct sk_buff *skb)
{ 
  return ;
}
/*extern*/ void dev_kfree_skb_any(struct sk_buff *skb)
{ 
  return ;
}
/*extern*/ void * kmalloc_Rsmp_93d4cfe6(size_t ss, int pp)
{ 
  int x;
  return (void *) x; 
}
/*extern*/ int request_irq_Rsmp_0c60f2e0(unsigned int aa,
					 void (*handler)(int, void *, struct pt_regs *),
					 unsigned long cc, const char * dd, void * ee) 
{
  int res_;
  return res_;
}
/*extern*/ void free_irq_Rsmp_f20dabd8(unsigned int aa, void * bb){ return; }

void spin_lock(spinlock_t *lock)  { return ; }
void spin_unlock(spinlock_t *lock){ return ; }

/*extern */ struct sk_buff *dev_alloc_skb(unsigned int length)
{
  struct sk_buff * res__;
  return res__;
}

/*extern*/ void skb_reserve(struct sk_buff *skb, unsigned int len)
{
  skb->data+=len;
  skb->tail+=len;
  return;
}
unsigned char *skb_put(struct sk_buff *skb, unsigned int len)
{
  unsigned char * res__;
  return res__;
}
 
/*extern*/ void skb_trim(struct sk_buff *skb, unsigned int len){ return; }

/////////////////////////////////////////////////////////////////////////////////
// "mytlan.c"
/////////////////////////////////////////////////////////////////////////////////

/* Global variables */
int in_irq;
int BLAST_NONDET;
int lockStatus;

void _BLAST_init() {
  lockStatus = 0;
  if(BLAST_NONDET) in_irq = 1;
  else in_irq = 0;

}

void spin_lock_irqsave (void * a , void *b) {
  // TRACER
  _ABORT(lockStatus != 0);
  lockStatus = 1;

  // BLAST
  // if (lockStatus == 0) lockStatus = 1;
  // else errorFn();
}
void spin_unlock_irqrestore (void * a , void *b) {
  // TRACER
  _ABORT(lockStatus != 1);
  lockStatus = 0;

  // BLAST
  // if (lockStatus == 1) lockStatus = 0;
  //else errorFn();
}


typedef u32 (TLanIntVectorFunc)( struct net_device *, u16 );
static struct net_device *TLan_Eisa_Devices;
static int TLanDevicesInstalled;
static int aui[8];
static int duplex[8];
static int speed[8];
static int boards_found;

static int debug;
static int bbuf;
static u8 *TLanPadBuffer;
char TLanSignature[];
static int tlan_have_pci;
static int tlan_have_eisa;

/*const*/ char *media[] /* = { */
/*         "10BaseT-HD ", "10BaseT-FD ","100baseTx-HD ", */
/*         "100baseTx-FD", "100baseT4", 0 */
/* } */;

int media_map[]/*  = { 0x0020, 0x0040, 0x0080, 0x0100, 0x0200,} */;


static struct pci_device_id tlan_pci_tbl[]/*  = { */
/*         { 0x0e11, 0xae34, */
/*                 (~0), (~0), 0, 0, 0 }, */
/*         { 0x0e11, 0xae32, */
/*                 (~0), (~0), 0, 0, 1 }, */
/*         { 0x0e11, 0xae35, */
/*                 (~0), (~0), 0, 0, 2 }, */
/*         { 0x0e11, 0xf130, */
/*                 (~0), (~0), 0, 0, 3 }, */
/*         { 0x0e11, 0xf150, */
/*                 (~0), (~0), 0, 0, 4 }, */
/*         { 0x0e11, 0xae43, */
/*                 (~0), (~0), 0, 0, 5 }, */
/*         { 0x0e11, 0xae40, */
/*                 (~0), (~0), 0, 0, 6 }, */
/*         { 0x0e11, 0xb011, */
/*                 (~0), (~0), 0, 0, 7 }, */
/*         { 0x108d, 0x0013, */
/*                 (~0), (~0), 0, 0, 8 }, */
/*         { 0x108d, 0x0012, */
/*                 (~0), (~0), 0, 0, 9 }, */
/*         { 0x108d, 0x0014, */
/*                 (~0), (~0), 0, 0, 10 }, */
/*         { 0x0e11, 0xB030, */
/*                 (~0), (~0), 0, 0, 11 }, */
/*         { 0x0e11, 0xB012, */
/*                 (~0), (~0), 0, 0, 12 }, */
/*         { 0,} */
/* } */;

/* Prototypes of functions called from main */
static int TLan_Init( struct net_device * );
static int TLan_Open( struct net_device *dev );
static void TLan_EisaProbe( void );
static void TLan_Eisa_Cleanup( void );
static int TLan_StartTx( struct sk_buff *, struct net_device *);
static int TLan_ioctl( struct net_device *dev, struct ifreq *rq, int cmd);
static struct net_device_stats *TLan_GetStats( struct net_device *);
static int TLan_Close( struct net_device *);

static void TLan_HandleInterrupt( int, void *, struct pt_regs *);
static int TLan_probe1( struct pci_dev *pdev, long ioaddr, int irq, int rev, struct pci_device_id *ent);
static void TLan_tx_timeout( struct net_device *dev);
static int tlan_init_one( struct pci_dev *pdev, struct pci_device_id *ent);


static void TLan_ResetLists( struct net_device * );
static void TLan_ResetAdapter( struct net_device * );
static void TLan_ReadAndClearStats( struct net_device *, int );
static int TLan_MiiReadReg( struct net_device *, u16, u16, u16 * );
static void TLan_MiiWriteReg( struct net_device *, u16, u16, u16 );
static void TLan_FreeLists( struct net_device * );
static void TLan_PrintList( TLanList *, char *, int );
static void TLan_PrintDio( u16 );
static void TLan_PhyPrint( struct net_device * );
static void TLan_SetMulticastList( struct net_device *);
static u32 TLan_HandleInvalid( struct net_device *, u16 );
static u32 TLan_HandleTxEOF( struct net_device *, u16 );
static u32 TLan_HandleStatOverflow( struct net_device *, u16 );
static u32 TLan_HandleRxEOF( struct net_device *, u16 );
static u32 TLan_HandleDummy( struct net_device *, u16 );
static u32 TLan_HandleTxEOC( struct net_device *, u16 );
static u32 TLan_HandleStatusCheck( struct net_device *, u16 );
static u32 TLan_HandleRxEOC( struct net_device *, u16 );
static void TLan_Timer( unsigned long );
static void TLan_FinishReset( struct net_device * );
static void TLan_SetMac( struct net_device *, int areg, char *mac );
static void TLan_PhyDetect( struct net_device * );
static void TLan_PhyPowerDown( struct net_device * );
static void TLan_PhyPowerUp( struct net_device * );
static void TLan_PhyReset( struct net_device * );
static void TLan_PhyStartLink( struct net_device * );
static void TLan_PhyFinishAutoNeg( struct net_device * );
static void TLan_MiiSendData( u16, u32, unsigned );
static void TLan_MiiSync( u16 );
static void TLan_EeSendStart( u16 );
static int TLan_EeSendByte( u16, u8, int );
static void TLan_EeReceiveByte( u16, u8 *, int );
static int TLan_EeReadByte( struct net_device *, u8, u8 * );


static TLanIntVectorFunc *TLanIntVector[8]/*  = { */
/*         TLan_HandleInvalid, */
/*         TLan_HandleTxEOF, */
/*         TLan_HandleStatOverflow, */
/*         TLan_HandleRxEOF, */
/*         TLan_HandleDummy, */
/*         TLan_HandleTxEOC, */
/*         TLan_HandleStatusCheck, */
/*         TLan_HandleRxEOC */
/* } */;

static void TLan_SetTimer( struct net_device *dev, u32 ticks, u32 type )
{
  TLanPrivateInfo *priv;
  unsigned long flags;

  priv = dev->priv;
  flags = 0;
  
  if (!in_irq){
    //////////////////////////////////////////
    spin_lock_irqsave(&priv->lock, flags);
    /////////////////////////////////////////
  }
  if ( priv->timer.function != ((void *)0) &&  priv->timerType != 2 )
    {
      if (!in_irq){
	//////////////////////////////////////////
	spin_unlock_irqrestore(&priv->lock, flags);
	//////////////////////////////////////////
      }
      return;
    }

  // TRACER  priv->timer.function = &TLan_Timer;

  if (!in_irq){
    //////////////////////////////////////////
    spin_unlock_irqrestore(&priv->lock, flags);
    //////////////////////////////////////////
  }
  priv->timer.data = (unsigned long) dev;
  priv->timerSetAt = jiffies_Rsmp_0da02d67;
  priv->timerType = type;
  mod_timer_Rsmp_1f13d309(&priv->timer, jiffies_Rsmp_0da02d67 + ticks);  
}


static void tlan_remove_one( struct pci_dev *pdev)
{
  struct net_device *dev;
  TLanPrivateInfo *priv;

  dev = pci_get_drvdata( pdev );
  priv = dev->priv;

  unregister_netdev_Rsmp_99639e9a( dev );
  
  if ( priv->dmaStorage ) 
    kfree_Rsmp_037a0cba( priv->dmaStorage );
  
  __release_region_Rsmp_d49501d4(&ioport_resource_Rsmp_865ebccd, (dev->base_addr), (0x10));  
  kfree_Rsmp_037a0cba( dev );  
  pci_set_drvdata( pdev, ((void *)0) );
  return;

}

static struct pci_driver tlan_driver/*  = { */
/*  name : "tlan" , */
/*  id_table : tlan_pci_tbl , */
/*  probe: tlan_init_one, */
/*  remove : tlan_remove_one, */
/* } */;

/*extern*/ void * __constant_c_and_count_memset(void * s, unsigned long pattern, size_t count){}
/*extern*/ void * __constant_c_memset(void * s, unsigned long c, size_t count){}
/*extern*/ void * __memset_generic(void * s, char c,size_t count){}
/*extern*/ int __builtin_constant_p(int c){
  int res__;
  return res__;
}
void init_timer(struct timer_list * timer){ return;}

static int tlan_probe(void)
{
  static int pad_allocated;
  int temp_1,temp_2,temp_3,temp_4;

  printk_Rsmp_1b7d4074("<6>" "%s", tlan_banner);  
  TLanPadBuffer = (u8 *) kmalloc_Rsmp_93d4cfe6(64,(0x20 | 0x10 | 0x40 | 0x80));
  if (TLanPadBuffer == ((void *)0)) {
    printk_Rsmp_1b7d4074("<3>" "TLAN: Could not allocate memory for pad buffer.\n");
    return -12;
  }

  temp_1 = __builtin_constant_p(0);
  if(temp_1){
    temp_2 = __builtin_constant_p(64);
    if(temp_2)
      __constant_c_and_count_memset((TLanPadBuffer),0x01010101UL*(unsigned char)0,64);
    else	
      __constant_c_memset((TLanPadBuffer),0x01010101UL*(unsigned char)0,64);
  }
  else{
    temp_3 = __builtin_constant_p(64);
    if(temp_3)
      __memset_generic((TLanPadBuffer),0,64);
    else
      __memset_generic((TLanPadBuffer),0,64);
  }

  pad_allocated = 1;
  
  if (debug&0x0010) 
    printk_Rsmp_1b7d4074("<7>" "TLAN: " "Starting PCI Probe....\n" );

  pci_module_init(&tlan_driver);  
  if (debug&0x0010) 
    printk_Rsmp_1b7d4074("<7>" "TLAN: " "Starting EISA Probe....\n" );
  TLan_EisaProbe();
  
  printk_Rsmp_1b7d4074("<6>" "TLAN: %d device%s installed, PCI: %d  EISA: %d\n",
		       TLanDevicesInstalled, TLanDevicesInstalled == 1 ? "" : "s",
		       tlan_have_pci, tlan_have_eisa);
  
  if (TLanDevicesInstalled == 0) {
    kfree_Rsmp_037a0cba(TLanPadBuffer);
    return -19;
  }
  return 0;
}


static int tlan_init_one( struct pci_dev *pdev, struct pci_device_id *ent)                                    
{
  return TLan_probe1( pdev, -1, -1, 0, ent);
}

int TLan_probe1(struct pci_dev *pdev,long ioaddr, int irq, int rev, 
		struct pci_device_id *ent )		       
{

  struct net_device *dev;
  TLanPrivateInfo *priv;
  u8 pci_rev;
  u16 device_id;
  int reg;  
  u32 pci_io_base;
  int temp_1, temp_2;
  
  temp_1 = pci_enable_device_Rsmp_d04fea08(pdev);

  if (pdev && temp_1)
    return -5;
  
  dev = init_etherdev_Rsmp_5ef105a6(((void *)0), sizeof(TLanPrivateInfo));
  if (dev == ((void *)0)) {
    printk_Rsmp_1b7d4074("<3>" "TLAN: Could not allocate memory for device.\n");
    return -12;
  }
  
  // TRACER do { (dev)->owner = (&__this_module); } while (0);
  
  priv = dev->priv;
  if (pdev) 
    {
      pci_io_base = 0;    
      priv->adapter = &board_info[ent->driver_data];    
      pci_read_config_byte_Rsmp_e426c0e8 ( pdev, 0x08, &pci_rev);    
      //BLAST for loop for ( reg= 0; reg <= 5; reg ++ ) {
      if (((pdev)->resource[(reg)].flags) & 0x00000100) {
	pci_io_base = ((pdev)->resource[(reg)].start);
	if (debug&0x0001) 
	  printk_Rsmp_1b7d4074("<7>" "TLAN: " "IO mapping is available at %x.\n", pci_io_base );      
	// break;
      }
      // }
      if (!pci_io_base) 
	{
	  printk_Rsmp_1b7d4074("<3>" "TLAN: No IO mappings available\n");
	  unregister_netdev_Rsmp_99639e9a(dev);
	  kfree_Rsmp_037a0cba(dev);
	  return -19;
	}
    
      dev->base_addr = pci_io_base;
      dev->irq = pdev->irq;
      priv->adapterRev = pci_rev;
      pci_set_master_Rsmp_2d0760ae(pdev);
      pci_set_drvdata(pdev, dev);
      
    } 
  else 
    {        
      device_id = inw(ioaddr + 0xc82);
      priv->is_eisa = 1;
      if (device_id == 0x20F1) {
	priv->adapter = &board_info[13];
	priv->adapterRev = 23;
      } else {
	priv->adapter = &board_info[14];
	priv->adapterRev = 10;
      }
      dev->base_addr = ioaddr;
      dev->irq = irq;
    }
  if (dev->mem_start) 
    {
      priv->aui = dev->mem_start & 0x01;

 /* TRACER priv->duplex = ((dev->mem_start & 0x06) == 0x06) ? 0 : (dev->mem_start & 0x06) >> 1; */
 /*        priv->speed = ((dev->mem_start & 0x18) == 0x18) ? 0 : (dev->mem_start & 0x18) >> 3; */
      
      if (priv->speed == 0x1) {
	priv->speed = 10;
      } else if (priv->speed == 0x2) {
	priv->speed = 100;
      }
      debug = dev->mem_end;
      priv->debug =dev->mem_end ;
    } 
  else 
    {
      priv->aui = aui[boards_found];
      priv->speed = speed[boards_found];
      priv->duplex = duplex[boards_found];
      priv->debug = debug;
    }
      
  /* TRACER do { (&priv->tlan_tqueue.list)->next =
                 (&priv->tlan_tqueue.list); (&priv->tlan_tqueue.list)->prev =
                  (&priv->tlan_tqueue.list); } while (0); */

  priv->tlan_tqueue.sync = 0;
  // TRACER priv->tlan_tqueue.routine = (void *)(void*)TLan_tx_timeout;
  priv->tlan_tqueue.data = dev;
  
  /*  TRACER  do { *(&priv->lock) = (spinlock_t) { 1 }; } while(0); */
  
  temp_2 = TLan_Init(dev);
  if (temp_2)
    {
      printk_Rsmp_1b7d4074("<3>" "TLAN: Could not register device.\n");
      unregister_netdev_Rsmp_99639e9a(dev);
      kfree_Rsmp_037a0cba(dev);
      return -11;
    } 
  else 
    {    
      TLanDevicesInstalled++;
      boards_found++;        
      if (pdev)
	tlan_have_pci++;
      else {
	priv->nextDevice = TLan_Eisa_Devices;
	TLan_Eisa_Devices = dev;
	tlan_have_eisa++;
      }    
      printk_Rsmp_1b7d4074("<6>" "TLAN: %s irq=%2d, io=%04x, %s, Rev. %d\n",
			   dev->name,
			   (int) dev->irq,
			   (int) dev->base_addr,
			   priv->adapter->deviceLabel,
			   priv->adapterRev);
      return 0;
    }  
}


static void TLan_Eisa_Cleanup(void)
{
  struct net_device *dev;
  TLanPrivateInfo *priv;
  
  while( tlan_have_eisa ) {
    dev = TLan_Eisa_Devices;
    priv = dev->priv;
    if (priv->dmaStorage) {
      kfree_Rsmp_037a0cba(priv->dmaStorage);
    }
    __release_region_Rsmp_d49501d4(&ioport_resource_Rsmp_865ebccd, (dev->base_addr), (0x10));
    unregister_netdev_Rsmp_99639e9a( dev );
    TLan_Eisa_Devices = priv->nextDevice;
    kfree_Rsmp_037a0cba( dev );
    tlan_have_eisa--;
  }
}

static void tlan_exit(void)
{
  if (tlan_have_pci)
    pci_unregister_driver_Rsmp_836ea211(&tlan_driver);
  
  if (tlan_have_eisa)
    TLan_Eisa_Cleanup();
  
  kfree_Rsmp_037a0cba( TLanPadBuffer );
  return;

}

int init_module(void); 
void cleanup_module(void);

static void TLan_EisaProbe (void)
{
  long ioaddr;
  int rc;
  int irq;
  u16 device_id;
  struct resource * temp_1;
  unsigned char temp_2,temp_3, temp_4;

  rc = -19;

  if (!(0)) {
    if (debug&0x0010) printk_Rsmp_1b7d4074("<7>" "TLAN: " "No EISA bus present\n" );;
    return;
  }
  
  
  //BLAST for loop for (ioaddr = 0x1000; ioaddr < 0x9000; ioaddr += 0x1000) {
  
  if (debug&0x0010) 
    printk_Rsmp_1b7d4074("<7>" "TLAN: " "EISA_ID 0x%4x: 0x%4x\n", (int) ioaddr + 0xC80, inw(ioaddr + 0xc80) );
  if (debug&0x0010) 
    printk_Rsmp_1b7d4074("<7>" "TLAN: " "EISA_ID 0x%4x: 0x%4x\n", (int) ioaddr + 0xC82, inw(ioaddr + 0xc82) );


  if (debug&0x0010) 
    printk_Rsmp_1b7d4074("<7>" "TLAN: " "Probing for EISA adapter at IO: 0x%4x : ", (int) ioaddr );
  
  temp_1 = __request_region_Rsmp_1a1a4f09(&ioport_resource_Rsmp_865ebccd, 
					  ioaddr, 0x10, TLanSignature);
  if ( temp_1 == (void *)0)
    goto out;
  
  temp_2 = inw(ioaddr + 0xc80);
  if (temp_2 != 0x110E) {
    __release_region_Rsmp_d49501d4(&ioport_resource_Rsmp_865ebccd, (ioaddr), (0x10));
    goto out;
  }
  
  device_id = inw(ioaddr + 0xc82);
  if (device_id != 0x20F1 && device_id != 0x40F1) {
    __release_region_Rsmp_d49501d4(&ioport_resource_Rsmp_865ebccd, (ioaddr), (0x10));
    goto out;
  }
  
  temp_3 =inb(ioaddr + 0xc84);
  if (temp_3 != 0x1) {
    __release_region_Rsmp_d49501d4(&ioport_resource_Rsmp_865ebccd, (ioaddr), (0x10));
    goto out2;
  }
  
  if (debug == 0x10)
    printk_Rsmp_1b7d4074("Found one\n");
      
  temp_4 = inb(ioaddr + 0xCC0);

  switch (temp_4) {
  case 0x10 :
    irq=5;
    break;
  case 0x20:
    irq=9;
    break;
  case 0x40:
    irq=10;
    break;
  case 0x80:
    irq=11;
    break;
  default:
    goto out;
  }
  
    
  rc = TLan_probe1( ((void *)0), ioaddr, irq, 12, ((void *)0));		    
  //BLAST continue;  
 out:
  if (debug == 0x10)
    printk_Rsmp_1b7d4074("None found\n");
  //BLAST continue;
  
 out2: if (debug == 0x10)
    printk_Rsmp_1b7d4074("Card found but it is not enabled, skipping\n");
  //BLAST continue;
  
  //}  
}

static int TLan_Init( struct net_device *dev )
{
  int dma_size;
  int err;
  int i;
  TLanPrivateInfo *priv;
  int temp_1,temp_2,temp_3;
  struct resource* temp_4;

  priv = dev->priv;

  if (!priv->is_eisa)
    temp_4 = __request_region_Rsmp_1a1a4f09(&ioport_resource_Rsmp_865ebccd, 
					    (dev->base_addr), 0x10, TLanSignature);
    if (! temp_4) {
      printk_Rsmp_1b7d4074("<3>" "TLAN: %s: IO port region 0x%lx size 0x%x in use.\n",
			   dev->name,
			   dev->base_addr,
			   0x10 );
      return -5;
    }
  
  if ( bbuf ) 
    dma_size = ( 32 + 64 ) * ( sizeof(TLanList) + 1600 );
  else 
    dma_size = ( 32 + 64 ) * ( sizeof(TLanList) );

  priv->dmaStorage = (void *) kmalloc_Rsmp_93d4cfe6(dma_size, (0x20 | 0x10 | 0x40 | 0x80) | 0x01);
  if ( priv->dmaStorage == ((void *)0) ) {
    printk_Rsmp_1b7d4074("<3>" "TLAN:  Could not allocate lists and buffers for %s.\n",
			 dev->name );
    __release_region_Rsmp_d49501d4(&ioport_resource_Rsmp_865ebccd, (dev->base_addr), (0x10));
    return -12;
  }

  temp_1 = __builtin_constant_p(0);
  if(temp_1){
    temp_2 = __builtin_constant_p(dma_size);
    if(temp_2)
      __constant_c_and_count_memset(((priv->dmaStorage)),
				    ((0x01010101UL*(unsigned char)(0))),((dma_size)));
    else
      __constant_c_memset(((priv->dmaStorage)),
			  ((0x01010101UL*(unsigned char)(0))),((dma_size)));								 
  }
  else{  
    temp_3 = __builtin_constant_p(dma_size);
    if(temp_3)
      __memset_generic((((priv->dmaStorage))),(((0))),(((dma_size))));
    else
      __memset_generic(((priv->dmaStorage)),((0)),((dma_size)));
  }
  
  priv->rxList = (TLanList *) ( ( ( (u32) priv->dmaStorage ) + 7 ) & 0xFFFFFFF8 );    
  priv->txList = priv->rxList + 32;
  if ( bbuf ) {
    priv->rxBuffer = (u8 *) ( priv->txList + 64 );
    priv->txBuffer = priv->rxBuffer + ( 32 * 1600 );      
  }
  
  err = 0;
  //BLAST for ( i = 0; i < 6 ; i++ )
  /*BLAST
    err |= TLan_EeReadByte( dev,
    (u8) priv->adapter->addrOfs + i,
    (u8 *) &dev->dev_addr[i] );
  */
  if ( err ) {
    printk_Rsmp_1b7d4074("<3>" "TLAN: %s: Error reading MAC from eeprom: %d\n",
			 dev->name,
			 err );
  }

  dev->addr_len = 6;

  // TRACER dev->open = &TLan_Open;
  // TRACER dev->hard_start_xmit = &TLan_StartTx;
  // TRACER dev->stop = &TLan_Close;
  // TRACER dev->get_stats = &TLan_GetStats;
  // TRACER dev->set_multicast_list = &TLan_SetMulticastList;
  // TRACER dev->do_ioctl = &TLan_ioctl;
  // TRACER dev->tx_timeout = &TLan_tx_timeout;
  dev->watchdog_timeo = (10*100);
  
  return 0; 
}

static int TLan_Open( struct net_device *dev )
{
  TLanPrivateInfo *priv;
  int err;
  
  priv = dev->priv;
  priv->tlanRev = TLan_DioRead8( dev->base_addr, 0x0C );
  err = request_irq_Rsmp_0c60f2e0( dev->irq, TLan_HandleInterrupt, 0x04000000, TLanSignature, dev );
  
  if ( err ) {
    printk_Rsmp_1b7d4074("<3>" "TLAN:  Cannot open %s because IRQ %d is already in use.\n", dev->name, dev->irq );
    return err;
  }
 
  init_timer(&priv->timer);
  netif_start_queue(dev);
	
  TLan_ResetLists( dev );
  TLan_ReadAndClearStats( dev, 0 );
  /*
    TLan_ResetAdapter( dev );
  */
  if (debug&0x0001) printk_Rsmp_1b7d4074("<7>" "TLAN: " "%s: Opened.  TLAN Chip Rev: %x\n", dev->name, priv->tlanRev );;

  return 0;
}

static int TLan_ioctl(struct net_device *dev, struct ifreq *rq, int cmd)
{
  TLanPrivateInfo *priv;
  struct mii_ioctl_data *data;
  u32 phy;
  int temp_1;

  priv = dev->priv;
  data = (struct mii_ioctl_data *)&rq->ifr_ifru.ifru_data;
  phy = priv->phy[priv->phyNum];
  
  if (!priv->phyOnline)
    return -11;
  
  switch(cmd) {
  case 0x8947:
  case 0x89F0:
    data->phy_id = phy;        
  case 0x8948:
  case 0x89F1 /*0x89F0 +1*/:
    TLan_MiiReadReg(dev, data->phy_id & 0x1f, data->reg_num & 0x1f, &data->val_out);
    return 0;        
  case 0x8949:
  case 0x89F2 /* 0x89F0 +2 */:
    temp_1 = capable(12);
    if (!temp_1)
      return -1;
    TLan_MiiWriteReg(dev, data->phy_id & 0x1f, data->reg_num & 0x1f, data->val_in);
    return 0;
  default:
    return -95;
  }
}


static void TLan_tx_timeout(struct net_device *dev)
{

  if (debug&0x0001) 
    printk_Rsmp_1b7d4074("<7>" "TLAN: " "%s: Transmit timed out.\n", dev->name );;
	
  TLan_FreeLists( dev );
  TLan_ResetLists( dev );
  TLan_ReadAndClearStats( dev, 0 );
  TLan_ResetAdapter( dev );
  dev->trans_start = jiffies_Rsmp_0da02d67;
  netif_wake_queue( dev );  
}


static int TLan_StartTx( struct sk_buff *skb, struct net_device *dev )
{
  TLanPrivateInfo *priv;
  TLanList *tail_list;
  u8 *tail_buffer;
  int pad;
  unsigned long flags;

  priv = dev->priv;
  
  if ( ! priv->phyOnline ) {
    if (debug&0x0002) 
      printk_Rsmp_1b7d4074("<7>" "TLAN: " "TRANSMIT:  %s PHY is not ready\n", dev->name );
    dev_kfree_skb_any(skb);
    return 0;
  }
  
  tail_list = priv->txList + priv->txTail;  
  if ( tail_list->cStat != 0x8000 ) {
    if (debug&0x0002) 
      printk_Rsmp_1b7d4074("<7>" "TLAN: " "TRANSMIT:  %s is busy (Head=%d Tail=%d)\n", dev->name, priv->txHead, priv->txTail );
    netif_stop_queue(dev);
    priv->txBusyCount++;
    return 1;
  }
  
  tail_list->forward = 0;  
  if ( bbuf ) {
    tail_buffer = priv->txBuffer + ( priv->txTail * 1600 );
    memcpy( tail_buffer, skb->data, skb->len );
  } else {
    tail_list->buffer[0].address = virt_to_phys( skb->data );
    tail_list->buffer[9].address = (u32) skb;
  }
  
  pad = 64 - skb->len;  
  if ( pad > 0 ) {
    tail_list->frameSize = (u16) skb->len + pad;
    tail_list->buffer[0].count = (u32) skb->len;
    tail_list->buffer[1].count = 0x80000000 | (u32) pad;
    tail_list->buffer[1].address = virt_to_phys( TLanPadBuffer );
  } else {
    tail_list->frameSize = (u16) skb->len;
    tail_list->buffer[0].count = 0x80000000 | (u32) skb->len;
    tail_list->buffer[1].count = 0;
    tail_list->buffer[1].address = 0;
  }
  ///////////////////////////////////////////////////////////////
  spin_lock_irqsave(&priv->lock, flags);
  ///////////////////////////////////////////////////////////////
  tail_list->cStat = 0x3000;
  if ( ! priv->txInProgress ) {
    priv->txInProgress = 1;
    if (debug&0x0002) 
      printk_Rsmp_1b7d4074("<7>" "TLAN: " "TRANSMIT:  Starting TX on buffer %d\n", priv->txTail );
    // TRACER outl( virt_to_phys( tail_list ), dev->base_addr + 0x04 );
    // TRACER outl( 0x80000000, dev->base_addr + 0x00 );
  } 
  else {
    if (debug&0x0002) 
      printk_Rsmp_1b7d4074("<7>" "TLAN: " "TRANSMIT:  Adding buffer %d to TX channel\n", priv->txTail );;
    if ( priv->txTail == 0 ) {
      ( priv->txList + ( 64 - 1 ) )->forward = virt_to_phys( tail_list );
    } else {
      ( priv->txList + ( priv->txTail - 1 ) )->forward = virt_to_phys( tail_list );
    }
  }
  ///////////////////////////////////////////////////////////////
  spin_unlock_irqrestore(&priv->lock, flags);
  ///////////////////////////////////////////////////////////////
  priv->txTail++;
  if ( priv->txTail >= 64 ) priv->txTail = 0;  
  if ( bbuf ) dev_kfree_skb_any(skb);      
  dev->trans_start = jiffies_Rsmp_0da02d67;
  return 0;

}

static void TLan_HandleInterrupt(int irq, void *dev_id, struct pt_regs *regs)
{
  u32 ack;
  struct net_device *dev;
  u32 host_cmd;
  u16 host_int;
  int type;
  TLanPrivateInfo *priv;
  
  dev = dev_id;
  priv = dev->priv;
  
  /////////////////////////////////////////////////////////////
  spin_lock(&priv->lock);
  /////////////////////////////////////////////////////////////
  host_int = inw( dev->base_addr + 0x0A );
  outw( host_int, dev->base_addr + 0x0A );
  
  type = ( host_int & 0x001C ) >> 2;
  
  ack = TLanIntVector[type]( dev, host_int );
  
  if ( ack ) {
    host_cmd = 0x20000000 | ack | ( type << 18 );
    // TRACER outl( host_cmd, dev->base_addr + 0x00 );
  }

  /////////////////////////////////////////////////////////////  
  spin_unlock(&priv->lock);
  /////////////////////////////////////////////////////////////
}

static int TLan_Close(struct net_device *dev)
{
  TLanPrivateInfo *priv = dev->priv;
  
  netif_stop_queue(dev);
  priv->neg_be_verbose = 0;
  
  TLan_ReadAndClearStats( dev, 1 );
  // TRACER outl( 0x00008000, dev->base_addr + 0x00 );
  if ( priv->timer.function != ((void *)0) ) {
    del_timer_sync_Rsmp_daff266a( &priv->timer );
    priv->timer.function = ((void *)0);
  }
  
  free_irq_Rsmp_f20dabd8( dev->irq, dev );
  TLan_FreeLists( dev );
  if (debug&0x0001) 
    printk_Rsmp_1b7d4074("<7>" "TLAN: " "Device %s closed.\n", dev->name );
  
  return 0;
  
}

static struct net_device_stats *TLan_GetStats( struct net_device *dev )
{
  TLanPrivateInfo *priv;
  int i;
  
  priv = dev->priv;  
  TLan_ReadAndClearStats( dev, 1 );
  
  if (debug&0x0004) 
    printk_Rsmp_1b7d4074("<7>" "TLAN: " "RECEIVE:  %s EOC count = %d\n", dev->name, priv->rxEocCount );
  if (debug&0x0002) 
    printk_Rsmp_1b7d4074("<7>" "TLAN: " "TRANSMIT:  %s Busy count = %d\n", dev->name, priv->txBusyCount );

  if ( debug & 0x0001 ) {
    TLan_PrintDio( dev->base_addr );
    TLan_PhyPrint( dev );
  }
  if ( debug & 0x0008 ) {
    //BLAST for loop   for ( i = 0; i < 32; i++ )
    TLan_PrintList( priv->rxList + i, "RX", i );
    //BLAST for loop   for ( i = 0; i < 64; i++ )
    TLan_PrintList( priv->txList + i, "TX", i );
  }
  
  return ( &( (TLanPrivateInfo *) dev->priv )->stats );
}

static void TLan_SetMulticastList( struct net_device *dev )
{
  struct dev_mc_list *dmi;
  u32 hash1;
  u32 hash2;
  int i;
  u32 offset;
  u8 tmp;

  dmi = dev->mc_list;
  hash1 = 0;
  hash2 = 0;
  
  if ( dev->flags & 0x100 ) {
    tmp = TLan_DioRead8( dev->base_addr, 0x00 );
    TLan_DioWrite8( dev->base_addr, 0x00, tmp | 0x10 );
  } 
  else {
    tmp = TLan_DioRead8( dev->base_addr, 0x00 );
    TLan_DioWrite8( dev->base_addr, 0x00, tmp /* & ~0x10 */ );

    if ( dev->flags & 0x200 ) {
      //BLAST for loop for ( i = 0; i < 3; i++ )
      TLan_SetMac( dev, i + 1, ((void *)0) );
      TLan_DioWrite32( dev->base_addr, 0x28, 0xFFFFFFFF );
      TLan_DioWrite32( dev->base_addr, 0x2C, 0xFFFFFFFF );
    } 
    else {
      for ( i = 0; i < dev->mc_count; i++ ) 
	{
	if ( i < 3 ) {
	  TLan_SetMac( dev, i + 1, (char *) &dmi->dmi_addr );
	} else {
	  offset = TLan_HashFunc( (u8 *) &dmi->dmi_addr );
	  if ( offset < 32 )
	    hash1 = hash1 | ( 1 << offset );
	  else
	    hash2 = hash2 | ( 1 << ( offset - 32 ) );
	}
	dmi = dmi->next;
      }

      //BLAST for loop for ( ; i < 3; i++ )
      TLan_SetMac( dev, i + 1, ((void *)0) );
      TLan_DioWrite32( dev->base_addr, 0x28, hash1 );
      TLan_DioWrite32( dev->base_addr, 0x2C, hash2 );
    }
  } 
  return;
}

u32 TLan_HandleInvalid( struct net_device *dev, u16 host_int )
{  
  return 0;
}

u32 TLan_HandleTxEOF( struct net_device *dev, u16 host_int )
{
  TLanPrivateInfo *priv;
  int eoc;
  TLanList *head_list;
  u32 ack;
  u16 tmpCStat;
  int temp_1, temp_2, temp_4, temp_5;

  priv = dev->priv;
  eoc = 0;
  ack = 0;
  
  if (debug&0x0002) 
    printk_Rsmp_1b7d4074("<7>" "TLAN: " "TRANSMIT:  Handling TX EOF (Head=%d Tail=%d)\n", priv->txHead, priv->txTail );;
  head_list = priv->txList + priv->txHead;
  
  while (((tmpCStat /* TRACER = head_list->cStat*/ ) & 0x4000) && (ack < 255)) 
  {
    ack++;
    if ( ! bbuf ) {
      dev_kfree_skb_any( (struct sk_buff *) head_list->buffer[9].address );
      head_list->buffer[9].address = 0;
    }
    
    temp_4 = tmpCStat & 0x0800;
    if (temp_4)
      eoc = 1;    
    priv->stats.tx_bytes += head_list->frameSize;    
    head_list->cStat = 0x8000;
    netif_start_queue(dev);
    priv->txHead++;
    if ( priv->txHead >= 64 ) 
      priv->txHead = 0;
    head_list = priv->txList + priv->txHead;
  }

  if (!ack)
    printk_Rsmp_1b7d4074("<6>" "TLAN: Received interrupt for uncompleted TX frame.\n");
  
  if ( eoc ) {
    temp_5 = debug&0x0002;
    if (temp_5) 
      printk_Rsmp_1b7d4074("<7>" "TLAN: " "TRANSMIT:  Handling TX EOC (Head=%d Tail=%d)\n", priv->txHead, priv->txTail );
    head_list = priv->txList + priv->txHead;

    temp_1 = head_list->cStat & 0x3000 ;
    if (  temp_1 == 0x3000 ) {
      // TRACER outl( virt_to_phys( head_list ), dev->base_addr + 0x04 );
      ack = ack | 0x80000000;
    } 
    else 
      priv->txInProgress = 0;
  }
  
  temp_2 = priv->adapter->flags & 0x00000008;
  if (temp_2) {
    TLan_DioWrite8( dev->base_addr, 0x44, 0x01 | 0x10 );
    if ( priv->timer.function == ((void *)0) ) {
      // TRACER priv->timer.function = &TLan_Timer;
      priv->timer.data = (unsigned long) dev;
      priv->timer.expires = jiffies_Rsmp_0da02d67 + (100/10);
      priv->timerSetAt = jiffies_Rsmp_0da02d67;
      priv->timerType = 2;
      add_timer_Rsmp_a19eacf8(&priv->timer);
    } 
    else if ( priv->timerType == 2 ) {
      priv->timerSetAt = jiffies_Rsmp_0da02d67;
    }
  }  
  return ack;  
}
u32 TLan_HandleStatOverflow( struct net_device *dev, u16 host_int )
{
  TLan_ReadAndClearStats( dev, 1 );  
  return 1;
  
}

u32 TLan_HandleRxEOF( struct net_device *dev, u16 host_int )
{
  TLanPrivateInfo *priv;
  u32 ack;
  int eoc;
  u8 *head_buffer;
  TLanList *head_list;
  struct sk_buff *skb;
  TLanList *tail_list;
  void *t;
  u32 frameSize;
  u16 tmpCStat;
  struct sk_buff *new_skb;

  priv = dev->priv;
  ack = 0;
  eoc = 0;

  if (debug&0x0004) 
    printk_Rsmp_1b7d4074("<7>" "TLAN: " "RECEIVE:  Handling RX EOF (Head=%d Tail=%d)\n", priv->rxHead, priv->rxTail );

  head_list = priv->rxList + priv->rxHead;
  
  tmpCStat = head_list->cStat;
  while (((tmpCStat /* = head_list->cStat */) & 0x4000) && (ack < 255)) {
    frameSize = head_list->frameSize;
    ack++;
    if (tmpCStat & 0x0800)
      eoc = 1;
    
    if (bbuf) {
      skb = dev_alloc_skb(frameSize + 7);
      if (skb == ((void *)0))
	printk_Rsmp_1b7d4074("<6>" "TLAN: Couldn't allocate memory for received data.\n");
      else 
	{
	  head_buffer = priv->rxBuffer + (priv->rxHead * 1600);
	  skb->dev = dev;
	  skb_reserve(skb, 2);
	  t = (void *) skb_put(skb, frameSize);	
	  priv->stats.rx_bytes += head_list->frameSize;	
	  memcpy( t, head_buffer, frameSize );
	  skb->protocol = eth_type_trans_Rsmp_ef9f8c35( skb, dev );
	  netif_rx_Rsmp_4eecbd7e( skb );
	}
    } 
    else 
      {
	// struct sk_buff *new_skb;
	new_skb = dev_alloc_skb( 1600 + 7 );      
	if ( new_skb != ((void *)0) ) {
	  skb = (struct sk_buff *) head_list->buffer[9].address;
	  skb_trim( skb, frameSize );
	  priv->stats.rx_bytes += frameSize;
	  skb->protocol = eth_type_trans_Rsmp_ef9f8c35( skb, dev );
	  netif_rx_Rsmp_4eecbd7e( skb );
	  
	  new_skb->dev = dev;
	  skb_reserve( new_skb, 2 );
	  t = (void *) skb_put( new_skb, 1600 );
	  head_list->buffer[0].address = virt_to_phys( t );
	  head_list->buffer[8].address = (u32) t;
	  head_list->buffer[9].address = (u32) new_skb;
	} else
	  printk_Rsmp_1b7d4074("<4>" "TLAN:  Couldn't allocate memory for received data.\n" );
      }
    
    head_list->forward = 0;
    head_list->cStat = 0;
    tail_list = priv->rxList + priv->rxTail;
    tail_list->forward = virt_to_phys( head_list );
    
    priv->rxHead++;
    if ( priv->rxHead >= 32 ) 
      priv->rxHead = 0;
    priv->rxTail++;
    if ( priv->rxTail >= 32 ) 
      priv->rxTail = 0;
    head_list = priv->rxList + priv->rxHead;
    // TRACER
    tmpCStat = head_list->cStat;
  } // end of while
  
  if (!ack)
    printk_Rsmp_1b7d4074("<6>" "TLAN: Received interrupt for uncompleted RX frame.\n");
  if ( eoc ) {
    if (debug&0x0004) 
      printk_Rsmp_1b7d4074("<7>" "TLAN: " "RECEIVE:  Handling RX EOC (Head=%d Tail=%d)\n", priv->rxHead, priv->rxTail );
    head_list = priv->rxList + priv->rxHead;
    // TRACER outl( virt_to_phys( head_list ), dev->base_addr + 0x04 );
    ack= ack | 0x80000000 | 0x00080000;
    priv->rxEocCount++;
  }
  
  if ( priv->adapter->flags & 0x00000008 ) {
    TLan_DioWrite8( dev->base_addr, 0x44, 0x01 | 0x10 );
    if ( priv->timer.function == ((void *)0) ) {
      // TRACER priv->timer.function = &TLan_Timer;
      priv->timer.data = (unsigned long) dev;
      priv->timer.expires = jiffies_Rsmp_0da02d67 + (100/10);
      priv->timerSetAt = jiffies_Rsmp_0da02d67;
      priv->timerType = 2;
      add_timer_Rsmp_a19eacf8(&priv->timer);
    } else if ( priv->timerType == 2 ) {
      priv->timerSetAt = jiffies_Rsmp_0da02d67;
    }
  }
  dev->last_rx = jiffies_Rsmp_0da02d67;  
  return ack;
}
u32 TLan_HandleDummy( struct net_device *dev, u16 host_int )
{
  printk_Rsmp_1b7d4074( "TLAN:  Test interrupt on %s.\n", dev->name );
  return 1;
  
}

u32 TLan_HandleTxEOC( struct net_device *dev, u16 host_int )
{
  TLanPrivateInfo *priv;
  TLanList *head_list;
  u32 ack;

  priv = dev->priv;
  ack = 1;
  
  host_int = 0;
  if ( priv->tlanRev < 0x30 ) {
    if (debug&0x0002) 
      printk_Rsmp_1b7d4074("<7>" "TLAN: " "TRANSMIT:  Handling TX EOC (Head=%d Tail=%d) -- IRQ\n", priv->txHead, priv->txTail );
    head_list = priv->txList + priv->txHead;
    if ( ( head_list->cStat & 0x3000 ) == 0x3000 ) {
      netif_stop_queue(dev);
      // TRACER outl( virt_to_phys( head_list ), dev->base_addr + 0x04 );
      ack = ack | 0x80000000;
    } else {
      priv->txInProgress = 0;
    }
  }  
  return ack;  
}

u32 TLan_HandleStatusCheck( struct net_device *dev, u16 host_int )
{
  TLanPrivateInfo *priv;
  u32 ack;
  u32 error;
  u8 net_sts;
  u32 phy;
  u16 tlphy_ctl;
  u16 tlphy_sts;
  
  priv = dev->priv;
  ack = 1;

  if ( host_int & 0x1FE0 ) {
    netif_stop_queue( dev );
    error = inl( dev->base_addr + 0x04 );
    printk_Rsmp_1b7d4074( "TLAN:  %s: Adaptor Error = 0x%x\n", dev->name, error );
    TLan_ReadAndClearStats( dev, 1 );
    // TRACER outl( 0x00008000, dev->base_addr + 0x00 );    
    queue_task(&priv->tlan_tqueue, &tq_immediate_Rsmp_0da0dcd1);
    mark_bh(IMMEDIATE_BH);    
    netif_wake_queue(dev);
    ack = 0;
  } 
  else 
    {
      if (debug&0x0001) 
	printk_Rsmp_1b7d4074("<7>" "TLAN: " "%s: Status Check\n", dev->name );
      phy = priv->phy[priv->phyNum];
      
      net_sts = TLan_DioRead8( dev->base_addr, 0x02 );
      if ( net_sts ) {
	TLan_DioWrite8( dev->base_addr, 0x02, net_sts );
	if (debug&0x0001) 
	  printk_Rsmp_1b7d4074("<7>" "TLAN: " "%s:    Net_Sts = %x\n", dev->name, (unsigned) net_sts );
      }
      if ( ( net_sts & 0x80 ) && ( priv->phyNum == 0 ) ) {
	TLan_MiiReadReg( dev, phy, 0x12, &tlphy_sts );
	TLan_MiiReadReg( dev, phy, 0x11, &tlphy_ctl );
	if ( ! ( tlphy_sts & 0x2000 ) && ! ( tlphy_ctl & 0x4000 ) ) {
	  tlphy_ctl = tlphy_ctl | 0x4000;
	  TLan_MiiWriteReg( dev, phy, 0x11, tlphy_ctl);
	} 
	else if ( ( tlphy_sts & 0x2000 ) && ( tlphy_ctl & 0x4000 ) ) {
	  // tlphy_ctl  &= ~0x4000;
	  TLan_MiiWriteReg( dev, phy, 0x11, tlphy_ctl);
	}
	
	if (debug)  TLan_PhyPrint( dev );	
      }
    }
  return ack;  
}

u32 TLan_HandleRxEOC( struct net_device *dev, u16 host_int )
{
  TLanPrivateInfo *priv;
  TLanList *head_list;
  u32 ack;

  priv = dev->priv;
  ack = 1;
  
  if ( priv->tlanRev < 0x30 ) {
    if (debug&0x0004) 
      printk_Rsmp_1b7d4074("<7>" "TLAN: " "RECEIVE:  Handling RX EOC (Head=%d Tail=%d) -- IRQ\n", priv->rxHead, priv->rxTail );

    head_list = priv->rxList + priv->rxHead;
    // TRACER outl( virt_to_phys( head_list ), dev->base_addr + 0x04 );
    ack = ack | 0x80000000 | 0x00080000;
    priv->rxEocCount++;
  }
  
  return ack;  
}

void TLan_Timer( unsigned long data )
{
  struct net_device *dev;
  TLanPrivateInfo *priv;
  u32 elapsed;
  unsigned long flags;

  dev = (struct net_device *) data;
  priv = dev->priv;
  flags = 0;
  
  priv->timer.function = ((void *)0);  
  switch ( priv->timerType ) {
  case 3:
    TLan_PhyPowerDown( dev );
    break;
  case 4:
    TLan_PhyPowerUp( dev );
    break;
  case 5:
    TLan_PhyReset( dev );
    break;
  case 6:
    TLan_PhyStartLink( dev );
    break;
  case 7:
    TLan_PhyFinishAutoNeg( dev );
    break;
  case 8:
    TLan_FinishReset( dev );
    break;
  case 2:
    ///////////////////////////////////////////////////////////////
    spin_lock_irqsave(&priv->lock, flags);
    ///////////////////////////////////////////////////////////////
    if ( priv->timer.function == ((void *)0) ) {
      elapsed = jiffies_Rsmp_0da02d67 - priv->timerSetAt;
      if ( elapsed >= (100/10) ) {
	TLan_DioWrite8( dev->base_addr, 0x44, 0x01 );
      } 
      else {
	priv->timer.function = &TLan_Timer;
	priv->timer.expires = priv->timerSetAt + (100/10);
	///////////////////////////////////////////////////////////////
	spin_unlock_irqrestore(&priv->lock, flags);
	///////////////////////////////////////////////////////////////
	add_timer_Rsmp_a19eacf8( &priv->timer );
	break;
      }
    }
    ///////////////////////////////////////////////////////////////
    spin_unlock_irqrestore(&priv->lock, flags);
    ///////////////////////////////////////////////////////////////
    break;
  default:
    break;
  }
}

void TLan_ResetLists( struct net_device *dev )
{
  TLanPrivateInfo *priv;
  int i;
  TLanList *list;
  struct sk_buff *skb;
  void *t;

  priv = dev->priv;
  t = ((void *)0);

  
  priv->txHead = 0;
  priv->txTail = 0;
  //BLAST for loop for ( i = 0; i < 64; i++ ) {
  list = priv->txList + i;
  list->cStat = 0x8000;

  if ( bbuf ) 
    list->buffer[0].address = virt_to_phys( priv->txBuffer + ( i * 1600 ) );
  else 
    list->buffer[0].address = 0;

  list->buffer[2].count = 0;
  list->buffer[2].address = 0;
  list->buffer[9].address = 0;
  //}

  priv->rxHead = 0;
  priv->rxTail = 32 - 1;
  //BLAST for loop for ( i = 0; i < 32; i++ ) {
  list = priv->rxList + i;
  list->cStat = 0x3000;
  list->frameSize = 1600;
  list->buffer[0].count = 1600 | 0x80000000;

  if ( bbuf ) 
    list->buffer[0].address = virt_to_phys( priv->rxBuffer + ( i * 1600 ) );
  else 
    {
      skb = dev_alloc_skb( 1600 + 7 );
      if ( skb == ((void *)0) ) 
	printk_Rsmp_1b7d4074( "TLAN:  Couldn't allocate memory for received data.\n" );	
      else 
	{
	  skb->dev = dev;
	  skb_reserve( skb, 2 );
	  t = (void *) skb_put( skb, 1600 );
	}
      list->buffer[0].address = virt_to_phys( t );
      list->buffer[8].address = (u32) t;
      list->buffer[9].address = (u32) skb;
    }
  list->buffer[1].count = 0;
  list->buffer[1].address = 0;
  if ( i < 32 - 1 )
    list->forward = virt_to_phys( list + 1 );
  else
    list->forward = 0;
  //}

  return;
}


void TLan_FreeLists( struct net_device *dev )
{
  TLanPrivateInfo *priv = dev->priv;
  int i;
  TLanList *list;
  struct sk_buff *skb;

  priv = dev->priv;
  
  if ( ! bbuf ) {
    //BLAST for loop for ( i = 0; i < 64; i++ ) {
    list = priv->txList + i;
    skb = (struct sk_buff *) list->buffer[9].address;
    if ( skb ) {
      dev_kfree_skb_any( skb );
      list->buffer[9].address = 0;
    }
    //}
    
    //BLAST for loop for ( i = 0; i < 32; i++ ) {
    list = priv->rxList + i;
    skb = (struct sk_buff *) list->buffer[9].address;
    if ( skb ) {
      dev_kfree_skb_any( skb );
      list->buffer[9].address = 0;
    }
    //}
  }
  return;
}


void TLan_PrintDio( u16 io_base )
{
  u32 data0, data1;
  int i;
  
  printk_Rsmp_1b7d4074( "TLAN:   Contents of internal registers for io base 0x%04hx.\n", io_base );
  printk_Rsmp_1b7d4074( "TLAN:      Off.  +0         +4\n" );
  //BLAST for loop for ( i = 0; i < 0x4C; i+= 8 ) {
  data0 = TLan_DioRead32( io_base, i );
  data1 = TLan_DioRead32( io_base, i + 0x4 );
  printk_Rsmp_1b7d4074( "TLAN:      0x%02x  0x%08x 0x%08x\n", i, data0, data1 );
  //}
  return;
}

void TLan_PrintList( TLanList *list, char *type, int num)
{
  int i;
  
  printk_Rsmp_1b7d4074( "TLAN:   %s List %d at 0x%08x\n", type, num, (u32) list );
  printk_Rsmp_1b7d4074( "TLAN:      Forward    = 0x%08x\n", list->forward );
  printk_Rsmp_1b7d4074( "TLAN:      CSTAT      = 0x%04hx\n", list->cStat );
  printk_Rsmp_1b7d4074( "TLAN:      Frame Size = 0x%04hx\n", list->frameSize );
  
  //BLAST for loop        for ( i = 0; i < 2; i++ ) {
  printk_Rsmp_1b7d4074( "TLAN:      Buffer[%d].count, addr = 0x%08x, 0x%08x\n", i, list->buffer[i].count, list->buffer[i].address );
  //}
  return;
}

void TLan_ReadAndClearStats( struct net_device *dev, int record )
{
  TLanPrivateInfo *priv;
  u32 tx_good, tx_under;
  u32 rx_good, rx_over;
  u32 def_tx, crc, code;
  u32 multi_col, single_col;
  u32 excess_col, late_col, loss;

  priv = dev->priv;
  
  outw( 0x30, dev->base_addr + 0x08 );
  tx_good = inb( dev->base_addr + 0x0C );
  tx_good += inb( dev->base_addr + 0x0C + 1 ) << 8;
  tx_good += inb( dev->base_addr + 0x0C + 2 ) << 16;
  tx_under = inb( dev->base_addr + 0x0C + 3 );
  
  outw( 0x34, dev->base_addr + 0x08 );
  rx_good = inb( dev->base_addr + 0x0C );
  rx_good += inb( dev->base_addr + 0x0C + 1 ) << 8;
  rx_good += inb( dev->base_addr + 0x0C + 2 ) << 16;
  rx_over = inb( dev->base_addr + 0x0C + 3 );

  outw( 0x38, dev->base_addr + 0x08 );
  def_tx = inb( dev->base_addr + 0x0C );
  def_tx += inb( dev->base_addr + 0x0C + 1 ) << 8;
  crc = inb( dev->base_addr + 0x0C + 2 );
  code = inb( dev->base_addr + 0x0C + 3 );
  
  outw( 0x3C, dev->base_addr + 0x08 );
  multi_col = inb( dev->base_addr + 0x0C );
  multi_col += inb( dev->base_addr + 0x0C + 1 ) << 8;
  single_col = inb( dev->base_addr + 0x0C + 2 );
  single_col += inb( dev->base_addr + 0x0C + 3 ) << 8;
  
  outw( 0x40, dev->base_addr + 0x08 );
  excess_col = inb( dev->base_addr + 0x0C );
  late_col = inb( dev->base_addr + 0x0C + 1 );
  loss = inb( dev->base_addr + 0x0C + 2 );
  
  if ( record ) {
    priv->stats.rx_packets += rx_good;
    priv->stats.rx_errors += rx_over + crc + code;
    priv->stats.tx_packets += tx_good;
    priv->stats.tx_errors += tx_under + loss;
    priv->stats.collisions += multi_col + single_col + excess_col + late_col;
    
    priv->stats.rx_over_errors += rx_over;
    priv->stats.rx_crc_errors += crc;
    priv->stats.rx_frame_errors += code;
    
    priv->stats.tx_aborted_errors += tx_under;
    priv->stats.tx_carrier_errors += loss;
  }  
  return;
}


void TLan_ResetAdapter( struct net_device *dev )
{
  TLanPrivateInfo *priv;
  int i;
  u32 addr;
  u32 data;
  u8 data8;

  priv = dev->priv;
  priv->tlanFullDuplex = 0;
  priv->phyOnline=0;
    
  data = inl(dev->base_addr + 0x00);
  data = data | 0x00008000;
  // TRACER outl(data, dev->base_addr + 0x00);  
  udelay(1000);
  data = inl(dev->base_addr + 0x00);
  data = data | 0x00000800;
  // TRACER outl(data, dev->base_addr + 0x00);
  //BLAST for loop for ( i = 0x10; i <= 0x2C; i += 4 ) {
  TLan_DioWrite32( dev->base_addr, (u16) i, 0 );
  // }
  data = 0x0400 | 0x0200 | 0x0080;
  TLan_DioWrite16( dev->base_addr, 0x04, (u16) data );
  // TRACER outl( 0x00004000 | 0x3f, dev->base_addr + 0x00 );
  // TRACER outl( 0x00002000 | 0x9, dev->base_addr + 0x00 );
  outw( 0x01, dev->base_addr + 0x08 );
  addr = dev->base_addr + 0x0C + 0x01;
  // TRACER outb_p(inb_p(addr) | 0x08, addr);
  
  if ( priv->tlanRev >= 0x30 ) {
    data8 = 0x04 | 0x01;
    TLan_DioWrite8( dev->base_addr, 0x48, data8 );
  }
  TLan_PhyDetect( dev );
  data = 0x0400 | 0x0200;
  
  if ( priv->adapter->flags & 0x00000002 ) {
    data |= 0x2000;
    if ( priv->aui == 1 ) {
      TLan_DioWrite8( dev->base_addr, 0x43, 0x0a );
    } else if ( priv->duplex == 2 ) {
      TLan_DioWrite8( dev->base_addr, 0x43, 0x00 );
      priv->tlanFullDuplex = 1;
    } else 
      TLan_DioWrite8( dev->base_addr, 0x43, 0x08 );
  }
  
  if ( priv->phyNum == 0 )  data = data | 0x0080;    
  TLan_DioWrite16( dev->base_addr, 0x04, (u16) data );  

  if ( priv->adapter->flags & 0x00000001 ) 
    TLan_FinishReset( dev );
  else 
    TLan_PhyPowerDown( dev );
 
  return;
}

void TLan_FinishReset( struct net_device *dev )
{
  TLanPrivateInfo *priv = dev->priv;
  u8 data;
  u32 phy;
  u8 sio;
  u16 status;
  u16 partner;
  u16 tlphy_ctl;
  u16 tlphy_par;
  u16 tlphy_id1, tlphy_id2;
  int i;
  
  priv = dev->priv;
  phy = priv->phy[priv->phyNum];
  
  data = 0x80 | 0x40;
  if ( priv->tlanFullDuplex ) {
    data = data | 0x04;
  }
  TLan_DioWrite8( dev->base_addr, 0x00, data );
  data = 0x10 | 0x20;
  if ( priv->phyNum == 0 ) {
    data = data | 0x80;
  }
  TLan_DioWrite8( dev->base_addr, 0x03, data );
  TLan_DioWrite16( dev->base_addr, 0x46, ((1536)+7)/* &~7 */ );
  TLan_MiiReadReg( dev, phy, 0x02, &tlphy_id1 );
  TLan_MiiReadReg( dev, phy, 0x03, &tlphy_id2 );

  if ( ( priv->adapter->flags & 0x00000001 ) || ( priv->aui ) ) {
    status = 0x0004;
    printk_Rsmp_1b7d4074( "TLAN:  %s: Link forced.\n", dev->name );
  } 
  else {
    TLan_MiiReadReg( dev, phy, 0x01, &status );
    udelay( 1000 );
    TLan_MiiReadReg( dev, phy, 0x01, &status );
    if ( (status & 0x0004) && (tlphy_id1 == 0x2000) && (tlphy_id2 == 0x5C01) )	 
      {
	TLan_MiiReadReg( dev, phy, 0x05, &partner );
	TLan_MiiReadReg( dev, phy, 0x19, &tlphy_par );	
	printk_Rsmp_1b7d4074( "TLAN: %s: Link active with ", dev->name );
	if (!(tlphy_par & 0x0400)) 
	  {
	    printk_Rsmp_1b7d4074( "forced 10%sMbps %s-Duplex\n",
				  tlphy_par & 0x0040 ? "" : "0",
				  tlphy_par & 0x0080 ? "Full" : "Half");
	  } 
	else {
	  printk_Rsmp_1b7d4074( "AutoNegotiation enabled, at 10%sMbps %s-Duplex\n",
				tlphy_par & 0x0040 ? "" : "0",
				tlphy_par & 0x0080 ? "Full" : "Half");
	  printk_Rsmp_1b7d4074("TLAN: Partner capability: ");
	  //BLAST for loop for (i = 5; i <= 10; i++)
	  if (partner & (1<<i))
	    printk_Rsmp_1b7d4074("%s", media[i-5]);
	  printk_Rsmp_1b7d4074("\n");
	}	
	TLan_DioWrite8( dev->base_addr, 0x44, 0x01 );
      } else if (status & 0x0004) {
      printk_Rsmp_1b7d4074( "TLAN: %s: Link active\n", dev->name );
      TLan_DioWrite8( dev->base_addr, 0x44, 0x01 );
    }
  }
  if ( priv->phyNum == 0 ) {
    TLan_MiiReadReg( dev, phy, 0x11, &tlphy_ctl );
    tlphy_ctl = tlphy_ctl | 0x0002;
    TLan_MiiWriteReg( dev, phy, 0x11, tlphy_ctl );
    sio = TLan_DioRead8( dev->base_addr, 0x01 );
    sio = sio | 0x80;
    TLan_DioWrite8( dev->base_addr, 0x01, sio );
  }

  if ( status & 0x0004 ) {
    TLan_SetMac( dev, 0, dev->dev_addr );
    priv->phyOnline = 1;
    // TRACER outb( ( 0x00000400 >> 8 ), dev->base_addr + 0x00 + 1 );
    if ( debug >= 1 && debug != 0x0010 ) {
      // TRACER outb( ( 0x00001000 >> 8 ), dev->base_addr + 0x00 + 1 );
    }
    // TRACER outl( virt_to_phys( priv->rxList ), dev->base_addr + 0x04 );
    // TRACER outl( 0x80000000 | 0x00080000, dev->base_addr + 0x00 );
  } else {
    printk_Rsmp_1b7d4074( "TLAN: %s: Link inactive, will retry in 10 secs...\n", dev->name );
    TLan_SetTimer( dev, (10*100), 8 );
    return;
  }  
}


void TLan_SetMac( struct net_device *dev, int areg, char *mac )
{
  int i;
  
  areg *= 6;
  
  if ( mac != ((void *)0) ) {
    //BLAST for loop for ( i = 0; i < 6; i++ )
    TLan_DioWrite8( dev->base_addr, 0x10 + areg + i, mac[i] );
  } else {
    //BLAST for loop for ( i = 0; i < 6; i++ )
    TLan_DioWrite8( dev->base_addr, 0x10 + areg + i, 0 );
  }
  return;
}

void TLan_PhyPrint( struct net_device *dev )
{
  TLanPrivateInfo *priv;
  u16 i, data0, data1, data2, data3, phy;
  
  priv = dev->priv;
  phy = priv->phy[priv->phyNum];
  
  if ( priv->adapter->flags & 0x00000001 ) {
    printk_Rsmp_1b7d4074( "TLAN:   Device %s, Unmanaged PHY.\n", dev->name );
  } else if ( phy <= 0x1F ) {
    printk_Rsmp_1b7d4074( "TLAN:   Device %s, PHY 0x%02x.\n", dev->name, phy );
    printk_Rsmp_1b7d4074( "TLAN:      Off.  +0     +1     +2     +3 \n" );
    //BLAST for loop for ( i = 0; i < 0x20; i+= 4 ) {
    printk_Rsmp_1b7d4074( "TLAN:      0x%02x", i );
    TLan_MiiReadReg( dev, phy, i, &data0 );
    printk_Rsmp_1b7d4074( " 0x%04hx", data0 );
    TLan_MiiReadReg( dev, phy, i + 1, &data1 );
    printk_Rsmp_1b7d4074( " 0x%04hx", data1 );
    TLan_MiiReadReg( dev, phy, i + 2, &data2 );
    printk_Rsmp_1b7d4074( " 0x%04hx", data2 );
    TLan_MiiReadReg( dev, phy, i + 3, &data3 );
    printk_Rsmp_1b7d4074( " 0x%04hx\n", data3 );
    //}
  } 
  else {
    printk_Rsmp_1b7d4074( "TLAN:   Device %s, Invalid PHY.\n", dev->name );
  }  
  return;  
}

void TLan_PhyDetect( struct net_device *dev )
{
  TLanPrivateInfo *priv = dev->priv;
  u16 control;
  u16 hi;
  u16 lo;
  u32 phy;
  
  priv = dev->priv;
  
  if ( priv->adapter->flags & 0x00000001 ) {
    priv->phyNum = 0xFFFF;
    return;
  }  
  TLan_MiiReadReg( dev, 0x1F, 0x02, &hi );  
  if ( hi != 0xFFFF ) 
    priv->phy[0] = 0x1F;
  else 
    priv->phy[0] = 0x20;
  
  priv->phy[1] = 0x20;
  //BLAST for loop for ( phy = 0; phy <= 0x1F; phy++ ) {
  TLan_MiiReadReg( dev, phy, 0x00, &control );
  TLan_MiiReadReg( dev, phy, 0x02, &hi );
  TLan_MiiReadReg( dev, phy, 0x03, &lo );
  if ( ( control != 0xFFFF ) || ( hi != 0xFFFF ) || ( lo != 0xFFFF ) ) {
    if (debug&0x0001) 
      printk_Rsmp_1b7d4074("<7>" "TLAN: " "PHY found at %02x %04x %04x %04x\n", phy, control, hi, lo );
    if ( ( priv->phy[1] == 0x20 ) && ( phy != 0x1F ) ) {
      priv->phy[1] = phy;
    }
  }
  //}
  
  if ( priv->phy[1] != 0x20 ) {
    priv->phyNum = 1;
  } else if ( priv->phy[0] != 0x20 ) {
    priv->phyNum = 0;
  } else 
    printk_Rsmp_1b7d4074( "TLAN:  Cannot initialize device, no PHY was found!\n" );
}

void TLan_PhyPowerDown( struct net_device *dev )
{
  TLanPrivateInfo *priv;  
  u16 value;
  
  priv = dev->priv;
  if (debug&0x0001) 
    printk_Rsmp_1b7d4074("<7>" "TLAN: " "%s: Powering down PHY(s).\n", dev->name );

  value = 0x0800 | 0x4000 | 0x0400;
  TLan_MiiSync( dev->base_addr );
  TLan_MiiWriteReg( dev, priv->phy[priv->phyNum], 0x00, value );
  if ( ( priv->phyNum == 0 ) && ( priv->phy[1] != 0x20 ) && ( ! ( priv->adapter->flags & 0x00000004 ) ) ) {
    TLan_MiiSync( dev->base_addr );
    TLan_MiiWriteReg( dev, priv->phy[1], 0x00, value );
  }    

  TLan_SetTimer( dev, (100/20), 4 );
  return;
}

void TLan_PhyPowerUp( struct net_device *dev )
{
  TLanPrivateInfo *priv;
  u16 value;
  
  priv = dev->priv;
  if (debug&0x0001) 
    printk_Rsmp_1b7d4074("<7>" "TLAN: " "%s: Powering up PHY.\n", dev->name );
  TLan_MiiSync( dev->base_addr );
  value = 0x4000;
  TLan_MiiWriteReg( dev, priv->phy[priv->phyNum], 0x00, value );
  TLan_MiiSync(dev->base_addr);        
  TLan_SetTimer( dev, (100/20), 5 );

}

void TLan_PhyReset( struct net_device *dev )
{
  TLanPrivateInfo *priv;
  u16 phy;
  u16 value;
  
  priv = dev->priv;
  phy = priv->phy[priv->phyNum];

  if (debug&0x0001) 
    printk_Rsmp_1b7d4074("<7>" "TLAN: " "%s: Reseting PHY.\n", dev->name );
  TLan_MiiSync( dev->base_addr );
  value = 0x4000 | 0x8000;
  TLan_MiiWriteReg( dev, phy, 0x00, value );
  TLan_MiiReadReg( dev, phy, 0x00, &value );
  while ( value & 0x8000 ) {
    TLan_MiiReadReg( dev, phy, 0x00, &value );
  }
        
  TLan_SetTimer( dev, (100/20), 6 );

}

void TLan_PhyStartLink( struct net_device *dev )
{
  TLanPrivateInfo *priv;
  u16 ability;
  u16 control;
  u16 data;
  u16 phy;
  u16 status;
  u16 tctl;

  priv = dev->priv;
 
  phy = priv->phy[priv->phyNum];
  if (debug&0x0001) 
    printk_Rsmp_1b7d4074("<7>" "TLAN: " "%s: Trying to activate link.\n", dev->name );

  TLan_MiiReadReg( dev, phy, 0x01, &status );
  TLan_MiiReadReg( dev, phy, 0x01, &ability );

  if ( ( status & 0x0008 ) && ( ! priv->aui ) ) {
    ability = status >> 11;
    if ( priv->speed == 10 && priv->duplex == 1) {	 
      TLan_MiiWriteReg( dev, phy, 0x00, 0x0000);
    } else if ( priv->speed == 10 && priv->duplex == 2) {		
      priv->tlanFullDuplex = 1;
      TLan_MiiWriteReg( dev, phy, 0x00, 0x0100);
    } else if ( priv->speed == 100 && priv->duplex == 1) {		
      TLan_MiiWriteReg( dev, phy, 0x00, 0x2000);
    } else if ( priv->speed == 100 && priv->duplex == 2) {		
      priv->tlanFullDuplex = 1;
      TLan_MiiWriteReg( dev, phy, 0x00, 0x2100);
    } else 
      {      	
	TLan_MiiWriteReg( dev, phy, 0x04, (ability << 5) | 1);	
	TLan_MiiWriteReg( dev, phy, 0x00, 0x1000 );	
	TLan_MiiWriteReg( dev, phy, 0x00, 0x1200 );
	printk_Rsmp_1b7d4074( "TLAN: %s: Starting autonegotiation.\n", dev->name );
	TLan_SetTimer( dev, (2*100), 7 );
	return;
      }
    
  }

  if ( ( priv->aui ) && ( priv->phyNum != 0 ) ) {
    priv->phyNum = 0;
    data = 0x0400 | 0x0200 | 0x0080;
    TLan_DioWrite16( dev->base_addr, 0x04, data );
    TLan_SetTimer( dev, (40*100/1000), 3 );
    return;
  } else if ( priv->phyNum == 0 ) {
    TLan_MiiReadReg( dev, phy, 0x11, &tctl );
    if ( priv->aui ) 
      tctl = tctl | 0x2000;
    else {
      tctl = tctl & /* ~ */0x2000;
      control = 0;
      if ( priv->duplex == 2 ) {
	control = control | 0x0100;
	priv->tlanFullDuplex = 1;
      }
      if ( priv->speed == 100 )  control = control | 0x2000;	
      TLan_MiiWriteReg( dev, phy, 0x00, control );
    }
    TLan_MiiWriteReg( dev, phy, 0x11, tctl );
  }        
  TLan_SetTimer( dev, (4*100), 8 );
}


void TLan_PhyFinishAutoNeg( struct net_device *dev )
{
  TLanPrivateInfo *priv;
  u16 an_adv;
  u16 an_lpa;
  u16 data;
  u16 mode;
  u16 phy;
  u16 status;

  priv = dev->priv;
  phy = priv->phy[priv->phyNum];

  TLan_MiiReadReg( dev, phy, 0x01, &status );
  udelay( 1000 );
  TLan_MiiReadReg( dev, phy, 0x01, &status );
  
  if ( ! ( status & 0x0020 ) ) {            
    if (!priv->neg_be_verbose/* ++ */) {
      priv->neg_be_verbose++;
      printk_Rsmp_1b7d4074("<6>" "TLAN:  Giving autonegotiation more time.\n");
      printk_Rsmp_1b7d4074("<6>" "TLAN:  Please check that your adapter has\n");
      printk_Rsmp_1b7d4074("<6>" "TLAN:  been properly connected to a HUB or Switch.\n");
      printk_Rsmp_1b7d4074("<6>" "TLAN:  Trying to establish link in the background...\n");
    }
    else{
      priv->neg_be_verbose++;
    }

    TLan_SetTimer( dev, (8*100), 7 );
    return;
  }
  
  printk_Rsmp_1b7d4074( "TLAN: %s: Autonegotiation complete.\n", dev->name );
  TLan_MiiReadReg( dev, phy, 0x04, &an_adv );
  TLan_MiiReadReg( dev, phy, 0x05, &an_lpa );
  mode = an_adv & an_lpa & 0x03E0;
  if ( mode & 0x0100 ) {
    priv->tlanFullDuplex = 1;
  } else if ( ! ( mode & 0x0080 ) && ( mode & 0x0040 ) ) {
    priv->tlanFullDuplex = 1;
  }
  
  if ( ( ! ( mode & 0x0180 ) ) && ( priv->adapter->flags & 0x00000004 ) && ( priv->phyNum != 0 ) ) {
    priv->phyNum = 0;
    data = 0x0400 | 0x0200 | 0x0080;
    TLan_DioWrite16( dev->base_addr, 0x04, data );
    TLan_SetTimer( dev, (400*100/1000), 3 );
    return;
  }

  if ( priv->phyNum == 0 ) {
    if ( ( priv->duplex == 2 ) || ( an_adv & an_lpa & 0x0040 ) ) {
      TLan_MiiWriteReg( dev, phy, 0x00, 0x1000 | 0x0100 );
      printk_Rsmp_1b7d4074( "TLAN:  Starting internal PHY with FULL-DUPLEX\n" );
    } else {
      TLan_MiiWriteReg( dev, phy, 0x00, 0x1000 );
      printk_Rsmp_1b7d4074( "TLAN:  Starting internal PHY with HALF-DUPLEX\n" );
    }
  }      
  TLan_SetTimer( dev, (100/10), 8 );
}

int TLan_MiiReadReg( struct net_device *dev, u16 phy, u16 reg, u16 *val )
{
  u8 nack;
  u16 sio, tmp;
  u32 i;
  int err;
  int minten;
  TLanPrivateInfo *priv;
  unsigned long flags;
  int temp_1;
  
  priv = dev->priv;
  flags = 0;
  
  err = 0;
  outw(0x01, dev->base_addr + 0x08);
  sio = dev->base_addr + 0x0C + 0x01;
  
  if (!in_irq){
    /////////////////////////////////////////////////// 
    spin_lock_irqsave(&priv->lock, flags);
    /////////////////////////////////////////////////// 
  }

  TLan_MiiSync(dev->base_addr);
  
  minten = ((int) (inb_p(sio) & 0x80));
  if ( minten ){ 
    // TRACER outb_p(inb_p(sio) & /* ~ */0x80, sio);
  }

  TLan_MiiSendData( dev->base_addr, 0x1, 2 );
  TLan_MiiSendData( dev->base_addr, 0x2, 2 );
  TLan_MiiSendData( dev->base_addr, phy, 5 );
  TLan_MiiSendData( dev->base_addr, reg, 5 );
  
  
  // TRACER outb_p(inb_p(sio) & /* ~ */0x02, sio);
  
  // TRACER outb_p(inb_p(sio) & /* ~ */0x04, sio);
  // TRACER outb_p(inb_p(sio) | 0x04, sio);
  // TRACER outb_p(inb_p(sio) & /* ~ */0x04, sio);
  
  nack = ((int) (inb_p(sio) & 0x01));
  // TRACER outb_p(inb_p(sio) | 0x04, sio);
  if (nack) {
    //BLAST for loopfor (i = 0; i < 16; i++) {
    // TRACER outb_p(inb_p(sio) & /*~*/0x04, sio);
    // TRACER outb_p(inb_p(sio) | 0x04, sio);
    //}
    tmp = 0xffff;
    err = 1;
  } else {
    //BLAST for loop for (tmp = 0, i = 0x8000; i; i >>= 1) {
    // TRACER outb_p(inb_p(sio) & /*~*/0x04, sio);
    temp_1 = inb_p(sio);
    if (((int) (temp_1 & 0x01)))
      tmp = tmp | i;
    // TRACER outb_p(inb_p(sio) | 0x04, sio);
    //}
  }
  
  
  // TRACER outb_p(inb_p(sio) & /*~*/0x04, sio);
  // TRACER outb_p(inb_p(sio) | 0x04, sio);
  
  if ( minten ){
    // TRACER outb_p(inb_p(sio) | 0x80, sio);
  }

  *val = tmp;
  
  if (!in_irq){
    /////////////////////////////////////////////////// 
    spin_unlock_irqrestore(&priv->lock, flags);
    /////////////////////////////////////////////////// 
  }
  
  return err;
  
}

void TLan_MiiSendData( u16 base_port, u32 data, unsigned num_bits )
{
  u16 sio;
  u32 i;
  int TRACER_NONDET;
  
  if ( num_bits == 0 )
    return;
  
  outw( 0x01, base_port + 0x08 );
  sio = base_port + 0x0C + 0x01;
  // TRACER outb_p(inb_p(sio) | 0x02, sio);
  
  // TRACER  for (i = ( 0x1 << ( num_bits - 1 ) ); i; i >>= 1  ) {
  while(TRACER_NONDET){
    // TRACER outb_p(inb_p(sio) & /*~*/0x04, sio);
    (void) ((int) (inb_p(sio) & 0x04));
    if ( data & i ) { 
      // TRACER outb_p(inb_p(sio) | 0x01, sio);
    }
    else {
      //TRACER outb_p(inb_p(sio) & /*~*/0x01, sio); 
    }
    // TRACER outb_p(inb_p(sio) | 0x04, sio);
    (void) ((int) (inb_p(sio) & 0x04));
  }  
}

void TLan_MiiSync( u16 base_port )
{
  int i;
  u16 sio;
  
  outw( 0x01, base_port + 0x08 );
  sio = base_port + 0x0C + 0x01;
  
  // TRACER outb_p(inb_p(sio) & /*~*/0x02, sio);
  //BLAST for loop for ( i = 0; i < 32; i++ ) {
  // TRACER outb_p(inb_p(sio) & /*~*/0x04, sio);
  // TRACER outb_p(inb_p(sio) | 0x04, sio);
  //}  
}


void TLan_MiiWriteReg( struct net_device *dev, u16 phy, u16 reg, u16 val )
{
  u16 sio;
  int minten;
  unsigned long flags;
  TLanPrivateInfo *priv;

  unsigned char temp1,temp2;
  
  flags = 0;
  priv = dev->priv;

  outw(0x01, dev->base_addr + 0x08);
  sio = dev->base_addr + 0x0C + 0x01;
  
  if (!in_irq){
    /////////////////////////////////////////////////////
    spin_lock_irqsave(&priv->lock, flags);
    /////////////////////////////////////////////////////
  }
  
  TLan_MiiSync( dev->base_addr );
  
  minten = ((int) (inb_p(sio) & 0x80));
  if ( minten ){
    // TRACER outb_p(inb_p(sio) & /*~*/0x80, sio);
  }

  TLan_MiiSendData( dev->base_addr, 0x1, 2 );
  TLan_MiiSendData( dev->base_addr, 0x1, 2 );
  TLan_MiiSendData( dev->base_addr, phy, 5 );
  TLan_MiiSendData( dev->base_addr, reg, 5 );
  
  TLan_MiiSendData( dev->base_addr, 0x2, 2 );
  TLan_MiiSendData( dev->base_addr, val, 16 );
  
  // TRACER outb_p(inb_p(sio) & /*~*/0x04, sio);
  // TRACER outb_p(inb_p(sio) | 0x04, sio);
  
  if ( minten ){
    temp1 = inb_p(sio);
    temp2 = temp1 | 0x80 ;
    outb_p(temp2, sio);
  }
  
  if (!in_irq){
    /////////////////////////////////////////////////////
    spin_unlock_irqrestore(&priv->lock, flags);
    /////////////////////////////////////////////////////
  }
  
}

void TLan_EeSendStart( u16 io_base )
{
  u16 sio;
  
  outw( 0x01, io_base + 0x08 );
  sio = io_base + 0x0C + 0x01;
  
  // TRACER outb_p(inb_p(sio) | 0x40, sio);
  // TRACER outb_p(inb_p(sio) | 0x10, sio);
  // TRACER outb_p(inb_p(sio) | 0x20, sio);
  // TRACER outb_p(inb_p(sio) & /*~*/0x10, sio);
  // TRACER outb_p(inb_p(sio) & /*~*/0x40, sio);
  
}

int TLan_EeSendByte( u16 io_base, u8 data, int stop )
{
  int err;
  u8 place;
  u16 sio;
  
  outw( 0x01, io_base + 0x08 );
  sio = io_base + 0x0C + 0x01;
    
  //BLAST for loop for ( place = 0x80; place != 0; place >>= 1 ) {
  if ( place & data ){
    // TRACER outb_p(inb_p(sio) | 0x10, sio);
  }
  else{
    // TRACER outb_p(inb_p(sio) & /*~*/0x10, sio);
  }
  // TRACER outb_p(inb_p(sio) | 0x40, sio);
  // TRACER outb_p(inb_p(sio) & /*~*/0x40, sio);
  //BLAST }
  // TRACER outb_p(inb_p(sio) & /*~*/0x20, sio);
  // TRACER outb_p(inb_p(sio) | 0x40, sio);
  err = ((int) (inb_p(sio) & 0x10));
  // TRACER outb_p(inb_p(sio) & /*~*/0x40, sio);
  // TRACER outb_p(inb_p(sio) | 0x20, sio);
  
  if ( ( ! err ) && stop ) {
    // TRACER outb_p(inb_p(sio) & /*~*/0x10, sio);
    // TRACER outb_p(inb_p(sio) | 0x40, sio);
    // TRACER outb_p(inb_p(sio) | 0x10, sio);
  }
  
  return ( err );
  
}

void TLan_EeReceiveByte( u16 io_base, u8 *data, int stop )
{
  u8 place;
  u16 sio;
  int temp_1;
  
  outw( 0x01, io_base + 0x08 );
  sio = io_base + 0x0C + 0x01;
  *data = 0;
  
  
  // TRACER outb_p(inb_p(sio) & /*~*/0x20, sio);
  //BLAST for loop for ( place = 0x80; place; place >>= 1 ) {
  // TRACER outb_p(inb_p(sio) | 0x40, sio);
  temp_1 = (int) (inb_p(sio));

  if ( temp_1 & 0x10)
    *data |= place;
  // TRACER outb_p(inb_p(sio) & /*~*/0x40, sio);
  //}
  
  // TRACER outb_p(inb_p(sio) | 0x20, sio);
  if ( ! stop ) {
    // TRACER outb_p(inb_p(sio) & /*~*/0x10, sio);
    // TRACER outb_p(inb_p(sio) | 0x40, sio);
                // TRACER outb_p(inb_p(sio) & /*~*/0x40, sio);
  } else {
    // TRACER outb_p(inb_p(sio) | 0x10, sio);
    // TRACER outb_p(inb_p(sio) | 0x40, sio);
    // TRACER outb_p(inb_p(sio) & /*~*/0x40, sio);
    // TRACER outb_p(inb_p(sio) & /*~*/0x10, sio);
    // TRACER outb_p(inb_p(sio) | 0x40, sio);
    // TRACER outb_p(inb_p(sio) | 0x10, sio);
  }  
}

int TLan_EeReadByte( struct net_device *dev, u8 ee_addr, u8 *data )
{
  int err;
  TLanPrivateInfo *priv;
  unsigned long flags;
  int ret;

  priv = dev->priv;
  flags = 0;
  ret=0;
  
  /////////////////////////////////////////////
  spin_lock_irqsave(&priv->lock, flags);
  /////////////////////////////////////////////
  
  TLan_EeSendStart( dev->base_addr );
  err = TLan_EeSendByte( dev->base_addr, 0xA0, 0 );
  if (err)
    {
      ret=1;
      /////////////////////////////////////////////////
      spin_unlock_irqrestore(&priv->lock, flags);      
      /////////////////////////////////////////////////
      return ret;
    }
  err = TLan_EeSendByte( dev->base_addr, ee_addr, 0 );
  if (err)
    {
      ret=2;
      /////////////////////////////////////////////////
      spin_unlock_irqrestore(&priv->lock, flags);  
      /////////////////////////////////////////////////    
      return ret;
    }
  TLan_EeSendStart( dev->base_addr );
  err = TLan_EeSendByte( dev->base_addr, 0xA1, 0 );
  if (err)
    {
      ret=3;
      /////////////////////////////////////////////////
      spin_unlock_irqrestore(&priv->lock, flags);      
      /////////////////////////////////////////////////
      return ret;
    }
  TLan_EeReceiveByte( dev->base_addr, data, 1 );

  /////////////////////////////////////////////////
  spin_unlock_irqrestore(&priv->lock, flags);  
  /////////////////////////////////////////////////
  return ret;
  
}


int main() {

  struct net_device *dev;
  struct sk_buff *skb;
  int cmd;
  struct ifreq *rq;
  
  _BLAST_init();
  TLan_Init(dev);
  TLan_Open(dev);
  TLan_EisaProbe(  );
  TLan_Eisa_Cleanup(  );
  TLan_StartTx(skb, dev);
  TLan_ioctl( dev, rq, cmd);
  TLan_GetStats( dev ); 

/*   static void TLan_HandleInterrupt( int, void *, struct pt_regs *);     */
/*   static void TLan_SetMulticastList( struct net_device *);     */
/*   static int TLan_probe1(struct pci_dev *pdev,long ioaddr,int irq,int rev,struct pci_device_id *ent); */
/*   static void TLan_tx_timeout( struct net_device *dev); */
/*   static int tlan_init_one( struct pci_dev *pdev, struct pci_device_id *ent); */

  TLan_SetTimer (dev, 1024, 1024);
  TLan_Close(dev);

  // TRACER
  _ABORT(lockStatus == 1); 
  
  // BLAST
  // if(lockStatus == 1) 
  //  errorFn();
}
