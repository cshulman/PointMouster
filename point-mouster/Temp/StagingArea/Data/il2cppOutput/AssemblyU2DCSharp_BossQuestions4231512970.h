#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GoogleAnalyticsV4
struct GoogleAnalyticsV4_t198817271;
// System.String
struct String_t;
// System.Collections.Generic.SortedDictionary`2<System.String,System.String>
struct SortedDictionary_2_t1298644088;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1398341365;
// System.String[]
struct StringU5BU5D_t1642385972;
// System.Collections.Generic.List`1<BossQuestions/Question>
struct List_1_t1885342859;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t1440998580;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BossQuestions
struct  BossQuestions_t4231512970  : public MonoBehaviour_t1158329972
{
public:
	// GoogleAnalyticsV4 BossQuestions::googleAnalytics
	GoogleAnalyticsV4_t198817271 * ___googleAnalytics_2;
	// System.Int32 BossQuestions::numWords
	int32_t ___numWords_5;
	// System.String BossQuestions::questionTemp
	String_t* ___questionTemp_6;
	// System.String BossQuestions::choice1
	String_t* ___choice1_7;
	// System.String BossQuestions::choice2
	String_t* ___choice2_8;
	// System.String BossQuestions::choice3
	String_t* ___choice3_9;
	// System.String BossQuestions::choice4
	String_t* ___choice4_10;
	// System.String BossQuestions::answer
	String_t* ___answer_11;
	// System.String BossQuestions::currQuestion
	String_t* ___currQuestion_12;
	// System.Collections.Generic.List`1<System.String> BossQuestions::answerOptions
	List_1_t1398341365 * ___answerOptions_14;
	// System.Collections.Generic.List`1<System.String> BossQuestions::keyList
	List_1_t1398341365 * ___keyList_15;
	// System.String[] BossQuestions::multiple_choice
	StringU5BU5D_t1642385972* ___multiple_choice_17;
	// System.Int32 BossQuestions::numQuestions
	int32_t ___numQuestions_18;
	// System.Collections.Generic.List`1<BossQuestions/Question> BossQuestions::questions
	List_1_t1885342859 * ___questions_19;

public:
	inline static int32_t get_offset_of_googleAnalytics_2() { return static_cast<int32_t>(offsetof(BossQuestions_t4231512970, ___googleAnalytics_2)); }
	inline GoogleAnalyticsV4_t198817271 * get_googleAnalytics_2() const { return ___googleAnalytics_2; }
	inline GoogleAnalyticsV4_t198817271 ** get_address_of_googleAnalytics_2() { return &___googleAnalytics_2; }
	inline void set_googleAnalytics_2(GoogleAnalyticsV4_t198817271 * value)
	{
		___googleAnalytics_2 = value;
		Il2CppCodeGenWriteBarrier(&___googleAnalytics_2, value);
	}

	inline static int32_t get_offset_of_numWords_5() { return static_cast<int32_t>(offsetof(BossQuestions_t4231512970, ___numWords_5)); }
	inline int32_t get_numWords_5() const { return ___numWords_5; }
	inline int32_t* get_address_of_numWords_5() { return &___numWords_5; }
	inline void set_numWords_5(int32_t value)
	{
		___numWords_5 = value;
	}

	inline static int32_t get_offset_of_questionTemp_6() { return static_cast<int32_t>(offsetof(BossQuestions_t4231512970, ___questionTemp_6)); }
	inline String_t* get_questionTemp_6() const { return ___questionTemp_6; }
	inline String_t** get_address_of_questionTemp_6() { return &___questionTemp_6; }
	inline void set_questionTemp_6(String_t* value)
	{
		___questionTemp_6 = value;
		Il2CppCodeGenWriteBarrier(&___questionTemp_6, value);
	}

	inline static int32_t get_offset_of_choice1_7() { return static_cast<int32_t>(offsetof(BossQuestions_t4231512970, ___choice1_7)); }
	inline String_t* get_choice1_7() const { return ___choice1_7; }
	inline String_t** get_address_of_choice1_7() { return &___choice1_7; }
	inline void set_choice1_7(String_t* value)
	{
		___choice1_7 = value;
		Il2CppCodeGenWriteBarrier(&___choice1_7, value);
	}

