// SAFE

/* 
  Search for TRACER keyword to see all changes done to the original
  BLAST version.
*/


/* BEGIN  TYPES */
typedef enum _EXCEPTION_DISPOSITION {
	ExceptionContinueExecution,
	ExceptionContinueSearch,
	ExceptionNestedException,
	ExceptionCollidedUnwind
} EXCEPTION_DISPOSITION ;

struct _EXCEPTION_RECORD ;
struct _CONTEXT ;
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
typedef long /*__int64*/ LONG64 , *  PLONG64 ;
typedef long /* __int64 */ INT64 , *  PINT64 ;
typedef unsigned long /* __int64 */ ULONG64 , *  PULONG64 ;
typedef unsigned long /* __int64 */ DWORD64 , *  PDWORD64 ;
typedef unsigned long /* __int64 */ UINT64 , *  PUINT64 ;
typedef void *  PVOID ;
typedef void *  PVOID64 ;
typedef char CHAR ;
typedef short SHORT ;
typedef long LONG ;
typedef wchar_t WCHAR ;
typedef WCHAR *  PWCHAR ;
typedef WCHAR *  LPWCH , *  PWCH ;
typedef /* const */ WCHAR *  LPCWCH , *  PCWCH ;
typedef WCHAR *  NWPSTR ;
typedef WCHAR *  LPWSTR , *  PWSTR ;
typedef /* const */ WCHAR *  LPCWSTR , *  PCWSTR ;
typedef CHAR *  PCHAR ;
typedef CHAR *  LPCH , *  PCH ;
typedef /* const */ CHAR *  LPCCH , *  PCCH ;
typedef CHAR *  NPSTR ;
typedef CHAR *  LPSTR , *  PSTR ;
typedef /* const */ CHAR *  LPCSTR , *  PCSTR ;
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
	/*__int64*/ long LowPart ;
	/*__int64*/ long HighPart ;
} FLOAT128 ;

typedef FLOAT128 *  PFLOAT128 ;
typedef /*__int64*/ long LONGLONG ;
typedef unsigned /*__int64*/ long ULONGLONG ;
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

typedef LARGE_INTEGER *  PLARGE_INTEGER ;
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

typedef ULARGE_INTEGER *  PULARGE_INTEGER ;
typedef struct _LUID {
	ULONG LowPart ;
	LONG HighPart ;
} LUID , *  PLUID ;


typedef ULONGLONG DWORDLONG ;
typedef DWORDLONG *  PDWORDLONG ;
typedef LARGE_INTEGER PHYSICAL_ADDRESS , *  PPHYSICAL_ADDRESS ;

typedef enum _EVENT_TYPE {
	NotificationEvent,
	SynchronizationEvent
} EVENT_TYPE ;
typedef enum _TIMER_TYPE {
	NotificationTimer,
	SynchronizationTimer
} TIMER_TYPE ;
typedef enum _WAIT_TYPE {
	WaitAll,
	WaitAny
} WAIT_TYPE ;

typedef CHAR *  PSZ ;
typedef const char *  PCSZ ;
typedef struct _STRING {
	USHORT Length ;
	USHORT MaximumLength ;
	PCHAR Buffer ;
} STRING ;

typedef STRING *  PSTRING ;
typedef STRING ANSI_STRING ;
typedef PSTRING PANSI_STRING ;
typedef STRING OEM_STRING ;
typedef PSTRING POEM_STRING ;
typedef struct _CSTRING {
	USHORT Length ;
	USHORT MaximumLength ;
	const char *  Buffer ;
} CSTRING ;


typedef CSTRING *  PCSTRING ;
typedef STRING CANSI_STRING ;
typedef PSTRING PCANSI_STRING ;
typedef struct _UNICODE_STRING {
	USHORT Length ;
	USHORT MaximumLength ;
	PWSTR Buffer ;
} UNICODE_STRING ;


typedef UNICODE_STRING *  PUNICODE_STRING ;
typedef const UNICODE_STRING *  PCUNICODE_STRING ;
typedef UCHAR BOOLEAN ;
typedef BOOLEAN *  PBOOLEAN ;
typedef struct _LIST_ENTRY {
	struct _LIST_ENTRY *  Flink ;
	struct _LIST_ENTRY *  Blink ;
} LIST_ENTRY , *  PLIST_ENTRY , *  PRLIST_ENTRY ;

typedef struct _SINGLE_LIST_ENTRY {
	struct _SINGLE_LIST_ENTRY *  Next ;
} SINGLE_LIST_ENTRY , *  PSINGLE_LIST_ENTRY ;

typedef struct LIST_ENTRY32 {
	ULONG Flink ;
	ULONG Blink ;
} LIST_ENTRY32 ;

typedef LIST_ENTRY32 *  PLIST_ENTRY32 ;
typedef struct LIST_ENTRY64 {
	ULONGLONG Flink ;
	ULONGLONG Blink ;
} LIST_ENTRY64 ;


typedef LIST_ENTRY64 *  PLIST_ENTRY64 ;

typedef struct _STRING32 {
	USHORT Length ;
	USHORT MaximumLength ;
	ULONG Buffer ;
} STRING32 ;

typedef STRING32 *  PSTRING32 ;
typedef STRING32 UNICODE_STRING32 ;
typedef UNICODE_STRING32 *  PUNICODE_STRING32 ;
typedef STRING32 ANSI_STRING32 ;
typedef ANSI_STRING32 *  PANSI_STRING32 ;
typedef struct _STRING64 {
	USHORT Length ;
	USHORT MaximumLength ;
	ULONGLONG Buffer ;
} STRING64 ;

typedef STRING64 *  PSTRING64 ;
typedef STRING64 UNICODE_STRING64 ;
typedef UNICODE_STRING64 *  PUNICODE_STRING64 ;
typedef STRING64 ANSI_STRING64 ;
typedef ANSI_STRING64 *  PANSI_STRING64 ;
typedef struct _OBJECT_ATTRIBUTES {
	ULONG Length ;
	HANDLE RootDirectory ;
	PUNICODE_STRING ObjectName ;
	ULONG Attributes ;
	PVOID SecurityDescriptor ;
	PVOID SecurityQualityOfService ;
} OBJECT_ATTRIBUTES ;

typedef OBJECT_ATTRIBUTES *  POBJECT_ATTRIBUTES ;

// #line 17 "C:/NTDDK/inc/guiddef.h"
typedef struct _GUID {
	unsigned long Data1 ;
	unsigned short Data2 ;
	unsigned short Data3 ;
	unsigned char Data4[8] ;
} GUID ;

typedef GUID *  LPGUID ;
typedef const GUID *  LPCGUID ;
typedef GUID IID ;
typedef IID *  LPIID ;
typedef GUID CLSID ;
typedef CLSID *  LPCLSID ;
typedef GUID FMTID ;
typedef FMTID *  LPFMTID ;

// #line 16 "C:/NTDDK/inc/string.h"
typedef unsigned int size_t ;
void * /*__cdecl*/ memcpy(void *  s, const void *  p, size_t t){
  void * x; return x;
}
void * /*__cdecl*/ memset(void *  s, int  p, size_t t){
  void * x; return x;
}
// #line 1233 "C:/NTDDK/inc/ntdef.h"
typedef struct _OBJECTID {
	GUID Lineage ;
	ULONG Uniquifier ;
} OBJECTID ;
struct _CONTEXT ;
struct _EXCEPTION_RECORD ;
typedef EXCEPTION_DISPOSITION ( *  PEXCEPTION_ROUTINE
	)(struct _EXCEPTION_RECORD *  ExceptionRecord , PVOID EstablisherFrame ,
	struct _CONTEXT *  ContextRecord , PVOID DispatcherContext ) ;
typedef UCHAR KIRQL ;
typedef KIRQL *  PKIRQL ;
typedef enum _NT_PRODUCT_TYPE {
	NtProductWinNt = 1,
	NtProductLanManNt,
	NtProductServer
} NT_PRODUCT_TYPE , *  PNT_PRODUCT_TYPE ;

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
typedef struct _ETHREAD *  PETHREAD ;
typedef struct _EPROCESS *  PEPROCESS ;
typedef struct _PEB *  PPEB ;
typedef struct _KINTERRUPT *  PKINTERRUPT ;
typedef struct _IO_TIMER *  PIO_TIMER ;
typedef struct _OBJECT_TYPE *  POBJECT_TYPE ;
typedef struct _CALLBACK_OBJECT *  PCALLBACK_OBJECT___0 ;
typedef struct _DEVICE_HANDLER_OBJECT *  PDEVICE_HANDLER_OBJECT ;
typedef struct _BUS_HANDLER *  PBUS_HANDLER ;
//extern PCCHAR KeNumberProcessors ;

typedef union _SLIST_HEADER {
	ULONGLONG Alignment ;
	struct  {
		SINGLE_LIST_ENTRY Next ;
		USHORT Depth ;
		USHORT Sequence ;
	}  ;
} SLIST_HEADER , *  PSLIST_HEADER ;

typedef CCHAR KPROCESSOR_MODE ;

typedef enum _MODE {
	KernelMode,
	UserMode,
	MaximumMode
} MODE ;

struct _KAPC ;
typedef void ( *  PKNORMAL_ROUTINE )(PVOID NormalContext , PVOID SystemArgument1
	, PVOID SystemArgument2 ) ;
typedef void ( *  PKKERNEL_ROUTINE )(struct _KAPC *  Apc , PKNORMAL_ROUTINE * 
	NormalRoutine , PVOID *  NormalContext , PVOID *  SystemArgument1 ,
	PVOID *  SystemArgument2 ) ;
