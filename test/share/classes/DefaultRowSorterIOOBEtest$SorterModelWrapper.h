#ifndef _DefaultRowSorterIOOBEtest$SorterModelWrapper_h_
#define _DefaultRowSorterIOOBEtest$SorterModelWrapper_h_
//$ class DefaultRowSorterIOOBEtest$SorterModelWrapper
//$ extends javax.swing.DefaultRowSorter$ModelWrapper

#include <javax/swing/DefaultRowSorter$ModelWrapper.h>

class $export DefaultRowSorterIOOBEtest$SorterModelWrapper : public ::javax::swing::DefaultRowSorter$ModelWrapper {
	$class(DefaultRowSorterIOOBEtest$SorterModelWrapper, $NO_CLASS_INIT, ::javax::swing::DefaultRowSorter$ModelWrapper)
public:
	DefaultRowSorterIOOBEtest$SorterModelWrapper();
	void init$();
	virtual int32_t getColumnCount() override;
	virtual $Object* getIdentifier(int32_t row) override;
	virtual $Object* getModel() override;
	virtual int32_t getRowCount() override;
	virtual $Object* getValueAt(int32_t row, int32_t column) override;
};

#endif // _DefaultRowSorterIOOBEtest$SorterModelWrapper_h_