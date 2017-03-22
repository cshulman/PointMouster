#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;
// QuestionPanel
struct QuestionPanel_t1993000386;
// QuestionCanvas
struct QuestionCanvas_t2285535216;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameButtons
struct  GameButtons_t3753496245  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject[] GameButtons::showIfPaused
	GameObjectU5BU5D_t3057952154* ___showIfPaused_2;
	// UnityEngine.GameObject[] GameButtons::showIfResumed
	GameObjectU5BU5D_t3057952154* ___showIfResumed_3;
	// QuestionPanel GameButtons::panel
	QuestionPanel_t1993000386 * ___panel_4;
	// QuestionCanvas GameButtons::qCanvas
	QuestionCanvas_t2285535216 * ___qCanvas_5;

public:
	inline static int32_t get_offset_of_showIfPaused_2() { return static_cast<int32_t>(offsetof(GameButtons_t3753496245, ___showIfPaused_2)); }
	inline GameObjectU5BU5D_t3057952154* get_showIfPaused_2() const { return ___showIfPaused_2; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_showIfPaused_2() { return &___showIfPaused_2; }
	inline void set_showIfPaused_2(GameObjectU5BU5D_t3057952154* value)
	{
		___showIfPaused_2 = value;
		Il2CppCodeGenWriteBarrier(&___showIfPaused_2, value);
	}

	inline static int32_t get_offset_of_showIfResumed_3() { return static_cast<int32_t>(offsetof(GameButtons_t3753496245, ___showIfResumed_3)); }
	inline GameObjectU5BU5D_t3057952154* get_showIfResumed_3() const { return ___showIfResumed_3; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_showIfResumed_3() { return &___showIfResumed_3; }
	inline void set_showIfResumed_3(GameObjectU5BU5D_t3057952154* value)
	{
		___showIfResumed_3 = value;
		Il2CppCodeGenWriteBarrier(&___showIfResumed_3, value);
	}

	inline static int32_t get_offset_of_panel_4() { return static_cast<int32_t>(offsetof(GameButtons_t3753496245, ___panel_4)); }
	inline QuestionPanel_t1993000386 * get_panel_4() const { return ___panel_4; }
	inline QuestionPanel_t1993000386 ** get_address_of_panel_4() { return &___panel_4; }
	inline void set_panel_4(QuestionPanel_t1993000386 * value)
	{
		___panel_4 = value;
		Il2CppCodeGenWriteBarrier(&___panel_4, value);
	}

	inline static int32_t get_offset_of_qCanvas_5() { return static_cast<int32_t>(offsetof(GameButtons_t3753496245, ___qCanvas_5)); }
	inline QuestionCanvas_t2285535216 * get_qCanvas_5() const { return ___qCanvas_5; }
	inline QuestionCanvas_t2285535216 ** get_address_of_qCanvas_5() { return &___qCanvas_5; }
	inline void set_qCanvas_5(QuestionCanvas_t2285535216 * value)
	{
		___qCanvas_5 = value;
		Il2CppCodeGenWriteBarrier(&___qCanvas_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
