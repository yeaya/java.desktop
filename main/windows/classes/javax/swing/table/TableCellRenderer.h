#ifndef _javax_swing_table_TableCellRenderer_h_
#define _javax_swing_table_TableCellRenderer_h_
//$ interface javax.swing.table.TableCellRenderer
//$ extends java.lang.Object

#include <java/lang/Object.h>

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

namespace javax {
	namespace swing {
		namespace table {

class $export TableCellRenderer : public ::java::lang::Object {
	$interface(TableCellRenderer, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::awt::Component* getTableCellRendererComponent(::javax::swing::JTable* table, Object$* value, bool isSelected, bool hasFocus, int32_t row, int32_t column) {return nullptr;}
};

		} // table
	} // swing
} // javax

#endif // _javax_swing_table_TableCellRenderer_h_