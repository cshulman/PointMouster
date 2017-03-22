#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// HealthBar
struct HealthBar_t1323021899;
// BossHealthBar
struct BossHealthBar_t897985056;
// PlayerController
struct PlayerController_t4148409433;
// GameButtons
struct GameButtons_t3753496245;
// FeedbackPanel
struct FeedbackPanel_t803271409;
// BossQuestions
struct BossQuestions_t4231512970;
// GoogleAnalyticsV4
struct GoogleAnalyticsV4_t198817271;
// System.String[]
struct StringU5BU5D_t1642385972;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ButtonPushed
struct  ButtonPushed_t1344210563  : public MonoBehaviour_t1158329972
{
public:
	// System.String ButtonPushed::Name
	String_t* ___Name_2;
	// System.Int32 ButtonPushed::chosen
	int32_t ___chosen_3;
	// System.Int32 ButtonPushed::correct_answer
	int32_t ___correct_answer_4;
	// HealthBar ButtonPushed::Health
	HealthBar_t1323021899 * ___Health_5;
	// BossHealthBar ButtonPushed::bossHealth
	BossHealthBar_t897985056 * ___bossHealth_6;
	// PlayerController ButtonPushed::player
	PlayerController_t4148409433 * ___player_7;
	// GameButtons ButtonPushed::clear
	GameButtons_t3753496245 * ___clear_8;
	// FeedbackPanel ButtonPushed::fbPanel
	FeedbackPanel_t803271409 * ___fbPanel_9;
	// BossQuestions ButtonPushed::bossQ
	BossQuestions_t4231512970 * ___bossQ_10;
	// GoogleAnalyticsV4 ButtonPushed::googleAnalytics
	GoogleAnalyticsV4_t198817271 * ___googleAnalytics_11;
	// System.Single ButtonPushed::timer
	float ___timer_12;
	// System.String ButtonPushed::feedback
	String_t* ___feedback_13;
	// System.String[] ButtonPushed::correctFB
	StringU5BU5D_t1642385972* ___correctFB_14;
	// System.String[] ButtonPushed::wrongFB
	StringU5BU5D_t1642385972* ___wrongFB_15;

public:
	inline static int32_t get_offset_of_Name_2() { return static_cast<int32_t>(offsetof(ButtonPushed_t1344210563, ___Name_2)); }
	inline String_t* get_Name_2() const { return ___Name_2; }
	inline String_t** get_address_of_Name_2() { return &___Name_2; }
	inline void set_Name_2(String_t* value)
	{
		___Name_2 = value;
		Il2CppCodeGenWriteBarrier(&___Name_2, value);
	}

	inline static int32_t get_offset_of_chosen_3() { return static_cast<int32_t>(offsetof(ButtonPushed_t1344210563, ___chosen_3)); }
	inline int32_t get_chosen_3() const { return ___chosen_3; }
	inline int32_t* get_address_of_chosen_3() { return &___chosen_3; }
	inline void set_chosen_3(int32_t value)
	{
		___chosen_3 = value;
	}

	inline static int32_t get_offset_of_correct_answer_4() { return static_cast<int32_t>(offsetof(ButtonPushed_t1344210563, ___correct_answer_4)); }
	inline int32_t get_correct_answer_4() const { return ___correct_answer_4; }
	inline int32_t* get_address_of_correct_answer_4() { return &___correct_answer_4; }
	inline void set_correct_answer_4(int32_t value)
	{
		___correct_answer_4 = value;
	}

	inline static int32_t get_offset_of_Health_5() { return static_cast<int32_t>(offsetof(ButtonPushed_t1344210563, ___Health_5)); }
	inline HealthBar_t1323021899 * get_Health_5() const { return ___Health_5; }
	inline HealthBar_t1323021899 ** get_address_of_Health_5() { return &___Health_5; }
	inline void set_Health_5(HealthBar_t1323021899 * value)
	{
		___Health_5 = value;
		Il2CppCodeGenWriteBarrier(&___Health_5, value);
	}

	inline static int32_t get_offset_of_bossHealth_6() { return static_cast<int32_t>(offsetof(ButtonPushed_t1344210563, ___bossHealth_6)); }
	inline BossHealthBar_t897985056 * get_bossHealth_6() const { return ___bossHealth_6; }
	inline BossHealthBar_t897985056 ** get_address_of_bossHealth_6() { return &___bossHealth_6; }
	inline void set_bossHealth_6(BossHealthBar_t897985056 * value)
	{
		___bossHealth_6 = value;
		Il2CppCodeGenWriteBarrier(&___bossHealth_6, value);
	}

