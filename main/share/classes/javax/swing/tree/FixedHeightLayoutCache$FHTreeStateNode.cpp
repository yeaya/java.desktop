#include <javax/swing/tree/FixedHeightLayoutCache$FHTreeStateNode.h>

#include <javax/swing/tree/DefaultMutableTreeNode.h>
#include <javax/swing/tree/FixedHeightLayoutCache$SearchInfo.h>
#include <javax/swing/tree/FixedHeightLayoutCache.h>
#include <javax/swing/tree/MutableTreeNode.h>
#include <javax/swing/tree/TreeModel.h>
#include <javax/swing/tree/TreeNode.h>
#include <javax/swing/tree/TreePath.h>
#include <javax/swing/tree/TreeSelectionModel.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DefaultMutableTreeNode = ::javax::swing::tree::DefaultMutableTreeNode;
using $FixedHeightLayoutCache = ::javax::swing::tree::FixedHeightLayoutCache;
using $FixedHeightLayoutCache$SearchInfo = ::javax::swing::tree::FixedHeightLayoutCache$SearchInfo;
using $MutableTreeNode = ::javax::swing::tree::MutableTreeNode;
using $TreeModel = ::javax::swing::tree::TreeModel;
using $TreeNode = ::javax::swing::tree::TreeNode;
using $TreePath = ::javax::swing::tree::TreePath;
using $TreeSelectionModel = ::javax::swing::tree::TreeSelectionModel;

