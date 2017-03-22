#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Version
struct Version_t3571588476;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Version
struct  Version_t3571588476  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 Version::version
	int32_t ___version_3;

public:
	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Version_t3571588476, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}
};

struct Version_t3571588476_StaticFields
{
public:
	// Version Version::Instance
	Version_t3571588476 * ___Instance_2;

public:
	inline static int32_t get_offset_of_Instance_2() { return static_cast<int32_t>(offsetof(Version_t3571588476_StaticFields, ___Instance_2)); }
	inline Version_t3571588476 * get_Instance_2() const { return ___Instance_2; }
	inline Version_t3571588476 ** get_address_of_Instance_2() { return &___Instance_2; }
	inline void set_Instance_2(Version_t3571588476 * value)
	{
		___Instance_2 = value;
		Il2CppCodeGenWriteBarrier(&___Instance_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
