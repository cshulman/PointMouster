#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Text
struct Text_t356221433;
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MessagePanel
struct  MessagePanel_t1958872291  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Text MessagePanel::WordDisplay
	Text_t356221433 * ___WordDisplay_2;
	// UnityEngine.GameObject MessagePanel::button
	GameObject_t1756533147 * ___button_3;

public:
	inline static int32_t get_offset_of_WordDisplay_2() { return static_cast<int32_t>(offsetof(MessagePanel_t1958872291, ___WordDisplay_2)); }
	inline Text_t356221433 * get_WordDisplay_2() const { return ___WordDisplay_2; }
	inline Text_t356221433 ** get_address_of_WordDisplay_2() { return &___WordDisplay_2; }
	inline void set_WordDisplay_2(Text_t356221433 * value)
	{
		___WordDisplay_2 = value;
		Il2CppCodeGenWriteBarrier(&___WordDisplay_2, value);
	}

	inline static int32_t get_offset_of_button_3() { return static_cast<int32_t>(offsetof(MessagePanel_t1958872291, ___button_3)); }
	inline GameObject_t1756533147 * get_button_3() const { return ___button_3; }
	inline GameObject_t1756533147 ** get_address_of_button_3() { return &___button_3; }
	inline void set_button_3(GameObject_t1756533147 * value)
	{
		___button_3 = value;
		Il2CppCodeGenWriteBarrier(&___button_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
