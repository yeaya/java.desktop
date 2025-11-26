#ifndef _javax_swing_tree_DefaultMutableTreeNode$BreadthFirstEnumeration$Queue$QNode_h_
#define _javax_swing_tree_DefaultMutableTreeNode$BreadthFirstEnumeration$Queue$QNode_h_
//$ class javax.swing.tree.DefaultMutableTreeNode$BreadthFirstEnumeration$Queue$QNode
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace swing {
		namespace tree {
			class DefaultMutableTreeNode$BreadthFirstEnumeration$Queue;
		}
	}
}

namespace javax {
	namespace swing {
		namespace tree {

class $export DefaultMutableTreeNode$BreadthFirstEnumeration$Queue$QNode : public ::java::lang::Object {
	$class(DefaultMutableTreeNode$BreadthFirstEnumeration$Queue$QNode, $NO_CLASS_INIT, ::java::lang::Object)
public:
	DefaultMutableTreeNode$BreadthFirstEnumeration$Queue$QNode();
	void init$(::javax::swing::tree::DefaultMutableTreeNode$BreadthFirstEnumeration$Queue* this$2, Object$* object, ::javax::swing::tree::DefaultMutableTreeNode$BreadthFirstEnumeration$Queue$QNode* next);
	::javax::swing::tree::DefaultMutableTreeNode$BreadthFirstEnumeration$Queue* this$2 = nullptr;
	$Object* object = nullptr;
	::javax::swing::tree::DefaultMutableTreeNode$BreadthFirstEnumeration$Queue$QNode* next = nullptr;
};

		} // tree
	} // swing
} // javax

#endif // _javax_swing_tree_DefaultMutableTreeNode$BreadthFirstEnumeration$Queue$QNode_h_