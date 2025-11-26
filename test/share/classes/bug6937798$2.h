#ifndef _bug6937798$2_h_
#define _bug6937798$2_h_
//$ class bug6937798$2
//$ extends javax.swing.table.AbstractTableModel

#include <java/lang/Array.h>
#include <javax/swing/table/AbstractTableModel.h>

class bug6937798;

class bug6937798$2 : public ::javax::swing::table::AbstractTableModel {
	$class(bug6937798$2, $NO_CLASS_INIT, ::javax::swing::table::AbstractTableModel)
public:
	bug6937798$2();
	void init$(::bug6937798* this$0, $StringArray* val$headers, $Array<::java::lang::Object, 2>* val$data);
	virtual $Class* getColumnClass(int32_t col) override;
	virtual int32_t getColumnCount() override;
	virtual $String* getColumnName(int32_t column) override;
	virtual int32_t getRowCount() override;
	virtual $Object* getValueAt(int32_t row, int32_t col) override;
	virtual bool isCellEditable(int32_t row, int32_t col) override;
	virtual void setValueAt(Object$* aValue, int32_t row, int32_t column) override;
	::bug6937798* this$0 = nullptr;
	$Array<::java::lang::Object, 2>* val$data = nullptr;
	$StringArray* val$headers = nullptr;
};

#endif // _bug6937798$2_h_