typedef void ( *  PKRUNDOWN_ROUTINE )(struct _KAPC *  Apc ) ;
typedef BOOLEAN ( *  PKSYNCHRONIZE_ROUTINE )(PVOID SynchronizeContext ) ;
typedef BOOLEAN ( *  PKTRANSFER_ROUTINE )(void  ) ;
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
struct _KDPC ;
typedef void ( *  PKDEFERRED_ROUTINE )(struct _KDPC *  Dpc , PVOID
	DeferredContext , PVOID SystemArgument1 , PVOID SystemArgument2 ) ;
typedef enum _KDPC_IMPORTANCE {
	LowImportance,
	MediumImportance,
	HighImportance
} KDPC_IMPORTANCE ;
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
typedef NTSTATUS (/* __stdcall */ *  PRTL_QUERY_REGISTRY_ROUTINE )(PWSTR ValueName ,
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
// #line 2967
// #line 2974
// #line 2985
// #line 2998
// #line 3008
// #line 3019
// #line 3026
// #line 3042
// #line 3068
// #line 3077
// #line 3086
// #line 3097
// #line 3107
// #line 3124
// #line 3130
// #line 3136
// #line 3147
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
typedef void (/* __stdcall */ *  PIO_APC_ROUTINE )(PVOID ApcContext , PIO_STATUS_BLOCK
	IoStatusBlock , ULONG Reserved ) ;

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

// #line 4768
// #line 4774
// #line 4780
// #line 4786
// #line 4794
// #line 4802
// #line 4811
// #line 4818
// #line 4825
// #line 4832
// #line 4840
// #line 4848
// #line 4856
// #line 4862
// #line 4868
// #line 4874
// #line 4882
// #line 4890
// #line 4898
// #line 4905
// #line 4912
// #line 4919
// #line 4927
// #line 4935
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
//extern PVOID *  MmHighestUserAddress ;
//extern PVOID *  MmSystemRangeStart ;
//extern ULONG *  MmUserProbeAddress ;

// #line 5153
// #line 5166
// #line 5173
// #line 5181
// #line 5197
// #line 5204
// #line 5211
// #line 5222
// #line 5229
// #line 5252
// #line 5262
// #line 5271
// #line 5280
// #line 5287
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
// ANTLR does not support initialization of enumerated types ...
typedef enum _CM_SERVICE_NODE_TYPE {
	DriverType /* = 0x00000001 */,
	FileSystemType/*  = 0x00000002 */,
	Win32ServiceOwnProcess /* = 0x00000010 */,
	Win32ServiceShareProcess/*  = 0x00000020 */,
	AdapterType /* = 0x00000004 */,
	RecognizerType/*  = 0x00000008 */
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
	NormalError /* = 0x00000001 */,
	SevereError /* = 0x00000002 */,
	CriticalError /* = 0x00000003 */
} SERVICE_ERROR_TYPE ;

// #line 8172
typedef int CM_RESOURCE_TYPE ;

// #line 8198
typedef enum _CM_SHARE_DISPOSITION {
	CmResourceShareUndetermined = 0,
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
	ULONG Failed/*   : 1 */;
	ULONG ReadOnly /*  : 1 */;
	ULONG Removable /*  : 1 */;
	ULONG ConsoleIn /*  : 1 */;
	ULONG ConsoleOut /*  : 1 */;
	ULONG Input /*  : 1 */;
	ULONG Output/*   : 1 */;
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
	UCHAR Reserved0/*   : 1 */;
	UCHAR Type/*   : 2 */;
	UCHAR Shared/*   : 1 */;
	UCHAR Reserved1/*   : 1 */;
	UCHAR MoreEntries/*   : 1 */;
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
	UCHAR Interrupt/*   : 4 */;
	UCHAR Reserved/*   : 1 */;
	UCHAR LevelTriggered/*   : 1 */;
	UCHAR Shared/*   : 1 */;
	UCHAR MoreEntries/*   : 1 */;
} EISA_IRQ_DESCRIPTOR , *  PEISA_IRQ_DESCRIPTOR ;

typedef struct _EISA_IRQ_CONFIGURATION {
	EISA_IRQ_DESCRIPTOR ConfigurationByte ;
	UCHAR Reserved ;
} EISA_IRQ_CONFIGURATION , *  PEISA_IRQ_CONFIGURATION ;

// #line 8585
typedef struct _DMA_CONFIGURATION_BYTE0 {
	UCHAR Channel/*   : 3 */;
	UCHAR Reserved/*   : 3 */;
	UCHAR Shared/*   : 1 */;
	UCHAR MoreEntries /*  : 1 */;
} DMA_CONFIGURATION_BYTE0 ;

typedef struct _DMA_CONFIGURATION_BYTE1 {
	UCHAR Reserved0/*   : 2 */;
	UCHAR TransferSize/*   : 2 */;
	UCHAR Timing/*   : 2 */;
	UCHAR Reserved1/*   : 2 */;
} DMA_CONFIGURATION_BYTE1 ;

typedef struct _EISA_DMA_CONFIGURATION {
	DMA_CONFIGURATION_BYTE0 ConfigurationByte0 ;
	DMA_CONFIGURATION_BYTE1 ConfigurationByte1 ;
} EISA_DMA_CONFIGURATION , *  PEISA_DMA_CONFIGURATION ;

// #line 8609
typedef struct _EISA_PORT_DESCRIPTOR {
	UCHAR NumberPorts/*   : 5 */;
	UCHAR Reserved/*   : 1 */;
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
// #line 9332
// #line 9340
// #line 9347
// #line 9359
// #line 9365
// #line 9372
// #line 9380
// #line 9386
// #line 9393
// #line 9400
// #line 9415
// #line 9423
// #line 9429
// #line 9437
// #line 9445
// #line 9451
// #line 9463
// #line 9472
// #line 9483
// #line 9491
// #line 9497
// #line 9506
// #line 9514
// #line 9520
// #line 9527
// #line 9539
// #line 9545
// #line 9623
// #line 9629
// #line 9636
// #line 9642
// #line 9648
// #line 9656
// #line 9668
// #line 9681
// #line 9711
// #line 9720
// #line 9727
// #line 9737
// #line 9744
// #line 9754
// #line 9808
// #line 9815
// #line 9824
// #line 9830
// #line 9893
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

// #line 9934
// #line 9950
// #line 9956
// #line 9966
// #line 9973
// #line 9979
// #line 9985
// #line 9992
// #line 10002
// #line 10009
// #line 10020
// #line 10026
// #line 10037
// #line 10044
// #line 10051
//extern volatile KSYSTEM_TIME KeTickCount ;

typedef enum _MEMORY_CACHING_TYPE_ORIG {
	MmFrameBufferCached = 2
} MEMORY_CACHING_TYPE_ORIG ;

typedef enum _MEMORY_CACHING_TYPE {
	MmNonCached = 0,
	MmCached = 1,
	MmWriteCombined = MmFrameBufferCached,
	MmHardwareCoherentCached,
	MmNonCachedUnordered,
	MmUSWCCached,
	MmMaximumCacheType
} MEMORY_CACHING_TYPE ;

// #line 10074
//extern PBOOLEAN KdDebuggerNotPresent ;
//extern PBOOLEAN KdDebuggerEnabled ;

// #line 10087
// Some problems with ANTLR
//typedef struct _DBGKD_DEBUG_DATA_HEADER64 *  PDBGKD_DEBUG_DATA_HEADER64 ;

// #line 10096
// #line 10101
// #line 10106

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
	NonPagedPoolSession/*  = 32 */,
	PagedPoolSession /* = NonPagedPoolSession + 1 */,
	NonPagedPoolMustSucceedSession /* = PagedPoolSession + 1 */,
	DontUseThisTypeSession /* = NonPagedPoolMustSucceedSession + 1 */,
	NonPagedPoolCacheAlignedSession /* = DontUseThisTypeSession + 1 */,
	PagedPoolCacheAlignedSession /* = NonPagedPoolCacheAlignedSession + 1 */,
	NonPagedPoolCacheAlignedMustSSession /* = PagedPoolCacheAlignedSession + 1 */
} POOL_TYPE ;

// #line 10145
// #line 10152
// #line 10159
// #line 10195
typedef enum _EX_POOL_PRIORITY {
	LowPoolPriority,
	LowPoolPrioritySpecialPoolOverrun /* = 8 */,
	LowPoolPrioritySpecialPoolUnderrun /* = 9 */,
	NormalPoolPriority/*  = 16 */,
	NormalPoolPrioritySpecialPoolOverrun /* = 24 */,
	NormalPoolPrioritySpecialPoolUnderrun /* = 25 */,
	HighPoolPriority /* = 32 */,
	HighPoolPrioritySpecialPoolOverrun /* = 40 */,
	HighPoolPrioritySpecialPoolUnderrun /* = 41 */
} EX_POOL_PRIORITY ;

// #line 10208
// #line 10224
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
// #line 10279
// #line 10315
// #line 10322
// #line 10331
// #line 10348
// #line 10358
// #line 10367
// #line 10394
// #line 10406
// #line 10415
// #line 10424
// #line 10432
// #line 10440
// #line 10547
// #line 10555
// #line 10564
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
// #line 10637
// #line 10643
// #line 10729
typedef struct _PAGED_LOOKASIDE_LIST {
	GENERAL_LOOKASIDE L ;
	FAST_MUTEX Lock ;
} PAGED_LOOKASIDE_LIST , *  PPAGED_LOOKASIDE_LIST ;

// #line 10746
// #line 10754
// #line 10760
// #line 10856
// #line 10869
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
// #line 10916
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
// #line 10948
// #line 10956
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
// #line 11228
// #line 11234
// #line 11241
// #line 11248
// #line 11255
// #line 11262
// #line 11277
// #line 11284
// #line 11291
// #line 11298
// #line 11304
// #line 11310
// #line 11316
// #line 11330
// #line 11336
// #line 11360
// #line 11369
// #line 11378
// #line 11384
// #line 11394
// #line 11406
// #line 11417
// #line 11429
// typedef struct _CALLBACK_OBJECT *  PCALLBACK_OBJECT___0 ;

typedef void ( *  PCALLBACK_FUNCTION )(PVOID CallbackContext , PVOID Argument1 ,
	PVOID Argument2 ) ;

// #line 11438
// #line 11447
// #line 11455
// #line 11461
// #line 11474
typedef GUID UUID ;
// #line 11596
//extern PBOOLEAN Mm64BitPhysicalAddress ;

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
// #line 11906
// #line 11915
// #line 11921
// #line 11927
// #line 11934
// #line 11942
// #line 11970
typedef enum _MM_PAGE_PRIORITY {
	LowPagePriority,
	NormalPagePriority /* = 16 */,
	HighPagePriority /* = 32 */
} MM_PAGE_PRIORITY ;

// #line 11979
// #line 11990
// #line 11999
typedef struct _PHYSICAL_MEMORY_RANGE {
	PHYSICAL_ADDRESS BaseAddress ;
	LARGE_INTEGER NumberOfBytes ;
} PHYSICAL_MEMORY_RANGE , *  PPHYSICAL_MEMORY_RANGE ;

// #line 12011
// #line 12018
// #line 12024
// #line 12033
// #line 12041
// #line 12049
// #line 12057
// #line 12065
// #line 12072
// #line 12078
// #line 12084
// #line 12091
// #line 12101
// #line 12107
// #line 12116
// #line 12122
// #line 12129
// #line 12135
// #line 12143
// #line 12150
// #line 12158
// #line 12166
// #line 12172
// #line 12179
// #line 12185
// #line 12193
// #line 12201
// #line 12207
// #line 12215
// #line 12221
// #line 12229
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
// #line 12499
// #line 12513
// #line 12519
// #line 12535
// #line 12542
// #line 12552
// #line 12564
// #line 12571
typedef void ( *  PCREATE_PROCESS_NOTIFY_ROUTINE )(HANDLE ParentId , HANDLE
	ProcessId , BOOLEAN Create ) ;

// #line 12579
// #line 12585
typedef void ( *  PCREATE_THREAD_NOTIFY_ROUTINE )(HANDLE ProcessId , HANDLE
	ThreadId , BOOLEAN Create ) ;

// #line 12593
// #line 12602
typedef struct _IMAGE_INFO {
	union  {
		ULONG Properties ;
		struct  {
			ULONG ImageAddressingMode/*   : 8 */;
			ULONG SystemModeImage /*  : 1 */;
			ULONG ImageMappedToAllPids /*  : 1 */;
			ULONG Reserved /*  : 22 */;
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
// #line 12636
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
	IoQueryDeviceIdentifier /* = 0 */,
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
typedef BOOLEAN ( *  PFAST_IO_READ_COMPRESSED )(struct  _FILE_OBJECT *
	FileObject , PLARGE_INTEGER FileOffset , ULONG Length , ULONG LockKey ,
	PVOID Buffer , PMDL *  MdlChain , PIO_STATUS_BLOCK IoStatus ,
	/* TRACER */ int /* struct _COMPRESSED_DATA_INFO */ *  CompressedDataInfo , ULONG
	CompressedDataInfoLength , struct  _DEVICE_OBJECT *  DeviceObject ) ;

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
  PDRIVER_DISPATCH MajorFunction[28 /*0x1b + 1*/] ;
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
	ULONG DeviceD1  /* : 1 */;
	ULONG DeviceD2 /*  : 1 */;
	ULONG LockSupported /*  : 1 */;
	ULONG EjectSupported /*  : 1 */;
	ULONG Removable/*   : 1 */;
	ULONG DockDevice /*  : 1 */;
	ULONG UniqueID /*  : 1 */;
	ULONG SilentInstall /*  : 1 */;
	ULONG RawDeviceOK /*  : 1 */;
	ULONG SurpriseRemovalOK /*  : 1 */;
	ULONG WakeFromD0 /*  : 1 */;
	ULONG WakeFromD1 /*  : 1 */;
	ULONG WakeFromD2 /*  : 1 */;
	ULONG WakeFromD3 /*  : 1 */;
	ULONG HardwareDisabled/*   : 1 */;
	ULONG NonDynamic /*  : 1 */;
	ULONG WarmEjectSupported /*  : 1 */;
	ULONG Reserved  /* : 15 */;
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
	BusQueryDeviceSerialNumber /* = 4 */
} BUS_QUERY_ID_TYPE , *  PBUS_QUERY_ID_TYPE ;

typedef ULONG PNP_DEVICE_STATE , *  PPNP_DEVICE_STATE ;

// #line 14252
typedef enum  {
	DeviceTextDescription /* = 0 */,
	DeviceTextLocationInformation /* = 1 */
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
// #line 14727
// #line 14734
// #line 14776
// #line 14788
// #line 14798
// #line 14807
// #line 14814
// #line 14825
// #line 14839
// #line 14848
typedef struct _BOOTDISK_INFORMATION {
	LONGLONG BootPartitionOffset ;
	LONGLONG SystemPartitionOffset ;
	ULONG BootDeviceSignature ;
	ULONG SystemDeviceSignature ;
} BOOTDISK_INFORMATION , *  PBOOTDISK_INFORMATION ;

// #line 14863
// #line 14875
// #line 14886
// #line 14893
// #line 14903
// #line 14916
// #line 14934
// #line 14942
// #line 14957
// #line 14966
// #line 14986
// #line 14993
// #line 15002
// #line 15011
// #line 15049
// #line 15057
// #line 15063
// #line 15069
// #line 15077
// #line 15084
// #line 15092
// #line 15098
// #line 15104
// #line 15110
// #line 15141
// #line 15149
// #line 15156
// #line 15164
// #line 15173
// #line 15183
// #line 15228
// #line 15234
// #line 15246
// #line 15286
// #line 15326
// #line 15334
// #line 15343
// #line 15351
// #line 15390
// #line 15426
// #line 15439
// #line 15447
// #line 15455
// #line 15461
// #line 15469
// #line 15478
// #line 15484
// #line 15492
// #line 15499
// #line 15507
// #line 15641
// #line 15743
// #line 15754
typedef struct _IO_REMOVE_LOCK_TRACKING_BLOCK *  PIO_REMOVE_LOCK_TRACKING_BLOCK;

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
// #line 15808
// #line 15857
// #line 15893
// #line 15949
// #line 15956
// #line 15964
// #line 15975
// #line 15981
// #line 15988
// #line 15996
// #line 16003
// #line 16009
typedef struct _IO_WORKITEM *  PIO_WORKITEM ;

typedef void ( *  PIO_WORKITEM_ROUTINE )(PDEVICE_OBJECT DeviceObject , PVOID
	Context ) ;

// #line 16018
// #line 16023
// #line 16028
// #line 16040
// #line 16064
// #line 16072
// #line 16081
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

// #line 16381
// #line 16396
// #line 16403
// #line 16409
// #line 16427
// #line 16436
// #line 16446
// #line 16456
// #line 16465
// #line 16477

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
// #line 16524
// #line 16530
// #line 16537
typedef void ( *  PDEVICE_CHANGE_COMPLETE_CALLBACK )(PVOID Context ) ;

// #line 16543
// #line 16559
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
// #line 17114
// #line 17124
// #line 17137
// #line 17148
// #line 17159
// #line 17170
// #line 17196
// #line 17204
// #line 17215
// #line 17226
// #line 17237
// #line 17282
// #line 17291
// #line 17300
// #line 17315
// #line 17326
// #line 17333
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

typedef void ( *  PDEVICE_CONTROL_COMPLETION )(struct _DEVICE_CONTROL_CONTEXT * 
	ControlContext ) ;

typedef PBUS_HANDLER (/* _fastcall */ *  pHalHandlerForBus )(INTERFACE_TYPE
	InterfaceType , ULONG BusNumber ) ;

// #line 17355
typedef void (/* _fastcall */ *  pHalReferenceBusHandler )(PBUS_HANDLER BusHandler ) ;

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
// #line 17405
typedef NTSTATUS ( *  pHalSetSystemInformation )(HAL_SET_INFORMATION_CLASS
	InformationClass , ULONG BufferSize , PVOID Buffer ) ;

// #line 17413
// #line 17420
typedef void (/*_fastcall*/ *  pHalExamineMBR )(PDEVICE_OBJECT DeviceObject , ULONG
	SectorSize , ULONG MBRTypeIdentifier , PVOID *  Buffer ) ;

// #line 17429
typedef void (/*_fastcall*/ *  pHalIoAssignDriveLetters
	)(/* TRACER */ int /* struct _LOADER_PARAMETER_BLOCK */ *  LoaderBlock , PSTRING NtDeviceName ,
	PUCHAR NtSystemPath , PSTRING NtSystemPathString ) ;

// #line 17438
typedef NTSTATUS (/*_fastcall*/ *  pHalIoReadPartitionTable )(PDEVICE_OBJECT
	DeviceObject , ULONG SectorSize , BOOLEAN ReturnRecognizedPartitions ,
	struct _DRIVE_LAYOUT_INFORMATION *  *  PartitionBuffer ) ;

// #line 17447
typedef NTSTATUS (/*_fastcall*/ *  pHalIoSetPartitionInformation )(PDEVICE_OBJECT
	DeviceObject , ULONG SectorSize , ULONG PartitionNumber , ULONG
	PartitionType ) ;

// #line 17456
typedef NTSTATUS (/*_fastcall*/ *  pHalIoWritePartitionTable )(PDEVICE_OBJECT
	DeviceObject , ULONG SectorSize , ULONG SectorsPerTrack , ULONG
	NumberOfHeads , struct _DRIVE_LAYOUT_INFORMATION *  PartitionBuffer ) ;

// #line 17466
typedef NTSTATUS ( *  pHalQueryBusSlots )(PBUS_HANDLER BusHandler , ULONG
	BufferSize , PULONG SlotNumbers , PULONG ReturnedLength ) ;

// #line 17475
typedef NTSTATUS ( *  pHalInitPnpDriver )(void  ) ;

// #line 17481
// #line 17486
typedef struct _PM_DISPATCH_TABLE {
	ULONG Signature ;
	ULONG Version ;
	PVOID Function[1] ;
} PM_DISPATCH_TABLE , *  PPM_DISPATCH_TABLE ;

typedef NTSTATUS ( *  pHalInitPowerManagement )(PPM_DISPATCH_TABLE
	PmDriverDispatchTable , PPM_DISPATCH_TABLE *  PmHalDispatchTable ) ;

// #line 17499
// #line 17505
typedef struct _DMA_ADAPTER *  ( *  pHalGetDmaAdapter )(PVOID Context ,
	struct _DEVICE_DESCRIPTION *  DeviceDescriptor , PULONG
	NumberOfMapRegisters ) ;

// #line 17513
// #line 17520
typedef NTSTATUS ( *  pHalGetInterruptTranslator )(INTERFACE_TYPE
	ParentInterfaceType , ULONG ParentBusNumber , INTERFACE_TYPE
	BridgeInterfaceType , USHORT Size , USHORT Version ,
	PTRANSLATOR_INTERFACE Translator , PULONG BridgeBusNumber ) ;

// #line 17532
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
// extern PHAL_DISPATCH HalDispatchTable ;

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


// #line 17779
typedef struct _SCATTER_GATHER_LIST {
	ULONG NumberOfElements ;
	ULONG_PTR Reserved ;
	SCATTER_GATHER_ELEMENT Elements[] ;
} SCATTER_GATHER_LIST , *  PSCATTER_GATHER_LIST ;

// #line 17784

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
// #line 18135
// #line 18144
// #line 18154
// #line 18160
// #line 18171
// #line 18177
// #line 18185
// #line 18197
// #line 18209
// #line 18216
// #line 18222
// #line 18228
// #line 18235
typedef void ( *  PREQUEST_POWER_COMPLETE )(PDEVICE_OBJECT DeviceObject , UCHAR
	MinorFunction , POWER_STATE PowerState , PVOID Context ,
	PIO_STATUS_BLOCK IoStatus ) ;

// #line 18245
// #line 18256
// #line 18263
// #line 18271
// #line 18278
// #line 18285
// #line 18311
// #line 18321
typedef struct _OBJECT_HANDLE_INFORMATION {
	ULONG HandleAttributes ;
	ACCESS_MASK GrantedAccess ;
} OBJECT_HANDLE_INFORMATION , *  POBJECT_HANDLE_INFORMATION ;

// #line 18342
// #line 18350
// #line 18359
// #line 18366
// #line 18373
// #line 18402
typedef struct _PCI_SLOT_NUMBER {
	union  {
		struct  {
			ULONG DeviceNumber /*  : 5 */;
			ULONG FunctionNumber /*  : 3 */;
			ULONG Reserved /*  : 24 */;
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
// #line 19091
// #line 19103
// #line 19114
// #line 19125
// #line 19140
// #line 19155
// #line 19162
// #line 19171
// #line 19178
// #line 19187
// #line 19203
// #line 19211
// #line 19221
// #line 19234
// #line 19243
// #line 19250
// #line 19262
// #line 19274
// #line 19281
// #line 19292
// #line 19304
// #line 19316
// #line 19325
// #line 19334
// #line 19342
// #line 19349
// #line 19355

// #line 26 "C:/NTDDK/inc/ntddkbd.h"

// #line 73
//extern const GUID GUID_CLASS_KEYBOARD ;

// #line 80
typedef struct _KEYBOARD_INPUT_DATA {
	USHORT UnitId ;
	USHORT MakeCode ;
	USHORT Flags ;
	USHORT Reserved ;
	ULONG ExtraInformation ;
} KEYBOARD_INPUT_DATA , *  PKEYBOARD_INPUT_DATA ;

// #line 134
typedef struct _KEYBOARD_TYPEMATIC_PARAMETERS {
	USHORT UnitId ;
	USHORT Rate ;
	USHORT Delay ;
} KEYBOARD_TYPEMATIC_PARAMETERS , *  PKEYBOARD_TYPEMATIC_PARAMETERS ;

// #line 162
typedef struct _KEYBOARD_ID {
	UCHAR Type ;
	UCHAR Subtype ;
} KEYBOARD_ID , *  PKEYBOARD_ID ;

typedef struct _KEYBOARD_ATTRIBUTES {
	KEYBOARD_ID KeyboardIdentifier ;
	USHORT KeyboardMode ;
	USHORT NumberOfFunctionKeys ;
	USHORT NumberOfIndicators ;
	USHORT NumberOfKeysTotal ;
	ULONG InputDataQueueLength ;
	KEYBOARD_TYPEMATIC_PARAMETERS KeyRepeatMinimum ;
	KEYBOARD_TYPEMATIC_PARAMETERS KeyRepeatMaximum ;
} KEYBOARD_ATTRIBUTES , *  PKEYBOARD_ATTRIBUTES ;

// #line 236
typedef struct _KEYBOARD_INDICATOR_PARAMETERS {
	USHORT UnitId ;
	USHORT LedFlags ;
} KEYBOARD_INDICATOR_PARAMETERS , *  PKEYBOARD_INDICATOR_PARAMETERS ;

// #line 258
typedef struct _INDICATOR_LIST {
	USHORT MakeCode ;
	USHORT IndicatorFlags ;
} INDICATOR_LIST , *  PINDICATOR_LIST ;

// #line 274
typedef struct _KEYBOARD_INDICATOR_TRANSLATION {
	USHORT NumberOfIndicatorKeys ;
	INDICATOR_LIST IndicatorList[1] ;
} KEYBOARD_INDICATOR_TRANSLATION , *  PKEYBOARD_INDICATOR_TRANSLATION ;

// #line 307
typedef struct _KEYBOARD_UNIT_ID_PARAMETER {
	USHORT UnitId ;
} KEYBOARD_UNIT_ID_PARAMETER , *  PKEYBOARD_UNIT_ID_PARAMETER ;

// #line 330
typedef struct _KEYBOARD_IME_STATUS {
	USHORT UnitId ;
	ULONG ImeOpen ;
	ULONG ImeConvMode ;
} KEYBOARD_IME_STATUS , *  PKEYBOARD_IME_STATUS ;

// #line 26 "C:/NTDDK/inc/ntddmou.h"

// #line 63
//extern const GUID GUID_CLASS_MOUSE ;

// #line 69
typedef struct _MOUSE_INPUT_DATA {
	USHORT UnitId ;
	USHORT Flags ;
	union  {
		ULONG Buttons ;
		struct  {
			USHORT ButtonFlags ;
			USHORT ButtonData ;
		}  ;
	}  ;
	ULONG RawButtons ;
	LONG LastX ;
	LONG LastY ;
	ULONG ExtraInformation ;
} MOUSE_INPUT_DATA , *  PMOUSE_INPUT_DATA ;

// #line 162
typedef struct _MOUSE_ATTRIBUTES {
	USHORT MouseIdentifier ;
	USHORT NumberOfButtons ;
	USHORT SampleRate ;
	ULONG InputDataQueueLength ;
} MOUSE_ATTRIBUTES , *  PMOUSE_ATTRIBUTES ;

// #line 211
typedef struct _MOUSE_UNIT_ID_PARAMETER {
	USHORT UnitId ;
} MOUSE_UNIT_ID_PARAMETER , *  PMOUSE_UNIT_ID_PARAMETER ;

// #line 67 "kbdmou.h"
typedef struct _CONNECT_DATA {
	PDEVICE_OBJECT ClassDeviceObject ;
	PVOID ClassService ;
} CONNECT_DATA , *  PCONNECT_DATA ;

// #line 76
typedef void ( *  PSERVICE_CALLBACK_ROUTINE )(PVOID NormalContext , PVOID
	SystemArgument1 , PVOID SystemArgument2 , PVOID SystemArgument3 ) ;

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
// extern const GUID MSWmi_ProviderInfo_GUID ;

// #line 51
typedef struct _MSWmi_ProviderInfo {
	char VariableData[1] ;
} MSWmi_ProviderInfo , *  PMSWmi_ProviderInfo ;

// #line 63
// extern const GUID MSWmi_PnPDeviceId_GUID ;

// #line 66
typedef struct _MSWmi_PnPDeviceId {
	CHAR VariableData[1] ;
} MSWmi_PnPDeviceId , *  PMSWmi_PnPDeviceId ;

// #line 80
// extern const GUID MSWmi_PnPInstanceNames_GUID ;

// #line 83
typedef struct _MSWmi_PnPInstanceNames {
	ULONG Count ;
	WCHAR InstanceNameList[1] ;
} MSWmi_PnPInstanceNames , *  PMSWmi_PnPInstanceNames ;

// #line 102
// extern const GUID MSSmBios_RawSMBiosTables_GUID ;

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
// extern const GUID MSPower_DeviceEnable_GUID ;

// #line 147
typedef struct _MSPower_DeviceEnable {
	BOOLEAN Enable ;
} MSPower_DeviceEnable , *  PMSPower_DeviceEnable ;

// #line 162
// extern const GUID MSPower_DeviceWakeEnable_GUID ;

// #line 165
typedef struct _MSPower_DeviceWakeEnable {
	BOOLEAN Enable ;
} MSPower_DeviceWakeEnable , *  PMSPower_DeviceWakeEnable ;

// #line 179
// extern const GUID MSNdis_NetworkAddress_GUID ;

// #line 182
typedef struct _MSNdis_NetworkAddress {
	UCHAR Address[6] ;
} MSNdis_NetworkAddress , *  PMSNdis_NetworkAddress ;

// #line 196
// extern const GUID MSNdis_NetworkShortAddress_GUID ;

// #line 199
typedef struct _MSNdis_NetworkShortAddress {
	UCHAR Address[2] ;
} MSNdis_NetworkShortAddress , *  PMSNdis_NetworkShortAddress ;

// #line 213
// extern const GUID MSNdis_NetworkLinkSpeed_GUID ;

// #line 216
typedef struct _MSNdis_NetworkLinkSpeed {
	ULONG Outbound ;
	ULONG Inbound ;
} MSNdis_NetworkLinkSpeed , *  PMSNdis_NetworkLinkSpeed ;

// #line 236
// extern const GUID MSNdis_EnumerateAdapter_GUID ;

// #line 239
typedef struct _MSNdis_EnumerateAdapter {
	CHAR VariableData[1] ;
} MSNdis_EnumerateAdapter , *  PMSNdis_EnumerateAdapter ;

// #line 253
// extern const GUID MSNdis_NotifyAdapterRemoval_GUID ;

// #line 256
typedef struct _MSNdis_NotifyAdapterRemoval {
	CHAR VariableData[1] ;
} MSNdis_NotifyAdapterRemoval , *  PMSNdis_NotifyAdapterRemoval ;

// #line 270
// extern const GUID MSNdis_NotifyAdapterArrival_GUID ;

// #line 273
typedef struct _MSNdis_NotifyAdapterArrival {
	CHAR VariableData[1] ;
} MSNdis_NotifyAdapterArrival , *  PMSNdis_NotifyAdapterArrival ;

// #line 287
// extern const GUID MSNdis_NdisEnumerateVc_GUID ;

// #line 291
typedef struct _MSNdis_NdisEnumerateVc {
	char VariableData[1] ;
} MSNdis_NdisEnumerateVc , *  PMSNdis_NdisEnumerateVc ;

// #line 303
// extern const GUID MSNdis_NotifyVcRemoval_GUID ;

// #line 307
typedef struct _MSNdis_NotifyVcRemoval {
	char VariableData[1] ;
} MSNdis_NotifyVcRemoval , *  PMSNdis_NotifyVcRemoval ;

// #line 319
// extern const GUID MSNdis_NotifyVcArrival_GUID ;

// #line 323
typedef struct _MSNdis_NotifyVcArrival {
	char VariableData[1] ;
} MSNdis_NotifyVcArrival , *  PMSNdis_NotifyVcArrival ;

// #line 335
// extern const GUID MSNdis_HardwareStatus_GUID ;

// #line 338
typedef struct _MSNdis_HardwareStatus {
	ULONG NdisHardwareStatus ;
} MSNdis_HardwareStatus , *  PMSNdis_HardwareStatus ;

// #line 353
// extern const GUID MSNdis_MediaSupported_GUID ;

// #line 356
typedef struct _MSNdis_MediaSupported {
	ULONG NumberElements ;
	ULONG NdisMediaSupported[1] ;
} MSNdis_MediaSupported , *  PMSNdis_MediaSupported ;

// #line 375
// extern const GUID MSNdis_MediaInUse_GUID ;

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

// #line 26 "C:/NTDDK/inc/ntdd8042.h"

// #line 83
typedef NTSTATUS ( *  PI8042_SYNCH_READ_PORT )(PVOID Context , PUCHAR Value ,
	BOOLEAN WaitForACK ) ;

// #line 119
typedef NTSTATUS ( *  PI8042_SYNCH_WRITE_PORT )(PVOID Context , UCHAR Value ,
	BOOLEAN WaitForACK ) ;

// #line 131
typedef void ( *  PI8042_ISR_WRITE_PORT )(PVOID Context , UCHAR Value ) ;

// #line 142
typedef void ( *  PI8042_QUEUE_PACKET )(PVOID Context ) ;

// #line 151
typedef enum _TRANSMIT_STATE {
	Idle = 0,
	SendingBytes
} TRANSMIT_STATE ;

// #line 160
typedef struct _OUTPUT_PACKET {
	PUCHAR Bytes ;
	ULONG CurrentByte ;
	ULONG ByteCount ;
	TRANSMIT_STATE State ;
} OUTPUT_PACKET , *  POUTPUT_PACKET ;

typedef enum _MOUSE_STATE {
	MouseIdle,
	XMovement,
	YMovement,
	ZMovement,
	MouseExpectingACK,
	MouseResetting
} MOUSE_STATE , *  PMOUSE_STATE ;

// #line 204
typedef enum _MOUSE_RESET_SUBSTATE {
	ExpectingReset = 0,
	ExpectingResetId,
	ExpectingGetDeviceIdACK,
	ExpectingGetDeviceIdValue,
	ExpectingSetResolutionDefaultACK,
	ExpectingSetResolutionDefaultValueACK,
	ExpectingSetResolutionACK,
	ExpectingSetResolutionValueACK,
	ExpectingSetScaling1to1ACK,
	ExpectingSetScaling1to1ACK2,
	ExpectingSetScaling1to1ACK3,
	ExpectingReadMouseStatusACK,
	ExpectingReadMouseStatusByte1,
	ExpectingReadMouseStatusByte2,
	ExpectingReadMouseStatusByte3,
	StartPnPIdDetection,
	ExpectingLoopSetSamplingRateACK,
	ExpectingLoopSetSamplingRateValueACK,
	ExpectingPnpIdByte1,
	ExpectingPnpIdByte2,
	ExpectingPnpIdByte3,
	ExpectingPnpIdByte4,
	ExpectingPnpIdByte5,
	ExpectingPnpIdByte6,
	ExpectingPnpIdByte7,
	EnableWheel,
	Enable5Buttons,
	ExpectingGetDeviceId2ACK,
	ExpectingGetDeviceId2Value,
	ExpectingSetSamplingRateACK,
	ExpectingSetSamplingRateValueACK,
	ExpectingEnableACK,
	ExpectingFinalResolutionACK,
	ExpectingFinalResolutionValueACK,
	CustomHookStateMinimum = 100,
	CustomHookStateMaximum = 999,
	I8042ReservedMinimum = 1000
} MOUSE_RESET_SUBSTATE , *  PMOUSE_RESET_SUBSTATE ;

// #line 268
typedef BOOLEAN ( *  PI8042_MOUSE_ISR )(PVOID IsrContext , PMOUSE_INPUT_DATA
	CurrentInput , POUTPUT_PACKET CurrentOutput , UCHAR StatusByte , PUCHAR
	Byte , PBOOLEAN ContinueProcessing , PMOUSE_STATE MouseState ,
	PMOUSE_RESET_SUBSTATE ResetSubState ) ;

// #line 281
typedef struct _INTERNAL_I8042_HOOK_MOUSE {
	PVOID Context ;
	PI8042_MOUSE_ISR IsrRoutine ;
	PI8042_ISR_WRITE_PORT IsrWritePort ;
	PI8042_QUEUE_PACKET QueueMousePacket ;
	PVOID CallContext ;
} INTERNAL_I8042_HOOK_MOUSE , *  PINTERNAL_I8042_HOOK_MOUSE ;

// #line 321
typedef enum _KEYBOARD_SCAN_STATE {
	Normal,
	GotE0,
	GotE1
} KEYBOARD_SCAN_STATE , *  PKEYBOARD_SCAN_STATE ;

typedef NTSTATUS ( *  PI8042_KEYBOARD_INITIALIZATION_ROUTINE )(PVOID
	InitializationContext , PVOID SynchFuncContext , PI8042_SYNCH_READ_PORT
	ReadPort , PI8042_SYNCH_WRITE_PORT WritePort , PBOOLEAN
	TurnTranslationOn ) ;

// #line 337
typedef BOOLEAN ( *  PI8042_KEYBOARD_ISR )(PVOID IsrContext ,
	PKEYBOARD_INPUT_DATA CurrentInput , POUTPUT_PACKET CurrentOutput , UCHAR
	StatusByte , PUCHAR Byte , PBOOLEAN ContinueProcessing ,
	PKEYBOARD_SCAN_STATE ScanState ) ;

// #line 349
typedef struct _INTERNAL_I8042_HOOK_KEYBOARD {
	PVOID Context ;
	PI8042_KEYBOARD_INITIALIZATION_ROUTINE InitializationRoutine ;
	PI8042_KEYBOARD_ISR IsrRoutine ;
	PI8042_ISR_WRITE_PORT IsrWritePort ;
	PI8042_QUEUE_PACKET QueueKeyboardPacket ;
	PVOID CallContext ;
} INTERNAL_I8042_HOOK_KEYBOARD , *  PINTERNAL_I8042_HOOK_KEYBOARD ;

// #line 384
typedef struct _INTERNAL_I8042_START_INFORMATION {
	ULONG Size ;
	PKINTERRUPT InterruptObject ;
	ULONG Reserved[8] ;
} INTERNAL_I8042_START_INFORMATION , *  PINTERNAL_I8042_START_INFORMATION ;

// #line 58 "kbfiltr.h"
typedef struct _DEVICE_EXTENSION {
	PDEVICE_OBJECT Self ;
	PDEVICE_OBJECT PDO ;
	PDEVICE_OBJECT TopOfStack ;
	LONG EnableCount ;
	CONNECT_DATA UpperConnectData ;
	PVOID UpperContext ;
	PI8042_KEYBOARD_INITIALIZATION_ROUTINE UpperInitializationRoutine ;
	PI8042_KEYBOARD_ISR UpperIsrHook ;
	PI8042_ISR_WRITE_PORT IsrWritePort ;
	PI8042_QUEUE_PACKET QueueKeyboardPacket ;
	PVOID CallContext ;
	DEVICE_POWER_STATE DeviceState ;
	BOOLEAN Started ;
	BOOLEAN SurpriseRemoved ;
	BOOLEAN Removed ;
} DEVICE_EXTENSION , *  PDEVICE_EXTENSION ;
/* END  TYPES */

/* BEGIN  PROTOTYPES */
NTSTATUS KbFilter_AddDevice(PDRIVER_OBJECT DriverObject,PDEVICE_OBJECT BusDeviceObject ) ;
NTSTATUS KbFilter_CreateClose(PDEVICE_OBJECT DeviceObject,PIRP Irp ) ;
NTSTATUS KbFilter_DispatchPassThrough(PDEVICE_OBJECT DeviceObject , PIRP Irp ) ;
NTSTATUS KbFilter_InternIoCtl(PDEVICE_OBJECT DeviceObject , PIRP Irp ) ;
NTSTATUS KbFilter_IoCtl(PDEVICE_OBJECT DeviceObject , PIRP Irp ) ;
NTSTATUS KbFilter_PnP(PDEVICE_OBJECT DeviceObject , PIRP Irp ) ;
NTSTATUS KbFilter_Power(PDEVICE_OBJECT DeviceObject , PIRP Irp ) ;
NTSTATUS KbFilter_InitializationRoutine(PDEVICE_OBJECT DeviceObject , 
					PVOID SynchFuncContext,
					PI8042_SYNCH_READ_PORT ReadPort ,	
					PI8042_SYNCH_WRITE_PORT WritePort , 
					PBOOLEAN TurnTranslationOn ) ;
BOOLEAN KbFilter_IsrHook(PDEVICE_OBJECT DeviceObject , 
			 PKEYBOARD_INPUT_DATA CurrentInput ,
			 POUTPUT_PACKET CurrentOutput , UCHAR StatusByte , 
			 PUCHAR DataByte , PBOOLEAN ContinueProcessing , 
			 PKEYBOARD_SCAN_STATE ScanState) ;
void KbFilter_ServiceCallback(PDEVICE_OBJECT DeviceObject , 
			      PKEYBOARD_INPUT_DATA InputDataStart ,
			      PKEYBOARD_INPUT_DATA InputDataEnd , 
			      PULONG InputDataConsumed ) ;
void KbFilter_Unload(PDRIVER_OBJECT DriverObject ) ;
NTSTATUS DriverEntry(PDRIVER_OBJECT , PUNICODE_STRING ) ;


NTSTATUS IoCreateDevice(PDRIVER_OBJECT DriverObject ,
			ULONG DeviceExtensionSize , PUNICODE_STRING DeviceName , 
			ULONG DeviceType ,
			ULONG DeviceCharacteristics , BOOLEAN Exclusive ,
			PDEVICE_OBJECT *  DeviceObject ) ;
void IoDeleteDevice(PDEVICE_OBJECT DeviceObject ) ;
void IoDetachDevice(PDEVICE_OBJECT TargetDevice ) ;
NTSTATUS IofCallDriver(PDEVICE_OBJECT DeviceObject , PIRP Irp ) ;
void IofCompleteRequest(PIRP Irp , CCHAR PriorityBoost ) ;

void KeInitializeEvent(PRKEVENT Event , EVENT_TYPE Type , BOOLEAN State ) ;	
LONG KeSetEvent(PRKEVENT Event , KPRIORITY Increment ,BOOLEAN Wait ) ;
NTSTATUS KeWaitForSingleObject(PVOID Object , KWAIT_REASON WaitReason ,
			       KPROCESSOR_MODE WaitMode , BOOLEAN Alertable ,
			       PLARGE_INTEGER Timeout ) ;
	
NTSTATUS PoCallDriver(PDEVICE_OBJECT DeviceObject , PIRP Irp ) ;
void PoStartNextPowerIrp(PIRP Irp) ;	
/* END  PROTOTYPES */	
	

int s ;
int UNLOADED , NP , DC , SKIP1 , SKIP2 , MPR1 , MPR3 , IPC ;
int pended ;
PIO_COMPLETION_ROUTINE compFptr ;
int compRegistered ;
int lowerDriverReturn ;
int setEventCalled ;
int customIrp ;
int myStatus ;

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

NTSTATUS KbFilter_IoCtl(PDEVICE_OBJECT DeviceObject , PIRP Irp ){
  NTSTATUS x ; return x;
}
LONG InterlockedIncrement(PLONG Addend ){ LONG x; return x;}
LONG InterlockedDecrement(PLONG Addend ){ LONG x; return x;}

NTSTATUS KbFilter_InitializationRoutine(PDEVICE_OBJECT DeviceObject , 
					PVOID SynchFuncContext , 
					PI8042_SYNCH_READ_PORT ReadPort ,	
					PI8042_SYNCH_WRITE_PORT WritePort , 
					PBOOLEAN TurnTranslationOn )
{
  PDEVICE_EXTENSION devExt ;
  NTSTATUS status;

  status = (NTSTATUS )0x00000000L;
  devExt = DeviceObject->DeviceExtension;
  if(devExt->UpperInitializationRoutine)
    {
      status = (* devExt->UpperInitializationRoutine)(devExt->UpperContext,
						      SynchFuncContext, ReadPort, WritePort,
						      TurnTranslationOn);
      if(! ((NTSTATUS )status >= 0))
	{
	  return status;
	}
    }
  * TurnTranslationOn = 1;
  return status;
}

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

NTSTATUS KbFilter_AddDevice(PDRIVER_OBJECT Driver , PDEVICE_OBJECT PDO )
{
  PDEVICE_EXTENSION devExt ;
  IO_ERROR_LOG_PACKET errorLogEntry ;
  PDEVICE_OBJECT device ;
  NTSTATUS status;

  status = (NTSTATUS ) 0x00000000L;
  status = IoCreateDevice(Driver, sizeof(DEVICE_EXTENSION ), (void *  )0,
			  0x0000000b, 0, 0, & device);
  
  if(! ((NTSTATUS )status >= 0))
    {
      return status;
    }
  
  /*
    memset(device->DeviceExtension, 0, sizeof(DEVICE_EXTENSION ));
  */
  devExt = (PDEVICE_EXTENSION )device->DeviceExtension;
  devExt->TopOfStack = IoAttachDeviceToDeviceStack(device, PDO);
  devExt->Self = device;
  devExt->PDO = PDO;
  devExt->DeviceState = PowerDeviceD0;
  devExt->SurpriseRemoved = 0;
  devExt->Removed = 0;
  devExt->Started = 0;
  device->Flags |= 0x00000004 | 0x00002000;
  // device->Flags &= ~ 0x00000080;
  return status;
}

NTSTATUS KbFilter_CreateClose(PDEVICE_OBJECT DeviceObject , PIRP Irp )
{
  PIO_STACK_LOCATION irpStack ;
  NTSTATUS status ;
  PDEVICE_EXTENSION devExt ;
  int tmp__1, tmp__2;
  
  irpStack = ((Irp->Tail).Overlay).CurrentStackLocation;
  devExt = (PDEVICE_EXTENSION )DeviceObject->DeviceExtension;
  status = (Irp->IoStatus).Status;
  status = myStatus;
  switch(irpStack->MajorFunction)
    {
    case 0x00:
      if((void *  )0 == (devExt->UpperConnectData).ClassService)
	status = (NTSTATUS )0xC0000184L;
      else
	{
	  tmp__1 = InterlockedIncrement(& devExt->EnableCount);
	  if(tmp__1 == 1){}			
	}
      break;
    case 0x02:
      tmp__2 = InterlockedDecrement(& devExt->EnableCount);
      if(0 == tmp__2){}
      break;
    }
  (Irp->IoStatus).Status = status;
  myStatus = status;
  return KbFilter_DispatchPassThrough(DeviceObject, Irp);
}

NTSTATUS KbFilter_Complete(PDEVICE_OBJECT DeviceObject , PIRP Irp , PVOID Context)	
{
  PKEVENT event ;
  event = (PKEVENT )Context;
  
  DeviceObject;
  Irp;
  KeSetEvent(event, 0, 0);
  return (NTSTATUS )0xC0000016L;
}


NTSTATUS KbFilter_DispatchPassThrough(PDEVICE_OBJECT DeviceObject , PIRP Irp )
{
  PIO_STACK_LOCATION irpStack
    = ((Irp->Tail).Overlay).CurrentStackLocation;
  /* BLAST */  
  /*   if (s != NP) */
  /*   errorFn(); */
  /*   else */
  /*     s = SKIP1; */
    
  /* TRACER */
  //_ABORT(s != NP);
  s = SKIP1;

  Irp->CurrentLocation++;
  ((Irp->Tail).Overlay).CurrentStackLocation++;
  return IofCallDriver(((PDEVICE_EXTENSION
			 )DeviceObject->DeviceExtension)->TopOfStack, Irp);
}

NTSTATUS KbFilter_InternIoCtl(PDEVICE_OBJECT DeviceObject , PIRP Irp )
{
  PIO_STACK_LOCATION irpStack ;
  PDEVICE_EXTENSION devExt ;
  PINTERNAL_I8042_HOOK_KEYBOARD hookKeyboard ;
  KEVENT event ;
  ULONG tmp__1;
  PCONNECT_DATA connectData ;
  NTSTATUS status;
 
 status = (NTSTATUS ) 0x00000000L;
 
 devExt = (PDEVICE_EXTENSION )DeviceObject->DeviceExtension;
 (Irp->IoStatus).Information = 0;
 irpStack = ((Irp->Tail).Overlay).CurrentStackLocation;
 
 tmp__1 = ((irpStack->Parameters).DeviceIoControl).IoControlCode;
 switch(tmp__1)
   {
   case 1 /*0x0000000b << 16 | 0 << 14 | 0x0080 << 2 | 3*/:
     if((devExt->UpperConnectData).ClassService != (void *  )0)
       {
	 status = (NTSTATUS )0xC0000043L;
	 break;
       }
     else
       {
	 if(((irpStack->Parameters).DeviceIoControl).InputBufferLength
	    < sizeof(CONNECT_DATA ))
	   {
	     status = (NTSTATUS )0xC000000DL;
	     break;
	   }
       }
     connectData = (PCONNECT_DATA)((irpStack->Parameters).DeviceIoControl).Type3InputBuffer;
     devExt->UpperConnectData = * connectData;
     connectData->ClassDeviceObject = devExt->Self;
     connectData->ClassService = KbFilter_ServiceCallback;
     break;
   case 2 /*0x0000000b << 16 | 0 << 14 | 0x0100 << 2 | 3*/:
     status = (NTSTATUS )0xC0000002L;
     break;
   case 3 /*0x0000000b << 16 | 0 << 14 | 0x0FF0 << 2 | 3*/:
     if(((irpStack->Parameters).DeviceIoControl).InputBufferLength <
	sizeof(INTERNAL_I8042_HOOK_KEYBOARD ))
       {
	 status = (NTSTATUS )0xC000000DL;
	 break;
       }
     hookKeyboard = (PINTERNAL_I8042_HOOK_KEYBOARD)((irpStack->Parameters).DeviceIoControl).Type3InputBuffer;
     devExt->UpperContext = hookKeyboard->Context;
     
     hookKeyboard->Context = (PVOID )DeviceObject;
     if(hookKeyboard->InitializationRoutine)
       {
	 devExt->UpperInitializationRoutine =
	   hookKeyboard->InitializationRoutine;
       }
     //hookKeyboard->InitializationRoutine = (PI8042_KEYBOARD_INITIALIZATION_ROUTINE)KbFilter_InitializationRoutine; 
     if(hookKeyboard->IsrRoutine)
       {
	 devExt->UpperIsrHook = hookKeyboard->IsrRoutine;
       }
     hookKeyboard->IsrRoutine = (PI8042_KEYBOARD_ISR)KbFilter_IsrHook;
     devExt->IsrWritePort = hookKeyboard->IsrWritePort;
     devExt->QueueKeyboardPacket = hookKeyboard->QueueKeyboardPacket;
     devExt->CallContext = hookKeyboard->CallContext;
     status = (NTSTATUS )0x00000000L;
     break;
     
   case 4 /* 0x0000000b << 16 | 0 << 14 | 0x0000 << 2 | 0 */:
   case 5 /* 0x0000000b << 16 | 0 << 14 | 0x0020 << 2 | 0 */:
   case 6 /* 0x0000000b << 16 | 0 << 14 | 0x0010 << 2 | 0 */:
   case 7 /* 0x0000000b << 16 | 0 << 14 | 0x0002 << 2 | 0 */:
   case 8 /* 0x0000000b << 16 | 0 << 14 | 0x0008 << 2 | 0 */:
   case 9 /* 0x0000000b << 16 | 0 << 14 | 0x0001 << 2 | 0 */:
     break;
   default:
     break;
   } /* end of switch */
 
 if(! ((NTSTATUS )status >= 0))
   {      
     (Irp->IoStatus).Status = status;
     myStatus = status;
     IofCompleteRequest(Irp, 0);
     return status;
   }
 return KbFilter_DispatchPassThrough(DeviceObject, Irp);
}

NTSTATUS KbFilter_PnP(PDEVICE_OBJECT DeviceObject , PIRP Irp )
{
  PDEVICE_EXTENSION devExt ;
  PIO_STACK_LOCATION irpStack ;
  NTSTATUS status;
  KIRQL oldIrql ;
  KEVENT event ;
  UCHAR tmp__1;

  status = (NTSTATUS ) 0x00000000L;
  devExt = (PDEVICE_EXTENSION )DeviceObject->DeviceExtension;
  irpStack = ((Irp->Tail).Overlay).CurrentStackLocation;
  
  tmp__1 = irpStack->MinorFunction;
  switch(tmp__1)
    {
    case 0 /*0x00*/:
      {
	PIO_STACK_LOCATION irpSp0 ;
	PIO_STACK_LOCATION nextIrpSp ;
	irpSp0 = ((Irp->Tail).Overlay).CurrentStackLocation;		  
	nextIrpSp = ((Irp->Tail).Overlay).CurrentStackLocation - 1;	  	  
	memcpy(nextIrpSp, irpSp0, (LONG )((LONG_PTR )(&
			      ((IO_STACK_LOCATION * )0)->CompletionRoutine)));			       
	
	nextIrpSp->Control = 0;      
	KeInitializeEvent(& event, NotificationEvent, 0);	
	/* BLAST */
	/* 	if(s != NP)	     */
	/* 	errorFn(); */
	/* 	else{ */
	/* 	  if(compRegistered != 0) */
	/* 	    errorFn(); */
	/* 	  else */
	/* 	    { */
	/* 	      compRegistered = 1; */
	/* 	      compFptr = KbFilter_Complete; */
	/* 	    } */
	/* 	}	 */

	/* TRACER */
	//_ABORT((s != NP) || (compRegistered != 0));
	compRegistered = 1;
	compFptr = KbFilter_Complete;
	{
	  PIO_STACK_LOCATION irpSp ;
	  irpSp = ((Irp->Tail).Overlay).CurrentStackLocation- 1;	               
	  irpSp->CompletionRoutine =(PIO_COMPLETION_ROUTINE)KbFilter_Complete;	      	       
	  irpSp->Context = & event;
	  irpSp->Control = 0;
	  //if(1)
	  //  {
	      irpSp->Control = 0x40;
	  //  }
	  //if(1)
	  //  {
	      irpSp->Control |= 0x80;
	  //  }	    
	  //if(1)
	  //  {
	      irpSp->Control |= 0x20;
	  //  }
	}
	status = IofCallDriver(devExt->TopOfStack, Irp);
	if((NTSTATUS )0x00000103L == status)
	  {
	    KeWaitForSingleObject(& event, Executive,
				  KernelMode, 0, (void *  )0);
	  }
	if((NTSTATUS )status >= 0 && (NTSTATUS )myStatus >= 0)
	  {
	    devExt->Started = 1;
	    devExt->Removed = 0;
	    devExt->SurpriseRemoved = 0;
	  }
	(Irp->IoStatus).Status = status;
	myStatus = status;
	(Irp->IoStatus).Information = 0;
	IofCompleteRequest(Irp, 0);   
	break;
      }
    case 23 /*0x17*/:
      devExt->SurpriseRemoved = 1;
      /* BLAST */      
      /*       if(s != NP) */
      /* 	errorFn(); */
      /*       else */
      /* 	s = SKIP1; */
      
      /* TRACER */
      //_ABORT(s != NP);
      s = SKIP1;      
      
      Irp->CurrentLocation++;
      ((Irp->Tail).Overlay).CurrentStackLocation++;
      status = IofCallDriver(devExt->TopOfStack, Irp);
      break;
    case 2 /*0x02*/:
      devExt->Removed = 1;
      /* BLAST */
      /*       if(s != NP) */
      /* 	errorFn(); */
      /*       else */
      /* 	s = SKIP1;       */
      
      /* TRACER */
      //_ABORT(s != NP);
      s = SKIP1;      

      Irp->CurrentLocation++;
      ((Irp->Tail).Overlay).CurrentStackLocation++;
      IofCallDriver(devExt->TopOfStack, Irp);
      IoDetachDevice(devExt->TopOfStack);
      IoDeleteDevice(DeviceObject);
      status = (NTSTATUS ) 0x00000000L;
      break;
    case 0x01:
    case 0x05:
    case 0x03:
    case 0x06:
    case 0x0D:
    case 0x04:
    case 0x07:
    case 0x08:
    case 0x09:
    case 0x0C:
    case 0x0A :
    case 0x0B:
    case 0x0F :
    case 0x10 :
    case  0x11:
    case 0x12 :
    case  0x13:
    case  0x14:
    default :

      /* BLAST */
      /*       if(s != NP) */
      /* 	  errorFn(); */
      /*       else */
      /* 	s = SKIP1; */
      
      /* TRACER */
      //_ABORT(s != NP);
      s = SKIP1;      

      Irp->CurrentLocation++;
      ((Irp->Tail).Overlay).CurrentStackLocation++;
      status = IofCallDriver(devExt->TopOfStack, Irp);
      break;
    }
  return status;
}

NTSTATUS KbFilter_Power(PDEVICE_OBJECT DeviceObject , PIRP Irp )
{
  PIO_STACK_LOCATION irpStack ;
  PDEVICE_EXTENSION devExt ;
  POWER_STATE powerState ;
  POWER_STATE_TYPE powerType ;
  devExt = (PDEVICE_EXTENSION )DeviceObject->DeviceExtension;
  irpStack = ((Irp->Tail).Overlay).CurrentStackLocation;
  powerType = ((irpStack->Parameters).Power).Type;
  powerState = ((irpStack->Parameters).Power).State;
  switch(irpStack->MinorFunction)
    {
    case 0x02:
      if(powerType == DevicePowerState)
	{
	  devExt->DeviceState = powerState.DeviceState;
	}
    case 0x01:
    case 0x00:
    case 0x03:
    default :
      break;
    }
  PoStartNextPowerIrp(Irp);

  /* BLAST */
  /*   if(s != NP) */
  /*   errorFn(); */
  /*   else */
  /*     s = SKIP1; */
  
  /* TRACER */
  //_ABORT(s != NP);
  s = SKIP1;  

  Irp->CurrentLocation++;
  ((Irp->Tail).Overlay).CurrentStackLocation++;
  return PoCallDriver(devExt->TopOfStack, Irp);
}

BOOLEAN KbFilter_IsrHook(PDEVICE_OBJECT DeviceObject , 
			 PKEYBOARD_INPUT_DATA CurrentInput ,
			 POUTPUT_PACKET CurrentOutput , UCHAR StatusByte , 
			 PUCHAR DataByte ,
			 PBOOLEAN ContinueProcessing , 
			 PKEYBOARD_SCAN_STATE ScanState)			 
{
  PDEVICE_EXTENSION devExt ;
  BOOLEAN retVal = 1;
  devExt = DeviceObject->DeviceExtension;
  if(devExt->UpperIsrHook)
    {
      retVal = (* devExt->UpperIsrHook)(devExt->UpperContext,
					CurrentInput, CurrentOutput, StatusByte, DataByte,
					ContinueProcessing, ScanState);

      if(! retVal || ! * ContinueProcessing)
	{
	  return retVal;
	}
    }
  * ContinueProcessing = 1;
  return retVal;
}

void KbFilter_ServiceCallback(PDEVICE_OBJECT DeviceObject , 
			      PKEYBOARD_INPUT_DATA InputDataStart ,
			      PKEYBOARD_INPUT_DATA InputDataEnd , 
			      PULONG InputDataConsumed )
{

  PDEVICE_EXTENSION devExt ;  
  devExt = (PDEVICE_EXTENSION )DeviceObject->DeviceExtension;
  
  (* (PSERVICE_CALLBACK_ROUTINE
      )(devExt->UpperConnectData).ClassService)((devExt->UpperConnectData
						 ).ClassDeviceObject, InputDataStart, InputDataEnd,
						InputDataConsumed);
}

void KbFilter_Unload(PDRIVER_OBJECT Driver )
{
  //Driver;
}


char *  malloc(int i )
{
  int BLAST_NONDET;

  if(BLAST_NONDET)
    return (char *  )0;
  else
    return (char *  )1;
}

NTSTATUS IoCreateDevice(PDRIVER_OBJECT DriverObject ,
	  ULONG DeviceExtensionSize , PUNICODE_STRING DeviceName , 
	  ULONG DeviceType,ULONG DeviceCharacteristics , BOOLEAN Exclusive ,	  
	  PDEVICE_OBJECT *  DeviceObject )
{
  int BLAST_NONDET ;
  switch(BLAST_NONDET)
    {
    case 0:
      * DeviceObject = (void *  )malloc(sizeof(DEVICE_OBJECT ));
      return (NTSTATUS ) 0x00000000L;
    default :
      return (NTSTATUS ) 0xC0000001L;
    }
}

void IoDeleteDevice(PDEVICE_OBJECT DeviceObject ){}
void IoDetachDevice(PDEVICE_OBJECT TargetDevice ){}


void stubMoreProcessingRequired()
{
  /* BLAST */
  /* 	if(s != NP) */
  /* 	  errorFn(); */
  /* 	else */
  /* 	  s = MPR1; */

  /* TRACER */
  //_ABORT(s != NP);
  s = MPR1;  
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
      compRetStatus = KbFilter_Complete(DeviceObject, Irp, lcontext);
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
  /* TRACER */
  if(s == NP)
    {
      s = IPC;
      //_ABORT(s!=NP);  // This added by TRACER ?!?
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
	  /* BLAST */
	  /* 	  if(s != SKIP1) */
	  /* 	    errorFn(); */
	  /* 	  else */
	  /* 	    { */
	  /* 	      s = SKIP2; */
	  /* 	      lowerDriverReturn = returnVal2; */
	  /* 	    } */

	  /* TRACER */
	  //_ABORT(s != SKIP1);
	  s = SKIP2;
	  lowerDriverReturn = returnVal2;	  
	}
    }
  return returnVal2;
}

void IofCompleteRequest(PIRP Irp , CCHAR PriorityBoost )
{
  /* BLAST */
  /*   if(s != NP) */
  /*   errorFn(); */
  /*   else */
  /*     s = DC; */

  /* TRACER */
  //_ABORT(s != NP);
  s = DC;
}



void KeInitializeEvent(PRKEVENT Event,EVENT_TYPE Type, BOOLEAN State ){}
LONG KeSetEvent(PRKEVENT Event , KPRIORITY Increment,BOOLEAN Wait )	
{
  LONG l ;
  setEventCalled = 1;
  return l;
}

NTSTATUS KeWaitForSingleObject(PVOID Object , KWAIT_REASON WaitReason,			       
			       KPROCESSOR_MODE WaitMode,BOOLEAN Alertable,
			       PLARGE_INTEGER Timeout) 	
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
	  /* BLAST */
	  /* 	  if(s == MPR3) */
	  /* 	    errorFn(); */

	  /* TRACER */
	  //_ABORT(s == MPR3);
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
      compRetStatus = KbFilter_Complete(DeviceObject, Irp, lcontext);
      if(compRetStatus == (NTSTATUS )0xC0000016L)
	stubMoreProcessingRequired();
    }
  switch(BLAST_NONDET)
    {
    case 0:
      returnVal = (NTSTATUS ) 0x00000000L;
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
	  /* BLAST */
	  /* 	  if(s != SKIP1) { */
	  /* 	    errorFn(); */
	  /* 	  } */
	  /* 	  else{ */
	  /* 	    s = SKIP2; */
	  /* 	    lowerDriverReturn = returnVal; */
	  /* 	  }	     */
	  /*TRACER */
	  //_ABORT(s != SKIP1);
	  s = SKIP2;
	  lowerDriverReturn = returnVal;
	}
    }
  return returnVal;
}

void PoStartNextPowerIrp(PIRP Irp ){}


/*** BEGIN MAIN ***/
extern NTSTATUS DriverEntry(PDRIVER_OBJECT , PUNICODE_STRING ) ;
IRP *  pirp ;

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
  PIRP irp;
  int BLAST_NONDET ;
  int idx ;
  int irp_choice ;
  DEVICE_OBJECT devobj ;
  pirp = &irp;
  _BLAST_init();        
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
      
      (pirp->IoStatus).Status = (NTSTATUS ) 0x00000000L;
      myStatus = (NTSTATUS ) 0x00000000L;
      if(irp_choice == 0)
	{
	  (pirp->IoStatus).Status = (NTSTATUS )0xC00000BBL;
	  myStatus = (NTSTATUS )0xC00000BBL;
	}
      status = KbFilter_AddDevice(& d, & devobj);
      stub_driver_init();
      if(! ((NTSTATUS )status >= 0))
	return - 1;
      
      switch(BLAST_NONDET)
	{
	case 0:
	  {
	    status = KbFilter_CreateClose(& devobj, pirp);
	  }
	  break;
	case 1:
	  {
	    status = KbFilter_CreateClose(& devobj, pirp);
	  }
	  break;
	case 2:
	  {
	    status = KbFilter_IoCtl(& devobj, pirp);
	  }
	  break;
	case 3:
	  {
	    status = KbFilter_PnP(& devobj, pirp);
	  }
	  break;
	case 4:
	  {
	    status = KbFilter_Power(& devobj, pirp);
	  }
	  break;
	case 8:
	  {
	    status = KbFilter_InternIoCtl(& devobj, pirp);
	  }
	  break;
	default :
	  return - 1;
	}

      if(we_should_unload)
	{
	  KbFilter_Unload(& d);
	}
    }

  /*RETPT:*/
  {
    if(pended == 1 && s == NP)
      s = NP;
    else
      {
	if(pended == 1 && s == MPR3)
	  s = MPR3;
	else
	  {
	    if(s == UNLOADED || status == - 1){}	   	      
	    else
	      {
		if(s != SKIP2 && s != IPC && s != DC){
		  //BLAST slice	errorFn(); //BUG 2
		}
		else
		  {		    
		    if(pended == 1)
		      {
			/* BLAST */
			/* if(status != 259) */
			/*   errorFn(); */

			/* TRACER */
			//_ABORT(status != 259);
		      }
		    else
		      {
			if(s == DC)
			  {
			    if(status == 259){
			      //BLAST slice errorFn(); //BUG 1
			    }
			  }
			else
			  {
			    if(status != lowerDriverReturn){
			      //BLAST sliced	errorFn();
			    }
			  }
		      }
		  }
	      }
	  }
      }
  }
  return status;
} /* end of main */

/*** END MAIN ***/









