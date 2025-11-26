#ifndef _javax_swing_tree_DefaultTreeCellEditor$1_h_
#define _javax_swing_tree_DefaultTreeCellEditor$1_h_
//$ class javax.swing.tree.DefaultTreeCellEditor$1
//$ extends javax.swing.DefaultCellEditor

#include <javax/swing/DefaultCellEditor.h>

namespace java {
	namespace util {
		class EventObject;
	}
}
namespace javax {
	namespace swing {
		class JTextField;
	}
}
namespace javax {
	namespace swing {
		namespace tree {
			class DefaultTreeCellEditor;
		}
	}
}

namespace javax {
	namespace swing {
		namespace tree {

class DefaultTreeCellEditor$1 : public ::javax::swing::DefaultCellEditor {
	$class(DefaultTreeCellEditor$1, $NO_CLASS_INIT, ::javax::swing::DefaultCellEditor)
public:
	DefaultTreeCellEditor$1();
	void init$(::javax::swing::tree::DefaultTreeCellEditor* this$0, ::javax::swing::JTextField* textField);
	virtual bool shouldSelectCell(::java::util::EventObject* event) override;
	::javax::swing::tree::DefaultTreeCellEditor* this$0 = nullptr;
};

		} // tree
	} // swing
} // javax

#endif // _javax_swing_tree_DefaultTreeCellEditor$1_h_