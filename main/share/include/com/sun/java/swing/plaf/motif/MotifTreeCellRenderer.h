#ifndef _com_sun_java_swing_plaf_motif_MotifTreeCellRenderer_h_
#define _com_sun_java_swing_plaf_motif_MotifTreeCellRenderer_h_
//$ class com.sun.java.swing.plaf.motif.MotifTreeCellRenderer
//$ extends javax.swing.tree.DefaultTreeCellRenderer

#include <javax/swing/tree/DefaultTreeCellRenderer.h>

#pragma push_macro("LEAF_ICON")
#undef LEAF_ICON
#pragma push_macro("LEAF_SIZE")
#undef LEAF_SIZE

namespace javax {
	namespace swing {
		class Icon;
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

class $import MotifTreeCellRenderer : public ::javax::swing::tree::DefaultTreeCellRenderer {
	$class(MotifTreeCellRenderer, 0, ::javax::swing::tree::DefaultTreeCellRenderer)
public:
	MotifTreeCellRenderer();
	using ::javax::swing::tree::DefaultTreeCellRenderer::contains;
	using ::javax::swing::tree::DefaultTreeCellRenderer::enable;
	using ::javax::swing::tree::DefaultTreeCellRenderer::getBounds;
	using ::javax::swing::tree::DefaultTreeCellRenderer::getSize;
	using ::javax::swing::tree::DefaultTreeCellRenderer::getLocation;
	using ::javax::swing::tree::DefaultTreeCellRenderer::add;
	using ::javax::swing::tree::DefaultTreeCellRenderer::getMousePosition;
	using ::javax::swing::tree::DefaultTreeCellRenderer::list;
	void init$();
	static ::javax::swing::Icon* loadLeafIcon();
	using ::javax::swing::tree::DefaultTreeCellRenderer::repaint;
	using ::javax::swing::tree::DefaultTreeCellRenderer::setUI;
	using ::javax::swing::tree::DefaultTreeCellRenderer::requestFocus;
	using ::javax::swing::tree::DefaultTreeCellRenderer::requestFocusInWindow;
	using ::javax::swing::tree::DefaultTreeCellRenderer::remove;
	static const int32_t LEAF_SIZE = 13;
	static ::javax::swing::Icon* LEAF_ICON;
};

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#pragma pop_macro("LEAF_ICON")
#pragma pop_macro("LEAF_SIZE")

#endif // _com_sun_java_swing_plaf_motif_MotifTreeCellRenderer_h_