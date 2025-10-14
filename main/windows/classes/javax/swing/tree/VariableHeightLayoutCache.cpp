#include <javax/swing/tree/VariableHeightLayoutCache.h>

#include <java/awt/Rectangle.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NamedAttribute.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Enumeration.h>
#include <java/util/Hashtable.h>
#include <java/util/Stack.h>
#include <java/util/Vector.h>
#include <javax/swing/event/TreeModelEvent.h>
#include <javax/swing/tree/AbstractLayoutCache$NodeDimensions.h>
#include <javax/swing/tree/AbstractLayoutCache.h>
#include <javax/swing/tree/DefaultMutableTreeNode.h>
#include <javax/swing/tree/MutableTreeNode.h>
#include <javax/swing/tree/TreeModel.h>
#include <javax/swing/tree/TreeNode.h>
#include <javax/swing/tree/TreePath.h>
#include <javax/swing/tree/TreeSelectionModel.h>
#include <javax/swing/tree/VariableHeightLayoutCache$TreeStateNode.h>
#include <javax/swing/tree/VariableHeightLayoutCache$VisibleTreeStateNodeEnumeration.h>
#include <sun/swing/SwingUtilities2.h>
#include <jcpp.h>

using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Enumeration = ::java::util::Enumeration;
using $Hashtable = ::java::util::Hashtable;
using $Stack = ::java::util::Stack;
using $Vector = ::java::util::Vector;
using $TreeModelEvent = ::javax::swing::event::TreeModelEvent;
using $AbstractLayoutCache = ::javax::swing::tree::AbstractLayoutCache;
using $AbstractLayoutCache$NodeDimensions = ::javax::swing::tree::AbstractLayoutCache$NodeDimensions;
using $DefaultMutableTreeNode = ::javax::swing::tree::DefaultMutableTreeNode;
using $MutableTreeNode = ::javax::swing::tree::MutableTreeNode;
using $TreeModel = ::javax::swing::tree::TreeModel;
using $TreeNode = ::javax::swing::tree::TreeNode;
using $TreePath = ::javax::swing::tree::TreePath;
using $TreeSelectionModel = ::javax::swing::tree::TreeSelectionModel;
using $VariableHeightLayoutCache$TreeStateNode = ::javax::swing::tree::VariableHeightLayoutCache$TreeStateNode;
using $VariableHeightLayoutCache$VisibleTreeStateNodeEnumeration = ::javax::swing::tree::VariableHeightLayoutCache$VisibleTreeStateNodeEnumeration;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;

