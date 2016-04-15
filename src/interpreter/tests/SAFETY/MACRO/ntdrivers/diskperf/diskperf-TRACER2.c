// SAFE

/* 
  Search for TRACER keyword to see all changes done to the original
  BLAST version.
*/

/* BEGIN Types */
typedef enum _EXCEPTION_DISPOSITION {
	ExceptionContinueExecution,
	ExceptionContinueSearch,
	ExceptionNestedException,
	ExceptionCollidedUnwind
} EXCEPTION_DISPOSITION ;
struct _EXCEPTION_RECORD ;
struct _CONTEXT ;

EXCEPTION_DISPOSITION _except_handler(struct _EXCEPTION_RECORD * 
				      ExceptionRecord , void *  EstablisherFrame , struct _CONTEXT * 
				      ContextRecord , void *  DispatcherContext ) ;
typedef unsigned short wchar_t ;
typedef wchar_t wint_t ;
typedef wchar_t wctype_t ;
typedef unsigned long POINTER_64_INT ;
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
typedef /* __int64 */ int LONG64 , *  PLONG64 ;
typedef /*__int64*/ int INT64 , *  PINT64 ;
typedef unsigned /*__int64*/ int ULONG64 , *  PULONG64 ;
typedef unsigned /*__int64*/ int DWORD64 , *  PDWORD64 ;
typedef unsigned /*__int64*/ int UINT64 , *  PUINT64 ;

// #line 217 "C:/NTDDK/inc/ntdef.h"
typedef void *  PVOID ;
typedef void *  PVOID64 ;

// #line 266
typedef char CHAR ;

// #line 267
typedef short SHORT ;

// #line 268
typedef long LONG ;

// #line 276
typedef wchar_t WCHAR ;

// #line 282
typedef WCHAR *  PWCHAR ;

// #line 283
typedef WCHAR *  LPWCH , *  PWCH ;

// #line 284
typedef const WCHAR *  LPCWCH , *  PCWCH ;

// #line 285
typedef WCHAR *  NWPSTR ;

// #line 286
typedef WCHAR *  LPWSTR , *  PWSTR ;

typedef const WCHAR *  LPCWSTR , *  PCWSTR ;

// #line 293
typedef CHAR *  PCHAR ;

// #line 294
typedef CHAR *  LPCH , *  PCH ;

typedef const CHAR *  LPCCH , *  PCCH ;

// #line 297
typedef CHAR *  NPSTR ;

// #line 298
typedef CHAR *  LPSTR , *  PSTR ;

// #line 299
typedef const CHAR *  LPCSTR , *  PCSTR ;

// #line 321
typedef char TCHAR , *  PTCHAR ;

// #line 322
typedef unsigned char TUCHAR , *  PTUCHAR ;

// #line 326
typedef LPSTR LPTCH , PTCH ;

// #line 327
typedef LPSTR PTSTR , LPTSTR ;

// #line 328
typedef LPCSTR PCTSTR , LPCTSTR ;

// #line 337
typedef double DOUBLE ;

typedef struct _QUAD {
	double DoNotUseThisField ;
} QUAD ;

// #line 349
typedef SHORT *  PSHORT ;

// #line 350
typedef LONG *  PLONG ;

// #line 351
typedef QUAD *  PQUAD ;

// #line 360
typedef unsigned char UCHAR ;

// #line 361
typedef unsigned short USHORT ;

// #line 362
typedef unsigned long ULONG ;

// #line 363
typedef QUAD UQUAD ;

// #line 369
typedef UCHAR *  PUCHAR ;

// #line 370
typedef USHORT *  PUSHORT ;

// #line 371
typedef ULONG *  PULONG ;

// #line 372
typedef UQUAD *  PUQUAD ;

// #line 378
typedef signed char SCHAR ;

// #line 379
typedef SCHAR *  PSCHAR ;

// #line 394
typedef void *  HANDLE ;

// #line 400
typedef HANDLE *  PHANDLE ;

// #line 406
typedef UCHAR FCHAR ;

// #line 407
typedef USHORT FSHORT ;

// #line 408
typedef ULONG FLONG ;

// #line 414
typedef LONG HRESULT ;

// #line 478
typedef char CCHAR ;

// #line 479
typedef short CSHORT ;

// #line 480
typedef ULONG CLONG ;

typedef CCHAR *  PCCHAR ;

// #line 483
typedef CSHORT *  PCSHORT ;

// #line 484
typedef CLONG *  PCLONG ;

// #line 492
typedef ULONG LCID ;

// #line 493
typedef PULONG PLCID ;

// #line 494
typedef USHORT LANGID ;

// #line 500
typedef ULONG LOGICAL ;

// #line 501
typedef ULONG *  PLOGICAL ;

// #line 508
typedef LONG NTSTATUS ;

typedef NTSTATUS *  PNTSTATUS ;

// #line 602
typedef struct _FLOAT128 {
	/*__int64*/ LONG LowPart ;
	/*__int64*/ LONG HighPart ;
} FLOAT128 ;

typedef FLOAT128 *  PFLOAT128 ;

// #line 621
typedef /*__int64*/ int LONGLONG ;
typedef unsigned /*__int64*/ int ULONGLONG ;
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
typedef LARGE_INTEGER PHYSICAL_ADDRESS , *  PPHYSICAL_ADDRESS ;
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

// #line 1094
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
// #line 54
typedef unsigned int size_t ;

void * memcpy(void *  p, void * s , size_t t){
  void * x; 
  return x;
}
void * memset(void *  p, int  s, size_t t){
  void * x; 
  return x;
}

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
			      struct _CONTEXT *  ContextRecord , PVOID DispatcherContext ) ;
