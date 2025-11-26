#ifndef _Test6888156$2_h_
#define _Test6888156$2_h_
//$ class Test6888156$2
//$ extends javax.swing.table.AbstractTableModel

#include <javax/swing/table/AbstractTableModel.h>

class Test6888156;

class Test6888156$2 : public ::javax::swing::table::AbstractTableModel {
	$class(Test6888156$2, $NO_CLASS_INIT, ::javax::swing::table::AbstractTableModel)
public:
	Test6888156$2();
	void init$(::Test6888156* this$0);
	virtual $Class* getColumnClass(int32_t columnIndex) override;
	virtual int32_t getColumnCount() override;
	virtual int32_t getRowCount() override;
	virtual $Object* getValueAt(int32_t rowIndex, int32_t columnIndex) override;
	::Test6888156* this$0 = nullptr;
};

#endif // _Test6888156$2_h_