	inline static int32_t get_offset_of_player_7() { return static_cast<int32_t>(offsetof(ButtonPushed_t1344210563, ___player_7)); }
	inline PlayerController_t4148409433 * get_player_7() const { return ___player_7; }
	inline PlayerController_t4148409433 ** get_address_of_player_7() { return &___player_7; }
	inline void set_player_7(PlayerController_t4148409433 * value)
	{
		___player_7 = value;
		Il2CppCodeGenWriteBarrier(&___player_7, value);
	}

	inline static int32_t get_offset_of_clear_8() { return static_cast<int32_t>(offsetof(ButtonPushed_t1344210563, ___clear_8)); }
	inline GameButtons_t3753496245 * get_clear_8() const { return ___clear_8; }
	inline GameButtons_t3753496245 ** get_address_of_clear_8() { return &___clear_8; }
	inline void set_clear_8(GameButtons_t3753496245 * value)
	{
		___clear_8 = value;
		Il2CppCodeGenWriteBarrier(&___clear_8, value);
	}

	inline static int32_t get_offset_of_fbPanel_9() { return static_cast<int32_t>(offsetof(ButtonPushed_t1344210563, ___fbPanel_9)); }
	inline FeedbackPanel_t803271409 * get_fbPanel_9() const { return ___fbPanel_9; }
	inline FeedbackPanel_t803271409 ** get_address_of_fbPanel_9() { return &___fbPanel_9; }
	inline void set_fbPanel_9(FeedbackPanel_t803271409 * value)
	{
		___fbPanel_9 = value;
		Il2CppCodeGenWriteBarrier(&___fbPanel_9, value);
	}

	inline static int32_t get_offset_of_bossQ_10() { return static_cast<int32_t>(offsetof(ButtonPushed_t1344210563, ___bossQ_10)); }
	inline BossQuestions_t4231512970 * get_bossQ_10() const { return ___bossQ_10; }
	inline BossQuestions_t4231512970 ** get_address_of_bossQ_10() { return &___bossQ_10; }
	inline void set_bossQ_10(BossQuestions_t4231512970 * value)
	{
		___bossQ_10 = value;
		Il2CppCodeGenWriteBarrier(&___bossQ_10, value);
	}

	inline static int32_t get_offset_of_googleAnalytics_11() { return static_cast<int32_t>(offsetof(ButtonPushed_t1344210563, ___googleAnalytics_11)); }
	inline GoogleAnalyticsV4_t198817271 * get_googleAnalytics_11() const { return ___googleAnalytics_11; }
	inline GoogleAnalyticsV4_t198817271 ** get_address_of_googleAnalytics_11() { return &___googleAnalytics_11; }
	inline void set_googleAnalytics_11(GoogleAnalyticsV4_t198817271 * value)
	{
		___googleAnalytics_11 = value;
		Il2CppCodeGenWriteBarrier(&___googleAnalytics_11, value);
	}

	inline static int32_t get_offset_of_timer_12() { return static_cast<int32_t>(offsetof(ButtonPushed_t1344210563, ___timer_12)); }
	inline float get_timer_12() const { return ___timer_12; }
	inline float* get_address_of_timer_12() { return &___timer_12; }
	inline void set_timer_12(float value)
	{
		___timer_12 = value;
	}

	inline static int32_t get_offset_of_feedback_13() { return static_cast<int32_t>(offsetof(ButtonPushed_t1344210563, ___feedback_13)); }
	inline String_t* get_feedback_13() const { return ___feedback_13; }
	inline String_t** get_address_of_feedback_13() { return &___feedback_13; }
	inline void set_feedback_13(String_t* value)
	{
		___feedback_13 = value;
		Il2CppCodeGenWriteBarrier(&___feedback_13, value);
	}

	inline static int32_t get_offset_of_correctFB_14() { return static_cast<int32_t>(offsetof(ButtonPushed_t1344210563, ___correctFB_14)); }
	inline StringU5BU5D_t1642385972* get_correctFB_14() const { return ___correctFB_14; }
	inline StringU5BU5D_t1642385972** get_address_of_correctFB_14() { return &___correctFB_14; }
	inline void set_correctFB_14(StringU5BU5D_t1642385972* value)
	{
		___correctFB_14 = value;
		Il2CppCodeGenWriteBarrier(&___correctFB_14, value);
	}

	inline static int32_t get_offset_of_wrongFB_15() { return static_cast<int32_t>(offsetof(ButtonPushed_t1344210563, ___wrongFB_15)); }
	inline StringU5BU5D_t1642385972* get_wrongFB_15() const { return ___wrongFB_15; }
	inline StringU5BU5D_t1642385972** get_address_of_wrongFB_15() { return &___wrongFB_15; }
	inline void set_wrongFB_15(StringU5BU5D_t1642385972* value)
	{
		___wrongFB_15 = value;
		Il2CppCodeGenWriteBarrier(&___wrongFB_15, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
