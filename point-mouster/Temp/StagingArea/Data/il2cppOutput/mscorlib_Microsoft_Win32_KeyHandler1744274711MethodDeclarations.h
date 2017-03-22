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

// Microsoft.Win32.KeyHandler
struct KeyHandler_t1744274711;
// Microsoft.Win32.RegistryKey
struct RegistryKey_t2287932784;
// System.String
struct String_t;
// System.Security.SecurityElement
struct SecurityElement_t2325568386;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_Microsoft_Win32_RegistryKey2287932784.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Security_SecurityElement2325568386.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void Microsoft.Win32.KeyHandler::.ctor(Microsoft.Win32.RegistryKey,System.String)
extern "C"  void KeyHandler__ctor_m2976903079 (KeyHandler_t1744274711 * __this, RegistryKey_t2287932784 * ___rkey0, String_t* ___basedir1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.KeyHandler::.cctor()
extern "C"  void KeyHandler__cctor_m1192261993 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.KeyHandler::Load()
extern "C"  void KeyHandler_Load_m3388995186 (KeyHandler_t1744274711 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.KeyHandler::LoadKey(System.Security.SecurityElement)
extern "C"  void KeyHandler_LoadKey_m1557927458 (KeyHandler_t1744274711 * __this, SecurityElement_t2325568386 * ___se0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Microsoft.Win32.RegistryKey Microsoft.Win32.KeyHandler::Ensure(Microsoft.Win32.RegistryKey,System.String,System.Boolean)
extern "C"  RegistryKey_t2287932784 * KeyHandler_Ensure_m160000618 (KeyHandler_t1744274711 * __this, RegistryKey_t2287932784 * ___rkey0, String_t* ___extra1, bool ___writable2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Microsoft.Win32.RegistryKey Microsoft.Win32.KeyHandler::Probe(Microsoft.Win32.RegistryKey,System.String,System.Boolean)
extern "C"  RegistryKey_t2287932784 * KeyHandler_Probe_m4047175728 (KeyHandler_t1744274711 * __this, RegistryKey_t2287932784 * ___rkey0, String_t* ___extra1, bool ___writable2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Microsoft.Win32.KeyHandler::CombineName(Microsoft.Win32.RegistryKey,System.String)
extern "C"  String_t* KeyHandler_CombineName_m2974558358 (Il2CppObject * __this /* static, unused */, RegistryKey_t2287932784 * ___rkey0, String_t* ___extra1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Microsoft.Win32.KeyHandler Microsoft.Win32.KeyHandler::Lookup(Microsoft.Win32.RegistryKey,System.Boolean)
extern "C"  KeyHandler_t1744274711 * KeyHandler_Lookup_m1376747285 (Il2CppObject * __this /* static, unused */, RegistryKey_t2287932784 * ___rkey0, bool ___createNonExisting1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.KeyHandler::Drop(Microsoft.Win32.RegistryKey)
extern "C"  void KeyHandler_Drop_m1642093248 (Il2CppObject * __this /* static, unused */, RegistryKey_t2287932784 * ___rkey0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.KeyHandler::SetValue(System.String,System.Object)
extern "C"  void KeyHandler_SetValue_m2647921767 (KeyHandler_t1744274711 * __this, String_t* ___name0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.KeyHandler::SetDirty()
extern "C"  void KeyHandler_SetDirty_m1020708550 (KeyHandler_t1744274711 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.KeyHandler::DirtyTimeout(System.Object)
extern "C"  void KeyHandler_DirtyTimeout_m3667381593 (KeyHandler_t1744274711 * __this, Il2CppObject * ___state0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.KeyHandler::Flush()
extern "C"  void KeyHandler_Flush_m638666586 (KeyHandler_t1744274711 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Microsoft.Win32.KeyHandler::ValueExists(System.String)
extern "C"  bool KeyHandler_ValueExists_m2822364839 (KeyHandler_t1744274711 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Microsoft.Win32.KeyHandler::get_IsMarkedForDeletion()
extern "C"  bool KeyHandler_get_IsMarkedForDeletion_m1425058230 (KeyHandler_t1744274711 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.KeyHandler::RemoveValue(System.String)
extern "C"  void KeyHandler_RemoveValue_m2659274905 (KeyHandler_t1744274711 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.KeyHandler::Finalize()
extern "C"  void KeyHandler_Finalize_m3338546940 (KeyHandler_t1744274711 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.KeyHandler::Save()
extern "C"  void KeyHandler_Save_m1586406499 (KeyHandler_t1744274711 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.KeyHandler::AssertNotMarkedForDeletion()
extern "C"  void KeyHandler_AssertNotMarkedForDeletion_m3968307178 (KeyHandler_t1744274711 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Microsoft.Win32.KeyHandler::get_UserStore()
extern "C"  String_t* KeyHandler_get_UserStore_m1543438488 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Microsoft.Win32.KeyHandler::get_MachineStore()
extern "C"  String_t* KeyHandler_get_MachineStore_m617211204 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
