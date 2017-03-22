#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// GoogleAnalyticsV4
struct GoogleAnalyticsV4_t198817271;
// GoogleAnalyticsMPV3
struct GoogleAnalyticsMPV3_t3464676905;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharpU2Dfirstpass_GoogleAnalyticsV4_De1779684248.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GoogleAnalyticsV4
struct  GoogleAnalyticsV4_t198817271  : public MonoBehaviour_t1158329972
{
public:
	// System.String GoogleAnalyticsV4::uncaughtExceptionStackTrace
	String_t* ___uncaughtExceptionStackTrace_2;
	// System.Boolean GoogleAnalyticsV4::initialized
	bool ___initialized_3;
	// System.String GoogleAnalyticsV4::androidTrackingCode
	String_t* ___androidTrackingCode_4;
	// System.String GoogleAnalyticsV4::IOSTrackingCode
	String_t* ___IOSTrackingCode_5;
	// System.String GoogleAnalyticsV4::otherTrackingCode
	String_t* ___otherTrackingCode_6;
	// System.String GoogleAnalyticsV4::productName
	String_t* ___productName_7;
	// System.String GoogleAnalyticsV4::bundleIdentifier
	String_t* ___bundleIdentifier_8;
	// System.String GoogleAnalyticsV4::bundleVersion
	String_t* ___bundleVersion_9;
	// System.Int32 GoogleAnalyticsV4::dispatchPeriod
	int32_t ___dispatchPeriod_10;
	// System.Int32 GoogleAnalyticsV4::sampleFrequency
	int32_t ___sampleFrequency_11;
	// GoogleAnalyticsV4/DebugMode GoogleAnalyticsV4::logLevel
	int32_t ___logLevel_12;
	// System.Boolean GoogleAnalyticsV4::anonymizeIP
	bool ___anonymizeIP_13;
	// System.Boolean GoogleAnalyticsV4::UncaughtExceptionReporting
	bool ___UncaughtExceptionReporting_14;
	// System.Boolean GoogleAnalyticsV4::sendLaunchEvent
	bool ___sendLaunchEvent_15;
	// System.Boolean GoogleAnalyticsV4::dryRun
	bool ___dryRun_16;
	// System.Int32 GoogleAnalyticsV4::sessionTimeout
	int32_t ___sessionTimeout_17;
	// System.Boolean GoogleAnalyticsV4::enableAdId
	bool ___enableAdId_18;
	// GoogleAnalyticsMPV3 GoogleAnalyticsV4::mpTracker
	GoogleAnalyticsMPV3_t3464676905 * ___mpTracker_31;

public:
	inline static int32_t get_offset_of_uncaughtExceptionStackTrace_2() { return static_cast<int32_t>(offsetof(GoogleAnalyticsV4_t198817271, ___uncaughtExceptionStackTrace_2)); }
	inline String_t* get_uncaughtExceptionStackTrace_2() const { return ___uncaughtExceptionStackTrace_2; }
	inline String_t** get_address_of_uncaughtExceptionStackTrace_2() { return &___uncaughtExceptionStackTrace_2; }
	inline void set_uncaughtExceptionStackTrace_2(String_t* value)
	{
		___uncaughtExceptionStackTrace_2 = value;
		Il2CppCodeGenWriteBarrier(&___uncaughtExceptionStackTrace_2, value);
	}

	inline static int32_t get_offset_of_initialized_3() { return static_cast<int32_t>(offsetof(GoogleAnalyticsV4_t198817271, ___initialized_3)); }
	inline bool get_initialized_3() const { return ___initialized_3; }
	inline bool* get_address_of_initialized_3() { return &___initialized_3; }
	inline void set_initialized_3(bool value)
	{
		___initialized_3 = value;
	}

	inline static int32_t get_offset_of_androidTrackingCode_4() { return static_cast<int32_t>(offsetof(GoogleAnalyticsV4_t198817271, ___androidTrackingCode_4)); }
	inline String_t* get_androidTrackingCode_4() const { return ___androidTrackingCode_4; }
	inline String_t** get_address_of_androidTrackingCode_4() { return &___androidTrackingCode_4; }
	inline void set_androidTrackingCode_4(String_t* value)
	{
		___androidTrackingCode_4 = value;
		Il2CppCodeGenWriteBarrier(&___androidTrackingCode_4, value);
	}

