#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t502193897;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SlimeController
struct  SlimeController_t906310484  : public MonoBehaviour_t1158329972
{
public:
	// System.Single SlimeController::moveSpeed
	float ___moveSpeed_2;
	// UnityEngine.Transform SlimeController::leftPoint
	Transform_t3275118058 * ___leftPoint_3;
	// UnityEngine.Transform SlimeController::rightPoint
	Transform_t3275118058 * ___rightPoint_4;
	// UnityEngine.Rigidbody2D SlimeController::myRigidbody
	Rigidbody2D_t502193897 * ___myRigidbody_5;
	// System.Boolean SlimeController::movingRight
	bool ___movingRight_6;

public:
	inline static int32_t get_offset_of_moveSpeed_2() { return static_cast<int32_t>(offsetof(SlimeController_t906310484, ___moveSpeed_2)); }
	inline float get_moveSpeed_2() const { return ___moveSpeed_2; }
	inline float* get_address_of_moveSpeed_2() { return &___moveSpeed_2; }
	inline void set_moveSpeed_2(float value)
	{
		___moveSpeed_2 = value;
	}

	inline static int32_t get_offset_of_leftPoint_3() { return static_cast<int32_t>(offsetof(SlimeController_t906310484, ___leftPoint_3)); }
	inline Transform_t3275118058 * get_leftPoint_3() const { return ___leftPoint_3; }
	inline Transform_t3275118058 ** get_address_of_leftPoint_3() { return &___leftPoint_3; }
	inline void set_leftPoint_3(Transform_t3275118058 * value)
	{
		___leftPoint_3 = value;
		Il2CppCodeGenWriteBarrier(&___leftPoint_3, value);
	}

	inline static int32_t get_offset_of_rightPoint_4() { return static_cast<int32_t>(offsetof(SlimeController_t906310484, ___rightPoint_4)); }
	inline Transform_t3275118058 * get_rightPoint_4() const { return ___rightPoint_4; }
	inline Transform_t3275118058 ** get_address_of_rightPoint_4() { return &___rightPoint_4; }
	inline void set_rightPoint_4(Transform_t3275118058 * value)
	{
		___rightPoint_4 = value;
		Il2CppCodeGenWriteBarrier(&___rightPoint_4, value);
	}

	inline static int32_t get_offset_of_myRigidbody_5() { return static_cast<int32_t>(offsetof(SlimeController_t906310484, ___myRigidbody_5)); }
	inline Rigidbody2D_t502193897 * get_myRigidbody_5() const { return ___myRigidbody_5; }
	inline Rigidbody2D_t502193897 ** get_address_of_myRigidbody_5() { return &___myRigidbody_5; }
	inline void set_myRigidbody_5(Rigidbody2D_t502193897 * value)
	{
		___myRigidbody_5 = value;
		Il2CppCodeGenWriteBarrier(&___myRigidbody_5, value);
	}

	inline static int32_t get_offset_of_movingRight_6() { return static_cast<int32_t>(offsetof(SlimeController_t906310484, ___movingRight_6)); }
	inline bool get_movingRight_6() const { return ___movingRight_6; }
	inline bool* get_address_of_movingRight_6() { return &___movingRight_6; }
	inline void set_movingRight_6(bool value)
	{
		___movingRight_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
