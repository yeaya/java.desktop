#include <javax/swing/tree/DefaultTreeModel.h>

#include <java/io/InvalidObjectException.h>
#include <java/io/ObjectInputStream$GetField.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Attribute.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NamedAttribute.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/EventListener.h>
#include <java/util/Vector.h>
#include <javax/swing/event/EventListenerList.h>
#include <javax/swing/event/TreeModelEvent.h>
#include <javax/swing/event/TreeModelListener.h>
#include <javax/swing/tree/MutableTreeNode.h>
#include <javax/swing/tree/TreeNode.h>
#include <javax/swing/tree/TreePath.h>
#include <jcpp.h>

using $EventListenerArray = $Array<::java::util::EventListener>;
using $TreeModelListenerArray = $Array<::javax::swing::event::TreeModelListener>;
using $TreeNodeArray = $Array<::javax::swing::tree::TreeNode>;
using $InvalidObjectException = ::java::io::InvalidObjectException;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectInputStream$GetField = ::java::io::ObjectInputStream$GetField;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $Serializable = ::java::io::Serializable;
using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $EventListener = ::java::util::EventListener;
using $Vector = ::java::util::Vector;
using $EventListenerList = ::javax::swing::event::EventListenerList;
using $TreeModelEvent = ::javax::swing::event::TreeModelEvent;
using $TreeModelListener = ::javax::swing::event::TreeModelListener;
using $MutableTreeNode = ::javax::swing::tree::MutableTreeNode;
using $TreeModel = ::javax::swing::tree::TreeModel;
using $TreeNode = ::javax::swing::tree::TreeNode;
using $TreePath = ::javax::swing::tree::TreePath;

