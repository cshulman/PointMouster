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

// GoogleAnalyticsV4
struct GoogleAnalyticsV4_t198817271;
// System.String
struct String_t;
// Field
struct Field_t1707169132;
// System.Object
struct Il2CppObject;
// AppViewHitBuilder
struct AppViewHitBuilder_t93969158;
// EventHitBuilder
struct EventHitBuilder_t3458384960;
// TransactionHitBuilder
struct TransactionHitBuilder_t3262282092;
// ItemHitBuilder
struct ItemHitBuilder_t596710299;
// ExceptionHitBuilder
struct ExceptionHitBuilder_t2776428281;
// SocialHitBuilder
struct SocialHitBuilder_t2172450373;
// TimingHitBuilder
struct TimingHitBuilder_t1787450410;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_LogType1559732862.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Field1707169132.h"
#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharpU2Dfirstpass_AppViewHitBuilder93969158.h"
#include "AssemblyU2DCSharpU2Dfirstpass_EventHitBuilder3458384960.h"
#include "AssemblyU2DCSharpU2Dfirstpass_TransactionHitBuilde3262282092.h"
#include "AssemblyU2DCSharpU2Dfirstpass_ItemHitBuilder596710299.h"
#include "AssemblyU2DCSharpU2Dfirstpass_ExceptionHitBuilder2776428281.h"
#include "AssemblyU2DCSharpU2Dfirstpass_SocialHitBuilder2172450373.h"
#include "AssemblyU2DCSharpU2Dfirstpass_TimingHitBuilder1787450410.h"
#include "AssemblyU2DCSharpU2Dfirstpass_GoogleAnalyticsV4_De1779684248.h"

