#ifndef _javax_swing_table_TableRowSorter$TableRowSorterModelWrapper_h_
#define _javax_swing_table_TableRowSorter$TableRowSorterModelWrapper_h_
//$ class javax.swing.table.TableRowSorter$TableRowSorterModelWrapper
//$ extends javax.swing.DefaultRowSorter$ModelWrapper

#include <javax/swing/DefaultRowSorter$ModelWrapper.h>

namespace javax {
	namespace swing {
		namespace table {
			class TableRowSorter;
		}
	}
}

namespace javax {
	namespace swing {
		namespace table {

class TableRowSorter$TableRowSorterModelWrapper : public ::javax::swing::DefaultRowSorter$ModelWrapper {
	$class(TableRowSorter$TableRowSorterModelWrapper, $NO_CLASS_INIT, ::javax::swing::DefaultRowSorter$ModelWrapper)
public:
	TableRowSorter$TableRowSorterModelWrapper();
	void init$(::javax::swing::table::TableRowSorter* this$0);
	virtual int32_t getColumnCount() override;
	virtual $Object* getIdentifier(int32_t index) override;
	virtual $Object* getModel() override;
	virtual int32_t getRowCount() override;
	virtual $String* getStringValueAt(int32_t row, int32_t column) override;
	virtual $Object* getValueAt(int32_t row, int32_t column) override;
	::javax::swing::table::TableRowSorter* this$0 = nullptr;
};

		} // table
	} // swing
} // javax

#endif // _javax_swing_table_TableRowSorter$TableRowSorterModelWrapper_h_