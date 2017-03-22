#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.CanvasGroup
struct CanvasGroup_t3296560743;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// QuestionCanvas
struct  QuestionCanvas_t2285535216  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean QuestionCanvas::enable
	bool ___enable_2;
	// UnityEngine.CanvasGroup QuestionCanvas::canvas
	CanvasGroup_t3296560743 * ___canvas_3;

public:
	inline static int32_t get_offset_of_enable_2() { return static_cast<int32_t>(offsetof(QuestionCanvas_t2285535216, ___enable_2)); }
	inline bool get_enable_2() const { return ___enable_2; }
	inline bool* get_address_of_enable_2() { return &___enable_2; }
	inline void set_enable_2(bool value)
	{
		___enable_2 = value;
	}

	inline static int32_t get_offset_of_canvas_3() { return static_cast<int32_t>(offsetof(QuestionCanvas_t2285535216, ___canvas_3)); }
	inline CanvasGroup_t3296560743 * get_canvas_3() const { return ___canvas_3; }
	inline CanvasGroup_t3296560743 ** get_address_of_canvas_3() { return &___canvas_3; }
	inline void set_canvas_3(CanvasGroup_t3296560743 * value)
	{
		___canvas_3 = value;
		Il2CppCodeGenWriteBarrier(&___canvas_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
