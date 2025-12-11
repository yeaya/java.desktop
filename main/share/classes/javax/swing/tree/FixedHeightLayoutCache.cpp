#include <javax/swing/tree/FixedHeightLayoutCache.h>

#include <java/awt/Rectangle.h>
#include <java/lang/Math.h>
#include <java/util/Enumeration.h>
#include <java/util/Hashtable.h>
#include <java/util/Stack.h>
#include <javax/swing/event/TreeModelEvent.h>
#include <javax/swing/tree/AbstractLayoutCache.h>
#include <javax/swing/tree/DefaultMutableTreeNode.h>
#include <javax/swing/tree/FixedHeightLayoutCache$FHTreeStateNode.h>
#include <javax/swing/tree/FixedHeightLayoutCache$SearchInfo.h>
#include <javax/swing/tree/FixedHeightLayoutCache$VisibleFHTreeStateNodeEnumeration.h>
#include <javax/swing/tree/MutableTreeNode.h>
#include <javax/swing/tree/TreeModel.h>
#include <javax/swing/tree/TreeNode.h>
#include <javax/swing/tree/TreePath.h>
#include <javax/swing/tree/TreeSelectionModel.h>
#include <sun/swing/SwingUtilities2.h>
#include <jcpp.h>

using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Enumeration = ::java::util::Enumeration;
using $Hashtable = ::java::util::Hashtable;
using $Stack = ::java::util::Stack;
using $TreeModelEvent = ::javax::swing::event::TreeModelEvent;
using $AbstractLayoutCache = ::javax::swing::tree::AbstractLayoutCache;
using $DefaultMutableTreeNode = ::javax::swing::tree::DefaultMutableTreeNode;
using $FixedHeightLayoutCache$FHTreeStateNode = ::javax::swing::tree::FixedHeightLayoutCache$FHTreeStateNode;
using $FixedHeightLayoutCache$SearchInfo = ::javax::swing::tree::FixedHeightLayoutCache$SearchInfo;
using $FixedHeightLayoutCache$VisibleFHTreeStateNodeEnumeration = ::javax::swing::tree::FixedHeightLayoutCache$VisibleFHTreeStateNodeEnumeration;
using $MutableTreeNode = ::javax::swing::tree::MutableTreeNode;
using $TreeModel = ::javax::swing::tree::TreeModel;
using $TreeNode = ::javax::swing::tree::TreeNode;
using $TreePath = ::javax::swing::tree::TreePath;
using $TreeSelectionModel = ::javax::swing::tree::TreeSelectionModel;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;

