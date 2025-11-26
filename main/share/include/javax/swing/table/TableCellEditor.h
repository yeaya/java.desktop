#ifndef _javax_swing_table_TableCellEditor_h_
#define _javax_swing_table_TableCellEditor_h_
//$ interface javax.swing.table.TableCellEditor
//$ extends javax.swing.CellEditor

#include <javax/swing/CellEditor.h>

namespace java {
	namespace awt {
		class Component;
	}
}
namespace javax {
	namespace swing {
		class JTable;
	}
}

namespace javax {
	namespace swing {
		namespace table {

class $import TableCellEditor : public ::javax::swing::CellEditor {
	$interface(TableCellEditor, $NO_CLASS_INIT, ::javax::swing::CellEditor)
public:
	virtual ::java::awt::Component* getTableCellEditorComponent(::javax::swing::JTable* table, Object$* value, bool isSelected, int32_t row, int32_t column) {return nullptr;}
};

		} // table
	} // swing
} // javax

#endif // _javax_swing_table_TableCellEditor_h_