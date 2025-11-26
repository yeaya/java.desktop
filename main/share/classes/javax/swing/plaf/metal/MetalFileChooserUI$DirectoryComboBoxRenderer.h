#ifndef _javax_swing_plaf_metal_MetalFileChooserUI$DirectoryComboBoxRenderer_h_
#define _javax_swing_plaf_metal_MetalFileChooserUI$DirectoryComboBoxRenderer_h_
//$ class javax.swing.plaf.metal.MetalFileChooserUI$DirectoryComboBoxRenderer
//$ extends javax.swing.DefaultListCellRenderer

#include <javax/swing/DefaultListCellRenderer.h>

namespace java {
	namespace awt {
		class Component;
	}
}
namespace javax {
	namespace swing {
		class JList;
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {
				class MetalFileChooserUI;
				class MetalFileChooserUI$IndentIcon;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

class $export MetalFileChooserUI$DirectoryComboBoxRenderer : public ::javax::swing::DefaultListCellRenderer {
	$class(MetalFileChooserUI$DirectoryComboBoxRenderer, $NO_CLASS_INIT, ::javax::swing::DefaultListCellRenderer)
public:
	MetalFileChooserUI$DirectoryComboBoxRenderer();
	using ::javax::swing::DefaultListCellRenderer::contains;
	using ::javax::swing::DefaultListCellRenderer::enable;
	using ::javax::swing::DefaultListCellRenderer::getBounds;
	using ::javax::swing::DefaultListCellRenderer::getSize;
	using ::javax::swing::DefaultListCellRenderer::getLocation;
	using ::javax::swing::DefaultListCellRenderer::add;
	using ::javax::swing::DefaultListCellRenderer::getMousePosition;
	void init$(::javax::swing::plaf::metal::MetalFileChooserUI* this$0);
	virtual ::java::awt::Component* getListCellRendererComponent(::javax::swing::JList* list, Object$* value, int32_t index, bool isSelected, bool cellHasFocus) override;
	using ::javax::swing::DefaultListCellRenderer::repaint;
	using ::javax::swing::DefaultListCellRenderer::setUI;
	using ::javax::swing::DefaultListCellRenderer::requestFocus;
	using ::javax::swing::DefaultListCellRenderer::requestFocusInWindow;
	using ::javax::swing::DefaultListCellRenderer::remove;
	using ::javax::swing::DefaultListCellRenderer::list;
	::javax::swing::plaf::metal::MetalFileChooserUI* this$0 = nullptr;
	::javax::swing::plaf::metal::MetalFileChooserUI$IndentIcon* ii = nullptr;
};

			} // metal
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_metal_MetalFileChooserUI$DirectoryComboBoxRenderer_h_