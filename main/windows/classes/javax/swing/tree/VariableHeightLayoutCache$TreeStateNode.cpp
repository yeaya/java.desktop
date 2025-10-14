#include <javax/swing/tree/VariableHeightLayoutCache$TreeStateNode.h>

#include <java/awt/Rectangle.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Enumeration.h>
#include <java/util/Vector.h>
#include <javax/swing/tree/DefaultMutableTreeNode.h>
#include <javax/swing/tree/MutableTreeNode.h>
#include <javax/swing/tree/TreeModel.h>
#include <javax/swing/tree/TreeNode.h>
#include <javax/swing/tree/TreePath.h>
#include <javax/swing/tree/TreeSelectionModel.h>
#include <javax/swing/tree/VariableHeightLayoutCache.h>
#include <jcpp.h>

#undef EMPTY_ENUMERATION

using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Enumeration = ::java::util::Enumeration;
using $Vector = ::java::util::Vector;
using $AbstractLayoutCache = ::javax::swing::tree::AbstractLayoutCache;
using $DefaultMutableTreeNode = ::javax::swing::tree::DefaultMutableTreeNode;
using $MutableTreeNode = ::javax::swing::tree::MutableTreeNode;
using $TreeModel = ::javax::swing::tree::TreeModel;
using $TreeNode = ::javax::swing::tree::TreeNode;
using $TreePath = ::javax::swing::tree::TreePath;
using $TreeSelectionModel = ::javax::swing::tree::TreeSelectionModel;
using $VariableHeightLayoutCache = ::javax::swing::tree::VariableHeightLayoutCache;