	inline static int32_t get_offset_of_IOSTrackingCode_5() { return static_cast<int32_t>(offsetof(GoogleAnalyticsV4_t198817271, ___IOSTrackingCode_5)); }
	inline String_t* get_IOSTrackingCode_5() const { return ___IOSTrackingCode_5; }
	inline String_t** get_address_of_IOSTrackingCode_5() { return &___IOSTrackingCode_5; }
	inline void set_IOSTrackingCode_5(String_t* value)
	{
		___IOSTrackingCode_5 = value;
		Il2CppCodeGenWriteBarrier(&___IOSTrackingCode_5, value);
	}

	inline static int32_t get_offset_of_otherTrackingCode_6() { return static_cast<int32_t>(offsetof(GoogleAnalyticsV4_t198817271, ___otherTrackingCode_6)); }
	inline String_t* get_otherTrackingCode_6() const { return ___otherTrackingCode_6; }
	inline String_t** get_address_of_otherTrackingCode_6() { return &___otherTrackingCode_6; }
	inline void set_otherTrackingCode_6(String_t* value)
	{
		___otherTrackingCode_6 = value;
		Il2CppCodeGenWriteBarrier(&___otherTrackingCode_6, value);
	}

	inline static int32_t get_offset_of_productName_7() { return static_cast<int32_t>(offsetof(GoogleAnalyticsV4_t198817271, ___productName_7)); }
	inline String_t* get_productName_7() const { return ___productName_7; }
	inline String_t** get_address_of_productName_7() { return &___productName_7; }
	inline void set_productName_7(String_t* value)
	{
		___productName_7 = value;
		Il2CppCodeGenWriteBarrier(&___productName_7, value);
	}

	inline static int32_t get_offset_of_bundleIdentifier_8() { return static_cast<int32_t>(offsetof(GoogleAnalyticsV4_t198817271, ___bundleIdentifier_8)); }
	inline String_t* get_bundleIdentifier_8() const { return ___bundleIdentifier_8; }
	inline String_t** get_address_of_bundleIdentifier_8() { return &___bundleIdentifier_8; }
	inline void set_bundleIdentifier_8(String_t* value)
	{
		___bundleIdentifier_8 = value;
		Il2CppCodeGenWriteBarrier(&___bundleIdentifier_8, value);
	}

	inline static int32_t get_offset_of_bundleVersion_9() { return static_cast<int32_t>(offsetof(GoogleAnalyticsV4_t198817271, ___bundleVersion_9)); }
	inline String_t* get_bundleVersion_9() const { return ___bundleVersion_9; }
	inline String_t** get_address_of_bundleVersion_9() { return &___bundleVersion_9; }
	inline void set_bundleVersion_9(String_t* value)
	{
		___bundleVersion_9 = value;
		Il2CppCodeGenWriteBarrier(&___bundleVersion_9, value);
	}

	inline static int32_t get_offset_of_dispatchPeriod_10() { return static_cast<int32_t>(offsetof(GoogleAnalyticsV4_t198817271, ___dispatchPeriod_10)); }
	inline int32_t get_dispatchPeriod_10() const { return ___dispatchPeriod_10; }
	inline int32_t* get_address_of_dispatchPeriod_10() { return &___dispatchPeriod_10; }
	inline void set_dispatchPeriod_10(int32_t value)
	{
		___dispatchPeriod_10 = value;
	}

	inline static int32_t get_offset_of_sampleFrequency_11() { return static_cast<int32_t>(offsetof(GoogleAnalyticsV4_t198817271, ___sampleFrequency_11)); }
	inline int32_t get_sampleFrequency_11() const { return ___sampleFrequency_11; }
	inline int32_t* get_address_of_sampleFrequency_11() { return &___sampleFrequency_11; }
	inline void set_sampleFrequency_11(int32_t value)
	{
		___sampleFrequency_11 = value;
	}

