#ifndef _sun_swing_FilePane$DetailsTableCellEditor_h_
#define _sun_swing_FilePane$DetailsTableCellEditor_h_
//$ class sun.swing.FilePane$DetailsTableCellEditor
//$ extends javax.swing.DefaultCellEditor

#include <javax/swing/DefaultCellEditor.h>

namespace java {
	namespace awt {
		class Component;
	}
}
namespace javax {
	namespace swing {
		class JTable;
		class JTextField;
	}
}
namespace sun {
	namespace swing {
		class FilePane;
	}
}

namespace sun {
	namespace swing {

class FilePane$DetailsTableCellEditor : public ::javax::swing::DefaultCellEditor {
	$class(FilePane$DetailsTableCellEditor, $NO_CLASS_INIT, ::javax::swing::DefaultCellEditor)
public:
	FilePane$DetailsTableCellEditor();
	void init$(::sun::swing::FilePane* this$0, ::javax::swing::JTextField* tf);
	virtual ::java::awt::Component* getTableCellEditorComponent(::javax::swing::JTable* table, Object$* value, bool isSelected, int32_t row, int32_t column) override;
	::sun::swing::FilePane* this$0 = nullptr;
	::javax::swing::JTextField* tf = nullptr;
};

	} // swing
} // sun

#endif // _sun_swing_FilePane$DetailsTableCellEditor_h_