namespace javax {
	namespace swing {
		namespace tree {

$Attribute DefaultTreeModel_Attribute_var$1[] = {
	{'s', "root"},
	{'-'}
};

$NamedAttribute DefaultTreeModel_Attribute_var$0[] = {
	{"value", '[', DefaultTreeModel_Attribute_var$1},
	{}
};

$CompoundAttribute _DefaultTreeModel_MethodAnnotations_init$0[] = {
	{"Ljava/beans/ConstructorProperties;", DefaultTreeModel_Attribute_var$0},
	{}
};

$FieldInfo _DefaultTreeModel_FieldInfo_[] = {
	{"root", "Ljavax/swing/tree/TreeNode;", nullptr, $PROTECTED, $field(DefaultTreeModel, root)},
	{"listenerList", "Ljavax/swing/event/EventListenerList;", nullptr, $PROTECTED, $field(DefaultTreeModel, listenerList)},
	{"asksAllowsChildren", "Z", nullptr, $PROTECTED, $field(DefaultTreeModel, asksAllowsChildren$)},
	{}
};

$MethodInfo _DefaultTreeModel_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/tree/TreeNode;)V", nullptr, $PUBLIC, $method(static_cast<void(DefaultTreeModel::*)($TreeNode*)>(&DefaultTreeModel::init$)), nullptr, nullptr, _DefaultTreeModel_MethodAnnotations_init$0},
	{"<init>", "(Ljavax/swing/tree/TreeNode;Z)V", nullptr, $PUBLIC, $method(static_cast<void(DefaultTreeModel::*)($TreeNode*,bool)>(&DefaultTreeModel::init$))},
	{"addTreeModelListener", "(Ljavax/swing/event/TreeModelListener;)V", nullptr, $PUBLIC},
	{"asksAllowsChildren", "()Z", nullptr, $PUBLIC},
	{"fireTreeNodesChanged", "(Ljava/lang/Object;[Ljava/lang/Object;[I[Ljava/lang/Object;)V", nullptr, $PROTECTED},
	{"fireTreeNodesInserted", "(Ljava/lang/Object;[Ljava/lang/Object;[I[Ljava/lang/Object;)V", nullptr, $PROTECTED},
	{"fireTreeNodesRemoved", "(Ljava/lang/Object;[Ljava/lang/Object;[I[Ljava/lang/Object;)V", nullptr, $PROTECTED},
	{"fireTreeStructureChanged", "(Ljava/lang/Object;[Ljava/lang/Object;[I[Ljava/lang/Object;)V", nullptr, $PROTECTED},
	{"fireTreeStructureChanged", "(Ljava/lang/Object;Ljavax/swing/tree/TreePath;)V", nullptr, $PRIVATE, $method(static_cast<void(DefaultTreeModel::*)(Object$*,$TreePath*)>(&DefaultTreeModel::fireTreeStructureChanged))},
	{"getChild", "(Ljava/lang/Object;I)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getChildCount", "(Ljava/lang/Object;)I", nullptr, $PUBLIC},
	{"getIndexOfChild", "(Ljava/lang/Object;Ljava/lang/Object;)I", nullptr, $PUBLIC},
	{"getListeners", "(Ljava/lang/Class;)[Ljava/util/EventListener;", "<T::Ljava/util/EventListener;>(Ljava/lang/Class<TT;>;)[TT;", $PUBLIC},
	{"getPathToRoot", "(Ljavax/swing/tree/TreeNode;)[Ljavax/swing/tree/TreeNode;", nullptr, $PUBLIC},
	{"getPathToRoot", "(Ljavax/swing/tree/TreeNode;I)[Ljavax/swing/tree/TreeNode;", nullptr, $PROTECTED},
	{"getRoot", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getTreeModelListeners", "()[Ljavax/swing/event/TreeModelListener;", nullptr, $PUBLIC},
	{"insertNodeInto", "(Ljavax/swing/tree/MutableTreeNode;Ljavax/swing/tree/MutableTreeNode;I)V", nullptr, $PUBLIC},
	{"isLeaf", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"nodeChanged", "(Ljavax/swing/tree/TreeNode;)V", nullptr, $PUBLIC},
	{"nodeStructureChanged", "(Ljavax/swing/tree/TreeNode;)V", nullptr, $PUBLIC},
	{"nodesChanged", "(Ljavax/swing/tree/TreeNode;[I)V", nullptr, $PUBLIC},
	{"nodesWereInserted", "(Ljavax/swing/tree/TreeNode;[I)V", nullptr, $PUBLIC},
	{"nodesWereRemoved", "(Ljavax/swing/tree/TreeNode;[I[Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(DefaultTreeModel::*)($ObjectInputStream*)>(&DefaultTreeModel::readObject)), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"reload", "()V", nullptr, $PUBLIC},
	{"reload", "(Ljavax/swing/tree/TreeNode;)V", nullptr, $PUBLIC},
	{"removeNodeFromParent", "(Ljavax/swing/tree/MutableTreeNode;)V", nullptr, $PUBLIC},
	{"removeTreeModelListener", "(Ljavax/swing/event/TreeModelListener;)V", nullptr, $PUBLIC},
	{"setAsksAllowsChildren", "(Z)V", nullptr, $PUBLIC},
	{"setRoot", "(Ljavax/swing/tree/TreeNode;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"valueForPathChanged", "(Ljavax/swing/tree/TreePath;Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(DefaultTreeModel::*)($ObjectOutputStream*)>(&DefaultTreeModel::writeObject)), "java.io.IOException"},
	{}
};

$ClassInfo _DefaultTreeModel_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.tree.DefaultTreeModel",
	"java.lang.Object",
	"java.io.Serializable,javax.swing.tree.TreeModel",
	_DefaultTreeModel_FieldInfo_,
	_DefaultTreeModel_MethodInfo_
};

$Object* allocate$DefaultTreeModel($Class* clazz) {
	return $of($alloc(DefaultTreeModel));
}

int32_t DefaultTreeModel::hashCode() {
	 return this->$Serializable::hashCode();
}

bool DefaultTreeModel::equals(Object$* arg0) {
	 return this->$Serializable::equals(arg0);
}

$Object* DefaultTreeModel::clone() {
	 return this->$Serializable::clone();
}

$String* DefaultTreeModel::toString() {
	 return this->$Serializable::toString();
}

void DefaultTreeModel::finalize() {
	this->$Serializable::finalize();
}

void DefaultTreeModel::init$($TreeNode* root) {
	DefaultTreeModel::init$(root, false);
}

void DefaultTreeModel::init$($TreeNode* root, bool asksAllowsChildren) {
	$set(this, listenerList, $new($EventListenerList));
	$set(this, root, root);
	this->asksAllowsChildren$ = asksAllowsChildren;
}

void DefaultTreeModel::setAsksAllowsChildren(bool newValue) {
	this->asksAllowsChildren$ = newValue;
}

bool DefaultTreeModel::asksAllowsChildren() {
	return this->asksAllowsChildren$;
}

void DefaultTreeModel::setRoot($TreeNode* root) {
	$var($Object, oldRoot, this->root);
	$set(this, root, root);
	if (root == nullptr && oldRoot != nullptr) {
		fireTreeStructureChanged(this, nullptr);
	} else {
		nodeStructureChanged(root);
	}
}

$Object* DefaultTreeModel::getRoot() {
	return $of(this->root);
}

int32_t DefaultTreeModel::getIndexOfChild(Object$* parent, Object$* child) {
	if (parent == nullptr || child == nullptr) {
		return -1;
	}
	return $nc(($cast($TreeNode, parent)))->getIndex($cast($TreeNode, child));
}

$Object* DefaultTreeModel::getChild(Object$* parent, int32_t index) {
	return $of($nc(($cast($TreeNode, parent)))->getChildAt(index));
}

int32_t DefaultTreeModel::getChildCount(Object$* parent) {
	return $nc(($cast($TreeNode, parent)))->getChildCount();
}

bool DefaultTreeModel::isLeaf(Object$* node) {
	if (this->asksAllowsChildren$) {
		return !$nc(($cast($TreeNode, node)))->getAllowsChildren();
	}
	return $nc(($cast($TreeNode, node)))->isLeaf();
}

void DefaultTreeModel::reload() {
	reload(this->root);
}

void DefaultTreeModel::valueForPathChanged($TreePath* path, Object$* newValue) {
	$var($MutableTreeNode, aNode, $cast($MutableTreeNode, $nc(path)->getLastPathComponent()));
	$nc(aNode)->setUserObject(newValue);
	nodeChanged(aNode);
}

void DefaultTreeModel::insertNodeInto($MutableTreeNode* newChild, $MutableTreeNode* parent, int32_t index) {
	$nc(parent)->insert(newChild, index);
	$var($ints, newIndexs, $new($ints, 1));
	newIndexs->set(0, index);
	nodesWereInserted(parent, newIndexs);
}

void DefaultTreeModel::removeNodeFromParent($MutableTreeNode* node) {
	$var($MutableTreeNode, parent, $cast($MutableTreeNode, $nc(node)->getParent()));
	if (parent == nullptr) {
		$throwNew($IllegalArgumentException, "node does not have a parent."_s);
	}
	$var($ints, childIndex, $new($ints, 1));
	$var($ObjectArray, removedArray, $new($ObjectArray, 1));
	childIndex->set(0, $nc(parent)->getIndex(node));
	parent->remove(childIndex->get(0));
	removedArray->set(0, node);
	nodesWereRemoved(parent, childIndex, removedArray);
}

void DefaultTreeModel::nodeChanged($TreeNode* node) {
	if (this->listenerList != nullptr && node != nullptr) {
		$var($TreeNode, parent, node->getParent());
		if (parent != nullptr) {
			int32_t anIndex = parent->getIndex(node);
			if (anIndex != -1) {
				$var($ints, cIndexs, $new($ints, 1));
				cIndexs->set(0, anIndex);
				nodesChanged(parent, cIndexs);
			}
		} else if ($equals(node, getRoot())) {
			nodesChanged(node, nullptr);
		}
	}
}

void DefaultTreeModel::reload($TreeNode* node) {
	if (node != nullptr) {
		fireTreeStructureChanged(this, $(getPathToRoot(node)), nullptr, nullptr);
	}
}

void DefaultTreeModel::nodesWereInserted($TreeNode* node, $ints* childIndices) {
	if (this->listenerList != nullptr && node != nullptr && childIndices != nullptr && childIndices->length > 0) {
		int32_t cCount = childIndices->length;
		$var($ObjectArray, newChildren, $new($ObjectArray, cCount));
		for (int32_t counter = 0; counter < cCount; ++counter) {
			newChildren->set(counter, $(node->getChildAt(childIndices->get(counter))));
		}
		fireTreeNodesInserted(this, $(getPathToRoot(node)), childIndices, newChildren);
	}
}

void DefaultTreeModel::nodesWereRemoved($TreeNode* node, $ints* childIndices, $ObjectArray* removedChildren) {
	if (node != nullptr && childIndices != nullptr) {
		fireTreeNodesRemoved(this, $(getPathToRoot(node)), childIndices, removedChildren);
	}
}

void DefaultTreeModel::nodesChanged($TreeNode* node, $ints* childIndices) {
	if (node != nullptr) {
		if (childIndices != nullptr) {
			int32_t cCount = childIndices->length;
			if (cCount > 0) {
				$var($ObjectArray, cChildren, $new($ObjectArray, cCount));
				for (int32_t counter = 0; counter < cCount; ++counter) {
					cChildren->set(counter, $(node->getChildAt(childIndices->get(counter))));
				}
				fireTreeNodesChanged(this, $(getPathToRoot(node)), childIndices, cChildren);
			}
		} else if ($equals(node, getRoot())) {
			fireTreeNodesChanged(this, $(getPathToRoot(node)), nullptr, nullptr);
		}
	}
}

void DefaultTreeModel::nodeStructureChanged($TreeNode* node) {
	if (node != nullptr) {
		fireTreeStructureChanged(this, $(getPathToRoot(node)), nullptr, nullptr);
	}
}

$TreeNodeArray* DefaultTreeModel::getPathToRoot($TreeNode* aNode) {
	return getPathToRoot(aNode, 0);
}

$TreeNodeArray* DefaultTreeModel::getPathToRoot($TreeNode* aNode, int32_t depth) {
	$var($TreeNodeArray, retNodes, nullptr);
	if (aNode == nullptr) {
		if (depth == 0) {
			return nullptr;
		} else {
			$assign(retNodes, $new($TreeNodeArray, depth));
		}
	} else {
		++depth;
		if (aNode == this->root) {
			$assign(retNodes, $new($TreeNodeArray, depth));
		} else {
			$assign(retNodes, getPathToRoot($($nc(aNode)->getParent()), depth));
		}
		$nc(retNodes)->set(retNodes->length - depth, aNode);
	}
	return retNodes;
}

void DefaultTreeModel::addTreeModelListener($TreeModelListener* l) {
	$load($TreeModelListener);
	$nc(this->listenerList)->add($TreeModelListener::class$, l);
}

void DefaultTreeModel::removeTreeModelListener($TreeModelListener* l) {
	$load($TreeModelListener);
	$nc(this->listenerList)->remove($TreeModelListener::class$, l);
}

$TreeModelListenerArray* DefaultTreeModel::getTreeModelListeners() {
	$load($TreeModelListener);
	return $fcast($TreeModelListenerArray, $nc(this->listenerList)->getListeners($TreeModelListener::class$));
}

void DefaultTreeModel::fireTreeNodesChanged(Object$* source, $ObjectArray* path, $ints* childIndices, $ObjectArray* children) {
	$var($ObjectArray, listeners, $nc(this->listenerList)->getListenerList());
	$var($TreeModelEvent, e, nullptr);
	for (int32_t i = $nc(listeners)->length - 2; i >= 0; i -= 2) {
		$load($TreeModelListener);
		if ($equals(listeners->get(i), $TreeModelListener::class$)) {
			if (e == nullptr) {
				$assign(e, $new($TreeModelEvent, source, path, childIndices, children));
			}
			$nc(($cast($TreeModelListener, listeners->get(i + 1))))->treeNodesChanged(e);
		}
	}
}

void DefaultTreeModel::fireTreeNodesInserted(Object$* source, $ObjectArray* path, $ints* childIndices, $ObjectArray* children) {
	$var($ObjectArray, listeners, $nc(this->listenerList)->getListenerList());
	$var($TreeModelEvent, e, nullptr);
	for (int32_t i = $nc(listeners)->length - 2; i >= 0; i -= 2) {
		$load($TreeModelListener);
		if ($equals(listeners->get(i), $TreeModelListener::class$)) {
			if (e == nullptr) {
				$assign(e, $new($TreeModelEvent, source, path, childIndices, children));
			}
			$nc(($cast($TreeModelListener, listeners->get(i + 1))))->treeNodesInserted(e);
		}
	}
}

void DefaultTreeModel::fireTreeNodesRemoved(Object$* source, $ObjectArray* path, $ints* childIndices, $ObjectArray* children) {
	$var($ObjectArray, listeners, $nc(this->listenerList)->getListenerList());
	$var($TreeModelEvent, e, nullptr);
	for (int32_t i = $nc(listeners)->length - 2; i >= 0; i -= 2) {
		$load($TreeModelListener);
		if ($equals(listeners->get(i), $TreeModelListener::class$)) {
			if (e == nullptr) {
				$assign(e, $new($TreeModelEvent, source, path, childIndices, children));
			}
			$nc(($cast($TreeModelListener, listeners->get(i + 1))))->treeNodesRemoved(e);
		}
	}
}

void DefaultTreeModel::fireTreeStructureChanged(Object$* source, $ObjectArray* path, $ints* childIndices, $ObjectArray* children) {
	$var($ObjectArray, listeners, $nc(this->listenerList)->getListenerList());
	$var($TreeModelEvent, e, nullptr);
	for (int32_t i = $nc(listeners)->length - 2; i >= 0; i -= 2) {
		$load($TreeModelListener);
		if ($equals(listeners->get(i), $TreeModelListener::class$)) {
			if (e == nullptr) {
				$assign(e, $new($TreeModelEvent, source, path, childIndices, children));
			}
			$nc(($cast($TreeModelListener, listeners->get(i + 1))))->treeStructureChanged(e);
		}
	}
}

void DefaultTreeModel::fireTreeStructureChanged(Object$* source, $TreePath* path) {
	$var($ObjectArray, listeners, $nc(this->listenerList)->getListenerList());
	$var($TreeModelEvent, e, nullptr);
	for (int32_t i = $nc(listeners)->length - 2; i >= 0; i -= 2) {
		$load($TreeModelListener);
		if ($equals(listeners->get(i), $TreeModelListener::class$)) {
			if (e == nullptr) {
				$assign(e, $new($TreeModelEvent, source, path));
			}
			$nc(($cast($TreeModelListener, listeners->get(i + 1))))->treeStructureChanged(e);
		}
	}
}

$EventListenerArray* DefaultTreeModel::getListeners($Class* listenerType) {
	return $nc(this->listenerList)->getListeners(listenerType);
}

void DefaultTreeModel::writeObject($ObjectOutputStream* s) {
	$var($Vector, values, $new($Vector));
	$nc(s)->defaultWriteObject();
	if (this->root != nullptr && $instanceOf($Serializable, this->root)) {
		values->addElement("root"_s);
		values->addElement(this->root);
	}
	s->writeObject(values);
}

void DefaultTreeModel::readObject($ObjectInputStream* s) {
	$var($ObjectInputStream$GetField, f, $nc(s)->readFields());
	$var($EventListenerList, newListenerList, $cast($EventListenerList, $nc(f)->get("listenerList"_s, ($Object*)nullptr)));
	if (newListenerList == nullptr) {
		$throwNew($InvalidObjectException, "Null listenerList"_s);
	}
	$set(this, listenerList, newListenerList);
	this->asksAllowsChildren$ = f->get("asksAllowsChildren"_s, false);
	$var($Vector, values, $cast($Vector, s->readObject()));
	int32_t indexCounter = 0;
	int32_t maxCounter = $nc(values)->size();
	if (indexCounter < maxCounter && $nc($of($(values->elementAt(indexCounter))))->equals("root"_s)) {
		$var($TreeNode, newRoot, $cast($TreeNode, values->elementAt(++indexCounter)));
		if (newRoot == nullptr) {
			$throwNew($InvalidObjectException, "Null root"_s);
		}
		$set(this, root, newRoot);
		++indexCounter;
	}
}

DefaultTreeModel::DefaultTreeModel() {
}

$Class* DefaultTreeModel::load$($String* name, bool initialize) {
	$loadClass(DefaultTreeModel, name, initialize, &_DefaultTreeModel_ClassInfo_, allocate$DefaultTreeModel);
	return class$;
}

$Class* DefaultTreeModel::class$ = nullptr;

		} // tree
	} // swing
} // javax