namespace javax {
	namespace swing {
		namespace tree {

$FieldInfo _FixedHeightLayoutCache_FieldInfo_[] = {
	{"root", "Ljavax/swing/tree/FixedHeightLayoutCache$FHTreeStateNode;", nullptr, $PRIVATE, $field(FixedHeightLayoutCache, root)},
	{"rowCount", "I", nullptr, $PRIVATE, $field(FixedHeightLayoutCache, rowCount)},
	{"boundsBuffer", "Ljava/awt/Rectangle;", nullptr, $PRIVATE, $field(FixedHeightLayoutCache, boundsBuffer)},
	{"treePathMapping", "Ljava/util/Hashtable;", "Ljava/util/Hashtable<Ljavax/swing/tree/TreePath;Ljavax/swing/tree/FixedHeightLayoutCache$FHTreeStateNode;>;", $PRIVATE, $field(FixedHeightLayoutCache, treePathMapping)},
	{"info", "Ljavax/swing/tree/FixedHeightLayoutCache$SearchInfo;", nullptr, $PRIVATE, $field(FixedHeightLayoutCache, info)},
	{"tempStacks", "Ljava/util/Stack;", "Ljava/util/Stack<Ljava/util/Stack<Ljavax/swing/tree/TreePath;>;>;", $PRIVATE, $field(FixedHeightLayoutCache, tempStacks)},
	{}
};

$MethodInfo _FixedHeightLayoutCache_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FixedHeightLayoutCache::*)()>(&FixedHeightLayoutCache::init$))},
	{"addMapping", "(Ljavax/swing/tree/FixedHeightLayoutCache$FHTreeStateNode;)V", nullptr, $PRIVATE, $method(static_cast<void(FixedHeightLayoutCache::*)($FixedHeightLayoutCache$FHTreeStateNode*)>(&FixedHeightLayoutCache::addMapping))},
	{"adjustRowCountBy", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(FixedHeightLayoutCache::*)(int32_t)>(&FixedHeightLayoutCache::adjustRowCountBy))},
	{"createNodeForValue", "(Ljava/lang/Object;I)Ljavax/swing/tree/FixedHeightLayoutCache$FHTreeStateNode;", nullptr, $PRIVATE, $method(static_cast<$FixedHeightLayoutCache$FHTreeStateNode*(FixedHeightLayoutCache::*)(Object$*,int32_t)>(&FixedHeightLayoutCache::createNodeForValue))},
	{"ensurePathIsExpanded", "(Ljavax/swing/tree/TreePath;Z)Z", nullptr, $PRIVATE, $method(static_cast<bool(FixedHeightLayoutCache::*)($TreePath*,bool)>(&FixedHeightLayoutCache::ensurePathIsExpanded))},
	{"getBounds", "(Ljavax/swing/tree/TreePath;Ljava/awt/Rectangle;)Ljava/awt/Rectangle;", nullptr, $PUBLIC},
	{"getBounds", "(Ljavax/swing/tree/FixedHeightLayoutCache$FHTreeStateNode;ILjava/awt/Rectangle;)Ljava/awt/Rectangle;", nullptr, $PRIVATE, $method(static_cast<$Rectangle*(FixedHeightLayoutCache::*)($FixedHeightLayoutCache$FHTreeStateNode*,int32_t,$Rectangle*)>(&FixedHeightLayoutCache::getBounds))},
	{"getExpandedState", "(Ljavax/swing/tree/TreePath;)Z", nullptr, $PUBLIC},
	{"getMapping", "(Ljavax/swing/tree/TreePath;)Ljavax/swing/tree/FixedHeightLayoutCache$FHTreeStateNode;", nullptr, $PRIVATE, $method(static_cast<$FixedHeightLayoutCache$FHTreeStateNode*(FixedHeightLayoutCache::*)($TreePath*)>(&FixedHeightLayoutCache::getMapping))},
	{"getNodeForPath", "(Ljavax/swing/tree/TreePath;ZZ)Ljavax/swing/tree/FixedHeightLayoutCache$FHTreeStateNode;", nullptr, $PRIVATE, $method(static_cast<$FixedHeightLayoutCache$FHTreeStateNode*(FixedHeightLayoutCache::*)($TreePath*,bool,bool)>(&FixedHeightLayoutCache::getNodeForPath))},
	{"getPathClosestTo", "(II)Ljavax/swing/tree/TreePath;", nullptr, $PUBLIC},
	{"getPathForRow", "(I)Ljavax/swing/tree/TreePath;", nullptr, $PUBLIC},
	{"getRowContainingYLocation", "(I)I", nullptr, $PRIVATE, $method(static_cast<int32_t(FixedHeightLayoutCache::*)(int32_t)>(&FixedHeightLayoutCache::getRowContainingYLocation))},
	{"getRowCount", "()I", nullptr, $PUBLIC},
	{"getRowForPath", "(Ljavax/swing/tree/TreePath;)I", nullptr, $PUBLIC},
	{"getVisibleChildCount", "(Ljavax/swing/tree/TreePath;)I", nullptr, $PUBLIC},
	{"getVisiblePathsFrom", "(Ljavax/swing/tree/TreePath;)Ljava/util/Enumeration;", "(Ljavax/swing/tree/TreePath;)Ljava/util/Enumeration<Ljavax/swing/tree/TreePath;>;", $PUBLIC},
	{"invalidatePathBounds", "(Ljavax/swing/tree/TreePath;)V", nullptr, $PUBLIC},
	{"invalidateSizes", "()V", nullptr, $PUBLIC},
	{"isExpanded", "(Ljavax/swing/tree/TreePath;)Z", nullptr, $PUBLIC},
	{"rebuild", "(Z)V", nullptr, $PRIVATE, $method(static_cast<void(FixedHeightLayoutCache::*)(bool)>(&FixedHeightLayoutCache::rebuild))},
	{"removeMapping", "(Ljavax/swing/tree/FixedHeightLayoutCache$FHTreeStateNode;)V", nullptr, $PRIVATE, $method(static_cast<void(FixedHeightLayoutCache::*)($FixedHeightLayoutCache$FHTreeStateNode*)>(&FixedHeightLayoutCache::removeMapping))},
	{"setExpandedState", "(Ljavax/swing/tree/TreePath;Z)V", nullptr, $PUBLIC},
	{"setModel", "(Ljavax/swing/tree/TreeModel;)V", nullptr, $PUBLIC},
	{"setRootVisible", "(Z)V", nullptr, $PUBLIC},
	{"setRowHeight", "(I)V", nullptr, $PUBLIC},
	{"treeNodesChanged", "(Ljavax/swing/event/TreeModelEvent;)V", nullptr, $PUBLIC},
	{"treeNodesInserted", "(Ljavax/swing/event/TreeModelEvent;)V", nullptr, $PUBLIC},
	{"treeNodesRemoved", "(Ljavax/swing/event/TreeModelEvent;)V", nullptr, $PUBLIC},
	{"treeStructureChanged", "(Ljavax/swing/event/TreeModelEvent;)V", nullptr, $PUBLIC},
	{"visibleNodesChanged", "()V", nullptr, $PRIVATE, $method(static_cast<void(FixedHeightLayoutCache::*)()>(&FixedHeightLayoutCache::visibleNodesChanged))},
	{}
};

