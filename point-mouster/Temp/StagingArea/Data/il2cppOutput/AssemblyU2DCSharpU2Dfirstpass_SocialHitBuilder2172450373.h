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

#include "AssemblyU2DCSharpU2Dfirstpass_HitBuilder_1_gen2685765633.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SocialHitBuilder
struct  SocialHitBuilder_t2172450373  : public HitBuilder_1_t2685765633
{
public:
	// System.String SocialHitBuilder::socialNetwork
	String_t* ___socialNetwork_10;
	// System.String SocialHitBuilder::socialAction
	String_t* ___socialAction_11;
	// System.String SocialHitBuilder::socialTarget
	String_t* ___socialTarget_12;

public:
	inline static int32_t get_offset_of_socialNetwork_10() { return static_cast<int32_t>(offsetof(SocialHitBuilder_t2172450373, ___socialNetwork_10)); }
	inline String_t* get_socialNetwork_10() const { return ___socialNetwork_10; }
	inline String_t** get_address_of_socialNetwork_10() { return &___socialNetwork_10; }
	inline void set_socialNetwork_10(String_t* value)
	{
		___socialNetwork_10 = value;
		Il2CppCodeGenWriteBarrier(&___socialNetwork_10, value);
	}

	inline static int32_t get_offset_of_socialAction_11() { return static_cast<int32_t>(offsetof(SocialHitBuilder_t2172450373, ___socialAction_11)); }
	inline String_t* get_socialAction_11() const { return ___socialAction_11; }
	inline String_t** get_address_of_socialAction_11() { return &___socialAction_11; }
	inline void set_socialAction_11(String_t* value)
	{
		___socialAction_11 = value;
		Il2CppCodeGenWriteBarrier(&___socialAction_11, value);
	}

	inline static int32_t get_offset_of_socialTarget_12() { return static_cast<int32_t>(offsetof(SocialHitBuilder_t2172450373, ___socialTarget_12)); }
	inline String_t* get_socialTarget_12() const { return ___socialTarget_12; }
	inline String_t** get_address_of_socialTarget_12() { return &___socialTarget_12; }
	inline void set_socialTarget_12(String_t* value)
	{
		___socialTarget_12 = value;
		Il2CppCodeGenWriteBarrier(&___socialTarget_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
