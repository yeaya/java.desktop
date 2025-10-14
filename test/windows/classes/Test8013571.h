#ifndef _Test8013571_h_
#define _Test8013571_h_
//$ class Test8013571
//$ extends javax.swing.tree.DefaultTreeModel

#include <java/lang/Array.h>
#include <javax/swing/tree/DefaultTreeModel.h>

namespace javax {
	namespace swing {
		namespace tree {
			class DefaultMutableTreeNode;
		}
	}
}

class $export Test8013571 : public ::javax::swing::tree::DefaultTreeModel {
	$class(Test8013571, $NO_CLASS_INIT, ::javax::swing::tree::DefaultTreeModel)
public:
	Test8013571();
	void init$(::javax::swing::tree::DefaultMutableTreeNode* root);
	static ::javax::swing::tree::DefaultMutableTreeNode* create($String* name, $StringArray* values);
	void fireTreeChanged(Object$* source);
	static void main($StringArray* args);
};

#endif // _Test8013571_h_