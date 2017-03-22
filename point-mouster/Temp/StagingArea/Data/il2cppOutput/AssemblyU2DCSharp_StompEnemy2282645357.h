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
// BossQuestions
struct BossQuestions_t4231512970;
// UnityEngine.UI.Button
struct Button_t2872111280;
// QuestionCanvas
struct QuestionCanvas_t2285535216;
// QuestionPanel
struct QuestionPanel_t1993000386;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// StompEnemy
struct  StompEnemy_t2282645357  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Text StompEnemy::questionDisplay
	Text_t356221433 * ___questionDisplay_2;
	// BossQuestions StompEnemy::boss
	BossQuestions_t4231512970 * ___boss_3;
	// UnityEngine.UI.Button StompEnemy::choice1
	Button_t2872111280 * ___choice1_4;
	// UnityEngine.UI.Button StompEnemy::choice2
	Button_t2872111280 * ___choice2_5;
	// UnityEngine.UI.Button StompEnemy::choice3
	Button_t2872111280 * ___choice3_6;
	// UnityEngine.UI.Button StompEnemy::choice4
	Button_t2872111280 * ___choice4_7;
	// QuestionCanvas StompEnemy::qCanvas
	QuestionCanvas_t2285535216 * ___qCanvas_8;
	// QuestionPanel StompEnemy::panel
	QuestionPanel_t1993000386 * ___panel_9;
	// System.Int32 StompEnemy::answer
	int32_t ___answer_10;
	// UnityEngine.GameObject StompEnemy::button1
	GameObject_t1756533147 * ___button1_11;
	// UnityEngine.GameObject StompEnemy::button2
	GameObject_t1756533147 * ___button2_12;
	// UnityEngine.GameObject StompEnemy::button3
	GameObject_t1756533147 * ___button3_13;
	// UnityEngine.GameObject StompEnemy::button4
	GameObject_t1756533147 * ___button4_14;
	// System.Int32 StompEnemy::index
	int32_t ___index_16;

