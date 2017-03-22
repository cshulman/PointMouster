#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Microsoft.Win32.Win32RegistryApi
struct Win32RegistryApi_t2321265302;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// Microsoft.Win32.RegistryKey
struct RegistryKey_t2287932784;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_Microsoft_Win32_RegistryValueKind3069013676.h"
#include "mscorlib_Microsoft_Win32_RegistryKey2287932784.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void Microsoft.Win32.Win32RegistryApi::.ctor()
extern "C"  void Win32RegistryApi__ctor_m380794313 (Win32RegistryApi_t2321265302 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Microsoft.Win32.Win32RegistryApi::RegCloseKey(System.IntPtr)
extern "C"  int32_t Win32RegistryApi_RegCloseKey_m3097426732 (Il2CppObject * __this /* static, unused */, IntPtr_t ___keyHandle0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Microsoft.Win32.Win32RegistryApi::RegFlushKey(System.IntPtr)
extern "C"  int32_t Win32RegistryApi_RegFlushKey_m3060746502 (Il2CppObject * __this /* static, unused */, IntPtr_t ___keyHandle0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Microsoft.Win32.Win32RegistryApi::RegOpenKeyEx(System.IntPtr,System.String,System.IntPtr,System.Int32,System.IntPtr&)
extern "C"  int32_t Win32RegistryApi_RegOpenKeyEx_m3724851794 (Il2CppObject * __this /* static, unused */, IntPtr_t ___keyBase0, String_t* ___keyName1, IntPtr_t ___reserved2, int32_t ___access3, IntPtr_t* ___keyHandle4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Microsoft.Win32.Win32RegistryApi::RegDeleteValue(System.IntPtr,System.String)
extern "C"  int32_t Win32RegistryApi_RegDeleteValue_m1799594961 (Il2CppObject * __this /* static, unused */, IntPtr_t ___keyHandle0, String_t* ___valueName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Microsoft.Win32.Win32RegistryApi::RegSetValueEx(System.IntPtr,System.String,System.IntPtr,Microsoft.Win32.RegistryValueKind,System.String,System.Int32)
extern "C"  int32_t Win32RegistryApi_RegSetValueEx_m1054801277 (Il2CppObject * __this /* static, unused */, IntPtr_t ___keyBase0, String_t* ___valueName1, IntPtr_t ___reserved2, int32_t ___type3, String_t* ___data4, int32_t ___rawDataLength5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Microsoft.Win32.Win32RegistryApi::RegSetValueEx(System.IntPtr,System.String,System.IntPtr,Microsoft.Win32.RegistryValueKind,System.Byte[],System.Int32)
extern "C"  int32_t Win32RegistryApi_RegSetValueEx_m186733746 (Il2CppObject * __this /* static, unused */, IntPtr_t ___keyBase0, String_t* ___valueName1, IntPtr_t ___reserved2, int32_t ___type3, ByteU5BU5D_t3397334013* ___rawData4, int32_t ___rawDataLength5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Microsoft.Win32.Win32RegistryApi::RegSetValueEx(System.IntPtr,System.String,System.IntPtr,Microsoft.Win32.RegistryValueKind,System.Int32&,System.Int32)
extern "C"  int32_t Win32RegistryApi_RegSetValueEx_m2240986270 (Il2CppObject * __this /* static, unused */, IntPtr_t ___keyBase0, String_t* ___valueName1, IntPtr_t ___reserved2, int32_t ___type3, int32_t* ___data4, int32_t ___rawDataLength5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Microsoft.Win32.Win32RegistryApi::GetHandle(Microsoft.Win32.RegistryKey)
extern "C"  IntPtr_t Win32RegistryApi_GetHandle_m1362714355 (Il2CppObject * __this /* static, unused */, RegistryKey_t2287932784 * ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Microsoft.Win32.Win32RegistryApi::IsHandleValid(Microsoft.Win32.RegistryKey)
extern "C"  bool Win32RegistryApi_IsHandleValid_m3580845620 (Il2CppObject * __this /* static, unused */, RegistryKey_t2287932784 * ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.Win32RegistryApi::SetValue(Microsoft.Win32.RegistryKey,System.String,System.Object)
extern "C"  void Win32RegistryApi_SetValue_m1675803255 (Win32RegistryApi_t2321265302 * __this, RegistryKey_t2287932784 * ___rkey0, String_t* ___name1, Il2CppObject * ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Microsoft.Win32.RegistryKey Microsoft.Win32.Win32RegistryApi::OpenSubKey(Microsoft.Win32.RegistryKey,System.String,System.Boolean)
extern "C"  RegistryKey_t2287932784 * Win32RegistryApi_OpenSubKey_m2046895160 (Win32RegistryApi_t2321265302 * __this, RegistryKey_t2287932784 * ___rkey0, String_t* ___keyName1, bool ___writable2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.Win32RegistryApi::Flush(Microsoft.Win32.RegistryKey)
extern "C"  void Win32RegistryApi_Flush_m1067061662 (Win32RegistryApi_t2321265302 * __this, RegistryKey_t2287932784 * ___rkey0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.Win32RegistryApi::Close(Microsoft.Win32.RegistryKey)
extern "C"  void Win32RegistryApi_Close_m449068708 (Win32RegistryApi_t2321265302 * __this, RegistryKey_t2287932784 * ___rkey0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.Win32RegistryApi::DeleteValue(Microsoft.Win32.RegistryKey,System.String,System.Boolean)
extern "C"  void Win32RegistryApi_DeleteValue_m1261437233 (Win32RegistryApi_t2321265302 * __this, RegistryKey_t2287932784 * ___rkey0, String_t* ___value1, bool ___shouldThrowWhenKeyMissing2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.Win32RegistryApi::GenerateException(System.Int32)
extern "C"  void Win32RegistryApi_GenerateException_m2130902570 (Win32RegistryApi_t2321265302 * __this, int32_t ___errorCode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Microsoft.Win32.Win32RegistryApi::ToString(Microsoft.Win32.RegistryKey)
extern "C"  String_t* Win32RegistryApi_ToString_m3025793105 (Win32RegistryApi_t2321265302 * __this, RegistryKey_t2287932784 * ___rkey0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Microsoft.Win32.Win32RegistryApi::CombineName(Microsoft.Win32.RegistryKey,System.String)
extern "C"  String_t* Win32RegistryApi_CombineName_m879987379 (Il2CppObject * __this /* static, unused */, RegistryKey_t2287932784 * ___rkey0, String_t* ___localName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