$InnerClassInfo _FixedHeightLayoutCache_InnerClassesInfo_[] = {
	{"javax.swing.tree.FixedHeightLayoutCache$VisibleFHTreeStateNodeEnumeration", "javax.swing.tree.FixedHeightLayoutCache", "VisibleFHTreeStateNodeEnumeration", $PRIVATE},
	{"javax.swing.tree.FixedHeightLayoutCache$SearchInfo", "javax.swing.tree.FixedHeightLayoutCache", "SearchInfo", $PRIVATE},
	{"javax.swing.tree.FixedHeightLayoutCache$FHTreeStateNode", "javax.swing.tree.FixedHeightLayoutCache", "FHTreeStateNode", $PRIVATE},
	{}
};

$ClassInfo _FixedHeightLayoutCache_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.tree.FixedHeightLayoutCache",
	"javax.swing.tree.AbstractLayoutCache",
	nullptr,
	_FixedHeightLayoutCache_FieldInfo_,
	_FixedHeightLayoutCache_MethodInfo_,
	nullptr,
	nullptr,
	_FixedHeightLayoutCache_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.tree.FixedHeightLayoutCache$VisibleFHTreeStateNodeEnumeration,javax.swing.tree.FixedHeightLayoutCache$SearchInfo,javax.swing.tree.FixedHeightLayoutCache$FHTreeStateNode"
};

$Object* allocate$FixedHeightLayoutCache($Class* clazz) {
	return $of($alloc(FixedHeightLayoutCache));
}

void FixedHeightLayoutCache::init$() {
	$AbstractLayoutCache::init$();
	$set(this, tempStacks, $new($Stack));
	$set(this, boundsBuffer, $new($Rectangle));
	$set(this, treePathMapping, $new($Hashtable));
	$set(this, info, $new($FixedHeightLayoutCache$SearchInfo, this));
	setRowHeight(1);
}

