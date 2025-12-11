#include <javax/swing/tree/FixedHeightLayoutCache$VisibleFHTreeStateNodeEnumeration.h>

#include <java/util/NoSuchElementException.h>
#include <javax/swing/tree/FixedHeightLayoutCache$FHTreeStateNode.h>
#include <javax/swing/tree/FixedHeightLayoutCache.h>
#include <javax/swing/tree/TreeModel.h>
#include <javax/swing/tree/TreeNode.h>
#include <javax/swing/tree/TreePath.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $FixedHeightLayoutCache = ::javax::swing::tree::FixedHeightLayoutCache;
using $FixedHeightLayoutCache$FHTreeStateNode = ::javax::swing::tree::FixedHeightLayoutCache$FHTreeStateNode;
using $TreeModel = ::javax::swing::tree::TreeModel;
using $TreePath = ::javax::swing::tree::TreePath;

namespace javax {
	namespace swing {
		namespace tree {

$FieldInfo _FixedHeightLayoutCache$VisibleFHTreeStateNodeEnumeration_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/tree/FixedHeightLayoutCache;", nullptr, $FINAL | $SYNTHETIC, $field(FixedHeightLayoutCache$VisibleFHTreeStateNodeEnumeration, this$0)},
	{"parent", "Ljavax/swing/tree/FixedHeightLayoutCache$FHTreeStateNode;", nullptr, $PROTECTED, $field(FixedHeightLayoutCache$VisibleFHTreeStateNodeEnumeration, parent)},
	{"nextIndex", "I", nullptr, $PROTECTED, $field(FixedHeightLayoutCache$VisibleFHTreeStateNodeEnumeration, nextIndex)},
	{"childCount", "I", nullptr, $PROTECTED, $field(FixedHeightLayoutCache$VisibleFHTreeStateNodeEnumeration, childCount)},
	{}
};

$MethodInfo _FixedHeightLayoutCache$VisibleFHTreeStateNodeEnumeration_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/tree/FixedHeightLayoutCache;Ljavax/swing/tree/FixedHeightLayoutCache$FHTreeStateNode;)V", nullptr, $PROTECTED, $method(static_cast<void(FixedHeightLayoutCache$VisibleFHTreeStateNodeEnumeration::*)($FixedHeightLayoutCache*,$FixedHeightLayoutCache$FHTreeStateNode*)>(&FixedHeightLayoutCache$VisibleFHTreeStateNodeEnumeration::init$))},
	{"<init>", "(Ljavax/swing/tree/FixedHeightLayoutCache;Ljavax/swing/tree/FixedHeightLayoutCache$FHTreeStateNode;I)V", nullptr, $PROTECTED, $method(static_cast<void(FixedHeightLayoutCache$VisibleFHTreeStateNodeEnumeration::*)($FixedHeightLayoutCache*,$FixedHeightLayoutCache$FHTreeStateNode*,int32_t)>(&FixedHeightLayoutCache$VisibleFHTreeStateNodeEnumeration::init$))},
	{"findNextValidParent", "()Z", nullptr, $PROTECTED},
	{"hasMoreElements", "()Z", nullptr, $PUBLIC},
	{"nextElement", "()Ljavax/swing/tree/TreePath;", nullptr, $PUBLIC},
	{"updateNextIndex", "()Z", nullptr, $PROTECTED},
	{"updateNextObject", "()V", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _FixedHeightLayoutCache$VisibleFHTreeStateNodeEnumeration_InnerClassesInfo_[] = {
	{"javax.swing.tree.FixedHeightLayoutCache$VisibleFHTreeStateNodeEnumeration", "javax.swing.tree.FixedHeightLayoutCache", "VisibleFHTreeStateNodeEnumeration", $PRIVATE},
	{}
};

$ClassInfo _FixedHeightLayoutCache$VisibleFHTreeStateNodeEnumeration_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.tree.FixedHeightLayoutCache$VisibleFHTreeStateNodeEnumeration",
	"java.lang.Object",
	"java.util.Enumeration",
	_FixedHeightLayoutCache$VisibleFHTreeStateNodeEnumeration_FieldInfo_,
	_FixedHeightLayoutCache$VisibleFHTreeStateNodeEnumeration_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Enumeration<Ljavax/swing/tree/TreePath;>;",
	nullptr,
	_FixedHeightLayoutCache$VisibleFHTreeStateNodeEnumeration_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.tree.FixedHeightLayoutCache"
};

$Object* allocate$FixedHeightLayoutCache$VisibleFHTreeStateNodeEnumeration($Class* clazz) {
	return $of($alloc(FixedHeightLayoutCache$VisibleFHTreeStateNodeEnumeration));
}

void FixedHeightLayoutCache$VisibleFHTreeStateNodeEnumeration::init$($FixedHeightLayoutCache* this$0, $FixedHeightLayoutCache$FHTreeStateNode* node) {
	FixedHeightLayoutCache$VisibleFHTreeStateNodeEnumeration::init$(this$0, node, -1);
}

void FixedHeightLayoutCache$VisibleFHTreeStateNodeEnumeration::init$($FixedHeightLayoutCache* this$0, $FixedHeightLayoutCache$FHTreeStateNode* parent, int32_t startIndex) {
	$set(this, this$0, this$0);
	$set(this, parent, parent);
	this->nextIndex = startIndex;
	this->childCount = $nc(this$0->treeModel)->getChildCount($($nc(this->parent)->getUserObject()));
}

bool FixedHeightLayoutCache$VisibleFHTreeStateNodeEnumeration::hasMoreElements() {
	return (this->parent != nullptr);
}

$Object* FixedHeightLayoutCache$VisibleFHTreeStateNodeEnumeration::nextElement() {
	$useLocalCurrentObjectStackCache();
	if (!hasMoreElements()) {
		$throwNew($NoSuchElementException, "No more visible paths"_s);
	}
	$var($TreePath, retObject, nullptr);
	if (this->nextIndex == -1) {
		$assign(retObject, $nc(this->parent)->getTreePath());
	} else {
		$var($FixedHeightLayoutCache$FHTreeStateNode, node, $nc(this->parent)->getChildAtModelIndex(this->nextIndex));
		if (node == nullptr) {
			$assign(retObject, $nc($($nc(this->parent)->getTreePath()))->pathByAddingChild($($nc(this->this$0->treeModel)->getChild($($nc(this->parent)->getUserObject()), this->nextIndex))));
		} else {
			$assign(retObject, $nc(node)->getTreePath());
		}
	}
	updateNextObject();
	return $of(retObject);
}

void FixedHeightLayoutCache$VisibleFHTreeStateNodeEnumeration::updateNextObject() {
	if (!updateNextIndex()) {
		findNextValidParent();
	}
}

bool FixedHeightLayoutCache$VisibleFHTreeStateNodeEnumeration::findNextValidParent() {
	$useLocalCurrentObjectStackCache();
	if (this->parent == this->this$0->root) {
		$set(this, parent, nullptr);
		return false;
	}
	while (this->parent != nullptr) {
		$var($FixedHeightLayoutCache$FHTreeStateNode, newParent, $cast($FixedHeightLayoutCache$FHTreeStateNode, $nc(this->parent)->getParent()));
		if (newParent != nullptr) {
			this->nextIndex = $nc(this->parent)->childIndex;
			$set(this, parent, newParent);
			this->childCount = $nc(this->this$0->treeModel)->getChildCount($($nc(this->parent)->getUserObject()));
			if (updateNextIndex()) {
				return true;
			}
		} else {
			$set(this, parent, nullptr);
		}
	}
	return false;
}

bool FixedHeightLayoutCache$VisibleFHTreeStateNodeEnumeration::updateNextIndex() {
	$useLocalCurrentObjectStackCache();
	if (this->nextIndex == -1 && !$nc(this->parent)->isExpanded()) {
		return false;
	}
	if (this->childCount == 0) {
		return false;
	} else if (++this->nextIndex >= this->childCount) {
		return false;
	}
	$var($FixedHeightLayoutCache$FHTreeStateNode, child, $nc(this->parent)->getChildAtModelIndex(this->nextIndex));
	if (child != nullptr && child->isExpanded()) {
		$set(this, parent, child);
		this->nextIndex = -1;
		this->childCount = $nc(this->this$0->treeModel)->getChildCount($(child->getUserObject()));
	}
	return true;
}

FixedHeightLayoutCache$VisibleFHTreeStateNodeEnumeration::FixedHeightLayoutCache$VisibleFHTreeStateNodeEnumeration() {
}

$Class* FixedHeightLayoutCache$VisibleFHTreeStateNodeEnumeration::load$($String* name, bool initialize) {
	$loadClass(FixedHeightLayoutCache$VisibleFHTreeStateNodeEnumeration, name, initialize, &_FixedHeightLayoutCache$VisibleFHTreeStateNodeEnumeration_ClassInfo_, allocate$FixedHeightLayoutCache$VisibleFHTreeStateNodeEnumeration);
	return class$;
}

$Class* FixedHeightLayoutCache$VisibleFHTreeStateNodeEnumeration::class$ = nullptr;

		} // tree
	} // swing
} // javax