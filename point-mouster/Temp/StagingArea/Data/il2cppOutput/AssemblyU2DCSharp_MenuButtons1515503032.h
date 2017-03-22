#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GoogleAnalyticsV4
struct GoogleAnalyticsV4_t198817271;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MenuButtons
struct  MenuButtons_t1515503032  : public MonoBehaviour_t1158329972
{
public:
	// GoogleAnalyticsV4 MenuButtons::googleAnalytics
	GoogleAnalyticsV4_t198817271 * ___googleAnalytics_3;

public:
	inline static int32_t get_offset_of_googleAnalytics_3() { return static_cast<int32_t>(offsetof(MenuButtons_t1515503032, ___googleAnalytics_3)); }
	inline GoogleAnalyticsV4_t198817271 * get_googleAnalytics_3() const { return ___googleAnalytics_3; }
	inline GoogleAnalyticsV4_t198817271 ** get_address_of_googleAnalytics_3() { return &___googleAnalytics_3; }
	inline void set_googleAnalytics_3(GoogleAnalyticsV4_t198817271 * value)
	{
		___googleAnalytics_3 = value;
		Il2CppCodeGenWriteBarrier(&___googleAnalytics_3, value);
	}
};

struct MenuButtons_t1515503032_StaticFields
{
public:
	// System.Int32 MenuButtons::currLevel
	int32_t ___currLevel_2;

public:
	inline static int32_t get_offset_of_currLevel_2() { return static_cast<int32_t>(offsetof(MenuButtons_t1515503032_StaticFields, ___currLevel_2)); }
	inline int32_t get_currLevel_2() const { return ___currLevel_2; }
	inline int32_t* get_address_of_currLevel_2() { return &___currLevel_2; }
	inline void set_currLevel_2(int32_t value)
	{
		___currLevel_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
