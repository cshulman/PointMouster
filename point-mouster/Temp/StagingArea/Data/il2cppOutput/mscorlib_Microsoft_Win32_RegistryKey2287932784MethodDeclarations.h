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

// Microsoft.Win32.RegistryKey
struct RegistryKey_t2287932784;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.IO.IOException
struct IOException_t2458421087;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_Microsoft_Win32_RegistryHive2561794591.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_String2029220233.h"

// System.Void Microsoft.Win32.RegistryKey::.ctor(Microsoft.Win32.RegistryHive)
extern "C"  void RegistryKey__ctor_m1278683853 (RegistryKey_t2287932784 * __this, int32_t ___hiveId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.RegistryKey::.ctor(Microsoft.Win32.RegistryHive,System.IntPtr,System.Boolean)
extern "C"  void RegistryKey__ctor_m3835626924 (RegistryKey_t2287932784 * __this, int32_t ___hiveId0, IntPtr_t ___keyHandle1, bool ___remoteRoot2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.RegistryKey::.ctor(System.Object,System.String,System.Boolean)
extern "C"  void RegistryKey__ctor_m605536598 (RegistryKey_t2287932784 * __this, Il2CppObject * ___data0, String_t* ___keyName1, bool ___writable2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.RegistryKey::.cctor()
extern "C"  void RegistryKey__cctor_m3666002344 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.RegistryKey::System.IDisposable.Dispose()
extern "C"  void RegistryKey_System_IDisposable_Dispose_m1903160980 (RegistryKey_t2287932784 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.RegistryKey::Finalize()
extern "C"  void RegistryKey_Finalize_m3436419561 (RegistryKey_t2287932784 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Microsoft.Win32.RegistryKey::get_Name()
extern "C"  String_t* RegistryKey_get_Name_m2830177076 (RegistryKey_t2287932784 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.RegistryKey::Flush()
extern "C"  void RegistryKey_Flush_m1879115555 (RegistryKey_t2287932784 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.RegistryKey::Close()
extern "C"  void RegistryKey_Close_m1878951281 (RegistryKey_t2287932784 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.RegistryKey::SetValue(System.String,System.Object)
extern "C"  void RegistryKey_SetValue_m2470362740 (RegistryKey_t2287932784 * __this, String_t* ___name0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Microsoft.Win32.RegistryKey Microsoft.Win32.RegistryKey::OpenSubKey(System.String,System.Boolean)
extern "C"  RegistryKey_t2287932784 * RegistryKey_OpenSubKey_m1393163461 (RegistryKey_t2287932784 * __this, String_t* ___name0, bool ___writable1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.RegistryKey::DeleteValue(System.String,System.Boolean)
extern "C"  void RegistryKey_DeleteValue_m2218702608 (RegistryKey_t2287932784 * __this, String_t* ___name0, bool ___throwOnMissingValue1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Microsoft.Win32.RegistryKey::ToString()
extern "C"  String_t* RegistryKey_ToString_m63681718 (RegistryKey_t2287932784 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Microsoft.Win32.RegistryKey::get_IsRoot()
extern "C"  bool RegistryKey_get_IsRoot_m2989913404 (RegistryKey_t2287932784 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Microsoft.Win32.RegistryKey::get_IsWritable()
extern "C"  bool RegistryKey_get_IsWritable_m1243924408 (RegistryKey_t2287932784 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Microsoft.Win32.RegistryHive Microsoft.Win32.RegistryKey::get_Hive()
extern "C"  int32_t RegistryKey_get_Hive_m1395918589 (RegistryKey_t2287932784 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Microsoft.Win32.RegistryKey::get_Handle()
extern "C"  Il2CppObject * RegistryKey_get_Handle_m2075076141 (RegistryKey_t2287932784 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.RegistryKey::AssertKeyStillValid()
extern "C"  void RegistryKey_AssertKeyStillValid_m642111092 (RegistryKey_t2287932784 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.RegistryKey::AssertKeyNameLength(System.String)
extern "C"  void RegistryKey_AssertKeyNameLength_m3140888475 (RegistryKey_t2287932784 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.IOException Microsoft.Win32.RegistryKey::CreateMarkedForDeletionException()
extern "C"  IOException_t2458421087 * RegistryKey_CreateMarkedForDeletionException_m2959634582 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Microsoft.Win32.RegistryKey::GetHiveName(Microsoft.Win32.RegistryHive)
extern "C"  String_t* RegistryKey_GetHiveName_m1241181587 (Il2CppObject * __this /* static, unused */, int32_t ___hive0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