namespace javax {
	namespace swing {
		namespace tree {

$NamedAttribute VariableHeightLayoutCache_Attribute_var$0[] = {
	{"description", 's', "The TreeModel that will provide the data."},
	{}
};

$CompoundAttribute _VariableHeightLayoutCache_MethodAnnotations_setModel27[] = {
	{"Ljava/beans/BeanProperty;", VariableHeightLayoutCache_Attribute_var$0},
	{}
};

$NamedAttribute VariableHeightLayoutCache_Attribute_var$1[] = {
	{"description", 's', "Whether or not the root node from the TreeModel is visible."},
	{}
};

$CompoundAttribute _VariableHeightLayoutCache_MethodAnnotations_setRootVisible29[] = {
	{"Ljava/beans/BeanProperty;", VariableHeightLayoutCache_Attribute_var$1},
	{}
};

$NamedAttribute VariableHeightLayoutCache_Attribute_var$2[] = {
	{"description", 's', "The height of each cell."},
	{}
};

$CompoundAttribute _VariableHeightLayoutCache_MethodAnnotations_setRowHeight30[] = {
	{"Ljava/beans/BeanProperty;", VariableHeightLayoutCache_Attribute_var$2},
	{}
};

$FieldInfo _VariableHeightLayoutCache_FieldInfo_[] = {
	{"visibleNodes", "Ljava/util/Vector;", "Ljava/util/Vector<Ljava/lang/Object;>;", $PRIVATE, $field(VariableHeightLayoutCache, visibleNodes)},
	{"updateNodeSizes", "Z", nullptr, $PRIVATE, $field(VariableHeightLayoutCache, updateNodeSizes$)},
	{"root", "Ljavax/swing/tree/VariableHeightLayoutCache$TreeStateNode;", nullptr, $PRIVATE, $field(VariableHeightLayoutCache, root)},
	{"boundsBuffer", "Ljava/awt/Rectangle;", nullptr, $PRIVATE, $field(VariableHeightLayoutCache, boundsBuffer)},
	{"treePathMapping", "Ljava/util/Hashtable;", "Ljava/util/Hashtable<Ljavax/swing/tree/TreePath;Ljavax/swing/tree/VariableHeightLayoutCache$TreeStateNode;>;", $PRIVATE, $field(VariableHeightLayoutCache, treePathMapping)},
	{"tempStacks", "Ljava/util/Stack;", "Ljava/util/Stack<Ljava/util/Stack<Ljavax/swing/tree/TreePath;>;>;", $PRIVATE, $field(VariableHeightLayoutCache, tempStacks)},
	{}
};

$MethodInfo _VariableHeightLayoutCache_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(VariableHeightLayoutCache::*)()>(&VariableHeightLayoutCache::init$))},
	{"addMapping", "(Ljavax/swing/tree/VariableHeightLayoutCache$TreeStateNode;)V", nullptr, $PRIVATE, $method(static_cast<void(VariableHeightLayoutCache::*)($VariableHeightLayoutCache$TreeStateNode*)>(&VariableHeightLayoutCache::addMapping))},
	{"createNodeAt", "(Ljavax/swing/tree/VariableHeightLayoutCache$TreeStateNode;I)Ljavax/swing/tree/VariableHeightLayoutCache$TreeStateNode;", nullptr, $PRIVATE, $method(static_cast<$VariableHeightLayoutCache$TreeStateNode*(VariableHeightLayoutCache::*)($VariableHeightLayoutCache$TreeStateNode*,int32_t)>(&VariableHeightLayoutCache::createNodeAt))},
	{"createNodeForValue", "(Ljava/lang/Object;)Ljavax/swing/tree/VariableHeightLayoutCache$TreeStateNode;", nullptr, $PRIVATE, $method(static_cast<$VariableHeightLayoutCache$TreeStateNode*(VariableHeightLayoutCache::*)(Object$*)>(&VariableHeightLayoutCache::createNodeForValue))},
	{"ensurePathIsExpanded", "(Ljavax/swing/tree/TreePath;Z)V", nullptr, $PRIVATE, $method(static_cast<void(VariableHeightLayoutCache::*)($TreePath*,bool)>(&VariableHeightLayoutCache::ensurePathIsExpanded))},
	{"getBounds", "(Ljavax/swing/tree/TreePath;Ljava/awt/Rectangle;)Ljava/awt/Rectangle;", nullptr, $PUBLIC},
	{"getBounds", "(ILjava/awt/Rectangle;)Ljava/awt/Rectangle;", nullptr, $PRIVATE, $method(static_cast<$Rectangle*(VariableHeightLayoutCache::*)(int32_t,$Rectangle*)>(&VariableHeightLayoutCache::getBounds))},
	{"getExpandedState", "(Ljavax/swing/tree/TreePath;)Z", nullptr, $PUBLIC},
	{"getMapping", "(Ljavax/swing/tree/TreePath;)Ljavax/swing/tree/VariableHeightLayoutCache$TreeStateNode;", nullptr, $PRIVATE, $method(static_cast<$VariableHeightLayoutCache$TreeStateNode*(VariableHeightLayoutCache::*)($TreePath*)>(&VariableHeightLayoutCache::getMapping))},
	{"getMaxNodeWidth", "()I", nullptr, $PRIVATE, $method(static_cast<int32_t(VariableHeightLayoutCache::*)()>(&VariableHeightLayoutCache::getMaxNodeWidth))},
	{"getNode", "(I)Ljavax/swing/tree/VariableHeightLayoutCache$TreeStateNode;", nullptr, $PRIVATE, $method(static_cast<$VariableHeightLayoutCache$TreeStateNode*(VariableHeightLayoutCache::*)(int32_t)>(&VariableHeightLayoutCache::getNode))},
	{"getNodeForPath", "(Ljavax/swing/tree/TreePath;ZZ)Ljavax/swing/tree/VariableHeightLayoutCache$TreeStateNode;", nullptr, $PRIVATE, $method(static_cast<$VariableHeightLayoutCache$TreeStateNode*(VariableHeightLayoutCache::*)($TreePath*,bool,bool)>(&VariableHeightLayoutCache::getNodeForPath))},
	{"getPathClosestTo", "(II)Ljavax/swing/tree/TreePath;", nullptr, $PUBLIC},
	{"getPathForRow", "(I)Ljavax/swing/tree/TreePath;", nullptr, $PUBLIC},
	{"getPreferredHeight", "()I", nullptr, $PUBLIC},
	{"getPreferredWidth", "(Ljava/awt/Rectangle;)I", nullptr, $PUBLIC},
	{"getRowContainingYLocation", "(I)I", nullptr, $PRIVATE, $method(static_cast<int32_t(VariableHeightLayoutCache::*)(int32_t)>(&VariableHeightLayoutCache::getRowContainingYLocation))},
	{"getRowCount", "()I", nullptr, $PUBLIC},
	{"getRowForPath", "(Ljavax/swing/tree/TreePath;)I", nullptr, $PUBLIC},
	{"getVisibleChildCount", "(Ljavax/swing/tree/TreePath;)I", nullptr, $PUBLIC},
	{"getVisiblePathsFrom", "(Ljavax/swing/tree/TreePath;)Ljava/util/Enumeration;", "(Ljavax/swing/tree/TreePath;)Ljava/util/Enumeration<Ljavax/swing/tree/TreePath;>;", $PUBLIC},
	{"invalidatePathBounds", "(Ljavax/swing/tree/TreePath;)V", nullptr, $PUBLIC},
	{"invalidateSizes", "()V", nullptr, $PUBLIC},
	{"isExpanded", "(Ljavax/swing/tree/TreePath;)Z", nullptr, $PUBLIC},
	{"rebuild", "(Z)V", nullptr, $PRIVATE, $method(static_cast<void(VariableHeightLayoutCache::*)(bool)>(&VariableHeightLayoutCache::rebuild))},
	{"removeMapping", "(Ljavax/swing/tree/VariableHeightLayoutCache$TreeStateNode;)V", nullptr, $PRIVATE, $method(static_cast<void(VariableHeightLayoutCache::*)($VariableHeightLayoutCache$TreeStateNode*)>(&VariableHeightLayoutCache::removeMapping))},
	{"setExpandedState", "(Ljavax/swing/tree/TreePath;Z)V", nullptr, $PUBLIC},
	{"setModel", "(Ljavax/swing/tree/TreeModel;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _VariableHeightLayoutCache_MethodAnnotations_setModel27},
	{"setNodeDimensions", "(Ljavax/swing/tree/AbstractLayoutCache$NodeDimensions;)V", nullptr, $PUBLIC},
	{"setRootVisible", "(Z)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _VariableHeightLayoutCache_MethodAnnotations_setRootVisible29},
	{"setRowHeight", "(I)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _VariableHeightLayoutCache_MethodAnnotations_setRowHeight30},
	{"treeNodesChanged", "(Ljavax/swing/event/TreeModelEvent;)V", nullptr, $PUBLIC},
	{"treeNodesInserted", "(Ljavax/swing/event/TreeModelEvent;)V", nullptr, $PUBLIC},
	{"treeNodesRemoved", "(Ljavax/swing/event/TreeModelEvent;)V", nullptr, $PUBLIC},
	{"treeStructureChanged", "(Ljavax/swing/event/TreeModelEvent;)V", nullptr, $PUBLIC},
	{"updateNodeSizes", "(Z)V", nullptr, $PRIVATE, $method(static_cast<void(VariableHeightLayoutCache::*)(bool)>(&VariableHeightLayoutCache::updateNodeSizes))},
	{"updateYLocationsFrom", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(VariableHeightLayoutCache::*)(int32_t)>(&VariableHeightLayoutCache::updateYLocationsFrom))},
	{"visibleNodesChanged", "()V", nullptr, $PRIVATE, $method(static_cast<void(VariableHeightLayoutCache::*)()>(&VariableHeightLayoutCache::visibleNodesChanged))},
	{}
};

$InnerClassInfo _VariableHeightLayoutCache_InnerClassesInfo_[] = {
	{"javax.swing.tree.VariableHeightLayoutCache$VisibleTreeStateNodeEnumeration", "javax.swing.tree.VariableHeightLayoutCache", "VisibleTreeStateNodeEnumeration", $PRIVATE},
	{"javax.swing.tree.VariableHeightLayoutCache$TreeStateNode", "javax.swing.tree.VariableHeightLayoutCache", "TreeStateNode", $PRIVATE},
	{}
};

$ClassInfo _VariableHeightLayoutCache_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.tree.VariableHeightLayoutCache",
	"javax.swing.tree.AbstractLayoutCache",
	nullptr,
	_VariableHeightLayoutCache_FieldInfo_,
	_VariableHeightLayoutCache_MethodInfo_,
	nullptr,
	nullptr,
	_VariableHeightLayoutCache_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.tree.VariableHeightLayoutCache$VisibleTreeStateNodeEnumeration,javax.swing.tree.VariableHeightLayoutCache$TreeStateNode"
};

$Object* allocate$VariableHeightLayoutCache($Class* clazz) {
	return $of($alloc(VariableHeightLayoutCache));
}

void VariableHeightLayoutCache::init$() {
	$AbstractLayoutCache::init$();
	$set(this, tempStacks, $new($Stack));
	$set(this, visibleNodes, $new($Vector));
	$set(this, boundsBuffer, $new($Rectangle));
	$set(this, treePathMapping, $new($Hashtable));
}

void VariableHeightLayoutCache::setModel($TreeModel* newModel) {
	$AbstractLayoutCache::setModel(newModel);
	rebuild(false);
}

void VariableHeightLayoutCache::setRootVisible(bool rootVisible) {
	if (isRootVisible() != rootVisible && this->root != nullptr) {
		if (rootVisible) {
			$nc(this->root)->updatePreferredSize(0);
			$nc(this->visibleNodes)->insertElementAt(this->root, 0);
		} else if ($nc(this->visibleNodes)->size() > 0) {
			$nc(this->visibleNodes)->removeElementAt(0);
			if (this->treeSelectionModel != nullptr) {
				$nc(this->treeSelectionModel)->removeSelectionPath($($nc(this->root)->getTreePath()));
			}
		}
		if (this->treeSelectionModel != nullptr) {
			$nc(this->treeSelectionModel)->resetRowSelection();
		}
		if (getRowCount() > 0) {
			$nc($(getNode(0)))->setYOrigin(0);
		}
		updateYLocationsFrom(0);
		visibleNodesChanged();
	}
	$AbstractLayoutCache::setRootVisible(rootVisible);
}

void VariableHeightLayoutCache::setRowHeight(int32_t rowHeight) {
	if (rowHeight != getRowHeight()) {
		$AbstractLayoutCache::setRowHeight(rowHeight);
		invalidateSizes();
		this->visibleNodesChanged();
	}
}

void VariableHeightLayoutCache::setNodeDimensions($AbstractLayoutCache$NodeDimensions* nd) {
	$AbstractLayoutCache::setNodeDimensions(nd);
	invalidateSizes();
	visibleNodesChanged();
}

void VariableHeightLayoutCache::setExpandedState($TreePath* path, bool isExpanded) {
	if (path != nullptr) {
		if (isExpanded) {
			ensurePathIsExpanded(path, true);
		} else {
			$var($VariableHeightLayoutCache$TreeStateNode, node, getNodeForPath(path, false, true));
			if (node != nullptr) {
				node->makeVisible();
				node->collapse();
			}
		}
	}
}

bool VariableHeightLayoutCache::getExpandedState($TreePath* path) {
	$var($VariableHeightLayoutCache$TreeStateNode, node, getNodeForPath(path, true, false));
	bool var$0 = false;
	if (node != nullptr) {
		bool var$1 = $nc(node)->isVisible();
		var$0 = (var$1 && node->isExpanded());
	} else {
		var$0 = false;
	}
	return var$0;
}

$Rectangle* VariableHeightLayoutCache::getBounds($TreePath* path, $Rectangle* placeIn) {
	$var($VariableHeightLayoutCache$TreeStateNode, node, getNodeForPath(path, true, false));
	if (node != nullptr) {
		if (this->updateNodeSizes$) {
			updateNodeSizes(false);
		}
		return node->getNodeBounds(placeIn);
	}
	return nullptr;
}

$TreePath* VariableHeightLayoutCache::getPathForRow(int32_t row) {
	if (row >= 0 && row < getRowCount()) {
		return $nc($(getNode(row)))->getTreePath();
	}
	return nullptr;
}

int32_t VariableHeightLayoutCache::getRowForPath($TreePath* path) {
	if (path == nullptr) {
		return -1;
	}
	$var($VariableHeightLayoutCache$TreeStateNode, visNode, getNodeForPath(path, true, false));
	if (visNode != nullptr) {
		return visNode->getRow();
	}
	return -1;
}

int32_t VariableHeightLayoutCache::getRowCount() {
	return $nc(this->visibleNodes)->size();
}

void VariableHeightLayoutCache::invalidatePathBounds($TreePath* path) {
	$var($VariableHeightLayoutCache$TreeStateNode, node, getNodeForPath(path, true, false));
	if (node != nullptr) {
		node->markSizeInvalid();
		if (node->isVisible()) {
			updateYLocationsFrom(node->getRow());
		}
	}
}

int32_t VariableHeightLayoutCache::getPreferredHeight() {
	int32_t rowCount = getRowCount();
	if (rowCount > 0) {
		$var($VariableHeightLayoutCache$TreeStateNode, node, getNode(rowCount - 1));
		int32_t var$0 = $nc(node)->getYOrigin();
		return var$0 + node->getPreferredHeight();
	}
	return 0;
}

int32_t VariableHeightLayoutCache::getPreferredWidth($Rectangle* bounds) {
	if (this->updateNodeSizes$) {
		updateNodeSizes(false);
	}
	return getMaxNodeWidth();
}

$TreePath* VariableHeightLayoutCache::getPathClosestTo(int32_t x, int32_t y) {
	if (getRowCount() == 0) {
		return nullptr;
	}
	if (this->updateNodeSizes$) {
		updateNodeSizes(false);
	}
	int32_t row = getRowContainingYLocation(y);
	return $nc($(getNode(row)))->getTreePath();
}

$Enumeration* VariableHeightLayoutCache::getVisiblePathsFrom($TreePath* path) {
	$var($VariableHeightLayoutCache$TreeStateNode, node, getNodeForPath(path, true, false));
	if (node != nullptr) {
		return $new($VariableHeightLayoutCache$VisibleTreeStateNodeEnumeration, this, node);
	}
	return nullptr;
}

int32_t VariableHeightLayoutCache::getVisibleChildCount($TreePath* path) {
	$var($VariableHeightLayoutCache$TreeStateNode, node, getNodeForPath(path, true, false));
	return (node != nullptr) ? $nc(node)->getVisibleChildCount() : 0;
}

void VariableHeightLayoutCache::invalidateSizes() {
	if (this->root != nullptr) {
		$nc(this->root)->deepMarkSizeInvalid();
	}
	bool var$0 = !isFixedRowHeight();
	if (var$0 && $nc(this->visibleNodes)->size() > 0) {
		updateNodeSizes(true);
	}
}

bool VariableHeightLayoutCache::isExpanded($TreePath* path) {
	if (path != nullptr) {
		$var($VariableHeightLayoutCache$TreeStateNode, lastNode, getNodeForPath(path, true, false));
		return (lastNode != nullptr && lastNode->isExpanded());
	}
	return false;
}

void VariableHeightLayoutCache::treeNodesChanged($TreeModelEvent* e) {
	if (e != nullptr) {
		$var($ints, changedIndexs, e->getChildIndices());
		$var($VariableHeightLayoutCache$TreeStateNode, changedNode, getNodeForPath($($SwingUtilities2::getTreePath(e, $(getModel()))), false, false));
		if (changedNode != nullptr) {
			$var($Object, changedValue, changedNode->getValue());
			changedNode->updatePreferredSize();
			if (changedNode->hasBeenExpanded() && changedIndexs != nullptr) {
				{
					$var($ints, arr$, changedIndexs);
					int32_t len$ = arr$->length;
					int32_t i$ = 0;
					for (; i$ < len$; ++i$) {
						int32_t index = arr$->get(i$);
						{
							$var($VariableHeightLayoutCache$TreeStateNode, changedChildNode, $cast($VariableHeightLayoutCache$TreeStateNode, changedNode->getChildAt(index)));
							$nc(changedChildNode)->setUserObject($($nc(this->treeModel)->getChild(changedValue, index)));
							changedChildNode->updatePreferredSize();
						}
					}
				}
			} else if (changedNode == this->root) {
				changedNode->updatePreferredSize();
			}
			if (!isFixedRowHeight()) {
				int32_t aRow = changedNode->getRow();
				if (aRow != -1) {
					this->updateYLocationsFrom(aRow);
				}
			}
			this->visibleNodesChanged();
		}
	}
}

void VariableHeightLayoutCache::treeNodesInserted($TreeModelEvent* e) {
	if (e != nullptr) {
		$var($ints, changedIndexs, e->getChildIndices());
		$var($VariableHeightLayoutCache$TreeStateNode, changedParentNode, getNodeForPath($($SwingUtilities2::getTreePath(e, $(getModel()))), false, false));
		if (changedParentNode != nullptr && changedIndexs != nullptr && changedIndexs->length > 0) {
			if (changedParentNode->hasBeenExpanded()) {
				bool var$0 = (changedParentNode == this->root && !this->rootVisible);
				if (!var$0) {
					bool var$1 = changedParentNode->getRow() != -1;
					var$0 = (var$1 && changedParentNode->isExpanded());
				}
				bool makeVisible = (var$0);
				int32_t oldChildCount = changedParentNode->getChildCount();
				{
					$var($ints, arr$, changedIndexs);
					int32_t len$ = arr$->length;
					int32_t i$ = 0;
					for (; i$ < len$; ++i$) {
						int32_t index = arr$->get(i$);
						{
							this->createNodeAt(changedParentNode, index);
						}
					}
				}
				if (oldChildCount == 0) {
					changedParentNode->updatePreferredSize();
				}
				if (this->treeSelectionModel != nullptr) {
					$nc(this->treeSelectionModel)->resetRowSelection();
				}
				bool var$2 = !isFixedRowHeight();
				if (var$2 && (makeVisible || (oldChildCount == 0 && changedParentNode->isVisible()))) {
					if (changedParentNode == this->root) {
						this->updateYLocationsFrom(0);
					} else {
						this->updateYLocationsFrom(changedParentNode->getRow());
					}
					this->visibleNodesChanged();
				} else if (makeVisible) {
					this->visibleNodesChanged();
				}
			} else if ($nc(this->treeModel)->getChildCount($(changedParentNode->getValue())) - changedIndexs->length == 0) {
				changedParentNode->updatePreferredSize();
				bool var$3 = !isFixedRowHeight();
				if (var$3 && changedParentNode->isVisible()) {
					updateYLocationsFrom(changedParentNode->getRow());
				}
			}
		}
	}
}

void VariableHeightLayoutCache::treeNodesRemoved($TreeModelEvent* e) {
	if (e != nullptr) {
		$var($ints, changedIndexs, nullptr);
		$var($VariableHeightLayoutCache$TreeStateNode, changedParentNode, nullptr);
		$assign(changedIndexs, e->getChildIndices());
		$assign(changedParentNode, getNodeForPath($($SwingUtilities2::getTreePath(e, $(getModel()))), false, false));
		if (changedParentNode != nullptr && changedIndexs != nullptr && changedIndexs->length > 0) {
			if (changedParentNode->hasBeenExpanded()) {
				bool makeInvisible = false;
				int32_t counter = 0;
				int32_t removedRow = 0;
				$var($VariableHeightLayoutCache$TreeStateNode, removedNode, nullptr);
				bool var$0 = (changedParentNode == this->root && !this->rootVisible);
				if (!var$0) {
					bool var$1 = changedParentNode->getRow() != -1;
					var$0 = (var$1 && changedParentNode->isExpanded());
				}
				makeInvisible = (var$0);
				for (counter = changedIndexs->length - 1; counter >= 0; --counter) {
					$assign(removedNode, $cast($VariableHeightLayoutCache$TreeStateNode, changedParentNode->getChildAt(changedIndexs->get(counter))));
					if ($nc(removedNode)->isExpanded()) {
						removedNode->collapse(false);
					}
					if (makeInvisible) {
						removedRow = $nc(removedNode)->getRow();
						if (removedRow != -1) {
							$nc(this->visibleNodes)->removeElementAt(removedRow);
						}
					}
					changedParentNode->remove(changedIndexs->get(counter));
				}
				if (changedParentNode->getChildCount() == 0) {
					changedParentNode->updatePreferredSize();
					bool var$2 = changedParentNode->isExpanded();
					if (var$2 && changedParentNode->isLeaf()) {
						changedParentNode->collapse(false);
					}
				}
				if (this->treeSelectionModel != nullptr) {
					$nc(this->treeSelectionModel)->resetRowSelection();
				}
				bool var$3 = !isFixedRowHeight();
				if (var$3) {
					bool var$4 = makeInvisible;
					if (!var$4) {
						bool var$5 = changedParentNode->getChildCount() == 0;
						var$4 = (var$5 && changedParentNode->isVisible());
					}
					var$3 = (var$4);
				}
				if (var$3) {
					if (changedParentNode == this->root) {
						if (getRowCount() > 0) {
							$nc($(getNode(0)))->setYOrigin(0);
						}
						updateYLocationsFrom(0);
					} else {
						updateYLocationsFrom(changedParentNode->getRow());
					}
					this->visibleNodesChanged();
				} else if (makeInvisible) {
					this->visibleNodesChanged();
				}
			} else if ($nc(this->treeModel)->getChildCount($(changedParentNode->getValue())) == 0) {
				changedParentNode->updatePreferredSize();
				bool var$6 = !isFixedRowHeight();
				if (var$6 && changedParentNode->isVisible()) {
					this->updateYLocationsFrom(changedParentNode->getRow());
				}
			}
		}
	}
}

void VariableHeightLayoutCache::treeStructureChanged($TreeModelEvent* e) {
	if (e != nullptr) {
		$var($TreePath, changedPath, $SwingUtilities2::getTreePath(e, $(getModel())));
		$var($VariableHeightLayoutCache$TreeStateNode, changedNode, nullptr);
		$assign(changedNode, getNodeForPath(changedPath, false, false));
		bool var$0 = changedNode == this->root;
		if (!var$0) {
			bool var$1 = changedNode == nullptr;
			if (var$1) {
				bool var$2 = (changedPath == nullptr && this->treeModel != nullptr && $nc(this->treeModel)->getRoot() == nullptr);
				var$1 = (var$2 || (changedPath != nullptr && changedPath->getPathCount() == 1));
			}
			var$0 = (var$1);
		}
		if (var$0) {
			rebuild(true);
		} else if (changedNode != nullptr) {
			int32_t nodeIndex = 0;
			$var($VariableHeightLayoutCache$TreeStateNode, newNode, nullptr);
			$var($VariableHeightLayoutCache$TreeStateNode, parent, nullptr);
			bool wasExpanded = false;
			bool wasVisible = false;
			int32_t newIndex = 0;
			wasExpanded = changedNode->isExpanded();
			wasVisible = (changedNode->getRow() != -1);
			$assign(parent, $cast($VariableHeightLayoutCache$TreeStateNode, changedNode->getParent()));
			nodeIndex = $nc(parent)->getIndex(changedNode);
			if (wasVisible && wasExpanded) {
				changedNode->collapse(false);
			}
			if (wasVisible) {
				$nc(this->visibleNodes)->removeElement(changedNode);
			}
			changedNode->removeFromParent();
			createNodeAt(parent, nodeIndex);
			$assign(newNode, $cast($VariableHeightLayoutCache$TreeStateNode, parent->getChildAt(nodeIndex)));
			if (wasVisible && wasExpanded) {
				$nc(newNode)->expand(false);
			}
			newIndex = $nc(newNode)->getRow();
			if (!isFixedRowHeight() && wasVisible) {
				if (newIndex == 0) {
					updateYLocationsFrom(newIndex);
				} else {
					updateYLocationsFrom(newIndex - 1);
				}
				this->visibleNodesChanged();
			} else if (wasVisible) {
				this->visibleNodesChanged();
			}
		}
	}
}

void VariableHeightLayoutCache::visibleNodesChanged() {
}

void VariableHeightLayoutCache::addMapping($VariableHeightLayoutCache$TreeStateNode* node) {
	$nc(this->treePathMapping)->put($($nc(node)->getTreePath()), node);
}

void VariableHeightLayoutCache::removeMapping($VariableHeightLayoutCache$TreeStateNode* node) {
	$nc(this->treePathMapping)->remove($($nc(node)->getTreePath()));
}

$VariableHeightLayoutCache$TreeStateNode* VariableHeightLayoutCache::getMapping($TreePath* path) {
	return $cast($VariableHeightLayoutCache$TreeStateNode, $nc(this->treePathMapping)->get(path));
}

$Rectangle* VariableHeightLayoutCache::getBounds(int32_t row, $Rectangle* placeIn) {
	if (this->updateNodeSizes$) {
		updateNodeSizes(false);
	}
	if (row >= 0 && row < getRowCount()) {
		return $nc($(getNode(row)))->getNodeBounds(placeIn);
	}
	return nullptr;
}

void VariableHeightLayoutCache::rebuild(bool clearSelection) {
	$var($Object, rootObject, nullptr);
	$nc(this->treePathMapping)->clear();
	if (this->treeModel != nullptr && ($assign(rootObject, $nc(this->treeModel)->getRoot())) != nullptr) {
		$set(this, root, createNodeForValue(rootObject));
		$set($nc(this->root), path, $new($TreePath, rootObject));
		addMapping(this->root);
		$nc(this->root)->updatePreferredSize(0);
		$nc(this->visibleNodes)->removeAllElements();
		if (isRootVisible()) {
			$nc(this->visibleNodes)->addElement(this->root);
		}
		if (!$nc(this->root)->isExpanded()) {
			$nc(this->root)->expand();
		} else {
			$var($Enumeration, cursor, $nc(this->root)->children());
			while ($nc(cursor)->hasMoreElements()) {
				$nc(this->visibleNodes)->addElement($(cursor->nextElement()));
			}
			if (!isFixedRowHeight()) {
				updateYLocationsFrom(0);
			}
		}
	} else {
		$nc(this->visibleNodes)->removeAllElements();
		$set(this, root, nullptr);
	}
	if (clearSelection && this->treeSelectionModel != nullptr) {
		$nc(this->treeSelectionModel)->clearSelection();
	}
	this->visibleNodesChanged();
}

$VariableHeightLayoutCache$TreeStateNode* VariableHeightLayoutCache::createNodeAt($VariableHeightLayoutCache$TreeStateNode* parent, int32_t childIndex) {
	bool isParentRoot = false;
	$var($Object, newValue, nullptr);
	$var($VariableHeightLayoutCache$TreeStateNode, newChildNode, nullptr);
	$assign(newValue, $nc(this->treeModel)->getChild($($nc(parent)->getValue()), childIndex));
	$assign(newChildNode, createNodeForValue(newValue));
	$nc(parent)->insert(newChildNode, childIndex);
	$nc(newChildNode)->updatePreferredSize(-1);
	isParentRoot = (parent == this->root);
	bool var$0 = newChildNode != nullptr && parent->isExpanded();
	if (var$0 && (parent->getRow() != -1 || isParentRoot)) {
		int32_t newRow = 0;
		if (childIndex == 0) {
			if (isParentRoot && !isRootVisible()) {
				newRow = 0;
			} else {
				newRow = parent->getRow() + 1;
			}
		} else if (childIndex == parent->getChildCount()) {
			newRow = $nc($(parent->getLastVisibleNode()))->getRow() + 1;
		} else {
			$var($VariableHeightLayoutCache$TreeStateNode, previousNode, nullptr);
			$assign(previousNode, $cast($VariableHeightLayoutCache$TreeStateNode, parent->getChildAt(childIndex - 1)));
			newRow = $nc($($nc(previousNode)->getLastVisibleNode()))->getRow() + 1;
		}
		$nc(this->visibleNodes)->insertElementAt(newChildNode, newRow);
	}
	return newChildNode;
}

$VariableHeightLayoutCache$TreeStateNode* VariableHeightLayoutCache::getNodeForPath($TreePath* path$renamed, bool onlyIfVisible, bool shouldCreate) {
	$var($TreePath, path, path$renamed);
	if (path != nullptr) {
		$var($VariableHeightLayoutCache$TreeStateNode, node, nullptr);
		$assign(node, getMapping(path));
		if (node != nullptr) {
			if (onlyIfVisible && !node->isVisible()) {
				return nullptr;
			}
			return node;
		}
		$var($Stack, paths, nullptr);
		if ($nc(this->tempStacks)->size() == 0) {
			$assign(paths, $new($Stack));
		} else {
			$assign(paths, $cast($Stack, $nc(this->tempStacks)->pop()));
		}
		{
			$var($Throwable, var$0, nullptr);
			$var($VariableHeightLayoutCache$TreeStateNode, var$2, nullptr);
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
							node->getLoadedChildren(shouldCreate);
							$var($Object, var$3, node->getUserObject());
							int32_t childIndex = $nc(this->treeModel)->getIndexOfChild(var$3, $($nc(path)->getLastPathComponent()));
							bool var$4 = childIndex == -1 || childIndex >= node->getChildCount();
							if (var$4 || (onlyIfVisible && !node->isVisible())) {
								$assign(node, nullptr);
							} else {
								$assign(node, $cast($VariableHeightLayoutCache$TreeStateNode, node->getChildAt(childIndex)));
							}
						}
						$assign(var$2, node);
						return$1 = true;
						goto $finally;
					}
					paths->push(path);
					$assign(path, path->getParentPath());
				}
			} catch ($Throwable&) {
				$assign(var$0, $catch());
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
	}
	return nullptr;
}

