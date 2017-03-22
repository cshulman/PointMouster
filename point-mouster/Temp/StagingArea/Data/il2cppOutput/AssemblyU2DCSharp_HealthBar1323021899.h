#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Image
struct Image_t2042527209;
// UnityEngine.UI.Text
struct Text_t356221433;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HealthBar
struct  HealthBar_t1323021899  : public MonoBehaviour_t1158329972
{
public:
	// System.Single HealthBar::fillAmount
	float ___fillAmount_2;
	// UnityEngine.UI.Image HealthBar::content
	Image_t2042527209 * ___content_3;
	// UnityEngine.UI.Text HealthBar::NameText
	Text_t356221433 * ___NameText_4;
	// System.Single HealthBar::current
	float ___current_5;

public:
	inline static int32_t get_offset_of_fillAmount_2() { return static_cast<int32_t>(offsetof(HealthBar_t1323021899, ___fillAmount_2)); }
	inline float get_fillAmount_2() const { return ___fillAmount_2; }
	inline float* get_address_of_fillAmount_2() { return &___fillAmount_2; }
	inline void set_fillAmount_2(float value)
	{
		___fillAmount_2 = value;
	}

	inline static int32_t get_offset_of_content_3() { return static_cast<int32_t>(offsetof(HealthBar_t1323021899, ___content_3)); }
	inline Image_t2042527209 * get_content_3() const { return ___content_3; }
	inline Image_t2042527209 ** get_address_of_content_3() { return &___content_3; }
	inline void set_content_3(Image_t2042527209 * value)
	{
		___content_3 = value;
		Il2CppCodeGenWriteBarrier(&___content_3, value);
	}

	inline static int32_t get_offset_of_NameText_4() { return static_cast<int32_t>(offsetof(HealthBar_t1323021899, ___NameText_4)); }
	inline Text_t356221433 * get_NameText_4() const { return ___NameText_4; }
	inline Text_t356221433 ** get_address_of_NameText_4() { return &___NameText_4; }
	inline void set_NameText_4(Text_t356221433 * value)
	{
		___NameText_4 = value;
		Il2CppCodeGenWriteBarrier(&___NameText_4, value);
	}

	inline static int32_t get_offset_of_current_5() { return static_cast<int32_t>(offsetof(HealthBar_t1323021899, ___current_5)); }
	inline float get_current_5() const { return ___current_5; }
	inline float* get_address_of_current_5() { return &___current_5; }
	inline void set_current_5(float value)
	{
		___current_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
