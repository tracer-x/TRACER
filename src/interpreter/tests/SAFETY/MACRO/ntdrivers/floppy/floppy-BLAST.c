// SAFE 
/*
 IMPORTANT NOTES:  

 - FlConfigCallBack is passed as an argument to
   IoQueryDeviceDescription which is a stub done originally by BLAST
   team. This stub does not call FlConfigCallBack.

 - FloppyThread is the big one but not executed neither because it is
   also passed as an argument to PsCreateSystemThread which is another
   stub done by BLAST team.

 - Other functions not executed:
   + FloppyThread
      + FlFinishOperation
      + FlStartDrive
        + FlDatarateSpecifyConfigure 
          + FlRecalibrateDrive
        + DetermineMediaType
           + FlReadWrite
              + FlReadWriteTrack (recursive call):
                + FlInterpretError 
              + FlConsolidateMediaTypeWithBootSector
           + FlCheckBootSector
      + FlFormat
   some other minor functions.

  As a consequence of not executing FloppyThread the search space is
  MUCH smaller that it should be. We are not aware that BLAST team ran
  this function neither.
*/

typedef unsigned int size_t ;
typedef unsigned short wchar_t ;
typedef wchar_t wint_t ;
typedef wchar_t wctype_t ;
typedef char *  va_list ;
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
typedef struct _iobuf FILE ;
// #line 184
//extern FILE _iob[] ;
// #line 198
// #line 239
// #line 245
// #line 248
// #line 255
// #line 258
// #line 269
// #line 272
// #line 431

// #pragma pack(pop)
// #line 16 "C:/Program Files/Microsoft Visual Studio/VC98/include/excpt.h"

// #pragma once
// #line 32

// #pragma pack(push, 8)
// #line 72
typedef enum _EXCEPTION_DISPOSITION {
	ExceptionContinueExecution,
	ExceptionContinueSearch,
	ExceptionNestedException,
	ExceptionCollidedUnwind
} EXCEPTION_DISPOSITION ;

// #line 89
struct _EXCEPTION_RECORD ;

// #line 90
struct _CONTEXT ;

// #line 133
// #line 155

// #pragma pack(pop)
// #line 25 "C:/NTDDK/inc/ntdef.h"

// #pragma once
// #line 15 "C:/Program Files/Microsoft Visual Studio/VC98/include/ctype.h"

// #pragma once
// #line 106
// #line 127 "C:/NTDDK/inc/ntdef.h"
typedef unsigned long POINTER_64_INT ;
// #line 25 "C:/NTDDK/inc/basetsd.h"
// #pragma once
// #line 36
typedef int LONG32 , *  PLONG32 ;
// #line 37
typedef int INT32 , *  PINT32 ;
// #line 43
typedef unsigned int ULONG32 , *  PULONG32 ;
// #line 44
typedef unsigned int DWORD32 , *  PDWORD32 ;
// #line 45
typedef unsigned int UINT32 , *  PUINT32 ;
// #line 84
typedef int INT_PTR , *  PINT_PTR ;
// #line 85
typedef unsigned int UINT_PTR , *  PUINT_PTR ;
typedef long LONG_PTR , *  PLONG_PTR ;
// #line 88
typedef unsigned long ULONG_PTR , *  PULONG_PTR ;
// #line 248
typedef unsigned short UHALF_PTR , *  PUHALF_PTR ;
// #line 249
typedef short HALF_PTR , *  PHALF_PTR ;
// #line 250
typedef unsigned long HANDLE_PTR ;
// #line 288
typedef ULONG_PTR SIZE_T , *  PSIZE_T ;
// #line 289
typedef LONG_PTR SSIZE_T , *  PSSIZE_T ;
// #line 295
typedef ULONG_PTR DWORD_PTR , *  PDWORD_PTR ;

// #line 301
typedef /*__int64*/ int  LONG64 , *  PLONG64 ;

// #line 302
typedef /*__int64*/ int  INT64 , *  PINT64 ;

// #line 309
typedef unsigned /*__int64*/ int  ULONG64 , *  PULONG64 ;

// #line 310
typedef unsigned /*__int64*/ int  DWORD64 , *  PDWORD64 ;

// #line 311
typedef unsigned /*__int64*/ int  UINT64 , *  PUINT64 ;

// #line 217 "C:/NTDDK/inc/ntdef.h"
typedef void *  PVOID ;
// #line 218
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
	/*__int64*/ LONG  LowPart ;
	/*__int64*/ LONG  HighPart ;
} FLOAT128 ;
typedef FLOAT128 *  PFLOAT128 ;
// #line 621
typedef /*__int64*/ int  LONGLONG ;
// #line 622
typedef unsigned /*__int64*/ int  ULONGLONG ;

// #line 639
typedef LONGLONG *  PLONGLONG ;

// #line 640
typedef ULONGLONG *  PULONGLONG ;
// #line 644
typedef LONGLONG USN ;
// #line 649
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

