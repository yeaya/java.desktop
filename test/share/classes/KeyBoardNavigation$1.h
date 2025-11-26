#ifndef _KeyBoardNavigation$1_h_
#define _KeyBoardNavigation$1_h_
//$ class KeyBoardNavigation$1
//$ extends javax.swing.table.AbstractTableModel

#include <java/lang/Array.h>
#include <javax/swing/table/AbstractTableModel.h>

class KeyBoardNavigation$1 : public ::javax::swing::table::AbstractTableModel {
	$class(KeyBoardNavigation$1, $NO_CLASS_INIT, ::javax::swing::table::AbstractTableModel)
public:
	KeyBoardNavigation$1();
	void init$($StringArray* val$names, $Array<::java::lang::Object, 2>* val$data);
	virtual $Class* getColumnClass(int32_t c) override;
	virtual int32_t getColumnCount() override;
	virtual $String* getColumnName(int32_t column) override;
	virtual int32_t getRowCount() override;
	virtual $Object* getValueAt(int32_t row, int32_t col) override;
	virtual bool isCellEditable(int32_t row, int32_t col) override;
	virtual void setValueAt(Object$* aValue, int32_t row, int32_t column) override;
	$Array<::java::lang::Object, 2>* val$data = nullptr;
	$StringArray* val$names = nullptr;
};

#endif // _KeyBoardNavigation$1_h_