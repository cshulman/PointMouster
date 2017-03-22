#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// HealthBar
struct HealthBar_t1323021899;
// PlayerController
struct PlayerController_t4148409433;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HurtPlayer
struct  HurtPlayer_t2838002628  : public MonoBehaviour_t1158329972
{
public:
	// HealthBar HurtPlayer::Health
	HealthBar_t1323021899 * ___Health_2;
	// PlayerController HurtPlayer::Player
	PlayerController_t4148409433 * ___Player_3;

public:
	inline static int32_t get_offset_of_Health_2() { return static_cast<int32_t>(offsetof(HurtPlayer_t2838002628, ___Health_2)); }
	inline HealthBar_t1323021899 * get_Health_2() const { return ___Health_2; }
	inline HealthBar_t1323021899 ** get_address_of_Health_2() { return &___Health_2; }
	inline void set_Health_2(HealthBar_t1323021899 * value)
	{
		___Health_2 = value;
		Il2CppCodeGenWriteBarrier(&___Health_2, value);
	}

	inline static int32_t get_offset_of_Player_3() { return static_cast<int32_t>(offsetof(HurtPlayer_t2838002628, ___Player_3)); }
	inline PlayerController_t4148409433 * get_Player_3() const { return ___Player_3; }
	inline PlayerController_t4148409433 ** get_address_of_Player_3() { return &___Player_3; }
	inline void set_Player_3(PlayerController_t4148409433 * value)
	{
		___Player_3 = value;
		Il2CppCodeGenWriteBarrier(&___Player_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