	inline static int32_t get_offset_of_logLevel_12() { return static_cast<int32_t>(offsetof(GoogleAnalyticsV4_t198817271, ___logLevel_12)); }
	inline int32_t get_logLevel_12() const { return ___logLevel_12; }
	inline int32_t* get_address_of_logLevel_12() { return &___logLevel_12; }
	inline void set_logLevel_12(int32_t value)
	{
		___logLevel_12 = value;
	}

	inline static int32_t get_offset_of_anonymizeIP_13() { return static_cast<int32_t>(offsetof(GoogleAnalyticsV4_t198817271, ___anonymizeIP_13)); }
	inline bool get_anonymizeIP_13() const { return ___anonymizeIP_13; }
	inline bool* get_address_of_anonymizeIP_13() { return &___anonymizeIP_13; }
	inline void set_anonymizeIP_13(bool value)
	{
		___anonymizeIP_13 = value;
	}

	inline static int32_t get_offset_of_UncaughtExceptionReporting_14() { return static_cast<int32_t>(offsetof(GoogleAnalyticsV4_t198817271, ___UncaughtExceptionReporting_14)); }
	inline bool get_UncaughtExceptionReporting_14() const { return ___UncaughtExceptionReporting_14; }
	inline bool* get_address_of_UncaughtExceptionReporting_14() { return &___UncaughtExceptionReporting_14; }
	inline void set_UncaughtExceptionReporting_14(bool value)
	{
		___UncaughtExceptionReporting_14 = value;
	}

	inline static int32_t get_offset_of_sendLaunchEvent_15() { return static_cast<int32_t>(offsetof(GoogleAnalyticsV4_t198817271, ___sendLaunchEvent_15)); }
	inline bool get_sendLaunchEvent_15() const { return ___sendLaunchEvent_15; }
	inline bool* get_address_of_sendLaunchEvent_15() { return &___sendLaunchEvent_15; }
	inline void set_sendLaunchEvent_15(bool value)
	{
		___sendLaunchEvent_15 = value;
	}

	inline static int32_t get_offset_of_dryRun_16() { return static_cast<int32_t>(offsetof(GoogleAnalyticsV4_t198817271, ___dryRun_16)); }
	inline bool get_dryRun_16() const { return ___dryRun_16; }
	inline bool* get_address_of_dryRun_16() { return &___dryRun_16; }
	inline void set_dryRun_16(bool value)
	{
		___dryRun_16 = value;
	}

	inline static int32_t get_offset_of_sessionTimeout_17() { return static_cast<int32_t>(offsetof(GoogleAnalyticsV4_t198817271, ___sessionTimeout_17)); }
	inline int32_t get_sessionTimeout_17() const { return ___sessionTimeout_17; }
	inline int32_t* get_address_of_sessionTimeout_17() { return &___sessionTimeout_17; }
	inline void set_sessionTimeout_17(int32_t value)
	{
		___sessionTimeout_17 = value;
	}

	inline static int32_t get_offset_of_enableAdId_18() { return static_cast<int32_t>(offsetof(GoogleAnalyticsV4_t198817271, ___enableAdId_18)); }
	inline bool get_enableAdId_18() const { return ___enableAdId_18; }
	inline bool* get_address_of_enableAdId_18() { return &___enableAdId_18; }
	inline void set_enableAdId_18(bool value)
	{
		___enableAdId_18 = value;
	}

	inline static int32_t get_offset_of_mpTracker_31() { return static_cast<int32_t>(offsetof(GoogleAnalyticsV4_t198817271, ___mpTracker_31)); }
	inline GoogleAnalyticsMPV3_t3464676905 * get_mpTracker_31() const { return ___mpTracker_31; }
	inline GoogleAnalyticsMPV3_t3464676905 ** get_address_of_mpTracker_31() { return &___mpTracker_31; }
	inline void set_mpTracker_31(GoogleAnalyticsMPV3_t3464676905 * value)
	{
		___mpTracker_31 = value;
		Il2CppCodeGenWriteBarrier(&___mpTracker_31, value);
	}
};

