#ifndef _bug7068740$1_h_
#define _bug7068740$1_h_
//$ class bug7068740$1
//$ extends javax.swing.table.DefaultTableModel

#include <javax/swing/table/DefaultTableModel.h>

class bug7068740;

class bug7068740$1 : public ::javax::swing::table::DefaultTableModel {
	$class(bug7068740$1, $NO_CLASS_INIT, ::javax::swing::table::DefaultTableModel)
public:
	bug7068740$1();
	void init$(::bug7068740* this$0);
	virtual int32_t getColumnCount() override;
	virtual int32_t getRowCount() override;
	virtual $Object* getValueAt(int32_t row, int32_t column) override;
	::bug7068740* this$0 = nullptr;
};

#endif // _bug7068740$1_h_