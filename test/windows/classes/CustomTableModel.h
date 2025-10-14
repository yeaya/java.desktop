#ifndef _CustomTableModel_h_
#define _CustomTableModel_h_
//$ class CustomTableModel
//$ extends javax.swing.table.DefaultTableModel

#include <java/lang/Array.h>
#include <javax/swing/table/DefaultTableModel.h>

class CustomTableModel : public ::javax::swing::table::DefaultTableModel {
	$class(CustomTableModel, $NO_CLASS_INIT, ::javax::swing::table::DefaultTableModel)
public:
	CustomTableModel();
	void init$($Array<::java::lang::Object, 2>* data, $ObjectArray* columnNames);
	virtual $Class* getColumnClass(int32_t columnIndex) override;
};

#endif // _CustomTableModel_h_