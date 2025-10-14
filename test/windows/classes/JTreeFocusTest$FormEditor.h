#ifndef _JTreeFocusTest$FormEditor_h_
#define _JTreeFocusTest$FormEditor_h_
//$ class JTreeFocusTest$FormEditor
//$ extends javax.swing.tree.DefaultTreeCellEditor

#include <javax/swing/tree/DefaultTreeCellEditor.h>

class JTreeFocusTest;
namespace java {
	namespace awt {
		class Component;
	}
}
namespace java {
	namespace util {
		class EventObject;
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
			class DefaultTreeCellRenderer;
		}
	}
}

class $export JTreeFocusTest$FormEditor : public ::javax::swing::tree::DefaultTreeCellEditor {
	$class(JTreeFocusTest$FormEditor, $NO_CLASS_INIT, ::javax::swing::tree::DefaultTreeCellEditor)
public:
	JTreeFocusTest$FormEditor();
	void init$(::JTreeFocusTest* this$0, ::javax::swing::JTree* tree, ::javax::swing::tree::DefaultTreeCellRenderer* renderer);
	virtual ::java::awt::Component* getTreeCellEditorComponent(::javax::swing::JTree* tree, Object$* value, bool sel, bool expanded, bool leaf, int32_t row) override;
	virtual bool shouldSelectCell(::java::util::EventObject* anEvent) override;
	::JTreeFocusTest* this$0 = nullptr;
};

#endif // _JTreeFocusTest$FormEditor_h_