void VariableHeightLayoutCache::updateYLocationsFrom(int32_t location) {
	if (location >= 0 && location < getRowCount()) {
		int32_t counter = 0;
		int32_t maxCounter = 0;
		int32_t newYOrigin = 0;
		$var($VariableHeightLayoutCache$TreeStateNode, aNode, nullptr);
		$assign(aNode, getNode(location));
		int32_t var$0 = $nc(aNode)->getYOrigin();
		newYOrigin = var$0 + aNode->getPreferredHeight();
		for (counter = location + 1, maxCounter = $nc(this->visibleNodes)->size(); counter < maxCounter; ++counter) {
			$assign(aNode, $cast($VariableHeightLayoutCache$TreeStateNode, $nc(this->visibleNodes)->elementAt(counter)));
			$nc(aNode)->setYOrigin(newYOrigin);
			newYOrigin += aNode->getPreferredHeight();
		}
	}
}

void VariableHeightLayoutCache::updateNodeSizes(bool updateAll) {
	int32_t aY = 0;
	int32_t counter = 0;
	int32_t maxCounter = 0;
	$var($VariableHeightLayoutCache$TreeStateNode, node, nullptr);
	this->updateNodeSizes$ = false;
	for (aY = (counter = 0), maxCounter = $nc(this->visibleNodes)->size(); counter < maxCounter; ++counter) {
		$assign(node, $cast($VariableHeightLayoutCache$TreeStateNode, $nc(this->visibleNodes)->elementAt(counter)));
		$nc(node)->setYOrigin(aY);
		if (updateAll || !node->hasValidSize()) {
			node->updatePreferredSize(counter);
		}
		aY += node->getPreferredHeight();
	}
}

