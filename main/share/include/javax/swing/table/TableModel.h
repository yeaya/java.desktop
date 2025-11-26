#ifndef _javax_swing_table_TableModel_h_
#define _javax_swing_table_TableModel_h_
//$ interface javax.swing.table.TableModel
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace swing {
		namespace event {
			class TableModelListener;
		}
	}
}

namespace javax {
	namespace swing {
		namespace table {

class $import TableModel : public ::java::lang::Object {
	$interface(TableModel, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void addTableModelListener(::javax::swing::event::TableModelListener* l) {}
	virtual $Class* getColumnClass(int32_t columnIndex) {return nullptr;}
	virtual int32_t getColumnCount() {return 0;}
	virtual $String* getColumnName(int32_t columnIndex) {return nullptr;}
	virtual int32_t getRowCount() {return 0;}
	virtual $Object* getValueAt(int32_t rowIndex, int32_t columnIndex) {return nullptr;}
	virtual bool isCellEditable(int32_t rowIndex, int32_t columnIndex) {return false;}
	virtual void removeTableModelListener(::javax::swing::event::TableModelListener* l) {}
	virtual void setValueAt(Object$* aValue, int32_t rowIndex, int32_t columnIndex) {}
};

		} // table
	} // swing
} // javax

#endif // _javax_swing_table_TableModel_h_