// #line 1306
typedef UCHAR KIRQL ;
typedef KIRQL *  PKIRQL ;
// #line 1316
typedef enum _NT_PRODUCT_TYPE {
	NtProductWinNt /* = 1 */,
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
/* extern */ PCCHAR KeNumberProcessors ;
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

typedef void ( *  PKNORMAL_ROUTINE )(PVOID NormalContext , PVOID SystemArgument1
	, PVOID SystemArgument2 ) ;

// #line 232
typedef void ( *  PKKERNEL_ROUTINE )(struct _KAPC *  Apc , PKNORMAL_ROUTINE * 
	NormalRoutine , PVOID *  NormalContext , PVOID *  SystemArgument1 ,
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
typedef NTSTATUS (/*__stdcall*/ *  PRTL_QUERY_REGISTRY_ROUTINE )(PWSTR ValueName ,
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

// #line 1136
// #line 1147
// #line 1159
// #line 1170
// #line 1178
// #line 1202
// #line 1211
// #line 1220
// #line 1235
// #line 1261
/* extern BOOLEAN ( *  NlsMbCodePageTag ) ; */
/* extern BOOLEAN ( *  NlsMbOemCodePageTag ) ; */
// #line 1264
// #line 1272
// #line 1280
// #line 1289
// #line 1297
// #line 1304
// #line 1313
// #line 1323
// #line 1335
// #line 1345
// #line 1355
// #line 1364
// #line 1375
// #line 1384
// #line 1394
// #line 1402
// #line 1410
// #line 1420
// #line 1429
// #line 1436
// #line 1444
// #line 1494
// #line 1502
// #line 1516
// #line 1641
// #line 1649
// #line 1690
// #line 1699
// #line 1718
// #line 1736
// #line 1754
// #line 1772
// #line 1796
// #line 1813
// #line 1833
// #line 1846
// #line 1860
// #line 1874

// #line 1952

// #line 1960
// #line 1973
// #line 1986
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
// #line 2239
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
// #line 2549
// #line 2558
// #line 2578
// #line 2587
// #line 2601
// #line 2610
// #line 2627
typedef struct _RTL_BITMAP_RUN {
	ULONG StartingIndex ;
	ULONG NumberOfBits ;
} RTL_BITMAP_RUN ;

// #line 2633
typedef RTL_BITMAP_RUN *  PRTL_BITMAP_RUN ;

// #line 2652
// #line 2667
// #line 2699
// #line 2706
// #line 2718
// #line 2727
// #line 2736
// #line 2745
// #line 2760
// #line 2767

// #line 2796
// #line 2826
// #line 2837
// #line 2846
// #line 2854
// #line 2861
// #line 2871
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
typedef void (/*__stdcall*/ *  PIO_APC_ROUTINE )(PVOID ApcContext , PIO_STATUS_BLOCK
	IoStatusBlock , ULONG Reserved ) ;

// #line 3685
typedef enum _FILE_INFORMATION_CLASS {
	FileDirectoryInformation /* = 1 */,
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
	FileFsVolumeInformation /* = 1 */,
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
	InterfaceTypeUndefined /* = - 1 */,
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
	ConfigurationSpaceUndefined /* = - 1 */,
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
	ViewShare /* = 1 */,
	ViewUnmap /* = 2 */
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
// #line 4587
typedef enum _SYSTEM_POWER_STATE {
	PowerSystemUnspecified /* = 0 */,
	PowerSystemWorking,
	PowerSystemSleeping1,
	PowerSystemSleeping2,
	PowerSystemSleeping3,
	PowerSystemHibernate,
	PowerSystemShutdown,
	PowerSystemMaximum
} SYSTEM_POWER_STATE , *  PSYSTEM_POWER_STATE ;

typedef enum  {
	PowerActionNone /* = 0 */,
	PowerActionReserved,
	PowerActionSleep,
	PowerActionHibernate,
	PowerActionShutdown,
	PowerActionShutdownReset,
	PowerActionShutdownOff,
	PowerActionWarmEject
} POWER_ACTION , *  PPOWER_ACTION ;

typedef enum _DEVICE_POWER_STATE {
	PowerDeviceUnspecified /* = 0 */,
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
	SystemPowerState /* = 0 */,
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
		ULONG OtherInfo /*  : 25 */;
		ULONG Damage /*  : 1 */;
		ULONG AddressValid /*  : 1 */;
		ULONG MiscValid /*  : 1 */;
		ULONG Enabled /*  : 1 */;
		ULONG UnCorrected /*  : 1 */;
		ULONG OverFlow /*  : 1 */;
		ULONG Valid  /* : 1 */;
	} MciStats ;
	ULONGLONG QuadPart ;
} MCI_STATS , *  PMCI_STATS ;

// #line 4768
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
extern PVOID *  MmHighestUserAddress ;
extern PVOID *  MmSystemRangeStart ;
extern ULONG *  MmUserProbeAddress ;

// #line 5153
typedef enum _INTERLOCKED_RESULT {
	ResultNegative /* = 0x8000 & ~ 0x4000 & (0x8000 | 0x4000) */,
	ResultZero /* = ~ 0x8000 & 0x4000 & (0x8000 | 0x4000) */,
	ResultPositive /* = ~ 0x8000 & ~ 0x4000 & (0x8000 | 0x4000) */
} INTERLOCKED_RESULT ;

// #line 5252
// #line 5262
// #line 5271
// #line 5280
// #line 6994
typedef struct _KSYSTEM_TIME {
	ULONG LowPart ;
	LONG High1Time ;
	LONG High2Time ;
} KSYSTEM_TIME , *  PKSYSTEM_TIME ;

// #line 7014
// #line 7019
// #line 7020
// #line 7024
// #line 7085
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
	volatile ULONG TimeSlip ;
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
	Win32ServiceShareProcess/*  = 0x00000020 */,
	AdapterType /* = 0x00000004 */,
	RecognizerType /* = 0x00000008 */
} SERVICE_NODE_TYPE ;

typedef enum _CM_SERVICE_LOAD_TYPE {
	BootLoad/*  = 0x00000000 */,
	SystemLoad /* = 0x00000001 */,
	AutoLoad /* = 0x00000002 */,
	DemandLoad /* = 0x00000003 */,
	DisableLoad /* = 0x00000004 */
} SERVICE_LOAD_TYPE ;

typedef enum _CM_ERROR_CONTROL_TYPE {
	IgnoreError /* = 0x00000000 */,
	NormalError /* = 0x00000001 */,
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

// #line 27 "C:/NTDDK/inc/poppack.h"
// #line 8419 "C:/NTDDK/inc/ddk/ntddk.h"
typedef struct _CM_PARTIAL_RESOURCE_LIST {
	USHORT Version ;
	USHORT Revision ;
	ULONG Count ;
	CM_PARTIAL_RESOURCE_DESCRIPTOR PartialDescriptors[1] ;
} CM_PARTIAL_RESOURCE_LIST , *  PCM_PARTIAL_RESOURCE_LIST ;

// #line 8443
typedef struct _CM_FULL_RESOURCE_DESCRIPTOR {
	INTERFACE_TYPE InterfaceType ;
	ULONG BusNumber ;
	CM_PARTIAL_RESOURCE_LIST PartialResourceList ;
} CM_FULL_RESOURCE_DESCRIPTOR , *  PCM_FULL_RESOURCE_DESCRIPTOR ;

// #line 8454
typedef struct _CM_RESOURCE_LIST {
	ULONG Count ;
	CM_FULL_RESOURCE_DESCRIPTOR List[1] ;
} CM_RESOURCE_LIST , *  PCM_RESOURCE_LIST ;

// #line 8471
typedef struct _DEVICE_FLAGS {
	ULONG Failed /*  : 1 */;
	ULONG ReadOnly /*  : 1 */;
	ULONG Removable /*  : 1 */;
	ULONG ConsoleIn /*  : 1 */;
	ULONG ConsoleOut /*  : 1 */;
	ULONG Input /*  : 1 */;
	ULONG Output /*  : 1 */;
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

// #line 24 "C:/NTDDK/inc/pshpack1.h"
// #line 8518 "C:/NTDDK/inc/ddk/ntddk.h"
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
	UCHAR ReadWrite /*  : 1 */;
	UCHAR Cached /*  : 1 */;
	UCHAR Reserved0 /*  : 1 */;
	UCHAR Type /*  : 2 */;
	UCHAR Shared /*  : 1 */;
	UCHAR Reserved1 /*  : 1 */;
	UCHAR MoreEntries /*  : 1 */;
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
	UCHAR Interrupt /*  : 4 */;
	UCHAR Reserved /*  : 1 */;
	UCHAR LevelTriggered /*  : 1 */;
	UCHAR Shared /*  : 1 */;
	UCHAR MoreEntries /*  : 1 */;
} EISA_IRQ_DESCRIPTOR , *  PEISA_IRQ_DESCRIPTOR ;

typedef struct _EISA_IRQ_CONFIGURATION {
	EISA_IRQ_DESCRIPTOR ConfigurationByte ;
	UCHAR Reserved ;
} EISA_IRQ_CONFIGURATION , *  PEISA_IRQ_CONFIGURATION ;

// #line 8585
typedef struct _DMA_CONFIGURATION_BYTE0 {
	UCHAR Channel /*  : 3 */;
	UCHAR Reserved  /* : 3 */;
	UCHAR Shared  /* : 1 */;
	UCHAR MoreEntries /*  : 1 */;
} DMA_CONFIGURATION_BYTE0 ;

typedef struct _DMA_CONFIGURATION_BYTE1 {
	UCHAR Reserved0  /* : 2 */;
	UCHAR TransferSize /*  : 2 */;
	UCHAR Timing /*  : 2 */;
	UCHAR Reserved1 /*  : 2 */;
} DMA_CONFIGURATION_BYTE1 ;

typedef struct _EISA_DMA_CONFIGURATION {
	DMA_CONFIGURATION_BYTE0 ConfigurationByte0 ;
	DMA_CONFIGURATION_BYTE1 ConfigurationByte1 ;
} EISA_DMA_CONFIGURATION , *  PEISA_DMA_CONFIGURATION ;

// #line 8609
typedef struct _EISA_PORT_DESCRIPTOR {
	UCHAR NumberPorts /*  : 5 */;
	UCHAR Reserved /*  : 1 */;
	UCHAR Shared /*  : 1 */;
	UCHAR MoreEntries /*  : 1 */;
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

// #line 9316
// #line 9324
// #line 9365
// #line 9415
////////////////////////////////////////////////////////////////
// Prototypes
////////////////////////////////////////////////////////////////
void KeInitializeEvent(PRKEVENT Event , EVENT_TYPE Type ,BOOLEAN State );
LONG KeSetEvent(PRKEVENT Event , KPRIORITY Increment ,BOOLEAN Wait ) ;
NTSTATUS KeWaitForSingleObject(PVOID Object , KWAIT_REASON WaitReason ,
			       KPROCESSOR_MODE WaitMode , BOOLEAN Alertable ,
			       PLARGE_INTEGER Timeout ) ;
LONG InterlockedIncrement(PLONG Addend ) ;
LONG InterlockedDecrement(PLONG Addend ) ;
LONG InterlockedExchange(PLONG Target , LONG Value ) ;
LARGE_INTEGER KeQueryPerformanceCounter(PLARGE_INTEGER PerformanceFrequency );
					
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

// #line 10051
// extern volatile KSYSTEM_TIME KeTickCount ;

typedef enum _MEMORY_CACHING_TYPE_ORIG {
	MmFrameBufferCached /* = 2 */
} MEMORY_CACHING_TYPE_ORIG ;

typedef enum _MEMORY_CACHING_TYPE {
	MmNonCached /* = 0 */,
	MmCached /* = 1 */,
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

// #line 10159
/////////////////////////////////////////////////////////////////////////
// Prototypes
/////////////////////////////////////////////////////////////////////////
PVOID ExAllocatePoolWithTag(POOL_TYPE PoolType , SIZE_T NumberOfBytes , ULONG Tag ) ;       
void  ExFreePool(PVOID P ) ;

// #line 10195
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

// #line 10208
// #line 10236


// #line 10247
typedef struct _FAST_MUTEX {
	LONG Count ;
	PKTHREAD Owner ;
	ULONG Contention ;
	KEVENT Event ;
	ULONG OldIrql ;
} FAST_MUTEX , *  PFAST_MUTEX ;

// #line 10272
// #line 10574
typedef PVOID ( *  PALLOCATE_FUNCTION )(POOL_TYPE PoolType , SIZE_T NumberOfBytes , 
					ULONG Tag ) ;
	

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
// #line 10729
typedef struct _PAGED_LOOKASIDE_LIST {
	GENERAL_LOOKASIDE L ;
	FAST_MUTEX Lock ;
} PAGED_LOOKASIDE_LIST , *  PPAGED_LOOKASIDE_LIST ;

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

// #line 10939
// #line 11156
typedef ULONG_PTR ERESOURCE_THREAD ;

// #line 11157
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

// #line 11222
// #line 11429
typedef void ( *  PCALLBACK_FUNCTION )(PVOID CallbackContext , PVOID Argument1 , PVOID Argument2 ) ;	
typedef GUID UUID ;
// #line 11596
extern PBOOLEAN Mm64BitPhysicalAddress ;

// #line 11862
typedef enum _MM_SYSTEM_SIZE {
	MmSmallSystem,
	MmMediumSystem,
	MmLargeSystem
} MM_SYSTEMSIZE ;

// #line 11876
// #line 11884
typedef enum _LOCK_OPERATION {
	IoReadAccess,
	IoWriteAccess,
	IoModifyAccess
} LOCK_OPERATION ;

// #line 11891
// #line 11970
typedef enum _MM_PAGE_PRIORITY {
	LowPagePriority,
	NormalPagePriority /* = 16 */,
	HighPagePriority/*  = 32 */
} MM_PAGE_PRIORITY ;

// #line 11979
// #line 12385
typedef NTSTATUS ( *  PMM_DLL_INITIALIZE )(PUNICODE_STRING RegistryPath ) ;
// #line 12389
typedef NTSTATUS ( *  PMM_DLL_UNLOAD )(void  ) ;
// #line 12399
struct _DRIVER_OBJECT ;
// #line 12411
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
// #line 12552
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
			ULONG ImageAddressingMode  /* : 8 */;
			ULONG SystemModeImage  /* : 1 */;
			ULONG ImageMappedToAllPids /*  : 1 */;
			ULONG Reserved  /* : 22 */;
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
// #line 12633
// #line 12639
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
	IoQueryDeviceIdentifier/*  = 0 */,
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
	/* TRACER */ int /* struct _COMPRESSED_DATA_INFO */ *  CompressedDataInfo , ULONG
	CompressedDataInfoLength , struct _DEVICE_OBJECT *  DeviceObject ) ;

// #line 13304
typedef BOOLEAN ( *  PFAST_IO_WRITE_COMPRESSED )(struct _FILE_OBJECT * 
	FileObject , PLARGE_INTEGER FileOffset , ULONG Length , ULONG LockKey ,
	PVOID Buffer , PMDL *  MdlChain , PIO_STATUS_BLOCK IoStatus ,
	/* TRACER */ int /* struct _COMPRESSED_DATA_INFO */ *  CompressedDataInfo , ULONG
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
	KeepObject /* = 1 */,
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
	PDRIVER_DISPATCH MajorFunction[28/* 0x1b + 1 */] ;
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
	ULONG DeviceD1 /*  : 1 */;
	ULONG DeviceD2  /* : 1 */;
	ULONG LockSupported /*  : 1 */;
	ULONG EjectSupported  /* : 1 */;
	ULONG Removable  /* : 1 */;
	ULONG DockDevice /*  : 1 */;
	ULONG UniqueID /*  : 1 */;
	ULONG SilentInstall /*  : 1 */;
	ULONG RawDeviceOK  /* : 1 */;
	ULONG SurpriseRemovalOK /*  : 1 */;
	ULONG WakeFromD0 /*  : 1 */;
	ULONG WakeFromD1 /*  : 1 */;
	ULONG WakeFromD2 /*  : 1 */;
	ULONG WakeFromD3 /*  : 1 */;
	ULONG HardwareDisabled /*  : 1 */;
	ULONG NonDynamic /*  : 1 */;
	ULONG WarmEjectSupported /*  : 1 */;
	ULONG Reserved /*  : 15 */;
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
	BusQueryDeviceID /* = 0 */,
	BusQueryHardwareIDs /* = 1 */,
	BusQueryCompatibleIDs /* = 2 */,
	BusQueryInstanceID /* = 3 */,
	BusQueryDeviceSerialNumber/*  = 4 */
} BUS_QUERY_ID_TYPE , *  PBUS_QUERY_ID_TYPE ;

typedef ULONG PNP_DEVICE_STATE , *  PPNP_DEVICE_STATE ;

// #line 14252
typedef enum  {
	DeviceTextDescription /* = 0 */,
	DeviceTextLocationInformation/*  = 1 */
} DEVICE_TEXT_TYPE , *  PDEVICE_TEXT_TYPE ;

// #line 24 "C:/NTDDK/inc/pshpack4.h"
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

// #line 14681
// #line 14688
// #line 14698
// #line 14709
// #line 14720
/////////////////////////////////////////////////////////////////////
// Prototypes
/////////////////////////////////////////////////////////////////////
PVOID IoAllocateErrorLogEntry(PVOID IoObject , UCHAR EntrySize ) ;	
PDEVICE_OBJECT IoAttachDeviceToDeviceStack(PDEVICE_OBJECT SourceDevice , 
					   PDEVICE_OBJECT TargetDevice ) ;	
PIRP IoBuildDeviceIoControlRequest(ULONG IoControlCode ,
	PDEVICE_OBJECT DeviceObject , PVOID InputBuffer , ULONG
	InputBufferLength , PVOID OutputBuffer , ULONG OutputBufferLength ,
	BOOLEAN InternalDeviceIoControl , PKEVENT Event , PIO_STATUS_BLOCK
	IoStatusBlock ) ;
NTSTATUS IofCallDriver(PDEVICE_OBJECT DeviceObject , PIRP Irp ) ;
void IofCompleteRequest(PIRP Irp , CCHAR PriorityBoost ) ;	    
NTSTATUS IoCreateDevice(PDRIVER_OBJECT DriverObject ,
 	ULONG DeviceExtensionSize , PUNICODE_STRING DeviceName , ULONG
	DeviceType , ULONG DeviceCharacteristics , BOOLEAN Exclusive ,
	PDEVICE_OBJECT *  DeviceObject ) ;
void IoDeleteDevice(PDEVICE_OBJECT DeviceObject ) ;
void IoDetachDevice(PDEVICE_OBJECT TargetDevice ) ;
void IoWriteErrorLogEntry(PVOID ElEntry ) ;
NTSTATUS IoWMIRegistrationControl(PDEVICE_OBJECT DeviceObject , ULONG Action ) ;	

// #line 18245
// #line 18256
// #line 18263
// #line 18271
NTSTATUS PoCallDriver(PDEVICE_OBJECT DeviceObject , PIRP Irp ) ;	
// #line 18278
void PoStartNextPowerIrp(PIRP Irp ) ;
// #line 18285
// #line 18311
// #line 18321
// #line 18342
// #line 18350
// #line 18359
// #line 18366
// #line 18373
// #line 18402
// #line 19066
//extern POBJECT_TYPE *  IoFileObjectType ;
//extern POBJECT_TYPE *  ExEventObjectType ;
//extern POBJECT_TYPE *  ExSemaphoreObjectType ;
// #line 19074
// #line 22 "C:/NTDDK/inc/ntdddisk.h"

// #line 44 "C:/NTDDK/inc/ntddstor.h"
// #line 45
// #line 46
// #line 47
// #line 48
// #line 49
// #line 50
// #line 51
// #line 52
// #line 53

// #line 128
typedef struct _STORAGE_DEVICE_NUMBER {
	ULONG DeviceType ;
	ULONG DeviceNumber ;
	ULONG PartitionNumber ;
} STORAGE_DEVICE_NUMBER , *  PSTORAGE_DEVICE_NUMBER ;

// #line 154
typedef struct _STORAGE_BUS_RESET_REQUEST {
	UCHAR PathId ;
} STORAGE_BUS_RESET_REQUEST , *  PSTORAGE_BUS_RESET_REQUEST ;

// #line 168
typedef struct _PREVENT_MEDIA_REMOVAL {
	BOOLEAN PreventMediaRemoval ;
} PREVENT_MEDIA_REMOVAL , *  PPREVENT_MEDIA_REMOVAL ;

// #line 175
typedef struct _TAPE_STATISTICS {
	ULONG Version ;
	ULONG Flags ;
	LARGE_INTEGER RecoveredWrites ;
	LARGE_INTEGER UnrecoveredWrites ;
	LARGE_INTEGER RecoveredReads ;
	LARGE_INTEGER UnrecoveredReads ;
	UCHAR CompressionRatioReads ;
	UCHAR CompressionRatioWrites ;
} TAPE_STATISTICS , *  PTAPE_STATISTICS ;

// #line 193
typedef struct _TAPE_GET_STATISTICS {
	ULONG Operation ;
} TAPE_GET_STATISTICS , *  PTAPE_GET_STATISTICS ;

// #line 206
typedef enum _STORAGE_MEDIA_TYPE {
	DDS_4mm /* = 0x20 */,
	MiniQic,
	Travan,
	QIC,
	MP_8mm,
	AME_8mm,
	AIT1_8mm,
	DLT,
	NCTP,
	IBM_3480,
	IBM_3490E,
	IBM_Magstar_3590,
	IBM_Magstar_MP,
	STK_DATA_D3,
	SONY_DTF,
	DV_6mm,
	DMI,
	SONY_D2,
	CLEANER_CARTRIDGE,
	CD_ROM,
	CD_R,
	CD_RW,
	DVD_ROM,
	DVD_R,
	DVD_RW,
	MO_3_RW,
	MO_5_WO,
	MO_5_RW,
	MO_5_LIMDOW,
	PC_5_WO,
	PC_5_RW,
	PD_5_RW,
	ABL_5_WO,
	PINNACLE_APEX_5_RW,
	SONY_12_WO,
	PHILIPS_12_WO,
	HITACHI_12_WO,
	CYGNET_12_WO,
	KODAK_14_WO,
	MO_NFR_525,
	NIKON_12_RW,
	IOMEGA_ZIP,
	IOMEGA_JAZ,
	SYQUEST_EZ135,
	SYQUEST_EZFLYER,
	SYQUEST_SYJET,
	AVATAR_F2,
	MP2_8mm,
	DST_S,
	DST_M,
	DST_L,
	VXATape_1,
	VXATape_2,
	STK_EAGLE,
	LTO_Ultrium,
	LTO_Accelis
} STORAGE_MEDIA_TYPE , *  PSTORAGE_MEDIA_TYPE ;

// #line 306
typedef enum _STORAGE_BUS_TYPE {
	BusTypeUnknown /* = 0x00 */,
	BusTypeScsi,
	BusTypeAtapi,
	BusTypeAta,
	BusType1394,
	BusTypeSsa,
	BusTypeFibre,
	BusTypeUsb,
	BusTypeRAID,
	BusTypeMaxReserved /* = 0x7F */
} STORAGE_BUS_TYPE , *  PSTORAGE_BUS_TYPE ;

typedef struct _DEVICE_MEDIA_INFO {
	union  {
		struct  {
			LARGE_INTEGER Cylinders ;
			STORAGE_MEDIA_TYPE MediaType ;
			ULONG TracksPerCylinder ;
			ULONG SectorsPerTrack ;
			ULONG BytesPerSector ;
			ULONG NumberMediaSides ;
			ULONG MediaCharacteristics ;
		} DiskInfo ;
		struct  {
			LARGE_INTEGER Cylinders ;
			STORAGE_MEDIA_TYPE MediaType ;
			ULONG TracksPerCylinder ;
			ULONG SectorsPerTrack ;
			ULONG BytesPerSector ;
			ULONG NumberMediaSides ;
			ULONG MediaCharacteristics ;
		} RemovableDiskInfo ;
		struct  {
			STORAGE_MEDIA_TYPE MediaType ;
			ULONG MediaCharacteristics ;
			ULONG CurrentBlockSize ;
			STORAGE_BUS_TYPE BusType ;
			union  {
				struct  {
					UCHAR MediumType ;
					UCHAR DensityCode ;
				} ScsiInformation ;
			} BusSpecificData ;
		} TapeInfo ;
	} DeviceSpecific ;
} DEVICE_MEDIA_INFO , *  PDEVICE_MEDIA_INFO ;

// #line 362
typedef struct _GET_MEDIA_TYPES {
	ULONG DeviceType ;
	ULONG MediaInfoCount ;
	DEVICE_MEDIA_INFO MediaInfo[1] ;
} GET_MEDIA_TYPES , *  PGET_MEDIA_TYPES ;

// #line 381
typedef struct _STORAGE_PREDICT_FAILURE {
	ULONG PredictFailure ;
	UCHAR VendorSpecific[512] ;
} STORAGE_PREDICT_FAILURE , *  PSTORAGE_PREDICT_FAILURE ;

// #line 414
typedef enum _STORAGE_QUERY_TYPE {
	PropertyStandardQuery /* = 0 */,
	PropertyExistsQuery,
	PropertyMaskQuery,
	PropertyQueryMaxDefined
} STORAGE_QUERY_TYPE , *  PSTORAGE_QUERY_TYPE ;

// #line 425
typedef enum _STORAGE_PROPERTY_ID {
	StorageDeviceProperty/*  = 0 */,
	StorageAdapterProperty
} STORAGE_PROPERTY_ID , *  PSTORAGE_PROPERTY_ID ;

// #line 435
typedef struct _STORAGE_PROPERTY_QUERY {
	STORAGE_PROPERTY_ID PropertyId ;
	STORAGE_QUERY_TYPE QueryType ;
	UCHAR AdditionalParameters[1] ;
} STORAGE_PROPERTY_QUERY , *  PSTORAGE_PROPERTY_QUERY ;

// #line 462
typedef struct _STORAGE_DESCRIPTOR_HEADER {
	ULONG Version ;
	ULONG Size ;
} STORAGE_DESCRIPTOR_HEADER , *  PSTORAGE_DESCRIPTOR_HEADER ;

// #line 478
typedef struct _STORAGE_DEVICE_DESCRIPTOR {
	ULONG Version ;
	ULONG Size ;
	UCHAR DeviceType ;
	UCHAR DeviceTypeModifier ;
	BOOLEAN RemovableMedia ;
	BOOLEAN CommandQueueing ;
	ULONG VendorIdOffset ;
	ULONG ProductIdOffset ;
	ULONG ProductRevisionOffset ;
	ULONG SerialNumberOffset ;
	STORAGE_BUS_TYPE BusType ;
	ULONG RawPropertiesLength ;
	UCHAR RawDeviceProperties[1] ;
} STORAGE_DEVICE_DESCRIPTOR , *  PSTORAGE_DEVICE_DESCRIPTOR ;

// #line 581
typedef struct _STORAGE_ADAPTER_DESCRIPTOR {
	ULONG Version ;
	ULONG Size ;
	ULONG MaximumTransferLength ;
	ULONG MaximumPhysicalPages ;
	ULONG AlignmentMask ;
	BOOLEAN AdapterUsesPio ;
	BOOLEAN AdapterScansDown ;
	BOOLEAN CommandQueueing ;
	BOOLEAN AcceleratedTransfer ;
	BOOLEAN BusType ;
	USHORT BusMajorVersion ;
	USHORT BusMinorVersion ;
} STORAGE_ADAPTER_DESCRIPTOR , *  PSTORAGE_ADAPTER_DESCRIPTOR ;

// #line 248 "C:/NTDDK/inc/ntdddisk.h"
typedef enum _MEDIA_TYPE {
	Unknown,
	F5_1Pt2_512,
	F3_1Pt44_512,
	F3_2Pt88_512,
	F3_20Pt8_512,
	F3_720_512,
	F5_360_512,
	F5_320_512,
	F5_320_1024,
	F5_180_512,
	F5_160_512,
	RemovableMedia,
	FixedMedia,
	F3_120M_512,
	F3_640_512,
	F5_640_512,
	F5_720_512,
	F3_1Pt2_512,
	F3_1Pt23_1024,
	F5_1Pt23_1024,
	F3_128Mb_512,
	F3_230Mb_512,
	F8_256_128
} MEDIA_TYPE , *  PMEDIA_TYPE ;

// #line 279
typedef struct _FORMAT_PARAMETERS {
	MEDIA_TYPE MediaType ;
	ULONG StartCylinderNumber ;
	ULONG EndCylinderNumber ;
	ULONG StartHeadNumber ;
	ULONG EndHeadNumber ;
} FORMAT_PARAMETERS , *  PFORMAT_PARAMETERS ;

// #line 294
typedef USHORT BAD_TRACK_NUMBER ;

// #line 295
typedef USHORT *  PBAD_TRACK_NUMBER ;

// #line 302
typedef struct _FORMAT_EX_PARAMETERS {
	MEDIA_TYPE MediaType ;
	ULONG StartCylinderNumber ;
	ULONG EndCylinderNumber ;
	ULONG StartHeadNumber ;
	ULONG EndHeadNumber ;
	USHORT FormatGapLength ;
	USHORT SectorsPerTrack ;
	USHORT SectorNumber[1] ;
} FORMAT_EX_PARAMETERS , *  PFORMAT_EX_PARAMETERS ;

// #line 319
typedef struct _DISK_GEOMETRY {
	LARGE_INTEGER Cylinders ;
	MEDIA_TYPE MediaType ;
	ULONG TracksPerCylinder ;
	ULONG SectorsPerTrack ;
	ULONG BytesPerSector ;
} DISK_GEOMETRY , *  PDISK_GEOMETRY ;

// #line 341
typedef struct _PARTITION_INFORMATION {
	LARGE_INTEGER StartingOffset ;
	LARGE_INTEGER PartitionLength ;
	ULONG HiddenSectors ;
	ULONG PartitionNumber ;
	UCHAR PartitionType ;
	BOOLEAN BootIndicator ;
	BOOLEAN RecognizedPartition ;
	BOOLEAN RewritePartition ;
} PARTITION_INFORMATION , *  PPARTITION_INFORMATION ;

// #line 358
typedef struct _SET_PARTITION_INFORMATION {
	UCHAR PartitionType ;
} SET_PARTITION_INFORMATION , *  PSET_PARTITION_INFORMATION ;

// #line 367
typedef struct _DRIVE_LAYOUT_INFORMATION {
	ULONG PartitionCount ;
	ULONG Signature ;
	PARTITION_INFORMATION PartitionEntry[1] ;
} DRIVE_LAYOUT_INFORMATION , *  PDRIVE_LAYOUT_INFORMATION ;

// #line 378
typedef struct _VERIFY_INFORMATION {
	LARGE_INTEGER StartingOffset ;
	ULONG Length ;
} VERIFY_INFORMATION , *  PVERIFY_INFORMATION ;

// #line 388
typedef struct _REASSIGN_BLOCKS {
	USHORT Reserved ;
	USHORT Count ;
	ULONG BlockNumber[1] ;
} REASSIGN_BLOCKS , *  PREASSIGN_BLOCKS ;

// #line 401
typedef struct _DISK_CONTROLLER_NUMBER {
	ULONG ControllerNumber ;
	ULONG DiskNumber ;
} DISK_CONTROLLER_NUMBER , *  PDISK_CONTROLLER_NUMBER ;

// #line 424
typedef enum  {
	EqualPriority,
	KeepPrefetchedData,
	KeepReadData
} DISK_CACHE_RETENTION_PRIORITY ;

// #line 431
typedef struct _DISK_CACHE_INFORMATION {
	BOOLEAN ParametersSavable ;
	BOOLEAN ReadCacheEnabled ;
	BOOLEAN WriteCacheEnabled ;
	DISK_CACHE_RETENTION_PRIORITY ReadRetentionPriority ;
	DISK_CACHE_RETENTION_PRIORITY WriteRetentionPriority ;
	USHORT DisablePrefetchTransferLength ;
	BOOLEAN PrefetchScalar ;
	union  {
		struct  {
			USHORT Minimum ;
			USHORT Maximum ;
			USHORT MaximumBlocks ;
		} ScalarPrefetch ;
		struct  {
			USHORT Minimum ;
			USHORT Maximum ;
		} BlockPrefetch ;
	}  ;
} DISK_CACHE_INFORMATION , *  PDISK_CACHE_INFORMATION ;

// #line 508
typedef struct _DISK_GROW_PARTITION {
	ULONG PartitionNumber ;
	LARGE_INTEGER BytesToGrow ;
} DISK_GROW_PARTITION , *  PDISK_GROW_PARTITION ;

// #line 532
typedef struct _HISTOGRAM_BUCKET {
	ULONG Reads ;
	ULONG Writes ;
} HISTOGRAM_BUCKET , *  PHISTOGRAM_BUCKET ;

// #line 539
typedef struct _DISK_HISTOGRAM {
	LARGE_INTEGER DiskSize ;
	LARGE_INTEGER Start ;
	LARGE_INTEGER End ;
	LARGE_INTEGER Average ;
	LARGE_INTEGER AverageRead ;
	LARGE_INTEGER AverageWrite ;
	ULONG Granularity ;
	ULONG Size ;
	ULONG ReadCount ;
	ULONG WriteCount ;
	PHISTOGRAM_BUCKET Histogram ;
} DISK_HISTOGRAM , *  PDISK_HISTOGRAM ;

// #line 575
typedef struct _DISK_PERFORMANCE {
	LARGE_INTEGER BytesRead ;
	LARGE_INTEGER BytesWritten ;
	LARGE_INTEGER ReadTime ;
	LARGE_INTEGER WriteTime ;
	LARGE_INTEGER IdleTime ;
	ULONG ReadCount ;
	ULONG WriteCount ;
	ULONG QueueDepth ;
	ULONG SplitCount ;
	LARGE_INTEGER QueryTime ;
	ULONG StorageDeviceNumber ;
	WCHAR StorageManagerName[8] ;
} DISK_PERFORMANCE , *  PDISK_PERFORMANCE ;

// #line 596
typedef struct _DISK_RECORD {
	LARGE_INTEGER ByteOffset ;
	LARGE_INTEGER StartTime ;
	LARGE_INTEGER EndTime ;
	PVOID VirtualAddress ;
	ULONG NumberOfBytes ;
	UCHAR DeviceNumber ;
	BOOLEAN ReadRequest ;
} DISK_RECORD , *  PDISK_RECORD ;

// #line 611
typedef struct _DISK_LOGGING {
	UCHAR Function ;
	PVOID BufferAddress ;
	ULONG BufferSize ;
} DISK_LOGGING , *  PDISK_LOGGING ;

// #line 653
typedef enum _BIN_TYPES {
	RequestSize,
	RequestLocation
} BIN_TYPES ;

// #line 662
typedef struct _BIN_RANGE {
	LARGE_INTEGER StartValue ;
	LARGE_INTEGER Length ;
} BIN_RANGE , *  PBIN_RANGE ;

// #line 671
typedef struct _PERF_BIN {
	ULONG NumberOfBins ;
	ULONG TypeOfBin ;
	BIN_RANGE BinsRanges[1] ;
} PERF_BIN , *  PPERF_BIN ;

// #line 681
typedef struct _BIN_COUNT {
	BIN_RANGE BinRange ;
	ULONG BinCount ;
} BIN_COUNT , *  PBIN_COUNT ;

// #line 690
typedef struct _BIN_RESULTS {
	ULONG NumberOfBins ;
	BIN_COUNT BinCounts[1] ;
} BIN_RESULTS , *  PBIN_RESULTS ;

// #line 24 "C:/NTDDK/inc/pshpack1.h"
// #line 704 "C:/NTDDK/inc/ntdddisk.h"
typedef struct _GETVERSIONINPARAMS {
	UCHAR bVersion ;
	UCHAR bRevision ;
	UCHAR bReserved ;
	UCHAR bIDEDeviceMap ;
	ULONG fCapabilities ;
	ULONG dwReserved[4] ;
} GETVERSIONINPARAMS , *  PGETVERSIONINPARAMS , *  LPGETVERSIONINPARAMS ;

// #line 27 "C:/NTDDK/inc/poppack.h"
// #line 24 "C:/NTDDK/inc/pshpack1.h"
// #line 727 "C:/NTDDK/inc/ntdddisk.h"
typedef struct _IDEREGS {
	UCHAR bFeaturesReg ;
	UCHAR bSectorCountReg ;
	UCHAR bSectorNumberReg ;
	UCHAR bCylLowReg ;
	UCHAR bCylHighReg ;
	UCHAR bDriveHeadReg ;
	UCHAR bCommandReg ;
	UCHAR bReserved ;
} IDEREGS , *  PIDEREGS , *  LPIDEREGS ;

// #line 27 "C:/NTDDK/inc/poppack.h"
// #line 24 "C:/NTDDK/inc/pshpack1.h"
// #line 763 "C:/NTDDK/inc/ntdddisk.h"
typedef struct _SENDCMDINPARAMS {
	ULONG cBufferSize ;
	IDEREGS irDriveRegs ;
	UCHAR bDriveNumber ;
	UCHAR bReserved[3] ;
	ULONG dwReserved[4] ;
	UCHAR bBuffer[1] ;
} SENDCMDINPARAMS , *  PSENDCMDINPARAMS , *  LPSENDCMDINPARAMS ;

// #line 27 "C:/NTDDK/inc/poppack.h"
// #line 24 "C:/NTDDK/inc/pshpack1.h"
// #line 779 "C:/NTDDK/inc/ntdddisk.h"
typedef struct _DRIVERSTATUS {
	UCHAR bDriverError ;
	UCHAR bIDEError ;
	UCHAR bReserved[2] ;
	ULONG dwReserved[2] ;
} DRIVERSTATUS , *  PDRIVERSTATUS , *  LPDRIVERSTATUS ;

// #line 27 "C:/NTDDK/inc/poppack.h"
// #line 24 "C:/NTDDK/inc/pshpack1.h"
// #line 808 "C:/NTDDK/inc/ntdddisk.h"
typedef struct _SENDCMDOUTPARAMS {
	ULONG cBufferSize ;
	DRIVERSTATUS DriverStatus ;
	UCHAR bBuffer[1] ;
} SENDCMDOUTPARAMS , *  PSENDCMDOUTPARAMS , *  LPSENDCMDOUTPARAMS ;

// #line 27 "C:/NTDDK/inc/poppack.h"
// #line 849 "C:/NTDDK/inc/ntdddisk.h"
typedef struct _MAPPED_ADDRESS {
	struct _MAPPED_ADDRESS *  NextMappedAddress ;
	PVOID MappedAddress ;
	ULONG NumberOfBytes ;
	LARGE_INTEGER IoAddress ;
	ULONG BusNumber ;
} MAPPED_ADDRESS , *  PMAPPED_ADDRESS ;

// #line 16 "C:/Program Files/Microsoft Visual Studio/VC98/include/stdarg.h"
// #line 32
// #line 48
typedef char *  va_list ;
// #line 16 "C:/NTDDK/inc/stdio.h"
// #line 32
// #line 118
struct _iobuf {
	char *  _ptr ;
	int _cnt ;
	char *  _base ;
	int _flag ;
	int _file ;
	int _charbuf ;
	int _bufsiz ;
	char *  _tmpfname ;
} ;

// #line 128
typedef struct _iobuf FILE ;

// #line 184
//extern FILE _iob[] ;

// #line 198
typedef /*__int64*/ LONG fpos_t ;

// #line 239

// #line 431

// #line 27 "C:/NTDDK/inc/ntddvol.h"
// #line 49
typedef struct _DISK_EXTENT {
	ULONG DiskNumber ;
	LARGE_INTEGER StartingOffset ;
	LARGE_INTEGER ExtentLength ;
} DISK_EXTENT , *  PDISK_EXTENT ;

// #line 59
typedef struct _VOLUME_DISK_EXTENTS {
	ULONG NumberOfDiskExtents ;
	DISK_EXTENT Extents[1] ;
} VOLUME_DISK_EXTENTS , *  PVOLUME_DISK_EXTENTS ;

// #line 82
typedef struct _VOLUME_FAILOVER_SET {
	ULONG NumberOfDisks ;
	ULONG DiskNumbers[1] ;
} VOLUME_FAILOVER_SET , *  PVOLUME_FAILOVER_SET ;

// #line 101
typedef struct _VOLUME_NUMBER {
	ULONG VolumeNumber ;
	WCHAR VolumeManagerName[8] ;
} VOLUME_NUMBER , *  PVOLUME_NUMBER ;

// #line 111
typedef struct _VOLUME_LOGICAL_OFFSET {
	LONGLONG LogicalOffset ;
} VOLUME_LOGICAL_OFFSET , *  PVOLUME_LOGICAL_OFFSET ;

// #line 119
typedef struct _VOLUME_PHYSICAL_OFFSET {
	ULONG DiskNumber ;
	LONGLONG Offset ;
} VOLUME_PHYSICAL_OFFSET , *  PVOLUME_PHYSICAL_OFFSET ;

// #line 128
typedef struct _VOLUME_PHYSICAL_OFFSETS {
	ULONG NumberOfPhysicalOffsets ;
	VOLUME_PHYSICAL_OFFSET PhysicalOffset[1] ;
} VOLUME_PHYSICAL_OFFSETS , *  PVOLUME_PHYSICAL_OFFSETS ;

// #line 26 "C:/NTDDK/inc/mountmgr.h"
// #line 61
typedef struct _MOUNTMGR_CREATE_POINT_INPUT {
	USHORT SymbolicLinkNameOffset ;
	USHORT SymbolicLinkNameLength ;
	USHORT DeviceNameOffset ;
	USHORT DeviceNameLength ;
} MOUNTMGR_CREATE_POINT_INPUT , *  PMOUNTMGR_CREATE_POINT_INPUT ;

// #line 73
typedef struct _MOUNTMGR_MOUNT_POINT {
	ULONG SymbolicLinkNameOffset ;
	USHORT SymbolicLinkNameLength ;
	ULONG UniqueIdOffset ;
	USHORT UniqueIdLength ;
	ULONG DeviceNameOffset ;
	USHORT DeviceNameLength ;
} MOUNTMGR_MOUNT_POINT , *  PMOUNTMGR_MOUNT_POINT ;

// #line 87
typedef struct _MOUNTMGR_MOUNT_POINTS {
	ULONG Size ;
	ULONG NumberOfMountPoints ;
	MOUNTMGR_MOUNT_POINT MountPoints[1] ;
} MOUNTMGR_MOUNT_POINTS , *  PMOUNTMGR_MOUNT_POINTS ;

// #line 97
typedef struct _MOUNTMGR_DRIVE_LETTER_TARGET {
	USHORT DeviceNameLength ;
	WCHAR DeviceName[1] ;
} MOUNTMGR_DRIVE_LETTER_TARGET , *  PMOUNTMGR_DRIVE_LETTER_TARGET ;

// #line 106
typedef struct _MOUNTMGR_DRIVE_LETTER_INFORMATION {
	BOOLEAN DriveLetterWasAssigned ;
	UCHAR CurrentDriveLetter ;
} MOUNTMGR_DRIVE_LETTER_INFORMATION , *  PMOUNTMGR_DRIVE_LETTER_INFORMATION ;

// #line 116
typedef struct _MOUNTMGR_VOLUME_MOUNT_POINT {
	USHORT SourceVolumeNameOffset ;
	USHORT SourceVolumeNameLength ;
	USHORT TargetVolumeNameOffset ;
	USHORT TargetVolumeNameLength ;
} MOUNTMGR_VOLUME_MOUNT_POINT , *  PMOUNTMGR_VOLUME_MOUNT_POINT ;

// #line 128
typedef struct _MOUNTMGR_CHANGE_NOTIFY_INFO {
	ULONG EpicNumber ;
} MOUNTMGR_CHANGE_NOTIFY_INFO , *  PMOUNTMGR_CHANGE_NOTIFY_INFO ;

// #line 137
typedef struct _MOUNTMGR_TARGET_NAME {
	USHORT DeviceNameLength ;
	WCHAR DeviceName[1] ;
} MOUNTMGR_TARGET_NAME , *  PMOUNTMGR_TARGET_NAME ;

// #line 202
typedef struct _MOUNTDEV_NAME {
	USHORT NameLength ;
	WCHAR Name[1] ;
} MOUNTDEV_NAME , *  PMOUNTDEV_NAME ;

// #line 212
// #line 38 "C:/NTDDK/inc/ddk/mountdev.h"
typedef struct _MOUNTDEV_UNIQUE_ID {
	USHORT UniqueIdLength ;
	UCHAR UniqueId[1] ;
} MOUNTDEV_UNIQUE_ID , *  PMOUNTDEV_UNIQUE_ID ;

// #line 47
typedef struct _MOUNTDEV_UNIQUE_ID_CHANGE_NOTIFY_OUTPUT {
	ULONG Size ;
	USHORT OldUniqueIdOffset ;
	USHORT OldUniqueIdLength ;
	USHORT NewUniqueIdOffset ;
	USHORT NewUniqueIdLength ;
} MOUNTDEV_UNIQUE_ID_CHANGE_NOTIFY_OUTPUT , * 
	PMOUNTDEV_UNIQUE_ID_CHANGE_NOTIFY_OUTPUT ;

// #line 66
typedef struct _MOUNTDEV_SUGGESTED_LINK_NAME {
	BOOLEAN UseOnlyIfThereAreNoOtherLinks ;
	USHORT NameLength ;
	WCHAR Name[1] ;
} MOUNTDEV_SUGGESTED_LINK_NAME , *  PMOUNTDEV_SUGGESTED_LINK_NAME ;

// #line 24 "C:/NTDDK/inc/wmistr.h"
// #line 10 "C:/NTDDK/inc/wmidata.h"
typedef struct _MSWmi_MofData {
	ULONG Unused1 ;
	ULONG Unused2 ;
	ULONG Size ;
	ULONG Unused4 ;
	UCHAR BinaryMofData[1] ;
} MSWmi_MofData , *  PMSWmi_MofData ;

// #line 47
// #line 51
typedef struct _MSWmi_ProviderInfo {
	char VariableData[1] ;
} MSWmi_ProviderInfo , *  PMSWmi_ProviderInfo ;

// #line 63
typedef struct _MSWmi_PnPDeviceId {
	CHAR VariableData[1] ;
} MSWmi_PnPDeviceId , *  PMSWmi_PnPDeviceId ;

// #line 80
// #line 83
typedef struct _MSWmi_PnPInstanceNames {
	ULONG Count ;
	WCHAR InstanceNameList[1] ;
} MSWmi_PnPInstanceNames , *  PMSWmi_PnPInstanceNames ;

// #line 102
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
typedef struct _MSPower_DeviceEnable {
	BOOLEAN Enable ;
} MSPower_DeviceEnable , *  PMSPower_DeviceEnable ;

// #line 162
// #line 165
typedef struct _MSPower_DeviceWakeEnable {
	BOOLEAN Enable ;
} MSPower_DeviceWakeEnable , *  PMSPower_DeviceWakeEnable ;

// #line 179
// #line 182
typedef struct _MSNdis_NetworkAddress {
	UCHAR Address[6] ;
} MSNdis_NetworkAddress , *  PMSNdis_NetworkAddress ;

// #line 196
// #line 199
typedef struct _MSNdis_NetworkShortAddress {
	UCHAR Address[2] ;
} MSNdis_NetworkShortAddress , *  PMSNdis_NetworkShortAddress ;

// #line 213

// #line 216
typedef struct _MSNdis_NetworkLinkSpeed {
	ULONG Outbound ;
	ULONG Inbound ;
} MSNdis_NetworkLinkSpeed , *  PMSNdis_NetworkLinkSpeed ;

// #line 236
// #line 239
typedef struct _MSNdis_EnumerateAdapter {
	CHAR VariableData[1] ;
} MSNdis_EnumerateAdapter , *  PMSNdis_EnumerateAdapter ;

// #line 253
// #line 256
typedef struct _MSNdis_NotifyAdapterRemoval {
	CHAR VariableData[1] ;
} MSNdis_NotifyAdapterRemoval , *  PMSNdis_NotifyAdapterRemoval ;

// #line 270
// #line 273
typedef struct _MSNdis_NotifyAdapterArrival {
	CHAR VariableData[1] ;
} MSNdis_NotifyAdapterArrival , *  PMSNdis_NotifyAdapterArrival ;

// #line 287
typedef struct _MSNdis_NdisEnumerateVc {
	char VariableData[1] ;
} MSNdis_NdisEnumerateVc , *  PMSNdis_NdisEnumerateVc ;

// #line 303
typedef struct _MSNdis_NotifyVcRemoval {
	char VariableData[1] ;
} MSNdis_NotifyVcRemoval , *  PMSNdis_NotifyVcRemoval ;

// #line 319

typedef struct _MSNdis_NotifyVcArrival {
	char VariableData[1] ;
} MSNdis_NotifyVcArrival , *  PMSNdis_NotifyVcArrival ;

// #line 335
// #line 338
typedef struct _MSNdis_HardwareStatus {
	ULONG NdisHardwareStatus ;
} MSNdis_HardwareStatus , *  PMSNdis_HardwareStatus ;

// #line 353
// #line 356
typedef struct _MSNdis_MediaSupported {
	ULONG NumberElements ;
	ULONG NdisMediaSupported[1] ;
} MSNdis_MediaSupported , *  PMSNdis_MediaSupported ;

// #line 375
typedef struct _MSNdis_MediaInUse {
	ULONG NumberElements ;
	ULONG NdisMediaInUse[1] ;
} MSNdis_MediaInUse , *  PMSNdis_MediaInUse ;

// #line 397
// #line 400
typedef struct _MSNdis_MaximumLookahead {
	ULONG NdisMaximumLookahead ;
} MSNdis_MaximumLookahead , *  PMSNdis_MaximumLookahead ;

// #line 415
// #line 418
typedef struct _MSNdis_MaximumFrameSize {
	ULONG NdisMaximumFrameSize ;
} MSNdis_MaximumFrameSize , *  PMSNdis_MaximumFrameSize ;

// #line 433
typedef struct _MSNdis_LinkSpeed {
	ULONG NdisLinkSpeed ;
} MSNdis_LinkSpeed , *  PMSNdis_LinkSpeed ;

// #line 451
// #line 454
typedef struct _MSNdis_TransmitBufferSpace {
	ULONG NdisTransmitBufferSpace ;
} MSNdis_TransmitBufferSpace , *  PMSNdis_TransmitBufferSpace ;

// #line 469
// #line 472
typedef struct _MSNdis_ReceiveBufferSpace {
	ULONG NdisReceiveBufferSpace ;
} MSNdis_ReceiveBufferSpace , *  PMSNdis_ReceiveBufferSpace ;

// #line 487
// #line 490
typedef struct _MSNdis_TransmitBlockSize {
	ULONG NdisTransmitBlockSize ;
} MSNdis_TransmitBlockSize , *  PMSNdis_TransmitBlockSize ;

// #line 505
// #line 508
typedef struct _MSNdis_ReceiveBlockSize {
	ULONG NdisReceiveBlockSize ;
} MSNdis_ReceiveBlockSize , *  PMSNdis_ReceiveBlockSize ;

// #line 523
typedef struct _MSNdis_VendorID {
	ULONG NdisVendorID ;
} MSNdis_VendorID , *  PMSNdis_VendorID ;

// #line 541
// #line 544
typedef struct _MSNdis_VendorDescription {
	CHAR VariableData[1] ;
} MSNdis_VendorDescription , *  PMSNdis_VendorDescription ;

// #line 558
// #line 561
typedef struct _MSNdis_CurrentPacketFilter {
	ULONG NdisCurrentPacketFilter ;
} MSNdis_CurrentPacketFilter , *  PMSNdis_CurrentPacketFilter ;

// #line 576
// #line 579
typedef struct _MSNdis_CurrentLookahead {
	ULONG NdisCurrentLookahead ;
} MSNdis_CurrentLookahead , *  PMSNdis_CurrentLookahead ;

// #line 594
typedef struct _MSNdis_DriverVersion {
	USHORT NdisDriverVersion ;
} MSNdis_DriverVersion , *  PMSNdis_DriverVersion ;

// #line 612
// #line 615
typedef struct _MSNdis_MaximumTotalSize {
	ULONG NdisMaximumTotalSize ;
} MSNdis_MaximumTotalSize , *  PMSNdis_MaximumTotalSize ;

// #line 630
typedef struct _MSNdis_MacOptions {
	ULONG NdisMacOptions ;
} MSNdis_MacOptions , *  PMSNdis_MacOptions ;

// #line 648
// #line 651
typedef struct _MSNdis_MediaConnectStatus {
	ULONG NdisMediaConnectStatus ;
} MSNdis_MediaConnectStatus , *  PMSNdis_MediaConnectStatus ;

// #line 666
// #line 669
typedef struct _MSNdis_MaximumSendPackets {
	ULONG NdisMaximumSendPackets ;
} MSNdis_MaximumSendPackets , *  PMSNdis_MaximumSendPackets ;

// #line 684
// #line 687
typedef struct _MSNdis_VendorDriverVersion {
	ULONG NdisVendorDriverVersion ;
} MSNdis_VendorDriverVersion , *  PMSNdis_VendorDriverVersion ;

// #line 702
typedef struct _MSNdis_TransmitsOk {
	ULONG NdisTransmitsOk ;
} MSNdis_TransmitsOk , *  PMSNdis_TransmitsOk ;

// #line 720
typedef struct _MSNdis_ReceivesOk {
	ULONG NdisReceivesOk ;
} MSNdis_ReceivesOk , *  PMSNdis_ReceivesOk ;

// #line 738
// #line 741
typedef struct _MSNdis_TransmitsError {
	ULONG NdisTransmitsError ;
} MSNdis_TransmitsError , *  PMSNdis_TransmitsError ;

// #line 756
typedef struct _MSNdis_ReceiveError {
	ULONG NdisReceiveError ;
} MSNdis_ReceiveError , *  PMSNdis_ReceiveError ;

// #line 774
// #line 777
typedef struct _MSNdis_ReceiveNoBuffer {
	ULONG NdisReceiveNoBuffer ;
} MSNdis_ReceiveNoBuffer , *  PMSNdis_ReceiveNoBuffer ;

// #line 792
// #line 795
typedef struct _MSNdis_CoHardwareStatus {
	ULONG NdisCoHardwareStatus ;
} MSNdis_CoHardwareStatus , *  PMSNdis_CoHardwareStatus ;

// #line 810
// #line 813
typedef struct _MSNdis_CoMediaSupported {
	ULONG NumberElements ;
	ULONG NdisCoMediaSupported[1] ;
} MSNdis_CoMediaSupported , *  PMSNdis_CoMediaSupported ;

// #line 832
typedef struct _MSNdis_CoMediaInUse {
	ULONG NumberElements ;
	ULONG NdisCoMediaInUse[1] ;
} MSNdis_CoMediaInUse , *  PMSNdis_CoMediaInUse ;

// #line 854
typedef struct _MSNdis_CoLinkSpeed {
	MSNdis_NetworkLinkSpeed NdisCoLinkSpeed ;
} MSNdis_CoLinkSpeed , *  PMSNdis_CoLinkSpeed ;

// #line 872
typedef struct _MSNdis_CoVendorId {
	ULONG NdisCoVendorID ;
} MSNdis_CoVendorId , *  PMSNdis_CoVendorId ;

// #line 890
// #line 893
typedef struct _MSNdis_CoVendorDescription {
	CHAR VariableData[1] ;
} MSNdis_CoVendorDescription , *  PMSNdis_CoVendorDescription ;

// #line 907
// #line 910
typedef struct _MSNdis_CoDriverVersion {
	USHORT NdisCoDriverVersion ;
} MSNdis_CoDriverVersion , *  PMSNdis_CoDriverVersion ;

// #line 925
typedef struct _MSNdis_CoMacOptions {
	ULONG NdisCoMacOptions ;
} MSNdis_CoMacOptions , *  PMSNdis_CoMacOptions ;

// #line 943
// #line 946
typedef struct _MSNdis_CoMediaConnectStatus {
	ULONG NdisCoMediaConnectStatus ;
} MSNdis_CoMediaConnectStatus , *  PMSNdis_CoMediaConnectStatus ;

// #line 961
// #line 964
typedef struct _MSNdis_CoVendorDriverVersion {
	ULONG NdisCoVendorDriverVersion ;
} MSNdis_CoVendorDriverVersion , *  PMSNdis_CoVendorDriverVersion ;

// #line 979
// #line 982
typedef struct _MSNdis_CoMinimumLinkSpeed {
	MSNdis_NetworkLinkSpeed NdisCoMinimumLinkSpeed ;
} MSNdis_CoMinimumLinkSpeed , *  PMSNdis_CoMinimumLinkSpeed ;

// #line 997
// #line 1000
typedef struct _MSNdis_CoTransmitPdusOk {
	ULONG NdisCoTransmitPdusOk ;
} MSNdis_CoTransmitPdusOk , *  PMSNdis_CoTransmitPdusOk ;

// #line 1015
// #line 1018
typedef struct _MSNdis_CoReceivePdusOk {
	ULONG NdisCoReceivePdusOk ;
} MSNdis_CoReceivePdusOk , *  PMSNdis_CoReceivePdusOk ;

// #line 1033
// #line 1036
typedef struct _MSNdis_CoTransmitPduErrors {
	ULONG NdisCoTransmitPduErrors ;
} MSNdis_CoTransmitPduErrors , *  PMSNdis_CoTransmitPduErrors ;

// #line 1051
// #line 1054
typedef struct _MSNdis_CoReceivePduErrors {
	ULONG NdisCoReceivePduErrors ;
} MSNdis_CoReceivePduErrors , *  PMSNdis_CoReceivePduErrors ;

// #line 1069
// #line 1072
typedef struct _MSNdis_CoReceivePdusNoBuffer {
	ULONG NdisCoReceivePdusNoBuffer ;
} MSNdis_CoReceivePdusNoBuffer , *  PMSNdis_CoReceivePdusNoBuffer ;

// #line 1087
// #line 1090
typedef struct _MSNdis_AtmSupportedVcRates {
	ULONG MinCellRate ;
	ULONG MaxCellRate ;
} MSNdis_AtmSupportedVcRates , *  PMSNdis_AtmSupportedVcRates ;

// #line 1110
// #line 1113
typedef struct _MSNdis_AtmSupportedServiceCategory {
	ULONG NdisAtmSupportedServiceCategory ;
} MSNdis_AtmSupportedServiceCategory , *  PMSNdis_AtmSupportedServiceCategory ;

// #line 1128
// #line 1131
typedef struct _MSNdis_AtmSupportedAalTypes {
	ULONG NdisAtmSupportedAalTypes ;
} MSNdis_AtmSupportedAalTypes , *  PMSNdis_AtmSupportedAalTypes ;

// #line 1146
// #line 1149
typedef struct _MSNdis_AtmHardwareCurrentAddress {
	MSNdis_NetworkAddress NdisAtmHardwareCurrentAddress ;
} MSNdis_AtmHardwareCurrentAddress , *  PMSNdis_AtmHardwareCurrentAddress ;

// #line 1164
// #line 1167
typedef struct _MSNdis_AtmMaxActiveVcs {
	ULONG NdisAtmMaxActiveVcs ;
} MSNdis_AtmMaxActiveVcs , *  PMSNdis_AtmMaxActiveVcs ;

// #line 1182
// #line 1185
typedef struct _MSNdis_AtmMaxActiveVciBits {
	ULONG NdisAtmMaxActiveVciBits ;
} MSNdis_AtmMaxActiveVciBits , *  PMSNdis_AtmMaxActiveVciBits ;

// #line 1200
// #line 1203
typedef struct _MSNdis_AtmMaxActiveVpiBits {
	ULONG NdisAtmMaxActiveVpiBits ;
} MSNdis_AtmMaxActiveVpiBits , *  PMSNdis_AtmMaxActiveVpiBits ;

// #line 1218
// #line 1221
typedef struct _MSNdis_AtmMaxAal0PacketSize {
	ULONG NdisAtmMaxAal0PacketSize ;
} MSNdis_AtmMaxAal0PacketSize , *  PMSNdis_AtmMaxAal0PacketSize ;

// #line 1236
// #line 1239
typedef struct _MSNdis_AtmMaxAal1PacketSize {
	ULONG NdisAtmMaxAal1PacketSize ;
} MSNdis_AtmMaxAal1PacketSize , *  PMSNdis_AtmMaxAal1PacketSize ;

// #line 1254
// #line 1257
typedef struct _MSNdis_AtmMaxAal34PacketSize {
	ULONG NdisAtmMaxAal34PacketSize ;
} MSNdis_AtmMaxAal34PacketSize , *  PMSNdis_AtmMaxAal34PacketSize ;

// #line 1272
// #line 1275
typedef struct _MSNdis_AtmMaxAal5PacketSize {
	ULONG NdisAtmMaxAal5PacketSize ;
} MSNdis_AtmMaxAal5PacketSize , *  PMSNdis_AtmMaxAal5PacketSize ;

// #line 1290
// #line 1293
typedef struct _MSNdis_AtmReceiveCellsOk {
	ULONGLONG NdisAtmReceiveCellsOk ;
} MSNdis_AtmReceiveCellsOk , *  PMSNdis_AtmReceiveCellsOk ;

// #line 1308
// #line 1311
typedef struct _MSNdis_AtmTransmitCellsOk {
	ULONGLONG NdisAtmTransmitCellsOk ;
} MSNdis_AtmTransmitCellsOk , *  PMSNdis_AtmTransmitCellsOk ;

// #line 1326
// #line 1329
typedef struct _MSNdis_AtmReceiveCellsDropped {
	ULONGLONG NdisAtmReceiveCellsDropped ;
} MSNdis_AtmReceiveCellsDropped , *  PMSNdis_AtmReceiveCellsDropped ;

// #line 1344

// #line 1347
typedef struct _MSNdis_EthernetPermanentAddress {
	MSNdis_NetworkAddress NdisPermanentAddress ;
} MSNdis_EthernetPermanentAddress , *  PMSNdis_EthernetPermanentAddress ;

// #line 1362
// #line 1365
typedef struct _MSNdis_EthernetCurrentAddress {
	MSNdis_NetworkAddress NdisCurrentAddress ;
} MSNdis_EthernetCurrentAddress , *  PMSNdis_EthernetCurrentAddress ;

// #line 1380
// #line 1383
typedef struct _MSNdis_EthernetMulticastList {
	ULONG NumberElements ;
	MSNdis_NetworkAddress NdisMulticastList[1] ;
} MSNdis_EthernetMulticastList , *  PMSNdis_EthernetMulticastList ;

// #line 1402

// #line 1405
typedef struct _MSNdis_EthernetMaximumMulticastListSize {
	ULONG NdisEthernetMaximumMulticastListSize ;
} MSNdis_EthernetMaximumMulticastListSize , * 
	PMSNdis_EthernetMaximumMulticastListSize ;

// #line 1420
// #line 1423
typedef struct _MSNdis_EthernetMacOptions {
	ULONG NdisEthernetMacOptions ;
} MSNdis_EthernetMacOptions , *  PMSNdis_EthernetMacOptions ;

// #line 1438
// #line 1441
typedef struct _MSNdis_EthernetReceiveErrorAlignment {
	ULONG NdisEthernetReceiveErrorAlignment ;
} MSNdis_EthernetReceiveErrorAlignment , * 
	PMSNdis_EthernetReceiveErrorAlignment ;

// #line 1456
// #line 1459
typedef struct _MSNdis_EthernetOneTransmitCollision {
	ULONG NdisEthernetOneTransmitCollision ;
} MSNdis_EthernetOneTransmitCollision , *  PMSNdis_EthernetOneTransmitCollision;
	
// #line 1474

// #line 1477
typedef struct _MSNdis_EthernetMoreTransmitCollisions {
	ULONG NdisEthernetMoreTransmitCollisions ;
} MSNdis_EthernetMoreTransmitCollisions , * 
	PMSNdis_EthernetMoreTransmitCollisions ;

// #line 1492
// #line 1495
typedef struct _MSNdis_TokenRingPermanentAddress {
	MSNdis_NetworkAddress NdisPermanentAddress ;
} MSNdis_TokenRingPermanentAddress , *  PMSNdis_TokenRingPermanentAddress ;

// #line 1510

// #line 1513
typedef struct _MSNdis_TokenRingCurrentAddress {
	MSNdis_NetworkAddress NdisCurrentAddress ;
} MSNdis_TokenRingCurrentAddress , *  PMSNdis_TokenRingCurrentAddress ;

// #line 1528
// #line 1531
typedef struct _MSNdis_TokenRingCurrentFunctional {
	ULONG NdisTokenRingCurrentFunctional ;
} MSNdis_TokenRingCurrentFunctional , *  PMSNdis_TokenRingCurrentFunctional ;

// #line 1546
// #line 1549
typedef struct _MSNdis_TokenRingCurrentGroup {
	ULONG NdisTokenRingCurrentGroup ;
} MSNdis_TokenRingCurrentGroup , *  PMSNdis_TokenRingCurrentGroup ;

// #line 1564
// #line 1567
typedef struct _MSNdis_TokenRingLastOpenStatus {
	ULONG NdisTokenRingLastOpenStatus ;
} MSNdis_TokenRingLastOpenStatus , *  PMSNdis_TokenRingLastOpenStatus ;

// #line 1582
// #line 1585
typedef struct _MSNdis_TokenRingCurrentRingStatus {
	ULONG NdisTokenRingCurrentRingStatus ;
} MSNdis_TokenRingCurrentRingStatus , *  PMSNdis_TokenRingCurrentRingStatus ;

// #line 1600
// #line 1603
typedef struct _MSNdis_TokenRingCurrentRingState {
	ULONG NdisTokenRingCurrentRingState ;
} MSNdis_TokenRingCurrentRingState , *  PMSNdis_TokenRingCurrentRingState ;

// #line 1618
// #line 1621
typedef struct _MSNdis_TokenRingLineErrors {
	ULONG NdisTokenRingLineErrors ;
} MSNdis_TokenRingLineErrors , *  PMSNdis_TokenRingLineErrors ;

// #line 1636
// #line 1639
typedef struct _MSNdis_TokenRingLostFrames {
	ULONG NdisTokenRingLostFrames ;
} MSNdis_TokenRingLostFrames , *  PMSNdis_TokenRingLostFrames ;

// #line 1654
// #line 1657
typedef struct _MSNdis_FddiLongPermanentAddress {
	MSNdis_NetworkAddress NdisPermanentAddress ;
} MSNdis_FddiLongPermanentAddress , *  PMSNdis_FddiLongPermanentAddress ;

// #line 1672
// #line 1675
typedef struct _MSNdis_FddiLongCurrentAddress {
	MSNdis_NetworkAddress NdisCurrentAddress ;
} MSNdis_FddiLongCurrentAddress , *  PMSNdis_FddiLongCurrentAddress ;

// #line 1690
// #line 1693
typedef struct _MSNdis_FddiLongMulticastList {
	ULONG NumberElements ;
	MSNdis_NetworkAddress NdisMulticastList[1] ;
} MSNdis_FddiLongMulticastList , *  PMSNdis_FddiLongMulticastList ;

// #line 1712
// #line 1715
typedef struct _MSNdis_FddiLongMaximumListSize {
	ULONG NdisFddiLongMaximumListSize ;
} MSNdis_FddiLongMaximumListSize , *  PMSNdis_FddiLongMaximumListSize ;

// #line 1730
// #line 1733
typedef struct _MSNdis_FddiShortPermanentAddress {
	MSNdis_NetworkShortAddress NdisPermanentAddress ;
} MSNdis_FddiShortPermanentAddress , *  PMSNdis_FddiShortPermanentAddress ;

// #line 1748
// #line 1751
typedef struct _MSNdis_FddiShortCurrentAddress {
	MSNdis_NetworkShortAddress NdisCurrentAddress ;
} MSNdis_FddiShortCurrentAddress , *  PMSNdis_FddiShortCurrentAddress ;

// #line 1766
// #line 1769
typedef struct _MSNdis_FddiShortMulticastList {
	ULONG NumberElements ;
	MSNdis_NetworkShortAddress NdisMulticastList[1] ;
} MSNdis_FddiShortMulticastList , *  PMSNdis_FddiShortMulticastList ;

// #line 1788
// #line 1791
typedef struct _MSNdis_FddiShortMaximumListSize {
	ULONG NdisFddiShortMaximumListSize ;
} MSNdis_FddiShortMaximumListSize , *  PMSNdis_FddiShortMaximumListSize ;

// #line 1806
// #line 1809
typedef struct _MSNdis_FddiAttachmentType {
	ULONG NdisFddiAttachmentType ;
} MSNdis_FddiAttachmentType , *  PMSNdis_FddiAttachmentType ;

// #line 1824
// #line 1827
typedef struct _MSNdis_FddiUpstreamNodeLong {
	MSNdis_NetworkAddress NdisFddiUpstreamNodeLong ;
} MSNdis_FddiUpstreamNodeLong , *  PMSNdis_FddiUpstreamNodeLong ;

// #line 1842
// #line 1845
typedef struct _MSNdis_FddiDownstreamNodeLong {
	MSNdis_NetworkAddress NdisFddiDownstreamNodeLong ;
} MSNdis_FddiDownstreamNodeLong , *  PMSNdis_FddiDownstreamNodeLong ;

// #line 1860
// #line 1863
typedef struct _MSNdis_FddiFrameErrors {
	ULONG NdisFddiFrameErrors ;
} MSNdis_FddiFrameErrors , *  PMSNdis_FddiFrameErrors ;

// #line 1878
// #line 1881
typedef struct _MSNdis_FddiFramesLost {
	ULONG NdisFddiFramesLost ;
} MSNdis_FddiFramesLost , *  PMSNdis_FddiFramesLost ;

// #line 1896
// #line 1899
typedef struct _MSNdis_FddiRingManagmentState {
	ULONG NdisFddiRingManagmentState ;
} MSNdis_FddiRingManagmentState , *  PMSNdis_FddiRingManagmentState ;

// #line 1914
// #line 1917
typedef struct _MSNdis_FddiLctFailures {
	ULONG NdisFddiLctFailures ;
} MSNdis_FddiLctFailures , *  PMSNdis_FddiLctFailures ;

// #line 1932
// #line 1935
typedef struct _MSNdis_FddiLemRejects {
	ULONG NdisFddiLemRejects ;
} MSNdis_FddiLemRejects , *  PMSNdis_FddiLemRejects ;

// #line 1950
// #line 1953
typedef struct _MSNdis_FddiLConnectionState {
	ULONG NdisFddiLConnectionState ;
} MSNdis_FddiLConnectionState , *  PMSNdis_FddiLConnectionState ;

// #line 1968
typedef struct _MSNdis_StatusResetStart {
	char VariableData[1] ;
} MSNdis_StatusResetStart , *  PMSNdis_StatusResetStart ;

// #line 1984
typedef struct _MSNdis_StatusResetEnd {
	char VariableData[1] ;
} MSNdis_StatusResetEnd , *  PMSNdis_StatusResetEnd ;

// #line 2000
typedef struct _MSNdis_StatusMediaConnect {
	char VariableData[1] ;
} MSNdis_StatusMediaConnect , *  PMSNdis_StatusMediaConnect ;

// #line 2016
typedef struct _MSNdis_StatusMediaDisconnect {
	char VariableData[1] ;
} MSNdis_StatusMediaDisconnect , *  PMSNdis_StatusMediaDisconnect ;

// #line 2032
// #line 2035
typedef struct _MSNdis_StatusMediaSpecificIndication {
	ULONG NumberElements ;
	UCHAR NdisStatusMediaSpecificIndication[1] ;
} MSNdis_StatusMediaSpecificIndication , * 
	PMSNdis_StatusMediaSpecificIndication ;

// #line 2054
// #line 2057
typedef struct _MSNdis_StatusLinkSpeedChange {
	MSNdis_NetworkLinkSpeed NdisStatusLinkSpeedChange ;
} MSNdis_StatusLinkSpeedChange , *  PMSNdis_StatusLinkSpeedChange ;

// #line 2072
// #line 2075
typedef struct _MSNdis_StatusProtocolBind {
	CHAR VariableData[1] ;
} MSNdis_StatusProtocolBind , *  PMSNdis_StatusProtocolBind ;

// #line 2089
// #line 2092
typedef struct _MSNdis_StatusProtocolUnbind {
	CHAR VariableData[1] ;
} MSNdis_StatusProtocolUnbind , *  PMSNdis_StatusProtocolUnbind ;

// #line 2106
// #line 2109
typedef struct _KEYBOARD_PORT_WMI_STD_DATA {
	ULONG ConnectorType ;
	ULONG DataQueueSize ;
	ULONG ErrorCount ;
	ULONG FunctionKeys ;
	ULONG Indicators ;
} KEYBOARD_PORT_WMI_STD_DATA , *  PKEYBOARD_PORT_WMI_STD_DATA ;

// #line 2149
// #line 2152
typedef struct _POINTER_PORT_WMI_STD_DATA {
	ULONG ConnectorType ;
	ULONG DataQueueSize ;
	ULONG ErrorCount ;
	ULONG Buttons ;
	ULONG HardwareType ;
} POINTER_PORT_WMI_STD_DATA , *  PPOINTER_PORT_WMI_STD_DATA ;

// #line 2202
// #line 2205
typedef struct _MSMouse_ClassInformation {
	ULONGLONG DeviceId ;
} MSMouse_ClassInformation , *  PMSMouse_ClassInformation ;

// #line 2220
// #line 2223
typedef struct _MSKeyboard_ClassInformation {
	ULONGLONG DeviceId ;
} MSKeyboard_ClassInformation , *  PMSKeyboard_ClassInformation ;

// #line 2238
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
// #line 2304
typedef struct _WMI_DISK_GEOMETRY {
	LONGLONG Cylinders ;
	ULONG MediaType ;
	ULONG TracksPerCylinder ;
	ULONG SectorsPerTrack ;
	ULONG BytesPerSector ;
} WMI_DISK_GEOMETRY , *  PWMI_DISK_GEOMETRY ;

// #line 2339
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
// #line 2415
typedef struct _MSDiskDriver_Performance {
	WMI_DISK_PERFORMANCE PerfData ;
	CHAR VariableData[1] ;
} MSDiskDriver_Performance , *  PMSDiskDriver_Performance ;

// #line 2434
// #line 2437
typedef struct _STORAGE_FAILURE_PREDICT_STATUS {
	ULONG Reason ;
	BOOLEAN PredictFailure ;
} STORAGE_FAILURE_PREDICT_STATUS , *  PSTORAGE_FAILURE_PREDICT_STATUS ;

// #line 2457
// #line 2460
typedef struct _STORAGE_FAILURE_PREDICT_DATA {
	ULONG Length ;
	UCHAR VendorSpecific[512] ;
} STORAGE_FAILURE_PREDICT_DATA , *  PSTORAGE_FAILURE_PREDICT_DATA ;

// #line 2480
// #line 2483
typedef struct _STORAGE_FAILURE_PREDICT_EVENT {
	ULONG Length ;
	UCHAR VendorSpecific[1] ;
} STORAGE_FAILURE_PREDICT_EVENT , *  PSTORAGE_FAILURE_PREDICT_EVENT ;

// #line 2502
// #line 2513
typedef struct _STORAGE_FAILURE_PREDICT_FUNCTION {
	char VariableData[1] ;
} STORAGE_FAILURE_PREDICT_FUNCTION , *  PSTORAGE_FAILURE_PREDICT_FUNCTION ;

// #line 2525
typedef struct _MSIde_PortDeviceInfo {
	UCHAR Bus ;
	UCHAR Target ;
	UCHAR Lun ;
} MSIde_PortDeviceInfo , *  PMSIde_PortDeviceInfo ;

// #line 2553
typedef struct _MSSerial_PortName {
	CHAR VariableData[1] ;
} MSSerial_PortName , *  PMSSerial_PortName ;

// #line 2570
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
// #line 2920
typedef struct _PARPORT_WMI_ALLOC_FREE_COUNTS {
	ULONG PortAllocates ;
	ULONG PortFrees ;
} PARPORT_WMI_ALLOC_FREE_COUNTS , *  PPARPORT_WMI_ALLOC_FREE_COUNTS ;

// #line 2940
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
typedef struct _REDBOOK_WMI_PERF_DATA {
	LONGLONG TimeReadDelay ;
	LONGLONG TimeReading ;
	LONGLONG TimeStreamDelay ;
	LONGLONG TimeStreaming ;
	LONGLONG DataProcessed ;
	ULONG StreamPausedCount ;
} REDBOOK_WMI_PERF_DATA , *  PREDBOOK_WMI_PERF_DATA ;

// #line 3134
typedef struct _RegisteredGuids {
	ULONG GuidType ;
	ULONG LoggerId ;
	ULONG EnableLevel ;
	ULONG EnableFlags ;
	BOOLEAN IsEnabled ;
} RegisteredGuids , *  PRegisteredGuids ;

// #line 27 "C:/NTDDK/inc/wmiguid.h"
// #line 28 "C:/NTDDK/inc/ddk/wdm/wmilib.h"

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
NTSTATUS WmiCompleteRequest(PDEVICE_OBJECT DeviceObject , 
			    PIRP Irp , NTSTATUS
			    Status , ULONG BufferUsed , CCHAR PriorityBoost ) ;
// #line 411
typedef enum  {
	IrpProcessed,
	IrpNotCompleted,
	IrpNotWmi,
	IrpForward
} SYSCTL_IRP_DISPOSITION , *  PSYSCTL_IRP_DISPOSITION ;

// #line 420
NTSTATUS WmiSystemControl(PWMILIB_CONTEXT WmiLibInfo , PDEVICE_OBJECT
	DeviceObject , PIRP Irp , PSYSCTL_IRP_DISPOSITION IrpDisposition ) ;
// #line 453
/* END types */

//////////////////////////////////////////////////////////////////
// Main program
//////////////////////////////////////////////////////////////////
// #line 48 "diskperf.c"

/*
void errorFn()
{
 ERROR: goto ERROR;
}
*/

int s ;
int UNLOADED , NP , DC , SKIP1 , SKIP2 , MPR1 , MPR3 , IPC ;
int pended ;
PIO_COMPLETION_ROUTINE compFptr ;
int compRegistered ;
int lowerDriverReturn ;
int setEventCalled ;
int customIrp ;
int myStatus ;
int routine ;

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
  pended = 0;
  compFptr = 0;
  compRegistered = 0;
  lowerDriverReturn = 0;
  setEventCalled = 0;
  customIrp = 0;
}

// #line 94
typedef struct _DEVICE_EXTENSION {
	PDEVICE_OBJECT DeviceObject ;
	PDEVICE_OBJECT TargetDeviceObject ;
	PDEVICE_OBJECT PhysicalDeviceObject ;
	ULONG DiskNumber ;
	WCHAR StorageManagerName[8] ;
	ULONG Processors ;
	PDISK_PERFORMANCE DiskCounters ;
	LARGE_INTEGER LastIdleClock ;
	LONG QueueDepth ;
	LONG CountersEnabled ;
	KEVENT PagingPathCountEvent ;
	ULONG PagingPathCount ;
	UNICODE_STRING PhysicalDeviceName ;
	WCHAR PhysicalDeviceNameBuffer[64] ;
	WMILIB_CONTEXT WmilibContext ;
} DEVICE_EXTENSION , *  PDEVICE_EXTENSION ;

UNICODE_STRING DiskPerfRegistryPath ;
// WMIGUIDREGINFO DiskperfGuidList[] /* = {{& DiskPerfGuid, 1, 0}} */;
/* TRACER */ WMIGUIDREGINFO DiskperfGuidList[] /* = {{& DiskPerfGuid, 1, 0}} */;
IRP *  pirp ;


/////////////////////////////////////////////////
// Prototypes
/////////////////////////////////////////////////
NTSTATUS DriverEntry(PDRIVER_OBJECT DriverObject , PUNICODE_STRING RegistryPath);	
NTSTATUS DiskPerfForwardIrpSynchronous(PDEVICE_OBJECT DeviceObject , PIRP Irp );	
NTSTATUS DiskPerfAddDevice(PDRIVER_OBJECT DriverObject , 
			   PDEVICE_OBJECT PhysicalDeviceObject ) ;
NTSTATUS DiskPerfDispatchPnp(PDEVICE_OBJECT DeviceObject , PIRP Irp ) ;
NTSTATUS DiskPerfDispatchPower(PDEVICE_OBJECT DeviceObject , PIRP Irp ) ;
NTSTATUS DiskPerfStartDevice(PDEVICE_OBJECT DeviceObject , PIRP Irp ) ;
NTSTATUS DiskPerfRemoveDevice(PDEVICE_OBJECT DeviceObject , PIRP Irp ) ;
NTSTATUS DiskPerfSendToNextDriver(PDEVICE_OBJECT DeviceObject , PIRP Irp ) ;
NTSTATUS DiskPerfCreate(PDEVICE_OBJECT DeviceObject , PIRP Irp ) ;
NTSTATUS DiskPerfReadWrite(PDEVICE_OBJECT DeviceObject , PIRP Irp ) ;
NTSTATUS DiskPerfIoCompletion(PDEVICE_OBJECT DeviceObject , PIRP Irp , PVOID Context ) ;	
NTSTATUS DiskPerfDeviceControl(PDEVICE_OBJECT DeviceObject , PIRP Irp ) ;
NTSTATUS DiskPerfShutdownFlush(PDEVICE_OBJECT DeviceObject , PIRP Irp ) ;
void DiskPerfUnload(PDRIVER_OBJECT DriverObject ) ;
NTSTATUS DiskPerfWmi(PDEVICE_OBJECT DeviceObject , PIRP Irp ) ;
void DiskPerfLogError(PDEVICE_OBJECT DeviceObject , ULONG UniqueId , 
		      NTSTATUS ErrorCode , NTSTATUS Status ) ;
NTSTATUS DiskPerfRegisterDevice(PDEVICE_OBJECT DeviceObject ) ;
NTSTATUS DiskPerfIrpCompletion(PDEVICE_OBJECT DeviceObject , PIRP Irp , 
			       PVOID Context ) ;
NTSTATUS DiskperfQueryWmiRegInfo(PDEVICE_OBJECT DeviceObject , ULONG *  RegFlags
	, PUNICODE_STRING InstanceName , PUNICODE_STRING *  RegistryPath ,
	PUNICODE_STRING MofResourceName , PDEVICE_OBJECT *  Pdo ) ;
NTSTATUS DiskperfQueryWmiDataBlock(PDEVICE_OBJECT DeviceObject , PIRP Irp ,
	ULONG GuidIndex , ULONG InstanceIndex , ULONG InstanceCount , PULONG
	InstanceLengthArray , ULONG BufferAvail , PUCHAR Buffer ) ;
void DiskPerfSyncFilterWithTarget(PDEVICE_OBJECT FilterDevice , 
				  PDEVICE_OBJECT TargetDevice ) ;
NTSTATUS DiskperfWmiFunctionControl(PDEVICE_OBJECT DeviceObject , PIRP Irp ,
	ULONG GuidIndex , WMIENABLEDISABLECONTROL Function , BOOLEAN Enable ) ;
void DiskPerfAddCounters(PDISK_PERFORMANCE TotalCounters , PDISK_PERFORMANCE
	NewCounters , LARGE_INTEGER Frequency ) ;

// End prototypes

NTSTATUS DriverEntry(PDRIVER_OBJECT DriverObject , PUNICODE_STRING RegistryPath)
{
  ULONG ulIndex ;
  PDRIVER_DISPATCH *  dispatch ;
  ULONG tag__1;

  DiskPerfRegistryPath.MaximumLength = RegistryPath->Length + sizeof((WCHAR )0);    
  DiskPerfRegistryPath.Buffer = ExAllocatePoolWithTag(PagedPool,
						      DiskPerfRegistryPath.MaximumLength, tag__1 
						      /*'frPD'*/);
  if(DiskPerfRegistryPath.Buffer != (void *  )0){ }
    //RtlCopyUnicodeString(& DiskPerfRegistryPath, RegistryPath);
  else
    {
      DiskPerfRegistryPath.Length = 0;
      DiskPerfRegistryPath.MaximumLength = 0;
    }
  // #line 443
/* // Already commented by BLAST team
	for(ulIndex = 0, dispatch = DriverObject->MajorFunction; ulIndex <=
		0x1b; ulIndex++, dispatch++)
*/

  * dispatch = DiskPerfSendToNextDriver;
/* 	// #line 454 */
/* 	(DriverObject->MajorFunction)[0x00] = DiskPerfCreate; */
/* 	(DriverObject->MajorFunction)[0x03] = DiskPerfReadWrite; */
/* 	(DriverObject->MajorFunction)[0x04] = DiskPerfReadWrite; */
/* 	(DriverObject->MajorFunction)[0x0e] = DiskPerfDeviceControl; */
/* 	(DriverObject->MajorFunction)[0x17] = DiskPerfWmi; */
/* 	// #line 460 */
/* 	(DriverObject->MajorFunction)[0x10] = DiskPerfShutdownFlush; */
/* 	(DriverObject->MajorFunction)[0x09] = DiskPerfShutdownFlush; */
/* 	(DriverObject->MajorFunction)[0x1b] = DiskPerfDispatchPnp; */
/* 	(DriverObject->MajorFunction)[0x16] = DiskPerfDispatchPower; */
/* 	// #line 465 */
/* 	(DriverObject->DriverExtension)->AddDevice = DiskPerfAddDevice; */
/* 	DriverObject->DriverUnload = DiskPerfUnload; */
	// #line 468
	return (NTSTATUS )0x00000000L;
}

void DiskPerfSyncFilterWithTarget(PDEVICE_OBJECT FilterDevice , 
				  PDEVICE_OBJECT TargetDevice )
{
  ULONG propFlags ;
  propFlags = TargetDevice->Flags & 0;
  FilterDevice->Flags |= propFlags;
  propFlags = TargetDevice->Characteristics & (0x00000001 | 0x00000002 |
					       0x00000004);
  FilterDevice->Characteristics |= propFlags;
}

NTSTATUS DiskPerfAddDevice(PDRIVER_OBJECT DriverObject , 
			   PDEVICE_OBJECT PhysicalDeviceObject )
{
  NTSTATUS status ;
  IO_STATUS_BLOCK ioStatus ;
  PDEVICE_OBJECT filterDeviceObject ;
  PDEVICE_EXTENSION deviceExtension ;
  CCHAR ntNameBuffer[64] ;
  STRING ntNameString ;
  UNICODE_STRING ntUnicodeString ;
  PIRP irp ;
  STORAGE_DEVICE_NUMBER number ;
  ULONG registrationFlag;
  PWMILIB_CONTEXT wmilibContext ;
  PCHAR buffer ;
  ULONG buffersize ;
  ULONG Tag;

  registrationFlag = 0;
  status = IoCreateDevice(DriverObject, sizeof(DEVICE_EXTENSION ),
			  (void *  )0, 0x00000007, 0, 0, & filterDeviceObject);
  if(! ((NTSTATUS )status >= 0))
      return status;

  filterDeviceObject->Flags |= 0x00000010;
  deviceExtension = (PDEVICE_EXTENSION)filterDeviceObject->DeviceExtension;
  
  memset(deviceExtension, 0, sizeof(DEVICE_EXTENSION )); 

  deviceExtension->LastIdleClock = KeQueryPerformanceCounter((void *  )0);
  deviceExtension->Processors = (ULONG )(* KeNumberProcessors);
  buffersize = (LONG )((LONG_PTR )(& ((DISK_PERFORMANCE * )0)->QueryTime)) * deviceExtension->Processors;
  buffer = (PCHAR )ExAllocatePoolWithTag(NonPagedPool, buffersize,Tag /*'frPD'*/);
  if(buffer != (void *  )0)
    {
      memset(buffer, 0, buffersize); 
      deviceExtension->DiskCounters = (PDISK_PERFORMANCE )buffer;
    }
  else
      DiskPerfLogError(filterDeviceObject, 513, (NTSTATUS)0x00000000L, (NTSTATUS )0xC0040002L);
  deviceExtension->PhysicalDeviceObject = PhysicalDeviceObject;
  deviceExtension->TargetDeviceObject=IoAttachDeviceToDeviceStack(filterDeviceObject,PhysicalDeviceObject);
  if(deviceExtension->TargetDeviceObject == (void *  )0)
    {
      IoDeleteDevice(filterDeviceObject);
      return (NTSTATUS )0xC000000EL;
    }
  deviceExtension->DeviceObject = filterDeviceObject;
  (deviceExtension->PhysicalDeviceName).Buffer =deviceExtension->PhysicalDeviceNameBuffer;
  KeInitializeEvent(& deviceExtension->PagingPathCountEvent, NotificationEvent, 1);
  wmilibContext = & deviceExtension->WmilibContext;
  memset(wmilibContext, 0, sizeof(WMILIB_CONTEXT )); 
  wmilibContext->GuidCount = sizeof(DiskperfGuidList) / sizeof(WMIGUIDREGINFO );     
  wmilibContext->GuidList = DiskperfGuidList;
  wmilibContext->QueryWmiRegInfo = DiskperfQueryWmiRegInfo;
  wmilibContext->QueryWmiDataBlock = DiskperfQueryWmiDataBlock;
  wmilibContext->WmiFunctionControl = DiskperfWmiFunctionControl;
  filterDeviceObject->Flags |= 0x00002000;
  // TRACER: compiler cannot compile the operator ~
  //  filterDeviceObject->Flags &= ~ 0x00000080;
  return (NTSTATUS )0x00000000L;
}

NTSTATUS DiskPerfDispatchPnp(PDEVICE_OBJECT DeviceObject , PIRP Irp )
{
  PIO_STACK_LOCATION irpSp = ((Irp->Tail).Overlay).CurrentStackLocation;
  NTSTATUS status ;
  PDEVICE_EXTENSION deviceExtension ;

  switch(irpSp->MinorFunction)
    {
/*     case 0 /\*0x00*\/: */
/*       { */
/* 	status = DiskPerfStartDevice(DeviceObject, Irp); */
/* 	break; */
/*       } */
/*     case 2 /\*0x02*\/: */
/*       { */
/* 	status = DiskPerfRemoveDevice(DeviceObject, Irp); */
/* 	break; */
/*       } */
    case 22/*0x16*/:
	  {
	    PIO_STACK_LOCATION irpStack ;
	    ULONG count ;
	    int InPath; //BLAST
	    BOOLEAN setPagable ;

	    irpStack = ((Irp->Tail).Overlay).CurrentStackLocation;
	    if(((irpStack->Parameters).UsageNotification).Type !=DeviceUsageTypePaging)
	      {
		status = DiskPerfSendToNextDriver(DeviceObject,Irp);
		break;
	      }
	    deviceExtension = DeviceObject->DeviceExtension;
	    status = KeWaitForSingleObject(&
					   deviceExtension->PagingPathCountEvent,
					   Executive, KernelMode, 0, (void *  )0);
	    setPagable = 0;	   
	    // if(! ((irpStack->Parameters).UsageNotification).InPath
	    //   && deviceExtension->PagingPathCount == 1) 
	    if(! InPath
	       && deviceExtension->PagingPathCount == 1)
	      {
		if(DeviceObject->Flags & 0x00004000){}
		else
		  {
		    DeviceObject->Flags |= 0x00002000;
		    setPagable = 1;
		  }
	      }
	    status = DiskPerfForwardIrpSynchronous(DeviceObject,Irp);
	    if((NTSTATUS )status >= 0)
	      {
		{
		  //if(((irpStack->Parameters).UsageNotification).InPath)
		    if(InPath)
		    {
		      InterlockedIncrement(&
					   deviceExtension->PagingPathCount);
		    }
		    else
		      {
			InterlockedDecrement(&
					     deviceExtension->PagingPathCount);
			
		      }
		}
		//if(((irpStack->Parameters).UsageNotification).InPath)*
 	        if(InPath)
		  {
		    if(deviceExtension->PagingPathCount == 1){
		      // TRACER: compiler cannot compile the operator ~
		      // DeviceObject->Flags &= ~0x00002000;
		    }
		  }
	      }
	    else
	      {
		if(setPagable == 1)
		  {
		    // TRACER: compiler cannot compile the operator ~
		    // DeviceObject->Flags &= ~ 0x00002000;
		    setPagable = 0;
		  }
	      }
	    KeSetEvent(& deviceExtension->PagingPathCountEvent, 0,0);
	    IofCompleteRequest(Irp, 0);
	    return status;
	    break;
	  }
 /*    default : */
/*       return DiskPerfSendToNextDriver(DeviceObject, Irp); */
    }
  return status;
}

NTSTATUS DiskPerfIrpCompletion(PDEVICE_OBJECT DeviceObject , PIRP Irp , 
			       PVOID Context )
{
  PKEVENT Event = (PKEVENT )Context;
  KeSetEvent(Event, 0, 0);
  return (NTSTATUS )0xC0000016L;
}


NTSTATUS DiskPerfStartDevice(PDEVICE_OBJECT DeviceObject , PIRP Irp )
{
  PDEVICE_EXTENSION deviceExtension ;
  KEVENT event ;
  NTSTATUS status ;

  deviceExtension = (PDEVICE_EXTENSION )DeviceObject->DeviceExtension;
  status = DiskPerfForwardIrpSynchronous(DeviceObject, Irp);
  DiskPerfSyncFilterWithTarget(DeviceObject,
			       deviceExtension->TargetDeviceObject);
  DiskPerfRegisterDevice(DeviceObject);
  (Irp->IoStatus).Status = status;
  myStatus = status;
  IofCompleteRequest(Irp, 0);
  return status;
}

NTSTATUS DiskPerfRemoveDevice(PDEVICE_OBJECT DeviceObject , PIRP Irp )
{
  NTSTATUS status ;
  PDEVICE_EXTENSION deviceExtension ;
  PWMILIB_CONTEXT wmilibContext ;
  deviceExtension = (PDEVICE_EXTENSION )DeviceObject->DeviceExtension;
  IoWMIRegistrationControl(DeviceObject, 2);
  wmilibContext = & deviceExtension->WmilibContext;
  InterlockedExchange((PLONG )(& wmilibContext->GuidCount), (LONG )0);
  memset(wmilibContext, 0, sizeof(WMILIB_CONTEXT ));
  status = DiskPerfForwardIrpSynchronous(DeviceObject, Irp);
  IoDetachDevice(deviceExtension->TargetDeviceObject);
  IoDeleteDevice(DeviceObject);
  (Irp->IoStatus).Status = status;
  myStatus = status;
  IofCompleteRequest(Irp, 0);
  return status;
}

NTSTATUS DiskPerfSendToNextDriver(PDEVICE_OBJECT DeviceObject , PIRP Irp )
{
  PDEVICE_EXTENSION deviceExtension ;

  // TRACER
  _ABORT(s != NP );
  s = SKIP1;

  // BLAST
/*   if(s == NP) */
/*     s = SKIP1; */
/*   else */
/*     errorFn(); */

  Irp->CurrentLocation++;
  ((Irp->Tail).Overlay).CurrentStackLocation++;
  deviceExtension = (PDEVICE_EXTENSION )DeviceObject->DeviceExtension;
  return IofCallDriver(deviceExtension->TargetDeviceObject, Irp);
}

NTSTATUS DiskPerfDispatchPower(PDEVICE_OBJECT DeviceObject , PIRP Irp )
{
  PDEVICE_EXTENSION deviceExtension ;

  PoStartNextPowerIrp(Irp);

  // TRACER
  _ABORT(s != NP);
  s = SKIP1;
 
  // BLAST  
/*   if(s == NP) */
/*     s = SKIP1; */
/*   else */
/*     errorFn(); */

  Irp->CurrentLocation++;
  ((Irp->Tail).Overlay).CurrentStackLocation++;
  deviceExtension = (PDEVICE_EXTENSION )DeviceObject->DeviceExtension;
  return PoCallDriver(deviceExtension->TargetDeviceObject, Irp);
}

NTSTATUS DiskPerfForwardIrpSynchronous(PDEVICE_OBJECT DeviceObject , PIRP Irp )
{
  PDEVICE_EXTENSION deviceExtension ;
  KEVENT event ;
  NTSTATUS status ;
  PIO_STACK_LOCATION irpSp ;
  PIO_STACK_LOCATION irpSp1 ;  
  PIO_STACK_LOCATION nextIrpSp ;
  
  KeInitializeEvent(& event, NotificationEvent, 0);
  deviceExtension = (PDEVICE_EXTENSION )DeviceObject->DeviceExtension;
  irpSp = ((Irp->Tail).Overlay).CurrentStackLocation;
  nextIrpSp = ((Irp->Tail).Overlay).CurrentStackLocation - 1;
  memcpy(nextIrpSp, irpSp, (LONG )((LONG_PTR )(&
					       ((IO_STACK_LOCATION *  )0)->CompletionRoutine)));
  nextIrpSp->Control = 0;

  // TRACER
  _ABORT((s != NP) || (compRegistered != 0));
  compRegistered = 1;
  compFptr = DiskPerfIrpCompletion;
  routine = 0;

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
/* 	  compFptr = DiskPerfIrpCompletion; */
/* 	  routine = 0; */
/* 	} */
/*     } */
  irpSp1 = ((Irp->Tail).Overlay).CurrentStackLocation - 1;
  irpSp1->CompletionRoutine = DiskPerfIrpCompletion;
  irpSp1->Context = & event;
  irpSp1->Control = 0;
/*     if(1) */
/*       { */
/* 	// #line 1094 */
/* 	irpSp1->Control = 0x40; */
/*       } */
/*     // #line 1094 */
/*     if(1) */
/*       { */
/* 	// #line 1094 */
/* 	irpSp1->Control |= 0x80; */
/*       } */
/*     // #line 1094 */
/*     if(1) */
/*       { */
/* 	// #line 1094 */
/* 	irpSp1->Control |= 0x20; */
/*       } */
  status = IofCallDriver(deviceExtension->TargetDeviceObject, Irp);
  if(status == (NTSTATUS )0x00000103L)
    {
      KeWaitForSingleObject(& event, Executive, KernelMode, 0, /*(void *  )*/0);
      //status = (Irp->IoStatus).Status;
      status =  myStatus;
    }
  return status;
}

NTSTATUS DiskPerfCreate(PDEVICE_OBJECT DeviceObject , PIRP Irp )
{
  DeviceObject;
  (Irp->IoStatus).Status = (NTSTATUS ) 0x00000000L ;
  myStatus = (NTSTATUS)0x00000000L;
  IofCompleteRequest(Irp, 0);
  return (NTSTATUS )0x00000000L;
}


NTSTATUS DiskPerfReadWrite(PDEVICE_OBJECT DeviceObject , PIRP Irp )
{
  PDEVICE_EXTENSION deviceExtension;
  PIO_STACK_LOCATION currentIrpStack ;    
  PIO_STACK_LOCATION nextIrpStack ;    
  ULONG processor ;
  PDISK_PERFORMANCE partitionCounters ;
  LONG queueLen ;
  PLARGE_INTEGER timeStamp ;
  PIO_STACK_LOCATION irpSp ;

  deviceExtension = DeviceObject->DeviceExtension;
  currentIrpStack = ((Irp->Tail).Overlay).CurrentStackLocation;    
  nextIrpStack = ((Irp->Tail).Overlay).CurrentStackLocation - 1;    
       	      // This function is not defined in the program
  processor; /* = (ULONG )KeGetCurrentProcessorNumber();*/
  partitionCounters = (void *  )0;

  if(deviceExtension->DiskCounters != (void *  )0)
    {
      partitionCounters = (PDISK_PERFORMANCE )((PCHAR
			)deviceExtension->DiskCounters + processor * (LONG
			)((LONG_PTR )(& ((DISK_PERFORMANCE *  )0)->QueryTime)));
    }
  if(deviceExtension->CountersEnabled <= 0 ||
     (deviceExtension->PhysicalDeviceNameBuffer)[0] == 0 ||
     partitionCounters == (void *  )0)
    {
      return DiskPerfSendToNextDriver(DeviceObject, Irp);
    }
  queueLen = InterlockedIncrement(& deviceExtension->QueueDepth);
  * nextIrpStack = * currentIrpStack;
  timeStamp = (PLARGE_INTEGER )(& (currentIrpStack->Parameters).Read);
  * timeStamp = KeQueryPerformanceCounter((void *  )0);
  if(queueLen == 1)
    {
      (partitionCounters->IdleTime).QuadPart += timeStamp->QuadPart -
	(deviceExtension->LastIdleClock).QuadPart;
      (deviceExtension->LastIdleClock).QuadPart = timeStamp->QuadPart;
    }

  // TRACER
  _ABORT((s != NP) || (compRegistered != 0));
  compRegistered = 1;
  compFptr = DiskPerfIoCompletion;
  routine = 1;
  
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
/* 	  compFptr = DiskPerfIoCompletion; */
/* 	  routine = 1; */
/* 	} */
/*     } */
  irpSp = ((Irp->Tail).Overlay).CurrentStackLocation - 1;
  irpSp->CompletionRoutine = DiskPerfIoCompletion;
  irpSp->Context = DeviceObject;
  irpSp->Control = 0;
 /*  if(1) */
/*     { */
/*       irpSp->Control = 0x40; */
/*     } */
/*   if(1) */
/*     { */
/*       irpSp->Control |= 0x80; */
/*     } */
/*   if(1) */
/*     { */
/*       irpSp->Control |= 0x20; */
/*     } */
  
  return IofCallDriver(deviceExtension->TargetDeviceObject, Irp);
}

// #line 1260
NTSTATUS DiskPerfIoCompletion(PDEVICE_OBJECT DeviceObject , PIRP Irp , 
			      PVOID Context )
{
  PDEVICE_EXTENSION deviceExtension;
  PIO_STACK_LOCATION irpStack;  
  PDISK_PERFORMANCE partitionCounters ;
  LARGE_INTEGER timeStampComplete ;
  PLARGE_INTEGER difference ;
  KIRQL currentIrql ;
  LONG queueLen ;
  ULONG temp__1 /* =  KeGetCurrentProcessorNumber() */;

  deviceExtension = DeviceObject->DeviceExtension;
  irpStack = ((Irp->Tail).Overlay).CurrentStackLocation;  

  partitionCounters = (PDISK_PERFORMANCE )((PCHAR
		)deviceExtension->DiskCounters + temp__1 * (LONG )((LONG_PTR )(&
		((DISK_PERFORMANCE *  )0)->QueryTime)));

  if(partitionCounters == (void *  )0)
      return (NTSTATUS )0x00000000L;

  difference = (PLARGE_INTEGER )(& (irpStack->Parameters).Read);
  timeStampComplete = KeQueryPerformanceCounter((void *  )0);
  difference->QuadPart = timeStampComplete.QuadPart - difference->QuadPart;
  queueLen = InterlockedDecrement(& deviceExtension->QueueDepth);
  if(queueLen < 0)
      queueLen = InterlockedIncrement(& deviceExtension->QueueDepth);
  if(queueLen == 0)
      deviceExtension->LastIdleClock = timeStampComplete;
  if(irpStack->MajorFunction == 0x03)
    {
      (partitionCounters->BytesRead).QuadPart += (Irp->IoStatus).Information;	
      partitionCounters->ReadCount++;
      (partitionCounters->ReadTime).QuadPart += difference->QuadPart;
    }
  else
    {
      (partitionCounters->BytesWritten).QuadPart += (Irp->IoStatus).Information;			
      partitionCounters->WriteCount++;
      (partitionCounters->WriteTime).QuadPart += difference->QuadPart;
    }
  if(Irp->Flags & 0x00000008)
      partitionCounters->SplitCount++;
  if(Irp->PendingReturned)
    {
      // TRACER
      _ABORT(pended != 0);
      pended = 1;      
      // BLAST
/*       if(pended == 0) */
/* 	pended = 1; */
/*       else */
/* 	errorFn(); */

//      (((Irp->Tail).Overlay).CurrentStackLocation)->Control |= 0x01;
    }
  return (NTSTATUS )0x00000000L;
}

NTSTATUS DiskPerfDeviceControl(PDEVICE_OBJECT DeviceObject , PIRP Irp )
{
  PDEVICE_EXTENSION deviceExtension;
  PIO_STACK_LOCATION currentIrpStack;
  int NON_DET;
  NTSTATUS status ;
  KIRQL currentIrql ;
  ULONG i ;
  PDISK_PERFORMANCE totalCounters ;
  PDISK_PERFORMANCE diskCounters;	    
  LARGE_INTEGER frequency , perfctr ;
  LARGE_INTEGER difference ;

  diskCounters = deviceExtension->DiskCounters;
  deviceExtension = DeviceObject->DeviceExtension;
  currentIrpStack = ((Irp->Tail).Overlay).CurrentStackLocation;

  /* ((currentIrpStack->Parameters).DeviceIoControl).IoControlCode == */
  /*       (0x00000007 << 16 | 0 << 14 | 0x0008 << 2 | 0) */
  if(NON_DET)
    {
      if(((currentIrpStack->Parameters).DeviceIoControl).OutputBufferLength < sizeof(DISK_PERFORMANCE ))
	{
	  status = (NTSTATUS )0xC0000023L;
	  (Irp->IoStatus).Information = 0;
	}
      else
	{
	  if(diskCounters == (void *  )0)
	    {
	      (Irp->IoStatus).Status = (NTSTATUS )0xC0000001L;
	      myStatus = (NTSTATUS )0xC0000001L;
	      IofCompleteRequest(Irp, 0);
	      return (NTSTATUS )0xC0000001L;
	    }
	  totalCounters = (PDISK_PERFORMANCE)(Irp->AssociatedIrp).SystemBuffer;
	  memset(totalCounters, 0, sizeof(DISK_PERFORMANCE ));
	  perfctr = KeQueryPerformanceCounter(& frequency);
	  // This function is not defined in the program
	  // KeQuerySystemTime(& totalCounters->QueryTime);
	  for(i = 0; i < deviceExtension->Processors; i++)
	    {
	      DiskPerfAddCounters(totalCounters, diskCounters,
				  frequency);
	      diskCounters = (PDISK_PERFORMANCE )((PCHAR
						   )diskCounters + (LONG )((LONG_PTR )(&
					((DISK_PERFORMANCE *  )0)->QueryTime)));
	    }
	  totalCounters->QueueDepth = deviceExtension->QueueDepth;
	  if(totalCounters->QueueDepth == 0)
	    {
	      difference.QuadPart = perfctr.QuadPart -(deviceExtension->LastIdleClock).QuadPart;
	      if(difference.QuadPart > 0)
		  (totalCounters->IdleTime).QuadPart += 10000000 * difference.QuadPart / frequency.QuadPart;
	    }
	  totalCounters->StorageDeviceNumber = deviceExtension->DiskNumber;
/* 	  memcpy(& (totalCounters->StorageManagerName)[0], & */
/* 		 (deviceExtension->StorageManagerName)[0], 8 * */
/* 		 sizeof(WCHAR )); */
	  status = (NTSTATUS )0x00000000L;
	  //(Irp->IoStatus).Information = sizeof(DISK_PERFORMANCE );
	}
      (Irp->IoStatus).Status = status;
      myStatus = status;
      IofCompleteRequest(Irp, 0);
      return status;
    }
  else
    {
      //Irp->CurrentLocation++, ((Irp->Tail).Overlay).CurrentStackLocation++;
      return IofCallDriver(deviceExtension->TargetDeviceObject, Irp);
    }
}


NTSTATUS DiskPerfWmi(PDEVICE_OBJECT DeviceObject , PIRP Irp )
{
  PIO_STACK_LOCATION irpSp ;
  NTSTATUS status ;
  PWMILIB_CONTEXT wmilibContext ;
  SYSCTL_IRP_DISPOSITION disposition ;
  PDEVICE_EXTENSION deviceExtension;
  int NONDET;
  /*
   TRACER: if disposition is IrpProcessed then IofCompleteRequest is
   not called because it's assumed to be called inside
   WmiSystemControl. However, WmiSystemControl is a stub which simply
   returns 0. Therefore, we comment "break" in case 1
   below. Otherwise, the program is unsafe. Note that in the original
   version of this program used by BLAST team this function
   (DiskPerfWmi) was never executed.
   */
  deviceExtension = DeviceObject->DeviceExtension;
  wmilibContext = & deviceExtension->WmilibContext;
  if(wmilibContext->GuidCount == 0)
    return DiskPerfSendToNextDriver(DeviceObject, Irp);
  irpSp = ((Irp->Tail).Overlay).CurrentStackLocation;
  status = WmiSystemControl(wmilibContext, DeviceObject, Irp, &
			    disposition);
  switch(NONDET/* disposition */)
    {
    case 1 /* IrpProcessed */:
	// break;  <-- See above note!
    case 2 /* IrpNotCompleted */:
      IofCompleteRequest(Irp, 0);
      break;
    default :
      status = DiskPerfSendToNextDriver(DeviceObject, Irp);
      break;
    }
  return status;
}



NTSTATUS DiskPerfShutdownFlush(PDEVICE_OBJECT DeviceObject , PIRP Irp )
{
  PDEVICE_EXTENSION deviceExtension;

  deviceExtension = DeviceObject->DeviceExtension;
  Irp->CurrentLocation++, ((Irp->Tail).Overlay).CurrentStackLocation++;
  return IofCallDriver(deviceExtension->TargetDeviceObject, Irp);
}

void DiskPerfUnload(PDRIVER_OBJECT DriverObject )
{
  return;
}


NTSTATUS DiskPerfRegisterDevice(PDEVICE_OBJECT DeviceObject )
{
  NTSTATUS status ;
  IO_STATUS_BLOCK ioStatus ;
  KEVENT event ;
  PDEVICE_EXTENSION deviceExtension ;
  PIRP irp ;
  STORAGE_DEVICE_NUMBER number ;
  ULONG registrationFlag;
  WCHAR ntNameBuffer[64] ;
  STRING ntNameString ;
  UNICODE_STRING ntUnicodeString ;
  ULONG outputSize;
  PMOUNTDEV_NAME output ;
  VOLUME_NUMBER volumeNumber ;
  ULONG Tag;
  
  ULONG tmp__1;
  PDEVICE_OBJECT tmp__2;
  PVOID tmp__3;
  ULONG tmp__4; 
  PVOID tmp__5; 
  ULONG tmp__6; 
  BOOLEAN tmp__7;
  PKEVENT tmp__8;
  PIO_STATUS_BLOCK tmp__9;
  

  registrationFlag = 0;
  outputSize = sizeof(MOUNTDEV_NAME );
  deviceExtension = DeviceObject->DeviceExtension;

  KeInitializeEvent(& event, NotificationEvent, 0);
  irp = IoBuildDeviceIoControlRequest(tmp__1,tmp__2,tmp__3,tmp__4,
				      tmp__5,tmp__6,tmp__7,tmp__8,tmp__9);
/* 0x0000002d << 16 | 0 << 14 | 0x0420 */
/* << 2 | 0, deviceExtension->TargetDeviceObject, (void *  )0, 0, & */
/* number, sizeof(number), 0, & event, & ioStatus); */

  if(! irp)
    {
      DiskPerfLogError(DeviceObject, 256, (NTSTATUS )0x00000000L, (NTSTATUS )0xC0040002L);
      return (NTSTATUS )0xC000009AL;
    }
  status = IofCallDriver(deviceExtension->TargetDeviceObject, irp);
  if(status == (NTSTATUS )0x00000103L)
    {
      KeWaitForSingleObject(& event, Executive, KernelMode, 0, (void *  )0);
      status = ioStatus.Status;
    }
  if((NTSTATUS )status >= 0)
    {
      deviceExtension->DiskNumber = number.DeviceNumber;
/*       swprintf(deviceExtension->PhysicalDeviceNameBuffer, */
/* 	       "\134\0D\0e\0v\0i\0c\0e\0\134\0H\0a\0r\0d\0d\0i\0s\0k\0%\0d\0\134\0P\0a\0r\0t\0i\0t\0i\0o\0n\0%\0d\0", */
/* 	       number.DeviceNumber, number.PartitionNumber); */
/*       RtlInitUnicodeString(& deviceExtension->PhysicalDeviceName, & */
/* 			   (deviceExtension->PhysicalDeviceNameBuffer)[0]); */
/*       memcpy(& (deviceExtension->StorageManagerName)[0], */
/* 	     "P\0h\0y\0s\0D\0i\0s\0k\0", 8 * sizeof(WCHAR )); */
      
    }
  else
    {
      output = ExAllocatePoolWithTag(PagedPool, outputSize, Tag /*'frPD'*/);
      if(! output)
	{
	  DiskPerfLogError(DeviceObject, 257, (NTSTATUS)0x00000000L, (NTSTATUS )0xC0040002L);
	  return (NTSTATUS )0xC000009AL;
	}
      KeInitializeEvent(& event, NotificationEvent, 0);
      irp = IoBuildDeviceIoControlRequest(tmp__1,tmp__2,tmp__3,tmp__4,
					  tmp__5,tmp__6,tmp__7,tmp__8,tmp__9);
/* 					  Tag /\*(ULONG )'M'*\/ << 16 | 0 << 14 */
/* 					  | 2 << 2 | 0, deviceExtension->TargetDeviceObject, */
/* 					  (void *  )0, 0, output, outputSize, 0, & event, & */
/* 					  ioStatus);*/
      if(! irp)
	{
	  ExFreePool(output);
	  DiskPerfLogError(DeviceObject, 258, (NTSTATUS)0x00000000L, (NTSTATUS )0xC0040002L);
	  return (NTSTATUS )0xC000009AL;
	}
      status = IofCallDriver(deviceExtension->TargetDeviceObject,irp);
      if(status == (NTSTATUS )0x00000103L)
	{
	  KeWaitForSingleObject(& event, Executive, KernelMode, 0,(void *  )0);
	  status = ioStatus.Status;
	}
      if(status == (NTSTATUS )0x80000005L)
	{
	  outputSize = sizeof(MOUNTDEV_NAME ) +output->NameLength;
	  ExFreePool(output);
	  output = ExAllocatePoolWithTag(PagedPool, outputSize,Tag /*'frPD'*/);
	  if(! output)
	    {
	      DiskPerfLogError(DeviceObject, 258, (NTSTATUS)0x00000000L,
			       (NTSTATUS )0xC0040002L);
	      return (NTSTATUS )0xC000009AL;
	    }
	  KeInitializeEvent(& event, NotificationEvent, 0);
	  irp = IoBuildDeviceIoControlRequest(tmp__1,tmp__2,tmp__3,tmp__4,
					      tmp__5,tmp__6,tmp__7,tmp__8,tmp__9);
/* 					      Tag /\*(ULONG )'M'*\/ << 16 | */
/* 					      0 << 14 | 2 << 2 | 0, */
/* 					      deviceExtension->TargetDeviceObject,  */
/* 					      (void * )0, 0, output, outputSize, 0, & event, &  */
/* 					      ioStatus);*/
	  if(! irp)
	    {
	      ExFreePool(output);
	      DiskPerfLogError(DeviceObject, 259, (NTSTATUS)0x00000000L,
			       (NTSTATUS )0xC0040002L);
	      return (NTSTATUS )0xC000009AL;
	    }
	  status = IofCallDriver(deviceExtension->TargetDeviceObject,irp);
	  if(status == (NTSTATUS )0x00000103L)
	    {
	      KeWaitForSingleObject(& event, Executive,KernelMode, 0, (void *  )0);
	      status = ioStatus.Status;
	    }
	}
      if(! ((NTSTATUS )status >= 0))
	{
	  ExFreePool(output);
	  DiskPerfLogError(DeviceObject, 260, (NTSTATUS)0x00000000L,
			   (NTSTATUS )0xC0040003L);
	  return status;
	}
      deviceExtension->DiskNumber = - 1;
      (deviceExtension->PhysicalDeviceName).Length = output->NameLength;
      (deviceExtension->PhysicalDeviceName).MaximumLength = output->NameLength + sizeof(WCHAR );
/*       memcpy((deviceExtension->PhysicalDeviceName).Buffer, output->Name, output->NameLength); */
/*       ((deviceExtension->PhysicalDeviceName).Buffer)[(deviceExtension->PhysicalDeviceName */
/* 						      ).Length / sizeof(WCHAR )] = 0; */
      ExFreePool(output);
      outputSize = sizeof(VOLUME_NUMBER );
      memset(& volumeNumber, 0, sizeof(VOLUME_NUMBER ));
      KeInitializeEvent(& event, NotificationEvent, 0);
      irp = IoBuildDeviceIoControlRequest(tmp__1,tmp__2,tmp__3,tmp__4,
					  tmp__5,tmp__6,tmp__7,tmp__8,tmp__9);
					  /* (ULONG )'V' << 16 | 0 << 14 */
/* 					  | 7 << 2 | 0, deviceExtension->TargetDeviceObject, */
/* 					  (void *  )0, 0, & volumeNumber, sizeof(VOLUME_NUMBER ), */
/* 					  0, & event, & ioStatus);*/
      if(! irp)
	{
	  DiskPerfLogError(DeviceObject, 265, (NTSTATUS)0x00000000L, (NTSTATUS )0xC0040002L);
	  return (NTSTATUS )0xC000009AL;
	}
      status = IofCallDriver(deviceExtension->TargetDeviceObject,irp);
      if(status == (NTSTATUS )0x00000103L)
	{
	  KeWaitForSingleObject(& event, Executive, KernelMode, 0,(void *  )0);
	  status = ioStatus.Status;
	}
      if(! ((NTSTATUS )status >= 0) ||
	 (volumeNumber.VolumeManagerName)[0] == (WCHAR )((WCHAR)0))
							  
	{
/* 	  memcpy(& (deviceExtension->StorageManagerName)[0], */
/* 		 "L\0o\0g\0i\0D\0i\0s\0k\0", 8 * sizeof(WCHAR )); */
	  if((NTSTATUS )status >= 0)
	    deviceExtension->DiskNumber = volumeNumber.VolumeNumber;
	}
      else
	{
/* 	  memcpy(& (deviceExtension->StorageManagerName)[0], & */
/* 		 (volumeNumber.VolumeManagerName)[0], 8 * */
/* 				sizeof(WCHAR )); */
	  deviceExtension->DiskNumber = volumeNumber.VolumeNumber;
	}
    }
  status = IoWMIRegistrationControl(DeviceObject, 1 | registrationFlag);
  if(! ((NTSTATUS )status >= 0))
      DiskPerfLogError(DeviceObject, 261, (NTSTATUS )0x00000000L,(NTSTATUS )0xC004000CL);
		       
  return status;
}

void DiskPerfLogError(PDEVICE_OBJECT DeviceObject , ULONG UniqueId , 
		      NTSTATUS ErrorCode , NTSTATUS Status )
{
  PIO_ERROR_LOG_PACKET errorLogEntry ;
  /*   errorLogEntry = (PIO_ERROR_LOG_PACKET)IoAllocateErrorLogEntry(DeviceObject,  */
  /* 		  (UCHAR)(sizeof(IO_ERROR_LOG_PACKET ) + sizeof(DEVICE_OBJECT )));  */
  if(errorLogEntry != (void *  )0)
    {
      errorLogEntry->ErrorCode = ErrorCode;
      errorLogEntry->UniqueErrorValue = UniqueId;
      errorLogEntry->FinalStatus = Status;
/*    memcpy(& (errorLogEntry->DumpData)[0], & DeviceObject, */
/* 	        sizeof(DEVICE_OBJECT )); */
      errorLogEntry->DumpDataSize = sizeof(DEVICE_OBJECT );
/*    IoWriteErrorLogEntry(errorLogEntry); */
    }
}


NTSTATUS DiskperfQueryWmiRegInfo(PDEVICE_OBJECT DeviceObject , 
				 ULONG *  RegFlags,
				 PUNICODE_STRING InstanceName , 
				 PUNICODE_STRING *  RegistryPath ,
				 PUNICODE_STRING MofResourceName , 
				 PDEVICE_OBJECT *  Pdo )
{
  USHORT size ;
  NTSTATUS status ;
  PDEVICE_EXTENSION deviceExtension = DeviceObject->DeviceExtension;
  ULONG Tag;

  size = (deviceExtension->PhysicalDeviceName).Length + sizeof((WCHAR )0);
  InstanceName->Buffer = ExAllocatePoolWithTag(PagedPool, size, Tag);
  if(InstanceName->Buffer != (void *  )0)
    {
      * RegistryPath = & DiskPerfRegistryPath;
      * RegFlags = 0x00000020 | 0x00000001;
      * Pdo = deviceExtension->PhysicalDeviceObject;
      status = (NTSTATUS )0x00000000L;
    }
  else
    status = (NTSTATUS )0xC000009AL;
  return status;
}


NTSTATUS DiskperfQueryWmiDataBlock(PDEVICE_OBJECT DeviceObject , PIRP Irp ,
				   ULONG GuidIndex , ULONG InstanceIndex , 
				   ULONG InstanceCount , PULONG InstanceLengthArray , 
				   ULONG BufferAvail , PUCHAR Buffer )
				   
{
  NTSTATUS status ;
  PDEVICE_EXTENSION deviceExtension ;
  ULONG sizeNeeded ;
  KIRQL currentIrql ;
  PDISK_PERFORMANCE totalCounters ;
  PDISK_PERFORMANCE diskCounters ;
  PWMI_DISK_PERFORMANCE diskPerformance ;
  ULONG deviceNameSize ;
  PWCHAR diskNamePtr ;
  ULONG i ;
  LARGE_INTEGER perfctr , frequency ;
  LARGE_INTEGER difference ;

   deviceExtension = DeviceObject->DeviceExtension;
   if(GuidIndex == 0)
    {
      deviceNameSize = (deviceExtension->PhysicalDeviceName).Length +sizeof(USHORT );	
      sizeNeeded = (sizeof(WMI_DISK_PERFORMANCE ) + 1 /* & ~ 1 */) + deviceNameSize;	
      diskCounters = deviceExtension->DiskCounters;
      if(diskCounters == (void *  )0)
	{
	  status = (NTSTATUS )0xC0000001L;
	}
      else
	{
	  if(BufferAvail >= sizeNeeded)
	    {
	      memset(Buffer, 0, sizeof(WMI_DISK_PERFORMANCE));	      
	      diskPerformance = (PWMI_DISK_PERFORMANCE)Buffer;				 
	      totalCounters = (PDISK_PERFORMANCE)diskPerformance;	      
	      // This function is not defined in the program
	      // KeQuerySystemTime(& totalCounters->QueryTime);
	      perfctr = KeQueryPerformanceCounter(&frequency);
	      for(i = 0; i < deviceExtension->Processors; i++)
		{
		  DiskPerfAddCounters(totalCounters,
				      diskCounters, frequency);
		  diskCounters = (PDISK_PERFORMANCE
				  )((PCHAR )diskCounters + (LONG
							    )((LONG_PTR )(&
									  ((DISK_PERFORMANCE * 
									    )0)->QueryTime)));
		}
	      totalCounters->QueueDepth = deviceExtension->QueueDepth;	    
	      if(totalCounters->QueueDepth == 0)
		{
		  difference.QuadPart = perfctr.QuadPart - (deviceExtension->LastIdleClock).QuadPart; 	 
		  if(frequency.QuadPart > 0)
		    {       													      (totalCounters->IdleTime).QuadPart += 10000000 * difference.QuadPart /	      			frequency.QuadPart;
		    }
		}
	      totalCounters->StorageDeviceNumber = deviceExtension->DiskNumber;		
	      memcpy(& (totalCounters->StorageManagerName)[0],
		     &(deviceExtension->StorageManagerName)[0], 8 * sizeof(WCHAR ));
	      diskNamePtr = (PWCHAR )(Buffer + (sizeof(DISK_PERFORMANCE ) + 1 /* & ~ 1 */));   
	      * diskNamePtr++ = (deviceExtension->PhysicalDeviceName).Length;
	      memcpy(diskNamePtr,
		     (deviceExtension->PhysicalDeviceName).Buffer
		     ,
		     (deviceExtension->PhysicalDeviceName).Length);
	      * InstanceLengthArray = sizeNeeded;
	      status = (NTSTATUS )0x00000000L;
	    }
	  else
	    {
	      status = (NTSTATUS )0xC0000023L;
	    }	
	}
    }
  else
    {
      status = (NTSTATUS )0xC0000295L;
    }
  status = WmiCompleteRequest(DeviceObject, Irp, status, sizeNeeded, 0);
  return status;
}

NTSTATUS DiskperfWmiFunctionControl(PDEVICE_OBJECT DeviceObject , PIRP Irp ,
				    ULONG GuidIndex , WMIENABLEDISABLECONTROL Function , 
				    BOOLEAN Enable )
{
  NTSTATUS status ;
  PDEVICE_EXTENSION deviceExtension ;
  ULONG i ;
  LONG temp__1, temp__2;

  deviceExtension = DeviceObject->DeviceExtension;
  if(GuidIndex == 0)
    {
      if(Function == WmiDataBlockControl)
	{
	  if(Enable)
	    {
	      temp__1 =  InterlockedIncrement(& deviceExtension->CountersEnabled);
	      if(temp__1 == 1)
		{
		  if(deviceExtension->DiskCounters != (void *  )0)		     
		    {
/* 		      memset(deviceExtension->DiskCounters */
/* 			     , 0, (LONG )((LONG_PTR */
/* 					   )(& ((DISK_PERFORMANCE */
/* 						 *  )0)->QueryTime)) * */
/* 			     deviceExtension->Processors */
/* 			     ); */
		    }
		  deviceExtension->LastIdleClock =KeQueryPerformanceCounter((void *  )0); 
		  deviceExtension->QueueDepth = 0;
		}
	    }
	  else
	    {
	      temp__2 =  InterlockedDecrement(& deviceExtension->CountersEnabled);
	      if( temp__2 <= 0)	
		{
		  deviceExtension->CountersEnabled = 0;
		  deviceExtension->QueueDepth = 0;
		}
	    }
	}
      status = (NTSTATUS )0x00000000L;
    }
  else
    {
      status = (NTSTATUS )0xC0000295L;
    }
  status = WmiCompleteRequest(DeviceObject, Irp, status, 0, 0);
  return status;
}

// #line 2344
void DiskPerfAddCounters(PDISK_PERFORMANCE TotalCounters , 
			 PDISK_PERFORMANCE NewCounters , LARGE_INTEGER Frequency )			 
{
  (TotalCounters->BytesRead).QuadPart += (NewCounters->BytesRead).QuadPart;		
  (TotalCounters->BytesWritten).QuadPart +=(NewCounters->BytesWritten).QuadPart;		
  TotalCounters->ReadCount += NewCounters->ReadCount;
  TotalCounters->WriteCount += NewCounters->WriteCount;
  TotalCounters->SplitCount += NewCounters->SplitCount;
  if(Frequency.QuadPart > 0)
    {
      (TotalCounters->ReadTime).QuadPart +=
	(NewCounters->ReadTime).QuadPart * 10000000 /
	Frequency.QuadPart;
      (TotalCounters->WriteTime).QuadPart +=
	(NewCounters->WriteTime).QuadPart * 10000000 /
	Frequency.QuadPart;
      (TotalCounters->IdleTime).QuadPart +=
	(NewCounters->IdleTime).QuadPart * 10000000 /
	Frequency.QuadPart;
    }
  else
    {
      (TotalCounters->ReadTime).QuadPart +=
	(NewCounters->ReadTime).QuadPart;
      (TotalCounters->WriteTime).QuadPart +=
	(NewCounters->WriteTime).QuadPart;
      (TotalCounters->IdleTime).QuadPart +=
	(NewCounters->IdleTime).QuadPart;
    }
}

// #line 16 "C:/Program Files/Microsoft Visual Studio/VC98/include/excpt.h"
// #line 25 "C:/NTDDK/inc/ntdef.h"
// #line 15 "C:/Program Files/Microsoft Visual Studio/VC98/include/ctype.h"
// #line 127 "C:/NTDDK/inc/ntdef.h"
// #line 25 "C:/NTDDK/inc/basetsd.h"
// #line 217 "C:/NTDDK/inc/ntdef.h"
// #line 17 "C:/NTDDK/inc/guiddef.h"
// #line 16 "C:/NTDDK/inc/string.h"
// #line 1233 "C:/NTDDK/inc/ntdef.h"
// #line 75 "C:/NTDDK/inc/ddk/ntddk.h"
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
// #line 16 "../slam-kernel.c"

void stub_driver_init()
{
  s = NP;
  pended = 0;
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
  //BLAST	
  status = DriverEntry(& d, & u);
  if((NTSTATUS )status >= 0)
    {
      s = NP;
      pended = 0;
      compFptr = 0;
      compRegistered = 0;
      lowerDriverReturn = 0;      
      setEventCalled = 0;
      customIrp = 0;
      (pirp->IoStatus).Status = (NTSTATUS )0x00000000L;
      myStatus = (NTSTATUS )0x00000000L;
      if(irp_choice == 0)
	{
	  (pirp->IoStatus).Status = (NTSTATUS )0xC00000BBL;
	  myStatus = (NTSTATUS )0xC00000BBL;
	}
      //BLAST  
      status = DiskPerfAddDevice(& d, & devobj);
      stub_driver_init();
      if(! ((NTSTATUS )status >= 0))
	return - 1;
      
      switch(BLAST_NONDET)
	{
	case 0:
	  status = DiskPerfCreate(& devobj, pirp);
	  break;
	case 2:
	  status = DiskPerfDeviceControl(& devobj, pirp);
	  break;
	case 3:
	  status = DiskPerfDispatchPnp(& devobj, pirp);
	  break;
	case 4:
	  status = DiskPerfDispatchPower(& devobj, pirp);
	  break;
/*  Commented by BLAST team
        case 6:
	  status = DiskPerfWmi(& devobj, pirp);
	  break;
*/
        case 6:
	  status = DiskPerfWmi(& devobj, pirp);
	  break;
	case 12:
	  status = DiskPerfShutdownFlush(& devobj, pirp);
	  break;
	default :
	  return - 1;
	}
      if(we_should_unload)
	DiskPerfUnload(& d);
    }
  if(pended == 1 && s == NP)
    s = NP;
  else
    {
      if(pended == 1 && s == MPR3)
	s = MPR3;
      else
	{
	  if(s == UNLOADED || status == - 1){ }
	  else
	    {
              // TRACER
	      _ABORT((s != SKIP2) && (s != IPC) && (s != DC));
	      if(pended==1){	       
		_ABORT(status != 259);
	      }
	      else{
		if(s == DC)
		  _ABORT(status == 259);  
		else{
		  _ABORT(status != lowerDriverReturn);
		}
	      }

              // BLAST
/* 	      if(s != SKIP2 && s != IPC && s != DC) */
/* 		errorFn(); */
/* 	      else */
/* 		{ */
/* 		  if(pended == 1) */
/* 		    { */
/* 		      if(status != 259) */
/* 			errorFn(); */
/* 		    } */
/* 		  else */
/* 		    { */
/* 		      if(s == DC) */
/* 			{ */
/* 			  if(status == 259) */
/* 			    errorFn(); */
/* 			} */
/* 		      else */
/* 			{ */
			  
/* 			  if(status != lowerDriverReturn) */
/* 			    errorFn(); */
/* 			} */
/* 		    } */
/* 		} */

	    }
	}
      
    }
  return status;
}


char *  malloc(int i )
{
  int BLAST_NONDET ;
  if(BLAST_NONDET)
    {
      return (char *  )0;
    }
  else
    return (char *  )1;
}

PVOID ExAllocatePoolWithTag(POOL_TYPE PoolType , SIZE_T NumberOfBytes , ULONG Tag )	
{
  PVOID x ;
  x = malloc(NumberOfBytes);
  return x;
}
void ExFreePool(PVOID P ){}
PDEVICE_OBJECT IoAttachDeviceToDeviceStack(PDEVICE_OBJECT SourceDevice , 
					   PDEVICE_OBJECT TargetDevice )
{
  int BLAST_NONDET ;
  switch(BLAST_NONDET)
    {
    case 0:
      return TargetDevice;
    default :
      return (void *  )0;
    }
}

PIRP IoBuildDeviceIoControlRequest(ULONG IoControlCode ,
				   PDEVICE_OBJECT DeviceObject , PVOID InputBuffer , 
				   ULONG InputBufferLength , PVOID OutputBuffer , 
				   ULONG OutputBufferLength , BOOLEAN InternalDeviceIoControl , 
				   PKEVENT Event , PIO_STATUS_BLOCK IoStatusBlock )			
{
  int BLAST_NONDET ;
  customIrp = 1;
  switch(BLAST_NONDET)
    {
    case 0:
      return (void *  )malloc(sizeof(IRP ));
    default :
      return (void *  )0;
    }
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

void IoDeleteDevice(PDEVICE_OBJECT DeviceObject ){}
void IoDetachDevice(PDEVICE_OBJECT TargetDevice ){}

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
  return;
}

NTSTATUS IofCallDriver(PDEVICE_OBJECT DeviceObject , PIRP Irp )	
{
  int BLAST_NONDET ;
  NTSTATUS returnVal2 ;
  int compRetStatus ;
  PVOID lcontext ;
  if(compRegistered)
    {
      /*
	compRetStatus = (* compFptr)(DeviceObject, Irp, lcontext);
      */
      if (routine == 0) {
	compRetStatus = DiskPerfIrpCompletion(DeviceObject, Irp, lcontext);
      } else { 
	if (routine == 1) {
	  compRetStatus = DiskPerfIoCompletion(DeviceObject, Irp, lcontext);
	}
      }
      if(compRetStatus == (NTSTATUS )0xC0000016L)
	stubMoreProcessingRequired();
    }
  switch(BLAST_NONDET)
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
	  if(returnVal2 == 259)
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
  return;
}

void KeInitializeEvent(PRKEVENT Event , EVENT_TYPE Type , BOOLEAN State ){}	
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
  int BLAST_NONDET ;
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
/* 	  if(s == MPR3) */
/* 	    errorFn(); */
	}
    }
  switch(BLAST_NONDET)
    {
    case 0:
      return (NTSTATUS )0x00000000L;
    default :
      return (NTSTATUS )0xC0000001L;
    }
}

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
      if (routine == 0) {
	compRetStatus = DiskPerfIrpCompletion(DeviceObject, Irp, lcontext);
      } else { 
	if (routine == 1) {
	  compRetStatus = DiskPerfIoCompletion(DeviceObject, Irp, lcontext);
	}
      }
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
	  s = SKIP2; lowerDriverReturn = returnVal;
	  
	  // BLAST
