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
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.RBTree/Node>
struct IEnumerator_1_t4269627449;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>
struct List_1_t1868257458;
// System.Collections.Generic.RBTree/Node
struct Node_t2499136326;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "System_System_Collections_Generic_RBTree_NodeEnumer648190100.h"
#include "System_System_Collections_Generic_RBTree_Node2499136326.h"

// System.Void System.Collections.Generic.RBTree::.ctor(System.Object)
extern "C"  void RBTree__ctor_m2535208397 (RBTree_t1544615604 * __this, Il2CppObject * ___hlp0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.RBTree/Node> System.Collections.Generic.RBTree::System.Collections.Generic.IEnumerable<System.Collections.Generic.RBTree.Node>.GetEnumerator()
extern "C"  Il2CppObject* RBTree_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_RBTree_NodeU3E_GetEnumerator_m3412557486 (RBTree_t1544615604 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Generic.RBTree::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * RBTree_System_Collections_IEnumerable_GetEnumerator_m1477090404 (RBTree_t1544615604 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node> System.Collections.Generic.RBTree::alloc_path()
extern "C"  List_1_t1868257458 * RBTree_alloc_path_m3500173063 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.RBTree::release_path(System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>)
extern "C"  void RBTree_release_path_m145089350 (Il2CppObject * __this /* static, unused */, List_1_t1868257458 * ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.RBTree::Clear()
extern "C"  void RBTree_Clear_m452713382 (RBTree_t1544615604 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.RBTree::get_Count()
extern "C"  int32_t RBTree_get_Count_m4248632779 (RBTree_t1544615604 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.RBTree/NodeEnumerator System.Collections.Generic.RBTree::GetEnumerator()
extern "C"  NodeEnumerator_t648190100  RBTree_GetEnumerator_m3973894836 (RBTree_t1544615604 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.RBTree/Node System.Collections.Generic.RBTree::do_insert(System.Int32,System.Collections.Generic.RBTree/Node,System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>)
extern "C"  Node_t2499136326 * RBTree_do_insert_m3330241496 (RBTree_t1544615604 * __this, int32_t ___in_tree_cmp0, Node_t2499136326 * ___current1, List_1_t1868257458 * ___path2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.RBTree/Node System.Collections.Generic.RBTree::do_remove(System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>)
extern "C"  Node_t2499136326 * RBTree_do_remove_m1300011114 (RBTree_t1544615604 * __this, List_1_t1868257458 * ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.RBTree::rebalance_insert(System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>)
extern "C"  void RBTree_rebalance_insert_m779337910 (RBTree_t1544615604 * __this, List_1_t1868257458 * ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.RBTree::rebalance_delete(System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>)
extern "C"  void RBTree_rebalance_delete_m1773806460 (RBTree_t1544615604 * __this, List_1_t1868257458 * ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.RBTree::rebalance_insert__rotate_final(System.Int32,System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>)
extern "C"  void RBTree_rebalance_insert__rotate_final_m3178362865 (RBTree_t1544615604 * __this, int32_t ___curpos0, List_1_t1868257458 * ___path1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.RBTree::rebalance_delete__rotate_final(System.Int32,System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>)
extern "C"  void RBTree_rebalance_delete__rotate_final_m2368895051 (RBTree_t1544615604 * __this, int32_t ___curpos0, List_1_t1868257458 * ___path1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.RBTree::ensure_sibling_black(System.Int32,System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>)
extern "C"  int32_t RBTree_ensure_sibling_black_m373665857 (RBTree_t1544615604 * __this, int32_t ___curpos0, List_1_t1868257458 * ___path1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.RBTree::node_reparent(System.Collections.Generic.RBTree/Node,System.Collections.Generic.RBTree/Node,System.UInt32,System.Collections.Generic.RBTree/Node)
extern "C"  void RBTree_node_reparent_m2851909385 (RBTree_t1544615604 * __this, Node_t2499136326 * ___orig_parent0, Node_t2499136326 * ___orig1, uint32_t ___orig_size2, Node_t2499136326 * ___updated3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.RBTree/Node System.Collections.Generic.RBTree::right_most(System.Collections.Generic.RBTree/Node,System.Collections.Generic.RBTree/Node,System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>)
extern "C"  Node_t2499136326 * RBTree_right_most_m129601026 (Il2CppObject * __this /* static, unused */, Node_t2499136326 * ___current0, Node_t2499136326 * ___sibling1, List_1_t1868257458 * ___path2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