namespace javax {
	namespace swing {
		namespace tree {

$FieldInfo _FixedHeightLayoutCache$FHTreeStateNode_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/tree/FixedHeightLayoutCache;", nullptr, $FINAL | $SYNTHETIC, $field(FixedHeightLayoutCache$FHTreeStateNode, this$0)},
	{"isExpanded", "Z", nullptr, $PROTECTED, $field(FixedHeightLayoutCache$FHTreeStateNode, isExpanded$)},
	{"childIndex", "I", nullptr, $PROTECTED, $field(FixedHeightLayoutCache$FHTreeStateNode, childIndex)},
	{"childCount", "I", nullptr, $PROTECTED, $field(FixedHeightLayoutCache$FHTreeStateNode, childCount)},
	{"row", "I", nullptr, $PROTECTED, $field(FixedHeightLayoutCache$FHTreeStateNode, row)},
	{"path", "Ljavax/swing/tree/TreePath;", nullptr, $PROTECTED, $field(FixedHeightLayoutCache$FHTreeStateNode, path)},
	{}
};

$MethodInfo _FixedHeightLayoutCache$FHTreeStateNode_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/tree/FixedHeightLayoutCache;Ljava/lang/Object;II)V", nullptr, $PUBLIC, $method(static_cast<void(FixedHeightLayoutCache$FHTreeStateNode::*)($FixedHeightLayoutCache*,Object$*,int32_t,int32_t)>(&FixedHeightLayoutCache$FHTreeStateNode::init$))},
	{"addNode", "(Ljavax/swing/tree/FixedHeightLayoutCache$FHTreeStateNode;)V", nullptr, $PROTECTED},
	{"adjustChildIndexs", "(II)V", nullptr, $PROTECTED},
	{"adjustRowBy", "(I)V", nullptr, $PROTECTED},
	{"adjustRowBy", "(II)V", nullptr, $PROTECTED},
	{"childInsertedAtModelIndex", "(IZ)V", nullptr, $PROTECTED},
	{"collapse", "(Z)V", nullptr, $PROTECTED},
	{"createChildFor", "(Ljava/lang/Object;)Ljavax/swing/tree/FixedHeightLayoutCache$FHTreeStateNode;", nullptr, $PROTECTED},
	{"didAdjustTree", "()V", nullptr, $PROTECTED},
	{"didExpand", "()V", nullptr, $PROTECTED},
	{"expand", "()V", nullptr, $PROTECTED},
	{"expandParentAndReceiver", "()V", nullptr, $PROTECTED},
	{"getChildAtModelIndex", "(I)Ljavax/swing/tree/FixedHeightLayoutCache$FHTreeStateNode;", nullptr, $PUBLIC},
	{"getChildIndex", "()I", nullptr, $PUBLIC},
	{"getCountTo", "(I)I", nullptr, $PROTECTED},
	{"getNumExpandedChildrenTo", "(I)I", nullptr, $PROTECTED},
	{"getPathForRow", "(IILjavax/swing/tree/FixedHeightLayoutCache$SearchInfo;)Z", nullptr, $PROTECTED},
	{"getRow", "()I", nullptr, $PUBLIC},
	{"getRowToModelIndex", "(I)I", nullptr, $PUBLIC},
	{"getTotalChildCount", "()I", nullptr, $PUBLIC},
	{"getTreePath", "()Ljavax/swing/tree/TreePath;", nullptr, $PUBLIC},
	{"getVisibleLevel", "()I", nullptr, $PUBLIC},
	{"isExpanded", "()Z", nullptr, $PUBLIC},
	{"isLeaf", "()Z", nullptr, $PUBLIC},
	{"isVisible", "()Z", nullptr, $PUBLIC},
	{"makeVisible", "()V", nullptr, $PROTECTED},
	{"remove", "(I)V", nullptr, $PUBLIC},
	{"removeChildAtModelIndex", "(IZ)V", nullptr, $PROTECTED},
	{"removeFromMapping", "()V", nullptr, $PROTECTED},
	{"resetChildrenPaths", "(Ljavax/swing/tree/TreePath;)V", nullptr, $PROTECTED},
	{"resetChildrenRowsFrom", "(III)V", nullptr, $PROTECTED},
	{"setParent", "(Ljavax/swing/tree/MutableTreeNode;)V", nullptr, $PUBLIC},
	{"setRowAndChildren", "(I)I", nullptr, $PROTECTED},
	{"setUserObject", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _FixedHeightLayoutCache$FHTreeStateNode_InnerClassesInfo_[] = {
	{"javax.swing.tree.FixedHeightLayoutCache$FHTreeStateNode", "javax.swing.tree.FixedHeightLayoutCache", "FHTreeStateNode", $PRIVATE},
	{}
};

$ClassInfo _FixedHeightLayoutCache$FHTreeStateNode_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.tree.FixedHeightLayoutCache$FHTreeStateNode",
	"javax.swing.tree.DefaultMutableTreeNode",
	nullptr,
	_FixedHeightLayoutCache$FHTreeStateNode_FieldInfo_,
	_FixedHeightLayoutCache$FHTreeStateNode_MethodInfo_,
	nullptr,
	nullptr,
	_FixedHeightLayoutCache$FHTreeStateNode_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.tree.FixedHeightLayoutCache"
};

$Object* allocate$FixedHeightLayoutCache$FHTreeStateNode($Class* clazz) {
	return $of($alloc(FixedHeightLayoutCache$FHTreeStateNode));
}

void FixedHeightLayoutCache$FHTreeStateNode::init$($FixedHeightLayoutCache* this$0, Object$* userObject, int32_t childIndex, int32_t row) {
	$set(this, this$0, this$0);
	$DefaultMutableTreeNode::init$(userObject);
	this->childIndex = childIndex;
	this->row = row;
}

void FixedHeightLayoutCache$FHTreeStateNode::setParent($MutableTreeNode* parent) {
	$useLocalCurrentObjectStackCache();
	$DefaultMutableTreeNode::setParent(parent);
	if (parent != nullptr) {
		$set(this, path, $nc($($nc(($cast(FixedHeightLayoutCache$FHTreeStateNode, parent)))->getTreePath()))->pathByAddingChild($(getUserObject())));
		this->this$0->addMapping(this);
	}
}

void FixedHeightLayoutCache$FHTreeStateNode::remove(int32_t childIndex) {
	$var(FixedHeightLayoutCache$FHTreeStateNode, node, $cast(FixedHeightLayoutCache$FHTreeStateNode, getChildAt(childIndex)));
	$nc(node)->removeFromMapping();
	$DefaultMutableTreeNode::remove(childIndex);
}

void FixedHeightLayoutCache$FHTreeStateNode::setUserObject(Object$* o) {
	$useLocalCurrentObjectStackCache();
	$DefaultMutableTreeNode::setUserObject(o);
	if (this->path != nullptr) {
		$var(FixedHeightLayoutCache$FHTreeStateNode, parent, $cast(FixedHeightLayoutCache$FHTreeStateNode, getParent()));
		if (parent != nullptr) {
			resetChildrenPaths($(parent->getTreePath()));
		} else {
			resetChildrenPaths(nullptr);
		}
	}
}

int32_t FixedHeightLayoutCache$FHTreeStateNode::getChildIndex() {
	return this->childIndex;
}

$TreePath* FixedHeightLayoutCache$FHTreeStateNode::getTreePath() {
	return this->path;
}

FixedHeightLayoutCache$FHTreeStateNode* FixedHeightLayoutCache$FHTreeStateNode::getChildAtModelIndex(int32_t index) {
	$useLocalCurrentObjectStackCache();
	for (int32_t counter = getChildCount() - 1; counter >= 0; --counter) {
		if ($nc(($cast(FixedHeightLayoutCache$FHTreeStateNode, $(getChildAt(counter)))))->childIndex == index) {
			return $cast(FixedHeightLayoutCache$FHTreeStateNode, getChildAt(counter));
		}
	}
	return nullptr;
}

bool FixedHeightLayoutCache$FHTreeStateNode::isVisible() {
	$var(FixedHeightLayoutCache$FHTreeStateNode, parent, $cast(FixedHeightLayoutCache$FHTreeStateNode, getParent()));
	if (parent == nullptr) {
		return true;
	}
	bool var$0 = $nc(parent)->isExpanded();
	return (var$0 && parent->isVisible());
}

int32_t FixedHeightLayoutCache$FHTreeStateNode::getRow() {
	return this->row;
}

int32_t FixedHeightLayoutCache$FHTreeStateNode::getRowToModelIndex(int32_t index) {
	$var(FixedHeightLayoutCache$FHTreeStateNode, child, nullptr);
	int32_t lastRow = getRow() + 1;
	int32_t retValue = lastRow;
	{
		int32_t counter = 0;
		int32_t maxCounter = getChildCount();
		for (; counter < maxCounter; ++counter) {
			$assign(child, $cast(FixedHeightLayoutCache$FHTreeStateNode, getChildAt(counter)));
			if ($nc(child)->childIndex >= index) {
				if (child->childIndex == index) {
					return child->row;
				}
				if (counter == 0) {
					return getRow() + 1 + index;
				}
				return child->row - (child->childIndex - index);
			}
		}
	}
	int32_t var$0 = getRow() + 1;
	return var$0 + getTotalChildCount() - (this->childCount - index);
}

int32_t FixedHeightLayoutCache$FHTreeStateNode::getTotalChildCount() {
	$useLocalCurrentObjectStackCache();
	if (isExpanded()) {
		$var(FixedHeightLayoutCache$FHTreeStateNode, parent, $cast(FixedHeightLayoutCache$FHTreeStateNode, getParent()));
		int32_t pIndex = 0;
		bool var$0 = parent != nullptr;
		if (var$0) {
			int32_t var$1 = (pIndex = parent->getIndex(this)) + 1;
			var$0 = var$1 < parent->getChildCount();
		}
		if (var$0) {
			$var(FixedHeightLayoutCache$FHTreeStateNode, nextSibling, $cast(FixedHeightLayoutCache$FHTreeStateNode, parent->getChildAt(pIndex + 1)));
			return $nc(nextSibling)->row - this->row - (nextSibling->childIndex - this->childIndex);
		} else {
			int32_t retCount = this->childCount;
			for (int32_t counter = getChildCount() - 1; counter >= 0; --counter) {
				retCount += $nc(($cast(FixedHeightLayoutCache$FHTreeStateNode, $(getChildAt(counter)))))->getTotalChildCount();
			}
			return retCount;
		}
	}
	return 0;
}

bool FixedHeightLayoutCache$FHTreeStateNode::isExpanded() {
	return this->isExpanded$;
}

int32_t FixedHeightLayoutCache$FHTreeStateNode::getVisibleLevel() {
	if (this->this$0->isRootVisible()) {
		return getLevel();
	} else {
		return getLevel() - 1;
	}
}

void FixedHeightLayoutCache$FHTreeStateNode::resetChildrenPaths($TreePath* parentPath) {
	$useLocalCurrentObjectStackCache();
	this->this$0->removeMapping(this);
	if (parentPath == nullptr) {
		$set(this, path, $new($TreePath, $(getUserObject())));
	} else {
		$set(this, path, $nc(parentPath)->pathByAddingChild($(getUserObject())));
	}
	this->this$0->addMapping(this);
	for (int32_t counter = getChildCount() - 1; counter >= 0; --counter) {
		$nc(($cast(FixedHeightLayoutCache$FHTreeStateNode, $(getChildAt(counter)))))->resetChildrenPaths(this->path);
	}
}

void FixedHeightLayoutCache$FHTreeStateNode::removeFromMapping() {
	$useLocalCurrentObjectStackCache();
	if (this->path != nullptr) {
		this->this$0->removeMapping(this);
		for (int32_t counter = getChildCount() - 1; counter >= 0; --counter) {
			$nc(($cast(FixedHeightLayoutCache$FHTreeStateNode, $(getChildAt(counter)))))->removeFromMapping();
		}
	}
}

FixedHeightLayoutCache$FHTreeStateNode* FixedHeightLayoutCache$FHTreeStateNode::createChildFor(Object$* userObject) {
	$useLocalCurrentObjectStackCache();
	int32_t newChildIndex = $nc(this->this$0->treeModel)->getIndexOfChild($(getUserObject()), userObject);
	if (newChildIndex < 0) {
		return nullptr;
	}
	$var(FixedHeightLayoutCache$FHTreeStateNode, aNode, nullptr);
	$var(FixedHeightLayoutCache$FHTreeStateNode, child, this->this$0->createNodeForValue(userObject, newChildIndex));
	int32_t childRow = 0;
	if (isVisible()) {
		childRow = getRowToModelIndex(newChildIndex);
	} else {
		childRow = -1;
	}
	$nc(child)->row = childRow;
	{
		int32_t counter = 0;
		int32_t maxCounter = getChildCount();
		for (; counter < maxCounter; ++counter) {
			$assign(aNode, $cast(FixedHeightLayoutCache$FHTreeStateNode, getChildAt(counter)));
			if ($nc(aNode)->childIndex > newChildIndex) {
				insert(child, counter);
				return child;
			}
		}
	}
	add(child);
	return child;
}

void FixedHeightLayoutCache$FHTreeStateNode::adjustRowBy(int32_t amount) {
	$useLocalCurrentObjectStackCache();
	this->row += amount;
	if (this->isExpanded$) {
		for (int32_t counter = getChildCount() - 1; counter >= 0; --counter) {
			$nc(($cast(FixedHeightLayoutCache$FHTreeStateNode, $(getChildAt(counter)))))->adjustRowBy(amount);
		}
	}
}

void FixedHeightLayoutCache$FHTreeStateNode::adjustRowBy(int32_t amount, int32_t startIndex) {
	$useLocalCurrentObjectStackCache();
	if (this->isExpanded$) {
		for (int32_t counter = getChildCount() - 1; counter >= startIndex; --counter) {
			$nc(($cast(FixedHeightLayoutCache$FHTreeStateNode, $(getChildAt(counter)))))->adjustRowBy(amount);
		}
	}
	$var(FixedHeightLayoutCache$FHTreeStateNode, parent, $cast(FixedHeightLayoutCache$FHTreeStateNode, getParent()));
	if (parent != nullptr) {
		parent->adjustRowBy(amount, parent->getIndex(this) + 1);
	}
}

void FixedHeightLayoutCache$FHTreeStateNode::didExpand() {
	int32_t nextRow = setRowAndChildren(this->row);
	$var(FixedHeightLayoutCache$FHTreeStateNode, parent, $cast(FixedHeightLayoutCache$FHTreeStateNode, getParent()));
	int32_t childRowCount = nextRow - this->row - 1;
	if (parent != nullptr) {
		parent->adjustRowBy(childRowCount, parent->getIndex(this) + 1);
	}
	this->this$0->adjustRowCountBy(childRowCount);
}

int32_t FixedHeightLayoutCache$FHTreeStateNode::setRowAndChildren(int32_t nextRow) {
	this->row = nextRow;
	if (!isExpanded()) {
		return this->row + 1;
	}
	int32_t lastRow = this->row + 1;
	int32_t lastModelIndex = 0;
	$var(FixedHeightLayoutCache$FHTreeStateNode, child, nullptr);
	int32_t maxCounter = getChildCount();
	for (int32_t counter = 0; counter < maxCounter; ++counter) {
		$assign(child, $cast(FixedHeightLayoutCache$FHTreeStateNode, getChildAt(counter)));
		lastRow += ($nc(child)->childIndex - lastModelIndex);
		lastModelIndex = child->childIndex + 1;
		if (child->isExpanded$) {
			lastRow = child->setRowAndChildren(lastRow);
		} else {
			child->row = lastRow++;
		}
	}
	return lastRow + this->childCount - lastModelIndex;
}

void FixedHeightLayoutCache$FHTreeStateNode::resetChildrenRowsFrom(int32_t newRow, int32_t childIndex, int32_t modelIndex) {
	int32_t lastRow = newRow;
	int32_t lastModelIndex = modelIndex;
	$var(FixedHeightLayoutCache$FHTreeStateNode, node, nullptr);
	int32_t maxCounter = getChildCount();
	for (int32_t counter = childIndex; counter < maxCounter; ++counter) {
		$assign(node, $cast(FixedHeightLayoutCache$FHTreeStateNode, getChildAt(counter)));
		lastRow += ($nc(node)->childIndex - lastModelIndex);
		lastModelIndex = node->childIndex + 1;
		if (node->isExpanded$) {
			lastRow = node->setRowAndChildren(lastRow);
		} else {
			node->row = lastRow++;
		}
	}
	lastRow += this->childCount - lastModelIndex;
	$assign(node, $cast(FixedHeightLayoutCache$FHTreeStateNode, getParent()));
	if (node != nullptr) {
		node->resetChildrenRowsFrom(lastRow, node->getIndex(this) + 1, this->childIndex + 1);
	} else {
		this->this$0->rowCount = lastRow;
	}
}

void FixedHeightLayoutCache$FHTreeStateNode::makeVisible() {
	$var(FixedHeightLayoutCache$FHTreeStateNode, parent, $cast(FixedHeightLayoutCache$FHTreeStateNode, getParent()));
	if (parent != nullptr) {
		parent->expandParentAndReceiver();
	}
}

void FixedHeightLayoutCache$FHTreeStateNode::expandParentAndReceiver() {
	$var(FixedHeightLayoutCache$FHTreeStateNode, parent, $cast(FixedHeightLayoutCache$FHTreeStateNode, getParent()));
	if (parent != nullptr) {
		parent->expandParentAndReceiver();
	}
	expand();
}

void FixedHeightLayoutCache$FHTreeStateNode::expand() {
	if (!this->isExpanded$ && !isLeaf()) {
		bool visible = isVisible();
		this->isExpanded$ = true;
		this->childCount = $nc(this->this$0->treeModel)->getChildCount($(getUserObject()));
		if (visible) {
			didExpand();
		}
		if (visible && this->this$0->treeSelectionModel != nullptr) {
			$nc(this->this$0->treeSelectionModel)->resetRowSelection();
		}
	}
}

void FixedHeightLayoutCache$FHTreeStateNode::collapse(bool adjustRows) {
	if (this->isExpanded$) {
		if (isVisible() && adjustRows) {
			int32_t childCount = getTotalChildCount();
			this->isExpanded$ = false;
			this->this$0->adjustRowCountBy(-childCount);
			adjustRowBy(-childCount, 0);
		} else {
			this->isExpanded$ = false;
		}
		if (adjustRows && isVisible() && this->this$0->treeSelectionModel != nullptr) {
			$nc(this->this$0->treeSelectionModel)->resetRowSelection();
		}
	}
}

bool FixedHeightLayoutCache$FHTreeStateNode::isLeaf() {
	$useLocalCurrentObjectStackCache();
	$var($TreeModel, model, this->this$0->getModel());
	return (model != nullptr) ? $nc(model)->isLeaf($(this->getUserObject())) : true;
}

void FixedHeightLayoutCache$FHTreeStateNode::addNode(FixedHeightLayoutCache$FHTreeStateNode* newChild) {
	$useLocalCurrentObjectStackCache();
	bool added = false;
	int32_t childIndex = $nc(newChild)->getChildIndex();
	{
		int32_t counter = 0;
		int32_t maxCounter = getChildCount();
		for (; counter < maxCounter; ++counter) {
			if ($nc(($cast(FixedHeightLayoutCache$FHTreeStateNode, $(getChildAt(counter)))))->getChildIndex() > childIndex) {
				added = true;
				insert(newChild, counter);
				counter = maxCounter;
			}
		}
	}
	if (!added) {
		add(newChild);
	}
}

void FixedHeightLayoutCache$FHTreeStateNode::removeChildAtModelIndex(int32_t modelIndex, bool isChildVisible) {
	$useLocalCurrentObjectStackCache();
	$var(FixedHeightLayoutCache$FHTreeStateNode, childNode, getChildAtModelIndex(modelIndex));
	if (childNode != nullptr) {
		int32_t row = childNode->getRow();
		int32_t index = getIndex(childNode);
		childNode->collapse(false);
		remove(index);
		adjustChildIndexs(index, -1);
		--this->childCount;
		if (isChildVisible) {
			resetChildrenRowsFrom(row, index, modelIndex);
		}
	} else {
		int32_t maxCounter = getChildCount();
		$var(FixedHeightLayoutCache$FHTreeStateNode, aChild, nullptr);
		for (int32_t counter = 0; counter < maxCounter; ++counter) {
			$assign(aChild, $cast(FixedHeightLayoutCache$FHTreeStateNode, getChildAt(counter)));
			if ($nc(aChild)->childIndex >= modelIndex) {
				if (isChildVisible) {
					adjustRowBy(-1, counter);
					this->this$0->adjustRowCountBy(-1);
				}
				for (; counter < maxCounter; ++counter) {
					--$nc(($cast(FixedHeightLayoutCache$FHTreeStateNode, $(getChildAt(counter)))))->childIndex;
				}
				--this->childCount;
				return;
			}
		}
		if (isChildVisible) {
			adjustRowBy(-1, maxCounter);
			this->this$0->adjustRowCountBy(-1);
		}
		--this->childCount;
	}
}

void FixedHeightLayoutCache$FHTreeStateNode::adjustChildIndexs(int32_t index, int32_t amount) {
	$useLocalCurrentObjectStackCache();
	{
		int32_t counter = index;
		int32_t maxCounter = getChildCount();
		for (; counter < maxCounter; ++counter) {
			$nc(($cast(FixedHeightLayoutCache$FHTreeStateNode, $(getChildAt(counter)))))->childIndex += amount;
		}
	}
}

void FixedHeightLayoutCache$FHTreeStateNode::childInsertedAtModelIndex(int32_t index, bool isExpandedAndVisible) {
	$useLocalCurrentObjectStackCache();
	$var(FixedHeightLayoutCache$FHTreeStateNode, aChild, nullptr);
	int32_t maxCounter = getChildCount();
	for (int32_t counter = 0; counter < maxCounter; ++counter) {
		$assign(aChild, $cast(FixedHeightLayoutCache$FHTreeStateNode, getChildAt(counter)));
		if ($nc(aChild)->childIndex >= index) {
			if (isExpandedAndVisible) {
				adjustRowBy(1, counter);
				this->this$0->adjustRowCountBy(1);
			}
			for (; counter < maxCounter; ++counter) {
				++$nc(($cast(FixedHeightLayoutCache$FHTreeStateNode, $(getChildAt(counter)))))->childIndex;
			}
			++this->childCount;
			return;
		}
	}
	if (isExpandedAndVisible) {
		adjustRowBy(1, maxCounter);
		this->this$0->adjustRowCountBy(1);
	}
	++this->childCount;
}

bool FixedHeightLayoutCache$FHTreeStateNode::getPathForRow(int32_t row, int32_t nextRow, $FixedHeightLayoutCache$SearchInfo* info) {
	$useLocalCurrentObjectStackCache();
	if (this->row == row) {
		$set($nc(info), node, this);
		info->isNodeParentNode = false;
		info->childIndex = this->childIndex;
		return true;
	}
	$var(FixedHeightLayoutCache$FHTreeStateNode, child, nullptr);
	$var(FixedHeightLayoutCache$FHTreeStateNode, lastChild, nullptr);
	{
		int32_t counter = 0;
		int32_t maxCounter = getChildCount();
		for (; counter < maxCounter; ++counter) {
			$assign(child, $cast(FixedHeightLayoutCache$FHTreeStateNode, getChildAt(counter)));
			if ($nc(child)->row > row) {
				if (counter == 0) {
					$set($nc(info), node, this);
					info->isNodeParentNode = true;
					info->childIndex = row - this->row - 1;
					return true;
				} else {
					int32_t lastChildEndRow = 1 + child->row - (child->childIndex - $nc(lastChild)->childIndex);
					if (row < lastChildEndRow) {
						return lastChild->getPathForRow(row, lastChildEndRow, info);
					}
					$set($nc(info), node, this);
					info->isNodeParentNode = true;
					info->childIndex = row - lastChildEndRow + lastChild->childIndex + 1;
					return true;
				}
			}
			$assign(lastChild, child);
		}
	}
	if (lastChild != nullptr) {
		int32_t lastChildEndRow = nextRow - (this->childCount - lastChild->childIndex) + 1;
		if (row < lastChildEndRow) {
			return lastChild->getPathForRow(row, lastChildEndRow, info);
		}
		$set($nc(info), node, this);
		info->isNodeParentNode = true;
		info->childIndex = row - lastChildEndRow + lastChild->childIndex + 1;
		return true;
	} else {
		int32_t retChildIndex = row - this->row - 1;
		if (retChildIndex >= this->childCount) {
			return false;
		}
		$set($nc(info), node, this);
		info->isNodeParentNode = true;
		info->childIndex = retChildIndex;
		return true;
	}
}

int32_t FixedHeightLayoutCache$FHTreeStateNode::getCountTo(int32_t stopIndex) {
	$useLocalCurrentObjectStackCache();
	$var(FixedHeightLayoutCache$FHTreeStateNode, aChild, nullptr);
	int32_t retCount = stopIndex + 1;
	{
		int32_t counter = 0;
		int32_t maxCounter = getChildCount();
		for (; counter < maxCounter; ++counter) {
			$assign(aChild, $cast(FixedHeightLayoutCache$FHTreeStateNode, getChildAt(counter)));
			if ($nc(aChild)->childIndex >= stopIndex) {
				counter = maxCounter;
			} else {
				retCount += aChild->getTotalChildCount();
			}
		}
	}
	if (this->parent != nullptr) {
		return retCount + $nc(($cast(FixedHeightLayoutCache$FHTreeStateNode, $(getParent()))))->getCountTo(this->childIndex);
	}
	if (!this->this$0->isRootVisible()) {
		return (retCount - 1);
	}
	return retCount;
}

int32_t FixedHeightLayoutCache$FHTreeStateNode::getNumExpandedChildrenTo(int32_t stopIndex) {
	$var(FixedHeightLayoutCache$FHTreeStateNode, aChild, nullptr);
	int32_t retCount = stopIndex;
	{
		int32_t counter = 0;
		int32_t maxCounter = getChildCount();
		for (; counter < maxCounter; ++counter) {
			$assign(aChild, $cast(FixedHeightLayoutCache$FHTreeStateNode, getChildAt(counter)));
			if ($nc(aChild)->childIndex >= stopIndex) {
				return retCount;
			} else {
				retCount += aChild->getTotalChildCount();
			}
		}
	}
	return retCount;
}

void FixedHeightLayoutCache$FHTreeStateNode::didAdjustTree() {
}

FixedHeightLayoutCache$FHTreeStateNode::FixedHeightLayoutCache$FHTreeStateNode() {
}

$Class* FixedHeightLayoutCache$FHTreeStateNode::load$($String* name, bool initialize) {
	$loadClass(FixedHeightLayoutCache$FHTreeStateNode, name, initialize, &_FixedHeightLayoutCache$FHTreeStateNode_ClassInfo_, allocate$FixedHeightLayoutCache$FHTreeStateNode);
	return class$;
}

$Class* FixedHeightLayoutCache$FHTreeStateNode::class$ = nullptr;

		} // tree
	} // swing
} // javax