#ifndef _javax_swing_tree_MutableTreeNode_h_
#define _javax_swing_tree_MutableTreeNode_h_
//$ interface javax.swing.tree.MutableTreeNode
//$ extends javax.swing.tree.TreeNode

#include <javax/swing/tree/TreeNode.h>

namespace javax {
	namespace swing {
		namespace tree {

class $import MutableTreeNode : public ::javax::swing::tree::TreeNode {
	$interface(MutableTreeNode, $NO_CLASS_INIT, ::javax::swing::tree::TreeNode)
public:
	virtual void insert(::javax::swing::tree::MutableTreeNode* child, int32_t index) {}
	virtual void remove(int32_t index) {}
	virtual void remove(::javax::swing::tree::MutableTreeNode* node) {}
	virtual void removeFromParent() {}
	virtual void setParent(::javax::swing::tree::MutableTreeNode* newParent) {}
	virtual void setUserObject(Object$* object) {}
};

		} // tree
	} // swing
} // javax

#endif // _javax_swing_tree_MutableTreeNode_h_