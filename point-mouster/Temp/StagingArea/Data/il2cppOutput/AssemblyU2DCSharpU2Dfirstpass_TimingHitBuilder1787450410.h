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

#include "AssemblyU2DCSharpU2Dfirstpass_HitBuilder_1_gen2300765670.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TimingHitBuilder
struct  TimingHitBuilder_t1787450410  : public HitBuilder_1_t2300765670
{
public:
	// System.String TimingHitBuilder::timingCategory
	String_t* ___timingCategory_10;
	// System.Int64 TimingHitBuilder::timingInterval
	int64_t ___timingInterval_11;
	// System.String TimingHitBuilder::timingName
	String_t* ___timingName_12;
	// System.String TimingHitBuilder::timingLabel
	String_t* ___timingLabel_13;

public:
	inline static int32_t get_offset_of_timingCategory_10() { return static_cast<int32_t>(offsetof(TimingHitBuilder_t1787450410, ___timingCategory_10)); }
	inline String_t* get_timingCategory_10() const { return ___timingCategory_10; }
	inline String_t** get_address_of_timingCategory_10() { return &___timingCategory_10; }
	inline void set_timingCategory_10(String_t* value)
	{
		___timingCategory_10 = value;
		Il2CppCodeGenWriteBarrier(&___timingCategory_10, value);
	}

	inline static int32_t get_offset_of_timingInterval_11() { return static_cast<int32_t>(offsetof(TimingHitBuilder_t1787450410, ___timingInterval_11)); }
	inline int64_t get_timingInterval_11() const { return ___timingInterval_11; }
	inline int64_t* get_address_of_timingInterval_11() { return &___timingInterval_11; }
	inline void set_timingInterval_11(int64_t value)
	{
		___timingInterval_11 = value;
	}

	inline static int32_t get_offset_of_timingName_12() { return static_cast<int32_t>(offsetof(TimingHitBuilder_t1787450410, ___timingName_12)); }
	inline String_t* get_timingName_12() const { return ___timingName_12; }
	inline String_t** get_address_of_timingName_12() { return &___timingName_12; }
	inline void set_timingName_12(String_t* value)
	{
		___timingName_12 = value;
		Il2CppCodeGenWriteBarrier(&___timingName_12, value);
	}

	inline static int32_t get_offset_of_timingLabel_13() { return static_cast<int32_t>(offsetof(TimingHitBuilder_t1787450410, ___timingLabel_13)); }
	inline String_t* get_timingLabel_13() const { return ___timingLabel_13; }
	inline String_t** get_address_of_timingLabel_13() { return &___timingLabel_13; }
	inline void set_timingLabel_13(String_t* value)
	{
		___timingLabel_13 = value;
		Il2CppCodeGenWriteBarrier(&___timingLabel_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
