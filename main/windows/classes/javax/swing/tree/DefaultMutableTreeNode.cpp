#include <javax/swing/tree/DefaultMutableTreeNode.h>

#include <java/io/ObjectInputStream$GetField.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/ArrayIndexOutOfBoundsException.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CloneNotSupportedException.h>
#include <java/lang/Cloneable.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/Error.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Collections.h>
#include <java/util/Enumeration.h>
#include <java/util/NoSuchElementException.h>
#include <java/util/Vector.h>
#include <javax/swing/tree/DefaultMutableTreeNode$BreadthFirstEnumeration.h>
#include <javax/swing/tree/DefaultMutableTreeNode$PathBetweenNodesEnumeration.h>
#include <javax/swing/tree/DefaultMutableTreeNode$PostorderEnumeration.h>
#include <javax/swing/tree/DefaultMutableTreeNode$PreorderEnumeration.h>
#include <javax/swing/tree/MutableTreeNode.h>
#include <javax/swing/tree/TreeNode.h>
#include <jcpp.h>

#undef EMPTY_ENUMERATION

using $TreeNodeArray = $Array<::javax::swing::tree::TreeNode>;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectInputStream$GetField = ::java::io::ObjectInputStream$GetField;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $Serializable = ::java::io::Serializable;
using $ArrayIndexOutOfBoundsException = ::java::lang::ArrayIndexOutOfBoundsException;
using $ClassInfo = ::java::lang::ClassInfo;
using $CloneNotSupportedException = ::java::lang::CloneNotSupportedException;
using $Cloneable = ::java::lang::Cloneable;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Collections = ::java::util::Collections;
using $Enumeration = ::java::util::Enumeration;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $Vector = ::java::util::Vector;
using $DefaultMutableTreeNode$BreadthFirstEnumeration = ::javax::swing::tree::DefaultMutableTreeNode$BreadthFirstEnumeration;
using $DefaultMutableTreeNode$PathBetweenNodesEnumeration = ::javax::swing::tree::DefaultMutableTreeNode$PathBetweenNodesEnumeration;
using $DefaultMutableTreeNode$PostorderEnumeration = ::javax::swing::tree::DefaultMutableTreeNode$PostorderEnumeration;
using $DefaultMutableTreeNode$PreorderEnumeration = ::javax::swing::tree::DefaultMutableTreeNode$PreorderEnumeration;
using $MutableTreeNode = ::javax::swing::tree::MutableTreeNode;
using $TreeNode = ::javax::swing::tree::TreeNode;

namespace javax {
	namespace swing {
		namespace tree {

$CompoundAttribute _DefaultMutableTreeNode_MethodAnnotations_setParent52[] = {
	{"Ljava/beans/Transient;", nullptr},
	{}
};

$FieldInfo _DefaultMutableTreeNode_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DefaultMutableTreeNode, serialVersionUID)},
	{"EMPTY_ENUMERATION", "Ljava/util/Enumeration;", "Ljava/util/Enumeration<Ljavax/swing/tree/TreeNode;>;", $PUBLIC | $STATIC | $FINAL, $staticField(DefaultMutableTreeNode, EMPTY_ENUMERATION)},
	{"parent", "Ljavax/swing/tree/MutableTreeNode;", nullptr, $PROTECTED, $field(DefaultMutableTreeNode, parent)},
	{"children", "Ljava/util/Vector;", "Ljava/util/Vector<Ljavax/swing/tree/TreeNode;>;", $PROTECTED, $field(DefaultMutableTreeNode, children$)},
	{"userObject", "Ljava/lang/Object;", nullptr, $PROTECTED | $TRANSIENT, $field(DefaultMutableTreeNode, userObject)},
	{"allowsChildren", "Z", nullptr, $PROTECTED, $field(DefaultMutableTreeNode, allowsChildren)},
	{}
};

