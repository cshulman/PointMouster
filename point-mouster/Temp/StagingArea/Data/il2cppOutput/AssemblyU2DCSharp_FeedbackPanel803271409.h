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
// ButtonPushed
struct ButtonPushed_t1344210563;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FeedbackPanel
struct  FeedbackPanel_t803271409  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Text FeedbackPanel::fbDisplay
	Text_t356221433 * ___fbDisplay_2;
	// UnityEngine.GameObject FeedbackPanel::p
	GameObject_t1756533147 * ___p_3;
	// ButtonPushed FeedbackPanel::btnPushed
	ButtonPushed_t1344210563 * ___btnPushed_4;

public:
	inline static int32_t get_offset_of_fbDisplay_2() { return static_cast<int32_t>(offsetof(FeedbackPanel_t803271409, ___fbDisplay_2)); }
	inline Text_t356221433 * get_fbDisplay_2() const { return ___fbDisplay_2; }
	inline Text_t356221433 ** get_address_of_fbDisplay_2() { return &___fbDisplay_2; }
	inline void set_fbDisplay_2(Text_t356221433 * value)
	{
		___fbDisplay_2 = value;
		Il2CppCodeGenWriteBarrier(&___fbDisplay_2, value);
	}

	inline static int32_t get_offset_of_p_3() { return static_cast<int32_t>(offsetof(FeedbackPanel_t803271409, ___p_3)); }
	inline GameObject_t1756533147 * get_p_3() const { return ___p_3; }
	inline GameObject_t1756533147 ** get_address_of_p_3() { return &___p_3; }
	inline void set_p_3(GameObject_t1756533147 * value)
	{
		___p_3 = value;
		Il2CppCodeGenWriteBarrier(&___p_3, value);
	}

	inline static int32_t get_offset_of_btnPushed_4() { return static_cast<int32_t>(offsetof(FeedbackPanel_t803271409, ___btnPushed_4)); }
	inline ButtonPushed_t1344210563 * get_btnPushed_4() const { return ___btnPushed_4; }
	inline ButtonPushed_t1344210563 ** get_address_of_btnPushed_4() { return &___btnPushed_4; }
	inline void set_btnPushed_4(ButtonPushed_t1344210563 * value)
	{
		___btnPushed_4 = value;
		Il2CppCodeGenWriteBarrier(&___btnPushed_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