void FixedHeightLayoutCache::setModel($TreeModel* newModel) {
	$AbstractLayoutCache::setModel(newModel);
	rebuild(false);
}

void FixedHeightLayoutCache::setRootVisible(bool rootVisible) {
	if (isRootVisible() != rootVisible) {
		$AbstractLayoutCache::setRootVisible(rootVisible);
		if (this->root != nullptr) {
			if (rootVisible) {
				++this->rowCount;
				$nc(this->root)->adjustRowBy(1);
			} else {
				--this->rowCount;
				$nc(this->root)->adjustRowBy(-1);
			}
			visibleNodesChanged();
		}
	}
}

void FixedHeightLayoutCache::setRowHeight(int32_t rowHeight) {
	if (rowHeight <= 0) {
		$throwNew($IllegalArgumentException, "FixedHeightLayoutCache only supports row heights greater than 0"_s);
	}
	if (getRowHeight() != rowHeight) {
		$AbstractLayoutCache::setRowHeight(rowHeight);
		visibleNodesChanged();
	}
}

int32_t FixedHeightLayoutCache::getRowCount() {
	return this->rowCount;
}

void FixedHeightLayoutCache::invalidatePathBounds($TreePath* path) {
}

void FixedHeightLayoutCache::invalidateSizes() {
	visibleNodesChanged();
}

bool FixedHeightLayoutCache::isExpanded($TreePath* path) {
	if (path != nullptr) {
		$var($FixedHeightLayoutCache$FHTreeStateNode, lastNode, getNodeForPath(path, true, false));
		return (lastNode != nullptr && lastNode->isExpanded());
	}
	return false;
}

$Rectangle* FixedHeightLayoutCache::getBounds($TreePath* path, $Rectangle* placeIn) {
	$useLocalCurrentObjectStackCache();
	if (path == nullptr) {
		return nullptr;
	}
	$var($FixedHeightLayoutCache$FHTreeStateNode, node, getNodeForPath(path, true, false));
	if (node != nullptr) {
		return getBounds(node, -1, placeIn);
	}
	$var($TreePath, parentPath, $nc(path)->getParentPath());
	$assign(node, getNodeForPath(parentPath, true, false));
	if (node != nullptr && node->isExpanded()) {
		$var($Object, var$0, $nc(parentPath)->getLastPathComponent());
		int32_t childIndex = $nc(this->treeModel)->getIndexOfChild(var$0, $(path->getLastPathComponent()));
		if (childIndex != -1) {
			return getBounds(node, childIndex, placeIn);
		}
	}
	return nullptr;
}

$TreePath* FixedHeightLayoutCache::getPathForRow(int32_t row) {
	if (row >= 0 && row < getRowCount()) {
		if ($nc(this->root)->getPathForRow(row, getRowCount(), this->info)) {
			return $nc(this->info)->getPath();
		}
	}
	return nullptr;
}

int32_t FixedHeightLayoutCache::getRowForPath($TreePath* path) {
	$useLocalCurrentObjectStackCache();
	if (path == nullptr || this->root == nullptr) {
		return -1;
	}
	$var($FixedHeightLayoutCache$FHTreeStateNode, node, getNodeForPath(path, true, false));
	if (node != nullptr) {
		return node->getRow();
	}
	$var($TreePath, parentPath, $nc(path)->getParentPath());
	$assign(node, getNodeForPath(parentPath, true, false));
	if (node != nullptr && node->isExpanded()) {
		$var($Object, var$0, $nc(parentPath)->getLastPathComponent());
		return node->getRowToModelIndex($nc(this->treeModel)->getIndexOfChild(var$0, $(path->getLastPathComponent())));
	}
	return -1;
}

