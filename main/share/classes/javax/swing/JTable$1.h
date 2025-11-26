#ifndef _javax_swing_JTable$1_h_
#define _javax_swing_JTable$1_h_
//$ class javax.swing.JTable$1
//$ extends javax.swing.table.AbstractTableModel

#include <java/lang/Array.h>
#include <javax/swing/table/AbstractTableModel.h>

namespace javax {
	namespace swing {

class JTable$1 : public ::javax::swing::table::AbstractTableModel {
	$class(JTable$1, $NO_CLASS_INIT, ::javax::swing::table::AbstractTableModel)
public:
	JTable$1();
	void init$($ObjectArray* val$columnNames, $Array<::java::lang::Object, 2>* val$rowData);
	virtual int32_t getColumnCount() override;
	virtual $String* getColumnName(int32_t column) override;
	virtual int32_t getRowCount() override;
	virtual $Object* getValueAt(int32_t row, int32_t col) override;
	virtual bool isCellEditable(int32_t row, int32_t column) override;
	virtual void setValueAt(Object$* value, int32_t row, int32_t col) override;
	$Array<::java::lang::Object, 2>* val$rowData = nullptr;
	$ObjectArray* val$columnNames = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_JTable$1_h_