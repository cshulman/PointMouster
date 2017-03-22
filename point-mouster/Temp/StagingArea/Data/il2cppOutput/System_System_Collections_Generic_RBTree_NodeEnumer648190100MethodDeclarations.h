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

// System.Collections.Generic.RBTree
struct RBTree_t1544615604;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.RBTree/Node
struct Node_t2499136326;
// System.Collections.Generic.RBTree/NodeEnumerator
struct NodeEnumerator_t648190100;
struct NodeEnumerator_t648190100_marshaled_pinvoke;
struct NodeEnumerator_t648190100_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Collections_Generic_RBTree_NodeEnumer648190100.h"
#include "System_System_Collections_Generic_RBTree1544615604.h"

// System.Void System.Collections.Generic.RBTree/NodeEnumerator::.ctor(System.Collections.Generic.RBTree)
extern "C"  void NodeEnumerator__ctor_m3411227341 (NodeEnumerator_t648190100 * __this, RBTree_t1544615604 * ___tree0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Generic.RBTree/NodeEnumerator::System.Collections.IEnumerator.get_Current()
extern "C"  Il2CppObject * NodeEnumerator_System_Collections_IEnumerator_get_Current_m4244846678 (NodeEnumerator_t648190100 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.RBTree/NodeEnumerator::Reset()
extern "C"  void NodeEnumerator_Reset_m1401118445 (NodeEnumerator_t648190100 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.RBTree/Node System.Collections.Generic.RBTree/NodeEnumerator::get_Current()
extern "C"  Node_t2499136326 * NodeEnumerator_get_Current_m300427921 (NodeEnumerator_t648190100 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.RBTree/NodeEnumerator::MoveNext()
extern "C"  bool NodeEnumerator_MoveNext_m3617254344 (NodeEnumerator_t648190100 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.RBTree/NodeEnumerator::Dispose()
extern "C"  void NodeEnumerator_Dispose_m475269499 (NodeEnumerator_t648190100 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.RBTree/NodeEnumerator::check_version()
extern "C"  void NodeEnumerator_check_version_m1999562667 (NodeEnumerator_t648190100 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.RBTree/NodeEnumerator::check_current()
extern "C"  void NodeEnumerator_check_current_m135648288 (NodeEnumerator_t648190100 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct NodeEnumerator_t648190100;
struct NodeEnumerator_t648190100_marshaled_pinvoke;

extern "C" void NodeEnumerator_t648190100_marshal_pinvoke(const NodeEnumerator_t648190100& unmarshaled, NodeEnumerator_t648190100_marshaled_pinvoke& marshaled);
extern "C" void NodeEnumerator_t648190100_marshal_pinvoke_back(const NodeEnumerator_t648190100_marshaled_pinvoke& marshaled, NodeEnumerator_t648190100& unmarshaled);
extern "C" void NodeEnumerator_t648190100_marshal_pinvoke_cleanup(NodeEnumerator_t648190100_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct NodeEnumerator_t648190100;
struct NodeEnumerator_t648190100_marshaled_com;

extern "C" void NodeEnumerator_t648190100_marshal_com(const NodeEnumerator_t648190100& unmarshaled, NodeEnumerator_t648190100_marshaled_com& marshaled);
extern "C" void NodeEnumerator_t648190100_marshal_com_back(const NodeEnumerator_t648190100_marshaled_com& marshaled, NodeEnumerator_t648190100& unmarshaled);
extern "C" void NodeEnumerator_t648190100_marshal_com_cleanup(NodeEnumerator_t648190100_marshaled_com& marshaled);