int32_t VariableHeightLayoutCache::getRowContainingYLocation(int32_t location) {
	int32_t rows = getRowCount();
	if (rows <= 0) {
		return -1;
	}
	if (isFixedRowHeight()) {
		return $Math::max(0, $Math::min(rows - 1, $div(location, getRowHeight())));
	}
	int32_t max = rows;
	int32_t min = 0;
	int32_t mid = 0;
	while (min < max) {
		mid = (max - min) / 2 + min;
		$var($VariableHeightLayoutCache$TreeStateNode, node, $cast($VariableHeightLayoutCache$TreeStateNode, $nc(this->visibleNodes)->elementAt(mid)));
		int32_t minY = $nc(node)->getYOrigin();
		int32_t maxY = minY + node->getPreferredHeight();
		if (location < minY) {
			max = mid - 1;
		} else if (location >= maxY) {
			min = mid + 1;
		} else {
			break;
		}
	}
	if (min == max) {
		mid = min;
		if (mid >= rows) {
			mid = rows - 1;
		}
	}
	return mid;
}

void VariableHeightLayoutCache::ensurePathIsExpanded($TreePath* aPath$renamed, bool expandLast) {
	$var($TreePath, aPath, aPath$renamed);
	if (aPath != nullptr) {
		if ($nc(this->treeModel)->isLeaf($(aPath->getLastPathComponent()))) {
			$assign(aPath, aPath->getParentPath());
			expandLast = true;
		}
		if (aPath != nullptr) {
			$var($VariableHeightLayoutCache$TreeStateNode, lastNode, getNodeForPath(aPath, false, true));
			if (lastNode != nullptr) {
				lastNode->makeVisible();
				if (expandLast) {
					lastNode->expand();
				}
			}
		}
	}
}

