#ifndef _javax_swing_table_TableColumn$1_h_
#define _javax_swing_table_TableColumn$1_h_
//$ class javax.swing.table.TableColumn$1
//$ extends javax.swing.table.DefaultTableCellRenderer

#include <javax/swing/table/DefaultTableCellRenderer.h>

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
			class TableColumn;
		}
	}
}

namespace javax {
	namespace swing {
		namespace table {

class TableColumn$1 : public ::javax::swing::table::DefaultTableCellRenderer {
	$class(TableColumn$1, $NO_CLASS_INIT, ::javax::swing::table::DefaultTableCellRenderer)
public:
	TableColumn$1();
	using ::javax::swing::table::DefaultTableCellRenderer::firePropertyChange;
	using ::javax::swing::table::DefaultTableCellRenderer::contains;
	using ::javax::swing::table::DefaultTableCellRenderer::enable;
	using ::javax::swing::table::DefaultTableCellRenderer::getBounds;
	using ::javax::swing::table::DefaultTableCellRenderer::getSize;
	using ::javax::swing::table::DefaultTableCellRenderer::getLocation;
	using ::javax::swing::table::DefaultTableCellRenderer::add;
	using ::javax::swing::table::DefaultTableCellRenderer::getMousePosition;
	void init$(::javax::swing::table::TableColumn* this$0);
	virtual ::java::awt::Component* getTableCellRendererComponent(::javax::swing::JTable* table, Object$* value, bool isSelected, bool hasFocus, int32_t row, int32_t column) override;
	using ::javax::swing::table::DefaultTableCellRenderer::repaint;
	using ::javax::swing::table::DefaultTableCellRenderer::setUI;
	using ::javax::swing::table::DefaultTableCellRenderer::requestFocus;
	using ::javax::swing::table::DefaultTableCellRenderer::requestFocusInWindow;
	using ::javax::swing::table::DefaultTableCellRenderer::remove;
	using ::javax::swing::table::DefaultTableCellRenderer::list;
	::javax::swing::table::TableColumn* this$0 = nullptr;
};

		} // table
	} // swing
} // javax

#endif // _javax_swing_table_TableColumn$1_h_