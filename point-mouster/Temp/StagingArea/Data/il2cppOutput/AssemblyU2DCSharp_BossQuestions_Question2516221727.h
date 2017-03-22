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
// System.Collections.Generic.List`1<System.String>
struct List_1_t1398341365;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BossQuestions/Question
struct  Question_t2516221727  : public Il2CppObject
{
public:
	// System.String BossQuestions/Question::question
	String_t* ___question_0;
	// System.Collections.Generic.List`1<System.String> BossQuestions/Question::choices
	List_1_t1398341365 * ___choices_1;
	// System.String BossQuestions/Question::answer
	String_t* ___answer_2;

public:
	inline static int32_t get_offset_of_question_0() { return static_cast<int32_t>(offsetof(Question_t2516221727, ___question_0)); }
	inline String_t* get_question_0() const { return ___question_0; }
	inline String_t** get_address_of_question_0() { return &___question_0; }
	inline void set_question_0(String_t* value)
	{
		___question_0 = value;
		Il2CppCodeGenWriteBarrier(&___question_0, value);
	}

	inline static int32_t get_offset_of_choices_1() { return static_cast<int32_t>(offsetof(Question_t2516221727, ___choices_1)); }
	inline List_1_t1398341365 * get_choices_1() const { return ___choices_1; }
	inline List_1_t1398341365 ** get_address_of_choices_1() { return &___choices_1; }
	inline void set_choices_1(List_1_t1398341365 * value)
	{
		___choices_1 = value;
		Il2CppCodeGenWriteBarrier(&___choices_1, value);
	}

	inline static int32_t get_offset_of_answer_2() { return static_cast<int32_t>(offsetof(Question_t2516221727, ___answer_2)); }
	inline String_t* get_answer_2() const { return ___answer_2; }
	inline String_t** get_address_of_answer_2() { return &___answer_2; }
	inline void set_answer_2(String_t* value)
	{
		___answer_2 = value;
		Il2CppCodeGenWriteBarrier(&___answer_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
