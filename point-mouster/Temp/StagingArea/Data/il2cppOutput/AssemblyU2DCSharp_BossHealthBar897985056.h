﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Image
struct Image_t2042527209;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BossHealthBar
struct  BossHealthBar_t897985056  : public MonoBehaviour_t1158329972
{
public:
	// System.Single BossHealthBar::fillAmount
	float ___fillAmount_2;
	// UnityEngine.UI.Image BossHealthBar::content
	Image_t2042527209 * ___content_3;

public:
	inline static int32_t get_offset_of_fillAmount_2() { return static_cast<int32_t>(offsetof(BossHealthBar_t897985056, ___fillAmount_2)); }
	inline float get_fillAmount_2() const { return ___fillAmount_2; }
	inline float* get_address_of_fillAmount_2() { return &___fillAmount_2; }
	inline void set_fillAmount_2(float value)
	{
		___fillAmount_2 = value;
	}

	inline static int32_t get_offset_of_content_3() { return static_cast<int32_t>(offsetof(BossHealthBar_t897985056, ___content_3)); }
	inline Image_t2042527209 * get_content_3() const { return ___content_3; }
	inline Image_t2042527209 ** get_address_of_content_3() { return &___content_3; }
	inline void set_content_3(Image_t2042527209 * value)
	{
		___content_3 = value;
		Il2CppCodeGenWriteBarrier(&___content_3, value);
	}
};

struct BossHealthBar_t897985056_StaticFields
{
public:
	// System.Single BossHealthBar::current
	float ___current_4;

public:
	inline static int32_t get_offset_of_current_4() { return static_cast<int32_t>(offsetof(BossHealthBar_t897985056_StaticFields, ___current_4)); }
	inline float get_current_4() const { return ___current_4; }
	inline float* get_address_of_current_4() { return &___current_4; }
	inline void set_current_4(float value)
	{
		___current_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