$MethodInfo _DefaultMutableTreeNode_MethodInfo_[] = {
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DefaultMutableTreeNode::*)()>(&DefaultMutableTreeNode::init$))},
	{"<init>", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(DefaultMutableTreeNode::*)(Object$*)>(&DefaultMutableTreeNode::init$))},
	{"<init>", "(Ljava/lang/Object;Z)V", nullptr, $PUBLIC, $method(static_cast<void(DefaultMutableTreeNode::*)(Object$*,bool)>(&DefaultMutableTreeNode::init$))},
	{"add", "(Ljavax/swing/tree/MutableTreeNode;)V", nullptr, $PUBLIC},
	{"breadthFirstEnumeration", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<Ljavax/swing/tree/TreeNode;>;", $PUBLIC},
	{"children", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<Ljavax/swing/tree/TreeNode;>;", $PUBLIC},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"depthFirstEnumeration", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<Ljavax/swing/tree/TreeNode;>;", $PUBLIC},
	{"getAllowsChildren", "()Z", nullptr, $PUBLIC},
	{"getChildAfter", "(Ljavax/swing/tree/TreeNode;)Ljavax/swing/tree/TreeNode;", nullptr, $PUBLIC},
	{"getChildAt", "(I)Ljavax/swing/tree/TreeNode;", nullptr, $PUBLIC},
	{"getChildBefore", "(Ljavax/swing/tree/TreeNode;)Ljavax/swing/tree/TreeNode;", nullptr, $PUBLIC},
	{"getChildCount", "()I", nullptr, $PUBLIC},
	{"getDepth", "()I", nullptr, $PUBLIC},
	{"getFirstChild", "()Ljavax/swing/tree/TreeNode;", nullptr, $PUBLIC},
	{"getFirstLeaf", "()Ljavax/swing/tree/DefaultMutableTreeNode;", nullptr, $PUBLIC},
	{"getIndex", "(Ljavax/swing/tree/TreeNode;)I", nullptr, $PUBLIC},
	{"getLastChild", "()Ljavax/swing/tree/TreeNode;", nullptr, $PUBLIC},
	{"getLastLeaf", "()Ljavax/swing/tree/DefaultMutableTreeNode;", nullptr, $PUBLIC},
	{"getLeafCount", "()I", nullptr, $PUBLIC},
	{"getLevel", "()I", nullptr, $PUBLIC},
	{"getNextLeaf", "()Ljavax/swing/tree/DefaultMutableTreeNode;", nullptr, $PUBLIC},
	{"getNextNode", "()Ljavax/swing/tree/DefaultMutableTreeNode;", nullptr, $PUBLIC},
	{"getNextSibling", "()Ljavax/swing/tree/DefaultMutableTreeNode;", nullptr, $PUBLIC},
	{"getParent", "()Ljavax/swing/tree/TreeNode;", nullptr, $PUBLIC},
	{"getPath", "()[Ljavax/swing/tree/TreeNode;", nullptr, $PUBLIC},
	{"getPathToRoot", "(Ljavax/swing/tree/TreeNode;I)[Ljavax/swing/tree/TreeNode;", nullptr, $PROTECTED},
	{"getPreviousLeaf", "()Ljavax/swing/tree/DefaultMutableTreeNode;", nullptr, $PUBLIC},
	{"getPreviousNode", "()Ljavax/swing/tree/DefaultMutableTreeNode;", nullptr, $PUBLIC},
	{"getPreviousSibling", "()Ljavax/swing/tree/DefaultMutableTreeNode;", nullptr, $PUBLIC},
	{"getRoot", "()Ljavax/swing/tree/TreeNode;", nullptr, $PUBLIC},
	{"getSharedAncestor", "(Ljavax/swing/tree/DefaultMutableTreeNode;)Ljavax/swing/tree/TreeNode;", nullptr, $PUBLIC},
	{"getSiblingCount", "()I", nullptr, $PUBLIC},
	{"getUserObject", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getUserObjectPath", "()[Ljava/lang/Object;", nullptr, $PUBLIC},
	{"insert", "(Ljavax/swing/tree/MutableTreeNode;I)V", nullptr, $PUBLIC},
	{"isLeaf", "()Z", nullptr, $PUBLIC},
	{"isNodeAncestor", "(Ljavax/swing/tree/TreeNode;)Z", nullptr, $PUBLIC},
	{"isNodeChild", "(Ljavax/swing/tree/TreeNode;)Z", nullptr, $PUBLIC},
	{"isNodeDescendant", "(Ljavax/swing/tree/DefaultMutableTreeNode;)Z", nullptr, $PUBLIC},
	{"isNodeRelated", "(Ljavax/swing/tree/DefaultMutableTreeNode;)Z", nullptr, $PUBLIC},
	{"isNodeSibling", "(Ljavax/swing/tree/TreeNode;)Z", nullptr, $PUBLIC},
	{"isRoot", "()Z", nullptr, $PUBLIC},
	{"pathFromAncestorEnumeration", "(Ljavax/swing/tree/TreeNode;)Ljava/util/Enumeration;", "(Ljavax/swing/tree/TreeNode;)Ljava/util/Enumeration<Ljavax/swing/tree/TreeNode;>;", $PUBLIC},
	{"postorderEnumeration", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<Ljavax/swing/tree/TreeNode;>;", $PUBLIC},
	{"preorderEnumeration", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<Ljavax/swing/tree/TreeNode;>;", $PUBLIC},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(DefaultMutableTreeNode::*)($ObjectInputStream*)>(&DefaultMutableTreeNode::readObject)), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"remove", "(I)V", nullptr, $PUBLIC},
	{"remove", "(Ljavax/swing/tree/MutableTreeNode;)V", nullptr, $PUBLIC},
	{"removeAllChildren", "()V", nullptr, $PUBLIC},
	{"removeFromParent", "()V", nullptr, $PUBLIC},
	{"setAllowsChildren", "(Z)V", nullptr, $PUBLIC},
	{"setParent", "(Ljavax/swing/tree/MutableTreeNode;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _DefaultMutableTreeNode_MethodAnnotations_setParent52},
	{"setUserObject", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(DefaultMutableTreeNode::*)($ObjectOutputStream*)>(&DefaultMutableTreeNode::writeObject)), "java.io.IOException"},
	{}
};

$InnerClassInfo _DefaultMutableTreeNode_InnerClassesInfo_[] = {
	{"javax.swing.tree.DefaultMutableTreeNode$PathBetweenNodesEnumeration", "javax.swing.tree.DefaultMutableTreeNode", "PathBetweenNodesEnumeration", $FINAL},
	{"javax.swing.tree.DefaultMutableTreeNode$BreadthFirstEnumeration", "javax.swing.tree.DefaultMutableTreeNode", "BreadthFirstEnumeration", $FINAL},
	{"javax.swing.tree.DefaultMutableTreeNode$PostorderEnumeration", "javax.swing.tree.DefaultMutableTreeNode", "PostorderEnumeration", $FINAL},
	{"javax.swing.tree.DefaultMutableTreeNode$PreorderEnumeration", "javax.swing.tree.DefaultMutableTreeNode", "PreorderEnumeration", $PRIVATE | $FINAL},
	{}
};

$ClassInfo _DefaultMutableTreeNode_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.tree.DefaultMutableTreeNode",
	"java.lang.Object",
	"java.lang.Cloneable,javax.swing.tree.MutableTreeNode,java.io.Serializable",
	_DefaultMutableTreeNode_FieldInfo_,
	_DefaultMutableTreeNode_MethodInfo_,
	nullptr,
	nullptr,
	_DefaultMutableTreeNode_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.tree.DefaultMutableTreeNode$PathBetweenNodesEnumeration,javax.swing.tree.DefaultMutableTreeNode$BreadthFirstEnumeration,javax.swing.tree.DefaultMutableTreeNode$BreadthFirstEnumeration$Queue,javax.swing.tree.DefaultMutableTreeNode$BreadthFirstEnumeration$Queue$QNode,javax.swing.tree.DefaultMutableTreeNode$PostorderEnumeration,javax.swing.tree.DefaultMutableTreeNode$PreorderEnumeration"
};

$Object* allocate$DefaultMutableTreeNode($Class* clazz) {
	return $of($alloc(DefaultMutableTreeNode));
}

int32_t DefaultMutableTreeNode::hashCode() {
	 return this->$Cloneable::hashCode();
}

bool DefaultMutableTreeNode::equals(Object$* arg0) {
	 return this->$Cloneable::equals(arg0);
}

void DefaultMutableTreeNode::finalize() {
	this->$Cloneable::finalize();
}


$Enumeration* DefaultMutableTreeNode::EMPTY_ENUMERATION = nullptr;

void DefaultMutableTreeNode::init$() {
	DefaultMutableTreeNode::init$(nullptr);
}

void DefaultMutableTreeNode::init$(Object$* userObject) {
	DefaultMutableTreeNode::init$(userObject, true);
}

void DefaultMutableTreeNode::init$(Object$* userObject, bool allowsChildren) {
	$set(this, parent, nullptr);
	this->allowsChildren = allowsChildren;
	$set(this, userObject, userObject);
}

void DefaultMutableTreeNode::insert($MutableTreeNode* newChild, int32_t childIndex) {
	if (!this->allowsChildren) {
		$throwNew($IllegalStateException, "node does not allow children"_s);
	} else if (newChild == nullptr) {
		$throwNew($IllegalArgumentException, "new child is null"_s);
	} else if (isNodeAncestor(newChild)) {
		$throwNew($IllegalArgumentException, "new child is an ancestor"_s);
	}
	$var($MutableTreeNode, oldParent, $cast($MutableTreeNode, $nc(newChild)->getParent()));
	if (oldParent != nullptr) {
		oldParent->remove(newChild);
	}
	newChild->setParent(this);
	if (this->children$ == nullptr) {
		$set(this, children$, $new($Vector));
	}
	$nc(this->children$)->insertElementAt(newChild, childIndex);
}

void DefaultMutableTreeNode::remove(int32_t childIndex) {
	$var($MutableTreeNode, child, $cast($MutableTreeNode, getChildAt(childIndex)));
	$nc(this->children$)->removeElementAt(childIndex);
	$nc(child)->setParent(nullptr);
}

void DefaultMutableTreeNode::setParent($MutableTreeNode* newParent) {
	$set(this, parent, newParent);
}

$TreeNode* DefaultMutableTreeNode::getParent() {
	return this->parent;
}

$TreeNode* DefaultMutableTreeNode::getChildAt(int32_t index) {
	if (this->children$ == nullptr) {
		$throwNew($ArrayIndexOutOfBoundsException, "node has no children"_s);
	}
	return $cast($TreeNode, $nc(this->children$)->elementAt(index));
}

int32_t DefaultMutableTreeNode::getChildCount() {
	if (this->children$ == nullptr) {
		return 0;
	} else {
		return $nc(this->children$)->size();
	}
}

int32_t DefaultMutableTreeNode::getIndex($TreeNode* aChild) {
	if (aChild == nullptr) {
		$throwNew($IllegalArgumentException, "argument is null"_s);
	}
	if (!isNodeChild(aChild)) {
		return -1;
	}
	return $nc(this->children$)->indexOf(aChild);
}

$Enumeration* DefaultMutableTreeNode::children() {
	if (this->children$ == nullptr) {
		return DefaultMutableTreeNode::EMPTY_ENUMERATION;
	} else {
		return $nc(this->children$)->elements();
	}
}

void DefaultMutableTreeNode::setAllowsChildren(bool allows) {
	if (allows != this->allowsChildren) {
		this->allowsChildren = allows;
		if (!this->allowsChildren) {
			removeAllChildren();
		}
	}
}

bool DefaultMutableTreeNode::getAllowsChildren() {
	return this->allowsChildren;
}

void DefaultMutableTreeNode::setUserObject(Object$* userObject) {
	$set(this, userObject, userObject);
}

$Object* DefaultMutableTreeNode::getUserObject() {
	return $of(this->userObject);
}

void DefaultMutableTreeNode::removeFromParent() {
	$var($MutableTreeNode, parent, $cast($MutableTreeNode, getParent()));
	if (parent != nullptr) {
		parent->remove(static_cast<$MutableTreeNode*>(this));
	}
}

void DefaultMutableTreeNode::remove($MutableTreeNode* aChild) {
	if (aChild == nullptr) {
		$throwNew($IllegalArgumentException, "argument is null"_s);
	}
	if (!isNodeChild(aChild)) {
		$throwNew($IllegalArgumentException, "argument is not a child"_s);
	}
	remove(getIndex(aChild));
}

void DefaultMutableTreeNode::removeAllChildren() {
	for (int32_t i = getChildCount() - 1; i >= 0; --i) {
		remove(i);
	}
}

void DefaultMutableTreeNode::add($MutableTreeNode* newChild) {
	if (newChild != nullptr && $equals(newChild->getParent(), this)) {
		insert(newChild, getChildCount() - 1);
	} else {
		insert(newChild, getChildCount());
	}
}

bool DefaultMutableTreeNode::isNodeAncestor($TreeNode* anotherNode) {
	if (anotherNode == nullptr) {
		return false;
	}
	$var($TreeNode, ancestor, this);
	do {
		if (ancestor == anotherNode) {
			return true;
		}
	} while (($assign(ancestor, ancestor->getParent())) != nullptr);
	return false;
}

bool DefaultMutableTreeNode::isNodeDescendant(DefaultMutableTreeNode* anotherNode) {
	if (anotherNode == nullptr) {
		return false;
	}
	return $nc(anotherNode)->isNodeAncestor(this);
}

$TreeNode* DefaultMutableTreeNode::getSharedAncestor(DefaultMutableTreeNode* aNode) {
	if (aNode == this) {
		return this;
	} else if (aNode == nullptr) {
		return nullptr;
	}
	int32_t level1 = 0;
	int32_t level2 = 0;
	int32_t diff = 0;
	$var($TreeNode, node1, nullptr);
	$var($TreeNode, node2, nullptr);
	level1 = getLevel();
	level2 = $nc(aNode)->getLevel();
	if (level2 > level1) {
		diff = level2 - level1;
		$assign(node1, aNode);
		$assign(node2, this);
	} else {
		diff = level1 - level2;
		$assign(node1, this);
		$assign(node2, aNode);
	}
	while (diff > 0) {
		$assign(node1, $nc(node1)->getParent());
		--diff;
	}
	do {
		if (node1 == node2) {
			return node1;
		}
		$assign(node1, $nc(node1)->getParent());
		$assign(node2, $nc(node2)->getParent());
	} while (node1 != nullptr);
	if (node1 != nullptr || node2 != nullptr) {
		$throwNew($Error, "nodes should be null"_s);
	}
	return nullptr;
}

bool DefaultMutableTreeNode::isNodeRelated(DefaultMutableTreeNode* aNode) {
	bool var$0 = (aNode != nullptr);
	if (var$0) {
		var$0 = (getRoot() == aNode->getRoot());
	}
	return var$0;
}

int32_t DefaultMutableTreeNode::getDepth() {
	$var($Object, last, nullptr);
	$var($Enumeration, enum_, breadthFirstEnumeration());
	while ($nc(enum_)->hasMoreElements()) {
		$assign(last, enum_->nextElement());
	}
	if (last == nullptr) {
		$throwNew($Error, "nodes should be null"_s);
	}
	int32_t var$0 = $nc(($cast(DefaultMutableTreeNode, last)))->getLevel();
	return var$0 - getLevel();
}

int32_t DefaultMutableTreeNode::getLevel() {
	$var($TreeNode, ancestor, nullptr);
	int32_t levels = 0;
	$assign(ancestor, this);
	while (($assign(ancestor, $nc(ancestor)->getParent())) != nullptr) {
		++levels;
	}
	return levels;
}

$TreeNodeArray* DefaultMutableTreeNode::getPath() {
	return getPathToRoot(this, 0);
}

$TreeNodeArray* DefaultMutableTreeNode::getPathToRoot($TreeNode* aNode, int32_t depth) {
	$var($TreeNodeArray, retNodes, nullptr);
	if (aNode == nullptr) {
		if (depth == 0) {
			return nullptr;
		} else {
			$assign(retNodes, $new($TreeNodeArray, depth));
		}
	} else {
		++depth;
		$assign(retNodes, getPathToRoot($($nc(aNode)->getParent()), depth));
		$nc(retNodes)->set(retNodes->length - depth, aNode);
	}
	return retNodes;
}

$ObjectArray* DefaultMutableTreeNode::getUserObjectPath() {
	$var($TreeNodeArray, realPath, getPath());
	$var($ObjectArray, retPath, $new($ObjectArray, $nc(realPath)->length));
	for (int32_t counter = 0; counter < realPath->length; ++counter) {
		retPath->set(counter, $($nc(($cast(DefaultMutableTreeNode, realPath->get(counter))))->getUserObject()));
	}
	return retPath;
}

$TreeNode* DefaultMutableTreeNode::getRoot() {
	$var($TreeNode, ancestor, this);
	$var($TreeNode, previous, nullptr);
	do {
		$assign(previous, ancestor);
		$assign(ancestor, ancestor->getParent());
	} while (ancestor != nullptr);
	return previous;
}

bool DefaultMutableTreeNode::isRoot() {
	return getParent() == nullptr;
}

DefaultMutableTreeNode* DefaultMutableTreeNode::getNextNode() {
	if (getChildCount() == 0) {
		$var(DefaultMutableTreeNode, nextSibling, getNextSibling());
		if (nextSibling == nullptr) {
			$var(DefaultMutableTreeNode, aNode, $cast(DefaultMutableTreeNode, getParent()));
			do {
				if (aNode == nullptr) {
					return nullptr;
				}
				$assign(nextSibling, $nc(aNode)->getNextSibling());
				if (nextSibling != nullptr) {
					return nextSibling;
				}
				$assign(aNode, $cast(DefaultMutableTreeNode, aNode->getParent()));
			} while (true);
		} else {
			return nextSibling;
		}
	} else {
		return $cast(DefaultMutableTreeNode, getChildAt(0));
	}
}

DefaultMutableTreeNode* DefaultMutableTreeNode::getPreviousNode() {
	$var(DefaultMutableTreeNode, previousSibling, nullptr);
	$var(DefaultMutableTreeNode, myParent, $cast(DefaultMutableTreeNode, getParent()));
	if (myParent == nullptr) {
		return nullptr;
	}
	$assign(previousSibling, getPreviousSibling());
	if (previousSibling != nullptr) {
		if (previousSibling->getChildCount() == 0) {
			return previousSibling;
		} else {
			return previousSibling->getLastLeaf();
		}
	} else {
		return myParent;
	}
}

$Enumeration* DefaultMutableTreeNode::preorderEnumeration() {
	return $new($DefaultMutableTreeNode$PreorderEnumeration, this, this);
}

$Enumeration* DefaultMutableTreeNode::postorderEnumeration() {
	return $new($DefaultMutableTreeNode$PostorderEnumeration, this, this);
}

$Enumeration* DefaultMutableTreeNode::breadthFirstEnumeration() {
	return $new($DefaultMutableTreeNode$BreadthFirstEnumeration, this, this);
}

$Enumeration* DefaultMutableTreeNode::depthFirstEnumeration() {
	return postorderEnumeration();
}

$Enumeration* DefaultMutableTreeNode::pathFromAncestorEnumeration($TreeNode* ancestor) {
	return $new($DefaultMutableTreeNode$PathBetweenNodesEnumeration, this, ancestor, this);
}

bool DefaultMutableTreeNode::isNodeChild($TreeNode* aNode) {
	bool retval = false;
	if (aNode == nullptr) {
		retval = false;
	} else if (getChildCount() == 0) {
		retval = false;
	} else {
		retval = ($equals($nc(aNode)->getParent(), this));
	}
	return retval;
}

$TreeNode* DefaultMutableTreeNode::getFirstChild() {
	if (getChildCount() == 0) {
		$throwNew($NoSuchElementException, "node has no children"_s);
	}
	return getChildAt(0);
}

$TreeNode* DefaultMutableTreeNode::getLastChild() {
	if (getChildCount() == 0) {
		$throwNew($NoSuchElementException, "node has no children"_s);
	}
	return getChildAt(getChildCount() - 1);
}

$TreeNode* DefaultMutableTreeNode::getChildAfter($TreeNode* aChild) {
	if (aChild == nullptr) {
		$throwNew($IllegalArgumentException, "argument is null"_s);
	}
	int32_t index = getIndex(aChild);
	if (index == -1) {
		$throwNew($IllegalArgumentException, "node is not a child"_s);
	}
	if (index < getChildCount() - 1) {
		return getChildAt(index + 1);
	} else {
		return nullptr;
	}
}

$TreeNode* DefaultMutableTreeNode::getChildBefore($TreeNode* aChild) {
	if (aChild == nullptr) {
		$throwNew($IllegalArgumentException, "argument is null"_s);
	}
	int32_t index = getIndex(aChild);
	if (index == -1) {
		$throwNew($IllegalArgumentException, "argument is not a child"_s);
	}
	if (index > 0) {
		return getChildAt(index - 1);
	} else {
		return nullptr;
	}
}

bool DefaultMutableTreeNode::isNodeSibling($TreeNode* anotherNode) {
	bool retval = false;
	if (anotherNode == nullptr) {
		retval = false;
	} else if ($equals(anotherNode, this)) {
		retval = true;
	} else {
		$var($TreeNode, myParent, getParent());
		retval = (myParent != nullptr && myParent == anotherNode->getParent());
		if (retval && !$nc(($cast(DefaultMutableTreeNode, $(getParent()))))->isNodeChild(anotherNode)) {
			$throwNew($Error, "sibling has different parent"_s);
		}
	}
	return retval;
}

int32_t DefaultMutableTreeNode::getSiblingCount() {
	$var($TreeNode, myParent, getParent());
	if (myParent == nullptr) {
		return 1;
	} else {
		return $nc(myParent)->getChildCount();
	}
}

DefaultMutableTreeNode* DefaultMutableTreeNode::getNextSibling() {
	$var(DefaultMutableTreeNode, retval, nullptr);
	$var(DefaultMutableTreeNode, myParent, $cast(DefaultMutableTreeNode, getParent()));
	if (myParent == nullptr) {
		$assign(retval, nullptr);
	} else {
		$assign(retval, $cast(DefaultMutableTreeNode, $nc(myParent)->getChildAfter(this)));
	}
	if (retval != nullptr && !isNodeSibling(retval)) {
		$throwNew($Error, "child of parent is not a sibling"_s);
	}
	return retval;
}

DefaultMutableTreeNode* DefaultMutableTreeNode::getPreviousSibling() {
	$var(DefaultMutableTreeNode, retval, nullptr);
	$var(DefaultMutableTreeNode, myParent, $cast(DefaultMutableTreeNode, getParent()));
	if (myParent == nullptr) {
		$assign(retval, nullptr);
	} else {
		$assign(retval, $cast(DefaultMutableTreeNode, $nc(myParent)->getChildBefore(this)));
	}
	if (retval != nullptr && !isNodeSibling(retval)) {
		$throwNew($Error, "child of parent is not a sibling"_s);
	}
	return retval;
}

bool DefaultMutableTreeNode::isLeaf() {
	return (getChildCount() == 0);
}

DefaultMutableTreeNode* DefaultMutableTreeNode::getFirstLeaf() {
	$var(DefaultMutableTreeNode, node, this);
	while (!$nc(node)->isLeaf()) {
		$assign(node, $cast(DefaultMutableTreeNode, node->getFirstChild()));
	}
	return node;
}

DefaultMutableTreeNode* DefaultMutableTreeNode::getLastLeaf() {
	$var(DefaultMutableTreeNode, node, this);
	while (!$nc(node)->isLeaf()) {
		$assign(node, $cast(DefaultMutableTreeNode, node->getLastChild()));
	}
	return node;
}

DefaultMutableTreeNode* DefaultMutableTreeNode::getNextLeaf() {
	$var(DefaultMutableTreeNode, nextSibling, nullptr);
	$var(DefaultMutableTreeNode, myParent, $cast(DefaultMutableTreeNode, getParent()));
	if (myParent == nullptr) {
		return nullptr;
	}
	$assign(nextSibling, getNextSibling());
	if (nextSibling != nullptr) {
		return nextSibling->getFirstLeaf();
	}
	return $nc(myParent)->getNextLeaf();
}

DefaultMutableTreeNode* DefaultMutableTreeNode::getPreviousLeaf() {
	$var(DefaultMutableTreeNode, previousSibling, nullptr);
	$var(DefaultMutableTreeNode, myParent, $cast(DefaultMutableTreeNode, getParent()));
	if (myParent == nullptr) {
		return nullptr;
	}
	$assign(previousSibling, getPreviousSibling());
	if (previousSibling != nullptr) {
		return previousSibling->getLastLeaf();
	}
	return $nc(myParent)->getPreviousLeaf();
}

int32_t DefaultMutableTreeNode::getLeafCount() {
	int32_t count = 0;
	$var($TreeNode, node, nullptr);
	$var($Enumeration, enum_, breadthFirstEnumeration());
	while ($nc(enum_)->hasMoreElements()) {
		$assign(node, $cast($TreeNode, enum_->nextElement()));
		if ($nc(node)->isLeaf()) {
			++count;
		}
	}
	if (count < 1) {
		$throwNew($Error, "tree has zero leaves"_s);
	}
	return count;
}

$String* DefaultMutableTreeNode::toString() {
	if (this->userObject == nullptr) {
		return ""_s;
	} else {
		return $nc($of(this->userObject))->toString();
	}
}

$Object* DefaultMutableTreeNode::clone() {
	$var(DefaultMutableTreeNode, newNode, nullptr);
	try {
		$assign(newNode, $cast(DefaultMutableTreeNode, $Cloneable::clone()));
		$set($nc(newNode), children$, nullptr);
		$set(newNode, parent, nullptr);
	} catch ($CloneNotSupportedException&) {
		$var($CloneNotSupportedException, e, $catch());
		$throwNew($Error, $(e->toString()));
	}
	return $of(newNode);
}

void DefaultMutableTreeNode::writeObject($ObjectOutputStream* s) {
	$var($ObjectArray, tValues, nullptr);
	$nc(s)->defaultWriteObject();
	if (this->userObject != nullptr && $instanceOf($Serializable, this->userObject)) {
		$assign(tValues, $new($ObjectArray, 2));
		tValues->set(0, "userObject"_s);
		tValues->set(1, this->userObject);
	} else {
		$assign(tValues, $new($ObjectArray, 0));
	}
	s->writeObject(tValues);
}

void DefaultMutableTreeNode::readObject($ObjectInputStream* s) {
	$var($ObjectInputStream$GetField, f, $nc(s)->readFields());
	$set(this, parent, $cast($MutableTreeNode, $nc(f)->get("parent"_s, ($Object*)nullptr)));
	$var($Vector, newChildren, $cast($Vector, f->get("children"_s, ($Object*)nullptr)));
	bool newAllowsChildren = f->get("allowsChildren"_s, false);
	if (!newAllowsChildren && newChildren != nullptr && newChildren->size() > 0) {
		$throwNew($IllegalStateException, "node does not allow children"_s);
	}
	$set(this, children$, newChildren);
	this->allowsChildren = newAllowsChildren;
	$var($ObjectArray, tValues, nullptr);
	$assign(tValues, $cast($ObjectArray, s->readObject()));
	if ($nc(tValues)->length > 0 && $nc($of(tValues->get(0)))->equals("userObject"_s)) {
		$set(this, userObject, tValues->get(1));
	}
}

void clinit$DefaultMutableTreeNode($Class* class$) {
	$assignStatic(DefaultMutableTreeNode::EMPTY_ENUMERATION, $Collections::emptyEnumeration());
}

DefaultMutableTreeNode::DefaultMutableTreeNode() {
}

$Class* DefaultMutableTreeNode::load$($String* name, bool initialize) {
	$loadClass(DefaultMutableTreeNode, name, initialize, &_DefaultMutableTreeNode_ClassInfo_, clinit$DefaultMutableTreeNode, allocate$DefaultMutableTreeNode);
	return class$;
}

$Class* DefaultMutableTreeNode::class$ = nullptr;

		} // tree
	} // swing
} // javax