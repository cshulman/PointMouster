#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// HealthBar
struct HealthBar_t1323021899;

#include "codegen/il2cpp-codegen.h"

// System.Void HealthBar::.ctor()
extern "C"  void HealthBar__ctor_m1465823242 (HealthBar_t1323021899 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HealthBar::Start()
extern "C"  void HealthBar_Start_m736750566 (HealthBar_t1323021899 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HealthBar::Update()
extern "C"  void HealthBar_Update_m2981667631 (HealthBar_t1323021899 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single HealthBar::Map(System.Single,System.Single,System.Single,System.Single,System.Single)
extern "C"  float HealthBar_Map_m2304689753 (HealthBar_t1323021899 * __this, float ___value0, float ___inMin1, float ___inMax2, float ___outMin3, float ___outMax4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HealthBar::changeBar(System.Int32)
extern "C"  void HealthBar_changeBar_m2543428018 (HealthBar_t1323021899 * __this, int32_t ___change0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
