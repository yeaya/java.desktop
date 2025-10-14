#ifndef _javax_swing_tree_DefaultMutableTreeNode$BreadthFirstEnumeration$Queue_h_
#define _javax_swing_tree_DefaultMutableTreeNode$BreadthFirstEnumeration$Queue_h_
//$ class javax.swing.tree.DefaultMutableTreeNode$BreadthFirstEnumeration$Queue
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace swing {
		namespace tree {
			class DefaultMutableTreeNode$BreadthFirstEnumeration;
			class DefaultMutableTreeNode$BreadthFirstEnumeration$Queue$QNode;
		}
	}
}

namespace javax {
	namespace swing {
		namespace tree {

class $export DefaultMutableTreeNode$BreadthFirstEnumeration$Queue : public ::java::lang::Object {
	$class(DefaultMutableTreeNode$BreadthFirstEnumeration$Queue, $NO_CLASS_INIT, ::java::lang::Object)
public:
	DefaultMutableTreeNode$BreadthFirstEnumeration$Queue();
	void init$(::javax::swing::tree::DefaultMutableTreeNode$BreadthFirstEnumeration* this$1);
	$Object* dequeue();
	void enqueue(Object$* anObject);
	$Object* firstObject();
	bool isEmpty();
	::javax::swing::tree::DefaultMutableTreeNode$BreadthFirstEnumeration* this$1 = nullptr;
	::javax::swing::tree::DefaultMutableTreeNode$BreadthFirstEnumeration$Queue$QNode* head = nullptr;
	::javax::swing::tree::DefaultMutableTreeNode$BreadthFirstEnumeration$Queue$QNode* tail = nullptr;
};

		} // tree
	} // swing
} // javax

#endif // _javax_swing_tree_DefaultMutableTreeNode$BreadthFirstEnumeration$Queue_h_