#ifndef _javax_swing_tree_DefaultMutableTreeNode$PathBetweenNodesEnumeration_h_
#define _javax_swing_tree_DefaultMutableTreeNode$PathBetweenNodesEnumeration_h_
//$ class javax.swing.tree.DefaultMutableTreeNode$PathBetweenNodesEnumeration
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

class $export DefaultMutableTreeNode$PathBetweenNodesEnumeration : public ::java::util::Enumeration {
	$class(DefaultMutableTreeNode$PathBetweenNodesEnumeration, $NO_CLASS_INIT, ::java::util::Enumeration)
public:
	DefaultMutableTreeNode$PathBetweenNodesEnumeration();
	void init$(::javax::swing::tree::DefaultMutableTreeNode* this$0, ::javax::swing::tree::TreeNode* ancestor, ::javax::swing::tree::TreeNode* descendant);
	virtual bool hasMoreElements() override;
	virtual $Object* nextElement() override;
	::javax::swing::tree::DefaultMutableTreeNode* this$0 = nullptr;
	::java::util::Stack* stack = nullptr;
};

		} // tree
	} // swing
} // javax

#endif // _javax_swing_tree_DefaultMutableTreeNode$PathBetweenNodesEnumeration_h_