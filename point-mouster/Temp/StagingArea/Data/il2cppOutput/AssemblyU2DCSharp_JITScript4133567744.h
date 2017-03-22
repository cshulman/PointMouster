#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Text
struct Text_t356221433;
// GoogleAnalyticsV4
struct GoogleAnalyticsV4_t198817271;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// JITScript
struct  JITScript_t4133567744  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Text JITScript::wordDisplay
	Text_t356221433 * ___wordDisplay_2;
	// GoogleAnalyticsV4 JITScript::googleAnalytics
	GoogleAnalyticsV4_t198817271 * ___googleAnalytics_3;

public:
	inline static int32_t get_offset_of_wordDisplay_2() { return static_cast<int32_t>(offsetof(JITScript_t4133567744, ___wordDisplay_2)); }
	inline Text_t356221433 * get_wordDisplay_2() const { return ___wordDisplay_2; }
	inline Text_t356221433 ** get_address_of_wordDisplay_2() { return &___wordDisplay_2; }
	inline void set_wordDisplay_2(Text_t356221433 * value)
	{
		___wordDisplay_2 = value;
		Il2CppCodeGenWriteBarrier(&___wordDisplay_2, value);
	}

	inline static int32_t get_offset_of_googleAnalytics_3() { return static_cast<int32_t>(offsetof(JITScript_t4133567744, ___googleAnalytics_3)); }
	inline GoogleAnalyticsV4_t198817271 * get_googleAnalytics_3() const { return ___googleAnalytics_3; }
	inline GoogleAnalyticsV4_t198817271 ** get_address_of_googleAnalytics_3() { return &___googleAnalytics_3; }
	inline void set_googleAnalytics_3(GoogleAnalyticsV4_t198817271 * value)
	{
		___googleAnalytics_3 = value;
		Il2CppCodeGenWriteBarrier(&___googleAnalytics_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
