#ifndef _bug6777378$1$1_h_
#define _bug6777378$1$1_h_
//$ class bug6777378$1$1
//$ extends javax.swing.table.AbstractTableModel

#include <javax/swing/table/AbstractTableModel.h>

class bug6777378$1;

class bug6777378$1$1 : public ::javax::swing::table::AbstractTableModel {
	$class(bug6777378$1$1, $NO_CLASS_INIT, ::javax::swing::table::AbstractTableModel)
public:
	bug6777378$1$1();
	void init$(::bug6777378$1* this$0);
	virtual int32_t getColumnCount() override;
	virtual int32_t getRowCount() override;
	virtual $Object* getValueAt(int32_t rowIndex, int32_t columnIndex) override;
	::bug6777378$1* this$0 = nullptr;
};

#endif // _bug6777378$1$1_h_