#ifndef _javax_swing_tree_DefaultMutableTreeNode$PostorderEnumeration_h_
#define _javax_swing_tree_DefaultMutableTreeNode$PostorderEnumeration_h_
//$ class javax.swing.tree.DefaultMutableTreeNode$PostorderEnumeration
//$ extends java.util.Enumeration

#include <java/util/Enumeration.h>

namespace javax {
	namespace swing {
		namespace tree {
			class DefaultMutableTreeNode;
			class TreeNode;
		}
	}
}

namespace javax {
	namespace swing {
		namespace tree {

class $import DefaultMutableTreeNode$PostorderEnumeration : public ::java::util::Enumeration {
	$class(DefaultMutableTreeNode$PostorderEnumeration, $NO_CLASS_INIT, ::java::util::Enumeration)
public:
	DefaultMutableTreeNode$PostorderEnumeration();
	void init$(::javax::swing::tree::DefaultMutableTreeNode* this$0, ::javax::swing::tree::TreeNode* rootNode);
	virtual bool hasMoreElements() override;
	virtual $Object* nextElement() override;
	::javax::swing::tree::DefaultMutableTreeNode* this$0 = nullptr;
	::javax::swing::tree::TreeNode* root = nullptr;
	::java::util::Enumeration* children = nullptr;
	::java::util::Enumeration* subtree = nullptr;
};

		} // tree
	} // swing
} // javax

#endif // _javax_swing_tree_DefaultMutableTreeNode$PostorderEnumeration_h_