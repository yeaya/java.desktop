#ifndef _DrawGridLinesTest$1_h_
#define _DrawGridLinesTest$1_h_
//$ class DrawGridLinesTest$1
//$ extends javax.swing.table.AbstractTableModel

#include <javax/swing/table/AbstractTableModel.h>

class DrawGridLinesTest$1 : public ::javax::swing::table::AbstractTableModel {
	$class(DrawGridLinesTest$1, $NO_CLASS_INIT, ::javax::swing::table::AbstractTableModel)
public:
	DrawGridLinesTest$1();
	void init$();
	virtual int32_t getColumnCount() override;
	virtual int32_t getRowCount() override;
	virtual $Object* getValueAt(int32_t row, int32_t col) override;
};

#endif // _DrawGridLinesTest$1_h_