	inline static int32_t get_offset_of_choice2_8() { return static_cast<int32_t>(offsetof(BossQuestions_t4231512970, ___choice2_8)); }
	inline String_t* get_choice2_8() const { return ___choice2_8; }
	inline String_t** get_address_of_choice2_8() { return &___choice2_8; }
	inline void set_choice2_8(String_t* value)
	{
		___choice2_8 = value;
		Il2CppCodeGenWriteBarrier(&___choice2_8, value);
	}

	inline static int32_t get_offset_of_choice3_9() { return static_cast<int32_t>(offsetof(BossQuestions_t4231512970, ___choice3_9)); }
	inline String_t* get_choice3_9() const { return ___choice3_9; }
	inline String_t** get_address_of_choice3_9() { return &___choice3_9; }
	inline void set_choice3_9(String_t* value)
	{
		___choice3_9 = value;
		Il2CppCodeGenWriteBarrier(&___choice3_9, value);
	}

	inline static int32_t get_offset_of_choice4_10() { return static_cast<int32_t>(offsetof(BossQuestions_t4231512970, ___choice4_10)); }
	inline String_t* get_choice4_10() const { return ___choice4_10; }
	inline String_t** get_address_of_choice4_10() { return &___choice4_10; }
	inline void set_choice4_10(String_t* value)
	{
		___choice4_10 = value;
		Il2CppCodeGenWriteBarrier(&___choice4_10, value);
	}

	inline static int32_t get_offset_of_answer_11() { return static_cast<int32_t>(offsetof(BossQuestions_t4231512970, ___answer_11)); }
	inline String_t* get_answer_11() const { return ___answer_11; }
	inline String_t** get_address_of_answer_11() { return &___answer_11; }
	inline void set_answer_11(String_t* value)
	{
		___answer_11 = value;
		Il2CppCodeGenWriteBarrier(&___answer_11, value);
	}

	inline static int32_t get_offset_of_currQuestion_12() { return static_cast<int32_t>(offsetof(BossQuestions_t4231512970, ___currQuestion_12)); }
	inline String_t* get_currQuestion_12() const { return ___currQuestion_12; }
	inline String_t** get_address_of_currQuestion_12() { return &___currQuestion_12; }
	inline void set_currQuestion_12(String_t* value)
	{
		___currQuestion_12 = value;
		Il2CppCodeGenWriteBarrier(&___currQuestion_12, value);
	}

	inline static int32_t get_offset_of_answerOptions_14() { return static_cast<int32_t>(offsetof(BossQuestions_t4231512970, ___answerOptions_14)); }
	inline List_1_t1398341365 * get_answerOptions_14() const { return ___answerOptions_14; }
	inline List_1_t1398341365 ** get_address_of_answerOptions_14() { return &___answerOptions_14; }
	inline void set_answerOptions_14(List_1_t1398341365 * value)
	{
		___answerOptions_14 = value;
		Il2CppCodeGenWriteBarrier(&___answerOptions_14, value);
	}

	inline static int32_t get_offset_of_keyList_15() { return static_cast<int32_t>(offsetof(BossQuestions_t4231512970, ___keyList_15)); }
	inline List_1_t1398341365 * get_keyList_15() const { return ___keyList_15; }
	inline List_1_t1398341365 ** get_address_of_keyList_15() { return &___keyList_15; }
	inline void set_keyList_15(List_1_t1398341365 * value)
	{
		___keyList_15 = value;
		Il2CppCodeGenWriteBarrier(&___keyList_15, value);
	}

	inline static int32_t get_offset_of_multiple_choice_17() { return static_cast<int32_t>(offsetof(BossQuestions_t4231512970, ___multiple_choice_17)); }
	inline StringU5BU5D_t1642385972* get_multiple_choice_17() const { return ___multiple_choice_17; }
	inline StringU5BU5D_t1642385972** get_address_of_multiple_choice_17() { return &___multiple_choice_17; }
	inline void set_multiple_choice_17(StringU5BU5D_t1642385972* value)
	{
		___multiple_choice_17 = value;
		Il2CppCodeGenWriteBarrier(&___multiple_choice_17, value);
	}

	inline static int32_t get_offset_of_numQuestions_18() { return static_cast<int32_t>(offsetof(BossQuestions_t4231512970, ___numQuestions_18)); }
	inline int32_t get_numQuestions_18() const { return ___numQuestions_18; }
	inline int32_t* get_address_of_numQuestions_18() { return &___numQuestions_18; }
	inline void set_numQuestions_18(int32_t value)
	{
		___numQuestions_18 = value;
	}

