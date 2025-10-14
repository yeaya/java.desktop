#ifndef _TestJTableCellEditor$1_h_
#define _TestJTableCellEditor$1_h_
//$ class TestJTableCellEditor$1
//$ extends javax.swing.table.AbstractTableModel

#include <javax/swing/table/AbstractTableModel.h>

class TestJTableCellEditor$1 : public ::javax::swing::table::AbstractTableModel {
	$class(TestJTableCellEditor$1, $NO_CLASS_INIT, ::javax::swing::table::AbstractTableModel)
public:
	TestJTableCellEditor$1();
	void init$($Class* val$cls);
	virtual $Class* getColumnClass(int32_t c) override;
	virtual int32_t getColumnCount() override;
	virtual int32_t getRowCount() override;
	virtual $Object* getValueAt(int32_t r, int32_t c) override;
	$Class* val$cls = nullptr;
};

#endif // _TestJTableCellEditor$1_h_