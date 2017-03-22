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

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Field
struct  Field_t1707169132  : public Il2CppObject
{
public:
	// System.String Field::parameter
	String_t* ___parameter_0;

public:
	inline static int32_t get_offset_of_parameter_0() { return static_cast<int32_t>(offsetof(Field_t1707169132, ___parameter_0)); }
	inline String_t* get_parameter_0() const { return ___parameter_0; }
	inline String_t** get_address_of_parameter_0() { return &___parameter_0; }
	inline void set_parameter_0(String_t* value)
	{
		___parameter_0 = value;
		Il2CppCodeGenWriteBarrier(&___parameter_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
