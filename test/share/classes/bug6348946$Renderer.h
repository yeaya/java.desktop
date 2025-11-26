#ifndef _bug6348946$Renderer_h_
#define _bug6348946$Renderer_h_
//$ class bug6348946$Renderer
//$ extends javax.swing.table.TableCellRenderer

#include <javax/swing/table/TableCellRenderer.h>

namespace java {
	namespace awt {
		class Component;
	}
}
namespace javax {
	namespace swing {
		class JSlider;
		class JTable;
	}
}

class bug6348946$Renderer : public ::javax::swing::table::TableCellRenderer {
	$class(bug6348946$Renderer, $NO_CLASS_INIT, ::javax::swing::table::TableCellRenderer)
public:
	bug6348946$Renderer();
	void init$();
	virtual ::java::awt::Component* getTableCellRendererComponent(::javax::swing::JTable* table, Object$* value, bool isSelected, bool hasFocus, int32_t row, int32_t col) override;
	::javax::swing::JSlider* slider = nullptr;
};

#endif // _bug6348946$Renderer_h_