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

// PlayerController
struct PlayerController_t4148409433;
// UnityEngine.Collider2D
struct Collider2D_t646061738;
// UnityEngine.Collision2D
struct Collision2D_t1539500754;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Collider2D646061738.h"
#include "UnityEngine_UnityEngine_Collision2D1539500754.h"
#include "mscorlib_System_String2029220233.h"

// System.Void PlayerController::.ctor()
extern "C"  void PlayerController__ctor_m3280132936 (PlayerController_t4148409433 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::Start()
extern "C"  void PlayerController_Start_m3606284888 (PlayerController_t4148409433 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::Flip(System.Single)
extern "C"  void PlayerController_Flip_m4023040622 (PlayerController_t4148409433 * __this, float ___horizontal0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::Update()
extern "C"  void PlayerController_Update_m4228472513 (PlayerController_t4148409433 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::OnTriggerEnter2D(UnityEngine.Collider2D)
extern "C"  void PlayerController_OnTriggerEnter2D_m429568576 (PlayerController_t4148409433 * __this, Collider2D_t646061738 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::OnCollisionEnter2D(UnityEngine.Collision2D)
extern "C"  void PlayerController_OnCollisionEnter2D_m3521110746 (PlayerController_t4148409433 * __this, Collision2D_t1539500754 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::OnCollisionExit2D(UnityEngine.Collision2D)
extern "C"  void PlayerController_OnCollisionExit2D_m1599750920 (PlayerController_t4148409433 * __this, Collision2D_t1539500754 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::addBook(System.String)
extern "C"  void PlayerController_addBook_m1284560008 (PlayerController_t4148409433 * __this, String_t* ___bName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
