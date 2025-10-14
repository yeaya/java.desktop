#ifndef _javax_swing_tree_DefaultMutableTreeNode$BreadthFirstEnumeration_h_
#define _javax_swing_tree_DefaultMutableTreeNode$BreadthFirstEnumeration_h_
//$ class javax.swing.tree.DefaultMutableTreeNode$BreadthFirstEnumeration
//$ extends java.util.Enumeration

#include <java/util/Enumeration.h>

namespace javax {
	namespace swing {
		namespace tree {
			class DefaultMutableTreeNode;
			class DefaultMutableTreeNode$BreadthFirstEnumeration$Queue;
			class TreeNode;
		}
	}
}

namespace javax {
	namespace swing {
		namespace tree {

class $export DefaultMutableTreeNode$BreadthFirstEnumeration : public ::java::util::Enumeration {
	$class(DefaultMutableTreeNode$BreadthFirstEnumeration, $NO_CLASS_INIT, ::java::util::Enumeration)
public:
	DefaultMutableTreeNode$BreadthFirstEnumeration();
	void init$(::javax::swing::tree::DefaultMutableTreeNode* this$0, ::javax::swing::tree::TreeNode* rootNode);
	virtual bool hasMoreElements() override;
	virtual $Object* nextElement() override;
	::javax::swing::tree::DefaultMutableTreeNode* this$0 = nullptr;
	::javax::swing::tree::DefaultMutableTreeNode$BreadthFirstEnumeration$Queue* queue = nullptr;
};

		} // tree
	} // swing
} // javax

#endif // _javax_swing_tree_DefaultMutableTreeNode$BreadthFirstEnumeration_h_