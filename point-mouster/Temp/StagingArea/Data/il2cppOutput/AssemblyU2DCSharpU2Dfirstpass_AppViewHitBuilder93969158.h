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

#include "AssemblyU2DCSharpU2Dfirstpass_HitBuilder_1_gen607284418.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AppViewHitBuilder
struct  AppViewHitBuilder_t93969158  : public HitBuilder_1_t607284418
{
public:
	// System.String AppViewHitBuilder::screenName
	String_t* ___screenName_10;

public:
	inline static int32_t get_offset_of_screenName_10() { return static_cast<int32_t>(offsetof(AppViewHitBuilder_t93969158, ___screenName_10)); }
	inline String_t* get_screenName_10() const { return ___screenName_10; }
	inline String_t** get_address_of_screenName_10() { return &___screenName_10; }
	inline void set_screenName_10(String_t* value)
	{
		___screenName_10 = value;
		Il2CppCodeGenWriteBarrier(&___screenName_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
