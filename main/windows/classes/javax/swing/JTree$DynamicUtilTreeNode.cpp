#include <javax/swing/JTree$DynamicUtilTreeNode.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Enumeration.h>
#include <java/util/Hashtable.h>
#include <java/util/Vector.h>
#include <javax/swing/JTree.h>
#include <javax/swing/tree/DefaultMutableTreeNode.h>
#include <javax/swing/tree/MutableTreeNode.h>
#include <javax/swing/tree/TreeNode.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Enumeration = ::java::util::Enumeration;
using $Hashtable = ::java::util::Hashtable;
using $Vector = ::java::util::Vector;
using $JTree = ::javax::swing::JTree;
using $DefaultMutableTreeNode = ::javax::swing::tree::DefaultMutableTreeNode;
using $MutableTreeNode = ::javax::swing::tree::MutableTreeNode;
using $TreeNode = ::javax::swing::tree::TreeNode;

namespace javax {
	namespace swing {

$FieldInfo _JTree$DynamicUtilTreeNode_FieldInfo_[] = {
	{"hasChildren", "Z", nullptr, $PROTECTED, $field(JTree$DynamicUtilTreeNode, hasChildren)},
	{"childValue", "Ljava/lang/Object;", nullptr, $PROTECTED, $field(JTree$DynamicUtilTreeNode, childValue)},
	{"loadedChildren", "Z", nullptr, $PROTECTED, $field(JTree$DynamicUtilTreeNode, loadedChildren)},
	{}
};

$MethodInfo _JTree$DynamicUtilTreeNode_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(JTree$DynamicUtilTreeNode::*)(Object$*,Object$*)>(&JTree$DynamicUtilTreeNode::init$))},
	{"children", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<Ljavax/swing/tree/TreeNode;>;", $PUBLIC},
	{"createChildren", "(Ljavax/swing/tree/DefaultMutableTreeNode;Ljava/lang/Object;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($DefaultMutableTreeNode*,Object$*)>(&JTree$DynamicUtilTreeNode::createChildren))},
	{"getChildAt", "(I)Ljavax/swing/tree/TreeNode;", nullptr, $PUBLIC},
	{"getChildCount", "()I", nullptr, $PUBLIC},
	{"isLeaf", "()Z", nullptr, $PUBLIC},
	{"loadChildren", "()V", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _JTree$DynamicUtilTreeNode_InnerClassesInfo_[] = {
	{"javax.swing.JTree$DynamicUtilTreeNode", "javax.swing.JTree", "DynamicUtilTreeNode", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _JTree$DynamicUtilTreeNode_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.JTree$DynamicUtilTreeNode",
	"javax.swing.tree.DefaultMutableTreeNode",
	nullptr,
	_JTree$DynamicUtilTreeNode_FieldInfo_,
	_JTree$DynamicUtilTreeNode_MethodInfo_,
	nullptr,
	nullptr,
	_JTree$DynamicUtilTreeNode_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JTree"
};

$Object* allocate$JTree$DynamicUtilTreeNode($Class* clazz) {
	return $of($alloc(JTree$DynamicUtilTreeNode));
}

void JTree$DynamicUtilTreeNode::createChildren($DefaultMutableTreeNode* parent, Object$* children) {
	$init(JTree$DynamicUtilTreeNode);
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($Vector, children)) {
		$var($Vector, childVector, $cast($Vector, children));
		{
			int32_t counter = 0;
			int32_t maxCounter = $nc(childVector)->size();
			for (; counter < maxCounter; ++counter) {
				$var($Object, var$0, childVector->elementAt(counter));
				$nc(parent)->add($$new(JTree$DynamicUtilTreeNode, var$0, $(childVector->elementAt(counter))));
			}
		}
	} else if ($instanceOf($Hashtable, children)) {
		$var($Hashtable, childHT, $cast($Hashtable, children));
		$var($Enumeration, keys, $nc(childHT)->keys());
		$var($Object, aKey, nullptr);
		while ($nc(keys)->hasMoreElements()) {
			$assign(aKey, keys->nextElement());
			$nc(parent)->add($$new(JTree$DynamicUtilTreeNode, aKey, $(childHT->get(aKey))));
		}
	} else if ($instanceOf($ObjectArray, children)) {
		$var($ObjectArray, childArray, $cast($ObjectArray, children));
		{
			int32_t counter = 0;
			int32_t maxCounter = $nc(childArray)->length;
			for (; counter < maxCounter; ++counter) {
				$nc(parent)->add($$new(JTree$DynamicUtilTreeNode, childArray->get(counter), childArray->get(counter)));
			}
		}
	}
}

void JTree$DynamicUtilTreeNode::init$(Object$* value, Object$* children) {
	$DefaultMutableTreeNode::init$(value);
	this->loadedChildren = false;
	$set(this, childValue, children);
	if (children != nullptr) {
		if ($instanceOf($Vector, children)) {
			setAllowsChildren(true);
		} else if ($instanceOf($Hashtable, children)) {
			setAllowsChildren(true);
		} else if ($instanceOf($ObjectArray, children)) {
			setAllowsChildren(true);
		} else {
			setAllowsChildren(false);
		}
	} else {
		setAllowsChildren(false);
	}
}

bool JTree$DynamicUtilTreeNode::isLeaf() {
	return !getAllowsChildren();
}

int32_t JTree$DynamicUtilTreeNode::getChildCount() {
	if (!this->loadedChildren) {
		loadChildren();
	}
	return $DefaultMutableTreeNode::getChildCount();
}

void JTree$DynamicUtilTreeNode::loadChildren() {
	this->loadedChildren = true;
	createChildren(this, this->childValue);
}

$TreeNode* JTree$DynamicUtilTreeNode::getChildAt(int32_t index) {
	if (!this->loadedChildren) {
		loadChildren();
	}
	return $DefaultMutableTreeNode::getChildAt(index);
}

$Enumeration* JTree$DynamicUtilTreeNode::children() {
	if (!this->loadedChildren) {
		loadChildren();
	}
	return $DefaultMutableTreeNode::children();
}

JTree$DynamicUtilTreeNode::JTree$DynamicUtilTreeNode() {
}

$Class* JTree$DynamicUtilTreeNode::load$($String* name, bool initialize) {
	$loadClass(JTree$DynamicUtilTreeNode, name, initialize, &_JTree$DynamicUtilTreeNode_ClassInfo_, allocate$JTree$DynamicUtilTreeNode);
	return class$;
}

$Class* JTree$DynamicUtilTreeNode::class$ = nullptr;

	} // swing
} // javax