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

// TooltipAttribute
struct  TooltipAttribute_t2997764131  : public PropertyAttribute_t2606999759
{
public:
	// System.String TooltipAttribute::text
	String_t* ___text_0;

public:
	inline static int32_t get_offset_of_text_0() { return static_cast<int32_t>(offsetof(TooltipAttribute_t2997764131, ___text_0)); }
	inline String_t* get_text_0() const { return ___text_0; }
	inline String_t** get_address_of_text_0() { return &___text_0; }
	inline void set_text_0(String_t* value)
	{
		___text_0 = value;
		Il2CppCodeGenWriteBarrier(&___text_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
