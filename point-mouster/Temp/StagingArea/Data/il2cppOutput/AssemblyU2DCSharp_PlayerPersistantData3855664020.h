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
// System.String[]
struct StringU5BU5D_t1642385972;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerPersistantData
struct  PlayerPersistantData_t3855664020  : public Il2CppObject
{
public:
	// System.String PlayerPersistantData::level
	String_t* ___level_0;
	// System.Single PlayerPersistantData::posX
	float ___posX_1;
	// System.Single PlayerPersistantData::posY
	float ___posY_2;
	// System.Single PlayerPersistantData::health
	float ___health_3;
	// System.String[] PlayerPersistantData::booksCollected
	StringU5BU5D_t1642385972* ___booksCollected_4;

public:
	inline static int32_t get_offset_of_level_0() { return static_cast<int32_t>(offsetof(PlayerPersistantData_t3855664020, ___level_0)); }
	inline String_t* get_level_0() const { return ___level_0; }
	inline String_t** get_address_of_level_0() { return &___level_0; }
	inline void set_level_0(String_t* value)
	{
		___level_0 = value;
		Il2CppCodeGenWriteBarrier(&___level_0, value);
	}

	inline static int32_t get_offset_of_posX_1() { return static_cast<int32_t>(offsetof(PlayerPersistantData_t3855664020, ___posX_1)); }
	inline float get_posX_1() const { return ___posX_1; }
	inline float* get_address_of_posX_1() { return &___posX_1; }
	inline void set_posX_1(float value)
	{
		___posX_1 = value;
	}

	inline static int32_t get_offset_of_posY_2() { return static_cast<int32_t>(offsetof(PlayerPersistantData_t3855664020, ___posY_2)); }
	inline float get_posY_2() const { return ___posY_2; }
	inline float* get_address_of_posY_2() { return &___posY_2; }
	inline void set_posY_2(float value)
	{
		___posY_2 = value;
	}

	inline static int32_t get_offset_of_health_3() { return static_cast<int32_t>(offsetof(PlayerPersistantData_t3855664020, ___health_3)); }
	inline float get_health_3() const { return ___health_3; }
	inline float* get_address_of_health_3() { return &___health_3; }
	inline void set_health_3(float value)
	{
		___health_3 = value;
	}

	inline static int32_t get_offset_of_booksCollected_4() { return static_cast<int32_t>(offsetof(PlayerPersistantData_t3855664020, ___booksCollected_4)); }
	inline StringU5BU5D_t1642385972* get_booksCollected_4() const { return ___booksCollected_4; }
	inline StringU5BU5D_t1642385972** get_address_of_booksCollected_4() { return &___booksCollected_4; }
	inline void set_booksCollected_4(StringU5BU5D_t1642385972* value)
	{
		___booksCollected_4 = value;
		Il2CppCodeGenWriteBarrier(&___booksCollected_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
