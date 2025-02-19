/* 
   Potential bug in line 16230 (CompleteCurrent = 0;). See there
   explanation. We are not sure 100% about the bug because we don't
   fully reason about pointers and don't run MINMAX.
*/

/*
  There are many important functions which are not analyzed because
  they are passed as arguments to functions that they are simply
  stubs. These functions were not analyzed neither by BLAST team.
 */

/* 
  Search for TRACER keyword to see all changes done to the original
  BLAST version.
*/

/* 
  Search for MINMAX keyword. There are several loops where MINMAX is
  needed. Otherwise, we report false positives
*/

int BLAST_NONDET;
int TRACER_NONDET;

/* void errorFn() { */
/*  ERROR: goto ERROR; */
/* } */

// void _ABORT(int expr){ }

int s ;
int UNLOADED , NP , DC , SKIP1 , SKIP2 , MPR1 , MPR3 , IPC ;
int pending ;
int compRegistered ;
int lowerDriverReturn ;
int setEventCalled ;
int customIrp ;
int routine ;
int myStatus ;
int myArgument4;
typedef int intptr_t ;
typedef unsigned int uintptr_t ;
typedef int ptrdiff_t ;
typedef unsigned int size_t ;
typedef unsigned short wchar_t ;

typedef enum _EXCEPTION_DISPOSITION {
	ExceptionContinueExecution,
	ExceptionContinueSearch,
	ExceptionNestedException,
	ExceptionCollidedUnwind
} EXCEPTION_DISPOSITION ;

struct _EXCEPTION_RECORD ;
struct _CONTEXT ;

EXCEPTION_DISPOSITION _except_handler(struct _EXCEPTION_RECORD * ExceptionRecord ,
				      void *  EstablisherFrame , 
				      struct _CONTEXT * ContextRecord ,
				      void *  DispatcherContext ) ;
// #line 25 "C:/NTDDK/inc/ntdef.h"
// #line 15 "C:/Program Files/Microsoft Visual Studio/VC98/include/ctype.h"
typedef wchar_t wint_t ;
typedef wchar_t wctype_t ;
// #line 127 "C:/NTDDK/inc/ntdef.h"
typedef unsigned long POINTER_64_INT ;
// #line 25 "C:/NTDDK/inc/basetsd.h"
typedef int LONG32 , *  PLONG32 ;
typedef int INT32 , *  PINT32 ;
typedef unsigned int ULONG32 , *  PULONG32 ;
typedef unsigned int DWORD32 , *  PDWORD32 ;
typedef unsigned int UINT32 , *  PUINT32 ;
typedef int INT_PTR , *  PINT_PTR ;
typedef unsigned int UINT_PTR , *  PUINT_PTR ;
typedef long LONG_PTR , *  PLONG_PTR ;
typedef unsigned long ULONG_PTR , *  PULONG_PTR ;
typedef unsigned short UHALF_PTR , *  PUHALF_PTR ;
typedef short HALF_PTR , *  PHALF_PTR ;
typedef unsigned long HANDLE_PTR ;
typedef ULONG_PTR SIZE_T , *  PSIZE_T ;
typedef LONG_PTR SSIZE_T , *  PSSIZE_T ;
typedef ULONG_PTR DWORD_PTR , *  PDWORD_PTR ;
typedef long LONG64 , *  PLONG64 ;
typedef long INT64 , *  PINT64 ;
typedef unsigned long ULONG64 , *  PULONG64 ;
typedef unsigned long DWORD64 , *  PDWORD64 ;
typedef unsigned long UINT64 , *  PUINT64 ;

// #line 217 "C:/NTDDK/inc/ntdef.h"
typedef void *  PVOID ;
typedef void *  PVOID64 ;
typedef char CHAR ;
typedef short SHORT ;
typedef long LONG ;
typedef wchar_t WCHAR ;
typedef WCHAR *  PWCHAR ;
typedef WCHAR *  LPWCH , *  PWCH ;
typedef  WCHAR *  LPCWCH , *  PCWCH ;
typedef WCHAR *  NWPSTR ;
typedef WCHAR *  LPWSTR , *  PWSTR ;
typedef  WCHAR *  LPCWSTR , *  PCWSTR ;
typedef CHAR *  PCHAR ;
typedef CHAR *  LPCH , *  PCH ;
typedef  CHAR *  LPCCH , *  PCCH ;
typedef CHAR *  NPSTR ;
typedef CHAR *  LPSTR , *  PSTR ;
typedef CHAR *  LPCSTR , *  PCSTR ;
typedef char TCHAR , *  PTCHAR ;
typedef unsigned char TUCHAR , *  PTUCHAR ;
typedef LPSTR LPTCH , PTCH ;
typedef LPSTR PTSTR , LPTSTR ;
typedef LPCSTR PCTSTR , LPCTSTR ;
typedef double DOUBLE ;
typedef struct _QUAD {
	double DoNotUseThisField ;
} QUAD ;

typedef SHORT *  PSHORT ;
typedef LONG *  PLONG ;
typedef QUAD *  PQUAD ;
typedef unsigned char UCHAR ;
typedef unsigned short USHORT ;
typedef unsigned long ULONG ;
typedef QUAD UQUAD ;
typedef UCHAR *  PUCHAR ;
typedef USHORT *  PUSHORT ;
typedef ULONG *  PULONG ;
typedef UQUAD *  PUQUAD ;
typedef signed char SCHAR ;
typedef SCHAR *  PSCHAR ;
typedef void *  HANDLE ;
typedef HANDLE *  PHANDLE ;
typedef UCHAR FCHAR ;
typedef USHORT FSHORT ;
typedef ULONG FLONG ;
typedef LONG HRESULT ;
typedef char CCHAR ;
typedef short CSHORT ;
typedef ULONG CLONG ;
typedef CCHAR *  PCCHAR ;
typedef CSHORT *  PCSHORT ;
typedef CLONG *  PCLONG ;
typedef ULONG LCID ;
typedef PULONG PLCID ;
typedef USHORT LANGID ;
typedef ULONG LOGICAL ;
typedef ULONG *  PLOGICAL ;
typedef LONG NTSTATUS ;
typedef NTSTATUS *  PNTSTATUS ;
typedef struct _FLOAT128 {
	long LowPart ;
	long HighPart ;
} FLOAT128 ;

typedef FLOAT128 *  PFLOAT128 ;
typedef long LONGLONG ;
typedef unsigned long ULONGLONG ;
typedef LONGLONG *  PLONGLONG ;
typedef ULONGLONG *  PULONGLONG ;
typedef LONGLONG USN ;
typedef union _LARGE_INTEGER {
	struct  {
		ULONG LowPart ;
		LONG HighPart ;
	}  ;
	struct  {
		ULONG LowPart ;
		LONG HighPart ;
	} u ;
	LONGLONG QuadPart ;
} LARGE_INTEGER ;

// #line 662
typedef LARGE_INTEGER *  PLARGE_INTEGER ;

LARGE_INTEGER SerialPhysicalZero /* = {0} */;
LARGE_INTEGER SerialPhysicalZero___0 /* = {0} */;
LARGE_INTEGER SerialPhysicalZero___1/*  = {0} */;
LARGE_INTEGER SerialPhysicalZero___2/*  = {0} */;

// #line 668
typedef union _ULARGE_INTEGER {
	struct  {
		ULONG LowPart ;
		ULONG HighPart ;
	}  ;
	struct  {
		ULONG LowPart ;
		ULONG HighPart ;
	} u ;
	ULONGLONG QuadPart ;
} ULARGE_INTEGER ;

// #line 681
typedef ULARGE_INTEGER *  PULARGE_INTEGER ;

// #line 690
typedef struct _LUID {
	ULONG LowPart ;
	LONG HighPart ;
} LUID , *  PLUID ;

// #line 696
typedef ULONGLONG DWORDLONG ;

// #line 697
typedef DWORDLONG *  PDWORDLONG ;

// #line 707
typedef LARGE_INTEGER PHYSICAL_ADDRESS , *  PPHYSICAL_ADDRESS ;


// #pragma warning(pop)
// #line 956
typedef enum _EVENT_TYPE {
	NotificationEvent,
	SynchronizationEvent
} EVENT_TYPE ;

// #line 965
typedef enum _TIMER_TYPE {
	NotificationTimer,
	SynchronizationTimer
} TIMER_TYPE ;

// #line 974
typedef enum _WAIT_TYPE {
	WaitAll,
	WaitAny
} WAIT_TYPE ;

// #line 983
typedef CHAR *  PSZ ;

// #line 984
typedef const char *  PCSZ ;

// #line 991
typedef struct _STRING {
	USHORT Length ;
	USHORT MaximumLength ;
	PCHAR Buffer ;
} STRING ;

// #line 999
typedef STRING *  PSTRING ;

typedef STRING ANSI_STRING ;

// #line 1002
typedef PSTRING PANSI_STRING ;

typedef STRING OEM_STRING ;

// #line 1005
typedef PSTRING POEM_STRING ;

// #line 1011
typedef struct _CSTRING {
	USHORT Length ;
	USHORT MaximumLength ;
	const char *  Buffer ;
} CSTRING ;

// #line 1016
typedef CSTRING *  PCSTRING ;

// #line 1019
typedef STRING CANSI_STRING ;

// #line 1020
typedef PSTRING PCANSI_STRING ;

// #line 1027
typedef struct _UNICODE_STRING {
	USHORT Length ;
	USHORT MaximumLength ;
	PWSTR Buffer ;
} UNICODE_STRING ;

// #line 1036
typedef UNICODE_STRING *  PUNICODE_STRING ;

// #line 1037
typedef const UNICODE_STRING *  PCUNICODE_STRING ;

// #line 1046
typedef UCHAR BOOLEAN ;

// #line 1047
typedef BOOLEAN *  PBOOLEAN ;

// #line 1057
typedef struct _LIST_ENTRY {
	struct _LIST_ENTRY *  Flink ;
	struct _LIST_ENTRY *  Blink ;
} LIST_ENTRY , *  PLIST_ENTRY , *  PRLIST_ENTRY ;

// #line 1067
typedef struct _SINGLE_LIST_ENTRY {
	struct _SINGLE_LIST_ENTRY *  Next ;
} SINGLE_LIST_ENTRY , *  PSINGLE_LIST_ENTRY ;

// #line 1078
typedef struct LIST_ENTRY32 {
	ULONG Flink ;
	ULONG Blink ;
} LIST_ENTRY32 ;

// #line 1082
typedef LIST_ENTRY32 *  PLIST_ENTRY32 ;

typedef struct LIST_ENTRY64 {
	ULONGLONG Flink ;
	ULONGLONG Blink ;
} LIST_ENTRY64 ;

// #line 1088
typedef LIST_ENTRY64 *  PLIST_ENTRY64 ;


// #line 1127
typedef struct _STRING32 {
	USHORT Length ;
	USHORT MaximumLength ;
	ULONG Buffer ;
} STRING32 ;

// #line 1132
typedef STRING32 *  PSTRING32 ;

typedef STRING32 UNICODE_STRING32 ;

// #line 1135
typedef UNICODE_STRING32 *  PUNICODE_STRING32 ;

typedef STRING32 ANSI_STRING32 ;

// #line 1138
typedef ANSI_STRING32 *  PANSI_STRING32 ;

// #line 1141
typedef struct _STRING64 {
	USHORT Length ;
	USHORT MaximumLength ;
	ULONGLONG Buffer ;
} STRING64 ;

// #line 1146
typedef STRING64 *  PSTRING64 ;

typedef STRING64 UNICODE_STRING64 ;

// #line 1149
typedef UNICODE_STRING64 *  PUNICODE_STRING64 ;

typedef STRING64 ANSI_STRING64 ;

// #line 1152
typedef ANSI_STRING64 *  PANSI_STRING64 ;

// #line 1173
typedef struct _OBJECT_ATTRIBUTES {
	ULONG Length ;
	HANDLE RootDirectory ;
	PUNICODE_STRING ObjectName ;
	ULONG Attributes ;
	PVOID SecurityDescriptor ;
	PVOID SecurityQualityOfService ;
} OBJECT_ATTRIBUTES ;

// #line 1181
typedef OBJECT_ATTRIBUTES *  POBJECT_ATTRIBUTES ;

// #line 17 "C:/NTDDK/inc/guiddef.h"
typedef struct _GUID {
	unsigned long Data1 ;
	unsigned short Data2 ;
	unsigned short Data3 ;
	unsigned char Data4[8] ;
} GUID ;

// #line 70
typedef GUID *  LPGUID ;

// #line 75
typedef const GUID *  LPCGUID ;

// #line 81
typedef GUID IID ;

// #line 82
typedef IID *  LPIID ;

// #line 85
typedef GUID CLSID ;

// #line 86
typedef CLSID *  LPCLSID ;

// #line 89
typedef GUID FMTID ;

// #line 90
typedef FMTID *  LPFMTID ;

// #line 16 "C:/NTDDK/inc/string.h"


extern size_t wcslen(wchar_t *  s);
extern void * memcpy(void *  a, const void * b , size_t c);
extern void * memset(void *  a, int b , size_t c);
extern void * memmove(void *  a, const void * b , size_t c);

/* size_t wcslen(wchar_t *  s){ */
/*   size_t R_NONDET; */
/*   return R_NONDET; */
/* } */
  
/* void * memcpy(void *  a, const void * b , size_t c){ } */
/* void * memset(void *  a, int b , size_t c){ } */
/* void * memmove(void *  a, const void * b , size_t c){ } */

// #line 144

// #line 1233 "C:/NTDDK/inc/ntdef.h"
typedef struct _OBJECTID {
	GUID Lineage ;
	ULONG Uniquifier ;
} OBJECTID ;

// #line 1288
struct _CONTEXT ;

// #line 1289
struct _EXCEPTION_RECORD ;

typedef EXCEPTION_DISPOSITION ( *  PEXCEPTION_ROUTINE)(struct _EXCEPTION_RECORD *  ExceptionRecord ,
						       PVOID EstablisherFrame ,
						       struct _CONTEXT *  ContextRecord , 
						       PVOID DispatcherContext ) ;

// #line 1306
typedef UCHAR KIRQL ;

typedef KIRQL *  PKIRQL ;

// #line 1316
typedef enum _NT_PRODUCT_TYPE {
	NtProductWinNt = 1,
	NtProductLanManNt,
	NtProductServer
} NT_PRODUCT_TYPE , *  PNT_PRODUCT_TYPE ;

// #line 1329
typedef enum _SUITE_TYPE {
	SmallBusiness,
	Enterprise,
	BackOffice,
	CommunicationServer,
	TerminalServer,
	SmallBusinessRestricted,
	EmbeddedNT,
	DataCenter,
	SingleUserTS,
	MaxSuiteType
} SUITE_TYPE ;

// #line 75 "C:/NTDDK/inc/ddk/ntddk.h"
typedef struct _KTHREAD *  PKTHREAD ;

// #line 76
typedef struct _ETHREAD *  PETHREAD ;

// #line 77
typedef struct _EPROCESS *  PEPROCESS ;

// #line 78
typedef struct _PEB *  PPEB ;

// #line 79
typedef struct _KINTERRUPT *  PKINTERRUPT ;

// #line 80
typedef struct _IO_TIMER *  PIO_TIMER ;

// #line 81
typedef struct _OBJECT_TYPE *  POBJECT_TYPE ;

// #line 82
typedef struct _CALLBACK_OBJECT *  PCALLBACK_OBJECT___0 ;

// #line 83
typedef struct _DEVICE_HANDLER_OBJECT *  PDEVICE_HANDLER_OBJECT ;

// #line 84
typedef struct _BUS_HANDLER *  PBUS_HANDLER ;

// #line 101
// #line 124

// #line 143
typedef union _SLIST_HEADER {
	ULONGLONG Alignment ;
	struct  {
		SINGLE_LIST_ENTRY Next ;
		USHORT Depth ;
		USHORT Sequence ;
	}  ;
} SLIST_HEADER , *  PSLIST_HEADER ;

// #line 204
typedef CCHAR KPROCESSOR_MODE ;

typedef enum _MODE {
	KernelMode,
	UserMode,
	MaximumMode
} MODE ;

// #line 222
struct _KAPC ;

typedef void ( *  PKNORMAL_ROUTINE )(PVOID NormalContext , 
				     PVOID SystemArgument1, 
				     PVOID SystemArgument2 ) ;
				     
// #line 232
typedef void ( *  PKKERNEL_ROUTINE )(struct _KAPC *  Apc , 
				     PKNORMAL_ROUTINE *  NormalRoutine ,
				     PVOID *  NormalContext , PVOID *  SystemArgument1 ,
				     PVOID *  SystemArgument2 ) ;

// #line 242
typedef void ( *  PKRUNDOWN_ROUTINE )(struct _KAPC *  Apc ) ;

// #line 248
typedef BOOLEAN ( *  PKSYNCHRONIZE_ROUTINE )(PVOID SynchronizeContext ) ;

// #line 254
typedef BOOLEAN ( *  PKTRANSFER_ROUTINE )(void  ) ;

// #line 265
typedef struct _KAPC {
	CSHORT Type ;
	CSHORT Size ;
	ULONG Spare0 ;
	struct _KTHREAD *  Thread ;
	LIST_ENTRY ApcListEntry ;
	PKKERNEL_ROUTINE KernelRoutine ;
	PKRUNDOWN_ROUTINE RundownRoutine ;
	PKNORMAL_ROUTINE NormalRoutine ;
	PVOID NormalContext ;
	PVOID SystemArgument1 ;
	PVOID SystemArgument2 ;
	CCHAR ApcStateIndex ;
	KPROCESSOR_MODE ApcMode ;
	BOOLEAN Inserted ;
} KAPC , *  PKAPC , *  PRKAPC ;

// #line 292
struct _KDPC ;

typedef void ( *  PKDEFERRED_ROUTINE )(struct _KDPC *  Dpc , PVOID
	DeferredContext , PVOID SystemArgument1 , PVOID SystemArgument2 ) ;

// #line 351
typedef enum _KDPC_IMPORTANCE {
	LowImportance,
	MediumImportance,
	HighImportance
} KDPC_IMPORTANCE ;

// #line 361
typedef struct _KDPC {
	CSHORT Type ;
	UCHAR Number ;
	UCHAR Importance ;
	LIST_ENTRY DpcListEntry ;
	PKDEFERRED_ROUTINE DeferredRoutine ;
	PVOID DeferredContext ;
	PVOID SystemArgument1 ;
	PVOID SystemArgument2 ;
	PULONG_PTR Lock ;
} KDPC , *  PKDPC , *  PRKDPC ;

// #line 377
typedef PVOID PKIPI_CONTEXT ;

typedef void ( *  PKIPI_WORKER )(PKIPI_CONTEXT PacketContext , PVOID Parameter1
	, PVOID Parameter2 , PVOID Parameter3 ) ;

// #line 392
typedef struct _KIPI_COUNTS {
	ULONG Freeze ;
	ULONG Packet ;
	ULONG DPC ;
	ULONG APC ;
	ULONG FlushSingleTb ;
	ULONG FlushMultipleTb ;
	ULONG FlushEntireTb ;
	ULONG GenericCall ;
	ULONG ChangeColor ;
	ULONG SweepDcache ;
	ULONG SweepIcache ;
	ULONG SweepIcacheRange ;
	ULONG FlushIoBuffers ;
	ULONG GratuitousDPC ;
} KIPI_COUNTS , *  PKIPI_COUNTS ;

// #line 443
typedef struct _MDL {
	struct _MDL *  Next ;
	CSHORT Size ;
	CSHORT MdlFlags ;
	struct _EPROCESS *  Process ;
	PVOID MappedSystemVa ;
	PVOID StartVa ;
	ULONG ByteCount ;
	ULONG ByteOffset ;
} MDL , *  PMDL ;

// #line 532
typedef PVOID PACCESS_TOKEN ;

// #line 538
typedef PVOID PSECURITY_DESCRIPTOR ;

// #line 544
typedef PVOID PSID ;

typedef ULONG ACCESS_MASK ;

// #line 547
typedef ACCESS_MASK *  PACCESS_MASK ;

// #line 597
typedef struct _GENERIC_MAPPING {
	ACCESS_MASK GenericRead ;
	ACCESS_MASK GenericWrite ;
	ACCESS_MASK GenericExecute ;
	ACCESS_MASK GenericAll ;
} GENERIC_MAPPING ;

// #line 603
typedef GENERIC_MAPPING *  PGENERIC_MAPPING ;

// #line 24 "C:/NTDDK/inc/pshpack4.h"

// #pragma warning(disable:4103)

// #pragma pack(push, 4)
// #line 618 "C:/NTDDK/inc/ddk/ntddk.h"
typedef struct _LUID_AND_ATTRIBUTES {
	LUID Luid ;
	ULONG Attributes ;
} LUID_AND_ATTRIBUTES , *  PLUID_AND_ATTRIBUTES ;

// #line 622
typedef LUID_AND_ATTRIBUTES LUID_AND_ATTRIBUTES_ARRAY[1] ;

// #line 623
typedef LUID_AND_ATTRIBUTES_ARRAY *  PLUID_AND_ATTRIBUTES_ARRAY ;

// #line 27 "C:/NTDDK/inc/poppack.h"

// #pragma warning(disable:4103)

// #pragma pack(pop)
// #line 642 "C:/NTDDK/inc/ddk/ntddk.h"
typedef struct _ACL {
	UCHAR AclRevision ;
	UCHAR Sbz1 ;
	USHORT AclSize ;
	USHORT AceCount ;
	USHORT Sbz2 ;
} ACL ;

// #line 649
typedef ACL *  PACL ;

// #line 681
typedef struct _PRIVILEGE_SET {
	ULONG PrivilegeCount ;
	ULONG Control ;
	LUID_AND_ATTRIBUTES Privilege[1] ;
} PRIVILEGE_SET , *  PPRIVILEGE_SET ;

// #line 735
typedef enum _SECURITY_IMPERSONATION_LEVEL {
	SecurityAnonymous,
	SecurityIdentification,
	SecurityImpersonation,
	SecurityDelegation
} SECURITY_IMPERSONATION_LEVEL , *  PSECURITY_IMPERSONATION_LEVEL ;

// #line 753
typedef BOOLEAN SECURITY_CONTEXT_TRACKING_MODE , * 
	PSECURITY_CONTEXT_TRACKING_MODE ;

// #line 762
typedef struct _SECURITY_QUALITY_OF_SERVICE {
	ULONG Length ;
	SECURITY_IMPERSONATION_LEVEL ImpersonationLevel ;
	SECURITY_CONTEXT_TRACKING_MODE ContextTrackingMode ;
	BOOLEAN EffectiveOnly ;
} SECURITY_QUALITY_OF_SERVICE , *  PSECURITY_QUALITY_OF_SERVICE ;

// #line 774
typedef struct _SE_IMPERSONATION_STATE {
	PACCESS_TOKEN Token ;
	BOOLEAN CopyOnOpen ;
	BOOLEAN EffectiveOnly ;
	SECURITY_IMPERSONATION_LEVEL Level ;
} SE_IMPERSONATION_STATE , *  PSE_IMPERSONATION_STATE ;

// #line 782
typedef ULONG SECURITY_INFORMATION , *  PSECURITY_INFORMATION ;

// #line 809
typedef ULONG KAFFINITY ;

// #line 810
typedef KAFFINITY *  PKAFFINITY ;

// #line 816
typedef LONG KPRIORITY ;

// #line 824
typedef ULONG_PTR KSPIN_LOCK ;

// #line 825
typedef KSPIN_LOCK *  PKSPIN_LOCK ;

// #line 833
typedef void ( *  PKINTERRUPT_ROUTINE )(void  ) ;

// #line 842
typedef enum _KPROFILE_SOURCE {
	ProfileTime,
	ProfileAlignmentFixup,
	ProfileTotalIssues,
	ProfilePipelineDry,
	ProfileLoadInstructions,
	ProfilePipelineFrozen,
	ProfileBranchInstructions,
	ProfileTotalNonissues,
	ProfileDcacheMisses,
	ProfileIcacheMisses,
	ProfileCacheMisses,
	ProfileBranchMispredictions,
	ProfileStoreInstructions,
	ProfileFpInstructions,
	ProfileIntegerInstructions,
	Profile2Issue,
	Profile3Issue,
	Profile4Issue,
	ProfileSpecialInstructions,
	ProfileTotalCycles,
	ProfileIcacheIssues,
	ProfileDcacheAccesses,
	ProfileMemoryBarrierCycles,
	ProfileLoadLinkedIssues,
	ProfileMaximum
} KPROFILE_SOURCE ;

// #line 1058
// #line 1067
// #line 1079
typedef NTSTATUS (*  PRTL_QUERY_REGISTRY_ROUTINE )(PWSTR ValueName ,
	ULONG ValueType , PVOID ValueData , ULONG ValueLength , PVOID Context ,
	PVOID EntryContext ) ;

// #line 1088
typedef struct _RTL_QUERY_REGISTRY_TABLE {
	PRTL_QUERY_REGISTRY_ROUTINE QueryRoutine ;
	ULONG Flags ;
	PWSTR Name ;
	PVOID EntryContext ;
	ULONG DefaultType ;
	PVOID DefaultData ;
	ULONG DefaultLength ;
} RTL_QUERY_REGISTRY_TABLE , *  PRTL_QUERY_REGISTRY_TABLE ;

ULONG tag__1;

NTSTATUS RtlQueryRegistryValues(ULONG RelativeTo , PCWSTR Path ,
				PRTL_QUERY_REGISTRY_TABLE QueryTable , PVOID Context ,
				PVOID Environment ) ;

extern NTSTATUS RtlWriteRegistryValue(ULONG RelativeTo , PCWSTR Path , 
				      PCWSTR ValueName , ULONG ValueType , PVOID ValueData ,
				      ULONG ValueLength );
/* NTSTATUS RtlWriteRegistryValue(ULONG RelativeTo , PCWSTR Path ,
/* 			       PCWSTR ValueName , ULONG ValueType , PVOID ValueData , */
/* 			       ULONG ValueLength ){ */
/*   NTSTATUS R_NONDET; */
/*   return R_NONDET; */
/* } */


NTSTATUS RtlDeleteRegistryValue(ULONG RelativeTo, PCWSTR Path ,
				PCWSTR ValueName ) ;

extern NTSTATUS RtlIntegerToUnicodeString(ULONG Value ,
					  ULONG Base , PUNICODE_STRING String );

/* NTSTATUS RtlIntegerToUnicodeString(ULONG Value , */
/* 				   ULONG Base , PUNICODE_STRING String ){ */
/*   NTSTATUS R_NONDET; */
/*   return R_NONDET; */
/* } */

//extern BOOLEAN ( *  NlsMbCodePageTag ) ;
//extern BOOLEAN ( *  NlsMbOemCodePageTag ) ;

NTSTATUS RtlAnsiStringToUnicodeString(PUNICODE_STRING DestinationString ,
				      PANSI_STRING SourceString , 
				      BOOLEAN AllocateDestinationString ) ;

BOOLEAN RtlEqualUnicodeString(UNICODE_STRING *  String1 , UNICODE_STRING *  String2 , 
			      BOOLEAN CaseInSensitive ){
  if(TRACER_NONDET>0)
    return (BOOLEAN) 0;
  else
    return (BOOLEAN) 1;
}
extern NTSTATUS RtlAppendUnicodeStringToString(PUNICODE_STRING Destination ,
					       PUNICODE_STRING Source );

extern NTSTATUS RtlAppendUnicodeToString(PUNICODE_STRING Destination , PCWSTR Source );

/* NTSTATUS RtlAppendUnicodeStringToString(PUNICODE_STRING Destination , */
/* 					PUNICODE_STRING Source ){ */
/*   NTSTATUS R_NONDET; */
/*   return R_NONDET; */
/* } */
/* NTSTATUS RtlAppendUnicodeToString(PUNICODE_STRING Destination , PCWSTR Source ){ */
/*   NTSTATUS R_NONDET; */
/*   return R_NONDET; */
/* } */
	
// #line 1641

// #pragma warning(pop)
// #line 2214
typedef struct _TIME_FIELDS {
	CSHORT Year ;
	CSHORT Month ;
	CSHORT Day ;
	CSHORT Hour ;
	CSHORT Minute ;
	CSHORT Second ;
	CSHORT Milliseconds ;
	CSHORT Weekday ;
} TIME_FIELDS ;

// #line 2224
typedef TIME_FIELDS *  PTIME_FIELDS ;

// #line 2227
// #line 2499
typedef struct _RTL_BITMAP {
	ULONG SizeOfBitMap ;
	PULONG Buffer ;
} RTL_BITMAP ;

// #line 2503
typedef RTL_BITMAP *  PRTL_BITMAP ;

// #line 2511
// #line 2525
// #line 2532

// #line 2627
typedef struct _RTL_BITMAP_RUN {
	ULONG StartingIndex ;
	ULONG NumberOfBits ;
} RTL_BITMAP_RUN ;

// #line 2633
typedef RTL_BITMAP_RUN *  PRTL_BITMAP_RUN ;


// #line 2886
typedef struct _RTL_RANGE {
	ULONGLONG Start ;
	ULONGLONG End ;
	PVOID UserData ;
	PVOID Owner ;
	UCHAR Attributes ;
	UCHAR Flags ;
} RTL_RANGE , *  PRTL_RANGE ;

// #line 2924
typedef struct _RTL_RANGE_LIST {
	LIST_ENTRY ListHead ;
	ULONG Flags ;
	ULONG Count ;
	ULONG Stamp ;
} RTL_RANGE_LIST , *  PRTL_RANGE_LIST ;

// #line 2950
typedef struct _RANGE_LIST_ITERATOR {
	PLIST_ENTRY RangeListHead ;
	PLIST_ENTRY MergedHead ;
	PVOID Current ;
	ULONG Stamp ;
} RTL_RANGE_LIST_ITERATOR , *  PRTL_RANGE_LIST_ITERATOR ;

// #line 2960
// #line 3019
typedef BOOLEAN ( *PRTL_CONFLICT_RANGE_CALLBACK )(PVOID Context , PRTL_RANGE Range ) ;
// #line 3026

// #line 3155
typedef struct _OSVERSIONINFOA {
	ULONG dwOSVersionInfoSize ;
	ULONG dwMajorVersion ;
	ULONG dwMinorVersion ;
	ULONG dwBuildNumber ;
	ULONG dwPlatformId ;
	CHAR szCSDVersion[128] ;
} OSVERSIONINFOA , *  POSVERSIONINFOA , *  LPOSVERSIONINFOA ;

typedef struct _OSVERSIONINFOW {
	ULONG dwOSVersionInfoSize ;
	ULONG dwMajorVersion ;
	ULONG dwMinorVersion ;
	ULONG dwBuildNumber ;
	ULONG dwPlatformId ;
	WCHAR szCSDVersion[128] ;
} OSVERSIONINFOW , *  POSVERSIONINFOW , *  LPOSVERSIONINFOW , RTL_OSVERSIONINFOW
	, *  PRTL_OSVERSIONINFOW ;

// #line 3177
typedef OSVERSIONINFOA OSVERSIONINFO ;

// #line 3178
typedef POSVERSIONINFOA POSVERSIONINFO ;

// #line 3179
typedef LPOSVERSIONINFOA LPOSVERSIONINFO ;

// #line 3182
typedef struct _OSVERSIONINFOEXA {
	ULONG dwOSVersionInfoSize ;
	ULONG dwMajorVersion ;
	ULONG dwMinorVersion ;
	ULONG dwBuildNumber ;
	ULONG dwPlatformId ;
	CHAR szCSDVersion[128] ;
	USHORT wServicePackMajor ;
	USHORT wServicePackMinor ;
	USHORT wSuiteMask ;
	UCHAR wProductType ;
	UCHAR wReserved ;
} OSVERSIONINFOEXA , *  POSVERSIONINFOEXA , *  LPOSVERSIONINFOEXA ;

// #line 3195
typedef struct _OSVERSIONINFOEXW {
	ULONG dwOSVersionInfoSize ;
	ULONG dwMajorVersion ;
	ULONG dwMinorVersion ;
	ULONG dwBuildNumber ;
	ULONG dwPlatformId ;
	WCHAR szCSDVersion[128] ;
	USHORT wServicePackMajor ;
	USHORT wServicePackMinor ;
	USHORT wSuiteMask ;
	UCHAR wProductType ;
	UCHAR wReserved ;
} OSVERSIONINFOEXW , *  POSVERSIONINFOEXW , *  LPOSVERSIONINFOEXW ,
	RTL_OSVERSIONINFOEXW , *  PRTL_OSVERSIONINFOEXW ;

// #line 3213
typedef OSVERSIONINFOEXA OSVERSIONINFOEX ;

// #line 3214
typedef POSVERSIONINFOEXA POSVERSIONINFOEX ;

// #line 3215
typedef LPOSVERSIONINFOEXA LPOSVERSIONINFOEX ;

// #line 3275
// #line 3286
// #line 3292

// #line 3648
typedef struct _IO_STATUS_BLOCK {
	union  {
		NTSTATUS Status ;
		PVOID Pointer ;
	}  ;
	ULONG_PTR Information ;
} IO_STATUS_BLOCK , *  PIO_STATUS_BLOCK ;

// #line 3669
typedef void (*  PIO_APC_ROUTINE )(PVOID ApcContext , PIO_STATUS_BLOCK IoStatusBlock , ULONG Reserved ); 
// #line 3685
typedef enum _FILE_INFORMATION_CLASS {
	FileDirectoryInformation = 1,
	FileFullDirectoryInformation,
	FileBothDirectoryInformation,
	FileBasicInformation,
	FileStandardInformation,
	FileInternalInformation,
	FileEaInformation,
	FileAccessInformation,
	FileNameInformation,
	FileRenameInformation,
	FileLinkInformation,
	FileNamesInformation,
	FileDispositionInformation,
	FilePositionInformation,
	FileFullEaInformation,
	FileModeInformation,
	FileAlignmentInformation,
	FileAllInformation,
	FileAllocationInformation,
	FileEndOfFileInformation,
	FileAlternateNameInformation,
	FileStreamInformation,
	FilePipeInformation,
	FilePipeLocalInformation,
	FilePipeRemoteInformation,
	FileMailslotQueryInformation,
	FileMailslotSetInformation,
	FileCompressionInformation,
	FileObjectIdInformation,
	FileCompletionInformation,
	FileMoveClusterInformation,
	FileQuotaInformation,
	FileReparsePointInformation,
	FileNetworkOpenInformation,
	FileAttributeTagInformation,
	FileTrackingInformation,
	FileMaximumInformation
} FILE_INFORMATION_CLASS , *  PFILE_INFORMATION_CLASS ;

// #line 3731
typedef struct _FILE_BASIC_INFORMATION {
	LARGE_INTEGER CreationTime ;
	LARGE_INTEGER LastAccessTime ;
	LARGE_INTEGER LastWriteTime ;
	LARGE_INTEGER ChangeTime ;
	ULONG FileAttributes ;
} FILE_BASIC_INFORMATION , *  PFILE_BASIC_INFORMATION ;

typedef struct _FILE_STANDARD_INFORMATION {
	LARGE_INTEGER AllocationSize ;
	LARGE_INTEGER EndOfFile ;
	ULONG NumberOfLinks ;
	BOOLEAN DeletePending ;
	BOOLEAN Directory ;
} FILE_STANDARD_INFORMATION , *  PFILE_STANDARD_INFORMATION ;

typedef struct _FILE_POSITION_INFORMATION {
	LARGE_INTEGER CurrentByteOffset ;
} FILE_POSITION_INFORMATION , *  PFILE_POSITION_INFORMATION ;

typedef struct _FILE_ALIGNMENT_INFORMATION {
	ULONG AlignmentRequirement ;
} FILE_ALIGNMENT_INFORMATION , *  PFILE_ALIGNMENT_INFORMATION ;

typedef struct _FILE_NAME_INFORMATION {
	ULONG FileNameLength ;
	WCHAR FileName[1] ;
} FILE_NAME_INFORMATION , *  PFILE_NAME_INFORMATION ;

typedef struct _FILE_NETWORK_OPEN_INFORMATION {
	LARGE_INTEGER CreationTime ;
	LARGE_INTEGER LastAccessTime ;
	LARGE_INTEGER LastWriteTime ;
	LARGE_INTEGER ChangeTime ;
	LARGE_INTEGER AllocationSize ;
	LARGE_INTEGER EndOfFile ;
	ULONG FileAttributes ;
} FILE_NETWORK_OPEN_INFORMATION , *  PFILE_NETWORK_OPEN_INFORMATION ;

typedef struct _FILE_ATTRIBUTE_TAG_INFORMATION {
	ULONG FileAttributes ;
	ULONG ReparseTag ;
} FILE_ATTRIBUTE_TAG_INFORMATION , *  PFILE_ATTRIBUTE_TAG_INFORMATION ;

typedef struct _FILE_DISPOSITION_INFORMATION {
	BOOLEAN DeleteFile ;
} FILE_DISPOSITION_INFORMATION , *  PFILE_DISPOSITION_INFORMATION ;

typedef struct _FILE_END_OF_FILE_INFORMATION {
	LARGE_INTEGER EndOfFile ;
} FILE_END_OF_FILE_INFORMATION , *  PFILE_END_OF_FILE_INFORMATION ;

// #line 3784
typedef struct _FILE_FULL_EA_INFORMATION {
	ULONG NextEntryOffset ;
	UCHAR Flags ;
	UCHAR EaNameLength ;
	USHORT EaValueLength ;
	CHAR EaName[1] ;
} FILE_FULL_EA_INFORMATION , *  PFILE_FULL_EA_INFORMATION ;

// #line 3798
typedef enum _FSINFOCLASS {
	FileFsVolumeInformation = 1,
	FileFsLabelInformation,
	FileFsSizeInformation,
	FileFsDeviceInformation,
	FileFsAttributeInformation,
	FileFsControlInformation,
	FileFsFullSizeInformation,
	FileFsObjectIdInformation,
	FileFsMaximumInformation
} FS_INFORMATION_CLASS , *  PFS_INFORMATION_CLASS ;

typedef struct _FILE_FS_DEVICE_INFORMATION {
	ULONG DeviceType ;
	ULONG Characteristics ;
} FILE_FS_DEVICE_INFORMATION , *  PFILE_FS_DEVICE_INFORMATION ;

// #line 3820
typedef union _FILE_SEGMENT_ELEMENT {
	PVOID64 Buffer ;
	ULONGLONG Alignment ;
} FILE_SEGMENT_ELEMENT , *  PFILE_SEGMENT_ELEMENT ;

// #line 3829
typedef enum _INTERFACE_TYPE {
	InterfaceTypeUndefined = - 1,
	Internal,
	Isa,
	Eisa,
	MicroChannel,
	TurboChannel,
	PCIBus,
	VMEBus,
	NuBus,
	PCMCIABus,
	CBus,
	MPIBus,
	MPSABus,
	ProcessorInternal,
	InternalPowerBus,
	PNPISABus,
	PNPBus,
	MaximumInterfaceType
} INTERFACE_TYPE , *  PINTERFACE_TYPE ;

// #line 3854
typedef enum _DMA_WIDTH {
	Width8Bits,
	Width16Bits,
	Width32Bits,
	MaximumDmaWidth
} DMA_WIDTH , *  PDMA_WIDTH ;

// #line 3865
typedef enum _DMA_SPEED {
	Compatible,
	TypeA,
	TypeB,
	TypeC,
	TypeF,
	MaximumDmaSpeed
} DMA_SPEED , *  PDMA_SPEED ;

// #line 3879
typedef void ( *  PINTERFACE_REFERENCE )(PVOID Context ) ;

// #line 3880
typedef void ( *  PINTERFACE_DEREFERENCE )(PVOID Context ) ;

// #line 3888
typedef enum _BUS_DATA_TYPE {
	ConfigurationSpaceUndefined = - 1,
	Cmos,
	EisaConfiguration,
	Pos,
	CbusConfiguration,
	PCIConfiguration,
	VMEConfiguration,
	NuBusConfiguration,
	PCMCIAConfiguration,
	MPIConfiguration,
	MPSAConfiguration,
	PNPISAConfiguration,
	SgiInternalConfiguration,
	MaximumBusDataType
} BUS_DATA_TYPE , *  PBUS_DATA_TYPE ;

// #line 3910
typedef struct _IO_ERROR_LOG_PACKET {
	UCHAR MajorFunctionCode ;
	UCHAR RetryCount ;
	USHORT DumpDataSize ;
	USHORT NumberOfStrings ;
	USHORT StringOffset ;
	USHORT EventCategory ;
	NTSTATUS ErrorCode ;
	ULONG UniqueErrorValue ;
	NTSTATUS FinalStatus ;
	ULONG SequenceNumber ;
	ULONG IoControlCode ;
	LARGE_INTEGER DeviceOffset ;
	ULONG DumpData[1] ;
} IO_ERROR_LOG_PACKET , *  PIO_ERROR_LOG_PACKET ;

// #line 3931
typedef struct _IO_ERROR_LOG_MESSAGE {
	USHORT Type ;
	USHORT Size ;
	USHORT DriverNameLength ;
	LARGE_INTEGER TimeStamp ;
	ULONG DriverNameOffset ;
	IO_ERROR_LOG_PACKET EntryData ;
} IO_ERROR_LOG_MESSAGE , *  PIO_ERROR_LOG_MESSAGE ;

// #line 4074
typedef struct _KEY_BASIC_INFORMATION {
	LARGE_INTEGER LastWriteTime ;
	ULONG TitleIndex ;
	ULONG NameLength ;
	WCHAR Name[1] ;
} KEY_BASIC_INFORMATION , *  PKEY_BASIC_INFORMATION ;

typedef struct _KEY_NODE_INFORMATION {
	LARGE_INTEGER LastWriteTime ;
	ULONG TitleIndex ;
	ULONG ClassOffset ;
	ULONG ClassLength ;
	ULONG NameLength ;
	WCHAR Name[1] ;
} KEY_NODE_INFORMATION , *  PKEY_NODE_INFORMATION ;

// #line 4091
typedef struct _KEY_FULL_INFORMATION {
	LARGE_INTEGER LastWriteTime ;
	ULONG TitleIndex ;
	ULONG ClassOffset ;
	ULONG ClassLength ;
	ULONG SubKeys ;
	ULONG MaxNameLen ;
	ULONG MaxClassLen ;
	ULONG Values ;
	ULONG MaxValueNameLen ;
	ULONG MaxValueDataLen ;
	WCHAR Class[1] ;
} KEY_FULL_INFORMATION , *  PKEY_FULL_INFORMATION ;

// #line 4106
typedef struct _KEY_NAME_INFORMATION {
	ULONG NameLength ;
	WCHAR Name[1] ;
} KEY_NAME_INFORMATION , *  PKEY_NAME_INFORMATION ;

// #line 4112
typedef enum _KEY_INFORMATION_CLASS {
	KeyBasicInformation,
	KeyNodeInformation,
	KeyFullInformation,
	KeyNameInformation
} KEY_INFORMATION_CLASS ;

// #line 4122
typedef struct _KEY_WRITE_TIME_INFORMATION {
	LARGE_INTEGER LastWriteTime ;
} KEY_WRITE_TIME_INFORMATION , *  PKEY_WRITE_TIME_INFORMATION ;

typedef enum _KEY_SET_INFORMATION_CLASS {
	KeyWriteTimeInformation
} KEY_SET_INFORMATION_CLASS ;

// #line 4134
typedef struct _KEY_VALUE_BASIC_INFORMATION {
	ULONG TitleIndex ;
	ULONG Type ;
	ULONG NameLength ;
	WCHAR Name[1] ;
} KEY_VALUE_BASIC_INFORMATION , *  PKEY_VALUE_BASIC_INFORMATION ;

typedef struct _KEY_VALUE_FULL_INFORMATION {
	ULONG TitleIndex ;
	ULONG Type ;
	ULONG DataOffset ;
	ULONG DataLength ;
	ULONG NameLength ;
	WCHAR Name[1] ;
} KEY_VALUE_FULL_INFORMATION , *  PKEY_VALUE_FULL_INFORMATION ;

// #line 4151
typedef struct _KEY_VALUE_PARTIAL_INFORMATION {
	ULONG TitleIndex ;
	ULONG Type ;
	ULONG DataLength ;
	UCHAR Data[1] ;
} KEY_VALUE_PARTIAL_INFORMATION , *  PKEY_VALUE_PARTIAL_INFORMATION ;

typedef struct _KEY_VALUE_PARTIAL_INFORMATION_ALIGN64 {
	ULONG Type ;
	ULONG DataLength ;
	UCHAR Data[1] ;
} KEY_VALUE_PARTIAL_INFORMATION_ALIGN64 , * 
	PKEY_VALUE_PARTIAL_INFORMATION_ALIGN64 ;

// #line 4164
typedef struct _KEY_VALUE_ENTRY {
	PUNICODE_STRING ValueName ;
	ULONG DataLength ;
	ULONG DataOffset ;
	ULONG Type ;
} KEY_VALUE_ENTRY , *  PKEY_VALUE_ENTRY ;

typedef enum _KEY_VALUE_INFORMATION_CLASS {
	KeyValueBasicInformation,
	KeyValueFullInformation,
	KeyValuePartialInformation,
	KeyValueFullInformationAlign64,
	KeyValuePartialInformationAlign64
} KEY_VALUE_INFORMATION_CLASS ;

// #line 4210
typedef struct _OBJECT_NAME_INFORMATION {
	UNICODE_STRING Name ;
} OBJECT_NAME_INFORMATION , *  POBJECT_NAME_INFORMATION ;

// #line 4221
typedef enum _SECTION_INHERIT {
	ViewShare = 1,
	ViewUnmap = 2
} SECTION_INHERIT ;

// #line 4294
typedef struct _CLIENT_ID {
	HANDLE UniqueProcess ;
	HANDLE UniqueThread ;
} CLIENT_ID ;

// #line 4298
typedef CLIENT_ID *  PCLIENT_ID ;

// #line 4315
typedef struct _NT_TIB {
	struct _EXCEPTION_REGISTRATION_RECORD *  ExceptionList ;
	PVOID StackBase ;
	PVOID StackLimit ;
	PVOID SubSystemTib ;
	union  {
		PVOID FiberData ;
		ULONG Version ;
	}  ;
	PVOID ArbitraryUserPointer ;
	struct _NT_TIB *  Self ;
} NT_TIB ;

// #line 4327
typedef NT_TIB *  PNT_TIB ;

// #line 4332
typedef enum _PROCESSINFOCLASS {
	ProcessBasicInformation,
	ProcessQuotaLimits,
	ProcessIoCounters,
	ProcessVmCounters,
	ProcessTimes,
	ProcessBasePriority,
	ProcessRaisePriority,
	ProcessDebugPort,
	ProcessExceptionPort,
	ProcessAccessToken,
	ProcessLdtInformation,
	ProcessLdtSize,
	ProcessDefaultHardErrorMode,
	ProcessIoPortHandlers,
	ProcessPooledUsageAndLimits,
	ProcessWorkingSetWatch,
	ProcessUserModeIOPL,
	ProcessEnableAlignmentFaultFixup,
	ProcessPriorityClass,
	ProcessWx86Information,
	ProcessHandleCount,
	ProcessAffinityMask,
	ProcessPriorityBoost,
	ProcessDeviceMap,
	ProcessSessionInformation,
	ProcessForegroundInformation,
	ProcessWow64Information,
	MaxProcessInfoClass
} PROCESSINFOCLASS ;

// #line 4366
typedef enum _THREADINFOCLASS {
	ThreadBasicInformation,
	ThreadTimes,
	ThreadPriority,
	ThreadBasePriority,
	ThreadAffinityMask,
	ThreadImpersonationToken,
	ThreadDescriptorTableEntry,
	ThreadEnableAlignmentFaultFixup,
	ThreadEventPair_Reusable,
	ThreadQuerySetWin32StartAddress,
	ThreadZeroTlsCell,
	ThreadPerformanceCount,
	ThreadAmILastThread,
	ThreadIdealProcessor,
	ThreadPriorityBoost,
	ThreadSetTlsArrayAddress,
	ThreadIsIoPending,
	ThreadHideFromDebugger,
	MaxThreadInfoClass
} THREADINFOCLASS ;

// #line 4395
typedef struct _PROCESS_WS_WATCH_INFORMATION {
	PVOID FaultingPc ;
	PVOID FaultingVa ;
} PROCESS_WS_WATCH_INFORMATION , *  PPROCESS_WS_WATCH_INFORMATION ;

// #line 4405
typedef struct _PROCESS_BASIC_INFORMATION {
	NTSTATUS ExitStatus ;
	PPEB PebBaseAddress ;
	ULONG_PTR AffinityMask ;
	KPRIORITY BasePriority ;
	ULONG_PTR UniqueProcessId ;
	ULONG_PTR InheritedFromUniqueProcessId ;
} PROCESS_BASIC_INFORMATION ;

// #line 4413
typedef PROCESS_BASIC_INFORMATION *  PPROCESS_BASIC_INFORMATION ;

// #line 4422
typedef struct _PROCESS_DEVICEMAP_INFORMATION {
	union  {
		struct  {
			HANDLE DirectoryHandle ;
		} Set ;
		struct  {
			ULONG DriveMap ;
			UCHAR DriveType[32] ;
		} Query ;
	}  ;
} PROCESS_DEVICEMAP_INFORMATION , *  PPROCESS_DEVICEMAP_INFORMATION ;

// #line 4440
typedef struct _PROCESS_SESSION_INFORMATION {
	ULONG SessionId ;
} PROCESS_SESSION_INFORMATION , *  PPROCESS_SESSION_INFORMATION ;

// #line 4454
typedef struct _QUOTA_LIMITS {
	SIZE_T PagedPoolLimit ;
	SIZE_T NonPagedPoolLimit ;
	SIZE_T MinimumWorkingSetSize ;
	SIZE_T MaximumWorkingSetSize ;
	SIZE_T PagefileLimit ;
	LARGE_INTEGER TimeLimit ;
} QUOTA_LIMITS ;

// #line 4462
typedef QUOTA_LIMITS *  PQUOTA_LIMITS ;

// #line 4472
typedef struct _IO_COUNTERS {
	ULONGLONG ReadOperationCount ;
	ULONGLONG WriteOperationCount ;
	ULONGLONG OtherOperationCount ;
	ULONGLONG ReadTransferCount ;
	ULONGLONG WriteTransferCount ;
	ULONGLONG OtherTransferCount ;
} IO_COUNTERS ;

// #line 4480
typedef IO_COUNTERS *  PIO_COUNTERS ;

// #line 4488
typedef struct _VM_COUNTERS {
	SIZE_T PeakVirtualSize ;
	SIZE_T VirtualSize ;
	ULONG PageFaultCount ;
	SIZE_T PeakWorkingSetSize ;
	SIZE_T WorkingSetSize ;
	SIZE_T QuotaPeakPagedPoolUsage ;
	SIZE_T QuotaPagedPoolUsage ;
	SIZE_T QuotaPeakNonPagedPoolUsage ;
	SIZE_T QuotaNonPagedPoolUsage ;
	SIZE_T PagefileUsage ;
	SIZE_T PeakPagefileUsage ;
} VM_COUNTERS ;

// #line 4501
typedef VM_COUNTERS *  PVM_COUNTERS ;

// #line 4508
typedef struct _POOLED_USAGE_AND_LIMITS {
	SIZE_T PeakPagedPoolUsage ;
	SIZE_T PagedPoolUsage ;
	SIZE_T PagedPoolLimit ;
	SIZE_T PeakNonPagedPoolUsage ;
	SIZE_T NonPagedPoolUsage ;
	SIZE_T NonPagedPoolLimit ;
	SIZE_T PeakPagefileUsage ;
	SIZE_T PagefileUsage ;
	SIZE_T PagefileLimit ;
} POOLED_USAGE_AND_LIMITS ;

// #line 4519
typedef POOLED_USAGE_AND_LIMITS *  PPOOLED_USAGE_AND_LIMITS ;

// #line 4528
typedef struct _PROCESS_ACCESS_TOKEN {
	HANDLE Token ;
	HANDLE Thread ;
} PROCESS_ACCESS_TOKEN , *  PPROCESS_ACCESS_TOKEN ;

// #line 4555
typedef struct _KERNEL_USER_TIMES {
	LARGE_INTEGER CreateTime ;
	LARGE_INTEGER ExitTime ;
	LARGE_INTEGER KernelTime ;
	LARGE_INTEGER UserTime ;
} KERNEL_USER_TIMES ;

// #line 4561
typedef KERNEL_USER_TIMES *  PKERNEL_USER_TIMES ;

// #line 4562
// #line 4572

// #line 4587
typedef enum _SYSTEM_POWER_STATE {
	PowerSystemUnspecified = 0,
	PowerSystemWorking,
	PowerSystemSleeping1,
	PowerSystemSleeping2,
	PowerSystemSleeping3,
	PowerSystemHibernate,
	PowerSystemShutdown,
	PowerSystemMaximum
} SYSTEM_POWER_STATE , *  PSYSTEM_POWER_STATE ;

typedef enum  {
	PowerActionNone = 0,
	PowerActionReserved,
	PowerActionSleep,
	PowerActionHibernate,
	PowerActionShutdown,
	PowerActionShutdownReset,
	PowerActionShutdownOff,
	PowerActionWarmEject
} POWER_ACTION , *  PPOWER_ACTION ;

typedef enum _DEVICE_POWER_STATE {
	PowerDeviceUnspecified = 0,
	PowerDeviceD0,
	PowerDeviceD1,
	PowerDeviceD2,
	PowerDeviceD3,
	PowerDeviceMaximum
} DEVICE_POWER_STATE , *  PDEVICE_POWER_STATE ;

typedef union _POWER_STATE {
	SYSTEM_POWER_STATE SystemState ;
	DEVICE_POWER_STATE DeviceState ;
} POWER_STATE , *  PPOWER_STATE ;

typedef enum _POWER_STATE_TYPE {
	SystemPowerState = 0,
	DevicePowerState
} POWER_STATE_TYPE , *  PPOWER_STATE_TYPE ;

// #line 4654
typedef ULONG EXECUTION_STATE ;

typedef enum  {
	LT_DONT_CARE,
	LT_LOWEST_LATENCY
} LATENCY_TIME ;

// #line 4663
typedef enum  {
	SystemPowerPolicyAc,
	SystemPowerPolicyDc,
	VerifySystemPolicyAc,
	VerifySystemPolicyDc,
	SystemPowerCapabilities,
	SystemBatteryState,
	SystemPowerStateHandler,
	ProcessorStateHandler,
	SystemPowerPolicyCurrent,
	AdministratorPowerPolicy,
	SystemReserveHiberFile,
	ProcessorInformation,
	SystemPowerInformation
} POWER_INFORMATION_LEVEL ;

// #line 4690
typedef ULONG PFN_COUNT ;

typedef LONG SPFN_NUMBER , *  PSPFN_NUMBER ;

// #line 4693
typedef ULONG PFN_NUMBER , *  PPFN_NUMBER ;

// #line 4719
typedef union _MCI_STATS {
	struct  {
		USHORT McaCod ;
		USHORT MsCod ;
		ULONG OtherInfo  : 25;
		ULONG Damage  : 1;
		ULONG AddressValid  : 1;
		ULONG MiscValid  : 1;
		ULONG Enabled  : 1;
		ULONG UnCorrected  : 1;
		ULONG OverFlow  : 1;
		ULONG Valid  : 1;
	} MciStats ;
	ULONGLONG QuadPart ;
} MCI_STATS , *  PMCI_STATS ;

extern UCHAR READ_PORT_UCHAR(PUCHAR Port ) ;
extern USHORT READ_PORT_USHORT(PUSHORT Port ) ;
extern ULONG READ_PORT_ULONG(PULONG Port ) ;
extern void READ_PORT_BUFFER_UCHAR(PUCHAR Port , PUCHAR Buffer , ULONG Count ) ;
extern void READ_PORT_BUFFER_USHORT(PUSHORT Port , PUSHORT Buffer, ULONG Count ) ;
extern void READ_PORT_BUFFER_ULONG(PULONG Port , PULONG Buffer , ULONG Count ) ;
extern void WRITE_PORT_UCHAR(PUCHAR Port , UCHAR Value ) ;
extern void WRITE_PORT_USHORT(PUSHORT Port , USHORT Value ) ;
extern void WRITE_PORT_ULONG(PULONG Port , ULONG Value ) ;
extern void WRITE_PORT_BUFFER_UCHAR(PUCHAR Port , PUCHAR Buffer , ULONG Count ) ;
extern void WRITE_PORT_BUFFER_USHORT(PUSHORT Port , PUSHORT Buffer , ULONG Count ) ;
extern void WRITE_PORT_BUFFER_ULONG(PULONG Port , PULONG Buffer , ULONG Count ) ;


/* UCHAR READ_PORT_UCHAR(PUCHAR Port ) {} */
/* USHORT READ_PORT_USHORT(PUSHORT Port ) {} */
/* ULONG READ_PORT_ULONG(PULONG Port ) {} */
/* void READ_PORT_BUFFER_UCHAR(PUCHAR Port , PUCHAR Buffer , ULONG Count ) {} */
/* void READ_PORT_BUFFER_USHORT(PUSHORT Port , PUSHORT Buffer, ULONG Count ) {} */
/* void READ_PORT_BUFFER_ULONG(PULONG Port , PULONG Buffer , ULONG Count ) {} */
/* void WRITE_PORT_UCHAR(PUCHAR Port , UCHAR Value ) {} */
/* void WRITE_PORT_USHORT(PUSHORT Port , USHORT Value ) {} */
/* void WRITE_PORT_ULONG(PULONG Port , ULONG Value ) {} */
/* void WRITE_PORT_BUFFER_UCHAR(PUCHAR Port , PUCHAR Buffer , ULONG Count ) {} */
/* void WRITE_PORT_BUFFER_USHORT(PUSHORT Port , PUSHORT Buffer , ULONG Count ) {} */
/* void WRITE_PORT_BUFFER_ULONG(PULONG Port , PULONG Buffer , ULONG Count ) {} */
			     
// #line 4978
typedef struct _KPCR {
	NT_TIB NtTib ;
	struct _KPCR *  SelfPcr ;
	struct _KPRCB *  Prcb ;
	KIRQL Irql ;
	ULONG IRR ;
	ULONG IrrActive ;
	ULONG IDR ;
	ULONG Reserved2 ;
	struct _KIDTENTRY *  IDT ;
	struct _KGDTENTRY *  GDT ;
	struct _KTSS *  TSS ;
	USHORT MajorVersion ;
	USHORT MinorVersion ;
	KAFFINITY SetMember ;
	ULONG StallScaleFactor ;
	UCHAR DebugActive ;
	UCHAR Number ;
} KPCR ;

// #line 5006
typedef KPCR *  PKPCR ;

// #line 5012
typedef struct _KFLOATING_SAVE {
	ULONG ControlWord ;
	ULONG StatusWord ;
	ULONG ErrorOffset ;
	ULONG ErrorSelector ;
	ULONG DataOffset ;
	ULONG DataSelector ;
	ULONG Cr0NpxState ;
	ULONG Spare1 ;
} KFLOATING_SAVE , *  PKFLOATING_SAVE ;

// #line 5069
// extern PVOID *  MmHighestUserAddress ;
// extern PVOID *  MmSystemRangeStart ;
// extern ULONG *  MmUserProbeAddress ;

// #line 5153
typedef enum _INTERLOCKED_RESULT {
	ResultNegative /* = 0x8000 & ~ 0x4000 & (0x8000 | 0x4000) */,
	ResultZero /* = ~ 0x8000 & 0x4000 & (0x8000 | 0x4000) */,
	ResultPositive /* = ~ 0x8000 & ~ 0x4000 & (0x8000 | 0x4000) */
} INTERLOCKED_RESULT ;

extern LONG InterlockedIncrement(PLONG Addend );
extern LONG InterlockedDecrement(PLONG Addend );
extern LONG InterlockedExchange(PLONG Target , LONG Value );

/* LONG InterlockedIncrement(PLONG Addend ){ */
/*   LONG r; */
/*   return r; */
/* } */
/* LONG InterlockedDecrement(PLONG Addend ){ */
/*   LONG r; */
/*   return r; */
/* } */
/* LONG InterlockedExchange(PLONG Target , LONG Value ){ */
/*   LONG r; */
/*   return r; */
/* } */

typedef struct _KSYSTEM_TIME {
	ULONG LowPart ;
	LONG High1Time ;
	LONG High2Time ;
} KSYSTEM_TIME , *  PKSYSTEM_TIME ;

typedef struct _FLOATING_SAVE_AREA {
	ULONG ControlWord ;
	ULONG StatusWord ;
	ULONG TagWord ;
	ULONG ErrorOffset ;
	ULONG ErrorSelector ;
	ULONG DataOffset ;
	ULONG DataSelector ;
	UCHAR RegisterArea[80] ;
	ULONG Cr0NpxState ;
} FLOATING_SAVE_AREA ;

typedef FLOATING_SAVE_AREA *  PFLOATING_SAVE_AREA ;

// #line 7109
typedef struct _CONTEXT {
	ULONG ContextFlags ;
	ULONG Dr0 ;
	ULONG Dr1 ;
	ULONG Dr2 ;
	ULONG Dr3 ;
	ULONG Dr6 ;
	ULONG Dr7 ;
	FLOATING_SAVE_AREA FloatSave ;
	ULONG SegGs ;
	ULONG SegFs ;
	ULONG SegEs ;
	ULONG SegDs ;
	ULONG Edi ;
	ULONG Esi ;
	ULONG Ebx ;
	ULONG Edx ;
	ULONG Ecx ;
	ULONG Eax ;
	ULONG Ebp ;
	ULONG Eip ;
	ULONG SegCs ;
	ULONG EFlags ;
	ULONG Esp ;
	ULONG SegSs ;
	UCHAR ExtendedRegisters[512] ;
} CONTEXT ;

// #line 7197
typedef CONTEXT *  PCONTEXT ;

// #line 7826
typedef void ( *  PTIMER_APC_ROUTINE )(PVOID TimerContext , ULONG TimerLowValue
	, LONG TimerHighValue ) ;

// #line 7850
typedef enum _ALTERNATIVE_ARCHITECTURE_TYPE {
	StandardDesign,
	NEC98x86,
	EndAlternatives
} ALTERNATIVE_ARCHITECTURE_TYPE ;

// #line 7899
typedef struct _KUSER_SHARED_DATA {
	volatile ULONG TickCountLow ;
	ULONG TickCountMultiplier ;
	volatile KSYSTEM_TIME InterruptTime ;
	volatile KSYSTEM_TIME SystemTime ;
	volatile KSYSTEM_TIME TimeZoneBias ;
	USHORT ImageNumberLow ;
	USHORT ImageNumberHigh ;
	WCHAR NtSystemRoot[260] ;
	ULONG MaxStackTraceDepth ;
	ULONG CryptoExponent ;
	ULONG TimeZoneId ;
	ULONG Reserved2[8] ;
	NT_PRODUCT_TYPE NtProductType ;
	BOOLEAN ProductTypeIsValid ;
	ULONG NtMajorVersion ;
	ULONG NtMinorVersion ;
	BOOLEAN ProcessorFeatures[64] ;
	ULONG Reserved1 ;
	ULONG Reserved3 ;
	ULONG TimeSlip ;
	ALTERNATIVE_ARCHITECTURE_TYPE AlternativeArchitecture ;
	LARGE_INTEGER SystemExpirationDate ;
	ULONG SuiteMask ;
	BOOLEAN KdDebuggerEnabled ;
} KUSER_SHARED_DATA , *  PKUSER_SHARED_DATA ;

// #line 8123
typedef enum _CM_SERVICE_NODE_TYPE {
	DriverType /* = 0x00000001 */,
	FileSystemType /* = 0x00000002 */,
	Win32ServiceOwnProcess /* = 0x00000010 */,
	Win32ServiceShareProcess /* = 0x00000020 */,
	AdapterType /* = 0x00000004 */,
	RecognizerType /* = 0x00000008 */
} SERVICE_NODE_TYPE ;

typedef enum _CM_SERVICE_LOAD_TYPE {
	BootLoad /* = 0x00000000 */,
	SystemLoad /* = 0x00000001 */,
	AutoLoad /* = 0x00000002 */,
	DemandLoad /* = 0x00000003 */,
	DisableLoad /* = 0x00000004 */
} SERVICE_LOAD_TYPE ;

typedef enum _CM_ERROR_CONTROL_TYPE {
	IgnoreError /* = 0x00000000 */,
	NormalError/*  = 0x00000001 */,
	SevereError /* = 0x00000002 */,
	CriticalError /* = 0x00000003 */
} SERVICE_ERROR_TYPE ;

// #line 8172
typedef int CM_RESOURCE_TYPE ;

// #line 8198
typedef enum _CM_SHARE_DISPOSITION {
	CmResourceShareUndetermined /* = 0 */,
	CmResourceShareDeviceExclusive,
	CmResourceShareDriverExclusive,
	CmResourceShareShared
} CM_SHARE_DISPOSITION ;

// #line 8211
typedef PVOID PASSIGNED_RESOURCE ;

// #line 24 "C:/NTDDK/inc/pshpack4.h"

// #line 8309 "C:/NTDDK/inc/ddk/ntddk.h"
typedef struct _CM_PARTIAL_RESOURCE_DESCRIPTOR {
	UCHAR Type ;
	UCHAR ShareDisposition ;
	USHORT Flags ;
	union  {
		struct  {
			PHYSICAL_ADDRESS Start ;
			ULONG Length ;
		} Generic ;
		struct  {
			PHYSICAL_ADDRESS Start ;
			ULONG Length ;
		} Port ;
		struct  {
			ULONG Level ;
			ULONG Vector ;
			ULONG Affinity ;
		} Interrupt ;
		struct  {
			PHYSICAL_ADDRESS Start ;
			ULONG Length ;
		} Memory ;
		struct  {
			ULONG Channel ;
			ULONG Port ;
			ULONG Reserved1 ;
		} Dma ;
		struct  {
			ULONG Data[3] ;
		} DevicePrivate ;
		struct  {
			ULONG Start ;
			ULONG Length ;
			ULONG Reserved ;
		} BusNumber ;
		struct  {
			ULONG DataSize ;
			ULONG Reserved1 ;
			ULONG Reserved2 ;
		} DeviceSpecificData ;
	} u ;
} CM_PARTIAL_RESOURCE_DESCRIPTOR , *  PCM_PARTIAL_RESOURCE_DESCRIPTOR ;

typedef struct _CM_PARTIAL_RESOURCE_LIST {
	USHORT Version ;
	USHORT Revision ;
	ULONG Count ;
	CM_PARTIAL_RESOURCE_DESCRIPTOR PartialDescriptors[1] ;
} CM_PARTIAL_RESOURCE_LIST , *  PCM_PARTIAL_RESOURCE_LIST ;

typedef struct _CM_FULL_RESOURCE_DESCRIPTOR {
	INTERFACE_TYPE InterfaceType ;
	ULONG BusNumber ;
	CM_PARTIAL_RESOURCE_LIST PartialResourceList ;
} CM_FULL_RESOURCE_DESCRIPTOR , *  PCM_FULL_RESOURCE_DESCRIPTOR ;

typedef struct _CM_RESOURCE_LIST {
	ULONG Count ;
	CM_FULL_RESOURCE_DESCRIPTOR List[1] ;
} CM_RESOURCE_LIST , *  PCM_RESOURCE_LIST ;

typedef struct _DEVICE_FLAGS {
	ULONG Failed  : 1;
	ULONG ReadOnly  : 1;
	ULONG Removable  : 1;
	ULONG ConsoleIn  : 1;
	ULONG ConsoleOut  : 1;
	ULONG Input  : 1;
	ULONG Output  : 1;
} DEVICE_FLAGS , *  PDEVICE_FLAGS ;

// #line 8485
typedef struct _CM_COMPONENT_INFORMATION {
	DEVICE_FLAGS Flags ;
	ULONG Version ;
	ULONG Key ;
	ULONG AffinityMask ;
} CM_COMPONENT_INFORMATION , *  PCM_COMPONENT_INFORMATION ;

// #line 8503
typedef struct _CM_ROM_BLOCK {
	ULONG Address ;
	ULONG Size ;
} CM_ROM_BLOCK , *  PCM_ROM_BLOCK ;


typedef struct _CM_INT13_DRIVE_PARAMETER {
	USHORT DriveSelect ;
	ULONG MaxCylinders ;
	USHORT SectorsPerTrack ;
	USHORT MaxHeads ;
	USHORT NumberDrives ;
} CM_INT13_DRIVE_PARAMETER , *  PCM_INT13_DRIVE_PARAMETER ;

// #line 8532
typedef struct _CM_MCA_POS_DATA {
	USHORT AdapterId ;
	UCHAR PosData1 ;
	UCHAR PosData2 ;
	UCHAR PosData3 ;
	UCHAR PosData4 ;
} CM_MCA_POS_DATA , *  PCM_MCA_POS_DATA ;

// #line 8544
typedef struct _EISA_MEMORY_TYPE {
	UCHAR ReadWrite  : 1;
	UCHAR Cached  : 1;
	UCHAR Reserved0  : 1;
	UCHAR Type  : 2;
	UCHAR Shared  : 1;
	UCHAR Reserved1  : 1;
	UCHAR MoreEntries  : 1;
} EISA_MEMORY_TYPE , *  PEISA_MEMORY_TYPE ;

typedef struct _EISA_MEMORY_CONFIGURATION {
	EISA_MEMORY_TYPE ConfigurationByte ;
	UCHAR DataSize ;
	USHORT AddressLowWord ;
	UCHAR AddressHighByte ;
	USHORT MemorySize ;
} EISA_MEMORY_CONFIGURATION , *  PEISA_MEMORY_CONFIGURATION ;

// #line 8567
typedef struct _EISA_IRQ_DESCRIPTOR {
	UCHAR Interrupt  : 4;
	UCHAR Reserved  : 1;
	UCHAR LevelTriggered  : 1;
	UCHAR Shared  : 1;
	UCHAR MoreEntries  : 1;
} EISA_IRQ_DESCRIPTOR , *  PEISA_IRQ_DESCRIPTOR ;

typedef struct _EISA_IRQ_CONFIGURATION {
	EISA_IRQ_DESCRIPTOR ConfigurationByte ;
	UCHAR Reserved ;
} EISA_IRQ_CONFIGURATION , *  PEISA_IRQ_CONFIGURATION ;

// #line 8585
typedef struct _DMA_CONFIGURATION_BYTE0 {
	UCHAR Channel  : 3;
	UCHAR Reserved  : 3;
	UCHAR Shared  : 1;
	UCHAR MoreEntries  : 1;
} DMA_CONFIGURATION_BYTE0 ;

typedef struct _DMA_CONFIGURATION_BYTE1 {
	UCHAR Reserved0  : 2;
	UCHAR TransferSize  : 2;
	UCHAR Timing  : 2;
	UCHAR Reserved1  : 2;
} DMA_CONFIGURATION_BYTE1 ;

typedef struct _EISA_DMA_CONFIGURATION {
	DMA_CONFIGURATION_BYTE0 ConfigurationByte0 ;
	DMA_CONFIGURATION_BYTE1 ConfigurationByte1 ;
} EISA_DMA_CONFIGURATION , *  PEISA_DMA_CONFIGURATION ;

// #line 8609
typedef struct _EISA_PORT_DESCRIPTOR {
	UCHAR NumberPorts  : 5;
	UCHAR Reserved  : 1;
	UCHAR Shared  : 1;
	UCHAR MoreEntries  : 1;
} EISA_PORT_DESCRIPTOR , *  PEISA_PORT_DESCRIPTOR ;

typedef struct _EISA_PORT_CONFIGURATION {
	EISA_PORT_DESCRIPTOR Configuration ;
	USHORT PortAddress ;
} EISA_PORT_CONFIGURATION , *  PEISA_PORT_CONFIGURATION ;

// #line 8628
typedef struct _CM_EISA_SLOT_INFORMATION {
	UCHAR ReturnCode ;
	UCHAR ReturnFlags ;
	UCHAR MajorRevision ;
	UCHAR MinorRevision ;
	USHORT Checksum ;
	UCHAR NumberFunctions ;
	UCHAR FunctionInformation ;
	ULONG CompressedId ;
} CM_EISA_SLOT_INFORMATION , *  PCM_EISA_SLOT_INFORMATION ;

// #line 8644
typedef struct _CM_EISA_FUNCTION_INFORMATION {
	ULONG CompressedId ;
	UCHAR IdSlotFlags1 ;
	UCHAR IdSlotFlags2 ;
	UCHAR MinorRevision ;
	UCHAR MajorRevision ;
	UCHAR Selections[26] ;
	UCHAR FunctionFlags ;
	UCHAR TypeString[80] ;
	EISA_MEMORY_CONFIGURATION EisaMemory[9] ;
	EISA_IRQ_CONFIGURATION EisaIrq[7] ;
	EISA_DMA_CONFIGURATION EisaDma[4] ;
	EISA_PORT_CONFIGURATION EisaPort[20] ;
	UCHAR InitializationData[60] ;
} CM_EISA_FUNCTION_INFORMATION , *  PCM_EISA_FUNCTION_INFORMATION ;

// #line 8678
typedef struct _CM_PNP_BIOS_DEVICE_NODE {
	USHORT Size ;
	UCHAR Node ;
	ULONG ProductId ;
	UCHAR DeviceType[3] ;
	USHORT DeviceAttributes ;
} CM_PNP_BIOS_DEVICE_NODE , *  PCM_PNP_BIOS_DEVICE_NODE ;

// #line 8692
typedef struct _CM_PNP_BIOS_INSTALLATION_CHECK {
	UCHAR Signature[4] ;
	UCHAR Revision ;
	UCHAR Length ;
	USHORT ControlField ;
	UCHAR Checksum ;
	ULONG EventFlagAddress ;
	USHORT RealModeEntryOffset ;
	USHORT RealModeEntrySegment ;
	USHORT ProtectedModeEntryOffset ;
	ULONG ProtectedModeCodeBaseAddress ;
	ULONG OemDeviceId ;
	USHORT RealModeDataBaseAddress ;
	ULONG ProtectedModeDataBaseAddress ;
} CM_PNP_BIOS_INSTALLATION_CHECK , *  PCM_PNP_BIOS_INSTALLATION_CHECK ;

// #line 27 "C:/NTDDK/inc/poppack.h"

// #pragma warning(disable:4103)

// #pragma pack(pop)
// #line 8761 "C:/NTDDK/inc/ddk/ntddk.h"
typedef struct _CM_SCSI_DEVICE_DATA {
	USHORT Version ;
	USHORT Revision ;
	UCHAR HostIdentifier ;
} CM_SCSI_DEVICE_DATA , *  PCM_SCSI_DEVICE_DATA ;

// #line 8775
typedef struct _CM_VIDEO_DEVICE_DATA {
	USHORT Version ;
	USHORT Revision ;
	ULONG VideoClock ;
} CM_VIDEO_DEVICE_DATA , *  PCM_VIDEO_DEVICE_DATA ;

// #line 8785
typedef struct _CM_SONIC_DEVICE_DATA {
	USHORT Version ;
	USHORT Revision ;
	USHORT DataConfigurationRegister ;
	UCHAR EthernetAddress[8] ;
} CM_SONIC_DEVICE_DATA , *  PCM_SONIC_DEVICE_DATA ;

// #line 8796
typedef struct _CM_SERIAL_DEVICE_DATA {
	USHORT Version ;
	USHORT Revision ;
	ULONG BaudClock ;
} CM_SERIAL_DEVICE_DATA , *  PCM_SERIAL_DEVICE_DATA ;

// #line 8810
typedef struct _CM_MONITOR_DEVICE_DATA {
	USHORT Version ;
	USHORT Revision ;
	USHORT HorizontalScreenSize ;
	USHORT VerticalScreenSize ;
	USHORT HorizontalResolution ;
	USHORT VerticalResolution ;
	USHORT HorizontalDisplayTimeLow ;
	USHORT HorizontalDisplayTime ;
	USHORT HorizontalDisplayTimeHigh ;
	USHORT HorizontalBackPorchLow ;
	USHORT HorizontalBackPorch ;
	USHORT HorizontalBackPorchHigh ;
	USHORT HorizontalFrontPorchLow ;
	USHORT HorizontalFrontPorch ;
	USHORT HorizontalFrontPorchHigh ;
	USHORT HorizontalSyncLow ;
	USHORT HorizontalSync ;
	USHORT HorizontalSyncHigh ;
	USHORT VerticalBackPorchLow ;
	USHORT VerticalBackPorch ;
	USHORT VerticalBackPorchHigh ;
	USHORT VerticalFrontPorchLow ;
	USHORT VerticalFrontPorch ;
	USHORT VerticalFrontPorchHigh ;
	USHORT VerticalSyncLow ;
	USHORT VerticalSync ;
	USHORT VerticalSyncHigh ;
} CM_MONITOR_DEVICE_DATA , *  PCM_MONITOR_DEVICE_DATA ;

// #line 8844
typedef struct _CM_FLOPPY_DEVICE_DATA {
	USHORT Version ;
	USHORT Revision ;
	CHAR Size[8] ;
	ULONG MaxDensity ;
	ULONG MountDensity ;
	UCHAR StepRateHeadUnloadTime ;
	UCHAR HeadLoadTime ;
	UCHAR MotorOffTime ;
	UCHAR SectorLengthCode ;
	UCHAR SectorPerTrack ;
	UCHAR ReadWriteGapLength ;
	UCHAR DataTransferLength ;
	UCHAR FormatGapLength ;
	UCHAR FormatFillCharacter ;
	UCHAR HeadSettleTime ;
	UCHAR MotorSettleTime ;
	UCHAR MaximumTrackValue ;
	UCHAR DataTransferRate ;
} CM_FLOPPY_DEVICE_DATA , *  PCM_FLOPPY_DEVICE_DATA ;

// #line 8881
typedef struct _CM_KEYBOARD_DEVICE_DATA {
	USHORT Version ;
	USHORT Revision ;
	UCHAR Type ;
	UCHAR Subtype ;
	USHORT KeyboardFlags ;
} CM_KEYBOARD_DEVICE_DATA , *  PCM_KEYBOARD_DEVICE_DATA ;

// #line 8893
typedef struct _CM_DISK_GEOMETRY_DEVICE_DATA {
	ULONG BytesPerSector ;
	ULONG NumberOfCylinders ;
	ULONG SectorsPerTrack ;
	ULONG NumberOfHeads ;
} CM_DISK_GEOMETRY_DEVICE_DATA , *  PCM_DISK_GEOMETRY_DEVICE_DATA ;

// #line 8905
typedef struct _CM_PCCARD_DEVICE_DATA {
	UCHAR Flags ;
	UCHAR ErrorCode ;
	USHORT Reserved ;
	ULONG BusData ;
	ULONG DeviceId ;
	ULONG LegacyBaseAddress ;
	UCHAR IRQMap[16] ;
} CM_PCCARD_DEVICE_DATA , *  PCM_PCCARD_DEVICE_DATA ;

// #line 8944
typedef struct _IO_RESOURCE_DESCRIPTOR {
	UCHAR Option ;
	UCHAR Type ;
	UCHAR ShareDisposition ;
	UCHAR Spare1 ;
	USHORT Flags ;
	USHORT Spare2 ;
	union  {
		struct  {
			ULONG Length ;
			ULONG Alignment ;
			PHYSICAL_ADDRESS MinimumAddress ;
			PHYSICAL_ADDRESS MaximumAddress ;
		} Port ;
		struct  {
			ULONG Length ;
			ULONG Alignment ;
			PHYSICAL_ADDRESS MinimumAddress ;
			PHYSICAL_ADDRESS MaximumAddress ;
		} Memory ;
		struct  {
			ULONG MinimumVector ;
			ULONG MaximumVector ;
		} Interrupt ;
		struct  {
			ULONG MinimumChannel ;
			ULONG MaximumChannel ;
		} Dma ;
		struct  {
			ULONG Length ;
			ULONG Alignment ;
			PHYSICAL_ADDRESS MinimumAddress ;
			PHYSICAL_ADDRESS MaximumAddress ;
		} Generic ;
		struct  {
			ULONG Data[3] ;
		} DevicePrivate ;
		struct  {
			ULONG Length ;
			ULONG MinBusNumber ;
			ULONG MaxBusNumber ;
			ULONG Reserved ;
		} BusNumber ;
		struct  {
			PASSIGNED_RESOURCE AssignedResource ;
		} AssignedResource ;
		struct  {
			UCHAR Type ;
			UCHAR Reserved[3] ;
			PASSIGNED_RESOURCE AssignedResource ;
			PHYSICAL_ADDRESS Transformation ;
		} SubAllocateFrom ;
		struct  {
			ULONG Priority ;
			ULONG Reserved1 ;
			ULONG Reserved2 ;
		} ConfigData ;
	} u ;
} IO_RESOURCE_DESCRIPTOR , *  PIO_RESOURCE_DESCRIPTOR ;

// #line 9027
typedef struct _IO_RESOURCE_LIST {
	USHORT Version ;
	USHORT Revision ;
	ULONG Count ;
	IO_RESOURCE_DESCRIPTOR Descriptors[1] ;
} IO_RESOURCE_LIST , *  PIO_RESOURCE_LIST ;

// #line 9036
typedef struct _IO_RESOURCE_REQUIREMENTS_LIST {
	ULONG ListSize ;
	INTERFACE_TYPE InterfaceType ;
	ULONG BusNumber ;
	ULONG SlotNumber ;
	ULONG Reserved[3] ;
	ULONG AlternativeLists ;
	IO_RESOURCE_LIST List[1] ;
} IO_RESOURCE_REQUIREMENTS_LIST , *  PIO_RESOURCE_REQUIREMENTS_LIST ;

// #line 9065
typedef struct _EXCEPTION_RECORD {
	NTSTATUS ExceptionCode ;
	ULONG ExceptionFlags ;
	struct _EXCEPTION_RECORD *  ExceptionRecord ;
	PVOID ExceptionAddress ;
	ULONG NumberParameters ;
	ULONG_PTR ExceptionInformation[15] ;
} EXCEPTION_RECORD ;

typedef EXCEPTION_RECORD *  PEXCEPTION_RECORD ;

typedef struct _EXCEPTION_RECORD32 {
	NTSTATUS ExceptionCode ;
	ULONG ExceptionFlags ;
	ULONG ExceptionRecord ;
	ULONG ExceptionAddress ;
	ULONG NumberParameters ;
	ULONG ExceptionInformation[15] ;
} EXCEPTION_RECORD32 , *  PEXCEPTION_RECORD32 ;

typedef struct _EXCEPTION_RECORD64 {
	NTSTATUS ExceptionCode ;
	ULONG ExceptionFlags ;
	ULONG64 ExceptionRecord ;
	ULONG64 ExceptionAddress ;
	ULONG NumberParameters ;
	ULONG __unusedAlignment ;
	ULONG64 ExceptionInformation[15] ;
} EXCEPTION_RECORD64 , *  PEXCEPTION_RECORD64 ;

// #line 9099
typedef struct _EXCEPTION_POINTERS {
	PEXCEPTION_RECORD ExceptionRecord ;
	PCONTEXT ContextRecord ;
} EXCEPTION_POINTERS , *  PEXCEPTION_POINTERS ;

// #line 9111
typedef enum _CONFIGURATION_TYPE {
	ArcSystem,
	CentralProcessor,
	FloatingPointProcessor,
	PrimaryIcache,
	PrimaryDcache,
	SecondaryIcache,
	SecondaryDcache,
	SecondaryCache,
	EisaAdapter,
	TcAdapter,
	ScsiAdapter,
	DtiAdapter,
	MultiFunctionAdapter,
	DiskController,
	TapeController,
	CdromController,
	WormController,
	SerialController,
	NetworkController,
	DisplayController,
	ParallelController,
	PointerController,
	KeyboardController,
	AudioController,
	OtherController,
	DiskPeripheral,
	FloppyDiskPeripheral,
	TapePeripheral,
	ModemPeripheral,
	MonitorPeripheral,
	PrinterPeripheral,
	PointerPeripheral,
	KeyboardPeripheral,
	TerminalPeripheral,
	OtherPeripheral,
	LinePeripheral,
	NetworkPeripheral,
	SystemMemory,
	DockingInformation,
	RealModeIrqRoutingTable,
	MaximumType
} CONFIGURATION_TYPE , *  PCONFIGURATION_TYPE ;

// #line 9161
typedef enum _KINTERRUPT_MODE {
	LevelSensitive,
	Latched
} KINTERRUPT_MODE ;

// #line 9170
typedef enum _KWAIT_REASON {
	Executive,
	FreePage,
	PageIn,
	PoolAllocation,
	DelayExecution,
	Suspended,
	UserRequest,
	WrExecutive,
	WrFreePage,
	WrPageIn,
	WrPoolAllocation,
	WrDelayExecution,
	WrSuspended,
	WrUserRequest,
	WrEventPair,
	WrQueue,
	WrLpcReceive,
	WrLpcReply,
	WrVirtualMemory,
	WrPageOut,
	WrRendezvous,
	Spare2,
	Spare3,
	Spare4,
	Spare5,
	Spare6,
	WrKernel,
	MaximumWaitReason
} KWAIT_REASON ;

// #line 9207
typedef struct _DISPATCHER_HEADER {
	UCHAR Type ;
	UCHAR Absolute ;
	UCHAR Size ;
	UCHAR Inserted ;
	LONG SignalState ;
	LIST_ENTRY WaitListHead ;
} DISPATCHER_HEADER ;

// #line 9217
typedef struct _KWAIT_BLOCK {
	LIST_ENTRY WaitListEntry ;
	struct _KTHREAD *  Thread ;
	PVOID Object ;
	struct _KWAIT_BLOCK *  NextWaitBlock ;
	USHORT WaitKey ;
	USHORT WaitType ;
} KWAIT_BLOCK , *  PKWAIT_BLOCK , *  PRKWAIT_BLOCK ;

// #line 9230
typedef void ( *  PKSTART_ROUTINE )(PVOID StartContext ) ;

// #line 9244
typedef struct _KDEVICE_QUEUE {
	CSHORT Type ;
	CSHORT Size ;
	LIST_ENTRY DeviceListHead ;
	KSPIN_LOCK Lock ;
	BOOLEAN Busy ;
} KDEVICE_QUEUE , *  PKDEVICE_QUEUE , *  PRKDEVICE_QUEUE ;

typedef struct _KDEVICE_QUEUE_ENTRY {
	LIST_ENTRY DeviceListEntry ;
	ULONG SortKey ;
	BOOLEAN Inserted ;
} KDEVICE_QUEUE_ENTRY , *  PKDEVICE_QUEUE_ENTRY , *  PRKDEVICE_QUEUE_ENTRY ;

// #line 9263
typedef struct _KEVENT {
	DISPATCHER_HEADER Header ;
} KEVENT , *  PKEVENT , *  PRKEVENT ;

// #line 9271
typedef BOOLEAN ( *  PKSERVICE_ROUTINE )(struct _KINTERRUPT *  Interrupt , PVOID
	ServiceContext ) ;

// #line 9281
typedef struct _KMUTANT {
	DISPATCHER_HEADER Header ;
	LIST_ENTRY MutantListEntry ;
	struct _KTHREAD *  OwnerThread ;
	BOOLEAN Abandoned ;
	UCHAR ApcDisable ;
} KMUTANT , *  PKMUTANT , *  PRKMUTANT , KMUTEX , *  PKMUTEX , *  PRKMUTEX ;

// #line 9294
typedef struct _KSEMAPHORE {
	DISPATCHER_HEADER Header ;
	LONG Limit ;
} KSEMAPHORE , *  PKSEMAPHORE , *  PRKSEMAPHORE ;

// #line 9304
typedef struct _KTIMER {
	DISPATCHER_HEADER Header ;
	ULARGE_INTEGER DueTime ;
	LIST_ENTRY TimerListEntry ;
	struct _KDPC *  Dpc ;
	LONG Period ;
} KTIMER , *  PKTIMER , *  PRKTIMER ;

extern void KeInitializeDpc(PRKDPC Dpc , PKDEFERRED_ROUTINE
			    DeferredRoutine , PVOID DeferredContext );

/* void KeInitializeDpc(PRKDPC Dpc , PKDEFERRED_ROUTINE */
/* 		     DeferredRoutine , PVOID DeferredContext ){} */

// #line 9324
BOOLEAN KeInsertQueueDpc(PRKDPC Dpc , PVOID
			 SystemArgument1 , PVOID SystemArgument2 ){

  if(TRACER_NONDET>0)
    return (BOOLEAN) 0;
  else
    return (BOOLEAN) 1;

}
// #line 9332
BOOLEAN KeRemoveQueueDpc(PRKDPC Dpc ){

  if(TRACER_NONDET>0)
    return (BOOLEAN) 0;
  else
    return (BOOLEAN) 1;
}

// #line 9340
void KeSetImportanceDpc(PRKDPC Dpc , KDPC_IMPORTANCE
			Importance ) ;
// #line 9347
void KeSetTargetProcessorDpc(PRKDPC Dpc , CCHAR Number ) ;
// #line 9359
void KeInitializeDeviceQueue(PKDEVICE_QUEUE DeviceQueue );
// #line 9365
BOOLEAN KeInsertDeviceQueue(PKDEVICE_QUEUE DeviceQueue ,
			    PKDEVICE_QUEUE_ENTRY DeviceQueueEntry ) ;
// #line 9372
BOOLEAN KeInsertByKeyDeviceQueue(PKDEVICE_QUEUE
	DeviceQueue , PKDEVICE_QUEUE_ENTRY DeviceQueueEntry , ULONG SortKey ) ;
// #line 9380
PKDEVICE_QUEUE_ENTRY KeRemoveDeviceQueue(PKDEVICE_QUEUE
					 DeviceQueue ) ;
// #line 9386
PKDEVICE_QUEUE_ENTRY KeRemoveByKeyDeviceQueue(PKDEVICE_QUEUE DeviceQueue , ULONG SortKey ) ;
// #line 9393
BOOLEAN KeRemoveEntryDeviceQueue(PKDEVICE_QUEUE DeviceQueue ,
				 PKDEVICE_QUEUE_ENTRY DeviceQueueEntry ) ;
// #line 9400
BOOLEAN KeSynchronizeExecution(PKINTERRUPT Interrupt ,
			       PKSYNCHRONIZE_ROUTINE SynchronizeRoutine , 
			       PVOID SynchronizeContext ){
  if(TRACER_NONDET>0)
    return (BOOLEAN) 0;
  else
    return (BOOLEAN) 1;
}

// #line 9423
void KeClearEvent(PRKEVENT Event ){}
// void KeClearEvent(PRKEVENT Event ){}
// #line 9429
LONG KePulseEvent(PRKEVENT Event , KPRIORITY Increment ,
		  BOOLEAN Wait ) ;
// #line 9437
LONG KeReadStateEvent(PRKEVENT Event ) ;
// #line 9445
LONG KeResetEvent(PRKEVENT Event ) ;
// #line 9451
LONG KeSetEvent(PRKEVENT Event , KPRIORITY Increment , BOOLEAN Wait ) ;		
// #line 9463
void KeInitializeMutex(PRKMUTEX Mutex , ULONG Level ) ;
// #line 9472
LONG KeReleaseMutex(PRKMUTEX Mutex , BOOLEAN Wait ) ;
LONG KeReadStateSemaphore(PRKSEMAPHORE Semaphore ) ;
extern LONG KeReleaseSemaphore(PRKSEMAPHORE Semaphore , KPRIORITY Increment ,
			       LONG Adjustment , BOOLEAN Wait ) ;
NTSTATUS KeDelayExecutionThread(KPROCESSOR_MODE WaitMode ,
				BOOLEAN Alertable , PLARGE_INTEGER Interval ) ;
KPRIORITY KeQueryPriorityThread(PKTHREAD Thread ) ;

extern void KeQuerySystemTime(PLARGE_INTEGER CurrentTime );
// void KeQuerySystemTime(PLARGE_INTEGER CurrentTime ){}
LONG KeSetBasePriorityThread(PKTHREAD Thread , LONG Increment ) ;			     
KPRIORITY KeSetPriorityThread(PKTHREAD Thread , KPRIORITY Priority ) ;			      
void KeEnterCriticalRegion(void  ) ;
void KeLeaveCriticalRegion(void  ) ;
extern void KeInitializeTimer(PKTIMER Timer );
// void KeInitializeTimer(PKTIMER Timer ){}
extern void KeInitializeTimerEx(PKTIMER Timer , TIMER_TYPE Type );
// void KeInitializeTimerEx(PKTIMER Timer , TIMER_TYPE Type ){}
BOOLEAN KeCancelTimer(PKTIMER Timer){
  if(TRACER_NONDET>0)
    return (BOOLEAN) 0;
  else
    return (BOOLEAN) 1;
}
BOOLEAN KeReadStateTimer(PKTIMER Timer ) ;
BOOLEAN KeSetTimer(PKTIMER Timer , LARGE_INTEGER DueTime ,
		   PKDPC Dpc ){
  if(TRACER_NONDET>0)
    return (BOOLEAN) 0;
  else
    return (BOOLEAN) 1;
}
BOOLEAN KeSetTimerEx(PKTIMER Timer , LARGE_INTEGER DueTime,
		     LONG Period , PKDPC Dpc ) ;
NTSTATUS KeWaitForMultipleObjects(ULONG Count , PVOID Object[] ,
				  WAIT_TYPE WaitType , KWAIT_REASON WaitReason ,
				  KPROCESSOR_MODE WaitMode , BOOLEAN Alertable , 
				  PLARGE_INTEGER Timeout ,
				  PKWAIT_BLOCK WaitBlockArray ) ;
 NTSTATUS KeWaitForSingleObject(PVOID Object , KWAIT_REASON WaitReason ,
				KPROCESSOR_MODE WaitMode , BOOLEAN Alertable ,
				PLARGE_INTEGER Timeout ) ;
void KefAcquireSpinLockAtDpcLevel(PKSPIN_LOCK SpinLock ) ;
// #line 9727
void KefReleaseSpinLockFromDpcLevel(PKSPIN_LOCK SpinLock ) ;
// #line 9737
KIRQL KfAcquireSpinLock(PKSPIN_LOCK SpinLock ){
  KIRQL r;
  return r;
}

// #line 9744
void KfReleaseSpinLock(PKSPIN_LOCK SpinLock , KIRQL NewIrql ) ;
// #line 9754
KIRQL  KeAcquireSpinLockRaiseToSynch(PKSPIN_LOCK SpinLock ) ;
void KfLowerIrql(KIRQL NewIrql ){}
KIRQL KfRaiseIrql(KIRQL NewIrql ){
  KIRQL R_NONDET;
  return R_NONDET;
}

// #line 9824
 KIRQL KeRaiseIrqlToDpcLevel(void  ) ;
// #line 9830
 KIRQL KeRaiseIrqlToSynchLevel(void  ) ;
// #line 9893
BOOLEAN KeGetBugMessageText(ULONG MessageId , PANSI_STRING ReturnedString ) ;

// #line 9899
typedef enum _KBUGCHECK_BUFFER_DUMP_STATE {
	BufferEmpty,
	BufferInserted,
	BufferStarted,
	BufferFinished,
	BufferIncomplete
} KBUGCHECK_BUFFER_DUMP_STATE ;

typedef void ( *  PKBUGCHECK_CALLBACK_ROUTINE )(PVOID Buffer , ULONG Length ) ;

// #line 9914
typedef struct _KBUGCHECK_CALLBACK_RECORD {
	LIST_ENTRY Entry ;
	PKBUGCHECK_CALLBACK_ROUTINE CallbackRoutine ;
	PVOID Buffer ;
	ULONG Length ;
	PUCHAR Component ;
	ULONG_PTR Checksum ;
	UCHAR State ;
} KBUGCHECK_CALLBACK_RECORD , *  PKBUGCHECK_CALLBACK_RECORD ;


// #line 10002
typedef void ( *  PSWAP_CONTEXT_NOTIFY_ROUTINE )(HANDLE OldThreadId ,
	HANDLE NewThreadId ) ;

// #line 10009
void  KeSetSwapContextNotifyRoutine(PSWAP_CONTEXT_NOTIFY_ROUTINE NotifyRoutine ) ;	

// #line 10020
typedef LOGICAL ( *  PTHREAD_SELECT_NOTIFY_ROUTINE )(HANDLE ThreadId );

// #line 10026
void KeSetThreadSelectNotifyRoutine(PTHREAD_SELECT_NOTIFY_ROUTINE NotifyRoutine ) ;
// #line 10037
typedef void ( *  PTIME_UPDATE_NOTIFY_ROUTINE )(HANDLE ThreadId ,
	KPROCESSOR_MODE Mode ) ;

// #line 10044
void KeSetTimeUpdateNotifyRoutine(PTIME_UPDATE_NOTIFY_ROUTINE NotifyRoutine );
// #line 10051
//extern volatile KSYSTEM_TIME KeTickCount ;

typedef enum _MEMORY_CACHING_TYPE_ORIG {
	MmFrameBufferCached = 2
} MEMORY_CACHING_TYPE_ORIG ;

typedef enum _MEMORY_CACHING_TYPE {
	MmNonCached = 0,
	MmCached = 1,
	MmWriteCombined /* = MmFrameBufferCached */,
	MmHardwareCoherentCached,
	MmNonCachedUnordered,
	MmUSWCCached,
	MmMaximumCacheType
} MEMORY_CACHING_TYPE ;

// #line 10074
//extern PBOOLEAN KdDebuggerNotPresent ;
//extern PBOOLEAN KdDebuggerEnabled ;

// #line 10087
typedef struct _DBGKD_DEBUG_DATA_HEADER64 *  PDBGKD_DEBUG_DATA_HEADER64 ;

// #line 10096
// #line 10115
typedef enum _POOL_TYPE {
	NonPagedPool,
	PagedPool,
	NonPagedPoolMustSucceed,
	DontUseThisType,
	NonPagedPoolCacheAligned,
	PagedPoolCacheAligned,
	NonPagedPoolCacheAlignedMustS,
	MaxPoolType,
	NonPagedPoolSession /* = 32 */,
	PagedPoolSession /* = NonPagedPoolSession + 1 */,
	NonPagedPoolMustSucceedSession /* = PagedPoolSession + 1 */,
	DontUseThisTypeSession /* = NonPagedPoolMustSucceedSession + 1 */,
	NonPagedPoolCacheAlignedSession /* = DontUseThisTypeSession + 1 */,
	PagedPoolCacheAlignedSession /* = NonPagedPoolCacheAlignedSession + 1 */,
	NonPagedPoolCacheAlignedMustSSession /* = PagedPoolCacheAlignedSession + 1 */
} POOL_TYPE ;

PVOID ExAllocatePool(POOL_TYPE PoolType , SIZE_T NumberOfBytes ) ;	
PVOID ExAllocatePoolWithQuota(POOL_TYPE PoolType , SIZE_T NumberOfBytes ) ;	
PVOID ExAllocatePoolWithTag(POOL_TYPE PoolType , SIZE_T NumberOfBytes , ULONG Tag ) ;
	
typedef enum _EX_POOL_PRIORITY {
	LowPoolPriority,
	LowPoolPrioritySpecialPoolOverrun /* = 8 */,
	LowPoolPrioritySpecialPoolUnderrun /* = 9 */,
	NormalPoolPriority /* = 16 */,
	NormalPoolPrioritySpecialPoolOverrun /* = 24 */,
	NormalPoolPrioritySpecialPoolUnderrun /* = 25 */,
	HighPoolPriority /* = 32 */,
	HighPoolPrioritySpecialPoolOverrun /* = 40 */,
	HighPoolPrioritySpecialPoolUnderrun /* = 41 */
} EX_POOL_PRIORITY ;

PVOID  ExAllocatePoolWithTagPriority(POOL_TYPE PoolType , SIZE_T NumberOfBytes , ULONG Tag , 
				     EX_POOL_PRIORITY Priority ) ;		

extern PVOID ExAllocatePoolWithQuotaTag(POOL_TYPE PoolType ,
					SIZE_T NumberOfBytes , ULONG Tag );

/* PVOID ExAllocatePoolWithQuotaTag(POOL_TYPE PoolType , */
/* 				 SIZE_T NumberOfBytes , ULONG Tag ){ */
/*   PVOID R_NONDET; */
/*   return R_NONDET; */
/* } */

void  ExFreePool(PVOID P ) ;

typedef struct _FAST_MUTEX {
	LONG Count ;
	PKTHREAD Owner ;
	ULONG Contention ;
	KEVENT Event ;
	ULONG OldIrql ;
} FAST_MUTEX , *  PFAST_MUTEX ;

LARGE_INTEGER ExInterlockedAddLargeInteger(PLARGE_INTEGER Addend , 
					   LARGE_INTEGER Increment , PKSPIN_LOCK Lock ) ;
ULONG  ExfInterlockedAddUlong(PULONG Addend ,
			       ULONG Increment , PKSPIN_LOCK Lock ) ;

PLIST_ENTRY  ExfInterlockedInsertHeadList(PLIST_ENTRY ListHead , 
					  PLIST_ENTRY ListEntry , PKSPIN_LOCK Lock ) ; 
PLIST_ENTRY  ExfInterlockedInsertTailList(PLIST_ENTRY ListHead , PLIST_ENTRY
					   ListEntry , PKSPIN_LOCK Lock ) ;
PLIST_ENTRY ExfInterlockedRemoveHeadList(PLIST_ENTRY ListHead , PKSPIN_LOCK Lock ) ;
PSINGLE_LIST_ENTRY ExfInterlockedPopEntryList(PSINGLE_LIST_ENTRY ListHead , PKSPIN_LOCK Lock ) ;
PSINGLE_LIST_ENTRY ExfInterlockedPushEntryList(PSINGLE_LIST_ENTRY ListHead ,
					       PSINGLE_LIST_ENTRY ListEntry , PKSPIN_LOCK Lock ) ;
	
PSINGLE_LIST_ENTRY  ExInterlockedPopEntrySList(PSLIST_HEADER ListHead , PKSPIN_LOCK Lock ) ;
PSINGLE_LIST_ENTRY  ExInterlockedPushEntrySList(PSLIST_HEADER ListHead , 
						PSINGLE_LIST_ENTRY ListEntry , PKSPIN_LOCK Lock ) ;
// #line 10564
PSINGLE_LIST_ENTRY  ExInterlockedFlushSList(PSLIST_HEADER ListHead ) ;

// #line 10574
typedef PVOID ( *  PALLOCATE_FUNCTION )(POOL_TYPE PoolType , SIZE_T
	NumberOfBytes , ULONG Tag ) ;

// #line 10582
typedef void ( *  PFREE_FUNCTION )(PVOID Buffer ) ;

// #line 10588
typedef struct _GENERAL_LOOKASIDE {
	SLIST_HEADER ListHead ;
	USHORT Depth ;
	USHORT MaximumDepth ;
	ULONG TotalAllocates ;
	union  {
		ULONG AllocateMisses ;
		ULONG AllocateHits ;
	}  ;
	ULONG TotalFrees ;
	union  {
		ULONG FreeMisses ;
		ULONG FreeHits ;
	}  ;
	POOL_TYPE Type ;
	ULONG Tag ;
	ULONG Size ;
	PALLOCATE_FUNCTION Allocate ;
	PFREE_FUNCTION Free ;
	LIST_ENTRY ListEntry ;
	ULONG LastTotalAllocates ;
	union  {
		ULONG LastAllocateMisses ;
		ULONG LastAllocateHits ;
	}  ;
	ULONG Future[2] ;
} GENERAL_LOOKASIDE , *  PGENERAL_LOOKASIDE ;

// #line 10619
typedef struct _NPAGED_LOOKASIDE_LIST {
	GENERAL_LOOKASIDE L ;
	KSPIN_LOCK Lock ;
} NPAGED_LOOKASIDE_LIST , *  PNPAGED_LOOKASIDE_LIST ;

// #line 10625

void ExInitializeNPagedLookasideList(PNPAGED_LOOKASIDE_LIST Lookaside ,
				     PALLOCATE_FUNCTION Allocate , 
				     PFREE_FUNCTION Free , ULONG Flags , 
				     SIZE_T Size ,
				     ULONG Tag , USHORT Depth ) ;
// #line 10637
void ExDeleteNPagedLookasideList(PNPAGED_LOOKASIDE_LIST Lookaside ) ;
				 

// #line 10643

// #line 10729
typedef struct _PAGED_LOOKASIDE_LIST {
	GENERAL_LOOKASIDE L ;
	FAST_MUTEX Lock ;
} PAGED_LOOKASIDE_LIST , *  PPAGED_LOOKASIDE_LIST ;

void ExInitializePagedLookasideList(PPAGED_LOOKASIDE_LIST Lookaside ,
				    PALLOCATE_FUNCTION Allocate , PFREE_FUNCTION Free , ULONG  Flags ,
				    SIZE_T Size , ULONG Tag , USHORT Depth ) ;
void ExDeletePagedLookasideList(PPAGED_LOOKASIDE_LIST Lookaside ) ;
PVOID ExAllocateFromPagedLookasideList(PPAGED_LOOKASIDE_LIST Lookaside ) ;
void ExFreeToPagedLookasideList(PPAGED_LOOKASIDE_LIST Lookaside , PVOID Entry ) ;
void  ProbeForRead(void *  Address , ULONG  Length , ULONG Alignment ) ;
void  ProbeForWrite(PVOID Address , ULONG Length , ULONG Alignment ) ;
		    

// #line 10882
typedef enum _WORK_QUEUE_TYPE {
	CriticalWorkQueue,
	DelayedWorkQueue,
	HyperCriticalWorkQueue,
	MaximumWorkQueue
} WORK_QUEUE_TYPE ;

typedef void ( *  PWORKER_THREAD_ROUTINE )(PVOID Parameter ) ;

// #line 10895
typedef struct _WORK_QUEUE_ITEM {
	LIST_ENTRY List ;
	PWORKER_THREAD_ROUTINE WorkerRoutine ;
	PVOID Parameter ;
} WORK_QUEUE_ITEM , *  PWORK_QUEUE_ITEM ;

// #line 10907
void ExQueueWorkItem(PWORK_QUEUE_ITEM WorkItem ,
		     WORK_QUEUE_TYPE QueueType ) ;
// #line 10916
BOOLEAN ExIsProcessorFeaturePresent(ULONG ProcessorFeature ) ;

// #line 10926
typedef struct _ZONE_SEGMENT_HEADER {
	SINGLE_LIST_ENTRY SegmentList ;
	PVOID Reserved ;
} ZONE_SEGMENT_HEADER , *  PZONE_SEGMENT_HEADER ;

typedef struct _ZONE_HEADER {
	SINGLE_LIST_ENTRY FreeList ;
	SINGLE_LIST_ENTRY SegmentList ;
	ULONG BlockSize ;
	ULONG TotalSegmentSize ;
} ZONE_HEADER , *  PZONE_HEADER ;

NTSTATUS ExInitializeZone(PZONE_HEADER Zone , ULONG BlockSize ,
			  PVOID InitialSegment , ULONG InitialSegmentSize ) ;
NTSTATUS ExExtendZone(PZONE_HEADER Zone , PVOID Segment ,
		      ULONG SegmentSize ) ;
NTSTATUS ExInterlockedExtendZone(PZONE_HEADER Zone , PVOID Segment ,
				 ULONG SegmentSize , PKSPIN_LOCK Lock ) ;

typedef ULONG_PTR ERESOURCE_THREAD ;
typedef ERESOURCE_THREAD *  PERESOURCE_THREAD ;

typedef struct _OWNER_ENTRY {
	ERESOURCE_THREAD OwnerThread ;
	union  {
		LONG OwnerCount ;
		ULONG TableSize ;
	}  ;
} OWNER_ENTRY , *  POWNER_ENTRY ;

// #line 11168
typedef struct _ERESOURCE {
	LIST_ENTRY SystemResourcesList ;
	POWNER_ENTRY OwnerTable ;
	SHORT ActiveCount ;
	USHORT Flag ;
	PKSEMAPHORE SharedWaiters ;
	PKEVENT ExclusiveWaiters ;
	OWNER_ENTRY OwnerThreads[2] ;
	ULONG ContentionCount ;
	USHORT NumberOfSharedWaiters ;
	USHORT NumberOfExclusiveWaiters ;
	union  {
		PVOID Address ;
		ULONG_PTR CreatorBackTraceIndex ;
	}  ;
	KSPIN_LOCK SpinLock ;
} ERESOURCE , *  PERESOURCE ;

// #line 11197
typedef struct _RESOURCE_HASH_ENTRY {
	LIST_ENTRY ListEntry ;
	PVOID Address ;
	ULONG ContentionCount ;
	ULONG Number ;
} RESOURCE_HASH_ENTRY , *  PRESOURCE_HASH_ENTRY ;

typedef struct _RESOURCE_PERFORMANCE_DATA {
	ULONG ActiveResourceCount ;
	ULONG TotalResourceCount ;
	ULONG ExclusiveAcquire ;
	ULONG SharedFirstLevel ;
	ULONG SharedSecondLevel ;
	ULONG StarveFirstLevel ;
	ULONG StarveSecondLevel ;
	ULONG WaitForExclusive ;
	ULONG OwnerTableExpands ;
	ULONG MaximumTableExpand ;
	LIST_ENTRY HashTable[64] ;
} RESOURCE_PERFORMANCE_DATA , *  PRESOURCE_PERFORMANCE_DATA ;

NTSTATUS ExInitializeResourceLite(PERESOURCE Resource ) ;
NTSTATUS ExReinitializeResourceLite(PERESOURCE Resource ) ;
BOOLEAN ExAcquireResourceSharedLite(PERESOURCE Resource ,
				    BOOLEAN Wait ) ;
BOOLEAN ExAcquireResourceExclusiveLite(PERESOURCE Resource , BOOLEAN Wait ) ;
BOOLEAN ExAcquireSharedStarveExclusive(PERESOURCE Resource , BOOLEAN Wait ) ;
BOOLEAN ExAcquireSharedWaitForExclusive(PERESOURCE Resource , BOOLEAN Wait ) ;
BOOLEAN ExTryToAcquireResourceExclusiveLite(PERESOURCE Resource ) ;
void  ExReleaseResourceLite(PERESOURCE Resource );
void ExReleaseResourceForThreadLite(PERESOURCE Resource ,
				    ERESOURCE_THREAD ResourceThreadId ) ;
void ExSetResourceOwnerPointer(PERESOURCE Resource , PVOID OwnerPointer ) ;
void ExConvertExclusiveToSharedLite(PERESOURCE Resource );
NTSTATUS ExDeleteResourceLite(PERESOURCE Resource ) ;
ULONG ExGetExclusiveWaiterCount(PERESOURCE Resource ) ;
ULONG ExGetSharedWaiterCount(PERESOURCE Resource ) ;
BOOLEAN ExIsResourceAcquiredExclusiveLite(PERESOURCE Resource ) ;
	
ULONG ExIsResourceAcquiredSharedLite(PERESOURCE Resource ); 
KPROCESSOR_MODE ExGetPreviousMode(void  ) ;
void  ExRaiseStatus(NTSTATUS Status ) ;
void ExRaiseDatatypeMisalignment(void  ) ;
void ExRaiseAccessViolation(void  ) ;
ULONG ExSetTimerResolution(ULONG DesiredTime , BOOLEAN SetResolution ) ;
void ExSystemTimeToLocalTime(PLARGE_INTEGER SystemTime , PLARGE_INTEGER LocalTime ) ;
void ExLocalTimeToSystemTime(PLARGE_INTEGER LocalTime , PLARGE_INTEGER SystemTime ) ;

typedef void ( *  PCALLBACK_FUNCTION )(PVOID CallbackContext , PVOID Argument1 ,
	PVOID Argument2 ) ;

NTSTATUS ExCreateCallback(PCALLBACK_OBJECT___0 *  CallbackObject ,
			  POBJECT_ATTRIBUTES ObjectAttributes , BOOLEAN Create ,
			  BOOLEAN AllowMultipleCallbacks ) ;
PVOID ExRegisterCallback(PCALLBACK_OBJECT___0 CallbackObject ,
			 PCALLBACK_FUNCTION CallbackFunction , PVOID CallbackContext ) ;
void ExUnregisterCallback(PVOID CallbackRegistration ) ;
void ExNotifyCallback(PVOID CallbackObject , PVOID Argument1 , PVOID Argument2 ) ;
		      

// #line 11474
typedef GUID UUID ;

NTSTATUS ExUuidCreate(UUID *  Uuid ) ;
// #line 11596
// extern PBOOLEAN Mm64BitPhysicalAddress ;

// #line 11862
typedef enum _MM_SYSTEM_SIZE {
	MmSmallSystem,
	MmMediumSystem,
	MmLargeSystem
} MM_SYSTEMSIZE ;

MM_SYSTEMSIZE MmQuerySystemSize(void  ) ;
// #line 11876
BOOLEAN MmIsThisAnNtAsSystem(void  ) ;

// #line 11884
typedef enum _LOCK_OPERATION {
	IoReadAccess,
	IoWriteAccess,
	IoModifyAccess
} LOCK_OPERATION ;

void MmProbeAndLockProcessPages(PMDL MemoryDescriptorList , PEPROCESS Process ,
				KPROCESSOR_MODE AccessMode , LOCK_OPERATION Operation ) ;
void MmProbeAndLockPages(PMDL MemoryDescriptorList ,
			 KPROCESSOR_MODE AccessMode , LOCK_OPERATION Operation ) ;
void MmBuildMdlForNonPagedPool(PMDL MemoryDescriptorList );
PVOID MmMapLockedPages(PMDL MemoryDescriptorList ,
		       KPROCESSOR_MODE AccessMode ) ;
PVOID MmGetSystemRoutineAddress(PUNICODE_STRING SystemRoutineName ) ;
NTSTATUS MmMapUserAddressesToPage(PVOID BaseAddress ,
				  SIZE_T NumberOfBytes , PVOID PageAddress ) ;

// #line 11970
typedef enum _MM_PAGE_PRIORITY {
	LowPagePriority,
	NormalPagePriority = 16,
	HighPagePriority = 32
} MM_PAGE_PRIORITY ;

// #line 11979
 PVOID MmMapLockedPagesSpecifyCache(PMDL
				    MemoryDescriptorList , KPROCESSOR_MODE AccessMode , MEMORY_CACHING_TYPE
				    CacheType , PVOID BaseAddress , ULONG BugCheckOnFailure ,
				    MM_PAGE_PRIORITY Priority ) ;
// #line 11990
void MmUnmapLockedPages(PVOID BaseAddress , PMDL MemoryDescriptorList ) ;

// #line 11999
typedef struct _PHYSICAL_MEMORY_RANGE {
	PHYSICAL_ADDRESS BaseAddress ;
	LARGE_INTEGER NumberOfBytes ;
} PHYSICAL_MEMORY_RANGE , *  PPHYSICAL_MEMORY_RANGE ;

 NTSTATUS MmAddPhysicalMemory(PPHYSICAL_ADDRESS
	StartAddress , PLARGE_INTEGER NumberOfBytes ) ;
// #line 12011
 NTSTATUS MmRemovePhysicalMemory(PPHYSICAL_ADDRESS
	StartAddress , PLARGE_INTEGER NumberOfBytes ) ;
// #line 12018
 PPHYSICAL_MEMORY_RANGE MmGetPhysicalMemoryRanges(void  ) ;
// #line 12024
 PMDL MmAllocatePagesForMdl(PHYSICAL_ADDRESS LowAddress ,
	PHYSICAL_ADDRESS HighAddress , PHYSICAL_ADDRESS SkipBytes , SIZE_T
	TotalBytes ) ;
// #line 12033
void MmFreePagesFromMdl(PMDL MemoryDescriptorList ) ;

extern PVOID MmMapIoSpace(PHYSICAL_ADDRESS PhysicalAddress ,
			  SIZE_T NumberOfBytes , MEMORY_CACHING_TYPE CacheType );
/* PVOID MmMapIoSpace(PHYSICAL_ADDRESS PhysicalAddress , */
/* 		   SIZE_T NumberOfBytes , MEMORY_CACHING_TYPE CacheType ){ */
/*   PVOID R_NONDET; */
/*   return R_NONDET; */
/* } */

extern void MmUnmapIoSpace(PVOID BaseAddress , SIZE_T NumberOfBytes );
PVOID MmMapVideoDisplay(PHYSICAL_ADDRESS PhysicalAddress ,
			SIZE_T NumberOfBytes , MEMORY_CACHING_TYPE CacheType ) ;
void MmUnmapVideoDisplay(PVOID BaseAddress , SIZE_T NumberOfBytes ) ;			  
PHYSICAL_ADDRESS MmGetPhysicalAddress(PVOID BaseAddress );
PVOID MmGetVirtualForPhysical(PHYSICAL_ADDRESS PhysicalAddress ) ;
PVOID MmAllocateContiguousMemory(SIZE_T NumberOfBytes ,
				 PHYSICAL_ADDRESS HighestAcceptableAddress ) ;
PVOID MmAllocateContiguousMemorySpecifyCache(SIZE_T NumberOfBytes , 
					     PHYSICAL_ADDRESS LowestAcceptableAddress ,
					     PHYSICAL_ADDRESS HighestAcceptableAddress , 
					     PHYSICAL_ADDRESS BoundaryAddressMultiple , 
					     MEMORY_CACHING_TYPE CacheType ) ;

// #line 12101
void MmFreeContiguousMemorySpecifyCache(PVOID BaseAddress , SIZE_T NumberOfBytes , 
					MEMORY_CACHING_TYPE CacheType ) ;	
PVOID MmAllocateNonCachedMemory(SIZE_T NumberOfBytes ) ;
void MmFreeNonCachedMemory(PVOID BaseAddress , SIZE_T NumberOfBytes ) ;
BOOLEAN MmIsAddressValid(PVOID VirtualAddress ) ;
BOOLEAN MmIsNonPagedSystemAddressValid(PVOID VirtualAddress ) ;
SIZE_T MmSizeOfMdl(PVOID Base , SIZE_T Length ) ;
PMDL MmCreateMdl(PMDL MemoryDescriptorList , PVOID Base ,SIZE_T Length ) ;
extern PVOID MmLockPagableDataSection(PVOID AddressWithinSection );
//PVOID MmLockPagableDataSection(PVOID AddressWithinSection ){ }
extern void MmLockPagableSectionByHandle(PVOID ImageSectionHandle);
//void MmLockPagableSectionByHandle(PVOID ImageSectionHandle){ } 
PVOID MmPageEntireDriver(PVOID AddressWithinSection ) ;
extern void MmUnlockPagableImageSection(PVOID ImageSectionHandle);
// void MmUnlockPagableImageSection(PVOID ImageSectionHandle){ }	
HANDLE MmSecureVirtualMemory(PVOID Address , SIZE_T Size , ULONG ProbeMode ) ;
void MmUnsecureVirtualMemory(HANDLE SecureHandle ) ;
NTSTATUS MmMapViewInSystemSpace(PVOID Section , PVOID *  MappedBase , PSIZE_T ViewSize ) ;
NTSTATUS MmUnmapViewInSystemSpace(PVOID MappedBase ) ;
NTSTATUS MmMapViewInSessionSpace(PVOID Section , PVOID *  MappedBase , PSIZE_T ViewSize ) ;
NTSTATUS MmUnmapViewInSessionSpace(PVOID MappedBase ) ;

typedef NTSTATUS ( *  PMM_DLL_INITIALIZE )(PUNICODE_STRING RegistryPath ) ;
typedef NTSTATUS ( *  PMM_DLL_UNLOAD )(void  ) ;
struct _DRIVER_OBJECT ;

LOGICAL MmIsDriverVerifying(struct _DRIVER_OBJECT *  DriverObject ) ;
	
typedef enum _SECURITY_OPERATION_CODE {
	SetSecurityDescriptor,
	QuerySecurityDescriptor,
	DeleteSecurityDescriptor,
	AssignSecurityDescriptor
} SECURITY_OPERATION_CODE , *  PSECURITY_OPERATION_CODE ;

// #line 12426
typedef struct _SECURITY_SUBJECT_CONTEXT {
	PACCESS_TOKEN ClientToken ;
	SECURITY_IMPERSONATION_LEVEL ImpersonationLevel ;
	PACCESS_TOKEN PrimaryToken ;
	PVOID ProcessAuditId ;
} SECURITY_SUBJECT_CONTEXT , *  PSECURITY_SUBJECT_CONTEXT ;

// #line 12448
typedef struct _INITIAL_PRIVILEGE_SET {
	ULONG PrivilegeCount ;
	ULONG Control ;
	LUID_AND_ATTRIBUTES Privilege[3] ;
} INITIAL_PRIVILEGE_SET , *  PINITIAL_PRIVILEGE_SET ;

// #line 12462
typedef struct _ACCESS_STATE {
	LUID OperationID ;
	BOOLEAN SecurityEvaluated ;
	BOOLEAN GenerateAudit ;
	BOOLEAN GenerateOnClose ;
	BOOLEAN PrivilegesAllocated ;
	ULONG Flags ;
	ACCESS_MASK RemainingDesiredAccess ;
	ACCESS_MASK PreviouslyGrantedAccess ;
	ACCESS_MASK OriginalDesiredAccess ;
	SECURITY_SUBJECT_CONTEXT SubjectSecurityContext ;
	PSECURITY_DESCRIPTOR SecurityDescriptor ;
	PVOID AuxData ;
	union  {
		INITIAL_PRIVILEGE_SET InitialPrivilegeSet ;
		PRIVILEGE_SET PrivilegeSet ;
	} Privileges ;
	BOOLEAN AuditPrivileges ;
	UNICODE_STRING ObjectName ;
	UNICODE_STRING ObjectTypeName ;
} ACCESS_STATE , *  PACCESS_STATE ;

// #line 12487
 NTSTATUS SeAssignSecurity(PSECURITY_DESCRIPTOR
	ParentDescriptor , PSECURITY_DESCRIPTOR ExplicitDescriptor ,
	PSECURITY_DESCRIPTOR *  NewDescriptor , BOOLEAN IsDirectoryObject ,
	PSECURITY_SUBJECT_CONTEXT SubjectContext , PGENERIC_MAPPING
	GenericMapping , POOL_TYPE PoolType ) ;
// #line 12499
 NTSTATUS SeAssignSecurityEx(PSECURITY_DESCRIPTOR
	ParentDescriptor , PSECURITY_DESCRIPTOR ExplicitDescriptor ,
	PSECURITY_DESCRIPTOR *  NewDescriptor , GUID *  ObjectType , BOOLEAN
	IsDirectoryObject , ULONG AutoInheritFlags , PSECURITY_SUBJECT_CONTEXT
	SubjectContext , PGENERIC_MAPPING GenericMapping , POOL_TYPE PoolType )
	;
// #line 12513
 NTSTATUS SeDeassignSecurity(PSECURITY_DESCRIPTOR * 
	SecurityDescriptor ) ;
// #line 12519
 BOOLEAN SeAccessCheck(PSECURITY_DESCRIPTOR
	SecurityDescriptor , PSECURITY_SUBJECT_CONTEXT SubjectSecurityContext ,
	BOOLEAN SubjectContextLocked , ACCESS_MASK DesiredAccess , ACCESS_MASK
	PreviouslyGrantedAccess , PPRIVILEGE_SET *  Privileges ,
	PGENERIC_MAPPING GenericMapping , KPROCESSOR_MODE AccessMode ,
	PACCESS_MASK GrantedAccess , PNTSTATUS AccessStatus ) ;

BOOLEAN SeValidSecurityDescriptor(ULONG Length ,
				  PSECURITY_DESCRIPTOR SecurityDescriptor ) ;
BOOLEAN SeSinglePrivilegeCheck(LUID PrivilegeValue ,
			       KPROCESSOR_MODE PreviousMode ) ;
// #line 12552
 NTSTATUS PsCreateSystemThread(PHANDLE ThreadHandle , ULONG
	DesiredAccess , POBJECT_ATTRIBUTES ObjectAttributes , HANDLE
	ProcessHandle , PCLIENT_ID ClientId , PKSTART_ROUTINE StartRoutine ,
	PVOID StartContext ) ;
// #line 12564
 NTSTATUS PsTerminateSystemThread(NTSTATUS ExitStatus ) ;

// #line 12571
typedef void ( *  PCREATE_PROCESS_NOTIFY_ROUTINE )(HANDLE ParentId , HANDLE
	ProcessId , BOOLEAN Create ) ;

// #line 12579
NTSTATUS PsSetCreateProcessNotifyRoutine(PCREATE_PROCESS_NOTIFY_ROUTINE
	NotifyRoutine , BOOLEAN Remove ) ;

// #line 12585
typedef void ( *  PCREATE_THREAD_NOTIFY_ROUTINE )(HANDLE ProcessId , HANDLE
	ThreadId , BOOLEAN Create ) ;

// #line 12593
NTSTATUS PsSetCreateThreadNotifyRoutine(PCREATE_THREAD_NOTIFY_ROUTINE
	NotifyRoutine ) ;

// #line 12602
typedef struct _IMAGE_INFO {
	union  {
		ULONG Properties ;
		struct  {
			ULONG ImageAddressingMode  : 8;
			ULONG SystemModeImage  : 1;
			ULONG ImageMappedToAllPids  : 1;
			ULONG Reserved  : 22;
		}  ;
	}  ;
	PVOID ImageBase ;
	ULONG ImageSelector ;
	SIZE_T ImageSize ;
	ULONG ImageSectionNumber ;
} IMAGE_INFO , *  PIMAGE_INFO ;

// #line 12620
typedef void ( *  PLOAD_IMAGE_NOTIFY_ROUTINE )(PUNICODE_STRING FullImageName ,
	HANDLE ProcessId , PIMAGE_INFO ImageInfo ) ;

// #line 12628
NTSTATUS PsSetLoadImageNotifyRoutine(PLOAD_IMAGE_NOTIFY_ROUTINE NotifyRoutine )
	;
// #line 12633
HANDLE PsGetCurrentProcessId(void  ) ;
// #line 12636
HANDLE PsGetCurrentThreadId(void  ) ;
// #line 12639
BOOLEAN PsGetVersion(PULONG MajorVersion , PULONG MinorVersion , PULONG
	BuildNumber , PUNICODE_STRING CSDVersion ) ;

// #line 12859
typedef NTSTATUS ( *  PIO_QUERY_DEVICE_ROUTINE )(PVOID Context , PUNICODE_STRING
	PathName , INTERFACE_TYPE BusType , ULONG BusNumber ,
	PKEY_VALUE_FULL_INFORMATION *  BusInformation , CONFIGURATION_TYPE
	ControllerType , ULONG ControllerNumber , PKEY_VALUE_FULL_INFORMATION * 
	ControllerInformation , CONFIGURATION_TYPE PeripheralType , ULONG
	PeripheralNumber , PKEY_VALUE_FULL_INFORMATION *  PeripheralInformation
	) ;

// #line 12878
typedef enum _IO_QUERY_DEVICE_DATA_FORMAT {
	IoQueryDeviceIdentifier = 0,
	IoQueryDeviceConfigurationData,
	IoQueryDeviceComponentInformation,
	IoQueryDeviceMaxData
} IO_QUERY_DEVICE_DATA_FORMAT , *  PIO_QUERY_DEVICE_DATA_FORMAT ;

// #line 12890
typedef enum _CREATE_FILE_TYPE {
	CreateFileTypeNone,
	CreateFileTypeNamedPipe,
	CreateFileTypeMailslot
} CREATE_FILE_TYPE ;

// #line 12905
struct _DEVICE_DESCRIPTION ;

// #line 12906
struct _DEVICE_OBJECT ;

// #line 12907
struct _DMA_ADAPTER ;

// #line 12908
struct _DRIVER_OBJECT ;

// #line 12909
struct _DRIVE_LAYOUT_INFORMATION ;

// #line 12910
struct _DISK_PARTITION ;

// #line 12911
struct _FILE_OBJECT ;

// #line 12912
struct _IRP ;

// #line 12913
struct _SCSI_REQUEST_BLOCK ;

// #line 12919
typedef void ( *  PIO_DPC_ROUTINE )(PKDPC Dpc , struct _DEVICE_OBJECT * 
	DeviceObject , struct _IRP *  Irp , PVOID Context ) ;

// #line 12932
typedef void ( *  PIO_TIMER_ROUTINE )(struct _DEVICE_OBJECT *  DeviceObject ,
	PVOID Context ) ;

// #line 12943
typedef NTSTATUS ( *  PDRIVER_INITIALIZE )(struct _DRIVER_OBJECT *  DriverObject
	, PUNICODE_STRING RegistryPath ) ;

// #line 12955
typedef void ( *  PDRIVER_REINITIALIZE )(struct _DRIVER_OBJECT *  DriverObject ,
	PVOID Context , ULONG Count ) ;

// #line 12968
typedef void ( *  PDRIVER_CANCEL )(struct _DEVICE_OBJECT *  DeviceObject ,
	struct _IRP *  Irp ) ;

// #line 12979
typedef NTSTATUS ( *  PDRIVER_DISPATCH )(struct _DEVICE_OBJECT *  DeviceObject ,
	struct _IRP *  Irp ) ;

// #line 12990
typedef void ( *  PDRIVER_STARTIO )(struct _DEVICE_OBJECT *  DeviceObject ,
	struct _IRP *  Irp ) ;

// #line 13001
typedef void ( *  PDRIVER_UNLOAD )(struct _DRIVER_OBJECT *  DriverObject ) ;

// #line 13011
typedef NTSTATUS ( *  PDRIVER_ADD_DEVICE )(struct _DRIVER_OBJECT *  DriverObject
	, struct _DEVICE_OBJECT *  PhysicalDeviceObject ) ;

// #line 13025
typedef BOOLEAN ( *  PFAST_IO_CHECK_IF_POSSIBLE )(struct _FILE_OBJECT * 
	FileObject , PLARGE_INTEGER FileOffset , ULONG Length , BOOLEAN Wait ,
	ULONG LockKey , BOOLEAN CheckForReadOperation , PIO_STATUS_BLOCK
	IoStatus , struct _DEVICE_OBJECT *  DeviceObject ) ;

// #line 13038
typedef BOOLEAN ( *  PFAST_IO_READ )(struct _FILE_OBJECT *  FileObject ,
	PLARGE_INTEGER FileOffset , ULONG Length , BOOLEAN Wait , ULONG LockKey
	, PVOID Buffer , PIO_STATUS_BLOCK IoStatus , struct _DEVICE_OBJECT * 
	DeviceObject ) ;

// #line 13051
typedef BOOLEAN ( *  PFAST_IO_WRITE )(struct _FILE_OBJECT *  FileObject ,
	PLARGE_INTEGER FileOffset , ULONG Length , BOOLEAN Wait , ULONG LockKey
	, PVOID Buffer , PIO_STATUS_BLOCK IoStatus , struct _DEVICE_OBJECT * 
	DeviceObject ) ;

// #line 13068
typedef BOOLEAN ( *  PFAST_IO_QUERY_BASIC_INFO )(struct _FILE_OBJECT * 
	FileObject , BOOLEAN Wait , PFILE_BASIC_INFORMATION Buffer ,
	PIO_STATUS_BLOCK IoStatus , struct _DEVICE_OBJECT *  DeviceObject ) ;

// #line 13078
typedef BOOLEAN ( *  PFAST_IO_QUERY_STANDARD_INFO )(struct _FILE_OBJECT * 
	FileObject , BOOLEAN Wait , PFILE_STANDARD_INFORMATION Buffer ,
	PIO_STATUS_BLOCK IoStatus , struct _DEVICE_OBJECT *  DeviceObject ) ;

// #line 13092
typedef BOOLEAN ( *  PFAST_IO_LOCK )(struct _FILE_OBJECT *  FileObject ,
	PLARGE_INTEGER FileOffset , PLARGE_INTEGER Length , PEPROCESS ProcessId
	, ULONG Key , BOOLEAN FailImmediately , BOOLEAN ExclusiveLock ,
	PIO_STATUS_BLOCK IoStatus , struct _DEVICE_OBJECT *  DeviceObject ) ;

// #line 13106
typedef BOOLEAN ( *  PFAST_IO_UNLOCK_SINGLE )(struct _FILE_OBJECT *  FileObject
	, PLARGE_INTEGER FileOffset , PLARGE_INTEGER Length , PEPROCESS
	ProcessId , ULONG Key , PIO_STATUS_BLOCK IoStatus ,
	struct _DEVICE_OBJECT *  DeviceObject ) ;

// #line 13118
typedef BOOLEAN ( *  PFAST_IO_UNLOCK_ALL )(struct _FILE_OBJECT *  FileObject ,
	PEPROCESS ProcessId , PIO_STATUS_BLOCK IoStatus ,
	struct _DEVICE_OBJECT *  DeviceObject ) ;

// #line 13127
typedef BOOLEAN ( *  PFAST_IO_UNLOCK_ALL_BY_KEY )(struct _FILE_OBJECT * 
	FileObject , PVOID ProcessId , ULONG Key , PIO_STATUS_BLOCK IoStatus ,
	struct _DEVICE_OBJECT *  DeviceObject ) ;

// #line 13141
typedef BOOLEAN ( *  PFAST_IO_DEVICE_CONTROL )(struct _FILE_OBJECT *  FileObject
	, BOOLEAN Wait , PVOID InputBuffer , ULONG InputBufferLength , PVOID
	OutputBuffer , ULONG OutputBufferLength , ULONG IoControlCode ,
	PIO_STATUS_BLOCK IoStatus , struct _DEVICE_OBJECT *  DeviceObject ) ;

// #line 13161
typedef void ( *  PFAST_IO_ACQUIRE_FILE )(struct _FILE_OBJECT *  FileObject ) ;

// #line 13167
typedef void ( *  PFAST_IO_RELEASE_FILE )(struct _FILE_OBJECT *  FileObject ) ;

// #line 13179
typedef void ( *  PFAST_IO_DETACH_DEVICE )(struct _DEVICE_OBJECT *  SourceDevice
	, struct _DEVICE_OBJECT *  TargetDevice ) ;

// #line 13193
typedef BOOLEAN ( *  PFAST_IO_QUERY_NETWORK_OPEN_INFO )(struct _FILE_OBJECT * 
	FileObject , BOOLEAN Wait , struct _FILE_NETWORK_OPEN_INFORMATION * 
	Buffer , struct _IO_STATUS_BLOCK *  IoStatus , struct _DEVICE_OBJECT * 
	DeviceObject ) ;

// #line 13207
typedef BOOLEAN ( *  PFAST_IO_MDL_READ )(struct _FILE_OBJECT *  FileObject ,
	PLARGE_INTEGER FileOffset , ULONG Length , ULONG LockKey , PMDL * 
	MdlChain , PIO_STATUS_BLOCK IoStatus , struct _DEVICE_OBJECT * 
	DeviceObject ) ;

// #line 13219
typedef BOOLEAN ( *  PFAST_IO_MDL_READ_COMPLETE )(struct _FILE_OBJECT * 
	FileObject , PMDL MdlChain , struct _DEVICE_OBJECT *  DeviceObject ) ;

// #line 13227
typedef BOOLEAN ( *  PFAST_IO_PREPARE_MDL_WRITE )(struct _FILE_OBJECT * 
	FileObject , PLARGE_INTEGER FileOffset , ULONG Length , ULONG LockKey ,
	PMDL *  MdlChain , PIO_STATUS_BLOCK IoStatus , struct _DEVICE_OBJECT * 
	DeviceObject ) ;

// #line 13239
typedef BOOLEAN ( *  PFAST_IO_MDL_WRITE_COMPLETE )(struct _FILE_OBJECT * 
	FileObject , PLARGE_INTEGER FileOffset , PMDL MdlChain ,
	struct _DEVICE_OBJECT *  DeviceObject ) ;

// #line 13253
typedef NTSTATUS ( *  PFAST_IO_ACQUIRE_FOR_MOD_WRITE )(struct _FILE_OBJECT * 
	FileObject , PLARGE_INTEGER EndingOffset , struct _ERESOURCE *  * 
	ResourceToRelease , struct _DEVICE_OBJECT *  DeviceObject ) ;

// #line 13262
typedef NTSTATUS ( *  PFAST_IO_RELEASE_FOR_MOD_WRITE )(struct _FILE_OBJECT * 
	FileObject , struct _ERESOURCE *  ResourceToRelease ,
	struct _DEVICE_OBJECT *  DeviceObject ) ;

// #line 13275
typedef NTSTATUS ( *  PFAST_IO_ACQUIRE_FOR_CCFLUSH )(struct _FILE_OBJECT * 
	FileObject , struct _DEVICE_OBJECT *  DeviceObject ) ;

// #line 13282
typedef NTSTATUS ( *  PFAST_IO_RELEASE_FOR_CCFLUSH )(struct _FILE_OBJECT * 
	FileObject , struct _DEVICE_OBJECT *  DeviceObject ) ;

// #line 13289
typedef BOOLEAN ( *  PFAST_IO_READ_COMPRESSED )(struct _FILE_OBJECT * 
	FileObject , PLARGE_INTEGER FileOffset , ULONG Length , ULONG LockKey ,
	PVOID Buffer , PMDL *  MdlChain , PIO_STATUS_BLOCK IoStatus ,
	struct _COMPRESSED_DATA_INFO *  CompressedDataInfo , ULONG
	CompressedDataInfoLength , struct _DEVICE_OBJECT *  DeviceObject ) ;

// #line 13304
typedef BOOLEAN ( *  PFAST_IO_WRITE_COMPRESSED )(struct _FILE_OBJECT * 
	FileObject , PLARGE_INTEGER FileOffset , ULONG Length , ULONG LockKey ,
	PVOID Buffer , PMDL *  MdlChain , PIO_STATUS_BLOCK IoStatus ,
	struct _COMPRESSED_DATA_INFO *  CompressedDataInfo , ULONG
	CompressedDataInfoLength , struct _DEVICE_OBJECT *  DeviceObject ) ;

// #line 13319
typedef BOOLEAN ( *  PFAST_IO_MDL_READ_COMPLETE_COMPRESSED
	)(struct _FILE_OBJECT *  FileObject , PMDL MdlChain ,
	struct _DEVICE_OBJECT *  DeviceObject ) ;

// #line 13327
typedef BOOLEAN ( *  PFAST_IO_MDL_WRITE_COMPLETE_COMPRESSED
	)(struct _FILE_OBJECT *  FileObject , PLARGE_INTEGER FileOffset , PMDL
	MdlChain , struct _DEVICE_OBJECT *  DeviceObject ) ;

// #line 13336
typedef BOOLEAN ( *  PFAST_IO_QUERY_OPEN )(struct _IRP *  Irp ,
	PFILE_NETWORK_OPEN_INFORMATION NetworkInformation ,
	struct _DEVICE_OBJECT *  DeviceObject ) ;

// #line 13350
typedef struct _FAST_IO_DISPATCH {
	ULONG SizeOfFastIoDispatch ;
	PFAST_IO_CHECK_IF_POSSIBLE FastIoCheckIfPossible ;
	PFAST_IO_READ FastIoRead ;
	PFAST_IO_WRITE FastIoWrite ;
	PFAST_IO_QUERY_BASIC_INFO FastIoQueryBasicInfo ;
	PFAST_IO_QUERY_STANDARD_INFO FastIoQueryStandardInfo ;
	PFAST_IO_LOCK FastIoLock ;
	PFAST_IO_UNLOCK_SINGLE FastIoUnlockSingle ;
	PFAST_IO_UNLOCK_ALL FastIoUnlockAll ;
	PFAST_IO_UNLOCK_ALL_BY_KEY FastIoUnlockAllByKey ;
	PFAST_IO_DEVICE_CONTROL FastIoDeviceControl ;
	PFAST_IO_ACQUIRE_FILE AcquireFileForNtCreateSection ;
	PFAST_IO_RELEASE_FILE ReleaseFileForNtCreateSection ;
	PFAST_IO_DETACH_DEVICE FastIoDetachDevice ;
	PFAST_IO_QUERY_NETWORK_OPEN_INFO FastIoQueryNetworkOpenInfo ;
	PFAST_IO_ACQUIRE_FOR_MOD_WRITE AcquireForModWrite ;
	PFAST_IO_MDL_READ MdlRead ;
	PFAST_IO_MDL_READ_COMPLETE MdlReadComplete ;
	PFAST_IO_PREPARE_MDL_WRITE PrepareMdlWrite ;
	PFAST_IO_MDL_WRITE_COMPLETE MdlWriteComplete ;
	PFAST_IO_READ_COMPRESSED FastIoReadCompressed ;
	PFAST_IO_WRITE_COMPRESSED FastIoWriteCompressed ;
	PFAST_IO_MDL_READ_COMPLETE_COMPRESSED MdlReadCompleteCompressed ;
	PFAST_IO_MDL_WRITE_COMPLETE_COMPRESSED MdlWriteCompleteCompressed ;
	PFAST_IO_QUERY_OPEN FastIoQueryOpen ;
	PFAST_IO_RELEASE_FOR_MOD_WRITE ReleaseForModWrite ;
	PFAST_IO_ACQUIRE_FOR_CCFLUSH AcquireForCcFlush ;
	PFAST_IO_RELEASE_FOR_CCFLUSH ReleaseForCcFlush ;
} FAST_IO_DISPATCH , *  PFAST_IO_DISPATCH ;

// #line 13386
typedef enum _IO_ALLOCATION_ACTION {
	KeepObject = 1,
	DeallocateObject,
	DeallocateObjectKeepRegisters
} IO_ALLOCATION_ACTION , *  PIO_ALLOCATION_ACTION ;

// #line 13396
typedef IO_ALLOCATION_ACTION ( *  PDRIVER_CONTROL )(struct _DEVICE_OBJECT * 
	DeviceObject , struct _IRP *  Irp , PVOID MapRegisterBase , PVOID
	Context ) ;

// #line 13410
typedef struct _IO_SECURITY_CONTEXT {
	PSECURITY_QUALITY_OF_SERVICE SecurityQos ;
	PACCESS_STATE AccessState ;
	ACCESS_MASK DesiredAccess ;
	ULONG FullCreateOptions ;
} IO_SECURITY_CONTEXT , *  PIO_SECURITY_CONTEXT ;

// #line 13434
typedef struct _VPB {
	CSHORT Type ;
	CSHORT Size ;
	USHORT Flags ;
	USHORT VolumeLabelLength ;
	struct _DEVICE_OBJECT *  DeviceObject ;
	struct _DEVICE_OBJECT *  RealDevice ;
	ULONG SerialNumber ;
	ULONG ReferenceCount ;
	WCHAR VolumeLabel[32 * sizeof(WCHAR ) / sizeof(WCHAR )] ;
} VPB , *  PVPB ;

// #line 13482
typedef struct _ADAPTER_OBJECT *  PADAPTER_OBJECT ;

// #line 13491
typedef struct _WAIT_CONTEXT_BLOCK {
	KDEVICE_QUEUE_ENTRY WaitQueueEntry ;
	PDRIVER_CONTROL DeviceRoutine ;
	PVOID DeviceContext ;
	ULONG NumberOfMapRegisters ;
	PVOID DeviceObject ;
	PVOID CurrentIrp ;
	PKDPC BufferChainingDpc ;
} WAIT_CONTEXT_BLOCK , *  PWAIT_CONTEXT_BLOCK ;

// #line 13503
typedef struct _CONTROLLER_OBJECT {
	CSHORT Type ;
	CSHORT Size ;
	PVOID ControllerExtension ;
	KDEVICE_QUEUE DeviceWaitQueue ;
	ULONG Spare1 ;
	LARGE_INTEGER Spare2 ;
} CONTROLLER_OBJECT , *  PCONTROLLER_OBJECT ;

// #line 13537
typedef struct _DEVICE_OBJECT {
	CSHORT Type ;
	USHORT Size ;
	LONG ReferenceCount ;
	struct _DRIVER_OBJECT *  DriverObject ;
	struct _DEVICE_OBJECT *  NextDevice ;
	struct _DEVICE_OBJECT *  AttachedDevice ;
	struct _IRP *  CurrentIrp ;
	PIO_TIMER Timer ;
	ULONG Flags ;
	ULONG Characteristics ;
	PVPB Vpb ;
	PVOID DeviceExtension ;
	ULONG DeviceType ;
	CCHAR StackSize ;
	union  {
		LIST_ENTRY ListEntry ;
		WAIT_CONTEXT_BLOCK Wcb ;
	} Queue ;
	ULONG AlignmentRequirement ;
	KDEVICE_QUEUE DeviceQueue ;
	KDPC Dpc ;
	ULONG ActiveThreadCount ;
	PSECURITY_DESCRIPTOR SecurityDescriptor ;
	KEVENT DeviceLock ;
	USHORT SectorSize ;
	USHORT Spare1 ;
	struct _DEVOBJ_EXTENSION *  DeviceObjectExtension ;
	PVOID Reserved ;
} DEVICE_OBJECT ;

// #line 13575
typedef struct _DEVICE_OBJECT *  PDEVICE_OBJECT ;

// #line 13578
struct _DEVICE_OBJECT_POWER_EXTENSION ;

typedef struct _DEVOBJ_EXTENSION {
	CSHORT Type ;
	USHORT Size ;
	PDEVICE_OBJECT DeviceObject ;
} DEVOBJ_EXTENSION , *  PDEVOBJ_EXTENSION ;

// #line 13608
typedef struct _DRIVER_EXTENSION {
	struct _DRIVER_OBJECT *  DriverObject ;
	PDRIVER_ADD_DEVICE AddDevice ;
	ULONG Count ;
	UNICODE_STRING ServiceKeyName ;
} DRIVER_EXTENSION , *  PDRIVER_EXTENSION ;

// #line 13645
typedef struct _DRIVER_OBJECT {
	CSHORT Type ;
	CSHORT Size ;
	PDEVICE_OBJECT DeviceObject ;
	ULONG Flags ;
	PVOID DriverStart ;
	ULONG DriverSize ;
	PVOID DriverSection ;
	PDRIVER_EXTENSION DriverExtension ;
	UNICODE_STRING DriverName ;
	PUNICODE_STRING HardwareDatabase ;
	PFAST_IO_DISPATCH FastIoDispatch ;
	PDRIVER_INITIALIZE DriverInit ;
	PDRIVER_STARTIO DriverStartIo ;
	PDRIVER_UNLOAD DriverUnload ;
        PDRIVER_DISPATCH MajorFunction[28/*0x1b + 1*/] ;
} DRIVER_OBJECT ;

// #line 13706
typedef struct _DRIVER_OBJECT *  PDRIVER_OBJECT ;

// #line 13715
typedef struct _SECTION_OBJECT_POINTERS {
	PVOID DataSectionObject ;
	PVOID SharedCacheMap ;
	PVOID ImageSectionObject ;
} SECTION_OBJECT_POINTERS ;

// #line 13720
typedef SECTION_OBJECT_POINTERS *  PSECTION_OBJECT_POINTERS ;

// #line 13726
typedef struct _IO_COMPLETION_CONTEXT {
	PVOID Port ;
	PVOID Key ;
} IO_COMPLETION_CONTEXT , *  PIO_COMPLETION_CONTEXT ;

// #line 13759
typedef struct _FILE_OBJECT {
	CSHORT Type ;
	CSHORT Size ;
	PDEVICE_OBJECT DeviceObject ;
	PVPB Vpb ;
	PVOID FsContext ;
	PVOID FsContext2 ;
	PSECTION_OBJECT_POINTERS SectionObjectPointer ;
	PVOID PrivateCacheMap ;
	NTSTATUS FinalStatus ;
	struct _FILE_OBJECT *  RelatedFileObject ;
	BOOLEAN LockOperation ;
	BOOLEAN DeletePending ;
	BOOLEAN ReadAccess ;
	BOOLEAN WriteAccess ;
	BOOLEAN DeleteAccess ;
	BOOLEAN SharedRead ;
	BOOLEAN SharedWrite ;
	BOOLEAN SharedDelete ;
	ULONG Flags ;
	UNICODE_STRING FileName ;
	LARGE_INTEGER CurrentByteOffset ;
	ULONG Waiters ;
	ULONG Busy ;
	PVOID LastLock ;
	KEVENT Lock ;
	KEVENT Event ;
	PIO_COMPLETION_CONTEXT CompletionContext ;
} FILE_OBJECT ;

// #line 13788
typedef struct _FILE_OBJECT *  PFILE_OBJECT ;

// #line 13828
typedef struct _IRP {
	CSHORT Type ;
	USHORT Size ;
	PMDL MdlAddress ;
	ULONG Flags ;
	union  {
		struct _IRP *  MasterIrp ;
		LONG IrpCount ;
		PVOID SystemBuffer ;
	} AssociatedIrp ;
	LIST_ENTRY ThreadListEntry ;
	IO_STATUS_BLOCK IoStatus ;
	KPROCESSOR_MODE RequestorMode ;
	BOOLEAN PendingReturned ;
	CHAR StackCount ;
	CHAR CurrentLocation ;
	BOOLEAN Cancel ;
	KIRQL CancelIrql ;
	CCHAR ApcEnvironment ;
	UCHAR AllocationFlags ;
	PIO_STATUS_BLOCK UserIosb ;
	PKEVENT UserEvent ;
	union  {
		struct  {
			PIO_APC_ROUTINE UserApcRoutine ;
			PVOID UserApcContext ;
		} AsynchronousParameters ;
		LARGE_INTEGER AllocationSize ;
	} Overlay ;
	PDRIVER_CANCEL CancelRoutine ;
	PVOID UserBuffer ;
	union  {
		struct  {
			union  {
				KDEVICE_QUEUE_ENTRY DeviceQueueEntry ;
				struct  {
					PVOID DriverContext[4] ;
				}  ;
			}  ;
			PETHREAD Thread ;
			PCHAR AuxiliaryBuffer ;
			struct  {
				LIST_ENTRY ListEntry ;
				union  {
					struct _IO_STACK_LOCATION * 
						CurrentStackLocation ;
					ULONG PacketType ;
				}  ;
			}  ;
			PFILE_OBJECT OriginalFileObject ;
		} Overlay ;
		KAPC Apc ;
		PVOID CompletionKey ;
	} Tail ;
} IRP , *  PIRP ;

// #line 14078
typedef NTSTATUS ( *  PIO_COMPLETION_ROUTINE )(PDEVICE_OBJECT DeviceObject ,
	PIRP Irp , PVOID Context ) ;

// #line 14163
typedef enum _DEVICE_RELATION_TYPE {
	BusRelations,
	EjectionRelations,
	PowerRelations,
	RemovalRelations,
	TargetDeviceRelation
} DEVICE_RELATION_TYPE , *  PDEVICE_RELATION_TYPE ;

typedef struct _DEVICE_RELATIONS {
	ULONG Count ;
	PDEVICE_OBJECT Objects[1] ;
} DEVICE_RELATIONS , *  PDEVICE_RELATIONS ;

typedef enum _DEVICE_USAGE_NOTIFICATION_TYPE {
	DeviceUsageTypeUndefined,
	DeviceUsageTypePaging,
	DeviceUsageTypeHibernation,
	DeviceUsageTypeDumpFile
} DEVICE_USAGE_NOTIFICATION_TYPE ;

// #line 14185
typedef struct _INTERFACE {
	USHORT Size ;
	USHORT Version ;
	PVOID Context ;
	PINTERFACE_REFERENCE InterfaceReference ;
	PINTERFACE_DEREFERENCE InterfaceDereference ;
} INTERFACE , *  PINTERFACE ;

// #line 14196
typedef struct _DEVICE_CAPABILITIES {
	USHORT Size ;
	USHORT Version ;
	ULONG DeviceD1  : 1;
	ULONG DeviceD2  : 1;
	ULONG LockSupported  : 1;
	ULONG EjectSupported  : 1;
	ULONG Removable  : 1;
	ULONG DockDevice  : 1;
	ULONG UniqueID  : 1;
	ULONG SilentInstall  : 1;
	ULONG RawDeviceOK  : 1;
	ULONG SurpriseRemovalOK  : 1;
	ULONG WakeFromD0  : 1;
	ULONG WakeFromD1  : 1;
	ULONG WakeFromD2  : 1;
	ULONG WakeFromD3  : 1;
	ULONG HardwareDisabled  : 1;
	ULONG NonDynamic  : 1;
	ULONG WarmEjectSupported  : 1;
	ULONG Reserved  : 15;
	ULONG Address ;
	ULONG UINumber ;
	DEVICE_POWER_STATE DeviceState[PowerSystemMaximum] ;
	SYSTEM_POWER_STATE SystemWake ;
	DEVICE_POWER_STATE DeviceWake ;
	ULONG D1Latency ;
	ULONG D2Latency ;
	ULONG D3Latency ;
} DEVICE_CAPABILITIES , *  PDEVICE_CAPABILITIES ;

// #line 14229
typedef struct _POWER_SEQUENCE {
	ULONG SequenceD1 ;
	ULONG SequenceD2 ;
	ULONG SequenceD3 ;
} POWER_SEQUENCE , *  PPOWER_SEQUENCE ;

typedef enum  {
	BusQueryDeviceID = 0,
	BusQueryHardwareIDs = 1,
	BusQueryCompatibleIDs = 2,
	BusQueryInstanceID = 3,
	BusQueryDeviceSerialNumber = 4
} BUS_QUERY_ID_TYPE , *  PBUS_QUERY_ID_TYPE ;

typedef ULONG PNP_DEVICE_STATE , *  PPNP_DEVICE_STATE ;

// #line 14252
typedef enum  {
	DeviceTextDescription = 0,
	DeviceTextLocationInformation = 1
} DEVICE_TEXT_TYPE , *  PDEVICE_TEXT_TYPE ;

// #line 24 "C:/NTDDK/inc/pshpack4.h"

// #pragma warning(disable:4103)

// #pragma pack(push, 4)
// #line 14271 "C:/NTDDK/inc/ddk/ntddk.h"
typedef struct _IO_STACK_LOCATION {
	UCHAR MajorFunction ;
	UCHAR MinorFunction ;
	UCHAR Flags ;
	UCHAR Control ;
	union  {
		struct  {
			PIO_SECURITY_CONTEXT SecurityContext ;
			ULONG Options ;
			USHORT FileAttributes ;
			USHORT ShareAccess ;
			ULONG EaLength ;
		} Create ;
		struct  {
			ULONG Length ;
			ULONG Key ;
			LARGE_INTEGER ByteOffset ;
		} Read ;
		struct  {
			ULONG Length ;
			ULONG Key ;
			LARGE_INTEGER ByteOffset ;
		} Write ;
		struct  {
			ULONG Length ;
			FILE_INFORMATION_CLASS FileInformationClass ;
		} QueryFile ;
		struct  {
			ULONG Length ;
			FILE_INFORMATION_CLASS FileInformationClass ;
			PFILE_OBJECT FileObject ;
			union  {
				struct  {
					BOOLEAN ReplaceIfExists ;
					BOOLEAN AdvanceOnly ;
				}  ;
				ULONG ClusterCount ;
				HANDLE DeleteHandle ;
			}  ;
		} SetFile ;
		struct  {
			ULONG Length ;
			FS_INFORMATION_CLASS FsInformationClass ;
		} QueryVolume ;
		struct  {
			ULONG OutputBufferLength ;
			ULONG InputBufferLength ;
			ULONG IoControlCode ;
			PVOID Type3InputBuffer ;
		} DeviceIoControl ;
		struct  {
			SECURITY_INFORMATION SecurityInformation ;
			ULONG Length ;
		} QuerySecurity ;
		struct  {
			SECURITY_INFORMATION SecurityInformation ;
			PSECURITY_DESCRIPTOR SecurityDescriptor ;
		} SetSecurity ;
		struct  {
			PVPB Vpb ;
			PDEVICE_OBJECT DeviceObject ;
		} MountVolume ;
		struct  {
			PVPB Vpb ;
			PDEVICE_OBJECT DeviceObject ;
		} VerifyVolume ;
		struct  {
			struct _SCSI_REQUEST_BLOCK *  Srb ;
		} Scsi ;
		struct  {
			DEVICE_RELATION_TYPE Type ;
		} QueryDeviceRelations ;
		struct  {
			const GUID *  InterfaceType ;
			USHORT Size ;
			USHORT Version ;
			PINTERFACE Interface ;
			PVOID InterfaceSpecificData ;
		} QueryInterface ;
		struct  {
			PDEVICE_CAPABILITIES Capabilities ;
		} DeviceCapabilities ;
		struct  {
			PIO_RESOURCE_REQUIREMENTS_LIST IoResourceRequirementList
				;
		} FilterResourceRequirements ;
		struct  {
			ULONG WhichSpace ;
			PVOID Buffer ;
			ULONG Offset ;
			ULONG Length ;
		} ReadWriteConfig ;
		struct  {
			BOOLEAN Lock ;
		} SetLock ;
		struct  {
			BUS_QUERY_ID_TYPE IdType ;
		} QueryId ;
		struct  {
			DEVICE_TEXT_TYPE DeviceTextType ;
			LCID LocaleId ;
		} QueryDeviceText ;
		struct  {
			BOOLEAN InPath ;
			BOOLEAN Reserved[3] ;
			DEVICE_USAGE_NOTIFICATION_TYPE Type ;
		} UsageNotification ;
		struct  {
			SYSTEM_POWER_STATE PowerState ;
		} WaitWake ;
		struct  {
			PPOWER_SEQUENCE PowerSequence ;
		} PowerSequence ;
		struct  {
			ULONG SystemContext ;
			POWER_STATE_TYPE Type ;
			POWER_STATE State ;
			POWER_ACTION ShutdownType ;
		} Power ;
		struct  {
			PCM_RESOURCE_LIST AllocatedResources ;
			PCM_RESOURCE_LIST AllocatedResourcesTranslated ;
		} StartDevice ;
		struct  {
			ULONG_PTR ProviderId ;
			PVOID DataPath ;
			ULONG BufferSize ;
			PVOID Buffer ;
		} WMI ;
		struct  {
			PVOID Argument1 ;
			PVOID Argument2 ;
			PVOID Argument3 ;
			PVOID Argument4 ;
		} Others ;
	} Parameters ;
	PDEVICE_OBJECT DeviceObject ;
	PFILE_OBJECT FileObject ;
	PIO_COMPLETION_ROUTINE CompletionRoutine ;
	PVOID Context ;
} IO_STACK_LOCATION , *  PIO_STACK_LOCATION ;

// #line 27 "C:/NTDDK/inc/poppack.h"

// #pragma warning(disable:4103)

// #pragma pack(pop)
// #line 14615 "C:/NTDDK/inc/ddk/ntddk.h"
typedef struct _SHARE_ACCESS {
	ULONG OpenCount ;
	ULONG Readers ;
	ULONG Writers ;
	ULONG Deleters ;
	ULONG SharedRead ;
	ULONG SharedWrite ;
	ULONG SharedDelete ;
} SHARE_ACCESS , *  PSHARE_ACCESS ;

// #line 14635
typedef struct _CONFIGURATION_INFORMATION {
	ULONG DiskCount ;
	ULONG FloppyCount ;
	ULONG CdRomCount ;
	ULONG TapeCount ;
	ULONG ScsiPortCount ;
	ULONG SerialCount ;
	ULONG ParallelCount ;
	BOOLEAN AtDiskPrimaryAddressClaimed ;
	BOOLEAN AtDiskSecondaryAddressClaimed ;
	ULONG Version ;
	ULONG MediumChangerCount ;
} CONFIGURATION_INFORMATION , *  PCONFIGURATION_INFORMATION ;

void IoAcquireCancelSpinLock(PKIRQL Irql ){}

NTSTATUS IoAllocateAdapterChannel(PADAPTER_OBJECT AdapterObject ,
				  PDEVICE_OBJECT DeviceObject , ULONG NumberOfMapRegisters,
				  PDRIVER_CONTROL ExecutionRoutine , PVOID Context ) ;
// #line 14698
void IoAllocateController(PCONTROLLER_OBJECT ControllerObject ,
			  PDEVICE_OBJECT DeviceObject , PDRIVER_CONTROL ExecutionRoutine ,
			  PVOID Context ) ;
// #line 14709
NTSTATUS IoAllocateDriverObjectExtension(PDRIVER_OBJECT DriverObject ,
					 PVOID ClientIdentificationAddress , ULONG
					 DriverObjectExtensionSize , 
					 PVOID *  DriverObjectExtension ) ;
PVOID IoAllocateErrorLogEntry(PVOID IoObject , UCHAR EntrySize ){}
PIRP IoAllocateIrp(CCHAR StackSize , BOOLEAN ChargeQuota );
PMDL IoAllocateMdl(PVOID VirtualAddress , ULONG Length ,
		   BOOLEAN SecondaryBuffer , BOOLEAN ChargeQuota , PIRP Irp ) ;
NTSTATUS IoAssignResources(PUNICODE_STRING RegistryPath ,
			   PUNICODE_STRING DriverClassName , PDRIVER_OBJECT DriverObject ,
			   PDEVICE_OBJECT DeviceObject , 
			   PIO_RESOURCE_REQUIREMENTS_LIST RequestedResources , 
			   PCM_RESOURCE_LIST *  AllocatedResources ) ;
			   
NTSTATUS IoAttachDevice(PDEVICE_OBJECT SourceDevice ,
			PUNICODE_STRING TargetDevice , PDEVICE_OBJECT *  AttachedDevice ) ;
NTSTATUS IoAttachDeviceByPointer(PDEVICE_OBJECT SourceDevice ,
				 PDEVICE_OBJECT TargetDevice ) ;
PDEVICE_OBJECT IoAttachDeviceToDeviceStack(PDEVICE_OBJECT SourceDevice ,
					   PDEVICE_OBJECT TargetDevice ) ;
PIRP IoBuildAsynchronousFsdRequest(ULONG MajorFunction ,
				   PDEVICE_OBJECT DeviceObject , PVOID Buffer , ULONG Length ,
				   PLARGE_INTEGER StartingOffset , PIO_STATUS_BLOCK IoStatusBlock ) ;
PIRP IoBuildDeviceIoControlRequest(ULONG IoControlCode ,
				   PDEVICE_OBJECT DeviceObject , PVOID InputBuffer , 
				   ULONG InputBufferLength ,
				   PVOID OutputBuffer , ULONG OutputBufferLength ,
				   BOOLEAN InternalDeviceIoControl , PKEVENT Event , 
				   PIO_STATUS_BLOCK  IoStatusBlock ) ;
void IoBuildPartialMdl(PMDL SourceMdl , PMDL TargetMdl ,
		       PVOID VirtualAddress , ULONG Length ) ;

typedef struct _BOOTDISK_INFORMATION {
	LONGLONG BootPartitionOffset ;
	LONGLONG SystemPartitionOffset ;
	ULONG BootDeviceSignature ;
	ULONG SystemDeviceSignature ;
} BOOTDISK_INFORMATION , *  PBOOTDISK_INFORMATION ;

 NTSTATUS IoGetBootDiskInformation(PBOOTDISK_INFORMATION
	BootDiskInformation , ULONG Size ) ;
// #line 14863
 PIRP IoBuildSynchronousFsdRequest(ULONG MajorFunction ,
	PDEVICE_OBJECT DeviceObject , PVOID Buffer , ULONG Length ,
	PLARGE_INTEGER StartingOffset , PKEVENT Event , PIO_STATUS_BLOCK
	IoStatusBlock ) ;
// #line 14875
 NTSTATUS  IofCallDriver(PDEVICE_OBJECT
	DeviceObject , PIRP Irp ) ;
// #line 14886
BOOLEAN IoCancelIrp(PIRP Irp );
// #line 14893
 NTSTATUS IoCheckShareAccess(ACCESS_MASK DesiredAccess ,
	ULONG DesiredShareAccess , PFILE_OBJECT FileObject , PSHARE_ACCESS
	ShareAccess , BOOLEAN Update ) ;
// #line 14903
void  IofCompleteRequest(PIRP Irp , CCHAR PriorityBoost ) ;
// #line 14916
extern NTSTATUS IoConnectInterrupt(PKINTERRUPT *  InterruptObject,
				   PKSERVICE_ROUTINE ServiceRoutine , PVOID ServiceContext , 
				   PKSPIN_LOCK SpinLock ,
				   ULONG Vector , KIRQL Irql , KIRQL SynchronizeIrql ,
				   KINTERRUPT_MODE InterruptMode , BOOLEAN ShareVector , 
				   KAFFINITY ProcessorEnableMask , BOOLEAN FloatingSave );

/* NTSTATUS IoConnectInterrupt(PKINTERRUPT *  InterruptObject, */
/* 			    PKSERVICE_ROUTINE ServiceRoutine , PVOID ServiceContext , PKSPIN_LOCK */
/* 			    SpinLock , ULONG Vector , KIRQL Irql , KIRQL SynchronizeIrql , */
/* 			    KINTERRUPT_MODE InterruptMode , BOOLEAN ShareVector , KAFFINITY */
/* 			    ProcessorEnableMask , BOOLEAN FloatingSave ){ */
/*   NTSTATUS R_NONDET; */
/*   return R_NONDET; */
/* } */
// #line 14934
 PCONTROLLER_OBJECT IoCreateController(ULONG Size ) ;
// #line 14942
 NTSTATUS IoCreateDevice(PDRIVER_OBJECT DriverObject ,
	ULONG DeviceExtensionSize , PUNICODE_STRING DeviceName , ULONG
	DeviceType , ULONG DeviceCharacteristics , BOOLEAN Exclusive ,
	PDEVICE_OBJECT *  DeviceObject ) ;
// #line 14957
 BOOLEAN IoIsWdmVersionAvailable(UCHAR MajorVersion , UCHAR
	MinorVersion ) ;
// #line 14966
 NTSTATUS IoCreateFile(PHANDLE FileHandle , ACCESS_MASK
	DesiredAccess , POBJECT_ATTRIBUTES ObjectAttributes , PIO_STATUS_BLOCK
	IoStatusBlock , PLARGE_INTEGER AllocationSize , ULONG FileAttributes ,
	ULONG ShareAccess , ULONG Disposition , ULONG CreateOptions , PVOID
	EaBuffer , ULONG EaLength , CREATE_FILE_TYPE CreateFileType , PVOID
	ExtraCreateParameters , ULONG Options ) ;
// #line 14986
 PKEVENT IoCreateNotificationEvent(PUNICODE_STRING
	EventName , PHANDLE EventHandle ) ;
// #line 14993
 NTSTATUS IoCreateSymbolicLink(PUNICODE_STRING
	SymbolicLinkName , PUNICODE_STRING DeviceName ) ;
// #line 15002
 PKEVENT IoCreateSynchronizationEvent(PUNICODE_STRING
	EventName , PHANDLE EventHandle ) ;
// #line 15011
 NTSTATUS IoCreateUnprotectedSymbolicLink(PUNICODE_STRING
	SymbolicLinkName , PUNICODE_STRING DeviceName ) ;
// #line 15049
 void IoDeleteController(PCONTROLLER_OBJECT
	ControllerObject ) ;

NTSTATUS IoDeleteSymbolicLink(PUNICODE_STRING SymbolicLinkName );	
void IoDetachDevice(PDEVICE_OBJECT TargetDevice );

extern void IoFreeController(PCONTROLLER_OBJECT ControllerObject);
// void IoFreeController(PCONTROLLER_OBJECT ControllerObject){}
	
void IoFreeIrp(PIRP Irp ) ;
void IoFreeMdl(PMDL Mdl ) ;
PDEVICE_OBJECT IoGetAttachedDeviceReference(PDEVICE_OBJECT DeviceObject ) ;
PCONFIGURATION_INFORMATION IoGetConfigurationInformation(void  ) ;
PDEVICE_OBJECT IoGetDeviceToVerify(PETHREAD Thread ) ;
PVOID IoGetDriverObjectExtension(PDRIVER_OBJECT DriverObject ,
				 PVOID ClientIdentificationAddress ) ;
PEPROCESS IoGetCurrentProcess(void  ) ;
NTSTATUS IoGetDeviceObjectPointer(PUNICODE_STRING ObjectName ,
				  ACCESS_MASK DesiredAccess , PFILE_OBJECT *  FileObject ,
				  PDEVICE_OBJECT *  DeviceObject ) ;
// #line 15173
 struct _DMA_ADAPTER *  IoGetDmaAdapter(PDEVICE_OBJECT
	PhysicalDeviceObject , struct _DEVICE_DESCRIPTION *  DeviceDescription ,
	PULONG NumberOfMapRegisters ) ;
// #line 15183
 PGENERIC_MAPPING IoGetFileObjectGenericMapping(void  ) ;
// #line 15228
 PVOID IoGetInitialStack(void  ) ;
// #line 15234
 void IoGetStackLimits(PULONG_PTR LowLimit , PULONG_PTR
	HighLimit ) ;

// #line 15246
// #line 15286
 PDEVICE_OBJECT IoGetRelatedDeviceObject(PFILE_OBJECT
	FileObject ) ;
// #line 15326
 void IoInitializeIrp(PIRP Irp , USHORT PacketSize , CCHAR
	StackSize ) ;
// #line 15334
 NTSTATUS IoInitializeTimer(PDEVICE_OBJECT DeviceObject ,
	PIO_TIMER_ROUTINE TimerRoutine , PVOID Context ) ;
// #line 15343
 void IoReuseIrp(PIRP Irp , NTSTATUS Iostatus ) ;
// #line 15351
 void IoCancelFileOpen(PDEVICE_OBJECT DeviceObject ,
	PFILE_OBJECT FileObject ) ;
// #line 15390
 PIRP IoMakeAssociatedIrp(PIRP Irp , CCHAR StackSize ) ;
// #line 15426
 NTSTATUS IoQueryDeviceDescription(PINTERFACE_TYPE BusType
	, PULONG BusNumber , PCONFIGURATION_TYPE ControllerType , PULONG
	ControllerNumber , PCONFIGURATION_TYPE PeripheralType , PULONG
	PeripheralNumber , PIO_QUERY_DEVICE_ROUTINE CalloutRoutine , PVOID
	Context ) ;
// #line 15439
 void IoRaiseHardError(PIRP Irp , PVPB Vpb , PDEVICE_OBJECT
	RealDeviceObject ) ;
// #line 15447
 BOOLEAN IoRaiseInformationalHardError(NTSTATUS ErrorStatus
	, PUNICODE_STRING String , PKTHREAD Thread ) ;
// #line 15455
 BOOLEAN IoSetThreadHardErrorMode(BOOLEAN EnableHardErrors
	) ;
// #line 15461
 void IoRegisterBootDriverReinitialization(PDRIVER_OBJECT
	DriverObject , PDRIVER_REINITIALIZE DriverReinitializationRoutine ,
	PVOID Context ) ;
// #line 15469
 void IoRegisterDriverReinitialization(PDRIVER_OBJECT
	DriverObject , PDRIVER_REINITIALIZE DriverReinitializationRoutine ,
	PVOID Context ) ;
// #line 15478
 NTSTATUS IoRegisterShutdownNotification(PDEVICE_OBJECT
	DeviceObject ) ;
// #line 15484
 NTSTATUS
	IoRegisterLastChanceShutdownNotification(PDEVICE_OBJECT DeviceObject ) ;
// #line 15492
 void IoReleaseCancelSpinLock(KIRQL Irql ) ;
// #line 15499
 void IoRemoveShareAccess(PFILE_OBJECT FileObject ,
	PSHARE_ACCESS ShareAccess ) ;
// #line 15507
 NTSTATUS IoReportResourceUsage(PUNICODE_STRING
	DriverClassName , PDRIVER_OBJECT DriverObject , PCM_RESOURCE_LIST
	DriverList , ULONG DriverListSize , PDEVICE_OBJECT DeviceObject ,
	PCM_RESOURCE_LIST DeviceList , ULONG DeviceListSize , BOOLEAN
	OverrideConflict , PBOOLEAN ConflictDetected ) ;
// #line 15641
 void IoSetHardErrorOrVerifyDevice(PIRP Irp ,
	PDEVICE_OBJECT DeviceObject ) ;
// #line 15743
 void IoSetShareAccess(ACCESS_MASK DesiredAccess , ULONG
	DesiredShareAccess , PFILE_OBJECT FileObject , PSHARE_ACCESS ShareAccess
	) ;

// #line 15754
typedef struct _IO_REMOVE_LOCK_TRACKING_BLOCK *  PIO_REMOVE_LOCK_TRACKING_BLOCK
	;

// #line 15756
typedef struct _IO_REMOVE_LOCK_COMMON_BLOCK {
	BOOLEAN Removed ;
	BOOLEAN Reserved[3] ;
	LONG IoCount ;
	KEVENT RemoveEvent ;
} IO_REMOVE_LOCK_COMMON_BLOCK ;

// #line 15764
typedef struct _IO_REMOVE_LOCK_DBG_BLOCK {
	LONG Signature ;
	LONG HighWatermark ;
	LONGLONG MaxLockedTicks ;
	LONG AllocateTag ;
	LIST_ENTRY LockList ;
	KSPIN_LOCK Spin ;
	LONG LowMemoryCount ;
	ULONG Reserved1[4] ;
	PVOID Reserved2 ;
	PIO_REMOVE_LOCK_TRACKING_BLOCK Blocks ;
} IO_REMOVE_LOCK_DBG_BLOCK ;

typedef struct _IO_REMOVE_LOCK {
	IO_REMOVE_LOCK_COMMON_BLOCK Common ;
} IO_REMOVE_LOCK , *  PIO_REMOVE_LOCK ;

// #line 15787
 void  IoInitializeRemoveLockEx(PIO_REMOVE_LOCK
	Lock , ULONG AllocateTag , ULONG MaxLockedMinutes , ULONG HighWatermark
	, ULONG RemlockSize ) ;
// #line 15808
 NTSTATUS  IoAcquireRemoveLockEx(PIO_REMOVE_LOCK
	RemoveLock , PVOID Tag , PCSTR File , ULONG Line , ULONG RemlockSize ) ;
// #line 15857
 void  IoReleaseRemoveLockEx(PIO_REMOVE_LOCK
	RemoveLock , PVOID Tag , ULONG RemlockSize ) ;
// #line 15893
 void 
	IoReleaseRemoveLockAndWaitEx(PIO_REMOVE_LOCK RemoveLock , PVOID Tag ,
	ULONG RemlockSize ) ;
// #line 15949
 void IoStartNextPacket(PDEVICE_OBJECT DeviceObject ,
	BOOLEAN Cancelable ) ;
// #line 15956
 void IoStartNextPacketByKey(PDEVICE_OBJECT DeviceObject ,
	BOOLEAN Cancelable , ULONG Key ) ;
// #line 15964
 void IoStartPacket(PDEVICE_OBJECT DeviceObject , PIRP Irp
	, PULONG Key , PDRIVER_CANCEL CancelFunction ) ;
// #line 15975
 void IoStartTimer(PDEVICE_OBJECT DeviceObject ) ;
// #line 15981
 void IoStopTimer(PDEVICE_OBJECT DeviceObject ) ;
// #line 15988
 void IoUnregisterShutdownNotification(PDEVICE_OBJECT
	DeviceObject ) ;
// #line 15996
 void IoUpdateShareAccess(PFILE_OBJECT FileObject ,
	PSHARE_ACCESS ShareAccess ) ;
void IoWriteErrorLogEntry(PVOID ElEntry ){}

// #line 16009
typedef struct _IO_WORKITEM *  PIO_WORKITEM ;

typedef void ( *  PIO_WORKITEM_ROUTINE )(PDEVICE_OBJECT DeviceObject , PVOID
	Context ) ;

// #line 16018
PIO_WORKITEM IoAllocateWorkItem(PDEVICE_OBJECT DeviceObject ) ;
// #line 16023
void IoFreeWorkItem(PIO_WORKITEM IoWorkItem ) ;
// #line 16028
void IoQueueWorkItem(PIO_WORKITEM IoWorkItem , PIO_WORKITEM_ROUTINE
	WorkerRoutine , WORK_QUEUE_TYPE QueueType , PVOID Context ) ;

extern NTSTATUS IoWMIRegistrationControl(PDEVICE_OBJECT DeviceObject ,
					 ULONG Action );

/* NTSTATUS IoWMIRegistrationControl(PDEVICE_OBJECT DeviceObject , */
/* 				  ULONG Action ){ */
/*   NTSTATUS R_NONDET; */
/*   return R_NONDET; */
/* } */
 
// #line 16064
 NTSTATUS IoWMIAllocateInstanceIds(GUID *  Guid , ULONG
				   InstanceCount , ULONG *  FirstInstanceId ) ;
// #line 16072
 NTSTATUS IoWMISuggestInstanceName(PDEVICE_OBJECT
				   PhysicalDeviceObject , PUNICODE_STRING SymbolicLinkName , BOOLEAN
				   CombineNames , PUNICODE_STRING SuggestedInstanceName ) ;
// #line 16081
 NTSTATUS IoWMIWriteEvent(PVOID WnodeEventItem ) ;

// #line 16100
typedef enum  {
	DevicePropertyDeviceDescription,
	DevicePropertyHardwareID,
	DevicePropertyCompatibleIDs,
	DevicePropertyBootConfiguration,
	DevicePropertyBootConfigurationTranslated,
	DevicePropertyClassName,
	DevicePropertyClassGuid,
	DevicePropertyDriverKeyName,
	DevicePropertyManufacturer,
	DevicePropertyFriendlyName,
	DevicePropertyLocationInformation,
	DevicePropertyPhysicalDeviceObjectName,
	DevicePropertyBusTypeGuid,
	DevicePropertyLegacyBusType,
	DevicePropertyBusNumber,
	DevicePropertyEnumeratorName,
	DevicePropertyAddress,
	DevicePropertyUINumber
} DEVICE_REGISTRY_PROPERTY ;

typedef BOOLEAN ( *  PTRANSLATE_BUS_ADDRESS )(PVOID Context , PHYSICAL_ADDRESS
	BusAddress , ULONG Length , PULONG AddressSpace , PPHYSICAL_ADDRESS
	TranslatedAddress ) ;

// #line 16129
typedef struct _DMA_ADAPTER *  ( *  PGET_DMA_ADAPTER )(PVOID Context ,
	struct _DEVICE_DESCRIPTION *  DeviceDescriptor , PULONG
	NumberOfMapRegisters ) ;

// #line 16135
typedef ULONG ( *  PGET_SET_DEVICE_DATA )(PVOID Context , ULONG DataType , PVOID
	Buffer , ULONG Offset , ULONG Length ) ;

// #line 16148
typedef struct _PNP_BUS_INFORMATION {
	GUID BusTypeGuid ;
	INTERFACE_TYPE LegacyBusType ;
	ULONG BusNumber ;
} PNP_BUS_INFORMATION , *  PPNP_BUS_INFORMATION ;

// #line 16162
typedef struct _LEGACY_BUS_INFORMATION {
	GUID BusTypeGuid ;
	INTERFACE_TYPE LegacyBusType ;
	ULONG BusNumber ;
} LEGACY_BUS_INFORMATION , *  PLEGACY_BUS_INFORMATION ;

typedef struct _BUS_INTERFACE_STANDARD {
	USHORT Size ;
	USHORT Version ;
	PVOID Context ;
	PINTERFACE_REFERENCE InterfaceReference ;
	PINTERFACE_DEREFERENCE InterfaceDereference ;
	PTRANSLATE_BUS_ADDRESS TranslateBusAddress ;
	PGET_DMA_ADAPTER GetDmaAdapter ;
	PGET_SET_DEVICE_DATA SetBusData ;
	PGET_SET_DEVICE_DATA GetBusData ;
} BUS_INTERFACE_STANDARD , *  PBUS_INTERFACE_STANDARD ;

// #line 16190
typedef BOOLEAN ( *  PGPE_SERVICE_ROUTINE )(PVOID , PVOID ) ;

// #line 16194
typedef NTSTATUS ( *  PGPE_CONNECT_VECTOR )(PDEVICE_OBJECT , ULONG ,
	KINTERRUPT_MODE , BOOLEAN , PGPE_SERVICE_ROUTINE , PVOID , PVOID ) ;

// #line 16203
typedef NTSTATUS ( *  PGPE_DISCONNECT_VECTOR )(PVOID ) ;

// #line 16206
typedef NTSTATUS ( *  PGPE_ENABLE_EVENT )(PDEVICE_OBJECT , PVOID ) ;

// #line 16210
typedef NTSTATUS ( *  PGPE_DISABLE_EVENT )(PDEVICE_OBJECT , PVOID ) ;

// #line 16214
typedef NTSTATUS ( *  PGPE_CLEAR_STATUS )(PDEVICE_OBJECT , PVOID ) ;

// #line 16218
typedef void ( *  PDEVICE_NOTIFY_CALLBACK )(PVOID , ULONG ) ;

// #line 16222
typedef NTSTATUS ( *  PREGISTER_FOR_DEVICE_NOTIFICATIONS )(PDEVICE_OBJECT ,
	PDEVICE_NOTIFY_CALLBACK , PVOID ) ;

// #line 16227
typedef void ( *  PUNREGISTER_FOR_DEVICE_NOTIFICATIONS )(PDEVICE_OBJECT ,
	PDEVICE_NOTIFY_CALLBACK ) ;

// #line 16231
typedef struct _ACPI_INTERFACE_STANDARD {
	USHORT Size ;
	USHORT Version ;
	PVOID Context ;
	PINTERFACE_REFERENCE InterfaceReference ;
	PINTERFACE_DEREFERENCE InterfaceDereference ;
	PGPE_CONNECT_VECTOR GpeConnectVector ;
	PGPE_DISCONNECT_VECTOR GpeDisconnectVector ;
	PGPE_ENABLE_EVENT GpeEnableEvent ;
	PGPE_DISABLE_EVENT GpeDisableEvent ;
	PGPE_CLEAR_STATUS GpeClearStatus ;
	PREGISTER_FOR_DEVICE_NOTIFICATIONS RegisterForDeviceNotifications ;
	PUNREGISTER_FOR_DEVICE_NOTIFICATIONS UnregisterForDeviceNotifications ;
} ACPI_INTERFACE_STANDARD , *  PACPI_INTERFACE_STANDARD ;

// #line 16255
typedef enum _ACPI_REG_TYPE {
	PM1a_ENABLE,
	PM1b_ENABLE,
	PM1a_STATUS,
	PM1b_STATUS,
	PM1a_CONTROL,
	PM1b_CONTROL,
	GP_STATUS,
	GP_ENABLE,
	SMI_CMD,
	MaxRegType
} ACPI_REG_TYPE , *  PACPI_REG_TYPE ;

typedef USHORT ( *  PREAD_ACPI_REGISTER )(ACPI_REG_TYPE AcpiReg , ULONG Register
	) ;

// #line 16272
typedef void ( *  PWRITE_ACPI_REGISTER )(ACPI_REG_TYPE AcpiReg , ULONG Register
	, USHORT Value ) ;

// #line 16278
typedef struct ACPI_REGS_INTERFACE_STANDARD {
	USHORT Size ;
	USHORT Version ;
	PVOID Context ;
	PINTERFACE_REFERENCE InterfaceReference ;
	PINTERFACE_DEREFERENCE InterfaceDereference ;
	PREAD_ACPI_REGISTER ReadAcpiRegister ;
	PWRITE_ACPI_REGISTER WriteAcpiRegister ;
} ACPI_REGS_INTERFACE_STANDARD , *  PACPI_REGS_INTERFACE_STANDARD ;

// #line 16300
typedef struct  {
	PVOID LinkNode ;
	ULONG StaticVector ;
	UCHAR Flags ;
} ROUTING_TOKEN , *  PROUTING_TOKEN ;

// #line 16314
typedef NTSTATUS ( *  PGET_INTERRUPT_ROUTING )(PDEVICE_OBJECT Pdo , ULONG *  Bus
	, ULONG *  PciSlot , UCHAR *  InterruptLine , UCHAR *  InterruptPin ,
	UCHAR *  ClassCode , UCHAR *  SubClassCode , PDEVICE_OBJECT *  ParentPdo
	, ROUTING_TOKEN *  RoutingToken , UCHAR *  Flags ) ;

// #line 16329
typedef NTSTATUS ( *  PSET_INTERRUPT_ROUTING_TOKEN )(PDEVICE_OBJECT Pdo ,
	PROUTING_TOKEN RoutingToken ) ;

// #line 16336
typedef void ( *  PUPDATE_INTERRUPT_LINE )(PDEVICE_OBJECT Pdo , UCHAR
	LineRegister ) ;

// #line 16343
typedef struct _INT_ROUTE_INTERFACE_STANDARD {
	USHORT Size ;
	USHORT Version ;
	PVOID Context ;
	PINTERFACE_REFERENCE InterfaceReference ;
	PINTERFACE_DEREFERENCE InterfaceDereference ;
	PGET_INTERRUPT_ROUTING GetInterruptRouting ;
	PSET_INTERRUPT_ROUTING_TOKEN SetInterruptRoutingToken ;
	PUPDATE_INTERRUPT_LINE UpdateInterruptLine ;
} INT_ROUTE_INTERFACE_STANDARD , *  PINT_ROUTE_INTERFACE_STANDARD ;

// #line 16366
typedef struct _IO_ASSIGNED_RESOURCES {
	ULONG Count ;
	PASSIGNED_RESOURCE AssignedResources[1] ;
} IO_ASSIGNED_RESOURCES , *  PIO_ASSIGNED_RESOURCES ;

 NTSTATUS
	IoGetAssignedResourcesForSuballocation(INTERFACE_TYPE InterfaceType ,
	ULONG BusNumber , ULONG SlotNumber , PIO_RESOURCE_DESCRIPTOR
	ResourceDescriptor , PIO_ASSIGNED_RESOURCES *  List ) ;
// #line 16381
extern NTSTATUS IoReportDetectedDevice(PDRIVER_OBJECT DriverObject ,
				       INTERFACE_TYPE LegacyBusType , ULONG BusNumber , 
				       ULONG SlotNumber , PCM_RESOURCE_LIST ResourceList ,
				       PIO_RESOURCE_REQUIREMENTS_LIST ResourceRequirements , 
				       BOOLEAN ResourceAssigned , PDEVICE_OBJECT *  DeviceObject );

/* NTSTATUS IoReportDetectedDevice(PDRIVER_OBJECT DriverObject , */
/* 				INTERFACE_TYPE LegacyBusType , ULONG BusNumber ,  */
/* 				ULONG SlotNumber , PCM_RESOURCE_LIST ResourceList , */
/* 				PIO_RESOURCE_REQUIREMENTS_LIST ResourceRequirements ,  */
/* 				BOOLEAN ResourceAssigned , PDEVICE_OBJECT *  DeviceObject ){ */
/*   NTSTATUS R_NONDET; */
/*   return R_NONDET; */
/* } */

// #line 16396
 void IoInvalidateDeviceRelations(PDEVICE_OBJECT
	DeviceObject , DEVICE_RELATION_TYPE Type ) ;
// #line 16403
 void IoRequestDeviceEject(PDEVICE_OBJECT
	PhysicalDeviceObject ) ;
// #line 16409
 NTSTATUS IoGetDeviceProperty(PDEVICE_OBJECT DeviceObject ,
	DEVICE_REGISTRY_PROPERTY DeviceProperty , ULONG BufferLength , PVOID
	PropertyBuffer , PULONG ResultLength ) ;
// #line 16427

extern NTSTATUS IoOpenDeviceRegistryKey(PDEVICE_OBJECT DeviceObject ,
					ULONG DevInstKeyType , ACCESS_MASK DesiredAccess ,
					PHANDLE DevInstRegKey );

/*  NTSTATUS IoOpenDeviceRegistryKey(PDEVICE_OBJECT DeviceObject , */
/* 				  ULONG DevInstKeyType , ACCESS_MASK DesiredAccess , */
/* 				  PHANDLE DevInstRegKey ){ */
/*    NTSTATUS R_NONDET; */
/*    return R_NONDET; */
/*  } */

// #line 16436
NTSTATUS  IoRegisterDeviceInterface(PDEVICE_OBJECT PhysicalDeviceObject , 				    
				    GUID *  InterfaceClassGuid , 
				    PUNICODE_STRING ReferenceString ,
				    PUNICODE_STRING SymbolicLinkName ) ;
// #line 16446
 NTSTATUS IoOpenDeviceInterfaceRegistryKey(PUNICODE_STRING
	SymbolicLinkName , ACCESS_MASK DesiredAccess , PHANDLE
	DeviceInterfaceKey ) ;
// #line 16456
 NTSTATUS IoSetDeviceInterfaceState(PUNICODE_STRING
	SymbolicLinkName , BOOLEAN Enable ) ;
// #line 16465
 NTSTATUS  IoGetDeviceInterfaces(const GUID * 
	InterfaceClassGuid , PDEVICE_OBJECT PhysicalDeviceObject , ULONG Flags ,
	PWSTR *  SymbolicLinkList ) ;
// #line 16477
 NTSTATUS 
	IoGetDeviceInterfaceAlias(PUNICODE_STRING SymbolicLinkName , const GUID
	*  AliasInterfaceClassGuid , PUNICODE_STRING AliasSymbolicLinkName ) ;

// #line 16490
typedef enum _IO_NOTIFICATION_EVENT_CATEGORY {
	EventCategoryReserved,
	EventCategoryHardwareProfileChange,
	EventCategoryDeviceInterfaceChange,
	EventCategoryTargetDeviceChange
} IO_NOTIFICATION_EVENT_CATEGORY ;

// #line 16504
typedef NTSTATUS ( *  PDRIVER_NOTIFICATION_CALLBACK_ROUTINE )(PVOID
	NotificationStructure , PVOID Context ) ;

// #line 16512
 NTSTATUS
	IoRegisterPlugPlayNotification(IO_NOTIFICATION_EVENT_CATEGORY
	EventCategory , ULONG EventCategoryFlags , PVOID EventCategoryData ,
	PDRIVER_OBJECT DriverObject , PDRIVER_NOTIFICATION_CALLBACK_ROUTINE
	CallbackRoutine , PVOID Context , PVOID *  NotificationEntry ) ;
// #line 16524
 NTSTATUS IoUnregisterPlugPlayNotification(PVOID
	NotificationEntry ) ;
// #line 16530
 NTSTATUS IoReportTargetDeviceChange(PDEVICE_OBJECT
	PhysicalDeviceObject , PVOID NotificationStructure ) ;

// #line 16537
typedef void ( *  PDEVICE_CHANGE_COMPLETE_CALLBACK )(PVOID Context ) ;

// #line 16543
void IoInvalidateDeviceState(PDEVICE_OBJECT PhysicalDeviceObject ){}
			     
// #line 16559
 NTSTATUS
	IoReportTargetDeviceChangeAsynchronous(PDEVICE_OBJECT
	PhysicalDeviceObject , PVOID NotificationStructure ,
	PDEVICE_CHANGE_COMPLETE_CALLBACK Callback , PVOID Context ) ;

// #line 16573
typedef enum _ARBITER_ACTION {
	ArbiterActionTestAllocation,
	ArbiterActionRetestAllocation,
	ArbiterActionCommitAllocation,
	ArbiterActionRollbackAllocation,
	ArbiterActionQueryAllocatedResources,
	ArbiterActionWriteReservedResources,
	ArbiterActionQueryConflict,
	ArbiterActionQueryArbitrate,
	ArbiterActionAddReserved,
	ArbiterActionBootAllocation
} ARBITER_ACTION , *  PARBITER_ACTION ;

typedef struct _ARBITER_CONFLICT_INFO {
	PDEVICE_OBJECT OwningObject ;
	ULONGLONG Start ;
	ULONGLONG End ;
} ARBITER_CONFLICT_INFO , *  PARBITER_CONFLICT_INFO ;

// #line 16608
typedef struct _ARBITER_PARAMETERS {
	union  {
		struct  {
			PLIST_ENTRY ArbitrationList ;
			ULONG AllocateFromCount ;
			PCM_PARTIAL_RESOURCE_DESCRIPTOR AllocateFrom ;
		} TestAllocation ;
		struct  {
			PLIST_ENTRY ArbitrationList ;
			ULONG AllocateFromCount ;
			PCM_PARTIAL_RESOURCE_DESCRIPTOR AllocateFrom ;
		} RetestAllocation ;
		struct  {
			PLIST_ENTRY ArbitrationList ;
		} BootAllocation ;
		struct  {
			PCM_PARTIAL_RESOURCE_LIST *  AllocatedResources ;
		} QueryAllocatedResources ;
		struct  {
			PDEVICE_OBJECT PhysicalDeviceObject ;
			PIO_RESOURCE_DESCRIPTOR ConflictingResource ;
			PULONG ConflictCount ;
			PARBITER_CONFLICT_INFO *  Conflicts ;
		} QueryConflict ;
		struct  {
			PLIST_ENTRY ArbitrationList ;
		} QueryArbitrate ;
		struct  {
			PDEVICE_OBJECT ReserveDevice ;
		} AddReserved ;
	} Parameters ;
} ARBITER_PARAMETERS , *  PARBITER_PARAMETERS ;

// #line 16719
typedef enum _ARBITER_REQUEST_SOURCE {
	ArbiterRequestUndefined = - 1,
	ArbiterRequestLegacyReported,
	ArbiterRequestHalReported,
	ArbiterRequestLegacyAssigned,
	ArbiterRequestPnpDetected,
	ArbiterRequestPnpEnumerated
} ARBITER_REQUEST_SOURCE ;

// #line 16731
typedef enum _ARBITER_RESULT {
	ArbiterResultUndefined = - 1,
	ArbiterResultSuccess,
	ArbiterResultExternalConflict,
	ArbiterResultNullRequest
} ARBITER_RESULT ;

// #line 16748
 NTSTATUS IoReportResourceForDetection(PDRIVER_OBJECT
	DriverObject , PCM_RESOURCE_LIST DriverList , ULONG DriverListSize ,
	PDEVICE_OBJECT DeviceObject , PCM_RESOURCE_LIST DeviceList , ULONG
	DeviceListSize , PBOOLEAN ConflictDetected ) ;

// #line 16761
typedef struct _ARBITER_LIST_ENTRY {
	LIST_ENTRY ListEntry ;
	ULONG AlternativeCount ;
	PIO_RESOURCE_DESCRIPTOR Alternatives ;
	PDEVICE_OBJECT PhysicalDeviceObject ;
	ARBITER_REQUEST_SOURCE RequestSource ;
	ULONG Flags ;
	LONG_PTR WorkSpace ;
	INTERFACE_TYPE InterfaceType ;
	ULONG SlotNumber ;
	ULONG BusNumber ;
	PCM_PARTIAL_RESOURCE_DESCRIPTOR Assignment ;
	PIO_RESOURCE_DESCRIPTOR SelectedAlternative ;
	ARBITER_RESULT Result ;
} ARBITER_LIST_ENTRY , *  PARBITER_LIST_ENTRY ;

// #line 16832
typedef NTSTATUS ( *  PARBITER_HANDLER )(PVOID Context , ARBITER_ACTION Action ,
	PARBITER_PARAMETERS Parameters ) ;

// #line 16853
typedef struct _ARBITER_INTERFACE {
	USHORT Size ;
	USHORT Version ;
	PVOID Context ;
	PINTERFACE_REFERENCE InterfaceReference ;
	PINTERFACE_DEREFERENCE InterfaceDereference ;
	PARBITER_HANDLER ArbiterHandler ;
	ULONG Flags ;
} ARBITER_INTERFACE , *  PARBITER_INTERFACE ;

// #line 16880
typedef enum _RESOURCE_TRANSLATION_DIRECTION {
	TranslateChildToParent,
	TranslateParentToChild
} RESOURCE_TRANSLATION_DIRECTION ;

// #line 16889
typedef NTSTATUS ( *  PTRANSLATE_RESOURCE_HANDLER )(PVOID Context ,
	PCM_PARTIAL_RESOURCE_DESCRIPTOR Source , RESOURCE_TRANSLATION_DIRECTION
	Direction , ULONG AlternativesCount , IO_RESOURCE_DESCRIPTOR
	Alternatives[] , PDEVICE_OBJECT PhysicalDeviceObject ,
	PCM_PARTIAL_RESOURCE_DESCRIPTOR Target ) ;

// #line 16901
typedef NTSTATUS ( *  PTRANSLATE_RESOURCE_REQUIREMENTS_HANDLER )(PVOID Context ,
	PIO_RESOURCE_DESCRIPTOR Source , PDEVICE_OBJECT PhysicalDeviceObject ,
	PULONG TargetCount , PIO_RESOURCE_DESCRIPTOR *  Target ) ;

// #line 16915
typedef struct _TRANSLATOR_INTERFACE {
	USHORT Size ;
	USHORT Version ;
	PVOID Context ;
	PINTERFACE_REFERENCE InterfaceReference ;
	PINTERFACE_DEREFERENCE InterfaceDereference ;
	PTRANSLATE_RESOURCE_HANDLER TranslateResources ;
	PTRANSLATE_RESOURCE_REQUIREMENTS_HANDLER TranslateResourceRequirements ;
} TRANSLATOR_INTERFACE , *  PTRANSLATOR_INTERFACE ;

// #line 16931
typedef NTSTATUS ( *  PLEGACY_DEVICE_DETECTION_HANDLER )(PVOID Context ,
	INTERFACE_TYPE LegacyBusType , ULONG BusNumber , ULONG SlotNumber ,
	PDEVICE_OBJECT *  PhysicalDeviceObject ) ;

// #line 16945
typedef struct _LEGACY_DEVICE_DETECTION_INTERFACE {
	USHORT Size ;
	USHORT Version ;
	PVOID Context ;
	PINTERFACE_REFERENCE InterfaceReference ;
	PINTERFACE_DEREFERENCE InterfaceDereference ;
	PLEGACY_DEVICE_DETECTION_HANDLER LegacyDeviceDetection ;
} LEGACY_DEVICE_DETECTION_INTERFACE , *  PLEGACY_DEVICE_DETECTION_INTERFACE ;

// #line 16959
typedef struct _PLUGPLAY_NOTIFICATION_HEADER {
	USHORT Version ;
	USHORT Size ;
	GUID Event ;
} PLUGPLAY_NOTIFICATION_HEADER , *  PPLUGPLAY_NOTIFICATION_HEADER ;

// #line 16972
typedef struct _HWPROFILE_CHANGE_NOTIFICATION {
	USHORT Version ;
	USHORT Size ;
	GUID Event ;
} HWPROFILE_CHANGE_NOTIFICATION , *  PHWPROFILE_CHANGE_NOTIFICATION ;

// #line 16986
typedef struct _DEVICE_INTERFACE_CHANGE_NOTIFICATION {
	USHORT Version ;
	USHORT Size ;
	GUID Event ;
	GUID InterfaceClassGuid ;
	PUNICODE_STRING SymbolicLinkName ;
} DEVICE_INTERFACE_CHANGE_NOTIFICATION , * 
	PDEVICE_INTERFACE_CHANGE_NOTIFICATION ;

// #line 17006
typedef struct _TARGET_DEVICE_REMOVAL_NOTIFICATION {
	USHORT Version ;
	USHORT Size ;
	GUID Event ;
	PFILE_OBJECT FileObject ;
} TARGET_DEVICE_REMOVAL_NOTIFICATION , *  PTARGET_DEVICE_REMOVAL_NOTIFICATION ;

// #line 17026
typedef struct _TARGET_DEVICE_CUSTOM_NOTIFICATION {
	USHORT Version ;
	USHORT Size ;
	GUID Event ;
	PFILE_OBJECT FileObject ;
	LONG NameBufferOffset ;
	UCHAR CustomDataBuffer[1] ;
} TARGET_DEVICE_CUSTOM_NOTIFICATION , *  PTARGET_DEVICE_CUSTOM_NOTIFICATION ;

// #line 17054
typedef struct _DEVICE_DESCRIPTION {
	ULONG Version ;
	BOOLEAN Master ;
	BOOLEAN ScatterGather ;
	BOOLEAN DemandMode ;
	BOOLEAN AutoInitialize ;
	BOOLEAN Dma32BitAddresses ;
	BOOLEAN IgnoreCount ;
	BOOLEAN Reserved1 ;
	BOOLEAN Dma64BitAddresses ;
	ULONG BusNumber ;
	ULONG DmaChannel ;
	INTERFACE_TYPE InterfaceType ;
	DMA_WIDTH DmaWidth ;
	DMA_SPEED DmaSpeed ;
	ULONG MaximumLength ;
	ULONG DmaPort ;
} DEVICE_DESCRIPTION , *  PDEVICE_DESCRIPTION ;

// #line 17086
typedef BOOLEAN ( *  PHAL_RESET_DISPLAY_PARAMETERS )(ULONG Columns , ULONG Rows
	) ;

// #line 17093

void HalAcquireDisplayOwnership(PHAL_RESET_DISPLAY_PARAMETERS ResetDisplayParameters ) ;
void KeFlushWriteBuffer(void  ) ;
NTSTATUS HalAssignSlotResources(PUNICODE_STRING RegistryPath ,
				PUNICODE_STRING DriverClassName , PDRIVER_OBJECT DriverObject ,
				PDEVICE_OBJECT DeviceObject , INTERFACE_TYPE BusType ,
				ULONG BusNumber , ULONG SlotNumber , 
				PCM_RESOURCE_LIST *  AllocatedResources ) ;
				
// #line 17137
ULONG HalSetBusData(BUS_DATA_TYPE BusDataType , ULONG BusNumber ,
		    ULONG SlotNumber , PVOID Buffer , ULONG Length ) ;
ULONG HalSetBusDataByOffset(BUS_DATA_TYPE BusDataType ,
			    ULONG BusNumber , ULONG SlotNumber , PVOID Buffer , ULONG Offset , 
			    ULONG Length ) ;
BOOLEAN HalTranslateBusAddress(INTERFACE_TYPE InterfaceType ,
			       ULONG BusNumber , PHYSICAL_ADDRESS BusAddress , 
			       PULONG AddressSpace ,
			       PPHYSICAL_ADDRESS TranslatedAddress ) ;
// #line 17196
 PVOID HalAllocateCrashDumpRegisters(PADAPTER_OBJECT
	AdapterObject , PULONG NumberOfMapRegisters ) ;
// #line 17204
 ULONG HalGetBusData(BUS_DATA_TYPE BusDataType , ULONG
	BusNumber , ULONG SlotNumber , PVOID Buffer , ULONG Length ) ;
// #line 17215
 ULONG HalGetBusDataByOffset(BUS_DATA_TYPE BusDataType ,
	ULONG BusNumber , ULONG SlotNumber , PVOID Buffer , ULONG Offset , ULONG
	Length ) ;
// #line 17226
 PADAPTER_OBJECT HalGetAdapter(PDEVICE_DESCRIPTION
	DeviceDescription , PULONG NumberOfMapRegisters ) ;
// #line 17237
 BOOLEAN HalMakeBeep(ULONG Frequency ) ;
// #line 17282
 NTSTATUS IoReadPartitionTable(PDEVICE_OBJECT DeviceObject
	, ULONG SectorSize , BOOLEAN ReturnRecognizedPartitions ,
	struct _DRIVE_LAYOUT_INFORMATION *  *  PartitionBuffer ) ;
// #line 17291
 NTSTATUS IoSetPartitionInformation(PDEVICE_OBJECT
	DeviceObject , ULONG SectorSize , ULONG PartitionNumber , ULONG
	PartitionType ) ;
// #line 17300
 NTSTATUS IoWritePartitionTable(PDEVICE_OBJECT DeviceObject
	, ULONG SectorSize , ULONG SectorsPerTrack , ULONG NumberOfHeads ,
	struct _DRIVE_LAYOUT_INFORMATION *  PartitionBuffer ) ;
// #line 17315
 LARGE_INTEGER KeQueryPerformanceCounter(PLARGE_INTEGER
	PerformanceFrequency ) ;
// #line 17326
 void KeStallExecutionProcessor(ULONG MicroSeconds ) ;

// #line 17333
typedef void ( *  PDEVICE_CONTROL_COMPLETION )(struct _DEVICE_CONTROL_CONTEXT * 
	ControlContext ) ;

// #line 17339
typedef struct _DEVICE_CONTROL_CONTEXT {
	NTSTATUS Status ;
	PDEVICE_HANDLER_OBJECT DeviceHandler ;
	PDEVICE_OBJECT DeviceObject ;
	ULONG ControlCode ;
	PVOID Buffer ;
	PULONG BufferLength ;
	PVOID Context ;
} DEVICE_CONTROL_CONTEXT , *  PDEVICE_CONTROL_CONTEXT ;

typedef PBUS_HANDLER ( *  pHalHandlerForBus )(INTERFACE_TYPE
	InterfaceType , ULONG BusNumber ) ;

// #line 17355
typedef void ( *  pHalReferenceBusHandler )(PBUS_HANDLER BusHandler ) ;

// #line 17365
typedef enum _HAL_QUERY_INFORMATION_CLASS {
	HalInstalledBusInformation,
	HalProfileSourceInformation,
	HalInformationClassUnused1,
	HalPowerInformation,
	HalProcessorSpeedInformation,
	HalCallbackInformation,
	HalMapRegisterInformation,
	HalMcaLogInformation,
	HalFrameBufferCachingInformation,
	HalDisplayBiosInformation,
	HalProcessorFeatureInformation
} HAL_QUERY_INFORMATION_CLASS , *  PHAL_QUERY_INFORMATION_CLASS ;

// #line 17381
typedef enum _HAL_SET_INFORMATION_CLASS {
	HalProfileSourceInterval,
	HalProfileSourceInterruptHandler,
	HalMcaRegisterDriver
} HAL_SET_INFORMATION_CLASS , *  PHAL_SET_INFORMATION_CLASS ;

// #line 17388
typedef NTSTATUS ( *  pHalQuerySystemInformation )(HAL_QUERY_INFORMATION_CLASS
	InformationClass , ULONG BufferSize , PVOID Buffer , PULONG
	ReturnedLength ) ;

// #line 17397
NTSTATUS HaliQuerySystemInformation(HAL_SET_INFORMATION_CLASS InformationClass ,
	ULONG BufferSize , PVOID Buffer , PULONG ReturnedLength ) ;

// #line 17405
typedef NTSTATUS ( *  pHalSetSystemInformation )(HAL_SET_INFORMATION_CLASS
	InformationClass , ULONG BufferSize , PVOID Buffer ) ;

// #line 17413
NTSTATUS HaliSetSystemInformation(HAL_SET_INFORMATION_CLASS InformationClass ,
	ULONG BufferSize , PVOID Buffer ) ;

// #line 17420
typedef void ( *  pHalExamineMBR )(PDEVICE_OBJECT DeviceObject , ULONG
	SectorSize , ULONG MBRTypeIdentifier , PVOID *  Buffer ) ;

// #line 17429
typedef void ( *  pHalIoAssignDriveLetters
	)(struct _LOADER_PARAMETER_BLOCK *  LoaderBlock , PSTRING NtDeviceName ,
	PUCHAR NtSystemPath , PSTRING NtSystemPathString ) ;

// #line 17438
typedef NTSTATUS ( *  pHalIoReadPartitionTable )(PDEVICE_OBJECT
	DeviceObject , ULONG SectorSize , BOOLEAN ReturnRecognizedPartitions ,
	struct _DRIVE_LAYOUT_INFORMATION *  *  PartitionBuffer ) ;

// #line 17447
typedef NTSTATUS ( *  pHalIoSetPartitionInformation )(PDEVICE_OBJECT
	DeviceObject , ULONG SectorSize , ULONG PartitionNumber , ULONG
	PartitionType ) ;

// #line 17456
typedef NTSTATUS ( *  pHalIoWritePartitionTable )(PDEVICE_OBJECT
	DeviceObject , ULONG SectorSize , ULONG SectorsPerTrack , ULONG
	NumberOfHeads , struct _DRIVE_LAYOUT_INFORMATION *  PartitionBuffer ) ;

// #line 17466
typedef NTSTATUS ( *  pHalQueryBusSlots )(PBUS_HANDLER BusHandler , ULONG
	BufferSize , PULONG SlotNumbers , PULONG ReturnedLength ) ;

// #line 17475
typedef NTSTATUS ( *  pHalInitPnpDriver )(void  ) ;

// #line 17481
NTSTATUS HaliInitPnpDriver(void  ) ;

// #line 17486
typedef struct _PM_DISPATCH_TABLE {
	ULONG Signature ;
	ULONG Version ;
	PVOID Function[1] ;
} PM_DISPATCH_TABLE , *  PPM_DISPATCH_TABLE ;

typedef NTSTATUS ( *  pHalInitPowerManagement )(PPM_DISPATCH_TABLE
	PmDriverDispatchTable , PPM_DISPATCH_TABLE *  PmHalDispatchTable ) ;

// #line 17499
NTSTATUS HaliInitPowerManagement(PPM_DISPATCH_TABLE PmDriverDispatchTable ,
	PPM_DISPATCH_TABLE *  PmHalDispatchTable ) ;

// #line 17505
typedef struct _DMA_ADAPTER *  ( *  pHalGetDmaAdapter )(PVOID Context ,
	struct _DEVICE_DESCRIPTION *  DeviceDescriptor , PULONG
	NumberOfMapRegisters ) ;

// #line 17513
struct _DMA_ADAPTER *  HaliGetDmaAdapter(PVOID Context ,
	struct _DEVICE_DESCRIPTION *  DeviceDescriptor , PULONG
	NumberOfMapRegisters ) ;

// #line 17520
typedef NTSTATUS ( *  pHalGetInterruptTranslator )(INTERFACE_TYPE
	ParentInterfaceType , ULONG ParentBusNumber , INTERFACE_TYPE
	BridgeInterfaceType , USHORT Size , USHORT Version ,
	PTRANSLATOR_INTERFACE Translator , PULONG BridgeBusNumber ) ;

// #line 17532
NTSTATUS HaliGetInterruptTranslator(INTERFACE_TYPE ParentInterfaceType , ULONG
	ParentBusNumber , INTERFACE_TYPE BridgeInterfaceType , USHORT Size ,
	USHORT Version , PTRANSLATOR_INTERFACE Translator , PULONG
	BridgeBusNumber ) ;

// #line 17543
typedef BOOLEAN ( *  pHalTranslateBusAddress )(INTERFACE_TYPE InterfaceType ,
	ULONG BusNumber , PHYSICAL_ADDRESS BusAddress , PULONG AddressSpace ,
	PPHYSICAL_ADDRESS TranslatedAddress ) ;

// #line 17553
typedef NTSTATUS ( *  pHalAssignSlotResources )(PUNICODE_STRING RegistryPath ,
	PUNICODE_STRING DriverClassName , PDRIVER_OBJECT DriverObject ,
	PDEVICE_OBJECT DeviceObject , INTERFACE_TYPE BusType , ULONG BusNumber ,
	ULONG SlotNumber , PCM_RESOURCE_LIST *  AllocatedResources ) ;

// #line 17566
typedef void ( *  pHalHaltSystem )(void  ) ;

// #line 17572
typedef void ( *  pHalResetDisplay )(void  ) ;

// #line 17578
typedef BOOLEAN ( *  pHalFindBusAddressTranslation )(PHYSICAL_ADDRESS BusAddress
	, PULONG AddressSpace , PPHYSICAL_ADDRESS TranslatedAddress , PULONG_PTR
	Context , BOOLEAN NextBus ) ;

// #line 17588
typedef struct  {
	ULONG Version ;
	pHalQuerySystemInformation HalQuerySystemInformation ;
	pHalSetSystemInformation HalSetSystemInformation ;
	pHalQueryBusSlots HalQueryBusSlots ;
	ULONG Spare1 ;
	pHalExamineMBR HalExamineMBR ;
	pHalIoAssignDriveLetters HalIoAssignDriveLetters ;
	pHalIoReadPartitionTable HalIoReadPartitionTable ;
	pHalIoSetPartitionInformation HalIoSetPartitionInformation ;
	pHalIoWritePartitionTable HalIoWritePartitionTable ;
	pHalHandlerForBus HalReferenceHandlerForBus ;
	pHalReferenceBusHandler HalReferenceBusHandler ;
	pHalReferenceBusHandler HalDereferenceBusHandler ;
	pHalInitPnpDriver HalInitPnpDriver ;
	pHalInitPowerManagement HalInitPowerManagement ;
	pHalGetDmaAdapter HalGetDmaAdapter ;
	pHalGetInterruptTranslator HalGetInterruptTranslator ;
} HAL_DISPATCH , *  PHAL_DISPATCH ;

// #line 17613
//extern PHAL_DISPATCH HalDispatchTable ;

// #line 17650
typedef struct _HAL_BUS_INFORMATION {
	INTERFACE_TYPE BusType ;
	BUS_DATA_TYPE ConfigurationType ;
	ULONG BusNumber ;
	ULONG Reserved ;
} HAL_BUS_INFORMATION , *  PHAL_BUS_INFORMATION ;

// #line 17658
typedef struct _HAL_PROFILE_SOURCE_INFORMATION {
	KPROFILE_SOURCE Source ;
	BOOLEAN Supported ;
	ULONG Interval ;
} HAL_PROFILE_SOURCE_INFORMATION , *  PHAL_PROFILE_SOURCE_INFORMATION ;

// #line 17665
typedef struct _HAL_PROFILE_SOURCE_INTERVAL {
	KPROFILE_SOURCE Source ;
	ULONG_PTR Interval ;
} HAL_PROFILE_SOURCE_INTERVAL , *  PHAL_PROFILE_SOURCE_INTERVAL ;

// #line 17671
typedef enum _HAL_DISPLAY_BIOS_INFORMATION {
	HalDisplayInt10Bios,
	HalDisplayEmulatedBios,
	HalDisplayNoBios
} HAL_DISPLAY_BIOS_INFORMATION , *  PHAL_DISPLAY_BIOS_INFORMATION ;

// #line 17678
typedef struct _HAL_POWER_INFORMATION {
	ULONG TBD ;
} HAL_POWER_INFORMATION , *  PHAL_POWER_INFORMATION ;

// #line 17683
typedef struct _HAL_PROCESSOR_SPEED_INFO {
	ULONG TBD ;
} HAL_PROCESSOR_SPEED_INFORMATION , *  PHAL_PROCESSOR_SPEED_INFORMATION ;

// #line 17688
typedef struct _HAL_CALLBACKS {
	PCALLBACK_OBJECT___0 SetSystemInformation ;
	PCALLBACK_OBJECT___0 BusCheck ;
} HAL_CALLBACKS , *  PHAL_CALLBACKS ;

// #line 17694
typedef struct _HAL_PROCESSOR_FEATURE {
	ULONG UsableFeatureBits ;
} HAL_PROCESSOR_FEATURE ;

// #line 17706
typedef union _MCI_ADDR {
	struct  {
		ULONG Address ;
		ULONG Reserved ;
	}  ;
	ULONGLONG QuadPart ;
} MCI_ADDR , *  PMCI_ADDR ;

// #line 17716
typedef enum  {
	HAL_MCE_RECORD,
	HAL_MCA_RECORD
} MCA_EXCEPTION_TYPE ;

// #line 17726
typedef struct _MCA_EXCEPTION {
	ULONG VersionNumber ;
	MCA_EXCEPTION_TYPE ExceptionType ;
	LARGE_INTEGER TimeStamp ;
	ULONG ProcessorNumber ;
	union  {
		struct  {
			UCHAR BankNumber ;
			MCI_STATS Status ;
			MCI_ADDR Address ;
			ULONGLONG Misc ;
		} Mca ;
		struct  {
			ULONGLONG Address ;
			ULONGLONG Type ;
		} Mce ;
	} u ;
} MCA_EXCEPTION , *  PMCA_EXCEPTION ;

// #line 17752
typedef void ( *  PDRIVER_EXCPTN_CALLBACK )(PVOID Context , PMCA_EXCEPTION
	BankLog ) ;

// #line 17762
typedef struct _MCA_DRIVER_INFO {
	PDRIVER_EXCPTN_CALLBACK ExceptionCallback ;
	PKDEFERRED_ROUTINE DpcCallback ;
	PVOID DeviceContext ;
} MCA_DRIVER_INFO , *  PMCA_DRIVER_INFO ;

// #line 17772
typedef struct _SCATTER_GATHER_ELEMENT {
	PHYSICAL_ADDRESS Address ;
	ULONG Length ;
	ULONG_PTR Reserved ;
} SCATTER_GATHER_ELEMENT , *  PSCATTER_GATHER_ELEMENT ;


// #pragma warning(disable:4200)
// #line 17779
typedef struct _SCATTER_GATHER_LIST {
	ULONG NumberOfElements ;
	ULONG_PTR Reserved ;
	SCATTER_GATHER_ELEMENT Elements[] ;
} SCATTER_GATHER_LIST , *  PSCATTER_GATHER_LIST ;

// #line 17784

// #pragma warning(default:4200)
// #line 17788
typedef struct _DMA_OPERATIONS *  PDMA_OPERATIONS ;

typedef struct _DMA_ADAPTER {
	USHORT Version ;
	USHORT Size ;
	PDMA_OPERATIONS DmaOperations ;
} DMA_ADAPTER , *  PDMA_ADAPTER ;

// #line 17797
typedef void ( *  PPUT_DMA_ADAPTER )(PDMA_ADAPTER DmaAdapter ) ;

// #line 17801
typedef PVOID ( *  PALLOCATE_COMMON_BUFFER )(PDMA_ADAPTER DmaAdapter , ULONG
	Length , PPHYSICAL_ADDRESS LogicalAddress , BOOLEAN CacheEnabled ) ;

// #line 17808
typedef void ( *  PFREE_COMMON_BUFFER )(PDMA_ADAPTER DmaAdapter , ULONG Length ,
	PHYSICAL_ADDRESS LogicalAddress , PVOID VirtualAddress , BOOLEAN
	CacheEnabled ) ;

// #line 17816
typedef NTSTATUS ( *  PALLOCATE_ADAPTER_CHANNEL )(PDMA_ADAPTER DmaAdapter ,
	PDEVICE_OBJECT DeviceObject , ULONG NumberOfMapRegisters ,
	PDRIVER_CONTROL ExecutionRoutine , PVOID Context ) ;

// #line 17824
typedef BOOLEAN ( *  PFLUSH_ADAPTER_BUFFERS )(PDMA_ADAPTER DmaAdapter , PMDL Mdl
	, PVOID MapRegisterBase , PVOID CurrentVa , ULONG Length , BOOLEAN
	WriteToDevice ) ;

// #line 17833
typedef void ( *  PFREE_ADAPTER_CHANNEL )(PDMA_ADAPTER DmaAdapter ) ;

// #line 17837
typedef void ( *  PFREE_MAP_REGISTERS )(PDMA_ADAPTER DmaAdapter , PVOID
	MapRegisterBase , ULONG NumberOfMapRegisters ) ;

// #line 17843
typedef PHYSICAL_ADDRESS ( *  PMAP_TRANSFER )(PDMA_ADAPTER DmaAdapter , PMDL Mdl
	, PVOID MapRegisterBase , PVOID CurrentVa , PULONG Length , BOOLEAN
	WriteToDevice ) ;

// #line 17852
typedef ULONG ( *  PGET_DMA_ALIGNMENT )(PDMA_ADAPTER DmaAdapter ) ;

// #line 17856
typedef ULONG ( *  PREAD_DMA_COUNTER )(PDMA_ADAPTER DmaAdapter ) ;

// #line 17860
typedef void ( *  PDRIVER_LIST_CONTROL )(struct _DEVICE_OBJECT *  DeviceObject ,
	struct _IRP *  Irp , PSCATTER_GATHER_LIST ScatterGather , PVOID Context
	) ;

// #line 17868
typedef NTSTATUS ( *  PGET_SCATTER_GATHER_LIST )(PDMA_ADAPTER DmaAdapter ,
	PDEVICE_OBJECT DeviceObject , PMDL Mdl , PVOID CurrentVa , ULONG Length
	, PDRIVER_LIST_CONTROL ExecutionRoutine , PVOID Context , BOOLEAN
	WriteToDevice ) ;

// #line 17880
typedef void ( *  PPUT_SCATTER_GATHER_LIST )(PDMA_ADAPTER DmaAdapter ,
	PSCATTER_GATHER_LIST ScatterGather , BOOLEAN WriteToDevice ) ;

// #line 17887
typedef struct _DMA_OPERATIONS {
	ULONG Size ;
	PPUT_DMA_ADAPTER PutDmaAdapter ;
	PALLOCATE_COMMON_BUFFER AllocateCommonBuffer ;
	PFREE_COMMON_BUFFER FreeCommonBuffer ;
	PALLOCATE_ADAPTER_CHANNEL AllocateAdapterChannel ;
	PFLUSH_ADAPTER_BUFFERS FlushAdapterBuffers ;
	PFREE_ADAPTER_CHANNEL FreeAdapterChannel ;
	PFREE_MAP_REGISTERS FreeMapRegisters ;
	PMAP_TRANSFER MapTransfer ;
	PGET_DMA_ALIGNMENT GetDmaAlignment ;
	PREAD_DMA_COUNTER ReadDmaCounter ;
	PGET_SCATTER_GATHER_LIST GetScatterGatherList ;
	PPUT_SCATTER_GATHER_LIST PutScatterGatherList ;
} DMA_OPERATIONS ;

// #line 18126
 NTSTATUS HalAllocateAdapterChannel(PADAPTER_OBJECT
	AdapterObject , PWAIT_CONTEXT_BLOCK Wcb , ULONG NumberOfMapRegisters ,
	PDRIVER_CONTROL ExecutionRoutine ) ;
// #line 18135
 PVOID HalAllocateCommonBuffer(PADAPTER_OBJECT
	AdapterObject , ULONG Length , PPHYSICAL_ADDRESS LogicalAddress ,
	BOOLEAN CacheEnabled ) ;
// #line 18144
 void HalFreeCommonBuffer(PADAPTER_OBJECT AdapterObject ,
	ULONG Length , PHYSICAL_ADDRESS LogicalAddress , PVOID VirtualAddress ,
	BOOLEAN CacheEnabled ) ;
// #line 18154
 ULONG HalReadDmaCounter(PADAPTER_OBJECT AdapterObject ) ;
// #line 18160
 BOOLEAN IoFlushAdapterBuffers(PADAPTER_OBJECT
	AdapterObject , PMDL Mdl , PVOID MapRegisterBase , PVOID CurrentVa ,
	ULONG Length , BOOLEAN WriteToDevice ) ;
// #line 18171
 void IoFreeAdapterChannel(PADAPTER_OBJECT AdapterObject )
	;
// #line 18177
 void IoFreeMapRegisters(PADAPTER_OBJECT AdapterObject ,
	PVOID MapRegisterBase , ULONG NumberOfMapRegisters ) ;
// #line 18185
 PHYSICAL_ADDRESS IoMapTransfer(PADAPTER_OBJECT
	AdapterObject , PMDL Mdl , PVOID MapRegisterBase , PVOID CurrentVa ,
	PULONG Length , BOOLEAN WriteToDevice ) ;
// #line 18197
NTSTATUS HalGetScatterGatherList(PADAPTER_OBJECT DmaAdapter , PDEVICE_OBJECT
	DeviceObject , PMDL Mdl , PVOID CurrentVa , ULONG Length ,
	PDRIVER_LIST_CONTROL ExecutionRoutine , PVOID Context , BOOLEAN
	WriteToDevice ) ;
// #line 18209
void HalPutScatterGatherList(PADAPTER_OBJECT DmaAdapter , PSCATTER_GATHER_LIST
	ScatterGather , BOOLEAN WriteToDevice ) ;
// #line 18216
void HalPutDmaAdapter(PADAPTER_OBJECT DmaAdapter ) ;
// #line 18222
 void PoSetSystemState(EXECUTION_STATE Flags ) ;
// #line 18228
 PVOID PoRegisterSystemState(PVOID StateHandle ,
	EXECUTION_STATE Flags ) ;

// #line 18235
typedef void ( *  PREQUEST_POWER_COMPLETE )(PDEVICE_OBJECT DeviceObject , UCHAR
	MinorFunction , POWER_STATE PowerState , PVOID Context ,
	PIO_STATUS_BLOCK IoStatus ) ;

// #line 18245
extern NTSTATUS PoRequestPowerIrp(PDEVICE_OBJECT DeviceObject ,
				  UCHAR MinorFunction , POWER_STATE PowerState , 
				  PREQUEST_POWER_COMPLETE CompletionFunction , 
				  PVOID Context , PIRP *  Irp );

/* NTSTATUS PoRequestPowerIrp(PDEVICE_OBJECT DeviceObject , */
/* 			   UCHAR MinorFunction , POWER_STATE PowerState ,  */
/* 			   PREQUEST_POWER_COMPLETE CompletionFunction ,  */
/* 			   PVOID Context , PIRP *  Irp ){ */
/*   NTSTATUS R_NONDET; */
/*   return R_NONDET; */
/*  } */
// #line 18256
 void PoUnregisterSystemState(PVOID StateHandle ) ;
// #line 18263

extern POWER_STATE PoSetPowerState(PDEVICE_OBJECT DeviceObject ,
				   POWER_STATE_TYPE Type , POWER_STATE State );

/* POWER_STATE PoSetPowerState(PDEVICE_OBJECT DeviceObject , */
/* 			    POWER_STATE_TYPE Type , POWER_STATE State ){ */
/*   POWER_STATE R_NONDET; */
/*   return  R_NONDET; */
/* } */
  
// #line 18271
NTSTATUS PoCallDriver(PDEVICE_OBJECT DeviceObject , PIRP Irp ) ;	
// #line 18278
void PoStartNextPowerIrp(PIRP Irp ) ;
// #line 18285
PULONG PoRegisterDeviceForIdleDetection(PDEVICE_OBJECT DeviceObject ,
					ULONG ConservationIdleTime , ULONG PerformanceIdleTime ,
					DEVICE_POWER_STATE State ) ;
// #line 18311
BOOLEAN FsRtlIsTotalDeviceFailure(NTSTATUS Status ) ;

// #line 18321
typedef struct _OBJECT_HANDLE_INFORMATION {
	ULONG HandleAttributes ;
	ACCESS_MASK GrantedAccess ;
} OBJECT_HANDLE_INFORMATION , *  POBJECT_HANDLE_INFORMATION ;

 NTSTATUS ObReferenceObjectByHandle(HANDLE Handle ,
	ACCESS_MASK DesiredAccess , POBJECT_TYPE ObjectType , KPROCESSOR_MODE
	AccessMode , PVOID *  Object , POBJECT_HANDLE_INFORMATION
	HandleInformation ) ;
// #line 18342
 void  ObfReferenceObject(PVOID Object ) ;
// #line 18350
 NTSTATUS ObReferenceObjectByPointer(PVOID Object ,
	ACCESS_MASK DesiredAccess , POBJECT_TYPE ObjectType , KPROCESSOR_MODE
	AccessMode ) ;
NTSTATUS ObGetObjectSecurity(PVOID Object , PSECURITY_DESCRIPTOR * 
	SecurityDescriptor , PBOOLEAN MemoryAllocated ) ;
// #line 18373
void ObReleaseObjectSecurity(PSECURITY_DESCRIPTOR SecurityDescriptor , BOOLEAN
	MemoryAllocated ) ;

// #line 18402
typedef struct _PCI_SLOT_NUMBER {
	union  {
		struct  {
			ULONG DeviceNumber  : 5;
			ULONG FunctionNumber  : 3;
			ULONG Reserved  : 24;
		} bits ;
		ULONG AsULONG ;
	} u ;
} PCI_SLOT_NUMBER , *  PPCI_SLOT_NUMBER ;

// #line 18418
typedef struct _PCI_COMMON_CONFIG {
	USHORT VendorID ;
	USHORT DeviceID ;
	USHORT Command ;
	USHORT Status ;
	UCHAR RevisionID ;
	UCHAR ProgIf ;
	UCHAR SubClass ;
	UCHAR BaseClass ;
	UCHAR CacheLineSize ;
	UCHAR LatencyTimer ;
	UCHAR HeaderType ;
	UCHAR BIST ;
	union  {
		struct _PCI_HEADER_TYPE_0 {
			ULONG BaseAddresses[6] ;
			ULONG CIS ;
			USHORT SubVendorID ;
			USHORT SubSystemID ;
			ULONG ROMBaseAddress ;
			UCHAR CapabilitiesPtr ;
			UCHAR Reserved1[3] ;
			ULONG Reserved2 ;
			UCHAR InterruptLine ;
			UCHAR InterruptPin ;
			UCHAR MinimumGrant ;
			UCHAR MaximumLatency ;
		} type0 ;
		struct _PCI_HEADER_TYPE_1 {
			ULONG BaseAddresses[2] ;
			UCHAR PrimaryBus ;
			UCHAR SecondaryBus ;
			UCHAR SubordinateBus ;
			UCHAR SecondaryLatency ;
			UCHAR IOBase ;
			UCHAR IOLimit ;
			USHORT SecondaryStatus ;
			USHORT MemoryBase ;
			USHORT MemoryLimit ;
			USHORT PrefetchBase ;
			USHORT PrefetchLimit ;
			ULONG PrefetchBaseUpper32 ;
			ULONG PrefetchLimitUpper32 ;
			USHORT IOBaseUpper16 ;
			USHORT IOLimitUpper16 ;
			UCHAR CapabilitiesPtr ;
			UCHAR Reserved1[3] ;
			ULONG ROMBaseAddress ;
			UCHAR InterruptLine ;
			UCHAR InterruptPin ;
			USHORT BridgeControl ;
		} type1 ;
		struct _PCI_HEADER_TYPE_2 {
			ULONG SocketRegistersBaseAddress ;
			UCHAR CapabilitiesPtr ;
			UCHAR Reserved ;
			USHORT SecondaryStatus ;
			UCHAR PrimaryBus ;
			UCHAR SecondaryBus ;
			UCHAR SubordinateBus ;
			UCHAR SecondaryLatency ;
			struct  {
				ULONG Base ;
				ULONG Limit ;
			} Range[5 - 1] ;
			UCHAR InterruptLine ;
			UCHAR InterruptPin ;
			USHORT BridgeControl ;
		} type2 ;
	} u ;
	UCHAR DeviceSpecific[192] ;
} PCI_COMMON_CONFIG , *  PPCI_COMMON_CONFIG ;

// #line 18591
typedef struct _PCI_CAPABILITIES_HEADER {
	UCHAR CapabilityID ;
	UCHAR Next ;
} PCI_CAPABILITIES_HEADER , *  PPCI_CAPABILITIES_HEADER ;

// #line 18600
typedef struct _PCI_PMC {
	UCHAR Version  : 3;
	UCHAR PMEClock  : 1;
	UCHAR Rsvd1  : 1;
	UCHAR DeviceSpecificInitialization  : 1;
	UCHAR Rsvd2  : 2;
	struct _PM_SUPPORT {
		UCHAR Rsvd2  : 1;
		UCHAR D1  : 1;
		UCHAR D2  : 1;
		UCHAR PMED0  : 1;
		UCHAR PMED1  : 1;
		UCHAR PMED2  : 1;
		UCHAR PMED3Hot  : 1;
		UCHAR PMED3Cold  : 1;
	} Support ;
} PCI_PMC , *  PPCI_PMC ;

typedef struct _PCI_PMCSR {
	USHORT PowerState  : 2;
	USHORT Rsvd1  : 6;
	USHORT PMEEnable  : 1;
	USHORT DataSelect  : 4;
	USHORT DataScale  : 2;
	USHORT PMEStatus  : 1;
} PCI_PMCSR , *  PPCI_PMCSR ;

// #line 18628
typedef struct _PCI_PMCSR_BSE {
	UCHAR Rsvd1  : 6;
	UCHAR D3HotSupportsStopClock  : 1;
	UCHAR BusPowerClockControlEnabled  : 1;
} PCI_PMCSR_BSE , *  PPCI_PMCSR_BSE ;

// #line 18635
typedef struct _PCI_PM_CAPABILITY {
	PCI_CAPABILITIES_HEADER Header ;
	union  {
		PCI_PMC Capabilities ;
		USHORT AsUSHORT ;
	} PMC ;
	union  {
		PCI_PMCSR ControlStatus ;
		USHORT AsUSHORT ;
	} PMCSR ;
	union  {
		PCI_PMCSR_BSE BridgeSupport ;
		UCHAR AsUCHAR ;
	} PMCSR_BSE ;
	UCHAR Data ;
} PCI_PM_CAPABILITY , *  PPCI_PM_CAPABILITY ;

// #line 18679
typedef struct _PCI_AGP_CAPABILITY {
	PCI_CAPABILITIES_HEADER Header ;
	USHORT Minor  : 4;
	USHORT Major  : 4;
	USHORT Rsvd1  : 8;
	struct _PCI_AGP_STATUS {
		ULONG Rate  : 3;
		ULONG Rsvd1  : 1;
		ULONG FastWrite  : 1;
		ULONG FourGB  : 1;
		ULONG Rsvd2  : 3;
		ULONG SideBandAddressing  : 1;
		ULONG Rsvd3  : 14;
		ULONG RequestQueueDepthMaximum  : 8;
	} AGPStatus ;
	struct _PCI_AGP_COMMAND {
		ULONG Rate  : 3;
		ULONG Rsvd1  : 1;
		ULONG FastWriteEnable  : 1;
		ULONG FourGBEnable  : 1;
		ULONG Rsvd2  : 2;
		ULONG AGPEnable  : 1;
		ULONG SBAEnable  : 1;
		ULONG Rsvd3  : 14;
		ULONG RequestQueueDepth  : 8;
	} AGPCommand ;
} PCI_AGP_CAPABILITY , *  PPCI_AGP_CAPABILITY ;

// #line 18720
typedef struct _PCI_MSI_CAPABILITY {
	PCI_CAPABILITIES_HEADER Header ;
	struct _PCI_MSI_MESSAGE_CONTROL {
		USHORT MSIEnable  : 1;
		USHORT MultipleMessageCapable  : 3;
		USHORT MultipleMessageEnable  : 3;
		USHORT CapableOf64Bits  : 1;
		USHORT Reserved  : 8;
	} MessageControl ;
	union  {
		struct _PCI_MSI_MESSAGE_ADDRESS {
			ULONG_PTR Reserved  : 2;
			ULONG_PTR Address  : 30;
		} Register ;
		ULONG_PTR Raw ;
	} MessageAddress ;
	union  {
		struct _PCI_MSI_64BIT_DATA {
			ULONG MessageUpperAddress ;
			USHORT MessageData ;
		} Bit64 ;
		struct _PCI_MSI_32BIT_DATA {
			USHORT MessageData ;
			ULONG Unused ;
		} Bit32 ;
	} Data ;
} PCI_MSI_CAPABILITY , *  PPCI_PCI_CAPABILITY ;

// #line 18946
typedef void ( *  PciPin2Line )(struct _BUS_HANDLER *  BusHandler ,
	struct _BUS_HANDLER *  RootHandler , PCI_SLOT_NUMBER SlotNumber ,
	PPCI_COMMON_CONFIG PciData ) ;

// #line 18954
typedef void ( *  PciLine2Pin )(struct _BUS_HANDLER *  BusHandler ,
	struct _BUS_HANDLER *  RootHandler , PCI_SLOT_NUMBER SlotNumber ,
	PPCI_COMMON_CONFIG PciNewData , PPCI_COMMON_CONFIG PciOldData ) ;

// #line 18963
typedef void ( *  PciReadWriteConfig )(struct _BUS_HANDLER *  BusHandler ,
	PCI_SLOT_NUMBER Slot , PVOID Buffer , ULONG Offset , ULONG Length ) ;

// #line 18975
typedef struct _PCIBUSDATA {
	ULONG Tag ;
	ULONG Version ;
	PciReadWriteConfig ReadConfig ;
	PciReadWriteConfig WriteConfig ;
	PciPin2Line Pin2Line ;
	PciLine2Pin Line2Pin ;
	PCI_SLOT_NUMBER ParentSlot ;
	PVOID Reserved[4] ;
} PCIBUSDATA , *  PPCIBUSDATA ;

typedef ULONG ( *  PCI_READ_WRITE_CONFIG )(PVOID Context , UCHAR BusOffset ,
	ULONG Slot , PVOID Buffer , ULONG Offset , ULONG Length ) ;

// #line 18995
typedef void ( *  PCI_PIN_TO_LINE )(PVOID Context , PPCI_COMMON_CONFIG PciData )
	;

// #line 19000
typedef void ( *  PCI_LINE_TO_PIN )(PVOID Context , PPCI_COMMON_CONFIG
	PciNewData , PPCI_COMMON_CONFIG PciOldData ) ;

// #line 19006
typedef struct _PCI_BUS_INTERFACE_STANDARD {
	USHORT Size ;
	USHORT Version ;
	PVOID Context ;
	PINTERFACE_REFERENCE InterfaceReference ;
	PINTERFACE_DEREFERENCE InterfaceDereference ;
	PCI_READ_WRITE_CONFIG ReadConfig ;
	PCI_READ_WRITE_CONFIG WriteConfig ;
	PCI_PIN_TO_LINE PinToLine ;
	PCI_LINE_TO_PIN LineToPin ;
} PCI_BUS_INTERFACE_STANDARD , *  PPCI_BUS_INTERFACE_STANDARD ;

// #line 19028
typedef BOOLEAN ( *  PPCI_IS_DEVICE_PRESENT )(USHORT VendorID , USHORT DeviceID
	, UCHAR RevisionID , USHORT SubVendorID , USHORT SubSystemID , ULONG
	Flags ) ;

// #line 19043
typedef struct _PCI_DEVICE_PRESENT_INTERFACE {
	USHORT Size ;
	USHORT Version ;
	PVOID Context ;
	PINTERFACE_REFERENCE InterfaceReference ;
	PINTERFACE_DEREFERENCE InterfaceDereference ;
	PPCI_IS_DEVICE_PRESENT IsDevicePresent ;
} PCI_DEVICE_PRESENT_INTERFACE , *  PPCI_DEVICE_PRESENT_INTERFACE ;

// #line 19066
//extern POBJECT_TYPE *  IoFileObjectType ;
//extern POBJECT_TYPE *  ExEventObjectType ;
//extern POBJECT_TYPE *  ExSemaphoreObjectType ;
// #line 19074
NTSTATUS  ZwCreateFile(PHANDLE FileHandle ,
		       ACCESS_MASK DesiredAccess , POBJECT_ATTRIBUTES ObjectAttributes ,
		       PIO_STATUS_BLOCK IoStatusBlock , PLARGE_INTEGER AllocationSize , 
		       ULONG FileAttributes , ULONG ShareAccess , ULONG CreateDisposition , 
		       ULONG CreateOptions , PVOID EaBuffer , ULONG EaLength ) ;		       
// #line 19091
NTSTATUS  ZwOpenFile(PHANDLE FileHandle ,
		      ACCESS_MASK DesiredAccess , POBJECT_ATTRIBUTES ObjectAttributes ,
		      PIO_STATUS_BLOCK IoStatusBlock , ULONG ShareAccess , ULONG OpenOptions );   
// #line 19103
NTSTATUS  ZwQueryInformationFile(HANDLE FileHandle ,
				 PIO_STATUS_BLOCK IoStatusBlock , PVOID FileInformation ,
				 ULONG Length , FILE_INFORMATION_CLASS FileInformationClass ) ;
// #line 19114
NTSTATUS  ZwSetInformationFile(HANDLE FileHandle,
			       PIO_STATUS_BLOCK IoStatusBlock , PVOID FileInformation , ULONG Length,
			       FILE_INFORMATION_CLASS FileInformationClass ) ;
// #line 19125
 NTSTATUS  ZwReadFile(HANDLE FileHandle , HANDLE
	Event , PIO_APC_ROUTINE ApcRoutine , PVOID ApcContext , PIO_STATUS_BLOCK
	IoStatusBlock , PVOID Buffer , ULONG Length , PLARGE_INTEGER ByteOffset
	, PULONG Key ) ;
// #line 19140
 NTSTATUS  ZwWriteFile(HANDLE FileHandle , HANDLE
	Event , PIO_APC_ROUTINE ApcRoutine , PVOID ApcContext , PIO_STATUS_BLOCK
	IoStatusBlock , PVOID Buffer , ULONG Length , PLARGE_INTEGER ByteOffset
	, PULONG Key ) ;
// #line 19155
 NTSTATUS  ZwClose(HANDLE Handle ) ;
// #line 19162
 NTSTATUS  ZwCreateDirectoryObject(PHANDLE
	DirectoryHandle , ACCESS_MASK DesiredAccess , POBJECT_ATTRIBUTES
	ObjectAttributes ) ;
// #line 19171
 NTSTATUS  ZwMakeTemporaryObject(HANDLE Handle ) ;
// #line 19178
 NTSTATUS  ZwOpenSection(PHANDLE SectionHandle ,
	ACCESS_MASK DesiredAccess , POBJECT_ATTRIBUTES ObjectAttributes ) ;
// #line 19187
 NTSTATUS  ZwMapViewOfSection(HANDLE SectionHandle
	, HANDLE ProcessHandle , PVOID *  BaseAddress , ULONG ZeroBits , ULONG
	CommitSize , PLARGE_INTEGER SectionOffset , PSIZE_T ViewSize ,
	SECTION_INHERIT InheritDisposition , ULONG AllocationType , ULONG
	Protect ) ;
// #line 19203
 NTSTATUS  ZwUnmapViewOfSection(HANDLE
	ProcessHandle , PVOID BaseAddress ) ;
// #line 19211
 NTSTATUS  ZwSetInformationThread(HANDLE
	ThreadHandle , THREADINFOCLASS ThreadInformationClass , PVOID
	ThreadInformation , ULONG ThreadInformationLength ) ;
// #line 19221
 NTSTATUS  ZwCreateKey(PHANDLE KeyHandle ,
	ACCESS_MASK DesiredAccess , POBJECT_ATTRIBUTES ObjectAttributes , ULONG
	TitleIndex , PUNICODE_STRING Class , ULONG CreateOptions , PULONG
	Disposition ) ;
// #line 19234

extern NTSTATUS  ZwOpenKey(PHANDLE KeyHandle ,
			   ACCESS_MASK DesiredAccess , POBJECT_ATTRIBUTES ObjectAttributes );

/* NTSTATUS  ZwOpenKey(PHANDLE KeyHandle , */
/* 		    ACCESS_MASK DesiredAccess , POBJECT_ATTRIBUTES ObjectAttributes ){ */
/*   NTSTATUS R_NONDET; */
/*   return R_NONDET; */

/*  } */
NTSTATUS  ZwDeleteKey(HANDLE KeyHandle ) ;
// TRACER: if we convert it "extern" the compiler fails
NTSTATUS  ZwEnumerateKey(HANDLE KeyHandle , ULONG Index ,
			 KEY_INFORMATION_CLASS KeyInformationClass , PVOID KeyInformation,
			 ULONG Length , PULONG ResultLength ){
  NTSTATUS R_NONDET;
  return R_NONDET;
 }
// #line 19262
 NTSTATUS  ZwEnumerateValueKey(HANDLE KeyHandle ,
	ULONG Index , KEY_VALUE_INFORMATION_CLASS KeyValueInformationClass ,
	PVOID KeyValueInformation , ULONG Length , PULONG ResultLength ) ;
// #line 19274
 NTSTATUS  ZwFlushKey(HANDLE KeyHandle ) ;
// #line 19281
 NTSTATUS  ZwQueryKey(HANDLE KeyHandle ,
	KEY_INFORMATION_CLASS KeyInformationClass , PVOID KeyInformation , ULONG
	Length , PULONG ResultLength ) ;
// #line 19292
extern NTSTATUS  ZwQueryValueKey(HANDLE KeyHandle ,
				 PUNICODE_STRING ValueName , 
				 KEY_VALUE_INFORMATION_CLASS KeyValueInformationClass , 
				 PVOID KeyValueInformation , ULONG Length ,			  
				 PULONG ResultLength );

/* NTSTATUS  ZwQueryValueKey(HANDLE KeyHandle , */
/* 			  PUNICODE_STRING ValueName ,  */
/* 			  KEY_VALUE_INFORMATION_CLASS KeyValueInformationClass ,  */
/* 			  PVOID KeyValueInformation , ULONG Length ,			    */
/* 			  PULONG ResultLength ){ */
/*   NTSTATUS R_NONDET; */
/*   return R_NONDET; */
/*  } */

extern NTSTATUS  ZwSetValueKey(HANDLE KeyHandle ,
			       PUNICODE_STRING ValueName , ULONG TitleIndex , ULONG Type , PVOID Data ,
			       ULONG DataSize );

/* NTSTATUS  ZwSetValueKey(HANDLE KeyHandle , */
/* 			 PUNICODE_STRING ValueName , ULONG TitleIndex , ULONG Type , PVOID Data , */
/* 			 ULONG DataSize ){ */
/*   NTSTATUS R_NONDET; */
/*   return R_NONDET; */
  
/*  } */
// #line 19316
 NTSTATUS  ZwOpenSymbolicLinkObject(PHANDLE
	LinkHandle , ACCESS_MASK DesiredAccess , POBJECT_ATTRIBUTES
	ObjectAttributes ) ;
// #line 19325
 NTSTATUS  ZwQuerySymbolicLinkObject(HANDLE
	LinkHandle , PUNICODE_STRING LinkTarget , PULONG ReturnedLength ) ;
// #line 19334
NTSTATUS ZwCreateTimer(PHANDLE TimerHandle , ACCESS_MASK DesiredAccess ,
	POBJECT_ATTRIBUTES ObjectAttributes , TIMER_TYPE TimerType ) ;
// #line 19342
NTSTATUS ZwOpenTimer(PHANDLE TimerHandle , ACCESS_MASK DesiredAccess ,
	POBJECT_ATTRIBUTES ObjectAttributes ) ;
// #line 19349
NTSTATUS ZwCancelTimer(HANDLE TimerHandle , PBOOLEAN CurrentState ) ;
// #line 19355
NTSTATUS ZwSetTimer(HANDLE TimerHandle , PLARGE_INTEGER DueTime ,
	PTIMER_APC_ROUTINE TimerApcRoutine , PVOID TimerContext , BOOLEAN
	WakeTimer , LONG Period , PBOOLEAN PreviousState ) ;
// #line 45 "C:/NTDDK/inc/ntddser.h"
GUID GUID_CLASS_COMPORT ;
//extern const GUID GUID_SERENUM_BUS_ENUMERATOR ;

// #line 127
typedef struct _SERIALPERF_STATS {
	ULONG ReceivedCount ;
	ULONG TransmittedCount ;
	ULONG FrameErrorCount ;
	ULONG SerialOverrunErrorCount ;
	ULONG BufferOverrunErrorCount ;
	ULONG ParityErrorCount ;
} SERIALPERF_STATS , *  PSERIALPERF_STATS ;

typedef struct _SERIALCONFIG {
	ULONG Size ;
	USHORT Version ;
	ULONG SubType ;
	ULONG ProvOffset ;
	ULONG ProviderSize ;
	WCHAR ProviderData[1] ;
} SERIALCONFIG , *  PSERIALCONFIG ;

// #line 154
typedef struct _SERIAL_LINE_CONTROL {
	UCHAR StopBits ;
	UCHAR Parity ;
	UCHAR WordLength ;
} SERIAL_LINE_CONTROL , *  PSERIAL_LINE_CONTROL ;

typedef struct _SERIAL_TIMEOUTS {
	ULONG ReadIntervalTimeout ;
	ULONG ReadTotalTimeoutMultiplier ;
	ULONG ReadTotalTimeoutConstant ;
	ULONG WriteTotalTimeoutMultiplier ;
	ULONG WriteTotalTimeoutConstant ;
} SERIAL_TIMEOUTS , *  PSERIAL_TIMEOUTS ;

// #line 175
typedef struct _SERIAL_QUEUE_SIZE {
	ULONG InSize ;
	ULONG OutSize ;
} SERIAL_QUEUE_SIZE , *  PSERIAL_QUEUE_SIZE ;

// #line 185
typedef struct _SERIAL_BAUD_RATE {
	ULONG BaudRate ;
} SERIAL_BAUD_RATE , *  PSERIAL_BAUD_RATE ;

// #line 247
typedef struct _SERIAL_CHARS {
	UCHAR EofChar ;
	UCHAR ErrorChar ;
	UCHAR BreakChar ;
	UCHAR EventChar ;
	UCHAR XonChar ;
	UCHAR XoffChar ;
} SERIAL_CHARS , *  PSERIAL_CHARS ;

// #line 284
typedef struct _SERIAL_HANDFLOW {
	ULONG ControlHandShake ;
	ULONG FlowReplace ;
	LONG XonLimit ;
	LONG XoffLimit ;
} SERIAL_HANDFLOW , *  PSERIAL_HANDFLOW ;

// #line 340
typedef struct _SERIAL_BASIC_SETTINGS {
	SERIAL_TIMEOUTS Timeouts ;
	SERIAL_HANDFLOW HandFlow ;
	ULONG RxFifo ;
	ULONG TxFifo ;
} SERIAL_BASIC_SETTINGS , *  PSERIAL_BASIC_SETTINGS ;

// #line 353
typedef struct _SERIAL_STATUS {
	ULONG Errors ;
	ULONG HoldReasons ;
	ULONG AmountInInQueue ;
	ULONG AmountInOutQueue ;
	BOOLEAN EofReceived ;
	BOOLEAN WaitForImmediate ;
} SERIAL_STATUS , *  PSERIAL_STATUS ;

// #line 433
typedef struct _SERIAL_XOFF_COUNTER {
	ULONG Timeout ;
	LONG Counter ;
	UCHAR XoffChar ;
} SERIAL_XOFF_COUNTER , *  PSERIAL_XOFF_COUNTER ;

// #line 539
typedef struct _SERIAL_COMMPROP {
	USHORT PacketLength ;
	USHORT PacketVersion ;
	ULONG ServiceMask ;
	ULONG Reserved1 ;
	ULONG MaxTxQueue ;
	ULONG MaxRxQueue ;
	ULONG MaxBaud ;
	ULONG ProvSubType ;
	ULONG ProvCapabilities ;
	ULONG SettableParams ;
	ULONG SettableBaud ;
	USHORT SettableData ;
	USHORT SettableStopParity ;
	ULONG CurrentTxQueue ;
	ULONG CurrentRxQueue ;
	ULONG ProvSpec1 ;
	ULONG ProvSpec2 ;
	WCHAR ProvChar[1] ;
} SERIAL_COMMPROP , *  PSERIAL_COMMPROP ;

// #line 631
typedef struct _SERENUM_PORT_DESC {
	ULONG Size ;
	PVOID PortHandle ;
	LARGE_INTEGER PortAddress ;
	USHORT Reserved[1] ;
} SERENUM_PORT_DESC , *  PSERENUM_PORT_DESC ;

// #line 652
typedef UCHAR ( *  PSERENUM_READPORT )(PVOID SerPortAddress ) ;

// #line 658
typedef void ( *  PSERENUM_WRITEPORT )(PVOID SerPortAddress , UCHAR Value ) ;

// #line 665
typedef enum _SERENUM_PORTION {
	SerenumFirstHalf,
	SerenumSecondHalf,
	SerenumWhole
} SERENUM_PORTION ;

typedef struct _SERENUM_PORT_PARAMETERS {
	ULONG Size ;
	PSERENUM_READPORT ReadAccessor ;
	PSERENUM_WRITEPORT WriteAccessor ;
	PVOID SerPortAddress ;
	PVOID HardwareHandle ;
	SERENUM_PORTION Portion ;
	USHORT NumberAxis ;
	USHORT Reserved[3] ;
} SERENUM_PORT_PARAMETERS , *  PSERENUM_PORT_PARAMETERS ;

// #line 28 "C:/NTDDK/inc/ddk/wdm/wmilib.h"

// #pragma once
// #line 38
typedef struct  {
	LPCGUID Guid ;
	ULONG InstanceCount ;
	ULONG Flags ;
} WMIGUIDREGINFO , *  PWMIGUIDREGINFO ;

// #line 45
typedef NTSTATUS ( *  PWMI_QUERY_REGINFO )(PDEVICE_OBJECT DeviceObject , PULONG
	RegFlags , PUNICODE_STRING InstanceName , PUNICODE_STRING * 
	RegistryPath , PUNICODE_STRING MofResourceName , PDEVICE_OBJECT *  Pdo )
	;

// #line 101
typedef NTSTATUS ( *  PWMI_QUERY_DATABLOCK )(PDEVICE_OBJECT DeviceObject , PIRP
	Irp , ULONG GuidIndex , ULONG InstanceIndex , ULONG InstanceCount ,
	PULONG InstanceLengthArray , ULONG BufferAvail , PUCHAR Buffer ) ;

// #line 162
typedef NTSTATUS ( *  PWMI_SET_DATABLOCK )(PDEVICE_OBJECT DeviceObject , PIRP
	Irp , ULONG GuidIndex , ULONG InstanceIndex , ULONG BufferSize , PUCHAR
	Buffer ) ;

// #line 206
typedef NTSTATUS ( *  PWMI_SET_DATAITEM )(PDEVICE_OBJECT DeviceObject , PIRP Irp
	, ULONG GuidIndex , ULONG InstanceIndex , ULONG DataItemId , ULONG
	BufferSize , PUCHAR Buffer ) ;

// #line 253
typedef NTSTATUS ( *  PWMI_EXECUTE_METHOD )(PDEVICE_OBJECT DeviceObject , PIRP
	Irp , ULONG GuidIndex , ULONG InstanceIndex , ULONG MethodId , ULONG
	InBufferSize , ULONG OutBufferSize , PUCHAR Buffer ) ;

// #line 306
typedef enum  {
	WmiEventControl,
	WmiDataBlockControl
} WMIENABLEDISABLECONTROL ;

// #line 312
typedef NTSTATUS ( *  PWMI_FUNCTION_CONTROL )(PDEVICE_OBJECT DeviceObject , PIRP
	Irp , ULONG GuidIndex , WMIENABLEDISABLECONTROL Function , BOOLEAN
	Enable ) ;

// #line 355
typedef struct _WMILIB_CONTEXT {
	ULONG GuidCount ;
	PWMIGUIDREGINFO GuidList ;
	PWMI_QUERY_REGINFO QueryWmiRegInfo ;
	PWMI_QUERY_DATABLOCK QueryWmiDataBlock ;
	PWMI_SET_DATABLOCK SetWmiDataBlock ;
	PWMI_SET_DATAITEM SetWmiDataItem ;
	PWMI_EXECUTE_METHOD ExecuteWmiMethod ;
	PWMI_FUNCTION_CONTROL WmiFunctionControl ;
} WMILIB_CONTEXT , *  PWMILIB_CONTEXT ;

// #line 372
extern NTSTATUS WmiCompleteRequest(PDEVICE_OBJECT DeviceObject , PIRP Irp , 
				   NTSTATUS Status , ULONG BufferUsed , CCHAR PriorityBoost );

/* NTSTATUS WmiCompleteRequest(PDEVICE_OBJECT DeviceObject , PIRP Irp ,  */
/* 			    NTSTATUS Status , ULONG BufferUsed , CCHAR PriorityBoost ){ */
/*   NTSTATUS R_NONDET; */
/*   return R_NONDET; */
/* } */

// #line 411
typedef enum  {
	IrpProcessed,
	IrpNotCompleted,
	IrpNotWmi,
	IrpForward
} SYSCTL_IRP_DISPOSITION , *  PSYSCTL_IRP_DISPOSITION ;

// #line 420

NTSTATUS WmiSystemControl(PWMILIB_CONTEXT WmiLibInfo , PDEVICE_OBJECT DeviceObject ,
			  PIRP Irp , PSYSCTL_IRP_DISPOSITION IrpDisposition ){
  NTSTATUS R_NONDET;
  return R_NONDET;
}

// #line 453
NTSTATUS WmiFireEvent(PDEVICE_OBJECT DeviceObject , LPGUID Guid , ULONG
	InstanceIndex , ULONG EventDataSize , PVOID EventData ) ;
// #line 10 "C:/NTDDK/inc/wmidata.h"
//extern const GUID MSWmi_MofData_GUID ;

// #line 13
typedef struct _MSWmi_MofData {
	ULONG Unused1 ;
	ULONG Unused2 ;
	ULONG Size ;
	ULONG Unused4 ;
	UCHAR BinaryMofData[1] ;
} MSWmi_MofData , *  PMSWmi_MofData ;

// #line 47
//extern const GUID MSWmi_ProviderInfo_GUID ;

// #line 51
typedef struct _MSWmi_ProviderInfo {
	char VariableData[1] ;
} MSWmi_ProviderInfo , *  PMSWmi_ProviderInfo ;

// #line 63
//extern const GUID MSWmi_PnPDeviceId_GUID ;

// #line 66
typedef struct _MSWmi_PnPDeviceId {
	CHAR VariableData[1] ;
} MSWmi_PnPDeviceId , *  PMSWmi_PnPDeviceId ;

// #line 80
//extern const GUID MSWmi_PnPInstanceNames_GUID ;

// #line 83
typedef struct _MSWmi_PnPInstanceNames {
	ULONG Count ;
	WCHAR InstanceNameList[1] ;
} MSWmi_PnPInstanceNames , *  PMSWmi_PnPInstanceNames ;

// #line 102
//extern const GUID MSSmBios_RawSMBiosTables_GUID ;

// #line 105
typedef struct _MSSmBios_RawSMBiosTables {
	BOOLEAN Used20CallingMethod ;
	UCHAR SmbiosMajorVersion ;
	UCHAR SmbiosMinorVersion ;
	UCHAR DmiRevision ;
	ULONG Size ;
	UCHAR SMBiosData[1] ;
} MSSmBios_RawSMBiosTables , *  PMSSmBios_RawSMBiosTables ;

// #line 144
//extern const GUID MSPower_DeviceEnable_GUID ;

// #line 147
typedef struct _MSPower_DeviceEnable {
	BOOLEAN Enable ;
} MSPower_DeviceEnable , *  PMSPower_DeviceEnable ;

// #line 162
//extern const GUID MSPower_DeviceWakeEnable_GUID ;

// #line 165
typedef struct _MSPower_DeviceWakeEnable {
	BOOLEAN Enable ;
} MSPower_DeviceWakeEnable , *  PMSPower_DeviceWakeEnable ;

// #line 179
//extern const GUID MSNdis_NetworkAddress_GUID ;

// #line 182
typedef struct _MSNdis_NetworkAddress {
	UCHAR Address[6] ;
} MSNdis_NetworkAddress , *  PMSNdis_NetworkAddress ;

// #line 196
//extern const GUID MSNdis_NetworkShortAddress_GUID ;

// #line 199
typedef struct _MSNdis_NetworkShortAddress {
	UCHAR Address[2] ;
} MSNdis_NetworkShortAddress , *  PMSNdis_NetworkShortAddress ;

// #line 213
//extern const GUID MSNdis_NetworkLinkSpeed_GUID ;

// #line 216
typedef struct _MSNdis_NetworkLinkSpeed {
	ULONG Outbound ;
	ULONG Inbound ;
} MSNdis_NetworkLinkSpeed , *  PMSNdis_NetworkLinkSpeed ;

// #line 236
//extern const GUID MSNdis_EnumerateAdapter_GUID ;

// #line 239
typedef struct _MSNdis_EnumerateAdapter {
	CHAR VariableData[1] ;
} MSNdis_EnumerateAdapter , *  PMSNdis_EnumerateAdapter ;

// #line 253
//extern const GUID MSNdis_NotifyAdapterRemoval_GUID ;

// #line 256
typedef struct _MSNdis_NotifyAdapterRemoval {
	CHAR VariableData[1] ;
} MSNdis_NotifyAdapterRemoval , *  PMSNdis_NotifyAdapterRemoval ;

// #line 270
//extern const GUID MSNdis_NotifyAdapterArrival_GUID ;

// #line 273
typedef struct _MSNdis_NotifyAdapterArrival {
	CHAR VariableData[1] ;
} MSNdis_NotifyAdapterArrival , *  PMSNdis_NotifyAdapterArrival ;

// #line 287
//extern const GUID MSNdis_NdisEnumerateVc_GUID ;

// #line 291
typedef struct _MSNdis_NdisEnumerateVc {
	char VariableData[1] ;
} MSNdis_NdisEnumerateVc , *  PMSNdis_NdisEnumerateVc ;

// #line 303
//extern const GUID MSNdis_NotifyVcRemoval_GUID ;

// #line 307
typedef struct _MSNdis_NotifyVcRemoval {
	char VariableData[1] ;
} MSNdis_NotifyVcRemoval , *  PMSNdis_NotifyVcRemoval ;

// #line 319
//extern const GUID MSNdis_NotifyVcArrival_GUID ;

// #line 323
typedef struct _MSNdis_NotifyVcArrival {
	char VariableData[1] ;
} MSNdis_NotifyVcArrival , *  PMSNdis_NotifyVcArrival ;

// #line 335
//extern const GUID MSNdis_HardwareStatus_GUID ;

// #line 338
typedef struct _MSNdis_HardwareStatus {
	ULONG NdisHardwareStatus ;
} MSNdis_HardwareStatus , *  PMSNdis_HardwareStatus ;

// #line 353
//extern const GUID MSNdis_MediaSupported_GUID ;

// #line 356
typedef struct _MSNdis_MediaSupported {
	ULONG NumberElements ;
	ULONG NdisMediaSupported[1] ;
} MSNdis_MediaSupported , *  PMSNdis_MediaSupported ;

// #line 375
//extern const GUID MSNdis_MediaInUse_GUID ;

// #line 378
typedef struct _MSNdis_MediaInUse {
	ULONG NumberElements ;
	ULONG NdisMediaInUse[1] ;
} MSNdis_MediaInUse , *  PMSNdis_MediaInUse ;

// #line 397
// extern const GUID MSNdis_MaximumLookahead_GUID ;

// #line 400
typedef struct _MSNdis_MaximumLookahead {
	ULONG NdisMaximumLookahead ;
} MSNdis_MaximumLookahead , *  PMSNdis_MaximumLookahead ;

// #line 415
// extern const GUID MSNdis_MaximumFrameSize_GUID ;

// #line 418
typedef struct _MSNdis_MaximumFrameSize {
	ULONG NdisMaximumFrameSize ;
} MSNdis_MaximumFrameSize , *  PMSNdis_MaximumFrameSize ;

// #line 433
// extern const GUID MSNdis_LinkSpeed_GUID ;

// #line 436
typedef struct _MSNdis_LinkSpeed {
	ULONG NdisLinkSpeed ;
} MSNdis_LinkSpeed , *  PMSNdis_LinkSpeed ;

// #line 451
// extern const GUID MSNdis_TransmitBufferSpace_GUID ;

// #line 454
typedef struct _MSNdis_TransmitBufferSpace {
	ULONG NdisTransmitBufferSpace ;
} MSNdis_TransmitBufferSpace , *  PMSNdis_TransmitBufferSpace ;

// #line 469
// extern const GUID MSNdis_ReceiveBufferSpace_GUID ;

// #line 472
typedef struct _MSNdis_ReceiveBufferSpace {
	ULONG NdisReceiveBufferSpace ;
} MSNdis_ReceiveBufferSpace , *  PMSNdis_ReceiveBufferSpace ;

// #line 487
// extern const GUID MSNdis_TransmitBlockSize_GUID ;

// #line 490
typedef struct _MSNdis_TransmitBlockSize {
	ULONG NdisTransmitBlockSize ;
} MSNdis_TransmitBlockSize , *  PMSNdis_TransmitBlockSize ;

// #line 505
// extern const GUID MSNdis_ReceiveBlockSize_GUID ;

// #line 508
typedef struct _MSNdis_ReceiveBlockSize {
	ULONG NdisReceiveBlockSize ;
} MSNdis_ReceiveBlockSize , *  PMSNdis_ReceiveBlockSize ;

// #line 523
// extern const GUID MSNdis_VendorID_GUID ;

// #line 526
typedef struct _MSNdis_VendorID {
	ULONG NdisVendorID ;
} MSNdis_VendorID , *  PMSNdis_VendorID ;

// #line 541
// extern const GUID MSNdis_VendorDescription_GUID ;

// #line 544
typedef struct _MSNdis_VendorDescription {
	CHAR VariableData[1] ;
} MSNdis_VendorDescription , *  PMSNdis_VendorDescription ;

// #line 558
// extern const GUID MSNdis_CurrentPacketFilter_GUID ;

// #line 561
typedef struct _MSNdis_CurrentPacketFilter {
	ULONG NdisCurrentPacketFilter ;
} MSNdis_CurrentPacketFilter , *  PMSNdis_CurrentPacketFilter ;

// #line 576
// extern const GUID MSNdis_CurrentLookahead_GUID ;

// #line 579
typedef struct _MSNdis_CurrentLookahead {
	ULONG NdisCurrentLookahead ;
} MSNdis_CurrentLookahead , *  PMSNdis_CurrentLookahead ;

// #line 594
// extern const GUID MSNdis_DriverVersion_GUID ;

// #line 597
typedef struct _MSNdis_DriverVersion {
	USHORT NdisDriverVersion ;
} MSNdis_DriverVersion , *  PMSNdis_DriverVersion ;

// #line 612
// extern const GUID MSNdis_MaximumTotalSize_GUID ;

// #line 615
typedef struct _MSNdis_MaximumTotalSize {
	ULONG NdisMaximumTotalSize ;
} MSNdis_MaximumTotalSize , *  PMSNdis_MaximumTotalSize ;

// #line 630
// extern const GUID MSNdis_MacOptions_GUID ;

// #line 633
typedef struct _MSNdis_MacOptions {
	ULONG NdisMacOptions ;
} MSNdis_MacOptions , *  PMSNdis_MacOptions ;

// #line 648
// extern const GUID MSNdis_MediaConnectStatus_GUID ;

// #line 651
typedef struct _MSNdis_MediaConnectStatus {
	ULONG NdisMediaConnectStatus ;
} MSNdis_MediaConnectStatus , *  PMSNdis_MediaConnectStatus ;

// #line 666
// extern const GUID MSNdis_MaximumSendPackets_GUID ;

// #line 669
typedef struct _MSNdis_MaximumSendPackets {
	ULONG NdisMaximumSendPackets ;
} MSNdis_MaximumSendPackets , *  PMSNdis_MaximumSendPackets ;

// #line 684
// extern const GUID MSNdis_VendorDriverVersion_GUID ;

// #line 687
typedef struct _MSNdis_VendorDriverVersion {
	ULONG NdisVendorDriverVersion ;
} MSNdis_VendorDriverVersion , *  PMSNdis_VendorDriverVersion ;

// #line 702
// extern const GUID MSNdis_TransmitsOk_GUID ;

// #line 705
typedef struct _MSNdis_TransmitsOk {
	ULONG NdisTransmitsOk ;
} MSNdis_TransmitsOk , *  PMSNdis_TransmitsOk ;

// #line 720
// extern const GUID MSNdis_ReceivesOk_GUID ;

// #line 723
typedef struct _MSNdis_ReceivesOk {
	ULONG NdisReceivesOk ;
} MSNdis_ReceivesOk , *  PMSNdis_ReceivesOk ;

// #line 738
// extern const GUID MSNdis_TransmitsError_GUID ;

// #line 741
typedef struct _MSNdis_TransmitsError {
	ULONG NdisTransmitsError ;
} MSNdis_TransmitsError , *  PMSNdis_TransmitsError ;

// #line 756
// extern const GUID MSNdis_ReceiveError_GUID ;

// #line 759
typedef struct _MSNdis_ReceiveError {
	ULONG NdisReceiveError ;
} MSNdis_ReceiveError , *  PMSNdis_ReceiveError ;

// #line 774
// extern const GUID MSNdis_ReceiveNoBuffer_GUID ;

// #line 777
typedef struct _MSNdis_ReceiveNoBuffer {
	ULONG NdisReceiveNoBuffer ;
} MSNdis_ReceiveNoBuffer , *  PMSNdis_ReceiveNoBuffer ;

// #line 792
// extern const GUID MSNdis_CoHardwareStatus_GUID ;

// #line 795
typedef struct _MSNdis_CoHardwareStatus {
	ULONG NdisCoHardwareStatus ;
} MSNdis_CoHardwareStatus , *  PMSNdis_CoHardwareStatus ;

// #line 810
// extern const GUID MSNdis_CoMediaSupported_GUID ;

// #line 813
typedef struct _MSNdis_CoMediaSupported {
	ULONG NumberElements ;
	ULONG NdisCoMediaSupported[1] ;
} MSNdis_CoMediaSupported , *  PMSNdis_CoMediaSupported ;

// #line 832
// extern const GUID MSNdis_CoMediaInUse_GUID ;

// #line 835
typedef struct _MSNdis_CoMediaInUse {
	ULONG NumberElements ;
	ULONG NdisCoMediaInUse[1] ;
} MSNdis_CoMediaInUse , *  PMSNdis_CoMediaInUse ;

// #line 854
// extern const GUID MSNdis_CoLinkSpeed_GUID ;

// #line 857
typedef struct _MSNdis_CoLinkSpeed {
	MSNdis_NetworkLinkSpeed NdisCoLinkSpeed ;
} MSNdis_CoLinkSpeed , *  PMSNdis_CoLinkSpeed ;

// #line 872
// extern const GUID MSNdis_CoVendorId_GUID ;

// #line 875
typedef struct _MSNdis_CoVendorId {
	ULONG NdisCoVendorID ;
} MSNdis_CoVendorId , *  PMSNdis_CoVendorId ;

// #line 890
// extern const GUID MSNdis_CoVendorDescription_GUID ;

// #line 893
typedef struct _MSNdis_CoVendorDescription {
	CHAR VariableData[1] ;
} MSNdis_CoVendorDescription , *  PMSNdis_CoVendorDescription ;

// #line 907
// extern const GUID MSNdis_CoDriverVersion_GUID ;

// #line 910
typedef struct _MSNdis_CoDriverVersion {
	USHORT NdisCoDriverVersion ;
} MSNdis_CoDriverVersion , *  PMSNdis_CoDriverVersion ;

// #line 925
// extern const GUID MSNdis_CoMacOptions_GUID ;

// #line 928
typedef struct _MSNdis_CoMacOptions {
	ULONG NdisCoMacOptions ;
} MSNdis_CoMacOptions , *  PMSNdis_CoMacOptions ;

// #line 943
// extern const GUID MSNdis_CoMediaConnectStatus_GUID ;

// #line 946
typedef struct _MSNdis_CoMediaConnectStatus {
	ULONG NdisCoMediaConnectStatus ;
} MSNdis_CoMediaConnectStatus , *  PMSNdis_CoMediaConnectStatus ;

// #line 961
// extern const GUID MSNdis_CoVendorDriverVersion_GUID ;

// #line 964
typedef struct _MSNdis_CoVendorDriverVersion {
	ULONG NdisCoVendorDriverVersion ;
} MSNdis_CoVendorDriverVersion , *  PMSNdis_CoVendorDriverVersion ;

// #line 979
// extern const GUID MSNdis_CoMinimumLinkSpeed_GUID ;

// #line 982
typedef struct _MSNdis_CoMinimumLinkSpeed {
	MSNdis_NetworkLinkSpeed NdisCoMinimumLinkSpeed ;
} MSNdis_CoMinimumLinkSpeed , *  PMSNdis_CoMinimumLinkSpeed ;

// #line 997
// extern const GUID MSNdis_CoTransmitPdusOk_GUID ;

// #line 1000
typedef struct _MSNdis_CoTransmitPdusOk {
	ULONG NdisCoTransmitPdusOk ;
} MSNdis_CoTransmitPdusOk , *  PMSNdis_CoTransmitPdusOk ;

// #line 1015
// extern const GUID MSNdis_CoReceivePdusOk_GUID ;

// #line 1018
typedef struct _MSNdis_CoReceivePdusOk {
	ULONG NdisCoReceivePdusOk ;
} MSNdis_CoReceivePdusOk , *  PMSNdis_CoReceivePdusOk ;

// #line 1033
// extern const GUID MSNdis_CoTransmitPduErrors_GUID ;

// #line 1036
typedef struct _MSNdis_CoTransmitPduErrors {
	ULONG NdisCoTransmitPduErrors ;
} MSNdis_CoTransmitPduErrors , *  PMSNdis_CoTransmitPduErrors ;

// #line 1051
// extern const GUID MSNdis_CoReceivePduErrors_GUID ;

// #line 1054
typedef struct _MSNdis_CoReceivePduErrors {
	ULONG NdisCoReceivePduErrors ;
} MSNdis_CoReceivePduErrors , *  PMSNdis_CoReceivePduErrors ;

// #line 1069
// extern const GUID MSNdis_CoReceivePdusNoBuffer_GUID ;

// #line 1072
typedef struct _MSNdis_CoReceivePdusNoBuffer {
	ULONG NdisCoReceivePdusNoBuffer ;
} MSNdis_CoReceivePdusNoBuffer , *  PMSNdis_CoReceivePdusNoBuffer ;

// #line 1087
// extern const GUID MSNdis_AtmSupportedVcRates_GUID ;

// #line 1090
typedef struct _MSNdis_AtmSupportedVcRates {
	ULONG MinCellRate ;
	ULONG MaxCellRate ;
} MSNdis_AtmSupportedVcRates , *  PMSNdis_AtmSupportedVcRates ;

// #line 1110
// extern const GUID MSNdis_AtmSupportedServiceCategory_GUID ;

// #line 1113
typedef struct _MSNdis_AtmSupportedServiceCategory {
	ULONG NdisAtmSupportedServiceCategory ;
} MSNdis_AtmSupportedServiceCategory , *  PMSNdis_AtmSupportedServiceCategory ;

// #line 1128
// extern const GUID MSNdis_AtmSupportedAalTypes_GUID ;

// #line 1131
typedef struct _MSNdis_AtmSupportedAalTypes {
	ULONG NdisAtmSupportedAalTypes ;
} MSNdis_AtmSupportedAalTypes , *  PMSNdis_AtmSupportedAalTypes ;

// #line 1146
// extern const GUID MSNdis_AtmHardwareCurrentAddress_GUID ;

// #line 1149
typedef struct _MSNdis_AtmHardwareCurrentAddress {
	MSNdis_NetworkAddress NdisAtmHardwareCurrentAddress ;
} MSNdis_AtmHardwareCurrentAddress , *  PMSNdis_AtmHardwareCurrentAddress ;

// #line 1164
// extern const GUID MSNdis_AtmMaxActiveVcs_GUID ;

// #line 1167
typedef struct _MSNdis_AtmMaxActiveVcs {
	ULONG NdisAtmMaxActiveVcs ;
} MSNdis_AtmMaxActiveVcs , *  PMSNdis_AtmMaxActiveVcs ;

// #line 1182
// extern const GUID MSNdis_AtmMaxActiveVciBits_GUID ;

// #line 1185
typedef struct _MSNdis_AtmMaxActiveVciBits {
	ULONG NdisAtmMaxActiveVciBits ;
} MSNdis_AtmMaxActiveVciBits , *  PMSNdis_AtmMaxActiveVciBits ;

// #line 1200
// extern const GUID MSNdis_AtmMaxActiveVpiBits_GUID ;

// #line 1203
typedef struct _MSNdis_AtmMaxActiveVpiBits {
	ULONG NdisAtmMaxActiveVpiBits ;
} MSNdis_AtmMaxActiveVpiBits , *  PMSNdis_AtmMaxActiveVpiBits ;

// #line 1218
// extern const GUID MSNdis_AtmMaxAal0PacketSize_GUID ;

// #line 1221
typedef struct _MSNdis_AtmMaxAal0PacketSize {
	ULONG NdisAtmMaxAal0PacketSize ;
} MSNdis_AtmMaxAal0PacketSize , *  PMSNdis_AtmMaxAal0PacketSize ;

// #line 1236
// extern const GUID MSNdis_AtmMaxAal1PacketSize_GUID ;

// #line 1239
typedef struct _MSNdis_AtmMaxAal1PacketSize {
	ULONG NdisAtmMaxAal1PacketSize ;
} MSNdis_AtmMaxAal1PacketSize , *  PMSNdis_AtmMaxAal1PacketSize ;

// #line 1254
// extern const GUID MSNdis_AtmMaxAal34PacketSize_GUID ;

// #line 1257
typedef struct _MSNdis_AtmMaxAal34PacketSize {
	ULONG NdisAtmMaxAal34PacketSize ;
} MSNdis_AtmMaxAal34PacketSize , *  PMSNdis_AtmMaxAal34PacketSize ;

// #line 1272
// extern const GUID MSNdis_AtmMaxAal5PacketSize_GUID ;

// #line 1275
typedef struct _MSNdis_AtmMaxAal5PacketSize {
	ULONG NdisAtmMaxAal5PacketSize ;
} MSNdis_AtmMaxAal5PacketSize , *  PMSNdis_AtmMaxAal5PacketSize ;

// #line 1290
// extern const GUID MSNdis_AtmReceiveCellsOk_GUID ;

// #line 1293
typedef struct _MSNdis_AtmReceiveCellsOk {
	ULONGLONG NdisAtmReceiveCellsOk ;
} MSNdis_AtmReceiveCellsOk , *  PMSNdis_AtmReceiveCellsOk ;

// #line 1308
// extern const GUID MSNdis_AtmTransmitCellsOk_GUID ;

// #line 1311
typedef struct _MSNdis_AtmTransmitCellsOk {
	ULONGLONG NdisAtmTransmitCellsOk ;
} MSNdis_AtmTransmitCellsOk , *  PMSNdis_AtmTransmitCellsOk ;

// #line 1326
// extern const GUID MSNdis_AtmReceiveCellsDropped_GUID ;

// #line 1329
typedef struct _MSNdis_AtmReceiveCellsDropped {
	ULONGLONG NdisAtmReceiveCellsDropped ;
} MSNdis_AtmReceiveCellsDropped , *  PMSNdis_AtmReceiveCellsDropped ;

// #line 1344
// extern const GUID MSNdis_EthernetPermanentAddress_GUID ;

// #line 1347
typedef struct _MSNdis_EthernetPermanentAddress {
	MSNdis_NetworkAddress NdisPermanentAddress ;
} MSNdis_EthernetPermanentAddress , *  PMSNdis_EthernetPermanentAddress ;

// #line 1362
// extern const GUID MSNdis_EthernetCurrentAddress_GUID ;

// #line 1365
typedef struct _MSNdis_EthernetCurrentAddress {
	MSNdis_NetworkAddress NdisCurrentAddress ;
} MSNdis_EthernetCurrentAddress , *  PMSNdis_EthernetCurrentAddress ;

// #line 1380
// extern const GUID MSNdis_EthernetMulticastList_GUID ;

// #line 1383
typedef struct _MSNdis_EthernetMulticastList {
	ULONG NumberElements ;
	MSNdis_NetworkAddress NdisMulticastList[1] ;
} MSNdis_EthernetMulticastList , *  PMSNdis_EthernetMulticastList ;

// #line 1402
// extern const GUID MSNdis_EthernetMaximumMulticastListSize_GUID ;

// #line 1405
typedef struct _MSNdis_EthernetMaximumMulticastListSize {
	ULONG NdisEthernetMaximumMulticastListSize ;
} MSNdis_EthernetMaximumMulticastListSize , * 
	PMSNdis_EthernetMaximumMulticastListSize ;

// #line 1420
// extern const GUID MSNdis_EthernetMacOptions_GUID ;

// #line 1423
typedef struct _MSNdis_EthernetMacOptions {
	ULONG NdisEthernetMacOptions ;
} MSNdis_EthernetMacOptions , *  PMSNdis_EthernetMacOptions ;

// #line 1438
// extern const GUID MSNdis_EthernetReceiveErrorAlignment_GUID ;

// #line 1441
typedef struct _MSNdis_EthernetReceiveErrorAlignment {
	ULONG NdisEthernetReceiveErrorAlignment ;
} MSNdis_EthernetReceiveErrorAlignment , * 
	PMSNdis_EthernetReceiveErrorAlignment ;

// #line 1456
// extern const GUID MSNdis_EthernetOneTransmitCollision_GUID ;

// #line 1459
typedef struct _MSNdis_EthernetOneTransmitCollision {
	ULONG NdisEthernetOneTransmitCollision ;
} MSNdis_EthernetOneTransmitCollision , *  PMSNdis_EthernetOneTransmitCollision
	;

// #line 1474
// extern const GUID MSNdis_EthernetMoreTransmitCollisions_GUID ;

// #line 1477
typedef struct _MSNdis_EthernetMoreTransmitCollisions {
	ULONG NdisEthernetMoreTransmitCollisions ;
} MSNdis_EthernetMoreTransmitCollisions , * 
	PMSNdis_EthernetMoreTransmitCollisions ;

// #line 1492
// extern const GUID MSNdis_TokenRingPermanentAddress_GUID ;

// #line 1495
typedef struct _MSNdis_TokenRingPermanentAddress {
	MSNdis_NetworkAddress NdisPermanentAddress ;
} MSNdis_TokenRingPermanentAddress , *  PMSNdis_TokenRingPermanentAddress ;

// #line 1510
// extern const GUID MSNdis_TokenRingCurrentAddress_GUID ;

// #line 1513
typedef struct _MSNdis_TokenRingCurrentAddress {
	MSNdis_NetworkAddress NdisCurrentAddress ;
} MSNdis_TokenRingCurrentAddress , *  PMSNdis_TokenRingCurrentAddress ;

// #line 1528
// extern const GUID MSNdis_TokenRingCurrentFunctional_GUID ;

// #line 1531
typedef struct _MSNdis_TokenRingCurrentFunctional {
	ULONG NdisTokenRingCurrentFunctional ;
} MSNdis_TokenRingCurrentFunctional , *  PMSNdis_TokenRingCurrentFunctional ;

// #line 1546
// extern const GUID MSNdis_TokenRingCurrentGroup_GUID ;

// #line 1549
typedef struct _MSNdis_TokenRingCurrentGroup {
	ULONG NdisTokenRingCurrentGroup ;
} MSNdis_TokenRingCurrentGroup , *  PMSNdis_TokenRingCurrentGroup ;

// #line 1564
// extern const GUID MSNdis_TokenRingLastOpenStatus_GUID ;

// #line 1567
typedef struct _MSNdis_TokenRingLastOpenStatus {
	ULONG NdisTokenRingLastOpenStatus ;
} MSNdis_TokenRingLastOpenStatus , *  PMSNdis_TokenRingLastOpenStatus ;

// #line 1582
// extern const GUID MSNdis_TokenRingCurrentRingStatus_GUID ;

// #line 1585
typedef struct _MSNdis_TokenRingCurrentRingStatus {
	ULONG NdisTokenRingCurrentRingStatus ;
} MSNdis_TokenRingCurrentRingStatus , *  PMSNdis_TokenRingCurrentRingStatus ;

// #line 1600
// extern const GUID MSNdis_TokenRingCurrentRingState_GUID ;

// #line 1603
typedef struct _MSNdis_TokenRingCurrentRingState {
	ULONG NdisTokenRingCurrentRingState ;
} MSNdis_TokenRingCurrentRingState , *  PMSNdis_TokenRingCurrentRingState ;

// #line 1618
// extern const GUID MSNdis_TokenRingLineErrors_GUID ;

// #line 1621
typedef struct _MSNdis_TokenRingLineErrors {
	ULONG NdisTokenRingLineErrors ;
} MSNdis_TokenRingLineErrors , *  PMSNdis_TokenRingLineErrors ;

// #line 1636
// extern const GUID MSNdis_TokenRingLostFrames_GUID ;

// #line 1639
typedef struct _MSNdis_TokenRingLostFrames {
	ULONG NdisTokenRingLostFrames ;
} MSNdis_TokenRingLostFrames , *  PMSNdis_TokenRingLostFrames ;

// #line 1654
// extern const GUID MSNdis_FddiLongPermanentAddress_GUID ;

// #line 1657
typedef struct _MSNdis_FddiLongPermanentAddress {
	MSNdis_NetworkAddress NdisPermanentAddress ;
} MSNdis_FddiLongPermanentAddress , *  PMSNdis_FddiLongPermanentAddress ;

// #line 1672
// extern const GUID MSNdis_FddiLongCurrentAddress_GUID ;

// #line 1675
typedef struct _MSNdis_FddiLongCurrentAddress {
	MSNdis_NetworkAddress NdisCurrentAddress ;
} MSNdis_FddiLongCurrentAddress , *  PMSNdis_FddiLongCurrentAddress ;

// #line 1690
// extern const GUID MSNdis_FddiLongMulticastList_GUID ;

// #line 1693
typedef struct _MSNdis_FddiLongMulticastList {
	ULONG NumberElements ;
	MSNdis_NetworkAddress NdisMulticastList[1] ;
} MSNdis_FddiLongMulticastList , *  PMSNdis_FddiLongMulticastList ;

// #line 1712
// extern const GUID MSNdis_FddiLongMaximumListSize_GUID ;

// #line 1715
typedef struct _MSNdis_FddiLongMaximumListSize {
	ULONG NdisFddiLongMaximumListSize ;
} MSNdis_FddiLongMaximumListSize , *  PMSNdis_FddiLongMaximumListSize ;

// #line 1730
// extern const GUID MSNdis_FddiShortPermanentAddress_GUID ;

// #line 1733
typedef struct _MSNdis_FddiShortPermanentAddress {
	MSNdis_NetworkShortAddress NdisPermanentAddress ;
} MSNdis_FddiShortPermanentAddress , *  PMSNdis_FddiShortPermanentAddress ;

// #line 1748
// extern const GUID MSNdis_FddiShortCurrentAddress_GUID ;

// #line 1751
typedef struct _MSNdis_FddiShortCurrentAddress {
	MSNdis_NetworkShortAddress NdisCurrentAddress ;
} MSNdis_FddiShortCurrentAddress , *  PMSNdis_FddiShortCurrentAddress ;

// #line 1766
// extern const GUID MSNdis_FddiShortMulticastList_GUID ;

// #line 1769
typedef struct _MSNdis_FddiShortMulticastList {
	ULONG NumberElements ;
	MSNdis_NetworkShortAddress NdisMulticastList[1] ;
} MSNdis_FddiShortMulticastList , *  PMSNdis_FddiShortMulticastList ;

// #line 1788
// extern const GUID MSNdis_FddiShortMaximumListSize_GUID ;

// #line 1791
typedef struct _MSNdis_FddiShortMaximumListSize {
	ULONG NdisFddiShortMaximumListSize ;
} MSNdis_FddiShortMaximumListSize , *  PMSNdis_FddiShortMaximumListSize ;

// #line 1806
// extern const GUID MSNdis_FddiAttachmentType_GUID ;

// #line 1809
typedef struct _MSNdis_FddiAttachmentType {
	ULONG NdisFddiAttachmentType ;
} MSNdis_FddiAttachmentType , *  PMSNdis_FddiAttachmentType ;

// #line 1824
// extern const GUID MSNdis_FddiUpstreamNodeLong_GUID ;

// #line 1827
typedef struct _MSNdis_FddiUpstreamNodeLong {
	MSNdis_NetworkAddress NdisFddiUpstreamNodeLong ;
} MSNdis_FddiUpstreamNodeLong , *  PMSNdis_FddiUpstreamNodeLong ;

// #line 1842
// extern const GUID MSNdis_FddiDownstreamNodeLong_GUID ;

// #line 1845
typedef struct _MSNdis_FddiDownstreamNodeLong {
	MSNdis_NetworkAddress NdisFddiDownstreamNodeLong ;
} MSNdis_FddiDownstreamNodeLong , *  PMSNdis_FddiDownstreamNodeLong ;

// #line 1860
// extern const GUID MSNdis_FddiFrameErrors_GUID ;

// #line 1863
typedef struct _MSNdis_FddiFrameErrors {
	ULONG NdisFddiFrameErrors ;
} MSNdis_FddiFrameErrors , *  PMSNdis_FddiFrameErrors ;

// #line 1878
// extern const GUID MSNdis_FddiFramesLost_GUID ;

// #line 1881
typedef struct _MSNdis_FddiFramesLost {
	ULONG NdisFddiFramesLost ;
} MSNdis_FddiFramesLost , *  PMSNdis_FddiFramesLost ;

// #line 1896
// extern const GUID MSNdis_FddiRingManagmentState_GUID ;

// #line 1899
typedef struct _MSNdis_FddiRingManagmentState {
	ULONG NdisFddiRingManagmentState ;
} MSNdis_FddiRingManagmentState , *  PMSNdis_FddiRingManagmentState ;

// #line 1914
// extern const GUID MSNdis_FddiLctFailures_GUID ;

// #line 1917
typedef struct _MSNdis_FddiLctFailures {
	ULONG NdisFddiLctFailures ;
} MSNdis_FddiLctFailures , *  PMSNdis_FddiLctFailures ;

// #line 1932
// extern const GUID MSNdis_FddiLemRejects_GUID ;

// #line 1935
typedef struct _MSNdis_FddiLemRejects {
	ULONG NdisFddiLemRejects ;
} MSNdis_FddiLemRejects , *  PMSNdis_FddiLemRejects ;

// #line 1950
// extern const GUID MSNdis_FddiLConnectionState_GUID ;

// #line 1953
typedef struct _MSNdis_FddiLConnectionState {
	ULONG NdisFddiLConnectionState ;
} MSNdis_FddiLConnectionState , *  PMSNdis_FddiLConnectionState ;

// #line 1968
// extern const GUID MSNdis_StatusResetStart_GUID ;

// #line 1972
typedef struct _MSNdis_StatusResetStart {
	char VariableData[1] ;
} MSNdis_StatusResetStart , *  PMSNdis_StatusResetStart ;

// #line 1984
// extern const GUID MSNdis_StatusResetEnd_GUID ;

// #line 1988
typedef struct _MSNdis_StatusResetEnd {
	char VariableData[1] ;
} MSNdis_StatusResetEnd , *  PMSNdis_StatusResetEnd ;

// #line 2000
// extern const GUID MSNdis_StatusMediaConnect_GUID ;

// #line 2004
typedef struct _MSNdis_StatusMediaConnect {
	char VariableData[1] ;
} MSNdis_StatusMediaConnect , *  PMSNdis_StatusMediaConnect ;

// #line 2016
// extern const GUID MSNdis_StatusMediaDisconnect_GUID ;

// #line 2020
typedef struct _MSNdis_StatusMediaDisconnect {
	char VariableData[1] ;
} MSNdis_StatusMediaDisconnect , *  PMSNdis_StatusMediaDisconnect ;

// #line 2032
// extern const GUID MSNdis_StatusMediaSpecificIndication_GUID ;

// #line 2035
typedef struct _MSNdis_StatusMediaSpecificIndication {
	ULONG NumberElements ;
	UCHAR NdisStatusMediaSpecificIndication[1] ;
} MSNdis_StatusMediaSpecificIndication , * 
	PMSNdis_StatusMediaSpecificIndication ;

// #line 2054
// extern const GUID MSNdis_StatusLinkSpeedChange_GUID ;

// #line 2057
typedef struct _MSNdis_StatusLinkSpeedChange {
	MSNdis_NetworkLinkSpeed NdisStatusLinkSpeedChange ;
} MSNdis_StatusLinkSpeedChange , *  PMSNdis_StatusLinkSpeedChange ;

// #line 2072
// extern const GUID MSNdis_StatusProtocolBind_GUID ;

// #line 2075
typedef struct _MSNdis_StatusProtocolBind {
	CHAR VariableData[1] ;
} MSNdis_StatusProtocolBind , *  PMSNdis_StatusProtocolBind ;

// #line 2089
// extern const GUID MSNdis_StatusProtocolUnbind_GUID ;

// #line 2092
typedef struct _MSNdis_StatusProtocolUnbind {
	CHAR VariableData[1] ;
} MSNdis_StatusProtocolUnbind , *  PMSNdis_StatusProtocolUnbind ;

// #line 2106
// extern const GUID MSKeyboard_PortInformation_GUID ;

// #line 2109
typedef struct _KEYBOARD_PORT_WMI_STD_DATA {
	ULONG ConnectorType ;
	ULONG DataQueueSize ;
	ULONG ErrorCount ;
	ULONG FunctionKeys ;
	ULONG Indicators ;
} KEYBOARD_PORT_WMI_STD_DATA , *  PKEYBOARD_PORT_WMI_STD_DATA ;

// #line 2149
// extern const GUID MSMouse_PortInformation_GUID ;

// #line 2152
typedef struct _POINTER_PORT_WMI_STD_DATA {
	ULONG ConnectorType ;
	ULONG DataQueueSize ;
	ULONG ErrorCount ;
	ULONG Buttons ;
	ULONG HardwareType ;
} POINTER_PORT_WMI_STD_DATA , *  PPOINTER_PORT_WMI_STD_DATA ;

// #line 2202
// extern const GUID MSMouse_ClassInformation_GUID ;

// #line 2205
typedef struct _MSMouse_ClassInformation {
	ULONGLONG DeviceId ;
} MSMouse_ClassInformation , *  PMSMouse_ClassInformation ;

// #line 2220
// extern const GUID MSKeyboard_ClassInformation_GUID ;

// #line 2223
typedef struct _MSKeyboard_ClassInformation {
	ULONGLONG DeviceId ;
} MSKeyboard_ClassInformation , *  PMSKeyboard_ClassInformation ;

// #line 2238
// extern const GUID MSAcpi_ThermalZoneTemperature_GUID ;

// #line 2241
typedef struct _MSAcpi_ThermalZoneTemperature {
	ULONG ThermalStamp ;
	ULONG ThermalConstant1 ;
	ULONG ThermalConstant2 ;
	ULONG Reserved ;
	ULONG SamplingPeriod ;
	ULONG CurrentTemperature ;
	ULONG PassiveTripPoint ;
	ULONG CriticalTripPoint ;
	ULONG ActiveTripPointCount ;
	ULONG ActiveTripPoint[10] ;
} MSAcpi_ThermalZoneTemperature , *  PMSAcpi_ThermalZoneTemperature ;

// #line 2301
// extern const GUID MSDiskDriver_Geometry_GUID ;

// #line 2304
typedef struct _WMI_DISK_GEOMETRY {
	LONGLONG Cylinders ;
	ULONG MediaType ;
	ULONG TracksPerCylinder ;
	ULONG SectorsPerTrack ;
	ULONG BytesPerSector ;
} WMI_DISK_GEOMETRY , *  PWMI_DISK_GEOMETRY ;

// #line 2339
// extern const GUID MSDiskDriver_PerformanceData_GUID ;

// #line 2342
typedef struct _WMI_DISK_PERFORMANCE {
	LONGLONG BytesRead ;
	LONGLONG BytesWritten ;
	LONGLONG ReadTime ;
	LONGLONG WriteTime ;
	LONGLONG IdleTime ;
	ULONG ReadCount ;
	ULONG WriteCount ;
	ULONG QueueDepth ;
	ULONG SplitCount ;
	LONGLONG QueryTime ;
	ULONG StorageDeviceNumber ;
	USHORT StorageManagerName[8] ;
} WMI_DISK_PERFORMANCE , *  PWMI_DISK_PERFORMANCE ;

// #line 2412
// extern const GUID MSDiskDriver_Performance_GUID ;

// #line 2415
typedef struct _MSDiskDriver_Performance {
	WMI_DISK_PERFORMANCE PerfData ;
	CHAR VariableData[1] ;
} MSDiskDriver_Performance , *  PMSDiskDriver_Performance ;

// #line 2434
// extern const GUID MSStorageDriver_FailurePredictStatus_GUID ;

// #line 2437
typedef struct _STORAGE_FAILURE_PREDICT_STATUS {
	ULONG Reason ;
	BOOLEAN PredictFailure ;
} STORAGE_FAILURE_PREDICT_STATUS , *  PSTORAGE_FAILURE_PREDICT_STATUS ;

// #line 2457
// extern const GUID MSStorageDriver_FailurePredictData_GUID ;

// #line 2460
typedef struct _STORAGE_FAILURE_PREDICT_DATA {
	ULONG Length ;
	UCHAR VendorSpecific[512] ;
} STORAGE_FAILURE_PREDICT_DATA , *  PSTORAGE_FAILURE_PREDICT_DATA ;

// #line 2480
// extern const GUID MSStorageDriver_FailurePredictEvent_GUID ;

// #line 2483
typedef struct _STORAGE_FAILURE_PREDICT_EVENT {
	ULONG Length ;
	UCHAR VendorSpecific[1] ;
} STORAGE_FAILURE_PREDICT_EVENT , *  PSTORAGE_FAILURE_PREDICT_EVENT ;

// #line 2502
// extern const GUID MSStorageDriver_FailurePredictFunction_GUID ;

// #line 2513
typedef struct _STORAGE_FAILURE_PREDICT_FUNCTION {
	char VariableData[1] ;
} STORAGE_FAILURE_PREDICT_FUNCTION , *  PSTORAGE_FAILURE_PREDICT_FUNCTION ;

// #line 2525
// extern const GUID MSIde_PortDeviceInfo_GUID ;

// #line 2528
typedef struct _MSIde_PortDeviceInfo {
	UCHAR Bus ;
	UCHAR Target ;
	UCHAR Lun ;
} MSIde_PortDeviceInfo , *  PMSIde_PortDeviceInfo ;

// #line 2553
// extern const GUID MSSerial_PortName_GUID ;

// #line 2556
typedef struct _MSSerial_PortName {
	CHAR VariableData[1] ;
} MSSerial_PortName , *  PMSSerial_PortName ;

// #line 2570
// extern const GUID MSSerial_CommInfo_GUID ;

// #line 2573
typedef struct _SERIAL_WMI_COMM_DATA {
	ULONG BaudRate ;
	ULONG BitsPerByte ;
	ULONG Parity ;
	BOOLEAN ParityCheckEnable ;
	ULONG StopBits ;
	ULONG XoffCharacter ;
	ULONG XoffXmitThreshold ;
	ULONG XonCharacter ;
	ULONG XonXmitThreshold ;
	ULONG MaximumBaudRate ;
	ULONG MaximumOutputBufferSize ;
	ULONG MaximumInputBufferSize ;
	BOOLEAN Support16BitMode ;
	BOOLEAN SupportDTRDSR ;
	BOOLEAN SupportIntervalTimeouts ;
	BOOLEAN SupportParityCheck ;
	BOOLEAN SupportRTSCTS ;
	BOOLEAN SupportXonXoff ;
	BOOLEAN SettableBaudRate ;
	BOOLEAN SettableDataBits ;
	BOOLEAN SettableFlowControl ;
	BOOLEAN SettableParity ;
	BOOLEAN SettableParityCheck ;
	BOOLEAN SettableStopBits ;
	BOOLEAN IsBusy ;
} SERIAL_WMI_COMM_DATA , *  PSERIAL_WMI_COMM_DATA ;

// #line 2720
// extern const GUID MSSerial_HardwareConfiguration_GUID ;

// #line 2723
typedef struct _SERIAL_WMI_HW_DATA {
	ULONG IrqNumber ;
	ULONG IrqVector ;
	ULONG IrqLevel ;
	ULONG IrqAffinityMask ;
	ULONG InterruptType ;
	ULONGLONG BaseIOAddress ;
} SERIAL_WMI_HW_DATA , *  PSERIAL_WMI_HW_DATA ;

// #line 2767
// extern const GUID MSSerial_PerformanceInformation_GUID ;

// #line 2770
typedef struct _SERIAL_WMI_PERF_DATA {
	ULONG ReceivedCount ;
	ULONG TransmittedCount ;
	ULONG FrameErrorCount ;
	ULONG SerialOverrunErrorCount ;
	ULONG BufferOverrunErrorCount ;
	ULONG ParityErrorCount ;
} SERIAL_WMI_PERF_DATA , *  PSERIAL_WMI_PERF_DATA ;

// #line 2810
// extern const GUID MSSerial_CommProperties_GUID ;

// #line 2813
typedef struct _SERIAL_WMI_COMMPROP {
	USHORT wPacketLength ;
	USHORT wPacketVersion ;
	ULONG dwServiceMask ;
	ULONG dwReserved1 ;
	ULONG dwMaxTxQueue ;
	ULONG dwMaxRxQueue ;
	ULONG dwMaxBaud ;
	ULONG dwProvSubType ;
	ULONG dwProvCapabilities ;
	ULONG dwSettableParams ;
	ULONG dwSettableBaud ;
	USHORT wSettableData ;
	USHORT wSettableStopParity ;
	ULONG dwCurrentTxQueue ;
	ULONG dwCurrentRxQueue ;
	ULONG dwProvSpec1 ;
	ULONG dwProvSpec2 ;
	ULONG dwProvCharSize ;
	UCHAR wcProvChar[1] ;
} SERIAL_WMI_COMMPROP , *  PSERIAL_WMI_COMMPROP ;

// #line 2917
// extern const GUID MSParallel_AllocFreeCounts_GUID ;

// #line 2920
typedef struct _PARPORT_WMI_ALLOC_FREE_COUNTS {
	ULONG PortAllocates ;
	ULONG PortFrees ;
} PARPORT_WMI_ALLOC_FREE_COUNTS , *  PPARPORT_WMI_ALLOC_FREE_COUNTS ;

// #line 2940
// extern const GUID MSParallel_DeviceBytesTransferred_GUID ;

// #line 2943
typedef struct _PARALLEL_WMI_LOG_INFO {
	ULONG Flags1 ;
	ULONG Flags2 ;
	ULONG spare[2] ;
	LONGLONG SppWriteCount ;
	LONGLONG NibbleReadCount ;
	LONGLONG BoundedEcpWriteCount ;
	LONGLONG BoundedEcpReadCount ;
	LONGLONG HwEcpWriteCount ;
	LONGLONG HwEcpReadCount ;
	LONGLONG SwEcpWriteCount ;
	LONGLONG SwEcpReadCount ;
	LONGLONG HwEppWriteCount ;
	LONGLONG HwEppReadCount ;
	LONGLONG SwEppWriteCount ;
	LONGLONG SwEppReadCount ;
	LONGLONG ByteReadCount ;
	LONGLONG ChannelNibbleReadCount ;
} PARALLEL_WMI_LOG_INFO , *  PPARALLEL_WMI_LOG_INFO ;

// #line 3038
// extern const GUID MSRedbook_DriverInformationGuid ;

// #line 3041
typedef struct _REDBOOK_WMI_STD_DATA {
	ULONG NumberOfBuffers ;
	ULONG SectorsPerRead ;
	ULONG SectorsPerReadMask ;
	ULONG MaximumSectorsPerRead ;
	BOOLEAN PlayEnabled ;
	BOOLEAN CDDASupported ;
	BOOLEAN CDDAAccurate ;
	BOOLEAN Reserved1 ;
} REDBOOK_WMI_STD_DATA , *  PREDBOOK_WMI_STD_DATA ;

// #line 3091
// extern const GUID MSRedbook_PerformanceGuid ;

// #line 3094
typedef struct _REDBOOK_WMI_PERF_DATA {
	LONGLONG TimeReadDelay ;
	LONGLONG TimeReading ;
	LONGLONG TimeStreamDelay ;
	LONGLONG TimeStreaming ;
	LONGLONG DataProcessed ;
	ULONG StreamPausedCount ;
} REDBOOK_WMI_PERF_DATA , *  PREDBOOK_WMI_PERF_DATA ;

// #line 3134
// extern const GUID RegisteredGuids_GUID ;

// #line 3137
typedef struct _RegisteredGuids {
	ULONG GuidType ;
	ULONG LoggerId ;
	ULONG EnableLevel ;
	ULONG EnableFlags ;
	BOOLEAN IsEnabled ;
} RegisteredGuids , *  PRegisteredGuids ;

// #line 475 "serial.h"
typedef struct _CONFIG_DATA {
	LARGE_INTEGER Controller ;
	LARGE_INTEGER TrController ;
	LARGE_INTEGER InterruptStatus ;
	LARGE_INTEGER TrInterruptStatus ;
	ULONG SpanOfController ;
	ULONG SpanOfInterruptStatus ;
	ULONG PortIndex ;
	ULONG ClockRate ;
	ULONG BusNumber ;
	ULONG AddressSpace ;
	ULONG DisablePort ;
	ULONG ForceFifoEnable ;
	ULONG RxFIFO ;
	ULONG TxFIFO ;
	ULONG PermitShare ;
	ULONG PermitSystemWideShare ;
	ULONG LogFifo ;
	ULONG MaskInverted ;
	KINTERRUPT_MODE InterruptMode ;
	INTERFACE_TYPE InterfaceType ;
	ULONG OriginalVector ;
	ULONG OriginalIrql ;
	ULONG TrVector ;
	ULONG TrIrql ;
	ULONG Affinity ;
	ULONG Indexed ;
	BOOLEAN Jensen ;
} CONFIG_DATA , *  PCONFIG_DATA ;

// #line 509
typedef struct _SERIAL_CISR_SW {
	BOOLEAN ( *  IsrFunc )(PKINTERRUPT , PVOID ) ;
	PVOID Context ;
	LIST_ENTRY SharerList ;
} SERIAL_CISR_SW , *  PSERIAL_CISR_SW ;

// #line 520
typedef struct _SERIAL_FIRMWARE_DATA {
	PDRIVER_OBJECT DriverObject ;
	ULONG ControllersFound ;
	ULONG ForceFifoEnableDefault ;
	ULONG DebugLevel ;
	ULONG ShouldBreakOnEntry ;
	ULONG RxFIFODefault ;
	ULONG TxFIFODefault ;
	ULONG PermitShareDefault ;
	ULONG PermitSystemWideShare ;
	ULONG LogFifoDefault ;
	UNICODE_STRING Directory ;
	UNICODE_STRING NtNameSuffix ;
	UNICODE_STRING DirectorySymbolicName ;
	LIST_ENTRY ConfigList ;
	BOOLEAN JensenDetected ;
} SERIAL_FIRMWARE_DATA , *  PSERIAL_FIRMWARE_DATA ;

// #line 576
typedef struct _SERIAL_DEVICE_STATE {
	BOOLEAN Reopen ;
	UCHAR IER ;
	UCHAR LCR ;
	UCHAR MCR ;
} SERIAL_DEVICE_STATE , *  PSERIAL_DEVICE_STATE ;

// #line 646
typedef struct _SERIAL_DEVICE_EXTENSION {
	PKSERVICE_ROUTINE TopLevelOurIsr ;
	PVOID TopLevelOurIsrContext ;
	LIST_ENTRY TopLevelSharers ;
	LIST_ENTRY CommonInterruptObject ;
	LIST_ENTRY MultiportSiblings ;
	LIST_ENTRY AllDevObjs ;
	LARGE_INTEGER OriginalController ;
	LARGE_INTEGER OriginalInterruptStatus ;
	LARGE_INTEGER IntervalTime ;
	LARGE_INTEGER ShortIntervalAmount ;
	LARGE_INTEGER LongIntervalAmount ;
	LARGE_INTEGER CutOverAmount ;
	LARGE_INTEGER LastReadTime ;
	UNICODE_STRING DeviceName ;
	UNICODE_STRING ObjectDirectory ;
	UNICODE_STRING NtNameForPort ;
	UNICODE_STRING SymbolicLinkName ;
	UNICODE_STRING DosName ;
	PLARGE_INTEGER IntervalTimeToUse ;
	PDEVICE_OBJECT DeviceObject ;
	PKSERVICE_ROUTINE OurIsr ;
	PVOID OurIsrContext ;
	PUCHAR Controller ;
	PUCHAR InterruptStatus ;
	PKINTERRUPT Interrupt ;
	LIST_ENTRY ReadQueue ;
	LIST_ENTRY WriteQueue ;
	LIST_ENTRY MaskQueue ;
	LIST_ENTRY PurgeQueue ;
	PIRP CurrentReadIrp ;
	PIRP CurrentWriteIrp ;
	PIRP CurrentMaskIrp ;
	PIRP CurrentPurgeIrp ;
	PIRP CurrentWaitIrp ;
	PIRP CurrentImmediateIrp ;
	PIRP CurrentXoffIrp ;
	ULONG WriteLength ;
	PUCHAR WriteCurrentChar ;
	PUCHAR InterruptReadBuffer ;
	PUCHAR ReadBufferBase ;
	ULONG CharsInInterruptBuffer ;
	PUCHAR CurrentCharSlot ;
	PUCHAR LastCharSlot ;
	PUCHAR FirstReadableChar ;
	PVOID LockPtr ;
	ULONG BufferSize ;
	ULONG BufferSizePt8 ;
	ULONG NumberNeededForRead ;
	ULONG IsrWaitMask ;
	ULONG HistoryMask ;
	ULONG *  IrpMaskLocation ;
	ULONG TXHolding ;
	ULONG RXHolding ;
	ULONG ErrorWord ;
	ULONG TotalCharsQueued ;
	LONG CountOnLastRead ;
	ULONG ReadByIsr ;
	ULONG CurrentBaud ;
	LONG CountSinceXoff ;
	ULONG CountOfTryingToLowerRTS ;
	ULONG SupportedBauds ;
	ULONG SpanOfController ;
	ULONG SpanOfInterruptStatus ;
	ULONG ClockRate ;
	ULONG TxFifoAmount ;
	ULONG PermitShare ;
	SERIAL_TIMEOUTS Timeouts ;
	SERIAL_CHARS SpecialChars ;
	SERIAL_HANDFLOW HandFlow ;
	SERIALPERF_STATS PerfStats ;
	UCHAR LineControl ;
	BOOLEAN DeviceIsOpened ;
	BOOLEAN UnMapRegisters ;
	BOOLEAN UnMapStatus ;
	BOOLEAN HoldingEmpty ;
	BOOLEAN TransmitImmediate ;
	BOOLEAN EmptiedTransmit ;
	BOOLEAN PortOnAMultiportCard ;
	ULONG Vector ;
	KIRQL Irql ;
	ULONG OriginalVector ;
	ULONG OriginalIrql ;
	ULONG AddressSpace ;
	ULONG BusNumber ;
	INTERFACE_TYPE InterfaceType ;
	ULONG PortIndex ;
	BOOLEAN Indexed ;
	ULONG MaskInverted ;
	ULONG NewPortIndex ;
	ULONG NewMaskInverted ;
	PVOID NewExtension ;
	UCHAR ImmediateChar ;
	UCHAR ValidDataMask ;
	UCHAR EscapeChar ;
	BOOLEAN SendXonChar ;
	BOOLEAN SendXoffChar ;
	BOOLEAN FifoPresent ;
	BOOLEAN Jensen ;
	UCHAR RxFifoTrigger ;
	BOOLEAN InterruptShareable ;
	BOOLEAN CreatedSymbolicLink ;
	BOOLEAN CreatedSerialCommEntry ;
	KSPIN_LOCK ControlLock ;
	KSPIN_LOCK FlagsLock ;
	KDPC CompleteWriteDpc ;
	KDPC CompleteReadDpc ;
	KDPC TotalReadTimeoutDpc ;
	KDPC IntervalReadTimeoutDpc ;
	KDPC TotalWriteTimeoutDpc ;
	KDPC CommErrorDpc ;
	KDPC CommWaitDpc ;
	KDPC CompleteImmediateDpc ;
	KDPC TotalImmediateTimeoutDpc ;
	KDPC XoffCountTimeoutDpc ;
	KDPC XoffCountCompleteDpc ;
	KDPC StartTimerLowerRTSDpc ;
	KDPC PerhapsLowerRTSDpc ;
	KDPC IsrUnlockPagesDpc ;
	KTIMER ReadRequestTotalTimer ;
	KTIMER ReadRequestIntervalTimer ;
	KTIMER WriteRequestTotalTimer ;
	KTIMER ImmediateTotalTimer ;
	KTIMER XoffCountTimer ;
	KTIMER LowerRTSTimer ;
	PDEVICE_OBJECT LowerDeviceObject ;
	DEVICE_POWER_STATE PowerState ;
	PDRIVER_OBJECT DriverObject ;
	KEVENT SerialSyncEvent ;
	UNICODE_STRING DeviceClassSymbolicName ;
	PSERIAL_CISR_SW CIsrSw ;
	ULONG PendingIRPCnt ;
	ULONG DevicePNPAccept ;
	KEVENT PendingIRPEvent ;
	ULONG PNPState ;
	ULONG Flags ;
	LONG OpenCount ;
	KEVENT SerialStartEvent ;
	SERIAL_DEVICE_STATE DeviceState ;
	DEVICE_POWER_STATE DeviceStateMap[PowerSystemMaximum] ;
	KEVENT PowerD0Event ;
	LIST_ENTRY StalledIrpQueue ;
	FAST_MUTEX OpenMutex ;
	FAST_MUTEX CloseMutex ;
	BOOLEAN OwnsPowerPolicy ;
	SYSTEM_POWER_STATE SystemWake ;
	DEVICE_POWER_STATE DeviceWake ;
	PDEVICE_OBJECT Pdo ;
	BOOLEAN SendWaitWake ;
	PIRP PendingWakeIrp ;
	WMILIB_CONTEXT WmiLibInfo ;
	UNICODE_STRING WmiIdentifier ;
	SERIAL_WMI_COMM_DATA WmiCommData ;
	SERIAL_WMI_HW_DATA WmiHwData ;
	SERIAL_WMI_PERF_DATA WmiPerfData ;
	ULONG DpcCount ;
	KEVENT PendingDpcEvent ;
	ULONG SkipNaming ;
} SERIAL_DEVICE_EXTENSION , *  PSERIAL_DEVICE_EXTENSION ;

// #line 1808
typedef struct _SERIAL_MULTIPORT_DISPATCH {
	PUCHAR InterruptStatus ;
	PSERIAL_DEVICE_EXTENSION Extensions[16] ;
	ULONG MaskInverted ;
	UCHAR UsablePortMask ;
} SERIAL_MULTIPORT_DISPATCH , *  PSERIAL_MULTIPORT_DISPATCH ;

// #line 2146
// #line 2154
PUCHAR *  KdComPortInUse ;

// #line 2157
typedef enum _SERIAL_MEM_COMPARES {
	AddressesAreEqual,
	AddressesOverlap,
	AddressesAreDisjoint
} SERIAL_MEM_COMPARES , *  PSERIAL_MEM_COMPARES ;

// #line 2164
typedef struct _SERIAL_LIST_DATA {
	PLIST_ENTRY destList ;
	PLIST_ENTRY newElement ;
} SERIAL_LIST_DATA , *  PSERIAL_LIST_DATA ;

typedef struct _SERIAL_GLOBALS {
	LIST_ENTRY AllDevObjs ;
	PVOID PAGESER_Handle ;
	UNICODE_STRING RegistryPath ;
} SERIAL_GLOBALS , *  PSERIAL_GLOBALS ;

// #line 2178
typedef struct _SERIAL_USER_DATA {
	LARGE_INTEGER UserPort ;
	LARGE_INTEGER UserInterruptStatus ;
	ULONG UserVector ;
	UNICODE_STRING UserSymbolicLink ;
	ULONG UserPortIndex ;
	ULONG UserBusNumber ;
	ULONG UserInterfaceType ;
	ULONG UserClockRate ;
	ULONG UserIndexed ;
	ULONG UserInterruptMode ;
	ULONG UserAddressSpace ;
	ULONG UserLevel ;
	ULONG DefaultPermitSystemWideShare ;
	ULONG DisablePort ;
	ULONG RxFIFO ;
	ULONG RxFIFODefault ;
	ULONG TxFIFO ;
	ULONG TxFIFODefault ;
	ULONG ForceFIFOEnable ;
	ULONG ForceFIFOEnableDefault ;
	ULONG PermitShareDefault ;
	ULONG LogFIFODefault ;
	ULONG MaskInverted ;
} SERIAL_USER_DATA , *  PSERIAL_USER_DATA ;

typedef struct _SERIAL_PTR_CTX {
	ULONG isPointer ;
	LARGE_INTEGER Port ;
	ULONG Vector ;
} SERIAL_PTR_CTX , *  PSERIAL_PTR_CTX ;

// #line 2233
// extern 
WMIGUIDREGINFO SerialWmiGuidList[5] ;

////////////////////////////////////////////////////////////////////////////
// #line 20 "serialp.h"
////////////////////////////////////////////////////////////////////////////
typedef NTSTATUS ( *  PSERIAL_START_ROUTINE )(PSERIAL_DEVICE_EXTENSION ) ;

// #line 26
typedef void ( *  PSERIAL_GET_NEXT_ROUTINE )(PIRP *  CurrentOpIrp , PLIST_ENTRY
	QueueToProcess , PIRP *  NewIrp , BOOLEAN CompleteCurrent ,
	PSERIAL_DEVICE_EXTENSION Extension ) ;

// NTSTATUS SerialRead(PDEVICE_OBJECT DeviceObject , PIRP Irp ) ;
// NTSTATUS SerialStartRead(PSERIAL_DEVICE_EXTENSION Extension ) ;
void SerialCompleteRead(PKDPC Dpc , PVOID DeferredContext , PVOID SystemContext1,
			PVOID SystemContext2 ) ;
void SerialReadTimeout(PKDPC Dpc , PVOID DeferredContext , PVOID SystemContext1,
		       PVOID SystemContext2 ) ;
// NTSTATUS DriverEntry(PDRIVER_OBJECT DriverObject , PUNICODE_STRING RegistryPath) ;
void SerialIntervalReadTimeout(PKDPC Dpc , PVOID DeferredContext , PVOID SystemContext1 ,
			       PVOID SystemContext2 ) ;
// NTSTATUS SerialFlush(PDEVICE_OBJECT DeviceObject , PIRP Irp ) ;
// NTSTATUS SerialWrite(PDEVICE_OBJECT DeviceObject , PIRP Irp ) ;
NTSTATUS SerialStartWrite(PSERIAL_DEVICE_EXTENSION Extension ) ;
void SerialGetNextWrite(PIRP *  CurrentOpIrp , PLIST_ENTRY QueueToProcess , PIRP *  NewIrp ,
			BOOLEAN CompleteCurrent , PSERIAL_DEVICE_EXTENSION Extension ) ;
void SerialCompleteWrite(PKDPC Dpc , PVOID DeferredContext , PVOID SystemContext1 ,
			 PVOID SystemContext2 ) ;
BOOLEAN SerialProcessEmptyTransmit(PVOID Context ) ;
void SerialWriteTimeout(PKDPC Dpc , PVOID DeferredContext , PVOID SystemContext1 ,
			PVOID SystemContext2 ) ;
void SerialCommError(PKDPC Dpc , PVOID DeferredContext , PVOID SystemContext1 ,
		     PVOID SystemContext2 ) ;
NTSTATUS SerialCleanup(PDEVICE_OBJECT DeviceObject , PIRP Irp ) ;
NTSTATUS SerialInitOneController(PDEVICE_OBJECT PDevObj , PCONFIG_DATA PConfigData ) ;
NTSTATUS SerialCreateOpen(PDEVICE_OBJECT DeviceObject , PIRP Irp ) ;
NTSTATUS SerialClose(PDEVICE_OBJECT DeviceObject , PIRP Irp ) ;
BOOLEAN SerialSetDTR(PVOID Context ) ;
BOOLEAN SerialClrDTR(PVOID Context ) ;
BOOLEAN SerialSetRTS(PVOID Context ) ;
BOOLEAN SerialClrRTS(PVOID Context ) ;
BOOLEAN SerialSetChars(PVOID Context ) ;
BOOLEAN SerialSetBaud(PVOID Context ) ;
BOOLEAN SerialSetLineControl(PVOID Context ) ;
BOOLEAN SerialSetupNewHandFlow(PSERIAL_DEVICE_EXTENSION Extension ,
			       PSERIAL_HANDFLOW NewHandFlow ) ;
BOOLEAN SerialSetHandFlow(PVOID Context ) ;
BOOLEAN SerialTurnOnBreak(PVOID Context ) ;
BOOLEAN SerialTurnOffBreak(PVOID Context ) ;
BOOLEAN SerialPretendXoff(PVOID Context ) ;
BOOLEAN SerialPretendXon(PVOID Context ) ;
void SerialHandleReducedIntBuffer(PSERIAL_DEVICE_EXTENSION Extension ) ;
void SerialProdXonXoff(PSERIAL_DEVICE_EXTENSION Extension , BOOLEAN SendXon ) ;
NTSTATUS SerialIoControl(PDEVICE_OBJECT DeviceObject , PIRP Irp ) ;
NTSTATUS SerialStartMask(PSERIAL_DEVICE_EXTENSION Extension ) ;
void SerialCancelWait(PDEVICE_OBJECT DeviceObject , PIRP Irp ) ;
void SerialCompleteWait(PKDPC Dpc , PVOID DeferredContext , PVOID SystemContext1,
			PVOID SystemContext2 ) ;
void SerialStartImmediate(PSERIAL_DEVICE_EXTENSION Extension ) ;
void SerialCompleteImmediate(PKDPC Dpc , PVOID DeferredContext , PVOID SystemContext1 ,
			     PVOID SystemContext2 ) ;
void SerialTimeoutImmediate(PKDPC Dpc , PVOID DeferredContext , PVOID SystemContext1 ,
			    PVOID SystemContext2 ) ;
void SerialTimeoutXoff(PKDPC Dpc , PVOID DeferredContext , PVOID SystemContext1, 
		       PVOID SystemContext2 ) ;
void SerialCompleteXoff(PKDPC Dpc , PVOID DeferredContext , PVOID SystemContext1, 
			PVOID SystemContext2 ) ;
NTSTATUS SerialStartPurge(PSERIAL_DEVICE_EXTENSION Extension ) ;
BOOLEAN SerialPurgeInterruptBuff(PVOID Context ) ;
NTSTATUS SerialQueryInformationFile(PDEVICE_OBJECT DeviceObject , PIRP Irp ) ;
NTSTATUS SerialSetInformationFile(PDEVICE_OBJECT DeviceObject , PIRP Irp ) ;
void SerialKillAllReadsOrWrites(PDEVICE_OBJECT DeviceObject , PLIST_ENTRY QueueToClean ,
				PIRP *  CurrentOpIrp ) ;
void SerialGetNextIrp(PIRP *  CurrentOpIrp , PLIST_ENTRY QueueToProcess , PIRP *  NextIrp ,
		      BOOLEAN CompleteCurrent , PSERIAL_DEVICE_EXTENSION extension ) ;
void SerialGetNextIrpLocked(PIRP *  CurrentOpIrp , PLIST_ENTRY QueueToProcess ,
			    PIRP *  NextIrp , BOOLEAN CompleteCurrent , 
			    PSERIAL_DEVICE_EXTENSION extension , KIRQL OldIrql ) ;
void SerialTryToCompleteCurrent(PSERIAL_DEVICE_EXTENSION Extension ,
				PKSYNCHRONIZE_ROUTINE SynchRoutine , KIRQL IrqlForRelease , NTSTATUS
				StatusToUse , PIRP *  CurrentOpIrp , PLIST_ENTRY QueueToProcess ,
				PKTIMER IntervalTimer , PKTIMER TotalTimer , 
				PSERIAL_START_ROUTINE Starter ,
				int StarterCode,
				PSERIAL_GET_NEXT_ROUTINE GetNextIrp , LONG RefType ) ;
NTSTATUS SerialStartOrQueue(PSERIAL_DEVICE_EXTENSION Extension , PIRP Irp ,
			    PLIST_ENTRY QueueToExamine , PIRP *  CurrentOpIrp ,
			    int /*PSERIAL_START_ROUTINE*/ Starter) ;
void SerialCancelQueued(PDEVICE_OBJECT DeviceObject , PIRP Irp ) ;
NTSTATUS SerialCompleteIfError(PDEVICE_OBJECT DeviceObject , PIRP Irp ) ;
ULONG SerialHandleModemUpdate(PSERIAL_DEVICE_EXTENSION Extension , BOOLEAN DoingTX ) ;
BOOLEAN SerialISR(PKINTERRUPT InterruptObject , PVOID Context ) ;
NTSTATUS SerialGetDivisorFromBaud(ULONG ClockRate , LONG DesiredBaud , PSHORT AppropriateDivisor ) ;
void SerialUnload(PDRIVER_OBJECT DriverObject ) ;
BOOLEAN SerialReset(PVOID Context ) ;
BOOLEAN SerialPerhapsLowerRTS(PVOID Context ) ;
void SerialStartTimerLowerRTS(PKDPC Dpc , PVOID DeferredContext , PVOID SystemContext1 ,
			      PVOID SystemContext2 ) ;
void SerialInvokePerhapsLowerRTS(PKDPC Dpc , PVOID DeferredContext , PVOID SystemContext1 ,
				 PVOID SystemContext2 ) ;
void SerialCleanupDevice(PSERIAL_DEVICE_EXTENSION Extension ) ;
UCHAR SerialProcessLSR(PSERIAL_DEVICE_EXTENSION Extension ) ;
LARGE_INTEGER SerialGetCharTime(PSERIAL_DEVICE_EXTENSION Extension ) ;
BOOLEAN SerialSharerIsr(PKINTERRUPT InterruptObject , PVOID Context ) ;
BOOLEAN SerialMarkClose(PVOID Context ) ;
BOOLEAN SerialIndexedMultiportIsr(PKINTERRUPT InterruptObject , PVOID Context );
BOOLEAN SerialBitMappedMultiportIsr(PKINTERRUPT InterruptObject , PVOID Context) ;
void SerialPutChar(PSERIAL_DEVICE_EXTENSION Extension , UCHAR CharToPut ) ;
BOOLEAN SerialGetStats(PVOID Context ) ;
BOOLEAN SerialClearStats(PVOID Context ) ;
NTSTATUS SerialCloseComplete(PDEVICE_OBJECT DeviceObject , PIRP Irp , PVOID Context ) ;
NTSTATUS SerialPnpDispatch(PDEVICE_OBJECT PDevObj , PIRP PIrp ) ;
NTSTATUS SerialPowerDispatch(PDEVICE_OBJECT DeviceObject , PIRP Irp ) ;
NTSTATUS SerialSetPowerD0(PDEVICE_OBJECT DeviceObject , PIRP Irp ) ;
NTSTATUS SerialSetPowerD3(PDEVICE_OBJECT DeviceObject , PIRP Irp ) ;
NTSTATUS SerialOpenClose(PDEVICE_OBJECT DeviceObject , PIRP Irp ) ;
NTSTATUS SerialGetConfigDefaults(PSERIAL_FIRMWARE_DATA DriverDefaultsPtr ,
				 PUNICODE_STRING RegistryPath ) ;
void SerialGetProperties(PSERIAL_DEVICE_EXTENSION Extension , PSERIAL_COMMPROP Properties ) ;
NTSTATUS SerialEnumerateLegacy(PDRIVER_OBJECT DriverObject , PUNICODE_STRING RegistryPath ,
			       PSERIAL_FIRMWARE_DATA DriverDefaultsPtr ) ;
NTSTATUS SerialMigrateLegacyRegistry(PDEVICE_OBJECT PPdo , PSERIAL_USER_DATA PUserData ,
				     BOOLEAN IsMulti ) ;
NTSTATUS SerialBuildResourceList(PCM_RESOURCE_LIST PResourceList , PULONG PPartialCount ,
				 PSERIAL_USER_DATA PUserData ) ;
NTSTATUS SerialTranslateResourceList(PDRIVER_OBJECT DriverObject ,
				     PKEY_BASIC_INFORMATION UserSubKey , PCM_RESOURCE_LIST PTrResourceList ,
				     PCM_RESOURCE_LIST PResourceList , ULONG PartialCount , 
				     PSERIAL_USER_DATA PUserData ) ;
NTSTATUS SerialBuildRequirementsList(PIO_RESOURCE_REQUIREMENTS_LIST PRequiredList ,
				     ULONG PartialCount , PSERIAL_USER_DATA PUserData ) ;
BOOLEAN SerialIsUserDataValid(PDRIVER_OBJECT DriverObject ,
			      PKEY_BASIC_INFORMATION UserSubKey , PRTL_QUERY_REGISTRY_TABLE Parameters,
			      ULONG DefaultInterfaceType , PSERIAL_USER_DATA PUserData ) ;
NTSTATUS SerialControllerCallBack(PVOID Context , PUNICODE_STRING PathName ,
				  INTERFACE_TYPE BusType , ULONG BusNumber , 
				  PKEY_VALUE_FULL_INFORMATION *  BusInformation , CONFIGURATION_TYPE ControllerType , 
				  ULONG ControllerNumber ,				   
				  PKEY_VALUE_FULL_INFORMATION *  ControllerInformation,
				  CONFIGURATION_TYPE PeripheralType , ULONG PeripheralNumber ,
				  PKEY_VALUE_FULL_INFORMATION *  PeripheralInformation ) ;

void SerialLogError(PDRIVER_OBJECT DriverObject , PDEVICE_OBJECT DeviceObject ,
		    LARGE_INTEGER P1 , LARGE_INTEGER P2 , ULONG SequenceNumber , 
		    UCHAR MajorFunctionCode , UCHAR RetryCount , ULONG UniqueErrorValue , 
		    NTSTATUS FinalStatus , NTSTATUS SpecificIOStatus , ULONG LengthOfInsert1 , 
		    PWCHAR Insert1 , ULONG LengthOfInsert2 , PWCHAR Insert2 ) ;

NTSTATUS SerialAddDevice(PDRIVER_OBJECT DriverObject , PDEVICE_OBJECT PLowerDevObj ) ;
NTSTATUS SerialCreateDevObj(PDRIVER_OBJECT DriverObject , PDEVICE_OBJECT *  NewDeviceObject ) ;
NTSTATUS SerialStartDevice(PDEVICE_OBJECT PDevObj , PIRP PIrp ) ;
NTSTATUS SerialGetRegistryKeyValue(HANDLE Handle , PWCHAR KeyNameString , ULONG KeyNameStringLength ,
				   PVOID Data , ULONG DataLength ) ;
NTSTATUS SerialGetPortInfo(PDEVICE_OBJECT PDevObj , PCM_RESOURCE_LIST PResList ,
			   PCM_RESOURCE_LIST PTrResList , PCONFIG_DATA PConfig , 
			   PSERIAL_USER_DATA PUserData ) ;
			   
NTSTATUS SerialFinishStartDevice(PDEVICE_OBJECT PDevObj , PCM_RESOURCE_LIST PResList ,
				 PCM_RESOURCE_LIST PTrResList , PSERIAL_USER_DATA PUserData );
NTSTATUS SerialPutRegistryKeyValue(HANDLE Handle , PWCHAR KeyNameString , ULONG KeyNameStringLength ,
				   ULONG Dtype , PVOID Data , ULONG DataLength ) ;
NTSTATUS SerialInitController(PDEVICE_OBJECT PDevObj , PCONFIG_DATA PConfigData ) ;
NTSTATUS SerialInitMultiPort(PSERIAL_DEVICE_EXTENSION PDevExt , PCONFIG_DATA PConfigData ,
			     PDEVICE_OBJECT PDevObj ) ;
NTSTATUS SerialFindInitController(PDEVICE_OBJECT PDevObj , PCONFIG_DATA PConfig ) ;
BOOLEAN SerialCIsrSw(PKINTERRUPT InterruptObject , PVOID Context ) ;
NTSTATUS SerialDoExternalNaming(PSERIAL_DEVICE_EXTENSION PDevExt ,
				PDRIVER_OBJECT PDrvObj ) ;
PVOID SerialGetMappedAddress(INTERFACE_TYPE BusType , ULONG BusNumber ,
			     LARGE_INTEGER IoAddress , ULONG NumberOfBytes , ULONG AddressSpace ,
			     PBOOLEAN MappedAddress ) ;
NTSTATUS SerialItemCallBack(PVOID Context , PUNICODE_STRING PathName ,
			    INTERFACE_TYPE BusType , ULONG BusNumber , 
			    PKEY_VALUE_FULL_INFORMATION *  BusInformation ,
			    CONFIGURATION_TYPE ControllerType , ULONG ControllerNumber ,
			    PKEY_VALUE_FULL_INFORMATION *  ControllerInformation ,
			    CONFIGURATION_TYPE PeripheralType , ULONG PeripheralNumber ,
			    PKEY_VALUE_FULL_INFORMATION *  PeripheralInformation ) ;
BOOLEAN SerialDoesPortExist(PSERIAL_DEVICE_EXTENSION Extension , PUNICODE_STRING InsertString ,
			    ULONG ForceFifo , ULONG LogFifo ) ;
SERIAL_MEM_COMPARES SerialMemCompare(LARGE_INTEGER A , ULONG SpanOfA ,
				     LARGE_INTEGER B , ULONG SpanOfB ) ;
void SerialUndoExternalNaming(PSERIAL_DEVICE_EXTENSION Extension ) ;
NTSTATUS SerialIRPPrologue(PIRP PIrp , PSERIAL_DEVICE_EXTENSION PDevExt ) ;
void SerialIRPEpilogue(PSERIAL_DEVICE_EXTENSION PDevExt ) ;
NTSTATUS SerialIoCallDriver(PSERIAL_DEVICE_EXTENSION PDevExt , PDEVICE_OBJECT PDevObj , PIRP PIrp ) ;
NTSTATUS SerialPoCallDriver(PSERIAL_DEVICE_EXTENSION PDevExt , PDEVICE_OBJECT PDevObj , PIRP PIrp ) ;
NTSTATUS SerialRemoveDevObj(PDEVICE_OBJECT PDevObj ) ;
void SerialReleaseResources(PSERIAL_DEVICE_EXTENSION PDevExt ) ;
void SerialKillPendingIrps(PDEVICE_OBJECT DeviceObject ) ;
void SerialDisableUART(PVOID Context ) ;
void SerialDrainUART(PSERIAL_DEVICE_EXTENSION PDevExt , PLARGE_INTEGER PDrainTime ) ;
NTSTATUS SerialSystemControlDispatch(PDEVICE_OBJECT PDevObj , PIRP PIrp ) ;
NTSTATUS SerialSetWmiDataItem(PDEVICE_OBJECT PDevObj , PIRP PIrp , 
			      ULONG GuidIndex ,
			      ULONG InstanceIndex , ULONG DataItemId , ULONG BufferSize ,
			      PUCHAR PBuffer ) ;
NTSTATUS SerialSetWmiDataBlock(PDEVICE_OBJECT PDevObj , PIRP PIrp , ULONG GuidIndex ,
			       ULONG InstanceIndex , ULONG BufferSize , PUCHAR PBuffer ) ;
NTSTATUS SerialQueryWmiDataBlock(PDEVICE_OBJECT PDevObj , PIRP PIrp , ULONG GuidIndex ,
				 ULONG InstanceIndex , ULONG InstanceCount , PULONG InstanceLengthArray ,
				 ULONG OutBufferSize , PUCHAR PBuffer ) ;
NTSTATUS SerialQueryWmiRegInfo(PDEVICE_OBJECT PDevObj , PULONG PRegFlags ,
			       PUNICODE_STRING PInstanceName , PUNICODE_STRING *  PRegistryPath ,
			       PUNICODE_STRING MofResourceName , PDEVICE_OBJECT *  Pdo ) ;
void SerialRestoreDeviceState(PSERIAL_DEVICE_EXTENSION PDevExt ) ;
void SerialSaveDeviceState(PSERIAL_DEVICE_EXTENSION PDevExt ) ;
NTSTATUS SerialSyncCompletion(PDEVICE_OBJECT DeviceObject , PIRP Irp , PKEVENT SerialSyncEvent ) ;
NTSTATUS SerialGotoPowerState(PDEVICE_OBJECT PDevObj , PSERIAL_DEVICE_EXTENSION PDevExt ,
			      DEVICE_POWER_STATE DevPowerState ) ;
NTSTATUS SerialFilterIrps(PIRP PIrp , PSERIAL_DEVICE_EXTENSION PDevExt ) ;
void SerialKillAllStalled(PDEVICE_OBJECT PDevObj ) ;
void SerialUnstallIrps(PSERIAL_DEVICE_EXTENSION PDevExt ) ;
NTSTATUS SerialInternalIoControl(PDEVICE_OBJECT DeviceObject , PIRP Irp ) ;
NTSTATUS SerialSendWaitWake(PSERIAL_DEVICE_EXTENSION PDevExt ) ;
NTSTATUS SerialWakeCompletion(PDEVICE_OBJECT PDevObj , UCHAR MinorFunction ,
			      POWER_STATE PowerState , PVOID Context , PIO_STATUS_BLOCK IoStatus ) ;
UINT32 SerialReportMaxBaudRate(ULONG Bauds ) ;
BOOLEAN SerialSetMCRContents(PVOID Context ) ;
BOOLEAN SerialGetMCRContents(PVOID Context ) ;
BOOLEAN SerialSetFCRContents(PVOID Context ) ;
NTSTATUS SerialTossWMIRequest(PDEVICE_OBJECT PDevObj , PIRP PIrp , ULONG GuidIndex ) ;
void SerialDpcEpilogue(PSERIAL_DEVICE_EXTENSION PDevExt , PKDPC PDpc ) ;
BOOLEAN SerialInsertQueueDpc(PRKDPC Dpc , PVOID Sarg1 , PVOID Sarg2 ,
			     PSERIAL_DEVICE_EXTENSION PDevExt ) ;
BOOLEAN SerialSetTimer(PKTIMER Timer , LARGE_INTEGER DueTime , PKDPC Dpc ,
		       PSERIAL_DEVICE_EXTENSION PDevExt ) ;
BOOLEAN SerialCancelTimer(PKTIMER Timer , PSERIAL_DEVICE_EXTENSION PDevExt ) ;
void SerialUnlockPages(PKDPC PDpc , PVOID PDeferredContext , PVOID PSysContext1 ,
		       PVOID PSysContext2 ) ;
void SerialMarkHardwareBroken(PSERIAL_DEVICE_EXTENSION PDevExt ) ;
void SerialDisableInterfacesResources(PDEVICE_OBJECT PDevObj , BOOLEAN DisableUART ) ;
void SerialSetDeviceFlags(PSERIAL_DEVICE_EXTENSION PDevExt , PULONG PFlags ,
			  ULONG Value , BOOLEAN Set ) ;

// #line 835
typedef struct _SERIAL_UPDATE_CHAR {
	PSERIAL_DEVICE_EXTENSION Extension ;
	ULONG CharsCopied ;
	BOOLEAN Completed ;
} SERIAL_UPDATE_CHAR , *  PSERIAL_UPDATE_CHAR ;

// #line 846
typedef struct _SERIAL_IOCTL_SYNC {
	PSERIAL_DEVICE_EXTENSION Extension ;
	PVOID Data ;
} SERIAL_IOCTL_SYNC , *  PSERIAL_IOCTL_SYNC ;


/////////////////////////////////////////////////////////////////////////////////////
// #line 15 "../slam-kernel.c"
/////////////////////////////////////////////////////////////////////////////////////

PIO_COMPLETION_ROUTINE compFptr ;

// #line 29 "error.c"

void SerialCommError(PKDPC Dpc , PVOID DeferredContext , PVOID SystemContext1 ,
		     PVOID SystemContext2 )
{

  PSERIAL_DEVICE_EXTENSION Extension;
  Extension = DeferredContext;
  // #line 64
  //SystemContext1;
  //SystemContext2;
  SerialKillAllReadsOrWrites(Extension->DeviceObject, &
			     Extension->WriteQueue, & Extension->CurrentWriteIrp);
  // #line 75
  SerialKillAllReadsOrWrites(Extension->DeviceObject, &
			     Extension->ReadQueue, & Extension->CurrentReadIrp);
  // #line 82
  SerialDpcEpilogue(Extension, Dpc);
}

// #line 16 "C:/NTDDK/inc/stddef.h"


// #line 16 "C:/Program Files/Microsoft Visual Studio/VC98/include/excpt.h"

// #pragma once
// #line 32

// #pragma pack(push, 8)
// #line 72
// #line 89
// #line 90
// #line 155

// #pragma pack(pop)
// #line 25 "C:/NTDDK/inc/ntdef.h"

// #pragma once
// #line 15 "C:/Program Files/Microsoft Visual Studio/VC98/include/ctype.h"

// #pragma once
// #line 66
// #line 127 "C:/NTDDK/inc/ntdef.h"
// #line 25 "C:/NTDDK/inc/basetsd.h"
// #pragma once
// #line 36
// #line 37
// #line 43
// #line 44
// #line 217 "C:/NTDDK/inc/ntdef.h"
// #line 17 "C:/NTDDK/inc/guiddef.h"
// #line 16 "C:/NTDDK/inc/string.h"
// #line 1233 "C:/NTDDK/inc/ntdef.h"
// #line 75 "C:/NTDDK/inc/ddk/ntddk.h"
// #line 24 "C:/NTDDK/inc/pshpack4.h"

// #pragma warning(disable:4103)

// #pragma pack(push, 4)
// #line 618 "C:/NTDDK/inc/ddk/ntddk.h"
// #line 27 "C:/NTDDK/inc/poppack.h"

// #pragma warning(disable:4103)

// #pragma pack(pop)
// #line 642 "C:/NTDDK/inc/ddk/ntddk.h"

// #line 1952

// #pragma warning(push)

// #pragma warning(disable:4035)
// #line 2019

// #pragma warning(pop)
// #line 2214
// #line 24 "C:/NTDDK/inc/pshpack4.h"
// #line 8309 "C:/NTDDK/inc/ddk/ntddk.h"
// #line 27 "C:/NTDDK/inc/poppack.h"
// #line 8419 "C:/NTDDK/inc/ddk/ntddk.h"
// #line 24 "C:/NTDDK/inc/pshpack1.h"

// #pragma warning(disable:4103)

// #pragma pack(push, 1)
// #line 8518 "C:/NTDDK/inc/ddk/ntddk.h"
// #line 27 "C:/NTDDK/inc/poppack.h"

// #pragma warning(disable:4103)

// #pragma pack(pop)
// #line 8761 "C:/NTDDK/inc/ddk/ntddk.h"
// #line 24 "C:/NTDDK/inc/pshpack4.h"

// #pragma warning(disable:4103)

// #pragma pack(push, 4)
// #line 14271 "C:/NTDDK/inc/ddk/ntddk.h"
// #line 27 "C:/NTDDK/inc/poppack.h"
// #pragma warning(disable:4103)

// #pragma pack(pop)
// #line 14615 "C:/NTDDK/inc/ddk/ntddk.h"
// #line 127 "C:/NTDDK/inc/ntddser.h"
// #line 28 "C:/NTDDK/inc/ddk/wdm/wmilib.h"

// #pragma once
// #line 38
typedef struct  {
	LPCGUID Guid ;
	ULONG InstanceCount ;
	ULONG Flags ;
} ;

// #line 45
typedef NTSTATUS ;

// #line 101
typedef NTSTATUS ;

// #line 162
typedef NTSTATUS ;

// #line 206
typedef NTSTATUS ;

// #line 253
typedef NTSTATUS ;

// #line 306

// #line 312
typedef NTSTATUS ;

// #line 355
typedef struct _WMILIB_CONTEXT ;

// #line 411

// #line 13 "C:/NTDDK/inc/wmidata.h"
typedef struct _MSWmi_MofData ;

// #line 51
typedef struct _MSWmi_ProviderInfo ;

// #line 66
typedef struct _MSWmi_PnPDeviceId ;

// #line 83
typedef struct _MSWmi_PnPInstanceNames ;

// #line 105
typedef struct _MSSmBios_RawSMBiosTables ;

// #line 147
typedef struct _MSPower_DeviceEnable ;

// #line 165
typedef struct _MSPower_DeviceWakeEnable ;

// #line 182
typedef struct _MSNdis_NetworkAddress ;

// #line 199
typedef struct _MSNdis_NetworkShortAddress ;

// #line 216
typedef struct _MSNdis_NetworkLinkSpeed ;

// #line 239
typedef struct _MSNdis_EnumerateAdapter ;

// #line 256
typedef struct _MSNdis_NotifyAdapterRemoval ;

// #line 273
typedef struct _MSNdis_NotifyAdapterArrival ;

// #line 291
typedef struct _MSNdis_NdisEnumerateVc ;

// #line 307
typedef struct _MSNdis_NotifyVcRemoval ;

// #line 323
typedef struct _MSNdis_NotifyVcArrival ;

// #line 338
typedef struct _MSNdis_HardwareStatus ;

// #line 356
typedef struct _MSNdis_MediaSupported ;

// #line 378
typedef struct _MSNdis_MediaInUse ;

// #line 400
typedef struct _MSNdis_MaximumLookahead ;

// #line 418
typedef struct _MSNdis_MaximumFrameSize ;

// #line 436
typedef struct _MSNdis_LinkSpeed ;

// #line 454
typedef struct _MSNdis_TransmitBufferSpace ;

// #line 472
typedef struct _MSNdis_ReceiveBufferSpace ;

// #line 490
typedef struct _MSNdis_TransmitBlockSize ;

// #line 508
typedef struct _MSNdis_ReceiveBlockSize ;

// #line 526
typedef struct _MSNdis_VendorID ;

// #line 544
typedef struct _MSNdis_VendorDescription ;

// #line 561
typedef struct _MSNdis_CurrentPacketFilter ;

// #line 579
typedef struct _MSNdis_CurrentLookahead ;

// #line 597
typedef struct _MSNdis_DriverVersion ;

// #line 615
typedef struct _MSNdis_MaximumTotalSize ;

// #line 633
typedef struct _MSNdis_MacOptions ;

// #line 651
typedef struct _MSNdis_MediaConnectStatus ;

// #line 669
typedef struct _MSNdis_MaximumSendPackets ;

// #line 687
typedef struct _MSNdis_VendorDriverVersion ;

// #line 705
typedef struct _MSNdis_TransmitsOk ;

// #line 723
typedef struct _MSNdis_ReceivesOk ;

// #line 741
typedef struct _MSNdis_TransmitsError ;

// #line 759
typedef struct _MSNdis_ReceiveError ;

// #line 777
typedef struct _MSNdis_ReceiveNoBuffer ;

// #line 795
typedef struct _MSNdis_CoHardwareStatus ;

// #line 813
typedef struct _MSNdis_CoMediaSupported ;

// #line 835
typedef struct _MSNdis_CoMediaInUse ;

// #line 857
typedef struct _MSNdis_CoLinkSpeed ;

// #line 875
typedef struct _MSNdis_CoVendorId ;

// #line 893
typedef struct _MSNdis_CoVendorDescription ;

// #line 910
typedef struct _MSNdis_CoDriverVersion ;

// #line 928
typedef struct _MSNdis_CoMacOptions ;

// #line 946
typedef struct _MSNdis_CoMediaConnectStatus ;

// #line 964
typedef struct _MSNdis_CoVendorDriverVersion ;

// #line 982
typedef struct _MSNdis_CoMinimumLinkSpeed ;

// #line 1000
typedef struct _MSNdis_CoTransmitPdusOk ;

// #line 1018
typedef struct _MSNdis_CoReceivePdusOk ;

// #line 1036
typedef struct _MSNdis_CoTransmitPduErrors ;

// #line 1054
typedef struct _MSNdis_CoReceivePduErrors ;

// #line 1072
typedef struct _MSNdis_CoReceivePdusNoBuffer ;

// #line 1090
typedef struct _MSNdis_AtmSupportedVcRates ;

// #line 1113
typedef struct _MSNdis_AtmSupportedServiceCategory ;

// #line 1131
typedef struct _MSNdis_AtmSupportedAalTypes ;

// #line 1149
typedef struct _MSNdis_AtmHardwareCurrentAddress ;

// #line 1167
typedef struct _MSNdis_AtmMaxActiveVcs ;

// #line 1185
typedef struct _MSNdis_AtmMaxActiveVciBits ;

// #line 1203
typedef struct _MSNdis_AtmMaxActiveVpiBits ;

// #line 1221
typedef struct _MSNdis_AtmMaxAal0PacketSize ;

// #line 1239
typedef struct _MSNdis_AtmMaxAal1PacketSize ;

// #line 1257
typedef struct _MSNdis_AtmMaxAal34PacketSize ;

// #line 1275
typedef struct _MSNdis_AtmMaxAal5PacketSize ;

// #line 1293
typedef struct _MSNdis_AtmReceiveCellsOk ;

// #line 1311
typedef struct _MSNdis_AtmTransmitCellsOk ;

// #line 1329
typedef struct _MSNdis_AtmReceiveCellsDropped ;

// #line 1347
typedef struct _MSNdis_EthernetPermanentAddress ;

// #line 1365
typedef struct _MSNdis_EthernetCurrentAddress ;

// #line 1383
typedef struct _MSNdis_EthernetMulticastList ;

// #line 1405
typedef struct _MSNdis_EthernetMaximumMulticastListSize ;

// #line 1423
typedef struct _MSNdis_EthernetMacOptions ;

// #line 1441
typedef struct _MSNdis_EthernetReceiveErrorAlignment ;

// #line 1459
typedef struct _MSNdis_EthernetOneTransmitCollision ;

// #line 1477
typedef struct _MSNdis_EthernetMoreTransmitCollisions ;

// #line 1495
typedef struct _MSNdis_TokenRingPermanentAddress ;

// #line 1513
typedef struct _MSNdis_TokenRingCurrentAddress ;

// #line 1531
typedef struct _MSNdis_TokenRingCurrentFunctional ;

// #line 1549
typedef struct _MSNdis_TokenRingCurrentGroup ;

// #line 1567
typedef struct _MSNdis_TokenRingLastOpenStatus ;

// #line 1585
typedef struct _MSNdis_TokenRingCurrentRingStatus ;

// #line 1603
typedef struct _MSNdis_TokenRingCurrentRingState ;

// #line 1621
typedef struct _MSNdis_TokenRingLineErrors ;

// #line 1639
typedef struct _MSNdis_TokenRingLostFrames ;

// #line 1657
typedef struct _MSNdis_FddiLongPermanentAddress ;

// #line 1675
typedef struct _MSNdis_FddiLongCurrentAddress ;

// #line 1693
typedef struct _MSNdis_FddiLongMulticastList ;

// #line 1715
typedef struct _MSNdis_FddiLongMaximumListSize ;

// #line 1733
typedef struct _MSNdis_FddiShortPermanentAddress ;

// #line 1751
typedef struct _MSNdis_FddiShortCurrentAddress ;

// #line 1769
typedef struct _MSNdis_FddiShortMulticastList ;

// #line 1791
typedef struct _MSNdis_FddiShortMaximumListSize ;

// #line 1809
typedef struct _MSNdis_FddiAttachmentType ;

// #line 1827
typedef struct _MSNdis_FddiUpstreamNodeLong ;

// #line 1845
typedef struct _MSNdis_FddiDownstreamNodeLong ;

// #line 1863
typedef struct _MSNdis_FddiFrameErrors ;

// #line 1881
typedef struct _MSNdis_FddiFramesLost ;

// #line 1899
typedef struct _MSNdis_FddiRingManagmentState ;

// #line 1917
typedef struct _MSNdis_FddiLctFailures ;

// #line 1935
typedef struct _MSNdis_FddiLemRejects ;

// #line 1953
typedef struct _MSNdis_FddiLConnectionState ;

// #line 1972
typedef struct _MSNdis_StatusResetStart ;

// #line 1988
typedef struct _MSNdis_StatusResetEnd ;

// #line 2004
typedef struct _MSNdis_StatusMediaConnect ;

// #line 2020
typedef struct _MSNdis_StatusMediaDisconnect ;

// #line 2035
typedef struct _MSNdis_StatusMediaSpecificIndication ;

// #line 2057
typedef struct _MSNdis_StatusLinkSpeedChange ;

// #line 2075
typedef struct _MSNdis_StatusProtocolBind ;

// #line 2092
typedef struct _MSNdis_StatusProtocolUnbind ;

// #line 2109
typedef struct _KEYBOARD_PORT_WMI_STD_DATA ;

// #line 2152
typedef struct _POINTER_PORT_WMI_STD_DATA ;

// #line 2205
typedef struct _MSMouse_ClassInformation ;

// #line 2223
typedef struct _MSKeyboard_ClassInformation ;

// #line 2241
typedef struct _MSAcpi_ThermalZoneTemperature ;

// #line 2304
typedef struct _WMI_DISK_GEOMETRY ;

// #line 2342
typedef struct _WMI_DISK_PERFORMANCE ;

// #line 2415
typedef struct _MSDiskDriver_Performance ;

// #line 2437
typedef struct _STORAGE_FAILURE_PREDICT_STATUS ;

// #line 2460
typedef struct _STORAGE_FAILURE_PREDICT_DATA ;

// #line 2483
typedef struct _STORAGE_FAILURE_PREDICT_EVENT ;

// #line 2513
typedef struct _STORAGE_FAILURE_PREDICT_FUNCTION ;

// #line 2528
typedef struct _MSIde_PortDeviceInfo ;

// #line 2556
typedef struct _MSSerial_PortName ;

// #line 2573
typedef struct _SERIAL_WMI_COMM_DATA ;

// #line 2723
typedef struct _SERIAL_WMI_HW_DATA ;

// #line 2770
typedef struct _SERIAL_WMI_PERF_DATA ;

// #line 2813
typedef struct _SERIAL_WMI_COMMPROP ;

// #line 2920
typedef struct _PARPORT_WMI_ALLOC_FREE_COUNTS ;

// #line 2943
typedef struct _PARALLEL_WMI_LOG_INFO ;

// #line 3041
typedef struct _REDBOOK_WMI_STD_DATA ;

// #line 3094
typedef struct _REDBOOK_WMI_PERF_DATA ;

// #line 3137
typedef struct _RegisteredGuids ;

// #line 475 "serial.h"
typedef struct _CONFIG_DATA ;

// #line 509
typedef struct _SERIAL_CISR_SW ;

// #line 520
typedef struct _SERIAL_FIRMWARE_DATA ;

// #line 576
typedef struct _SERIAL_DEVICE_STATE ;

// #line 646
typedef struct _SERIAL_DEVICE_EXTENSION ;

// #line 1808
typedef struct _SERIAL_MULTIPORT_DISPATCH ;

// #line 2157
typedef enum _SERIAL_MEM_COMPARES ;

// #line 2164
typedef struct _SERIAL_LIST_DATA ;

// #line 2169
typedef struct _SERIAL_GLOBALS ;

// #line 2180
typedef struct _SERIAL_USER_DATA ;

// #line 2206
typedef struct _SERIAL_PTR_CTX ;

// #line 20 "serialp.h"
typedef NTSTATUS ;

// #line 26
typedef void ;

// #line 835
typedef struct _SERIAL_UPDATE_CHAR ;

// #line 846
typedef struct _SERIAL_IOCTL_SYNC ;

// #line 29 "flush.c"
NTSTATUS SerialStartFlush(PSERIAL_DEVICE_EXTENSION Extension ) ;

NTSTATUS SerialFlush(PDEVICE_OBJECT DeviceObject , PIRP Irp )
{
  PSERIAL_DEVICE_EXTENSION Extension;
  NTSTATUS status ;
  NTSTATUS temp__1;

  Extension = DeviceObject->DeviceExtension;
  (Irp->IoStatus).Information = 0;
  status = SerialIRPPrologue(Irp, Extension);
  if(status == (NTSTATUS)0x00000000L)
    {
      temp__1 = SerialCompleteIfError(DeviceObject, Irp);
      if(temp__1 != (NTSTATUS)0x00000000L)
	  return (NTSTATUS )0xC0000120L;
      return SerialStartOrQueue(Extension, Irp,
				&Extension->WriteQueue, & Extension->CurrentWriteIrp,
				1 /*SerialStartFlush*/);
    }
  else
    {
      (Irp->IoStatus).Status = status;
      if(! ((NTSTATUS )status >= 0))
	{
	  IofCompleteRequest(Irp, 0);
	  SerialIRPEpilogue(Extension);
	}
      return status;
    }
}

NTSTATUS SerialStartFlush(PSERIAL_DEVICE_EXTENSION Extension )
{
  PIRP NewIrp ;

  ((Extension->CurrentWriteIrp)->IoStatus).Status = (NTSTATUS)0x00000000L;
  SerialGetNextWrite(& Extension->CurrentWriteIrp, &
		     Extension->WriteQueue, & NewIrp, 1, Extension);
  if(NewIrp)
    SerialStartWrite(Extension);
  return (NTSTATUS )0x00000000L;
}

// #line 16 "C:/NTDDK/inc/stddef.h"

// #pragma once
// #line 77
// #line 16 "C:/Program Files/Microsoft Visual Studio/VC98/include/excpt.h"

// #pragma once
// #line 32

// #pragma pack(push, 8)
// #line 72
// #pragma pack(pop)
// #line 25 "C:/NTDDK/inc/ntdef.h"

// #pragma once
// #line 15 "C:/Program Files/Microsoft Visual Studio/VC98/include/ctype.h"

// #pragma once
// #line 66
// #line 127 "C:/NTDDK/inc/ntdef.h"
// #line 25 "C:/NTDDK/inc/basetsd.h"
// #line 217 "C:/NTDDK/inc/ntdef.h"
// #line 17 "C:/NTDDK/inc/guiddef.h"
// #line 16 "C:/NTDDK/inc/string.h"
// #pragma once
// #line 1233 "C:/NTDDK/inc/ntdef.h"
// #line 75 "C:/NTDDK/inc/ddk/ntddk.h"
// #line 24 "C:/NTDDK/inc/pshpack4.h"

// #pragma warning(disable:4103)

// #pragma pack(push, 4)
// #line 618 "C:/NTDDK/inc/ddk/ntddk.h"
// #line 27 "C:/NTDDK/inc/poppack.h"

// #pragma warning(disable:4103)

// #pragma pack(pop)
// #line 642 "C:/NTDDK/inc/ddk/ntddk.h"
// #line 1952

// #pragma warning(push)

// #pragma warning(disable:4035)
// #line 2019

// #pragma warning(pop)
// #line 2214
// #line 2224
// #line 24 "C:/NTDDK/inc/pshpack4.h"

// #pragma warning(disable:4103)

// #pragma pack(push, 4)
// #line 8309 "C:/NTDDK/inc/ddk/ntddk.h"
// #line 27 "C:/NTDDK/inc/poppack.h"

// #pragma warning(disable:4103)

// #pragma pack(pop)
// #line 8419 "C:/NTDDK/inc/ddk/ntddk.h"
// #line 24 "C:/NTDDK/inc/pshpack1.h"

// #pragma warning(disable:4103)

// #pragma pack(push, 1)
// #line 8518 "C:/NTDDK/inc/ddk/ntddk.h"
// #line 27 "C:/NTDDK/inc/poppack.h"

// #pragma warning(disable:4103)

// #pragma pack(pop)
// #line 8761 "C:/NTDDK/inc/ddk/ntddk.h"
// #line 14235

// #line 14252

// #line 24 "C:/NTDDK/inc/pshpack4.h"

// #pragma warning(disable:4103)

// #pragma pack(push, 4)
// #line 14271 "C:/NTDDK/inc/ddk/ntddk.h"
// #line 27 "C:/NTDDK/inc/poppack.h"

// #pragma warning(disable:4103)

// #pragma pack(pop)
// #line 14615 "C:/NTDDK/inc/ddk/ntddk.h"
// #line 16100

// #line 16278
typedef struct ACPI_REGS_INTERFACE_STANDARD ;

// #line 16300
typedef struct  {
	PVOID LinkNode ;
	ULONG StaticVector ;
	UCHAR Flags ;
} ;

// #line 17588
typedef struct  {
	ULONG Version ;
	pHalQuerySystemInformation HalQuerySystemInformation ;
	pHalSetSystemInformation HalSetSystemInformation ;
	pHalQueryBusSlots HalQueryBusSlots ;
	ULONG Spare1 ;
	pHalExamineMBR HalExamineMBR ;
	pHalIoAssignDriveLetters HalIoAssignDriveLetters ;
	pHalIoReadPartitionTable HalIoReadPartitionTable ;
	pHalIoSetPartitionInformation HalIoSetPartitionInformation ;
	pHalIoWritePartitionTable HalIoWritePartitionTable ;
	pHalHandlerForBus HalReferenceHandlerForBus ;
	pHalReferenceBusHandler HalReferenceBusHandler ;
	pHalReferenceBusHandler HalDereferenceBusHandler ;
	pHalInitPnpDriver HalInitPnpDriver ;
	pHalInitPowerManagement HalInitPowerManagement ;
	pHalGetDmaAdapter HalGetDmaAdapter ;
	pHalGetInterruptTranslator HalGetInterruptTranslator ;
} ;

// #line 17650
typedef struct _HAL_BUS_INFORMATION ;

// #line 17658
typedef struct _HAL_PROFILE_SOURCE_INFORMATION ;

// #line 17665
typedef struct _HAL_PROFILE_SOURCE_INTERVAL ;

// #line 17671
typedef enum _HAL_DISPLAY_BIOS_INFORMATION ;

// #line 17678
typedef struct _HAL_POWER_INFORMATION ;

// #line 17683
typedef struct _HAL_PROCESSOR_SPEED_INFO ;

// #line 17688
typedef struct _HAL_CALLBACKS ;

// #line 17694
typedef struct _HAL_PROCESSOR_FEATURE ;

// #line 17706
typedef union _MCI_ADDR ;

// #line 17726
typedef struct _MCA_EXCEPTION ;

// #line 17752
typedef void ;

// #line 17762
typedef struct _MCA_DRIVER_INFO ;

// #line 17772
typedef struct _SCATTER_GATHER_ELEMENT ;

// #line 17778

// #pragma warning(disable:4200)
// #line 17779
typedef struct _SCATTER_GATHER_LIST ;

// #line 17784

// #pragma warning(default:4200)
// #line 17788
typedef struct _DMA_OPERATIONS ;

typedef struct _DMA_ADAPTER ;

typedef struct _DMA_OPERATIONS ;

// #line 18235
typedef void ;

// #line 18321
typedef struct _OBJECT_HANDLE_INFORMATION ;

// #line 18402
typedef struct _PCI_SLOT_NUMBER ;

// #line 18418
typedef struct _PCI_COMMON_CONFIG ;

// #line 18591
typedef struct _PCI_CAPABILITIES_HEADER ;

// #line 18600
typedef struct _PCI_PMC ;

// #line 18618
typedef struct _PCI_PMCSR ;

// #line 18628
typedef struct _PCI_PMCSR_BSE ;

// #line 18635
typedef struct _PCI_PM_CAPABILITY ;

// #line 18679
typedef struct _PCI_AGP_CAPABILITY ;

// #line 18720
typedef struct _PCI_MSI_CAPABILITY ;

// #line 18946
typedef void ;

// #line 18954
typedef void ;

// #line 18963
typedef void ;

// #line 18975
typedef struct _PCIBUSDATA ;

// #line 18986
typedef ULONG ;

// #line 18995
typedef void ;

// #line 19000
typedef void ;

// #line 19006
typedef struct _PCI_BUS_INTERFACE_STANDARD ;

// #line 19028
typedef BOOLEAN ;

// #line 19043
typedef struct _PCI_DEVICE_PRESENT_INTERFACE ;

// #line 127 "C:/NTDDK/inc/ntddser.h"
typedef struct _SERIALPERF_STATS ;

// #line 136
typedef struct _SERIALCONFIG ;

// #line 154
typedef struct _SERIAL_LINE_CONTROL ;

// #line 160
typedef struct _SERIAL_TIMEOUTS ;

// #line 175
typedef struct _SERIAL_QUEUE_SIZE ;

// #line 185
typedef struct _SERIAL_BAUD_RATE ;

// #line 247
typedef struct _SERIAL_CHARS ;

// #line 284
typedef struct _SERIAL_HANDFLOW ;

// #line 340
typedef struct _SERIAL_BASIC_SETTINGS ;

// #line 353
typedef struct _SERIAL_STATUS ;

// #line 433
typedef struct _SERIAL_XOFF_COUNTER ;

// #line 539
typedef struct _SERIAL_COMMPROP ;

// #line 631
typedef struct _SERENUM_PORT_DESC ;

// #line 652
typedef UCHAR ;

// #line 658
typedef void ;

// #line 665
typedef enum _SERENUM_PORTION ;

// #line 671
typedef struct _SERENUM_PORT_PARAMETERS ;

// #line 28 "C:/NTDDK/inc/ddk/wdm/wmilib.h"

// #pragma once
// #line 38
typedef struct  {
	LPCGUID Guid ;
	ULONG InstanceCount ;
	ULONG Flags ;
} ;

// #line 45
typedef NTSTATUS ;

// #line 101
typedef NTSTATUS ;

// #line 162
typedef NTSTATUS ;

// #line 206
typedef NTSTATUS ;

// #line 253
typedef NTSTATUS ;

// #line 306

// #line 312
typedef NTSTATUS ;

// #line 355
typedef struct _WMILIB_CONTEXT ;


// #line 13 "C:/NTDDK/inc/wmidata.h"
typedef struct _MSWmi_MofData ;

// #line 51
typedef struct _MSWmi_ProviderInfo ;

// #line 66
typedef struct _MSWmi_PnPDeviceId ;

// #line 83
typedef struct _MSWmi_PnPInstanceNames ;

// #line 105
typedef struct _MSSmBios_RawSMBiosTables ;

// #line 147
typedef struct _MSPower_DeviceEnable ;

// #line 165
typedef struct _MSPower_DeviceWakeEnable ;

// #line 182
typedef struct _MSNdis_NetworkAddress ;

// #line 199
typedef struct _MSNdis_NetworkShortAddress ;

// #line 216
typedef struct _MSNdis_NetworkLinkSpeed ;

// #line 239
typedef struct _MSNdis_EnumerateAdapter ;

// #line 256
typedef struct _MSNdis_NotifyAdapterRemoval ;

// #line 273
typedef struct _MSNdis_NotifyAdapterArrival ;

// #line 291
typedef struct _MSNdis_NdisEnumerateVc ;

// #line 307
typedef struct _MSNdis_NotifyVcRemoval ;

// #line 323
typedef struct _MSNdis_NotifyVcArrival ;

// #line 338
typedef struct _MSNdis_HardwareStatus ;

// #line 356
typedef struct _MSNdis_MediaSupported ;

// #line 378
typedef struct _MSNdis_MediaInUse ;

// #line 400
typedef struct _MSNdis_MaximumLookahead ;

// #line 418
typedef struct _MSNdis_MaximumFrameSize ;

// #line 436
typedef struct _MSNdis_LinkSpeed ;

// #line 454
typedef struct _MSNdis_TransmitBufferSpace ;

// #line 472
typedef struct _MSNdis_ReceiveBufferSpace ;

// #line 490
typedef struct _MSNdis_TransmitBlockSize ;

// #line 508
typedef struct _MSNdis_ReceiveBlockSize ;

// #line 526
typedef struct _MSNdis_VendorID ;

// #line 544
typedef struct _MSNdis_VendorDescription ;

// #line 561
typedef struct _MSNdis_CurrentPacketFilter ;

// #line 579
typedef struct _MSNdis_CurrentLookahead ;

// #line 597
typedef struct _MSNdis_DriverVersion ;

// #line 615
typedef struct _MSNdis_MaximumTotalSize ;

// #line 633
typedef struct _MSNdis_MacOptions ;

// #line 651
typedef struct _MSNdis_MediaConnectStatus ;

// #line 669
typedef struct _MSNdis_MaximumSendPackets ;

// #line 687
typedef struct _MSNdis_VendorDriverVersion ;

// #line 705
typedef struct _MSNdis_TransmitsOk ;

// #line 723
typedef struct _MSNdis_ReceivesOk ;

// #line 741
typedef struct _MSNdis_TransmitsError ;

// #line 759
typedef struct _MSNdis_ReceiveError ;

// #line 777
typedef struct _MSNdis_ReceiveNoBuffer ;

// #line 795
typedef struct _MSNdis_CoHardwareStatus ;

// #line 813
typedef struct _MSNdis_CoMediaSupported ;

// #line 835
typedef struct _MSNdis_CoMediaInUse ;

// #line 857
typedef struct _MSNdis_CoLinkSpeed ;

// #line 875
typedef struct _MSNdis_CoVendorId ;

// #line 893
typedef struct _MSNdis_CoVendorDescription ;

// #line 910
typedef struct _MSNdis_CoDriverVersion ;

// #line 928
typedef struct _MSNdis_CoMacOptions ;

// #line 946
typedef struct _MSNdis_CoMediaConnectStatus ;

// #line 964
typedef struct _MSNdis_CoVendorDriverVersion ;

// #line 982
typedef struct _MSNdis_CoMinimumLinkSpeed ;

// #line 1000
typedef struct _MSNdis_CoTransmitPdusOk ;

// #line 1018
typedef struct _MSNdis_CoReceivePdusOk ;

// #line 1036
typedef struct _MSNdis_CoTransmitPduErrors ;

// #line 1054
typedef struct _MSNdis_CoReceivePduErrors ;

// #line 1072
typedef struct _MSNdis_CoReceivePdusNoBuffer ;

// #line 1090
typedef struct _MSNdis_AtmSupportedVcRates ;

// #line 1113
typedef struct _MSNdis_AtmSupportedServiceCategory ;

// #line 1131
typedef struct _MSNdis_AtmSupportedAalTypes ;

// #line 1149
typedef struct _MSNdis_AtmHardwareCurrentAddress ;

// #line 1167
typedef struct _MSNdis_AtmMaxActiveVcs ;

// #line 1185
typedef struct _MSNdis_AtmMaxActiveVciBits ;

// #line 1203
typedef struct _MSNdis_AtmMaxActiveVpiBits ;

// #line 1221
typedef struct _MSNdis_AtmMaxAal0PacketSize ;

// #line 1239
typedef struct _MSNdis_AtmMaxAal1PacketSize ;

// #line 1257
typedef struct _MSNdis_AtmMaxAal34PacketSize ;

// #line 1275
typedef struct _MSNdis_AtmMaxAal5PacketSize ;

// #line 1293
typedef struct _MSNdis_AtmReceiveCellsOk ;

// #line 1311
typedef struct _MSNdis_AtmTransmitCellsOk ;

// #line 1329
typedef struct _MSNdis_AtmReceiveCellsDropped ;

// #line 1347
typedef struct _MSNdis_EthernetPermanentAddress ;

// #line 1365
typedef struct _MSNdis_EthernetCurrentAddress ;

// #line 1383
typedef struct _MSNdis_EthernetMulticastList ;

// #line 1405
typedef struct _MSNdis_EthernetMaximumMulticastListSize ;

// #line 1423
typedef struct _MSNdis_EthernetMacOptions ;

// #line 1441
typedef struct _MSNdis_EthernetReceiveErrorAlignment ;

// #line 1459
typedef struct _MSNdis_EthernetOneTransmitCollision ;

// #line 1477
typedef struct _MSNdis_EthernetMoreTransmitCollisions ;

// #line 1495
typedef struct _MSNdis_TokenRingPermanentAddress ;

// #line 1513
typedef struct _MSNdis_TokenRingCurrentAddress ;

// #line 1531
typedef struct _MSNdis_TokenRingCurrentFunctional ;

// #line 1549
typedef struct _MSNdis_TokenRingCurrentGroup ;

// #line 1567
typedef struct _MSNdis_TokenRingLastOpenStatus ;

// #line 1585
typedef struct _MSNdis_TokenRingCurrentRingStatus ;

// #line 1603
typedef struct _MSNdis_TokenRingCurrentRingState ;

// #line 1621
typedef struct _MSNdis_TokenRingLineErrors ;

// #line 1639
typedef struct _MSNdis_TokenRingLostFrames ;

// #line 1657
typedef struct _MSNdis_FddiLongPermanentAddress ;

// #line 1675
typedef struct _MSNdis_FddiLongCurrentAddress ;

// #line 1693
typedef struct _MSNdis_FddiLongMulticastList ;

// #line 1715
typedef struct _MSNdis_FddiLongMaximumListSize ;

// #line 1733
typedef struct _MSNdis_FddiShortPermanentAddress ;

// #line 1751
typedef struct _MSNdis_FddiShortCurrentAddress ;

// #line 1769
typedef struct _MSNdis_FddiShortMulticastList ;

// #line 1791
typedef struct _MSNdis_FddiShortMaximumListSize ;

// #line 1809
typedef struct _MSNdis_FddiAttachmentType ;

// #line 1827
typedef struct _MSNdis_FddiUpstreamNodeLong ;

// #line 1845
typedef struct _MSNdis_FddiDownstreamNodeLong ;

// #line 1863
typedef struct _MSNdis_FddiFrameErrors ;

// #line 1881
typedef struct _MSNdis_FddiFramesLost ;

// #line 1899
typedef struct _MSNdis_FddiRingManagmentState ;

// #line 1917
typedef struct _MSNdis_FddiLctFailures ;

// #line 1935
typedef struct _MSNdis_FddiLemRejects ;

// #line 1953
typedef struct _MSNdis_FddiLConnectionState ;

// #line 1972
typedef struct _MSNdis_StatusResetStart ;

// #line 1988
typedef struct _MSNdis_StatusResetEnd ;

// #line 2004
typedef struct _MSNdis_StatusMediaConnect ;

// #line 2020
typedef struct _MSNdis_StatusMediaDisconnect ;

// #line 2035
typedef struct _MSNdis_StatusMediaSpecificIndication ;

// #line 2057
typedef struct _MSNdis_StatusLinkSpeedChange ;

// #line 2075
typedef struct _MSNdis_StatusProtocolBind ;

// #line 2092
typedef struct _MSNdis_StatusProtocolUnbind ;

// #line 2109
typedef struct _KEYBOARD_PORT_WMI_STD_DATA ;

// #line 2152
typedef struct _POINTER_PORT_WMI_STD_DATA ;

// #line 2205
typedef struct _MSMouse_ClassInformation ;

// #line 2223
typedef struct _MSKeyboard_ClassInformation ;

// #line 2241
typedef struct _MSAcpi_ThermalZoneTemperature ;

// #line 2304
typedef struct _WMI_DISK_GEOMETRY ;

// #line 2342
typedef struct _WMI_DISK_PERFORMANCE ;

// #line 2415
typedef struct _MSDiskDriver_Performance ;

// #line 2437
typedef struct _STORAGE_FAILURE_PREDICT_STATUS ;

// #line 2460
typedef struct _STORAGE_FAILURE_PREDICT_DATA ;

// #line 2483
typedef struct _STORAGE_FAILURE_PREDICT_EVENT ;

// #line 2513
typedef struct _STORAGE_FAILURE_PREDICT_FUNCTION ;

// #line 2528
typedef struct _MSIde_PortDeviceInfo ;

// #line 2556
typedef struct _MSSerial_PortName ;

// #line 2573
typedef struct _SERIAL_WMI_COMM_DATA ;

// #line 2723
typedef struct _SERIAL_WMI_HW_DATA ;

// #line 2770
typedef struct _SERIAL_WMI_PERF_DATA ;

// #line 2813
typedef struct _SERIAL_WMI_COMMPROP ;

// #line 2920
typedef struct _PARPORT_WMI_ALLOC_FREE_COUNTS ;

// #line 2943
typedef struct _PARALLEL_WMI_LOG_INFO ;

// #line 3041
typedef struct _REDBOOK_WMI_STD_DATA ;

// #line 3094
typedef struct _REDBOOK_WMI_PERF_DATA ;

// #line 3137
typedef struct _RegisteredGuids ;

// #line 475 "serial.h"
typedef struct _CONFIG_DATA ;
typedef struct _SERIAL_CISR_SW ;
typedef struct _SERIAL_FIRMWARE_DATA ;
typedef struct _SERIAL_DEVICE_STATE ;
typedef struct _SERIAL_DEVICE_EXTENSION ;
typedef struct _SERIAL_MULTIPORT_DISPATCH ;
typedef enum _SERIAL_MEM_COMPARES ;
typedef struct _SERIAL_LIST_DATA ;
typedef struct _SERIAL_GLOBALS ;
typedef struct _SERIAL_USER_DATA ;
typedef struct _SERIAL_PTR_CTX ;

// #line 20 "serialp.h"
typedef NTSTATUS ;
typedef void ;
typedef struct _SERIAL_UPDATE_CHAR ;
typedef struct _SERIAL_IOCTL_SYNC ;


// #line 26 "immediat.c"
void SerialGetNextImmediate(PIRP *  CurrentOpIrp , PLIST_ENTRY QueueToProcess ,
	PIRP *  NewIrp , BOOLEAN CompleteCurrent , PSERIAL_DEVICE_EXTENSION
	Extension ) ;
void SerialCancelImmediate(PDEVICE_OBJECT DeviceObject , PIRP Irp ) ;
BOOLEAN SerialGiveImmediateToIsr(PVOID Context ) ;
BOOLEAN SerialGrabImmediateFromIsr(PVOID Context ) ;


void SerialStartImmediate(PSERIAL_DEVICE_EXTENSION Extension )
{
  KIRQL OldIrql ;
  LARGE_INTEGER TotalTime ;
  BOOLEAN UseATimer ;
  SERIAL_TIMEOUTS Timeouts ;
  UseATimer = 0;
  ((Extension->CurrentImmediateIrp)->IoStatus).Status = (NTSTATUS)0x00000103L;

  // TRACER
  _ABORT(pending != 0);
  pending = 1;
  
  // BLAST
  /*   if(pending == 0) */
  /*     pending = 1; */
  /*   else */
  /*     errorFn(); */
  
  ((((Extension->CurrentImmediateIrp)->Tail).Overlay).CurrentStackLocation)->Control |= 0x01;   
  * & OldIrql = KfAcquireSpinLock(& Extension->ControlLock);
  Timeouts = Extension->Timeouts;
  KfReleaseSpinLock(& Extension->ControlLock, OldIrql);
  if(Timeouts.WriteTotalTimeoutConstant ||Timeouts.WriteTotalTimeoutMultiplier)
    {
      UseATimer = 1;
      TotalTime.QuadPart = (LONGLONG )((ULONG)Timeouts.WriteTotalTimeoutMultiplier);
      TotalTime.QuadPart += Timeouts.WriteTotalTimeoutConstant;
      TotalTime.QuadPart *= - 10000;
    }
  {
    ((((((Extension->CurrentImmediateIrp)->Tail).Overlay).CurrentStackLocation
       )->Parameters).Others).Argument4 = (void *  )0;
    /* TRACER to shadow */
    myArgument4 = (void *  )0;
  }
  IoAcquireCancelSpinLock(& OldIrql);
  if((Extension->CurrentImmediateIrp)->Cancel)
    {
      PIRP OldIrp = Extension->CurrentImmediateIrp;
      Extension->CurrentImmediateIrp = (void *  )0;
      IoReleaseCancelSpinLock(OldIrql);
      (OldIrp->IoStatus).Status = (NTSTATUS )0xC0000120L;
      (OldIrp->IoStatus).Information = 0;
      IofCompleteRequest(OldIrp, 0);
      SerialIRPEpilogue(Extension);
    }
  else
    {
      (PDRIVER_CANCEL )((PVOID )InterlockedExchange((PLONG )((PVOID *) 
		       (& (Extension->CurrentImmediateIrp)->CancelRoutine)),
						    (LONG )((PVOID )SerialCancelImmediate)));
/*       do */
/* 	{ */
/* 	  LONG _refType = 0x00000002; */
/* 	  PULONG_PTR _arg4 = (PVOID )(& */
/* 				      ((((((Extension->CurrentImmediateIrp)->Tail).Overlay */
/* 					  ).CurrentStackLocation)->Parameters).Others).Argument4 */
/* 				      ); */
/* 	  * _arg4 |= _refType; */
/* 	} */
/*       while(0); */
      if(UseATimer)
	{
	  SerialSetTimer(& Extension->ImmediateTotalTimer,
			 TotalTime, 
			 & Extension->TotalImmediateTimeoutDpc, Extension);
/* 	  do */
/* 	    { */
/* 	      LONG _refType = 0x00000004; */
/* 	      PULONG_PTR _arg4 = (PVOID )(& */
/* 					  ((((((Extension->CurrentImmediateIrp)->Tail */
/* 					       ).Overlay).CurrentStackLocation)->Parameters */
/* 					    ).Others).Argument4); */
/* 	      * _arg4 |= _refType; */
/* 	    } */
/* 	  while(0); */
	}
      KeSynchronizeExecution(Extension->Interrupt,
			     SerialGiveImmediateToIsr, Extension);
      IoReleaseCancelSpinLock(OldIrql);
    }
}

void SerialCompleteImmediate(PKDPC Dpc , PVOID DeferredContext , PVOID SystemContext1 , 
			     PVOID SystemContext2 )
{
	PSERIAL_DEVICE_EXTENSION Extension;	
	KIRQL OldIrql ;

	Extension = DeferredContext;
	IoAcquireCancelSpinLock(& OldIrql);
	SerialTryToCompleteCurrent(Extension, (void *  )0, OldIrql, 
				   (NTSTATUS )0x00000000L, & Extension->CurrentImmediateIrp, 
				   (void *  )0,				    
				   (void *  )0, & Extension->ImmediateTotalTimer, 
				   (void *  )0, /* Starter */
				   0, /* TRACER: StarterCode */
				   SerialGetNextImmediate, /* GetNextIrp */
				   0x00000001 /*RefType */);
	SerialDpcEpilogue(Extension, Dpc);
}

void SerialTimeoutImmediate(PKDPC Dpc , PVOID DeferredContext , PVOID SystemContext1 , 
			    PVOID SystemContext2 )
{
  PSERIAL_DEVICE_EXTENSION Extension;  
  KIRQL OldIrql ;

  Extension = DeferredContext;
  IoAcquireCancelSpinLock(& OldIrql);
  SerialTryToCompleteCurrent(Extension, SerialGrabImmediateFromIsr,
			     OldIrql, (NTSTATUS )0x00000102L, &
			     Extension->CurrentImmediateIrp, (void *  )0, (void *  )0, &
			     Extension->ImmediateTotalTimer, 
			     (void *  )0,
			     0, /* TRACER: StarterCode */
			     SerialGetNextImmediate, 
			     0x00000004);
  SerialDpcEpilogue(Extension, Dpc);
}

void SerialGetNextImmediate(PIRP *  CurrentOpIrp , PLIST_ENTRY QueueToProcess ,
			    PIRP *  NewIrp , BOOLEAN CompleteCurrent , 
			    PSERIAL_DEVICE_EXTENSION Extension )
{
  KIRQL OldIrql ;
  PIRP OldIrp;
  
  OldIrp = * CurrentOpIrp;
  IoAcquireCancelSpinLock(& OldIrql);
  Extension->TotalCharsQueued--;
  * CurrentOpIrp = (void *  )0;
  * NewIrp = (void *  )0;
  KeSynchronizeExecution(Extension->Interrupt, SerialProcessEmptyTransmit,
			 Extension);
  IoReleaseCancelSpinLock(OldIrql);
  IofCompleteRequest(OldIrp, 2);
  SerialIRPEpilogue(Extension);
}

void SerialCancelImmediate(PDEVICE_OBJECT DeviceObject , PIRP Irp )
{
  PSERIAL_DEVICE_EXTENSION Extension;
  
  Extension = DeviceObject->DeviceExtension;
  SerialTryToCompleteCurrent(Extension, SerialGrabImmediateFromIsr,
			     Irp->CancelIrql, (NTSTATUS )0xC0000120L, &
			     Extension->CurrentImmediateIrp, (void *  )0, (void *  )0, &
			     Extension->ImmediateTotalTimer, 
			     (void *  )0,
			     0, /* TRACER: StarterCode */
			     SerialGetNextImmediate, 
			     0x00000002);
}

BOOLEAN SerialGiveImmediateToIsr(PVOID Context )
{
  PSERIAL_DEVICE_EXTENSION Extension;
  
  Extension = Context;
  Extension->TransmitImmediate = 1;
  Extension->ImmediateChar = * (UCHAR *)((Extension->CurrentImmediateIrp)->AssociatedIrp).SystemBuffer;
/*   do */
/*     { */
/*       LONG _refType = 0x00000001; */
/*       PULONG_PTR _arg4 = (PVOID )(& */
/* 				  ((((((Extension->CurrentImmediateIrp)->Tail).Overlay).CurrentStackLocation */
/* 				     )->Parameters).Others).Argument4); */
/*       * _arg4 |= _refType; */
/*     } */
/*   while(0); */

  if(! Extension->WriteLength)
    {
      if(Extension->HoldingEmpty)
	{
	  WRITE_PORT_UCHAR(Extension->Controller + (ULONG )(0x01 * 1), 0);
	  WRITE_PORT_UCHAR(Extension->Controller +
			   (ULONG )(0x01 * 1), (UCHAR)(0x01 | 0x02 | 0x04 | 0x08));
	}
    }
  return 0;
}

// #line 513
BOOLEAN SerialGrabImmediateFromIsr(PVOID Context )
{
  PSERIAL_DEVICE_EXTENSION Extension;

  Extension = Context;
  if(Extension->TransmitImmediate)
    {
      Extension->TransmitImmediate = 0;
/*       do */
/* 	{ */
/* 	  LONG _refType = 0x00000001; */
/* 	  PULONG_PTR _arg4 = (PVOID )(& */
/* 				      ((((((Extension->CurrentImmediateIrp)->Tail).Overlay */
/* 					  ).CurrentStackLocation)->Parameters).Others).Argument4 */
/* 				      ); */
/* 	  * _arg4 &= ~ _refType; */
/* 	} */
/*       while(0); */
    }
  return 0;
}

// #line 16 "C:/NTDDK/inc/stddef.h"

// #pragma once
// #line 77
// #line 16 "C:/Program Files/Microsoft Visual Studio/VC98/include/excpt.h"

// #pragma once
// #line 32

// #pragma pack(push, 8)
// #line 72
// #pragma pack(pop)
// #line 25 "C:/NTDDK/inc/ntdef.h"

// #pragma once
// #line 15 "C:/Program Files/Microsoft Visual Studio/VC98/include/ctype.h"

// #pragma once
// #line 127 "C:/NTDDK/inc/ntdef.h"
// #line 25 "C:/NTDDK/inc/basetsd.h"
// #line 217 "C:/NTDDK/inc/ntdef.h"
// #line 17 "C:/NTDDK/inc/guiddef.h"
// #line 16 "C:/NTDDK/inc/string.h"
// #line 1233 "C:/NTDDK/inc/ntdef.h"
// #line 75 "C:/NTDDK/inc/ddk/ntddk.h"
// #line 24 "C:/NTDDK/inc/pshpack4.h"

// #pragma warning(disable:4103)

// #pragma pack(push, 4)
// #line 618 "C:/NTDDK/inc/ddk/ntddk.h"
// #line 27 "C:/NTDDK/inc/poppack.h"

// #pragma warning(disable:4103)

// #pragma pack(pop)
// #line 642 "C:/NTDDK/inc/ddk/ntddk.h"
// #line 1952

// #pragma warning(push)

// #pragma warning(disable:4035)
// #line 2019

// #pragma warning(pop)
// #line 2214
// #line 24 "C:/NTDDK/inc/pshpack4.h"

// #pragma warning(disable:4103)

// #pragma pack(push, 4)
// #line 8309 "C:/NTDDK/inc/ddk/ntddk.h"
// #line 27 "C:/NTDDK/inc/poppack.h"

// #pragma warning(disable:4103)

// #pragma pack(pop)
// #line 8419 "C:/NTDDK/inc/ddk/ntddk.h"
// #line 24 "C:/NTDDK/inc/pshpack1.h"

// #pragma warning(disable:4103)

// #pragma pack(push, 1)
// #line 8518 "C:/NTDDK/inc/ddk/ntddk.h"
// #line 27 "C:/NTDDK/inc/poppack.h"

// #pragma warning(disable:4103)

// #pragma pack(pop)
// #line 8761 "C:/NTDDK/inc/ddk/ntddk.h"
// #line 14235
// #line 24 "C:/NTDDK/inc/pshpack4.h"

// #pragma warning(disable:4103)

// #pragma pack(push, 4)
// #line 14271 "C:/NTDDK/inc/ddk/ntddk.h"
// #line 27 "C:/NTDDK/inc/poppack.h"

// #pragma warning(disable:4103)

// #pragma pack(pop)
// #line 14615 "C:/NTDDK/inc/ddk/ntddk.h"
// #line 16100

SERIAL_GLOBALS SerialGlobals ;
SERIAL_FIRMWARE_DATA driverDefaults ;

NTSTATUS DriverEntry(PDRIVER_OBJECT DriverObject , PUNICODE_STRING RegistryPath)
{
  RTL_QUERY_REGISTRY_TABLE jensenTable[2];
  UNICODE_STRING jensenData ;
  UNICODE_STRING jensenValue ;
  BOOLEAN jensenDetected ;
  PUCHAR jensenBuffer ;
  PVOID lockPtr;
  NTSTATUS temp__1;

  //jensenTable[2] = {0};
  lockPtr = MmLockPagableDataSection(SerialReset);

  SerialGlobals.PAGESER_Handle = lockPtr;
  (SerialGlobals.RegistryPath).MaximumLength = RegistryPath->MaximumLength;
  (SerialGlobals.RegistryPath).Length = RegistryPath->Length;
  (SerialGlobals.RegistryPath).Buffer = ExAllocatePoolWithTag(PagedPool,
							      (SerialGlobals.RegistryPath).MaximumLength,
							      tag__1 /*'XMOC'*/);
  if((SerialGlobals.RegistryPath).Buffer == (void *  )0)
    {
      MmUnlockPagableImageSection(lockPtr);
      return (NTSTATUS )0xC000009AL;
    }
  memset((SerialGlobals.RegistryPath).Buffer, 0,
	 (SerialGlobals.RegistryPath).MaximumLength);
  memmove((SerialGlobals.RegistryPath).Buffer, RegistryPath->Buffer,
	  RegistryPath->Length);

  (& SerialGlobals.AllDevObjs)->Flink =  & SerialGlobals.AllDevObjs ;
  (& SerialGlobals.AllDevObjs)->Blink = & SerialGlobals.AllDevObjs;
  
  SerialGetConfigDefaults(& driverDefaults, RegistryPath);
  if(driverDefaults.ShouldBreakOnEntry)
    {
      // DbgBreakPoint();
    }
/*   DriverObject->DriverUnload = SerialUnload; */
/*   (DriverObject->DriverExtension)->AddDevice = SerialAddDevice; */
/*   (DriverObject->MajorFunction)[0x09] = SerialFlush; */
/*   (DriverObject->MajorFunction)[0x04] = SerialWrite; */
/*   (DriverObject->MajorFunction)[0x03] = SerialRead; */
/*   (DriverObject->MajorFunction)[0x0e] = SerialIoControl; */
/*   (DriverObject->MajorFunction)[0x0f] = SerialInternalIoControl; */
/*   (DriverObject->MajorFunction)[0x00] = SerialCreateOpen; */
/*   (DriverObject->MajorFunction)[0x02] = SerialClose; */
/*   (DriverObject->MajorFunction)[0x12] = SerialCleanup; */
/*   (DriverObject->MajorFunction)[0x1b] = SerialPnpDispatch; */
/*   (DriverObject->MajorFunction)[0x16] = SerialPowerDispatch; */
/*   (DriverObject->MajorFunction)[0x05] = SerialQueryInformationFile; */
/*   (DriverObject->MajorFunction)[0x06] = SerialSetInformationFile; */
/*   (DriverObject->MajorFunction)[0x17] = SerialSystemControlDispatch; */
  jensenBuffer = ExAllocatePoolWithTag(PagedPool, 512,tag__1 /* 'XMOC' */);
  if(! jensenBuffer )
    {
      jensenDetected = 0;
    }
  else
    {
      jensenData.Length = 0;
      jensenData.MaximumLength = 512;
      jensenData.Buffer = (PWCHAR )(& jensenBuffer[0]);
      RtlInitUnicodeString(& jensenValue, "J\0e\0n\0s\0e\0n\0");
      // #line 259
      (jensenTable[0]).Flags = 0x00000020 | 0x00000004;
      // #line 261
      (jensenTable[0]).Name = "I\0d\0e\0n\0t\0i\0f\0i\0e\0r\0";
      (jensenTable[0]).EntryContext = & jensenData;
      // #line 264
      temp__1 = (NTSTATUS )RtlQueryRegistryValues(0 | 0x80000000,
					      "\134\0R\0E\0G\0I\0S\0T\0R\0Y\0\134\0M\0A\0C\0H\0I\0N\0E\0\134\0H\0A\0R\0D\0W\0A\0R\0E\0\134\0D\0E\0S\0C\0R\0I\0P\0T\0I\0O\0N\0\134\0S\0Y\0S\0T\0E\0M\0",
						  & jensenTable[0], (void *  )0, (void *  )0);

      if(! ( temp__1  >= 0))
	{
	  jensenDetected = 0;
	}
      else
	{
	  if(jensenData.Length <= sizeof(WCHAR ) * 6)
	    jensenDetected = 0;
	  else
	    {
	      jensenData.Length -= sizeof(WCHAR ) * 6;
	      jensenData.MaximumLength -= sizeof(WCHAR ) * 6;
	      jensenData.Buffer = (PWCHAR )(& jensenBuffer[sizeof(WCHAR ) * 6]);
	      jensenDetected = RtlEqualUnicodeString(& jensenData, & jensenValue, 0);
	      
	    }
	}
      ExFreePool(jensenBuffer);
    }
  if(jensenDetected) { }
  driverDefaults.JensenDetected = jensenDetected;
  // if(~ 0)
  {
    (void )SerialEnumerateLegacy(DriverObject, RegistryPath, & driverDefaults);
  }
  MmUnlockPagableImageSection(lockPtr);
  return (NTSTATUS )0x00000000L;
}

BOOLEAN SerialCleanLists(PVOID Context )
{
  PSERIAL_DEVICE_EXTENSION pDevExt;
  PSERIAL_MULTIPORT_DISPATCH pDispatch;
  PLIST_ENTRY EX_Blink ;
  PLIST_ENTRY EX_ListHead ;
  PSERIAL_DEVICE_EXTENSION pNewRoot ;
	    
  pDevExt = (PSERIAL_DEVICE_EXTENSION )Context;
  if(pDevExt->PortOnAMultiportCard)
    {
      pDispatch = (PSERIAL_MULTIPORT_DISPATCH )pDevExt->OurIsrContext;
      (pDispatch->Extensions)[pDevExt->PortIndex - 1] = (void *  )0;
      if(pDevExt->Indexed == 0)
	{
	  pDispatch->UsablePortMask &= /* ~ */ (1 << pDevExt->PortIndex - 1);
	  pDispatch->MaskInverted &= /* ~ */ pDevExt->NewMaskInverted;
	}
    }
  if(! ((& pDevExt->TopLevelSharers)->Flink == & pDevExt->TopLevelSharers))    
    {
      if(! ((& pDevExt->MultiportSiblings)->Flink == & pDevExt->MultiportSiblings))
	{
	  pNewRoot = (SERIAL_DEVICE_EXTENSION *  )((PCHAR)
			   (pDevExt->MultiportSiblings).Flink - 
			   (ULONG_PTR) (& ((SERIAL_DEVICE_EXTENSION *  )0)->MultiportSiblings));
	  {
	    EX_ListHead = & pDevExt->TopLevelSharers;
	    EX_Blink = EX_ListHead->Blink;
	    (& pNewRoot->TopLevelSharers)->Flink =  EX_ListHead;
	    (& pNewRoot->TopLevelSharers)->Blink = EX_Blink;
	    EX_Blink->Flink = & pNewRoot->TopLevelSharers;
	    EX_ListHead->Blink = & pNewRoot->TopLevelSharers;
	  }
	}
      {
	EX_Flink = (& pDevExt->TopLevelSharers)->Flink;
	EX_Blink = (& pDevExt->TopLevelSharers)->Blink;
	EX_Blink->Flink = EX_Flink;
	EX_Flink->Blink = EX_Blink;
      }
      (& pDevExt->TopLevelSharers)->Flink =  & pDevExt->TopLevelSharers;
      (&  pDevExt->TopLevelSharers)->Blink = & pDevExt->TopLevelSharers;
					     
      if(! ((& (pDevExt->CIsrSw)->SharerList)->Flink == &
	    (pDevExt->CIsrSw)->SharerList))
	pDevExt->Interrupt = (void *  )0;
    }
  if(! ((& pDevExt->MultiportSiblings)->Flink == &
	pDevExt->MultiportSiblings))
    {
      {
	EX_Flink = (& pDevExt->MultiportSiblings)->Flink;
	EX_Blink = (& pDevExt->MultiportSiblings)->Blink;
	EX_Blink->Flink = EX_Flink;
	EX_Flink->Blink = EX_Blink;
      }
      (& pDevExt->MultiportSiblings)->Flink = & pDevExt->MultiportSiblings;
      (& pDevExt->MultiportSiblings)->Blink = & pDevExt->MultiportSiblings;
    }
	if(! ((& pDevExt->CommonInterruptObject)->Flink == 
	      & pDevExt->CommonInterruptObject))
	{
	  {
	    EX_Flink = (& pDevExt->CommonInterruptObject)->Flink;
	    EX_Blink = (& pDevExt->CommonInterruptObject)->Blink;
	    EX_Blink->Flink = EX_Flink;
	    EX_Flink->Blink = EX_Blink;
	  }

	  (& pDevExt->CommonInterruptObject)->Flink =  & pDevExt->CommonInterruptObject;
	  (& pDevExt->CommonInterruptObject)->Blink =  & pDevExt->CommonInterruptObject;
	  pDevExt->Interrupt = (void *  )0;
	}
	{
	  EX_Flink = (& pDevExt->AllDevObjs)->Flink;
	  EX_Blink = (& pDevExt->AllDevObjs)->Blink;
	  EX_Blink->Flink = EX_Flink;
	  EX_Flink->Blink = EX_Blink;
	}
	(& pDevExt->AllDevObjs)->Flink =  & pDevExt->AllDevObjs;
	(& pDevExt->AllDevObjs)->Blink =  & pDevExt->AllDevObjs;
	return 1;
}

// #line 475
void SerialReleaseResources(PSERIAL_DEVICE_EXTENSION PDevExt )
{
  ULONG i ;
  int BLAST_NONDET ;
  BOOLEAN temp;

  if(PDevExt->Interrupt != (void *  )0)
    KeSynchronizeExecution(PDevExt->Interrupt, SerialCleanLists, PDevExt);
  if(PDevExt->Interrupt != (void *  )0)
    {
      IoDisconnectInterrupt(PDevExt->Interrupt);
      PDevExt->Interrupt = (void *  )0;
      if(PDevExt->CIsrSw != (void *  )0)
	{
	  ExFreePool(PDevExt->CIsrSw);
	  PDevExt->CIsrSw = (void *  )0;
	}
    }
  if(PDevExt->PortOnAMultiportCard)
    {
      // #line 534
      //BLAST forloop for(i = 0; i < 16; i++)
      for(i = 0; i < BLAST_NONDET; i++)
	{
	  if((((PSERIAL_MULTIPORT_DISPATCH )PDevExt->OurIsrContext)->Extensions)[i] !=
	     (void *  )0)
	    {
	      break;
	    }
	} // end for
      if(i == 16)
	{
	  ExFreePool(PDevExt->OurIsrContext);
	}
    }
  SerialCancelTimer(& PDevExt->ReadRequestTotalTimer, PDevExt);
  SerialCancelTimer(& PDevExt->ReadRequestIntervalTimer, PDevExt);
  SerialCancelTimer(& PDevExt->WriteRequestTotalTimer, PDevExt);
  SerialCancelTimer(& PDevExt->ImmediateTotalTimer, PDevExt);
  SerialCancelTimer(& PDevExt->XoffCountTimer, PDevExt);
  SerialCancelTimer(& PDevExt->LowerRTSTimer, PDevExt);

  temp = KeRemoveQueueDpc(& PDevExt->CompleteWriteDpc);
  if(temp)
    InterlockedDecrement(& PDevExt->DpcCount);
  temp=KeRemoveQueueDpc(& PDevExt->CompleteReadDpc);
  if(temp)
    InterlockedDecrement(& PDevExt->DpcCount);
  temp = KeRemoveQueueDpc(& PDevExt->TotalReadTimeoutDpc);
  if(temp)
    InterlockedDecrement(& PDevExt->DpcCount);
  temp = KeRemoveQueueDpc(& PDevExt->IntervalReadTimeoutDpc);
  if(temp)
    InterlockedDecrement(& PDevExt->DpcCount);
  temp= KeRemoveQueueDpc(& PDevExt->TotalWriteTimeoutDpc);
  if(temp)
    InterlockedDecrement(& PDevExt->DpcCount);
  temp = KeRemoveQueueDpc(& PDevExt->CommErrorDpc);
  if(temp)
    InterlockedDecrement(& PDevExt->DpcCount);
  temp = KeRemoveQueueDpc(& PDevExt->CompleteImmediateDpc);
  if(temp)
    InterlockedDecrement(& PDevExt->DpcCount);
  temp = KeRemoveQueueDpc(& PDevExt->TotalImmediateTimeoutDpc);
  if(temp)
    InterlockedDecrement(& PDevExt->DpcCount);
  temp = KeRemoveQueueDpc(& PDevExt->CommWaitDpc);
  if(temp)
    InterlockedDecrement(& PDevExt->DpcCount);
  temp = KeRemoveQueueDpc(& PDevExt->XoffCountTimeoutDpc);
  if(temp)
    InterlockedDecrement(& PDevExt->DpcCount);
  temp = KeRemoveQueueDpc(& PDevExt->XoffCountCompleteDpc);
  if(temp)
    InterlockedDecrement(& PDevExt->DpcCount);
  temp = KeRemoveQueueDpc(& PDevExt->StartTimerLowerRTSDpc);
  if(temp)
    InterlockedDecrement(& PDevExt->DpcCount);
  temp = KeRemoveQueueDpc(& PDevExt->PerhapsLowerRTSDpc);
  if(temp)
    InterlockedDecrement(& PDevExt->DpcCount);
  if(PDevExt->UnMapRegisters)
    MmUnmapIoSpace(PDevExt->Controller, PDevExt->SpanOfController);
  if(PDevExt->UnMapStatus)
    MmUnmapIoSpace(PDevExt->InterruptStatus, PDevExt->SpanOfInterruptStatus);
		   
}

NTSTATUS SerialPrepareRemove(PDEVICE_OBJECT PDevObj )
{
  PSERIAL_DEVICE_EXTENSION pDevExt;
  POWER_STATE state ;
  ULONG pendingIRPs ;

  pDevExt = (PSERIAL_DEVICE_EXTENSION)PDevObj->DeviceExtension;
  
  SerialSetDeviceFlags(pDevExt, & pDevExt->DevicePNPAccept, 0x1L, 1);
  SerialKillPendingIrps(PDevObj);
  pendingIRPs = InterlockedDecrement(& pDevExt->PendingIRPCnt);
  if(pendingIRPs)
    {
      KeWaitForSingleObject(& pDevExt->PendingIRPEvent, Executive,
			    KernelMode, 0, (void *  )0);
    }
  state.DeviceState = PowerDeviceD3;
  PoSetPowerState(PDevObj, DevicePowerState, state);
  return 1;
}

void SerialDisableInterfacesResources(PDEVICE_OBJECT PDevObj , BOOLEAN DisableUART )
{
  PSERIAL_DEVICE_EXTENSION pDevExt;
  
  pDevExt = (PSERIAL_DEVICE_EXTENSION)PDevObj->DeviceExtension;		
  if(pDevExt->Flags & 0x1L)
    {
      if(! (pDevExt->Flags & 0x2L))
	{
	  if(DisableUART)
	    {
	      WRITE_PORT_UCHAR(pDevExt->Controller + (ULONG )(0x01 * 1),0);
			       
	    }
	  SerialReleaseResources(pDevExt);
	}
      IoWMIRegistrationControl(PDevObj, 2);
    }
  SerialUndoExternalNaming(pDevExt);
}

NTSTATUS SerialRemoveDevObj(PDEVICE_OBJECT PDevObj )
{
  PSERIAL_DEVICE_EXTENSION pDevExt;
  
  pDevExt = (PSERIAL_DEVICE_EXTENSION )PDevObj->DeviceExtension;
  
  if(! (pDevExt->DevicePNPAccept & 0x8L))
    SerialDisableInterfacesResources(PDevObj, 1);
  IoDetachDevice(pDevExt->LowerDeviceObject);
  if((pDevExt->NtNameForPort).Buffer != (void *  )0)
    ExFreePool((pDevExt->NtNameForPort).Buffer);
  if((pDevExt->DeviceName).Buffer != (void *  )0)
    ExFreePool((pDevExt->DeviceName).Buffer);
  if((pDevExt->SymbolicLinkName).Buffer != (void *  )0)
      ExFreePool((pDevExt->SymbolicLinkName).Buffer);
  if((pDevExt->DosName).Buffer != (void *  )0)
      ExFreePool((pDevExt->DosName).Buffer);
  if((pDevExt->ObjectDirectory).Buffer)
    ExFreePool((pDevExt->ObjectDirectory).Buffer);
  IoDeleteDevice(PDevObj);
  return (NTSTATUS )0x00000000L;
}

void SerialKillPendingIrps(PDEVICE_OBJECT PDevObj )
{
  PSERIAL_DEVICE_EXTENSION pDevExt;
  KIRQL oldIrql ;

  pDevExt = PDevObj->DeviceExtension;
  SerialKillAllReadsOrWrites(PDevObj, & pDevExt->WriteQueue, &
			     pDevExt->CurrentWriteIrp);
  SerialKillAllReadsOrWrites(PDevObj, & pDevExt->ReadQueue, &
			     pDevExt->CurrentReadIrp);
  SerialKillAllReadsOrWrites(PDevObj, & pDevExt->PurgeQueue, &
			     pDevExt->CurrentPurgeIrp);
  SerialKillAllReadsOrWrites(PDevObj, & pDevExt->MaskQueue, &
			     pDevExt->CurrentMaskIrp);
  IoAcquireCancelSpinLock(& oldIrql);

  if(pDevExt->CurrentWaitIrp)
    {
      PDRIVER_CANCEL cancelRoutine ;
      cancelRoutine = (pDevExt->CurrentWaitIrp)->CancelRoutine;
      (pDevExt->CurrentWaitIrp)->Cancel = 1;
      if(cancelRoutine)
	{
	  (pDevExt->CurrentWaitIrp)->CancelIrql = oldIrql;
	  (pDevExt->CurrentWaitIrp)->CancelRoutine = (void *  )0;
	  // ?? cancelRoutine(PDevObj, pDevExt->CurrentWaitIrp);
	}
    }
  else
      IoReleaseCancelSpinLock(oldIrql);
  if(pDevExt->PendingWakeIrp != (void *  )0)
    {
      IoCancelIrp(pDevExt->PendingWakeIrp);
      pDevExt->PendingWakeIrp = (void *  )0;
    }
  SerialKillAllStalled(PDevObj);
}

BOOLEAN SerialSingleToMulti(PVOID Context )
{
  PSERIAL_DEVICE_EXTENSION pDevExt;
  PSERIAL_MULTIPORT_DISPATCH pOurIsrContext ;
  PSERIAL_MULTIPORT_DISPATCH pNewIsrContext;
  PVOID isrFunc ;

  pDevExt = (PSERIAL_DEVICE_EXTENSION )Context;
  pNewIsrContext = (PSERIAL_MULTIPORT_DISPATCH)pDevExt->NewExtension;

  pOurIsrContext = pNewIsrContext;
  pDevExt->OurIsrContext = pNewIsrContext ;
  pDevExt->TopLevelOurIsrContext = pNewIsrContext;

  pDevExt->PortOnAMultiportCard = 1;
  (pOurIsrContext->Extensions)[pDevExt->PortIndex - 1] = pDevExt;
  pOurIsrContext->InterruptStatus = pDevExt->InterruptStatus;
  if(pDevExt->Indexed == 0)
    {
      pOurIsrContext->UsablePortMask = 1 << pDevExt->PortIndex - 1;
      pOurIsrContext->MaskInverted = pDevExt->MaskInverted;
      isrFunc = SerialBitMappedMultiportIsr;
    }
  else
    isrFunc = SerialIndexedMultiportIsr;
  pDevExt->OurIsr = isrFunc;
  pDevExt->TopLevelOurIsr = isrFunc;
  if((pDevExt->CIsrSw)->IsrFunc != SerialSharerIsr)
    {
      (pDevExt->CIsrSw)->IsrFunc = isrFunc;
      (pDevExt->CIsrSw)->Context = pOurIsrContext;
    }
  return 1;
}

BOOLEAN SerialAddToMulti(PVOID Context )
{
  PSERIAL_DEVICE_EXTENSION pDevExt;
  PSERIAL_MULTIPORT_DISPATCH pOurIsrContext;
  PSERIAL_DEVICE_EXTENSION pNewExt;

  pDevExt = (PSERIAL_DEVICE_EXTENSION )Context;
  pOurIsrContext = (PSERIAL_MULTIPORT_DISPATCH )pDevExt->OurIsrContext;
  pNewExt = (PSERIAL_DEVICE_EXTENSION)pDevExt->NewExtension;
				      
  if(pDevExt->Indexed == 0)
    {
      pOurIsrContext->UsablePortMask |= 1 << pDevExt->NewPortIndex - 1;
      pOurIsrContext->MaskInverted |= pDevExt->NewMaskInverted;
    }
  if((& pNewExt->CommonInterruptObject)->Flink == & pNewExt->CommonInterruptObject)     
    {
      {
	PLIST_ENTRY EX_Blink ;
	PLIST_ENTRY EX_ListHead ;
	EX_ListHead = & pDevExt->CommonInterruptObject;
	EX_Blink = EX_ListHead->Blink;
	(& pNewExt->CommonInterruptObject)->Flink = EX_ListHead;
	(& pNewExt->CommonInterruptObject)->Blink = EX_Blink;
	EX_Blink->Flink = & pNewExt->CommonInterruptObject;
	EX_ListHead->Blink = & pNewExt->CommonInterruptObject;
      }
    }
  pNewExt->OurIsrContext = pOurIsrContext;
  {
    PLIST_ENTRY EX_Blink ;
    PLIST_ENTRY EX_ListHead ;
    EX_ListHead = & pDevExt->MultiportSiblings;
    EX_Blink = EX_ListHead->Blink;
    (& pNewExt->MultiportSiblings)->Flink = EX_ListHead;
    (& pNewExt->MultiportSiblings)->Blink = EX_Blink;
    EX_Blink->Flink = & pNewExt->MultiportSiblings;
    EX_ListHead->Blink = & pNewExt->MultiportSiblings;
  }
  (pOurIsrContext->Extensions)[pDevExt->NewPortIndex - 1] = pDevExt->NewExtension;
  pNewExt->TopLevelOurIsr = pDevExt->TopLevelOurIsr;
  pNewExt->TopLevelOurIsrContext = pDevExt->TopLevelOurIsrContext;
  return 1;
}

// #line 1023
NTSTATUS SerialInitMultiPort(PSERIAL_DEVICE_EXTENSION PDevExt , PCONFIG_DATA PConfigData ,
			     PDEVICE_OBJECT PDevObj )
{
  PSERIAL_DEVICE_EXTENSION pOurIsrContext;
  PSERIAL_DEVICE_EXTENSION pNewExt;
  NTSTATUS status ;
  PSERIAL_MULTIPORT_DISPATCH pDispatch ;
  PSERIAL_MULTIPORT_DISPATCH temp__1;

  pOurIsrContext = (PSERIAL_DEVICE_EXTENSION)PDevExt->OurIsrContext;		    
  pNewExt = (PSERIAL_DEVICE_EXTENSION)PDevObj->DeviceExtension;
  pNewExt->CIsrSw = PDevExt->CIsrSw;
  pNewExt->Interrupt = PDevExt->Interrupt;
  status = SerialInitOneController(PDevObj, PConfigData);
  if(! ((NTSTATUS )status >= 0))
      return status;
  if(PDevExt->PortOnAMultiportCard != 1)
    {
      temp__1 = ExAllocatePoolWithTag(NonPagedPool,
				      sizeof(SERIAL_MULTIPORT_DISPATCH ), tag__1/* 'XMOC' */);
      pDispatch = temp__1;
      PDevExt->NewExtension = temp__1;
      
      if(pDispatch == (void *  )0)
	  return (NTSTATUS )0xC000009AL;
      memset(pDispatch, 0, sizeof(* pDispatch));
      KeSynchronizeExecution(PDevExt->Interrupt, SerialSingleToMulti, PDevExt);
    }
  ((PSERIAL_DEVICE_EXTENSION)PDevObj->DeviceExtension)->PortOnAMultiportCard = 1;
  ((PSERIAL_DEVICE_EXTENSION )PDevObj->DeviceExtension)->OurIsr = (void * )0;
  PDevExt->NewPortIndex = PConfigData->PortIndex;
  PDevExt->NewMaskInverted = PConfigData->MaskInverted;
  PDevExt->NewExtension = PDevObj->DeviceExtension;
  KeSynchronizeExecution(PDevExt->Interrupt, SerialAddToMulti, PDevExt);
  return (NTSTATUS )0x00000000L;
}

NTSTATUS SerialInitController(PDEVICE_OBJECT PDevObj , PCONFIG_DATA PConfigData)
{
  PSERIAL_DEVICE_EXTENSION pDevExt;
  UNICODE_STRING uniNameString ;
  NTSTATUS status;
  BOOLEAN conflictDetected ;
  BOOLEAN allocedISRSw;  
  SHORT junk ;
  BOOLEAN temp__1;
  ULONG temp__2;

  pDevExt = PDevObj->DeviceExtension;
  status = (NTSTATUS )0x00000000L;
  conflictDetected = 0;
  allocedISRSw = 0;
  
  if(* KdComPortInUse == (PUCHAR )(PConfigData->Controller).LowPart)
    {
      SerialLogError(PDevObj->DriverObject, (void *  )0,
		     PConfigData->TrController, SerialPhysicalZero, 0, 0, 0,3,
		     (NTSTATUS )0x00000000L, (NTSTATUS )0x40060001L,
		     (pDevExt->DeviceName).Length + sizeof(WCHAR ),
		     (pDevExt->DeviceName).Buffer, 0, (void *  )0);
      return (NTSTATUS )0xC000009AL;
    }
  if(pDevExt->CIsrSw == (void *  )0)
    {
      pDevExt->CIsrSw = ExAllocatePoolWithTag(NonPagedPool, sizeof(SERIAL_CISR_SW ),
					      tag__1 /*'XMOC'*/);
      if(pDevExt->CIsrSw  ==  (void *  )0)
	  return (NTSTATUS )0xC000009AL;

      (& (pDevExt->CIsrSw)->SharerList)->Flink = & (pDevExt->CIsrSw)->SharerList;
      (& (pDevExt->CIsrSw)->SharerList)->Blink = & (pDevExt->CIsrSw)->SharerList;
      allocedISRSw = 1;
    }
  pDevExt->Jensen = PConfigData->Jensen;
  KeInitializeSpinLock(& pDevExt->ControlLock);
  KeInitializeSpinLock(& pDevExt->FlagsLock);
  KeInitializeTimer(& pDevExt->ReadRequestTotalTimer);
  KeInitializeTimer(& pDevExt->ReadRequestIntervalTimer);
  KeInitializeTimer(& pDevExt->WriteRequestTotalTimer);
  KeInitializeTimer(& pDevExt->ImmediateTotalTimer);
  KeInitializeTimer(& pDevExt->XoffCountTimer);
  KeInitializeTimer(& pDevExt->LowerRTSTimer);
  KeInitializeDpc(& pDevExt->CompleteWriteDpc, SerialCompleteWrite, pDevExt);
  KeInitializeDpc(& pDevExt->CompleteReadDpc, SerialCompleteRead, pDevExt);
  KeInitializeDpc(& pDevExt->TotalReadTimeoutDpc, SerialReadTimeout, pDevExt);
  KeInitializeDpc(& pDevExt->IntervalReadTimeoutDpc, SerialIntervalReadTimeout, pDevExt);
  KeInitializeDpc(& pDevExt->TotalWriteTimeoutDpc, SerialWriteTimeout, pDevExt);
  KeInitializeDpc(& pDevExt->CommErrorDpc, SerialCommError, pDevExt);
  KeInitializeDpc(& pDevExt->CompleteImmediateDpc, SerialCompleteImmediate, pDevExt);
  KeInitializeDpc(& pDevExt->TotalImmediateTimeoutDpc, SerialTimeoutImmediate, pDevExt);
  KeInitializeDpc(& pDevExt->CommWaitDpc, SerialCompleteWait, pDevExt);
  KeInitializeDpc(& pDevExt->XoffCountTimeoutDpc, SerialTimeoutXoff, pDevExt);
  KeInitializeDpc(& pDevExt->XoffCountCompleteDpc, SerialCompleteXoff, pDevExt);
  KeInitializeDpc(& pDevExt->StartTimerLowerRTSDpc,SerialStartTimerLowerRTS, pDevExt);
  KeInitializeDpc(& pDevExt->PerhapsLowerRTSDpc, SerialInvokePerhapsLowerRTS, pDevExt);
  KeInitializeDpc(& pDevExt->IsrUnlockPagesDpc, SerialUnlockPages, pDevExt);
  if(! (PConfigData->ClockRate == 1843200 || PConfigData->ClockRate ==
	3072000 || PConfigData->ClockRate == 4233600 ||
	PConfigData->ClockRate == 8000000))
    {
      SerialLogError(PDevObj->DriverObject, PDevObj,
		     PConfigData->TrController, SerialPhysicalZero, 0, 0, 0, 6 ,
		     (NTSTATUS )0x00000000L, (NTSTATUS )0xC0060009L,
		     (pDevExt->DeviceName).Length + sizeof(WCHAR ),
		     (pDevExt->DeviceName).Buffer, 0, (void *  )0);
      status = (NTSTATUS )0xC0000150L;
      goto ExtensionCleanup;
    }
  pDevExt->ClockRate = PConfigData->ClockRate;
  pDevExt->Controller = SerialGetMappedAddress(PConfigData->InterfaceType,
					       PConfigData->BusNumber, PConfigData->TrController,
					       PConfigData->SpanOfController, 
					       (BOOLEAN)PConfigData->AddressSpace, 
					       & pDevExt->UnMapRegisters);
						
  if(! pDevExt->Controller)
    {
      SerialLogError(PDevObj->DriverObject, pDevExt->DeviceObject,
		     PConfigData->TrController, SerialPhysicalZero, 0, 0, 0,
		     7, (NTSTATUS )0x00000000L, (NTSTATUS )0xC006000AL,
		     (pDevExt->DeviceName).Length + sizeof(WCHAR ),
		     (pDevExt->DeviceName).Buffer, 0, (void *  )0);
      pDevExt->UnMapRegisters = 0;
      status = (NTSTATUS )0xC0000073L;
      goto ExtensionCleanup;
    }
  pDevExt->AddressSpace = PConfigData->AddressSpace;
  pDevExt->OriginalController = PConfigData->Controller;
  pDevExt->SpanOfController = PConfigData->SpanOfController;
  pDevExt->InterruptStatus = (PUCHAR)(PConfigData->TrInterruptStatus).QuadPart;
  if(pDevExt->InterruptStatus)
    {
      pDevExt->InterruptStatus = SerialGetMappedAddress(PConfigData->InterfaceType,
							PConfigData->BusNumber, 
							PConfigData->TrInterruptStatus,
							PConfigData->SpanOfInterruptStatus, 
							(BOOLEAN)PConfigData->AddressSpace, 
							& pDevExt->UnMapStatus);
				
      if(! pDevExt->InterruptStatus)
	{
	  SerialLogError(PDevObj->DriverObject, PDevObj,
			 PConfigData->TrController,SerialPhysicalZero,
			 0, 0, 0, 8, (NTSTATUS )0x00000000L, 
			 (NTSTATUS)0xC006000AL, (pDevExt->DeviceName).Length + 
			 sizeof(WCHAR ), (pDevExt->DeviceName).Buffer, 0,
			 (void *  )0);
	  if(pDevExt->UnMapRegisters)
	      MmUnmapIoSpace((PVOID)(PConfigData->TrController).QuadPart,
			     PConfigData->SpanOfController);
	  pDevExt->UnMapRegisters = 0;
	  pDevExt->UnMapStatus = 0;
	  status = (NTSTATUS )0xC0000073L;
	  goto ExtensionCleanup;
	}
      pDevExt->OriginalInterruptStatus = PConfigData->InterruptStatus;
      pDevExt->SpanOfInterruptStatus = PConfigData->SpanOfInterruptStatus;
    }
  if((BOOLEAN )PConfigData->PermitSystemWideShare)
      pDevExt->InterruptShareable = 1;
  pDevExt->InterfaceType = PConfigData->InterfaceType;
  pDevExt->BusNumber = PConfigData->BusNumber;
  pDevExt->PortIndex = PConfigData->PortIndex;
  pDevExt->Indexed = (BOOLEAN )PConfigData->Indexed;
  pDevExt->MaskInverted = PConfigData->MaskInverted;
  pDevExt->OriginalIrql = PConfigData->OriginalIrql;
  pDevExt->OriginalVector = PConfigData->OriginalVector;
  pDevExt->Vector = PConfigData->TrVector;
  pDevExt->Irql = (UCHAR )PConfigData->TrIrql;
  pDevExt->OurIsr = SerialISR;
  pDevExt->OurIsrContext = pDevExt;
  pDevExt->PermitShare = PConfigData->PermitShare;
  switch(PConfigData->RxFIFO)
    {
    case 1:
      pDevExt->RxFifoTrigger = (UCHAR )0x00;
      break;
    case 4:
      pDevExt->RxFifoTrigger = (UCHAR )0x40;
      break;
    case 8:
      pDevExt->RxFifoTrigger = (UCHAR )0x80;
      break;
    case 14:
      pDevExt->RxFifoTrigger = (UCHAR )0xc0;
      break;
    default :
      pDevExt->RxFifoTrigger = (UCHAR )0x00;
      break;
    }
  if(PConfigData->TxFIFO > 16 || PConfigData->TxFIFO < 1)
      pDevExt->TxFifoAmount = 1;
  else
    pDevExt->TxFifoAmount = PConfigData->TxFIFO;

  temp__1 =  SerialDoesPortExist(pDevExt, & pDevExt->DeviceName,
			       PConfigData->ForceFifoEnable, PConfigData->LogFifo);
  if(! temp__1)
    {
      status = (NTSTATUS )0xC000000EL;
      goto ExtensionCleanup;
    }
  if(PConfigData->DisablePort)
    {
      status = (NTSTATUS )0xC000000EL;
      SerialLogError(PDevObj->DriverObject, PDevObj,
		     PConfigData->Controller, SerialPhysicalZero, 0, 0, 0,
		     57, (NTSTATUS )0x00000000L, (NTSTATUS )0x40060022L,
		     (pDevExt->DeviceName).Length + sizeof(WCHAR ),
		     (pDevExt->DeviceName).Buffer, 0, (void *  )0);
      goto ExtensionCleanup;
    }
  (pDevExt->SpecialChars).XonChar = 0x11;
  (pDevExt->SpecialChars).XoffChar = 0x13;
  (pDevExt->HandFlow).ControlHandShake = (ULONG )0x01;
  (pDevExt->HandFlow).FlowReplace = (ULONG )0x40;
  pDevExt->LineControl = (UCHAR )0x02 | (UCHAR )0x18 | (UCHAR )0x00;
  pDevExt->ValidDataMask = 0x7f;
  pDevExt->CurrentBaud = 1200;
  (pDevExt->HandFlow).XoffLimit = pDevExt->BufferSize >> 3;
  (pDevExt->HandFlow).XonLimit = pDevExt->BufferSize >> 1;
  pDevExt->BufferSizePt8 = 3 * (pDevExt->BufferSize >> 2) + (pDevExt->BufferSize >> 4);
  pDevExt->SupportedBauds = (ULONG )0x10000000;

  temp__2 = (ULONG )SerialGetDivisorFromBaud(pDevExt->ClockRate, (LONG)75, & junk);
  if(! ( temp__2 >> 30 == 3))
    pDevExt->SupportedBauds |= (ULONG )0x00000001;
  temp__2 = (ULONG )SerialGetDivisorFromBaud(pDevExt->ClockRate,(LONG)110, & junk);
  if(! (temp__2 >> 30 == 3))  
    pDevExt->SupportedBauds |= (ULONG )0x00000002;
  temp__2 = (ULONG )SerialGetDivisorFromBaud(pDevExt->ClockRate, (LONG)135, & junk);
  if(! (temp__2 >> 30 == 3))
    pDevExt->SupportedBauds |= (ULONG )0x00000004;
  temp__2 = (ULONG )SerialGetDivisorFromBaud(pDevExt->ClockRate, (LONG)150, & junk);
  if(! (temp__2 >> 30 == 3))
    pDevExt->SupportedBauds |= (ULONG )0x00000008;
  temp__2 = (ULONG )SerialGetDivisorFromBaud(pDevExt->ClockRate, (LONG)300, & junk);
  if(! (temp__2 >> 30 == 3))
    pDevExt->SupportedBauds |= (ULONG )0x00000010;
  temp__2 = (ULONG )SerialGetDivisorFromBaud(pDevExt->ClockRate, (LONG)600, & junk);
  if(! (temp__2 >> 30 == 3))
      pDevExt->SupportedBauds |= (ULONG )0x00000020;
  temp__2 = (ULONG )SerialGetDivisorFromBaud(pDevExt->ClockRate, (LONG)1200, & junk);
  if(! (temp__2 >> 30 == 3))
    pDevExt->SupportedBauds |= (ULONG )0x00000040;
  temp__2 = (ULONG )SerialGetDivisorFromBaud(pDevExt->ClockRate, (LONG)1800, & junk);
  if(! (temp__2 >> 30 == 3))
    pDevExt->SupportedBauds |= (ULONG )0x00000080;
  temp__2 = (ULONG )SerialGetDivisorFromBaud(pDevExt->ClockRate, (LONG)2400, & junk);
  if(! (temp__2 >> 30 == 3))
    pDevExt->SupportedBauds |= (ULONG )0x00000100;
  temp__2 = (ULONG )SerialGetDivisorFromBaud(pDevExt->ClockRate, (LONG)4800, & junk);
  if(! (temp__2 >> 30 == 3))
    pDevExt->SupportedBauds |= (ULONG )0x00000200;
  temp__2 = (ULONG )SerialGetDivisorFromBaud(pDevExt->ClockRate, (LONG)7200, & junk);
  if(! (temp__2 >> 30 == 3))
    pDevExt->SupportedBauds |= (ULONG )0x00000400;
  temp__2 = (ULONG )SerialGetDivisorFromBaud(pDevExt->ClockRate, (LONG)9600, & junk);
  if(! (temp__2 >> 30 == 3))
    pDevExt->SupportedBauds |= (ULONG )0x00000800;
  temp__2 = (ULONG )SerialGetDivisorFromBaud(pDevExt->ClockRate, (LONG)14400, & junk);
  if(! (temp__2 >> 30 == 3)) 
    pDevExt->SupportedBauds |= (ULONG )0x00001000;
  temp__2 = (ULONG )SerialGetDivisorFromBaud(pDevExt->ClockRate, (LONG)19200, & junk);
  if(! (temp__2 >> 30 == 3)) 
    pDevExt->SupportedBauds |= (ULONG )0x00002000;
  temp__2 = (ULONG )SerialGetDivisorFromBaud(pDevExt->ClockRate, (LONG)38400, & junk);
  if(! (temp__2 >> 30 == 3))
    pDevExt->SupportedBauds |= (ULONG )0x00004000;
  temp__2 = (ULONG )SerialGetDivisorFromBaud(pDevExt->ClockRate, (LONG)56000, & junk);
  if(! (temp__2 >> 30 == 3))
    pDevExt->SupportedBauds |= (ULONG )0x00008000;
  temp__2 = (ULONG )SerialGetDivisorFromBaud(pDevExt->ClockRate, (LONG)57600, & junk);
  if(! (temp__2 >> 30 == 3)) 
    pDevExt->SupportedBauds |= (ULONG )0x00040000;
  temp__2 = (ULONG )SerialGetDivisorFromBaud(pDevExt->ClockRate, (LONG)115200, & junk) ;
  if(! (temp__2 >> 30 == 3))
    pDevExt->SupportedBauds |= (ULONG )0x00020000;
  temp__2 = (ULONG )SerialGetDivisorFromBaud(pDevExt->ClockRate, (LONG)128000, & junk);
  if(! ( temp__2 >> 30 == 3))
    pDevExt->SupportedBauds |= (ULONG )0x00010000;
  
  pDevExt->DeviceIsOpened = 0;
  (pDevExt->ShortIntervalAmount).QuadPart = - 1;
  (pDevExt->LongIntervalAmount).QuadPart = - 10000000;
  (pDevExt->CutOverAmount).QuadPart = 200000000;
 ExtensionCleanup:
  if(! ((NTSTATUS )status >= 0))
    {
      if(allocedISRSw)
	{
	  ExFreePool(pDevExt->CIsrSw);
	  pDevExt->CIsrSw = (void *  )0;
	}
      if(pDevExt->UnMapRegisters){
	MmUnmapIoSpace(pDevExt->Controller,
		       pDevExt->SpanOfController);
      }
      if(pDevExt->UnMapStatus){
	MmUnmapIoSpace(pDevExt->InterruptStatus,
			   pDevExt->SpanOfInterruptStatus);
      }
    }
  return status;
}

NTSTATUS SerialInitOneController(PDEVICE_OBJECT PDevObj, PCONFIG_DATA PConfigData )
{
  NTSTATUS status ;
  PSERIAL_DEVICE_EXTENSION pDevExt ;

  status = SerialInitController(PDevObj, PConfigData);
  if((NTSTATUS )status >= 0)
    {
      pDevExt = PDevObj->DeviceExtension;
      pDevExt->OurIsr = SerialISR;
      pDevExt->OurIsrContext = pDevExt;
      pDevExt->TopLevelOurIsr = SerialISR;
      pDevExt->TopLevelOurIsrContext = pDevExt;
    }
  return status;
}

BOOLEAN SerialDoesPortExist(PSERIAL_DEVICE_EXTENSION Extension , PUNICODE_STRING
	InsertString , ULONG ForceFifo , ULONG LogFifo )
{
  UCHAR regContents ;
  BOOLEAN returnValue;
  UCHAR oldIERContents ;
  UCHAR oldLCRContents ;
  USHORT value1 ;
  USHORT value2 ;
  KIRQL oldIrql ;

  returnValue = 1;

  oldLCRContents = READ_PORT_UCHAR(Extension->Controller + (ULONG )(0x03 * 1));
  WRITE_PORT_UCHAR(Extension->Controller + (ULONG )(0x03 * 1),
		   (UCHAR )(oldLCRContents & /*~*/ 0x80));
  oldIERContents = READ_PORT_UCHAR(Extension->Controller + (ULONG )(0x01 *1));
  * & oldIrql = KfRaiseIrql(30);
  WRITE_PORT_UCHAR(Extension->Controller + (ULONG )(0x01 * 1), 0x0f);
  value1 = READ_PORT_UCHAR(Extension->Controller + (ULONG )(0x01 * 1));
  value1 = value1 << 8;
  value1 |= READ_PORT_UCHAR(Extension->Controller + (ULONG )(0x00 * 1));
  {
    PUCHAR Address = Extension->Controller;
    PSHORT PDivisor = & value2;
    UCHAR LineControl ;
    UCHAR Lsb ;
    UCHAR Msb ;
    LineControl = READ_PORT_UCHAR(Address + (ULONG )(0x03 * 1));
    WRITE_PORT_UCHAR(Address + (ULONG )(0x03 * 1), (UCHAR)(LineControl | 0x80));
    Lsb = READ_PORT_UCHAR(Address + (ULONG )(0x00 * 1));
    Msb = READ_PORT_UCHAR(Address + (ULONG )(0x01 * 1));
    * PDivisor = Lsb;
    * PDivisor = * PDivisor | (USHORT )Msb << 8;
    WRITE_PORT_UCHAR(Address + (ULONG )(0x03 * 1), LineControl);
  }
  WRITE_PORT_UCHAR(Extension->Controller + (ULONG )(0x03 * 1), oldLCRContents);
  WRITE_PORT_UCHAR(Extension->Controller + (ULONG )(0x01 * 1),
		   oldIERContents);
  KfLowerIrql(oldIrql);
  if(value1 == value2)
    {
      SerialLogError((Extension->DeviceObject)->DriverObject,
		     Extension->DeviceObject, Extension->OriginalController,
		     SerialPhysicalZero, 0, 0, 0, 62, (NTSTATUS )0x00000000L,
		     (NTSTATUS )0xC0060024L, InsertString->Length +
		     sizeof(WCHAR ), InsertString->Buffer, 0, (void *  )0);
      returnValue = 0;
      goto AllDone;
    }
 AllDone:  
  if(returnValue)
    {
      WRITE_PORT_UCHAR(Extension->Controller + (ULONG)(0x01 * 1), 0);
      if(Extension->Jensen)
	  WRITE_PORT_UCHAR(Extension->Controller + (ULONG )(0x04 * 1), (UCHAR )0x08);
      else
	WRITE_PORT_UCHAR(Extension->Controller + (ULONG)(0x04 * 1), (UCHAR )0);
      WRITE_PORT_UCHAR(Extension->Controller + (ULONG )(0x02 *1), (UCHAR )0x01);
							
      regContents = READ_PORT_UCHAR(Extension->Controller + (ULONG)(0x02 * 1));
      if(regContents & 0xc0)
	{
	  Extension->FifoPresent = 1;
	  WRITE_PORT_UCHAR(Extension->Controller + (ULONG)(0x02 * 1), (UCHAR )0);
	  READ_PORT_UCHAR(Extension->Controller + (ULONG )(0x00 *1));
	  WRITE_PORT_UCHAR(Extension->Controller + (ULONG)(0x02 * 1),
			(UCHAR )((UCHAR )0x01 | Extension->RxFifoTrigger | (UCHAR )0x02 | (UCHAR )0x04));
	}
      if(! ForceFifo || ! Extension->FifoPresent)
	{
	  Extension->FifoPresent = 0;
	  WRITE_PORT_UCHAR(Extension->Controller + (ULONG)(0x02 * 1), (UCHAR )0);
	}
      if(Extension->FifoPresent)
	{
	  if(LogFifo)
	    {
	      SerialLogError((Extension->DeviceObject)->DriverObject
			     , Extension->DeviceObject,
			     Extension->OriginalController,
			     SerialPhysicalZero, 0, 0, 0, 15,
			     (NTSTATUS )0x00000000L, (NTSTATUS)0x40060002L,
			     InsertString->Length +sizeof(WCHAR ), InsertString->Buffer, 0,
			     (void *  )0);
	    }
	}
      if(Extension->InterruptStatus)
	{
	  if(Extension->Indexed)
	      WRITE_PORT_UCHAR(Extension->InterruptStatus, (UCHAR )0xFF);
	  else
	    {
	      if(Extension->OurIsrContext == Extension)
		{
		  WRITE_PORT_UCHAR(Extension->InterruptStatus
				   , (UCHAR )(1 <<
					      Extension->PortIndex - 1));
		}
	      else
		  WRITE_PORT_UCHAR(Extension->InterruptStatus,
		    (UCHAR)((PSERIAL_MULTIPORT_DISPATCH)Extension->OurIsrContext)->UsablePortMask);
	    }
	}
    }
  return returnValue;
}

BOOLEAN SerialReset(PVOID Context )
{
  PSERIAL_DEVICE_EXTENSION extension;
  UCHAR regContents ;
  UCHAR oldModemControl ;
  ULONG i ;
  UCHAR temp__1;

  extension = Context;
  oldModemControl = READ_PORT_UCHAR(extension->Controller + (ULONG )(0x04* 1));
  if(extension->Jensen)
      WRITE_PORT_UCHAR(extension->Controller + (ULONG )(0x04 *1),
		       (UCHAR )(oldModemControl | 0x08));
  else
    {
      WRITE_PORT_UCHAR(extension->Controller + (ULONG )(0x04 *
							1), (UCHAR )(oldModemControl & /*~*/ 0x08));
    }
  if(extension->FifoPresent)
    {
      WRITE_PORT_UCHAR(extension->Controller + (ULONG )(0x02 *1), (UCHAR )0);
      READ_PORT_UCHAR(extension->Controller + (ULONG )(0x00 * 1));
      WRITE_PORT_UCHAR(extension->Controller + (ULONG )(0x02 * 1),
		       (UCHAR )((UCHAR )0x01 |extension->RxFifoTrigger | (UCHAR )0x02 | (UCHAR)0x04));
    }
  regContents = READ_PORT_UCHAR(extension->Controller + (ULONG )(0x03 * 1));
  regContents &= /*~*/ (0x80 | 0x40);
  WRITE_PORT_UCHAR(extension->Controller + (ULONG )(0x03 * 1), regContents);
  //BLAST forloop for(i = 0; i < 5; i++)
  for(i = 0; i < BLAST_NONDET; i++)
    {
      if(((KUSER_SHARED_DATA * const )0xffdf0000)->AlternativeArchitecture != NEC98x86)
	{
	  READ_PORT_UCHAR(extension->Controller + (ULONG )(0x00 * 1));
	  temp__1 = READ_PORT_UCHAR(extension->Controller + (ULONG)(0x05 * 1)) ;
	  if(! (temp__1 & 1) )
	    break;
	}
      else
	{
	  temp__1= READ_PORT_UCHAR(extension->Controller + (ULONG)(0x05 * 1));
	  if(! (temp__1 & 1) )
	    {
	      break;
	    }
	  READ_PORT_UCHAR(extension->Controller + (ULONG )(0x00 *
							   1));
	}
    } // end for loop
  //BLAST forloop for(i = 0; i < 1000; i++)
  for(i = 0; i < BLAST_NONDET ; i++)
    {
      temp__1 = READ_PORT_UCHAR(extension->Controller + (ULONG )(0x06 * 1));
      if(! (temp__1 & 0x0f))
	{
	  break;
	}
    } // end for loop 
  SerialSetLineControl(extension);
  SerialSetupNewHandFlow(extension, & extension->HandFlow);
  SerialHandleModemUpdate(extension, 0);
  {
    SHORT appropriateDivisor ;
    SERIAL_IOCTL_SYNC s ;
    
    SerialGetDivisorFromBaud(extension->ClockRate,
			     extension->CurrentBaud, & appropriateDivisor);
    s.Extension = extension;
    s.Data = (PVOID )appropriateDivisor;
    SerialSetBaud(& s);
  }
  WRITE_PORT_UCHAR(extension->Controller + (ULONG )(0x01 * 1),
		   (UCHAR )(0x01 | 0x02 | 0x04 | 0x08));
  //BLAST forloop for(i = 0; i < 5; i++)
  for(i = 0; i < BLAST_NONDET; i++)
    {
      temp__1 = READ_PORT_UCHAR(extension->Controller + (ULONG )(0x02 * 1));
      if(temp__1 &  0x01)
	break;
    } // end for loop
  
  extension->HoldingEmpty = 1;
  return 0;
}

NTSTATUS SerialGetDivisorFromBaud(ULONG ClockRate , LONG DesiredBaud , PSHORT AppropriateDivisor )
{

  NTSTATUS status;
  SHORT calculatedDivisor ;
  ULONG denominator ;
  ULONG remainder ;
  ULONG maxRemain18;
  ULONG maxRemain30;
  ULONG maxRemain42;
  ULONG maxRemain80;
  ULONG maxRemain ;

  status = (NTSTATUS )0x00000000L;
  maxRemain18 = 18432;
  maxRemain30 = 30720;
  maxRemain42 = 42336;
  maxRemain80 = 80000;
  denominator = DesiredBaud * (ULONG )16;
  if(DesiredBaud <= 0)
    {
      * AppropriateDivisor = - 1;
    }
  else
    {
      if((LONG )denominator < DesiredBaud)
	{
	  * AppropriateDivisor = - 1;
	}
      else
	{
	  if(ClockRate == 1843200)
	    {
	      maxRemain = maxRemain18;
	    }
	  else
	    {
	      if(ClockRate == 3072000)
		{
		  maxRemain = maxRemain30;
		}
	      else
		{
		  if(ClockRate == 4233600)
		    {
		      maxRemain = maxRemain42;
		    }
		  else
		    {
		      maxRemain = maxRemain80;
		    }
		}
	    }
	  calculatedDivisor = (SHORT )(ClockRate / denominator);
	  remainder = ClockRate % denominator;
	  if(remainder * 2 > ClockRate && DesiredBaud != 110)
	    {
	      calculatedDivisor++;
	    }
	  if(DesiredBaud >= 9600)
	    {
	      if(remainder >= maxRemain && remainder +
		 maxRemain < ClockRate)
		{
		  calculatedDivisor = - 1;
		}
	    }
	  if(denominator > ClockRate)
	    {
	      calculatedDivisor = - 1;
	    }
	  if(ClockRate == 1843200)
	    {
	      if(DesiredBaud == 56000)
		{
		  calculatedDivisor = 2;
		}
	    }
	  else
	    {
	      if(ClockRate == 3072000)
		{
		  if(DesiredBaud == 14400)
		    {
		      calculatedDivisor = 13;
		    }
		}
	      else
		{
		  if(ClockRate == 4233600)
		    {
		      if(DesiredBaud == 9600)
			{
			  calculatedDivisor = 28;
			}
		      else
			{
			  if(DesiredBaud == 14400)
			    {
			      calculatedDivisor = 18;
			    }
			  else
			    {
			      if(DesiredBaud == 19200)
				{
				  calculatedDivisor = 14;
				}
			      else
				{
				  if(DesiredBaud == 38400)
				    {
				      calculatedDivisor = 7;
				    }
				  else
				    {
				      if(DesiredBaud == 56000)
					{
					  calculatedDivisor = 5;
					}
				    }
				}
			    }
			}
					}
		  else
		    {
		      if(ClockRate == 8000000)
			{
			  if(DesiredBaud == 14400)
			    {
			      calculatedDivisor = 35;
			    }
			  else
			    {
			      if(DesiredBaud == 56000)
				{
				  calculatedDivisor = 9;
				}
			    }
			}
		    }
		}
	    }
	  * AppropriateDivisor = calculatedDivisor;
	}
    }
  if(* AppropriateDivisor == - 1)
      status = (NTSTATUS )0xC000000DL;
  return status;
}

void SerialUnload(PDRIVER_OBJECT DriverObject )
{
  PVOID lockPtr ;
  lockPtr = MmLockPagableDataSection(SerialUnload);
  SerialGlobals.PAGESER_Handle = (void *  )0;
  if((SerialGlobals.RegistryPath).Buffer != (void *  )0)
    {
      ExFreePool((SerialGlobals.RegistryPath).Buffer);
      (SerialGlobals.RegistryPath).Buffer = (void *  )0;
    }
  
  MmUnlockPagableImageSection(lockPtr);
  return;
}

PVOID SerialGetMappedAddress(INTERFACE_TYPE BusType , ULONG BusNumber ,
			     LARGE_INTEGER IoAddress , ULONG NumberOfBytes , ULONG AddressSpace ,
			     PBOOLEAN MappedAddress )
{
  LARGE_INTEGER cardAddress ;
  PVOID address ;

  if(! AddressSpace)
    {
      address = MmMapIoSpace(IoAddress, NumberOfBytes, 0);
      if (address)
	* MappedAddress = (BOOLEAN )1;
      else
	* MappedAddress = (BOOLEAN )0;
    }
  else
    {
      address = (PVOID )IoAddress.LowPart;
      * MappedAddress = 0;
    }
  return address;
}

SERIAL_MEM_COMPARES SerialMemCompare(LARGE_INTEGER A , ULONG SpanOfA ,
				     LARGE_INTEGER B , ULONG SpanOfB )
{
  LARGE_INTEGER a ;
  LARGE_INTEGER b ;
  LARGE_INTEGER lower ;
  ULONG lowerSpan ;
  LARGE_INTEGER higher ;

  a = A;
  b = B;
  if(a.QuadPart == b.QuadPart)
    {
      return AddressesAreEqual;
    }
  if(a.QuadPart > b.QuadPart)
    {
      higher = a;
      lower = b;
      lowerSpan = SpanOfB;
    }
  else
    {
      higher = b;
      lower = a;
		lowerSpan = SpanOfA;
    }
  if(higher.QuadPart - lower.QuadPart >= lowerSpan)
    {
      return AddressesAreDisjoint;
    }
  return AddressesOverlap;
}

BOOLEAN SerialBecomeSharer(PVOID Context )
{
  PSERIAL_DEVICE_EXTENSION pDevExt;
  PSERIAL_DEVICE_EXTENSION pNewExt;
  PSERIAL_CISR_SW pCIsrSw;

  pDevExt = (PSERIAL_DEVICE_EXTENSION )Context;
  pNewExt = (PSERIAL_DEVICE_EXTENSION )pDevExt->NewExtension;
  pCIsrSw = pDevExt->CIsrSw;
  if((& pCIsrSw->SharerList)->Flink == & pCIsrSw->SharerList)
    {
      pCIsrSw->IsrFunc = SerialSharerIsr;
      pCIsrSw->Context = & pCIsrSw->SharerList;
      {
	PLIST_ENTRY EX_Blink ;
	PLIST_ENTRY EX_ListHead ;
	EX_ListHead = & pCIsrSw->SharerList;
	EX_Blink = EX_ListHead->Blink;
	(& pDevExt->TopLevelSharers)->Flink = EX_ListHead;
	(& pDevExt->TopLevelSharers)->Blink = EX_Blink;
	EX_Blink->Flink = & pDevExt->TopLevelSharers;
	EX_ListHead->Blink = & pDevExt->TopLevelSharers;
      }
    }
  pNewExt->Interrupt = pDevExt->Interrupt;
  pNewExt->CIsrSw = pDevExt->CIsrSw;
  {
    PLIST_ENTRY EX_Blink ;
    PLIST_ENTRY EX_ListHead ;
    EX_ListHead = & pCIsrSw->SharerList;
    EX_Blink = EX_ListHead->Blink;
    (& pNewExt->TopLevelSharers)->Flink = EX_ListHead;
    (& pNewExt->TopLevelSharers)->Blink = EX_Blink;
    EX_Blink->Flink = & pNewExt->TopLevelSharers;
    EX_ListHead->Blink = & pNewExt->TopLevelSharers;
  }
  if((& pNewExt->CommonInterruptObject)->Flink == &
     pNewExt->CommonInterruptObject)
    {
      {
	PLIST_ENTRY EX_Blink ;
	PLIST_ENTRY EX_ListHead ;
	EX_ListHead = & pDevExt->CommonInterruptObject;
	EX_Blink = EX_ListHead->Blink;
	(& pNewExt->CommonInterruptObject)->Flink = EX_ListHead;
	(& pNewExt->CommonInterruptObject)->Blink = EX_Blink;
	EX_Blink->Flink = & pNewExt->CommonInterruptObject;
	EX_ListHead->Blink = & pNewExt->CommonInterruptObject;
      }
    }
  return 1;
}

NTSTATUS SerialFindInitController(PDEVICE_OBJECT PDevObj , PCONFIG_DATA PConfig)
{
  PSERIAL_DEVICE_EXTENSION pDevExt;
  PDEVICE_OBJECT pDeviceObject ;
  PSERIAL_DEVICE_EXTENSION pExtension ;
  LARGE_INTEGER serialPhysicalMax ;
  SERIAL_LIST_DATA listAddition ;
  PLIST_ENTRY pCurDevObj ;
  NTSTATUS status ;
  SERIAL_MEM_COMPARES temp__1;
  int didInit;

  pDevExt = PDevObj->DeviceExtension;
  didInit = 0;

  serialPhysicalMax.LowPart = (ULONG )(/*~*/ 0);
  serialPhysicalMax.HighPart = /*~*/ 0;
  temp__1 = SerialMemCompare(PConfig->Controller, PConfig->SpanOfController,
			     serialPhysicalMax, (ULONG )0);
  if(temp__1 != AddressesAreDisjoint)
    {
      SerialLogError(PDevObj->DriverObject, (void *  )0,
		     PConfig->Controller, SerialPhysicalZero, 0, 0, 0, 43,
		     (NTSTATUS )0x00000000L, (NTSTATUS )0xC006001AL,
		     (pDevExt->SymbolicLinkName).Length + sizeof(WCHAR ),
		     (pDevExt->SymbolicLinkName).Buffer, 0, (void *  )0);
      return (NTSTATUS )0xC000000EL;
    }
  temp__1 = SerialMemCompare(PConfig->InterruptStatus,
			     PConfig->SpanOfInterruptStatus, serialPhysicalMax, (ULONG )0);
  if(temp__1 != AddressesAreDisjoint)
    {
      SerialLogError(PDevObj->DriverObject, (void *  )0,
		     PConfig->Controller, SerialPhysicalZero, 0, 0, 0, 44,
		     (NTSTATUS )0x00000000L, (NTSTATUS )0xC006001BL,
		     (pDevExt->SymbolicLinkName).Length + sizeof(WCHAR ),
		     (pDevExt->SymbolicLinkName).Buffer, 0, (void *  )0);
      return (NTSTATUS )0xC000000EL;
    }
  temp__1 = SerialMemCompare(PConfig->InterruptStatus,
			     PConfig->SpanOfInterruptStatus, SerialPhysicalZero, (ULONG )0);
  if(temp__1 != AddressesAreEqual)
    {
      temp__1 = SerialMemCompare(PConfig->InterruptStatus,
				 PConfig->SpanOfInterruptStatus, PConfig->Controller,
				 PConfig->SpanOfController);
      
      if(temp__1 != AddressesAreDisjoint)
	{
	  SerialLogError(PDevObj->DriverObject, (void *  )0,
			 PConfig->Controller, PConfig->InterruptStatus,
			 0, 0, 0, 45, (NTSTATUS )0x00000000L, 
			 (NTSTATUS)0xC006001CL, (pDevExt->SymbolicLinkName).Length
			 + sizeof(WCHAR ),
			 (pDevExt->SymbolicLinkName).Buffer, 0, (void *  )0);
	  return (NTSTATUS )0xC000000EL;
	}
    }
  if(! ((& SerialGlobals.AllDevObjs)->Flink == &
	SerialGlobals.AllDevObjs))
    {
      pCurDevObj = (SerialGlobals.AllDevObjs).Flink;
      pExtension = (SERIAL_DEVICE_EXTENSION *  )((PCHAR )pCurDevObj -
						 (ULONG_PTR )(& ((SERIAL_DEVICE_EXTENSION * 
								  )0)->AllDevObjs));
    }
  else
    {
      pCurDevObj = (void *  )0;
      pExtension = (void *  )0;
    }

  while(pCurDevObj != (void *  )0 && pCurDevObj != & SerialGlobals.AllDevObjs)	
    {
      if(pExtension->InterfaceType == PConfig->InterfaceType &&
	 pExtension->AddressSpace == PConfig->AddressSpace &&
	 pExtension->BusNumber == PConfig->BusNumber)
	{
	  temp__1 = SerialMemCompare(PConfig->Controller,
				     PConfig->SpanOfController,
				     pExtension->OriginalController,
				     pExtension->SpanOfController);

	  if(temp__1 != AddressesAreDisjoint)
	    return (NTSTATUS )0xC000000EL;
	  temp__1 = SerialMemCompare(PConfig->InterruptStatus,
				     PConfig->SpanOfInterruptStatus,
				     SerialPhysicalZero, (ULONG )0);
	  if( temp__1 != AddressesAreEqual)
	    {
	      temp__1 = SerialMemCompare(PConfig->InterruptStatus,
					 PConfig->SpanOfInterruptStatus,
					 pExtension->OriginalController,
					 pExtension->SpanOfController);
	      if(temp__1 != AddressesAreDisjoint)
		{
		  SerialLogError(PDevObj->DriverObject, (void *  )0,
				 PConfig->Controller, pExtension->OriginalController,
				 0, 0, 0, 47, (NTSTATUS)0x00000000L,(NTSTATUS)0xC006001EL,
				 (pDevExt->SymbolicLinkName).Length + sizeof(WCHAR ),
				 (pDevExt->SymbolicLinkName).Buffer,
				 (pExtension->SymbolicLinkName).Length + sizeof(WCHAR ),
				 (pExtension->SymbolicLinkName).Buffer);
				 
		  return (NTSTATUS )0xC000000EL;
		}
	      temp__1 = SerialMemCompare(PConfig->InterruptStatus,
					 PConfig->SpanOfInterruptStatus,
					 SerialPhysicalZero, (ULONG )0);

	      if(temp__1 != AddressesAreEqual)
		{
		  temp__1 = SerialMemCompare(PConfig->InterruptStatus,
					     PConfig->SpanOfInterruptStatus,
					     pExtension->OriginalInterruptStatus,
					     pExtension->SpanOfInterruptStatus);
		  if(temp__1 == AddressesOverlap)
		    {
		      SerialLogError(PDevObj->DriverObject , (void *  )0,
				     PConfig->Controller,
				     pExtension->OriginalController, 0, 0, 0, 48,
				     (NTSTATUS)0x00000000L, (NTSTATUS)0xC006001FL,
				     (pDevExt->SymbolicLinkName).Length + sizeof(WCHAR),
				     (pDevExt->SymbolicLinkName).Buffer,
				     (pExtension->SymbolicLinkName).Length + sizeof(WCHAR),
				     (pExtension->SymbolicLinkName).Buffer);
		      return (NTSTATUS )0xC000000EL;
		    }
		}
	    }
	  temp__1 = SerialMemCompare(pExtension->OriginalInterruptStatus,
				     pExtension->SpanOfInterruptStatus,
				     SerialPhysicalZero, (ULONG )0);
	  if(temp__1 != AddressesAreEqual)
	    {
	      temp__1 =  SerialMemCompare(PConfig->Controller,
					  PConfig->SpanOfController,
					  pExtension->OriginalInterruptStatus,
					  pExtension->SpanOfInterruptStatus);
	      if(temp__1 == AddressesOverlap)
		{
		  SerialLogError(PDevObj->DriverObject, (void *  )0,
				 PConfig->Controller,
				 pExtension->OriginalController, 0, 0, 0, 49,
				 (NTSTATUS)0x00000000L, (NTSTATUS)0xC0060020L,
				 (pDevExt->SymbolicLinkName).Length+ sizeof(WCHAR ),
				 (pDevExt->SymbolicLinkName).Buffer,
				 (pExtension->SymbolicLinkName).Length + sizeof(WCHAR ),
				 (pExtension->SymbolicLinkName).Buffer);
		  return (NTSTATUS )0xC000000EL;
		}
	    }
	}
      pCurDevObj = pCurDevObj->Flink;
      if(pCurDevObj != (void *  )0)
	  pExtension = (SERIAL_DEVICE_EXTENSION*)((PCHAR)pCurDevObj -
						  (ULONG_PTR)(&((SERIAL_DEVICE_EXTENSION *)0)->AllDevObjs));
      
      } // end of while


  if(! ((& SerialGlobals.AllDevObjs)->Flink == & SerialGlobals.AllDevObjs))	
    {
      pCurDevObj = (SerialGlobals.AllDevObjs).Flink;
      pExtension = (SERIAL_DEVICE_EXTENSION *  )((PCHAR )pCurDevObj -
			    (ULONG_PTR )(& ((SERIAL_DEVICE_EXTENSION *  )0)->AllDevObjs));
    }
  else
    {
      pCurDevObj = (void *  )0;
      pExtension = (void *  )0;
    }
  temp__1 = SerialMemCompare(PConfig->InterruptStatus,
			     PConfig->SpanOfInterruptStatus, SerialPhysicalZero, 
			     (ULONG )0);
  if(temp__1 != AddressesAreEqual && pCurDevObj != (void *  )0)
    {
      do
	{
	  if(pExtension->InterfaceType == PConfig->InterfaceType
	     && pExtension->AddressSpace ==
	     PConfig->AddressSpace && pExtension->BusNumber== PConfig->BusNumber)
	    {
	      temp__1 = SerialMemCompare(pExtension->OriginalInterruptStatus,
					 pExtension->SpanOfInterruptStatus,
					 PConfig->InterruptStatus, PConfig->SpanOfInterruptStatus);
	      if(temp__1 == AddressesAreEqual) 
		                  
		{
		  if(PConfig->TrIrql != pExtension->Irql || PConfig->TrVector != pExtension->Vector)
		    {
		      SerialLogError(PDevObj->DriverObject , (void *  )0,
				     PConfig->Controller,
				     pExtension->OriginalController,
				     0, 0, 0, 50, (NTSTATUS)0x00000000L,
				     (NTSTATUS )0xC0060021L,
				     (pDevExt->SymbolicLinkName).Length + sizeof(WCHAR),
				     (pDevExt->SymbolicLinkName).Buffer,
				     (pExtension->SymbolicLinkName).Length + sizeof(WCHAR),
				     (pExtension->SymbolicLinkName).Buffer);
		      return (NTSTATUS )0xC000000EL;
		    }
		  /*
		    TRACER: we may need  MINMAX here 
		  */
		  status = SerialInitMultiPort(pExtension,PConfig, PDevObj);
		  return status;
		}
	    }
	  pCurDevObj = pCurDevObj->Flink;
	  if(pCurDevObj != (void *  )0)
	    {
	      pExtension = (SERIAL_DEVICE_EXTENSION * )((PCHAR )pCurDevObj -
		      (ULONG_PTR )(&((SERIAL_DEVICE_EXTENSION * )0)->AllDevObjs)); 
	    }
	} while(pCurDevObj != (void *  )0 && pCurDevObj != &  SerialGlobals.AllDevObjs);
	
    }
  status = SerialInitOneController(PDevObj, PConfig);
  if(! ((NTSTATUS )status >= 0))
    return status;
  if(! ((& SerialGlobals.AllDevObjs)->Flink == &
	SerialGlobals.AllDevObjs))
    {
      pCurDevObj = (SerialGlobals.AllDevObjs).Flink;
      pExtension = (SERIAL_DEVICE_EXTENSION *  )((PCHAR )pCurDevObj -
						 (ULONG_PTR )(& ((SERIAL_DEVICE_EXTENSION * 
								  )0)->AllDevObjs));
    }
  else
    {
      pCurDevObj = (void *  )0;
      pExtension = (void *  )0;
    }
  if(! PConfig->Jensen && pCurDevObj != (void *  )0)
    {
      do
	{
	  if(pExtension->Irql == PConfig->TrIrql &&
	     pExtension->Vector == PConfig->TrVector)
	    {
	      pExtension->NewExtension = pDevExt;
	      ExFreePool(pDevExt->CIsrSw);
	      KeSynchronizeExecution(pExtension->Interrupt,
				     SerialBecomeSharer, pExtension);
	      return (NTSTATUS )0x00000000L;
	    }
	  pCurDevObj = pCurDevObj->Flink;
	  if(pCurDevObj != (void *  )0)
	    {
	      pExtension = (SERIAL_DEVICE_EXTENSION * 
			    )((PCHAR )pCurDevObj - (ULONG_PTR )(&
								((SERIAL_DEVICE_EXTENSION * 
								  )0)->AllDevObjs));
	    }
	} while(pCurDevObj != (void *  )0 && pCurDevObj != & SerialGlobals.AllDevObjs);	    
    }
  return (NTSTATUS )0x00000000L;
}

// #line 16 "C:/NTDDK/inc/stddef.h"

// #line 16 "C:/Program Files/Microsoft Visual Studio/VC98/include/excpt.h"
// #pragma pack(pop)
// #line 25 "C:/NTDDK/inc/ntdef.h"

// #pragma once
// #line 15 "C:/Program Files/Microsoft Visual Studio/VC98/include/ctype.h"
// #pragma once
// #line 127 "C:/NTDDK/inc/ntdef.h"
// #line 25 "C:/NTDDK/inc/basetsd.h"
// #line 217 "C:/NTDDK/inc/ntdef.h"
// #line 24 "C:/NTDDK/inc/pshpack4.h"
// #line 618 "C:/NTDDK/inc/ddk/ntddk.h"
// #line 27 "C:/NTDDK/inc/poppack.h"
// #line 642 "C:/NTDDK/inc/ddk/ntddk.h"
// #line 24 "C:/NTDDK/inc/pshpack4.h"
// #line 8309 "C:/NTDDK/inc/ddk/ntddk.h"
// #line 27 "C:/NTDDK/inc/poppack.h"
// #line 8419 "C:/NTDDK/inc/ddk/ntddk.h"
// #line 24 "C:/NTDDK/inc/pshpack1.h"
// #line 8518 "C:/NTDDK/inc/ddk/ntddk.h"
// #line 27 "C:/NTDDK/inc/poppack.h"
// #line 8761 "C:/NTDDK/inc/ddk/ntddk.h"
// #line 24 "C:/NTDDK/inc/pshpack4.h"
// #line 14271 "C:/NTDDK/inc/ddk/ntddk.h"
// #line 27 "C:/NTDDK/inc/poppack.h"
// #line 14615 "C:/NTDDK/inc/ddk/ntddk.h"
// #line 28 "C:/NTDDK/inc/ddk/wdm/wmilib.h"
// #line 13 "C:/NTDDK/inc/wmidata.h"
// #line 27 "ioctl.c"
BOOLEAN SerialGetModemUpdate(PVOID Context ) ;
BOOLEAN SerialGetCommStatus(PVOID Context ) ;
BOOLEAN SerialSetEscapeChar(PVOID Context ) ;
BOOLEAN SerialGetStats(PVOID Context )
{
  PIO_STACK_LOCATION irpSp;
  PSERIAL_DEVICE_EXTENSION extension;
  PSERIALPERF_STATS sp;
  
  irpSp = ((((PIRP)Context)->Tail).Overlay).CurrentStackLocation;
  extension= (irpSp->DeviceObject)->DeviceExtension;
  sp = (((PIRP )Context)->AssociatedIrp).SystemBuffer;
  * sp = extension->PerfStats;
  return 0;
}

BOOLEAN SerialClearStats(PVOID Context )
{
  memset(& ((PSERIAL_DEVICE_EXTENSION )Context)->PerfStats, 0,
	 sizeof(SERIALPERF_STATS ));
  memset(& ((PSERIAL_DEVICE_EXTENSION )Context)->WmiPerfData, 0,
	 sizeof(SERIAL_WMI_PERF_DATA ));
  return 0;
}

BOOLEAN SerialSetChars(PVOID Context )
{
  (((PSERIAL_IOCTL_SYNC )Context)->Extension)->SpecialChars = *
    (PSERIAL_CHARS )((PSERIAL_IOCTL_SYNC )Context)->Data;
  return 0;
}


BOOLEAN SerialSetBaud(PVOID Context )
{
  PSERIAL_DEVICE_EXTENSION Extension;
  USHORT Appropriate;
  PUCHAR Address ;
  SHORT Divisor;
  UCHAR LineControl ;  
  

  Extension = ((PSERIAL_IOCTL_SYNC)Context)->Extension;
  Appropriate = (unsigned short )((ULONG_PTR )((PSERIAL_IOCTL_SYNC)Context)->Data);
  Address = Extension->Controller;
  Divisor = Appropriate;
  LineControl = READ_PORT_UCHAR(Address + (ULONG )(0x03 * 1));
  WRITE_PORT_UCHAR(Address + (ULONG )(0x03 * 1), (UCHAR)(LineControl | 0x80));						      
  WRITE_PORT_UCHAR(Address + (ULONG )(0x00 * 1), (UCHAR )(Divisor& 0xff));			
  WRITE_PORT_UCHAR(Address + (ULONG )(0x01 * 1), (UCHAR )((Divisor& 0xff00) >> 8));
  WRITE_PORT_UCHAR(Address + (ULONG )(0x03 * 1), LineControl);

  return 0;
}

BOOLEAN SerialSetLineControl(PVOID Context )
{
  PSERIAL_DEVICE_EXTENSION Extension;

  Extension = Context;
  WRITE_PORT_UCHAR(Extension->Controller + (ULONG )(0x03 * 1),
		   Extension->LineControl);
  return 0;
}

BOOLEAN SerialGetModemUpdate(PVOID Context )
{
  PSERIAL_DEVICE_EXTENSION Extension;
  ULONG *  Result;

  Extension = ((PSERIAL_IOCTL_SYNC)Context)->Extension;
  Result = (ULONG *  )((PSERIAL_IOCTL_SYNC )Context)->Data;
  * Result = SerialHandleModemUpdate(Extension, 0);
  return 0;
}

BOOLEAN SerialSetMCRContents(PVOID Context )
{
  PSERIAL_DEVICE_EXTENSION Extension;
  ULONG *  Result;

  Extension = ((PSERIAL_IOCTL_SYNC)Context)->Extension;
  Result = (ULONG *  )((PSERIAL_IOCTL_SYNC )Context)->Data;
  WRITE_PORT_UCHAR(Extension->Controller + (ULONG )(0x04 * 1),
		   (UCHAR )((ULONG )((ULONG_PTR )Result)));
  return 0;
}

BOOLEAN SerialGetMCRContents(PVOID Context )
{
  PSERIAL_DEVICE_EXTENSION Extension;
  ULONG *  Result;

  Extension = ((PSERIAL_IOCTL_SYNC)Context)->Extension;
  Result = (ULONG *  )((PSERIAL_IOCTL_SYNC )Context)->Data;
  * Result = READ_PORT_UCHAR(Extension->Controller + (ULONG )(0x04 * 1));
  return 0;
}

BOOLEAN SerialSetFCRContents(PVOID Context )
{

  PSERIAL_DEVICE_EXTENSION Extension;
  ULONG *  Result;

  Extension = ((PSERIAL_IOCTL_SYNC)Context)->Extension;
  Result = (ULONG *  )((PSERIAL_IOCTL_SYNC )Context)->Data;
  WRITE_PORT_UCHAR(Extension->Controller + (ULONG )(0x02 * 1),(UCHAR )(* Result));
  return 0;
}

BOOLEAN SerialGetCommStatus(PVOID Context )
{

  PSERIAL_DEVICE_EXTENSION Extension;
  PSERIAL_STATUS Stat;

  Extension = ((PSERIAL_IOCTL_SYNC)Context)->Extension;
  Stat = ((PSERIAL_IOCTL_SYNC )Context)->Data;
  Stat->Errors = Extension->ErrorWord;
  Extension->ErrorWord = 0;
  Stat->EofReceived = 0;
  Stat->AmountInInQueue = Extension->CharsInInterruptBuffer;
  Stat->AmountInOutQueue = Extension->TotalCharsQueued;
  if(Extension->WriteLength)
    {
      Stat->AmountInOutQueue -=
	((((((Extension->CurrentWriteIrp)->Tail).Overlay).CurrentStackLocation)->Parameters).Write).Length - 
	Extension->WriteLength;
	   
    }
  Stat->WaitForImmediate = Extension->TransmitImmediate;
  Stat->HoldReasons = 0;
  if(Extension->TXHolding)
    {
      if(Extension->TXHolding & (ULONG )0x01)
	  Stat->HoldReasons |= (ULONG )0x00000001;
      if(Extension->TXHolding & (ULONG )0x02)
	Stat->HoldReasons |= (ULONG )0x00000002;
      if(Extension->TXHolding & (ULONG )0x04)
	Stat->HoldReasons |= (ULONG )0x00000004;
      if(Extension->TXHolding & (ULONG )0x08)
	Stat->HoldReasons |= (ULONG )0x00000008;
      if(Extension->TXHolding & (ULONG )0x10)
	Stat->HoldReasons |= (ULONG )0x00000020;
      if(Extension->RXHolding & (ULONG )0x08)
	Stat->HoldReasons |= (ULONG )0x00000040;
      if(Extension->RXHolding & (ULONG )0x02)
	Stat->HoldReasons |= (ULONG )0x00000010;
    }
      return 0;
}

BOOLEAN SerialSetEscapeChar(PVOID Context )
{
  PSERIAL_DEVICE_EXTENSION extension;
  extension = ((((((PIRP)Context)->Tail).Overlay).CurrentStackLocation)->DeviceObject)->DeviceExtension;
  extension->EscapeChar = * (PUCHAR )(((PIRP)Context)->AssociatedIrp).SystemBuffer;
  return 0;
}

// Called from main()
NTSTATUS SerialIoControl(PDEVICE_OBJECT DeviceObject , PIRP Irp )
{
  NTSTATUS Status ;
  PIO_STACK_LOCATION IrpSp ;
  PSERIAL_DEVICE_EXTENSION Extension;
  KIRQL OldIrql ;

  NTSTATUS prologueStatus ;
  int temp_1;
  NTSTATUS temp__2;

  ULONG BaudRate ;
  SHORT AppropriateDivisor ;

  SERIAL_IOCTL_SYNC S ;
  PSERIAL_XOFF_COUNTER Xc;

  PSERIAL_LINE_CONTROL Lc;
  UCHAR LData ;
  UCHAR LStop ;
  UCHAR LParity ;
  UCHAR Mask;
  ULONG UMask ;
  PSERIAL_TIMEOUTS NewTimeouts;
  PSERIAL_CHARS NewChars ;
  PSERIAL_QUEUE_SIZE Rs;	
  ULONG NewMask ;

  PSERIAL_HANDFLOW HandFlow;
  ULONG ModemControl ;
  PUCHAR escapeChar;       

  PSERIAL_BAUD_RATE Br;

  Extension = DeviceObject->DeviceExtension;

  if(Extension->DeviceIsOpened != 1)
    {
      (Irp->IoStatus).Status = (NTSTATUS )0xC0000010L;
      // TRACER
      myStatus = (NTSTATUS )0xC0000010L;

      IofCompleteRequest(Irp, 0);
      return (NTSTATUS )0xC0000010L;
    }
  prologueStatus = SerialIRPPrologue(Irp, Extension);
  if(prologueStatus  != (NTSTATUS)0x00000000L)
    {
      (Irp->IoStatus).Status = prologueStatus;
      // TRACER
      myStatus =  prologueStatus;

      IofCompleteRequest(Irp, 0);
      SerialIRPEpilogue(Extension);
      return prologueStatus;
    }
  temp__2 = SerialCompleteIfError(DeviceObject, Irp);

  if(temp__2 != (NTSTATUS )0x00000000L)
    return (NTSTATUS )0xC0000120L;

  IrpSp = ((Irp->Tail).Overlay).CurrentStackLocation;
  (Irp->IoStatus).Information = 0L;
  Status = (NTSTATUS )0x00000000L;
  ///////////////////////////////////////////////////////////////
  // BEGIN HUGE SWITCH
  ///////////////////////////////////////////////////////////////
  switch(temp_1)  /* ((IrpSp->Parameters).DeviceIoControl).IoControlCode */
    {
    case 1 /* 0x0000001b << 16 | 0 << 14 | 1 << 2 | 0 */:
      {
	if(((IrpSp->Parameters).DeviceIoControl).InputBufferLength< sizeof(SERIAL_BAUD_RATE ))
	  {
	    Status = (NTSTATUS )0xC0000023L;
	    break;
	  }
	else
	    BaudRate = ((PSERIAL_BAUD_RATE)(Irp->AssociatedIrp).SystemBuffer)->BaudRate;

	Status = SerialGetDivisorFromBaud(Extension->ClockRate,
					  BaudRate, & AppropriateDivisor);
	if((NTSTATUS )Status >= 0)
	  {
	    if(Extension->PowerState != PowerDeviceD0)
	      {
		Status = SerialGotoPowerState(Extension->Pdo,					      
					      Extension, PowerDeviceD0);
		if(! ((NTSTATUS )Status >= 0))
		  break;
	      }
	  }
	* & OldIrql = KfAcquireSpinLock(& Extension->ControlLock);
	if((NTSTATUS )Status >= 0)
	  {
	    Extension->CurrentBaud = BaudRate;
	    (Extension->WmiCommData).BaudRate = BaudRate;
	    S.Extension = Extension;
	    S.Data = (PVOID )AppropriateDivisor;
	    KeSynchronizeExecution(Extension->Interrupt,
				   SerialSetBaud, & S);
	  }
	KfReleaseSpinLock(& Extension->ControlLock, OldIrql);
	break;
      }
    case 2 /* 0x0000001b << 16 | 0 << 14 | 20 << 2 | 0 */:
      {
	Br = (PSERIAL_BAUD_RATE)(Irp->AssociatedIrp).SystemBuffer;
	if(((IrpSp->Parameters).DeviceIoControl).OutputBufferLength < sizeof(SERIAL_BAUD_RATE ))
	  {
	    Status = (NTSTATUS )0xC0000023L;
	    break;
	  }
	* & OldIrql = KfAcquireSpinLock(& Extension->ControlLock);
	Br->BaudRate = Extension->CurrentBaud;
	KfReleaseSpinLock(& Extension->ControlLock, OldIrql);
	(Irp->IoStatus).Information = sizeof(SERIAL_BAUD_RATE );
	break;
      }
    case 3 /* 0x0000001b << 16 | 0 << 14 | 37 << 2 | 0 */:
      {
	if(((IrpSp->Parameters).DeviceIoControl).OutputBufferLength < sizeof(ULONG ))
	  {
	    Status = (NTSTATUS )0xC0000023L;
	    break;
	  }
	(Irp->IoStatus).Information = sizeof(ULONG );
	S.Extension = Extension;
	S.Data = (Irp->AssociatedIrp).SystemBuffer;
	* & OldIrql = KfAcquireSpinLock(&
					Extension->ControlLock);
	KeSynchronizeExecution(Extension->Interrupt,
			       SerialGetMCRContents, & S);
	KfReleaseSpinLock(& Extension->ControlLock, OldIrql);
	break;
      }
    case 4 /* 0x0000001b << 16 | 0 << 14 | 38 << 2 | 0 */:
      {
	if(((IrpSp->Parameters).DeviceIoControl).InputBufferLength  < sizeof(ULONG ))
	  {
	    Status = (NTSTATUS )0xC0000023L;
	    break;
	  }
	S.Extension = Extension;
	S.Data = (Irp->AssociatedIrp).SystemBuffer;
	if(Extension->PowerState != PowerDeviceD0)
	  {
	    Status = SerialGotoPowerState(Extension->Pdo,
					  Extension, PowerDeviceD0);
	    if(! ((NTSTATUS )Status >= 0))
	      break;
	  }
	* & OldIrql = KfAcquireSpinLock(&
					Extension->ControlLock);
	KeSynchronizeExecution(Extension->Interrupt,
			       SerialSetMCRContents, & S);
	KfReleaseSpinLock(& Extension->ControlLock, OldIrql);
	break;
      }
    case 5 /* 0x0000001b << 16 | 0 << 14 | 39 << 2 | 0 */:
      {
	if(((IrpSp->Parameters).DeviceIoControl).InputBufferLength < sizeof(ULONG ))
	  {
	    Status = (NTSTATUS )0xC0000023L;
	    break;
	  }
	S.Extension = Extension;
	S.Data = (Irp->AssociatedIrp).SystemBuffer;
	if(Extension->PowerState != PowerDeviceD0)
	  {
	    Status = SerialGotoPowerState(Extension->Pdo,
					  Extension, PowerDeviceD0);
	    if(! ((NTSTATUS )Status >= 0))
	      break;
	  }
	* & OldIrql = KfAcquireSpinLock(&
					Extension->ControlLock);
	KeSynchronizeExecution(Extension->Interrupt,
			       SerialSetFCRContents, & S);
	KfReleaseSpinLock(& Extension->ControlLock, OldIrql);
	break;
      }
    case 6 /* 0x0000001b << 16 | 0 << 14 | 3 << 2 | 0 */:
      {
	Mask = 0xff;
	Lc = (PSERIAL_LINE_CONTROL)(Irp->AssociatedIrp).SystemBuffer;
	if(((IrpSp->Parameters).DeviceIoControl).InputBufferLength < sizeof(SERIAL_LINE_CONTROL ))
	  {
	    Status = (NTSTATUS )0xC0000023L;
	    break;
	  }
	if(Extension->PowerState != PowerDeviceD0)
	  {
	    Status = SerialGotoPowerState(Extension->Pdo,
					  Extension, PowerDeviceD0);
	    if(! ((NTSTATUS )Status >= 0))
	      break;
	  }

	switch(Lc->WordLength)
	  {
	  case 5:
	    {
	      LData = (UCHAR )0x00;
	      Mask = 0x1f;
	      break;
	    }
	  case 6:
	    {
	      LData = (UCHAR )0x01;
	      Mask = 0x3f;
	      break;
	    }
	  case 7:
	    {
	      LData = (UCHAR )0x02;
	      Mask = 0x7f;
	      break;
	    }
	  case 8:
	    {
	      LData = (UCHAR )0x03;
	      break;
	    }
	  default :
	    {
	      Status = (NTSTATUS )0xC000000DL;
	      goto DoneWithIoctl;
	    }
	  }
	(Extension->WmiCommData).BitsPerByte = Lc->WordLength;
	switch(Lc->Parity)
	  {
	  case 0:
	    {
	      (Extension->WmiCommData).Parity = 0;
	      LParity = (UCHAR )0x00;
	      break;
	    }
	  case 2:
	    {
	      (Extension->WmiCommData).Parity = 2;
	      LParity = (UCHAR )0x18;
	      break;
	    }
	  case 1:
	    {
	      (Extension->WmiCommData).Parity = 1;
	      LParity = (UCHAR )0x08;
	      break;
	    }
	  case 4:
	    {
	      (Extension->WmiCommData).Parity = 3;
	      LParity = (UCHAR )0x38;
	      break;
	    }
	  case 3:
	    {
	      (Extension->WmiCommData).Parity = 4;
	      LParity = (UCHAR )0x28;
	      break;
	    }
	  default :
	    {
	      Status = (NTSTATUS )0xC000000DL;
	      goto DoneWithIoctl;
	      break;
	    }
	  }
	switch(Lc->StopBits)
	  {
	  case 0:
	    {
	      (Extension->WmiCommData).StopBits = 0;
	      LStop = (UCHAR )0x00;
	      break;
	    }
	  case 1:
	    {
	      if(LData != (UCHAR )0x00)
		{
		  Status = (NTSTATUS )0xC000000DL;
		  goto DoneWithIoctl;
		}
	      (Extension->WmiCommData).StopBits = 1;
	      LStop = (UCHAR )0x04;
	      break;
	    }
	  case 2:
	    {
	      if(LData == (UCHAR )0x00)
		{
		  Status = (NTSTATUS )0xC000000DL;
		  goto DoneWithIoctl;
		}
	      (Extension->WmiCommData).StopBits = 2;
	      LStop = (UCHAR )0x04;
	      break;
	    }
	  default :
	    {
	      Status = (NTSTATUS )0xC000000DL;
	      goto DoneWithIoctl;
	    }
	  }
	* & OldIrql = KfAcquireSpinLock(& Extension->ControlLock);
	Extension->LineControl = (UCHAR )(Extension->LineControl
					  & 0x40 | (LData | LParity | LStop));
	Extension->ValidDataMask = Mask;
	KeSynchronizeExecution(Extension->Interrupt,
			       SerialSetLineControl, Extension);
	KfReleaseSpinLock(& Extension->ControlLock, OldIrql);
	break;
      }
    case 8 /* 0x0000001b << 16 | 0 << 14 | 21 << 2 | 0 */:
      {
	Lc = (PSERIAL_LINE_CONTROL)(Irp->AssociatedIrp).SystemBuffer;
	if(((IrpSp->Parameters).DeviceIoControl).OutputBufferLength < sizeof(SERIAL_LINE_CONTROL ))
	  {
	    Status = (NTSTATUS )0xC0000023L;
	    break;
	  }
	* & OldIrql = KfAcquireSpinLock(& Extension->ControlLock);
	if((Extension->LineControl & (UCHAR )0x03) == (UCHAR)0x00)
	  Lc->WordLength = 5;
	else
	  {
	    if((Extension->LineControl & (UCHAR )0x03) == (UCHAR )0x01)
	      Lc->WordLength = 6;
	    else
	      {
		if((Extension->LineControl & (UCHAR)0x03) == (UCHAR )0x02)
		  Lc->WordLength = 7;
		else
		  {
		    if((Extension->LineControl &
			(UCHAR )0x03) == (UCHAR)0x03)
			Lc->WordLength = 8;
		  }
	      }
	  }
	if((Extension->LineControl & (UCHAR )0x38) == (UCHAR)0x00)
	  Lc->Parity = 0;
	else
	  {
	    if((Extension->LineControl & (UCHAR )0x38) ==(UCHAR )0x08)
	      Lc->Parity = 1;
	    else
	      {
		if((Extension->LineControl & (UCHAR)0x38) == (UCHAR )0x18)
		    Lc->Parity = 2;
		else
		  {
		    if((Extension->LineControl & (UCHAR )0x38) == (UCHAR)0x28) 
		      Lc->Parity = 3;
		    else
		      {
			if((Extension->LineControl & (UCHAR )0x38) == (UCHAR )0x38)
			  {
			    Lc->Parity = 4;
			  }
		      }
		  }
	      }
	  }
	if(Extension->LineControl & (UCHAR )0x04)
	  {
	    if(Lc->WordLength == 5)
		Lc->StopBits = 1;
	    else
		Lc->StopBits = 2;
	  }
	else
	  Lc->StopBits = 0;
	(Irp->IoStatus).Information = sizeof(SERIAL_LINE_CONTROL);
	KfReleaseSpinLock(& Extension->ControlLock, OldIrql);
	break;
      }
    case 9 /* 0x0000001b << 16 | 0 << 14 | 7 << 2 | 0 */:
      {
	NewTimeouts = (PSERIAL_TIMEOUTS)(Irp->AssociatedIrp).SystemBuffer;
	if(((IrpSp->Parameters).DeviceIoControl).InputBufferLength< sizeof(SERIAL_TIMEOUTS ))
	  {
	    Status = (NTSTATUS )0xC0000023L;
	    break;
	  }
	if(NewTimeouts->ReadIntervalTimeout == 0xffffffff &&
	   NewTimeouts->ReadTotalTimeoutMultiplier == 0xffffffff &&
	   NewTimeouts->ReadTotalTimeoutConstant == 0xffffffff)
	  {
	    Status = (NTSTATUS )0xC000000DL;
	    break;
	  }
	* & OldIrql = KfAcquireSpinLock(& Extension->ControlLock);
	(Extension->Timeouts).ReadIntervalTimeout =
	  NewTimeouts->ReadIntervalTimeout;
	(Extension->Timeouts).ReadTotalTimeoutMultiplier =
	  NewTimeouts->ReadTotalTimeoutMultiplier;
	(Extension->Timeouts).ReadTotalTimeoutConstant =
	  NewTimeouts->ReadTotalTimeoutConstant;
	(Extension->Timeouts).WriteTotalTimeoutMultiplier =
	  NewTimeouts->WriteTotalTimeoutMultiplier;
	(Extension->Timeouts).WriteTotalTimeoutConstant =
	  NewTimeouts->WriteTotalTimeoutConstant;
	KfReleaseSpinLock(& Extension->ControlLock, OldIrql);
	break;
      }
    case 10 /* 0x0000001b << 16 | 0 << 14 | 8 << 2 | 0 */:
      {
	if(((IrpSp->Parameters).DeviceIoControl).OutputBufferLength < sizeof(SERIAL_TIMEOUTS ))
	  {
	    Status = (NTSTATUS )0xC0000023L;
	    break;
	  }
	* & OldIrql = KfAcquireSpinLock(& Extension->ControlLock);
	* (PSERIAL_TIMEOUTS )(Irp->AssociatedIrp).SystemBuffer =
	  Extension->Timeouts;
	(Irp->IoStatus).Information = sizeof(SERIAL_TIMEOUTS );
	KfReleaseSpinLock(& Extension->ControlLock, OldIrql);
	break;
      }
    case 11 /* 0x0000001b << 16 | 0 << 14 | 23 << 2 | 0 */:
      {

	NewChars = (PSERIAL_CHARS)(Irp->AssociatedIrp).SystemBuffer;
	if(((IrpSp->Parameters).DeviceIoControl).InputBufferLength< sizeof(SERIAL_CHARS ))
	  {
	    Status = (NTSTATUS )0xC0000023L;
	    break;
	  }
	S.Extension = Extension;
	S.Data = NewChars;
	* & OldIrql = KfAcquireSpinLock(& Extension->ControlLock);
	if(Extension->EscapeChar)
	  {
	    if(Extension->EscapeChar == NewChars->XonChar ||
	       Extension->EscapeChar == NewChars->XoffChar)
	      {
		Status = (NTSTATUS )0xC000000DL;
		KfReleaseSpinLock(& Extension->ControlLock,OldIrql);
		break;
	      }
	  }
	(Extension->WmiCommData).XonCharacter =
	  NewChars->XonChar;
	(Extension->WmiCommData).XoffCharacter =
	  NewChars->XoffChar;
	KeSynchronizeExecution(Extension->Interrupt,
			       SerialSetChars, & S);
	KfReleaseSpinLock(& Extension->ControlLock, OldIrql);
	break;
      }
    case 12 /*0x0000001b << 16 | 0 << 14 | 22 << 2 | 0*/:
      {
	if(((IrpSp->Parameters).DeviceIoControl).OutputBufferLength
	   < sizeof(SERIAL_CHARS ))
	  {
	    Status = (NTSTATUS )0xC0000023L;
	    break;
	  }
	* & OldIrql = KfAcquireSpinLock(&
					Extension->ControlLock);
	* (PSERIAL_CHARS )(Irp->AssociatedIrp).SystemBuffer =
	  Extension->SpecialChars;
	(Irp->IoStatus).Information = sizeof(SERIAL_CHARS );
	KfReleaseSpinLock(& Extension->ControlLock, OldIrql);
	break;
      }
    case 13 /* 0x0000001b << 16 | 0 << 14 | 9 << 2 | 0 */:
    case 14 /* 0x0000001b << 16 | 0 << 14 | 10 << 2 | 0 */:
      {
	if(Extension->PowerState != PowerDeviceD0)
	  {
	    Status = SerialGotoPowerState(Extension->Pdo,
					  Extension, PowerDeviceD0);
	    if(! ((NTSTATUS )Status >= 0))
	      break;
	  }
	* & OldIrql = KfAcquireSpinLock(&
					Extension->ControlLock);
	if(((Extension->HandFlow).ControlHandShake & (ULONG)0x03) == (ULONG )0x02)
	  Status = (NTSTATUS )0xC000000DL;
	else
	  {
	    KeSynchronizeExecution(Extension->Interrupt,
				   /* ((IrpSp->Parameters).DeviceIoControl).IoControlCode */
/* 				   == (0x0000001b << 16 | 0 << 14 | 9 << 2 */
/* 				       | 0) ? */ SerialSetDTR /* : SerialClrDTR */,
				   Extension);
	  }
	KfReleaseSpinLock(& Extension->ControlLock, OldIrql);
	break;
      }
    case 15 /*0x0000001b << 16 | 0 << 14 | 11 << 2 | 0*/:
      break;
    case 16 /* 0x0000001b << 16 | 0 << 14 | 12 << 2 | 0 */:
    case 17 /* 0x0000001b << 16 | 0 << 14 | 13 << 2 | 0 */:
      if(Extension->PowerState != PowerDeviceD0)
	{
	  Status = SerialGotoPowerState(Extension->Pdo,
					Extension, PowerDeviceD0);
	  if(! ((NTSTATUS )Status >= 0))
	    break;
	}
      * & OldIrql = KfAcquireSpinLock(&
				      Extension->ControlLock);
      if(((Extension->HandFlow).FlowReplace & (ULONG )0xc0) == (ULONG )0x80 || 
	 ((Extension->HandFlow).FlowReplace & (ULONG)0xc0) == (ULONG )0xc0) 
	    Status = (NTSTATUS )0xC000000DL;
      else
	{
	  KeSynchronizeExecution(Extension->Interrupt,
				 /* ((IrpSp->Parameters).DeviceIoControl).IoControlCode */
/* 				   == (0x0000001b << 16 | 0 << 14 | 12 << 2 */
/* 				       | 0) ? */ SerialSetRTS /* : SerialClrRTS */,
				   Extension);
	}
      KfReleaseSpinLock(& Extension->ControlLock, OldIrql);
      break;
    case 18 /*0x0000001b << 16 | 0 << 14 | 14 << 2 | 0*/:
      KeSynchronizeExecution(Extension->Interrupt,
			     SerialPretendXoff, Extension);
      break;
    case 19 /*0x0000001b << 16 | 0 << 14 | 15 << 2 | 0*/:
      KeSynchronizeExecution(Extension->Interrupt,
			     SerialPretendXon, Extension);
      break;
    case 20 /*0x0000001b << 16 | 0 << 14 | 4 << 2 | 0*/:
      if(Extension->PowerState != PowerDeviceD0)
	{
	  Status = SerialGotoPowerState(Extension->Pdo,
					Extension, PowerDeviceD0);
	  if(! ((NTSTATUS )Status >= 0))
	    break;
	}
      KeSynchronizeExecution(Extension->Interrupt,
			     SerialTurnOnBreak, Extension);
      break;
    case 21 /*0x0000001b << 16 | 0 << 14 | 5 << 2 | 0*/:
      if(Extension->PowerState != PowerDeviceD0)
	{
	  Status = SerialGotoPowerState(Extension->Pdo,
					Extension, PowerDeviceD0);
	  if(! ((NTSTATUS )Status >= 0))
	    break;
	}
	KeSynchronizeExecution(Extension->Interrupt,
			       SerialTurnOffBreak, Extension);
	break;
    case 22 /*0x0000001b << 16 | 0 << 14 | 2 << 2 | 0*/:
      {
	Rs = (PSERIAL_QUEUE_SIZE)(Irp->AssociatedIrp).SystemBuffer;
	if(((IrpSp->Parameters).DeviceIoControl).InputBufferLength < sizeof(SERIAL_QUEUE_SIZE ))
	  {
	    Status = (NTSTATUS )0xC0000023L;
	    break;
	  }
	if(Rs->InSize <= Extension->BufferSize)
	  {
	    Status = (NTSTATUS )0x00000000L;
	    break;
	  }
	((IrpSp->Parameters).DeviceIoControl).Type3InputBuffer =
	  ExAllocatePoolWithQuotaTag(NonPagedPool, Rs->InSize, tag__1 /*'XMOC'*/);
	if(!
	   ((IrpSp->Parameters).DeviceIoControl).Type3InputBuffer)
	  {
	    break;
	  }
	return   SerialStartOrQueue(Extension, Irp, &
				    Extension->ReadQueue, &
				    Extension->CurrentReadIrp, 2 /*SerialStartRead*/);
	break;
      }
    case 23 /*0x0000001b << 16 | 0 << 14 | 16 << 2 | 0*/:
      {
	if(((IrpSp->Parameters).DeviceIoControl).OutputBufferLength < sizeof(ULONG ))
	  {
	    Status = (NTSTATUS )0xC0000023L;
	    break;
	  }
	(Irp->IoStatus).Information = sizeof(ULONG );
	* (ULONG *  )(Irp->AssociatedIrp).SystemBuffer = Extension->IsrWaitMask;
	break;
      }
    case 24 /* 0x0000001b << 16 | 0 << 14 | 17 << 2 | 0 */:
      {
	if(((IrpSp->Parameters).DeviceIoControl).InputBufferLength < sizeof(ULONG ))	  
	  {
	    Status = (NTSTATUS )0xC0000023L;
	    break;
	  }
	else
	  NewMask = * (ULONG *  )(Irp->AssociatedIrp).SystemBuffer;
	
	if(NewMask & /*~*/ (0x0001 | 0x0002 | 0x0004 | 0x0008 |
			    0x0010 | 0x0020 | 0x0040 | 0x0080 | 0x0100 |
			    0x0200 | 0x0400 | 0x0800 | 0x1000))
	  {
	    Status = (NTSTATUS )0xC000000DL;
	    break;
	  }
	return  SerialStartOrQueue(Extension, Irp, &
				   Extension->MaskQueue, &
				   Extension->CurrentMaskIrp, 3 /*SerialStartMask*/);
      }
    case 25 /*0x0000001b << 16 | 0 << 14 | 18 << 2 | 0*/:
      {
	if(((IrpSp->Parameters).DeviceIoControl).OutputBufferLength
	   < sizeof(ULONG ))
	  {
	    Status = (NTSTATUS )0xC0000023L;
	    break;
	  }
	return  SerialStartOrQueue(Extension, Irp, &
				   Extension->MaskQueue, &
				   Extension->CurrentMaskIrp, 3 /*SerialStartMask*/);
      }
    case 26 /*0x0000001b << 16 | 0 << 14 | 6 << 2 | 0*/:
      {
	if(((IrpSp->Parameters).DeviceIoControl).InputBufferLength
	   < sizeof(UCHAR ))
	  {
	    Status = (NTSTATUS )0xC0000023L;
	    break;
	  }
	IoAcquireCancelSpinLock(& OldIrql);
	if(Extension->CurrentImmediateIrp)
	  {
	    Status = (NTSTATUS )0xC000000DL;
	    IoReleaseCancelSpinLock(OldIrql);
	  }
	else
	  {
	    if(Irp->Cancel)
	      {
		IoReleaseCancelSpinLock(OldIrql);
		Status = (NTSTATUS )0xC0000120L;
	      }
	    else
	      {
		Extension->CurrentImmediateIrp = Irp;
		Extension->TotalCharsQueued++;
		IoReleaseCancelSpinLock(OldIrql);
		SerialStartImmediate(Extension);
		return (NTSTATUS )0x00000103L;
	      }
	  }
	break;
      }
    case 27 /* 0x0000001b << 16 | 0 << 14 | 19 << 2 | 0 */:
      {
	if(((IrpSp->Parameters).DeviceIoControl).InputBufferLength
	   < sizeof(ULONG ))
	  {
	    Status = (NTSTATUS )0xC0000023L;
	    break;
	  }
	UMask = * (ULONG *  )(Irp->AssociatedIrp).SystemBuffer;
	if(! UMask || UMask & /*~*/ (0x00000001 | 0x00000002 |
				   0x00000004 | 0x00000008))
	  {
	    Status = (NTSTATUS )0xC000000DL;
	    break;
	  }
	return  SerialStartOrQueue(Extension, Irp, &
				   Extension->PurgeQueue, &
				   Extension->CurrentPurgeIrp, 4 /*SerialStartPurge*/);
      }
    case 28 /* 0x0000001b << 16 | 0 << 14 | 24 << 2 | 0 */:
      {
	if(((IrpSp->Parameters).DeviceIoControl).OutputBufferLength
	   < sizeof(SERIAL_HANDFLOW ))
	  {
	    Status = (NTSTATUS )0xC0000023L;
	    break;
	  }
	(Irp->IoStatus).Information = sizeof(SERIAL_HANDFLOW );
	* & OldIrql = KfAcquireSpinLock(& Extension->ControlLock);
	* (PSERIAL_HANDFLOW )(Irp->AssociatedIrp).SystemBuffer = Extension->HandFlow;
	KfReleaseSpinLock(& Extension->ControlLock, OldIrql);
	break;
      }
    case 29 /*0x0000001b << 16 | 0 << 14 | 25 << 2 | 0*/:
      {
	HandFlow = (Irp->AssociatedIrp).SystemBuffer;
	if(((IrpSp->Parameters).DeviceIoControl).InputBufferLength < sizeof(SERIAL_HANDFLOW ))
	  {
	    Status = (NTSTATUS )0xC0000023L;
	    break;
	  }
	if(HandFlow->ControlHandShake & (ULONG )0x7fffff84)
	  {
	    Status = (NTSTATUS )0xC000000DL;
	    break;
	  }
	if(HandFlow->FlowReplace & (ULONG )0x7fffff20)
	  {
	    Status = (NTSTATUS )0xC000000DL;
	    break;
	  }
	if((HandFlow->ControlHandShake & (ULONG )0x03) == (ULONG
							   )0x03)
	  {
	    Status = (NTSTATUS )0xC000000DL;
	    break;
	  }
	if(HandFlow->XonLimit < 0 || (ULONG )HandFlow->XonLimit
	   > Extension->BufferSize)
	  {
	    Status = (NTSTATUS )0xC000000DL;
	    break;
	  }
	if(HandFlow->XoffLimit < 0 || (ULONG)HandFlow->XoffLimit > Extension->BufferSize)
	  {
	    Status = (NTSTATUS )0xC000000DL;
	    break;
	  }
	S.Extension = Extension;
	S.Data = HandFlow;
	* & OldIrql = KfAcquireSpinLock(& Extension->ControlLock);
	if(Extension->EscapeChar)
	  {
	    if(HandFlow->FlowReplace & (ULONG )0x04)
	      {
		Status = (NTSTATUS )0xC000000DL;
		KfReleaseSpinLock(& Extension->ControlLock,
				  OldIrql);
		break;
	      }
	  }
	KeSynchronizeExecution(Extension->Interrupt,
			       SerialSetHandFlow, & S);
	KfReleaseSpinLock(& Extension->ControlLock, OldIrql);
	break;
      }
    case 30 /*0x0000001b << 16 | 0 << 14 | 26 << 2 | 0*/:
      {
	if(((IrpSp->Parameters).DeviceIoControl).OutputBufferLength < sizeof(ULONG ))
	  {
	    Status = (NTSTATUS )0xC0000023L;
	    break;
	  }
	(Irp->IoStatus).Information = sizeof(ULONG );
	S.Extension = Extension;
	S.Data = (Irp->AssociatedIrp).SystemBuffer;
	* & OldIrql = KfAcquireSpinLock(& Extension->ControlLock);
	KeSynchronizeExecution(Extension->Interrupt,
			       SerialGetModemUpdate, & S);
	KfReleaseSpinLock(& Extension->ControlLock, OldIrql);
	break;
      }
    case 31 /*0x0000001b << 16 | 0 << 14 | 30 << 2 | 0*/:
      {
	if(((IrpSp->Parameters).DeviceIoControl).OutputBufferLength < sizeof(ULONG ))
	  {
	    Status = (NTSTATUS )0xC0000023L;
	    break;
	  }
	(Irp->IoStatus).Information = sizeof(ULONG );
	(Irp->IoStatus).Status = (NTSTATUS )0x00000000L;
	// TRACER
	myStatus = (NTSTATUS )0x00000000L;
	ModemControl = READ_PORT_UCHAR(Extension->Controller + (ULONG )(0x04 * 1));
	ModemControl &= (ULONG )0x00000001 | (ULONG )0x00000002;
	* (PULONG )(Irp->AssociatedIrp).SystemBuffer =
	  ModemControl;
	break;
      }
    case 32 /*0x0000001b << 16 | 0 << 14 | 27 << 2 | 0*/:
      {
	if(((IrpSp->Parameters).DeviceIoControl).OutputBufferLength
	   < sizeof(SERIAL_STATUS ))
	  {
	    Status = (NTSTATUS )0xC0000023L;
	    break;
	  }
	(Irp->IoStatus).Information = sizeof(SERIAL_STATUS );
	S.Extension = Extension;
	S.Data = (Irp->AssociatedIrp).SystemBuffer;
	IoAcquireCancelSpinLock(& OldIrql);
	KeSynchronizeExecution(Extension->Interrupt,
			       SerialGetCommStatus, & S);
	IoReleaseCancelSpinLock(OldIrql);
	break;
      }
    case 33 /*0x0000001b << 16 | 0 << 14 | 29 << 2 | 0*/:
      {
	if(((IrpSp->Parameters).DeviceIoControl).OutputBufferLength
	   < sizeof(SERIAL_COMMPROP ))
	  {
	    Status = (NTSTATUS )0xC0000023L;
	    break;
	  }
	SerialGetProperties(Extension,
			    (Irp->AssociatedIrp).SystemBuffer);
	(Irp->IoStatus).Information = sizeof(SERIAL_COMMPROP );
	(Irp->IoStatus).Status = (NTSTATUS )0x00000000L;
	// TRACER
	myStatus = (NTSTATUS )0x00000000L;
	break;
      }
    case 34 /*0x0000001b << 16 | 0 << 14 | 28 << 2 | 0*/:
      {
	Xc  = (Irp->AssociatedIrp).SystemBuffer;
	if(((IrpSp->Parameters).DeviceIoControl).InputBufferLength
	   < sizeof(SERIAL_XOFF_COUNTER ))
	  {
	    Status = (NTSTATUS )0xC0000023L;
	    break;
	  }
	if(Xc->Counter <= 0)
	  {
	    Status = (NTSTATUS )0xC000000DL;
	    break;
	  }
	(Irp->IoStatus).Information = 0;
	return  SerialStartOrQueue(Extension, Irp, &
				   Extension->WriteQueue, &
				   Extension->CurrentWriteIrp, 5 /* SerialStartWrite */);
      }
    case 35 /*0x0000001b << 16 | 0 << 14 | 31 << 2 | 0*/:
      {

	escapeChar = (Irp->AssociatedIrp).SystemBuffer;
	if(((IrpSp->Parameters).DeviceIoControl).InputBufferLength
	   < sizeof(UCHAR ))
	  {
	    Status = (NTSTATUS )0xC0000023L;
	    break;
	  }
	* & OldIrql = KfAcquireSpinLock(&
					Extension->ControlLock);
	if(* escapeChar)
	  {
	    if(* escapeChar == (Extension->SpecialChars).XoffChar
	       || * escapeChar ==
	       (Extension->SpecialChars).XonChar ||
	       (Extension->HandFlow).FlowReplace & (ULONG )0x04)
	      {
		Status = (NTSTATUS )0xC000000DL;
		KfReleaseSpinLock(&
				  Extension->ControlLock,
				  OldIrql);
		break;
	      }
	  }
	S.Extension = Extension;
	S.Data = (Irp->AssociatedIrp).SystemBuffer;
	KeSynchronizeExecution(Extension->Interrupt,
			       SerialSetEscapeChar, Irp);
	KfReleaseSpinLock(& Extension->ControlLock, OldIrql);
	break;
      }
      // #line 2148
    case 36 /*0x0000001b << 16 | 0 << 14 | 32 << 2 | 0*/:
      {
	if(((IrpSp->Parameters).DeviceIoControl).OutputBufferLength
	   < sizeof(ULONG ))
	  {
	    Status = (NTSTATUS )0xC0000023L;
	    break;
	  }
	(Irp->IoStatus).Information = sizeof(ULONG );
	(Irp->IoStatus).Status = (NTSTATUS )0x00000000L;
	// TRACER
	myStatus = (NTSTATUS )0x00000000L;
	* (PULONG )(Irp->AssociatedIrp).SystemBuffer = 0;
	break;
      }
    case 37 /*0x0000001b << 16 | 0 << 14 | 35 << 2 | 0*/:
      {
	if(((IrpSp->Parameters).DeviceIoControl).OutputBufferLength
	   < sizeof(SERIALPERF_STATS ))
	  {
	    Status = (NTSTATUS )0xC0000023L;
	    break;
	  }
	(Irp->IoStatus).Information = sizeof(SERIALPERF_STATS );
	(Irp->IoStatus).Status = (NTSTATUS )0x00000000L;
	// TRACER
	myStatus = (NTSTATUS )0x00000000L;
	KeSynchronizeExecution(Extension->Interrupt,
			       SerialGetStats, Irp);
	break;
      }
    case 38 /*0x0000001b << 16 | 0 << 14 | 36 << 2 | 0*/:
      {
	KeSynchronizeExecution(Extension->Interrupt,
			       SerialClearStats, Extension);
	break;
      }
    default :
      {
	Status = (NTSTATUS )0xC000000DL;
	break;
      }
    }
  // END HUGE SWITCH
 DoneWithIoctl:
  (Irp->IoStatus).Status = Status;
  // TRACER
  myStatus = Status;
  IofCompleteRequest(Irp, 0);
  SerialIRPEpilogue(Extension);
  return Status;
}


void SerialGetProperties(PSERIAL_DEVICE_EXTENSION Extension , 
			 PSERIAL_COMMPROP Properties )
{
  memset(Properties, 0, sizeof(SERIAL_COMMPROP ));
  Properties->PacketLength = sizeof(SERIAL_COMMPROP );
  Properties->PacketVersion = 2;
  Properties->ServiceMask = (ULONG )0x00000001;
  Properties->MaxTxQueue = 0;
  Properties->MaxRxQueue = 0;
  Properties->MaxBaud = (ULONG )0x10000000;
  Properties->SettableBaud = Extension->SupportedBauds;
  Properties->ProvSubType = (ULONG )0x00000001;
  Properties->ProvCapabilities = (ULONG )0x0001 | (ULONG )0x0002 | (ULONG)0x0004 | (ULONG )0x0008 | 
                                 (ULONG )0x0010 | (ULONG )0x0020 | (ULONG )0x0040 | (ULONG )0x0080;
  Properties->SettableParams = (ULONG )0x0001 | (ULONG )0x0002 | (ULONG)0x0004 | (ULONG )0x0008 |
                               (ULONG )0x0010 | (ULONG )0x0020 | (ULONG )0x0040;
  Properties->SettableData = (USHORT )0x0001 | (USHORT )0x0002 | (USHORT)0x0004 | (USHORT )0x0008;
  Properties->SettableStopParity = (USHORT )0x0001 | (USHORT )0x0002 |
                                   (USHORT )0x0004 | (USHORT )0x0100 | (USHORT )0x0200 | (USHORT)0x0400 |
                                   (USHORT )0x0800 | (USHORT )0x1000;
  Properties->CurrentTxQueue = 0;
  Properties->CurrentRxQueue = Extension->BufferSize;
  return;
}

NTSTATUS SerialInternalIoControl(PDEVICE_OBJECT PDevObj , PIRP PIrp )
{
  NTSTATUS status ;
  PIO_STACK_LOCATION pIrpStack ;
  PSERIAL_DEVICE_EXTENSION pDevExt;   
  KIRQL OldIrql ;
  NTSTATUS prologueStatus ;
  SYSTEM_POWER_STATE cap ;
  int temp__1;
  NTSTATUS temp__2;

  pDevExt = PDevObj->DeviceExtension;
  prologueStatus = SerialIRPPrologue(PIrp, pDevExt);
  if(prologueStatus != (NTSTATUS)0x00000000L)  
    {
      IofCompleteRequest(PIrp, 0);
      SerialIRPEpilogue(pDevExt);
      return prologueStatus;
    }
  temp__2 = SerialCompleteIfError(PDevObj, PIrp);
  if(temp__2 != (NTSTATUS )0x00000000L)
    return (NTSTATUS )0xC0000120L;
  pIrpStack = ((PIrp->Tail).Overlay).CurrentStackLocation;
  (PIrp->IoStatus).Information = 0L;
  status = (NTSTATUS )0x00000000L;
  switch(temp__1 /*((pIrpStack->Parameters).DeviceIoControl).IoControlCode*/)
    {
    case 1 /*0x0000001b << 16 | 0 << 14 | 1 << 2 | 0*/:
      for(cap = PowerSystemSleeping1; cap < PowerSystemMaximum; cap++)
	{
	  if((pDevExt->DeviceStateMap)[cap] >= PowerDeviceD0 &&
	     (pDevExt->DeviceStateMap)[cap] <= pDevExt->DeviceWake)
	    {
	      break;
	    }
	} // end for loop
      if(cap < PowerSystemMaximum)
	{
	  pDevExt->SendWaitWake = 1;
	  status = (NTSTATUS )0x00000000L;
	}
      else
	  status = (NTSTATUS )0xC00000BBL;
      break;
    case 2 /* 0x0000001b << 16 | 0 << 14 | 2 << 2 | 0 */:
      pDevExt->SendWaitWake = 0;
      if(pDevExt->PendingWakeIrp != (void *  )0)
	IoCancelIrp(pDevExt->PendingWakeIrp);
      status = (NTSTATUS )0x00000000L;
      break;
    case 3 /*0x0000001b << 16 | 0 << 14 | 3 << 2 | 0*/:
    case 4 /*0x0000001b << 16 | 0 << 14 | 4 << 2 | 0*/:
      {
	SERIAL_BASIC_SETTINGS basic ;
	PSERIAL_BASIC_SETTINGS pBasic ;
	SHORT AppropriateDivisor ;
	SERIAL_IOCTL_SYNC S ;

	if(((pIrpStack->Parameters).DeviceIoControl).IoControlCode
	   == (0x0000001b << 16 | 0 << 14 | 3 << 2 | 0))
	  {
	    if(((pIrpStack->Parameters).DeviceIoControl).OutputBufferLength
	       < sizeof(SERIAL_BASIC_SETTINGS ))
	      {
		status = (NTSTATUS )0xC0000023L;
		break;
	      }
	    memset(& basic, 0, sizeof(SERIAL_BASIC_SETTINGS ));
	    basic.TxFifo = 1;
	    basic.RxFifo = (UCHAR )0x00;
	    (PIrp->IoStatus).Information = sizeof(SERIAL_BASIC_SETTINGS );
	    pBasic = (PSERIAL_BASIC_SETTINGS)(PIrp->AssociatedIrp).SystemBuffer;
	    memcpy(& pBasic->Timeouts, & pDevExt->Timeouts, sizeof(SERIAL_TIMEOUTS ));
	    memcpy(& pBasic->HandFlow, & pDevExt->HandFlow, sizeof(SERIAL_HANDFLOW ));
	    pBasic->RxFifo = pDevExt->RxFifoTrigger;
	    pBasic->TxFifo = pDevExt->TxFifoAmount;
	    pBasic = & basic;
	  }
	else
	  {
	    if(((pIrpStack->Parameters).DeviceIoControl).InputBufferLength
	       < sizeof(SERIAL_BASIC_SETTINGS ))
	      {
		status = (NTSTATUS )0xC0000023L;
		break;
	      }
	    pBasic = (PSERIAL_BASIC_SETTINGS)(PIrp->AssociatedIrp).SystemBuffer;
	  }
	* & OldIrql = KfAcquireSpinLock(& pDevExt->ControlLock);
	memcpy(& pDevExt->Timeouts, & pBasic->Timeouts, sizeof(SERIAL_TIMEOUTS ));
	S.Extension = pDevExt;
	S.Data = & pBasic->HandFlow;
	KeSynchronizeExecution(pDevExt->Interrupt,
			       SerialSetHandFlow, & S);
	if(pDevExt->FifoPresent)
	  {
	    pDevExt->TxFifoAmount = pBasic->TxFifo;
	    pDevExt->RxFifoTrigger = (UCHAR )pBasic->RxFifo;
	    WRITE_PORT_UCHAR(pDevExt->Controller +(ULONG )(0x02 * 1), (UCHAR )0);
			     
	    READ_PORT_UCHAR(pDevExt->Controller + (ULONG)(0x00 * 1));
	    WRITE_PORT_UCHAR(pDevExt->Controller + (ULONG )(0x02 * 1),
			     (UCHAR)((UCHAR )0x01 | pDevExt->RxFifoTrigger | 
				     (UCHAR)0x02 | (UCHAR )0x04)); 
	  }
	else
	  {
	    pDevExt->TxFifoAmount = 0;
	    pDevExt->RxFifoTrigger = 0;
	    WRITE_PORT_UCHAR(pDevExt->Controller + (ULONG )(0x02 * 1), (UCHAR )0);
	  }
	KfReleaseSpinLock(& pDevExt->ControlLock, OldIrql);
	break;
      }
    default :
      status = (NTSTATUS )0xC000000DL;
      break;
    }
  (PIrp->IoStatus).Status = status;
  IofCompleteRequest(PIrp, 0);
  SerialIRPEpilogue(pDevExt);
  return status;
}
///////////////////////
// #line 28 "isr.c"
///////////////////////

BOOLEAN SerialCIsrSw(PKINTERRUPT InterruptObject , PVOID Context )
{
  PSERIAL_CISR_SW csw;
  
  csw = (PSERIAL_CISR_SW )Context;
  return (* csw->IsrFunc)(InterruptObject, csw->Context);
}

BOOLEAN SerialSharerIsr(PKINTERRUPT InterruptObject , PVOID Context )
{
  BOOLEAN servicedAnInterrupt;
  BOOLEAN thisPassServiced ;
  PLIST_ENTRY interruptEntry;
  PLIST_ENTRY firstInterruptEntry;

  servicedAnInterrupt = 0;
  interruptEntry = ((PLIST_ENTRY )Context)->Flink;
  firstInterruptEntry = Context;

  if(firstInterruptEntry->Flink == firstInterruptEntry)
      return 0;
  do
    {
      thisPassServiced = 0;
      do
	{
	  PSERIAL_DEVICE_EXTENSION extension;
	  extension  = (SERIAL_DEVICE_EXTENSION *  )((PCHAR)interruptEntry - 
		       (ULONG_PTR )(& ((SERIAL_DEVICE_EXTENSION * )0)->TopLevelSharers));
	  thisPassServiced |= (extension->TopLevelOurIsr)(InterruptObject,extension->TopLevelOurIsrContext);
	  servicedAnInterrupt |= thisPassServiced;
	  interruptEntry = interruptEntry->Flink;
	}
      while(interruptEntry != firstInterruptEntry);
    }
  while(thisPassServiced);
  return servicedAnInterrupt;
}

BOOLEAN SerialIndexedMultiportIsr(PKINTERRUPT InterruptObject , PVOID Context )
{
  BOOLEAN servicedAnInterrupt;
  BOOLEAN thisStatusReadServiced ;
  PSERIAL_MULTIPORT_DISPATCH dispatch;
  ULONG whichPort ;
  UCHAR statusRegister ;

  servicedAnInterrupt = 0;
  thisStatusReadServiced ;
  dispatch = Context;

  do
    {
      thisStatusReadServiced = 0;
      statusRegister = READ_PORT_UCHAR(dispatch->InterruptStatus);
      whichPort = statusRegister & 0x07;
      if(statusRegister != 0xff)
	{
	  if((dispatch->Extensions)[whichPort])
	    {
	      thisStatusReadServiced = SerialISR(InterruptObject, (dispatch->Extensions)[whichPort]);
	      servicedAnInterrupt |= thisStatusReadServiced;
	    }
	}
    }
  while(thisStatusReadServiced);
  return servicedAnInterrupt;
}

BOOLEAN SerialBitMappedMultiportIsr(PKINTERRUPT InterruptObject , PVOID Context)
{
  BOOLEAN servicedAnInterrupt = 0;
  PSERIAL_MULTIPORT_DISPATCH dispatch = Context;
  ULONG whichPort ;
  UCHAR statusRegister ;
  BOOLEAN temp__1;

  servicedAnInterrupt = 0;
  dispatch = Context;
  do
    {
      statusRegister = READ_PORT_UCHAR(dispatch->InterruptStatus);
      if(dispatch->MaskInverted)
	statusRegister = /*~*/ statusRegister;
      statusRegister &= dispatch->UsablePortMask;
      if(statusRegister)
	{
	  if(statusRegister & 0x0f)
	    {
	      if(statusRegister & 0x03)
		{
		  if(statusRegister & 1)
		      whichPort = 0;
		  else
		      whichPort = 1;
		}
	      else
		{
		  if(statusRegister & 0x04)
		      whichPort = 2;
		  else
		      whichPort = 3;
		}
	    }
	  else
	    {
	      if(statusRegister & 0x30)
		{
		  if(statusRegister & 0x10)
		      whichPort = 4;
		  else
		      whichPort = 5;
		}
	      else
		{
		  if(statusRegister & 0x40)
		    whichPort = 6;
		  else
		    whichPort = 7;
		}
	    }
	  if((dispatch->Extensions)[whichPort])
	    {
	     
	      temp__1 = SerialISR(InterruptObject, (dispatch->Extensions)[whichPort]);
	      if(temp__1)
		servicedAnInterrupt = 1;
	    }
	}
    }
  while(statusRegister);

  return servicedAnInterrupt;
}

BOOLEAN SerialISR(PKINTERRUPT InterruptObject , PVOID Context )
{
  PSERIAL_DEVICE_EXTENSION Extension;
  UCHAR InterruptIdReg ;
  BOOLEAN ServicedAnInterrupt ;
  UCHAR tempLSR ;
  int temp__1;
  UCHAR temp__2;
  ULONG temp__3;
  UCHAR ReceivedChar ;
  ULONG amountToWrite ;
  PIO_STACK_LOCATION IrpSp ;
  LONG pendingCnt ;

  Extension = Context;
  
  //  InterruptObject;
  InterruptIdReg = READ_PORT_UCHAR(Extension->Controller + (ULONG )(0x02 * 1));
  InterlockedIncrement(& Extension->DpcCount);
  if(InterruptIdReg & 0x01)
    ServicedAnInterrupt = 0;
  else
    {
      if(! Extension->DeviceIsOpened || Extension->PowerState !=
	 PowerDeviceD0)
	{
	  ServicedAnInterrupt = 1;
	  do
	    {
	      InterruptIdReg &= /*~*/ 0xc0;
	      switch(InterruptIdReg)
		{
		case 0x06:
		  {
		    READ_PORT_UCHAR(Extension->Controller + (ULONG )(0x05 * 1));
		    break;
		  }
		case 0x04:
		case 0x0c:
		  {
		    READ_PORT_UCHAR(Extension->Controller+ (ULONG )(0x00 * 1));
		    break;
		  }
		case 0x02:
		  {
		    Extension->HoldingEmpty = 1;
		    break;
		  }
		case 0x00:
		  {
		    READ_PORT_UCHAR(Extension->Controller + (ULONG )(0x06 * 1));
		    break;
		  }
		default :
		  break;
		}
	      InterruptIdReg = READ_PORT_UCHAR(Extension->Controller + (ULONG)(0x02 * 1));
	    }
	  while(! (InterruptIdReg & 0x01));
	}
      else
	{
	  ServicedAnInterrupt = 1;
	  do
	    {
	      InterruptIdReg &= 0x06 | 0x04 | 0x0c | 0x02 | 0x00;
	      switch(InterruptIdReg)
		{
		case 0x06:
		  {
		    SerialProcessLSR(Extension);
		    break;
		  }
		case 0x04:
		case 0x0c:
		  {
		    while(1);
		    {
		      ReceivedChar = READ_PORT_UCHAR(Extension->Controller + (ULONG )(0x00));
		      (Extension->PerfStats).ReceivedCount ++;
		      (Extension->WmiPerfData).ReceivedCount++;
		      ReceivedChar &= Extension->ValidDataMask;
		      
		      if(! ReceivedChar && (Extension->HandFlow).FlowReplace &(ULONG )0x08)
			goto ReceiveDoLineStatus;
		      
		      if((Extension->HandFlow) .FlowReplace & (ULONG )0x01 && 
			 (ReceivedChar == (Extension->SpecialChars).XonChar || 
			  ReceivedChar == (Extension->SpecialChars).XoffChar))
			{
			  if(ReceivedChar == (Extension->SpecialChars).XoffChar)
			    {
			      Extension->TXHolding |= (ULONG )0x08;
			      if(((Extension->HandFlow).FlowReplace & (ULONG )0xc0) == (ULONG)0xc0)
				{
				  SerialInsertQueueDpc(& Extension->StartTimerLowerRTSDpc,
						       (void *  )0, (void *  )0, Extension);
				  //? Extension->CountOfTryingToLowerRTS++ : 0;
				}
			    }
			  else
			    {
			      if(Extension->TXHolding & (ULONG )0x08)
				Extension->TXHolding &= /*~*/ (ULONG )0x08;
			    }
			  goto ReceiveDoLineStatus;
			}
		      
		      if(Extension->IsrWaitMask)
			{
			  if(Extension->IsrWaitMask & 0x0001)
			    Extension->HistoryMask |= 0x0001;
			  if(Extension->IsrWaitMask & 0x0002 &&
			     (Extension->SpecialChars).EventChar == ReceivedChar)
			    Extension->HistoryMask |= 0x0002;
			  if(Extension->IrpMaskLocation && Extension->HistoryMask)
			    {
			      * Extension->IrpMaskLocation = Extension->HistoryMask;
			      Extension->IrpMaskLocation = (void *  )0;
			      Extension->HistoryMask = 0;
			      ((Extension->CurrentWaitIrp)->IoStatus).Information = sizeof(ULONG );
			      SerialInsertQueueDpc(& Extension->CommWaitDpc, (void *  )0,
						   (void *  )0, Extension);
			    }
			}
		      
		      
		      SerialPutChar(Extension, ReceivedChar);			    
		      if(Extension->EscapeChar && Extension->EscapeChar == ReceivedChar)
			SerialPutChar(Extension, (UCHAR )0x00);
		    ReceiveDoLineStatus: ;
		      tempLSR =SerialProcessLSR(Extension);			  
		      if(! (tempLSR & 0x01))
			break;
		      if(tempLSR & /*~*/ (0x20 | 0x40 | 0x01) && Extension->EscapeChar)
			break; 			      
		    } // end of while(1)
		    break;
		  }
		case 0x02:
		  {
		  doTrasmitStuff:
		    Extension->HoldingEmpty = 1;
		    if(Extension->WriteLength || Extension->TransmitImmediate || 
		       Extension->SendXoffChar || Extension->SendXonChar)
		      {
			Extension->EmptiedTransmit = 1;
			if((Extension->HandFlow).ControlHandShake & (ULONG )0x38)
			  SerialHandleModemUpdate(Extension, 1);
			if(Extension->SendXonChar && ! (Extension->TXHolding & /*~*/ (ULONG)0x08))
			  {
			    if(((Extension->HandFlow).FlowReplace & (ULONG )0xc0) == (ULONG )0xc0)
			      {
				SerialSetRTS(Extension);
				(Extension->PerfStats).TransmittedCount++;
				(Extension->WmiPerfData).TransmittedCount++;
				WRITE_PORT_UCHAR(Extension->Controller + (ULONG )0x00 ,
						 (Extension->SpecialChars).XonChar);
				SerialInsertQueueDpc(& Extension->StartTimerLowerRTSDpc,
						     (void *  )0, (void *  )0, Extension);
				// ? Extension->CountOfTryingToLowerRTS++ : 0;
			      }
			    else
			      {
				(Extension->PerfStats).TransmittedCount++;
				(Extension->WmiPerfData).TransmittedCount++;
				WRITE_PORT_UCHAR(Extension->Controller + (ULONG )0x00, 
						 (Extension->SpecialChars).XonChar);
			      }
			    Extension->SendXonChar = 0;
			    Extension->HoldingEmpty = 0;
			    Extension->TXHolding &= /*~*/ (ULONG )0x08;
			    Extension->RXHolding &= /*~*/ (ULONG )0x02;
			  }
			else
			  {
			    if(Extension->SendXoffChar && ! Extension->TXHolding)
			      {
				if(((Extension->HandFlow).FlowReplace & (ULONG )0xc0) == (ULONG)0xc0)
				  {
				    SerialSetRTS(Extension);
				    (Extension->PerfStats).TransmittedCount++;
				    (Extension->WmiPerfData).TransmittedCount++;
				    WRITE_PORT_UCHAR(Extension->Controller + (ULONG)(0x00 * 1),
						     (Extension->SpecialChars).XoffChar);
				    SerialInsertQueueDpc(& Extension->StartTimerLowerRTSDpc,
							 (void *  )0, (void *  )0, Extension);
				    // ? Extension->CountOfTryingToLowerRTS++ : 0;
				  }
				else
				  {
				    (Extension->PerfStats).TransmittedCount++;
				    (Extension->WmiPerfData).TransmittedCount++;
				    WRITE_PORT_UCHAR(Extension->Controller + (ULONG)(0x00 * 1),
						     (Extension->SpecialChars).XoffChar);
				  }
				if(! ((Extension->HandFlow).FlowReplace & (ULONG )0x80000000))
				  {
				    Extension->TXHolding |= (ULONG )0x08;
				    if(((Extension->HandFlow).FlowReplace & (ULONG)0xc0)==(ULONG)0xc0)
				      {
					SerialInsertQueueDpc(&
							     Extension->StartTimerLowerRTSDpc,
							     (void *  )0, (void *  )0, Extension);
					// ? Extension->CountOfTryingToLowerRTS++ : 0;
				      }
				  }
				Extension->SendXoffChar = 0;
				Extension->HoldingEmpty = 0;
			      }
			    else
			      {
				if(Extension->TransmitImmediate && 
				   (! Extension->TXHolding || Extension->TXHolding ==  (ULONG )0x08))
				  {
				    Extension->TransmitImmediate = 0;
				    if(((Extension->HandFlow).FlowReplace & (ULONG )0xc0) == (ULONG )0xc0)
				      {
					SerialSetRTS(Extension);
					(Extension->PerfStats).TransmittedCount++;
					(Extension->WmiPerfData).TransmittedCount++;
					WRITE_PORT_UCHAR(Extension->Controller +
							 (ULONG )(0x00 * 1),
							 Extension->ImmediateChar);
					SerialInsertQueueDpc(& Extension->StartTimerLowerRTSDpc,
							     (void *  )0, (void *  )0, Extension);
					// ? Extension->CountOfTryingToLowerRTS++ : 0;
				      }
				    else
				      {
					(Extension->PerfStats).TransmittedCount++;
					(Extension->WmiPerfData).TransmittedCount++;
					WRITE_PORT_UCHAR(Extension->Controller +
							 (ULONG )(0x00 * 1),
							 Extension->ImmediateChar);
				      }
				    Extension->HoldingEmpty = 0;
				    SerialInsertQueueDpc(& Extension->CompleteImmediateDpc,
							 (void *  )0, (void *  )0, Extension);
				  }
				else
				  {
				    if(! Extension->TXHolding)
				      {
					if(Extension->FifoPresent)
					  {
					    if (Extension->TxFifoAmount< Extension->WriteLength)
					      amountToWrite = Extension->TxFifoAmount;
					    else
					      amountToWrite = Extension->WriteLength;;
					  }
					else
					  amountToWrite = 1;
					
					if(((Extension->HandFlow).FlowReplace & (ULONG)0xc0) ==(ULONG )0xc0)
					  {
					    SerialSetRTS(Extension);
					    if(amountToWrite == 1)
					      {
						(Extension->PerfStats).TransmittedCount++;
						(Extension->WmiPerfData).TransmittedCount++;
						WRITE_PORT_UCHAR(Extension->Controller +
								 (ULONG )(0x00),
								 * Extension->WriteCurrentChar);
					      }
					    else
					      {
						(Extension->PerfStats).TransmittedCount+= amountToWrite; 
						(Extension->WmiPerfData).TransmittedCount+= amountToWrite;
						WRITE_PORT_BUFFER_UCHAR(Extension->Controller+ 
									(ULONG )(0x00),
									Extension->WriteCurrentChar,
									amountToWrite);
					      }
					    SerialInsertQueueDpc(&
								 Extension->StartTimerLowerRTSDpc,
								 (void *  )0, (void *  )0,
								 Extension);
					    // ? Extension->CountOfTryingToLowerRTS++: 0;
					  }
					else
					  {
					    if(amountToWrite == 1)
					      {
						(Extension->PerfStats).TransmittedCount++;
						(Extension->WmiPerfData).TransmittedCount++;
						WRITE_PORT_UCHAR(Extension ->Controller +
								 (ULONG )(0x00),
								 * Extension->WriteCurrentChar);
					      }
					    else
					      {
						(Extension->PerfStats).TransmittedCount+= amountToWrite;
						(Extension->WmiPerfData).TransmittedCount+= amountToWrite;
						WRITE_PORT_BUFFER_UCHAR(Extension->Controller+ 
									(ULONG )(0x00),
									Extension->WriteCurrentChar,
									amountToWrite);
					      }
					  }
					Extension->HoldingEmpty = 0;
					Extension->WriteCurrentChar += amountToWrite;
					Extension->WriteLength -= amountToWrite;
					if(! Extension->WriteLength)
					  {
			      IrpSp =(((Extension->CurrentWriteIrp)->Tail).Overlay).CurrentStackLocation;
			      if(IrpSp->MajorFunction == 0x04)
				((Extension->CurrentWriteIrp)->IoStatus).Information =
				  ((IrpSp->Parameters).Write).Length;
			      else
				((Extension->CurrentWriteIrp)->IoStatus).Information =1;
			      SerialInsertQueueDpc(&
						   Extension->CompleteWriteDpc,
						   (void *  )0, (void *  )0,
						   Extension);
					  }
				      }
				  }
			      }
			  }
		      }
		    break;
		  }
		case 0x00:
		  {
		    SerialHandleModemUpdate(Extension, 0); 
		    break;
		  }
		}
	    }
	  while(temp__1/* ! ((InterruptIdReg = */
/* 		    READ_PORT_UCHAR(Extension->Controller + (ULONG)(0x02 * 1))) & 0x01) */);
			
	  temp__2 = SerialProcessLSR(Extension);					   
	  if(temp__2 & 0x20)
	    {
	      if(! Extension->TXHolding &&
		 (Extension->WriteLength ||
		  Extension->TransmitImmediate))
		{
		  goto doTrasmitStuff;
		}
	    }
	}
    }
  {
  retryDPCFiring:
    InterlockedIncrement(& Extension->DpcCount);
    pendingCnt = InterlockedDecrement(& Extension->DpcCount);
    if(pendingCnt == 1)
      {
	KeInsertQueueDpc(& Extension->IsrUnlockPagesDpc,
			 (void *  )0, (void *  )0);
      }
    else
      {
	if(temp__3 == 0)
	  {
	    InterlockedIncrement(& Extension->DpcCount);
	    goto retryDPCFiring;
	  }
      }
  }
  return ServicedAnInterrupt;
}

void SerialPutChar(PSERIAL_DEVICE_EXTENSION Extension , UCHAR CharToPut )
{
  if((Extension->HandFlow).ControlHandShake & (ULONG )0x40)
    {
      SerialHandleModemUpdate(Extension, 0);
      if(Extension->RXHolding & (ULONG )0x08)
	return;
    }
  if(Extension->CountSinceXoff)
    {
      Extension->CountSinceXoff--;
      if(! Extension->CountSinceXoff)
	{
	  ((Extension->CurrentXoffIrp)->IoStatus).Status =(NTSTATUS )0x00000000L;
	  ((Extension->CurrentXoffIrp)->IoStatus).Information = 0;
	  SerialInsertQueueDpc(& Extension->XoffCountCompleteDpc,
			       (void *  )0, (void *  )0, Extension);
	}
    }
  if(Extension->ReadBufferBase != Extension->InterruptReadBuffer)
    {
      Extension->ReadByIsr++;
      * Extension->CurrentCharSlot = CharToPut;
      if(Extension->CurrentCharSlot == Extension->LastCharSlot)
	{
	  Extension->ReadBufferBase =
	    Extension->InterruptReadBuffer;
	  Extension->CurrentCharSlot =
	    Extension->InterruptReadBuffer;
	  Extension->FirstReadableChar =
	    Extension->InterruptReadBuffer;
	  Extension->LastCharSlot = Extension->InterruptReadBuffer
	    + (Extension->BufferSize - 1);
	  Extension->CharsInInterruptBuffer = 0;
	  ((Extension->CurrentReadIrp)->IoStatus).Information =
	    ((((((Extension->CurrentReadIrp)->Tail).Overlay)
	       .CurrentStackLocation)->Parameters).Read).Length
	    ;
	  SerialInsertQueueDpc(& Extension->CompleteReadDpc,
			       (void *  )0, (void *  )0, Extension);
	}
      else
	  Extension->CurrentCharSlot++;
    }
  else
    {
      if(((Extension->HandFlow).ControlHandShake & (ULONG )0x03) ==(ULONG )0x02)
	{
	  if(! (Extension->RXHolding & (ULONG )0x01))
	    {
	      if(Extension->BufferSize -
		 (Extension->HandFlow).XoffLimit <=
		 Extension->CharsInInterruptBuffer + 1)
		{
		  Extension->RXHolding |= (ULONG )0x01;
		  SerialClrDTR(Extension);
		}
	    }
	}
      if(((Extension->HandFlow).FlowReplace & (ULONG )0xc0) == (ULONG)0x80)
	{
	  if(! (Extension->RXHolding & (ULONG )0x04))
	    {
	      if(Extension->BufferSize -
		 (Extension->HandFlow).XoffLimit <=
		 Extension->CharsInInterruptBuffer + 1)
		{
		  Extension->RXHolding |= (ULONG )0x04;
		  SerialClrRTS(Extension);
		}
	    }
	}
      if((Extension->HandFlow).FlowReplace & (ULONG )0x02)
	{
	  if(! (Extension->RXHolding & (ULONG )0x02))
	    {
	      if(Extension->BufferSize -
		 (Extension->HandFlow).XoffLimit <=
		 Extension->CharsInInterruptBuffer + 1)
		{
		  Extension->RXHolding |= (ULONG )0x02;
		  SerialProdXonXoff(Extension, 0);
		}
	    }
	}
      if(Extension->CharsInInterruptBuffer < Extension->BufferSize)
	{
	  * Extension->CurrentCharSlot = CharToPut;
	  Extension->CharsInInterruptBuffer++;
	  if(Extension->CharsInInterruptBuffer ==
	     Extension->BufferSizePt8)
	    {
	      if(Extension->IsrWaitMask & 0x0400)
		{
		  Extension->HistoryMask |= 0x0400;
		  if(Extension->IrpMaskLocation)
		    {
		      * Extension->IrpMaskLocation =Extension->HistoryMask;
		      Extension->IrpMaskLocation = (void *  )0;
		      Extension->HistoryMask = 0;
		      ((Extension->CurrentWaitIrp)->IoStatus).Information = sizeof(ULONG );
		      SerialInsertQueueDpc(& Extension->CommWaitDpc,
					   (void *  )0, (void *)0, Extension);  
		    }
		}
	    }
	  if(Extension->CurrentCharSlot == Extension->LastCharSlot)
	    Extension->CurrentCharSlot = Extension->InterruptReadBuffer;
	  else
	    Extension->CurrentCharSlot++;
	}
      else
	{
	  (Extension->PerfStats).BufferOverrunErrorCount++;
	  (Extension->WmiPerfData).BufferOverrunErrorCount++;
	  Extension->ErrorWord |= (ULONG )0x00000008;
	  if((Extension->HandFlow).FlowReplace & (ULONG )0x04)
	    {
	      if(Extension->CurrentCharSlot ==
		 Extension->InterruptReadBuffer)
		{
		  * (Extension->InterruptReadBuffer + (Extension->BufferSize - 1)) =
		    (Extension->SpecialChars).ErrorChar ;
		}
	      else
		{
		  * (Extension->CurrentCharSlot - 1) =
		    (Extension->SpecialChars).ErrorChar ;
		}
	    }
	  if((Extension->HandFlow).ControlHandShake & (ULONG)0x80000000)
	      SerialInsertQueueDpc(& Extension->CommErrorDpc,
				   (void *  )0, (void *  )0, Extension);
	}
    }
}

UCHAR SerialProcessLSR(PSERIAL_DEVICE_EXTENSION Extension )
{
  UCHAR LineStatus;
  
  LineStatus = READ_PORT_UCHAR(Extension->Controller + (ULONG )(0x05* 1));
  Extension->HoldingEmpty = ! ! (LineStatus & 0x20);
  if(LineStatus & /*~*/ (0x20 | 0x40 | 0x01))
    {
      if(Extension->EscapeChar)
	{
	  SerialPutChar(Extension, Extension->EscapeChar);
	  SerialPutChar(Extension, /*(UCHAR )(LineStatus & 0x01
				     ? */ (UCHAR )0x01 /*: (UCHAR )0x02)*/);
	  SerialPutChar(Extension, LineStatus);
	  if(LineStatus & 0x01)
	    {
	      (Extension->PerfStats).ReceivedCount++;
	      (Extension->WmiPerfData).ReceivedCount++;
	      SerialPutChar(Extension,
			    READ_PORT_UCHAR(Extension->Controller + (ULONG )(0x00 * 1)));
	    }
	}
      if(LineStatus & 0x02)
	{
	  (Extension->PerfStats).SerialOverrunErrorCount++;
	  (Extension->WmiPerfData).SerialOverrunErrorCount++;
	  Extension->ErrorWord |= (ULONG )0x00000004;
	  if((Extension->HandFlow).FlowReplace & (ULONG )0x04)
	    {
	      SerialPutChar(Extension,
			    (Extension->SpecialChars).ErrorChar);
	      if(LineStatus & 0x01)
		{
		  (Extension->PerfStats).ReceivedCount++;
		  (Extension->WmiPerfData).ReceivedCount++;
		  READ_PORT_UCHAR(Extension->Controller + (ULONG )(0x00 * 1));
		}
	    }
	  else
	    {
	      if(LineStatus & 0x01)
		{
		  (Extension->PerfStats).ReceivedCount++;
		  (Extension->WmiPerfData).ReceivedCount++;
		  SerialPutChar(Extension,
				READ_PORT_UCHAR(Extension->Controller+ (ULONG )(0x00 * 1)));
		}
	    }
	}
      if(LineStatus & 0x10)
	{
	  Extension->ErrorWord |= (ULONG )0x00000001;
	  if((Extension->HandFlow).FlowReplace & (ULONG )0x10)
	    {
	      SerialPutChar(Extension,
			    (Extension->SpecialChars).BreakChar);
	    }
	}
      else
	{
	  if(LineStatus & 0x04)
	    {
	      (Extension->PerfStats).ParityErrorCount++;
	      (Extension->WmiPerfData).ParityErrorCount++;
	      Extension->ErrorWord |= (ULONG )0x00000010;
	      if((Extension->HandFlow).FlowReplace & (ULONG)0x04)
		{
		  SerialPutChar(Extension,
				(Extension->SpecialChars).ErrorChar);
		  if(LineStatus & 0x01)
		    {
		      (Extension->PerfStats).ReceivedCount++;
		      (Extension->WmiPerfData).ReceivedCount++;
		      READ_PORT_UCHAR(Extension->Controller + (ULONG )(0x00 * 1));
		    }
		}
	    }
	  if(LineStatus & 0x08)
	    {
	      (Extension->PerfStats).FrameErrorCount++;
	      (Extension->WmiPerfData).FrameErrorCount++;
	      Extension->ErrorWord |= (ULONG )0x00000002;
	      if((Extension->HandFlow).FlowReplace & (ULONG)0x04)
		{
		  SerialPutChar(Extension,
				(Extension->SpecialChars).ErrorChar);
		  if(LineStatus & 0x01)
		    {
		      (Extension->PerfStats).ReceivedCount++;
		      (Extension->WmiPerfData).ReceivedCount++;
		      READ_PORT_UCHAR(Extension->Controller+ (ULONG )(0x00 * 1));
		    }
		}
	    }
	}
      if((Extension->HandFlow).ControlHandShake & (ULONG )0x80000000)
	{
	  SerialInsertQueueDpc(& Extension->CommErrorDpc, (void *  )0,
			       (void *  )0, Extension);
	}
      if(Extension->IsrWaitMask)
	{
	  if(Extension->IsrWaitMask & 0x0080 && LineStatus & (0x02
							      | 0x04 | 0x08))
	      Extension->HistoryMask |= 0x0080;
	  if(Extension->IsrWaitMask & 0x0040 && LineStatus & 0x10)
	    Extension->HistoryMask |= 0x0040;
	  if(Extension->IrpMaskLocation && Extension->HistoryMask)
	    {
	      * Extension->IrpMaskLocation = Extension->HistoryMask;
	      Extension->IrpMaskLocation = (void *  )0;
	      Extension->HistoryMask = 0;
	      ((Extension->CurrentWaitIrp)->IoStatus).Information = sizeof(ULONG );
	      SerialInsertQueueDpc(& Extension->CommWaitDpc,
				   (void *  )0, (void *  )0, Extension);
	    }
	}
      if(LineStatus & 0x20)
	{
	  // #line 1843
	  if(Extension->WriteLength |
	     Extension->TransmitImmediate)
	    {
	      WRITE_PORT_UCHAR(Extension->Controller + (ULONG )(0x01 * 1),
			       0);
	      
	      WRITE_PORT_UCHAR(Extension->Controller + (ULONG )(0x01 * 1),
			       (UCHAR )(0x01 | 0x02 |  0x04 | 0x08));
	    }
	}
    }
  return LineStatus;
}
// From here!!

// #line 32 "modmflow.c"
BOOLEAN SerialDecrementRTSCounter(PVOID Context ) ;

BOOLEAN SerialSetDTR(PVOID Context )
{
  PSERIAL_DEVICE_EXTENSION Extension = Context;
  UCHAR ModemControl ;
  ModemControl = READ_PORT_UCHAR(Extension->Controller + (ULONG )(0x04 *1));
  ModemControl |= 0x01;
  WRITE_PORT_UCHAR(Extension->Controller + (ULONG )(0x04 * 1),ModemControl);
  return 0;
}

BOOLEAN SerialClrDTR(PVOID Context )
{
  PSERIAL_DEVICE_EXTENSION Extension;
  UCHAR ModemControl;

  Extension = Context;
  ModemControl = READ_PORT_UCHAR(Extension->Controller + (ULONG )(0x04 * 1));
  ModemControl &= /*~*/ 0x01;
  WRITE_PORT_UCHAR(Extension->Controller + (ULONG )(0x04 * 1), ModemControl);
  return 0;
}

BOOLEAN SerialSetRTS(PVOID Context )
{
  PSERIAL_DEVICE_EXTENSION Extension = Context;
  UCHAR ModemControl ;
  ModemControl = READ_PORT_UCHAR(Extension->Controller + (ULONG )(0x04 *1));
  ModemControl |= 0x02;
  WRITE_PORT_UCHAR(Extension->Controller + (ULONG )(0x04 * 1),ModemControl);
  return 0;
}

BOOLEAN SerialClrRTS(PVOID Context )
{
  PSERIAL_DEVICE_EXTENSION Extension;
  UCHAR ModemControl ;

  Extension = Context;
  ModemControl = READ_PORT_UCHAR(Extension->Controller + (ULONG )(0x04 * 1));
  ModemControl &= /*~*/ 0x02;
  WRITE_PORT_UCHAR(Extension->Controller + (ULONG )(0x04 * 1),
		   ModemControl);
  return 0;
}

// #line 239
BOOLEAN SerialSetupNewHandFlow(PSERIAL_DEVICE_EXTENSION Extension ,
			       PSERIAL_HANDFLOW NewHandFlow )
{
  UCHAR temp__1;
  SERIAL_HANDFLOW New;

  New = * NewHandFlow;
  if(! Extension->DeviceIsOpened ||
     ((Extension->HandFlow).ControlHandShake & (ULONG )0x03) !=
     (New.ControlHandShake & (ULONG )0x03))
    {
      if(New.ControlHandShake & (ULONG )0x03)
	{
	  if((New.ControlHandShake & (ULONG )0x03) == (ULONG)0x02)
	    {
	      if(Extension->BufferSize - New.XoffLimit >
		 Extension->CharsInInterruptBuffer)
		{
		  if(Extension->RXHolding & (ULONG )0x01)
		    {
		      if(Extension->CharsInInterruptBuffer > (ULONG )New.XonLimit)
			{
			  Extension->RXHolding &= /*~*/ (ULONG )0x01;
			  SerialSetDTR(Extension);
			}
		    }
		  else
		    SerialSetDTR(Extension);
		}
	      else
		{
		  Extension->RXHolding |= (ULONG )0x01;
		  SerialClrDTR(Extension);
		}
	    }
	  else
	    {
	      if(Extension->RXHolding & (ULONG )0x01)
		{
		  Extension->RXHolding &= /*~*/ (ULONG )0x01;
		}
	      SerialSetDTR(Extension);
	    }
	}
      else
	{
	  if(Extension->RXHolding & (ULONG )0x01)
	    Extension->RXHolding &= /*~*/ (ULONG )0x01;
	  SerialClrDTR(Extension);
	}
    }
  if(! Extension->DeviceIsOpened || ((Extension->HandFlow).FlowReplace &
				     (ULONG )0xc0) != (New.FlowReplace & (ULONG )0xc0))
    {
      if((New.FlowReplace & (ULONG )0xc0) == (ULONG )0x80)
	{
	  if(Extension->BufferSize - New.XoffLimit >
	     Extension->CharsInInterruptBuffer)
	    {
	      if(Extension->RXHolding & (ULONG )0x04)
		{
		  if(Extension->CharsInInterruptBuffer >
		     (ULONG )New.XonLimit)
		    {
		      Extension->RXHolding &= /*~*/ (ULONG)0x04;
		      SerialSetRTS(Extension);
		    }
		}
	      else
		SerialSetRTS(Extension);
	    }
	  else
	    {
	      Extension->RXHolding |= (ULONG )0x04;
	      SerialClrRTS(Extension);
	    }
	}
      else
	{
	  if((New.FlowReplace & (ULONG )0xc0) == (ULONG )0x40)
	    {
	      if(Extension->RXHolding & (ULONG )0x04)
		Extension->RXHolding &= /*~*/ (ULONG )0x04;
	      SerialSetRTS(Extension);
	    }
	  else
	    {
	      if((New.FlowReplace & (ULONG )0xc0) == (ULONG)0xc0)
		{
		  if(Extension->RXHolding & (ULONG )0x04)
		    {
		      Extension->RXHolding &= /*~*/ (ULONG)0x04;
		    }
		  (Extension->HandFlow).FlowReplace &= /*~*/ (ULONG )0xc0;
		  (Extension->HandFlow).FlowReplace |= (ULONG )0xc0;

		  temp__1 = SerialProcessLSR(Extension);
		  if(Extension->TXHolding & (ULONG )0x10
		     || (temp__1 & (0x20 | 0x40)) != (0x20 | 0x40) ||
		     (Extension->CurrentWriteIrp || Extension->TransmitImmediate ||
		      ! ((&Extension->WriteQueue)->Flink == & Extension->WriteQueue) && 
		      ! Extension->TXHolding))
		    SerialSetRTS(Extension);
		  else
		    {
		      Extension->CountOfTryingToLowerRTS++;
		      SerialPerhapsLowerRTS(Extension);
		    }
		}
	      else
		{
		  if(Extension->RXHolding & (ULONG )0x04)
		      Extension->RXHolding &= /*~*/ (ULONG)0x04;
		  SerialClrRTS(Extension);
		}
	    }
	}
    }
  if(! Extension->DeviceIsOpened || ((Extension->HandFlow).FlowReplace &
				     (ULONG )0x02) != (New.FlowReplace & (ULONG )0x02))
    {
      if(New.FlowReplace & (ULONG )0x02)
	{
	  if(Extension->BufferSize - New.XoffLimit <=
	     Extension->CharsInInterruptBuffer)
	    {
	      Extension->RXHolding |= (ULONG )0x02;
	      SerialProdXonXoff(Extension, 0);
	    }
	}
      else
	{
	  if(Extension->RXHolding & (ULONG )0x02)
	    {
	      Extension->RXHolding &= /*~*/ (ULONG )0x02;
	      SerialProdXonXoff(Extension, 1);
	    }
	}
    }
  if(! Extension->DeviceIsOpened || ((Extension->HandFlow).FlowReplace &
				     (ULONG )0x01) != (New.FlowReplace & (ULONG )0x01))
    {
      if(New.FlowReplace & (ULONG )0x01)
	{
	}
      else
	{
	  if(Extension->TXHolding & (ULONG )0x08)
	    {
	      Extension->TXHolding &= /*~*/ (ULONG )0x08;
	      SerialProdXonXoff(Extension, 1);
	    }
	}
    }
  Extension->HandFlow = New;
  return 0;
}

BOOLEAN SerialSetHandFlow(PVOID Context )
{
  PSERIAL_IOCTL_SYNC S;
  PSERIAL_DEVICE_EXTENSION Extension;
  PSERIAL_HANDFLOW HandFlow;
  
  S = Context;
  Extension = S->Extension;
  HandFlow = S->Data;

  SerialSetupNewHandFlow(Extension, HandFlow);
  SerialHandleModemUpdate(Extension, 0);
  return 0;
}

BOOLEAN SerialTurnOnBreak(PVOID Context )
{
  PSERIAL_DEVICE_EXTENSION Extension = Context;
  UCHAR OldLineControl ;
  if(((Extension->HandFlow).FlowReplace & (ULONG )0xc0) == (ULONG )0xc0)
    {
      SerialSetRTS(Extension);
    }
  OldLineControl = READ_PORT_UCHAR(Extension->Controller + (ULONG )(0x03 *1));
  OldLineControl |= 0x40;
  WRITE_PORT_UCHAR(Extension->Controller + (ULONG )(0x03 * 1), OldLineControl);
  Extension->TXHolding |= (ULONG )0x10;
  return 0;
}

BOOLEAN SerialTurnOffBreak(PVOID Context )
{
  PSERIAL_DEVICE_EXTENSION Extension = Context;
  UCHAR OldLineControl ;
  if(Extension->TXHolding & (ULONG )0x10)
    {
      OldLineControl = READ_PORT_UCHAR(Extension->Controller + (ULONG)(0x03 * 1));
      OldLineControl &= /*~*/ 0x40;
      WRITE_PORT_UCHAR(Extension->Controller + (ULONG )(0x03 * 1), OldLineControl);      
      Extension->TXHolding &= /*~*/ (ULONG )0x10;
      if(! Extension->TXHolding && (Extension->TransmitImmediate ||
				    Extension->WriteLength) && Extension->HoldingEmpty)
	{
	  WRITE_PORT_UCHAR(Extension->Controller + (ULONG )(0x01 * 1), 0);
	  WRITE_PORT_UCHAR(Extension->Controller + (ULONG )(0x01 * 1), 
			   (UCHAR)(0x01 | 0x02 | 0x04 | 0x08));
	}
      else
	{
	  Extension->CountOfTryingToLowerRTS++;
	  SerialPerhapsLowerRTS(Extension);
	}
    }
  return 0;
}

BOOLEAN SerialPretendXoff(PVOID Context )
{
  BOOLEAN temp__1;
  PSERIAL_DEVICE_EXTENSION Extension;
  
  Extension = Context;
  Extension->TXHolding |= (ULONG )0x08;
  if(((Extension->HandFlow).FlowReplace & (ULONG )0xc0) == (ULONG )0xc0)
    {
      
      temp__1 = SerialInsertQueueDpc(& Extension->StartTimerLowerRTSDpc,
				     (void *  )0, (void *  )0, Extension) ;
      if(temp__1)
	Extension->CountOfTryingToLowerRTS++ ;
    }
  return 0;
}

BOOLEAN SerialPretendXon(PVOID Context )
{

  PSERIAL_DEVICE_EXTENSION Extension;
  
  Extension = Context;
  if(Extension->TXHolding)
    {
      Extension->TXHolding &= /*~*/ (ULONG )0x08;
      if(! Extension->TXHolding && (Extension->TransmitImmediate ||
				    Extension->WriteLength) && Extension->HoldingEmpty)
	{
	  WRITE_PORT_UCHAR(Extension->Controller + (ULONG )(0x01 * 1), 0);
	  WRITE_PORT_UCHAR(Extension->Controller + (ULONG )(0x01 * 1),
			   (UCHAR )(0x01 | 0x02 | 0x04 | 0x08));
			    
	}
    }
  return 0;
}

void SerialHandleReducedIntBuffer(PSERIAL_DEVICE_EXTENSION Extension )
{
  if(Extension->RXHolding)
    {
      if(Extension->CharsInInterruptBuffer <= (ULONG
					       )(Extension->HandFlow).XonLimit)
	{
	  if(Extension->RXHolding & (ULONG )0x01)
	    {
				Extension->RXHolding &= /*~*/ (ULONG )0x01;
				SerialSetDTR(Extension);
	    }
	  if(Extension->RXHolding & (ULONG )0x04)
	    {
	      Extension->RXHolding &= /*~*/ (ULONG )0x04;
	      SerialSetRTS(Extension);
	    }
	  if(Extension->RXHolding & (ULONG )0x02)
	      SerialProdXonXoff(Extension, 1);
	}
    }
  return;
}

void SerialProdXonXoff(PSERIAL_DEVICE_EXTENSION Extension , BOOLEAN SendXon )
{
  if(! Extension->SendXonChar && ! Extension->SendXoffChar &&
     Extension->HoldingEmpty)
    {
      WRITE_PORT_UCHAR(Extension->Controller + (ULONG)(0x01 * 1), 0);
      WRITE_PORT_UCHAR(Extension->Controller + (ULONG)(0x01 * 1), (UCHAR )(0x01 | 0x02 | 0x04| 0x08));
    }
  if(SendXon)
    {
      Extension->SendXonChar = 1;
      Extension->SendXoffChar = 0;
    }
  else
    {
      Extension->SendXonChar = 0;
      Extension->SendXoffChar = 1;
    }
  return;
}

ULONG SerialHandleModemUpdate(PSERIAL_DEVICE_EXTENSION Extension , BOOLEAN DoingTX )
{

  ULONG OldTXHolding;
  UCHAR ModemStatus ;
  BOOLEAN temp__1;

  OldTXHolding = Extension->TXHolding;
  ModemStatus = READ_PORT_UCHAR(Extension->Controller + (ULONG )(0x06 * 1));
  if(Extension->EscapeChar)
    {
      if(ModemStatus & (0x01 | 0x02 | 0x04 | 0x08))
	{
	  SerialPutChar(Extension, Extension->EscapeChar);
	  SerialPutChar(Extension, (UCHAR )0x03);
	  SerialPutChar(Extension, ModemStatus);
	}
    }
  if((Extension->HandFlow).ControlHandShake & (ULONG )0x40)
    {
      if(ModemStatus & 0x20)
	  Extension->RXHolding &= /*~*/ (ULONG )0x08;
      else
	Extension->RXHolding |= (ULONG )0x08;
    }
  else
    Extension->RXHolding &= /*~*/ (ULONG )0x08;
  if(Extension->IsrWaitMask)
    {
      if(Extension->IsrWaitMask & 0x0008 && ModemStatus & 0x01)
	  Extension->HistoryMask |= 0x0008;
      if(Extension->IsrWaitMask & 0x0010 && ModemStatus & 0x02)
	  Extension->HistoryMask |= 0x0010;
      if(Extension->IsrWaitMask & 0x0100 && ModemStatus & 0x04)
	Extension->HistoryMask |= 0x0100;
      if(Extension->IsrWaitMask & 0x0020 && ModemStatus & 0x08)
	Extension->HistoryMask |= 0x0020;
      if(Extension->IrpMaskLocation && Extension->HistoryMask)
	{
	  * Extension->IrpMaskLocation = Extension->HistoryMask;
	  Extension->IrpMaskLocation = (void *  )0;
	  Extension->HistoryMask = 0;
	  ((Extension->CurrentWaitIrp)->IoStatus).Information = sizeof(ULONG );	    
	  SerialInsertQueueDpc(& Extension->CommWaitDpc, (void * )0, (void *  )0, Extension);
	}
    }
  if((Extension->HandFlow).ControlHandShake & (ULONG )0x38)
    {
      if((Extension->HandFlow).ControlHandShake & (ULONG )0x08)
	{
	  if(ModemStatus & 0x10)
	    {
	      Extension->TXHolding &= /*~*/ (ULONG )0x01;
	    }
	  else
	    {
	      Extension->TXHolding |= (ULONG )0x01;
	    }
	}
      else
	{
	  Extension->TXHolding &= /*~*/ (ULONG )0x01;
	}
      if((Extension->HandFlow).ControlHandShake & (ULONG )0x10)
	{
	  if(ModemStatus & 0x20)
	    {
	      Extension->TXHolding &= /*~*/ (ULONG )0x02;
	    }
	  else
	    {
	      Extension->TXHolding |= (ULONG )0x02;
	    }
	}
      else
	{
	  Extension->TXHolding &= /*~*/ (ULONG )0x02;
	}
      if((Extension->HandFlow).ControlHandShake & (ULONG )0x20)
	{
	  if(ModemStatus & 0x80)
	    {
	      Extension->TXHolding &= /*~*/ (ULONG )0x04;
	    }
	  else
	    {
	      Extension->TXHolding |= (ULONG )0x04;
	    }
	}
      else
	{
	  Extension->TXHolding &= /*~*/ (ULONG )0x04;
	}
      if(! OldTXHolding && Extension->TXHolding &&
	 ((Extension->HandFlow).FlowReplace & (ULONG )0xc0) ==
	 (ULONG )0xc0)
	{
	  temp__1 = SerialInsertQueueDpc(& Extension->StartTimerLowerRTSDpc,
					 (void *  )0, (void *  )0, Extension);
	  if(temp__1)
	    Extension->CountOfTryingToLowerRTS++;
	}
      if(! DoingTX && OldTXHolding && ! Extension->TXHolding)
	{
	  if(! Extension->TXHolding &&
	     (Extension->TransmitImmediate ||
	      Extension->WriteLength) && Extension->HoldingEmpty)
	    {
	      WRITE_PORT_UCHAR(Extension->Controller + (ULONG )(0x01 * 1),0);
	      WRITE_PORT_UCHAR(Extension->Controller + (ULONG )(0x01 * 1),
			       (UCHAR )(0x01 | 0x02 | 0x04 | 0x08));
	    }
	}
      else
	{
	  if(Extension->TXHolding & ((ULONG )0x04 | (ULONG )0x02 | (ULONG)0x01))
	    {
	      Extension->TXHolding &= /*~*/ ((ULONG )0x04 | (ULONG )0x02 |
					 (ULONG )0x01);
	      if(! DoingTX && OldTXHolding && ! Extension->TXHolding)
		{
		  if(! Extension->TXHolding &&
		     (Extension->TransmitImmediate ||
					Extension->WriteLength) &&
		     Extension->HoldingEmpty)
		    {
		      WRITE_PORT_UCHAR(Extension->Controller +(ULONG )(0x01 *1), 0);
		      WRITE_PORT_UCHAR(Extension->Controller + (ULONG )(0x01 *1),
				       (UCHAR)(0x01 | 0x02 |  0x04 | 0x08));
		    }
		}
	    }
	}
    }
  return (ULONG )ModemStatus;
}

BOOLEAN SerialPerhapsLowerRTS(PVOID Context )
{
  PSERIAL_DEVICE_EXTENSION Extension;
  UCHAR temp__1;
  BOOLEAN temp__2;

  Extension = Context;
  if(((Extension->HandFlow).FlowReplace & (ULONG )0xc0) == (ULONG )0xc0)
    {
      if(Extension->TXHolding & (ULONG )0x10 ||
	 (Extension->CurrentWriteIrp ||
	  Extension->TransmitImmediate || ! ((& Extension->WriteQueue)->Flink == &
					     Extension->WriteQueue) && ! Extension->TXHolding))
	{
	}
      else
	{
	  temp__1 = SerialProcessLSR(Extension);
	  if((temp__1 & (0x20 | 0x40)) != (0x20 | 0x40))	    
	    {
	      temp__2 =  SerialInsertQueueDpc(&Extension->StartTimerLowerRTSDpc,
					      (void *  )0, (void *  )0, Extension);
	      if(temp__2)
		Extension->CountOfTryingToLowerRTS++;
	    }
	  else
	    SerialClrRTS(Extension);
	}
    }
  Extension->CountOfTryingToLowerRTS--;
  return 0;
}

void SerialStartTimerLowerRTS(PKDPC Dpc , PVOID DeferredContext , PVOID SystemContext1 ,
			      PVOID SystemContext2 )
{
  PSERIAL_DEVICE_EXTENSION Extension;
  LARGE_INTEGER CharTime ;
  KIRQL OldIrql ;
  BOOLEAN temp__1;

  Extension = DeferredContext;

  // #line 1661
  ///Dpc;
  //SystemContext1;
  //SystemContext2;

  * & OldIrql = KfAcquireSpinLock(& Extension->ControlLock);
  CharTime = SerialGetCharTime(Extension);
  KfReleaseSpinLock(& Extension->ControlLock, OldIrql);
  CharTime.QuadPart = - CharTime.QuadPart;
  temp__1 = SerialSetTimer(& Extension->LowerRTSTimer, CharTime, &
			 Extension->PerhapsLowerRTSDpc, Extension);
  if(temp__1)
    {
      KeSynchronizeExecution(Extension->Interrupt,
			     SerialDecrementRTSCounter, Extension);
    }
  SerialDpcEpilogue(Extension, Dpc);
}

void SerialInvokePerhapsLowerRTS(PKDPC Dpc , PVOID DeferredContext , PVOID SystemContext1 ,
				 PVOID SystemContext2 )
{
  PSERIAL_DEVICE_EXTENSION Extension;
  Extension = DeferredContext;
  //Dpc;
  //SystemContext1;
  //SystemContext2;
  KeSynchronizeExecution(Extension->Interrupt, SerialPerhapsLowerRTS,
			 Extension);
  SerialDpcEpilogue(Extension, Dpc);
}

BOOLEAN SerialDecrementRTSCounter(PVOID Context )
{
  PSERIAL_DEVICE_EXTENSION Extension;
  Extension = Context;
  Extension->CountOfTryingToLowerRTS--;
  return 0;
}

typedef struct _SERIAL_CHECK_OPEN {
  PSERIAL_DEVICE_EXTENSION Extension ;
	NTSTATUS *  StatusOfOpen ;
} SERIAL_CHECK_OPEN , *  PSERIAL_CHECK_OPEN ;

BOOLEAN SerialNullSynch(PVOID Context )
{
  // Context;
  return 0;
}


// Called from main()
NTSTATUS SerialCreateOpen(PDEVICE_OBJECT DeviceObject , PIRP Irp )
{
  PSERIAL_DEVICE_EXTENSION extension;
  SERIAL_CHECK_OPEN checkOpen ;
  NTSTATUS localStatus ;
  NTSTATUS temp__1;
  LONG temp__2;
  int temp__3;

  extension = DeviceObject->DeviceExtension;
  if(extension->PNPState != 0x1L)
    {
      (Irp->IoStatus).Status = (NTSTATUS )0xC000009AL;
      IofCompleteRequest(Irp, 0);
      return (NTSTATUS )0xC000009AL;
    }
  ExAcquireFastMutex(& extension->OpenMutex);
  localStatus = SerialIRPPrologue(Irp, extension) ;
  if(localStatus  != (NTSTATUS)0x00000000L)
    {
      ExReleaseFastMutex(& extension->OpenMutex);
      IofCompleteRequest(Irp, 0);
      SerialIRPEpilogue(extension);
      return localStatus;
    }
  temp__2 = InterlockedIncrement(& extension->OpenCount);
  if(temp__2 != 1)
    {
      ExReleaseFastMutex(& extension->OpenMutex);
      InterlockedDecrement(& extension->OpenCount);
      (Irp->IoStatus).Status = (NTSTATUS )0xC0000022L;
      IofCompleteRequest(Irp, 0);
      SerialIRPEpilogue(extension);
      return (NTSTATUS )0xC0000022L;
    }
  if((((((Irp->Tail).Overlay).CurrentStackLocation)->Parameters).Create).Options & 0x00000001)
    {
      ExReleaseFastMutex(& extension->OpenMutex);
      (Irp->IoStatus).Status = (NTSTATUS )0xC0000103L;
      (Irp->IoStatus).Information = 0;
      InterlockedDecrement(& extension->OpenCount);
      IofCompleteRequest(Irp, 0);
      SerialIRPEpilogue(extension);
      return (NTSTATUS )0xC0000103L;
    }
  extension->InterruptReadBuffer = (void *  )0;
  extension->BufferSize = 0;
  switch(temp__3/* MmQuerySystemSize() */)
    {
    case 1 /* MmLargeSystem */:
      {
	extension->BufferSize = 4096;
	extension->InterruptReadBuffer = ExAllocatePoolWithTag(NonPagedPool,
							       extension->BufferSize, 
							       tag__1 /*'XMOC'*/);
	if(extension->InterruptReadBuffer)
	  break;
      }
    case 2 /*MmMediumSystem*/:
      {
	extension->BufferSize = 1024;
	extension->InterruptReadBuffer = ExAllocatePoolWithTag(NonPagedPool,	  
							       extension->BufferSize, 
							       tag__1 /*'XMOC'*/);
	if(extension->InterruptReadBuffer)
	    break;
      }
    case 3 /*MmSmallSystem*/:
      {
	extension->BufferSize = 128;
	extension->InterruptReadBuffer = ExAllocatePoolWithTag(NonPagedPool,
							       extension->BufferSize, 
							       tag__1 /*'XMOC'*/);
      }
    }
  if(! extension->InterruptReadBuffer)
    {
      ExReleaseFastMutex(& extension->OpenMutex);
      extension->BufferSize = 0;
      (Irp->IoStatus).Status = (NTSTATUS )0xC000009AL;
      (Irp->IoStatus).Information = 0;
      InterlockedDecrement(& extension->OpenCount);
      IofCompleteRequest(Irp, 0);
      SerialIRPEpilogue(extension);
      return (NTSTATUS )0xC000009AL;
    }
  MmLockPagableSectionByHandle(SerialGlobals.PAGESER_Handle);
  (void )SerialGotoPowerState(DeviceObject, extension, PowerDeviceD0);
  extension->SendWaitWake = 0;
  extension->CharsInInterruptBuffer = 0;
  extension->LastCharSlot = extension->InterruptReadBuffer + (extension->BufferSize - 1);
  extension->ReadBufferBase = extension->InterruptReadBuffer;
  extension->CurrentCharSlot = extension->InterruptReadBuffer;
  extension->FirstReadableChar = extension->InterruptReadBuffer;
  extension->TotalCharsQueued = 0;
  (extension->HandFlow).XoffLimit = extension->BufferSize >> 3;
  (extension->HandFlow).XonLimit = extension->BufferSize >> 1;
  (extension->WmiCommData).XoffXmitThreshold =(extension->HandFlow).XoffLimit;
  (extension->WmiCommData).XonXmitThreshold =(extension->HandFlow).XonLimit;
  extension->BufferSizePt8 = 3 * (extension->BufferSize >> 2) + (extension->BufferSize >> 4);
  (extension->WmiCommData).IsBusy = 1;
  extension->IrpMaskLocation = (void *  )0;
  extension->HistoryMask = 0;
  extension->IsrWaitMask = 0;
  extension->SendXonChar = 0;
  extension->SendXoffChar = 0;
  KeSynchronizeExecution(extension->Interrupt, SerialClearStats, extension);
  extension->EscapeChar = 0;
  if(! extension->PermitShare)
    {
      if(! extension->InterruptShareable)
	{
	  checkOpen.Extension = extension;
	  checkOpen.StatusOfOpen = & (Irp->IoStatus).Status;
	  KeSynchronizeExecution(extension->Interrupt,
				 (PKSYNCHRONIZE_ROUTINE) 0 /*SerialCheckOpen*/, & checkOpen);
	}
      else
	{
	  KeSynchronizeExecution(extension->Interrupt,
				 (PKSYNCHRONIZE_ROUTINE) 0  /*SerialMarkOpen*/, extension);
	  (Irp->IoStatus).Status = (NTSTATUS )0x00000000L;
	  // TRACER(*)
	  localStatus = (NTSTATUS )0x00000000L;
	}
    }
  else
    {
      KeSynchronizeExecution(extension->Interrupt, (PKSYNCHRONIZE_ROUTINE) 0  /*SerialMarkOpen*/,
			     extension);
      (Irp->IoStatus).Status = (NTSTATUS )0x00000000L;
      // TRACER(*)
      localStatus = (NTSTATUS )0x00000000L;

    }
  ExReleaseFastMutex(& extension->OpenMutex);
  // TRACER 
  // (*) We don't run array solver so we make sure localStatus gets its
  // value from (Irp->IoStatus).Status
  // localStatus = (Irp->IoStatus).Status;
  (Irp->IoStatus).Information = 0L;
  if(! ((NTSTATUS )localStatus >= 0))
    {
      if(extension->InterruptReadBuffer != (void *  )0)
	{
	  ExFreePool(extension->InterruptReadBuffer);
	  extension->InterruptReadBuffer = (void *  )0;
	}
      InterlockedDecrement(& extension->OpenCount);
    }

  IofCompleteRequest(Irp, 0);
  SerialIRPEpilogue(extension);
  return localStatus;
}

void SerialDrainUART(PSERIAL_DEVICE_EXTENSION PDevExt , PLARGE_INTEGER PDrainTime )
{
  
  while(TRACER_NONDET/* (READ_PORT_UCHAR(PDevExt->Controller + (ULONG )(0x05 * 1)) &  */
/* 	 (0x20 | 0x40)) != (0x20 | 0x40) */)
								      
    {
      KeDelayExecutionThread(KernelMode, 0, PDrainTime);
    }
  return;

}

// Called from main()
NTSTATUS SerialClose(PDEVICE_OBJECT DeviceObject , PIRP Irp )
{
  LARGE_INTEGER tenCharDelay ;
  LARGE_INTEGER charTime ;
  PSERIAL_DEVICE_EXTENSION extension;
  NTSTATUS status ;
  LONG openCount ;
  ULONG pendingDPCs ;
  ULONG flushCount ;


  extension = DeviceObject->DeviceExtension;
  ExAcquireFastMutex(& extension->CloseMutex);
  status = SerialIRPPrologue(Irp, extension);
  if((status) != (NTSTATUS)0x00000000L)
    {
      if(status == (NTSTATUS )0xC0000056L)
	{
	  extension->BufferSize = 0;
	  ExFreePool(extension->InterruptReadBuffer);
	  extension->InterruptReadBuffer = (void *  )0;
	  status = (NTSTATUS)0x00000000L;
	  (Irp->IoStatus).Status = (NTSTATUS)0x00000000L;
					      
	}
      IofCompleteRequest(Irp, 0);
      SerialIRPEpilogue(extension);
      openCount = InterlockedDecrement(& extension->OpenCount);
      ExReleaseFastMutex(& extension->CloseMutex);
      return status;
    }
  if(extension->OpenCount != 1)
    {
      ExReleaseFastMutex(& extension->CloseMutex);
      (Irp->IoStatus).Status = (NTSTATUS )0xC0000010L;
      IofCompleteRequest(Irp, 0);
      SerialIRPEpilogue(extension);
      return (NTSTATUS )0xC0000010L;
    }
  // charTime.QuadPart = charTime.QuadPart - (SerialGetCharTime(extension)).QuadPart;
  extension->DeviceIsOpened = 0;
  KeSynchronizeExecution(extension->Interrupt, SerialTurnOffBreak, extension);
  //BLAST forloop for(flushCount = 20 * 16; flushCount != 0; flushCount--)
  for(flushCount = BLAST_NONDET; flushCount != 0; flushCount--)
    {
      if((READ_PORT_UCHAR(extension->Controller + (ULONG )(0x05 * 1))
	  & (0x20 | 0x40)) != (0x20 | 0x40))
	{
	  KeDelayExecutionThread(KernelMode, 0, & charTime);
	}
      else
	{
	  break;
	}
    }
  if(flushCount == 0)
    SerialMarkHardwareBroken(extension);
  KeSynchronizeExecution(extension->Interrupt, SerialMarkClose,extension);
  if(extension->RXHolding & (ULONG )0x02)
    {
      while(TRACER_NONDET /* ! (READ_PORT_UCHAR(extension->Controller + (ULONG )(0x05 * */
/* 								1)) & 0x20) */)
	{
	  KeDelayExecutionThread(KernelMode, 0, & charTime);
	}
/*       do */
/* 	{ */
/* 	  // #line 607 */
/* 	  WRITE_PORT_UCHAR(extension->Controller + (ULONG )(0x00 * */
/* 							    1), (extension->SpecialChars).XonChar); */
/* 	} */
/*       while(0); */
      //BLAST forloop for(flushCount = 20 * 16; flushCount != 0; flushCount--)
      for(flushCount = BLAST_NONDET; flushCount != 0; flushCount--)
	{
	  if(TRACER_NONDET/* (READ_PORT_UCHAR(extension->Controller + (ULONG */
/* 						       )(0x05 * 1)) & (0x20 | 0x40)) != (0x20 | 0x40) */)
	    KeDelayExecutionThread(KernelMode, 0, & charTime);
	  else
	    break;
	} // end of for loop
      if(flushCount == 0)
	  SerialMarkHardwareBroken(extension);
    }
  tenCharDelay.QuadPart = charTime.QuadPart * 10;
  KeDelayExecutionThread(KernelMode, 1, & tenCharDelay);
  SerialClrDTR(extension);
  if(extension->CountOfTryingToLowerRTS)
    {
      do
	{
	  KeDelayExecutionThread(KernelMode, 0, & charTime);
	}
      while(extension->CountOfTryingToLowerRTS);
      KeSynchronizeExecution(extension->Interrupt, SerialNullSynch, (void *  )0);
			     
    }
  SerialClrRTS(extension);
  extension->RXHolding = 0;
  extension->TXHolding = 0;
  (extension->WmiCommData).IsBusy = 0;
  extension->BufferSize = 0;
  if(extension->InterruptReadBuffer != (void *  )0)
    ExFreePool(extension->InterruptReadBuffer);
  extension->InterruptReadBuffer = (void *  )0;
  extension->SendWaitWake = 0;
  if(extension->PendingWakeIrp != (void *  )0)
      IoCancelIrp(extension->PendingWakeIrp);
  (void )SerialGotoPowerState(DeviceObject, extension, PowerDeviceD3);
  (Irp->IoStatus).Status = (NTSTATUS )0x00000000L;
  (Irp->IoStatus).Information = 0L;
  IofCompleteRequest(Irp, 0);
  SerialIRPEpilogue(extension);
  pendingDPCs = InterlockedDecrement(& extension->DpcCount);
  if(pendingDPCs)
      KeWaitForSingleObject(& extension->PendingDpcEvent, Executive,
			    KernelMode, 0, (void *  )0);
  ExReleaseFastMutex(& extension->CloseMutex);
  InterlockedIncrement(& extension->DpcCount);
  openCount = InterlockedDecrement(& extension->OpenCount);
  MmUnlockPagableImageSection(SerialGlobals.PAGESER_Handle);
  return (NTSTATUS )0x00000000L;
}

BOOLEAN SerialMarkOpen(PVOID Context )
{
  PSERIAL_DEVICE_EXTENSION extension;

  extension = Context;
  SerialReset(extension);
  WRITE_PORT_UCHAR(extension->Controller + (ULONG )(0x04 * 1),
		   (UCHAR )(READ_PORT_UCHAR(extension->Controller + (ULONG)(0x04 * 1)) | 0x08));
  extension->DeviceIsOpened = 1;
  extension->ErrorWord = 0;
  return 0;
}

BOOLEAN SerialCheckOpen(PVOID Context )
{
  PSERIAL_DEVICE_EXTENSION extensionToOpen;
  NTSTATUS *  status;
  PLIST_ENTRY firstEntry;
  PLIST_ENTRY currentEntry;
  PSERIAL_DEVICE_EXTENSION currentExtension ;

  extensionToOpen = ((PSERIAL_CHECK_OPEN)Context)->Extension;		
  status = ((PSERIAL_CHECK_OPEN )Context)->StatusOfOpen;
  firstEntry = & extensionToOpen->CommonInterruptObject;
  currentEntry = firstEntry;
  do
    {
      currentExtension =
	(SERIAL_DEVICE_EXTENSION *  )((PCHAR)currentEntry -
		          (ULONG_PTR )(& ((SERIAL_DEVICE_EXTENSION*  )0)->CommonInterruptObject));
      if(currentExtension->DeviceIsOpened)
	{
	  break;
	}
      currentEntry = (currentExtension->CommonInterruptObject).Flink;
    }
  while(currentEntry != firstEntry);
  
  if(currentEntry == firstEntry)
    {
      * status = (NTSTATUS )0x00000000L;
      SerialMarkOpen((PVOID) extensionToOpen);
    }
  else
    {
      if(! extensionToOpen->PortOnAMultiportCard)
	* status = (NTSTATUS )0xC000016CL;
      else
	{
	  if(! currentExtension->PortOnAMultiportCard)
	    * status = (NTSTATUS )0xC000016CL;
	  else
	    {
	      * status = (NTSTATUS )0x00000000L;
	      SerialMarkOpen((PVOID) extensionToOpen);
	    }
	}
    }
  return 0;
}


void SerialDisableUART(PVOID Context )
{
  PSERIAL_DEVICE_EXTENSION extension;

  extension = Context;
  if(! extension->Jensen)
      WRITE_PORT_UCHAR(extension->Controller + (ULONG )(0x04 *1),
		       (UCHAR)(READ_PORT_UCHAR(extension->Controller + (ULONG)(0x04 * 1)) & /*~*/ 0x08));
  if(extension->FifoPresent)
      WRITE_PORT_UCHAR(extension->Controller + (ULONG )(0x02 *1),  (UCHAR )0);
  return;
}

BOOLEAN SerialMarkClose(PVOID Context )
{
  PSERIAL_DEVICE_EXTENSION extension;

  extension = Context;
  SerialDisableUART(Context);
  extension->DeviceIsOpened = 0;
  return 0;
}

// Called from main()
NTSTATUS SerialCleanup(PDEVICE_OBJECT DeviceObject , PIRP Irp )
{
  PSERIAL_DEVICE_EXTENSION extension;
  NTSTATUS status ;

  extension = DeviceObject->DeviceExtension;
  status = SerialIRPPrologue(Irp, extension);
  if(status != (NTSTATUS)0x00000000L)
    {
      if(status == (NTSTATUS )0xC0000056L){
	status = (NTSTATUS)0x00000000L;
        (Irp->IoStatus).Status = (NTSTATUS)0x00000000L;
      }
      IofCompleteRequest(Irp, 0);
      SerialIRPEpilogue(extension);
      return status;
    }
  SerialKillPendingIrps(DeviceObject);
  (Irp->IoStatus).Status = (NTSTATUS )0x00000000L;
  (Irp->IoStatus).Information = 0L;
  IofCompleteRequest(Irp, 0);
  SerialIRPEpilogue(extension);
  return (NTSTATUS )0x00000000L;
}

LARGE_INTEGER SerialGetCharTime(PSERIAL_DEVICE_EXTENSION Extension )
{
  ULONG dataSize ;
  ULONG paritySize ;
  ULONG stopSize ;
  ULONG charTime ;
  ULONG bitTime ;
  LARGE_INTEGER tmp ;
  
  if((Extension->LineControl & (UCHAR )0x03) == (UCHAR )0x00)
      dataSize = 5;
  else
    {
      if((Extension->LineControl & (UCHAR )0x03) == (UCHAR )0x01)
	dataSize = 6;
      else
	{
	  if((Extension->LineControl & (UCHAR )0x03) == (UCHAR)0x02)
	    dataSize = 7;
	  else
	    {
	      if((Extension->LineControl & (UCHAR )0x03) == (UCHAR )0x03)
		  dataSize = 8;
	    }
	}
    }
  paritySize = 1;
  if((Extension->LineControl & (UCHAR )0x38) == (UCHAR )0x00)
      paritySize = 0;
  if(Extension->LineControl & (UCHAR )0x04)
      stopSize = 2;
  else
      stopSize = 1;

  bitTime = (10000000 + (Extension->CurrentBaud - 1)) / Extension->CurrentBaud;
  charTime = bitTime + (dataSize + paritySize + stopSize) * bitTime;
  tmp.QuadPart = charTime;
  return tmp;
}

NTSTATUS SerialStartPurge(PSERIAL_DEVICE_EXTENSION Extension )
{
  PIRP NewIrp ;
  KIRQL OldIrql ;
  ULONG Mask ;
  /*
     TRACER: we need  MINMAX here!
  */
  /*  do  */
    {
      Mask = * (ULONG * )((Extension->CurrentPurgeIrp)->AssociatedIrp).SystemBuffer;
      if(Mask & 0x00000001)
	{
	  SerialKillAllReadsOrWrites(Extension->DeviceObject, &
				     Extension->WriteQueue, &
				     Extension->CurrentWriteIrp);
	  SerialKillAllReadsOrWrites(Extension->DeviceObject, &
				     Extension->WriteQueue, &
				     Extension->CurrentXoffIrp);
	}
      if(Mask & 0x00000002)
	SerialKillAllReadsOrWrites(Extension->DeviceObject, &
				   Extension->ReadQueue, &
				   Extension->CurrentReadIrp);
      if(Mask & 0x00000008)
	{
	  * & OldIrql = KfAcquireSpinLock(& Extension->ControlLock);
	  KeSynchronizeExecution(Extension->Interrupt,
				 SerialPurgeInterruptBuff, Extension);
	  KfReleaseSpinLock(& Extension->ControlLock, OldIrql);
	}
      ((Extension->CurrentPurgeIrp)->IoStatus).Status = (NTSTATUS)0x00000000L;
      ((Extension->CurrentPurgeIrp)->IoStatus).Information = 0;
      SerialGetNextIrp(& Extension->CurrentPurgeIrp, 
		       & Extension->PurgeQueue,
		       & NewIrp, 1, Extension);
    } /* while(NewIrp); */
  

  return (NTSTATUS )0x00000000L;
}

BOOLEAN SerialPurgeInterruptBuff(PVOID Context )
{
  PSERIAL_DEVICE_EXTENSION Extension;
  Extension = Context;

  if(Extension->ReadBufferBase == Extension->InterruptReadBuffer)
    {
      Extension->CurrentCharSlot = Extension->InterruptReadBuffer;
      Extension->FirstReadableChar = Extension->InterruptReadBuffer;
      Extension->LastCharSlot = Extension->InterruptReadBuffer + (Extension->BufferSize - 1);
      Extension->CharsInInterruptBuffer = 0;
      SerialHandleReducedIntBuffer(Extension);
    }
  return 0;
}

NTSTATUS SerialQueryInformationFile(PDEVICE_OBJECT DeviceObject , PIRP Irp )
{
  NTSTATUS Status ;
  PIO_STACK_LOCATION IrpSp ;
  NTSTATUS status ;
  NTSTATUS temp__1;

  //	DeviceObject;
  status = SerialIRPPrologue(Irp, 
			     (PSERIAL_DEVICE_EXTENSION)DeviceObject->DeviceExtension);

  if(status != (NTSTATUS )0x00000000L)
    {
      IofCompleteRequest(Irp, 0);
      SerialIRPEpilogue((PSERIAL_DEVICE_EXTENSION)DeviceObject->DeviceExtension);
      return status;
    }
    temp__1 = SerialCompleteIfError(DeviceObject, Irp);
    if(temp__1 != (NTSTATUS )0x00000000L)
      return (NTSTATUS )0xC0000120L;
    IrpSp = ((Irp->Tail).Overlay).CurrentStackLocation;
    (Irp->IoStatus).Information = 0L;
    Status = (NTSTATUS )0x00000000L;
    if(((IrpSp->Parameters).QueryFile).FileInformationClass == FileStandardInformation)
    {
      PFILE_STANDARD_INFORMATION Buf= (Irp->AssociatedIrp).SystemBuffer;
      (Buf->AllocationSize).QuadPart = 0;
      Buf->EndOfFile = Buf->AllocationSize;
      Buf->NumberOfLinks = 0;
      Buf->DeletePending = 0;
      Buf->Directory = 0;
      (Irp->IoStatus).Information = sizeof(FILE_STANDARD_INFORMATION);
    }
  else
    {
      if(((IrpSp->Parameters).QueryFile).FileInformationClass ==FilePositionInformation)
	{
	  (((PFILE_POSITION_INFORMATION)(Irp->AssociatedIrp).SystemBuffer)->CurrentByteOffset).QuadPart = 0;
	  (Irp->IoStatus).Information = sizeof(FILE_POSITION_INFORMATION );
	}
      else
	{
	  Status = (NTSTATUS )0xC000000DL;
	  (Irp->IoStatus).Status = (NTSTATUS )0xC000000DL;
	}
    }
  IofCompleteRequest(Irp, 0);
  SerialIRPEpilogue((PSERIAL_DEVICE_EXTENSION)DeviceObject->DeviceExtension);
  return Status;
}

NTSTATUS SerialSetInformationFile(PDEVICE_OBJECT DeviceObject , PIRP Irp )
{
  NTSTATUS Status ;
  NTSTATUS temp__1;

  // DeviceObject;
  Status = SerialIRPPrologue(Irp, (PSERIAL_DEVICE_EXTENSION)DeviceObject->DeviceExtension);

  if(Status != (NTSTATUS )0x00000000L)
    {
      IofCompleteRequest(Irp, 0);
      SerialIRPEpilogue((PSERIAL_DEVICE_EXTENSION)DeviceObject->DeviceExtension);
      return Status;
    }
  temp__1 = SerialCompleteIfError(DeviceObject, Irp);
  if(temp__1  != (NTSTATUS )0x00000000L)
    return (NTSTATUS )0xC0000120L;
  (Irp->IoStatus).Information = 0L;
  if((((((Irp->Tail).Overlay).CurrentStackLocation)->Parameters).SetFile).FileInformationClass ==
     FileEndOfFileInformation ||
     (((((Irp->Tail).Overlay).CurrentStackLocation)->Parameters).SetFile).FileInformationClass == 
     FileAllocationInformation)
    Status = (NTSTATUS )0x00000000L;
  else
    Status = (NTSTATUS )0xC000000DL;
  (Irp->IoStatus).Status = Status;
  IofCompleteRequest(Irp, 0);
  SerialIRPEpilogue((PSERIAL_DEVICE_EXTENSION)DeviceObject->DeviceExtension);
  return Status;
}

// #line 835
typedef struct _SERIAL_UPDATE_CHAR ;

// #line 846
typedef struct _SERIAL_IOCTL_SYNC ;

// #line 27 "read.c"
void SerialCancelCurrentRead(PDEVICE_OBJECT DeviceObject , PIRP Irp ) ;
BOOLEAN SerialGrabReadFromIsr(PVOID Context ) ;
BOOLEAN SerialUpdateReadByIsr(PVOID Context ) ;
ULONG SerialGetCharsFromIntBuffer(PSERIAL_DEVICE_EXTENSION Extension ) ;
BOOLEAN SerialUpdateInterruptBuffer(PVOID Context ) ;
BOOLEAN SerialUpdateAndSwitchToUser(PVOID Context ) ;
NTSTATUS SerialResizeBuffer(PSERIAL_DEVICE_EXTENSION Extension ) ;
ULONG SerialMoveToNewIntBuffer(PSERIAL_DEVICE_EXTENSION Extension , PUCHAR NewBuffer ) ;
BOOLEAN SerialUpdateAndSwitchToNew(PVOID Context ) ;

NTSTATUS SerialRead(PDEVICE_OBJECT DeviceObject , PIRP Irp )
{
  PSERIAL_DEVICE_EXTENSION extension = DeviceObject->DeviceExtension;
  BOOLEAN acceptingIRPs ;
  NTSTATUS status ;
  NTSTATUS temp__1 ;

  status = SerialIRPPrologue(Irp, extension);
  if(status != (NTSTATUS)0x00000000L)
    {
      {
	IofCompleteRequest(Irp, 0);
	SerialIRPEpilogue(extension);
      }
      return status;
    }
  temp__1 = SerialCompleteIfError(DeviceObject, Irp);
  if(temp__1 != (NTSTATUS )0x00000000L)
    {
      return (NTSTATUS )0xC0000120L;
    }
  (Irp->IoStatus).Information = 0L;
  if((((((Irp->Tail).Overlay).CurrentStackLocation)->Parameters).Read).Length)
    {
      return SerialStartOrQueue(extension, Irp, &
				extension->ReadQueue, & extension->CurrentReadIrp,
				2 /*SerialStartRead*/);
    }
  else
    {
      (Irp->IoStatus).Status = (NTSTATUS )0x00000000L;
      {
	IofCompleteRequest(Irp, 0);
	SerialIRPEpilogue(extension);
      }
      return (NTSTATUS )0x00000000L;
    }
}


NTSTATUS SerialStartRead(PSERIAL_DEVICE_EXTENSION Extension )
{
  SERIAL_UPDATE_CHAR updateChar ;
  PIRP newIrp ;
  KIRQL oldIrql ;
  KIRQL controlIrql ;
  BOOLEAN returnWithWhatsPresent ;
  BOOLEAN os2ssreturn ;
  BOOLEAN crunchDownToOne ;
  BOOLEAN useTotalTimer ;
  BOOLEAN useIntervalTimer ;
  ULONG multiplierVal ;
  ULONG constantVal ;
  LARGE_INTEGER totalTime ;
  SERIAL_TIMEOUTS timeoutsForIrp ;
  BOOLEAN setFirstStatus;
  NTSTATUS firstStatus ;
  NTSTATUS localStatus;
  
  setFirstStatus = 0;
  updateChar.Extension = Extension;
  /*
    TRACER: we need MINMAX here!

    Comment: we have observed that if the loop is executed twice the
    program is unsafe. The reason is that SerialGetNextIrp is called
    twice. The first time s == NP so the safety condition
    _ABORT(s!=NP) (IofCompleteRequest) is not violated. However after
    IofCompleteRequest assigns s=DC and then s!=NP because NP=1 and
    DC=2. The second iteration IofCompleteRequest is called again and
    now the safety is violated.
   */
  /*   do   */
  {
    if(((((Extension->CurrentReadIrp)->Tail).Overlay).CurrentStackLocation )->MajorFunction != 0x03)
      {
	localStatus = SerialResizeBuffer(Extension);
	if(! setFirstStatus)
	  {
	    firstStatus = localStatus;
	    setFirstStatus = 1;
	  }
      }
    else
      {
	Extension->NumberNeededForRead = ((((((Extension->CurrentReadIrp)->Tail).Overlay)
					    .CurrentStackLocation)->Parameters).Read).Length;
	useTotalTimer = 0;
	returnWithWhatsPresent = 0;
	os2ssreturn = 0;
	crunchDownToOne = 0;
	useIntervalTimer = 0;
	SerialCancelTimer(& Extension->ReadRequestTotalTimer, Extension);
	SerialCancelTimer(& Extension->ReadRequestIntervalTimer, Extension);
	
	* & controlIrql = KfAcquireSpinLock(& Extension->ControlLock);
	
	timeoutsForIrp = Extension->Timeouts;
	KfReleaseSpinLock(& Extension->ControlLock, controlIrql);
	
	if(timeoutsForIrp.ReadIntervalTimeout &&
	   timeoutsForIrp.ReadIntervalTimeout != 0xffffffff)
	  
	  {
	    useIntervalTimer = 1;
	    (Extension->IntervalTime).QuadPart = 
	      (ULONGLONG)((ULONGLONG )((ULONG)timeoutsForIrp.ReadIntervalTimeout) *
			  (ULONG )10000);
	    if((Extension->IntervalTime).QuadPart >= (Extension->CutOverAmount).QuadPart)
	      Extension->IntervalTimeToUse = & Extension->LongIntervalAmount;
	    else
	      Extension->IntervalTimeToUse = & Extension->ShortIntervalAmount;
	  }
	if(timeoutsForIrp.ReadIntervalTimeout == 0xffffffff)
	  {
	    if(! timeoutsForIrp.ReadTotalTimeoutConstant &&
	       ! timeoutsForIrp.ReadTotalTimeoutMultiplier)
	      returnWithWhatsPresent = 1;
	    else
	      {
		if(timeoutsForIrp.ReadTotalTimeoutConstant != 0xffffffff &&
		   timeoutsForIrp.ReadTotalTimeoutMultiplier != 0xffffffff)
		  {
		    useTotalTimer = 1;
		    os2ssreturn = 1;
		    multiplierVal = timeoutsForIrp.ReadTotalTimeoutMultiplier;
		    constantVal = timeoutsForIrp.ReadTotalTimeoutConstant;
		  }
		else
		  {
		    if(timeoutsForIrp.ReadTotalTimeoutConstant != 0xffffffff
		       &&
		       timeoutsForIrp.ReadTotalTimeoutMultiplier == 0xffffffff)
		      {
			useTotalTimer = 1;
			os2ssreturn = 1;
			crunchDownToOne = 1;
			multiplierVal = 0;
			constantVal = timeoutsForIrp.ReadTotalTimeoutConstant;
		      }
		  }
	      }
	  }
	else
	  {
	    if(timeoutsForIrp.ReadTotalTimeoutMultiplier ||
	       timeoutsForIrp.ReadTotalTimeoutConstant)
	      {
		useTotalTimer = 1;
		multiplierVal = timeoutsForIrp.ReadTotalTimeoutMultiplier;
		constantVal = timeoutsForIrp.ReadTotalTimeoutConstant;
		
	      }
	  }
	if(useTotalTimer)
	  {
	    totalTime.QuadPart = (LONGLONG )((ULONGLONG )(
				 (ULONGLONG )((ULONG)Extension->NumberNeededForRead) * 
				 (ULONG )multiplierVal) + constantVal) * - 10000;
	  }
	* & controlIrql = KfAcquireSpinLock(& Extension->ControlLock);
	updateChar.CharsCopied =SerialGetCharsFromIntBuffer(Extension);
	if(returnWithWhatsPresent || !
	   Extension->NumberNeededForRead || os2ssreturn &&
	   ((Extension->CurrentReadIrp)->IoStatus).Information)
	  {
	    KeSynchronizeExecution(Extension->Interrupt,
				   SerialUpdateInterruptBuffer, & updateChar);
	    KfReleaseSpinLock(& Extension->ControlLock, controlIrql);
	    ((Extension->CurrentReadIrp)->IoStatus).Status = (NTSTATUS )0x00000000L;
	    if(! setFirstStatus)
	      {
		firstStatus = (NTSTATUS )0x00000000L;
		setFirstStatus = 1;
	      }
	  }
	else
	  {
	    ((((((Extension->CurrentReadIrp)->Tail).Overlay).CurrentStackLocation)->Parameters).Others).Argument4 =
	      (void * )0;
	    /* TRACER: to shadow */
	    myArgument4 = (void *  )0;
	    IoAcquireCancelSpinLock(& oldIrql);
	    if((Extension->CurrentReadIrp)->Cancel)
	      {
		IoReleaseCancelSpinLock(oldIrql);
		KfReleaseSpinLock(& Extension->ControlLock, controlIrql);
		((Extension->CurrentReadIrp)->IoStatus).Status = (NTSTATUS )0xC0000120L;
		((Extension->CurrentReadIrp)->IoStatus).Information = 0;
		if(! setFirstStatus)
		  {
		    firstStatus = (NTSTATUS)0xC0000120L;
		    setFirstStatus = 1;
		  }
	      }
	    else
	      {
		if(crunchDownToOne)
		  {
		    Extension->NumberNeededForRead = 1;
       ((((((Extension->CurrentReadIrp)->Tail).Overlay).CurrentStackLocation)->Parameters).Read).Length= 1;
		  }
		KeSynchronizeExecution(Extension->Interrupt,
				       SerialUpdateAndSwitchToUser, & updateChar);
		if(! updateChar.Completed)
		  {
		    if(useTotalTimer)
		      {
/*    		do */
/* 		  { */
/* 	            LONG _refType = 0x00000004; */
/* 		    PULONG_PTR _arg4 = (PVOID )(& */
/* 		    ((((((Extension->CurrentReadIrp)->Tail).Overlay).CurrentStackLocation */
/* 						       )->Parameters).Others).Argument4); */
/* 		    * _arg4 |= _refType; */
/* 		  } */
/* 		while(0); */
			SerialSetTimer(&
				       Extension->ReadRequestTotalTimer,
				       totalTime, &
				       Extension->TotalReadTimeoutDpc, Extension);
		      }
		    if(useIntervalTimer)
		      {
/* 			 do */
/* 			 { */
/* 			    LONG _refType = 0x00000008; */
/* 			    PULONG_PTR _arg4 = (PVOID )(& */
/* 			    ((((((Extension->CurrentReadIrp)->Tail).Overlay).CurrentStackLocation */
/* 							     )->Parameters).Others).Argument4); */
/* 			    * _arg4 |= _refType; */
/* 			 } */
/* 			 while(0); */
			KeQuerySystemTime(& Extension->LastReadTime );
			SerialSetTimer(& Extension->ReadRequestIntervalTimer,
				       * Extension->IntervalTimeToUse,
				       & Extension->IntervalReadTimeoutDpc, Extension);
		      }
		    
		    // TRACER
		    _ABORT(pending != 0);
		    pending = 1;
		    
		    // BLAST
		    /* if(pending == 0) */
		    /*   pending = 1; */
		    /* else */
		    /*   errorFn(); */
		    
		    ((((Extension->CurrentReadIrp)->Tail).Overlay).CurrentStackLocation )->Control |= 0x01;
		    IoReleaseCancelSpinLock(oldIrql);
		    KfReleaseSpinLock(& Extension->ControlLock,controlIrql);
		    if(! setFirstStatus)
		      firstStatus = (NTSTATUS)0x00000103L;
		    return firstStatus;
		  }
		else
		  {
		    IoReleaseCancelSpinLock(oldIrql);
		    KfReleaseSpinLock(& Extension->ControlLock,controlIrql);
		    ((Extension->CurrentReadIrp)->IoStatus ).Status = (NTSTATUS )0x00000000L;
		    if(! setFirstStatus)
		      {
			firstStatus = (NTSTATUS)0x00000000L;
			setFirstStatus = 1;
		      }
		  }
	      }
	  }
      }
    SerialGetNextIrp(& Extension->CurrentReadIrp, 
		     & Extension->ReadQueue,
		     & newIrp, 
		     1, 
		     Extension);
  }/* while(newIrp); */
  return firstStatus;
}

void SerialCompleteRead(PKDPC Dpc , PVOID DeferredContext , PVOID SystemContext1,
			PVOID SystemContext2 )
{
  PSERIAL_DEVICE_EXTENSION extension = DeferredContext;
  KIRQL oldIrql ;
  IoAcquireCancelSpinLock(& oldIrql);
  extension->CountOnLastRead = (LONG )(- 3);
  SerialTryToCompleteCurrent(extension, (void *  )0, oldIrql, (NTSTATUS)0x00000000L,
			     & extension->CurrentReadIrp, &
			     extension->ReadQueue, & extension->ReadRequestIntervalTimer, &
			     extension->ReadRequestTotalTimer, 
			     SerialStartRead, /* Starter */
			     2, /* TRACER: StarterCode */
			     SerialGetNextIrp, 
			     0x00000001);
  SerialDpcEpilogue(extension, Dpc);
}

void SerialCancelCurrentRead(PDEVICE_OBJECT DeviceObject , PIRP Irp )
{
  PSERIAL_DEVICE_EXTENSION extension;
  
  extension = DeviceObject->DeviceExtension;
  extension->CountOnLastRead = (LONG )(- 1);
  SerialTryToCompleteCurrent(extension, SerialGrabReadFromIsr,
			     Irp->CancelIrql, (NTSTATUS )0xC0000120L, &
			     extension->CurrentReadIrp, & extension->ReadQueue, &
			     extension->ReadRequestIntervalTimer, &
			     extension->ReadRequestTotalTimer, 
			     SerialStartRead, /* Starter */
			     2, /* TRACER: StarterCode */
			     SerialGetNextIrp, 
			     0x00000002);
}

BOOLEAN SerialGrabReadFromIsr(PVOID Context )
{
  PSERIAL_DEVICE_EXTENSION extension = Context;
  if(extension->ReadBufferBase != extension->InterruptReadBuffer)
    {
      ((extension->CurrentReadIrp)->IoStatus).Information =
	((((((extension->CurrentReadIrp)->Tail).Overlay).CurrentStackLocation
	   )->Parameters).Read).Length - (extension->LastCharSlot -
					  extension->CurrentCharSlot + 1);
      extension->ReadBufferBase = extension->InterruptReadBuffer;
      extension->CurrentCharSlot = extension->InterruptReadBuffer;
      extension->FirstReadableChar = extension->InterruptReadBuffer;
      extension->LastCharSlot = extension->InterruptReadBuffer +
	(extension->BufferSize - 1);
      extension->CharsInInterruptBuffer = 0;
/*       do */
/* 	{ */
/* 	  LONG _refType = 0x00000001; */
/* 	  PULONG_PTR _arg4 = (PVOID )(& */
/* 				      ((((((extension->CurrentReadIrp)->Tail).Overlay) */
/* 					 .CurrentStackLocation)->Parameters).Others).Argument4 */
/* 				      ); */
/* 	  * _arg4 &= /\*~*\/ _refType; */
/* 	} */
/*       while(0); */
    }
  return 0;
}

// #line 883
void SerialReadTimeout(PKDPC Dpc , PVOID DeferredContext , PVOID SystemContext1,
		       PVOID SystemContext2 )
{
  PSERIAL_DEVICE_EXTENSION extension;
  KIRQL oldIrql ;

  extension = DeferredContext;
  IoAcquireCancelSpinLock(& oldIrql);
  extension->CountOnLastRead = (LONG )(- 2);
  SerialTryToCompleteCurrent(extension, SerialGrabReadFromIsr, oldIrql,
			     (NTSTATUS )0x00000102L, & extension->CurrentReadIrp, &
			     extension->ReadQueue, & extension->ReadRequestIntervalTimer, &
			     extension->ReadRequestTotalTimer, 
			     SerialStartRead, /* Starter */
			     2, /* TRACER: StarterCode */
			     SerialGetNextIrp, 
			     0x00000004);
  SerialDpcEpilogue(extension, Dpc);
}

BOOLEAN SerialUpdateReadByIsr(PVOID Context )
{
  PSERIAL_DEVICE_EXTENSION extension;
  extension = Context;
  extension->CountOnLastRead = extension->ReadByIsr;
  extension->ReadByIsr = 0;
  return 0;
}

// #line 994
void SerialIntervalReadTimeout(PKDPC Dpc , PVOID DeferredContext , 
			       PVOID SystemContext1 , PVOID SystemContext2 )
{
  PSERIAL_DEVICE_EXTENSION extension ;
  KIRQL oldIrql ;
  LARGE_INTEGER currentTime ;
  
  
  extension = DeferredContext;
  IoAcquireCancelSpinLock(& oldIrql);
  // #line 1044
  if(extension->CountOnLastRead == (LONG )(- 2))
    {
      // #line 1052
      SerialTryToCompleteCurrent(extension, SerialGrabReadFromIsr,
				 oldIrql, (NTSTATUS )0x00000102L, &
				 extension->CurrentReadIrp, & extension->ReadQueue, &
				 extension->ReadRequestIntervalTimer, &
				 extension->ReadRequestTotalTimer, 
				 SerialStartRead, /* Starter */
				 2, /* TRACER: StarterCode */
				 SerialGetNextIrp, 
				 0x00000008);
    }
  else
    {
      // #line 1066
      if(extension->CountOnLastRead == (LONG )(- 3))
	{
	  // #line 1075
	  SerialTryToCompleteCurrent(extension,
				     SerialGrabReadFromIsr, oldIrql, 
				     (NTSTATUS)0x00000000L, & extension->CurrentReadIrp, &
				     extension->ReadQueue, 
				     & extension->ReadRequestIntervalTimer, 
				     & extension->ReadRequestTotalTimer,				     
				     SerialStartRead, /* Starter */				     
				     2, /* TRACER: StarterCode */
				     SerialGetNextIrp, 
				     0x00000008);
	}
      else
	{
	  // #line 1089
	  if(extension->CountOnLastRead == (LONG )(- 1))
	    {
	      // #line 1098
	      SerialTryToCompleteCurrent(extension,
					SerialGrabReadFromIsr, oldIrql,
					(NTSTATUS )0xC0000120L, 
					 &extension->CurrentReadIrp, 
					 &extension->ReadQueue, 
					 &extension->ReadRequestIntervalTimer,  
					 &extension->ReadRequestTotalTimer,
					 SerialStartRead,  /* Starter */
					 2, /* TRACER: StarterCode */
					 SerialGetNextIrp,
					 0x00000008);
	    }
	  else
	    {
	      // #line 1112
	      if(extension->CountOnLastRead || extension->ReadByIsr)
		{
		  // #line 1121
		  if(extension->ReadByIsr)
		    {
		      KeSynchronizeExecution(extension
					     ->Interrupt,
					     SerialUpdateReadByIsr,
					     extension);
		      // #line 1137
		      KeQuerySystemTime(&
					extension->LastReadTime)
			;
		      // #line 1141
		      SerialSetTimer(&
				     extension->ReadRequestIntervalTimer,
				     *
				     extension->IntervalTimeToUse,
				     &
				     extension->IntervalReadTimeoutDpc,
				     extension);
		      IoReleaseCancelSpinLock(oldIrql)
			;
		    }
		  else
		    {
		      // #line 1167
		      KeQuerySystemTime(&
					currentTime);
		      // #line 1171
		      if(currentTime.QuadPart - (extension->LastReadTime).QuadPart >=
			 (extension->IntervalTime).QuadPart)
			{
			  // #line 1174
			  SerialTryToCompleteCurrent(extension,			    
						     SerialGrabReadFromIsr,
						     oldIrql,
						     (NTSTATUS)0x00000102L, 
						     & extension->CurrentReadIrp,
						     & extension->ReadQueue,
						     & extension->ReadRequestIntervalTimer,
						     & extension->ReadRequestTotalTimer,
						     SerialStartRead, /* Starter */
						     2, /* TRACER: StarterCode */
						     SerialGetNextIrp, 
						     0x00000008);
			  
			}
		      else
			{
			  // #line 1190
			  SerialSetTimer(& extension->ReadRequestIntervalTimer,
					 * extension->IntervalTimeToUse,
					 & extension->IntervalReadTimeoutDpc,
					 extension);
			  // #line 1196
			  IoReleaseCancelSpinLock(oldIrql);
			}
		    }
		}
	      else
		{
		  // #line 1210
		  SerialSetTimer(& extension->ReadRequestIntervalTimer,
				 * extension->IntervalTimeToUse,
				 & extension->IntervalReadTimeoutDpc,
				 extension);
		  IoReleaseCancelSpinLock(oldIrql);
		}
	    }
	}
    }
  SerialDpcEpilogue(extension, Dpc);
}

// #line 1225
ULONG SerialGetCharsFromIntBuffer(PSERIAL_DEVICE_EXTENSION Extension )
{
	// #line 1261
	ULONG numberOfCharsToGet ;
	// #line 1269
	ULONG firstTryNumberToGet ;
	// #line 1271
	;
	// #line 1279
	numberOfCharsToGet = Extension->CharsInInterruptBuffer;
	// #line 1281
	if(numberOfCharsToGet > Extension->NumberNeededForRead)
	{
		numberOfCharsToGet = Extension->NumberNeededForRead;
	}
	// #line 1287
	if(numberOfCharsToGet)
	{
		// #line 1296
		firstTryNumberToGet = (ULONG )(Extension->LastCharSlot -
			Extension->FirstReadableChar) + 1;
		// #line 1299
		if(firstTryNumberToGet > numberOfCharsToGet)
		{
			// #line 1316
			memmove((PUCHAR
				)((Extension->CurrentReadIrp)->AssociatedIrp).SystemBuffer
				+
				(((((((Extension->CurrentReadIrp)->Tail).Overlay)
				.CurrentStackLocation)->Parameters).Read).Length
				- Extension->NumberNeededForRead),
				Extension->FirstReadableChar,
				numberOfCharsToGet);
			// #line 1318
			Extension->NumberNeededForRead -= numberOfCharsToGet;
			// #line 1331
			if(Extension->FirstReadableChar + (numberOfCharsToGet -
				1) == Extension->LastCharSlot)
			{
				Extension->FirstReadableChar =
					Extension->InterruptReadBuffer;
			}
			else
			{
				// #line 1338
				Extension->FirstReadableChar +=
					numberOfCharsToGet;
			}
		}
		else
		{
			// #line 1357
			memmove((PUCHAR
				)((Extension->CurrentReadIrp)->AssociatedIrp).SystemBuffer
				+
				(((((((Extension->CurrentReadIrp)->Tail).Overlay)
				.CurrentStackLocation)->Parameters).Read).Length
				- Extension->NumberNeededForRead),
				Extension->FirstReadableChar,
				firstTryNumberToGet);
			// #line 1359
			Extension->NumberNeededForRead -= firstTryNumberToGet;
			// #line 1375
			memmove((PUCHAR
				)((Extension->CurrentReadIrp)->AssociatedIrp).SystemBuffer
				+
				(((((((Extension->CurrentReadIrp)->Tail).Overlay)
				.CurrentStackLocation)->Parameters).Read).Length
				- Extension->NumberNeededForRead),
				Extension->InterruptReadBuffer,
				numberOfCharsToGet - firstTryNumberToGet);
			// #line 1377
			Extension->FirstReadableChar =
				Extension->InterruptReadBuffer +
				(numberOfCharsToGet - firstTryNumberToGet);
			// #line 1381
			Extension->NumberNeededForRead -= numberOfCharsToGet -
				firstTryNumberToGet;
		}
	}
	// #line 1388
	((Extension->CurrentReadIrp)->IoStatus).Information +=
		numberOfCharsToGet;
	// #line 1389
	return numberOfCharsToGet;
}

// #line 1393
BOOLEAN SerialUpdateInterruptBuffer(PVOID Context )
{
  PSERIAL_UPDATE_CHAR update;
  PSERIAL_DEVICE_EXTENSION extension;

  update = Context;
  extension = update->Extension;
  extension->CharsInInterruptBuffer -= update->CharsCopied;
  SerialHandleReducedIntBuffer(extension);
  return 0;
}

// #line 1444
BOOLEAN SerialUpdateAndSwitchToUser(PVOID Context )
{

  PSERIAL_UPDATE_CHAR updateChar;
  PSERIAL_DEVICE_EXTENSION extension;

  updateChar = Context;
  extension = updateChar->Extension;

  SerialUpdateInterruptBuffer(Context);
  updateChar->CharsCopied = SerialGetCharsFromIntBuffer(extension);
  SerialUpdateInterruptBuffer(Context);
  if(extension->NumberNeededForRead)
    {
      extension->CountOnLastRead = (LONG)((extension->CurrentReadIrp)->IoStatus).Information;
      extension->ReadByIsr = 0;
      extension->ReadBufferBase = ((extension->CurrentReadIrp)->AssociatedIrp).SystemBuffer;
      extension->CurrentCharSlot = extension->ReadBufferBase + 
	((extension->CurrentReadIrp)->IoStatus).Information;	  
      extension->LastCharSlot = extension->ReadBufferBase +
	(((((((extension->CurrentReadIrp)->Tail).Overlay).CurrentStackLocation)->Parameters).Read).Length - 1);
	  (PDRIVER_CANCEL )((PVOID )InterlockedExchange(
							(PLONG )((PVOID * )(& (extension->CurrentReadIrp)->CancelRoutine)), 
							(LONG)((PVOID )SerialCancelCurrentRead)));
	  /* 	  do */
/* 	    { */
/* 	      LONG _refType = 0x00000001; */
/* 	      PULONG_PTR _arg4 = (PVOID )(&((((((extension->CurrentReadIrp)->Tail).Overlay).CurrentStaackLocation)->Parameters).Others).Argument); */
/* 	      * _arg4 |= _refType; */
/* 	    } */
/* 	  while(0); */

/* 	  do */
/* 	    { */
/* 	      LONG _refType = 0x00000002; */
/* 	      PULONG_PTR _arg4 = (PVOID )(& */
/* 					  ((((((extension->CurrentReadIrp)->Tail).Overlay) */
/* 					     .CurrentStackLocation)->Parameters).Others).Argument4 */
/* 					  ); */
/* 	      * _arg4 |= _refType; */
/* 	    } */
/* 	  while(0); */

	  updateChar->Completed = 0;
	}
  else
    updateChar->Completed = 1;
  return 0;
}

// #line 1614
typedef struct _SERIAL_RESIZE_PARAMS {
	PSERIAL_DEVICE_EXTENSION Extension ;
	PUCHAR OldBuffer ;
	PUCHAR NewBuffer ;
	ULONG NewBufferSize ;
	ULONG NumberMoved ;
} SERIAL_RESIZE_PARAMS , *  PSERIAL_RESIZE_PARAMS ;

NTSTATUS SerialResizeBuffer(PSERIAL_DEVICE_EXTENSION Extension )
{
  PSERIAL_QUEUE_SIZE rs;
  PIO_STACK_LOCATION irpSp;
  PVOID newBuffer;
  
  rs= ((Extension->CurrentReadIrp)->AssociatedIrp).SystemBuffer;
  irpSp= (((Extension->CurrentReadIrp)->Tail).Overlay).CurrentStackLocation;
  newBuffer= ((irpSp->Parameters).DeviceIoControl).Type3InputBuffer;

  ((irpSp->Parameters).DeviceIoControl).Type3InputBuffer = (void *  )0;
  ((Extension->CurrentReadIrp)->IoStatus).Information = 0L;
  ((Extension->CurrentReadIrp)->IoStatus).Status = (NTSTATUS )0x00000000L;
  if(rs->InSize <= Extension->BufferSize)
    {
      ExFreePool(newBuffer);
    }
  else
	{
	  SERIAL_RESIZE_PARAMS rp ;
	  KIRQL controlIrql ;
	  
	  rp.Extension = Extension;
	  rp.OldBuffer = Extension->InterruptReadBuffer;
	  rp.NewBuffer = newBuffer;
	  rp.NewBufferSize = rs->InSize;
	  * & controlIrql = KfAcquireSpinLock(& Extension->ControlLock);
	  rp.NumberMoved = SerialMoveToNewIntBuffer(Extension, newBuffer);
	  KeSynchronizeExecution(Extension->Interrupt,
				 SerialUpdateAndSwitchToNew, & rp);
	  KfReleaseSpinLock(& Extension->ControlLock, controlIrql);
	  ExFreePool(rp.OldBuffer);
	}
  return (NTSTATUS )0x00000000L;
}

ULONG SerialMoveToNewIntBuffer(PSERIAL_DEVICE_EXTENSION Extension , PUCHAR NewBuffer )
{
  ULONG numberOfCharsMoved = Extension->CharsInInterruptBuffer;
  if(numberOfCharsMoved)
    {
      ULONG firstTryNumberToGet;

      firstTryNumberToGet = (ULONG )(Extension->LastCharSlot - Extension->FirstReadableChar) + 1;
      if(firstTryNumberToGet >= numberOfCharsMoved)
	{
	  // #line 1807
	  memmove(NewBuffer, Extension->FirstReadableChar,
		  numberOfCharsMoved);
	  if(Extension->FirstReadableChar + (numberOfCharsMoved - 1) ==
	     Extension->LastCharSlot)
	    {
	      Extension->FirstReadableChar =
		Extension->InterruptReadBuffer;
	    }
	  else
	    Extension->FirstReadableChar+= numberOfCharsMoved;
	}
      else
	{
	  memmove(NewBuffer, Extension->FirstReadableChar,
		  firstTryNumberToGet);
	  memmove(NewBuffer + firstTryNumberToGet,
		  Extension->InterruptReadBuffer,
		  numberOfCharsMoved - firstTryNumberToGet);
	  Extension->FirstReadableChar =
	    Extension->InterruptReadBuffer +
	    numberOfCharsMoved - firstTryNumberToGet;
	}
    }
  return numberOfCharsMoved;
}

// #line 1854
BOOLEAN SerialUpdateAndSwitchToNew(PVOID Context )
{
  PSERIAL_RESIZE_PARAMS params;
  PSERIAL_DEVICE_EXTENSION extension;
  ULONG tempCharsInInterruptBuffer;

  params = Context;
  params->Extension;
  extension->CharsInInterruptBuffer;

  extension->CharsInInterruptBuffer -= params->NumberMoved;
  if(extension->CharsInInterruptBuffer)
    {
      SerialMoveToNewIntBuffer(extension, params->NewBuffer +
			       params->NumberMoved);
    }
  extension->CharsInInterruptBuffer = tempCharsInInterruptBuffer;
  extension->LastCharSlot = params->NewBuffer + (params->NewBufferSize - 1);
  extension->FirstReadableChar = params->NewBuffer;
  extension->ReadBufferBase = params->NewBuffer;
  extension->InterruptReadBuffer = params->NewBuffer;
  extension->BufferSize = params->NewBufferSize;
  extension->CurrentCharSlot = extension->InterruptReadBuffer +
    extension->CharsInInterruptBuffer;
  (extension->HandFlow).XoffLimit = extension->BufferSize >> 3;
  (extension->HandFlow).XonLimit = extension->BufferSize >> 1;
  (extension->WmiCommData).XoffXmitThreshold =
    (extension->HandFlow).XoffLimit;
  (extension->WmiCommData).XonXmitThreshold =
    (extension->HandFlow).XonLimit;
  extension->BufferSizePt8 = 3 * (extension->BufferSize >> 2) +
    (extension->BufferSize >> 4);
  SerialHandleReducedIntBuffer(extension);
  return 0;
}

//LARGE_INTEGER SerialPhysicalZero___0 /* = {0} */;

void SerialKillAllReadsOrWrites(PDEVICE_OBJECT DeviceObject , PLIST_ENTRY QueueToClean ,
				PIRP *  CurrentOpIrp )
{
  KIRQL cancelIrql ;
  PDRIVER_CANCEL cancelRoutine ;
  PIRP currentLastIrp;

  IoAcquireCancelSpinLock(& cancelIrql);
  while(! (QueueToClean->Flink == QueueToClean))
    {
      currentLastIrp = (IRP *  )((PCHAR )QueueToClean->Blink -
				 (ULONG_PTR )(& ((((IRP * )0)->Tail).Overlay).ListEntry));
/*       { */
/* 	PLIST_ENTRY EX_Blink ; */
/* 	PLIST_ENTRY EX_Flink ; */
/* 	EX_Flink = (QueueToClean->Blink)->Flink; */
/* 	EX_Blink = (QueueToClean->Blink)->Blink; */
/* 	EX_Blink->Flink = EX_Flink; */
/* 	EX_Flink->Blink = EX_Blink; */
/*       } */
      cancelRoutine = currentLastIrp->CancelRoutine;
      currentLastIrp->CancelIrql = cancelIrql;
      currentLastIrp->CancelRoutine = (void *  )0;
      currentLastIrp->Cancel = 1;
      // ?? cancelRoutine(DeviceObject, currentLastIrp);
      IoAcquireCancelSpinLock(& cancelIrql);
    } // end of while

  if(* CurrentOpIrp)
    {
      cancelRoutine = (* CurrentOpIrp)->CancelRoutine;
      (* CurrentOpIrp)->Cancel = 1;
      if(cancelRoutine)
	{
	  (* CurrentOpIrp)->CancelRoutine = (void *  )0;
	  (* CurrentOpIrp)->CancelIrql = cancelIrql;
	  // ?? cancelRoutine(DeviceObject, * CurrentOpIrp);
	}
      else
	  IoReleaseCancelSpinLock(cancelIrql);
    }
  else    
      IoReleaseCancelSpinLock(cancelIrql);

  return;
}

// #line 167
void SerialGetNextIrp(PIRP *  CurrentOpIrp , 
		      PLIST_ENTRY QueueToProcess , 
		      PIRP *  NextIrp ,
		      BOOLEAN CompleteCurrent , 
		      PSERIAL_DEVICE_EXTENSION extension )
		      
{
  KIRQL oldIrql ;
  IoAcquireCancelSpinLock(& oldIrql);
  SerialGetNextIrpLocked(CurrentOpIrp, 
			 QueueToProcess, 
			 NextIrp,
			 CompleteCurrent, 
			 extension, 
			 oldIrql);
}

void SerialGetNextIrpLocked(PIRP *  CurrentOpIrp , 
			    PLIST_ENTRY QueueToProcess ,
			    PIRP *  NextIrp , 
			    BOOLEAN CompleteCurrent , 
			    PSERIAL_DEVICE_EXTENSION extension , 
			    KIRQL OldIrql )
{
  PIRP oldIrp ;
  PLIST_ENTRY EX_Blink ;
  PLIST_ENTRY EX_Flink ;
  PLIST_ENTRY headOfList ;
  
  oldIrp = * CurrentOpIrp;
  if(! (QueueToProcess->Flink == QueueToProcess))
    {
      headOfList = QueueToProcess->Flink;
      {
	{
	  EX_Flink = (QueueToProcess->Flink)->Flink;
	  EX_Blink = (QueueToProcess->Flink)->Blink;
	  EX_Blink->Flink = EX_Flink;
	  EX_Flink->Blink = EX_Blink;
	}
      }
      * CurrentOpIrp = (IRP *  )((PCHAR )headOfList - 
				 (ULONG_PTR )(& ((((IRP *  )0)->Tail).Overlay).ListEntry));
      (PDRIVER_CANCEL )((PVOID )InterlockedExchange((PLONG )(
			     (PVOID * )(& (* CurrentOpIrp)->CancelRoutine)), 
						    (LONG )((PVOID)((void *  )0))));  
    }
  else
    * CurrentOpIrp = (void *  )0;
  
  * NextIrp = * CurrentOpIrp;
  IoReleaseCancelSpinLock(OldIrql);

  if(CompleteCurrent)
    {
      if(1 /* if(OldIrp) */ /*TRACER: assume that oldIrp is not null */)
	{
	  IofCompleteRequest(oldIrp, 2);
	  SerialIRPEpilogue(extension);
	}
    }
}

// #line 339
void SerialTryToCompleteCurrent(PSERIAL_DEVICE_EXTENSION Extension ,
				PKSYNCHRONIZE_ROUTINE SynchRoutine , 
				KIRQL IrqlForRelease , 
				NTSTATUS StatusToUse ,
				PIRP *  CurrentOpIrp , 
				PLIST_ENTRY QueueToProcess ,
				PKTIMER IntervalTimer , 
				PKTIMER TotalTimer , 
				PSERIAL_START_ROUTINE Starter , 
				int StarterCode,
				PSERIAL_GET_NEXT_ROUTINE GetNextIrp , 
				LONG RefType )
{
  PIRP oldIrp;
  PIRP newIrp ;
  /* 	do */
  /* 	{ */
  /* 		LONG _refType = RefType; */
  /* 		PULONG_PTR _arg4 = (PVOID )(& ((((((* */
  /* 			CurrentOpIrp)->Tail).Overlay).CurrentStackLocation)->Parameters */
  /* 			).Others).Argument4); */
  /* 		* _arg4 &= /\*~*\/ _refType; */
  /* 	} */
  /* 	while(0); */

  if(SynchRoutine)
    {
      KeSynchronizeExecution(Extension->Interrupt, SynchRoutine,
			     Extension);
    }
  SerialRundownIrpRefs(CurrentOpIrp, IntervalTimer, TotalTimer,
		       Extension);
  if(! myArgument4 
     /* 
      TRACER to shadow (ULONG_PTR )((((((*CurrentOpIrp)->Tail).Overlay).CurrentStackLocation)->Parameters).Others).Argument4 
     */)
    {

      ((* CurrentOpIrp)->IoStatus).Status = StatusToUse;
      if(StatusToUse == (NTSTATUS )0xC0000120L)
	{
	  ((* CurrentOpIrp)->IoStatus).Information = 0;
	}
      if(GetNextIrp)
	{
	  IoReleaseCancelSpinLock(IrqlForRelease);
	  GetNextIrp(CurrentOpIrp, QueueToProcess, & newIrp, 1, Extension);
	  if(newIrp){	
	    /* 
	       TRACER: to simulate the call to Starter 
	     */
	    //  Starter(Extension);
	    switch(StarterCode)
	      {
	      case 1: /*SerialStartFlush*/
		SerialStartFlush(Extension);
		break;
	      case 2: /*SerialStartRead*/
		SerialStartRead(Extension);
		break;
	      case 3: /*SerialStartMask*/
		SerialStartMask(Extension);
		break;
	      case 4: /*SerialStartPurge*/
		SerialStartPurge(Extension);
		break;
	      case 5: /*SerialStartWrite*/
		SerialStartWrite(Extension);
		break;
	      default:
	      }
	  }
	}
      else
	{
	  oldIrp = * CurrentOpIrp;
	  * CurrentOpIrp = (void *  )0;
	  IoReleaseCancelSpinLock(IrqlForRelease);
	  IofCompleteRequest(oldIrp, 2);
	  SerialIRPEpilogue(Extension);
	}
    }
  else
      IoReleaseCancelSpinLock(IrqlForRelease);
}

// #line 493
void SerialRundownIrpRefs(PIRP *  CurrentOpIrp , PKTIMER IntervalTimer , PKTIMER TotalTimer ,
			  PSERIAL_DEVICE_EXTENSION PDevExt )
{
  BOOLEAN temp__1;

  if((* CurrentOpIrp)->CancelRoutine)
    {
/*       do */
/* 	{ */
/* 	  LONG _refType = 0x00000002; */
/* 	  PULONG_PTR _arg4 = (PVOID )(& ((((((* */
/* 					      CurrentOpIrp)->Tail).Overlay).CurrentStackLocation */
/* 					   )->Parameters).Others).Argument4); */
/* 	  * _arg4 &= /\*~*\/ _refType; */
/* 	} */
/*       while(0); */
      (PDRIVER_CANCEL )((PVOID )InterlockedExchange((PLONG )(
		  (PVOID *  )(& (* CurrentOpIrp)->CancelRoutine)), (LONG )((PVOID)((void *  )0))));
    }
  if(IntervalTimer)
    {
      temp__1 =  SerialCancelTimer(IntervalTimer, PDevExt);
      if(temp__1)
	{
/* 	  do */
/* 	    { */
/* 	      LONG _refType = 0x00000008; */
/* 	      PULONG_PTR _arg4 = (PVOID )(& ((((((* */
/* 						  CurrentOpIrp)->Tail).Overlay).CurrentStackLocation */
/* 					       )->Parameters).Others).Argument4); */
/* 	      * _arg4 &= /\*~*\/ _refType; */
/* 	    } */
/* 	  while(0); */
	}
    }
  if(TotalTimer)
    {
      temp__1=  SerialCancelTimer(TotalTimer, PDevExt);
      if(temp__1)
	{
/* 	  do */
/* 	    { */
/* 	      LONG _refType = 0x00000004; */
/* 	      PULONG_PTR _arg4 = (PVOID )(& ((((((* */
/* 					CurrentOpIrp)->Tail).Overlay).CurrentStackLocation */
/* 					       )->Parameters).Others).Argument4); */
/* 	      * _arg4 &= /\*~*\/ _refType; */
/* 	    } */
/* 	  while(0); */
	}
    }
}

NTSTATUS SerialStartOrQueue(PSERIAL_DEVICE_EXTENSION Extension , 
			    PIRP Irp ,
			    PLIST_ENTRY QueueToExamine , 
			    PIRP *  CurrentOpIrp ,
			    /* PSERIAL_START_ROUTINE */ int Starter )
{
  KIRQL oldIrql ;
  PIO_STACK_LOCATION irpSp;
  PLIST_ENTRY EX_Blink ;
  PLIST_ENTRY EX_ListHead ;

  IoAcquireCancelSpinLock(& oldIrql);

  if((((Irp->Tail).Overlay).CurrentStackLocation)->MajorFunction == 0x04)
    Extension->TotalCharsQueued += (((((Irp->Tail).Overlay).CurrentStackLocation)->Parameters).Write).Length;
  else
    {
  
      if((((Irp->Tail).Overlay).CurrentStackLocation)->MajorFunction == 0x0e &&
	 ((((((Irp->Tail).Overlay).CurrentStackLocation)->Parameters).DeviceIoControl).IoControlCode == 
	  (0x0000001b << 16 | 0 << 14 | 6 << 2 | 0) ||
	  (((((Irp->Tail).Overlay).CurrentStackLocation)->Parameters).DeviceIoControl).IoControlCode ==
	  (0x0000001b << 16 | 0 << 14 | 28 << 2 | 0)))
	  Extension->TotalCharsQueued++;
    }
  if(QueueToExamine->Flink == QueueToExamine && ! * CurrentOpIrp)
    {
      * CurrentOpIrp = Irp;
      IoReleaseCancelSpinLock(oldIrql);
      // TRACER return Starter(Extension);
      switch(Starter)
	{
	case 1: /*SerialStartFlush*/
	  return SerialStartFlush(Extension);
	  break;
	case 2: /*SerialStartRead*/
	  return SerialStartRead(Extension);
	  break;
	case 3: /*SerialStartMask*/
	  return SerialStartMask(Extension);
	  break;
	case 4: /*SerialStartPurge*/
	  return SerialStartPurge(Extension);
	  break;
	case 5: /*SerialStartWrite*/
	  return SerialStartWrite(Extension);
	  break;
	default:
	  return -1;
	}
    }
  else
    {
      if(Irp->Cancel)
	{
	  irpSp  = ((Irp->Tail).Overlay).CurrentStackLocation;
	  IoReleaseCancelSpinLock(oldIrql);
	  if(((irpSp->Parameters).DeviceIoControl).IoControlCode  ==
	     (0x0000001b << 16 | 0 << 14 | 2 << 2 | 0))
	    {
	      ExFreePool(((irpSp->Parameters).DeviceIoControl).Type3InputBuffer); 
	      ((irpSp->Parameters).DeviceIoControl).Type3InputBuffer = (void *  )0;
	    }
	  (Irp->IoStatus).Status = (NTSTATUS )0xC0000120L;
	  IofCompleteRequest(Irp, 0);
	  SerialIRPEpilogue(Extension);
	  return (NTSTATUS )0xC0000120L;
	}
      else
	{
	  (Irp->IoStatus).Status = (NTSTATUS )0x00000103L;
	  // TRACER
	  myStatus = (NTSTATUS )0x00000103L;
	  // TRACER
	  _ABORT(pending != 0);
	  pending = 1;

	  // BLAST
	  /* if(pending == 0) */
	  /*   pending = 1; */
	  /* else */
	  /*   errorFn(); */

	  (((Irp->Tail).Overlay).CurrentStackLocation)->Control |= 0x01;
	  {
	    EX_ListHead = QueueToExamine;
	    EX_Blink = EX_ListHead->Blink;
	    (& ((Irp->Tail).Overlay).ListEntry)->Flink = EX_ListHead;
	    (& ((Irp->Tail).Overlay).ListEntry)->Blink = EX_Blink;
	    EX_Blink->Flink = & ((Irp->Tail).Overlay).ListEntry;
	    EX_ListHead->Blink = & ((Irp->Tail).Overlay).ListEntry;
	      
	  }
	  (PDRIVER_CANCEL )((PVOID )InterlockedExchange((PLONG)((PVOID *  )(& Irp->CancelRoutine)),
							(LONG)((PVOID )SerialCancelQueued)));
	  IoReleaseCancelSpinLock(oldIrql);
	  return (NTSTATUS )0x00000103L;
	}
    }
}

// #line 782
void SerialCancelQueued(PDEVICE_OBJECT DeviceObject , PIRP Irp )
{
  PLIST_ENTRY EX_Blink ;
  PLIST_ENTRY EX_Flink ;
  PSERIAL_DEVICE_EXTENSION extension;
  PIO_STACK_LOCATION irpSp;

  extension = DeviceObject->DeviceExtension;
  irpSp = ((Irp->Tail).Overlay).CurrentStackLocation;
  (Irp->IoStatus).Status = (NTSTATUS )0xC0000120L;
  (Irp->IoStatus).Information = 0;
  {
    // #line 817
    EX_Flink = (& ((Irp->Tail).Overlay).ListEntry)->Flink;
    // #line 817
    EX_Blink = (& ((Irp->Tail).Overlay).ListEntry)->Blink;
    // #line 817
    EX_Blink->Flink = EX_Flink;
    // #line 817
    EX_Flink->Blink = EX_Blink;
  }
  if(irpSp->MajorFunction == 0x04)
    {
      extension->TotalCharsQueued -=
	((irpSp->Parameters).Write).Length;
    }
  else
    {
      // #line 828
      if(irpSp->MajorFunction == 0x0e)
	{
	  // #line 837
	  if(((irpSp->Parameters).DeviceIoControl).IoControlCode
	     == (0x0000001b << 16 | 0 << 14 | 6 << 2 | 0) ||
	     ((irpSp->Parameters).DeviceIoControl).IoControlCode
	     == (0x0000001b << 16 | 0 << 14 | 28 << 2 | 0))
	    {
	      extension->TotalCharsQueued--;
	    }
	  else
	    {
	      if(((irpSp->Parameters).DeviceIoControl).IoControlCode
		 == (0x0000001b << 16 | 0 << 14 | 2 << 2
		     | 0))
		{
		  ExFreePool(((irpSp->Parameters).DeviceIoControl
			      ).Type3InputBuffer);
		  ((irpSp->Parameters).DeviceIoControl).Type3InputBuffer
		    = (void *  )0;
		}
	    }
	}
    }
  IoReleaseCancelSpinLock(Irp->CancelIrql);
  {
    IofCompleteRequest(Irp, 2);
    SerialIRPEpilogue(extension);
  }
}

NTSTATUS SerialCompleteIfError(PDEVICE_OBJECT DeviceObject , PIRP Irp )
{

  PSERIAL_DEVICE_EXTENSION extension;
  NTSTATUS status;
  PIO_STACK_LOCATION irpSp ;

  extension = DeviceObject->DeviceExtension;
  status = (NTSTATUS )0x00000000L;
  
  if((extension->HandFlow).ControlHandShake & (ULONG )0x80000000 &&
     extension->ErrorWord)
    {
      irpSp = ((Irp->Tail).Overlay).CurrentStackLocation;
      if(irpSp->MajorFunction != 0x0e ||
	 ((irpSp->Parameters).DeviceIoControl).IoControlCode !=
	 (0x0000001b << 16 | 0 << 14 | 27 << 2 | 0))
	{
	  status = (NTSTATUS )0xC0000120L;
	  (Irp->IoStatus).Status = (NTSTATUS )0xC0000120L;
	  (Irp->IoStatus).Information = 0;
	  IofCompleteRequest(Irp, 0);
	  SerialIRPEpilogue(extension);
	}
    }
  return status;
}

void SerialFilterCancelQueued(PDEVICE_OBJECT PDevObj , PIRP PIrp )
{
  PSERIAL_DEVICE_EXTENSION pDevExt = PDevObj->DeviceExtension;
  PIO_STACK_LOCATION pIrpSp = ((PIrp->Tail).Overlay).CurrentStackLocation;
  (PIrp->IoStatus).Status = (NTSTATUS )0xC0000120L;
  (PIrp->IoStatus).Information = 0;
  {
    PLIST_ENTRY EX_Blink ;
    PLIST_ENTRY EX_Flink ;
    EX_Flink = (& ((PIrp->Tail).Overlay).ListEntry)->Flink;
    EX_Blink = (& ((PIrp->Tail).Overlay).ListEntry)->Blink;
    EX_Blink->Flink = EX_Flink;
    EX_Flink->Blink = EX_Blink;
  }
  IoReleaseCancelSpinLock(PIrp->CancelIrql);
}

void SerialKillAllStalled(PDEVICE_OBJECT PDevObj )
{
  KIRQL cancelIrql ;
  PDRIVER_CANCEL cancelRoutine ;
  PSERIAL_DEVICE_EXTENSION pDevExt;
  PIRP currentLastIrp;
  
  pDevExt = PDevObj->DeviceExtension;
  IoAcquireCancelSpinLock(& cancelIrql);
  while(! ((& pDevExt->StalledIrpQueue)->Flink == & pDevExt->StalledIrpQueue))
    {
      currentLastIrp = (IRP *  )((PCHAR)(pDevExt->StalledIrpQueue).Blink -
				 (ULONG_PTR )(& ((((IRP *  )0)->Tail).Overlay).ListEntry));
					      
/*       { */
/* 	PLIST_ENTRY EX_Blink ; */
/* 	PLIST_ENTRY EX_Flink ; */
/* 	EX_Flink = ((pDevExt->StalledIrpQueue).Blink)->Flink; */
/* 	EX_Blink = ((pDevExt->StalledIrpQueue).Blink)->Blink; */
/* 	EX_Blink->Flink = EX_Flink; */
/* 	EX_Flink->Blink = EX_Blink; */
/*       } */
      cancelRoutine = currentLastIrp->CancelRoutine;
      currentLastIrp->CancelIrql = cancelIrql;
      currentLastIrp->CancelRoutine = (void *  )0;
      currentLastIrp->Cancel = 1;
      // ?? cancelRoutine(PDevObj, currentLastIrp);
      IoAcquireCancelSpinLock(& cancelIrql);
    } // end of while
  IoReleaseCancelSpinLock(cancelIrql);
  return;
}

NTSTATUS SerialFilterIrps(PIRP PIrp , PSERIAL_DEVICE_EXTENSION PDevExt )
{
  PIO_STACK_LOCATION pIrpStack ;
  KIRQL oldIrqlFlags ;
  KIRQL oldIrql ;


  pIrpStack = ((PIrp->Tail).Overlay).CurrentStackLocation;
  * & oldIrqlFlags = KfAcquireSpinLock(& PDevExt->FlagsLock);
  if(PDevExt->DevicePNPAccept == 0x0L && (PDevExt->Flags & 0x4L) == 0)
    {
      KfReleaseSpinLock(& PDevExt->FlagsLock, oldIrqlFlags);
      return (NTSTATUS )0x00000000L;
    }
  if(PDevExt->DevicePNPAccept & 0x1L || PDevExt->Flags & 0x4L ||
     PDevExt->DevicePNPAccept & 0x8L)
    {
      KfReleaseSpinLock(& PDevExt->FlagsLock, oldIrqlFlags);
      if(pIrpStack->MajorFunction == 0x1b)
	return (NTSTATUS )0x00000000L;

      (PIrp->IoStatus).Status = (NTSTATUS )0xC0000056L;
      return (NTSTATUS )0xC0000056L;
    }
  if(PDevExt->DevicePNPAccept & 0x2L)
    {
      KfReleaseSpinLock(& PDevExt->FlagsLock, oldIrqlFlags);
      if(pIrpStack->MajorFunction == 0x1b)
	  return (NTSTATUS )0x00000000L;

      IoAcquireCancelSpinLock(& oldIrql);
      if(PIrp->Cancel)
	{
	  IoReleaseCancelSpinLock(oldIrql);
	  (PIrp->IoStatus).Status = (NTSTATUS )0xC0000120L;
	  return (NTSTATUS )0xC0000120L;
	}
      else
	{
	  (PIrp->IoStatus).Status = (NTSTATUS )0x00000103L;
	  // TRACER
	  _ABORT(pending != 0);
	  pending = 1;

	  // BLAST
/* 	  if(pending == 0) */
/* 	    pending = 1; */
/* 	  else */
/* 	    errorFn(); */

	  (((PIrp->Tail).Overlay).CurrentStackLocation)->Control |= 0x01;
	  {
	    PLIST_ENTRY EX_Blink ;
	    PLIST_ENTRY EX_ListHead ;
	    EX_ListHead = & PDevExt->StalledIrpQueue;
	    EX_Blink = EX_ListHead->Blink;
	    (& ((PIrp->Tail).Overlay).ListEntry)->Flink = EX_ListHead;
	    (& ((PIrp->Tail).Overlay).ListEntry)->Blink = EX_Blink;
	    EX_Blink->Flink = &  ((PIrp->Tail).Overlay).ListEntry;
	    EX_ListHead->Blink = & ((PIrp->Tail).Overlay).ListEntry;
	  }
	  (PDRIVER_CANCEL )((PVOID )InterlockedExchange((PLONG)((PVOID *  )(& PIrp->CancelRoutine)), 
							(LONG)((PVOID )SerialFilterCancelQueued)));
	  IoReleaseCancelSpinLock(oldIrql);
	  return (NTSTATUS )0x00000103L;
	}
    }
  KfReleaseSpinLock(& PDevExt->FlagsLock, oldIrqlFlags);
  return (NTSTATUS )0x00000000L;
}


void SerialUnstallIrps(PSERIAL_DEVICE_EXTENSION PDevExt )
{
  PLIST_ENTRY pIrpLink ;
  PIRP pIrp ;
  PIO_STACK_LOCATION pIrpStack ;
  PDEVICE_OBJECT pDevObj ;
  PDRIVER_OBJECT pDrvObj ;
  KIRQL oldIrql ;
  PLIST_ENTRY EX_Blink ;
  PLIST_ENTRY EX_Flink ;
  
  IoAcquireCancelSpinLock(& oldIrql);
  pIrpLink = (PDevExt->StalledIrpQueue).Flink;
  while(pIrpLink != (& PDevExt->StalledIrpQueue))
    {
      pIrp = (IRP *  )((PCHAR )pIrpLink - (ULONG_PTR )(& ((((IRP * )0)->Tail).Overlay).ListEntry));
      EX_Flink = (& ((pIrp->Tail).Overlay).ListEntry)->Flink;
      EX_Blink = (& ((pIrp->Tail).Overlay).ListEntry)->Blink;
      EX_Blink->Flink = EX_Flink;
      EX_Flink->Blink = EX_Blink;
      pIrpStack = ((pIrp->Tail).Overlay).CurrentStackLocation;
      pDevObj = pIrpStack->DeviceObject;
      pDrvObj = pDevObj->DriverObject;
      (PDRIVER_CANCEL )((PVOID )InterlockedExchange((PLONG )((PVOID * )(& pIrp->CancelRoutine)), 
						    (LONG )((PVOID )((void * )0))));
      IoReleaseCancelSpinLock(oldIrql);
      // TRACER: Compiler cannot compile this properly
      //      ((pDrvObj->MajorFunction)[pIrpStack->MajorFunction])(pDevObj,pIrp);
      IoAcquireCancelSpinLock(& oldIrql);
      pIrpLink = (PDevExt->StalledIrpQueue).Flink;
    }
  IoReleaseCancelSpinLock(oldIrql);
  return;
}


NTSTATUS SerialIRPPrologue(PIRP PIrp , PSERIAL_DEVICE_EXTENSION PDevExt )
{
  InterlockedIncrement(& PDevExt->PendingIRPCnt);
  return SerialFilterIrps(PIrp, PDevExt);
}

void SerialIRPEpilogue(PSERIAL_DEVICE_EXTENSION PDevExt )
{
  LONG pendingCnt ;
  pendingCnt = InterlockedDecrement(& PDevExt->PendingIRPCnt);
  if(pendingCnt == 0)
    KeSetEvent(& PDevExt->PendingIRPEvent, 0, 0);
}

// #line 1214
BOOLEAN SerialInsertQueueDpc(PRKDPC PDpc , PVOID Sarg1 , PVOID Sarg2 ,
	PSERIAL_DEVICE_EXTENSION PDevExt )
{
  BOOLEAN queued ;
  ULONG pendingCnt ;
  
  InterlockedIncrement(& PDevExt->DpcCount);
  queued = KeInsertQueueDpc(PDpc, Sarg1, Sarg2);
  if(! queued)
    {
      pendingCnt = InterlockedDecrement(& PDevExt->DpcCount);
      if(pendingCnt == 0)
	{
	  KeSetEvent(& PDevExt->PendingIRPEvent, 0, 0);
	}
    }
  return queued;
}

// #line 1274
BOOLEAN SerialSetTimer(PKTIMER Timer , LARGE_INTEGER DueTime , PKDPC Dpc ,
		       PSERIAL_DEVICE_EXTENSION PDevExt )
{
	// #line 1300
	BOOLEAN set ;
	// #line 1302
	InterlockedIncrement(& PDevExt->DpcCount);
	;
	// #line 1305
	set = KeSetTimer(Timer, DueTime, Dpc);
	// #line 1307
	if(set)
	{
		// #line 1308
		InterlockedDecrement(& PDevExt->DpcCount);
	}
	// #line 1327
	return set;
}

// #line 1331
BOOLEAN SerialCancelTimer(PKTIMER Timer , PSERIAL_DEVICE_EXTENSION PDevExt )
{
  BOOLEAN cancelled ;
  cancelled = KeCancelTimer(Timer);
  if(cancelled)
    {
		SerialDpcEpilogue(PDevExt, Timer->Dpc);
    }
  return cancelled;
}

// #line 1364
void SerialDpcEpilogue(PSERIAL_DEVICE_EXTENSION PDevExt , PKDPC PDpc )
{
  LONG pendingCnt ;
  //PDpc;
  pendingCnt = InterlockedDecrement(& PDevExt->DpcCount);
  if(pendingCnt == 0)
    {
      KeSetEvent(& PDevExt->PendingDpcEvent, 0, 0);
    }
}

// #line 1418
void SerialUnlockPages(PKDPC PDpc , PVOID PDeferredContext , PVOID PSysContext1,
		       PVOID PSysContext2 )
{
  PSERIAL_DEVICE_EXTENSION pDevExt = (PSERIAL_DEVICE_EXTENSION)PDeferredContext;
  
  KeSetEvent(& pDevExt->PendingDpcEvent, 0, 0);
}

NTSTATUS SerialIoCallDriver(PSERIAL_DEVICE_EXTENSION PDevExt , PDEVICE_OBJECT PDevObj ,
			    PIRP PIrp )
{
  NTSTATUS status ;
  status = IofCallDriver(PDevObj, PIrp);
  SerialIRPEpilogue(PDevExt);
  return status;
}

NTSTATUS SerialPoCallDriver(PSERIAL_DEVICE_EXTENSION PDevExt , PDEVICE_OBJECT PDevObj ,
			    PIRP PIrp )
{
  NTSTATUS status ;
  status = PoCallDriver(PDevObj, PIrp);
  SerialIRPEpilogue(PDevExt);
  return status;
}

void SerialLogError(PDRIVER_OBJECT DriverObject , PDEVICE_OBJECT DeviceObject ,
		    LARGE_INTEGER P1 , LARGE_INTEGER P2 , ULONG SequenceNumber ,
		    UCHAR MajorFunctionCode , UCHAR RetryCount , ULONG UniqueErrorValue ,
		    NTSTATUS FinalStatus ,
		    NTSTATUS SpecificIOStatus , ULONG LengthOfInsert1 ,
		    PWCHAR Insert1 , ULONG LengthOfInsert2 , PWCHAR Insert2 )
{
/*   PIO_ERROR_LOG_PACKET errorLogEntry ; */
/*   PVOID objectToUse ; */
/*   SHORT dumpToAllocate; */
/*   PUCHAR ptrToFirstInsert ; */
/*   PUCHAR ptrToSecondInsert ; */
/*   SERIAL_MEM_COMPARES temp__1; */

/*   dumpToAllocate = 0; */
/*   if(Insert1 == (void *  )0) */
/*       LengthOfInsert1 = 0; */
/*   if(Insert2 == (void *  )0) */
/*     LengthOfInsert2 = 0; */

/*   if((CHAR *  )DeviceObject != (CHAR *  )((void *  )0)) */
/*       objectToUse = DeviceObject; */
/*   else */
/*     objectToUse = DriverObject; */

/*   temp__1 = SerialMemCompare(P1, (ULONG )1, SerialPhysicalZero___0, (ULONG )1); */
/*   if( temp__1 != AddressesAreEqual)      */
/*       dumpToAllocate = (SHORT )sizeof(LARGE_INTEGER ); */

/*   temp__1 = SerialMemCompare(P2, (ULONG )1, SerialPhysicalZero___0, (ULONG )1); */
/*   if( temp__1 != AddressesAreEqual) */
/*     dumpToAllocate += (SHORT )sizeof(LARGE_INTEGER ); */
  
/*   errorLogEntry = IoAllocateErrorLogEntry(objectToUse,  */
/* 					  (UCHAR)(sizeof(IO_ERROR_LOG_PACKET ) + dumpToAllocate + */
/* 						  LengthOfInsert1 + LengthOfInsert2)); */
/*   if(errorLogEntry != (void *  )0) */
/*     { */
/*       errorLogEntry->ErrorCode = SpecificIOStatus; */
/*       errorLogEntry->SequenceNumber = SequenceNumber; */
/*       errorLogEntry->MajorFunctionCode = MajorFunctionCode; */
/*       errorLogEntry->RetryCount = RetryCount; */
/*       errorLogEntry->UniqueErrorValue = UniqueErrorValue; */
/*       errorLogEntry->FinalStatus = FinalStatus; */
/*       errorLogEntry->DumpDataSize = dumpToAllocate; */
/*       if(dumpToAllocate) */
/* 	{ */
/* 	  memcpy(& (errorLogEntry->DumpData)[0], & P1, sizeof(LARGE_INTEGER )); */
/* 	  if(dumpToAllocate > sizeof(LARGE_INTEGER )) */
/* 	    { */
/* 	      memcpy((PUCHAR )(& (errorLogEntry->DumpData)[0]) + sizeof(LARGE_INTEGER ), & P2, */
/* 		     sizeof(LARGE_INTEGER )); */
/* 	      ptrToFirstInsert = (PUCHAR )(& (errorLogEntry->DumpData)[0]) + 2 * sizeof(LARGE_INTEGER ); */
/* 	    } */
/* 	  else */
/* 	    ptrToFirstInsert = (PUCHAR )(& (errorLogEntry->DumpData)[0]) + sizeof(LARGE_INTEGER ); */
/* 	} */
/*       else */
/* 	  ptrToFirstInsert = (PUCHAR )(&(errorLogEntry->DumpData)[0]); */

/*       ptrToSecondInsert = ptrToFirstInsert + LengthOfInsert1; */
/*       if(LengthOfInsert1) */
/* 	{ */
/* 	  errorLogEntry->NumberOfStrings = 1; */
/* 	  errorLogEntry->StringOffset = (USHORT )(ptrToFirstInsert - (PUCHAR )errorLogEntry); */
/* 	  memcpy(ptrToFirstInsert, Insert1, LengthOfInsert1); */
/* 	  if(LengthOfInsert2) */
/* 	    { */
/* 	      errorLogEntry->NumberOfStrings = 2; */
/* 	      memcpy(ptrToSecondInsert, Insert2, LengthOfInsert2); */
/* 	    } */
/* 	} */
/*       IoWriteErrorLogEntry(errorLogEntry); */
/*     } */
}

void SerialMarkHardwareBroken(PSERIAL_DEVICE_EXTENSION PDevExt )
{
  SerialSetDeviceFlags(PDevExt, & PDevExt->Flags, 0x4L, 1);
  SerialLogError(PDevExt->DriverObject, (void *  )0,
		 SerialPhysicalZero___0, 
		 SerialPhysicalZero___0, 0, 0, 0, 88,
		 (NTSTATUS )0x00000000L, (NTSTATUS )0xC006002DL,
		 (PDevExt->DeviceName).Length + sizeof(WCHAR ),
		 (PDevExt->DeviceName).Buffer, 0, (void *  )0);
  IoInvalidateDeviceState(PDevExt->Pdo);
}

void SerialSetDeviceFlags(PSERIAL_DEVICE_EXTENSION PDevExt , PULONG PFlags ,
			  ULONG Value , BOOLEAN Set )
{
  KIRQL oldIrql ;

  * & oldIrql = KfAcquireSpinLock(& PDevExt->FlagsLock);
  if(Set)
    {
      * PFlags |= Value;
    }
  else
    {
      * PFlags &= /*~*/ Value;
    }
  KfReleaseSpinLock(& PDevExt->FlagsLock, oldIrql);
  return;
}

NTSTATUS SerialStartMask(PSERIAL_DEVICE_EXTENSION Extension )
{
  PIO_STACK_LOCATION IrpSp ;
  PIRP NewIrp ;
  BOOLEAN SetFirstStatus;
  NTSTATUS FirstStatus ;
  KIRQL OldIrql ;

  SetFirstStatus = 0;
  /*
     TRACER: we need  MINMAX here!
  */

  /*  do */
    {
      IrpSp = (((Extension->CurrentMaskIrp)->Tail).Overlay).CurrentStackLocation;
	
      if(((IrpSp->Parameters).DeviceIoControl).IoControlCode ==
	 (0x0000001b << 16 | 0 << 14 | 17 << 2 | 0))
	{
	  KeSynchronizeExecution(Extension->Interrupt,
				 (PKSYNCHRONIZE_ROUTINE) 0 /*SerialFinishOldWait*/, Extension);
	  ((Extension->CurrentMaskIrp)->IoStatus).Status =
	    (NTSTATUS )0x00000000L;
	  if(! SetFirstStatus)
	    {
	      FirstStatus = (NTSTATUS )0x00000000L;
	      SetFirstStatus = 1;
	    }
	  // #line 161
	  SerialGetNextIrp(& Extension->CurrentMaskIrp, &
			   Extension->MaskQueue, & NewIrp, 1, Extension);
	}
      else
	{
	  if(! Extension->IsrWaitMask ||Extension->CurrentWaitIrp)
	    {
	      ((Extension->CurrentMaskIrp)->IoStatus).Status = (NTSTATUS )0xC000000DL;
	      if(! SetFirstStatus)
		{
		  FirstStatus = (NTSTATUS )0xC000000DL;
		  SetFirstStatus = 1;
		}
	      SerialGetNextIrp(& Extension->CurrentMaskIrp, &
			       Extension->MaskQueue, & NewIrp, 1,
			       Extension);
	    }
	  else
	    {
	      IoAcquireCancelSpinLock(& OldIrql);
	      if((Extension->CurrentMaskIrp)->Cancel)
		{
		  IoReleaseCancelSpinLock(OldIrql);
		  ((Extension->CurrentMaskIrp)->IoStatus).Status
		    = (NTSTATUS )0xC0000120L;
		  if(! SetFirstStatus)
		    {
		      FirstStatus = (NTSTATUS)0xC0000120L;
		      SetFirstStatus = 1;
		    }
		  SerialGetNextIrp(&
				   Extension->CurrentMaskIrp, &
				   Extension->MaskQueue, & NewIrp,
				   1, Extension);
		}
	      else
		{
		  if(! SetFirstStatus)
		    {
		      FirstStatus = (NTSTATUS)0x00000103L;
		      SetFirstStatus = 1;

		      // TRACER
		      _ABORT(pending != 0);
		      pending=1;

		      // BLAST
/* 		      if(pending == 0) */
/* 			pending = 1; */
/* 		      else */
/* 			errorFn(); */

		      ((((Extension->CurrentMaskIrp)->Tail).Overlay).CurrentStackLocation )->Control |= 0x01;
		       
		    }
		  Extension->CurrentWaitIrp = Extension->CurrentMaskIrp;
		  {
		    ((((((Extension->CurrentWaitIrp)->Tail).Overlay).CurrentStackLocation)->Parameters).Others).Argument4 
		      = (void *  )0;
		    /* TRACER to shadow */
		    myArgument4 = (void *  )0;

		  }
		  (PDRIVER_CANCEL )((PVOID )InterlockedExchange((PLONG)((PVOID *  )(
				 &(Extension->CurrentWaitIrp)->CancelRoutine)),
				 (LONG )((PVOID)SerialCancelWait)));
									 
/* 		  do */
/* 		    { */
/* 		      LONG _refType = 0x00000002; */
/* 		      PULONG_PTR _arg4 = (PVOID )(& */
/* 						  ((((((Extension->CurrentWaitIrp */
/* 							)->Tail).Overlay).CurrentStackLocation */
/* 						     )->Parameters).Others).Argument4 */
/* 						  ); */
/* 		      * _arg4 |= _refType; */
/* 		    } */
/* 		  while(0); */
		  KeSynchronizeExecution(Extension->Interrupt, 
					 (PKSYNCHRONIZE_ROUTINE) 0/*SerialGiveWaitToIsr*/,
					 Extension);
		  Extension->CurrentMaskIrp = (void *  )0;
		  SerialGetNextIrpLocked(&
					 Extension->CurrentMaskIrp, &
					 Extension->MaskQueue, & NewIrp,
					 0, Extension, OldIrql);
		}
	    }
	}
    }/*  while(NewIrp); */
  
  return FirstStatus;
}

// #line 376
BOOLEAN SerialGrabWaitFromIsr(PVOID Context )
{
  PSERIAL_DEVICE_EXTENSION Extension;
  Extension = Context;
  if(Extension->IrpMaskLocation)
    {
      * Extension->IrpMaskLocation = 0;
      Extension->IrpMaskLocation = (void *  )0;
      ((Extension->CurrentWaitIrp)->IoStatus).Information = sizeof(ULONG );
/*       do */
/* 	{ */
/* 	  LONG _refType = 0x00000001; */
/* 	  PULONG_PTR _arg4 = (PVOID )(& */
/* 				      ((((((Extension->CurrentWaitIrp)->Tail).Overlay) */
/* 				.CurrentStackLocation)->Parameters).Others).Argument4 */
/* 				      ); */
/* 	  * _arg4 &= /\*~*\/ _refType; */
/* 	} */
/*       while(0); */
    }
  return 0;
}

BOOLEAN SerialGiveWaitToIsr(PVOID Context )
{
  PSERIAL_DEVICE_EXTENSION Extension;
  Extension = Context;
/*   do */
/*     { */
/*       LONG _refType = 0x00000001; */
/*       PULONG_PTR _arg4 = (PVOID )(& */
/* 				  ((((((Extension->CurrentWaitIrp)->Tail).Overlay).CurrentStackLocation */
/* 				     )->Parameters).Others).Argument4); */
/*       * _arg4 |= _refType; */
/*     } */
/*   while(0); */
  if(! Extension->HistoryMask)
    {
      Extension->EmptiedTransmit = 0;
      Extension->IrpMaskLocation =
	((Extension->CurrentWaitIrp)->AssociatedIrp).SystemBuffer;
    }
  else
    {
      * (ULONG * )((Extension->CurrentWaitIrp)->AssociatedIrp).SystemBuffer =
	Extension->HistoryMask;
      Extension->HistoryMask = 0;
      ((Extension->CurrentWaitIrp)->IoStatus).Information = sizeof(ULONG );
      ((Extension->CurrentWaitIrp)->IoStatus).Status = (NTSTATUS)0x00000000L;
      SerialInsertQueueDpc(& Extension->CommWaitDpc, (void *  )0,
			   (void *  )0, Extension);
    }
  return 0;
}

BOOLEAN SerialFinishOldWait(PVOID Context )
{
  PSERIAL_DEVICE_EXTENSION Extension;
  Extension = Context;
  if(Extension->IrpMaskLocation)
    {
      * Extension->IrpMaskLocation = 0;
      Extension->IrpMaskLocation = (void *  )0;
      ((Extension->CurrentWaitIrp)->IoStatus).Information =sizeof(ULONG );
      SerialInsertQueueDpc(& Extension->CommWaitDpc, (void *  )0,
			   (void *  )0, Extension);
    }
  Extension->HistoryMask &= * (ULONG * )((Extension->CurrentMaskIrp)->AssociatedIrp).SystemBuffer;
  Extension->IsrWaitMask = * (ULONG * )((Extension->CurrentMaskIrp)->AssociatedIrp).SystemBuffer;
  return 0;
}

void SerialCancelWait(PDEVICE_OBJECT DeviceObject , PIRP Irp )
{
  PSERIAL_DEVICE_EXTENSION Extension;
  Extension = DeviceObject->DeviceExtension;
  SerialTryToCompleteCurrent(Extension, SerialGrabWaitFromIsr,
			     Irp->CancelIrql, (NTSTATUS )0xC0000120L, &
			     Extension->CurrentWaitIrp, (void *  )0, (void *  )0, 
			     (void * )0, 
			     (void *  )0, /* Starter */
			     0, /* TRACER: StarterCode */
			     (void *  )0, 
			     0x00000002);
  return;			      
}

// #line 697
void SerialCompleteWait(PKDPC Dpc , PVOID DeferredContext , PVOID SystemContext1,
			PVOID SystemContext2 )
{
  PSERIAL_DEVICE_EXTENSION Extension;  
  KIRQL OldIrql ;

  Extension = DeferredContext;
  IoAcquireCancelSpinLock(& OldIrql);
  SerialTryToCompleteCurrent(Extension, (void *  )0, OldIrql, 
			     (NTSTATUS)0x00000000L, & Extension->CurrentWaitIrp, (void *  )0, 
			     (void * )0, (void *  )0, 
			     (void *  )0, /*Starter*/
			     0, /* TRACER: StarterCode */
			     (void *  )0, 
			     0x00000001);
  SerialDpcEpilogue(Extension, Dpc);
}

NTSTATUS SerialWrite(PDEVICE_OBJECT DeviceObject , PIRP Irp )
{
  PSERIAL_DEVICE_EXTENSION Extension;
  NTSTATUS status ;
  NTSTATUS temp__1;
  
  Extension = DeviceObject->DeviceExtension;
  status = SerialIRPPrologue(Irp, Extension);

   if(status != (NTSTATUS )0x00000000L)
     {
       IofCompleteRequest(Irp, 0);
       SerialIRPEpilogue(Extension);
       return status;
     }
   temp__1 = SerialCompleteIfError(DeviceObject, Irp);
   if(temp__1 != (NTSTATUS )0x00000000L)
       return (NTSTATUS )0xC0000120L;
   (Irp->IoStatus).Information = 0L;
   if((((((Irp->Tail).Overlay).CurrentStackLocation)->Parameters).Write).Length)
     {
       return SerialStartOrQueue(Extension, Irp, 
				 & Extension->WriteQueue, 
				 & Extension->CurrentWriteIrp,
				 5 /*SerialStartWrite*/);
     }
   else
     {
       (Irp->IoStatus).Status = (NTSTATUS )0x00000000L;
       IofCompleteRequest(Irp, 0);
       SerialIRPEpilogue(Extension);
       return (NTSTATUS )0x00000000L;
     }
}

NTSTATUS SerialStartWrite(PSERIAL_DEVICE_EXTENSION Extension )
{
  PIRP NewIrp ;
  KIRQL OldIrql ;
  LARGE_INTEGER TotalTime ;
  BOOLEAN UseATimer ;
  SERIAL_TIMEOUTS Timeouts ;
  BOOLEAN SetFirstStatus;
  NTSTATUS FirstStatus ;
  PIO_STACK_LOCATION IrpSp;

  SetFirstStatus = 0;
  /*
     TRACER: we need  MINMAX here!
  */
  /* do */
    {
      IoAcquireCancelSpinLock(& OldIrql);
      if(Extension->CurrentXoffIrp)
	{
	  if(myArgument4 
	     /* TRACER: to shadow (ULONG_PTR)(
             (((((Extension->CurrentXoffIrp)->Tail).Overlay).CurrentStackLocation)->Parameters).Others).Argument4
	     */
	     )
	    {
	      /* do */
	      /* { */
	      /*    LONG _refType = 0x00000010; */
	      /*    PULONG_PTR _arg4 = (PVOID )(& */
	      /*   ((((((Extension->CurrentXoffIrp)->Tail).Overlay).CurrentStackLocation */
	      /* 				  )->Parameters).Others).Argument4 ); */
	      /* 		  * _arg4 |= _refType; */
	      /*  } */
	      /*  while(0); */

	      ((Extension->CurrentXoffIrp)->IoStatus).Information= 0;
	      SerialTryToCompleteCurrent(Extension,
					 (PKSYNCHRONIZE_ROUTINE) 0 /*SerialGrabXoffFromIsr*/, 
					 OldIrql,
					 (NTSTATUS )0x40000008L, 
					 & Extension->CurrentXoffIrp, 
					 (void *  )0,
					 (void *  )0, 
					 & Extension->XoffCountTimer, 
					 (void *  )0,  /*Starter    */
					 0,            /* TRACER: StarterCode */
					 (void *  )0,  /*GetNextIrp */
					 0x00000010    /*Reftype    */);
	    }
	  else
	    {
	      IoReleaseCancelSpinLock(OldIrql);
	    }
	}
      else
	  IoReleaseCancelSpinLock(OldIrql);
      

      UseATimer = 0;
      * & OldIrql = KfAcquireSpinLock(& Extension->ControlLock);
      Timeouts = Extension->Timeouts;
      KfReleaseSpinLock(& Extension->ControlLock, OldIrql);
      if(Timeouts.WriteTotalTimeoutConstant ||Timeouts.WriteTotalTimeoutMultiplier)
	{
	  IrpSp  = (((Extension->CurrentWriteIrp)->Tail).Overlay).CurrentStackLocation;	    
	  
	  UseATimer = 1;
	  /*      TotalTime.QuadPart = (LONGLONG )((ULONGLONG )((ULONGLONG)((ULONG )(IrpSp->MajorFunction == 0x04 */
	  /* 					       ? ((IrpSp->Parameters).Write).Length : 1)) * */
	  /* 						   (ULONG )Timeouts.WriteaTotalTimeoutMultiplier) + */
	  /* 				      Timeouts.WriteTotalTimeoutConstant) * - 10000; */
	}

      ((((((Extension->CurrentWriteIrp)->Tail).Overlay).CurrentStackLocation)->Parameters).Others).Argument4 = (void *  )0;
      /* TRACER to shadow */
      myArgument4 = (void *  )0;
     
      IoAcquireCancelSpinLock(& OldIrql);
      if((Extension->CurrentWriteIrp)->Cancel)
	{
	  IoReleaseCancelSpinLock(OldIrql);
	  ((Extension->CurrentWriteIrp)->IoStatus).Status = (NTSTATUS )0xC0000120L;
	  if(! SetFirstStatus)
	    {
	      FirstStatus = (NTSTATUS )0xC0000120L;
	      SetFirstStatus = 1;
	    }
	}
      else
	{
	  if(! SetFirstStatus)
	    {
	      // TRACER
	      _ABORT(pending != 0);
	      pending = 1;

	      // BLAST
/* 	      if(pending == 0) */
/* 		pending = 1; */
/* 	      else */
/* 		errorFn(); */

	      ((((Extension->CurrentWriteIrp)->Tail).Overlay).CurrentStackLocation)->Control |= 0x01;
	      SetFirstStatus = 1;
	      FirstStatus = (NTSTATUS )0x00000103L;
	    }
	  (PDRIVER_CANCEL )((PVOID )InterlockedExchange(
							(PLONG)((PVOID *  )(&(Extension->CurrentWriteIrp)->CancelRoutine)),
							(LONG )((PVOID ) 0 /*SerialCancelCurrentWrite*/)));
/* 	  do */
/* 	    { */
/* 	      LONG _refType = 0x00000002; */
/* 	      PULONG_PTR _arg4 = (PVOID )(& */
/* 					  ((((((Extension->CurrentWriteIrp)->Tail) */
/* 					      .Overlay).CurrentStackLocation)->Parameters */
/* 					    ).Others).Argument4); */
/* 	      * _arg4 |= _refType; */
/* 	    } */
/* 	  while(0); */
	  if(UseATimer)
	    {
	      SerialSetTimer(& Extension->WriteRequestTotalTimer,
			     TotalTime, & Extension->TotalWriteTimeoutDpc, Extension);
			     
	      /* 	      do */
/* 		{ */
/* 		  LONG _refType = 0x00000004; */
/* 		  PULONG_PTR _arg4 = (PVOID )(& */
/* 					      ((((((Extension->CurrentWriteIrp */
/* 						    )->Tail).Overlay).CurrentStackLocation */
/* 						 )->Parameters).Others).Argument4 */
/* 					      ); */
/* 					* _arg4 |= _refType; */
/* 		} */
/* 	      while(0); */
	    }
	  KeSynchronizeExecution(Extension->Interrupt,
				 (PKSYNCHRONIZE_ROUTINE) 0 /*SerialGiveWriteToIsr*/, Extension);
	  IoReleaseCancelSpinLock(OldIrql);
	  /* TRACER: remove this line and uncomment the following if
	     while(NewIrp) is uncommented! */
	  goto ENDX; 
	  /* break; */
	}

      SerialGetNextWrite(& Extension->CurrentWriteIrp, 
			 & Extension->WriteQueue, 
			 & NewIrp, 
			 1, 
			 Extension);

    } /* while(NewIrp); */
 ENDX:
  return FirstStatus;
}

void SerialGetNextWrite(PIRP *  CurrentOpIrp , 
			PLIST_ENTRY QueueToProcess , 
			PIRP *  NewIrp ,
			BOOLEAN CompleteCurrent , 
			PSERIAL_DEVICE_EXTENSION Extension )
{
  KIRQL OldIrql ;
  PIRP Irp ;
  PSERIAL_XOFF_COUNTER Xc ;
  LARGE_INTEGER delta ;
  /*
     TRACER: we need  MINMAX here!
  */  
  /* do */
    {
      if(((((*CurrentOpIrp)->Tail).Overlay).CurrentStackLocation)->MajorFunction== 0x04)
	{
	  IoAcquireCancelSpinLock(& OldIrql);
	  Extension->TotalCharsQueued -= ((((((*CurrentOpIrp)->Tail).Overlay).CurrentStackLocation
					    )->Parameters).Write).Length;
	  IoReleaseCancelSpinLock(OldIrql);
	}
      else
	{
	  if(((((*CurrentOpIrp)->Tail).Overlay).CurrentStackLocation) ->MajorFunction == 0x0e)
	    {
	      IoAcquireCancelSpinLock(& OldIrql);
	      Irp = * CurrentOpIrp;
	      Xc = (Irp->AssociatedIrp).SystemBuffer;
	      Extension->TotalCharsQueued--;
	      if((Irp->IoStatus).Status != (NTSTATUS)0x00000000L){ }
	      else
		{
		  if(Irp->Cancel)
		      (Irp->IoStatus).Status = (NTSTATUS )0xC0000120L;
		  else
		    {
		      (PDRIVER_CANCEL )((PVOID)InterlockedExchange(
					    (PLONG)((PVOID *  )(&Irp->CancelRoutine)),
					    (LONG )((PVOID) 0 /*SerialCancelCurrentXoff*/)));
		      /* do */
		      /* { */
		      /*     LONG _refType  = 0x00000002; */
		      
		      /*     PULONG_PTR _arg4 = (PVOID )(& */
		      /* (((((Irp->Tail).Overlay).CurrentStackLocation)->Parameters).Others).Argument4); */
		      /*   * _arg4 |= _refType; */
		      /*  } */
		      /* while(0); */

		      /* 
			 TRACER: potential bug?

			 If CompleteCurrent is assigned to 0 then the
			 following chain happens:

		         - SerialGetNextIrp does not call
                           IofCompleteRequest.

                         - The SerialGetNextIrp's caller,
                           SerialStartWrite, does not call neither to
                           IofCompleteRequest if myArgument4 is false
                           (line 15061). Note if myArgument4 is true
                           then SerialTryToCompleteCurrent will call
                           IofCompleteRequest.

                         - Finally, if the above conditions hold then
                           SerialStartWrite finishes without calling
                           IofCompleteRequest. Therefore,
                           SerialStartWrite's caller,
                           SerialStartOrQueue, does not call
                           IofCompleteRequest and neither
                           SerialStartOrQueue's caller,
                           SerialIoControl. The safety condition at
                           20766 is violated.			 
		      */

		      /* CompleteCurrent = 0; */

		      Extension->CurrentXoffIrp = Irp;
		      KeSynchronizeExecution(Extension->Interrupt,
					     (PKSYNCHRONIZE_ROUTINE) 0 /*SerialGiveXoffToIsr*/,
					     Extension);
		      if(Xc->Timeout)
			{
			  delta.QuadPart=-(LONGLONG)((ULONGLONG)((ULONGLONG)((ULONG )1000)* 
								 (ULONG)Xc->Timeout));
			  SerialSetTimer(&Extension->XoffCountTimer, delta, &
					 Extension->XoffCountTimeoutDpc, Extension);
			  /* 	do */
			  /* 	 { */
			  /* 	LONG _refType = 0x00000004; */
			  /* 	PULONG_PTR _arg4 = (PVOID )(& */
			  /* 	 (((((Irp->Tail).Overlay).CurrentStackLocation)->Parameters).Others */
			  /* 			    ).Argument4); */
			  /* 	 * _arg4 |= _refType; */
			  /* 	} */
			  /* 	while(0); */
			}
		    }
		}
	      IoReleaseCancelSpinLock(OldIrql);
	    }
	}

      /* TRACER: key function */
      SerialGetNextIrp(CurrentOpIrp, 
		       QueueToProcess, 
		       NewIrp,
		       CompleteCurrent, 
		       Extension);

      if(! * NewIrp)
	{
	  IoAcquireCancelSpinLock(& OldIrql);
	  KeSynchronizeExecution(Extension->Interrupt,
				 SerialProcessEmptyTransmit, Extension);
	  IoReleaseCancelSpinLock(OldIrql);
	  /* TRACER: remove this line and uncomment the following if
	     while(1) is uncommented */
	  goto ENDX;
	  // break;
	}
      else
	{
	  if(((((*NewIrp)->Tail).Overlay).CurrentStackLocation)->MajorFunction== 0x09)
	    {
	      ((* NewIrp)->IoStatus).Status = (NTSTATUS)0x00000000L;
	    }
	  else{
	    /* TRACER: remove this line and uncomment the following if
	       while(1) is uncommented */
	    goto ENDX;
	    // break;
	  }
	}
    } /* while(1);*/
 ENDX:
}

// #line 701
void SerialCompleteWrite(PKDPC Dpc , PVOID DeferredContext , PVOID SystemContext1 ,
			 PVOID SystemContext2 )
{
  PSERIAL_DEVICE_EXTENSION Extension;  
  KIRQL OldIrql ;

  Extension = DeferredContext;
  IoAcquireCancelSpinLock(& OldIrql);
  SerialTryToCompleteCurrent(Extension, (void *  )0, OldIrql, 
			     (NTSTATUS)0x00000000L, & Extension->CurrentWriteIrp, &
			     Extension->WriteQueue, (void *  )0, &
			     Extension->WriteRequestTotalTimer, 
			     SerialStartWrite, /* Starter */
			     5, /* TRACER: StarterCode */
			     SerialGetNextWrite, 
			     0x00000001);
  SerialDpcEpilogue(Extension, Dpc);
}

// #line 763
BOOLEAN SerialProcessEmptyTransmit(PVOID Context )
{
	// #line 795
	PSERIAL_DEVICE_EXTENSION Extension = Context;
	;
	// #line 798
	if(Extension->IsrWaitMask && Extension->IsrWaitMask & 0x0004 &&
		Extension->EmptiedTransmit && ! Extension->TransmitImmediate &&
		! Extension->CurrentWriteIrp && (& Extension->WriteQueue)->Flink
		== & Extension->WriteQueue)
	{
		// #line 802
		Extension->HistoryMask |= 0x0004;
		if(Extension->IrpMaskLocation)
		{
			* Extension->IrpMaskLocation = Extension->HistoryMask;
			Extension->IrpMaskLocation = (void *  )0;
			Extension->HistoryMask = 0;
			// #line 809
			((Extension->CurrentWaitIrp)->IoStatus).Information =
				sizeof(ULONG );
			// #line 810
			SerialInsertQueueDpc(& Extension->CommWaitDpc, (void * 
				)0, (void *  )0, Extension);
		}
		// #line 819
		Extension->CountOfTryingToLowerRTS++;
		SerialPerhapsLowerRTS(Extension);
	}
	// #line 824
	return 0;
}

// #line 828
BOOLEAN SerialGiveWriteToIsr(PVOID Context )
{
  PSERIAL_DEVICE_EXTENSION Extension;
  PIO_STACK_LOCATION IrpSp ;

  Extension = Context;
  IrpSp =(((Extension->CurrentWriteIrp)->Tail).Overlay).CurrentStackLocation;
  if(IrpSp->MajorFunction == 0x04)
    {
      Extension->WriteLength = ((IrpSp->Parameters).Write).Length;
      Extension->WriteCurrentChar = ((Extension->CurrentWriteIrp)->AssociatedIrp).SystemBuffer;
    }
  else
    {
      // #line 887
      Extension->WriteLength = 1;
      Extension->WriteCurrentChar = (PUCHAR)((Extension->CurrentWriteIrp)->AssociatedIrp).SystemBuffer
	+ (LONG )((LONG_PTR )(& ((SERIAL_XOFF_COUNTER * )0)->XoffChar));
    }
/*   do */
/*     { */
/*       LONG _refType = 0x00000001; */
/*       PULONG_PTR _arg4 = (PVOID )(& */
/* 				  ((((((Extension->CurrentWriteIrp)->Tail).Overlay).CurrentStackLocation */
/* 				     )->Parameters).Others).Argument4); */
/*       * _arg4 |= _refType; */
/*     } */
/*   while(0); */
  if(! Extension->TransmitImmediate)
    {
      // #line 928
      if(Extension->HoldingEmpty)
	{
	  WRITE_PORT_UCHAR(Extension->Controller +(ULONG )(0x01 * 1), 0);
	  WRITE_PORT_UCHAR(Extension->Controller +
			   (ULONG )(0x01 * 1), (UCHAR)(0x01 | 0x02 | 0x04 | 0x08));
	}
    }
  if(((Extension->HandFlow).FlowReplace & (ULONG )0xc0) == (ULONG )0xc0)
    {
      SerialSetRTS(Extension);
    }
  return 0;
}

void SerialCancelCurrentWrite(PDEVICE_OBJECT DeviceObject , PIRP Irp )
{
  PSERIAL_DEVICE_EXTENSION Extension;

  Extension = DeviceObject->DeviceExtension;
  SerialTryToCompleteCurrent(Extension, (PKSYNCHRONIZE_ROUTINE) 0 /*SerialGrabWriteFromIsr*/,
			     Irp->CancelIrql, (NTSTATUS )0xC0000120L, &
			     Extension->CurrentWriteIrp, & Extension->WriteQueue, 
			     (void * )0, & Extension->WriteRequestTotalTimer, 
			     SerialStartWrite, /* Starter */
			     5, /* TRACER: StarterCode */
			     SerialGetNextWrite, 
			     0x00000002);
}

void SerialWriteTimeout(PKDPC Dpc , PVOID DeferredContext , PVOID SystemContext1,
			PVOID SystemContext2 )
{
  PSERIAL_DEVICE_EXTENSION Extension = DeferredContext;
  KIRQL OldIrql ;
  IoAcquireCancelSpinLock(& OldIrql);
  SerialTryToCompleteCurrent(Extension, 
			     (PKSYNCHRONIZE_ROUTINE) 0 /*SerialGrabWriteFromIsr*/, OldIrql,
			     (NTSTATUS )0x00000102L, & Extension->CurrentWriteIrp, &
			     Extension->WriteQueue, (void *  )0, &
			     Extension->WriteRequestTotalTimer, 
			     SerialStartWrite,  /* Starter */
			     5, /* TRACER: StarterCode */
			     SerialGetNextWrite, 
			     0x00000004);
  SerialDpcEpilogue(Extension, Dpc);
}

BOOLEAN SerialGrabWriteFromIsr(PVOID Context )
{
  PSERIAL_DEVICE_EXTENSION Extension;
  Extension = Context;
  if(Extension->WriteLength)
    {
      if(((((Extension->CurrentWriteIrp)->Tail).Overlay).CurrentStackLocation
	  )->MajorFunction == 0x04)
	{
	  ((Extension->CurrentWriteIrp)->IoStatus).Information =
	    ((((((Extension->CurrentWriteIrp)->Tail).Overlay
		).CurrentStackLocation)->Parameters).Write).Length
	    - Extension->WriteLength;
	}
      else
	{
	  ((Extension->CurrentWriteIrp)->IoStatus).Information =
	    0;
	}
/*       do */
/* 	{ */
/* 	  LONG _refType = 0x00000001; */
/* 	  PULONG_PTR _arg4 = (PVOID )(& */
/* 				      ((((((Extension->CurrentWriteIrp)->Tail).Overlay */
/* 					  ).CurrentStackLocation)->Parameters).Others).Argument4 */
/* 				      ); */
/* 	  * _arg4 &= /\*~*\/ _refType; */
/* 	} */
/*       while(0); */
      Extension->WriteLength = 0;
    }
  return 0;
}

// #line 1139
BOOLEAN SerialGrabXoffFromIsr(PVOID Context )
{
  PSERIAL_DEVICE_EXTENSION Extension;
  
  Extension = Context;
  if(Extension->CountSinceXoff)
    {
      Extension->CountSinceXoff = 0;
  /*     do */
/* 	{ */
/* 	  LONG _refType = 0x00000001; */
/* 	  PULONG_PTR _arg4 = (PVOID )(& */
/* 				      ((((((Extension->CurrentXoffIrp)->Tail).Overlay) */
/* 					 .CurrentStackLocation)->Parameters).Others).Argument4 */
/* 				      ); */
/* 	  * _arg4 &= /\*~*\/ _refType; */
/* 	} */
/*       while(0); */
    }
  return 0;
}

void SerialCompleteXoff(PKDPC Dpc , PVOID DeferredContext , PVOID SystemContext1,
			PVOID SystemContext2 )
{
  PSERIAL_DEVICE_EXTENSION Extension;  
  KIRQL OldIrql ;

  Extension = DeferredContext;
  IoAcquireCancelSpinLock(& OldIrql);
  SerialTryToCompleteCurrent(Extension, (void *  )0, OldIrql, 
			     (NTSTATUS)0x00000000L, & Extension->CurrentXoffIrp, 
			     (void *  )0, 
			     (void * )0, & Extension->XoffCountTimer, 
			     (void *  )0, /*Starter*/
			     0, /* TRACER: StarterCode */
			     (void *  )0,
			     0x00000001);
  SerialDpcEpilogue(Extension, Dpc);
}

// #line 1261
void SerialTimeoutXoff(PKDPC Dpc , PVOID DeferredContext , PVOID SystemContext1,
		       PVOID SystemContext2 )
{
  PSERIAL_DEVICE_EXTENSION Extension;
  KIRQL OldIrql ;

  Extension = DeferredContext;
  IoAcquireCancelSpinLock(& OldIrql);
  SerialTryToCompleteCurrent(Extension, SerialGrabXoffFromIsr, OldIrql,
			     (NTSTATUS )0x4000000CL, & Extension->CurrentXoffIrp, 
			     (void * )0, (void *  )0, 
			     (void *  )0, 
			     (void *  )0, 
			     0, /* TRACER: StarterCode */
			     (void *  )0,
			     0x00000004);
  SerialDpcEpilogue(Extension, Dpc);
}

void SerialCancelCurrentXoff(PDEVICE_OBJECT DeviceObject , PIRP Irp )
{
  PSERIAL_DEVICE_EXTENSION Extension;
  
  Extension = DeviceObject->DeviceExtension;
  SerialTryToCompleteCurrent(Extension, SerialGrabXoffFromIsr,
			     Irp->CancelIrql, (NTSTATUS )0xC0000120L, &
			     Extension->CurrentXoffIrp, (void *  )0, (void *  )0, &
			     Extension->XoffCountTimer, 
			     (void *  )0, /*Starter*/
			     0, /* TRACER: StarterCode */
			     (void *  )0,
			     0x00000002);
}

// #line 1367
BOOLEAN SerialGiveXoffToIsr(PVOID Context )
{
  PSERIAL_DEVICE_EXTENSION Extension;
  PSERIAL_XOFF_COUNTER Xc;

  Extension = Context;
  Xc  = ((Extension->CurrentXoffIrp)->AssociatedIrp).SystemBuffer;
  Extension->CountSinceXoff = Xc->Counter;
/*   do */
/*     { */
/*       LONG _refType = 0x00000001; */
/*       PULONG_PTR _arg4 = (PVOID )(& */
/* 				  ((((((Extension->CurrentXoffIrp)->Tail).Overlay).CurrentStackLocation */
/* 				     )->Parameters).Others).Argument4); */
/*       * _arg4 |= _refType; */
/*     } */
/*   while(0); */
  return 0;
}

/* extern const GUID __declspec(selectany) GUID_CLASS_COMPORT = {0x86e0d1e0L, */
/* 	0x8089, 0x11d0, {0x9c, 0xe4, 0x08, 0x00, 0x3e, 0x30, 0x1f, 0x73}}; */

NTSTATUS SerialSyncCompletion(PDEVICE_OBJECT DeviceObject , PIRP Irp , 
			      PKEVENT SerialSyncEvent )
			      
{
  KeSetEvent(SerialSyncEvent, 0, 0);
  return (NTSTATUS )0xC0000016L;
}

// #line 93
NTSTATUS SerialCreateDevObj(PDRIVER_OBJECT DriverObject , PDEVICE_OBJECT *  NewDeviceObject )
{
  UNICODE_STRING deviceObjName ;
  PDEVICE_OBJECT deviceObject;
  PSERIAL_DEVICE_EXTENSION pDevExt ;
  NTSTATUS status;
  ULONG currentInstance;
  UNICODE_STRING instanceStr ;
  WCHAR instanceNumberBuffer[20] ;
	
  deviceObject = (void *  )0;
  status = (NTSTATUS )0x00000000L;
  currentInstance = 0;
  
  memset(& deviceObjName, 0, sizeof(UNICODE_STRING ));
  deviceObjName.MaximumLength = 128 * sizeof(WCHAR );
  deviceObjName.Buffer = ExAllocatePoolWithTag(PagedPool,
					       deviceObjName.MaximumLength + sizeof(WCHAR ), 
					       tag__1/* 'XMOC' */);
  if(deviceObjName.Buffer == (void *  )0)
    {
      SerialLogError(DriverObject, (void *  )0,
		     SerialPhysicalZero___1, 
		     SerialPhysicalZero___1, 0, 0, 0,
		     19, (NTSTATUS )0x00000000L, (NTSTATUS )0xC0060008L, 0,
		     (void *  )0, 0, (void *  )0);
      return (NTSTATUS )0xC000009AL;
    }
  memset(deviceObjName.Buffer, 0, deviceObjName.MaximumLength + sizeof(WCHAR ));
  RtlAppendUnicodeToString(& deviceObjName,
			   "\134\0D\0e\0v\0i\0c\0e\0\134\0S\0e\0r\0i\0a\0l\0");
  RtlInitUnicodeString(& instanceStr, (void *  )0);
  instanceStr.MaximumLength = sizeof(instanceNumberBuffer);
  instanceStr.Buffer = instanceNumberBuffer;
  RtlIntegerToUnicodeString(currentInstance++, 10, & instanceStr);
  RtlAppendUnicodeStringToString(& deviceObjName, & instanceStr);
  status = IoCreateDevice(DriverObject, sizeof(SERIAL_DEVICE_EXTENSION ),
			  & deviceObjName, 0x0000001b, 0x00000100, 1, & deviceObject);
  if(! ((NTSTATUS )status >= 0))
    goto SerialCreateDevObjError;
  pDevExt = deviceObject->DeviceExtension;
  memset(pDevExt, 0, sizeof(SERIAL_DEVICE_EXTENSION ));
  pDevExt->PendingIRPCnt = 1;
  pDevExt->DpcCount = 1;
  (pDevExt->DeviceName).Buffer = ExAllocatePoolWithTag(PagedPool,
						       deviceObjName.Length + sizeof(WCHAR ), 
						       tag__1 /*'XMOC'*/);
  if(! (pDevExt->DeviceName).Buffer)
    {
      SerialLogError(DriverObject, (void *  )0,
		     SerialPhysicalZero___1, 
		     SerialPhysicalZero___1, 0, 0, 0,
		     19, (NTSTATUS )0x00000000L, (NTSTATUS )0xC0060008L, 0,
		     (void *  )0, 0, (void *  )0);
      status = (NTSTATUS )0xC000009AL;
      goto SerialCreateDevObjError;
    }
  (pDevExt->DeviceName).MaximumLength = deviceObjName.Length + sizeof(WCHAR );
  memset((pDevExt->DeviceName).Buffer, 0,
	 (pDevExt->DeviceName).MaximumLength);
  RtlAppendUnicodeStringToString(& pDevExt->DeviceName, & deviceObjName);
  (pDevExt->NtNameForPort).Buffer = ExAllocatePoolWithTag(PagedPool,
							  deviceObjName.MaximumLength, 
							  tag__1 /*'XMOC'*/);
  if((pDevExt->NtNameForPort).Buffer == (void *  )0)
    {
      status = (NTSTATUS )0xC000009AL;
      goto SerialCreateDevObjError;
    }
  (pDevExt->NtNameForPort).MaximumLength = deviceObjName.MaximumLength;
  RtlAppendUnicodeStringToString(& pDevExt->NtNameForPort, &
				 deviceObjName);
  pDevExt->DeviceIsOpened = 0;
  pDevExt->DeviceObject = deviceObject;
  pDevExt->DriverObject = DriverObject;
  pDevExt->DeviceObject = deviceObject;
  pDevExt->PowerState = PowerDeviceD0;
  pDevExt->TxFifoAmount = driverDefaults.TxFIFODefault;
  pDevExt->CreatedSymbolicLink = 1;
  pDevExt->OwnsPowerPolicy = 1;
  
  (& pDevExt->CommonInterruptObject)->Flink = & pDevExt->CommonInterruptObject ;
  (& pDevExt->CommonInterruptObject)->Blink = & pDevExt->CommonInterruptObject ;
  
  (& pDevExt->TopLevelSharers)->Flink =  & pDevExt->TopLevelSharers ;
  (& pDevExt->TopLevelSharers)->Blink = & pDevExt->TopLevelSharers;
	
  (& pDevExt->MultiportSiblings)->Flink =  & pDevExt->MultiportSiblings;
  (& pDevExt->MultiportSiblings)->Blink =  & pDevExt->MultiportSiblings;
  
  (& pDevExt->AllDevObjs)->Flink = & pDevExt->AllDevObjs;
  (& pDevExt->AllDevObjs)->Blink = & pDevExt->AllDevObjs ;
  
  (& pDevExt->ReadQueue)->Flink = & pDevExt->ReadQueue ;
  (& pDevExt->ReadQueue)->Blink = & pDevExt->ReadQueue ;
  
  (& pDevExt->WriteQueue)->Flink = & pDevExt->WriteQueue ;
  (& pDevExt->WriteQueue)->Blink = & pDevExt->WriteQueue ;
  
  (& pDevExt->MaskQueue)->Flink = & pDevExt->MaskQueue ;
  (& pDevExt->MaskQueue)->Blink =  & pDevExt->MaskQueue ;
  
  (& pDevExt->PurgeQueue)->Flink = & pDevExt->PurgeQueue ;
  (& pDevExt->PurgeQueue)->Blink = & pDevExt->PurgeQueue ;
  
  (& pDevExt->StalledIrpQueue)->Flink = & pDevExt->StalledIrpQueue;
  (& pDevExt->StalledIrpQueue)->Blink = & pDevExt->StalledIrpQueue;
  
  (& pDevExt->OpenMutex)->Count = 1;
  (& pDevExt->OpenMutex)->Contention = 0;
  KeInitializeEvent(& (& pDevExt->OpenMutex)->Event, SynchronizationEvent,0);
  (& pDevExt->CloseMutex)->Count = 1;
  (& pDevExt->CloseMutex)->Contention = 0;
  KeInitializeEvent(& (& pDevExt->CloseMutex)->Event, SynchronizationEvent, 0);
  KeInitializeEvent(& pDevExt->PendingIRPEvent, SynchronizationEvent, 0);
  KeInitializeEvent(& pDevExt->PendingDpcEvent, SynchronizationEvent, 0);
  KeInitializeEvent(& pDevExt->PowerD0Event, SynchronizationEvent, 0);
  deviceObject->Flags &= /*~*/ 0x00000080;
  * NewDeviceObject = deviceObject;
  ExFreePool(deviceObjName.Buffer);
  return (NTSTATUS )0x00000000L;
 SerialCreateDevObjError:
  if(deviceObjName.Buffer != (void *  )0)
    ExFreePool(deviceObjName.Buffer);
  if(deviceObject)
    {
      if((pDevExt->NtNameForPort).Buffer != (void *  )0)
	      ExFreePool((pDevExt->NtNameForPort).Buffer);
      if((pDevExt->DeviceName).Buffer != (void *  )0)
	ExFreePool((pDevExt->DeviceName).Buffer);
      IoDeleteDevice(deviceObject);
    }
  * NewDeviceObject = (void *  )0;
  return status;
}

NTSTATUS SerialAddDevice(PDRIVER_OBJECT DriverObject , PDEVICE_OBJECT PPdo )
{
  PDEVICE_OBJECT pNewDevObj = (void *  )0;
  PDEVICE_OBJECT pLowerDevObj = (void *  )0;
  NTSTATUS status ;
  PSERIAL_DEVICE_EXTENSION pDevExt ;
  if(PPdo == (void *  )0)
      return (NTSTATUS )0x8000001AL;
  status = SerialCreateDevObj(DriverObject, & pNewDevObj);
  if(! ((NTSTATUS )status >= 0))
      return status;
  pLowerDevObj = IoAttachDeviceToDeviceStack(pNewDevObj, PPdo);
  pDevExt = pNewDevObj->DeviceExtension;
  pDevExt->LowerDeviceObject = pLowerDevObj;
  pDevExt->Pdo = PPdo;
  pNewDevObj->Flags |= 0x00000004 | 0x00002000;
  return status;
}

NTSTATUS SerialPnpDispatch(PDEVICE_OBJECT PDevObj , PIRP PIrp )
{
  PSERIAL_DEVICE_EXTENSION pDevExt;
  PDEVICE_OBJECT pLowerDevObj;
  PIO_STACK_LOCATION pIrpStack;
  NTSTATUS status ;
  NTSTATUS statusShadow ;
  PDEVICE_CAPABILITIES pDevCaps ;

  PKEVENT pQueryCapsEvent ;
  SYSTEM_POWER_STATE cap ;
  PIO_STACK_LOCATION irpSp ;
  PIO_STACK_LOCATION nextIrpSp ;
  
  UNICODE_STRING pIdBuf ;
  PWCHAR pPnpIdStr ;
  ULONG pnpIdStrLen ;
  ULONG isMulti ;
  HANDLE pnpKey ;
   
  ULONG curStrLen ;
  ULONG allocLen;
  PWSTR curStr;

  PKEVENT pResFiltEvent ;
  PIO_RESOURCE_REQUIREMENTS_LIST pReqList ;
  PIO_RESOURCE_LIST pResList ;
  PIO_RESOURCE_DESCRIPTOR pResDesc ;
  ULONG i , j ;
  ULONG reqCnt ;
  ULONG gotISR ;
  ULONG gotInt ;
  ULONG listNum ;
  
  PIO_STACK_LOCATION irpSp ;
  PIO_STACK_LOCATION nextIrpSp ;

  ULONG pendingIRPs ;
  KIRQL oldIrql ;

  PVOID startLockPtr ;

  pDevExt = PDevObj->DeviceExtension;
  pLowerDevObj = pDevExt->LowerDeviceObject;
  pIrpStack = ((PIrp->Tail).Overlay).CurrentStackLocation;
  status = SerialIRPPrologue(PIrp, pDevExt);
  if(status != (NTSTATUS)0x00000000L)
    {
      IofCompleteRequest(PIrp, 0);
      SerialIRPEpilogue(pDevExt);
      return status;
    }

  switch(pIrpStack->MinorFunction)
    {
    case 0x09:
      {
	pQueryCapsEvent = ExAllocatePoolWithTag(NonPagedPool,
						sizeof(KEVENT ), tag__1 /* 'XMOC' */);
	if(pQueryCapsEvent == (void *  )0)
	  {
	    (PIrp->IoStatus).Status = (NTSTATUS)0xC000009AL;
	    // TRACER
	    myStatus = (NTSTATUS)0xC000009AL;
	    IofCompleteRequest(PIrp, 0);
	    SerialIRPEpilogue(pDevExt);
	    return (NTSTATUS )0xC000009AL;
	  }
	KeInitializeEvent(pQueryCapsEvent, SynchronizationEvent,0);
	irpSp = ((PIrp->Tail).Overlay).CurrentStackLocation;
	nextIrpSp = ((PIrp->Tail).Overlay).CurrentStackLocation - 1; 
	memcpy(nextIrpSp, irpSp, (LONG )((LONG_PTR )(&((IO_STACK_LOCATION * )0)->CompletionRoutine)));
	nextIrpSp->Control = 0;

	// TRACER
	_ABORT(s != NP);
	_ABORT(compRegistered != 0);
	compRegistered = 1;
	// compFptr = SerialSyncCompletion;
		
	// BLAST
/* 	if(s != NP) */
/* 	  errorFn(); */
/* 	else */
/* 	  { */
/* 	    if(compRegistered != 0) */
/* 	      errorFn(); */
/* 	    else */
/* 	      { */
/* 		compRegistered = 1; */
/* 		compFptr = SerialSyncCompletion; */
/* 	      } */
/* 	  } */
	{
	  irpSp = ((PIrp->Tail).Overlay).CurrentStackLocation - 1 ;
	  irpSp->CompletionRoutine = SerialSyncCompletion;
	  irpSp->Context = pQueryCapsEvent;
	  irpSp->Control = 0;
/* 	  if(1) */
/* 	    irpSp->Control = 0x40; */
/* 	  if(1) */
/* 	    irpSp->Control |= 0x80; */
/* 	  if(1) */
	  irpSp->Control |= 0x20;
	}
	status = IofCallDriver(pLowerDevObj, PIrp);
	if(status == (NTSTATUS )0x00000103L)
	  KeWaitForSingleObject(pQueryCapsEvent,
				Executive, KernelMode, 0, (void *  )0);
	ExFreePool(pQueryCapsEvent);
	// TRACER
	// status = (PIrp->IoStatus).Status;
	status = myStatus;
	if(((pIrpStack->Parameters).DeviceCapabilities).Capabilities == (void *  )0)
	  goto errQueryCaps;
	pIrpStack = ((PIrp->Tail).Overlay).CurrentStackLocation;
	pDevCaps = ((pIrpStack->Parameters).DeviceCapabilities).Capabilities;
	for(cap = PowerSystemSleeping1; cap <PowerSystemMaximum; cap++)
	  {
	    (pDevExt->DeviceStateMap)[cap] =
	      (pDevCaps->DeviceState)[cap];
	  } // end of for loop

	(pDevExt->DeviceStateMap)[PowerSystemUnspecified] = PowerDeviceUnspecified;
	(pDevExt->DeviceStateMap)[PowerSystemWorking] = PowerDeviceD0;
	pDevExt->SystemWake = pDevCaps->SystemWake;
	pDevExt->DeviceWake = pDevCaps->DeviceWake;
      errQueryCaps:
	{
	  IofCompleteRequest(PIrp, 0);
	  SerialIRPEpilogue(pDevExt);
	}
	return status;
      }
/*     case 0x07: */
/*       switch(((pIrpStack->Parameters).QueryDeviceRelations).Type) */
/* 	{ */
/* 	case 1 /\*BusRelations*\/: */
/* 	  break; */
/* 	case 2 /\*EjectionRelations*\/: */
/* 	  break; */
/* 	case 3 /\*PowerRelations*\/: */
/* 	  break; */
/* 	case 4 /\*RemovalRelations*\/: */
/* 	  break; */
/* 	case 5 /\*TargetDeviceRelation*\/: */
/* 	  break; */
/* 	default : */
/* 	  break; */
/* 	} */

      // TRACER
      _ABORT(s != NP);
      s = SKIP1;

      // BLAST
/*       if(s == NP) */
/* 	s = SKIP1; */
/*       else */
/* 	errorFn(); */
      
      PIrp->CurrentLocation++;
      ((PIrp->Tail).Overlay).CurrentStackLocation++;
      status = SerialIoCallDriver(pDevExt, pLowerDevObj, PIrp);
      return status;
    case 0x08:
      break;
    case 0x0B:
      break;
    case 0x00:
      {
	MmLockPagableSectionByHandle(SerialGlobals.PAGESER_Handle);
	pDevExt->PowerState = PowerDeviceD0;
	status = SerialStartDevice(PDevObj, PIrp);
	(void )SerialGotoPowerState(PDevObj, pDevExt, PowerDeviceD3);
	MmUnlockPagableImageSection(SerialGlobals.PAGESER_Handle);
	(PIrp->IoStatus).Status = status;
	// TRACER
	myStatus=status;
	{
	  IofCompleteRequest(PIrp, 0);
	  SerialIRPEpilogue(pDevExt);
	}
	return status;
      }
    case 0x0F:
      break;
    case 0x10:
      break;
    case 0x11:
      break;
    case 0x12:
      break;
    case 0x13:
      {
	isMulti = 0;
	if(((pIrpStack->Parameters).QueryId).IdType !=
	   BusQueryHardwareIDs &&
	   ((pIrpStack->Parameters).QueryId).IdType !=
	   BusQueryCompatibleIDs)
	  {
	    // TRACER
	    _ABORT(s != NP);
	    s = SKIP1;

	    // BLAST
/* 	    if(s == NP) */
/* 	      s = SKIP1; */
/* 	    else */
/* 	      errorFn(); */

	    PIrp->CurrentLocation++;
	    ((PIrp->Tail).Overlay).CurrentStackLocation++;
	    return SerialIoCallDriver(pDevExt, pLowerDevObj, PIrp);
	  }
	if(((pIrpStack->Parameters).QueryId).IdType == BusQueryCompatibleIDs)
	  {
	    (PIrp->IoStatus).Status = (NTSTATUS)0x00000000L;
	    // TRACER
	    myStatus = (NTSTATUS)0x00000000L;
	    // TRACER
	    _ABORT(s != NP);
	    s = SKIP1;

	    // BLAST
/* 	    if(s == NP) */
/* 	      s = SKIP1; */
/* 	    else */
/* 	      errorFn(); */

	    PIrp->CurrentLocation++;
	    ((PIrp->Tail).Overlay).CurrentStackLocation++;
	    return SerialIoCallDriver(pDevExt, pLowerDevObj, PIrp);
	  }
	status = IoOpenDeviceRegistryKey(pDevExt->Pdo, 1, 0x00020000L, & pnpKey);
	if(! ((NTSTATUS )status >= 0))
	  {
	    (PIrp->IoStatus).Status = status;
	    // TRACER
	    myStatus = status;
	    IofCompleteRequest(PIrp, 0);
	    SerialIRPEpilogue(pDevExt);
	    return status;
	  }
	status = SerialGetRegistryKeyValue(pnpKey,
					   "M\0u\0l\0t\0i\0p\0o\0r\0t\0D\0e\0v\0i\0c\0e\0",
					   sizeof("M\0u\0l\0t\0i\0p\0o\0r\0t\0D\0e\0v\0i\0c\0e\0"),
					   & isMulti, sizeof(ULONG ));
	ZwClose(pnpKey);

	if(! ((NTSTATUS )status >= 0))
	  {
	    (PIrp->IoStatus).Status = status;
	    // TRACER
	    myStatus  = status ;
	    IofCompleteRequest(PIrp, 0);
	    SerialIRPEpilogue(pDevExt);
	    return status;
	  }
	pPnpIdStr = /* isMulti ? "*\0P\0N\0P\00\05\00\02\0" */
/* 	  :  */"*\0P\0N\0P\00\05\00\01\0";
	pnpIdStrLen = /* isMulti */
/* 	  ? sizeof("*\0P\0N\0P\00\05\00\02\0") */
/* 	  : */ sizeof("*\0P\0N\0P\00\05\00\01\0");
	if((PIrp->IoStatus).Information != 0)
	  {
	    allocLen = 0;
	    curStr = (PWSTR)(PIrp->IoStatus).Information;
/* 	    while((curStrLen = wcslen(curStr)) != 0) */
/* 	      { */
/* 		allocLen += curStrLen * sizeof(WCHAR ) + sizeof((WCHAR )0); */
/* 		curStr += curStrLen + 1; */
/* 	      } */

	    allocLen += sizeof((WCHAR )0);
	    pIdBuf.Buffer = ExAllocatePoolWithTag(PagedPool,
						  allocLen + pnpIdStrLen + sizeof(WCHAR ),
						  tag__1 /* 'XMOC' */);
	    if(pIdBuf.Buffer == (void *  )0)
	      {
		ExFreePool((PWSTR)(PIrp->IoStatus).Information);
		(PIrp->IoStatus).Status = (NTSTATUS)0xC000009AL;
		// TRACER
		myStatus= (NTSTATUS)0xC000009AL;
		(PIrp->IoStatus).Information = 0;
		{
		  IofCompleteRequest(PIrp, 0);
		  SerialIRPEpilogue(pDevExt);
		}
		return (NTSTATUS )0xC000009AL;
	      }
	    pIdBuf.MaximumLength = (USHORT )(allocLen + pnpIdStrLen);
	    pIdBuf.Length = (USHORT )allocLen - sizeof((WCHAR )0);
	    memset(pIdBuf.Buffer, 0, pIdBuf.MaximumLength + sizeof(WCHAR ));
	    memcpy(pIdBuf.Buffer, (PWSTR )(PIrp->IoStatus).Information, allocLen);
	    RtlAppendUnicodeToString(& pIdBuf, pPnpIdStr);
	    ExFreePool((PWSTR)(PIrp->IoStatus).Information);
	  }
	else
	  {
	    pIdBuf.Buffer = ExAllocatePoolWithTag(PagedPool,
						  pnpIdStrLen + sizeof(WCHAR ) * 2,
						  tag__1 /* 'XMOC' */);
	    if(pIdBuf.Buffer == (void *  )0)
	      {
		(PIrp->IoStatus).Status = (NTSTATUS)0xC000009AL;
		// TRACER
		myStatus = (NTSTATUS)0xC000009AL;
		(PIrp->IoStatus).Information = 0;
		{
		  IofCompleteRequest(PIrp, 0);
		  SerialIRPEpilogue(pDevExt);
		}
		return (NTSTATUS )0xC000009AL;
	      }
	    pIdBuf.MaximumLength = (USHORT )pnpIdStrLen;
	    pIdBuf.Length = 0;
	    memset(pIdBuf.Buffer, 0, pIdBuf.MaximumLength + sizeof(WCHAR ) * 2);
	    RtlAppendUnicodeToString(& pIdBuf, pPnpIdStr);
	  }
	(PIrp->IoStatus).Information = (ULONG_PTR)pIdBuf.Buffer;
	(PIrp->IoStatus).Status = (NTSTATUS )0x00000000L;
	// TRACER
	myStatus =(NTSTATUS )0x00000000L;
	{
	  irpSp = ((PIrp->Tail).Overlay).CurrentStackLocation;
	  nextIrpSp = ((PIrp->Tail).Overlay).CurrentStackLocation -1 ;
	  memcpy(nextIrpSp, irpSp, (LONG )((LONG_PTR )(&
						       ((IO_STACK_LOCATION * 
							 )0)->CompletionRoutine)));
	  nextIrpSp->Control = 0;
	}
	return SerialIoCallDriver(pDevExt, pLowerDevObj, PIrp);
      }
    case 0x0D:
      {
	isMulti = 0;
	pResFiltEvent = ExAllocatePoolWithTag(NonPagedPool,
					      sizeof(KEVENT ), 
					      tag__1 /*'XMOC'*/);
	if(pResFiltEvent == (void *  )0)
	  {
	    (PIrp->IoStatus).Status = (NTSTATUS)0xC000009AL;
	    // TRACER
	    myStatus = (NTSTATUS)0xC000009AL;
	    IofCompleteRequest(PIrp, 0);
	    SerialIRPEpilogue(pDevExt);
	    return (NTSTATUS )0xC000009AL;
	  }
	KeInitializeEvent(pResFiltEvent, SynchronizationEvent,0);
	{
	  irpSp = ((PIrp->Tail).Overlay).CurrentStackLocation;
	  nextIrpSp = ((PIrp->Tail).Overlay).CurrentStackLocation -1 ;
	  memcpy(nextIrpSp, irpSp, (LONG )((LONG_PTR )(&((IO_STACK_LOCATION * )0)->CompletionRoutine)));
	  nextIrpSp->Control = 0;
	}
	// TRACER
	_ABORT(s != NP);
	_ABORT(compRegistered != 0);
	compRegistered = 1;
	// compFptr = SerialSyncCompletion;

	// BLAST
/* 	if(s != NP) */
/* 	  errorFn(); */
/* 	else */
/* 	  { */
/* 	    if(compRegistered != 0) */
/* 	      errorFn(); */
/* 	    else */
/* 	      { */
/* 		compRegistered = 1; */
/* 		compFptr = SerialSyncCompletion; */
/* 	      } */
/* 	  } */
	{
	  irpSp = ((PIrp->Tail).Overlay).CurrentStackLocation -1 ;
	  irpSp->CompletionRoutine = SerialSyncCompletion;	  
	  irpSp->Context = pResFiltEvent;
	  irpSp->Control = 0;
/* 	  if(1) */
/* 	      irpSp->Control = 0x40; */
/* 	  if(1) */
/* 	      irpSp->Control |= 0x80; */
/* 	  if(1) */
	  irpSp->Control |= 0x20;
	}
	status = IofCallDriver(pLowerDevObj, PIrp);
	if(status == (NTSTATUS )0x00000103L)
	  {
	    KeWaitForSingleObject(pResFiltEvent, Executive,
				  KernelMode, 0, (void *  )0);
	  }
	ExFreePool(pResFiltEvent);
	if((PIrp->IoStatus).Information == 0)
	  {
	    if(((pIrpStack->Parameters).FilterResourceRequirements ).IoResourceRequirementList == 0)
	      {
		// status = (PIrp->IoStatus).Status;
		// TRACER
		status = myStatus;
		IofCompleteRequest(PIrp, 0);
		SerialIRPEpilogue(pDevExt);
		return status;
	      }
	    (PIrp->IoStatus).Information = 
	      (ULONG_PTR)((pIrpStack->Parameters).FilterResourceRequirements).IoResourceRequirementList; 
	  }
	status = IoOpenDeviceRegistryKey(pDevExt->Pdo, 1, 0x00020000L, & pnpKey);
	if(! ((NTSTATUS )status >= 0))
	  {
	    (PIrp->IoStatus).Status = status;
	    // TRACER
	    myStatus = status;
	    IofCompleteRequest(PIrp, 0);
	    SerialIRPEpilogue(pDevExt);
	    return status;
	  }
	status = SerialGetRegistryKeyValue(pnpKey,
					   "M\0u\0l\0t\0i\0p\0o\0r\0t\0D\0e\0v\0i\0c\0e\0",
					   sizeof("M\0u\0l\0t\0i\0p\0o\0r\0t\0D\0e\0v\0i\0c\0e\0"),
					   & isMulti, sizeof(ULONG ));
	ZwClose(pnpKey);
	pReqList = (PIO_RESOURCE_REQUIREMENTS_LIST)(PIrp->IoStatus).Information;
	pResList = & (pReqList->List)[0];
	for(listNum = 0; listNum < pReqList->AlternativeLists;
	    listNum++)
	  {
	    gotISR = 0;
	    gotInt = 0;
	    for(j = 0; j < pResList->Count; j++)
	      {
		pResDesc = & (pResList->Descriptors)[j];
		switch(pResDesc->Type)
		  {
		  case 1:
		    if(isMulti && ((pResDesc->u).Port).Length == (ULONG )(1 * 1) && ! gotISR)
		      {
			gotISR = 1;
			pResDesc->ShareDisposition =  CmResourceShareShared;
		      }
		    break;
		  case 2:
		    if(! gotInt)
		      {
			gotInt = 1;
			if(pResDesc->ShareDisposition != CmResourceShareShared)
			  pResDesc->ShareDisposition = CmResourceShareShared;
			else
			  pDevExt->InterruptShareable = 1;
		      }
		    break;
		  default :
		    break;
		  }
		if(isMulti && gotInt && gotISR || ! isMulti && gotInt)
		  break;		
	      } // end of inner for loop
	    pResList = (PIO_RESOURCE_LIST )((PUCHAR)pResList + sizeof(IO_RESOURCE_LIST ) +
					    sizeof(IO_RESOURCE_DESCRIPTOR ) * (pResList->Count - 1));
	    
	  } // end of outer for loop
	
	(PIrp->IoStatus).Status = (NTSTATUS )0x00000000L;
	// TRACER
	myStatus =(NTSTATUS )0x00000000L;
	IofCompleteRequest(PIrp, 0);
	SerialIRPEpilogue(pDevExt);
	return (NTSTATUS )0x00000000L;
      }
    case 0x14:
      {
	if(pDevExt->Flags & 0x4L)
	  {	    
	    (PIrp->IoStatus).Information =  (PIrp->IoStatus).Information | 0x00000004;
	    (PIrp->IoStatus).Status = (NTSTATUS)0x00000000L;
	    // TRACER
	    myStatus = (NTSTATUS)0x00000000L;
	  }
	{
	  irpSp = ((PIrp->Tail).Overlay).CurrentStackLocation;
	  nextIrpSp = ((PIrp->Tail).Overlay).CurrentStackLocation - 1; 
	  memcpy(nextIrpSp, irpSp, (LONG )((LONG_PTR )(& ((IO_STACK_LOCATION *)0)->CompletionRoutine)));
	  nextIrpSp->Control = 0;
	}
	return SerialIoCallDriver(pDevExt, pLowerDevObj, PIrp);
      }
    case 0x04:
      {
	SerialSetDeviceFlags(pDevExt, & pDevExt->Flags, 0x2L,1);
	SerialSetDeviceFlags(pDevExt, &
			     pDevExt->DevicePNPAccept, 0x4L, 1);
	SerialSetDeviceFlags(pDevExt, &
			     pDevExt->DevicePNPAccept, 0x2L, 0);
	pDevExt->PNPState = 0x3L;
	InterlockedDecrement(& pDevExt->PendingIRPCnt);
	pendingIRPs = InterlockedDecrement(&
					   pDevExt->PendingIRPCnt);
	if(pendingIRPs)
	  {
	    KeWaitForSingleObject(&
				  pDevExt->PendingIRPEvent, Executive,
				  KernelMode, 0, (void *  )0);
	  }
	InterlockedIncrement(& pDevExt->PendingIRPCnt);
	if(pDevExt->Flags & 0x1L)
	    SerialReleaseResources(pDevExt);

	(PIrp->IoStatus).Status = (NTSTATUS )0x00000000L;
	// TRACER
	myStatus = (NTSTATUS )0x00000000L;

	// TRACER
	_ABORT(s != NP);
	s = SKIP1;

	// BLAST
/* 	if(s == NP) */
/* 	  s = SKIP1; */
/* 	else */
/* 	  errorFn(); */

	PIrp->CurrentLocation++;
	((PIrp->Tail).Overlay).CurrentStackLocation++;
	return IofCallDriver(pLowerDevObj, PIrp);
      }
    case 0x05:
      {
	KIRQL oldIrql ;
	if(pDevExt->PortOnAMultiportCard)
	  {
	    (PIrp->IoStatus).Status = (NTSTATUS)0xC00000BBL;
	    // TRACER
	    myStatus = (NTSTATUS)0xC00000BBL;
	    IofCompleteRequest(PIrp, 0);
	    SerialIRPEpilogue(pDevExt);
	    return (NTSTATUS )0xC00000BBL;
	  }
	if(pDevExt->PNPState != 0x1L)
	  {
	    // TRACER
	    _ABORT(s != NP);
	    s = SKIP1;

	    // BLAST
/* 	    if(s == NP) */
/* 	      s = SKIP1; */
/* 	    else */
/* 	      errorFn(); */

	    PIrp->CurrentLocation++;
	    ((PIrp->Tail).Overlay).CurrentStackLocation++;
	    return SerialIoCallDriver(pDevExt, pLowerDevObj, PIrp);
	  }
	ExAcquireFastMutex(& pDevExt->OpenMutex);
	if(pDevExt->DeviceIsOpened)
	  {
	    ExReleaseFastMutex(& pDevExt->OpenMutex);
	    (PIrp->IoStatus).Status = (NTSTATUS)0x80000011L;
	    // TRACER
	    myStatus = (NTSTATUS)0x80000011L;
	    IofCompleteRequest(PIrp, 0);
	    SerialIRPEpilogue(pDevExt);
	    return (NTSTATUS )0x80000011L;
	  }
	pDevExt->PNPState = 0x2L;
	SerialSetDeviceFlags(pDevExt, &
			     pDevExt->DevicePNPAccept, 0x2L, 1);
	ExReleaseFastMutex(& pDevExt->OpenMutex);
	(PIrp->IoStatus).Status = (NTSTATUS )0x00000000L;
	// TRACER
	myStatus = (NTSTATUS )0x00000000L;
	{
	  irpSp = ((PIrp->Tail).Overlay).CurrentStackLocation;
	  nextIrpSp = ((PIrp->Tail).Overlay).CurrentStackLocation -1 ;
	  memcpy(nextIrpSp, irpSp, (LONG )((LONG_PTR )(&
						       ((IO_STACK_LOCATION * 
							 )0)->CompletionRoutine)));
	  nextIrpSp->Control = 0;
	}
	return SerialIoCallDriver(pDevExt, pLowerDevObj, PIrp);
      }
    case 0x06:
      if(pDevExt->PNPState == 0x2L)
	{
	  pDevExt->PNPState = 0x1L;
	  SerialSetDeviceFlags(pDevExt, &
			       pDevExt->DevicePNPAccept, 0x2L, 0);
	}
      (PIrp->IoStatus).Status = (NTSTATUS )0x00000000L;
      // TRACER
      myStatus = (NTSTATUS )0x00000000L;
      {
	irpSp = ((PIrp->Tail).Overlay).CurrentStackLocation;
	nextIrpSp = ((PIrp->Tail).Overlay).CurrentStackLocation - 1;
	memcpy(nextIrpSp, irpSp, (LONG )((LONG_PTR )(& ((IO_STACK_LOCATION * )0)->CompletionRoutine)));
	nextIrpSp->Control = 0;
      }
      return SerialIoCallDriver(pDevExt, pLowerDevObj, PIrp);
    case 0x03:
      pDevExt->PNPState = 0x1L;
      SerialSetDeviceFlags(pDevExt, & pDevExt->DevicePNPAccept, 0x1L, 0);
      (PIrp->IoStatus).Status = (NTSTATUS )0x00000000L;
      // TRACER
      myStatus = (NTSTATUS )0x00000000L;
      {
	irpSp = ((PIrp->Tail).Overlay).CurrentStackLocation;
	nextIrpSp = ((PIrp->Tail).Overlay).CurrentStackLocation - 1;
	memcpy(nextIrpSp, irpSp, (LONG )((LONG_PTR )(&((IO_STACK_LOCATION * )0)->CompletionRoutine)));
	nextIrpSp->Control = 0;
      }
      return SerialIoCallDriver(pDevExt, pLowerDevObj, PIrp);
    case 0x01:
      {
	ExAcquireFastMutex(& pDevExt->OpenMutex);
	if(pDevExt->DeviceIsOpened)
	  {
	    ExReleaseFastMutex(& pDevExt->OpenMutex);
	    (PIrp->IoStatus).Status = (NTSTATUS)0x80000011L;
	    // TRACER
	    myStatus = (NTSTATUS)0x80000011L;
	    IofCompleteRequest(PIrp, 0);
	    SerialIRPEpilogue(pDevExt);
	    return (NTSTATUS )0x80000011L;
	  }
	pDevExt->PNPState = 0x4L;
	SerialSetDeviceFlags(pDevExt, &
			     pDevExt->DevicePNPAccept, 0x1L, 1);
	ExReleaseFastMutex(& pDevExt->OpenMutex);
	(PIrp->IoStatus).Status = (NTSTATUS )0x00000000L;
	// TRACER
	myStatus = (NTSTATUS )0x00000000L;
	{
	  irpSp = ((PIrp->Tail).Overlay).CurrentStackLocation;
	  nextIrpSp = ((PIrp->Tail).Overlay).CurrentStackLocation -1 ;
	  memcpy(nextIrpSp, irpSp, (LONG )((LONG_PTR )(&((IO_STACK_LOCATION * )0)->CompletionRoutine)));
	  nextIrpSp->Control = 0;
	}
	return SerialIoCallDriver(pDevExt, pLowerDevObj, PIrp);
      }
    case 0x17:
      {
	SerialSetDeviceFlags(pDevExt, &
			     pDevExt->DevicePNPAccept, 0x8L, 1);
	SerialKillPendingIrps(PDevObj);
	InterlockedDecrement(& pDevExt->PendingIRPCnt);
	pendingIRPs = InterlockedDecrement(&pDevExt->PendingIRPCnt);
	if(pendingIRPs)
	  {
	    KeWaitForSingleObject(&
				  pDevExt->PendingIRPEvent, Executive,
				  KernelMode, 0, (void *  )0);
	  }
	InterlockedIncrement(& pDevExt->PendingIRPCnt);
	SerialDisableInterfacesResources(PDevObj, 0);
	(PIrp->IoStatus).Status = (NTSTATUS )0x00000000L;
	// TRACER
	myStatus = (NTSTATUS )0x00000000L;

	// TRACER
	_ABORT(s != NP);
	s = SKIP1;

	// BLAST
/* 	if(s == NP) */
/* 	  s = SKIP1; */
/* 	else */
/* 	  errorFn(); */

	PIrp->CurrentLocation++;
	((PIrp->Tail).Overlay).CurrentStackLocation++;
	return SerialIoCallDriver(pDevExt, pLowerDevObj, PIrp);
      }
    case 0x02:
      {
	SerialSetDeviceFlags(pDevExt, &
			     pDevExt->DevicePNPAccept, 0x1L, 1);
	SerialKillPendingIrps(PDevObj);
	InterlockedDecrement(& pDevExt->PendingIRPCnt);
	pendingIRPs = InterlockedDecrement(&
					   pDevExt->PendingIRPCnt);
	if(pendingIRPs)
	  {
	    KeWaitForSingleObject(&pDevExt->PendingIRPEvent, Executive,
				  KernelMode, 0, (void *  )0);
	  }
	SerialRemoveDevObj(PDevObj);
	(PIrp->IoStatus).Status = (NTSTATUS )0x00000000L;
	// TRACER
	myStatus = (NTSTATUS )0x00000000L;
	{
	  irpSp =((PIrp->Tail).Overlay).CurrentStackLocation;
	  nextIrpSp = ((PIrp->Tail).Overlay).CurrentStackLocation - 1;
	  memcpy(nextIrpSp, irpSp, (LONG )((LONG_PTR )(&((IO_STACK_LOCATION * )0)->CompletionRoutine)));
	  nextIrpSp->Control = 0;
	}
	IofCallDriver(pLowerDevObj, PIrp);
	return (NTSTATUS )0x00000000L;
      }
    default :
      break;
    }

  // TRACER
  _ABORT(s != NP);
  s = SKIP1;

  // BLAST
/*   if(s == NP) */
/*     s = SKIP1; */
/*   else */
/*     errorFn(); */

  PIrp->CurrentLocation++;
  ((PIrp->Tail).Overlay).CurrentStackLocation++;
  status = SerialIoCallDriver(pDevExt, pLowerDevObj, PIrp);
  return status;
}

UINT32 SerialReportMaxBaudRate(ULONG Bauds )
{
  if(Bauds & (ULONG )0x00010000)
      return 128U * 1024U;
  if(Bauds & (ULONG )0x00020000)
      return 115200U;
  if(Bauds & (ULONG )0x00008000)
      return 56U * 1024U;
  if(Bauds & (ULONG )0x00040000)
      return 57600U;
  if(Bauds & (ULONG )0x00004000)
      return 38400U;
  if(Bauds & (ULONG )0x00002000)
      return 19200U;
  if(Bauds & (ULONG )0x00001000)
      return 14400U;
  if(Bauds & (ULONG )0x00000800)
      return 9600U;
  if(Bauds & (ULONG )0x00000400)
      return 7200U;
  if(Bauds & (ULONG )0x00000200)
      return 4800U;
  if(Bauds & (ULONG )0x00000100)
      return 2400U;
  if(Bauds & (ULONG )0x00000080)
      return 1800U;
  if(Bauds & (ULONG )0x00000040)
      return 1200U;
  if(Bauds & (ULONG )0x00000020)
      return 600U;
  if(Bauds & (ULONG )0x00000010)
      return 300U;
  if(Bauds & (ULONG )0x00000008)
      return 150U;
  if(Bauds & (ULONG )0x00000004)
      return 135U;
  if(Bauds & (ULONG )0x00000002)
      return 110U;
  if(Bauds & (ULONG )0x00000001)
      return 75U;
  return 0;
}


NTSTATUS SerialFinishStartDevice(PDEVICE_OBJECT PDevObj , PCM_RESOURCE_LIST PResList ,
				 PCM_RESOURCE_LIST PTrResList , PSERIAL_USER_DATA PUserData )
{
  PSERIAL_DEVICE_EXTENSION pDevExt;
  NTSTATUS status ;
  PCONFIG_DATA pConfig ;
  HANDLE pnpKey ;
  ULONG one;
  BOOLEAN allocedUserData;
  PULONG countSoFar;
  PLIST_ENTRY EX_Blink ;
  PLIST_ENTRY EX_ListHead ;

  pDevExt = PDevObj->DeviceExtension;
  one = 1;
  allocedUserData = 0;

  if(pDevExt->Flags & 0x2L && pDevExt->Flags & 0x1L)
    {
      SerialSetDeviceFlags(pDevExt, & pDevExt->Flags, 0x2L, 0);
      pDevExt->PNPState = 0x6L;
      pDevExt->TopLevelOurIsr = (void *  )0;
      pDevExt->TopLevelOurIsrContext = (void *  )0;
      pDevExt->OriginalController = SerialPhysicalZero___1;
      pDevExt->OriginalInterruptStatus = SerialPhysicalZero___1;
      pDevExt->OurIsr = (void *  )0;
      pDevExt->OurIsrContext = (void *  )0;
      pDevExt->Controller = (void *  )0;
      pDevExt->InterruptStatus = (void *  )0;
      pDevExt->Interrupt = (void *  )0;
      pDevExt->SpanOfController = 0;
      pDevExt->SpanOfInterruptStatus = 0;
      pDevExt->Vector = 0;
      pDevExt->Irql = 0;
      pDevExt->OriginalVector = 0;
      pDevExt->OriginalIrql = 0;
      pDevExt->AddressSpace = 0;
      pDevExt->BusNumber = 0;
      pDevExt->InterfaceType = 0;
      pDevExt->CIsrSw = (void *  )0;
      PUserData = ExAllocatePoolWithTag(PagedPool,
					sizeof(SERIAL_USER_DATA ), tag__1 /*'XMOC'*/);
      if(PUserData == (void *  )0)
	return (NTSTATUS )0xC000009AL;
      allocedUserData = 1;
      memset(PUserData, 0, sizeof(SERIAL_USER_DATA ));
      PUserData->DisablePort = 0;
      PUserData->UserClockRate = pDevExt->ClockRate;
      PUserData->TxFIFO = pDevExt->TxFifoAmount;
      PUserData->PermitShareDefault = pDevExt->PermitShare;
      switch(pDevExt->RxFifoTrigger)
	{
	case (UCHAR )0x00:
	  PUserData->RxFIFO = 1;
	  break;
	case (UCHAR )0x40:
	  PUserData->RxFIFO = 4;
	  break;
	case (UCHAR )0x80:
	  PUserData->RxFIFO = 8;
	  break;
	case (UCHAR )0xc0:
	  PUserData->RxFIFO = 14;
	  break;
	default :
	  PUserData->RxFIFO = 1;
	}
    }
  else
    {
      // #line 1567
      status = IoOpenDeviceRegistryKey(pDevExt->Pdo, 1, 0x00020000L, &
				       pnpKey);
      // #line 1571
      if((NTSTATUS )status >= 0)
	{
	  ULONG powerPolicy = 0;
	  SerialGetRegistryKeyValue(pnpKey,
				    "S\0e\0r\0i\0a\0l\0R\0e\0l\0i\0n\0q\0u\0i\0s\0h\0P\0o\0w\0e\0r\0P\0o\0l\0i\0c\0y\0",
				    sizeof("S\0e\0r\0i\0a\0l\0R\0e\0l\0i\0n\0q\0u\0i\0s\0h\0P\0o\0w\0e\0r\0P\0o\0l\0i\0c\0y\0"
					   ), & powerPolicy, sizeof(ULONG ));	  
	  pDevExt->OwnsPowerPolicy = /* powerPolicy ? 0 :  */1;
	  ZwClose(pnpKey);
	}
    }
  pConfig = ExAllocatePoolWithTag(PagedPool, sizeof(CONFIG_DATA ),
				  tag__1 /* 'XMOC' */);
  if(pConfig == (void *  )0)
    {
      SerialLogError(pDevExt->DriverObject, (void *  )0,
		     SerialPhysicalZero___1, 
		     SerialPhysicalZero___1, 0, 0, 0,
		     37, (NTSTATUS )0x00000000L, (NTSTATUS )0xC0060008L, 0,
		     (void *  )0, 0, (void *  )0);
      status = (NTSTATUS )0xC000009AL;
		goto SerialFinishStartDeviceError;
    }
  memset(pConfig, 0, sizeof(CONFIG_DATA ));
  status = SerialGetPortInfo(PDevObj, PResList, PTrResList, pConfig,
			     PUserData);
  if(! ((NTSTATUS )status >= 0))
      goto SerialFinishStartDeviceError;
  if(pDevExt->PowerState != PowerDeviceD0)
    {
      status = SerialGotoPowerState(pDevExt->Pdo, pDevExt,
				    PowerDeviceD0);
      if(! ((NTSTATUS )status >= 0))
	goto SerialFinishStartDeviceError;
    }
  status = SerialFindInitController(PDevObj, pConfig); 
  if(! ((NTSTATUS )status >= 0))
    goto SerialFinishStartDeviceError;
  if(pDevExt != (void *  )0)
    { }
  else
    { }

  if(! pDevExt->Interrupt && pDevExt->OurIsr)
    {
      (pDevExt->CIsrSw)->IsrFunc = pDevExt->OurIsr;
      (pDevExt->CIsrSw)->Context = pDevExt->OurIsrContext;
      status = IoConnectInterrupt(& pDevExt->Interrupt, SerialCIsrSw,
				  pDevExt->CIsrSw, (void *  )0, pDevExt->Vector,
				  pDevExt->Irql, pDevExt->Irql, pConfig->InterruptMode,
				  pDevExt->InterruptShareable, pConfig->Affinity, 0);
      if(! ((NTSTATUS )status >= 0))
	{
	  SerialLogError(PDevObj->DriverObject, PDevObj,
			 pDevExt->OriginalController,
			 SerialPhysicalZero___1, 0, 0, 0, 1, status,
			 (NTSTATUS )0xC0060007L,
			 (pDevExt->DeviceName).Length + sizeof(WCHAR ),
			 (pDevExt->DeviceName).Buffer, 0, (void *  )0);
	  status = (NTSTATUS )0xC0060007L;
	  goto SerialFinishStartDeviceError;
	}
    }
  {
    EX_ListHead = & SerialGlobals.AllDevObjs;
    EX_Blink = EX_ListHead->Blink;
    (& pDevExt->AllDevObjs)->Flink = EX_ListHead;
    (& pDevExt->AllDevObjs)->Blink = EX_Blink;
    EX_Blink->Flink = & pDevExt->AllDevObjs;
    EX_ListHead->Blink = & pDevExt->AllDevObjs;
  }
/*       // #line 1782 */
/*       do */
/* 	{ */
/* 	  // #line 1782 */
/* 	  WRITE_PORT_UCHAR(pDevExt->Controller + (ULONG )(0x01 * */
/* 							  1), 0); */
/* 	} */
/*       while(0); */
  if(pDevExt->Jensen)
    {
/* 	  // #line 1790 */
/* 	  do */
/* 	    { */
/* 	      // #line 1790 */
/* 	      WRITE_PORT_UCHAR(pDevExt->Controller + (ULONG )(0x04 * */
/* 							      1), (UCHAR )0x08); */
/* 	    } */
/* 	  while(0); */
    }
  else
    {
/* 	  do */
/* 	    { */
/* 			// #line 1797 */
/* 	      WRITE_PORT_UCHAR(pDevExt->Controller + (ULONG )(0x04 * */
/* 							      1), (UCHAR )0); */
/* 	    } */
/* 	  while(0); */
    }
  KeSynchronizeExecution(pDevExt->Interrupt, SerialReset, pDevExt);
  KeSynchronizeExecution(pDevExt->Interrupt, SerialMarkClose, pDevExt);
  KeSynchronizeExecution(pDevExt->Interrupt, SerialClrRTS, pDevExt);
  KeSynchronizeExecution(pDevExt->Interrupt, SerialClrDTR, pDevExt);
  if(pDevExt->PNPState == 0x0L)
    {
      status = SerialDoExternalNaming(pDevExt,
				      (pDevExt->DeviceObject)->DriverObject);
      if(! ((NTSTATUS )status >= 0))
	      status = (NTSTATUS )0x00000000L;
    }
  
 SerialFinishStartDeviceError:
  if(! ((NTSTATUS )status >= 0))
    {
      if(pDevExt->PNPState == 0x6L)
	{
	  SerialKillPendingIrps(PDevObj);
	  SerialSetDeviceFlags(pDevExt, & pDevExt->DevicePNPAccept, 0x1L, 1);
	  SerialSetDeviceFlags(pDevExt, & pDevExt->Flags, 0x1L, 0);
	  
	}
	}
  else
    {
      (pDevExt->WmiHwData).IrqNumber = pDevExt->Irql;
      (pDevExt->WmiHwData).IrqLevel = pDevExt->Irql;
      (pDevExt->WmiHwData).IrqVector = pDevExt->Vector;
      (pDevExt->WmiHwData).IrqAffinityMask = pConfig->Affinity;
      if(pConfig->InterruptMode == Latched)
	(pDevExt->WmiHwData).InterruptType = 0;
      else
	(pDevExt->WmiHwData).InterruptType = 1;

      (pDevExt->WmiHwData).BaseIOAddress = (ULONG_PTR)pDevExt->Controller;
      (pDevExt->WmiCommData).BaudRate = pDevExt->CurrentBaud;
      (pDevExt->WmiCommData).BitsPerByte = (pDevExt->LineControl & 0x03) + 5;      
      (pDevExt->WmiCommData).ParityCheckEnable = /* pDevExt->LineControl */
/* 			& 0x08 ? 1 : */ 0;
      switch(pDevExt->LineControl & (UCHAR )0x38)
	{
	case (UCHAR )0x00:
	  (pDevExt->WmiCommData).Parity = 0;
	  break;
	case (UCHAR )0x08:
	  (pDevExt->WmiCommData).Parity = 1;
	  break;
	case (UCHAR )0x18:
	  (pDevExt->WmiCommData).Parity = 2;
	  break;
	case (UCHAR )0x28:
	  (pDevExt->WmiCommData).Parity = 4;
	  break;
	case (UCHAR )0x38:
	  (pDevExt->WmiCommData).Parity = 3;
	  break;
	default :
	  (pDevExt->WmiCommData).Parity = 0;
	  break;
	}
	  //  (pDevExt->WmiCommData).StopBits = pDevExt->LineControl & (UCHAR)0x04 ? (pDevExt->WmiCommData).BitsPerByte == 5 ? 1 : 2 : 0;
      (pDevExt->WmiCommData).XoffCharacter =(pDevExt->SpecialChars).XoffChar;
      (pDevExt->WmiCommData).XoffXmitThreshold = (pDevExt->HandFlow).XoffLimit;
      (pDevExt->WmiCommData).XonCharacter = (pDevExt->SpecialChars).XonChar;
      (pDevExt->WmiCommData).XonXmitThreshold = (pDevExt->HandFlow).XonLimit;
      (pDevExt->WmiCommData).MaximumBaudRate =  SerialReportMaxBaudRate(pDevExt->SupportedBauds);
      (pDevExt->WmiCommData).MaximumOutputBufferSize = (UINT32)((ULONG )(- 1));
      (pDevExt->WmiCommData).MaximumInputBufferSize = (UINT32 )((ULONG )(- 1));
      (pDevExt->WmiCommData).Support16BitMode = 0;
      (pDevExt->WmiCommData).SupportDTRDSR = 1;
      (pDevExt->WmiCommData).SupportIntervalTimeouts = 1;
      (pDevExt->WmiCommData).SupportParityCheck = 1;
      (pDevExt->WmiCommData).SupportRTSCTS = 1;
      (pDevExt->WmiCommData).SupportXonXoff = 1;
      (pDevExt->WmiCommData).SettableBaudRate = 1;
      (pDevExt->WmiCommData).SettableDataBits = 1;
      (pDevExt->WmiCommData).SettableFlowControl = 1;
      (pDevExt->WmiCommData).SettableParity = 1;
      (pDevExt->WmiCommData).SettableParityCheck = 1;
      (pDevExt->WmiCommData).SettableStopBits = 1;
      (pDevExt->WmiCommData).IsBusy = 0;
      memset(& pDevExt->WmiPerfData, 0, sizeof(pDevExt->WmiPerfData));
      if(pDevExt->PNPState == 0x0L)
	{
	  countSoFar/*  = & (IoGetConfigurationInformation())->SerialCount */;
	  (* countSoFar)++;
	  (pDevExt->WmiLibInfo).GuidCount =sizeof(SerialWmiGuidList) /sizeof(WMIGUIDREGINFO );
	  (pDevExt->WmiLibInfo).GuidList = SerialWmiGuidList;
	  (pDevExt->WmiLibInfo).QueryWmiRegInfo =SerialQueryWmiRegInfo;
	  (pDevExt->WmiLibInfo).QueryWmiDataBlock = SerialQueryWmiDataBlock;
	  (pDevExt->WmiLibInfo).SetWmiDataBlock =SerialSetWmiDataBlock;
	  (pDevExt->WmiLibInfo).SetWmiDataItem = SerialSetWmiDataItem;
	  (pDevExt->WmiLibInfo).ExecuteWmiMethod = (void *  )0;
	  (pDevExt->WmiLibInfo).WmiFunctionControl = (void *  )0;
	  IoWMIRegistrationControl(PDevObj, 1);
	}
      if(pDevExt->PNPState == 0x6L)
	SerialUnstallIrps(pDevExt);
      pDevExt->PNPState = 0x1L;
      SerialSetDeviceFlags(pDevExt, & pDevExt->DevicePNPAccept, /*~*/ 0x0L, 0);
      SerialSetDeviceFlags(pDevExt, & pDevExt->Flags, 0x1L, 1);
    }
    
  if(pConfig)
    ExFreePool(pConfig);
  if(PUserData != (void *  )0 && allocedUserData)
    ExFreePool(PUserData);
  return status;
}

NTSTATUS SerialStartDevice(PDEVICE_OBJECT PDevObj , PIRP PIrp )
{

  PIO_STACK_LOCATION pIrpStack;
  NTSTATUS status;
  PSERIAL_DEVICE_EXTENSION pDevExt;
  PDEVICE_OBJECT pLowerDevObj;
  PIO_STACK_LOCATION irpSp ;
  PIO_STACK_LOCATION nextIrpSp ;

  pIrpStack = ((PIrp->Tail).Overlay).CurrentStackLocation;
  status = (NTSTATUS )0xC0000002L;
  pDevExt = PDevObj->DeviceExtension;
  pLowerDevObj = pDevExt->LowerDeviceObject;

  KeInitializeEvent(& pDevExt->SerialStartEvent, SynchronizationEvent, 0);
  irpSp = ((PIrp->Tail).Overlay).CurrentStackLocation;
  nextIrpSp = ((PIrp->Tail).Overlay).CurrentStackLocation - 1;
  memcpy(nextIrpSp, irpSp, (LONG )((LONG_PTR )(& ((IO_STACK_LOCATION *  )0)->CompletionRoutine)));
  nextIrpSp->Control = 0;
  // TRACER
  _ABORT(s != NP);
  _ABORT(compRegistered != 0);
  compRegistered = 1;
  // compFptr = SerialSyncCompletion;
  
  // BLAST
/*   if(s != NP) */
/*     errorFn(); */
/*   else */
/*     { */
/*       if(compRegistered != 0) */
/* 	errorFn(); */
/*       else */
/* 	{ */
/* 	  compRegistered = 1; */
/* 	  compFptr = SerialSyncCompletion; */
/* 	} */
/*     } */
  
  irpSp = ((PIrp->Tail).Overlay).CurrentStackLocation - 1;
  irpSp->CompletionRoutine = SerialSyncCompletion;
  irpSp->Context = & pDevExt->SerialStartEvent;
  irpSp->Control = 0;
  if(1)
    irpSp->Control = 0x40;
  if(1)
    irpSp->Control |= 0x80;
  if(1)
    irpSp->Control |= 0x20;
  status = IofCallDriver(pLowerDevObj, PIrp);
  if(status == (NTSTATUS )0x00000103L)
    {
      KeWaitForSingleObject(& pDevExt->SerialStartEvent, Executive,
			    KernelMode, 0, (void *  )0);
      status = (PIrp->IoStatus).Status;
    }
  if(! ((NTSTATUS )status >= 0))
    return status;
  status = SerialFinishStartDevice(PDevObj,
				   ((pIrpStack->Parameters).StartDevice).AllocatedResources,
				   ((pIrpStack->Parameters).StartDevice).AllocatedResourcesTranslated,
				   (void *  )0);
  return status;
}

NTSTATUS SerialItemCallBack(PVOID Context , PUNICODE_STRING PathName ,
			    INTERFACE_TYPE BusType , ULONG BusNumber , 
			    PKEY_VALUE_FULL_INFORMATION *  BusInformation , 
			    CONFIGURATION_TYPE ControllerType , ULONG ControllerNumber ,
			    PKEY_VALUE_FULL_INFORMATION *  ControllerInformation,
			    CONFIGURATION_TYPE PeripheralType , ULONG PeripheralNumber ,
			    PKEY_VALUE_FULL_INFORMATION *  PeripheralInformation )
{
  * (BOOLEAN *  )Context = 1;
  return (NTSTATUS )0x00000000L;
}

// #line 2167
NTSTATUS SerialControllerCallBack(PVOID Context , PUNICODE_STRING PathName ,
				  INTERFACE_TYPE BusType , ULONG BusNumber , 
				  PKEY_VALUE_FULL_INFORMATION *  BusInformation ,
				  CONFIGURATION_TYPE ControllerType , ULONG ControllerNumber ,
				  PKEY_VALUE_FULL_INFORMATION *  ControllerInformation,
				  CONFIGURATION_TYPE PeripheralType , ULONG PeripheralNumber ,
				  PKEY_VALUE_FULL_INFORMATION *  PeripheralInformation )
{
  PCM_FULL_RESOURCE_DESCRIPTOR controllerData ;
  PSERIAL_PTR_CTX pContext;
  ULONG i ;
  PCM_PARTIAL_RESOURCE_DESCRIPTOR partial;

  pContext = (PSERIAL_PTR_CTX )Context;
  if((ControllerInformation[IoQueryDeviceConfigurationData])->DataLength == 0)
    {
      pContext->isPointer = 0;
      return (NTSTATUS )0x00000000L;
    }
  controllerData = (PCM_FULL_RESOURCE_DESCRIPTOR )(
		   (PUCHAR)ControllerInformation[IoQueryDeviceConfigurationData] +  
		   (ControllerInformation[IoQueryDeviceConfigurationData])->DataOffset);

  for(i = 0; i < (controllerData->PartialResourceList).Count; i++)
    {
      partial = &((controllerData->PartialResourceList).PartialDescriptors)[i];
      switch(partial->Type)
	{
	case 1:
	  if((((partial->u).Port).Start).QuadPart == (pContext->Port).QuadPart)
	    {
	      pContext->isPointer = 1;
	      return (NTSTATUS )0x00000000L;
	    }
	case 2:
	  if(((partial->u).Interrupt).Vector == pContext->Vector)
	    {
	      pContext->isPointer = 2;
	      return (NTSTATUS )0x00000000L;
	    }
	default :
	  break;
	}
    }
  // #line 2270
  pContext->isPointer = 0;
  return (NTSTATUS )0x00000000L;
}

NTSTATUS SerialGetPortInfo(PDEVICE_OBJECT PDevObj , PCM_RESOURCE_LIST PResList ,
			   PCM_RESOURCE_LIST PTrResList , PCONFIG_DATA PConfig , 
			   PSERIAL_USER_DATA PUserData )
{
  PSERIAL_DEVICE_EXTENSION pDevExt ;
  PDEVICE_OBJECT pLowerDevObj ;
  NTSTATUS status;
  CONFIGURATION_TYPE pointer;
  CONFIGURATION_TYPE controllerType; 
  HANDLE keyHandle ;
  ULONG count ;
  ULONG i ;
  INTERFACE_TYPE interfaceType ;
  PCM_PARTIAL_RESOURCE_LIST pPartialResourceList , pPartialTrResourceList;
  PCM_PARTIAL_RESOURCE_DESCRIPTOR pPartialResourceDesc , pPartialTrResourceDesc ;
  PCM_FULL_RESOURCE_DESCRIPTOR pFullResourceDesc , pFullTrResourceDesc;
  ULONG defaultInterruptMode ;
  ULONG defaultAddressSpace ;
  ULONG defaultInterfaceType ;
  ULONG defaultClockRate ;
  ULONG zero;
  SERIAL_PTR_CTX foundPointerCtx ;
  ULONG isMulti;
  ULONG gotInt;
  ULONG gotISR;
  ULONG gotIO ;
  ULONG ioResIndex ;
  ULONG curIoIndex ;
  PCM_SERIAL_DEVICE_DATA sDeviceData ;

  pDevExt = PDevObj->DeviceExtension;
  pLowerDevObj = pDevExt->LowerDeviceObject;
  status = (NTSTATUS )0xC0000002L;
  pointer = PointerPeripheral;
  controllerType = SerialController;
  pFullResourceDesc = (void *  )0;
  pFullTrResourceDesc = (void *  )0;
  zero = 0;
  isMulti = 0;
  gotInt = 0;
  gotISR = 0;
  gotIO = 0;
  ioResIndex = 0;
  curIoIndex = 0;

  if(PResList == (void *  )0 || PTrResList == (void *  )0)
    {
      return (NTSTATUS )0xC000009AL;
    }
  status = IoOpenDeviceRegistryKey(pDevExt->Pdo, 1, 0x00020000L, & keyHandle);
  if(! ((NTSTATUS )status >= 0))
    {
      return status;
    }
  status = SerialGetRegistryKeyValue(keyHandle,
				     "M\0u\0l\0t\0i\0p\0o\0r\0t\0D\0e\0v\0i\0c\0e\0",
				     sizeof("M\0u\0l\0t\0i\0p\0o\0r\0t\0D\0e\0v\0i\0c\0e\0"), 
				     &isMulti, sizeof(ULONG ));
  if(! ((NTSTATUS )status >= 0))
    {
      isMulti = 0;
    }
  status = SerialGetRegistryKeyValue(keyHandle,
				     "S\0e\0r\0i\0a\0l\0I\0o\0R\0e\0s\0o\0u\0r\0c\0e\0s\0I\0n\0d\0e\0x\0",
		             sizeof("S\0e\0r\0i\0a\0l\0I\0o\0R\0e\0s\0o\0u\0r\0c\0e\0s\0I\0n\0d\0e\0x\0"), 
				     & ioResIndex, sizeof(ULONG ));
  
  if(! ((NTSTATUS )status >= 0))
      ioResIndex = 0;
  ZwClose(keyHandle);
  pFullResourceDesc = & (PResList->List)[0];
  pFullTrResourceDesc = & (PTrResList->List)[0];
  if(pFullResourceDesc)
    {
      pPartialResourceList = & pFullResourceDesc->PartialResourceList;
      pPartialResourceDesc = pPartialResourceList->PartialDescriptors;
      count = pPartialResourceList->Count;
      PConfig->InterfaceType = pFullResourceDesc->InterfaceType;
      PConfig->BusNumber = pFullResourceDesc->BusNumber;
      PConfig->ClockRate = 1843200;
      PConfig->InterruptStatus = SerialPhysicalZero___1;
      PConfig->SpanOfInterruptStatus = (ULONG )(1 * 1);
      for(i = 0; i < count; i++, pPartialResourceDesc++)
	{
	  switch(pPartialResourceDesc->Type)
	    {
	    case 1:
	      {
		if(((pPartialResourceDesc->u).Port).Length== (ULONG )(1 * 1) && gotISR == 0)
		  {
		    if(isMulti)
		      {
			gotISR = 1;
			PConfig->InterruptStatus  = ((pPartialResourceDesc->u).Port).Start;
			PConfig->SpanOfInterruptStatus  = ((pPartialResourceDesc->u).Port).Length;
			PConfig->AddressSpace = pPartialResourceDesc->Flags;
		      }
		  }
		else
		  {
		    if(gotIO == 0)
		      {
			if(curIoIndex ==  ioResIndex)
			  {
			    gotIO = 1;
			    PConfig->Controller = ((pPartialResourceDesc->u).Port).Start;
			    PConfig->SpanOfController = (ULONG )(7 * 1);
			    PConfig->AddressSpace = pPartialResourceDesc->Flags;
			  }
			else
			    curIoIndex++;
		      }
		  }
		break;
	      }
	    case 2:
	      {
		if(gotInt == 0)
		  {
		    gotInt = 1;
		    PConfig->OriginalIrql = ((pPartialResourceDesc->u ).Interrupt).Level;
		    PConfig->OriginalVector = ((pPartialResourceDesc->u).Interrupt).Vector;
		    PConfig->Affinity =((pPartialResourceDesc->u).Interrupt).Affinity;
		    if(pPartialResourceDesc->Flags &  1)
		      {
			PConfig->InterruptMode =  Latched;
		      }
		    else
		      {
			PConfig->InterruptMode = LevelSensitive;
		      }
		  }
		break;
	      }
	    case 5:
	      {
		sDeviceData = (PCM_SERIAL_DEVICE_DATA )(pPartialResourceDesc + 1);
		PConfig->ClockRate =  sDeviceData->BaudClock;
		 
		break;
	      }
	    default :
		break;
	    }
	} // end for
    }
  gotInt = 0;
  gotISR = 0;
  gotIO = 0;
  curIoIndex = 0;
  if(pFullTrResourceDesc)
    {
      pPartialTrResourceList = &pFullTrResourceDesc->PartialResourceList;
      pPartialTrResourceDesc = pPartialTrResourceList->PartialDescriptors;
      count = pPartialTrResourceList->Count;
      PConfig->InterfaceType = pFullTrResourceDesc->InterfaceType;
      PConfig->BusNumber = pFullTrResourceDesc->BusNumber;
      PConfig->TrInterruptStatus = SerialPhysicalZero___1;
      for(i = 0; i < count; i++, pPartialTrResourceDesc++)
	{
	  switch(pPartialTrResourceDesc->Type)
	    {
	    case 1:
	      {
		if(((pPartialTrResourceDesc->u).Port).Length  == (ULONG )(1 * 1) && gotISR == 0)
		  {
		    if(isMulti)
		      {
			gotISR = 1;
			PConfig->TrInterruptStatus=((pPartialTrResourceDesc->u).Port).Start;
		      }
		  }
		else
		  {
		    if(gotIO == 0)
		      {
			if(curIoIndex == ioResIndex)
			  {
			    gotIO = 1;
			    PConfig->TrController = ((pPartialTrResourceDesc->u).Port).Start;
			    PConfig->AddressSpace = pPartialTrResourceDesc->Flags;
			  }
			else
			  curIoIndex++;
		      }
		  }
		break;
	      }
	    case 2:
	      {
		if(gotInt == 0)
		  {
		    gotInt = 1;
		    PConfig->TrVector = ((pPartialTrResourceDesc->u).Interrupt).Vector;
		    PConfig->TrIrql =  ((pPartialTrResourceDesc->u).Interrupt).Level;
		    PConfig->Affinity = ((pPartialTrResourceDesc->u).Interrupt).Affinity;
		  }
		break;
	      }
	    default :
	      break;
	    }
	}
    }
  PConfig->PortIndex = 0;
  PConfig->DisablePort = 0;
  PConfig->PermitSystemWideShare = 0;
  PConfig->MaskInverted = 0;
  PConfig->Indexed = 0;
  PConfig->ForceFifoEnable = driverDefaults.ForceFifoEnableDefault;
  PConfig->RxFIFO = driverDefaults.RxFIFODefault;
  PConfig->TxFIFO = driverDefaults.TxFIFODefault;
  PConfig->PermitShare = driverDefaults.PermitShareDefault;
  PConfig->LogFifo = driverDefaults.LogFifoDefault;
  PConfig->Jensen = driverDefaults.JensenDetected;
  defaultInterfaceType = (ULONG )Isa;
  defaultClockRate = 1843200;
  for(interfaceType = 0; interfaceType < MaximumInterfaceType; interfaceType++)
    {
      ULONG busZero = 0;
      BOOLEAN foundOne = 0;
      if(interfaceType != Internal)
	{
	  IoQueryDeviceDescription(& interfaceType, & busZero,
				   (void *  )0, (void *  )0, (void *  )0, 
				   (void *  )0, SerialItemCallBack, & foundOne);
	  if(foundOne)
	    {
	      defaultInterfaceType = (ULONG )interfaceType;
	      if(defaultInterfaceType == MicroChannel)
		  defaultInterruptMode = 0;
	      break;
	    }
	}
    }
  if(PUserData == (void *  )0)
    {
      status = IoOpenDeviceRegistryKey(pDevExt->Pdo, 1, 0x00020000L, &
				       keyHandle);
      if(! ((NTSTATUS )status >= 0))
	goto PortInfoCleanUp;
      else
	{
	  status = SerialGetRegistryKeyValue(keyHandle,
					     "D\0i\0s\0a\0b\0l\0e\0P\0o\0r\0t\0",
					     sizeof("D\0i\0s\0a\0b\0l\0e\0P\0o\0r\0t\0"), &
					     PConfig->DisablePort, sizeof(ULONG ));
	  status = SerialGetRegistryKeyValue(keyHandle,
					     "F\0o\0r\0c\0e\0F\0i\0f\0o\0E\0n\0a\0b\0l\0e\0",
					     sizeof("F\0o\0r\0c\0e\0F\0i\0f\0o\0E\0n\0a\0b\0l\0e\0"
						    ), & PConfig->ForceFifoEnable, sizeof(ULONG ));
	  status = SerialGetRegistryKeyValue(keyHandle,
					     "R\0x\0F\0I\0F\0O\0",
					     sizeof("R\0x\0F\0I\0F\0O\0"), & PConfig->RxFIFO,
					     sizeof(ULONG ));
	  status = SerialGetRegistryKeyValue(keyHandle,
					     "T\0x\0F\0I\0F\0O\0",
					     sizeof("T\0x\0F\0I\0F\0O\0"), & PConfig->TxFIFO,
					     sizeof(ULONG ));
	  status = SerialGetRegistryKeyValue(keyHandle,
					     "M\0a\0s\0k\0I\0n\0v\0e\0r\0t\0e\0d\0",
					     sizeof("M\0a\0s\0k\0I\0n\0v\0e\0r\0t\0e\0d\0"),
					     & PConfig->MaskInverted, sizeof(ULONG ));
	  status = SerialGetRegistryKeyValue(keyHandle,
				     "S\0h\0a\0r\0e\0 \0S\0y\0s\0t\0e\0m\0 \0I\0n\0t\0e\0r\0r\0u\0p\0t\0",
				sizeof("S\0h\0a\0r\0e\0 \0S\0y\0s\0t\0e\0m\0 \0I\0n\0t\0e\0r\0r\0u\0p\0t\0"
				       ), & PConfig->PermitShare, sizeof(ULONG ));
	  status = SerialGetRegistryKeyValue(keyHandle,
					     "P\0o\0r\0t\0I\0n\0d\0e\0x\0",
					     sizeof("P\0o\0r\0t\0I\0n\0d\0e\0x\0"), &
					     PConfig->PortIndex, sizeof(ULONG ));
	  status = SerialGetRegistryKeyValue(keyHandle,
					     "I\0n\0d\0e\0x\0e\0d\0",
					     sizeof("I\0n\0d\0e\0x\0e\0d\0"), &
					     PConfig->Indexed, sizeof(ULONG ));
	  status = SerialGetRegistryKeyValue(keyHandle,
					     "C\0l\0o\0c\0k\0R\0a\0t\0e\0",
					     sizeof("C\0l\0o\0c\0k\0R\0a\0t\0e\0"), &
					     PConfig->ClockRate, sizeof(ULONG ));
	  if(! ((NTSTATUS )status >= 0))
	      PConfig->ClockRate = defaultClockRate;
	  ZwClose(keyHandle);
	}
    }
  else
    {
      ULONG badValue = (ULONG )(- 1);
      if( PUserData->DisablePort == badValue)
	PConfig->DisablePort = 0;
      else
	PConfig->DisablePort =  PUserData->DisablePort;

      if(PUserData->ForceFIFOEnable ==  badValue)	
	PConfig->ForceFifoEnable =  PUserData->ForceFIFOEnableDefault;
      else
	PConfig->ForceFifoEnable =PUserData->ForceFIFOEnable;
      
      if(PUserData->RxFIFO == badValue)
	PConfig->RxFIFO = PUserData->RxFIFODefault;
      else
	PConfig->RxFIFO =  PUserData->RxFIFO;
      
      if(PUserData->UserIndexed == badValue)	
	PConfig->Indexed =  0;
      else
	PConfig->Indexed = PUserData->UserIndexed;

      if(PUserData->TxFIFO == badValue)	
	PConfig->TxFIFO =  PUserData->TxFIFODefault;
      else
	PConfig->TxFIFO =  PUserData->TxFIFO;
      
      if(PUserData->MaskInverted == badValue)	
	PConfig->MaskInverted =  0;
      else
	PConfig->MaskInverted =  PUserData->MaskInverted;

      if(PUserData->UserClockRate == badValue)
	PConfig->ClockRate =  defaultClockRate;
      else
	PConfig->ClockRate = PUserData->UserClockRate;
      
      PConfig->PermitShare = PUserData->PermitShareDefault;
      PConfig->PortIndex = PUserData->UserPortIndex;
    }
  if(! (PConfig->Controller).LowPart)
    {
      SerialLogError(PDevObj->DriverObject, (void *  )0,
		     PConfig->Controller, 
		     SerialPhysicalZero___1, 0, 0, 0,
		     58, (NTSTATUS )0x00000000L, (NTSTATUS )0xC0060019L, 0,
		     (void *  )0, sizeof("P\0o\0r\0t\0A\0d\0d\0r\0e\0s\0s\0")
		     + sizeof(WCHAR ), "P\0o\0r\0t\0A\0d\0d\0r\0e\0s\0s\0");
      status = (NTSTATUS )0xC0060019L;
      goto PortInfoCleanUp;
    }
  if(! PConfig->OriginalVector)
    {
      SerialLogError(pDevExt->DriverObject, (void *  )0,
		     PConfig->Controller, 
		     SerialPhysicalZero___1, 0, 0, 0,
		     59, (NTSTATUS )0x00000000L, (NTSTATUS )0xC0060019L,
		     (pDevExt->DeviceName).Length,
		     (pDevExt->DeviceName).Buffer,
		     sizeof("I\0n\0t\0e\0r\0r\0u\0p\0t\0"),
		     "I\0n\0t\0e\0r\0r\0u\0p\0t\0");
      status = (NTSTATUS )0xC0060019L;
      goto PortInfoCleanUp;
    }
  if((PConfig->InterruptStatus).LowPart != 0)
    {
      if(PConfig->PortIndex == 0xffffffff)
	{
	  SerialLogError(pDevExt->DriverObject, (void *  )0,
			 PConfig->Controller, 
			 SerialPhysicalZero___1, 0,
			 0, 0, 30, (NTSTATUS )0x00000000L, 
			 (NTSTATUS)0xC0060014L, 0, (void *  )0, 0, (void *  )0);
	  status = (NTSTATUS )0xC0060014L;
	  goto PortInfoCleanUp;
	}
      else
	{
	  if(! PConfig->PortIndex)
	    {
	      SerialLogError(pDevExt->DriverObject, 
			     (void * )0, PConfig->Controller,
			     SerialPhysicalZero___1, 0, 0, 0, 31,
			     (NTSTATUS )0x00000000L,
			     (NTSTATUS)0xC0060014L, 0, (void *  )0, 0,
			     (void *  )0);
	      status = (NTSTATUS )0xC0060014L;
	      goto PortInfoCleanUp;
	    }
	  else
	    {
	      if(PConfig->Indexed)
		{
		  if(PConfig->PortIndex > 16)
		    {
		      SerialLogError(pDevExt->DriverObject, (void *  )0,
				     PConfig->Controller,
				     SerialPhysicalZero___1,
				     0, 0, 0, 32, 
				     (NTSTATUS)0x00000000L, 
				     (NTSTATUS)0xC0060015L, 0,
				     (void *  )0, 0, (void * )0);
		      status = (NTSTATUS )0xC0060015L;
		      goto PortInfoCleanUp;
		    }
		}
	      else
		{
		  if(PConfig->PortIndex > 8)
		    {
		      SerialLogError(pDevExt->DriverObject
				     , (void *  )0,
				     PConfig->Controller,
				     SerialPhysicalZero___1,
				     0, 0, 0, 33, 
				     (NTSTATUS)0x00000000L, 
				     (NTSTATUS)0xC0060015L, 0,
				     (void *  )0, 0, (void * )0);
		      status = (NTSTATUS )0xC0060015L;
		      goto PortInfoCleanUp;
		    }
		}
	    }
	}
    }
  if(PConfig->BusNumber != 0)
    {
      BOOLEAN foundIt ;
      if(PConfig->InterfaceType >= MaximumInterfaceType)
	{
	  SerialLogError(pDevExt->DriverObject, (void *  )0,
			 PConfig->Controller, 
			 SerialPhysicalZero___1, 0,
			 0, 0, 34, (NTSTATUS )0x00000000L, 
			 (NTSTATUS)0xC0060016L, 0, (void *  )0, 0, (void *  )0);
	  status = (NTSTATUS )0xC0060016L;
	  goto PortInfoCleanUp;
	}
      IoQueryDeviceDescription((INTERFACE_TYPE *  )(
			  &PConfig->InterfaceType), & zero, (void *  )0, 
			       (void * )0, (void *  )0, (void *  )0, SerialItemCallBack, 
			       & foundIt);
      if(! foundIt)
	{
	  SerialLogError(pDevExt->DriverObject, (void *  )0,
			 PConfig->Controller, 
			 SerialPhysicalZero___1, 0,
			 0, 0, 35, (NTSTATUS )0x00000000L, 
			 (NTSTATUS)0xC0060017L, 0, (void *  )0, 0, (void *  )0);
	  status = (NTSTATUS )0xC0060017L;
	  goto PortInfoCleanUp;
	}
    }
  if(PConfig->InterfaceType == MicroChannel && PConfig->InterruptMode ==1)
    {
      SerialLogError(pDevExt->DriverObject, (void *  )0,
		     PConfig->Controller, 
		     SerialPhysicalZero___1, 0, 0, 0,
		     36, (NTSTATUS )0x00000000L, (NTSTATUS )0xC0060018L, 0,
		     (void *  )0, 0, (void *  )0);
      status = (NTSTATUS )0xC0060018L;
      goto PortInfoCleanUp;
    }
  status = (NTSTATUS )0x00000000L;
 PortInfoCleanUp:
  return status;
}

// #line 3128
NTSTATUS SerialDoExternalNaming(PSERIAL_DEVICE_EXTENSION PDevExt ,
				PDRIVER_OBJECT PDrvObj )
{
  NTSTATUS status ;
  HANDLE keyHandle ;
  WCHAR *  pRegName ;
  UNICODE_STRING linkName ;
  PDEVICE_OBJECT pLowerDevObj , pDevObj ;
  ULONG bufLen ;

  status = (NTSTATUS )0x00000000L;
  pRegName = (void *  )0;
  
  pDevObj = PDevExt->DeviceObject;
  pLowerDevObj = PDevExt->LowerDeviceObject;
  status = IoOpenDeviceRegistryKey(PDevExt->Pdo, 1, 0x00020000L, &
				   keyHandle);
  if(status != (NTSTATUS )0x00000000L)
      return status;
  SerialGetRegistryKeyValue(keyHandle,
			    "S\0e\0r\0i\0a\0l\0S\0k\0i\0p\0E\0x\0t\0e\0r\0n\0a\0l\0N\0a\0m\0i\0n\0g\0",
		sizeof("S\0e\0r\0i\0a\0l\0S\0k\0i\0p\0E\0x\0t\0e\0r\0n\0a\0l\0N\0a\0m\0i\0n\0g\0"
		), & PDevExt->SkipNaming, sizeof(ULONG ));
  if(PDevExt->SkipNaming)
    {
      // #line 3185
      ZwClose(keyHandle);
      return (NTSTATUS )0x00000000L;
    }
  // #line 3189
  memset(& linkName, 0, sizeof(UNICODE_STRING ));
	// #line 3191
	linkName.MaximumLength = 128 * sizeof(WCHAR );
	linkName.Buffer = ExAllocatePoolWithTag(PagedPool,
		linkName.MaximumLength + sizeof(WCHAR ),tag__1 /* 'XMOC' */);
	// #line 3195
	if(linkName.Buffer == (void *  )0)
	{
		// #line 3196
		SerialLogError(PDrvObj, pDevObj, 
			       SerialPhysicalZero___1,
			       SerialPhysicalZero___1, 0, 0, 0, 19, 
			       (NTSTATUS)0x00000000L, (NTSTATUS )0xC0060008L, 0, (void *  )0, 0,
			       (void *  )0);
		status = (NTSTATUS )0xC000009AL;
		ZwClose(keyHandle);
		goto SerialDoExternalNamingError;
	}
	// #line 3208
	memset(linkName.Buffer, 0, linkName.MaximumLength + sizeof(WCHAR ));
	// #line 3211
	pRegName = ExAllocatePoolWithTag(PagedPool, 128 * sizeof(WCHAR ) +
		sizeof(WCHAR ), tag__1 /* 'XMOC' */);
	// #line 3214
	if(pRegName == (void *  )0)
	{
		// #line 3215
		SerialLogError(PDrvObj, pDevObj, 
			       SerialPhysicalZero___1,
			       SerialPhysicalZero___1, 0, 0, 0, 19, 
			       (NTSTATUS)0x00000000L, (NTSTATUS )0xC0060008L, 0, (void *  )0, 0,
			       (void *  )0);
		// #line 3221
		status = (NTSTATUS )0xC000009AL;
		ZwClose(keyHandle);
		goto SerialDoExternalNamingError;
	}
	// #line 3231
	status = SerialGetRegistryKeyValue(keyHandle,
		"P\0o\0r\0t\0N\0a\0m\0e\0", sizeof("P\0o\0r\0t\0N\0a\0m\0e\0"),
		pRegName, 128 * sizeof(WCHAR ));
	// #line 3235
	if(! ((NTSTATUS )status >= 0))
	{
		// #line 3241
		status = SerialGetRegistryKeyValue(keyHandle,
			"I\0d\0e\0n\0t\0i\0f\0i\0e\0r\0",
			sizeof("I\0d\0e\0n\0t\0i\0f\0i\0e\0r\0"), pRegName, 128
			* sizeof(WCHAR ));
		// #line 3246
		if(! ((NTSTATUS )status >= 0))
		{
			ZwClose(keyHandle);
			goto SerialDoExternalNamingError;
		}
	}
	// #line 3262
	ZwClose(keyHandle);
	// #line 3264
	bufLen = wcslen(pRegName) * sizeof(WCHAR ) + sizeof((WCHAR )0);
	// #line 3266
	(PDevExt->WmiIdentifier).Buffer = ExAllocatePoolWithTag(PagedPool,
		bufLen, tag__1 /* 'XMOC' */);
	if((PDevExt->WmiIdentifier).Buffer == (void *  )0)
	{
		// #line 3269
		SerialLogError(PDrvObj, pDevObj, 
			       SerialPhysicalZero___1,
			       SerialPhysicalZero___1, 0, 0, 0, 19, 
			       (NTSTATUS)0x00000000L, (NTSTATUS )0xC0060008L, 0, (void *  )0, 0,
			       (void *  )0);
		status = (NTSTATUS )0xC000009AL;
		goto SerialDoExternalNamingError;
	}
	// #line 3279
	memset((PDevExt->WmiIdentifier).Buffer, 0, bufLen);
	// #line 3281
	(PDevExt->WmiIdentifier).Length = 0;
	(PDevExt->WmiIdentifier).MaximumLength = (USHORT )bufLen - 1;
	RtlAppendUnicodeToString(& PDevExt->WmiIdentifier, pRegName);
	// #line 3289
	RtlAppendUnicodeToString(& linkName, "\134\0");
	RtlAppendUnicodeToString(& linkName, "D\0o\0s\0D\0e\0v\0i\0c\0e\0s\0");
	RtlAppendUnicodeToString(& linkName, "\134\0");
	RtlAppendUnicodeToString(& linkName, pRegName);
	// #line 3297
	(PDevExt->SymbolicLinkName).MaximumLength = linkName.Length +
		sizeof(WCHAR );
	// #line 3298
	(PDevExt->SymbolicLinkName).Buffer = ExAllocatePoolWithTag(PagedPool,
		(PDevExt->SymbolicLinkName).MaximumLength, tag__1 /* 'XMOC' */);
	// #line 3301
	if(! (PDevExt->SymbolicLinkName).Buffer)
	{
		SerialLogError(PDrvObj, pDevObj, 
			       SerialPhysicalZero___1,
			       SerialPhysicalZero___1, 0, 0, 0, 19, (NTSTATUS
			)0x00000000L, (NTSTATUS )0xC0060008L, 0, (void *  )0, 0,
			(void *  )0);
		status = (NTSTATUS )0xC000009AL;
		goto SerialDoExternalNamingError;
	}
	// #line 3320
	memset((PDevExt->SymbolicLinkName).Buffer, 0,
		(PDevExt->SymbolicLinkName).MaximumLength);
	RtlAppendUnicodeStringToString(& PDevExt->SymbolicLinkName, & linkName);
	// #line 3325
	(PDevExt->DosName).Buffer = ExAllocatePoolWithTag(PagedPool, 64 +
		sizeof(WCHAR ), tag__1 /* 'XMOC' */);
	if(! (PDevExt->DosName).Buffer)
	{
		SerialLogError(PDrvObj, pDevObj, 
			       SerialPhysicalZero___1,
			       SerialPhysicalZero___1, 0, 0, 0, 19, (NTSTATUS
			)0x00000000L, (NTSTATUS )0xC0060008L, 0, (void *  )0, 0,
			(void *  )0);
		status = (NTSTATUS )0xC000009AL;
		goto SerialDoExternalNamingError;
	}
	// #line 3340
	(PDevExt->DosName).MaximumLength = 64 + sizeof(WCHAR );
	// #line 3346
	(PDevExt->DosName).Length = 0;
	// #line 3349
	memset((PDevExt->DosName).Buffer, 0, (PDevExt->DosName).MaximumLength);
	// #line 3351
	RtlAppendUnicodeToString(& PDevExt->DosName, pRegName);
	// #line 3353
	memset((PUCHAR )(& ((PDevExt->DosName).Buffer)[0]) +
		(PDevExt->DosName).Length, 0, sizeof(WCHAR ));
	status = IoCreateSymbolicLink(& PDevExt->SymbolicLinkName, &
		PDevExt->DeviceName);
	// #line 3364
	if(! ((NTSTATUS )status >= 0))
	{
		// #line 3371
		SerialLogError(PDrvObj, pDevObj, SerialPhysicalZero___1,
			SerialPhysicalZero___1, 0, 0, 0, 52, status, (NTSTATUS
			)0x80060004L, (PDevExt->DeviceName).Length +
			sizeof(WCHAR ), (PDevExt->DeviceName).Buffer, 0,
			(void *  )0);
		goto SerialDoExternalNamingError;
	}
	// #line 3387
	PDevExt->CreatedSymbolicLink = 1;
	// #line 3389
	status = RtlWriteRegistryValue(4, "S\0E\0R\0I\0A\0L\0C\0O\0M\0M\0",
		(PDevExt->DeviceName).Buffer, 1, (PDevExt->DosName).Buffer,
		(PDevExt->DosName).Length + sizeof(WCHAR ));
	// #line 3394
	if(! ((NTSTATUS )status >= 0))
	{
		SerialLogError(PDrvObj, pDevObj, SerialPhysicalZero___1,
			SerialPhysicalZero___1, 0, 0, 0, 53, status, (NTSTATUS
			)0x80060005L, (PDevExt->DeviceName).Length +
			sizeof(WCHAR ), (PDevExt->DeviceName).Buffer, 0,
			(void *  )0);
		goto SerialDoExternalNamingError;
	}
	// #line 3407
	PDevExt->CreatedSerialCommEntry = 1;
	// #line 3414
	status = IoRegisterDeviceInterface(PDevExt->Pdo, (LPGUID )(&
		GUID_CLASS_COMPORT), (void *  )0, &
		PDevExt->DeviceClassSymbolicName);
	if(! ((NTSTATUS )status >= 0))
	{
		(PDevExt->DeviceClassSymbolicName).Buffer = (void *  )0;
		goto SerialDoExternalNamingError;
	}
	// #line 3431
	status = IoSetDeviceInterfaceState(& PDevExt->DeviceClassSymbolicName,
		1);
	// #line 3434
	if(! ((NTSTATUS )status >= 0))
	{
	}
	// #line 3440
	SerialDoExternalNamingError:
		// #line 3440
		;
	// #line 3446
	if(! ((NTSTATUS )status >= 0))
	{
		// #line 3447
		if((PDevExt->DosName).Buffer != (void *  )0)
		{
			// #line 3448
			ExFreePool((PDevExt->DosName).Buffer);
			(PDevExt->DosName).Buffer = (void *  )0;
		}
		// #line 3452
		if(PDevExt->CreatedSymbolicLink == 1)
		{
			// #line 3453
			IoDeleteSymbolicLink(& PDevExt->SymbolicLinkName);
			PDevExt->CreatedSymbolicLink = 0;
		}
		// #line 3457
		if((PDevExt->SymbolicLinkName).Buffer != (void *  )0)
		{
			// #line 3458
			ExFreePool((PDevExt->SymbolicLinkName).Buffer);
			(PDevExt->SymbolicLinkName).Buffer = (void *  )0;
		}
		// #line 3462
		if((PDevExt->DeviceName).Buffer != (void *  )0)
		{
			// #line 3463
			RtlDeleteRegistryValue(4,
				"S\0E\0R\0I\0A\0L\0C\0O\0M\0M\0",
				(PDevExt->DeviceName).Buffer);
		}
		if((PDevExt->DeviceClassSymbolicName).Buffer)
		{
			// #line 3468
			IoSetDeviceInterfaceState(&
				PDevExt->DeviceClassSymbolicName, 0);
		}
		if((PDevExt->WmiIdentifier).Buffer != (void *  )0)
		{
			// #line 3472
			ExFreePool((PDevExt->WmiIdentifier).Buffer);
			(PDevExt->WmiIdentifier).Buffer = (void *  )0;
		}
	}
	// #line 3481
	if(linkName.Buffer != (void *  )0)
	{
		// #line 3482
		ExFreePool(linkName.Buffer);
	}
	// #line 3485
	if(pRegName != (void *  )0)
	{
		// #line 3486
		ExFreePool(pRegName);
	}
	// #line 3489
	return status;
}

void SerialUndoExternalNaming(PSERIAL_DEVICE_EXTENSION Extension )
{
  NTSTATUS status ;

  if(Extension->SkipNaming)
    {
      return;
    }
  if((Extension->SymbolicLinkName).Buffer && Extension->CreatedSymbolicLink)
    {
      if((Extension->DeviceClassSymbolicName).Buffer)
	{
	  status = IoSetDeviceInterfaceState(& Extension->DeviceClassSymbolicName, 0);
	  ExFreePool((Extension->DeviceClassSymbolicName).Buffer);
	}
      IoDeleteSymbolicLink(& Extension->SymbolicLinkName);
    }
  if((Extension->WmiIdentifier).Buffer)
    {
      ExFreePool((Extension->WmiIdentifier).Buffer);
      (Extension->WmiIdentifier).MaximumLength = 0 ; 
      (Extension->WmiIdentifier).Length = 0;
      (Extension->WmiIdentifier).Buffer = (void *  )0;
    }
  if((Extension->DeviceName).Buffer != (void *  )0 &&
     Extension->CreatedSerialCommEntry)
    {
      status = RtlDeleteRegistryValue(4,
				      "S\0E\0R\0I\0A\0L\0C\0O\0M\0M\0",
				      (Extension->DeviceName).Buffer);
      if(! ((NTSTATUS )status >= 0))
	{
	  SerialLogError((Extension->DeviceObject)->DriverObject,
			 Extension->DeviceObject,
			 Extension->OriginalController,
			 SerialPhysicalZero___1, 0, 0, 0, 55, status,
			 (NTSTATUS )0x80060006L,
			 (Extension->DeviceName).Length + sizeof(WCHAR ),
			 (Extension->DeviceName).Buffer, 0, (void *  )0);
	}
    }
}

NTSTATUS SerialGetConfigDefaults(PSERIAL_FIRMWARE_DATA DriverDefaultsPtr ,
				 PUNICODE_STRING RegistryPath )
{
  NTSTATUS Status ;
  RTL_QUERY_REGISTRY_TABLE paramTable[8] ;
  PWCHAR path ;
  ULONG zero;
  ULONG DbgDefault;
  ULONG notThereDefault;


  Status = (NTSTATUS )0x00000000L;
  zero = 0;
  DbgDefault = 0;
  notThereDefault = 1234567;
  path = ExAllocatePoolWithTag(PagedPool, RegistryPath->Length +
			       sizeof(WCHAR ), tag__1 /* 'XMOC' */);
  if(! path)
    {
      // #line 98
      Status = (NTSTATUS )0xC000009AL;
      return Status;
    }
  // #line 102
  memset(DriverDefaultsPtr, 0, sizeof(SERIAL_FIRMWARE_DATA ));
  memset(& paramTable[0], 0, sizeof(paramTable));
  memset(path, 0, RegistryPath->Length + sizeof(WCHAR ));
  memmove(path, RegistryPath->Buffer, RegistryPath->Length);
  // #line 107
  (paramTable[0]).Flags = 0x00000020;
  (paramTable[0]).Name = "B\0r\0e\0a\0k\0O\0n\0E\0n\0t\0r\0y\0";
  (paramTable[0]).EntryContext = & DriverDefaultsPtr->ShouldBreakOnEntry;
  (paramTable[0]).DefaultType = 4;
  (paramTable[0]).DefaultData = & zero;
  (paramTable[0]).DefaultLength = sizeof(ULONG );
  // #line 114
  (paramTable[1]).Flags = 0x00000020;
  (paramTable[1]).Name = "D\0e\0b\0u\0g\0L\0e\0v\0e\0l\0";
  (paramTable[1]).EntryContext = & DriverDefaultsPtr->DebugLevel;
  (paramTable[1]).DefaultType = 4;
  (paramTable[1]).DefaultData = & DbgDefault;
  (paramTable[1]).DefaultLength = sizeof(ULONG );
  // #line 121
  (paramTable[2]).Flags = 0x00000020;
  (paramTable[2]).Name = "F\0o\0r\0c\0e\0F\0i\0f\0o\0E\0n\0a\0b\0l\0e\0";
  (paramTable[2]).EntryContext = &
    DriverDefaultsPtr->ForceFifoEnableDefault;
  // #line 124
  (paramTable[2]).DefaultType = 4;
  (paramTable[2]).DefaultData = & notThereDefault;
  (paramTable[2]).DefaultLength = sizeof(ULONG );
	// #line 128
  (paramTable[3]).Flags = 0x00000020;
  (paramTable[3]).Name = "R\0x\0F\0I\0F\0O\0";
  (paramTable[3]).EntryContext = & DriverDefaultsPtr->RxFIFODefault;
  (paramTable[3]).DefaultType = 4;
  (paramTable[3]).DefaultData = & notThereDefault;
  (paramTable[3]).DefaultLength = sizeof(ULONG );
  // #line 135
  (paramTable[4]).Flags = 0x00000020;
  (paramTable[4]).Name = "T\0x\0F\0I\0F\0O\0";
  (paramTable[4]).EntryContext = & DriverDefaultsPtr->TxFIFODefault;
  (paramTable[4]).DefaultType = 4;
  (paramTable[4]).DefaultData = & notThereDefault;
  (paramTable[4]).DefaultLength = sizeof(ULONG );
  // #line 142
  (paramTable[5]).Flags = 0x00000020;
  (paramTable[5]).Name = "P\0e\0r\0m\0i\0t\0S\0h\0a\0r\0e\0";
  (paramTable[5]).EntryContext = & DriverDefaultsPtr->PermitShareDefault;
  (paramTable[5]).DefaultType = 4;
  (paramTable[5]).DefaultData = & notThereDefault;
  (paramTable[5]).DefaultLength = sizeof(ULONG );
  // #line 149
  (paramTable[6]).Flags = 0x00000020;
  (paramTable[6]).Name = "L\0o\0g\0F\0i\0f\0o\0";
  (paramTable[6]).EntryContext = & DriverDefaultsPtr->LogFifoDefault;
  (paramTable[6]).DefaultType = 4;
  (paramTable[6]).DefaultData = & notThereDefault;
  (paramTable[6]).DefaultLength = sizeof(ULONG );
  // #line 156
  Status = RtlQueryRegistryValues(0 | 0x80000000, path, & paramTable[0],
				  (void *  )0, (void *  )0);
  // #line 162
  if(! ((NTSTATUS )Status >= 0))
    {
      // #line 163
      DriverDefaultsPtr->ShouldBreakOnEntry = 0;
      DriverDefaultsPtr->DebugLevel = 0;
    }
  // #line 173
  if(DriverDefaultsPtr->ForceFifoEnableDefault == notThereDefault)
    {
      DriverDefaultsPtr->ForceFifoEnableDefault = 1;
      RtlWriteRegistryValue(0, path,
			    "F\0o\0r\0c\0e\0F\0i\0f\0o\0E\0n\0a\0b\0l\0e\0", 4, &
			    DriverDefaultsPtr->ForceFifoEnableDefault, sizeof(ULONG));
    }
  // #line 187
  if(DriverDefaultsPtr->RxFIFODefault == notThereDefault)
    {
      // #line 188
      DriverDefaultsPtr->RxFIFODefault = 8;
      RtlWriteRegistryValue(0, path, "R\0x\0F\0I\0F\0O\0", 4, &
			    DriverDefaultsPtr->RxFIFODefault, sizeof(ULONG ));
    }
  // #line 199
  if(DriverDefaultsPtr->TxFIFODefault == notThereDefault)
    {
      DriverDefaultsPtr->TxFIFODefault = 14;
      RtlWriteRegistryValue(0, path, "T\0x\0F\0I\0F\0O\0", 4, &
			    DriverDefaultsPtr->TxFIFODefault, sizeof(ULONG ));
    }
  // #line 213
  if(DriverDefaultsPtr->PermitShareDefault == notThereDefault)
    {
      DriverDefaultsPtr->PermitShareDefault = 0;
      // #line 220
      RtlWriteRegistryValue(0, path,
			"P\0e\0r\0m\0i\0t\0S\0h\0a\0r\0e\0", 4, &
			    DriverDefaultsPtr->PermitShareDefault, sizeof(ULONG ));
    }
  // #line 232
  if(DriverDefaultsPtr->LogFifoDefault == notThereDefault)
    {
      // #line 240
      DriverDefaultsPtr->LogFifoDefault = 0;
      // #line 242
      RtlWriteRegistryValue(0, path, "L\0o\0g\0F\0i\0f\0o\0", 4, &
			    DriverDefaultsPtr->LogFifoDefault, sizeof(ULONG ));
      // #line 251
      DriverDefaultsPtr->LogFifoDefault = 1;
    }
  // #line 259
  if(path)
      ExFreePool(path);
  // #line 266
  DriverDefaultsPtr->PermitSystemWideShare = 0;
  // #line 268
  return Status;
}

NTSTATUS SerialGetRegistryKeyValue(HANDLE Handle , PWCHAR KeyNameString , ULONG KeyNameStringLength ,
				   PVOID Data , ULONG DataLength )
{
  UNICODE_STRING keyName ;
  ULONG length ;
  PKEY_VALUE_FULL_INFORMATION fullInfo ;
  NTSTATUS ntStatus;

  ntStatus = (NTSTATUS )0xC000009AL;

  RtlInitUnicodeString(& keyName, KeyNameString);
  length = sizeof(KEY_VALUE_FULL_INFORMATION ) + KeyNameStringLength + DataLength;    
  fullInfo = ExAllocatePoolWithTag(PagedPool, length, tag__1 /* 'XMOC' */);
  
  if(fullInfo)
    {
      ntStatus = ZwQueryValueKey(Handle, & keyName,
				 KeyValueFullInformation, fullInfo, length, & length);
      if((NTSTATUS )ntStatus >= 0)
	{
	  if(DataLength >= fullInfo->DataLength)
	      memcpy(Data, (PUCHAR )fullInfo + fullInfo->DataOffset,
		     fullInfo->DataLength);
	}
      ExFreePool(fullInfo);
    }
  return ntStatus;
}

// #line 350
NTSTATUS SerialPutRegistryKeyValue(HANDLE Handle , PWCHAR PKeyNameString , ULONG KeyNameStringLength ,
				   ULONG Dtype , PVOID PData , ULONG DataLength )
{
  NTSTATUS status ;
  UNICODE_STRING keyname ;

  RtlInitUnicodeString(& keyname, (void *  )0);
  keyname.MaximumLength = (USHORT )(KeyNameStringLength + sizeof(WCHAR ));
  keyname.Buffer = ExAllocatePoolWithTag(PagedPool, keyname.MaximumLength,
					 tag__1 /* 'XMOC' */);
  if(keyname.Buffer == (void *  )0)
      return (NTSTATUS )0xC000009AL;
  
  RtlAppendUnicodeToString(& keyname, PKeyNameString);
  status = ZwSetValueKey(Handle, & keyname, 0, Dtype, PData, DataLength);
  ExFreePool(keyname.Buffer);
  return status;
}

//static /* const */ LARGE_INTEGER 0 /*SerialPhysicalZero___2/*  = {0} */;

NTSTATUS SerialTranslateResourceList(PDRIVER_OBJECT DriverObject ,
				     PKEY_BASIC_INFORMATION UserSubKey , 
				     PCM_RESOURCE_LIST PTrResourceList ,
				     PCM_RESOURCE_LIST PResourceList , 
				     ULONG PartialCount , PSERIAL_USER_DATA PUserData )
{
  KIRQL outIrql ;
  KAFFINITY outAffinity;
  ULONG outAddrSpace ;
  LARGE_INTEGER outPhysAddr ;
  NTSTATUS status;
  BOOLEAN temp__1;
  ULONG temp__2;

  outAffinity = (KAFFINITY )(- 1);
  status = (NTSTATUS )0x00000000L;
  outIrql = /*(KIRQL )(PUserData->UserLevel ?*/ PUserData->UserLevel
		/* : PUserData->UserVector )*/;
  memcpy(PTrResourceList, PResourceList, sizeof(CM_RESOURCE_LIST ) +
	 sizeof(CM_PARTIAL_RESOURCE_DESCRIPTOR ) * 2);
  outAddrSpace =(((((PTrResourceList->List)[0]).PartialResourceList).PartialDescriptors)[0]).Flags;
  outPhysAddr = (((((((PTrResourceList->List)[0]).PartialResourceList).PartialDescriptors)[0]).u).Port).Start;
  temp__1 = HalTranslateBusAddress(PUserData->UserInterfaceType,
				   PUserData->UserBusNumber, PUserData->UserPort, & outAddrSpace, &
				   outPhysAddr);
  if(temp__1 == 0)
    {
      SerialLogError(DriverObject, (void *  )0, PUserData->UserPort,
		     SerialPhysicalZero___2, 0, 0, 0, 60, 
		     (NTSTATUS)0x00000000L, (NTSTATUS )0xC0060025L, 
		     UserSubKey->NameLength + sizeof(WCHAR ), &
		     (UserSubKey->Name)[0], 0, (void *  )0);
      status = (NTSTATUS )0xC0000073L;
      goto SerialTranslateError;
    }
  (((((PTrResourceList->List)[0]).PartialResourceList).PartialDescriptors)[0]).Flags = (USHORT )outAddrSpace;
  (((((((PTrResourceList->List)[0]).PartialResourceList).PartialDescriptors)[0]).u).Port).Start = outPhysAddr; 

  temp__2 =  HalGetInterruptVector(PUserData->UserInterfaceType,
				   PUserData->UserBusNumber, /* PUserData->UserLevel */
				   /* 				   ? PUserData->UserLevel : */ PUserData->UserVector,
				   PUserData->UserVector, & outIrql, & outAffinity);
  (((((((PTrResourceList->List)[0]).PartialResourceList).PartialDescriptors)[1]).u).Interrupt).Vector = temp__2;
  
  if(temp__2== 0)	    
    {
      SerialLogError(DriverObject, (void *  )0, PUserData->UserPort,
		     SerialPhysicalZero___2, 0, 0, 0, 61, 
		     (NTSTATUS)0x00000000L, (NTSTATUS )0xC0060026L, 
		     UserSubKey->NameLength + sizeof(WCHAR ), &
		     (UserSubKey->Name)[0], 0, (void *  )0);
      status = (NTSTATUS )0xC0000073L;
      goto SerialTranslateError;
    }
    (((((((PTrResourceList->List)[0]).PartialResourceList).PartialDescriptors)[1]).u).Interrupt).Level = outIrql;
    (((((((PTrResourceList->List)[0]).PartialResourceList).PartialDescriptors)[1]).u).Interrupt).Affinity = outAffinity;       
    outAddrSpace = (((((PTrResourceList->List)[0]).PartialResourceList).PartialDescriptors)[2]).Flags;    
    outPhysAddr = (((((((PTrResourceList->List)[0]).PartialResourceList).PartialDescriptors)[2]).u).Port).Start;
    if(PartialCount == 3)
      {
	temp__1 = HalTranslateBusAddress(PUserData->UserInterfaceType,
					 PUserData->UserBusNumber,
					 PUserData->UserInterruptStatus, & outAddrSpace, &
					 outPhysAddr);
	if(temp__1 == 0)
	  {
	    SerialLogError(DriverObject, (void *  )0,
			   PUserData->UserPort, SerialPhysicalZero___2, 0,
			   0, 0, 62, (NTSTATUS )0x00000000L, 
			   (NTSTATUS)0xC0060027L, UserSubKey->NameLength +	  
			   sizeof(WCHAR ), & (UserSubKey->Name)[0], 0,
			   (void *  )0);
	    status = (NTSTATUS )0xC0000073L;
	    goto SerialTranslateError;
	  }
	(((((PTrResourceList->List)[0]).PartialResourceList).PartialDescriptors )[2]).Flags = 
	  (USHORT )outAddrSpace;
	(((((((PTrResourceList->List)[0]).PartialResourceList).PartialDescriptors)[2]).u).Port).Start= 
	  outPhysAddr;	    
      }
 SerialTranslateError:
  return status;
}

// #line 216
NTSTATUS SerialBuildRequirementsList(PIO_RESOURCE_REQUIREMENTS_LIST PRequiredList ,
				     ULONG PartialCount , PSERIAL_USER_DATA PUserData )
{
  PIO_RESOURCE_LIST reqResList ;
  PIO_RESOURCE_DESCRIPTOR reqResDesc ;
  NTSTATUS status;

  status = (NTSTATUS )0x00000000L;
  memset(PRequiredList, 0, sizeof(IO_RESOURCE_REQUIREMENTS_LIST ) +
	 sizeof(IO_RESOURCE_DESCRIPTOR ) * 2);
  PRequiredList->ListSize = sizeof(IO_RESOURCE_REQUIREMENTS_LIST ) +
    sizeof(IO_RESOURCE_DESCRIPTOR ) * (PartialCount - 1);
  PRequiredList->InterfaceType = PUserData->UserInterfaceType;
  PRequiredList->BusNumber = PUserData->UserBusNumber;
  PRequiredList->SlotNumber = 0;
  PRequiredList->AlternativeLists = 1;
  // #line 271
  reqResList = & (PRequiredList->List)[0];
  // #line 273
  reqResList->Version = 1;
  reqResList->Revision = 1;
  reqResList->Count = PartialCount;
  // #line 277
  reqResDesc = & (reqResList->Descriptors)[0];
  // #line 284
  reqResDesc->Flags = (USHORT )PUserData->UserAddressSpace;
  reqResDesc->Type = 1;
  reqResDesc->ShareDisposition = CmResourceShareDriverExclusive;
  ((reqResDesc->u).Port).Length = (ULONG )(7 * 1);
  ((reqResDesc->u).Port).Alignment = 1;
  ((reqResDesc->u).Port).MinimumAddress = PUserData->UserPort;
  (((reqResDesc->u).Port).MaximumAddress).QuadPart =
    (PUserData->UserPort).QuadPart + (ULONG )(7 * 1) - 1;
  // #line 294
  reqResDesc++;
  // #line 301
  if(PUserData->UserInterruptMode == Latched)
    {
      // #line 302
      reqResDesc->Flags = 1;
    }
  else
    {
      // #line 304
      reqResDesc->Flags = 0;
    }
  // #line 313
  reqResDesc->ShareDisposition = CmResourceShareShared;
  // #line 315
  reqResDesc->Type = 2;
  ((reqResDesc->u).Interrupt).MinimumVector = PUserData->UserVector;
  ((reqResDesc->u).Interrupt).MaximumVector = PUserData->UserVector;
  // #line 322
  if(PartialCount == 3)
    {
      reqResDesc++;
      // #line 326
      reqResDesc->Type = 1;
      // #line 334
      reqResDesc->ShareDisposition = CmResourceShareShared;
      // #line 336
      reqResDesc->Flags = (USHORT )PUserData->UserAddressSpace;
      ((reqResDesc->u).Port).Length = 1;
      ((reqResDesc->u).Port).Alignment = 1;
      ((reqResDesc->u).Port).MinimumAddress =
	PUserData->UserInterruptStatus;
      // #line 340
      ((reqResDesc->u).Port).MaximumAddress =
	PUserData->UserInterruptStatus;
    }
  return status;
}

// #line 350
NTSTATUS SerialBuildResourceList(PCM_RESOURCE_LIST PResourceList , PULONG PPartialCount ,
				 PSERIAL_USER_DATA PUserData )
{
  ULONG countOfPartials ;
  PCM_PARTIAL_RESOURCE_DESCRIPTOR pPartial ;
  NTSTATUS status;

  status = (NTSTATUS )0x00000000L;
  * PPartialCount = 0;
  if((PUserData->UserInterruptStatus).LowPart != 0)
    countOfPartials = 3 ;
  else 
    countOfPartials = 2;
  memset(PResourceList, 0, sizeof(CM_RESOURCE_LIST ) +
	 sizeof(CM_PARTIAL_RESOURCE_DESCRIPTOR ) * 2);
  PResourceList->Count = 1;
  ((PResourceList->List)[0]).InterfaceType = PUserData->UserInterfaceType;
  ((PResourceList->List)[0]).BusNumber = PUserData->UserBusNumber;
  (((PResourceList->List)[0]).PartialResourceList).Count =
    countOfPartials;
  pPartial = &
    ((((PResourceList->List)[0]).PartialResourceList).PartialDescriptors)
    [0];
  pPartial->Type = 1;
  pPartial->ShareDisposition = CmResourceShareDeviceExclusive;
  pPartial->Flags = (USHORT )PUserData->UserAddressSpace;
  ((pPartial->u).Port).Start = PUserData->UserPort;
  ((pPartial->u).Port).Length = (ULONG )(7 * 1);
  pPartial++;
  pPartial->Type = 2;
  pPartial->ShareDisposition = CmResourceShareShared;
  if(PUserData->UserInterruptMode == Latched)
    {
      pPartial->Flags = 1;
    }
  else
    {
      pPartial->Flags = 0;
    }
  ((pPartial->u).Interrupt).Vector = PUserData->UserVector;
  if(PUserData->UserLevel == 0)
    {
      ((pPartial->u).Interrupt).Level = PUserData->UserVector;
    }
  else
    {
      ((pPartial->u).Interrupt).Level = PUserData->UserLevel;
    }
  if(countOfPartials == 3)
    {
      pPartial++;
      pPartial->Type = 1;
      pPartial->ShareDisposition = CmResourceShareShared;
      pPartial->Flags = (USHORT )PUserData->UserAddressSpace;
      ((pPartial->u).Port).Start = PUserData->UserInterruptStatus;
      ((pPartial->u).Port).Length = (ULONG )(1 * 1);
    }
  * PPartialCount = countOfPartials;
  return status;
}

NTSTATUS SerialMigrateLegacyRegistry(PDEVICE_OBJECT PPdo , PSERIAL_USER_DATA PUserData ,
				     BOOLEAN IsMulti )
{
  NTSTATUS status ;
  HANDLE pnpKey ;
  UNICODE_STRING pnpNameBuf ;
  ULONG isMultiport;
  ULONG one ;
  
  isMultiport = 1;
  one = 1;

  status = IoOpenDeviceRegistryKey(PPdo, 1, 0x00020000L, & pnpKey);
  if(! ((NTSTATUS )status >= 0))
    {
      return status;
    }
  pnpNameBuf.MaximumLength = sizeof(WCHAR ) * 256;
  pnpNameBuf.Length = 0;
  pnpNameBuf.Buffer = ExAllocatePoolWithTag(PagedPool, sizeof(WCHAR ) *
					    257, tag__1 /*'XMOC'*/);
  if(pnpNameBuf.Buffer == (void *  )0)
    {
      SerialLogError(PPdo->DriverObject, (void *  )0,
		     PUserData->UserPort, SerialPhysicalZero___2, 0, 0, 0,
		     63, (NTSTATUS )0x00000000L, (NTSTATUS )0xC0060008L, 0,
		     (void *  )0, 0, (void *  )0);
      status = (NTSTATUS )0xC000009AL;
      goto MigrateLegacyExit;
    }
  memset(pnpNameBuf.Buffer, 0, pnpNameBuf.MaximumLength + sizeof(WCHAR ));
  RtlAppendUnicodeStringToString(& pnpNameBuf, &
				 PUserData->UserSymbolicLink);
  memset((PUCHAR )(& (pnpNameBuf.Buffer)[0]) + pnpNameBuf.Length, 0,
	 sizeof(WCHAR ));
  status = SerialPutRegistryKeyValue(pnpKey, "P\0o\0r\0t\0N\0a\0m\0e\0",
				     sizeof("P\0o\0r\0t\0N\0a\0m\0e\0"), 1, pnpNameBuf.Buffer,
				     pnpNameBuf.Length + sizeof(WCHAR ));
  ExFreePool(pnpNameBuf.Buffer);
  if(! ((NTSTATUS )status >= 0))
    {
      goto MigrateLegacyExit;
    }
  if(IsMulti)
    {
      status = SerialPutRegistryKeyValue(pnpKey,
					 "M\0u\0l\0t\0i\0p\0o\0r\0t\0D\0e\0v\0i\0c\0e\0",
					 sizeof("M\0u\0l\0t\0i\0p\0o\0r\0t\0D\0e\0v\0i\0c\0e\0"),
					 4, & isMultiport, sizeof(ULONG ));
      if(! ((NTSTATUS )status >= 0))
	{
	  goto MigrateLegacyExit;
	}
    }
  if(PUserData->UserPortIndex != 0)
    {
      status = SerialPutRegistryKeyValue(pnpKey,
					 "P\0o\0r\0t\0I\0n\0d\0e\0x\0",
					 sizeof("P\0o\0r\0t\0I\0n\0d\0e\0x\0"), 4, &
					 PUserData->UserPortIndex, sizeof(ULONG ));
      if(! ((NTSTATUS )status >= 0))
	{
	  goto MigrateLegacyExit;
	}
    }
  if(PUserData->UserClockRate != (ULONG )(- 1))
    {
      status = SerialPutRegistryKeyValue(pnpKey,
					 "C\0l\0o\0c\0k\0R\0a\0t\0e\0",
					 sizeof("C\0l\0o\0c\0k\0R\0a\0t\0e\0"), 4, &
					 PUserData->UserClockRate, sizeof(ULONG ));
      if(! ((NTSTATUS )status >= 0))
	{
	  goto MigrateLegacyExit;
	}
    }
  if(PUserData->UserIndexed != (ULONG )(- 1))
    {
      status = SerialPutRegistryKeyValue(pnpKey,
					 "I\0n\0d\0e\0x\0e\0d\0",
					 sizeof("I\0n\0d\0e\0x\0e\0d\0"), 4, &
					 PUserData->UserIndexed, sizeof(ULONG ));
      if(! ((NTSTATUS )status >= 0))
	{
	  goto MigrateLegacyExit;
	}
    }
  if(PUserData->DisablePort != (ULONG )(- 1))
    {
      status = SerialPutRegistryKeyValue(pnpKey,
					 "D\0i\0s\0a\0b\0l\0e\0P\0o\0r\0t\0",
					 sizeof("D\0i\0s\0a\0b\0l\0e\0P\0o\0r\0t\0"), 4, &
					 PUserData->DisablePort, sizeof(ULONG ));
      if(! ((NTSTATUS )status >= 0))
	{
	  goto MigrateLegacyExit;
	}
    }
  if(PUserData->ForceFIFOEnable != (ULONG )(- 1))
    {
      status = SerialPutRegistryKeyValue(pnpKey,
					 "F\0o\0r\0c\0e\0F\0i\0f\0o\0E\0n\0a\0b\0l\0e\0",
					 sizeof("F\0o\0r\0c\0e\0F\0i\0f\0o\0E\0n\0a\0b\0l\0e\0"),
					 4, & PUserData->ForceFIFOEnable, sizeof(ULONG ));
      if(! ((NTSTATUS )status >= 0))
	{
	  goto MigrateLegacyExit;
	}
    }
  if(PUserData->RxFIFO != (ULONG )(- 1))
    {
      status = SerialPutRegistryKeyValue(pnpKey, "R\0x\0F\0I\0F\0O\0",
					 sizeof("R\0x\0F\0I\0F\0O\0"), 4, & PUserData->RxFIFO,
					 sizeof(ULONG ));
      if(! ((NTSTATUS )status >= 0))
	{
	  goto MigrateLegacyExit;
	}
    }
  if(PUserData->TxFIFO != (ULONG )(- 1))
    {
      status = SerialPutRegistryKeyValue(pnpKey, "T\0x\0F\0I\0F\0O\0",
					 sizeof("T\0x\0F\0I\0F\0O\0"), 4, & PUserData->TxFIFO,
					 sizeof(ULONG ));
      if(! ((NTSTATUS )status >= 0))
	{
	  goto MigrateLegacyExit;
	}
    }
  if(PUserData->MaskInverted != (ULONG )(- 1))
    {
      status = SerialPutRegistryKeyValue(pnpKey,
					 "M\0a\0s\0k\0I\0n\0v\0e\0r\0t\0e\0d\0",
					 sizeof("M\0a\0s\0k\0I\0n\0v\0e\0r\0t\0e\0d\0"), 4, &
					 PUserData->MaskInverted, sizeof(ULONG ));
      if(! ((NTSTATUS )status >= 0))
	{
	  goto MigrateLegacyExit;
	}
    }
 MigrateLegacyExit:
  ZwClose(pnpKey);
  return status;
}

BOOLEAN SerialIsUserDataValid(PDRIVER_OBJECT DriverObject ,
			      PKEY_BASIC_INFORMATION UserSubKey , 
			      PRTL_QUERY_REGISTRY_TABLE Parameters,
			      ULONG DefaultInterfaceType , PSERIAL_USER_DATA PUserData )
{
  ULONG zero;
  BOOLEAN rval;
  BOOLEAN foundIt ;
  
  zero = 0;
  rval = 1;
  if(! (PUserData->UserPort).LowPart)
    {
      // #line 809
      SerialLogError(DriverObject, (void *  )0, PUserData->UserPort,
		     SerialPhysicalZero___2, 0, 0, 0, 64, 
		     (NTSTATUS)0x00000000L, (NTSTATUS )0xC0060019L,
		     UserSubKey->NameLength + sizeof(WCHAR ), &
		     (UserSubKey->Name)[0], wcslen((Parameters[1]).Name) *
		     sizeof(WCHAR ) + sizeof(WCHAR ), (Parameters[1]).Name);
      rval = 0;
      goto SerialIsUserDataValidError;
    }
  if(! PUserData->UserVector)
    {
      SerialLogError(DriverObject, (void *  )0, PUserData->UserPort,
		     SerialPhysicalZero___2, 0, 0, 0, 65, 
		     (NTSTATUS)0x00000000L, (NTSTATUS )0xC0060019L,
		     UserSubKey->NameLength + sizeof(WCHAR ), &
		     (UserSubKey->Name)[0], wcslen((Parameters[2]).Name) *
		     sizeof(WCHAR ) + sizeof(WCHAR ), (Parameters[2]).Name);
      rval = 0;
      goto SerialIsUserDataValidError;
    }
  if(! (PUserData->UserSymbolicLink).Length)
    {
      SerialLogError(DriverObject, (void *  )0, PUserData->UserPort,
		     SerialPhysicalZero___2, 0, 0, 0, 66, 
		     (NTSTATUS)0x00000000L, (NTSTATUS )0xC0060019L,
		     UserSubKey->NameLength + sizeof(WCHAR ), &
		     (UserSubKey->Name)[0], wcslen((Parameters[3]).Name) *
		     sizeof(WCHAR ) + sizeof(WCHAR ), (Parameters[3]).Name);
      rval = 0;
      goto SerialIsUserDataValidError;
    }
  if((PUserData->UserInterruptStatus).LowPart != 0)
    {
      if(PUserData->UserPortIndex == 0xffffffff)
	{
	  // #line 901
	  SerialLogError(DriverObject, (void *  )0,
			 PUserData->UserPort,SerialPhysicalZero___2, 0,
			 0, 0, 67, (NTSTATUS )0x00000000L, 
			 (NTSTATUS)0xC0060014L,
			 (PUserData->UserSymbolicLink).Length +
			 sizeof(WCHAR ),
			 (PUserData->UserSymbolicLink).Buffer, 0,
			 (void *  )0);
	  rval = 0;
	  goto SerialIsUserDataValidError;
	}
      else
	{
	  // #line 926
	  if(! PUserData->UserPortIndex)
	    {
	      // #line 932
	      SerialLogError(DriverObject, (void *  )0,
			     PUserData->UserPort,
			     SerialPhysicalZero___2, 0, 0, 0, 68,
			     (NTSTATUS )0x00000000L, (NTSTATUS
						      )0xC0060014L,
			     (PUserData->UserSymbolicLink).Length +
			     sizeof(WCHAR ),
			     (PUserData->UserSymbolicLink).Buffer, 0,
			     (void *  )0);
	      rval = 0;
	      goto SerialIsUserDataValidError;
	    }
	  else
	    {
	      if(PUserData->UserIndexed)
		{
		  if(PUserData->UserPortIndex > 16)
		    {
		      SerialLogError(DriverObject,
				     (void *  )0,
				     PUserData->UserPort,
				     SerialPhysicalZero___2,
				     0, 0, 0, 69, (NTSTATUS
						   )0x00000000L, (NTSTATUS
								  )0xC0060015L,
				     (PUserData->UserSymbolicLink)
				     .Length + sizeof(WCHAR
						      ),
				     (PUserData->UserSymbolicLink)
				     .Buffer, 0, (void *
						  )0);
		      rval = 0;
		      goto SerialIsUserDataValidError;
		    }
		}
	      else
		{
		  if(PUserData->UserPortIndex > 8)
		    {
		      SerialLogError(DriverObject,
				     (void *  )0,
				     PUserData->UserPort,
				     SerialPhysicalZero___2,
				     0, 0, 0, 70, (NTSTATUS
						   )0x00000000L, (NTSTATUS
								  )0xC0060015L,
				     (PUserData->UserSymbolicLink)
				     .Length + sizeof(WCHAR
						      ),
				     (PUserData->UserSymbolicLink)
				     .Buffer, 0, (void *
						  )0);
		      rval = 0;
		      goto SerialIsUserDataValidError;
		    }
		}
	    }
	}
    }
  // #line 1034
  if(PUserData->UserBusNumber != 0 || PUserData->UserInterfaceType !=
     DefaultInterfaceType)
    {
      if(PUserData->UserInterfaceType >= MaximumInterfaceType)
	{
	  SerialLogError(DriverObject, (void *  )0,
			 PUserData->UserPort,
			 SerialPhysicalZero___2, 0,
			 0, 0, 71, (NTSTATUS )0x00000000L, (NTSTATUS
							    )0xC0060016L,
			 (PUserData->UserSymbolicLink).Length +
			 sizeof(WCHAR ),
			 (PUserData->UserSymbolicLink).Buffer, 0,
			 (void *  )0);
	  rval = 0;
	  goto SerialIsUserDataValidError;
	}
      IoQueryDeviceDescription((INTERFACE_TYPE *  )
			       (& PUserData->UserInterfaceType), & zero, (void *  )0,
			       (void *  )0, (void *  )0, (void *  )0,
			       SerialItemCallBack, & foundIt);
      if(! foundIt)
	{
	  SerialLogError(DriverObject, (void *  )0,
			 PUserData->UserPort, SerialPhysicalZero___2, 0,
			 0, 0, 72, (NTSTATUS )0x00000000L, (NTSTATUS
							    )0xC0060017L,
			 (PUserData->UserSymbolicLink).Length +
			 sizeof(WCHAR ),
			 (PUserData->UserSymbolicLink).Buffer, 0,
			 (void *  )0);
	  rval = 0;
	  goto SerialIsUserDataValidError;
	}
    }
  if(PUserData->UserInterfaceType == MicroChannel &&
     PUserData->UserInterruptMode == 1)
    {
      SerialLogError(DriverObject, (void *  )0, PUserData->UserPort,
		     SerialPhysicalZero___2, 0, 0, 0, 73, 
		     (NTSTATUS)0x00000000L, (NTSTATUS )0xC0060018L,
		     (PUserData->UserSymbolicLink).Length + sizeof(WCHAR ),
		     (PUserData->UserSymbolicLink).Buffer, 0, (void *  )0);
      rval = 0;
      goto SerialIsUserDataValidError;
    }
 SerialIsUserDataValidError:
  return rval;
}

NTSTATUS SerialEnumerateLegacy(PDRIVER_OBJECT DriverObject , PUNICODE_STRING RegistryPath ,
			       PSERIAL_FIRMWARE_DATA DriverDefaultsPtr )
{
  SERIAL_FIRMWARE_DATA firmware ;
  PRTL_QUERY_REGISTRY_TABLE parameters;
  INTERFACE_TYPE interfaceType ;
  ULONG defaultInterfaceType ;
  PULONG countSoFar /* = & (IoGetConfigurationInformation())->SerialCount */;
  ULONG maxUlong;
  ULONG zero;
  ULONG nonzero;
  ULONG badValue;
  ULONG defaultInterruptMode ;
  ULONG defaultAddressSpace;
  SERIAL_USER_DATA userData ;
  ULONG legacyDiscovered ;
  UNICODE_STRING PnPID ;
  UNICODE_STRING legacyKeys ;
  UNICODE_STRING parametersPath ;
  OBJECT_ATTRIBUTES parametersAttributes ;
  HANDLE parametersKey ;
  HANDLE pnpKey ;
  PKEY_BASIC_INFORMATION userSubKey;
  ULONG i ;
  PCM_RESOURCE_LIST resourceList ;
  PCM_RESOURCE_LIST trResourceList;
  PIO_RESOURCE_REQUIREMENTS_LIST pRequiredList;
  ULONG countOfPartials ;
  PDEVICE_OBJECT newPdo ;
  ULONG brokenStatus ;
  int temp__1;
  ULONG busZero ;
  BOOLEAN foundOne;

  NTSTATUS status ;
  ULONG actuallyReturned ;
  PDEVICE_OBJECT newDevObj;
  PSERIAL_DEVICE_EXTENSION deviceExtension ;
  PDEVICE_OBJECT lowerDevice ;


  parameters = (void *  )0;
  maxUlong = 0xffffffff;
  zero = 0;
  nonzero = 1;
  badValue = (ULONG )(- 1);
  defaultAddressSpace = 0x0001;
  userSubKey = (void *  )0;
  resourceList = (void *  )0;
  trResourceList = (void *  )0;
  pRequiredList = (void *  )0;

  PnPID.Buffer = (void *  )0;
  legacyKeys.Buffer = (void *  )0;
  (userData.UserSymbolicLink).Buffer = (void *  )0;
  parametersPath.Buffer = (void *  )0;
  userData.ForceFIFOEnableDefault =
    DriverDefaultsPtr->ForceFifoEnableDefault;
  userData.PermitShareDefault = DriverDefaultsPtr->PermitShareDefault;
  userData.LogFIFODefault = DriverDefaultsPtr->LogFifoDefault;
  userData.DefaultPermitSystemWideShare = 0;
  userData.RxFIFODefault = DriverDefaultsPtr->RxFIFODefault;
  userData.TxFIFODefault = DriverDefaultsPtr->TxFIFODefault;
  defaultInterfaceType = (ULONG )Isa;
  defaultInterruptMode = 1;
  for(interfaceType = 0; interfaceType < MaximumInterfaceType; interfaceType++)
    {
      busZero = 0;
      foundOne = 0;
      if(interfaceType != Internal)
	{
	  IoQueryDeviceDescription(& interfaceType, & busZero,
				   (void *  )0, (void *  )0, (void *  )0,
				   (void * )0, SerialItemCallBack, & foundOne);
	  if(foundOne)
	    {
	      defaultInterfaceType = (ULONG )interfaceType;
	      if(defaultInterfaceType == MicroChannel)
		{
		  defaultInterruptMode = 0;
		  userData.DefaultPermitSystemWideShare =   1;
		  
		}
	      break;
	    }
	}
    }
  (userData.UserSymbolicLink).Buffer = (void *  )0;
  parametersPath.Buffer = (void *  )0;
  parameters = ExAllocatePoolWithTag(PagedPool,
				     sizeof(RTL_QUERY_REGISTRY_TABLE ) * 22, 
				     tag__1 /*XMOC*/);
  if(! parameters)
    {
      SerialLogError(DriverObject, (void *  )0,
		     SerialPhysicalZero___2,
		     SerialPhysicalZero___2, 0, 0, 0,
		     74, (NTSTATUS )0x00000000L, (NTSTATUS )0xC0060008L, 0,
		     (void *  )0, 0, (void *  )0);
      goto LegacyInitLeave;
    }
  memset(parameters, 0, sizeof(RTL_QUERY_REGISTRY_TABLE ) * 22);
  RtlInitUnicodeString(& userData.UserSymbolicLink, (void *  )0);
  (userData.UserSymbolicLink).MaximumLength = sizeof(WCHAR ) * 256;
  (userData.UserSymbolicLink).Buffer = ExAllocatePoolWithTag(PagedPool,
							     sizeof(WCHAR ) * 257, 
							     tag__1 /*XMOC*/);
  if(! (userData.UserSymbolicLink).Buffer)
    {
      SerialLogError(DriverObject, (void *  )0,
		     SerialPhysicalZero___2,
		     SerialPhysicalZero___2, 0, 0, 0,
		     75, (NTSTATUS )0x00000000L, (NTSTATUS )0xC0060008L, 0,
		     (void *  )0, 0, (void *  )0);
      goto LegacyInitLeave;
    }
  RtlInitUnicodeString(& PnPID, (void *  )0);
  PnPID.MaximumLength = sizeof(WCHAR ) * 256;
  PnPID.Buffer = ExAllocatePoolWithTag(PagedPool, sizeof(WCHAR ) * 257,
				       tag__1 /*XMOC*/);
  if(PnPID.Buffer == 0)
    {
      SerialLogError(DriverObject, (void *  )0,
		     SerialPhysicalZero___2,
		     SerialPhysicalZero___2, 0, 0, 0,
		     76, (NTSTATUS )0x00000000L, (NTSTATUS )0xC0060008L, 0,
		     (void *  )0, 0, (void *  )0);
      goto LegacyInitLeave;
    }
  RtlInitUnicodeString(& legacyKeys, (void *  )0);
  legacyKeys.MaximumLength = sizeof(WCHAR ) * 256;
  legacyKeys.Buffer = ExAllocatePoolWithTag(PagedPool, sizeof(WCHAR ) *
					    257, tag__1 /*XMOC*/);
  if(! legacyKeys.Buffer)
    {
      SerialLogError(DriverObject, (void *  )0,
		     SerialPhysicalZero___2,
		     SerialPhysicalZero___2,
		     0, 0, 0,
		     77, (NTSTATUS )0x00000000L, (NTSTATUS )0xC0060008L, 0,
		     (void *  )0, 0, (void *  )0);
      goto LegacyInitLeave;
    }
  resourceList = ExAllocatePoolWithTag(PagedPool, sizeof(CM_RESOURCE_LIST) +
				       sizeof(CM_PARTIAL_RESOURCE_DESCRIPTOR ) * 2, 
				       tag__1 /*XMOC*/);
  if(resourceList == (void *  )0)
    {
      SerialLogError(DriverObject, (void *  )0, userData.UserPort,
		     SerialPhysicalZero___2, 0, 0, 0, 78, 
		     (NTSTATUS )0x00000000L, (NTSTATUS )0xC0060008L, 0, (void *  )0, 0,
		     (void *  )0);
      goto LegacyInitLeave;
    }
  trResourceList = ExAllocatePoolWithTag(PagedPool,
					 sizeof(CM_RESOURCE_LIST ) +
					 sizeof(CM_PARTIAL_RESOURCE_DESCRIPTOR ) * 2, 
					 tag__1 /*XMOC*/);
  if(trResourceList == (void *  )0)
    {
      SerialLogError(DriverObject, (void *  )0, userData.UserPort,
		     SerialPhysicalZero___2, 0, 0, 0, 79, 
		     (NTSTATUS)0x00000000L, (NTSTATUS )0xC0060008L, 0, (void *  )0, 0,
		     (void *  )0);
      goto LegacyInitLeave;
    }
  pRequiredList = ExAllocatePoolWithTag(PagedPool,
					sizeof(IO_RESOURCE_REQUIREMENTS_LIST ) +
					sizeof(IO_RESOURCE_DESCRIPTOR ) * 2, 
					tag__1 /*XMOC*/);
  if(pRequiredList == (void *  )0)
    {
      SerialLogError(DriverObject, (void *  )0, userData.UserPort,
		     SerialPhysicalZero___2, 0, 0, 0, 80, 
		     (NTSTATUS)0x00000000L, (NTSTATUS )0xC0060008L, 0, (void *  )0, 0,
		     (void *  )0);
      goto LegacyInitLeave;
	}
  RtlInitUnicodeString(& parametersPath, (void *  )0);
  parametersPath.MaximumLength = RegistryPath->Length + sizeof("\134\0") +
    sizeof("P\0a\0r\0a\0m\0e\0t\0e\0r\0s\0");
  parametersPath.Buffer = ExAllocatePoolWithTag(PagedPool,
						parametersPath.MaximumLength, 
						tag__1 /*XMOC*/);
  if(! parametersPath.Buffer)
    {
      SerialLogError(DriverObject, (void *  )0,
		     SerialPhysicalZero___2,
		     SerialPhysicalZero___2, 0, 0, 0,
		     81, (NTSTATUS )0x00000000L, (NTSTATUS )0xC0060008L, 0,
		     (void *  )0, 0, (void *  )0);
      goto LegacyInitLeave;
    }
  memset(parametersPath.Buffer, 0, parametersPath.MaximumLength);
  RtlAppendUnicodeStringToString(& parametersPath, RegistryPath);
  RtlAppendUnicodeToString(& parametersPath, "\134\0");
  RtlAppendUnicodeToString(& parametersPath,
			   "P\0a\0r\0a\0m\0e\0t\0e\0r\0s\0");
  memset(legacyKeys.Buffer, 0, legacyKeys.MaximumLength);
  RtlAppendUnicodeStringToString(& legacyKeys, & parametersPath);
  userSubKey = ExAllocatePoolWithTag(PagedPool,
				     sizeof(KEY_BASIC_INFORMATION ) + sizeof(WCHAR ) * 256, 
				     tag__1 /*XMOC*/);
  if(! userSubKey)
    {
      SerialLogError(DriverObject, (void *  )0,
		     SerialPhysicalZero___2,
		     SerialPhysicalZero___2, 0, 0, 0,
		     82, (NTSTATUS )0x00000000L, (NTSTATUS )0xC0060008L, 0,
		     (void *  )0, 0, (void *  )0);
      goto LegacyInitLeave;
    }
  {
    // #line 1744
    (& parametersAttributes)->Length = sizeof(OBJECT_ATTRIBUTES );
    // #line 1744
    (& parametersAttributes)->RootDirectory = (void *  )0;
    // #line 1744
    (& parametersAttributes)->Attributes = 0x00000040L;
    // #line 1744
    (& parametersAttributes)->ObjectName = & parametersPath;
    // #line 1744
    (& parametersAttributes)->SecurityDescriptor = (void *  )0;
    // #line 1744
    (& parametersAttributes)->SecurityQualityOfService = (void *
							  )0;
	}
  temp__1 = ZwOpenKey(& parametersKey, 0x02000000L, &
		      parametersAttributes);
  if(! ((NTSTATUS)temp__1 >= 0))
    {
      // #line 1752
      SerialLogError(DriverObject, (void *  )0,
		     SerialPhysicalZero___2,
		     SerialPhysicalZero___2, 0, 0, 0,
			83, (NTSTATUS )0x00000000L, (NTSTATUS )0xC0060012L, 0,
			(void *  )0, 0, (void *  )0);
      goto LegacyInitLeave;
    }
  // #line 1779
  (parameters[0]).Flags = 0x00000001;
  // #line 1781
  (parameters[1]).Flags = 0x00000020;
  (parameters[1]).Name = "P\0o\0r\0t\0A\0d\0d\0r\0e\0s\0s\0";
  (parameters[1]).EntryContext = & (userData.UserPort).LowPart;
  (parameters[1]).DefaultType = 4;
  (parameters[1]).DefaultData = & zero;
  (parameters[1]).DefaultLength = sizeof(ULONG );
  // #line 1788
  (parameters[2]).Flags = 0x00000020;
  (parameters[2]).Name = "I\0n\0t\0e\0r\0r\0u\0p\0t\0";
  (parameters[2]).EntryContext = & userData.UserVector;
  (parameters[2]).DefaultType = 4;
  (parameters[2]).DefaultData = & zero;
  (parameters[2]).DefaultLength = sizeof(ULONG );
  // #line 1795
  (parameters[3]).Flags = 0x00000020;
  (parameters[3]).Name = "D\0o\0s\0D\0e\0v\0i\0c\0e\0s\0";
  (parameters[3]).EntryContext = & userData.UserSymbolicLink;
  (parameters[3]).DefaultType = 1;
  (parameters[3]).DefaultData = "";
  (parameters[3]).DefaultLength = 0;
  // #line 1802
  (parameters[4]).Flags = 0x00000020;
  (parameters[4]).Name = "I\0n\0t\0e\0r\0r\0u\0p\0t\0S\0t\0a\0t\0u\0s\0";
  (parameters[4]).EntryContext = & (userData.UserInterruptStatus).LowPart;
  (parameters[4]).DefaultType = 4;
  (parameters[4]).DefaultData = & zero;
  (parameters[4]).DefaultLength = sizeof(ULONG );
  // #line 1809
  (parameters[5]).Flags = 0x00000020;
  (parameters[5]).Name = "P\0o\0r\0t\0I\0n\0d\0e\0x\0";
  (parameters[5]).EntryContext = & userData.UserPortIndex;
  (parameters[5]).DefaultType = 4;
  (parameters[5]).DefaultData = & zero;
  (parameters[5]).DefaultLength = sizeof(ULONG );
  // #line 1816
  (parameters[6]).Flags = 0x00000020;
  (parameters[6]).Name = "B\0u\0s\0N\0u\0m\0b\0e\0r\0";
  (parameters[6]).EntryContext = & userData.UserBusNumber;
  (parameters[6]).DefaultType = 4;
  (parameters[6]).DefaultData = & zero;
  (parameters[6]).DefaultLength = sizeof(ULONG );
  // #line 1823
  (parameters[7]).Flags = 0x00000020;
  (parameters[7]).Name = "B\0u\0s\0T\0y\0p\0e\0";
  (parameters[7]).EntryContext = & userData.UserInterfaceType;
  (parameters[7]).DefaultType = 4;
  (parameters[7]).DefaultData = & defaultInterfaceType;
  (parameters[7]).DefaultLength = sizeof(ULONG );
  // #line 1830
  (parameters[8]).Flags = 0x00000020;
  (parameters[8]).Name = "C\0l\0o\0c\0k\0R\0a\0t\0e\0";
  (parameters[8]).EntryContext = & userData.UserClockRate;
  (parameters[8]).DefaultType = 4;
  (parameters[8]).DefaultData = & badValue;
  (parameters[8]).DefaultLength = sizeof(ULONG );
  // #line 1837
  (parameters[9]).Flags = 0x00000020;
  (parameters[9]).Name = "I\0n\0d\0e\0x\0e\0d\0";
  (parameters[9]).EntryContext = & userData.UserIndexed;
  (parameters[9]).DefaultType = 4;
  (parameters[9]).DefaultData = & badValue;
  (parameters[9]).DefaultLength = sizeof(ULONG );
  // #line 1844
  (parameters[10]).Flags = 0x00000020;
  (parameters[10]).Name = "I\0n\0t\0e\0r\0r\0u\0p\0t\0M\0o\0d\0e\0";
  (parameters[10]).EntryContext = & userData.UserInterruptMode;
  (parameters[10]).DefaultType = 4;
  (parameters[10]).DefaultData = & defaultInterruptMode;
  (parameters[10]).DefaultLength = sizeof(ULONG );
  // #line 1851
  (parameters[11]).Flags = 0x00000020;
  (parameters[11]).Name = "A\0d\0d\0r\0e\0s\0s\0S\0p\0a\0c\0e\0";
  (parameters[11]).EntryContext = & userData.UserAddressSpace;
  (parameters[11]).DefaultType = 4;
  (parameters[11]).DefaultData = & defaultAddressSpace;
  (parameters[11]).DefaultLength = sizeof(ULONG );
  // #line 1858
  (parameters[12]).Flags = 0x00000020;
  (parameters[12]).Name = "I\0n\0t\0e\0r\0r\0u\0p\0t\0L\0e\0v\0e\0l\0";
  (parameters[12]).EntryContext = & userData.UserLevel;
  (parameters[12]).DefaultType = 4;
  (parameters[12]).DefaultData = & zero;
  (parameters[12]).DefaultLength = sizeof(ULONG );
  // #line 1865
  (parameters[13]).Flags = 0x00000020;
  (parameters[13]).Name = "D\0i\0s\0a\0b\0l\0e\0P\0o\0r\0t\0";
  (parameters[13]).EntryContext = & userData.DisablePort;
  (parameters[13]).DefaultType = 4;
  (parameters[13]).DefaultData = & badValue;
  (parameters[13]).DefaultLength = sizeof(ULONG );
  // #line 1872
  (parameters[14]).Flags = 0x00000020;
  (parameters[14]).Name = "F\0o\0r\0c\0e\0F\0i\0f\0o\0E\0n\0a\0b\0l\0e\0";
  (parameters[14]).EntryContext = & userData.ForceFIFOEnable;
  (parameters[14]).DefaultType = 4;
  (parameters[14]).DefaultData = & badValue;
  (parameters[14]).DefaultLength = sizeof(ULONG );
  // #line 1879
  (parameters[15]).Flags = 0x00000020;
  (parameters[15]).Name = "R\0x\0F\0I\0F\0O\0";
  (parameters[15]).EntryContext = & userData.RxFIFO;
  (parameters[15]).DefaultType = 4;
  (parameters[15]).DefaultData = & badValue;
  (parameters[15]).DefaultLength = sizeof(ULONG );
  // #line 1886
  (parameters[16]).Flags = 0x00000020;
  (parameters[16]).Name = "T\0x\0F\0I\0F\0O\0";
  (parameters[16]).EntryContext = & userData.TxFIFO;
  (parameters[16]).DefaultType = 4;
  (parameters[16]).DefaultData = & badValue;
  (parameters[16]).DefaultLength = sizeof(ULONG );
  // #line 1893
  (parameters[17]).Flags = 0x00000020;
  (parameters[17]).Name = "M\0a\0s\0k\0I\0n\0v\0e\0r\0t\0e\0d\0";
  (parameters[17]).EntryContext = & userData.MaskInverted;
  (parameters[17]).DefaultType = 4;
  (parameters[17]).DefaultData = & zero;
  (parameters[17]).DefaultLength = sizeof(ULONG );
  // #line 1900
  (parameters[18]).Flags = 0x00000020;
  (parameters[18]).Name = "P\0n\0P\0D\0e\0v\0i\0c\0e\0I\0D\0";
  (parameters[18]).EntryContext = & PnPID;
  (parameters[18]).DefaultType = 1;
  (parameters[18]).DefaultData = "";
  (parameters[18]).DefaultLength = 0;
  // #line 1907
  (parameters[19]).Flags = 0x00000020;
  (parameters[19]).Name =
    "L\0e\0g\0a\0c\0y\0D\0i\0s\0c\0o\0v\0e\0r\0e\0d\0";
  (parameters[19]).EntryContext = & legacyDiscovered;
  (parameters[19]).DefaultType = 4;
  (parameters[19]).DefaultData = & zero;
  (parameters[19]).DefaultLength = sizeof(ULONG );
  (parameters[20]).Flags = 0x00000020;
  (parameters[20]).Name =
    "I\0n\0t\0e\0r\0r\0u\0p\0t\0 \0S\0t\0a\0t\0u\0s\0";
  (parameters[20]).EntryContext = & brokenStatus;
  (parameters[20]).DefaultType = 4;
  (parameters[20]).DefaultData = & zero;
  (parameters[20]).DefaultLength = sizeof(ULONG );

  /* 
     TRACER: we need  MINMAX here!
     Currently, this function is not reached because its only caller
     (DriverEntry) is not called neither. BLAST also commented the
     call to DriverEntry.
   */

  i = 0;
  while(1)
    {
      newDevObj = (void *  )0;
      status = ZwEnumerateKey(parametersKey, i, KeyBasicInformation,
			      userSubKey, 
			      sizeof(KEY_BASIC_INFORMATION ) + sizeof(WCHAR ) * 255,
			      & actuallyReturned);
      if(status == (NTSTATUS )0x8000001AL)
	  break;
      if(status == (NTSTATUS )0x80000005L)
	{
	  SerialLogError(DriverObject, (void *  )0,
			 SerialPhysicalZero___2,
			 SerialPhysicalZero___2,
			 0, 0, 0, 84, (NTSTATUS )0x00000000L, 
			 (NTSTATUS)0xC0060013L, 0, (void *  )0, 0, (void *  )0);
	  i++;
	  continue;
	}
      if(! ((NTSTATUS )status >= 0))
	{
	  SerialLogError(DriverObject, (void *  )0,
			 SerialPhysicalZero___2,
			 SerialPhysicalZero___2,
			 0, 0, 0, 85, (NTSTATUS )0x00000000L, 
			 (NTSTATUS)0xC0060013L, 0, (void *  )0, 0, (void *  )0);
	  i++;
	  continue;
	}
      memset((PUCHAR )(& (userSubKey->Name)[0]) +userSubKey->NameLength, 0, sizeof(WCHAR ));
      (parameters[0]).Name = & (userSubKey->Name)[0];
      memset(& userData.UserPort, 0, sizeof(userData.UserPort));
      memset(& userData.UserInterruptStatus, 0,
	     sizeof(userData.UserInterruptStatus));
      memset((userData.UserSymbolicLink).Buffer, 0,
	     (userData.UserSymbolicLink).MaximumLength);
      (userData.UserSymbolicLink).Length = 0;
      status = RtlQueryRegistryValues(0, parametersPath.Buffer,
				      parameters, (void *  )0, (void *  )0);
      if(! ((NTSTATUS )status >= 0))
	{
	  SerialLogError(DriverObject, (void *  )0,
			 SerialPhysicalZero___2,
			 SerialPhysicalZero___2,
			 0, 0, 0, 86, (NTSTATUS )0x00000000L, 
			 (NTSTATUS)0xC0060019L, userSubKey->NameLength +
			 sizeof(WCHAR ), & (userSubKey->Name)[0], 0,
				(void *  )0);
	  i++;
	  continue;
	}
      if(PnPID.Length != 0)
	{
	  i++;
	  continue;
	}
      if(legacyDiscovered != 0)
	{
	  i++;
	  continue;
	}
      memset((PUCHAR )(& ((userData.UserSymbolicLink).Buffer)[0]) +
	     (userData.UserSymbolicLink).Length, 0, sizeof(WCHAR ));
      if(brokenStatus != 0)
	{
	  (userData.UserInterruptStatus).LowPart = brokenStatus;
	}
      temp__1 =SerialIsUserDataValid(DriverObject, userSubKey, parameters,
				     defaultInterfaceType, & userData);
      if( temp__1 == 0)
	{
	  i++;
	  continue;
	}
      status = SerialBuildResourceList(resourceList, &
				       countOfPartials, & userData);
      if(! ((NTSTATUS )status >= 0))
	{
	  i++;
	  continue;
	}
      status = SerialTranslateResourceList(DriverObject, userSubKey,
					   trResourceList, resourceList, countOfPartials, &
					   userData);
      if(! ((NTSTATUS )status >= 0))
	{
	  i++;
	  continue;
	}
      status = SerialBuildRequirementsList(pRequiredList,
					   countOfPartials, & userData);
      if(! ((NTSTATUS )status >= 0))
	{
	  i++;
	  continue;
	}
      newPdo = (void *  )0;
      status = IoReportDetectedDevice(DriverObject,
				      InterfaceTypeUndefined, - 1, - 1, resourceList,
				      pRequiredList, 0, & newPdo);
      if(! ((NTSTATUS )status >= 0))
	{
	  if(status == (NTSTATUS )0xC000009AL)
	    {
	      SerialLogError(DriverObject, (void *  )0,
			     userData.UserPort,
			     SerialPhysicalZero___2, 0, 0, 0, 89,
			     status, (NTSTATUS )0xC006002CL,
			     userSubKey->NameLength + sizeof(WCHAR ),
			     & (userSubKey->Name)[0], 0, (void *
							  )0);
	    }
	  else
	    {
	      SerialLogError(DriverObject, (void *  )0,
			     userData.UserPort,
			     SerialPhysicalZero___2, 0, 0, 0, 87,
			     status, (NTSTATUS )0xC0060028L,
			     userSubKey->NameLength + sizeof(WCHAR ),
			     & (userSubKey->Name)[0], 0, (void *
							  )0);
			}
	  i++;
	  continue;
	}
      status = SerialMigrateLegacyRegistry(newPdo, & userData,
					   (BOOLEAN )(/* countOfPartials == 3 ? */ 1 /* : 0 */));
      if(! ((NTSTATUS )status >= 0))
	{
	  i++;
	  continue;
	}
      status = SerialCreateDevObj(DriverObject, & newDevObj);
      if(! ((NTSTATUS )status >= 0))
	{
	  i++;
	  continue;
	}
      lowerDevice = IoAttachDeviceToDeviceStack(newDevObj, newPdo);
      deviceExtension = newDevObj->DeviceExtension;
      deviceExtension->LowerDeviceObject = lowerDevice;
      deviceExtension->Pdo = newPdo;
      newDevObj->Flags |= 0x00002000 | 0x00000004;
      {
	MmLockPagableSectionByHandle(SerialGlobals.PAGESER_Handle);
      }

      /* 
	 TRACER: This function changes many global variables. Without
         MINMAX we report false positive
      */
      status = SerialFinishStartDevice(newDevObj, resourceList,
				       trResourceList, & userData);
      MmUnlockPagableImageSection(SerialGlobals.PAGESER_Handle);
      if(! ((NTSTATUS )status >= 0))
	{
	  SerialRemoveDevObj(newDevObj);
	  i++;
	  continue;
	}
      RtlAppendUnicodeToString(& legacyKeys, "\134\0");
      RtlAppendUnicodeToString(& legacyKeys, & (userSubKey->Name)[0]);
      status = RtlWriteRegistryValue(0, legacyKeys.Buffer,
				     "L\0e\0g\0a\0c\0y\0D\0i\0s\0c\0o\0v\0e\0r\0e\0d\0", 4, &
				     nonzero, sizeof(nonzero));
      memset(legacyKeys.Buffer, 0, legacyKeys.MaximumLength);
      legacyKeys.Length = 0;
      RtlAppendUnicodeStringToString(& legacyKeys, & parametersPath);
      if(! ((NTSTATUS )status >= 0))
	{
	  SerialLogError(DriverObject, (void *  )0,
			 userData.UserPort, SerialPhysicalZero___2, 0, 0,
			 0, 88, (NTSTATUS )0x00000000L, (NTSTATUS
							 )0xC0060029L, 0, (void *  )0, 0, (void *  )0);
	}
      i++;
      (* countSoFar)++;
    } // end while(1)
   
  ZwClose(parametersKey);
 LegacyInitLeave:
  if(userSubKey != (void *  )0)
    {
      ExFreePool(userSubKey);
	  }
  if(PnPID.Buffer != (void *  )0)
    {
      ExFreePool(PnPID.Buffer);
    }
  if(legacyKeys.Buffer != (void *  )0)
    {
      ExFreePool(legacyKeys.Buffer);
    }
  if((userData.UserSymbolicLink).Buffer != (void *  )0)
    {
      ExFreePool((userData.UserSymbolicLink).Buffer);
    }
  if(parametersPath.Buffer != (void *  )0)
    {
      ExFreePool(parametersPath.Buffer);
    }
  if(parameters != (void *  )0)
    {
      ExFreePool(parameters);
    }
  if(resourceList != (void *  )0)
    {
      ExFreePool(resourceList);
    }
  if(trResourceList != (void *  )0)
    {
      ExFreePool(trResourceList);
	  }
  if(pRequiredList != (void *  )0)
    {
      ExFreePool(pRequiredList);
    }
  return (NTSTATUS )0x00000000L;
}

NTSTATUS SerialSystemControlDispatch(PDEVICE_OBJECT DeviceObject , PIRP Irp )
{
  SYSCTL_IRP_DISPOSITION disposition ;
  NTSTATUS status ;
  PSERIAL_DEVICE_EXTENSION pDevExt;
  int temp__1; 

  pDevExt = (PSERIAL_DEVICE_EXTENSION)DeviceObject->DeviceExtension;
	   
  status = WmiSystemControl(& pDevExt->WmiLibInfo, DeviceObject, Irp, &
			    disposition);
  switch(temp__1/*disposition*/)
    {
    case 1 /* IrpProcessed */:
      {
	/* 
	   TRACER: WmiSystemControl does not do anything. Therefore,
	   if we break the program is unsafe
	*/
	break;
      }
    case 2 /*IrpNotCompleted*/:
	IofCompleteRequest(Irp, 0);
	break;
    case 3 /*IrpForward*/:
    case 4 /*IrpNotWmi*/:
      {
	// TRACER
	_ABORT(s != NP);
	s = SKIP1;

	// BLAST
/* 	if(s == NP) */
/* 	  s = SKIP1; */
/* 	else */
/* 	  errorFn(); */


	Irp->CurrentLocation++;
	((Irp->Tail).Overlay).CurrentStackLocation++;
	status = IofCallDriver(pDevExt->LowerDeviceObject, Irp);
	break;
      }
    default :
      {
	// TRACER
	_ABORT(s != NP);
	s = SKIP1;	
	
	// BLAST
/* 	if(s == NP) */
/* 	  s = SKIP1; */
/* 	else */
/* 	  errorFn(); */
	
	Irp->CurrentLocation++;
	((Irp->Tail).Overlay).CurrentStackLocation++;
	status = IofCallDriver(pDevExt->LowerDeviceObject, Irp);
	break;
      }
    }
  return status;
}

// #line 101
GUID SerialPortNameGuid /* = {0xa0ec11a8, 0xb16c, 0x11d1, {0xbd, 0x98, 0x00, 0xa0, */
/* 	0xc9, 0x06, 0xbe, 0x2d}} */;
// #line 102
GUID SerialPortCommGuid /* = {0xedb16a62, 0xb16c, 0x11d1, {0xbd, 0x98, 0x00, 0xa0, */
/* 	0xc9, 0x06, 0xbe, 0x2d}} */;
// #line 103
GUID SerialPortHWGuid /* = {0x270b9b86, 0xb16d, 0x11d1, {0xbd, 0x98, 0x00, 0xa0, */
/* 	0xc9, 0x06, 0xbe, 0x2d}} */;
// #line 104
GUID SerailPortPerfGuid /* = {0x56415acc, 0xb16d, 0x11d1, {0xbd, 0x98, 0x00, 0xa0, */
/* 	0xc9, 0x06, 0xbe, 0x2d}} */;
// #line 105
GUID SerialPortPropertiesGuid /* = {0x8209ec2a, 0x2d6b, 0x11d2, {0xba, 0x49, 0x00, */
/* 	0xa0, 0xc9, 0x06, 0x29, 0x10}} */;
//WMIGUIDREGINFO SerialWmiGuidList[5] /* = {{& SerialPortNameGuid, 1, 0}, {& */
/* 	SerialPortCommGuid, 1, 0}, {& SerialPortHWGuid, 1, 0}, {& */
/* 	SerailPortPerfGuid, 1, 0}, {& SerialPortPropertiesGuid, 1, 0}} */ //;

NTSTATUS SerialTossWMIRequest(PDEVICE_OBJECT PDevObj , PIRP PIrp , ULONG GuidIndex )
{
  PSERIAL_DEVICE_EXTENSION pDevExt ;
  NTSTATUS status ;
  pDevExt = (PSERIAL_DEVICE_EXTENSION )PDevObj->DeviceExtension;
  switch(GuidIndex)
    {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
      status = (NTSTATUS )0xC0000010L;
      break;
    default :
      status = (NTSTATUS )0xC0000295L;
      break;
    }
  status = WmiCompleteRequest(PDevObj, PIrp, status, 0, 0);
  return status;
}

NTSTATUS SerialSetWmiDataItem(PDEVICE_OBJECT PDevObj , PIRP PIrp , ULONG
	GuidIndex , ULONG InstanceIndex , ULONG DataItemId , ULONG BufferSize ,
	PUCHAR PBuffer )
{
  return SerialTossWMIRequest(PDevObj, PIrp, GuidIndex);
}

NTSTATUS SerialSetWmiDataBlock(PDEVICE_OBJECT PDevObj , PIRP PIrp , ULONG
			       GuidIndex , ULONG InstanceIndex , ULONG BufferSize , PUCHAR PBuffer )
{
  return SerialTossWMIRequest(PDevObj, PIrp, GuidIndex);
}

NTSTATUS SerialQueryWmiDataBlock(PDEVICE_OBJECT PDevObj , PIRP PIrp , ULONG
	GuidIndex , ULONG InstanceIndex , ULONG InstanceCount , PULONG
	InstanceLengthArray , ULONG OutBufferSize , PUCHAR PBuffer )
{
  NTSTATUS status ;
  ULONG size;
  PSERIAL_DEVICE_EXTENSION pDevExt;

 size = 0;
 pDevExt = (PSERIAL_DEVICE_EXTENSION)PDevObj->DeviceExtension;
 switch(GuidIndex)
   {
   case 0:
     size = (pDevExt->WmiIdentifier).Length;
     if(OutBufferSize < size + sizeof(USHORT ))
       {
	 size += sizeof(USHORT );
	 status = (NTSTATUS )0xC0000023L;
	 break;
       }
     if((pDevExt->WmiIdentifier).Buffer == (void *  )0)
       {
	 status = (NTSTATUS )0xC000009AL;
	 break;
       }
     * (USHORT *  )PBuffer = (USHORT )size;
     PBuffer = PBuffer + sizeof(USHORT );
     memcpy(PBuffer, (pDevExt->WmiIdentifier).Buffer, size);
     size += sizeof(USHORT );
     * InstanceLengthArray = size;
     status = (NTSTATUS )0x00000000L;
     break;
   case 1:
     size = sizeof(SERIAL_WMI_COMM_DATA );
     if(OutBufferSize < size)
       {
	 status = (NTSTATUS )0xC0000023L;
	 break;
       }
     * InstanceLengthArray = size;
     * (PSERIAL_WMI_COMM_DATA )PBuffer = pDevExt->WmiCommData;
     status = (NTSTATUS )0x00000000L;
     break;
   case 2:
     size = sizeof(SERIAL_WMI_HW_DATA );
     if(OutBufferSize < size)
       {
	 status = (NTSTATUS )0xC0000023L;
	 break;
       }
     * InstanceLengthArray = size;
     * (PSERIAL_WMI_HW_DATA )PBuffer = pDevExt->WmiHwData;
     status = (NTSTATUS )0x00000000L;
     break;
   case 3:
     size = sizeof(SERIAL_WMI_PERF_DATA );
     if(OutBufferSize < size)
       {
	 status = (NTSTATUS )0xC0000023L;
	 break;
       }
     * InstanceLengthArray = size;
     * (PSERIAL_WMI_PERF_DATA )PBuffer = pDevExt->WmiPerfData;
     status = (NTSTATUS )0x00000000L;
     break;
   case 4:
     size = sizeof(SERIAL_COMMPROP ) + sizeof(ULONG );
     if(OutBufferSize < size)
       {
	 status = (NTSTATUS )0xC0000023L;
	 break;
       }
     * InstanceLengthArray = size;
     SerialGetProperties(pDevExt, (PSERIAL_COMMPROP )PBuffer);
     * (PULONG )((PSERIAL_COMMPROP )PBuffer)->ProvChar = 0;
     status = (NTSTATUS )0x00000000L;
     break;
   default :
     status = (NTSTATUS )0xC0000295L;
     break;
   }
 status = WmiCompleteRequest(PDevObj, PIrp, status, size, 0);
 return status;
}

NTSTATUS SerialQueryWmiRegInfo(PDEVICE_OBJECT PDevObj , PULONG PRegFlags ,
			       PUNICODE_STRING PInstanceName , 
			       PUNICODE_STRING *  PRegistryPath ,
			       PUNICODE_STRING MofResourceName , 
			       PDEVICE_OBJECT *  Pdo )
{
  PSERIAL_DEVICE_EXTENSION pDevExt;

  pDevExt = (PSERIAL_DEVICE_EXTENSION)PDevObj->DeviceExtension;
  * PRegFlags = 0x00000020;
  * PRegistryPath = & SerialGlobals.RegistryPath;
  * Pdo = pDevExt->Pdo;
  return (NTSTATUS )0x00000000L;
}

NTSTATUS SerialSystemPowerCompletion(PDEVICE_OBJECT PDevObj , 
				     UCHAR  MinorFunction , 
				     POWER_STATE PowerState , PVOID Context ,
				     PIO_STATUS_BLOCK IoStatus )
{
  if(Context != (void *  )0)
    {
      KeSetEvent((PKEVENT )Context, 0, 0);
    }
  return (NTSTATUS )0x00000000L;
}

void SerialSaveDeviceState(PSERIAL_DEVICE_EXTENSION PDevExt )
{
  PSERIAL_DEVICE_STATE pDevState;

  pDevState = & PDevExt->DeviceState;
  pDevState->IER = READ_PORT_UCHAR(PDevExt->Controller + (ULONG )(0x01 *1));	 
  pDevState->MCR = READ_PORT_UCHAR(PDevExt->Controller + (ULONG )(0x04 *1));	  
  pDevState->LCR = READ_PORT_UCHAR(PDevExt->Controller + (ULONG )(0x03 *1));
									
}

void SerialRestoreDeviceState(PSERIAL_DEVICE_EXTENSION PDevExt )
{
  PSERIAL_DEVICE_STATE pDevState;
  SHORT divisor ;
  SERIAL_IOCTL_SYNC S ;

  pDevState = & PDevExt->DeviceState;
  SerialGetDivisorFromBaud(PDevExt->ClockRate, PDevExt->CurrentBaud, &
			   divisor);
  S.Extension = PDevExt;
  S.Data = (PVOID )divisor;
  SerialSetBaud(& S);
  if(PDevExt->FifoPresent)
    {
      WRITE_PORT_UCHAR(PDevExt->Controller + (ULONG )(0x02 *1), (UCHAR )0);
      READ_PORT_UCHAR(PDevExt->Controller + (ULONG )(0x00 * 1));
      WRITE_PORT_UCHAR(PDevExt->Controller + (ULONG )(0x02 *1), (UCHAR )((UCHAR )0x01 |  
									 PDevExt->RxFifoTrigger | (UCHAR )0x02 | (UCHAR )0x04));
    }
  else
    {
      WRITE_PORT_UCHAR(PDevExt->Controller + (ULONG )(0x02 *1), (UCHAR )0);
      
    }
  if(PDevExt->InterruptStatus)
    {
      if(PDevExt->Indexed)
	{
	  WRITE_PORT_UCHAR(PDevExt->InterruptStatus, (UCHAR)0xFF);
	}
      else
	{
	  if(PDevExt->OurIsrContext == PDevExt)
	    {
	      WRITE_PORT_UCHAR(PDevExt->InterruptStatus,
			       (UCHAR )(1 << PDevExt->PortIndex - 1));
	    }
	  else
	    {
	      WRITE_PORT_UCHAR(PDevExt->InterruptStatus,
			       (UCHAR )((PSERIAL_MULTIPORT_DISPATCH)PDevExt->OurIsrContext)->UsablePortMask);
	    }
	}
    }
  WRITE_PORT_UCHAR(PDevExt->Controller + (ULONG )(0x01 * 1),
		   pDevState->IER);
  WRITE_PORT_UCHAR(PDevExt->Controller + (ULONG )(0x03 * 1),
		   pDevState->LCR);
  READ_PORT_UCHAR(PDevExt->Controller + (ULONG )(0x02 * 1));
  READ_PORT_UCHAR(PDevExt->Controller + (ULONG )(0x05 * 1));
  READ_PORT_UCHAR(PDevExt->Controller + (ULONG )(0x06 * 1));
  if((PDevExt->DeviceState).Reopen == 1)
    {
      // #line 227
      PDevExt->DeviceIsOpened = 1;
      (PDevExt->DeviceState).Reopen = 0;
      WRITE_PORT_UCHAR(PDevExt->Controller + (ULONG )(0x04 *1), 
		       (UCHAR )(pDevState->MCR | 0x08));	        
      WRITE_PORT_UCHAR(PDevExt->Controller + (ULONG)(0x01 * 1), 0);
      WRITE_PORT_UCHAR(PDevExt->Controller + (ULONG)(0x01 * 1), 
		       (UCHAR )(0x01 | 0x02 | 0x04| 0x08));
    }
}

// Called from main()
NTSTATUS SerialPowerDispatch(PDEVICE_OBJECT PDevObj , PIRP PIrp )
{
  PSERIAL_DEVICE_EXTENSION pDevExt;
  PIO_STACK_LOCATION pIrpStack;
  NTSTATUS status ;
  PDEVICE_OBJECT pLowerDevObj;
  PDEVICE_OBJECT pPdo;
  BOOLEAN acceptingIRPs ;
  POWER_STATE powerState ;
  int temp__1, temp__2, temp__3;

  pDevExt = PDevObj->DeviceExtension;
  pIrpStack = ((PIrp->Tail).Overlay).CurrentStackLocation;
  pLowerDevObj = pDevExt->LowerDeviceObject;
  pPdo = pDevExt->Pdo;
  
  status = SerialIRPPrologue(PIrp, pDevExt);
  if(status != (NTSTATUS)0x00000000L)
    {
      PoStartNextPowerIrp(PIrp);
      IofCompleteRequest(PIrp, 0);
      SerialIRPEpilogue(pDevExt);
      return status;
    }
  status = (NTSTATUS )0x00000000L;
  switch(pIrpStack->MinorFunction)
    {
    case 0x00:
      break;
    case 0x01:
      break;
    case 0x02:
      switch(temp__1 /* ((pIrpStack->Parameters).Power).Type */)
	{
	case 1 /* SystemPowerState */:
	  {
	    if(pDevExt->OwnsPowerPolicy != 1)
	      {
		status = (NTSTATUS )0x00000000L;
		goto PowerExit;
	      }
	    switch(temp__2/* (((pIrpStack->Parameters).Power).State).SystemState */)
	      {
	      case 1/* PowerSystemUnspecified */:
		powerState.DeviceState = PowerDeviceUnspecified;
		break;
	      case 2 /*PowerSystemWorking*/:
		powerState.DeviceState = PowerDeviceD0;
		break;
	      case 3 /*PowerSystemSleeping1*/:
	      case 4 /*PowerSystemSleeping2*/:
	      case 5 /*PowerSystemSleeping3*/:
	      case 6 /*PowerSystemHibernate*/:
	      case 7 /*PowerSystemShutdown*/:
	      case 8 /* PowerSystemMaximum */:
		powerState.DeviceState =  (pDevExt->DeviceStateMap)[(((pIrpStack->Parameters).Power).State).SystemState];
		break;
	      default :
		status = (NTSTATUS )0x00000000L;
		goto PowerExit;
		break;
	      }
	    status = (NTSTATUS )0x00000000L;
	    PoSetPowerState(PDevObj,
			    ((pIrpStack->Parameters).Power).Type,
			    ((pIrpStack->Parameters).Power).State);
	    if(powerState.DeviceState < pDevExt->PowerState && pDevExt->OpenCount)
		PoRequestPowerIrp(pPdo, 0x02, powerState, (void *  )0,
				  (void *  )0, (void *  )0);
	    else
	      {
		if(powerState.DeviceState >= pDevExt->PowerState)
		  {
		    if(pDevExt->PendingWakeIrp == (void *  )0 && !
		       pDevExt->SendWaitWake || powerState.DeviceState <= pDevExt->DeviceWake)
			PoRequestPowerIrp(pPdo,  0x02, powerState,(void *  )0,(void *  )0,(void *  )0);
		    else
		      {
			status = (NTSTATUS)0xC0000184L;
			
		      }
		  }
	      }
	    goto PowerExit;
	  }
	case 2 /* DevicePowerState */:
	  break;
	default :
	  status = (NTSTATUS )0x00000000L;
	  goto PowerExit;
	}
      if(pDevExt->PowerState == (((pIrpStack->Parameters).Power).State).DeviceState)
	{
	  status = (NTSTATUS )0x00000000L;
	  break;
	}
      switch(temp__3/* (((pIrpStack->Parameters).Power).State).DeviceState */)
	{
	case 1 /* PowerDeviceD0 */:
	  return SerialSetPowerD0(PDevObj, PIrp);
	case 2 /* PowerDeviceD1 */:
	case 3 /* PowerDeviceD2 */:
	case 4 /* PowerDeviceD3 */:
	  return SerialSetPowerD3(PDevObj, PIrp);
	default :
	  break;
	}
      break;
    case 0x03:
      if(pDevExt->PendingWakeIrp != (void *  )0 || pDevExt->SendWaitWake)
	{
	  if(((pIrpStack->Parameters).Power).Type == DevicePowerState &&
	     (((pIrpStack->Parameters).Power).State).DeviceState > pDevExt->DeviceWake)
	    {
	      status = (NTSTATUS)0xC0000184L; 
	      (PIrp->IoStatus).Status = (NTSTATUS)0xC0000184L ;
	      PoStartNextPowerIrp(PIrp);
	      IofCompleteRequest(PIrp, 0);
	      SerialIRPEpilogue(pDevExt);
	      return status;
	    }
	}
      (PIrp->IoStatus).Status = (NTSTATUS )0x00000000L;
      status = (NTSTATUS )0x00000000L;
      PoStartNextPowerIrp(PIrp);
      PIrp->CurrentLocation++;
      ((PIrp->Tail).Overlay).CurrentStackLocation++;
      return SerialPoCallDriver(pDevExt, pLowerDevObj, PIrp);
    }
 PowerExit:
  PoStartNextPowerIrp(PIrp);
  PIrp->CurrentLocation++;
  ((PIrp->Tail).Overlay).CurrentStackLocation++;
  status = SerialPoCallDriver(pDevExt, pLowerDevObj, PIrp);
  return status;
}

NTSTATUS SerialSetPowerD0(PDEVICE_OBJECT PDevObj , PIRP PIrp )
{
  PSERIAL_DEVICE_EXTENSION pDevExt;
  PIO_STACK_LOCATION pIrpStack;
  NTSTATUS status ;
  PIO_STACK_LOCATION irpSp ;
  PIO_STACK_LOCATION nextIrpSp ;

  pDevExt = PDevObj->DeviceExtension;
  pIrpStack = ((PIrp->Tail).Overlay).CurrentStackLocation;   
  KeClearEvent(& pDevExt->PowerD0Event);
  irpSp = ((PIrp->Tail).Overlay).CurrentStackLocation;
  nextIrpSp = ((PIrp->Tail).Overlay).CurrentStackLocation - 1;
  memcpy(nextIrpSp, irpSp, (LONG )((LONG_PTR )(&((IO_STACK_LOCATION *  )0)->CompletionRoutine)));
  nextIrpSp->Control = 0;

  // TRACER
  _ABORT(s != NP);
  _ABORT(compRegistered != 0);
  compRegistered = 1;
  // compFptr = SerialSyncCompletion;

  // BLAST
/*   if(s != NP) */
/*     errorFn(); */
/*   else */
/*     { */
/*       if(compRegistered != 0) */
/* 	errorFn(); */
/*       else */
/* 	{ */
/* 	  compRegistered = 1; */
/* 	  compFptr = SerialSyncCompletion; */
/* 	} */
/*     } */

  

  irpSp = ((PIrp->Tail).Overlay).CurrentStackLocation - 1;
  irpSp->CompletionRoutine = SerialSyncCompletion;
  irpSp->Context = & pDevExt->PowerD0Event;
  irpSp->Control = 0;
  if(1) irpSp->Control = 0x40;
  if(1) irpSp->Control |= 0x80;
  if(1) irpSp->Control |= 0x20;
  
  status = PoCallDriver(pDevExt->LowerDeviceObject, PIrp);
  if(status == (NTSTATUS )0x00000103L /*259*/){
      KeWaitForSingleObject(& pDevExt->PowerD0Event, Executive,
			    KernelMode, 0, (void *  )0);
      // TRACER: otherwise it's unsafe!
      status = 0;
  }
  else
    {
      if(! ((NTSTATUS )status >= 0))
	{
	  (PIrp->IoStatus).Status = status;
	  // TRACER
	  myStatus = status;	  
	  PoStartNextPowerIrp(PIrp);
	  IofCompleteRequest(PIrp, 0);
	  SerialIRPEpilogue(pDevExt);
	  return status;
	}
    }
  if(! ((NTSTATUS ) myStatus /*(PIrp->IoStatus).Status*/ >= 0))
    {
      // TRACER
      status = myStatus /*(PIrp->IoStatus).Status*/;
      PoStartNextPowerIrp(PIrp);
      IofCompleteRequest(PIrp, 0);
      SerialIRPEpilogue(pDevExt);
      return status;
    }
  pDevExt->PowerState = PowerDeviceD0;
  if(pDevExt->PNPState == 0x1L)
      SerialRestoreDeviceState(pDevExt);
  PoSetPowerState(PDevObj, ((pIrpStack->Parameters).Power).Type,
		  ((pIrpStack->Parameters).Power).State);
  PoStartNextPowerIrp(PIrp);
  IofCompleteRequest(PIrp, 0);  // <--- here s=DC
  SerialIRPEpilogue(pDevExt);
  return status;                // <--- here status can be 259
}

NTSTATUS SerialGotoPowerState(PDEVICE_OBJECT PDevObj , PSERIAL_DEVICE_EXTENSION PDevExt ,
			      DEVICE_POWER_STATE DevPowerState )
{
  KEVENT gotoPowEvent ;
  NTSTATUS status ;
  POWER_STATE powerState ;

  powerState.DeviceState = DevPowerState;
  KeInitializeEvent(& gotoPowEvent, SynchronizationEvent, 0);
  status = PoRequestPowerIrp(PDevObj, 0x02, powerState,
			     SerialSystemPowerCompletion, & gotoPowEvent, (void *  )0);
  if(status == (NTSTATUS )0x00000103L)
    {
      KeWaitForSingleObject(& gotoPowEvent, Executive, KernelMode, 0,
			    (void *  )0);
      status = (NTSTATUS )0x00000000L;
    }
  return status;
}

NTSTATUS SerialSetPowerD3(PDEVICE_OBJECT PDevObj , PIRP PIrp )
{

  NTSTATUS status;
  PSERIAL_DEVICE_EXTENSION pDevExt;
  PIO_STACK_LOCATION pIrpStack;
  LARGE_INTEGER charTime ;  

  status = (NTSTATUS )0x00000000L;
  pDevExt = PDevObj->DeviceExtension;
  pIrpStack = ((PIrp->Tail).Overlay).CurrentStackLocation;
  
  if(pDevExt->SendWaitWake)
      SerialSendWaitWake(pDevExt);
  
  PoSetPowerState(PDevObj, ((pIrpStack->Parameters).Power).Type,
		  ((pIrpStack->Parameters).Power).State);
  if(pDevExt->DeviceIsOpened == 1)
    {
      
      pDevExt->DeviceIsOpened = 0;
      (pDevExt->DeviceState).Reopen = 1;
      // charTime.QuadPart=-(SerialGetCharTime(pDevExt)).QuadPart;
      SerialDisableUART(pDevExt);
      SerialDrainUART(pDevExt, & charTime);
      SerialSaveDeviceState(pDevExt);
    }
  (PIrp->IoStatus).Status = (NTSTATUS )0x00000000L;
  pDevExt->PowerState = PowerDeviceD3;
  (PIrp->IoStatus).Status = (NTSTATUS )0x00000000L;
  PoStartNextPowerIrp(PIrp);
  PIrp->CurrentLocation++;
  ((PIrp->Tail).Overlay).CurrentStackLocation++;
  return SerialPoCallDriver(pDevExt, pDevExt->LowerDeviceObject, PIrp);
}

NTSTATUS SerialSendWaitWake(PSERIAL_DEVICE_EXTENSION PDevExt )
{
  NTSTATUS status ;
  PIRP pIrp ;
  POWER_STATE powerState ;

  if(PDevExt->PendingWakeIrp != (void *  )0)
      return (NTSTATUS )0xC0000184L;
  if(PDevExt->SystemWake <= PowerSystemWorking)
    return (NTSTATUS )0xC0000184L;
  if(PDevExt->DeviceWake == PowerDeviceUnspecified)
    return (NTSTATUS )0xC0000184L;

  InterlockedIncrement(& PDevExt->PendingIRPCnt);
  powerState.SystemState = PDevExt->SystemWake;
  status = PoRequestPowerIrp(PDevExt->Pdo, 0x00, powerState,
			     SerialWakeCompletion, PDevExt, & pIrp);
  if(status == (NTSTATUS )0x00000103L)
    {
      status = (NTSTATUS )0x00000000L;
      PDevExt->PendingWakeIrp = pIrp;
    }
  else
    {
      if(! ((NTSTATUS )status >= 0))
	  SerialIRPEpilogue(PDevExt);
    }
  return status;
}

NTSTATUS SerialWakeCompletion(PDEVICE_OBJECT PDevObj , UCHAR MinorFunction ,
	POWER_STATE PowerState , PVOID Context , PIO_STATUS_BLOCK IoStatus )
{
  NTSTATUS status ;
  PSERIAL_DEVICE_EXTENSION pDevExt;
  POWER_STATE powerState ;

  pDevExt = (PSERIAL_DEVICE_EXTENSION )Context;
  status = IoStatus->Status;
  if((NTSTATUS )status >= 0)
    {
      powerState.DeviceState = PowerDeviceD0;
      PoRequestPowerIrp(pDevExt->Pdo, 0x02, powerState, (void *  )0,
			(void *  )0, (void *  )0);
    }
  pDevExt->PendingWakeIrp = (void *  )0;
  SerialIRPEpilogue(pDevExt);
  return status;
}


///////////////////////////////////////////////////////////
// #line 15 "../slam-kernel.c"
///////////////////////////////////////////////////////////

void _BLAST_init()
{
  UNLOADED = 0;
  NP = 1;
  DC = 2;
  SKIP1 = 3;
  SKIP2 = 4;
  MPR1 = 5;
  MPR3 = 6;
  IPC = 7;
  s = UNLOADED;
  pending = 0;
  compFptr = 0;
  compRegistered = 0;
  lowerDriverReturn = 0;
  setEventCalled = 0;
  customIrp = 0;
}
//extern NTSTATUS DriverEntry(PDRIVER_OBJECT , PUNICODE_STRING ) ;
IRP *  pirp ;

void stub_driver_init()
{
  s = NP;
  pending = 0;
  compFptr = 0;
  compRegistered = 0;
  lowerDriverReturn = 0;
  setEventCalled = 0;
  customIrp = 0;
}

int main()
{
  DRIVER_OBJECT d ;
  UNICODE_STRING u ;
  NTSTATUS status ;
  int we_should_unload ;
  IRP irp;
  int BLAST_NONDET ;
  int idx ;
  int irp_choice ;
  DEVICE_OBJECT devobj ;
  
  pirp = &irp;
  _BLAST_init();
  // BLAST  status = DriverEntry(& d, & u);  
  if((NTSTATUS )status >= 0)
    {
      s = NP;
      pending = 0;
      compFptr = 0;
      compRegistered = 0;
      lowerDriverReturn = 0;
      setEventCalled = 0;
      customIrp = 0;
      (pirp->IoStatus).Status = (NTSTATUS )0x00000000L;
      // to shadow (pirp->IoStatus).Status
      myStatus = (NTSTATUS )0x00000000L;
      if(irp_choice == 0)
	{
	  (pirp->IoStatus).Status = (NTSTATUS )0xC00000BBL;
	  // to shadow (pirp->IoStatus).Status
	  myStatus = (NTSTATUS )0xC00000BBL;
	}
      //  BLAST status = SerialAddDevice(& d, & devobj); 
      stub_driver_init();
      if(! ((NTSTATUS )status >= 0))
	return - 1;
      switch(BLAST_NONDET)
	{
	case 0:
	  status = SerialCreateOpen(& devobj, pirp);
	  break;
	case 1:
	  status = SerialClose(& devobj, pirp);
	  break;
	case 2: 
	  status = SerialIoControl(& devobj, pirp); 
 	  break; 
	case 3:
	  status = SerialPnpDispatch(& devobj, pirp);
	  break;
	case 4:
	  status = SerialPowerDispatch(& devobj, pirp);
	  break;
	case 5:
	  status = SerialCleanup(& devobj, pirp);
	  break;
	case 11:
	  status = SerialCleanup(& devobj, pirp);
	  break;
	  /*  BLAST
	      case 12:
	      status = SerialFlush(& devobj, pirp);
	      break;
	  */
	default :
	  return - 1;
	}
      if(we_should_unload)
	  SerialUnload(& d);
    }
  
    if(pending == 1 && s == NP)
      s = NP;
    else
      {
	if(pending == 1 && s == MPR3)
	  s = MPR3;
	else
	  {
	    if(s == UNLOADED || status == - 1){}
	    else
	      {
		/// TRACER
		_ABORT(s != SKIP2 && s != IPC && s != DC); 

		if(pending == 1)
		  _ABORT(status != 259);
		else
		  {		    
		    if(s == DC) { 
		      _ABORT(status == 259);
		    }
		    else{
		    // TRACER: if uncommented then BUG ...
		    // _ABORT(status != lowerDriverReturn);
		    }
		  }

		// BLAST
		
/* 		if(s != SKIP2 && s != IPC && s != DC) */
/* 		  errorFn(); */
/* 		else */
/* 		  { */
/* 		    if(pending == 1) */
/* 		      { */
/* 			if(status != 259) */
/* 			  errorFn(); */
/* 		      } */
/* 		    else */
/* 		      { */
/* 			if(s == DC) */
/* 			  { */
/* 			    if(status == 259) */
/* 			      errorFn(); */
/* 			  } */
/* 			else */
/* 			  { */
/* 			    if(status != lowerDriverReturn) */
/* 			      errorFn(); */
/* 			  } */
/* 		      } */
/* 		  } */
		/////////////////////////////////////////////////////

	      }
	  }
      }
  return status;
}

// char SLAM_alloc_dummy ;

char *  malloc(int i )
{ 
  if(TRACER_NONDET>0)
    return (char *  )0;
  else
    return (char *  )1;
}

void ExAcquireFastMutex(PFAST_MUTEX FastMutex )
{ return; }

void ExReleaseFastMutex(PFAST_MUTEX FastMutex )
{ return; }

 PVOID  ExAllocatePoolWithTag(POOL_TYPE PoolType ,
			      SIZE_T NumberOfBytes , ULONG Tag )
{
  PVOID x ;
  x = malloc(NumberOfBytes);
  return x;
}

void  ExFreePool(PVOID P )
{
  return;
}

 PLIST_ENTRY ExfInterlockedInsertHeadList(PLIST_ENTRY ListHead ,
					  PLIST_ENTRY ListEntry , PKSPIN_LOCK Lock )
{
  return (void *  )0;
}

 PLIST_ENTRY ExfInterlockedInsertTailList(PLIST_ENTRY ListHead ,
					  PLIST_ENTRY ListEntry , PKSPIN_LOCK Lock )
 {
  return (void *  )0;
 }

 PLIST_ENTRY ExfInterlockedRemoveHeadList(PLIST_ENTRY ListHead ,
					  PKSPIN_LOCK Lock )
{
  return (void *  )0;
}

PMDL IoAllocateMdl(PVOID VirtualAddress , ULONG Length ,
		   BOOLEAN SecondaryBuffer , BOOLEAN ChargeQuota , PIRP Irp )
{
  if(TRACER_NONDET>0)
    return (void *  )malloc(sizeof(MDL ));
  else
    return (void *  )0;
}

 PDEVICE_OBJECT IoAttachDeviceToDeviceStack(PDEVICE_OBJECT SourceDevice ,
					    PDEVICE_OBJECT TargetDevice )
{
  if(TRACER_NONDET>0)
    return TargetDevice;
  else
    return (void *  )0;
}

 PIRP IoBuildAsynchronousFsdRequest(ULONG MajorFunction ,
				    PDEVICE_OBJECT DeviceObject , PVOID Buffer , ULONG Length ,
				    PLARGE_INTEGER StartingOffset , PIO_STATUS_BLOCK IoStatusBlock )
 {
   customIrp = 1;   
   if(TRACER_NONDET>0)
     return (void *  )malloc(sizeof(IRP ));
   else
     return (void *  )0;
 }

PIRP IoBuildDeviceIoControlRequest(ULONG IoControlCode ,
				   PDEVICE_OBJECT DeviceObject , PVOID InputBuffer , 
				   ULONG InputBufferLength ,
				   PVOID OutputBuffer , ULONG OutputBufferLength ,
				   BOOLEAN InternalDeviceIoControl , PKEVENT Event , 
				   PIO_STATUS_BLOCK IoStatusBlock )
{
  customIrp = 1;

  if(TRACER_NONDET>0)
    return (void *  )malloc(sizeof(IRP ));
  else
    return (void *  )0;
}

 NTSTATUS IoCreateDevice(PDRIVER_OBJECT DriverObject ,
			 ULONG DeviceExtensionSize , PUNICODE_STRING DeviceName , 
			 ULONG DeviceType , ULONG DeviceCharacteristics , BOOLEAN Exclusive ,
			 PDEVICE_OBJECT *  DeviceObject )
{
  int BLAST_NONDET ;
  switch(BLAST_NONDET)
    {
    case 0:
      * DeviceObject = (void *  )malloc(sizeof(DEVICE_OBJECT ));
      return (NTSTATUS )0x00000000L;
    default :
      return (NTSTATUS )0xC0000001L;
    }
}

NTSTATUS IoCreateSymbolicLink(PUNICODE_STRING SymbolicLinkName ,
			      PUNICODE_STRING DeviceName )
{
  if(TRACER_NONDET>0)
    return (NTSTATUS )0x00000000L;
  else
    return (NTSTATUS )0xC0000001L;
  
}

void IoDeleteDevice(PDEVICE_OBJECT DeviceObject ) { }
void IoDisconnectInterrupt(PKINTERRUPT InterruptObject ){ }

NTSTATUS IoDeleteSymbolicLink(PUNICODE_STRING SymbolicLinkName )
{
  if(TRACER_NONDET>0)
    return (NTSTATUS )0x00000000L;
  else
    return (NTSTATUS )0xC0000001L;
}

void IoDetachDevice(PDEVICE_OBJECT TargetDevice ) { }
void IoFreeIrp(PIRP Irp ) { }
void IoFreeMdl(PMDL Mdl ) { }

PCONFIGURATION_INFORMATION IoGetConfigurationInformation(void  )
{
  return (void *  )malloc(sizeof(CONFIGURATION_INFORMATION ));
}

NTSTATUS IoQueryDeviceDescription(PINTERFACE_TYPE BusType,
				  PULONG BusNumber , PCONFIGURATION_TYPE ControllerType , 
				  PULONG ControllerNumber , PCONFIGURATION_TYPE PeripheralType , 
				  PULONG PeripheralNumber , 
				  PIO_QUERY_DEVICE_ROUTINE CalloutRoutine , 
				  PVOID Context )
{
  if(TRACER_NONDET>0)
    return (NTSTATUS )0x00000000L;
  else
    return (NTSTATUS )0xC0000001L;
}

NTSTATUS IoRegisterDeviceInterface(PDEVICE_OBJECT PhysicalDeviceObject , 
				   GUID *  InterfaceClassGuid , 
				   PUNICODE_STRING ReferenceString ,
				   PUNICODE_STRING SymbolicLinkName )
{
  if(TRACER_NONDET>0)
    return (NTSTATUS )0x00000000L;
  else
    return (NTSTATUS )0xC0000010L;
}

 void IoReleaseCancelSpinLock(KIRQL Irql ) { }

NTSTATUS IoSetDeviceInterfaceState(PUNICODE_STRING SymbolicLinkName ,
				   BOOLEAN Enable )
{
  if(TRACER_NONDET>0)
    return (NTSTATUS )0x00000000L;
  else
    return (NTSTATUS )0xC0000001L;
}

void IoSetHardErrorOrVerifyDevice(PIRP Irp ,
				  PDEVICE_OBJECT DeviceObject ) { }

void stubMoreProcessingRequired()
{
  // TRACER
   _ABORT(s != NP);
  s = MPR1;

  // BLAST
  /*   if(s == NP) */
  /*     s = MPR1; */
  /*   else */
  /*     errorFn(); */
}

 NTSTATUS IofCallDriver(PDEVICE_OBJECT DeviceObject , PIRP Irp )
{
  NTSTATUS returnVal2 ;
  int compRetStatus ;
  PVOID lcontext ;
  if(compRegistered)
    {
      /*
	compRetStatus = (* compFptr)(DeviceObject, Irp, lcontext);
      */
      compRetStatus = SerialSyncCompletion(DeviceObject, Irp, lcontext);
      if(compRetStatus == (NTSTATUS )0xC0000016L)
	stubMoreProcessingRequired();
    }
  switch(TRACER_NONDET)
    {
    case 0:
      returnVal2 = (NTSTATUS )0x00000000L;
      break;
    case 1:
      returnVal2 = (NTSTATUS )0xC0000001L;
      break;
    default :
      returnVal2 = (NTSTATUS )0x00000103L;
      break;
    }
  if(s == NP)
    {
      s = IPC;
      lowerDriverReturn = returnVal2;
    }
  else
    {
      if(s == MPR1)
	{
	  if(returnVal2 == (NTSTATUS )0x00000103L)
	    {
	      s = MPR3;
	      lowerDriverReturn = returnVal2;
	    }
	  else
	    {
	      s = NP;
	      lowerDriverReturn = returnVal2;
	    }
	}
      else
	{
	  // TRACER
	  _ABORT(s != SKIP1);
	  s = SKIP2;
	  lowerDriverReturn = returnVal2;

	  // BLAST
	  /* 	  if(s == SKIP1) */
	  /* 	    { */
	  /* 	      s = SKIP2; */
	  /* 	      lowerDriverReturn = returnVal2; */
	  /* 	    } */
	  /* 	  else */
	  /* 	    errorFn(); */
	}
    }
  return returnVal2;
}

BOOLEAN IoCancelIrp(PIRP Irp ){
  if(TRACER_NONDET>0)
    return (BOOLEAN) 0;
  else
    return (BOOLEAN) 1;
}

void IofCompleteRequest(PIRP Irp , CCHAR PriorityBoost )
{
  // TRACER
  _ABORT(s != NP);
  s = DC;  

  // BLAST
  /*   if(s == NP) */
  /*     s = DC; */
  /*   else */
  /*     errorFn(); */
}

KIRQL KeAcquireSpinLockRaiseToDpc(PKSPIN_LOCK SpinLock ){ 
  KIRQL res;
  return res;
}

 NTSTATUS KeDelayExecutionThread(KPROCESSOR_MODE WaitMode ,
				 BOOLEAN Alertable , PLARGE_INTEGER Interval )
{
  if(TRACER_NONDET>0)
      return (NTSTATUS )0x00000000L;
  else
    return (NTSTATUS )0xC0000001L;
}

 void KeInitializeEvent(PRKEVENT Event , EVENT_TYPE Type ,
			BOOLEAN State )
 {}

 void KeInitializeSemaphore(PRKSEMAPHORE Semaphore , LONG Count , LONG Limit )
{
}

void  KeInitializeSpinLock(PKSPIN_LOCK SpinLock ) { }

/*  LONG KeReleaseSemaphore(PRKSEMAPHORE Semaphore , KPRIORITY Increment , */
/* 			 LONG Adjustment , BOOLEAN Wait ) */
/* { */
/*   LONG r ; */
/*   return r; */
/* } */

void KfReleaseSpinLock(PKSPIN_LOCK SpinLock , KIRQL NewIrql ) {}
LONG KeSetEvent(PRKEVENT Event , KPRIORITY Increment , BOOLEAN Wait )
		
{
  LONG l ;
  setEventCalled = 1;
  return l;
}

NTSTATUS KeWaitForSingleObject(PVOID Object , KWAIT_REASON WaitReason ,
			       KPROCESSOR_MODE WaitMode , BOOLEAN Alertable ,
			       PLARGE_INTEGER Timeout )
 {
   if(s == MPR3 && setEventCalled == 1)
     {
       s = NP;
       setEventCalled = 0;
     }
   else
     {
       if(customIrp == 1)
	 {
	   s = NP;
	   customIrp = 0;
	 }
       else
	 {
	   // TRACER
	   _ABORT(s == MPR3);

	   // BLAST
	   /* if(s == MPR3) */
	   /*  errorFn(); */
	 }
     }
   
   if(TRACER_NONDET>0)
     return (NTSTATUS )0x00000000L;
   else
     return (NTSTATUS )0xC0000001L;
 }

PVOID MmAllocateContiguousMemory(SIZE_T NumberOfBytes ,
				 PHYSICAL_ADDRESS HighestAcceptableAddress )
{
  if(TRACER_NONDET>0)
    return malloc(NumberOfBytes);
  else
    return (void *  )0;
}

void MmFreeContiguousMemory(PVOID BaseAddress ) { }

PVOID MmMapLockedPagesSpecifyCache(PMDL MemoryDescriptorList , 
				    KPROCESSOR_MODE AccessMode , MEMORY_CACHING_TYPE CacheType ,
				    PVOID BaseAddress , ULONG BugCheckOnFailure ,
				    MM_PAGE_PRIORITY Priority )
{
  return (void *  )0;
}

 PVOID MmPageEntireDriver(PVOID AddressWithinSection )
{
  return (void *  )0;
}

void MmResetDriverPaging(PVOID AddressWithinSection ) { }

void MmUnlockPages(PMDL MemoryDescriptorList ) { }

NTSTATUS ObReferenceObjectByHandle(HANDLE Handle ,
				   ACCESS_MASK DesiredAccess , POBJECT_TYPE ObjectType , 
				   KPROCESSOR_MODE AccessMode ,
				   PVOID *  Object , 
				   POBJECT_HANDLE_INFORMATION HandleInformation )
{
  if(TRACER_NONDET>0)
    return (NTSTATUS )0x00000000L;
  else
    return (NTSTATUS )0xC0000001L;
}

void ObfDereferenceObject(PVOID Object ) { }

NTSTATUS PoCallDriver(PDEVICE_OBJECT DeviceObject , PIRP Irp )
{
  int BLAST_NONDET ;
  int compRetStatus ;
  NTSTATUS returnVal ;
  PVOID lcontext ;
  if(compRegistered)
    {
      /*
	compRetStatus = (* compFptr)(DeviceObject, Irp, lcontext);
      */
      compRetStatus = SerialSyncCompletion(DeviceObject, Irp, lcontext);
      if(compRetStatus == (NTSTATUS )0xC0000016L)
	stubMoreProcessingRequired();
    }
  switch(BLAST_NONDET)
    {
    case 0:
      returnVal = (NTSTATUS )0x00000000L;
      break;
    case 1:
      returnVal = (NTSTATUS )0xC0000001L;
      break;
    default :
      returnVal = (NTSTATUS )0x00000103L;
      break;
    }
  if(s == NP)
    {
      s = IPC;
      lowerDriverReturn = returnVal;
    }
  else
    {
      if(s == MPR1)
	{
	  if(returnVal == (NTSTATUS )0x00000103L)
	    {
	      s = MPR3;
	      lowerDriverReturn = returnVal;
	    }
	  else
	    {
	      s = NP;
		  lowerDriverReturn = returnVal;
	    }
	}
      else
	{
	  // TRACER
	  _ABORT(s != SKIP1);
	  s = SKIP2;
	  lowerDriverReturn = returnVal;	  
	  // BLAST
	  /* 	      if(s == SKIP1) */
	  /* 		{ */
	  /* 		  s = SKIP2; */
	  /* 		  lowerDriverReturn = returnVal; */
	  /* 		} */
	  /* 	      else */
	  /* 		errorFn(); */
	}
    }
  return returnVal;
}

 void PoStartNextPowerIrp(PIRP Irp ) { }

 NTSTATUS PsCreateSystemThread(PHANDLE ThreadHandle , ULONG DesiredAccess ,
			       POBJECT_ATTRIBUTES ObjectAttributes , HANDLE ProcessHandle ,
			       PCLIENT_ID ClientId , PKSTART_ROUTINE StartRoutine ,
			       PVOID StartContext )
 {

  if(TRACER_NONDET>0)
    return (NTSTATUS )0x00000000L;
  else
    return (NTSTATUS )0xC0000001L;
 }

 NTSTATUS PsTerminateSystemThread(NTSTATUS ExitStatus )
{
  if(TRACER_NONDET>0)
    return (NTSTATUS )0x00000000L;
  else
    return (NTSTATUS )0xC0000001L;
}

NTSTATUS  RtlAnsiStringToUnicodeString(PUNICODE_STRING DestinationString ,
				       PANSI_STRING SourceString , BOOLEAN AllocateDestinationString )
{
  if(TRACER_NONDET>0)
    return (NTSTATUS )0x00000000L;
  else
    return (NTSTATUS )0xC0000001L;

}

 SIZE_T  RtlCompareMemory(void *  Source1 ,
			  void *  Source2 , SIZE_T Length )
 {
  SIZE_T r ;
  return r;
}

void  RtlCopyUnicodeString(PUNICODE_STRING DestinationString ,
			   PUNICODE_STRING SourceString )
{ }

NTSTATUS  RtlDeleteRegistryValue(ULONG RelativeTo,
				 PCWSTR Path , PCWSTR ValueName )
{
  if(TRACER_NONDET>0)
    return (NTSTATUS )0x00000000L;
  else
    return (NTSTATUS )0xC0000001L;
}

void RtlFreeUnicodeString(PUNICODE_STRING UnicodeString ) { }
	

void  RtlInitString(PSTRING DestinationString , PCSZ SourceString ) { }

void  RtlInitUnicodeString(PUNICODE_STRING DestinationString ,
			   PCWSTR SourceString ) { }

NTSTATUS  RtlQueryRegistryValues(ULONG RelativeTo ,
				 PCWSTR Path , PRTL_QUERY_REGISTRY_TABLE QueryTable , 
				 PVOID Context ,
				 PVOID Environment )
{
  if(TRACER_NONDET>0)
    return (NTSTATUS )0x00000000L;
  else
    return (NTSTATUS )0xC0000001L;
}

NTSTATUS  ZwClose(HANDLE Handle )
{
  if(TRACER_NONDET>0)
    return (NTSTATUS )0x00000000L;
  else
    return (NTSTATUS )0xC0000001L;
}


BOOLEAN HalTranslateBusAddress(INTERFACE_TYPE InterfaceType ,
			       ULONG BusNumber , PHYSICAL_ADDRESS BusAddress , 
			       PULONG AddressSpace ,
			       PPHYSICAL_ADDRESS TranslatedAddress ){

  if(TRACER_NONDET>0)
    return (NTSTATUS )0x00000000L;
  else
    return (NTSTATUS )0xC0000001L;

}

ULONG HalGetInterruptVector(INTERFACE_TYPE InterfaceType ,
			    ULONG BusNumber , ULONG BusInterruptLevel , 
			    ULONG BusInterruptVector ,
			    PKIRQL Irql , PKAFFINITY Affinity ){
  ULONG res;
  return res;
}
