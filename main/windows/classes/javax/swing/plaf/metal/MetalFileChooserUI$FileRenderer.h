#ifndef _javax_swing_plaf_metal_MetalFileChooserUI$FileRenderer_h_
#define _javax_swing_plaf_metal_MetalFileChooserUI$FileRenderer_h_
//$ class javax.swing.plaf.metal.MetalFileChooserUI$FileRenderer
//$ extends javax.swing.DefaultListCellRenderer

#include <javax/swing/DefaultListCellRenderer.h>

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {
				class MetalFileChooserUI;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

class $export MetalFileChooserUI$FileRenderer : public ::javax::swing::DefaultListCellRenderer {
	$class(MetalFileChooserUI$FileRenderer, $NO_CLASS_INIT, ::javax::swing::DefaultListCellRenderer)
public:
	MetalFileChooserUI$FileRenderer();
	using ::javax::swing::DefaultListCellRenderer::contains;
	using ::javax::swing::DefaultListCellRenderer::enable;
	using ::javax::swing::DefaultListCellRenderer::getBounds;
	using ::javax::swing::DefaultListCellRenderer::getSize;
	using ::javax::swing::DefaultListCellRenderer::getLocation;
	using ::javax::swing::DefaultListCellRenderer::add;
	using ::javax::swing::DefaultListCellRenderer::getMousePosition;
	void init$(::javax::swing::plaf::metal::MetalFileChooserUI* this$0);
	using ::javax::swing::DefaultListCellRenderer::repaint;
	using ::javax::swing::DefaultListCellRenderer::setUI;
	using ::javax::swing::DefaultListCellRenderer::requestFocus;
	using ::javax::swing::DefaultListCellRenderer::requestFocusInWindow;
	using ::javax::swing::DefaultListCellRenderer::remove;
	using ::javax::swing::DefaultListCellRenderer::list;
	::javax::swing::plaf::metal::MetalFileChooserUI* this$0 = nullptr;
};

			} // metal
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_metal_MetalFileChooserUI$FileRenderer_h_