	inline static int32_t get_offset_of_questions_19() { return static_cast<int32_t>(offsetof(BossQuestions_t4231512970, ___questions_19)); }
	inline List_1_t1885342859 * get_questions_19() const { return ___questions_19; }
	inline List_1_t1885342859 ** get_address_of_questions_19() { return &___questions_19; }
	inline void set_questions_19(List_1_t1885342859 * value)
	{
		___questions_19 = value;
		Il2CppCodeGenWriteBarrier(&___questions_19, value);
	}
};

struct BossQuestions_t4231512970_StaticFields
{
public:
	// System.Collections.Generic.SortedDictionary`2<System.String,System.String> BossQuestions::questionsAnswers
	SortedDictionary_2_t1298644088 * ___questionsAnswers_13;
	// System.Collections.Generic.List`1<System.String> BossQuestions::currAnswers
	List_1_t1398341365 * ___currAnswers_16;
	// System.Int32 BossQuestions::correct_index
	int32_t ___correct_index_20;
	// System.Collections.Generic.List`1<BossQuestions/Question> BossQuestions::questionsUsed
	List_1_t1885342859 * ___questionsUsed_21;
	// System.Collections.Generic.List`1<System.Int32> BossQuestions::indexUsed
	List_1_t1440998580 * ___indexUsed_22;

public:
	inline static int32_t get_offset_of_questionsAnswers_13() { return static_cast<int32_t>(offsetof(BossQuestions_t4231512970_StaticFields, ___questionsAnswers_13)); }
	inline SortedDictionary_2_t1298644088 * get_questionsAnswers_13() const { return ___questionsAnswers_13; }
	inline SortedDictionary_2_t1298644088 ** get_address_of_questionsAnswers_13() { return &___questionsAnswers_13; }
	inline void set_questionsAnswers_13(SortedDictionary_2_t1298644088 * value)
	{
		___questionsAnswers_13 = value;
		Il2CppCodeGenWriteBarrier(&___questionsAnswers_13, value);
	}

	inline static int32_t get_offset_of_currAnswers_16() { return static_cast<int32_t>(offsetof(BossQuestions_t4231512970_StaticFields, ___currAnswers_16)); }
	inline List_1_t1398341365 * get_currAnswers_16() const { return ___currAnswers_16; }
	inline List_1_t1398341365 ** get_address_of_currAnswers_16() { return &___currAnswers_16; }
	inline void set_currAnswers_16(List_1_t1398341365 * value)
	{
		___currAnswers_16 = value;
		Il2CppCodeGenWriteBarrier(&___currAnswers_16, value);
	}

	inline static int32_t get_offset_of_correct_index_20() { return static_cast<int32_t>(offsetof(BossQuestions_t4231512970_StaticFields, ___correct_index_20)); }
	inline int32_t get_correct_index_20() const { return ___correct_index_20; }
	inline int32_t* get_address_of_correct_index_20() { return &___correct_index_20; }
	inline void set_correct_index_20(int32_t value)
	{
		___correct_index_20 = value;
	}

	inline static int32_t get_offset_of_questionsUsed_21() { return static_cast<int32_t>(offsetof(BossQuestions_t4231512970_StaticFields, ___questionsUsed_21)); }
	inline List_1_t1885342859 * get_questionsUsed_21() const { return ___questionsUsed_21; }
	inline List_1_t1885342859 ** get_address_of_questionsUsed_21() { return &___questionsUsed_21; }
	inline void set_questionsUsed_21(List_1_t1885342859 * value)
	{
		___questionsUsed_21 = value;
		Il2CppCodeGenWriteBarrier(&___questionsUsed_21, value);
	}

	inline static int32_t get_offset_of_indexUsed_22() { return static_cast<int32_t>(offsetof(BossQuestions_t4231512970_StaticFields, ___indexUsed_22)); }
	inline List_1_t1440998580 * get_indexUsed_22() const { return ___indexUsed_22; }
	inline List_1_t1440998580 ** get_address_of_indexUsed_22() { return &___indexUsed_22; }
	inline void set_indexUsed_22(List_1_t1440998580 * value)
	{
		___indexUsed_22 = value;
		Il2CppCodeGenWriteBarrier(&___indexUsed_22, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
