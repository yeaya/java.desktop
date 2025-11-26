#ifndef _javax_swing_table_AbstractTableModel_h_
#define _javax_swing_table_AbstractTableModel_h_
//$ class javax.swing.table.AbstractTableModel
//$ extends javax.swing.table.TableModel
//$ implements java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <javax/swing/table/TableModel.h>

namespace java {
	namespace util {
		class EventListener;
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class EventListenerList;
			class TableModelEvent;
			class TableModelListener;
		}
	}
}

namespace javax {
	namespace swing {
		namespace table {

class $export AbstractTableModel : public ::javax::swing::table::TableModel, public ::java::io::Serializable {
	$class(AbstractTableModel, $NO_CLASS_INIT, ::javax::swing::table::TableModel, ::java::io::Serializable)
public:
	AbstractTableModel();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual void addTableModelListener(::javax::swing::event::TableModelListener* l) override;
	virtual int32_t findColumn($String* columnName);
	virtual void fireTableCellUpdated(int32_t row, int32_t column);
	virtual void fireTableChanged(::javax::swing::event::TableModelEvent* e);
	virtual void fireTableDataChanged();
	virtual void fireTableRowsDeleted(int32_t firstRow, int32_t lastRow);
	virtual void fireTableRowsInserted(int32_t firstRow, int32_t lastRow);
	virtual void fireTableRowsUpdated(int32_t firstRow, int32_t lastRow);
	virtual void fireTableStructureChanged();
	virtual $Class* getColumnClass(int32_t columnIndex) override;
	virtual $String* getColumnName(int32_t column) override;
	virtual $Array<::java::util::EventListener>* getListeners($Class* listenerType);
	virtual $Array<::javax::swing::event::TableModelListener>* getTableModelListeners();
	virtual bool isCellEditable(int32_t rowIndex, int32_t columnIndex) override;
	virtual void removeTableModelListener(::javax::swing::event::TableModelListener* l) override;
	virtual void setValueAt(Object$* aValue, int32_t rowIndex, int32_t columnIndex) override;
	virtual $String* toString() override;
	::javax::swing::event::EventListenerList* listenerList = nullptr;
};

		} // table
	} // swing
} // javax

#endif // _javax_swing_table_AbstractTableModel_h_