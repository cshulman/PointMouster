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

#include "UnityEngine_UnityEngine_PropertyAttribute2606999759.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RangedTooltipAttribute
struct  RangedTooltipAttribute_t1630163362  : public PropertyAttribute_t2606999759
{
public:
	// System.Single RangedTooltipAttribute::min
	float ___min_0;
	// System.Single RangedTooltipAttribute::max
	float ___max_1;
	// System.String RangedTooltipAttribute::text
	String_t* ___text_2;

public:
	inline static int32_t get_offset_of_min_0() { return static_cast<int32_t>(offsetof(RangedTooltipAttribute_t1630163362, ___min_0)); }
	inline float get_min_0() const { return ___min_0; }
	inline float* get_address_of_min_0() { return &___min_0; }
	inline void set_min_0(float value)
	{
		___min_0 = value;
	}

	inline static int32_t get_offset_of_max_1() { return static_cast<int32_t>(offsetof(RangedTooltipAttribute_t1630163362, ___max_1)); }
	inline float get_max_1() const { return ___max_1; }
	inline float* get_address_of_max_1() { return &___max_1; }
	inline void set_max_1(float value)
	{
		___max_1 = value;
	}

	inline static int32_t get_offset_of_text_2() { return static_cast<int32_t>(offsetof(RangedTooltipAttribute_t1630163362, ___text_2)); }
	inline String_t* get_text_2() const { return ___text_2; }
	inline String_t** get_address_of_text_2() { return &___text_2; }
	inline void set_text_2(String_t* value)
	{
		___text_2 = value;
		Il2CppCodeGenWriteBarrier(&___text_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
