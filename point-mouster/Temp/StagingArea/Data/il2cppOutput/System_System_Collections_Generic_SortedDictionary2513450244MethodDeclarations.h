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

// System.Collections.Generic.SortedDictionary`2/Node<System.Object,System.Object>
struct Node_t2513450244;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.RBTree/Node
struct Node_t2499136326;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "System_System_Collections_Generic_RBTree_Node2499136326.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_g38854645.h"
#include "mscorlib_System_Collections_DictionaryEntry3048875398.h"

// System.Void System.Collections.Generic.SortedDictionary`2/Node<System.Object,System.Object>::.ctor(TKey)
extern "C"  void Node__ctor_m4091545924_gshared (Node_t2513450244 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Node__ctor_m4091545924(__this, ___key0, method) ((  void (*) (Node_t2513450244 *, Il2CppObject *, const MethodInfo*))Node__ctor_m4091545924_gshared)(__this, ___key0, method)
// System.Void System.Collections.Generic.SortedDictionary`2/Node<System.Object,System.Object>::.ctor(TKey,TValue)
extern "C"  void Node__ctor_m2270571809_gshared (Node_t2513450244 * __this, Il2CppObject * ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Node__ctor_m2270571809(__this, ___key0, ___value1, method) ((  void (*) (Node_t2513450244 *, Il2CppObject *, Il2CppObject *, const MethodInfo*))Node__ctor_m2270571809_gshared)(__this, ___key0, ___value1, method)
// System.Void System.Collections.Generic.SortedDictionary`2/Node<System.Object,System.Object>::SwapValue(System.Collections.Generic.RBTree/Node)
extern "C"  void Node_SwapValue_m4043495997_gshared (Node_t2513450244 * __this, Node_t2499136326 * ___other0, const MethodInfo* method);
#define Node_SwapValue_m4043495997(__this, ___other0, method) ((  void (*) (Node_t2513450244 *, Node_t2499136326 *, const MethodInfo*))Node_SwapValue_m4043495997_gshared)(__this, ___other0, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.SortedDictionary`2/Node<System.Object,System.Object>::AsKV()
extern "C"  KeyValuePair_2_t38854645  Node_AsKV_m1661049880_gshared (Node_t2513450244 * __this, const MethodInfo* method);
#define Node_AsKV_m1661049880(__this, method) ((  KeyValuePair_2_t38854645  (*) (Node_t2513450244 *, const MethodInfo*))Node_AsKV_m1661049880_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.SortedDictionary`2/Node<System.Object,System.Object>::AsDE()
extern "C"  DictionaryEntry_t3048875398  Node_AsDE_m1705531881_gshared (Node_t2513450244 * __this, const MethodInfo* method);
#define Node_AsDE_m1705531881(__this, method) ((  DictionaryEntry_t3048875398  (*) (Node_t2513450244 *, const MethodInfo*))Node_AsDE_m1705531881_gshared)(__this, method)
