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

// GoogleAnalyticsMPV3
struct GoogleAnalyticsMPV3_t3464676905;
// Field
struct Field_t1707169132;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// UnityEngine.WWW
struct WWW_t2919945039;
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
#include "AssemblyU2DCSharpU2Dfirstpass_Field1707169132.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_WWW2919945039.h"
#include "AssemblyU2DCSharpU2Dfirstpass_AppViewHitBuilder93969158.h"
#include "AssemblyU2DCSharpU2Dfirstpass_EventHitBuilder3458384960.h"
#include "AssemblyU2DCSharpU2Dfirstpass_TransactionHitBuilde3262282092.h"
#include "AssemblyU2DCSharpU2Dfirstpass_ItemHitBuilder596710299.h"
#include "AssemblyU2DCSharpU2Dfirstpass_ExceptionHitBuilder2776428281.h"
#include "AssemblyU2DCSharpU2Dfirstpass_SocialHitBuilder2172450373.h"
#include "AssemblyU2DCSharpU2Dfirstpass_TimingHitBuilder1787450410.h"
#include "AssemblyU2DCSharpU2Dfirstpass_GoogleAnalyticsV4_De1779684248.h"

// System.Void GoogleAnalyticsMPV3::.ctor()
extern "C"  void GoogleAnalyticsMPV3__ctor_m2294219988 (GoogleAnalyticsMPV3_t3464676905 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAnalyticsMPV3::InitializeTracker()
extern "C"  void GoogleAnalyticsMPV3_InitializeTracker_m3090256618 (GoogleAnalyticsMPV3_t3464676905 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAnalyticsMPV3::SetTrackerVal(Field,System.Object)
extern "C"  void GoogleAnalyticsMPV3_SetTrackerVal_m2824577027 (GoogleAnalyticsMPV3_t3464676905 * __this, Field_t1707169132 * ___field0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GoogleAnalyticsMPV3::AddTrackerVals()
extern "C"  String_t* GoogleAnalyticsMPV3_AddTrackerVals_m1181694752 (GoogleAnalyticsMPV3_t3464676905 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAnalyticsMPV3::StartSession()
extern "C"  void GoogleAnalyticsMPV3_StartSession_m2915296610 (GoogleAnalyticsMPV3_t3464676905 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAnalyticsMPV3::StopSession()
extern "C"  void GoogleAnalyticsMPV3_StopSession_m3389968836 (GoogleAnalyticsMPV3_t3464676905 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAnalyticsMPV3::SendGaHitWithMeasurementProtocol(System.String)
extern "C"  void GoogleAnalyticsMPV3_SendGaHitWithMeasurementProtocol_m3849804781 (GoogleAnalyticsMPV3_t3464676905 * __this, String_t* ___url0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GoogleAnalyticsMPV3::HandleWWW(UnityEngine.WWW)
extern "C"  Il2CppObject * GoogleAnalyticsMPV3_HandleWWW_m1247028445 (GoogleAnalyticsMPV3_t3464676905 * __this, WWW_t2919945039 * ___request0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GoogleAnalyticsMPV3::AddRequiredMPParameter(Field,System.Object)
extern "C"  String_t* GoogleAnalyticsMPV3_AddRequiredMPParameter_m626006747 (GoogleAnalyticsMPV3_t3464676905 * __this, Field_t1707169132 * ___parameter0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GoogleAnalyticsMPV3::AddRequiredMPParameter(Field,System.String)
extern "C"  String_t* GoogleAnalyticsMPV3_AddRequiredMPParameter_m262083703 (GoogleAnalyticsMPV3_t3464676905 * __this, Field_t1707169132 * ___parameter0, String_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GoogleAnalyticsMPV3::AddOptionalMPParameter(Field,System.Object)
extern "C"  String_t* GoogleAnalyticsMPV3_AddOptionalMPParameter_m2995814412 (GoogleAnalyticsMPV3_t3464676905 * __this, Field_t1707169132 * ___parameter0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GoogleAnalyticsMPV3::AddOptionalMPParameter(Field,System.String)
extern "C"  String_t* GoogleAnalyticsMPV3_AddOptionalMPParameter_m3359737458 (GoogleAnalyticsMPV3_t3464676905 * __this, Field_t1707169132 * ___parameter0, String_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAnalyticsMPV3::LogScreen(AppViewHitBuilder)
extern "C"  void GoogleAnalyticsMPV3_LogScreen_m3871238194 (GoogleAnalyticsMPV3_t3464676905 * __this, AppViewHitBuilder_t93969158 * ___builder0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAnalyticsMPV3::LogEvent(EventHitBuilder)
extern "C"  void GoogleAnalyticsMPV3_LogEvent_m1403131402 (GoogleAnalyticsMPV3_t3464676905 * __this, EventHitBuilder_t3458384960 * ___builder0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAnalyticsMPV3::LogTransaction(TransactionHitBuilder)
extern "C"  void GoogleAnalyticsMPV3_LogTransaction_m3125639626 (GoogleAnalyticsMPV3_t3464676905 * __this, TransactionHitBuilder_t3262282092 * ___builder0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAnalyticsMPV3::LogItem(ItemHitBuilder)
extern "C"  void GoogleAnalyticsMPV3_LogItem_m280836360 (GoogleAnalyticsMPV3_t3464676905 * __this, ItemHitBuilder_t596710299 * ___builder0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAnalyticsMPV3::LogException(ExceptionHitBuilder)
extern "C"  void GoogleAnalyticsMPV3_LogException_m3703092138 (GoogleAnalyticsMPV3_t3464676905 * __this, ExceptionHitBuilder_t2776428281 * ___builder0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAnalyticsMPV3::LogSocial(SocialHitBuilder)
extern "C"  void GoogleAnalyticsMPV3_LogSocial_m3424488120 (GoogleAnalyticsMPV3_t3464676905 * __this, SocialHitBuilder_t2172450373 * ___builder0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAnalyticsMPV3::LogTiming(TimingHitBuilder)
extern "C"  void GoogleAnalyticsMPV3_LogTiming_m1784569914 (GoogleAnalyticsMPV3_t3464676905 * __this, TimingHitBuilder_t1787450410 * ___builder0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAnalyticsMPV3::ClearUserIDOverride()
extern "C"  void GoogleAnalyticsMPV3_ClearUserIDOverride_m2153321027 (GoogleAnalyticsMPV3_t3464676905 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAnalyticsMPV3::SetTrackingCode(System.String)
extern "C"  void GoogleAnalyticsMPV3_SetTrackingCode_m1247221714 (GoogleAnalyticsMPV3_t3464676905 * __this, String_t* ___trackingCode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAnalyticsMPV3::SetBundleIdentifier(System.String)
extern "C"  void GoogleAnalyticsMPV3_SetBundleIdentifier_m2323008417 (GoogleAnalyticsMPV3_t3464676905 * __this, String_t* ___bundleIdentifier0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAnalyticsMPV3::SetAppName(System.String)
extern "C"  void GoogleAnalyticsMPV3_SetAppName_m263714288 (GoogleAnalyticsMPV3_t3464676905 * __this, String_t* ___appName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAnalyticsMPV3::SetAppVersion(System.String)
extern "C"  void GoogleAnalyticsMPV3_SetAppVersion_m3299786117 (GoogleAnalyticsMPV3_t3464676905 * __this, String_t* ___appVersion0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAnalyticsMPV3::SetLogLevelValue(GoogleAnalyticsV4/DebugMode)
extern "C"  void GoogleAnalyticsMPV3_SetLogLevelValue_m3402633589 (GoogleAnalyticsMPV3_t3464676905 * __this, int32_t ___logLevel0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAnalyticsMPV3::SetAnonymizeIP(System.Boolean)
extern "C"  void GoogleAnalyticsMPV3_SetAnonymizeIP_m2409195104 (GoogleAnalyticsMPV3_t3464676905 * __this, bool ___anonymizeIP0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAnalyticsMPV3::SetDryRun(System.Boolean)
extern "C"  void GoogleAnalyticsMPV3_SetDryRun_m3135333681 (GoogleAnalyticsMPV3_t3464676905 * __this, bool ___dryRun0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAnalyticsMPV3::SetOptOut(System.Boolean)
extern "C"  void GoogleAnalyticsMPV3_SetOptOut_m2276905394 (GoogleAnalyticsMPV3_t3464676905 * __this, bool ___optOut0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
