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

// PersistenceManager
struct PersistenceManager_t3756203822;
// IPersistence
struct IPersistence_t3549589326;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void PersistenceManager::.ctor()
extern "C"  void PersistenceManager__ctor_m3012046355 (PersistenceManager_t3756203822 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PersistenceManager::Awake()
extern "C"  void PersistenceManager_Awake_m605184990 (PersistenceManager_t3756203822 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PersistenceManager::Save(IPersistence)
extern "C"  void PersistenceManager_Save_m3276430762 (PersistenceManager_t3756203822 * __this, Il2CppObject * ___objectToSave0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object PersistenceManager::Load(System.String)
extern "C"  Il2CppObject * PersistenceManager_Load_m1891503324 (PersistenceManager_t3756203822 * __this, String_t* ___nameOfFile0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PersistenceManager::Delete(System.String)
extern "C"  void PersistenceManager_Delete_m408561552 (PersistenceManager_t3756203822 * __this, String_t* ___nameOfFile0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