struct GoogleAnalyticsV4_t198817271_StaticFields
{
public:
	// GoogleAnalyticsV4 GoogleAnalyticsV4::instance
	GoogleAnalyticsV4_t198817271 * ___instance_19;
	// System.String GoogleAnalyticsV4::currencySymbol
	String_t* ___currencySymbol_20;
	// System.String GoogleAnalyticsV4::EVENT_HIT
	String_t* ___EVENT_HIT_21;
	// System.String GoogleAnalyticsV4::APP_VIEW
	String_t* ___APP_VIEW_22;
	// System.String GoogleAnalyticsV4::SET
	String_t* ___SET_23;
	// System.String GoogleAnalyticsV4::SET_ALL
	String_t* ___SET_ALL_24;
	// System.String GoogleAnalyticsV4::SEND
	String_t* ___SEND_25;
	// System.String GoogleAnalyticsV4::ITEM_HIT
	String_t* ___ITEM_HIT_26;
	// System.String GoogleAnalyticsV4::TRANSACTION_HIT
	String_t* ___TRANSACTION_HIT_27;
	// System.String GoogleAnalyticsV4::SOCIAL_HIT
	String_t* ___SOCIAL_HIT_28;
	// System.String GoogleAnalyticsV4::TIMING_HIT
	String_t* ___TIMING_HIT_29;
	// System.String GoogleAnalyticsV4::EXCEPTION_HIT
	String_t* ___EXCEPTION_HIT_30;

public:
	inline static int32_t get_offset_of_instance_19() { return static_cast<int32_t>(offsetof(GoogleAnalyticsV4_t198817271_StaticFields, ___instance_19)); }
	inline GoogleAnalyticsV4_t198817271 * get_instance_19() const { return ___instance_19; }
	inline GoogleAnalyticsV4_t198817271 ** get_address_of_instance_19() { return &___instance_19; }
	inline void set_instance_19(GoogleAnalyticsV4_t198817271 * value)
	{
		___instance_19 = value;
		Il2CppCodeGenWriteBarrier(&___instance_19, value);
	}

	inline static int32_t get_offset_of_currencySymbol_20() { return static_cast<int32_t>(offsetof(GoogleAnalyticsV4_t198817271_StaticFields, ___currencySymbol_20)); }
	inline String_t* get_currencySymbol_20() const { return ___currencySymbol_20; }
	inline String_t** get_address_of_currencySymbol_20() { return &___currencySymbol_20; }
	inline void set_currencySymbol_20(String_t* value)
	{
		___currencySymbol_20 = value;
		Il2CppCodeGenWriteBarrier(&___currencySymbol_20, value);
	}

	inline static int32_t get_offset_of_EVENT_HIT_21() { return static_cast<int32_t>(offsetof(GoogleAnalyticsV4_t198817271_StaticFields, ___EVENT_HIT_21)); }
	inline String_t* get_EVENT_HIT_21() const { return ___EVENT_HIT_21; }
	inline String_t** get_address_of_EVENT_HIT_21() { return &___EVENT_HIT_21; }
	inline void set_EVENT_HIT_21(String_t* value)
	{
		___EVENT_HIT_21 = value;
		Il2CppCodeGenWriteBarrier(&___EVENT_HIT_21, value);
	}

	inline static int32_t get_offset_of_APP_VIEW_22() { return static_cast<int32_t>(offsetof(GoogleAnalyticsV4_t198817271_StaticFields, ___APP_VIEW_22)); }
	inline String_t* get_APP_VIEW_22() const { return ___APP_VIEW_22; }
	inline String_t** get_address_of_APP_VIEW_22() { return &___APP_VIEW_22; }
	inline void set_APP_VIEW_22(String_t* value)
	{
		___APP_VIEW_22 = value;
		Il2CppCodeGenWriteBarrier(&___APP_VIEW_22, value);
	}

	inline static int32_t get_offset_of_SET_23() { return static_cast<int32_t>(offsetof(GoogleAnalyticsV4_t198817271_StaticFields, ___SET_23)); }
	inline String_t* get_SET_23() const { return ___SET_23; }
	inline String_t** get_address_of_SET_23() { return &___SET_23; }
	inline void set_SET_23(String_t* value)
	{
		___SET_23 = value;
		Il2CppCodeGenWriteBarrier(&___SET_23, value);
	}

