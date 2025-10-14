#ifndef _javax_swing_tree_DefaultMutableTreeNode$PreorderEnumeration_h_
#define _javax_swing_tree_DefaultMutableTreeNode$PreorderEnumeration_h_
//$ class javax.swing.tree.DefaultMutableTreeNode$PreorderEnumeration
//$ extends java.util.Enumeration

#include <java/util/Enumeration.h>

namespace java {
	namespace util {
		class Stack;
	}
}
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

class DefaultMutableTreeNode$PreorderEnumeration : public ::java::util::Enumeration {
	$class(DefaultMutableTreeNode$PreorderEnumeration, $NO_CLASS_INIT, ::java::util::Enumeration)
public:
	DefaultMutableTreeNode$PreorderEnumeration();
	void init$(::javax::swing::tree::DefaultMutableTreeNode* this$0, ::javax::swing::tree::TreeNode* rootNode);
	virtual bool hasMoreElements() override;
	virtual $Object* nextElement() override;
	::javax::swing::tree::DefaultMutableTreeNode* this$0 = nullptr;
	::java::util::Stack* stack = nullptr;
};

		} // tree
	} // swing
} // javax

#endif // _javax_swing_tree_DefaultMutableTreeNode$PreorderEnumeration_h_