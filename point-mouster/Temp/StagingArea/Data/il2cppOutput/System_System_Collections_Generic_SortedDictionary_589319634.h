#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.IComparer`1<System.Object>
struct IComparer_1_t643912417;
// System.Collections.Generic.SortedDictionary`2/NodeHelper<System.Object,System.Object>
struct NodeHelper_t589319634;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.SortedDictionary`2/NodeHelper<System.Object,System.Object>
struct  NodeHelper_t589319634  : public Il2CppObject
{
public:
	// System.Collections.Generic.IComparer`1<TKey> System.Collections.Generic.SortedDictionary`2/NodeHelper::cmp
	Il2CppObject* ___cmp_0;

public:
	inline static int32_t get_offset_of_cmp_0() { return static_cast<int32_t>(offsetof(NodeHelper_t589319634, ___cmp_0)); }
	inline Il2CppObject* get_cmp_0() const { return ___cmp_0; }
	inline Il2CppObject** get_address_of_cmp_0() { return &___cmp_0; }
	inline void set_cmp_0(Il2CppObject* value)
	{
		___cmp_0 = value;
		Il2CppCodeGenWriteBarrier(&___cmp_0, value);
	}
};

struct NodeHelper_t589319634_StaticFields
{
public:
	// System.Collections.Generic.SortedDictionary`2/NodeHelper<TKey,TValue> System.Collections.Generic.SortedDictionary`2/NodeHelper::Default
	NodeHelper_t589319634 * ___Default_1;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(NodeHelper_t589319634_StaticFields, ___Default_1)); }
	inline NodeHelper_t589319634 * get_Default_1() const { return ___Default_1; }
	inline NodeHelper_t589319634 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(NodeHelper_t589319634 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier(&___Default_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
