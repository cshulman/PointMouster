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
// UnityEngine.Application/LogCallback
struct LogCallback_t1867914413;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_RuntimePlatform1869584967.h"
#include "UnityEngine_UnityEngine_SystemLanguage2428294669.h"
#include "UnityEngine_UnityEngine_Application_LogCallback1867914413.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_LogType1559732862.h"

// System.Void UnityEngine.Application::Quit()
extern "C"  void Application_Quit_m3885595876 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Application::get_isPlaying()
extern "C"  bool Application_get_isPlaying_m4091950718 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Application::get_isEditor()
extern "C"  bool Application_get_isEditor_m2474583393 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
extern "C"  int32_t Application_get_platform_m3989224144 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Application::get_persistentDataPath()
extern "C"  String_t* Application_get_persistentDataPath_m3129298355 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.SystemLanguage UnityEngine.Application::get_systemLanguage()
extern "C"  int32_t Application_get_systemLanguage_m2242495854 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Application::add_logMessageReceived(UnityEngine.Application/LogCallback)
extern "C"  void Application_add_logMessageReceived_m2712372862 (Il2CppObject * __this /* static, unused */, LogCallback_t1867914413 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Application::remove_logMessageReceived(UnityEngine.Application/LogCallback)
extern "C"  void Application_remove_logMessageReceived_m3667144081 (Il2CppObject * __this /* static, unused */, LogCallback_t1867914413 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Application::CallLogCallback(System.String,System.String,UnityEngine.LogType,System.Boolean)
extern "C"  void Application_CallLogCallback_m3408386792 (Il2CppObject * __this /* static, unused */, String_t* ___logString0, String_t* ___stackTrace1, int32_t ___type2, bool ___invokedOnMainThread3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Application::SetLogCallbackDefined(System.Boolean)
extern "C"  void Application_SetLogCallbackDefined_m3885724164 (Il2CppObject * __this /* static, unused */, bool ___defined0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
