#include <javax/swing/tree/TreeNode.h>

#include <java/util/Enumeration.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Enumeration = ::java::util::Enumeration;

namespace javax {
	namespace swing {
		namespace tree {

$MethodInfo _TreeNode_MethodInfo_[] = {
	{"children", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<+Ljavax/swing/tree/TreeNode;>;", $PUBLIC | $ABSTRACT},
	{"getAllowsChildren", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"getChildAt", "(I)Ljavax/swing/tree/TreeNode;", nullptr, $PUBLIC | $ABSTRACT},
	{"getChildCount", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getIndex", "(Ljavax/swing/tree/TreeNode;)I", nullptr, $PUBLIC | $ABSTRACT},
	{"getParent", "()Ljavax/swing/tree/TreeNode;", nullptr, $PUBLIC | $ABSTRACT},
	{"isLeaf", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _TreeNode_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.swing.tree.TreeNode",
	nullptr,
	nullptr,
	nullptr,
	_TreeNode_MethodInfo_
};

$Object* allocate$TreeNode($Class* clazz) {
	return $of($alloc(TreeNode));
}

$Class* TreeNode::load$($String* name, bool initialize) {
	$loadClass(TreeNode, name, initialize, &_TreeNode_ClassInfo_, allocate$TreeNode);
	return class$;
}

$Class* TreeNode::class$ = nullptr;

		} // tree
	} // swing
} // javax