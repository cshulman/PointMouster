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
// UnityEngine.Transform
struct Transform_t3275118058;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MovingObject
struct  MovingObject_t4252805171  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject MovingObject::objectToMove
	GameObject_t1756533147 * ___objectToMove_2;
	// UnityEngine.Transform MovingObject::startPoint
	Transform_t3275118058 * ___startPoint_3;
	// UnityEngine.Transform MovingObject::endPoint
	Transform_t3275118058 * ___endPoint_4;
	// System.Single MovingObject::moveSpeed
	float ___moveSpeed_5;
	// UnityEngine.Vector3 MovingObject::currentTarget
	Vector3_t2243707580  ___currentTarget_6;

public:
	inline static int32_t get_offset_of_objectToMove_2() { return static_cast<int32_t>(offsetof(MovingObject_t4252805171, ___objectToMove_2)); }
	inline GameObject_t1756533147 * get_objectToMove_2() const { return ___objectToMove_2; }
	inline GameObject_t1756533147 ** get_address_of_objectToMove_2() { return &___objectToMove_2; }
	inline void set_objectToMove_2(GameObject_t1756533147 * value)
	{
		___objectToMove_2 = value;
		Il2CppCodeGenWriteBarrier(&___objectToMove_2, value);
	}

	inline static int32_t get_offset_of_startPoint_3() { return static_cast<int32_t>(offsetof(MovingObject_t4252805171, ___startPoint_3)); }
	inline Transform_t3275118058 * get_startPoint_3() const { return ___startPoint_3; }
	inline Transform_t3275118058 ** get_address_of_startPoint_3() { return &___startPoint_3; }
	inline void set_startPoint_3(Transform_t3275118058 * value)
	{
		___startPoint_3 = value;
		Il2CppCodeGenWriteBarrier(&___startPoint_3, value);
	}

	inline static int32_t get_offset_of_endPoint_4() { return static_cast<int32_t>(offsetof(MovingObject_t4252805171, ___endPoint_4)); }
	inline Transform_t3275118058 * get_endPoint_4() const { return ___endPoint_4; }
	inline Transform_t3275118058 ** get_address_of_endPoint_4() { return &___endPoint_4; }
	inline void set_endPoint_4(Transform_t3275118058 * value)
	{
		___endPoint_4 = value;
		Il2CppCodeGenWriteBarrier(&___endPoint_4, value);
	}

	inline static int32_t get_offset_of_moveSpeed_5() { return static_cast<int32_t>(offsetof(MovingObject_t4252805171, ___moveSpeed_5)); }
	inline float get_moveSpeed_5() const { return ___moveSpeed_5; }
	inline float* get_address_of_moveSpeed_5() { return &___moveSpeed_5; }
	inline void set_moveSpeed_5(float value)
	{
		___moveSpeed_5 = value;
	}

	inline static int32_t get_offset_of_currentTarget_6() { return static_cast<int32_t>(offsetof(MovingObject_t4252805171, ___currentTarget_6)); }
	inline Vector3_t2243707580  get_currentTarget_6() const { return ___currentTarget_6; }
	inline Vector3_t2243707580 * get_address_of_currentTarget_6() { return &___currentTarget_6; }
	inline void set_currentTarget_6(Vector3_t2243707580  value)
	{
		___currentTarget_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
