#ifndef _bug6711682$3_h_
#define _bug6711682$3_h_
//$ class bug6711682$3
//$ extends javax.swing.table.TableCellRenderer

#include <javax/swing/table/TableCellRenderer.h>

namespace java {
	namespace awt {
		class Component;
	}
}
namespace javax {
	namespace swing {
		class JTable;
	}
}

class bug6711682$3 : public ::javax::swing::table::TableCellRenderer {
	$class(bug6711682$3, $NO_CLASS_INIT, ::javax::swing::table::TableCellRenderer)
public:
	bug6711682$3();
	void init$();
	virtual ::java::awt::Component* getTableCellRendererComponent(::javax::swing::JTable* table, Object$* value, bool isSelected, bool hasFocus, int32_t row, int32_t column) override;
};

#endif // _bug6711682$3_h_