typedef enum _EXCEPTION_DISPOSITION EXCEPTION_DISPOSITION;
typedef unsigned short wchar_t;
typedef wchar_t wint_t;
typedef wchar_t wctype_t;
typedef unsigned long POINTER_64_INT;
typedef int LONG32;
typedef int *PLONG32;
typedef int INT32;
typedef int *PINT32;
typedef unsigned int ULONG32;
typedef unsigned int *PULONG32;
typedef unsigned int DWORD32;
typedef unsigned int *PDWORD32;
typedef unsigned int UINT32;
typedef unsigned int *PUINT32;
typedef int INT_PTR;
typedef int *PINT_PTR;
typedef unsigned int UINT_PTR;
typedef unsigned int *PUINT_PTR;
typedef long LONG_PTR;
typedef long *PLONG_PTR;
typedef unsigned long ULONG_PTR;
typedef unsigned long *PULONG_PTR;
typedef unsigned short UHALF_PTR;
typedef unsigned short *PUHALF_PTR;
typedef short HALF_PTR;
typedef short *PHALF_PTR;
typedef unsigned long HANDLE_PTR;
typedef ULONG_PTR SIZE_T;
typedef ULONG_PTR *PSIZE_T;
typedef LONG_PTR SSIZE_T;
typedef LONG_PTR *PSSIZE_T;
typedef ULONG_PTR DWORD_PTR;
typedef ULONG_PTR *PDWORD_PTR;
typedef long LONG64;
typedef long *PLONG64;
typedef long INT64;
typedef long *PINT64;
typedef unsigned long ULONG64;
typedef unsigned long *PULONG64;
typedef unsigned long DWORD64;
typedef unsigned long *PDWORD64;
typedef unsigned long UINT64;
typedef unsigned long *PUINT64;
typedef void *PVOID;
typedef void *PVOID64;
typedef char CHAR;
typedef short SHORT;
typedef long LONG;
typedef wchar_t WCHAR;
typedef WCHAR *PWCHAR;
typedef WCHAR *LPWCH;
typedef WCHAR *PWCH;
typedef WCHAR *LPCWCH;
typedef WCHAR *PCWCH;
typedef WCHAR *NWPSTR;
typedef WCHAR *LPWSTR;
typedef WCHAR *PWSTR;
typedef WCHAR *LPCWSTR;
typedef WCHAR *PCWSTR;
typedef CHAR *PCHAR;
typedef CHAR *LPCH;
typedef CHAR *PCH;
typedef CHAR *LPCCH;
typedef CHAR *PCCH;
typedef CHAR *NPSTR;
typedef CHAR *LPSTR;
typedef CHAR *PSTR;
typedef CHAR *LPCSTR;
typedef CHAR *PCSTR;
typedef char TCHAR;
typedef char *PTCHAR;
typedef unsigned char TUCHAR;
typedef unsigned char *PTUCHAR;
typedef LPSTR LPTCH;
typedef LPSTR PTCH;
typedef LPSTR PTSTR;
typedef LPSTR LPTSTR;
typedef LPCSTR PCTSTR;
typedef LPCSTR LPCTSTR;
typedef double DOUBLE;
typedef SHORT *PSHORT;
typedef LONG *PLONG;
typedef unsigned char UCHAR;
typedef unsigned short USHORT;
typedef unsigned long ULONG;
typedef UCHAR *PUCHAR;
typedef USHORT *PUSHORT;
typedef ULONG *PULONG;
typedef signed char SCHAR;
typedef SCHAR *PSCHAR;
typedef void *HANDLE;
typedef HANDLE *PHANDLE;
typedef UCHAR FCHAR;
typedef USHORT FSHORT;
typedef ULONG FLONG;
typedef LONG HRESULT;
typedef char CCHAR;
typedef short CSHORT;
typedef ULONG CLONG;
typedef CCHAR *PCCHAR;
typedef CSHORT *PCSHORT;
typedef CLONG *PCLONG;
typedef ULONG LCID;
typedef PULONG PLCID;
typedef USHORT LANGID;
typedef ULONG LOGICAL;
typedef ULONG *PLOGICAL;
typedef LONG NTSTATUS;
typedef NTSTATUS *PNTSTATUS;
struct _FLOAT128 {
long LowPart ;
long HighPart ;
};
typedef struct _FLOAT128 FLOAT128;
typedef FLOAT128 *PFLOAT128;
typedef long LONGLONG;
typedef unsigned long ULONGLONG;
typedef LONGLONG *PLONGLONG;
typedef ULONGLONG *PULONGLONG;
typedef LONGLONG USN;
struct __anonstruct____missing_field_name_1 {
ULONG LowPart ;
LONG HighPart ;
};
struct __anonstruct_u_2 {
ULONG LowPart ;
LONG HighPart ;
};
union _LARGE_INTEGER {
struct __anonstruct____missing_field_name_1 __annonCompField1 ;
struct __anonstruct_u_2 u ;
LONGLONG QuadPart ;
};
typedef union _LARGE_INTEGER LARGE_INTEGER;
typedef LARGE_INTEGER *PLARGE_INTEGER;
struct __anonstruct____missing_field_name_3 {
ULONG LowPart ;
ULONG HighPart ;
};
struct __anonstruct_u_4 {
ULONG LowPart ;
ULONG HighPart ;
};
union _ULARGE_INTEGER {
struct __anonstruct____missing_field_name_3 __annonCompField2 ;
struct __anonstruct_u_4 u ;
ULONGLONG QuadPart ;
};
typedef union _ULARGE_INTEGER ULARGE_INTEGER;
typedef ULARGE_INTEGER *PULARGE_INTEGER;
struct _LUID {
ULONG LowPart ;
LONG HighPart ;
};
typedef struct _LUID LUID;
typedef struct _LUID *PLUID;
typedef ULONGLONG DWORDLONG;
typedef DWORDLONG *PDWORDLONG;
typedef LARGE_INTEGER PHYSICAL_ADDRESS;
typedef LARGE_INTEGER *PPHYSICAL_ADDRESS;
typedef enum _EVENT_TYPE EVENT_TYPE;
typedef enum _TIMER_TYPE TIMER_TYPE;
typedef enum _WAIT_TYPE WAIT_TYPE;
typedef CHAR *PSZ;
typedef char *PCSZ;
struct _STRING {
USHORT Length ;
USHORT MaximumLength ;
PCHAR Buffer ;
};
typedef struct _STRING STRING;
typedef STRING *PSTRING;
typedef STRING ANSI_STRING;
typedef PSTRING PANSI_STRING;
typedef STRING OEM_STRING;
typedef PSTRING POEM_STRING;
struct _CSTRING {
USHORT Length ;
USHORT MaximumLength ;
char *Buffer ;
};
typedef struct _CSTRING CSTRING;
typedef CSTRING *PCSTRING;
typedef STRING CANSI_STRING;
typedef PSTRING PCANSI_STRING;
struct _UNICODE_STRING {
USHORT Length ;
USHORT MaximumLength ;
PWSTR Buffer ;
};
typedef struct _UNICODE_STRING UNICODE_STRING;
typedef UNICODE_STRING *PUNICODE_STRING;
typedef UNICODE_STRING *PCUNICODE_STRING;
typedef UCHAR BOOLEAN;
typedef BOOLEAN *PBOOLEAN;
struct _LIST_ENTRY {
struct _LIST_ENTRY *Flink ;
struct _LIST_ENTRY *Blink ;
};
typedef struct _LIST_ENTRY LIST_ENTRY;
typedef struct _LIST_ENTRY *PLIST_ENTRY;
typedef struct _LIST_ENTRY *PRLIST_ENTRY;
struct _SINGLE_LIST_ENTRY {
struct _SINGLE_LIST_ENTRY *Next ;
};
typedef struct _SINGLE_LIST_ENTRY SINGLE_LIST_ENTRY;
typedef struct _SINGLE_LIST_ENTRY *PSINGLE_LIST_ENTRY;
struct LIST_ENTRY32 {
ULONG Flink ;
ULONG Blink ;
};
typedef struct LIST_ENTRY32 LIST_ENTRY32;
typedef LIST_ENTRY32 *PLIST_ENTRY32;
struct LIST_ENTRY64 {
ULONGLONG Flink ;
ULONGLONG Blink ;
};
typedef struct LIST_ENTRY64 LIST_ENTRY64;
typedef LIST_ENTRY64 *PLIST_ENTRY64;
struct _STRING32 {
USHORT Length ;
USHORT MaximumLength ;
ULONG Buffer ;
};
typedef struct _STRING32 STRING32;
typedef STRING32 *PSTRING32;
typedef STRING32 UNICODE_STRING32;
typedef UNICODE_STRING32 *PUNICODE_STRING32;
typedef STRING32 ANSI_STRING32;
typedef ANSI_STRING32 *PANSI_STRING32;
struct _STRING64 {
USHORT Length ;
USHORT MaximumLength ;
ULONGLONG Buffer ;
};
typedef struct _STRING64 STRING64;
typedef STRING64 *PSTRING64;
typedef STRING64 UNICODE_STRING64;
typedef UNICODE_STRING64 *PUNICODE_STRING64;
typedef STRING64 ANSI_STRING64;
typedef ANSI_STRING64 *PANSI_STRING64;
struct _OBJECT_ATTRIBUTES {
ULONG Length ;
HANDLE RootDirectory ;
PUNICODE_STRING ObjectName ;
ULONG Attributes ;
PVOID SecurityDescriptor ;
PVOID SecurityQualityOfService ;
};
typedef struct _OBJECT_ATTRIBUTES OBJECT_ATTRIBUTES;
typedef OBJECT_ATTRIBUTES *POBJECT_ATTRIBUTES;
struct _GUID {
unsigned long Data1 ;
unsigned short Data2 ;
unsigned short Data3 ;
unsigned char Data4[8] ;
};
typedef struct _GUID GUID;
typedef GUID *LPGUID;
typedef GUID *LPCGUID;
typedef GUID IID;
typedef IID *LPIID;
typedef GUID CLSID;
typedef CLSID *LPCLSID;
typedef GUID FMTID;
typedef FMTID *LPFMTID;
typedef unsigned int size_t;
struct _OBJECTID {
GUID Lineage ;
ULONG Uniquifier ;
};
typedef struct _OBJECTID OBJECTID;
typedef EXCEPTION_DISPOSITION (*PEXCEPTION_ROUTINE)(struct _EXCEPTION_RECORD *ExceptionRecord , PVOID EstablisherFrame , struct _CONTEXT *ContextRecord , PVOID DispatcherContext );
typedef UCHAR KIRQL;
typedef KIRQL *PKIRQL;
typedef enum _NT_PRODUCT_TYPE NT_PRODUCT_TYPE;
typedef enum _NT_PRODUCT_TYPE *PNT_PRODUCT_TYPE;
typedef enum _SUITE_TYPE SUITE_TYPE;
typedef struct _KTHREAD *PKTHREAD;
typedef struct _ETHREAD *PETHREAD;
typedef struct _EPROCESS *PEPROCESS;
typedef struct _PEB *PPEB;
typedef struct _KINTERRUPT *PKINTERRUPT;
typedef struct _IO_TIMER *PIO_TIMER;
typedef struct _OBJECT_TYPE *POBJECT_TYPE;
typedef struct _CALLBACK_OBJECT *PCALLBACK_OBJECT___0;
typedef struct _DEVICE_HANDLER_OBJECT *PDEVICE_HANDLER_OBJECT;
typedef struct _BUS_HANDLER *PBUS_HANDLER;
struct __anonstruct____missing_field_name_5 {
SINGLE_LIST_ENTRY Next ;
USHORT Depth ;
USHORT Sequence ;
};
union _SLIST_HEADER {
ULONGLONG Alignment ;
struct __anonstruct____missing_field_name_5 __annonCompField3 ;
};
typedef union _SLIST_HEADER SLIST_HEADER;
typedef union _SLIST_HEADER *PSLIST_HEADER;
typedef CCHAR KPROCESSOR_MODE;
typedef enum _MODE MODE;
typedef void (*PKNORMAL_ROUTINE)(PVOID NormalContext , PVOID SystemArgument1 , PVOID SystemArgument2 );
typedef void (*PKKERNEL_ROUTINE)(struct _KAPC *Apc , PKNORMAL_ROUTINE *NormalRoutine , PVOID *NormalContext , PVOID *SystemArgument1 , PVOID *SystemArgument2 );
typedef void (*PKRUNDOWN_ROUTINE)(struct _KAPC *Apc );
typedef BOOLEAN (*PKSYNCHRONIZE_ROUTINE)(PVOID SynchronizeContext );
typedef BOOLEAN (*PKTRANSFER_ROUTINE)(void);
struct _KAPC {
CSHORT Type ;
CSHORT Size ;
ULONG Spare0 ;
struct _KTHREAD *Thread ;
LIST_ENTRY ApcListEntry ;
void (*KernelRoutine)(struct _KAPC *Apc , PKNORMAL_ROUTINE *NormalRoutine , PVOID *NormalContext , PVOID *SystemArgument1 , PVOID *SystemArgument2 ) ;
void (*RundownRoutine)(struct _KAPC *Apc ) ;
void (*NormalRoutine)(PVOID NormalContext , PVOID SystemArgument1 , PVOID SystemArgument2 ) ;
PVOID NormalContext ;
PVOID SystemArgument1 ;
PVOID SystemArgument2 ;
CCHAR ApcStateIndex ;
KPROCESSOR_MODE ApcMode ;
BOOLEAN Inserted ;
};
typedef struct _KAPC KAPC;
typedef struct _KAPC *PKAPC;
typedef struct _KAPC *PRKAPC;
typedef void (*PKDEFERRED_ROUTINE)(struct _KDPC *Dpc , PVOID DeferredContext , PVOID SystemArgument1 , PVOID SystemArgument2 );
typedef enum _KDPC_IMPORTANCE KDPC_IMPORTANCE;
struct _KDPC {
CSHORT Type ;
UCHAR Number ;
UCHAR Importance ;
LIST_ENTRY DpcListEntry ;
void (*DeferredRoutine)(struct _KDPC *Dpc , PVOID DeferredContext , PVOID SystemArgument1 , PVOID SystemArgument2 ) ;
PVOID DeferredContext ;
PVOID SystemArgument1 ;
PVOID SystemArgument2 ;
PULONG_PTR Lock ;
};
typedef struct _KDPC KDPC;
typedef struct _KDPC *PKDPC;
typedef struct _KDPC *PRKDPC;
typedef PVOID PKIPI_CONTEXT;
typedef void (*PKIPI_WORKER)(PKIPI_CONTEXT PacketContext , PVOID Parameter1 , PVOID Parameter2 , PVOID Parameter3 );
struct _KIPI_COUNTS {
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
};
typedef struct _KIPI_COUNTS KIPI_COUNTS;
typedef struct _KIPI_COUNTS *PKIPI_COUNTS;
struct _MDL {
struct _MDL *Next ;
CSHORT Size ;
CSHORT MdlFlags ;
struct _EPROCESS *Process ;
PVOID MappedSystemVa ;
PVOID StartVa ;
ULONG ByteCount ;
ULONG ByteOffset ;
};
typedef struct _MDL MDL;
typedef struct _MDL *PMDL;
typedef PVOID PACCESS_TOKEN;
typedef PVOID PSECURITY_DESCRIPTOR;
typedef PVOID PSID;
typedef ULONG ACCESS_MASK;
typedef ACCESS_MASK *PACCESS_MASK;
struct _GENERIC_MAPPING {
ACCESS_MASK GenericRead ;
ACCESS_MASK GenericWrite ;
ACCESS_MASK GenericExecute ;
ACCESS_MASK GenericAll ;
};
typedef struct _GENERIC_MAPPING GENERIC_MAPPING;
typedef GENERIC_MAPPING *PGENERIC_MAPPING;
struct _LUID_AND_ATTRIBUTES {
LUID Luid ;
ULONG Attributes ;
};
typedef struct _LUID_AND_ATTRIBUTES LUID_AND_ATTRIBUTES;
typedef struct _LUID_AND_ATTRIBUTES *PLUID_AND_ATTRIBUTES;
typedef LUID_AND_ATTRIBUTES LUID_AND_ATTRIBUTES_ARRAY[1];
typedef LUID_AND_ATTRIBUTES_ARRAY *PLUID_AND_ATTRIBUTES_ARRAY;
struct _ACL {
UCHAR AclRevision ;
UCHAR Sbz1 ;
USHORT AclSize ;
USHORT AceCount ;
USHORT Sbz2 ;
};
typedef struct _ACL ACL;
typedef ACL *PACL;
struct _PRIVILEGE_SET {
ULONG PrivilegeCount ;
ULONG Control ;
LUID_AND_ATTRIBUTES Privilege[1] ;
};
typedef struct _PRIVILEGE_SET PRIVILEGE_SET;
typedef struct _PRIVILEGE_SET *PPRIVILEGE_SET;
typedef enum _SECURITY_IMPERSONATION_LEVEL SECURITY_IMPERSONATION_LEVEL;
typedef enum _SECURITY_IMPERSONATION_LEVEL *PSECURITY_IMPERSONATION_LEVEL;
typedef BOOLEAN SECURITY_CONTEXT_TRACKING_MODE;
typedef BOOLEAN *PSECURITY_CONTEXT_TRACKING_MODE;
struct _SECURITY_QUALITY_OF_SERVICE {
ULONG Length ;
SECURITY_IMPERSONATION_LEVEL ImpersonationLevel ;
SECURITY_CONTEXT_TRACKING_MODE ContextTrackingMode ;
BOOLEAN EffectiveOnly ;
};
typedef struct _SECURITY_QUALITY_OF_SERVICE SECURITY_QUALITY_OF_SERVICE;
typedef struct _SECURITY_QUALITY_OF_SERVICE *PSECURITY_QUALITY_OF_SERVICE;
struct _SE_IMPERSONATION_STATE {
PACCESS_TOKEN Token ;
BOOLEAN CopyOnOpen ;
BOOLEAN EffectiveOnly ;
SECURITY_IMPERSONATION_LEVEL Level ;
};
typedef struct _SE_IMPERSONATION_STATE SE_IMPERSONATION_STATE;
typedef struct _SE_IMPERSONATION_STATE *PSE_IMPERSONATION_STATE;
typedef ULONG SECURITY_INFORMATION;
typedef ULONG *PSECURITY_INFORMATION;
typedef ULONG KAFFINITY;
typedef KAFFINITY *PKAFFINITY;
typedef LONG KPRIORITY;
typedef ULONG_PTR KSPIN_LOCK;
typedef KSPIN_LOCK *PKSPIN_LOCK;
typedef void (*PKINTERRUPT_ROUTINE)(void);
typedef enum _KPROFILE_SOURCE KPROFILE_SOURCE;
typedef NTSTATUS (*PRTL_QUERY_REGISTRY_ROUTINE)(PWSTR ValueName , ULONG ValueType , PVOID ValueData , ULONG ValueLength , PVOID Context , PVOID EntryContext );
struct _RTL_QUERY_REGISTRY_TABLE {
NTSTATUS (*QueryRoutine)(PWSTR ValueName , ULONG ValueType , PVOID ValueData , ULONG ValueLength , PVOID Context , PVOID EntryContext ) ;
ULONG Flags ;
PWSTR Name ;
PVOID EntryContext ;
ULONG DefaultType ;
PVOID DefaultData ;
ULONG DefaultLength ;
};
typedef struct _RTL_QUERY_REGISTRY_TABLE RTL_QUERY_REGISTRY_TABLE;
typedef struct _RTL_QUERY_REGISTRY_TABLE *PRTL_QUERY_REGISTRY_TABLE;
struct _TIME_FIELDS {
CSHORT Year ;
CSHORT Month ;
CSHORT Day ;
CSHORT Hour ;
CSHORT Minute ;
CSHORT Second ;
CSHORT Milliseconds ;
CSHORT Weekday ;
};
typedef struct _TIME_FIELDS TIME_FIELDS;
typedef TIME_FIELDS *PTIME_FIELDS;
struct _RTL_BITMAP {
ULONG SizeOfBitMap ;
PULONG Buffer ;
};
typedef struct _RTL_BITMAP RTL_BITMAP;
typedef RTL_BITMAP *PRTL_BITMAP;
struct _RTL_BITMAP_RUN {
ULONG StartingIndex ;
ULONG NumberOfBits ;
};
typedef struct _RTL_BITMAP_RUN RTL_BITMAP_RUN;
typedef RTL_BITMAP_RUN *PRTL_BITMAP_RUN;
struct _RTL_RANGE {
ULONGLONG Start ;
ULONGLONG End ;
PVOID UserData ;
PVOID Owner ;
UCHAR Attributes ;
UCHAR Flags ;
};
typedef struct _RTL_RANGE RTL_RANGE;
typedef struct _RTL_RANGE *PRTL_RANGE;
struct _RTL_RANGE_LIST {
LIST_ENTRY ListHead ;
ULONG Flags ;
ULONG Count ;
ULONG Stamp ;
};
typedef struct _RTL_RANGE_LIST RTL_RANGE_LIST;
typedef struct _RTL_RANGE_LIST *PRTL_RANGE_LIST;
struct _RANGE_LIST_ITERATOR {
PLIST_ENTRY RangeListHead ;
PLIST_ENTRY MergedHead ;
PVOID Current ;
ULONG Stamp ;
};
typedef struct _RANGE_LIST_ITERATOR RTL_RANGE_LIST_ITERATOR;
typedef struct _RANGE_LIST_ITERATOR *PRTL_RANGE_LIST_ITERATOR;
typedef BOOLEAN (*PRTL_CONFLICT_RANGE_CALLBACK)(PVOID Context , PRTL_RANGE Range );
struct _OSVERSIONINFOA {
ULONG dwOSVersionInfoSize ;
ULONG dwMajorVersion ;
ULONG dwMinorVersion ;
ULONG dwBuildNumber ;
ULONG dwPlatformId ;
CHAR szCSDVersion[128] ;
};
typedef struct _OSVERSIONINFOA OSVERSIONINFOA;
typedef struct _OSVERSIONINFOA *POSVERSIONINFOA;
typedef struct _OSVERSIONINFOA *LPOSVERSIONINFOA;
struct _OSVERSIONINFOW {
ULONG dwOSVersionInfoSize ;
ULONG dwMajorVersion ;
ULONG dwMinorVersion ;
ULONG dwBuildNumber ;
ULONG dwPlatformId ;
WCHAR szCSDVersion[128] ;
};
typedef struct _OSVERSIONINFOW OSVERSIONINFOW;
typedef struct _OSVERSIONINFOW *POSVERSIONINFOW;
typedef struct _OSVERSIONINFOW *LPOSVERSIONINFOW;
typedef struct _OSVERSIONINFOW RTL_OSVERSIONINFOW;
typedef struct _OSVERSIONINFOW *PRTL_OSVERSIONINFOW;
typedef OSVERSIONINFOA OSVERSIONINFO;
typedef POSVERSIONINFOA POSVERSIONINFO;
typedef LPOSVERSIONINFOA LPOSVERSIONINFO;
struct _OSVERSIONINFOEXA {
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
};
typedef struct _OSVERSIONINFOEXA OSVERSIONINFOEXA;
typedef struct _OSVERSIONINFOEXA *POSVERSIONINFOEXA;
typedef struct _OSVERSIONINFOEXA *LPOSVERSIONINFOEXA;
struct _OSVERSIONINFOEXW {
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
};
typedef struct _OSVERSIONINFOEXW OSVERSIONINFOEXW;
typedef struct _OSVERSIONINFOEXW *POSVERSIONINFOEXW;
typedef struct _OSVERSIONINFOEXW *LPOSVERSIONINFOEXW;
typedef struct _OSVERSIONINFOEXW RTL_OSVERSIONINFOEXW;
typedef struct _OSVERSIONINFOEXW *PRTL_OSVERSIONINFOEXW;
typedef OSVERSIONINFOEXA OSVERSIONINFOEX;
typedef POSVERSIONINFOEXA POSVERSIONINFOEX;
typedef LPOSVERSIONINFOEXA LPOSVERSIONINFOEX;
union __anonunion____missing_field_name_6 {
NTSTATUS Status ;
PVOID Pointer ;
};
struct _IO_STATUS_BLOCK {
union __anonunion____missing_field_name_6 __annonCompField4 ;
ULONG_PTR Information ;
};
typedef struct _IO_STATUS_BLOCK IO_STATUS_BLOCK;
typedef struct _IO_STATUS_BLOCK *PIO_STATUS_BLOCK;
typedef void (*PIO_APC_ROUTINE)(PVOID ApcContext , PIO_STATUS_BLOCK IoStatusBlock , ULONG Reserved );
typedef enum _FILE_INFORMATION_CLASS FILE_INFORMATION_CLASS;
typedef enum _FILE_INFORMATION_CLASS *PFILE_INFORMATION_CLASS;
struct _FILE_BASIC_INFORMATION {
LARGE_INTEGER CreationTime ;
LARGE_INTEGER LastAccessTime ;
LARGE_INTEGER LastWriteTime ;
LARGE_INTEGER ChangeTime ;
ULONG FileAttributes ;
};
typedef struct _FILE_BASIC_INFORMATION FILE_BASIC_INFORMATION;
typedef struct _FILE_BASIC_INFORMATION *PFILE_BASIC_INFORMATION;
struct _FILE_STANDARD_INFORMATION {
LARGE_INTEGER AllocationSize ;
LARGE_INTEGER EndOfFile ;
ULONG NumberOfLinks ;
BOOLEAN DeletePending ;
BOOLEAN Directory ;
};
typedef struct _FILE_STANDARD_INFORMATION FILE_STANDARD_INFORMATION;
typedef struct _FILE_STANDARD_INFORMATION *PFILE_STANDARD_INFORMATION;
struct _FILE_POSITION_INFORMATION {
LARGE_INTEGER CurrentByteOffset ;
};
typedef struct _FILE_POSITION_INFORMATION FILE_POSITION_INFORMATION;
typedef struct _FILE_POSITION_INFORMATION *PFILE_POSITION_INFORMATION;
struct _FILE_ALIGNMENT_INFORMATION {
ULONG AlignmentRequirement ;
};
typedef struct _FILE_ALIGNMENT_INFORMATION FILE_ALIGNMENT_INFORMATION;
typedef struct _FILE_ALIGNMENT_INFORMATION *PFILE_ALIGNMENT_INFORMATION;
struct _FILE_NAME_INFORMATION {
ULONG FileNameLength ;
WCHAR FileName[1] ;
};
typedef struct _FILE_NAME_INFORMATION FILE_NAME_INFORMATION;
typedef struct _FILE_NAME_INFORMATION *PFILE_NAME_INFORMATION;
struct _FILE_NETWORK_OPEN_INFORMATION {
LARGE_INTEGER CreationTime ;
LARGE_INTEGER LastAccessTime ;
LARGE_INTEGER LastWriteTime ;
LARGE_INTEGER ChangeTime ;
LARGE_INTEGER AllocationSize ;
LARGE_INTEGER EndOfFile ;
ULONG FileAttributes ;
};
typedef struct _FILE_NETWORK_OPEN_INFORMATION FILE_NETWORK_OPEN_INFORMATION;
typedef struct _FILE_NETWORK_OPEN_INFORMATION *PFILE_NETWORK_OPEN_INFORMATION;
struct _FILE_ATTRIBUTE_TAG_INFORMATION {
ULONG FileAttributes ;
ULONG ReparseTag ;
};
typedef struct _FILE_ATTRIBUTE_TAG_INFORMATION FILE_ATTRIBUTE_TAG_INFORMATION;
typedef struct _FILE_ATTRIBUTE_TAG_INFORMATION *PFILE_ATTRIBUTE_TAG_INFORMATION;
struct _FILE_DISPOSITION_INFORMATION {
BOOLEAN DeleteFile ;
};
typedef struct _FILE_DISPOSITION_INFORMATION FILE_DISPOSITION_INFORMATION;
typedef struct _FILE_DISPOSITION_INFORMATION *PFILE_DISPOSITION_INFORMATION;
struct _FILE_END_OF_FILE_INFORMATION {
LARGE_INTEGER EndOfFile ;
};
typedef struct _FILE_END_OF_FILE_INFORMATION FILE_END_OF_FILE_INFORMATION;
typedef struct _FILE_END_OF_FILE_INFORMATION *PFILE_END_OF_FILE_INFORMATION;
struct _FILE_FULL_EA_INFORMATION {
ULONG NextEntryOffset ;
UCHAR Flags ;
UCHAR EaNameLength ;
USHORT EaValueLength ;
CHAR EaName[1] ;
};
typedef struct _FILE_FULL_EA_INFORMATION FILE_FULL_EA_INFORMATION;
typedef struct _FILE_FULL_EA_INFORMATION *PFILE_FULL_EA_INFORMATION;
typedef enum _FSINFOCLASS FS_INFORMATION_CLASS;
typedef enum _FSINFOCLASS *PFS_INFORMATION_CLASS;
struct _FILE_FS_DEVICE_INFORMATION {
ULONG DeviceType ;
ULONG Characteristics ;
};
typedef struct _FILE_FS_DEVICE_INFORMATION FILE_FS_DEVICE_INFORMATION;
typedef struct _FILE_FS_DEVICE_INFORMATION *PFILE_FS_DEVICE_INFORMATION;
union _FILE_SEGMENT_ELEMENT {
PVOID64 Buffer ;
ULONGLONG Alignment ;
};
typedef union _FILE_SEGMENT_ELEMENT FILE_SEGMENT_ELEMENT;
typedef union _FILE_SEGMENT_ELEMENT *PFILE_SEGMENT_ELEMENT;
typedef enum _INTERFACE_TYPE INTERFACE_TYPE;
typedef enum _INTERFACE_TYPE *PINTERFACE_TYPE;
typedef enum _DMA_WIDTH DMA_WIDTH;
typedef enum _DMA_WIDTH *PDMA_WIDTH;
typedef enum _DMA_SPEED DMA_SPEED;
typedef enum _DMA_SPEED *PDMA_SPEED;
typedef void (*PINTERFACE_REFERENCE)(PVOID Context );
typedef void (*PINTERFACE_DEREFERENCE)(PVOID Context );
typedef enum _BUS_DATA_TYPE BUS_DATA_TYPE;
typedef enum _BUS_DATA_TYPE *PBUS_DATA_TYPE;
struct _IO_ERROR_LOG_PACKET {
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
};
typedef struct _IO_ERROR_LOG_PACKET IO_ERROR_LOG_PACKET;
typedef struct _IO_ERROR_LOG_PACKET *PIO_ERROR_LOG_PACKET;
struct _IO_ERROR_LOG_MESSAGE {
USHORT Type ;
USHORT Size ;
USHORT DriverNameLength ;
LARGE_INTEGER TimeStamp ;
ULONG DriverNameOffset ;
IO_ERROR_LOG_PACKET EntryData ;
};
typedef struct _IO_ERROR_LOG_MESSAGE IO_ERROR_LOG_MESSAGE;
typedef struct _IO_ERROR_LOG_MESSAGE *PIO_ERROR_LOG_MESSAGE;
struct _KEY_BASIC_INFORMATION {
LARGE_INTEGER LastWriteTime ;
ULONG TitleIndex ;
ULONG NameLength ;
WCHAR Name[1] ;
};
typedef struct _KEY_BASIC_INFORMATION KEY_BASIC_INFORMATION;
typedef struct _KEY_BASIC_INFORMATION *PKEY_BASIC_INFORMATION;
struct _KEY_NODE_INFORMATION {
LARGE_INTEGER LastWriteTime ;
ULONG TitleIndex ;
ULONG ClassOffset ;
ULONG ClassLength ;
ULONG NameLength ;
WCHAR Name[1] ;
};
typedef struct _KEY_NODE_INFORMATION KEY_NODE_INFORMATION;
typedef struct _KEY_NODE_INFORMATION *PKEY_NODE_INFORMATION;
struct _KEY_FULL_INFORMATION {
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
};
typedef struct _KEY_FULL_INFORMATION KEY_FULL_INFORMATION;
typedef struct _KEY_FULL_INFORMATION *PKEY_FULL_INFORMATION;
struct _KEY_NAME_INFORMATION {
ULONG NameLength ;
WCHAR Name[1] ;
};
typedef struct _KEY_NAME_INFORMATION KEY_NAME_INFORMATION;
typedef struct _KEY_NAME_INFORMATION *PKEY_NAME_INFORMATION;
typedef enum _KEY_INFORMATION_CLASS KEY_INFORMATION_CLASS;
struct _KEY_WRITE_TIME_INFORMATION {
LARGE_INTEGER LastWriteTime ;
};
typedef struct _KEY_WRITE_TIME_INFORMATION KEY_WRITE_TIME_INFORMATION;
typedef struct _KEY_WRITE_TIME_INFORMATION *PKEY_WRITE_TIME_INFORMATION;
typedef enum _KEY_SET_INFORMATION_CLASS KEY_SET_INFORMATION_CLASS;
struct _KEY_VALUE_BASIC_INFORMATION {
ULONG TitleIndex ;
ULONG Type ;
ULONG NameLength ;
WCHAR Name[1] ;
};
typedef struct _KEY_VALUE_BASIC_INFORMATION KEY_VALUE_BASIC_INFORMATION;
typedef struct _KEY_VALUE_BASIC_INFORMATION *PKEY_VALUE_BASIC_INFORMATION;
struct _KEY_VALUE_FULL_INFORMATION {
ULONG TitleIndex ;
ULONG Type ;
ULONG DataOffset ;
ULONG DataLength ;
ULONG NameLength ;
WCHAR Name[1] ;
};
typedef struct _KEY_VALUE_FULL_INFORMATION KEY_VALUE_FULL_INFORMATION;
typedef struct _KEY_VALUE_FULL_INFORMATION *PKEY_VALUE_FULL_INFORMATION;
struct _KEY_VALUE_PARTIAL_INFORMATION {
ULONG TitleIndex ;
ULONG Type ;
ULONG DataLength ;
UCHAR Data[1] ;
};
typedef struct _KEY_VALUE_PARTIAL_INFORMATION KEY_VALUE_PARTIAL_INFORMATION;
typedef struct _KEY_VALUE_PARTIAL_INFORMATION *PKEY_VALUE_PARTIAL_INFORMATION;
struct _KEY_VALUE_PARTIAL_INFORMATION_ALIGN64 {
ULONG Type ;
ULONG DataLength ;
UCHAR Data[1] ;
};
typedef struct _KEY_VALUE_PARTIAL_INFORMATION_ALIGN64 KEY_VALUE_PARTIAL_INFORMATION_ALIGN64;
typedef struct _KEY_VALUE_PARTIAL_INFORMATION_ALIGN64 *PKEY_VALUE_PARTIAL_INFORMATION_ALIGN64;
struct _KEY_VALUE_ENTRY {
PUNICODE_STRING ValueName ;
ULONG DataLength ;
ULONG DataOffset ;
ULONG Type ;
};
typedef struct _KEY_VALUE_ENTRY KEY_VALUE_ENTRY;
typedef struct _KEY_VALUE_ENTRY *PKEY_VALUE_ENTRY;
typedef enum _KEY_VALUE_INFORMATION_CLASS KEY_VALUE_INFORMATION_CLASS;
struct _OBJECT_NAME_INFORMATION {
UNICODE_STRING Name ;
};
typedef struct _OBJECT_NAME_INFORMATION OBJECT_NAME_INFORMATION;
typedef struct _OBJECT_NAME_INFORMATION *POBJECT_NAME_INFORMATION;
typedef enum _SECTION_INHERIT SECTION_INHERIT;
struct _CLIENT_ID {
HANDLE UniqueProcess ;
HANDLE UniqueThread ;
};
typedef struct _CLIENT_ID CLIENT_ID;
typedef CLIENT_ID *PCLIENT_ID;
union __anonunion____missing_field_name_7 {
PVOID FiberData ;
ULONG Version ;
};
struct _NT_TIB {
struct _EXCEPTION_REGISTRATION_RECORD *ExceptionList ;
PVOID StackBase ;
PVOID StackLimit ;
PVOID SubSystemTib ;
union __anonunion____missing_field_name_7 __annonCompField5 ;
PVOID ArbitraryUserPointer ;
struct _NT_TIB *Self ;
};
typedef struct _NT_TIB NT_TIB;
typedef NT_TIB *PNT_TIB;
typedef enum _PROCESSINFOCLASS PROCESSINFOCLASS;
typedef enum _THREADINFOCLASS THREADINFOCLASS;
struct _PROCESS_WS_WATCH_INFORMATION {
PVOID FaultingPc ;
PVOID FaultingVa ;
};
typedef struct _PROCESS_WS_WATCH_INFORMATION PROCESS_WS_WATCH_INFORMATION;
typedef struct _PROCESS_WS_WATCH_INFORMATION *PPROCESS_WS_WATCH_INFORMATION;
struct _PROCESS_BASIC_INFORMATION {
NTSTATUS ExitStatus ;
PPEB PebBaseAddress ;
ULONG_PTR AffinityMask ;
KPRIORITY BasePriority ;
ULONG_PTR UniqueProcessId ;
ULONG_PTR InheritedFromUniqueProcessId ;
};
typedef struct _PROCESS_BASIC_INFORMATION PROCESS_BASIC_INFORMATION;
typedef PROCESS_BASIC_INFORMATION *PPROCESS_BASIC_INFORMATION;
struct __anonstruct_Set_9 {
HANDLE DirectoryHandle ;
};
struct __anonstruct_Query_10 {
ULONG DriveMap ;
UCHAR DriveType[32] ;
};
union __anonunion____missing_field_name_8 {
struct __anonstruct_Set_9 Set ;
struct __anonstruct_Query_10 Query ;
};
struct _PROCESS_DEVICEMAP_INFORMATION {
union __anonunion____missing_field_name_8 __annonCompField6 ;
};
typedef struct _PROCESS_DEVICEMAP_INFORMATION PROCESS_DEVICEMAP_INFORMATION;
typedef struct _PROCESS_DEVICEMAP_INFORMATION *PPROCESS_DEVICEMAP_INFORMATION;
struct _PROCESS_SESSION_INFORMATION {
ULONG SessionId ;
};
typedef struct _PROCESS_SESSION_INFORMATION PROCESS_SESSION_INFORMATION;
typedef struct _PROCESS_SESSION_INFORMATION *PPROCESS_SESSION_INFORMATION;
struct _QUOTA_LIMITS {
SIZE_T PagedPoolLimit ;
SIZE_T NonPagedPoolLimit ;
SIZE_T MinimumWorkingSetSize ;
SIZE_T MaximumWorkingSetSize ;
SIZE_T PagefileLimit ;
LARGE_INTEGER TimeLimit ;
};
typedef struct _QUOTA_LIMITS QUOTA_LIMITS;
typedef QUOTA_LIMITS *PQUOTA_LIMITS;
struct _IO_COUNTERS {
ULONGLONG ReadOperationCount ;
ULONGLONG WriteOperationCount ;
ULONGLONG OtherOperationCount ;
ULONGLONG ReadTransferCount ;
ULONGLONG WriteTransferCount ;
ULONGLONG OtherTransferCount ;
};
typedef struct _IO_COUNTERS IO_COUNTERS;
typedef IO_COUNTERS *PIO_COUNTERS;
struct _VM_COUNTERS {
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
};
typedef struct _VM_COUNTERS VM_COUNTERS;
typedef VM_COUNTERS *PVM_COUNTERS;
struct _POOLED_USAGE_AND_LIMITS {
SIZE_T PeakPagedPoolUsage ;
SIZE_T PagedPoolUsage ;
SIZE_T PagedPoolLimit ;
SIZE_T PeakNonPagedPoolUsage ;
SIZE_T NonPagedPoolUsage ;
SIZE_T NonPagedPoolLimit ;
SIZE_T PeakPagefileUsage ;
SIZE_T PagefileUsage ;
SIZE_T PagefileLimit ;
};
typedef struct _POOLED_USAGE_AND_LIMITS POOLED_USAGE_AND_LIMITS;
typedef POOLED_USAGE_AND_LIMITS *PPOOLED_USAGE_AND_LIMITS;
struct _PROCESS_ACCESS_TOKEN {
HANDLE Token ;
HANDLE Thread ;
};
typedef struct _PROCESS_ACCESS_TOKEN PROCESS_ACCESS_TOKEN;
typedef struct _PROCESS_ACCESS_TOKEN *PPROCESS_ACCESS_TOKEN;
struct _KERNEL_USER_TIMES {
LARGE_INTEGER CreateTime ;
LARGE_INTEGER ExitTime ;
LARGE_INTEGER KernelTime ;
LARGE_INTEGER UserTime ;
};
typedef struct _KERNEL_USER_TIMES KERNEL_USER_TIMES;
typedef KERNEL_USER_TIMES *PKERNEL_USER_TIMES;
typedef enum _SYSTEM_POWER_STATE SYSTEM_POWER_STATE;
typedef enum _SYSTEM_POWER_STATE *PSYSTEM_POWER_STATE;
typedef enum __anonenum_POWER_ACTION_11 POWER_ACTION;
typedef enum __anonenum_POWER_ACTION_11 *PPOWER_ACTION;
typedef enum _DEVICE_POWER_STATE DEVICE_POWER_STATE;
typedef enum _DEVICE_POWER_STATE *PDEVICE_POWER_STATE;
union _POWER_STATE {
SYSTEM_POWER_STATE SystemState ;
DEVICE_POWER_STATE DeviceState ;
};
typedef union _POWER_STATE POWER_STATE;
typedef union _POWER_STATE *PPOWER_STATE;
typedef enum _POWER_STATE_TYPE POWER_STATE_TYPE;
typedef enum _POWER_STATE_TYPE *PPOWER_STATE_TYPE;
typedef ULONG EXECUTION_STATE;
typedef enum __anonenum_LATENCY_TIME_12 LATENCY_TIME;
typedef enum __anonenum_POWER_INFORMATION_LEVEL_13 POWER_INFORMATION_LEVEL;
typedef ULONG PFN_COUNT;
typedef LONG SPFN_NUMBER;
typedef LONG *PSPFN_NUMBER;
typedef ULONG PFN_NUMBER;
typedef ULONG *PPFN_NUMBER;
struct __anonstruct_MciStats_14 {
USHORT McaCod ;
USHORT MsCod ;
ULONG OtherInfo ;
ULONG Damage ;
ULONG AddressValid ;
ULONG MiscValid ;
ULONG Enabled ;
ULONG UnCorrected ;
ULONG OverFlow ;
ULONG Valid ;
};
union _MCI_STATS {
struct __anonstruct_MciStats_14 MciStats ;
ULONGLONG QuadPart ;
};
typedef union _MCI_STATS MCI_STATS;
typedef union _MCI_STATS *PMCI_STATS;
struct _KPCR {
NT_TIB NtTib ;
struct _KPCR *SelfPcr ;
struct _KPRCB *Prcb ;
KIRQL Irql ;
ULONG IRR ;
ULONG IrrActive ;
ULONG IDR ;
ULONG Reserved2 ;
struct _KIDTENTRY *IDT ;
struct _KGDTENTRY *GDT ;
struct _KTSS *TSS ;
USHORT MajorVersion ;
USHORT MinorVersion ;
KAFFINITY SetMember ;
ULONG StallScaleFactor ;
UCHAR DebugActive ;
UCHAR Number ;
};
typedef struct _KPCR KPCR;
typedef KPCR *PKPCR;
struct _KFLOATING_SAVE {
ULONG ControlWord ;
ULONG StatusWord ;
ULONG ErrorOffset ;
ULONG ErrorSelector ;
ULONG DataOffset ;
ULONG DataSelector ;
ULONG Cr0NpxState ;
ULONG Spare1 ;
};
typedef struct _KFLOATING_SAVE KFLOATING_SAVE;
typedef struct _KFLOATING_SAVE *PKFLOATING_SAVE;
typedef enum _INTERLOCKED_RESULT INTERLOCKED_RESULT;
struct _KSYSTEM_TIME {
ULONG LowPart ;
LONG High1Time ;
LONG High2Time ;
};
typedef struct _KSYSTEM_TIME KSYSTEM_TIME;
typedef struct _KSYSTEM_TIME *PKSYSTEM_TIME;
struct _FLOATING_SAVE_AREA {
ULONG ControlWord ;
ULONG StatusWord ;
ULONG TagWord ;
ULONG ErrorOffset ;
ULONG ErrorSelector ;
ULONG DataOffset ;
ULONG DataSelector ;
UCHAR RegisterArea[80] ;
ULONG Cr0NpxState ;
};
typedef struct _FLOATING_SAVE_AREA FLOATING_SAVE_AREA;
typedef FLOATING_SAVE_AREA *PFLOATING_SAVE_AREA;
struct _CONTEXT {
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
};
typedef struct _CONTEXT CONTEXT;
typedef CONTEXT *PCONTEXT;
typedef void (*PTIMER_APC_ROUTINE)(PVOID TimerContext , ULONG TimerLowValue , LONG TimerHighValue );
typedef enum _ALTERNATIVE_ARCHITECTURE_TYPE ALTERNATIVE_ARCHITECTURE_TYPE;
struct _KUSER_SHARED_DATA {
ULONG volatile   TickCountLow ;
ULONG TickCountMultiplier ;
KSYSTEM_TIME volatile   InterruptTime ;
KSYSTEM_TIME volatile   SystemTime ;
KSYSTEM_TIME volatile   TimeZoneBias ;
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
ULONG volatile   TimeSlip ;
ALTERNATIVE_ARCHITECTURE_TYPE AlternativeArchitecture ;
LARGE_INTEGER SystemExpirationDate ;
ULONG SuiteMask ;
BOOLEAN KdDebuggerEnabled ;
};
typedef struct _KUSER_SHARED_DATA KUSER_SHARED_DATA;
typedef struct _KUSER_SHARED_DATA *PKUSER_SHARED_DATA;
typedef enum _CM_SERVICE_NODE_TYPE SERVICE_NODE_TYPE;
typedef enum _CM_SERVICE_LOAD_TYPE SERVICE_LOAD_TYPE;
typedef enum _CM_ERROR_CONTROL_TYPE SERVICE_ERROR_TYPE;
typedef int CM_RESOURCE_TYPE;
typedef enum _CM_SHARE_DISPOSITION CM_SHARE_DISPOSITION;
typedef PVOID PASSIGNED_RESOURCE;
struct __anonstruct_Generic_16 {
PHYSICAL_ADDRESS Start ;
ULONG Length ;
};
struct __anonstruct_Port_17 {
PHYSICAL_ADDRESS Start ;
ULONG Length ;
};
struct __anonstruct_Interrupt_18 {
ULONG Level ;
ULONG Vector ;
ULONG Affinity ;
};
struct __anonstruct_Memory_19 {
PHYSICAL_ADDRESS Start ;
ULONG Length ;
};
struct __anonstruct_Dma_20 {
ULONG Channel ;
ULONG Port ;
ULONG Reserved1 ;
};
struct __anonstruct_DevicePrivate_21 {
ULONG Data[3] ;
};
struct __anonstruct_BusNumber_22 {
ULONG Start ;
ULONG Length ;
ULONG Reserved ;
};
struct __anonstruct_DeviceSpecificData_23 {
ULONG DataSize ;
ULONG Reserved1 ;
ULONG Reserved2 ;
};
union __anonunion_u_15 {
struct __anonstruct_Generic_16 Generic ;
struct __anonstruct_Port_17 Port ;
struct __anonstruct_Interrupt_18 Interrupt ;
struct __anonstruct_Memory_19 Memory ;
struct __anonstruct_Dma_20 Dma ;
struct __anonstruct_DevicePrivate_21 DevicePrivate ;
struct __anonstruct_BusNumber_22 BusNumber ;
struct __anonstruct_DeviceSpecificData_23 DeviceSpecificData ;
};
struct _CM_PARTIAL_RESOURCE_DESCRIPTOR {
UCHAR Type ;
UCHAR ShareDisposition ;
USHORT Flags ;
union __anonunion_u_15 u ;
};
typedef struct _CM_PARTIAL_RESOURCE_DESCRIPTOR CM_PARTIAL_RESOURCE_DESCRIPTOR;
typedef struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *PCM_PARTIAL_RESOURCE_DESCRIPTOR;
struct _CM_PARTIAL_RESOURCE_LIST {
USHORT Version ;
USHORT Revision ;
ULONG Count ;
CM_PARTIAL_RESOURCE_DESCRIPTOR PartialDescriptors[1] ;
};
typedef struct _CM_PARTIAL_RESOURCE_LIST CM_PARTIAL_RESOURCE_LIST;
typedef struct _CM_PARTIAL_RESOURCE_LIST *PCM_PARTIAL_RESOURCE_LIST;
struct _CM_FULL_RESOURCE_DESCRIPTOR {
INTERFACE_TYPE InterfaceType ;
ULONG BusNumber ;
CM_PARTIAL_RESOURCE_LIST PartialResourceList ;
};
typedef struct _CM_FULL_RESOURCE_DESCRIPTOR CM_FULL_RESOURCE_DESCRIPTOR;
typedef struct _CM_FULL_RESOURCE_DESCRIPTOR *PCM_FULL_RESOURCE_DESCRIPTOR;
struct _CM_RESOURCE_LIST {
ULONG Count ;
CM_FULL_RESOURCE_DESCRIPTOR List[1] ;
};
typedef struct _CM_RESOURCE_LIST CM_RESOURCE_LIST;
typedef struct _CM_RESOURCE_LIST *PCM_RESOURCE_LIST;
struct _DEVICE_FLAGS {
ULONG Failed ;
ULONG ReadOnly ;
ULONG Removable ;
ULONG ConsoleIn ;
ULONG ConsoleOut ;
ULONG Input ;
ULONG Output ;
};
typedef struct _DEVICE_FLAGS DEVICE_FLAGS;
typedef struct _DEVICE_FLAGS *PDEVICE_FLAGS;
struct _CM_COMPONENT_INFORMATION {
DEVICE_FLAGS Flags ;
ULONG Version ;
ULONG Key ;
ULONG AffinityMask ;
};
typedef struct _CM_COMPONENT_INFORMATION CM_COMPONENT_INFORMATION;
typedef struct _CM_COMPONENT_INFORMATION *PCM_COMPONENT_INFORMATION;
struct _CM_ROM_BLOCK {
ULONG Address ;
ULONG Size ;
};
typedef struct _CM_ROM_BLOCK CM_ROM_BLOCK;
typedef struct _CM_ROM_BLOCK *PCM_ROM_BLOCK;
struct _CM_INT13_DRIVE_PARAMETER {
USHORT DriveSelect ;
ULONG MaxCylinders ;
USHORT SectorsPerTrack ;
USHORT MaxHeads ;
USHORT NumberDrives ;
};
typedef struct _CM_INT13_DRIVE_PARAMETER CM_INT13_DRIVE_PARAMETER;
typedef struct _CM_INT13_DRIVE_PARAMETER *PCM_INT13_DRIVE_PARAMETER;
struct _CM_MCA_POS_DATA {
USHORT AdapterId ;
UCHAR PosData1 ;
UCHAR PosData2 ;
UCHAR PosData3 ;
UCHAR PosData4 ;
};
typedef struct _CM_MCA_POS_DATA CM_MCA_POS_DATA;
typedef struct _CM_MCA_POS_DATA *PCM_MCA_POS_DATA;
struct _EISA_MEMORY_TYPE {
UCHAR ReadWrite ;
UCHAR Cached ;
UCHAR Reserved0 ;
UCHAR Type ;
UCHAR Shared ;
UCHAR Reserved1 ;
UCHAR MoreEntries ;
};
typedef struct _EISA_MEMORY_TYPE EISA_MEMORY_TYPE;
typedef struct _EISA_MEMORY_TYPE *PEISA_MEMORY_TYPE;
struct _EISA_MEMORY_CONFIGURATION {
EISA_MEMORY_TYPE ConfigurationByte ;
UCHAR DataSize ;
USHORT AddressLowWord ;
UCHAR AddressHighByte ;
USHORT MemorySize ;
};
typedef struct _EISA_MEMORY_CONFIGURATION EISA_MEMORY_CONFIGURATION;
typedef struct _EISA_MEMORY_CONFIGURATION *PEISA_MEMORY_CONFIGURATION;
struct _EISA_IRQ_DESCRIPTOR {
UCHAR Interrupt ;
UCHAR Reserved ;
UCHAR LevelTriggered ;
UCHAR Shared ;
UCHAR MoreEntries ;
};
typedef struct _EISA_IRQ_DESCRIPTOR EISA_IRQ_DESCRIPTOR;
typedef struct _EISA_IRQ_DESCRIPTOR *PEISA_IRQ_DESCRIPTOR;
struct _EISA_IRQ_CONFIGURATION {
EISA_IRQ_DESCRIPTOR ConfigurationByte ;
UCHAR Reserved ;
};
typedef struct _EISA_IRQ_CONFIGURATION EISA_IRQ_CONFIGURATION;
typedef struct _EISA_IRQ_CONFIGURATION *PEISA_IRQ_CONFIGURATION;
struct _DMA_CONFIGURATION_BYTE0 {
UCHAR Channel ;
UCHAR Reserved ;
UCHAR Shared ;
UCHAR MoreEntries ;
};
typedef struct _DMA_CONFIGURATION_BYTE0 DMA_CONFIGURATION_BYTE0;
struct _DMA_CONFIGURATION_BYTE1 {
UCHAR Reserved0 ;
UCHAR TransferSize ;
UCHAR Timing ;
UCHAR Reserved1 ;
};
typedef struct _DMA_CONFIGURATION_BYTE1 DMA_CONFIGURATION_BYTE1;
struct _EISA_DMA_CONFIGURATION {
DMA_CONFIGURATION_BYTE0 ConfigurationByte0 ;
DMA_CONFIGURATION_BYTE1 ConfigurationByte1 ;
};
typedef struct _EISA_DMA_CONFIGURATION EISA_DMA_CONFIGURATION;
typedef struct _EISA_DMA_CONFIGURATION *PEISA_DMA_CONFIGURATION;
struct _EISA_PORT_DESCRIPTOR {
UCHAR NumberPorts ;
UCHAR Reserved ;
UCHAR Shared ;
UCHAR MoreEntries ;
};
typedef struct _EISA_PORT_DESCRIPTOR EISA_PORT_DESCRIPTOR;
typedef struct _EISA_PORT_DESCRIPTOR *PEISA_PORT_DESCRIPTOR;
struct _EISA_PORT_CONFIGURATION {
EISA_PORT_DESCRIPTOR Configuration ;
USHORT PortAddress ;
};
typedef struct _EISA_PORT_CONFIGURATION EISA_PORT_CONFIGURATION;
typedef struct _EISA_PORT_CONFIGURATION *PEISA_PORT_CONFIGURATION;
struct _CM_EISA_SLOT_INFORMATION {
UCHAR ReturnCode ;
UCHAR ReturnFlags ;
UCHAR MajorRevision ;
UCHAR MinorRevision ;
USHORT Checksum ;
UCHAR NumberFunctions ;
UCHAR FunctionInformation ;
ULONG CompressedId ;
};
typedef struct _CM_EISA_SLOT_INFORMATION CM_EISA_SLOT_INFORMATION;
typedef struct _CM_EISA_SLOT_INFORMATION *PCM_EISA_SLOT_INFORMATION;
struct _CM_EISA_FUNCTION_INFORMATION {
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
};
typedef struct _CM_EISA_FUNCTION_INFORMATION CM_EISA_FUNCTION_INFORMATION;
typedef struct _CM_EISA_FUNCTION_INFORMATION *PCM_EISA_FUNCTION_INFORMATION;
struct _CM_PNP_BIOS_DEVICE_NODE {
USHORT Size ;
UCHAR Node ;
ULONG ProductId ;
UCHAR DeviceType[3] ;
USHORT DeviceAttributes ;
};
typedef struct _CM_PNP_BIOS_DEVICE_NODE CM_PNP_BIOS_DEVICE_NODE;
typedef struct _CM_PNP_BIOS_DEVICE_NODE *PCM_PNP_BIOS_DEVICE_NODE;
struct _CM_PNP_BIOS_INSTALLATION_CHECK {
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
};
typedef struct _CM_PNP_BIOS_INSTALLATION_CHECK CM_PNP_BIOS_INSTALLATION_CHECK;
typedef struct _CM_PNP_BIOS_INSTALLATION_CHECK *PCM_PNP_BIOS_INSTALLATION_CHECK;
struct _CM_SCSI_DEVICE_DATA {
USHORT Version ;
USHORT Revision ;
UCHAR HostIdentifier ;
};
typedef struct _CM_SCSI_DEVICE_DATA CM_SCSI_DEVICE_DATA;
typedef struct _CM_SCSI_DEVICE_DATA *PCM_SCSI_DEVICE_DATA;
struct _CM_VIDEO_DEVICE_DATA {
USHORT Version ;
USHORT Revision ;
ULONG VideoClock ;
};
typedef struct _CM_VIDEO_DEVICE_DATA CM_VIDEO_DEVICE_DATA;
typedef struct _CM_VIDEO_DEVICE_DATA *PCM_VIDEO_DEVICE_DATA;
struct _CM_SONIC_DEVICE_DATA {
USHORT Version ;
USHORT Revision ;
USHORT DataConfigurationRegister ;
UCHAR EthernetAddress[8] ;
};
typedef struct _CM_SONIC_DEVICE_DATA CM_SONIC_DEVICE_DATA;
typedef struct _CM_SONIC_DEVICE_DATA *PCM_SONIC_DEVICE_DATA;
struct _CM_SERIAL_DEVICE_DATA {
USHORT Version ;
USHORT Revision ;
ULONG BaudClock ;
};
typedef struct _CM_SERIAL_DEVICE_DATA CM_SERIAL_DEVICE_DATA;
typedef struct _CM_SERIAL_DEVICE_DATA *PCM_SERIAL_DEVICE_DATA;
struct _CM_MONITOR_DEVICE_DATA {
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
};
typedef struct _CM_MONITOR_DEVICE_DATA CM_MONITOR_DEVICE_DATA;
typedef struct _CM_MONITOR_DEVICE_DATA *PCM_MONITOR_DEVICE_DATA;
struct _CM_FLOPPY_DEVICE_DATA {
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
};
typedef struct _CM_FLOPPY_DEVICE_DATA CM_FLOPPY_DEVICE_DATA;
typedef struct _CM_FLOPPY_DEVICE_DATA *PCM_FLOPPY_DEVICE_DATA;
struct _CM_KEYBOARD_DEVICE_DATA {
USHORT Version ;
USHORT Revision ;
UCHAR Type ;
UCHAR Subtype ;
USHORT KeyboardFlags ;
};
typedef struct _CM_KEYBOARD_DEVICE_DATA CM_KEYBOARD_DEVICE_DATA;
typedef struct _CM_KEYBOARD_DEVICE_DATA *PCM_KEYBOARD_DEVICE_DATA;
struct _CM_DISK_GEOMETRY_DEVICE_DATA {
ULONG BytesPerSector ;
ULONG NumberOfCylinders ;
ULONG SectorsPerTrack ;
ULONG NumberOfHeads ;
};
typedef struct _CM_DISK_GEOMETRY_DEVICE_DATA CM_DISK_GEOMETRY_DEVICE_DATA;
typedef struct _CM_DISK_GEOMETRY_DEVICE_DATA *PCM_DISK_GEOMETRY_DEVICE_DATA;
struct _CM_PCCARD_DEVICE_DATA {
UCHAR Flags ;
UCHAR ErrorCode ;
USHORT Reserved ;
ULONG BusData ;
ULONG DeviceId ;
ULONG LegacyBaseAddress ;
UCHAR IRQMap[16] ;
};
typedef struct _CM_PCCARD_DEVICE_DATA CM_PCCARD_DEVICE_DATA;
typedef struct _CM_PCCARD_DEVICE_DATA *PCM_PCCARD_DEVICE_DATA;
struct __anonstruct_Port_25 {
ULONG Length ;
ULONG Alignment ;
PHYSICAL_ADDRESS MinimumAddress ;
PHYSICAL_ADDRESS MaximumAddress ;
};
struct __anonstruct_Memory_26 {
ULONG Length ;
ULONG Alignment ;
PHYSICAL_ADDRESS MinimumAddress ;
PHYSICAL_ADDRESS MaximumAddress ;
};
struct __anonstruct_Interrupt_27 {
ULONG MinimumVector ;
ULONG MaximumVector ;
};
struct __anonstruct_Dma_28 {
ULONG MinimumChannel ;
ULONG MaximumChannel ;
};
struct __anonstruct_Generic_29 {
ULONG Length ;
ULONG Alignment ;
PHYSICAL_ADDRESS MinimumAddress ;
PHYSICAL_ADDRESS MaximumAddress ;
};
struct __anonstruct_DevicePrivate_30 {
ULONG Data[3] ;
};
struct __anonstruct_BusNumber_31 {
ULONG Length ;
ULONG MinBusNumber ;
ULONG MaxBusNumber ;
ULONG Reserved ;
};
struct __anonstruct_AssignedResource_32 {
PASSIGNED_RESOURCE AssignedResource ;
};
struct __anonstruct_SubAllocateFrom_33 {
UCHAR Type ;
UCHAR Reserved[3] ;
PASSIGNED_RESOURCE AssignedResource ;
PHYSICAL_ADDRESS Transformation ;
};
struct __anonstruct_ConfigData_34 {
ULONG Priority ;
ULONG Reserved1 ;
ULONG Reserved2 ;
};
union __anonunion_u_24 {
struct __anonstruct_Port_25 Port ;
struct __anonstruct_Memory_26 Memory ;
struct __anonstruct_Interrupt_27 Interrupt ;
struct __anonstruct_Dma_28 Dma ;
struct __anonstruct_Generic_29 Generic ;
struct __anonstruct_DevicePrivate_30 DevicePrivate ;
struct __anonstruct_BusNumber_31 BusNumber ;
struct __anonstruct_AssignedResource_32 AssignedResource ;
struct __anonstruct_SubAllocateFrom_33 SubAllocateFrom ;
struct __anonstruct_ConfigData_34 ConfigData ;
};
struct _IO_RESOURCE_DESCRIPTOR {
UCHAR Option ;
UCHAR Type ;
UCHAR ShareDisposition ;
UCHAR Spare1 ;
USHORT Flags ;
USHORT Spare2 ;
union __anonunion_u_24 u ;
};
typedef struct _IO_RESOURCE_DESCRIPTOR IO_RESOURCE_DESCRIPTOR;
typedef struct _IO_RESOURCE_DESCRIPTOR *PIO_RESOURCE_DESCRIPTOR;
struct _IO_RESOURCE_LIST {
USHORT Version ;
USHORT Revision ;
ULONG Count ;
IO_RESOURCE_DESCRIPTOR Descriptors[1] ;
};
typedef struct _IO_RESOURCE_LIST IO_RESOURCE_LIST;
typedef struct _IO_RESOURCE_LIST *PIO_RESOURCE_LIST;
struct _IO_RESOURCE_REQUIREMENTS_LIST {
ULONG ListSize ;
INTERFACE_TYPE InterfaceType ;
ULONG BusNumber ;
ULONG SlotNumber ;
ULONG Reserved[3] ;
ULONG AlternativeLists ;
IO_RESOURCE_LIST List[1] ;
};
typedef struct _IO_RESOURCE_REQUIREMENTS_LIST IO_RESOURCE_REQUIREMENTS_LIST;
typedef struct _IO_RESOURCE_REQUIREMENTS_LIST *PIO_RESOURCE_REQUIREMENTS_LIST;
struct _EXCEPTION_RECORD {
NTSTATUS ExceptionCode ;
ULONG ExceptionFlags ;
struct _EXCEPTION_RECORD *ExceptionRecord ;
PVOID ExceptionAddress ;
ULONG NumberParameters ;
ULONG_PTR ExceptionInformation[15] ;
};
typedef struct _EXCEPTION_RECORD EXCEPTION_RECORD;
typedef EXCEPTION_RECORD *PEXCEPTION_RECORD;
struct _EXCEPTION_RECORD32 {
NTSTATUS ExceptionCode ;
ULONG ExceptionFlags ;
ULONG ExceptionRecord ;
ULONG ExceptionAddress ;
ULONG NumberParameters ;
ULONG ExceptionInformation[15] ;
};
typedef struct _EXCEPTION_RECORD32 EXCEPTION_RECORD32;
typedef struct _EXCEPTION_RECORD32 *PEXCEPTION_RECORD32;
struct _EXCEPTION_RECORD64 {
NTSTATUS ExceptionCode ;
ULONG ExceptionFlags ;
ULONG64 ExceptionRecord ;
ULONG64 ExceptionAddress ;
ULONG NumberParameters ;
ULONG __unusedAlignment ;
ULONG64 ExceptionInformation[15] ;
};
typedef struct _EXCEPTION_RECORD64 EXCEPTION_RECORD64;
typedef struct _EXCEPTION_RECORD64 *PEXCEPTION_RECORD64;
struct _EXCEPTION_POINTERS {
PEXCEPTION_RECORD ExceptionRecord ;
PCONTEXT ContextRecord ;
};
typedef struct _EXCEPTION_POINTERS EXCEPTION_POINTERS;
typedef struct _EXCEPTION_POINTERS *PEXCEPTION_POINTERS;
typedef enum _CONFIGURATION_TYPE CONFIGURATION_TYPE;
typedef enum _CONFIGURATION_TYPE *PCONFIGURATION_TYPE;
typedef enum _KINTERRUPT_MODE KINTERRUPT_MODE;
typedef enum _KWAIT_REASON KWAIT_REASON;
struct _DISPATCHER_HEADER {
UCHAR Type ;
UCHAR Absolute ;
UCHAR Size ;
UCHAR Inserted ;
LONG SignalState ;
LIST_ENTRY WaitListHead ;
};
typedef struct _DISPATCHER_HEADER DISPATCHER_HEADER;
struct _KWAIT_BLOCK {
LIST_ENTRY WaitListEntry ;
struct _KTHREAD *Thread ;
PVOID Object ;
struct _KWAIT_BLOCK *NextWaitBlock ;
USHORT WaitKey ;
USHORT WaitType ;
};
typedef struct _KWAIT_BLOCK KWAIT_BLOCK;
typedef struct _KWAIT_BLOCK *PKWAIT_BLOCK;
typedef struct _KWAIT_BLOCK *PRKWAIT_BLOCK;
typedef void (*PKSTART_ROUTINE)(PVOID StartContext );
struct _KDEVICE_QUEUE {
CSHORT Type ;
CSHORT Size ;
LIST_ENTRY DeviceListHead ;
KSPIN_LOCK Lock ;
BOOLEAN Busy ;
};
typedef struct _KDEVICE_QUEUE KDEVICE_QUEUE;
typedef struct _KDEVICE_QUEUE *PKDEVICE_QUEUE;
typedef struct _KDEVICE_QUEUE *PRKDEVICE_QUEUE;
struct _KDEVICE_QUEUE_ENTRY {
LIST_ENTRY DeviceListEntry ;
ULONG SortKey ;
BOOLEAN Inserted ;
};
typedef struct _KDEVICE_QUEUE_ENTRY KDEVICE_QUEUE_ENTRY;
typedef struct _KDEVICE_QUEUE_ENTRY *PKDEVICE_QUEUE_ENTRY;
typedef struct _KDEVICE_QUEUE_ENTRY *PRKDEVICE_QUEUE_ENTRY;
struct _KEVENT {
DISPATCHER_HEADER Header ;
};
typedef struct _KEVENT KEVENT;
typedef struct _KEVENT *PKEVENT;
typedef struct _KEVENT *PRKEVENT;
typedef BOOLEAN (*PKSERVICE_ROUTINE)(struct _KINTERRUPT *Interrupt , PVOID ServiceContext );
struct _KMUTANT {
DISPATCHER_HEADER Header ;
LIST_ENTRY MutantListEntry ;
struct _KTHREAD *OwnerThread ;
BOOLEAN Abandoned ;
UCHAR ApcDisable ;
};
typedef struct _KMUTANT KMUTANT;
typedef struct _KMUTANT *PKMUTANT;
typedef struct _KMUTANT *PRKMUTANT;
typedef struct _KMUTANT KMUTEX;
typedef struct _KMUTANT *PKMUTEX;
typedef struct _KMUTANT *PRKMUTEX;
struct _KSEMAPHORE {
DISPATCHER_HEADER Header ;
LONG Limit ;
};
typedef struct _KSEMAPHORE KSEMAPHORE;
typedef struct _KSEMAPHORE *PKSEMAPHORE;
typedef struct _KSEMAPHORE *PRKSEMAPHORE;
struct _KTIMER {
DISPATCHER_HEADER Header ;
ULARGE_INTEGER DueTime ;
LIST_ENTRY TimerListEntry ;
struct _KDPC *Dpc ;
LONG Period ;
};
typedef struct _KTIMER KTIMER;
typedef struct _KTIMER *PKTIMER;
typedef struct _KTIMER *PRKTIMER;
typedef enum _KBUGCHECK_BUFFER_DUMP_STATE KBUGCHECK_BUFFER_DUMP_STATE;
typedef void (*PKBUGCHECK_CALLBACK_ROUTINE)(PVOID Buffer , ULONG Length );
struct _KBUGCHECK_CALLBACK_RECORD {
LIST_ENTRY Entry ;
void (*CallbackRoutine)(PVOID Buffer , ULONG Length ) ;
PVOID Buffer ;
ULONG Length ;
PUCHAR Component ;
ULONG_PTR Checksum ;
UCHAR State ;
};
typedef struct _KBUGCHECK_CALLBACK_RECORD KBUGCHECK_CALLBACK_RECORD;
typedef struct _KBUGCHECK_CALLBACK_RECORD *PKBUGCHECK_CALLBACK_RECORD;
typedef void (*PSWAP_CONTEXT_NOTIFY_ROUTINE)(HANDLE OldThreadId , HANDLE NewThreadId );
typedef LOGICAL (*PTHREAD_SELECT_NOTIFY_ROUTINE)(HANDLE ThreadId );
typedef void (*PTIME_UPDATE_NOTIFY_ROUTINE)(HANDLE ThreadId , KPROCESSOR_MODE Mode );
typedef enum _MEMORY_CACHING_TYPE_ORIG MEMORY_CACHING_TYPE_ORIG;
typedef enum _MEMORY_CACHING_TYPE MEMORY_CACHING_TYPE;
typedef struct _DBGKD_DEBUG_DATA_HEADER64 *PDBGKD_DEBUG_DATA_HEADER64;
typedef enum _POOL_TYPE POOL_TYPE;
typedef enum _EX_POOL_PRIORITY EX_POOL_PRIORITY;
struct _FAST_MUTEX {
LONG Count ;
PKTHREAD Owner ;
ULONG Contention ;
KEVENT Event ;
ULONG OldIrql ;
};
typedef struct _FAST_MUTEX FAST_MUTEX;
typedef struct _FAST_MUTEX *PFAST_MUTEX;
typedef PVOID (*PALLOCATE_FUNCTION)(POOL_TYPE PoolType , SIZE_T NumberOfBytes , ULONG Tag );
typedef void (*PFREE_FUNCTION)(PVOID Buffer );
union __anonunion____missing_field_name_35 {
ULONG AllocateMisses ;
ULONG AllocateHits ;
};
union __anonunion____missing_field_name_36 {
ULONG FreeMisses ;
ULONG FreeHits ;
};
union __anonunion____missing_field_name_37 {
ULONG LastAllocateMisses ;
ULONG LastAllocateHits ;
};
struct _GENERAL_LOOKASIDE {
SLIST_HEADER ListHead ;
USHORT Depth ;
USHORT MaximumDepth ;
ULONG TotalAllocates ;
union __anonunion____missing_field_name_35 __annonCompField7 ;
ULONG TotalFrees ;
union __anonunion____missing_field_name_36 __annonCompField8 ;
POOL_TYPE Type ;
ULONG Tag ;
ULONG Size ;
PVOID (*Allocate)(POOL_TYPE PoolType , SIZE_T NumberOfBytes , ULONG Tag ) ;
void (*Free)(PVOID Buffer ) ;
LIST_ENTRY ListEntry ;
ULONG LastTotalAllocates ;
union __anonunion____missing_field_name_37 __annonCompField9 ;
ULONG Future[2] ;
};
typedef struct _GENERAL_LOOKASIDE GENERAL_LOOKASIDE;
typedef struct _GENERAL_LOOKASIDE *PGENERAL_LOOKASIDE;
struct _NPAGED_LOOKASIDE_LIST {
GENERAL_LOOKASIDE L ;
KSPIN_LOCK Lock ;
};
typedef struct _NPAGED_LOOKASIDE_LIST NPAGED_LOOKASIDE_LIST;
typedef struct _NPAGED_LOOKASIDE_LIST *PNPAGED_LOOKASIDE_LIST;
struct _PAGED_LOOKASIDE_LIST {
GENERAL_LOOKASIDE L ;
FAST_MUTEX Lock ;
};
typedef struct _PAGED_LOOKASIDE_LIST PAGED_LOOKASIDE_LIST;
typedef struct _PAGED_LOOKASIDE_LIST *PPAGED_LOOKASIDE_LIST;
typedef enum _WORK_QUEUE_TYPE WORK_QUEUE_TYPE;
typedef void (*PWORKER_THREAD_ROUTINE)(PVOID Parameter );
struct _WORK_QUEUE_ITEM {
LIST_ENTRY List ;
void (*WorkerRoutine)(PVOID Parameter ) ;
PVOID Parameter ;
};
typedef struct _WORK_QUEUE_ITEM WORK_QUEUE_ITEM;
typedef struct _WORK_QUEUE_ITEM *PWORK_QUEUE_ITEM;
struct _ZONE_SEGMENT_HEADER {
SINGLE_LIST_ENTRY SegmentList ;
PVOID Reserved ;
};
typedef struct _ZONE_SEGMENT_HEADER ZONE_SEGMENT_HEADER;
typedef struct _ZONE_SEGMENT_HEADER *PZONE_SEGMENT_HEADER;
struct _ZONE_HEADER {
SINGLE_LIST_ENTRY FreeList ;
SINGLE_LIST_ENTRY SegmentList ;
ULONG BlockSize ;
ULONG TotalSegmentSize ;
};
typedef struct _ZONE_HEADER ZONE_HEADER;
typedef struct _ZONE_HEADER *PZONE_HEADER;
typedef ULONG_PTR ERESOURCE_THREAD;
typedef ERESOURCE_THREAD *PERESOURCE_THREAD;
union __anonunion____missing_field_name_38 {
LONG OwnerCount ;
ULONG TableSize ;
};
struct _OWNER_ENTRY {
ERESOURCE_THREAD OwnerThread ;
union __anonunion____missing_field_name_38 __annonCompField10 ;
};
typedef struct _OWNER_ENTRY OWNER_ENTRY;
typedef struct _OWNER_ENTRY *POWNER_ENTRY;
union __anonunion____missing_field_name_39 {
PVOID Address ;
ULONG_PTR CreatorBackTraceIndex ;
};
struct _ERESOURCE {
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
union __anonunion____missing_field_name_39 __annonCompField11 ;
KSPIN_LOCK SpinLock ;
};
typedef struct _ERESOURCE ERESOURCE;
typedef struct _ERESOURCE *PERESOURCE;
struct _RESOURCE_HASH_ENTRY {
LIST_ENTRY ListEntry ;
PVOID Address ;
ULONG ContentionCount ;
ULONG Number ;
};
typedef struct _RESOURCE_HASH_ENTRY RESOURCE_HASH_ENTRY;
typedef struct _RESOURCE_HASH_ENTRY *PRESOURCE_HASH_ENTRY;
struct _RESOURCE_PERFORMANCE_DATA {
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
};
typedef struct _RESOURCE_PERFORMANCE_DATA RESOURCE_PERFORMANCE_DATA;
typedef struct _RESOURCE_PERFORMANCE_DATA *PRESOURCE_PERFORMANCE_DATA;
typedef void (*PCALLBACK_FUNCTION)(PVOID CallbackContext , PVOID Argument1 , PVOID Argument2 );
typedef GUID UUID;
typedef enum _MM_SYSTEM_SIZE MM_SYSTEMSIZE;
typedef enum _LOCK_OPERATION LOCK_OPERATION;
typedef enum _MM_PAGE_PRIORITY MM_PAGE_PRIORITY;
struct _PHYSICAL_MEMORY_RANGE {
PHYSICAL_ADDRESS BaseAddress ;
LARGE_INTEGER NumberOfBytes ;
};
typedef struct _PHYSICAL_MEMORY_RANGE PHYSICAL_MEMORY_RANGE;
typedef struct _PHYSICAL_MEMORY_RANGE *PPHYSICAL_MEMORY_RANGE;
typedef NTSTATUS (*PMM_DLL_INITIALIZE)(PUNICODE_STRING RegistryPath );
typedef NTSTATUS (*PMM_DLL_UNLOAD)(void);
typedef enum _SECURITY_OPERATION_CODE SECURITY_OPERATION_CODE;
typedef enum _SECURITY_OPERATION_CODE *PSECURITY_OPERATION_CODE;
struct _SECURITY_SUBJECT_CONTEXT {
PACCESS_TOKEN ClientToken ;
SECURITY_IMPERSONATION_LEVEL ImpersonationLevel ;
PACCESS_TOKEN PrimaryToken ;
PVOID ProcessAuditId ;
};
typedef struct _SECURITY_SUBJECT_CONTEXT SECURITY_SUBJECT_CONTEXT;
typedef struct _SECURITY_SUBJECT_CONTEXT *PSECURITY_SUBJECT_CONTEXT;
struct _INITIAL_PRIVILEGE_SET {
ULONG PrivilegeCount ;
ULONG Control ;
LUID_AND_ATTRIBUTES Privilege[3] ;
};
typedef struct _INITIAL_PRIVILEGE_SET INITIAL_PRIVILEGE_SET;
typedef struct _INITIAL_PRIVILEGE_SET *PINITIAL_PRIVILEGE_SET;
union __anonunion_Privileges_40 {
INITIAL_PRIVILEGE_SET InitialPrivilegeSet ;
PRIVILEGE_SET PrivilegeSet ;
};
struct _ACCESS_STATE {
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
union __anonunion_Privileges_40 Privileges ;
BOOLEAN AuditPrivileges ;
UNICODE_STRING ObjectName ;
UNICODE_STRING ObjectTypeName ;
};
typedef struct _ACCESS_STATE ACCESS_STATE;
typedef struct _ACCESS_STATE *PACCESS_STATE;
typedef void (*PCREATE_PROCESS_NOTIFY_ROUTINE)(HANDLE ParentId , HANDLE ProcessId , BOOLEAN Create );
typedef void (*PCREATE_THREAD_NOTIFY_ROUTINE)(HANDLE ProcessId , HANDLE ThreadId , BOOLEAN Create );
struct __anonstruct____missing_field_name_42 {
ULONG ImageAddressingMode : 8 ;
ULONG SystemModeImage ;
ULONG ImageMappedToAllPids ;
ULONG Reserved : 22 ;
};
union __anonunion____missing_field_name_41 {
ULONG Properties ;
struct __anonstruct____missing_field_name_42 __annonCompField12 ;
};
struct _IMAGE_INFO {
union __anonunion____missing_field_name_41 __annonCompField13 ;
PVOID ImageBase ;
ULONG ImageSelector ;
SIZE_T ImageSize ;
ULONG ImageSectionNumber ;
};
typedef struct _IMAGE_INFO IMAGE_INFO;
typedef struct _IMAGE_INFO *PIMAGE_INFO;
typedef void (*PLOAD_IMAGE_NOTIFY_ROUTINE)(PUNICODE_STRING FullImageName , HANDLE ProcessId , PIMAGE_INFO ImageInfo );
typedef NTSTATUS (*PIO_QUERY_DEVICE_ROUTINE)(PVOID Context , PUNICODE_STRING PathName , INTERFACE_TYPE BusType , ULONG BusNumber , PKEY_VALUE_FULL_INFORMATION *BusInformation , CONFIGURATION_TYPE ControllerType , ULONG ControllerNumber , PKEY_VALUE_FULL_INFORMATION *ControllerInformation , CONFIGURATION_TYPE PeripheralType , ULONG PeripheralNumber , PKEY_VALUE_FULL_INFORMATION *PeripheralInformation );
typedef enum _IO_QUERY_DEVICE_DATA_FORMAT IO_QUERY_DEVICE_DATA_FORMAT;
typedef enum _IO_QUERY_DEVICE_DATA_FORMAT *PIO_QUERY_DEVICE_DATA_FORMAT;
typedef enum _CREATE_FILE_TYPE CREATE_FILE_TYPE;
typedef void (*PIO_DPC_ROUTINE)(PKDPC Dpc , struct _DEVICE_OBJECT *DeviceObject , struct _IRP *Irp , PVOID Context );
typedef void (*PIO_TIMER_ROUTINE)(struct _DEVICE_OBJECT *DeviceObject , PVOID Context );
typedef NTSTATUS (*PDRIVER_INITIALIZE)(struct _DRIVER_OBJECT *DriverObject , PUNICODE_STRING RegistryPath );
typedef void (*PDRIVER_REINITIALIZE)(struct _DRIVER_OBJECT *DriverObject , PVOID Context , ULONG Count );
typedef void (*PDRIVER_CANCEL)(struct _DEVICE_OBJECT *DeviceObject , struct _IRP *Irp );
typedef NTSTATUS (*PDRIVER_DISPATCH)(struct _DEVICE_OBJECT *DeviceObject , struct _IRP *Irp );
typedef void (*PDRIVER_STARTIO)(struct _DEVICE_OBJECT *DeviceObject , struct _IRP *Irp );
typedef void (*PDRIVER_UNLOAD)(struct _DRIVER_OBJECT *DriverObject );
typedef NTSTATUS (*PDRIVER_ADD_DEVICE)(struct _DRIVER_OBJECT *DriverObject , struct _DEVICE_OBJECT *PhysicalDeviceObject );
typedef BOOLEAN (*PFAST_IO_CHECK_IF_POSSIBLE)(struct _FILE_OBJECT *FileObject , PLARGE_INTEGER FileOffset , ULONG Length , BOOLEAN Wait , ULONG LockKey , BOOLEAN CheckForReadOperation , PIO_STATUS_BLOCK IoStatus , struct _DEVICE_OBJECT *DeviceObject );
typedef BOOLEAN (*PFAST_IO_READ)(struct _FILE_OBJECT *FileObject , PLARGE_INTEGER FileOffset , ULONG Length , BOOLEAN Wait , ULONG LockKey , PVOID Buffer , PIO_STATUS_BLOCK IoStatus , struct _DEVICE_OBJECT *DeviceObject );
typedef BOOLEAN (*PFAST_IO_WRITE)(struct _FILE_OBJECT *FileObject , PLARGE_INTEGER FileOffset , ULONG Length , BOOLEAN Wait , ULONG LockKey , PVOID Buffer , PIO_STATUS_BLOCK IoStatus , struct _DEVICE_OBJECT *DeviceObject );
typedef BOOLEAN (*PFAST_IO_QUERY_BASIC_INFO)(struct _FILE_OBJECT *FileObject , BOOLEAN Wait , PFILE_BASIC_INFORMATION Buffer , PIO_STATUS_BLOCK IoStatus , struct _DEVICE_OBJECT *DeviceObject );
typedef BOOLEAN (*PFAST_IO_QUERY_STANDARD_INFO)(struct _FILE_OBJECT *FileObject , BOOLEAN Wait , PFILE_STANDARD_INFORMATION Buffer , PIO_STATUS_BLOCK IoStatus , struct _DEVICE_OBJECT *DeviceObject );
typedef BOOLEAN (*PFAST_IO_LOCK)(struct _FILE_OBJECT *FileObject , PLARGE_INTEGER FileOffset , PLARGE_INTEGER Length , PEPROCESS ProcessId , ULONG Key , BOOLEAN FailImmediately , BOOLEAN ExclusiveLock , PIO_STATUS_BLOCK IoStatus , struct _DEVICE_OBJECT *DeviceObject );
typedef BOOLEAN (*PFAST_IO_UNLOCK_SINGLE)(struct _FILE_OBJECT *FileObject , PLARGE_INTEGER FileOffset , PLARGE_INTEGER Length , PEPROCESS ProcessId , ULONG Key , PIO_STATUS_BLOCK IoStatus , struct _DEVICE_OBJECT *DeviceObject );
typedef BOOLEAN (*PFAST_IO_UNLOCK_ALL)(struct _FILE_OBJECT *FileObject , PEPROCESS ProcessId , PIO_STATUS_BLOCK IoStatus , struct _DEVICE_OBJECT *DeviceObject );
typedef BOOLEAN (*PFAST_IO_UNLOCK_ALL_BY_KEY)(struct _FILE_OBJECT *FileObject , PVOID ProcessId , ULONG Key , PIO_STATUS_BLOCK IoStatus , struct _DEVICE_OBJECT *DeviceObject );
typedef BOOLEAN (*PFAST_IO_DEVICE_CONTROL)(struct _FILE_OBJECT *FileObject , BOOLEAN Wait , PVOID InputBuffer , ULONG InputBufferLength , PVOID OutputBuffer , ULONG OutputBufferLength , ULONG IoControlCode , PIO_STATUS_BLOCK IoStatus , struct _DEVICE_OBJECT *DeviceObject );
typedef void (*PFAST_IO_ACQUIRE_FILE)(struct _FILE_OBJECT *FileObject );
typedef void (*PFAST_IO_RELEASE_FILE)(struct _FILE_OBJECT *FileObject );
typedef void (*PFAST_IO_DETACH_DEVICE)(struct _DEVICE_OBJECT *SourceDevice , struct _DEVICE_OBJECT *TargetDevice );
typedef BOOLEAN (*PFAST_IO_QUERY_NETWORK_OPEN_INFO)(struct _FILE_OBJECT *FileObject , BOOLEAN Wait , struct _FILE_NETWORK_OPEN_INFORMATION *Buffer , struct _IO_STATUS_BLOCK *IoStatus , struct _DEVICE_OBJECT *DeviceObject );
typedef BOOLEAN (*PFAST_IO_MDL_READ)(struct _FILE_OBJECT *FileObject , PLARGE_INTEGER FileOffset , ULONG Length , ULONG LockKey , PMDL *MdlChain , PIO_STATUS_BLOCK IoStatus , struct _DEVICE_OBJECT *DeviceObject );
typedef BOOLEAN (*PFAST_IO_MDL_READ_COMPLETE)(struct _FILE_OBJECT *FileObject , PMDL MdlChain , struct _DEVICE_OBJECT *DeviceObject );
typedef BOOLEAN (*PFAST_IO_PREPARE_MDL_WRITE)(struct _FILE_OBJECT *FileObject , PLARGE_INTEGER FileOffset , ULONG Length , ULONG LockKey , PMDL *MdlChain , PIO_STATUS_BLOCK IoStatus , struct _DEVICE_OBJECT *DeviceObject );
typedef BOOLEAN (*PFAST_IO_MDL_WRITE_COMPLETE)(struct _FILE_OBJECT *FileObject , PLARGE_INTEGER FileOffset , PMDL MdlChain , struct _DEVICE_OBJECT *DeviceObject );
typedef NTSTATUS (*PFAST_IO_ACQUIRE_FOR_MOD_WRITE)(struct _FILE_OBJECT *FileObject , PLARGE_INTEGER EndingOffset , struct _ERESOURCE **ResourceToRelease , struct _DEVICE_OBJECT *DeviceObject );
typedef NTSTATUS (*PFAST_IO_RELEASE_FOR_MOD_WRITE)(struct _FILE_OBJECT *FileObject , struct _ERESOURCE *ResourceToRelease , struct _DEVICE_OBJECT *DeviceObject );
typedef NTSTATUS (*PFAST_IO_ACQUIRE_FOR_CCFLUSH)(struct _FILE_OBJECT *FileObject , struct _DEVICE_OBJECT *DeviceObject );
typedef NTSTATUS (*PFAST_IO_RELEASE_FOR_CCFLUSH)(struct _FILE_OBJECT *FileObject , struct _DEVICE_OBJECT *DeviceObject );
typedef BOOLEAN (*PFAST_IO_READ_COMPRESSED)(struct _FILE_OBJECT *FileObject , PLARGE_INTEGER FileOffset , ULONG Length , ULONG LockKey , PVOID Buffer , PMDL *MdlChain , PIO_STATUS_BLOCK IoStatus , struct _COMPRESSED_DATA_INFO *CompressedDataInfo , ULONG CompressedDataInfoLength , struct _DEVICE_OBJECT *DeviceObject );
typedef BOOLEAN (*PFAST_IO_WRITE_COMPRESSED)(struct _FILE_OBJECT *FileObject , PLARGE_INTEGER FileOffset , ULONG Length , ULONG LockKey , PVOID Buffer , PMDL *MdlChain , PIO_STATUS_BLOCK IoStatus , struct _COMPRESSED_DATA_INFO *CompressedDataInfo , ULONG CompressedDataInfoLength , struct _DEVICE_OBJECT *DeviceObject );
typedef BOOLEAN (*PFAST_IO_MDL_READ_COMPLETE_COMPRESSED)(struct _FILE_OBJECT *FileObject , PMDL MdlChain , struct _DEVICE_OBJECT *DeviceObject );
typedef BOOLEAN (*PFAST_IO_MDL_WRITE_COMPLETE_COMPRESSED)(struct _FILE_OBJECT *FileObject , PLARGE_INTEGER FileOffset , PMDL MdlChain , struct _DEVICE_OBJECT *DeviceObject );
typedef BOOLEAN (*PFAST_IO_QUERY_OPEN)(struct _IRP *Irp , PFILE_NETWORK_OPEN_INFORMATION NetworkInformation , struct _DEVICE_OBJECT *DeviceObject );
struct _FAST_IO_DISPATCH {
ULONG SizeOfFastIoDispatch ;
BOOLEAN (*FastIoCheckIfPossible)(struct _FILE_OBJECT *FileObject , PLARGE_INTEGER FileOffset , ULONG Length , BOOLEAN Wait , ULONG LockKey , BOOLEAN CheckForReadOperation , PIO_STATUS_BLOCK IoStatus , struct _DEVICE_OBJECT *DeviceObject ) ;
BOOLEAN (*FastIoRead)(struct _FILE_OBJECT *FileObject , PLARGE_INTEGER FileOffset , ULONG Length , BOOLEAN Wait , ULONG LockKey , PVOID Buffer , PIO_STATUS_BLOCK IoStatus , struct _DEVICE_OBJECT *DeviceObject ) ;
BOOLEAN (*FastIoWrite)(struct _FILE_OBJECT *FileObject , PLARGE_INTEGER FileOffset , ULONG Length , BOOLEAN Wait , ULONG LockKey , PVOID Buffer , PIO_STATUS_BLOCK IoStatus , struct _DEVICE_OBJECT *DeviceObject ) ;
BOOLEAN (*FastIoQueryBasicInfo)(struct _FILE_OBJECT *FileObject , BOOLEAN Wait , PFILE_BASIC_INFORMATION Buffer , PIO_STATUS_BLOCK IoStatus , struct _DEVICE_OBJECT *DeviceObject ) ;
BOOLEAN (*FastIoQueryStandardInfo)(struct _FILE_OBJECT *FileObject , BOOLEAN Wait , PFILE_STANDARD_INFORMATION Buffer , PIO_STATUS_BLOCK IoStatus , struct _DEVICE_OBJECT *DeviceObject ) ;
BOOLEAN (*FastIoLock)(struct _FILE_OBJECT *FileObject , PLARGE_INTEGER FileOffset , PLARGE_INTEGER Length , PEPROCESS ProcessId , ULONG Key , BOOLEAN FailImmediately , BOOLEAN ExclusiveLock , PIO_STATUS_BLOCK IoStatus , struct _DEVICE_OBJECT *DeviceObject ) ;
BOOLEAN (*FastIoUnlockSingle)(struct _FILE_OBJECT *FileObject , PLARGE_INTEGER FileOffset , PLARGE_INTEGER Length , PEPROCESS ProcessId , ULONG Key , PIO_STATUS_BLOCK IoStatus , struct _DEVICE_OBJECT *DeviceObject ) ;
BOOLEAN (*FastIoUnlockAll)(struct _FILE_OBJECT *FileObject , PEPROCESS ProcessId , PIO_STATUS_BLOCK IoStatus , struct _DEVICE_OBJECT *DeviceObject ) ;
BOOLEAN (*FastIoUnlockAllByKey)(struct _FILE_OBJECT *FileObject , PVOID ProcessId , ULONG Key , PIO_STATUS_BLOCK IoStatus , struct _DEVICE_OBJECT *DeviceObject ) ;
BOOLEAN (*FastIoDeviceControl)(struct _FILE_OBJECT *FileObject , BOOLEAN Wait , PVOID InputBuffer , ULONG InputBufferLength , PVOID OutputBuffer , ULONG OutputBufferLength , ULONG IoControlCode , PIO_STATUS_BLOCK IoStatus , struct _DEVICE_OBJECT *DeviceObject ) ;
void (*AcquireFileForNtCreateSection)(struct _FILE_OBJECT *FileObject ) ;
void (*ReleaseFileForNtCreateSection)(struct _FILE_OBJECT *FileObject ) ;
void (*FastIoDetachDevice)(struct _DEVICE_OBJECT *SourceDevice , struct _DEVICE_OBJECT *TargetDevice ) ;
BOOLEAN (*FastIoQueryNetworkOpenInfo)(struct _FILE_OBJECT *FileObject , BOOLEAN Wait , struct _FILE_NETWORK_OPEN_INFORMATION *Buffer , struct _IO_STATUS_BLOCK *IoStatus , struct _DEVICE_OBJECT *DeviceObject ) ;
NTSTATUS (*AcquireForModWrite)(struct _FILE_OBJECT *FileObject , PLARGE_INTEGER EndingOffset , struct _ERESOURCE **ResourceToRelease , struct _DEVICE_OBJECT *DeviceObject ) ;
BOOLEAN (*MdlRead)(struct _FILE_OBJECT *FileObject , PLARGE_INTEGER FileOffset , ULONG Length , ULONG LockKey , PMDL *MdlChain , PIO_STATUS_BLOCK IoStatus , struct _DEVICE_OBJECT *DeviceObject ) ;
BOOLEAN (*MdlReadComplete)(struct _FILE_OBJECT *FileObject , PMDL MdlChain , struct _DEVICE_OBJECT *DeviceObject ) ;
BOOLEAN (*PrepareMdlWrite)(struct _FILE_OBJECT *FileObject , PLARGE_INTEGER FileOffset , ULONG Length , ULONG LockKey , PMDL *MdlChain , PIO_STATUS_BLOCK IoStatus , struct _DEVICE_OBJECT *DeviceObject ) ;
BOOLEAN (*MdlWriteComplete)(struct _FILE_OBJECT *FileObject , PLARGE_INTEGER FileOffset , PMDL MdlChain , struct _DEVICE_OBJECT *DeviceObject ) ;
BOOLEAN (*FastIoReadCompressed)(struct _FILE_OBJECT *FileObject , PLARGE_INTEGER FileOffset , ULONG Length , ULONG LockKey , PVOID Buffer , PMDL *MdlChain , PIO_STATUS_BLOCK IoStatus , struct _COMPRESSED_DATA_INFO *CompressedDataInfo , ULONG CompressedDataInfoLength , struct _DEVICE_OBJECT *DeviceObject ) ;
BOOLEAN (*FastIoWriteCompressed)(struct _FILE_OBJECT *FileObject , PLARGE_INTEGER FileOffset , ULONG Length , ULONG LockKey , PVOID Buffer , PMDL *MdlChain , PIO_STATUS_BLOCK IoStatus , struct _COMPRESSED_DATA_INFO *CompressedDataInfo , ULONG CompressedDataInfoLength , struct _DEVICE_OBJECT *DeviceObject ) ;
BOOLEAN (*MdlReadCompleteCompressed)(struct _FILE_OBJECT *FileObject , PMDL MdlChain , struct _DEVICE_OBJECT *DeviceObject ) ;
BOOLEAN (*MdlWriteCompleteCompressed)(struct _FILE_OBJECT *FileObject , PLARGE_INTEGER FileOffset , PMDL MdlChain , struct _DEVICE_OBJECT *DeviceObject ) ;
BOOLEAN (*FastIoQueryOpen)(struct _IRP *Irp , PFILE_NETWORK_OPEN_INFORMATION NetworkInformation , struct _DEVICE_OBJECT *DeviceObject ) ;
NTSTATUS (*ReleaseForModWrite)(struct _FILE_OBJECT *FileObject , struct _ERESOURCE *ResourceToRelease , struct _DEVICE_OBJECT *DeviceObject ) ;
NTSTATUS (*AcquireForCcFlush)(struct _FILE_OBJECT *FileObject , struct _DEVICE_OBJECT *DeviceObject ) ;
NTSTATUS (*ReleaseForCcFlush)(struct _FILE_OBJECT *FileObject , struct _DEVICE_OBJECT *DeviceObject ) ;
};
typedef struct _FAST_IO_DISPATCH FAST_IO_DISPATCH;
typedef struct _FAST_IO_DISPATCH *PFAST_IO_DISPATCH;
typedef enum _IO_ALLOCATION_ACTION IO_ALLOCATION_ACTION;
typedef enum _IO_ALLOCATION_ACTION *PIO_ALLOCATION_ACTION;
typedef IO_ALLOCATION_ACTION (*PDRIVER_CONTROL)(struct _DEVICE_OBJECT *DeviceObject , struct _IRP *Irp , PVOID MapRegisterBase , PVOID Context );
struct _IO_SECURITY_CONTEXT {
PSECURITY_QUALITY_OF_SERVICE SecurityQos ;
PACCESS_STATE AccessState ;
ACCESS_MASK DesiredAccess ;
ULONG FullCreateOptions ;
};
typedef struct _IO_SECURITY_CONTEXT IO_SECURITY_CONTEXT;
typedef struct _IO_SECURITY_CONTEXT *PIO_SECURITY_CONTEXT;
struct _VPB {
CSHORT Type ;
CSHORT Size ;
USHORT Flags ;
USHORT VolumeLabelLength ;
struct _DEVICE_OBJECT *DeviceObject ;
struct _DEVICE_OBJECT *RealDevice ;
ULONG SerialNumber ;
ULONG ReferenceCount ;
WCHAR VolumeLabel[(32U * sizeof(WCHAR )) / sizeof(WCHAR )] ;
};
typedef struct _VPB VPB;
typedef struct _VPB *PVPB;
typedef struct _ADAPTER_OBJECT *PADAPTER_OBJECT;
struct _WAIT_CONTEXT_BLOCK {
KDEVICE_QUEUE_ENTRY WaitQueueEntry ;
IO_ALLOCATION_ACTION (*DeviceRoutine)(struct _DEVICE_OBJECT *DeviceObject , struct _IRP *Irp , PVOID MapRegisterBase , PVOID Context ) ;
PVOID DeviceContext ;
ULONG NumberOfMapRegisters ;
PVOID DeviceObject ;
PVOID CurrentIrp ;
PKDPC BufferChainingDpc ;
};
typedef struct _WAIT_CONTEXT_BLOCK WAIT_CONTEXT_BLOCK;
typedef struct _WAIT_CONTEXT_BLOCK *PWAIT_CONTEXT_BLOCK;
struct _CONTROLLER_OBJECT {
CSHORT Type ;
CSHORT Size ;
PVOID ControllerExtension ;
KDEVICE_QUEUE DeviceWaitQueue ;
ULONG Spare1 ;
LARGE_INTEGER Spare2 ;
};
typedef struct _CONTROLLER_OBJECT CONTROLLER_OBJECT;
typedef struct _CONTROLLER_OBJECT *PCONTROLLER_OBJECT;
union __anonunion_Queue_43 {
LIST_ENTRY ListEntry ;
WAIT_CONTEXT_BLOCK Wcb ;
};
struct _DEVICE_OBJECT {
CSHORT Type ;
USHORT Size ;
LONG ReferenceCount ;
struct _DRIVER_OBJECT *DriverObject ;
struct _DEVICE_OBJECT *NextDevice ;
struct _DEVICE_OBJECT *AttachedDevice ;
struct _IRP *CurrentIrp ;
PIO_TIMER Timer ;
ULONG Flags ;
ULONG Characteristics ;
PVPB Vpb ;
PVOID DeviceExtension ;
ULONG DeviceType ;
CCHAR StackSize ;
union __anonunion_Queue_43 Queue ;
ULONG AlignmentRequirement ;
KDEVICE_QUEUE DeviceQueue ;
KDPC Dpc ;
ULONG ActiveThreadCount ;
PSECURITY_DESCRIPTOR SecurityDescriptor ;
KEVENT DeviceLock ;
USHORT SectorSize ;
USHORT Spare1 ;
struct _DEVOBJ_EXTENSION *DeviceObjectExtension ;
PVOID Reserved ;
};
typedef struct _DEVICE_OBJECT DEVICE_OBJECT;
typedef struct _DEVICE_OBJECT *PDEVICE_OBJECT;
struct _DEVOBJ_EXTENSION {
CSHORT Type ;
USHORT Size ;
PDEVICE_OBJECT DeviceObject ;
};
typedef struct _DEVOBJ_EXTENSION DEVOBJ_EXTENSION;
typedef struct _DEVOBJ_EXTENSION *PDEVOBJ_EXTENSION;
struct _DRIVER_EXTENSION {
struct _DRIVER_OBJECT *DriverObject ;
NTSTATUS (*AddDevice)(struct _DRIVER_OBJECT *DriverObject , struct _DEVICE_OBJECT *PhysicalDeviceObject ) ;
ULONG Count ;
UNICODE_STRING ServiceKeyName ;
};
typedef struct _DRIVER_EXTENSION DRIVER_EXTENSION;
typedef struct _DRIVER_EXTENSION *PDRIVER_EXTENSION;
struct _DRIVER_OBJECT {
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
NTSTATUS (*DriverInit)(struct _DRIVER_OBJECT *DriverObject , PUNICODE_STRING RegistryPath ) ;
void (*DriverStartIo)(struct _DEVICE_OBJECT *DeviceObject , struct _IRP *Irp ) ;
void (*DriverUnload)(struct _DRIVER_OBJECT *DriverObject ) ;
PDRIVER_DISPATCH MajorFunction[28] ;
};
typedef struct _DRIVER_OBJECT DRIVER_OBJECT;
typedef struct _DRIVER_OBJECT *PDRIVER_OBJECT;
struct _SECTION_OBJECT_POINTERS {
PVOID DataSectionObject ;
PVOID SharedCacheMap ;
PVOID ImageSectionObject ;
};
typedef struct _SECTION_OBJECT_POINTERS SECTION_OBJECT_POINTERS;
typedef SECTION_OBJECT_POINTERS *PSECTION_OBJECT_POINTERS;
struct _IO_COMPLETION_CONTEXT {
PVOID Port ;
PVOID Key ;
};
typedef struct _IO_COMPLETION_CONTEXT IO_COMPLETION_CONTEXT;
typedef struct _IO_COMPLETION_CONTEXT *PIO_COMPLETION_CONTEXT;
struct _FILE_OBJECT {
CSHORT Type ;
CSHORT Size ;
PDEVICE_OBJECT DeviceObject ;
PVPB Vpb ;
PVOID FsContext ;
PVOID FsContext2 ;
PSECTION_OBJECT_POINTERS SectionObjectPointer ;
PVOID PrivateCacheMap ;
NTSTATUS FinalStatus ;
struct _FILE_OBJECT *RelatedFileObject ;
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
};
typedef struct _FILE_OBJECT FILE_OBJECT;
typedef struct _FILE_OBJECT *PFILE_OBJECT;
union __anonunion_AssociatedIrp_44 {
struct _IRP *MasterIrp ;
LONG IrpCount ;
PVOID SystemBuffer ;
};
struct __anonstruct_AsynchronousParameters_46 {
void (*UserApcRoutine)(PVOID ApcContext , PIO_STATUS_BLOCK IoStatusBlock , ULONG Reserved ) ;
PVOID UserApcContext ;
};
union __anonunion_Overlay_45 {
struct __anonstruct_AsynchronousParameters_46 AsynchronousParameters ;
LARGE_INTEGER AllocationSize ;
};
struct __anonstruct____missing_field_name_50 {
PVOID DriverContext[4] ;
};
union __anonunion____missing_field_name_49 {
KDEVICE_QUEUE_ENTRY DeviceQueueEntry ;
struct __anonstruct____missing_field_name_50 __annonCompField14 ;
};
union __anonunion____missing_field_name_52 {
struct _IO_STACK_LOCATION *CurrentStackLocation ;
ULONG PacketType ;
};
struct __anonstruct____missing_field_name_51 {
LIST_ENTRY ListEntry ;
union __anonunion____missing_field_name_52 __annonCompField16 ;
};
struct __anonstruct_Overlay_48 {
union __anonunion____missing_field_name_49 __annonCompField15 ;
PETHREAD Thread ;
PCHAR AuxiliaryBuffer ;
struct __anonstruct____missing_field_name_51 __annonCompField17 ;
PFILE_OBJECT OriginalFileObject ;
};
union __anonunion_Tail_47 {
struct __anonstruct_Overlay_48 Overlay ;
KAPC Apc ;
PVOID CompletionKey ;
};
struct _IRP {
CSHORT Type ;
USHORT Size ;
PMDL MdlAddress ;
ULONG Flags ;
union __anonunion_AssociatedIrp_44 AssociatedIrp ;
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
union __anonunion_Overlay_45 Overlay ;
void (*CancelRoutine)(struct _DEVICE_OBJECT *DeviceObject , struct _IRP *Irp ) ;
PVOID UserBuffer ;
union __anonunion_Tail_47 Tail ;
};
typedef struct _IRP IRP;
typedef struct _IRP *PIRP;
typedef NTSTATUS (*PIO_COMPLETION_ROUTINE)(PDEVICE_OBJECT DeviceObject , PIRP Irp , PVOID Context );
typedef enum _DEVICE_RELATION_TYPE DEVICE_RELATION_TYPE;
typedef enum _DEVICE_RELATION_TYPE *PDEVICE_RELATION_TYPE;
struct _DEVICE_RELATIONS {
ULONG Count ;
PDEVICE_OBJECT Objects[1] ;
};
typedef struct _DEVICE_RELATIONS DEVICE_RELATIONS;
typedef struct _DEVICE_RELATIONS *PDEVICE_RELATIONS;
typedef enum _DEVICE_USAGE_NOTIFICATION_TYPE DEVICE_USAGE_NOTIFICATION_TYPE;
struct _INTERFACE {
USHORT Size ;
USHORT Version ;
PVOID Context ;
void (*InterfaceReference)(PVOID Context ) ;
void (*InterfaceDereference)(PVOID Context ) ;
};
typedef struct _INTERFACE INTERFACE;
typedef struct _INTERFACE *PINTERFACE;
struct _DEVICE_CAPABILITIES {
USHORT Size ;
USHORT Version ;
ULONG DeviceD1 ;
ULONG DeviceD2 ;
ULONG LockSupported ;
ULONG EjectSupported ;
ULONG Removable ;
ULONG DockDevice ;
ULONG UniqueID ;
ULONG SilentInstall ;
ULONG RawDeviceOK ;
ULONG SurpriseRemovalOK ;
ULONG WakeFromD0 ;
ULONG WakeFromD1 ;
ULONG WakeFromD2 ;
ULONG WakeFromD3 ;
ULONG HardwareDisabled ;
ULONG NonDynamic ;
ULONG WarmEjectSupported ;
ULONG Reserved ;
ULONG Address ;
ULONG UINumber ;
DEVICE_POWER_STATE DeviceState[7] ;
SYSTEM_POWER_STATE SystemWake ;
DEVICE_POWER_STATE DeviceWake ;
ULONG D1Latency ;
ULONG D2Latency ;
ULONG D3Latency ;
};
typedef struct _DEVICE_CAPABILITIES DEVICE_CAPABILITIES;
typedef struct _DEVICE_CAPABILITIES *PDEVICE_CAPABILITIES;
struct _POWER_SEQUENCE {
ULONG SequenceD1 ;
ULONG SequenceD2 ;
ULONG SequenceD3 ;
};
typedef struct _POWER_SEQUENCE POWER_SEQUENCE;
typedef struct _POWER_SEQUENCE *PPOWER_SEQUENCE;
typedef enum __anonenum_BUS_QUERY_ID_TYPE_53 BUS_QUERY_ID_TYPE;
typedef enum __anonenum_BUS_QUERY_ID_TYPE_53 *PBUS_QUERY_ID_TYPE;
typedef ULONG PNP_DEVICE_STATE;
typedef ULONG *PPNP_DEVICE_STATE;
typedef enum __anonenum_DEVICE_TEXT_TYPE_54 DEVICE_TEXT_TYPE;
typedef enum __anonenum_DEVICE_TEXT_TYPE_54 *PDEVICE_TEXT_TYPE;
struct __anonstruct_Create_56 {
PIO_SECURITY_CONTEXT SecurityContext ;
ULONG Options ;
USHORT FileAttributes ;
USHORT ShareAccess ;
ULONG EaLength ;
};
struct __anonstruct_Read_57 {
ULONG Length ;
ULONG Key ;
LARGE_INTEGER ByteOffset ;
};
struct __anonstruct_Write_58 {
ULONG Length ;
ULONG Key ;
LARGE_INTEGER ByteOffset ;
};
struct __anonstruct_QueryFile_59 {
ULONG Length ;
FILE_INFORMATION_CLASS FileInformationClass ;
};
struct __anonstruct____missing_field_name_62 {
BOOLEAN ReplaceIfExists ;
BOOLEAN AdvanceOnly ;
};
union __anonunion____missing_field_name_61 {
struct __anonstruct____missing_field_name_62 __annonCompField18 ;
ULONG ClusterCount ;
HANDLE DeleteHandle ;
};
struct __anonstruct_SetFile_60 {
ULONG Length ;
FILE_INFORMATION_CLASS FileInformationClass ;
PFILE_OBJECT FileObject ;
union __anonunion____missing_field_name_61 __annonCompField19 ;
};
struct __anonstruct_QueryVolume_63 {
ULONG Length ;
FS_INFORMATION_CLASS FsInformationClass ;
};
struct __anonstruct_DeviceIoControl_64 {
ULONG OutputBufferLength ;
ULONG InputBufferLength ;
ULONG IoControlCode ;
PVOID Type3InputBuffer ;
};
struct __anonstruct_QuerySecurity_65 {
SECURITY_INFORMATION SecurityInformation ;
ULONG Length ;
};
struct __anonstruct_SetSecurity_66 {
SECURITY_INFORMATION SecurityInformation ;
PSECURITY_DESCRIPTOR SecurityDescriptor ;
};
struct __anonstruct_MountVolume_67 {
PVPB Vpb ;
PDEVICE_OBJECT DeviceObject ;
};
struct __anonstruct_VerifyVolume_68 {
PVPB Vpb ;
PDEVICE_OBJECT DeviceObject ;
};
struct __anonstruct_Scsi_69 {
struct _SCSI_REQUEST_BLOCK *Srb ;
};
struct __anonstruct_QueryDeviceRelations_70 {
DEVICE_RELATION_TYPE Type ;
};
struct __anonstruct_QueryInterface_71 {
GUID *InterfaceType ;
USHORT Size ;
USHORT Version ;
PINTERFACE Interface ;
PVOID InterfaceSpecificData ;
};
struct __anonstruct_DeviceCapabilities_72 {
PDEVICE_CAPABILITIES Capabilities ;
};
struct __anonstruct_FilterResourceRequirements_73 {
PIO_RESOURCE_REQUIREMENTS_LIST IoResourceRequirementList ;
};
struct __anonstruct_ReadWriteConfig_74 {
ULONG WhichSpace ;
PVOID Buffer ;
ULONG Offset ;
ULONG Length ;
};
struct __anonstruct_SetLock_75 {
BOOLEAN Lock ;
};
struct __anonstruct_QueryId_76 {
BUS_QUERY_ID_TYPE IdType ;
};
struct __anonstruct_QueryDeviceText_77 {
DEVICE_TEXT_TYPE DeviceTextType ;
LCID LocaleId ;
};
struct __anonstruct_UsageNotification_78 {
BOOLEAN InPath ;
BOOLEAN Reserved[3] ;
DEVICE_USAGE_NOTIFICATION_TYPE Type ;
};
struct __anonstruct_WaitWake_79 {
SYSTEM_POWER_STATE PowerState ;
};
struct __anonstruct_PowerSequence_80 {
PPOWER_SEQUENCE PowerSequence ;
};
struct __anonstruct_Power_81 {
ULONG SystemContext ;
POWER_STATE_TYPE Type ;
POWER_STATE State ;
POWER_ACTION ShutdownType ;
};
struct __anonstruct_StartDevice_82 {
PCM_RESOURCE_LIST AllocatedResources ;
PCM_RESOURCE_LIST AllocatedResourcesTranslated ;
};
struct __anonstruct_WMI_83 {
ULONG_PTR ProviderId ;
PVOID DataPath ;
ULONG BufferSize ;
PVOID Buffer ;
};
struct __anonstruct_Others_84 {
PVOID Argument1 ;
PVOID Argument2 ;
PVOID Argument3 ;
PVOID Argument4 ;
};
union __anonunion_Parameters_55 {
struct __anonstruct_Create_56 Create ;
struct __anonstruct_Read_57 Read ;
struct __anonstruct_Write_58 Write ;
struct __anonstruct_QueryFile_59 QueryFile ;
struct __anonstruct_SetFile_60 SetFile ;
struct __anonstruct_QueryVolume_63 QueryVolume ;
struct __anonstruct_DeviceIoControl_64 DeviceIoControl ;
struct __anonstruct_QuerySecurity_65 QuerySecurity ;
struct __anonstruct_SetSecurity_66 SetSecurity ;
struct __anonstruct_MountVolume_67 MountVolume ;
struct __anonstruct_VerifyVolume_68 VerifyVolume ;
struct __anonstruct_Scsi_69 Scsi ;
struct __anonstruct_QueryDeviceRelations_70 QueryDeviceRelations ;
struct __anonstruct_QueryInterface_71 QueryInterface ;
struct __anonstruct_DeviceCapabilities_72 DeviceCapabilities ;
struct __anonstruct_FilterResourceRequirements_73 FilterResourceRequirements ;
struct __anonstruct_ReadWriteConfig_74 ReadWriteConfig ;
struct __anonstruct_SetLock_75 SetLock ;
struct __anonstruct_QueryId_76 QueryId ;
struct __anonstruct_QueryDeviceText_77 QueryDeviceText ;
struct __anonstruct_UsageNotification_78 UsageNotification ;
struct __anonstruct_WaitWake_79 WaitWake ;
struct __anonstruct_PowerSequence_80 PowerSequence ;
struct __anonstruct_Power_81 Power ;
struct __anonstruct_StartDevice_82 StartDevice ;
struct __anonstruct_WMI_83 WMI ;
struct __anonstruct_Others_84 Others ;
};
struct _IO_STACK_LOCATION {
UCHAR MajorFunction ;
UCHAR MinorFunction ;
UCHAR Flags ;
UCHAR Control ;
union __anonunion_Parameters_55 Parameters ;
PDEVICE_OBJECT DeviceObject ;
PFILE_OBJECT FileObject ;
NTSTATUS (*CompletionRoutine)(PDEVICE_OBJECT DeviceObject , PIRP Irp , PVOID Context ) ;
PVOID Context ;
};
typedef struct _IO_STACK_LOCATION IO_STACK_LOCATION;
typedef struct _IO_STACK_LOCATION *PIO_STACK_LOCATION;
struct _SHARE_ACCESS {
ULONG OpenCount ;
ULONG Readers ;
ULONG Writers ;
ULONG Deleters ;
ULONG SharedRead ;
ULONG SharedWrite ;
ULONG SharedDelete ;
};
typedef struct _SHARE_ACCESS SHARE_ACCESS;
typedef struct _SHARE_ACCESS *PSHARE_ACCESS;
struct _CONFIGURATION_INFORMATION {
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
};
typedef struct _CONFIGURATION_INFORMATION CONFIGURATION_INFORMATION;
typedef struct _CONFIGURATION_INFORMATION *PCONFIGURATION_INFORMATION;
struct _BOOTDISK_INFORMATION {
LONGLONG BootPartitionOffset ;
LONGLONG SystemPartitionOffset ;
ULONG BootDeviceSignature ;
ULONG SystemDeviceSignature ;
};
typedef struct _BOOTDISK_INFORMATION BOOTDISK_INFORMATION;
typedef struct _BOOTDISK_INFORMATION *PBOOTDISK_INFORMATION;
typedef struct _IO_REMOVE_LOCK_TRACKING_BLOCK *PIO_REMOVE_LOCK_TRACKING_BLOCK;
struct _IO_REMOVE_LOCK_COMMON_BLOCK {
BOOLEAN Removed ;
BOOLEAN Reserved[3] ;
LONG IoCount ;
KEVENT RemoveEvent ;
};
typedef struct _IO_REMOVE_LOCK_COMMON_BLOCK IO_REMOVE_LOCK_COMMON_BLOCK;
struct _IO_REMOVE_LOCK_DBG_BLOCK {
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
};
typedef struct _IO_REMOVE_LOCK_DBG_BLOCK IO_REMOVE_LOCK_DBG_BLOCK;
struct _IO_REMOVE_LOCK {
IO_REMOVE_LOCK_COMMON_BLOCK Common ;
};
typedef struct _IO_REMOVE_LOCK IO_REMOVE_LOCK;
typedef struct _IO_REMOVE_LOCK *PIO_REMOVE_LOCK;
typedef struct _IO_WORKITEM *PIO_WORKITEM;
typedef void (*PIO_WORKITEM_ROUTINE)(PDEVICE_OBJECT DeviceObject , PVOID Context );
typedef enum __anonenum_DEVICE_REGISTRY_PROPERTY_85 DEVICE_REGISTRY_PROPERTY;
typedef BOOLEAN (*PTRANSLATE_BUS_ADDRESS)(PVOID Context , PHYSICAL_ADDRESS BusAddress , ULONG Length , PULONG AddressSpace , PPHYSICAL_ADDRESS TranslatedAddress );
typedef struct _DMA_ADAPTER *(*PGET_DMA_ADAPTER)(PVOID Context , struct _DEVICE_DESCRIPTION *DeviceDescriptor , PULONG NumberOfMapRegisters );
typedef ULONG (*PGET_SET_DEVICE_DATA)(PVOID Context , ULONG DataType , PVOID Buffer , ULONG Offset , ULONG Length );
struct _PNP_BUS_INFORMATION {
GUID BusTypeGuid ;
INTERFACE_TYPE LegacyBusType ;
ULONG BusNumber ;
};
typedef struct _PNP_BUS_INFORMATION PNP_BUS_INFORMATION;
typedef struct _PNP_BUS_INFORMATION *PPNP_BUS_INFORMATION;
struct _LEGACY_BUS_INFORMATION {
GUID BusTypeGuid ;
INTERFACE_TYPE LegacyBusType ;
ULONG BusNumber ;
};
typedef struct _LEGACY_BUS_INFORMATION LEGACY_BUS_INFORMATION;
typedef struct _LEGACY_BUS_INFORMATION *PLEGACY_BUS_INFORMATION;
struct _BUS_INTERFACE_STANDARD {
USHORT Size ;
USHORT Version ;
PVOID Context ;
void (*InterfaceReference)(PVOID Context ) ;
void (*InterfaceDereference)(PVOID Context ) ;
BOOLEAN (*TranslateBusAddress)(PVOID Context , PHYSICAL_ADDRESS BusAddress , ULONG Length , PULONG AddressSpace , PPHYSICAL_ADDRESS TranslatedAddress ) ;
struct _DMA_ADAPTER *(*GetDmaAdapter)(PVOID Context , struct _DEVICE_DESCRIPTION *DeviceDescriptor , PULONG NumberOfMapRegisters ) ;
ULONG (*SetBusData)(PVOID Context , ULONG DataType , PVOID Buffer , ULONG Offset , ULONG Length ) ;
ULONG (*GetBusData)(PVOID Context , ULONG DataType , PVOID Buffer , ULONG Offset , ULONG Length ) ;
};
typedef struct _BUS_INTERFACE_STANDARD BUS_INTERFACE_STANDARD;
typedef struct _BUS_INTERFACE_STANDARD *PBUS_INTERFACE_STANDARD;
typedef BOOLEAN (*PGPE_SERVICE_ROUTINE)(PVOID  , PVOID  );
typedef NTSTATUS (*PGPE_CONNECT_VECTOR)(PDEVICE_OBJECT  , ULONG  , KINTERRUPT_MODE  , BOOLEAN  , BOOLEAN (*)(PVOID  , PVOID  ) , PVOID  , PVOID  );
typedef NTSTATUS (*PGPE_DISCONNECT_VECTOR)(PVOID  );
typedef NTSTATUS (*PGPE_ENABLE_EVENT)(PDEVICE_OBJECT  , PVOID  );
typedef NTSTATUS (*PGPE_DISABLE_EVENT)(PDEVICE_OBJECT  , PVOID  );
typedef NTSTATUS (*PGPE_CLEAR_STATUS)(PDEVICE_OBJECT  , PVOID  );
typedef void (*PDEVICE_NOTIFY_CALLBACK)(PVOID  , ULONG  );
typedef NTSTATUS (*PREGISTER_FOR_DEVICE_NOTIFICATIONS)(PDEVICE_OBJECT  , void (*)(PVOID  , ULONG  ) , PVOID  );
typedef void (*PUNREGISTER_FOR_DEVICE_NOTIFICATIONS)(PDEVICE_OBJECT  , void (*)(PVOID  , ULONG  ) );
struct _ACPI_INTERFACE_STANDARD {
USHORT Size ;
USHORT Version ;
PVOID Context ;
void (*InterfaceReference)(PVOID Context ) ;
void (*InterfaceDereference)(PVOID Context ) ;
NTSTATUS (*GpeConnectVector)(PDEVICE_OBJECT  , ULONG  , KINTERRUPT_MODE  , BOOLEAN  , BOOLEAN (*)(PVOID  , PVOID  ) , PVOID  , PVOID  ) ;
NTSTATUS (*GpeDisconnectVector)(PVOID  ) ;
NTSTATUS (*GpeEnableEvent)(PDEVICE_OBJECT  , PVOID  ) ;
NTSTATUS (*GpeDisableEvent)(PDEVICE_OBJECT  , PVOID  ) ;
NTSTATUS (*GpeClearStatus)(PDEVICE_OBJECT  , PVOID  ) ;
NTSTATUS (*RegisterForDeviceNotifications)(PDEVICE_OBJECT  , void (*)(PVOID  , ULONG  ) , PVOID  ) ;
void (*UnregisterForDeviceNotifications)(PDEVICE_OBJECT  , void (*)(PVOID  , ULONG  ) ) ;
};
typedef struct _ACPI_INTERFACE_STANDARD ACPI_INTERFACE_STANDARD;
typedef struct _ACPI_INTERFACE_STANDARD *PACPI_INTERFACE_STANDARD;
typedef enum _ACPI_REG_TYPE ACPI_REG_TYPE;
typedef enum _ACPI_REG_TYPE *PACPI_REG_TYPE;
typedef USHORT (*PREAD_ACPI_REGISTER)(ACPI_REG_TYPE AcpiReg , ULONG Register );
typedef void (*PWRITE_ACPI_REGISTER)(ACPI_REG_TYPE AcpiReg , ULONG Register , USHORT Value );
struct ACPI_REGS_INTERFACE_STANDARD {
USHORT Size ;
USHORT Version ;
PVOID Context ;
void (*InterfaceReference)(PVOID Context ) ;
void (*InterfaceDereference)(PVOID Context ) ;
USHORT (*ReadAcpiRegister)(ACPI_REG_TYPE AcpiReg , ULONG Register ) ;
void (*WriteAcpiRegister)(ACPI_REG_TYPE AcpiReg , ULONG Register , USHORT Value ) ;
};
typedef struct ACPI_REGS_INTERFACE_STANDARD ACPI_REGS_INTERFACE_STANDARD;
typedef struct ACPI_REGS_INTERFACE_STANDARD *PACPI_REGS_INTERFACE_STANDARD;
struct __anonstruct_ROUTING_TOKEN_86 {
PVOID LinkNode ;
ULONG StaticVector ;
UCHAR Flags ;
};
typedef struct __anonstruct_ROUTING_TOKEN_86 ROUTING_TOKEN;
typedef struct __anonstruct_ROUTING_TOKEN_86 *PROUTING_TOKEN;
typedef NTSTATUS (*PGET_INTERRUPT_ROUTING)(PDEVICE_OBJECT Pdo , ULONG *Bus , ULONG *PciSlot , UCHAR *InterruptLine , UCHAR *InterruptPin , UCHAR *ClassCode , UCHAR *SubClassCode , PDEVICE_OBJECT *ParentPdo , ROUTING_TOKEN *RoutingToken , UCHAR *Flags );
typedef NTSTATUS (*PSET_INTERRUPT_ROUTING_TOKEN)(PDEVICE_OBJECT Pdo , PROUTING_TOKEN RoutingToken );
typedef void (*PUPDATE_INTERRUPT_LINE)(PDEVICE_OBJECT Pdo , UCHAR LineRegister );
struct _INT_ROUTE_INTERFACE_STANDARD {
USHORT Size ;
USHORT Version ;
PVOID Context ;
void (*InterfaceReference)(PVOID Context ) ;
void (*InterfaceDereference)(PVOID Context ) ;
NTSTATUS (*GetInterruptRouting)(PDEVICE_OBJECT Pdo , ULONG *Bus , ULONG *PciSlot , UCHAR *InterruptLine , UCHAR *InterruptPin , UCHAR *ClassCode , UCHAR *SubClassCode , PDEVICE_OBJECT *ParentPdo , ROUTING_TOKEN *RoutingToken , UCHAR *Flags ) ;
NTSTATUS (*SetInterruptRoutingToken)(PDEVICE_OBJECT Pdo , PROUTING_TOKEN RoutingToken ) ;
void (*UpdateInterruptLine)(PDEVICE_OBJECT Pdo , UCHAR LineRegister ) ;
};
typedef struct _INT_ROUTE_INTERFACE_STANDARD INT_ROUTE_INTERFACE_STANDARD;
typedef struct _INT_ROUTE_INTERFACE_STANDARD *PINT_ROUTE_INTERFACE_STANDARD;
struct _IO_ASSIGNED_RESOURCES {
ULONG Count ;
PASSIGNED_RESOURCE AssignedResources[1] ;
};
typedef struct _IO_ASSIGNED_RESOURCES IO_ASSIGNED_RESOURCES;
typedef struct _IO_ASSIGNED_RESOURCES *PIO_ASSIGNED_RESOURCES;
typedef enum _IO_NOTIFICATION_EVENT_CATEGORY IO_NOTIFICATION_EVENT_CATEGORY;
typedef NTSTATUS (*PDRIVER_NOTIFICATION_CALLBACK_ROUTINE)(PVOID NotificationStructure , PVOID Context );
typedef void (*PDEVICE_CHANGE_COMPLETE_CALLBACK)(PVOID Context );
typedef enum _ARBITER_ACTION ARBITER_ACTION;
typedef enum _ARBITER_ACTION *PARBITER_ACTION;
struct _ARBITER_CONFLICT_INFO {
PDEVICE_OBJECT OwningObject ;
ULONGLONG Start ;
ULONGLONG End ;
};
typedef struct _ARBITER_CONFLICT_INFO ARBITER_CONFLICT_INFO;
typedef struct _ARBITER_CONFLICT_INFO *PARBITER_CONFLICT_INFO;
struct __anonstruct_TestAllocation_88 {
PLIST_ENTRY ArbitrationList ;
ULONG AllocateFromCount ;
PCM_PARTIAL_RESOURCE_DESCRIPTOR AllocateFrom ;
};
struct __anonstruct_RetestAllocation_89 {
PLIST_ENTRY ArbitrationList ;
ULONG AllocateFromCount ;
PCM_PARTIAL_RESOURCE_DESCRIPTOR AllocateFrom ;
};
struct __anonstruct_BootAllocation_90 {
PLIST_ENTRY ArbitrationList ;
};
struct __anonstruct_QueryAllocatedResources_91 {
PCM_PARTIAL_RESOURCE_LIST *AllocatedResources ;
};
struct __anonstruct_QueryConflict_92 {
PDEVICE_OBJECT PhysicalDeviceObject ;
PIO_RESOURCE_DESCRIPTOR ConflictingResource ;
PULONG ConflictCount ;
PARBITER_CONFLICT_INFO *Conflicts ;
};
struct __anonstruct_QueryArbitrate_93 {
PLIST_ENTRY ArbitrationList ;
};
struct __anonstruct_AddReserved_94 {
PDEVICE_OBJECT ReserveDevice ;
};
union __anonunion_Parameters_87 {
struct __anonstruct_TestAllocation_88 TestAllocation ;
struct __anonstruct_RetestAllocation_89 RetestAllocation ;
struct __anonstruct_BootAllocation_90 BootAllocation ;
struct __anonstruct_QueryAllocatedResources_91 QueryAllocatedResources ;
struct __anonstruct_QueryConflict_92 QueryConflict ;
struct __anonstruct_QueryArbitrate_93 QueryArbitrate ;
struct __anonstruct_AddReserved_94 AddReserved ;
};
struct _ARBITER_PARAMETERS {
union __anonunion_Parameters_87 Parameters ;
};
typedef struct _ARBITER_PARAMETERS ARBITER_PARAMETERS;
typedef struct _ARBITER_PARAMETERS *PARBITER_PARAMETERS;
typedef enum _ARBITER_REQUEST_SOURCE ARBITER_REQUEST_SOURCE;
typedef enum _ARBITER_RESULT ARBITER_RESULT;
struct _ARBITER_LIST_ENTRY {
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
};
typedef struct _ARBITER_LIST_ENTRY ARBITER_LIST_ENTRY;
typedef struct _ARBITER_LIST_ENTRY *PARBITER_LIST_ENTRY;
typedef NTSTATUS (*PARBITER_HANDLER)(PVOID Context , ARBITER_ACTION Action , PARBITER_PARAMETERS Parameters );
struct _ARBITER_INTERFACE {
USHORT Size ;
USHORT Version ;
PVOID Context ;
void (*InterfaceReference)(PVOID Context ) ;
void (*InterfaceDereference)(PVOID Context ) ;
NTSTATUS (*ArbiterHandler)(PVOID Context , ARBITER_ACTION Action , PARBITER_PARAMETERS Parameters ) ;
ULONG Flags ;
};
typedef struct _ARBITER_INTERFACE ARBITER_INTERFACE;
typedef struct _ARBITER_INTERFACE *PARBITER_INTERFACE;
typedef enum _RESOURCE_TRANSLATION_DIRECTION RESOURCE_TRANSLATION_DIRECTION;
typedef NTSTATUS (*PTRANSLATE_RESOURCE_HANDLER)(PVOID Context , PCM_PARTIAL_RESOURCE_DESCRIPTOR Source , RESOURCE_TRANSLATION_DIRECTION Direction , ULONG AlternativesCount , IO_RESOURCE_DESCRIPTOR *Alternatives , PDEVICE_OBJECT PhysicalDeviceObject , PCM_PARTIAL_RESOURCE_DESCRIPTOR Target );
typedef NTSTATUS (*PTRANSLATE_RESOURCE_REQUIREMENTS_HANDLER)(PVOID Context , PIO_RESOURCE_DESCRIPTOR Source , PDEVICE_OBJECT PhysicalDeviceObject , PULONG TargetCount , PIO_RESOURCE_DESCRIPTOR *Target );
struct _TRANSLATOR_INTERFACE {
USHORT Size ;
USHORT Version ;
PVOID Context ;
void (*InterfaceReference)(PVOID Context ) ;
void (*InterfaceDereference)(PVOID Context ) ;
NTSTATUS (*TranslateResources)(PVOID Context , PCM_PARTIAL_RESOURCE_DESCRIPTOR Source , RESOURCE_TRANSLATION_DIRECTION Direction , ULONG AlternativesCount , IO_RESOURCE_DESCRIPTOR *Alternatives , PDEVICE_OBJECT PhysicalDeviceObject , PCM_PARTIAL_RESOURCE_DESCRIPTOR Target ) ;
NTSTATUS (*TranslateResourceRequirements)(PVOID Context , PIO_RESOURCE_DESCRIPTOR Source , PDEVICE_OBJECT PhysicalDeviceObject , PULONG TargetCount , PIO_RESOURCE_DESCRIPTOR *Target ) ;
};
typedef struct _TRANSLATOR_INTERFACE TRANSLATOR_INTERFACE;
typedef struct _TRANSLATOR_INTERFACE *PTRANSLATOR_INTERFACE;
typedef NTSTATUS (*PLEGACY_DEVICE_DETECTION_HANDLER)(PVOID Context , INTERFACE_TYPE LegacyBusType , ULONG BusNumber , ULONG SlotNumber , PDEVICE_OBJECT *PhysicalDeviceObject );
struct _LEGACY_DEVICE_DETECTION_INTERFACE {
USHORT Size ;
USHORT Version ;
PVOID Context ;
void (*InterfaceReference)(PVOID Context ) ;
void (*InterfaceDereference)(PVOID Context ) ;
NTSTATUS (*LegacyDeviceDetection)(PVOID Context , INTERFACE_TYPE LegacyBusType , ULONG BusNumber , ULONG SlotNumber , PDEVICE_OBJECT *PhysicalDeviceObject ) ;
};
typedef struct _LEGACY_DEVICE_DETECTION_INTERFACE LEGACY_DEVICE_DETECTION_INTERFACE;
typedef struct _LEGACY_DEVICE_DETECTION_INTERFACE *PLEGACY_DEVICE_DETECTION_INTERFACE;
struct _PLUGPLAY_NOTIFICATION_HEADER {
USHORT Version ;
USHORT Size ;
GUID Event ;
};
typedef struct _PLUGPLAY_NOTIFICATION_HEADER PLUGPLAY_NOTIFICATION_HEADER;
typedef struct _PLUGPLAY_NOTIFICATION_HEADER *PPLUGPLAY_NOTIFICATION_HEADER;
struct _HWPROFILE_CHANGE_NOTIFICATION {
USHORT Version ;
USHORT Size ;
GUID Event ;
};
typedef struct _HWPROFILE_CHANGE_NOTIFICATION HWPROFILE_CHANGE_NOTIFICATION;
typedef struct _HWPROFILE_CHANGE_NOTIFICATION *PHWPROFILE_CHANGE_NOTIFICATION;
struct _DEVICE_INTERFACE_CHANGE_NOTIFICATION {
USHORT Version ;
USHORT Size ;
GUID Event ;
GUID InterfaceClassGuid ;
PUNICODE_STRING SymbolicLinkName ;
};
typedef struct _DEVICE_INTERFACE_CHANGE_NOTIFICATION DEVICE_INTERFACE_CHANGE_NOTIFICATION;
typedef struct _DEVICE_INTERFACE_CHANGE_NOTIFICATION *PDEVICE_INTERFACE_CHANGE_NOTIFICATION;
struct _TARGET_DEVICE_REMOVAL_NOTIFICATION {
USHORT Version ;
USHORT Size ;
GUID Event ;
PFILE_OBJECT FileObject ;
};
typedef struct _TARGET_DEVICE_REMOVAL_NOTIFICATION TARGET_DEVICE_REMOVAL_NOTIFICATION;
typedef struct _TARGET_DEVICE_REMOVAL_NOTIFICATION *PTARGET_DEVICE_REMOVAL_NOTIFICATION;
struct _TARGET_DEVICE_CUSTOM_NOTIFICATION {
USHORT Version ;
USHORT Size ;
GUID Event ;
PFILE_OBJECT FileObject ;
LONG NameBufferOffset ;
UCHAR CustomDataBuffer[1] ;
};
typedef struct _TARGET_DEVICE_CUSTOM_NOTIFICATION TARGET_DEVICE_CUSTOM_NOTIFICATION;
typedef struct _TARGET_DEVICE_CUSTOM_NOTIFICATION *PTARGET_DEVICE_CUSTOM_NOTIFICATION;
struct _DEVICE_DESCRIPTION {
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
};
typedef struct _DEVICE_DESCRIPTION DEVICE_DESCRIPTION;
typedef struct _DEVICE_DESCRIPTION *PDEVICE_DESCRIPTION;
typedef BOOLEAN (*PHAL_RESET_DISPLAY_PARAMETERS)(ULONG Columns , ULONG Rows );
typedef void (*PDEVICE_CONTROL_COMPLETION)(struct _DEVICE_CONTROL_CONTEXT *ControlContext );
struct _DEVICE_CONTROL_CONTEXT {
NTSTATUS Status ;
PDEVICE_HANDLER_OBJECT DeviceHandler ;
PDEVICE_OBJECT DeviceObject ;
ULONG ControlCode ;
PVOID Buffer ;
PULONG BufferLength ;
PVOID Context ;
};
typedef struct _DEVICE_CONTROL_CONTEXT DEVICE_CONTROL_CONTEXT;
typedef struct _DEVICE_CONTROL_CONTEXT *PDEVICE_CONTROL_CONTEXT;
typedef PBUS_HANDLER (*pHalHandlerForBus)(INTERFACE_TYPE InterfaceType , ULONG BusNumber );
typedef void (*pHalReferenceBusHandler)(PBUS_HANDLER BusHandler );
typedef enum _HAL_QUERY_INFORMATION_CLASS HAL_QUERY_INFORMATION_CLASS;
typedef enum _HAL_QUERY_INFORMATION_CLASS *PHAL_QUERY_INFORMATION_CLASS;
typedef enum _HAL_SET_INFORMATION_CLASS HAL_SET_INFORMATION_CLASS;
typedef enum _HAL_SET_INFORMATION_CLASS *PHAL_SET_INFORMATION_CLASS;
typedef NTSTATUS (*pHalQuerySystemInformation)(HAL_QUERY_INFORMATION_CLASS InformationClass , ULONG BufferSize , PVOID Buffer , PULONG ReturnedLength );
typedef NTSTATUS (*pHalSetSystemInformation)(HAL_SET_INFORMATION_CLASS InformationClass , ULONG BufferSize , PVOID Buffer );
typedef void (*pHalExamineMBR)(PDEVICE_OBJECT DeviceObject , ULONG SectorSize , ULONG MBRTypeIdentifier , PVOID *Buffer );
typedef void (*pHalIoAssignDriveLetters)(struct _LOADER_PARAMETER_BLOCK *LoaderBlock , PSTRING NtDeviceName , PUCHAR NtSystemPath , PSTRING NtSystemPathString );
typedef NTSTATUS (*pHalIoReadPartitionTable)(PDEVICE_OBJECT DeviceObject , ULONG SectorSize , BOOLEAN ReturnRecognizedPartitions , struct _DRIVE_LAYOUT_INFORMATION **PartitionBuffer );
typedef NTSTATUS (*pHalIoSetPartitionInformation)(PDEVICE_OBJECT DeviceObject , ULONG SectorSize , ULONG PartitionNumber , ULONG PartitionType );
typedef NTSTATUS (*pHalIoWritePartitionTable)(PDEVICE_OBJECT DeviceObject , ULONG SectorSize , ULONG SectorsPerTrack , ULONG NumberOfHeads , struct _DRIVE_LAYOUT_INFORMATION *PartitionBuffer );
typedef NTSTATUS (*pHalQueryBusSlots)(PBUS_HANDLER BusHandler , ULONG BufferSize , PULONG SlotNumbers , PULONG ReturnedLength );
typedef NTSTATUS (*pHalInitPnpDriver)(void);
struct _PM_DISPATCH_TABLE {
ULONG Signature ;
ULONG Version ;
PVOID Function[1] ;
};
typedef struct _PM_DISPATCH_TABLE PM_DISPATCH_TABLE;
typedef struct _PM_DISPATCH_TABLE *PPM_DISPATCH_TABLE;
typedef NTSTATUS (*pHalInitPowerManagement)(PPM_DISPATCH_TABLE PmDriverDispatchTable , PPM_DISPATCH_TABLE *PmHalDispatchTable );
typedef struct _DMA_ADAPTER *(*pHalGetDmaAdapter)(PVOID Context , struct _DEVICE_DESCRIPTION *DeviceDescriptor , PULONG NumberOfMapRegisters );
typedef NTSTATUS (*pHalGetInterruptTranslator)(INTERFACE_TYPE ParentInterfaceType , ULONG ParentBusNumber , INTERFACE_TYPE BridgeInterfaceType , USHORT Size , USHORT Version , PTRANSLATOR_INTERFACE Translator , PULONG BridgeBusNumber );
typedef BOOLEAN (*pHalTranslateBusAddress)(INTERFACE_TYPE InterfaceType , ULONG BusNumber , PHYSICAL_ADDRESS BusAddress , PULONG AddressSpace , PPHYSICAL_ADDRESS TranslatedAddress );
typedef NTSTATUS (*pHalAssignSlotResources)(PUNICODE_STRING RegistryPath , PUNICODE_STRING DriverClassName , PDRIVER_OBJECT DriverObject , PDEVICE_OBJECT DeviceObject , INTERFACE_TYPE BusType , ULONG BusNumber , ULONG SlotNumber , PCM_RESOURCE_LIST *AllocatedResources );
typedef void (*pHalHaltSystem)(void);
typedef void (*pHalResetDisplay)(void);
typedef BOOLEAN (*pHalFindBusAddressTranslation)(PHYSICAL_ADDRESS BusAddress , PULONG AddressSpace , PPHYSICAL_ADDRESS TranslatedAddress , PULONG_PTR Context , BOOLEAN NextBus );
struct __anonstruct_HAL_DISPATCH_95 {
ULONG Version ;
NTSTATUS (*HalQuerySystemInformation)(HAL_QUERY_INFORMATION_CLASS InformationClass , ULONG BufferSize , PVOID Buffer , PULONG ReturnedLength ) ;
NTSTATUS (*HalSetSystemInformation)(HAL_SET_INFORMATION_CLASS InformationClass , ULONG BufferSize , PVOID Buffer ) ;
NTSTATUS (*HalQueryBusSlots)(PBUS_HANDLER BusHandler , ULONG BufferSize , PULONG SlotNumbers , PULONG ReturnedLength ) ;
ULONG Spare1 ;
void (*HalExamineMBR)(PDEVICE_OBJECT DeviceObject , ULONG SectorSize , ULONG MBRTypeIdentifier , PVOID *Buffer ) ;
void (*HalIoAssignDriveLetters)(struct _LOADER_PARAMETER_BLOCK *LoaderBlock , PSTRING NtDeviceName , PUCHAR NtSystemPath , PSTRING NtSystemPathString ) ;
NTSTATUS (*HalIoReadPartitionTable)(PDEVICE_OBJECT DeviceObject , ULONG SectorSize , BOOLEAN ReturnRecognizedPartitions , struct _DRIVE_LAYOUT_INFORMATION **PartitionBuffer ) ;
NTSTATUS (*HalIoSetPartitionInformation)(PDEVICE_OBJECT DeviceObject , ULONG SectorSize , ULONG PartitionNumber , ULONG PartitionType ) ;
NTSTATUS (*HalIoWritePartitionTable)(PDEVICE_OBJECT DeviceObject , ULONG SectorSize , ULONG SectorsPerTrack , ULONG NumberOfHeads , struct _DRIVE_LAYOUT_INFORMATION *PartitionBuffer ) ;
PBUS_HANDLER (*HalReferenceHandlerForBus)(INTERFACE_TYPE InterfaceType , ULONG BusNumber ) ;
void (*HalReferenceBusHandler)(PBUS_HANDLER BusHandler ) ;
void (*HalDereferenceBusHandler)(PBUS_HANDLER BusHandler ) ;
NTSTATUS (*HalInitPnpDriver)(void) ;
NTSTATUS (*HalInitPowerManagement)(PPM_DISPATCH_TABLE PmDriverDispatchTable , PPM_DISPATCH_TABLE *PmHalDispatchTable ) ;
struct _DMA_ADAPTER *(*HalGetDmaAdapter)(PVOID Context , struct _DEVICE_DESCRIPTION *DeviceDescriptor , PULONG NumberOfMapRegisters ) ;
NTSTATUS (*HalGetInterruptTranslator)(INTERFACE_TYPE ParentInterfaceType , ULONG ParentBusNumber , INTERFACE_TYPE BridgeInterfaceType , USHORT Size , USHORT Version , PTRANSLATOR_INTERFACE Translator , PULONG BridgeBusNumber ) ;
};
typedef struct __anonstruct_HAL_DISPATCH_95 HAL_DISPATCH;
typedef struct __anonstruct_HAL_DISPATCH_95 *PHAL_DISPATCH;
struct _HAL_BUS_INFORMATION {
INTERFACE_TYPE BusType ;
BUS_DATA_TYPE ConfigurationType ;
ULONG BusNumber ;
ULONG Reserved ;
};
typedef struct _HAL_BUS_INFORMATION HAL_BUS_INFORMATION;
typedef struct _HAL_BUS_INFORMATION *PHAL_BUS_INFORMATION;
struct _HAL_PROFILE_SOURCE_INFORMATION {
KPROFILE_SOURCE Source ;
BOOLEAN Supported ;
ULONG Interval ;
};
typedef struct _HAL_PROFILE_SOURCE_INFORMATION HAL_PROFILE_SOURCE_INFORMATION;
typedef struct _HAL_PROFILE_SOURCE_INFORMATION *PHAL_PROFILE_SOURCE_INFORMATION;
struct _HAL_PROFILE_SOURCE_INTERVAL {
KPROFILE_SOURCE Source ;
ULONG_PTR Interval ;
};
typedef struct _HAL_PROFILE_SOURCE_INTERVAL HAL_PROFILE_SOURCE_INTERVAL;
typedef struct _HAL_PROFILE_SOURCE_INTERVAL *PHAL_PROFILE_SOURCE_INTERVAL;
typedef enum _HAL_DISPLAY_BIOS_INFORMATION HAL_DISPLAY_BIOS_INFORMATION;
typedef enum _HAL_DISPLAY_BIOS_INFORMATION *PHAL_DISPLAY_BIOS_INFORMATION;
struct _HAL_POWER_INFORMATION {
ULONG TBD ;
};
typedef struct _HAL_POWER_INFORMATION HAL_POWER_INFORMATION;
typedef struct _HAL_POWER_INFORMATION *PHAL_POWER_INFORMATION;
struct _HAL_PROCESSOR_SPEED_INFO {
ULONG TBD ;
};
typedef struct _HAL_PROCESSOR_SPEED_INFO HAL_PROCESSOR_SPEED_INFORMATION;
typedef struct _HAL_PROCESSOR_SPEED_INFO *PHAL_PROCESSOR_SPEED_INFORMATION;
struct _HAL_CALLBACKS {
PCALLBACK_OBJECT___0 SetSystemInformation ;
PCALLBACK_OBJECT___0 BusCheck ;
};
typedef struct _HAL_CALLBACKS HAL_CALLBACKS;
typedef struct _HAL_CALLBACKS *PHAL_CALLBACKS;
struct _HAL_PROCESSOR_FEATURE {
ULONG UsableFeatureBits ;
};
typedef struct _HAL_PROCESSOR_FEATURE HAL_PROCESSOR_FEATURE;
struct __anonstruct____missing_field_name_96 {
ULONG Address ;
ULONG Reserved ;
};
union _MCI_ADDR {
struct __anonstruct____missing_field_name_96 __annonCompField20 ;
ULONGLONG QuadPart ;
};
typedef union _MCI_ADDR MCI_ADDR;
typedef union _MCI_ADDR *PMCI_ADDR;
typedef enum __anonenum_MCA_EXCEPTION_TYPE_97 MCA_EXCEPTION_TYPE;
struct __anonstruct_Mca_99 {
UCHAR BankNumber ;
MCI_STATS Status ;
MCI_ADDR Address ;
ULONGLONG Misc ;
};
struct __anonstruct_Mce_100 {
ULONGLONG Address ;
ULONGLONG Type ;
};
union __anonunion_u_98 {
struct __anonstruct_Mca_99 Mca ;
struct __anonstruct_Mce_100 Mce ;
};
struct _MCA_EXCEPTION {
ULONG VersionNumber ;
MCA_EXCEPTION_TYPE ExceptionType ;
LARGE_INTEGER TimeStamp ;
ULONG ProcessorNumber ;
union __anonunion_u_98 u ;
};
typedef struct _MCA_EXCEPTION MCA_EXCEPTION;
typedef struct _MCA_EXCEPTION *PMCA_EXCEPTION;
typedef void (*PDRIVER_EXCPTN_CALLBACK)(PVOID Context , PMCA_EXCEPTION BankLog );
struct _MCA_DRIVER_INFO {
void (*ExceptionCallback)(PVOID Context , PMCA_EXCEPTION BankLog ) ;
void (*DpcCallback)(struct _KDPC *Dpc , PVOID DeferredContext , PVOID SystemArgument1 , PVOID SystemArgument2 ) ;
PVOID DeviceContext ;
};
typedef struct _MCA_DRIVER_INFO MCA_DRIVER_INFO;
typedef struct _MCA_DRIVER_INFO *PMCA_DRIVER_INFO;
struct _SCATTER_GATHER_ELEMENT {
PHYSICAL_ADDRESS Address ;
ULONG Length ;
ULONG_PTR Reserved ;
};
typedef struct _SCATTER_GATHER_ELEMENT SCATTER_GATHER_ELEMENT;
typedef struct _SCATTER_GATHER_ELEMENT *PSCATTER_GATHER_ELEMENT;
struct _SCATTER_GATHER_LIST {
ULONG NumberOfElements ;
ULONG_PTR Reserved ;
SCATTER_GATHER_ELEMENT Elements[] ;
};
typedef struct _SCATTER_GATHER_LIST SCATTER_GATHER_LIST;
typedef struct _SCATTER_GATHER_LIST *PSCATTER_GATHER_LIST;
typedef struct _DMA_OPERATIONS *PDMA_OPERATIONS;
struct _DMA_ADAPTER {
USHORT Version ;
USHORT Size ;
PDMA_OPERATIONS DmaOperations ;
};
typedef struct _DMA_ADAPTER DMA_ADAPTER;
typedef struct _DMA_ADAPTER *PDMA_ADAPTER;
typedef void (*PPUT_DMA_ADAPTER)(PDMA_ADAPTER DmaAdapter );
typedef PVOID (*PALLOCATE_COMMON_BUFFER)(PDMA_ADAPTER DmaAdapter , ULONG Length , PPHYSICAL_ADDRESS LogicalAddress , BOOLEAN CacheEnabled );
typedef void (*PFREE_COMMON_BUFFER)(PDMA_ADAPTER DmaAdapter , ULONG Length , PHYSICAL_ADDRESS LogicalAddress , PVOID VirtualAddress , BOOLEAN CacheEnabled );
typedef NTSTATUS (*PALLOCATE_ADAPTER_CHANNEL)(PDMA_ADAPTER DmaAdapter , PDEVICE_OBJECT DeviceObject , ULONG NumberOfMapRegisters , IO_ALLOCATION_ACTION (*ExecutionRoutine)(struct _DEVICE_OBJECT *DeviceObject , struct _IRP *Irp , PVOID MapRegisterBase , PVOID Context ) , PVOID Context );
typedef BOOLEAN (*PFLUSH_ADAPTER_BUFFERS)(PDMA_ADAPTER DmaAdapter , PMDL Mdl , PVOID MapRegisterBase , PVOID CurrentVa , ULONG Length , BOOLEAN WriteToDevice );
typedef void (*PFREE_ADAPTER_CHANNEL)(PDMA_ADAPTER DmaAdapter );
typedef void (*PFREE_MAP_REGISTERS)(PDMA_ADAPTER DmaAdapter , PVOID MapRegisterBase , ULONG NumberOfMapRegisters );
typedef PHYSICAL_ADDRESS (*PMAP_TRANSFER)(PDMA_ADAPTER DmaAdapter , PMDL Mdl , PVOID MapRegisterBase , PVOID CurrentVa , PULONG Length , BOOLEAN WriteToDevice );
typedef ULONG (*PGET_DMA_ALIGNMENT)(PDMA_ADAPTER DmaAdapter );
typedef ULONG (*PREAD_DMA_COUNTER)(PDMA_ADAPTER DmaAdapter );
typedef void (*PDRIVER_LIST_CONTROL)(struct _DEVICE_OBJECT *DeviceObject , struct _IRP *Irp , PSCATTER_GATHER_LIST ScatterGather , PVOID Context );
typedef NTSTATUS (*PGET_SCATTER_GATHER_LIST)(PDMA_ADAPTER DmaAdapter , PDEVICE_OBJECT DeviceObject , PMDL Mdl , PVOID CurrentVa , ULONG Length , void (*ExecutionRoutine)(struct _DEVICE_OBJECT *DeviceObject , struct _IRP *Irp , PSCATTER_GATHER_LIST ScatterGather , PVOID Context ) , PVOID Context , BOOLEAN WriteToDevice );
typedef void (*PPUT_SCATTER_GATHER_LIST)(PDMA_ADAPTER DmaAdapter , PSCATTER_GATHER_LIST ScatterGather , BOOLEAN WriteToDevice );
struct _DMA_OPERATIONS {
ULONG Size ;
void (*PutDmaAdapter)(PDMA_ADAPTER DmaAdapter ) ;
PVOID (*AllocateCommonBuffer)(PDMA_ADAPTER DmaAdapter , ULONG Length , PPHYSICAL_ADDRESS LogicalAddress , BOOLEAN CacheEnabled ) ;
void (*FreeCommonBuffer)(PDMA_ADAPTER DmaAdapter , ULONG Length , PHYSICAL_ADDRESS LogicalAddress , PVOID VirtualAddress , BOOLEAN CacheEnabled ) ;
NTSTATUS (*AllocateAdapterChannel)(PDMA_ADAPTER DmaAdapter , PDEVICE_OBJECT DeviceObject , ULONG NumberOfMapRegisters , IO_ALLOCATION_ACTION (*ExecutionRoutine)(struct _DEVICE_OBJECT *DeviceObject , struct _IRP *Irp , PVOID MapRegisterBase , PVOID Context ) , PVOID Context ) ;
BOOLEAN (*FlushAdapterBuffers)(PDMA_ADAPTER DmaAdapter , PMDL Mdl , PVOID MapRegisterBase , PVOID CurrentVa , ULONG Length , BOOLEAN WriteToDevice ) ;
void (*FreeAdapterChannel)(PDMA_ADAPTER DmaAdapter ) ;
void (*FreeMapRegisters)(PDMA_ADAPTER DmaAdapter , PVOID MapRegisterBase , ULONG NumberOfMapRegisters ) ;
PHYSICAL_ADDRESS (*MapTransfer)(PDMA_ADAPTER DmaAdapter , PMDL Mdl , PVOID MapRegisterBase , PVOID CurrentVa , PULONG Length , BOOLEAN WriteToDevice ) ;
ULONG (*GetDmaAlignment)(PDMA_ADAPTER DmaAdapter ) ;
ULONG (*ReadDmaCounter)(PDMA_ADAPTER DmaAdapter ) ;
NTSTATUS (*GetScatterGatherList)(PDMA_ADAPTER DmaAdapter , PDEVICE_OBJECT DeviceObject , PMDL Mdl , PVOID CurrentVa , ULONG Length , void (*ExecutionRoutine)(struct _DEVICE_OBJECT *DeviceObject , struct _IRP *Irp , PSCATTER_GATHER_LIST ScatterGather , PVOID Context ) , PVOID Context , BOOLEAN WriteToDevice ) ;
void (*PutScatterGatherList)(PDMA_ADAPTER DmaAdapter , PSCATTER_GATHER_LIST ScatterGather , BOOLEAN WriteToDevice ) ;
};
typedef struct _DMA_OPERATIONS DMA_OPERATIONS;
typedef void (*PREQUEST_POWER_COMPLETE)(PDEVICE_OBJECT DeviceObject , UCHAR MinorFunction , POWER_STATE PowerState , PVOID Context , PIO_STATUS_BLOCK IoStatus );
struct _OBJECT_HANDLE_INFORMATION {
ULONG HandleAttributes ;
ACCESS_MASK GrantedAccess ;
};
typedef struct _OBJECT_HANDLE_INFORMATION OBJECT_HANDLE_INFORMATION;
typedef struct _OBJECT_HANDLE_INFORMATION *POBJECT_HANDLE_INFORMATION;
struct __anonstruct_bits_102 {
ULONG DeviceNumber ;
ULONG FunctionNumber ;
ULONG Reserved ;
};
union __anonunion_u_101 {
struct __anonstruct_bits_102 bits ;
ULONG AsULONG ;
};
struct _PCI_SLOT_NUMBER {
union __anonunion_u_101 u ;
};
typedef struct _PCI_SLOT_NUMBER PCI_SLOT_NUMBER;
typedef struct _PCI_SLOT_NUMBER *PPCI_SLOT_NUMBER;
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
};
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
};
struct __anonstruct_Range_104 {
ULONG Base ;
ULONG Limit ;
};
struct _PCI_HEADER_TYPE_2 {
ULONG SocketRegistersBaseAddress ;
UCHAR CapabilitiesPtr ;
UCHAR Reserved ;
USHORT SecondaryStatus ;
UCHAR PrimaryBus ;
UCHAR SecondaryBus ;
UCHAR SubordinateBus ;
UCHAR SecondaryLatency ;
struct __anonstruct_Range_104 Range[4] ;
UCHAR InterruptLine ;
UCHAR InterruptPin ;
USHORT BridgeControl ;
};
union __anonunion_u_103 {
struct _PCI_HEADER_TYPE_0 type0 ;
struct _PCI_HEADER_TYPE_1 type1 ;
struct _PCI_HEADER_TYPE_2 type2 ;
};
struct _PCI_COMMON_CONFIG {
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
union __anonunion_u_103 u ;
UCHAR DeviceSpecific[192] ;
};
typedef struct _PCI_COMMON_CONFIG PCI_COMMON_CONFIG;
typedef struct _PCI_COMMON_CONFIG *PPCI_COMMON_CONFIG;
struct _PCI_CAPABILITIES_HEADER {
UCHAR CapabilityID ;
UCHAR Next ;
};
typedef struct _PCI_CAPABILITIES_HEADER PCI_CAPABILITIES_HEADER;
typedef struct _PCI_CAPABILITIES_HEADER *PPCI_CAPABILITIES_HEADER;
struct _PM_SUPPORT {
UCHAR Rsvd2 ;
UCHAR D1 ;
UCHAR D2 ;
UCHAR PMED0 ;
UCHAR PMED1 ;
UCHAR PMED2 ;
UCHAR PMED3Hot ;
UCHAR PMED3Cold ;
};
struct _PCI_PMC {
UCHAR Version ;
UCHAR PMEClock ;
UCHAR Rsvd1 ;
UCHAR DeviceSpecificInitialization ;
UCHAR Rsvd2 ;
struct _PM_SUPPORT Support ;
};
typedef struct _PCI_PMC PCI_PMC;
typedef struct _PCI_PMC *PPCI_PMC;
struct _PCI_PMCSR {
USHORT PowerState ;
USHORT Rsvd1 ;
USHORT PMEEnable ;
USHORT DataSelect ;
USHORT DataScale ;
USHORT PMEStatus ;
};
typedef struct _PCI_PMCSR PCI_PMCSR;
typedef struct _PCI_PMCSR *PPCI_PMCSR;
struct _PCI_PMCSR_BSE {
UCHAR Rsvd1 ;
UCHAR D3HotSupportsStopClock ;
UCHAR BusPowerClockControlEnabled ;
};
typedef struct _PCI_PMCSR_BSE PCI_PMCSR_BSE;
typedef struct _PCI_PMCSR_BSE *PPCI_PMCSR_BSE;
union __anonunion_PMC_105 {
PCI_PMC Capabilities ;
USHORT AsUSHORT ;
};
union __anonunion_PMCSR_106 {
PCI_PMCSR ControlStatus ;
USHORT AsUSHORT ;
};
union __anonunion_PMCSR_BSE_107 {
PCI_PMCSR_BSE BridgeSupport ;
UCHAR AsUCHAR ;
};
struct _PCI_PM_CAPABILITY {
PCI_CAPABILITIES_HEADER Header ;
union __anonunion_PMC_105 PMC ;
union __anonunion_PMCSR_106 PMCSR ;
union __anonunion_PMCSR_BSE_107 PMCSR_BSE ;
UCHAR Data ;
};
typedef struct _PCI_PM_CAPABILITY PCI_PM_CAPABILITY;
typedef struct _PCI_PM_CAPABILITY *PPCI_PM_CAPABILITY;
struct _PCI_AGP_STATUS {
ULONG Rate ;
ULONG Rsvd1 ;
ULONG FastWrite ;
ULONG FourGB ;
ULONG Rsvd2 ;
ULONG SideBandAddressing ;
ULONG Rsvd3 ;
ULONG RequestQueueDepthMaximum ;
};
struct _PCI_AGP_COMMAND {
ULONG Rate ;
ULONG Rsvd1 ;
ULONG FastWriteEnable ;
ULONG FourGBEnable ;
ULONG Rsvd2 ;
ULONG AGPEnable ;
ULONG SBAEnable ;
ULONG Rsvd3 ;
ULONG RequestQueueDepth ;
};
struct _PCI_AGP_CAPABILITY {
PCI_CAPABILITIES_HEADER Header ;
USHORT Minor ;
USHORT Major ;
USHORT Rsvd1 ;
struct _PCI_AGP_STATUS AGPStatus ;
struct _PCI_AGP_COMMAND AGPCommand ;
};
typedef struct _PCI_AGP_CAPABILITY PCI_AGP_CAPABILITY;
typedef struct _PCI_AGP_CAPABILITY *PPCI_AGP_CAPABILITY;
struct _PCI_MSI_MESSAGE_CONTROL {
USHORT MSIEnable ;
USHORT MultipleMessageCapable ;
USHORT MultipleMessageEnable ;
USHORT CapableOf64Bits ;
USHORT Reserved ;
};
struct _PCI_MSI_MESSAGE_ADDRESS {
ULONG_PTR Reserved ;
ULONG_PTR Address ;
};
union __anonunion_MessageAddress_108 {
struct _PCI_MSI_MESSAGE_ADDRESS Register ;
ULONG_PTR Raw ;
};
struct _PCI_MSI_64BIT_DATA {
ULONG MessageUpperAddress ;
USHORT MessageData ;
};
struct _PCI_MSI_32BIT_DATA {
USHORT MessageData ;
ULONG Unused ;
};
union __anonunion_Data_109 {
struct _PCI_MSI_64BIT_DATA Bit64 ;
struct _PCI_MSI_32BIT_DATA Bit32 ;
};
struct _PCI_MSI_CAPABILITY {
PCI_CAPABILITIES_HEADER Header ;
struct _PCI_MSI_MESSAGE_CONTROL MessageControl ;
union __anonunion_MessageAddress_108 MessageAddress ;
union __anonunion_Data_109 Data ;
};
typedef struct _PCI_MSI_CAPABILITY PCI_MSI_CAPABILITY;
typedef struct _PCI_MSI_CAPABILITY *PPCI_PCI_CAPABILITY;
typedef void (*PciPin2Line)(struct _BUS_HANDLER *BusHandler , struct _BUS_HANDLER *RootHandler , PCI_SLOT_NUMBER SlotNumber , PPCI_COMMON_CONFIG PciData );
typedef void (*PciLine2Pin)(struct _BUS_HANDLER *BusHandler , struct _BUS_HANDLER *RootHandler , PCI_SLOT_NUMBER SlotNumber , PPCI_COMMON_CONFIG PciNewData , PPCI_COMMON_CONFIG PciOldData );
typedef void (*PciReadWriteConfig)(struct _BUS_HANDLER *BusHandler , PCI_SLOT_NUMBER Slot , PVOID Buffer , ULONG Offset , ULONG Length );
struct _PCIBUSDATA {
ULONG Tag ;
ULONG Version ;
void (*ReadConfig)(struct _BUS_HANDLER *BusHandler , PCI_SLOT_NUMBER Slot , PVOID Buffer , ULONG Offset , ULONG Length ) ;
void (*WriteConfig)(struct _BUS_HANDLER *BusHandler , PCI_SLOT_NUMBER Slot , PVOID Buffer , ULONG Offset , ULONG Length ) ;
void (*Pin2Line)(struct _BUS_HANDLER *BusHandler , struct _BUS_HANDLER *RootHandler , PCI_SLOT_NUMBER SlotNumber , PPCI_COMMON_CONFIG PciData ) ;
void (*Line2Pin)(struct _BUS_HANDLER *BusHandler , struct _BUS_HANDLER *RootHandler , PCI_SLOT_NUMBER SlotNumber , PPCI_COMMON_CONFIG PciNewData , PPCI_COMMON_CONFIG PciOldData ) ;
PCI_SLOT_NUMBER ParentSlot ;
PVOID Reserved[4] ;
};
typedef struct _PCIBUSDATA PCIBUSDATA;
typedef struct _PCIBUSDATA *PPCIBUSDATA;
typedef ULONG (*PCI_READ_WRITE_CONFIG)(PVOID Context , UCHAR BusOffset , ULONG Slot , PVOID Buffer , ULONG Offset , ULONG Length );
typedef void (*PCI_PIN_TO_LINE)(PVOID Context , PPCI_COMMON_CONFIG PciData );
typedef void (*PCI_LINE_TO_PIN)(PVOID Context , PPCI_COMMON_CONFIG PciNewData , PPCI_COMMON_CONFIG PciOldData );
struct _PCI_BUS_INTERFACE_STANDARD {
USHORT Size ;
USHORT Version ;
PVOID Context ;
void (*InterfaceReference)(PVOID Context ) ;
void (*InterfaceDereference)(PVOID Context ) ;
ULONG (*ReadConfig)(PVOID Context , UCHAR BusOffset , ULONG Slot , PVOID Buffer , ULONG Offset , ULONG Length ) ;
ULONG (*WriteConfig)(PVOID Context , UCHAR BusOffset , ULONG Slot , PVOID Buffer , ULONG Offset , ULONG Length ) ;
void (*PinToLine)(PVOID Context , PPCI_COMMON_CONFIG PciData ) ;
void (*LineToPin)(PVOID Context , PPCI_COMMON_CONFIG PciNewData , PPCI_COMMON_CONFIG PciOldData ) ;
};
typedef struct _PCI_BUS_INTERFACE_STANDARD PCI_BUS_INTERFACE_STANDARD;
typedef struct _PCI_BUS_INTERFACE_STANDARD *PPCI_BUS_INTERFACE_STANDARD;
typedef BOOLEAN (*PPCI_IS_DEVICE_PRESENT)(USHORT VendorID , USHORT DeviceID , UCHAR RevisionID , USHORT SubVendorID , USHORT SubSystemID , ULONG Flags );
struct _PCI_DEVICE_PRESENT_INTERFACE {
USHORT Size ;
USHORT Version ;
PVOID Context ;
void (*InterfaceReference)(PVOID Context ) ;
void (*InterfaceDereference)(PVOID Context ) ;
BOOLEAN (*IsDevicePresent)(USHORT VendorID , USHORT DeviceID , UCHAR RevisionID , USHORT SubVendorID , USHORT SubSystemID , ULONG Flags ) ;
};
typedef struct _PCI_DEVICE_PRESENT_INTERFACE PCI_DEVICE_PRESENT_INTERFACE;
typedef struct _PCI_DEVICE_PRESENT_INTERFACE *PPCI_DEVICE_PRESENT_INTERFACE;
struct _SCSI_PASS_THROUGH {
USHORT Length ;
UCHAR ScsiStatus ;
UCHAR PathId ;
UCHAR TargetId ;
UCHAR Lun ;
UCHAR CdbLength ;
UCHAR SenseInfoLength ;
UCHAR DataIn ;
ULONG DataTransferLength ;
ULONG TimeOutValue ;
ULONG_PTR DataBufferOffset ;
ULONG SenseInfoOffset ;
UCHAR Cdb[16] ;
};
typedef struct _SCSI_PASS_THROUGH SCSI_PASS_THROUGH;
typedef struct _SCSI_PASS_THROUGH *PSCSI_PASS_THROUGH;
struct _SCSI_PASS_THROUGH_DIRECT {
USHORT Length ;
UCHAR ScsiStatus ;
UCHAR PathId ;
UCHAR TargetId ;
UCHAR Lun ;
UCHAR CdbLength ;
UCHAR SenseInfoLength ;
UCHAR DataIn ;
ULONG DataTransferLength ;
ULONG TimeOutValue ;
PVOID DataBuffer ;
ULONG SenseInfoOffset ;
UCHAR Cdb[16] ;
};
typedef struct _SCSI_PASS_THROUGH_DIRECT SCSI_PASS_THROUGH_DIRECT;
typedef struct _SCSI_PASS_THROUGH_DIRECT *PSCSI_PASS_THROUGH_DIRECT;
struct _SCSI_BUS_DATA {
UCHAR NumberOfLogicalUnits ;
UCHAR InitiatorBusId ;
ULONG InquiryDataOffset ;
};
typedef struct _SCSI_BUS_DATA SCSI_BUS_DATA;
typedef struct _SCSI_BUS_DATA *PSCSI_BUS_DATA;
struct _SCSI_ADAPTER_BUS_INFO {
UCHAR NumberOfBuses ;
SCSI_BUS_DATA BusData[1] ;
};
typedef struct _SCSI_ADAPTER_BUS_INFO SCSI_ADAPTER_BUS_INFO;
typedef struct _SCSI_ADAPTER_BUS_INFO *PSCSI_ADAPTER_BUS_INFO;
struct _SCSI_INQUIRY_DATA {
UCHAR PathId ;
UCHAR TargetId ;
UCHAR Lun ;
BOOLEAN DeviceClaimed ;
ULONG InquiryDataLength ;
ULONG NextInquiryDataOffset ;
UCHAR InquiryData[1] ;
};
typedef struct _SCSI_INQUIRY_DATA SCSI_INQUIRY_DATA;
typedef struct _SCSI_INQUIRY_DATA *PSCSI_INQUIRY_DATA;
struct _SRB_IO_CONTROL {
ULONG HeaderLength ;
UCHAR Signature[8] ;
ULONG Timeout ;
ULONG ControlCode ;
ULONG ReturnCode ;
ULONG Length ;
};
typedef struct _SRB_IO_CONTROL SRB_IO_CONTROL;
typedef struct _SRB_IO_CONTROL *PSRB_IO_CONTROL;
struct _IO_SCSI_CAPABILITIES {
ULONG Length ;
ULONG MaximumTransferLength ;
ULONG MaximumPhysicalPages ;
ULONG SupportedAsynchronousEvents ;
ULONG AlignmentMask ;
BOOLEAN TaggedQueuing ;
BOOLEAN AdapterScansDown ;
BOOLEAN AdapterUsesPio ;
};
typedef struct _IO_SCSI_CAPABILITIES IO_SCSI_CAPABILITIES;
typedef struct _IO_SCSI_CAPABILITIES *PIO_SCSI_CAPABILITIES;
struct _SCSI_ADDRESS {
ULONG Length ;
UCHAR PortNumber ;
UCHAR PathId ;
UCHAR TargetId ;
UCHAR Lun ;
};
typedef struct _SCSI_ADDRESS SCSI_ADDRESS;
typedef struct _SCSI_ADDRESS *PSCSI_ADDRESS;
struct _DUMP_POINTERS {
struct _ADAPTER_OBJECT *AdapterObject ;
PVOID MappedRegisterBase ;
PVOID DumpData ;
PVOID CommonBufferVa ;
LARGE_INTEGER CommonBufferPa ;
ULONG CommonBufferSize ;
BOOLEAN AllocateCommonBuffers ;
UCHAR Spare1[3] ;
PVOID DeviceObject ;
};
typedef struct _DUMP_POINTERS DUMP_POINTERS;
typedef struct _DUMP_POINTERS *PDUMP_POINTERS;
struct _STORAGE_DEVICE_NUMBER {
ULONG DeviceType ;
ULONG DeviceNumber ;
ULONG PartitionNumber ;
};
typedef struct _STORAGE_DEVICE_NUMBER STORAGE_DEVICE_NUMBER;
typedef struct _STORAGE_DEVICE_NUMBER *PSTORAGE_DEVICE_NUMBER;
struct _STORAGE_BUS_RESET_REQUEST {
UCHAR PathId ;
};
typedef struct _STORAGE_BUS_RESET_REQUEST STORAGE_BUS_RESET_REQUEST;
typedef struct _STORAGE_BUS_RESET_REQUEST *PSTORAGE_BUS_RESET_REQUEST;
struct _PREVENT_MEDIA_REMOVAL {
BOOLEAN PreventMediaRemoval ;
};
typedef struct _PREVENT_MEDIA_REMOVAL PREVENT_MEDIA_REMOVAL;
typedef struct _PREVENT_MEDIA_REMOVAL *PPREVENT_MEDIA_REMOVAL;
struct _TAPE_STATISTICS {
ULONG Version ;
ULONG Flags ;
LARGE_INTEGER RecoveredWrites ;
LARGE_INTEGER UnrecoveredWrites ;
LARGE_INTEGER RecoveredReads ;
LARGE_INTEGER UnrecoveredReads ;
UCHAR CompressionRatioReads ;
UCHAR CompressionRatioWrites ;
};
typedef struct _TAPE_STATISTICS TAPE_STATISTICS;
typedef struct _TAPE_STATISTICS *PTAPE_STATISTICS;
struct _TAPE_GET_STATISTICS {
ULONG Operation ;
};
typedef struct _TAPE_GET_STATISTICS TAPE_GET_STATISTICS;
typedef struct _TAPE_GET_STATISTICS *PTAPE_GET_STATISTICS;
typedef enum _STORAGE_MEDIA_TYPE STORAGE_MEDIA_TYPE;
typedef enum _STORAGE_MEDIA_TYPE *PSTORAGE_MEDIA_TYPE;
typedef enum _STORAGE_BUS_TYPE STORAGE_BUS_TYPE;
typedef enum _STORAGE_BUS_TYPE *PSTORAGE_BUS_TYPE;
struct __anonstruct_DiskInfo_111 {
LARGE_INTEGER Cylinders ;
STORAGE_MEDIA_TYPE MediaType ;
ULONG TracksPerCylinder ;
ULONG SectorsPerTrack ;
ULONG BytesPerSector ;
ULONG NumberMediaSides ;
ULONG MediaCharacteristics ;
};
struct __anonstruct_RemovableDiskInfo_112 {
LARGE_INTEGER Cylinders ;
STORAGE_MEDIA_TYPE MediaType ;
ULONG TracksPerCylinder ;
ULONG SectorsPerTrack ;
ULONG BytesPerSector ;
ULONG NumberMediaSides ;
ULONG MediaCharacteristics ;
};
struct __anonstruct_ScsiInformation_115 {
UCHAR MediumType ;
UCHAR DensityCode ;
};
union __anonunion_BusSpecificData_114 {
struct __anonstruct_ScsiInformation_115 ScsiInformation ;
};
struct __anonstruct_TapeInfo_113 {
STORAGE_MEDIA_TYPE MediaType ;
ULONG MediaCharacteristics ;
ULONG CurrentBlockSize ;
STORAGE_BUS_TYPE BusType ;
union __anonunion_BusSpecificData_114 BusSpecificData ;
};
union __anonunion_DeviceSpecific_110 {
struct __anonstruct_DiskInfo_111 DiskInfo ;
struct __anonstruct_RemovableDiskInfo_112 RemovableDiskInfo ;
struct __anonstruct_TapeInfo_113 TapeInfo ;
};
struct _DEVICE_MEDIA_INFO {
union __anonunion_DeviceSpecific_110 DeviceSpecific ;
};
typedef struct _DEVICE_MEDIA_INFO DEVICE_MEDIA_INFO;
typedef struct _DEVICE_MEDIA_INFO *PDEVICE_MEDIA_INFO;
struct _GET_MEDIA_TYPES {
ULONG DeviceType ;
ULONG MediaInfoCount ;
DEVICE_MEDIA_INFO MediaInfo[1] ;
};
typedef struct _GET_MEDIA_TYPES GET_MEDIA_TYPES;
typedef struct _GET_MEDIA_TYPES *PGET_MEDIA_TYPES;
struct _STORAGE_PREDICT_FAILURE {
ULONG PredictFailure ;
UCHAR VendorSpecific[512] ;
};
typedef struct _STORAGE_PREDICT_FAILURE STORAGE_PREDICT_FAILURE;
typedef struct _STORAGE_PREDICT_FAILURE *PSTORAGE_PREDICT_FAILURE;
typedef enum _STORAGE_QUERY_TYPE STORAGE_QUERY_TYPE;
typedef enum _STORAGE_QUERY_TYPE *PSTORAGE_QUERY_TYPE;
typedef enum _STORAGE_PROPERTY_ID STORAGE_PROPERTY_ID;
typedef enum _STORAGE_PROPERTY_ID *PSTORAGE_PROPERTY_ID;
struct _STORAGE_PROPERTY_QUERY {
STORAGE_PROPERTY_ID PropertyId ;
STORAGE_QUERY_TYPE QueryType ;
UCHAR AdditionalParameters[1] ;
};
typedef struct _STORAGE_PROPERTY_QUERY STORAGE_PROPERTY_QUERY;
typedef struct _STORAGE_PROPERTY_QUERY *PSTORAGE_PROPERTY_QUERY;
struct _STORAGE_DESCRIPTOR_HEADER {
ULONG Version ;
ULONG Size ;
};
typedef struct _STORAGE_DESCRIPTOR_HEADER STORAGE_DESCRIPTOR_HEADER;
typedef struct _STORAGE_DESCRIPTOR_HEADER *PSTORAGE_DESCRIPTOR_HEADER;
struct _STORAGE_DEVICE_DESCRIPTOR {
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
};
typedef struct _STORAGE_DEVICE_DESCRIPTOR STORAGE_DEVICE_DESCRIPTOR;
typedef struct _STORAGE_DEVICE_DESCRIPTOR *PSTORAGE_DEVICE_DESCRIPTOR;
struct _STORAGE_ADAPTER_DESCRIPTOR {
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
};
typedef struct _STORAGE_ADAPTER_DESCRIPTOR STORAGE_ADAPTER_DESCRIPTOR;
typedef struct _STORAGE_ADAPTER_DESCRIPTOR *PSTORAGE_ADAPTER_DESCRIPTOR;
struct _TRACK_DATA {
UCHAR Reserved ;
UCHAR Control ;
UCHAR Adr ;
UCHAR TrackNumber ;
UCHAR Reserved1 ;
UCHAR Address[4] ;
};
typedef struct _TRACK_DATA TRACK_DATA;
typedef struct _TRACK_DATA *PTRACK_DATA;
struct _CDROM_TOC {
UCHAR Length[2] ;
UCHAR FirstTrack ;
UCHAR LastTrack ;
TRACK_DATA TrackData[100] ;
};
typedef struct _CDROM_TOC CDROM_TOC;
typedef struct _CDROM_TOC *PCDROM_TOC;
struct _CDROM_PLAY_AUDIO_MSF {
UCHAR StartingM ;
UCHAR StartingS ;
UCHAR StartingF ;
UCHAR EndingM ;
UCHAR EndingS ;
UCHAR EndingF ;
};
typedef struct _CDROM_PLAY_AUDIO_MSF CDROM_PLAY_AUDIO_MSF;
typedef struct _CDROM_PLAY_AUDIO_MSF *PCDROM_PLAY_AUDIO_MSF;
struct _CDROM_SEEK_AUDIO_MSF {
UCHAR M ;
UCHAR S ;
UCHAR F ;
};
typedef struct _CDROM_SEEK_AUDIO_MSF CDROM_SEEK_AUDIO_MSF;
typedef struct _CDROM_SEEK_AUDIO_MSF *PCDROM_SEEK_AUDIO_MSF;
struct _CDROM_DISK_DATA {
ULONG DiskData ;
};
typedef struct _CDROM_DISK_DATA CDROM_DISK_DATA;
typedef struct _CDROM_DISK_DATA *PCDROM_DISK_DATA;
struct _CDROM_SUB_Q_DATA_FORMAT {
UCHAR Format ;
UCHAR Track ;
};
typedef struct _CDROM_SUB_Q_DATA_FORMAT CDROM_SUB_Q_DATA_FORMAT;
typedef struct _CDROM_SUB_Q_DATA_FORMAT *PCDROM_SUB_Q_DATA_FORMAT;
struct _SUB_Q_HEADER {
UCHAR Reserved ;
UCHAR AudioStatus ;
UCHAR DataLength[2] ;
};
typedef struct _SUB_Q_HEADER SUB_Q_HEADER;
typedef struct _SUB_Q_HEADER *PSUB_Q_HEADER;
struct _SUB_Q_CURRENT_POSITION {
SUB_Q_HEADER Header ;
UCHAR FormatCode ;
UCHAR Control ;
UCHAR ADR ;
UCHAR TrackNumber ;
UCHAR IndexNumber ;
UCHAR AbsoluteAddress[4] ;
UCHAR TrackRelativeAddress[4] ;
};
typedef struct _SUB_Q_CURRENT_POSITION SUB_Q_CURRENT_POSITION;
typedef struct _SUB_Q_CURRENT_POSITION *PSUB_Q_CURRENT_POSITION;
struct _SUB_Q_MEDIA_CATALOG_NUMBER {
SUB_Q_HEADER Header ;
UCHAR FormatCode ;
UCHAR Reserved[3] ;
UCHAR Reserved1 ;
UCHAR Mcval ;
UCHAR MediaCatalog[15] ;
};
typedef struct _SUB_Q_MEDIA_CATALOG_NUMBER SUB_Q_MEDIA_CATALOG_NUMBER;
typedef struct _SUB_Q_MEDIA_CATALOG_NUMBER *PSUB_Q_MEDIA_CATALOG_NUMBER;
struct _SUB_Q_TRACK_ISRC {
SUB_Q_HEADER Header ;
UCHAR FormatCode ;
UCHAR Reserved0 ;
UCHAR Track ;
UCHAR Reserved1 ;
UCHAR Reserved2 ;
UCHAR Tcval ;
UCHAR TrackIsrc[15] ;
};
typedef struct _SUB_Q_TRACK_ISRC SUB_Q_TRACK_ISRC;
typedef struct _SUB_Q_TRACK_ISRC *PSUB_Q_TRACK_ISRC;
union _SUB_Q_CHANNEL_DATA {
SUB_Q_CURRENT_POSITION CurrentPosition ;
SUB_Q_MEDIA_CATALOG_NUMBER MediaCatalog ;
SUB_Q_TRACK_ISRC TrackIsrc ;
};
typedef union _SUB_Q_CHANNEL_DATA SUB_Q_CHANNEL_DATA;
typedef union _SUB_Q_CHANNEL_DATA *PSUB_Q_CHANNEL_DATA;
struct _CDROM_AUDIO_CONTROL {
UCHAR LbaFormat ;
USHORT LogicalBlocksPerSecond ;
};
typedef struct _CDROM_AUDIO_CONTROL CDROM_AUDIO_CONTROL;
typedef struct _CDROM_AUDIO_CONTROL *PCDROM_AUDIO_CONTROL;
struct _VOLUME_CONTROL {
UCHAR PortVolume[4] ;
};
typedef struct _VOLUME_CONTROL VOLUME_CONTROL;
typedef struct _VOLUME_CONTROL *PVOLUME_CONTROL;
typedef enum _TRACK_MODE_TYPE TRACK_MODE_TYPE;
typedef enum _TRACK_MODE_TYPE *PTRACK_MODE_TYPE;
struct __RAW_READ_INFO {
LARGE_INTEGER DiskOffset ;
ULONG SectorCount ;
TRACK_MODE_TYPE TrackMode ;
};
typedef struct __RAW_READ_INFO RAW_READ_INFO;
typedef struct __RAW_READ_INFO *PRAW_READ_INFO;
typedef char *va_list;
struct _iobuf {
char *_ptr ;
int _cnt ;
char *_base ;
int _flag ;
int _file ;
int _charbuf ;
int _bufsiz ;
char *_tmpfname ;
};
typedef struct _iobuf FILE;
typedef PHYSICAL_ADDRESS SCSI_PHYSICAL_ADDRESS;
typedef PHYSICAL_ADDRESS *PSCSI_PHYSICAL_ADDRESS;
struct _ACCESS_RANGE {
SCSI_PHYSICAL_ADDRESS RangeStart ;
ULONG RangeLength ;
BOOLEAN RangeInMemory ;
};
typedef struct _ACCESS_RANGE ACCESS_RANGE;
typedef struct _ACCESS_RANGE *PACCESS_RANGE;
struct _PORT_CONFIGURATION_INFORMATION {
ULONG Length ;
ULONG SystemIoBusNumber ;
INTERFACE_TYPE AdapterInterfaceType ;
ULONG BusInterruptLevel ;
ULONG BusInterruptVector ;
KINTERRUPT_MODE InterruptMode ;
ULONG MaximumTransferLength ;
ULONG NumberOfPhysicalBreaks ;
ULONG DmaChannel ;
ULONG DmaPort ;
DMA_WIDTH DmaWidth ;
DMA_SPEED DmaSpeed ;
ULONG AlignmentMask ;
ULONG NumberOfAccessRanges ;
ACCESS_RANGE (*AccessRanges)[] ;
PVOID Reserved ;
UCHAR NumberOfBuses ;
CCHAR InitiatorBusId[8] ;
BOOLEAN ScatterGather ;
BOOLEAN Master ;
BOOLEAN CachesData ;
BOOLEAN AdapterScansDown ;
BOOLEAN AtdiskPrimaryClaimed ;
BOOLEAN AtdiskSecondaryClaimed ;
BOOLEAN Dma32BitAddresses ;
BOOLEAN DemandMode ;
BOOLEAN MapBuffers ;
BOOLEAN NeedPhysicalAddresses ;
BOOLEAN TaggedQueuing ;
BOOLEAN AutoRequestSense ;
BOOLEAN MultipleRequestPerLu ;
BOOLEAN ReceiveEvent ;
BOOLEAN RealModeInitialized ;
BOOLEAN BufferAccessScsiPortControlled ;
UCHAR MaximumNumberOfTargets ;
UCHAR ReservedUchars[2] ;
ULONG SlotNumber ;
ULONG BusInterruptLevel2 ;
ULONG BusInterruptVector2 ;
KINTERRUPT_MODE InterruptMode2 ;
ULONG DmaChannel2 ;
ULONG DmaPort2 ;
DMA_WIDTH DmaWidth2 ;
DMA_SPEED DmaSpeed2 ;
ULONG DeviceExtensionSize ;
ULONG SpecificLuExtensionSize ;
ULONG SrbExtensionSize ;
UCHAR Dma64BitAddresses ;
BOOLEAN ResetTargetSupported ;
UCHAR MaximumNumberOfLogicalUnits ;
BOOLEAN WmiDataProvider ;
};
typedef struct _PORT_CONFIGURATION_INFORMATION PORT_CONFIGURATION_INFORMATION;
typedef struct _PORT_CONFIGURATION_INFORMATION *PPORT_CONFIGURATION_INFORMATION;
typedef enum _SCSI_ADAPTER_CONTROL_TYPE SCSI_ADAPTER_CONTROL_TYPE;
typedef enum _SCSI_ADAPTER_CONTROL_TYPE *PSCSI_ADAPTER_CONTROL_TYPE;
typedef enum _SCSI_ADAPTER_CONTROL_STATUS SCSI_ADAPTER_CONTROL_STATUS;
typedef enum _SCSI_ADAPTER_CONTROL_STATUS *PSCSI_ADAPTER_CONTROL_STATUS;
struct _SCSI_SUPPORTED_CONTROL_TYPE_LIST {
ULONG MaxControlType ;
BOOLEAN SupportedTypeList[0] ;
};
typedef struct _SCSI_SUPPORTED_CONTROL_TYPE_LIST SCSI_SUPPORTED_CONTROL_TYPE_LIST;
typedef struct _SCSI_SUPPORTED_CONTROL_TYPE_LIST *PSCSI_SUPPORTED_CONTROL_TYPE_LIST;
union __anonunion____missing_field_name_116 {
ULONG InternalStatus ;
ULONG QueueSortKey ;
};
struct _SCSI_REQUEST_BLOCK {
USHORT Length ;
UCHAR Function ;
UCHAR SrbStatus ;
UCHAR ScsiStatus ;
UCHAR PathId ;
UCHAR TargetId ;
UCHAR Lun ;
UCHAR QueueTag ;
UCHAR QueueAction ;
UCHAR CdbLength ;
UCHAR SenseInfoBufferLength ;
ULONG SrbFlags ;
ULONG DataTransferLength ;
ULONG TimeOutValue ;
PVOID DataBuffer ;
PVOID SenseInfoBuffer ;
struct _SCSI_REQUEST_BLOCK *NextSrb ;
PVOID OriginalRequest ;
PVOID SrbExtension ;
union __anonunion____missing_field_name_116 __annonCompField21 ;
UCHAR Cdb[16] ;
};
typedef struct _SCSI_REQUEST_BLOCK SCSI_REQUEST_BLOCK;
typedef struct _SCSI_REQUEST_BLOCK *PSCSI_REQUEST_BLOCK;
struct _SCSI_WMI_REQUEST_BLOCK {
USHORT Length ;
UCHAR Function ;
UCHAR SrbStatus ;
UCHAR WMISubFunction ;
UCHAR PathId ;
UCHAR TargetId ;
UCHAR Lun ;
UCHAR Reserved1 ;
UCHAR WMIFlags ;
UCHAR Reserved2[2] ;
ULONG SrbFlags ;
ULONG DataTransferLength ;
ULONG TimeOutValue ;
PVOID DataBuffer ;
PVOID DataPath ;
PVOID Reserved3 ;
PVOID OriginalRequest ;
PVOID SrbExtension ;
ULONG Reserved4 ;
UCHAR Reserved5[16] ;
};
typedef struct _SCSI_WMI_REQUEST_BLOCK SCSI_WMI_REQUEST_BLOCK;
typedef struct _SCSI_WMI_REQUEST_BLOCK *PSCSI_WMI_REQUEST_BLOCK;
typedef BOOLEAN (*PHW_INITIALIZE)(PVOID DeviceExtension );
typedef BOOLEAN (*PHW_STARTIO)(PVOID DeviceExtension , PSCSI_REQUEST_BLOCK Srb );
typedef BOOLEAN (*PHW_INTERRUPT)(PVOID DeviceExtension );
typedef void (*PHW_TIMER)(PVOID DeviceExtension );
typedef void (*PHW_DMA_STARTED)(PVOID DeviceExtension );
typedef ULONG (*PHW_FIND_ADAPTER)(PVOID DeviceExtension , PVOID HwContext , PVOID BusInformation , PCHAR ArgumentString , PPORT_CONFIGURATION_INFORMATION ConfigInfo , PBOOLEAN Again );
typedef BOOLEAN (*PHW_RESET_BUS)(PVOID DeviceExtension , ULONG PathId );
typedef BOOLEAN (*PHW_ADAPTER_STATE)(PVOID DeviceExtension , PVOID Context , BOOLEAN SaveState );
typedef SCSI_ADAPTER_CONTROL_STATUS (*PHW_ADAPTER_CONTROL)(PVOID DeviceExtension , SCSI_ADAPTER_CONTROL_TYPE ControlType , PVOID Parameters );
typedef enum _SCSI_NOTIFICATION_TYPE SCSI_NOTIFICATION_TYPE;
typedef enum _SCSI_NOTIFICATION_TYPE *PSCSI_NOTIFICATION_TYPE;
struct _HW_INITIALIZATION_DATA {
ULONG HwInitializationDataSize ;
INTERFACE_TYPE AdapterInterfaceType ;
BOOLEAN (*HwInitialize)(PVOID DeviceExtension ) ;
BOOLEAN (*HwStartIo)(PVOID DeviceExtension , PSCSI_REQUEST_BLOCK Srb ) ;
BOOLEAN (*HwInterrupt)(PVOID DeviceExtension ) ;
ULONG (*HwFindAdapter)(PVOID DeviceExtension , PVOID HwContext , PVOID BusInformation , PCHAR ArgumentString , PPORT_CONFIGURATION_INFORMATION ConfigInfo , PBOOLEAN Again ) ;
BOOLEAN (*HwResetBus)(PVOID DeviceExtension , ULONG PathId ) ;
void (*HwDmaStarted)(PVOID DeviceExtension ) ;
BOOLEAN (*HwAdapterState)(PVOID DeviceExtension , PVOID Context , BOOLEAN SaveState ) ;
ULONG DeviceExtensionSize ;
ULONG SpecificLuExtensionSize ;
ULONG SrbExtensionSize ;
ULONG NumberOfAccessRanges ;
PVOID Reserved ;
BOOLEAN MapBuffers ;
BOOLEAN NeedPhysicalAddresses ;
BOOLEAN TaggedQueuing ;
BOOLEAN AutoRequestSense ;
BOOLEAN MultipleRequestPerLu ;
BOOLEAN ReceiveEvent ;
USHORT VendorIdLength ;
PVOID VendorId ;
USHORT ReservedUshort ;
USHORT DeviceIdLength ;
PVOID DeviceId ;
SCSI_ADAPTER_CONTROL_STATUS (*HwAdapterControl)(PVOID DeviceExtension , SCSI_ADAPTER_CONTROL_TYPE ControlType , PVOID Parameters ) ;
};
typedef struct _HW_INITIALIZATION_DATA HW_INITIALIZATION_DATA;
typedef struct _HW_INITIALIZATION_DATA *PHW_INITIALIZATION_DATA;
struct _CDB6GENERIC {
UCHAR OperationCode ;
UCHAR Immediate ;
UCHAR CommandUniqueBits ;
UCHAR LogicalUnitNumber ;
UCHAR CommandUniqueBytes[3] ;
UCHAR Link ;
UCHAR Flag ;
UCHAR Reserved ;
UCHAR VendorUnique ;
};
struct _CDB6READWRITE {
UCHAR OperationCode ;
UCHAR LogicalBlockMsb1 ;
UCHAR LogicalUnitNumber ;
UCHAR LogicalBlockMsb0 ;
UCHAR LogicalBlockLsb ;
UCHAR TransferBlocks ;
UCHAR Control ;
};
struct _CDB6INQUIRY {
UCHAR OperationCode ;
UCHAR Reserved1 ;
UCHAR LogicalUnitNumber ;
UCHAR PageCode ;
UCHAR IReserved ;
UCHAR AllocationLength ;
UCHAR Control ;
};
struct _CDB6VERIFY {
UCHAR OperationCode ;
UCHAR Fixed ;
UCHAR ByteCompare ;
UCHAR Immediate ;
UCHAR Reserved ;
UCHAR LogicalUnitNumber ;
UCHAR VerificationLength[3] ;
UCHAR Control ;
};
struct _CDB6FORMAT {
UCHAR OperationCode ;
UCHAR FormatControl ;
UCHAR LogicalUnitNumber ;
UCHAR FReserved1 ;
UCHAR InterleaveMsb ;
UCHAR InterleaveLsb ;
UCHAR FReserved2 ;
};
struct _CDB10 {
UCHAR OperationCode ;
UCHAR RelativeAddress ;
UCHAR Reserved1 ;
UCHAR ForceUnitAccess ;
UCHAR DisablePageOut ;
UCHAR LogicalUnitNumber ;
UCHAR LogicalBlockByte0 ;
UCHAR LogicalBlockByte1 ;
UCHAR LogicalBlockByte2 ;
UCHAR LogicalBlockByte3 ;
UCHAR Reserved2 ;
UCHAR TransferBlocksMsb ;
UCHAR TransferBlocksLsb ;
UCHAR Control ;
};
struct _CDB12 {
UCHAR OperationCode ;
UCHAR RelativeAddress ;
UCHAR Reserved1 ;
UCHAR ForceUnitAccess ;
UCHAR DisablePageOut ;
UCHAR LogicalUnitNumber ;
UCHAR LogicalBlock[4] ;
UCHAR TransferLength[4] ;
UCHAR Reserved2 ;
UCHAR Control ;
};
struct _PAUSE_RESUME {
UCHAR OperationCode ;
UCHAR Reserved1 ;
UCHAR LogicalUnitNumber ;
UCHAR Reserved2[6] ;
UCHAR Action ;
UCHAR Control ;
};
struct _READ_TOC {
UCHAR OperationCode ;
UCHAR Reserved0 ;
UCHAR Msf ;
UCHAR Reserved1 ;
UCHAR LogicalUnitNumber ;
UCHAR Format2 ;
UCHAR Reserved2 ;
UCHAR Reserved3[3] ;
UCHAR StartingTrack ;
UCHAR AllocationLength[2] ;
UCHAR Control ;
UCHAR Format ;
};
struct _READ_DISK_INFORMATION {
UCHAR OperationCode ;
UCHAR Reserved1 ;
UCHAR Lun ;
UCHAR Reserved2[5] ;
UCHAR AllocationLength[2] ;
UCHAR Control ;
};
struct _READ_TRACK_INFORMATION {
UCHAR OperationCode ;
UCHAR Track ;
UCHAR Reserved1 ;
UCHAR Reserved2 ;
UCHAR Lun ;
UCHAR BlockAddress[4] ;
UCHAR Reserved3 ;
UCHAR AllocationLength[2] ;
UCHAR Control ;
};
struct _READ_HEADER {
UCHAR OperationCode ;
UCHAR Reserved1 ;
UCHAR Msf ;
UCHAR Reserved2 ;
UCHAR Lun ;
UCHAR LogicalBlockAddress[4] ;
UCHAR Reserved3 ;
UCHAR AllocationLength[2] ;
UCHAR Control ;
};
struct _PLAY_AUDIO {
UCHAR OperationCode ;
UCHAR Reserved1 ;
UCHAR LogicalUnitNumber ;
UCHAR StartingBlockAddress[4] ;
UCHAR Reserved2 ;
UCHAR PlayLength[2] ;
UCHAR Control ;
};
struct _PLAY_AUDIO_MSF {
UCHAR OperationCode ;
UCHAR Reserved1 ;
UCHAR LogicalUnitNumber ;
UCHAR Reserved2 ;
UCHAR StartingM ;
UCHAR StartingS ;
UCHAR StartingF ;
UCHAR EndingM ;
UCHAR EndingS ;
UCHAR EndingF ;
UCHAR Control ;
};
struct _LBA {
UCHAR StartingBlockAddress[4] ;
UCHAR PlayLength[4] ;
};
struct _MSF {
UCHAR Reserved1 ;
UCHAR StartingM ;
UCHAR StartingS ;
UCHAR StartingF ;
UCHAR EndingM ;
UCHAR EndingS ;
UCHAR EndingF ;
UCHAR Reserved2 ;
};
union __anonunion____missing_field_name_117 {
struct _LBA LBA ;
struct _MSF MSF ;
};
struct _PLAY_CD {
UCHAR OperationCode ;
UCHAR Reserved1 ;
UCHAR CMSF ;
UCHAR ExpectedSectorType ;
UCHAR Lun ;
union __anonunion____missing_field_name_117 __annonCompField22 ;
UCHAR Audio ;
UCHAR Composite ;
UCHAR Port1 ;
UCHAR Port2 ;
UCHAR Reserved2 ;
UCHAR Speed ;
UCHAR Control ;
};
struct _SCAN_CD {
UCHAR OperationCode ;
UCHAR RelativeAddress ;
UCHAR Reserved1 ;
UCHAR Direct ;
UCHAR Lun ;
UCHAR StartingAddress[4] ;
UCHAR Reserved2[3] ;
UCHAR Reserved3 ;
UCHAR Type ;
UCHAR Reserved4 ;
UCHAR Control ;
};
struct _STOP_PLAY_SCAN {
UCHAR OperationCode ;
UCHAR Reserved1 ;
UCHAR Lun ;
UCHAR Reserved2[7] ;
UCHAR Control ;
};
struct _SUBCHANNEL {
UCHAR OperationCode ;
UCHAR Reserved0 ;
UCHAR Msf ;
UCHAR Reserved1 ;
UCHAR LogicalUnitNumber ;
UCHAR Reserved2 ;
UCHAR SubQ ;
UCHAR Reserved3 ;
UCHAR Format ;
UCHAR Reserved4[2] ;
UCHAR TrackNumber ;
UCHAR AllocationLength[2] ;
UCHAR Control ;
};
struct _READ_CD {
UCHAR OperationCode ;
UCHAR RelativeAddress ;
UCHAR Reserved0 ;
UCHAR ExpectedSectorType ;
UCHAR Lun ;
UCHAR StartingLBA[4] ;
UCHAR TransferBlocks[3] ;
UCHAR Reserved2 ;
UCHAR ErrorFlags ;
UCHAR IncludeEDC ;
UCHAR IncludeUserData ;
UCHAR HeaderCode ;
UCHAR IncludeSyncData ;
UCHAR SubChannelSelection ;
UCHAR Reserved3 ;
UCHAR Control ;
};
struct _READ_CD_MSF {
UCHAR OperationCode ;
UCHAR RelativeAddress ;
UCHAR Reserved1 ;
UCHAR ExpectedSectorType ;
UCHAR Lun ;
UCHAR Reserved2 ;
UCHAR StartingM ;
UCHAR StartingS ;
UCHAR StartingF ;
UCHAR EndingM ;
UCHAR EndingS ;
UCHAR EndingF ;
UCHAR Reserved3 ;
UCHAR Reserved4 ;
UCHAR ErrorFlags ;
UCHAR IncludeEDC ;
UCHAR IncludeUserData ;
UCHAR HeaderCode ;
UCHAR IncludeSyncData ;
UCHAR SubChannelSelection ;
UCHAR Reserved5 ;
UCHAR Control ;
};
struct _PLXTR_READ_CDDA {
UCHAR OperationCode ;
UCHAR Reserved0 ;
UCHAR LogicalUnitNumber ;
UCHAR LogicalBlockByte0 ;
UCHAR LogicalBlockByte1 ;
UCHAR LogicalBlockByte2 ;
UCHAR LogicalBlockByte3 ;
UCHAR TransferBlockByte0 ;
UCHAR TransferBlockByte1 ;
UCHAR TransferBlockByte2 ;
UCHAR TransferBlockByte3 ;
UCHAR SubCode ;
UCHAR Control ;
};
struct _NEC_READ_CDDA {
UCHAR OperationCode ;
UCHAR Reserved0 ;
UCHAR LogicalBlockByte0 ;
UCHAR LogicalBlockByte1 ;
UCHAR LogicalBlockByte2 ;
UCHAR LogicalBlockByte3 ;
UCHAR Reserved1 ;
UCHAR TransferBlockByte0 ;
UCHAR TransferBlockByte1 ;
UCHAR Control ;
};
struct _MODE_SENSE {
UCHAR OperationCode ;
UCHAR Reserved1 ;
UCHAR Dbd ;
UCHAR Reserved2 ;
UCHAR LogicalUnitNumber ;
UCHAR PageCode ;
UCHAR Pc ;
UCHAR Reserved3 ;
UCHAR AllocationLength ;
UCHAR Control ;
};
struct _MODE_SENSE10 {
UCHAR OperationCode ;
UCHAR Reserved1 ;
UCHAR Dbd ;
UCHAR Reserved2 ;
UCHAR LogicalUnitNumber ;
UCHAR PageCode ;
UCHAR Pc ;
UCHAR Reserved3[4] ;
UCHAR AllocationLength[2] ;
UCHAR Control ;
};
struct _MODE_SELECT {
UCHAR OperationCode ;
UCHAR SPBit ;
UCHAR Reserved1 ;
UCHAR PFBit ;
UCHAR LogicalUnitNumber ;
UCHAR Reserved2[2] ;
UCHAR ParameterListLength ;
UCHAR Control ;
};
struct _MODE_SELECT10 {
UCHAR OperationCode ;
UCHAR SPBit ;
UCHAR Reserved1 ;
UCHAR PFBit ;
UCHAR LogicalUnitNumber ;
UCHAR Reserved2[5] ;
UCHAR ParameterListLength[2] ;
UCHAR Control ;
};
struct _LOCATE {
UCHAR OperationCode ;
UCHAR Immediate ;
UCHAR CPBit ;
UCHAR BTBit ;
UCHAR Reserved1 ;
UCHAR LogicalUnitNumber ;
UCHAR Reserved3 ;
UCHAR LogicalBlockAddress[4] ;
UCHAR Reserved4 ;
UCHAR Partition ;
UCHAR Control ;
};
struct _LOGSENSE {
UCHAR OperationCode ;
UCHAR SPBit ;
UCHAR PPCBit ;
UCHAR Reserved1 ;
UCHAR LogicalUnitNumber ;
UCHAR PageCode ;
UCHAR PCBit ;
UCHAR Reserved2 ;
UCHAR Reserved3 ;
UCHAR ParameterPointer[2] ;
UCHAR AllocationLength[2] ;
UCHAR Control ;
};
struct _LOGSELECT {
UCHAR OperationCode ;
UCHAR SPBit ;
UCHAR PCRBit ;
UCHAR Reserved1 ;
UCHAR LogicalUnitNumber ;
UCHAR Reserved ;
UCHAR PCBit ;
UCHAR Reserved2[4] ;
UCHAR ParameterListLength[2] ;
UCHAR Control ;
};
struct _PRINT {
UCHAR OperationCode ;
UCHAR Reserved ;
UCHAR LogicalUnitNumber ;
UCHAR TransferLength[3] ;
UCHAR Control ;
};
struct _SEEK {
UCHAR OperationCode ;
UCHAR Reserved1 ;
UCHAR LogicalUnitNumber ;
UCHAR LogicalBlockAddress[4] ;
UCHAR Reserved2[3] ;
UCHAR Control ;
};
struct _ERASE {
UCHAR OperationCode ;
UCHAR Long ;
UCHAR Immediate ;
UCHAR Reserved1 ;
UCHAR LogicalUnitNumber ;
UCHAR Reserved2[3] ;
UCHAR Control ;
};
struct _START_STOP {
UCHAR OperationCode ;
UCHAR Immediate ;
UCHAR Reserved1 ;
UCHAR LogicalUnitNumber ;
UCHAR Reserved2[2] ;
UCHAR Start ;
UCHAR LoadEject ;
UCHAR Reserved3 ;
UCHAR Control ;
};
struct _MEDIA_REMOVAL {
UCHAR OperationCode ;
UCHAR Reserved1 ;
UCHAR LogicalUnitNumber ;
UCHAR Reserved2[2] ;
UCHAR Prevent ;
UCHAR Persistant ;
UCHAR Reserved3 ;
UCHAR Control ;
};
struct _SEEK_BLOCK {
UCHAR OperationCode ;
UCHAR Immediate ;
UCHAR Reserved1 ;
UCHAR BlockAddress[3] ;
UCHAR Link ;
UCHAR Flag ;
UCHAR Reserved2 ;
UCHAR VendorUnique ;
};
struct _REQUEST_BLOCK_ADDRESS {
UCHAR OperationCode ;
UCHAR Reserved1[3] ;
UCHAR AllocationLength ;
UCHAR Link ;
UCHAR Flag ;
UCHAR Reserved2 ;
UCHAR VendorUnique ;
};
struct _PARTITION {
UCHAR OperationCode ;
UCHAR Immediate ;
UCHAR Sel ;
UCHAR PartitionSelect ;
UCHAR Reserved1[3] ;
UCHAR Control ;
};
struct _WRITE_TAPE_MARKS {
UCHAR OperationCode ;
UCHAR Immediate ;
UCHAR WriteSetMarks ;
UCHAR Reserved ;
UCHAR LogicalUnitNumber ;
UCHAR TransferLength[3] ;
UCHAR Control ;
};
struct __anonstruct_Fields_119 {
UCHAR Link ;
UCHAR Flag ;
UCHAR Reserved ;
UCHAR VendorUnique ;
};
union __anonunion_Byte6_118 {
UCHAR value ;
struct __anonstruct_Fields_119 Fields ;
};
struct _SPACE_TAPE_MARKS {
UCHAR OperationCode ;
UCHAR Code ;
UCHAR Reserved ;
UCHAR LogicalUnitNumber ;
UCHAR NumMarksMSB ;
UCHAR NumMarks ;
UCHAR NumMarksLSB ;
union __anonunion_Byte6_118 Byte6 ;
};
struct _READ_POSITION {
UCHAR Operation ;
UCHAR BlockType ;
UCHAR Reserved1 ;
UCHAR Lun ;
UCHAR Reserved2[7] ;
UCHAR Control ;
};
struct _CDB6READWRITETAPE {
UCHAR OperationCode ;
UCHAR VendorSpecific ;
UCHAR Reserved ;
UCHAR TransferLenMSB ;
UCHAR TransferLen ;
UCHAR TransferLenLSB ;
UCHAR Link ;
UCHAR Flag ;
UCHAR Reserved1 ;
UCHAR VendorUnique ;
};
struct _INIT_ELEMENT_STATUS {
UCHAR OperationCode ;
UCHAR Reserved1 ;
UCHAR LogicalUnitNubmer ;
UCHAR Reserved2[3] ;
UCHAR Reserved3 ;
UCHAR NoBarCode ;
};
struct _INITIALIZE_ELEMENT_RANGE {
UCHAR OperationCode ;
UCHAR Range ;
UCHAR Reserved1 ;
UCHAR LogicalUnitNubmer ;
UCHAR FirstElementAddress[2] ;
UCHAR Reserved2[2] ;
UCHAR NumberOfElements[2] ;
UCHAR Reserved3 ;
UCHAR Reserved4 ;
UCHAR NoBarCode ;
};
struct _POSITION_TO_ELEMENT {
UCHAR OperationCode ;
UCHAR Reserved1 ;
UCHAR LogicalUnitNumber ;
UCHAR TransportElementAddress[2] ;
UCHAR DestinationElementAddress[2] ;
UCHAR Reserved2[2] ;
UCHAR Flip ;
UCHAR Reserved3 ;
UCHAR Control ;
};
struct _MOVE_MEDIUM {
UCHAR OperationCode ;
UCHAR Reserved1 ;
UCHAR LogicalUnitNumber ;
UCHAR TransportElementAddress[2] ;
UCHAR SourceElementAddress[2] ;
UCHAR DestinationElementAddress[2] ;
UCHAR Reserved2[2] ;
UCHAR Flip ;
UCHAR Reserved3 ;
UCHAR Control ;
};
struct _EXCHANGE_MEDIUM {
UCHAR OperationCode ;
UCHAR Reserved1 ;
UCHAR LogicalUnitNumber ;
UCHAR TransportElementAddress[2] ;
UCHAR SourceElementAddress[2] ;
UCHAR Destination1ElementAddress[2] ;
UCHAR Destination2ElementAddress[2] ;
UCHAR Flip1 ;
UCHAR Flip2 ;
UCHAR Reserved3 ;
UCHAR Control ;
};
struct _READ_ELEMENT_STATUS {
UCHAR OperationCode ;
UCHAR ElementType ;
UCHAR VolTag ;
UCHAR LogicalUnitNumber ;
UCHAR StartingElementAddress[2] ;
UCHAR NumberOfElements[2] ;
UCHAR Reserved1 ;
UCHAR AllocationLength[3] ;
UCHAR Reserved2 ;
UCHAR Control ;
};
struct _SEND_VOLUME_TAG {
UCHAR OperationCode ;
UCHAR ElementType ;
UCHAR Reserved1 ;
UCHAR LogicalUnitNumber ;
UCHAR StartingElementAddress[2] ;
UCHAR Reserved2 ;
UCHAR ActionCode ;
UCHAR Reserved3 ;
UCHAR Reserved4[2] ;
UCHAR ParameterListLength[2] ;
UCHAR Reserved5 ;
UCHAR Control ;
};
struct _REQUEST_VOLUME_ELEMENT_ADDRESS {
UCHAR OperationCode ;
UCHAR ElementType ;
UCHAR VolTag ;
UCHAR LogicalUnitNumber ;
UCHAR StartingElementAddress[2] ;
UCHAR NumberElements[2] ;
UCHAR Reserved1 ;
UCHAR AllocationLength[3] ;
UCHAR Reserved2 ;
UCHAR Control ;
};
struct _LOAD_UNLOAD {
UCHAR OperationCode ;
UCHAR Immediate ;
UCHAR Reserved1 ;
UCHAR Lun ;
UCHAR Reserved2[2] ;
UCHAR Start ;
UCHAR LoadEject ;
UCHAR Reserved3 ;
UCHAR Reserved4[3] ;
UCHAR Slot ;
UCHAR Reserved5[3] ;
};
struct _MECH_STATUS {
UCHAR OperationCode ;
UCHAR Reserved ;
UCHAR Lun ;
UCHAR Reserved1[6] ;
UCHAR AllocationLength[2] ;
UCHAR Reserved2[1] ;
UCHAR Control ;
};
struct _SYNCHRONIZE_CACHE10 {
UCHAR OperationCode ;
UCHAR RelAddr ;
UCHAR Immediate ;
UCHAR Reserved ;
UCHAR Lun ;
UCHAR LogicalBlockAddress[4] ;
UCHAR Reserved2 ;
UCHAR BlockCount[2] ;
UCHAR Control ;
};
struct _GET_EVENT_STATUS_NOTIFICATION {
UCHAR OperationCode ;
UCHAR Immediate ;
UCHAR Reserved ;
UCHAR Lun ;
UCHAR Reserved2[2] ;
UCHAR NotificationClassRequest ;
UCHAR Reserved3[2] ;
UCHAR EventListLength[2] ;
UCHAR Control ;
};
struct _READ_DVD_STRUCTURE {
UCHAR OperationCode ;
UCHAR Reserved1 ;
UCHAR Lun ;
UCHAR RMDBlockNumber[4] ;
UCHAR LayerNumber ;
UCHAR Format ;
UCHAR AllocationLength[2] ;
UCHAR Reserved3 ;
UCHAR AGID ;
UCHAR Control ;
};
struct _SEND_KEY {
UCHAR OperationCode ;
UCHAR Reserved1 ;
UCHAR Lun ;
UCHAR Reserved2[6] ;
UCHAR ParameterListLength[2] ;
UCHAR KeyFormat ;
UCHAR AGID ;
UCHAR Control ;
};
struct _REPORT_KEY {
UCHAR OperationCode ;
UCHAR Reserved1 ;
UCHAR Lun ;
UCHAR LogicalBlockAddress[4] ;
UCHAR Reserved2[2] ;
UCHAR AllocationLength[2] ;
UCHAR KeyFormat ;
UCHAR AGID ;
UCHAR Control ;
};
struct _SET_READ_AHEAD {
UCHAR OperationCode ;
UCHAR Reserved1 ;
UCHAR Lun ;
UCHAR TriggerLBA[4] ;
UCHAR ReadAheadLBA[4] ;
UCHAR Reserved2 ;
UCHAR Control ;
};
struct _READ_FORMATTED_CAPACITIES {
UCHAR OperationCode ;
UCHAR Reserved1 ;
UCHAR Lun ;
UCHAR Reserved2[5] ;
UCHAR AllocationLength[2] ;
UCHAR Control ;
};
struct _REPORT_LUNS {
UCHAR OperationCode ;
UCHAR Reserved1[5] ;
UCHAR AllocationLength[4] ;
UCHAR Reserved2[1] ;
UCHAR Control ;
};
union _CDB {
struct _CDB6GENERIC CDB6GENERIC ;
struct _CDB6GENERIC *PCDB6GENERIC ;
struct _CDB6READWRITE CDB6READWRITE ;
struct _CDB6READWRITE *PCDB6READWRITE ;
struct _CDB6INQUIRY CDB6INQUIRY ;
struct _CDB6INQUIRY *PCDB6INQUIRY ;
struct _CDB6VERIFY CDB6VERIFY ;
struct _CDB6VERIFY *PCDB6VERIFY ;
struct _CDB6FORMAT CDB6FORMAT ;
struct _CDB6FORMAT *PCDB6FORMAT ;
struct _CDB10 CDB10 ;
struct _CDB10 *PCDB10 ;
struct _CDB12 CDB12 ;
struct _CDB12 *PCDB12 ;
struct _PAUSE_RESUME PAUSE_RESUME ;
struct _PAUSE_RESUME *PPAUSE_RESUME ;
struct _READ_TOC READ_TOC ;
struct _READ_TOC *PREAD_TOC ;
struct _READ_DISK_INFORMATION READ_DISK_INFORMATION ;
struct _READ_DISK_INFORMATION *PREAD_DISK_INFORMATION ;
struct _READ_TRACK_INFORMATION READ_TRACK_INFORMATION ;
struct _READ_TRACK_INFORMATION *PREAD_TRACK_INFORMATION ;
struct _READ_HEADER READ_HEADER ;
struct _READ_HEADER *PREAD_HEADER ;
struct _PLAY_AUDIO PLAY_AUDIO ;
struct _PLAY_AUDIO *PPLAY_AUDIO ;
struct _PLAY_AUDIO_MSF PLAY_AUDIO_MSF ;
struct _PLAY_AUDIO_MSF *PPLAY_AUDIO_MSF ;
struct _PLAY_CD PLAY_CD ;
struct _PLAY_CD *PPLAY_CD ;
struct _SCAN_CD SCAN_CD ;
struct _SCAN_CD *PSCAN_CD ;
struct _STOP_PLAY_SCAN STOP_PLAY_SCAN ;
struct _STOP_PLAY_SCAN *PSTOP_PLAY_SCAN ;
struct _SUBCHANNEL SUBCHANNEL ;
struct _SUBCHANNEL *PSUBCHANNEL ;
struct _READ_CD READ_CD ;
struct _READ_CD *PREAD_CD ;
struct _READ_CD_MSF READ_CD_MSF ;
struct _READ_CD_MSF *PREAD_CD_MSF ;
struct _PLXTR_READ_CDDA PLXTR_READ_CDDA ;
struct _PLXTR_READ_CDDA *PPLXTR_READ_CDDA ;
struct _NEC_READ_CDDA NEC_READ_CDDA ;
struct _NEC_READ_CDDA *PNEC_READ_CDDA ;
struct _MODE_SENSE MODE_SENSE ;
struct _MODE_SENSE *PMODE_SENSE ;
struct _MODE_SENSE10 MODE_SENSE10 ;
struct _MODE_SENSE10 *PMODE_SENSE10 ;
struct _MODE_SELECT MODE_SELECT ;
struct _MODE_SELECT *PMODE_SELECT ;
struct _MODE_SELECT10 MODE_SELECT10 ;
struct _MODE_SELECT10 *PMODE_SELECT10 ;
struct _LOCATE LOCATE ;
struct _LOCATE *PLOCATE ;
struct _LOGSENSE LOGSENSE ;
struct _LOGSENSE *PLOGSENSE ;
struct _LOGSELECT LOGSELECT ;
struct _LOGSELECT *PLOGSELECT ;
struct _PRINT PRINT ;
struct _PRINT *PPRINT ;
struct _SEEK SEEK ;
struct _SEEK *PSEEK ;
struct _ERASE ERASE ;
struct _ERASE *PERASE ;
struct _START_STOP START_STOP ;
struct _START_STOP *PSTART_STOP ;
struct _MEDIA_REMOVAL MEDIA_REMOVAL ;
struct _MEDIA_REMOVAL *PMEDIA_REMOVAL ;
struct _SEEK_BLOCK SEEK_BLOCK ;
struct _SEEK_BLOCK *PSEEK_BLOCK ;
struct _REQUEST_BLOCK_ADDRESS REQUEST_BLOCK_ADDRESS ;
struct _REQUEST_BLOCK_ADDRESS *PREQUEST_BLOCK_ADDRESS ;
struct _PARTITION PARTITION ;
struct _PARTITION *PPARTITION ;
struct _WRITE_TAPE_MARKS WRITE_TAPE_MARKS ;
struct _WRITE_TAPE_MARKS *PWRITE_TAPE_MARKS ;
struct _SPACE_TAPE_MARKS SPACE_TAPE_MARKS ;
struct _SPACE_TAPE_MARKS *PSPACE_TAPE_MARKS ;
struct _READ_POSITION READ_POSITION ;
struct _READ_POSITION *PREAD_POSITION ;
struct _CDB6READWRITETAPE CDB6READWRITETAPE ;
struct _CDB6READWRITETAPE *PCDB6READWRITETAPE ;
struct _INIT_ELEMENT_STATUS INIT_ELEMENT_STATUS ;
struct _INIT_ELEMENT_STATUS *PINIT_ELEMENT_STATUS ;
struct _INITIALIZE_ELEMENT_RANGE INITIALIZE_ELEMENT_RANGE ;
struct _INITIALIZE_ELEMENT_RANGE *PINITIALIZE_ELEMENT_RANGE ;
struct _POSITION_TO_ELEMENT POSITION_TO_ELEMENT ;
struct _POSITION_TO_ELEMENT *PPOSITION_TO_ELEMENT ;
struct _MOVE_MEDIUM MOVE_MEDIUM ;
struct _MOVE_MEDIUM *PMOVE_MEDIUM ;
struct _EXCHANGE_MEDIUM EXCHANGE_MEDIUM ;
struct _EXCHANGE_MEDIUM *PEXCHANGE_MEDIUM ;
struct _READ_ELEMENT_STATUS READ_ELEMENT_STATUS ;
struct _READ_ELEMENT_STATUS *PREAD_ELEMENT_STATUS ;
struct _SEND_VOLUME_TAG SEND_VOLUME_TAG ;
struct _SEND_VOLUME_TAG *PSEND_VOLUME_TAG ;
struct _REQUEST_VOLUME_ELEMENT_ADDRESS REQUEST_VOLUME_ELEMENT_ADDRESS ;
struct _REQUEST_VOLUME_ELEMENT_ADDRESS *PREQUEST_VOLUME_ELEMENT_ADDRESS ;
struct _LOAD_UNLOAD LOAD_UNLOAD ;
struct _LOAD_UNLOAD *PLOAD_UNLOAD ;
struct _MECH_STATUS MECH_STATUS ;
struct _MECH_STATUS *PMECH_STATUS ;
struct _SYNCHRONIZE_CACHE10 SYNCHRONIZE_CACHE10 ;
struct _SYNCHRONIZE_CACHE10 *PSYNCHRONIZE_CACHE10 ;
struct _GET_EVENT_STATUS_NOTIFICATION GET_EVENT_STATUS_NOTIFICATION ;
struct _GET_EVENT_STATUS_NOTIFICATION *PGET_EVENT_STATUS_NOTIFICATION ;
struct _READ_DVD_STRUCTURE READ_DVD_STRUCTURE ;
struct _READ_DVD_STRUCTURE *PREAD_DVD_STRUCTURE ;
struct _SEND_KEY SEND_KEY ;
struct _SEND_KEY *PSEND_KEY ;
struct _REPORT_KEY REPORT_KEY ;
struct _REPORT_KEY *PREPORT_KEY ;
struct _SET_READ_AHEAD SET_READ_AHEAD ;
struct _SET_READ_AHEAD *PSET_READ_AHEAD ;
struct _READ_FORMATTED_CAPACITIES READ_FORMATTED_CAPACITIES ;
struct _READ_FORMATTED_CAPACITIES *PREAD_FORMATTED_CAPACITIES ;
struct _REPORT_LUNS REPORT_LUNS ;
struct _REPORT_LUNS *PREPORT_LUNS ;
ULONG AsUlong[4] ;
UCHAR AsByte[16] ;
};
typedef union _CDB CDB;
typedef union _CDB *PCDB;
struct _NOTIFICATION_EVENT_STATUS_HEADER {
UCHAR EventDataLength[2] ;
UCHAR NotificationClass ;
UCHAR Reserved ;
UCHAR NEA ;
UCHAR SupportedEventClasses ;
UCHAR ClassEventData[0] ;
};
typedef struct _NOTIFICATION_EVENT_STATUS_HEADER NOTIFICATION_EVENT_STATUS_HEADER;
typedef struct _NOTIFICATION_EVENT_STATUS_HEADER *PNOTIFICATION_EVENT_STATUS_HEADER;
struct _NOTIFICATION_POWER_STATUS {
UCHAR PowerEvent ;
UCHAR Reserved ;
UCHAR PowerStatus ;
UCHAR Reserved2[2] ;
};
typedef struct _NOTIFICATION_POWER_STATUS NOTIFICATION_POWER_STATUS;
typedef struct _NOTIFICATION_POWER_STATUS *PNOTIFICATION_POWER_STATUS;
struct _NOTIFICATION_MEDIA_STATUS {
UCHAR MediaStatus ;
UCHAR Reserved ;
UCHAR PowerStatus ;
UCHAR StartSlot ;
UCHAR EndSlot ;
};
typedef struct _NOTIFICATION_MEDIA_STATUS NOTIFICATION_MEDIA_STATUS;
typedef struct _NOTIFICATION_MEDIA_STATUS *PNOTIFICATION_MEDIA_STATUS;
struct _NOTIFICATION_BUSY_STATUS {
UCHAR DeviceBusyEvent ;
UCHAR Reserved ;
UCHAR DeviceBusyStatus ;
UCHAR Time[2] ;
};
typedef struct _NOTIFICATION_BUSY_STATUS NOTIFICATION_BUSY_STATUS;
typedef struct _NOTIFICATION_BUSY_STATUS *PNOTIFICATION_BUSY_STATUS;
struct _READ_DVD_STRUCTURES_HEADER {
UCHAR Length[2] ;
UCHAR Reserved[2] ;
UCHAR Data[0] ;
};
typedef struct _READ_DVD_STRUCTURES_HEADER READ_DVD_STRUCTURES_HEADER;
typedef struct _READ_DVD_STRUCTURES_HEADER *PREAD_DVD_STRUCTURES_HEADER;
struct _CDVD_KEY_HEADER {
UCHAR DataLength[2] ;
UCHAR Reserved[2] ;
UCHAR Data[0] ;
};
typedef struct _CDVD_KEY_HEADER CDVD_KEY_HEADER;
typedef struct _CDVD_KEY_HEADER *PCDVD_KEY_HEADER;
struct _CDVD_REPORT_AGID_DATA {
UCHAR Reserved1[3] ;
UCHAR Reserved2 ;
UCHAR AGID ;
};
typedef struct _CDVD_REPORT_AGID_DATA CDVD_REPORT_AGID_DATA;
typedef struct _CDVD_REPORT_AGID_DATA *PCDVD_REPORT_AGID_DATA;
struct _CDVD_CHALLENGE_KEY_DATA {
UCHAR ChallengeKeyValue[10] ;
UCHAR Reserved[2] ;
};
typedef struct _CDVD_CHALLENGE_KEY_DATA CDVD_CHALLENGE_KEY_DATA;
typedef struct _CDVD_CHALLENGE_KEY_DATA *PCDVD_CHALLENGE_KEY_DATA;
struct _CDVD_KEY_DATA {
UCHAR Key[5] ;
UCHAR Reserved[3] ;
};
typedef struct _CDVD_KEY_DATA CDVD_KEY_DATA;
typedef struct _CDVD_KEY_DATA *PCDVD_KEY_DATA;
struct _CDVD_REPORT_ASF_DATA {
UCHAR Reserved1[3] ;
UCHAR Success ;
UCHAR Reserved2 ;
};
typedef struct _CDVD_REPORT_ASF_DATA CDVD_REPORT_ASF_DATA;
typedef struct _CDVD_REPORT_ASF_DATA *PCDVD_REPORT_ASF_DATA;
struct _CDVD_TITLE_KEY_HEADER {
UCHAR DataLength[2] ;
UCHAR Reserved1[1] ;
UCHAR Reserved2 ;
UCHAR CGMS ;
UCHAR CP_SEC ;
UCHAR CPM ;
UCHAR Zero ;
CDVD_KEY_DATA TitleKey ;
};
typedef struct _CDVD_TITLE_KEY_HEADER CDVD_TITLE_KEY_HEADER;
typedef struct _CDVD_TITLE_KEY_HEADER *PCDVD_TITLE_KEY_HEADER;
struct _FORMATTED_CAPACITY_DESCRIPTOR {
UCHAR NumberOfBlocks[4] ;
UCHAR Maximum ;
UCHAR Valid ;
UCHAR BlockLength[3] ;
};
typedef struct _FORMATTED_CAPACITY_DESCRIPTOR FORMATTED_CAPACITY_DESCRIPTOR;
typedef struct _FORMATTED_CAPACITY_DESCRIPTOR *PFORMATTED_CAPACITY_DESCRIPTOR;
struct _FORMATTED_CAPACITY_LIST {
UCHAR Reserved[3] ;
UCHAR CapacityListLength ;
FORMATTED_CAPACITY_DESCRIPTOR Descriptors[0] ;
};
typedef struct _FORMATTED_CAPACITY_LIST FORMATTED_CAPACITY_LIST;
typedef struct _FORMATTED_CAPACITY_LIST *PFORMATTED_CAPACITY_LIST;
struct _OPC_TABLE_ENTRY {
UCHAR Speed[2] ;
UCHAR OPCValue[6] ;
};
typedef struct _OPC_TABLE_ENTRY OPC_TABLE_ENTRY;
typedef struct _OPC_TABLE_ENTRY *POPC_TABLE_ENTRY;
struct _DISK_INFORMATION {
UCHAR Length[2] ;
UCHAR DiskStatus ;
UCHAR LastSessionStatus ;
UCHAR Erasable ;
UCHAR Reserved1 ;
UCHAR FirstTrackNumber ;
UCHAR NumberOfSessions ;
UCHAR LastSessionFirstTrack ;
UCHAR LastSessionLastTrack ;
UCHAR Reserved2 ;
UCHAR GEN ;
UCHAR DBC_V ;
UCHAR DID_V ;
UCHAR DiskType ;
UCHAR Reserved3[3] ;
UCHAR DiskIdentification[4] ;
UCHAR LastSessionLeadIn[4] ;
UCHAR LastPossibleStartTime[4] ;
UCHAR DiskBarCode[8] ;
UCHAR Reserved4 ;
UCHAR NumberOPCEntries ;
OPC_TABLE_ENTRY OPCTable[0] ;
};
typedef struct _DISK_INFORMATION DISK_INFORMATION;
typedef struct _DISK_INFORMATION *PDISK_INFORMATION;
struct __anonstruct_MSF_121 {
UCHAR Reserved ;
UCHAR M ;
UCHAR S ;
UCHAR F ;
};
union __anonunion____missing_field_name_120 {
UCHAR LogicalBlockAddress[4] ;
struct __anonstruct_MSF_121 MSF ;
};
struct _DATA_BLOCK_HEADER {
UCHAR DataMode ;
UCHAR Reserved[4] ;
union __anonunion____missing_field_name_120 __annonCompField23 ;
};
typedef struct _DATA_BLOCK_HEADER DATA_BLOCK_HEADER;
typedef struct _DATA_BLOCK_HEADER *PDATA_BLOCK_HEADER;
struct _TRACK_INFORMATION {
UCHAR Length[2] ;
UCHAR TrackNumber ;
UCHAR SessionNumber ;
UCHAR Reserved1 ;
UCHAR TrackMode ;
UCHAR Copy ;
UCHAR Damage ;
UCHAR Reserved2 ;
UCHAR DataMode ;
UCHAR FP ;
UCHAR Packet ;
UCHAR Blank ;
UCHAR RT ;
UCHAR NWA_V ;
UCHAR Reserved3 ;
UCHAR TrackStartAddress[4] ;
UCHAR NextWritableAddress[4] ;
UCHAR FreeBlocks[4] ;
UCHAR FixedPacketSize[4] ;
};
typedef struct _TRACK_INFORMATION TRACK_INFORMATION;
typedef struct _TRACK_INFORMATION *PTRACK_INFORMATION;
struct __anonstruct_Modify_122 {
UCHAR Modifier[4] ;
};
struct __anonstruct_Synchronous_123 {
UCHAR TransferPeriod ;
UCHAR ReqAckOffset ;
};
struct __anonstruct_Wide_124 {
UCHAR Width ;
};
union _EXTENDED_ARGUMENTS {
struct __anonstruct_Modify_122 Modify ;
struct __anonstruct_Synchronous_123 Synchronous ;
struct __anonstruct_Wide_124 Wide ;
};
struct _SCSI_EXTENDED_MESSAGE {
UCHAR InitialMessageCode ;
UCHAR MessageLength ;
UCHAR MessageType ;
union _EXTENDED_ARGUMENTS ExtendedArguments ;
};
typedef struct _SCSI_EXTENDED_MESSAGE SCSI_EXTENDED_MESSAGE;
typedef struct _SCSI_EXTENDED_MESSAGE *PSCSI_EXTENDED_MESSAGE;
struct _INQUIRYDATA {
UCHAR DeviceType ;
UCHAR DeviceTypeQualifier ;
UCHAR DeviceTypeModifier ;
UCHAR RemovableMedia ;
UCHAR Versions ;
UCHAR ResponseDataFormat ;
UCHAR HiSupport ;
UCHAR NormACA ;
UCHAR ReservedBit ;
UCHAR AERC ;
UCHAR AdditionalLength ;
UCHAR Reserved[2] ;
UCHAR SoftReset ;
UCHAR CommandQueue ;
UCHAR Reserved2 ;
UCHAR LinkedCommands ;
UCHAR Synchronous ;
UCHAR Wide16Bit ;
UCHAR Wide32Bit ;
UCHAR RelativeAddressing ;
UCHAR VendorId[8] ;
UCHAR ProductId[16] ;
UCHAR ProductRevisionLevel[4] ;
UCHAR VendorSpecific[20] ;
UCHAR Reserved3[40] ;
};
typedef struct _INQUIRYDATA INQUIRYDATA;
typedef struct _INQUIRYDATA *PINQUIRYDATA;
struct _SENSE_DATA {
UCHAR ErrorCode ;
UCHAR Valid ;
UCHAR SegmentNumber ;
UCHAR SenseKey ;
UCHAR Reserved ;
UCHAR IncorrectLength ;
UCHAR EndOfMedia ;
UCHAR FileMark ;
UCHAR Information[4] ;
UCHAR AdditionalSenseLength ;
UCHAR CommandSpecificInformation[4] ;
UCHAR AdditionalSenseCode ;
UCHAR AdditionalSenseCodeQualifier ;
UCHAR FieldReplaceableUnitCode ;
UCHAR SenseKeySpecific[3] ;
};
typedef struct _SENSE_DATA SENSE_DATA;
typedef struct _SENSE_DATA *PSENSE_DATA;
struct _READ_CAPACITY_DATA {
ULONG LogicalBlockAddress ;
ULONG BytesPerBlock ;
};
typedef struct _READ_CAPACITY_DATA READ_CAPACITY_DATA;
typedef struct _READ_CAPACITY_DATA *PREAD_CAPACITY_DATA;
struct _READ_BLOCK_LIMITS {
UCHAR Reserved ;
UCHAR BlockMaximumSize[3] ;
UCHAR BlockMinimumSize[2] ;
};
typedef struct _READ_BLOCK_LIMITS READ_BLOCK_LIMITS_DATA;
typedef struct _READ_BLOCK_LIMITS *PREAD_BLOCK_LIMITS_DATA;
struct _MODE_PARAMETER_HEADER {
UCHAR ModeDataLength ;
UCHAR MediumType ;
UCHAR DeviceSpecificParameter ;
UCHAR BlockDescriptorLength ;
};
typedef struct _MODE_PARAMETER_HEADER MODE_PARAMETER_HEADER;
typedef struct _MODE_PARAMETER_HEADER *PMODE_PARAMETER_HEADER;
struct _MODE_PARAMETER_HEADER10 {
UCHAR ModeDataLength[2] ;
UCHAR MediumType ;
UCHAR DeviceSpecificParameter ;
UCHAR Reserved[2] ;
UCHAR BlockDescriptorLength[2] ;
};
typedef struct _MODE_PARAMETER_HEADER10 MODE_PARAMETER_HEADER10;
typedef struct _MODE_PARAMETER_HEADER10 *PMODE_PARAMETER_HEADER10;
struct _MODE_PARAMETER_BLOCK {
UCHAR DensityCode ;
UCHAR NumberOfBlocks[3] ;
UCHAR Reserved ;
UCHAR BlockLength[3] ;
};
typedef struct _MODE_PARAMETER_BLOCK MODE_PARAMETER_BLOCK;
typedef struct _MODE_PARAMETER_BLOCK *PMODE_PARAMETER_BLOCK;
struct _MODE_DISCONNECT_PAGE {
UCHAR PageCode ;
UCHAR Reserved ;
UCHAR PageSavable ;
UCHAR PageLength ;
UCHAR BufferFullRatio ;
UCHAR BufferEmptyRatio ;
UCHAR BusInactivityLimit[2] ;
UCHAR BusDisconnectTime[2] ;
UCHAR BusConnectTime[2] ;
UCHAR MaximumBurstSize[2] ;
UCHAR DataTransferDisconnect ;
UCHAR Reserved2[3] ;
};
typedef struct _MODE_DISCONNECT_PAGE MODE_DISCONNECT_PAGE;
typedef struct _MODE_DISCONNECT_PAGE *PMODE_DISCONNECT_PAGE;
struct _MODE_CACHING_PAGE {
UCHAR PageCode ;
UCHAR Reserved ;
UCHAR PageSavable ;
UCHAR PageLength ;
UCHAR ReadDisableCache ;
UCHAR MultiplicationFactor ;
UCHAR WriteCacheEnable ;
UCHAR Reserved2 ;
UCHAR WriteRetensionPriority ;
UCHAR ReadRetensionPriority ;
UCHAR DisablePrefetchTransfer[2] ;
UCHAR MinimumPrefetch[2] ;
UCHAR MaximumPrefetch[2] ;
UCHAR MaximumPrefetchCeiling[2] ;
};
typedef struct _MODE_CACHING_PAGE MODE_CACHING_PAGE;
typedef struct _MODE_CACHING_PAGE *PMODE_CACHING_PAGE;
struct _MODE_FLEXIBLE_DISK_PAGE {
UCHAR PageCode ;
UCHAR Reserved ;
UCHAR PageSavable ;
UCHAR PageLength ;
UCHAR TransferRate[2] ;
UCHAR NumberOfHeads ;
UCHAR SectorsPerTrack ;
UCHAR BytesPerSector[2] ;
UCHAR NumberOfCylinders[2] ;
UCHAR StartWritePrecom[2] ;
UCHAR StartReducedCurrent[2] ;
UCHAR StepRate[2] ;
UCHAR StepPluseWidth ;
UCHAR HeadSettleDelay[2] ;
UCHAR MotorOnDelay ;
UCHAR MotorOffDelay ;
UCHAR Reserved2 ;
UCHAR MotorOnAsserted ;
UCHAR StartSectorNumber ;
UCHAR TrueReadySignal ;
UCHAR StepPlusePerCyclynder ;
UCHAR Reserved3 ;
UCHAR WriteCompenstation ;
UCHAR HeadLoadDelay ;
UCHAR HeadUnloadDelay ;
UCHAR Pin2Usage ;
UCHAR Pin34Usage ;
UCHAR Pin1Usage ;
UCHAR Pin4Usage ;
UCHAR MediumRotationRate[2] ;
UCHAR Reserved4[2] ;
};
typedef struct _MODE_FLEXIBLE_DISK_PAGE MODE_FLEXIBLE_DISK_PAGE;
typedef struct _MODE_FLEXIBLE_DISK_PAGE *PMODE_FLEXIBLE_DISK_PAGE;
struct _MODE_FORMAT_PAGE {
UCHAR PageCode ;
UCHAR Reserved ;
UCHAR PageSavable ;
UCHAR PageLength ;
UCHAR TracksPerZone[2] ;
UCHAR AlternateSectorsPerZone[2] ;
UCHAR AlternateTracksPerZone[2] ;
UCHAR AlternateTracksPerLogicalUnit[2] ;
UCHAR SectorsPerTrack[2] ;
UCHAR BytesPerPhysicalSector[2] ;
UCHAR Interleave[2] ;
UCHAR TrackSkewFactor[2] ;
UCHAR CylinderSkewFactor[2] ;
UCHAR Reserved2 ;
UCHAR SurfaceFirst ;
UCHAR RemovableMedia ;
UCHAR HardSectorFormating ;
UCHAR SoftSectorFormating ;
UCHAR Reserved3[3] ;
};
typedef struct _MODE_FORMAT_PAGE MODE_FORMAT_PAGE;
typedef struct _MODE_FORMAT_PAGE *PMODE_FORMAT_PAGE;
struct _MODE_RIGID_GEOMETRY_PAGE {
UCHAR PageCode ;
UCHAR Reserved ;
UCHAR PageSavable ;
UCHAR PageLength ;
UCHAR NumberOfCylinders[3] ;
UCHAR NumberOfHeads ;
UCHAR StartWritePrecom[3] ;
UCHAR StartReducedCurrent[3] ;
UCHAR DriveStepRate[2] ;
UCHAR LandZoneCyclinder[3] ;
UCHAR RotationalPositionLock ;
UCHAR Reserved2 ;
UCHAR RotationOffset ;
UCHAR Reserved3 ;
UCHAR RoataionRate[2] ;
UCHAR Reserved4[2] ;
};
typedef struct _MODE_RIGID_GEOMETRY_PAGE MODE_RIGID_GEOMETRY_PAGE;
typedef struct _MODE_RIGID_GEOMETRY_PAGE *PMODE_RIGID_GEOMETRY_PAGE;
struct _MODE_READ_WRITE_RECOVERY_PAGE {
UCHAR PageCode ;
UCHAR Reserved1 ;
UCHAR PSBit ;
UCHAR PageLength ;
UCHAR DCRBit ;
UCHAR DTEBit ;
UCHAR PERBit ;
UCHAR EERBit ;
UCHAR RCBit ;
UCHAR TBBit ;
UCHAR ARRE ;
UCHAR AWRE ;
UCHAR ReadRetryCount ;
UCHAR Reserved4[4] ;
UCHAR WriteRetryCount ;
UCHAR Reserved5[3] ;
};
typedef struct _MODE_READ_WRITE_RECOVERY_PAGE MODE_READ_WRITE_RECOVERY_PAGE;
typedef struct _MODE_READ_WRITE_RECOVERY_PAGE *PMODE_READ_WRITE_RECOVERY_PAGE;
struct _MODE_READ_RECOVERY_PAGE {
UCHAR PageCode ;
UCHAR Reserved1 ;
UCHAR PSBit ;
UCHAR PageLength ;
UCHAR DCRBit ;
UCHAR DTEBit ;
UCHAR PERBit ;
UCHAR Reserved2 ;
UCHAR RCBit ;
UCHAR TBBit ;
UCHAR Reserved3 ;
UCHAR ReadRetryCount ;
UCHAR Reserved4[4] ;
};
typedef struct _MODE_READ_RECOVERY_PAGE MODE_READ_RECOVERY_PAGE;
typedef struct _MODE_READ_RECOVERY_PAGE *PMODE_READ_RECOVERY_PAGE;
struct _MODE_INFO_EXCEPTIONS {
UCHAR PageCode ;
UCHAR Reserved1 ;
UCHAR PSBit ;
UCHAR PageLength ;
UCHAR LogErr ;
UCHAR Reserved2 ;
UCHAR Test ;
UCHAR Dexcpt ;
UCHAR Reserved3 ;
UCHAR Perf ;
UCHAR ReportMethod ;
UCHAR Reserved4 ;
UCHAR IntervalTimer[4] ;
UCHAR ReportCount[4] ;
};
typedef struct _MODE_INFO_EXCEPTIONS MODE_INFO_EXCEPTIONS;
typedef struct _MODE_INFO_EXCEPTIONS *PMODE_INFO_EXCEPTIONS;
struct _POWER_CONDITION_PAGE {
UCHAR PageCode ;
UCHAR Reserved ;
UCHAR PSBit ;
UCHAR PageLength ;
UCHAR Reserved2 ;
UCHAR Standby ;
UCHAR Idle ;
UCHAR Reserved3 ;
UCHAR IdleTimer[4] ;
UCHAR StandbyTimer[4] ;
};
typedef struct _POWER_CONDITION_PAGE POWER_CONDITION_PAGE;
typedef struct _POWER_CONDITION_PAGE *PPOWER_CONDITION_PAGE;
struct _CDDA_OUTPUT_PORT {
UCHAR ChannelSelection ;
UCHAR Reserved ;
UCHAR Volume ;
};
typedef struct _CDDA_OUTPUT_PORT CDDA_OUTPUT_PORT;
typedef struct _CDDA_OUTPUT_PORT *PCDDA_OUTPUT_PORT;
struct _CDAUDIO_CONTROL_PAGE {
UCHAR PageCode ;
UCHAR Reserved ;
UCHAR PSBit ;
UCHAR PageLength ;
UCHAR Reserved2 ;
UCHAR StopOnTrackCrossing ;
UCHAR Immediate ;
UCHAR Reserved3 ;
UCHAR Reserved4[3] ;
UCHAR Obsolete[2] ;
CDDA_OUTPUT_PORT CDDAOutputPorts[4] ;
};
typedef struct _CDAUDIO_CONTROL_PAGE CDAUDIO_CONTROL_PAGE;
typedef struct _CDAUDIO_CONTROL_PAGE *PCDAUDIO_CONTROL_PAGE;
struct _CDVD_FEATURE_SET_PAGE {
UCHAR PageCode ;
UCHAR Reserved ;
UCHAR PSBit ;
UCHAR PageLength ;
UCHAR CDAudio[2] ;
UCHAR EmbeddedChanger[2] ;
UCHAR PacketSMART[2] ;
UCHAR PersistantPrevent[2] ;
UCHAR EventStatusNotification[2] ;
UCHAR DigitalOutput[2] ;
UCHAR CDSequentialRecordable[2] ;
UCHAR DVDSequentialRecordable[2] ;
UCHAR RandomRecordable[2] ;
UCHAR KeyExchange[2] ;
UCHAR Reserved2[2] ;
};
typedef struct _CDVD_FEATURE_SET_PAGE CDVD_FEATURE_SET_PAGE;
typedef struct _CDVD_FEATURE_SET_PAGE *PCDVD_FEATURE_SET_PAGE;
struct _CDVD_INACTIVITY_TIMEOUT_PAGE {
UCHAR PageCode ;
UCHAR Reserved ;
UCHAR PSBit ;
UCHAR PageLength ;
UCHAR Reserved2[2] ;
UCHAR SWPP ;
UCHAR DISP ;
UCHAR Reserved3 ;
UCHAR Reserved4 ;
UCHAR GroupOneMinimumTimeout[2] ;
UCHAR GroupTwoMinimumTimeout[2] ;
};
typedef struct _CDVD_INACTIVITY_TIMEOUT_PAGE CDVD_INACTIVITY_TIMEOUT_PAGE;
typedef struct _CDVD_INACTIVITY_TIMEOUT_PAGE *PCDVD_INACTIVITY_TIMEOUT_PAGE;
struct _CDVD_CAPABILITIES_PAGE {
UCHAR PageCode ;
UCHAR Reserved ;
UCHAR PSBit ;
UCHAR PageLength ;
UCHAR CDRRead ;
UCHAR CDERead ;
UCHAR Method2 ;
UCHAR DVDROMRead ;
UCHAR DVDRRead ;
UCHAR DVDRAMRead ;
UCHAR Reserved2 ;
UCHAR CDRWrite ;
UCHAR CDEWrite ;
UCHAR TestWrite ;
UCHAR Reserved3 ;
UCHAR DVDRWrite ;
UCHAR DVDRAMWrite ;
UCHAR Reserved4 ;
UCHAR AudioPlay ;
UCHAR Composite ;
UCHAR DigitalPortOne ;
UCHAR DigitalPortTwo ;
UCHAR Mode2Form1 ;
UCHAR Mode2Form2 ;
UCHAR MultiSession ;
UCHAR Reserved5 ;
UCHAR CDDA ;
UCHAR CDDAAccurate ;
UCHAR RWSupported ;
UCHAR RWDeinterleaved ;
UCHAR C2Pointers ;
UCHAR ISRC ;
UCHAR UPC ;
UCHAR ReadBarCodeCapable ;
UCHAR Lock ;
UCHAR LockState ;
UCHAR PreventJumper ;
UCHAR Eject ;
UCHAR Reserved6 ;
UCHAR LoadingMechanismType ;
UCHAR SeparateVolume ;
UCHAR SeperateChannelMute ;
UCHAR SupportsDiskPresent ;
UCHAR SWSlotSelection ;
UCHAR SideChangeCapable ;
UCHAR RWInLeadInReadable ;
UCHAR Reserved7 ;
UCHAR ObsoleteReserved[2] ;
UCHAR NumberVolumeLevels[2] ;
UCHAR BufferSize[2] ;
UCHAR ObsoleteReserved2[2] ;
UCHAR ObsoleteReserved3 ;
UCHAR Reserved8 ;
UCHAR BCK ;
UCHAR RCK ;
UCHAR LSBF ;
UCHAR Length ;
UCHAR Reserved9 ;
UCHAR ObsoleteReserved4[2] ;
UCHAR CopyManagementRevision[2] ;
UCHAR Reserved10[2] ;
};
typedef struct _CDVD_CAPABILITIES_PAGE CDVD_CAPABILITIES_PAGE;
typedef struct _CDVD_CAPABILITIES_PAGE *PCDVD_CAPABILITIES_PAGE;
struct _LUN_LIST {
UCHAR LunListLength[4] ;
UCHAR Reserved[4] ;
UCHAR Lun[0][8] ;
};
typedef struct _LUN_LIST LUN_LIST;
typedef struct _LUN_LIST *PLUN_LIST;
struct _MODE_PARM_READ_WRITE {
MODE_PARAMETER_HEADER ParameterListHeader ;
MODE_PARAMETER_BLOCK ParameterListBlock ;
};
typedef struct _MODE_PARM_READ_WRITE MODE_PARM_READ_WRITE_DATA;
typedef struct _MODE_PARM_READ_WRITE *PMODE_PARM_READ_WRITE_DATA;
struct _PORT_OUTPUT {
UCHAR ChannelSelection ;
UCHAR Volume ;
};
typedef struct _PORT_OUTPUT PORT_OUTPUT;
typedef struct _PORT_OUTPUT *PPORT_OUTPUT;
struct _AUDIO_OUTPUT {
UCHAR CodePage ;
UCHAR ParameterLength ;
UCHAR Immediate ;
UCHAR Reserved[2] ;
UCHAR LbaFormat ;
UCHAR LogicalBlocksPerSecond[2] ;
PORT_OUTPUT PortOutput[4] ;
};
typedef struct _AUDIO_OUTPUT AUDIO_OUTPUT;
typedef struct _AUDIO_OUTPUT *PAUDIO_OUTPUT;
struct _MECHANICAL_STATUS_INFORMATION_HEADER {
UCHAR CurrentSlot ;
UCHAR ChangerState ;
UCHAR Fault ;
UCHAR Reserved ;
UCHAR MechanismState ;
UCHAR CurrentLogicalBlockAddress[3] ;
UCHAR NumberAvailableSlots ;
UCHAR SlotTableLength[2] ;
};
typedef struct _MECHANICAL_STATUS_INFORMATION_HEADER MECHANICAL_STATUS_INFORMATION_HEADER;
typedef struct _MECHANICAL_STATUS_INFORMATION_HEADER *PMECHANICAL_STATUS_INFORMATION_HEADER;
struct _SLOT_TABLE_INFORMATION {
UCHAR DiscChanged ;
UCHAR Reserved ;
UCHAR DiscPresent ;
UCHAR Reserved2[3] ;
};
typedef struct _SLOT_TABLE_INFORMATION SLOT_TABLE_INFORMATION;
typedef struct _SLOT_TABLE_INFORMATION *PSLOT_TABLE_INFORMATION;
struct _MECHANICAL_STATUS {
MECHANICAL_STATUS_INFORMATION_HEADER MechanicalStatusHeader ;
SLOT_TABLE_INFORMATION SlotTableInfo[1] ;
};
typedef struct _MECHANICAL_STATUS MECHANICAL_STATUS;
typedef struct _MECHANICAL_STATUS *PMECHANICAL_STATUS;
struct _TAPE_POSITION_DATA {
UCHAR Reserved1 ;
UCHAR BlockPositionUnsupported ;
UCHAR Reserved2 ;
UCHAR EndOfPartition ;
UCHAR BeginningOfPartition ;
UCHAR PartitionNumber ;
USHORT Reserved3 ;
UCHAR FirstBlock[4] ;
UCHAR LastBlock[4] ;
UCHAR Reserved4 ;
UCHAR NumberOfBlocks[3] ;
UCHAR NumberOfBytes[4] ;
};
typedef struct _TAPE_POSITION_DATA TAPE_POSITION_DATA;
typedef struct _TAPE_POSITION_DATA *PTAPE_POSITION_DATA;
struct __anonstruct____missing_field_name_125 {
UCHAR Byte0 ;
UCHAR Byte1 ;
UCHAR Byte2 ;
UCHAR Byte3 ;
};
union _FOUR_BYTE {
struct __anonstruct____missing_field_name_125 __annonCompField24 ;
ULONG AsULong ;
};
typedef union _FOUR_BYTE FOUR_BYTE;
typedef union _FOUR_BYTE *PFOUR_BYTE;
struct __anonstruct____missing_field_name_126 {
UCHAR Byte0 ;
UCHAR Byte1 ;
};
union _TWO_BYTE {
struct __anonstruct____missing_field_name_126 __annonCompField25 ;
USHORT AsUShort ;
};
typedef union _TWO_BYTE TWO_BYTE;
typedef union _TWO_BYTE *PTWO_BYTE;
struct _CD_DEVICE_EXTENSION {
PDEVICE_OBJECT TargetDeviceObject ;
PDEVICE_OBJECT TargetPdo ;
PDEVICE_OBJECT DeviceObject ;
ULONG PagingPathCount ;
KEVENT PagingPathCountEvent ;
PRKDPC Dpc ;
PKTIMER Timer ;
LONG Sync ;
UCHAR Active ;
UCHAR Paused ;
UCHAR PausedM ;
UCHAR PausedS ;
UCHAR PausedF ;
UCHAR LastEndM ;
UCHAR LastEndS ;
UCHAR LastEndF ;
BOOLEAN PlayActive ;
};
typedef struct _CD_DEVICE_EXTENSION CD_DEVICE_EXTENSION;
typedef struct _CD_DEVICE_EXTENSION *PCD_DEVICE_EXTENSION;
struct _NEC_READ_TOC {
UCHAR OperationCode ;
UCHAR Type ;
UCHAR Reserved1 ;
UCHAR TrackNumber ;
UCHAR Reserved2[6] ;
UCHAR Control ;
};
struct _NEC_PLAY_AUDIO {
UCHAR OperationCode ;
UCHAR PlayMode ;
UCHAR Reserved1 ;
UCHAR Minute ;
UCHAR Second ;
UCHAR Frame ;
UCHAR Reserved2[4] ;
UCHAR Control ;
};
struct _NEC_SEEK_AUDIO {
UCHAR OperationCode ;
UCHAR Play ;
UCHAR Reserved1 ;
UCHAR Minute ;
UCHAR Second ;
UCHAR Frame ;
UCHAR Reserved2[4] ;
UCHAR Control ;
};
struct _NEC_PAUSE_AUDIO {
UCHAR OperationCode ;
UCHAR Reserved1[8] ;
UCHAR Control ;
};
struct _NEC_READ_Q_CHANNEL {
UCHAR OperationCode ;
UCHAR TransferSize ;
UCHAR Reserved1 ;
UCHAR Reserved2[7] ;
UCHAR Control ;
};
struct _NEC_EJECT {
UCHAR OperationCode ;
UCHAR Immediate ;
UCHAR Reserved1 ;
UCHAR Reserved2[7] ;
UCHAR Control ;
};
union _NEC_CDB {
struct _NEC_READ_TOC NEC_READ_TOC ;
struct _NEC_READ_TOC *PNEC_READ_TOC ;
struct _NEC_PLAY_AUDIO NEC_PLAY_AUDIO ;
struct _NEC_PLAY_AUDIO *PNEC_PLAY_AUDIO ;
struct _NEC_SEEK_AUDIO NEC_SEEK_AUDIO ;
struct _NEC_SEEK_AUDIO *PNEC_SEEK_AUDIO ;
struct _NEC_PAUSE_AUDIO NEC_PAUSE_AUDIO ;
struct _NEC_PAUSE_AUDIO *PNEC_PAUSE_AUDIO ;
struct _NEC_READ_Q_CHANNEL NEC_READ_Q_CHANNEL ;
struct _NEC_READ_Q_CHANNEL *PNEC_READ_Q_CHANNEL ;
struct _NEC_EJECT NEC_EJECT ;
struct _NEC_EJECT *PNEC_EJECT ;
};
typedef union _NEC_CDB NEC_CDB;
typedef union _NEC_CDB *PNEC_CDB;
struct _PIONEER_DRIVE_STATUS_BUFFER {
UCHAR PageCode ;
UCHAR Reserved ;
UCHAR PageLengthMsb ;
UCHAR PageLengthLsb ;
UCHAR DriveStatusLsb ;
UCHAR DriveStatusMsb ;
};
typedef struct _PIONEER_DRIVE_STATUS_BUFFER PIONEER_DRIVE_STATUS_BUFFER;
typedef struct _PIONEER_DRIVE_STATUS_BUFFER *PPIONEER_DRIVE_STATUS_BUFFER;
struct _PNR_START_STOP {
UCHAR OperationCode ;
UCHAR Immediate ;
UCHAR Reserved1 ;
UCHAR Lun ;
UCHAR Reserved2 ;
UCHAR PCF ;
UCHAR Reserved3 ;
UCHAR Start ;
UCHAR Eject ;
UCHAR Reserved4 ;
UCHAR Link ;
UCHAR Flag ;
UCHAR Reserved5 ;
UCHAR Vendor ;
};
struct _PNR_READ_TOC {
UCHAR OperationCode ;
UCHAR Reserved1 ;
UCHAR Lun ;
UCHAR Reserved2[3] ;
UCHAR TrackNumber ;
UCHAR Reserved3 ;
UCHAR AssignedLength[2] ;
UCHAR Link ;
UCHAR Flag ;
UCHAR Reserved4 ;
UCHAR Type ;
};
struct _PNR_PLAY_AUDIO {
UCHAR OperationCode ;
UCHAR PlayMode ;
UCHAR StopAddr ;
UCHAR Lun ;
UCHAR Reserved1 ;
UCHAR Minute ;
UCHAR Second ;
UCHAR Frame ;
UCHAR Reserved2[3] ;
UCHAR Link ;
UCHAR Flag ;
UCHAR Reserved3 ;
UCHAR Type ;
};
struct _PNR_SEEK_AUDIO {
UCHAR OperationCode ;
UCHAR PlayMode ;
UCHAR PlayBack ;
UCHAR Lun ;
UCHAR Reserved1 ;
UCHAR Minute ;
UCHAR Second ;
UCHAR Frame ;
UCHAR Reserved2[3] ;
UCHAR Link ;
UCHAR Flag ;
UCHAR Reserved3 ;
UCHAR Type ;
};
struct _PNR_PAUSE_AUDIO {
UCHAR OperationCode ;
UCHAR Reserved1 ;
UCHAR Pause ;
UCHAR Lun ;
UCHAR Reserved2[7] ;
UCHAR Link ;
UCHAR Flag ;
UCHAR Reserved3 ;
UCHAR Reserved4 ;
};
struct _PNR_AUDIO_STATUS {
UCHAR OperationCode ;
UCHAR Reserved1 ;
UCHAR Reserved2 ;
UCHAR Lun ;
UCHAR Reserved3[6] ;
UCHAR AssignedLength ;
UCHAR Link ;
UCHAR Flag ;
UCHAR Reserved4 ;
UCHAR Reserved5 ;
};
struct _PNR_READ_Q_CHANNEL {
UCHAR OperationCode ;
UCHAR Reserved1 ;
UCHAR Reserved2 ;
UCHAR Lun ;
UCHAR Reserved3[6] ;
UCHAR AssignedLength ;
UCHAR Link ;
UCHAR Flag ;
UCHAR Reserved4 ;
UCHAR Reserved5 ;
};
struct _PNR_EJECT {
UCHAR OperationCode ;
UCHAR Immediate ;
UCHAR Reserved1 ;
UCHAR Lun ;
UCHAR Reserved2[7] ;
UCHAR Link ;
UCHAR Flag ;
UCHAR Reserved4 ;
UCHAR Reserved5 ;
};
struct _PNR_READ_STATUS {
UCHAR OperationCode ;
UCHAR Reserved1 ;
UCHAR Lun ;
UCHAR PageCode ;
UCHAR PCField ;
UCHAR Reserved2[5] ;
UCHAR AllocationLengthMsb ;
UCHAR AllocationLengthLsb ;
UCHAR Link ;
UCHAR Flag ;
UCHAR Reserved3 ;
UCHAR Reserved4 ;
};
union _PIONEER_CDB {
struct _PNR_START_STOP PNR_START_STOP ;
struct _PNR_START_STOP *PPNR_START_STOP ;
struct _PNR_READ_TOC PNR_READ_TOC ;
struct _PNR_READ_TOC *PPNR_READ_TOC ;
struct _PNR_PLAY_AUDIO PNR_PLAY_AUDIO ;
struct _PNR_PLAY_AUDIO *PPNR_PLAY_AUDIO ;
struct _PNR_SEEK_AUDIO PNR_SEEK_AUDIO ;
struct _PNR_SEEK_AUDIO *PPNR_SEEK_AUDIO ;
struct _PNR_PAUSE_AUDIO PNR_PAUSE_AUDIO ;
struct _PNR_PAUSE_AUDIO *PPNR_PAUSE_AUDIO ;
struct _PNR_AUDIO_STATUS PNR_AUDIO_STATUS ;
struct _PNR_AUDIO_STATUS *PPNR_AUDIO_STATUS ;
struct _PNR_READ_Q_CHANNEL PNR_READ_Q_CHANNEL ;
struct _PNR_READ_Q_CHANNEL *PPNR_READ_Q_CHANNEL ;
struct _PNR_EJECT PNR_EJECT ;
struct _PNR_EJECT *PPNR_EJECT ;
struct _PNR_READ_STATUS PNR_READ_STATUS ;
struct _PNR_READ_STATUS *PPNR_READ_STATUS ;
};
typedef union _PIONEER_CDB PNR_CDB;
typedef union _PIONEER_CDB *PPNR_CDB;
struct _READ_DISC_INFO {
UCHAR OperationCode ;
UCHAR Reserved ;
UCHAR LogicalUnitNumber ;
UCHAR Reserved1[7] ;
UCHAR AllocationLength[2] ;
UCHAR Link ;
UCHAR Flag ;
UCHAR Reserved2 ;
UCHAR VendorUniqueBits ;
};
struct __anonstruct_PLAY_AUDIO_127 {
UCHAR OperationCode ;
UCHAR Immediate ;
UCHAR Right ;
UCHAR Left ;
UCHAR Reserved ;
UCHAR Lun ;
UCHAR StartingM ;
UCHAR StartingS ;
UCHAR StartingF ;
UCHAR Reserved1[2] ;
UCHAR EndingM ;
UCHAR EndingS ;
UCHAR EndingF ;
UCHAR Reserved2 ;
UCHAR Link ;
UCHAR Flag ;
UCHAR Reserved3 ;
UCHAR VendorUniqueBits ;
};
struct _PAUSE {
UCHAR OperationCode ;
UCHAR Reserved ;
UCHAR Lun ;
UCHAR Reserved1[9] ;
UCHAR Link ;
UCHAR Flag ;
UCHAR Reserved2 ;
UCHAR VendorUnqiueBits ;
};
struct _EJECT {
UCHAR OperationCode ;
UCHAR Reserved ;
UCHAR Lun ;
UCHAR Reserved1[8] ;
UCHAR Eject ;
UCHAR Mode ;
UCHAR Reserved2 ;
UCHAR Link ;
UCHAR Flag ;
UCHAR Reserved3 ;
UCHAR VendorUnqiueBits ;
};
struct _AUDIO_STATUS {
UCHAR OperationCode ;
UCHAR Reserved ;
UCHAR Lun ;
UCHAR Reserved1[9] ;
UCHAR Link ;
UCHAR Flag ;
UCHAR Reserved2 ;
UCHAR VendorUnqiueBits ;
};
struct _STOP_PLAY {
UCHAR OperationCode ;
UCHAR Reserved[11] ;
};
union _HITACHICDB {
struct _READ_DISC_INFO READ_DISC_INFO ;
struct _READ_DISC_INFO *PREAD_DISC_INFO ;
struct __anonstruct_PLAY_AUDIO_127 PLAY_AUDIO ;
struct __anonstruct_PLAY_AUDIO_127 *PPLAY_AUDIO ;
struct _PAUSE PAUSE_AUDIO ;
struct _PAUSE *PPAUSE_AUDIO ;
struct _EJECT EJECT ;
struct _EJECT *PEJECT ;
struct _AUDIO_STATUS AUDIO_STATUS ;
struct _AUDIO_STATUS *PAUDIO_STATUS ;
struct _STOP_PLAY STOP_PLAY ;
struct _STOP_PLAY *PSTOP_PLAY ;
};
typedef union _HITACHICDB HITACHICDB;
typedef union _HITACHICDB *PHITACHICDB;
char SLAM_alloc_dummy  ;
extern PKTHREAD KeGetCurrentThread() ;
extern PCCHAR KeNumberProcessors ;
NTSTATUS RtlQueryRegistryValues(ULONG RelativeTo , PCWSTR Path , PRTL_QUERY_REGISTRY_TABLE QueryTable , PVOID Context , PVOID Environment ) ;
NTSTATUS RtlWriteRegistryValue(ULONG RelativeTo , PCWSTR Path , PCWSTR ValueName , ULONG ValueType , PVOID ValueData , ULONG ValueLength ) ;
NTSTATUS RtlDeleteRegistryValue(ULONG RelativeTo , PCWSTR Path , PCWSTR ValueName ) ;
SIZE_T RtlCompareMemory(void *Source1 , void *Source2 , SIZE_T Length ) ;
NTSTATUS RtlAnsiStringToUnicodeString(PUNICODE_STRING DestinationString , PANSI_STRING SourceString , BOOLEAN AllocateDestinationString ) ;
extern PVOID *MmHighestUserAddress ;
extern PVOID *MmSystemRangeStart ;
extern ULONG *MmUserProbeAddress ;
LONG InterlockedIncrement(PLONG Addend ) ;
LONG InterlockedDecrement(PLONG Addend ) ;
extern KIRQL KeGetCurrentIrql() ;
void KeInitializeEvent(PRKEVENT Event , EVENT_TYPE Type , BOOLEAN State ) ;
void KeInitializeSemaphore(PRKSEMAPHORE Semaphore , LONG Count , LONG Limit ) ;
NTSTATUS KeWaitForSingleObject(PVOID Object , KWAIT_REASON WaitReason , KPROCESSOR_MODE WaitMode , BOOLEAN Alertable , PLARGE_INTEGER Timeout ) ;
void KeInitializeSpinLock(PKSPIN_LOCK SpinLock ) ;
extern KSYSTEM_TIME volatile   KeTickCount ;
extern PBOOLEAN KdDebuggerNotPresent ;
extern PBOOLEAN KdDebuggerEnabled ;
extern PVOID ExAllocatePool(POOL_TYPE PoolType , SIZE_T NumberOfBytes ) ;
PVOID ExAllocatePoolWithTag(POOL_TYPE PoolType , SIZE_T NumberOfBytes , ULONG Tag ) ;
void ExFreePool(PVOID P ) ;
extern PBOOLEAN Mm64BitPhysicalAddress ;
PVOID MmLockPagableDataSection(PVOID AddressWithinSection ) ;
void MmUnlockPages(PMDL MemoryDescriptorList ) ;
NTSTATUS PsCreateSystemThread(PHANDLE ThreadHandle , ULONG DesiredAccess , POBJECT_ATTRIBUTES ObjectAttributes , HANDLE ProcessHandle , PCLIENT_ID ClientId , void (*StartRoutine)(PVOID StartContext ) , PVOID StartContext ) ;
NTSTATUS PsTerminateSystemThread(NTSTATUS ExitStatus ) ;
PMDL IoAllocateMdl(PVOID VirtualAddress , ULONG Length , BOOLEAN SecondaryBuffer , BOOLEAN ChargeQuota , PIRP Irp ) ;
extern NTSTATUS IoAttachDevice(PDEVICE_OBJECT SourceDevice , PUNICODE_STRING TargetDevice , PDEVICE_OBJECT *AttachedDevice ) ;
PDEVICE_OBJECT IoAttachDeviceToDeviceStack(PDEVICE_OBJECT SourceDevice , PDEVICE_OBJECT TargetDevice ) ;
PIRP IoBuildAsynchronousFsdRequest(ULONG MajorFunction , PDEVICE_OBJECT DeviceObject , PVOID Buffer , ULONG Length , PLARGE_INTEGER StartingOffset , PIO_STATUS_BLOCK IoStatusBlock ) ;
PIRP IoBuildDeviceIoControlRequest(ULONG IoControlCode , PDEVICE_OBJECT DeviceObject , PVOID InputBuffer , ULONG InputBufferLength , PVOID OutputBuffer , ULONG OutputBufferLength , BOOLEAN InternalDeviceIoControl , PKEVENT Event , PIO_STATUS_BLOCK IoStatusBlock ) ;
NTSTATUS IofCallDriver(PDEVICE_OBJECT DeviceObject , PIRP Irp ) ;
void IofCompleteRequest(PIRP Irp , CCHAR PriorityBoost ) ;
NTSTATUS IoCreateDevice(PDRIVER_OBJECT DriverObject , ULONG DeviceExtensionSize , PUNICODE_STRING DeviceName , ULONG DeviceType , ULONG DeviceCharacteristics , BOOLEAN Exclusive , PDEVICE_OBJECT *DeviceObject ) ;
NTSTATUS IoCreateSymbolicLink(PUNICODE_STRING SymbolicLinkName , PUNICODE_STRING DeviceName ) ;
void IoDeleteDevice(PDEVICE_OBJECT DeviceObject ) ;
NTSTATUS IoDeleteSymbolicLink(PUNICODE_STRING SymbolicLinkName ) ;
void IoDetachDevice(PDEVICE_OBJECT TargetDevice ) ;
void IoFreeIrp(PIRP Irp ) ;
void IoFreeMdl(PMDL Mdl ) ;
PCONFIGURATION_INFORMATION IoGetConfigurationInformation(void) ;
void IoReleaseCancelSpinLock(KIRQL Irql ) ;
extern NTSTATUS HalAssignSlotResources(PUNICODE_STRING RegistryPath , PUNICODE_STRING DriverClassName , PDRIVER_OBJECT DriverObject , PDEVICE_OBJECT DeviceObject , INTERFACE_TYPE BusType , ULONG BusNumber , ULONG SlotNumber , PCM_RESOURCE_LIST *AllocatedResources ) ;
extern PHAL_DISPATCH HalDispatchTable ;
NTSTATUS PoCallDriver(PDEVICE_OBJECT DeviceObject , PIRP Irp ) ;
void PoStartNextPowerIrp(PIRP Irp ) ;
NTSTATUS ObReferenceObjectByHandle(HANDLE Handle , ACCESS_MASK DesiredAccess , POBJECT_TYPE ObjectType , KPROCESSOR_MODE AccessMode , PVOID *Object , POBJECT_HANDLE_INFORMATION HandleInformation ) ;
NTSTATUS KeDelayExecutionThread(KPROCESSOR_MODE WaitMode , BOOLEAN Alertable , PLARGE_INTEGER Interval ) ;
LONG KeSetEvent(PRKEVENT Event , KPRIORITY Increment , BOOLEAN Wait ) ;
POBJECT_TYPE *IoFileObjectType  ;
POBJECT_TYPE *ExEventObjectType  ;
POBJECT_TYPE *ExSemaphoreObjectType  ;
NTSTATUS ZwClose(HANDLE Handle ) ;
extern GUID ScsiRawInterfaceGuid ;
extern GUID WmiScsiAddressGuid ;
extern GUID DiskClassGuid ;
extern GUID CdRomClassGuid ;
extern GUID PartitionClassGuid ;
extern GUID TapeClassGuid ;
extern GUID WriteOnceDiskClassGuid ;
extern GUID VolumeClassGuid ;
extern GUID MediumChangerClassGuid ;
extern GUID FloppyClassGuid ;
extern GUID CdChangerClassGuid ;
extern GUID StoragePortClassGuid ;
int s  ;
int UNLOADED  ;
int NP  ;
int DC  ;
int SKIP1  ;
int SKIP2  ;
int MPR1  ;
int MPR3  ;
int IPC  ;
int pended  ;
NTSTATUS (*compFptr)(PDEVICE_OBJECT DeviceObject , PIRP Irp , PVOID Context )  ;
int compRegistered  ;
int lowerDriverReturn  ;
int setEventCalled  ;
int customIrp  ;
int routine  ;
int myStatus  ;
int myIrpPendingReturned  ;
NTSTATUS DriverEntry(PDRIVER_OBJECT DriverObject , PUNICODE_STRING RegistryPath ) ;
extern NTSTATUS CdAudioCreate(PDEVICE_OBJECT DeviceObject , PIRP Irp ) ;
NTSTATUS CdAudioReadWrite(PDEVICE_OBJECT DeviceObject , PIRP Irp ) ;
NTSTATUS CdAudioDeviceControl(PDEVICE_OBJECT DeviceObject , PIRP Irp ) ;
NTSTATUS CdAudioSendToNextDriver(PDEVICE_OBJECT DeviceObject , PIRP Irp ) ;
BOOLEAN CdAudioIsPlayActive(PDEVICE_OBJECT DeviceObject ) ;
BOOLEAN NecSupportNeeded(PUCHAR InquiryData ) ;
NTSTATUS CdAudioNECDeviceControl(PDEVICE_OBJECT DeviceObject , PIRP Irp ) ;
NTSTATUS CdAudioPioneerDeviceControl(PDEVICE_OBJECT DeviceObject , PIRP Irp ) ;
NTSTATUS CdAudioDenonDeviceControl(PDEVICE_OBJECT DeviceObject , PIRP Irp ) ;
NTSTATUS CdAudioHitachiSendPauseCommand(PDEVICE_OBJECT DeviceObject ) ;
NTSTATUS CdAudioHitachiDeviceControl(PDEVICE_OBJECT DeviceObject , PIRP Irp ) ;
NTSTATUS CdAudio535DeviceControl(PDEVICE_OBJECT DeviceObject , PIRP Irp ) ;
NTSTATUS CdAudio435DeviceControl(PDEVICE_OBJECT DeviceObject , PIRP Irp ) ;
extern NTSTATUS CdAudioPan533DeviceControl(PDEVICE_OBJECT DeviceObject , PIRP Irp ) ;
NTSTATUS CdAudioAtapiDeviceControl(PDEVICE_OBJECT DeviceObject , PIRP Irp ) ;
extern NTSTATUS CdAudioLionOpticsDeviceControl(PDEVICE_OBJECT DeviceObject , PIRP Irp ) ;
NTSTATUS CdAudioHPCdrDeviceControl(PDEVICE_OBJECT DeviceObject , PIRP Irp ) ;
void HpCdrProcessLastSession(PCDROM_TOC Toc ) ;
NTSTATUS HPCdrCompletion(PDEVICE_OBJECT DeviceObject , PIRP Irp , PVOID Context ) ;
NTSTATUS CdAudioPower(PDEVICE_OBJECT DeviceObject , PIRP Irp ) ;
NTSTATUS CdAudioForwardIrpSynchronous(PDEVICE_OBJECT DeviceObject , PIRP Irp ) ;
void CdAudioUnload(PDRIVER_OBJECT DriverObject ) ;
void IoSetHardErrorOrVerifyDevice(PIRP Irp , PDEVICE_OBJECT DeviceObject ) ;
IRP *pirp  ;
extern int ( /* missing proto */  _SLICE)() ;
char *malloc(int i )
{
	return (& SLAM_alloc_dummy);
	/* END OF PATH at func_malloc@p1#1 */
}

void *memcpy(void *a , void *b , size_t c )
{ int x ;
	return ((void *)x);
	/* END OF PATH at func_memcpy@p2#1 */
}

int memcmp(void *a , void *b , size_t c )
{ int x ;
	return (x);
	/* END OF PATH at func_memcmp@p2#1 */
}

void *memset(void *a , int b , size_t c )
{ int x ;
	return ((void *)x);
	/* END OF PATH at func_memset@p2#1 */
}

NTSTATUS RtlQueryRegistryValues(ULONG RelativeTo , PCWSTR Path , PRTL_QUERY_REGISTRY_TABLE QueryTable , PVOID Context , PVOID Environment )
{ int BLAST_NONDET ;
	if(BLAST_NONDET == 0) {
		return (0L);
		/* END OF PATH at func_RtlQueryRegistryValues@p5#1 */
	}
	else if(BLAST_NONDET < 0) {
L1:;
		return (-1073741823L);
		/* END OF PATH at func_RtlQueryRegistryValues@p8#1 */
	}
	else {
		goto L1;
	}
}

NTSTATUS RtlWriteRegistryValue(ULONG RelativeTo , PCWSTR Path , PCWSTR ValueName , ULONG ValueType , PVOID ValueData , ULONG ValueLength )
{ NTSTATUS r ;
	return (r);
	/* END OF PATH at func_RtlWriteRegistryValue@p2#1 */
}

NTSTATUS RtlDeleteRegistryValue(ULONG RelativeTo , PCWSTR Path , PCWSTR ValueName )
{ int BLAST_NONDET ;
	if(BLAST_NONDET == 0) {
		return (0L);
		/* END OF PATH at func_RtlDeleteRegistryValue@p5#1 */
	}
	else if(BLAST_NONDET < 0) {
L1:;
		return (-1073741823L);
		/* END OF PATH at func_RtlDeleteRegistryValue@p8#1 */
	}
	else {
		goto L1;
	}
}

SIZE_T RtlCompareMemory(void *Source1 , void *Source2 , SIZE_T Length )
{ SIZE_T r ;
	return (r);
	/* END OF PATH at func_RtlCompareMemory@p2#1 */
}

NTSTATUS RtlAnsiStringToUnicodeString(PUNICODE_STRING DestinationString , PANSI_STRING SourceString , BOOLEAN AllocateDestinationString )
{ int BLAST_NONDET ;
	if(BLAST_NONDET == 0) {
		return (0L);
		/* END OF PATH at func_RtlAnsiStringToUnicodeString@p5#1 */
	}
	else if(BLAST_NONDET < 0) {
L1:;
		return (-1073741823L);
		/* END OF PATH at func_RtlAnsiStringToUnicodeString@p8#1 */
	}
	else {
		goto L1;
	}
}

LONG InterlockedIncrement(PLONG Addend )
{ LONG r ;
	return (r);
	/* END OF PATH at func_InterlockedIncrement@p2#1 */
}

LONG InterlockedDecrement(PLONG Addend )
{ LONG r ;
	return (r);
	/* END OF PATH at func_InterlockedDecrement@p2#1 */
}

void KeInitializeEvent(PRKEVENT Event , EVENT_TYPE Type , BOOLEAN State )
{
	/* END OF PATH at func_KeInitializeEvent@p1#1 */
}

void KeInitializeSemaphore(PRKSEMAPHORE Semaphore , LONG Count , LONG Limit )
{
	/* END OF PATH at func_KeInitializeSemaphore@p1#1 */
}

NTSTATUS KeWaitForSingleObject(PVOID Object , KWAIT_REASON WaitReason , KPROCESSOR_MODE WaitMode , BOOLEAN Alertable , PLARGE_INTEGER Timeout )
{ int BLAST_NONDET ;
	if(s == MPR3) {
		if(setEventCalled == 1) {
			s = NP;
			setEventCalled = 0;
L1:;
			if(BLAST_NONDET == 0) {
				return (0L);
				/* END OF PATH at func_KeWaitForSingleObject@p16#1 */
			}
			else if(BLAST_NONDET < 0) {
L2:;
				return (-1073741823L);
				/* END OF PATH at func_KeWaitForSingleObject@p19#1 */
			}
			else {
				goto L2;
			}
		}
		else if(setEventCalled < 1) {
L3:;
L4:;
			if(customIrp == 1) {
				s = NP;
				customIrp = 0;
				goto L1;
			}
			else if(customIrp < 1) {
				goto L1;
			}
			else {
				goto L1;
			}
		}
		else {
			goto L3;
		}
	}
	else if(s < MPR3) {
		goto L4;
	}
	else {
		goto L4;
	}
}

void KeInitializeSpinLock(PKSPIN_LOCK SpinLock )
{
	/* END OF PATH at func_KeInitializeSpinLock@p1#1 */
}

PVOID ExAllocatePoolWithTag(POOL_TYPE PoolType , SIZE_T NumberOfBytes , ULONG Tag )
{ PVOID x ;
char *tmp ;
	tmp = nondet_malloc((int )NumberOfBytes);
	x = (void *)tmp;
	return (x);
	/* END OF PATH at func_ExAllocatePoolWithTag@p5#1 */
}

void ExFreePool(PVOID P )
{
	/* END OF PATH at func_ExFreePool@p1#1 */
}

PVOID MmLockPagableDataSection(PVOID AddressWithinSection )
{
	return ((void *)0);
	/* END OF PATH at func_MmLockPagableDataSection@p1#1 */
}

void MmUnlockPages(PMDL MemoryDescriptorList )
{
	/* END OF PATH at func_MmUnlockPages@p1#1 */
}

NTSTATUS PsCreateSystemThread(PHANDLE ThreadHandle , ULONG DesiredAccess , POBJECT_ATTRIBUTES ObjectAttributes , HANDLE ProcessHandle , PCLIENT_ID ClientId , void (*StartRoutine)(PVOID StartContext ) , PVOID StartContext )
{ int BLAST_NONDET ;
	if(BLAST_NONDET == 0) {
		return (0L);
		/* END OF PATH at func_PsCreateSystemThread@p5#1 */
	}
	else if(BLAST_NONDET < 0) {
L1:;
		return (-1073741823L);
		/* END OF PATH at func_PsCreateSystemThread@p8#1 */
	}
	else {
		goto L1;
	}
}

NTSTATUS PsTerminateSystemThread(NTSTATUS ExitStatus )
{ int BLAST_NONDET ;
	if(BLAST_NONDET == 0) {
		return (0L);
		/* END OF PATH at func_PsTerminateSystemThread@p5#1 */
	}
	else if(BLAST_NONDET < 0) {
L1:;
		return (-1073741823L);
		/* END OF PATH at func_PsTerminateSystemThread@p8#1 */
	}
	else {
		goto L1;
	}
}

PMDL IoAllocateMdl(PVOID VirtualAddress , ULONG Length , BOOLEAN SecondaryBuffer , BOOLEAN ChargeQuota , PIRP Irp )
{ int BLAST_NONDET ;
char *tmp ;
	if(BLAST_NONDET == 0) {
		tmp = nondet_malloc((int )sizeof(MDL ));
		return ((struct _MDL *)((void *)tmp));
		/* END OF PATH at func_IoAllocateMdl@p7#1 */
	}
	else if(BLAST_NONDET < 0) {
L1:;
		return ((struct _MDL *)((void *)0));
		/* END OF PATH at func_IoAllocateMdl@p10#1 */
	}
	else {
		goto L1;
	}
}

PDEVICE_OBJECT IoAttachDeviceToDeviceStack(PDEVICE_OBJECT SourceDevice , PDEVICE_OBJECT TargetDevice )
{ int BLAST_NONDET ;
	if(BLAST_NONDET == 0) {
		return (TargetDevice);
		/* END OF PATH at func_IoAttachDeviceToDeviceStack@p5#1 */
	}
	else if(BLAST_NONDET < 0) {
L1:;
		return ((struct _DEVICE_OBJECT *)((void *)0));
		/* END OF PATH at func_IoAttachDeviceToDeviceStack@p8#1 */
	}
	else {
		goto L1;
	}
}

PIRP IoBuildAsynchronousFsdRequest(ULONG MajorFunction , PDEVICE_OBJECT DeviceObject , PVOID Buffer , ULONG Length , PLARGE_INTEGER StartingOffset , PIO_STATUS_BLOCK IoStatusBlock )
{ int BLAST_NONDET ;
char *tmp ;
	customIrp = 1;
	if(BLAST_NONDET == 0) {
		tmp = malloc((int )sizeof(IRP ));
		return ((struct _IRP *)((void *)tmp));
		/* END OF PATH at func_IoBuildAsynchronousFsdRequest@p8#1 */
	}
	else if(BLAST_NONDET < 0) {
L1:;
		return ((struct _IRP *)((void *)0));
		/* END OF PATH at func_IoBuildAsynchronousFsdRequest@p11#1 */
	}
	else {
		goto L1;
	}
}

PIRP IoBuildDeviceIoControlRequest(ULONG IoControlCode , PDEVICE_OBJECT DeviceObject , PVOID InputBuffer , ULONG InputBufferLength , PVOID OutputBuffer , ULONG OutputBufferLength , BOOLEAN InternalDeviceIoControl , PKEVENT Event , PIO_STATUS_BLOCK IoStatusBlock )
{ int BLAST_NONDET ;
char *tmp ;
	customIrp = 1;
	if(BLAST_NONDET == 0) {
		tmp = malloc((int )sizeof(IRP ));
		return ((struct _IRP *)((void *)tmp));
		/* END OF PATH at func_IoBuildDeviceIoControlRequest@p8#1 */
	}
	else if(BLAST_NONDET < 0) {
L1:;
		return ((struct _IRP *)((void *)0));
		/* END OF PATH at func_IoBuildDeviceIoControlRequest@p11#1 */
	}
	else {
		goto L1;
	}
}

NTSTATUS IofCallDriver(PDEVICE_OBJECT DeviceObject , PIRP Irp )
{ int BLAST_NONDET ;
NTSTATUS returnVal2 ;
int compRetStatus ;
PVOID lcontext ;
NTSTATUS tmp ;
NTSTATUS tmp___0 ;
	if(compRegistered > 0) {
L1:;
		if(routine == 0) {
			tmp = HPCdrCompletion(DeviceObject, Irp, lcontext);
			compRetStatus = (int )tmp;
L2:;
			if(compRetStatus == -1073741802L) {
				stubMoreProcessingRequired();
L3:;
				if(myIrpPendingReturned > 0) {
L4:;
					returnVal2 = 259L;
L5:;
					if(s == NP) {
L6:;
						s = IPC;
						lowerDriverReturn = (int )returnVal2;
L7:;
						return (returnVal2);
						/* END OF PATH at func_IofCallDriver@p46#1 */
					}
					else if(s < NP) {
L8:;
						if(s == MPR1) {
							if(returnVal2 == 259L) {
								s = MPR3;
								lowerDriverReturn = (int )returnVal2;
L9:;
								goto L7;
							}
							else if(returnVal2 < 259L) {
								/* FALSE PATH */ 
							}
							else {
								/* FALSE PATH */ 
							}
						}
						else if(s < MPR1) {
L10:;
							s = SKIP2;
							lowerDriverReturn = (int )returnVal2;
							goto L7;
						}
						else {
							goto L10;
						}
					}
					else {
						goto L8;
					}
				}
				else if(myIrpPendingReturned < 0) {
					goto L4;
				}
				else {
					if(BLAST_NONDET == 0) {
						returnVal2 = 0L;
						if(s == NP) {
							goto L6;
						}
						else if(s < NP) {
L11:;
							if(s == MPR1) {
								if(returnVal2 < 259L) {
L12:;
									s = NP;
									lowerDriverReturn = (int )returnVal2;
									goto L9;
								}
								else if(returnVal2 == 259L) {
									/* FALSE PATH */ 
								}
								else {
									/* FALSE PATH */ 
								}
							}
							else if(s < MPR1) {
								goto L10;
							}
							else {
								goto L10;
							}
						}
						else {
							goto L11;
						}
					}
					else if(BLAST_NONDET == 1) {
						returnVal2 = -1073741823L;
						if(s == NP) {
							goto L6;
						}
						else if(s < NP) {
L13:;
							if(s == MPR1) {
								if(returnVal2 < 259L) {
									goto L12;
								}
								else if(returnVal2 == 259L) {
									/* FALSE PATH */ 
								}
								else {
									/* FALSE PATH */ 
								}
							}
							else if(s < MPR1) {
								goto L10;
							}
							else {
								goto L10;
							}
						}
						else {
							goto L13;
						}
					}
					else if(BLAST_NONDET < 0) {
L14:;
						returnVal2 = 259L;
						goto L5;
					}
					else if(BLAST_NONDET > 0 && BLAST_NONDET < 1) {
						goto L14;
					}
					else {
						goto L14;
					}
				}
			}
			else if(compRetStatus < -1073741802L) {
				goto L3;
			}
			else {
				goto L3;
			}
		}
		else if(routine < 0) {
			if(routine < 1) {
				goto L2;
			}
			else if(routine == 1) {
				/* FALSE PATH */ 
			}
			else {
				/* FALSE PATH */ 
			}
		}
		else {
			if(routine == 1) {
				tmp___0 = CdAudioSignalCompletion(DeviceObject, Irp, (struct _KEVENT *)lcontext);
				compRetStatus = (int )tmp___0;
				goto L2;
			}
			else if(routine < 1) {
				goto L2;
			}
			else {
				goto L2;
			}
		}
	}
	else if(compRegistered < 0) {
		goto L1;
	}
	else {
		goto L3;
	}
}

void IofCompleteRequest(PIRP Irp , CCHAR PriorityBoost )
{
	s = DC;
	/* END OF PATH at func_IofCompleteRequest@p2#1 */
}

NTSTATUS IoCreateDevice(PDRIVER_OBJECT DriverObject , ULONG DeviceExtensionSize , PUNICODE_STRING DeviceName , ULONG DeviceType , ULONG DeviceCharacteristics , BOOLEAN Exclusive , PDEVICE_OBJECT *DeviceObject )
{ int BLAST_NONDET ;
char *tmp ;
	if(BLAST_NONDET == 0) {
		tmp = malloc((int )sizeof(DEVICE_OBJECT ));
		*DeviceObject = (struct _DEVICE_OBJECT *)((void *)tmp);
		return (0L);
		/* END OF PATH at func_IoCreateDevice@p8#1 */
	}
	else if(BLAST_NONDET < 0) {
L1:;
		return (-1073741823L);
		/* END OF PATH at func_IoCreateDevice@p11#1 */
	}
	else {
		goto L1;
	}
}

NTSTATUS IoCreateSymbolicLink(PUNICODE_STRING SymbolicLinkName , PUNICODE_STRING DeviceName )
{ int BLAST_NONDET ;
	if(BLAST_NONDET == 0) {
		return (0L);
		/* END OF PATH at func_IoCreateSymbolicLink@p5#1 */
	}
	else if(BLAST_NONDET < 0) {
L1:;
		return (-1073741823L);
		/* END OF PATH at func_IoCreateSymbolicLink@p8#1 */
	}
	else {
		goto L1;
	}
}

void IoDeleteDevice(PDEVICE_OBJECT DeviceObject )
{
	/* END OF PATH at func_IoDeleteDevice@p1#1 */
}

NTSTATUS IoDeleteSymbolicLink(PUNICODE_STRING SymbolicLinkName )
{ int BLAST_NONDET ;
	if(BLAST_NONDET == 0) {
		return (0L);
		/* END OF PATH at func_IoDeleteSymbolicLink@p5#1 */
	}
	else if(BLAST_NONDET < 0) {
L1:;
		return (-1073741823L);
		/* END OF PATH at func_IoDeleteSymbolicLink@p8#1 */
	}
	else {
		goto L1;
	}
}

void IoDetachDevice(PDEVICE_OBJECT TargetDevice )
{
	/* END OF PATH at func_IoDetachDevice@p1#1 */
}

void IoFreeIrp(PIRP Irp )
{
	/* END OF PATH at func_IoFreeIrp@p1#1 */
}

void IoFreeMdl(PMDL Mdl )
{
	/* END OF PATH at func_IoFreeMdl@p1#1 */
}

PCONFIGURATION_INFORMATION IoGetConfigurationInformation(void)
{ char *tmp ;
	tmp = nondet_malloc((int )sizeof(CONFIGURATION_INFORMATION ));
	return ((struct _CONFIGURATION_INFORMATION *)((void *)tmp));
	/* END OF PATH at func_IoGetConfigurationInformation@p3#1 */
}

void IoReleaseCancelSpinLock(KIRQL Irql )
{
	/* END OF PATH at func_IoReleaseCancelSpinLock@p1#1 */
}

NTSTATUS PoCallDriver(PDEVICE_OBJECT DeviceObject , PIRP Irp )
{ int BLAST_NONDET ;
int compRetStatus ;
NTSTATUS returnVal ;
PVOID lcontext ;
NTSTATUS tmp ;
NTSTATUS tmp___0 ;
	if(compRegistered > 0) {
L1:;
		if(routine == 0) {
			tmp = HPCdrCompletion(DeviceObject, Irp, lcontext);
			compRetStatus = (int )tmp;
L2:;
			if(compRetStatus == -1073741802L) {
				stubMoreProcessingRequired();
L3:;
				if(BLAST_NONDET == 0) {
					returnVal = 0L;
					if(s == NP) {
L4:;
						s = IPC;
						lowerDriverReturn = (int )returnVal;
L5:;
						return (returnVal);
						/* END OF PATH at func_PoCallDriver@p43#1 */
					}
					else if(s < NP) {
L6:;
						if(s == MPR1) {
							if(returnVal < 259L) {
L7:;
								s = NP;
								lowerDriverReturn = (int )returnVal;
L8:;
								goto L5;
							}
							else if(returnVal == 259L) {
								/* FALSE PATH */ 
							}
							else {
								/* FALSE PATH */ 
							}
						}
						else if(s < MPR1) {
L9:;
							s = SKIP2;
							lowerDriverReturn = (int )returnVal;
							goto L5;
						}
						else {
							goto L9;
						}
					}
					else {
						goto L6;
					}
				}
				else if(BLAST_NONDET == 1) {
					returnVal = -1073741823L;
					if(s == NP) {
						goto L4;
					}
					else if(s < NP) {
L10:;
						if(s == MPR1) {
							if(returnVal < 259L) {
								goto L7;
							}
							else if(returnVal == 259L) {
								/* FALSE PATH */ 
							}
							else {
								/* FALSE PATH */ 
							}
						}
						else if(s < MPR1) {
							goto L9;
						}
						else {
							goto L9;
						}
					}
					else {
						goto L10;
					}
				}
				else if(BLAST_NONDET < 0) {
L11:;
					returnVal = 259L;
					if(s == NP) {
						goto L4;
					}
					else if(s < NP) {
L12:;
						if(s == MPR1) {
							if(returnVal == 259L) {
								s = MPR3;
								lowerDriverReturn = (int )returnVal;
								goto L8;
							}
							else if(returnVal < 259L) {
								/* FALSE PATH */ 
							}
							else {
								/* FALSE PATH */ 
							}
						}
						else if(s < MPR1) {
							goto L9;
						}
						else {
							goto L9;
						}
					}
					else {
						goto L12;
					}
				}
				else if(BLAST_NONDET > 0 && BLAST_NONDET < 1) {
					goto L11;
				}
				else {
					goto L11;
				}
			}
			else if(compRetStatus < -1073741802L) {
				goto L3;
			}
			else {
				goto L3;
			}
		}
		else if(routine < 0) {
			if(routine < 1) {
				goto L2;
			}
			else if(routine == 1) {
				/* FALSE PATH */ 
			}
			else {
				/* FALSE PATH */ 
			}
		}
		else {
			if(routine == 1) {
				tmp___0 = CdAudioSignalCompletion(DeviceObject, Irp, (struct _KEVENT *)lcontext);
				compRetStatus = (int )tmp___0;
				goto L2;
			}
			else if(routine < 1) {
				goto L2;
			}
			else {
				goto L2;
			}
		}
	}
	else if(compRegistered < 0) {
		goto L1;
	}
	else {
		goto L3;
	}
}

void PoStartNextPowerIrp(PIRP Irp )
{
	/* END OF PATH at func_PoStartNextPowerIrp@p1#1 */
}

NTSTATUS ObReferenceObjectByHandle(HANDLE Handle , ACCESS_MASK DesiredAccess , POBJECT_TYPE ObjectType , KPROCESSOR_MODE AccessMode , PVOID *Object , POBJECT_HANDLE_INFORMATION HandleInformation )
{ int BLAST_NONDET ;
	if(BLAST_NONDET == 0) {
		return (0L);
		/* END OF PATH at func_ObReferenceObjectByHandle@p5#1 */
	}
	else if(BLAST_NONDET < 0) {
L1:;
		return (-1073741823L);
		/* END OF PATH at func_ObReferenceObjectByHandle@p8#1 */
	}
	else {
		goto L1;
	}
}

NTSTATUS KeDelayExecutionThread(KPROCESSOR_MODE WaitMode , BOOLEAN Alertable , PLARGE_INTEGER Interval )
{ int BLAST_NONDET ;
	if(BLAST_NONDET == 0) {
		return (0L);
		/* END OF PATH at func_KeDelayExecutionThread@p5#1 */
	}
	else if(BLAST_NONDET < 0) {
L1:;
		return (-1073741823L);
		/* END OF PATH at func_KeDelayExecutionThread@p8#1 */
	}
	else {
		goto L1;
	}
}

LONG KeSetEvent(PRKEVENT Event , KPRIORITY Increment , BOOLEAN Wait )
{ LONG l ;
	setEventCalled = 1;
	return (l);
	/* END OF PATH at func_KeSetEvent@p3#1 */
}

NTSTATUS ZwClose(HANDLE Handle )
{ int BLAST_NONDET ;
	if(BLAST_NONDET == 0) {
		return (0L);
		/* END OF PATH at func_ZwClose@p5#1 */
	}
	else if(BLAST_NONDET < 0) {
L1:;
		return (-1073741823L);
		/* END OF PATH at func_ZwClose@p8#1 */
	}
	else {
		goto L1;
	}
}

void _BLAST_init(void)
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
	compFptr = (NTSTATUS (*)(PDEVICE_OBJECT DeviceObject , PIRP Irp , PVOID Context ))0;
	compRegistered = 0;
	lowerDriverReturn = 0;
	setEventCalled = 0;
	customIrp = 0;
	/* END OF PATH at func__BLAST_init@p16#1 */
}

NTSTATUS DriverEntry(PDRIVER_OBJECT DriverObject , PUNICODE_STRING RegistryPath )
{ ULONG i ;
	return (0L);
	/* END OF PATH at func_DriverEntry@p2#1 */
}

NTSTATUS CdAudioReadWrite(PDEVICE_OBJECT DeviceObject , PIRP Irp )
{ PCD_DEVICE_EXTENSION deviceExtension ;
NTSTATUS tmp ;
	deviceExtension = (struct _CD_DEVICE_EXTENSION *)DeviceObject->DeviceExtension;
	if(deviceExtension->PlayActive > 0) {
L1:;
		Irp->IoStatus.__annonCompField4.Status = -2147483631L;
		myStatus = -2147483631;
		IofCompleteRequest(Irp, (char)0);
		return (-2147483631L);
		/* END OF PATH at func_CdAudioReadWrite@p8#1 */
	}
	else if(deviceExtension->PlayActive < 0) {
		goto L1;
	}
	else {
		tmp = CdAudioSendToNextDriver(DeviceObject, Irp);
		return (tmp);
		/* END OF PATH at func_CdAudioReadWrite@p11#1 */
	}
}

NTSTATUS CdAudioDeviceControl(PDEVICE_OBJECT DeviceObject , PIRP Irp )
{ PCD_DEVICE_EXTENSION deviceExtension ;
NTSTATUS status ;
	deviceExtension = (struct _CD_DEVICE_EXTENSION *)DeviceObject->DeviceExtension;
	if(deviceExtension->Active == 255) {
		status = CdAudioSendToNextDriver(DeviceObject, Irp);
L1:;
		return (status);
		/* END OF PATH at func_CdAudioDeviceControl@p42#1 */
	}
	else if(deviceExtension->Active == 0) {
		status = CdAudioSendToNextDriver(DeviceObject, Irp);
		goto L1;
	}
	else if(deviceExtension->Active == 8) {
		status = CdAudioNECDeviceControl(DeviceObject, Irp);
		goto L1;
	}
	else if(deviceExtension->Active == 9) {
		status = CdAudioPioneerDeviceControl(DeviceObject, Irp);
L2:;
		goto L1;
	}
	else if(deviceExtension->Active == 10) {
		status = CdAudioPioneerDeviceControl(DeviceObject, Irp);
		goto L2;
	}
	else if(deviceExtension->Active == 4) {
		status = CdAudioDenonDeviceControl(DeviceObject, Irp);
		goto L1;
	}
	else if(deviceExtension->Active == 5) {
		status = CdAudioHitachiDeviceControl(DeviceObject, Irp);
L3:;
		goto L1;
	}
	else if(deviceExtension->Active == 6) {
		status = CdAudioHitachiDeviceControl(DeviceObject, Irp);
		goto L3;
	}
	else if(deviceExtension->Active == 2) {
		status = CdAudio535DeviceControl(DeviceObject, Irp);
		goto L1;
	}
	else if(deviceExtension->Active == 3) {
		status = CdAudio435DeviceControl(DeviceObject, Irp);
		goto L1;
	}
	else if(deviceExtension->Active == 1) {
		status = CdAudioAtapiDeviceControl(DeviceObject, Irp);
		goto L1;
	}
	else if(deviceExtension->Active == 7) {
		status = CdAudioHPCdrDeviceControl(DeviceObject, Irp);
		goto L1;
	}
	else if(deviceExtension->Active < 0) {
L4:;
		deviceExtension->Active = (unsigned char)0;
		status = CdAudioSendToNextDriver(DeviceObject, Irp);
		goto L1;
	}
	else if(deviceExtension->Active > 0 && deviceExtension->Active < 1) {
		goto L4;
	}
	else if(deviceExtension->Active > 1 && deviceExtension->Active < 2) {
		goto L4;
	}
	else if(deviceExtension->Active > 2 && deviceExtension->Active < 3) {
		goto L4;
	}
	else if(deviceExtension->Active > 3 && deviceExtension->Active < 4) {
		goto L4;
	}
	else if(deviceExtension->Active > 4 && deviceExtension->Active < 5) {
		goto L4;
	}
	else if(deviceExtension->Active > 5 && deviceExtension->Active < 6) {
		goto L4;
	}
	else if(deviceExtension->Active > 6 && deviceExtension->Active < 7) {
		goto L4;
	}
	else if(deviceExtension->Active > 7 && deviceExtension->Active < 8) {
		goto L4;
	}
	else if(deviceExtension->Active > 8 && deviceExtension->Active < 9) {
		goto L4;
	}
	else if(deviceExtension->Active > 9 && deviceExtension->Active < 10) {
		goto L4;
	}
	else if(deviceExtension->Active > 10 && deviceExtension->Active < 255) {
		goto L4;
	}
	else {
		goto L4;
	}
}

NTSTATUS CdAudioSendToNextDriver(PDEVICE_OBJECT DeviceObject , PIRP Irp )
{ PCD_DEVICE_EXTENSION deviceExtension ;
NTSTATUS tmp ;
	deviceExtension = (PCD_DEVICE_EXTENSION )DeviceObject->DeviceExtension;
	deviceExtension = (struct _CD_DEVICE_EXTENSION *)DeviceObject->DeviceExtension;
	s = SKIP1;
	Irp->CurrentLocation = (CHAR )((int )Irp->CurrentLocation + 1);
	Irp->Tail.Overlay.__annonCompField17.__annonCompField16.CurrentStackLocation = Irp->Tail.Overlay.__annonCompField17.__annonCompField16.CurrentStackLocation + 1;
	tmp = IofCallDriver(deviceExtension->TargetDeviceObject, Irp);
	return (tmp);
	/* END OF PATH at func_CdAudioSendToNextDriver@p9#1 */
}

BOOLEAN CdAudioIsPlayActive(PDEVICE_OBJECT DeviceObject )
{ PCD_DEVICE_EXTENSION deviceExtension ;
PIRP irp_CdAudioIsPlayActive ;
IO_STATUS_BLOCK ioStatus ;
KEVENT event ;
NTSTATUS status ;
PSUB_Q_CURRENT_POSITION currentBuffer ;
BOOLEAN returnValue__ ;
ULONG tag_1 ;
PVOID tmp ;
	deviceExtension = (struct _CD_DEVICE_EXTENSION *)DeviceObject->DeviceExtension;
	if(deviceExtension->PlayActive == 0) {
		return ((unsigned char)0);
		/* END OF PATH at func_CdAudioIsPlayActive@p12#1 */
	}
	else if(deviceExtension->PlayActive > 0) {
L1:;
		tmp = ExAllocatePoolWithTag((enum _POOL_TYPE )4, (unsigned long )sizeof(SUB_Q_CURRENT_POSITION ), tag_1);
		currentBuffer = (struct _SUB_Q_CURRENT_POSITION *)tmp;
		if(currentBuffer == (0)) {
			return ((unsigned char)0);
			/* END OF PATH at func_CdAudioIsPlayActive@p17#1 */
		}
		else if(currentBuffer < (0)) {
L2:;
			((struct _CDROM_SUB_Q_DATA_FORMAT *)currentBuffer)->Format = (unsigned char)1;
			((struct _CDROM_SUB_Q_DATA_FORMAT *)currentBuffer)->Track = (unsigned char)0;
			KeInitializeEvent(& event, (enum _EVENT_TYPE )0, (unsigned char)0);
			if(irp_CdAudioIsPlayActive == (0)) {
				ExFreePool((void *)currentBuffer);
				return ((unsigned char)0);
				/* END OF PATH at func_CdAudioIsPlayActive@p24#1 */
			}
			else if(irp_CdAudioIsPlayActive < (0)) {
L3:;
				if(status == 259L) {
					KeWaitForSingleObject((void *)(& event), (enum _KWAIT_REASON )5, (char)0, (unsigned char)0, (LARGE_INTEGER *)((void *)0));
					status = ioStatus.__annonCompField4.Status;
L4:;
					if(status < 0L) {
						ExFreePool((void *)currentBuffer);
						return ((unsigned char)0);
						/* END OF PATH at func_CdAudioIsPlayActive@p31#1 */
					}
					else {
						if(currentBuffer->Header.AudioStatus == 17) {
							returnValue__ = (unsigned char)1;
L5:;
							ExFreePool((void *)currentBuffer);
							return (returnValue__);
							/* END OF PATH at func_CdAudioIsPlayActive@p39#1 */
						}
						else if(currentBuffer->Header.AudioStatus < 17) {
L6:;
							returnValue__ = (unsigned char)0;
							deviceExtension->PlayActive = (unsigned char)0;
							goto L5;
						}
						else {
							goto L6;
						}
					}
				}
				else if(status < 259L) {
					goto L4;
				}
				else {
					goto L4;
				}
			}
			else {
				goto L3;
			}
		}
		else {
			goto L2;
		}
	}
	else {
		goto L1;
	}
}

BOOLEAN NecSupportNeeded(PUCHAR InquiryData )
{ PINQUIRYDATA inquiryDataAux ;
ULONG i ;
PUCHAR badDriveList[12] ;
int temp_1 ;
SIZE_T tmp ;
	badDriveList[0] = (UCHAR *)"CD-ROM DRIVE:80 ";
	badDriveList[7] = (UCHAR *)"CD-ROM DRIVE:500";
	badDriveList[1] = (UCHAR *)"CD-ROM DRIVE:82 ";
	badDriveList[8] = (UCHAR *)"CD-ROM DRIVE:400";
	badDriveList[2] = (UCHAR *)"CD-ROM DRIVE:83 ";
	badDriveList[9] = (UCHAR *)"CD-ROM DRIVE:401";
	badDriveList[3] = (UCHAR *)"CD-ROM DRIVE:84 ";
	badDriveList[10] = (UCHAR *)"CD-ROM DRIVE:501";
	badDriveList[4] = (UCHAR *)"CD-ROM DRIVE:841";
	badDriveList[11] = (UCHAR *)"CD-ROM DRIVE:900";
	badDriveList[5] = (UCHAR *)"CD-ROM DRIVE:38 ";
	badDriveList[6] = (UCHAR *)"CD-ROM DRIVE 4 M";
	inquiryDataAux = (struct _INQUIRYDATA *)InquiryData;
	tmp = RtlCompareMemory((void *)(inquiryDataAux->ProductId), (void *)badDriveList[i], 16UL);
	temp_1 = (int )tmp;
	if(temp_1 == 16) {
		return ((unsigned char)1);
		/* END OF PATH at func_NecSupportNeeded@p22#1 */
	}
	else if(temp_1 < 16) {
L1:;
		return ((unsigned char)0);
		/* END OF PATH at func_NecSupportNeeded@p24#1 */
	}
	else {
		goto L1;
	}
}

NTSTATUS CdAudioNECDeviceControl(PDEVICE_OBJECT DeviceObject , PIRP Irp )
{ PIO_STACK_LOCATION currentIrpStack ;
PCD_DEVICE_EXTENSION deviceExtension ;
PCDROM_TOC cdaudioDataOut ;
SCSI_PASS_THROUGH srb ;
PNEC_CDB cdb ;
NTSTATUS status ;
ULONG i ;
ULONG bytesTransfered ;
PUCHAR Toc ;
ULONG retryCount ;
ULONG address ;
LARGE_INTEGER delay ;
BOOLEAN temp_1 ;
int temp_2 ;
ULONG tag_1 ;
ULONG tracksToReturn ;
ULONG tracksOnCd ;
ULONG tracksInBuffer ;
ULONG dataLength ;
PCDROM_PLAY_AUDIO_MSF inputBuffer ;
PSUB_Q_CURRENT_POSITION userPtr ;
PUCHAR SubQPtr ;
int NONDET ;
PVOID tmp ;
PVOID tmp___0 ;
NTSTATUS tmp___1 ;
PVOID tmp___2 ;
NTSTATUS tmp___3 ;
	currentIrpStack = Irp->Tail.Overlay.__annonCompField17.__annonCompField16.CurrentStackLocation;
	deviceExtension = (struct _CD_DEVICE_EXTENSION *)DeviceObject->DeviceExtension;
	cdaudioDataOut = (struct _CDROM_TOC *)Irp->AssociatedIrp.SystemBuffer;
	cdb = (union _NEC_CDB *)(srb.Cdb);
	retryCount = 0UL;
	memset((void *)cdb, 0, 12U);
	if(NONDET == 1) {
		if(currentIrpStack->Parameters.DeviceIoControl.OutputBufferLength < ((&((CDROM_TOC *)0)->TrackData[1]))) {
			status = -1073741789L;
			Irp->IoStatus.Information = 0UL;
L1:;
			if(status > -2147483626L) {
L2:;
				Irp->IoStatus.__annonCompField4.Status = status;
				myStatus = (int )status;
				IofCompleteRequest(Irp, (char)0);
				return (status);
				/* END OF PATH at func_CdAudioNECDeviceControl@p341#1 */
			}
			else if(status == -2147483626L) {
				/* FALSE PATH */ 
			}
			else {
				/* FALSE PATH */ 
			}
		}
		else {
			temp_1 = CdAudioIsPlayActive(DeviceObject);
			if(temp_1 > 0) {
L3:;
				Irp->IoStatus.Information = 0UL;
				status = -2147483631L;
L4:;
				if(status < -2147483626L) {
					goto L2;
				}
				else if(status == -2147483626L) {
					/* FALSE PATH */ 
				}
				else {
					/* FALSE PATH */ 
				}
			}
			else if(temp_1 < 0) {
				goto L3;
			}
			else {
				tmp = ExAllocatePoolWithTag((enum _POOL_TYPE )4, 1022UL, tag_1);
				Toc = (UCHAR *)tmp;
				if(Toc == (0)) {
					status = -1073741670L;
					Irp->IoStatus.Information = 0UL;
L5:;
					if(status > -2147483626L) {
						goto L2;
					}
					else if(status == -2147483626L) {
						/* FALSE PATH */ 
					}
					else {
						/* FALSE PATH */ 
					}
				}
				else if(Toc < (0)) {
L6:;
					memset((void *)Toc, 0, 1022U);
					srb.CdbLength = (unsigned char)10;
					cdb->NEC_READ_TOC.OperationCode = (unsigned char)222;
					cdb->NEC_READ_TOC.Type = (unsigned char)3;
					cdb->NEC_READ_TOC.TrackNumber = (unsigned char)176;
					srb.TimeOutValue = 10UL;
					status = SendSrbSynchronous(deviceExtension, & srb, (void *)Toc, 1022UL);
					if(status < 0L) {
						if(status < -1073741764L) {
L7:;
							ExFreePool((void *)Toc);
							Irp->IoStatus.Information = 0UL;
L8:;
							if(status == -2147483626L) {
								if(currentIrpStack->Flags & 2 > 0) {
L9:;
									status = -1073741435L;
L10:;
									IoSetHardErrorOrVerifyDevice(Irp, deviceExtension->TargetDeviceObject);
									Irp->IoStatus.Information = 0UL;
									goto L2;
								}
								else if(currentIrpStack->Flags & 2 < 0) {
									goto L9;
								}
								else {
									goto L10;
								}
							}
							else if(status < -2147483626L) {
								goto L2;
							}
							else {
								goto L2;
							}
						}
						else if(status > -1073741764L) {
							goto L7;
						}
						else {
							status = 0L;
L11:;
							bytesTransfered = (unsigned long )((long )(& ((CDROM_TOC *)0)->TrackData[1]));
							Irp->IoStatus.Information = bytesTransfered;
							memset((void *)cdaudioDataOut, 0, (unsigned int )bytesTransfered);
							cdaudioDataOut->Length[0] = (unsigned char )((bytesTransfered - 2UL) >> 8);
							cdaudioDataOut->Length[1] = (unsigned char )((bytesTransfered - 2UL) & 255UL);
							if(temp_2 == 0) {
								ExFreePool((void *)Toc);
L12:;
								goto L8;
							}
							else if(temp_2 < 0) {
L13:;
								cdaudioDataOut->FirstTrack = (unsigned char)1;
								cdaudioDataOut->LastTrack = (unsigned char)2;
								cdaudioDataOut->TrackData[0].Reserved = (unsigned char)0;
								cdaudioDataOut->TrackData[0].Control = (unsigned char )((((int )*(Toc + 2) & 15) << 4) | ((int )*(Toc + 2) >> 4));
								cdaudioDataOut->TrackData[0].TrackNumber = (unsigned char)1;
								cdaudioDataOut->TrackData[0].Reserved1 = (unsigned char)0;
								address = (unsigned long )((((((int )*(Toc + 15) & 240) >> 4) * 10 + ((int )*(Toc + 15) & 15)) * 60 + ((((int )*(Toc + 16) & 240) >> 4) * 10 + ((int )*(Toc + 16) & 15))) * 75 + ((((int )*(Toc + 17) & 240) >> 4) * 10 + ((int )*(Toc + 17) & 15)));
								cdaudioDataOut->TrackData[0].Address[0] = (unsigned char )(address >> 24);
								cdaudioDataOut->TrackData[0].Address[1] = (unsigned char )(address >> 16);
								cdaudioDataOut->TrackData[0].Address[2] = (unsigned char )(address >> 8);
								cdaudioDataOut->TrackData[0].Address[3] = (unsigned char )address;
								ExFreePool((void *)Toc);
								goto L12;
							}
							else {
								goto L13;
							}
						}
					}
					else {
						status = 0L;
						goto L11;
					}
				}
				else {
					goto L6;
				}
			}
		}
	}
	else if(NONDET == 2) {
		temp_1 = CdAudioIsPlayActive(DeviceObject);
		if(temp_1 > 0) {
L14:;
			status = -2147483631L;
			Irp->IoStatus.Information = 0UL;
			goto L4;
		}
		else if(temp_1 < 0) {
			goto L14;
		}
		else {
			if(currentIrpStack->Parameters.DeviceIoControl.OutputBufferLength < ((&((CDROM_TOC *)0)->TrackData[0]))) {
				status = -1073741789L;
				Irp->IoStatus.Information = 0UL;
				goto L1;
			}
			else {
				tmp___0 = ExAllocatePoolWithTag((enum _POOL_TYPE )4, 1022UL, tag_1);
				Toc = (UCHAR *)tmp___0;
				if(Toc == (0)) {
					status = -1073741670L;
					Irp->IoStatus.Information = 0UL;
					goto L5;
				}
				else if(Toc < (0)) {
L15:;
					memset((void *)Toc, 0, 1022U);
					srb.CdbLength = (unsigned char)10;
					cdb->NEC_READ_TOC.OperationCode = (unsigned char)222;
					cdb->NEC_READ_TOC.Type = (unsigned char)3;
					srb.TimeOutValue = 10UL;
					status = SendSrbSynchronous(deviceExtension, & srb, (void *)Toc, 1022UL);
					if(status < 0L) {
						if(status < -1073741764L) {
							if(status < -1073741764L) {
L16:;
								Irp->IoStatus.Information = 0UL;
								ExFreePool((void *)Toc);
								goto L8;
							}
							else if(status > -1073741764L) {
								/* FALSE PATH */ 
							}
							else {
								/* FALSE PATH */ 
							}
						}
						else if(status > -1073741764L) {
							if(status > -1073741764L) {
								goto L16;
							}
							else if(status < -1073741764L) {
								/* FALSE PATH */ 
							}
							else {
								/* FALSE PATH */ 
							}
						}
						else {
							status = 0L;
L17:;
							if(currentIrpStack->Parameters.DeviceIoControl.OutputBufferLength > (ULONG)sizeof(CDROM_TOC )) {
								bytesTransfered = (unsigned long )sizeof(CDROM_TOC );
L18:;
								cdaudioDataOut->FirstTrack = (unsigned char )((((int )*(Toc + 9) & 240) >> 4) * 10 + ((int )*(Toc + 9) & 15));
								cdaudioDataOut->LastTrack = (unsigned char )((((int )*(Toc + 19) & 240) >> 4) * 10 + ((int )*(Toc + 19) & 15));
								tracksOnCd = (unsigned long )(((int )cdaudioDataOut->LastTrack - (int )cdaudioDataOut->FirstTrack) + 1);
								dataLength = (unsigned long )((long )(& ((CDROM_TOC *)0)->TrackData[tracksOnCd])) - 2UL;
								cdaudioDataOut->Length[0] = (unsigned char )(dataLength >> 8);
								cdaudioDataOut->Length[1] = (unsigned char )(dataLength & 255UL);
								tracksInBuffer = currentIrpStack->Parameters.DeviceIoControl.OutputBufferLength - (unsigned long )((long )(& ((CDROM_TOC *)0)->TrackData[0]));
								tracksInBuffer = tracksInBuffer / (ULONG )sizeof(TRACK_DATA );
								if(tracksInBuffer < tracksOnCd) {
									tracksToReturn = tracksInBuffer;
									i = 0UL;
L19:;
L20:;
									if(i >= tracksToReturn) {
L21:;
										if(tracksInBuffer <= tracksOnCd) {
L22:;
											Irp->IoStatus.Information = (unsigned long )((long )(& ((CDROM_TOC *)0)->TrackData[i]));
											ExFreePool((void *)Toc);
											goto L12;
										}
										else {
											/* FALSE PATH */ 
										}
									}
									else {
										cdaudioDataOut->TrackData[i].Reserved = (unsigned char)0;
										cdaudioDataOut->TrackData[i].Control = (unsigned char )((((int )*(Toc + (i * 10UL + 32UL)) & 15) << 4) | ((int )*(Toc + (i * 10UL + 32UL)) >> 4));
										cdaudioDataOut->TrackData[i].TrackNumber = (unsigned char )(i + (ULONG )cdaudioDataOut->FirstTrack);
										cdaudioDataOut->TrackData[i].Reserved1 = (unsigned char)0;
										cdaudioDataOut->TrackData[i].Address[0] = (unsigned char)0;
										cdaudioDataOut->TrackData[i].Address[1] = (unsigned char )((((int )*(Toc + (i * 10UL + 39UL)) & 240) >> 4) * 10 + ((int )*(Toc + (i * 10UL + 39UL)) & 15));
										cdaudioDataOut->TrackData[i].Address[2] = (unsigned char )((((int )*(Toc + (i * 10UL + 40UL)) & 240) >> 4) * 10 + ((int )*(Toc + (i * 10UL + 40UL)) & 15));
										cdaudioDataOut->TrackData[i].Address[3] = (unsigned char )((((int )*(Toc + (i * 10UL + 41UL)) & 240) >> 4) * 10 + ((int )*(Toc + (i * 10UL + 41UL)) & 15));
										i = i + 1UL;
										goto L20;
									}
								}
								else {
									tracksToReturn = tracksOnCd;
									i = 0UL;
L23:;
L24:;
									if(i >= tracksToReturn) {
L25:;
										if(tracksInBuffer > tracksOnCd) {
											cdaudioDataOut->TrackData[i].Reserved = (unsigned char)0;
											cdaudioDataOut->TrackData[i].Control = (unsigned char)16;
											cdaudioDataOut->TrackData[i].TrackNumber = (unsigned char)170;
											cdaudioDataOut->TrackData[i].Reserved1 = (unsigned char)0;
											cdaudioDataOut->TrackData[i].Address[0] = (unsigned char)0;
											cdaudioDataOut->TrackData[i].Address[1] = (unsigned char )((((int )*(Toc + 29) & 240) >> 4) * 10 + ((int )*(Toc + 29) & 15));
											cdaudioDataOut->TrackData[i].Address[2] = (unsigned char )((((int )*(Toc + 30) & 240) >> 4) * 10 + ((int )*(Toc + 30) & 15));
											cdaudioDataOut->TrackData[i].Address[3] = (unsigned char )((((int )*(Toc + 31) & 240) >> 4) * 10 + ((int )*(Toc + 31) & 15));
											i = i + 1UL;
											goto L22;
										}
										else {
											goto L22;
										}
									}
									else {
										cdaudioDataOut->TrackData[i].Reserved = (unsigned char)0;
										cdaudioDataOut->TrackData[i].Control = (unsigned char )((((int )*(Toc + (i * 10UL + 32UL)) & 15) << 4) | ((int )*(Toc + (i * 10UL + 32UL)) >> 4));
										cdaudioDataOut->TrackData[i].TrackNumber = (unsigned char )(i + (ULONG )cdaudioDataOut->FirstTrack);
										cdaudioDataOut->TrackData[i].Reserved1 = (unsigned char)0;
										cdaudioDataOut->TrackData[i].Address[0] = (unsigned char)0;
										cdaudioDataOut->TrackData[i].Address[1] = (unsigned char )((((int )*(Toc + (i * 10UL + 39UL)) & 240) >> 4) * 10 + ((int )*(Toc + (i * 10UL + 39UL)) & 15));
										cdaudioDataOut->TrackData[i].Address[2] = (unsigned char )((((int )*(Toc + (i * 10UL + 40UL)) & 240) >> 4) * 10 + ((int )*(Toc + (i * 10UL + 40UL)) & 15));
										cdaudioDataOut->TrackData[i].Address[3] = (unsigned char )((((int )*(Toc + (i * 10UL + 41UL)) & 240) >> 4) * 10 + ((int )*(Toc + (i * 10UL + 41UL)) & 15));
										i = i + 1UL;
										goto L24;
									}
								}
							}
							else {
								bytesTransfered = currentIrpStack->Parameters.DeviceIoControl.OutputBufferLength;
								goto L18;
							}
						}
					}
					else {
						status = 0L;
						goto L17;
					}
				}
				else {
					goto L15;
				}
			}
		}
	}
	else if(NONDET == 3) {
		deviceExtension->PlayActive = (unsigned char)0;
		tmp___1 = CdAudioSendToNextDriver(DeviceObject, Irp);
		return (tmp___1);
		/* END OF PATH at func_CdAudioNECDeviceControl@p170#1 */
	}
	else if(NONDET == 4) {
		inputBuffer = (struct _CDROM_PLAY_AUDIO_MSF *)Irp->AssociatedIrp.SystemBuffer;
		if(currentIrpStack->Parameters.DeviceIoControl.InputBufferLength < (ULONG )sizeof(CDROM_PLAY_AUDIO_MSF )) {
			status = -1073741820L;
			Irp->IoStatus.Information = 0UL;
			goto L12;
		}
		else {
			srb.CdbLength = (unsigned char)10;
			srb.TimeOutValue = 10UL;
			cdb->NEC_PLAY_AUDIO.OperationCode = (unsigned char)216;
			cdb->NEC_PLAY_AUDIO.PlayMode = (unsigned char)1;
			cdb->NEC_PLAY_AUDIO.Minute = (unsigned char )(((int )inputBuffer->StartingM / 10 << 4) + (int )inputBuffer->StartingM % 10);
			cdb->NEC_PLAY_AUDIO.Second = (unsigned char )(((int )inputBuffer->StartingS / 10 << 4) + (int )inputBuffer->StartingS % 10);
			cdb->NEC_PLAY_AUDIO.Frame = (unsigned char )(((int )inputBuffer->StartingF / 10 << 4) + (int )inputBuffer->StartingF % 10);
			cdb->NEC_PLAY_AUDIO.Control = (unsigned char)64;
			status = SendSrbSynchronous(deviceExtension, & srb, (void *)0, 0UL);
			if(status >= 0L) {
				deviceExtension->PlayActive = (unsigned char)1;
				memset((void *)cdb, 0, 12U);
				cdb->NEC_PLAY_AUDIO.OperationCode = (unsigned char)217;
				cdb->NEC_PLAY_AUDIO.PlayMode = (unsigned char)3;
				cdb->NEC_PLAY_AUDIO.Minute = (unsigned char )(((int )inputBuffer->EndingM / 10 << 4) + (int )inputBuffer->EndingM % 10);
				cdb->NEC_PLAY_AUDIO.Second = (unsigned char )(((int )inputBuffer->EndingS / 10 << 4) + (int )inputBuffer->EndingS % 10);
				cdb->NEC_PLAY_AUDIO.Frame = (unsigned char )(((int )inputBuffer->EndingF / 10 << 4) + (int )inputBuffer->EndingF % 10);
				cdb->NEC_PLAY_AUDIO.Control = (unsigned char)64;
				status = SendSrbSynchronous(deviceExtension, & srb, (void *)0, 0UL);
L26:;
				goto L12;
			}
			else {
				goto L26;
			}
		}
	}
	else if(NONDET == 5) {
		inputBuffer = (struct _CDROM_PLAY_AUDIO_MSF *)Irp->AssociatedIrp.SystemBuffer;
		if(currentIrpStack->Parameters.DeviceIoControl.InputBufferLength < (ULONG )sizeof(CDROM_PLAY_AUDIO_MSF )) {
			status = -1073741820L;
			Irp->IoStatus.Information = 0UL;
			goto L12;
		}
		else {
			srb.CdbLength = (unsigned char)10;
			srb.TimeOutValue = 10UL;
			cdb->NEC_SEEK_AUDIO.OperationCode = (unsigned char)216;
			cdb->NEC_SEEK_AUDIO.Minute = (unsigned char )(((int )inputBuffer->StartingM / 10 << 4) + (int )inputBuffer->StartingM % 10);
			cdb->NEC_SEEK_AUDIO.Second = (unsigned char )(((int )inputBuffer->StartingS / 10 << 4) + (int )inputBuffer->StartingS % 10);
			cdb->NEC_SEEK_AUDIO.Frame = (unsigned char )(((int )inputBuffer->StartingF / 10 << 4) + (int )inputBuffer->StartingF % 10);
			cdb->NEC_SEEK_AUDIO.Control = (unsigned char)64;
			status = SendSrbSynchronous(deviceExtension, & srb, (void *)0, 0UL);
			goto L12;
		}
	}
	else if(NONDET == 6) {
		deviceExtension->PlayActive = (unsigned char)0;
		srb.CdbLength = (unsigned char)10;
		srb.TimeOutValue = 10UL;
		cdb->NEC_PAUSE_AUDIO.OperationCode = (unsigned char)218;
		status = SendSrbSynchronous(deviceExtension, & srb, (void *)0, 0UL);
		goto L12;
	}
	else if(NONDET == 7) {
		srb.CdbLength = (unsigned char)10;
		srb.TimeOutValue = 10UL;
		cdb->NEC_PLAY_AUDIO.OperationCode = (unsigned char)217;
		cdb->NEC_PLAY_AUDIO.PlayMode = (unsigned char)3;
		cdb->NEC_PLAY_AUDIO.Control = (unsigned char)192;
		status = SendSrbSynchronous(deviceExtension, & srb, (void *)0, 0UL);
		goto L12;
	}
	else if(NONDET == 8) {
		userPtr = (struct _SUB_Q_CURRENT_POSITION *)Irp->AssociatedIrp.SystemBuffer;
		tmp___2 = ExAllocatePoolWithTag((enum _POOL_TYPE )4, 10UL, tag_1);
		SubQPtr = (UCHAR *)tmp___2;
		if(currentIrpStack->Parameters.DeviceIoControl.OutputBufferLength < (ULONG)sizeof(SUB_Q_CURRENT_POSITION )) {
			status = -1073741789L;
			Irp->IoStatus.Information = 0UL;
			if(SubQPtr > 0) {
L27:;
				ExFreePool((void *)SubQPtr);
L28:;
				goto L1;
			}
			else if(SubQPtr < 0) {
				goto L27;
			}
			else {
				goto L28;
			}
		}
		else {
			if(SubQPtr == (0)) {
				status = -1073741670L;
				Irp->IoStatus.Information = 0UL;
				goto L5;
			}
			else if(SubQPtr < (0)) {
L29:;
				memset((void *)SubQPtr, 0, 10U);
				if(((struct _CDROM_SUB_Q_DATA_FORMAT *)(userPtr))->Format < 1) {
L30:;
					ExFreePool((void *)SubQPtr);
					status = -1073741823L;
					Irp->IoStatus.Information = 0UL;
					goto L8;
				}
				else if(((struct _CDROM_SUB_Q_DATA_FORMAT *)(userPtr))->Format > 1) {
					goto L30;
				}
				else {
					srb.CdbLength = (unsigned char)10;
					srb.TimeOutValue = 10UL;
					cdb->NEC_READ_Q_CHANNEL.OperationCode = (unsigned char)221;
					cdb->NEC_READ_Q_CHANNEL.TransferSize = (unsigned char)10;
					status = SendSrbSynchronous(deviceExtension, & srb, (void *)SubQPtr, 10UL);
					if(status >= 0L) {
L31:;
						userPtr->Header.Reserved = (unsigned char)0;
						if(*(SubQPtr + 0) == 0) {
							userPtr->Header.AudioStatus = (unsigned char)17;
L32:;
							userPtr->Header.DataLength[0] = (unsigned char)0;
							userPtr->Header.DataLength[0] = (unsigned char)12;
							userPtr->FormatCode = (unsigned char)1;
							userPtr->Control = (unsigned char )((int )*(SubQPtr + 1) & 15);
							userPtr->ADR = (unsigned char)0;
							userPtr->TrackNumber = (unsigned char )((((int )*(SubQPtr + 2) & 240) >> 4) * 10 + ((int )*(SubQPtr + 2) & 15));
							userPtr->IndexNumber = (unsigned char )((((int )*(SubQPtr + 3) & 240) >> 4) * 10 + ((int )*(SubQPtr + 3) & 15));
							userPtr->AbsoluteAddress[0] = (unsigned char)0;
							userPtr->AbsoluteAddress[1] = (unsigned char )((((int )*(SubQPtr + 7) & 240) >> 4) * 10 + ((int )*(SubQPtr + 7) & 15));
							userPtr->AbsoluteAddress[2] = (unsigned char )((((int )*(SubQPtr + 8) & 240) >> 4) * 10 + ((int )*(SubQPtr + 8) & 15));
							userPtr->AbsoluteAddress[3] = (unsigned char )((((int )*(SubQPtr + 9) & 240) >> 4) * 10 + ((int )*(SubQPtr + 9) & 15));
							userPtr->TrackRelativeAddress[0] = (unsigned char)0;
							userPtr->TrackRelativeAddress[1] = (unsigned char )((((int )*(SubQPtr + 4) & 240) >> 4) * 10 + ((int )*(SubQPtr + 4) & 15));
							userPtr->TrackRelativeAddress[2] = (unsigned char )((((int )*(SubQPtr + 5) & 240) >> 4) * 10 + ((int )*(SubQPtr + 5) & 15));
							userPtr->TrackRelativeAddress[3] = (unsigned char )((((int )*(SubQPtr + 6) & 240) >> 4) * 10 + ((int )*(SubQPtr + 6) & 15));
							Irp->IoStatus.Information = (unsigned long )sizeof(SUB_Q_CURRENT_POSITION );
							if(userPtr->TrackNumber > 100) {
								delay.QuadPart = -5000000L;
								KeDelayExecutionThread((char)0, (unsigned char)0, & delay);
								if(retryCount < 4UL) {
									retryCount = retryCount + 1UL;
L33:;
L34:;
									ExFreePool((void *)SubQPtr);
									goto L12;
								}
								else {
									/* FALSE PATH */ 
								}
							}
							else {
								status = 0L;
								goto L33;
							}
						}
						else if(*(SubQPtr + 0) < 0) {
L35:;
							if(*(SubQPtr + 0) == 1) {
								userPtr->Header.AudioStatus = (unsigned char)18;
								deviceExtension->PlayActive = (unsigned char)0;
								goto L32;
							}
							else if(*(SubQPtr + 0) < 1) {
L36:;
								if(*(SubQPtr + 0) == 2) {
									userPtr->Header.AudioStatus = (unsigned char)18;
									deviceExtension->PlayActive = (unsigned char)0;
									goto L32;
								}
								else if(*(SubQPtr + 0) < 2) {
L37:;
									if(*(SubQPtr + 0) == 3) {
										userPtr->Header.AudioStatus = (unsigned char)19;
										deviceExtension->PlayActive = (unsigned char)0;
										goto L32;
									}
									else if(*(SubQPtr + 0) < 3) {
L38:;
										deviceExtension->PlayActive = (unsigned char)0;
										goto L32;
									}
									else {
										goto L38;
									}
								}
								else {
									goto L37;
								}
							}
							else {
								goto L36;
							}
						}
						else {
							goto L35;
						}
					}
					else {
						if(status == -1073741764L) {
							goto L31;
						}
						else if(status < -1073741764L) {
L39:;
							memset((void *)userPtr, 0, sizeof(SUB_Q_CURRENT_POSITION ));
							Irp->IoStatus.Information = 0UL;
							goto L34;
						}
						else {
							goto L39;
						}
					}
				}
			}
			else {
				goto L29;
			}
		}
	}
	else if(NONDET == 9) {
		deviceExtension->PlayActive = (unsigned char)0;
		srb.CdbLength = (unsigned char)10;
		srb.TimeOutValue = 10UL;
		cdb->NEC_EJECT.OperationCode = (unsigned char)220;
		status = SendSrbSynchronous(deviceExtension, & srb, (void *)0, 0UL);
		Irp->IoStatus.Information = 0UL;
		goto L12;
	}
	else if(NONDET == 10) {
L40:;
L41:;
		Irp->IoStatus.Information = 0UL;
		status = -1073741808L;
		goto L12;
	}
	else if(NONDET == 11) {
		goto L40;
	}
	else if(NONDET == 12) {
		goto L41;
	}
	else if(NONDET == 13) {
		CdAudioIsPlayActive(DeviceObject);
		tmp___3 = CdAudioSendToNextDriver(DeviceObject, Irp);
L42:;
		return (tmp___3);
		/* END OF PATH at func_CdAudioNECDeviceControl@p328#1 */
	}
	else if(NONDET < 1) {
		tmp___3 = CdAudioSendToNextDriver(DeviceObject, Irp);
		goto L42;
	}
	else if(NONDET > 1 && NONDET < 2) {
		tmp___3 = CdAudioSendToNextDriver(DeviceObject, Irp);
		goto L42;
	}
	else if(NONDET > 2 && NONDET < 3) {
		tmp___3 = CdAudioSendToNextDriver(DeviceObject, Irp);
		goto L42;
	}
	else if(NONDET > 3 && NONDET < 4) {
		tmp___3 = CdAudioSendToNextDriver(DeviceObject, Irp);
		goto L42;
	}
	else if(NONDET > 4 && NONDET < 5) {
		tmp___3 = CdAudioSendToNextDriver(DeviceObject, Irp);
		goto L42;
	}
	else if(NONDET > 5 && NONDET < 6) {
		tmp___3 = CdAudioSendToNextDriver(DeviceObject, Irp);
		goto L42;
	}
	else if(NONDET > 6 && NONDET < 7) {
		tmp___3 = CdAudioSendToNextDriver(DeviceObject, Irp);
		goto L42;
	}
	else if(NONDET > 7 && NONDET < 8) {
		tmp___3 = CdAudioSendToNextDriver(DeviceObject, Irp);
		goto L42;
	}
	else if(NONDET > 8 && NONDET < 9) {
		tmp___3 = CdAudioSendToNextDriver(DeviceObject, Irp);
		goto L42;
	}
	else if(NONDET > 9 && NONDET < 10) {
		tmp___3 = CdAudioSendToNextDriver(DeviceObject, Irp);
		goto L42;
	}
	else if(NONDET > 10 && NONDET < 11) {
		tmp___3 = CdAudioSendToNextDriver(DeviceObject, Irp);
		goto L42;
	}
	else if(NONDET > 11 && NONDET < 12) {
		tmp___3 = CdAudioSendToNextDriver(DeviceObject, Irp);
		goto L42;
	}
	else if(NONDET > 12 && NONDET < 13) {
		tmp___3 = CdAudioSendToNextDriver(DeviceObject, Irp);
		goto L42;
	}
	else {
		tmp___3 = CdAudioSendToNextDriver(DeviceObject, Irp);
		goto L42;
	}
}

NTSTATUS CdAudioPioneerDeviceControl(PDEVICE_OBJECT DeviceObject , PIRP Irp )
{ PIO_STACK_LOCATION currentIrpStack ;
PCD_DEVICE_EXTENSION deviceExtension ;
PCDROM_TOC cdaudioDataOut ;
SCSI_PASS_THROUGH srb ;
PPNR_CDB cdb ;
PCDB scsiCdb ;
NTSTATUS status ;
ULONG i ;
ULONG retry ;
PUCHAR Toc ;
ULONG tracksToReturn ;
ULONG tracksOnCd ;
ULONG tracksInBuffer ;
ULONG dataLength ;
PCDROM_PLAY_AUDIO_MSF inputBuffer ;
PSUB_Q_CURRENT_POSITION userPtr ;
PUCHAR SubQPtr ;
int NONDET ;
int temp_1 ;
ULONG tag_1 ;
BOOLEAN tmp ;
PVOID tmp___0 ;
NTSTATUS tmp___1 ;
PVOID tmp___2 ;
NTSTATUS tmp___3 ;
	currentIrpStack = Irp->Tail.Overlay.__annonCompField17.__annonCompField16.CurrentStackLocation;
	deviceExtension = (struct _CD_DEVICE_EXTENSION *)DeviceObject->DeviceExtension;
	cdaudioDataOut = (struct _CDROM_TOC *)Irp->AssociatedIrp.SystemBuffer;
	cdb = (union _PIONEER_CDB *)(srb.Cdb);
	scsiCdb = (union _CDB *)(srb.Cdb);
	memset((void *)cdb, 0, 12U);
	if(NONDET == 1) {
		if(currentIrpStack->Parameters.DeviceIoControl.OutputBufferLength < ((&((CDROM_TOC *)0)->TrackData[0]))) {
			status = -1073741789L;
			Irp->IoStatus.Information = 0UL;
L1:;
			if(status > -2147483626L) {
L2:;
				Irp->IoStatus.__annonCompField4.Status = status;
				myStatus = (int )status;
				IofCompleteRequest(Irp, (char)0);
				return (status);
				/* END OF PATH at func_CdAudioPioneerDeviceControl@p363#1 */
			}
			else if(status == -2147483626L) {
				/* FALSE PATH */ 
			}
			else {
				/* FALSE PATH */ 
			}
		}
		else {
			tmp = CdAudioIsPlayActive(DeviceObject);
			temp_1 = (int )tmp;
			if(temp_1 > 0) {
L3:;
				status = -2147483631L;
				Irp->IoStatus.Information = 0UL;
				if(status < -2147483626L) {
					goto L2;
				}
				else if(status == -2147483626L) {
					/* FALSE PATH */ 
				}
				else {
					/* FALSE PATH */ 
				}
			}
			else if(temp_1 < 0) {
				goto L3;
			}
			else {
				tmp___0 = ExAllocatePoolWithTag((enum _POOL_TYPE )4, (unsigned long )sizeof(CDROM_TOC ), tag_1);
				Toc = (UCHAR *)tmp___0;
				if(Toc == (0)) {
					status = -1073741670L;
					Irp->IoStatus.Information = 0UL;
L4:;
					if(status > -2147483626L) {
						goto L2;
					}
					else if(status == -2147483626L) {
						/* FALSE PATH */ 
					}
					else {
						/* FALSE PATH */ 
					}
				}
				else if(Toc < (0)) {
L5:;
					memset((void *)Toc, 0, sizeof(CDROM_TOC ));
					if(deviceExtension->Active == 9) {
						cdb->PNR_START_STOP.Immediate = (unsigned char)1;
L6:;
						cdb->PNR_START_STOP.OperationCode = (unsigned char)27;
						cdb->PNR_START_STOP.Start = (unsigned char)1;
						srb.CdbLength = (unsigned char)6;
						srb.TimeOutValue = 10UL;
						status = SendSrbSynchronous(deviceExtension, & srb, (void *)0, 0UL);
						if(status < 0L) {
							ExFreePool((void *)Toc);
							Irp->IoStatus.Information = 0UL;
L7:;
							if(status == -2147483626L) {
								if(currentIrpStack->Flags & 2 > 0) {
L8:;
									status = -1073741435L;
L9:;
									IoSetHardErrorOrVerifyDevice(Irp, deviceExtension->TargetDeviceObject);
									Irp->IoStatus.Information = 0UL;
									goto L2;
								}
								else if(currentIrpStack->Flags & 2 < 0) {
									goto L8;
								}
								else {
									goto L9;
								}
							}
							else if(status < -2147483626L) {
								goto L2;
							}
							else {
								goto L2;
							}
						}
						else {
							memset((void *)cdb, 0, 12U);
							srb.CdbLength = (unsigned char)10;
							cdb->PNR_READ_TOC.OperationCode = (unsigned char)193;
							cdb->PNR_READ_TOC.AssignedLength[1] = (unsigned char)4;
							cdb->PNR_READ_TOC.Type = (unsigned char)0;
							srb.TimeOutValue = 10UL;
							status = SendSrbSynchronous(deviceExtension, & srb, (void *)Toc, 4UL);
							if(status < 0L) {
								ExFreePool((void *)Toc);
								Irp->IoStatus.Information = 0UL;
								goto L7;
							}
							else {
								cdaudioDataOut->FirstTrack = (unsigned char )((((int )*(Toc + 0) & 240) >> 4) * 10 + ((int )*(Toc + 0) & 15));
								cdaudioDataOut->LastTrack = (unsigned char )((((int )*(Toc + 1) & 240) >> 4) * 10 + ((int )*(Toc + 1) & 15));
								tracksOnCd = (unsigned long )(((int )cdaudioDataOut->LastTrack - (int )cdaudioDataOut->FirstTrack) + 1);
								dataLength = (unsigned long )((long )(& ((CDROM_TOC *)0)->TrackData[tracksOnCd])) - 2UL;
								cdaudioDataOut->Length[0] = (unsigned char )(dataLength >> 8);
								cdaudioDataOut->Length[1] = (unsigned char )(dataLength & 255UL);
								tracksInBuffer = currentIrpStack->Parameters.DeviceIoControl.OutputBufferLength - (unsigned long )((long )(& ((CDROM_TOC *)0)->TrackData[0]));
								tracksInBuffer = tracksInBuffer / (ULONG )sizeof(TRACK_DATA );
								if(tracksInBuffer < tracksOnCd) {
									tracksToReturn = tracksInBuffer;
									memset((void *)cdb, 0, 12U);
									cdb->PNR_READ_TOC.OperationCode = (unsigned char)193;
									cdb->PNR_READ_TOC.TrackNumber = (unsigned char )((i + (ULONG )cdaudioDataOut->FirstTrack) / 10UL + (i + (ULONG )cdaudioDataOut->FirstTrack) % 10UL);
									cdb->PNR_READ_TOC.AssignedLength[1] = (unsigned char)4;
									cdb->PNR_READ_TOC.Type = (unsigned char)2;
									srb.TimeOutValue = 10UL;
									status = SendSrbSynchronous(deviceExtension, & srb, (void *)Toc, 4UL);
									if(status < 0L) {
L10:;
										ExFreePool((void *)Toc);
										Irp->IoStatus.Information = 0UL;
										goto L7;
									}
									else {
										cdaudioDataOut->TrackData[i].Reserved = (unsigned char)0;
										cdaudioDataOut->TrackData[i].Control = *(Toc + 0);
										cdaudioDataOut->TrackData[i].TrackNumber = (unsigned char )(i + (ULONG )cdaudioDataOut->FirstTrack);
										cdaudioDataOut->TrackData[i].Reserved1 = (unsigned char)0;
										cdaudioDataOut->TrackData[i].Address[0] = (unsigned char)0;
										cdaudioDataOut->TrackData[i].Address[1] = (unsigned char )((((int )*(Toc + 1) & 240) >> 4) * 10 + ((int )*(Toc + 1) & 15));
										cdaudioDataOut->TrackData[i].Address[2] = (unsigned char )((((int )*(Toc + 2) & 240) >> 4) * 10 + ((int )*(Toc + 2) & 15));
										cdaudioDataOut->TrackData[i].Address[3] = (unsigned char )((((int )*(Toc + 3) & 240) >> 4) * 10 + ((int )*(Toc + 3) & 15));
										if(tracksInBuffer <= tracksOnCd) {
L11:;
											Irp->IoStatus.Information = (unsigned long )((long )(& ((CDROM_TOC *)0)->TrackData[i]));
											ExFreePool((void *)Toc);
L12:;
											goto L7;
										}
										else {
											/* FALSE PATH */ 
										}
									}
								}
								else {
									tracksToReturn = tracksOnCd;
									memset((void *)cdb, 0, 12U);
									cdb->PNR_READ_TOC.OperationCode = (unsigned char)193;
									cdb->PNR_READ_TOC.TrackNumber = (unsigned char )((i + (ULONG )cdaudioDataOut->FirstTrack) / 10UL + (i + (ULONG )cdaudioDataOut->FirstTrack) % 10UL);
									cdb->PNR_READ_TOC.AssignedLength[1] = (unsigned char)4;
									cdb->PNR_READ_TOC.Type = (unsigned char)2;
									srb.TimeOutValue = 10UL;
									status = SendSrbSynchronous(deviceExtension, & srb, (void *)Toc, 4UL);
									if(status < 0L) {
										goto L10;
									}
									else {
										cdaudioDataOut->TrackData[i].Reserved = (unsigned char)0;
										cdaudioDataOut->TrackData[i].Control = *(Toc + 0);
										cdaudioDataOut->TrackData[i].TrackNumber = (unsigned char )(i + (ULONG )cdaudioDataOut->FirstTrack);
										cdaudioDataOut->TrackData[i].Reserved1 = (unsigned char)0;
										cdaudioDataOut->TrackData[i].Address[0] = (unsigned char)0;
										cdaudioDataOut->TrackData[i].Address[1] = (unsigned char )((((int )*(Toc + 1) & 240) >> 4) * 10 + ((int )*(Toc + 1) & 15));
										cdaudioDataOut->TrackData[i].Address[2] = (unsigned char )((((int )*(Toc + 2) & 240) >> 4) * 10 + ((int )*(Toc + 2) & 15));
										cdaudioDataOut->TrackData[i].Address[3] = (unsigned char )((((int )*(Toc + 3) & 240) >> 4) * 10 + ((int )*(Toc + 3) & 15));
										if(tracksInBuffer > tracksOnCd) {
											memset((void *)cdb, 0, 12U);
											cdb->PNR_READ_TOC.OperationCode = (unsigned char)193;
											cdb->PNR_READ_TOC.AssignedLength[1] = (unsigned char)4;
											cdb->PNR_READ_TOC.Type = (unsigned char)1;
											srb.TimeOutValue = 10UL;
											status = SendSrbSynchronous(deviceExtension, & srb, (void *)Toc, 4UL);
											if(status < 0L) {
												ExFreePool((void *)Toc);
												Irp->IoStatus.Information = 0UL;
												goto L7;
											}
											else {
												cdaudioDataOut->TrackData[i].Reserved = (unsigned char)0;
												cdaudioDataOut->TrackData[i].Control = (unsigned char)16;
												cdaudioDataOut->TrackData[i].TrackNumber = (unsigned char)170;
												cdaudioDataOut->TrackData[i].Reserved1 = (unsigned char)0;
												cdaudioDataOut->TrackData[i].Address[0] = (unsigned char)0;
												cdaudioDataOut->TrackData[i].Address[1] = (unsigned char )((((int )*(Toc + 0) & 240) >> 4) * 10 + ((int )*(Toc + 0) & 15));
												cdaudioDataOut->TrackData[i].Address[2] = (unsigned char )((((int )*(Toc + 1) & 240) >> 4) * 10 + ((int )*(Toc + 1) & 15));
												cdaudioDataOut->TrackData[i].Address[3] = (unsigned char )((((int )*(Toc + 2) & 240) >> 4) * 10 + ((int )*(Toc + 2) & 15));
												i = i + 1UL;
												goto L11;
											}
										}
										else {
											goto L11;
										}
									}
								}
							}
						}
					}
					else if(deviceExtension->Active < 9) {
L13:;
						cdb->PNR_START_STOP.Immediate = (unsigned char)0;
						goto L6;
					}
					else {
						goto L13;
					}
				}
				else {
					goto L5;
				}
			}
		}
	}
	else if(NONDET == 2) {
		deviceExtension->PlayActive = (unsigned char)0;
		tmp___1 = CdAudioSendToNextDriver(DeviceObject, Irp);
		return (tmp___1);
		/* END OF PATH at func_CdAudioPioneerDeviceControl@p134#1 */
	}
	else if(NONDET == 3) {
		inputBuffer = (struct _CDROM_PLAY_AUDIO_MSF *)Irp->AssociatedIrp.SystemBuffer;
		Irp->IoStatus.Information = 0UL;
		if(currentIrpStack->Parameters.DeviceIoControl.InputBufferLength < (ULONG )sizeof(CDROM_PLAY_AUDIO_MSF )) {
			status = -1073741820L;
			goto L12;
		}
		else {
			retry = 5UL;
L14:;
L15:;
			srb.CdbLength = (unsigned char)10;
			srb.TimeOutValue = 10UL;
			cdb->PNR_SEEK_AUDIO.OperationCode = (unsigned char)200;
			cdb->PNR_SEEK_AUDIO.Minute = (unsigned char )(((int )inputBuffer->StartingM / 10 << 4) + (int )inputBuffer->StartingM % 10);
			cdb->PNR_SEEK_AUDIO.Second = (unsigned char )(((int )inputBuffer->StartingS / 10 << 4) + (int )inputBuffer->StartingS % 10);
			cdb->PNR_SEEK_AUDIO.Frame = (unsigned char )(((int )inputBuffer->StartingF / 10 << 4) + (int )inputBuffer->StartingF % 10);
			cdb->PNR_SEEK_AUDIO.Type = (unsigned char)1;
			status = SendSrbSynchronous(deviceExtension, & srb, (void *)0, 0UL);
			retry = retry - 1UL;
			if(status < 0L) {
				if(retry <= 0UL) {
L16:;
L17:;
					if(status >= 0L) {
						memset((void *)cdb, 0, 12U);
						retry = 5UL;
L18:;
L19:;
						srb.CdbLength = (unsigned char)10;
						srb.TimeOutValue = 10UL;
						cdb->PNR_PLAY_AUDIO.OperationCode = (unsigned char)201;
						cdb->PNR_PLAY_AUDIO.StopAddr = (unsigned char)1;
						cdb->PNR_PLAY_AUDIO.Minute = (unsigned char )(((int )inputBuffer->EndingM / 10 << 4) + (int )inputBuffer->EndingM % 10);
						cdb->PNR_PLAY_AUDIO.Second = (unsigned char )(((int )inputBuffer->EndingS / 10 << 4) + (int )inputBuffer->EndingS % 10);
						cdb->PNR_PLAY_AUDIO.Frame = (unsigned char )(((int )inputBuffer->EndingF / 10 << 4) + (int )inputBuffer->EndingF % 10);
						cdb->PNR_PLAY_AUDIO.Type = (unsigned char)1;
						status = SendSrbSynchronous(deviceExtension, & srb, (void *)0, 0UL);
						retry = retry - 1UL;
						if(status < 0L) {
							if(retry <= 0UL) {
L20:;
L21:;
								if(status >= 0L) {
									deviceExtension->PlayActive = (unsigned char)1;
L22:;
									goto L12;
								}
								else {
									goto L22;
								}
							}
							else {
								goto L19;
							}
						}
						else {
							/* END OF PATH at func_CdAudioPioneerDeviceControl@p164#3 */
						}
					}
					else {
						goto L22;
					}
				}
				else {
					goto L15;
				}
			}
			else {
				/* END OF PATH at func_CdAudioPioneerDeviceControl@p144#3 */
			}
		}
	}
	else if(NONDET == 4) {
		inputBuffer = (struct _CDROM_PLAY_AUDIO_MSF *)Irp->AssociatedIrp.SystemBuffer;
		Irp->IoStatus.Information = 0UL;
		if(currentIrpStack->Parameters.DeviceIoControl.InputBufferLength < (ULONG )sizeof(CDROM_PLAY_AUDIO_MSF )) {
			status = -1073741820L;
			goto L12;
		}
		else {
			retry = 5UL;
L23:;
L24:;
			srb.CdbLength = (unsigned char)10;
			srb.TimeOutValue = 10UL;
			cdb->PNR_SEEK_AUDIO.OperationCode = (unsigned char)200;
			cdb->PNR_SEEK_AUDIO.Minute = (unsigned char )(((int )inputBuffer->StartingM / 10 << 4) + (int )inputBuffer->StartingM % 10);
			cdb->PNR_SEEK_AUDIO.Second = (unsigned char )(((int )inputBuffer->StartingS / 10 << 4) + (int )inputBuffer->StartingS % 10);
			cdb->PNR_SEEK_AUDIO.Frame = (unsigned char )(((int )inputBuffer->StartingF / 10 << 4) + (int )inputBuffer->StartingF % 10);
			cdb->PNR_SEEK_AUDIO.Type = (unsigned char)1;
			status = SendSrbSynchronous(deviceExtension, & srb, (void *)0, 0UL);
			retry = retry - 1UL;
			if(status < 0L) {
				if(retry <= 0UL) {
L25:;
L26:;
					goto L12;
				}
				else {
					goto L24;
				}
			}
			else {
				/* END OF PATH at func_CdAudioPioneerDeviceControl@p192#3 */
			}
		}
	}
	else if(NONDET == 5) {
		Irp->IoStatus.Information = 0UL;
		deviceExtension->PlayActive = (unsigned char)0;
		srb.CdbLength = (unsigned char)10;
		srb.TimeOutValue = 10UL;
		cdb->PNR_PAUSE_AUDIO.OperationCode = (unsigned char)202;
		cdb->PNR_PAUSE_AUDIO.Pause = (unsigned char)1;
		status = SendSrbSynchronous(deviceExtension, & srb, (void *)0, 0UL);
		goto L12;
	}
	else if(NONDET == 6) {
		Irp->IoStatus.Information = 0UL;
		srb.CdbLength = (unsigned char)10;
		srb.TimeOutValue = 10UL;
		cdb->PNR_PAUSE_AUDIO.OperationCode = (unsigned char)202;
		status = SendSrbSynchronous(deviceExtension, & srb, (void *)0, 0UL);
		goto L12;
	}
	else if(NONDET == 7) {
		userPtr = (struct _SUB_Q_CURRENT_POSITION *)Irp->AssociatedIrp.SystemBuffer;
		tmp___2 = ExAllocatePoolWithTag((enum _POOL_TYPE )4, 9UL, tag_1);
		SubQPtr = (UCHAR *)tmp___2;
		if(currentIrpStack->Parameters.DeviceIoControl.OutputBufferLength < (ULONG)sizeof(SUB_Q_CURRENT_POSITION )) {
			status = -1073741789L;
			Irp->IoStatus.Information = 0UL;
			if(SubQPtr > 0) {
L27:;
				ExFreePool((void *)SubQPtr);
L28:;
				goto L1;
			}
			else if(SubQPtr < 0) {
				goto L27;
			}
			else {
				goto L28;
			}
		}
		else {
			if(SubQPtr == (0)) {
				memset((void *)userPtr, 0, sizeof(SUB_Q_CURRENT_POSITION ));
				status = -1073741670L;
				Irp->IoStatus.Information = 0UL;
				goto L4;
			}
			else if(SubQPtr < (0)) {
L29:;
				if(((struct _CDROM_SUB_Q_DATA_FORMAT *)(userPtr))->Format < 1) {
L30:;
					ExFreePool((void *)SubQPtr);
					memset((void *)userPtr, 0, sizeof(SUB_Q_CURRENT_POSITION ));
					Irp->IoStatus.Information = 0UL;
					status = -1073741808L;
					goto L7;
				}
				else if(((struct _CDROM_SUB_Q_DATA_FORMAT *)(userPtr))->Format > 1) {
					goto L30;
				}
				else {
					retry = 5UL;
L31:;
L32:;
					srb.CdbLength = (unsigned char)10;
					srb.TimeOutValue = 10UL;
					cdb->PNR_AUDIO_STATUS.OperationCode = (unsigned char)204;
					cdb->PNR_AUDIO_STATUS.AssignedLength = (unsigned char)6;
					status = SendSrbSynchronous(deviceExtension, & srb, (void *)SubQPtr, 6UL);
					retry = retry - 1UL;
					if(status < 0L) {
						if(retry > 0UL) {
							if(status == -1073741661L) {
L33:;
L34:;
								if(status >= 0L) {
									userPtr->Header.Reserved = (unsigned char)0;
									if(*(SubQPtr + 0) == 0) {
										userPtr->Header.AudioStatus = (unsigned char)17;
L35:;
										memset((void *)cdb, 0, 12U);
										retry = 5UL;
L36:;
L37:;
										srb.CdbLength = (unsigned char)10;
										srb.TimeOutValue = 10UL;
										cdb->PNR_READ_Q_CHANNEL.OperationCode = (unsigned char)194;
										cdb->PNR_READ_Q_CHANNEL.AssignedLength = (unsigned char)9;
										status = SendSrbSynchronous(deviceExtension, & srb, (void *)SubQPtr, 9UL);
										retry = retry - 1UL;
										if(status < 0L) {
											if(retry <= 0UL) {
L38:;
L39:;
												if(status >= 0L) {
													userPtr->Header.DataLength[0] = (unsigned char)0;
													userPtr->Header.DataLength[0] = (unsigned char)12;
													userPtr->FormatCode = (unsigned char)1;
													userPtr->Control = (unsigned char )((int )*(SubQPtr + 0) & 15);
													userPtr->ADR = (unsigned char)0;
													userPtr->TrackNumber = (unsigned char )((((int )*(SubQPtr + 1) & 240) >> 4) * 10 + ((int )*(SubQPtr + 1) & 15));
													userPtr->IndexNumber = (unsigned char )((((int )*(SubQPtr + 2) & 240) >> 4) * 10 + ((int )*(SubQPtr + 2) & 15));
													userPtr->AbsoluteAddress[0] = (unsigned char)0;
													userPtr->AbsoluteAddress[1] = (unsigned char )((((int )*(SubQPtr + 6) & 240) >> 4) * 10 + ((int )*(SubQPtr + 6) & 15));
													userPtr->AbsoluteAddress[2] = (unsigned char )((((int )*(SubQPtr + 7) & 240) >> 4) * 10 + ((int )*(SubQPtr + 7) & 15));
													userPtr->AbsoluteAddress[3] = (unsigned char )((((int )*(SubQPtr + 8) & 240) >> 4) * 10 + ((int )*(SubQPtr + 8) & 15));
													userPtr->TrackRelativeAddress[0] = (unsigned char)0;
													userPtr->TrackRelativeAddress[1] = (unsigned char )((((int )*(SubQPtr + 3) & 240) >> 4) * 10 + ((int )*(SubQPtr + 3) & 15));
													userPtr->TrackRelativeAddress[2] = (unsigned char )((((int )*(SubQPtr + 4) & 240) >> 4) * 10 + ((int )*(SubQPtr + 4) & 15));
													userPtr->TrackRelativeAddress[3] = (unsigned char )((((int )*(SubQPtr + 5) & 240) >> 4) * 10 + ((int )*(SubQPtr + 5) & 15));
													Irp->IoStatus.Information = (unsigned long )sizeof(SUB_Q_CURRENT_POSITION );
L40:;
													ExFreePool((void *)SubQPtr);
													goto L12;
												}
												else {
													Irp->IoStatus.Information = 0UL;
													goto L40;
												}
											}
											else {
												goto L37;
											}
										}
										else {
											/* END OF PATH at func_CdAudioPioneerDeviceControl@p290#3 */
										}
									}
									else if(*(SubQPtr + 0) < 0) {
L41:;
										if(*(SubQPtr + 0) == 1) {
											deviceExtension->PlayActive = (unsigned char)0;
											userPtr->Header.AudioStatus = (unsigned char)18;
											goto L35;
										}
										else if(*(SubQPtr + 0) < 1) {
L42:;
											if(*(SubQPtr + 0) == 2) {
												deviceExtension->PlayActive = (unsigned char)0;
												userPtr->Header.AudioStatus = (unsigned char)18;
												goto L35;
											}
											else if(*(SubQPtr + 0) < 2) {
L43:;
												if(*(SubQPtr + 0) == 3) {
													userPtr->Header.AudioStatus = (unsigned char)19;
													deviceExtension->PlayActive = (unsigned char)0;
													goto L35;
												}
												else if(*(SubQPtr + 0) < 3) {
L44:;
													deviceExtension->PlayActive = (unsigned char)0;
													goto L35;
												}
												else {
													goto L44;
												}
											}
											else {
												goto L43;
											}
										}
										else {
											goto L42;
										}
									}
									else {
										goto L41;
									}
								}
								else {
									ExFreePool((void *)SubQPtr);
									Irp->IoStatus.Information = 0UL;
									goto L7;
								}
							}
							else if(status < -1073741661L) {
L45:;
								goto L32;
							}
							else {
								goto L45;
							}
						}
						else {
							/* END OF PATH at func_CdAudioPioneerDeviceControl@p248#4 */
						}
					}
					else {
						/* END OF PATH at func_CdAudioPioneerDeviceControl@p248#5 */
					}
				}
			}
			else {
				goto L29;
			}
		}
	}
	else if(NONDET == 8) {
		Irp->IoStatus.Information = 0UL;
		deviceExtension->PlayActive = (unsigned char)0;
		if(deviceExtension->Active == 9) {
			srb.CdbLength = (unsigned char)10;
			srb.TimeOutValue = 10UL;
			cdb->PNR_EJECT.OperationCode = (unsigned char)192;
			cdb->PNR_EJECT.Immediate = (unsigned char)1;
			status = SendSrbSynchronous(deviceExtension, & srb, (void *)0, 0UL);
L46:;
			goto L12;
		}
		else if(deviceExtension->Active < 9) {
L47:;
			srb.CdbLength = (unsigned char)6;
			scsiCdb->START_STOP.OperationCode = (unsigned char)27;
			scsiCdb->START_STOP.LoadEject = (unsigned char)1;
			scsiCdb->START_STOP.Start = (unsigned char)0;
			status = SendSrbSynchronous(deviceExtension, & srb, (void *)0, 0UL);
			goto L46;
		}
		else {
			goto L47;
		}
	}
	else if(NONDET == 9) {
L48:;
L49:;
		Irp->IoStatus.Information = 0UL;
		status = -1073741808L;
		goto L12;
	}
	else if(NONDET == 10) {
		goto L48;
	}
	else if(NONDET == 11) {
		goto L49;
	}
	else if(NONDET == 12) {
		CdAudioIsPlayActive(DeviceObject);
		tmp___3 = CdAudioSendToNextDriver(DeviceObject, Irp);
L50:;
		return (tmp___3);
		/* END OF PATH at func_CdAudioPioneerDeviceControl@p350#1 */
	}
	else if(NONDET < 1) {
		tmp___3 = CdAudioSendToNextDriver(DeviceObject, Irp);
		goto L50;
	}
	else if(NONDET > 1 && NONDET < 2) {
		tmp___3 = CdAudioSendToNextDriver(DeviceObject, Irp);
		goto L50;
	}
	else if(NONDET > 2 && NONDET < 3) {
		tmp___3 = CdAudioSendToNextDriver(DeviceObject, Irp);
		goto L50;
	}
	else if(NONDET > 3 && NONDET < 4) {
		tmp___3 = CdAudioSendToNextDriver(DeviceObject, Irp);
		goto L50;
	}
	else if(NONDET > 4 && NONDET < 5) {
		tmp___3 = CdAudioSendToNextDriver(DeviceObject, Irp);
		goto L50;
	}
	else if(NONDET > 5 && NONDET < 6) {
		tmp___3 = CdAudioSendToNextDriver(DeviceObject, Irp);
		goto L50;
	}
	else if(NONDET > 6 && NONDET < 7) {
		tmp___3 = CdAudioSendToNextDriver(DeviceObject, Irp);
		goto L50;
	}
	else if(NONDET > 7 && NONDET < 8) {
		tmp___3 = CdAudioSendToNextDriver(DeviceObject, Irp);
		goto L50;
	}
	else if(NONDET > 8 && NONDET < 9) {
		tmp___3 = CdAudioSendToNextDriver(DeviceObject, Irp);
		goto L50;
	}
	else if(NONDET > 9 && NONDET < 10) {
		tmp___3 = CdAudioSendToNextDriver(DeviceObject, Irp);
		goto L50;
	}
	else if(NONDET > 10 && NONDET < 11) {
		tmp___3 = CdAudioSendToNextDriver(DeviceObject, Irp);
		goto L50;
	}
	else if(NONDET > 11 && NONDET < 12) {
		tmp___3 = CdAudioSendToNextDriver(DeviceObject, Irp);
		goto L50;
	}
	else {
		tmp___3 = CdAudioSendToNextDriver(DeviceObject, Irp);
		goto L50;
	}
}

NTSTATUS CdAudioDenonDeviceControl(PDEVICE_OBJECT DeviceObject , PIRP Irp )
{ PIO_STACK_LOCATION currentIrpStack ;
PCD_DEVICE_EXTENSION deviceExtension ;
PCDROM_TOC cdaudioDataOut ;
SCSI_PASS_THROUGH srb ;
PCDB cdb ;
NTSTATUS status ;
ULONG i ;
ULONG bytesTransfered ;
PUCHAR Toc ;
int temp_1 ;
ULONG tag_1 ;
ULONG tracksToReturn ;
ULONG tracksOnCd ;
ULONG tracksInBuffer ;
ULONG dataLength ;
PCDROM_PLAY_AUDIO_MSF inputBuffer ;
PSUB_Q_CURRENT_POSITION userPtr ;
PUCHAR SubQPtr ;
int NONDET ;
BOOLEAN tmp ;
PVOID tmp___0 ;
PVOID tmp___1 ;
PVOID tmp___2 ;
NTSTATUS tmp___3 ;
	currentIrpStack = Irp->Tail.Overlay.__annonCompField17.__annonCompField16.CurrentStackLocation;
	deviceExtension = (struct _CD_DEVICE_EXTENSION *)DeviceObject->DeviceExtension;
	cdaudioDataOut = (struct _CDROM_TOC *)Irp->AssociatedIrp.SystemBuffer;
	cdb = (union _CDB *)(srb.Cdb);
	memset((void *)cdb, 0, 12U);
	if(NONDET == 1) {
		status = -1073741808L;
		Irp->IoStatus.Information = 0UL;
L1:;
		if(status > -2147483626L) {
L2:;
			Irp->IoStatus.__annonCompField4.Status = status;
			myStatus = (int )status;
			IofCompleteRequest(Irp, (char)0);
			return (status);
			/* END OF PATH at func_CdAudioDenonDeviceControl@p333#1 */
		}
		else if(status == -2147483626L) {
			/* FALSE PATH */ 
		}
		else {
			/* FALSE PATH */ 
		}
	}
	else if(NONDET == 2) {
		if(currentIrpStack->Parameters.DeviceIoControl.OutputBufferLength < ((&((CDROM_TOC *)0)->TrackData[0]))) {
			status = -1073741789L;
			Irp->IoStatus.Information = 0UL;
L3:;
			if(status > -2147483626L) {
				goto L2;
			}
			else if(status == -2147483626L) {
				/* FALSE PATH */ 
			}
			else {
				/* FALSE PATH */ 
			}
		}
		else {
			tmp = CdAudioIsPlayActive(DeviceObject);
			temp_1 = (int )tmp;
			if(temp_1 > 0) {
L4:;
				status = -2147483631L;
				Irp->IoStatus.Information = 0UL;
				if(status < -2147483626L) {
					goto L2;
				}
				else if(status == -2147483626L) {
					/* FALSE PATH */ 
				}
				else {
					/* FALSE PATH */ 
				}
			}
			else if(temp_1 < 0) {
				goto L4;
			}
			else {
				tmp___0 = ExAllocatePoolWithTag((enum _POOL_TYPE )4, (unsigned long )sizeof(CDROM_TOC ), tag_1);
				Toc = (UCHAR *)tmp___0;
				if(Toc == (0)) {
					status = -1073741670L;
					Irp->IoStatus.Information = 0UL;
L5:;
					if(status > -2147483626L) {
						goto L2;
					}
					else if(status == -2147483626L) {
						/* FALSE PATH */ 
					}
					else {
						/* FALSE PATH */ 
					}
				}
				else if(Toc < (0)) {
L6:;
					memset((void *)Toc, 0, sizeof(CDROM_TOC ));
					cdb->CDB6GENERIC.OperationCode = (unsigned char)233;
					srb.TimeOutValue = 10UL;
					srb.CdbLength = (unsigned char)6;
					status = SendSrbSynchronous(deviceExtension, & srb, (void *)Toc, (unsigned long )sizeof(CDROM_TOC ));
					if(status < 0L) {
						if(status < -1073741764L) {
							if(status < -1073741764L) {
L7:;
								ExFreePool((void *)Toc);
								Irp->IoStatus.Information = 0UL;
L8:;
								if(status == -2147483626L) {
									if(currentIrpStack->Flags & 2 > 0) {
L9:;
										status = -1073741435L;
L10:;
										IoSetHardErrorOrVerifyDevice(Irp, deviceExtension->TargetDeviceObject);
										Irp->IoStatus.Information = 0UL;
										goto L2;
									}
									else if(currentIrpStack->Flags & 2 < 0) {
										goto L9;
									}
									else {
										goto L10;
									}
								}
								else if(status < -2147483626L) {
									goto L2;
								}
								else {
									goto L2;
								}
							}
							else if(status > -1073741764L) {
								/* FALSE PATH */ 
							}
							else {
								/* FALSE PATH */ 
							}
						}
						else if(status > -1073741764L) {
							if(status > -1073741764L) {
								goto L7;
							}
							else if(status < -1073741764L) {
								/* FALSE PATH */ 
							}
							else {
								/* FALSE PATH */ 
							}
						}
						else {
L11:;
							status = 0L;
							if(currentIrpStack->Parameters.DeviceIoControl.OutputBufferLength > srb.DataTransferLength) {
								bytesTransfered = srb.DataTransferLength;
L12:;
								cdaudioDataOut->FirstTrack = (unsigned char )((((int )*(Toc + 1) & 240) >> 4) * 10 + ((int )*(Toc + 1) & 15));
								cdaudioDataOut->LastTrack = (unsigned char )((((int )*(Toc + 5) & 240) >> 4) * 10 + ((int )*(Toc + 5) & 15));
								tracksOnCd = (unsigned long )(((int )cdaudioDataOut->LastTrack - (int )cdaudioDataOut->FirstTrack) + 1);
								dataLength = (unsigned long )((long )(& ((CDROM_TOC *)0)->TrackData[tracksOnCd])) - 2UL;
								cdaudioDataOut->Length[0] = (unsigned char )(dataLength >> 8);
								cdaudioDataOut->Length[1] = (unsigned char )(dataLength & 255UL);
								tracksInBuffer = currentIrpStack->Parameters.DeviceIoControl.OutputBufferLength - (unsigned long )((long )(& ((CDROM_TOC *)0)->TrackData[0]));
								tracksInBuffer = tracksInBuffer / (ULONG )sizeof(TRACK_DATA );
								if(tracksInBuffer < tracksOnCd) {
									tracksToReturn = tracksInBuffer;
									i = 0UL;
L13:;
L14:;
									if(i >= tracksToReturn) {
L15:;
										if(tracksInBuffer <= tracksOnCd) {
L16:;
											Irp->IoStatus.Information = (unsigned long )((long )(& ((CDROM_TOC *)0)->TrackData[i]));
											deviceExtension->Paused = (unsigned char)0;
											deviceExtension->PausedM = (unsigned char)0;
											deviceExtension->PausedS = (unsigned char)0;
											deviceExtension->PausedF = (unsigned char)0;
											deviceExtension->LastEndM = (unsigned char)0;
											deviceExtension->LastEndS = (unsigned char)0;
											deviceExtension->LastEndF = (unsigned char)0;
											ExFreePool((void *)Toc);
L17:;
											goto L8;
										}
										else {
											/* FALSE PATH */ 
										}
									}
									else {
										cdaudioDataOut->TrackData[i].Reserved = (unsigned char)0;
										cdaudioDataOut->TrackData[i].Control = *(Toc + (i * 4UL + 12UL));
										cdaudioDataOut->TrackData[i].TrackNumber = (unsigned char )(i + (ULONG )cdaudioDataOut->FirstTrack);
										cdaudioDataOut->TrackData[i].Reserved1 = (unsigned char)0;
										cdaudioDataOut->TrackData[i].Address[0] = (unsigned char)0;
										cdaudioDataOut->TrackData[i].Address[1] = (unsigned char )((((int )*(Toc + (i * 4UL + 13UL)) & 240) >> 4) * 10 + ((int )*(Toc + (i * 4UL + 13UL)) & 15));
										cdaudioDataOut->TrackData[i].Address[2] = (unsigned char )((((int )*(Toc + (i * 4UL + 14UL)) & 240) >> 4) * 10 + ((int )*(Toc + (i * 4UL + 14UL)) & 15));
										cdaudioDataOut->TrackData[i].Address[3] = (unsigned char )((((int )*(Toc + (i * 4UL + 15UL)) & 240) >> 4) * 10 + ((int )*(Toc + (i * 4UL + 15UL)) & 15));
										i = i + 1UL;
										goto L14;
									}
								}
								else {
									tracksToReturn = tracksOnCd;
									i = 0UL;
L18:;
L19:;
									if(i >= tracksToReturn) {
L20:;
										if(tracksInBuffer > tracksOnCd) {
											cdaudioDataOut->TrackData[i].Reserved = (unsigned char)0;
											cdaudioDataOut->TrackData[i].Control = (unsigned char)0;
											cdaudioDataOut->TrackData[i].TrackNumber = (unsigned char)170;
											cdaudioDataOut->TrackData[i].Reserved1 = (unsigned char)0;
											cdaudioDataOut->TrackData[i].Address[0] = (unsigned char)0;
											cdaudioDataOut->TrackData[i].Address[1] = (unsigned char )((((int )*(Toc + 9) & 240) >> 4) * 10 + ((int )*(Toc + 9) & 15));
											cdaudioDataOut->TrackData[i].Address[2] = (unsigned char )((((int )*(Toc + 10) & 240) >> 4) * 10 + ((int )*(Toc + 10) & 15));
											cdaudioDataOut->TrackData[i].Address[3] = (unsigned char )((((int )*(Toc + 11) & 240) >> 4) * 10 + ((int )*(Toc + 11) & 15));
											i = i + 1UL;
											goto L16;
										}
										else {
											goto L16;
										}
									}
									else {
										cdaudioDataOut->TrackData[i].Reserved = (unsigned char)0;
										cdaudioDataOut->TrackData[i].Control = *(Toc + (i * 4UL + 12UL));
										cdaudioDataOut->TrackData[i].TrackNumber = (unsigned char )(i + (ULONG )cdaudioDataOut->FirstTrack);
										cdaudioDataOut->TrackData[i].Reserved1 = (unsigned char)0;
										cdaudioDataOut->TrackData[i].Address[0] = (unsigned char)0;
										cdaudioDataOut->TrackData[i].Address[1] = (unsigned char )((((int )*(Toc + (i * 4UL + 13UL)) & 240) >> 4) * 10 + ((int )*(Toc + (i * 4UL + 13UL)) & 15));
										cdaudioDataOut->TrackData[i].Address[2] = (unsigned char )((((int )*(Toc + (i * 4UL + 14UL)) & 240) >> 4) * 10 + ((int )*(Toc + (i * 4UL + 14UL)) & 15));
										cdaudioDataOut->TrackData[i].Address[3] = (unsigned char )((((int )*(Toc + (i * 4UL + 15UL)) & 240) >> 4) * 10 + ((int )*(Toc + (i * 4UL + 15UL)) & 15));
										i = i + 1UL;
										goto L19;
									}
								}
							}
							else {
								bytesTransfered = currentIrpStack->Parameters.DeviceIoControl.OutputBufferLength;
								goto L12;
							}
						}
					}
					else {
						goto L11;
					}
				}
				else {
					goto L6;
				}
			}
		}
	}
	else if(NONDET == 3) {
L21:;
		inputBuffer = (struct _CDROM_PLAY_AUDIO_MSF *)Irp->AssociatedIrp.SystemBuffer;
		Irp->IoStatus.Information = 0UL;
		deviceExtension->PlayActive = (unsigned char)0;
		srb.CdbLength = (unsigned char)6;
		srb.TimeOutValue = 10UL;
		cdb->CDB6GENERIC.OperationCode = (unsigned char)231;
		status = SendSrbSynchronous(deviceExtension, & srb, (void *)0, 0UL);
		if(status >= 0L) {
			deviceExtension->Paused = (unsigned char)0;
			deviceExtension->PausedM = (unsigned char)0;
			deviceExtension->PausedS = (unsigned char)0;
			deviceExtension->PausedF = (unsigned char)0;
			deviceExtension->LastEndM = (unsigned char)0;
			deviceExtension->LastEndS = (unsigned char)0;
			deviceExtension->LastEndF = (unsigned char)0;
L22:;
			if(currentIrpStack->Parameters.DeviceIoControl.IoControlCode == (((2 << 16) | (1 << 14)) | (2 << 2))) {
				goto L8;
			}
			else if(currentIrpStack->Parameters.DeviceIoControl.IoControlCode < (((2 << 16) | (1 << 14)) | (2 << 2))) {
L23:;
				if(currentIrpStack->Parameters.DeviceIoControl.InputBufferLength < (ULONG )sizeof(CDROM_PLAY_AUDIO_MSF )) {
					status = -1073741820L;
					goto L17;
				}
				else {
					srb.CdbLength = (unsigned char)10;
					srb.TimeOutValue = 10UL;
					cdb->CDB10.OperationCode = (unsigned char)34;
					cdb->CDB10.LogicalBlockByte0 = (unsigned char )(((int )inputBuffer->StartingM / 10 << 4) + (int )inputBuffer->StartingM % 10);
					cdb->CDB10.LogicalBlockByte1 = (unsigned char )(((int )inputBuffer->StartingS / 10 << 4) + (int )inputBuffer->StartingS % 10);
					cdb->CDB10.LogicalBlockByte2 = (unsigned char )(((int )inputBuffer->StartingF / 10 << 4) + (int )inputBuffer->StartingF % 10);
					cdb->CDB10.LogicalBlockByte3 = (unsigned char )(((int )inputBuffer->EndingM / 10 << 4) + (int )inputBuffer->EndingM % 10);
					cdb->CDB10.Reserved2 = (unsigned char )(((int )inputBuffer->EndingS / 10 << 4) + (int )inputBuffer->EndingS % 10);
					cdb->CDB10.TransferBlocksMsb = (unsigned char )(((int )inputBuffer->EndingF / 10 << 4) + (int )inputBuffer->EndingF % 10);
					status = SendSrbSynchronous(deviceExtension, & srb, (void *)0, 0UL);
					if(status >= 0L) {
						deviceExtension->PlayActive = (unsigned char)1;
						deviceExtension->Paused = (unsigned char)0;
						deviceExtension->LastEndM = (unsigned char )(((int )inputBuffer->EndingM / 10 << 4) + (int )inputBuffer->EndingM % 10);
						deviceExtension->LastEndS = (unsigned char )(((int )inputBuffer->EndingS / 10 << 4) + (int )inputBuffer->EndingS % 10);
						deviceExtension->LastEndF = (unsigned char )(((int )inputBuffer->EndingF / 10 << 4) + (int )inputBuffer->EndingF % 10);
L24:;
						goto L17;
					}
					else {
						if(status == -1073741808L) {
							status = -1073741803L;
							goto L24;
						}
						else if(status < -1073741808L) {
							goto L24;
						}
						else {
							goto L24;
						}
					}
				}
			}
			else {
				goto L23;
			}
		}
		else {
			goto L22;
		}
	}
	else if(NONDET == 4) {
		goto L21;
	}
	else if(NONDET == 5) {
		inputBuffer = (struct _CDROM_PLAY_AUDIO_MSF *)Irp->AssociatedIrp.SystemBuffer;
		Irp->IoStatus.Information = 0UL;
		if(currentIrpStack->Parameters.DeviceIoControl.InputBufferLength < (ULONG )sizeof(CDROM_PLAY_AUDIO_MSF )) {
			status = -1073741820L;
			goto L17;
		}
		else {
			srb.CdbLength = (unsigned char)10;
			srb.TimeOutValue = 10UL;
			cdb->CDB10.OperationCode = (unsigned char)34;
			cdb->CDB10.LogicalBlockByte0 = (unsigned char )(((int )inputBuffer->EndingM / 10 << 4) + (int )inputBuffer->EndingM % 10);
			cdb->CDB10.LogicalBlockByte1 = (unsigned char )(((int )inputBuffer->EndingS / 10 << 4) + (int )inputBuffer->EndingS % 10);
			cdb->CDB10.LogicalBlockByte2 = (unsigned char )(((int )inputBuffer->EndingF / 10 << 4) + (int )inputBuffer->EndingF % 10);
			cdb->CDB10.LogicalBlockByte3 = (unsigned char )(((int )inputBuffer->EndingM / 10 << 4) + (int )inputBuffer->EndingM % 10);
			cdb->CDB10.Reserved2 = (unsigned char )(((int )inputBuffer->EndingS / 10 << 4) + (int )inputBuffer->EndingS % 10);
			cdb->CDB10.TransferBlocksMsb = (unsigned char )(((int )inputBuffer->EndingF / 10 << 4) + (int )inputBuffer->EndingF % 10);
			status = SendSrbSynchronous(deviceExtension, & srb, (void *)0, 0UL);
			if(status >= 0L) {
				deviceExtension->Paused = (unsigned char)1;
				deviceExtension->PausedM = (unsigned char )(((int )inputBuffer->EndingM / 10 << 4) + (int )inputBuffer->EndingM % 10);
				deviceExtension->PausedS = (unsigned char )(((int )inputBuffer->EndingS / 10 << 4) + (int )inputBuffer->EndingS % 10);
				deviceExtension->PausedF = (unsigned char )(((int )inputBuffer->EndingF / 10 << 4) + (int )inputBuffer->EndingF % 10);
				deviceExtension->LastEndM = (unsigned char )(((int )inputBuffer->EndingM / 10 << 4) + (int )inputBuffer->EndingM % 10);
				deviceExtension->LastEndS = (unsigned char )(((int )inputBuffer->EndingS / 10 << 4) + (int )inputBuffer->EndingS % 10);
				deviceExtension->LastEndF = (unsigned char )(((int )inputBuffer->EndingF / 10 << 4) + (int )inputBuffer->EndingF % 10);
L25:;
				goto L17;
			}
			else {
				if(status == -1073741808L) {
					status = -1073741803L;
					goto L25;
				}
				else if(status < -1073741808L) {
					goto L25;
				}
				else {
					goto L25;
				}
			}
		}
	}
	else if(NONDET == 6) {
		tmp___1 = ExAllocatePoolWithTag((enum _POOL_TYPE )4, 10UL, tag_1);
		SubQPtr = (UCHAR *)tmp___1;
		Irp->IoStatus.Information = 0UL;
		deviceExtension->PlayActive = (unsigned char)0;
		if(SubQPtr == (0)) {
			status = -1073741670L;
			goto L5;
		}
		else if(SubQPtr < (0)) {
L26:;
			if(deviceExtension->Paused == 1) {
				ExFreePool((void *)SubQPtr);
				status = 0L;
				goto L8;
			}
			else if(deviceExtension->Paused < 1) {
L27:;
				srb.CdbLength = (unsigned char)6;
				srb.TimeOutValue = 10UL;
				cdb->CDB6GENERIC.OperationCode = (unsigned char)235;
				cdb->CDB6GENERIC.CommandUniqueBytes[2] = (unsigned char)10;
				status = SendSrbSynchronous(deviceExtension, & srb, (void *)SubQPtr, 10UL);
				if(status < 0L) {
					ExFreePool((void *)SubQPtr);
					goto L8;
				}
				else {
					deviceExtension->PausedM = *(SubQPtr + 7);
					deviceExtension->PausedS = *(SubQPtr + 8);
					deviceExtension->PausedF = *(SubQPtr + 9);
					memset((void *)cdb, 0, 12U);
					srb.CdbLength = (unsigned char)6;
					srb.TimeOutValue = 10UL;
					cdb->CDB6GENERIC.OperationCode = (unsigned char)231;
					status = SendSrbSynchronous(deviceExtension, & srb, (void *)0, 0UL);
					if(status < 0L) {
						ExFreePool((void *)SubQPtr);
						goto L8;
					}
					else {
						deviceExtension->Paused = (unsigned char)1;
						deviceExtension->PausedM = *(SubQPtr + 7);
						deviceExtension->PausedS = *(SubQPtr + 8);
						deviceExtension->PausedF = *(SubQPtr + 9);
						ExFreePool((void *)SubQPtr);
						goto L17;
					}
				}
			}
			else {
				goto L27;
			}
		}
		else {
			goto L26;
		}
	}
	else if(NONDET == 7) {
		Irp->IoStatus.Information = 0UL;
		if(deviceExtension->Paused == 0) {
			status = -1073741823L;
			goto L8;
		}
		else if(deviceExtension->Paused < 0) {
L28:;
			srb.CdbLength = (unsigned char)10;
			srb.TimeOutValue = 10UL;
			cdb->CDB10.OperationCode = (unsigned char)34;
			cdb->CDB10.LogicalBlockByte0 = deviceExtension->PausedM;
			cdb->CDB10.LogicalBlockByte1 = deviceExtension->PausedS;
			cdb->CDB10.LogicalBlockByte2 = deviceExtension->PausedF;
			cdb->CDB10.LogicalBlockByte3 = deviceExtension->LastEndM;
			cdb->CDB10.Reserved2 = deviceExtension->LastEndS;
			cdb->CDB10.TransferBlocksMsb = deviceExtension->LastEndF;
			status = SendSrbSynchronous(deviceExtension, & srb, (void *)0, 0UL);
			if(status >= 0L) {
				deviceExtension->Paused = (unsigned char)0;
L29:;
				goto L17;
			}
			else {
				goto L29;
			}
		}
		else {
			goto L28;
		}
	}
	else if(NONDET == 8) {
		userPtr = (struct _SUB_Q_CURRENT_POSITION *)Irp->AssociatedIrp.SystemBuffer;
		tmp___2 = ExAllocatePoolWithTag((enum _POOL_TYPE )4, (unsigned long )sizeof(SUB_Q_CHANNEL_DATA ), tag_1);
		SubQPtr = (UCHAR *)tmp___2;
		if(currentIrpStack->Parameters.DeviceIoControl.OutputBufferLength < (ULONG)sizeof(SUB_Q_CURRENT_POSITION )) {
			status = -1073741789L;
			Irp->IoStatus.Information = 0UL;
			if(SubQPtr > 0) {
L30:;
				ExFreePool((void *)SubQPtr);
L31:;
				goto L3;
			}
			else if(SubQPtr < 0) {
				goto L30;
			}
			else {
				goto L31;
			}
		}
		else {
			if(SubQPtr == (0)) {
				memset((void *)userPtr, 0, sizeof(SUB_Q_CURRENT_POSITION ));
				status = -1073741670L;
				Irp->IoStatus.Information = 0UL;
				goto L5;
			}
			else if(SubQPtr < (0)) {
L32:;
				if(((struct _CDROM_SUB_Q_DATA_FORMAT *)(userPtr))->Format < 1) {
L33:;
					ExFreePool((void *)SubQPtr);
					memset((void *)userPtr, 0, sizeof(SUB_Q_CURRENT_POSITION ));
					status = -1073741823L;
					Irp->IoStatus.Information = 0UL;
					goto L8;
				}
				else if(((struct _CDROM_SUB_Q_DATA_FORMAT *)(userPtr))->Format > 1) {
					goto L33;
				}
				else {
					srb.CdbLength = (unsigned char)6;
					srb.TimeOutValue = 10UL;
					cdb->CDB6GENERIC.OperationCode = (unsigned char)235;
					cdb->CDB6GENERIC.CommandUniqueBytes[2] = (unsigned char)10;
					status = SendSrbSynchronous(deviceExtension, & srb, (void *)SubQPtr, 10UL);
					if(status >= 0L) {
						userPtr->Header.Reserved = (unsigned char)0;
						if(deviceExtension->Paused == 1) {
							deviceExtension->PlayActive = (unsigned char)0;
							userPtr->Header.AudioStatus = (unsigned char)18;
L34:;
							userPtr->Header.DataLength[0] = (unsigned char)0;
							userPtr->Header.DataLength[0] = (unsigned char)12;
							userPtr->FormatCode = (unsigned char)1;
							userPtr->Control = *(SubQPtr + 1);
							userPtr->ADR = (unsigned char)0;
							userPtr->TrackNumber = (unsigned char )((((int )*(SubQPtr + 2) & 240) >> 4) * 10 + ((int )*(SubQPtr + 2) & 15));
							userPtr->IndexNumber = (unsigned char )((((int )*(SubQPtr + 3) & 240) >> 4) * 10 + ((int )*(SubQPtr + 3) & 15));
							userPtr->AbsoluteAddress[0] = (unsigned char)0;
							userPtr->AbsoluteAddress[1] = (unsigned char )((((int )*(SubQPtr + 7) & 240) >> 4) * 10 + ((int )*(SubQPtr + 7) & 15));
							userPtr->AbsoluteAddress[2] = (unsigned char )((((int )*(SubQPtr + 8) & 240) >> 4) * 10 + ((int )*(SubQPtr + 8) & 15));
							userPtr->AbsoluteAddress[3] = (unsigned char )((((int )*(SubQPtr + 9) & 240) >> 4) * 10 + ((int )*(SubQPtr + 9) & 15));
							userPtr->TrackRelativeAddress[0] = (unsigned char)0;
							userPtr->TrackRelativeAddress[1] = (unsigned char )((((int )*(SubQPtr + 4) & 240) >> 4) * 10 + ((int )*(SubQPtr + 4) & 15));
							userPtr->TrackRelativeAddress[2] = (unsigned char )((((int )*(SubQPtr + 5) & 240) >> 4) * 10 + ((int )*(SubQPtr + 5) & 15));
							userPtr->TrackRelativeAddress[3] = (unsigned char )((((int )*(SubQPtr + 6) & 240) >> 4) * 10 + ((int )*(SubQPtr + 6) & 15));
							Irp->IoStatus.Information = (unsigned long )sizeof(SUB_Q_CURRENT_POSITION );
L35:;
							ExFreePool((void *)SubQPtr);
							goto L17;
						}
						else if(deviceExtension->Paused < 1) {
L36:;
							if(*(SubQPtr + 0) == 1) {
								userPtr->Header.AudioStatus = (unsigned char)17;
								goto L34;
							}
							else if(*(SubQPtr + 0) < 1) {
L37:;
								if(*(SubQPtr + 0) == 0) {
									userPtr->Header.AudioStatus = (unsigned char)19;
									deviceExtension->PlayActive = (unsigned char)0;
									goto L34;
								}
								else if(*(SubQPtr + 0) < 0) {
L38:;
									deviceExtension->PlayActive = (unsigned char)0;
									goto L34;
								}
								else {
									goto L38;
								}
							}
							else {
								goto L37;
							}
						}
						else {
							goto L36;
						}
					}
					else {
						Irp->IoStatus.Information = 0UL;
						goto L35;
					}
				}
			}
			else {
				goto L32;
			}
		}
	}
	else if(NONDET == 9) {
		Irp->IoStatus.Information = 0UL;
		deviceExtension->PlayActive = (unsigned char)0;
		srb.CdbLength = (unsigned char)6;
		srb.TimeOutValue = 10UL;
		cdb->CDB6GENERIC.OperationCode = (unsigned char)230;
		status = SendSrbSynchronous(deviceExtension, & srb, (void *)0, 0UL);
		goto L17;
	}
	else if(NONDET == 10) {
L39:;
L40:;
		Irp->IoStatus.Information = 0UL;
		status = -1073741808L;
		goto L1;
	}
	else if(NONDET == 11) {
		goto L39;
	}
	else if(NONDET == 12) {
		goto L40;
	}
	else if(NONDET == 13) {
		CdAudioIsPlayActive(DeviceObject);
		tmp___3 = CdAudioSendToNextDriver(DeviceObject, Irp);
L41:;
		return (tmp___3);
		/* END OF PATH at func_CdAudioDenonDeviceControl@p320#1 */
	}
	else if(NONDET < 1) {
		tmp___3 = CdAudioSendToNextDriver(DeviceObject, Irp);
		goto L41;
	}
	else if(NONDET > 1 && NONDET < 2) {
		tmp___3 = CdAudioSendToNextDriver(DeviceObject, Irp);
		goto L41;
	}
	else if(NONDET > 2 && NONDET < 3) {
		tmp___3 = CdAudioSendToNextDriver(DeviceObject, Irp);
		goto L41;
	}
	else if(NONDET > 3 && NONDET < 4) {
		tmp___3 = CdAudioSendToNextDriver(DeviceObject, Irp);
		goto L41;
	}
	else if(NONDET > 4 && NONDET < 5) {
		tmp___3 = CdAudioSendToNextDriver(DeviceObject, Irp);
		goto L41;
	}
	else if(NONDET > 5 && NONDET < 6) {
		tmp___3 = CdAudioSendToNextDriver(DeviceObject, Irp);
		goto L41;
	}
	else if(NONDET > 6 && NONDET < 7) {
		tmp___3 = CdAudioSendToNextDriver(DeviceObject, Irp);
		goto L41;
	}
	else if(NONDET > 7 && NONDET < 8) {
		tmp___3 = CdAudioSendToNextDriver(DeviceObject, Irp);
		goto L41;
	}
	else if(NONDET > 8 && NONDET < 9) {
		tmp___3 = CdAudioSendToNextDriver(DeviceObject, Irp);
		goto L41;
	}
	else if(NONDET > 9 && NONDET < 10) {
		tmp___3 = CdAudioSendToNextDriver(DeviceObject, Irp);
		goto L41;
	}
	else if(NONDET > 10 && NONDET < 11) {
		tmp___3 = CdAudioSendToNextDriver(DeviceObject, Irp);
		goto L41;
	}
	else if(NONDET > 11 && NONDET < 12) {
		tmp___3 = CdAudioSendToNextDriver(DeviceObject, Irp);
		goto L41;
	}
	else if(NONDET > 12 && NONDET < 13) {
		tmp___3 = CdAudioSendToNextDriver(DeviceObject, Irp);
		goto L41;
	}
	else {
		tmp___3 = CdAudioSendToNextDriver(DeviceObject, Irp);
		goto L41;
	}
}

NTSTATUS CdAudioHitachiSendPauseCommand(PDEVICE_OBJECT DeviceObject )
{ PCD_DEVICE_EXTENSION deviceExtension ;
SCSI_PASS_THROUGH srb ;
PHITACHICDB cdb ;
NTSTATUS status ;
ULONG tag_1 ;
PUCHAR PausePos ;
PVOID tmp ;
	deviceExtension = (struct _CD_DEVICE_EXTENSION *)DeviceObject->DeviceExtension;
	cdb = (union _HITACHICDB *)(srb.Cdb);
	tmp = ExAllocatePoolWithTag((enum _POOL_TYPE )4, 3UL, tag_1);
	PausePos = (UCHAR *)tmp;
	if(PausePos == (0)) {
		return (-1073741670L);
		/* END OF PATH at func_CdAudioHitachiSendPauseCommand@p13#1 */
	}
	else if(PausePos < (0)) {
L1:;
		memset((void *)PausePos, 0, 3U);
		memset((void *)cdb, 0, 12U);
		srb.CdbLength = (unsigned char)12;
		srb.TimeOutValue = 10UL;
		cdb->PAUSE_AUDIO.OperationCode = (unsigned char)225;
		status = SendSrbSynchronous(deviceExtension, & srb, (void *)PausePos, 3UL);
		ExFreePool((void *)PausePos);
		return (status);
		/* END OF PATH at func_CdAudioHitachiSendPauseCommand@p23#1 */
	}
	else {
		goto L1;
	}
}

NTSTATUS CdAudioHitachiDeviceControl(PDEVICE_OBJECT DeviceObject , PIRP Irp )
{ PIO_STACK_LOCATION currentIrpStack ;
PCD_DEVICE_EXTENSION deviceExtension ;
PCDROM_TOC cdaudioDataOut ;
SCSI_PASS_THROUGH srb ;
PHITACHICDB cdb ;
NTSTATUS status ;
ULONG i ;
ULONG bytesTransfered ;
PUCHAR Toc ;
int temp_1 ;
ULONG tag_1 ;
ULONG tracksToReturn ;
ULONG tracksOnCd ;
ULONG tracksInBuffer ;
ULONG dataLength ;
PCDROM_PLAY_AUDIO_MSF inputBuffer ;
PSUB_Q_CURRENT_POSITION userPtr ;
PUCHAR SubQPtr ;
PUCHAR PausePos ;
PUCHAR EjectStatus ;
int NONDET ;
BOOLEAN tmp ;
PVOID tmp___0 ;
NTSTATUS tmp___1 ;
PVOID tmp___2 ;
PVOID tmp___3 ;
PVOID tmp___4 ;
NTSTATUS tmp___5 ;
	currentIrpStack = Irp->Tail.Overlay.__annonCompField17.__annonCompField16.CurrentStackLocation;
	deviceExtension = (struct _CD_DEVICE_EXTENSION *)DeviceObject->DeviceExtension;
	cdaudioDataOut = (struct _CDROM_TOC *)Irp->AssociatedIrp.SystemBuffer;
	cdb = (union _HITACHICDB *)(srb.Cdb);
	memset((void *)cdb, 0, 12U);
	if(NONDET == 1) {
		if(currentIrpStack->Parameters.DeviceIoControl.OutputBufferLength < ((&((CDROM_TOC *)0)->TrackData[0]))) {
			status = -1073741789L;
			Irp->IoStatus.Information = 0UL;
L1:;
			if(status > -2147483626L) {
L2:;
				Irp->IoStatus.__annonCompField4.Status = status;
				myStatus = (int )status;
				IofCompleteRequest(Irp, (char)0);
				return (status);
				/* END OF PATH at func_CdAudioHitachiDeviceControl@p384#1 */
			}
			else if(status == -2147483626L) {
				/* FALSE PATH */ 
			}
			else {
				/* FALSE PATH */ 
			}
		}
		else {
			tmp = CdAudioIsPlayActive(DeviceObject);
			temp_1 = (int )tmp;
			if(temp_1 > 0) {
L3:;
				status = -2147483631L;
				Irp->IoStatus.Information = 0UL;
				if(status < -2147483626L) {
					goto L2;
				}
				else if(status == -2147483626L) {
					/* FALSE PATH */ 
				}
				else {
					/* FALSE PATH */ 
				}
			}
			else if(temp_1 < 0) {
				goto L3;
			}
			else {
				tmp___0 = ExAllocatePoolWithTag((enum _POOL_TYPE )4, (unsigned long )sizeof(CDROM_TOC ), tag_1);
				Toc = (UCHAR *)tmp___0;
				if(Toc == (0)) {
					status = -1073741670L;
					Irp->IoStatus.Information = 0UL;
L4:;
					if(status > -2147483626L) {
						goto L2;
					}
					else if(status == -2147483626L) {
						/* FALSE PATH */ 
					}
					else {
						/* FALSE PATH */ 
					}
				}
				else if(Toc < (0)) {
L5:;
					memset((void *)Toc, 0, sizeof(CDROM_TOC ));
					srb.CdbLength = (unsigned char)12;
					if(deviceExtension->Active == 5) {
						cdb->READ_DISC_INFO.OperationCode = (unsigned char)227;
L6:;
						cdb->READ_DISC_INFO.AllocationLength[0] = (unsigned char )(sizeof(CDROM_TOC ) >> 8);
						cdb->READ_DISC_INFO.AllocationLength[1] = (unsigned char )(sizeof(CDROM_TOC ) & 255U);
						srb.TimeOutValue = 10UL;
						status = SendSrbSynchronous(deviceExtension, & srb, (void *)Toc, (unsigned long )sizeof(CDROM_TOC ));
						if(status < 0L) {
							if(status < -1073741764L) {
								if(status < -1073741764L) {
L7:;
									ExFreePool((void *)Toc);
									Irp->IoStatus.Information = 0UL;
L8:;
									if(status == -2147483626L) {
										if(currentIrpStack->Flags & 2 > 0) {
L9:;
											status = -1073741435L;
L10:;
											IoSetHardErrorOrVerifyDevice(Irp, deviceExtension->TargetDeviceObject);
											Irp->IoStatus.Information = 0UL;
											goto L2;
										}
										else if(currentIrpStack->Flags & 2 < 0) {
											goto L9;
										}
										else {
											goto L10;
										}
									}
									else if(status < -2147483626L) {
										goto L2;
									}
									else {
										goto L2;
									}
								}
								else if(status > -1073741764L) {
									/* FALSE PATH */ 
								}
								else {
									/* FALSE PATH */ 
								}
							}
							else if(status > -1073741764L) {
								if(status > -1073741764L) {
									goto L7;
								}
								else if(status < -1073741764L) {
									/* FALSE PATH */ 
								}
								else {
									/* FALSE PATH */ 
								}
							}
							else {
								status = 0L;
L11:;
								if(deviceExtension->Active == 6) {
									if(currentIrpStack->Parameters.DeviceIoControl.OutputBufferLength > (ULONG)sizeof(CDROM_TOC )) {
										bytesTransfered = (unsigned long )sizeof(CDROM_TOC );
L12:;
										cdaudioDataOut->FirstTrack = *(Toc + 2);
										cdaudioDataOut->LastTrack = *(Toc + 3);
										tracksOnCd = (unsigned long )(((int )cdaudioDataOut->LastTrack - (int )cdaudioDataOut->FirstTrack) + 1);
										dataLength = (unsigned long )((long )(& ((CDROM_TOC *)0)->TrackData[tracksOnCd])) - 2UL;
										cdaudioDataOut->Length[0] = (unsigned char )(dataLength >> 8);
										cdaudioDataOut->Length[1] = (unsigned char )(dataLength & 255UL);
										tracksInBuffer = currentIrpStack->Parameters.DeviceIoControl.OutputBufferLength - (unsigned long )((long )(& ((CDROM_TOC *)0)->TrackData[0]));
										tracksInBuffer = tracksInBuffer / (ULONG )sizeof(TRACK_DATA );
										if(tracksInBuffer < tracksOnCd) {
											tracksToReturn = tracksInBuffer;
											i = 0UL;
L13:;
L14:;
											if(i >= tracksToReturn) {
L15:;
												if(tracksInBuffer <= tracksOnCd) {
L16:;
													Irp->IoStatus.Information = (unsigned long )((long )(& ((CDROM_TOC *)0)->TrackData[i]));
													deviceExtension->Paused = (unsigned char)0;
													deviceExtension->PausedM = (unsigned char)0;
													deviceExtension->PausedS = (unsigned char)0;
													deviceExtension->PausedF = (unsigned char)0;
													deviceExtension->LastEndM = (unsigned char)0;
													deviceExtension->LastEndS = (unsigned char)0;
													deviceExtension->LastEndF = (unsigned char)0;
L17:;
													ExFreePool((void *)Toc);
L18:;
													goto L8;
												}
												else {
													/* FALSE PATH */ 
												}
											}
											else {
												cdaudioDataOut->TrackData[i].Reserved = (unsigned char)0;
												cdaudioDataOut->TrackData[i].Control = (unsigned char )((((int )*(Toc + (i * 4UL + 8UL)) & 15) << 4) | ((int )*(Toc + (i * 4UL + 8UL)) >> 4));
												cdaudioDataOut->TrackData[i].TrackNumber = (unsigned char )(i + (ULONG )cdaudioDataOut->FirstTrack);
												cdaudioDataOut->TrackData[i].Reserved1 = (unsigned char)0;
												cdaudioDataOut->TrackData[i].Address[0] = (unsigned char)0;
												cdaudioDataOut->TrackData[i].Address[1] = *(Toc + (i * 4UL + 9UL));
												cdaudioDataOut->TrackData[i].Address[2] = *(Toc + (i * 4UL + 10UL));
												cdaudioDataOut->TrackData[i].Address[3] = *(Toc + (i * 4UL + 11UL));
												i = i + 1UL;
												goto L14;
											}
										}
										else {
											tracksToReturn = tracksOnCd;
											i = 0UL;
L19:;
L20:;
											if(i >= tracksToReturn) {
L21:;
												if(tracksInBuffer > tracksOnCd) {
													cdaudioDataOut->TrackData[i].Reserved = (unsigned char)0;
													cdaudioDataOut->TrackData[i].Control = (unsigned char)16;
													cdaudioDataOut->TrackData[i].TrackNumber = (unsigned char)170;
													cdaudioDataOut->TrackData[i].Reserved1 = (unsigned char)0;
													cdaudioDataOut->TrackData[i].Address[0] = (unsigned char)0;
													cdaudioDataOut->TrackData[i].Address[1] = *(Toc + 5);
													cdaudioDataOut->TrackData[i].Address[2] = *(Toc + 6);
													cdaudioDataOut->TrackData[i].Address[3] = *(Toc + 7);
													i = i + 1UL;
													goto L16;
												}
												else {
													goto L16;
												}
											}
											else {
												cdaudioDataOut->TrackData[i].Reserved = (unsigned char)0;
												cdaudioDataOut->TrackData[i].Control = (unsigned char )((((int )*(Toc + (i * 4UL + 8UL)) & 15) << 4) | ((int )*(Toc + (i * 4UL + 8UL)) >> 4));
												cdaudioDataOut->TrackData[i].TrackNumber = (unsigned char )(i + (ULONG )cdaudioDataOut->FirstTrack);
												cdaudioDataOut->TrackData[i].Reserved1 = (unsigned char)0;
												cdaudioDataOut->TrackData[i].Address[0] = (unsigned char)0;
												cdaudioDataOut->TrackData[i].Address[1] = *(Toc + (i * 4UL + 9UL));
												cdaudioDataOut->TrackData[i].Address[2] = *(Toc + (i * 4UL + 10UL));
												cdaudioDataOut->TrackData[i].Address[3] = *(Toc + (i * 4UL + 11UL));
												i = i + 1UL;
												goto L20;
											}
										}
									}
									else {
										bytesTransfered = currentIrpStack->Parameters.DeviceIoControl.OutputBufferLength;
										goto L12;
									}
								}
								else if(deviceExtension->Active < 6) {
L22:;
									if(currentIrpStack->Parameters.DeviceIoControl.OutputBufferLength > (ULONG)sizeof(CDROM_TOC )) {
										bytesTransfered = (unsigned long )sizeof(CDROM_TOC );
L23:;
										cdaudioDataOut->FirstTrack = *(Toc + 1);
										cdaudioDataOut->LastTrack = *(Toc + 2);
										tracksOnCd = (unsigned long )(((int )cdaudioDataOut->LastTrack - (int )cdaudioDataOut->FirstTrack) + 1);
										dataLength = (unsigned long )((long )(& ((CDROM_TOC *)0)->TrackData[tracksOnCd])) - 2UL;
										cdaudioDataOut->Length[0] = (unsigned char )(dataLength >> 8);
										cdaudioDataOut->Length[1] = (unsigned char )(dataLength & 255UL);
										tracksInBuffer = currentIrpStack->Parameters.DeviceIoControl.OutputBufferLength - (unsigned long )((long )(& ((CDROM_TOC *)0)->TrackData[0]));
										tracksInBuffer = tracksInBuffer / (ULONG )sizeof(TRACK_DATA );
										if(tracksInBuffer < tracksOnCd) {
											tracksToReturn = tracksInBuffer;
											i = 0UL;
L24:;
L25:;
											if(i >= tracksToReturn) {
L26:;
												if(tracksInBuffer <= tracksOnCd) {
L27:;
													Irp->IoStatus.Information = (unsigned long )((long )(& ((CDROM_TOC *)0)->TrackData[i]));
													goto L17;
												}
												else {
													/* FALSE PATH */ 
												}
											}
											else {
												cdaudioDataOut->TrackData[i].Reserved = (unsigned char)0;
												if(*(Toc + (i * 3UL + 6UL)) & 128 > 0) {
L28:;
													cdaudioDataOut->TrackData[i].Control = (unsigned char)4;
L29:;
													cdaudioDataOut->TrackData[i].Adr = (unsigned char)0;
													cdaudioDataOut->TrackData[i].TrackNumber = (unsigned char )(i + (ULONG )cdaudioDataOut->FirstTrack);
													cdaudioDataOut->TrackData[i].Reserved1 = (unsigned char)0;
													cdaudioDataOut->TrackData[i].Address[0] = (unsigned char)0;
													cdaudioDataOut->TrackData[i].Address[1] = (unsigned char )((int )*(Toc + (i * 3UL + 6UL)) & 127);
													cdaudioDataOut->TrackData[i].Address[2] = *(Toc + (i * 3UL + 7UL));
													cdaudioDataOut->TrackData[i].Address[3] = *(Toc + (i * 3UL + 8UL));
													i = i + 1UL;
													goto L25;
												}
												else if(*(Toc + (i * 3UL + 6UL)) & 128 < 0) {
													goto L28;
												}
												else {
													cdaudioDataOut->TrackData[i].Control = (unsigned char)0;
													goto L29;
												}
											}
										}
										else {
											tracksToReturn = tracksOnCd;
											i = 0UL;
L30:;
L31:;
											if(i >= tracksToReturn) {
L32:;
												if(tracksInBuffer > tracksOnCd) {
													cdaudioDataOut->TrackData[i].Reserved = (unsigned char)0;
													cdaudioDataOut->TrackData[i].Control = (unsigned char)16;
													cdaudioDataOut->TrackData[i].TrackNumber = (unsigned char)170;
													cdaudioDataOut->TrackData[i].Reserved1 = (unsigned char)0;
													cdaudioDataOut->TrackData[i].Address[0] = (unsigned char)0;
													cdaudioDataOut->TrackData[i].Address[1] = *(Toc + 3);
													cdaudioDataOut->TrackData[i].Address[2] = *(Toc + 4);
													cdaudioDataOut->TrackData[i].Address[3] = *(Toc + 5);
													i = i + 1UL;
													goto L27;
												}
												else {
													goto L27;
												}
											}
											else {
												cdaudioDataOut->TrackData[i].Reserved = (unsigned char)0;
												if(*(Toc + (i * 3UL + 6UL)) & 128 > 0) {
L33:;
													cdaudioDataOut->TrackData[i].Control = (unsigned char)4;
L34:;
													cdaudioDataOut->TrackData[i].Adr = (unsigned char)0;
													cdaudioDataOut->TrackData[i].TrackNumber = (unsigned char )(i + (ULONG )cdaudioDataOut->FirstTrack);
													cdaudioDataOut->TrackData[i].Reserved1 = (unsigned char)0;
													cdaudioDataOut->TrackData[i].Address[0] = (unsigned char)0;
													cdaudioDataOut->TrackData[i].Address[1] = (unsigned char )((int )*(Toc + (i * 3UL + 6UL)) & 127);
													cdaudioDataOut->TrackData[i].Address[2] = *(Toc + (i * 3UL + 7UL));
													cdaudioDataOut->TrackData[i].Address[3] = *(Toc + (i * 3UL + 8UL));
													i = i + 1UL;
													goto L31;
												}
												else if(*(Toc + (i * 3UL + 6UL)) & 128 < 0) {
													goto L33;
												}
												else {
													cdaudioDataOut->TrackData[i].Control = (unsigned char)0;
													goto L34;
												}
											}
										}
									}
									else {
										bytesTransfered = currentIrpStack->Parameters.DeviceIoControl.OutputBufferLength;
										goto L23;
									}
								}
								else {
									goto L22;
								}
							}
						}
						else {
							status = 0L;
							goto L11;
						}
					}
					else if(deviceExtension->Active < 5) {
L35:;
						cdb->READ_DISC_INFO.OperationCode = (unsigned char)232;
						goto L6;
					}
					else {
						goto L35;
					}
				}
				else {
					goto L5;
				}
			}
		}
	}
	else if(NONDET == 2) {
		deviceExtension->PlayActive = (unsigned char)0;
		Irp->IoStatus.Information = 0UL;
		CdAudioHitachiSendPauseCommand(DeviceObject);
		deviceExtension->Paused = (unsigned char)0;
		deviceExtension->PausedM = (unsigned char)0;
		deviceExtension->PausedS = (unsigned char)0;
		deviceExtension->PausedF = (unsigned char)0;
		deviceExtension->LastEndM = (unsigned char)0;
		deviceExtension->LastEndS = (unsigned char)0;
		deviceExtension->LastEndF = (unsigned char)0;
		tmp___1 = CdAudioSendToNextDriver(DeviceObject, Irp);
		return (tmp___1);
		/* END OF PATH at func_CdAudioHitachiDeviceControl@p181#1 */
	}
	else if(NONDET == 3) {
		inputBuffer = (struct _CDROM_PLAY_AUDIO_MSF *)Irp->AssociatedIrp.SystemBuffer;
		Irp->IoStatus.Information = 0UL;
		if(currentIrpStack->Parameters.DeviceIoControl.InputBufferLength < (ULONG )sizeof(CDROM_PLAY_AUDIO_MSF )) {
			status = -1073741820L;
			goto L18;
		}
		else {
			CdAudioHitachiSendPauseCommand(DeviceObject);
			srb.CdbLength = (unsigned char)12;
			srb.TimeOutValue = 10UL;
			cdb->PLAY_AUDIO.OperationCode = (unsigned char)224;
			cdb->PLAY_AUDIO.Immediate = (unsigned char)1;
			cdb->PLAY_AUDIO.StartingM = inputBuffer->StartingM;
			cdb->PLAY_AUDIO.StartingS = inputBuffer->StartingS;
			cdb->PLAY_AUDIO.StartingF = inputBuffer->StartingF;
			cdb->PLAY_AUDIO.EndingM = inputBuffer->EndingM;
			cdb->PLAY_AUDIO.EndingS = inputBuffer->EndingS;
			cdb->PLAY_AUDIO.EndingF = inputBuffer->EndingF;
			status = SendSrbSynchronous(deviceExtension, & srb, (void *)0, 0UL);
			if(status >= 0L) {
				deviceExtension->PlayActive = (unsigned char)1;
				deviceExtension->Paused = (unsigned char)0;
				deviceExtension->PausedM = inputBuffer->StartingM;
				deviceExtension->PausedS = inputBuffer->StartingS;
				deviceExtension->PausedF = inputBuffer->StartingF;
				deviceExtension->LastEndM = inputBuffer->EndingM;
				deviceExtension->LastEndS = inputBuffer->EndingS;
				deviceExtension->LastEndF = inputBuffer->EndingF;
L36:;
				goto L18;
			}
			else {
				goto L36;
			}
		}
	}
	else if(NONDET == 4) {
		inputBuffer = (struct _CDROM_PLAY_AUDIO_MSF *)Irp->AssociatedIrp.SystemBuffer;
		Irp->IoStatus.Information = 0UL;
		if(currentIrpStack->Parameters.DeviceIoControl.InputBufferLength < (ULONG )sizeof(CDROM_PLAY_AUDIO_MSF )) {
			status = -1073741820L;
			goto L18;
		}
		else {
			CdAudioHitachiSendPauseCommand(DeviceObject);
			srb.CdbLength = (unsigned char)12;
			srb.TimeOutValue = 10UL;
			cdb->PLAY_AUDIO.OperationCode = (unsigned char)224;
			cdb->PLAY_AUDIO.Immediate = (unsigned char)1;
			cdb->PLAY_AUDIO.StartingM = inputBuffer->StartingM;
			cdb->PLAY_AUDIO.StartingS = inputBuffer->StartingS;
			cdb->PLAY_AUDIO.StartingF = inputBuffer->StartingF;
			cdb->PLAY_AUDIO.EndingM = inputBuffer->EndingM;
			cdb->PLAY_AUDIO.EndingS = inputBuffer->EndingS;
			cdb->PLAY_AUDIO.EndingF = inputBuffer->EndingF;
			status = SendSrbSynchronous(deviceExtension, & srb, (void *)0, 0UL);
			if(status >= 0L) {
				deviceExtension->PausedM = inputBuffer->StartingM;
				deviceExtension->PausedS = inputBuffer->StartingS;
				deviceExtension->PausedF = inputBuffer->StartingF;
				deviceExtension->LastEndM = inputBuffer->EndingM;
				deviceExtension->LastEndS = inputBuffer->EndingS;
				deviceExtension->LastEndF = inputBuffer->EndingF;
L37:;
				goto L18;
			}
			else {
				goto L37;
			}
		}
	}
	else if(NONDET == 5) {
		tmp___2 = ExAllocatePoolWithTag((enum _POOL_TYPE )4, 3UL, tag_1);
		PausePos = (UCHAR *)tmp___2;
		Irp->IoStatus.Information = 0UL;
		if(PausePos == (0)) {
			status = -1073741670L;
			goto L4;
		}
		else if(PausePos < (0)) {
L38:;
			deviceExtension->PlayActive = (unsigned char)0;
			memset((void *)PausePos, 0, 3U);
			srb.CdbLength = (unsigned char)12;
			srb.TimeOutValue = 10UL;
			cdb->PAUSE_AUDIO.OperationCode = (unsigned char)225;
			status = SendSrbSynchronous(deviceExtension, & srb, (void *)PausePos, 3UL);
			deviceExtension->Paused = (unsigned char)1;
			deviceExtension->PausedM = *(PausePos + 0);
			deviceExtension->PausedS = *(PausePos + 1);
			deviceExtension->PausedF = *(PausePos + 2);
			ExFreePool((void *)PausePos);
			goto L18;
		}
		else {
			goto L38;
		}
	}
	else if(NONDET == 6) {
		Irp->IoStatus.Information = 0UL;
		CdAudioHitachiSendPauseCommand(DeviceObject);
		srb.CdbLength = (unsigned char)12;
		srb.TimeOutValue = 10UL;
		cdb->PLAY_AUDIO.OperationCode = (unsigned char)224;
		cdb->PLAY_AUDIO.Immediate = (unsigned char)1;
		cdb->PLAY_AUDIO.StartingM = deviceExtension->PausedM;
		cdb->PLAY_AUDIO.StartingS = deviceExtension->PausedS;
		cdb->PLAY_AUDIO.StartingF = deviceExtension->PausedF;
		cdb->PLAY_AUDIO.EndingM = deviceExtension->LastEndM;
		cdb->PLAY_AUDIO.EndingS = deviceExtension->LastEndS;
		cdb->PLAY_AUDIO.EndingF = deviceExtension->LastEndF;
		status = SendSrbSynchronous(deviceExtension, & srb, (void *)0, 0UL);
		if(status >= 0L) {
			deviceExtension->Paused = (unsigned char)0;
L39:;
			goto L18;
		}
		else {
			goto L39;
		}
	}
	else if(NONDET == 7) {
		userPtr = (struct _SUB_Q_CURRENT_POSITION *)Irp->AssociatedIrp.SystemBuffer;
		tmp___3 = ExAllocatePoolWithTag((enum _POOL_TYPE )4, (unsigned long )sizeof(SUB_Q_CHANNEL_DATA ), tag_1);
		SubQPtr = (UCHAR *)tmp___3;
		if(currentIrpStack->Parameters.DeviceIoControl.OutputBufferLength < (ULONG)sizeof(SUB_Q_CURRENT_POSITION )) {
			status = -1073741789L;
			Irp->IoStatus.Information = 0UL;
			if(SubQPtr > 0) {
L40:;
				ExFreePool((void *)SubQPtr);
L41:;
				goto L1;
			}
			else if(SubQPtr < 0) {
				goto L40;
			}
			else {
				goto L41;
			}
		}
		else {
			if(SubQPtr == (0)) {
				status = -1073741670L;
				Irp->IoStatus.Information = 0UL;
				goto L4;
			}
			else if(SubQPtr < (0)) {
L42:;
				if(((struct _CDROM_SUB_Q_DATA_FORMAT *)(userPtr))->Format < 1) {
L43:;
					ExFreePool((void *)SubQPtr);
					status = -1073741823L;
					Irp->IoStatus.Information = 0UL;
					goto L8;
				}
				else if(((struct _CDROM_SUB_Q_DATA_FORMAT *)(userPtr))->Format > 1) {
					goto L43;
				}
				else {
					srb.CdbLength = (unsigned char)12;
					srb.TimeOutValue = 10UL;
					cdb->AUDIO_STATUS.OperationCode = (unsigned char)229;
					status = SendSrbSynchronous(deviceExtension, & srb, (void *)SubQPtr, (unsigned long )sizeof(SUB_Q_CHANNEL_DATA ));
					if(status >= 0L) {
L44:;
						userPtr->Header.Reserved = (unsigned char)0;
						if(deviceExtension->Paused == 1) {
							deviceExtension->PlayActive = (unsigned char)0;
							userPtr->Header.AudioStatus = (unsigned char)18;
L45:;
							userPtr->Header.DataLength[0] = (unsigned char)0;
							userPtr->Header.DataLength[0] = (unsigned char)12;
							userPtr->FormatCode = (unsigned char)1;
							userPtr->Control = (unsigned char )(((int )*(SubQPtr + 1) & 240) >> 4);
							userPtr->ADR = (unsigned char )((int )*(SubQPtr + 1) & 15);
							userPtr->TrackNumber = *(SubQPtr + 2);
							userPtr->IndexNumber = *(SubQPtr + 3);
							userPtr->AbsoluteAddress[0] = (unsigned char)0;
							userPtr->AbsoluteAddress[1] = *(SubQPtr + 8);
							userPtr->AbsoluteAddress[2] = *(SubQPtr + 9);
							userPtr->AbsoluteAddress[3] = *(SubQPtr + 10);
							userPtr->TrackRelativeAddress[0] = (unsigned char)0;
							userPtr->TrackRelativeAddress[1] = *(SubQPtr + 4);
							userPtr->TrackRelativeAddress[2] = *(SubQPtr + 5);
							userPtr->TrackRelativeAddress[3] = *(SubQPtr + 6);
							Irp->IoStatus.Information = (unsigned long )sizeof(SUB_Q_CURRENT_POSITION );
							status = 0L;
L46:;
							ExFreePool((void *)SubQPtr);
							goto L18;
						}
						else if(deviceExtension->Paused < 1) {
L47:;
							if(*(SubQPtr + 0) == 1) {
								userPtr->Header.AudioStatus = (unsigned char)17;
								goto L45;
							}
							else if(*(SubQPtr + 0) < 1) {
L48:;
								if(*(SubQPtr + 0) == 0) {
									userPtr->Header.AudioStatus = (unsigned char)19;
									deviceExtension->PlayActive = (unsigned char)0;
									goto L45;
								}
								else if(*(SubQPtr + 0) < 0) {
L49:;
									deviceExtension->PlayActive = (unsigned char)0;
									goto L45;
								}
								else {
									goto L49;
								}
							}
							else {
								goto L48;
							}
						}
						else {
							goto L47;
						}
					}
					else {
						if(status == -1073741764L) {
							goto L44;
						}
						else if(status < -1073741764L) {
L50:;
							Irp->IoStatus.Information = 0UL;
							goto L46;
						}
						else {
							goto L50;
						}
					}
				}
			}
			else {
				goto L42;
			}
		}
	}
	else if(NONDET == 8) {
		tmp___4 = ExAllocatePoolWithTag((enum _POOL_TYPE )4, 1UL, tag_1);
		EjectStatus = (UCHAR *)tmp___4;
		Irp->IoStatus.Information = 0UL;
		if(EjectStatus == (0)) {
			status = -1073741670L;
			goto L4;
		}
		else if(EjectStatus < (0)) {
L51:;
			deviceExtension->PlayActive = (unsigned char)0;
			srb.CdbLength = (unsigned char)12;
			srb.TimeOutValue = 10UL;
			cdb->EJECT.OperationCode = (unsigned char)228;
			cdb->EJECT.Eject = (unsigned char)1;
			status = SendSrbSynchronous(deviceExtension, & srb, (void *)EjectStatus, 1UL);
			if(status >= 0L) {
				deviceExtension->Paused = (unsigned char)0;
				deviceExtension->PausedM = (unsigned char)0;
				deviceExtension->PausedS = (unsigned char)0;
				deviceExtension->PausedF = (unsigned char)0;
				deviceExtension->LastEndM = (unsigned char)0;
				deviceExtension->LastEndS = (unsigned char)0;
				deviceExtension->LastEndF = (unsigned char)0;
L52:;
				ExFreePool((void *)EjectStatus);
				goto L18;
			}
			else {
				goto L52;
			}
		}
		else {
			goto L51;
		}
	}
	else if(NONDET == 9) {
L53:;
L54:;
		Irp->IoStatus.Information = 0UL;
		status = -1073741808L;
		goto L18;
	}
	else if(NONDET == 10) {
		goto L53;
	}
	else if(NONDET == 11) {
		goto L54;
	}
	else if(NONDET == 12) {
		CdAudioIsPlayActive(DeviceObject);
		tmp___5 = CdAudioSendToNextDriver(DeviceObject, Irp);
L55:;
		return (tmp___5);
		/* END OF PATH at func_CdAudioHitachiDeviceControl@p371#1 */
	}
	else if(NONDET < 1) {
		tmp___5 = CdAudioSendToNextDriver(DeviceObject, Irp);
		goto L55;
	}
	else if(NONDET > 1 && NONDET < 2) {
		tmp___5 = CdAudioSendToNextDriver(DeviceObject, Irp);
		goto L55;
	}
	else if(NONDET > 2 && NONDET < 3) {
		tmp___5 = CdAudioSendToNextDriver(DeviceObject, Irp);
		goto L55;
	}
	else if(NONDET > 3 && NONDET < 4) {
		tmp___5 = CdAudioSendToNextDriver(DeviceObject, Irp);
		goto L55;
	}
	else if(NONDET > 4 && NONDET < 5) {
		tmp___5 = CdAudioSendToNextDriver(DeviceObject, Irp);
		goto L55;
	}
	else if(NONDET > 5 && NONDET < 6) {
		tmp___5 = CdAudioSendToNextDriver(DeviceObject, Irp);
		goto L55;
	}
	else if(NONDET > 6 && NONDET < 7) {
		tmp___5 = CdAudioSendToNextDriver(DeviceObject, Irp);
		goto L55;
	}
	else if(NONDET > 7 && NONDET < 8) {
		tmp___5 = CdAudioSendToNextDriver(DeviceObject, Irp);
		goto L55;
	}
	else if(NONDET > 8 && NONDET < 9) {
		tmp___5 = CdAudioSendToNextDriver(DeviceObject, Irp);
		goto L55;
	}
	else if(NONDET > 9 && NONDET < 10) {
		tmp___5 = CdAudioSendToNextDriver(DeviceObject, Irp);
		goto L55;
	}
	else if(NONDET > 10 && NONDET < 11) {
		tmp___5 = CdAudioSendToNextDriver(DeviceObject, Irp);
		goto L55;
	}
	else if(NONDET > 11 && NONDET < 12) {
		tmp___5 = CdAudioSendToNextDriver(DeviceObject, Irp);
		goto L55;
	}
	else {
		tmp___5 = CdAudioSendToNextDriver(DeviceObject, Irp);
		goto L55;
	}
}

NTSTATUS CdAudio535DeviceControl(PDEVICE_OBJECT DeviceObject , PIRP Irp )
{ PIO_STACK_LOCATION currentIrpStack ;
PCD_DEVICE_EXTENSION deviceExtension ;
PCDROM_TOC cdaudioDataOut ;
SCSI_PASS_THROUGH srb ;
PREAD_CAPACITY_DATA lastSession ;
PCDB cdb ;
NTSTATUS status ;
ULONG i ;
ULONG bytesTransfered ;
PUCHAR Toc ;
ULONG destblock ;
int temp_1 ;
ULONG tag_1 ;
ULONG tracksToReturn ;
ULONG tracksOnCd ;
ULONG tracksInBuffer ;
ULONG dataLength ;
PCDROM_PLAY_AUDIO_MSF inputBuffer ;
PSUB_Q_CURRENT_POSITION userPtr ;
PUCHAR SubQPtr ;
PUCHAR PausePos ;
PUCHAR EjectStatus ;
int NONDET ;
BOOLEAN tmp ;
PVOID tmp___0 ;
BOOLEAN tmp___1 ;
PVOID tmp___2 ;
PVOID tmp___3 ;
NTSTATUS tmp___4 ;
	currentIrpStack = Irp->Tail.Overlay.__annonCompField17.__annonCompField16.CurrentStackLocation;
	deviceExtension = (struct _CD_DEVICE_EXTENSION *)DeviceObject->DeviceExtension;
	cdaudioDataOut = (struct _CDROM_TOC *)Irp->AssociatedIrp.SystemBuffer;
	cdb = (union _CDB *)(srb.Cdb);
	memset((void *)cdb, 0, 12U);
	if(NONDET == 1) {
		tmp = CdAudioIsPlayActive(DeviceObject);
		temp_1 = (int )tmp;
		if(temp_1 > 0) {
L1:;
			status = -2147483631L;
			Irp->IoStatus.Information = 0UL;
L2:;
			if(status < -2147483626L) {
L3:;
				Irp->IoStatus.__annonCompField4.Status = status;
				myStatus = (int )status;
				IofCompleteRequest(Irp, (char)0);
				return (status);
				/* END OF PATH at func_CdAudio535DeviceControl@p291#1 */
			}
			else if(status == -2147483626L) {
				/* FALSE PATH */ 
			}
			else {
				/* FALSE PATH */ 
			}
		}
		else if(temp_1 < 0) {
			goto L1;
		}
		else {
			if(currentIrpStack->Parameters.DeviceIoControl.OutputBufferLength < ((&((CDROM_TOC *)0)->TrackData[1]))) {
				status = -1073741789L;
				Irp->IoStatus.Information = 0UL;
L4:;
				if(status > -2147483626L) {
					goto L3;
				}
				else if(status == -2147483626L) {
					/* FALSE PATH */ 
				}
				else {
					/* FALSE PATH */ 
				}
			}
			else {
				tmp___0 = ExAllocatePoolWithTag((enum _POOL_TYPE )4, (unsigned long )sizeof(READ_CAPACITY_DATA ), tag_1);
				lastSession = (struct _READ_CAPACITY_DATA *)tmp___0;
				if(lastSession == (0)) {
					status = -1073741670L;
					Irp->IoStatus.Information = 0UL;
L5:;
					if(status > -2147483626L) {
						goto L3;
					}
					else if(status == -2147483626L) {
						/* FALSE PATH */ 
					}
					else {
						/* FALSE PATH */ 
					}
				}
				else if(lastSession < (0)) {
L6:;
					memset((void *)lastSession, 0, sizeof(READ_CAPACITY_DATA ));
					srb.CdbLength = (unsigned char)10;
					cdb->CDB10.OperationCode = (unsigned char)38;
					srb.TimeOutValue = 10UL;
					status = SendSrbSynchronous(deviceExtension, & srb, (void *)lastSession, (unsigned long )sizeof(READ_CAPACITY_DATA ));
					if(status < 0L) {
						ExFreePool((void *)lastSession);
						Irp->IoStatus.Information = 0UL;
L7:;
						if(status == -2147483626L) {
							IoSetHardErrorOrVerifyDevice(Irp, deviceExtension->TargetDeviceObject);
							Irp->IoStatus.Information = 0UL;
							goto L3;
						}
						else if(status < -2147483626L) {
							goto L3;
						}
						else {
							goto L3;
						}
					}
					else {
						status = 0L;
						bytesTransfered = (unsigned long )((long )(& ((CDROM_TOC *)0)->TrackData[1]));
						Irp->IoStatus.Information = bytesTransfered;
						memset((void *)cdaudioDataOut, 0, (unsigned int )bytesTransfered);
						cdaudioDataOut->Length[0] = (unsigned char )((bytesTransfered - 2UL) >> 8);
						cdaudioDataOut->Length[1] = (unsigned char )((bytesTransfered - 2UL) & 255UL);
						if(lastSession->LogicalBlockAddress == 0UL) {
							ExFreePool((void *)lastSession);
L8:;
							goto L7;
						}
						else if(lastSession->LogicalBlockAddress < 0UL) {
L9:;
							cdaudioDataOut->FirstTrack = (unsigned char)1;
							cdaudioDataOut->LastTrack = (unsigned char)2;
							cdaudioDataOut->TrackData[0].Address[0] = (unsigned char )lastSession->LogicalBlockAddress;
							ExFreePool((void *)lastSession);
							goto L8;
						}
						else {
							goto L9;
						}
					}
				}
				else {
					goto L6;
				}
			}
		}
	}
	else if(NONDET == 2) {
		if(currentIrpStack->Parameters.DeviceIoControl.OutputBufferLength < ((&((CDROM_TOC *)0)->TrackData[0]))) {
			status = -1073741789L;
			Irp->IoStatus.Information = 0UL;
			goto L4;
		}
		else {
			tmp___1 = CdAudioIsPlayActive(DeviceObject);
			temp_1 = (int )tmp___1;
			if(temp_1 > 0) {
L10:;
				status = -2147483631L;
				Irp->IoStatus.Information = 0UL;
				goto L2;
			}
			else if(temp_1 < 0) {
				goto L10;
			}
			else {
				tmp___2 = ExAllocatePoolWithTag((enum _POOL_TYPE )4, (unsigned long )sizeof(CDROM_TOC ), tag_1);
				Toc = (UCHAR *)tmp___2;
				if(Toc == (0)) {
					status = -1073741670L;
					Irp->IoStatus.Information = 0UL;
					goto L5;
				}
				else if(Toc < (0)) {
L11:;
					memset((void *)Toc, 0, sizeof(CDROM_TOC ));
					cdb->CDB10.OperationCode = (unsigned char)67;
					cdb->CDB10.Reserved1 = (unsigned char)1;
					cdb->CDB10.TransferBlocksMsb = (unsigned char )(sizeof(CDROM_TOC ) >> 8);
					cdb->CDB10.TransferBlocksLsb = (unsigned char )(sizeof(CDROM_TOC ) & 255U);
					srb.TimeOutValue = 10UL;
					srb.CdbLength = (unsigned char)10;
					status = SendSrbSynchronous(deviceExtension, & srb, (void *)Toc, (unsigned long )sizeof(CDROM_TOC ));
					if(status < 0L) {
						if(status < -1073741764L) {
							if(status < -1073741764L) {
L12:;
								ExFreePool((void *)Toc);
								Irp->IoStatus.Information = 0UL;
								goto L7;
							}
							else if(status > -1073741764L) {
								/* FALSE PATH */ 
							}
							else {
								/* FALSE PATH */ 
							}
						}
						else if(status > -1073741764L) {
							if(status > -1073741764L) {
								goto L12;
							}
							else if(status < -1073741764L) {
								/* FALSE PATH */ 
							}
							else {
								/* FALSE PATH */ 
							}
						}
						else {
							status = 0L;
L13:;
							if(currentIrpStack->Parameters.DeviceIoControl.OutputBufferLength > (ULONG)sizeof(CDROM_TOC )) {
								bytesTransfered = (unsigned long )sizeof(CDROM_TOC );
L14:;
								cdaudioDataOut->Length[0] = *(Toc + 0);
								cdaudioDataOut->Length[1] = *(Toc + 1);
								cdaudioDataOut->FirstTrack = (unsigned char )((((int )*(Toc + 2) & 240) >> 4) * 10 + ((int )*(Toc + 2) & 15));
								cdaudioDataOut->LastTrack = (unsigned char )((((int )*(Toc + 3) & 240) >> 4) * 10 + ((int )*(Toc + 3) & 15));
								tracksOnCd = (unsigned long )(((int )cdaudioDataOut->LastTrack - (int )cdaudioDataOut->FirstTrack) + 1);
								tracksInBuffer = currentIrpStack->Parameters.DeviceIoControl.OutputBufferLength - (unsigned long )((long )(& ((CDROM_TOC *)0)->TrackData[0]));
								tracksInBuffer = tracksInBuffer / (ULONG )sizeof(TRACK_DATA );
								if(tracksInBuffer < tracksOnCd) {
									tracksToReturn = tracksInBuffer;
									i = 0UL;
L15:;
L16:;
									if(i >= tracksToReturn) {
L17:;
										if(tracksInBuffer <= tracksOnCd) {
L18:;
											Irp->IoStatus.Information = (unsigned long )((long )(& ((CDROM_TOC *)0)->TrackData[i]));
											ExFreePool((void *)Toc);
											goto L8;
										}
										else {
											/* FALSE PATH */ 
										}
									}
									else {
										cdaudioDataOut->TrackData[i].Reserved = (unsigned char)0;
										cdaudioDataOut->TrackData[i].Control = *(Toc + ((i * 8UL + 4UL) + 1UL));
										cdaudioDataOut->TrackData[i].TrackNumber = (unsigned char )((((int )*(Toc + ((i * 8UL + 4UL) + 2UL)) & 240) >> 4) * 10 + ((int )*(Toc + ((i * 8UL + 4UL) + 2UL)) & 15));
										cdaudioDataOut->TrackData[i].Reserved1 = (unsigned char)0;
										cdaudioDataOut->TrackData[i].Address[0] = (unsigned char)0;
										cdaudioDataOut->TrackData[i].Address[1] = *(Toc + ((i * 8UL + 4UL) + 5UL));
										cdaudioDataOut->TrackData[i].Address[2] = *(Toc + ((i * 8UL + 4UL) + 6UL));
										cdaudioDataOut->TrackData[i].Address[3] = *(Toc + ((i * 8UL + 4UL) + 7UL));
										i = i + 1UL;
										goto L16;
									}
								}
								else {
									tracksToReturn = tracksOnCd;
									i = 0UL;
L19:;
L20:;
									if(i >= tracksToReturn) {
L21:;
										if(tracksInBuffer > tracksOnCd) {
											cdaudioDataOut->TrackData[i].Reserved = (unsigned char)0;
											cdaudioDataOut->TrackData[i].Control = *(Toc + ((i * 8UL + 4UL) + 1UL));
											cdaudioDataOut->TrackData[i].TrackNumber = *(Toc + ((i * 8UL + 4UL) + 2UL));
											cdaudioDataOut->TrackData[i].Reserved1 = (unsigned char)0;
											cdaudioDataOut->TrackData[i].Address[0] = (unsigned char)0;
											cdaudioDataOut->TrackData[i].Address[1] = *(Toc + ((i * 8UL + 4UL) + 5UL));
											cdaudioDataOut->TrackData[i].Address[2] = *(Toc + ((i * 8UL + 4UL) + 6UL));
											cdaudioDataOut->TrackData[i].Address[3] = *(Toc + ((i * 8UL + 4UL) + 7UL));
											i = i + 1UL;
											goto L18;
										}
										else {
											goto L18;
										}
									}
									else {
										cdaudioDataOut->TrackData[i].Reserved = (unsigned char)0;
										cdaudioDataOut->TrackData[i].Control = *(Toc + ((i * 8UL + 4UL) + 1UL));
										cdaudioDataOut->TrackData[i].TrackNumber = (unsigned char )((((int )*(Toc + ((i * 8UL + 4UL) + 2UL)) & 240) >> 4) * 10 + ((int )*(Toc + ((i * 8UL + 4UL) + 2UL)) & 15));
										cdaudioDataOut->TrackData[i].Reserved1 = (unsigned char)0;
										cdaudioDataOut->TrackData[i].Address[0] = (unsigned char)0;
										cdaudioDataOut->TrackData[i].Address[1] = *(Toc + ((i * 8UL + 4UL) + 5UL));
										cdaudioDataOut->TrackData[i].Address[2] = *(Toc + ((i * 8UL + 4UL) + 6UL));
										cdaudioDataOut->TrackData[i].Address[3] = *(Toc + ((i * 8UL + 4UL) + 7UL));
										i = i + 1UL;
										goto L20;
									}
								}
							}
							else {
								bytesTransfered = currentIrpStack->Parameters.DeviceIoControl.OutputBufferLength;
								goto L14;
							}
						}
					}
					else {
						status = 0L;
						goto L13;
					}
				}
				else {
					goto L11;
				}
			}
		}
	}
	else if(NONDET == 3) {
		userPtr = (struct _SUB_Q_CURRENT_POSITION *)Irp->AssociatedIrp.SystemBuffer;
		tmp___3 = ExAllocatePoolWithTag((enum _POOL_TYPE )4, (unsigned long )sizeof(SUB_Q_CURRENT_POSITION ), tag_1);
		SubQPtr = (UCHAR *)tmp___3;
		if(currentIrpStack->Parameters.DeviceIoControl.OutputBufferLength < (ULONG)sizeof(SUB_Q_CURRENT_POSITION )) {
			status = -1073741789L;
			Irp->IoStatus.Information = 0UL;
			if(SubQPtr > 0) {
L22:;
				ExFreePool((void *)SubQPtr);
L23:;
				goto L4;
			}
			else if(SubQPtr < 0) {
				goto L22;
			}
			else {
				goto L23;
			}
		}
		else {
			if(SubQPtr == (0)) {
				memset((void *)userPtr, 0, sizeof(SUB_Q_CURRENT_POSITION ));
				status = -1073741670L;
				Irp->IoStatus.Information = 0UL;
				goto L5;
			}
			else if(SubQPtr < (0)) {
L24:;
				if(((struct _CDROM_SUB_Q_DATA_FORMAT *)(userPtr))->Format < 1) {
L25:;
					ExFreePool((void *)SubQPtr);
					memset((void *)userPtr, 0, sizeof(SUB_Q_CURRENT_POSITION ));
					status = -1073741823L;
					Irp->IoStatus.Information = 0UL;
					goto L7;
				}
				else if(((struct _CDROM_SUB_Q_DATA_FORMAT *)(userPtr))->Format > 1) {
					goto L25;
				}
				else {
					srb.CdbLength = (unsigned char)10;
					srb.TimeOutValue = 10UL;
					cdb->SUBCHANNEL.OperationCode = (unsigned char)66;
					cdb->SUBCHANNEL.Msf = (unsigned char)1;
					cdb->SUBCHANNEL.SubQ = (unsigned char)1;
					cdb->SUBCHANNEL.Format = (unsigned char)1;
					cdb->SUBCHANNEL.AllocationLength[1] = (unsigned char )sizeof(SUB_Q_CURRENT_POSITION );
					status = SendSrbSynchronous(deviceExtension, & srb, (void *)SubQPtr, (unsigned long )sizeof(SUB_Q_CURRENT_POSITION ));
					if(status >= 0L) {
						if(*(SubQPtr + 1) == 17) {
							deviceExtension->PlayActive = (unsigned char)1;
L26:;
							userPtr->Header.Reserved = (unsigned char)0;
							userPtr->Header.AudioStatus = *(SubQPtr + 1);
							userPtr->Header.DataLength[0] = (unsigned char)0;
							userPtr->Header.DataLength[1] = (unsigned char)12;
							userPtr->FormatCode = (unsigned char)1;
							userPtr->Control = *(SubQPtr + 5);
							userPtr->ADR = (unsigned char)0;
							userPtr->TrackNumber = (unsigned char )((((int )*(SubQPtr + 6) & 240) >> 4) * 10 + ((int )*(SubQPtr + 6) & 15));
							userPtr->IndexNumber = (unsigned char )((((int )*(SubQPtr + 7) & 240) >> 4) * 10 + ((int )*(SubQPtr + 7) & 15));
							userPtr->AbsoluteAddress[0] = (unsigned char)0;
							userPtr->AbsoluteAddress[1] = *(SubQPtr + 9);
							userPtr->AbsoluteAddress[2] = *(SubQPtr + 10);
							userPtr->AbsoluteAddress[3] = *(SubQPtr + 11);
							userPtr->TrackRelativeAddress[0] = (unsigned char)0;
							userPtr->TrackRelativeAddress[1] = *(SubQPtr + 13);
							userPtr->TrackRelativeAddress[2] = *(SubQPtr + 14);
							userPtr->TrackRelativeAddress[3] = *(SubQPtr + 15);
							Irp->IoStatus.Information = (unsigned long )sizeof(SUB_Q_CURRENT_POSITION );
L27:;
							ExFreePool((void *)SubQPtr);
							goto L8;
						}
						else if(*(SubQPtr + 1) < 17) {
L28:;
							deviceExtension->PlayActive = (unsigned char)0;
							goto L26;
						}
						else {
							goto L28;
						}
					}
					else {
						Irp->IoStatus.Information = 0UL;
						goto L27;
					}
				}
			}
			else {
				goto L24;
			}
		}
	}
	else if(NONDET == 4) {
		inputBuffer = (struct _CDROM_PLAY_AUDIO_MSF *)Irp->AssociatedIrp.SystemBuffer;
		Irp->IoStatus.Information = 0UL;
		if(currentIrpStack->Parameters.DeviceIoControl.InputBufferLength < (ULONG )sizeof(CDROM_PLAY_AUDIO_MSF )) {
			status = -1073741820L;
			goto L8;
		}
		else {
			if(inputBuffer->StartingM == inputBuffer->EndingM) {
				if(inputBuffer->StartingS == inputBuffer->EndingS) {
					if(inputBuffer->StartingF == inputBuffer->EndingF) {
						cdb->PAUSE_RESUME.OperationCode = (unsigned char)75;
						cdb->PAUSE_RESUME.Action = (unsigned char)0;
L29:;
						srb.CdbLength = (unsigned char)10;
						srb.TimeOutValue = 10UL;
						status = SendSrbSynchronous(deviceExtension, & srb, (void *)0, 0UL);
						if(status >= 0L) {
							if(cdb->PLAY_AUDIO_MSF.OperationCode == 71) {
								deviceExtension->PlayActive = (unsigned char)1;
L30:;
								goto L8;
							}
							else if(cdb->PLAY_AUDIO_MSF.OperationCode < 71) {
								goto L30;
							}
							else {
								goto L30;
							}
						}
						else {
							goto L30;
						}
					}
					else if(inputBuffer->StartingF < inputBuffer->EndingF) {
L31:;
L32:;
						cdb->PLAY_AUDIO_MSF.OperationCode = (unsigned char)71;
						cdb->PLAY_AUDIO_MSF.StartingM = inputBuffer->StartingM;
						cdb->PLAY_AUDIO_MSF.StartingS = inputBuffer->StartingS;
						cdb->PLAY_AUDIO_MSF.StartingF = inputBuffer->StartingF;
						cdb->PLAY_AUDIO_MSF.EndingM = inputBuffer->EndingM;
						cdb->PLAY_AUDIO_MSF.EndingS = inputBuffer->EndingS;
						cdb->PLAY_AUDIO_MSF.EndingF = inputBuffer->EndingF;
						goto L29;
					}
					else {
						goto L31;
					}
				}
				else if(inputBuffer->StartingS < inputBuffer->EndingS) {
L33:;
					goto L32;
				}
				else {
					goto L33;
				}
			}
			else if(inputBuffer->StartingM < inputBuffer->EndingM) {
				goto L32;
			}
			else {
				goto L32;
			}
		}
	}
	else if(NONDET == 5) {
		inputBuffer = (struct _CDROM_PLAY_AUDIO_MSF *)Irp->AssociatedIrp.SystemBuffer;
		Irp->IoStatus.Information = 0UL;
		if(currentIrpStack->Parameters.DeviceIoControl.InputBufferLength < (ULONG )sizeof(CDROM_PLAY_AUDIO_MSF )) {
			status = -1073741820L;
			goto L8;
		}
		else {
			destblock = (((unsigned long )inputBuffer->StartingM * 60UL + (unsigned long )inputBuffer->StartingS) * 75UL + (unsigned long )inputBuffer->StartingF) - 150UL;
			srb.CdbLength = (unsigned char)10;
			srb.TimeOutValue = 10UL;
			cdb->SEEK.OperationCode = (unsigned char)43;
			cdb->SEEK.LogicalBlockAddress[0] = (unsigned char )((int )((unsigned char )(destblock >> 24)) & 255);
			cdb->SEEK.LogicalBlockAddress[1] = (unsigned char )((int )((unsigned char )(destblock >> 16)) & 255);
			cdb->SEEK.LogicalBlockAddress[2] = (unsigned char )((int )((unsigned char )(destblock >> 8)) & 255);
			cdb->SEEK.LogicalBlockAddress[3] = (unsigned char )(destblock & 255UL);
			status = SendSrbSynchronous(deviceExtension, & srb, (void *)0, 0UL);
			goto L8;
		}
	}
	else if(NONDET == 6) {
		Irp->IoStatus.Information = 0UL;
		deviceExtension->PlayActive = (unsigned char)0;
		srb.CdbLength = (unsigned char)10;
		srb.TimeOutValue = 10UL;
		cdb->CDB10.OperationCode = (unsigned char)192;
		status = SendSrbSynchronous(deviceExtension, & srb, (void *)0, 0UL);
		goto L8;
	}
	else if(NONDET == 7) {
L34:;
L35:;
		Irp->IoStatus.Information = 0UL;
		status = -1073741808L;
		goto L8;
	}
	else if(NONDET == 8) {
		goto L34;
	}
	else if(NONDET == 9) {
		goto L35;
	}
	else if(NONDET == 10) {
		CdAudioIsPlayActive(DeviceObject);
		tmp___4 = CdAudioSendToNextDriver(DeviceObject, Irp);
L36:;
		return (tmp___4);
		/* END OF PATH at func_CdAudio535DeviceControl@p280#1 */
	}
	else if(NONDET < 1) {
		tmp___4 = CdAudioSendToNextDriver(DeviceObject, Irp);
		goto L36;
	}
	else if(NONDET > 1 && NONDET < 2) {
		tmp___4 = CdAudioSendToNextDriver(DeviceObject, Irp);
		goto L36;
	}
	else if(NONDET > 2 && NONDET < 3) {
		tmp___4 = CdAudioSendToNextDriver(DeviceObject, Irp);
		goto L36;
	}
	else if(NONDET > 3 && NONDET < 4) {
		tmp___4 = CdAudioSendToNextDriver(DeviceObject, Irp);
		goto L36;
	}
	else if(NONDET > 4 && NONDET < 5) {
		tmp___4 = CdAudioSendToNextDriver(DeviceObject, Irp);
		goto L36;
	}
	else if(NONDET > 5 && NONDET < 6) {
		tmp___4 = CdAudioSendToNextDriver(DeviceObject, Irp);
		goto L36;
	}
	else if(NONDET > 6 && NONDET < 7) {
		tmp___4 = CdAudioSendToNextDriver(DeviceObject, Irp);
		goto L36;
	}
	else if(NONDET > 7 && NONDET < 8) {
		tmp___4 = CdAudioSendToNextDriver(DeviceObject, Irp);
		goto L36;
	}
	else if(NONDET > 8 && NONDET < 9) {
		tmp___4 = CdAudioSendToNextDriver(DeviceObject, Irp);
		goto L36;
	}
	else if(NONDET > 9 && NONDET < 10) {
		tmp___4 = CdAudioSendToNextDriver(DeviceObject, Irp);
		goto L36;
	}
	else {
		tmp___4 = CdAudioSendToNextDriver(DeviceObject, Irp);
		goto L36;
	}
}

NTSTATUS CdAudio435DeviceControl(PDEVICE_OBJECT DeviceObject , PIRP Irp )
{ PIO_STACK_LOCATION currentIrpStack ;
PCD_DEVICE_EXTENSION deviceExtension ;
PCDROM_TOC cdaudioDataOut ;
SCSI_PASS_THROUGH srb ;
PCDB cdb ;
NTSTATUS status ;
ULONG i ;
ULONG bytesTransfered ;
PUCHAR Toc ;
int temp_1 ;
ULONG tag_1 ;
ULONG tracksToReturn ;
ULONG tracksOnCd ;
ULONG tracksInBuffer ;
ULONG dataLength ;
PCDROM_PLAY_AUDIO_MSF inputBuffer ;
PSUB_Q_CURRENT_POSITION userPtr ;
PUCHAR SubQPtr ;
PUCHAR PausePos ;
PUCHAR EjectStatus ;
int NONDET ;
BOOLEAN tmp ;
PVOID tmp___0 ;
PVOID tmp___1 ;
PVOID tmp___2 ;
BOOLEAN tmp___3 ;
NTSTATUS tmp___4 ;
NTSTATUS tmp___5 ;
	currentIrpStack = Irp->Tail.Overlay.__annonCompField17.__annonCompField16.CurrentStackLocation;
	deviceExtension = (struct _CD_DEVICE_EXTENSION *)DeviceObject->DeviceExtension;
	cdaudioDataOut = (struct _CDROM_TOC *)Irp->AssociatedIrp.SystemBuffer;
	cdb = (union _CDB *)(srb.Cdb);
	memset((void *)cdb, 0, 12U);
	if(NONDET == 1) {
		if(currentIrpStack->Parameters.DeviceIoControl.OutputBufferLength < ((&((CDROM_TOC *)0)->TrackData[0]))) {
			status = -1073741789L;
			Irp->IoStatus.Information = 0UL;
L1:;
			if(status > -2147483626L) {
L2:;
				Irp->IoStatus.__annonCompField4.Status = status;
				myStatus = (int )status;
				IofCompleteRequest(Irp, (char)0);
				return (status);
				/* END OF PATH at func_CdAudio435DeviceControl@p354#1 */
			}
			else if(status == -2147483626L) {
				/* FALSE PATH */ 
			}
			else {
				/* FALSE PATH */ 
			}
		}
		else {
			tmp = CdAudioIsPlayActive(DeviceObject);
			temp_1 = (int )tmp;
			if(temp_1 > 0) {
L3:;
				status = -2147483631L;
				Irp->IoStatus.Information = 0UL;
				if(status < -2147483626L) {
					goto L2;
				}
				else if(status == -2147483626L) {
					/* FALSE PATH */ 
				}
				else {
					/* FALSE PATH */ 
				}
			}
			else if(temp_1 < 0) {
				goto L3;
			}
			else {
				tmp___0 = ExAllocatePoolWithTag((enum _POOL_TYPE )4, (unsigned long )sizeof(CDROM_TOC ), tag_1);
				Toc = (UCHAR *)tmp___0;
				if(Toc == (0)) {
					status = -1073741670L;
					Irp->IoStatus.Information = 0UL;
L4:;
					if(status > -2147483626L) {
						goto L2;
					}
					else if(status == -2147483626L) {
						/* FALSE PATH */ 
					}
					else {
						/* FALSE PATH */ 
					}
				}
				else if(Toc < (0)) {
L5:;
					memset((void *)Toc, 0, sizeof(CDROM_TOC ));
					cdb->READ_TOC.OperationCode = (unsigned char)67;
					cdb->READ_TOC.Msf = (unsigned char)1;
					cdb->READ_TOC.AllocationLength[0] = (unsigned char )(sizeof(CDROM_TOC ) >> 8);
					cdb->READ_TOC.AllocationLength[1] = (unsigned char )(sizeof(CDROM_TOC ) & 255U);
					srb.TimeOutValue = 10UL;
					srb.CdbLength = (unsigned char)10;
					status = SendSrbSynchronous(deviceExtension, & srb, (void *)Toc, (unsigned long )sizeof(CDROM_TOC ));
					if(status < 0L) {
						if(status < -1073741764L) {
							if(status < -1073741764L) {
L6:;
								ExFreePool((void *)Toc);
								Irp->IoStatus.Information = 0UL;
L7:;
								if(status == -2147483626L) {
									IoSetHardErrorOrVerifyDevice(Irp, deviceExtension->TargetDeviceObject);
									Irp->IoStatus.Information = 0UL;
									goto L2;
								}
								else if(status < -2147483626L) {
									goto L2;
								}
								else {
									goto L2;
								}
							}
							else if(status > -1073741764L) {
								/* FALSE PATH */ 
							}
							else {
								/* FALSE PATH */ 
							}
						}
						else if(status > -1073741764L) {
							if(status > -1073741764L) {
								goto L6;
							}
							else if(status < -1073741764L) {
								/* FALSE PATH */ 
							}
							else {
								/* FALSE PATH */ 
							}
						}
						else {
							status = 0L;
L8:;
							if(currentIrpStack->Parameters.DeviceIoControl.OutputBufferLength > (ULONG)sizeof(CDROM_TOC )) {
								bytesTransfered = (unsigned long )sizeof(CDROM_TOC );
L9:;
								cdaudioDataOut->Length[0] = *(Toc + 0);
								cdaudioDataOut->Length[1] = *(Toc + 1);
								cdaudioDataOut->FirstTrack = (unsigned char )((((int )*(Toc + 2) & 240) >> 4) * 10 + ((int )*(Toc + 2) & 15));
								cdaudioDataOut->LastTrack = (unsigned char )((((int )*(Toc + 3) & 240) >> 4) * 10 + ((int )*(Toc + 3) & 15));
								tracksOnCd = (unsigned long )(((int )cdaudioDataOut->LastTrack - (int )cdaudioDataOut->FirstTrack) + 1);
								tracksInBuffer = currentIrpStack->Parameters.DeviceIoControl.OutputBufferLength - (unsigned long )((long )(& ((CDROM_TOC *)0)->TrackData[0]));
								tracksInBuffer = tracksInBuffer / (ULONG )sizeof(TRACK_DATA );
								if(tracksInBuffer < tracksOnCd) {
									tracksToReturn = tracksInBuffer;
									i = 0UL;
L10:;
L11:;
									if(i >= tracksToReturn) {
L12:;
										if(tracksInBuffer <= tracksOnCd) {
L13:;
											Irp->IoStatus.Information = (unsigned long )((long )(& ((CDROM_TOC *)0)->TrackData[i]));
											deviceExtension->Paused = (unsigned char)0;
											deviceExtension->PausedM = (unsigned char)0;
											deviceExtension->PausedS = (unsigned char)0;
											deviceExtension->PausedF = (unsigned char)0;
											deviceExtension->LastEndM = (unsigned char)0;
											deviceExtension->LastEndS = (unsigned char)0;
											deviceExtension->LastEndF = (unsigned char)0;
											ExFreePool((void *)Toc);
L14:;
											goto L7;
										}
										else {
											/* FALSE PATH */ 
										}
									}
									else {
										cdaudioDataOut->TrackData[i].Reserved = (unsigned char)0;
										cdaudioDataOut->TrackData[i].Control = *(Toc + ((i * 8UL + 4UL) + 1UL));
										cdaudioDataOut->TrackData[i].TrackNumber = (unsigned char )((((int )*(Toc + ((i * 8UL + 4UL) + 2UL)) & 240) >> 4) * 10 + ((int )*(Toc + ((i * 8UL + 4UL) + 2UL)) & 15));
										cdaudioDataOut->TrackData[i].Reserved1 = (unsigned char)0;
										cdaudioDataOut->TrackData[i].Address[0] = (unsigned char)0;
										cdaudioDataOut->TrackData[i].Address[1] = *(Toc + ((i * 8UL + 4UL) + 5UL));
										cdaudioDataOut->TrackData[i].Address[2] = *(Toc + ((i * 8UL + 4UL) + 6UL));
										cdaudioDataOut->TrackData[i].Address[3] = *(Toc + ((i * 8UL + 4UL) + 7UL));
										i = i + 1UL;
										goto L11;
									}
								}
								else {
									tracksToReturn = tracksOnCd;
									i = 0UL;
L15:;
L16:;
									if(i >= tracksToReturn) {
L17:;
										if(tracksInBuffer > tracksOnCd) {
											cdaudioDataOut->TrackData[i].Reserved = (unsigned char)0;
											cdaudioDataOut->TrackData[i].Control = *(Toc + ((i * 8UL + 4UL) + 1UL));
											cdaudioDataOut->TrackData[i].TrackNumber = *(Toc + ((i * 8UL + 4UL) + 2UL));
											cdaudioDataOut->TrackData[i].Reserved1 = (unsigned char)0;
											cdaudioDataOut->TrackData[i].Address[0] = (unsigned char)0;
											cdaudioDataOut->TrackData[i].Address[1] = *(Toc + ((i * 8UL + 4UL) + 5UL));
											cdaudioDataOut->TrackData[i].Address[2] = *(Toc + ((i * 8UL + 4UL) + 6UL));
											cdaudioDataOut->TrackData[i].Address[3] = *(Toc + ((i * 8UL + 4UL) + 7UL));
											i = i + 1UL;
											goto L13;
										}
										else {
											goto L13;
										}
									}
									else {
										cdaudioDataOut->TrackData[i].Reserved = (unsigned char)0;
										cdaudioDataOut->TrackData[i].Control = *(Toc + ((i * 8UL + 4UL) + 1UL));
										cdaudioDataOut->TrackData[i].TrackNumber = (unsigned char )((((int )*(Toc + ((i * 8UL + 4UL) + 2UL)) & 240) >> 4) * 10 + ((int )*(Toc + ((i * 8UL + 4UL) + 2UL)) & 15));
										cdaudioDataOut->TrackData[i].Reserved1 = (unsigned char)0;
										cdaudioDataOut->TrackData[i].Address[0] = (unsigned char)0;
										cdaudioDataOut->TrackData[i].Address[1] = *(Toc + ((i * 8UL + 4UL) + 5UL));
										cdaudioDataOut->TrackData[i].Address[2] = *(Toc + ((i * 8UL + 4UL) + 6UL));
										cdaudioDataOut->TrackData[i].Address[3] = *(Toc + ((i * 8UL + 4UL) + 7UL));
										i = i + 1UL;
										goto L16;
									}
								}
							}
							else {
								bytesTransfered = currentIrpStack->Parameters.DeviceIoControl.OutputBufferLength;
								goto L9;
							}
						}
					}
					else {
						status = 0L;
						goto L8;
					}
				}
				else {
					goto L5;
				}
			}
		}
	}
	else if(NONDET == 2) {
L18:;
		inputBuffer = (struct _CDROM_PLAY_AUDIO_MSF *)Irp->AssociatedIrp.SystemBuffer;
		Irp->IoStatus.Information = 0UL;
		srb.CdbLength = (unsigned char)10;
		srb.TimeOutValue = 10UL;
		cdb->CDB10.OperationCode = (unsigned char)198;
		status = SendSrbSynchronous(deviceExtension, & srb, (void *)0, 0UL);
		if(status >= 0L) {
			deviceExtension->PlayActive = (unsigned char)0;
			deviceExtension->Paused = (unsigned char)0;
			deviceExtension->PausedM = (unsigned char)0;
			deviceExtension->PausedS = (unsigned char)0;
			deviceExtension->PausedF = (unsigned char)0;
			deviceExtension->LastEndM = (unsigned char)0;
			deviceExtension->LastEndS = (unsigned char)0;
			deviceExtension->LastEndF = (unsigned char)0;
L19:;
			if(currentIrpStack->Parameters.DeviceIoControl.IoControlCode == (((2 << 16) | (1 << 14)) | (2 << 2))) {
				goto L7;
			}
			else if(currentIrpStack->Parameters.DeviceIoControl.IoControlCode < (((2 << 16) | (1 << 14)) | (2 << 2))) {
L20:;
				if(currentIrpStack->Parameters.DeviceIoControl.InputBufferLength < (ULONG )sizeof(CDROM_PLAY_AUDIO_MSF )) {
					status = -1073741820L;
					goto L14;
				}
				else {
					srb.CdbLength = (unsigned char)10;
					srb.TimeOutValue = 10UL;
					cdb->PLAY_AUDIO_MSF.OperationCode = (unsigned char)71;
					cdb->PLAY_AUDIO_MSF.StartingM = inputBuffer->StartingM;
					cdb->PLAY_AUDIO_MSF.StartingS = inputBuffer->StartingS;
					cdb->PLAY_AUDIO_MSF.StartingF = inputBuffer->StartingF;
					cdb->PLAY_AUDIO_MSF.EndingM = inputBuffer->EndingM;
					cdb->PLAY_AUDIO_MSF.EndingS = inputBuffer->EndingS;
					cdb->PLAY_AUDIO_MSF.EndingF = inputBuffer->EndingF;
					status = SendSrbSynchronous(deviceExtension, & srb, (void *)0, 0UL);
					if(status >= 0L) {
						deviceExtension->PlayActive = (unsigned char)1;
						deviceExtension->Paused = (unsigned char)0;
						deviceExtension->LastEndM = inputBuffer->EndingM;
						deviceExtension->LastEndS = inputBuffer->EndingS;
						deviceExtension->LastEndF = inputBuffer->EndingF;
L21:;
						goto L14;
					}
					else {
						goto L21;
					}
				}
			}
			else {
				goto L20;
			}
		}
		else {
			goto L19;
		}
	}
	else if(NONDET == 3) {
		goto L18;
	}
	else if(NONDET == 4) {
		inputBuffer = (struct _CDROM_PLAY_AUDIO_MSF *)Irp->AssociatedIrp.SystemBuffer;
		Irp->IoStatus.Information = 0UL;
		if(currentIrpStack->Parameters.DeviceIoControl.InputBufferLength < (ULONG )sizeof(CDROM_PLAY_AUDIO_MSF )) {
			status = -1073741820L;
			goto L14;
		}
		else {
			srb.CdbLength = (unsigned char)10;
			srb.TimeOutValue = 10UL;
			cdb->CDB10.OperationCode = (unsigned char)71;
			cdb->PLAY_AUDIO_MSF.StartingM = inputBuffer->StartingM;
			cdb->PLAY_AUDIO_MSF.StartingS = inputBuffer->StartingS;
			cdb->PLAY_AUDIO_MSF.StartingF = inputBuffer->StartingF;
			cdb->PLAY_AUDIO_MSF.EndingM = inputBuffer->EndingM;
			cdb->PLAY_AUDIO_MSF.EndingS = inputBuffer->EndingS;
			cdb->PLAY_AUDIO_MSF.EndingF = inputBuffer->EndingF;
			status = SendSrbSynchronous(deviceExtension, & srb, (void *)0, 0UL);
			if(status >= 0L) {
				deviceExtension->Paused = (unsigned char)1;
				deviceExtension->PausedM = inputBuffer->StartingM;
				deviceExtension->PausedS = inputBuffer->StartingS;
				deviceExtension->PausedF = inputBuffer->StartingF;
				deviceExtension->LastEndM = inputBuffer->EndingM;
				deviceExtension->LastEndS = inputBuffer->EndingS;
				deviceExtension->LastEndF = inputBuffer->EndingF;
L22:;
				goto L14;
			}
			else {
				if(status == -1073741808L) {
					status = -1073741803L;
					goto L22;
				}
				else if(status < -1073741808L) {
					goto L22;
				}
				else {
					goto L22;
				}
			}
		}
	}
	else if(NONDET == 5) {
		tmp___1 = ExAllocatePoolWithTag((enum _POOL_TYPE )4, (unsigned long )sizeof(SUB_Q_CHANNEL_DATA ), tag_1);
		SubQPtr = (UCHAR *)tmp___1;
		Irp->IoStatus.Information = 0UL;
		if(SubQPtr == (0)) {
			status = -1073741670L;
			goto L4;
		}
		else if(SubQPtr < (0)) {
L23:;
			if(deviceExtension->Paused == 1) {
				ExFreePool((void *)SubQPtr);
				status = 0L;
				goto L7;
			}
			else if(deviceExtension->Paused < 1) {
L24:;
				srb.CdbLength = (unsigned char)10;
				srb.TimeOutValue = 10UL;
				cdb->SUBCHANNEL.OperationCode = (unsigned char)66;
				cdb->SUBCHANNEL.Msf = (unsigned char)1;
				cdb->SUBCHANNEL.SubQ = (unsigned char)1;
				cdb->SUBCHANNEL.AllocationLength[1] = (unsigned char )sizeof(SUB_Q_CHANNEL_DATA );
				status = SendSrbSynchronous(deviceExtension, & srb, (void *)SubQPtr, (unsigned long )sizeof(SUB_Q_CHANNEL_DATA ));
				if(status < 0L) {
					ExFreePool((void *)SubQPtr);
					goto L7;
				}
				else {
					deviceExtension->PausedM = *(SubQPtr + 9);
					deviceExtension->PausedS = *(SubQPtr + 10);
					deviceExtension->PausedF = *(SubQPtr + 11);
					memset((void *)cdb, 0, 12U);
					srb.CdbLength = (unsigned char)10;
					srb.TimeOutValue = 10UL;
					cdb->CDB10.OperationCode = (unsigned char)198;
					status = SendSrbSynchronous(deviceExtension, & srb, (void *)0, 0UL);
					if(status < 0L) {
						ExFreePool((void *)SubQPtr);
						goto L7;
					}
					else {
						deviceExtension->PlayActive = (unsigned char)0;
						deviceExtension->Paused = (unsigned char)1;
						deviceExtension->PausedM = *(SubQPtr + 9);
						deviceExtension->PausedS = *(SubQPtr + 10);
						deviceExtension->PausedF = *(SubQPtr + 11);
						ExFreePool((void *)SubQPtr);
						goto L14;
					}
				}
			}
			else {
				goto L24;
			}
		}
		else {
			goto L23;
		}
	}
	else if(NONDET == 6) {
		Irp->IoStatus.Information = 0UL;
		if(deviceExtension->Paused == 0) {
			status = -1073741823L;
			goto L7;
		}
		else if(deviceExtension->Paused < 0) {
L25:;
			srb.CdbLength = (unsigned char)10;
			srb.TimeOutValue = 10UL;
			cdb->PLAY_AUDIO_MSF.OperationCode = (unsigned char)71;
			cdb->PLAY_AUDIO_MSF.StartingM = deviceExtension->PausedM;
			cdb->PLAY_AUDIO_MSF.StartingS = deviceExtension->PausedS;
			cdb->PLAY_AUDIO_MSF.StartingF = deviceExtension->PausedF;
			cdb->PLAY_AUDIO_MSF.EndingM = deviceExtension->LastEndM;
			cdb->PLAY_AUDIO_MSF.EndingS = deviceExtension->LastEndS;
			cdb->PLAY_AUDIO_MSF.EndingF = deviceExtension->LastEndF;
			status = SendSrbSynchronous(deviceExtension, & srb, (void *)0, 0UL);
			if(status >= 0L) {
				deviceExtension->PlayActive = (unsigned char)1;
				deviceExtension->Paused = (unsigned char)0;
L26:;
				goto L14;
			}
			else {
				goto L26;
			}
		}
		else {
			goto L25;
		}
	}
	else if(NONDET == 7) {
		userPtr = (struct _SUB_Q_CURRENT_POSITION *)Irp->AssociatedIrp.SystemBuffer;
		tmp___2 = ExAllocatePoolWithTag((enum _POOL_TYPE )4, (unsigned long )sizeof(SUB_Q_CHANNEL_DATA ), tag_1);
		SubQPtr = (UCHAR *)tmp___2;
		if(currentIrpStack->Parameters.DeviceIoControl.OutputBufferLength < (ULONG)sizeof(SUB_Q_CURRENT_POSITION )) {
			status = -1073741789L;
			Irp->IoStatus.Information = 0UL;
			if(SubQPtr > 0) {
L27:;
				ExFreePool((void *)SubQPtr);
L28:;
				goto L1;
			}
			else if(SubQPtr < 0) {
				goto L27;
			}
			else {
				goto L28;
			}
		}
		else {
			if(SubQPtr == (0)) {
				memset((void *)userPtr, 0, sizeof(SUB_Q_CURRENT_POSITION ));
				status = -1073741670L;
				Irp->IoStatus.Information = 0UL;
				goto L4;
			}
			else if(SubQPtr < (0)) {
L29:;
				if(((struct _CDROM_SUB_Q_DATA_FORMAT *)(userPtr))->Format < 1) {
L30:;
					ExFreePool((void *)SubQPtr);
					memset((void *)userPtr, 0, sizeof(SUB_Q_CURRENT_POSITION ));
					status = -1073741823L;
					Irp->IoStatus.Information = 0UL;
					goto L7;
				}
				else if(((struct _CDROM_SUB_Q_DATA_FORMAT *)(userPtr))->Format > 1) {
					goto L30;
				}
				else {
					srb.CdbLength = (unsigned char)10;
					srb.TimeOutValue = 10UL;
					cdb->SUBCHANNEL.OperationCode = (unsigned char)66;
					cdb->SUBCHANNEL.Msf = (unsigned char)1;
					cdb->SUBCHANNEL.SubQ = (unsigned char)1;
					cdb->SUBCHANNEL.AllocationLength[1] = (unsigned char )sizeof(SUB_Q_CHANNEL_DATA );
					status = SendSrbSynchronous(deviceExtension, & srb, (void *)SubQPtr, (unsigned long )sizeof(SUB_Q_CHANNEL_DATA ));
					if(status >= 0L) {
						userPtr->Header.Reserved = (unsigned char)0;
						if(deviceExtension->Paused == 1) {
							deviceExtension->PlayActive = (unsigned char)0;
							userPtr->Header.AudioStatus = (unsigned char)18;
L31:;
							userPtr->Header.DataLength[0] = (unsigned char)0;
							userPtr->Header.DataLength[1] = (unsigned char)12;
							userPtr->FormatCode = (unsigned char)1;
							userPtr->Control = *(SubQPtr + 5);
							userPtr->ADR = (unsigned char)0;
							userPtr->TrackNumber = (unsigned char )((((int )*(SubQPtr + 6) & 240) >> 4) * 10 + ((int )*(SubQPtr + 6) & 15));
							userPtr->IndexNumber = (unsigned char )((((int )*(SubQPtr + 7) & 240) >> 4) * 10 + ((int )*(SubQPtr + 7) & 15));
							userPtr->AbsoluteAddress[0] = (unsigned char)0;
							userPtr->AbsoluteAddress[1] = *(SubQPtr + 9);
							userPtr->AbsoluteAddress[2] = *(SubQPtr + 10);
							userPtr->AbsoluteAddress[3] = *(SubQPtr + 11);
							userPtr->TrackRelativeAddress[0] = (unsigned char)0;
							userPtr->TrackRelativeAddress[1] = *(SubQPtr + 13);
							userPtr->TrackRelativeAddress[2] = *(SubQPtr + 14);
							userPtr->TrackRelativeAddress[3] = *(SubQPtr + 15);
							Irp->IoStatus.Information = (unsigned long )sizeof(SUB_Q_CURRENT_POSITION );
L32:;
							ExFreePool((void *)SubQPtr);
							goto L14;
						}
						else if(deviceExtension->Paused < 1) {
L33:;
							if(*(SubQPtr + 1) == 17) {
								deviceExtension->PlayActive = (unsigned char)1;
								userPtr->Header.AudioStatus = (unsigned char)17;
								goto L31;
							}
							else if(*(SubQPtr + 1) < 17) {
L34:;
								deviceExtension->PlayActive = (unsigned char)0;
								userPtr->Header.AudioStatus = (unsigned char)19;
								goto L31;
							}
							else {
								goto L34;
							}
						}
						else {
							goto L33;
						}
					}
					else {
						Irp->IoStatus.Information = 0UL;
						goto L32;
					}
				}
			}
			else {
				goto L29;
			}
		}
	}
	else if(NONDET == 8) {
		Irp->IoStatus.Information = 0UL;
		srb.CdbLength = (unsigned char)10;
		srb.TimeOutValue = 10UL;
		cdb->CDB10.OperationCode = (unsigned char)192;
		status = SendSrbSynchronous(deviceExtension, & srb, (void *)0, 0UL);
		deviceExtension->Paused = (unsigned char)0;
		deviceExtension->PausedM = (unsigned char)0;
		deviceExtension->PausedS = (unsigned char)0;
		deviceExtension->PausedF = (unsigned char)0;
		deviceExtension->LastEndM = (unsigned char)0;
		deviceExtension->LastEndS = (unsigned char)0;
		deviceExtension->LastEndF = (unsigned char)0;
		goto L14;
	}
	else if(NONDET == 9) {
L35:;
L36:;
		Irp->IoStatus.Information = 0UL;
		status = -1073741808L;
		goto L14;
	}
	else if(NONDET == 10) {
		goto L35;
	}
	else if(NONDET == 11) {
		goto L36;
	}
	else if(NONDET == 12) {
		tmp___3 = CdAudioIsPlayActive(DeviceObject);
		temp_1 = (int )tmp___3;
		if(temp_1 == 1) {
			deviceExtension->PlayActive = (unsigned char)1;
			status = 0L;
			Irp->IoStatus.Information = 0UL;
			goto L7;
		}
		else if(temp_1 < 1) {
L37:;
			deviceExtension->PlayActive = (unsigned char)0;
			tmp___4 = CdAudioSendToNextDriver(DeviceObject, Irp);
			return (tmp___4);
			/* END OF PATH at func_CdAudio435DeviceControl@p338#1 */
		}
		else {
			goto L37;
		}
	}
	else if(NONDET < 1) {
		tmp___5 = CdAudioSendToNextDriver(DeviceObject, Irp);
L38:;
		return (tmp___5);
		/* END OF PATH at func_CdAudio435DeviceControl@p343#1 */
	}
	else if(NONDET > 1 && NONDET < 2) {
		tmp___5 = CdAudioSendToNextDriver(DeviceObject, Irp);
		goto L38;
	}
	else if(NONDET > 2 && NONDET < 3) {
		tmp___5 = CdAudioSendToNextDriver(DeviceObject, Irp);
		goto L38;
	}
	else if(NONDET > 3 && NONDET < 4) {
		tmp___5 = CdAudioSendToNextDriver(DeviceObject, Irp);
		goto L38;
	}
	else if(NONDET > 4 && NONDET < 5) {
		tmp___5 = CdAudioSendToNextDriver(DeviceObject, Irp);
		goto L38;
	}
	else if(NONDET > 5 && NONDET < 6) {
		tmp___5 = CdAudioSendToNextDriver(DeviceObject, Irp);
		goto L38;
	}
	else if(NONDET > 6 && NONDET < 7) {
		tmp___5 = CdAudioSendToNextDriver(DeviceObject, Irp);
		goto L38;
	}
	else if(NONDET > 7 && NONDET < 8) {
		tmp___5 = CdAudioSendToNextDriver(DeviceObject, Irp);
		goto L38;
	}
	else if(NONDET > 8 && NONDET < 9) {
		tmp___5 = CdAudioSendToNextDriver(DeviceObject, Irp);
		goto L38;
	}
	else if(NONDET > 9 && NONDET < 10) {
		tmp___5 = CdAudioSendToNextDriver(DeviceObject, Irp);
		goto L38;
	}
	else if(NONDET > 10 && NONDET < 11) {
		tmp___5 = CdAudioSendToNextDriver(DeviceObject, Irp);
		goto L38;
	}
	else if(NONDET > 11 && NONDET < 12) {
		tmp___5 = CdAudioSendToNextDriver(DeviceObject, Irp);
		goto L38;
	}
	else {
		tmp___5 = CdAudioSendToNextDriver(DeviceObject, Irp);
		goto L38;
	}
}

NTSTATUS CdAudioAtapiDeviceControl(PDEVICE_OBJECT DeviceObject , PIRP Irp )
{ NTSTATUS status ;
PCD_DEVICE_EXTENSION deviceExtension ;
PIO_STACK_LOCATION currentIrpStack ;
SCSI_PASS_THROUGH srb ;
PHITACHICDB cdb ;
NTSTATUS tmp ;
	deviceExtension = (struct _CD_DEVICE_EXTENSION *)DeviceObject->DeviceExtension;
	currentIrpStack = Irp->Tail.Overlay.__annonCompField17.__annonCompField16.CurrentStackLocation;
	cdb = (union _HITACHICDB *)(srb.Cdb);
	if(currentIrpStack->Parameters.DeviceIoControl.IoControlCode == (((2 << 16) | (1 << 14)) | (2 << 2))) {
		Irp->IoStatus.Information = 0UL;
		deviceExtension->PlayActive = (unsigned char)0;
		memset((void *)(& srb), 0, sizeof(SCSI_PASS_THROUGH ));
		cdb->STOP_PLAY.OperationCode = (unsigned char)78;
		srb.CdbLength = (unsigned char)12;
		srb.TimeOutValue = 10UL;
		status = SendSrbSynchronous(deviceExtension, & srb, (void *)0, 0UL);
		if(status < 0L) {
			Irp->IoStatus.__annonCompField4.Status = status;
			myStatus = (int )status;
			IofCompleteRequest(Irp, (char)0);
			return (status);
			/* END OF PATH at func_CdAudioAtapiDeviceControl@p22#1 */
		}
		else {
			Irp->IoStatus.__annonCompField4.Status = status;
			myStatus = (int )status;
			IofCompleteRequest(Irp, (char)0);
			return (status);
			/* END OF PATH at func_CdAudioAtapiDeviceControl@p32#1 */
		}
	}
	else if(currentIrpStack->Parameters.DeviceIoControl.IoControlCode < (((2 << 16) | (1 << 14)) | (2 << 2))) {
		tmp = CdAudioSendToNextDriver(DeviceObject, Irp);
L1:;
		return (tmp);
		/* END OF PATH at func_CdAudioAtapiDeviceControl@p26#1 */
	}
	else {
		tmp = CdAudioSendToNextDriver(DeviceObject, Irp);
		goto L1;
	}
}

NTSTATUS CdAudioHPCdrDeviceControl(PDEVICE_OBJECT DeviceObject , PIRP Irp )
{ PIO_STACK_LOCATION currentIrpStack ;
PIO_STACK_LOCATION nextIrpStack ;
PCD_DEVICE_EXTENSION deviceExtension ;
PIO_STACK_LOCATION irpSp ;
PIO_STACK_LOCATION nextIrpSp ;
NTSTATUS tmp ;
NTSTATUS tmp___0 ;
	currentIrpStack = Irp->Tail.Overlay.__annonCompField17.__annonCompField16.CurrentStackLocation;
	nextIrpStack = Irp->Tail.Overlay.__annonCompField17.__annonCompField16.CurrentStackLocation - 1;
	deviceExtension = (struct _CD_DEVICE_EXTENSION *)DeviceObject->DeviceExtension;
	if(currentIrpStack->Parameters.DeviceIoControl.IoControlCode == (((2 << 16) | (1 << 14)) | (14 << 2))) {
		irpSp = Irp->Tail.Overlay.__annonCompField17.__annonCompField16.CurrentStackLocation;
		nextIrpSp = Irp->Tail.Overlay.__annonCompField17.__annonCompField16.CurrentStackLocation - 1;
		memcpy((void *)nextIrpSp, (void *)irpSp, (unsigned int )((long )(& ((IO_STACK_LOCATION *)0)->CompletionRoutine)));
		nextIrpSp->Control = (unsigned char)0;
		compRegistered = 1;
		routine = 0;
		irpSp = Irp->Tail.Overlay.__annonCompField17.__annonCompField16.CurrentStackLocation - 1;
		irpSp->Context = (void *)deviceExtension;
		irpSp->Control = (unsigned char)0;
		irpSp->Control = (unsigned char)64;
		irpSp->Control = (unsigned char )((int )irpSp->Control | 128);
		irpSp->Control = (unsigned char )((int )irpSp->Control | 32);
		tmp = IofCallDriver(deviceExtension->TargetDeviceObject, Irp);
		return (tmp);
		/* END OF PATH at func_CdAudioHPCdrDeviceControl@p26#1 */
	}
	else if(currentIrpStack->Parameters.DeviceIoControl.IoControlCode < (((2 << 16) | (1 << 14)) | (14 << 2))) {
		tmp___0 = CdAudioSendToNextDriver(DeviceObject, Irp);
L1:;
		return (tmp___0);
		/* END OF PATH at func_CdAudioHPCdrDeviceControl@p30#1 */
	}
	else {
		tmp___0 = CdAudioSendToNextDriver(DeviceObject, Irp);
		goto L1;
	}
}

void HpCdrProcessLastSession(PCDROM_TOC Toc )
{ ULONG index ;
PUCHAR cp ;
	index = (unsigned long )Toc->FirstTrack;
	if(index > 0) {
L1:;
		index = index - 1UL;
		Toc->FirstTrack = Toc->TrackData[0].Reserved;
		Toc->LastTrack = Toc->TrackData[index].Reserved;
		Toc->TrackData[0] = Toc->TrackData[index];
L2:;
		/* END OF PATH at func_HpCdrProcessLastSession@p12#1 */
	}
	else if(index < 0) {
		goto L1;
	}
	else {
		Toc->FirstTrack = (unsigned char)0;
		Toc->LastTrack = (unsigned char)0;
		goto L2;
	}
}

NTSTATUS HPCdrCompletion(PDEVICE_OBJECT DeviceObject , PIRP Irp , PVOID Context )
{
	if(myIrpPendingReturned > 0) {
L1:;
		if(pended == 0) {
			pended = 1;
L2:;
			(Irp->Tail.Overlay.__annonCompField17.__annonCompField16.CurrentStackLocation)->Control = (unsigned char )((int )(Irp->Tail.Overlay.__annonCompField17.__annonCompField16.CurrentStackLocation)->Control | 1);
L3:;
			if(myStatus >= 0L) {
				HpCdrProcessLastSession((struct _CDROM_TOC *)Irp->AssociatedIrp.SystemBuffer);
L4:;
				return ((long )myStatus);
				/* END OF PATH at func_HPCdrCompletion@p7#1 */
			}
			else {
				goto L4;
			}
		}
		else if(pended < 0) {
			goto L2;
		}
		else {
			goto L2;
		}
	}
	else if(myIrpPendingReturned < 0) {
		goto L1;
	}
	else {
		goto L3;
	}
}

NTSTATUS CdAudioPower(PDEVICE_OBJECT DeviceObject , PIRP Irp )
{ PCD_DEVICE_EXTENSION deviceExtension ;
NTSTATUS tmp ;
	PoStartNextPowerIrp(Irp);
	s = SKIP1;
	Irp->CurrentLocation = (CHAR )((int )Irp->CurrentLocation + 1);
	Irp->Tail.Overlay.__annonCompField17.__annonCompField16.CurrentStackLocation = Irp->Tail.Overlay.__annonCompField17.__annonCompField16.CurrentStackLocation + 1;
	deviceExtension = (struct _CD_DEVICE_EXTENSION *)DeviceObject->DeviceExtension;
	tmp = PoCallDriver(deviceExtension->TargetDeviceObject, Irp);
	return (tmp);
	/* END OF PATH at func_CdAudioPower@p9#1 */
}

NTSTATUS CdAudioForwardIrpSynchronous(PDEVICE_OBJECT DeviceObject , PIRP Irp )
{ PCD_DEVICE_EXTENSION deviceExtension ;
KEVENT event ;
NTSTATUS status ;
PIO_STACK_LOCATION irpSp ;
PIO_STACK_LOCATION nextIrpSp ;
	KeInitializeEvent(& event, (enum _EVENT_TYPE )0, (unsigned char)0);
	deviceExtension = (struct _CD_DEVICE_EXTENSION *)DeviceObject->DeviceExtension;
	irpSp = Irp->Tail.Overlay.__annonCompField17.__annonCompField16.CurrentStackLocation;
	nextIrpSp = Irp->Tail.Overlay.__annonCompField17.__annonCompField16.CurrentStackLocation - 1;
	memcpy((void *)nextIrpSp, (void *)irpSp, (unsigned int )((long )(& ((IO_STACK_LOCATION *)0)->CompletionRoutine)));
	nextIrpSp->Control = (unsigned char)0;
	compRegistered = 1;
	routine = 1;
	compFptr = (NTSTATUS (*)(PDEVICE_OBJECT DeviceObject , PIRP Irp , PVOID Context ))(& CdAudioSignalCompletion);
	irpSp = Irp->Tail.Overlay.__annonCompField17.__annonCompField16.CurrentStackLocation - 1;
	irpSp->CompletionRoutine = (NTSTATUS (*)(PDEVICE_OBJECT DeviceObject , PIRP Irp , PVOID Context ))(& CdAudioSignalCompletion);
	irpSp->Context = (void *)(& event);
	irpSp->Control = (unsigned char)0;
	irpSp->Control = (unsigned char)64;
	irpSp->Control = (unsigned char )((int )irpSp->Control | 128);
	irpSp->Control = (unsigned char )((int )irpSp->Control | 32);
	status = IofCallDriver(deviceExtension->TargetDeviceObject, Irp);
	if(status == 259L) {
		KeWaitForSingleObject((void *)(& event), (enum _KWAIT_REASON )0, (char)0, (unsigned char)0, (LARGE_INTEGER *)((void *)0));
		status = Irp->IoStatus.__annonCompField4.Status;
		status = (long )myStatus;
L1:;
		return (status);
		/* END OF PATH at func_CdAudioForwardIrpSynchronous@p28#1 */
	}
	else if(status < 259L) {
		goto L1;
	}
	else {
		goto L1;
	}
}

void CdAudioUnload(PDRIVER_OBJECT DriverObject )
{
	/* END OF PATH at func_CdAudioUnload@p1#1 */
}

NTSTATUS SendSrbSynchronous(PCD_DEVICE_EXTENSION Extension , PSCSI_PASS_THROUGH Srb , PVOID Buffer , ULONG BufferLength )
{ ULONG ioctl ;
KEVENT event ;
PIRP irp ;
IO_STATUS_BLOCK ioStatus ;
NTSTATUS status ;
	irp = (struct _IRP *)((void *)0);
	Srb->Length = (unsigned short )sizeof(SCSI_PASS_THROUGH );
	Srb->SenseInfoLength = (unsigned char)0;
	Srb->SenseInfoOffset = 0UL;
	if(Buffer > 0) {
L1:;
		Srb->DataIn = (unsigned char)1;
		Srb->DataTransferLength = BufferLength;
		Srb->DataBufferOffset = (unsigned long )Buffer;
		ioctl = (unsigned long )(((4 << 16) | (3 << 14)) | (1029 << 2));
L2:;
		KeInitializeEvent(& event, (enum _EVENT_TYPE )0, (unsigned char)0);
		if(irp == 0) {
			return (-1073741670L);
			/* END OF PATH at func_SendSrbSynchronous@p22#1 */
		}
		else if(irp > 0) {
			/* FALSE PATH */ 
		}
		else {
			/* FALSE PATH */ 
		}
	}
	else if(Buffer < 0) {
		goto L1;
	}
	else {
		Srb->DataIn = (unsigned char)0;
		Srb->DataTransferLength = 0UL;
		Srb->DataBufferOffset = 0UL;
		ioctl = (unsigned long )(((4 << 16) | (3 << 14)) | (1025 << 2));
		goto L2;
	}
}

NTSTATUS IoOpenDeviceRegistryKey(PDEVICE_OBJECT DeviceObject , ULONG DevInstKeyType , ACCESS_MASK DesiredAccess , PHANDLE DevInstRegKey )
{ NTSTATUS x ;
	return (x);
	/* END OF PATH at func_IoOpenDeviceRegistryKey@p2#1 */
}

NTSTATUS CdAudioAddDevice(PDRIVER_OBJECT DriverObject , PDEVICE_OBJECT PhysicalDeviceObject )
{ NTSTATUS status ;
PDEVICE_OBJECT deviceObject ;
PCD_DEVICE_EXTENSION extension ;
ULONG regActive ;
HANDLE deviceParameterHandle ;
RTL_QUERY_REGISTRY_TABLE queryTable[2] ;
	regActive = 255UL;
	status = IoOpenDeviceRegistryKey(PhysicalDeviceObject, 2UL, 0UL, & deviceParameterHandle);
	if(status < 0L) {
		regActive = 255UL;
L1:;
		if(regActive > 10UL) {
			if(regActive < 255UL) {
L2:;
				regActive = 255UL;
L3:;
				if(regActive == 0UL) {
					return (0L);
					/* END OF PATH at func_CdAudioAddDevice@p32#1 */
				}
				else if(regActive < 0UL) {
L4:;
					if(regActive == 8) {
						MmLockPagableDataSection((void *)(& CdAudioNECDeviceControl));
L5:;
						status = IoCreateDevice(DriverObject, (unsigned long )sizeof(CD_DEVICE_EXTENSION ), (UNICODE_STRING *)((void *)0), 2UL, 0UL, (unsigned char)0, & deviceObject);
						if(status < 0L) {
							return (status);
							/* END OF PATH at func_CdAudioAddDevice@p68#1 */
						}
						else {
							deviceObject->Flags = deviceObject->Flags | 16UL;
							if((deviceObject->Flags & 16384UL) == 0) {
								deviceObject->Flags = deviceObject->Flags | 8192UL;
L6:;
								extension = (struct _CD_DEVICE_EXTENSION *)deviceObject->DeviceExtension;
								memset((void *)extension, 0, sizeof(CD_DEVICE_EXTENSION ));
								extension->TargetDeviceObject = IoAttachDeviceToDeviceStack(deviceObject, PhysicalDeviceObject);
								if(extension->TargetDeviceObject == 0) {
									IoDeleteDevice(deviceObject);
									return (-1073741810L);
									/* END OF PATH at func_CdAudioAddDevice@p78#1 */
								}
								else if(extension->TargetDeviceObject > 0) {
L7:;
									KeInitializeEvent(& extension->PagingPathCountEvent, (enum _EVENT_TYPE )1, (unsigned char)1);
									extension->Active = (unsigned char )regActive;
									extension->DeviceObject = deviceObject;
									extension->TargetPdo = PhysicalDeviceObject;
									deviceObject->Flags = deviceObject->Flags & 128UL;
									return (0L);
									/* END OF PATH at func_CdAudioAddDevice@p85#1 */
								}
								else {
									goto L7;
								}
							}
							else if((deviceObject->Flags & 16384UL) > 0) {
								goto L6;
							}
							else {
								goto L6;
							}
						}
					}
					else if(regActive == 9) {
L8:;
						MmLockPagableDataSection((void *)(& CdAudioPioneerDeviceControl));
						goto L5;
					}
					else if(regActive == 10) {
						goto L8;
					}
					else if(regActive == 4) {
						MmLockPagableDataSection((void *)(& CdAudioDenonDeviceControl));
						goto L5;
					}
					else if(regActive == 6) {
L9:;
						MmLockPagableDataSection((void *)(& CdAudioHitachiDeviceControl));
						goto L5;
					}
					else if(regActive == 5) {
						goto L9;
					}
					else if(regActive == 2) {
						MmLockPagableDataSection((void *)(& CdAudio535DeviceControl));
						goto L5;
					}
					else if(regActive == 3) {
						MmLockPagableDataSection((void *)(& CdAudio435DeviceControl));
						goto L5;
					}
					else if(regActive == 1) {
						MmLockPagableDataSection((void *)(& CdAudioAtapiDeviceControl));
						goto L5;
					}
					else if(regActive == 7) {
						MmLockPagableDataSection((void *)(& CdAudioHPCdrDeviceControl));
						goto L5;
					}
					else if(regActive == 255) {
L10:;
						goto L5;
					}
					else if(regActive < 1) {
						goto L10;
					}
					else if(regActive > 1 && regActive < 2) {
						goto L10;
					}
					else if(regActive > 2 && regActive < 3) {
						goto L10;
					}
					else if(regActive > 3 && regActive < 4) {
						goto L10;
					}
					else if(regActive > 4 && regActive < 5) {
						goto L10;
					}
					else if(regActive > 5 && regActive < 6) {
						goto L10;
					}
					else if(regActive > 6 && regActive < 7) {
						goto L10;
					}
					else if(regActive > 7 && regActive < 8) {
						goto L10;
					}
					else if(regActive > 8 && regActive < 9) {
						goto L10;
					}
					else if(regActive > 9 && regActive < 10) {
						goto L10;
					}
					else if(regActive > 10 && regActive < 255) {
						goto L10;
					}
					else {
						goto L10;
					}
				}
				else {
					goto L4;
				}
			}
			else if(regActive > 255UL) {
				goto L2;
			}
			else {
				goto L3;
			}
		}
		else {
			goto L3;
		}
	}
	else {
		memset((void *)(& queryTable), 0, sizeof(queryTable));
		queryTable[0].Flags = 36UL;
		queryTable[0].Name = (WCHAR *)"M\000a\000p\000T\000y\000p\000e\000";
		queryTable[0].EntryContext = (void *)(& regActive);
		queryTable[0].DefaultType = 4UL;
		queryTable[0].DefaultData = (void *)0;
		queryTable[0].DefaultLength = 0UL;
		status = RtlQueryRegistryValues(1073741824UL, (WCHAR *)deviceParameterHandle, queryTable, (void *)0, (void *)0);
		if(status < 0L) {
			regActive = 255UL;
L11:;
			ZwClose(deviceParameterHandle);
			goto L1;
		}
		else {
			if(regActive > 10UL) {
				regActive = 255UL;
				goto L11;
			}
			else {
				goto L11;
			}
		}
	}
}

NTSTATUS CdAudioSignalCompletion(PDEVICE_OBJECT DeviceObject , PIRP Irp , PKEVENT Event )
{
	KeSetEvent(Event, 0L, (unsigned char)0);
	return (-1073741802L);
	/* END OF PATH at func_CdAudioSignalCompletion@p2#1 */
}

NTSTATUS CdAudioStartDevice(PDEVICE_OBJECT DeviceObject , PIRP Irp )
{ PCD_DEVICE_EXTENSION deviceExtension ;
NTSTATUS status ;
KEVENT event ;
SCSI_PASS_THROUGH srb ;
PCDB cdb ;
PUCHAR inquiryDataPtr ;
HANDLE deviceParameterHandle ;
ULONG keyValue ;
UCHAR attempt ;
ULONG tag__1 ;
int temp_1 ;
int temp_2 ;
int temp_3 ;
int temp_4 ;
int temp_5 ;
int temp_6 ;
int temp_7 ;
int temp_8 ;
int temp_9 ;
int temp_10 ;
int temp_11 ;
int temp_12 ;
int temp_13 ;
int temp_14 ;
int temp_15 ;
int temp_16 ;
int temp_17 ;
int temp_18 ;
int temp_19 ;
int temp_20 ;
PVOID tmp ;
BOOLEAN tmp___0 ;
	inquiryDataPtr = (UCHAR *)((void *)0);
	cdb = (union _CDB *)(srb.Cdb);
	attempt = (unsigned char)0;
	deviceExtension = (struct _CD_DEVICE_EXTENSION *)DeviceObject->DeviceExtension;
	status = CdAudioForwardIrpSynchronous(DeviceObject, Irp);
	if(status < 0L) {
		return (status);
		/* END OF PATH at func_CdAudioStartDevice@p39#1 */
	}
	else {
		deviceExtension->Paused = (unsigned char)0;
		deviceExtension->PausedM = (unsigned char)0;
		deviceExtension->PausedS = (unsigned char)0;
		deviceExtension->PausedF = (unsigned char)0;
		deviceExtension->LastEndM = (unsigned char)0;
		deviceExtension->LastEndS = (unsigned char)0;
		deviceExtension->LastEndF = (unsigned char)0;
		if(deviceExtension->Active == 255) {
			tmp = ExAllocatePoolWithTag((enum _POOL_TYPE )4, 36UL, tag__1);
			inquiryDataPtr = (UCHAR *)tmp;
			if(inquiryDataPtr == 0) {
				deviceExtension->Active = (unsigned char)0;
				return (0L);
				/* END OF PATH at func_CdAudioStartDevice@p53#1 */
			}
			else if(inquiryDataPtr > 0) {
L1:;
				status = -1073741823L;
L2:;
L3:;
				if(status < 0L) {
					if(attempt >= 4) {
L4:;
L5:;
						if(status < 0L) {
							ExFreePool((void *)inquiryDataPtr);
							deviceExtension->Active = (unsigned char)0;
							return (0L);
							/* END OF PATH at func_CdAudioStartDevice@p77#1 */
						}
						else {
							deviceExtension->Active = (unsigned char)0;
							temp_19 = memcmp((void *)(inquiryDataPtr + 8), (void *)"NEC     ", 8U);
							if(temp_19 == 0) {
								tmp___0 = NecSupportNeeded(inquiryDataPtr);
								temp_20 = (int )tmp___0;
								if(temp_20 > 0) {
L6:;
									MmLockPagableDataSection((void *)(& CdAudioNECDeviceControl));
									deviceExtension->Active = (unsigned char)8;
L7:;
									temp_1 = memcmp((void *)(inquiryDataPtr + 8), (void *)"PIONEER ", 8U);
									temp_2 = memcmp((void *)(inquiryDataPtr + 16), (void *)"CD-ROM DRM-600", 15U);
									if(temp_1 == 0) {
										if(temp_2 == 0) {
											MmLockPagableDataSection((void *)(& CdAudioPioneerDeviceControl));
											deviceExtension->Active = (unsigned char)9;
L8:;
											if(temp_3 > 0) {
L9:;
												MmLockPagableDataSection((void *)(& CdAudioDenonDeviceControl));
												deviceExtension->Active = (unsigned char)4;
L10:;
												temp_4 = memcmp((void *)(inquiryDataPtr + 8), (void *)"CHINON", 6U);
												if(temp_4 == 0) {
													if(temp_5 > 0) {
L11:;
														MmLockPagableDataSection((void *)(& CdAudio535DeviceControl));
														deviceExtension->Active = (unsigned char)2;
L12:;
														if(temp_6 > 0) {
L13:;
															MmLockPagableDataSection((void *)(& CdAudio435DeviceControl));
															deviceExtension->Active = (unsigned char)3;
L14:;
															temp_7 = memcmp((void *)(inquiryDataPtr + 8), (void *)"HITACHI ", 8U);
															temp_8 = memcmp((void *)(inquiryDataPtr + 16), (void *)"CDR-3650/1650S  ", 16U);
															temp_9 = memcmp((void *)(inquiryDataPtr + 16), (void *)"CDR-1750S       ", 16U);
															if(temp_7 == 0) {
																if(temp_8 == 0) {
																	MmLockPagableDataSection((void *)(& CdAudioHitachiDeviceControl));
																	deviceExtension->Active = (unsigned char)6;
L15:;
																	temp_10 = memcmp((void *)(inquiryDataPtr + 8), (void *)"WEARNES ", 8U);
																	temp_11 = memcmp((void *)(inquiryDataPtr + 16), (void *)"RUB", 3U);
																	temp_12 = memcmp((void *)(inquiryDataPtr + 8), (void *)"OTI     ", 8U);
																	temp_13 = memcmp((void *)(inquiryDataPtr + 16), (void *)"DOLPHIN ", 8U);
																	if(temp_10 == 0) {
																		if(temp_11 == 0) {
																			MmLockPagableDataSection((void *)(& CdAudioAtapiDeviceControl));
																			deviceExtension->Active = (unsigned char)1;
																			*(inquiryDataPtr + 25) = (unsigned char)0;
L16:;
																			temp_14 = memcmp((void *)(inquiryDataPtr + 8), (void *)"FUJITSU ", 8U);
																			if(temp_14 == 0) {
																				if(temp_15 > 0) {
L17:;
																					MmLockPagableDataSection((void *)(& CdAudioHitachiDeviceControl));
																					deviceExtension->Active = (unsigned char)6;
																					*(inquiryDataPtr + 25) = (unsigned char)0;
L18:;
																					temp_17 = memcmp((void *)(inquiryDataPtr + 8), (void *)"HP      ", 8U);
																					temp_18 = memcmp((void *)(inquiryDataPtr + 16), (void *)"C4324/C4325", 11U);
																					if(temp_17 == 0) {
																						if(temp_18 == 0) {
																							MmLockPagableDataSection((void *)(& CdAudioHPCdrDeviceControl));
																							deviceExtension->Active = (unsigned char)7;
L19:;
																							ExFreePool((void *)inquiryDataPtr);
L20:;
																							keyValue = (unsigned long )deviceExtension->Active;
																							status = IoOpenDeviceRegistryKey(deviceExtension->TargetPdo, 2UL, 0UL, & deviceParameterHandle);
																							if(status < 0L) {
																								return (0L);
																								/* END OF PATH at func_CdAudioStartDevice@p154#1 */
																							}
																							else {
																								status = RtlWriteRegistryValue(1073741824UL, (WCHAR *)deviceParameterHandle, (WCHAR *)"M\000a\000p\000T\000y\000p\000e\000", 4UL, (void *)(& keyValue), (unsigned long )sizeof(keyValue));
																								ZwClose(deviceParameterHandle);
																								return (0L);
																								/* END OF PATH at func_CdAudioStartDevice@p158#1 */
																							}
																						}
																						else if(temp_18 > 0) {
																							goto L19;
																						}
																						else {
																							goto L19;
																						}
																					}
																					else if(temp_17 > 0) {
																						goto L19;
																					}
																					else {
																						goto L19;
																					}
																				}
																				else if(temp_15 < 0) {
																					goto L17;
																				}
																				else {
																					if(temp_16 > 0) {
L21:;
																						MmLockPagableDataSection((void *)(& CdAudioHitachiDeviceControl));
																						deviceExtension->Active = (unsigned char)5;
																						*(inquiryDataPtr + 25) = (unsigned char)0;
																						goto L18;
																					}
																					else if(temp_16 < 0) {
																						goto L21;
																					}
																					else {
																						goto L18;
																					}
																				}
																			}
																			else if(temp_14 > 0) {
																				goto L18;
																			}
																			else {
																				goto L18;
																			}
																		}
																		else if(temp_11 > 0) {
L22:;
L23:;
																			if(temp_12 == 0) {
																				if(temp_13 == 0) {
																					MmLockPagableDataSection((void *)(& CdAudioAtapiDeviceControl));
																					deviceExtension->Active = (unsigned char)1;
																					*(inquiryDataPtr + 25) = (unsigned char)0;
																					goto L16;
																				}
																				else if(temp_13 > 0) {
																					goto L16;
																				}
																				else {
																					goto L16;
																				}
																			}
																			else if(temp_12 > 0) {
																				goto L16;
																			}
																			else {
																				goto L16;
																			}
																		}
																		else {
																			goto L22;
																		}
																	}
																	else if(temp_10 > 0) {
																		goto L23;
																	}
																	else {
																		goto L23;
																	}
																}
																else if(temp_8 > 0) {
L24:;
																	if(temp_9 == 0) {
																		MmLockPagableDataSection((void *)(& CdAudioHitachiDeviceControl));
																		deviceExtension->Active = (unsigned char)6;
																		goto L15;
																	}
																	else if(temp_9 > 0) {
																		goto L15;
																	}
																	else {
																		goto L15;
																	}
																}
																else {
																	goto L24;
																}
															}
															else if(temp_7 > 0) {
																goto L15;
															}
															else {
																goto L15;
															}
														}
														else if(temp_6 < 0) {
															goto L13;
														}
														else {
															goto L14;
														}
													}
													else if(temp_5 < 0) {
														goto L11;
													}
													else {
														goto L12;
													}
												}
												else if(temp_4 > 0) {
													goto L14;
												}
												else {
													goto L14;
												}
											}
											else if(temp_3 < 0) {
												goto L9;
											}
											else {
												goto L10;
											}
										}
										else if(temp_2 > 0) {
											goto L8;
										}
										else {
											goto L8;
										}
									}
									else if(temp_1 > 0) {
										goto L8;
									}
									else {
										goto L8;
									}
								}
								else if(temp_20 < 0) {
									goto L6;
								}
								else {
									goto L7;
								}
							}
							else if(temp_19 > 0) {
								goto L7;
							}
							else {
								goto L7;
							}
						}
					}
					else {
						attempt = (UCHAR )((int )attempt + 1);
						memset((void *)(& srb), 0, sizeof(SCSI_PASS_THROUGH ));
						memset((void *)inquiryDataPtr, 0, 36U);
						cdb->CDB6INQUIRY.OperationCode = (unsigned char)18;
						cdb->CDB6INQUIRY.AllocationLength = (unsigned char)36;
						srb.CdbLength = (unsigned char)6;
						srb.TimeOutValue = 10UL;
						status = SendSrbSynchronous(deviceExtension, & srb, (void *)inquiryDataPtr, 36UL);
						goto L3;
					}
				}
				else {
					/* END OF PATH at func_CdAudioStartDevice@p56#3 */
				}
			}
			else {
				goto L1;
			}
		}
		else if(deviceExtension->Active < 255) {
			goto L20;
		}
		else {
			goto L20;
		}
	}
}

NTSTATUS CdAudioPnp(PDEVICE_OBJECT DeviceObject , PIRP Irp )
{ PIO_STACK_LOCATION irpSp ;
NTSTATUS status ;
ULONG count ;
BOOLEAN setPagable ;
PCD_DEVICE_EXTENSION deviceExtension ;
NTSTATUS tmp ;
NTSTATUS tmp___0 ;
	irpSp = Irp->Tail.Overlay.__annonCompField17.__annonCompField16.CurrentStackLocation;
	status = -1073741637L;
	if(irpSp->MinorFunction == 0) {
		status = CdAudioStartDevice(DeviceObject, Irp);
		Irp->IoStatus.__annonCompField4.Status = status;
		myStatus = (int )status;
		IofCompleteRequest(Irp, (char)0);
		return (status);
		/* END OF PATH at func_CdAudioPnp@p17#1 */
	}
	else if(irpSp->MinorFunction == 22) {
		if(irpSp->Parameters.UsageNotification.Type < 1U) {
			tmp = CdAudioSendToNextDriver(DeviceObject, Irp);
L1:;
			return (tmp);
			/* END OF PATH at func_CdAudioPnp@p22#1 */
		}
		else if(irpSp->Parameters.UsageNotification.Type > 1U) {
			tmp = CdAudioSendToNextDriver(DeviceObject, Irp);
			goto L1;
		}
		else {
			deviceExtension = (struct _CD_DEVICE_EXTENSION *)DeviceObject->DeviceExtension;
			status = KeWaitForSingleObject((void *)(& deviceExtension->PagingPathCountEvent), (enum _KWAIT_REASON )0, (char)0, (unsigned char)0, (LARGE_INTEGER *)((void *)0));
			setPagable = (unsigned char)0;
			if(irpSp->Parameters.UsageNotification.InPath == 0) {
				if(deviceExtension->PagingPathCount == 1UL) {
					if(!DeviceObject->Flags & 16384 > 0) {
L2:;
						DeviceObject->Flags = DeviceObject->Flags | 8192UL;
						setPagable = (unsigned char)1;
						status = CdAudioForwardIrpSynchronous(DeviceObject, Irp);
						if(status >= 0L) {
L3:;
							if(irpSp->Parameters.UsageNotification.InPath > 0) {
L4:;
								InterlockedIncrement((LONG *)(& deviceExtension->PagingPathCount));
L5:;
								if(irpSp->Parameters.UsageNotification.InPath > 0) {
L6:;
									if(deviceExtension->PagingPathCount == 1UL) {
										DeviceObject->Flags = DeviceObject->Flags & 8192UL;
L7:;
										KeSetEvent(& deviceExtension->PagingPathCountEvent, 0L, (unsigned char)0);
										IofCompleteRequest(Irp, (char)0);
L8:;
										return (status);
										/* END OF PATH at func_CdAudioPnp@p48#1 */
									}
									else if(deviceExtension->PagingPathCount < 1UL) {
										goto L7;
									}
									else {
										goto L7;
									}
								}
								else if(irpSp->Parameters.UsageNotification.InPath < 0) {
									goto L6;
								}
								else {
									goto L7;
								}
							}
							else if(irpSp->Parameters.UsageNotification.InPath < 0) {
								goto L4;
							}
							else {
								InterlockedDecrement((LONG *)(& deviceExtension->PagingPathCount));
								goto L5;
							}
						}
						else {
							if(setPagable == 1) {
								DeviceObject->Flags = DeviceObject->Flags & 8192UL;
								setPagable = (unsigned char)0;
								KeSetEvent(& deviceExtension->PagingPathCountEvent, 0L, (unsigned char)0);
								IofCompleteRequest(Irp, (char)0);
								goto L8;
							}
							else if(setPagable < 1) {
								/* FALSE PATH */ 
							}
							else {
								/* FALSE PATH */ 
							}
						}
					}
					else if(!DeviceObject->Flags & 16384 < 0) {
						goto L2;
					}
					else {
						status = CdAudioForwardIrpSynchronous(DeviceObject, Irp);
L9:;
						if(status >= 0L) {
							goto L3;
						}
						else {
							if(setPagable < 1) {
								KeSetEvent(& deviceExtension->PagingPathCountEvent, 0L, (unsigned char)0);
								IofCompleteRequest(Irp, (char)0);
								goto L8;
							}
							else if(setPagable == 1) {
								/* FALSE PATH */ 
							}
							else {
								/* FALSE PATH */ 
							}
						}
					}
				}
				else if(deviceExtension->PagingPathCount < 1UL) {
					status = CdAudioForwardIrpSynchronous(DeviceObject, Irp);
					goto L9;
				}
				else {
					status = CdAudioForwardIrpSynchronous(DeviceObject, Irp);
					goto L9;
				}
			}
			else if(irpSp->Parameters.UsageNotification.InPath > 0) {
				status = CdAudioForwardIrpSynchronous(DeviceObject, Irp);
				goto L9;
			}
			else {
				status = CdAudioForwardIrpSynchronous(DeviceObject, Irp);
				goto L9;
			}
		}
	}
	else if(irpSp->MinorFunction < 0) {
		tmp___0 = CdAudioSendToNextDriver(DeviceObject, Irp);
L10:;
		return (tmp___0);
		/* END OF PATH at func_CdAudioPnp@p53#1 */
	}
	else if(irpSp->MinorFunction > 0 && irpSp->MinorFunction < 22) {
		tmp___0 = CdAudioSendToNextDriver(DeviceObject, Irp);
		goto L10;
	}
	else {
		tmp___0 = CdAudioSendToNextDriver(DeviceObject, Irp);
		goto L10;
	}
}

void IoSetHardErrorOrVerifyDevice(PIRP Irp , PDEVICE_OBJECT DeviceObject )
{
	/* END OF PATH at func_IoSetHardErrorOrVerifyDevice@p1#1 */
}

void stub_driver_init(void)
{
	s = NP;
	pended = 0;
	compFptr = (NTSTATUS (*)(PDEVICE_OBJECT DeviceObject , PIRP Irp , PVOID Context ))0;
	compRegistered = 0;
	lowerDriverReturn = 0;
	setEventCalled = 0;
	customIrp = 0;
	/* END OF PATH at func_stub_driver_init@p8#1 */
}

int main(void)
{ DRIVER_OBJECT d ;
UNICODE_STRING u ;
NTSTATUS status ;
IRP irp ;
int we_should_unload ;
int BLAST_NONDET ;
int idx ;
int irp_choice ;
DEVICE_OBJECT devobj ;
	;
	pirp = & irp;
	_BLAST_init();
	if(status >= 0L) {
		stub_driver_init();
		pirp->IoStatus.__annonCompField4.Status = 0L;
		myStatus = 0;
		if(irp_choice == 0) {
			pirp->IoStatus.__annonCompField4.Status = -1073741637L;
			myStatus = -1073741637;
			status = CdAudioAddDevice(& d, & devobj);
			stub_driver_init();
L1:;
			if(status < 0L) {
				return (-1);
				/* END OF PATH at func_main@p22#1 */
			}
			else {
				if(BLAST_NONDET == 2) {
					status = CdAudioDeviceControl(& devobj, pirp);
L2:;
					if(we_should_unload > 0) {
L3:;
						CdAudioUnload(& d);
L4:;
						if(pended == 1) {
							if(s == NP) {
								s = NP;
L5:;
								return ((int )status);
								/* END OF PATH at func_main@p60#1 */
							}
							else if(s < NP) {
L6:;
								if(pended == 1) {
									if(s == MPR3) {
										s = MPR3;
										goto L5;
									}
									else if(s < MPR3) {
L7:;
										if(s < UNLOADED) {
L8:;
											if(status < -1L) {
L9:;
												if((pended == 1)) {
													goto L5;
												}
												else if(pended < 1) {
													/* FALSE PATH */ 
												}
												else {
													/* FALSE PATH */ 
												}
											}
											else if(status > -1L) {
												goto L9;
											}
											else {
												goto L5;
											}
										}
										else if(s > UNLOADED) {
											goto L8;
										}
										else {
											goto L5;
										}
									}
									else {
										goto L7;
									}
								}
								else if(pended < 1) {
									/* FALSE PATH */ 
								}
								else {
									/* FALSE PATH */ 
								}
							}
							else {
								goto L6;
							}
						}
						else if(pended < 1) {
							if(pended < 1) {
								if(s < UNLOADED) {
L10:;
									if(status < -1L) {
L11:;
										if(pended < 1) {
L12:;
											if(s == DC) {
												goto L5;
											}
											else if(s < DC) {
												goto L5;
											}
											else {
												goto L5;
											}
										}
										else if(pended > 1) {
											/* FALSE PATH */ 
										}
										else {
											/* FALSE PATH */ 
										}
									}
									else if(status > -1L) {
										goto L11;
									}
									else {
										goto L5;
									}
								}
								else if(s > UNLOADED) {
									goto L10;
								}
								else {
									goto L5;
								}
							}
							else if(pended == 1) {
								/* FALSE PATH */ 
							}
							else {
								/* FALSE PATH */ 
							}
						}
						else {
							if(pended > 1) {
								if(s < UNLOADED) {
L13:;
									if(status < -1L) {
L14:;
										if(pended > 1) {
											goto L12;
										}
										else if(pended < 1) {
											/* FALSE PATH */ 
										}
										else {
											/* FALSE PATH */ 
										}
									}
									else if(status > -1L) {
										goto L14;
									}
									else {
										goto L5;
									}
								}
								else if(s > UNLOADED) {
									goto L13;
								}
								else {
									goto L5;
								}
							}
							else if(pended == 1) {
								/* FALSE PATH */ 
							}
							else {
								/* FALSE PATH */ 
							}
						}
					}
					else if(we_should_unload < 0) {
						goto L3;
					}
					else {
						goto L4;
					}
				}
				else if(BLAST_NONDET == 3) {
					status = CdAudioPnp(& devobj, pirp);
					goto L2;
				}
				else if(BLAST_NONDET == 4) {
					status = CdAudioPower(& devobj, pirp);
					goto L2;
				}
				else if(BLAST_NONDET < 2) {
L15:;
					return (-1);
					/* END OF PATH at func_main@p36#1 */
				}
				else if(BLAST_NONDET > 2 && BLAST_NONDET < 3) {
					goto L15;
				}
				else if(BLAST_NONDET > 3 && BLAST_NONDET < 4) {
					goto L15;
				}
				else {
					goto L15;
				}
			}
		}
		else if(irp_choice < 0) {
			status = CdAudioAddDevice(& d, & devobj);
			stub_driver_init();
			goto L1;
		}
		else {
			status = CdAudioAddDevice(& d, & devobj);
			stub_driver_init();
			goto L1;
		}
	}
	else {
		goto L4;
	}
}

char *nondet_malloc(int i )
{ int BLAST_NONDET ;
char *tmp ;
	if(BLAST_NONDET > 0) {
L1:;
		return ((char *)0);
		/* END OF PATH at func_nondet_malloc@p4#1 */
	}
	else if(BLAST_NONDET < 0) {
		goto L1;
	}
	else {
		tmp = malloc(i);
		return (tmp);
		/* END OF PATH at func_nondet_malloc@p8#1 */
	}
}

void ExAcquireFastMutex(PFAST_MUTEX FastMutex )
{
	/* END OF PATH at func_ExAcquireFastMutex@p1#1 */
}

void ExReleaseFastMutex(PFAST_MUTEX FastMutex )
{
	/* END OF PATH at func_ExReleaseFastMutex@p1#1 */
}

PLIST_ENTRY ExfInterlockedInsertHeadList(PLIST_ENTRY ListHead , PLIST_ENTRY ListEntry , PKSPIN_LOCK Lock )
{
	return ((struct _LIST_ENTRY *)((void *)0));
	/* END OF PATH at func_ExfInterlockedInsertHeadList@p1#1 */
}

PLIST_ENTRY ExfInterlockedInsertTailList(PLIST_ENTRY ListHead , PLIST_ENTRY ListEntry , PKSPIN_LOCK Lock )
{
	return ((struct _LIST_ENTRY *)((void *)0));
	/* END OF PATH at func_ExfInterlockedInsertTailList@p1#1 */
}

PLIST_ENTRY ExfInterlockedRemoveHeadList(PLIST_ENTRY ListHead , PKSPIN_LOCK Lock )
{
	return ((struct _LIST_ENTRY *)((void *)0));
	/* END OF PATH at func_ExfInterlockedRemoveHeadList@p1#1 */
}

NTSTATUS IoQueryDeviceDescription(PINTERFACE_TYPE BusType , PULONG BusNumber , PCONFIGURATION_TYPE ControllerType , PULONG ControllerNumber , PCONFIGURATION_TYPE PeripheralType , PULONG PeripheralNumber , NTSTATUS (*CalloutRoutine)(PVOID Context , PUNICODE_STRING PathName , INTERFACE_TYPE BusType , ULONG BusNumber , PKEY_VALUE_FULL_INFORMATION *BusInformation , CONFIGURATION_TYPE ControllerType , ULONG ControllerNumber , PKEY_VALUE_FULL_INFORMATION *ControllerInformation , CONFIGURATION_TYPE PeripheralType , ULONG PeripheralNumber , PKEY_VALUE_FULL_INFORMATION *PeripheralInformation ) , PVOID Context )
{ int BLAST_NONDET ;
	if(BLAST_NONDET == 0) {
		return (0L);
		/* END OF PATH at func_IoQueryDeviceDescription@p5#1 */
	}
	else if(BLAST_NONDET < 0) {
L1:;
		return (-1073741823L);
		/* END OF PATH at func_IoQueryDeviceDescription@p8#1 */
	}
	else {
		goto L1;
	}
}

NTSTATUS IoRegisterDeviceInterface(PDEVICE_OBJECT PhysicalDeviceObject , GUID *InterfaceClassGuid , PUNICODE_STRING ReferenceString , PUNICODE_STRING SymbolicLinkName )
{ int BLAST_NONDET ;
	if(BLAST_NONDET == 0) {
		return (0L);
		/* END OF PATH at func_IoRegisterDeviceInterface@p5#1 */
	}
	else if(BLAST_NONDET < 0) {
L1:;
		return (-1073741808L);
		/* END OF PATH at func_IoRegisterDeviceInterface@p8#1 */
	}
	else {
		goto L1;
	}
}

NTSTATUS IoSetDeviceInterfaceState(PUNICODE_STRING SymbolicLinkName , BOOLEAN Enable )
{ int BLAST_NONDET ;
	if(BLAST_NONDET == 0) {
		return (0L);
		/* END OF PATH at func_IoSetDeviceInterfaceState@p5#1 */
	}
	else if(BLAST_NONDET < 0) {
L1:;
		return (-1073741823L);
		/* END OF PATH at func_IoSetDeviceInterfaceState@p8#1 */
	}
	else {
		goto L1;
	}
}

void stubMoreProcessingRequired(void)
{
	s = MPR1;
	/* END OF PATH at func_stubMoreProcessingRequired@p2#1 */
}

KIRQL KeAcquireSpinLockRaiseToDpc(PKSPIN_LOCK SpinLock )
{
	/* END OF PATH at func_KeAcquireSpinLockRaiseToDpc@p1#1 */
}

LONG KeReleaseSemaphore(PRKSEMAPHORE Semaphore , KPRIORITY Increment , LONG Adjustment , BOOLEAN Wait )
{ LONG r ;
	return (r);
	/* END OF PATH at func_KeReleaseSemaphore@p2#1 */
}

void KfReleaseSpinLock(PKSPIN_LOCK SpinLock , KIRQL NewIrql )
{
	/* END OF PATH at func_KfReleaseSpinLock@p1#1 */
}

PVOID MmAllocateContiguousMemory(SIZE_T NumberOfBytes , PHYSICAL_ADDRESS HighestAcceptableAddress )
{ int BLAST_NONDET ;
char *tmp ;
	if(BLAST_NONDET == 0) {
		tmp = malloc((int )NumberOfBytes);
		return ((void *)tmp);
		/* END OF PATH at func_MmAllocateContiguousMemory@p7#1 */
	}
	else if(BLAST_NONDET == 1) {
		return ((void *)0);
		/* END OF PATH at func_MmAllocateContiguousMemory@p10#1 */
	}
	else if(BLAST_NONDET < 0) {
L1:;
		return ((void *)0);
		/* END OF PATH at func_MmAllocateContiguousMemory@p13#1 */
	}
	else if(BLAST_NONDET > 0 && BLAST_NONDET < 1) {
		goto L1;
	}
	else {
		goto L1;
	}
}

void MmFreeContiguousMemory(PVOID BaseAddress )
{
	/* END OF PATH at func_MmFreeContiguousMemory@p1#1 */
}

PVOID MmMapLockedPagesSpecifyCache(PMDL MemoryDescriptorList , KPROCESSOR_MODE AccessMode , MEMORY_CACHING_TYPE CacheType , PVOID BaseAddress , ULONG BugCheckOnFailure , MM_PAGE_PRIORITY Priority )
{
	return ((void *)0);
	/* END OF PATH at func_MmMapLockedPagesSpecifyCache@p1#1 */
}

PVOID MmPageEntireDriver(PVOID AddressWithinSection )
{
	return ((void *)0);
	/* END OF PATH at func_MmPageEntireDriver@p1#1 */
}

void MmResetDriverPaging(PVOID AddressWithinSection )
{
	/* END OF PATH at func_MmResetDriverPaging@p1#1 */
}

void ObfDereferenceObject(PVOID Object )
{
	/* END OF PATH at func_ObfDereferenceObject@p1#1 */
}

void RtlCopyUnicodeString(PUNICODE_STRING DestinationString , PUNICODE_STRING SourceString )
{
	/* END OF PATH at func_RtlCopyUnicodeString@p1#1 */
}

void RtlFreeUnicodeString(PUNICODE_STRING UnicodeString )
{
	/* END OF PATH at func_RtlFreeUnicodeString@p1#1 */
}

void RtlInitString(PSTRING DestinationString , PCSZ SourceString )
{
	/* END OF PATH at func_RtlInitString@p1#1 */
}

void RtlInitUnicodeString(PUNICODE_STRING DestinationString , PCWSTR SourceString )
{
	/* END OF PATH at func_RtlInitUnicodeString@p1#1 */
}

