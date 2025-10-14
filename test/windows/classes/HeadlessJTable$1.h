#ifndef _HeadlessJTable$1_h_
#define _HeadlessJTable$1_h_
//$ class HeadlessJTable$1
//$ extends javax.swing.table.AbstractTableModel

#include <java/lang/Array.h>
#include <javax/swing/table/AbstractTableModel.h>

class HeadlessJTable$1 : public ::javax::swing::table::AbstractTableModel {
	$class(HeadlessJTable$1, $NO_CLASS_INIT, ::javax::swing::table::AbstractTableModel)
public:
	HeadlessJTable$1();
	void init$($Array<::java::lang::Object, 2>* val$data);
	virtual int32_t getColumnCount() override;
	virtual int32_t getRowCount() override;
	virtual $Object* getValueAt(int32_t row, int32_t col) override;
	$Array<::java::lang::Object, 2>* val$data = nullptr;
};

#endif // _HeadlessJTable$1_h_