$TreePath* FixedHeightLayoutCache::getPathClosestTo(int32_t x, int32_t y) {
	if (getRowCount() == 0) {
		return nullptr;
	}
	int32_t row = getRowContainingYLocation(y);
	return getPathForRow(row);
}

int32_t FixedHeightLayoutCache::getVisibleChildCount($TreePath* path) {
	$var($FixedHeightLayoutCache$FHTreeStateNode, node, getNodeForPath(path, true, false));
	if (node == nullptr) {
		return 0;
	}
	return $nc(node)->getTotalChildCount();
}

$Enumeration* FixedHeightLayoutCache::getVisiblePathsFrom($TreePath* path) {
	$useLocalCurrentObjectStackCache();
	if (path == nullptr) {
		return nullptr;
	}
	$var($FixedHeightLayoutCache$FHTreeStateNode, node, getNodeForPath(path, true, false));
	if (node != nullptr) {
		return $new($FixedHeightLayoutCache$VisibleFHTreeStateNodeEnumeration, this, node);
	}
	$var($TreePath, parentPath, $nc(path)->getParentPath());
	$assign(node, getNodeForPath(parentPath, true, false));
	if (node != nullptr && node->isExpanded()) {
		$var($Object, var$0, $nc(parentPath)->getLastPathComponent());
		return $new($FixedHeightLayoutCache$VisibleFHTreeStateNodeEnumeration, this, node, $nc(this->treeModel)->getIndexOfChild(var$0, $(path->getLastPathComponent())));
	}
	return nullptr;
}

void FixedHeightLayoutCache::setExpandedState($TreePath* path, bool isExpanded) {
	$useLocalCurrentObjectStackCache();
	if (isExpanded) {
		ensurePathIsExpanded(path, true);
	} else if (path != nullptr) {
		$var($TreePath, parentPath, path->getParentPath());
		if (parentPath != nullptr) {
			$var($FixedHeightLayoutCache$FHTreeStateNode, parentNode, getNodeForPath(parentPath, false, true));
			if (parentNode != nullptr) {
				parentNode->makeVisible();
			}
		}
		$var($FixedHeightLayoutCache$FHTreeStateNode, childNode, getNodeForPath(path, true, false));
		if (childNode != nullptr) {
			childNode->collapse(true);
		}
	}
}

bool FixedHeightLayoutCache::getExpandedState($TreePath* path) {
	$var($FixedHeightLayoutCache$FHTreeStateNode, node, getNodeForPath(path, true, false));
	bool var$0 = false;
	if (node != nullptr) {
		bool var$1 = $nc(node)->isVisible();
		var$0 = (var$1 && node->isExpanded());
	} else {
		var$0 = false;
	}
	return var$0;
}

void FixedHeightLayoutCache::treeNodesChanged($TreeModelEvent* e) {
	$useLocalCurrentObjectStackCache();
	if (e != nullptr) {
		$var($ints, changedIndexs, nullptr);
		$var($FixedHeightLayoutCache$FHTreeStateNode, changedParent, getNodeForPath($($SwingUtilities2::getTreePath(e, $(getModel()))), false, false));
		int32_t maxCounter = 0;
		$assign(changedIndexs, e->getChildIndices());
		if (changedParent != nullptr) {
			if (changedIndexs != nullptr && (maxCounter = changedIndexs->length) > 0) {
				$var($Object, parentValue, changedParent->getUserObject());
				for (int32_t counter = 0; counter < maxCounter; ++counter) {
					$var($FixedHeightLayoutCache$FHTreeStateNode, child, changedParent->getChildAtModelIndex(changedIndexs->get(counter)));
					if (child != nullptr) {
						child->setUserObject($($nc(this->treeModel)->getChild(parentValue, changedIndexs->get(counter))));
					}
				}
				bool var$0 = changedParent->isVisible();
				if (var$0 && changedParent->isExpanded()) {
					visibleNodesChanged();
				}
			} else {
				bool var$2 = changedParent == this->root && changedParent->isVisible();
				if (var$2 && changedParent->isExpanded()) {
					visibleNodesChanged();
				}
			}
		}
	}
}

