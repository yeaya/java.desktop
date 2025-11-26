#ifndef _PrintManualTest_FitWidthMultiple$1$1_h_
#define _PrintManualTest_FitWidthMultiple$1$1_h_
//$ class PrintManualTest_FitWidthMultiple$1$1
//$ extends javax.swing.table.AbstractTableModel

#include <javax/swing/table/AbstractTableModel.h>

class PrintManualTest_FitWidthMultiple$1;

class PrintManualTest_FitWidthMultiple$1$1 : public ::javax::swing::table::AbstractTableModel {
	$class(PrintManualTest_FitWidthMultiple$1$1, $NO_CLASS_INIT, ::javax::swing::table::AbstractTableModel)
public:
	PrintManualTest_FitWidthMultiple$1$1();
	void init$(::PrintManualTest_FitWidthMultiple$1* this$1);
	virtual int32_t getColumnCount() override;
	virtual int32_t getRowCount() override;
	virtual $Object* getValueAt(int32_t row, int32_t column) override;
	::PrintManualTest_FitWidthMultiple$1* this$1 = nullptr;
};

#endif // _PrintManualTest_FitWidthMultiple$1$1_h_