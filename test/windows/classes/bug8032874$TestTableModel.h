#ifndef _bug8032874$TestTableModel_h_
#define _bug8032874$TestTableModel_h_
//$ class bug8032874$TestTableModel
//$ extends javax.swing.table.AbstractTableModel

#include <javax/swing/table/AbstractTableModel.h>

namespace java {
	namespace util {
		class List;
	}
}

class bug8032874$TestTableModel : public ::javax::swing::table::AbstractTableModel {
	$class(bug8032874$TestTableModel, $NO_CLASS_INIT, ::javax::swing::table::AbstractTableModel)
public:
	bug8032874$TestTableModel();
	void init$();
	virtual int32_t getColumnCount() override;
	virtual int32_t getRowCount() override;
	virtual $Object* getValueAt(int32_t rowIndex, int32_t columnIndex) override;
	virtual void remove(int32_t row);
	::java::util::List* data = nullptr;
};

#endif // _bug8032874$TestTableModel_h_