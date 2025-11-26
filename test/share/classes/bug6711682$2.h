#ifndef _bug6711682$2_h_
#define _bug6711682$2_h_
//$ class bug6711682$2
//$ extends javax.swing.table.TableCellEditor

#include <javax/swing/table/TableCellEditor.h>

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
		class JTable;
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class CellEditorListener;
		}
	}
}

class bug6711682$2 : public ::javax::swing::table::TableCellEditor {
	$class(bug6711682$2, $NO_CLASS_INIT, ::javax::swing::table::TableCellEditor)
public:
	bug6711682$2();
	void init$();
	virtual void addCellEditorListener(::javax::swing::event::CellEditorListener* l) override;
	virtual void cancelCellEditing() override;
	virtual $Object* getCellEditorValue() override;
	virtual ::java::awt::Component* getTableCellEditorComponent(::javax::swing::JTable* table, Object$* value, bool isSelected, int32_t row, int32_t column) override;
	virtual bool isCellEditable(::java::util::EventObject* anEvent) override;
	virtual void removeCellEditorListener(::javax::swing::event::CellEditorListener* l) override;
	virtual bool shouldSelectCell(::java::util::EventObject* anEvent) override;
	virtual bool stopCellEditing() override;
	int32_t editedRow = 0;
};

#endif // _bug6711682$2_h_