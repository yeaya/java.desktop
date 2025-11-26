#ifndef _DefaultRowSorterIOOBEtest$1_h_
#define _DefaultRowSorterIOOBEtest$1_h_
//$ class DefaultRowSorterIOOBEtest$1
//$ extends javax.swing.table.AbstractTableModel

#include <javax/swing/table/AbstractTableModel.h>

class DefaultRowSorterIOOBEtest$1 : public ::javax::swing::table::AbstractTableModel {
	$class(DefaultRowSorterIOOBEtest$1, $NO_CLASS_INIT, ::javax::swing::table::AbstractTableModel)
public:
	DefaultRowSorterIOOBEtest$1();
	void init$();
	virtual int32_t getColumnCount() override;
	virtual int32_t getRowCount() override;
	virtual $Object* getValueAt(int32_t rowIndex, int32_t columnIndex) override;
};

#endif // _DefaultRowSorterIOOBEtest$1_h_