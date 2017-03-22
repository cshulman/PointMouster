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

#include "AssemblyU2DCSharpU2Dfirstpass_HitBuilder_1_gen3775597352.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TransactionHitBuilder
struct  TransactionHitBuilder_t3262282092  : public HitBuilder_1_t3775597352
{
public:
	// System.String TransactionHitBuilder::transactionID
	String_t* ___transactionID_10;
	// System.String TransactionHitBuilder::affiliation
	String_t* ___affiliation_11;
	// System.Double TransactionHitBuilder::revenue
	double ___revenue_12;
	// System.Double TransactionHitBuilder::tax
	double ___tax_13;
	// System.Double TransactionHitBuilder::shipping
	double ___shipping_14;
	// System.String TransactionHitBuilder::currencyCode
	String_t* ___currencyCode_15;

public:
	inline static int32_t get_offset_of_transactionID_10() { return static_cast<int32_t>(offsetof(TransactionHitBuilder_t3262282092, ___transactionID_10)); }
	inline String_t* get_transactionID_10() const { return ___transactionID_10; }
	inline String_t** get_address_of_transactionID_10() { return &___transactionID_10; }
	inline void set_transactionID_10(String_t* value)
	{
		___transactionID_10 = value;
		Il2CppCodeGenWriteBarrier(&___transactionID_10, value);
	}

	inline static int32_t get_offset_of_affiliation_11() { return static_cast<int32_t>(offsetof(TransactionHitBuilder_t3262282092, ___affiliation_11)); }
	inline String_t* get_affiliation_11() const { return ___affiliation_11; }
	inline String_t** get_address_of_affiliation_11() { return &___affiliation_11; }
	inline void set_affiliation_11(String_t* value)
	{
		___affiliation_11 = value;
		Il2CppCodeGenWriteBarrier(&___affiliation_11, value);
	}

	inline static int32_t get_offset_of_revenue_12() { return static_cast<int32_t>(offsetof(TransactionHitBuilder_t3262282092, ___revenue_12)); }
	inline double get_revenue_12() const { return ___revenue_12; }
	inline double* get_address_of_revenue_12() { return &___revenue_12; }
	inline void set_revenue_12(double value)
	{
		___revenue_12 = value;
	}

	inline static int32_t get_offset_of_tax_13() { return static_cast<int32_t>(offsetof(TransactionHitBuilder_t3262282092, ___tax_13)); }
	inline double get_tax_13() const { return ___tax_13; }
	inline double* get_address_of_tax_13() { return &___tax_13; }
	inline void set_tax_13(double value)
	{
		___tax_13 = value;
	}

	inline static int32_t get_offset_of_shipping_14() { return static_cast<int32_t>(offsetof(TransactionHitBuilder_t3262282092, ___shipping_14)); }
	inline double get_shipping_14() const { return ___shipping_14; }
	inline double* get_address_of_shipping_14() { return &___shipping_14; }
	inline void set_shipping_14(double value)
	{
		___shipping_14 = value;
	}

	inline static int32_t get_offset_of_currencyCode_15() { return static_cast<int32_t>(offsetof(TransactionHitBuilder_t3262282092, ___currencyCode_15)); }
	inline String_t* get_currencyCode_15() const { return ___currencyCode_15; }
	inline String_t** get_address_of_currencyCode_15() { return &___currencyCode_15; }
	inline void set_currencyCode_15(String_t* value)
	{
		___currencyCode_15 = value;
		Il2CppCodeGenWriteBarrier(&___currencyCode_15, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
