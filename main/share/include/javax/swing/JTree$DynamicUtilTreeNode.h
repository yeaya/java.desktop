#ifndef _javax_swing_JTree$DynamicUtilTreeNode_h_
#define _javax_swing_JTree$DynamicUtilTreeNode_h_
//$ class javax.swing.JTree$DynamicUtilTreeNode
//$ extends javax.swing.tree.DefaultMutableTreeNode

#include <javax/swing/tree/DefaultMutableTreeNode.h>

namespace java {
	namespace util {
		class Enumeration;
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

class $import JTree$DynamicUtilTreeNode : public ::javax::swing::tree::DefaultMutableTreeNode {
	$class(JTree$DynamicUtilTreeNode, $NO_CLASS_INIT, ::javax::swing::tree::DefaultMutableTreeNode)
public:
	JTree$DynamicUtilTreeNode();
	void init$(Object$* value, Object$* children);
	virtual ::java::util::Enumeration* children() override;
	static void createChildren(::javax::swing::tree::DefaultMutableTreeNode* parent, Object$* children);
	virtual ::javax::swing::tree::TreeNode* getChildAt(int32_t index) override;
	virtual int32_t getChildCount() override;
	virtual bool isLeaf() override;
	virtual void loadChildren();
	bool hasChildren = false;
	$Object* childValue = nullptr;
	bool loadedChildren = false;
};

	} // swing
} // javax

#endif // _javax_swing_JTree$DynamicUtilTreeNode_h_