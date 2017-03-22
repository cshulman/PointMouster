#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Slider
struct Slider_t297367283;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SettingsScript
struct  SettingsScript_t2637859674  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Slider SettingsScript::volumeSlider
	Slider_t297367283 * ___volumeSlider_2;

public:
	inline static int32_t get_offset_of_volumeSlider_2() { return static_cast<int32_t>(offsetof(SettingsScript_t2637859674, ___volumeSlider_2)); }
	inline Slider_t297367283 * get_volumeSlider_2() const { return ___volumeSlider_2; }
	inline Slider_t297367283 ** get_address_of_volumeSlider_2() { return &___volumeSlider_2; }
	inline void set_volumeSlider_2(Slider_t297367283 * value)
	{
		___volumeSlider_2 = value;
		Il2CppCodeGenWriteBarrier(&___volumeSlider_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