namespace javax {
	namespace swing {
		namespace tree {

$FieldInfo _VariableHeightLayoutCache$TreeStateNode_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/tree/VariableHeightLayoutCache;", nullptr, $FINAL | $SYNTHETIC, $field(VariableHeightLayoutCache$TreeStateNode, this$0)},
	{"preferredWidth", "I", nullptr, $PROTECTED, $field(VariableHeightLayoutCache$TreeStateNode, preferredWidth)},
	{"preferredHeight", "I", nullptr, $PROTECTED, $field(VariableHeightLayoutCache$TreeStateNode, preferredHeight)},
	{"xOrigin", "I", nullptr, $PROTECTED, $field(VariableHeightLayoutCache$TreeStateNode, xOrigin)},
	{"yOrigin", "I", nullptr, $PROTECTED, $field(VariableHeightLayoutCache$TreeStateNode, yOrigin)},
	{"expanded", "Z", nullptr, $PROTECTED, $field(VariableHeightLayoutCache$TreeStateNode, expanded)},
	{"hasBeenExpanded", "Z", nullptr, $PROTECTED, $field(VariableHeightLayoutCache$TreeStateNode, hasBeenExpanded$)},
	{"path", "Ljavax/swing/tree/TreePath;", nullptr, $PROTECTED, $field(VariableHeightLayoutCache$TreeStateNode, path)},
	{}
};

$MethodInfo _VariableHeightLayoutCache$TreeStateNode_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/tree/VariableHeightLayoutCache;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(VariableHeightLayoutCache$TreeStateNode::*)($VariableHeightLayoutCache*,Object$*)>(&VariableHeightLayoutCache$TreeStateNode::init$))},
	{"children", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<Ljavax/swing/tree/TreeNode;>;", $PUBLIC},
	{"collapse", "()V", nullptr, $PUBLIC},
	{"collapse", "(Z)V", nullptr, $PROTECTED},
	{"deepMarkSizeInvalid", "()V", nullptr, $PROTECTED},
	{"didAdjustTree", "()V", nullptr, $PROTECTED},
	{"expand", "()V", nullptr, $PUBLIC},
	{"expand", "(Z)V", nullptr, $PROTECTED},
	{"expandParentAndReceiver", "()V", nullptr, $PROTECTED},
	{"getLastVisibleNode", "()Ljavax/swing/tree/VariableHeightLayoutCache$TreeStateNode;", nullptr, $PUBLIC},
	{"getLoadedChildren", "(Z)Ljava/util/Enumeration;", "(Z)Ljava/util/Enumeration<Ljavax/swing/tree/TreeNode;>;", $PROTECTED},
	{"getModelChildCount", "()I", nullptr, $PUBLIC},
	{"getNodeBounds", "(Ljava/awt/Rectangle;)Ljava/awt/Rectangle;", nullptr, $PUBLIC},
	{"getPreferredHeight", "()I", nullptr, $PUBLIC},
	{"getPreferredWidth", "()I", nullptr, $PUBLIC},
	{"getRow", "()I", nullptr, $PUBLIC},
	{"getTreePath", "()Ljavax/swing/tree/TreePath;", nullptr, $PUBLIC},
	{"getValue", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getVisibleChildCount", "()I", nullptr, $PUBLIC},
	{"getXOrigin", "()I", nullptr, $PUBLIC},
	{"getYOrigin", "()I", nullptr, $PUBLIC},
	{"hasBeenExpanded", "()Z", nullptr, $PUBLIC},
	{"hasValidSize", "()Z", nullptr, $PUBLIC},
	{"isExpanded", "()Z", nullptr, $PUBLIC},
	{"isLeaf", "()Z", nullptr, $PUBLIC},
	{"isVisible", "()Z", nullptr, $PUBLIC},
	{"makeVisible", "()V", nullptr, $PUBLIC},
	{"markSizeInvalid", "()V", nullptr, $PROTECTED},
	{"remove", "(I)V", nullptr, $PUBLIC},
	{"removeFromMapping", "()V", nullptr, $PROTECTED},
	{"resetChildrenPaths", "(Ljavax/swing/tree/TreePath;)V", nullptr, $PROTECTED},
	{"setParent", "(Ljavax/swing/tree/MutableTreeNode;)V", nullptr, $PUBLIC},
	{"setUserObject", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"setYOrigin", "(I)V", nullptr, $PROTECTED},
	{"shiftYOriginBy", "(I)V", nullptr, $PROTECTED},
	{"toggleExpanded", "()V", nullptr, $PUBLIC},
	{"updatePreferredSize", "()V", nullptr, $PROTECTED},
	{"updatePreferredSize", "(I)V", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _VariableHeightLayoutCache$TreeStateNode_InnerClassesInfo_[] = {
	{"javax.swing.tree.VariableHeightLayoutCache$TreeStateNode", "javax.swing.tree.VariableHeightLayoutCache", "TreeStateNode", $PRIVATE},
	{}
};

$ClassInfo _VariableHeightLayoutCache$TreeStateNode_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.tree.VariableHeightLayoutCache$TreeStateNode",
	"javax.swing.tree.DefaultMutableTreeNode",
	nullptr,
	_VariableHeightLayoutCache$TreeStateNode_FieldInfo_,
	_VariableHeightLayoutCache$TreeStateNode_MethodInfo_,
	nullptr,
	nullptr,
	_VariableHeightLayoutCache$TreeStateNode_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.tree.VariableHeightLayoutCache"
};

$Object* allocate$VariableHeightLayoutCache$TreeStateNode($Class* clazz) {
	return $of($alloc(VariableHeightLayoutCache$TreeStateNode));
}

void VariableHeightLayoutCache$TreeStateNode::init$($VariableHeightLayoutCache* this$0, Object$* value) {
	$set(this, this$0, this$0);
	$DefaultMutableTreeNode::init$(value);
}

void VariableHeightLayoutCache$TreeStateNode::setParent($MutableTreeNode* parent) {
	$DefaultMutableTreeNode::setParent(parent);
	if (parent != nullptr) {
		$set(this, path, $nc($($nc(($cast(VariableHeightLayoutCache$TreeStateNode, parent)))->getTreePath()))->pathByAddingChild($(getUserObject())));
		this->this$0->addMapping(this);
	}
}

void VariableHeightLayoutCache$TreeStateNode::remove(int32_t childIndex) {
	$var(VariableHeightLayoutCache$TreeStateNode, node, $cast(VariableHeightLayoutCache$TreeStateNode, getChildAt(childIndex)));
	$nc(node)->removeFromMapping();
	$DefaultMutableTreeNode::remove(childIndex);
}

void VariableHeightLayoutCache$TreeStateNode::setUserObject(Object$* o) {
	$DefaultMutableTreeNode::setUserObject(o);
	if (this->path != nullptr) {
		$var(VariableHeightLayoutCache$TreeStateNode, parent, $cast(VariableHeightLayoutCache$TreeStateNode, getParent()));
		if (parent != nullptr) {
			resetChildrenPaths($(parent->getTreePath()));
		} else {
			resetChildrenPaths(nullptr);
		}
	}
}

$Enumeration* VariableHeightLayoutCache$TreeStateNode::children() {
	if (!this->isExpanded()) {
		$init($DefaultMutableTreeNode);
		return $DefaultMutableTreeNode::EMPTY_ENUMERATION;
	} else {
		return $DefaultMutableTreeNode::children();
	}
}

bool VariableHeightLayoutCache$TreeStateNode::isLeaf() {
	return $nc($(this->this$0->getModel()))->isLeaf($(this->getValue()));
}

$Rectangle* VariableHeightLayoutCache$TreeStateNode::getNodeBounds($Rectangle* placeIn$renamed) {
	$var($Rectangle, placeIn, placeIn$renamed);
	if (placeIn == nullptr) {
		int32_t var$0 = getXOrigin();
		int32_t var$1 = getYOrigin();
		int32_t var$2 = getPreferredWidth();
		$assign(placeIn, $new($Rectangle, var$0, var$1, var$2, getPreferredHeight()));
	} else {
		$nc(placeIn)->x = getXOrigin();
		placeIn->y = getYOrigin();
		placeIn->width = getPreferredWidth();
		placeIn->height = getPreferredHeight();
	}
	return placeIn;
}

int32_t VariableHeightLayoutCache$TreeStateNode::getXOrigin() {
	if (!hasValidSize()) {
		updatePreferredSize(getRow());
	}
	return this->xOrigin;
}

int32_t VariableHeightLayoutCache$TreeStateNode::getYOrigin() {
	if (this->this$0->isFixedRowHeight()) {
		int32_t aRow = getRow();
		if (aRow == -1) {
			return -1;
		}
		return this->this$0->getRowHeight() * aRow;
	}
	return this->yOrigin;
}

int32_t VariableHeightLayoutCache$TreeStateNode::getPreferredHeight() {
	if (this->this$0->isFixedRowHeight()) {
		return this->this$0->getRowHeight();
	} else if (!hasValidSize()) {
		updatePreferredSize(getRow());
	}
	return this->preferredHeight;
}

int32_t VariableHeightLayoutCache$TreeStateNode::getPreferredWidth() {
	if (!hasValidSize()) {
		updatePreferredSize(getRow());
	}
	return this->preferredWidth;
}

bool VariableHeightLayoutCache$TreeStateNode::hasValidSize() {
	return (this->preferredHeight != 0);
}

int32_t VariableHeightLayoutCache$TreeStateNode::getRow() {
	return $nc(this->this$0->visibleNodes)->indexOf(this);
}

bool VariableHeightLayoutCache$TreeStateNode::hasBeenExpanded() {
	return this->hasBeenExpanded$;
}

bool VariableHeightLayoutCache$TreeStateNode::isExpanded() {
	return this->expanded;
}

VariableHeightLayoutCache$TreeStateNode* VariableHeightLayoutCache$TreeStateNode::getLastVisibleNode() {
	$var(VariableHeightLayoutCache$TreeStateNode, node, this);
	while (true) {
		bool var$0 = $nc(node)->isExpanded();
		if (!(var$0 && node->getChildCount() > 0)) {
			break;
		}
		{
			$assign(node, $cast(VariableHeightLayoutCache$TreeStateNode, node->getLastChild()));
		}
	}
	return node;
}

bool VariableHeightLayoutCache$TreeStateNode::isVisible() {
	if (this == this->this$0->root) {
		return true;
	}
	$var(VariableHeightLayoutCache$TreeStateNode, parent, $cast(VariableHeightLayoutCache$TreeStateNode, getParent()));
	bool var$0 = parent != nullptr && parent->isExpanded();
	return (var$0 && parent->isVisible());
}

int32_t VariableHeightLayoutCache$TreeStateNode::getModelChildCount() {
	if (this->hasBeenExpanded$) {
		return $DefaultMutableTreeNode::getChildCount();
	}
	return $nc($(this->this$0->getModel()))->getChildCount($(getValue()));
}

int32_t VariableHeightLayoutCache$TreeStateNode::getVisibleChildCount() {
	int32_t childCount = 0;
	if (isExpanded()) {
		int32_t maxCounter = getChildCount();
		childCount += maxCounter;
		for (int32_t counter = 0; counter < maxCounter; ++counter) {
			childCount += $nc(($cast(VariableHeightLayoutCache$TreeStateNode, $(getChildAt(counter)))))->getVisibleChildCount();
		}
	}
	return childCount;
}

void VariableHeightLayoutCache$TreeStateNode::toggleExpanded() {
	if (isExpanded()) {
		collapse();
	} else {
		expand();
	}
}

void VariableHeightLayoutCache$TreeStateNode::makeVisible() {
	$var(VariableHeightLayoutCache$TreeStateNode, parent, $cast(VariableHeightLayoutCache$TreeStateNode, getParent()));
	if (parent != nullptr) {
		parent->expandParentAndReceiver();
	}
}

void VariableHeightLayoutCache$TreeStateNode::expand() {
	expand(true);
}

void VariableHeightLayoutCache$TreeStateNode::collapse() {
	collapse(true);
}

$Object* VariableHeightLayoutCache$TreeStateNode::getValue() {
	return $of(getUserObject());
}

$TreePath* VariableHeightLayoutCache$TreeStateNode::getTreePath() {
	return this->path;
}

void VariableHeightLayoutCache$TreeStateNode::resetChildrenPaths($TreePath* parentPath) {
	this->this$0->removeMapping(this);
	if (parentPath == nullptr) {
		$set(this, path, $new($TreePath, $(getUserObject())));
	} else {
		$set(this, path, $nc(parentPath)->pathByAddingChild($(getUserObject())));
	}
	this->this$0->addMapping(this);
	for (int32_t counter = getChildCount() - 1; counter >= 0; --counter) {
		$nc(($cast(VariableHeightLayoutCache$TreeStateNode, $(getChildAt(counter)))))->resetChildrenPaths(this->path);
	}
}

void VariableHeightLayoutCache$TreeStateNode::setYOrigin(int32_t newYOrigin) {
	this->yOrigin = newYOrigin;
}

void VariableHeightLayoutCache$TreeStateNode::shiftYOriginBy(int32_t offset) {
	this->yOrigin += offset;
}

void VariableHeightLayoutCache$TreeStateNode::updatePreferredSize() {
	updatePreferredSize(getRow());
}

void VariableHeightLayoutCache$TreeStateNode::updatePreferredSize(int32_t index) {
	$var($Object, var$0, this->getUserObject());
	int32_t var$1 = index;
	int32_t var$2 = getLevel();
	$var($Rectangle, bounds, this->this$0->getNodeDimensions(var$0, var$1, var$2, isExpanded(), this->this$0->boundsBuffer));
	if (bounds == nullptr || $nc(bounds)->height == 0) {
		this->xOrigin = 0;
		this->preferredWidth = (this->preferredHeight = 0);
		this->this$0->updateNodeSizes$ = true;
	} else {
		this->xOrigin = bounds->x;
		this->preferredWidth = bounds->width;
		if (this->this$0->isFixedRowHeight()) {
			this->preferredHeight = this->this$0->getRowHeight();
		} else {
			this->preferredHeight = bounds->height;
		}
	}
}

void VariableHeightLayoutCache$TreeStateNode::markSizeInvalid() {
	this->preferredHeight = 0;
}

void VariableHeightLayoutCache$TreeStateNode::deepMarkSizeInvalid() {
	markSizeInvalid();
	for (int32_t counter = getChildCount() - 1; counter >= 0; --counter) {
		$nc(($cast(VariableHeightLayoutCache$TreeStateNode, $(getChildAt(counter)))))->deepMarkSizeInvalid();
	}
}

$Enumeration* VariableHeightLayoutCache$TreeStateNode::getLoadedChildren(bool createIfNeeded) {
	if (!createIfNeeded || this->hasBeenExpanded$) {
		return $DefaultMutableTreeNode::children();
	}
	$var(VariableHeightLayoutCache$TreeStateNode, newNode, nullptr);
	$var($Object, realNode, getValue());
	$var($TreeModel, treeModel, this->this$0->getModel());
	int32_t count = $nc(treeModel)->getChildCount(realNode);
	this->hasBeenExpanded$ = true;
	int32_t childRow = getRow();
	if (childRow == -1) {
		for (int32_t i = 0; i < count; ++i) {
			$assign(newNode, this->this$0->createNodeForValue($(treeModel->getChild(realNode, i))));
			this->add(newNode);
			$nc(newNode)->updatePreferredSize(-1);
		}
	} else {
		++childRow;
		for (int32_t i = 0; i < count; ++i) {
			$assign(newNode, this->this$0->createNodeForValue($(treeModel->getChild(realNode, i))));
			this->add(newNode);
			$nc(newNode)->updatePreferredSize(childRow++);
		}
	}
	return $DefaultMutableTreeNode::children();
}

void VariableHeightLayoutCache$TreeStateNode::didAdjustTree() {
}

void VariableHeightLayoutCache$TreeStateNode::expandParentAndReceiver() {
	$var(VariableHeightLayoutCache$TreeStateNode, parent, $cast(VariableHeightLayoutCache$TreeStateNode, getParent()));
	if (parent != nullptr) {
		parent->expandParentAndReceiver();
	}
	expand();
}

void VariableHeightLayoutCache$TreeStateNode::expand(bool adjustTree) {
	bool var$0 = !isExpanded();
	if (var$0 && !isLeaf()) {
		bool isFixed = this->this$0->isFixedRowHeight();
		int32_t startHeight = getPreferredHeight();
		int32_t originalRow = getRow();
		this->expanded = true;
		updatePreferredSize(originalRow);
		if (!this->hasBeenExpanded$) {
			$var(VariableHeightLayoutCache$TreeStateNode, newNode, nullptr);
			$var($Object, realNode, getValue());
			$var($TreeModel, treeModel, this->this$0->getModel());
			int32_t count = $nc(treeModel)->getChildCount(realNode);
			int32_t offset = originalRow == -1 ? -1 : originalRow + 1;
			this->hasBeenExpanded$ = true;
			for (int32_t i = 0; i < count; ++i) {
				$assign(newNode, this->this$0->createNodeForValue($(treeModel->getChild(realNode, i))));
				this->add(newNode);
				$nc(newNode)->updatePreferredSize(offset);
			}
		}
		int32_t i = originalRow;
		$var($Enumeration, cursor, preorderEnumeration());
		$nc(cursor)->nextElement();
		int32_t var$1 = 0;
		if (isFixed || (this == this->this$0->root && !this->this$0->isRootVisible())) {
			var$1 = 0;
		} else {
			int32_t var$2 = getYOrigin();
			var$1 = var$2 + this->getPreferredHeight();
		}
		int32_t newYOrigin = var$1;
		$var(VariableHeightLayoutCache$TreeStateNode, aNode, nullptr);
		if (!isFixed) {
			while (cursor->hasMoreElements()) {
				$assign(aNode, $cast(VariableHeightLayoutCache$TreeStateNode, cursor->nextElement()));
				if (!this->this$0->updateNodeSizes$ && !$nc(aNode)->hasValidSize()) {
					aNode->updatePreferredSize(i + 1);
				}
				$nc(aNode)->setYOrigin(newYOrigin);
				newYOrigin += aNode->getPreferredHeight();
				$nc(this->this$0->visibleNodes)->insertElementAt(aNode, ++i);
			}
		} else {
			while (cursor->hasMoreElements()) {
				$assign(aNode, $cast(VariableHeightLayoutCache$TreeStateNode, cursor->nextElement()));
				$nc(this->this$0->visibleNodes)->insertElementAt(aNode, ++i);
			}
		}
		if (adjustTree && (originalRow != i || getPreferredHeight() != startHeight)) {
			if (!isFixed && ++i < this->this$0->getRowCount()) {
				int32_t counter = 0;
				int32_t var$4 = newYOrigin;
				int32_t var$6 = getYOrigin();
				int32_t var$5 = (var$6 + getPreferredHeight());
				int32_t var$3 = var$4 - var$5;
				int32_t heightDiff = var$3 + (getPreferredHeight() - startHeight);
				for (counter = $nc(this->this$0->visibleNodes)->size() - 1; counter >= i; --counter) {
					$nc(($cast(VariableHeightLayoutCache$TreeStateNode, $($nc(this->this$0->visibleNodes)->elementAt(counter)))))->shiftYOriginBy(heightDiff);
				}
			}
			didAdjustTree();
			this->this$0->visibleNodesChanged();
		}
		if (this->this$0->treeSelectionModel != nullptr) {
			$nc(this->this$0->treeSelectionModel)->resetRowSelection();
		}
	}
}

void VariableHeightLayoutCache$TreeStateNode::collapse(bool adjustTree) {
	if (isExpanded()) {
		$var($Enumeration, cursor, preorderEnumeration());
		$nc(cursor)->nextElement();
		int32_t rowsDeleted = 0;
		bool isFixed = this->this$0->isFixedRowHeight();
		int32_t lastYEnd = 0;
		if (isFixed) {
			lastYEnd = 0;
		} else {
			int32_t var$0 = getPreferredHeight();
			lastYEnd = var$0 + getYOrigin();
		}
		int32_t startHeight = getPreferredHeight();
		int32_t startYEnd = lastYEnd;
		int32_t myRow = getRow();
		if (!isFixed) {
			while (cursor->hasMoreElements()) {
				$var(VariableHeightLayoutCache$TreeStateNode, node, $cast(VariableHeightLayoutCache$TreeStateNode, cursor->nextElement()));
				if ($nc(node)->isVisible()) {
					++rowsDeleted;
					int32_t var$1 = node->getYOrigin();
					lastYEnd = var$1 + node->getPreferredHeight();
				}
			}
		} else {
			while (cursor->hasMoreElements()) {
				$var(VariableHeightLayoutCache$TreeStateNode, node, $cast(VariableHeightLayoutCache$TreeStateNode, cursor->nextElement()));
				if ($nc(node)->isVisible()) {
					++rowsDeleted;
				}
			}
		}
		for (int32_t counter = rowsDeleted + myRow; counter > myRow; --counter) {
			$nc(this->this$0->visibleNodes)->removeElementAt(counter);
		}
		this->expanded = false;
		if (myRow == -1) {
			markSizeInvalid();
		} else if (adjustTree) {
			updatePreferredSize(myRow);
		}
		if (myRow != -1 && adjustTree && (rowsDeleted > 0 || startHeight != getPreferredHeight())) {
			startYEnd += (getPreferredHeight() - startHeight);
			if (!isFixed && (myRow + 1) < this->this$0->getRowCount() && startYEnd != lastYEnd) {
				int32_t counter = 0;
				int32_t maxCounter = 0;
				int32_t shiftAmount = 0;
				shiftAmount = startYEnd - lastYEnd;
				for (counter = myRow + 1, maxCounter = $nc(this->this$0->visibleNodes)->size(); counter < maxCounter; ++counter) {
					$nc(($cast(VariableHeightLayoutCache$TreeStateNode, $($nc(this->this$0->visibleNodes)->elementAt(counter)))))->shiftYOriginBy(shiftAmount);
				}
			}
			didAdjustTree();
			this->this$0->visibleNodesChanged();
		}
		if (this->this$0->treeSelectionModel != nullptr && rowsDeleted > 0 && myRow != -1) {
			$nc(this->this$0->treeSelectionModel)->resetRowSelection();
		}
	}
}

void VariableHeightLayoutCache$TreeStateNode::removeFromMapping() {
	if (this->path != nullptr) {
		this->this$0->removeMapping(this);
		for (int32_t counter = getChildCount() - 1; counter >= 0; --counter) {
			$nc(($cast(VariableHeightLayoutCache$TreeStateNode, $(getChildAt(counter)))))->removeFromMapping();
		}
	}
}

VariableHeightLayoutCache$TreeStateNode::VariableHeightLayoutCache$TreeStateNode() {
}

$Class* VariableHeightLayoutCache$TreeStateNode::load$($String* name, bool initialize) {
	$loadClass(VariableHeightLayoutCache$TreeStateNode, name, initialize, &_VariableHeightLayoutCache$TreeStateNode_ClassInfo_, allocate$VariableHeightLayoutCache$TreeStateNode);
	return class$;
}

$Class* VariableHeightLayoutCache$TreeStateNode::class$ = nullptr;

		} // tree
	} // swing
} // javax