void FixedHeightLayoutCache::treeNodesInserted($TreeModelEvent* e) {
	$useLocalCurrentObjectStackCache();
	if (e != nullptr) {
		$var($ints, changedIndexs, nullptr);
		$var($FixedHeightLayoutCache$FHTreeStateNode, changedParent, getNodeForPath($($SwingUtilities2::getTreePath(e, $(getModel()))), false, false));
		int32_t maxCounter = 0;
		$assign(changedIndexs, e->getChildIndices());
		if (changedParent != nullptr && changedIndexs != nullptr && (maxCounter = changedIndexs->length) > 0) {
			bool var$0 = changedParent->isVisible();
			bool isVisible = (var$0 && changedParent->isExpanded());
			for (int32_t counter = 0; counter < maxCounter; ++counter) {
				changedParent->childInsertedAtModelIndex(changedIndexs->get(counter), isVisible);
			}
			if (isVisible && this->treeSelectionModel != nullptr) {
				$nc(this->treeSelectionModel)->resetRowSelection();
			}
			if (changedParent->isVisible()) {
				this->visibleNodesChanged();
			}
		}
	}
}

void FixedHeightLayoutCache::treeNodesRemoved($TreeModelEvent* e) {
	$useLocalCurrentObjectStackCache();
	if (e != nullptr) {
		$var($ints, changedIndexs, nullptr);
		int32_t maxCounter = 0;
		$var($TreePath, parentPath, $SwingUtilities2::getTreePath(e, $(getModel())));
		$var($FixedHeightLayoutCache$FHTreeStateNode, changedParentNode, getNodeForPath(parentPath, false, false));
		$assign(changedIndexs, e->getChildIndices());
		if (changedParentNode != nullptr && changedIndexs != nullptr && (maxCounter = changedIndexs->length) > 0) {
			$var($ObjectArray, children, e->getChildren());
			bool var$0 = changedParentNode->isVisible();
			bool isVisible = (var$0 && changedParentNode->isExpanded());
			for (int32_t counter = maxCounter - 1; counter >= 0; --counter) {
				changedParentNode->removeChildAtModelIndex(changedIndexs->get(counter), isVisible);
			}
			if (isVisible) {
				if (this->treeSelectionModel != nullptr) {
					$nc(this->treeSelectionModel)->resetRowSelection();
				}
				bool var$1 = $nc(this->treeModel)->getChildCount($(changedParentNode->getUserObject())) == 0;
				if (var$1 && changedParentNode->isLeaf()) {
					changedParentNode->collapse(false);
				}
				visibleNodesChanged();
			} else if (changedParentNode->isVisible()) {
				visibleNodesChanged();
			}
		}
	}
}

void FixedHeightLayoutCache::treeStructureChanged($TreeModelEvent* e) {
	$useLocalCurrentObjectStackCache();
	if (e != nullptr) {
		$var($TreePath, changedPath, $SwingUtilities2::getTreePath(e, $(getModel())));
		$var($FixedHeightLayoutCache$FHTreeStateNode, changedNode, getNodeForPath(changedPath, false, false));
		bool var$0 = changedNode == this->root;
		if (!var$0) {
			bool var$1 = changedNode == nullptr;
			if (var$1) {
				bool var$2 = (changedPath == nullptr && this->treeModel != nullptr && $nc(this->treeModel)->getRoot() == nullptr);
				var$1 = (var$2 || (changedPath != nullptr && changedPath->getPathCount() <= 1));
			}
			var$0 = (var$1);
		}
		if (var$0) {
			rebuild(true);
		} else if (changedNode != nullptr) {
			bool wasExpanded = false;
			bool wasVisible = false;
			$var($FixedHeightLayoutCache$FHTreeStateNode, parent, $cast($FixedHeightLayoutCache$FHTreeStateNode, changedNode->getParent()));
			wasExpanded = changedNode->isExpanded();
			wasVisible = changedNode->isVisible();
			int32_t index = $nc(parent)->getIndex(changedNode);
			changedNode->collapse(false);
			parent->remove(index);
			if (wasVisible && wasExpanded) {
				int32_t row = changedNode->getRow();
				parent->resetChildrenRowsFrom(row, index, changedNode->getChildIndex());
				$assign(changedNode, getNodeForPath(changedPath, false, true));
				$nc(changedNode)->expand();
			}
			if (this->treeSelectionModel != nullptr && wasVisible && wasExpanded) {
				$nc(this->treeSelectionModel)->resetRowSelection();
			}
			if (wasVisible) {
				this->visibleNodesChanged();
			}
		}
	}
}