// #pragma once
// #line 93
void * memcpy(void *  p, const void *  s, size_t t){
  void * x; return x;
}
void * memset(void *  p, int  s, size_t t){
  void * x; return x;
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

typedef EXCEPTION_DISPOSITION ( *  PEXCEPTION_ROUTINE
	)(struct _EXCEPTION_RECORD *  ExceptionRecord , PVOID EstablisherFrame ,
	struct _CONTEXT *  ContextRecord , PVOID DispatcherContext ) ;

// #line 1306
typedef UCHAR KIRQL ;

typedef KIRQL *  PKIRQL ;

// #line 1316
typedef enum _NT_PRODUCT_TYPE {
	NtProductWinNt/*  = 1 */,
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
typedef NTSTATUS (*  PRTL_QUERY_REGISTRY_ROUTINE )(PWSTR ValueName ,
						   ULONG ValueType , 
						   PVOID ValueData , 
						   ULONG ValueLength , 
						   PVOID Context ,
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
typedef void (/* __stdcall */ *  PIO_APC_ROUTINE )(PVOID ApcContext , PIO_STATUS_BLOCK
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
	ConfigurationSpaceUndefined/*  = - 1 */,
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
// #line 4572
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
		ULONG Enabled  /* : 1 */;
		ULONG UnCorrected /*  : 1 */;
		ULONG OverFlow /*  : 1 */;
		ULONG Valid /*  : 1 */;
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
/* extern */ PVOID *  MmHighestUserAddress ;
/* extern */ PVOID *  MmSystemRangeStart ;
/* extern */ ULONG *  MmUserProbeAddress ;

// #line 5153
typedef enum _INTERLOCKED_RESULT {
	ResultNegative /* = 0x8000 & ~ 0x4000 & (0x8000 | 0x4000) */,
	ResultZero /* = ~ 0x8000 & 0x4000 & (0x8000 | 0x4000) */,
	ResultPositive /* = ~ 0x8000 & ~ 0x4000 & (0x8000 | 0x4000) */
} INTERLOCKED_RESULT ;

// #line 5166
// #line 5173
// #line 5181
// #line 5197
// #line 5204
// #line 5211
// #line 5222
// #line 5229
// #line 5252

// #pragma warning(disable:4035)
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
typedef enum _CM_SERVICE_NODE_TYPE {
	DriverType /* = 0x00000001 */,
	FileSystemType/*  = 0x00000002 */,
	Win32ServiceOwnProcess /* = 0x00000010 */,
	Win32ServiceShareProcess/*  = 0x00000020 */,
	AdapterType /* = 0x00000004 */,
	RecognizerType /* = 0x00000008 */
} SERVICE_NODE_TYPE ;

typedef enum _CM_SERVICE_LOAD_TYPE {
	BootLoad /* = 0x00000000 */,
	SystemLoad/*  = 0x00000001 */,
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
	ULONG Removable/*   : 1 */;
	ULONG ConsoleIn  /* : 1 */;
	ULONG ConsoleOut /*  : 1 */;
	ULONG Input  /* : 1 */;
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

// #pragma warning(disable:4103)

// #pragma pack(push, 1)
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
// #line 9332
// #line 9340
// #line 9347
// #line 9359
// #line 9365
// #line 9372
// #line 9380
// #line 9415
////////////////////////////////////////////////////////////////
// Prototypes
////////////////////////////////////////////////////////////////
void KeInitializeEvent(PRKEVENT Event , EVENT_TYPE Type , BOOLEAN State ) ;	
// #line 9423
// #line 9429
// #line 9437
// #line 9445
LONG KeSetEvent(PRKEVENT Event , KPRIORITY Increment , BOOLEAN Wait ) ;
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
NTSTATUS KeWaitForSingleObject(PVOID Object , KWAIT_REASON WaitReason ,
			       KPROCESSOR_MODE WaitMode , 
			       BOOLEAN Alertable ,
			       PLARGE_INTEGER Timeout ) ;

LONG InterlockedIncrement(PLONG Addend ) ;
LONG InterlockedDecrement(PLONG Addend ) ;
LONG InterlockedExchange(PLONG Target , LONG Value ) ;
LARGE_INTEGER KeQueryPerformanceCounter(PLARGE_INTEGER PerformanceFrequency );

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

// #line 10051
//extern volatile KSYSTEM_TIME KeTickCount ;

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
	NonPagedPoolSession /* = 32 */,
	PagedPoolSession /* = NonPagedPoolSession + 1 */,
	NonPagedPoolMustSucceedSession/*  = PagedPoolSession + 1 */,
	DontUseThisTypeSession /* = NonPagedPoolMustSucceedSession + 1 */,
	NonPagedPoolCacheAlignedSession /* = DontUseThisTypeSession + 1 */,
	PagedPoolCacheAlignedSession /* = NonPagedPoolCacheAlignedSession + 1 */,
	NonPagedPoolCacheAlignedMustSSession /* = PagedPoolCacheAlignedSession + 1 */
} POOL_TYPE ;

// #line 10145
// #line 10152
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
typedef void ( *  PCALLBACK_FUNCTION )(PVOID CallbackContext , PVOID Argument1 ,
	PVOID Argument2 ) ;
// #line 11438
// #line 11447
// #line 11455
// #line 11461
// #line 11474
typedef GUID UUID ;
// #line 11596
/* extern */ PBOOLEAN Mm64BitPhysicalAddress ;

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
			ULONG ImageAddressingMode /*  : 8 */;
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
	PDRIVER_DISPATCH MajorFunction[28 /* 0x1b + 1 */] ;
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
	BusQueryDeviceSerialNumber /* = 4 */
} BUS_QUERY_ID_TYPE , *  PBUS_QUERY_ID_TYPE ;

typedef ULONG PNP_DEVICE_STATE , *  PPNP_DEVICE_STATE ;

// #line 14252
typedef enum  {
	DeviceTextDescription = 0,
	DeviceTextLocationInformation = 1
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
typedef struct _OBJECT_HANDLE_INFORMATION {
	ULONG HandleAttributes ;
	ACCESS_MASK GrantedAccess ;
} OBJECT_HANDLE_INFORMATION , *  POBJECT_HANDLE_INFORMATION ;

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

// #line 14825
// #line 14839


// #line 14848
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
// #line 18402
// #line 18418
// #line 18591
// #line 18600
// #line 18628
// #line 18635
// #line 18679
// #line 18720
// #line 18946
// #line 18954
// #line 18963
// #line 18975
// #line 18995
// #line 19000
// #line 19006
// #line 19028
// #line 19043
// #line 19066
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
// #line 22 "C:/NTDDK/inc/ntdddisk.h"
// #line 44 "C:/NTDDK/inc/ntddstor.h"
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
	DDS_4mm/*  = 0x20 */,
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
	StorageDeviceProperty /* = 0 */,
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

// #pragma warning(disable:4103)

// #pragma pack(push, 1)
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

// #pragma warning(disable:4103)

// #pragma pack(pop)
// #line 24 "C:/NTDDK/inc/pshpack1.h"

// #pragma warning(disable:4103)

// #pragma pack(push, 1)
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

// #pragma warning(disable:4103)

// #pragma pack(pop)
// #line 24 "C:/NTDDK/inc/pshpack1.h"

// #pragma warning(disable:4103)

// #pragma pack(push, 1)
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

// #pragma warning(disable:4103)

// #pragma pack(pop)
// #line 24 "C:/NTDDK/inc/pshpack1.h"

// #pragma warning(disable:4103)

// #pragma pack(push, 1)
// #line 779 "C:/NTDDK/inc/ntdddisk.h"
typedef struct _DRIVERSTATUS {
	UCHAR bDriverError ;
	UCHAR bIDEError ;
	UCHAR bReserved[2] ;
	ULONG dwReserved[2] ;
} DRIVERSTATUS , *  PDRIVERSTATUS , *  LPDRIVERSTATUS ;

// #line 27 "C:/NTDDK/inc/poppack.h"

// #pragma warning(disable:4103)

// #pragma pack(pop)
// #line 24 "C:/NTDDK/inc/pshpack1.h"

// #pragma warning(disable:4103)

// #pragma pack(push, 1)
// #line 808 "C:/NTDDK/inc/ntdddisk.h"
// #line 27 "C:/NTDDK/inc/poppack.h"
// #line 849 "C:/NTDDK/inc/ntdddisk.h"
typedef struct _MAPPED_ADDRESS {
	struct _MAPPED_ADDRESS *  NextMappedAddress ;
	PVOID MappedAddress ;
	ULONG NumberOfBytes ;
	LARGE_INTEGER IoAddress ;
	ULONG BusNumber ;
} MAPPED_ADDRESS , *  PMAPPED_ADDRESS ;

// #line 164 "C:/NTDDK/src/storage/fdc/inc/ntddfdc.h"
typedef struct _TRANSFER_BUFFER {
	PHYSICAL_ADDRESS Logical ;
	PVOID Virtual ;
} TRANSFER_BUFFER , *  PTRANSFER_BUFFER ;

// #line 180
typedef struct _ACPI_FDI_DATA {
	ULONG DriveNumber ;
	ULONG DeviceType ;
	ULONG MaxCylinderNumber ;
	ULONG MaxSectorNumber ;
	ULONG MaxHeadNumber ;
	ULONG StepRateHeadUnloadTime ;
	ULONG HeadLoadTime ;
	ULONG MotorOffTime ;
	ULONG SectorLengthCode ;
	ULONG SectorPerTrack ;
	ULONG ReadWriteGapLength ;
	ULONG DataTransferLength ;
	ULONG FormatGapLength ;
	ULONG FormatFillCharacter ;
	ULONG HeadSettleTime ;
	ULONG MotorSettleTime ;
} ACPI_FDI_DATA , *  PACPI_FDI_DATA ;

// #line 201
typedef enum _ACPI_FDI_DEVICE_TYPE {
	CmosProblem /* = 0 */,
	Form525Capacity360,
	Form525Capacity1200,
	Form35Capacity720,
	Form35Capacity1440,
	Form35Capacity2880
} ACPI_FDI_DEVICE_TYPE ;

// #line 212
typedef struct _FDC_INFO {
	UCHAR FloppyControllerType ;
	UCHAR SpeedsAvailable ;
	ULONG AdapterBufferSize ;
	INTERFACE_TYPE BusType ;
	ULONG BusNumber ;
	ULONG ControllerNumber ;
	ULONG PeripheralNumber ;
	ULONG UnitNumber ;
	ULONG MaxTransferSize ;
	BOOLEAN AcpiBios ;
	BOOLEAN AcpiFdiSupported ;
	ACPI_FDI_DATA AcpiFdiData ;
	ULONG BufferCount ;
	ULONG BufferSize ;
	TRANSFER_BUFFER BufferAddress[] ;
} FDC_INFO , *  PFDC_INFO ;

// #line 240
typedef struct _FDC_ENABLE_PARMS {
	UCHAR DriveOnValue ;
	USHORT TimeToWait ;
	BOOLEAN MotorStarted ;
} FDC_ENABLE_PARMS ;

typedef FDC_ENABLE_PARMS *  PFDC_ENABLE_PARMS ;

// #line 252
typedef struct _FDC_DISK_CHANGE_PARMS {
	UCHAR DriveStatus ;
	UCHAR DriveOnValue ;
} FDC_DISK_CHANGE_PARMS , *  PFDC_DISK_CHANGE_PARMS ;

// #line 261
typedef struct _ISSUE_FDC_COMMAND_PARMS {
	PUCHAR FifoInBuffer ;
	PUCHAR FifoOutBuffer ;
	PVOID IoHandle ;
	ULONG IoOffset ;
	ULONG TransferBytes ;
	ULONG TimeOut ;
} ISSUE_FDC_COMMAND_PARMS , *  PISSUE_FDC_COMMAND_PARMS ;

// #line 274
typedef struct _ISSUE_FDC_ADAPTER_BUFFER_PARMS {
	PVOID IoBuffer ;
	USHORT TransferBytes ;
	PVOID Handle ;
} ISSUE_FDC_ADAPTER_BUFFER_PARMS , *  PISSUE_FDC_ADAPTER_BUFFER_PARMS ;

// #line 291
typedef struct _SET_HD_BIT_PARMS {
	BOOLEAN DriveType144MB ;
	BOOLEAN Media144MB ;
	BOOLEAN More120MB ;
	UCHAR DeviceUnit ;
	BOOLEAN ChangedHdBit ;
} SET_HD_BIT_PARMS , *  PSET_HD_BIT_PARMS ;

// #line 12 "C:/NTDDK/inc/initguid.h"
// #line 26 "C:/NTDDK/inc/mountmgr.h"
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

/* extern const  */GUID /* __declspec(selectany)  */MOUNTDEV_MOUNTED_DEVICE_GUID
	/* = {0x53f5630d, 0xb6bf, 0x11d0, {0x94, 0xf2, 0x00, 0xa0, 0xc9, 0x1e, */
/* 	0xfb, 0x8b}} */;

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


// #line 27 "C:/NTDDK/inc/ddk/wdm/acpiioct.h"
// #line 105 "./flo_data.h"
typedef struct _BOOT_SECTOR_INFO {
	UCHAR JumpByte[1] ;
	UCHAR Ignore1[2] ;
	UCHAR OemData[8] ;
	UCHAR BytesPerSector[2] ;
	UCHAR Ignore2[6] ;
	UCHAR NumberOfSectors[2] ;
	UCHAR MediaByte[1] ;
	UCHAR Ignore3[2] ;
	UCHAR SectorsPerTrack[2] ;
	UCHAR NumberOfHeads[2] ;
} BOOT_SECTOR_INFO , *  PBOOT_SECTOR_INFO ;

// #line 194
typedef enum _DRIVE_MEDIA_TYPE {
	Drive360Media160,
	Drive360Media180,
	Drive360Media320,
	Drive360Media32X,
	Drive360Media360,
	Drive720Media720,
	Drive120Media160,
	Drive120Media180,
	Drive120Media320,
	Drive120Media32X,
	Drive120Media360,
	Drive120Media120,
	Drive144Media720,
	Drive144Media144,
	Drive288Media720,
	Drive288Media144,
	Drive288Media288
} DRIVE_MEDIA_TYPE ;

// #line 217
typedef enum _DRIVE_MEDIA_TYPE_NEC98 {
	Drive360Media160Nec98,
	Drive360Media180Nec98,
	Drive360Media320Nec98,
	Drive360Media32XNec98,
	Drive360Media360Nec98,
	Drive120Media160Nec98,
	Drive120Media180Nec98,
	Drive120Media320Nec98,
	Drive120Media32XNec98,
	Drive120Media360Nec98,
	Drive120Media640Nec98,
	Drive120Media720Nec98,
	Drive120Media120Nec98,
	Drive120Media123Nec98,
	Drive144Media640Nec98,
	Drive144Media720Nec98,
	Drive144Media120Nec98,
	Drive144Media123Nec98,
	Drive144Media144Nec98,
	Drive12EMedia120Nec98,
	Drive12EMedia123Nec98
} DRIVE_MEDIA_TYPE_NEC98 ;

// #line 260
typedef struct _DRIVE_MEDIA_LIMITS {
	DRIVE_MEDIA_TYPE HighestDriveMediaType ;
	DRIVE_MEDIA_TYPE LowestDriveMediaType ;
} DRIVE_MEDIA_LIMITS , *  PDRIVE_MEDIA_LIMITS ;

DRIVE_MEDIA_LIMITS DDriveMediaLimits[5] /* = {{Drive360Media360, Drive360Media160}, */
/* 	{Drive120Media120, Drive120Media160}, {Drive720Media720, */
/* 	Drive720Media720}, {Drive144Media144, Drive144Media720}, */
/* 	{Drive288Media288, Drive288Media720}} */;

// #line 277
typedef struct _DRIVE_MEDIA_LIMITS_NEC98 {
	DRIVE_MEDIA_TYPE_NEC98 HighestDriveMediaType ;
	DRIVE_MEDIA_TYPE_NEC98 LowestDriveMediaType ;
} DRIVE_MEDIA_LIMITS_NEC98 , *  PDRIVE_MEDIA_LIMITS_NEC98 ;

DRIVE_MEDIA_LIMITS_NEC98 DDriveMediaLimits_NEC98[6] /* = {{Drive360Media360Nec98, */
/* 	Drive360Media160Nec98}, {Drive120Media123Nec98, Drive120Media160Nec98}, */
/* 	{Drive120Media720Nec98, Drive120Media160Nec98}, {Drive144Media144Nec98, */
/* 	Drive144Media640Nec98}, {Drive144Media144Nec98, Drive144Media640Nec98}, */
/* 	{Drive12EMedia123Nec98, Drive12EMedia120Nec98}} */;
// #line 292
PDRIVE_MEDIA_LIMITS DriveMediaLimits ;

// #line 298
typedef struct _DRIVE_MEDIA_CONSTANTS {
	MEDIA_TYPE MediaType ;
	UCHAR StepRateHeadUnloadTime ;
	UCHAR HeadLoadTime ;
	UCHAR MotorOffTime ;
	UCHAR SectorLengthCode ;
	USHORT BytesPerSector ;
	UCHAR SectorsPerTrack ;
	UCHAR ReadWriteGapLength ;
	UCHAR FormatGapLength ;
	UCHAR FormatFillCharacter ;
	UCHAR HeadSettleTime ;
	USHORT MotorSettleTimeRead ;
	USHORT MotorSettleTimeWrite ;
	UCHAR MaximumTrack ;
	UCHAR CylinderShift ;
	UCHAR DataTransferRate ;
	UCHAR NumberOfHeads ;
	UCHAR DataLength ;
	UCHAR MediaByte ;
	UCHAR SkewDelta ;
} DRIVE_MEDIA_CONSTANTS , *  PDRIVE_MEDIA_CONSTANTS ;

// #line 334
DRIVE_MEDIA_CONSTANTS DDriveMediaConstants[17]/*  = {{F5_160_512, 0xdf, 0x2, 0x25, */
/* 	0x2, 0x200, 0x08, 0x2a, 0x50, 0xf6, 0xf, 1000, 1000, 0x27, 0, 0x2, 0x1, */
/* 	0xff, 0xfe, 0}, {F5_180_512, 0xdf, 0x2, 0x25, 0x2, 0x200, 0x09, 0x2a, */
/* 	0x50, 0xf6, 0xf, 1000, 1000, 0x27, 0, 0x2, 0x1, 0xff, 0xfc, 0}, */
/* 	{F5_320_512, 0xdf, 0x2, 0x25, 0x2, 0x200, 0x08, 0x2a, 0x50, 0xf6, 0xf, */
/* 	1000, 1000, 0x27, 0, 0x2, 0x2, 0xff, 0xff, 0}, {F5_320_1024, 0xdf, 0x2, */
/* 	0x25, 0x3, 0x400, 0x04, 0x80, 0xf0, 0xf6, 0xf, 1000, 1000, 0x27, 0, 0x2, */
/* 	0x2, 0xff, 0xff, 0}, {F5_360_512, 0xdf, 0x2, 0x25, 0x2, 0x200, 0x09, */
/* 	0x2a, 0x50, 0xf6, 0xf, 250, 1000, 0x27, 0, 0x2, 0x2, 0xff, 0xfd, 0}, */
/* 	{F3_720_512, 0xdf, 0x2, 0x25, 0x2, 0x200, 0x09, 0x2a, 0x50, 0xf6, 0xf, */
/* 	500, 1000, 0x4f, 0, 0x2, 0x2, 0xff, 0xf9, 2}, {F5_160_512, 0xdf, 0x2, */
/* 	0x25, 0x2, 0x200, 0x08, 0x2a, 0x50, 0xf6, 0xf, 1000, 1000, 0x27, 1, 0x1, */
/* 	0x1, 0xff, 0xfe, 0}, {F5_180_512, 0xdf, 0x2, 0x25, 0x2, 0x200, 0x09, */
/* 	0x2a, 0x50, 0xf6, 0xf, 1000, 1000, 0x27, 1, 0x1, 0x1, 0xff, 0xfc, 0}, */
/* 	{F5_320_512, 0xdf, 0x2, 0x25, 0x2, 0x200, 0x08, 0x2a, 0x50, 0xf6, 0xf, */
/* 	1000, 1000, 0x27, 1, 0x1, 0x2, 0xff, 0xff, 0}, {F5_320_1024, 0xdf, 0x2, */
/* 	0x25, 0x3, 0x400, 0x04, 0x80, 0xf0, 0xf6, 0xf, 1000, 1000, 0x27, 1, 0x1, */
/* 	0x2, 0xff, 0xff, 0}, {F5_360_512, 0xdf, 0x2, 0x25, 0x2, 0x200, 0x09, */
/* 	0x2a, 0x50, 0xf6, 0xf, 625, 1000, 0x27, 1, 0x1, 0x2, 0xff, 0xfd, 0}, */
/* 	{F5_1Pt2_512, 0xdf, 0x2, 0x25, 0x2, 0x200, 0x0f, 0x1b, 0x54, 0xf6, 0xf, */
/* 	625, 1000, 0x4f, 0, 0x0, 0x2, 0xff, 0xf9, 0}, {F3_720_512, 0xdf, 0x2, */
/* 	0x25, 0x2, 0x200, 0x09, 0x2a, 0x50, 0xf6, 0xf, 500, 1000, 0x4f, 0, 0x2, */
/* 	0x2, 0xff, 0xf9, 2}, {F3_1Pt44_512, 0xaf, 0x2, 0x25, 0x2, 0x200, 0x12, */
/* 	0x1b, 0x65, 0xf6, 0xf, 500, 1000, 0x4f, 0, 0x0, 0x2, 0xff, 0xf0, 3}, */
/* 	{F3_720_512, 0xe1, 0x2, 0x25, 0x2, 0x200, 0x09, 0x2a, 0x50, 0xf6, 0xf, */
/* 	500, 1000, 0x4f, 0, 0x2, 0x2, 0xff, 0xf9, 2}, {F3_1Pt44_512, 0xd1, 0x2, */
/* 	0x25, 0x2, 0x200, 0x12, 0x1b, 0x65, 0xf6, 0xf, 500, 1000, 0x4f, 0, 0x0, */
/* 	0x2, 0xff, 0xf0, 3}, {F3_2Pt88_512, 0xa1, 0x2, 0x25, 0x2, 0x200, 0x24, */
/* 	0x38, 0x53, 0xf6, 0xf, 500, 1000, 0x4f, 0, 0x3, 0x2, 0xff, 0xf0, 6}} */;
// #line 358
DRIVE_MEDIA_CONSTANTS DDriveMediaConstants_NEC98[21] /* = {{F5_160_512, 0xdf, 0x2, */
/* 	0x25, 0x2, 0x200, 0x08, 0x2a, 0x50, 0xf6, 0xf, 1000, 1000, 0x27, 0, 0x2, */
/* 	0x1, 0xff, 0xfe, 0}, {F5_180_512, 0xdf, 0x2, 0x25, 0x2, 0x200, 0x09, */
/* 	0x2a, 0x50, 0xf6, 0xf, 1000, 1000, 0x27, 0, 0x2, 0x1, 0xff, 0xfc, 0}, */
/* 	{F5_320_512, 0xdf, 0x2, 0x25, 0x2, 0x200, 0x08, 0x2a, 0x50, 0xf6, 0xf, */
/* 	1000, 1000, 0x27, 0, 0x2, 0x2, 0xff, 0xff, 0}, {F5_320_1024, 0xdf, 0x2, */
/* 	0x25, 0x3, 0x400, 0x04, 0x80, 0xf0, 0xf6, 0xf, 1000, 1000, 0x27, 0, 0x2, */
/* 	0x2, 0xff, 0xff, 0}, {F5_360_512, 0xdf, 0x2, 0x25, 0x2, 0x200, 0x09, */
/* 	0x2a, 0x50, 0xf6, 0xf, 250, 1000, 0x27, 0, 0x2, 0x2, 0xff, 0xfd, 0}, */
/* 	{F5_160_512, 0xdf, 0x16, 0x25, 0x2, 0x200, 0x08, 0x2a, 0x50, 0xe5, 0xf, */
/* 	1000, 1000, 0x27, 1, 0x2, 0x1, 0xff, 0xfe, 0}, {F5_180_512, 0xdf, 0x16, */
/* 	0x25, 0x2, 0x200, 0x09, 0x2a, 0x50, 0xe5, 0xf, 1000, 1000, 0x27, 1, 0x2, */
/* 	0x1, 0xff, 0xfc, 0}, {F5_320_512, 0xdf, 0x16, 0x25, 0x2, 0x200, 0x08, */
/* 	0x2a, 0x50, 0xe5, 0xf, 1000, 1000, 0x27, 1, 0x2, 0x2, 0xff, 0xff, 0}, */
/* 	{F5_320_1024, 0xdf, 0x16, 0x25, 0x3, 0x400, 0x04, 0x80, 0xf0, 0xe5, 0xf, */
/* 	1000, 1000, 0x27, 1, 0x2, 0x2, 0xff, 0xff, 0}, {F5_360_512, 0xdf, 0x16, */
/* 	0x25, 0x2, 0x200, 0x09, 0x2a, 0x50, 0xe5, 0xf, 1000, 1000, 0x27, 1, 0x2, */
/* 	0x2, 0xff, 0xfd, 0}, {F5_640_512, 0xdf, 0x16, 0x25, 0x2, 0x200, 0x08, */
/* 	0x2a, 0x50, 0xe5, 0xf, 1000, 1000, 0x4f, 0, 0x0, 0x2, 0xff, 0xfb, 0}, */
/* 	{F5_720_512, 0xdf, 0x16, 0x25, 0x2, 0x200, 0x09, 0x2a, 0x50, 0xe5, 0xf, */
/* 	1000, 1000, 0x4f, 0, 0x0, 0x2, 0xff, 0xf9, 2}, {F5_1Pt2_512, 0xcf, 0x24, */
/* 	0x25, 0x2, 0x200, 0x0f, 0x1b, 0x54, 0xe5, 0xf, 1000, 1000, 0x4f, 0, 0x0, */
/* 	0x2, 0xff, 0xf9, 0}, {F5_1Pt23_1024, 0xcf, 0x24, 0x25, 0x3, 0x400, 0x08, */
/* 	0x35, 0x74, 0xe5, 0xf, 1000, 1000, 0x4c, 0, 0x0, 0x2, 0xff, 0xfe, 0}, */
/* 	{F3_640_512, 0xdf, 0x16, 0x25, 0x2, 0x200, 0x08, 0x2a, 0x50, 0xe5, 0xf, */
/* 	1000, 1000, 0x4f, 0, 0x0, 0x2, 0xff, 0xfb, 0}, {F3_720_512, 0xdf, 0x16, */
/* 	0x25, 0x2, 0x200, 0x09, 0x2a, 0x50, 0xe5, 0xf, 1000, 1000, 0x4f, 0, 0x0, */
/* 	0x2, 0xff, 0xf9, 2}, {F3_1Pt2_512, 0xcf, 0x24, 0x25, 0x2, 0x200, 0x0f, */
/* 	0x1b, 0x54, 0xe5, 0xf, 1000, 1000, 0x4f, 0, 0x0, 0x2, 0xff, 0xf9, 0}, */
/* 	{F3_1Pt23_1024, 0xcf, 0x24, 0x25, 0x3, 0x400, 0x08, 0x35, 0x74, 0xe5, */
/* 	0xf, 1000, 1000, 0x4c, 0, 0x0, 0x2, 0xff, 0xfe, 0}, {F3_1Pt44_512, 0xdf, */
/* 	0x24, 0x25, 0x2, 0x200, 0x12, 0x1b, 0x6c, 0xe5, 0xf, 1000, 1000, 0x4f, */
/* 	0, 0x0, 0x2, 0xff, 0xf0, 3}, {F5_1Pt2_512, 0xbf, 0x32, 0x25, 0x2, 0x200, */
/* 	0x0f, 0x1b, 0x54, 0xe5, 0xf, 1000, 1000, 0x4f, 0, 0x0, 0x2, 0xff, 0xf9, */
/* 	0}, {F5_1Pt23_1024, 0xbf, 0x32, 0x25, 0x3, 0x400, 0x08, 0x35, 0x74, */
/* 	0xe5, 0xf, 1000, 1000, 0x4c, 0, 0x0, 0x2, 0xff, 0xfe, 0}} */;
// #line 399
PDRIVE_MEDIA_CONSTANTS DriveMediaConstants ;

// #line 528
typedef struct _DISKETTE_EXTENSION {
	KSPIN_LOCK FlCancelSpinLock ;
	PDEVICE_OBJECT UnderlyingPDO ;
	PDEVICE_OBJECT TargetObject ;
	BOOLEAN IsStarted ;
	BOOLEAN IsRemoved ;
	BOOLEAN HoldNewRequests ;
	LIST_ENTRY NewRequestQueue ;
	KSPIN_LOCK NewRequestQueueSpinLock ;
	PDEVICE_OBJECT DeviceObject ;
	KSEMAPHORE RequestSemaphore ;
	KSPIN_LOCK ListSpinLock ;
	FAST_MUTEX ThreadReferenceMutex ;
	LONG ThreadReferenceCount ;
	PKTHREAD FloppyThread ;
	LIST_ENTRY ListEntry ;
	BOOLEAN HardwareFailed ;
	UCHAR HardwareFailCount ;
	ULONG MaxTransferSize ;
	UCHAR FifoBuffer[10] ;
	PUCHAR IoBuffer ;
	PMDL IoBufferMdl ;
	ULONG IoBufferSize ;
	PDRIVER_OBJECT DriverObject ;
	DRIVE_MEDIA_TYPE LastDriveMediaType ;
	BOOLEAN FloppyControllerAllocated ;
	BOOLEAN ACPI_BIOS ;
	UCHAR DriveType ;
	ULONG BytesPerSector ;
	ULONG ByteCapacity ;
	MEDIA_TYPE MediaType ;
	DRIVE_MEDIA_TYPE DriveMediaType ;
	UCHAR DeviceUnit ;
	UCHAR DriveOnValue ;
	BOOLEAN IsReadOnly ;
	DRIVE_MEDIA_CONSTANTS BiosDriveMediaConstants ;
	DRIVE_MEDIA_CONSTANTS DriveMediaConstants ;
	UCHAR PerpendicularMode ;
	BOOLEAN ControllerConfigurable ;
	UNICODE_STRING DeviceName ;
	UNICODE_STRING InterfaceString ;
	UNICODE_STRING ArcName ;
	BOOLEAN ReleaseFdcWithMotorRunning ;
	BOOLEAN PoweringDown ;
	FAST_MUTEX PowerDownMutex ;
	FAST_MUTEX HoldNewReqMutex ;
} DISKETTE_EXTENSION ;

// #line 584
typedef DISKETTE_EXTENSION *  PDISKETTE_EXTENSION ;

// #line 591
typedef struct _SENSE_DEVISE_STATUS_PTOS {
	UCHAR ST3_PTOS ;
} SENSE_DEVISE_STATUS_PTOS , *  PSENSE_DEVISE_STATUS_PTOS ;

SENSE_DEVISE_STATUS_PTOS Result_Status3_PTOS[4] ;

////////////////////////////////////////////////////////////////////////////////////////////
// Prototypes
////////////////////////////////////////////////////////////////////////////////////////////
NTSTATUS FlConfigCallBack(PVOID Context , PUNICODE_STRING PathName ,
			  INTERFACE_TYPE BusType , ULONG BusNumber , 
			  PKEY_VALUE_FULL_INFORMATION 	*  BusInformation ,
			  CONFIGURATION_TYPE ControllerType , 
			  ULONG ControllerNumber , 
			  PKEY_VALUE_FULL_INFORMATION *  ControllerInformation, 
			  CONFIGURATION_TYPE PeripheralType , ULONG PeripheralNumber ,
			  PKEY_VALUE_FULL_INFORMATION *  PeripheralInformation ) ;
NTSTATUS FlInitializeControllerHardware(PDISKETTE_EXTENSION disketteExtension );	
NTSTATUS FlRecalibrateDrive(PDISKETTE_EXTENSION DisketteExtension ) ;
NTSTATUS FlDatarateSpecifyConfigure(PDISKETTE_EXTENSION DisketteExtension ) ;
NTSTATUS FlStartDrive(PDISKETTE_EXTENSION DisketteExtension , PIRP Irp , 
		      BOOLEAN WriteOperation , BOOLEAN SetUpMedia , BOOLEAN IgnoreChange ) ;
void FlFinishOperation(PIRP Irp , PDISKETTE_EXTENSION DisketteExtension ) ;
NTSTATUS FlDetermineMediaType(PDISKETTE_EXTENSION DisketteExtension ) ;
void FloppyThread(PVOID Context ) ;
NTSTATUS FlReadWrite(PDISKETTE_EXTENSION DisketteExtension,PIRP Irp,BOOLEAN DriveStarted ) ;		     
NTSTATUS FlFormat(PDISKETTE_EXTENSION DisketteExtension , PIRP Irp ) ;
void FlConsolidateMediaTypeWithBootSector(PDISKETTE_EXTENSION DisketteExtension,
					  PBOOT_SECTOR_INFO BootSector ) ;
void FlCheckBootSector(PDISKETTE_EXTENSION DisketteExtension ) ;
NTSTATUS FlReadWriteTrack(PDISKETTE_EXTENSION DisketteExtension , PMDL IoMdl ,
			  ULONG IoOffset , BOOLEAN WriteOperation , UCHAR Cylinder , 
			  UCHAR Head , UCHAR Sector , UCHAR NumberOfSectors , 
			  BOOLEAN NeedSeek ) ;			  

NTSTATUS FlIssueCommand(PDISKETTE_EXTENSION DisketteExtension , PUCHAR FifoInBuffer ,
			PUCHAR FifoOutBuffer , PMDL IoMdl , ULONG IoBuffer ,
			ULONG TransferBytes ) ;
BOOLEAN FlCheckFormatParameters(PDISKETTE_EXTENSION DisketteExtension ,
	PFORMAT_PARAMETERS Fp ) ;
void FlLogErrorDpc(PKDPC Dpc , PVOID DeferredContext , PVOID SystemContext1 ,
		   PVOID SystemContext2 ) ;
NTSTATUS FlQueueIrpToThread(PIRP Irp , PDISKETTE_EXTENSION DisketteExtension ) ;
NTSTATUS FlInterpretError(UCHAR StatusRegister1 , UCHAR StatusRegister2 ) ;
void FlAllocateIoBuffer(PDISKETTE_EXTENSION DisketteExtension , ULONG BufferSize) ;	
void FlFreeIoBuffer(PDISKETTE_EXTENSION DisketteExtension ) ;
NTSTATUS FlFdcDeviceIo(PDEVICE_OBJECT DeviceObject , ULONG Ioctl , PVOID Data );	
NTSTATUS FlAcpiConfigureFloppy(PDISKETTE_EXTENSION DisketteExtension , PFDC_INFO FdcInfo ) ;	
NTSTATUS FlHdbit(PDISKETTE_EXTENSION DisketteExtension ) ;


NTSTATUS DriverEntry(PDRIVER_OBJECT DriverObject , PUNICODE_STRING RegistryPath) ;	
void FloppyUnload(PDRIVER_OBJECT DriverObject ) ;
NTSTATUS FloppyCreateClose(PDEVICE_OBJECT DeviceObject , PIRP Irp ) ;
NTSTATUS FloppyDeviceControl(PDEVICE_OBJECT DeviceObject , PIRP Irp ) ;
NTSTATUS FloppyReadWrite(PDEVICE_OBJECT DeviceObject , PIRP Irp ) ;
NTSTATUS FloppyAddDevice(PDRIVER_OBJECT DriverObject,PDEVICE_OBJECT PhysicalDeviceObject) ;	
NTSTATUS FloppyPnp(PDEVICE_OBJECT DeviceObject , PIRP Irp ) ;
NTSTATUS FloppyPower(PDEVICE_OBJECT DeviceObject , PIRP Irp ) ;
NTSTATUS FloppyPnpComplete(PDEVICE_OBJECT DeviceObject , PIRP Irp , PVOID Context ) ;	
NTSTATUS FloppyQueueRequest(PDISKETTE_EXTENSION DisketteExtension , PIRP Irp ) ;
NTSTATUS FloppyStartDevice(PDEVICE_OBJECT DeviceObject , PIRP Irp ) ;
void FloppyProcessQueuedRequests(PDISKETTE_EXTENSION DisketteExtension ) ;
void FloppyCancelQueuedRequest(PDEVICE_OBJECT DeviceObject , PIRP Irp ) ;

//////////////////////////////////////////////////////////////////////////////////////
// Auxiliary functions
//////////////////////////////////////////////////////////////////////////////////////

char * malloc(int i);
void ExAcquireFastMutex(PFAST_MUTEX FastMutex );
void ExReleaseFastMutex(PFAST_MUTEX FastMutex );
void ExFreePool(PVOID P );
PLIST_ENTRY ExfInterlockedRemoveHeadList(PLIST_ENTRY ListHead , PKSPIN_LOCK Lock );
PDEVICE_OBJECT IoAttachDeviceToDeviceStack(PDEVICE_OBJECT SourceDevice , 
					   PDEVICE_OBJECT TargetDevice );
PIRP IoBuildAsynchronousFsdRequest(ULONG MajorFunction ,
				   PDEVICE_OBJECT DeviceObject , PVOID Buffer , ULONG Length ,
				   PLARGE_INTEGER StartingOffset , PIO_STATUS_BLOCK IoStatusBlock );
NTSTATUS IoCreateDevice(PDRIVER_OBJECT DriverObject ,
			ULONG DeviceExtensionSize , PUNICODE_STRING DeviceName , 
			ULONG DeviceType , ULONG DeviceCharacteristics , BOOLEAN Exclusive ,  
			PDEVICE_OBJECT *  DeviceObject );
NTSTATUS IoCreateSymbolicLink(PUNICODE_STRING SymbolicLinkName ,
			      PUNICODE_STRING DeviceName );
void IoDeleteDevice(PDEVICE_OBJECT DeviceObject );
NTSTATUS IoDeleteSymbolicLink(PUNICODE_STRING SymbolicLinkName );
void IoDetachDevice(PDEVICE_OBJECT TargetDevice );
void IoFreeIrp(PIRP Irp );
void IoFreeMdl(PMDL Mdl );
PCONFIGURATION_INFORMATION IoGetConfigurationInformation(void);
NTSTATUS IoQueryDeviceDescription(PINTERFACE_TYPE BusType,
				  PULONG BusNumber , PCONFIGURATION_TYPE ControllerType , 
				  PULONG ControllerNumber , PCONFIGURATION_TYPE PeripheralType , 
				  PULONG PeripheralNumber , PIO_QUERY_DEVICE_ROUTINE CalloutRoutine , 
				  PVOID Context );
NTSTATUS IoRegisterDeviceInterface(PDEVICE_OBJECT PhysicalDeviceObject , /*const*/ 	
				   GUID *  InterfaceClassGuid , PUNICODE_STRING ReferenceString ,
				   PUNICODE_STRING SymbolicLinkName );
void IoReleaseCancelSpinLock(KIRQL Irql );
NTSTATUS IoSetDeviceInterfaceState(PUNICODE_STRING SymbolicLinkName , BOOLEAN Enable );
void IoSetHardErrorOrVerifyDevice(PIRP Irp ,
				  PDEVICE_OBJECT DeviceObject );
void stubMoreProcessingRequired();
NTSTATUS IofCallDriver(PDEVICE_OBJECT DeviceObject , PIRP Irp )	;
void IofCompleteRequest(PIRP Irp , CCHAR PriorityBoost );
KIRQL KeAcquireSpinLockRaiseToDpc(PKSPIN_LOCK SpinLock );
NTSTATUS KeDelayExecutionThread(KPROCESSOR_MODE WaitMode , BOOLEAN Alertable , 
				PLARGE_INTEGER Interval );
void KeInitializeEvent(PRKEVENT Event , EVENT_TYPE Type ,
		       BOOLEAN State );
void KeInitializeSemaphore(PRKSEMAPHORE Semaphore , LONG Count , LONG Limit );
void KeInitializeSpinLock(PKSPIN_LOCK SpinLock );
LONG KeReleaseSemaphore(PRKSEMAPHORE Semaphore , KPRIORITY Increment ,
			LONG Adjustment , BOOLEAN Wait );
void KfReleaseSpinLock(PKSPIN_LOCK SpinLock , KIRQL NewIrql );
LONG KeSetEvent(PRKEVENT Event , KPRIORITY Increment , BOOLEAN Wait );
NTSTATUS KeWaitForSingleObject(PVOID Object , KWAIT_REASON WaitReason ,
			       KPROCESSOR_MODE WaitMode , BOOLEAN Alertable ,
			       PLARGE_INTEGER Timeout );
PVOID MmAllocateContiguousMemory(SIZE_T NumberOfBytes ,
				 PHYSICAL_ADDRESS HighestAcceptableAddress );
void MmFreeContiguousMemory(PVOID BaseAddress );
PVOID MmMapLockedPagesSpecifyCache(PMDL MemoryDescriptorList ,
				   KPROCESSOR_MODE AccessMode , MEMORY_CACHING_TYPE
				   CacheType , PVOID BaseAddress , ULONG BugCheckOnFailure ,
				   MM_PAGE_PRIORITY Priority );
PVOID MmPageEntireDriver(PVOID AddressWithinSection );
void MmResetDriverPaging(PVOID AddressWithinSection );
void MmUnlockPages(PMDL MemoryDescriptorList );
NTSTATUS ObReferenceObjectByHandle(HANDLE Handle ,
				   ACCESS_MASK DesiredAccess , POBJECT_TYPE ObjectType , 
				   KPROCESSOR_MODE AccessMode , PVOID *  Object , 
				   POBJECT_HANDLE_INFORMATION HandleInformation );
void ObfDereferenceObject(PVOID Object );
NTSTATUS PoCallDriver(PDEVICE_OBJECT DeviceObject , PIRP Irp ) ;
void PoStartNextPowerIrp(PIRP Irp );
NTSTATUS PsCreateSystemThread(PHANDLE ThreadHandle , ULONG DesiredAccess ,
			      POBJECT_ATTRIBUTES ObjectAttributes , HANDLE ProcessHandle ,
			      PCLIENT_ID ClientId , PKSTART_ROUTINE StartRoutine ,
			      PVOID StartContext );
NTSTATUS PsTerminateSystemThread(NTSTATUS ExitStatus );
NTSTATUS  RtlAnsiStringToUnicodeString(PUNICODE_STRING DestinationString ,
				       PANSI_STRING SourceString , BOOLEAN AllocateDestinationString );
SIZE_T RtlCompareMemory(void *  Source1 ,
			void *  Source2 , SIZE_T Length );
void RtlCopyUnicodeString(PUNICODE_STRING DestinationString ,
			  PUNICODE_STRING SourceString );
NTSTATUS RtlDeleteRegistryValue(ULONG RelativeTo, PCWSTR Path , PCWSTR ValueName );
void RtlFreeUnicodeString(PUNICODE_STRING UnicodeString );
void RtlInitString(PSTRING DestinationString , PCSZ SourceString );	
void RtlInitUnicodeString(PUNICODE_STRING DestinationString , PCWSTR SourceString );	
NTSTATUS RtlQueryRegistryValues(ULONG RelativeTo,
				PCWSTR Path , PRTL_QUERY_REGISTRY_TABLE QueryTable , PVOID Context ,
				PVOID Environment );
NTSTATUS ZwClose(HANDLE Handle );

void errorFn()
{
 ERROR:  goto ERROR; 
}

// GLOBAL VARIABLES
NTSTATUS myStatus; // shadows Irp->IoStatus.Status
int MydisketteExtensionIsRemoved; // shadows disketteExtension->IsRemoved
int s ;
int UNLOADED , NP , DC , SKIP1 , SKIP2 , MPR1 , MPR3 , IPC ;
int pended ;
PIO_COMPLETION_ROUTINE compFptr ;
int compRegistered ;
int lowerDriverReturn ;
int setEventCalled ;
int customIrp ;
ULONG PagingReferenceCount/*  = 0 */;
PFAST_MUTEX PagingMutex /*= (void *  )0*/ ;

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
  // Global variables initialized
  PagingReferenceCount = 0;
  PagingMutex = (void *  )0;
  
}

NTSTATUS DriverEntry(PDRIVER_OBJECT DriverObject , PUNICODE_STRING RegistryPath)	
{
  NTSTATUS ntStatus;
  ULONG tag__1;

  ntStatus = (NTSTATUS )0x00000000L;

  /*   (DriverObject->MajorFunction)[0x00] = FloppyCreateClose; */
  /*   (DriverObject->MajorFunction)[0x02] = FloppyCreateClose; */
  /*   (DriverObject->MajorFunction)[0x03] = FloppyReadWrite; */
  /*   (DriverObject->MajorFunction)[0x04] = FloppyReadWrite; */
  /*   (DriverObject->MajorFunction)[0x0e] = FloppyDeviceControl; */
  /*   (DriverObject->MajorFunction)[0x1b] = FloppyPnp; */
  /*   (DriverObject->MajorFunction)[0x16] = FloppyPower; */
  /*   DriverObject->DriverUnload = FloppyUnload; */
  /*   (DriverObject->DriverExtension)->AddDevice = FloppyAddDevice; */
  

  PagingMutex = ExAllocatePoolWithTag(NonPagedPool, sizeof(FAST_MUTEX ), tag__1/* 'polF' */);
  if(PagingMutex == (void *  )0)
    return (NTSTATUS )0xC000009AL;
  PagingMutex->Count = 1;
  PagingMutex->Contention = 0;
  KeInitializeEvent(& PagingMutex->Event, SynchronizationEvent, 0);
  /*   MmPageEntireDriver(DriverEntry); */
  
  /*   DriveMediaLimits = ((KUSER_SHARED_DATA * const */
  /* 		       )0xffdf0000)->AlternativeArchitecture == NEC98x86 */
  /*                       ? (PDRIVE_MEDIA_LIMITS )(& DDriveMediaLimits_NEC98[0]) : & */
  /*                       DDriveMediaLimits[0]; */
  /*   DriveMediaConstants = ((KUSER_SHARED_DATA * const */
  /* 			  )0xffdf0000)->AlternativeArchitecture == NEC98x86 */
  /*                          ? (PDRIVE_MEDIA_CONSTANTS )(& DDriveMediaConstants_NEC98[0]) : & */
  /*                         DDriveMediaConstants[0]; */
  return ntStatus;
}

void FloppyUnload(PDRIVER_OBJECT DriverObject )
{
  ExFreePool(PagingMutex);
  return;
}


NTSTATUS FloppyAddDevice(PDRIVER_OBJECT DriverObject ,
			 PDEVICE_OBJECT PhysicalDeviceObject )
{
  NTSTATUS ntStatus ;
  PDEVICE_OBJECT deviceObject ;
  PDISKETTE_EXTENSION disketteExtension ;
  FDC_INFO fdcInfo ;
  UCHAR arcNameBuffer[256] ;
  STRING arcNameString ;
  WCHAR deviceNameBuffer[20] ;
  UNICODE_STRING deviceName ;
  USHORT i;
  ULONG tag__1;
  
  ntStatus = (NTSTATUS )0x00000000L;
  fdcInfo.BufferCount = 0;
  fdcInfo.BufferSize = 0;
  ntStatus = FlFdcDeviceIo(PhysicalDeviceObject,
			   0x00000007 << 16 | 0 << 14 | 0x302 << 2 | 3, & fdcInfo);

  if((NTSTATUS )ntStatus >= 0)
    {
      i = 0;
      ///////////////////////////////////////////////////////////////////////////
      // CAUTIOUS: the do-while is deleted because it will be run once.
      ///////////////////////////////////////////////////////////////////////////
      /* do */
      {
	/*   swprintf(deviceNameBuffer, */
	/*            "\134\0D\0e\0v\0i\0c\0e\0\134\0F\0l\0o\0p\0p\0y\0%\0d\0", */
	/* 	   i++); */
	RtlInitUnicodeString(& deviceName, deviceNameBuffer);
	ntStatus = IoCreateDevice(DriverObject,
				  sizeof(DISKETTE_EXTENSION ), & deviceName,
				  0x00000007, 0x00000001 | 0x00000004 |
				  0x00000100, 0, & deviceObject);
	/*   // POST: ntStatus is either 0x00000000L or 0xC0000001L */
      }
      /* while(ntStatus == (NTSTATUS )0xC0000035L); */

      if((NTSTATUS )ntStatus >= 0)
	{
	  disketteExtension = (PDISKETTE_EXTENSION)deviceObject->DeviceExtension;
	  (disketteExtension->DeviceName).Buffer = ExAllocatePoolWithTag(PagedPool,
									 deviceName.Length,
									 tag__1 /* 'polF' */);
	  if((disketteExtension->DeviceName).Buffer == (void * )0)
	    {
	      IoDeleteDevice(deviceObject);
	      return (NTSTATUS )0xC000009AL;
	    }
	  (disketteExtension->DeviceName).Length = 0;
	  (disketteExtension->DeviceName).MaximumLength = deviceName.Length;
	  RtlCopyUnicodeString(& disketteExtension->DeviceName, & deviceName);
	  // IoGetConfigurationInformation()->FloppyCount++;
	  /* 	  sprintf(arcNameBuffer, "%s(%d)disk(%d)fdisk(%d)", */
	  /* 		  "\134ArcName\134multi", fdcInfo.BusNumber, */
	  /* 		  fdcInfo.ControllerNumber, */
	  /* 		  fdcInfo.PeripheralNumber); */
	  RtlInitString(& arcNameString, arcNameBuffer);
	  ntStatus = RtlAnsiStringToUnicodeString(&
						  disketteExtension->ArcName,
						  & arcNameString, 1);
	  if((NTSTATUS )ntStatus >= 0)
	    IoCreateSymbolicLink((PUNICODE_STRING) & disketteExtension->ArcName,
				 (PUNICODE_STRING) & deviceName);
	  
	  /*deviceObject->Flags |= 0x00000010 | 0x00002000; */
	  if(deviceObject->AlignmentRequirement < 0x00000001)
	    deviceObject->AlignmentRequirement = 0x00000001;
	  /*deviceObject->Flags &= ~ 0x00000080; */
	  disketteExtension->DriverObject = DriverObject;
	  disketteExtension->UnderlyingPDO = PhysicalDeviceObject;
	  disketteExtension->TargetObject = IoAttachDeviceToDeviceStack(deviceObject,PhysicalDeviceObject);
	  KeInitializeSemaphore(& disketteExtension->RequestSemaphore, 0L,0x7fffffff);

	  // (& disketteExtension->PowerDownMutex)->Count = 1;

	  // The following line causes problems when CLP program is loaded
	  // Warning: type clash pc 296602
	  /* (& disketteExtension->PowerDownMutex)->Contention = 0; */

	  KeInitializeEvent(& (&
	  		       disketteExtension->PowerDownMutex)->Event, SynchronizationEvent, 0);
	  KeInitializeSpinLock(& disketteExtension->ListSpinLock);

	  // (& disketteExtension->ThreadReferenceMutex)->Count = 1;

	  // The following line causes problems when CLP program is loaded
	  // Warning: type clash pc 296602
	  /* (& disketteExtension->ThreadReferenceMutex)->Contention = 0; */

	  KeInitializeEvent(& (&
	  		       disketteExtension->ThreadReferenceMutex)->Event,
	  		    SynchronizationEvent, 0);

	  // (& disketteExtension->HoldNewReqMutex)->Count = 1;

	  // The following line causes problems when CLP program is loaded
	  // Warning: type clash pc 296602
	  /* (& disketteExtension->HoldNewReqMutex)->Contention = 0; */

	  KeInitializeEvent(&(&disketteExtension->HoldNewReqMutex)->Event,
	  		    SynchronizationEvent, 0);



	  /* 	  (& disketteExtension->ListEntry)->Flink = ((& */
	  /* 						disketteExtension->ListEntry)->Blink = & */
	  /* 						disketteExtension->ListEntry); */
	  disketteExtension->ThreadReferenceCount= -1;
	  disketteExtension->IsStarted = 0;
	  disketteExtension->IsRemoved = 0;
	  // TRACER shadow disketteExtension->IsRemoved 
	  MydisketteExtensionIsRemoved = 0;
	  disketteExtension->HoldNewRequests = 0;
	  /* (& disketteExtension->NewRequestQueue)->Flink = ((& */
	  /* 						disketteExtension->NewRequestQueue)->Blink = & */
	  /* 	 					disketteExtension->NewRequestQueue); */
	  KeInitializeSpinLock(& disketteExtension->NewRequestQueueSpinLock);
	  KeInitializeSpinLock(& disketteExtension->FlCancelSpinLock);
	  disketteExtension->FloppyControllerAllocated = 0;
	  disketteExtension->ReleaseFdcWithMotorRunning = 0;
	  disketteExtension->DeviceObject = deviceObject;
	  disketteExtension->IsReadOnly = 0;
	  disketteExtension->MediaType = -1;
/* 	  disketteExtension->ControllerConfigurable = ((KUSER_SHARED_DATA * const		  */
/* 				)0xffdf0000)->AlternativeArchitecture == */
/* 				NEC98x86 ? 0 : 1; */
		
 	}
      return ntStatus;
    }
}


NTSTATUS FlConfigCallBack(PVOID Context , PUNICODE_STRING PathName ,
			  INTERFACE_TYPE BusType , ULONG BusNumber ,
			  PKEY_VALUE_FULL_INFORMATION *  BusInformation ,
			  CONFIGURATION_TYPE ControllerType ,
			  ULONG ControllerNumber ,
			  PKEY_VALUE_FULL_INFORMATION *  ControllerInformation,
			  CONFIGURATION_TYPE PeripheralType , ULONG PeripheralNumber ,
			  PKEY_VALUE_FULL_INFORMATION *  PeripheralInformation )
{
  PDISKETTE_EXTENSION disketteExtension;
  ULONG i ;
  PCM_FULL_RESOURCE_DESCRIPTOR peripheralData ;
  NTSTATUS ntStatus ;  
  PCM_PARTIAL_RESOURCE_DESCRIPTOR partial;
  PCM_FLOPPY_DEVICE_DATA fDeviceData ;
  UCHAR driveType ;
  PDRIVE_MEDIA_CONSTANTS biosDriveMediaConstants;
  int NON_DET;
        
  disketteExtension = Context;
  if(! ((PUCHAR )PeripheralInformation[IoQueryDeviceConfigurationData] +
	(PeripheralInformation[IoQueryDeviceConfigurationData])->DataLength
	))
    return (NTSTATUS )0xC000000DL;
  
  peripheralData = (PCM_FULL_RESOURCE_DESCRIPTOR )(
		   (PUCHAR)PeripheralInformation[IoQueryDeviceConfigurationData]+
		   (PeripheralInformation[IoQueryDeviceConfigurationData])->DataOffset);
						   
  for(i = 0; i < (peripheralData->PartialResourceList).Count; i++)
    {
      partial = & ((peripheralData->PartialResourceList).PartialDescriptors)[i];
      if(partial->Type == 5)
	{
	  biosDriveMediaConstants = & disketteExtension->BiosDriveMediaConstants;
	  fDeviceData = (PCM_FLOPPY_DEVICE_DATA )(partial + 1);
	  switch(fDeviceData->MaxDensity)
	  {
	  case 360:
	    driveType = 0;
	    break;
	  case 1200:
	    driveType = 1;
	    break;
	  case 1185:
	    driveType = 1;
	    break;
	  case 1423:
	    driveType = 3;
	    break;
	  case 1440:
	    driveType = 3;
	    break;
	  case 2880:
	    driveType = 4;
	    break;
	  case 1201:
	    if(NON_DET /* ((KUSER_SHARED_DATA * const */
	       /*      )0xffdf0000)->AlternativeArchitecture == */
	       /*      NEC98x86 */)
	      {
		driveType = 5;
		break;
	      }
	  default :
	    driveType = 1;
	    break;
	  }
	  disketteExtension->DriveType = driveType;
	  * biosDriveMediaConstants = 
	    DriveMediaConstants[(DriveMediaLimits[driveType]).HighestDriveMediaType];
	  if(fDeviceData->Version >= 2)
	    {
	      biosDriveMediaConstants->StepRateHeadUnloadTime= fDeviceData->StepRateHeadUnloadTime;
	      biosDriveMediaConstants->HeadLoadTime = fDeviceData->HeadLoadTime;
	      biosDriveMediaConstants->MotorOffTime = fDeviceData->MotorOffTime;
	      biosDriveMediaConstants->SectorLengthCode = fDeviceData->SectorLengthCode;
	      if(fDeviceData->SectorPerTrack == 0)
		return (NTSTATUS )0x00000000L;
	      if(fDeviceData->MaxDensity == 0)
		return (NTSTATUS )0x00000000L;
	      biosDriveMediaConstants->SectorsPerTrack = fDeviceData->SectorPerTrack;
	      biosDriveMediaConstants->ReadWriteGapLength =fDeviceData->ReadWriteGapLength;
	      biosDriveMediaConstants->FormatGapLength =fDeviceData->FormatGapLength;
	      biosDriveMediaConstants->FormatFillCharacter =fDeviceData->FormatFillCharacter;
	      biosDriveMediaConstants->HeadSettleTime =fDeviceData->HeadSettleTime;
	      biosDriveMediaConstants->MotorSettleTimeRead =fDeviceData->MotorSettleTime*1000 / 8;
	      biosDriveMediaConstants->MotorSettleTimeWrite = fDeviceData->MotorSettleTime*1000 / 8;
	      if(fDeviceData->MaximumTrackValue == 0)
		return (NTSTATUS )0x00000000L;
	      biosDriveMediaConstants->MaximumTrack = fDeviceData->MaximumTrackValue;
	      biosDriveMediaConstants->DataLength = fDeviceData->DataTransferLength;
	    }
	}
    }  
  return (NTSTATUS )0x00000000L;
}

NTSTATUS FlAcpiConfigureFloppy(PDISKETTE_EXTENSION DisketteExtension , PFDC_INFO FdcInfo )	
{
  UCHAR driveType ;
  PDRIVE_MEDIA_CONSTANTS biosDriveMediaConstants;
  int NONDET;

  biosDriveMediaConstants = & DisketteExtension->BiosDriveMediaConstants;
  
  if(! FdcInfo->AcpiFdiSupported)
    return (NTSTATUS )0xC0000001L;

  switch(NONDET/* (ACPI_FDI_DEVICE_TYPE )(FdcInfo->AcpiFdiData).DeviceType */)
    {
    case 360 /*Form525Capacity360*/:
      driveType = 0;
      break;
    case 1200 /*Form525Capacity1200*/:
      driveType = 1;
      break;
    case 720 /*Form35Capacity720*/:
      driveType = 2;
      break;
    case 1440 /*Form35Capacity1440*/:
      driveType = 3;
      break;
    case 2880 /*Form35Capacity2880*/:
      driveType = 4;
      break;
    default :
      driveType = 1;
      break;
    }
  DisketteExtension->DriveType = driveType;
  * biosDriveMediaConstants =DriveMediaConstants[(DriveMediaLimits[driveType]).HighestDriveMediaType];
  biosDriveMediaConstants->StepRateHeadUnloadTime = (UCHAR)(FdcInfo->AcpiFdiData).StepRateHeadUnloadTime;
  biosDriveMediaConstants->HeadLoadTime = (UCHAR)(FdcInfo->AcpiFdiData).HeadLoadTime;
  biosDriveMediaConstants->MotorOffTime = (UCHAR)(FdcInfo->AcpiFdiData).MotorOffTime;
  biosDriveMediaConstants->SectorLengthCode = (UCHAR)(FdcInfo->AcpiFdiData).SectorLengthCode;
  biosDriveMediaConstants->SectorsPerTrack = (UCHAR)(FdcInfo->AcpiFdiData).SectorPerTrack;
  biosDriveMediaConstants->ReadWriteGapLength = (UCHAR)(FdcInfo->AcpiFdiData).ReadWriteGapLength;
  biosDriveMediaConstants->FormatGapLength = (UCHAR)(FdcInfo->AcpiFdiData).FormatGapLength;
  biosDriveMediaConstants->FormatFillCharacter = (UCHAR)(FdcInfo->AcpiFdiData).FormatFillCharacter;
  biosDriveMediaConstants->HeadSettleTime = (UCHAR)(FdcInfo->AcpiFdiData).HeadSettleTime;
  biosDriveMediaConstants->MotorSettleTimeRead = (UCHAR)(FdcInfo->AcpiFdiData).MotorSettleTime*1000/8;
  biosDriveMediaConstants->MotorSettleTimeWrite = (USHORT)(FdcInfo->AcpiFdiData).MotorSettleTime*1000/8;
  biosDriveMediaConstants->MaximumTrack = (UCHAR)(FdcInfo->AcpiFdiData).MaxCylinderNumber;
  biosDriveMediaConstants->DataLength = (UCHAR)(FdcInfo->AcpiFdiData).DataTransferLength;

  return (NTSTATUS )0x00000000L;
}

NTSTATUS FlQueueIrpToThread(PIRP Irp , PDISKETTE_EXTENSION DisketteExtension )
{
  KIRQL oldIrql ;
  NTSTATUS status ;
  HANDLE threadHandle ;
  PIO_STACK_LOCATION irpSp;
  OBJECT_ATTRIBUTES ObjAttributes ;
  PKSTART_ROUTINE MyFloppyThread;

  irpSp = ((Irp->Tail).Overlay).CurrentStackLocation;
  ExAcquireFastMutex(& DisketteExtension->PowerDownMutex);
  if(DisketteExtension->PoweringDown == 1)
    {
      ExReleaseFastMutex(& DisketteExtension->PowerDownMutex);
      myStatus = (NTSTATUS) 0xC00002D3L;      
      (Irp->IoStatus).Status = (NTSTATUS )0xC00002D3L;
      (Irp->IoStatus).Information = 0;
      return (NTSTATUS )0xC00002D3L;
    }
  ExReleaseFastMutex(& DisketteExtension->PowerDownMutex);
  ExAcquireFastMutex(& DisketteExtension->ThreadReferenceMutex);

  DisketteExtension->ThreadReferenceCount++;
  if(DisketteExtension->ThreadReferenceCount == 0/*++ DisketteExtension->ThreadReferenceCount == 0*/)
    {
      DisketteExtension->ThreadReferenceCount++;
      ExAcquireFastMutex(PagingMutex);

      PagingReferenceCount++;
      if(PagingReferenceCount == 1/* ++ PagingReferenceCount == 1 */)
	MmResetDriverPaging(DriverEntry);
      ExReleaseFastMutex(PagingMutex);
/*       { */
/* 	(& ObjAttributes)->Length = sizeof(OBJECT_ATTRIBUTES ); */
/* 	(& ObjAttributes)->RootDirectory = (void *  )0; */
/* 	(& ObjAttributes)->Attributes = 0x00000200L; */
/* 	(& ObjAttributes)->ObjectName = (void *  )0; */
/* 	(& ObjAttributes)->SecurityDescriptor = (void *  )0; */
/* 	(& ObjAttributes)->SecurityQualityOfService = (void *)0; */
/*       } */

      status = PsCreateSystemThread(& threadHandle, (ACCESS_MASK )0L,
				    & ObjAttributes, (HANDLE )0L, (void *  )0, 
				    MyFloppyThread /*FloppyThread*/,
				    DisketteExtension);

      if(! ((NTSTATUS )status >= 0))
	{
	  DisketteExtension->ThreadReferenceCount = - 1;
	  ExAcquireFastMutex(PagingMutex);

	  PagingReferenceCount--;
	  if(PagingReferenceCount == 0 /* -- PagingReferenceCount == 0 */)
	      MmPageEntireDriver(DriverEntry);
	  ExReleaseFastMutex(PagingMutex);
	  ExReleaseFastMutex(&DisketteExtension->ThreadReferenceMutex);
	  return status;
	}
      status = ObReferenceObjectByHandle(threadHandle, 0x00100000L,
					 (void *  )0, KernelMode, &
					 DisketteExtension->FloppyThread, (void *  )0);
      ZwClose(threadHandle);
      ExReleaseFastMutex(& DisketteExtension->ThreadReferenceMutex);
      if(! ((NTSTATUS )status >= 0))
	  return status;
    }
  else
      ExReleaseFastMutex(& DisketteExtension->ThreadReferenceMutex);

  (((Irp->Tail).Overlay).CurrentStackLocation)->Control= 
    (((Irp->Tail).Overlay).CurrentStackLocation)->Control | 0x01; 

  // TRACER 
  /* _ABORT(pended != 0); */
  /* pended = 1; */

  // BLAST  
  if(pended == 0)
    pended = 1;
  else
    errorFn();

  ExfInterlockedInsertTailList(& DisketteExtension->ListEntry, 
			       & ((Irp->Tail).Overlay).ListEntry,
			       & DisketteExtension->ListSpinLock);
			       
  KeReleaseSemaphore(& DisketteExtension->RequestSemaphore, (KPRIORITY )0,1, 0);
  return (NTSTATUS )0x00000103L;
}

NTSTATUS FloppyCreateClose(PDEVICE_OBJECT DeviceObject , PIRP Irp )
{
  myStatus = (NTSTATUS) 0x00000000L;  
  (Irp->IoStatus).Status = (NTSTATUS )0x00000000L;
  (Irp->IoStatus).Information = 0x00000001;
  IofCompleteRequest(Irp, 0);
  return (NTSTATUS )0x00000000L;
}

NTSTATUS FloppyDeviceControl(PDEVICE_OBJECT DeviceObject , PIRP Irp )
{
  PIO_STACK_LOCATION irpSp ;
  PDISKETTE_EXTENSION disketteExtension ;
  PDISK_GEOMETRY outputBuffer ;
  NTSTATUS ntStatus ;
  ULONG outputBufferLength ;
  UCHAR i ;
  DRIVE_MEDIA_TYPE lowestDriveMediaType ;
  DRIVE_MEDIA_TYPE highestDriveMediaType ;
  ULONG formatExParametersSize ;
  PFORMAT_EX_PARAMETERS formatExParameters ;
  PMOUNTDEV_NAME mountName ;
  PMOUNTDEV_UNIQUE_ID uniqueId ;
  PMOUNTDEV_SUGGESTED_LINK_NAME suggestedName ;
  WCHAR driveLetterNameBuffer[10] ;
  RTL_QUERY_REGISTRY_TABLE queryTable[2] ;
  PWSTR valueName ;
  UNICODE_STRING driveLetterName ;

  // Some abstraction ...
  BOOLEAN temp__1;
  ULONG tag__1;  
  int NON_DET_1,NON_DET_2,NON_DET_3, NON_DET_4,NON_DET_5,NON_DET_6;
  int NON_DET_7,NON_DET_8,NON_DET_9,NON_DET_10,NON_DET_11;
  

  disketteExtension = DeviceObject->DeviceExtension;
  irpSp = ((Irp->Tail).Overlay).CurrentStackLocation;
  ExAcquireFastMutex(& disketteExtension->HoldNewReqMutex);
  if(disketteExtension->HoldNewRequests)
    {
      if(NON_DET_1 /* ((irpSp->Parameters).DeviceIoControl).IoControlCode != */
	           /*(0x00000032 << 16 | (0x0001 | 0x0002) << 14 | 0 << 2 | */
	           /* 0)*/)
	{
	  ntStatus = FloppyQueueRequest(disketteExtension, Irp);	  
	  ExReleaseFastMutex(& disketteExtension->HoldNewReqMutex); 
	  return ntStatus;
	}
    }
  ExReleaseFastMutex(& disketteExtension->HoldNewReqMutex);
  if(MydisketteExtensionIsRemoved /*disketteExtension->IsRemoved*/)
    {
      (Irp->IoStatus).Information = 0;
      (Irp->IoStatus).Status = (NTSTATUS )0xC0000056L;
      myStatus = (NTSTATUS )0xC0000056L;	
      IofCompleteRequest(Irp, 0);
      return (NTSTATUS )0xC0000056L;
    }
  if(! disketteExtension->IsStarted)
    {
      // TRACER
      /* _ABORT(s != NP); */
      /* s = SKIP1; */
      
      // BLAST      
      if(s == NP)
	s = SKIP1;
      else
	errorFn();

      Irp->CurrentLocation++;
      ((Irp->Tail).Overlay).CurrentStackLocation++;
      return IofCallDriver(disketteExtension->TargetObject, Irp);
    }

  switch(NON_DET_2 /*((irpSp->Parameters).DeviceIoControl).IoControlCode */)
    {
    case 1 /* (ULONG )'M' << 16 | 0 << 14 | 2 << 2 | 0 */:
      {
	if(((irpSp->Parameters).DeviceIoControl).OutputBufferLength < sizeof(MOUNTDEV_NAME ))	   
	  {
	    ntStatus = (NTSTATUS)0xC000000DL;
	    break;
	  }
	mountName = (Irp->AssociatedIrp).SystemBuffer;
	mountName->NameLength = (disketteExtension->DeviceName).Length;
	if(NON_DET_5 /* ((irpSp->Parameters).DeviceIoControl).OutputBufferLength */
	             /*< sizeof(USHORT ) + mountName->NameLength */)
	  {
	    ntStatus = (NTSTATUS )0x80000005L;
	    (Irp->IoStatus).Information = sizeof(MOUNTDEV_NAME );
	    break;
	  }
	memcpy(mountName->Name,
	       (disketteExtension->DeviceName).Buffer,
	       mountName->NameLength);
	ntStatus = (NTSTATUS )0x00000000L;
	(Irp->IoStatus).Information = sizeof(USHORT ) + mountName->NameLength;
	break;
      }
    case 2 /* (ULONG )'M' << 16 | 0 << 14 | 0 << 2 | 0 */:
      {
	if(! NON_DET_3 /* ! (disketteExtension->InterfaceString).Buffer || */
 	               /*((irpSp->Parameters).DeviceIoControl).OutputBufferLength */
              	       /*< sizeof(MOUNTDEV_UNIQUE_ID ) */)
	  {
	    ntStatus = (NTSTATUS)0xC000000DL;
	    break;
	  }
	uniqueId = (Irp->AssociatedIrp).SystemBuffer;
	uniqueId->UniqueIdLength = (disketteExtension->InterfaceString).Length;
	if(NON_DET_4  /* ((irpSp->Parameters).DeviceIoControl).OutputBufferLength */
	              /*< sizeof(USHORT ) + uniqueId->UniqueIdLength */)
	  {
	    ntStatus = (NTSTATUS)0x80000005L;
	    /* (Irp->IoStatus).Information = sizeof(MOUNTDEV_UNIQUE_ID ); */
	    break;
	  }
	memcpy(uniqueId->UniqueId,
	       (disketteExtension->InterfaceString).Buffer,
	       uniqueId->UniqueIdLength);
	ntStatus = (NTSTATUS )0x00000000L;
	(Irp->IoStatus).Information = sizeof(USHORT ) + uniqueId->UniqueIdLength;	  
	break;
      }
    case 3 /* 0x00000007 << 16 | (0x0001 | 0x0002) << 14 | 0x0006 << 2 | 0 */ :
    case 4 /* 0x00000007 << 16 | (0x0001 | 0x0002) << 14 | 0x000b << 2 | 0 */ :
      if(NON_DET_6 /* ((irpSp->Parameters).DeviceIoControl).InputBufferLength < */
                   /* sizeof(FORMAT_PARAMETERS ) */)
	{
	  ntStatus = (NTSTATUS )0xC000000DL;
	  break;
	}
      temp__1 = FlCheckFormatParameters(disketteExtension,
					(PFORMAT_PARAMETERS )(Irp->AssociatedIrp).SystemBuffer);

      if(! temp__1)
	{
	  ntStatus = (NTSTATUS )0xC000000DL;
	  break;
	}
      // #line 1214
      if(NON_DET_7/* ((irpSp->Parameters).DeviceIoControl).IoControlCode == */
	          /*(0x00000007 << 16 | (0x0001 | 0x0002) << 14 | 0x000b << */
	          /*2 | 0) */)
	{
	  if(NON_DET_8 /*((irpSp->Parameters).DeviceIoControl).InputBufferLength */
	               /*< sizeof(FORMAT_EX_PARAMETERS ) */)
	    {
	      ntStatus = (NTSTATUS)0xC000000DL;
	      break;
	    }
/* 	  formatExParameters = (PFORMAT_EX_PARAMETERS)(Irp->AssociatedIrp).SystemBuffer;      */
/* 	  formatExParametersSize = (LONG )((LONG_PTR )(& */
/* 						       ((FORMAT_EX_PARAMETERS *  )0)->SectorNumber)) + */
/* 	                            formatExParameters->SectorsPerTrack *sizeof(USHORT ); */
	    
	  if(NON_DET_9 /* ((irpSp->Parameters).DeviceIoControl).InputBufferLength */
                       /* 	     < formatExParametersSize || */
	               /* formatExParameters->FormatGapLength >= 0x100 || */
	               /* formatExParameters->SectorsPerTrack >= 0x100 */)
	    {
	      ntStatus = (NTSTATUS)0xC000000DL;
	      break;
	    }
	}
    case 5 /* 0x00000007 << 16 | 0x0001 << 14 | 0x0200 << 2 | 0 */ :
    case 6 /* 0x0000002d << 16 | 0x0001 << 14 | 0x0200 << 2 | 0 */ :
    case 7 /* 0x00000007 << 16 | 0 << 14 | 0x0000 << 2 | 0 */ :
    case 8 /* 0x00000007 << 16 | 0 << 14 | 0x0009 << 2 | 0 */ :
      ntStatus = FlQueueIrpToThread(Irp,disketteExtension);
      break;
    case 9 /* 0x00000007 << 16 | 0 << 14 | 0x0300 << 2 | 0 */ :
    case 10 /* 0x0000002d << 16 | 0 << 14 | 0x0300 << 2 | 0 */ :
      {
	lowestDriveMediaType = (DriveMediaLimits[disketteExtension->DriveType]).LowestDriveMediaType; 
	highestDriveMediaType =(DriveMediaLimits[disketteExtension->DriveType]).HighestDriveMediaType;
	outputBufferLength = ((irpSp->Parameters).DeviceIoControl).OutputBufferLength;
	if(outputBufferLength < sizeof(DISK_GEOMETRY ))
	  {
	    ntStatus = (NTSTATUS)0xC0000023L;
	    break;
	  }
	ntStatus = (NTSTATUS )0x00000000L;
	if(outputBufferLength < sizeof(DISK_GEOMETRY ) *
	   (highestDriveMediaType - lowestDriveMediaType +1))	    
	  {
	    ntStatus = (NTSTATUS)0x80000005L;
	    highestDriveMediaType = (DRIVE_MEDIA_TYPE)(lowestDriveMediaType - 1 +outputBufferLength / 
						       sizeof(DISK_GEOMETRY ));
	  }
	outputBuffer = (PDISK_GEOMETRY)(Irp->AssociatedIrp).SystemBuffer;
			
	for(i = (UCHAR )lowestDriveMediaType; i <= (UCHAR)highestDriveMediaType; i++)
	  {
	    outputBuffer->MediaType =(DriveMediaConstants[i]).MediaType;
	    (outputBuffer->Cylinders).LowPart = (DriveMediaConstants[i]).MaximumTrack + 1;
	    (outputBuffer->Cylinders).HighPart = 0;
	    outputBuffer->TracksPerCylinder = (DriveMediaConstants[i]).NumberOfHeads;
	    outputBuffer->SectorsPerTrack =(DriveMediaConstants[i]).SectorsPerTrack ;
	    outputBuffer->BytesPerSector = (DriveMediaConstants[i]).BytesPerSector;
	    outputBuffer++;
	    (Irp->IoStatus).Information += sizeof(DISK_GEOMETRY );
	  }        
	break;
      }
    case 11 /* (ULONG )'M' << 16 | 0 << 14 | 3 << 2 | 0 */ :
      {
	if(NON_DET_10 /* ((KUSER_SHARED_DATA * const */
	              /* )0xffdf0000)->AlternativeArchitecture == */
	              /* NEC98x86 */)
	  {
	    if(! (DeviceObject->Characteristics & 0x00000001))
	      {
		ntStatus = (NTSTATUS)0xC0000225L;
		break;
	      }
	    if(NON_DET_11 /* ((irpSp->Parameters).DeviceIoControl).OutputBufferLength */
	                  /* < sizeof(MOUNTDEV_SUGGESTED_LINK_NAME ) */)
	      {
		ntStatus = (NTSTATUS)0xC000000DL;
		break;
	      }
	    valueName = ExAllocatePoolWithTag(PagedPool,sizeof(WCHAR ) * 64, tag__1 /* 'polF' */);
	    if(! valueName)
	      {
		ntStatus = (NTSTATUS)0xC000009AL;
		break;
	      }
	    memset(valueName, 0, sizeof(WCHAR ) * 64);
	    memcpy(valueName,
		   (disketteExtension->DeviceName).Buffer,
		   (disketteExtension->DeviceName).Length);
	    driveLetterName.Buffer = driveLetterNameBuffer;
	    driveLetterName.MaximumLength = 20;
	    driveLetterName.Length = 0;
	    memset(queryTable, 0, 2 *
		   sizeof(RTL_QUERY_REGISTRY_TABLE ));
	    (queryTable[0]).Flags = 0x00000004 | 0x00000020;
	    (queryTable[0]).Name = valueName;
	    (queryTable[0]).EntryContext = & driveLetterName;	      
	    
	    ntStatus = RtlQueryRegistryValues(0,
  "\134\0R\0e\0g\0i\0s\0t\0r\0y\0\134\0M\0a\0c\0h\0i\0n\0e\0\134\0S\0y\0s\0t\0e\0m\0\134\0D\0I\0S\0K\0",
					      queryTable, (void *  )0, (void *  )0);
	    if(! ((NTSTATUS )ntStatus >= 0))	      
	      {
		ExFreePool(valueName);
		break;
	      }
	    if(driveLetterName.Length != 4 ||
	       (driveLetterName.Buffer)[0] < 'A' ||
	       (driveLetterName.Buffer)[0] > 'Z' ||
	       (driveLetterName.Buffer)[1] != ':')
	      {
		ntStatus = (NTSTATUS)0xC0000225L;
		ExFreePool(valueName);
		break;
	      }
	    suggestedName = (Irp->AssociatedIrp).SystemBuffer;
	    suggestedName->UseOnlyIfThereAreNoOtherLinks =1;
	    suggestedName->NameLength = 28;
	    (Irp->IoStatus).Information=(LONG)((LONG_PTR)(&((MOUNTDEV_SUGGESTED_LINK_NAME*)0)->Name))+28;
	    if(((irpSp->Parameters).DeviceIoControl).OutputBufferLength
	       < (Irp->IoStatus).Information)
	      {
		(Irp->IoStatus).Information =sizeof(MOUNTDEV_SUGGESTED_LINK_NAME);		  
		ntStatus = (NTSTATUS)0x80000005L;
		ExFreePool(valueName);
		break;
	      }
/* 	    RtlDeleteRegistryValue(0, */
/*"\134\0R\0e\0g\0i\0s\0t\0r\0y\0\134\0M\0a\0c\0h\0i\0n\0e\0\134\0S\0y\0s\0t\0e\0m\0\134\0D\0I\0S\0K\0", */
/* 				   valueName); */

	    ExFreePool(valueName);
	    memcpy(suggestedName->Name,
		   "\134\0D\0o\0s\0D\0e\0v\0i\0c\0e\0s\0\134\0",24);		   
	    (suggestedName->Name)[12] = (driveLetterName.Buffer)[0];	      
	    (suggestedName->Name)[13] = ':';
	    break;
	  }
      }
    case 12 /* 0x00000007 << 16 | 0 << 14 | 0x00f8 << 2 | 0 */:
      {
	if(NON_DET_11 /* ((KUSER_SHARED_DATA * const */
	              /* )0xffdf0000)->AlternativeArchitecture == */
	              /* NEC98x86 */)	   
	  {
	    if(((irpSp->Parameters).DeviceIoControl).OutputBufferLength
	       < sizeof(SENSE_DEVISE_STATUS_PTOS ))
	      {
		ntStatus = (NTSTATUS)0xC000000DL;
		break;
	      }
	    ntStatus =FlQueueIrpToThread(Irp,disketteExtension);
	    break;
	  }
      }
    default :
      {
        // TRACER
	/* _ABORT(s != NP); */
	/* s = SKIP1; */
	
	// BLAST	
	if(s == NP)
	  s = SKIP1;
	else
	  errorFn();

	Irp->CurrentLocation++;
	((Irp->Tail).Overlay).CurrentStackLocation++;
	ntStatus = IofCallDriver(disketteExtension->TargetObject,Irp);
	return ntStatus;
      }
    } // end of switch

  if(ntStatus != (NTSTATUS )0x00000103L)
    {
      (Irp->IoStatus).Status = ntStatus;
      myStatus = ntStatus;
      
      if(! ((NTSTATUS )ntStatus >= 0) && 
	    /* (BOOLEAN) */ 
	 (ntStatus == (NTSTATUS )0xC00000A3L ||
	  ntStatus == (NTSTATUS)0xC00000B5L ||
	  ntStatus == (NTSTATUS )0xC00000A2L ||
	  ntStatus == (NTSTATUS )0xC0000013L ||		       
	  ntStatus == (NTSTATUS )0x80000016L ||
	  ntStatus == (NTSTATUS)0xC0000014L || 
	  ntStatus == (NTSTATUS )0xC0000012L))					
	IoSetHardErrorOrVerifyDevice(Irp, DeviceObject);
      
      IofCompleteRequest(Irp, 0);
    }
  return ntStatus;
}

NTSTATUS FloppyPnp(PDEVICE_OBJECT DeviceObject , PIRP Irp )
{
  PIO_STACK_LOCATION irpSp ;
  PIO_STACK_LOCATION nextIrpSp ;
  PDISKETTE_EXTENSION disketteExtension ;
  NTSTATUS ntStatus;
  ULONG i ;
  KEVENT doneEvent ;

  ntStatus = (NTSTATUS )0x00000000L;
  ExAcquireFastMutex(PagingMutex);
  PagingReferenceCount++;
  if(PagingReferenceCount == 1 /* ++ PagingReferenceCount == 1 */)
    MmResetDriverPaging(DriverEntry);
  ExReleaseFastMutex(PagingMutex);
  
  disketteExtension = DeviceObject->DeviceExtension;
  irpSp = ((Irp->Tail).Overlay).CurrentStackLocation;
  if(MydisketteExtensionIsRemoved /*disketteExtension->IsRemoved*/)
    {
      (Irp->IoStatus).Information = 0;
      (Irp->IoStatus).Status = (NTSTATUS )0xC0000056L;
      myStatus = (NTSTATUS )0xC0000056L;      
      IofCompleteRequest(Irp, 0);
      return (NTSTATUS )0xC0000056L;
    }

  switch(irpSp->MinorFunction)
    {
    case 0:
      ntStatus = FloppyStartDevice(DeviceObject, Irp); // <-------
      break;
    case 5:
    case 1:
      /*if(irpSp->MinorFunction == 5){ } */
      /*else {} */
      if(! disketteExtension->IsStarted)
	{
	  // TRACER
	  /* _ABORT(s != NP); */
	  /* s = SKIP1; */
	  
	  // BLAST
	  if(s == NP)
	    s = SKIP1;
	  else
	    errorFn();
	  
 	  Irp->CurrentLocation++;
	  ((Irp->Tail).Overlay).CurrentStackLocation++;
	  ntStatus = IofCallDriver(disketteExtension->TargetObject,Irp);
	  return ntStatus;
	}
    ExAcquireFastMutex(& disketteExtension->HoldNewReqMutex);
    disketteExtension->HoldNewRequests = 1;
    ExReleaseFastMutex(& disketteExtension->HoldNewReqMutex);
    ntStatus = FlQueueIrpToThread(Irp, disketteExtension);
    if(ntStatus == (NTSTATUS )0x00000103L)
      {
	KeWaitForSingleObject(disketteExtension->FloppyThread,
			      Executive, KernelMode, 0, (void *  )0);
	if(disketteExtension->FloppyThread != (void *  )0)
	    ObfDereferenceObject(disketteExtension->FloppyThread);
	disketteExtension->FloppyThread = (void *  )0;
	(Irp->IoStatus).Status = (NTSTATUS )0x00000000L;
	myStatus = (NTSTATUS )0x00000000L;

	// TRACER
	/* _ABORT(s != NP); */
	/* s = SKIP1; */
	
	// BLAST
	if(s == NP)
	  s = SKIP1;
	else
	  errorFn();

	Irp->CurrentLocation++;       
	((Irp->Tail).Overlay).CurrentStackLocation++;
	ntStatus =IofCallDriver(disketteExtension->TargetObject,Irp);
      }
    else
      {
	ntStatus = (NTSTATUS )0xC0000001L;
	(Irp->IoStatus).Status = ntStatus;
	myStatus = ntStatus;
	
	(Irp->IoStatus).Information = 0;
	IofCompleteRequest(Irp, 0);
      }
    break;
    case 6:
    case 3:
      /*if(irpSp->MinorFunction == 0x06){} */
      /*else{} */

      if(! disketteExtension->IsStarted)
	{
	  (Irp->IoStatus).Status = (NTSTATUS )0x00000000L;
	  myStatus = (NTSTATUS )0x00000000L;
	  
	  // TRACER
	  /* _ABORT(s != NP); */
	  /* s = SKIP1; */

	  // BLAST
	  if(s == NP)
	    s = SKIP1;
	  else
	    errorFn();
	  
	  Irp->CurrentLocation++;
	  ((Irp->Tail).Overlay).CurrentStackLocation++;
	  ntStatus =IofCallDriver(disketteExtension->TargetObject,Irp);
	}
      else
	{
	  (Irp->IoStatus).Status = (NTSTATUS )0x00000000L;
	  myStatus = (NTSTATUS )0x00000000L;
	  {
	    // PIO_STACK_LOCATION irpSp ;
	    irpSp =((Irp->Tail).Overlay).CurrentStackLocation;
	    nextIrpSp =((Irp->Tail).Overlay).CurrentStackLocation -1;
	    memcpy(nextIrpSp, irpSp, (LONG )((LONG_PTR )(&((IO_STACK_LOCATION *)0)->CompletionRoutine)));
	    nextIrpSp->Control = 0;
	  }
	  KeInitializeEvent(& doneEvent, SynchronizationEvent, 0);

	  // TRACER
	  /* _ABORT( (s != NP)); */
	  /* _ABORT((compRegistered != 0)) ; */
	  /* compRegistered = 1; */
	  // Here we are passing the function name FloppyPnpComplete!
	  // We comment it because it may cause problems to the compilation.
	  // compFptr = FloppyPnpComplete;

	  // BLAST
	  if(s != NP)
	    errorFn();
	  else
	  {
	     if(compRegistered != 0)
	        errorFn();
	  	else
	  	{
	  	   compRegistered = 1;
	  	   compFptr = FloppyPnpComplete;
	  	}
	  }

	  // PIO_STACK_LOCATION irpSp ;
	  irpSp = ((Irp->Tail).Overlay).CurrentStackLocation-1 ;
	  irpSp->CompletionRoutine = FloppyPnpComplete;
	  irpSp->Context = & doneEvent;
	  irpSp->Control = 0;
	  if(1)
	    {
	      irpSp->Control = 0x40;
	    }
	  if(1)
	    {
	      irpSp->Control = irpSp->Control | 0x80;
	    }
	  if(1)
	    {
	      irpSp->Control = irpSp->Control | 0x20;
	    }
	  
	  ntStatus =IofCallDriver(disketteExtension->TargetObject,Irp);
	  if(ntStatus == (NTSTATUS )0x00000103L)
	    {
	      KeWaitForSingleObject(& doneEvent, Executive,
				    KernelMode, 0, (void *  )0);
	      //BLAST ntStatus = (Irp->IoStatus).Status;
	      ntStatus = myStatus;
	    }
	  ExAcquireFastMutex(& disketteExtension->HoldNewReqMutex);
	  disketteExtension->HoldNewRequests = 0;
	  ExReleaseFastMutex(& disketteExtension->HoldNewReqMutex);
	  FloppyProcessQueuedRequests(disketteExtension);
	  (Irp->IoStatus).Status = ntStatus;
	  myStatus = ntStatus;         
	  (Irp->IoStatus).Information = 0;
	  IofCompleteRequest(Irp, 0);
	}
      break;
    case 0x04:
      disketteExtension->IsStarted = 0;
      (Irp->IoStatus).Status = (NTSTATUS )0x00000000L;
      myStatus = (NTSTATUS )0x00000000L;

      // TRACER
      /* _ABORT(s != NP); */
      /* s = SKIP1; */
      
      // BLAST
      if(s == NP)
        s = SKIP1;
      else
        errorFn();

      Irp->CurrentLocation++;
      ((Irp->Tail).Overlay).CurrentStackLocation++;
      ntStatus =IofCallDriver(disketteExtension->TargetObject, Irp);
      break;
    case 0x02:
      ExAcquireFastMutex(& disketteExtension->HoldNewReqMutex);
      disketteExtension->HoldNewRequests = 0;
      ExReleaseFastMutex(& disketteExtension->HoldNewReqMutex);
      disketteExtension->IsStarted = 0;
      disketteExtension->IsRemoved = 1;
      // TRACER shadow disketteExtension->IsRemoved
      MydisketteExtensionIsRemoved = 1;
      FloppyProcessQueuedRequests(disketteExtension);

      // TRACER 
      /* _ABORT(s != NP); */
      /* s = SKIP1; */

      // BLAST
      if(s == NP)
        s = SKIP1;
      else
        errorFn();

      Irp->CurrentLocation++;
      ((Irp->Tail).Overlay).CurrentStackLocation++;
      (Irp->IoStatus).Status = (NTSTATUS )0x00000000L;
      myStatus = (NTSTATUS )0x00000000L;
      ntStatus = IofCallDriver(disketteExtension->TargetObject, Irp);
      if((disketteExtension->InterfaceString).Buffer != (void *  )0)
	{
	  IoSetDeviceInterfaceState(& disketteExtension->InterfaceString, 0);
	  RtlFreeUnicodeString(& disketteExtension->InterfaceString);
	  RtlInitUnicodeString(& disketteExtension->InterfaceString, (void * )0);
	}
      RtlFreeUnicodeString(& disketteExtension->DeviceName);
      RtlInitUnicodeString(& disketteExtension->DeviceName, (void * )0);
      if((disketteExtension->ArcName).Length != 0)
	{
	  IoDeleteSymbolicLink(& disketteExtension->ArcName); 
	  RtlFreeUnicodeString(& disketteExtension->ArcName);
	  RtlInitUnicodeString(& disketteExtension->ArcName, (void *  )0);			       
	}
      IoDetachDevice(disketteExtension->TargetObject);
      IoDeleteDevice(DeviceObject);
      //(IoGetConfigurationInformation())->FloppyCount--;
      break;
    default :
      // TRACER
      /* _ABORT(s != NP); */
      /* s = SKIP1; */

      // BLAST
      if(s == NP)
         s = SKIP1;
      else
         errorFn();
            
      Irp->CurrentLocation++;
      ((Irp->Tail).Overlay).CurrentStackLocation++;
      ntStatus =IofCallDriver(disketteExtension->TargetObject, Irp);
    }
  ExAcquireFastMutex(PagingMutex);
  PagingReferenceCount--;
  if(PagingReferenceCount == 0 /* -- PagingReferenceCount == 0 */)
    {
      MmPageEntireDriver(DriverEntry);
    }
  ExReleaseFastMutex(PagingMutex);
  return ntStatus;
}

NTSTATUS FloppyStartDevice(PDEVICE_OBJECT DeviceObject , PIRP Irp )
{
  NTSTATUS ntStatus ;
  NTSTATUS pnpStatus ;
  KEVENT doneEvent ;
  FDC_INFO fdcInfo ;
  CONFIGURATION_TYPE Dc;
  CONFIGURATION_TYPE Fp;
  PDISKETTE_EXTENSION disketteExtension;
  PIO_STACK_LOCATION irpSp;
  PIO_STACK_LOCATION nextIrpSp ;
  INTERFACE_TYPE InterfaceType ;
  // Some abstraction ...
  int NON_DET_1;
  int BLAST_NONDET ;

  Dc = DiskController;
  Fp = FloppyDiskPeripheral;

  disketteExtension = (PDISKETTE_EXTENSION)DeviceObject->DeviceExtension;
  irpSp = ((Irp->Tail).Overlay).CurrentStackLocation;
  KeInitializeEvent(& doneEvent, NotificationEvent, 0);
  //PIO_STACK_LOCATION irpSp ;
  //PIO_STACK_LOCATION nextIrpSp ;
  irpSp = ((Irp->Tail).Overlay).CurrentStackLocation;
  nextIrpSp = ((Irp->Tail).Overlay).CurrentStackLocation - 1;
  memcpy(nextIrpSp, irpSp, (LONG )((LONG_PTR )(&((IO_STACK_LOCATION *  )0)->CompletionRoutine)));
  nextIrpSp->Control = 0;

  // TRACER
  /* _ABORT( (s != NP)); */
  /* _ABORT((compRegistered != 0));   */
  /* compRegistered = 1; */
  // We comment it to avoid problems with the compiler
  // compFptr = FloppyPnpComplete;
  
  // BLAST
    if(s != NP)
      errorFn();
    else
      {
        if(compRegistered != 0)
  	errorFn();
        else
  	{
  	  compRegistered = 1;
  	  compFptr = FloppyPnpComplete;
  	}
      }
  
  /* PIO_STACK_LOCATION irpSp ; */
  irpSp = ((Irp->Tail).Overlay).CurrentStackLocation - 1;
  irpSp->CompletionRoutine = FloppyPnpComplete;
  irpSp->Context = & doneEvent;
  irpSp->Control = 0;
  if(1)
    {
      irpSp->Control = 0x40;
    }
  if(1)
    {
      irpSp->Control = irpSp->Control | 0x80;
    }
  if(1)
    {
      irpSp->Control = irpSp->Control | 0x20;
    }
  
  ntStatus =IofCallDriver(disketteExtension->TargetObject, Irp);
  if(ntStatus == (NTSTATUS )0x00000103L)
    {
      ntStatus = KeWaitForSingleObject(& doneEvent,Executive,KernelMode,0,(void *  )0);
      //BLAST ntStatus = (Irp->IoStatus).Status;
      ntStatus = myStatus;
    }
  fdcInfo.BufferCount = 0;
  fdcInfo.BufferSize = 0;
  ntStatus =FlFdcDeviceIo(disketteExtension->TargetObject, 0x00000007 << 16    
			  | 0 << 14 | 0x302 << 2 | 3, & fdcInfo);
  if((NTSTATUS )ntStatus >= 0)
    {
      disketteExtension->MaxTransferSize = fdcInfo.MaxTransferSize;
      if(fdcInfo.AcpiBios && fdcInfo.AcpiFdiSupported)
	{
	  ntStatus =FlAcpiConfigureFloppy(disketteExtension, &fdcInfo);
	  if(disketteExtension->DriveType == 4){}
	/*disketteExtension->PerpendicularMode |= 1 << fdcInfo.PeripheralNumber;*/   
	}
      else
	{
	  /*INTERFACE_TYPE InterfaceType;*/
	  if(disketteExtension->DriveType == 4){}
	      /*disketteExtension->PerpendicularMode |= 1 << fdcInfo.PeripheralNumber;*/

	  /*
	    TRACER: We need to use here MINMAX
	  */
	  for(InterfaceType = 0; InterfaceType < MaximumInterfaceType; InterfaceType++)
	  {
	     fdcInfo.BusType = InterfaceType;	  
	     ntStatus = IoQueryDeviceDescription(& fdcInfo.BusType,
						 & fdcInfo.BusNumber, & Dc,
						 & fdcInfo.ControllerNumber, & Fp,
						 & fdcInfo.PeripheralNumber,
						 FlConfigCallBack, disketteExtension);
	     if((NTSTATUS )ntStatus >= 0)
	       break;
	  }  // POST: ntStatus is either 0x00000000L or 0xC0000001L.
	  
	  /* TRACER: Since ntStatus is either 0x00000000L or
	     0xC0000001L then we can add the following call after the
	     loop to avoid false positive */

	  ntStatus = IoQueryDeviceDescription(& fdcInfo.BusType,
	  				      & fdcInfo.BusNumber, & Dc,
	  				      & fdcInfo.ControllerNumber, & Fp,
	  				      & fdcInfo.PeripheralNumber,
	  				      FlConfigCallBack, disketteExtension);
	}
      if((NTSTATUS )ntStatus >= 0)
	{
	  if(NON_DET_1 /* ((KUSER_SHARED_DATA * const */
	               /* )0xffdf0000)->AlternativeArchitecture == */
	               /* NEC98x86 */)
	    {
	      disketteExtension->DeviceUnit = (UCHAR)fdcInfo.UnitNumber;
	      disketteExtension->DriveOnValue = (UCHAR)fdcInfo.UnitNumber;
	    }
	  else
	    {
	      disketteExtension->DeviceUnit = (UCHAR)fdcInfo.PeripheralNumber;
	      disketteExtension->DriveOnValue = (UCHAR)(fdcInfo.PeripheralNumber | 0x10 <<
						   fdcInfo.PeripheralNumber);
	    }
	  
	  pnpStatus = IoRegisterDeviceInterface(disketteExtension->UnderlyingPDO,
						(LPGUID )(& MOUNTDEV_MOUNTED_DEVICE_GUID),
						(void *  )0, &
						disketteExtension->InterfaceString);
	  if((NTSTATUS )pnpStatus >= 0)	    
	    pnpStatus = IoSetDeviceInterfaceState(&disketteExtension->InterfaceString, 1);

	  disketteExtension->IsStarted = 1;
	  ExAcquireFastMutex(& disketteExtension->HoldNewReqMutex);
	  disketteExtension->HoldNewRequests = 0;
	  ExReleaseFastMutex(& disketteExtension->HoldNewReqMutex);
	  FloppyProcessQueuedRequests(disketteExtension); // <----  _ABORT(s != NP);
	}
    }

  (Irp->IoStatus).Status = ntStatus;
  myStatus = ntStatus;
  IofCompleteRequest(Irp, 0);
  return ntStatus;
}

NTSTATUS FloppyPnpComplete(PDEVICE_OBJECT DeviceObject , PIRP Irp , PVOID Context )
{
  KeSetEvent((PKEVENT )Context, 1, 0);
  return (NTSTATUS )0xC0000016L;
}

NTSTATUS FloppyPower(PDEVICE_OBJECT DeviceObject , PIRP Irp )
{
  PDISKETTE_EXTENSION disketteExtension ;
  NTSTATUS ntStatus; 
  PIO_STACK_LOCATION irpSp ;
  POWER_STATE_TYPE type ;
  POWER_STATE state ;
  BOOLEAN WaitForCompletion;
  
  WaitForCompletion = 1;
  ntStatus = myStatus; //  BLAST (Irp->IoStatus).Status;

  disketteExtension = DeviceObject->DeviceExtension;
  irpSp = ((Irp->Tail).Overlay).CurrentStackLocation;

  type = ((irpSp->Parameters).Power).Type;
  state = ((irpSp->Parameters).Power).State;

  switch(irpSp->MinorFunction)
    {
    case 0x03:
      if((type == SystemPowerState) && (state.SystemState > PowerSystemHibernate))
	{
	  ntStatus = (NTSTATUS )0x00000000L;
	  break;
	}
      ExAcquireFastMutex(& disketteExtension->ThreadReferenceMutex);
      if(disketteExtension->ThreadReferenceCount >= 0)
	{
	  ExReleaseFastMutex(& disketteExtension->ThreadReferenceMutex) ;
	  PoStartNextPowerIrp(Irp);
	  (Irp->IoStatus).Information = 0;
	  (Irp->IoStatus).Status = (NTSTATUS )0x80000011L;
	  myStatus = (NTSTATUS )0x80000011L;
	  IofCompleteRequest(Irp, 0);
	  return (NTSTATUS )0x80000011L;
	}
      ExReleaseFastMutex(& disketteExtension->ThreadReferenceMutex);
      ntStatus = (NTSTATUS )0x00000000L;
      break;    
    case 0x02:
      {
	if(type == SystemPowerState)
	  {
	    ExAcquireFastMutex(& disketteExtension->PowerDownMutex);
	    if(state.SystemState == PowerSystemWorking)
	      {	
		disketteExtension->PoweringDown = 0;
		WaitForCompletion = 0;
	      }
	    else
	      {
		WaitForCompletion = 1;
		disketteExtension->PoweringDown = 1;
	      }
	    ExReleaseFastMutex(& disketteExtension->PowerDownMutex);
	    if(disketteExtension->FloppyThread != (void *)0 && WaitForCompletion == 1){  
	      KeWaitForSingleObject(disketteExtension->FloppyThread, Executive, KernelMode, 0,(void *  )0);
	    }
	  }
	ntStatus = (NTSTATUS )0x00000000L;
	break;
      }   
    default :
	break;
    } // end switch

   PoStartNextPowerIrp(Irp);  

   // TRACER
   /* _ABORT(s != NP); */
   /* s = SKIP1; */

   // BLAST
   if(s == NP)
    s = SKIP1;
   else
    errorFn();
   
   Irp->CurrentLocation++;
   ((Irp->Tail).Overlay).CurrentStackLocation++;
   ntStatus = PoCallDriver(disketteExtension->TargetObject,Irp);
   return ntStatus;
}

NTSTATUS FloppyReadWrite(PDEVICE_OBJECT DeviceObject , PIRP Irp )
{
  PIO_STACK_LOCATION irpSp ;
  NTSTATUS ntStatus ;
  PDISKETTE_EXTENSION disketteExtension ;

  disketteExtension = DeviceObject->DeviceExtension;
  irpSp = ((Irp->Tail).Overlay).CurrentStackLocation;
  ExAcquireFastMutex(& disketteExtension->HoldNewReqMutex);
  if(disketteExtension->HoldNewRequests)
    {
      ntStatus = FloppyQueueRequest(disketteExtension, Irp);
      ExReleaseFastMutex(& disketteExtension->HoldNewReqMutex);
      return ntStatus;
    }
  ExReleaseFastMutex(& disketteExtension->HoldNewReqMutex);
  if(MydisketteExtensionIsRemoved /*disketteExtension->IsRemoved*/ || 
     ! disketteExtension->IsStarted)
    {
      if(MydisketteExtensionIsRemoved /*disketteExtension->IsRemoved*/)
	ntStatus = (NTSTATUS )0xC0000056L;
      else
	ntStatus = (NTSTATUS )0xC0000001L;

      (Irp->IoStatus).Information = 0;
      (Irp->IoStatus).Status = ntStatus;
      myStatus = ntStatus;
      IofCompleteRequest(Irp, 0);
      return ntStatus;
    }
  if(disketteExtension->MediaType > Unknown &&
     ((((irpSp->Parameters).Read).ByteOffset).LowPart +
      ((irpSp->Parameters).Read).Length >
      disketteExtension->ByteCapacity ||
      (((irpSp->Parameters).Read).Length &
       disketteExtension->BytesPerSector - 1) != 0))
    ntStatus = (NTSTATUS )0xC000000DL;
  else
    {
      if(((irpSp->Parameters).Read).Length)
	ntStatus = FlQueueIrpToThread(Irp, disketteExtension);
      else
	{
	  (Irp->IoStatus).Information = 0;
	  (Irp->IoStatus).Status = (NTSTATUS )0x00000000L;
	  myStatus = (NTSTATUS )0x00000000L;
	  IofCompleteRequest(Irp, 0);
	  return (NTSTATUS )0x00000000L;
	}
    }
  if(ntStatus != (NTSTATUS )0x00000103L)
    {
      (Irp->IoStatus).Status = ntStatus;
      myStatus = ntStatus;
      IofCompleteRequest(Irp, 0);
    }

  return ntStatus;
}

NTSTATUS FlInterpretError(UCHAR StatusRegister1 , UCHAR StatusRegister2 )
{
  // Some abstraction ...
  int NONDET_1, NONDET_2, NONDET_3,NONDET_4,NONDET_5,NONDET_6,NONDET_7;

  if(NONDET_1 /* StatusRegister1 & 0x20 || StatusRegister2 & 0x20 */)
      return (NTSTATUS )0xC000003FL;
  if(NONDET_2 /* StatusRegister1 & 0x10 */)
      return (NTSTATUS )0xC000003CL;
  if(NONDET_3 /* StatusRegister1 & 0x04 || StatusRegister1 & 0x80 */)
      return (NTSTATUS )0xC0000015L;
  if(NONDET_4 /* StatusRegister2 & 0x01 || StatusRegister2 & 0x02 || StatusRegister2 & 0x40 */)
    return (NTSTATUS )0xC000009CL;
  if(NONDET_5 /* StatusRegister1 & 0x02 */)
    return (NTSTATUS )0xC00000A2L;
  if(NONDET_6 /* StatusRegister1 & 0x01 */)
    return (NTSTATUS )0xC0000165L;
  if(NONDET_7 /* StatusRegister2 & 0x10 */)
    return (NTSTATUS )0xC0000166L;

  return (NTSTATUS )0xC0000167L;
}


void FlFinishOperation(PIRP Irp , PDISKETTE_EXTENSION DisketteExtension )
{
  NTSTATUS ntStatus ;
  //BLAST	if((Irp->IoStatus).Status != (NTSTATUS )0x00000000L &&
  if(myStatus != (NTSTATUS )0x00000000L && DisketteExtension->HardwareFailed)
    {
      DisketteExtension->HardwareFailCount++;
      if(DisketteExtension->HardwareFailCount < 2)
	{
	  ntStatus = FlInitializeControllerHardware(DisketteExtension);
	  if((NTSTATUS )ntStatus >= 0)
	    {
	      DisketteExtension->MediaType = - 1;
	      ExAcquireFastMutex(& DisketteExtension->ThreadReferenceMutex);
	      DisketteExtension->ThreadReferenceCount++;
	      ExReleaseFastMutex(& DisketteExtension->ThreadReferenceMutex) ;
	      ExfInterlockedInsertHeadList(& DisketteExtension->ListEntry,
					   & ((Irp->Tail).Overlay).ListEntry,
					   & DisketteExtension->ListSpinLock);
					   
	      return;
	    }
	}
    }
	DisketteExtension->HardwareFailCount = 0;
   /*BLAST	if(! ((NTSTATUS )(Irp->IoStatus).Status >= 0) && (BOOLEAN
		)((Irp->IoStatus).Status == (NTSTATUS )0xC00000A3L ||
		(Irp->IoStatus).Status == (NTSTATUS )0xC00000B5L ||
		(Irp->IoStatus).Status == (NTSTATUS )0xC00000A2L ||
		(Irp->IoStatus).Status == (NTSTATUS )0xC0000013L ||
		(Irp->IoStatus).Status == (NTSTATUS )0x80000016L ||
		(Irp->IoStatus).Status == (NTSTATUS )0xC0000014L ||
		(Irp->IoStatus).Status == (NTSTATUS )0xC0000012L))
   */
	if(! ((NTSTATUS )myStatus >= 0) && 
	   /* 	   (BOOLEAN) */
	   (myStatus == (NTSTATUS )0xC00000A3L ||
	    myStatus == (NTSTATUS )0xC00000B5L ||
	    myStatus == (NTSTATUS )0xC00000A2L ||
	    myStatus == (NTSTATUS )0xC0000013L ||
	    myStatus == (NTSTATUS )0x80000016L ||
	    myStatus == (NTSTATUS )0xC0000014L ||
	    myStatus == (NTSTATUS )0xC0000012L))
	  IoSetHardErrorOrVerifyDevice(Irp, DisketteExtension->DeviceObject);
	
	/*BLAST
	  if((Irp->IoStatus).Status != (NTSTATUS )0x00000000L &&
	  (Irp->IoStatus).Status != (NTSTATUS )0x80000016L &&
	  (Irp->IoStatus).Status != (NTSTATUS )0xC0000013L)
	*/

	if(myStatus != (NTSTATUS )0x00000000L &&
	   myStatus != (NTSTATUS )0x80000016L &&
	   myStatus != (NTSTATUS )0xC0000013L) { }
	else { }
	
	IofCompleteRequest(Irp, 1);
}

NTSTATUS FlStartDrive(PDISKETTE_EXTENSION DisketteExtension , 
		      PIRP Irp , 
		      BOOLEAN WriteOperation , BOOLEAN SetUpMedia , 
		      BOOLEAN IgnoreChange )	
{
  LARGE_INTEGER delay ;
  BOOLEAN motorStarted ;
  BOOLEAN diskChanged ;
  UCHAR driveStatus ;
  NTSTATUS ntStatus;
  FDC_ENABLE_PARMS fdcEnableParms ;
  FDC_DISK_CHANGE_PARMS fdcDiskChangeParms ;
  
  // Some abstraction ...
  int NON_DET_1,NON_DET_2,NON_DET_3,NON_DET_4; 
  int temp__1;
  
  ntStatus = (NTSTATUS )0x00000000L;
  
  DriveMediaConstants[(DriveMediaLimits[DisketteExtension->DriveType]).HighestDriveMediaType] =
    DisketteExtension->BiosDriveMediaConstants;
  if(DisketteExtension->MediaType == - 1 || DisketteExtension->MediaType == Unknown)
    DisketteExtension->DriveMediaConstants = DriveMediaConstants[0];
  
  fdcEnableParms.DriveOnValue = DisketteExtension->DriveOnValue;
  if(WriteOperation)
    fdcEnableParms.TimeToWait = (DisketteExtension->DriveMediaConstants).MotorSettleTimeWrite;
  else
    fdcEnableParms.TimeToWait = (DisketteExtension->DriveMediaConstants).MotorSettleTimeRead;
  ntStatus = FlFdcDeviceIo(DisketteExtension->TargetObject, 0x00000007 <<
			   16 | 0 << 14 | 0x306 << 2 | 3, & fdcEnableParms);
  
  motorStarted = fdcEnableParms.MotorStarted;
  
  if((NTSTATUS )ntStatus >= 0)
    {
      fdcDiskChangeParms.DriveOnValue = DisketteExtension->DriveOnValue;
      ntStatus = FlFdcDeviceIo(DisketteExtension->TargetObject,
			       0x00000007 << 16 | 0 << 14 | 0x308 << 2 | 3, &
			       fdcDiskChangeParms);
      driveStatus = fdcDiskChangeParms.DriveStatus;
    }
  
  if(! ((NTSTATUS )ntStatus >= 0))
    return ntStatus;
  
  if(DisketteExtension->DriveType == 0 && motorStarted ||
     DisketteExtension->DriveType != 0 && driveStatus & 0x80)
    {
      DisketteExtension->MediaType = - 1;
      if(((DisketteExtension->DeviceObject)->Vpb)->Flags & 0x00000001)
	{
	  if(Irp)
	    IoSetHardErrorOrVerifyDevice(Irp, DisketteExtension->DeviceObject);
	  (DisketteExtension->DeviceObject)->Flags |= 0x00000002;
	}
      if(DisketteExtension->DriveType != 0)
	{
	  if(NON_DET_1 /* ((KUSER_SHARED_DATA * const */
	               /* )0xffdf0000)->AlternativeArchitecture == */
	               /* NEC98x86 */)
	    {
	      (DisketteExtension->FifoBuffer)[0] = 0x0E;
	      (DisketteExtension->FifoBuffer)[1] = DisketteExtension->DeviceUnit;
	      ntStatus = FlIssueCommand(DisketteExtension,
					DisketteExtension->FifoBuffer,
					DisketteExtension->FifoBuffer, (void * )0, 0, 0);
	      if(! ((NTSTATUS )ntStatus >= 0))
		return ntStatus;
	      if((DisketteExtension->FifoBuffer)[0] & 0x20)
		driveStatus = 0x7f;
	      else
		driveStatus = 0x80;
	      
	      if(driveStatus & 0x80)
		{
		  // Problems to compile these lines ...
		  /*  if(((DisketteExtension->DeviceObject)->Vpb)->Flags & 0x00000001) */
		  /*    (DisketteExtension->DeviceObject)->Flags &= ~ 0x00000002; */
		  return (NTSTATUS )0xC0000013L;
		}
	    }
	  (DisketteExtension->FifoBuffer)[0] = 0x10;
	  (DisketteExtension->FifoBuffer)[1] = DisketteExtension->DeviceUnit;
	  (DisketteExtension->FifoBuffer)[2] = 1;
	  ntStatus = FlIssueCommand(DisketteExtension,
				    DisketteExtension->FifoBuffer,
				    DisketteExtension->FifoBuffer, (void *  )0, 0,
				    0);
	  if(! ((NTSTATUS )ntStatus >= 0))
	    return ntStatus;
	  else
	    {
	      if(! ((DisketteExtension->FifoBuffer)[0] & 0x20)
		 || (DisketteExtension->FifoBuffer)[1] != 1)
		{
		  DisketteExtension->HardwareFailed = 1;
		  return (NTSTATUS )0xC0000168L;
		}
		  }
	  (DisketteExtension->FifoBuffer)[0] = 0x10;
	  (DisketteExtension->FifoBuffer)[1] = DisketteExtension->DeviceUnit;
	  (DisketteExtension->FifoBuffer)[2] = 0;
	  delay.LowPart = (ULONG )(- 900);
	  delay.HighPart = - 1;
	  KeDelayExecutionThread(KernelMode, 0, & delay);
	  ntStatus = FlIssueCommand(DisketteExtension,
				    DisketteExtension->FifoBuffer,
				    DisketteExtension->FifoBuffer, (void *  )0, 0,
				    0);
	  delay.LowPart = (ULONG )(- 5);
	  delay.HighPart = - 1;
	  KeDelayExecutionThread(KernelMode, 0, & delay);
	  if(! ((NTSTATUS )ntStatus >= 0))
	    return ntStatus;
	  else
	    {
	      if(! ((DisketteExtension->FifoBuffer)[0] & 0x20)
		 || (DisketteExtension->FifoBuffer)[1] != 0)
		{
		  DisketteExtension->HardwareFailed = 1;
		  return (NTSTATUS )0xC0000168L;
		}
	    }
	  if(NON_DET_2 /* ((KUSER_SHARED_DATA * const */
	               /* )0xffdf0000)->AlternativeArchitecture == */
	               /* NEC98x86 */)
	    {
	      (DisketteExtension->FifoBuffer)[0] = 0x0E;
	      (DisketteExtension->FifoBuffer)[1] = DisketteExtension->DeviceUnit;
	      ntStatus = FlIssueCommand(DisketteExtension,
					DisketteExtension->FifoBuffer,
					DisketteExtension->FifoBuffer, (void * )0, 0, 0); 
	      if(! ((NTSTATUS )ntStatus >= 0))
		return ntStatus;
	      if((DisketteExtension->FifoBuffer)[0] & 0x20)
		driveStatus = 0x7f;
	      else
		driveStatus = 0x80;
	    }
	  else
	    {
	      ntStatus = FlFdcDeviceIo(DisketteExtension->TargetObject,		      
				       0x00000007 << 16 | 0 << 14 | 0x308 << 2
				       | 3, & fdcDiskChangeParms);
	      driveStatus = fdcDiskChangeParms.DriveStatus;
	      if(! ((NTSTATUS )ntStatus >= 0))
		return ntStatus;
	    }
	  if(driveStatus & 0x80)
	    {
	      // Problems to compile these lines ...
	      /* if(((DisketteExtension->DeviceObject)->Vpb)->Flags & 0x00000001) */
	      /*   (DisketteExtension->DeviceObject)->Flags &= ~ 0x00000002; */
	      return (NTSTATUS )0xC0000013L;
	    }
	}
      if(IgnoreChange == 0)
	{
	  if(((DisketteExtension->DeviceObject)->Vpb)->Flags & 0x00000001)
	    return (NTSTATUS )0x80000016L;
	  else
	    return (NTSTATUS )0xC0000185L;
	}
    }
  else
    {
      if(NON_DET_3 /*((KUSER_SHARED_DATA * const */
	            /*)0xffdf0000)->AlternativeArchitecture == NEC98x86*/)
	FlHdbit(DisketteExtension);
    }
  if(SetUpMedia)
    {
      if(DisketteExtension->MediaType == - 1) { 
	ntStatus = FlDetermineMediaType(DisketteExtension);
      }
      else
	{
	  if(DisketteExtension->MediaType == Unknown)
	    return (NTSTATUS )0xC0000014L;
	  else
	    {
	      if(DisketteExtension->DriveMediaType != DisketteExtension->LastDriveMediaType)
		{
		  ntStatus = FlDatarateSpecifyConfigure(DisketteExtension);
		  if(! ((NTSTATUS )ntStatus >= 0)){ }
		}
	    }
	}
    }
  if(WriteOperation && (NTSTATUS )ntStatus >= 0)
    {
      (DisketteExtension->FifoBuffer)[0] = 0x0E;
      (DisketteExtension->FifoBuffer)[1] = DisketteExtension->DeviceUnit;
      ntStatus = FlIssueCommand(DisketteExtension,
				DisketteExtension->FifoBuffer,
				DisketteExtension->FifoBuffer, (void *  )0, 0, 0);
      if(! ((NTSTATUS )ntStatus >= 0))
	return ntStatus;
      if(NON_DET_4 /*((KUSER_SHARED_DATA * const */
	           /* )0xffdf0000)->AlternativeArchitecture == NEC98x86*/)
	{
	  if(! ((DisketteExtension->FifoBuffer)[0] & 0x20))
	    return (NTSTATUS )0xC0000013L;
	}
      if((DisketteExtension->FifoBuffer)[0] & 0x40)
	return (NTSTATUS )0xC00000A2L;
    }
  return ntStatus;
}

NTSTATUS FlDatarateSpecifyConfigure(PDISKETTE_EXTENSION DisketteExtension )
{
  NTSTATUS ntStatus;
  NTSTATUS temp__1;
  
  ntStatus = (NTSTATUS )0x00000000L;
  if(DisketteExtension->ControllerConfigurable)
    {
      (DisketteExtension->FifoBuffer)[0] = 0x11;
      (DisketteExtension->FifoBuffer)[1] = 0;
      (DisketteExtension->FifoBuffer)[2] = 0x0F;
      (DisketteExtension->FifoBuffer)[2] += 0x10;
      if(! (DisketteExtension->DriveMediaConstants).CylinderShift)
	(DisketteExtension->FifoBuffer)[2] += 0x40;
      (DisketteExtension->FifoBuffer)[3] = 0;
      ntStatus = FlIssueCommand(DisketteExtension,
				DisketteExtension->FifoBuffer,
				DisketteExtension->FifoBuffer, (void *  )0, 0, 0);
      if(ntStatus == (NTSTATUS )0xC00000A3L)
	{
	  DisketteExtension->ControllerConfigurable = 0;
	  ntStatus = (NTSTATUS )0x00000000L;
	}
    }

  if((NTSTATUS )ntStatus >= 0 || ntStatus == (NTSTATUS )0xC00000A3L)
    {
      (DisketteExtension->FifoBuffer)[0] = 0x0D;
      (DisketteExtension->FifoBuffer)[1] = (DisketteExtension->DriveMediaConstants).StepRateHeadUnloadTime;
      (DisketteExtension->FifoBuffer)[2] = (DisketteExtension->DriveMediaConstants).HeadLoadTime;
      ntStatus = FlIssueCommand(DisketteExtension,
				DisketteExtension->FifoBuffer,
				DisketteExtension->FifoBuffer, (void *  )0, 0, 0);
      if((NTSTATUS )ntStatus >= 0)
	{
	  ntStatus = FlFdcDeviceIo(DisketteExtension->TargetObject,
				   0x00000007 << 16 | 0 << 14 | 0x309 << 2 | 3, &
				   (DisketteExtension->DriveMediaConstants).DataTransferRate);
	  if((NTSTATUS )ntStatus >= 0)
	    {
	      ntStatus = FlRecalibrateDrive(DisketteExtension);
	    }
	}
    }

  if((NTSTATUS )ntStatus >= 0)
    DisketteExtension->LastDriveMediaType = DisketteExtension->DriveMediaType;
  else
    DisketteExtension->LastDriveMediaType = Unknown;
  return ntStatus;
}

NTSTATUS FlRecalibrateDrive(PDISKETTE_EXTENSION DisketteExtension )
{
  NTSTATUS ntStatus ;
  UCHAR recalibrateCount ;
  UCHAR fifoBuffer[2] ;
  // Some abstraction ...
  int NONDET_1;

  recalibrateCount = 0;
  /* 
     TRACER: since the loop is bounded (at most 2 times) we can
     force full unwinding.
  */
  /* do */
  /*   { */
  /*     (DisketteExtension->FifoBuffer)[0] = 0x0B; */
  /*     (DisketteExtension->FifoBuffer)[1] = DisketteExtension->DeviceUnit; */
  /*     ntStatus = FlIssueCommand(DisketteExtension, */
  /* 				DisketteExtension->FifoBuffer, */
  /* 				DisketteExtension->FifoBuffer, (void *  )0, 0, 0); */

  /*     // ntStatus=0xC000009AL||0x00000000L||0xC0000001L||0x00000103L */

  /*     if((NTSTATUS )ntStatus >= 0) */
  /* 	{ */
  /* 	  if(NONDET_1 /\* ((KUSER_SHARED_DATA * const *\/ */
  /* 	              /\* )0xffdf0000)->AlternativeArchitecture ==NEC98x86 *\/ ) */
  /* 	    { */
	      
  /* 	      fifoBuffer[0] = (DisketteExtension->FifoBuffer)[0]; */
  /* 	      fifoBuffer[1] = (DisketteExtension->FifoBuffer)[1]; */
  /* 	      (DisketteExtension->FifoBuffer)[0] = 0x0E; */
  /* 	      (DisketteExtension->FifoBuffer)[1] = DisketteExtension->DeviceUnit; */
  /* 	      ntStatus = FlIssueCommand(DisketteExtension, */
  /* 					DisketteExtension->FifoBuffer, */
  /* 					DisketteExtension->FifoBuffer, (void * */
  /* 									)0, 0, 0); */
  /* 	      // ntStatus=0xC000009AL||0x00000000L||0xC0000001L||0x00000103L */

  /* 	      if(! ((NTSTATUS )ntStatus >= 0)) */
  /* 		return ntStatus; */

  /* 	      (DisketteExtension->FifoBuffer)[0] = fifoBuffer[0]; */
  /* 	      (DisketteExtension->FifoBuffer)[1] = fifoBuffer[1]; */
  /* 	    } */
  /* 	  if(! ((DisketteExtension->FifoBuffer)[0] & 0x20) || */
  /* 	     (DisketteExtension->FifoBuffer)[1] != 0) */
  /* 	    { */
  /* 	      DisketteExtension->HardwareFailed = 1; */
  /* 	      ntStatus = (NTSTATUS )0xC0000168L; */
  /* 	    } */
  /* 	} */
  /*     recalibrateCount++; */
  /*   } */
  /* while(! ((NTSTATUS )ntStatus >= 0) && recalibrateCount < 2); */

 LOOPX:
    {
      (DisketteExtension->FifoBuffer)[0] = 0x0B;
      (DisketteExtension->FifoBuffer)[1] = DisketteExtension->DeviceUnit;
      ntStatus = FlIssueCommand(DisketteExtension,
				DisketteExtension->FifoBuffer,
				DisketteExtension->FifoBuffer, (void *  )0, 0, 0);

      // ntStatus=0xC000009AL||0x00000000L||0xC0000001L||0x00000103L

      if((NTSTATUS )ntStatus >= 0)
	{
	  if(NONDET_1 /* ((KUSER_SHARED_DATA * const */
	              /* )0xffdf0000)->AlternativeArchitecture ==NEC98x86 */ )
	    {
	      
	      fifoBuffer[0] = (DisketteExtension->FifoBuffer)[0];
	      fifoBuffer[1] = (DisketteExtension->FifoBuffer)[1];
	      (DisketteExtension->FifoBuffer)[0] = 0x0E;
	      (DisketteExtension->FifoBuffer)[1] = DisketteExtension->DeviceUnit;
	      ntStatus = FlIssueCommand(DisketteExtension,
					DisketteExtension->FifoBuffer,
					DisketteExtension->FifoBuffer, (void *
									)0, 0, 0);
	      // ntStatus=0xC000009AL||0x00000000L||0xC0000001L||0x00000103L

	      if(! ((NTSTATUS )ntStatus >= 0))
		return ntStatus;

	      (DisketteExtension->FifoBuffer)[0] = fifoBuffer[0];
	      (DisketteExtension->FifoBuffer)[1] = fifoBuffer[1];
	    }
	  if(! ((DisketteExtension->FifoBuffer)[0] & 0x20) ||
	     (DisketteExtension->FifoBuffer)[1] != 0)
	    {
	      DisketteExtension->HardwareFailed = 1;
	      ntStatus = (NTSTATUS )0xC0000168L;
	    }
	}
      recalibrateCount++;
    }
    if(! ((NTSTATUS )ntStatus >= 0) && recalibrateCount < 2){
      goto LOOPX;
    }


  return ntStatus;
}

NTSTATUS FlDetermineMediaType(PDISKETTE_EXTENSION DisketteExtension )
{
  NTSTATUS ntStatus ;
  PDRIVE_MEDIA_CONSTANTS ddriveMediaConstants ;
  BOOLEAN mediaTypesExhausted ;
  ULONG retries;
  USHORT sectorLengthCode ;
  PBOOT_SECTOR_INFO bootSector ;
  LARGE_INTEGER offset ;
  PIRP irp ;
  // Some abstraction ...
  int NON_DET_1, NON_DET_2, NON_DET_3, NONDET_4;

  retries = 0;
  DisketteExtension->IsReadOnly = 0;

  for(retries = 0; retries < 3; retries++)
    {
      if(retries)
	FlInitializeControllerHardware(DisketteExtension);
      DisketteExtension->DriveMediaType =
	(DriveMediaLimits[DisketteExtension->DriveType]).HighestDriveMediaType;
      DisketteExtension->DriveMediaConstants = DriveMediaConstants[DisketteExtension->DriveMediaType];
      mediaTypesExhausted = 0;
      do
	{
	  if(NON_DET_1)
	    {
	      sectorLengthCode=(DriveMediaConstants[DisketteExtension->DriveMediaType ]).SectorLengthCode;
	      FlHdbit(DisketteExtension);
	    }
	  ntStatus = FlDatarateSpecifyConfigure(DisketteExtension);
	  if(! ((NTSTATUS )ntStatus >= 0))
	    mediaTypesExhausted = 1;
	  else
	    {
	      ddriveMediaConstants = & DriveMediaConstants[DisketteExtension->DriveMediaType];
	      (DisketteExtension->FifoBuffer)[1] = (UCHAR)(DisketteExtension->DeviceUnit |
							   ddriveMediaConstants->NumberOfHeads - 1
							   << 2);
	      (DisketteExtension->FifoBuffer)[0] = 0x14 + 0x40;
	      ntStatus = FlIssueCommand(DisketteExtension,
					DisketteExtension->FifoBuffer,
					DisketteExtension->FifoBuffer, (void *)0, 0, 0);
									
	      if(NONDET_4)
                 /* ! ((NTSTATUS )ntStatus >= 0) || */
		 /* 		 ((DisketteExtension->FifoBuffer)[0] & ~ 0x20) != */
		 /* 		 (UCHAR)(DisketteExtension->DeviceUnit |  */
		 /* 			 ddriveMediaConstants->NumberOfHeads - 1	<< 2) || */
		 /* 		 (DisketteExtension->FifoBuffer)[1] != 0 || */
		 /* 		  (DisketteExtension->FifoBuffer)[2] != 0 || */
		 /* 		 ((KUSER_SHARED_DATA * const )0xffdf0000)->AlternativeArchitecture == NEC98x86 && */
		 /* 		 (DisketteExtension->FifoBuffer)[6] != sectorLengthCode ) */
		 
		{
		  DisketteExtension->DriveMediaType--;
		  DisketteExtension->DriveMediaConstants =DriveMediaConstants[DisketteExtension->DriveMediaType];
		  if(ntStatus != (NTSTATUS )0xC00000A3L)
		      ntStatus = (NTSTATUS)0xC0000014L;
		  if((CHAR)DisketteExtension->DriveMediaType
		     < (CHAR)(DriveMediaLimits[DisketteExtension->DriveType]).LowestDriveMediaType)
		    {
		      DisketteExtension->MediaType = Unknown;
		      mediaTypesExhausted = 1;
		    }
		}
	      else
		{
		  if(NON_DET_2)
		    {
		      DisketteExtension->MediaType = ddriveMediaConstants->MediaType;
		      DisketteExtension->BytesPerSector= ddriveMediaConstants->BytesPerSector;
		      DisketteExtension->ByteCapacity =
			ddriveMediaConstants->BytesPerSector *
			ddriveMediaConstants->SectorsPerTrack *
			(1 + ddriveMediaConstants->MaximumTrack) *
			ddriveMediaConstants->NumberOfHeads;
		      DisketteExtension->DriveMediaConstants=DriveMediaConstants[DisketteExtension->DriveMediaType];
		      /* bootSector = */
		      /*     ExAllocatePoolWithTag(NonPagedPoolCacheAligned, */
		      /*                           ((KUSER_SHARED_DATA */
		      /* 			   * const )0xffdf0000)->AlternativeArchitecture */
		      /* 			   == NEC98x86 ? 1024 */
		      /* 		           : 512, 'polF'); */
		      
		      if(! bootSector)
			return (NTSTATUS)0xC000009AL;
		      
		      offset.LowPart = 0;
		      offset.HighPart = 0;
		      irp = IoBuildAsynchronousFsdRequest(0x03,
							  DisketteExtension->DeviceObject,
							  bootSector,
							  /* ((KUSER_SHARED_DATA */
							  /** const */
							  /*)0xffdf0000)->AlternativeArchitecture */
							  /*== NEC98x86 ? 1024 */
							  /*: 512 */
							  1024,
							  & offset,(void *  )0);
		      if(! irp)
			{
			  ExFreePool(bootSector);
			  return (NTSTATUS)0xC000009AL;
			}
		      irp->CurrentLocation--;
		      ((irp->Tail).Overlay).CurrentStackLocation = 
			((irp->Tail).Overlay).CurrentStackLocation-1;
		      ntStatus = FlReadWrite(DisketteExtension,irp, 1);
		      MmUnlockPages(irp->MdlAddress);
		      IoFreeMdl(irp->MdlAddress);
		      IoFreeIrp(irp);
		      ExFreePool(bootSector);
		      if(! ((NTSTATUS )ntStatus >= 0))
			{
			  DisketteExtension->DriveMediaType --;
			  DisketteExtension->DriveMediaConstants=
			    DriveMediaConstants[DisketteExtension->DriveMediaType];
			  if(ntStatus != (NTSTATUS)0xC00000A3L)
			      ntStatus = (NTSTATUS )0xC0000014L;
			  if((CHAR)DisketteExtension->DriveMediaType<
			     (CHAR)(DriveMediaLimits[DisketteExtension->DriveType]).LowestDriveMediaType)
			    {
			      DisketteExtension->MediaType = Unknown;
			      mediaTypesExhausted = 1;
			    }
			}
		    }
		}
	    }
	}
      while(! ((NTSTATUS )ntStatus >= 0) && ! mediaTypesExhausted); 
      // end do-while
 
      if((NTSTATUS )ntStatus >= 0)
	  break;

    } // end for
  if(! ((NTSTATUS )ntStatus >= 0) || mediaTypesExhausted)
      return ntStatus;

  DisketteExtension->MediaType = ddriveMediaConstants->MediaType;
  DisketteExtension->BytesPerSector = ddriveMediaConstants->BytesPerSector;
  DisketteExtension->ByteCapacity = ddriveMediaConstants->BytesPerSector *
                                    ddriveMediaConstants->SectorsPerTrack *
                                    (1 +ddriveMediaConstants->MaximumTrack) *
                                    ddriveMediaConstants->NumberOfHeads;    
  DisketteExtension->DriveMediaConstants = DriveMediaConstants[DisketteExtension->DriveMediaType];
  FlCheckBootSector(DisketteExtension);
  return ntStatus;
}

void FlAllocateIoBuffer(PDISKETTE_EXTENSION DisketteExtension , ULONG BufferSize)
{
  BOOLEAN allocateContiguous ;
  LARGE_INTEGER maxDmaAddress ;

  if(DisketteExtension->IoBuffer)
    {
      if(DisketteExtension->IoBufferSize >= BufferSize)
	return; 
      
      FlFreeIoBuffer(DisketteExtension);
    }
  
  if(BufferSize > DisketteExtension->MaxTransferSize)
    allocateContiguous = 1;
  else
    allocateContiguous = 0;
  
  if(allocateContiguous)
    {
      maxDmaAddress.QuadPart = 0xFFFFFF;
      DisketteExtension->IoBuffer=MmAllocateContiguousMemory(BufferSize, maxDmaAddress);
			
    }
  else
    {
      /* DisketteExtension->IoBuffer = */
      /*    ExAllocatePoolWithTag(NonPagedPoolCacheAligned,BufferSize, 'polF'); */
    }
  if(! DisketteExtension->IoBuffer)
      return;

  DisketteExtension->IoBufferMdl=IoAllocateMdl(DisketteExtension->IoBuffer,BufferSize,0,0,(void *  )0);
  if(! DisketteExtension->IoBufferMdl)
    {
      if(allocateContiguous)
	  MmFreeContiguousMemory(DisketteExtension->IoBuffer);
      else
	ExFreePool(DisketteExtension->IoBuffer);
      DisketteExtension->IoBuffer = (void *  )0;
      return;
    }
  MmProbeAndLockPages(DisketteExtension->IoBufferMdl, KernelMode,IoModifyAccess);
  if(allocateContiguous)
    MmFreeContiguousMemory(DisketteExtension->IoBuffer);
  else
    ExFreePool(DisketteExtension->IoBuffer);
  DisketteExtension->IoBuffer = (void *  )0;
  
  return;
  DisketteExtension->IoBufferSize = BufferSize;
}

void FlFreeIoBuffer(PDISKETTE_EXTENSION DisketteExtension )
{
  BOOLEAN contiguousBuffer ;
  
  if(! DisketteExtension->IoBuffer)
    return;
  
  if(DisketteExtension->IoBufferSize > DisketteExtension->MaxTransferSize)
      contiguousBuffer = 1;
  else
      contiguousBuffer = 0;

  DisketteExtension->IoBufferSize = 0;
  MmUnlockPages(DisketteExtension->IoBufferMdl);
  IoFreeMdl(DisketteExtension->IoBufferMdl);
  DisketteExtension->IoBufferMdl = (void *  )0;
  if(contiguousBuffer)
    MmFreeContiguousMemory(DisketteExtension->IoBuffer);
  else
    ExFreePool(DisketteExtension->IoBuffer);
  
  DisketteExtension->IoBuffer = (void *  )0;
  return;
}

void FloppyThread(PVOID Context )
{
  PIRP irp ;
  PIO_STACK_LOCATION irpSp ;
  PLIST_ENTRY request ;
  PDISKETTE_EXTENSION disketteExtension;
  NTSTATUS ntStatus;
  NTSTATUS waitStatus ;
  LARGE_INTEGER queueWait ;
  LARGE_INTEGER acquireWait ;
  PDISK_GEOMETRY outputBuffer;
  PSENSE_DEVISE_STATUS_PTOS outputBuffer2;
  int temp1,temp2,temp3;

  disketteExtension = Context;
  ntStatus = (NTSTATUS )0x00000000L;
  // KeSetPriorityThread(KeGetCurrentThread(), 16);
  queueWait.QuadPart = - (3 * 1000 * 10000);
  acquireWait.QuadPart = - (15 * 1000 * 10000);

  do
    {
      waitStatus = KeWaitForSingleObject((PVOID )(&
						  disketteExtension->RequestSemaphore), Executive,
					 KernelMode, 0, & queueWait);
      if(waitStatus == (NTSTATUS )0x00000102L)
	{
	  if(! (((KUSER_SHARED_DATA * const)0xffdf0000)->AlternativeArchitecture ==NEC98x86) &&
	     disketteExtension->FloppyControllerAllocated)
	    {
	      FlFdcDeviceIo(disketteExtension->TargetObject,
			    0x00000007 << 16 | 0 << 14 | 0x307 << 2
			    | 3, (void *  )0);
	      FlFdcDeviceIo(disketteExtension->TargetObject,
			    0x00000007 << 16 | 0 << 14 | 0x301 << 2
			    | 3, disketteExtension->DeviceObject);
	      disketteExtension->FloppyControllerAllocated =0;
	    }
	  ExAcquireFastMutex(&
			     disketteExtension->ThreadReferenceMutex);
	  if(disketteExtension->ThreadReferenceCount == 0)
	    {
	      disketteExtension->ThreadReferenceCount = - 1;
	      if(disketteExtension->FloppyThread != (void *)0)
		{
		  ObfDereferenceObject(disketteExtension->FloppyThread);
		  disketteExtension->FloppyThread =(void *  )0;
		}
	      ExReleaseFastMutex(&disketteExtension->ThreadReferenceMutex);
	      if(((KUSER_SHARED_DATA * const)0xffdf0000)->AlternativeArchitecture ==
		 NEC98x86)
		{
		  if(disketteExtension->ReleaseFdcWithMotorRunning)
		    {
		      ntStatus = FlFdcDeviceIo(disketteExtension->TargetObject,
					       0x00000007 << 16 | 0 << 14 | 0x300 << 2 | 3,
					       & acquireWait);
		      FlFdcDeviceIo(disketteExtension->TargetObject,
				    0x00000007 << 16 | 0 << 14 | 0x307 << 2 | 3,
				    (void *  )0);
		      FlFdcDeviceIo(disketteExtension->TargetObject,
				    0x00000007 << 16 | 0 << 14 | 0x301 << 2 | 3,
				    disketteExtension->DeviceObject);
		      disketteExtension->FloppyControllerAllocated= 0;
		      disketteExtension->ReleaseFdcWithMotorRunning= 0;			
		    }
		}
	      {
		ExAcquireFastMutex(PagingMutex);
		PagingReferenceCount--;
		if(/* -- */ PagingReferenceCount == 0)
		  MmPageEntireDriver(DriverEntry);
		ExReleaseFastMutex(PagingMutex);
	      }
	      PsTerminateSystemThread((NTSTATUS )0x00000000L);
	    }
	  ExReleaseFastMutex(& disketteExtension->ThreadReferenceMutex);
	  continue;
	}
      request = ExfInterlockedRemoveHeadList(& disketteExtension->ListEntry, 
					     & disketteExtension->ListSpinLock);
      while(request){ /* = ExfInterlockedRemoveHeadList(& */
		    /* 				   disketteExtension->ListEntry, & */
		    /* 				   disketteExtension->ListSpinLock) */
	ExAcquireFastMutex(& disketteExtension->ThreadReferenceMutex);
	disketteExtension->ThreadReferenceCount--;
	ExReleaseFastMutex(& disketteExtension->ThreadReferenceMutex);
	disketteExtension->HardwareFailed = 0;
	irp = (IRP *  )((PCHAR )request - (ULONG_PTR )(& ((((IRP
							     *  )0)->Tail).Overlay).ListEntry));
	ExAcquireFastMutex(& disketteExtension->PowerDownMutex);
	if(disketteExtension->PoweringDown == 1)
	  {
	    ExReleaseFastMutex(& disketteExtension->PowerDownMutex);
	    irp = (IRP *  )((PCHAR )request - (ULONG_PTR )(&
							   ((((IRP *
							       )0)->Tail).Overlay).ListEntry));
	    (irp->IoStatus).Status = (NTSTATUS )0xC00002D3L;
	    (irp->IoStatus).Information = 0;
	    IofCompleteRequest(irp, 0);
	    continue;
	  }
	ExReleaseFastMutex(& disketteExtension->PowerDownMutex);
	irpSp = ((irp->Tail).Overlay).CurrentStackLocation;
	switch(irpSp->MajorFunction)
	  {
	  case 0x1b:
	    if(irpSp->MinorFunction == 0x01 || irpSp->MinorFunction == 0x05)
	      {
		if(((KUSER_SHARED_DATA * const )0xffdf0000)->AlternativeArchitecture == NEC98x86)
		  {
		    if(disketteExtension->ReleaseFdcWithMotorRunning)
		      {
			FlFdcDeviceIo(disketteExtension->TargetObject,
				      0x00000007 << 16 | 0 << 14 | 0x300 << 2 | 3,
				      & acquireWait);
			disketteExtension->ReleaseFdcWithMotorRunning = 0;
			disketteExtension->FloppyControllerAllocated = 1;
		      }
		  }
		if(disketteExtension->FloppyControllerAllocated )
		  {
		    FlFdcDeviceIo(disketteExtension->TargetObject,
				  0x00000007 << 16 | 0 << 14 | 0x307 << 2 | 3,
				  (void *  )0);
		    FlFdcDeviceIo(disketteExtension->TargetObject,
				  0x00000007 << 16 | 0 << 14 | 0x301 << 2 | 3,
				  disketteExtension->DeviceObject
				  );
		    disketteExtension->FloppyControllerAllocated= 0;
		  }
		ExAcquireFastMutex(& disketteExtension->ThreadReferenceMutex);
		disketteExtension->ThreadReferenceCount   = - 1;
		ExReleaseFastMutex(& disketteExtension->ThreadReferenceMutex);
		{
		  ExAcquireFastMutex(PagingMutex);
		  PagingReferenceCount--;
		    if(/* -- */ PagingReferenceCount == 0)
		      MmPageEntireDriver(DriverEntry);
		    ExReleaseFastMutex(PagingMutex);
		}
		PsTerminateSystemThread((NTSTATUS)0x00000000L);
	      }
	    else
	      ntStatus = (NTSTATUS)0xC0000010L;
	    break;
	  case 0x03:
	  case 0x04:
	    {
	      if(! disketteExtension->FloppyControllerAllocated)
		{
		  ntStatus = FlFdcDeviceIo(disketteExtension->TargetObject,
					   0x00000007 << 16 | 0 << 14 | 0x300 << 2 | 3, 
					   & acquireWait);
		  if((NTSTATUS)ntStatus>= 0)
		    {
		      disketteExtension->FloppyControllerAllocated= 1;
		      if(((KUSER_SHARED_DATA * const )0xffdf0000)->AlternativeArchitecture
			 == NEC98x86)
			disketteExtension->ReleaseFdcWithMotorRunning = 0;
		    }
		  else
		    break;
		}
	      if((disketteExtension->DeviceObject)->Flags & 0x00000002 && ! (irpSp->Flags & 0x02))
		ntStatus =(NTSTATUS )0x80000016L;
	      else
		{
		  ntStatus = FlReadWrite(disketteExtension , irp, 0);
		}
	      break;
	    }
	  case 0x0e:
	    {
	      if(! disketteExtension->FloppyControllerAllocated)
		{
		  ntStatus = FlFdcDeviceIo(disketteExtension->TargetObject,
					   0x00000007 << 16 | 0 << 14 | 0x300 << 2 | 3,
					     & acquireWait);
		  if((NTSTATUS)ntStatus>= 0)
		    {
		      disketteExtension->FloppyControllerAllocated = 1;
		      if(((KUSER_SHARED_DATA * const )0xffdf0000)->AlternativeArchitecture
			 == NEC98x86)
			disketteExtension->ReleaseFdcWithMotorRunning = 0;
		    }
		  else
		      break;
		}
	      if((disketteExtension->DeviceObject)->Flags & 0x00000002 && ! (irpSp->Flags & 0x02))
		ntStatus = (NTSTATUS )0x80000016L;
		else
		  {
		    switch(temp1 /* ((irpSp->Parameters).DeviceIoControl).IoControlCode */)
		      {
		      case 1 /* 0x0000002d << 16 | 0x0001 << 14 | 0x0200 << 2 | 0 */:
		      case 2 /* 0x00000007 << 16 | 0x0001 << 14 | 0x0200 << 2 | 0 */:  
			{
			  ntStatus = FlStartDrive(disketteExtension, irp, 0, 0,
						  (BOOLEAN )(! ! (irpSp->Flags & 0x02)));
			  break;
			}
		      case 3 /* 0x00000007 << 16 | 0 << 14 | 0x0009 << 2 | 0 */:
			{
			  if(disketteExtension->IsReadOnly)
			    {
			      ntStatus = (NTSTATUS )0xC000000DL;
			    }
			  else
			    {
			      ntStatus = FlStartDrive(disketteExtension, irp, 1, 0, 1);
			    }
			  break;
			}
		      case 4 /* 0x00000007 << 16 | 0 << 14 | 0x0000 << 2 | 0 */:
			{
			  if(((irpSp->Parameters).DeviceIoControl).OutputBufferLength <
			     sizeof(DISK_GEOMETRY ))
			    {
			      ntStatus = (NTSTATUS )0xC000000DL;
			    }
			  else
			    {
			      ntStatus = FlStartDrive(disketteExtension, irp, 0,
						      1, (BOOLEAN )(! ! (irpSp->Flags & 0x02)));
			    }
			  if((NTSTATUS )ntStatus >= 0 || ntStatus == (NTSTATUS )0xC0000014L)
			    {
			      outputBuffer = (PDISK_GEOMETRY)(irp->AssociatedIrp).SystemBuffer;
			      ntStatus = (NTSTATUS )0x00000000L;
			      outputBuffer->MediaType = disketteExtension->MediaType;
			      if(disketteExtension->MediaType == Unknown)
				{
				  (outputBuffer->Cylinders).LowPart = 0;
				  (outputBuffer->Cylinders).HighPart = 0;
				  outputBuffer->TracksPerCylinder = 0;
				  outputBuffer->SectorsPerTrack = 0;
				  outputBuffer->BytesPerSector = 0;
				}
			      else
				{
				  (outputBuffer->Cylinders).LowPart =
				    (disketteExtension->DriveMediaConstants).MaximumTrack + 1;
				  (outputBuffer->Cylinders).HighPart = 0;
				  outputBuffer->TracksPerCylinder =
				    (disketteExtension->DriveMediaConstants).NumberOfHeads;
				  outputBuffer->SectorsPerTrack =
				    (disketteExtension->DriveMediaConstants).SectorsPerTrack;
				  outputBuffer->BytesPerSector =
				    (disketteExtension->DriveMediaConstants).BytesPerSector;
				}
			    }
			  (irp->IoStatus).Information = sizeof(DISK_GEOMETRY );
			  break;
			}
		      case 5 /* 0x00000007 << 16 | (0x0001| 0x0002) << 14 | 0x000b << 2 | 0 */:
		      case 6 /* 0x00000007 << 16 | (0x0001 | 0x0002) << 14 | 0x0006 << 2 | 0 */:
			{
			  ntStatus = FlStartDrive(disketteExtension, irp, 1, 0, 0);
			  if((NTSTATUS )ntStatus >= 0 || ntStatus == (NTSTATUS )0xC0000014L)
			    {
			      FlAllocateIoBuffer(disketteExtension, 0x1000);
			      if(disketteExtension->IoBuffer)
				ntStatus = FlFormat(disketteExtension, irp);
			      else
				ntStatus = (NTSTATUS )0xC000009AL;
			    }
			  break;
			}
		      case 7 /* 0x00000007 << 16 | 0 << 14 | 0x00f8 << 2 | 0 */:
			;
			{
			  if(((KUSER_SHARED_DATA * const )0xffdf0000)->AlternativeArchitecture ==
			     NEC98x86)
			    {
			      (disketteExtension->FifoBuffer)[0] = 0x0E;
			      (disketteExtension->FifoBuffer)[1] = disketteExtension->DeviceUnit;
			      ntStatus = FlIssueCommand(disketteExtension,
							disketteExtension->FifoBuffer,
							disketteExtension->FifoBuffer, 
							(void *  )0, 0, 0);
			      if((NTSTATUS )ntStatus >= 0)
				{
		       outputBuffer2= (PSENSE_DEVISE_STATUS_PTOS)(irp->AssociatedIrp).SystemBuffer;
				  ((PSENSE_DEVISE_STATUS_PTOS )outputBuffer2)->ST3_PTOS =
				    (Result_Status3_PTOS[0]).ST3_PTOS;
				  (irp->IoStatus).Information =
				    sizeof(SENSE_DEVISE_STATUS_PTOS );
				}
 			      break;
			    }
			}
		      }
		  }
	      break;
	    }
	  default :
	    ntStatus = (NTSTATUS)0xC0000002L;
	  }
	if(ntStatus == (NTSTATUS )0x80000011L)
	  {
	    for(; ; )
	      {
		disketteExtension->HardwareFailed = 0;
		(irp->IoStatus).Status = (NTSTATUS)0x80000011L;
		IofCompleteRequest(irp, 1);
		request = ExfInterlockedRemoveHeadList(&
						       disketteExtension->ListEntry, &
						       disketteExtension->ListSpinLock);
		if(! request)
		  {
		    break;
		  }
		ExAcquireFastMutex(& disketteExtension->ThreadReferenceMutex);
		disketteExtension->ThreadReferenceCount--;
		ExReleaseFastMutex(& disketteExtension->ThreadReferenceMutex);
		irp = (IRP *  )((PCHAR )request -
				(ULONG_PTR )(& ((((IRP * )0)->Tail).Overlay).ListEntry));
	      }
	  }
	else
	  {
	    (irp->IoStatus).Status = ntStatus;
	    if(disketteExtension->IoBuffer)
	      {
		FlFreeIoBuffer(disketteExtension);
	      }
	    FlFinishOperation(irp, disketteExtension);
	  }
	request = ExfInterlockedRemoveHeadList(& disketteExtension->ListEntry, 
					       & disketteExtension->ListSpinLock);	
      } // end while(request)

      if(((KUSER_SHARED_DATA * const )0xffdf0000)->AlternativeArchitecture == NEC98x86)
	{
	  if(disketteExtension->FloppyControllerAllocated)
	    {
	      FlFdcDeviceIo(disketteExtension->TargetObject,
			    0x00000007 << 16 | 0 << 14 | 0x301 << 2 | 3,
			    disketteExtension->DeviceObject);
	      disketteExtension->FloppyControllerAllocated =	0;
	      disketteExtension->ReleaseFdcWithMotorRunning =1;
	    }
	}
    }
  while(1);
}


void FlConsolidateMediaTypeWithBootSector(PDISKETTE_EXTENSION DisketteExtension,
					  PBOOT_SECTOR_INFO BootSector )
{
  USHORT bpbNumberOfSectors , bpbNumberOfHeads ;
  USHORT bpbSectorsPerTrack , bpbBytesPerSector ;
  USHORT bpbMediaByte , bpbMaximumTrack ;
  MEDIA_TYPE bpbMediaType ;
  ULONG i , n ;
  PDRIVE_MEDIA_CONSTANTS readidDriveMediaConstants ;
  BOOLEAN changeToBpbMedia ;
  int temp1;

  if((BootSector->JumpByte)[0] != 0xeb && (BootSector->JumpByte)[0] != 0xe9)
    return;
  bpbNumberOfSectors = (BootSector->NumberOfSectors)[1] * 0x100 +
    (BootSector->NumberOfSectors)[0];
  bpbNumberOfHeads = (BootSector->NumberOfHeads)[1] * 0x100 +
    (BootSector->NumberOfHeads)[0];
  bpbSectorsPerTrack = (BootSector->SectorsPerTrack)[1] * 0x100 +
    (BootSector->SectorsPerTrack)[0];
  bpbBytesPerSector = (BootSector->BytesPerSector)[1] * 0x100 +
    (BootSector->BytesPerSector)[0];
  bpbMediaByte = (BootSector->MediaByte)[0];
  if(! bpbNumberOfHeads || ! bpbSectorsPerTrack)
    return;
  bpbMaximumTrack = bpbNumberOfSectors / bpbNumberOfHeads / bpbSectorsPerTrack - 1;
  bpbMediaType = Unknown;


  for(i = 0; i < temp1 /* (ULONG )(((KUSER_SHARED_DATA * const )0xffdf0000)->AlternativeArchitecture == NEC98x86 ? 21 : 17) */; i++)
    {
      if(bpbBytesPerSector == 
	 (DriveMediaConstants[i]).BytesPerSector && bpbSectorsPerTrack ==
	 (DriveMediaConstants[i]).SectorsPerTrack && bpbMaximumTrack ==
	 (DriveMediaConstants[i]).MaximumTrack && bpbNumberOfHeads ==	 
	 (DriveMediaConstants[i]).NumberOfHeads && bpbMediaByte ==
	 (DriveMediaConstants[i]).MediaByte)
	{
	  bpbMediaType = (DriveMediaConstants[i]).MediaType;
	  break;
	}
    }
  if(DisketteExtension->DriveType == 3)
    {
      /* switch(bpbMediaType) */
      /* 	{ */
      /* 	case F5_640_512: */
      /* 	  bpbMediaType = F3_640_512; */
      /* 	  break; */
      /* 	case F5_720_512: */
      /* 	  bpbMediaType = F3_720_512; */
      /* 	  break; */
      /* 	case F5_1Pt2_512: */
      /* 	  bpbMediaType = F3_1Pt2_512; */
      /* 	  break; */
      /* 	case F5_1Pt23_1024: */
      /* 	  bpbMediaType = F3_1Pt23_1024; */
      /* 	  break; */
      /* 	default : */
      /* 	  break; */
      /* 	} */
    }
  if(bpbMediaType == DisketteExtension->MediaType)
    changeToBpbMedia = 0;
  else
    {
      readidDriveMediaConstants = & DisketteExtension->DriveMediaConstants;
      if(bpbBytesPerSector == readidDriveMediaConstants->BytesPerSector &&
	 bpbSectorsPerTrack < 0x100 && 
	 bpbMaximumTrack == readidDriveMediaConstants->MaximumTrack &&
	 bpbNumberOfHeads <= readidDriveMediaConstants->NumberOfHeads)

	changeToBpbMedia = 1;
      else
	changeToBpbMedia = 0;
      if(bpbMediaType == Unknown)
	{
	  bpbMediaType = readidDriveMediaConstants->MediaType;
	  (DisketteExtension->DriveMediaConstants).SkewDelta = 0;
	}
    }
  if(changeToBpbMedia)
    {
      i = (DriveMediaLimits[DisketteExtension->DriveType]).LowestDriveMediaType;
      n = (DriveMediaLimits[DisketteExtension->DriveType]).HighestDriveMediaType;
      for(; i <= n; i++)
	{
	  if(bpbMediaType == (DriveMediaConstants[i]).MediaType)
	    {
	      DisketteExtension->DriveMediaType = i;
	      break;
	    }
	}
      DisketteExtension->MediaType = bpbMediaType;
      DisketteExtension->ByteCapacity = bpbNumberOfSectors *
			bpbBytesPerSector;
      (DisketteExtension->DriveMediaConstants).SectorsPerTrack =
	(UCHAR )bpbSectorsPerTrack;
      (DisketteExtension->DriveMediaConstants).NumberOfHeads = (UCHAR)bpbNumberOfHeads;
      if(RtlCompareMemory(BootSector->OemData, "MSDMF3.", 7) == 7)
	{
	  DisketteExtension->IsReadOnly = 1;
	}
    }
}

void FlCheckBootSector(PDISKETTE_EXTENSION DisketteExtension )
{
  PBOOT_SECTOR_INFO bootSector ;
  LARGE_INTEGER offset ;
  PIRP irp ;
  NTSTATUS status ;
  ULONG tag__1;

  bootSector = ExAllocatePoolWithTag(NonPagedPoolCacheAligned,
				     1024
			 /* ((KUSER_SHARED_DATA * const )0xffdf0000)->AlternativeArchitecture == */
			   /* 	     NEC98x86 ? 1024 : 512 */,
				     tag__1 /*'polF'*/);
  if(! bootSector)
    return;
  offset.LowPart =  0;
  offset.HighPart = 0;
  irp = IoBuildAsynchronousFsdRequest(0x03,
				      DisketteExtension->DeviceObject, bootSector, 
				      1024,
			     /* ((KUSER_SHARED_DATA* const )0xffdf0000)->AlternativeArchitecture == */
			     /* 	      NEC98x86 ? 1024 */
			     /* 	      : 512,  */
				      & offset, (void *  )0);
  if(! irp)
    {
      ExFreePool(bootSector);
      return;
    }
  irp->CurrentLocation--;
  ((irp->Tail).Overlay).CurrentStackLocation = ((irp->Tail).Overlay).CurrentStackLocation - 1;
  status = FlReadWrite(DisketteExtension, irp, 1);
  MmUnlockPages(irp->MdlAddress);
  IoFreeMdl(irp->MdlAddress);
  IoFreeIrp(irp);
  ExFreePool(bootSector);
}

NTSTATUS FlReadWriteTrack(PDISKETTE_EXTENSION DisketteExtension , 
			  PMDL IoMdl ,
			  ULONG IoOffset , BOOLEAN WriteOperation , 
			  UCHAR Cylinder , UCHAR Head ,
			  UCHAR Sector , UCHAR NumberOfSectors , 
			  BOOLEAN NeedSeek )
{

  PDRIVE_MEDIA_CONSTANTS driveMediaConstants ;
  ULONG byteToSectorShift ;
  ULONG transferBytes ;
  LARGE_INTEGER headSettleTime ;
  NTSTATUS status ;
  ULONG seekRetry , ioRetry ;
  BOOLEAN recalibrateDrive;
  UCHAR i ;

  recalibrateDrive = 0;
  driveMediaConstants = & DisketteExtension->DriveMediaConstants;
  byteToSectorShift = 7 + driveMediaConstants->SectorLengthCode;
  transferBytes = (ULONG )NumberOfSectors << byteToSectorShift;
  headSettleTime.LowPart = - (10 * 1000 * driveMediaConstants->HeadSettleTime);
  headSettleTime.HighPart = - 1;

  /* 
     TRACER: since the loop is bounded (at most 3 times) we can
     force full unwinding.
  */
  
  for(seekRetry = 0, ioRetry = 0; seekRetry < 3; seekRetry++)
    {
      if(recalibrateDrive)
      	FlRecalibrateDrive(DisketteExtension);
      if(recalibrateDrive || NeedSeek &&  (!  DisketteExtension->ControllerConfigurable ||
      					   driveMediaConstants->CylinderShift != 0))
      	{
      	  (DisketteExtension->FifoBuffer)[0] = 0x10;
      	  (DisketteExtension->FifoBuffer)[1] = Head << 2 | DisketteExtension->DeviceUnit;
      	  (DisketteExtension->FifoBuffer)[2] = Cylinder << driveMediaConstants->CylinderShift;
      	  status = FlIssueCommand(DisketteExtension,
      				  DisketteExtension->FifoBuffer,
      				  DisketteExtension->FifoBuffer, (void *  )0, 0,0);
      				  
      	  if((NTSTATUS )status >= 0)
      	    {
      	      if(! ((DisketteExtension->FifoBuffer)[0] & 0x20)
      		 || (DisketteExtension->FifoBuffer)[1] !=
      		 Cylinder << driveMediaConstants->CylinderShift)
      		{
      		  DisketteExtension->HardwareFailed = 1;
      		  status = (NTSTATUS )0xC0000168L;
      		}
      	      if((NTSTATUS )status >= 0)
      		{
      		  KeDelayExecutionThread(KernelMode, 0, & headSettleTime);
      		  (DisketteExtension->FifoBuffer)[0] = 0x14 + 0x40;
      		  (DisketteExtension->FifoBuffer)[1] = Head << 2 | DisketteExtension->DeviceUnit;
      		  status = FlIssueCommand(DisketteExtension,
      					  DisketteExtension->FifoBuffer,
      					  DisketteExtension->FifoBuffer,
      					  (void *  )0, 0, 0);
      		  if((NTSTATUS )status >= 0)
      		    {
      	         if(((KUSER_SHARED_DATA * const )0xffdf0000)->AlternativeArchitecture == NEC98x86)
		   {
		     if((DisketteExtension->FifoBuffer)[0] & 0x08)
		       return (NTSTATUS )0xC00000A3L;
		   }
		 if((DisketteExtension->FifoBuffer)[0] !=
		    (Head << 2 | DisketteExtension->DeviceUnit) ||
		    (DisketteExtension->FifoBuffer) [1] != 0 ||
		    (DisketteExtension->FifoBuffer)[2] != 0 ||
		    (DisketteExtension->FifoBuffer)[3] != Cylinder)
		   {
		     DisketteExtension->HardwareFailed =1;
		     status = FlInterpretError((DisketteExtension->FifoBuffer)[1],
					       (DisketteExtension->FifoBuffer)[2]);
		   }
      		    }
      		}
      	    }
      	}
      else
      	{
      	  status = (NTSTATUS )0x00000000L;
      	}


      if(! ((NTSTATUS )status >= 0))
	{
	  recalibrateDrive = 1;
	  continue;
	}
      /* 
	 TRACER: since the loop is bounded (at most 2 times) we can
	 force full unwinding.
      */
      for(; ; ioRetry++)
	{
	  (DisketteExtension->FifoBuffer)[1] = Head << 2 | DisketteExtension->DeviceUnit;
	  (DisketteExtension->FifoBuffer)[2] = Cylinder;
	  (DisketteExtension->FifoBuffer)[3] = Head;
	  (DisketteExtension->FifoBuffer)[4] = Sector + 1;
	  (DisketteExtension->FifoBuffer)[5] = driveMediaConstants->SectorLengthCode;
	  (DisketteExtension->FifoBuffer)[6] = Sector + NumberOfSectors;
	  (DisketteExtension->FifoBuffer)[7] = driveMediaConstants->ReadWriteGapLength;
	  (DisketteExtension->FifoBuffer)[8] = driveMediaConstants->DataLength;
	  if(WriteOperation)
	    {
	      (DisketteExtension->FifoBuffer)[0] = 0x02 + 0x40;
	    }
	  else
	    {
	      (DisketteExtension->FifoBuffer)[0] = 0x00 + 0x40;
	    }
	  status = FlIssueCommand(DisketteExtension,
				  DisketteExtension->FifoBuffer,
				  DisketteExtension->FifoBuffer, IoMdl, IoOffset,
				  transferBytes);
	  if((NTSTATUS )status >= 0)
	    {
	      if(((KUSER_SHARED_DATA * const )0xffdf0000)->AlternativeArchitecture ==NEC98x86)
		{
		  if((DisketteExtension->FifoBuffer)[0] & 0x08)
		    {
		      return (NTSTATUS )0xC00000A3L;
		    }
		}
	      if(((DisketteExtension->FifoBuffer)[0] & 0xC0) != 0x00 &&
		 (((DisketteExtension->FifoBuffer)[0] & 0xC0) != 0x40 ||
		  (DisketteExtension->FifoBuffer)[1] != 0x80 ||
		  (DisketteExtension->FifoBuffer)[2] != 0x00))
		{
		  DisketteExtension->HardwareFailed = 1;
		  status =
		    FlInterpretError((DisketteExtension->FifoBuffer)[1],
				     (DisketteExtension->FifoBuffer)[2]);
		}
	      else
		{
		  if((DisketteExtension->FifoBuffer)[5] !=1)
		    {
		      DisketteExtension->HardwareFailed = 1;
		      status = (NTSTATUS )0xC0000167L;
		    }
		}
	    }
	  if((NTSTATUS )status >= 0)
	    {
	      break;
	    }
	  if(ioRetry >= 2)
	    {
	      break;
	    }
	}// end for( ; ; ioRetry++)
      if((NTSTATUS )status >= 0)
	{
	  break;
	}
      recalibrateDrive = 1;
    }

  if(! ((NTSTATUS )status >= 0) && NumberOfSectors > 1)
    {
      for(i = 0; i < NumberOfSectors; i++)
	{
	  status = FlReadWriteTrack(DisketteExtension, IoMdl,
				    IoOffset + ((ULONG )i << byteToSectorShift),
				    WriteOperation, Cylinder, Head, (UCHAR )(Sector + i), 1, 0);
	  if(! ((NTSTATUS )status >= 0))
	    {
	      DisketteExtension->HardwareFailed = 1;
	      break;
	    }
	}
    }
  return status;
}

NTSTATUS FlReadWrite(PDISKETTE_EXTENSION DisketteExtension , PIRP Irp , 
		     BOOLEAN DriveStarted )
{
  PIO_STACK_LOCATION irpSp ;
  BOOLEAN writeOperation ;
  NTSTATUS status ;
  PDRIVE_MEDIA_CONSTANTS driveMediaConstants ;
  ULONG byteToSectorShift ;
  ULONG currentSector , firstSector , lastSector ;
  ULONG trackSize ;
  UCHAR sectorsPerTrack , numberOfHeads ;
  UCHAR currentHead , currentCylinder , trackSector ;
  PCHAR userBuffer ;
  UCHAR skew , skewDelta ;
  UCHAR numTransferSectors ;
  PMDL mdl ;
  PCHAR ioBuffer ;
  ULONG ioOffset ;

  irpSp = ((Irp->Tail).Overlay).CurrentStackLocation;
  if(irpSp->MajorFunction == 0x04)
    {
      if(DisketteExtension->IsReadOnly)
	  return (NTSTATUS )0xC000000DL;
      writeOperation = 1;
    }
  else
    writeOperation = 0;
  if(DriveStarted)
      status = (NTSTATUS )0x00000000L;
  else
    {
      status = FlStartDrive(DisketteExtension, Irp, writeOperation, 1,
			    (BOOLEAN )(! ! (irpSp->Flags & 0x02)));
    }
  if(! ((NTSTATUS )status >= 0))
    return status;
  if(((KUSER_SHARED_DATA * const )0xffdf0000)->AlternativeArchitecture ==
     NEC98x86)
    {
      FlHdbit(DisketteExtension);
    }
  if(DisketteExtension->MediaType == Unknown)
    return (NTSTATUS )0xC0000014L;
  driveMediaConstants = & DisketteExtension->DriveMediaConstants;
  byteToSectorShift = 7 + driveMediaConstants->SectorLengthCode;
  firstSector = (((irpSp->Parameters).Read).ByteOffset).LowPart >> byteToSectorShift;
  lastSector = firstSector + (((irpSp->Parameters).Read).Length >> byteToSectorShift);
  sectorsPerTrack = driveMediaConstants->SectorsPerTrack;
  numberOfHeads = driveMediaConstants->NumberOfHeads;
  /* userBuffer = (Irp->MdlAddress)->MdlFlags & (0x0001 | 0x0004) */
  /*   ? (Irp->MdlAddress)->MappedSystemVa */
  /*   : MmMapLockedPagesSpecifyCache(Irp->MdlAddress, KernelMode, */
  /* 				   MmCached, (void *  )0, 0, HighPagePriority); */
  if(userBuffer == (void *  )0)
    return (NTSTATUS )0xC000009AL;
  trackSize = (ULONG )sectorsPerTrack << byteToSectorShift;
  skew = 0;
  skewDelta = driveMediaConstants->SkewDelta;
  for(currentSector = firstSector; currentSector < lastSector;
      currentSector += numTransferSectors)
    {
      currentCylinder = (UCHAR )(currentSector / sectorsPerTrack /
				 numberOfHeads);
      trackSector = (UCHAR )(currentSector % sectorsPerTrack);
      currentHead = (UCHAR )(currentSector / sectorsPerTrack %
			     numberOfHeads);
      numTransferSectors = sectorsPerTrack - trackSector;
      if(lastSector - currentSector < numTransferSectors)
	{
	  numTransferSectors = (UCHAR )(lastSector - currentSector);
	}
      if(trackSize > DisketteExtension->MaxTransferSize)
	{
	  FlAllocateIoBuffer(DisketteExtension, trackSize);
	  if(! DisketteExtension->IoBuffer)
	    return (NTSTATUS )0xC000009AL;
	  mdl = DisketteExtension->IoBufferMdl;
	  ioBuffer = DisketteExtension->IoBuffer;
	  ioOffset = 0;
	  if(writeOperation)
	    {
	      memmove(ioBuffer, 
		      userBuffer + (currentSector - firstSector << byteToSectorShift),
		      (ULONG )numTransferSectors << byteToSectorShift);		      
	    }
	}
      else
	{
	  mdl = Irp->MdlAddress;
	  ioOffset = currentSector - firstSector << byteToSectorShift;
	}
      if(skew >= numTransferSectors + trackSector)
	  skew = 0;
      if(skew < trackSector)
	  skew = trackSector;
      status = FlReadWriteTrack(DisketteExtension, mdl, ioOffset +
				((ULONG )skew - trackSector << byteToSectorShift),
				writeOperation, currentCylinder, currentHead, skew,
				(UCHAR )(numTransferSectors + trackSector - skew), 1);
      if((NTSTATUS )status >= 0 && skew > trackSector)
	{
	  status = FlReadWriteTrack(DisketteExtension, mdl,
				    ioOffset, writeOperation, currentCylinder,
				    currentHead, trackSector, (UCHAR )(skew - trackSector),
				    0);
	}
      else
	{
	  skew = (numTransferSectors + trackSector) % sectorsPerTrack;
	}
      if(! ((NTSTATUS )status >= 0))
	{
	  break;
	}
      if(! writeOperation && trackSize >
	 DisketteExtension->MaxTransferSize)
	{
	  memmove(userBuffer + (currentSector - firstSector <<
				byteToSectorShift), 
		  ioBuffer, 
		  (ULONG)numTransferSectors << byteToSectorShift);
		   
	}
      skew = (skew + skewDelta) % sectorsPerTrack;
    }
  (Irp->IoStatus).Information = currentSector - firstSector <<
    byteToSectorShift;
  if((NTSTATUS )status >= 0 && firstSector == 0)
    {
       FlConsolidateMediaTypeWithBootSector(DisketteExtension,
					    (PBOOT_SECTOR_INFO )userBuffer);
    }
  return status;
}

NTSTATUS FlFormat(PDISKETTE_EXTENSION DisketteExtension , PIRP Irp )
{
  LARGE_INTEGER headSettleTime ;
  PIO_STACK_LOCATION irpSp ;
  PBAD_TRACK_NUMBER badTrackBuffer ;
  PFORMAT_PARAMETERS formatParameters ;
  PFORMAT_EX_PARAMETERS formatExParameters ;
  PDRIVE_MEDIA_CONSTANTS driveMediaConstants ;
  NTSTATUS ntStatus ;
  ULONG badTrackBufferLength ;
  DRIVE_MEDIA_TYPE driveMediaType ;
  UCHAR driveStatus ;
  UCHAR numberOfBadTracks ;
  UCHAR currentTrack ;
  UCHAR endTrack ;
  UCHAR whichSector ;
  UCHAR retryCount ;
  BOOLEAN bufferOverflow ;
  FDC_DISK_CHANGE_PARMS fdcDiskChangeParms ;
  ULONG length ;

  numberOfBadTracks = 0;
  bufferOverflow = 0;
  irpSp = ((Irp->Tail).Overlay).CurrentStackLocation;
  formatParameters = (PFORMAT_PARAMETERS)(Irp->AssociatedIrp).SystemBuffer;
  if(((irpSp->Parameters).DeviceIoControl).IoControlCode == 
     (0x00000007 << 16 | (0x0001 | 0x0002) << 14 | 0x000b << 2 | 0))
      formatExParameters = (PFORMAT_EX_PARAMETERS)(Irp->AssociatedIrp).SystemBuffer;
  else
      formatExParameters = (void *  )0;
  badTrackBufferLength =
    ((irpSp->Parameters).DeviceIoControl).OutputBufferLength;
  driveMediaType =
    (DriveMediaLimits[DisketteExtension->DriveType]).HighestDriveMediaType;
  while((DriveMediaConstants[driveMediaType]).MediaType !=
	formatParameters->MediaType && driveMediaType >
	(DriveMediaLimits[DisketteExtension->DriveType]).LowestDriveMediaType)
    {
      driveMediaType--;
    }
  driveMediaConstants = & DriveMediaConstants[driveMediaType];
  DisketteExtension->MediaType = formatParameters->MediaType;
  DisketteExtension->DriveMediaType = driveMediaType;
  DisketteExtension->DriveMediaConstants = DriveMediaConstants[driveMediaType];
  if(formatExParameters)
    {
      (DisketteExtension->DriveMediaConstants).SectorsPerTrack =
	(UCHAR )formatExParameters->SectorsPerTrack;
      (DisketteExtension->DriveMediaConstants).FormatGapLength =
	(UCHAR )formatExParameters->FormatGapLength;
    }
  driveMediaConstants = & DisketteExtension->DriveMediaConstants;
  DisketteExtension->BytesPerSector = driveMediaConstants->BytesPerSector;
  DisketteExtension->ByteCapacity = driveMediaConstants->BytesPerSector *
    driveMediaConstants->SectorsPerTrack * 
    (1 + driveMediaConstants->MaximumTrack) * driveMediaConstants->NumberOfHeads;
  currentTrack = (UCHAR )(formatParameters->StartCylinderNumber *
			  driveMediaConstants->NumberOfHeads +
			  formatParameters->StartHeadNumber);
  endTrack = (UCHAR )(formatParameters->EndCylinderNumber *
		      driveMediaConstants->NumberOfHeads +
		      formatParameters->EndHeadNumber);
  if(((KUSER_SHARED_DATA * const )0xffdf0000)->AlternativeArchitecture ==
     NEC98x86)
      FlHdbit(DisketteExtension);
  if(DisketteExtension->LastDriveMediaType != driveMediaType)
    {
      ntStatus = FlDatarateSpecifyConfigure(DisketteExtension);
      if(! ((NTSTATUS )ntStatus >= 0))
	return ntStatus;
    }
  DisketteExtension->IsReadOnly = 0;
  do
    {
      (DisketteExtension->FifoBuffer)[0] = 0x10;
      (DisketteExtension->FifoBuffer)[1] =DisketteExtension->DeviceUnit;
      (DisketteExtension->FifoBuffer)[2] = (UCHAR )(currentTrack /
						    driveMediaConstants->NumberOfHeads <<
						    driveMediaConstants->CylinderShift);
      ntStatus = FlIssueCommand(DisketteExtension,
				DisketteExtension->FifoBuffer,
				DisketteExtension->FifoBuffer, (void *  )0, 0, 0);
      if((NTSTATUS )ntStatus >= 0)
	{
	  if((DisketteExtension->FifoBuffer)[0] & 0x20 &&
	     (DisketteExtension->FifoBuffer)[1] == (UCHAR)(currentTrack /
							   driveMediaConstants->NumberOfHeads <<
							   driveMediaConstants->CylinderShift))
	    {
	      headSettleTime.LowPart = - (10 * 1000 *
					  driveMediaConstants->HeadSettleTime);
	      headSettleTime.HighPart = - 1;
	      KeDelayExecutionThread(KernelMode, 0, & headSettleTime);
	      if(((KUSER_SHARED_DATA * const )0xffdf0000)->AlternativeArchitecture == NEC98x86)
		{
		}
	      else
		{
		  (DisketteExtension->FifoBuffer)[0] = 0x14 + 0x40;
		  (DisketteExtension->FifoBuffer)[1] = DisketteExtension->DeviceUnit;
		  ntStatus =   FlIssueCommand(DisketteExtension,
					      DisketteExtension->FifoBuffer,
					      DisketteExtension->FifoBuffer,
					      (void *  )0, 0, 0);
		}
	    }
	  else
	    {
	      DisketteExtension->HardwareFailed = 1;
	      ntStatus = (NTSTATUS )0xC0000168L;
	    }
	}
      if(! ((NTSTATUS )ntStatus >= 0))
	{
	  return ntStatus;
	}
      for(whichSector = 0; whichSector < driveMediaConstants->SectorsPerTrack;
	  whichSector++)
	{
	  (DisketteExtension->IoBuffer)[whichSector * 4] = currentTrack /
	    driveMediaConstants->NumberOfHeads;
	  (DisketteExtension->IoBuffer)[whichSector * 4 + 1] = currentTrack %
	    driveMediaConstants->NumberOfHeads;
	  if(formatExParameters)
	    {
	      (DisketteExtension->IoBuffer)[whichSector * 4 + 2] =
		(UCHAR )(formatExParameters->SectorNumber)[whichSector ];
	    }
	  else
	    {
	      (DisketteExtension->IoBuffer)[whichSector * 4 + 2] = whichSector + 1;
	    }
	  (DisketteExtension->IoBuffer)[whichSector * 4 + 3] =
	    driveMediaConstants->SectorLengthCode;
	}
      /* 
	 TRACER: since the loop is bounded (at most 3 times) we can
	 force full unwinding.
      */

      retryCount = 0;
      // do
    LOOPX:
	{
	  length = driveMediaConstants->BytesPerSector;
	  (DisketteExtension->FifoBuffer)[0] = 0x07 + 0x40;
	  (DisketteExtension->FifoBuffer)[1] = (UCHAR)(currentTrack % 
						       driveMediaConstants->NumberOfHeads << 2 |
						       DisketteExtension->DeviceUnit);
	  (DisketteExtension->FifoBuffer)[2] =driveMediaConstants->SectorLengthCode;
	  (DisketteExtension->FifoBuffer)[3] =driveMediaConstants->SectorsPerTrack;
	  (DisketteExtension->FifoBuffer)[4] = driveMediaConstants->FormatGapLength;
	  (DisketteExtension->FifoBuffer)[5] = driveMediaConstants->FormatFillCharacter;
	    
	  ntStatus = FlIssueCommand(DisketteExtension,
				    DisketteExtension->FifoBuffer,
				    DisketteExtension->FifoBuffer,
				    DisketteExtension->IoBufferMdl, 0, length);
	  if(! ((NTSTATUS )ntStatus >= 0))
	    {
	    }
	  if((NTSTATUS )ntStatus >= 0)
	    {
	      // #line 5757
	      if((DisketteExtension->FifoBuffer)[0] & (0x10 | 0x80 | 0x40) ||
		 (DisketteExtension->FifoBuffer)[1] & 0x10 ||
		 (DisketteExtension->FifoBuffer)[2] != 0)
		{
		  DisketteExtension->HardwareFailed = 1;
		  ntStatus = FlInterpretError((DisketteExtension->FifoBuffer)[1], 
					      (DisketteExtension->FifoBuffer)[2]);
		}
	    }
	} //while(! ((NTSTATUS )ntStatus >= 0) && retryCount++ < 3);
	if(! ((NTSTATUS )ntStatus >= 0) && retryCount < 3){
	  retryCount++;
	  goto LOOPX;
	}
      
      if(! ((NTSTATUS )ntStatus >= 0))
	{
	  if(((KUSER_SHARED_DATA * const )0xffdf0000)->AlternativeArchitecture == NEC98x86)
	    {
	      (DisketteExtension->FifoBuffer)[0] = 0x0E;
	      (DisketteExtension->FifoBuffer)[1] = DisketteExtension->DeviceUnit;
	      ntStatus = FlIssueCommand(DisketteExtension,
					DisketteExtension->FifoBuffer,
					DisketteExtension->FifoBuffer, 
					(void *)0, 0, 0);
	      if(! ((NTSTATUS )ntStatus >= 0))
		return ntStatus;
	      if((DisketteExtension->FifoBuffer)[0] & 0x20)
		  driveStatus = 0x7f;
	      else
		driveStatus = 0x80;
	    }
	  else
	    {
	      ntStatus = FlFdcDeviceIo(DisketteExtension->TargetObject,
				       0x00000007 << 16 | 0 << 14 | 0x308 << 2 | 3,
				       & fdcDiskChangeParms);
	      driveStatus = fdcDiskChangeParms.DriveStatus;
	    }
	  if(DisketteExtension->DriveType != 0 && driveStatus & 0x80)
	    {
	      return (NTSTATUS )0xC0000013L;
	    }
	  if(badTrackBufferLength >= (ULONG )((numberOfBadTracks +1) * sizeof(BAD_TRACK_NUMBER )))
	    {
	      badTrackBuffer = (PBAD_TRACK_NUMBER)(Irp->AssociatedIrp).SystemBuffer;
	      badTrackBuffer[numberOfBadTracks] = (BAD_TRACK_NUMBER )currentTrack;
	    }
	  else
	    {
	      bufferOverflow = 1;
	    }
	  numberOfBadTracks++;
	}
      currentTrack++;
    }
  while(currentTrack <= endTrack);

  if((NTSTATUS )ntStatus >= 0 && bufferOverflow)
    {
      ntStatus = (NTSTATUS )0x80000005L;
    }
  return ntStatus;
}

BOOLEAN FlCheckFormatParameters(PDISKETTE_EXTENSION DisketteExtension ,
				PFORMAT_PARAMETERS FormatParameters )
{
  PDRIVE_MEDIA_CONSTANTS ddriveMediaConstants ;
  DRIVE_MEDIA_TYPE driveMediaType ;
  // Some abstraction
  int NONDET_1;

  driveMediaType = (DriveMediaLimits[DisketteExtension->DriveType]).HighestDriveMediaType;
    
  while((DriveMediaConstants[driveMediaType]).MediaType !=
	FormatParameters->MediaType && driveMediaType >
	(DriveMediaLimits[DisketteExtension->DriveType]).LowestDriveMediaType)	
    {
      driveMediaType--;
    }

  if((DriveMediaConstants[driveMediaType]).MediaType !=
     FormatParameters->MediaType)
    {
      return 0;
    }
  else
    {
      ddriveMediaConstants = & DriveMediaConstants[driveMediaType];
      if(FormatParameters->StartHeadNumber > (ULONG)(ddriveMediaConstants->NumberOfHeads - 1) ||
	 FormatParameters->EndHeadNumber > (ULONG)(ddriveMediaConstants->NumberOfHeads - 1) || 
	 FormatParameters->StartCylinderNumber > ddriveMediaConstants->MaximumTrack ||	 
	 FormatParameters->EndCylinderNumber > ddriveMediaConstants->MaximumTrack ||	 
	 FormatParameters->EndCylinderNumber < FormatParameters->StartCylinderNumber)	 
	{
	  return 0;
	}
      else
	{
	  if(NONDET_1 /* ((KUSER_SHARED_DATA * const */
	              /*  )0xffdf0000)->AlternativeArchitecture == */
	               /* NEC98x86 */)
	    {
/* 	      if(FormatParameters->MediaType == F5_360_512 || */
/* 		 FormatParameters->MediaType == F5_320_512 ||		  */
/* 		 FormatParameters->MediaType == F5_320_1024 ||		  */
/* 		 FormatParameters->MediaType == F5_180_512 ||		  */
/* 		 FormatParameters->MediaType == F5_160_512)		  */
/* 		{ */
		  return 0;
/* 		} */
	    }
	  return 1;
	}
    }
}

NTSTATUS FlIssueCommand(PDISKETTE_EXTENSION DisketteExtension , 
			PUCHAR FifoInBuffer , PUCHAR FifoOutBuffer , PMDL IoMdl , 
			ULONG IoOffset ,			
			ULONG TransferBytes )
{
  NTSTATUS ntStatus ;
  UCHAR i ;
  PIRP irp ;
  KEVENT DoneEvent ;
  IO_STATUS_BLOCK IoStatus ;
  PIO_STACK_LOCATION irpSp ;
  ISSUE_FDC_COMMAND_PARMS issueCommandParms ;

  issueCommandParms.FifoInBuffer = FifoInBuffer;
  issueCommandParms.FifoOutBuffer = FifoOutBuffer;
  issueCommandParms.IoHandle = (PVOID )IoMdl;
  issueCommandParms.IoOffset = IoOffset;
  issueCommandParms.TransferBytes = TransferBytes;
  issueCommandParms.TimeOut = 4;
  ntStatus = FlFdcDeviceIo(DisketteExtension->TargetObject, 0x00000007 <<
			   16 | 0 << 14 | 0x303 << 2 | 3, & issueCommandParms);
  // POST: ntStatus=0xC000009AL||0x00000000L||0xC0000001L||0x00000103L  

  if(ntStatus == (NTSTATUS )0xC00000A3L || ntStatus == (NTSTATUS)0xC0000168L)  
    {
      DisketteExtension->HardwareFailed = 1;
    }
  return ntStatus;
  // POST: returnValue=0xC000009AL||0x00000000L||0xC0000001L||0x00000103L  

}

NTSTATUS FlInitializeControllerHardware(PDISKETTE_EXTENSION DisketteExtension )
{
  NTSTATUS ntStatus ;
  ntStatus = FlFdcDeviceIo(DisketteExtension->TargetObject, 0x00000007 <<
			   16 | 0 << 14 | 0x305 << 2 | 3, (void *  )0);
  if((NTSTATUS )ntStatus >= 0)
    {
      if(DisketteExtension->PerpendicularMode != 0)
	{
	  (DisketteExtension->FifoBuffer)[0] = 0x15;
	  (DisketteExtension->FifoBuffer)[1] = (UCHAR )(0x80 |
							DisketteExtension->PerpendicularMode << 2);
	  ntStatus = FlIssueCommand(DisketteExtension,
				    DisketteExtension->FifoBuffer,
				    DisketteExtension->FifoBuffer, (void *  )0, 0,
				    0);
	}
    }
  return ntStatus;
}

NTSTATUS FlFdcDeviceIo(PDEVICE_OBJECT DeviceObject , ULONG Ioctl , PVOID Data )
{
  NTSTATUS ntStatus ;
  PIRP irp ;
  PIO_STACK_LOCATION irpStack ;
  KEVENT doneEvent ;
  IO_STATUS_BLOCK ioStatus ;

  KeInitializeEvent(& doneEvent, NotificationEvent, 0);
  irp = IoBuildDeviceIoControlRequest(Ioctl, DeviceObject, (void *  )0, 0,
				      (void *  )0, 0, 1, & doneEvent, & ioStatus);
  if(irp == (void *  )0)
    {
      return (NTSTATUS )0xC000009AL;
    }
  irpStack = ((irp->Tail).Overlay).CurrentStackLocation - 1;
  ((irpStack->Parameters).DeviceIoControl).Type3InputBuffer = Data;
  ntStatus = IofCallDriver(DeviceObject, irp);
  // POST: ntStatus = 0x00000000L || 0xC0000001L || 0x00000103L  

  if(ntStatus == (NTSTATUS )0x00000103L)
    {
      KeWaitForSingleObject(& doneEvent, Suspended, KernelMode, 0,
			    (void *  )0);

      // IMPORTANT: IoBuildDeviceIoControlRequest is a stub which
      // doesn't touch ioStatus. Thus, ioStatus at this point can be 
      // anything. We comment the following line just to avoid problems.
      // ntStatus = ioStatus.Status;
    }
  return ntStatus;
  // POST: returnValue = 0xC000009AL || 0x00000000L ||
  //                     0xC0000001L || 0x00000103L  
}

NTSTATUS FlHdbit(PDISKETTE_EXTENSION DisketteExtension )
{
  NTSTATUS ntStatus ;
  USHORT st ;
  USHORT st2 ;
  USHORT st3 ;
  USHORT st4 ;
  SHORT sel ;
  SHORT st5 /* = 0 */;
  LARGE_INTEGER motorOnDelay ;
  USHORT lpc ;
  UCHAR resultStatus0Save[4] ;
  USHORT resultStatus0 ;
  ULONG getStatusRetryCount ;
  ULONG rqmReadyRetryCount ;
  BOOLEAN media144MB ;
  BOOLEAN mediaUpTo120MB ;
  BOOLEAN supportDrive ;
  SET_HD_BIT_PARMS setHdBitParameter ;
  // Some abstraction ...
  int NONDET_1;

  st5 = 0;
  media144MB = 0;
  mediaUpTo120MB = 0;
  supportDrive = 1;
  switch(NONDET_1/* DisketteExtension->DriveMediaType */)
    {
    case 1  /* Drive144Media144Nec98 */:  media144MB = 1;      
    case 2  /* Drive144Media120Nec98 */:
    case 3  /* Drive144Media123Nec98 */:
    case 4  /* Drive120Media120Nec98 */:
    case 5  /* Drive120Media123Nec98 */:
    case 6  /* Drive12EMedia120Nec98 */:
    case 7  /* Drive12EMedia123Nec98 */: mediaUpTo120MB = 1;      
    case 8  /* Drive360Media160Nec98 */:
    case 9  /* Drive360Media180Nec98 */:
    case 10 /* Drive360Media320Nec98 */:
    case 11 /* Drive360Media32XNec98 */:
    case 12 /* Drive360Media360Nec98 */:
    case 13 /* Drive120Media160Nec98 */:
    case 14 /* Drive120Media180Nec98 */:
    case 15 /* Drive120Media320Nec98 */:
    case 16 /* Drive120Media32XNec98 */:
    case 17 /* Drive120Media360Nec98 */:
    case 18 /* Drive120Media640Nec98 */:
    case 19 /* Drive120Media720Nec98 */:
    case 20 /* Drive144Media640Nec98 */:
    case 21 /* Drive144Media720Nec98 */:
      break;
    default : mediaUpTo120MB = 1;      
      break;
    }
  setHdBitParameter.Media144MB = media144MB;
  setHdBitParameter.More120MB = mediaUpTo120MB;
  setHdBitParameter.DeviceUnit = DisketteExtension->DeviceUnit;
  /* setHdBitParameter.DriveType144MB = DisketteExtension->DriveType == 3 ? 1 */
  /*     : 0; */
  ntStatus = FlFdcDeviceIo(DisketteExtension->TargetObject, 0x00000007 <<
			   16 | 0 << 14 | 0x311 << 2 | 3, & setHdBitParameter);
  if(! ((NTSTATUS )ntStatus >= 0))
    return ntStatus;
  if(setHdBitParameter.ChangedHdBit)
    ntStatus = FlDatarateSpecifyConfigure(DisketteExtension);

  return ntStatus;
}


NTSTATUS FloppyQueueRequest(PDISKETTE_EXTENSION DisketteExtension , PIRP Irp )
{

  KIRQL oldIrql ;
  NTSTATUS ntStatus ;
  int NONDET_1;

  ExAcquireFastMutex(PagingMutex);
  PagingReferenceCount++;
  if(PagingReferenceCount == 1)
    MmResetDriverPaging(DriverEntry);
  ExReleaseFastMutex(PagingMutex);
  
  //    * & oldIrql = KfAcquireSpinLock(& DisketteExtension->FlCancelSpinLock);
  (PDRIVER_CANCEL )((PVOID )InterlockedExchange((PLONG )(
	 (PVOID *  )(&Irp->CancelRoutine)), (LONG )((PVOID)FloppyCancelQueuedRequest)));
  
  if(Irp->Cancel && NONDET_1 /* (PDRIVER_CANCEL )((PVOID )InterlockedExchange( */
                             /* (PLONG)((PVOID *  )(& Irp->CancelRoutine)), (LONG )((PVOID )((void * )0)))) */)   
    {
      (Irp->IoStatus).Status = (NTSTATUS )0xC0000120L;
      myStatus = (NTSTATUS )0xC0000120L;
      (Irp->IoStatus).Information = 0;
      KfReleaseSpinLock(& DisketteExtension->FlCancelSpinLock,oldIrql);
      IofCompleteRequest(Irp, 0);
      ExAcquireFastMutex(PagingMutex);
      PagingReferenceCount--;
      if(PagingReferenceCount == 0)
	MmPageEntireDriver(DriverEntry);
      ExReleaseFastMutex(PagingMutex);	
      ntStatus = (NTSTATUS )0xC0000120L;
    }
  else
    {
      (Irp->IoStatus).Status = (NTSTATUS )0x00000103L;
      myStatus = (NTSTATUS )0x00000103L;
      //(((Irp->Tail).Overlay).CurrentStackLocation)->Control |= 0x01;
      
      // TRACER 
      /* _ABORT(pended!=0); */
      /* pended=1; */
      
      // BLAST
      if(pended == 0)
	pended = 1;
      else
	errorFn();
      
      ExfInterlockedInsertTailList(& DisketteExtension->NewRequestQueue,
				   & ((Irp->Tail).Overlay).ListEntry,
				   & DisketteExtension->NewRequestQueueSpinLock);
      KfReleaseSpinLock(& DisketteExtension->FlCancelSpinLock, oldIrql);
      ntStatus = (NTSTATUS )0x00000103L;
    }
  return ntStatus;
}

void FloppyCancelQueuedRequest(PDEVICE_OBJECT DeviceObject , PIRP Irp )
{
  PDISKETTE_EXTENSION disketteExtension;
  KIRQL oldIrql ;
  PLIST_ENTRY EEX_Blink ;
  PLIST_ENTRY EEX_Flink ;

  disketteExtension = DeviceObject->DeviceExtension;
  // * & oldIrql = KfAcquireSpinLock(& disketteExtension->FlCancelSpinLock);
  (Irp->IoStatus).Status = (NTSTATUS )0xC0000120L;
  myStatus = (NTSTATUS )0xC0000120L;
  (Irp->IoStatus).Information = 0;
  if((((Irp->Tail).Overlay).ListEntry).Flink)
    {
      EEX_Flink = (& ((Irp->Tail).Overlay).ListEntry)->Flink;
      EEX_Blink = (& ((Irp->Tail).Overlay).ListEntry)->Blink;
      EEX_Blink->Flink = EEX_Flink;
      EEX_Flink->Blink = EEX_Blink;
    }
  KfReleaseSpinLock(& disketteExtension->FlCancelSpinLock, oldIrql);
  IoReleaseCancelSpinLock(Irp->CancelIrql);
  IofCompleteRequest(Irp, 0);
  ExAcquireFastMutex(PagingMutex);
  PagingReferenceCount--;
  if(PagingReferenceCount == 0)
      MmPageEntireDriver(DriverEntry);
  ExReleaseFastMutex(PagingMutex);
  return;
}

void FloppyProcessQueuedRequests(PDISKETTE_EXTENSION DisketteExtension )
{
  KIRQL oldIrql ;
  PLIST_ENTRY headOfList ;
  PIRP currentIrp ;
  PIO_STACK_LOCATION irpSp ;
  int NONDET_1;
  int temp__1;


  // * & oldIrql = KfAcquireSpinLock(& DisketteExtension->FlCancelSpinLock);

  /////////////////////////////////////////////////////////////////////////////  
  // NOTE: headOfList is ALWAYS (void * )0. Therefore, the loop entry
  // is never taken. If it was taken, then the program would be unsafe.
  ///////////////////////////////////////////////////////////////////////////// 
  headOfList = ExfInterlockedRemoveHeadList(& DisketteExtension->NewRequestQueue,
  					    & DisketteExtension->NewRequestQueueSpinLock) ;
  //while( headOfList != (void *  )0)
  if(headOfList != (void *  )0)
  {
    currentIrp=(IRP *)((PCHAR )headOfList - (ULONG_PTR )(& ((((IRP *  )0)->Tail).Overlay).ListEntry) );
/*     temp__1 = (PDRIVER_CANCEL )((PVOID )InterlockedExchange((PLONG )((PVOID *  ) */
/* 								     (& currentIrp->CancelRoutine)), */
/* 							    (LONG )((PVOID )((void *  )0))))) */
    if(temp__1){ 
      irpSp = ((currentIrp->Tail).Overlay).CurrentStackLocation;	    
    }
    else
      {
	(((currentIrp->Tail).Overlay).ListEntry).Flink = (void *  )0;	    
	currentIrp = (void *  )0;
      }

    KfReleaseSpinLock(& DisketteExtension->FlCancelSpinLock,oldIrql);
    
    if(currentIrp)
      {
	if(MydisketteExtensionIsRemoved /*DisketteExtension->IsRemoved*/)
	  {
	    (currentIrp->IoStatus).Information = 0;
	    (currentIrp->IoStatus).Status = (NTSTATUS)0xC0000056L;
	    IofCompleteRequest(currentIrp, 0);
	  }
	else
	  {
	    switch(irpSp->MajorFunction)
	      {
	      case 0x03:
	      case 0x04:
		(void )FloppyReadWrite(DisketteExtension->DeviceObject, currentIrp);
		break;
	      case 0x0e:
		(void )FloppyDeviceControl(DisketteExtension->DeviceObject, currentIrp);
		break;
	      default :
		(currentIrp->IoStatus).Information = 0;
		(currentIrp->IoStatus).Status =(NTSTATUS )0xC0000001L;
		IofCompleteRequest(currentIrp, 0);
	      }
	  }
      }

    if(currentIrp)
      {
	ExAcquireFastMutex(PagingMutex);
	PagingReferenceCount--;
	if(PagingReferenceCount == 0)
	  MmPageEntireDriver(DriverEntry);
	ExReleaseFastMutex(PagingMutex);
      }
    /* *& oldIrql = KfAcquireSpinLock(&DisketteExtension->FlCancelSpinLock); */
    headOfList = ExfInterlockedRemoveHeadList(& DisketteExtension->NewRequestQueue,
					      & DisketteExtension->NewRequestQueueSpinLock);
    /////////////////////////////////////////////////////////
  } // end of while loop
    /////////////////////////////////////////////////////////
  KfReleaseSpinLock(& DisketteExtension->FlCancelSpinLock, oldIrql);
  return;
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
// #line 15 "../slam-kernel.c"
// #line 17


IRP *pirp ;

void stub_driver_init()
{
  s = NP;
  /*
    pended = (compFptr = (compRegistered = (lowerDriverReturn =
    (setEventCalled = (customIrp = 0)))));
  */
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
  NTSTATUS status;
  int we_should_unload ;
  IRP irp;
  int BLAST_NONDET ;
  int idx ;
  int irp_choice ;
  DEVICE_OBJECT devobj ;

  status = 0;
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

      (pirp->IoStatus).Status = (NTSTATUS )0x00000000L;
      myStatus = (NTSTATUS)0x00000000L;
      if(irp_choice == 0)
	{
	  (pirp->IoStatus).Status = (NTSTATUS )0xC00000BBL;
	  myStatus = (NTSTATUS )0xC00000BBL;
	}
      // BLAST 	status = FloppyAddDevice(& d, & devobj);

      status = FloppyAddDevice(& d, & devobj);
      stub_driver_init();
      if(! ((NTSTATUS )status >= 0))
	return - 1;
      switch(BLAST_NONDET)
	{
	case 0:
	  status = FloppyCreateClose(& devobj, pirp);
	  break;
	case 1:
	  status = FloppyCreateClose(& devobj, pirp);
	  break;
	case 2:
	  status = FloppyDeviceControl(& devobj, pirp);
	  break;
	case 3:
	  status = FloppyPnp(& devobj, pirp);
	  break;
	case 4:
	  status = FloppyPower(& devobj, pirp);
	  break;
	default :
	  return - 1;
	}
      if(we_should_unload)
	FloppyUnload(& d);
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
		////////////////////////////////////////////////////
		/// TRACER
		////////////////////////////////////////////////////
		/* _ABORT(s != SKIP2 && s != IPC && s != DC); */

		/* if(pended == 1) */
		/*   { */
		/*     if(status != 259) */
		/*       status = 0;    //BLAST slice errorFn(); */
		/*   } */
		/* else */
		/*   { */
		/*     if(s == DC) */
		/*       _ABORT(status == 259); */
		/*     else */
		/*       _ABORT(status != lowerDriverReturn); */
		/*   } */
		
		/////////////////////////////////////////////////
		// BLAST
		/////////////////////////////////////////////////
		
		if(s != SKIP2 && s != IPC && s != DC)
		  errorFn();
		else
		  {
		    if(pended == 1)
		      {
			if(status != 259)
			  status = 0;    //BLAST slice errorFn();
		      }
		    else
		      {
			if(s == DC)
			  {
			    if(status == 259)
			      errorFn();
			  }
			else
			  {
			    if(status != lowerDriverReturn)
			      errorFn();
			  }
		      }
		  }
		///////////////////////////////////////////////////

	      }
	  }
      }
  status = 0;
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
  //  return & _SLAM_alloc_dummy;
}

PVOID ExAllocatePoolWithTag(POOL_TYPE PoolType,SIZE_T NumberOfBytes,ULONG Tag)	
{
  PVOID x ;
  x = malloc(NumberOfBytes);
  return x;
}

void ExFreePool(PVOID P ){}

PLIST_ENTRY ExfInterlockedInsertHeadList(PLIST_ENTRY ListHead,PLIST_ENTRY ListEntry,PKSPIN_LOCK Lock)
{
  return (void *  )0;
}

PLIST_ENTRY ExfInterlockedInsertTailList(PLIST_ENTRY ListHead,PLIST_ENTRY ListEntry,PKSPIN_LOCK Lock)
{
  return (void *  )0;
}

PLIST_ENTRY ExfInterlockedRemoveHeadList(PLIST_ENTRY ListHead , PKSPIN_LOCK Lock )	
{
  return (void *  )0;
}

LONG InterlockedExchange(PLONG Target , LONG Value )
{ 
  LONG r; 
  return r;
}

PMDL IoAllocateMdl(PVOID VirtualAddress,ULONG Length,
		   BOOLEAN SecondaryBuffer,BOOLEAN ChargeQuota,PIRP Irp)
	
{
  int BLAST_NONDET ;
  switch(BLAST_NONDET)
    {
    case 0:
      return (void *  )malloc(sizeof(MDL ));
    default :
      return (void *  )0;
    }
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

PIRP IoBuildAsynchronousFsdRequest(ULONG MajorFunction ,
				   PDEVICE_OBJECT DeviceObject , PVOID Buffer , ULONG Length ,
				   PLARGE_INTEGER StartingOffset , PIO_STATUS_BLOCK IoStatusBlock )
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

PIRP IoBuildDeviceIoControlRequest(ULONG IoControlCode ,
				   PDEVICE_OBJECT DeviceObject , PVOID InputBuffer , 
				   ULONG InputBufferLength , PVOID OutputBuffer , 
				   ULONG OutputBufferLength , 
				   BOOLEAN InternalDeviceIoControl , PKEVENT Event , 
				   PIO_STATUS_BLOCK IoStatusBlock ) 
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

NTSTATUS IoCreateSymbolicLink(PUNICODE_STRING SymbolicLinkName ,
			      PUNICODE_STRING DeviceName )
{
  int BLAST_NONDET ;
  switch(BLAST_NONDET)
    {
    case 0:
      return (NTSTATUS )0x00000000L;
	default :
	  return (NTSTATUS )0xC0000001L;
    }
}

void IoDeleteDevice(PDEVICE_OBJECT DeviceObject ){ return; }
NTSTATUS IoDeleteSymbolicLink(PUNICODE_STRING SymbolicLinkName )	
{
  int BLAST_NONDET ;
  switch(BLAST_NONDET)
    {
    case 0:
      return (NTSTATUS )0x00000000L;
    default :
      return (NTSTATUS )0xC0000001L;
	}
}

void IoDetachDevice(PDEVICE_OBJECT TargetDevice ){ return;}
void IoFreeIrp(PIRP Irp ){ return; }
void IoFreeMdl(PMDL Mdl ){ return; }

PCONFIGURATION_INFORMATION IoGetConfigurationInformation(void)	
{
  return (void *  )malloc(sizeof(CONFIGURATION_INFORMATION ));
}

NTSTATUS IoQueryDeviceDescription(PINTERFACE_TYPE BusType,
				  PULONG BusNumber , PCONFIGURATION_TYPE ControllerType , 
				  PULONG ControllerNumber , PCONFIGURATION_TYPE PeripheralType , 
				  PULONG PeripheralNumber , PIO_QUERY_DEVICE_ROUTINE CalloutRoutine , 
				  PVOID Context )	
{
  int BLAST_NONDET ;
  switch(BLAST_NONDET)
    {
    case 0:
      return (NTSTATUS )0x00000000L;
    default :
      return (NTSTATUS )0xC0000001L;
    }
}

NTSTATUS IoRegisterDeviceInterface(PDEVICE_OBJECT PhysicalDeviceObject , /*const*/ 	
				   GUID *  InterfaceClassGuid , PUNICODE_STRING ReferenceString ,
				   PUNICODE_STRING SymbolicLinkName )
{
  int BLAST_NONDET ;
  switch(BLAST_NONDET)
    {
    case 0:
      return (NTSTATUS )0x00000000L;
    default :
      return (NTSTATUS )0xC0000010L;
    }
}

void IoReleaseCancelSpinLock(KIRQL Irql ){ return; }

NTSTATUS IoSetDeviceInterfaceState(PUNICODE_STRING SymbolicLinkName , BOOLEAN Enable )	
{
  int BLAST_NONDET ;
  switch(BLAST_NONDET)
    {
    case 0:
      return (NTSTATUS )0x00000000L;
    default :
      return (NTSTATUS )0xC0000001L;
    }
}

void IoSetHardErrorOrVerifyDevice(PIRP Irp ,
				  PDEVICE_OBJECT DeviceObject ) { return ;}

void stubMoreProcessingRequired()
{
  
  // TRACER
  /* _ABORT(s != NP); */
  /* s = MPR1;   */
  
  // BLAST
  if(s == NP)
    s = MPR1;
  else
    errorFn();
  
  return;
}

NTSTATUS IofCallDriver(PDEVICE_OBJECT DeviceObject , PIRP Irp )	
{
  int BLAST_NONDET ;
  NTSTATUS returnVal2 ;
  int compRetStatus1 ;
  PVOID lcontext ;
  if(compRegistered)
    {
      /*
	compRetStatus1 = (* compFptr)(DeviceObject, Irp, lcontext);
      */
      compRetStatus1 = FloppyPnpComplete(DeviceObject, Irp, lcontext);
      
      if(compRetStatus1 == (NTSTATUS )0xC0000016L)
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
	  /* _ABORT(s != SKIP1); */
	  /* s = SKIP2; lowerDriverReturn = returnVal2; */

	  // BLAST
	  if(s == SKIP1) {
	    s = SKIP2; lowerDriverReturn = returnVal2;
	  }
	  else
	    errorFn();
	}
    }
  return returnVal2;
}

void IofCompleteRequest(PIRP Irp , CCHAR PriorityBoost )
{
  // TRACER
  /* _ABORT(s != NP); */
  /* s = DC;   */
  
  // BLAST
  if(s == NP)
    s = DC;
  else
    errorFn();
  
  return;
}

KIRQL KeAcquireSpinLockRaiseToDpc(PKSPIN_LOCK SpinLock ){ }

NTSTATUS KeDelayExecutionThread(KPROCESSOR_MODE WaitMode , BOOLEAN Alertable , 
				PLARGE_INTEGER Interval )	
{
  int BLAST_NONDET ;
  switch(BLAST_NONDET)
    {
    case 0:
      return (NTSTATUS )0x00000000L;
    default :
      return (NTSTATUS )0xC0000001L;
    }
}


void KeInitializeEvent(PRKEVENT Event , EVENT_TYPE Type ,
		       BOOLEAN State ) { return; }


void KeInitializeSemaphore(PRKSEMAPHORE Semaphore , LONG Count , LONG Limit ){ return; }
void KeInitializeSpinLock(PKSPIN_LOCK SpinLock ){ return; }
LONG KeReleaseSemaphore(PRKSEMAPHORE Semaphore , KPRIORITY Increment ,
			LONG Adjustment , BOOLEAN Wait )
{
  LONG r ;
  return r;
}

void KfReleaseSpinLock(PKSPIN_LOCK SpinLock , KIRQL NewIrql ){ return; }

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
	  /* _ABORT(s == MPR3); */
	  
	  // BLAST
	  if(s == MPR3)
	    errorFn();
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

PVOID MmAllocateContiguousMemory(SIZE_T NumberOfBytes ,
				 PHYSICAL_ADDRESS HighestAcceptableAddress )
{
  int BLAST_NONDET ;
  switch(BLAST_NONDET)
    {
    case 0:
      return malloc(NumberOfBytes);
    case 1:
      return (void *  )0;
    }
}

void MmFreeContiguousMemory(PVOID BaseAddress ){ return; }
PVOID MmMapLockedPagesSpecifyCache(PMDL MemoryDescriptorList ,
				   KPROCESSOR_MODE AccessMode , 
				   MEMORY_CACHING_TYPE CacheType , PVOID BaseAddress, 
				   ULONG BugCheckOnFailure ,
				   MM_PAGE_PRIORITY Priority )
{
  return (void *  )0;
}

PVOID MmPageEntireDriver(PVOID AddressWithinSection )
{  
  return (void *  )0;
}

void MmResetDriverPaging(PVOID AddressWithinSection ){ return; }
void MmUnlockPages(PMDL MemoryDescriptorList ){ return; }
NTSTATUS ObReferenceObjectByHandle(HANDLE Handle ,
				   ACCESS_MASK DesiredAccess , POBJECT_TYPE ObjectType , 
				   KPROCESSOR_MODE AccessMode , PVOID *  Object , 
				   POBJECT_HANDLE_INFORMATION HandleInformation )  
{
  int BLAST_NONDET ;
  switch(BLAST_NONDET)
    {
    case 0:
      return (NTSTATUS )0x00000000L;
    default :
      return (NTSTATUS )0xC0000001L;
    }
}

void ObfDereferenceObject(PVOID Object ) {return; }

NTSTATUS PoCallDriver(PDEVICE_OBJECT DeviceObject , PIRP Irp )	
{
  int BLAST_NONDET ;
  int compRetStatus ;
  NTSTATUS returnVal ;
  PVOID lcontext ;
  if(compRegistered)
    {
      /*BLAST
	compRetStatus = (* compFptr)(DeviceObject, Irp, lcontext);
      */
      compRetStatus = FloppyPnpComplete(DeviceObject, Irp, lcontext);
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
	  /* _ABORT(s != SKIP1); */
	  /* s = SKIP2; lowerDriverReturn = returnVal; */

	  // BLAST
	  if(s == SKIP1) {
	    s = SKIP2; lowerDriverReturn = returnVal;
	  }
	  else
	    errorFn();
	}
    }
  return returnVal;
}

