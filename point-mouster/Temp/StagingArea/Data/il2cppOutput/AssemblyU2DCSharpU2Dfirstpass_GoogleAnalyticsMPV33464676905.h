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
// System.Collections.Generic.Dictionary`2<Field,System.Object>
struct Dictionary_2_t1349815550;

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharpU2Dfirstpass_GoogleAnalyticsV4_De1779684248.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GoogleAnalyticsMPV3
struct  GoogleAnalyticsMPV3_t3464676905  : public Il2CppObject
{
public:
	// System.String GoogleAnalyticsMPV3::trackingCode
	String_t* ___trackingCode_0;
	// System.String GoogleAnalyticsMPV3::bundleIdentifier
	String_t* ___bundleIdentifier_1;
	// System.String GoogleAnalyticsMPV3::appName
	String_t* ___appName_2;
	// System.String GoogleAnalyticsMPV3::appVersion
	String_t* ___appVersion_3;
	// GoogleAnalyticsV4/DebugMode GoogleAnalyticsMPV3::logLevel
	int32_t ___logLevel_4;
	// System.Boolean GoogleAnalyticsMPV3::anonymizeIP
	bool ___anonymizeIP_5;
	// System.Boolean GoogleAnalyticsMPV3::dryRun
	bool ___dryRun_6;
	// System.Boolean GoogleAnalyticsMPV3::optOut
	bool ___optOut_7;
	// System.Int32 GoogleAnalyticsMPV3::sessionTimeout
	int32_t ___sessionTimeout_8;
	// System.String GoogleAnalyticsMPV3::screenRes
	String_t* ___screenRes_9;
	// System.String GoogleAnalyticsMPV3::clientId
	String_t* ___clientId_10;
	// System.String GoogleAnalyticsMPV3::url
	String_t* ___url_11;
	// System.Single GoogleAnalyticsMPV3::timeStarted
	float ___timeStarted_12;
	// System.Collections.Generic.Dictionary`2<Field,System.Object> GoogleAnalyticsMPV3::trackerValues
	Dictionary_2_t1349815550 * ___trackerValues_13;
	// System.Boolean GoogleAnalyticsMPV3::startSessionOnNextHit
	bool ___startSessionOnNextHit_14;
	// System.Boolean GoogleAnalyticsMPV3::endSessionOnNextHit
	bool ___endSessionOnNextHit_15;
	// System.Boolean GoogleAnalyticsMPV3::trackingCodeSet
	bool ___trackingCodeSet_16;

public:
	inline static int32_t get_offset_of_trackingCode_0() { return static_cast<int32_t>(offsetof(GoogleAnalyticsMPV3_t3464676905, ___trackingCode_0)); }
	inline String_t* get_trackingCode_0() const { return ___trackingCode_0; }
	inline String_t** get_address_of_trackingCode_0() { return &___trackingCode_0; }
	inline void set_trackingCode_0(String_t* value)
	{
		___trackingCode_0 = value;
		Il2CppCodeGenWriteBarrier(&___trackingCode_0, value);
	}

	inline static int32_t get_offset_of_bundleIdentifier_1() { return static_cast<int32_t>(offsetof(GoogleAnalyticsMPV3_t3464676905, ___bundleIdentifier_1)); }
	inline String_t* get_bundleIdentifier_1() const { return ___bundleIdentifier_1; }
	inline String_t** get_address_of_bundleIdentifier_1() { return &___bundleIdentifier_1; }
	inline void set_bundleIdentifier_1(String_t* value)
	{
		___bundleIdentifier_1 = value;
		Il2CppCodeGenWriteBarrier(&___bundleIdentifier_1, value);
	}

	inline static int32_t get_offset_of_appName_2() { return static_cast<int32_t>(offsetof(GoogleAnalyticsMPV3_t3464676905, ___appName_2)); }
	inline String_t* get_appName_2() const { return ___appName_2; }
	inline String_t** get_address_of_appName_2() { return &___appName_2; }
	inline void set_appName_2(String_t* value)
	{
		___appName_2 = value;
		Il2CppCodeGenWriteBarrier(&___appName_2, value);
	}

	inline static int32_t get_offset_of_appVersion_3() { return static_cast<int32_t>(offsetof(GoogleAnalyticsMPV3_t3464676905, ___appVersion_3)); }
	inline String_t* get_appVersion_3() const { return ___appVersion_3; }
	inline String_t** get_address_of_appVersion_3() { return &___appVersion_3; }
	inline void set_appVersion_3(String_t* value)
	{
		___appVersion_3 = value;
		Il2CppCodeGenWriteBarrier(&___appVersion_3, value);
	}

	inline static int32_t get_offset_of_logLevel_4() { return static_cast<int32_t>(offsetof(GoogleAnalyticsMPV3_t3464676905, ___logLevel_4)); }
	inline int32_t get_logLevel_4() const { return ___logLevel_4; }
	inline int32_t* get_address_of_logLevel_4() { return &___logLevel_4; }
	inline void set_logLevel_4(int32_t value)
	{
		___logLevel_4 = value;
	}

	inline static int32_t get_offset_of_anonymizeIP_5() { return static_cast<int32_t>(offsetof(GoogleAnalyticsMPV3_t3464676905, ___anonymizeIP_5)); }
	inline bool get_anonymizeIP_5() const { return ___anonymizeIP_5; }
	inline bool* get_address_of_anonymizeIP_5() { return &___anonymizeIP_5; }
	inline void set_anonymizeIP_5(bool value)
	{
		___anonymizeIP_5 = value;
	}