public:
	inline static int32_t get_offset_of_questionDisplay_2() { return static_cast<int32_t>(offsetof(StompEnemy_t2282645357, ___questionDisplay_2)); }
	inline Text_t356221433 * get_questionDisplay_2() const { return ___questionDisplay_2; }
	inline Text_t356221433 ** get_address_of_questionDisplay_2() { return &___questionDisplay_2; }
	inline void set_questionDisplay_2(Text_t356221433 * value)
	{
		___questionDisplay_2 = value;
		Il2CppCodeGenWriteBarrier(&___questionDisplay_2, value);
	}

	inline static int32_t get_offset_of_boss_3() { return static_cast<int32_t>(offsetof(StompEnemy_t2282645357, ___boss_3)); }
	inline BossQuestions_t4231512970 * get_boss_3() const { return ___boss_3; }
	inline BossQuestions_t4231512970 ** get_address_of_boss_3() { return &___boss_3; }
	inline void set_boss_3(BossQuestions_t4231512970 * value)
	{
		___boss_3 = value;
		Il2CppCodeGenWriteBarrier(&___boss_3, value);
	}

	inline static int32_t get_offset_of_choice1_4() { return static_cast<int32_t>(offsetof(StompEnemy_t2282645357, ___choice1_4)); }
	inline Button_t2872111280 * get_choice1_4() const { return ___choice1_4; }
	inline Button_t2872111280 ** get_address_of_choice1_4() { return &___choice1_4; }
	inline void set_choice1_4(Button_t2872111280 * value)
	{
		___choice1_4 = value;
		Il2CppCodeGenWriteBarrier(&___choice1_4, value);
	}

	inline static int32_t get_offset_of_choice2_5() { return static_cast<int32_t>(offsetof(StompEnemy_t2282645357, ___choice2_5)); }
	inline Button_t2872111280 * get_choice2_5() const { return ___choice2_5; }
	inline Button_t2872111280 ** get_address_of_choice2_5() { return &___choice2_5; }
	inline void set_choice2_5(Button_t2872111280 * value)
	{
		___choice2_5 = value;
		Il2CppCodeGenWriteBarrier(&___choice2_5, value);
	}

	inline static int32_t get_offset_of_choice3_6() { return static_cast<int32_t>(offsetof(StompEnemy_t2282645357, ___choice3_6)); }
	inline Button_t2872111280 * get_choice3_6() const { return ___choice3_6; }
	inline Button_t2872111280 ** get_address_of_choice3_6() { return &___choice3_6; }
	inline void set_choice3_6(Button_t2872111280 * value)
	{
		___choice3_6 = value;
		Il2CppCodeGenWriteBarrier(&___choice3_6, value);
	}

	inline static int32_t get_offset_of_choice4_7() { return static_cast<int32_t>(offsetof(StompEnemy_t2282645357, ___choice4_7)); }
	inline Button_t2872111280 * get_choice4_7() const { return ___choice4_7; }
	inline Button_t2872111280 ** get_address_of_choice4_7() { return &___choice4_7; }
	inline void set_choice4_7(Button_t2872111280 * value)
	{
		___choice4_7 = value;
		Il2CppCodeGenWriteBarrier(&___choice4_7, value);
	}

	inline static int32_t get_offset_of_qCanvas_8() { return static_cast<int32_t>(offsetof(StompEnemy_t2282645357, ___qCanvas_8)); }
	inline QuestionCanvas_t2285535216 * get_qCanvas_8() const { return ___qCanvas_8; }
	inline QuestionCanvas_t2285535216 ** get_address_of_qCanvas_8() { return &___qCanvas_8; }
	inline void set_qCanvas_8(QuestionCanvas_t2285535216 * value)
	{
		___qCanvas_8 = value;
		Il2CppCodeGenWriteBarrier(&___qCanvas_8, value);
	}

	inline static int32_t get_offset_of_panel_9() { return static_cast<int32_t>(offsetof(StompEnemy_t2282645357, ___panel_9)); }
	inline QuestionPanel_t1993000386 * get_panel_9() const { return ___panel_9; }
	inline QuestionPanel_t1993000386 ** get_address_of_panel_9() { return &___panel_9; }
	inline void set_panel_9(QuestionPanel_t1993000386 * value)
	{
		___panel_9 = value;
		Il2CppCodeGenWriteBarrier(&___panel_9, value);
	}

	inline static int32_t get_offset_of_answer_10() { return static_cast<int32_t>(offsetof(StompEnemy_t2282645357, ___answer_10)); }
	inline int32_t get_answer_10() const { return ___answer_10; }
	inline int32_t* get_address_of_answer_10() { return &___answer_10; }
	inline void set_answer_10(int32_t value)
	{
		___answer_10 = value;
	}

	inline static int32_t get_offset_of_button1_11() { return static_cast<int32_t>(offsetof(StompEnemy_t2282645357, ___button1_11)); }
	inline GameObject_t1756533147 * get_button1_11() const { return ___button1_11; }
	inline GameObject_t1756533147 ** get_address_of_button1_11() { return &___button1_11; }
	inline void set_button1_11(GameObject_t1756533147 * value)
	{
		___button1_11 = value;
		Il2CppCodeGenWriteBarrier(&___button1_11, value);
	}

	inline static int32_t get_offset_of_button2_12() { return static_cast<int32_t>(offsetof(StompEnemy_t2282645357, ___button2_12)); }
	inline GameObject_t1756533147 * get_button2_12() const { return ___button2_12; }
	inline GameObject_t1756533147 ** get_address_of_button2_12() { return &___button2_12; }
	inline void set_button2_12(GameObject_t1756533147 * value)
	{
		___button2_12 = value;
		Il2CppCodeGenWriteBarrier(&___button2_12, value);
	}

	inline static int32_t get_offset_of_button3_13() { return static_cast<int32_t>(offsetof(StompEnemy_t2282645357, ___button3_13)); }
	inline GameObject_t1756533147 * get_button3_13() const { return ___button3_13; }
	inline GameObject_t1756533147 ** get_address_of_button3_13() { return &___button3_13; }
	inline void set_button3_13(GameObject_t1756533147 * value)
	{
		___button3_13 = value;
		Il2CppCodeGenWriteBarrier(&___button3_13, value);
	}

	inline static int32_t get_offset_of_button4_14() { return static_cast<int32_t>(offsetof(StompEnemy_t2282645357, ___button4_14)); }
	inline GameObject_t1756533147 * get_button4_14() const { return ___button4_14; }
	inline GameObject_t1756533147 ** get_address_of_button4_14() { return &___button4_14; }
	inline void set_button4_14(GameObject_t1756533147 * value)
	{
		___button4_14 = value;
		Il2CppCodeGenWriteBarrier(&___button4_14, value);
	}

	inline static int32_t get_offset_of_index_16() { return static_cast<int32_t>(offsetof(StompEnemy_t2282645357, ___index_16)); }
	inline int32_t get_index_16() const { return ___index_16; }
	inline int32_t* get_address_of_index_16() { return &___index_16; }
	inline void set_index_16(int32_t value)
	{
		___index_16 = value;
	}
};

struct StompEnemy_t2282645357_StaticFields
{
public:
	// System.String StompEnemy::ques
	String_t* ___ques_15;

public:
	inline static int32_t get_offset_of_ques_15() { return static_cast<int32_t>(offsetof(StompEnemy_t2282645357_StaticFields, ___ques_15)); }
	inline String_t* get_ques_15() const { return ___ques_15; }
	inline String_t** get_address_of_ques_15() { return &___ques_15; }
	inline void set_ques_15(String_t* value)
	{
		___ques_15 = value;
		Il2CppCodeGenWriteBarrier(&___ques_15, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