void PoStartNextPowerIrp(PIRP Irp ){ return; }

NTSTATUS PsCreateSystemThread(PHANDLE ThreadHandle , ULONG DesiredAccess ,
			      POBJECT_ATTRIBUTES ObjectAttributes , HANDLE ProcessHandle ,
			      PCLIENT_ID ClientId , PKSTART_ROUTINE StartRoutine ,
			      PVOID StartContext )
{
  int BLAST_NONDET ;
  switch(BLAST_NONDET)
    {
    case 0:
      return (NTSTATUS )0x00000000L;
    default :
      return (NTSTATUS )0xC0000001L;
    }
}

NTSTATUS PsTerminateSystemThread(NTSTATUS ExitStatus )
{
  int BLAST_NONDET ;

  switch(BLAST_NONDET)
    {
    case 0:
      return (NTSTATUS )0x00000000L;
    default :
      return (NTSTATUS )0xC0000001L;
    }
}

NTSTATUS  RtlAnsiStringToUnicodeString(PUNICODE_STRING DestinationString ,
				       PANSI_STRING SourceString , BOOLEAN AllocateDestinationString )
{
  int BLAST_NONDET ;
  switch(BLAST_NONDET)
    {
    case 0:
      return (NTSTATUS )0x00000000L;
    default :
      return (NTSTATUS )0xC0000001L;
    }
}