	inline static int32_t get_offset_of_dryRun_6() { return static_cast<int32_t>(offsetof(GoogleAnalyticsMPV3_t3464676905, ___dryRun_6)); }
	inline bool get_dryRun_6() const { return ___dryRun_6; }
	inline bool* get_address_of_dryRun_6() { return &___dryRun_6; }
	inline void set_dryRun_6(bool value)
	{
		___dryRun_6 = value;
	}

	inline static int32_t get_offset_of_optOut_7() { return static_cast<int32_t>(offsetof(GoogleAnalyticsMPV3_t3464676905, ___optOut_7)); }
	inline bool get_optOut_7() const { return ___optOut_7; }
	inline bool* get_address_of_optOut_7() { return &___optOut_7; }
	inline void set_optOut_7(bool value)
	{
		___optOut_7 = value;
	}

	inline static int32_t get_offset_of_sessionTimeout_8() { return static_cast<int32_t>(offsetof(GoogleAnalyticsMPV3_t3464676905, ___sessionTimeout_8)); }
	inline int32_t get_sessionTimeout_8() const { return ___sessionTimeout_8; }
	inline int32_t* get_address_of_sessionTimeout_8() { return &___sessionTimeout_8; }
	inline void set_sessionTimeout_8(int32_t value)
	{
		___sessionTimeout_8 = value;
	}

	inline static int32_t get_offset_of_screenRes_9() { return static_cast<int32_t>(offsetof(GoogleAnalyticsMPV3_t3464676905, ___screenRes_9)); }
	inline String_t* get_screenRes_9() const { return ___screenRes_9; }
	inline String_t** get_address_of_screenRes_9() { return &___screenRes_9; }
	inline void set_screenRes_9(String_t* value)
	{
		___screenRes_9 = value;
		Il2CppCodeGenWriteBarrier(&___screenRes_9, value);
	}

	inline static int32_t get_offset_of_clientId_10() { return static_cast<int32_t>(offsetof(GoogleAnalyticsMPV3_t3464676905, ___clientId_10)); }
	inline String_t* get_clientId_10() const { return ___clientId_10; }
	inline String_t** get_address_of_clientId_10() { return &___clientId_10; }
	inline void set_clientId_10(String_t* value)
	{
		___clientId_10 = value;
		Il2CppCodeGenWriteBarrier(&___clientId_10, value);
	}

	inline static int32_t get_offset_of_url_11() { return static_cast<int32_t>(offsetof(GoogleAnalyticsMPV3_t3464676905, ___url_11)); }
	inline String_t* get_url_11() const { return ___url_11; }
	inline String_t** get_address_of_url_11() { return &___url_11; }
	inline void set_url_11(String_t* value)
	{
		___url_11 = value;
		Il2CppCodeGenWriteBarrier(&___url_11, value);
	}

	inline static int32_t get_offset_of_timeStarted_12() { return static_cast<int32_t>(offsetof(GoogleAnalyticsMPV3_t3464676905, ___timeStarted_12)); }
	inline float get_timeStarted_12() const { return ___timeStarted_12; }
	inline float* get_address_of_timeStarted_12() { return &___timeStarted_12; }
	inline void set_timeStarted_12(float value)
	{
		___timeStarted_12 = value;
	}

	inline static int32_t get_offset_of_trackerValues_13() { return static_cast<int32_t>(offsetof(GoogleAnalyticsMPV3_t3464676905, ___trackerValues_13)); }
	inline Dictionary_2_t1349815550 * get_trackerValues_13() const { return ___trackerValues_13; }
	inline Dictionary_2_t1349815550 ** get_address_of_trackerValues_13() { return &___trackerValues_13; }
	inline void set_trackerValues_13(Dictionary_2_t1349815550 * value)
	{
		___trackerValues_13 = value;
		Il2CppCodeGenWriteBarrier(&___trackerValues_13, value);
	}

	inline static int32_t get_offset_of_startSessionOnNextHit_14() { return static_cast<int32_t>(offsetof(GoogleAnalyticsMPV3_t3464676905, ___startSessionOnNextHit_14)); }
	inline bool get_startSessionOnNextHit_14() const { return ___startSessionOnNextHit_14; }
	inline bool* get_address_of_startSessionOnNextHit_14() { return &___startSessionOnNextHit_14; }
	inline void set_startSessionOnNextHit_14(bool value)
	{
		___startSessionOnNextHit_14 = value;
	}

	inline static int32_t get_offset_of_endSessionOnNextHit_15() { return static_cast<int32_t>(offsetof(GoogleAnalyticsMPV3_t3464676905, ___endSessionOnNextHit_15)); }
	inline bool get_endSessionOnNextHit_15() const { return ___endSessionOnNextHit_15; }
	inline bool* get_address_of_endSessionOnNextHit_15() { return &___endSessionOnNextHit_15; }
	inline void set_endSessionOnNextHit_15(bool value)
	{
		___endSessionOnNextHit_15 = value;
	}

	inline static int32_t get_offset_of_trackingCodeSet_16() { return static_cast<int32_t>(offsetof(GoogleAnalyticsMPV3_t3464676905, ___trackingCodeSet_16)); }
	inline bool get_trackingCodeSet_16() const { return ___trackingCodeSet_16; }
	inline bool* get_address_of_trackingCodeSet_16() { return &___trackingCodeSet_16; }
	inline void set_trackingCodeSet_16(bool value)
	{
		___trackingCodeSet_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
