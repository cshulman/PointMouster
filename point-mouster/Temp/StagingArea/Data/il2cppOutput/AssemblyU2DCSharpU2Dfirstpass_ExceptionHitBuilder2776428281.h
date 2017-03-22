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

#include "AssemblyU2DCSharpU2Dfirstpass_HitBuilder_1_gen3289743541.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExceptionHitBuilder
struct  ExceptionHitBuilder_t2776428281  : public HitBuilder_1_t3289743541
{
public:
	// System.String ExceptionHitBuilder::exceptionDescription
	String_t* ___exceptionDescription_10;
	// System.Boolean ExceptionHitBuilder::fatal
	bool ___fatal_11;

public:
	inline static int32_t get_offset_of_exceptionDescription_10() { return static_cast<int32_t>(offsetof(ExceptionHitBuilder_t2776428281, ___exceptionDescription_10)); }
	inline String_t* get_exceptionDescription_10() const { return ___exceptionDescription_10; }
	inline String_t** get_address_of_exceptionDescription_10() { return &___exceptionDescription_10; }
	inline void set_exceptionDescription_10(String_t* value)
	{
		___exceptionDescription_10 = value;
		Il2CppCodeGenWriteBarrier(&___exceptionDescription_10, value);
	}

	inline static int32_t get_offset_of_fatal_11() { return static_cast<int32_t>(offsetof(ExceptionHitBuilder_t2776428281, ___fatal_11)); }
	inline bool get_fatal_11() const { return ___fatal_11; }
	inline bool* get_address_of_fatal_11() { return &___fatal_11; }
	inline void set_fatal_11(bool value)
	{
		___fatal_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
