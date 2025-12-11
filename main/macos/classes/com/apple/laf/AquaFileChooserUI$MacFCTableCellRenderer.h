#ifndef _com_apple_laf_AquaFileChooserUI$MacFCTableCellRenderer_h_
#define _com_apple_laf_AquaFileChooserUI$MacFCTableCellRenderer_h_
//$ class com.apple.laf.AquaFileChooserUI$MacFCTableCellRenderer
//$ extends javax.swing.table.DefaultTableCellRenderer

#include <javax/swing/table/DefaultTableCellRenderer.h>

namespace com {
	namespace apple {
		namespace laf {
			class AquaFileChooserUI;
		}
	}
}
namespace java {
	namespace awt {
		class Component;
		class Font;
		class FontMetrics;
		class Graphics;
		class Rectangle;
	}
}
namespace javax {
	namespace swing {
		class Icon;
		class JLabel;
		class JTable;
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaFileChooserUI$MacFCTableCellRenderer : public ::javax::swing::table::DefaultTableCellRenderer {
	$class(AquaFileChooserUI$MacFCTableCellRenderer, $NO_CLASS_INIT, ::javax::swing::table::DefaultTableCellRenderer)
public:
	AquaFileChooserUI$MacFCTableCellRenderer();
	using ::javax::swing::table::DefaultTableCellRenderer::firePropertyChange;
	using ::javax::swing::table::DefaultTableCellRenderer::contains;
	using ::javax::swing::table::DefaultTableCellRenderer::enable;
	using ::javax::swing::table::DefaultTableCellRenderer::getBounds;
	using ::javax::swing::table::DefaultTableCellRenderer::getSize;
	using ::javax::swing::table::DefaultTableCellRenderer::getLocation;
	using ::javax::swing::table::DefaultTableCellRenderer::add;
	using ::javax::swing::table::DefaultTableCellRenderer::getMousePosition;
	void init$(::com::apple::laf::AquaFileChooserUI* this$0, ::java::awt::Font* f);
	virtual ::java::awt::Component* getTableCellRendererComponent(::javax::swing::JTable* list, Object$* value, bool isSelected, bool cellHasFocus, int32_t index, int32_t col) override;
	virtual bool isSelected();
	virtual $String* layoutCL(::javax::swing::JLabel* label, ::java::awt::FontMetrics* fontMetrics, $String* text, ::javax::swing::Icon* icon, ::java::awt::Rectangle* viewR, ::java::awt::Rectangle* iconR, ::java::awt::Rectangle* textR);
	using ::javax::swing::table::DefaultTableCellRenderer::list;
	virtual void paintComponent(::java::awt::Graphics* g) override;
	using ::javax::swing::table::DefaultTableCellRenderer::repaint;
	using ::javax::swing::table::DefaultTableCellRenderer::setUI;
	using ::javax::swing::table::DefaultTableCellRenderer::requestFocus;
	using ::javax::swing::table::DefaultTableCellRenderer::requestFocusInWindow;
	using ::javax::swing::table::DefaultTableCellRenderer::remove;
	::com::apple::laf::AquaFileChooserUI* this$0 = nullptr;
	bool fIsSelected = false;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaFileChooserUI$MacFCTableCellRenderer_h_