void FixedHeightLayoutCache::visibleNodesChanged() {
}

$Rectangle* FixedHeightLayoutCache::getBounds($FixedHeightLayoutCache$FHTreeStateNode* parent, int32_t childIndex, $Rectangle* placeIn$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle, placeIn, placeIn$renamed);
	bool expanded = false;
	int32_t level = 0;
	int32_t row = 0;
	$var($Object, value, nullptr);
	if (childIndex == -1) {
		row = $nc(parent)->getRow();
		$assign(value, parent->getUserObject());
		expanded = parent->isExpanded();
		level = parent->getLevel();
	} else {
		row = $nc(parent)->getRowToModelIndex(childIndex);
		$assign(value, $nc(this->treeModel)->getChild($(parent->getUserObject()), childIndex));
		expanded = false;
		level = parent->getLevel() + 1;
	}
	$var($Rectangle, bounds, getNodeDimensions(value, row, level, expanded, this->boundsBuffer));
	if (bounds == nullptr) {
		return nullptr;
	}
	if (placeIn == nullptr) {
		$assign(placeIn, $new($Rectangle));
	}
	$nc(placeIn)->x = $nc(bounds)->x;
	placeIn->height = getRowHeight();
	placeIn->y = row * placeIn->height;
	placeIn->width = bounds->width;
	return placeIn;
}

void FixedHeightLayoutCache::adjustRowCountBy(int32_t changeAmount) {
	this->rowCount += changeAmount;
}

void FixedHeightLayoutCache::addMapping($FixedHeightLayoutCache$FHTreeStateNode* node) {
	$nc(this->treePathMapping)->put($($nc(node)->getTreePath()), node);
}

void FixedHeightLayoutCache::removeMapping($FixedHeightLayoutCache$FHTreeStateNode* node) {
	$nc(this->treePathMapping)->remove($($nc(node)->getTreePath()));
}

$FixedHeightLayoutCache$FHTreeStateNode* FixedHeightLayoutCache::getMapping($TreePath* path) {
	return $cast($FixedHeightLayoutCache$FHTreeStateNode, $nc(this->treePathMapping)->get(path));
}

void FixedHeightLayoutCache::rebuild(bool clearSelection) {
	$var($Object, rootUO, nullptr);
	$nc(this->treePathMapping)->clear();
	if (this->treeModel != nullptr && ($assign(rootUO, $nc(this->treeModel)->getRoot())) != nullptr) {
		$set(this, root, createNodeForValue(rootUO, 0));
		$set($nc(this->root), path, $new($TreePath, rootUO));
		addMapping(this->root);
		if (isRootVisible()) {
			this->rowCount = 1;
			$nc(this->root)->row = 0;
		} else {
			this->rowCount = 0;
			$nc(this->root)->row = -1;
		}
		$nc(this->root)->expand();
	} else {
		$set(this, root, nullptr);
		this->rowCount = 0;
	}
	if (clearSelection && this->treeSelectionModel != nullptr) {
		$nc(this->treeSelectionModel)->clearSelection();
	}
	this->visibleNodesChanged();
}

