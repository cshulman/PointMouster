#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// BookScript
struct BookScript_t2512012670;
// System.String[]
struct StringU5BU5D_t1642385972;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1398341365;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t1440998580;
// UnityEngine.UI.Text
struct Text_t356221433;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BookScript
struct  BookScript_t2512012670  : public MonoBehaviour_t1158329972
{
public:
	// System.String[] BookScript::words
	StringU5BU5D_t1642385972* ___words_5;
	// System.String[] BookScript::facts
	StringU5BU5D_t1642385972* ___facts_6;
	// System.Collections.Generic.List`1<System.String> BookScript::reviewWords
	List_1_t1398341365 * ___reviewWords_7;
	// System.Collections.Generic.List`1<System.Int32> BookScript::reviewIndices
	List_1_t1440998580 * ___reviewIndices_8;
	// System.Int32 BookScript::numBooks
	int32_t ___numBooks_10;
	// System.Int32 BookScript::maxBooks
	int32_t ___maxBooks_11;
	// UnityEngine.UI.Text BookScript::numBooksCollected
	Text_t356221433 * ___numBooksCollected_12;
	// System.Int32 BookScript::currentBook
	int32_t ___currentBook_13;

public:
	inline static int32_t get_offset_of_words_5() { return static_cast<int32_t>(offsetof(BookScript_t2512012670, ___words_5)); }
	inline StringU5BU5D_t1642385972* get_words_5() const { return ___words_5; }
	inline StringU5BU5D_t1642385972** get_address_of_words_5() { return &___words_5; }
	inline void set_words_5(StringU5BU5D_t1642385972* value)
	{
		___words_5 = value;
		Il2CppCodeGenWriteBarrier(&___words_5, value);
	}

	inline static int32_t get_offset_of_facts_6() { return static_cast<int32_t>(offsetof(BookScript_t2512012670, ___facts_6)); }
	inline StringU5BU5D_t1642385972* get_facts_6() const { return ___facts_6; }
	inline StringU5BU5D_t1642385972** get_address_of_facts_6() { return &___facts_6; }
	inline void set_facts_6(StringU5BU5D_t1642385972* value)
	{
		___facts_6 = value;
		Il2CppCodeGenWriteBarrier(&___facts_6, value);
	}

	inline static int32_t get_offset_of_reviewWords_7() { return static_cast<int32_t>(offsetof(BookScript_t2512012670, ___reviewWords_7)); }
	inline List_1_t1398341365 * get_reviewWords_7() const { return ___reviewWords_7; }
	inline List_1_t1398341365 ** get_address_of_reviewWords_7() { return &___reviewWords_7; }
	inline void set_reviewWords_7(List_1_t1398341365 * value)
	{
		___reviewWords_7 = value;
		Il2CppCodeGenWriteBarrier(&___reviewWords_7, value);
	}

	inline static int32_t get_offset_of_reviewIndices_8() { return static_cast<int32_t>(offsetof(BookScript_t2512012670, ___reviewIndices_8)); }
	inline List_1_t1440998580 * get_reviewIndices_8() const { return ___reviewIndices_8; }
	inline List_1_t1440998580 ** get_address_of_reviewIndices_8() { return &___reviewIndices_8; }
	inline void set_reviewIndices_8(List_1_t1440998580 * value)
	{
		___reviewIndices_8 = value;
		Il2CppCodeGenWriteBarrier(&___reviewIndices_8, value);
	}

	inline static int32_t get_offset_of_numBooks_10() { return static_cast<int32_t>(offsetof(BookScript_t2512012670, ___numBooks_10)); }
	inline int32_t get_numBooks_10() const { return ___numBooks_10; }
	inline int32_t* get_address_of_numBooks_10() { return &___numBooks_10; }
	inline void set_numBooks_10(int32_t value)
	{
		___numBooks_10 = value;
	}

	inline static int32_t get_offset_of_maxBooks_11() { return static_cast<int32_t>(offsetof(BookScript_t2512012670, ___maxBooks_11)); }
	inline int32_t get_maxBooks_11() const { return ___maxBooks_11; }
	inline int32_t* get_address_of_maxBooks_11() { return &___maxBooks_11; }
	inline void set_maxBooks_11(int32_t value)
	{
		___maxBooks_11 = value;
	}

	inline static int32_t get_offset_of_numBooksCollected_12() { return static_cast<int32_t>(offsetof(BookScript_t2512012670, ___numBooksCollected_12)); }
	inline Text_t356221433 * get_numBooksCollected_12() const { return ___numBooksCollected_12; }
	inline Text_t356221433 ** get_address_of_numBooksCollected_12() { return &___numBooksCollected_12; }
	inline void set_numBooksCollected_12(Text_t356221433 * value)
	{
		___numBooksCollected_12 = value;
		Il2CppCodeGenWriteBarrier(&___numBooksCollected_12, value);
	}

	inline static int32_t get_offset_of_currentBook_13() { return static_cast<int32_t>(offsetof(BookScript_t2512012670, ___currentBook_13)); }
	inline int32_t get_currentBook_13() const { return ___currentBook_13; }
	inline int32_t* get_address_of_currentBook_13() { return &___currentBook_13; }
	inline void set_currentBook_13(int32_t value)
	{
		___currentBook_13 = value;
	}
};

struct BookScript_t2512012670_StaticFields
{
public:
	// BookScript BookScript::bookControl
	BookScript_t2512012670 * ___bookControl_3;
	// System.Int32 BookScript::levelCount
	int32_t ___levelCount_4;
	// System.Collections.Generic.List`1<System.Int32> BookScript::indexUsed
	List_1_t1440998580 * ___indexUsed_9;

public:
	inline static int32_t get_offset_of_bookControl_3() { return static_cast<int32_t>(offsetof(BookScript_t2512012670_StaticFields, ___bookControl_3)); }
	inline BookScript_t2512012670 * get_bookControl_3() const { return ___bookControl_3; }
	inline BookScript_t2512012670 ** get_address_of_bookControl_3() { return &___bookControl_3; }
	inline void set_bookControl_3(BookScript_t2512012670 * value)
	{
		___bookControl_3 = value;
		Il2CppCodeGenWriteBarrier(&___bookControl_3, value);
	}

	inline static int32_t get_offset_of_levelCount_4() { return static_cast<int32_t>(offsetof(BookScript_t2512012670_StaticFields, ___levelCount_4)); }
	inline int32_t get_levelCount_4() const { return ___levelCount_4; }
	inline int32_t* get_address_of_levelCount_4() { return &___levelCount_4; }
	inline void set_levelCount_4(int32_t value)
	{
		___levelCount_4 = value;
	}

	inline static int32_t get_offset_of_indexUsed_9() { return static_cast<int32_t>(offsetof(BookScript_t2512012670_StaticFields, ___indexUsed_9)); }
	inline List_1_t1440998580 * get_indexUsed_9() const { return ___indexUsed_9; }
	inline List_1_t1440998580 ** get_address_of_indexUsed_9() { return &___indexUsed_9; }
	inline void set_indexUsed_9(List_1_t1440998580 * value)
	{
		___indexUsed_9 = value;
		Il2CppCodeGenWriteBarrier(&___indexUsed_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
