#ifndef _sun_swing_FilePane$DetailsTableCellRenderer_h_
#define _sun_swing_FilePane$DetailsTableCellRenderer_h_
//$ class sun.swing.FilePane$DetailsTableCellRenderer
//$ extends javax.swing.table.DefaultTableCellRenderer

#include <javax/swing/table/DefaultTableCellRenderer.h>

namespace java {
	namespace awt {
		class Component;
		class Insets;
	}
}
namespace java {
	namespace text {
		class DateFormat;
	}
}
namespace javax {
	namespace swing {
		class JFileChooser;
		class JTable;
	}
}
namespace sun {
	namespace swing {
		class FilePane;
	}
}

namespace sun {
	namespace swing {

class $import FilePane$DetailsTableCellRenderer : public ::javax::swing::table::DefaultTableCellRenderer {
	$class(FilePane$DetailsTableCellRenderer, $NO_CLASS_INIT, ::javax::swing::table::DefaultTableCellRenderer)
public:
	FilePane$DetailsTableCellRenderer();
	using ::javax::swing::table::DefaultTableCellRenderer::firePropertyChange;
	using ::javax::swing::table::DefaultTableCellRenderer::contains;
	using ::javax::swing::table::DefaultTableCellRenderer::getInsets;
	using ::javax::swing::table::DefaultTableCellRenderer::enable;
	using ::javax::swing::table::DefaultTableCellRenderer::getBounds;
	using ::javax::swing::table::DefaultTableCellRenderer::getSize;
	using ::javax::swing::table::DefaultTableCellRenderer::getLocation;
	using ::javax::swing::table::DefaultTableCellRenderer::add;
	using ::javax::swing::table::DefaultTableCellRenderer::getMousePosition;
	void init$(::sun::swing::FilePane* this$0, ::javax::swing::JFileChooser* chooser);
	virtual ::java::awt::Insets* getInsets(::java::awt::Insets* i) override;
	virtual ::java::awt::Component* getTableCellRendererComponent(::javax::swing::JTable* table, Object$* value, bool isSelected, bool hasFocus, int32_t row, int32_t column) override;
	using ::javax::swing::table::DefaultTableCellRenderer::repaint;
	using ::javax::swing::table::DefaultTableCellRenderer::requestFocus;
	using ::javax::swing::table::DefaultTableCellRenderer::requestFocusInWindow;
	using ::javax::swing::table::DefaultTableCellRenderer::remove;
	using ::javax::swing::table::DefaultTableCellRenderer::list;
	using ::javax::swing::table::DefaultTableCellRenderer::setBounds;
	virtual void setBounds(int32_t x, int32_t y, int32_t width, int32_t height) override;
	using ::javax::swing::table::DefaultTableCellRenderer::setUI;
	::sun::swing::FilePane* this$0 = nullptr;
	::javax::swing::JFileChooser* chooser = nullptr;
	::java::text::DateFormat* df = nullptr;
};

	} // swing
} // sun

#endif // _sun_swing_FilePane$DetailsTableCellRenderer_h_