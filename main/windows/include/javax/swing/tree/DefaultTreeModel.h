#ifndef _javax_swing_tree_DefaultTreeModel_h_
#define _javax_swing_tree_DefaultTreeModel_h_
//$ class javax.swing.tree.DefaultTreeModel
//$ extends java.io.Serializable
//$ implements javax.swing.tree.TreeModel

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <javax/swing/tree/TreeModel.h>

namespace java {
	namespace io {
		class ObjectInputStream;
		class ObjectOutputStream;
	}
}
namespace java {
	namespace util {
		class EventListener;
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class EventListenerList;
			class TreeModelListener;
		}
	}
}
namespace javax {
	namespace swing {
		namespace tree {
			class MutableTreeNode;
			class TreeNode;
			class TreePath;
		}
	}
}

namespace javax {
	namespace swing {
		namespace tree {

class $import DefaultTreeModel : public ::java::io::Serializable, public ::javax::swing::tree::TreeModel {
	$class(DefaultTreeModel, $NO_CLASS_INIT, ::java::io::Serializable, ::javax::swing::tree::TreeModel)
public:
	DefaultTreeModel();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::tree::TreeNode* root);
	void init$(::javax::swing::tree::TreeNode* root, bool asksAllowsChildren);
	virtual void addTreeModelListener(::javax::swing::event::TreeModelListener* l) override;
	virtual bool asksAllowsChildren();
	virtual void fireTreeNodesChanged(Object$* source, $ObjectArray* path, $ints* childIndices, $ObjectArray* children);
	virtual void fireTreeNodesInserted(Object$* source, $ObjectArray* path, $ints* childIndices, $ObjectArray* children);
	virtual void fireTreeNodesRemoved(Object$* source, $ObjectArray* path, $ints* childIndices, $ObjectArray* children);
	virtual void fireTreeStructureChanged(Object$* source, $ObjectArray* path, $ints* childIndices, $ObjectArray* children);
	void fireTreeStructureChanged(Object$* source, ::javax::swing::tree::TreePath* path);
	virtual $Object* getChild(Object$* parent, int32_t index) override;
	virtual int32_t getChildCount(Object$* parent) override;
	virtual int32_t getIndexOfChild(Object$* parent, Object$* child) override;
	virtual $Array<::java::util::EventListener>* getListeners($Class* listenerType);
	virtual $Array<::javax::swing::tree::TreeNode>* getPathToRoot(::javax::swing::tree::TreeNode* aNode);
	virtual $Array<::javax::swing::tree::TreeNode>* getPathToRoot(::javax::swing::tree::TreeNode* aNode, int32_t depth);
	virtual $Object* getRoot() override;
	virtual $Array<::javax::swing::event::TreeModelListener>* getTreeModelListeners();
	virtual void insertNodeInto(::javax::swing::tree::MutableTreeNode* newChild, ::javax::swing::tree::MutableTreeNode* parent, int32_t index);
	virtual bool isLeaf(Object$* node) override;
	virtual void nodeChanged(::javax::swing::tree::TreeNode* node);
	virtual void nodeStructureChanged(::javax::swing::tree::TreeNode* node);
	virtual void nodesChanged(::javax::swing::tree::TreeNode* node, $ints* childIndices);
	virtual void nodesWereInserted(::javax::swing::tree::TreeNode* node, $ints* childIndices);
	virtual void nodesWereRemoved(::javax::swing::tree::TreeNode* node, $ints* childIndices, $ObjectArray* removedChildren);
	void readObject(::java::io::ObjectInputStream* s);
	virtual void reload();
	virtual void reload(::javax::swing::tree::TreeNode* node);
	virtual void removeNodeFromParent(::javax::swing::tree::MutableTreeNode* node);
	virtual void removeTreeModelListener(::javax::swing::event::TreeModelListener* l) override;
	virtual void setAsksAllowsChildren(bool newValue);
	virtual void setRoot(::javax::swing::tree::TreeNode* root);
	virtual $String* toString() override;
	virtual void valueForPathChanged(::javax::swing::tree::TreePath* path, Object$* newValue) override;
	void writeObject(::java::io::ObjectOutputStream* s);
	::javax::swing::tree::TreeNode* root = nullptr;
	::javax::swing::event::EventListenerList* listenerList = nullptr;
	bool asksAllowsChildren$ = false;
};

		} // tree
	} // swing
} // javax

#endif // _javax_swing_tree_DefaultTreeModel_h_