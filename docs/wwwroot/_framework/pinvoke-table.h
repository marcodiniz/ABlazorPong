// GENERATED FILE, DO NOT MODIFY

int CompressionNative_Crc32 (int,int,int);
int CompressionNative_Deflate (int,int);
int CompressionNative_DeflateEnd (int);
int CompressionNative_DeflateInit2_ (int,int,int,int,int,int);
int CompressionNative_Inflate (int,int);
int CompressionNative_InflateEnd (int);
int CompressionNative_InflateInit2_ (int,int);
void GlobalizationNative_ChangeCase (int,int,int,int,int);
void GlobalizationNative_ChangeCaseInvariant (int,int,int,int,int);
void GlobalizationNative_ChangeCaseTurkish (int,int,int,int,int);
void GlobalizationNative_CloseSortHandle (int);
int GlobalizationNative_CompareString (int,int,int,int,int,int);
int GlobalizationNative_EndsWith (int,int,int,int,int,int,int);
int GlobalizationNative_EnumCalendarInfo (int, int, int, int, int);
int GlobalizationNative_GetCalendarInfo (int,int,int,int,int);
int GlobalizationNative_GetCalendars (int,int,int);
int GlobalizationNative_GetDefaultLocaleName (int,int);
int GlobalizationNative_GetICUVersion ();
int GlobalizationNative_GetJapaneseEraStartDate (int,int,int,int);
int GlobalizationNative_GetLatestJapaneseEra ();
int GlobalizationNative_GetLocaleInfoGroupingSizes (int,int,int,int);
int GlobalizationNative_GetLocaleInfoInt (int,int,int);
int GlobalizationNative_GetLocaleInfoString (int,int,int,int);
int GlobalizationNative_GetLocaleName (int,int,int);
int GlobalizationNative_GetLocales (int,int);
int GlobalizationNative_GetLocaleTimeFormat (int,int,int,int);
int GlobalizationNative_GetSortHandle (int,int);
int GlobalizationNative_GetSortKey (int,int,int,int,int,int);
int GlobalizationNative_GetSortVersion (int);
int GlobalizationNative_IndexOf (int,int,int,int,int,int,int);
void GlobalizationNative_InitICUFunctions (int,int,int,int);
void GlobalizationNative_InitOrdinalCasingPage (int,int);
int GlobalizationNative_IsNormalized (int,int,int);
int GlobalizationNative_IsPredefinedLocale (int);
int GlobalizationNative_LastIndexOf (int,int,int,int,int,int,int);
int GlobalizationNative_LoadICU ();
int GlobalizationNative_NormalizeString (int,int,int,int,int);
int GlobalizationNative_StartsWith (int,int,int,int,int,int,int);
int GlobalizationNative_ToAscii (int,int,int,int,int);
int GlobalizationNative_ToUnicode (int,int,int,int,int);
int SystemNative_Access (int,int);
int SystemNative_ChDir (int);
int SystemNative_ChMod (int,int);
int SystemNative_Close (int);
int SystemNative_CloseDir (int);
int SystemNative_ConvertErrorPalToPlatform (int);
int SystemNative_ConvertErrorPlatformToPal (int);
int SystemNative_CopyFile (int,int);
int SystemNative_Dup (int);
int SystemNative_FcntlSetFD (int,int);
int SystemNative_FLock (int,int);
int SystemNative_FStat (int,int);
int SystemNative_FSync (int);
int SystemNative_FTruncate (int,int64_t);
int SystemNative_GetAddressFamily (int,int,int);
int SystemNative_GetCpuUtilization (int);
int SystemNative_GetCryptographicallySecureRandomBytes (int,int);
int SystemNative_GetCwd (int,int);
int SystemNative_GetIPSocketAddressSizes (int,int);
int SystemNative_GetIPv4Address (int,int,int);
int SystemNative_GetIPv6Address (int,int,int,int,int);
void SystemNative_GetNonCryptographicallySecureRandomBytes (int,int);
int SystemNative_GetPort (int,int,int);
int SystemNative_GetReadDirRBufferSize ();
int64_t SystemNative_GetSystemTimeAsTicks ();
uint64_t SystemNative_GetTimestamp ();
int SystemNative_LChflags (int,int);
int SystemNative_LChflagsCanSetHiddenFlag ();
int SystemNative_Link (int,int);
int SystemNative_LockFileRegion (int,int64_t,int64_t,int);
void SystemNative_Log (int,int);
int64_t SystemNative_LSeek (int,int64_t,int);
int SystemNative_LStat (int,int);
int SystemNative_MAdvise (int,uint64_t,int);
int SystemNative_MemAlloc (int);
void SystemNative_MemFree (int);
int SystemNative_MemReAlloc (int,int);
int SystemNative_MkDir (int,int);
int SystemNative_MksTemps (int,int);
int SystemNative_MMap (int,uint64_t,int,int,int,int64_t);
int SystemNative_MSync (int,uint64_t,int);
int SystemNative_MUnmap (int,uint64_t);
int SystemNative_Open (int,int,int);
int SystemNative_OpenDir (int);
int SystemNative_PosixFAdvise (int,int64_t,int64_t,int);
int SystemNative_Read (int,int,int);
int SystemNative_ReadDirR (int,int,int,int);
int SystemNative_ReadLink (int,int,int);
int SystemNative_Rename (int,int);
int SystemNative_RmDir (int);
int SystemNative_SetAddressFamily (int,int,int);
int SystemNative_SetIPv4Address (int,int,int);
int SystemNative_SetIPv6Address (int,int,int,int,int);
int SystemNative_SetPort (int,int,int);
int SystemNative_ShmOpen (int,int,int);
int SystemNative_ShmUnlink (int);
int SystemNative_Stat (int,int);
int SystemNative_StrErrorR (int,int,int);
int64_t SystemNative_SysConf (int);
void SystemNative_SysLog (int,int,int);
int SystemNative_Unlink (int);
int SystemNative_UTimensat (int,int);
int SystemNative_Write (int,int,int);
static PinvokeImport libSystem_Native_imports [] = {
{"SystemNative_Access", SystemNative_Access}, // System.Private.CoreLib
{"SystemNative_ChDir", SystemNative_ChDir}, // System.Private.CoreLib
{"SystemNative_ChMod", SystemNative_ChMod}, // System.IO.FileSystem
{"SystemNative_Close", SystemNative_Close}, // System.Private.CoreLib
{"SystemNative_CloseDir", SystemNative_CloseDir}, // System.IO.FileSystem, System.Private.CoreLib
{"SystemNative_ConvertErrorPalToPlatform", SystemNative_ConvertErrorPalToPlatform}, // System.Console, System.IO.FileSystem, System.IO.MemoryMappedFiles, System.Net.Primitives, System.Private.CoreLib
{"SystemNative_ConvertErrorPlatformToPal", SystemNative_ConvertErrorPlatformToPal}, // System.Console, System.IO.FileSystem, System.IO.MemoryMappedFiles, System.Net.Primitives, System.Private.CoreLib
{"SystemNative_CopyFile", SystemNative_CopyFile}, // System.IO.FileSystem
{"SystemNative_Dup", SystemNative_Dup}, // System.Console
{"SystemNative_FcntlSetFD", SystemNative_FcntlSetFD}, // System.IO.MemoryMappedFiles
{"SystemNative_FLock", SystemNative_FLock}, // System.Private.CoreLib
{"SystemNative_FStat", SystemNative_FStat}, // System.IO.MemoryMappedFiles, System.Private.CoreLib
{"SystemNative_FSync", SystemNative_FSync}, // System.Private.CoreLib
{"SystemNative_FTruncate", SystemNative_FTruncate}, // System.IO.MemoryMappedFiles, System.Private.CoreLib
{"SystemNative_GetAddressFamily", SystemNative_GetAddressFamily}, // System.Net.Primitives
{"SystemNative_GetCpuUtilization", SystemNative_GetCpuUtilization}, // System.Private.CoreLib
{"SystemNative_GetCryptographicallySecureRandomBytes", SystemNative_GetCryptographicallySecureRandomBytes}, // System.Security.Cryptography.Algorithms, System.Private.CoreLib
{"SystemNative_GetCwd", SystemNative_GetCwd}, // System.Private.CoreLib
{"SystemNative_GetIPSocketAddressSizes", SystemNative_GetIPSocketAddressSizes}, // System.Net.Primitives
{"SystemNative_GetIPv4Address", SystemNative_GetIPv4Address}, // System.Net.Primitives
{"SystemNative_GetIPv6Address", SystemNative_GetIPv6Address}, // System.Net.Primitives
{"SystemNative_GetNonCryptographicallySecureRandomBytes", SystemNative_GetNonCryptographicallySecureRandomBytes}, // System.Private.CoreLib
{"SystemNative_GetPort", SystemNative_GetPort}, // System.Net.Primitives
{"SystemNative_GetReadDirRBufferSize", SystemNative_GetReadDirRBufferSize}, // System.IO.FileSystem, System.Private.CoreLib
{"SystemNative_GetSystemTimeAsTicks", SystemNative_GetSystemTimeAsTicks}, // System.Private.CoreLib
{"SystemNative_GetTimestamp", SystemNative_GetTimestamp}, // System.Private.CoreLib
{"SystemNative_LChflags", SystemNative_LChflags}, // System.IO.FileSystem
{"SystemNative_LChflagsCanSetHiddenFlag", SystemNative_LChflagsCanSetHiddenFlag}, // System.IO.FileSystem
{"SystemNative_Link", SystemNative_Link}, // System.IO.FileSystem
{"SystemNative_LockFileRegion", SystemNative_LockFileRegion}, // System.Private.CoreLib
{"SystemNative_Log", SystemNative_Log}, // System.Private.CoreLib
{"SystemNative_LSeek", SystemNative_LSeek}, // System.Private.CoreLib
{"SystemNative_LStat", SystemNative_LStat}, // System.IO.FileSystem, System.Private.CoreLib
{"SystemNative_MAdvise", SystemNative_MAdvise}, // System.IO.MemoryMappedFiles
{"SystemNative_MemAlloc", SystemNative_MemAlloc}, // System.Private.CoreLib
{"SystemNative_MemFree", SystemNative_MemFree}, // System.Private.CoreLib
{"SystemNative_MemReAlloc", SystemNative_MemReAlloc}, // System.Private.CoreLib
{"SystemNative_MkDir", SystemNative_MkDir}, // System.IO.FileSystem
{"SystemNative_MksTemps", SystemNative_MksTemps}, // System.Private.CoreLib
{"SystemNative_MMap", SystemNative_MMap}, // System.IO.MemoryMappedFiles
{"SystemNative_MSync", SystemNative_MSync}, // System.IO.MemoryMappedFiles
{"SystemNative_MUnmap", SystemNative_MUnmap}, // System.IO.MemoryMappedFiles
{"SystemNative_Open", SystemNative_Open}, // System.Private.CoreLib
{"SystemNative_OpenDir", SystemNative_OpenDir}, // System.IO.FileSystem, System.Private.CoreLib
{"SystemNative_PosixFAdvise", SystemNative_PosixFAdvise}, // System.Private.CoreLib
{"SystemNative_Read", SystemNative_Read}, // System.Private.CoreLib
{"SystemNative_ReadDirR", SystemNative_ReadDirR}, // System.IO.FileSystem, System.Private.CoreLib
{"SystemNative_ReadLink", SystemNative_ReadLink}, // System.Private.CoreLib
{"SystemNative_Rename", SystemNative_Rename}, // System.IO.FileSystem
{"SystemNative_RmDir", SystemNative_RmDir}, // System.IO.FileSystem
{"SystemNative_SetAddressFamily", SystemNative_SetAddressFamily}, // System.Net.Primitives
{"SystemNative_SetIPv4Address", SystemNative_SetIPv4Address}, // System.Net.Primitives
{"SystemNative_SetIPv6Address", SystemNative_SetIPv6Address}, // System.Net.Primitives
{"SystemNative_SetPort", SystemNative_SetPort}, // System.Net.Primitives
{"SystemNative_ShmOpen", SystemNative_ShmOpen}, // System.IO.MemoryMappedFiles
{"SystemNative_ShmUnlink", SystemNative_ShmUnlink}, // System.IO.MemoryMappedFiles
{"SystemNative_Stat", SystemNative_Stat}, // System.IO.FileSystem, System.Private.CoreLib
{"SystemNative_StrErrorR", SystemNative_StrErrorR}, // Microsoft.Win32.Primitives, System.Console, System.IO.FileSystem, System.IO.MemoryMappedFiles, System.Net.Primitives, System.Private.CoreLib
{"SystemNative_SysConf", SystemNative_SysConf}, // System.IO.MemoryMappedFiles, System.Private.CoreLib
{"SystemNative_SysLog", SystemNative_SysLog}, // System.Private.CoreLib
{"SystemNative_Unlink", SystemNative_Unlink}, // System.IO.FileSystem, System.IO.MemoryMappedFiles, System.Private.CoreLib
{"SystemNative_UTimensat", SystemNative_UTimensat}, // System.IO.FileSystem
{"SystemNative_Write", SystemNative_Write}, // System.Console, System.Private.CoreLib
{NULL, NULL}
};
static PinvokeImport libSystem_IO_Compression_Native_imports [] = {
{"CompressionNative_Crc32", CompressionNative_Crc32}, // System.IO.Compression
{"CompressionNative_Deflate", CompressionNative_Deflate}, // System.IO.Compression
{"CompressionNative_DeflateEnd", CompressionNative_DeflateEnd}, // System.IO.Compression
{"CompressionNative_DeflateInit2_", CompressionNative_DeflateInit2_}, // System.IO.Compression
{"CompressionNative_Inflate", CompressionNative_Inflate}, // System.IO.Compression
{"CompressionNative_InflateEnd", CompressionNative_InflateEnd}, // System.IO.Compression
{"CompressionNative_InflateInit2_", CompressionNative_InflateInit2_}, // System.IO.Compression
{NULL, NULL}
};
static PinvokeImport libSystem_Globalization_Native_imports [] = {
{"GlobalizationNative_ChangeCase", GlobalizationNative_ChangeCase}, // System.Private.CoreLib
{"GlobalizationNative_ChangeCaseInvariant", GlobalizationNative_ChangeCaseInvariant}, // System.Private.CoreLib
{"GlobalizationNative_ChangeCaseTurkish", GlobalizationNative_ChangeCaseTurkish}, // System.Private.CoreLib
{"GlobalizationNative_CloseSortHandle", GlobalizationNative_CloseSortHandle}, // System.Private.CoreLib
{"GlobalizationNative_CompareString", GlobalizationNative_CompareString}, // System.Private.CoreLib
{"GlobalizationNative_EndsWith", GlobalizationNative_EndsWith}, // System.Private.CoreLib
{"GlobalizationNative_EnumCalendarInfo", GlobalizationNative_EnumCalendarInfo}, // System.Private.CoreLib
{"GlobalizationNative_GetCalendarInfo", GlobalizationNative_GetCalendarInfo}, // System.Private.CoreLib
{"GlobalizationNative_GetCalendars", GlobalizationNative_GetCalendars}, // System.Private.CoreLib
{"GlobalizationNative_GetDefaultLocaleName", GlobalizationNative_GetDefaultLocaleName}, // System.Private.CoreLib
{"GlobalizationNative_GetICUVersion", GlobalizationNative_GetICUVersion}, // System.Private.CoreLib
{"GlobalizationNative_GetJapaneseEraStartDate", GlobalizationNative_GetJapaneseEraStartDate}, // System.Private.CoreLib
{"GlobalizationNative_GetLatestJapaneseEra", GlobalizationNative_GetLatestJapaneseEra}, // System.Private.CoreLib
{"GlobalizationNative_GetLocaleInfoGroupingSizes", GlobalizationNative_GetLocaleInfoGroupingSizes}, // System.Private.CoreLib
{"GlobalizationNative_GetLocaleInfoInt", GlobalizationNative_GetLocaleInfoInt}, // System.Private.CoreLib
{"GlobalizationNative_GetLocaleInfoString", GlobalizationNative_GetLocaleInfoString}, // System.Private.CoreLib
{"GlobalizationNative_GetLocaleName", GlobalizationNative_GetLocaleName}, // System.Private.CoreLib
{"GlobalizationNative_GetLocales", GlobalizationNative_GetLocales}, // System.Private.CoreLib
{"GlobalizationNative_GetLocaleTimeFormat", GlobalizationNative_GetLocaleTimeFormat}, // System.Private.CoreLib
{"GlobalizationNative_GetSortHandle", GlobalizationNative_GetSortHandle}, // System.Private.CoreLib
{"GlobalizationNative_GetSortKey", GlobalizationNative_GetSortKey}, // System.Private.CoreLib
{"GlobalizationNative_GetSortVersion", GlobalizationNative_GetSortVersion}, // System.Private.CoreLib
{"GlobalizationNative_IndexOf", GlobalizationNative_IndexOf}, // System.Private.CoreLib
{"GlobalizationNative_InitICUFunctions", GlobalizationNative_InitICUFunctions}, // System.Private.CoreLib
{"GlobalizationNative_InitOrdinalCasingPage", GlobalizationNative_InitOrdinalCasingPage}, // System.Private.CoreLib
{"GlobalizationNative_IsNormalized", GlobalizationNative_IsNormalized}, // System.Private.CoreLib
{"GlobalizationNative_IsPredefinedLocale", GlobalizationNative_IsPredefinedLocale}, // System.Private.CoreLib
{"GlobalizationNative_LastIndexOf", GlobalizationNative_LastIndexOf}, // System.Private.CoreLib
{"GlobalizationNative_LoadICU", GlobalizationNative_LoadICU}, // System.Private.CoreLib
{"GlobalizationNative_NormalizeString", GlobalizationNative_NormalizeString}, // System.Private.CoreLib
{"GlobalizationNative_StartsWith", GlobalizationNative_StartsWith}, // System.Private.CoreLib
{"GlobalizationNative_ToAscii", GlobalizationNative_ToAscii}, // System.Private.CoreLib
{"GlobalizationNative_ToUnicode", GlobalizationNative_ToUnicode}, // System.Private.CoreLib
{NULL, NULL}
};
static void *pinvoke_tables[] = { libSystem_Native_imports,libSystem_IO_Compression_Native_imports,libSystem_Globalization_Native_imports,};
static char *pinvoke_names[] = { "libSystem.Native","libSystem.IO.Compression.Native","libSystem.Globalization.Native",};
InterpFtnDesc wasm_native_to_interp_ftndescs[1];
typedef void  (*WasmInterpEntrySig_0) (int*,int*,int*);
void wasm_native_to_interp_System_Private_CoreLib_CalendarData_EnumCalendarInfoCallback (int arg0,int arg1) { 
((WasmInterpEntrySig_0)wasm_native_to_interp_ftndescs [0].func) (&arg0, &arg1, wasm_native_to_interp_ftndescs [0].arg);
}
static void *wasm_native_to_interp_funcs[] = { wasm_native_to_interp_System_Private_CoreLib_CalendarData_EnumCalendarInfoCallback,};
static const char *wasm_native_to_interp_map[] = { "System_Private_CoreLib_CalendarData_EnumCalendarInfoCallback",
};
