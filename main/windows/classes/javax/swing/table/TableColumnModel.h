#ifndef _javax_swing_table_TableColumnModel_h_
#define _javax_swing_table_TableColumnModel_h_
//$ interface javax.swing.table.TableColumnModel
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace util {
		class Enumeration;
	}
}
namespace javax {
	namespace swing {
		class ListSelectionModel;
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class TableColumnModelListener;
		}
	}
}
namespace javax {
	namespace swing {
		namespace table {
			class TableColumn;
		}
	}
}

namespace javax {
	namespace swing {
		namespace table {

class $export TableColumnModel : public ::java::lang::Object {
	$interface(TableColumnModel, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void addColumn(::javax::swing::table::TableColumn* aColumn) {}
	virtual void addColumnModelListener(::javax::swing::event::TableColumnModelListener* x) {}
	virtual ::javax::swing::table::TableColumn* getColumn(int32_t columnIndex) {return nullptr;}
	virtual int32_t getColumnCount() {return 0;}
	virtual int32_t getColumnIndex(Object$* columnIdentifier) {return 0;}
	virtual int32_t getColumnIndexAtX(int32_t xPosition) {return 0;}
	virtual int32_t getColumnMargin() {return 0;}
	virtual bool getColumnSelectionAllowed() {return false;}
	virtual ::java::util::Enumeration* getColumns() {return nullptr;}
	virtual int32_t getSelectedColumnCount() {return 0;}
	virtual $ints* getSelectedColumns() {return nullptr;}
	virtual ::javax::swing::ListSelectionModel* getSelectionModel() {return nullptr;}
	virtual int32_t getTotalColumnWidth() {return 0;}
	virtual void moveColumn(int32_t columnIndex, int32_t newIndex) {}
	virtual void removeColumn(::javax::swing::table::TableColumn* column) {}
	virtual void removeColumnModelListener(::javax::swing::event::TableColumnModelListener* x) {}
	virtual void setColumnMargin(int32_t newMargin) {}
	virtual void setColumnSelectionAllowed(bool flag) {}
	virtual void setSelectionModel(::javax::swing::ListSelectionModel* newModel) {}
};

		} // table
	} // swing
} // javax

#endif // _javax_swing_table_TableColumnModel_h_