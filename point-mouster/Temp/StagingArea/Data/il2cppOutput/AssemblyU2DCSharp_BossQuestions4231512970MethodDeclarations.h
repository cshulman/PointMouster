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

// BossQuestions
struct BossQuestions_t4231512970;
// System.String
struct String_t;
// UnityEngine.Collider2D
struct Collider2D_t646061738;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_Collider2D646061738.h"

// System.Void BossQuestions::.ctor()
extern "C"  void BossQuestions__ctor_m961505931 (BossQuestions_t4231512970 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BossQuestions::Start()
extern "C"  void BossQuestions_Start_m1105726927 (BossQuestions_t4231512970 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BossQuestions::Update()
extern "C"  void BossQuestions_Update_m2168663960 (BossQuestions_t4231512970 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BossQuestions::getQuestionID()
extern "C"  int32_t BossQuestions_getQuestionID_m519209146 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String BossQuestions::getAnswer()
extern "C"  String_t* BossQuestions_getAnswer_m3799747926 (BossQuestions_t4231512970 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BossQuestions::isInRevInd(System.Int32)
extern "C"  bool BossQuestions_isInRevInd_m261418053 (BossQuestions_t4231512970 * __this, int32_t ___check0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BossQuestions::isRevWord(System.String)
extern "C"  bool BossQuestions_isRevWord_m1079634152 (BossQuestions_t4231512970 * __this, String_t* ___check0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String BossQuestions::getQuestionTempStr()
extern "C"  String_t* BossQuestions_getQuestionTempStr_m163568423 (BossQuestions_t4231512970 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BossQuestions::pickQuestion()
extern "C"  int32_t BossQuestions_pickQuestion_m509422122 (BossQuestions_t4231512970 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BossQuestions::checkAnswer(System.String)
extern "C"  bool BossQuestions_checkAnswer_m1449437555 (BossQuestions_t4231512970 * __this, String_t* ___playerAnswer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BossQuestions::OnTriggerEnter2D(UnityEngine.Collider2D)
extern "C"  void BossQuestions_OnTriggerEnter2D_m801461239 (BossQuestions_t4231512970 * __this, Collider2D_t646061738 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
