#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PersistenceSceneController
struct  PersistenceSceneController_t1994663951  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject PersistenceSceneController::Player
	GameObject_t1756533147 * ___Player_2;
	// UnityEngine.GameObject PersistenceSceneController::HealthBar
	GameObject_t1756533147 * ___HealthBar_3;

public:
	inline static int32_t get_offset_of_Player_2() { return static_cast<int32_t>(offsetof(PersistenceSceneController_t1994663951, ___Player_2)); }
	inline GameObject_t1756533147 * get_Player_2() const { return ___Player_2; }
	inline GameObject_t1756533147 ** get_address_of_Player_2() { return &___Player_2; }
	inline void set_Player_2(GameObject_t1756533147 * value)
	{
		___Player_2 = value;
		Il2CppCodeGenWriteBarrier(&___Player_2, value);
	}

	inline static int32_t get_offset_of_HealthBar_3() { return static_cast<int32_t>(offsetof(PersistenceSceneController_t1994663951, ___HealthBar_3)); }
	inline GameObject_t1756533147 * get_HealthBar_3() const { return ___HealthBar_3; }
	inline GameObject_t1756533147 ** get_address_of_HealthBar_3() { return &___HealthBar_3; }
	inline void set_HealthBar_3(GameObject_t1756533147 * value)
	{
		___HealthBar_3 = value;
		Il2CppCodeGenWriteBarrier(&___HealthBar_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
