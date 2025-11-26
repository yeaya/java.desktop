#ifndef _javax_swing_table_DefaultTableModel_h_
#define _javax_swing_table_DefaultTableModel_h_
//$ class javax.swing.table.DefaultTableModel
//$ extends javax.swing.table.AbstractTableModel

#include <java/lang/Array.h>
#include <javax/swing/table/AbstractTableModel.h>

namespace java {
	namespace util {
		class Vector;
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class TableModelEvent;
		}
	}
}

namespace javax {
	namespace swing {
		namespace table {

class $import DefaultTableModel : public ::javax::swing::table::AbstractTableModel {
	$class(DefaultTableModel, $NO_CLASS_INIT, ::javax::swing::table::AbstractTableModel)
public:
	DefaultTableModel();
	void init$();
	void init$(int32_t rowCount, int32_t columnCount);
	void init$(::java::util::Vector* columnNames, int32_t rowCount);
	void init$($ObjectArray* columnNames, int32_t rowCount);
	void init$(::java::util::Vector* data, ::java::util::Vector* columnNames);
	void init$($Array<::java::lang::Object, 2>* data, $ObjectArray* columnNames);
	virtual void addColumn(Object$* columnName);
	virtual void addColumn(Object$* columnName, ::java::util::Vector* columnData);
	virtual void addColumn(Object$* columnName, $ObjectArray* columnData);
	virtual void addRow(::java::util::Vector* rowData);
	virtual void addRow($ObjectArray* rowData);
	static ::java::util::Vector* convertToVector($ObjectArray* anArray);
	static ::java::util::Vector* convertToVector($Array<::java::lang::Object, 2>* anArray);
	static int32_t gcd(int32_t i, int32_t j);
	virtual int32_t getColumnCount() override;
	virtual $String* getColumnName(int32_t column) override;
	virtual ::java::util::Vector* getDataVector();
	virtual int32_t getRowCount() override;
	virtual $Object* getValueAt(int32_t row, int32_t column) override;
	virtual void insertRow(int32_t row, ::java::util::Vector* rowData);
	virtual void insertRow(int32_t row, $ObjectArray* rowData);
	virtual bool isCellEditable(int32_t row, int32_t column) override;
	void justifyRows(int32_t from, int32_t to);
	virtual void moveRow(int32_t start, int32_t end, int32_t to);
	virtual void newDataAvailable(::javax::swing::event::TableModelEvent* event);
	virtual void newRowsAdded(::javax::swing::event::TableModelEvent* e);
	static ::java::util::Vector* newVector(int32_t size);
	static ::java::util::Vector* nonNullVector(::java::util::Vector* v);
	virtual void removeRow(int32_t row);
	static void rotate(::java::util::Vector* v, int32_t a, int32_t b, int32_t shift);
	virtual void rowsRemoved(::javax::swing::event::TableModelEvent* event);
	virtual void setColumnCount(int32_t columnCount);
	virtual void setColumnIdentifiers(::java::util::Vector* columnIdentifiers);
	virtual void setColumnIdentifiers($ObjectArray* newIdentifiers);
	virtual void setDataVector(::java::util::Vector* dataVector, ::java::util::Vector* columnIdentifiers);
	virtual void setDataVector($Array<::java::lang::Object, 2>* dataVector, $ObjectArray* columnIdentifiers);
	virtual void setNumRows(int32_t rowCount);
	virtual void setRowCount(int32_t rowCount);
	virtual void setValueAt(Object$* aValue, int32_t row, int32_t column) override;
	::java::util::Vector* dataVector = nullptr;
	::java::util::Vector* columnIdentifiers = nullptr;
};

		} // table
	} // swing
} // javax

#endif // _javax_swing_table_DefaultTableModel_h_