	inline static int32_t get_offset_of_SET_ALL_24() { return static_cast<int32_t>(offsetof(GoogleAnalyticsV4_t198817271_StaticFields, ___SET_ALL_24)); }
	inline String_t* get_SET_ALL_24() const { return ___SET_ALL_24; }
	inline String_t** get_address_of_SET_ALL_24() { return &___SET_ALL_24; }
	inline void set_SET_ALL_24(String_t* value)
	{
		___SET_ALL_24 = value;
		Il2CppCodeGenWriteBarrier(&___SET_ALL_24, value);
	}

	inline static int32_t get_offset_of_SEND_25() { return static_cast<int32_t>(offsetof(GoogleAnalyticsV4_t198817271_StaticFields, ___SEND_25)); }
	inline String_t* get_SEND_25() const { return ___SEND_25; }
	inline String_t** get_address_of_SEND_25() { return &___SEND_25; }
	inline void set_SEND_25(String_t* value)
	{
		___SEND_25 = value;
		Il2CppCodeGenWriteBarrier(&___SEND_25, value);
	}

	inline static int32_t get_offset_of_ITEM_HIT_26() { return static_cast<int32_t>(offsetof(GoogleAnalyticsV4_t198817271_StaticFields, ___ITEM_HIT_26)); }
	inline String_t* get_ITEM_HIT_26() const { return ___ITEM_HIT_26; }
	inline String_t** get_address_of_ITEM_HIT_26() { return &___ITEM_HIT_26; }
	inline void set_ITEM_HIT_26(String_t* value)
	{
		___ITEM_HIT_26 = value;
		Il2CppCodeGenWriteBarrier(&___ITEM_HIT_26, value);
	}

	inline static int32_t get_offset_of_TRANSACTION_HIT_27() { return static_cast<int32_t>(offsetof(GoogleAnalyticsV4_t198817271_StaticFields, ___TRANSACTION_HIT_27)); }
	inline String_t* get_TRANSACTION_HIT_27() const { return ___TRANSACTION_HIT_27; }
	inline String_t** get_address_of_TRANSACTION_HIT_27() { return &___TRANSACTION_HIT_27; }
	inline void set_TRANSACTION_HIT_27(String_t* value)
	{
		___TRANSACTION_HIT_27 = value;
		Il2CppCodeGenWriteBarrier(&___TRANSACTION_HIT_27, value);
	}

	inline static int32_t get_offset_of_SOCIAL_HIT_28() { return static_cast<int32_t>(offsetof(GoogleAnalyticsV4_t198817271_StaticFields, ___SOCIAL_HIT_28)); }
	inline String_t* get_SOCIAL_HIT_28() const { return ___SOCIAL_HIT_28; }
	inline String_t** get_address_of_SOCIAL_HIT_28() { return &___SOCIAL_HIT_28; }
	inline void set_SOCIAL_HIT_28(String_t* value)
	{
		___SOCIAL_HIT_28 = value;
		Il2CppCodeGenWriteBarrier(&___SOCIAL_HIT_28, value);
	}

	inline static int32_t get_offset_of_TIMING_HIT_29() { return static_cast<int32_t>(offsetof(GoogleAnalyticsV4_t198817271_StaticFields, ___TIMING_HIT_29)); }
	inline String_t* get_TIMING_HIT_29() const { return ___TIMING_HIT_29; }
	inline String_t** get_address_of_TIMING_HIT_29() { return &___TIMING_HIT_29; }
	inline void set_TIMING_HIT_29(String_t* value)
	{
		___TIMING_HIT_29 = value;
		Il2CppCodeGenWriteBarrier(&___TIMING_HIT_29, value);
	}

	inline static int32_t get_offset_of_EXCEPTION_HIT_30() { return static_cast<int32_t>(offsetof(GoogleAnalyticsV4_t198817271_StaticFields, ___EXCEPTION_HIT_30)); }
	inline String_t* get_EXCEPTION_HIT_30() const { return ___EXCEPTION_HIT_30; }
	inline String_t** get_address_of_EXCEPTION_HIT_30() { return &___EXCEPTION_HIT_30; }
	inline void set_EXCEPTION_HIT_30(String_t* value)
	{
		___EXCEPTION_HIT_30 = value;
		Il2CppCodeGenWriteBarrier(&___EXCEPTION_HIT_30, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
