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
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CameraController
struct  CameraController_t3555666667  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject CameraController::target
	GameObject_t1756533147 * ___target_2;
	// System.Single CameraController::followAhead
	float ___followAhead_3;
	// UnityEngine.Vector3 CameraController::targetPosition
	Vector3_t2243707580  ___targetPosition_4;
	// System.Single CameraController::smoothing
	float ___smoothing_5;

public:
	inline static int32_t get_offset_of_target_2() { return static_cast<int32_t>(offsetof(CameraController_t3555666667, ___target_2)); }
	inline GameObject_t1756533147 * get_target_2() const { return ___target_2; }
	inline GameObject_t1756533147 ** get_address_of_target_2() { return &___target_2; }
	inline void set_target_2(GameObject_t1756533147 * value)
	{
		___target_2 = value;
		Il2CppCodeGenWriteBarrier(&___target_2, value);
	}

	inline static int32_t get_offset_of_followAhead_3() { return static_cast<int32_t>(offsetof(CameraController_t3555666667, ___followAhead_3)); }
	inline float get_followAhead_3() const { return ___followAhead_3; }
	inline float* get_address_of_followAhead_3() { return &___followAhead_3; }
	inline void set_followAhead_3(float value)
	{
		___followAhead_3 = value;
	}

	inline static int32_t get_offset_of_targetPosition_4() { return static_cast<int32_t>(offsetof(CameraController_t3555666667, ___targetPosition_4)); }
	inline Vector3_t2243707580  get_targetPosition_4() const { return ___targetPosition_4; }
	inline Vector3_t2243707580 * get_address_of_targetPosition_4() { return &___targetPosition_4; }
	inline void set_targetPosition_4(Vector3_t2243707580  value)
	{
		___targetPosition_4 = value;
	}

	inline static int32_t get_offset_of_smoothing_5() { return static_cast<int32_t>(offsetof(CameraController_t3555666667, ___smoothing_5)); }
	inline float get_smoothing_5() const { return ___smoothing_5; }
	inline float* get_address_of_smoothing_5() { return &___smoothing_5; }
	inline void set_smoothing_5(float value)
	{
		___smoothing_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
