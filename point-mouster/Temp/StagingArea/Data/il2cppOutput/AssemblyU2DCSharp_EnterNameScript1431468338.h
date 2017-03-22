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
// EnterNameScript
struct EnterNameScript_t1431468338;
// UnityEngine.UI.Text
struct Text_t356221433;
// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EnterNameScript
struct  EnterNameScript_t1431468338  : public MonoBehaviour_t1158329972
{
public:
	// GoogleAnalyticsV4 EnterNameScript::googleAnalytics
	GoogleAnalyticsV4_t198817271 * ___googleAnalytics_2;
	// UnityEngine.UI.Text EnterNameScript::NameInputFieldText
	Text_t356221433 * ___NameInputFieldText_4;
	// UnityEngine.UI.Text EnterNameScript::RequiredText
	Text_t356221433 * ___RequiredText_5;
	// System.String EnterNameScript::Name
	String_t* ___Name_6;
	// System.Int32 EnterNameScript::ver
	int32_t ___ver_7;

public:
	inline static int32_t get_offset_of_googleAnalytics_2() { return static_cast<int32_t>(offsetof(EnterNameScript_t1431468338, ___googleAnalytics_2)); }
	inline GoogleAnalyticsV4_t198817271 * get_googleAnalytics_2() const { return ___googleAnalytics_2; }
	inline GoogleAnalyticsV4_t198817271 ** get_address_of_googleAnalytics_2() { return &___googleAnalytics_2; }
	inline void set_googleAnalytics_2(GoogleAnalyticsV4_t198817271 * value)
	{
		___googleAnalytics_2 = value;
		Il2CppCodeGenWriteBarrier(&___googleAnalytics_2, value);
	}

	inline static int32_t get_offset_of_NameInputFieldText_4() { return static_cast<int32_t>(offsetof(EnterNameScript_t1431468338, ___NameInputFieldText_4)); }
	inline Text_t356221433 * get_NameInputFieldText_4() const { return ___NameInputFieldText_4; }
	inline Text_t356221433 ** get_address_of_NameInputFieldText_4() { return &___NameInputFieldText_4; }
	inline void set_NameInputFieldText_4(Text_t356221433 * value)
	{
		___NameInputFieldText_4 = value;
		Il2CppCodeGenWriteBarrier(&___NameInputFieldText_4, value);
	}

	inline static int32_t get_offset_of_RequiredText_5() { return static_cast<int32_t>(offsetof(EnterNameScript_t1431468338, ___RequiredText_5)); }
	inline Text_t356221433 * get_RequiredText_5() const { return ___RequiredText_5; }
	inline Text_t356221433 ** get_address_of_RequiredText_5() { return &___RequiredText_5; }
	inline void set_RequiredText_5(Text_t356221433 * value)
	{
		___RequiredText_5 = value;
		Il2CppCodeGenWriteBarrier(&___RequiredText_5, value);
	}

	inline static int32_t get_offset_of_Name_6() { return static_cast<int32_t>(offsetof(EnterNameScript_t1431468338, ___Name_6)); }
	inline String_t* get_Name_6() const { return ___Name_6; }
	inline String_t** get_address_of_Name_6() { return &___Name_6; }
	inline void set_Name_6(String_t* value)
	{
		___Name_6 = value;
		Il2CppCodeGenWriteBarrier(&___Name_6, value);
	}

	inline static int32_t get_offset_of_ver_7() { return static_cast<int32_t>(offsetof(EnterNameScript_t1431468338, ___ver_7)); }
	inline int32_t get_ver_7() const { return ___ver_7; }
	inline int32_t* get_address_of_ver_7() { return &___ver_7; }
	inline void set_ver_7(int32_t value)
	{
		___ver_7 = value;
	}
};

struct EnterNameScript_t1431468338_StaticFields
{
public:
	// EnterNameScript EnterNameScript::Instance
	EnterNameScript_t1431468338 * ___Instance_3;

public:
	inline static int32_t get_offset_of_Instance_3() { return static_cast<int32_t>(offsetof(EnterNameScript_t1431468338_StaticFields, ___Instance_3)); }
	inline EnterNameScript_t1431468338 * get_Instance_3() const { return ___Instance_3; }
	inline EnterNameScript_t1431468338 ** get_address_of_Instance_3() { return &___Instance_3; }
	inline void set_Instance_3(EnterNameScript_t1431468338 * value)
	{
		___Instance_3 = value;
		Il2CppCodeGenWriteBarrier(&___Instance_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
