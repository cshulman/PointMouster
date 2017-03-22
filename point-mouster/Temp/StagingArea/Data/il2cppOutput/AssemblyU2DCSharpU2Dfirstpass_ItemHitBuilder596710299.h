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

#include "AssemblyU2DCSharpU2Dfirstpass_HitBuilder_1_gen1110025559.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ItemHitBuilder
struct  ItemHitBuilder_t596710299  : public HitBuilder_1_t1110025559
{
public:
	// System.String ItemHitBuilder::transactionID
	String_t* ___transactionID_10;
	// System.String ItemHitBuilder::name
	String_t* ___name_11;
	// System.String ItemHitBuilder::SKU
	String_t* ___SKU_12;
	// System.Double ItemHitBuilder::price
	double ___price_13;
	// System.String ItemHitBuilder::category
	String_t* ___category_14;
	// System.Int64 ItemHitBuilder::quantity
	int64_t ___quantity_15;
	// System.String ItemHitBuilder::currencyCode
	String_t* ___currencyCode_16;

public:
	inline static int32_t get_offset_of_transactionID_10() { return static_cast<int32_t>(offsetof(ItemHitBuilder_t596710299, ___transactionID_10)); }
	inline String_t* get_transactionID_10() const { return ___transactionID_10; }
	inline String_t** get_address_of_transactionID_10() { return &___transactionID_10; }
	inline void set_transactionID_10(String_t* value)
	{
		___transactionID_10 = value;
		Il2CppCodeGenWriteBarrier(&___transactionID_10, value);
	}

	inline static int32_t get_offset_of_name_11() { return static_cast<int32_t>(offsetof(ItemHitBuilder_t596710299, ___name_11)); }
	inline String_t* get_name_11() const { return ___name_11; }
	inline String_t** get_address_of_name_11() { return &___name_11; }
	inline void set_name_11(String_t* value)
	{
		___name_11 = value;
		Il2CppCodeGenWriteBarrier(&___name_11, value);
	}

	inline static int32_t get_offset_of_SKU_12() { return static_cast<int32_t>(offsetof(ItemHitBuilder_t596710299, ___SKU_12)); }
	inline String_t* get_SKU_12() const { return ___SKU_12; }
	inline String_t** get_address_of_SKU_12() { return &___SKU_12; }
	inline void set_SKU_12(String_t* value)
	{
		___SKU_12 = value;
		Il2CppCodeGenWriteBarrier(&___SKU_12, value);
	}

	inline static int32_t get_offset_of_price_13() { return static_cast<int32_t>(offsetof(ItemHitBuilder_t596710299, ___price_13)); }
	inline double get_price_13() const { return ___price_13; }
	inline double* get_address_of_price_13() { return &___price_13; }
	inline void set_price_13(double value)
	{
		___price_13 = value;
	}

	inline static int32_t get_offset_of_category_14() { return static_cast<int32_t>(offsetof(ItemHitBuilder_t596710299, ___category_14)); }
	inline String_t* get_category_14() const { return ___category_14; }
	inline String_t** get_address_of_category_14() { return &___category_14; }
	inline void set_category_14(String_t* value)
	{
		___category_14 = value;
		Il2CppCodeGenWriteBarrier(&___category_14, value);
	}

	inline static int32_t get_offset_of_quantity_15() { return static_cast<int32_t>(offsetof(ItemHitBuilder_t596710299, ___quantity_15)); }
	inline int64_t get_quantity_15() const { return ___quantity_15; }
	inline int64_t* get_address_of_quantity_15() { return &___quantity_15; }
	inline void set_quantity_15(int64_t value)
	{
		___quantity_15 = value;
	}

	inline static int32_t get_offset_of_currencyCode_16() { return static_cast<int32_t>(offsetof(ItemHitBuilder_t596710299, ___currencyCode_16)); }
	inline String_t* get_currencyCode_16() const { return ___currencyCode_16; }
	inline String_t** get_address_of_currencyCode_16() { return &___currencyCode_16; }
	inline void set_currencyCode_16(String_t* value)
	{
		___currencyCode_16 = value;
		Il2CppCodeGenWriteBarrier(&___currencyCode_16, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