/* 	  if(s == SKIP1) { */
/* 	    s = SKIP2; lowerDriverReturn = returnVal; */
/* 	  } */
/* 	  else */
/* 	    errorFn(); */
	}
    }
  return returnVal;
}

void PoStartNextPowerIrp(PIRP Irp ){}
NTSTATUS WmiSystemControl(PWMILIB_CONTEXT WmiLibInfo , 
			  PDEVICE_OBJECT DeviceObject , PIRP Irp , 
			  PSYSCTL_IRP_DISPOSITION IrpDisposition ) {

  int BLAST_NONDET;
  /* Commented by BLAST team
     switch(BLAST_NONDET) {
     case 0: return (NTSTATUS)0x00000000L;
     default: return (NTSTATUS)0xC0000001L;
     }
  */
  return (NTSTATUS)0x00000000L;
}

NTSTATUS IoWMIRegistrationControl(PDEVICE_OBJECT DeviceObject , ULONG Action ){
  NTSTATUS x; return x;
}

LONG InterlockedIncrement(PLONG Addend ){ LONG x; return x;}
LONG InterlockedDecrement(PLONG Addend ){ LONG x; return x;}
LARGE_INTEGER KeQueryPerformanceCounter(PLARGE_INTEGER PerformanceFrequency ){
  LARGE_INTEGER x; return x;
}
LONG InterlockedExchange(PLONG Target , LONG Value ){ LONG x; return x;}
NTSTATUS WmiCompleteRequest(PDEVICE_OBJECT DeviceObject , 
			    PIRP Irp , NTSTATUS
			    Status , ULONG BufferUsed , CCHAR PriorityBoost ){
  NTSTATUS x; return x;}
