#ifndef _javax_swing_tree_DefaultMutableTreeNode_h_
#define _javax_swing_tree_DefaultMutableTreeNode_h_
//$ class javax.swing.tree.DefaultMutableTreeNode
//$ extends java.lang.Cloneable
//$ implements javax.swing.tree.MutableTreeNode,java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Cloneable.h>
#include <javax/swing/tree/MutableTreeNode.h>

#pragma push_macro("EMPTY_ENUMERATION")
#undef EMPTY_ENUMERATION

namespace java {
	namespace io {
		class ObjectInputStream;
		class ObjectOutputStream;
	}
}
namespace java {
	namespace util {
		class Enumeration;
		class Vector;
	}
}
namespace javax {
	namespace swing {
		namespace tree {
			class TreeNode;
		}
	}
}

namespace javax {
	namespace swing {
		namespace tree {

class $export DefaultMutableTreeNode : public ::java::lang::Cloneable, public ::javax::swing::tree::MutableTreeNode, public ::java::io::Serializable {
	$class(DefaultMutableTreeNode, 0, ::java::lang::Cloneable, ::javax::swing::tree::MutableTreeNode, ::java::io::Serializable)
public:
	DefaultMutableTreeNode();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$(Object$* userObject);
	void init$(Object$* userObject, bool allowsChildren);
	virtual void add(::javax::swing::tree::MutableTreeNode* newChild);
	virtual ::java::util::Enumeration* breadthFirstEnumeration();
	virtual ::java::util::Enumeration* children() override;
	virtual $Object* clone() override;
	virtual ::java::util::Enumeration* depthFirstEnumeration();
	virtual bool getAllowsChildren() override;
	virtual ::javax::swing::tree::TreeNode* getChildAfter(::javax::swing::tree::TreeNode* aChild);
	virtual ::javax::swing::tree::TreeNode* getChildAt(int32_t index) override;
	virtual ::javax::swing::tree::TreeNode* getChildBefore(::javax::swing::tree::TreeNode* aChild);
	virtual int32_t getChildCount() override;
	virtual int32_t getDepth();
	virtual ::javax::swing::tree::TreeNode* getFirstChild();
	virtual ::javax::swing::tree::DefaultMutableTreeNode* getFirstLeaf();
	virtual int32_t getIndex(::javax::swing::tree::TreeNode* aChild) override;
	virtual ::javax::swing::tree::TreeNode* getLastChild();
	virtual ::javax::swing::tree::DefaultMutableTreeNode* getLastLeaf();
	virtual int32_t getLeafCount();
	virtual int32_t getLevel();
	virtual ::javax::swing::tree::DefaultMutableTreeNode* getNextLeaf();
	virtual ::javax::swing::tree::DefaultMutableTreeNode* getNextNode();
	virtual ::javax::swing::tree::DefaultMutableTreeNode* getNextSibling();
	virtual ::javax::swing::tree::TreeNode* getParent() override;
	virtual $Array<::javax::swing::tree::TreeNode>* getPath();
	virtual $Array<::javax::swing::tree::TreeNode>* getPathToRoot(::javax::swing::tree::TreeNode* aNode, int32_t depth);
	virtual ::javax::swing::tree::DefaultMutableTreeNode* getPreviousLeaf();
	virtual ::javax::swing::tree::DefaultMutableTreeNode* getPreviousNode();
	virtual ::javax::swing::tree::DefaultMutableTreeNode* getPreviousSibling();
	virtual ::javax::swing::tree::TreeNode* getRoot();
	virtual ::javax::swing::tree::TreeNode* getSharedAncestor(::javax::swing::tree::DefaultMutableTreeNode* aNode);
	virtual int32_t getSiblingCount();
	virtual $Object* getUserObject();
	virtual $ObjectArray* getUserObjectPath();
	virtual void insert(::javax::swing::tree::MutableTreeNode* newChild, int32_t childIndex) override;
	virtual bool isLeaf() override;
	virtual bool isNodeAncestor(::javax::swing::tree::TreeNode* anotherNode);
	virtual bool isNodeChild(::javax::swing::tree::TreeNode* aNode);
	virtual bool isNodeDescendant(::javax::swing::tree::DefaultMutableTreeNode* anotherNode);
	virtual bool isNodeRelated(::javax::swing::tree::DefaultMutableTreeNode* aNode);
	virtual bool isNodeSibling(::javax::swing::tree::TreeNode* anotherNode);
	virtual bool isRoot();
	virtual ::java::util::Enumeration* pathFromAncestorEnumeration(::javax::swing::tree::TreeNode* ancestor);
	virtual ::java::util::Enumeration* postorderEnumeration();
	virtual ::java::util::Enumeration* preorderEnumeration();
	void readObject(::java::io::ObjectInputStream* s);
	virtual void remove(int32_t childIndex) override;
	virtual void remove(::javax::swing::tree::MutableTreeNode* aChild) override;
	virtual void removeAllChildren();
	virtual void removeFromParent() override;
	virtual void setAllowsChildren(bool allows);
	virtual void setParent(::javax::swing::tree::MutableTreeNode* newParent) override;
	virtual void setUserObject(Object$* userObject) override;
	virtual $String* toString() override;
	void writeObject(::java::io::ObjectOutputStream* s);
	static const int64_t serialVersionUID = (int64_t)0xC458BFFCF2A871E0;
	static ::java::util::Enumeration* EMPTY_ENUMERATION;
	::javax::swing::tree::MutableTreeNode* parent = nullptr;
	::java::util::Vector* children$ = nullptr;
	$Object* userObject = nullptr;
	bool allowsChildren = false;
};

		} // tree
	} // swing
} // javax

#pragma pop_macro("EMPTY_ENUMERATION")

#endif // _javax_swing_tree_DefaultMutableTreeNode_h_