typedef unsigned int size_t;
typedef unsigned short wchar_t;
typedef wchar_t wint_t;
typedef wchar_t wctype_t;
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
typedef enum _EXCEPTION_DISPOSITION EXCEPTION_DISPOSITION;
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
typedef int LONG64;
typedef int *PLONG64;
typedef int INT64;
typedef int *PINT64;
typedef unsigned int ULONG64;
typedef unsigned int *PULONG64;
typedef unsigned int DWORD64;
typedef unsigned int *PDWORD64;
typedef unsigned int UINT64;
typedef unsigned int *PUINT64;
typedef void *PVOID;
typedef void *PVOID64;
typedef char CHAR;
typedef short SHORT;
typedef long LONG;
typedef wchar_t WCHAR;
typedef WCHAR *PWCHAR;
typedef WCHAR *LPWCH;
typedef WCHAR *PWCH;
typedef WCHAR const   *LPCWCH;
typedef WCHAR const   *PCWCH;
typedef WCHAR *NWPSTR;
typedef WCHAR *LPWSTR;
typedef WCHAR *PWSTR;
typedef WCHAR const   *LPCWSTR;
typedef WCHAR const   *PCWSTR;
typedef CHAR *PCHAR;
typedef CHAR *LPCH;
typedef CHAR *PCH;
typedef CHAR const   *LPCCH;
typedef CHAR const   *PCCH;
typedef CHAR *NPSTR;
typedef CHAR *LPSTR;
typedef CHAR *PSTR;
typedef CHAR const   *LPCSTR;
typedef CHAR const   *PCSTR;
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
struct _QUAD {
double DoNotUseThisField ;
};
typedef struct _QUAD QUAD;
typedef SHORT *PSHORT;
typedef LONG *PLONG;
typedef QUAD *PQUAD;
typedef unsigned char UCHAR;
typedef unsigned short USHORT;
typedef unsigned long ULONG;
typedef QUAD UQUAD;
typedef UCHAR *PUCHAR;
typedef USHORT *PUSHORT;
typedef ULONG *PULONG;
typedef UQUAD *PUQUAD;
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
LONG LowPart ;
LONG HighPart ;
};
typedef struct _FLOAT128 FLOAT128;
typedef FLOAT128 *PFLOAT128;
typedef int LONGLONG;
typedef unsigned int ULONGLONG;
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
typedef char const   *PCSZ;
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
char const   *Buffer ;
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
typedef UNICODE_STRING const   *PCUNICODE_STRING;
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
typedef GUID const   *LPCGUID;
typedef GUID IID;
typedef IID *LPIID;
typedef GUID CLSID;
typedef CLSID *LPCLSID;
typedef GUID FMTID;
typedef FMTID *LPFMTID;
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
ULONG ImageAddressingMode ;
ULONG SystemModeImage ;
ULONG ImageMappedToAllPids ;
ULONG Reserved ;
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
GUID const   *InterfaceType ;
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
struct _OBJECT_HANDLE_INFORMATION {
ULONG HandleAttributes ;
ACCESS_MASK GrantedAccess ;
};
typedef struct _OBJECT_HANDLE_INFORMATION OBJECT_HANDLE_INFORMATION;
typedef struct _OBJECT_HANDLE_INFORMATION *POBJECT_HANDLE_INFORMATION;
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
struct __anonstruct_DiskInfo_86 {
LARGE_INTEGER Cylinders ;
STORAGE_MEDIA_TYPE MediaType ;
ULONG TracksPerCylinder ;
ULONG SectorsPerTrack ;
ULONG BytesPerSector ;
ULONG NumberMediaSides ;
ULONG MediaCharacteristics ;
};
struct __anonstruct_RemovableDiskInfo_87 {
LARGE_INTEGER Cylinders ;
STORAGE_MEDIA_TYPE MediaType ;
ULONG TracksPerCylinder ;
ULONG SectorsPerTrack ;
ULONG BytesPerSector ;
ULONG NumberMediaSides ;
ULONG MediaCharacteristics ;
};
struct __anonstruct_ScsiInformation_90 {
UCHAR MediumType ;
UCHAR DensityCode ;
};
union __anonunion_BusSpecificData_89 {
struct __anonstruct_ScsiInformation_90 ScsiInformation ;
};
struct __anonstruct_TapeInfo_88 {
STORAGE_MEDIA_TYPE MediaType ;
ULONG MediaCharacteristics ;
ULONG CurrentBlockSize ;
STORAGE_BUS_TYPE BusType ;
union __anonunion_BusSpecificData_89 BusSpecificData ;
};
union __anonunion_DeviceSpecific_85 {
struct __anonstruct_DiskInfo_86 DiskInfo ;
struct __anonstruct_RemovableDiskInfo_87 RemovableDiskInfo ;
struct __anonstruct_TapeInfo_88 TapeInfo ;
};
struct _DEVICE_MEDIA_INFO {
union __anonunion_DeviceSpecific_85 DeviceSpecific ;
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
typedef enum _MEDIA_TYPE MEDIA_TYPE;
typedef enum _MEDIA_TYPE *PMEDIA_TYPE;
struct _FORMAT_PARAMETERS {
MEDIA_TYPE MediaType ;
ULONG StartCylinderNumber ;
ULONG EndCylinderNumber ;
ULONG StartHeadNumber ;
ULONG EndHeadNumber ;
};
typedef struct _FORMAT_PARAMETERS FORMAT_PARAMETERS;
typedef struct _FORMAT_PARAMETERS *PFORMAT_PARAMETERS;
typedef USHORT BAD_TRACK_NUMBER;
typedef USHORT *PBAD_TRACK_NUMBER;
struct _FORMAT_EX_PARAMETERS {
MEDIA_TYPE MediaType ;
ULONG StartCylinderNumber ;
ULONG EndCylinderNumber ;
ULONG StartHeadNumber ;
ULONG EndHeadNumber ;
USHORT FormatGapLength ;
USHORT SectorsPerTrack ;
USHORT SectorNumber[1] ;
};
typedef struct _FORMAT_EX_PARAMETERS FORMAT_EX_PARAMETERS;
typedef struct _FORMAT_EX_PARAMETERS *PFORMAT_EX_PARAMETERS;
struct _DISK_GEOMETRY {
LARGE_INTEGER Cylinders ;
MEDIA_TYPE MediaType ;
ULONG TracksPerCylinder ;
ULONG SectorsPerTrack ;
ULONG BytesPerSector ;
};
typedef struct _DISK_GEOMETRY DISK_GEOMETRY;
typedef struct _DISK_GEOMETRY *PDISK_GEOMETRY;
struct _PARTITION_INFORMATION {
LARGE_INTEGER StartingOffset ;
LARGE_INTEGER PartitionLength ;
ULONG HiddenSectors ;
ULONG PartitionNumber ;
UCHAR PartitionType ;
BOOLEAN BootIndicator ;
BOOLEAN RecognizedPartition ;
BOOLEAN RewritePartition ;
};
typedef struct _PARTITION_INFORMATION PARTITION_INFORMATION;
typedef struct _PARTITION_INFORMATION *PPARTITION_INFORMATION;
struct _SET_PARTITION_INFORMATION {
UCHAR PartitionType ;
};
typedef struct _SET_PARTITION_INFORMATION SET_PARTITION_INFORMATION;
typedef struct _SET_PARTITION_INFORMATION *PSET_PARTITION_INFORMATION;
struct _DRIVE_LAYOUT_INFORMATION {
ULONG PartitionCount ;
ULONG Signature ;
PARTITION_INFORMATION PartitionEntry[1] ;
};
typedef struct _DRIVE_LAYOUT_INFORMATION DRIVE_LAYOUT_INFORMATION;
typedef struct _DRIVE_LAYOUT_INFORMATION *PDRIVE_LAYOUT_INFORMATION;
struct _VERIFY_INFORMATION {
LARGE_INTEGER StartingOffset ;
ULONG Length ;
};
typedef struct _VERIFY_INFORMATION VERIFY_INFORMATION;
typedef struct _VERIFY_INFORMATION *PVERIFY_INFORMATION;
struct _REASSIGN_BLOCKS {
USHORT Reserved ;
USHORT Count ;
ULONG BlockNumber[1] ;
};
typedef struct _REASSIGN_BLOCKS REASSIGN_BLOCKS;
typedef struct _REASSIGN_BLOCKS *PREASSIGN_BLOCKS;
struct _DISK_CONTROLLER_NUMBER {
ULONG ControllerNumber ;
ULONG DiskNumber ;
};
typedef struct _DISK_CONTROLLER_NUMBER DISK_CONTROLLER_NUMBER;
typedef struct _DISK_CONTROLLER_NUMBER *PDISK_CONTROLLER_NUMBER;
typedef enum __anonenum_DISK_CACHE_RETENTION_PRIORITY_91 DISK_CACHE_RETENTION_PRIORITY;
struct __anonstruct_ScalarPrefetch_93 {
USHORT Minimum ;
USHORT Maximum ;
USHORT MaximumBlocks ;
};
struct __anonstruct_BlockPrefetch_94 {
USHORT Minimum ;
USHORT Maximum ;
};
union __anonunion____missing_field_name_92 {
struct __anonstruct_ScalarPrefetch_93 ScalarPrefetch ;
struct __anonstruct_BlockPrefetch_94 BlockPrefetch ;
};
struct _DISK_CACHE_INFORMATION {
BOOLEAN ParametersSavable ;
BOOLEAN ReadCacheEnabled ;
BOOLEAN WriteCacheEnabled ;
DISK_CACHE_RETENTION_PRIORITY ReadRetentionPriority ;
DISK_CACHE_RETENTION_PRIORITY WriteRetentionPriority ;
USHORT DisablePrefetchTransferLength ;
BOOLEAN PrefetchScalar ;
union __anonunion____missing_field_name_92 __annonCompField20 ;
};
typedef struct _DISK_CACHE_INFORMATION DISK_CACHE_INFORMATION;
typedef struct _DISK_CACHE_INFORMATION *PDISK_CACHE_INFORMATION;
struct _DISK_GROW_PARTITION {
ULONG PartitionNumber ;
LARGE_INTEGER BytesToGrow ;
};
typedef struct _DISK_GROW_PARTITION DISK_GROW_PARTITION;
typedef struct _DISK_GROW_PARTITION *PDISK_GROW_PARTITION;
struct _HISTOGRAM_BUCKET {
ULONG Reads ;
ULONG Writes ;
};
typedef struct _HISTOGRAM_BUCKET HISTOGRAM_BUCKET;
typedef struct _HISTOGRAM_BUCKET *PHISTOGRAM_BUCKET;
struct _DISK_HISTOGRAM {
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
};
typedef struct _DISK_HISTOGRAM DISK_HISTOGRAM;
typedef struct _DISK_HISTOGRAM *PDISK_HISTOGRAM;
struct _DISK_PERFORMANCE {
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
};
typedef struct _DISK_PERFORMANCE DISK_PERFORMANCE;
typedef struct _DISK_PERFORMANCE *PDISK_PERFORMANCE;
struct _DISK_RECORD {
LARGE_INTEGER ByteOffset ;
LARGE_INTEGER StartTime ;
LARGE_INTEGER EndTime ;
PVOID VirtualAddress ;
ULONG NumberOfBytes ;
UCHAR DeviceNumber ;
BOOLEAN ReadRequest ;
};
typedef struct _DISK_RECORD DISK_RECORD;
typedef struct _DISK_RECORD *PDISK_RECORD;
struct _DISK_LOGGING {
UCHAR Function ;
PVOID BufferAddress ;
ULONG BufferSize ;
};
typedef struct _DISK_LOGGING DISK_LOGGING;
typedef struct _DISK_LOGGING *PDISK_LOGGING;
typedef enum _BIN_TYPES BIN_TYPES;
struct _BIN_RANGE {
LARGE_INTEGER StartValue ;
LARGE_INTEGER Length ;
};
typedef struct _BIN_RANGE BIN_RANGE;
typedef struct _BIN_RANGE *PBIN_RANGE;
struct _PERF_BIN {
ULONG NumberOfBins ;
ULONG TypeOfBin ;
BIN_RANGE BinsRanges[1] ;
};
typedef struct _PERF_BIN PERF_BIN;
typedef struct _PERF_BIN *PPERF_BIN;
struct _BIN_COUNT {
BIN_RANGE BinRange ;
ULONG BinCount ;
};
typedef struct _BIN_COUNT BIN_COUNT;
typedef struct _BIN_COUNT *PBIN_COUNT;
struct _BIN_RESULTS {
ULONG NumberOfBins ;
BIN_COUNT BinCounts[1] ;
};
typedef struct _BIN_RESULTS BIN_RESULTS;
typedef struct _BIN_RESULTS *PBIN_RESULTS;
struct _GETVERSIONINPARAMS {
UCHAR bVersion ;
UCHAR bRevision ;
UCHAR bReserved ;
UCHAR bIDEDeviceMap ;
ULONG fCapabilities ;
ULONG dwReserved[4] ;
};
typedef struct _GETVERSIONINPARAMS GETVERSIONINPARAMS;
typedef struct _GETVERSIONINPARAMS *PGETVERSIONINPARAMS;
typedef struct _GETVERSIONINPARAMS *LPGETVERSIONINPARAMS;
struct _IDEREGS {
UCHAR bFeaturesReg ;
UCHAR bSectorCountReg ;
UCHAR bSectorNumberReg ;
UCHAR bCylLowReg ;
UCHAR bCylHighReg ;
UCHAR bDriveHeadReg ;
UCHAR bCommandReg ;
UCHAR bReserved ;
};
typedef struct _IDEREGS IDEREGS;
typedef struct _IDEREGS *PIDEREGS;
typedef struct _IDEREGS *LPIDEREGS;
struct _SENDCMDINPARAMS {
ULONG cBufferSize ;
IDEREGS irDriveRegs ;
UCHAR bDriveNumber ;
UCHAR bReserved[3] ;
ULONG dwReserved[4] ;
UCHAR bBuffer[1] ;
};
typedef struct _SENDCMDINPARAMS SENDCMDINPARAMS;
typedef struct _SENDCMDINPARAMS *PSENDCMDINPARAMS;
typedef struct _SENDCMDINPARAMS *LPSENDCMDINPARAMS;
struct _DRIVERSTATUS {
UCHAR bDriverError ;
UCHAR bIDEError ;
UCHAR bReserved[2] ;
ULONG dwReserved[2] ;
};
typedef struct _DRIVERSTATUS DRIVERSTATUS;
typedef struct _DRIVERSTATUS *PDRIVERSTATUS;
typedef struct _DRIVERSTATUS *LPDRIVERSTATUS;
struct _MAPPED_ADDRESS {
struct _MAPPED_ADDRESS *NextMappedAddress ;
PVOID MappedAddress ;
ULONG NumberOfBytes ;
LARGE_INTEGER IoAddress ;
ULONG BusNumber ;
};
typedef struct _MAPPED_ADDRESS MAPPED_ADDRESS;
typedef struct _MAPPED_ADDRESS *PMAPPED_ADDRESS;
struct _TRANSFER_BUFFER {
PHYSICAL_ADDRESS Logical ;
PVOID Virtual ;
};
typedef struct _TRANSFER_BUFFER TRANSFER_BUFFER;
typedef struct _TRANSFER_BUFFER *PTRANSFER_BUFFER;
struct _ACPI_FDI_DATA {
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
};
typedef struct _ACPI_FDI_DATA ACPI_FDI_DATA;
typedef struct _ACPI_FDI_DATA *PACPI_FDI_DATA;
typedef enum _ACPI_FDI_DEVICE_TYPE ACPI_FDI_DEVICE_TYPE;
struct _FDC_INFO {
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
};
typedef struct _FDC_INFO FDC_INFO;
typedef struct _FDC_INFO *PFDC_INFO;
struct _FDC_ENABLE_PARMS {
UCHAR DriveOnValue ;
USHORT TimeToWait ;
BOOLEAN MotorStarted ;
};
typedef struct _FDC_ENABLE_PARMS FDC_ENABLE_PARMS;
typedef FDC_ENABLE_PARMS *PFDC_ENABLE_PARMS;
struct _FDC_DISK_CHANGE_PARMS {
UCHAR DriveStatus ;
UCHAR DriveOnValue ;
};
typedef struct _FDC_DISK_CHANGE_PARMS FDC_DISK_CHANGE_PARMS;
typedef struct _FDC_DISK_CHANGE_PARMS *PFDC_DISK_CHANGE_PARMS;
struct _ISSUE_FDC_COMMAND_PARMS {
PUCHAR FifoInBuffer ;
PUCHAR FifoOutBuffer ;
PVOID IoHandle ;
ULONG IoOffset ;
ULONG TransferBytes ;
ULONG TimeOut ;
};
typedef struct _ISSUE_FDC_COMMAND_PARMS ISSUE_FDC_COMMAND_PARMS;
typedef struct _ISSUE_FDC_COMMAND_PARMS *PISSUE_FDC_COMMAND_PARMS;
struct _ISSUE_FDC_ADAPTER_BUFFER_PARMS {
PVOID IoBuffer ;
USHORT TransferBytes ;
PVOID Handle ;
};
typedef struct _ISSUE_FDC_ADAPTER_BUFFER_PARMS ISSUE_FDC_ADAPTER_BUFFER_PARMS;
typedef struct _ISSUE_FDC_ADAPTER_BUFFER_PARMS *PISSUE_FDC_ADAPTER_BUFFER_PARMS;
struct _SET_HD_BIT_PARMS {
BOOLEAN DriveType144MB ;
BOOLEAN Media144MB ;
BOOLEAN More120MB ;
UCHAR DeviceUnit ;
BOOLEAN ChangedHdBit ;
};
typedef struct _SET_HD_BIT_PARMS SET_HD_BIT_PARMS;
typedef struct _SET_HD_BIT_PARMS *PSET_HD_BIT_PARMS;
struct _MOUNTMGR_CREATE_POINT_INPUT {
USHORT SymbolicLinkNameOffset ;
USHORT SymbolicLinkNameLength ;
USHORT DeviceNameOffset ;
USHORT DeviceNameLength ;
};
typedef struct _MOUNTMGR_CREATE_POINT_INPUT MOUNTMGR_CREATE_POINT_INPUT;
typedef struct _MOUNTMGR_CREATE_POINT_INPUT *PMOUNTMGR_CREATE_POINT_INPUT;
struct _MOUNTMGR_MOUNT_POINT {
ULONG SymbolicLinkNameOffset ;
USHORT SymbolicLinkNameLength ;
ULONG UniqueIdOffset ;
USHORT UniqueIdLength ;
ULONG DeviceNameOffset ;
USHORT DeviceNameLength ;
};
typedef struct _MOUNTMGR_MOUNT_POINT MOUNTMGR_MOUNT_POINT;
typedef struct _MOUNTMGR_MOUNT_POINT *PMOUNTMGR_MOUNT_POINT;
struct _MOUNTMGR_MOUNT_POINTS {
ULONG Size ;
ULONG NumberOfMountPoints ;
MOUNTMGR_MOUNT_POINT MountPoints[1] ;
};
typedef struct _MOUNTMGR_MOUNT_POINTS MOUNTMGR_MOUNT_POINTS;
typedef struct _MOUNTMGR_MOUNT_POINTS *PMOUNTMGR_MOUNT_POINTS;
struct _MOUNTMGR_DRIVE_LETTER_TARGET {
USHORT DeviceNameLength ;
WCHAR DeviceName[1] ;
};
typedef struct _MOUNTMGR_DRIVE_LETTER_TARGET MOUNTMGR_DRIVE_LETTER_TARGET;
typedef struct _MOUNTMGR_DRIVE_LETTER_TARGET *PMOUNTMGR_DRIVE_LETTER_TARGET;
struct _MOUNTMGR_DRIVE_LETTER_INFORMATION {
BOOLEAN DriveLetterWasAssigned ;
UCHAR CurrentDriveLetter ;
};
typedef struct _MOUNTMGR_DRIVE_LETTER_INFORMATION MOUNTMGR_DRIVE_LETTER_INFORMATION;
typedef struct _MOUNTMGR_DRIVE_LETTER_INFORMATION *PMOUNTMGR_DRIVE_LETTER_INFORMATION;
struct _MOUNTMGR_VOLUME_MOUNT_POINT {
USHORT SourceVolumeNameOffset ;
USHORT SourceVolumeNameLength ;
USHORT TargetVolumeNameOffset ;
USHORT TargetVolumeNameLength ;
};
typedef struct _MOUNTMGR_VOLUME_MOUNT_POINT MOUNTMGR_VOLUME_MOUNT_POINT;
typedef struct _MOUNTMGR_VOLUME_MOUNT_POINT *PMOUNTMGR_VOLUME_MOUNT_POINT;
struct _MOUNTMGR_CHANGE_NOTIFY_INFO {
ULONG EpicNumber ;
};
typedef struct _MOUNTMGR_CHANGE_NOTIFY_INFO MOUNTMGR_CHANGE_NOTIFY_INFO;
typedef struct _MOUNTMGR_CHANGE_NOTIFY_INFO *PMOUNTMGR_CHANGE_NOTIFY_INFO;
struct _MOUNTMGR_TARGET_NAME {
USHORT DeviceNameLength ;
WCHAR DeviceName[1] ;
};
typedef struct _MOUNTMGR_TARGET_NAME MOUNTMGR_TARGET_NAME;
typedef struct _MOUNTMGR_TARGET_NAME *PMOUNTMGR_TARGET_NAME;
struct _MOUNTDEV_NAME {
USHORT NameLength ;
WCHAR Name[1] ;
};
typedef struct _MOUNTDEV_NAME MOUNTDEV_NAME;
typedef struct _MOUNTDEV_NAME *PMOUNTDEV_NAME;
struct _MOUNTDEV_UNIQUE_ID {
USHORT UniqueIdLength ;
UCHAR UniqueId[1] ;
};
typedef struct _MOUNTDEV_UNIQUE_ID MOUNTDEV_UNIQUE_ID;
typedef struct _MOUNTDEV_UNIQUE_ID *PMOUNTDEV_UNIQUE_ID;
struct _MOUNTDEV_UNIQUE_ID_CHANGE_NOTIFY_OUTPUT {
ULONG Size ;
USHORT OldUniqueIdOffset ;
USHORT OldUniqueIdLength ;
USHORT NewUniqueIdOffset ;
USHORT NewUniqueIdLength ;
};
typedef struct _MOUNTDEV_UNIQUE_ID_CHANGE_NOTIFY_OUTPUT MOUNTDEV_UNIQUE_ID_CHANGE_NOTIFY_OUTPUT;
typedef struct _MOUNTDEV_UNIQUE_ID_CHANGE_NOTIFY_OUTPUT *PMOUNTDEV_UNIQUE_ID_CHANGE_NOTIFY_OUTPUT;
struct _MOUNTDEV_SUGGESTED_LINK_NAME {
BOOLEAN UseOnlyIfThereAreNoOtherLinks ;
USHORT NameLength ;
WCHAR Name[1] ;
};
typedef struct _MOUNTDEV_SUGGESTED_LINK_NAME MOUNTDEV_SUGGESTED_LINK_NAME;
typedef struct _MOUNTDEV_SUGGESTED_LINK_NAME *PMOUNTDEV_SUGGESTED_LINK_NAME;
struct _BOOT_SECTOR_INFO {
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
};
typedef struct _BOOT_SECTOR_INFO BOOT_SECTOR_INFO;
typedef struct _BOOT_SECTOR_INFO *PBOOT_SECTOR_INFO;
typedef enum _DRIVE_MEDIA_TYPE DRIVE_MEDIA_TYPE;
typedef enum _DRIVE_MEDIA_TYPE_NEC98 DRIVE_MEDIA_TYPE_NEC98;
struct _DRIVE_MEDIA_LIMITS {
DRIVE_MEDIA_TYPE HighestDriveMediaType ;
DRIVE_MEDIA_TYPE LowestDriveMediaType ;
};
typedef struct _DRIVE_MEDIA_LIMITS DRIVE_MEDIA_LIMITS;
typedef struct _DRIVE_MEDIA_LIMITS *PDRIVE_MEDIA_LIMITS;
struct _DRIVE_MEDIA_LIMITS_NEC98 {
DRIVE_MEDIA_TYPE_NEC98 HighestDriveMediaType ;
DRIVE_MEDIA_TYPE_NEC98 LowestDriveMediaType ;
};
typedef struct _DRIVE_MEDIA_LIMITS_NEC98 DRIVE_MEDIA_LIMITS_NEC98;
typedef struct _DRIVE_MEDIA_LIMITS_NEC98 *PDRIVE_MEDIA_LIMITS_NEC98;
struct _DRIVE_MEDIA_CONSTANTS {
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
};
typedef struct _DRIVE_MEDIA_CONSTANTS DRIVE_MEDIA_CONSTANTS;
typedef struct _DRIVE_MEDIA_CONSTANTS *PDRIVE_MEDIA_CONSTANTS;
struct _DISKETTE_EXTENSION {
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
};
typedef struct _DISKETTE_EXTENSION DISKETTE_EXTENSION;
typedef DISKETTE_EXTENSION *PDISKETTE_EXTENSION;
struct _SENSE_DEVISE_STATUS_PTOS {
UCHAR ST3_PTOS ;
};
typedef struct _SENSE_DEVISE_STATUS_PTOS SENSE_DEVISE_STATUS_PTOS;
typedef struct _SENSE_DEVISE_STATUS_PTOS *PSENSE_DEVISE_STATUS_PTOS;
PCCHAR KeNumberProcessors  ;
PVOID *MmHighestUserAddress  ;
PVOID *MmSystemRangeStart  ;
ULONG *MmUserProbeAddress  ;
void KeInitializeEvent(PRKEVENT Event , EVENT_TYPE Type , BOOLEAN State ) ;
LONG KeSetEvent(PRKEVENT Event , KPRIORITY Increment , BOOLEAN Wait ) ;
NTSTATUS KeWaitForSingleObject(PVOID Object , KWAIT_REASON WaitReason , KPROCESSOR_MODE WaitMode , BOOLEAN Alertable , PLARGE_INTEGER Timeout ) ;
extern LONG InterlockedIncrement(PLONG Addend ) ;
extern LONG InterlockedDecrement(PLONG Addend ) ;
LONG InterlockedExchange(PLONG Target , LONG Value ) ;
extern LARGE_INTEGER KeQueryPerformanceCounter(PLARGE_INTEGER PerformanceFrequency ) ;
PVOID ExAllocatePoolWithTag(POOL_TYPE PoolType , SIZE_T NumberOfBytes , ULONG Tag ) ;
void ExFreePool(PVOID P ) ;
PBOOLEAN Mm64BitPhysicalAddress  ;
extern NTSTATUS PsSetCreateProcessNotifyRoutine(void (*NotifyRoutine)(HANDLE ParentId , HANDLE ProcessId , BOOLEAN Create ) , BOOLEAN Remove ) ;
extern NTSTATUS PsSetCreateThreadNotifyRoutine(void (*NotifyRoutine)(HANDLE ProcessId , HANDLE ThreadId , BOOLEAN Create ) ) ;
extern PVOID IoAllocateErrorLogEntry(PVOID IoObject , UCHAR EntrySize ) ;
PDEVICE_OBJECT IoAttachDeviceToDeviceStack(PDEVICE_OBJECT SourceDevice , PDEVICE_OBJECT TargetDevice ) ;
PIRP IoBuildDeviceIoControlRequest(ULONG IoControlCode , PDEVICE_OBJECT DeviceObject , PVOID InputBuffer , ULONG InputBufferLength , PVOID OutputBuffer , ULONG OutputBufferLength , BOOLEAN InternalDeviceIoControl , PKEVENT Event , PIO_STATUS_BLOCK IoStatusBlock ) ;
NTSTATUS IofCallDriver(PDEVICE_OBJECT DeviceObject , PIRP Irp ) ;
void IofCompleteRequest(PIRP Irp , CCHAR PriorityBoost ) ;
NTSTATUS IoCreateDevice(PDRIVER_OBJECT DriverObject , ULONG DeviceExtensionSize , PUNICODE_STRING DeviceName , ULONG DeviceType , ULONG DeviceCharacteristics , BOOLEAN Exclusive , PDEVICE_OBJECT *DeviceObject ) ;
void IoDeleteDevice(PDEVICE_OBJECT DeviceObject ) ;
void IoDetachDevice(PDEVICE_OBJECT TargetDevice ) ;
extern void IoWriteErrorLogEntry(PVOID ElEntry ) ;
extern NTSTATUS IoWMIRegistrationControl(PDEVICE_OBJECT DeviceObject , ULONG Action ) ;
NTSTATUS PoCallDriver(PDEVICE_OBJECT DeviceObject , PIRP Irp ) ;
void PoStartNextPowerIrp(PIRP Irp ) ;
GUID MOUNTDEV_MOUNTED_DEVICE_GUID  ;
DRIVE_MEDIA_LIMITS DDriveMediaLimits[5]  ;
DRIVE_MEDIA_LIMITS_NEC98 DDriveMediaLimits_NEC98[6]  ;
PDRIVE_MEDIA_LIMITS DriveMediaLimits  ;
DRIVE_MEDIA_CONSTANTS DDriveMediaConstants[17]  ;
DRIVE_MEDIA_CONSTANTS DDriveMediaConstants_NEC98[21]  ;
PDRIVE_MEDIA_CONSTANTS DriveMediaConstants  ;
SENSE_DEVISE_STATUS_PTOS Result_Status3_PTOS[4]  ;
NTSTATUS FlConfigCallBack(PVOID Context , PUNICODE_STRING PathName , INTERFACE_TYPE BusType , ULONG BusNumber , PKEY_VALUE_FULL_INFORMATION *BusInformation , CONFIGURATION_TYPE ControllerType , ULONG ControllerNumber , PKEY_VALUE_FULL_INFORMATION *ControllerInformation , CONFIGURATION_TYPE PeripheralType , ULONG PeripheralNumber , PKEY_VALUE_FULL_INFORMATION *PeripheralInformation ) ;
NTSTATUS FlInitializeControllerHardware(PDISKETTE_EXTENSION DisketteExtension ) ;
NTSTATUS FlRecalibrateDrive(PDISKETTE_EXTENSION DisketteExtension ) ;
NTSTATUS FlDatarateSpecifyConfigure(PDISKETTE_EXTENSION DisketteExtension ) ;
NTSTATUS FlStartDrive(PDISKETTE_EXTENSION DisketteExtension , PIRP Irp , BOOLEAN WriteOperation , BOOLEAN SetUpMedia , BOOLEAN IgnoreChange ) ;
void FlFinishOperation(PIRP Irp , PDISKETTE_EXTENSION DisketteExtension ) ;
NTSTATUS FlDetermineMediaType(PDISKETTE_EXTENSION DisketteExtension ) ;
NTSTATUS FlIssueCommand(PDISKETTE_EXTENSION DisketteExtension , PUCHAR FifoInBuffer , PUCHAR FifoOutBuffer , PMDL IoMdl , ULONG IoOffset , ULONG TransferBytes ) ;
BOOLEAN FlCheckFormatParameters(PDISKETTE_EXTENSION DisketteExtension , PFORMAT_PARAMETERS FormatParameters ) ;
extern void FlLogErrorDpc(PKDPC Dpc , PVOID DeferredContext , PVOID SystemContext1 , PVOID SystemContext2 ) ;
NTSTATUS FlQueueIrpToThread(PIRP Irp , PDISKETTE_EXTENSION DisketteExtension ) ;
NTSTATUS FlInterpretError(UCHAR StatusRegister1 , UCHAR StatusRegister2 ) ;
void FlAllocateIoBuffer(PDISKETTE_EXTENSION DisketteExtension , ULONG BufferSize ) ;
void FlFreeIoBuffer(PDISKETTE_EXTENSION DisketteExtension ) ;
NTSTATUS FlFdcDeviceIo(PDEVICE_OBJECT DeviceObject , ULONG Ioctl , PVOID Data ) ;
NTSTATUS FlAcpiConfigureFloppy(PDISKETTE_EXTENSION DisketteExtension , PFDC_INFO FdcInfo ) ;
NTSTATUS FlHdbit(PDISKETTE_EXTENSION DisketteExtension ) ;
NTSTATUS DriverEntry(PDRIVER_OBJECT DriverObject , PUNICODE_STRING RegistryPath ) ;
int DriverEntryNONDET  ;
void FloppyUnload(PDRIVER_OBJECT DriverObject ) ;
NTSTATUS FloppyCreateClose(PDEVICE_OBJECT DeviceObject , PIRP Irp ) ;
NTSTATUS FloppyDeviceControl(PDEVICE_OBJECT DeviceObject , PIRP Irp ) ;
NTSTATUS FloppyReadWrite(PDEVICE_OBJECT DeviceObject , PIRP Irp ) ;
NTSTATUS FloppyAddDevice(PDRIVER_OBJECT DriverObject , PDEVICE_OBJECT PhysicalDeviceObject ) ;
NTSTATUS FloppyPnp(PDEVICE_OBJECT DeviceObject , PIRP Irp ) ;
NTSTATUS FloppyPower(PDEVICE_OBJECT DeviceObject , PIRP Irp ) ;
NTSTATUS FloppyPnpComplete(PDEVICE_OBJECT DeviceObject , PIRP Irp , PVOID Context ) ;
NTSTATUS FloppyQueueRequest(PDISKETTE_EXTENSION DisketteExtension , PIRP Irp ) ;
NTSTATUS FloppyStartDevice(PDEVICE_OBJECT DeviceObject , PIRP Irp ) ;
void FloppyProcessQueuedRequests(PDISKETTE_EXTENSION DisketteExtension ) ;
void FloppyCancelQueuedRequest(PDEVICE_OBJECT DeviceObject , PIRP Irp ) ;
char *malloc(int i ) ;
void ExAcquireFastMutex(PFAST_MUTEX FastMutex ) ;
void ExReleaseFastMutex(PFAST_MUTEX FastMutex ) ;
PLIST_ENTRY ExfInterlockedRemoveHeadList(PLIST_ENTRY ListHead , PKSPIN_LOCK Lock ) ;
PIRP IoBuildAsynchronousFsdRequest(ULONG MajorFunction , PDEVICE_OBJECT DeviceObject , PVOID Buffer , ULONG Length , PLARGE_INTEGER StartingOffset , PIO_STATUS_BLOCK IoStatusBlock ) ;
NTSTATUS IoCreateSymbolicLink(PUNICODE_STRING SymbolicLinkName , PUNICODE_STRING DeviceName ) ;
NTSTATUS IoDeleteSymbolicLink(PUNICODE_STRING SymbolicLinkName ) ;
void IoFreeIrp(PIRP Irp ) ;
void IoFreeMdl(PMDL Mdl ) ;
PCONFIGURATION_INFORMATION IoGetConfigurationInformation(void) ;
NTSTATUS IoQueryDeviceDescription(PINTERFACE_TYPE BusType , PULONG BusNumber , PCONFIGURATION_TYPE ControllerType , PULONG ControllerNumber , PCONFIGURATION_TYPE PeripheralType , PULONG PeripheralNumber , NTSTATUS (*CalloutRoutine)(PVOID Context , PUNICODE_STRING PathName , INTERFACE_TYPE BusType , ULONG BusNumber , PKEY_VALUE_FULL_INFORMATION *BusInformation , CONFIGURATION_TYPE ControllerType , ULONG ControllerNumber , PKEY_VALUE_FULL_INFORMATION *ControllerInformation , CONFIGURATION_TYPE PeripheralType , ULONG PeripheralNumber , PKEY_VALUE_FULL_INFORMATION *PeripheralInformation ) , PVOID Context ) ;
NTSTATUS IoRegisterDeviceInterface(PDEVICE_OBJECT PhysicalDeviceObject , GUID *InterfaceClassGuid , PUNICODE_STRING ReferenceString , PUNICODE_STRING SymbolicLinkName ) ;
void IoReleaseCancelSpinLock(KIRQL Irql ) ;
NTSTATUS IoSetDeviceInterfaceState(PUNICODE_STRING SymbolicLinkName , BOOLEAN Enable ) ;
void IoSetHardErrorOrVerifyDevice(PIRP Irp , PDEVICE_OBJECT DeviceObject ) ;
void stubMoreProcessingRequired(void) ;
KIRQL KeAcquireSpinLockRaiseToDpc(PKSPIN_LOCK SpinLock ) ;
NTSTATUS KeDelayExecutionThread(KPROCESSOR_MODE WaitMode , BOOLEAN Alertable , PLARGE_INTEGER Interval ) ;
void KeInitializeSemaphore(PRKSEMAPHORE Semaphore , LONG Count , LONG Limit ) ;
void KeInitializeSpinLock(PKSPIN_LOCK SpinLock ) ;
LONG KeReleaseSemaphore(PRKSEMAPHORE Semaphore , KPRIORITY Increment , LONG Adjustment , BOOLEAN Wait ) ;
void KfReleaseSpinLock(PKSPIN_LOCK SpinLock , KIRQL NewIrql ) ;
PVOID MmAllocateContiguousMemory(SIZE_T NumberOfBytes , PHYSICAL_ADDRESS HighestAcceptableAddress ) ;
void MmFreeContiguousMemory(PVOID BaseAddress ) ;
PVOID MmMapLockedPagesSpecifyCache(PMDL MemoryDescriptorList , KPROCESSOR_MODE AccessMode , MEMORY_CACHING_TYPE CacheType , PVOID BaseAddress , ULONG BugCheckOnFailure , MM_PAGE_PRIORITY Priority ) ;
PVOID MmPageEntireDriver(PVOID AddressWithinSection ) ;
void MmResetDriverPaging(PVOID AddressWithinSection ) ;
void MmUnlockPages(PMDL MemoryDescriptorList ) ;
NTSTATUS ObReferenceObjectByHandle(HANDLE Handle , ACCESS_MASK DesiredAccess , POBJECT_TYPE ObjectType , KPROCESSOR_MODE AccessMode , PVOID *Object , POBJECT_HANDLE_INFORMATION HandleInformation ) ;
void ObfDereferenceObject(PVOID Object ) ;
NTSTATUS PsCreateSystemThread(PHANDLE ThreadHandle , ULONG DesiredAccess , POBJECT_ATTRIBUTES ObjectAttributes , HANDLE ProcessHandle , PCLIENT_ID ClientId , void (*StartRoutine)(PVOID StartContext ) , PVOID StartContext ) ;
NTSTATUS PsTerminateSystemThread(NTSTATUS ExitStatus ) ;
NTSTATUS RtlAnsiStringToUnicodeString(PUNICODE_STRING DestinationString , PANSI_STRING SourceString , BOOLEAN AllocateDestinationString ) ;
SIZE_T RtlCompareMemory(void *Source1 , void *Source2 , SIZE_T Length ) ;
void RtlCopyUnicodeString(PUNICODE_STRING DestinationString , PUNICODE_STRING SourceString ) ;
NTSTATUS RtlDeleteRegistryValue(ULONG RelativeTo , PCWSTR Path , PCWSTR ValueName ) ;
void RtlFreeUnicodeString(PUNICODE_STRING UnicodeString ) ;
void RtlInitString(PSTRING DestinationString , PCSZ SourceString ) ;
void RtlInitUnicodeString(PUNICODE_STRING DestinationString , PCWSTR SourceString ) ;
NTSTATUS RtlQueryRegistryValues(ULONG RelativeTo , PCWSTR Path , PRTL_QUERY_REGISTRY_TABLE QueryTable , PVOID Context , PVOID Environment ) ;
NTSTATUS ZwClose(HANDLE Handle ) ;
NTSTATUS myStatus  ;
int MydisketteExtensionIsRemoved  ;
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
ULONG PagingReferenceCount  ;
PFAST_MUTEX PagingMutex  ;
PLIST_ENTRY ExfInterlockedInsertTailList(PLIST_ENTRY ListHead , PLIST_ENTRY ListEntry , PKSPIN_LOCK Lock ) ;
PLIST_ENTRY ExfInterlockedInsertHeadList(PLIST_ENTRY ListHead , PLIST_ENTRY ListEntry , PKSPIN_LOCK Lock ) ;
NTSTATUS FlReadWrite(PDISKETTE_EXTENSION DisketteExtension , PIRP Irp , BOOLEAN DriveStarted ) ;
void FlCheckBootSector(PDISKETTE_EXTENSION DisketteExtension ) ;
PMDL IoAllocateMdl(PVOID VirtualAddress , ULONG Length , BOOLEAN SecondaryBuffer , BOOLEAN ChargeQuota , PIRP Irp ) ;
extern int ( /* missing proto */  MmProbeAndLockPages)() ;
extern int ( /* missing proto */  KeSetPriorityThread)() ;
NTSTATUS FlFormat(PDISKETTE_EXTENSION DisketteExtension , PIRP Irp ) ;
int tag_1  ;
IRP *pirp  ;
extern int ( /* missing proto */  _SLICE)() ;
void *memcpy(void *p , void const   *s , size_t t )
{ void *x ;
	return (x);
	/* END OF PATH at func_memcpy@p2#1 */
}

void *memset(void *p , int s , size_t t )
{ void *x ;
	return (x);
	/* END OF PATH at func_memset@p2#1 */
}

void KeInitializeEvent(PRKEVENT Event , EVENT_TYPE Type , BOOLEAN State )
{
	/* END OF PATH at func_KeInitializeEvent@p1#1 */
}

LONG KeSetEvent(PRKEVENT Event , KPRIORITY Increment , BOOLEAN Wait )
{ LONG l ;
	setEventCalled = 1;
	return (l);
	/* END OF PATH at func_KeSetEvent@p3#1 */
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

LONG InterlockedExchange(PLONG Target , LONG Value )
{ LONG r ;
	return (r);
	/* END OF PATH at func_InterlockedExchange@p2#1 */
}

PVOID ExAllocatePoolWithTag(POOL_TYPE PoolType , SIZE_T NumberOfBytes , ULONG Tag )
{ PVOID x ;
char *tmp ;
	tmp = malloc((int )NumberOfBytes);
	x = (void *)tmp;
	return (x);
	/* END OF PATH at func_ExAllocatePoolWithTag@p5#1 */
}

void ExFreePool(PVOID P )
{
	/* END OF PATH at func_ExFreePool@p1#1 */
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
int compRetStatus1 ;
PVOID lcontext ;
NTSTATUS tmp ;
	if(compRegistered > 0) {
		tmp = FloppyPnpComplete(DeviceObject, Irp, lcontext);
L1:;
		compRetStatus1 = (int )tmp;
		if(compRetStatus1 == -1073741802L) {
			stubMoreProcessingRequired();
L2:;
			if(BLAST_NONDET == 0) {
				returnVal2 = 0L;
				if(s == NP) {
L3:;
					s = IPC;
					lowerDriverReturn = (int )returnVal2;
L4:;
					return (returnVal2);
					/* END OF PATH at func_IofCallDriver@p37#1 */
				}
				else if(s < NP) {
L5:;
					if(s == MPR1) {
						if(returnVal2 < 259L) {
L6:;
							s = NP;
							lowerDriverReturn = (int )returnVal2;
L7:;
							goto L4;
						}
						else if(returnVal2 == 259L) {
							/* FALSE PATH */ 
						}
						else {
							/* FALSE PATH */ 
						}
					}
					else if(s < MPR1) {
L8:;
						s = SKIP2;
						lowerDriverReturn = (int )returnVal2;
						goto L4;
					}
					else {
						goto L8;
					}
				}
				else {
					goto L5;
				}
			}
			else if(BLAST_NONDET == 1) {
				returnVal2 = -1073741823L;
				if(s == NP) {
					goto L3;
				}
				else if(s < NP) {
L9:;
					if(s == MPR1) {
						if(returnVal2 < 259L) {
							goto L6;
						}
						else if(returnVal2 == 259L) {
							/* FALSE PATH */ 
						}
						else {
							/* FALSE PATH */ 
						}
					}
					else if(s < MPR1) {
						goto L8;
					}
					else {
						goto L8;
					}
				}
				else {
					goto L9;
				}
			}
			else if(BLAST_NONDET < 0) {
L10:;
				returnVal2 = 259L;
				if(s == NP) {
					goto L3;
				}
				else if(s < NP) {
L11:;
					if(s == MPR1) {
						if(returnVal2 == 259L) {
							s = MPR3;
							lowerDriverReturn = (int )returnVal2;
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
						goto L8;
					}
					else {
						goto L8;
					}
				}
				else {
					goto L11;
				}
			}
			else if(BLAST_NONDET > 0 && BLAST_NONDET < 1) {
				goto L10;
			}
			else {
				goto L10;
			}
		}
		else if(compRetStatus1 < -1073741802L) {
			goto L2;
		}
		else {
			goto L2;
		}
	}
	else if(compRegistered < 0) {
		tmp = FloppyPnpComplete(DeviceObject, Irp, lcontext);
		goto L1;
	}
	else {
		goto L2;
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

void IoDeleteDevice(PDEVICE_OBJECT DeviceObject )
{
	/* END OF PATH at func_IoDeleteDevice@p1#1 */
}

void IoDetachDevice(PDEVICE_OBJECT TargetDevice )
{
	/* END OF PATH at func_IoDetachDevice@p1#1 */
}

NTSTATUS PoCallDriver(PDEVICE_OBJECT DeviceObject , PIRP Irp )
{ int BLAST_NONDET ;
int compRetStatus ;
NTSTATUS returnVal ;
PVOID lcontext ;
NTSTATUS tmp ;
	if(compRegistered > 0) {
		tmp = FloppyPnpComplete(DeviceObject, Irp, lcontext);
L1:;
		compRetStatus = (int )tmp;
		if(compRetStatus == -1073741802L) {
			stubMoreProcessingRequired();
L2:;
			if(BLAST_NONDET == 0) {
				returnVal = 0L;
				if(s == NP) {
L3:;
					s = IPC;
					lowerDriverReturn = (int )returnVal;
L4:;
					return (returnVal);
					/* END OF PATH at func_PoCallDriver@p37#1 */
				}
				else if(s < NP) {
L5:;
					if(s == MPR1) {
						if(returnVal < 259L) {
L6:;
							s = NP;
							lowerDriverReturn = (int )returnVal;
L7:;
							goto L4;
						}
						else if(returnVal == 259L) {
							/* FALSE PATH */ 
						}
						else {
							/* FALSE PATH */ 
						}
					}
					else if(s < MPR1) {
L8:;
						s = SKIP2;
						lowerDriverReturn = (int )returnVal;
						goto L4;
					}
					else {
						goto L8;
					}
				}
				else {
					goto L5;
				}
			}
			else if(BLAST_NONDET == 1) {
				returnVal = -1073741823L;
				if(s == NP) {
					goto L3;
				}
				else if(s < NP) {
L9:;
					if(s == MPR1) {
						if(returnVal < 259L) {
							goto L6;
						}
						else if(returnVal == 259L) {
							/* FALSE PATH */ 
						}
						else {
							/* FALSE PATH */ 
						}
					}
					else if(s < MPR1) {
						goto L8;
					}
					else {
						goto L8;
					}
				}
				else {
					goto L9;
				}
			}
			else if(BLAST_NONDET < 0) {
L10:;
				returnVal = 259L;
				if(s == NP) {
					goto L3;
				}
				else if(s < NP) {
L11:;
					if(s == MPR1) {
						if(returnVal == 259L) {
							s = MPR3;
							lowerDriverReturn = (int )returnVal;
							goto L7;
						}
						else if(returnVal < 259L) {
							/* FALSE PATH */ 
						}
						else {
							/* FALSE PATH */ 
						}
					}
					else if(s < MPR1) {
						goto L8;
					}
					else {
						goto L8;
					}
				}
				else {
					goto L11;
				}
			}
			else if(BLAST_NONDET > 0 && BLAST_NONDET < 1) {
				goto L10;
			}
			else {
				goto L10;
			}
		}
		else if(compRetStatus < -1073741802L) {
			goto L2;
		}
		else {
			goto L2;
		}
	}
	else if(compRegistered < 0) {
		tmp = FloppyPnpComplete(DeviceObject, Irp, lcontext);
		goto L1;
	}
	else {
		goto L2;
	}
}

void PoStartNextPowerIrp(PIRP Irp )
{
	/* END OF PATH at func_PoStartNextPowerIrp@p1#1 */
}

NTSTATUS FlConfigCallBack(PVOID Context , PUNICODE_STRING PathName , INTERFACE_TYPE BusType , ULONG BusNumber , PKEY_VALUE_FULL_INFORMATION *BusInformation , CONFIGURATION_TYPE ControllerType , ULONG ControllerNumber , PKEY_VALUE_FULL_INFORMATION *ControllerInformation , CONFIGURATION_TYPE PeripheralType , ULONG PeripheralNumber , PKEY_VALUE_FULL_INFORMATION *PeripheralInformation )
{ PDISKETTE_EXTENSION disketteExtension ;
ULONG i ;
PCM_FULL_RESOURCE_DESCRIPTOR peripheralData ;
NTSTATUS ntStatus ;
PCM_PARTIAL_RESOURCE_DESCRIPTOR partial ;
PCM_FLOPPY_DEVICE_DATA fDeviceData ;
UCHAR driveType ;
PDRIVE_MEDIA_CONSTANTS biosDriveMediaConstants ;
int NON_DET ;
	disketteExtension = (DISKETTE_EXTENSION *)Context;
	if((*(PeripheralInformation + 1) + (*(PeripheralInformation + 1))->DataLength) == 0) {
		return (-1073741811L);
		/* END OF PATH at func_FlConfigCallBack@p12#1 */
	}
	else if((*(PeripheralInformation + 1) + (*(PeripheralInformation + 1))->DataLength) > 0) {
L1:;
		peripheralData = (struct _CM_FULL_RESOURCE_DESCRIPTOR *)((UCHAR *)*(PeripheralInformation + 1) + (*(PeripheralInformation + 1))->DataOffset);
		i = 0UL;
L2:;
L3:;
		if(i >= peripheralData->PartialResourceList.Count) {
L4:;
			return (0L);
			/* END OF PATH at func_FlConfigCallBack@p77#1 */
		}
		else {
			partial = & peripheralData->PartialResourceList.PartialDescriptors[i];
			if(partial->Type == 5) {
				biosDriveMediaConstants = & disketteExtension->BiosDriveMediaConstants;
				fDeviceData = (struct _CM_FLOPPY_DEVICE_DATA *)(partial + 1);
				if(fDeviceData->MaxDensity == 360) {
					driveType = (unsigned char)0;
L5:;
					disketteExtension->DriveType = driveType;
					*biosDriveMediaConstants = *(DriveMediaConstants + (DriveMediaLimits + driveType)->HighestDriveMediaType);
					if(fDeviceData->Version >= 2) {
						biosDriveMediaConstants->StepRateHeadUnloadTime = fDeviceData->StepRateHeadUnloadTime;
						biosDriveMediaConstants->HeadLoadTime = fDeviceData->HeadLoadTime;
						biosDriveMediaConstants->MotorOffTime = fDeviceData->MotorOffTime;
						biosDriveMediaConstants->SectorLengthCode = fDeviceData->SectorLengthCode;
						if(fDeviceData->SectorPerTrack == 0) {
							return (0L);
							/* END OF PATH at func_FlConfigCallBack@p58#1 */
						}
						else if(fDeviceData->SectorPerTrack < 0) {
L6:;
							if(fDeviceData->MaxDensity == 0UL) {
								return (0L);
								/* END OF PATH at func_FlConfigCallBack@p61#1 */
							}
							else if(fDeviceData->MaxDensity < 0UL) {
L7:;
								biosDriveMediaConstants->SectorsPerTrack = fDeviceData->SectorPerTrack;
								biosDriveMediaConstants->ReadWriteGapLength = fDeviceData->ReadWriteGapLength;
								biosDriveMediaConstants->FormatGapLength = fDeviceData->FormatGapLength;
								biosDriveMediaConstants->FormatFillCharacter = fDeviceData->FormatFillCharacter;
								biosDriveMediaConstants->HeadSettleTime = fDeviceData->HeadSettleTime;
								biosDriveMediaConstants->MotorSettleTimeRead = (unsigned short )(((int )fDeviceData->MotorSettleTime * 1000) / 8);
								biosDriveMediaConstants->MotorSettleTimeWrite = (unsigned short )(((int )fDeviceData->MotorSettleTime * 1000) / 8);
								if(fDeviceData->MaximumTrackValue == 0) {
									return (0L);
									/* END OF PATH at func_FlConfigCallBack@p71#1 */
								}
								else if(fDeviceData->MaximumTrackValue < 0) {
L8:;
									biosDriveMediaConstants->MaximumTrack = fDeviceData->MaximumTrackValue;
									biosDriveMediaConstants->DataLength = fDeviceData->DataTransferLength;
L9:;
									i = i + 1UL;
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
						else {
							goto L6;
						}
					}
					else {
						goto L9;
					}
				}
				else if(fDeviceData->MaxDensity == 1200) {
					driveType = (unsigned char)1;
					goto L5;
				}
				else if(fDeviceData->MaxDensity == 1185) {
					driveType = (unsigned char)1;
					goto L5;
				}
				else if(fDeviceData->MaxDensity == 1423) {
					driveType = (unsigned char)3;
					goto L5;
				}
				else if(fDeviceData->MaxDensity == 1440) {
					driveType = (unsigned char)3;
					goto L5;
				}
				else if(fDeviceData->MaxDensity == 2880) {
					driveType = (unsigned char)4;
					goto L5;
				}
				else if(fDeviceData->MaxDensity == 1201) {
					if(NON_DET > 0) {
L10:;
						driveType = (unsigned char)5;
						goto L5;
					}
					else if(NON_DET < 0) {
						goto L10;
					}
					else {
L11:;
						driveType = (unsigned char)1;
						goto L5;
					}
				}
				else if(fDeviceData->MaxDensity < 360) {
					goto L11;
				}
				else if(fDeviceData->MaxDensity > 360 && fDeviceData->MaxDensity < 1185) {
					goto L11;
				}
				else if(fDeviceData->MaxDensity > 1185 && fDeviceData->MaxDensity < 1200) {
					goto L11;
				}
				else if(fDeviceData->MaxDensity > 1200 && fDeviceData->MaxDensity < 1201) {
					goto L11;
				}
				else if(fDeviceData->MaxDensity > 1201 && fDeviceData->MaxDensity < 1423) {
					goto L11;
				}
				else if(fDeviceData->MaxDensity > 1423 && fDeviceData->MaxDensity < 1440) {
					goto L11;
				}
				else if(fDeviceData->MaxDensity > 1440 && fDeviceData->MaxDensity < 2880) {
					goto L11;
				}
				else {
					goto L11;
				}
			}
			else if(partial->Type < 5) {
				goto L9;
			}
			else {
				goto L9;
			}
		}
	}
	else {
		goto L1;
	}
}

NTSTATUS FlInitializeControllerHardware(PDISKETTE_EXTENSION DisketteExtension )
{ NTSTATUS ntStatus ;
	ntStatus = FlFdcDeviceIo(DisketteExtension->TargetObject, (unsigned long )(((7 << 16) | (773 << 2)) | 3), (void *)0);
	if(ntStatus >= 0L) {
		if(DisketteExtension->PerpendicularMode < 0) {
L1:;
			DisketteExtension->FifoBuffer[0] = (unsigned char)21;
			DisketteExtension->FifoBuffer[1] = (unsigned char )(128 | ((int )DisketteExtension->PerpendicularMode << 2));
			ntStatus = FlIssueCommand(DisketteExtension, DisketteExtension->FifoBuffer, DisketteExtension->FifoBuffer, (struct _MDL *)((void *)0), 0UL, 0UL);
L2:;
			return (ntStatus);
			/* END OF PATH at func_FlInitializeControllerHardware@p8#1 */
		}
		else if(DisketteExtension->PerpendicularMode > 0) {
			goto L1;
		}
		else {
			goto L2;
		}
	}
	else {
		goto L2;
	}
}

NTSTATUS FlRecalibrateDrive(PDISKETTE_EXTENSION DisketteExtension )
{ NTSTATUS ntStatus ;
UCHAR recalibrateCount ;
UCHAR fifoBuffer[2] ;
int NONDET_1 ;
	recalibrateCount = (unsigned char)0;
	ntStatus = FlRecalibrateDriveAbstraction();
L1:;
L2:;
	DisketteExtension->FifoBuffer[0] = (unsigned char)11;
	DisketteExtension->FifoBuffer[1] = DisketteExtension->DeviceUnit;
	ntStatus = FlIssueCommand(DisketteExtension, DisketteExtension->FifoBuffer, DisketteExtension->FifoBuffer, (struct _MDL *)((void *)0), 0UL, 0UL);
	if(ntStatus >= 0L) {
		if(NONDET_1 > 0) {
L3:;
			fifoBuffer[0] = DisketteExtension->FifoBuffer[0];
			fifoBuffer[1] = DisketteExtension->FifoBuffer[1];
			DisketteExtension->FifoBuffer[0] = (unsigned char)14;
			DisketteExtension->FifoBuffer[1] = DisketteExtension->DeviceUnit;
			ntStatus = FlIssueCommand(DisketteExtension, DisketteExtension->FifoBuffer, DisketteExtension->FifoBuffer, (struct _MDL *)((void *)0), 0UL, 0UL);
			if(ntStatus < 0L) {
				return (ntStatus);
				/* END OF PATH at func_FlRecalibrateDrive@p21#1 */
			}
			else {
				DisketteExtension->FifoBuffer[0] = fifoBuffer[0];
				DisketteExtension->FifoBuffer[1] = fifoBuffer[1];
L4:;
				if((DisketteExtension->FifoBuffer[0] & 32) == 0) {
					DisketteExtension->HardwareFailed = (unsigned char)1;
					ntStatus = -1073741464L;
L5:;
					recalibrateCount = (UCHAR )((int )recalibrateCount + 1);
					if(ntStatus < 0L) {
L6:;
						if(recalibrateCount >= 2) {
L7:;
L8:;
							return (ntStatus);
							/* END OF PATH at func_FlRecalibrateDrive@p39#1 */
						}
						else {
							goto L2;
						}
					}
					else {
						/* FALSE PATH */ 
					}
				}
				else if((DisketteExtension->FifoBuffer[0] & 32) > 0) {
L9:;
					if(DisketteExtension->FifoBuffer[1] < 0) {
L10:;
						DisketteExtension->HardwareFailed = (unsigned char)1;
						ntStatus = -1073741464L;
						goto L5;
					}
					else if(DisketteExtension->FifoBuffer[1] > 0) {
						goto L10;
					}
					else {
						recalibrateCount = (UCHAR )((int )recalibrateCount + 1);
						if((ntStatus >= 0L)) {
							/* END OF PATH at func_FlRecalibrateDrive@p7#3 */
						}
						else {
							/* FALSE PATH */ 
						}
					}
				}
				else {
					goto L9;
				}
			}
		}
		else if(NONDET_1 < 0) {
			goto L3;
		}
		else {
			goto L4;
		}
	}
	else {
		recalibrateCount = (UCHAR )((int )recalibrateCount + 1);
		if(ntStatus < 0L) {
			goto L6;
		}
		else {
			/* FALSE PATH */ 
		}
	}
}

NTSTATUS FlDatarateSpecifyConfigure(PDISKETTE_EXTENSION DisketteExtension )
{ NTSTATUS ntStatus ;
NTSTATUS temp__1 ;
	ntStatus = 0L;
	if(DisketteExtension->ControllerConfigurable > 0) {
L1:;
		DisketteExtension->FifoBuffer[0] = (unsigned char)17;
		DisketteExtension->FifoBuffer[1] = (unsigned char)0;
		DisketteExtension->FifoBuffer[2] = (unsigned char)15;
		DisketteExtension->FifoBuffer[2] = (unsigned char )((int )DisketteExtension->FifoBuffer[2] + 16);
		if(DisketteExtension->DriveMediaConstants.CylinderShift == 0) {
			DisketteExtension->FifoBuffer[2] = (unsigned char )((int )DisketteExtension->FifoBuffer[2] + 64);
L2:;
			DisketteExtension->FifoBuffer[3] = (unsigned char)0;
			ntStatus = FlIssueCommand(DisketteExtension, DisketteExtension->FifoBuffer, DisketteExtension->FifoBuffer, (struct _MDL *)((void *)0), 0UL, 0UL);
			if(ntStatus == -1073741661L) {
				DisketteExtension->ControllerConfigurable = (unsigned char)0;
				ntStatus = 0L;
L3:;
				if(ntStatus >= 0L) {
L4:;
					DisketteExtension->FifoBuffer[0] = (unsigned char)13;
					DisketteExtension->FifoBuffer[1] = DisketteExtension->DriveMediaConstants.StepRateHeadUnloadTime;
					DisketteExtension->FifoBuffer[2] = DisketteExtension->DriveMediaConstants.HeadLoadTime;
					ntStatus = FlIssueCommand(DisketteExtension, DisketteExtension->FifoBuffer, DisketteExtension->FifoBuffer, (struct _MDL *)((void *)0), 0UL, 0UL);
					if(ntStatus >= 0L) {
						ntStatus = FlFdcDeviceIo(DisketteExtension->TargetObject, (unsigned long )(((7 << 16) | (777 << 2)) | 3), (void *)(& DisketteExtension->DriveMediaConstants.DataTransferRate));
						if(ntStatus >= 0L) {
							ntStatus = FlRecalibrateDrive(DisketteExtension);
L5:;
							if(ntStatus >= 0L) {
								DisketteExtension->LastDriveMediaType = DisketteExtension->DriveMediaType;
L6:;
								return (ntStatus);
								/* END OF PATH at func_FlDatarateSpecifyConfigure@p33#1 */
							}
							else {
								DisketteExtension->LastDriveMediaType = (enum _DRIVE_MEDIA_TYPE )0;
								goto L6;
							}
						}
						else {
							goto L5;
						}
					}
					else {
						goto L5;
					}
				}
				else {
					/* FALSE PATH */ 
				}
			}
			else if(ntStatus < -1073741661L) {
				if(ntStatus < 0L) {
					if(ntStatus < -1073741661L) {
						goto L5;
					}
					else if(ntStatus == -1073741661L) {
						/* FALSE PATH */ 
					}
					else {
						/* FALSE PATH */ 
					}
				}
				else {
					/* FALSE PATH */ 
				}
			}
			else {
				if(ntStatus >= 0L) {
					goto L4;
				}
				else {
					if(ntStatus > -1073741661L) {
						goto L5;
					}
					else if(ntStatus == -1073741661L) {
						/* FALSE PATH */ 
					}
					else {
						/* FALSE PATH */ 
					}
				}
			}
		}
		else if(DisketteExtension->DriveMediaConstants.CylinderShift > 0) {
			goto L2;
		}
		else {
			goto L2;
		}
	}
	else if(DisketteExtension->ControllerConfigurable < 0) {
		goto L1;
	}
	else {
		goto L3;
	}
}

NTSTATUS FlStartDrive(PDISKETTE_EXTENSION DisketteExtension , PIRP Irp , BOOLEAN WriteOperation , BOOLEAN SetUpMedia , BOOLEAN IgnoreChange )
{ LARGE_INTEGER delay ;
BOOLEAN motorStarted ;
BOOLEAN diskChanged ;
UCHAR driveStatus ;
NTSTATUS ntStatus ;
FDC_ENABLE_PARMS fdcEnableParms ;
FDC_DISK_CHANGE_PARMS fdcDiskChangeParms ;
int NON_DET_1 ;
int NON_DET_2 ;
int NON_DET_3 ;
int NON_DET_4 ;
int NONDET5 ;
int temp__1 ;
	ntStatus = 0L;
	*(DriveMediaConstants + (DriveMediaLimits + DisketteExtension->DriveType)->HighestDriveMediaType) = DisketteExtension->BiosDriveMediaConstants;
	if(DisketteExtension->MediaType == 4294967295U) {
		DisketteExtension->DriveMediaConstants = *(DriveMediaConstants + 0);
L1:;
		fdcEnableParms.DriveOnValue = DisketteExtension->DriveOnValue;
		if(WriteOperation > 0) {
			fdcEnableParms.TimeToWait = DisketteExtension->DriveMediaConstants.MotorSettleTimeWrite;
			ntStatus = FlFdcDeviceIo(DisketteExtension->TargetObject, (unsigned long )(((7 << 16) | (774 << 2)) | 3), (void *)(& fdcEnableParms));
			motorStarted = fdcEnableParms.MotorStarted;
			if(ntStatus >= 0L) {
				fdcDiskChangeParms.DriveOnValue = DisketteExtension->DriveOnValue;
				ntStatus = FlFdcDeviceIo(DisketteExtension->TargetObject, (unsigned long )(((7 << 16) | (776 << 2)) | 3), (void *)(& fdcDiskChangeParms));
				driveStatus = fdcDiskChangeParms.DriveStatus;
L2:;
				if(ntStatus < 0L) {
L3:;
					return (ntStatus);
					/* END OF PATH at func_FlStartDrive@p33#1 */
				}
				else {
					if(DisketteExtension->DriveType == 0) {
						if(motorStarted > 0) {
L4:;
L5:;
							DisketteExtension->MediaType = (enum _MEDIA_TYPE )-1;
							if(((DisketteExtension->DeviceObject)->Vpb)->Flags & 1 > 0) {
L6:;
								if(Irp > 0) {
L7:;
									IoSetHardErrorOrVerifyDevice(Irp, DisketteExtension->DeviceObject);
L8:;
									(DisketteExtension->DeviceObject)->Flags = (DisketteExtension->DeviceObject)->Flags | 2UL;
L9:;
									if(DisketteExtension->DriveType < 0) {
L10:;
										if(NON_DET_1 > 0) {
L11:;
											DisketteExtension->FifoBuffer[0] = (unsigned char)14;
											DisketteExtension->FifoBuffer[1] = DisketteExtension->DeviceUnit;
											ntStatus = FlIssueCommand(DisketteExtension, DisketteExtension->FifoBuffer, DisketteExtension->FifoBuffer, (struct _MDL *)((void *)0), 0UL, 0UL);
											if(ntStatus < 0L) {
L12:;
												return (ntStatus);
												/* END OF PATH at func_FlStartDrive@p56#1 */
											}
											else {
												if(DisketteExtension->FifoBuffer[0] & 32 > 0) {
L13:;
													driveStatus = (unsigned char)127;
L14:;
													if(driveStatus & 128 > 0) {
L15:;
														if(((DisketteExtension->DeviceObject)->Vpb)->Flags & 1 > 0) {
L16:;
															(DisketteExtension->DeviceObject)->Flags = (DisketteExtension->DeviceObject)->Flags & (unsigned long )NONDET5;
L17:;
															return (-1073741805L);
															/* END OF PATH at func_FlStartDrive@p65#1 */
														}
														else if(((DisketteExtension->DeviceObject)->Vpb)->Flags & 1 < 0) {
															goto L16;
														}
														else {
															goto L17;
														}
													}
													else if(driveStatus & 128 < 0) {
														goto L15;
													}
													else {
L18:;
														DisketteExtension->FifoBuffer[0] = (unsigned char)16;
														DisketteExtension->FifoBuffer[1] = DisketteExtension->DeviceUnit;
														DisketteExtension->FifoBuffer[2] = (unsigned char)1;
														ntStatus = FlIssueCommand(DisketteExtension, DisketteExtension->FifoBuffer, DisketteExtension->FifoBuffer, (struct _MDL *)((void *)0), 0UL, 0UL);
														if(ntStatus < 0L) {
L19:;
															return (ntStatus);
															/* END OF PATH at func_FlStartDrive@p72#1 */
														}
														else {
															if((DisketteExtension->FifoBuffer[0] & 32) == 0) {
L20:;
																DisketteExtension->HardwareFailed = (unsigned char)1;
																return (-1073741464L);
																/* END OF PATH at func_FlStartDrive@p77#1 */
															}
															else if((DisketteExtension->FifoBuffer[0] & 32) > 0) {
L21:;
																if(DisketteExtension->FifoBuffer[1] < 1) {
L22:;
																	DisketteExtension->HardwareFailed = (unsigned char)1;
																	return (-1073741464L);
																	/* END OF PATH at func_FlStartDrive@p82#1 */
																}
																else if(DisketteExtension->FifoBuffer[1] > 1) {
																	goto L22;
																}
																else {
																	DisketteExtension->FifoBuffer[0] = (unsigned char)16;
																	DisketteExtension->FifoBuffer[1] = DisketteExtension->DeviceUnit;
																	DisketteExtension->FifoBuffer[2] = (unsigned char)0;
																	delay.__annonCompField1.LowPart = 4294966396UL;
																	delay.__annonCompField1.HighPart = -1L;
																	KeDelayExecutionThread((char)0, (unsigned char)0, & delay);
																	ntStatus = FlIssueCommand(DisketteExtension, DisketteExtension->FifoBuffer, DisketteExtension->FifoBuffer, (struct _MDL *)((void *)0), 0UL, 0UL);
																	delay.__annonCompField1.LowPart = 4294967291UL;
																	delay.__annonCompField1.HighPart = -1L;
																	KeDelayExecutionThread((char)0, (unsigned char)0, & delay);
																	if(ntStatus < 0L) {
L23:;
																		return (ntStatus);
																		/* END OF PATH at func_FlStartDrive@p95#1 */
																	}
																	else {
																		if((DisketteExtension->FifoBuffer[0] & 32) == 0) {
L24:;
																			DisketteExtension->HardwareFailed = (unsigned char)1;
																			return (-1073741464L);
																			/* END OF PATH at func_FlStartDrive@p100#1 */
																		}
																		else if((DisketteExtension->FifoBuffer[0] & 32) > 0) {
L25:;
																			if(DisketteExtension->FifoBuffer[1] < 0) {
L26:;
																				DisketteExtension->HardwareFailed = (unsigned char)1;
																				return (-1073741464L);
																				/* END OF PATH at func_FlStartDrive@p105#1 */
																			}
																			else if(DisketteExtension->FifoBuffer[1] > 0) {
																				goto L26;
																			}
																			else {
																				if(NON_DET_2 > 0) {
L27:;
																					DisketteExtension->FifoBuffer[0] = (unsigned char)14;
																					DisketteExtension->FifoBuffer[1] = DisketteExtension->DeviceUnit;
																					ntStatus = FlIssueCommand(DisketteExtension, DisketteExtension->FifoBuffer, DisketteExtension->FifoBuffer, (struct _MDL *)((void *)0), 0UL, 0UL);
																					if(ntStatus < 0L) {
L28:;
																						return (ntStatus);
																						/* END OF PATH at func_FlStartDrive@p112#1 */
																					}
																					else {
																						if(DisketteExtension->FifoBuffer[0] & 32 > 0) {
L29:;
																							driveStatus = (unsigned char)127;
L30:;
L31:;
																							if(driveStatus & 128 > 0) {
L32:;
																								if(((DisketteExtension->DeviceObject)->Vpb)->Flags & 1 > 0) {
L33:;
																									(DisketteExtension->DeviceObject)->Flags = (DisketteExtension->DeviceObject)->Flags & (unsigned long )NONDET5;
L34:;
																									return (-1073741805L);
																									/* END OF PATH at func_FlStartDrive@p127#1 */
																								}
																								else if(((DisketteExtension->DeviceObject)->Vpb)->Flags & 1 < 0) {
																									goto L33;
																								}
																								else {
																									goto L34;
																								}
																							}
																							else if(driveStatus & 128 < 0) {
																								goto L32;
																							}
																							else {
L35:;
																								if(IgnoreChange == 0) {
L36:;
																									if(((DisketteExtension->DeviceObject)->Vpb)->Flags & 1 > 0) {
L37:;
																										return (-2147483626L);
																										/* END OF PATH at func_FlStartDrive@p131#1 */
																									}
																									else if(((DisketteExtension->DeviceObject)->Vpb)->Flags & 1 < 0) {
																										goto L37;
																									}
																									else {
																										return (-1073741435L);
																										/* END OF PATH at func_FlStartDrive@p134#1 */
																									}
																								}
																								else if(IgnoreChange < 0) {
L38:;
L39:;
																									if(SetUpMedia > 0) {
L40:;
																										if(DisketteExtension->MediaType == 4294967295U) {
																											ntStatus = FlDetermineMediaType(DisketteExtension);
L41:;
																											if(WriteOperation > 0) {
L42:;
																												if(ntStatus >= 0L) {
																													DisketteExtension->FifoBuffer[0] = (unsigned char)14;
																													DisketteExtension->FifoBuffer[1] = DisketteExtension->DeviceUnit;
																													ntStatus = FlIssueCommand(DisketteExtension, DisketteExtension->FifoBuffer, DisketteExtension->FifoBuffer, (struct _MDL *)((void *)0), 0UL, 0UL);
																													if(ntStatus < 0L) {
																														return (ntStatus);
																														/* END OF PATH at func_FlStartDrive@p158#1 */
																													}
																													else {
																														if(NON_DET_4 > 0) {
L43:;
																															if((DisketteExtension->FifoBuffer[0] & 32) == 0) {
																																return (-1073741805L);
																																/* END OF PATH at func_FlStartDrive@p162#1 */
																															}
																															else if((DisketteExtension->FifoBuffer[0] & 32) > 0) {
L44:;
																																if(DisketteExtension->FifoBuffer[0] & 64 > 0) {
L45:;
																																	return (-1073741662L);
																																	/* END OF PATH at func_FlStartDrive@p165#1 */
																																}
																																else if(DisketteExtension->FifoBuffer[0] & 64 < 0) {
																																	goto L45;
																																}
																																else {
L46:;
																																	return (ntStatus);
																																	/* END OF PATH at func_FlStartDrive@p167#1 */
																																}
																															}
																															else {
																																goto L44;
																															}
																														}
																														else if(NON_DET_4 < 0) {
																															goto L43;
																														}
																														else {
																															goto L44;
																														}
																													}
																												}
																												else {
																													goto L46;
																												}
																											}
																											else if(WriteOperation < 0) {
																												/* FALSE PATH */ 
																											}
																											else {
																												/* FALSE PATH */ 
																											}
																										}
																										else if(DisketteExtension->MediaType < 4294967295U) {
L47:;
																											if(DisketteExtension->MediaType == 0U) {
L48:;
																												return (-1073741804L);
																												/* END OF PATH at func_FlStartDrive@p147#1 */
																											}
																											else if(DisketteExtension->MediaType < 0U) {
L49:;
																												if(DisketteExtension->DriveMediaType < DisketteExtension->LastDriveMediaType) {
																													ntStatus = FlDatarateSpecifyConfigure(DisketteExtension);
																													goto L41;
																												}
																												else if(DisketteExtension->DriveMediaType > DisketteExtension->LastDriveMediaType) {
																													ntStatus = FlDatarateSpecifyConfigure(DisketteExtension);
																													goto L41;
																												}
																												else {
																													goto L41;
																												}
																											}
																											else {
																												goto L49;
																											}
																										}
																										else {
																											goto L47;
																										}
																									}
																									else if(SetUpMedia < 0) {
																										goto L40;
																									}
																									else {
																										goto L41;
																									}
																								}
																								else {
																									goto L38;
																								}
																							}
																						}
																						else if(DisketteExtension->FifoBuffer[0] & 32 < 0) {
																							goto L29;
																						}
																						else {
																							driveStatus = (unsigned char)128;
																							goto L30;
																						}
																					}
																				}
																				else if(NON_DET_2 < 0) {
																					goto L27;
																				}
																				else {
																					ntStatus = FlFdcDeviceIo(DisketteExtension->TargetObject, (unsigned long )(((7 << 16) | (776 << 2)) | 3), (void *)(& fdcDiskChangeParms));
																					driveStatus = fdcDiskChangeParms.DriveStatus;
																					if(ntStatus < 0L) {
L50:;
																						return (ntStatus);
																						/* END OF PATH at func_FlStartDrive@p122#1 */
																					}
																					else {
																						goto L31;
																					}
																				}
																			}
																		}
																		else {
																			goto L25;
																		}
																	}
																}
															}
															else {
																goto L21;
															}
														}
													}
												}
												else if(DisketteExtension->FifoBuffer[0] & 32 < 0) {
													goto L13;
												}
												else {
													driveStatus = (unsigned char)128;
													goto L14;
												}
											}
										}
										else if(NON_DET_1 < 0) {
											goto L11;
										}
										else {
											goto L18;
										}
									}
									else if(DisketteExtension->DriveType > 0) {
										goto L10;
									}
									else {
										goto L35;
									}
								}
								else if(Irp < 0) {
									goto L7;
								}
								else {
									goto L8;
								}
							}
							else if(((DisketteExtension->DeviceObject)->Vpb)->Flags & 1 < 0) {
								goto L6;
							}
							else {
								goto L9;
							}
						}
						else if(motorStarted < 0) {
							goto L4;
						}
						else {
L51:;
							if(DisketteExtension->DriveType < 0) {
L52:;
								if(driveStatus & 128 > 0) {
									goto L5;
								}
								else if(driveStatus & 128 < 0) {
									goto L5;
								}
								else {
L53:;
									if(NON_DET_3 > 0) {
										FlHdbit(DisketteExtension);
										goto L39;
									}
									else if(NON_DET_3 < 0) {
										FlHdbit(DisketteExtension);
										goto L39;
									}
									else {
										goto L39;
									}
								}
							}
							else if(DisketteExtension->DriveType > 0) {
								goto L52;
							}
							else {
								goto L53;
							}
						}
					}
					else if(DisketteExtension->DriveType < 0) {
						goto L51;
					}
					else {
						goto L51;
					}
				}
			}
			else {
				goto L2;
			}
		}
		else if(WriteOperation < 0) {
			fdcEnableParms.TimeToWait = DisketteExtension->DriveMediaConstants.MotorSettleTimeWrite;
			ntStatus = FlFdcDeviceIo(DisketteExtension->TargetObject, (unsigned long )(((7 << 16) | (774 << 2)) | 3), (void *)(& fdcEnableParms));
			motorStarted = fdcEnableParms.MotorStarted;
			if(ntStatus >= 0L) {
				fdcDiskChangeParms.DriveOnValue = DisketteExtension->DriveOnValue;
				ntStatus = FlFdcDeviceIo(DisketteExtension->TargetObject, (unsigned long )(((7 << 16) | (776 << 2)) | 3), (void *)(& fdcDiskChangeParms));
				driveStatus = fdcDiskChangeParms.DriveStatus;
L54:;
				if(ntStatus < 0L) {
					goto L3;
				}
				else {
					if(DisketteExtension->DriveType == 0) {
						if(motorStarted > 0) {
L55:;
L56:;
							DisketteExtension->MediaType = (enum _MEDIA_TYPE )-1;
							if(((DisketteExtension->DeviceObject)->Vpb)->Flags & 1 > 0) {
L57:;
								if(Irp > 0) {
L58:;
									IoSetHardErrorOrVerifyDevice(Irp, DisketteExtension->DeviceObject);
L59:;
									(DisketteExtension->DeviceObject)->Flags = (DisketteExtension->DeviceObject)->Flags | 2UL;
L60:;
									if(DisketteExtension->DriveType < 0) {
L61:;
										if(NON_DET_1 > 0) {
L62:;
											DisketteExtension->FifoBuffer[0] = (unsigned char)14;
											DisketteExtension->FifoBuffer[1] = DisketteExtension->DeviceUnit;
											ntStatus = FlIssueCommand(DisketteExtension, DisketteExtension->FifoBuffer, DisketteExtension->FifoBuffer, (struct _MDL *)((void *)0), 0UL, 0UL);
											if(ntStatus < 0L) {
												goto L12;
											}
											else {
												if(DisketteExtension->FifoBuffer[0] & 32 > 0) {
L63:;
													driveStatus = (unsigned char)127;
L64:;
													if(driveStatus & 128 > 0) {
														goto L15;
													}
													else if(driveStatus & 128 < 0) {
														goto L15;
													}
													else {
L65:;
														DisketteExtension->FifoBuffer[0] = (unsigned char)16;
														DisketteExtension->FifoBuffer[1] = DisketteExtension->DeviceUnit;
														DisketteExtension->FifoBuffer[2] = (unsigned char)1;
														ntStatus = FlIssueCommand(DisketteExtension, DisketteExtension->FifoBuffer, DisketteExtension->FifoBuffer, (struct _MDL *)((void *)0), 0UL, 0UL);
														if(ntStatus < 0L) {
															goto L19;
														}
														else {
															if((DisketteExtension->FifoBuffer[0] & 32) == 0) {
																goto L20;
															}
															else if((DisketteExtension->FifoBuffer[0] & 32) > 0) {
L66:;
																if(DisketteExtension->FifoBuffer[1] < 1) {
																	goto L22;
																}
																else if(DisketteExtension->FifoBuffer[1] > 1) {
																	goto L22;
																}
																else {
																	DisketteExtension->FifoBuffer[0] = (unsigned char)16;
																	DisketteExtension->FifoBuffer[1] = DisketteExtension->DeviceUnit;
																	DisketteExtension->FifoBuffer[2] = (unsigned char)0;
																	delay.__annonCompField1.LowPart = 4294966396UL;
																	delay.__annonCompField1.HighPart = -1L;
																	KeDelayExecutionThread((char)0, (unsigned char)0, & delay);
																	ntStatus = FlIssueCommand(DisketteExtension, DisketteExtension->FifoBuffer, DisketteExtension->FifoBuffer, (struct _MDL *)((void *)0), 0UL, 0UL);
																	delay.__annonCompField1.LowPart = 4294967291UL;
																	delay.__annonCompField1.HighPart = -1L;
																	KeDelayExecutionThread((char)0, (unsigned char)0, & delay);
																	if(ntStatus < 0L) {
																		goto L23;
																	}
																	else {
																		if((DisketteExtension->FifoBuffer[0] & 32) == 0) {
																			goto L24;
																		}
																		else if((DisketteExtension->FifoBuffer[0] & 32) > 0) {
L67:;
																			if(DisketteExtension->FifoBuffer[1] < 0) {
																				goto L26;
																			}
																			else if(DisketteExtension->FifoBuffer[1] > 0) {
																				goto L26;
																			}
																			else {
																				if(NON_DET_2 > 0) {
L68:;
																					DisketteExtension->FifoBuffer[0] = (unsigned char)14;
																					DisketteExtension->FifoBuffer[1] = DisketteExtension->DeviceUnit;
																					ntStatus = FlIssueCommand(DisketteExtension, DisketteExtension->FifoBuffer, DisketteExtension->FifoBuffer, (struct _MDL *)((void *)0), 0UL, 0UL);
																					if(ntStatus < 0L) {
																						goto L28;
																					}
																					else {
																						if(DisketteExtension->FifoBuffer[0] & 32 > 0) {
L69:;
																							driveStatus = (unsigned char)127;
L70:;
L71:;
																							if(driveStatus & 128 > 0) {
																								goto L32;
																							}
																							else if(driveStatus & 128 < 0) {
																								goto L32;
																							}
																							else {
L72:;
																								if(IgnoreChange == 0) {
																									goto L36;
																								}
																								else if(IgnoreChange < 0) {
L73:;
L74:;
																									if(SetUpMedia > 0) {
L75:;
																										if(DisketteExtension->MediaType == 4294967295U) {
																											ntStatus = FlDetermineMediaType(DisketteExtension);
L76:;
																											if(WriteOperation < 0) {
																												goto L42;
																											}
																											else if(WriteOperation > 0) {
																												/* FALSE PATH */ 
																											}
																											else {
																												/* FALSE PATH */ 
																											}
																										}
																										else if(DisketteExtension->MediaType < 4294967295U) {
L77:;
																											if(DisketteExtension->MediaType == 0U) {
																												goto L48;
																											}
																											else if(DisketteExtension->MediaType < 0U) {
L78:;
																												if(DisketteExtension->DriveMediaType < DisketteExtension->LastDriveMediaType) {
																													ntStatus = FlDatarateSpecifyConfigure(DisketteExtension);
																													goto L76;
																												}
																												else if(DisketteExtension->DriveMediaType > DisketteExtension->LastDriveMediaType) {
																													ntStatus = FlDatarateSpecifyConfigure(DisketteExtension);
																													goto L76;
																												}
																												else {
																													goto L76;
																												}
																											}
																											else {
																												goto L78;
																											}
																										}
																										else {
																											goto L77;
																										}
																									}
																									else if(SetUpMedia < 0) {
																										goto L75;
																									}
																									else {
																										goto L76;
																									}
																								}
																								else {
																									goto L73;
																								}
																							}
																						}
																						else if(DisketteExtension->FifoBuffer[0] & 32 < 0) {
																							goto L69;
																						}
																						else {
																							driveStatus = (unsigned char)128;
																							goto L70;
																						}
																					}
																				}
																				else if(NON_DET_2 < 0) {
																					goto L68;
																				}
																				else {
																					ntStatus = FlFdcDeviceIo(DisketteExtension->TargetObject, (unsigned long )(((7 << 16) | (776 << 2)) | 3), (void *)(& fdcDiskChangeParms));
																					driveStatus = fdcDiskChangeParms.DriveStatus;
																					if(ntStatus < 0L) {
																						goto L50;
																					}
																					else {
																						goto L71;
																					}
																				}
																			}
																		}
																		else {
																			goto L67;
																		}
																	}
																}
															}
															else {
																goto L66;
															}
														}
													}
												}
												else if(DisketteExtension->FifoBuffer[0] & 32 < 0) {
													goto L63;
												}
												else {
													driveStatus = (unsigned char)128;
													goto L64;
												}
											}
										}
										else if(NON_DET_1 < 0) {
											goto L62;
										}
										else {
											goto L65;
										}
									}
									else if(DisketteExtension->DriveType > 0) {
										goto L61;
									}
									else {
										goto L72;
									}
								}
								else if(Irp < 0) {
									goto L58;
								}
								else {
									goto L59;
								}
							}
							else if(((DisketteExtension->DeviceObject)->Vpb)->Flags & 1 < 0) {
								goto L57;
							}
							else {
								goto L60;
							}
						}
						else if(motorStarted < 0) {
							goto L55;
						}
						else {
L79:;
							if(DisketteExtension->DriveType < 0) {
L80:;
								if(driveStatus & 128 > 0) {
									goto L56;
								}
								else if(driveStatus & 128 < 0) {
									goto L56;
								}
								else {
L81:;
									if(NON_DET_3 > 0) {
										FlHdbit(DisketteExtension);
										goto L74;
									}
									else if(NON_DET_3 < 0) {
										FlHdbit(DisketteExtension);
										goto L74;
									}
									else {
										goto L74;
									}
								}
							}
							else if(DisketteExtension->DriveType > 0) {
								goto L80;
							}
							else {
								goto L81;
							}
						}
					}
					else if(DisketteExtension->DriveType < 0) {
						goto L79;
					}
					else {
						goto L79;
					}
				}
			}
			else {
				goto L54;
			}
		}
		else {
			fdcEnableParms.TimeToWait = DisketteExtension->DriveMediaConstants.MotorSettleTimeRead;
			ntStatus = FlFdcDeviceIo(DisketteExtension->TargetObject, (unsigned long )(((7 << 16) | (774 << 2)) | 3), (void *)(& fdcEnableParms));
			motorStarted = fdcEnableParms.MotorStarted;
			if(ntStatus >= 0L) {
				fdcDiskChangeParms.DriveOnValue = DisketteExtension->DriveOnValue;
				ntStatus = FlFdcDeviceIo(DisketteExtension->TargetObject, (unsigned long )(((7 << 16) | (776 << 2)) | 3), (void *)(& fdcDiskChangeParms));
				driveStatus = fdcDiskChangeParms.DriveStatus;
L82:;
				if(ntStatus < 0L) {
					goto L3;
				}
				else {
					if(DisketteExtension->DriveType == 0) {
						if(motorStarted > 0) {
L83:;
L84:;
							DisketteExtension->MediaType = (enum _MEDIA_TYPE )-1;
							if(((DisketteExtension->DeviceObject)->Vpb)->Flags & 1 > 0) {
L85:;
								if(Irp > 0) {
L86:;
									IoSetHardErrorOrVerifyDevice(Irp, DisketteExtension->DeviceObject);
L87:;
									(DisketteExtension->DeviceObject)->Flags = (DisketteExtension->DeviceObject)->Flags | 2UL;
L88:;
									if(DisketteExtension->DriveType < 0) {
L89:;
										if(NON_DET_1 > 0) {
L90:;
											DisketteExtension->FifoBuffer[0] = (unsigned char)14;
											DisketteExtension->FifoBuffer[1] = DisketteExtension->DeviceUnit;
											ntStatus = FlIssueCommand(DisketteExtension, DisketteExtension->FifoBuffer, DisketteExtension->FifoBuffer, (struct _MDL *)((void *)0), 0UL, 0UL);
											if(ntStatus < 0L) {
												goto L12;
											}
											else {
												if(DisketteExtension->FifoBuffer[0] & 32 > 0) {
L91:;
													driveStatus = (unsigned char)127;
L92:;
													if(driveStatus & 128 > 0) {
														goto L15;
													}
													else if(driveStatus & 128 < 0) {
														goto L15;
													}
													else {
L93:;
														DisketteExtension->FifoBuffer[0] = (unsigned char)16;
														DisketteExtension->FifoBuffer[1] = DisketteExtension->DeviceUnit;
														DisketteExtension->FifoBuffer[2] = (unsigned char)1;
														ntStatus = FlIssueCommand(DisketteExtension, DisketteExtension->FifoBuffer, DisketteExtension->FifoBuffer, (struct _MDL *)((void *)0), 0UL, 0UL);
														if(ntStatus < 0L) {
															goto L19;
														}
														else {
															if((DisketteExtension->FifoBuffer[0] & 32) == 0) {
																goto L20;
															}
															else if((DisketteExtension->FifoBuffer[0] & 32) > 0) {
L94:;
																if(DisketteExtension->FifoBuffer[1] < 1) {
																	goto L22;
																}
																else if(DisketteExtension->FifoBuffer[1] > 1) {
																	goto L22;
																}
																else {
																	DisketteExtension->FifoBuffer[0] = (unsigned char)16;
																	DisketteExtension->FifoBuffer[1] = DisketteExtension->DeviceUnit;
																	DisketteExtension->FifoBuffer[2] = (unsigned char)0;
																	delay.__annonCompField1.LowPart = 4294966396UL;
																	delay.__annonCompField1.HighPart = -1L;
																	KeDelayExecutionThread((char)0, (unsigned char)0, & delay);
																	ntStatus = FlIssueCommand(DisketteExtension, DisketteExtension->FifoBuffer, DisketteExtension->FifoBuffer, (struct _MDL *)((void *)0), 0UL, 0UL);
																	delay.__annonCompField1.LowPart = 4294967291UL;
																	delay.__annonCompField1.HighPart = -1L;
																	KeDelayExecutionThread((char)0, (unsigned char)0, & delay);
																	if(ntStatus < 0L) {
																		goto L23;
																	}
																	else {
																		if((DisketteExtension->FifoBuffer[0] & 32) == 0) {
																			goto L24;
																		}
																		else if((DisketteExtension->FifoBuffer[0] & 32) > 0) {
L95:;
																			if(DisketteExtension->FifoBuffer[1] < 0) {
																				goto L26;
																			}
																			else if(DisketteExtension->FifoBuffer[1] > 0) {
																				goto L26;
																			}
																			else {
																				if(NON_DET_2 > 0) {
L96:;
																					DisketteExtension->FifoBuffer[0] = (unsigned char)14;
																					DisketteExtension->FifoBuffer[1] = DisketteExtension->DeviceUnit;
																					ntStatus = FlIssueCommand(DisketteExtension, DisketteExtension->FifoBuffer, DisketteExtension->FifoBuffer, (struct _MDL *)((void *)0), 0UL, 0UL);
																					if(ntStatus < 0L) {
																						goto L28;
																					}
																					else {
																						if(DisketteExtension->FifoBuffer[0] & 32 > 0) {
L97:;
																							driveStatus = (unsigned char)127;
L98:;
L99:;
																							if(driveStatus & 128 > 0) {
																								goto L32;
																							}
																							else if(driveStatus & 128 < 0) {
																								goto L32;
																							}
																							else {
L100:;
																								if(IgnoreChange == 0) {
																									goto L36;
																								}
																								else if(IgnoreChange < 0) {
L101:;
L102:;
																									if(SetUpMedia > 0) {
L103:;
																										if(DisketteExtension->MediaType == 4294967295U) {
																											ntStatus = FlDetermineMediaType(DisketteExtension);
L104:;
																											if(WriteOperation == 0) {
																												goto L46;
																											}
																											else if(WriteOperation > 0) {
																												/* FALSE PATH */ 
																											}
																											else {
																												/* FALSE PATH */ 
																											}
																										}
																										else if(DisketteExtension->MediaType < 4294967295U) {
L105:;
																											if(DisketteExtension->MediaType == 0U) {
																												goto L48;
																											}
																											else if(DisketteExtension->MediaType < 0U) {
L106:;
																												if(DisketteExtension->DriveMediaType < DisketteExtension->LastDriveMediaType) {
																													ntStatus = FlDatarateSpecifyConfigure(DisketteExtension);
																													goto L104;
																												}
																												else if(DisketteExtension->DriveMediaType > DisketteExtension->LastDriveMediaType) {
																													ntStatus = FlDatarateSpecifyConfigure(DisketteExtension);
																													goto L104;
																												}
																												else {
																													goto L104;
																												}
																											}
																											else {
																												goto L106;
																											}
																										}
																										else {
																											goto L105;
																										}
																									}
																									else if(SetUpMedia < 0) {
																										goto L103;
																									}
																									else {
																										goto L104;
																									}
																								}
																								else {
																									goto L101;
																								}
																							}
																						}
																						else if(DisketteExtension->FifoBuffer[0] & 32 < 0) {
																							goto L97;
																						}
																						else {
																							driveStatus = (unsigned char)128;
																							goto L98;
																						}
																					}
																				}
																				else if(NON_DET_2 < 0) {
																					goto L96;
																				}
																				else {
																					ntStatus = FlFdcDeviceIo(DisketteExtension->TargetObject, (unsigned long )(((7 << 16) | (776 << 2)) | 3), (void *)(& fdcDiskChangeParms));
																					driveStatus = fdcDiskChangeParms.DriveStatus;
																					if(ntStatus < 0L) {
																						goto L50;
																					}
																					else {
																						goto L99;
																					}
																				}
																			}
																		}
																		else {
																			goto L95;
																		}
																	}
																}
															}
															else {
																goto L94;
															}
														}
													}
												}
												else if(DisketteExtension->FifoBuffer[0] & 32 < 0) {
													goto L91;
												}
												else {
													driveStatus = (unsigned char)128;
													goto L92;
												}
											}
										}
										else if(NON_DET_1 < 0) {
											goto L90;
										}
										else {
											goto L93;
										}
									}
									else if(DisketteExtension->DriveType > 0) {
										goto L89;
									}
									else {
										goto L100;
									}
								}
								else if(Irp < 0) {
									goto L86;
								}
								else {
									goto L87;
								}
							}
							else if(((DisketteExtension->DeviceObject)->Vpb)->Flags & 1 < 0) {
								goto L85;
							}
							else {
								goto L88;
							}
						}
						else if(motorStarted < 0) {
							goto L83;
						}
						else {
L107:;
							if(DisketteExtension->DriveType < 0) {
L108:;
								if(driveStatus & 128 > 0) {
									goto L84;
								}
								else if(driveStatus & 128 < 0) {
									goto L84;
								}
								else {
L109:;
									if(NON_DET_3 > 0) {
										FlHdbit(DisketteExtension);
										goto L102;
									}
									else if(NON_DET_3 < 0) {
										FlHdbit(DisketteExtension);
										goto L102;
									}
									else {
										goto L102;
									}
								}
							}
							else if(DisketteExtension->DriveType > 0) {
								goto L108;
							}
							else {
								goto L109;
							}
						}
					}
					else if(DisketteExtension->DriveType < 0) {
						goto L107;
					}
					else {
						goto L107;
					}
				}
			}
			else {
				goto L82;
			}
		}
	}
	else if(DisketteExtension->MediaType < 4294967295U) {
L110:;
		if(DisketteExtension->MediaType == 0U) {
			DisketteExtension->DriveMediaConstants = *(DriveMediaConstants + 0);
			goto L1;
		}
		else if(DisketteExtension->MediaType < 0U) {
			goto L1;
		}
		else {
			goto L1;
		}
	}
	else {
		goto L110;
	}
}

void FlFinishOperation(PIRP Irp , PDISKETTE_EXTENSION DisketteExtension )
{ NTSTATUS ntStatus ;
	if(myStatus < 0L) {
		if(DisketteExtension->HardwareFailed > 0) {
L1:;
			DisketteExtension->HardwareFailCount = (UCHAR )((int )DisketteExtension->HardwareFailCount + 1);
			if(DisketteExtension->HardwareFailCount < 2) {
				ntStatus = FlInitializeControllerHardware(DisketteExtension);
				if(ntStatus >= 0L) {
L2:;
					DisketteExtension->MediaType = (enum _MEDIA_TYPE )-1;
					ExAcquireFastMutex(& DisketteExtension->ThreadReferenceMutex);
					DisketteExtension->ThreadReferenceCount = DisketteExtension->ThreadReferenceCount + 1L;
					ExReleaseFastMutex(& DisketteExtension->ThreadReferenceMutex);
					ExfInterlockedInsertHeadList(& DisketteExtension->ListEntry, & Irp->Tail.Overlay.__annonCompField17.ListEntry, & DisketteExtension->ListSpinLock);
					/* END OF PATH at func_FlFinishOperation@p13#1 */
				}
				else {
L3:;
					DisketteExtension->HardwareFailCount = (unsigned char)0;
					if(myStatus < 0L) {
						if(myStatus == -1073741661L) {
							IoSetHardErrorOrVerifyDevice(Irp, DisketteExtension->DeviceObject);
							if(myStatus < 0L) {
								if(myStatus > -2147483626L) {
									if(myStatus > -1073741805L) {
L4:;
										IofCompleteRequest(Irp, (char)1);
L5:;
										/* END OF PATH at func_FlFinishOperation@p42#1 */
									}
									else if(myStatus < -1073741805L) {
										/* FALSE PATH */ 
									}
									else {
										/* FALSE PATH */ 
									}
								}
								else if(myStatus < -2147483626L) {
									/* FALSE PATH */ 
								}
								else {
									/* FALSE PATH */ 
								}
							}
							else if(myStatus > 0L) {
								/* FALSE PATH */ 
							}
							else {
								/* FALSE PATH */ 
							}
						}
						else if(myStatus < -1073741661L) {
							if(myStatus < -1073741643L) {
L6:;
								if(myStatus == -1073741662L) {
									IoSetHardErrorOrVerifyDevice(Irp, DisketteExtension->DeviceObject);
									if(myStatus < 0L) {
										if(myStatus > -2147483626L) {
											if(myStatus > -1073741805L) {
												goto L4;
											}
											else if(myStatus < -1073741805L) {
												/* FALSE PATH */ 
											}
											else {
												/* FALSE PATH */ 
											}
										}
										else if(myStatus < -2147483626L) {
											/* FALSE PATH */ 
										}
										else {
											/* FALSE PATH */ 
										}
									}
									else if(myStatus > 0L) {
										/* FALSE PATH */ 
									}
									else {
										/* FALSE PATH */ 
									}
								}
								else if(myStatus < -1073741662L) {
L7:;
									if(myStatus == -1073741805L) {
										IoSetHardErrorOrVerifyDevice(Irp, DisketteExtension->DeviceObject);
										if(myStatus < 0L) {
											if(myStatus > -2147483626L) {
												if(myStatus == -1073741805L) {
													IofCompleteRequest(Irp, (char)1);
													goto L5;
												}
												else if(myStatus < -1073741805L) {
													/* FALSE PATH */ 
												}
												else {
													/* FALSE PATH */ 
												}
											}
											else if(myStatus < -2147483626L) {
												/* FALSE PATH */ 
											}
											else {
												/* FALSE PATH */ 
											}
										}
										else if(myStatus > 0L) {
											/* FALSE PATH */ 
										}
										else {
											/* FALSE PATH */ 
										}
									}
									else if(myStatus < -1073741805L) {
										if(myStatus == -2147483626L) {
											IoSetHardErrorOrVerifyDevice(Irp, DisketteExtension->DeviceObject);
											if(myStatus < 0L) {
												if(myStatus == -2147483626L) {
													IofCompleteRequest(Irp, (char)1);
													goto L5;
												}
												else if(myStatus < -2147483626L) {
													/* FALSE PATH */ 
												}
												else {
													/* FALSE PATH */ 
												}
											}
											else if(myStatus > 0L) {
												/* FALSE PATH */ 
											}
											else {
												/* FALSE PATH */ 
											}
										}
										else if(myStatus < -2147483626L) {
											if(myStatus < -1073741804L) {
												if(myStatus < -1073741806L) {
													if(myStatus < 0L) {
														if(myStatus < -2147483626L) {
L8:;
															if(myStatus < -1073741805L) {
																goto L4;
															}
															else if(myStatus > -1073741805L) {
																/* FALSE PATH */ 
															}
															else {
																/* FALSE PATH */ 
															}
														}
														else if(myStatus > -2147483626L) {
															/* FALSE PATH */ 
														}
														else {
															/* FALSE PATH */ 
														}
													}
													else if(myStatus > 0L) {
														/* FALSE PATH */ 
													}
													else {
														/* FALSE PATH */ 
													}
												}
												else if(myStatus == -1073741806L) {
													/* FALSE PATH */ 
												}
												else {
													/* FALSE PATH */ 
												}
											}
											else if(myStatus == -1073741804L) {
												/* FALSE PATH */ 
											}
											else {
												/* FALSE PATH */ 
											}
										}
										else {
											if(myStatus < -1073741804L) {
												if(myStatus == -1073741806L) {
													IoSetHardErrorOrVerifyDevice(Irp, DisketteExtension->DeviceObject);
L9:;
													if(myStatus < 0L) {
														if(myStatus > -2147483626L) {
															goto L8;
														}
														else if(myStatus < -2147483626L) {
															/* FALSE PATH */ 
														}
														else {
															/* FALSE PATH */ 
														}
													}
													else if(myStatus > 0L) {
														/* FALSE PATH */ 
													}
													else {
														/* FALSE PATH */ 
													}
												}
												else if(myStatus < -1073741806L) {
													goto L9;
												}
												else {
													goto L9;
												}
											}
											else if(myStatus == -1073741804L) {
												/* FALSE PATH */ 
											}
											else {
												/* FALSE PATH */ 
											}
										}
									}
									else {
										if(myStatus > -2147483626L) {
											if(myStatus == -1073741804L) {
												IoSetHardErrorOrVerifyDevice(Irp, DisketteExtension->DeviceObject);
L10:;
												if(myStatus < 0L) {
L11:;
													if(myStatus > -2147483626L) {
														if(myStatus > -1073741805L) {
															goto L4;
														}
														else if(myStatus < -1073741805L) {
															/* FALSE PATH */ 
														}
														else {
															/* FALSE PATH */ 
														}
													}
													else if(myStatus < -2147483626L) {
														/* FALSE PATH */ 
													}
													else {
														/* FALSE PATH */ 
													}
												}
												else if(myStatus > 0L) {
													/* FALSE PATH */ 
												}
												else {
													/* FALSE PATH */ 
												}
											}
											else if(myStatus < -1073741804L) {
L12:;
												if(myStatus > -1073741806L) {
													goto L10;
												}
												else if(myStatus == -1073741806L) {
													/* FALSE PATH */ 
												}
												else {
													/* FALSE PATH */ 
												}
											}
											else {
												goto L12;
											}
										}
										else if(myStatus == -2147483626L) {
											/* FALSE PATH */ 
										}
										else {
											/* FALSE PATH */ 
										}
									}
								}
								else {
									goto L7;
								}
							}
							else if(myStatus == -1073741643L) {
								/* FALSE PATH */ 
							}
							else {
								/* FALSE PATH */ 
							}
						}
						else {
							if(myStatus == -1073741643L) {
								IoSetHardErrorOrVerifyDevice(Irp, DisketteExtension->DeviceObject);
								goto L10;
							}
							else if(myStatus < -1073741643L) {
								goto L6;
							}
							else {
								goto L6;
							}
						}
					}
					else {
						/* FALSE PATH */ 
					}
				}
			}
			else {
				goto L3;
			}
		}
		else if(DisketteExtension->HardwareFailed < 0) {
			goto L1;
		}
		else {
			goto L3;
		}
	}
	else if(myStatus > 0L) {
		if(DisketteExtension->HardwareFailed > 0) {
L13:;
			DisketteExtension->HardwareFailCount = (UCHAR )((int )DisketteExtension->HardwareFailCount + 1);
			if(DisketteExtension->HardwareFailCount < 2) {
				ntStatus = FlInitializeControllerHardware(DisketteExtension);
				if(ntStatus >= 0L) {
					goto L2;
				}
				else {
L14:;
					DisketteExtension->HardwareFailCount = (unsigned char)0;
					if((myStatus >= 0L)) {
						if(myStatus > 0L) {
							goto L11;
						}
						else if(myStatus < 0L) {
							/* FALSE PATH */ 
						}
						else {
							/* FALSE PATH */ 
						}
					}
					else {
						/* FALSE PATH */ 
					}
				}
			}
			else {
				goto L14;
			}
		}
		else if(DisketteExtension->HardwareFailed < 0) {
			goto L13;
		}
		else {
			goto L14;
		}
	}
	else {
		DisketteExtension->HardwareFailCount = (unsigned char)0;
		if((myStatus >= 0L)) {
			if(myStatus == 0L) {
				IofCompleteRequest(Irp, (char)1);
				goto L5;
			}
			else if(myStatus < 0L) {
				/* FALSE PATH */ 
			}
			else {
				/* FALSE PATH */ 
			}
		}
		else {
			/* FALSE PATH */ 
		}
	}
}

NTSTATUS FlDetermineMediaType(PDISKETTE_EXTENSION DisketteExtension )
{ NTSTATUS ntStatus ;
PDRIVE_MEDIA_CONSTANTS ddriveMediaConstants ;
BOOLEAN mediaTypesExhausted ;
ULONG retries ;
USHORT sectorLengthCode ;
PBOOT_SECTOR_INFO bootSector ;
LARGE_INTEGER offset ;
PIRP irp ;
int NON_DET_1 ;
int NON_DET_2 ;
int NON_DET_3 ;
int NONDET_4 ;
int tmp ;
	retries = 0UL;
	DisketteExtension->IsReadOnly = (unsigned char)0;
	retries = 0UL;
L1:;
L2:;
	if(retries >= 3UL) {
L3:;
L4:;
		if(ntStatus < 0L) {
			return (ntStatus);
			/* END OF PATH at func_FlDetermineMediaType@p90#1 */
		}
		else {
			if(mediaTypesExhausted > 0) {
L5:;
				return (ntStatus);
				/* END OF PATH at func_FlDetermineMediaType@p94#1 */
			}
			else if(mediaTypesExhausted < 0) {
				goto L5;
			}
			else {
				DisketteExtension->MediaType = ddriveMediaConstants->MediaType;
				DisketteExtension->BytesPerSector = (unsigned long )ddriveMediaConstants->BytesPerSector;
				DisketteExtension->ByteCapacity = (unsigned long )((((int )ddriveMediaConstants->BytesPerSector * (int )ddriveMediaConstants->SectorsPerTrack) * (1 + (int )ddriveMediaConstants->MaximumTrack)) * (int )ddriveMediaConstants->NumberOfHeads);
				DisketteExtension->DriveMediaConstants = *(DriveMediaConstants + DisketteExtension->DriveMediaType);
				FlCheckBootSector(DisketteExtension);
				return (ntStatus);
				/* END OF PATH at func_FlDetermineMediaType@p102#1 */
			}
		}
	}
	else {
		if(retries > 0) {
			FlInitializeControllerHardware(DisketteExtension);
L6:;
			DisketteExtension->DriveMediaType = (DriveMediaLimits + DisketteExtension->DriveType)->HighestDriveMediaType;
			DisketteExtension->DriveMediaConstants = *(DriveMediaConstants + DisketteExtension->DriveMediaType);
			mediaTypesExhausted = (unsigned char)0;
L7:;
L8:;
			if(NON_DET_1 > 0) {
L9:;
				sectorLengthCode = (unsigned short )(DriveMediaConstants + DisketteExtension->DriveMediaType)->SectorLengthCode;
				FlHdbit(DisketteExtension);
				ntStatus = FlDatarateSpecifyConfigure(DisketteExtension);
L10:;
				if(ntStatus < 0L) {
					mediaTypesExhausted = (unsigned char)1;
L11:;
					if(ntStatus < 0L) {
						if(mediaTypesExhausted > 0) {
L12:;
L13:;
L14:;
							if(ntStatus >= 0L) {
								goto L3;
							}
							else {
								retries = retries + 1UL;
								goto L2;
							}
						}
						else if(mediaTypesExhausted < 0) {
							/* FALSE PATH */ 
						}
						else {
							/* FALSE PATH */ 
						}
					}
					else {
						/* FALSE PATH */ 
					}
				}
				else {
					ddriveMediaConstants = DriveMediaConstants + DisketteExtension->DriveMediaType;
					DisketteExtension->FifoBuffer[1] = (unsigned char )((int )DisketteExtension->DeviceUnit | (((int )ddriveMediaConstants->NumberOfHeads - 1) << 2));
					DisketteExtension->FifoBuffer[0] = (unsigned char)84;
					ntStatus = FlIssueCommand(DisketteExtension, DisketteExtension->FifoBuffer, DisketteExtension->FifoBuffer, (struct _MDL *)((void *)0), 0UL, 0UL);
					if(NONDET_4 > 0) {
L15:;
						DisketteExtension->DriveMediaType = (DRIVE_MEDIA_TYPE )((unsigned int )DisketteExtension->DriveMediaType - 1U);
						DisketteExtension->DriveMediaConstants = *(DriveMediaConstants + DisketteExtension->DriveMediaType);
						if(ntStatus < -1073741661L) {
L16:;
							ntStatus = -1073741804L;
							if((DisketteExtension->DriveMediaType) < ((DriveMediaLimits + DisketteExtension->DriveType)->LowestDriveMediaType)) {
								DisketteExtension->MediaType = (enum _MEDIA_TYPE )0;
								mediaTypesExhausted = (unsigned char)1;
								goto L11;
							}
							else {
L17:;
								if(ntStatus < 0L) {
L18:;
									if(mediaTypesExhausted > 0) {
										goto L12;
									}
									else if(mediaTypesExhausted < 0) {
										goto L12;
									}
									else {
										goto L8;
									}
								}
								else {
									/* FALSE PATH */ 
								}
							}
						}
						else if(ntStatus > -1073741661L) {
							goto L16;
						}
						else {
							if((DisketteExtension->DriveMediaType) < ((DriveMediaLimits + DisketteExtension->DriveType)->LowestDriveMediaType)) {
								DisketteExtension->MediaType = (enum _MEDIA_TYPE )0;
								mediaTypesExhausted = (unsigned char)1;
								goto L11;
							}
							else {
L19:;
								if(ntStatus < 0L) {
									goto L18;
								}
								else {
									/* FALSE PATH */ 
								}
							}
						}
					}
					else if(NONDET_4 < 0) {
						goto L15;
					}
					else {
						if(NON_DET_2 > 0) {
L20:;
							DisketteExtension->MediaType = ddriveMediaConstants->MediaType;
							DisketteExtension->BytesPerSector = (unsigned long )ddriveMediaConstants->BytesPerSector;
							DisketteExtension->ByteCapacity = (unsigned long )((((int )ddriveMediaConstants->BytesPerSector * (int )ddriveMediaConstants->SectorsPerTrack) * (1 + (int )ddriveMediaConstants->MaximumTrack)) * (int )ddriveMediaConstants->NumberOfHeads);
							DisketteExtension->DriveMediaConstants = *(DriveMediaConstants + DisketteExtension->DriveMediaType);
							if(bootSector == 0) {
								return (-1073741670L);
								/* END OF PATH at func_FlDetermineMediaType@p53#1 */
							}
							else if(bootSector > 0) {
L21:;
								offset.__annonCompField1.LowPart = 0UL;
								offset.__annonCompField1.HighPart = 0L;
								irp = IoBuildAsynchronousFsdRequest(3UL, DisketteExtension->DeviceObject, (void *)bootSector, 1024UL, & offset, (struct _IO_STATUS_BLOCK *)((void *)0));
								if(irp == 0) {
									ExFreePool((void *)bootSector);
									return (-1073741670L);
									/* END OF PATH at func_FlDetermineMediaType@p61#1 */
								}
								else if(irp > 0) {
L22:;
									irp->CurrentLocation = (CHAR )((int )irp->CurrentLocation - 1);
									irp->Tail.Overlay.__annonCompField17.__annonCompField16.CurrentStackLocation = irp->Tail.Overlay.__annonCompField17.__annonCompField16.CurrentStackLocation - 1;
									tmp = (int )FlReadWrite(DisketteExtension, irp, 1);
									ntStatus = (long )tmp;
									MmUnlockPages(irp->MdlAddress);
									IoFreeMdl(irp->MdlAddress);
									IoFreeIrp(irp);
									ExFreePool((void *)bootSector);
									if(ntStatus < 0L) {
										DisketteExtension->DriveMediaType = (DRIVE_MEDIA_TYPE )((unsigned int )DisketteExtension->DriveMediaType - 1U);
										DisketteExtension->DriveMediaConstants = *(DriveMediaConstants + DisketteExtension->DriveMediaType);
										if(ntStatus < -1073741661L) {
L23:;
											ntStatus = -1073741804L;
											if((DisketteExtension->DriveMediaType) < ((DriveMediaLimits + DisketteExtension->DriveType)->LowestDriveMediaType)) {
												DisketteExtension->MediaType = (enum _MEDIA_TYPE )0;
												mediaTypesExhausted = (unsigned char)1;
												goto L11;
											}
											else {
												goto L17;
											}
										}
										else if(ntStatus > -1073741661L) {
											goto L23;
										}
										else {
											if((DisketteExtension->DriveMediaType) < ((DriveMediaLimits + DisketteExtension->DriveType)->LowestDriveMediaType)) {
												DisketteExtension->MediaType = (enum _MEDIA_TYPE )0;
												mediaTypesExhausted = (unsigned char)1;
												goto L11;
											}
											else {
												goto L19;
											}
										}
									}
									else {
										if((ntStatus >= 0L)) {
L24:;
											/* END OF PATH at func_FlDetermineMediaType@p24#3 */
										}
										else {
											/* FALSE PATH */ 
										}
									}
								}
								else {
									goto L22;
								}
							}
							else {
								goto L21;
							}
						}
						else if(NON_DET_2 < 0) {
							goto L20;
						}
						else {
							if(ntStatus < 0L) {
								goto L18;
							}
							else {
								goto L24;
							}
						}
					}
				}
			}
			else if(NON_DET_1 < 0) {
				goto L9;
			}
			else {
				ntStatus = FlDatarateSpecifyConfigure(DisketteExtension);
				goto L10;
			}
		}
		else if(retries < 0) {
			FlInitializeControllerHardware(DisketteExtension);
			goto L6;
		}
		else {
			goto L6;
		}
	}
}

NTSTATUS FlIssueCommand(PDISKETTE_EXTENSION DisketteExtension , PUCHAR FifoInBuffer , PUCHAR FifoOutBuffer , PMDL IoMdl , ULONG IoOffset , ULONG TransferBytes )
{ NTSTATUS ntStatus ;
UCHAR i ;
PIRP irp ;
KEVENT DoneEvent ;
IO_STATUS_BLOCK IoStatus ;
PIO_STACK_LOCATION irpSp ;
ISSUE_FDC_COMMAND_PARMS issueCommandParms ;
	issueCommandParms.FifoInBuffer = FifoInBuffer;
	issueCommandParms.FifoOutBuffer = FifoOutBuffer;
	issueCommandParms.IoHandle = (void *)IoMdl;
	issueCommandParms.IoOffset = IoOffset;
	issueCommandParms.TransferBytes = TransferBytes;
	issueCommandParms.TimeOut = 4UL;
	ntStatus = FlFdcDeviceIo(DisketteExtension->TargetObject, (unsigned long )(((7 << 16) | (771 << 2)) | 3), (void *)(& issueCommandParms));
	if(ntStatus == -1073741661L) {
		DisketteExtension->HardwareFailed = (unsigned char)1;
L1:;
		return (ntStatus);
		/* END OF PATH at func_FlIssueCommand@p20#1 */
	}
	else if(ntStatus < -1073741661L) {
		if(ntStatus < -1073741464L) {
			goto L1;
		}
		else if(ntStatus == -1073741464L) {
			/* FALSE PATH */ 
		}
		else {
			/* FALSE PATH */ 
		}
	}
	else {
		if(ntStatus == -1073741464L) {
			DisketteExtension->HardwareFailed = (unsigned char)1;
			goto L1;
		}
		else if(ntStatus < -1073741464L) {
			goto L1;
		}
		else {
			goto L1;
		}
	}
}

BOOLEAN FlCheckFormatParameters(PDISKETTE_EXTENSION DisketteExtension , PFORMAT_PARAMETERS FormatParameters )
{ PDRIVE_MEDIA_CONSTANTS ddriveMediaConstants ;
DRIVE_MEDIA_TYPE driveMediaType ;
int NONDET_1 ;
	driveMediaType = (DriveMediaLimits + DisketteExtension->DriveType)->HighestDriveMediaType;
L1:;
L2:;
	if((DriveMediaConstants + driveMediaType)->MediaType < FormatParameters->MediaType) {
L3:;
		if(driveMediaType <= (DriveMediaLimits + DisketteExtension->DriveType)->LowestDriveMediaType) {
L4:;
L5:;
			if((DriveMediaConstants + driveMediaType)->MediaType < FormatParameters->MediaType) {
L6:;
				return ((unsigned char)0);
				/* END OF PATH at func_FlCheckFormatParameters@p15#1 */
			}
			else if((DriveMediaConstants + driveMediaType)->MediaType > FormatParameters->MediaType) {
				goto L6;
			}
			else {
				ddriveMediaConstants = DriveMediaConstants + driveMediaType;
				if(FormatParameters->StartHeadNumber > (ddriveMediaConstants->NumberOfHeads - 1)) {
					return ((unsigned char)0);
					/* END OF PATH at func_FlCheckFormatParameters@p20#1 */
				}
				else {
					if(FormatParameters->EndHeadNumber > (ddriveMediaConstants->NumberOfHeads - 1)) {
						return ((unsigned char)0);
						/* END OF PATH at func_FlCheckFormatParameters@p24#1 */
					}
					else {
						if(FormatParameters->StartCylinderNumber > ddriveMediaConstants->MaximumTrack) {
							return ((unsigned char)0);
							/* END OF PATH at func_FlCheckFormatParameters@p28#1 */
						}
						else {
							if(FormatParameters->EndCylinderNumber > ddriveMediaConstants->MaximumTrack) {
								return ((unsigned char)0);
								/* END OF PATH at func_FlCheckFormatParameters@p32#1 */
							}
							else {
								if(FormatParameters->EndCylinderNumber < FormatParameters->StartCylinderNumber) {
									return ((unsigned char)0);
									/* END OF PATH at func_FlCheckFormatParameters@p36#1 */
								}
								else {
									if(NONDET_1 > 0) {
L7:;
										return ((unsigned char)0);
										/* END OF PATH at func_FlCheckFormatParameters@p40#1 */
									}
									else if(NONDET_1 < 0) {
										goto L7;
									}
									else {
										return ((unsigned char)1);
										/* END OF PATH at func_FlCheckFormatParameters@p42#1 */
									}
								}
							}
						}
					}
				}
			}
		}
		else {
			driveMediaType = (DRIVE_MEDIA_TYPE )((unsigned int )driveMediaType - 1U);
			goto L2;
		}
	}
	else if((DriveMediaConstants + driveMediaType)->MediaType > FormatParameters->MediaType) {
		goto L3;
	}
	else {
		/* END OF PATH at func_FlCheckFormatParameters@p5#3 */
	}
}

NTSTATUS FlQueueIrpToThread(PIRP Irp , PDISKETTE_EXTENSION DisketteExtension )
{ KIRQL oldIrql ;
NTSTATUS status ;
HANDLE threadHandle ;
PIO_STACK_LOCATION irpSp ;
OBJECT_ATTRIBUTES ObjAttributes ;
void *MyFloppyThread ;
	irpSp = Irp->Tail.Overlay.__annonCompField17.__annonCompField16.CurrentStackLocation;
	ExAcquireFastMutex(& DisketteExtension->PowerDownMutex);
	if(DisketteExtension->PoweringDown == 1) {
		ExReleaseFastMutex(& DisketteExtension->PowerDownMutex);
		myStatus = -1073741101L;
		Irp->IoStatus.__annonCompField4.Status = -1073741101L;
		Irp->IoStatus.Information = 0UL;
		return (-1073741101L);
		/* END OF PATH at func_FlQueueIrpToThread@p14#1 */
	}
	else if(DisketteExtension->PoweringDown < 1) {
L1:;
		ExReleaseFastMutex(& DisketteExtension->PowerDownMutex);
		ExAcquireFastMutex(& DisketteExtension->ThreadReferenceMutex);
		DisketteExtension->ThreadReferenceCount = DisketteExtension->ThreadReferenceCount + 1L;
		if(DisketteExtension->ThreadReferenceCount == 0L) {
			DisketteExtension->ThreadReferenceCount = DisketteExtension->ThreadReferenceCount + 1L;
			ExAcquireFastMutex(PagingMutex);
			PagingReferenceCount = PagingReferenceCount + 1UL;
			if(PagingReferenceCount == 1UL) {
				MmResetDriverPaging((void *)DriverEntryNONDET);
				ExReleaseFastMutex(PagingMutex);
				status = PsCreateSystemThread(& threadHandle, 0UL, & ObjAttributes, (void *)0L, (CLIENT_ID *)((void *)0), (void (*)(PVOID StartContext ))MyFloppyThread, (void *)DisketteExtension);
				if(status < 0L) {
					DisketteExtension->ThreadReferenceCount = -1L;
					ExAcquireFastMutex(PagingMutex);
					PagingReferenceCount = PagingReferenceCount - 1UL;
					if(PagingReferenceCount == 0UL) {
						MmPageEntireDriver((void *)DriverEntryNONDET);
L2:;
						ExReleaseFastMutex(PagingMutex);
						ExReleaseFastMutex(& DisketteExtension->ThreadReferenceMutex);
						return (status);
						/* END OF PATH at func_FlQueueIrpToThread@p36#1 */
					}
					else if(PagingReferenceCount < 0UL) {
						/* FALSE PATH */ 
					}
					else {
						/* FALSE PATH */ 
					}
				}
				else {
L3:;
					status = ObReferenceObjectByHandle(threadHandle, 1048576UL, (struct _OBJECT_TYPE *)((void *)0), (char)0, (PVOID *)(& DisketteExtension->FloppyThread), (struct _OBJECT_HANDLE_INFORMATION *)((void *)0));
					ZwClose(threadHandle);
					ExReleaseFastMutex(& DisketteExtension->ThreadReferenceMutex);
					if(status < 0L) {
						return (status);
						/* END OF PATH at func_FlQueueIrpToThread@p42#1 */
					}
					else {
L4:;
						(Irp->Tail.Overlay.__annonCompField17.__annonCompField16.CurrentStackLocation)->Control = (unsigned char )((int )(Irp->Tail.Overlay.__annonCompField17.__annonCompField16.CurrentStackLocation)->Control | 1);
						pended = 1;
						ExfInterlockedInsertTailList(& DisketteExtension->ListEntry, & Irp->Tail.Overlay.__annonCompField17.ListEntry, & DisketteExtension->ListSpinLock);
						KeReleaseSemaphore(& DisketteExtension->RequestSemaphore, 0L, 1L, (unsigned char)0);
						return (259L);
						/* END OF PATH at func_FlQueueIrpToThread@p50#1 */
					}
				}
			}
			else if(PagingReferenceCount < 1UL) {
				ExReleaseFastMutex(PagingMutex);
				status = PsCreateSystemThread(& threadHandle, 0UL, & ObjAttributes, (void *)0L, (CLIENT_ID *)((void *)0), (void (*)(PVOID StartContext ))MyFloppyThread, (void *)DisketteExtension);
				if(status < 0L) {
					DisketteExtension->ThreadReferenceCount = -1L;
					ExAcquireFastMutex(PagingMutex);
					PagingReferenceCount = PagingReferenceCount - 1UL;
					if(PagingReferenceCount < 0UL) {
						goto L2;
					}
					else if(PagingReferenceCount == 0UL) {
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
			else {
				ExReleaseFastMutex(PagingMutex);
				status = PsCreateSystemThread(& threadHandle, 0UL, & ObjAttributes, (void *)0L, (CLIENT_ID *)((void *)0), (void (*)(PVOID StartContext ))MyFloppyThread, (void *)DisketteExtension);
				if(status < 0L) {
					DisketteExtension->ThreadReferenceCount = -1L;
					ExAcquireFastMutex(PagingMutex);
					PagingReferenceCount = PagingReferenceCount - 1UL;
					if(PagingReferenceCount > 0UL) {
						goto L2;
					}
					else if(PagingReferenceCount == 0UL) {
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
		else if(DisketteExtension->ThreadReferenceCount < 0L) {
L5:;
			ExReleaseFastMutex(& DisketteExtension->ThreadReferenceMutex);
			goto L4;
		}
		else {
			goto L5;
		}
	}
	else {
		goto L1;
	}
}

NTSTATUS FlInterpretError(UCHAR StatusRegister1 , UCHAR StatusRegister2 )
{ int NONDET_1 ;
int NONDET_2 ;
int NONDET_3 ;
int NONDET_4 ;
int NONDET_5 ;
int NONDET_6 ;
int NONDET_7 ;
	if(NONDET_1 > 0) {
L1:;
		return (-1073741761L);
		/* END OF PATH at func_FlInterpretError@p9#1 */
	}
	else if(NONDET_1 < 0) {
		goto L1;
	}
	else {
		if(NONDET_2 > 0) {
L2:;
			return (-1073741764L);
			/* END OF PATH at func_FlInterpretError@p12#1 */
		}
		else if(NONDET_2 < 0) {
			goto L2;
		}
		else {
			if(NONDET_3 > 0) {
L3:;
				return (-1073741803L);
				/* END OF PATH at func_FlInterpretError@p15#1 */
			}
			else if(NONDET_3 < 0) {
				goto L3;
			}
			else {
				if(NONDET_4 > 0) {
L4:;
					return (-1073741668L);
					/* END OF PATH at func_FlInterpretError@p18#1 */
				}
				else if(NONDET_4 < 0) {
					goto L4;
				}
				else {
					if(NONDET_5 > 0) {
L5:;
						return (-1073741662L);
						/* END OF PATH at func_FlInterpretError@p21#1 */
					}
					else if(NONDET_5 < 0) {
						goto L5;
					}
					else {
						if(NONDET_6 > 0) {
L6:;
							return (-1073741467L);
							/* END OF PATH at func_FlInterpretError@p24#1 */
						}
						else if(NONDET_6 < 0) {
							goto L6;
						}
						else {
							if(NONDET_7 > 0) {
L7:;
								return (-1073741466L);
								/* END OF PATH at func_FlInterpretError@p27#1 */
							}
							else if(NONDET_7 < 0) {
								goto L7;
							}
							else {
								return (-1073741465L);
								/* END OF PATH at func_FlInterpretError@p29#1 */
							}
						}
					}
				}
			}
		}
	}
}

void FlAllocateIoBuffer(PDISKETTE_EXTENSION DisketteExtension , ULONG BufferSize )
{ BOOLEAN allocateContiguous ;
LARGE_INTEGER maxDmaAddress ;
PVOID tmp ;
int tmp___0 ;
	if(DisketteExtension->IoBuffer > 0) {
L1:;
		if(DisketteExtension->IoBufferSize >= BufferSize) {
			/* END OF PATH at func_FlAllocateIoBuffer@p7#1 */
		}
		else {
			FlFreeIoBuffer(DisketteExtension);
L2:;
			if(BufferSize > DisketteExtension->MaxTransferSize) {
				allocateContiguous = (unsigned char)1;
				if(allocateContiguous > 0) {
					maxDmaAddress.QuadPart = 16777215;
					tmp = MmAllocateContiguousMemory(BufferSize, maxDmaAddress);
					DisketteExtension->IoBuffer = (UCHAR *)tmp;
					if(DisketteExtension->IoBuffer == 0) {
L3:;
						/* END OF PATH at func_FlAllocateIoBuffer@p19#1 */
					}
					else if(DisketteExtension->IoBuffer > 0) {
L4:;
						tmp___0 = (int )IoAllocateMdl(DisketteExtension->IoBuffer, BufferSize, 0, 0, (void *)0);
						DisketteExtension->IoBufferMdl = (struct _MDL *)tmp___0;
						if(DisketteExtension->IoBufferMdl == 0) {
							if(allocateContiguous > 0) {
								MmFreeContiguousMemory((void *)DisketteExtension->IoBuffer);
L5:;
								DisketteExtension->IoBuffer = (UCHAR *)((void *)0);
								/* END OF PATH at func_FlAllocateIoBuffer@p29#1 */
							}
							else if(allocateContiguous < 0) {
								/* FALSE PATH */ 
							}
							else {
								/* FALSE PATH */ 
							}
						}
						else if(DisketteExtension->IoBufferMdl > 0) {
L6:;
							MmProbeAndLockPages(DisketteExtension->IoBufferMdl, 0, 2);
							if(allocateContiguous > 0) {
								MmFreeContiguousMemory((void *)DisketteExtension->IoBuffer);
L7:;
								DisketteExtension->IoBuffer = (UCHAR *)((void *)0);
								/* END OF PATH at func_FlAllocateIoBuffer@p37#1 */
							}
							else if(allocateContiguous < 0) {
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
					else {
						goto L4;
					}
				}
				else if(allocateContiguous < 0) {
					/* FALSE PATH */ 
				}
				else {
					/* FALSE PATH */ 
				}
			}
			else {
				allocateContiguous = (unsigned char)0;
				if(allocateContiguous == 0) {
					if(DisketteExtension->IoBuffer == 0) {
						goto L3;
					}
					else if(DisketteExtension->IoBuffer > 0) {
L8:;
						tmp___0 = (int )IoAllocateMdl(DisketteExtension->IoBuffer, BufferSize, 0, 0, (void *)0);
						DisketteExtension->IoBufferMdl = (struct _MDL *)tmp___0;
						if(DisketteExtension->IoBufferMdl == 0) {
							if(allocateContiguous == 0) {
								ExFreePool((void *)DisketteExtension->IoBuffer);
								goto L5;
							}
							else if(allocateContiguous > 0) {
								/* FALSE PATH */ 
							}
							else {
								/* FALSE PATH */ 
							}
						}
						else if(DisketteExtension->IoBufferMdl > 0) {
L9:;
							MmProbeAndLockPages(DisketteExtension->IoBufferMdl, 0, 2);
							if(allocateContiguous == 0) {
								ExFreePool((void *)DisketteExtension->IoBuffer);
								goto L7;
							}
							else if(allocateContiguous > 0) {
								/* FALSE PATH */ 
							}
							else {
								/* FALSE PATH */ 
							}
						}
						else {
							goto L9;
						}
					}
					else {
						goto L8;
					}
				}
				else if(allocateContiguous > 0) {
					/* FALSE PATH */ 
				}
				else {
					/* FALSE PATH */ 
				}
			}
		}
	}
	else if(DisketteExtension->IoBuffer < 0) {
		goto L1;
	}
	else {
		goto L2;
	}
}

void FlFreeIoBuffer(PDISKETTE_EXTENSION DisketteExtension )
{ BOOLEAN contiguousBuffer ;
	if(DisketteExtension->IoBuffer == 0) {
		/* END OF PATH at func_FlFreeIoBuffer@p3#1 */
	}
	else if(DisketteExtension->IoBuffer > 0) {
L1:;
		if(DisketteExtension->IoBufferSize > DisketteExtension->MaxTransferSize) {
			contiguousBuffer = (unsigned char)1;
			DisketteExtension->IoBufferSize = 0UL;
			MmUnlockPages(DisketteExtension->IoBufferMdl);
			IoFreeMdl(DisketteExtension->IoBufferMdl);
			DisketteExtension->IoBufferMdl = (struct _MDL *)((void *)0);
			if(contiguousBuffer > 0) {
				MmFreeContiguousMemory((void *)DisketteExtension->IoBuffer);
L2:;
				DisketteExtension->IoBuffer = (UCHAR *)((void *)0);
				/* END OF PATH at func_FlFreeIoBuffer@p18#1 */
			}
			else if(contiguousBuffer < 0) {
				/* FALSE PATH */ 
			}
			else {
				/* FALSE PATH */ 
			}
		}
		else {
			contiguousBuffer = (unsigned char)0;
			DisketteExtension->IoBufferSize = 0UL;
			MmUnlockPages(DisketteExtension->IoBufferMdl);
			IoFreeMdl(DisketteExtension->IoBufferMdl);
			DisketteExtension->IoBufferMdl = (struct _MDL *)((void *)0);
			if(contiguousBuffer == 0) {
				ExFreePool((void *)DisketteExtension->IoBuffer);
				goto L2;
			}
			else if(contiguousBuffer > 0) {
				/* FALSE PATH */ 
			}
			else {
				/* FALSE PATH */ 
			}
		}
	}
	else {
		goto L1;
	}
}

NTSTATUS FlFdcDeviceIo(PDEVICE_OBJECT DeviceObject , ULONG Ioctl , PVOID Data )
{ NTSTATUS ntStatus ;
PIRP irp ;
PIO_STACK_LOCATION irpStack ;
KEVENT doneEvent ;
IO_STATUS_BLOCK ioStatus ;
	KeInitializeEvent(& doneEvent, (enum _EVENT_TYPE )0, (unsigned char)0);
	irp = IoBuildDeviceIoControlRequest(Ioctl, DeviceObject, (void *)0, 0UL, (void *)0, 0UL, (unsigned char)1, & doneEvent, & ioStatus);
	if(irp == (0)) {
		return (-1073741670L);
		/* END OF PATH at func_FlFdcDeviceIo@p9#1 */
	}
	else if(irp < (0)) {
L1:;
		irpStack = irp->Tail.Overlay.__annonCompField17.__annonCompField16.CurrentStackLocation - 1;
		irpStack->Parameters.DeviceIoControl.Type3InputBuffer = Data;
		ntStatus = IofCallDriver(DeviceObject, irp);
		if(ntStatus == 259L) {
			KeWaitForSingleObject((void *)(& doneEvent), (enum _KWAIT_REASON )5, (char)0, (unsigned char)0, (LARGE_INTEGER *)((void *)0));
L2:;
			return (ntStatus);
			/* END OF PATH at func_FlFdcDeviceIo@p16#1 */
		}
		else if(ntStatus < 259L) {
			goto L2;
		}
		else {
			goto L2;
		}
	}
	else {
		goto L1;
	}
}

NTSTATUS FlAcpiConfigureFloppy(PDISKETTE_EXTENSION DisketteExtension , PFDC_INFO FdcInfo )
{ UCHAR driveType ;
PDRIVE_MEDIA_CONSTANTS biosDriveMediaConstants ;
int NONDET ;
	biosDriveMediaConstants = & DisketteExtension->BiosDriveMediaConstants;
	if(FdcInfo->AcpiFdiSupported == 0) {
		return (-1073741823L);
		/* END OF PATH at func_FlAcpiConfigureFloppy@p6#1 */
	}
	else if(FdcInfo->AcpiFdiSupported > 0) {
L1:;
		if(NONDET == 360) {
			driveType = (unsigned char)0;
L2:;
			DisketteExtension->DriveType = driveType;
			*biosDriveMediaConstants = *(DriveMediaConstants + (DriveMediaLimits + driveType)->HighestDriveMediaType);
			biosDriveMediaConstants->StepRateHeadUnloadTime = (unsigned char )FdcInfo->AcpiFdiData.StepRateHeadUnloadTime;
			biosDriveMediaConstants->HeadLoadTime = (unsigned char )FdcInfo->AcpiFdiData.HeadLoadTime;
			biosDriveMediaConstants->MotorOffTime = (unsigned char )FdcInfo->AcpiFdiData.MotorOffTime;
			biosDriveMediaConstants->SectorLengthCode = (unsigned char )FdcInfo->AcpiFdiData.SectorLengthCode;
			biosDriveMediaConstants->SectorsPerTrack = (unsigned char )FdcInfo->AcpiFdiData.SectorPerTrack;
			biosDriveMediaConstants->ReadWriteGapLength = (unsigned char )FdcInfo->AcpiFdiData.ReadWriteGapLength;
			biosDriveMediaConstants->FormatGapLength = (unsigned char )FdcInfo->AcpiFdiData.FormatGapLength;
			biosDriveMediaConstants->FormatFillCharacter = (unsigned char )FdcInfo->AcpiFdiData.FormatFillCharacter;
			biosDriveMediaConstants->HeadSettleTime = (unsigned char )FdcInfo->AcpiFdiData.HeadSettleTime;
			biosDriveMediaConstants->MotorSettleTimeRead = (unsigned short )(((int )((unsigned char )FdcInfo->AcpiFdiData.MotorSettleTime) * 1000) / 8);
			biosDriveMediaConstants->MotorSettleTimeWrite = (unsigned short )(((int )((unsigned short )FdcInfo->AcpiFdiData.MotorSettleTime) * 1000) / 8);
			biosDriveMediaConstants->MaximumTrack = (unsigned char )FdcInfo->AcpiFdiData.MaxCylinderNumber;
			biosDriveMediaConstants->DataLength = (unsigned char )FdcInfo->AcpiFdiData.DataTransferLength;
			return (0L);
			/* END OF PATH at func_FlAcpiConfigureFloppy@p44#1 */
		}
		else if(NONDET == 1200) {
			driveType = (unsigned char)1;
			goto L2;
		}
		else if(NONDET == 720) {
			driveType = (unsigned char)2;
			goto L2;
		}
		else if(NONDET == 1440) {
			driveType = (unsigned char)3;
			goto L2;
		}
		else if(NONDET == 2880) {
			driveType = (unsigned char)4;
			goto L2;
		}
		else if(NONDET < 360) {
L3:;
			driveType = (unsigned char)1;
			goto L2;
		}
		else if(NONDET > 360 && NONDET < 720) {
			goto L3;
		}
		else if(NONDET > 720 && NONDET < 1200) {
			goto L3;
		}
		else if(NONDET > 1200 && NONDET < 1440) {
			goto L3;
		}
		else if(NONDET > 1440 && NONDET < 2880) {
			goto L3;
		}
		else {
			goto L3;
		}
	}
	else {
		goto L1;
	}
}

NTSTATUS FlHdbit(PDISKETTE_EXTENSION DisketteExtension )
{ NTSTATUS ntStatus ;
USHORT st ;
USHORT st2 ;
USHORT st3 ;
USHORT st4 ;
SHORT sel ;
SHORT st5 ;
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
int NONDET_1 ;
	st5 = (short)0;
	media144MB = (unsigned char)0;
	mediaUpTo120MB = (unsigned char)0;
	supportDrive = (unsigned char)1;
	if(NONDET_1 == 1) {
		media144MB = (unsigned char)1;
L1:;
L2:;
L3:;
L4:;
L5:;
L6:;
		mediaUpTo120MB = (unsigned char)1;
L7:;
L8:;
L9:;
L10:;
L11:;
L12:;
L13:;
L14:;
L15:;
L16:;
L17:;
L18:;
L19:;
L20:;
L21:;
		setHdBitParameter.Media144MB = media144MB;
		setHdBitParameter.More120MB = mediaUpTo120MB;
		setHdBitParameter.DeviceUnit = DisketteExtension->DeviceUnit;
		ntStatus = FlFdcDeviceIo(DisketteExtension->TargetObject, (unsigned long )(((7 << 16) | (785 << 2)) | 3), (void *)(& setHdBitParameter));
		if(ntStatus < 0L) {
			return (ntStatus);
			/* END OF PATH at func_FlHdbit@p58#1 */
		}
		else {
			if(setHdBitParameter.ChangedHdBit > 0) {
				ntStatus = FlDatarateSpecifyConfigure(DisketteExtension);
L22:;
				return (ntStatus);
				/* END OF PATH at func_FlHdbit@p62#1 */
			}
			else if(setHdBitParameter.ChangedHdBit < 0) {
				ntStatus = FlDatarateSpecifyConfigure(DisketteExtension);
				goto L22;
			}
			else {
				goto L22;
			}
		}
	}
	else if(NONDET_1 == 2) {
		goto L1;
	}
	else if(NONDET_1 == 3) {
		goto L2;
	}
	else if(NONDET_1 == 4) {
		goto L3;
	}
	else if(NONDET_1 == 5) {
		goto L4;
	}
	else if(NONDET_1 == 6) {
		goto L5;
	}
	else if(NONDET_1 == 7) {
		goto L6;
	}
	else if(NONDET_1 == 8) {
		goto L7;
	}
	else if(NONDET_1 == 9) {
		goto L8;
	}
	else if(NONDET_1 == 10) {
		goto L9;
	}
	else if(NONDET_1 == 11) {
		goto L10;
	}
	else if(NONDET_1 == 12) {
		goto L11;
	}
	else if(NONDET_1 == 13) {
		goto L12;
	}
	else if(NONDET_1 == 14) {
		goto L13;
	}
	else if(NONDET_1 == 15) {
		goto L14;
	}
	else if(NONDET_1 == 16) {
		goto L15;
	}
	else if(NONDET_1 == 17) {
		goto L16;
	}
	else if(NONDET_1 == 18) {
		goto L17;
	}
	else if(NONDET_1 == 19) {
		goto L18;
	}
	else if(NONDET_1 == 20) {
		goto L19;
	}
	else if(NONDET_1 == 21) {
		goto L20;
	}
	else if(NONDET_1 < 1) {
L23:;
		mediaUpTo120MB = (unsigned char)1;
		goto L21;
	}
	else if(NONDET_1 > 1 && NONDET_1 < 2) {
		goto L23;
	}
	else if(NONDET_1 > 2 && NONDET_1 < 3) {
		goto L23;
	}
	else if(NONDET_1 > 3 && NONDET_1 < 4) {
		goto L23;
	}
	else if(NONDET_1 > 4 && NONDET_1 < 5) {
		goto L23;
	}
	else if(NONDET_1 > 5 && NONDET_1 < 6) {
		goto L23;
	}
	else if(NONDET_1 > 6 && NONDET_1 < 7) {
		goto L23;
	}
	else if(NONDET_1 > 7 && NONDET_1 < 8) {
		goto L23;
	}
	else if(NONDET_1 > 8 && NONDET_1 < 9) {
		goto L23;
	}
	else if(NONDET_1 > 9 && NONDET_1 < 10) {
		goto L23;
	}
	else if(NONDET_1 > 10 && NONDET_1 < 11) {
		goto L23;
	}
	else if(NONDET_1 > 11 && NONDET_1 < 12) {
		goto L23;
	}
	else if(NONDET_1 > 12 && NONDET_1 < 13) {
		goto L23;
	}
	else if(NONDET_1 > 13 && NONDET_1 < 14) {
		goto L23;
	}
	else if(NONDET_1 > 14 && NONDET_1 < 15) {
		goto L23;
	}
	else if(NONDET_1 > 15 && NONDET_1 < 16) {
		goto L23;
	}
	else if(NONDET_1 > 16 && NONDET_1 < 17) {
		goto L23;
	}
	else if(NONDET_1 > 17 && NONDET_1 < 18) {
		goto L23;
	}
	else if(NONDET_1 > 18 && NONDET_1 < 19) {
		goto L23;
	}
	else if(NONDET_1 > 19 && NONDET_1 < 20) {
		goto L23;
	}
	else if(NONDET_1 > 20 && NONDET_1 < 21) {
		goto L23;
	}
	else {
		goto L23;
	}
}

NTSTATUS DriverEntry(PDRIVER_OBJECT DriverObject , PUNICODE_STRING RegistryPath )
{ NTSTATUS ntStatus ;
ULONG tag__1 ;
PVOID tmp ;
	ntStatus = 0L;
	tmp = ExAllocatePoolWithTag((enum _POOL_TYPE )0, (unsigned long )sizeof(FAST_MUTEX ), tag__1);
	PagingMutex = (struct _FAST_MUTEX *)tmp;
	if(PagingMutex == (0)) {
		return (-1073741670L);
		/* END OF PATH at func_DriverEntry@p8#1 */
	}
	else if(PagingMutex < (0)) {
L1:;
		PagingMutex->Count = 1L;
		PagingMutex->Contention = 0UL;
		KeInitializeEvent(& PagingMutex->Event, (enum _EVENT_TYPE )1, (unsigned char)0);
		return (ntStatus);
		/* END OF PATH at func_DriverEntry@p14#1 */
	}
	else {
		goto L1;
	}
}

void FloppyUnload(PDRIVER_OBJECT DriverObject )
{
	ExFreePool((void *)PagingMutex);
	/* END OF PATH at func_FloppyUnload@p2#1 */
}

NTSTATUS FloppyCreateClose(PDEVICE_OBJECT DeviceObject , PIRP Irp )
{
	myStatus = 0L;
	Irp->IoStatus.__annonCompField4.Status = 0L;
	Irp->IoStatus.Information = 1UL;
	IofCompleteRequest(Irp, (char)0);
	return (0L);
	/* END OF PATH at func_FloppyCreateClose@p5#1 */
}

NTSTATUS FloppyDeviceControl(PDEVICE_OBJECT DeviceObject , PIRP Irp )
{ PIO_STACK_LOCATION irpSp ;
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
BOOLEAN temp__1 ;
ULONG tag__1 ;
int NON_DET_1 ;
int NON_DET_2 ;
int NON_DET_3 ;
int NON_DET_4 ;
int NON_DET_5 ;
int NON_DET_6 ;
int NON_DET_7 ;
int NON_DET_8 ;
int NON_DET_9 ;
int NON_DET_10 ;
int NON_DET_11 ;
NTSTATUS tmp ;
PVOID tmp___0 ;
	disketteExtension = (DISKETTE_EXTENSION *)DeviceObject->DeviceExtension;
	irpSp = Irp->Tail.Overlay.__annonCompField17.__annonCompField16.CurrentStackLocation;
	ExAcquireFastMutex(& disketteExtension->HoldNewReqMutex);
	if(disketteExtension->HoldNewRequests > 0) {
L1:;
		if(NON_DET_1 > 0) {
			ntStatus = FloppyQueueRequest(disketteExtension, Irp);
L2:;
			ExReleaseFastMutex(& disketteExtension->HoldNewReqMutex);
			return (ntStatus);
			/* END OF PATH at func_FloppyDeviceControl@p40#1 */
		}
		else if(NON_DET_1 < 0) {
			ntStatus = FloppyQueueRequest(disketteExtension, Irp);
			goto L2;
		}
		else {
L3:;
			ExReleaseFastMutex(& disketteExtension->HoldNewReqMutex);
			if(MydisketteExtensionIsRemoved > 0) {
L4:;
				Irp->IoStatus.Information = 0UL;
				Irp->IoStatus.__annonCompField4.Status = -1073741738L;
				myStatus = -1073741738L;
				IofCompleteRequest(Irp, (char)0);
				return (-1073741738L);
				/* END OF PATH at func_FloppyDeviceControl@p49#1 */
			}
			else if(MydisketteExtensionIsRemoved < 0) {
				goto L4;
			}
			else {
				if(disketteExtension->IsStarted == 0) {
					s = SKIP1;
					Irp->CurrentLocation = (CHAR )((int )Irp->CurrentLocation + 1);
					Irp->Tail.Overlay.__annonCompField17.__annonCompField16.CurrentStackLocation = Irp->Tail.Overlay.__annonCompField17.__annonCompField16.CurrentStackLocation + 1;
					tmp = IofCallDriver(disketteExtension->TargetObject, Irp);
					return (tmp);
					/* END OF PATH at func_FloppyDeviceControl@p57#1 */
				}
				else if(disketteExtension->IsStarted > 0) {
L5:;
					if(NON_DET_2 == 1) {
						if(irpSp->Parameters.DeviceIoControl.OutputBufferLength < (ULONG )sizeof(MOUNTDEV_NAME )) {
							ntStatus = -1073741811L;
L6:;
							if(ntStatus < 259L) {
								Irp->IoStatus.__annonCompField4.Status = ntStatus;
								myStatus = ntStatus;
								if(ntStatus < 0L) {
									if(ntStatus < -1073741661L) {
										if(ntStatus < -1073741643L) {
											if(ntStatus < -1073741662L) {
												if(ntStatus < -1073741805L) {
													if(ntStatus > -2147483626L) {
														if(ntStatus < -1073741804L) {
															if(ntStatus < -1073741806L) {
																IofCompleteRequest(Irp, (char)0);
L7:;
																return (ntStatus);
																/* END OF PATH at func_FloppyDeviceControl@p242#1 */
															}
															else if(ntStatus == -1073741806L) {
																/* FALSE PATH */ 
															}
															else {
																/* FALSE PATH */ 
															}
														}
														else if(ntStatus == -1073741804L) {
															/* FALSE PATH */ 
														}
														else {
															/* FALSE PATH */ 
														}
													}
													else if(ntStatus == -2147483626L) {
														/* FALSE PATH */ 
													}
													else {
														/* FALSE PATH */ 
													}
												}
												else if(ntStatus == -1073741805L) {
													/* FALSE PATH */ 
												}
												else {
													/* FALSE PATH */ 
												}
											}
											else if(ntStatus == -1073741662L) {
												/* FALSE PATH */ 
											}
											else {
												/* FALSE PATH */ 
											}
										}
										else if(ntStatus == -1073741643L) {
											/* FALSE PATH */ 
										}
										else {
											/* FALSE PATH */ 
										}
									}
									else if(ntStatus == -1073741661L) {
										/* FALSE PATH */ 
									}
									else {
										/* FALSE PATH */ 
									}
								}
								else {
									/* FALSE PATH */ 
								}
							}
							else if(ntStatus > 259L) {
								/* FALSE PATH */ 
							}
							else {
								/* FALSE PATH */ 
							}
						}
						else {
							mountName = (struct _MOUNTDEV_NAME *)Irp->AssociatedIrp.SystemBuffer;
							mountName->NameLength = disketteExtension->DeviceName.Length;
							if(NON_DET_5 > 0) {
L8:;
								ntStatus = -2147483643L;
								Irp->IoStatus.Information = (unsigned long )sizeof(MOUNTDEV_NAME );
L9:;
								if(ntStatus < 259L) {
									Irp->IoStatus.__annonCompField4.Status = ntStatus;
									myStatus = ntStatus;
									if(ntStatus < 0L) {
										if(ntStatus < -1073741661L) {
											if(ntStatus < -1073741643L) {
												if(ntStatus < -1073741662L) {
													if(ntStatus < -1073741805L) {
														if(ntStatus < -2147483626L) {
															if(ntStatus < -1073741804L) {
																if(ntStatus < -1073741806L) {
																	IofCompleteRequest(Irp, (char)0);
																	goto L7;
																}
																else if(ntStatus == -1073741806L) {
																	/* FALSE PATH */ 
																}
																else {
																	/* FALSE PATH */ 
																}
															}
															else if(ntStatus == -1073741804L) {
																/* FALSE PATH */ 
															}
															else {
																/* FALSE PATH */ 
															}
														}
														else if(ntStatus == -2147483626L) {
															/* FALSE PATH */ 
														}
														else {
															/* FALSE PATH */ 
														}
													}
													else if(ntStatus == -1073741805L) {
														/* FALSE PATH */ 
													}
													else {
														/* FALSE PATH */ 
													}
												}
												else if(ntStatus == -1073741662L) {
													/* FALSE PATH */ 
												}
												else {
													/* FALSE PATH */ 
												}
											}
											else if(ntStatus == -1073741643L) {
												/* FALSE PATH */ 
											}
											else {
												/* FALSE PATH */ 
											}
										}
										else if(ntStatus == -1073741661L) {
											/* FALSE PATH */ 
										}
										else {
											/* FALSE PATH */ 
										}
									}
									else {
										/* FALSE PATH */ 
									}
								}
								else if(ntStatus > 259L) {
									/* FALSE PATH */ 
								}
								else {
									/* FALSE PATH */ 
								}
							}
							else if(NON_DET_5 < 0) {
								goto L8;
							}
							else {
								memcpy((void *)(mountName->Name), (void const   *)disketteExtension->DeviceName.Buffer, (unsigned int )mountName->NameLength);
								ntStatus = 0L;
								Irp->IoStatus.Information = (unsigned long )(sizeof(USHORT ) + (unsigned int )mountName->NameLength);
L10:;
								if(ntStatus < 259L) {
									Irp->IoStatus.__annonCompField4.Status = ntStatus;
									myStatus = ntStatus;
									if((ntStatus >= 0L)) {
										IofCompleteRequest(Irp, (char)0);
										goto L7;
									}
									else {
										/* FALSE PATH */ 
									}
								}
								else if(ntStatus > 259L) {
									/* FALSE PATH */ 
								}
								else {
									/* FALSE PATH */ 
								}
							}
						}
					}
					else if(NON_DET_2 == 2) {
						if(NON_DET_3 == 0) {
							ntStatus = -1073741811L;
							goto L6;
						}
						else if(NON_DET_3 > 0) {
L11:;
							uniqueId = (struct _MOUNTDEV_UNIQUE_ID *)Irp->AssociatedIrp.SystemBuffer;
							uniqueId->UniqueIdLength = disketteExtension->InterfaceString.Length;
							if(NON_DET_4 > 0) {
L12:;
								ntStatus = -2147483643L;
								goto L9;
							}
							else if(NON_DET_4 < 0) {
								goto L12;
							}
							else {
								memcpy((void *)(uniqueId->UniqueId), (void const   *)disketteExtension->InterfaceString.Buffer, (unsigned int )uniqueId->UniqueIdLength);
								ntStatus = 0L;
								Irp->IoStatus.Information = (unsigned long )(sizeof(USHORT ) + (unsigned int )uniqueId->UniqueIdLength);
								goto L10;
							}
						}
						else {
							goto L11;
						}
					}
					else if(NON_DET_2 == 3) {
L13:;
						if(NON_DET_6 > 0) {
L14:;
							ntStatus = -1073741811L;
							goto L6;
						}
						else if(NON_DET_6 < 0) {
							goto L14;
						}
						else {
							temp__1 = FlCheckFormatParameters(disketteExtension, (struct _FORMAT_PARAMETERS *)Irp->AssociatedIrp.SystemBuffer);
							if(temp__1 == 0) {
								ntStatus = -1073741811L;
								goto L6;
							}
							else if(temp__1 > 0) {
L15:;
								if(NON_DET_7 > 0) {
L16:;
									if(NON_DET_8 > 0) {
L17:;
										ntStatus = -1073741811L;
										goto L6;
									}
									else if(NON_DET_8 < 0) {
										goto L17;
									}
									else {
										if(NON_DET_9 > 0) {
L18:;
											ntStatus = -1073741811L;
											goto L6;
										}
										else if(NON_DET_9 < 0) {
											goto L18;
										}
										else {
L19:;
L20:;
L21:;
											ntStatus = FlQueueIrpToThread(Irp, disketteExtension);
L22:;
L23:;
											if(ntStatus < 259L) {
L24:;
												Irp->IoStatus.__annonCompField4.Status = ntStatus;
												myStatus = ntStatus;
												if(ntStatus < 0L) {
													if(ntStatus == -1073741661L) {
														IoSetHardErrorOrVerifyDevice(Irp, DeviceObject);
														IofCompleteRequest(Irp, (char)0);
														goto L7;
													}
													else if(ntStatus < -1073741661L) {
														if(ntStatus < -1073741643L) {
L25:;
															if(ntStatus == -1073741662L) {
																IoSetHardErrorOrVerifyDevice(Irp, DeviceObject);
																IofCompleteRequest(Irp, (char)0);
																goto L7;
															}
															else if(ntStatus < -1073741662L) {
L26:;
																if(ntStatus == -1073741805L) {
																	IoSetHardErrorOrVerifyDevice(Irp, DeviceObject);
																	IofCompleteRequest(Irp, (char)0);
																	goto L7;
																}
																else if(ntStatus < -1073741805L) {
																	if(ntStatus == -2147483626L) {
																		IoSetHardErrorOrVerifyDevice(Irp, DeviceObject);
																		IofCompleteRequest(Irp, (char)0);
																		goto L7;
																	}
																	else if(ntStatus < -2147483626L) {
																		if(ntStatus < -1073741804L) {
																			if(ntStatus < -1073741806L) {
																				IofCompleteRequest(Irp, (char)0);
																				goto L7;
																			}
																			else if(ntStatus == -1073741806L) {
																				/* FALSE PATH */ 
																			}
																			else {
																				/* FALSE PATH */ 
																			}
																		}
																		else if(ntStatus == -1073741804L) {
																			/* FALSE PATH */ 
																		}
																		else {
																			/* FALSE PATH */ 
																		}
																	}
																	else {
																		if(ntStatus < -1073741804L) {
L27:;
																			if(ntStatus == -1073741806L) {
																				IoSetHardErrorOrVerifyDevice(Irp, DeviceObject);
																				IofCompleteRequest(Irp, (char)0);
																				goto L7;
																			}
																			else if(ntStatus < -1073741806L) {
																				IofCompleteRequest(Irp, (char)0);
																				goto L7;
																			}
																			else {
																				IofCompleteRequest(Irp, (char)0);
																				goto L7;
																			}
																		}
																		else if(ntStatus == -1073741804L) {
																			/* FALSE PATH */ 
																		}
																		else {
																			/* FALSE PATH */ 
																		}
																	}
																}
																else {
																	if(ntStatus > -2147483626L) {
																		if(ntStatus == -1073741804L) {
																			IoSetHardErrorOrVerifyDevice(Irp, DeviceObject);
																			IofCompleteRequest(Irp, (char)0);
																			goto L7;
																		}
																		else if(ntStatus < -1073741804L) {
																			goto L27;
																		}
																		else {
																			goto L27;
																		}
																	}
																	else if(ntStatus == -2147483626L) {
																		/* FALSE PATH */ 
																	}
																	else {
																		/* FALSE PATH */ 
																	}
																}
															}
															else {
																goto L26;
															}
														}
														else if(ntStatus == -1073741643L) {
															/* FALSE PATH */ 
														}
														else {
															/* FALSE PATH */ 
														}
													}
													else {
														if(ntStatus == -1073741643L) {
															IoSetHardErrorOrVerifyDevice(Irp, DeviceObject);
															IofCompleteRequest(Irp, (char)0);
															goto L7;
														}
														else if(ntStatus < -1073741643L) {
															goto L25;
														}
														else {
															goto L25;
														}
													}
												}
												else {
													IofCompleteRequest(Irp, (char)0);
													goto L7;
												}
											}
											else if(ntStatus > 259L) {
												goto L24;
											}
											else {
												goto L7;
											}
										}
									}
								}
								else if(NON_DET_7 < 0) {
									goto L16;
								}
								else {
									goto L19;
								}
							}
							else {
								goto L15;
							}
						}
					}
					else if(NON_DET_2 == 4) {
						goto L13;
					}
					else if(NON_DET_2 == 5) {
						goto L19;
					}
					else if(NON_DET_2 == 6) {
						goto L20;
					}
					else if(NON_DET_2 == 7) {
						goto L21;
					}
					else if(NON_DET_2 == 8) {
						ntStatus = FlQueueIrpToThread(Irp, disketteExtension);
						goto L22;
					}
					else if(NON_DET_2 == 9) {
L28:;
						lowestDriveMediaType = (DriveMediaLimits + disketteExtension->DriveType)->LowestDriveMediaType;
						highestDriveMediaType = (DriveMediaLimits + disketteExtension->DriveType)->HighestDriveMediaType;
						outputBufferLength = irpSp->Parameters.DeviceIoControl.OutputBufferLength;
						if(outputBufferLength < (ULONG )sizeof(DISK_GEOMETRY )) {
							ntStatus = -1073741789L;
							goto L23;
						}
						else {
							ntStatus = 0L;
							if(outputBufferLength < ((ULONG )sizeof(DISK_GEOMETRY ) * ((highestDriveMediaType - lowestDriveMediaType) + 1U))) {
								ntStatus = -2147483643L;
								highestDriveMediaType = (enum _DRIVE_MEDIA_TYPE )((ULONG )((unsigned int )lowestDriveMediaType - 1U) + outputBufferLength / (ULONG )sizeof(DISK_GEOMETRY ));
								outputBuffer = (struct _DISK_GEOMETRY *)Irp->AssociatedIrp.SystemBuffer;
								i = (unsigned char )lowestDriveMediaType;
L29:;
L30:;
								if(i > (highestDriveMediaType)) {
L31:;
									goto L9;
								}
								else {
									outputBuffer->MediaType = (DriveMediaConstants + i)->MediaType;
									outputBuffer->Cylinders.__annonCompField1.LowPart = (unsigned long )((int )(DriveMediaConstants + i)->MaximumTrack + 1);
									outputBuffer->Cylinders.__annonCompField1.HighPart = 0L;
									outputBuffer->TracksPerCylinder = (unsigned long )(DriveMediaConstants + i)->NumberOfHeads;
									outputBuffer->SectorsPerTrack = (unsigned long )(DriveMediaConstants + i)->SectorsPerTrack;
									outputBuffer->BytesPerSector = (unsigned long )(DriveMediaConstants + i)->BytesPerSector;
									outputBuffer = outputBuffer + 1;
									Irp->IoStatus.Information = Irp->IoStatus.Information + (ULONG_PTR )sizeof(DISK_GEOMETRY );
									i = (UCHAR )((int )i + 1);
									goto L30;
								}
							}
							else {
								outputBuffer = (struct _DISK_GEOMETRY *)Irp->AssociatedIrp.SystemBuffer;
								i = (unsigned char )lowestDriveMediaType;
L32:;
L33:;
								if(i > (highestDriveMediaType)) {
L34:;
									goto L10;
								}
								else {
									outputBuffer->MediaType = (DriveMediaConstants + i)->MediaType;
									outputBuffer->Cylinders.__annonCompField1.LowPart = (unsigned long )((int )(DriveMediaConstants + i)->MaximumTrack + 1);
									outputBuffer->Cylinders.__annonCompField1.HighPart = 0L;
									outputBuffer->TracksPerCylinder = (unsigned long )(DriveMediaConstants + i)->NumberOfHeads;
									outputBuffer->SectorsPerTrack = (unsigned long )(DriveMediaConstants + i)->SectorsPerTrack;
									outputBuffer->BytesPerSector = (unsigned long )(DriveMediaConstants + i)->BytesPerSector;
									outputBuffer = outputBuffer + 1;
									Irp->IoStatus.Information = Irp->IoStatus.Information + (ULONG_PTR )sizeof(DISK_GEOMETRY );
									i = (UCHAR )((int )i + 1);
									goto L33;
								}
							}
						}
					}
					else if(NON_DET_2 == 10) {
						goto L28;
					}
					else if(NON_DET_2 == 11) {
						if(NON_DET_10 > 0) {
L35:;
							if((DeviceObject->Characteristics & 1UL) == 0) {
								ntStatus = -1073741275L;
								goto L23;
							}
							else if((DeviceObject->Characteristics & 1UL) > 0) {
L36:;
								if(NON_DET_11 > 0) {
L37:;
									ntStatus = -1073741811L;
									goto L6;
								}
								else if(NON_DET_11 < 0) {
									goto L37;
								}
								else {
									tmp___0 = ExAllocatePoolWithTag((enum _POOL_TYPE )1, (unsigned long )(sizeof(WCHAR ) * 64U), tag__1);
									valueName = (WCHAR *)tmp___0;
									if(valueName == 0) {
										ntStatus = -1073741670L;
										goto L23;
									}
									else if(valueName > 0) {
L38:;
										memset((void *)valueName, 0, sizeof(WCHAR ) * 64U);
										memcpy((void *)valueName, (void const   *)disketteExtension->DeviceName.Buffer, (unsigned int )disketteExtension->DeviceName.Length);
										driveLetterName.Buffer = driveLetterNameBuffer;
										driveLetterName.MaximumLength = (unsigned short)20;
										driveLetterName.Length = (unsigned short)0;
										memset((void *)(queryTable), 0, 2U * sizeof(RTL_QUERY_REGISTRY_TABLE ));
										queryTable[0].Flags = 36UL;
										queryTable[0].Name = valueName;
										queryTable[0].EntryContext = (void *)(& driveLetterName);
										ntStatus = RtlQueryRegistryValues(0UL, (WCHAR const   *)"\\\000R\000e\000g\000i\000s\000t\000r\000y\000\\\000M\000a\000c\000h\000i\000n\000e\000\\\000S\000y\000s\000t\000e\000m\000\\\000D\000I\000S\000K\000", queryTable, (void *)0, (void *)0);
										if(ntStatus < 0L) {
											ExFreePool((void *)valueName);
											goto L23;
										}
										else {
											if(driveLetterName.Length < 4) {
L39:;
												ntStatus = -1073741275L;
												ExFreePool((void *)valueName);
												goto L23;
											}
											else if(driveLetterName.Length > 4) {
												goto L39;
											}
											else {
												if(*(driveLetterName.Buffer + 0) < 65) {
													ntStatus = -1073741275L;
													ExFreePool((void *)valueName);
													goto L23;
												}
												else {
													if(*(driveLetterName.Buffer + 0) > 90) {
														ntStatus = -1073741275L;
														ExFreePool((void *)valueName);
														goto L23;
													}
													else {
														if(*(driveLetterName.Buffer + 1) < 58) {
L40:;
															ntStatus = -1073741275L;
															ExFreePool((void *)valueName);
															goto L23;
														}
														else if(*(driveLetterName.Buffer + 1) > 58) {
															goto L40;
														}
														else {
															suggestedName = (struct _MOUNTDEV_SUGGESTED_LINK_NAME *)Irp->AssociatedIrp.SystemBuffer;
															suggestedName->UseOnlyIfThereAreNoOtherLinks = (unsigned char)1;
															suggestedName->NameLength = (unsigned short)28;
															Irp->IoStatus.Information = (unsigned long )((long )(& ((MOUNTDEV_SUGGESTED_LINK_NAME *)0)->Name) + 28L);
															if(irpSp->Parameters.DeviceIoControl.OutputBufferLength < Irp->IoStatus.Information) {
																Irp->IoStatus.Information = (unsigned long )sizeof(MOUNTDEV_SUGGESTED_LINK_NAME );
																ntStatus = -2147483643L;
																ExFreePool((void *)valueName);
																goto L9;
															}
															else {
																ExFreePool((void *)valueName);
																memcpy((void *)(suggestedName->Name), (void const   *)"\\\000D\000o\000s\000D\000e\000v\000i\000c\000e\000s\000\\\000", 24U);
																suggestedName->Name[12] = *(driveLetterName.Buffer + 0);
																suggestedName->Name[13] = (unsigned short )':';
																goto L23;
															}
														}
													}
												}
											}
										}
									}
									else {
										goto L38;
									}
								}
							}
							else {
								goto L36;
							}
						}
						else if(NON_DET_10 < 0) {
							goto L35;
						}
						else {
L41:;
							if(NON_DET_11 > 0) {
L42:;
								if(irpSp->Parameters.DeviceIoControl.OutputBufferLength < (ULONG )sizeof(SENSE_DEVISE_STATUS_PTOS )) {
									ntStatus = -1073741811L;
									goto L6;
								}
								else {
									ntStatus = FlQueueIrpToThread(Irp, disketteExtension);
									goto L23;
								}
							}
							else if(NON_DET_11 < 0) {
								goto L42;
							}
							else {
L43:;
								s = SKIP1;
								Irp->CurrentLocation = (CHAR )((int )Irp->CurrentLocation + 1);
								Irp->Tail.Overlay.__annonCompField17.__annonCompField16.CurrentStackLocation = Irp->Tail.Overlay.__annonCompField17.__annonCompField16.CurrentStackLocation + 1;
								ntStatus = IofCallDriver(disketteExtension->TargetObject, Irp);
								return (ntStatus);
								/* END OF PATH at func_FloppyDeviceControl@p214#1 */
							}
						}
					}
					else if(NON_DET_2 == 12) {
						goto L41;
					}
					else if(NON_DET_2 < 1) {
						goto L43;
					}
					else if(NON_DET_2 > 1 && NON_DET_2 < 2) {
						goto L43;
					}
					else if(NON_DET_2 > 2 && NON_DET_2 < 3) {
						goto L43;
					}
					else if(NON_DET_2 > 3 && NON_DET_2 < 4) {
						goto L43;
					}
					else if(NON_DET_2 > 4 && NON_DET_2 < 5) {
						goto L43;
					}
					else if(NON_DET_2 > 5 && NON_DET_2 < 6) {
						goto L43;
					}
					else if(NON_DET_2 > 6 && NON_DET_2 < 7) {
						goto L43;
					}
					else if(NON_DET_2 > 7 && NON_DET_2 < 8) {
						goto L43;
					}
					else if(NON_DET_2 > 8 && NON_DET_2 < 9) {
						goto L43;
					}
					else if(NON_DET_2 > 9 && NON_DET_2 < 10) {
						goto L43;
					}
					else if(NON_DET_2 > 10 && NON_DET_2 < 11) {
						goto L43;
					}
					else if(NON_DET_2 > 11 && NON_DET_2 < 12) {
						goto L43;
					}
					else {
						goto L43;
					}
				}
				else {
					goto L5;
				}
			}
		}
	}
	else if(disketteExtension->HoldNewRequests < 0) {
		goto L1;
	}
	else {
		goto L3;
	}
}

NTSTATUS FloppyReadWrite(PDEVICE_OBJECT DeviceObject , PIRP Irp )
{ PIO_STACK_LOCATION irpSp ;
NTSTATUS ntStatus ;
PDISKETTE_EXTENSION disketteExtension ;
	disketteExtension = (DISKETTE_EXTENSION *)DeviceObject->DeviceExtension;
	irpSp = Irp->Tail.Overlay.__annonCompField17.__annonCompField16.CurrentStackLocation;
	ExAcquireFastMutex(& disketteExtension->HoldNewReqMutex);
	if(disketteExtension->HoldNewRequests > 0) {
		ntStatus = FloppyQueueRequest(disketteExtension, Irp);
L1:;
		ExReleaseFastMutex(& disketteExtension->HoldNewReqMutex);
		return (ntStatus);
		/* END OF PATH at func_FloppyReadWrite@p10#1 */
	}
	else if(disketteExtension->HoldNewRequests < 0) {
		ntStatus = FloppyQueueRequest(disketteExtension, Irp);
		goto L1;
	}
	else {
		ExReleaseFastMutex(& disketteExtension->HoldNewReqMutex);
		if(MydisketteExtensionIsRemoved > 0) {
			if(MydisketteExtensionIsRemoved > 0) {
L2:;
				ntStatus = -1073741738L;
L3:;
				Irp->IoStatus.Information = 0UL;
				Irp->IoStatus.__annonCompField4.Status = ntStatus;
				myStatus = ntStatus;
				IofCompleteRequest(Irp, (char)0);
				return (ntStatus);
				/* END OF PATH at func_FloppyReadWrite@p27#1 */
			}
			else if(MydisketteExtensionIsRemoved < 0) {
				/* FALSE PATH */ 
			}
			else {
				/* FALSE PATH */ 
			}
		}
		else if(MydisketteExtensionIsRemoved < 0) {
			if(MydisketteExtensionIsRemoved < 0) {
				goto L2;
			}
			else if(MydisketteExtensionIsRemoved > 0) {
				/* FALSE PATH */ 
			}
			else {
				/* FALSE PATH */ 
			}
		}
		else {
			if(disketteExtension->IsStarted == 0) {
				if(MydisketteExtensionIsRemoved == 0) {
					ntStatus = -1073741823L;
					goto L3;
				}
				else if(MydisketteExtensionIsRemoved > 0) {
					/* FALSE PATH */ 
				}
				else {
					/* FALSE PATH */ 
				}
			}
			else if(disketteExtension->IsStarted > 0) {
L4:;
				if(disketteExtension->MediaType > 0U) {
					if(irpSp->Parameters.Read.ByteOffset.__annonCompField1.LowPart + irpSp->Parameters.Read.Length > disketteExtension->ByteCapacity) {
						ntStatus = -1073741811L;
L5:;
						if(ntStatus < 259L) {
L6:;
							Irp->IoStatus.__annonCompField4.Status = ntStatus;
							myStatus = ntStatus;
							IofCompleteRequest(Irp, (char)0);
L7:;
							return (ntStatus);
							/* END OF PATH at func_FloppyReadWrite@p54#1 */
						}
						else if(ntStatus > 259L) {
							/* FALSE PATH */ 
						}
						else {
							/* FALSE PATH */ 
						}
					}
					else {
						if((irpSp->Parameters.Read.Length & (disketteExtension->BytesPerSector - 1UL)) < 0UL) {
L8:;
							ntStatus = -1073741811L;
							goto L5;
						}
						else if((irpSp->Parameters.Read.Length & (disketteExtension->BytesPerSector - 1UL)) > 0UL) {
							goto L8;
						}
						else {
L9:;
							if(irpSp->Parameters.Read.Length > 0) {
								ntStatus = FlQueueIrpToThread(Irp, disketteExtension);
L10:;
								if(ntStatus < 259L) {
									goto L6;
								}
								else if(ntStatus > 259L) {
									goto L6;
								}
								else {
									goto L7;
								}
							}
							else if(irpSp->Parameters.Read.Length < 0) {
								ntStatus = FlQueueIrpToThread(Irp, disketteExtension);
								goto L10;
							}
							else {
								Irp->IoStatus.Information = 0UL;
								Irp->IoStatus.__annonCompField4.Status = 0L;
								myStatus = 0L;
								IofCompleteRequest(Irp, (char)0);
								return (0L);
								/* END OF PATH at func_FloppyReadWrite@p47#1 */
							}
						}
					}
				}
				else {
					goto L9;
				}
			}
			else {
				goto L4;
			}
		}
	}
}

NTSTATUS FloppyAddDevice(PDRIVER_OBJECT DriverObject , PDEVICE_OBJECT PhysicalDeviceObject )
{ NTSTATUS ntStatus ;
PDEVICE_OBJECT deviceObject ;
PDISKETTE_EXTENSION disketteExtension ;
FDC_INFO fdcInfo ;
UCHAR arcNameBuffer[256] ;
STRING arcNameString ;
WCHAR deviceNameBuffer[20] ;
UNICODE_STRING deviceName ;
USHORT i ;
ULONG tag__1 ;
PVOID tmp ;
	ntStatus = 0L;
	fdcInfo.BufferCount = 0UL;
	fdcInfo.BufferSize = 0UL;
	ntStatus = FlFdcDeviceIo(PhysicalDeviceObject, (unsigned long )(((7 << 16) | (770 << 2)) | 3), (void *)(& fdcInfo));
	if(ntStatus >= 0L) {
		i = (unsigned short)0;
L1:;
L2:;
		RtlInitUnicodeString(& deviceName, (WCHAR const   *)(deviceNameBuffer));
		ntStatus = IoCreateDevice(DriverObject, (unsigned long )sizeof(DISKETTE_EXTENSION ), & deviceName, 7UL, 261UL, (unsigned char)0, & deviceObject);
		if(ntStatus < -1073741771L) {
L3:;
L4:;
			if(ntStatus >= 0L) {
				disketteExtension = (DISKETTE_EXTENSION *)deviceObject->DeviceExtension;
				tmp = ExAllocatePoolWithTag((enum _POOL_TYPE )1, (unsigned long )deviceName.Length, tag__1);
				disketteExtension->DeviceName.Buffer = (WCHAR *)tmp;
				if(disketteExtension->DeviceName.Buffer == (0)) {
					IoDeleteDevice(deviceObject);
					return (-1073741670L);
					/* END OF PATH at func_FloppyAddDevice@p32#1 */
				}
				else if(disketteExtension->DeviceName.Buffer < (0)) {
L5:;
					disketteExtension->DeviceName.Length = (unsigned short)0;
					disketteExtension->DeviceName.MaximumLength = deviceName.Length;
					RtlCopyUnicodeString(& disketteExtension->DeviceName, & deviceName);
					RtlInitString(& arcNameString, (char const   *)(arcNameBuffer));
					ntStatus = RtlAnsiStringToUnicodeString(& disketteExtension->ArcName, & arcNameString, (unsigned char)1);
					if(ntStatus >= 0L) {
						IoCreateSymbolicLink(& disketteExtension->ArcName, & deviceName);
L6:;
						if(deviceObject->AlignmentRequirement < 1UL) {
							deviceObject->AlignmentRequirement = 1UL;
L7:;
							disketteExtension->DriverObject = DriverObject;
							disketteExtension->UnderlyingPDO = PhysicalDeviceObject;
							disketteExtension->TargetObject = IoAttachDeviceToDeviceStack(deviceObject, PhysicalDeviceObject);
							KeInitializeSemaphore(& disketteExtension->RequestSemaphore, 0L, 2147483647L);
							KeInitializeEvent(& disketteExtension->PowerDownMutex.Event, (enum _EVENT_TYPE )1, (unsigned char)0);
							KeInitializeSpinLock(& disketteExtension->ListSpinLock);
							KeInitializeEvent(& disketteExtension->ThreadReferenceMutex.Event, (enum _EVENT_TYPE )1, (unsigned char)0);
							KeInitializeEvent(& disketteExtension->HoldNewReqMutex.Event, (enum _EVENT_TYPE )1, (unsigned char)0);
							disketteExtension->ThreadReferenceCount = -1L;
							disketteExtension->IsStarted = (unsigned char)0;
							disketteExtension->IsRemoved = (unsigned char)0;
							MydisketteExtensionIsRemoved = 0;
							disketteExtension->HoldNewRequests = (unsigned char)0;
							KeInitializeSpinLock(& disketteExtension->NewRequestQueueSpinLock);
							KeInitializeSpinLock(& disketteExtension->FlCancelSpinLock);
							disketteExtension->FloppyControllerAllocated = (unsigned char)0;
							disketteExtension->ReleaseFdcWithMotorRunning = (unsigned char)0;
							disketteExtension->DeviceObject = deviceObject;
							disketteExtension->IsReadOnly = (unsigned char)0;
							disketteExtension->MediaType = (enum _MEDIA_TYPE )-1;
L8:;
							return (ntStatus);
							/* END OF PATH at func_FloppyAddDevice@p64#1 */
						}
						else {
							goto L7;
						}
					}
					else {
						goto L6;
					}
				}
				else {
					goto L5;
				}
			}
			else {
				goto L8;
			}
		}
		else if(ntStatus > -1073741771L) {
			goto L3;
		}
		else {
			goto L2;
		}
	}
	else {
		return (0L);
		/* END OF PATH at func_FloppyAddDevice@p66#1 */
	}
}

NTSTATUS FloppyPnp(PDEVICE_OBJECT DeviceObject , PIRP Irp )
{ PIO_STACK_LOCATION irpSp ;
PIO_STACK_LOCATION nextIrpSp ;
PDISKETTE_EXTENSION disketteExtension ;
NTSTATUS ntStatus ;
ULONG i ;
KEVENT doneEvent ;
	ntStatus = 0L;
	ExAcquireFastMutex(PagingMutex);
	PagingReferenceCount = PagingReferenceCount + 1UL;
	if(PagingReferenceCount == 1UL) {
		MmResetDriverPaging((void *)DriverEntryNONDET);
L1:;
		ExReleaseFastMutex(PagingMutex);
		disketteExtension = (DISKETTE_EXTENSION *)DeviceObject->DeviceExtension;
		irpSp = Irp->Tail.Overlay.__annonCompField17.__annonCompField16.CurrentStackLocation;
		if(MydisketteExtensionIsRemoved > 0) {
L2:;
			Irp->IoStatus.Information = 0UL;
			Irp->IoStatus.__annonCompField4.Status = -1073741738L;
			myStatus = -1073741738L;
			IofCompleteRequest(Irp, (char)0);
			return (-1073741738L);
			/* END OF PATH at func_FloppyPnp@p21#1 */
		}
		else if(MydisketteExtensionIsRemoved < 0) {
			goto L2;
		}
		else {
			if(irpSp->MinorFunction == 0) {
				ntStatus = FloppyStartDevice(DeviceObject, Irp);
L3:;
				ExAcquireFastMutex(PagingMutex);
				PagingReferenceCount = PagingReferenceCount - 1UL;
				if(PagingReferenceCount == 0UL) {
					MmPageEntireDriver((void *)DriverEntryNONDET);
L4:;
					ExReleaseFastMutex(PagingMutex);
					return (ntStatus);
					/* END OF PATH at func_FloppyPnp@p155#1 */
				}
				else if(PagingReferenceCount < 0UL) {
					goto L4;
				}
				else {
					goto L4;
				}
			}
			else if(irpSp->MinorFunction == 5) {
L5:;
				if(disketteExtension->IsStarted == 0) {
					s = SKIP1;
					Irp->CurrentLocation = (CHAR )((int )Irp->CurrentLocation + 1);
					Irp->Tail.Overlay.__annonCompField17.__annonCompField16.CurrentStackLocation = Irp->Tail.Overlay.__annonCompField17.__annonCompField16.CurrentStackLocation + 1;
					ntStatus = IofCallDriver(disketteExtension->TargetObject, Irp);
					return (ntStatus);
					/* END OF PATH at func_FloppyPnp@p36#1 */
				}
				else if(disketteExtension->IsStarted > 0) {
L6:;
					ExAcquireFastMutex(& disketteExtension->HoldNewReqMutex);
					disketteExtension->HoldNewRequests = (unsigned char)1;
					ExReleaseFastMutex(& disketteExtension->HoldNewReqMutex);
					ntStatus = FlQueueIrpToThread(Irp, disketteExtension);
					if(ntStatus == 259L) {
						KeWaitForSingleObject((void *)disketteExtension->FloppyThread, (enum _KWAIT_REASON )0, (char)0, (unsigned char)0, (LARGE_INTEGER *)((void *)0));
						if(disketteExtension->FloppyThread < (0)) {
L7:;
							ObfDereferenceObject((void *)disketteExtension->FloppyThread);
L8:;
							disketteExtension->FloppyThread = (struct _KTHREAD *)((void *)0);
							Irp->IoStatus.__annonCompField4.Status = 0L;
							myStatus = 0L;
							s = SKIP1;
							Irp->CurrentLocation = (CHAR )((int )Irp->CurrentLocation + 1);
							Irp->Tail.Overlay.__annonCompField17.__annonCompField16.CurrentStackLocation = Irp->Tail.Overlay.__annonCompField17.__annonCompField16.CurrentStackLocation + 1;
							ntStatus = IofCallDriver(disketteExtension->TargetObject, Irp);
L9:;
							goto L3;
						}
						else if(disketteExtension->FloppyThread > (0)) {
							goto L7;
						}
						else {
							goto L8;
						}
					}
					else if(ntStatus < 259L) {
L10:;
						ntStatus = -1073741823L;
						Irp->IoStatus.__annonCompField4.Status = ntStatus;
						myStatus = ntStatus;
						Irp->IoStatus.Information = 0UL;
						IofCompleteRequest(Irp, (char)0);
						goto L9;
					}
					else {
						goto L10;
					}
				}
				else {
					goto L6;
				}
			}
			else if(irpSp->MinorFunction == 1) {
				goto L5;
			}
			else if(irpSp->MinorFunction == 6) {
L11:;
				if(disketteExtension->IsStarted == 0) {
					Irp->IoStatus.__annonCompField4.Status = 0L;
					myStatus = 0L;
					s = SKIP1;
					Irp->CurrentLocation = (CHAR )((int )Irp->CurrentLocation + 1);
					Irp->Tail.Overlay.__annonCompField17.__annonCompField16.CurrentStackLocation = Irp->Tail.Overlay.__annonCompField17.__annonCompField16.CurrentStackLocation + 1;
					ntStatus = IofCallDriver(disketteExtension->TargetObject, Irp);
L12:;
					goto L3;
				}
				else if(disketteExtension->IsStarted > 0) {
L13:;
					Irp->IoStatus.__annonCompField4.Status = 0L;
					myStatus = 0L;
					irpSp = Irp->Tail.Overlay.__annonCompField17.__annonCompField16.CurrentStackLocation;
					nextIrpSp = Irp->Tail.Overlay.__annonCompField17.__annonCompField16.CurrentStackLocation - 1;
					memcpy((void *)nextIrpSp, (void const   *)irpSp, (unsigned int )((long )(& ((IO_STACK_LOCATION *)0)->CompletionRoutine)));
					nextIrpSp->Control = (unsigned char)0;
					KeInitializeEvent(& doneEvent, (enum _EVENT_TYPE )1, (unsigned char)0);
					compRegistered = 1;
					irpSp = Irp->Tail.Overlay.__annonCompField17.__annonCompField16.CurrentStackLocation - 1;
					irpSp->CompletionRoutine = & FloppyPnpComplete;
					irpSp->Context = (void *)(& doneEvent);
					irpSp->Control = (unsigned char)0;
					irpSp->Control = (unsigned char)64;
					irpSp->Control = (unsigned char )((int )irpSp->Control | 128);
					irpSp->Control = (unsigned char )((int )irpSp->Control | 32);
					ntStatus = IofCallDriver(disketteExtension->TargetObject, Irp);
					if(ntStatus == 259L) {
						KeWaitForSingleObject((void *)(& doneEvent), (enum _KWAIT_REASON )0, (char)0, (unsigned char)0, (LARGE_INTEGER *)((void *)0));
						ntStatus = myStatus;
L14:;
						ExAcquireFastMutex(& disketteExtension->HoldNewReqMutex);
						disketteExtension->HoldNewRequests = (unsigned char)0;
						ExReleaseFastMutex(& disketteExtension->HoldNewReqMutex);
						FloppyProcessQueuedRequests(disketteExtension);
						Irp->IoStatus.__annonCompField4.Status = ntStatus;
						myStatus = ntStatus;
						Irp->IoStatus.Information = 0UL;
						IofCompleteRequest(Irp, (char)0);
						goto L12;
					}
					else if(ntStatus < 259L) {
						goto L14;
					}
					else {
						goto L14;
					}
				}
				else {
					goto L13;
				}
			}
			else if(irpSp->MinorFunction == 3) {
				goto L11;
			}
			else if(irpSp->MinorFunction == 4) {
				disketteExtension->IsStarted = (unsigned char)0;
				Irp->IoStatus.__annonCompField4.Status = 0L;
				myStatus = 0L;
				s = SKIP1;
				Irp->CurrentLocation = (CHAR )((int )Irp->CurrentLocation + 1);
				Irp->Tail.Overlay.__annonCompField17.__annonCompField16.CurrentStackLocation = Irp->Tail.Overlay.__annonCompField17.__annonCompField16.CurrentStackLocation + 1;
				ntStatus = IofCallDriver(disketteExtension->TargetObject, Irp);
				goto L3;
			}
			else if(irpSp->MinorFunction == 2) {
				ExAcquireFastMutex(& disketteExtension->HoldNewReqMutex);
				disketteExtension->HoldNewRequests = (unsigned char)0;
				ExReleaseFastMutex(& disketteExtension->HoldNewReqMutex);
				disketteExtension->IsStarted = (unsigned char)0;
				disketteExtension->IsRemoved = (unsigned char)1;
				MydisketteExtensionIsRemoved = 1;
				FloppyProcessQueuedRequests(disketteExtension);
				s = SKIP1;
				Irp->CurrentLocation = (CHAR )((int )Irp->CurrentLocation + 1);
				Irp->Tail.Overlay.__annonCompField17.__annonCompField16.CurrentStackLocation = Irp->Tail.Overlay.__annonCompField17.__annonCompField16.CurrentStackLocation + 1;
				Irp->IoStatus.__annonCompField4.Status = 0L;
				myStatus = 0L;
				ntStatus = IofCallDriver(disketteExtension->TargetObject, Irp);
				if(disketteExtension->InterfaceString.Buffer < (0)) {
L15:;
					IoSetDeviceInterfaceState(& disketteExtension->InterfaceString, (unsigned char)0);
					RtlFreeUnicodeString(& disketteExtension->InterfaceString);
					RtlInitUnicodeString(& disketteExtension->InterfaceString, (WCHAR const   *)((void *)0));
L16:;
					RtlFreeUnicodeString(& disketteExtension->DeviceName);
					RtlInitUnicodeString(& disketteExtension->DeviceName, (WCHAR const   *)((void *)0));
					if(disketteExtension->ArcName.Length < 0) {
L17:;
						IoDeleteSymbolicLink(& disketteExtension->ArcName);
						RtlFreeUnicodeString(& disketteExtension->ArcName);
						RtlInitUnicodeString(& disketteExtension->ArcName, (WCHAR const   *)((void *)0));
L18:;
						IoDetachDevice(disketteExtension->TargetObject);
						IoDeleteDevice(DeviceObject);
						goto L3;
					}
					else if(disketteExtension->ArcName.Length > 0) {
						goto L17;
					}
					else {
						goto L18;
					}
				}
				else if(disketteExtension->InterfaceString.Buffer > (0)) {
					goto L15;
				}
				else {
					goto L16;
				}
			}
			else if(irpSp->MinorFunction < 0) {
L19:;
				s = SKIP1;
				Irp->CurrentLocation = (CHAR )((int )Irp->CurrentLocation + 1);
				Irp->Tail.Overlay.__annonCompField17.__annonCompField16.CurrentStackLocation = Irp->Tail.Overlay.__annonCompField17.__annonCompField16.CurrentStackLocation + 1;
				ntStatus = IofCallDriver(disketteExtension->TargetObject, Irp);
				goto L3;
			}
			else if(irpSp->MinorFunction > 0 && irpSp->MinorFunction < 1) {
				goto L19;
			}
			else if(irpSp->MinorFunction > 1 && irpSp->MinorFunction < 2) {
				goto L19;
			}
			else if(irpSp->MinorFunction > 2 && irpSp->MinorFunction < 3) {
				goto L19;
			}
			else if(irpSp->MinorFunction > 3 && irpSp->MinorFunction < 4) {
				goto L19;
			}
			else if(irpSp->MinorFunction > 4 && irpSp->MinorFunction < 5) {
				goto L19;
			}
			else if(irpSp->MinorFunction > 5 && irpSp->MinorFunction < 6) {
				goto L19;
			}
			else {
				goto L19;
			}
		}
	}
	else if(PagingReferenceCount < 1UL) {
		goto L1;
	}
	else {
		goto L1;
	}
}

NTSTATUS FloppyPower(PDEVICE_OBJECT DeviceObject , PIRP Irp )
{ PDISKETTE_EXTENSION disketteExtension ;
NTSTATUS ntStatus ;
PIO_STACK_LOCATION irpSp ;
POWER_STATE_TYPE type ;
POWER_STATE state ;
BOOLEAN WaitForCompletion ;
	WaitForCompletion = (unsigned char)1;
	ntStatus = myStatus;
	disketteExtension = (DISKETTE_EXTENSION *)DeviceObject->DeviceExtension;
	irpSp = Irp->Tail.Overlay.__annonCompField17.__annonCompField16.CurrentStackLocation;
	type = irpSp->Parameters.Power.Type;
	state = irpSp->Parameters.Power.State;
	if(irpSp->MinorFunction == 3) {
		if(type == 0U) {
			if(state.SystemState > 5U) {
				ntStatus = 0L;
L1:;
				PoStartNextPowerIrp(Irp);
				s = SKIP1;
				Irp->CurrentLocation = (CHAR )((int )Irp->CurrentLocation + 1);
				Irp->Tail.Overlay.__annonCompField17.__annonCompField16.CurrentStackLocation = Irp->Tail.Overlay.__annonCompField17.__annonCompField16.CurrentStackLocation + 1;
				ntStatus = PoCallDriver(disketteExtension->TargetObject, Irp);
				return (ntStatus);
				/* END OF PATH at func_FloppyPower@p57#1 */
			}
			else {
L2:;
				ExAcquireFastMutex(& disketteExtension->ThreadReferenceMutex);
				if(disketteExtension->ThreadReferenceCount >= 0L) {
					ExReleaseFastMutex(& disketteExtension->ThreadReferenceMutex);
					PoStartNextPowerIrp(Irp);
					Irp->IoStatus.Information = 0UL;
					Irp->IoStatus.__annonCompField4.Status = -2147483631L;
					myStatus = -2147483631L;
					IofCompleteRequest(Irp, (char)0);
					return (-2147483631L);
					/* END OF PATH at func_FloppyPower@p28#1 */
				}
				else {
					ExReleaseFastMutex(& disketteExtension->ThreadReferenceMutex);
					ntStatus = 0L;
					goto L1;
				}
			}
		}
		else if(type < 0U) {
			goto L2;
		}
		else {
			goto L2;
		}
	}
	else if(irpSp->MinorFunction == 2) {
		if(type == 0U) {
			ExAcquireFastMutex(& disketteExtension->PowerDownMutex);
			if(state.SystemState == 1U) {
				disketteExtension->PoweringDown = (unsigned char)0;
				WaitForCompletion = (unsigned char)0;
				ExReleaseFastMutex(& disketteExtension->PowerDownMutex);
				if(disketteExtension->FloppyThread < (0)) {
L3:;
					if(WaitForCompletion < 1) {
L4:;
						ntStatus = 0L;
						goto L1;
					}
					else if(WaitForCompletion == 1) {
						/* FALSE PATH */ 
					}
					else {
						/* FALSE PATH */ 
					}
				}
				else if(disketteExtension->FloppyThread > (0)) {
					goto L3;
				}
				else {
					goto L4;
				}
			}
			else if(state.SystemState < 1U) {
L5:;
				WaitForCompletion = (unsigned char)1;
				disketteExtension->PoweringDown = (unsigned char)1;
				ExReleaseFastMutex(& disketteExtension->PowerDownMutex);
				if(disketteExtension->FloppyThread < (0)) {
L6:;
					if(WaitForCompletion == 1) {
						KeWaitForSingleObject((void *)disketteExtension->FloppyThread, (enum _KWAIT_REASON )0, (char)0, (unsigned char)0, (LARGE_INTEGER *)((void *)0));
						goto L4;
					}
					else if(WaitForCompletion < 1) {
						/* FALSE PATH */ 
					}
					else {
						/* FALSE PATH */ 
					}
				}
				else if(disketteExtension->FloppyThread > (0)) {
					goto L6;
				}
				else {
					goto L4;
				}
			}
			else {
				goto L5;
			}
		}
		else if(type < 0U) {
			goto L4;
		}
		else {
			goto L4;
		}
	}
	else if(irpSp->MinorFunction < 2) {
L7:;
		goto L1;
	}
	else if(irpSp->MinorFunction > 2 && irpSp->MinorFunction < 3) {
		goto L7;
	}
	else {
		goto L7;
	}
}

NTSTATUS FloppyPnpComplete(PDEVICE_OBJECT DeviceObject , PIRP Irp , PVOID Context )
{
	KeSetEvent((struct _KEVENT *)Context, 1L, (unsigned char)0);
	return (-1073741802L);
	/* END OF PATH at func_FloppyPnpComplete@p2#1 */
}

NTSTATUS FloppyQueueRequest(PDISKETTE_EXTENSION DisketteExtension , PIRP Irp )
{ KIRQL oldIrql ;
NTSTATUS ntStatus ;
int NONDET_1 ;
	ExAcquireFastMutex(PagingMutex);
	PagingReferenceCount = PagingReferenceCount + 1UL;
	if(PagingReferenceCount == 1UL) {
		MmResetDriverPaging((void *)DriverEntryNONDET);
		ExReleaseFastMutex(PagingMutex);
		InterlockedExchange((LONG *)((PVOID *)(& Irp->CancelRoutine)), (long )((void *)(& FloppyCancelQueuedRequest)));
		if(Irp->Cancel > 0) {
L1:;
			if(NONDET_1 > 0) {
L2:;
				Irp->IoStatus.__annonCompField4.Status = -1073741536L;
				myStatus = -1073741536L;
				Irp->IoStatus.Information = 0UL;
				KfReleaseSpinLock(& DisketteExtension->FlCancelSpinLock, oldIrql);
				IofCompleteRequest(Irp, (char)0);
				ExAcquireFastMutex(PagingMutex);
				PagingReferenceCount = PagingReferenceCount - 1UL;
				if(PagingReferenceCount == 0UL) {
					MmPageEntireDriver((void *)DriverEntryNONDET);
L3:;
					ExReleaseFastMutex(PagingMutex);
					ntStatus = -1073741536L;
L4:;
					return (ntStatus);
					/* END OF PATH at func_FloppyQueueRequest@p34#1 */
				}
				else if(PagingReferenceCount < 0UL) {
					/* FALSE PATH */ 
				}
				else {
					/* FALSE PATH */ 
				}
			}
			else if(NONDET_1 < 0) {
				goto L2;
			}
			else {
L5:;
L6:;
				Irp->IoStatus.__annonCompField4.Status = 259L;
				myStatus = 259L;
				pended = 1;
				ExfInterlockedInsertTailList(& DisketteExtension->NewRequestQueue, & Irp->Tail.Overlay.__annonCompField17.ListEntry, & DisketteExtension->NewRequestQueueSpinLock);
				KfReleaseSpinLock(& DisketteExtension->FlCancelSpinLock, oldIrql);
				ntStatus = 259L;
				goto L4;
			}
		}
		else if(Irp->Cancel < 0) {
			goto L1;
		}
		else {
			goto L6;
		}
	}
	else if(PagingReferenceCount < 1UL) {
		ExReleaseFastMutex(PagingMutex);
		InterlockedExchange((LONG *)((PVOID *)(& Irp->CancelRoutine)), (long )((void *)(& FloppyCancelQueuedRequest)));
		if(Irp->Cancel > 0) {
L7:;
			if(NONDET_1 > 0) {
L8:;
				Irp->IoStatus.__annonCompField4.Status = -1073741536L;
				myStatus = -1073741536L;
				Irp->IoStatus.Information = 0UL;
				KfReleaseSpinLock(& DisketteExtension->FlCancelSpinLock, oldIrql);
				IofCompleteRequest(Irp, (char)0);
				ExAcquireFastMutex(PagingMutex);
				PagingReferenceCount = PagingReferenceCount - 1UL;
				if(PagingReferenceCount < 0UL) {
					goto L3;
				}
				else if(PagingReferenceCount == 0UL) {
					/* FALSE PATH */ 
				}
				else {
					/* FALSE PATH */ 
				}
			}
			else if(NONDET_1 < 0) {
				goto L8;
			}
			else {
				goto L5;
			}
		}
		else if(Irp->Cancel < 0) {
			goto L7;
		}
		else {
			goto L6;
		}
	}
	else {
		ExReleaseFastMutex(PagingMutex);
		InterlockedExchange((LONG *)((PVOID *)(& Irp->CancelRoutine)), (long )((void *)(& FloppyCancelQueuedRequest)));
		if(Irp->Cancel > 0) {
L9:;
			if(NONDET_1 > 0) {
L10:;
				Irp->IoStatus.__annonCompField4.Status = -1073741536L;
				myStatus = -1073741536L;
				Irp->IoStatus.Information = 0UL;
				KfReleaseSpinLock(& DisketteExtension->FlCancelSpinLock, oldIrql);
				IofCompleteRequest(Irp, (char)0);
				ExAcquireFastMutex(PagingMutex);
				PagingReferenceCount = PagingReferenceCount - 1UL;
				if(PagingReferenceCount > 0UL) {
					goto L3;
				}
				else if(PagingReferenceCount == 0UL) {
					/* FALSE PATH */ 
				}
				else {
					/* FALSE PATH */ 
				}
			}
			else if(NONDET_1 < 0) {
				goto L10;
			}
			else {
				goto L5;
			}
		}
		else if(Irp->Cancel < 0) {
			goto L9;
		}
		else {
			goto L6;
		}
	}
}

NTSTATUS FloppyStartDevice(PDEVICE_OBJECT DeviceObject , PIRP Irp )
{ NTSTATUS ntStatus ;
NTSTATUS pnpStatus ;
KEVENT doneEvent ;
FDC_INFO fdcInfo ;
CONFIGURATION_TYPE Dc ;
CONFIGURATION_TYPE Fp ;
PDISKETTE_EXTENSION disketteExtension ;
PIO_STACK_LOCATION irpSp ;
PIO_STACK_LOCATION nextIrpSp ;
INTERFACE_TYPE InterfaceType ;
int NON_DET_1 ;
int BLAST_NONDET ;
	Dc = (enum _CONFIGURATION_TYPE )13;
	Fp = (enum _CONFIGURATION_TYPE )26;
	disketteExtension = (DISKETTE_EXTENSION *)DeviceObject->DeviceExtension;
	irpSp = Irp->Tail.Overlay.__annonCompField17.__annonCompField16.CurrentStackLocation;
	KeInitializeEvent(& doneEvent, (enum _EVENT_TYPE )0, (unsigned char)0);
	irpSp = Irp->Tail.Overlay.__annonCompField17.__annonCompField16.CurrentStackLocation;
	nextIrpSp = Irp->Tail.Overlay.__annonCompField17.__annonCompField16.CurrentStackLocation - 1;
	memcpy((void *)nextIrpSp, (void const   *)irpSp, (unsigned int )((long )(& ((IO_STACK_LOCATION *)0)->CompletionRoutine)));
	nextIrpSp->Control = (unsigned char)0;
	compRegistered = 1;
	irpSp = Irp->Tail.Overlay.__annonCompField17.__annonCompField16.CurrentStackLocation - 1;
	irpSp->CompletionRoutine = & FloppyPnpComplete;
	irpSp->Context = (void *)(& doneEvent);
	irpSp->Control = (unsigned char)0;
	irpSp->Control = (unsigned char)64;
	irpSp->Control = (unsigned char )((int )irpSp->Control | 128);
	irpSp->Control = (unsigned char )((int )irpSp->Control | 32);
	ntStatus = IofCallDriver(disketteExtension->TargetObject, Irp);
	if(ntStatus == 259L) {
		ntStatus = KeWaitForSingleObject((void *)(& doneEvent), (enum _KWAIT_REASON )0, (char)0, (unsigned char)0, (LARGE_INTEGER *)((void *)0));
		ntStatus = myStatus;
L1:;
		fdcInfo.BufferCount = 0UL;
		fdcInfo.BufferSize = 0UL;
		ntStatus = FlFdcDeviceIo(disketteExtension->TargetObject, (unsigned long )(((7 << 16) | (770 << 2)) | 3), (void *)(& fdcInfo));
		if(ntStatus >= 0L) {
			disketteExtension->MaxTransferSize = fdcInfo.MaxTransferSize;
			if(fdcInfo.AcpiBios > 0) {
L2:;
				if(fdcInfo.AcpiFdiSupported > 0) {
					ntStatus = FlAcpiConfigureFloppy(disketteExtension, & fdcInfo);
L3:;
					if(disketteExtension->DriveType == 4) {
L4:;
L5:;
						if(ntStatus >= 0L) {
							if(NON_DET_1 > 0) {
L6:;
								disketteExtension->DeviceUnit = (unsigned char )fdcInfo.UnitNumber;
								disketteExtension->DriveOnValue = (unsigned char )fdcInfo.UnitNumber;
L7:;
								pnpStatus = IoRegisterDeviceInterface(disketteExtension->UnderlyingPDO, & MOUNTDEV_MOUNTED_DEVICE_GUID, (UNICODE_STRING *)((void *)0), & disketteExtension->InterfaceString);
								if(pnpStatus >= 0L) {
									pnpStatus = IoSetDeviceInterfaceState(& disketteExtension->InterfaceString, (unsigned char)1);
L8:;
									disketteExtension->IsStarted = (unsigned char)1;
									ExAcquireFastMutex(& disketteExtension->HoldNewReqMutex);
									disketteExtension->HoldNewRequests = (unsigned char)0;
									ExReleaseFastMutex(& disketteExtension->HoldNewReqMutex);
									FloppyProcessQueuedRequests(disketteExtension);
L9:;
									Irp->IoStatus.__annonCompField4.Status = ntStatus;
									myStatus = ntStatus;
									IofCompleteRequest(Irp, (char)0);
									return (ntStatus);
									/* END OF PATH at func_FloppyStartDevice@p80#1 */
								}
								else {
									goto L8;
								}
							}
							else if(NON_DET_1 < 0) {
								goto L6;
							}
							else {
								disketteExtension->DeviceUnit = (unsigned char )fdcInfo.PeripheralNumber;
								disketteExtension->DriveOnValue = (unsigned char )(fdcInfo.PeripheralNumber | (unsigned long )(16 << fdcInfo.PeripheralNumber));
								goto L7;
							}
						}
						else {
							goto L9;
						}
					}
					else if(disketteExtension->DriveType < 4) {
						goto L4;
					}
					else {
						goto L4;
					}
				}
				else if(fdcInfo.AcpiFdiSupported < 0) {
					ntStatus = FlAcpiConfigureFloppy(disketteExtension, & fdcInfo);
					goto L3;
				}
				else {
L10:;
					if(disketteExtension->DriveType == 4) {
L11:;
						InterfaceType = (enum _INTERFACE_TYPE )0;
L12:;
L13:;
						if(InterfaceType >= 17U) {
L14:;
L15:;
							goto L5;
						}
						else {
							fdcInfo.BusType = InterfaceType;
							ntStatus = IoQueryDeviceDescription(& fdcInfo.BusType, & fdcInfo.BusNumber, & Dc, & fdcInfo.ControllerNumber, & Fp, & fdcInfo.PeripheralNumber, & FlConfigCallBack, (void *)disketteExtension);
							if(ntStatus >= 0L) {
								goto L14;
							}
							else {
								InterfaceType = (INTERFACE_TYPE )((unsigned int )InterfaceType + 1U);
								goto L13;
							}
						}
					}
					else if(disketteExtension->DriveType < 4) {
						goto L11;
					}
					else {
						goto L11;
					}
				}
			}
			else if(fdcInfo.AcpiBios < 0) {
				goto L2;
			}
			else {
				goto L10;
			}
		}
		else {
			goto L9;
		}
	}
	else if(ntStatus < 259L) {
		goto L1;
	}
	else {
		goto L1;
	}
}

void FloppyProcessQueuedRequests(PDISKETTE_EXTENSION DisketteExtension )
{ KIRQL oldIrql ;
PLIST_ENTRY headOfList ;
PIRP currentIrp ;
PIO_STACK_LOCATION irpSp ;
int NONDET_1 ;
int temp__1 ;
	headOfList = ExfInterlockedRemoveHeadList(& DisketteExtension->NewRequestQueue, & DisketteExtension->NewRequestQueueSpinLock);
L1:;
L2:;
	if(headOfList == (0)) {
L3:;
		KfReleaseSpinLock(& DisketteExtension->FlCancelSpinLock, oldIrql);
		/* END OF PATH at func_FloppyProcessQueuedRequests@p46#1 */
	}
	else if(headOfList < (0)) {
		currentIrp = (IRP *)((CHAR *)headOfList - (unsigned long )(& ((IRP *)0)->Tail.Overlay.__annonCompField17.ListEntry));
		if(temp__1 > 0) {
L4:;
			irpSp = currentIrp->Tail.Overlay.__annonCompField17.__annonCompField16.CurrentStackLocation;
			KfReleaseSpinLock(& DisketteExtension->FlCancelSpinLock, oldIrql);
			if(currentIrp < 0) {
				if(MydisketteExtensionIsRemoved > 0) {
L5:;
					currentIrp->IoStatus.Information = 0UL;
					currentIrp->IoStatus.__annonCompField4.Status = -1073741738L;
					IofCompleteRequest(currentIrp, (char)0);
L6:;
					if(currentIrp < 0) {
L7:;
						ExAcquireFastMutex(PagingMutex);
						PagingReferenceCount = PagingReferenceCount - 1UL;
						if(PagingReferenceCount == 0UL) {
							MmPageEntireDriver((void *)DriverEntryNONDET);
L8:;
							ExReleaseFastMutex(PagingMutex);
L9:;
							headOfList = ExfInterlockedRemoveHeadList(& DisketteExtension->NewRequestQueue, & DisketteExtension->NewRequestQueueSpinLock);
							goto L2;
						}
						else if(PagingReferenceCount < 0UL) {
							goto L8;
						}
						else {
							goto L8;
						}
					}
					else if(currentIrp > 0) {
						/* FALSE PATH */ 
					}
					else {
						/* FALSE PATH */ 
					}
				}
				else if(MydisketteExtensionIsRemoved < 0) {
					goto L5;
				}
				else {
					if(irpSp->MajorFunction == 3) {
						FloppyReadWrite(DisketteExtension->DeviceObject, currentIrp);
L10:;
L11:;
						goto L6;
					}
					else if(irpSp->MajorFunction == 4) {
						FloppyReadWrite(DisketteExtension->DeviceObject, currentIrp);
						goto L10;
					}
					else if(irpSp->MajorFunction == 14) {
						FloppyDeviceControl(DisketteExtension->DeviceObject, currentIrp);
						goto L11;
					}
					else if(irpSp->MajorFunction < 3) {
L12:;
						currentIrp->IoStatus.Information = 0UL;
						currentIrp->IoStatus.__annonCompField4.Status = -1073741823L;
						IofCompleteRequest(currentIrp, (char)0);
						goto L11;
					}
					else if(irpSp->MajorFunction > 3 && irpSp->MajorFunction < 4) {
						goto L12;
					}
					else if(irpSp->MajorFunction > 4 && irpSp->MajorFunction < 14) {
						goto L12;
					}
					else {
						goto L12;
					}
				}
			}
			else if(currentIrp > 0) {
				/* FALSE PATH */ 
			}
			else {
				/* FALSE PATH */ 
			}
		}
		else if(temp__1 < 0) {
			goto L4;
		}
		else {
L13:;
			currentIrp->Tail.Overlay.__annonCompField17.ListEntry.Flink = (struct _LIST_ENTRY *)((void *)0);
			currentIrp = (struct _IRP *)((void *)0);
			KfReleaseSpinLock(& DisketteExtension->FlCancelSpinLock, oldIrql);
			if(currentIrp == 0) {
				if(currentIrp == 0) {
					goto L9;
				}
				else if(currentIrp > 0) {
					/* FALSE PATH */ 
				}
				else {
					/* FALSE PATH */ 
				}
			}
			else if(currentIrp > 0) {
				/* FALSE PATH */ 
			}
			else {
				/* FALSE PATH */ 
			}
		}
	}
	else {
		currentIrp = (IRP *)((CHAR *)headOfList - (unsigned long )(& ((IRP *)0)->Tail.Overlay.__annonCompField17.ListEntry));
		if(temp__1 > 0) {
L14:;
			irpSp = currentIrp->Tail.Overlay.__annonCompField17.__annonCompField16.CurrentStackLocation;
			KfReleaseSpinLock(& DisketteExtension->FlCancelSpinLock, oldIrql);
			if(currentIrp > 0) {
				if(MydisketteExtensionIsRemoved > 0) {
L15:;
					currentIrp->IoStatus.Information = 0UL;
					currentIrp->IoStatus.__annonCompField4.Status = -1073741738L;
					IofCompleteRequest(currentIrp, (char)0);
L16:;
					if(currentIrp > 0) {
						goto L7;
					}
					else if(currentIrp < 0) {
						/* FALSE PATH */ 
					}
					else {
						/* FALSE PATH */ 
					}
				}
				else if(MydisketteExtensionIsRemoved < 0) {
					goto L15;
				}
				else {
					if(irpSp->MajorFunction == 3) {
						FloppyReadWrite(DisketteExtension->DeviceObject, currentIrp);
L17:;
L18:;
						goto L16;
					}
					else if(irpSp->MajorFunction == 4) {
						FloppyReadWrite(DisketteExtension->DeviceObject, currentIrp);
						goto L17;
					}
					else if(irpSp->MajorFunction == 14) {
						FloppyDeviceControl(DisketteExtension->DeviceObject, currentIrp);
						goto L18;
					}
					else if(irpSp->MajorFunction < 3) {
L19:;
						currentIrp->IoStatus.Information = 0UL;
						currentIrp->IoStatus.__annonCompField4.Status = -1073741823L;
						IofCompleteRequest(currentIrp, (char)0);
						goto L18;
					}
					else if(irpSp->MajorFunction > 3 && irpSp->MajorFunction < 4) {
						goto L19;
					}
					else if(irpSp->MajorFunction > 4 && irpSp->MajorFunction < 14) {
						goto L19;
					}
					else {
						goto L19;
					}
				}
			}
			else if(currentIrp < 0) {
				/* FALSE PATH */ 
			}
			else {
				/* FALSE PATH */ 
			}
		}
		else if(temp__1 < 0) {
			goto L14;
		}
		else {
			goto L13;
		}
	}
}

void FloppyCancelQueuedRequest(PDEVICE_OBJECT DeviceObject , PIRP Irp )
{ PDISKETTE_EXTENSION disketteExtension ;
KIRQL oldIrql ;
PLIST_ENTRY EEX_Blink ;
PLIST_ENTRY EEX_Flink ;
	disketteExtension = (DISKETTE_EXTENSION *)DeviceObject->DeviceExtension;
	Irp->IoStatus.__annonCompField4.Status = -1073741536L;
	myStatus = -1073741536L;
	Irp->IoStatus.Information = 0UL;
	if(Irp->Tail.Overlay.__annonCompField17.ListEntry.Flink > 0) {
L1:;
		EEX_Flink = Irp->Tail.Overlay.__annonCompField17.ListEntry.Flink;
		EEX_Blink = Irp->Tail.Overlay.__annonCompField17.ListEntry.Blink;
		EEX_Blink->Flink = EEX_Flink;
		EEX_Flink->Blink = EEX_Blink;
L2:;
		KfReleaseSpinLock(& disketteExtension->FlCancelSpinLock, oldIrql);
		IoReleaseCancelSpinLock(Irp->CancelIrql);
		IofCompleteRequest(Irp, (char)0);
		ExAcquireFastMutex(PagingMutex);
		PagingReferenceCount = PagingReferenceCount - 1UL;
		if(PagingReferenceCount == 0UL) {
			MmPageEntireDriver((void *)DriverEntryNONDET);
L3:;
			ExReleaseFastMutex(PagingMutex);
			/* END OF PATH at func_FloppyCancelQueuedRequest@p22#1 */
		}
		else if(PagingReferenceCount < 0UL) {
			goto L3;
		}
		else {
			goto L3;
		}
	}
	else if(Irp->Tail.Overlay.__annonCompField17.ListEntry.Flink < 0) {
		goto L1;
	}
	else {
		goto L2;
	}
}

char *malloc(int i )
{ int BLAST_NONDET ;
	if(BLAST_NONDET > 0) {
L1:;
		return ((char *)0);
		/* END OF PATH at func_malloc@p3#1 */
	}
	else if(BLAST_NONDET < 0) {
		goto L1;
	}
	else {
		return ((char *)1);
		/* END OF PATH at func_malloc@p6#1 */
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

PLIST_ENTRY ExfInterlockedRemoveHeadList(PLIST_ENTRY ListHead , PKSPIN_LOCK Lock )
{
	return ((struct _LIST_ENTRY *)((void *)0));
	/* END OF PATH at func_ExfInterlockedRemoveHeadList@p1#1 */
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
	tmp = malloc((int )sizeof(CONFIGURATION_INFORMATION ));
	return ((struct _CONFIGURATION_INFORMATION *)((void *)tmp));
	/* END OF PATH at func_IoGetConfigurationInformation@p3#1 */
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

void IoReleaseCancelSpinLock(KIRQL Irql )
{
	/* END OF PATH at func_IoReleaseCancelSpinLock@p1#1 */
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

void IoSetHardErrorOrVerifyDevice(PIRP Irp , PDEVICE_OBJECT DeviceObject )
{
	/* END OF PATH at func_IoSetHardErrorOrVerifyDevice@p1#1 */
}

void stubMoreProcessingRequired(void)
{
	s = MPR1;
	/* END OF PATH at func_stubMoreProcessingRequired@p2#1 */
}

KIRQL KeAcquireSpinLockRaiseToDpc(PKSPIN_LOCK SpinLock )
{
	return ((unsigned char)0);
	/* END OF PATH at func_KeAcquireSpinLockRaiseToDpc@p1#1 */
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

void KeInitializeSemaphore(PRKSEMAPHORE Semaphore , LONG Count , LONG Limit )
{
	/* END OF PATH at func_KeInitializeSemaphore@p1#1 */
}

void KeInitializeSpinLock(PKSPIN_LOCK SpinLock )
{
	/* END OF PATH at func_KeInitializeSpinLock@p1#1 */
}

int KeGetCurrentThread(void)
{ int res ;
	return (res);
	/* END OF PATH at func_KeGetCurrentThread@p2#1 */
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

void MmUnlockPages(PMDL MemoryDescriptorList )
{
	/* END OF PATH at func_MmUnlockPages@p1#1 */
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

void ObfDereferenceObject(PVOID Object )
{
	/* END OF PATH at func_ObfDereferenceObject@p1#1 */
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

SIZE_T RtlCompareMemory(void *Source1 , void *Source2 , SIZE_T Length )
{ SIZE_T r ;
	return (r);
	/* END OF PATH at func_RtlCompareMemory@p2#1 */
}

void RtlCopyUnicodeString(PUNICODE_STRING DestinationString , PUNICODE_STRING SourceString )
{
	/* END OF PATH at func_RtlCopyUnicodeString@p1#1 */
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
	PagingReferenceCount = 0UL;
	PagingMutex = (struct _FAST_MUTEX *)((void *)0);
	/* END OF PATH at func__BLAST_init@p18#1 */
}

PLIST_ENTRY ExfInterlockedInsertTailList(PLIST_ENTRY ListHead , PLIST_ENTRY ListEntry , PKSPIN_LOCK Lock )
{
	return ((struct _LIST_ENTRY *)((void *)0));
	/* END OF PATH at func_ExfInterlockedInsertTailList@p1#1 */
}

PLIST_ENTRY ExfInterlockedInsertHeadList(PLIST_ENTRY ListHead , PLIST_ENTRY ListEntry , PKSPIN_LOCK Lock )
{
	return ((struct _LIST_ENTRY *)((void *)0));
	/* END OF PATH at func_ExfInterlockedInsertHeadList@p1#1 */
}

NTSTATUS FlRecalibrateDriveAbstraction(void)
{ int NONDET ;
NTSTATUS ntStatus ;
	if(NONDET == 1) {
		ntStatus = -1073741670L;
L1:;
		return (ntStatus);
		/* END OF PATH at func_FlRecalibrateDriveAbstraction@p21#1 */
	}
	else if(NONDET == 2) {
		ntStatus = 0L;
		goto L1;
	}
	else if(NONDET == 3) {
		ntStatus = -1073741823L;
		goto L1;
	}
	else if(NONDET == 4) {
		ntStatus = 259L;
		goto L1;
	}
	else if(NONDET < 1) {
L2:;
		ntStatus = -1073741464L;
		goto L1;
	}
	else if(NONDET > 1 && NONDET < 2) {
		goto L2;
	}
	else if(NONDET > 2 && NONDET < 3) {
		goto L2;
	}
	else if(NONDET > 3 && NONDET < 4) {
		goto L2;
	}
	else {
		goto L2;
	}
}

NTSTATUS FlReadWrite(PDISKETTE_EXTENSION DisketteExtension , PIRP Irp , BOOLEAN DriveStarted )
{ PIO_STACK_LOCATION irpSp ;
BOOLEAN writeOperation ;
NTSTATUS status ;
PDRIVE_MEDIA_CONSTANTS driveMediaConstants ;
ULONG byteToSectorShift ;
ULONG currentSector ;
ULONG firstSector ;
ULONG lastSector ;
ULONG trackSize ;
UCHAR sectorsPerTrack ;
UCHAR numberOfHeads ;
UCHAR currentHead ;
UCHAR currentCylinder ;
UCHAR trackSector ;
PCHAR userBuffer ;
UCHAR skew ;
UCHAR skewDelta ;
UCHAR numTransferSectors ;
PMDL mdl ;
PCHAR ioBuffer ;
ULONG ioOffset ;
	irpSp = Irp->Tail.Overlay.__annonCompField17.__annonCompField16.CurrentStackLocation;
	if(irpSp->MajorFunction == 4) {
		if(DisketteExtension->IsReadOnly > 0) {
L1:;
			return (-1073741811L);
			/* END OF PATH at func_FlReadWrite@p25#1 */
		}
		else if(DisketteExtension->IsReadOnly < 0) {
			goto L1;
		}
		else {
			writeOperation = (unsigned char)1;
			if(DriveStarted > 0) {
L2:;
				status = 0L;
				if((status >= 0L)) {
L3:;
					if(((KUSER_SHARED_DATA *)4292804608U)->AlternativeArchitecture == 1U) {
						FlHdbit(DisketteExtension);
L4:;
						if(DisketteExtension->MediaType == 0U) {
L5:;
							return (-1073741804L);
							/* END OF PATH at func_FlReadWrite@p40#1 */
						}
						else if(DisketteExtension->MediaType < 0U) {
L6:;
							driveMediaConstants = & DisketteExtension->DriveMediaConstants;
							byteToSectorShift = (unsigned long )(7 + (int )driveMediaConstants->SectorLengthCode);
							firstSector = irpSp->Parameters.Read.ByteOffset.__annonCompField1.LowPart >> byteToSectorShift;
							lastSector = firstSector + (irpSp->Parameters.Read.Length >> byteToSectorShift);
							sectorsPerTrack = driveMediaConstants->SectorsPerTrack;
							numberOfHeads = driveMediaConstants->NumberOfHeads;
							if(userBuffer == (0)) {
L7:;
								return (-1073741670L);
								/* END OF PATH at func_FlReadWrite@p49#1 */
							}
							else if(userBuffer < (0)) {
L8:;
								trackSize = (unsigned long )sectorsPerTrack << byteToSectorShift;
								skew = (unsigned char)0;
								skewDelta = driveMediaConstants->SkewDelta;
								currentSector = firstSector;
L9:;
L10:;
								if(currentSector >= lastSector) {
L11:;
L12:;
									Irp->IoStatus.Information = (currentSector - firstSector) << byteToSectorShift;
									if(status >= 0L) {
										if(firstSector == 0UL) {
											FlConsolidateMediaTypeWithBootSector(DisketteExtension, (struct _BOOT_SECTOR_INFO *)userBuffer);
L13:;
											return (status);
											/* END OF PATH at func_FlReadWrite@p100#1 */
										}
										else if(firstSector < 0UL) {
											goto L13;
										}
										else {
											goto L13;
										}
									}
									else {
										goto L13;
									}
								}
								else {
									currentCylinder = (unsigned char )((currentSector / (ULONG )sectorsPerTrack) / (ULONG )numberOfHeads);
									trackSector = (unsigned char )(currentSector % (unsigned long )sectorsPerTrack);
									currentHead = (unsigned char )((currentSector / (ULONG )sectorsPerTrack) % (unsigned long )numberOfHeads);
									numTransferSectors = (unsigned char )((int )sectorsPerTrack - (int )trackSector);
									if(lastSector - currentSector < numTransferSectors) {
										numTransferSectors = (unsigned char )(lastSector - currentSector);
L14:;
										if(trackSize > DisketteExtension->MaxTransferSize) {
											FlAllocateIoBuffer(DisketteExtension, trackSize);
											if(DisketteExtension->IoBuffer == 0) {
L15:;
												return (-1073741670L);
												/* END OF PATH at func_FlReadWrite@p66#1 */
											}
											else if(DisketteExtension->IoBuffer > 0) {
L16:;
												mdl = DisketteExtension->IoBufferMdl;
												ioBuffer = (CHAR *)DisketteExtension->IoBuffer;
												ioOffset = 0UL;
												if(writeOperation > 0) {
L17:;
													if(skew >= numTransferSectors + trackSector) {
														skew = (unsigned char)0;
L18:;
														if(skew < trackSector) {
															skew = trackSector;
															status = FlReadWriteTrack(DisketteExtension, mdl, ioOffset + ((unsigned long )skew - (unsigned long )trackSector), writeOperation, currentCylinder, currentHead, skew, (unsigned char )(((int )numTransferSectors + (int )trackSector) - (int )skew), (unsigned char)1);
															if(status >= 0L) {
																if(skew <= trackSector) {
L19:;
																	skew = (unsigned char )(((int )numTransferSectors + (int )trackSector) % (int )sectorsPerTrack);
																	if((status >= 0L)) {
L20:;
																		if(writeOperation > 0) {
L21:;
																			skew = (unsigned char )(((int )skew + (int )skewDelta) % (int )sectorsPerTrack);
																			currentSector = currentSector + (ULONG )numTransferSectors;
																			goto L10;
																		}
																		else if(writeOperation == 0) {
																			/* FALSE PATH */ 
																		}
																		else {
																			/* FALSE PATH */ 
																		}
																	}
																	else {
																		/* FALSE PATH */ 
																	}
																}
																else {
																	/* FALSE PATH */ 
																}
															}
															else {
L22:;
																skew = (unsigned char )(((int )numTransferSectors + (int )trackSector) % (int )sectorsPerTrack);
																if(status < 0L) {
L23:;
																	goto L11;
																}
																else {
																	/* FALSE PATH */ 
																}
															}
														}
														else {
															status = FlReadWriteTrack(DisketteExtension, mdl, ioOffset + ((unsigned long )skew - (unsigned long )trackSector), writeOperation, currentCylinder, currentHead, skew, (unsigned char )(((int )numTransferSectors + (int )trackSector) - (int )skew), (unsigned char)1);
															if(status >= 0L) {
																if(skew > trackSector) {
																	status = FlReadWriteTrack(DisketteExtension, mdl, ioOffset, writeOperation, currentCylinder, currentHead, trackSector, (unsigned char )((int )skew - (int )trackSector), (unsigned char)0);
																	if(status < 0L) {
																		goto L23;
																	}
																	else {
																		goto L20;
																	}
																}
																else {
																	goto L19;
																}
															}
															else {
																goto L22;
															}
														}
													}
													else {
														goto L18;
													}
												}
												else if(writeOperation < 0) {
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
										else {
											mdl = Irp->MdlAddress;
											ioOffset = (currentSector - firstSector) << byteToSectorShift;
											goto L17;
										}
									}
									else {
										goto L14;
									}
								}
							}
							else {
								goto L8;
							}
						}
						else {
							goto L6;
						}
					}
					else if(((KUSER_SHARED_DATA *)4292804608U)->AlternativeArchitecture < 1U) {
						goto L4;
					}
					else {
						goto L4;
					}
				}
				else {
					/* FALSE PATH */ 
				}
			}
			else if(DriveStarted < 0) {
				goto L2;
			}
			else {
				status = FlStartDrive(DisketteExtension, Irp, writeOperation, (unsigned char)1, (unsigned char )(! (! ((int )irpSp->Flags & 2))));
				if(status < 0L) {
L24:;
					return (status);
					/* END OF PATH at func_FlReadWrite@p35#1 */
				}
				else {
					goto L3;
				}
			}
		}
	}
	else if(irpSp->MajorFunction < 4) {
L25:;
		writeOperation = (unsigned char)0;
		if(DriveStarted > 0) {
L26:;
			status = 0L;
			if((status >= 0L)) {
L27:;
				if(((KUSER_SHARED_DATA *)4292804608U)->AlternativeArchitecture == 1U) {
					FlHdbit(DisketteExtension);
L28:;
					if(DisketteExtension->MediaType == 0U) {
						goto L5;
					}
					else if(DisketteExtension->MediaType < 0U) {
L29:;
						driveMediaConstants = & DisketteExtension->DriveMediaConstants;
						byteToSectorShift = (unsigned long )(7 + (int )driveMediaConstants->SectorLengthCode);
						firstSector = irpSp->Parameters.Read.ByteOffset.__annonCompField1.LowPart >> byteToSectorShift;
						lastSector = firstSector + (irpSp->Parameters.Read.Length >> byteToSectorShift);
						sectorsPerTrack = driveMediaConstants->SectorsPerTrack;
						numberOfHeads = driveMediaConstants->NumberOfHeads;
						if(userBuffer == (0)) {
							goto L7;
						}
						else if(userBuffer < (0)) {
L30:;
							trackSize = (unsigned long )sectorsPerTrack << byteToSectorShift;
							skew = (unsigned char)0;
							skewDelta = driveMediaConstants->SkewDelta;
							currentSector = firstSector;
L31:;
							if(currentSector >= lastSector) {
								goto L11;
							}
							else {
								currentCylinder = (unsigned char )((currentSector / (ULONG )sectorsPerTrack) / (ULONG )numberOfHeads);
								trackSector = (unsigned char )(currentSector % (unsigned long )sectorsPerTrack);
								currentHead = (unsigned char )((currentSector / (ULONG )sectorsPerTrack) % (unsigned long )numberOfHeads);
								numTransferSectors = (unsigned char )((int )sectorsPerTrack - (int )trackSector);
								if(lastSector - currentSector < numTransferSectors) {
									numTransferSectors = (unsigned char )(lastSector - currentSector);
L32:;
									if(trackSize > DisketteExtension->MaxTransferSize) {
										FlAllocateIoBuffer(DisketteExtension, trackSize);
										if(DisketteExtension->IoBuffer == 0) {
											goto L15;
										}
										else if(DisketteExtension->IoBuffer > 0) {
L33:;
											mdl = DisketteExtension->IoBufferMdl;
											ioBuffer = (CHAR *)DisketteExtension->IoBuffer;
											ioOffset = 0UL;
											if(writeOperation == 0) {
L34:;
												if(skew >= numTransferSectors + trackSector) {
													skew = (unsigned char)0;
L35:;
													if(skew < trackSector) {
														skew = trackSector;
														status = FlReadWriteTrack(DisketteExtension, mdl, ioOffset + ((unsigned long )skew - (unsigned long )trackSector), writeOperation, currentCylinder, currentHead, skew, (unsigned char )(((int )numTransferSectors + (int )trackSector) - (int )skew), (unsigned char)1);
														if(status >= 0L) {
															if(skew <= trackSector) {
L36:;
																skew = (unsigned char )(((int )numTransferSectors + (int )trackSector) % (int )sectorsPerTrack);
																if((status >= 0L)) {
L37:;
																	if(writeOperation == 0) {
																		if(trackSize > DisketteExtension->MaxTransferSize) {
																			goto L21;
																		}
																		else {
																			goto L21;
																		}
																	}
																	else if(writeOperation > 0) {
																		/* FALSE PATH */ 
																	}
																	else {
																		/* FALSE PATH */ 
																	}
																}
																else {
																	/* FALSE PATH */ 
																}
															}
															else {
																/* FALSE PATH */ 
															}
														}
														else {
															goto L22;
														}
													}
													else {
														status = FlReadWriteTrack(DisketteExtension, mdl, ioOffset + ((unsigned long )skew - (unsigned long )trackSector), writeOperation, currentCylinder, currentHead, skew, (unsigned char )(((int )numTransferSectors + (int )trackSector) - (int )skew), (unsigned char)1);
														if(status >= 0L) {
															if(skew > trackSector) {
																status = FlReadWriteTrack(DisketteExtension, mdl, ioOffset, writeOperation, currentCylinder, currentHead, trackSector, (unsigned char )((int )skew - (int )trackSector), (unsigned char)0);
																if(status < 0L) {
																	goto L23;
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
															goto L22;
														}
													}
												}
												else {
													goto L35;
												}
											}
											else if(writeOperation > 0) {
												/* FALSE PATH */ 
											}
											else {
												/* FALSE PATH */ 
											}
										}
										else {
											goto L33;
										}
									}
									else {
										mdl = Irp->MdlAddress;
										ioOffset = (currentSector - firstSector) << byteToSectorShift;
										goto L34;
									}
								}
								else {
									goto L32;
								}
							}
						}
						else {
							goto L30;
						}
					}
					else {
						goto L29;
					}
				}
				else if(((KUSER_SHARED_DATA *)4292804608U)->AlternativeArchitecture < 1U) {
					goto L28;
				}
				else {
					goto L28;
				}
			}
			else {
				/* FALSE PATH */ 
			}
		}
		else if(DriveStarted < 0) {
			goto L26;
		}
		else {
			status = FlStartDrive(DisketteExtension, Irp, writeOperation, (unsigned char)1, (unsigned char )(! (! ((int )irpSp->Flags & 2))));
			if(status < 0L) {
				goto L24;
			}
			else {
				goto L27;
			}
		}
	}
	else {
		goto L25;
	}
}

void FlCheckBootSector(PDISKETTE_EXTENSION DisketteExtension )
{ PBOOT_SECTOR_INFO bootSector ;
LARGE_INTEGER offset ;
PIRP irp ;
NTSTATUS status ;
ULONG tag__1 ;
SIZE_T temp_1 ;
PVOID tmp ;
int tmp___0 ;
	tmp = ExAllocatePoolWithTag((enum _POOL_TYPE )4, temp_1, (unsigned long )tag_1);
	bootSector = (struct _BOOT_SECTOR_INFO *)tmp;
	if(bootSector == 0) {
		/* END OF PATH at func_FlCheckBootSector@p12#1 */
	}
	else if(bootSector > 0) {
L1:;
		offset.__annonCompField1.LowPart = 0UL;
		offset.__annonCompField1.HighPart = 0L;
		irp = IoBuildAsynchronousFsdRequest(3UL, DisketteExtension->DeviceObject, (void *)bootSector, temp_1, & offset, (struct _IO_STATUS_BLOCK *)((void *)0));
		if(irp == 0) {
			ExFreePool((void *)bootSector);
			/* END OF PATH at func_FlCheckBootSector@p19#1 */
		}
		else if(irp > 0) {
L2:;
			irp->CurrentLocation = (CHAR )((int )irp->CurrentLocation - 1);
			irp->Tail.Overlay.__annonCompField17.__annonCompField16.CurrentStackLocation = irp->Tail.Overlay.__annonCompField17.__annonCompField16.CurrentStackLocation - 1;
			tmp___0 = (int )FlReadWrite(DisketteExtension, irp, 1);
			status = (long )tmp___0;
			MmUnlockPages(irp->MdlAddress);
			IoFreeMdl(irp->MdlAddress);
			IoFreeIrp(irp);
			ExFreePool((void *)bootSector);
			/* END OF PATH at func_FlCheckBootSector@p29#1 */
		}
		else {
			goto L2;
		}
	}
	else {
		goto L1;
	}
}

PMDL IoAllocateMdl(PVOID VirtualAddress , ULONG Length , BOOLEAN SecondaryBuffer , BOOLEAN ChargeQuota , PIRP Irp )
{ int BLAST_NONDET ;
char *tmp ;
	if(BLAST_NONDET == 0) {
		tmp = malloc((int )sizeof(MDL ));
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

NTSTATUS FlFormat(PDISKETTE_EXTENSION DisketteExtension , PIRP Irp )
{ LARGE_INTEGER headSettleTime ;
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
UCHAR oldretryCount ;
BOOLEAN bufferOverflow ;
FDC_DISK_CHANGE_PARMS fdcDiskChangeParms ;
int temp_1 ;
int temp_2 ;
int temp_3 ;
ULONG length ;
	numberOfBadTracks = (UCHAR )0;
	bufferOverflow = (BOOLEAN )0;
	irpSp = Irp->Tail.Overlay.__annonCompField17.__annonCompField16.CurrentStackLocation;
	formatParameters = (struct _FORMAT_PARAMETERS *)Irp->AssociatedIrp.SystemBuffer;
	if(temp_1 > 0) {
L1:;
		formatExParameters = (struct _FORMAT_EX_PARAMETERS *)Irp->AssociatedIrp.SystemBuffer;
L2:;
		badTrackBufferLength = irpSp->Parameters.DeviceIoControl.OutputBufferLength;
		driveMediaType = (DriveMediaLimits + DisketteExtension->DriveType)->HighestDriveMediaType;
L3:;
L4:;
		if((DriveMediaConstants + driveMediaType)->MediaType < formatParameters->MediaType) {
L5:;
			if(driveMediaType <= (DriveMediaLimits + DisketteExtension->DriveType)->LowestDriveMediaType) {
L6:;
L7:;
				driveMediaConstants = DriveMediaConstants + driveMediaType;
				DisketteExtension->MediaType = formatParameters->MediaType;
				DisketteExtension->DriveMediaType = driveMediaType;
				DisketteExtension->DriveMediaConstants = *(DriveMediaConstants + driveMediaType);
				if(formatExParameters > 0) {
					DisketteExtension->DriveMediaConstants.SectorsPerTrack = (unsigned char )formatExParameters->SectorsPerTrack;
					DisketteExtension->DriveMediaConstants.FormatGapLength = (unsigned char )formatExParameters->FormatGapLength;
					driveMediaConstants = & DisketteExtension->DriveMediaConstants;
					DisketteExtension->BytesPerSector = (unsigned long )driveMediaConstants->BytesPerSector;
					DisketteExtension->ByteCapacity = (unsigned long )((((int )driveMediaConstants->BytesPerSector * (int )driveMediaConstants->SectorsPerTrack) * (1 + (int )driveMediaConstants->MaximumTrack)) * (int )driveMediaConstants->NumberOfHeads);
					currentTrack = (unsigned char )(formatParameters->StartCylinderNumber * (ULONG )driveMediaConstants->NumberOfHeads + formatParameters->StartHeadNumber);
					endTrack = (unsigned char )(formatParameters->EndCylinderNumber * (ULONG )driveMediaConstants->NumberOfHeads + formatParameters->EndHeadNumber);
					if(((KUSER_SHARED_DATA *)4292804608U)->AlternativeArchitecture == 1U) {
						FlHdbit(DisketteExtension);
L8:;
						if(DisketteExtension->LastDriveMediaType < driveMediaType) {
							ntStatus = FlDatarateSpecifyConfigure(DisketteExtension);
L9:;
							if(ntStatus < 0L) {
L10:;
								return (ntStatus);
								/* END OF PATH at func_FlFormat@p59#1 */
							}
							else {
L11:;
								DisketteExtension->IsReadOnly = (unsigned char)0;
L12:;
L13:;
								DisketteExtension->FifoBuffer[0] = (unsigned char)16;
								DisketteExtension->FifoBuffer[1] = DisketteExtension->DeviceUnit;
								DisketteExtension->FifoBuffer[2] = (unsigned char )((int )currentTrack / (int )driveMediaConstants->NumberOfHeads << (int )driveMediaConstants->CylinderShift);
								ntStatus = FlIssueCommand(DisketteExtension, DisketteExtension->FifoBuffer, DisketteExtension->FifoBuffer, (struct _MDL *)((void *)0), 0UL, 0UL);
								if(ntStatus >= 0L) {
									if(DisketteExtension->FifoBuffer[0] & 32 > 0) {
L14:;
										if(DisketteExtension->FifoBuffer[1] == ((currentTrack / driveMediaConstants->NumberOfHeads << driveMediaConstants->CylinderShift))) {
											headSettleTime.__annonCompField1.LowPart = (unsigned long )(- (10000 * (int )driveMediaConstants->HeadSettleTime));
											headSettleTime.__annonCompField1.HighPart = -1L;
											KeDelayExecutionThread((char)0, (unsigned char)0, & headSettleTime);
											if(((KUSER_SHARED_DATA *)4292804608U)->AlternativeArchitecture < 1U) {
L15:;
												DisketteExtension->FifoBuffer[0] = (unsigned char)84;
												DisketteExtension->FifoBuffer[1] = DisketteExtension->DeviceUnit;
												ntStatus = FlIssueCommand(DisketteExtension, DisketteExtension->FifoBuffer, DisketteExtension->FifoBuffer, (struct _MDL *)((void *)0), 0UL, 0UL);
L16:;
L17:;
L18:;
												if(ntStatus < 0L) {
L19:;
													return (ntStatus);
													/* END OF PATH at func_FlFormat@p85#1 */
												}
												else {
													whichSector = (unsigned char)0;
L20:;
L21:;
													if(whichSector >= driveMediaConstants->SectorsPerTrack) {
L22:;
														retryCount = (unsigned char)0;
L23:;
L24:;
														length = (unsigned long )driveMediaConstants->BytesPerSector;
														DisketteExtension->FifoBuffer[0] = (unsigned char)71;
														DisketteExtension->FifoBuffer[1] = (unsigned char )(((int )currentTrack % (int )driveMediaConstants->NumberOfHeads << 2) | (int )DisketteExtension->DeviceUnit);
														DisketteExtension->FifoBuffer[2] = driveMediaConstants->SectorLengthCode;
														DisketteExtension->FifoBuffer[3] = driveMediaConstants->SectorsPerTrack;
														DisketteExtension->FifoBuffer[4] = driveMediaConstants->FormatGapLength;
														DisketteExtension->FifoBuffer[5] = driveMediaConstants->FormatFillCharacter;
														ntStatus = FlIssueCommand(DisketteExtension, DisketteExtension->FifoBuffer, DisketteExtension->FifoBuffer, DisketteExtension->IoBufferMdl, 0UL, length);
														if(ntStatus >= 0L) {
															if(DisketteExtension->FifoBuffer[0] & 208 > 0) {
L25:;
																DisketteExtension->HardwareFailed = (unsigned char)1;
																ntStatus = FlInterpretError(DisketteExtension->FifoBuffer[1], DisketteExtension->FifoBuffer[2]);
L26:;
																oldretryCount = retryCount;
																retryCount = (unsigned char )((int )retryCount + 1);
																if(ntStatus < 0L) {
																	if(oldretryCount >= 3) {
L27:;
L28:;
																		if(ntStatus < 0L) {
																			if(((KUSER_SHARED_DATA *)4292804608U)->AlternativeArchitecture == 1U) {
																				DisketteExtension->FifoBuffer[0] = (unsigned char)14;
																				DisketteExtension->FifoBuffer[1] = DisketteExtension->DeviceUnit;
																				ntStatus = FlIssueCommand(DisketteExtension, DisketteExtension->FifoBuffer, DisketteExtension->FifoBuffer, (struct _MDL *)((void *)0), 0UL, 0UL);
																				if(ntStatus < 0L) {
																					return (ntStatus);
																					/* END OF PATH at func_FlFormat@p137#1 */
																				}
																				else {
																					if(DisketteExtension->FifoBuffer[0] & 32 > 0) {
L29:;
																						driveStatus = (unsigned char)127;
L30:;
L31:;
																						if(DisketteExtension->DriveType < 0) {
L32:;
																							if(driveStatus & 128 > 0) {
L33:;
																								return (-1073741805L);
																								/* END OF PATH at func_FlFormat@p148#1 */
																							}
																							else if(driveStatus & 128 < 0) {
																								goto L33;
																							}
																							else {
L34:;
																								if(badTrackBufferLength >= ((numberOfBadTracks + 1) * sizeof(BAD_TRACK_NUMBER ))) {
																									badTrackBuffer = (USHORT *)Irp->AssociatedIrp.SystemBuffer;
																									*(badTrackBuffer + numberOfBadTracks) = (unsigned short )currentTrack;
L35:;
																									numberOfBadTracks = (UCHAR )((int )numberOfBadTracks + 1);
L36:;
																									currentTrack = (UCHAR )((int )currentTrack + 1);
																									if(currentTrack > endTrack) {
L37:;
																										if(ntStatus >= 0L) {
																											if(bufferOverflow > 0) {
L38:;
																												ntStatus = -2147483643L;
L39:;
																												return (ntStatus);
																												/* END OF PATH at func_FlFormat@p163#1 */
																											}
																											else if(bufferOverflow < 0) {
																												goto L38;
																											}
																											else {
																												goto L39;
																											}
																										}
																										else {
																											goto L39;
																										}
																									}
																									else {
																										goto L13;
																									}
																								}
																								else {
																									bufferOverflow = (unsigned char)1;
																									goto L35;
																								}
																							}
																						}
																						else if(DisketteExtension->DriveType > 0) {
																							goto L32;
																						}
																						else {
																							goto L34;
																						}
																					}
																					else if(DisketteExtension->FifoBuffer[0] & 32 < 0) {
																						goto L29;
																					}
																					else {
																						driveStatus = (unsigned char)128;
																						goto L30;
																					}
																				}
																			}
																			else if(((KUSER_SHARED_DATA *)4292804608U)->AlternativeArchitecture < 1U) {
																				ntStatus = FlFdcDeviceIo(DisketteExtension->TargetObject, (unsigned long )(((7 << 16) | (776 << 2)) | 3), (void *)(& fdcDiskChangeParms));
L40:;
																				driveStatus = fdcDiskChangeParms.DriveStatus;
																				goto L31;
																			}
																			else {
																				ntStatus = FlFdcDeviceIo(DisketteExtension->TargetObject, (unsigned long )(((7 << 16) | (776 << 2)) | 3), (void *)(& fdcDiskChangeParms));
																				goto L40;
																			}
																		}
																		else {
																			goto L36;
																		}
																	}
																	else {
																		goto L24;
																	}
																}
																else {
																	/* END OF PATH at func_FlFormat@p100#3 */
																}
															}
															else if(DisketteExtension->FifoBuffer[0] & 208 < 0) {
																goto L25;
															}
															else {
																if(DisketteExtension->FifoBuffer[1] & 16 > 0) {
L41:;
																	DisketteExtension->HardwareFailed = (unsigned char)1;
																	ntStatus = FlInterpretError(DisketteExtension->FifoBuffer[1], DisketteExtension->FifoBuffer[2]);
																	goto L26;
																}
																else if(DisketteExtension->FifoBuffer[1] & 16 < 0) {
																	goto L41;
																}
																else {
																	if(DisketteExtension->FifoBuffer[2] < 0) {
L42:;
																		DisketteExtension->HardwareFailed = (unsigned char)1;
																		ntStatus = FlInterpretError(DisketteExtension->FifoBuffer[1], DisketteExtension->FifoBuffer[2]);
																		goto L26;
																	}
																	else if(DisketteExtension->FifoBuffer[2] > 0) {
																		goto L42;
																	}
																	else {
																		goto L26;
																	}
																}
															}
														}
														else {
															goto L26;
														}
													}
													else {
														*(DisketteExtension->IoBuffer + (int )whichSector * 4) = (unsigned char )((int )currentTrack / (int )driveMediaConstants->NumberOfHeads);
														*(DisketteExtension->IoBuffer + ((int )whichSector * 4 + 1)) = (unsigned char )((int )currentTrack % (int )driveMediaConstants->NumberOfHeads);
														if(formatExParameters > 0) {
L43:;
															*(DisketteExtension->IoBuffer + ((int )whichSector * 4 + 2)) = (unsigned char )formatExParameters->SectorNumber[whichSector];
L44:;
															*(DisketteExtension->IoBuffer + ((int )whichSector * 4 + 3)) = driveMediaConstants->SectorLengthCode;
															whichSector = (UCHAR )((int )whichSector + 1);
															goto L21;
														}
														else if(formatExParameters < 0) {
															/* FALSE PATH */ 
														}
														else {
															/* FALSE PATH */ 
														}
													}
												}
											}
											else if(((KUSER_SHARED_DATA *)4292804608U)->AlternativeArchitecture > 1U) {
												goto L15;
											}
											else {
												goto L16;
											}
										}
										else if(DisketteExtension->FifoBuffer[1] < ((currentTrack / driveMediaConstants->NumberOfHeads << driveMediaConstants->CylinderShift))) {
L45:;
											DisketteExtension->HardwareFailed = (unsigned char)1;
											ntStatus = -1073741464L;
											goto L17;
										}
										else {
											goto L45;
										}
									}
									else if(DisketteExtension->FifoBuffer[0] & 32 < 0) {
										goto L14;
									}
									else {
										DisketteExtension->HardwareFailed = (unsigned char)1;
										ntStatus = -1073741464L;
										goto L18;
									}
								}
								else {
									goto L18;
								}
							}
						}
						else if(DisketteExtension->LastDriveMediaType > driveMediaType) {
							ntStatus = FlDatarateSpecifyConfigure(DisketteExtension);
							goto L9;
						}
						else {
							goto L11;
						}
					}
					else if(((KUSER_SHARED_DATA *)4292804608U)->AlternativeArchitecture < 1U) {
						goto L8;
					}
					else {
						goto L8;
					}
				}
				else if(formatExParameters < 0) {
					DisketteExtension->DriveMediaConstants.SectorsPerTrack = (unsigned char )formatExParameters->SectorsPerTrack;
					DisketteExtension->DriveMediaConstants.FormatGapLength = (unsigned char )formatExParameters->FormatGapLength;
					driveMediaConstants = & DisketteExtension->DriveMediaConstants;
					DisketteExtension->BytesPerSector = (unsigned long )driveMediaConstants->BytesPerSector;
					DisketteExtension->ByteCapacity = (unsigned long )((((int )driveMediaConstants->BytesPerSector * (int )driveMediaConstants->SectorsPerTrack) * (1 + (int )driveMediaConstants->MaximumTrack)) * (int )driveMediaConstants->NumberOfHeads);
					currentTrack = (unsigned char )(formatParameters->StartCylinderNumber * (ULONG )driveMediaConstants->NumberOfHeads + formatParameters->StartHeadNumber);
					endTrack = (unsigned char )(formatParameters->EndCylinderNumber * (ULONG )driveMediaConstants->NumberOfHeads + formatParameters->EndHeadNumber);
					if(((KUSER_SHARED_DATA *)4292804608U)->AlternativeArchitecture == 1U) {
						FlHdbit(DisketteExtension);
L46:;
						if(DisketteExtension->LastDriveMediaType < driveMediaType) {
							ntStatus = FlDatarateSpecifyConfigure(DisketteExtension);
L47:;
							if(ntStatus < 0L) {
								goto L10;
							}
							else {
L48:;
								DisketteExtension->IsReadOnly = (unsigned char)0;
L49:;
								DisketteExtension->FifoBuffer[0] = (unsigned char)16;
								DisketteExtension->FifoBuffer[1] = DisketteExtension->DeviceUnit;
								DisketteExtension->FifoBuffer[2] = (unsigned char )((int )currentTrack / (int )driveMediaConstants->NumberOfHeads << (int )driveMediaConstants->CylinderShift);
								ntStatus = FlIssueCommand(DisketteExtension, DisketteExtension->FifoBuffer, DisketteExtension->FifoBuffer, (struct _MDL *)((void *)0), 0UL, 0UL);
								if(ntStatus >= 0L) {
									if(DisketteExtension->FifoBuffer[0] & 32 > 0) {
L50:;
										if(DisketteExtension->FifoBuffer[1] == ((currentTrack / driveMediaConstants->NumberOfHeads << driveMediaConstants->CylinderShift))) {
											headSettleTime.__annonCompField1.LowPart = (unsigned long )(- (10000 * (int )driveMediaConstants->HeadSettleTime));
											headSettleTime.__annonCompField1.HighPart = -1L;
											KeDelayExecutionThread((char)0, (unsigned char)0, & headSettleTime);
											if(((KUSER_SHARED_DATA *)4292804608U)->AlternativeArchitecture < 1U) {
L51:;
												DisketteExtension->FifoBuffer[0] = (unsigned char)84;
												DisketteExtension->FifoBuffer[1] = DisketteExtension->DeviceUnit;
												ntStatus = FlIssueCommand(DisketteExtension, DisketteExtension->FifoBuffer, DisketteExtension->FifoBuffer, (struct _MDL *)((void *)0), 0UL, 0UL);
L52:;
L53:;
L54:;
												if(ntStatus < 0L) {
													goto L19;
												}
												else {
													whichSector = (unsigned char)0;
L55:;
													if(whichSector >= driveMediaConstants->SectorsPerTrack) {
L56:;
														retryCount = (unsigned char)0;
														goto L23;
													}
													else {
														*(DisketteExtension->IoBuffer + (int )whichSector * 4) = (unsigned char )((int )currentTrack / (int )driveMediaConstants->NumberOfHeads);
														*(DisketteExtension->IoBuffer + ((int )whichSector * 4 + 1)) = (unsigned char )((int )currentTrack % (int )driveMediaConstants->NumberOfHeads);
														if(formatExParameters < 0) {
															goto L43;
														}
														else if(formatExParameters > 0) {
															/* FALSE PATH */ 
														}
														else {
															/* FALSE PATH */ 
														}
													}
												}
											}
											else if(((KUSER_SHARED_DATA *)4292804608U)->AlternativeArchitecture > 1U) {
												goto L51;
											}
											else {
												goto L52;
											}
										}
										else if(DisketteExtension->FifoBuffer[1] < ((currentTrack / driveMediaConstants->NumberOfHeads << driveMediaConstants->CylinderShift))) {
L57:;
											DisketteExtension->HardwareFailed = (unsigned char)1;
											ntStatus = -1073741464L;
											goto L53;
										}
										else {
											goto L57;
										}
									}
									else if(DisketteExtension->FifoBuffer[0] & 32 < 0) {
										goto L50;
									}
									else {
										DisketteExtension->HardwareFailed = (unsigned char)1;
										ntStatus = -1073741464L;
										goto L54;
									}
								}
								else {
									goto L54;
								}
							}
						}
						else if(DisketteExtension->LastDriveMediaType > driveMediaType) {
							ntStatus = FlDatarateSpecifyConfigure(DisketteExtension);
							goto L47;
						}
						else {
							goto L48;
						}
					}
					else if(((KUSER_SHARED_DATA *)4292804608U)->AlternativeArchitecture < 1U) {
						goto L46;
					}
					else {
						goto L46;
					}
				}
				else {
					driveMediaConstants = & DisketteExtension->DriveMediaConstants;
					DisketteExtension->BytesPerSector = (unsigned long )driveMediaConstants->BytesPerSector;
					DisketteExtension->ByteCapacity = (unsigned long )((((int )driveMediaConstants->BytesPerSector * (int )driveMediaConstants->SectorsPerTrack) * (1 + (int )driveMediaConstants->MaximumTrack)) * (int )driveMediaConstants->NumberOfHeads);
					currentTrack = (unsigned char )(formatParameters->StartCylinderNumber * (ULONG )driveMediaConstants->NumberOfHeads + formatParameters->StartHeadNumber);
					endTrack = (unsigned char )(formatParameters->EndCylinderNumber * (ULONG )driveMediaConstants->NumberOfHeads + formatParameters->EndHeadNumber);
					if(((KUSER_SHARED_DATA *)4292804608U)->AlternativeArchitecture == 1U) {
						FlHdbit(DisketteExtension);
L58:;
						if(DisketteExtension->LastDriveMediaType < driveMediaType) {
							ntStatus = FlDatarateSpecifyConfigure(DisketteExtension);
L59:;
							if(ntStatus < 0L) {
								goto L10;
							}
							else {
L60:;
								DisketteExtension->IsReadOnly = (unsigned char)0;
L61:;
								DisketteExtension->FifoBuffer[0] = (unsigned char)16;
								DisketteExtension->FifoBuffer[1] = DisketteExtension->DeviceUnit;
								DisketteExtension->FifoBuffer[2] = (unsigned char )((int )currentTrack / (int )driveMediaConstants->NumberOfHeads << (int )driveMediaConstants->CylinderShift);
								ntStatus = FlIssueCommand(DisketteExtension, DisketteExtension->FifoBuffer, DisketteExtension->FifoBuffer, (struct _MDL *)((void *)0), 0UL, 0UL);
								if(ntStatus >= 0L) {
									if(DisketteExtension->FifoBuffer[0] & 32 > 0) {
L62:;
										if(DisketteExtension->FifoBuffer[1] == ((currentTrack / driveMediaConstants->NumberOfHeads << driveMediaConstants->CylinderShift))) {
											headSettleTime.__annonCompField1.LowPart = (unsigned long )(- (10000 * (int )driveMediaConstants->HeadSettleTime));
											headSettleTime.__annonCompField1.HighPart = -1L;
											KeDelayExecutionThread((char)0, (unsigned char)0, & headSettleTime);
											if(((KUSER_SHARED_DATA *)4292804608U)->AlternativeArchitecture < 1U) {
L63:;
												DisketteExtension->FifoBuffer[0] = (unsigned char)84;
												DisketteExtension->FifoBuffer[1] = DisketteExtension->DeviceUnit;
												ntStatus = FlIssueCommand(DisketteExtension, DisketteExtension->FifoBuffer, DisketteExtension->FifoBuffer, (struct _MDL *)((void *)0), 0UL, 0UL);
L64:;
L65:;
L66:;
												if(ntStatus < 0L) {
													goto L19;
												}
												else {
													whichSector = (unsigned char)0;
L67:;
													if(whichSector >= driveMediaConstants->SectorsPerTrack) {
														goto L56;
													}
													else {
														*(DisketteExtension->IoBuffer + (int )whichSector * 4) = (unsigned char )((int )currentTrack / (int )driveMediaConstants->NumberOfHeads);
														*(DisketteExtension->IoBuffer + ((int )whichSector * 4 + 1)) = (unsigned char )((int )currentTrack % (int )driveMediaConstants->NumberOfHeads);
														if(formatExParameters == 0) {
															*(DisketteExtension->IoBuffer + ((int )whichSector * 4 + 2)) = (unsigned char )((int )whichSector + 1);
															goto L44;
														}
														else if(formatExParameters > 0) {
															/* FALSE PATH */ 
														}
														else {
															/* FALSE PATH */ 
														}
													}
												}
											}
											else if(((KUSER_SHARED_DATA *)4292804608U)->AlternativeArchitecture > 1U) {
												goto L63;
											}
											else {
												goto L64;
											}
										}
										else if(DisketteExtension->FifoBuffer[1] < ((currentTrack / driveMediaConstants->NumberOfHeads << driveMediaConstants->CylinderShift))) {
L68:;
											DisketteExtension->HardwareFailed = (unsigned char)1;
											ntStatus = -1073741464L;
											goto L65;
										}
										else {
											goto L68;
										}
									}
									else if(DisketteExtension->FifoBuffer[0] & 32 < 0) {
										goto L62;
									}
									else {
										DisketteExtension->HardwareFailed = (unsigned char)1;
										ntStatus = -1073741464L;
										goto L66;
									}
								}
								else {
									goto L66;
								}
							}
						}
						else if(DisketteExtension->LastDriveMediaType > driveMediaType) {
							ntStatus = FlDatarateSpecifyConfigure(DisketteExtension);
							goto L59;
						}
						else {
							goto L60;
						}
					}
					else if(((KUSER_SHARED_DATA *)4292804608U)->AlternativeArchitecture < 1U) {
						goto L58;
					}
					else {
						goto L58;
					}
				}
			}
			else {
				driveMediaType = (DRIVE_MEDIA_TYPE )((unsigned int )driveMediaType - 1U);
				goto L4;
			}
		}
		else if((DriveMediaConstants + driveMediaType)->MediaType > formatParameters->MediaType) {
			goto L5;
		}
		else {
			/* END OF PATH at func_FlFormat@p33#3 */
		}
	}
	else if(temp_1 < 0) {
		goto L1;
	}
	else {
		formatExParameters = (struct _FORMAT_EX_PARAMETERS *)((void *)0);
		goto L2;
	}
}

void FloppyThread(PVOID Context )
{ PIRP irp ;
PIO_STACK_LOCATION irpSp ;
PLIST_ENTRY request ;
PDISKETTE_EXTENSION disketteExtension ;
NTSTATUS ntStatus ;
NTSTATUS waitStatus ;
LARGE_INTEGER queueWait ;
LARGE_INTEGER acquireWait ;
int temp_1 ;
int temp_2 ;
int temp_3 ;
int i ;
int tmp ;
int tmp___0 ;
PDISK_GEOMETRY outputBuffer ;
int tmp___1 ;
PSENSE_DEVISE_STATUS_PTOS outputBuffer___0 ;
	disketteExtension = (DISKETTE_EXTENSION *)Context;
	ntStatus = 0L;
	tmp = KeGetCurrentThread();
	KeSetPriorityThread(tmp, 16);
	queueWait.QuadPart = -30000000;
	acquireWait.QuadPart = -150000000;
	i = 0;
L1:;
L2:;
	if(i >= 5) {
L3:;
		/* END OF PATH at func_FloppyThread@p227#1 */
	}
	else {
		waitStatus = KeWaitForSingleObject((void *)(& disketteExtension->RequestSemaphore), (enum _KWAIT_REASON )0, (char)0, (unsigned char)0, & queueWait);
		if(waitStatus == 258L) {
			if(((KUSER_SHARED_DATA *)4292804608U)->AlternativeArchitecture < 1U) {
L4:;
				if(disketteExtension->FloppyControllerAllocated > 0) {
L5:;
					disketteExtension->FloppyControllerAllocated = (unsigned char)0;
L6:;
					ExAcquireFastMutex(& disketteExtension->ThreadReferenceMutex);
					if(disketteExtension->ThreadReferenceCount == 0L) {
						disketteExtension->ThreadReferenceCount = -1L;
						if(disketteExtension->FloppyThread < (0)) {
L7:;
							ObfDereferenceObject((void *)disketteExtension->FloppyThread);
							disketteExtension->FloppyThread = (struct _KTHREAD *)((void *)0);
L8:;
							ExReleaseFastMutex(& disketteExtension->ThreadReferenceMutex);
							if(((KUSER_SHARED_DATA *)4292804608U)->AlternativeArchitecture == 1U) {
								if(disketteExtension->ReleaseFdcWithMotorRunning > 0) {
L9:;
									disketteExtension->FloppyControllerAllocated = (unsigned char)0;
									disketteExtension->ReleaseFdcWithMotorRunning = (unsigned char)0;
L10:;
									ExAcquireFastMutex(PagingMutex);
									temp_1 = (int )(PagingReferenceCount - 1UL);
									if(temp_1 == 0) {
										MmPageEntireDriver((void *)DriverEntryNONDET);
L11:;
										ExReleaseFastMutex(PagingMutex);
										PsTerminateSystemThread(0L);
L12:;
										ExReleaseFastMutex(& disketteExtension->ThreadReferenceMutex);
										i = i + 1;
										goto L2;
									}
									else if(temp_1 < 0) {
										goto L11;
									}
									else {
										goto L11;
									}
								}
								else if(disketteExtension->ReleaseFdcWithMotorRunning < 0) {
									goto L9;
								}
								else {
									goto L10;
								}
							}
							else if(((KUSER_SHARED_DATA *)4292804608U)->AlternativeArchitecture < 1U) {
								goto L10;
							}
							else {
								goto L10;
							}
						}
						else if(disketteExtension->FloppyThread > (0)) {
							goto L7;
						}
						else {
							goto L8;
						}
					}
					else if(disketteExtension->ThreadReferenceCount < 0L) {
						goto L12;
					}
					else {
						goto L12;
					}
				}
				else if(disketteExtension->FloppyControllerAllocated < 0) {
					goto L5;
				}
				else {
					goto L6;
				}
			}
			else if(((KUSER_SHARED_DATA *)4292804608U)->AlternativeArchitecture > 1U) {
				goto L4;
			}
			else {
				goto L6;
			}
		}
		else if(waitStatus < 258L) {
L13:;
L14:;
			if(request == 0) {
L15:;
				i = i + 1;
				goto L2;
			}
			else if(request > 0) {
L16:;
				ExAcquireFastMutex(& disketteExtension->ThreadReferenceMutex);
				disketteExtension->ThreadReferenceCount = disketteExtension->ThreadReferenceCount - 1L;
				ExReleaseFastMutex(& disketteExtension->ThreadReferenceMutex);
				disketteExtension->HardwareFailed = (unsigned char)0;
				irp = (IRP *)((CHAR *)request - (unsigned long )(& ((IRP *)0)->Tail.Overlay.__annonCompField17.ListEntry));
				ExAcquireFastMutex(& disketteExtension->PowerDownMutex);
				if(disketteExtension->PoweringDown == 1) {
					ExReleaseFastMutex(& disketteExtension->PowerDownMutex);
					irp = (IRP *)((CHAR *)request - (unsigned long )(& ((IRP *)0)->Tail.Overlay.__annonCompField17.ListEntry));
					irp->IoStatus.__annonCompField4.Status = -1073741101L;
					irp->IoStatus.Information = 0UL;
					IofCompleteRequest(irp, (char)0);
					goto L14;
				}
				else if(disketteExtension->PoweringDown < 1) {
L17:;
					ExReleaseFastMutex(& disketteExtension->PowerDownMutex);
					irpSp = irp->Tail.Overlay.__annonCompField17.__annonCompField16.CurrentStackLocation;
					if(irpSp->MajorFunction == 27) {
						if(irpSp->MinorFunction == 1) {
L18:;
							if(((KUSER_SHARED_DATA *)4292804608U)->AlternativeArchitecture == 1U) {
								if(disketteExtension->ReleaseFdcWithMotorRunning > 0) {
L19:;
									disketteExtension->ReleaseFdcWithMotorRunning = (unsigned char)0;
									disketteExtension->FloppyControllerAllocated = (unsigned char)1;
L20:;
									if(disketteExtension->FloppyControllerAllocated > 0) {
L21:;
										disketteExtension->FloppyControllerAllocated = (unsigned char)0;
L22:;
										ExAcquireFastMutex(& disketteExtension->ThreadReferenceMutex);
										disketteExtension->ThreadReferenceCount = -1L;
										ExReleaseFastMutex(& disketteExtension->ThreadReferenceMutex);
										ExAcquireFastMutex(PagingMutex);
										temp_2 = (int )(PagingReferenceCount - 1UL);
										if(temp_2 == 0) {
											MmPageEntireDriver((void *)DriverEntryNONDET);
L23:;
											ExReleaseFastMutex(PagingMutex);
											PsTerminateSystemThread(0L);
L24:;
L25:;
											if(((KUSER_SHARED_DATA *)4292804608U)->AlternativeArchitecture == 1U) {
												if(disketteExtension->FloppyControllerAllocated > 0) {
L26:;
													disketteExtension->FloppyControllerAllocated = (unsigned char)0;
													disketteExtension->ReleaseFdcWithMotorRunning = (unsigned char)1;
													goto L14;
												}
												else if(disketteExtension->FloppyControllerAllocated < 0) {
													goto L26;
												}
												else {
													/* END OF PATH at func_FloppyThread@p223#2 */
												}
											}
											else if(((KUSER_SHARED_DATA *)4292804608U)->AlternativeArchitecture < 1U) {
												/* END OF PATH at func_FloppyThread@p223#3 */
											}
											else {
												/* END OF PATH at func_FloppyThread@p223#4 */
											}
										}
										else if(temp_2 < 0) {
											goto L23;
										}
										else {
											goto L23;
										}
									}
									else if(disketteExtension->FloppyControllerAllocated < 0) {
										goto L21;
									}
									else {
										goto L22;
									}
								}
								else if(disketteExtension->ReleaseFdcWithMotorRunning < 0) {
									goto L19;
								}
								else {
									goto L20;
								}
							}
							else if(((KUSER_SHARED_DATA *)4292804608U)->AlternativeArchitecture < 1U) {
								goto L20;
							}
							else {
								goto L20;
							}
						}
						else if(irpSp->MinorFunction < 1) {
L27:;
							if(irpSp->MinorFunction == 5) {
								goto L18;
							}
							else if(irpSp->MinorFunction < 5) {
L28:;
								ntStatus = -1073741808L;
								goto L24;
							}
							else {
								goto L28;
							}
						}
						else {
							goto L27;
						}
					}
					else if(irpSp->MajorFunction == 3) {
L29:;
						if(disketteExtension->FloppyControllerAllocated == 0) {
							if(ntStatus >= 0L) {
								disketteExtension->FloppyControllerAllocated = (unsigned char)1;
								if(((KUSER_SHARED_DATA *)4292804608U)->AlternativeArchitecture == 1U) {
									disketteExtension->ReleaseFdcWithMotorRunning = (unsigned char)0;
L30:;
L31:;
									if((disketteExtension->DeviceObject)->Flags & 2UL > 0) {
L32:;
										if((irpSp->Flags & 2) == 0) {
											ntStatus = -2147483626L;
L33:;
L34:;
											goto L25;
										}
										else if((irpSp->Flags & 2) > 0) {
											tmp___0 = (int )FlReadWrite(disketteExtension, irp, 0);
L35:;
											ntStatus = (long )tmp___0;
											goto L33;
										}
										else {
											tmp___0 = (int )FlReadWrite(disketteExtension, irp, 0);
											goto L35;
										}
									}
									else if((disketteExtension->DeviceObject)->Flags & 2UL < 0) {
										goto L32;
									}
									else {
										tmp___0 = (int )FlReadWrite(disketteExtension, irp, 0);
										ntStatus = (long )tmp___0;
										goto L34;
									}
								}
								else if(((KUSER_SHARED_DATA *)4292804608U)->AlternativeArchitecture < 1U) {
									goto L30;
								}
								else {
									goto L30;
								}
							}
							else {
								goto L25;
							}
						}
						else if(disketteExtension->FloppyControllerAllocated > 0) {
							goto L31;
						}
						else {
							goto L31;
						}
					}
					else if(irpSp->MajorFunction == 4) {
						goto L29;
					}
					else if(irpSp->MajorFunction == 14) {
						if(disketteExtension->FloppyControllerAllocated == 0) {
							if(ntStatus >= 0L) {
								disketteExtension->FloppyControllerAllocated = (unsigned char)1;
								if(((KUSER_SHARED_DATA *)4292804608U)->AlternativeArchitecture == 1U) {
									disketteExtension->ReleaseFdcWithMotorRunning = (unsigned char)0;
L36:;
L37:;
									if((disketteExtension->DeviceObject)->Flags & 2UL > 0) {
L38:;
										if((irpSp->Flags & 2) == 0) {
											ntStatus = -2147483626L;
L39:;
											ntStatus = -1073741822L;
											if(ntStatus > -2147483631L) {
												irp->IoStatus.__annonCompField4.Status = ntStatus;
												if(disketteExtension->IoBuffer > 0) {
													FlFreeIoBuffer(disketteExtension);
													FlFinishOperation(irp, disketteExtension);
L40:;
													goto L25;
												}
												else if(disketteExtension->IoBuffer < 0) {
													FlFreeIoBuffer(disketteExtension);
													FlFinishOperation(irp, disketteExtension);
													goto L40;
												}
												else {
													FlFinishOperation(irp, disketteExtension);
													goto L40;
												}
											}
											else if(ntStatus == -2147483631L) {
												/* FALSE PATH */ 
											}
											else {
												/* FALSE PATH */ 
											}
										}
										else if((irpSp->Flags & 2) > 0) {
L41:;
L42:;
											if(temp_3 == 1) {
												ntStatus = FlStartDrive(disketteExtension, irp, (unsigned char)0, (unsigned char)0, (unsigned char )((int )irpSp->Flags & 2));
L43:;
L44:;
												goto L25;
											}
											else if(temp_3 == 2) {
												ntStatus = FlStartDrive(disketteExtension, irp, (unsigned char)0, (unsigned char)0, (unsigned char )((int )irpSp->Flags & 2));
												goto L43;
											}
											else if(temp_3 == 3) {
												if(disketteExtension->IsReadOnly > 0) {
L45:;
													ntStatus = -1073741811L;
L46:;
													goto L44;
												}
												else if(disketteExtension->IsReadOnly < 0) {
													goto L45;
												}
												else {
													ntStatus = FlStartDrive(disketteExtension, irp, (unsigned char)1, (unsigned char)0, (unsigned char)1);
													goto L46;
												}
											}
											else if(temp_3 == 4) {
												if(irpSp->Parameters.DeviceIoControl.OutputBufferLength < (ULONG )sizeof(MOUNTDEV_NAME )) {
													ntStatus = -1073741811L;
													if(ntStatus < 0L) {
														if(ntStatus < -1073741804L) {
L47:;
															irp->IoStatus.Information = (unsigned long )sizeof(DISK_GEOMETRY );
															goto L44;
														}
														else if(ntStatus == -1073741804L) {
															/* FALSE PATH */ 
														}
														else {
															/* FALSE PATH */ 
														}
													}
													else {
														/* FALSE PATH */ 
													}
												}
												else {
													ntStatus = FlStartDrive(disketteExtension, irp, (unsigned char)0, (unsigned char)1, (unsigned char )((int )irpSp->Flags & 2));
													if(ntStatus >= 0L) {
L48:;
														outputBuffer = (struct _DISK_GEOMETRY *)irp->AssociatedIrp.SystemBuffer;
														ntStatus = 0L;
														outputBuffer->MediaType = disketteExtension->MediaType;
														if(disketteExtension->MediaType == 0U) {
															outputBuffer->Cylinders.__annonCompField1.LowPart = 0UL;
															outputBuffer->Cylinders.__annonCompField1.HighPart = 0L;
															outputBuffer->TracksPerCylinder = 0UL;
															outputBuffer->SectorsPerTrack = 0UL;
															outputBuffer->BytesPerSector = 0UL;
															goto L47;
														}
														else if(disketteExtension->MediaType < 0U) {
L49:;
															outputBuffer->Cylinders.__annonCompField1.LowPart = (unsigned long )((int )disketteExtension->DriveMediaConstants.MaximumTrack + 1);
															outputBuffer->Cylinders.__annonCompField1.HighPart = 0L;
															outputBuffer->TracksPerCylinder = (unsigned long )disketteExtension->DriveMediaConstants.NumberOfHeads;
															outputBuffer->SectorsPerTrack = (unsigned long )disketteExtension->DriveMediaConstants.SectorsPerTrack;
															outputBuffer->BytesPerSector = (unsigned long )disketteExtension->DriveMediaConstants.BytesPerSector;
															goto L47;
														}
														else {
															goto L49;
														}
													}
													else {
														if(ntStatus == -1073741804L) {
															goto L48;
														}
														else if(ntStatus < -1073741804L) {
															goto L47;
														}
														else {
															goto L47;
														}
													}
												}
											}
											else if(temp_3 == 5) {
												ntStatus = FlStartDrive(disketteExtension, irp, (unsigned char)1, (unsigned char)0, (unsigned char)0);
L50:;
												if(ntStatus >= 0L) {
L51:;
													FlAllocateIoBuffer(disketteExtension, 4096UL);
													if(disketteExtension->IoBuffer > 0) {
														tmp___1 = (int )FlFormat(disketteExtension, irp);
L52:;
														ntStatus = (long )tmp___1;
L53:;
														goto L44;
													}
													else if(disketteExtension->IoBuffer < 0) {
														tmp___1 = (int )FlFormat(disketteExtension, irp);
														goto L52;
													}
													else {
														ntStatus = -1073741670L;
														goto L53;
													}
												}
												else {
													if(ntStatus == -1073741804L) {
														goto L51;
													}
													else if(ntStatus < -1073741804L) {
														goto L53;
													}
													else {
														goto L53;
													}
												}
											}
											else if(temp_3 == 6) {
												ntStatus = FlStartDrive(disketteExtension, irp, (unsigned char)1, (unsigned char)0, (unsigned char)0);
												goto L50;
											}
											else if(temp_3 == 7) {
												if(((KUSER_SHARED_DATA *)4292804608U)->AlternativeArchitecture == 1U) {
													disketteExtension->FifoBuffer[0] = (unsigned char)14;
													disketteExtension->FifoBuffer[1] = disketteExtension->DeviceUnit;
													ntStatus = FlIssueCommand(disketteExtension, disketteExtension->FifoBuffer, disketteExtension->FifoBuffer, (struct _MDL *)((void *)0), 0UL, 0UL);
													if(ntStatus >= 0L) {
														outputBuffer___0 = (struct _SENSE_DEVISE_STATUS_PTOS *)irp->AssociatedIrp.SystemBuffer;
														outputBuffer___0->ST3_PTOS = Result_Status3_PTOS[0].ST3_PTOS;
														irp->IoStatus.Information = (unsigned long )sizeof(SENSE_DEVISE_STATUS_PTOS );
L54:;
														goto L44;
													}
													else {
														goto L54;
													}
												}
												else if(((KUSER_SHARED_DATA *)4292804608U)->AlternativeArchitecture < 1U) {
L55:;
													goto L44;
												}
												else {
													goto L55;
												}
											}
											else if(temp_3 < 1) {
												goto L44;
											}
											else if(temp_3 > 1 && temp_3 < 2) {
												goto L44;
											}
											else if(temp_3 > 2 && temp_3 < 3) {
												goto L44;
											}
											else if(temp_3 > 3 && temp_3 < 4) {
												goto L44;
											}
											else if(temp_3 > 4 && temp_3 < 5) {
												goto L44;
											}
											else if(temp_3 > 5 && temp_3 < 6) {
												goto L44;
											}
											else if(temp_3 > 6 && temp_3 < 7) {
												goto L44;
											}
											else {
												goto L44;
											}
										}
										else {
											goto L41;
										}
									}
									else if((disketteExtension->DeviceObject)->Flags & 2UL < 0) {
										goto L38;
									}
									else {
										goto L42;
									}
								}
								else if(((KUSER_SHARED_DATA *)4292804608U)->AlternativeArchitecture < 1U) {
									goto L36;
								}
								else {
									goto L36;
								}
							}
							else {
								goto L25;
							}
						}
						else if(disketteExtension->FloppyControllerAllocated > 0) {
							goto L37;
						}
						else {
							goto L37;
						}
					}
					else if(irpSp->MajorFunction < 3) {
						goto L39;
					}
					else if(irpSp->MajorFunction > 3 && irpSp->MajorFunction < 4) {
						goto L39;
					}
					else if(irpSp->MajorFunction > 4 && irpSp->MajorFunction < 14) {
						goto L39;
					}
					else if(irpSp->MajorFunction > 14 && irpSp->MajorFunction < 27) {
						goto L39;
					}
					else {
						goto L39;
					}
				}
				else {
					goto L17;
				}
			}
			else {
				goto L16;
			}
		}
		else {
			goto L14;
		}
	}
}

void FlConsolidateMediaTypeWithBootSector(PDISKETTE_EXTENSION DisketteExtension , PBOOT_SECTOR_INFO BootSector )
{ USHORT bpbNumberOfSectors ;
USHORT bpbNumberOfHeads ;
USHORT bpbSectorsPerTrack ;
USHORT bpbBytesPerSector ;
USHORT bpbMediaByte ;
USHORT bpbMaximumTrack ;
MEDIA_TYPE bpbMediaType ;
ULONG i ;
ULONG n ;
PDRIVE_MEDIA_CONSTANTS readidDriveMediaConstants ;
BOOLEAN changeToBpbMedia ;
int temp_1 ;
int temp_2 ;
int temp_3 ;
SIZE_T temp_4 ;
	if(BootSector->JumpByte[0] < 235) {
L1:;
		if(BootSector->JumpByte[0] < 233) {
L2:;
			/* END OF PATH at func_FlConsolidateMediaTypeWithBootSector@p18#1 */
		}
		else if(BootSector->JumpByte[0] > 233) {
			goto L2;
		}
		else {
L3:;
			bpbNumberOfSectors = (unsigned short )((int )BootSector->NumberOfSectors[1] * 256 + (int )BootSector->NumberOfSectors[0]);
			bpbNumberOfHeads = (unsigned short )((int )BootSector->NumberOfHeads[1] * 256 + (int )BootSector->NumberOfHeads[0]);
			bpbSectorsPerTrack = (unsigned short )((int )BootSector->SectorsPerTrack[1] * 256 + (int )BootSector->SectorsPerTrack[0]);
			bpbBytesPerSector = (unsigned short )((int )BootSector->BytesPerSector[1] * 256 + (int )BootSector->BytesPerSector[0]);
			bpbMediaByte = (unsigned short )BootSector->MediaByte[0];
			if(bpbNumberOfHeads == 0) {
				/* END OF PATH at func_FlConsolidateMediaTypeWithBootSector@p26#1 */
			}
			else if(bpbNumberOfHeads > 0) {
L4:;
				if(bpbSectorsPerTrack == 0) {
					/* END OF PATH at func_FlConsolidateMediaTypeWithBootSector@p30#1 */
				}
				else if(bpbSectorsPerTrack > 0) {
L5:;
					bpbMaximumTrack = (unsigned short )(((int )bpbNumberOfSectors / (int )bpbNumberOfHeads) / (int )bpbSectorsPerTrack - 1);
					bpbMediaType = (enum _MEDIA_TYPE )0;
					i = 0UL;
L6:;
L7:;
					if(i >= temp_1) {
L8:;
L9:;
						if(DisketteExtension->DriveType == 3) {
L10:;
							if(bpbMediaType == DisketteExtension->MediaType) {
								changeToBpbMedia = (unsigned char)0;
L11:;
								if(changeToBpbMedia == 0) {
L12:;
									/* END OF PATH at func_FlConsolidateMediaTypeWithBootSector@p85#1 */
								}
								else if(changeToBpbMedia > 0) {
									/* FALSE PATH */ 
								}
								else {
									/* FALSE PATH */ 
								}
							}
							else if(bpbMediaType < DisketteExtension->MediaType) {
L13:;
								readidDriveMediaConstants = & DisketteExtension->DriveMediaConstants;
								if(bpbBytesPerSector == readidDriveMediaConstants->BytesPerSector) {
									if(bpbSectorsPerTrack < 256) {
										if(bpbMaximumTrack == readidDriveMediaConstants->MaximumTrack) {
											if(bpbNumberOfHeads <= readidDriveMediaConstants->NumberOfHeads) {
												changeToBpbMedia = (unsigned char)1;
												if(bpbMediaType == 0U) {
													bpbMediaType = readidDriveMediaConstants->MediaType;
													DisketteExtension->DriveMediaConstants.SkewDelta = (unsigned char)0;
L14:;
													if(changeToBpbMedia > 0) {
														i = (unsigned long )(DriveMediaLimits + DisketteExtension->DriveType)->LowestDriveMediaType;
														n = (unsigned long )(DriveMediaLimits + DisketteExtension->DriveType)->HighestDriveMediaType;
L15:;
L16:;
														if(i > n) {
L17:;
L18:;
															DisketteExtension->MediaType = bpbMediaType;
															DisketteExtension->ByteCapacity = (unsigned long )((int )bpbNumberOfSectors * (int )bpbBytesPerSector);
															DisketteExtension->DriveMediaConstants.SectorsPerTrack = (unsigned char )bpbSectorsPerTrack;
															DisketteExtension->DriveMediaConstants.NumberOfHeads = (unsigned char )bpbNumberOfHeads;
															temp_4 = RtlCompareMemory((void *)(BootSector->OemData), (void *)"MSDMF3.", 7UL);
															if(temp_4 == 7UL) {
																DisketteExtension->IsReadOnly = (unsigned char)1;
																goto L12;
															}
															else if(temp_4 < 7UL) {
																goto L12;
															}
															else {
																goto L12;
															}
														}
														else {
															if(bpbMediaType == (DriveMediaConstants + i)->MediaType) {
																DisketteExtension->DriveMediaType = (enum _DRIVE_MEDIA_TYPE )i;
																goto L17;
															}
															else if(bpbMediaType < (DriveMediaConstants + i)->MediaType) {
L19:;
																i = i + 1UL;
																goto L16;
															}
															else {
																goto L19;
															}
														}
													}
													else if(changeToBpbMedia < 0) {
														/* FALSE PATH */ 
													}
													else {
														/* FALSE PATH */ 
													}
												}
												else if(bpbMediaType < 0U) {
													goto L14;
												}
												else {
													goto L14;
												}
											}
											else {
												changeToBpbMedia = (unsigned char)0;
L20:;
L21:;
L22:;
												if(bpbMediaType == 0U) {
													bpbMediaType = readidDriveMediaConstants->MediaType;
													DisketteExtension->DriveMediaConstants.SkewDelta = (unsigned char)0;
													goto L11;
												}
												else if(bpbMediaType < 0U) {
													goto L11;
												}
												else {
													goto L11;
												}
											}
										}
										else if(bpbMaximumTrack < readidDriveMediaConstants->MaximumTrack) {
L23:;
											changeToBpbMedia = (unsigned char)0;
											goto L20;
										}
										else {
											goto L23;
										}
									}
									else {
										changeToBpbMedia = (unsigned char)0;
										goto L21;
									}
								}
								else if(bpbBytesPerSector < readidDriveMediaConstants->BytesPerSector) {
L24:;
									changeToBpbMedia = (unsigned char)0;
									goto L22;
								}
								else {
									goto L24;
								}
							}
							else {
								goto L13;
							}
						}
						else if(DisketteExtension->DriveType < 3) {
							goto L10;
						}
						else {
							goto L10;
						}
					}
					else {
						if(bpbBytesPerSector == (DriveMediaConstants + i)->BytesPerSector) {
							if(bpbSectorsPerTrack == (DriveMediaConstants + i)->SectorsPerTrack) {
								if(bpbMaximumTrack == (DriveMediaConstants + i)->MaximumTrack) {
									if(bpbNumberOfHeads == (DriveMediaConstants + i)->NumberOfHeads) {
										if(bpbMediaByte == (DriveMediaConstants + i)->MediaByte) {
											bpbMediaType = (DriveMediaConstants + i)->MediaType;
											goto L8;
										}
										else if(bpbMediaByte < (DriveMediaConstants + i)->MediaByte) {
L25:;
											i = i + 1UL;
											goto L7;
										}
										else {
											goto L25;
										}
									}
									else if(bpbNumberOfHeads < (DriveMediaConstants + i)->NumberOfHeads) {
										goto L25;
									}
									else {
										goto L25;
									}
								}
								else if(bpbMaximumTrack < (DriveMediaConstants + i)->MaximumTrack) {
									goto L25;
								}
								else {
									goto L25;
								}
							}
							else if(bpbSectorsPerTrack < (DriveMediaConstants + i)->SectorsPerTrack) {
								goto L25;
							}
							else {
								goto L25;
							}
						}
						else if(bpbBytesPerSector < (DriveMediaConstants + i)->BytesPerSector) {
							goto L25;
						}
						else {
							goto L25;
						}
					}
				}
				else {
					goto L5;
				}
			}
			else {
				goto L4;
			}
		}
	}
	else if(BootSector->JumpByte[0] > 235) {
		goto L1;
	}
	else {
		goto L3;
	}
}

NTSTATUS FlReadWriteTrack(PDISKETTE_EXTENSION DisketteExtension , PMDL IoMdl , ULONG IoOffset , BOOLEAN WriteOperation , UCHAR Cylinder , UCHAR Head , UCHAR Sector , UCHAR NumberOfSectors , BOOLEAN NeedSeek )
{ PDRIVE_MEDIA_CONSTANTS driveMediaConstants ;
ULONG byteToSectorShift ;
ULONG transferBytes ;
LARGE_INTEGER headSettleTime ;
NTSTATUS status ;
ULONG seekRetry ;
ULONG ioRetry ;
BOOLEAN recalibrateDrive ;
UCHAR i ;
int temp_1 ;
int temp_2 ;
	recalibrateDrive = (unsigned char)0;
	driveMediaConstants = & DisketteExtension->DriveMediaConstants;
	byteToSectorShift = (unsigned long )(7 + (int )driveMediaConstants->SectorLengthCode);
	transferBytes = (unsigned long )NumberOfSectors << byteToSectorShift;
	headSettleTime.__annonCompField1.LowPart = (unsigned long )(- (10000 * (int )driveMediaConstants->HeadSettleTime));
	headSettleTime.__annonCompField1.HighPart = -1L;
	seekRetry = 0UL;
	ioRetry = 0UL;
L1:;
L2:;
	if(seekRetry >= 3UL) {
L3:;
L4:;
		if(status < 0L) {
			if(NumberOfSectors > 1) {
				i = (unsigned char)0;
L5:;
L6:;
				if(i >= NumberOfSectors) {
L7:;
L8:;
L9:;
					return (status);
					/* END OF PATH at func_FlReadWriteTrack@p116#1 */
				}
				else {
					status = FlReadWriteTrack(DisketteExtension, IoMdl, IoOffset + ((unsigned long )i << byteToSectorShift), WriteOperation, Cylinder, Head, (unsigned char )((int )Sector + (int )i), (unsigned char)1, (unsigned char)0);
					if(status < 0L) {
						DisketteExtension->HardwareFailed = (unsigned char)1;
						goto L7;
					}
					else {
						i = (UCHAR )((int )i + 1);
						goto L6;
					}
				}
			}
			else {
				goto L9;
			}
		}
		else {
			goto L9;
		}
	}
	else {
		if(recalibrateDrive > 0) {
			FlRecalibrateDrive(DisketteExtension);
			if(recalibrateDrive > 0) {
L10:;
L11:;
				DisketteExtension->FifoBuffer[0] = (unsigned char)16;
				DisketteExtension->FifoBuffer[1] = (unsigned char )(((int )Head << 2) | (int )DisketteExtension->DeviceUnit);
				DisketteExtension->FifoBuffer[2] = (unsigned char )((int )Cylinder << (int )driveMediaConstants->CylinderShift);
				status = FlIssueCommand(DisketteExtension, DisketteExtension->FifoBuffer, DisketteExtension->FifoBuffer, (struct _MDL *)((void *)0), 0UL, 0UL);
				if(status >= 0L) {
					if((DisketteExtension->FifoBuffer[0] & 32) == 0) {
						DisketteExtension->HardwareFailed = (unsigned char)1;
						status = -1073741464L;
L12:;
						if(status < 0L) {
							if(status < 0L) {
L13:;
								recalibrateDrive = (unsigned char)1;
L14:;
								seekRetry = seekRetry + 1UL;
								goto L2;
							}
							else {
								/* FALSE PATH */ 
							}
						}
						else {
							/* FALSE PATH */ 
						}
					}
					else if((DisketteExtension->FifoBuffer[0] & 32) > 0) {
L15:;
						if(DisketteExtension->FifoBuffer[1] < Cylinder << driveMediaConstants->CylinderShift) {
L16:;
							DisketteExtension->HardwareFailed = (unsigned char)1;
							status = -1073741464L;
							goto L12;
						}
						else if(DisketteExtension->FifoBuffer[1] > Cylinder << driveMediaConstants->CylinderShift) {
							goto L16;
						}
						else {
							if(status >= 0L) {
								KeDelayExecutionThread((char)0, (unsigned char)0, & headSettleTime);
								DisketteExtension->FifoBuffer[0] = (unsigned char)84;
								DisketteExtension->FifoBuffer[1] = (unsigned char )(((int )Head << 2) | (int )DisketteExtension->DeviceUnit);
								status = FlIssueCommand(DisketteExtension, DisketteExtension->FifoBuffer, DisketteExtension->FifoBuffer, (struct _MDL *)((void *)0), 0UL, 0UL);
								if(status >= 0L) {
									if(((KUSER_SHARED_DATA *)4292804608U)->AlternativeArchitecture == 1U) {
										if(DisketteExtension->FifoBuffer[0] & 8 > 0) {
L17:;
											return (-1073741661L);
											/* END OF PATH at func_FlReadWriteTrack@p54#1 */
										}
										else if(DisketteExtension->FifoBuffer[0] & 8 < 0) {
											goto L17;
										}
										else {
L18:;
											if(temp_1 > 0) {
L19:;
												DisketteExtension->HardwareFailed = (unsigned char)1;
												status = FlInterpretError(DisketteExtension->FifoBuffer[1], DisketteExtension->FifoBuffer[2]);
L20:;
L21:;
L22:;
												if(status < 0L) {
													goto L13;
												}
												else {
L23:;
L24:;
													DisketteExtension->FifoBuffer[1] = (unsigned char )(((int )Head << 2) | (int )DisketteExtension->DeviceUnit);
													DisketteExtension->FifoBuffer[2] = Cylinder;
													DisketteExtension->FifoBuffer[3] = Head;
													DisketteExtension->FifoBuffer[4] = (unsigned char )((int )Sector + 1);
													DisketteExtension->FifoBuffer[5] = driveMediaConstants->SectorLengthCode;
													DisketteExtension->FifoBuffer[6] = (unsigned char )((int )Sector + (int )NumberOfSectors);
													DisketteExtension->FifoBuffer[7] = driveMediaConstants->ReadWriteGapLength;
													DisketteExtension->FifoBuffer[8] = driveMediaConstants->DataLength;
													if(WriteOperation > 0) {
L25:;
														DisketteExtension->FifoBuffer[0] = (unsigned char)66;
														status = FlIssueCommand(DisketteExtension, DisketteExtension->FifoBuffer, DisketteExtension->FifoBuffer, IoMdl, IoOffset, transferBytes);
L26:;
														if(status >= 0L) {
															if(((KUSER_SHARED_DATA *)4292804608U)->AlternativeArchitecture == 1U) {
																if(DisketteExtension->FifoBuffer[0] & 8 > 0) {
L27:;
																	return (-1073741661L);
																	/* END OF PATH at func_FlReadWriteTrack@p84#1 */
																}
																else if(DisketteExtension->FifoBuffer[0] & 8 < 0) {
																	goto L27;
																}
																else {
L28:;
																	if(temp_2 > 0) {
L29:;
																		DisketteExtension->HardwareFailed = (unsigned char)1;
																		status = FlInterpretError(DisketteExtension->FifoBuffer[1], DisketteExtension->FifoBuffer[2]);
L30:;
																		if(status >= 0L) {
L31:;
L32:;
																			if(status >= 0L) {
																				goto L3;
																			}
																			else {
																				recalibrateDrive = (unsigned char)1;
																				goto L14;
																			}
																		}
																		else {
																			if(ioRetry >= 2UL) {
																				/* END OF PATH at func_FlReadWriteTrack@p66#3 */
																			}
																			else {
																				ioRetry = ioRetry + 1UL;
																				goto L24;
																			}
																		}
																	}
																	else if(temp_2 < 0) {
																		goto L29;
																	}
																	else {
																		if(DisketteExtension->FifoBuffer[5] < 1) {
L33:;
																			DisketteExtension->HardwareFailed = (unsigned char)1;
																			status = -1073741465L;
																			goto L30;
																		}
																		else if(DisketteExtension->FifoBuffer[5] > 1) {
																			goto L33;
																		}
																		else {
																			goto L30;
																		}
																	}
																}
															}
															else if(((KUSER_SHARED_DATA *)4292804608U)->AlternativeArchitecture < 1U) {
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
													else if(WriteOperation < 0) {
														goto L25;
													}
													else {
														DisketteExtension->FifoBuffer[0] = (unsigned char)64;
														status = FlIssueCommand(DisketteExtension, DisketteExtension->FifoBuffer, DisketteExtension->FifoBuffer, IoMdl, IoOffset, transferBytes);
														goto L26;
													}
												}
											}
											else if(temp_1 < 0) {
												goto L19;
											}
											else {
												goto L20;
											}
										}
									}
									else if(((KUSER_SHARED_DATA *)4292804608U)->AlternativeArchitecture < 1U) {
										goto L18;
									}
									else {
										goto L18;
									}
								}
								else {
									goto L20;
								}
							}
							else {
								/* FALSE PATH */ 
							}
						}
					}
					else {
						goto L15;
					}
				}
				else {
					goto L20;
				}
			}
			else if(recalibrateDrive < 0) {
				/* FALSE PATH */ 
			}
			else {
				/* FALSE PATH */ 
			}
		}
		else if(recalibrateDrive < 0) {
			FlRecalibrateDrive(DisketteExtension);
			if(recalibrateDrive < 0) {
				goto L10;
			}
			else if(recalibrateDrive > 0) {
				/* FALSE PATH */ 
			}
			else {
				/* FALSE PATH */ 
			}
		}
		else {
			if(recalibrateDrive == 0) {
				if(NeedSeek > 0) {
L34:;
					if(DisketteExtension->ControllerConfigurable == 0) {
						goto L11;
					}
					else if(DisketteExtension->ControllerConfigurable > 0) {
L35:;
						if(driveMediaConstants->CylinderShift < 0) {
							goto L11;
						}
						else if(driveMediaConstants->CylinderShift > 0) {
							goto L11;
						}
						else {
							status = 0L;
							goto L21;
						}
					}
					else {
						goto L35;
					}
				}
				else if(NeedSeek < 0) {
					goto L34;
				}
				else {
					status = 0L;
					goto L22;
				}
			}
			else if(recalibrateDrive > 0) {
				/* FALSE PATH */ 
			}
			else {
				/* FALSE PATH */ 
			}
		}
	}
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
int we_should_unload ;
IRP irp ;
int BLAST_NONDET ;
int idx ;
int irp_choice ;
DEVICE_OBJECT devobj ;
	;
	status = 0L;
	pirp = & irp;
	_BLAST_init();
	status = DriverEntry(& d, & u);
	if(status >= 0L) {
		s = NP;
		pended = 0;
		compFptr = (NTSTATUS (*)(PDEVICE_OBJECT DeviceObject , PIRP Irp , PVOID Context ))0;
		compRegistered = 0;
		lowerDriverReturn = 0;
		setEventCalled = 0;
		customIrp = 0;
		pirp->IoStatus.__annonCompField4.Status = 0L;
		myStatus = 0L;
		if(irp_choice == 0) {
			pirp->IoStatus.__annonCompField4.Status = -1073741637L;
			myStatus = -1073741637L;
			status = FloppyAddDevice(& d, & devobj);
			stub_driver_init();
L1:;
			if(status < 0L) {
				return (-1);
				/* END OF PATH at func_main@p30#1 */
			}
			else {
				if(BLAST_NONDET == 0) {
					status = FloppyCreateClose(& devobj, pirp);
L2:;
					if(we_should_unload > 0) {
L3:;
						FloppyUnload(& d);
L4:;
						if(pended == 1) {
							if(s == NP) {
								s = NP;
L5:;
								status = 0L;
								return ((int )status);
								/* END OF PATH at func_main@p78#1 */
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
												if(pended == 1) {
													if(status < 259L) {
L9:;
														status = 0L;
L10:;
														goto L5;
													}
													else if(status > 259L) {
														/* FALSE PATH */ 
													}
													else {
														/* FALSE PATH */ 
													}
												}
												else if(pended < 1) {
													/* FALSE PATH */ 
												}
												else {
													/* FALSE PATH */ 
												}
											}
											else if(status > -1L) {
												if(pended == 1) {
													if(status < 259L) {
														goto L9;
													}
													else if(status > 259L) {
														goto L9;
													}
													else {
														goto L10;
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
L11:;
									if(status < -1L) {
L12:;
										if(pended < 1) {
L13:;
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
										else if(pended == 1) {
											/* FALSE PATH */ 
										}
										else {
											/* FALSE PATH */ 
										}
									}
									else if(status > -1L) {
										goto L12;
									}
									else {
										goto L5;
									}
								}
								else if(s > UNLOADED) {
									goto L11;
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
L14:;
									if(status < -1L) {
L15:;
										if(pended > 1) {
											goto L13;
										}
										else if(pended == 1) {
											/* FALSE PATH */ 
										}
										else {
											/* FALSE PATH */ 
										}
									}
									else if(status > -1L) {
										goto L15;
									}
									else {
										goto L5;
									}
								}
								else if(s > UNLOADED) {
									goto L14;
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
				else if(BLAST_NONDET == 1) {
					status = FloppyCreateClose(& devobj, pirp);
					goto L2;
				}
				else if(BLAST_NONDET == 2) {
					status = FloppyDeviceControl(& devobj, pirp);
					goto L2;
				}
				else if(BLAST_NONDET == 3) {
					status = FloppyPnp(& devobj, pirp);
					goto L2;
				}
				else if(BLAST_NONDET == 4) {
					status = FloppyPower(& devobj, pirp);
					goto L2;
				}
				else if(BLAST_NONDET < 0) {
L16:;
					return (-1);
					/* END OF PATH at func_main@p50#1 */
				}
				else if(BLAST_NONDET > 0 && BLAST_NONDET < 1) {
					goto L16;
				}
				else if(BLAST_NONDET > 1 && BLAST_NONDET < 2) {
					goto L16;
				}
				else if(BLAST_NONDET > 2 && BLAST_NONDET < 3) {
					goto L16;
				}
				else if(BLAST_NONDET > 3 && BLAST_NONDET < 4) {
					goto L16;
				}
				else {
					goto L16;
				}
			}
		}
		else if(irp_choice < 0) {
			status = FloppyAddDevice(& d, & devobj);
			stub_driver_init();
			goto L1;
		}
		else {
			status = FloppyAddDevice(& d, & devobj);
			stub_driver_init();
			goto L1;
		}
	}
	else {
		goto L4;
	}
}

