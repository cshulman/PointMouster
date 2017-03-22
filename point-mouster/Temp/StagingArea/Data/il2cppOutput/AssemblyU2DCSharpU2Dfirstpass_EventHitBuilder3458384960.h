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

#include "AssemblyU2DCSharpU2Dfirstpass_HitBuilder_1_gen3971700220.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EventHitBuilder
struct  EventHitBuilder_t3458384960  : public HitBuilder_1_t3971700220
{
public:
	// System.String EventHitBuilder::eventCategory
	String_t* ___eventCategory_10;
	// System.String EventHitBuilder::eventAction
	String_t* ___eventAction_11;
	// System.String EventHitBuilder::eventLabel
	String_t* ___eventLabel_12;
	// System.Int64 EventHitBuilder::eventValue
	int64_t ___eventValue_13;

public:
	inline static int32_t get_offset_of_eventCategory_10() { return static_cast<int32_t>(offsetof(EventHitBuilder_t3458384960, ___eventCategory_10)); }
	inline String_t* get_eventCategory_10() const { return ___eventCategory_10; }
	inline String_t** get_address_of_eventCategory_10() { return &___eventCategory_10; }
	inline void set_eventCategory_10(String_t* value)
	{
		___eventCategory_10 = value;
		Il2CppCodeGenWriteBarrier(&___eventCategory_10, value);
	}

	inline static int32_t get_offset_of_eventAction_11() { return static_cast<int32_t>(offsetof(EventHitBuilder_t3458384960, ___eventAction_11)); }
	inline String_t* get_eventAction_11() const { return ___eventAction_11; }
	inline String_t** get_address_of_eventAction_11() { return &___eventAction_11; }
	inline void set_eventAction_11(String_t* value)
	{
		___eventAction_11 = value;
		Il2CppCodeGenWriteBarrier(&___eventAction_11, value);
	}

	inline static int32_t get_offset_of_eventLabel_12() { return static_cast<int32_t>(offsetof(EventHitBuilder_t3458384960, ___eventLabel_12)); }
	inline String_t* get_eventLabel_12() const { return ___eventLabel_12; }
	inline String_t** get_address_of_eventLabel_12() { return &___eventLabel_12; }
	inline void set_eventLabel_12(String_t* value)
	{
		___eventLabel_12 = value;
		Il2CppCodeGenWriteBarrier(&___eventLabel_12, value);
	}

	inline static int32_t get_offset_of_eventValue_13() { return static_cast<int32_t>(offsetof(EventHitBuilder_t3458384960, ___eventValue_13)); }
	inline int64_t get_eventValue_13() const { return ___eventValue_13; }
	inline int64_t* get_address_of_eventValue_13() { return &___eventValue_13; }
	inline void set_eventValue_13(int64_t value)
	{
		___eventValue_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