int32_t FixedHeightLayoutCache::getRowContainingYLocation(int32_t location) {
	if (getRowCount() == 0) {
		return -1;
	}
	int32_t var$0 = getRowCount() - 1;
	return $Math::max(0, $Math::min(var$0, $div(location, getRowHeight())));
}

bool FixedHeightLayoutCache::ensurePathIsExpanded($TreePath* aPath$renamed, bool expandLast) {
	$useLocalCurrentObjectStackCache();
	$var($TreePath, aPath, aPath$renamed);
	if (aPath != nullptr) {
		if ($nc(this->treeModel)->isLeaf($(aPath->getLastPathComponent()))) {
			$assign(aPath, aPath->getParentPath());
			expandLast = true;
		}
		if (aPath != nullptr) {
			$var($FixedHeightLayoutCache$FHTreeStateNode, lastNode, getNodeForPath(aPath, false, true));
			if (lastNode != nullptr) {
				lastNode->makeVisible();
				if (expandLast) {
					lastNode->expand();
				}
				return true;
			}
		}
	}
	return false;
}

$FixedHeightLayoutCache$FHTreeStateNode* FixedHeightLayoutCache::createNodeForValue(Object$* value, int32_t childIndex) {
	return $new($FixedHeightLayoutCache$FHTreeStateNode, this, value, childIndex, -1);
}

$FixedHeightLayoutCache$FHTreeStateNode* FixedHeightLayoutCache::getNodeForPath($TreePath* path$renamed, bool onlyIfVisible, bool shouldCreate) {
	$useLocalCurrentObjectStackCache();
	$var($TreePath, path, path$renamed);
	if (path != nullptr) {
		$var($FixedHeightLayoutCache$FHTreeStateNode, node, nullptr);
		$assign(node, getMapping(path));
		if (node != nullptr) {
			if (onlyIfVisible && !node->isVisible()) {
				return nullptr;
			}
			return node;
		}
		if (onlyIfVisible) {
			return nullptr;
		}
		$var($Stack, paths, nullptr);
		if ($nc(this->tempStacks)->size() == 0) {
			$assign(paths, $new($Stack));
		} else {
			$assign(paths, $cast($Stack, $nc(this->tempStacks)->pop()));
		}
		{
			$var($Throwable, var$0, nullptr);
			$var($FixedHeightLayoutCache$FHTreeStateNode, var$2, nullptr);
			bool return$1 = false;
			try {
				$nc(paths)->push(path);
				$assign(path, path->getParentPath());
				$assign(node, nullptr);
				while (path != nullptr) {
					$assign(node, getMapping(path));
					if (node != nullptr) {
						while (node != nullptr && paths->size() > 0) {
							$assign(path, $cast($TreePath, paths->pop()));
							$assign(node, node->createChildFor($($nc(path)->getLastPathComponent())));
						}
						$assign(var$2, node);
						return$1 = true;
						goto $finally;
					}
					paths->push(path);
					$assign(path, path->getParentPath());
				}
			} catch ($Throwable& var$3) {
				$assign(var$0, var$3);
			} $finally: {
				$nc(paths)->removeAllElements();
				$nc(this->tempStacks)->push(paths);
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
			if (return$1) {
				return var$2;
			}
		}
		return nullptr;
	}
	return nullptr;
}

FixedHeightLayoutCache::FixedHeightLayoutCache() {
}

$Class* FixedHeightLayoutCache::load$($String* name, bool initialize) {
	$loadClass(FixedHeightLayoutCache, name, initialize, &_FixedHeightLayoutCache_ClassInfo_, allocate$FixedHeightLayoutCache);
	return class$;
}

$Class* FixedHeightLayoutCache::class$ = nullptr;

		} // tree
	} // swing
} // javax