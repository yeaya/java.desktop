#ifndef _sun_swing_table_DefaultTableCellHeaderRenderer_h_
#define _sun_swing_table_DefaultTableCellHeaderRenderer_h_
//$ class sun.swing.table.DefaultTableCellHeaderRenderer
//$ extends javax.swing.table.DefaultTableCellRenderer
//$ implements javax.swing.plaf.UIResource

#include <javax/swing/plaf/UIResource.h>
#include <javax/swing/table/DefaultTableCellRenderer.h>

namespace java {
	namespace awt {
		class Component;
		class Graphics;
		class Point;
	}
}
namespace javax {
	namespace swing {
		class Icon;
		class JTable;
		class SortOrder;
	}
}
namespace sun {
	namespace swing {
		namespace table {
			class DefaultTableCellHeaderRenderer$EmptyIcon;
		}
	}
}

namespace sun {
	namespace swing {
		namespace table {

class $export DefaultTableCellHeaderRenderer : public ::javax::swing::table::DefaultTableCellRenderer, public ::javax::swing::plaf::UIResource {
	$class(DefaultTableCellHeaderRenderer, $NO_CLASS_INIT, ::javax::swing::table::DefaultTableCellRenderer, ::javax::swing::plaf::UIResource)
public:
	DefaultTableCellHeaderRenderer();
	using ::javax::swing::table::DefaultTableCellRenderer::firePropertyChange;
	using ::javax::swing::table::DefaultTableCellRenderer::contains;
	using ::javax::swing::table::DefaultTableCellRenderer::enable;
	using ::javax::swing::table::DefaultTableCellRenderer::getBounds;
	using ::javax::swing::table::DefaultTableCellRenderer::getSize;
	using ::javax::swing::table::DefaultTableCellRenderer::getLocation;
	using ::javax::swing::table::DefaultTableCellRenderer::add;
	using ::javax::swing::table::DefaultTableCellRenderer::getMousePosition;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	::java::awt::Point* computeIconPosition(::java::awt::Graphics* g);
	static ::javax::swing::SortOrder* getColumnSortOrder(::javax::swing::JTable* table, int32_t column);
	virtual ::java::awt::Component* getTableCellRendererComponent(::javax::swing::JTable* table, Object$* value, bool isSelected, bool hasFocus, int32_t row, int32_t column) override;
	using ::javax::swing::table::DefaultTableCellRenderer::list;
	virtual void paintComponent(::java::awt::Graphics* g) override;
	using ::javax::swing::table::DefaultTableCellRenderer::repaint;
	using ::javax::swing::table::DefaultTableCellRenderer::requestFocus;
	using ::javax::swing::table::DefaultTableCellRenderer::requestFocusInWindow;
	using ::javax::swing::table::DefaultTableCellRenderer::remove;
	virtual void setHorizontalTextPosition(int32_t textPosition) override;
	using ::javax::swing::table::DefaultTableCellRenderer::setUI;
	virtual $String* toString() override;
	bool horizontalTextPositionSet = false;
	::javax::swing::Icon* sortArrow = nullptr;
	::sun::swing::table::DefaultTableCellHeaderRenderer$EmptyIcon* emptyIcon = nullptr;
};

		} // table
	} // swing
} // sun

#endif // _sun_swing_table_DefaultTableCellHeaderRenderer_h_