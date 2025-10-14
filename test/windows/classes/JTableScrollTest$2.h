#ifndef _JTableScrollTest$2_h_
#define _JTableScrollTest$2_h_
//$ class JTableScrollTest$2
//$ extends javax.swing.table.AbstractTableModel

#include <java/lang/Array.h>
#include <javax/swing/table/AbstractTableModel.h>

class JTableScrollTest$2 : public ::javax::swing::table::AbstractTableModel {
	$class(JTableScrollTest$2, $NO_CLASS_INIT, ::javax::swing::table::AbstractTableModel)
public:
	JTableScrollTest$2();
	void init$($StringArray* val$names, $Array<::java::lang::Object, 2>* val$data);
	virtual $Class* getColumnClass(int32_t c) override;
	virtual int32_t getColumnCount() override;
	virtual $String* getColumnName(int32_t column) override;
	virtual int32_t getRowCount() override;
	virtual $Object* getValueAt(int32_t row, int32_t col) override;
	virtual bool isCellEditable(int32_t row, int32_t col) override;
	virtual void setValueAt(Object$* aValue, int32_t row, int32_t column) override;
	$Array<::java::lang::Object, 2>* val$data = nullptr;
	$StringArray* val$names = nullptr;
};

#endif // _JTableScrollTest$2_h_