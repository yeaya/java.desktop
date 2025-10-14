#ifndef _javax_swing_tree_TreeCellEditor_h_
#define _javax_swing_tree_TreeCellEditor_h_
//$ interface javax.swing.tree.TreeCellEditor
//$ extends javax.swing.CellEditor

#include <javax/swing/CellEditor.h>

namespace java {
	namespace awt {
		class Component;
	}
}
namespace javax {
	namespace swing {
		class JTree;
	}
}

namespace javax {
	namespace swing {
		namespace tree {

class $export TreeCellEditor : public ::javax::swing::CellEditor {
	$interface(TreeCellEditor, $NO_CLASS_INIT, ::javax::swing::CellEditor)
public:
	virtual ::java::awt::Component* getTreeCellEditorComponent(::javax::swing::JTree* tree, Object$* value, bool isSelected, bool expanded, bool leaf, int32_t row) {return nullptr;}
};

		} // tree
	} // swing
} // javax

#endif // _javax_swing_tree_TreeCellEditor_h_