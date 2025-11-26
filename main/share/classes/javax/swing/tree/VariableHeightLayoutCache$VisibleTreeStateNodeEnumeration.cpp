#include <javax/swing/tree/VariableHeightLayoutCache$VisibleTreeStateNodeEnumeration.h>

#include <java/util/NoSuchElementException.h>
#include <javax/swing/tree/DefaultMutableTreeNode.h>
#include <javax/swing/tree/MutableTreeNode.h>
#include <javax/swing/tree/TreeNode.h>
#include <javax/swing/tree/TreePath.h>
#include <javax/swing/tree/VariableHeightLayoutCache$TreeStateNode.h>
#include <javax/swing/tree/VariableHeightLayoutCache.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Enumeration = ::java::util::Enumeration;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $DefaultMutableTreeNode = ::javax::swing::tree::DefaultMutableTreeNode;
using $MutableTreeNode = ::javax::swing::tree::MutableTreeNode;
using $TreeNode = ::javax::swing::tree::TreeNode;
using $TreePath = ::javax::swing::tree::TreePath;
using $VariableHeightLayoutCache = ::javax::swing::tree::VariableHeightLayoutCache;
using $VariableHeightLayoutCache$TreeStateNode = ::javax::swing::tree::VariableHeightLayoutCache$TreeStateNode;