// System.Void GoogleAnalyticsV4::.ctor()
extern "C"  void GoogleAnalyticsV4__ctor_m3270012680 (GoogleAnalyticsV4_t198817271 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAnalyticsV4::Awake()
extern "C"  void GoogleAnalyticsV4_Awake_m3163291097 (GoogleAnalyticsV4_t198817271 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAnalyticsV4::Update()
extern "C"  void GoogleAnalyticsV4_Update_m1257843309 (GoogleAnalyticsV4_t198817271 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAnalyticsV4::HandleException(System.String,System.String,UnityEngine.LogType)
extern "C"  void GoogleAnalyticsV4_HandleException_m1581822902 (GoogleAnalyticsV4_t198817271 * __this, String_t* ___condition0, String_t* ___stackTrace1, int32_t ___type2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAnalyticsV4::InitializeTracker()
extern "C"  void GoogleAnalyticsV4_InitializeTracker_m992878 (GoogleAnalyticsV4_t198817271 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAnalyticsV4::SetAppLevelOptOut(System.Boolean)
extern "C"  void GoogleAnalyticsV4_SetAppLevelOptOut_m2400172731 (GoogleAnalyticsV4_t198817271 * __this, bool ___optOut0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAnalyticsV4::SetUserIDOverride(System.String)
extern "C"  void GoogleAnalyticsV4_SetUserIDOverride_m3126020748 (GoogleAnalyticsV4_t198817271 * __this, String_t* ___userID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAnalyticsV4::ClearUserIDOverride()
extern "C"  void GoogleAnalyticsV4_ClearUserIDOverride_m1451420921 (GoogleAnalyticsV4_t198817271 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAnalyticsV4::DispatchHits()
extern "C"  void GoogleAnalyticsV4_DispatchHits_m2871369878 (GoogleAnalyticsV4_t198817271 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAnalyticsV4::StartSession()
extern "C"  void GoogleAnalyticsV4_StartSession_m2789500950 (GoogleAnalyticsV4_t198817271 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAnalyticsV4::StopSession()
extern "C"  void GoogleAnalyticsV4_StopSession_m3292677284 (GoogleAnalyticsV4_t198817271 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAnalyticsV4::SetOnTracker(Field,System.Object)
extern "C"  void GoogleAnalyticsV4_SetOnTracker_m3734804403 (GoogleAnalyticsV4_t198817271 * __this, Field_t1707169132 * ___fieldName0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAnalyticsV4::LogScreen(System.String)
extern "C"  void GoogleAnalyticsV4_LogScreen_m3378421172 (GoogleAnalyticsV4_t198817271 * __this, String_t* ___title0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAnalyticsV4::LogScreen(AppViewHitBuilder)
extern "C"  void GoogleAnalyticsV4_LogScreen_m2917853658 (GoogleAnalyticsV4_t198817271 * __this, AppViewHitBuilder_t93969158 * ___builder0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAnalyticsV4::LogEvent(System.String,System.String,System.String,System.Int64)
extern "C"  void GoogleAnalyticsV4_LogEvent_m325116516 (GoogleAnalyticsV4_t198817271 * __this, String_t* ___eventCategory0, String_t* ___eventAction1, String_t* ___eventLabel2, int64_t ___value3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAnalyticsV4::LogEvent(EventHitBuilder)
extern "C"  void GoogleAnalyticsV4_LogEvent_m2990115886 (GoogleAnalyticsV4_t198817271 * __this, EventHitBuilder_t3458384960 * ___builder0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAnalyticsV4::LogTransaction(System.String,System.String,System.Double,System.Double,System.Double)
extern "C"  void GoogleAnalyticsV4_LogTransaction_m1530700878 (GoogleAnalyticsV4_t198817271 * __this, String_t* ___transID0, String_t* ___affiliation1, double ___revenue2, double ___tax3, double ___shipping4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAnalyticsV4::LogTransaction(System.String,System.String,System.Double,System.Double,System.Double,System.String)
extern "C"  void GoogleAnalyticsV4_LogTransaction_m401547386 (GoogleAnalyticsV4_t198817271 * __this, String_t* ___transID0, String_t* ___affiliation1, double ___revenue2, double ___tax3, double ___shipping4, String_t* ___currencyCode5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAnalyticsV4::LogTransaction(TransactionHitBuilder)
extern "C"  void GoogleAnalyticsV4_LogTransaction_m1812476846 (GoogleAnalyticsV4_t198817271 * __this, TransactionHitBuilder_t3262282092 * ___builder0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAnalyticsV4::LogItem(System.String,System.String,System.String,System.String,System.Double,System.Int64)
extern "C"  void GoogleAnalyticsV4_LogItem_m3438478865 (GoogleAnalyticsV4_t198817271 * __this, String_t* ___transID0, String_t* ___name1, String_t* ___sku2, String_t* ___category3, double ___price4, int64_t ___quantity5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAnalyticsV4::LogItem(System.String,System.String,System.String,System.String,System.Double,System.Int64,System.String)
extern "C"  void GoogleAnalyticsV4_LogItem_m1182148751 (GoogleAnalyticsV4_t198817271 * __this, String_t* ___transID0, String_t* ___name1, String_t* ___sku2, String_t* ___category3, double ___price4, int64_t ___quantity5, String_t* ___currencyCode6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAnalyticsV4::LogItem(ItemHitBuilder)
extern "C"  void GoogleAnalyticsV4_LogItem_m1254588128 (GoogleAnalyticsV4_t198817271 * __this, ItemHitBuilder_t596710299 * ___builder0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAnalyticsV4::LogException(System.String,System.Boolean)
extern "C"  void GoogleAnalyticsV4_LogException_m2842262436 (GoogleAnalyticsV4_t198817271 * __this, String_t* ___exceptionDescription0, bool ___isFatal1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAnalyticsV4::LogException(ExceptionHitBuilder)
extern "C"  void GoogleAnalyticsV4_LogException_m189972878 (GoogleAnalyticsV4_t198817271 * __this, ExceptionHitBuilder_t2776428281 * ___builder0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAnalyticsV4::LogSocial(System.String,System.String,System.String)
extern "C"  void GoogleAnalyticsV4_LogSocial_m2719498665 (GoogleAnalyticsV4_t198817271 * __this, String_t* ___socialNetwork0, String_t* ___socialAction1, String_t* ___socialTarget2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAnalyticsV4::LogSocial(SocialHitBuilder)
extern "C"  void GoogleAnalyticsV4_LogSocial_m1560661108 (GoogleAnalyticsV4_t198817271 * __this, SocialHitBuilder_t2172450373 * ___builder0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAnalyticsV4::LogTiming(System.String,System.Int64,System.String,System.String)
extern "C"  void GoogleAnalyticsV4_LogTiming_m4139658804 (GoogleAnalyticsV4_t198817271 * __this, String_t* ___timingCategory0, int64_t ___timingInterval1, String_t* ___timingName2, String_t* ___timingLabel3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAnalyticsV4::LogTiming(TimingHitBuilder)
extern "C"  void GoogleAnalyticsV4_LogTiming_m3031506414 (GoogleAnalyticsV4_t198817271 * __this, TimingHitBuilder_t1787450410 * ___builder0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAnalyticsV4::Dispose()
extern "C"  void GoogleAnalyticsV4_Dispose_m2549285195 (GoogleAnalyticsV4_t198817271 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GoogleAnalyticsV4::belowThreshold(GoogleAnalyticsV4/DebugMode,GoogleAnalyticsV4/DebugMode)
extern "C"  bool GoogleAnalyticsV4_belowThreshold_m2653639058 (Il2CppObject * __this /* static, unused */, int32_t ___userLogLevel0, int32_t ___comparelogLevel1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GoogleAnalyticsV4 GoogleAnalyticsV4::getInstance()
extern "C"  GoogleAnalyticsV4_t198817271 * GoogleAnalyticsV4_getInstance_m289703353 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAnalyticsV4::.cctor()
extern "C"  void GoogleAnalyticsV4__cctor_m552696835 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