SIZE_T RtlCompareMemory(void *  Source1 ,
			void *  Source2 , SIZE_T Length )
{
  SIZE_T r ;
  return r;
}

void RtlCopyUnicodeString(PUNICODE_STRING DestinationString ,
			  PUNICODE_STRING SourceString ){ return; }

NTSTATUS RtlDeleteRegistryValue(ULONG RelativeTo, PCWSTR Path , PCWSTR ValueName )	
{
  int BLAST_NONDET ;
  switch(BLAST_NONDET)
    {
    case 0:
      return (NTSTATUS )0x00000000L;
    default :
      return (NTSTATUS )0xC0000001L;
    }
}

void RtlFreeUnicodeString(PUNICODE_STRING UnicodeString ){ return; }
void RtlInitString(PSTRING DestinationString , PCSZ SourceString ){ return; }
void RtlInitUnicodeString(PUNICODE_STRING DestinationString , PCWSTR SourceString ){}
NTSTATUS RtlQueryRegistryValues(ULONG RelativeTo,
				PCWSTR Path , PRTL_QUERY_REGISTRY_TABLE QueryTable , PVOID Context ,
				PVOID Environment )
{
  int BLAST_NONDET ;
  switch(BLAST_NONDET)
    {
    case 0:
      return (NTSTATUS )0x00000000L;
    default :
      return (NTSTATUS )0xC0000001L;
    }
}

void ExAcquireFastMutex(PFAST_MUTEX FastMutex ){}
void ExReleaseFastMutex(PFAST_MUTEX FastMutex ){}


NTSTATUS ZwClose(HANDLE Handle )
{
  int BLAST_NONDET ;
  switch(BLAST_NONDET)
    {
    case 0:
      return (NTSTATUS )0x00000000L;
    default :
      return (NTSTATUS )0xC0000001L;
    }
}