$VariableHeightLayoutCache$TreeStateNode* VariableHeightLayoutCache::getNode(int32_t row) {
	return $cast($VariableHeightLayoutCache$TreeStateNode, $nc(this->visibleNodes)->elementAt(row));
}

int32_t VariableHeightLayoutCache::getMaxNodeWidth() {
	int32_t maxWidth = 0;
	int32_t nodeWidth = 0;
	int32_t counter = 0;
	$var($VariableHeightLayoutCache$TreeStateNode, node, nullptr);
	for (counter = getRowCount() - 1; counter >= 0; --counter) {
		$assign(node, this->getNode(counter));
		int32_t var$0 = $nc(node)->getPreferredWidth();
		nodeWidth = var$0 + node->getXOrigin();
		if (nodeWidth > maxWidth) {
			maxWidth = nodeWidth;
		}
	}
	return maxWidth;
}

$VariableHeightLayoutCache$TreeStateNode* VariableHeightLayoutCache::createNodeForValue(Object$* value) {
	return $new($VariableHeightLayoutCache$TreeStateNode, this, value);
}

VariableHeightLayoutCache::VariableHeightLayoutCache() {
}

$Class* VariableHeightLayoutCache::load$($String* name, bool initialize) {
	$loadClass(VariableHeightLayoutCache, name, initialize, &_VariableHeightLayoutCache_ClassInfo_, allocate$VariableHeightLayoutCache);
	return class$;
}

$Class* VariableHeightLayoutCache::class$ = nullptr;

		} // tree
	} // swing
} // javax