namespace javax {
	namespace swing {
		namespace tree {

$FieldInfo _VariableHeightLayoutCache$VisibleTreeStateNodeEnumeration_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/tree/VariableHeightLayoutCache;", nullptr, $FINAL | $SYNTHETIC, $field(VariableHeightLayoutCache$VisibleTreeStateNodeEnumeration, this$0)},
	{"parent", "Ljavax/swing/tree/VariableHeightLayoutCache$TreeStateNode;", nullptr, $PROTECTED, $field(VariableHeightLayoutCache$VisibleTreeStateNodeEnumeration, parent)},
	{"nextIndex", "I", nullptr, $PROTECTED, $field(VariableHeightLayoutCache$VisibleTreeStateNodeEnumeration, nextIndex)},
	{"childCount", "I", nullptr, $PROTECTED, $field(VariableHeightLayoutCache$VisibleTreeStateNodeEnumeration, childCount)},
	{}
};

$MethodInfo _VariableHeightLayoutCache$VisibleTreeStateNodeEnumeration_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/tree/VariableHeightLayoutCache;Ljavax/swing/tree/VariableHeightLayoutCache$TreeStateNode;)V", nullptr, $PROTECTED, $method(static_cast<void(VariableHeightLayoutCache$VisibleTreeStateNodeEnumeration::*)($VariableHeightLayoutCache*,$VariableHeightLayoutCache$TreeStateNode*)>(&VariableHeightLayoutCache$VisibleTreeStateNodeEnumeration::init$))},
	{"<init>", "(Ljavax/swing/tree/VariableHeightLayoutCache;Ljavax/swing/tree/VariableHeightLayoutCache$TreeStateNode;I)V", nullptr, $PROTECTED, $method(static_cast<void(VariableHeightLayoutCache$VisibleTreeStateNodeEnumeration::*)($VariableHeightLayoutCache*,$VariableHeightLayoutCache$TreeStateNode*,int32_t)>(&VariableHeightLayoutCache$VisibleTreeStateNodeEnumeration::init$))},
	{"findNextValidParent", "()Z", nullptr, $PROTECTED},
	{"hasMoreElements", "()Z", nullptr, $PUBLIC},
	{"nextElement", "()Ljavax/swing/tree/TreePath;", nullptr, $PUBLIC},
	{"updateNextIndex", "()Z", nullptr, $PROTECTED},
	{"updateNextObject", "()V", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _VariableHeightLayoutCache$VisibleTreeStateNodeEnumeration_InnerClassesInfo_[] = {
	{"javax.swing.tree.VariableHeightLayoutCache$VisibleTreeStateNodeEnumeration", "javax.swing.tree.VariableHeightLayoutCache", "VisibleTreeStateNodeEnumeration", $PRIVATE},
	{}
};

$ClassInfo _VariableHeightLayoutCache$VisibleTreeStateNodeEnumeration_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.tree.VariableHeightLayoutCache$VisibleTreeStateNodeEnumeration",
	"java.lang.Object",
	"java.util.Enumeration",
	_VariableHeightLayoutCache$VisibleTreeStateNodeEnumeration_FieldInfo_,
	_VariableHeightLayoutCache$VisibleTreeStateNodeEnumeration_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Enumeration<Ljavax/swing/tree/TreePath;>;",
	nullptr,
	_VariableHeightLayoutCache$VisibleTreeStateNodeEnumeration_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.tree.VariableHeightLayoutCache"
};

$Object* allocate$VariableHeightLayoutCache$VisibleTreeStateNodeEnumeration($Class* clazz) {
	return $of($alloc(VariableHeightLayoutCache$VisibleTreeStateNodeEnumeration));
}

void VariableHeightLayoutCache$VisibleTreeStateNodeEnumeration::init$($VariableHeightLayoutCache* this$0, $VariableHeightLayoutCache$TreeStateNode* node) {
	VariableHeightLayoutCache$VisibleTreeStateNodeEnumeration::init$(this$0, node, -1);
}

void VariableHeightLayoutCache$VisibleTreeStateNodeEnumeration::init$($VariableHeightLayoutCache* this$0, $VariableHeightLayoutCache$TreeStateNode* parent, int32_t startIndex) {
	$set(this, this$0, this$0);
	$set(this, parent, parent);
	this->nextIndex = startIndex;
	this->childCount = $nc(this->parent)->getChildCount();
}

bool VariableHeightLayoutCache$VisibleTreeStateNodeEnumeration::hasMoreElements() {
	return (this->parent != nullptr);
}

$Object* VariableHeightLayoutCache$VisibleTreeStateNodeEnumeration::nextElement() {
	$useLocalCurrentObjectStackCache();
	if (!hasMoreElements()) {
		$throwNew($NoSuchElementException, "No more visible paths"_s);
	}
	$var($TreePath, retObject, nullptr);
	if (this->nextIndex == -1) {
		$assign(retObject, $nc(this->parent)->getTreePath());
	} else {
		$var($VariableHeightLayoutCache$TreeStateNode, node, $cast($VariableHeightLayoutCache$TreeStateNode, $nc(this->parent)->getChildAt(this->nextIndex)));
		$assign(retObject, $nc(node)->getTreePath());
	}
	updateNextObject();
	return $of(retObject);
}

void VariableHeightLayoutCache$VisibleTreeStateNodeEnumeration::updateNextObject() {
	if (!updateNextIndex()) {
		findNextValidParent();
	}
}

bool VariableHeightLayoutCache$VisibleTreeStateNodeEnumeration::findNextValidParent() {
	$useLocalCurrentObjectStackCache();
	if (this->parent == this->this$0->root) {
		$set(this, parent, nullptr);
		return false;
	}
	while (this->parent != nullptr) {
		$var($VariableHeightLayoutCache$TreeStateNode, newParent, $cast($VariableHeightLayoutCache$TreeStateNode, $nc(this->parent)->getParent()));
		if (newParent != nullptr) {
			this->nextIndex = newParent->getIndex(this->parent);
			$set(this, parent, newParent);
			this->childCount = $nc(this->parent)->getChildCount();
			if (updateNextIndex()) {
				return true;
			}
		} else {
			$set(this, parent, nullptr);
		}
	}
	return false;
}

bool VariableHeightLayoutCache$VisibleTreeStateNodeEnumeration::updateNextIndex() {
	bool var$0 = (this->nextIndex == -1 && !$nc(this->parent)->isExpanded()) || this->childCount == 0;
	if (var$0 || ++this->nextIndex >= this->childCount) {
		return false;
	}
	$var($VariableHeightLayoutCache$TreeStateNode, child, $cast($VariableHeightLayoutCache$TreeStateNode, $nc(this->parent)->getChildAt(this->nextIndex)));
	if (child != nullptr && child->isExpanded()) {
		$set(this, parent, child);
		this->nextIndex = -1;
		this->childCount = child->getChildCount();
	}
	return true;
}

VariableHeightLayoutCache$VisibleTreeStateNodeEnumeration::VariableHeightLayoutCache$VisibleTreeStateNodeEnumeration() {
}

$Class* VariableHeightLayoutCache$VisibleTreeStateNodeEnumeration::load$($String* name, bool initialize) {
	$loadClass(VariableHeightLayoutCache$VisibleTreeStateNodeEnumeration, name, initialize, &_VariableHeightLayoutCache$VisibleTreeStateNodeEnumeration_ClassInfo_, allocate$VariableHeightLayoutCache$VisibleTreeStateNodeEnumeration);
	return class$;
}

$Class* VariableHeightLayoutCache$VisibleTreeStateNodeEnumeration::class$ = nullptr;

		} // tree
	} // swing
} // javax