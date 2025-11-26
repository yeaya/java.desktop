#ifndef _bug6894632$2_h_
#define _bug6894632$2_h_
//$ class bug6894632$2
//$ extends javax.swing.table.DefaultTableModel

#include <javax/swing/table/DefaultTableModel.h>

class bug6894632$2 : public ::javax::swing::table::DefaultTableModel {
	$class(bug6894632$2, $NO_CLASS_INIT, ::javax::swing::table::DefaultTableModel)
public:
	bug6894632$2();
	void init$(int32_t arg0, int32_t arg1);
	virtual $Object* getValueAt(int32_t row, int32_t column) override;
};

#endif // _bug6894632$2_h_