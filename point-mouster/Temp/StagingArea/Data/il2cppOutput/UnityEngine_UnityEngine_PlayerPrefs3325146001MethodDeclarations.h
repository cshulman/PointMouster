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

// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Boolean UnityEngine.PlayerPrefs::TrySetSetString(System.String,System.String)
extern "C"  bool PlayerPrefs_TrySetSetString_m3460332240 (Il2CppObject * __this /* static, unused */, String_t* ___key0, String_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.PlayerPrefs::SetString(System.String,System.String)
extern "C"  void PlayerPrefs_SetString_m2547809843 (Il2CppObject * __this /* static, unused */, String_t* ___key0, String_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.PlayerPrefs::GetString(System.String,System.String)
extern "C"  String_t* PlayerPrefs_GetString_m1246323344 (Il2CppObject * __this /* static, unused */, String_t* ___key0, String_t* ___defaultValue1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.PlayerPrefs::GetString(System.String)
extern "C"  String_t* PlayerPrefs_GetString_m1903615000 (Il2CppObject * __this /* static, unused */, String_t* ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.PlayerPrefs::DeleteKey(System.String)
extern "C"  void PlayerPrefs_DeleteKey_m2519743590 (Il2CppObject * __this /* static, unused */, String_t* ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
