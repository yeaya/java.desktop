#ifndef _com_apple_laf_AquaFileChooserUI$FileRenderer_h_
#define _com_apple_laf_AquaFileChooserUI$FileRenderer_h_
//$ class com.apple.laf.AquaFileChooserUI$FileRenderer
//$ extends com.apple.laf.AquaFileChooserUI$MacFCTableCellRenderer

#include <com/apple/laf/AquaFileChooserUI$MacFCTableCellRenderer.h>

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
	}
}
namespace javax {
	namespace swing {
		class JTable;
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaFileChooserUI$FileRenderer : public ::com::apple::laf::AquaFileChooserUI$MacFCTableCellRenderer {
	$class(AquaFileChooserUI$FileRenderer, $NO_CLASS_INIT, ::com::apple::laf::AquaFileChooserUI$MacFCTableCellRenderer)
public:
	AquaFileChooserUI$FileRenderer();
	using ::com::apple::laf::AquaFileChooserUI$MacFCTableCellRenderer::firePropertyChange;
	using ::com::apple::laf::AquaFileChooserUI$MacFCTableCellRenderer::contains;
	using ::com::apple::laf::AquaFileChooserUI$MacFCTableCellRenderer::enable;
	using ::com::apple::laf::AquaFileChooserUI$MacFCTableCellRenderer::getBounds;
	using ::com::apple::laf::AquaFileChooserUI$MacFCTableCellRenderer::getSize;
	using ::com::apple::laf::AquaFileChooserUI$MacFCTableCellRenderer::getLocation;
	using ::com::apple::laf::AquaFileChooserUI$MacFCTableCellRenderer::add;
	using ::com::apple::laf::AquaFileChooserUI$MacFCTableCellRenderer::getMousePosition;
	void init$(::com::apple::laf::AquaFileChooserUI* this$0, ::java::awt::Font* f);
	virtual ::java::awt::Component* getTableCellRendererComponent(::javax::swing::JTable* list, Object$* value, bool isSelected, bool cellHasFocus, int32_t index, int32_t col) override;
	using ::com::apple::laf::AquaFileChooserUI$MacFCTableCellRenderer::repaint;
	using ::com::apple::laf::AquaFileChooserUI$MacFCTableCellRenderer::setUI;
	using ::com::apple::laf::AquaFileChooserUI$MacFCTableCellRenderer::requestFocus;
	using ::com::apple::laf::AquaFileChooserUI$MacFCTableCellRenderer::requestFocusInWindow;
	using ::com::apple::laf::AquaFileChooserUI$MacFCTableCellRenderer::remove;
	using ::com::apple::laf::AquaFileChooserUI$MacFCTableCellRenderer::list;
	::com::apple::laf::AquaFileChooserUI* this$0 = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaFileChooserUI$FileRenderer_h_